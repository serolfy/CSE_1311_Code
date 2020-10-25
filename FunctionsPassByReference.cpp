//Program Name:						FunctionsPassByReference.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores & Kiara Lawson
//Assignment Number:				Lab#7
//Due Date:							03/15/2018

/*Purpose: 							This program sets up two values, a an b,
									in main. The two values are read in from
									a file using a pass by reference ReadIn
									function using a trailer of 0 to denote
									the end of the file. The two values are
									printed using a Print function that is 
									pass by value. Then, the two values are
									swapped in memory location using a pass
									by reference Swap function. The two values
									are then printed again using the Print function.
									Lastly, the two values are re-read in using the
									ReadIn function.*/
#include<iostream>
#include<fstream>

using namespace std;

//Read in function
void ReadIn (float& a, float& b, ifstream& fin)
{
	fin>>a>>b;
	
}

//Print function
void Print (float a, float b)
{
	cout<<"The First Value is: "<<a<<"\n";
	cout<<"The Second Vaule is: "<<b<<"\n\n";
}

//Swap function
void Swap (float& a, float& b)
{
	float temp;
	temp=a; a=b;
	b=temp;
}

//Main method
int main()
{	
	//Declarations
	ifstream fin("input.txt");
	float a,b;
	
	//Input 			
	ReadIn(a,b, fin);
	
	//While not trailer 
	while(a != 0)
	{
		
		Print(a,b);
		Swap(a,b);
		Print(a,b);
		ReadIn(a,b, fin);
		
	}//End of While 
	
	//Final Statements
	fin.close();
	cout<<"\nCoded by Yair Flores & Kiara Lawson"<< endl;					
	system("PAUSE");										
	return 0;												
}

