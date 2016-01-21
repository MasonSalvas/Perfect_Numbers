// Perfect Numbers.cpp : Defines the entry point for the console application.
/*
Mason Salvas
October 17, 2012

Assignment: Perfect Numbers
This program writes out perfect numbers and their factors 
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

bool perfect(int number);
void factors(int number);


int main()
{//Begin Main

	cout<<"These are the perfect numbers: \n";
	

	for(int i = 1; i <= 1000; i++)					//will find the perfect numbers from 1 to 1000
	{
		if(perfect(i))
		{
			cout<<i<<" is a perfect number."<<endl;
			factors(i);
			cout<<endl;
		}	
		
	}

	
	
	

	return 0;
}//End Main

bool perfect(int number)
{
	
	int sum = 0;
	

	
		for(int a = 1; a < number; a++)
		{
				 
			if(number % a == 0)
				sum+=a;								//Calculation for finding the perfect numbers 
		}
		
		
		return(sum == number);
			
}

void factors(int number)
{
	
		
		for(int a = 1; a <= number; a++)
		{
				 
			if(number % a==0)
				cout<<a<< ", ";
				
		}
		cout<<endl;

	
}
