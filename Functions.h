#include <iostream>
using namespace std;

void fail();

void functions()
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
            cout << R"(In programming, a function is a named block of code that performs a specific task. It allows you to break down a program into smaller, manageable pieces, making the code more modular, reusable, and easier to maintain.

--> Components of Functions:
1. Function declaration: It specifies the function's name, return type, and parameters (if any). The declaration acts as a function's prototype.
2. Function definition: It includes the actual code that gets executed when the function is called. It defines the behavior of the function.
3. Function call: It is the point where the function is invoked or executed.

--> Key Benefits of Using Functions:
- Code reusability: Functions allow you to reuse code by calling the same function from multiple places in a program.
- Modularity: Functions help in breaking down complex problems into smaller, more manageable parts, making the code easier to understand and maintain.
- Abstraction: Functions hide the implementation details and provide a high-level interface, allowing users to interact with the function without worrying about the underlying code.
- Code organization: Functions help in organizing the codebase by separating different tasks into separate functions.

--> Example of a function:
#include <iostream>
using namespace std;

// Function declaration
int sum(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int result = sum(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}

// Function definition
int sum(int a, int b)
{
    return a + b;
}

Output:
Enter two numbers: 3 5
Sum = 8

In this example, the `sum` function is declared with two parameters `a` and `b` and a return type of 'int'. 
The function definition contains the code that calculates the sum of the two numbers and returns the result.
The `sum` function is then called from the `main` function, passing the user-inputted numbers as arguments.

Note: Functions can have different return types (including `void` for no return value) and can accept zero or more parameters.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

// Function declaration
int sum(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int result = sum(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}

// Function definition
int sum(int a, int b)
{
    return a + b;
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

void functionTypes()
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
            cout << R"(In C++, functions can be categorized into various types based on their behavior and usage. 
Here are some commonly used function types:

--> Standard Functions: 
These are predefined functions provided by the C++ standard library. Examples include `printf()`, `scanf()`, `sqrt()`, etc. 
They are available for direct use without the need for explicit function definition.

--> User-Defined Functions: 
These are functions defined by the user to perform specific tasks. They provide a way to modularize code and make it more reusable and maintainable.

--> Recursive Functions: 
Recursive functions are functions that call themselves either directly or indirectly. They are useful in solving problems that can be broken down into smaller subproblems of the same nature. 
Recursive functions have a base case that terminates the recursion.

--> Inline Functions: 
Inline functions are small functions that are expanded by the compiler at the point of function call instead of performing a function call. They reduce the function call overhead and can improve performance. 
The `inline` keyword is used to define an inline function.

--> Function Overloading: 
Function overloading allows defining multiple functions with the same name but different parameter lists. The compiler resolves the correct function to call based on the arguments provided. 
Function overloading provides flexibility and code readability.

--> Lambda Functions: 
Lambda functions are anonymous functions defined inline without a name. They are useful for writing concise code and are often used in combination with algorithms and STL containers.

These are just some of the commonly used function types in C++. Each type has its own characteristics and usage scenarios.
It's important to choose the appropriate function type based on the requirements of your program.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

// Standard Function
// No explicit definition required
// Example: printf(), scanf()

// User-Defined Function
int sum(int a, int b)
{
    return a + b;
}

// Recursive Function
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Inline Function
inline int multiply(int a, int b)
{
    return a * b;
}

// Function Overloading
int multiply(int a, int b, int c)
{
    return a * b * c;
}

// Lambda Function
auto square = [](int x) { return x * x; };

int main()
{
    int num1 = 5, num2 = 3, num3 = 2;

    // Function Calls
    int result1 = sum(num1, num2);
    int result2 = factorial(num1);
    int result3 = multiply(num1, num2);
    int result4 = multiply(num1, num2, num3);
    int result5 = square(num1);

    cout << "Sum: " << result1 << endl;
    cout << "Factorial: " << result2 << endl;
    cout << "Multiplication: " << result3 << endl;
    cout << "Multiplication (Overloaded): " << result4 << endl;
    cout << "Square: " << result5 << endl;

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

void functionOverloading()
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
            cout << R"(Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameter lists. The compiler resolves the correct function to call based on the arguments provided.

--> Key Points about Function Overloading:

- Function overloading is based on the number, types, and order of the function parameters. Two functions with the same name but different parameter lists are considered overloaded.
- The return type of the function does not play a role in function overloading. Only the parameter lists are considered.
- Overloaded functions must have different parameter lists. If two functions have the same number and types of parameters, but differ only in the return type, it is not considered function overloading.
- Function overloading provides flexibility and code readability by allowing you to use the same function name for related operations.
- The compiler determines the correct function to call based on the arguments passed during the function call.

Note: The concept of function overloading is applicable only within the same scope.

--> Example:

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 3;
    float num3 = 2.5, num4 = 1.5;

    int result1 = add(num1, num2);       // Calls the int add(int, int) function
    float result2 = add(num3, num4);     // Calls the float add(float, float) function

    return 0;
}

In the example above, we have two functions named `add()`. One takes two `int` parameters and returns an `int`, while the other takes two `float` parameters and returns a `float`. During the function calls, the compiler resolves the correct function to call based on the arguments passed.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

// Function Overloading
int multiply(int a, int b)
{
    return a * b;
}

float multiply(float a, float b)
{
    return a * b;
}

int main()
{
    int num1 = 5, num2 = 3;
    float num3 = 2.5, num4 = 1.5;

    int result1 = multiply(num1, num2);      // Calls the int multiply(int, int) function
    float result2 = multiply(num3, num4);    // Calls the float multiply(float, float) function

    cout << "Multiplication (int): " << result1 << endl;
    cout << "Multiplication (float): " << result2 << endl;

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

void defaultArgument()
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
            cout << R"(Default arguments in C++ allow you to specify a default value for a function parameter. When a function is called without providing an argument for a parameter with a default value, the default value is used.

--> Key Points about Default Arguments:
- Default arguments are defined in the function declaration.
- Default arguments must be specified from right to left. All the parameters on the right of a parameter with a default value must also have default values.
- Default arguments can be of any type, including fundamental types, class types, pointers, etc.
- Default arguments provide flexibility by allowing you to omit certain arguments while calling a function, as long as the omitted arguments have default values.
- When a function is called with arguments provided for all the parameters, the provided values are used instead of the default values.

--> Example:

void greet(string name, string message = "Hello")
{
    cout << message << ", " << name << "!" << endl;
}

int main()
{
    greet("John");            // Uses the default message "Hello"
    greet("Jane", "Hi");      // Uses the provided message "Hi"

    return 0;
}

In the example above, we have a function named `greet()` that takes two parameters: `name` and `message`. The `message` parameter has a default value of "Hello". When the function is called without providing a value for the `message` parameter (e.g., `greet("John")`), the default value "Hello" is used. However, when the function is called with a value provided for the `message` parameter (e.g., `greet("Jane", "Hi")`), the provided value "Hi" is used instead.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

// Function with Default Arguments
void printInfo(string name, int age = 30, string city = "Unknown")
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << endl;
}

int main()
{
    printInfo("John");                      // Uses default age (30) and default city ("Unknown")
    printInfo("Jane", 25);                  // Uses provided age (25) and default city ("Unknown")
    printInfo("Bob", 35, "New York");        // Uses provided age (35) and provided city ("New York")

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

void storageClass()
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
            cout << R"(In C++, storage classes define the scope (visibility) and lifetime of variables or functions within a program. 
C++ provides four storage classes:

--> Auto: 
The `auto` storage class is the default storage class for local variables. It automatically allocates and deallocates memory for variables within a block or function.
Its usage is optional, as the `auto` keyword is rarely used explicitly.

--> Register: 
The `register` storage class is used to define local variables that should be stored in the CPU registers for faster access. 
However, the usage of `register` is merely a hint to the compiler, and it's up to the compiler to decide whether to store the variable in a register or not.

--> Static: 
The `static` storage class is used to define variables or functions that retain their values between function calls. For local variables, 
it means the variable retains its value even when the block is exited and re-entered. For functions, it means the function remains in memory throughout the program's execution.

--> Extern: 
The `extern` storage class is used to declare a global variable or function that is defined in another file. It is used when you want to use a variable or function that is defined in a different source file.

--> Example:
#include <iostream>
using namespace std;

int globalVar = 10;                    // Global variable

void myFunction()
{
    int localVar = 20;                 // Local variable

    static int staticVar = 30;         // Static variable

    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "Static variable: " << staticVar << endl;

    globalVar++;
    localVar++;
    staticVar++;
}

int main()
{
    myFunction();
    myFunction();
    myFunction();

    return 0;
}

In the example above, we have a global variable `globalVar`, a local variable `localVar`, and a static variable `staticVar` defined within the function `myFunction()`. 
The values of these variables are displayed and incremented in each function call. The `globalVar` retains its value across function calls, while the `localVar` is initialized with a new value in each function call. 
The `staticVar` retains its value and is incremented in each function call.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

void demo()
{
    auto int a = 10;                   // auto storage class (optional)

    register int b = 20;               // register storage class

    static int c = 30;                 // static storage class

    extern int d;                      // extern storage class (declaration)

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;
}

int d = 40;                           // extern storage class (definition)

int main()
{
    demo();

    return 0;
}

In this example, we have demonstrated the usage of different storage classes. The `a` variable is defined with the `auto` storage class (which is optional), the `b` variable is defined with the `register` storage class, 
the `c` variable is defined with the `static` storage class, and the `d` variable is declared with the `extern` storage class (with the definition provided later in the code).

The output of the program will be:
Value of a: 10
Value of b: 20
Value of c: 30
Value of d: 40
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

void recursion()
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
            cout << R"(Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller, more manageable subproblems. 
In a recursive function, the function repeatedly calls itself until it reaches a base case that doesn't require further recursion.

--> Key Elements of Recursion:
1. Base case: It defines the condition under which the recursive function stops calling itself and returns a value. It is essential to avoid infinite recursion.
2. Recursive case: It defines the condition under which the recursive function calls itself again to solve a smaller subproblem.
3. Recursive call: It is the actual call to the recursive function within itself.

Recursion can be used to solve problems that exhibit a recursive structure, such as tree traversal, factorial calculation, Fibonacci series, etc.

--> Example - Factorial using recursion:
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;  // Base case: factorial of 0 and 1 is 1
    }
    else
    {
        return n * factorial(n - 1);  // Recursive case: n! = n * (n-1)!
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result << endl;

    return 0;
}

In this example, the `factorial()` function calculates the factorial of a given number `n` using recursion. The base case is defined when `n` is 0 or 1, where the function returns 1.
In the recursive case, the function calls itself with the argument `(n - 1)` and multiplies it with `n`. The recursion continues until the base case is reached, and the final result is returned.
It's important to define base cases and ensure they are reachable to avoid infinite recursion.

--> Advantages of C++ Recursion:
- It makes our code shorter and cleaner.
- Recursion is required in problems concerning data structures and advanced algorithms, such as Graph and Tree Traversal.

--> Disadvantages of C++ Recursion:
- It takes a lot of stack space compared to an iterative program.
- It uses more processor time.
- It can be more difficult to debug compared to an equivalent iterative program.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;  // Base case: fibonacci(0) = 0, fibonacci(1) = 1
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
    }
}

int main()
{
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

In this example, the `fibonacci()` function calculates the Fibonacci series up to a given number of terms `num` using recursion. The base case is defined when `n` is 0 or 1, where the function returns `n` itself. 
In the recursive case, the function calls itself with the arguments `(n - 1)` and `(n - 2)` and adds the results together. The recursion continues until the base case is reached, and the Fibonacci series is printed using a loop.

Note: Recursion can sometimes be less efficient than iterative approaches due to the overhead of function calls and stack usage. Care should be taken to optimize recursive algorithms, such as using memoization or tail recursion when applicable.
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

void returnReference()
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
            cout << R"(In C++, it is possible to return a reference from a function. When a function returns a reference, it means it returns a reference to a memory location rather than a copy of a value. 
Returning references can be useful in certain scenarios to avoid unnecessary copying and enable modification of the original value.

--> Usage of Returning References:

1. Returning a reference to a local variable: 
Returning a reference to a local variable is dangerous because the local variable's scope ends after the function returns, and the reference will become invalid. It is important to avoid returning references to local variables.

2. Returning a reference to a function argument: 
Returning a reference to a function argument is useful when you want to modify the original value passed as an argument. The caller of the function can access the modified value through the reference.

3. Returning a reference to a dynamically allocated memory: 
Returning a reference to dynamically allocated memory can be useful for resource management. However, it requires careful memory management to avoid memory leaks.

--> Example - Returning a reference to a function argument:

#include <iostream>
using namespace std;

int& increment(int& num)
{
    num++;
    return num;
}

int main()
{
    int value = 5;
    cout << "Before increment: " << value << endl;
    increment(value) = 10;
    cout << "After increment: " << value << endl;

    return 0;
}

In this example, the `increment()` function takes an integer reference `num` as an argument and increments it by 1. The function returns a reference to `num`, allowing the caller to modify the original value. In the `main()` function, the return value of `increment(value)` is assigned the value 10, which modifies the `value` variable itself.

Note: When returning a reference, it is crucial to ensure that the referenced object remains valid after the function returns. Returning a reference to a local variable or a temporary object can lead to undefined behavior.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(#include <iostream>
using namespace std;

int& createDynamicInt()
{
    int* num = new int(5);
    return *num;
}

int main()
{
    int& value = createDynamicInt();
    cout << "Value: " << value << endl;

    delete &value;

    return 0;
}

In this example, the `createDynamicInt()` function dynamically allocates an integer with the value 5 and returns a reference to it. The returned reference is assigned to the `value` variable in the `main()` function.
The dynamically allocated memory must be explicitly deallocated using `delete` to avoid memory leaks. Note that deleting the reference `&value` frees the dynamically allocated memory.

Caution: Returning references to dynamically allocated memory can be risky, as it requires careful memory management. It's important to ensure proper deallocation and avoid dangling references or memory leaks.
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