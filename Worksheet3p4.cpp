// Worksheet3p4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int a;
double func=0;
double last=0;

int main()
{
	cout << "Please enter a number: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		last = func;
		for (int j = 1; j <= i; j++) {
			func = func + pow(j, 1.0 / i);
		}
		
		cout << func << endl;
		
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file