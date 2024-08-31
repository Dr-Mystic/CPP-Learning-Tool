#include <iostream>
using namespace std;

void fail();

void variable()
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
            cout << "Variables: \nVariables are named storage locations in memory that hold values of a specific data type. \nThey allow you to store and manipulate data during program execution. \nBefore using a variable, you need to declare it, specifying its name and data type.\n";
            cout << "\nLiterals: \nLiterals are fixed values that are directly written in your code.\nThey represent specific data types, such as integers, floating - point numbers, characters, and strings.\n";
            cout << "\nConstants: \nConstants are variables whose values cannot be changed once assigned.\nThey provide a way to define values that remain constant throughout the program.\nIn C++, you can define constants using the const keyword or the preprocessor #define directive.\n";
            cout << "\nOverall, variables allow you to store and manipulate data,\nliterals represent fixed values directly in code,\nand constants provide a way to define values that remain constant throughout the program.\nUnderstanding these concepts is fundamental for working with data in C++ programs.\n";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

int main()
{
    // Variables
    int age = 25; // Declaration and initialization of a variable
    float temperature; // Declaration of a variable
    temperature = 98.6; // Assignment of a value to a variable

    // Literals
    int number = 10; // Integer literal
    double pi = 3.14159; // Floating-point literal
    char grade = 'A'; // Character literal
    string message = "Hello!"; // String literal

    // Constants
    const int MAX_VALUE = 100; // Declaration and initialization of a constant
    const double GRAVITY = 9.8; // Declaration and initialization of a constant

    // Output
    cout << "Variables: " << endl;
    cout << "Age: " << age << endl;
    cout << "Temperature: " << temperature << endl;

    cout << endl;

    cout << "Literals: " << endl;
    cout << "Number: " << number << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Message: " << message << endl;

    cout << endl;

    cout << "Constants: " << endl;
    cout << "Max Value: " << MAX_VALUE << endl;
    cout << "Gravity: " << GRAVITY << endl;

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

void dataTypes()
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
            cout << R"(In C++, data types are declarations for variables. This determines the type and size of data associated with variables. For example,
int age = 13;
Here, age is a variable of type int. Meaning, the variable can only store integers of either 2 or 4 bytes.

--> C++ Fundamental Data Types:

1. C++ int:
The int keyword is used to indicate integers.
Its size is usually 4 bytes. Meaning, it can store values from -2147483648 to 2147483647.
For example,
int salary = 85000;

2. C++ float and double:
Float and double are used to store floating-point numbers (decimals and exponentials).
The size of float is 4 bytes and the size of double is 8 bytes. Hence, double has two times the precision of float.
For example,
float area = 64.74;
double volume = 134.64534;

As mentioned above, these two data types are also used for exponentials.
For example,
double distance = 45E12    // 45E12 is equal to 45*10^12

3. C++ char:
Keyword char is used for characters. Its size is 1 byte.
Characters in C++ are enclosed inside single quotes ' '.
For example,
char test = 'h';

In C++, an integer value is stored in a char variable rather than the character itself.
That integer value is its ASCII value.

4. C++ wchar_t:
Wide character wchar_t is similar to the char data type, except its size is 2 bytes instead of 1.
It is used to represent characters that require more memory to represent them than a single char.
For example,
wchar_t test = L'ם'  // storing Hebrew character;
Notice the letter L before the quotation marks. 

There are also two other fixed-size character types:
char16_t and char32_t introduced in C++11.

5. C++ bool:
The bool data type has one of two possible values: true or false.
Booleans are used in conditional statements and loops.
For example,
bool cond = false;

6. C++ void:
The void keyword indicates an absence of data. It means "nothing" or "no value".
Void is used in functions and pointers.
We cannot declare variables of the void type.

--> C++ Type Modifiers

We can further modify some of the fundamental data types by using type modifiers. 
There are 4 type modifiers in C++. They are:
1. signed
2. unsigned
3. short
4. long
We can modify the following data types with the above modifiers:
a. int
b. double
c. char

--> Derived Data Types

Data types that are derived from fundamental data types are derived types. 
For example: arrays, pointers, function types, structures, etc.
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
    // Fundamental Data Types
    int age = 13;
    float area = 64.74;
    char test = 'A';
    bool cond = false; //false will be shown as 0 in output

    // Type Modifiers
    unsigned int score = 100;
    short int temperature = -10;
    long double pi = 3.14159265358979;

    // Output
    cout << "Fundamental Data Types:" << endl;
    cout << "Age: " << age << endl;
    cout << "Area: " << area << endl;
    cout << "Grade: " << test << endl;
    cout << "Condition: " << cond << endl;

    cout << endl;

    cout << "Type Modifiers:" << endl;
    cout << "Score: " << score << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Pi: " << pi << endl;

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

void basicIO()
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
            cout << R"(
--> C++ Output:
In C++, cout sends formatted output to standard output devices, such as the screen. We use the cout object along with the << operator for displaying output.

Example 1: String Output:
#include <iostream>
using namespace std;

int main() 
{
    // prints the string enclosed in double quotes
    cout << "This is C++ Programming";
    return 0;
}

Output:
This is C++ Programming

How does this program work?
We first include the iostream header file that allows us to display output.
The cout object is defined inside the std namespace. To use the std namespace, we used the using namespace std; statement.
Every C++ program starts with the main() function. The code execution begins from the start of the main() function.
cout is an object that prints the string inside quotation marks " ". It is followed by the << operator.
return 0; is the "exit status" of the main() function. The program ends with this statement, however, this statement is not mandatory.

Example 2: Numbers and Characters Output:
To print the numbers and character variables, we use the same cout object but without using quotation marks.

#include <iostream>
using namespace std;

int main() 
{
    int num1 = 70;
    double num2 = 256.783;
    char ch = 'A';

    cout << num1 << endl;    // print integer
    cout << num2 << endl;    // print double
    cout << "character: " << ch << endl;    // print char
    return 0;
}

Output:
70
256.783
character: A

Notes:
The endl manipulator is used to insert a new line. That's why each output is displayed in a new line.
The << operator can be used more than once if we want to print different variables, strings and so on in a single statement. For example:
cout << "character: " << ch << endl;

--> C++ Input:
In C++, cin takes formatted input from standard input devices such as the keyboard. We use the cin object along with the >> operator for taking input.

Example 3: Integer Input/Output:
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;   // Taking input
    cout << "The number is: " << num;
    return 0;
}

