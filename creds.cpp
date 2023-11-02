// rtucreds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    // Define the database of student numbers and full names
    map<string, string> studentDatabase = {
        {"2023-102904", "Chelsy Mae Alcantara"},
        {"2023-103131", "King Arthur Amato"},
        {"2023-104311", "Jade Jaranilla Arroyo"},
        {"2023-104357", "Benedic James Badiola"},
        {"2023-108495", "Divina Oray Barabad"},
        {"2023-103453", "Adrian Bejagan"},
        {"2023-113140", "Jhon Christopher Cabanganan"},
        {"2023-104193", "John Paul Calumpiano"},
        {"2019-100849", "Christian Castaneda"},
        {"2023-103779", "Kirstan Miguel Coching"},
        {"2023-108757", "Kurt Russel Cubos"},
        {"2023-111860", "Wenard Delos Santos"},
        {"2023-104380", "Joshua Delovino"},
        {"2023-102696", "Khryztelle Margarette Dimarucut"},
        {"2023-108105", "Jahmell Dorias"},
        {"2023-110661", "Jomar Durante"},
        {"90123135661", "Daniel Encinas"},
        {"2023-105193", "Ernesto Eugenio Iii"},
        {"2020-106695", "Ariel Faron"},
        {"2023-103839", "Jyle Ulrikh Flores"},
        {"2023-101413", "Seana Louiesa Francisco"},
        {"2023-109022", "Manuel Jr Galendo"},
        {"2023-111108", "Mary Angela Kristel Garganera"},
        {"2023-102675", "Ascel Ray Glimer"},
        {"2023-102361", "Jean Jeromel Hilanga"},
        {"2023-102622", "Jhon Rey Labanon"},
        {"2023-102389", "Elijah Lanuza"},
        {"2023-102805", "Kent Jules Llorente"},
        {"2023-103353", "Gabrielle Madarang"},
        {"2023-103247", "Trisha Mae Ashly Mostoles"},
        {"2023-103829", "Shamel Ocampo"},
        {"2023-104018", "Messalie Paredes"},
        {"2023-102741", "Md.Rehean Patwary"},
        {"2023-103325", "Lord Wisdom Punzalan"},
        {"90123146134", "Jericho Ivan Querubin"},
        {"2023-106893", "Jose Ramil Reyes"},
        {"2023-104231", "Elmer Jr Ruales"},
        {"2023-103843", "Sean Marly Santiago"},
        {"2023-103399", "Rejie Silorio"},
        {"2023-109576", "Sean Lester Soriano"},
        {"2023-107942", "Jay - r Toledo"},
        {"2023-107740", "Ryan Christian Trinidad"},
        {"2023-104093", "Jerick Villanueva"},
        {"2023-104341", "Zhedrick Zaragosa"},

        // Class list
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
