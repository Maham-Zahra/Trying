// GItt.cpp :
#include<iostream>
using namespace std;
int main()
{
	int a, b,sum=0,avg=0;
	cout << "Enter two numbers  ";
	cin >> a >> b;
	sum = a + b;
	cout << "Sum= " << sum;
	avg = sum / 2;
	cout << "Average= " << avg;
	cout << "These are the sum and averages of the number you've entered! ";
}