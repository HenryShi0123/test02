#include <iostream>
#include <climits>
//#include <cstring>
#include <string>

#include <ctime>
#include <fstream>
#include <cstdlib>

#include <Windows.h>


#define MAX 5

using namespace std;

const int SZC_SIZE = 60;

enum spectrum {
	red,
	orange,
	yellow,
	green,
	blue,
	violet,
	indigo,
	ultraviolet
};

enum bits {
	one = 1,
	two = 2,
	four = 4,
	eight = 8
};


char * getname(void);
void delayS(int secs);
int fill_array(double ar[], int limit);
void countdown(int n);
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

	cout << "\nString class parts...\n";

	string str1;
	string str2{ "henry" };
	str1 = str2;

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str1 + str2 = " << str1 + str2 << endl;
#endif

	spectrum band;
	band = green;
	cout << band << endl;
	//band = 200;
	//band = red + green;
	band = spectrum(4);
	cout << band << endl;

	bits myflag;
	myflag = bits(6);
	cout << myflag << endl;

	char * name;
	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete name;

	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete name;



	cout << "Enter the delay time, in seconds: ";
	float secs;
	while (!(cin >> secs)) {
		cin.clear();
		while (cin.get() != '\n') {
			continue;
		}
		cout << "Please enter a number: \n";
	}
	delayS(secs);

	cout << "Done\a\n";


	double prices[5] = { 4.99, 10.99, 6.87, 7.99, 8.49 };
	for (double x : prices) {
		cout << x << endl;
	}

	char ch;
	int count = 0;
	cout << "Enter characters;enter # to quit:\n";
	cin >> ch;
	while (ch != '#') {
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";


	cout << "cin.get():\nEnter characters;enter # to quit:\n";
	cin >> ch;
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";

	double fish[MAX];

	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << MAX << " fish <q to terminate>.\n";
	cout << "Fish #1: ";
	int im = 0;
	while (im < MAX && cin >> fish[im]) {
		if (++im < MAX)
			cout << "fish #" << im + 1 << ":";
	}
	//calculate average
	double total01 = 0.0;
	int jm;
	for (jm = 0; jm < im; jm++) {
		total01 += fish[jm];
	}
	if (im == 0) {
		cout << "No fish\n";
	}
	else {
		cout << total01 / im << " = average weight of " << im << " fish\n";
	}
	cout << "Done.\n";


	//get data 

	int golf[MAX];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << MAX << " rounds.\n";
	int in;
	for (in = 0; in < MAX; in++) {
		cout << "round #" << in + 1 << ": ";
		while (!(cin >> golf[in])) {
			cin.clear();//reset input 
			while (cin.get() != '\n') {
				//i--;
				continue;// get rid of bad input
			}
			cout << "Please enter a number: ";
		}
	}

	//calculate average
	double total02 = 0.0;
	for (in = 0; in < MAX; in++) {
		total02 += golf[in];
	}

	//report results
	cout << total02 / MAX << " = average score " << MAX << " rounds\n";

	//file option
	cout << "File oprations......\n";
	ofstream outFile;//outFile an ofstream object
	ofstream fout;//fout an ofstream object

	double wt = 123.53;
	char line01[81] = "Objects are closer than they appear.";
	char filename[50];

	outFile.open("fish.txt");//outFile used to write to fish.txt file
	outFile << wt;
	outFile.close();

	cout << "Please enter a file name: ";
	cin >> filename;
	fout.open(filename);

	fout << line01 << endl;
	fout.close();
	while (cin.get() != '\n');
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream carFile;
	carFile.open("carinfo.txt");

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = a_price * 0.913;

	//display infomation on screen with cout
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	//now do exact same things using outFile instead of cout 
	carFile << fixed;
	carFile.precision(2);
	carFile.setf(ios_base::showpoint);
	carFile << "Make and model: " << automobile << endl;
	carFile << "Year: " << year << endl;
	carFile << "Was asking $" << a_price << endl;
	carFile << "Now asking $" << d_price << endl;

	carFile.close();

	//read from file
	cout << "Read from file" << endl;

	ifstream inFile;
	cout << "Open fish.txt..." << endl;
	inFile.open("fish.txt");
	if (!inFile.is_open()) {
		exit(EXIT_FAILURE);
	}
	cout << "open fish.txt sucess" << endl;
	double wtf = 0.0;
	cout << "wt is " << wtf << " before read from fish.txt\n";
	inFile >> wtf;
	cout << "wt is " << wtf << " after read from fish.txt\n";
	inFile.close();

	cout << "Please enter a file name(like fish01.txt): ";
	while (cin.get() != '\n');

	ifstream fin;
	char filename1[SZC_SIZE];
	cin >> filename1;
	fin.open(filename1);
	if (!fin.is_open()) {
		cout << "open fail" << endl;
		delayS(3);
		exit(EXIT_FAILURE);
	}
	char lineInFile[81];
	fin.getline(lineInFile, 81);
	cout << "lineInFile is :\"" << lineInFile << ".\"\n";
	fin.close();
	while (cin.get() != '\n');

	char filename2[SZC_SIZE];
	ifstream dataFileRead;
	cout << "Enter name of data file: ";
	cin.getline(filename2, SZC_SIZE);
	dataFileRead.open(filename2);
	if (!dataFileRead.is_open()) {
		cout << "Could not open the file " << filename2 << endl;
		cout << "Program terminating.\n";
		delayS(3);
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count02 = 0;

	dataFileRead >> value;
	while (dataFileRead.good()) {
		++count02;
		sum += value;
		dataFileRead >> value;
	}
	if (dataFileRead.eof()) {
		cout << "End of file reached.\n";
	}
	else if (dataFileRead.fail()) {
		cout << "Input terminated by data mismatch.\n";
	}
	else {
		cout << "Input terminated for unknow reason.\n";
	}

	if (count02 == 0) {
		cout << "No data processed.\n";
	}
	else {
		cout << "Items read: " << count02 << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count02 << endl;
	}
	dataFileRead.close();

	countdown(5);
	//Push any kes to quit
	cout << "Enter any keys to quit.\n";
	while (cin.get() != '\n');
	cin.get();
	cout << "Ready to quit!" << endl;

	delayS(3);

	return i = 0;
}

char *getname()
{
	char temp[80];

	cout << "Enter last name ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	//strcpy(pn, temp);
	strcpy_s(pn, strlen(temp) + 1, temp);
	return pn;
}

void delayS(int secs)
{
	clock_t delay1 = secs * CLOCKS_PER_SEC;
	clock_t start1 = clock();
	while (clock() - start1 < delay1);
}

int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "Bad input; Input process terminated.\n";
			break;
		}
		else if (temp < 0) {
			break;
		}
		ar[i] = temp;

	}

	return i;
}

void countdown(int n)
{
	cout << "Counting down ..." << n << endl;
	if (n > 0) {
		countdown(n - 1);
	}
	cout << n << ": Kaboom!\n";
}