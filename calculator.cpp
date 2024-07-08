#include <iostream>
using namespace std;

int main() {

    int totalCredit = 0;
    int credit = 0;
    int numClass = 0;
    double grade = 0;
    double gpa = 0;
    double gradePoints = 0;
    string letter = "";
    char again = 'y';

    cout << "Welcome to the gpa calculator" << endl;
    cout << "Letter Grade      Percentage      GPA" << endl;
    cout << "A+                90-100          4.33" << endl;
    cout << "A                 85-89           4.00" << endl;
    cout << "A-                80-84           3.67" << endl;
    cout << "B+                77-79           3.33" << endl;
    cout << "B                 73-76           3.00" << endl;
    cout << "B-                70-72           2.67" << endl;
    cout << "C+                67-69           2.33" << endl;
    cout << "C                 63-66           2.00" << endl;
    cout << "C-                60-62           1.67" << endl;
    cout << "D+                57-59           1.33" << endl;
    cout << "D                 53-56           1.00" << endl;
    cout << "D-                50-52           0.67" << endl;
    cout << "F                 00-49           0.00" << endl;
    
    while (again == 'Y' || again == 'y') {
        totalCredit = 0;
        gradePoints = 0;

    cout << "How many classes would you like to use to calculate your gpa?: ";
    cin >> numClass;
    
    if (numClass < 0) {
        cout << "Please enter a valid number of classes.";
        continue;
    }
    
    for (int i = 0; i < numClass; i++) {
        cout << "Please enter the letter grade for this class: " << endl;
        cin >> letter;

        if (letter == "A+") {
            grade = 4.33;
        } else if (letter == "A") {
            grade = 4.00;
        } else if (letter == "A-") {
            grade = 3.67;
        } else if (letter == "B+") {
            grade = 3.33;
        } else if (letter == "B") {
            grade = 3.00;
        } else if (letter == "B-") {
            grade = 2.67;
        } else if (letter == "C+") {
            grade = 2.33;
        } else if (letter == "C") {
            grade = 2.00;
        } else if (letter == "C-") {
            grade = 1.67;
        } else if (letter == "D+") {
            grade = 1.33;
        } else if (letter == "D") {
            grade = 1.00;
        } else if (letter == "D-") {
            grade = 0.67;
        } else if (letter == "F") {
            grade = 0.00;
        } else {
            cout << "Please enter a valid letter grade: ";
            cin >> letter;
        }
        
        cout << "How many credits is this class worth?: ";
        cin >> credit;
        totalCredit += credit;    
        gradePoints = gradePoints + (grade * credit);
    
        }
    }        
        gpa = gradePoints / totalCredit;  
        cout << gpa << endl;
}
