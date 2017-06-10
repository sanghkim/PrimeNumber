#include <iostream>
using namespace std;

bool isDevidable (int Num, int j);
bool isPrimeNumber (int Num);

int main() {
	// Search for prime numbers
	int MaxNumber = 10000;
	for (int i=2; i<MaxNumber ; i++)
	{
		if(isPrimeNumber(i))
		{
			cout << "Prime number :"<<i<<'\n';
			
		}
	}
	return 0;
}

bool isPrimeNumber(int Num)
{
	for(int j=2;j<Num;j++)
	{
		if(isDevidable(Num,j))
		{
			return false;
		}
	}
	return true;
}

bool isDevidable(int Num, int j)
{
	return (Num%j == 0);
}
