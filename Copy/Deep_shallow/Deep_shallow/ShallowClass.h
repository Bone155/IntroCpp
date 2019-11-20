#pragma once
class ShallowClass
{
	int * m_data;
public:
	ShallowClass();
	ShallowClass(int value);
	~ShallowClass();

	void print();

	void setValue(int value) { *m_data = value; }

};

