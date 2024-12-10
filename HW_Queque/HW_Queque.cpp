// HW_Queque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Queue.h"
#include <iostream>
using namespace std;
int main()
{
	myQueue::Queue<string> a;
	a.push_back("one");
	a.push_back("two");
	a.push_back("three");
	a.push_back("four");
	a.push_back("five");
	a.push_back("six");
	a.show();
	cout << "-----------";
	a.pop_front();
	a.push_back("seven");
	a.show();

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
