#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	bool prime = true
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			prime = false;
			break;
		}
		if (prime) {
			cout << "prime";
		}
		else {
			cout << "composite";
		}
		return 0;
	}
}