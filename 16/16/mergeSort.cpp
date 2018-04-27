#include <iostream>
#include <cstdio>

//from <iostream>
using std::cin;
using std::cout;
using std::endl;

// Functions
void mergeSort(int* A, size_t n, int* S);
void merge(int* L, size_t nL, int* R, size_t nR, int* S);
bool search(int* A, size_t size, int x);

int main()
{
	// Enters the size of the array
	size_t n;
	cout << "Enter the value for n" << endl;
	cin >> n;

	// Declares the arrays
	int A[n];
	//
	int aux[n];

	// Enters the elements into the array
	int num;
	printf("Enter %i, numbers.\n",n);
	for(size_t i = 0; i < n && cin >> num; i++)
	{
		A[i] = num;
	}

	mergeSort(A,n,aux);
	
	// Dsiplays the array
	for(size_t i = 0; i < n; i++)
		printf("A[%lu] = %i\n",i,A[i]);


	// search
	int x;
	bool found = false;
	cout << "Enter the number your looking for" << endl;
	cin >> x;
	found = search(A,n,x);

	if(found) cout << x << " was found" << endl;
	else cout << "sorry, the number was not found" << endl;

	return 0;
}

void mergeSort(int* A, size_t n, int* S)
{
	if(n < 2) return;

	int mid = n/2;
	mergeSort(A,mid,S);
	mergeSort(A+mid,n-mid,S);

	merge(A,mid,A+mid,n-mid,S);

	// copy elements in S into A
	for(size_t i = 0; i < n; i++) A[i] = S[i];
}

void merge(int* L, size_t nL, int* R, size_t nR, int* S)
{
	size_t i = 0, j = 0, k = 0;
	while(i < nL && j < nR)
	{
		if(L[i] <= R[j])
		{
			S[k] = L[i];
			i++;
		}
		else
		{
			S[k] = R[j];
			j++;
		}
		k++;
	}

	// copies any remaining values from L
	while(i < nL)
	{
		S[k] = L[i];
		i++;
		k++;
	}

	// copies any remaining values from R
	while(j < nR)
	{
		S[k] = R[j];
		j++;
		k++;
	}
}

bool search(int* A, size_t size, int x)
{	
	if(size < 1) return false;

	size_t mid = size/2;
	if(x== A[mid]) return true;
	
	if(x < A[mid]) search(A,mid,x);
	else search(A+mid,size-mid,x);
}
