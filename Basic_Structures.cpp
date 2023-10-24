#include <iostream>
using namespace std;

//function declaration
int addition(int a, int b);

int main()
{
    int num1 = 2; //to store first number
    int num2 = 3; //to store second number
    int add; //to store addition

    //call function
    add = addition(num1, num2);

    //print addition
    cout << "Addition is: " << add << endl;

    return 0;
}

//function definition
int addition(int a, int b)
{
    return (a + b);
}