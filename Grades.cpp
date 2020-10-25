//Program Name:						Grades.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#8
//Due Date:							03/29/2018

/*Purpose: 							This program readsin an array of grades 
									from a file of 22 grades. The program then 
									passes through multiple functions to print
									the grades in a table with the position of 
									the grade, the grade, and then the difference 
									of the grade from the average of all grades.
									The program will the use 2 search functions 
									to sort through and find the lowest and highest 
									values and print them out. The program will then 
									pass through a bubble sorting function to sort 
									the grades in descending order and print the values 
									out in one line on the screen. */
#include <iostream>
#include <fstream>

using namespace std;


//Functions
void readData(int grades[], int size, ifstream&fin) 
{
	for (int i=0; i<22; ++i)
	fin>>grades[i];
}

double getAverage(int grades[], int size) 
{
	int total;
	for(int i=0; i<size; ++i)
		total += grades[i];
	return (double)total/size;
}

void printGradesTable(int grades[], int size, double& a) 
{
	cout<<"Position No.\t"<<"Grade\t"<<"Difference from the Average\n";
	for(int i=0; i<size; ++i)
		cout<<i<<"\t\t"<<grades[i]<<"\t\t"<<grades[i]-a<<"\n";
}

void printGradesInRow(int grades[], int size) 
{
	cout<<"\n";
	for(int i=0; i<size; ++i)
		cout<<grades[i]<<",";
}

void min (int grades[], int size) 
{
	int low = grades[0], lowpos = 0;
	for(int i=0; i<size; ++i)
		if(grades[i]<low)
		{
			low=grades[i];
			lowpos=i;
		}

	cout << "Minimum " << low << " at position " << lowpos << endl;
}

void max (int grades[], int size) 
{
	int high = grades[0], highpos = 0;
	for(int i=0; i<size; ++i)
		if(grades[i]>high)
		{
			high=grades[i];
			highpos=i;
		}
	
	cout << "Maximum " << high << " at position " << highpos << endl;
}

void sort(int grades[], int size) 
{
	bool sorted;
	int temp;
	int numpairs = size-1;
	do
	{
		sorted = true;
		for(int i =0; i < numpairs; ++i)
			if (grades[i] < grades[i+1] )
			{
				temp= grades[i];
				grades[i] = grades[i+1];
				grades[i+1] = temp;
				sorted = false;
			}
		numpairs--;
	}
	while(sorted == false);
	
}

//Main Method
int main () 
{
	//Opening File
	ifstream fin("input.txt");
	//Declaration
	int grades[21];
	
	//Initializing Functions
	readData(grades, 22, fin);
	double a= getAverage(grades,22);
	printGradesTable(grades,22, a);
	min(grades, 22);
	max(grades, 22);
	sort (grades, 22);
	printGradesInRow(grades, 22);
	
	//Final Statements
	fin.close();
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}

