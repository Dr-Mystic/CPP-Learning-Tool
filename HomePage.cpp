#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <ctime>
#include "Arrays and Strings.h"
#include "Example Programs.h"
#include "Flow Control.h"
#include "Functions.h"
#include "Inheritance.h"
#include "Introduction.h"
#include "Object and Class.h"
#include "Pointers.h"
#include "Structures.h"
using namespace std;

void fail()
{
	cout << "Invalid input! \n\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void getFeedback() 
{
	cout << "Thank you for using our program! We would love to hear your feedback.\n";
	cout << "Please enter your name: ";

	string name;
	cin.ignore();
	getline(cin, name);
	system("clear");

	int rating;
	cout << "Please provide your rating (1 to 5 stars): ";
	cin >> rating;
	system("clear");
	while (rating < 1 || rating > 5) 
	{
		cout << "Invalid rating. Please enter a number from 1 to 5: ";
		cin >> rating;
	}

	// Store the feedback in a file
	ofstream feedbackFile("Log.txt", ios::app);
	if (feedbackFile.is_open()) 
	{
		feedbackFile << "Name: " << name << ", Rating: " << rating << " stars\n";
		feedbackFile.close();
		cout << "Thank you for your feedback!\n";// Introduce a delay of 2 seconds before returning
	}
	else 
	{
		cout << "Error: Unable to open the file to store feedback.\n";
	}
}
void displayWelcomeMessage()
{
	// Get the current system time
	time_t now = time(0);
	struct tm timeinfo;
#ifdef _WIN32
	localtime_s(&timeinfo, &now);
#else
	localtime_r(&now, &timeinfo);
#endif
	int hour = timeinfo.tm_hour;

	// Determine the greeting based on the hour of the day
	string greeting;
	if (hour >= 5 && hour < 12) 
	{
		greeting = "Good morning";
	}
	else if (hour >= 12 && hour < 17) 
	{
		greeting = "Good afternoon";
	}
	else if (hour >= 17 && hour < 21) 
	{
		greeting = "Good evening";
	}
	else 
	{
		greeting = "Good night";
	}

	// Display the welcome message with the greeting
	cout << "-----------------------------\n";
	cout << greeting << " and welcome to\n";
	cout << "My C++ Learning Project!\n";
	cout << "-----------------------------\n";
	cout << "In this project, you will find various topics related to C++ programming.\n";
	cout << "Feel free to explore and learn. Let's get started!\n\n";
}

// Program Start
int main()
{
	displayWelcomeMessage();
	while (true)
	{
		// Variable Declaration
		int generalOption, menuOption;

		// General Categories
		cout << "List of Topics: \n";
		cout << "1. C++ Introduction. \n";
		cout << "2. C++ Flow Control. \n";
		cout << "3. C++ Functions. \n";
		cout << "4. C++ Arrays and Strings. \n";
		cout << "5. C++ Structures. \n";
		cout << "6. C++ Object and Class. \n";
		cout << "7. C++ Pointers. \n";
		cout << "8. C++ Inheritance. \n";
		cout << "9. C++ Example Programs. \n";
		cout << "\nPress 0 to exit.\n";
		cin >> generalOption;
		cout << endl;
		system("clear");
		if (generalOption < 0 || generalOption > 9 || cin.fail())
		{
			fail();
			continue;
		}
		if (generalOption == 0)
		{
			getFeedback();
			return 0;
		}

		// Introduction
		if (generalOption == 1)
		{
			while (true)
			{
				cout << "1. Variables, Literals and Constants. \n";
				cout << "2. Data Types. \n";
				cout << "3. Basic I/O. \n";
				cout << "4. Type Conversion. \n";
				cout << "5. Operators. \n";
				cout << "6. Comments. \n";
				cout << "7. File Handling. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 7 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Variables, Literals and Constants
			if (menuOption == 1)
			{
				variable();
			}

			// Data Types
			if (menuOption == 2)
			{
				dataTypes();
			}

			// Basic I/O
			if (menuOption == 3)
			{
				basicIO();
			}

			// Type Conversion
			if (menuOption == 4)
			{
				typeConversion();
			}

			// Operators
			if (menuOption == 5)
			{
				operators();
			}

			// Comments
			if (menuOption == 6)
			{
				comments();
			}

			// File Handling
			if (menuOption == 7)
			{
				fileHandling();
			}
		}

		// Flow Control
		if (generalOption == 2)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. if...else. \n";
				cout << "2. for Loop. \n";
				cout << "3. while Loop. \n";
				cout << "4. do...while Loop. \n";
				cout << "5. break. \n";
				cout << "6. continue. \n";
				cout << "7. switch Statement. \n";
				cout << "8. goto Statement. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 8 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// If Else
			if (menuOption == 1)
			{
				ifElse();
			}

			// For Loop
			if (menuOption == 2)
			{
				forLoop();
			}

			// While Loop
			if (menuOption == 3)
			{
				whileLoop();
			}

			// Do While Loop
			if (menuOption == 4)
			{
				doWhileLoop();
			}

			// Break Statement
			if (menuOption == 5)
			{
				breakStatement();
			}

			// Continue Statement
			if (menuOption == 6)
			{
				continueStatement();
			}

			//  Switch Statement
			if (menuOption == 7)
			{
				switchStatement();
			}

			// Goto Statement
			if (menuOption == 8)
			{
				gotoStatement();
			}
		}

		// Functions
		if (generalOption == 3)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. Functions. \n";
				cout << "2. Function Types. \n";
				cout << "3. Function Overloading. \n";
				cout << "4. Default Argument. \n";
				cout << "5. Storage Class. \n";
				cout << "6. Recursion. \n";
				cout << "7. Return Reference. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 7 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Functions
			if (menuOption == 1)
			{
				functions();
			}

			// Function Types
			if (menuOption == 2)
			{
				functionTypes();
			}

			// Function Overloading
			if (menuOption == 3)
			{
				functionOverloading();
			}

			// Default Argument
			if (menuOption == 4)
			{
				defaultArgument();
			}

			// Storage Class
			if (menuOption == 5)
			{
				storageClass();
			}

			// Recursion
			if (menuOption == 6)
			{
				recursion();
			}

			// Return Reference
			if (menuOption == 7)
			{
				returnReference();
			}
		}

		// Arrays and Strings
		if (generalOption == 4)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. Arrays. \n";
				cout << "2. Multidimensional Arrays. \n";
				cout << "3. Function and Array. \n";
				cout << "4. String. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 4 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Arrays
			if (menuOption == 1)
			{
				arrays();
			}

			// Multidimensional Arrays
			if (menuOption == 2)
			{
				multidimensionalArrays();
			}

			// Function and Array
			if (menuOption == 3)
			{
				functionArray();
			}

			// String
			if (menuOption == 4)
			{
				strings();
			}
		}

		// Structures
		if (generalOption == 5)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. Structures. \n";
				cout << "2. Structure and Function. \n";
				cout << "3. Pointers to Structure. \n";
				cout << "4. Enumeration. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 4 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Structures
			if (menuOption == 1)
			{
				structure();
			}

			// Structure and Function
			if (menuOption == 2)
			{
				structureFunction();
			}

			// Pointers to Structure
			if (menuOption == 3)
			{
				pointersStructure();
			}

			// Enumeration
			if (menuOption == 4)
			{
				enumeration();
			}
		}

		// Object and Class
		if (generalOption == 6)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. Objects and Class. \n";
				cout << "2. Constructors. \n";
				cout << "3. Objects and Function. \n";
				cout << "4. Operator Overloading. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 4 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Objects and Class
			if (menuOption == 1)
			{
				objectsAndClass();
			}

			// Constructors
			if (menuOption == 2)
			{
				constructors();
			}

			// Objects and Function
			if (menuOption == 3)
			{
				objectsAndFunction();
			}

			// Operator Overloading
			if (menuOption == 4)
			{
				operatorOverloading();
			}
		}

		// Pointers
		if (generalOption == 7)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. Pointers. \n";
				cout << "2. Pointers and Arrays. \n";
				cout << "3. Pointers and Functions. \n";
				cout << "4. Memory Management. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 4 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Pointers
			if (menuOption == 1)
			{
				pointers();
			}

			// Pointers and Arrays
			if (menuOption == 2)
			{
				pointersAndArrays();
			}

			// Pointers and Functions
			if (menuOption == 3)
			{
				pointersAndFunctions();
			}

			// Memory Management
			if (menuOption == 4)
			{
				memoryManagement();
			}
		}

		// Inheritance
		if (generalOption == 8)
		{
			while (true)
			{
				cout << "List of Topics: \n";
				cout << "1. Inheritance. \n";
				cout << "2. Inheritance Access Control. \n";
				cout << "3. Function Overriding. \n";
				cout << "4. Inheritance Types. \n";
				cout << "5. Friend Function. \n";
				cout << "6. Virtual Function. \n";
				cout << "7. Templates. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 7 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Inheritance
			if (menuOption == 1)
			{
				inheritance();
			}

			// Inheritance Access Control
			if (menuOption == 2)
			{
				inheritanceAccessControl();
			}

			// Function Overriding
			if (menuOption == 3)
			{
				functionOverriding();
			}

			// Inheritance Types
			if (menuOption == 4)
			{
				inheritanceTypes();
			}

			// Friend Function
			if (menuOption == 5)
			{
				friendFunction();
			}

			// Virtual Function
			if (menuOption == 6)
			{
				virtualFunction();
			}

			// Templates
			if (menuOption == 7)
			{
				templates();
			}
		}

		// Example Programs
		if (generalOption == 9)
		{
			while (true)
			{
				Examples:
				cout << "1. Basic Programs. \n";
				cout << "2. Array Programs. \n";
				cout << "3. 2D Array Programs. \n";
				cout << "4. String Programs. \n";
				cout << "5. File Handling Programs. \n";
				cout << "\nPress 0 to exit.\n";
				cin >> menuOption;
				cout << endl;
				system("clear");
				if (menuOption < 0 || menuOption > 5 || cin.fail())
				{
					fail();
					continue;
				}
				if (menuOption == 0)
				{
					break;
				}
				break;
			}

			// Basic Programs
			if (menuOption == 1)
			{
				while (true)
				{
					int option;
					cout << "1. ASCII Code. \n";
					cout << "2. Check Character. \n";
					cout << "3. Check Even and Odd. \n";
					cout << "4. Check Leap Year. \n";
					cout << "5. Find Largest and Smallest Number. \n";
					cout << "6. Check Positive and Negative Number. \n";
					cout << "\nPress 0 to exit. \n";
					cin >> option;
					system("clear");
					if (option < 0 || option > 6 || cin.fail())
					{
						fail();
						continue;
					}
					if (option == 0)
					{
						goto Examples;
					}
					if (option == 1)
					{
						ascii();
					}
					else if (option == 2)
					{
						checkCharacter();
					}
					else if (option == 3)
					{
						evenOdd();
					}
					else if (option == 4)
					{
						leap();
					}
					else if (option == 5)
					{
						largestSmallest();
					}
					else if (option == 6)
					{
						positiveNegative();
					}
				}
			}

			// Array Programs
			if (menuOption == 2)
			{
				while (true)
				{
					cout << "1. Find Maximum and Minimum. \n";
					cout << "2. Find Second Maximum. \n";
					cout << "3. Print in Reverse Order. \n";
					cout << "4. Split in Two Chunks. \n";
					cout << "5. Auto-Growing of Array. \n";
					cout << "\nPress 0 to exit. \n";
					int option;
					cin >> option;
					system("clear");
					if (option < 0 || option > 6 || cin.fail())
					{
						fail();
						continue;
					}
					if (option == 0)
					{
						goto Examples;
					}

					if (option == 1)
					{
						maxMin();
					}
					else if (option == 2)
					{
						secondMax();
					}
					else if (option == 3)
					{
						reverse();
					}
					else if (option == 4)
					{
						split();
					}
					else if (option == 5)
					{
						autoGrow();
					}
				}
			}

			// 2D Array Programs
			if (menuOption == 3)
			{
				while (true)
				{
					cout << "1. Traversal. \n";
					cout << "2. Transposing the Matrix. \n";
					cout << "\nPress 0 to exit. \n";
					int option;
					cin >> option;
					system("clear");
					if (option < 0 || option > 2 || cin.fail())
					{
						fail();
						continue;
					}
					if (option == 0)
					{
						goto Examples;
					}

					if (option == 1)
					{
						traversal();
					}

					if (option == 2)
					{
						transpose();
					}
				}
			}

			// String Programs
			if (menuOption == 4)
			{
				while (true)
				{
					cout << "1. Case Conversion. \n";
					cout << "2. Character Identification. \n";
					cout << "\nPress 0 to exit. \n";
					int option;
					cin >> option;
					system("clear");
					if (option < 0 || option > 2 || cin.fail())
					{
						fail();
						continue;
					}
					if (option == 0)
					{
						goto Examples;
					}

					if (option == 1)
					{
						stringCaseConversion();
					}

					if (option == 2)
					{
						stringCharacterIdentification();
					}
				}
			}

			// File Handling Programs
			if (menuOption == 5)
			{
				while (true)
				{
					cout << "1. Basic Operations. \n";
					cout << "2. Retrieve Data. \n";
					cout << "3. Read and Write. \n";
					cout << "4. Case Conversion. \n";
					cout << "5. Encryption and Decryption. \n";
					cout << "\nPress 0 to exit. \n";
					int option;
					cin >> option;
					system("clear");
					if (option < 0 || option > 5 || cin.fail())
					{
						fail();
						continue;
					}
					if (option == 0)
					{
						goto Examples;
					}

					if (option == 1)
					{
						basicFile();
					}

					if (option == 2)
					{
						retrieve();
					}

					if (option == 3)
					{
						readWrite();
					}

					if (option == 4)
					{
						caseConversion();
					}

					if (option == 5)
					{
						encryptDecrypt();
					}
				}
			}
		}
	}
}