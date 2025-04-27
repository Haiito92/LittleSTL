#pragma once

namespace Collections 
{
	class SimpleArray
	{
	private:
		int* m_data;
		size_t m_size;
		size_t m_capacity;

	public:
		SimpleArray();
		~SimpleArray();

		void PushBack(int value);
		int& operator[](size_t index);

		size_t GetSize() const;
	};
}