Output:
Enter an integer: 70
The number is: 70

In the program, we used
cin >> num;
to take input from the user. The input is stored in the variable num. We use the >> operator with cin to take input.

--> C++ Taking Multiple Inputs:
#include <iostream>
using namespace std;

int main() 
{
    char a;
    int num;

    cout << "Enter a character and an integer: ";
    cin >> a >> num;

    cout << "Character: " << a << endl;
    cout << "Number: " << num;

    return 0;
}

Output:
Enter a character and an integer: F
23
Character: F
Number: 23
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(
#include <iostream>
using namespace std;

int main()
{
    // prints the string enclosed in double quotes
    cout << "This is C++ Programming";

    // prints integer, double, and character variables
    int num1 = 70;
    double num2 = 256.783;
    char ch = 'A';

    cout << num1 << endl;    // print integer
    cout << num2 << endl;    // print double
    cout << "character: " << ch << endl;    // print char

    int input;
    cout << "Enter an integer: ";
    cin >> input;
    cout << "The number is: " << input << endl;

    char character;
    int number;
    cout << "Enter a character and an integer: ";
    cin >> character >> number;
    cout << "Character: " << character << endl;
    cout << "Number: " << number << endl;

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

void typeConversion()
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
            cout << R"(C++ allows us to convert data of one type to that of another. This is known as type conversion.

There are two types of type conversion in C++.

1. Implicit Conversion
2. Explicit Conversion (also known as Type Casting)

--> Implicit Type Conversion

The type conversion that is automatically done by the compiler is known as implicit type conversion. This type of conversion is also known as automatic conversion.

Let us look at two examples of implicit type conversion.

Example 1: Conversion From int to double:

// Working of implicit type-conversion
#include <iostream>
using namespace std;

int main() 
{
   // assigning an int value to num_int
   int num_int = 9;

   // declaring a double type variable
   double num_double;
 
   // implicit conversion
   // assigning int value to a double variable
   num_double = num_int;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}

Output:
num_int = 9
num_double = 9
In the program, we have assigned an int data to a double variable.

num_double = num_int;
Here, the int value is automatically converted to double by the compiler before it is assigned to the num_double variable. This is an example of implicit type conversion.

Example 2: Automatic Conversion from double to int:

//Working of Implicit type-conversion
#include <iostream>
using namespace std;

int main() 
{
   int num_int;
   double num_double = 9.99;

   // implicit conversion
   // assigning a double value to an int variable
   num_int = num_double;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}

Output:
num_int = 9
num_double = 9.99
In the program, we have assigned a double data to an int variable.

num_int = num_double;
Here, the double value is automatically converted to int by the compiler before it is assigned to the num_int variable. This is also an example of implicit type conversion.

Note: Since int cannot have a decimal part, the digits after the decimal point are truncated in the above example.

--> Data Loss During Conversion (Narrowing Conversion):

As we have seen from the above example, conversion from one data type to another is prone to data loss.
This happens when data of a larger type is converted to data of a smaller type.

--> C++ Explicit Conversion

When the user manually changes data from one type to another, this is known as explicit conversion. This type of conversion is also known as type casting.

There are three major ways in which we can use explicit conversion in C++. They are:
1. C-style type casting (also known as cast notation)
2. Function notation (also known as old C++ style type casting)
3. Type conversion operators

--> C-style Type Casting

As the name suggests, this type of casting is favored by the C programming language. It is also known as cast notation.

The syntax for this style is:

(data_type)expression;

For example,
// initializing int variable
int num_int = 26;

// declaring double variable
double num_double;

// converting from int to double
num_double = (double)num_int;

--> Function-style Casting

We can also use the function like notation to cast data from one type to another.

The syntax for this style is:

data_type(expression);

For example,
// initializing int variable
int num_int = 26;

// declaring double variable
double num_double;

// converting from int to double
num_double = double(num_int);

Example 3: Type Casting:

#include <iostream>
using namespace std;

int main() 
{
    // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;

    return 0;
}

Output:
num_double = 3.56
num_int1   = 3
num_int2   = 3
We used both the C style type conversion and the function-style casting for type conversion and displaying the results. Since they perform the same task, both give us the same output.

--> Type Conversion Operators

Besides these two type castings, C++ also has four operators for type conversion. They are known as type conversion operators.
They are:
1. static_cast
2. dynamic_cast
3. const_cast
4. reinterpret_cast
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
    // Initializing an integer
    int num_int = 42;
    cout << "num_int = " << num_int << endl;

    // Implicit conversion from int to double
    double num_double = num_int;
    cout << "num_double = " << num_double << endl;

    // Explicit conversion using static_cast
    int converted_int = static_cast<int>(num_double);
    cout << "converted_int = " << converted_int << endl;

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

void operators()
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
            cout << R"(Operators are symbols that perform operations on variables and values.
Operators in C++ can be classified into 6 types:

--> 1. C++ Arithmetic Operators

Arithmetic operators are used to perform arithmetic operations on variables and data. For example,
a + b;
Here, the + operator is used to add two variables a and b.

Similarly there are various other arithmetic operators in C++.

Operator	Operation
    +	    Addition
    -	    Subtraction
    *	    Multiplication
    /	    Division
    %	    Modulo Operation (Remainder after division)
    ++      Increment
    --      Decrement

Example 1: Arithmetic Operators:

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    return 0;
}

Output:
a + b = 9
a - b = 5
a * b = 14
a / b = 3
a % b = 1
Here, the operators +, - and * compute addition, subtraction, and multiplication respectively as we might have expected.
However, the division and modulus operator must be explained further.

(/) Division Operator

Note the operation (a / b) in our program. The / operator is the division operator.

As we can see from the above example, if an integer is divided by another integer, we will get the quotient.
However, if either divisor or dividend is a floating-point number, we will get the result in decimals.

7/2 is 3
7.0 / 2 is 3.5
7 / 2.0 is 3.5
7.0 / 2.0 is 3.5

(%) Modulo Operator

The modulo operator % computes the remainder. When a = 9 is divided by b = 4, the remainder is 1.
The % operator can only be used with integers.

Example 2: Increment and Decrement Operators:

#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;


    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;
    cout << "result_b = " << result_b << endl;

    return 0;
}

