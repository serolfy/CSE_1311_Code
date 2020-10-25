//Program Name:						PowerPlantData.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				HW #3
//Due Date:							04/24/2018

/*Purpose: 							This program fills a 2D array entered
									in the global declarations with random 
									numbers from 1 to 100. The program then 
									computes and prints the average power 
									output over this period. It then prints
									the number of days with greater than average 
									power output. Lastly the program prints a 
									report that shows the average power output 
									for each day of the week.			 */
#include <iostream>
#include <cstdlib>
using namespace std;

//Globals
const int NCOL = 7;
const int NROW = 10;
double totalPower=0, averagePower, powerOut[NROW][NCOL];

//Functions
void fill(int& col, int& row)
{
	for (row=0; row<NROW; row++)
			for (col=0; col<NCOL; col++)
			{
				powerOut[row][col] = rand()%100+1;
				totalPower += powerOut[row][col];
			}
}

void Average()
{
	averagePower = totalPower/(NROW*NCOL);
}

void GreaterThanAvg(int& greater, int& row, int& col)
{
	int sum;
	for (col=1; col<=NCOL; col++)
	{
		sum=0;
		for (row=0; row<NROW; row++)
			sum += powerOut[row][col];
		float avgC=sum/NROW;
		if (avgC > averagePower)
			greater++;
	}
}

void Print (int& greater)
{
	cout << "Average power output: " << averagePower << endl;
	cout << "The Number of Days with Greater Than ";
	cout<<"Average Power Output: "<< greater << endl;
}

double colAvg(int col, int row)
{
	int sum;
	for (col=1; col<=NCOL; col++)
	{
		sum=0;
		for (row=0; row<NROW; row++)
			sum += powerOut[row][col];
		float avgC=sum/NROW;
		cout<<"\nDay "<<col<<": Average Power Output in Megawatts: ";
		cout<<avgC;
	}				
}

//Main Method
int main()
{
	//Declarations
	int greater=0, row, col;
	//Functions
	fill(col, row);
	Average();
	GreaterThanAvg(greater, row, col);
	Print(greater);
	colAvg(col, row);
	
	//Final Statements
	cout<<"\n\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;	
}

	
