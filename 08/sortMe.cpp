#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& V);
size_t findSmallestIndex(vector<int>& V, size_t start);

int main()
{
	vector<int> V;

	int n;

	while(cin >> n)
		V.push_back(n);

	selectionSort(V);
	for(size_t i = 0; i < V.size(); i++)
	{
		cout << V[i] << endl;
	}
}

void selectionSort(vector<int>& V)
{
	for(size_t i = 0; i < V.size() - 1; i++)
	{
		size_t smallest = findSmallestIndex(V, i);

		int temp = V[smallest];
		V[smallest] = V[i];
		V[i] = temp;
	}
}

size_t findSmallestIndex(vector<int>& V, size_t start)
{
	size_t i = start;

	for(size_t j = start + 1; j < V.size(); j++)
	{
		if(V[j] < V[i])
		{
			i = j;
		}
	}

	return i;
}

//set foldlevel=1
