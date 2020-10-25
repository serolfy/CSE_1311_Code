//Program Name:						TaylorSeries.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#6
//Due Date:							03/08/2018

/*Purpose: 							This program prints a menu of Taylor Series1, 
									Taylor Series 2, or Cosine from the math function 
									of C++. It then inputs the User's choice and asks 
									for the radian of the value wanted to find. The 
									program will find the value calculated by using
									the two functions,power and factorial,in place of
									cmath. If the user enters an option other than 1,2,3
									the program will print that the option is not available,
									otherwise, it will print the answer and ask again.
									The program will end if the user enters a -1.
									*/
#include<iostream>
#include<cmath>

using namespace std;

void printMenu()
{
	cout<<"Enter an Option:\n";
	cout<<"1. Taylor Series 1\n";
	cout<<"2. Taylor Series 2\n";
	cout<<"3. Cosine from math function\n";
	cout<<"-1. Exit\n";
}

//Functions
double power(double x, int n)
{
	double ans=1;
	for(int i=1; i<=n; ++i)
	{
		ans=ans*x;
	}
	if (n<0)
	return 1/ans;
	else return ans;
}

double factorial(double n)
{
	double prod=1;
	for(int i=1; i<=n; ++i)
		prod = prod * i;
	return prod;
}

void Cosine(double n)
{
	cout<<"The cosine of "<<n<<" is "<<cos(n)<<"\n\n";
}

void Taylor1 (double x)
{
	double ans=1, y;
	for(int i=2; i<=10; i+=2)
	{
		y=power(-1,(i/2))* power(x,i) / factorial (i);
		ans+=y;
	}
	cout<<"Using Taylor 1 Function, cos("<<x<<")= "<<ans<<"\n\n";
}

void Taylor2 (double x)
{
	double y=1, ans=1;
	int num=0, i=2;
	while(fabs(y)>.001)
	{
		y=power(-1,(i/2)) * power(x,i)/factorial(i);
		ans+=y;
		i+=2;
		num++;
	}
	cout<<"Using Taylor 2 Function, cos("<<x<<")= "<<ans<<"\n\n";
	cout<<"Number of Times = "<<num<<endl;
}

//Main Function
int main()
{
	//Declarations
	int code; double rad;
	printMenu();
	//Input Output Statements
	cout<< endl;
	cin>>code;
	while (code != -1)
	{
		cout<<"Type in radian\n";
		cin>>rad;
		switch(code)
		{
			case 1: (Taylor1(rad));
					break;
			case 2: (Taylor2(rad));
					break;
			case 3: (Cosine(rad));
					break;
			default: cout<< "Option Not avialable\n\n";
					break;
		}
		printMenu();
		cin>>code;		
	} //End of While
	
	
	//Final Statements
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;												
}

