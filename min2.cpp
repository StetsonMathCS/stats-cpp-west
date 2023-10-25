nclude "stats_min.h"
using namespace std;
#include <sstream>
#include <string>
#include <algorithm>

string line;


int min_val = 0;

inFile.open("file.txt");

vector<int> numbers;



while (getline(inFile,line)){


	istringstream iss(line);


	int a;

	iss >> a;


	//Adds the element to the array
	numbers.push_back(a);

	//If (!(iss >>a)){break;}
}


int size = numbers.size();



//Inits a # as the smallest
min_val = numbers[0];


for(i=0; i<size; i++){

	if(numbers[i]<min_val){


		min_val = numbers[i];

	}

}





