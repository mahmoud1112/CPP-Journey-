#include <iostream>
#include <string>
using namespace std;

//Ex 1
//=================================================


/*
//Person Class:

class Person {
protected:
	string name;
	int id;
public:

	//constructors
	Person() {
		name = " ";
		id = 0;
	}
	Person(string n, int i) {
		name = n;
		id = i;
	}

	//setters
	void set_name(string n) {
		name = n;
	}
	void set_id(int i) {
		id = i;
	}

	//getters
	string get_name() {
		return name;
	}
	int get_id() {
		return id;
	}
	void printInfo() {
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
	}
	//destructor
	~Person() {
	
	}
};


//Teacher Class:

class Teacher : public Person {
private:
	float salary;
public:

	//constructors
	Teacher() {
		salary = 0;
	}
	Teacher(string n, int i, float s) :Person(n, i) {
		salary = s;
	}

	//setter
	void set_salary(float s) {
		salary = s;
	}

	//getters
	float get_salary() {
		return salary;
	}
	float get_annual_salary() {
		return 12 * salary;
	}
	float get_annual_raise() {
		return 0.07 * salary;
	}
	void printInfo() {
		Person::printInfo();
		cout << "Salary: " << salary << endl;
		cout << "Annual Salary: " << 12*salary << endl;
		cout << "Raise: " << 0.07*salary << endl;
		cout << "====================\n";
	}
	//destructor
	~Teacher() {

	}
};


//Student Class:

class Student : public Person {
private:
	float total_marks;
public:

	//constructors
	Student() {
		total_marks = 0;
	}
	Student(string n, int i, float t):Person(n,i) {
		total_marks = t;
	}

	//setter
	void set_total_marks(float t) {
		total_marks = t;
	}

	//getter
	float get_total_marks() {
		return total_marks;
	}
	void printInfo() {
		Person::printInfo();
		cout << "Marks: " << total_marks << endl;
		cout << "====================\n";
	}
	//destructor
	~Student() {

	}
};


//main:

int main() {
	Teacher t1, t2("Ahmed", 777, 7000);

	t1.set_name("Ali");
	t1.set_id(888);
	t1.set_salary(5000);

	t1.printInfo();
	t2.printInfo();



	Student s1, s2("Hager", 444, 100);

	s1.set_name("Akram");
	s1.set_id(555);
	s1.set_total_marks(80);

	s1.printInfo();
	s2.printInfo();
}
*/


//Ex 2
//=================================================


/*
//Shape Class:

class Shape {
protected:
	float height;
public:

	//constructors
	Shape() {
		height = 0;
	}
	Shape(int h) {
		height = h;
	}

	//setter
	void set_height(float h) {
		height = h;
	}

	//getter
	float get_height() {
		return height;
	}
	float calc_area() {
		return 0;
	}

	//destructor
	~Shape() {

	}
};


//Rectangle class:

class Rectangle : public Shape
{
private:
	float width;
public:

	//constructors
	Rectangle() {
		width = 0;
	}
	Rectangle(float h, float w):Shape(h) {
		width = w;
	}

	//setter
	void set_width(float w) {
		width = w;
	}

	//getter
	float get_width() {
		return width;
	}
	float calc_area() {
		return width*height;
	}

	//destructor
	~Rectangle() {

	}
};


//Tringle class:

class Tringle : public Shape
{
private:
	float base;
public:

	//constructors
	Tringle() {
		base = 0;
	}
	Tringle(float h, float b) :Shape(h) {
		base = b;
	}

	//setter
	void set_width(float b) {
		base = b;
	}

	//getter
	float get_width() {
		return base;
	}
	float calc_area() {
		return 0.5 * base * height;
	}

	//destructor
	~Tringle() {

	}
};

int main() {
	Rectangle r1(10, 10);
	cout << "Rectangle Area = " << r1.calc_area() << endl;

	Tringle t1(10, 10);
	cout << "Tringle Area = " << t1.calc_area() << endl;
}
*/

//==================================================
//Ex 3
/*
class Junior
{
public:
	void say_junior() {
		cout << "i am Junior" << endl;
	}
};

class Senior
{
public:
	void say_senior() {
		cout << "i am Senior" << endl;
	}
};

class Manager : public Junior, public Senior
{
public:
void say_manager() {
	cout << "i manage junior, and Senior" << endl;
}
};
*/

/*
int main()
{
	//Ex3
	Manager m1;
	m1.say_junior();
	m1.say_senior();
	m1.say_manager();
}
*/


