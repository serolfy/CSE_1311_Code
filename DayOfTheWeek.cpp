//Program Name:						DayOfTheWeek.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Project # 1
//Due Date:							01/25/2018

/*Purpose: 							This program reads the month, day, century, and year that the
									user inputs. If the date is 1/10/2000, it converts it to 13/10/1999.
									If the month is 1 or 2, it converts them to 13 or 14 respectively for 
									the equation to work. It calculates the number of the day of the week
									using the equation h=(q+26*(m+1)/10+k+k/4+j/4+5*j)%7. It will then 	
									reverse any conversions back to the original input along with changing 
									the year if it reaches 100 to 00. After that, using a switch case it 
									will determine the alphabetical day of the week given the number of 
									the week (h) and it will then print the month, day, and year followed 
									by the number of the day of the week and alphabetical name.  */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
//Declarations
int m,j,k,q,h;

//Asking user for Statement
cout<< "Enter the month (1-12): ";

//Input Statement
cin>>m;
cout<< "Enter the day (1-31): ";
cin>>q;
cout<< "Enter the century: ";
cin>>j;
cout<< "Enter the year of the century: ";
cin>>k;
cout<<endl;

//If the date is 1/10/2000, convert 1 to 13 and 2000 to 1999
if (j == 20 && k == 00 && m == 1 && q == 10)
{
	j=19;
	k=99;
	m=13;
}

//If January or February (1or2), convert to 13 or 14
if (m == 1)
{
	m=13;
	k=--k;
}

if (m == 2)
{
	m=14;
	k=--k;
}

//Calculations
h=(q+26*(m+1)/10+k+k/4+j/4+5*j)%7;

//Convert 13 and 14 back to 1 and 2 and the year back to the original
if (m == 13)
{
	m=1;
	k=++k;
}
else if (m == 14)
{
	m=2;
	k=++k;
}

//Convert 19th century to 20th century if year is 00
if ( k == 100)
{
	j=++j;
	k=00;
}


//Output Statements
cout<<"The Date is  " <<m<<"/"<<q<<"/"<<j;

if (k >= 10)
{
	cout<<k<<endl;
}
else
{
	cout<<"0"<<k<<endl;
}

cout<<"The Day of the Week is  "<<h;
switch (h)
{
	case 0:
		cout <<" - Saturday" << endl;
		break;
	case 1:
		cout <<" - Sunday" << endl;
		break;
	case 2:
		cout <<" - Monday" << endl;
		break;
	case 3:
		cout <<" - Tuesday" << endl;
		break;
	case 4:
		cout <<" - Wednesday" << endl;
		break;
	case 5:
		cout <<" - Thursday" << endl;
		break;
	case 6:
		cout <<" - Friday" << endl;
		break;
		
}

//Final Statements 
cout<<"Coded by Yair Flores \n";
system("PAUSE");
return 0;
}
