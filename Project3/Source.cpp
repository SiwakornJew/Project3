#include<iostream>
using namespace std;
int main()
{
	int sum=0,num;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "INPUT = ";
		cin >> num;
		if (num > sum)
			sum = num;

	}
	cout << "The most number is = " << sum;
}