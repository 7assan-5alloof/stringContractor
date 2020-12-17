#include <iostream>

using namespace std;

int main()
{
    string firstName, lastName, fullName;
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter last name: ";
    cin >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Your full name is " << fullName;

    return 0;
}
