#include <iostream>
#include <string>
#include <exception>
using namespace std;


/*
EX 1:
Create Abstracted Shape class with 
pure virtual function calcArea = 0;
Then create three classes
(rectangle, triangle, circle)
And override the calcArea function

*/

/*
class Shape{
public:
	virtual double calArea() = 0;
	//poly:
	//{
	//	return 0;
	//}
};

class Rectangle : public Shape{
	int height;
	int width;
public:
	Rectangle(){
		this->height = 0;
		this->width = 0;
	}
	Rectangle(int height, int width){
		this->height = height;
		this->width = width;
	}
	double calArea(){
		cout << "Rectangle Area => ";
		return (double)width * height;
	}
};

class Triangle :public Shape{
	int height;
	int base;
public:
	Triangle(int height, int base) {
		this->height = height;
		this->base = base;
	}
	Triangle() {
		height = 0;
		base = 0;
	}
	double calArea() {
		cout << "Triangle Area => ";
		return 0.5 * height * base;
	}
};

class Circle : public Shape
{
	int r;
public:
	Circle(){
		this->r = 0;
	}
	Circle(int r){
		this->r = r;
	}
	double calArea(){
		cout << "Circle Area => ";
		return 3.14 * r * r;
	}
};
*/

/*
int main() {
	//Shape s;

	Rectangle r(5, 5);
	Triangle t(5, 5);
	Circle c(5);
	cout << r.calArea() << endl;
	cout << t.calArea() << endl;
	cout << c.calArea() << endl;
}
*/

//==========================================================

// Using Polymorphism

/*
Shape* getShape(int x)
{
	if (x == 1)
		return new Rectangle(10, 10);
	else if (x == 2)
		return new Triangle(10, 10);
	else
		return new Circle(10);
}

int main(){

	Shape* r= new Shape;
	cout << "r is pointing to a shape ,Area =  " << r->calArea() << endl; //0

	cout << "=========================================" << endl;

	r = new Triangle(10, 10);
	cout << "r is pointing to a triangle ,Area = " << r->calArea() << endl; //.5*10*10=50

	cout << "=========================================" << endl;

	r = new Rectangle(10, 10);
	cout << "r is pointing to a rectangle ,Area = " << r->calArea() << endl; //10*10=100

	cout << "=========================================" << endl;

	r = new Circle(10);
	cout << "r is pointing to a circle ,Area = " << r->calArea() << endl << endl; //3.14*10*10=314

	cout << "=============== Get Shape ===============" << endl;

	Shape* s = getShape(1);
	cout << s->calArea() << endl;

	s = getShape(2);
	cout << s->calArea() << endl;

	s = getShape(3);
	cout << s->calArea() << endl;
}
*/

//======================================

//Quiz 1 :
/*
Create Abstracted Animal class with 
pure virtual function showType = 0;
Then create three classes
(Dolphin, Cat, Dog)
And override the showType function to      
print the type

*/

/*
class Animal {
public:
	virtual void showType() = 0;
	//poly:
	//{
	//	cout << "Just Animal" << endl;
	//}
};

class Dolphin : public Animal {
public:
	void showType() {
		cout << "it is a Dolphin" << endl;
	 }
};

class Cat : public Animal {
public:
	void showType() {
		cout << "it is a Cat" << endl;
	}
};

class Dog : public Animal {
public:
	void showType() {
		cout << "it is a Dog" << endl;
	}
};
*/


/*
int main() {
	Dog d;
	Cat c;
	Dolphin p;
	d.showType();
	c.showType();
	p.showType();
}
*/
//======================================

// Using Polymorphism
/*
int main() {

	Animal* a= new Dolphin;
	a->showType();
	a = new Dolphin;
	a->showType();
	a = new Dog;
	a->showType();
	a = new Cat;
	a->showType();
}
*/



//===============================================
//Exception


/*
class MyException : public exception{
public:
	const char* what() const throw()
	{
		return "Can not divide by zero";
	}
};

class MyException2 : public exception{
public:
	const char* what() const throw(){
		return "It is a negative value";
	}
};

int divide(int x, int y) {

	if (y == 0){
		// cout<<"y = 0" ;
		// return 0;
		// throw exception();

		throw MyException();
	}

	if (y < 0){
		throw MyException2();
	}

	return x / y;
}



int main() {
	int x, y;
	cout << "Enter 2 numbers to divide :" << endl;
	cin >> x >> y;

	try{
		cout << divide(x, y) << endl;
	}
	catch (exception& e){
		cout << e.what() << endl;
	}
}
*/




































