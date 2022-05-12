//Створіть клас Student, який міститиме інформацію про студента. За допомогою механізму успадкування, реалізуйте клас Aspirant(аспірант — студент, який готується до
//захисту кандидатської роботи) похідний від Student.
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Student
{
protected:
	string name;
	string birthday;
	string nomerPhone;//стрінг щоб можна юуло вказати +38 
	string nameSchool;
	string cityAndCountryOfSchool;
	string nomergrupe;//використав тип стріг тому ,що номер групи може включати букви
public:
	Student() {}//конструктор без параметрів

	void input()//ф-н вводу
	{
		cout << "Введіть ПІБ студента :" << endl;
		getline(cin, name); cout << endl;
		cout << "Введіть дату народженя студента :" << endl;
		cin >> birthday; cin.ignore(100, '\n');//ігноруєм розрив рядка інакше наступна фраза не введеться а перекина далі
		cout << endl;
		cout << "Введіть номер телефона студента : " << endl;
		cin >> nomerPhone; cin.ignore(100, '\n');//ігноруєм розрив рядка 
		cout << endl;		
		cout << "Введіть назву навчального закладу студента :" << endl;
		getline(cin, nameSchool); cout << endl;
		cout << "Введіть місто та країну розміщення навчального закладу студента :" << endl;
		getline(cin, cityAndCountryOfSchool); cout << endl;
		cout << "Введіть номер групи студента" << endl << endl;
		cin >> nomergrupe; cin.ignore(100, '\n');//ігноруєм розрив рядка 
		cout << endl;
	}
	void output() //ф-н виводу
	{
		cout << "ПІБ:" << name << endl;
		cout << "Дата народження:" << birthday << endl;
		cout << "Номер телефону:" << nomerPhone << endl;
		cout << "Назва навчального закладу:" << nameSchool << endl;
		cout << "Розташування навчального закладу:" << cityAndCountryOfSchool << endl;
		cout << "Номер групи студента:" << nomergrupe << endl;
	}
	~Student() {}//деструктор
};

class Aspirant:public Student
{
private:
	string sub;//галузь кандидатської
	string thema;//тема роботи
	string day;//день здачі
public:
	Aspirant(){}//конструктор без параметрів

	void input() //ф-н вводу
	{
		Student::input();
		cout << " Ведіть назву галузі по якій написана кадитатьська робота : ";
		getline(cin, sub); cout << endl;
		cout << "Тема кандидатської роботи :";
		getline(cin,thema); cout << endl;
		cout << "День здачі роботи : ";
		getline(cin, day); cout << endl;		
	}

	void output()//ф-н виводу
	{
		Student::output();
		cout << "Галузь по якій написана кадитатьська робота : " << sub << endl;
		cout << "Тема кандидатської роботи : " << thema << endl;
		cout << "День здачі роботи : " << day << endl;		
	}

	~Aspirant() {}//деструктор
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть данні першого  аспіранта " << endl;
	Aspirant first;//створюєм обєкт класу аспірант і так дальше.......
	first.input();
	cout << "Введіть данні другого аспіранта " << endl;
	Aspirant second;
	second.input();
	cout << "Введіть данні третього аспіранта " << endl;
	Aspirant third;
	third.input();
	int a = 0;
	char c = 0;
	cout << "Якщо бажаєте дізнатися дані когось з аспірантів виберіть наступну дію:" << endl;
	cout << "1 : Данні першого аспіранта " << endl;
	cout << "2 : Данні другого аспіранта" << endl;
	cout << "3 : Данні третього аспіранта" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		first.output();
		break;
	case 2:
		second.output();
		break;
	case 3:
		third.output();
		break;
	}

}