Output:
result_a = 11
result_b = 99
In the above program, we have used the ++ and -- operators as prefixes (++a and --b). However, we can also use these operators as postfix (a++ and b--).

--> 2. C++ Assignment Operators

In C++, assignment operators are used to assign values to variables. For example,
// assign 5 to a
a = 5;
Here, we have assigned a value of 5 to the variable a.

Operator	Example 	Equivalent to
    =	    a = b;	    a = b;
    +=	    a += b;	    a = a + b;
    -=	    a -= b;	    a = a - b;
    *=	    a *= b;	    a = a * b;
    /=	    a /= b;	    a = a / b;
    %=	    a %= b;	    a = a % b;

Example 3: Assignment Operators:

#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a + b
    cout << "a = " << a << endl;

    return 0;
}

Output:
a = 2
b = 7
After a += b;
a = 9

--> 3. C++ Relational Operators

A relational operator is used to check the relationship between two operands. For example,
// checks if a is greater than b
a > b;
Here, > is a relational operator. It checks if a is greater than b or not.
If the relation is true, it returns 1 whereas if the relation is false, it returns 0.

Operator	      Meaning	                      Example
    ==	         Is Equal To	            3 == 5 gives us false
    !=	        Not Equal To	            3 != 5 gives us true
    >	        Greater Than	            3 > 5 gives us false
    <	         Less Than	                3 < 5 gives us true
    >=	    Greater Than or Equal To	    3 >= 5 give us false
    <=	     Less Than or Equal To	        3 <= 5 gives us true

