/*
*Name: Joshua Sanchez
*Program Name: Calculator
*Date: 9/12/24
*Extra: Line 38 - doing all the math again with one last number entered by the user.
*/

#include <iostream>
using namespace std;

int main()
{
//creating the variables/values
int num1;
int num2;
cout << "Enter your first number: " << endl;
cin >> num1;
cout << "Enter your second number: " << endl; 
cin >> num2;

//doing the math
int add = num1 + num2;
int sub = num1 - num2; 
int times = num1 * num2;
int divide = num1 / num2;
int mod = num1 % num2; 
int in = ++num1;
int de = --num2; 

//displaying the math solutions
cout << "Sum: " << add << endl;
cout << "Difference: " <<  sub << endl;
cout << "Multiply: " << times << endl;
cout << "Quotient: " << divide << endl; 
cout << "Modulus: " << mod << endl;
cout << "First number incremented by 1: " << in << endl;
cout << "Second number decremented by 1: " << de << endl; 

//extra
cout << "Enter one last number: " << endl;
int extranum;
cin >> extranum; 

int add2 = extranum + add; 
int sub2 = extranum - sub;
int times2 =  extranum * times;
int divide2 = extranum / divide;
int mod2 = extranum % mod;

cout << "Sum: " << add2 << endl;
cout << "Difference: " <<  sub2 << endl;
cout << "Multiply: " << times2 << endl;
cout << "Quotient: " << divide2 << endl; 
cout << "Modulus: " << mod2 << endl;
}
