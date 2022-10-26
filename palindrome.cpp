// CPP code to form binary palindrome
#include <iostream>
#include <vector>
using namespace std;

// function to apply DFS
void dfs(int parent, int ans[], vector<int> connectchars[])
{
	// set the parent marked
	ans[parent] = 1;

	// if the node has not been visited set it and
	// its children marked
	for (int i = 0; i < connectchars[parent].size(); i++) {
		if (!ans[connectchars[parent][i]])
			dfs(connectchars[parent][i], ans, connectchars);
	}
}

void printBinaryPalindrome(int n, int k)
{
	int arr[n], ans[n] = { 0 };

	// link which digits must be equal
	vector<int> connectchars[k];

	for (int i = 0; i < n; i++)
		arr[i] = i % k;

	// connect the two indices
	for (int i = 0; i < n / 2; i++) {
		connectchars[arr[i]].push_back(arr[n - i - 1]);
		connectchars[arr[n - i - 1]].push_back(arr[i]);
	}

	// set everything connected to
	// first character as 1
	dfs(0, ans, connectchars);

	for (int i = 0; i < n; i++)
		cout << ans[arr[i]];
}

// driver code
int main()
{
	int n = 10, k = 4;
	printBinaryPalindrome(n, k);
	return 0;
}
