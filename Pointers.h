#include <iostream>
using namespace std;

void fail();

void pointers()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(In C++, a pointer is a variable that stores the memory address of another variable. Pointers allow you to work with dynamically allocated memory, access and manipulate data indirectly, and create complex data structures.

--> Declaring a Pointer:

To declare a pointer, you use the following syntax:
datatype* pointerName;

Here, "datatype" is the type of the variable the pointer will point to, and "pointerName" is the name of the pointer. For example, to declare an integer pointer, you would write:
int* ptr;

--> Initializing a Pointer:

After declaring a pointer, you can initialize it to point to a specific memory address or to the address of another variable. To initialize a pointer, you use the address-of operator (&) to get the address of a variable and assign it to the pointer. For example:
int* ptr;
int num = 42;
ptr = &num;

--> Accessing the Value of a Pointer:

To access the value of the variable a pointer is pointing to, you use the dereference operator (*) in front of the pointer. For example:
int* ptr;
int num = 42;
ptr = &num;
cout << *ptr; // Output: 42

--> Dynamic Memory Allocation:

Pointers are commonly used with dynamic memory allocation using the `new` keyword. With dynamic memory allocation, you can allocate memory for variables at runtime and deallocate it when no longer needed. For example:
int* ptr = new int;
*ptr = 42;
cout << *ptr; // Output: 42
delete ptr;

--> Example - Pointers:

#include <iostream>
using namespace std;

int main()
{
    int num = 42;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}

In this example, an integer variable `num` is declared and initialized with the value 42. A pointer `ptr` is declared and assigned the address of `num` using the address-of operator (&). The program then prints the value of `num`, the address of `num`, the value of `ptr` (which is the address of `num`), and the value pointed by `ptr` (which is the value of `num`).

Note: Remember to delete dynamically allocated memory using the `delete` keyword to avoid memory leaks.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Pointers:

#include <iostream>
using namespace std;

int main()
{
    int num = 42;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}

In this example, an integer variable `num` is declared and initialized with the value 42. A pointer `ptr` is declared and assigned the address of `num` using the address-of operator (&). The program then prints the value of `num`, the address of `num`, the value of `ptr` (which is the address of `num`), and the value pointed by `ptr` (which is the value of `num`).

Output:
Value of num: 42
Address of num: 0x7ffc71e07a3c
Value of ptr: 0x7ffc71e07a3c
Value pointed by ptr: 42

Note: The memory addresses displayed may vary on different systems.
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
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

void pointersAndArrays()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(In C++, pointers and arrays have a close relationship. When an array is declared, it is essentially a pointer to the first element of the array. Let's explore the relationship between pointers and arrays:

--> Pointer to Array Element:

To access elements of an array using a pointer, you can declare a pointer of the same data type as the array and assign the address of the first element to the pointer. You can then use pointer arithmetic to access other elements. For example:
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr; // or int* ptr = &arr[0];

cout << *ptr; // Output: 1 (value of the first element)
cout << *(ptr + 2); // Output: 3 (value of the third element)

--> Array Name as a Pointer:

The name of the array can also be treated as a pointer to the first element of the array. For example:
int arr[5] = {1, 2, 3, 4, 5};

cout << *arr; // Output: 1 (value of the first element)
cout << arr[2]; // Output: 3 (value of the third element)

--> Array Elements and Pointer Arithmetic:

Since arrays are sequential blocks of memory, you can use pointer arithmetic to traverse the elements of the array. For example:
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr;

for (int i = 0; i < 5; i++)
{
    cout << *(ptr + i) << " "; // Output: 1 2 3 4 5
}

--> Array and Function Parameters:

Arrays are often passed to functions using pointers. When an array is passed to a function, it decays into a pointer to its first element. For example:
void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // Output: 1 2 3 4 5

    return 0;
}

In this example, the function `printArray` takes an integer pointer and the size of the array. Inside the function, the array is accessed using pointer arithmetic and printed.

Note: When working with arrays and pointers, be cautious of accessing elements outside the bounds of the array, as it can lead to undefined behavior and memory-related errors.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Pointers and Arrays:

#include <iostream>
using namespace std;

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    cout << "Array elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " "; // Output: 1 2 3 4 5
    }

    cout << "\nArray elements using array name as pointer: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // Output: 1 2 3 4 5
    }

    cout << "\nArray elements using function: ";
    printArray(arr, 5); // Output: 1 2 3 4 5

    return 0;
}