//=============== Extrrra ===================

//What is Abstraction ?

/*
class Parent {
protected:
	string lname;
public:
	//abstracted function
	virtual void showName() = 0;
};

class Child : public Parent {
private:
	string fname;
public:
	void setNames(string f,string l){
		lname = l;
		fname = f;
	}
	//must declare the abstracted function
	void showName() {
		cout << fname << " " << lname;
	}
};
int main()
{
	Child c;
	c.setNames("Ibrahim", "Yasser");
	c.showName();
}
*/

//======================================

//What is Template?

/*
template <class t, class t1>
class MyPair
{
private:
	t key;
	t1 value;
public:
	void setKey(t n) {
		key = n; 
	}
	void setValue(t1 x) {
		value = x; 
	}
	t getKey() { 
		return key; 
	}
	t1 getvalue() { 
		return value; 
	}
};

int main() {
	MyPair<double,string> p;
	p.setKey(10.5);
	p.setValue("ahmed");
	cout << p.getKey() << endl;
	cout << p.getvalue() << endl;

}
*/

//======================================

//Pointers :

// Accessing Pointers Address

/*
int main() {

	int num = 10;
	int *p = &num;
	cout << "Address of num = " << &num << endl;
	cout << "Value of p = " << p << endl; //num address
	cout << "Size of p = " << sizeof p << endl;
	cout << "Address of p = " << & p << endl;
	p = nullptr; //points nowhere
	cout << "Value of p = " << p << endl; //garbage

}
*/

//============

// Size of Pointer

/*
int main() {

	int* p1{ nullptr };
	cout << "Size of p1 = " << sizeof p1 << endl;

	double* p2{ nullptr };
	cout << "Size of p2 = " << sizeof p2 << endl;

	unsigned long long* p3{ nullptr };
	cout << "Size of p3 = " << sizeof p3 << endl;

	string* p4{ nullptr };
	cout << "Size of p4 = " << sizeof p4 << endl;

	vector<string>* p5{ nullptr };
	cout << "Size of p5 = " << sizeof p5 << endl;

}
*/

//============

//Accessing Data that the pointer points to

/*
int main() {
	int x = 100;
	int y = -5;

	int *p = &x;

	cout << *p << endl << endl;//100
	*p = 200;
	cout << *p << endl;        //200
	cout << x << endl << endl; //200

	p = &y;//Now p points to y
	cout << *p << endl << endl;//-5
	*p *= 5;
	cout << *p << endl;       //-25
	cout << y << endl;        //-25
}
*/

//============

//Pointers and Arrays

/*
int main() {
	int arr[]{ 10,20,30 };
	cout << arr << endl;  // address of first element
	cout << *arr << endl; // value of first element

	int* p{ arr };
	cout << p << endl;  // address of first element
	cout << *p << endl; // value of first element
//  To print the array through the pointer:
	cout << "===== Array Values =====\n";
	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;
	cout << "===== Array Addresses =====\n";
	cout << p << endl;
	cout << (p+1) << endl;
	cout << (p+2) << endl;
}
*/

//============

// Passing Pointers to Functions

/*
void double_salary(int* s) {
	*s *= 2;
}

int main() {
	int salary = 1000;
	cout << salary << endl;
	double_salary(&salary);
	cout << salary << endl;

}
*/

//============

// Objects as Pointers

/*
class Person {
private:
	string name;
	int age;
public:
	Person(){}
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
};

int main() {
	Person* p = new Person;
	p->setName("Ahmed");
	p->setAge(30);
	cout << p->getName() << endl;
	cout << p->getAge() << endl;
}
*/

//================================================

// Heap Memory

/*
int main() {	
	int* p{ nullptr };
	p = new int;       // allocate an int in heap
	cout << p << endl; // address of new int
	cout << *p << endl;// value of new int(garbage)
	*p = 10;
	cout << *p << endl;// value of new int(10)
}
*/

/*
int main() {
	int* p{ nullptr };
	p = new int;       // allocate an int in heap
	
	// code ...
	
	delete p;      // Frees the allocated storage
}
*/

/*
int main() {
	int* p { nullptr };
	int size = 0;

	cout << "Enter Array size\n";
	cin >> size;

	p = new int[size]; // allocate array in heap

	// code ...

	delete [] p;      // Frees the allocated storage
}
*/





