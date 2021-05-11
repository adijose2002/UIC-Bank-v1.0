//
// Author: Adithya Jose, UIC, Spring 2021
// Assignment: Project 01: Part 02
//
// g++ -g -Wall main.cpp -o main
// ./main
//


#include <iostream>
#include <iomanip>   
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << std::fixed;            // setup for output of the form .xx
    cout << std::setprecision(2);
    
    cout << "** Welcome to UIC Bank v1.0 **" << endl;        // welcome message for UIC Bank program      
    
    string filename;
    cout << "Enter bank filename> " << endl;        // prompt to enter input file
    cin >> filename;
  
    
    ifstream infile;        // declares an input file object
     
    infile.open(filename);        // opens input file
    
    cout << "** Inputting account data..." << endl;

    // mitigation to make sure input file is legitmate otherwise prints error message
    
    if (!infile.good())  // file is NOT good, i.e. could not be opened:
    {
        cout << "**Error: unable to open input file '" << filename << "'" << endl;
        return 0;  // return now since we cannot continue without proper input file
    }
    else
    {
        cout << "** Outputting account data..." << endl;        // message to indicate opening input file was succesful
    }
    
   // creating int and double objects to input file data into and to modify later in our program
    
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
    
    double b1;
    double b2;
    double b3;
    double b4;
    double b5;
 
   // inputting data into our created objects from the file
    
    infile >> a1;
    infile >> b1;
    infile >> a2;
    infile >> b2;
    infile >> a3;
    infile >> b3;
    infile >> a4;
    infile >> b4;
    infile >> a5;
    infile >> b5;
 
   // outputting bank account data to console
 
    cout << "Account " << a1 << ": balance $" << b1 << endl;
    cout << "Account " << a2 << ": balance $" << b2 << endl;
    cout << "Account " << a3 << ": balance $" << b3 << endl;
    cout << "Account " << a4 << ": balance $" << b4 << endl;
    cout << "Account " << a5 << ": balance $" << b5 << endl;
    
    infile.close();        // closes input file one last time
    
    ofstream outfile;        // declares an output file object
     
    outfile.open(filename);        // opens output file
    
    // mitigation to make sure output file is legitmate otherwise prints error message

    if (!outfile.good())  // file is NOT good, i.e. could not be opened:
    {
        cout << "**Error: unable to open output file '" << filename << "'" << endl;
        return 0;  // return now since we cannot continue without output file
    }
    else
    {
        cout << "** Processing user commands..." << endl;        // message to indicate opening output file was succesful
    }
      
  // below is one while loop compromised with multiple if loops to take in certain commands and execute certain actions
 
  // objects created to get input from the user
 
   string commandInput;
   int accountID;
   double balanceDiff;
   
   while (commandInput != "x") // while loop will only end if "x" is given as an input hence ending the program
   {
    
    cout << "Enter command (+, -, ?, ^, *, x):" << endl; // prompt for user to input a command
    
    cin >> commandInput;
    
    // if loop to make sure proper commands are being inputted otherwise error message will be displayed
    
    if ((commandInput != "+") && (commandInput != "-") && (commandInput != "?") && (commandInput != "^") && (commandInput != "*") && (commandInput != "x"))
     {
      cout << "** Invalid command, try again..." << endl;
     }
 
    // if loop to add a certain amount of money to the balance of a certain account
    
    if (commandInput == "+")
    {
     
     cin >> accountID;
     cin >> balanceDiff;
     
     if (a1 == accountID)
     {
      b1 = b1 + balanceDiff;
      cout << "Account " << accountID << ": balance $" << b1 << endl;
     }
     else if (a2 == accountID)
     {
      b2 = b2 + balanceDiff;
      cout << "Account " << accountID << ": balance $" << b2 << endl;
     }
     else if (a3 == accountID)
     {
      b3 = b3 + balanceDiff;
      cout << "Account " << accountID << ": balance $" << b3 << endl;
     }
     else if (a4 == accountID)
     {
      b4 = b4 + balanceDiff;
      cout << "Account " << accountID << ": balance $" << b4 << endl;
     }
     else if (a5 == accountID)
     {
      b5 = b5 + balanceDiff;
      cout << "Account " << accountID << ": balance $" << b5 << endl;
     }
     else
     {
      cout << "** Invalid account, transaction ignored" << endl;
     }
    }
    
    // if loop to take out a certain amount of money to the balance of a certain account
    
    if (commandInput == "-")
    {
     
     cin >> accountID;
     cin >> balanceDiff;
     
     if (a1 == accountID)
     {
      b1 = b1 - balanceDiff;
      cout << "Account " << accountID << ": balance $" << b1 << endl;
     }
     else if (a2 == accountID)
     {
      b2 = b2 - balanceDiff;
      cout << "Account " << accountID << ": balance $" << b2 << endl;
     }
     else if (a3 == accountID)
     {
      b3 = b3 - balanceDiff;
      cout << "Account " << accountID << ": balance $" << b3 << endl;
     }
     else if (a4 == accountID)
     {
      b4 = b4 - balanceDiff;
      cout << "Account " << accountID << ": balance $" << b4 << endl;
     }
     else if (a5 == accountID)
     {
      b5 = b5 - balanceDiff;
      cout << "Account " << accountID << ": balance $" << b5 << endl;
     }
     else
     {
      cout << "** Invalid account, transaction ignored" << endl;
     }
    }
    
    // if loop to determine the balance of a given account
    
    if (commandInput == "?")
    {
     
     cin >> accountID;
     
     if (a1 == accountID)
     {
      cout << "Account " << accountID << ": balance $" << b1 << endl;
     }
     else if (a2 == accountID)
     {
      cout << "Account " << accountID << ": balance $" << b2 << endl;
     }
     else if (a3 == accountID)
     {
      cout << "Account " << accountID << ": balance $" << b3 << endl;
     }
     else if (a4 == accountID)
     {
      cout << "Account " << accountID << ": balance $" << b4 << endl;
     }
     else if (a5 == accountID)
     {
      cout << "Account " << accountID << ": balance $" << b5 << endl;
     }
     else
     {
      cout << "** Invalid account, transaction ignored" << endl;
     }
    }
    
    // if loop to determine the account with the biggest balance
    
    if (commandInput == "^")
    {
     if (b1 >= b2 and b1 >= b3 and b1 >= b4 and b1 >= b5)
     {
      cout << "Account " << a1 << ": balance $" << b1 << endl;
     }
     else if (b2 >= b1 and b2 >= b3 and b2 >= b4 and b2 >= b5)
     {
      cout << "Account " << a2 << ": balance $" << b2 << endl;
     }
     else if (b3 >= b1 and b3 >= b2 and b3 >= b4 and b3 >= b5)
     {
      cout << "Account " << a3 << ": balance $" << b3 << endl;
     }
     else if (b4 >= b1 and b4 >= b2 and b4 >= b3 and b4 >= b5)
     {
      cout << "Account " << a4 << ": balance $" << b4 << endl;
     }
     else
     {
      cout << "Account " << a5 << ": balance $" << b5 << endl;
     }
    }
    
   // if loop to output to console all bank account information and their balances

   if (commandInput == "*")
   {
    cout << "Account " << a1 << ": balance $" << b1 << endl;
    cout << "Account " << a2 << ": balance $" << b2 << endl;
    cout << "Account " << a3 << ": balance $" << b3 << endl;
    cout << "Account " << a4 << ": balance $" << b4 << endl;
    cout << "Account " << a5 << ": balance $" << b5 << endl;
   } 
  }
 
    // outputting final and modified bank account data to output file
 
    outfile << a1 << " " << b1 << endl;
    outfile << a2 << " " << b2 << endl;
    outfile << a3 << " " << b3 << endl;
    outfile << a4 << " " << b4 << endl;
    outfile << a5 << " " << b5 << endl;
      
    outfile.close();        // closes output file
    
    // ending program messages
    
    cout << "** Saving account data..." << endl;
    cout << "** Done **" << endl;
    
    return 0;        // terminates program
}