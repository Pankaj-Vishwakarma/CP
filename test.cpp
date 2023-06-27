// C++ code to demonstrate sorting of a
// 2D vector on basis of a column
#include <algorithm> // for sort()
#include <iostream>
#include <vector> // for 2D vector
using namespace std;

// Driver function to sort the 2D vector
// on basis of a particular column
static bool sortcol(vector<int>& v1,vector<int>& v2)
{
	return v1[0] < v2[0];
}

// Driver Code
int main()
{
	vector<vector<int> > vect{ { 3, 5, 1 },
							{ 4, 8, 6 },
							{ 7, 2, 9 } };
	int m = vect.size();
	int n = vect[0].size();

	cout << "The Matrix before sorting is:\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << vect[i][j] << " ";
		cout << endl;
	}

	sort(vect.begin(), vect.end(), sortcol);

	cout << "The Matrix after sorting is:\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << vect[i][j] << " ";
		cout << endl;
	}
	return 0;
}
