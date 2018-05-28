#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student				//базовий клас студент
{
protected:
	string Name;
	int Age;
	string College;
public:
	void set_College();		//задання вищого навчального закладу;
	void change_name();
	void set_age();
	void get_age();
	void get_all();
};

void Student::set_College() {
	cout << "Enter your College: " << endl;
	cin >> College;
}

void Student::change_name() {
	cout << "Enter new name: " << endl;
	cin >> Name;
}

void Student::set_age() {
	cout << "Enter your age: " << endl;
	cin >> Age;
}
void Student::get_age() {
	cout << Name << "'s age: " << Age << endl;

}
void Student::get_all() {
	cout << "Information about: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "College: " << College << endl;
}

class StudentMarks : public Student {
private:
	vector<int> Marks;
public:
	void add_Mark();
};

void StudentMarks::add_Mark() {
	int amount, mark;
	cout << "Amount of marks: " << endl;
	cin >> amount;
	for (int i = 0;i < amount;i++) {
		cin >> mark;
		Marks.push_back(mark);
	}
	cout << " List of marks: " << endl;
	for (int i = 0;i < amount;i++) {
		cout << Marks[i] << " ";
	}
	cout << endl;
}

int main()
{
	/*Student Liza;
	Liza.change_name();
	Liza.set_age();
	Liza.set_College();
	Liza.get_all();*/

	StudentMarks Misha;
	Misha.add_Mark();

	system("pause");
	return 0;
}