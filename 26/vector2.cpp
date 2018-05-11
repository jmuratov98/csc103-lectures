/*
 * Vector2.cpp
 *
 *  Created on: May 10, 2018
 *      Author: Joseph Muratov
 */

#include "Vector2.h"
#include <assert.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// constructor
vector2::vector2(size_t initCapacity)
{
	this->SIZE = 0;
	this->capacity = initCapacity;
	this->data = new int[this->capacity];
}

vector2::vector2(const vector2& V)
{
	this->SIZE = V.SIZE;
	this->capacity = V.capacity;
	this->data = new int[this->capacity];
	for(size_t i = 0; i < this->SIZE; i++)
		this->data[i] = V.data[i];
}

// destructor
vector2::~vector2()
{
	delete [] data;
}

// puts x into end of the vector
void vector2::push_back(int x)
{
	if(SIZE == capacity)
	{
		capacity *= 2;
		int* larger = new int[capacity];
		for(size_t i = 0; i < SIZE; i++)
			larger[i] = this->data[i];
		delete [] data;
		this->data = larger;
	}
	this->data[SIZE] = x;
	SIZE++;
}

// deletes the last element
void vector2::pop_back()
{
	assert(SIZE > 0);
	SIZE--;
}

int vector2::back()
{
	assert(SIZE > 0);
	return data[SIZE-1];
}

vector2& vector2::operator=(vector2 V)
{
	int* tmp = this->data;
	this->data = V.data;
	V.data = tmp;
	this->SIZE = V.SIZE;
	this->capacity = V.capacity;
	return (*this);
}

int& vector2::operator[](size_t index)
{
	assert(index < SIZE);
	return data[index];
}

// returns the size
size_t vector2::size()
{
	return SIZE;
}
