//*********************************************** 
// COSC 501                                Project #2
// Michael Rios                             10/07/13 
// PROGRAM-NAME: Project #2
// Calculates future investment based on intial investment amount, interest rate, and years invested.  
//*********************************************** 

#include <iostream>
#include <iomanip>
using namespace std;

// takes in intial investment amount, interest rate, and years, returns future investment  
double  future_investment_value(double investmentAmount, double monthlyInterestRate, int years);


void main()
{
	//the variables
	double investmentAmount, monthlyInterestRate; 
	
	int years, months;
	
	//get intial investment amount
	cout << "Enter the intial investment amount: ";
	cin >> investmentAmount;

	//get interest rate
	cout << "\nEnter the interest rate: ";
	cin >> monthlyInterestRate;

	//get number of years invested
	cout << "\nEnter the numbers of years invested: ";
	cin >> years;
	cout << endl;

	//echoes input
	cout << "The amount invested: $" << investmentAmount << endl;
	cout << "Annual interest rate: " << monthlyInterestRate <<"%\n\n"; 

	//formats output
	cout << "Years" << setw(20) << "Future Value\n";
	
	//prints out the first 9 years, makes it look nice
	for (int i=1; i< 10; i++)
	{
		cout << i <<  setw(21) << fixed << setprecision(2) << future_investment_value(investmentAmount, monthlyInterestRate, i);
		cout << endl;

	}

	//prints out every year after 9, makes it look nice
	for (int i=10; i<=years; i++)
	{
		cout << i <<  setw(20) << fixed << setprecision(2) << future_investment_value(investmentAmount, monthlyInterestRate, i);
		cout << endl;

	}

	//farwell
	cout << "Till next time :) \n";
}

//the function
double  future_investment_value(double investmentAmount, double monthlyInterestRate, int years)
{
	double accumulativeValue;

	//the heart of the program
	accumulativeValue = investmentAmount * pow((1 + (monthlyInterestRate/1200)), years * 12);
	
	return accumulativeValue;		
}