//Program Name:						FunctionsProject.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Project #3
//Due Date:							03/15/2018

/*Purpose: 							This program reads in a maximum of 12 digits from
									an input file composing 3 sets of two fractions. 
									Once a set of 2 fractions is read in, the main 
									function utilizes 5 functions created to 
									calculate the addition, subtraction, 
									multiplication, division, and the negative of 
									the first fraction and prits the result on the 
									output screen. Once complete, the program then 
									runs a set of 6 boolean functions which 
									deterimines if the two equations are equal to 
									eachother, not equal to eachother, if one is 
									less than or equal or greater than or equal 
									to the other, and prints the result 
									on the output screen.  */
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

//Read in function
void ReadIn (int& a, int& b, ifstream& fin)
{
	fin>>a>>b;
	if (b<0)
	{
		a = a*-1;
		b = b*-1;
	}
}

//Add function
void add(int a, int b, int c, int d, int& top, int& bot)
{
	top = a*d + b*c;
	bot = b*d;
}

//Subtraction function
void sub(int a, int b, int c, int d, int& top, int& bot)
{
	top = a*d - b*c;
	bot = b*d;
}

//Multiplication function
void mult(int a, int b, int c, int d, int& top, int& bot)
{
	top = (a*c);
	bot = b*c;
}

//Division function
void div(int a, int b, int c, int d, int& top, int& bot)
{
	top = a*d;
	bot = b*c;
}

//Negate function
void neg(int a, int b, int& top, int& bot)
{
	top = -1 * a;
	bot = b;
}

//Logic Bools
bool equal(int a, int b, int c, int d)
{
	if ((a*d) == (c*b))
		return true;
	else return false; 
}
bool notEqual(int a, int b, int c, int d)
{
	if (a*d != c*b)
		return true;
	else return false; 
}
bool lessThan(int a, int b, int c, int d)
{
	if(a*d < c*b)
		return true;
	else return false;
}
bool lessThanEqual(int a, int b, int c, int d)
{
	if(a*d <= c*b)
		return true;
	else return false;
}
bool greaterThan(int a, int b, int c, int d)
{
	if(a*d > c*b)
		return true;
	else return false;
}
bool greaterThanEqual(int a, int b, int c, int d)
{
	if(a*d >= c*b)
		return true;
	else return false;
}

//Main method
int main()
{	
	//Declarations
	int a, b, c, d, top, bottom;
	ifstream fin("input.txt");
	//For loop
	for(int i=1; i<=3; ++i)
		{
			ReadIn (a, b, fin);
			ReadIn (c, d, fin);
			cout<<"Rational Number 1: "<<a<<"/"<<b<<endl;
			cout<<"Rational Number 2: "<<c<<"/"<<d<<"\n\n";
			
			add(a,b,c,d,top,bottom);
			cout<<a<<"/"<<b<<" + "<<c<<"/"<<d<<"= "<<top<<"/"<<bottom<<endl;
			
			sub(a,b,c,d,top,bottom);
			cout<<a<<"/"<<b<<" - "<<c<<"/"<<d<<"= "<<top<<"/"<<bottom<<endl;
			
			mult(a,b,c,d,top,bottom);
			cout<<a<<"/"<<b<<" * "<<c<<"/"<<d<<"= "<<top<<"/"<<bottom<<endl;
			
			div(a,b,c,d,top,bottom);
			cout<<a<<"/"<<b<<" / "<<c<<"/"<<d<<"= "<<top<<"/"<<bottom<<endl;
			
			neg(a,b,top,bottom);
			cout<<"(-)"<<a<<"/"<<b<<" = "<<top<<"/"<<bottom<<endl;
			
			equal(a,b,c,d);
			cout<<a<<"/"<<b<<" == "<<c<<"/"<<d<<": ";
			std::cout<<std::boolalpha<<equal(a,b,c,d)<<endl;
			
			notEqual(a,b,c,d);
			cout<<a<<"/"<<b<<" != "<<c<<"/"<<d<<": ";
			std::cout<<std::boolalpha<<notEqual(a,b,c,d)<<endl;
			
			lessThan(a,b,c,d);
			cout<<a<<"/"<<b<<" < "<<c<<"/"<<d<<": ";
			std::cout<<std::boolalpha<<lessThan(a,b,c,d)<<endl;
			
			lessThanEqual(a,b,c,d);
			cout<<a<<"/"<<b<<" <= "<<c<<"/"<<d<<": ";
			std::cout<<std::boolalpha<<lessThanEqual(a,b,c,d)<<endl;
			
			greaterThan(a,b,c,d);
			cout<<a<<"/"<<b<<" > "<<c<<"/"<<d<<": ";
			std::cout<<std::boolalpha<<greaterThan(a,b,c,d)<<endl;
			
			greaterThanEqual(a,b,c,d);
			cout<<a<<"/"<<b<<" >= "<<c<<"/"<<d<<": ";
			std::cout<<std::boolalpha<<greaterThanEqual(a,b,c,d)<<"\n\n";
		} //End of for
	
	//Final Statements
	fin.close();
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}

