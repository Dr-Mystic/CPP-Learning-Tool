#include <iostream>
using namespace std;

void fail();

void arrays()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, an array is a collection of elements of the same type, stored in contiguous memory locations. Arrays provide a way to store multiple values under a single variable name.

--> Array Syntax:
The syntax for declaring an array in C++ is as follows:
    
type name[size];

Here, `type` represents the data type of the elements in the array, `name` is the identifier for the array, and `size` specifies the number of elements in the array.

--> Accessing Array Elements:
Array elements can be accessed using indices, starting from 0. The syntax for accessing an element in an array is:
   
 name[index]

--> Array Initialization:
Arrays can be initialized at the time of declaration using an initializer list. The syntax for array initialization is:
    
type name[size] = {element1, element2, ...};

--> Array Size:
The size of an array is fixed and determined at compile-time. It represents the number of elements the array can hold.

--> Example:

#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing array elements
    cout << "Element at index 0: " << numbers[0] << endl;
    cout << "Element at index 2: " << numbers[2] << endl;

    return 0;
}

In this example, an integer array `numbers` of size 5 is declared and initialized with values. The array elements can be accessed using indices.
The output of the program will be:

Element at index 0: 1
Element at index 2: 3

Note: It is important to ensure that the array indices are within the valid range to avoid accessing out-of-bounds memory.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Summing array elements
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}

In this example, an integer array `numbers` of size 5 is declared and initialized with values. The program calculates the sum of all the elements in the array using a for loop.
The output of the program will be:
Sum of array elements: 15

Note: When working with arrays, it is important to handle the array size and indices carefully to avoid accessing out-of-bounds memory and causing undefined behavior.
)";        
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;
            system("clear");

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

void multidimensionalArrays()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, a multidimensional array is an array that contains arrays as its elements. It allows you to store and manipulate data in multiple dimensions, such as rows and columns.

--> Syntax:
The syntax for declaring a multidimensional array in C++ is as follows:
    
type name[size1][size2]...[sizeN];

Here, `type` represents the data type of the elements in the array, `name` is the identifier for the array, 
and `size1`, `size2`, ..., `sizeN` represent the sizes of each dimension.

Accessing Multidimensional Array Elements:
Multidimensional array elements can be accessed using multiple indices. The syntax for accessing an element in a multidimensional array is:
    
name[index1][index2]...[indexN]

--> Example:
#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Accessing array elements
    cout << "Element at row 1, column 2: " << matrix[1][2] << endl;
    cout << "Element at row 2, column 0: " << matrix[2][0] << endl;

    return 0;
}

In this example, a 3x3 integer matrix is declared and initialized with values. The elements of the matrix can be accessed using row and column indices. 

The output of the program will be:
Element at row 1, column 2: 6
Element at row 2, column 0: 7

Note: It is important to ensure that the array indices are within the valid range to avoid accessing out-of-bounds memory.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    // Summing array elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}

In this example, a 3x3 integer matrix is declared and initialized with values. The program calculates the sum of all the elements in the matrix using nested for loops. 

The output of the program will be:
Sum of array elements: 45

Note: When working with multidimensional arrays, it is important to handle the array sizes and indices carefully to avoid accessing out-of-bounds memory and causing undefined behavior.
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;
            system("clear");

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

void functionArray()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, we can pass arrays as arguments to functions and return arrays from functions. This allows us to work with arrays more conveniently and perform operations on them within functions.

--> Passing Arrays as Function Parameters:

When passing an array as a function parameter, the array is not physically copied. 
Instead, a pointer to the array is passed, which allows the function to access and modify the original array.

--> Syntax for Passing a One-dimensional Array as a Function Parameter:\

returnType functionName(dataType arrayName[arraySize])
{
    // code
}

--> Example 1: Passing a One-dimensional Array to a Function:

#include <iostream>
using namespace std;

