#include <iostream>
#include "windows.h" 
#include <clocale>


using namespace std;

void type_text(string str) { // ��� ��������� ������ 

	for (auto ch : str) {
		cout << ch;
		Sleep(30);
	}
	cout << endl;
}

 // ���� �� ��������� �����
class koza {
public:
	int maney;
	int brain;
	int hp;
	int happy;
	int happy_brother;



	void kozaa(int maney_2, int brain_2, int hp_2, int happy_2, int happy_brother_2) {

		
		maney = maney_2 = 1000;
		brain_2 = 100;
		hp_2 = 50;
		happy_2 = 100;
		happy_brother_2 = 100;


		char swt;


		string str = "��� ������ ���� ������ ���� �.�.�.�.";
		type_text(str);
		Sleep(700);
		system("cls");
		str = "���� ����� � ���� �������, ��� ������ ������?";
		type_text(str);
		cout << "1)������" << endl << "2)��� ��� �������� � ��������" << endl << "3)��������" << endl << "4)�������" << endl;
		cin >> swt;
		switch (swt) {
		case '1': break;
		case '2': brain_2 = brain_2 - 5; break;
		case '3': brain_2 = brain_2 + 10; hp_2 = hp_2 - 5; break;
		case '4': brain_2 = brain_2 - 10; hp_2 = hp_2 + 5; break;
		}
		system("cls");
		str = "���� ���������, � �������� ��� ����?";
		type_text(str);
		cout << "1)������� ��� �� ������" << endl << "2)�������������� �����" << endl << "3)������� ������" << endl << "4)���� ����� �������" << endl;
		cin >> swt;
		switch (swt) {
		case '1': brain_2 = brain_2 + 5; break;
		case '2': hp_2 = hp_2 + 5; maney_2 = maney_2 + 200;  break;
		case '3': brain_2 = brain_2 - 10; maney_2 = maney_2 - 200; break;
		case '4': brain_2 = brain_2 - 10; happy_brother_2 = happy_brother_2 + 10; break;
		}
		system("cls");
		str = "������ ���� �� ����";
		type_text(str);
		cout << "1)������� ��� ������ ��� ����" << endl << "2)���� �� �����" << endl << "3)�������� � �������� ��������" << endl << "4)����� � �� �����" << endl;
		cin >> swt;
		switch (swt) {
		case '1': brain_2 = brain_2 + 10; happy_2 = happy_2 + 10; break;
		case '2': happy_2 = happy_2 - 10; maney_2 = maney_2 - 500; brain_2 = brain_2 + 20; break;
		case '3': break;
		case '4': happy_brother_2 = happy_brother_2 - 10; break;
		}
		system("cls");
		str = "� ������ ����� ������ ����?";
		type_text(str);
		cout << "1)� ����" << endl << "2)�� ��������" << endl << "3)������ ������� �� ������" << endl << "4)����� � ����� � ������ ����� �����" << endl;
		cin >> swt;
		switch (swt) {
		case '1': maney_2 = maney_2 - 600; happy_2 = happy_2 + 50; happy_brother_2 = happy_brother_2 + 50; break;
		case '2': maney_2 = maney_2 - 200; happy_2 = happy_2 + 50; happy_brother_2 = happy_brother_2 + 50; brain_2 = brain_2 - 40; break;
		case '3': happy_2 = happy_2 + 20; happy_brother_2 = happy_brother_2 + 20; break;
		case '4': happy_2 = happy_2 - 20; happy_brother_2 = happy_brother_2 - 20; maney_2 = maney_2 - 500; brain_2 = brain_2 + 50; break;
		}
		system("cls");
		str = "����������� ���";
		type_text(str);
		cout << "1)��������" << endl << "2)������� ��������� � ����� �����" << endl << "3)����� ��������" << endl << "4)��������� ������� ���� ���" << endl;
		cin >> swt;
		switch (swt) {
		case '1': happy_2 = happy_2 - 20; happy_brother_2 = happy_brother_2 - 20; brain_2 = brain_2 + 5; break;
		case '2': maney_2 = maney_2 + 500; happy_2 = happy_2 + 20; happy_brother_2 + 20; brain_2 = brain_2 - 20; break;
		case '3': maney_2 = maney_2 - 200; brain_2 = brain_2 + 5; happy_2 = happy_2 = happy_brother_2 - 15; break;
		case '4': happy_2 = happy_2 + 15; brain_2 = brain_2 + 20; break;
		}
		system("cls");
		str = "���� �������";
		type_text(str);
		cout << "1)������ �� ������" << endl << "2)��������� ���������" << endl << "3)��������� � ������" << endl << "4)������� �������� " << endl;
		cin >> swt;
		switch (swt) {
		case '1': happy_2 = happy_2 - 10; happy_brother_2 - 20; break;
		case '2': maney_2 = maney_2 + 500; brain_2 = brain_2 + 20; happy_brother_2 + 20; break;
		case '3': maney_2 = maney_2 - 500; brain_2 = brain_2 + 10; happy_2 = happy_2 + 20; happy_brother_2 = happy_brother_2 + 50; break;
		case '4': happy_brother_2 = happy_brother_2 - 30; brain_2 = brain_2 - 20; break;
		}
		system("cls");
		str = "��������� ��������";
		type_text(str);
		cout << "1)������� ����������" << endl << "2)�������� ������ � ������� �����" << endl << "3)������� ���������" << endl << "4)��������� ����� �������� " << endl;
		cin >> swt;
		switch (swt) {
		case '1': maney_2 = maney_2 - 800;  brain_2 = brain_2 + 15; happy_2 = happy_2 + 20; break;
		case '2': maney_2 = maney_2 + 500; brain_2 = brain_2 + 10; happy_2 = happy_2 + 20; break;
		case '3': maney_2 = maney_2 - 500; brain_2 = brain_2 + 10; happy_2 = happy_2 + 20; happy_brother_2 = happy_brother_2 + 50; break;
		case '4': happy_brother_2 = happy_brother_2 - 30; brain_2 = brain_2 - 20; break;
		}


	}
	void maney_3(int maney_3){

		maney_3 = maney;
		return maney;
	}
};
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");

	koza kz;
	
	 cout << maney;
	system("pause >> NUL");
	return 0;
}