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
	Student();				//конструктор за замовчуванням
	Student(const Student & st); //конструктор копіювання
	Student(string n, int a, string Coll); // з параметром
	~Student()
	{
		cout << "Memory has been cleared" << endl;

	}

	void set_College();		//задання вищого навчального закладу;
	void change_name();
	void set_age();
	void get_age();
	void get_all();
	Student& operator=(const Student& st);
};

Student& Student::operator=(const Student& st) //перегрузка оператора =
{
	Name = st.Name;
	Age = st.Age;
	College = st.College;
	return *this;
}


Student::Student()
{
	Name = "Liza";
	Age = 20;
	College = "KPI";
}

Student::Student(string n, int a, string Coll)
{
	Name = n;
	Age = a;
	College = Coll;

}

Student::Student(const Student &st)
{
	Name = st.Name;
	Age = st.Age;
	College = st.College;
}

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
	//int *Marks = new int;
public:
	void add_Mark();
	void print_Mark();
	friend bool operator==(const StudentMarks& a, const StudentMarks& b);

};

void StudentMarks::add_Mark() {
	int amount, mark;
	cout << "Amount of marks: " << endl;
	cin >> amount;
	for (int i = 0;i < amount;i++) {
		cin >> mark;
		Marks.push_back(mark);
	}

}

void StudentMarks::print_Mark() {
	cout << " List of marks: " << endl;
	for (int i = 0;i < Marks.size();i++) {
		cout << Marks[i] << " ";
	}
	cout << endl;
}

bool operator == (const StudentMarks &a, const StudentMarks &b)
{
	if (a.Marks == b.Marks)
		return true;
}

int main()
{
	/*Student Liza;
	Liza.change_name();
	Liza.set_age();
	Liza.set_College();
	Liza.get_all();

	StudentMarks Misha;

	cout << "copy constructor test: " << endl;
	Student b(Liza);
	b.get_age();*/

	/*Student Liza;
	Liza.get_all();

	Student Misha("Misha", 23, "KNU");
	Misha.get_all();

	Student Bodya(Liza);
	Bodya.change_name();
	Bodya.get_all();*/

	StudentMarks Misha;
	Misha.add_Mark();
	StudentMarks Ivan;
	Ivan.add_Mark();

	if (Misha == Ivan)
		cout << "Yeep!";
	system("pause");
	return 0;
}