// Function to display marks
// Takes a one-dimensional array as a parameter
void display(int m[5])
{
    cout << "Displaying marks: " << endl;
    
    // Display array elements
    for (int i = 0; i < 5; ++i)
    {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main()
{
    // Declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};

    // Call the display function
    // Pass the array as an argument
    display(marks);

    return 0;
}

In this example, the function `display` takes a one-dimensional array `m` of size 5 as a parameter. 
The function can access and manipulate the original array `marks` in the `main` function.

--> Passing Multidimensional Arrays to Functions:

We can also pass multidimensional arrays as function parameters. When passing a multidimensional array, 
we need to specify the number of columns, while the number of rows can be left empty.

--> Syntax for Passing a Multidimensional Array as a Function Parameter:

returnType functionName(dataType arrayName[][columns])
{
    // code
}

--> Example 2: Passing a Multidimensional Array to a Function:

#include <iostream>
using namespace std;

// Function to display the elements of a two-dimensional array
// Takes a two-dimensional array as a parameter
void display(int n[][2])
{
    cout << "Displaying values: " << endl;
    
    // Display array elements
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}

int main()
{
    // Initialize a two-dimensional array
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
    };

    // Call the display function
    // Pass the array as an argument
    display(num);

    return 0;
}

In this example, the function `display` takes a two-dimensional array `n` as a parameter. 
The number of rows in the array is automatically determined by the number of elements passed to the function.

--> Returning Arrays from Functions:

In C++, we can also return arrays from functions. However, the actual array is not returned. 
Instead, the address of the first element of the array is returned using pointers.

--> Example: Returning an Array from a Function:

#include <iostream>
using namespace std;

// Function to create and return an array
int* createArray()
{
    // Create a new array
    int* arr = new int[5];

    // Initialize array elements
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i + 1;
    }

    // Return the array
    return arr;
}

int main()
{
    // Call the createArray function
    // Receive the returned array
    int* result = createArray();

    // Display the array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] result;

    return 0;
}

The function `createArray` dynamically creates an array, initializes its elements, and returns the array pointer. The returned array is then accessed and displayed in the `main` function.
After using the array, it is important to deallocate the memory using the `delete[]` operator to avoid memory leaks.
Remember to manage memory properly when returning arrays from functions to prevent memory leaks and undefined behavior.

Returning arrays from functions and passing arrays as function parameters can be powerful techniques for working with arrays in C++.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

// Function to display marks of 5 students
// Takes a one-dimensional array as a parameter
void display(int m[5])
{
    cout << "Displaying marks: " << endl;
    
    // Display array elements
    for (int i = 0; i < 5; ++i)
    {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

// Function to create and return an array
int* createArray()
{
    // Create a new array
    int* arr = new int[5];

    // Initialize array elements
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i + 1;
    }

    // Return the array
    return arr;
}

int main()
{
    // Declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};

    // Call the display function
    // Pass the array as an argument
    display(marks);

    // Call the createArray function
    // Receive the returned array
    int* result = createArray();

    // Display the array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] result;

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;
            system("clear");

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

void strings()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, a string is a sequence of characters stored in a character array. C++ provides a rich set of functions and features to work with strings.

--> C++ String Library:

C++ provides the `<string>` library, which contains various functions and classes for working with strings. Some commonly used functions and operations on strings include:
- `getline()`: Reads a line of text from the input stream.
- `length()`: Returns the length of a string.
- `size()`: Returns the size of a string (same as `length()`).
- `empty()`: Checks if a string is empty.
- `clear()`: Clears the contents of a string.
- `append()`: Appends a string or character to the end of another string.
- `substr()`: Extracts a substring from a string.
- `find()`: Searches for a substring within a string.
- `replace()`: Replaces a portion of a string with another string.

--> Example:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "John Doe";
    cout << "Name: " << name << endl;

    string message;
    cout << "Enter a message: ";
    getline(cin, message);
    cout << "You entered: " << message << endl;

    cout << "Length of name: " << name.length() << endl;
    cout << "Is message empty? " << (message.empty() ? "Yes" : "No") << endl;

    name.append(" is a programmer.");
    cout << "Updated name: " << name << endl;

    string substring = name.substr(5, 3);
    cout << "Substring: " << substring << endl;

    size_t position = name.find("programmer");
    if (position != string::npos)
    {
        name.replace(position, 10, "developer");
        cout << "Replaced name: " << name << endl;
    }

    return 0;
}

In this example, the `<string>` library is included to work with strings. 
The program demonstrates various operations on strings, such as assigning a string, reading a line of text, finding the length of a string, 
checking if a string is empty, appending strings, extracting substrings, finding substrings, and replacing substrings.

Note: Remember to include the `<string>` library to work with strings in C++.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example - Username Validation:

#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string& username)
{
    if (username.length() < 5 || username.length() > 20)
    {
        return false;
    }

    for (char ch : username)
    {
        if (!isalnum(ch) && ch != '_')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string username;
    cout << "Enter a username: ";
    getline(cin, username);

    if (isValidUsername(username))
    {
        cout << "Valid username." << endl;
    }
    else
    {
        cout << "Invalid username." << endl;
    }

    return 0;
}

In this example, a function `isValidUsername()` is defined to validate a username. The function checks if the username length is between 5 and 20 characters and if it contains only alphanumeric characters and underscores. The main function prompts the user to enter a username and calls the `isValidUsername()` function to validate it.

Note: This is a simplified example for demonstration purposes. In practice, username validation rules may vary depending on the requirements.
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;
            system("clear");

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