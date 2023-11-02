#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    // Define the database of student numbers and full names
    map<string, string> studentDatabase = {
        {"2019-100849", "Christian Castaneda"},
        {"2020-123456", "Alice Johnson"},
        {"2021-789012", "Bob Smith"},
        // Add more students like this
    };

    string enteredStudentNumber;
    bool isAuthenticated = false;

    // Input loop: Keep asking for a student number until a valid one is entered
    while (!isAuthenticated) {
        cout << "Enter your student number: ";
        cin >> enteredStudentNumber;

        // Check if the entered student number is in the database
        if (studentDatabase.find(enteredStudentNumber) != studentDatabase.end()) {
            isAuthenticated = true;
        }

        if (!isAuthenticated) {
            cout << "Invalid student number. Please try again." << endl;
        }
    }

    // Greet the student by their full name
    string fullName = studentDatabase[enteredStudentNumber];
    cout << "Welcome, " << fullName << "!" << endl;

    // Your program logic can continue here

    return 0;
}
