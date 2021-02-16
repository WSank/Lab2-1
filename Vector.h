#pragma once
#include <iostream>

class Vector
{
	private:
		int* vec;
		unsigned int size;
	
	public:
		Vector();
		Vector(const Vector& other);
		Vector(const size_t& size, const int& initValue);
			
		Vector(Vector& vector);
		
		int count() {
			return size;
		}


		~Vector() { delete vec; };
};


Vector::Vector()
{
	
}

Vector::Vector(const size_t& size, const int& initValue) {
	
}