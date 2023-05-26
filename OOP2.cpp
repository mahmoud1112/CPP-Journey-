#include <iostream>
using namespace std;



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
