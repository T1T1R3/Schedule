#include <iostream>
#include "task.h"

using namespace std;

int main() {

	newSch n1;
	int opc;

	do {
		system("cls");
		cout << "MENU" << endl;

		cout << "\n1 = Inserir novas tarefas" << endl;
		cout << "2 = Ver tarefas" << endl;
		cout << "3 = Editar tarefas" << endl;

		cout << "\nOpc:" << endl;
		cin >> opc;

		system("cls");

		switch (opc) {
		case 1:
			n1.insertNewTask();
			break;

		}

	} while (opc != 0);


	return 0;
}