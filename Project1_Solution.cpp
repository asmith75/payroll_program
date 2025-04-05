#include <iostream> //for input and output
#include <string> //to handle strings
#include <iomanip> // for setting decimal precision
using namespace std;

int main() {
	//declare variables
	string lastName, ssnDigits;
	double hourlyRate, totalPay, grossPay, fedTax, stateTax, netPay;
	unsigned int hoursWorked;

	//ask for input
	cout << "Please enter your last name (no spaces): ";
	cin >> lastName;

	cout << "Please enter last four digits of SSN: ";
	cin >> ssnDigits;

	cout << "Please enter hourly rate: ";
	cin >> hourlyRate;

	cout << "Please enter number of hours worked: ";
	cin >> hoursWorked;
	cout << endl << endl;

	//execute calculations 
	grossPay = hourlyRate * hoursWorked;
	fedTax = grossPay * 0.15;
	stateTax = grossPay * 0.05;
	netPay = (grossPay - fedTax) - stateTax;

	//output  messages and then calculations
	cout << "Payroll summary for: " << lastName << endl;
	cout << "SSN (Last 4 digits): " << ssnDigits << endl;
	cout << "You worked " << hoursWorked << " hours at " << hourlyRate << " per hour." << endl << endl;
	
	//set doubles format
	cout << fixed << setprecision(2);

	cout << "Gross Pay:               $  " << grossPay << endl;
	cout << "Federal Withholding:     $  " << fedTax << endl;
	cout << "State Witholding:        $  " << stateTax << endl;
	cout << "-----------------------------------" << endl;
	cout << "Net Pay:                 $  " << netPay <<  endl;
	
	return 0;

}