Example 4: Relational Operators:

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}

Output:
3 == 5 is 0
3 != 5 is 1
3 > 5 is 0
3 < 5 is 1
3 >= 5 is 0
3 <= 5 is 1

Relational operators are used in decision-making and loops.

--> 4. C++ Logical Operators

Logical operators are used to check whether an expression is true or false.
If the expression is true, it returns 1 whereas if the expression is false, it returns 0.

Operator    	    Example	                Meaning
    &&	    expression1 && expression2	   Logical AND.
                                           True only if all the 
                                           operands are true.
    ||  	expression1 || expression2	   Logical OR.
                                           True if at least one 
                                           of the operands is true.
    !	          !expression	           Logical NOT.
                                           True only if the operand is false.

In C++, logical operators are commonly used in decision making. To further understand the logical operators, let's see the following examples,

Suppose,
a = 5
b = 8

Then,

(a > 3) && (b > 5) evaluates to true
(a > 3)  && (b < 5) evaluates to false

(a > 3) || (b > 5) evaluates to true
(a > 3) || (b < 5) evaluates to true
(a < 3) || (b < 5) evaluates to false

!(a < 3) evaluates to true
!(a > 3) evaluates to false

Example 5: Logical Operators:

#include <iostream>
using namespace std;

int main() 
{
    bool result;

    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}

