//Program Name:						RockPaperScissors.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#3
//Due Date:							02/012018

/*Purpose: 							This program creates a random integer (0,1,or 2) using the 
									formula x=rand()%3 and then Reads in a Rock (R), Paper(P),
									or Scissors(S) from the user. The random number is then
									converted to R, P, or S. The Program then decides if 
									it is a win or loss by the User and prints the result.*/
#include<iostream>
#include<cstdlib>


using namespace std;

int main()
{
	//Declarations & Calculations
	srand(time(0));
	int x;
	char Computer,User;	
	x=rand()%3;
								
	//Asking user for statement	
	cout<<"Let's Play Rock Paper Scissors!\n"
	<<"Enter R, P, or S (Capital Letter)\n"<< endl;	
	
	//Input Statement				
	cin>>User;
	
	//Switching random number to R,P,S.
	switch(x)
	{ 
		case 0:
			Computer='R';
			break;
		case 1:
			Computer='P';
			break;
		case 2:
			Computer='S';
			break;
		}	
	
	//Output Statements
	if (User==Computer)
		cout<<"\nIt's A Tie!\n";
	else if (User == 'R' && Computer == 'P')
		cout <<"\nYou lost! Paper Covers Rock\n";
	else if (User == 'P' && Computer == 'S')
		cout<<"\nYou lost! Scissors cuts Paper\n";
	else if (User == 'S' && Computer == 'R')
		cout<<"\nYou lost! Rock Crushes Scissors\n";
	else if (User == 'P' && Computer == 'R')
		cout <<"\nYou Won! Paper Covers Rock\n";
	else if (User == 'S' && Computer == 'P')
		cout<<"\nYou Won! Scissors cuts Paper\n";
	else cout<<"\nYou Won! Rock Crushes Scissors\n";
		
	//Final Statements
	cout<<"Coded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}

