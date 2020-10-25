//Program Name:						HighLowGuesser.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Project 2
//Due Date:							02/22/2018

/*Purpose: 							This program randomly generates 
									a number from one to 100 using 
									the formula x=rand() %100 +1 and 
									then asks the user to guess the 
									number. The program will then tell 
									the user wheter they are too high 
									or low in their guess or out of range 
									and will loop until the correct answer 
									is stated or the user ends the game early,
									the program will aslo state how many guesses 
									were entered and will ask if the user would 
									like to play again which will loop program
									if Y is entered and no if N is entered.*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	//Declarations
	int count,UserGuess,x;
	char response;
	
	//First Bigger do statement
	do
	{
		//Calculations 
		count=0;
		srand(time(0));
		x=rand() %100 +1;
		
		//Second, smaller do statement
		//Input Statements
		do
		{
			cout<<"Guess A Number From 1 to 100!\n";
			cin>>UserGuess;
			count++;
			if (UserGuess<-1 || UserGuess>100 ||UserGuess==0)
			cout<<"Number Out Of Range "; 
			else if (UserGuess<x && UserGuess !=-1)
			cout<<"\nYour guess is too low. Try again!\n";
			else if (UserGuess>x)
			cout<<"\nYour guess is too high. Try again!\n";
		}
		while (UserGuess!=x && UserGuess !=-1);
	
		//If the user enters -1, it ends the game early,
		//Otherwise, if the input is the answer, the user is correct.
		if (UserGuess==-1)
		cout<<"You exited the game early with "<<count<<" attempts!";
		else if (UserGuess=x) 
		cout<<"\nYou're Correct! After "<<count<<" attempt(s)!";
		
		//Asking if the user wants to play again
		cout<<"\nDo you want to play again? (Y/N)\n";
		cin>>response;
}
	//If the user wants to play again (Y), big do loops. 
	//Otherwise, game is over.
	while(response=='Y' || response =='y');
	if(response == 'N' || response == 'n');
	cout<<"\nThat's All Folks!\n";

	//Final STatements
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}
