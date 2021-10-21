#include <iostream>

using namespace std;

int main(void) {
	int num_cases;
	cin >> num_cases;

	for (int c = 0; c < num_cases; ++c) {
		int length, num_ants;
		cin >> length >> num_ants;

		int earliest = 0, latest = 0;
		for (int i = 0; i < num_ants; ++i) {
			int pos;
			cin >> pos;

			earliest = max(earliest, min(pos, length - pos));
			latest = max(latest, max(pos, length - pos));
		}

		cout << earliest << ' ' << latest << endl;
	}

	return 0;
}
