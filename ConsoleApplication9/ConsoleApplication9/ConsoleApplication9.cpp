#include "pch.h"  
#include "math.h"  
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	setlocale(0, "");

	int x;
	float y;
	int sum = 0;
	cout << "Введите x=";
	cin >> x;
	if (pow(x, 6) != 0);
	for (int k = 1; k < 11; k++)
	{
		sum += sin(k*x) + (2 * x);
	}
	y = sum / (pow(x, 6) + 5);
	cout << "y=" << y << "\n";
	system("pause");
	return 0;
}
