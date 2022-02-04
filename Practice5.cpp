#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstName;
  string secondName;
  Person();
  Person(string firstVal,string SecondVal);
};
Person::Person() {
  firstName = "unkown";
  secondName = "unkown";
}

Person::Person(string firstVal, string secondVal) {
  firstName = firstVal;
  secondName = secondVal;
}

void PrintPerson(Person p) {
  cout << p.firstName << " " << p.secondName << endl;
}

int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  PrintPerson(a);
  a.firstName = "Dorian"; 
  a.secondName = "Gray";

  Person b("Linus","Van Pelt");
  PrintPerson(b);
  b.firstName = "Charlie";
  b.secondName = "Brown";

	// Add the prints here

  PrintPerson(a);
  PrintPerson(b);

	return 0;
}
