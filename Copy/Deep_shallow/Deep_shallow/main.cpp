#include <iostream>
#include "ShallowClass.h"
#include "DeepClass.h"

using namespace std;

void shallow() {
	ShallowClass shallom1(10);
	ShallowClass shallom2 = shallom1;
	ShallowClass shallom3;

	shallom3 = shallom1;

	shallom1.setValue(27);

	shallom1.print();
	shallom2.print();
	shallom3.print();
}

void deep() {
	DeepClass d1(10);
	DeepClass d2 = d1;
	DeepClass d3;

	d3 = d1;

	d1.print();
	d2.print();
	d3.print();
}

int main() {

	shallow();
	cout << endl;
	deep();

	while (true) {};
	return 0;
}