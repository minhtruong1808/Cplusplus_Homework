// HeartRate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "HeartRate.h"
using namespace std;

	
Heartrate::Heartrate(string FName, string LName, int mon, int da, int ye)
{
	firstname = FName;
	lastname = LName;
	month = mon;
	day = da;
	year = ye;
}
void Heartrate::setFirstName(string FName)
{
	firstname = FName;
}
string Heartrate::getFirstName()
{
	return firstname;
}
void Heartrate::setLastName(string LName)
{
	lastname = LName;
}
string Heartrate::getLastName()
{
	return lastname;
}
void Heartrate::setBirthDate(int mon, int da, int ye)
{
	month = mon;
	day = da;
	year = ye;
}
int Heartrate::getBirthDate()
{
	return day/month/year;
}
int Heartrate::getAge()
{
	return 2018 - year;
}
int Heartrate::MaximumHeartRate()
{
	return 220 - getAge();
}
int Heartrate::TargetHeartRate50()
{
	return MaximumHeartRate()*0.5;
}
int Heartrate::TargetHeartRate85()
{
	return MaximumHeartRate()*8.5;
}

int main()
{
	Heartrate Heartrate1("Bruce", "Wayne", 8, 18, 1996);

	cout << "Your age is  " << Heartrate1.getAge() << endl;
	cout << "Your target heart rate should be between " << Heartrate1.TargetHeartRate50() << " and " << Heartrate1.TargetHeartRate85()<< endl;
 
 return 0;
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
