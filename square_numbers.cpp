#include <iostream>

using namespace std;

double square(double x) 
{   //square a double type number
	return x*x;
}

double y;
int main()
{
	cout<<"Enter a double number to square: \n";// Ask the user to input number to be squared
	cin>>y;// store input in a variable y
	cout<<"The required square number is \t"<<square(y) <<"\n";// Print square of number y using the square function defined 
	}
