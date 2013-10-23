#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	string str = "nothelp";
	if(argc > 1) {
		str = string(argv[1]);
	}
	if(str.compare("help") == 0) {
		cout << "How to use:" << endl;
		cout << "./recurrence" << endl;
		cout << "Parameters:" << endl;
		cout << "First parameter (optional, default 10000): bound to reach." << endl;
		cout << "Second parameter (optional, default null): print total number of steps taken at completion. Any parameter passed here will print the steps." << endl;
	}
	else {
		// setup done here
		double stopping;
		bool steps = false;
		unsigned long step = 0;
		if(argc < 2) {
			stopping = 10000;
		}
		else {
			stopping = atof(argv[1]);
		}
		if(argc > 2) {
			steps = true;
		}

		// Algorithm done here
		double x = 2;
		double max = x;
		cout << max << endl;

		do {
			x = x - 1 / x;
			if(x > max) {
				cout << x << endl;
				max = x;
			}
			++step;
		} while(x < stopping);

		if(steps) {
			cout << "Total steps: " << step << endl;
		}
	}

	return 0;
}
