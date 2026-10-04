/*  Program File Name: Chapter 3 Exercise 3
    Programmer: Christian Min
    Date: 10/4/26
    Requirements:
    Write a program that calculates the user's monthly and annual expenses. Ask the user for the total
    monthly costs for each housing-related expense, then find the sum of those entered values for the
    monthly expenses, then multiply that value by 12 to calculate the annual costs for expenses.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double rentMortgage, phones, internetService, utilities, cable, monthlyTotal, annualTotal;

    cout << "Enter the monthly cost for the rent or mortgage payment: ";
    cin >> rentMortgage;
    cout << "Enter the monthly cost for the phone service: ";
    cin >> phones;
    cout << "Enter the monthly cost for the Internet service: ";
    cin >> internetService;
    cout << "Enter the monthly cost for the utilities: ";
    cin >> utilities;
    cout << "Enter the monthly cost for the cable bill: ";
    cin >> cable;

    monthlyTotal = (rentMortgage + phones + internetService + utilities + cable);
    annualTotal = (monthlyTotal * 12);

    cout << "\n" << "Total monthly cost of these expenses: " << monthlyTotal;
    cout << "\n" << "Total annual cost of these expenses: " << annualTotal << "\n";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
