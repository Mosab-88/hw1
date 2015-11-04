
#include <iostream>

using namespace std;

int main() {
	int n, firstTerm = 1, secondTerm = 1, nextTerm;
	cout << "Enter the nummer of Term:" << endl;
	cout << "For N=";
	cin >> n;
	


	for (int i = 1; i <= n - 2; ++i) {
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
	}
	cout << "f(N)= " <<nextTerm << endl;

	return 0;
}
