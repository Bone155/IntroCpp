#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#include "Point2D.h"

using namespace std;

const char * CSI = "\x1b[";
const float FPS = 1.0f / 30.0f;
const int FPS_MILLIS = (int)(FPS * 1000);

const int width = 110;
const int height = 25;

bool enableVirtualTerminal() {
	// Set output mode to handle virtual terminal sequences
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut == INVALID_HANDLE_VALUE) {
		return false;
	}
	DWORD dwMode = 0;
	if (!GetConsoleMode(hOut, &dwMode)) {
		return false;
	}
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	if (!SetConsoleMode(hOut, dwMode)) {
		return false;
	}
	// setup window width/height
	cout << CSI << "?3h";// Sets the console width to 132 columns wide.
	return true;

}

void drawCourt() {
	// set the text colour to bright green
	cout << CSI << 92 << "m";
	for (int i = 0; i < width; i++) {
		cout << CSI << 0 << ";" << i << "H" << (char)205;
		cout << CSI << height << ";" << i << "H" << (char)205;
	}
	for (int i = 0; i < height; i++) {
		cout << CSI << i << ";" << 0 << "H" << (char)186;
		cout << CSI << i << ";" << width << "H" << (char)186;
	}
	cout << CSI << 0 << ";" << 0 << "H" << (char)201;
	cout << CSI << height << ";" << 0 << "H" << (char)200;
	cout << CSI << 0 << ";" << width << "H" << (char)187;
	cout << CSI << height << ";" << width << "H" << (char)188;
}


void main() {
	auto currentTime = chrono::system_clock::now();
	auto lastTime = currentTime;

	Point2D position(132 >> 1, 10);
	Point2D speed(0.5f, 0.5f);

	if (enableVirtualTerminal() == false) {
		std::cout << "The virtual terminal processing mode could not be activated."	<< std::endl;
		std::cout << "Press 'Enter' to exit." << std::endl;
		std::cin.get();
		return;
	}

	drawCourt();

	while (true) 
	{
		lastTime = currentTime;

		cout << CSI << (int)position.y << ";" << (int)position.x << "H";
		cout << CSI << 1 << "P";
		cout << CSI << 1 << "@";

		position += speed;

		if (position.x >= width - 1) {
			position.x = width - 1;
			speed.x = -speed.x;
		}
		if (position.x <= 2) {
			position.x = 2;
			speed.x = -speed.x;
		}
		if (position.y >= height - 1) {
			position.y = height - 1;
			speed.y = -speed.y;
		}
		if (position.y <= 2) {
			position.y = 2;
			speed.y = -speed.y;
		}

		cout << CSI << 93 << "m";

		cout << CSI << (int)position.y << ";" << (int)position.x << "H";
		cout << "O";

		cout << CSI << width << ";" << height << "h";

		currentTime = chrono::system_clock::now();

		while (std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastTime).count() < FPS_MILLIS)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(30));
			currentTime = std::chrono::system_clock::now();
		}

	}

}