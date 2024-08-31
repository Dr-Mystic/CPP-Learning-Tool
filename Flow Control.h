#include <iostream>
using namespace std;

void fail();

void ifElse()
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
            cout << R"(In computer programming, we use the if...else statement to run one block of code under certain conditions and another block of code under different conditions.

For example, assigning grades (A, B, C) based on marks obtained by a student.

if the percentage is above 90, assign grade A
if the percentage is above 75, assign grade B
if the percentage is above 65, assign grade C

There are three forms of if...else statements in C++:
1. if statement
2. if...else statement
3. if...else if...else statement

--> C++ if Statement

The syntax of the if statement is:

if (condition) 
{
  // body of if statement
}

The if statement evaluates the condition inside the parentheses ( ).
If the condition evaluates to true, the code inside the body of if is executed.
If the condition evaluates to false, the code inside the body of if is skipped.
Note: The code inside { } is the body of the if statement.

--> Working of if Statement

Example 1: C++ if Statement:

// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // checks if the number is positive
    if (number > 0) 
    {
        cout << "You entered a positive integer: " << number << endl;
    }

    cout << "This statement is always executed.";

    return 0;
}

Output 1:
Enter an integer: 5
You entered a positive number: 5
This statement is always executed.
When the user enters 5, the condition number > 0 is evaluated to true and the statement inside the body of if is executed.

Output 2:
Enter a number: -5
This statement is always executed.
When the user enters -5, the condition number > 0 is evaluated to false and the statement inside the body of if is not executed.

--> C++ if...else

The if statement can have an optional else clause. Its syntax is:

if (condition) 
{
  // block of code if condition is true
}
else 
{
  // block of code if condition is false
}
The if..else statement evaluates the condition inside the parenthesis.

--> Working of if...else Statement

If the condition evaluates true,
the code inside the body of if is executed and
the code inside the body of else is skipped from execution.

If the condition evaluates false,
the code inside the body of else is executed and
the code inside the body of if is skipped from execution.

Example 2: C++ if...else Statement:

// Program to check whether an integer is positive or negative
// This program considers 0 as a positive number
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 0) 
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else 
    {
        cout << "You entered a negative integer: " << number << endl;
    }

    cout << "This line is always printed.";

    return 0;
}

Output 1:
Enter an integer: 4
You entered a positive integer: 4.
This line is always printed.
In the above program, we have the condition number >= 0. If we enter the number greater or equal to 0, then the condition evaluates true.

Here, we enter 4. So, the condition is true. Hence, the statement inside the body of if is executed.

Output 2:
Enter an integer: -4
You entered a negative integer: -4.
This line is always printed.
Here, we enter -4. So, the condition is false. Hence, the statement inside the body of else is executed.

--> C++ if...else...else if statement

The if...else statement is used to execute a block of code among two alternatives. 
However, if we need to make a choice between more than two alternatives, we use the if...else if...else statement.

The syntax of the if...else if...else statement is:
if (condition1) 
{
  // code block 1
}
else if (condition2)
{
  // code block 2
}
else 
{
  // code block 3
}

Here,
If condition1 evaluates to true, the code block 1 is executed.

If condition1 evaluates to false, then condition2 is evaluated.

If condition2 is true, the code block 2 is executed.

If condition2 is false, the code block 3 is executed.

Note: There can be more than one else if statement but only one if and else statements.

--> Working of if...else if...else Statement

Example 3: C++ if...else...else if:

// Program to check whether an integer is positive, negative or zero
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "You entered a positive integer: " << number << endl;
    } 
    else if (number < 0) 
    {
        cout << "You entered a negative integer: " << number << endl;
    } 
    else 
    {
        cout << "You entered 0." << endl;
    }

    cout << "This line is always printed.";

    return 0;
}

Output 1:
Enter an integer: 1
You entered a positive integer: 1.
This line is always printed.

Output 2:
Enter an integer: -2
You entered a negative integer: -2.
This line is always printed.

Output 3:
Enter an integer: 0
You entered 0.
This line is always printed.

In this program, we take a number from the user. We then use the if...else if...else ladder to check whether the number is positive, negative, or zero.

If the number is greater than 0, the code inside the if block is executed. 

If the number is less than 0, the code inside the else if block is executed. 

Otherwise, the code inside the else block is executed.

--> C++ Nested if...else

Sometimes, we need to use an if statement inside another if statement. This is known as nested if statement.

