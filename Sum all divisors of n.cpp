#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, tong;
	do
	{
		cout << "Nhap n:";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap lai n";
		}
	} while (n <= 0);
	tong = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			int j = n / i;
			if (i == j) 
			{
				tong += i;
			}
			else 
			{
				tong += i + j;
			}
		}
	}
	cout << "Tong cua cac uoc la: " << tong;

	return 0;
}