#include "DeepClass.h"
#include <iostream>


DeepClass::DeepClass()
{
	m_data = new int(0);
}

DeepClass::DeepClass(int value)
{
	m_data = new int(value);
}

DeepClass::DeepClass(const DeepClass & other)
{
	std::cout << "Performing deep copy in copy constructor" << std::endl;
	m_data = new int(*other.m_data);
}


DeepClass::~DeepClass()
{
	delete m_data;
}

DeepClass & DeepClass::operator=(const DeepClass & other)
{
	std::cout << "Performing deep copy in assignment operator" << std::endl;
	*m_data = *other.m_data;
	return *this;
}

void DeepClass::print()
{
	std::cout << "Value " << *m_data << ", at memory location " << m_data << std::endl;
}
