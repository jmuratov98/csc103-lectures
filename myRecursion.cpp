#include <cstdio>
#include <getopt.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

static const char* usage = 
"Usage: %s [OPTIONS]...\n"
"Limited clone of recursion. Suppoted Options:\n\n"
" 	-p,--print-vertically    prints inputs vertically.\n"
" 	-s,--search              searches for the input.\n"
" 	-m,--merge-sort          sorts an array.\n"
" 	--help                   shows this message and exits the program.\n";

// functions
void mergeSort(int* A, size_t n, int* aux);
void merge(int* L, size_t nL, int* R, size_t nR, int* S);
bool search(int* A, int size, int x);
void printVertically(unsigned long n);

int main(int argc, char* argv[])
{
	// define long options
	static int printvertically = 0, search = 0, mergesort = 0;
	static option long_opts[] = {
		{"print-vertically", 	no_argument, 	0, 	'p'},
		{"search", 				no_argument, 	0, 	's'},
		{"merge-sort", 			no_argument, 	0, 	'm'},
		{"help", 				no_argument, 	0, 	'h'},
		{0,0,0,0}
	};
	// process the options
	char c;
	int opt_index = 0;
	while((c = getopt_long(argc, argv, "psmh", long_opts, &opt_index)) != -1)
	{
		switch(c)
		{
			case 'p':
				printvertically = 1;
				break;
			case 's':
				search = 1;
				break;
			case 'm':
				mergesort = 1;
				break;
			case 'h':
				printf(usage, argv[0]);
				return 0;
			case '?':
				printf(usage,argv[0]);
				return 1;
		}
	}

	cout << "Enter how many elements you want" << endl;
	int n; // n is  the total number of elements in the array
	cin >> n;

	int A[n]; 	// Initializes the array
	int Aux[n]; // Initializes an auxillary array
	
	// Enters elements into array A[n]
	printf("Enter %i random numbers\n", n);
	for(size_t i = 0; i < n; i++)
	{
		int x; // x is the number that the user inputs for A[i]
		cin >> x;
		A[i] = x;
	}

	for(size_t i = 0; i < n; i++)
		printf("A[%lu] = %i\n",i,A[i]);

	if(mergesort == 1)
	{
		mergeSort(A,n,Aux);

		for(size_t i = 0; i < n; i++)
			printf("A[%lu] = %i\n",i,A[i]);

		if(search == 1)
		{
			// code goes here
		}
		
		if(printvertically == 1)
		{
			// code goes here
		}
		else
		{
			// code goes here
		}

	}
	else
	{
		// code goes here
		if(search == 1)
		{
			// code goes here
		}
		
		if(printvertically == 1)
		{
			// code goes here
		}
		else
		{
			// code goes here
		}
	}

}

void mergeSort(int* A, size_t n, int* aux)
{
	if(n < 2)
		return;

	int mid = n/2;
	mergeSort(A,mid,aux);
	mergeSort(A+mid,n-mid,aux);
	merge(A,mid,A+mid,n-mid,aux);

	// Then copy aux into A
	for(size_t i = 0; i < n; i++)
		A[i] = aux[i];
}

void merge(int* L, size_t nL, int* R, size_t nR, int* aux)
{
	for(size_t k = 0; k < nL; k++)
		printf("L[%lu] = %i\n",k,L[k]);
	for(size_t k = 0; k < nR; k++)
		printf("R[%lu] = %i\n",k,R[k]);

	for(size_t i = 0; i < nL; i++)
	{
		for(size_t j = 0; j < nR; j++)
		{
			if(L[i] > R[j])
			{
				aux[i] = R[j];
			}
			else
			{
				aux[i] = L[i];
			}
		}
	}
}
