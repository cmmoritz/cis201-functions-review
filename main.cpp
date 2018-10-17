/*
File: main.cpp
Description: This program will take a string
	and count the number of 'a' characters
Author: Christina Moritz
Email: moritzc@student.vvc.edu
Date Created: 10-16-18
*/
#include<iostream>
#include<string>

using namespace std;

int counter(string s);

int main()
{
    string s;

    // Prompt for string
    cout << "Enter a string: "<< endl;
    getline (cin,s);

    // Print number of As
    cout << "The number of A characters is: " << counter(s) << endl;

    return 0;
}

int counter(string s)
{
    int count = 0;    

    // Loop to test each character in string
    for(int c = 0; c < s.length(); c++)
    {
	if( s.at(c) == 'a' || s.at(c) == 'A' )
		count++;
    }
 
    return count;
} 
