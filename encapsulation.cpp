#include <iostream>
#include "Rectangle.h"
using namespace std;



//Ex1:
/*
Create account class with :

Attributes :
Name
Id
balance

One Method :
Printing info

And then create objects in main function

*/

    /*
    class Account {
    public:

        string name;
        int id;
        double balance;

        void printInfo() {
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Balance : " << balance << endl;
            cout << " ================== \n";

        }
    };

    int main() {   
        Account a1, a2, a3;

        a1.name = "Ahmed";
        a1.id = 555;
        a1.balance = 10000;

        a1.printInfo();
        a2.printInfo();
    }
    */

//========================================
//Quiz 1:
/*
CCreate Student class with :
Attributes : 
Name
Id
Arabic Grade, Math Grade

One Method : 
Printing info

And then create objects in main function 
and ask the user to insert Student data


*/


    /*
    class Student {
    public:

        string name;
        int id;
        double arabic,math;

        void printInfo() {
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Arabic Grade : " << arabic << endl;
            cout << "Math Grade : " << math << endl;
            cout << " ================== \n";

        }
    };

    int main() {
        Student s1, s2, s3;

        s1.name = "Ahmed";
        s1.id = 888;
        s1.arabic = 45;
        s1.math = 50;
        s1.printInfo();

        cout << "Please enter student name, id , grades: \n";
        cin >> s2.name;
        cin >> s2.id;
        cin >> s2.arabic;
        cin >> s2.math;
        s2.printInfo();


    }
    */

//========================================
/*
Ex 2:

Create an account class with :

attributes :
Name, id, balance

methods :
setters and getters for each attribute 
and a method to print all info

*/

    /*
    class Account {

    private:
        //Attributes :

        string name;
        int id;
        double balance;

    public:
        //Setters:
        void set_name(string n) {
            name = n;
        }
        void set_id(int i) {
            id = i;
        }
        void set_balance(double a) {
            balance = a;
        }
    

        //Getters
        string get_name() {
            return name;
        }
        int get_id() {
            return id;
        }
        double get_balance() {
            return balance;
        }
    

        void printInfo() {
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Balance : " << balance << endl;
            cout << " ================== \n";

        }
    };

    int main() {
        Account a1, a2, a3;

        a1.set_name("Ahmed");
        a1.set_id(333);
        a1.set_balance(4000);

        cout << a1.get_name() << endl;
        cout << a1.get_id() << endl;
        cout << a1.get_balance() << endl;

        a1.printInfo();
    }
    */

//========================================
//Quiz 2:
/*
Create a student class with :

attributes :
Name, id, Arabic marks
Math marks
methods :
setters and getters for each attribute 
and a method to print all info


*/


    /*
    class Student {
    
    private:
        //Attributes :

        string name;
        int id;
        double arabic,math;

    public:
        //Setters:
        void set_name(string n) {
            name = n;
        }
        void set_id(int i) {
            id = i;
        }
        void set_arabic(double a) {
            arabic = a;
        }
        void set_math(double m) {
            math = m;
        }

        //Getters
        string get_name() {
            return name;
        }
        int get_id() {
            return id;
        }
        double get_arabic() {
            return arabic;
        }
        double get_math() {
            return math;
        }

        void printInfo() {
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Arabic Grade : " << arabic << endl;
            cout << "Math Grade : " << math << endl;
            cout << " ================== \n";

        }
    };

    int main() {
        Student s1, s2, s3;

        s1.set_name("Ahmed") ;
        s1.set_id(888)  ;
        s1.set_arabic(45)  ;
        s1.set_math(50) ;
        cout << s1.get_name() << endl;
        cout << s1.get_id() << endl;
        cout << s1.get_arabic() << endl;
        cout << s1.get_math() << endl;

        s1.printInfo();
    }
    */



//========================================
/*
Ex 3:
- Default constructor
- Parameterized constructor
- Destructor and print inside it “Bye Bye”

Create an account class with :

attributes :
Name, id, balance

methods :
setters and getters for each attribute
and a method to print all info

*/

    /*
    class Account {

    private:
        //Attributes :

        string name;
        int id;
        double balance;

    public:

        //Constructors:
        Account() {
            name = " ";
            id = 0;
            balance = 0.0;
        }

        Account(string s, int i) {
            name = s;
            id = i;
        }

        Account(string s, int i, double b) {
            name = s;
            id = i;
            balance = b;
        }

        //Setters:
        void set_name(string n) {
            name = n;
        }
        void set_id(int i) {
            id = i;
        }
        void set_balance(double a) {
            balance = a;
        }


        //Getters
        string get_name() {
            return name;
        }
        int get_id() {
            return id;
        }
        double get_balance() {
            return balance;
        }


        void printInfo() {
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Balance : " << balance << endl;
            cout << " ================== \n";
        }

        //Destructor
        ~Account() {
            cout << "Bye Bye\n";
        }

    };

    int main() {
        Account a1, a2("Sara",444,5000), a3;

        a1.set_name("Ahmed");
        a1.set_id(333);
        a1.set_balance(4000);
        a1.printInfo();

        a2.printInfo();
        a3.printInfo();
    }
    */