Output:
(3 != 5) && (3 < 5) is 1
(3 == 5) && (3 < 5) is 0
(3 == 5) && (3 > 5) is 0
(3 != 5) || (3 < 5) is 1
(3 != 5) || (3 > 5) is 1
(3 == 5) || (3 > 5) is 0
!(5 == 2) is 1
!(5 == 5) is 0

Explanation of logical operator program:
(3 != 5) && (3 < 5) evaluates to 1 because both operands (3 != 5) and (3 < 5) are 1 (true).
(3 == 5) && (3 < 5) evaluates to 0 because the operand (3 == 5) is 0 (false).
(3 == 5) && (3 > 5) evaluates to 0 because both operands (3 == 5) and (3 > 5) are 0 (false).
(3 != 5) || (3 < 5) evaluates to 1 because both operands (3 != 5) and (3 < 5) are 1 (true).
(3 != 5) || (3 > 5) evaluates to 1 because the operand (3 != 5) is 1 (true).
(3 == 5) || (3 > 5) evaluates to 0 because both operands (3 == 5) and (3 > 5) are 0 (false).
!(5 == 2) evaluates to 1 because the operand (5 == 2) is 0 (false).
!(5 == 5) evaluates to 0 because the operand (5 == 5) is 1 (true).

--> 5. C++ Bitwise Operators

In C++, bitwise operators are used to perform operations on individual bits.
They can only be used alongside char and int data types.

Operator	Description
    &	    Binary AND
    |	    Binary OR
    ^	    Binary XOR
    ~	    Binary One's Complement
    <<  	Binary Shift Left

--> 6. Other C++ Operators

Here's a list of some other common operators available in C++.

Operator	                 Description	                                                       Example
 sizeof	             returns the size of data type	                                         sizeof(int); // 4
    ?: 	           returns value based on the condition	                     string result = (5 > 0) ? "even" : "odd"; // "even"
    &	         represents memory address of the operand	                                 &num; // address of num
    .	    accesses members of struct variables or class objects	                         s1.marks = 92;
    ->	 used with pointers to access the class or struct variables	                         ptr->marks = 92;
    <<	                 prints the output value	                                         cout << 5;
    >>                   gets the input value                                                cin >> num;
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
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

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

void comments()
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
            cout << R"(C++ comments are hints that a programmer can add to make their code easier to read and understand. They are completely ignored by C++ compilers.
There are two ways to add comments to code:
1. // ~ Single Line Comments
2. /* */ ~ Multi-line Comments

--> Single Line Comments

In C++, any line that starts with // is a comment. For example,

// declaring a variable
int a;

// initializing the variable 'a' with the value 2
a = 2;

We can also use single line comment like this:
int a;    // declaring a variable

--> Multi-line comments

In C++, any line between /* and */ is also a comment. For example,

/* declaring a variable
to store salary to employees */
int salary = 2000;

This syntax can be used to write both single-line and multi-line comments.

--> Using Comments for Debugging

Comments can also be used to disable code to prevent it from being executed. For example,
#include <iostream>
using namespace std;
int main() 
{
   cout << "some code";
   cout << ''error code;
   cout << "some other code";
   return 0;
}

If we get an error while running the program, instead of removing the error-prone code, we can use comments to disable it from being executed; this can be a valuable debugging tool.
#include <iostream>
using namespace std;
int main() 
{
   cout << "some code";
   // cout << ''error code;
   cout << "some other code";
   return 0;
}

Pro Tip: Remember the shortcut for using comments; it can be really helpful. 
For most code editors, it's Ctrl + / for Windows and Cmd + / for Mac.

--> Why use Comments?

