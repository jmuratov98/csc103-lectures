#include <iostream>
#include <vector>

using namespace std;

size_t findSmallestIndex(const vector<int>& V, size_t start)
{
	int i = start; // smallest index known so far

	for(size_t j = start + 1; j < V.size(); j++)
	{
		if(V[j] < V[i])
			i = j;
	}

	return i;
}

void selectionSort(vector<int>& V)
{
	for(size_t i = 0; i < V.size()-1; i++)
	{
		size_t smallest = findSmallestIndex(V,i);
		/* swap v[i] <--> v[smallest] */
		int temp = V[smallest];
		V[smallest] = V[i];
		V[i] = temp;
	}
}

bool binarySearch(const vector<int>& V, int x)
{
	int desiredNum = x;

	size_t left = 0;
	size_t right = V.size()-1;
	size_t mid = (right - left)/2;

	bool found = false;
	
	if(V[mid] == desiredNum)
		found = true;

	while(left > right || right < left)
	{
		if(V[mid] == desiredNum)
		{
			found = true;
			break;
		}
		else if(desiredNum > V[mid])
			left = mid + 1;
		else if(desiredNum < V[mid])
			right = mid - 1;

		mid = (right - left)/2;
	}

	return found;
}

int main()
{
	int n; //holds a single value
	vector<int> V;

	cout << "In this code you will input a value for x to search for it" << endl;
	cout << "To do this you will have to input numbers to search for that value of x" << endl;
	cout << "The numbers can be in any order you like to put it in" << endl;

	while(cin >> n)
	{
		V.push_back(n);
	}

	selectionSort(V);

	int x;
	bool found;

	cout << "Input the number you would like to search" << endl;
	cin >> x;

	found = binarySearch(V, x);
	
	if(found)
		cout << "found it" << endl;
	else
		cout << "Did not find it" << endl;

	return 0;
}