//========================================
//Quiz 3:
/*
Create a student class with :

attributes :
Name, id, Arabic marks
Math marks
methods :
setters and getters for each attribute
and a method to print all info


*/


    /*
    class Student {

    private:
        //Attributes :
        string name;
        int id;
        double arabic,math;

    public:
        //Constructors:
        Student() {
            name = " ";
            id = 0;
            arabic = 0.0;
            math = 0.0;
        }

        Student(string s, int i) {
            name = s;
            id = i;
        }

        Student(string s, int i, double a, double b) {
            name = s;
            id = i;
            arabic = a;
            math = b;
        }
        //Setters:
        void set_name(string n) {
            name = n;
        }
        void set_id(int i) {
            id = i;
        }
        void set_arabic(double a) {
            arabic = a;
        }
        void set_math(double m) {
            math = m;
        }

        //Getters
        string get_name() {
            return name;
        }
        int get_id() {
            return id;
        }
        double get_arabic() {
            return arabic;
        }
        double get_math() {
            return math;
        }

        void printInfo() {
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Arabic Grade : " << arabic << endl;
            cout << "Math Grade : " << math << endl;
            cout << " ================== \n";

        }

        //Destructor
        ~Student() {
            cout << "Bye Bye\n";
        }
    };

    int main() {
        Student s1, s2("Ali",666,30,50), s3;

        s1.set_name("Ahmed") ;
        s1.set_id(888)  ;
        s1.set_arabic(45)  ;
        s1.set_math(50) ;
        s1.printInfo();

        s2.printInfo();

        s3.printInfo();
    }
    */

//======================================

//Quiz 4:
/*
    Create a rectangle class contains:

- height and width as attributes
- setters , getters as methods to get area calculation
- default constructor
- parameterized constructor
- destructor

*/

    /*
    class Rectangle {
    private:
        float height;
        float width;
    public:
        //Constructors
        Rectangle()
        {
            width = 0;
            height = 0;
        }
        Rectangle(float h, float w)
        {
            height = h;
            width = w;
        }

        //Setters
        void setWidth(float x) {
            width = x;
        }
        void setHeight(float x) {
            height = x;
        }

        //Getters
        float getHeight() {
            return height;
        }
        float getWidth() {
            return width;
        }
        float calArea() {
            return width * height;
        }


        //Destructor
        ~Rectangle() {
            cout << "bye bye Rectangle" << endl;
        }
    };
    */

    /*
    int main()
    {
        Rectangle r1;
        cout << "Enter Rectangle height : " << endl;
        float x;
        cin >> x;
        r1.setHeight(x);

        cout << "Enter Rectangle Width : " << endl;
        float y;
        cin >> y;
        r1.setWidth(y);

        cout << "Rectangle 1 Area =   " << endl;
        cout << r1.calArea() << endl;

        Rectangle r2(10, 20);
        cout << "Rectangle 2 Area =   " << endl;
        cout << r2.calArea() << endl;

        return 0;
    }
    */

//=========================================
// Adding class in IDE

// Rectangle.h:

    /*
    #include <iostream>
    using namespace std;
    #pragma once
    class Rectangle
    {
    private:
        float height;
        float width;
    public:
        //Constructors
        Rectangle();
        Rectangle(float h, float w);

        //Setters
        void setWidth(float x);
        void setHeight(float x);

        //Getters
        float getHeight();
        float getWidth();
        float calArea();


        //Destructor
        ~Rectangle();
    };
    */

// Rectangle.cpp
/*
    #include "Rectangle.h"


    //Constructors
    Rectangle::Rectangle()
    {
        width = 0;
        height = 0;
    }
    Rectangle::Rectangle(float h, float w)
    {
        height = h;
        width = w;
    }

    //Setters
    void Rectangle:: setWidth(float x) {
        width = x;
    }
    void Rectangle:: setHeight(float x) {
        height = x;
    }

    //Getters
    float Rectangle::getHeight() {
        return height;
    }
    float Rectangle::getWidth() {
        return width;
    }
    float Rectangle::calArea() {
        return width * height;
    }


    //Destructor
    Rectangle::~Rectangle() {
        cout << "bye bye Rectangle" << endl;
    }
*/

