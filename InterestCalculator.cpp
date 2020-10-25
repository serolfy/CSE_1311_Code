//Program Name:						InterestCalculator.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#2
//Due Date:							01/25/2018

/*Purpose: 							This program reads Principle Amount (P), Annual Rate of Interest(r), 
									number of years the ammount is borrowed for(t), and the number of 
									times the interest is compounded per year(n). The program then 
									calculates the amount of money paid back after set years with 
									interest using the formula A=P*pow((1+r/n),n*t). The program
									prints out all of the inputed values along with the calculated 
									amount of money with no formatting,fixed formatting, two decimal
									places, and scientific 4 decimal places. */ 

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	//Declarations
	double A,P,r;
	int n,t;
								
	//Input Statements	
	cout<<"Type in value for Principle Amount \n";
	cin >>P;
	cout<<"Type in value for the Annual Rate of Interest \n";
	cin>>r;
	cout<<"Type in value for the number of times the interest is compounded per year \n";
	cin>>n;
	cout<<"Type in value for the number of years the ammount is borrowed for \n";
	cin>>t;
	
	//Calculations
	A=P*pow((1+r/n),n*t);
	
	//Output Statements
	//Non-Formatted Values
	cout<<"\nNon-Formatted Values \n";
	cout<<"The inputed value for the Principle Ammount is "<<P<<endl;
	cout<<"The inputed value for the Annual Rate of Interest is "<<r<<endl;
	cout<<"The inputed value for the number of times the interest is compounded per year is "<<n<<endl;
	cout<<"The inputed value for the number of years the ammount is borrowed for is "<<t<<endl;
	cout<<"The calculated amount of money paid back, including interest is "<<A<<endl;
	
	//With Fixed Formatted Values
	cout<<"\nWith Fixed Formatted Values \n";
	cout<<fixed;
	cout<<"The inputed value for the Principle Ammount is "<<P<<endl;
	cout<<"The inputed value for the Annual Rate of Interest is "<<r<<endl;
	cout<<"The inputed value for the number of times the interest is compounded per year is "<<n<<endl;
	cout<<"The inputed value for the number of years the ammount is borrowed for is "<<t<<endl;
	cout<<"The calculated amount of money paid back, including interest is "<<A<<endl;
	
	//With Precision of 3 Formatting
	cout<<"\nSet Precision of 3 Values \n";
	cout<< setprecision(3);
	cout<<"The inputed value for the Principle Ammount is "<<P<<endl;
	cout<<"The inputed value for the Annual Rate of Interest is "<<r<<endl;
	cout<<"The inputed value for the number of times the interest is compounded per year is "<<n<<endl;
	cout<<"The inputed value for the number of years the ammount is borrowed for is "<<t<<endl;
	cout<<"The calculated amount of money paid back, including interest is "<<A<<endl;
	
	//With Precission of 4 Formatting
	cout<<"\n Scientific Formatted Values, Set Precision of 4 Values \n";
	cout<<scientific<<setprecision(4);
	cout<<"The inputed value for the Principle Ammount is "<<P<<endl;
	cout<<"The inputed value for the Annual Rate of Interest is "<<r<<endl;
	cout<<"The inputed value for the number of times the interest is compounded per year is "<<n<<endl;
	cout<<"The inputed value for the number of years the ammount is borrowed for is "<<t<<endl;
	cout<<"The calculated amount of money paid back, including interest is "<<A<<endl;

	
	//Final Statements
	cout<<"\nCoded by Yair Flores\n"<< endl;					
	system("PAUSE");										
	return 0;												
}

