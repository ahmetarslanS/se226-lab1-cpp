#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " + name << endl;

    int id;
    cout << "What is your Student ID? ";
    cin >> id;
    cout << id << endl;

    int number1;
    cout << "Enter a number. ";
    cin >> number1;


    int number2;
    cout << "Enter a number. ";
    cin >> number2;

    int sum;
    int diff;
    int prod;

    sum = number1 + number2;
    diff = number1 - number2;
    prod = number1 * number2;

    cout << "Number 1 is: " << number1 << endl;
    cout << "Number 2 is: " << number2 << endl;
    cout << "Summation is: " << sum << endl;
    cout << "Difference is: " << diff << endl;
    cout << "Product  is: " << prod << endl;


    int i;
    int j;
    for (i = 1; i <= 3; i++) {
        for(j=1;j<=i;j++){
            cout<<"*";


        }
        cout<<"\n";
    }

    return 0;
}
