// Финальный проект первого курся.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <ostream>
#include <sstream>
#include <cmath>
#include <map>
#include <vector>

using namespace std;


// Реализуйте функции и методы классов и при необходимости добавьте свои

class Date {
	
public:
	Date(const string& s) {
		stringstream ss(s);
		ss >> year;
		ss.ignore(1);
		ss >> month;
		ss.ignore(1);
		ss >> day;
	}

	int GetYear() const {
		return year;
	};
	int GetMonth() const {
		return month;
	};
	int GetDay() const {
		return day;
	};

private:
	int year;
	int month;
	int day;

};

bool operator<(const Date& lhs, const Date& rhs);

class Database {
public:
	void AddEvent(const Date& date, const string& event);
	bool DeleteEvent(const Date& date, const string& event);
	int  DeleteDate(const Date& date);

	/* ??? */ Find(const Date& date) const;

	void Print() const;

private:

	vector<map<Date, string>> a;

};

int main() {
	Database db;

	string command;
	while (getline(cin, command)) {
		if (command == "Add") {
			string d, e;
			cin >> d >> e;
			Date date(d);
		}


		// Считайте команды с потока ввода и обработайте каждую
	}

	return 0;
}
