#include "SimpleArray.h"

namespace Collections 
{
	SimpleArray::SimpleArray() : m_data(nullptr), m_size(0), m_capacity(0)
	{
	}

	SimpleArray::~SimpleArray()
	{
		delete[] m_data;
	}

	void SimpleArray::PushBack(int value)
	{
		if (m_size == m_capacity)
		{
			m_capacity = m_capacity == 0 ? 1 : m_capacity * 2;

			int* newData = new int[m_capacity];

			for (size_t i = 0; i < m_size; i++)
			{
				newData[i] = m_data[i];
			}

			delete[] m_data;
			m_data = newData;
		}

		m_data[m_size++] = value;
	}

	int& SimpleArray::operator[](size_t index)
	{
		return m_data[index];
	}

	size_t SimpleArray::GetSize() const
	{
		return m_size;
	}
}
