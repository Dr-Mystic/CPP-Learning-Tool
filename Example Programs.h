#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void fail();

void encrypt(string& data, int key)
{
    for (int x = 0; x < data.size(); x++)
    {
        data[x] = char(data[x] + key);
    }
}
void decrypt(string& data, int key)
{
    for (int x = 0; x < data.size(); x++)
    {
        data[x] = char(data[x] - key);
    }
}

void stringCharacterIdentification()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This is a simple program that utilises string library. It takes input from the user in the form of string
and identifies the number of characters, special characters, digits, vowels and spaces present in the input. 
This information is then shown in the output.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        // Declare variables that will be used
        int character = 0, specialCharacter = 0, digit = 0, vowel = 0, space = 0;
        string inputString;

        // Take string input and calculate length
        cout << "Enter a string: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, inputString);
        int length = inputString.length();

        // Identify each character and add to relevant type
        for (int i = 0; i < length; i++)
        {
            if (inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' || inputString[i] == 'o' || inputString[i] == 'u')
            {
                vowel++;
                character++;
            }
            else if (isalpha(inputString[i]))
            {
                character++;
            }
            else if (isdigit(inputString[i]))
            {
                digit++;
            }
            else if (!isspace(inputString[i]))
            {
                specialCharacter++;
            }
            else
            {
                space++;
            }
        }

        // Display output of number of each type of characters
        cout << "Number of characters: " << character << endl;
        cout << "Number of special characters: " << specialCharacter << endl;
        cout << "Number of digits: " << digit << endl;
        cout << "Number of vowels: " << vowel << endl;
        cout << "Number of spaces: " << space << endl;

        return 0;
    }
}
)";
        }

        // Program Execution
        if (option == 3)
        {
           // Declare variables that will be used
           int character = 0, specialCharacter = 0, digit = 0, vowel = 0, space = 0;
           string inputString;

           // Take string input and calculate length
           cout << "Enter a string: ";
           cin.ignore(numeric_limits<streamsize>::max(), '\n');
           getline(cin, inputString);
           int length = inputString.length();

           // Identify each character and add to relevant type
           for (int i = 0; i < length; i++)
           {
               if (inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' || inputString[i] == 'o' || inputString[i] == 'u')
               {
                    vowel++;
                    character++;
               }
               else if (isalpha(inputString[i]))
               {
                    character++;
               }
               else if (isdigit(inputString[i]))
               {
                    digit++;
               }
               else if (!isspace(inputString[i]))
               {
                    specialCharacter++;
               }
               else
               {
                    space++;
               }
           }

           // Display output of number of each type of characters
           cout << "\nNumber of characters: " << character << endl;
           cout << "Number of special characters: " << specialCharacter << endl;
           cout << "Number of digits: " << digit << endl;
           cout << "Number of vowels: " << vowel << endl;
           cout << "Number of spaces: " << space << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void stringCaseConversion()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {

        }

        // Source Code
        if (option == 2)
        {

        }

        // Program Execution
        if (option == 3)
        {
            Start:
            // Declare variables that will be used
            int length, counter1 = 0, counter2 = 0;

            // Take string input and store in char array
            char inputString[100];
            cout << "Enter a string: ";
            cin >> inputString;
            length = strlen(inputString);

            for (counter1; counter1 < length; counter1++)
            {
                if (!isalpha(inputString[counter1]))
                {
                    cout << "Invalid input. Only enter Uppercase or Lowercase letters." << endl;
                    goto Start;
                }
            }

            // Identify each character and change its case
            for (counter2; counter2 < length; counter2++)
            {
                if (inputString[counter2] >= 65 && inputString[counter2] <= 90)
                {
                    inputString[counter2] += 32;
                }
                else if (inputString[counter2] >= 97 && inputString[counter2] <= 122)
                {
                    inputString[counter2] -= 32;
                }
                cout << inputString[counter2];
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void ascii()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(It is a simple program which takes a character as input from user. 
It then tells us the ASCII value of that character according to the globally recognized ASCII codes.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter a character: ";
    cin >> character;

    cout << "ASCII value of " << character << " is " << int(character) << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            char character;

            cout << "Enter a character: ";
            cin >> character;

            cout << "ASCII value of " << character << " is " << int(character) << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void checkCharacter()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program takes a character as input from the user and checks whether it is an uppercase letter,
lowercase letter, digit or a special character. The result is then printed as output.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    char c;
        cout << "Enter a character: ";
        cin >> c;

        if (c >= 'A' && c <= 'Z')
        {
            cout << c << " is an uppercase letter." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (c >= 'a' && c <= 'z')
        {
            cout << c << " is a lowercase letter." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (c >= '0' && c <= '9')
        {
            cout << c << " is a digit." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            cout << c << " is a special character." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            char c;
            cout << "Enter a character: ";
            cin >> c;

            if (c >= 'A' && c <= 'Z')
            {
                cout << c << " is an uppercase letter." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (c >= 'a' && c <= 'z')
            {
                cout << c << " is a lowercase letter." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (c >= '0' && c <= '9')
            {
                cout << c << " is a digit." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                cout << c << " is a special character." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void evenOdd()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(The program simply takes an integer number as input and checks whether it is an even number
or odd number. It then prints the result as output.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is even \n";
    else
        cout << num << " is odd \n";

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int num;

            cout << "Enter a number: ";
            cin >> num;

            if (num % 2 == 0)
                cout << num << " is even. \n";
            else
                cout << num << " is odd. \n";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void leap()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program asks the user to input a year. It then checks and tells whether that year was/will be a leap year or not.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;
    if (year > 0)
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    cout << year << " is a leap year." << endl;
                else
                    cout << year << " is not a leap year." << endl;
            }
            else
                        cout << year << " is a leap year." << endl;
        }
        else
            cout << year << " is not a leap year." << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int year;

            cout << "Enter a year: ";
            cin >> year;

            if (year > 0)
            {
                if (year % 4 == 0)
                {
                    if (year % 100 == 0)
                    {
                        if (year % 400 == 0)
                            cout << year << " is a leap year." << endl;
                        else
                            cout << year << " is not a leap year." << endl;
                    }
                    else
                        cout << year << " is a leap year." << endl;
                }
                else
                    cout << year << " is not a leap year." << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void largestSmallest()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program takes three numbers as input and identifies the largest and smallest number amongst them.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter number 3: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
        cout << "Largest number is " << num1 << endl;
    else if (num2 >= num1 && num2 >= num3)
        cout << "Largest number is " << num2 << endl;
    else
        cout << "Largest number is " << num3 << endl;

    if (num1 <= num2 && num1 <= num3)
        cout << "Smallest number is " << num1 << endl;
    else if (num2 <= num1 && num2 <= num3)
        cout << "Smallest number is " << num2 << endl;
    else
            cout << "Smallest number is " << num3 << endl;

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            float num1, num2, num3;

            cout << "Enter number 1: ";
            cin >> num1;

            cout << "Enter number 2: ";
            cin >> num2;

            cout << "Enter number 3: ";
            cin >> num3;

            if (num1 >= num2 && num1 >= num3)
                cout << "Largest number is " << num1 << endl;
            else if (num2 >= num1 && num2 >= num3)
                cout << "Largest number is " << num2 << endl;
            else
                cout << "Largest number is " << num3 << endl;

            if (num1 <= num2 && num1 <= num3)
                cout << "Smallest number is " << num1 << endl;
            else if (num2 <= num1 && num2 <= num3)
                cout << "Smallest number is " << num2 << endl;
            else
                cout << "Smallest number is " << num3 << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void positiveNegative()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program takes a number as input and checks whether the number is positive or negative.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    float num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
       cout << num << " is positive" << endl;
    else if (num < 0)
       cout << num << " is negative" << endl;
    else
       cout << num << " is zero" << endl;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            float num;

            cout << "Enter a number: ";
            cin >> num;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (num > 0)
                cout << num << " is positive" << endl;
            else if (num < 0)
                cout << num << " is negative" << endl;
            else
                cout << num << " is zero" << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void maxMin()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program declares a user-defined array and takes array elements as input from the user.
It then finds out the maximum and minimum element in the array, printing the result on screen.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>

int main()
{
    int size, value;
    cout << "Enter Array's size: ";
    cin >> size;

    int array[size];

    for (int counter = 0; counter < size; counter++)
    {
    Start:
        cout << "Enter value no. " << counter + 1 << ": ";
        cin >> value;

        if (cin)
        {
            array[counter] = value;
        }
        else
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto Start;
        }
    }

    int max = array[0];
    int min = array[0];

    for (int counter1 = 1; counter1 < size; counter1++)
    {
        if (array[counter1] > max)
        {
            max = array[counter1];
        }
        if (array[counter1] < min)
        {
            min = array[counter1];
        }
    }
    
    cout << "Maximum value is " << max << endl;
    cout << "Minimum value is " << min << endl;

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int size, value;
            cout << "Enter Array's size: ";
            cin >> size;

            vector<int> array(size);

            for (int counter = 0; counter < size; counter++)
            {
            Start:
                cout << "Enter value no. " << counter + 1 << ": ";
                cin >> value;

                if (cin)
                {
                    array[counter] = value;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    goto Start;
                }
            }

            int max = array[0];
            int min = array[0];

            for (int counter1 = 1; counter1 < size; counter1++)
            {
                if (array[counter1] > max)
                {
                    max = array[counter1];
                }
                if (array[counter1] < min)
                {
                    min = array[counter1];
                }
            }

            cout << "Maximum value is " << max << endl;
            cout << "Minimum value is " << min << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void secondMax()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program declares a user-defined array and takes array elements as input from the user.
It then finds out the maximum and second maximum element in the array, printing the result on screen.)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int length, max = 0, max2 = 0;
	cout << "Enter the length of array: ";
	cin >> length;
	int array[length];

	for (int i = 0; i < length; i++)
	{
		cout << "Enter value no. " << i + 1 << ": ";
		cin >> array[i];

		if (array[i] > max)
		{
			max = array[i];
		}
	}

	for (int x = 0; x < length; x++)
	{
		if (array[x] > max2 && array[x] < max)
		{
			max2 = array[x];
		}
	}
	cout << "Maximum value is " << max << endl;
	cout << "Second maximum value is " << max2 << endl;

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int length, max = 0, max2 = 0;
            cout << "Enter the length of array: ";
            cin >> length;
            vector<int>array(length);

            for (int i = 0; i < length; i++)
            {
                cout << "Enter value no. " << i + 1 << ": ";
                cin >> array[i];

                if (array[i] > max)
                {
                    max = array[i];
                }
            }

            for (int x = 0; x < length; x++)
            {
                if (array[x] > max2 && array[x] < max)
                {
                    max2 = array[x];
                }
            }
            cout << "Maximum value is " << max << endl;
            cout << "Second maximum value is " << max2 << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void reverse()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program takes a user-defined array as input and prints the array in reverse order.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int size, value;
    cout << "Enter Array's size: ";
    cin >> size;

    int array[size];

    for (int counter = 0; counter < size; counter++)
    {
        Start:
        cout << "Enter value no. " << counter + 1 << ": ";
        cin >> value;

        if (cin)
        {
            array[counter] = value;
        }
        else
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto Start;
        }
    }

    cout << "Reverse order: ";
    for (int counter1 = size - 1; counter1 >= 0; counter1--)
    {
        cout << array[counter1] << " ";
    }
)";
        }

        // Program Execution
        if (option == 3)
        {
            int size, value;
            cout << "Enter Array's size: ";
            cin >> size;

            vector<int> array(size);

            for (int counter = 0; counter < size; counter++)
            {
            Start:
                cout << "Enter value no. " << counter + 1 << ": ";
                cin >> value;

                if (cin)
                {
                    array[counter] = value;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    goto Start;
                }
            }

            cout << "Reverse order: ";

            for (int counter1 = size - 1; counter1 >= 0; counter1--)
            {
                cout << array[counter1] << " ";
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void split()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This programs takes input and stores it into a user-defined array. It then splits the array into
two chunks. The chunks are then printed as output on console.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int size, value;
    cout << "Enter Array's size: ";
    cin >> size;

    int array[size];

    for (int counter = 0; counter < size; counter++)
    {
        Start:
        cout << "Enter value no. " << counter + 1 << ": ";
        cin >> value;

        if (cin)
        {
            array[counter] = value;
        }
        else
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto Start;
        }
    }

    for (int counter1 = 0; counter1 < size / 2; counter1++)
    {
        cout << array[counter1] << " ";
    }
    cout << endl;

    for (int counter2 = size/2; counter2 < size; counter2++)
    {
        cout << array[counter2] << " ";
    }
        
    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int size, value;
            cout << "Enter Array's size: ";
            cin >> size;

            vector<int> array(size);

            for (int counter = 0; counter < size; counter++)
            {
            Start:
                cout << "Enter value no. " << counter + 1 << ": ";
                cin >> value;

                if (cin)
                {
                    array[counter] = value;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    goto Start;
                }
            }

            for (int counter1 = 0; counter1 < size / 2; counter1++)
            {
                cout << array[counter1] << " ";
            }
            cout << endl;

            for (int counter2 = size / 2; counter2 < size; counter2++)
            {
                cout << array[counter2] << " ";
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void autoGrow()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This prgram creates a user-defined array and using auto-growing techniques, expands it to a greater length on run-time.
This is done by creating a new array and copying the previous array's elements into it.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    // Declaring original array
    int length;
    cout << "Enter the length of the original array: ";
    cin >> length;
    system("clear");

    int array[length];

    // Taking elements in original array
    for (int counter = 0; counter < length; counter++)
    {
        cout << "Enter the value of element " << counter + 1 << ": ";
        cin >> array[counter];
        system("clear");
    }

    while (true)
    {
        // Choice for growing array
        char option;
        cout << "Do you want to grow the array? (Y/N): ";
        cin >> option;
        system("clear");

        if (option == 'Y' || option == 'y')
        {
            int factor;
            cout << "Enter the growth factor: ";
            cin >> factor;
            system("clear");

            // Input validation
            if (factor <= 0)
            {
                cout << "Invalid factor. Please enter a positive integer." << endl;
                continue;
            }

            int newLength = length * factor;
            int array2[newLength];

            // Copying elements into second array
            for (int a = 0; a < newLength; a++)
            {
                array2[a] = array[a % length];
            }

            // Printing arrays
            cout << "\nOriginal Array: \n";
            for (int b = 0; b < length; b++)
            {
                cout << array[b] << endl;
            }

            cout << "\nDuplicate Array: \n";
            for (int b = 0; b < newLength; b++)
            {
                cout << array2[b] << endl;
            }
            break;
        }
        else if (option == 'N' || option == 'n')
        {
            return 0;
        }
        else
        {
            cout << "Invalid option. Please enter 'Y' or 'N'." << endl;
        }
    }
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            // Declaring original array
            int length;
            cout << "Enter the length of the original array: ";
            cin >> length;
            system("clear");

            vector<int> array(length);

            // Taking elements in original array
            for (int counter = 0; counter < length; counter++)
            {
                cout << "Enter the value of element " << counter + 1 << ": ";
                cin >> array[counter];
                system("clear");
            }

            while (true)
            {
                // Choice for growing array
                char option;
                cout << "Do you want to grow the array? (Y/N): ";
                cin >> option;
                system("clear");

                if (option == 'Y' || option == 'y')
                {
                    int factor;
                    cout << "Enter the growth factor: ";
                    cin >> factor;
                    system("clear");

                    // Input validation
                    if (factor <= 0)
                    {
                        cout << "Invalid factor. Please enter a positive integer." << endl;
                        continue;
                    }

                    int newLength = length * factor;
                    vector<int> array2(newLength);

                    // Copying elements into second array
                    for (int a = 0; a < newLength; a++)
                    {
                        array2[a] = array[a % length];
                    }

                    // Printing arrays
                    cout << "\nOriginal Array: \n";
                    for (int b = 0; b < length; b++)
                    {
                        cout << array[b] << endl;
                    }

                    cout << "\nDuplicate Array: \n";
                    for (int b = 0; b < newLength; b++)
                    {
                        cout << array2[b] << endl;
                    }
                    break;
                }
                else if (option == 'N' || option == 'n')
                {
                    break;
                }
                else
                {
                    cout << "Invalid option. Please enter 'Y' or 'N'." << endl;
                }
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void traversal()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program takes a 2D array and showcases the methods to traverse its elements.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;
    system("clear");

    cout << "Enter the number of columns: ";
    cin >> columns;
    system("clear");

    // Declare 2D Array
    int array[rows][columns];

    // Input Array Elements
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
            system("clear");
        }
    }

    // Traversing Diagonal from top-left to bottom-right
    cout << "Left diagonal: \n";
    for (int k = 0; k < rows; k++) 
    {
        cout << array[k][k] << " ";
    }
    cout << endl;

    // Traversing Diagonal from top-right to bottom-left
    cout << "Right diagonal: \n";
    for (int l = 0; l < columns; l++) 
    {
        cout << array[l][columns - l - 1] << " ";
    }
    cout << endl;

    // Trasversing the Array Column-Wise
    cout << "Column Wise: \n";
    for (int m = 0; m < columns; m++) 
    {
        for (int n = 0; n < rows; n++) 
        {
            cout << array[n][m] << " ";
        }
        cout << endl;
    }

    // Trasversing the Array Row-Wise
    cout << "Row Wise: \n";
    for (int o = 0; o < rows; o++)
    {
        for (int p = 0; p < columns; p++)
        {
            cout << array[o][p] << " ";
        }
        cout << endl;
    }

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int rows, columns;

            cout << "Enter the number of rows: ";
            cin >> rows;
            system("clear");

            cout << "Enter the number of columns: ";
            cin >> columns;
            system("clear");

            // Declare 2D Array
            int** array = new int* [rows];
            for (int i = 0; i < rows; ++i)
            {
                array[i] = new int[columns];
            }

            // Input Array Elements
            cout << "Enter the elements of the array: \n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns; j++)
                {
                    cout << "Enter element at position [" << i << "][" << j << "]: ";
                    cin >> array[i][j];
                    system("clear");
                }
            }

            // Traversing Diagonal from top-left to bottom-right
            cout << "Left diagonal: \n";
            for (int k = 0; k < rows; k++)
            {
                cout << array[k][k] << " ";
            }
            cout << endl;

            // Traversing Diagonal from top-right to bottom-left
            cout << "Right diagonal: \n";
            for (int l = 0; l < columns; l++)
            {
                cout << array[l][columns - l - 1] << " ";
            }
            cout << endl;

            // Trasversing the Array Column-Wise
            cout << "Column Wise: \n";
            for (int m = 0; m < columns; m++)
            {
                for (int n = 0; n < rows; n++)
                {
                    cout << array[n][m] << " ";
                }
                cout << endl;
            }

            // Trasversing the Array Row-Wise
            cout << "Row Wise: \n";
            for (int o = 0; o < rows; o++)
            {
                for (int p = 0; p < columns; p++)
                {
                    cout << array[o][p] << " ";
                }
                cout << endl;
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void transpose()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program takes a 2D array matrix and transposes it. This means that the rows of the first array
become the columns of the second array that is declared and vice versa.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rows;

    cout << "Enter the number of columns in the matrix: ";
    cin >> cols;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int transposedMatrix[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            int rows, cols;

            cout << "Enter the number of rows in the matrix: ";
            cin >> rows;

            cout << "Enter the number of columns in the matrix: ";
            cin >> cols;

            int matrix[100][100];

            cout << "Enter the elements of the matrix:" << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cin >> matrix[i][j];
                }
            }

            cout << "Original Matrix:" << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }

            int transposedMatrix[100][100];

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    transposedMatrix[j][i] = matrix[i][j];
                }
            }

            cout << "Transposed Matrix:" << endl;
            for (int i = 0; i < cols; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    cout << transposedMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void basicFile()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program shows the basic operations of file handling in C++.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Creating a File and Opening in Write Mode
	ofstream filewrite("File.txt");

	// Writing on the File
	filewrite << "Hello!";

	// Closing the File
	filewrite.close();

	string s;

	// Opening a File in Read Mode
	ifstream fileread("File.txt");

	getline(fileread, s);

	cout << s << endl;

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            // Creating a File and Opening in Write Mode
            ofstream filewrite("File.txt");

            // Writing on the File
            filewrite << "Hello!";

            // Closing the File
            filewrite.close();

            string s;

            // Opening a File in Read Mode
            ifstream fileread("File.txt");

            getline(fileread, s);

            cout << s << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void retrieve()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This program of file handling retrieves data from a file.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
#include <fstream>
#include <string>

int main()
{
    ifstream file("Retrieve.txt");

	if (!file)
	{
		cout << "File could not be opened!";
	}

	string line;
	while (getline(file, line))
	{
		cout << line << endl;
	}

	file.close();

	cout << "\nTask completed successfully." << endl;

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            ofstream write("Retrieve.txt");
            write << "This is the data to be retrieved.";
            write.close();

            ifstream file("Retrieve.txt");

            if (!file)
            {
                cout << "File could not be opened!";
            }

            string line;
            while (getline(file, line))
            {
                cout << line << endl;
            }

            file.close();

            cout << "\nTask completed successfully." << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void readWrite()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << "This program reads data from one file and copies it into another.";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file1("Read.txt");
    if (!file1)
    {
	    cout << "Read file could not be opened";
    }

    ofstream file2("Write.txt");
    if (!file2)
    {
	    cout << "Write file could not be opened";
    }

    string line;
    while (getline(file1, line))
    {
	    file2 << line << endl;
    }

    file1.close();
    file2.close();

    cout << "Task completed successfully." << endl;

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            ofstream read("Read.txt");
            read << "This is the data from file 1.";
            read.close();
            ofstream write("Write.txt");
            write.close();
            ifstream file1("Read.txt");
            if (!file1)
            {
                cout << "Read file could not be opened";
            }

            ofstream file2("Write.txt");
            if (!file2)
            {
                cout << "Write file could not be opened";
            }

            string line;
            while (getline(file1, line))
            {
                file2 << line << endl;
            }

            file1.close();
            file2.close();

            cout << "Task completed successfully." << endl;
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void caseConversion()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << "This program reads data from file and changes its case from upper to lower and vice versa.";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fileread("Convert.txt");
	string convert;
	getline(fileread, convert);
	fileread.close();

	int i = convert.size();

	for (int x = 0; x < i; x++)
	{
		if (islower(convert[x]))
		{
			convert[x] = toupper(convert[x]);
		}
		else if (isupper(convert[x]))
		{
			convert[x] = tolower(convert[x]);
		}
	}

	ofstream filewrite("Convert.txt");
	filewrite << convert;
	filewrite.close();

	cout << "Task successful\n";   

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            ofstream write("Convert.txt");
            write << "This is Farooq Khichi.";
            write.close();

            ifstream fileread("Convert.txt");
            string convert;
            getline(fileread, convert);
            fileread.close();

            int i = convert.size();

            for (int x = 0; x < i; x++)
            {
                if (islower(convert[x]))
                {
                    convert[x] = toupper(convert[x]);
                }
                else if (isupper(convert[x]))
                {
                    convert[x] = tolower(convert[x]);
                }
            }

            ofstream filewrite("Convert.txt");
            filewrite << convert;
            filewrite.close();

            cout << "Task successful\n";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void encryptDecrypt()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Description. \n";
        cout << "2. Source Code. \n";
        cout << "3. Program Execution. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 3 || cin.fail())
        {
            fail();
            continue;
        }

        // Description
        if (option == 1)
        {
            cout << R"(This is the most sophisticated program of file handling that has been created in this project. At startup, it gives the
user choice to choose whether data should be loaded from an existing file or if a new file should be created. 
That data is then encrypted or decrypted according to the user's wishes.
The encryption or decryption key is provided by the user. 
It also contains extensive error handling to validate input.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to Encrypt Data
void encrypt(string& data, int key)
{
    for (int x = 0; x < data.size(); x++)
    {
        data[x] = char(data[x] + key);
    }
}

// Function to Decrypt Data
void decrypt(string& data, int key)
{
    for (int x = 0; x < data.size(); x++)
    {
        data[x] = char(data[x] - key);
    }
}

// Main Program
int main()
{
    while (true) 
    {
        // Menu
        cout << "\nChoose an option:\n";
        cout << "1. Enter data manually\n";
        cout << "2. Load data from file\n";
        cout << "3. Exit\n";

        int choice;
        cin >> choice;
        cout << endl;

        // Manual Input
        if (choice == 1)
        {
            string data;
            cout << "Enter sentence to be processed:\n";
            cin.ignore();
            getline(cin, data);
            cout << endl;

            // Key for Encryption/Decryption
            cout << "Enter the encryption/decryption key: ";
            int key;
            cin >> key;
            cout << endl;

            // Choice of Encryption/Decryption
            cout << "Choose an option:\n";
            cout << "1. Encrypt data\n";
            cout << "2. Decrypt data\n";
            cin >> choice;
            cout << endl;

            switch (choice)
            {
            case 1: // Encrypting Data
                encrypt(data, key); 
                break;

            case 2: // Decrypting Data
                decrypt(data, key);
                break;

            default: // Error Handling
                cout << "Invalid option. Returning to the main menu.\n";
                continue;
            }

            // Generating File
            string filename;
            cout << "Enter the filename to store the data: ";
            cin.ignore();
            getline(cin,filename);
            filename += ".txt";
            cout << endl;

            ofstream file(filename);
            if (file.is_open())
            {
                // Storing Output in File
                file << data << endl;
                cout << "Processed data: " << data << endl;
                cout << "\nProcessed data written to file." << endl;
                file.close();
            }
            else
            {
                // Error Handling
                cout << "Error: Couldn't open the file for writing.\n";
            }
        }
        // Taking Input From File
        else if (choice == 2)
        {
            // Loading File
            string filename;
            cout << "\nEnter the filename to load the data: ";
            cin.ignore();
            getline(cin, filename);
            filename += ".txt";
            cout << endl;

            ifstream file(filename);
            if (file.is_open())
            {
                // Taking Data as Input
                string data;
                getline(file, data);

                // Key for Encryption/Decryption
                cout << "Enter the encryption/decryption key: ";
                int key;
                cin >> key;
                cout << endl;

                // Choice of Encryption/Decryption
                cout << "Choose an option:\n";
                cout << "1. Encrypt data\n";
                cout << "2. Decrypt data\n";
                cin >> choice;
                cout << endl;

                switch (choice)
                {
                case 1: // Encrypting Data
                    encrypt(data, key);
                    break;

                case 2: // Decrypting Data
                    decrypt(data, key);
                    break;

                default: // Error Handling
                    cout << "Invalid option. Returning to the main menu.\n";
                    continue;
                }

                // Console Output
                cout << "\nProcessed data: " << data << endl;

                ofstream outputFile(filename);
                if (outputFile.is_open())
                {
                    // Storing Output in File
                    outputFile << data << endl;
                    cout << "\nProcessed data written to file." << endl;
                    outputFile.close();
                }
                else
                {
                    // Error Handling
                    cout << "Error: Couldn't open the file for writing.\n";
                }

                file.close();
            }
            else
            {
                // Error Handling
                cout << "Error: Couldn't open or load the file.\n";
            }
        }
        // Exit Program
        else if (choice == 3)
        {
            break;
        }
        else
        {
            // Error Handling in Menu
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
)";
        }

        // Program Execution
        if (option == 3)
        {
            // Main Program
            while (true)
            {
                // Menu
                cout << "\nChoose an option:\n";
                cout << "1. Enter data manually\n";
                cout << "2. Load data from file\n";
                cout << "3. Exit\n";

                int choice;
                cin >> choice;
                cout << endl;

                // Manual Input
                if (choice == 1)
                {
                    string data;
                    cout << "Enter sentence to be processed:\n";
                    cin.ignore();
                    getline(cin, data);
                    cout << endl;

                    // Key for Encryption/Decryption
                    cout << "Enter the encryption/decryption key: ";
                    int key;
                    cin >> key;
                    cout << endl;

                    // Choice of Encryption/Decryption
                    cout << "Choose an option:\n";
                    cout << "1. Encrypt data\n";
                    cout << "2. Decrypt data\n";
                    cin >> choice;
                    cout << endl;

                    switch (choice)
                    {
                    case 1: // Encrypting Data
                        encrypt(data, key);
                        break;

                    case 2: // Decrypting Data
                        decrypt(data, key);
                        break;

                    default: // Error Handling
                        cout << "Invalid option. Returning to the main menu.\n";
                        continue;
                    }

                    // Generating File
                    string filename;
                    cout << "Enter the filename to store the data: ";
                    cin.ignore();
                    getline(cin, filename);
                    filename += ".txt";
                    cout << endl;

                    ofstream file(filename);
                    if (file.is_open())
                    {
                        // Storing Output in File
                        file << data << endl;
                        cout << "Processed data: " << data << endl;
                        cout << "\nProcessed data written to file." << endl;
                        file.close();
                    }
                    else
                    {
                        // Error Handling
                        cout << "Error: Couldn't open the file for writing.\n";
                    }
                }
                // Taking Input From File
                else if (choice == 2)
                {
                    // Loading File
                    string filename;
                    cout << "\nEnter the filename to load the data: ";
                    cin.ignore();
                    getline(cin, filename);
                    filename += ".txt";
                    cout << endl;

                    ifstream file(filename);
                    if (file.is_open())
                    {
                        // Taking Data as Input
                        string data;
                        getline(file, data);

                        // Key for Encryption/Decryption
                        cout << "Enter the encryption/decryption key: ";
                        int key;
                        cin >> key;
                        cout << endl;

                        // Choice of Encryption/Decryption
                        cout << "Choose an option:\n";
                        cout << "1. Encrypt data\n";
                        cout << "2. Decrypt data\n";
                        cin >> choice;
                        cout << endl;

                        switch (choice)
                        {
                        case 1: // Encrypting Data
                            encrypt(data, key);
                            break;

                        case 2: // Decrypting Data
                            decrypt(data, key);
                            break;

                        default: // Error Handling
                            cout << "Invalid option. Returning to the main menu.\n";
                            continue;
                        }

                        // Console Output
                        cout << "\nProcessed data: " << data << endl;

                        ofstream outputFile(filename);
                        if (outputFile.is_open())
                        {
                            // Storing Output in File
                            outputFile << data << endl;
                            cout << "\nProcessed data written to file." << endl;
                            outputFile.close();
                        }
                        else
                        {
                            // Error Handling
                            cout << "Error: Couldn't open the file for writing.\n";
                        }

                        file.close();
                    }
                    else
                    {
                        // Error Handling
                        cout << "Error: Couldn't open or load the file.\n";
                    }
                }
                // Exit Program
                else if (choice == 3)
                {
                    break;
                }
                else
                {
                    // Error Handling in Menu
                    cout << "Invalid choice. Please try again.\n";
                }
            }
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}