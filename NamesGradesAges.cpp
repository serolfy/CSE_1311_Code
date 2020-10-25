//Program Name:						NamesGradesAges.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Project#4
//Due Date:							04/19/2018

/*Purpose: 							This program uses established arrays
									for names, ages, and grades. The main 
									method then determines the size of the 
									arrays and then calls functions which 
									print the arrays in a format, finds the 
									average and prints the average, prints 
									each student's grade and the difference 
									from the average, prints the people over 
									the age of 25, then sorts & prints the 
									names alphabetically in descending order 
									while keeping the names and ages in 
									order, and sorts & prints the ages in 
									ascending order while keeping the order  
									of namesand the grades in correct order. 
									*/
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

//Global Declarations
string names[12] ={"Anne", "Bob", "Ralph", "Tim", 
"Barbara", "Jane", "Steve", "Tom", "Mike", "Shirley","Pam", "Frank"};
int grades[12] = {67, 85, 70, 93, 85, 83, 99, 100, 89, 81, 75, 50};
int ages[12] = {18, 25, 31, 57, 20, 21, 29, 25, 37, 22, 23, 19};
int size, temp;
float average;

//Print Function
void Print ()
{	
	cout<<"\n\nNAMES\tGRADES\tAGES\n";
	for(int i=0; i<size; ++i)
	{
		cout<<names[i];
		cout<<"\t"<<grades[i];
		cout<<"\t"<<ages[i]<<endl;
	}
}

//Average Function
void AveragePrint ()
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + grades[i];
	average = sum/size;
	cout<<"\n\nThe Average of the Grades is: "<<average;
} 

//Print Grade and Difference
void PrintGradeAnd ()
{
	cout<<"\nNAMES\tGRADES\tDIFFERENCES FROM AVERAGE\n";
	for(int i=0; i<size; ++i)
	{
		cout<<names[i];
		cout<<"\t"<<grades[i];
		cout<<"\t"<<grades[i]-average<<endl;
	}
}

//Age Over 25 Function
void ageOver25()
{
	cout<<"\n\nThe following students are over the age of 25:\n";
	for(int i=0; i<size; ++i)
		if(ages[i]>25)
			cout<< names[i]<<" ";
}

//Descending Alphabetically 
void sortDes()
{
	cout<<"\n\n";

	string temp;
	int temp2;
	for (int i=0; i< size; i++)
	{
		for (int j=i+1; j< size; j++)
		{
			if (names[i] < names[j])
			{ 
				temp = names[i];
				names[i] = names[j];
				names[j] = temp;
				
				temp2 = ages[i];
				ages[i] = ages[j];
				ages[j] = temp2;
				
				temp2 = grades[i];
				grades[i] = grades[j];
				grades[j] = temp2;

			}

		}
	}
}

//Ascending Grades
void sortAsc() 
{
	bool sorted;
	int temp, temp2;
	string temp3;
	int numpairs = size - 1;
	do
	{
		sorted = true;
		for(int i =0; i < numpairs; ++i)
			if (ages[i] > ages[i+1] )
			{
				temp = ages[i];
				ages[i] = ages[i+1];
				ages[i+1] = temp;
				
				temp = grades[i];
				grades[i] = grades[i+1];
				grades[i+1] = temp;
				
				temp3 = names[i];
				names[i] = names[i+1];
				names[i+1] = temp3;
				
				sorted = false;
			}
		numpairs--;
	}
	while(sorted == false);
	
}

//Main Method
int main ()
{
	//Establishes Size for any size
	size = sizeof( ages ) / sizeof( ages[ 0 ] ); 
	
	//Functions
	Print();
	AveragePrint();
	PrintGradeAnd ();
	ageOver25();
	sortDes();
	Print();
	sortAsc();
	Print();

    
    //Final Statements
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;		
}
