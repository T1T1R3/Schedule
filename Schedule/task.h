#pragma once
#include <iostream>
#include <list>
#include <stack>
#include <string>

using namespace std;

class newSch {
public:
	string newTaskName;
	string newTask;
	string newDate;

	stack <string> taskStack;

	list <string> taskList;
	list <string>::iterator it;

	string day = "__";
	string month = "__";
	string year = "__";

	void insertNewTask() {
		cout << "Insira a nova tarefa:" << endl;
		cin >> newTaskName;
		taskList.push_front(newTaskName);
		taskStack.push(newTaskName);

		system("cls");

		cout << newTaskName << endl;

		cout << "\nInsira a data:" << endl;
		cout << day << "/" << month << "/" << year << endl;
		cin >> day;

		system("cls");

		cout << newTaskName << endl;

		cout << "\nInsira a data:" << endl;
		cout << day << "/" << month << "/" << year << endl;
		cin >> month;

		system("cls");

		cout << newTaskName << endl;

		cout << "\nInsira a data:" << endl;
		cout << day << "/" << month << "/" << year << endl;
		cin >> year;
	}

	void printTask() {
		system("cls");

		cout << "Tarefa do dia: " << day << "/" << month << "/" << year << endl;
		cout << "\n" << newTaskName;
		cin >> newTaskName;
	}

};

class editSch : public newSch {
	string insertTask;
};

