#include <iostream>
#include <stdexcept> 

using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 0)
            throw runtime_error("Error: Age cannot be negative.");

        if (age == 0)
            throw runtime_error("Error: Age cannot be zero.");
        
        // If age is valid, proceed with the program
        cout << "Valid age entered: " << age << endl;
    } 
    catch (const runtime_error& e) {  // Catching exception with appropriate error message
        cout << e.what() << endl;
    }

    return 0;
}

