#include <iostream>
#include <string>
using namespace std;

// Class definition
class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for name
    void setName(const string& n) {
        name = n;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Display function to output person's details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Main function
int main() {
    // Creating person objects
    Person p1("Alice", 25);
    Person p2("Bob", 30);

    // Displaying initial values
    cout << "Initial Person Details:" << endl;
    p1.display();
    p2.display();

    // Updating details using setters
    p1.setName("Alicia");
    p1.setAge(26);

    p2.setName("Robert");
    p2.setAge(31);

    // Displaying updated values
    cout << "\nUpdated Person Details:" << endl;
    p1.display();
    p2.display();

    return 0;
}
