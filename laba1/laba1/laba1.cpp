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
	cout << "������� ���: " << endl;
	cin >> name;
	cout << "������� ���?" << endl;
	cin >> age;
}
void Worker::getData() {
	cout << "���: " << name << endl;
	cout << "�������: " << age << endl;
	cout << "��������: " << salary << endl;
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