#include <iostream>

using namespace std;


// always type a semicolon when trying to make a class at the end


int main() {

float add;
float sub;
float prod;
float div;
float fno;
float sno;
float choice;

cout<< " ----------------------------------------------------------------------- \n";
cout<< "|                                 WELCOME                                |\n";
cout<< "|                                                                        |\n";
cout<< "|                         THIS IS BASIC CALCULATOR                       |\n";
cout<< "|                                                                        |\n";
cout<< "|                                                                        |\n";
cout<< " ------------------------------------------------------------------------\n";

cout << "Please Choose Your Desired Operation \n\n";
cout << " -1 Addition \n -2 Subtraction \n -3 Multiplication \n -4 Division \n\n";

cout << "ENTER :- ";
cin >> choice;

if(choice == 1){
    cout << "You have selected addition \n\n";

    cout << "Please enter the first number \n\n";
    cout << "ENTER :- ";
    cin >> fno;

    cout << "Please enter the second number \n\n";
    cout << "ENTER :- ";
    cin >> sno;

    add = fno + sno;

    cout << "The sum of entered numbers is " << add << "." << endl;
}
 if(choice == 2) {
    cout << "You have selected subtraction \n\n";

    cout << "Please enter the first number \n\n";
    cout << "ENTER :- ";
    cin >> fno;

    cout << "Please enter the second number \n\n";
    cout << "ENTER :- ";
    cin >> sno;

    sub = fno - sno;

    cout << "The difference of entered numbers is " << sub << "." << endl;
 }
 if(choice == 3){
    cout << "You have selected multiplication \n\n";

    cout << "Please enter the first number \n\n";
    cout << "ENTER :- ";
    cin >> fno;

    cout << "Please enter the second number \n\n";
    cout << "ENTER :- ";
    cin >> sno;

    prod = fno * sno;

    cout << "The product of entered numbers is " << prod << "." << endl;
 }
 if(choice == 4){
    cout << "You have selected division \n\n";

    cout << "Please enter the first number \n\n";
    cout << "ENTER :- ";
    cin >> fno;

    cout << "Please enter the second number \n\n";
    cout << "ENTER :- ";
    cin >> sno;

    div = fno / sno;

    cout << "The division of entered numbers is " << div << "." << endl;
 }
 if(choice < 1){
    cout << "You have entered a wrong value. Please restart the program. \n\n";
 }

 if(choice > 4){
    cout << "You have entered a wrong value. Please restart the program. \n\n";
 }

 cout << "------------------- THANK YOU FOR USING OUR SERVICE -------------------";
return 0;
}
