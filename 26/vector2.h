/*
 * Vector2.h
 *
 *  Created on: May 10, 2018
 *      Author: Joseph Muratov
 */
#ifndef VECTOR2_H_
#define VECTOR2_H_

#pragma once

#include <stddef.h>	//size_t

class vector2
{
private:
	size_t SIZE;
	size_t capacity;
	int* data;

public:
	vector2(size_t initCapacity = 16);	// constructor
	vector2(const vector2& V);			// copy constructor
	~vector2();							// destructor

	vector2& operator=(vector2 V);		// assignment operator
	int& operator[](size_t);			// able to say V[i]

	void push_back(int);				// adds an element to the end of the vector
	void pop_back();					// deletes the last element
	int back();							// returns the last element
	size_t size();						// returns the size of the vector
};

#endif /* VECTOR2_H_ */
