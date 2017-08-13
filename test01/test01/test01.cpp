#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
	int i = 0;

	cout << "hello world" << endl;
	cout << "Join GitHub." << endl;

	const int j = 12;

	cout << "j = " << i << endl;

	// C++操作符的优先级
	
	float logs = 120 / 4 * 5;

	cout << "float logs = 120 / 4 * 5 = " << logs << endl;

	logs = 120 / (4 * 5);
	cout << "logs = 120 / (4 * 5) = " << logs << endl;

	
	cout.setf( ios::fixed, ios::floatfield);

	float tree = 3.1;
	//long long guess{ 3.9832 };
	//int debt = 7.2E12;
	float tree2{ 235 };

	cout << "tree = " << tree << endl;
	//cout << "guess " << guess << endl;
	//cout << "debt = " << debt << endl;
	cout << "tree2 = " << tree2 << endl;

	int  thorn = 23;
	cout << (long)thorn << endl;// return a type long conversion of thorn
	cout << (int)thorn << endl; // return a type int conversion of thorn
	cout << long(thorn) << endl;// return a type long conversion of thorn

	cout << "(int)'Q' = " << (int)'Q' << endl;


	//array
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	
	int yamcosts[3] = { 20, 30, 5 };

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with" << yams[1] << " yams costs";
	cout << yamcosts[1] << "cents per yam.\n";

	int  total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total += yams[2] * yamcosts[2];

	cout << "The total yam expense is " << total << "cents.\n";

	cout << "\nSize of yams array = " << sizeof(yams);
	cout << "bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";



	double earnings[4]{ 1.23e4, 1.6e4, 1.1e4, 1.7e4 };

	cout << "earnings[3] = " << earnings[3] << endl;


	//Push any kes to quite
	cin.get();
	while (i);
	return i;
}