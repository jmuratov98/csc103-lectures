#include <iostream>
#include <map>

using namespace std;

int fib(int n);

int main()
{
	int n;
	
	while(cin >> n)
		cout << fib(n) << endl;
	
	return 0;
}

int fib(int n)
{
	static std::map<int, int> cache{{0, 0}, {1, 1}};

	auto found = cache.find(n);
	if (found != std::end(cache))
	{
		// For debugging purposes, to check that the cache is doing something
		std::cout << "Found in cache: " << n << " -> " << found->second << '\n';
		return found->second;
	}

	int result = fib(n - 1) + fib(n - 2);
	cache[n] = result;
	return result;
}
