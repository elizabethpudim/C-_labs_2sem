#include <iostream>
#include <string>
using namespace std;

class Worker{
private:
	string name;
	int salary = 5000, age;
public:
	void setData();
	void getData();
};

void Worker::setData() {
	cout << "Введите имя: " << endl;
	cin >> name;
	cout << "Сколько лет?" << endl;
	cin >> age;
}
void Worker::getData() {
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Зарплата: " << salary << endl;
}
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	Worker Michael;
	Worker* Liza;
	Michael.setData();
	Michael.getData();
	Liza = new Worker;
	Liza->setData();
	Liza->getData();
	system("pause");
	return 0;
}