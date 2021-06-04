#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	string name;
	void show() {
		cout << "Name : " << name << endl;
	}
};