Think of it as multiple layers of if statements. There is a first, outer if statement, and inside it is another, inner if statement. 

Its syntax is:
// outer if statement
if (condition1) 
{
    // statements

    // inner if statement
    if (condition2) 
    {
        // statements
    }
}

Notes:
We can add else and else if statements to the inner if statement as required.
The inner if statement can also be inserted inside the outer else or else if statements (if they exist).
We can nest multiple layers of if statements.

Example 4: C++ Nested if:
// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    cout << "Enter an integer: ";  
    cin >> num;    

    // outer if condition
    if (num != 0) 
    {  
        // inner if condition
        if (num > 0) 
        {
            cout << "The number is positive." << endl;
        }
        // inner else condition
        else 
        {
            cout << "The number is negative." << endl;
        }  
    }
    // outer else condition
    else 
    {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    }

    cout << "This line is always printed." << endl;

    return 0;
}

Output 1:
Enter an integer: 35
The number is positive.
This line is always printed.

Output 2:
Enter an integer: -35
The number is negative.
This line is always printed.

Output 3:
Enter an integer: 0
The number is 0 and it is neither positive nor negative.
This line is always printed.

In the above example,
We take an integer as an input from the user and store it in the variable num.
We then use an if...else statement to check whether num is not equal to 0.

If true, then the inner if...else statement is executed.

If false, the code inside the outer else condition is executed, which prints "The number is 0 and it is neither positive nor negative."

The inner if...else statement checks whether the input number is positive i.e. if num is greater than 0.

If true, then we print a statement saying that the number is positive.

If false, we print that the number is negative.

Note: As you can see, nested if...else makes your logic complicated. If possible, you should always try to avoid nested if...else.

--> Body of if...else With Only One Statement

If the body of if...else has only one statement, you can omit { } in the program. 
For example, you can replace

int number = 5;

if (number > 0) 
{
  cout << "The number is positive." << endl;
}
else 
{
  cout << "The number is negative." << endl;
}

with

int number = 5;

if (number > 0)
  cout << "The number is positive." << endl;
else
  cout << "The number is negative." << endl;

The output of both programs will be the same.
Note: Although it's not necessary to use { } if the body of if...else has only one statement, using { } makes your code more readable.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(// Example: if statement
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "You entered a positive integer: " << number << endl;
    }

    cout << "This statement is always executed.";

    return 0;
}


// Example: if...else statement
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 0) 
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else 
    {
        cout << "You entered a negative integer: " << number << endl;
    }

    cout << "This line is always printed.";

    return 0;
}


// Example: if...else if...else statement
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "You entered a positive integer: " << number << endl;
    } 
    else if (number < 0) 
    {
        cout << "You entered a negative integer: " << number << endl;
    } 
    else 
    {
        cout << "You entered 0." << endl;
    }

    cout << "This line is always printed.";

    return 0;
}


// Example: Nested if...else statement
#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    cout << "Enter an integer: ";  
    cin >> num;    

    if (num != 0) 
    {  
        if (num > 0) 
        {
            cout << "The number is positive." << endl;
        }
        else 
        {
            cout << "The number is negative." << endl;
        }  
    }
    else 
    {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    }

    cout << "This line is always printed." << endl;

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

void forLoop()
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
            cout << R"(A for loop is a control flow statement that allows code to be executed repeatedly based on a specified condition. It consists of three parts: initialization, condition, and increment/decrement.

--> Syntax of For Loop

for (initialization; condition; increment/decrement) 
{
    // code to be executed
}


Here's the explanation of each part:
- Initialization: It is executed only once before the loop starts. It initializes the loop counter.
- Condition: It is evaluated before each iteration. If it evaluates to true, the loop continues; otherwise, it terminates.
- Increment/Decrement: It is executed at the end of each iteration. It updates the loop counter.

--> Working of the for loop:
1. Initialization is executed.
2. The condition is evaluated. If it is true, the code inside the loop is executed; otherwise, the loop is terminated.
3. After executing the loop body, the increment/decrement is executed.
4. The condition is evaluated again.
5. Steps 3-4 are repeated until the condition becomes false.

--> Example: Printing numbers from 1 to 5 using a for loop:
#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        cout << i << " ";
    }

    return 0;
}

Output:
1 2 3 4 5

In this example, we use a for loop to print numbers from 1 to 5. The loop counter `i` is initialized to 1, and the loop continues as long as `i` is less than or equal to 5.
After each iteration, `i` is incremented by 1. The loop body prints the value of `i` on each iteration.
You can modify the initialization, condition, and increment/decrement parts of the for loop based on your requirements.

