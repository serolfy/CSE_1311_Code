//Program Name:						BMICalculator.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#4
//Due Date:							02/15/2018

/*Purpose: 							This program reads in from a file which 
									has data in the format of wht ht and reads
									two sets at a time. It will then print out 
									a column heading and under print the weight &
									height. It willl use the calculation 
									BMI=702*(wt/ht^2) and print the BMI. Finally it 
									will go through if statements to determine which
									category to print (Normal, Overweight, Under, or 
									Obese) and then it will print errors detailing whether
									the Height or Weight are out of range, or both. */
#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main()
{
	//Declarations
	ifstream fin("LAB4INPUT.txt");
	float wt,ht,BMI;
	//Print Column headings
	cout<<"Weight\t"<<"Height\t"<<"BMI\t"<<"Category\t"<<"Errors\t"<<endl;
	//Input 			
	fin>>wt>>ht;
	
	while(wt != -1)
	{
	//Calculations
	BMI=703*(wt/pow(ht,2));
	//Testing and Output
	cout<<wt<<"\t"<<ht<<"\t"<<BMI;
	
	if(BMI<18.5)
		cout<<"\t"<<"UNDER";
	else if(BMI<24.9)
		cout<<"\t"<<"NORMAL";
	else if(BMI<29.9)
		cout<<"\t"<<"OVER";
	else cout<<"\t"<<"OBESE";
	
	if((wt<20 || wt>300) && (ht<48 || ht>96))
		cout<<"\t\tWt and Ht are out of range";
		
	else if (ht<48 || ht>96)
		cout<<"\t\tHeight out of range";
	
	else if (wt<20 || wt>300)
		cout<<"\t\tWeight out of range";
	cout<<endl;
	//More Input
	fin>>wt>>ht;
	
	}//End of While 
	
	//Final Statements
	fin.close();
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}

