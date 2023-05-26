

#include <iostream>
#include<vector>
using namespace std;



/*
 class Acount {
 public:
	 string name;
	 int id;
	 double balance;

	 void display() {
		 cout << id << " " << name << " " << balance << " " << password;;
	 }
	 void set_password(string p) {  // setter
		 password = p;
	 }
 private:
	 string password;
 };

 int main()
 {
	 string pass;
	 Acount a1;
	 a1.id = 5;
	 a1.name = "Mahmoud";
	 cin >> pass;
	 a1.set_password (pass) ; // getter
	 cin >> a1.balance;
	 a1.display();
 }
 */

 /*
 class Student {
 private :
	 string name;
	 int id;
	 double ar, ma;

 public:
	 //setters
	 void set_name(string n) {
		 name = n;
	 }
	 void set_id(int i) {
		 id = i;
	 }
	 void set_arbic(double a) {
		 ar = a;
	 }
	 void set_math(double m) {
		 ma = m;
	 }

	 // getter

	 string get_name() {
		 return name;
	 }
	 int get_id() {
		 return id;
	 }
	 double get_a() {
		 return ar;
	 }
	 double get_m() {
		 return ma;
	 }


	 void disply()
	 {
		 cout << id << " " << name << " " << ar << " " << ma;
	 }
 };

 int main() {
	 string name;
	 int id;
	 double arr, maa;

	 Student s1;
	 cin >> name >> id >> arr >> maa;

	 s1.set_name(name);
	 s1.set_id(id);
	 s1.set_arbic(arr);
	 s1.set_math(maa);

	 s1.disply();
 }
 */

 // Q1 
 /*
 class Date {
 private:

	 int day, month, year;

 public:
	 // def cons
	 Date() {
		 day = 0;
		 month = 0;
		 year = 0;
	 }

	 // para cons
	 Date(int d, int m, int y)
	 {
		 day = d;
		 month = m;
		 year = y;
	 }

	 //setter
	 void set_Day(int d)
	 {
		 day = d;
	 }
	 void set_Month(int m) {
		 month = m;
	 }
	 void set_year(int y) {
		 year = y;
	 }

	 // it's optional to do it but it's required in question
	 void set_date(int d, int m, int y)
	 {
		 day = d;
		 month = m;
		 year = y;
	 }

	 // getters
	 int get_day() {
		 return day;
	 }
	 int get_month() {
		 return month;
	 }
	 int get_year() {
		 return year;
	 }

	 // method for disply
	 void display() {
		 cout << "DATE \n" << day << " : " << month <<  " : " << year << endl;
	 }

	 // decons
	 ~Date() {
	 }
 };


 int main() {
	 Date d1(17, 4, 2000), d2 ,d3;

	 d2.set_Day(20);
	 d2.set_Month(8);
	 d2.set_year(2022);

	 d1.display();
	 d2.display();

	 int d, m, y;
	 cout << "please enter date \n";
	 cin >> d >> m >> y;
	 d3.set_date(d, m, y);
	 d3.display();
 }
 */

 //Q2
 /*
 class Time {
 private :
	 int hour, min, sec;

 public :
	 Time() {
		 hour = 0;
		 min = 0;
		 sec = 0;
	 }

	 Time(int h,int m ,int s) {
		 hour = h;
		 min = m;
		 sec = s;
	 }

	 //setter
	 void set_Hour(int h)
	 {
		 hour = h;
	 }
	 void set_Min(int m) {
		 min = m;
	 }
	 void set_Sec(int s) {
		 sec = s;
	 }

	 void set_time (int h, int m, int s)
	 {
		 hour = h;
		 min = m;
		 sec = s;
	 }

	 // getters
	 int get_hour() {
		 return hour;
	 }
	 int get_min() {
		 return min;
	 }
	 int get_sec() {
		 return sec;
	 }

	 //function
	 int next_Sec() {
		 int ns;
		 ns = sec;
		 ns++;
		 return ns;
	 }
	 int prev_Sec() {
		 int ps;
		 ps = sec;
		 ps--;
		 return ps;
	 }

	 // method for disply
	 void display() {
		 cout << "time \n" << hour << " : " << min << " : " << sec << endl;
		 cout <<"The next secound is " <<next_Sec()<<endl<<"the previous secound is " << prev_Sec()<<endl;
	 }

	 // decons
	 ~Time() {
	 }
 };

 int main() {
	 Time t1(4, 20, 15);
		 t1.display();
 }
 */


 //Q3
 /*
 class Auther
 {
 private:
	 string name;
	 string email;
	 char gender;

 public:
	 Auther() {
		 name = " ";
		 email = " ";
		 gender = '0';
	 }
	 Auther(string n, string e, char g) {
		 name = n;
		 email = e;
		 gender = g;
	 }

	 //setters
	 void set_name(string n) {
		 name = n;
	 }
	 void set_email(string e) {
		 email = e;
	 }
	 void set_gender(char g) {
		 gender = g;
	 }

	 //getters
	 string get_name() {
		 return name;
	 }
	 string get_email() {
		 return email;
	 }
	 char get_gender() {
		 return gender;
	 }
 };


 class Book {
 private:
	 string name;
	 double price;
	 int qty = 0;
	 Auther auther;

 public:
	 Book() {
		 name = " ";
		 price = 0;
	 }
	 Book(string n, double p, Auther a) {
		 name = n;
		 price = p;
		 auther = a;
	 }
	 Book(string n, double p, Auther a, int q) {
		 name = n;
		 price = p;
		 auther = a;
		 qty = q;
	 }

	 //setters:
	 void set_name(string n) {
		 name = n;
	 }
	 void set_price(double p) {
		 price = p;
	 }
	 void set_qty(int q) {
		 qty = q;
	 }
	 void set_auther(Auther a) {
		 auther = a;
	 }

	 //getters
	 string get_name() {
		 return name;
	 }
	 double get_price() {
		 return price;
	 }
	 int get_qty() {
		 return qty;
	 }
	 Auther getAuther() {
		 return auther;
	 }

	 void disply() {
		 cout << "Book Name : " << get_name() << endl
		  << "Price : " << get_price() << endl
		  << "Quantity : " << get_qty() << endl
		  << "Auther Name : " << getAuther().get_name() << endl
		  << "Auther Email : " << getAuther().get_email() << endl
		  << "Auther Gender : " << getAuther().get_gender() << endl;
	 }
 };

 int main() {
	 Auther a("mahmoud", "mahmouud", 'm');
	 Book b("math", 150, a, 10);
	 b.disply();
 }
 */


 //Q4
 // i don't understand what's wanted to do 
 /*
 class Account
 {
 private:
	 string id;
	 string name;
	 int balance = 0;

 public:
	 Account(string n, string i) {
		 name = n;
		 id = i;
	 }
	 Account(string n, string i, int b) {
		 name = n;
		 id = i;
		 balance = b;
	 }

	 //setters:
	 void set_balance(int b) {
		 balance = b;
	 }
	 string get_name() {
		 return name;
	 }
	 string get_id() {
		 return id;
	 }

	 //getters:
	 int get_balance() {
		 return balance;
	 }
	 int credit(int amount) {
		 balance += amount;
		 return balance;
	 }
	 int debit(int amount) {
		 if (amount <= balance) {
			 balance -= amount;
		 }
		 else {
			 cout << "amount exceeded";
		 }
		 return balance;
	 }

	 int transfere_to(Account& a, int amount) {
		 if (amount <= balance) {
			 a.credit(amount);
			 balance -= amount;
		 }
		 else {
			 cout << "Amount exceeded";
		 }
		 return balance;
	 }
 };

 int main() {
	 Account a("ahmed", "112d5", 2000);
	 Account b("mohammed", "122d5", 3000);
	 cout << "Hi " << a.get_name() << " Your balance is : " << a.get_balance() << endl;

	 cout << "\nEnter amount you will add : \n";
	 int x;
	 cin >> x;
	 cout << "\nNow your balance is : " << a.credit(x) << endl;

	 cout << "\nEnter amount you will withdraw : \n";
	 int y;
	 cin >> y;
	 cout << "\nNow your balance is : " << a.debit(y) << endl;

	 cout << "\nMohamed Balance : " << b.get_balance() << endl;

	 cout << "\nEnter amount you will transfer : \n";
	 int z;
	 cin >> z;
	 cout << "\nNow your balance is : " << a.transfere_to(b, z) << endl;

	 cout << "\nMohamed Balance : " << b.get_balance() << endl;
 }
 */

