//Program Name:						Reading&WritingFiles.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#5
//Due Date:							02/22/2018

/*Purpose: 							This program reads in three values from an
									input filewhich are not in the correct numerical 
									order.The program then sorts the values up until the 
									trailer as well as writes them to a new output
									file, after which it stops. Once it is done, it
									closes both files and reads in the output file 
									until the end of the file and prints the values
									out onto the screen.						*/
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	//Declarations
	ifstream fin("input.txt");
	float a,b,c,smallest,middle,largest;
	
	//Input 			
	fin>>a>>b>>c;
	ofstream fout("output.txt");
	
	//While not trailer 
	while(a != -1)
	{
	
		//If statements for sorting values
		if (a < b && b < c)
		{
			smallest = a;
			middle = b;
			largest = c;
	
			fout << smallest << "\t";
			fout << middle << "\t";
			fout << largest << endl;
		}
		else if (b < a && a < c)
		{
			smallest = b;
			middle = a;
			largest = c;
	
			fout << smallest << "\t";
			fout << middle << "\t";
			fout << largest << endl;
		}
		else if (c < b && b < a)
		{
			smallest = c;
			middle = b;
			largest = a;
	
			fout << smallest << "\t";
			fout << middle << "\t";
			fout << largest << endl;
		}
		else if (c < a && a < b)
		{
			smallest = c;
			middle = a;
			largest = b;
	
			fout << smallest << "\t";
			fout << middle << "\t";
			fout << largest << endl;
		}
		else if (b < c && c < a)
		{
			smallest = b;
			middle = c;
			largest = a;
	
			fout << smallest << "\t";
			fout << middle << "\t";
			fout << largest << endl;
		}
		else if (a < c && c < b)
		{
			smallest = a;
			middle = c;
			largest = b;
	
			fout << smallest << "\t";
			fout << middle << "\t";
			fout << largest << endl;
		}
		fin>>a>>b>>c;
	}//End of While 
	
	//Closes the output and Input Files
	fin.close();
	fout.close();
	
	//Opens the output file and reads in values
	fin.open("output.txt");
	fin>>a>>b>>c;
	
	//While not the end of the file, prints values 
	while(!fin.eof())
	
	{
		cout<<a<<"\t"<<b<<"\t"<<c<<endl; 
		fin>>a>>b>>c;
	}
	
	//Final Statements
	fin.close();
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}