In this example, we have a function `printArray` that takes an integer pointer and the size of the array as parameters. Inside the function, the array elements are accessed using pointer arithmetic and printed. 
The `main` function demonstrates three ways of accessing the elements of the array `arr`: using pointer arithmetic, using the array name as a pointer, and passing the array to the `printArray` function.
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
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

void pointersAndFunctions()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(In C++, you can pass pointers as function arguments, which allows functions to modify the data at the memory location pointed to by the pointer. This enables functions to operate on the original data directly and makes it possible to pass large data structures efficiently. Let's explore how pointers can be used with functions:

--> Pass by Value:

When you pass a variable by value to a function, a copy of the variable is created, and the function works with the copy. Any modifications made to the copy inside the function do not affect the original variable. For example:
void increment(int x)
{
    x++; // Changes the copy of x, not the original variable
}

int main()
{
    int num = 5;
    increment(num);
    cout << num; // Output: 5 (the original variable remains unchanged)

--> Pass by Pointer:

When you pass a pointer to a function, the function receives the memory address of the variable. By dereferencing the pointer inside the function, you can modify the value at the memory location directly. For example:
void incrementByPointer(int* ptr)
{
    (*ptr)++; // Changes the value at the memory location pointed by ptr
}

int main()
{
    int num = 5;
    incrementByPointer(&num);
    cout << num; // Output: 6 (the value of the original variable is modified)

-->  Returning a Pointer:

Functions can also return pointers, allowing you to create dynamic data structures and handle large amounts of data efficiently. For example:
int* createArray(int size)
{
    return new int[size]; // Dynamically allocate memory for an array
}

int main()
{
    int* arr = createArray(5);
    // Use the dynamically allocated array here

    delete[] arr; // Release the dynamically allocated memory

    return 0;
}

In this example, the function `createArray` returns a pointer to the first element of a dynamically allocated integer array. Remember to deallocate the dynamically allocated memory using `delete[]` to avoid memory leaks.

--> Pointer to Function:

C++ also allows you to use pointers to functions, which can be useful in certain scenarios like function callbacks and dynamic function selection. The syntax for a pointer to a function is a bit complex and involves specifying the function's signature. For example:
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int (*funcPointer)(int, int); // Pointer to a function taking two integers and returning an integer
    funcPointer = add; // Point to the 'add' function
    int result = funcPointer(5, 3); // Equivalent to calling 'add(5, 3)'

    funcPointer = subtract; // Point to the 'subtract' function
    result = funcPointer(5, 3); // Equivalent to calling 'subtract(5, 3)'

    return 0;
}

In this example, we declare a pointer to a function that takes two integers and returns an integer. We then assign it to different functions and call them using the pointer.

Using pointers with functions provides flexibility and power in manipulating data and function behavior in C++ programs.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Pointers and Functions:

#include <iostream>
using namespace std;

void increment(int x)
{
    x++; // Changes the copy of x, not the original variable
}

void incrementByPointer(int* ptr)
{
    (*ptr)++; // Changes the value at the memory location pointed by ptr
}

int* createArray(int size)
{
    return new int[size]; // Dynamically allocate memory for an array
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int num = 5;
    cout << "Original value: " << num << endl;

    increment(num);
    cout << "Value after incrementing (pass by value): " << num << endl;

    incrementByPointer(&num);
    cout << "Value after incrementing (pass by pointer): " << num << endl;

    int* arr = createArray(5);
    // Use the dynamically allocated array here

    delete[] arr; // Release the dynamically allocated memory

    int (*funcPointer)(int, int); // Pointer to a function taking two integers and returning an integer
    funcPointer = add; // Point to the 'add' function
    int result = funcPointer(5, 3); // Equivalent to calling 'add(5, 3)'
    cout << "Result of add function: " << result << endl;

    funcPointer = subtract; // Point to the 'subtract' function
    result = funcPointer(5, 3); // Equivalent to calling 'subtract(5, 3)'
    cout << "Result of subtract function: " << result << endl;

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
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

void memoryManagement()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(Memory Management in C++:

In C++, memory management is an essential aspect of programming, especially when working with dynamic data structures and allocating memory for variables. There are two primary areas of memory management in C++: Stack Memory and Heap Memory.

-->  Stack Memory:

Stack memory is a region of memory that stores local variables and function call information. It follows a Last-In-First-Out (LIFO) approach, where the last item pushed onto the stack is the first to be popped off. 
The stack is automatically managed by the compiler, and memory for local variables is automatically allocated and deallocated as the functions are called and return.

--> Example of stack memory:

int main()
{
    int x = 10; // 'x' is a local variable, and memory is allocated on the stack
    int y = 20; // 'y' is another local variable

    // When the main function returns, memory for 'x' and 'y' is automatically deallocated
    return 0;
}

--> Heap Memory:

Heap memory, also known as dynamic memory, is a region of memory that is manually managed by the programmer. It is used for allocating memory for variables and data structures during runtime. Memory allocated on the heap remains there until explicitly deallocated using the 'delete' operator.

--> Example of heap memory:

int main()
{
    int* ptr = new int; // Allocate memory for an integer on the heap
    *ptr = 42; // Store a value in the memory location pointed by 'ptr'

    // Don't forget to deallocate the memory to avoid memory leaks
    delete ptr;

    return 0;
}

--> Memory Leaks:

One common issue with memory management is memory leaks, which occur when memory that is dynamically allocated is not deallocated properly. Memory leaks can lead to a gradual reduction of available memory and eventually cause the program to crash due to insufficient memory.

To avoid memory leaks, always ensure that memory allocated using 'new' is deallocated using 'delete'. Additionally, consider using smart pointers or containers like 'std::vector' to manage memory automatically and safely.

--> Smart Pointers:

C++ provides smart pointers, which are objects that act like pointers but automatically manage the memory they point to. 
The most commonly used smart pointer is 'std::shared_ptr', which uses reference counting to ensure that memory is deallocated when it is no longer used.

--> Example of 'std::shared_ptr':

#include <memory>

int main()
{
    std::shared_ptr<int> ptr = std::make_shared<int>(42); // Create a shared pointer to an integer
    // When 'ptr' goes out of scope or is no longer referenced, the memory is automatically deallocated

    return 0;
}

Memory management is crucial for writing efficient and reliable C++ programs. Properly managing memory helps prevent memory-related bugs and ensures optimal performance.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Memory Management in C++:

#include <iostream>
using namespace std;

int main()
{
    // Stack Memory Example
    int x = 10; // 'x' is a local variable, and memory is allocated on the stack
    int y = 20; // 'y' is another local variable

    // Heap Memory Example
    int* ptr = new int; // Allocate memory for an integer on the heap
    *ptr = 42; // Store a value in the memory location pointed by 'ptr'
    cout << "Value in heap memory: " << *ptr << endl;

    // Don't forget to deallocate the memory to avoid memory leaks
    delete ptr;

    // Smart Pointers Example
    #include <memory>
    std::shared_ptr<int> smartPtr = std::make_shared<int>(42); // Create a shared pointer to an integer
    cout << "Value in smart pointer: " << *smartPtr << endl;
    // When 'smartPtr' goes out of scope or is no longer referenced, the memory is automatically deallocated

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
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

