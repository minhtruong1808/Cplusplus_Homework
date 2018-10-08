// ex02_30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std; 

int main()
{
	int weight = 0;
	int height = 0;
	int BMI = 0;
	cout << "Enter your weight in pounds: ";
	cin >> weight;

	cout << "Enter your height in inches: ";
	cin >> height;

	BMI = (weight * 703) / (height * height);

	cout << "Your BMI value is: " << BMI << endl;
	if (BMI < 18.5)
		cout << "You are underweight";
	else if (18.5 < BMI < 24.9)
		cout << "You are normal";
	else if (25 < BMI < 29.9)
		cout << "You are overweight";
	else if (BMI > 30)
		cout << "You are obese" << endl;

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
