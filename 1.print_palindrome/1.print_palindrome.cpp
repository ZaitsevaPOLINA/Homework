#include <iostream>
#include <cmath>
using namespace std;

void povorot(int k)
{
	while (k>0)
	{
		cout << k % 10;
		k = k / 10;
	}
}
void print_palindrom(int n)
{
    cin >> n;
	if (n % 2 == 0)
	{
		int k = pow(10, n / 2 - 1);
		k=k-k%9+9;
		while (true)
		{
			k+=9;
			if (k> pow(10,n/2)-1) break;
			cout << k;
			povorot(k);
			cout << " ";
		}
	}
	else
	{
	   int k=pow(10,n/2);
	   while (true)
		{
			k+=9;
			if (k> pow(10,n/2)-1) break;
			cout << k;
			povorot(k);
			cout << " ";
		}
}
	int main()
{
    int n;
	print_palindrom(n);
	return 0;
}
