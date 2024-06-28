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
    
    cout << "How many classes would you like to use to calculate your gpa?: ";
    if (numClass < 0) {
        cout << "Please enter a valid number of classes.";
    } else {
        cin >> numClass;
    }

    for (int i = 0; i < numClass; i++) {
        cout << "Please enter the letter grade for this class: " << endl;
        cin >> letter;

    switch(letter[1]){
        case '+':
        switch (letter[0]){
            case 'A':
            grade=4.33;
            break;
            case 'B':
            grade=3.33;
            break;
            case 'C':
            grade=2.33;
            break;
            case 'D':
            grade=1.33;
            break;
        };
        break;
            
        case ' ':
        switch (letter[0]){
            case 'A':
            grade=4.00;
            break;
            case 'B':
            grade=3.00;
            break;
            case 'C':
            grade=2.00;
            break;
            case 'D':
            grade=1.00;
            break;
            case 'F':
            grade=0.00;
            break;
        };  
        break;
        
        case '-':
        switch (letter[0]){
            case 'A':
            grade=3.67;
            break;
            case 'B':
            grade=2.67;
            break;
            case 'C':
            grade=1.67;
            break;
            case 'D':
            grade=0.67;
            break;
        };
        break;
        };
        
        cout << "How many credits is this "<<i+1<<"th class worth?: ";
        cin >> credit;
        totalCredit += credit;    
        gradePoints = gradePoints + (grade * credit);
    
    }
        
        gpa = gradePoints / totalCredit;  
        cout <<"Your Gpa is "<< gpa << endl;
}