Note: The for loop is useful when you know the number of iterations in advance. If the number of iterations is not known
beforehand, you can use a while loop or do-while loop instead.
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
    for (int i = 1; i <= 5; i++) 
    {
        cout << i << " ";
    }

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

void whileLoop()
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
            cout << R"(The while loop is a control flow statement that executes a block of code as long as a specified condition is true.

--> Syntax of the While Loop:

while (condition) 
{
    // code to be executed
}

Here's the explanation of each part:
- Condition: It is evaluated before each iteration. If it evaluates to true, the loop continues; otherwise, it terminates.
- Code to be executed: It is the block of code that is executed in each iteration.

--> Working of the While Loop:
1. The condition is evaluated. If it is true, the code inside the loop is executed; otherwise, the loop terminates.
2. After executing the loop body, the condition is evaluated again.
3. Steps 1-2 are repeated until the condition becomes false.

--> Example: Printing numbers from 1 to 5 using a while loop:
#include <iostream>
using namespace std;

int main() 
{
    int i = 1;

    while (i <= 5) 
    {
        cout << i << " ";
        i++;
    }

    return 0;
}

Output:
1 2 3 4 5

In this example, we use a while loop to print numbers from 1 to 5. The loop counter `i` is initialized to 1, and the loop continues as long as `i` is less than or equal to 5.
After each iteration, `i` is incremented by 1. The loop body prints the value of `i` on each iteration.
You can modify the condition and the code inside the loop based on your requirements.
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
    int i = 1;

    while (i <= 5) 
    {
        cout << i << " ";
        i++;
    }

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

void doWhileLoop()
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
            cout << R"(A do-while loop is a control flow statement that executes a block of code repeatedly until a specified condition becomes false. It is similar to the while loop, but the condition is checked at the end of the loop.

--> Syntax of Do-While Loop
do 
{
    // code to be executed
} 
while (condition);

Here's the explanation of each part:
- Code to be executed: It is the block of code that will be executed repeatedly.
- Condition: It is evaluated at the end of each iteration. If it evaluates to true, the loop continues; otherwise, it terminates.

--> Working of the do-while loop:
1. The code inside the loop is executed.
2. The condition is evaluated. If it is true, the loop continues; otherwise, it terminates.
3. Steps 1-2 are repeated until the condition becomes false.

The key difference between the do-while loop and the while loop is that the do-while loop executes the code block at least once, even if the condition is initially false.

--> Example: Printing numbers from 1 to 5 using a do-while loop:
#include <iostream>
using namespace std;

int main() 
{
    int i = 1;
    do 
    {
        cout << i << " ";
        i++;
    } 
    while (i <= 5);

    return 0;
}

Output:
1 2 3 4 5

In this example, we use a do-while loop to print numbers from 1 to 5. The loop counter `i` is initialized to 1, and the loop continues as long as `i` is less than or equal to 5. 
After each iteration, `i` is incremented by 1. The loop body prints the value of `i` on each iteration.

You can modify the code block and the condition based on your requirements.

Note: The do-while loop is useful when you want to ensure that the code block is executed at least once, regardless of the condition.
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
    int i = 1;
    do 
    {
        cout << i << " ";
        i++;
    } 
    while (i <= 5);

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

void breakStatement()
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
            cout << R"(The break statement is a control flow statement used to terminate the execution of a loop or switch statement.

--> In a loop:
- When a break statement is encountered within a loop, the loop is immediately terminated, and the program execution continues with the next statement after the loop.
- It allows you to prematurely exit the loop based on a certain condition.

--> In a switch statement:
- When a break statement is encountered within a switch case, the execution of the switch statement is terminated, and the program jumps to the next statement after the switch.

--> Syntax of the Break Statement:

break;

--> Example 1: Using break statement in a loop:
#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        if (i == 3) 
        {
            break; // Terminate the loop when i is 3
        }
        cout << i << " ";
    }

    return 0;
}

Output:
1 2

In this example, we use a for loop to iterate from 1 to 5. 
When the loop counter `i` is equal to 3, the break statement is encountered, and the loop is terminated.

--> Example 2: Using break statement in a switch statement:
#include <iostream>
using namespace std;

