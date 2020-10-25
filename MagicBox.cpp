//Program Name:						MagicBox.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#11
//Due Date:							04/26/2018

/*Purpose: 							This program opens an inpu file and reads in 
									the size of the desired array and creates an 
									array of that size. It then reads in the data 
									fill each array. This program will keep reading
									in the array size and data for arrays until a 
									trailer of -1 has been read. The program willl
									print each array out and the Square(array). The 
									program will then add up each row and column 
									and print out the values. The program will then 
									print out the diagonal addition of the array and
									the reverse diagonal sum. It will compare all the
									values and if they all equal eachother then the 
									program will state that the matrix is a magic box. 
									If they do not equal eachother then the program will
									print that the matrix is not a magic box.	 */							
#include <iostream>
#include <fstream>

using namespace std;
//Global Declarations
int box[10][10];
int size, SN;

//Functions 
int readSize(ifstream& fin) 
{
	fin >> size;
	SN++;
}

int readData(ifstream& fin) 
{
	for(int i=0; i<size; ++i)
		for(int j=0; j<size; ++j)
			fin>>box[i][j];
}

void printMatrix() 
{
	cout<<"=========\n";
	cout<<"=Square "<<SN<<"=\n";
	cout<<"=========\n";
	for(int i=0; i<size; ++i)
	{
		for(int j=0; j<size; j++)
			cout<<box[i][j]<<"\t";
			cout<<endl;
	}
}
int sumRow(int row) 
{
	int total=0;
	for(int j=0; j<size; ++j)
		total +=box[row][j];
	return total;
}

int sumCol(int col) 
{
	int total=0;
	for(int i=0; i<size; ++i)
		total +=box[i][col];
	return total;
}

int sumMainDiagonal() 
{
	int total=0;
	for(int i=0; i<size; ++i)
		total +=box[i][i];
	return total;
}

int sumReverseDiagonal() 
{
	int total=0;
	for(int i=0; i<size; ++i)
		total +=box[i][size-i-1];
	return total;
}

bool isMagic() 
{
	int hold = sumMainDiagonal();
	for(int i=0; i<size; ++i)
		if(hold != sumRow(i))
			return false;
	
	for(int i=0; i<size; ++i)
		if(hold != sumCol(i))
			return false;
	if(sumReverseDiagonal() != hold)
		return false; 
	else return true;
	
}

//Main Method
int main() 
{
	ifstream fin("input.txt");
	readSize(fin);
	while( size!= -1)
	{
		readData(fin);
		printMatrix();
		
		 
		for(int i=0; i<size; ++i)
			cout<<"Row Totals for row "<<i<<" is "<<sumRow(i)<<endl;
		for(int j=0; j<size; ++j)
			cout<<"Column Totals for column"<<j<<" is "<<sumCol(j)<<endl;
		cout<<"\n\nMain Diagonal is "<<sumMainDiagonal()<<endl;
		cout<<"Reverse Diagonal is "<<sumReverseDiagonal()<<endl<<endl;
		if (isMagic() == false)
			cout<<"\nThis Matrix is not a magic box!\n\n";
		else cout<<"\nThis Matrix is a magic box!\n\n";
		readSize(fin);
	}
	
    //Final Statements
    fin.close();
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;		
}
