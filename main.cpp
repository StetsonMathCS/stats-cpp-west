#include <iostream>
#include <vector>

using namespace std;

int main() {
	double val;
	vector<double> data;
		while(cin >> val) {
			data.push_back(val);
		}
stats_sum summer;
double s = summer.compute_sum(data)
	cout << "sum: " << s << endl; 
}