If we write comments on our code, it will be easier for us to understand the code in the future. Also, it will be easier for your fellow developers to understand the code.
Comments shouldn't be the substitute for a way to explain poorly written code in English. We should always write well-structured and self-explanatory code. And, then use comments.
As a general rule of thumb, use comments to explain 'Why' you did something rather than 'How' you did something, and you are good.
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
    // This is a single line comment
    cout << "Hello, World!" << endl;

    /*
    This is a multi-line comment.
    It can span multiple lines.
    */

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

void fileHandling()
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
            cout << R"(File handling in C++ involves performing operations on files, such as creating, reading, writing, and deleting data from files. 
C++ provides several classes and functions that make file handling convenient and efficient. Here is an overview of the theory behind file handling in C++:

--> File Streams:
   - C++ uses the concept of file streams to handle file operations.
   - File streams are represented by objects of the `ifstream`, `ofstream`, and `fstream` classes, which are defined in the `<fstream>` header.

--> Opening and Closing Files:
   - To open a file, you need to create an object of the appropriate file stream class and associate it with a file.
   - Use the member function `open()` to specify the file name and the mode (e.g., input, output, or both).
   - After performing file operations, you should close the file using the `close()` member function.

--> File Modes:
   - File modes determine how a file is opened and what operations can be performed on it.
   - The most commonly used file modes are:
     - `ios::in`: Open for input operations (reading).
     - `ios::out`: Open for output operations (writing).
     - `ios::app`: Append to the end of the file.
     - `ios::binary`: Open in binary mode (for binary files).
   - You can combine multiple file modes using the bitwise OR operator (`|`).

--> Reading from a File:
   - After opening an input file, you can read data from it using the `>>` operator, which extracts data from the file and stores it in variables.
   - Use the `eof()` member function to check if the end of the file has been reached.

--> Writing to a File:
   - After opening an output file, you can write data to it using the `<<` operator, which inserts data into the file.
   - You can write different types of data, such as integers, floating-point numbers, characters, and strings, to the file.

--> Error Handling:
   - It's important to handle file-related errors to ensure the proper execution of your program.
   - You can check if a file has been opened successfully by using the `is_open()` member function.
   - Additionally, you can check for other error conditions using the `fail()`, `bad()`, `eof()`, and `good()` member functions.

--> File Pointers:
   - File pointers keep track of the current position in a file.
   - The `seekg()` and `seekp()` member functions allow you to set the file position indicator for input and output operations, respectively.

--> File Manipulation:
   - C++ provides functions to manipulate files, such as renaming and deleting files.
   - Use the `rename()` function to rename a file and the `remove()` function to delete a file.

File handling in C++ provides a powerful way to work with external files, allowing you to store and retrieve data efficiently. 
By understanding the concepts mentioned above, you can effectively read from and write to files, perform error handling, and manipulate files as needed in your C++ programs.
)";
       }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Note: Don't forget to include 'fstream' header .

// Opening a file for writing
ofstream outputFile("example.txt", ios::app); // Open in append mode

if (outputFile.is_open())
{
    // Writing data to the file
    outputFile << "Additional line appended to the file.\n";
    outputFile.close();
    cout << "Data appended to the file successfully.\n";
}
else
{
    cout << "Error opening the file.\n";
}

// Opening a file for reading
ifstream inputFile("example.txt");
            
if (inputFile.is_open())
{
    string line;
    // Reading data from the file
    cout << "Contents of the file:\n";
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }
    inputFile.close();
}
else
{
    cout << "Error opening the file.\n";
}

// Renaming a file
string oldFileName = "example.txt";
string newFileName = "new_example.txt";

if (rename(oldFileName.c_str(), newFileName.c_str()) == 0)
{
    cout << "File renamed successfully.\n";
}
else
{
    cout << "Error renaming the file.\n";
}

// Deleting a file
            
if (remove(newFileName.c_str()) == 0)
{
    cout << "File deleted successfully.\n";
}
else
{
    cout << "Error deleting the file.\n";
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