/*
class Shape {
protected:
	double hight;
public:
	// def cons
	Shape() {
		hight = 0;
	}
	// para cons
	Shape(double h)
	{
		hight = h;
	}
	//setter 
	void set_hight(int h)
	{
		hight = h;
	}
	// getters 
	double get_hight() {
		return hight;
	}
};

class Rectangle : public Shape {
private:
	double width;
public:
	// def cons
	Rectangle() {
		width = 0;
	}
	// para cons
	Rectangle(double w,double h) : Shape(h)
	{
		width = w;
	}
	//setter 
	void set_width(int w)
	{
		width = w;
	}
	// getters 
	double get_width() {
		return width;
	}
	double area() {
		return width * hight;
	}
};


class Triangle : public Shape {
private:
	double base;
public:
	// def cons
	Triangle() {
		base = 0;
	}
	// para cons
	Triangle(double b, double h) : Shape(h)
	{
		base = b;
	}
	//setter 
	void set_base(int b)
	{
		base = b;
	}
	// getters 
	double get_base() {
		return base;
	}
	double areaa() {
		return 0.5 * base * hight;
	}
};

int main() {
	Triangle t(5, 4);
	cout << t.areaa();
	
}
*/

/*
int main(){
	int x,max,sum=0,diff=0;
	int arr[100000];
	cin >> x; 
	for (int i = 0; i < x; i++) {
		cin >> arr[i];
	}
	max = arr[0];
	for (int i = 0; i < x; i++) {
		if (max<arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < x; i++) {
		if (arr[i]<max) {
			diff = 0;
			diff=max-arr[i];
			sum += diff;
		}
	}
	cout <<sum;

}
*/


