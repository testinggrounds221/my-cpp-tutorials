#include <iostream>
#include <cmath>
using namespace std;

int num1,num2;
void arrFunc();
void print(string msg)
{
    cout << msg;
}

void println(string msg = "")
{
    cout << msg << endl;
}

int getInput()
{
    cout << "Enter First Number : ";
    cin >> num1;

    cout << "\nEnter Second Number : ";
    cin >> num2;

    arrFunc();

}


int main()
{
    println("Starting Main");

    // getInput();
    arrFunc();

    println();
    print("Ending Main");
}
