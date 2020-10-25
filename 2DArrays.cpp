//Program Name:						2DArrays.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#10
//Due Date:							04/19/2018

/*Purpose: 							This program fills a 2D array entered
									in the global declarations with random 
									numbers from 1 to 100. The program then 
									prints the array in a column and row 
									format with the columns and rows numbered 
									with a void function. The program then finds
									and prints the highest value using a void 
									function and displays where it was found, 
									and repeats the same with the lowest value.
									The program the transposes and prints array values 
									with a void function. */
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Declarations
int arr[6][6], size;

void fill ()
{
	for(int i=0; i<size; ++i)
		for(int j=0; j<size; ++j)
			arr[i][j] = rand()%100+1;
}

void print () 
{
	cout<<"\t0\t1\t2\t3\t4\t5\n";
	for(int i=0; i<size; ++i){
		cout<<i<<"\t";
		for(int j=0; j<size; j++)
			cout<<arr[i][j]<<"\t";
			cout<<endl;
		}
}

void find_max () 
{
	int savei, savej;
	int high = arr[0][0];
	savei = 0;
	savej = 0;
	for(int i=0; i<size; ++i)
		for(int j=0; j<size; ++j)
		if(arr[i][j]>high)
		{
			high = arr[i][j];
			savei = i;
			savej = j;
		}
	cout<<"\nThe Highest Number Is "<<high;
	cout<<" Found in row "<<savei<<" column "<<savej;
}

void find_min () 
{
	int savei, savej;
	int low = arr[0][0];
	savei = 0;
	savej = 0;
	for(int i=0; i<size; ++i)
		for(int j=0; j<size; ++j)
		if(arr[i][j]<low)
		{
			low = arr[i][j];
			savei = i;
			savej = j;
		}
	cout<<"\n\nThe Lowest Number Is "<<low;
	cout<<" Found in row "<<savei<<" column "<<savej<<endl;
}

void transpose () 
{	
	int temp;
	for(int i=0; i<size; ++i)
		for(int j=i; j<size; ++j)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}	
}

int main ()
{
	//Establishes the size of the array
	size = sizeof( arr ) / sizeof( arr[ 0 ] );
	//Functions
	fill();
	print();
	find_max();
	find_min();
	transpose();
	print();
    
    //Final Statements
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;		
}
