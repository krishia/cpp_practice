#include<iostream>
#include<string>
using namespace std;

class CStudent {
	int Number;
	string Name;
	string Major;
public:
	CStudent() { Number = 2018000000, Name = "ȫ�浿", Major = "��ǻ�Ͱ��а�"; }
	CStudent(int Number_, string Name_, string Major_) { Number = Number_, Name = Name_, Major = Major_; }

	void setNumber(int Number_) {
		Number = Number_;
	}
	void setName(string Name_) {
		Name = Name_;
	}
	void setMajor(string Major_) {
		Major = Major_;
	}

	int getNumber() {
		return Number;
	}
	string getName() {
		return Name;
	}
	string getMajor() {
		return Major;
	}

	void Display() {
		cout << "�й� :" <<Number<< endl;
		cout << "�̸� :" <<Name<< endl;
		cout << "���� :" <<Major << endl;
		cout << endl;
	}
};
int main() {
	CStudent s[3]; // 3���� �л������� ������ class �迭
	int inputNumber; // Ű����� �й��� �Է� ���� ����
	string inputName, inputMajor; // Ű����� �̸�, ������ �Է� ���� ����
	int length = 0; // ���� �Էµ� �л��� ��
	CStudent s1, s2, s3;
	while (1) {
		cout << length + 1 << "��° �л� �Է�: " << endl;
		cout << "�й� : ";
		cin >> inputNumber;
		cout << "�̸� : ";
		cin >> inputName;
		cout << "���� : ";
		cin >> inputMajor;
		if (length == 0) {
			s1.setNumber(inputNumber);
			s1.setName(inputName);
			s1.setMajor(inputMajor);
			cout << "���Է¿Ϸ�" << endl;
			s[0] = s1;
		}
		else if (length == 1) {
			if (s1.getNumber() == inputNumber) {
				cout << "�ߺ��� �й��� �����մϴ�." << endl;
				cout << endl;
				continue;
			}
			s2.setNumber(inputNumber);
			s2.setName(inputName);
			s2.setMajor(inputMajor);
			cout << "���Է¿Ϸ�" << endl;
			s[1] = s2;
		}
		else if (length == 2) {
			if (s1.getNumber() == inputNumber||s2.getNumber()==inputNumber) {
				cout << "�ߺ��� �й��� �����մϴ�." << endl;
				cout << endl;
				continue;
			}
			s3.setNumber(inputNumber);
			s3.setName(inputName);
			s3.setMajor(inputMajor);
			cout << "���Է¿Ϸ�" << endl;
			s[2] = s3;
		}
		cout << endl;
		++length;
		
		if (length == 3) {
			break;
		}
	
	}

	cout << "----��� �Է��� �Ϸ�Ǿ����ϴ�----" << endl;
	cout << "1�л�����" << endl;
	s1.Display();
	cout << endl;
	cout << "2�л�����" << endl;
	s2.Display();
	cout << endl;
	cout << "3�л�����" << endl;
	s3.Display();
	cout << endl;
	return 0;
}




