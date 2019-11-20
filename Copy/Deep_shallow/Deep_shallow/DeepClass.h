#pragma once
class DeepClass
{
	int* m_data;
public:
	DeepClass();
	DeepClass(int value);
	DeepClass(const DeepClass& other);
	~DeepClass();

	DeepClass& operator= (const DeepClass& other);

	void print();

	void setValue(int value) { *m_data = value; };
};