int main() 
{
    int choice;

    cout << "Choose an option: \n";
    cout << "1. Option 1 \n";
    cout << "2. Option 2 \n";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Option 1 selected. \n";
            break; // Terminate the switch statement
        case 2:
            cout << "Option 2 selected. \n";
            break; // Terminate the switch statement
        default:
            cout << "Invalid option. \n";
    }
    return 0;
}

Output:
Choose an option:
1. Option 1
2. Option 2
2

Option 2 selected.

In this example, we use a switch statement to handle user choices. 
When the value of `choice` is 2, the corresponding switch case is executed, and the break statement is encountered, terminating the switch statement.

You can modify the conditions and code blocks to suit your specific needs.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example 1: Using break statement in a loop:

#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        if (i == 3) 
        {
            break; // Terminate the loop when i is 3
        }
        cout << i << " ";
    }

    return 0;
}

Example 2: Using break statement in a switch statement:

#include <iostream>
using namespace std;

int main() 
{
    int choice;

    cout << "Choose an option: \n";
    cout << "1. Option 1 \n";
    cout << "2. Option 2 \n";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Option 1 selected. \n";
            break; // Terminate the switch statement
        case 2:
            cout << "Option 2 selected. \n";
            break; // Terminate the switch statement
        default:
            cout << "Invalid option. \n";
    }

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

void continueStatement()
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
            cout << R"(The continue statement is a control flow statement used to skip the remaining code within a loop iteration and move to the next iteration.

--> In a loop:
- When a continue statement is encountered within a loop, the current iteration is prematurely terminated, and the program execution jumps to the next iteration.
- It allows you to skip specific iterations based on a certain condition without terminating the loop.

--> Syntax of the Continue Statement:

continue;

--> Example 1: Using continue statement in a loop:

#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        if (i == 3) 
        {
            continue; // Skip the current iteration when i is 3
        }
        cout << i << " ";
    }

    return 0;
}

Output:
1 2 4 5

In this example, we use a for loop to iterate from 1 to 5. When the loop counter `i` is equal to 3, the continue statement is encountered, and the current iteration is skipped, moving to the next iteration.

You can modify the conditions and code blocks to suit your specific needs.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example 1: Using continue statement in a loop:

#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        if (i == 3) 
        {
            continue; // Skip the current iteration when i is 3
        }
        cout << i << " ";
    }

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

void switchStatement()
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
            cout << R"(The switch statement is a control flow statement that allows a variable to be tested for equality against a list of values. It provides an alternative to using multiple `if-else` statements.

--> Syntax of the Switch Statement:

switch (expression)
{
    case value1:
        // code to be executed if expression matches value1
        break;
    case value2:
        // code to be executed if expression matches value2
        break;
    // more cases...
    default:
        // code to be executed if expression doesn't match any value
}

The switch statement works as follows:
1. The expression is evaluated once.
2. The value of the expression is compared with the values of each `case`.
3. If a match is found, the corresponding code block is executed.
4. The `break` statement is used to exit the switch statement after the code block of the matching `case` is executed.
5. If no match is found, the code block of the `default` case (if provided) is executed.

--> Example 1: Using switch statement:

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day number";
            break;
    }

    return 0;
}

Output:
Enter a day number (1-7): 3
Wednesday

In this example, the user is asked to enter a day number. The switch statement is used to match the entered day number with the corresponding day name and display it. 
If the entered day number doesn't match any case, the default case is executed.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example 1: Using switch statement:

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day number";
            break;
    }

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

void gotoStatement()
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
            cout << R"(The goto statement is a control flow statement that allows transferring the control to a labeled statement within the same function. It is often considered a controversial feature and should be used judiciously to avoid code complexity and maintainability issues.

--> Syntax of the Goto Statement:

goto label;

Here, the "label" is a user-defined identifier followed by a colon (:). The label serves as a target location within the function.

--> Example:
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0)
        goto error;

    cout << "Number is positive" << endl;
    return 0;

error:
    cout << "Error: Invalid number" << endl;
    return 1;
}

Output:
Enter a positive number: -5
Error: Invalid number

In this example, the user is asked to enter a positive number. If the entered number is less than or equal to zero, the program jumps to the "error" label using the goto statement and displays an error message. 
Otherwise, it continues executing the subsequent code.
The use of the goto statement should be minimized, as it can make the code harder to understand and maintain. 
It is generally recommended to use structured control flow constructs like if-else, loops, and function calls instead of goto.
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
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0)
        goto error;

    cout << "Number is positive" << endl;
    return 0;

error:
    cout << "Error: Invalid number" << endl;
    return 1;
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