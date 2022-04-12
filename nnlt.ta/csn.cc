#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, r, n;
	cin>>a>>r>>n;
	long long sum = a, number = a;
	for (long long i = 0; i < n -1; i++) {
		number *= r;
		sum += number;
	}
	cout << sum << endl;

    return 0;
}