/*

class Vehicle {
protected:
	string model, regist; 
	int speed; 
	double capcity, consum; 
	
public : 
	
	//def con 
	Vehicle() {
		model = "";
		regist = "";
		speed = 0;
		capcity = 0.0;
		consum = 0.0; 
	}
	// para con 
	Vehicle(string m, string r, int s, double ca, double co) {
		model = m;
		regist = r;
		speed = s;
		capcity = ca;
		consum = co;
	}

	//setter 
	void set_model(string m) {
		model = m;
	}
	void set_regist(string r) {
		regist = r; 
	}
	void set_speed(int s) {
		speed = s;
	}
	void set_capcity(double ca) {
		capcity = ca; 
	}
	void set_consum(double co) {
		consum = co; 
	}
	
	//getter 
	
	string get_model() {
		return model;
	}
	string get_regist() {
		return regist;
	}
	int get_speed() {
		return speed;
	}
	double get_capcity() {
		return capcity;
	}
	double get_consum() {
		return consum;
	}

	double fuelNeeded(int dis) {
		return dis / consum;
	}
	double distanceCovered(int h) {
		return speed / h;
	}

	void display() {
		cout << "Vehicle model: " << model << endl;
		cout << "Registration number: " << regist << endl;
		cout << "Vehicle speed: " << speed << endl;
		cout << "Fuel capacity: " << capcity << endl;
		cout << "Fuel consumption: " << consum << endl;

	}

};


class Truck : public Vehicle {
private : 
	double weight; 
public : 
	Truck() {
		weight = 0; 
	}
	Truck(string m, string r, int s, double ca, double co, double w) :Vehicle(m, r, s, ca, co) {
		weight = w; 
	}

	//setter
	void set_weight(double cwl) {
		weight= cwl;
	}

	//getter
	double get_weight() {
		return weight;
	}
	void displayT() {
		Vehicle::display();
		cout << "Cargo weight : " << weight<<endl;

	}
};

class Bus : public Vehicle{
private:
	int passenger;
public : 
	Bus() {
		passenger = 0;
	}
	Bus(string m, string r, int s, double ca, double co, int p) :Vehicle(m, r, s, ca, co) {
		passenger = p;
	}

	//setter
	void set_passenger(int p ) {
		passenger=p;
	}

	//getter
	double get_passenger() {
		return passenger;
	}
	void displayB() {
		Vehicle::display();
		cout << "number of passengers : " << passenger << endl;
	}

};

int main() {
	Vehicle v1( "kia" , "abc",5, 2.5, 5.5); 
	v1.display();

	cout<<v1.fuelNeeded(200)<<endl;
	cout<<v1.distanceCovered(5)<<endl;
	cout << "==========\n";


	Truck t1("kia", "abc", 5, 2.5, 5.5, 44);
	t1.displayT();
	cout << "===============\n";

	Bus b1("kia", "abc", 5, 2.5, 5.5, 10);
	b1.displayB();
}


*/

