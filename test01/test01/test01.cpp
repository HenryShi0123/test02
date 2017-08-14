#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main(void)
{
	int i = INT_MAX;

	cout << "hello world" << endl;
	cout << "Join GitHub." << endl;

	const int j = 12;

	cout << "j = " << i << endl;

	// C++操作符的优先级
	float logs = 120 / 4 * 5;

	cout << "float logs = 120 / 4 * 5 = " << logs << endl;

	logs = 120 / (4 * 5);
	cout << "logs = 120 / (4 * 5) = " << logs << endl;


	cout.setf(ios::fixed, ios::floatfield);

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
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";

	int  total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total += yams[2] * yamcosts[2];

	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof(yams);
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";



	double earnings[4]{ 1.23e4, 1.6e4, 1.1e4, 1.7e4 };

	cout << "earnings[3] = " << earnings[3] << endl;


	//string practice
	cout << "I`d give my right arm to be" " a great violinist.\n";
	cout << "I`d give my right arm to be a great violinist.\n";
	cout << "I`d give my right ar"
		"m to be a great violinist.\n";
#if 0
#if 1
	const int iSize = 15;
	char name1[iSize];
	char name2[iSize] = "C++owboy";

	cout << "Howdy! I`m " << name2;
	cout << "! What`s your name?\n";

	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are first 3 character of my name: ";
	cout << name2 << endl;
#endif

	cout << "Try cin\n";
	const int arSize = 20;
	char dessert[arSize];
	char name3[arSize];
#if 1
	cout << "Enter your name:\n";
	cin >> name3;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name3 << ".\n";

	cout << "Try cin.getline\n";
	memset(name3, 0, sizeof(name3));
	memset(dessert, 0, sizeof(dessert));

	cout << "Enter your name:\n";
	cin.getline(name3, arSize);
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, arSize);
	cout << "I have some dilicious " << dessert;
	cout << " for you, " << name3 << endl;
#endif
	cout << "Try cin.get()\n";
	memset(name3, 0, sizeof(name3));
	memset(dessert, 0, sizeof(dessert));

	cout << "Enter your name:\n";
	cin.get(name3, arSize).get();
	cout << "Enter your favorite dessert:\n";
	//cin.get(); // 去除换行符
	cin.get(dessert, arSize).get();
	cout << "I have some dilicious " << dessert;
	cout << " for you, " << name3 << endl;


	cout << "What year was your house built?\n";
	int year;
	(cin >> year).get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
#endif
	cout << "\nString class parts...\n";
	
	string str1;
	string str2{ "henry" };
	str1 = str2;

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str1 + str2 = " << str1 + str2 << endl;
	//Push any kes to quit
	cout << "Enter any keys to quit.\n";
	cin.get();
	cout << "Ready to quit!" << endl;
	while (i--);
	return i;
}