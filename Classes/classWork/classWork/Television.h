#pragma once

class Television
{
	int currentChannel = 11;
	int currentVolume = 70;

public:
	Television();
	~Television();

	void increaseVolume();
	void decreaseVolume();

	int volume();

	void increaseChannel();
	void decreaseChannel();

	int channel();
};