/*
class Animal {
public : 
	virtual void showType() = 0;
};

class Dolphine : public Animal  {
public :
	void showType () {
		cout << "Dolphine"<<endl; 
	}
};
class Cat : public Animal {
public:
	void showType() {
		cout << "cat"<<endl;
	}
}; class Dog : public Animal {
public:
	void showType() {
		cout << "Dog"<<endl;
	}
};

int main() {
	Dolphine d1; 
	d1.showType();
	Dog d;
	d.showType();
	Cat c; 
	c.showType();
}
*/

/*
Q1 
1)encapsulation : ability of oop to hide or public objects 
2)abstraction : design a program (using virtual to overriding it )
3)inhertance :class inherits from another class
4)polymorphism :parent have same name of function but with different behaviors 


Q2 
accses modifier 
public : can be  accses in any place 
protected : can be accses in same class or derived class 
private : can be only accses in same class 

Q3 
templete can make to function or class 
*/

/*
template <typename T>
T sum(T a, T b) {
	return a+b;
}

int main() {
	
	cout << sum(5.5, 3.5);
}
*/




/*
// q4
class myException : public exception {
public:
	const char* what() const throw()
	{
		return "Can not divide by zero \n";
	}
};

int devided(int x) {
	if (x == 0) {
		throw myException();
	}
}


int main() {
	int x, y;
	cin >> x;

	try {
		y = devided(x);
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}

*/

/*
Q5
overloading: two or more methods in the same class have the same name but different parameters
overriding : method signature(name and parameters) are the same in the superclass and the child class
*/




/*
class Point2D {
protected : 
	double x, y; 
public :
	// def con 
	Point2D() {
		x = 0.0;
		y = 0.0; 
	}
	// para con 
	Point2D(double x, double y) {
		this->x = x;
		this->y = y; 
	}

	// setter 
	void setX(double x) {
		this->x = x;
	}
	void setY(double y) {
		this->y = y; 
	}
	void setXY(double x, double y) {
		this->x = x;
		this->y = y;
	}

	// getter 
	double getX() {
		return x;
	}
	double getY() {
		return y; 
	}
	double *getXY() {
		double arr[5];
		arr [0] = x;
		arr[1] = y;
		return arr;
	}
	
};
class Point3D : public Point2D {
private : 
	double z; 
public : 
	//def con 
	Point3D() {
		z = 0;
	}
	// para con 
	Point3D(double x, double y, double z) : Point2D(x, y) {
		this->z = z;
	}
//setter 
	void setZ(double z) {
		this->z = z;
	}

	void setXYZ(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}


	double getZ() {
		return z;
	}
	 double* getXYZ() {
		double arr[5];
		arr[0] = x;
		arr[1] = y;
		arr[2] = z;
		double* p = arr;

		return p;
	}
};

int main() {
	Point2D a;
	a.setX(2.5);
	a.setY(10.6);

	cout << "The 2D points \n";
	for (int i = 0; i < 2; i++) {
		cout << *(a.getXY() + i) << "  ";
	} 

	Point3D b; 
	b.setXYZ(5.1,6.25,7.55);

	cout << endl << "The 3D points " << endl;

	for (int i = 0; i < 3; i++) {
		cout << *(b.getXYZ() + i)<<"  ";
	}

	
}
*/
