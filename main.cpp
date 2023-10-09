#include <iostream>
#include <vector>
#include "stats_sum.h"
using namespace std;

int main() {
	double val;
	vector <double> data;
	while (cin >> val) {
		data.push_back(val);
	}
	stats_sum sumer;
	double s = sumer.compute_sum(data);
	cout << "sum: " << s << endl;

}
