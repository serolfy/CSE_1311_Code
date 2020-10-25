//Program Name:						Searching&Sorting.cpp
//Course:							CSE1311(C++)/002
//Student Name:						Yair Flores
//Assignment Number:				Lab#9
//Due Date:							04/12/2018

/*Purpose: 							This program presents the user with a menu of 
									options to choose from. The user must begin by 
									establishing the size of the array, then generate
									random numbers into the array. The user can then
									sort the array in asscending or descending order
									and can use a sequential or binary search to find 
									a apecified target number. */
#include <iostream>

using namespace std;

//Global Declarations
int arr[100];
int size = 100;

//Functions
void printMenu()
{
	cout<<"\nMenu: \n";
	cout<<"0. Exit\n";
	cout<<"1. Get the size needed for today’s use of the array. \n";
	cout<<"2. Fill an array with random numbers from 1-100. \n";
	cout<<"3. Print the array with position numbers. \n";
	cout<<"4. Sort the array in ascending sequence. \n";
	cout<<"5. Sort the array in descending sequence. \n";
	cout<<"6. Sequential search of the array for a target \n";
	cout<<"7. Binary search of the array for a target. \n";
}

void readSize()
{
	cout << "Type in size \n";
	cin >> size;
}

void fillArray()
{
	for(int i=0; i<size; ++i)
	arr[i] = rand()%100+1;
}

void printArray()
{
	for(int i=0; i<size; ++i)
		cout<<i<<"\t"<<arr[i]<<endl;
}

void sortAsc()
{
	for(int i=0; i < size; ++i)
	{
		int key = arr[i];
		int position = i;
		while (position > 0 && arr[position-1] > key)
		{
			arr[position] = arr[position-1];
			position--;
		}
		arr[position]=key;
	}
	
}

void sortDes() 
{
	bool sorted;
	int temp;
	int numpairs = size - 1;
	do
	{
		sorted = true;
		for(int i =0; i < numpairs; ++i)
			if (arr[i] < arr[i+1] )
			{
				temp= arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				sorted = false;
			}
		numpairs--;
	}
	while(sorted == false);
}

int sequentialSearch(int target)
{
	for(int i=0; i<size; ++i)
		if(arr[i] == target)
			return i;
	return -1;
}

int binarySearch(int target)
{
	int first = 0, middle, last = size-1;
		while (first <= last)
			{
				middle = (first + last)/2;
				if (arr[middle] == target)
					{
						return middle;
		
					}
		
				else if (arr[middle] > target)	
					last = middle - 1;
				else
						first = middle + 1;
			} 
return -1;

}

void dispatch(int choice)
{
	int target, loc;
	switch(choice)
	{
		case 0: 
			cout<<"Stop";
			break;
		case 1: 
			readSize();
			break;
		case 2:
			fillArray();
			break;
		case 3:
			printArray();
			break;
		case 4:
			sortAsc();
			break;
		case 5:
			sortDes();
			break;
		case 6:
			{
				cout<< "Enter a target number: \n";
				cin>>target;
				loc = sequentialSearch(target);
				if (loc != -1)
					cout<<target<<" found in position "<<loc<<endl<<endl;
				else 
					cout<<target<<" was not found "<<endl<<endl;
			}
				break;
		case 7:
			{
				cout<< "Enter a target number: \n";
				cin>>target;
				loc = binarySearch(target);
				if (loc != -1)
					cout<<target<<" found in position "<<loc<<endl<<endl;
				else 
					cout<<target<<" was not found "<<endl<<endl;
			}
				break;
	}
}

//Main Method
int main ()
{
    int choice = 0;
    printMenu();
    cout << "Type in a choice: ";

    cin >> choice;

    while (choice != 0)
    {
        dispatch(choice); // one big switch statement
        printMenu();
        cout << "Type in a choice: ";
        cin >> choice;

    }
    
    //Final Statements
	cout<<"\nCoded by Yair Flores"<< endl;					
	system("PAUSE");										
	return 0;		
}
