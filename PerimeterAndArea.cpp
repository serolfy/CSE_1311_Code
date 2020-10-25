//Program Name:						PerimeterAndArea.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#1
//Due Date:							01/11/2018

/*Purpose: 							This program reads the length and width of a rectangle that the
									user inputs, calculate the area and perimeter and it will print 
									the length, width, area, and perimeter 
									of the rectangle. */

#include<iostream>
using namespace std;

int main()
{
int i,j,n=5;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<” “;
}
cout<<endl;
};
}
	
	//Final Statements
	//This prints my name
	cout<<"Coded by Yair Flores"<< endl;		
	//This line pauses the console				
	system("PAUSE");										
	//This line ends my main method
	return 0;												
}

