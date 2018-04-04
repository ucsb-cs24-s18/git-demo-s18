// lecure-01.cpp
#include <iostream>
using namespace std;

class Employee{
	public:
	// public access specifier makes everything
	// under this block visible to code outside 
	// the scope of this class e.g. in main
	// methods of the class defined below:
	void increment(double amount); 
	void printInfo();
	void setName(string uname);
    // data fields (member variables defined below)
	string getName();
private:
	string name;
	double salary;
};

void Employee::setName(string uname){
 	name = uname;
}

string Employee::getName(){
	return name;
}


// We will implement the methods of the class
// in the next lecture

int main(){
	Employee secretary, president;
	//Declaring two objects of type Employee
	secretary.setName ("Rabbit");
	president.setName( "Turtle");
	cout<< " Name of secretary: "<< secretary.getName()<<endl;
	cout<< " Name of president: "<< president.getName()<<endl;

	return 0;
}