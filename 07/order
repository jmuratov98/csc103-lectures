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

int main()
{
	int n; //holds a single value
	vector<int> V;

	while(cin >> n)
	{
		V.push_back(n);
	}

	selectionSort(V);

	for(size_t i = 0; i < V.size(); i++)
	{
		cout << V[i] << endl;
	}

	return 0;
}
