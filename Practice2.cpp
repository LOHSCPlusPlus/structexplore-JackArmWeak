#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstName;
  string secondName;
  Person();
};
Person::Person() {
  firstName = "unkown";
  secondName = "unkown";
}

int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  cout << "Person 1: " << a.firstName << " " << a.secondName << endl;
  a.firstName = "Dorian"; 
  a.secondName = "Gray";

  Person b;
  cout << "Person 2: " << b.firstName << " " << b.secondName << endl;
  b.firstName = "Charlie";
  b.secondName = "Brown";

	// Add the prints here

  cout << "Person 1: " << a.firstName << " " << a.secondName << endl;
  cout << "Person 2: " << b.firstName << " " << b.secondName << endl;



	return 0;
}
