#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // User input
    cout << "Your Name? "<<endl;
    getline(cin, name);

    cout << "Your Age? "<<endl;
    cin >> age;

    // Output
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
