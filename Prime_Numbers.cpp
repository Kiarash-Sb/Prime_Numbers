#include<iostream>
using namespace std;
int main()
{
	for (int i = 3; i < 100; i += 2)
		{int count = 0;
		for (int k = 2; k < i / 2; k++)
			{if (i % k == 0)
				count++;
			}
		if (count == 0)
			cout << "Odd prime numbers : " << i << endl;
		}
		cout << "Even prime number : " << "2";
}
