//============================================================================
// Name        : main.cpp
// Author      : Joseph Muratov
// Version     :
// Copyright   : Your copyright notice
// Description : Homemade Vector
//============================================================================

#include <iostream>
#include "Vector2.h"

using namespace std;

int main()
{
	vector2 V;
	int x;
	while(cin >> x)
	{
		V.push_back(x);
	}

	vector2 V2(V);

	for(size_t i = 0; i < V2.size(); i++)
		cout << V2[i] << endl;
}
