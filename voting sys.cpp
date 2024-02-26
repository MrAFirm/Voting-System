#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) { // declare a function
    cout << fname << "Initiated.\n\n";
}

//Basic voting registration
int main() {
    myFunction("Voting System "); //Call the function
    cout << "Welcome to the Voting Registration.\n\n"; //Title
//Get user input
    string fullName;
    cout << "Enter your full name: ";
//Input Strings
    getline (cin, fullName);  //use getline() function to take cin as first parameter & the string variable as second parameter
    cout << "Name used to register vote is: " << fullName << "\n\n"; //output user input name

//Boolean Expression
//create variable
    int myAge;
    cout << "Enter your age: ";
    cin >> myAge;  //Get user input
    int votingAge = 18;
//If user is over the age of 18, output able to vote, else unable to vote
    if (myAge >= votingAge) {
        cout << "Able to vote! Happy Voting!\n\n";
        cout << "The candidates are: \n";
        string namess[] = {"1. Matthew", "2. Mark", "3. Luke", "4. John"};
        for (string i : namess) { //for-each loop
            cout << i << "\n";
        }
        cout << "Type 1-4: ";
        int name;
        cin >> name;
        //switch expression
        switch (name) {
        case 1:
            cout << "You voted for: Matthew\n\n";
            cout << "Thank you for voting!";
            break;
        case 2:
            cout << "You voted for: Mark\n\n";
            cout << "Thank you for voting!";
            break;
        case 3:
            cout << "You voted for: Luke\n\n";
            cout << "Thank you for voting!";
            break;
        case 4:
            cout << "You voted for: John\n\n";
            cout << "Thank you for voting!";
            break;
        default:
            if (name > 4) {
                cout << "Error. Number entered more than 5.\n\n";
                cout << "Retype number 1-4: ";
                cin >> name;
                if (name == 1) {
                    cout << "You voted for: Matthew\n\n";
                    cout << "Thank you for voting!";
                } else if (name == 2) {
                    cout << "You voted for: Mark\n\n";
                    cout << "Thank you for voting!";
                } else if (name == 3) {
                    cout << "You voted for: Luke\n\n";
                    cout << "Thank you for voting!";
                } else if (name == 4) {
                    cout << "You voted for: John\n\n";
                    cout << "Thank you for voting!";
                } else {
                    cout << "Error. User fooling around with voting system. Your vote will not be counted.";
                }
            }
        }
    } else {
        cout << "Unable to vote! Have a nice day!";
    }
    if (myAge >= votingAge) {
        cout << "\n\nData saved.";
        cout << "\n\nDo you want to view where we store our data? (Memory Address)\nY/N:";
        string namess;
        cin >> namess;
        string *ptr = &namess;
        if (namess == "Y") {
            cout << ptr << "\n";
            cout << "\nThanks, have a great day!";
        } else {
            cout << "\nThanks, have a great day!";
        }
    }
    return 0;
}