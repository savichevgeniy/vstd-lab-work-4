#include <iostream>

using namespace std;

class Task2
{
private:
	double x, y, k, xk;
	double masY[10];
	double masX[10];

	double Calculate()
	{
		return 1.8 * pow(x, 2) - sin(10 * x);
	}

public :
	void Output()
	{
		
		k = 0.2;
		xk = 2.4;
		y = 0;
		x = 0;
		while (x < xk)
		{
			for (int i = 0; i < xk; i++)
			{
				y += Calculate();
				masY[i] = y;
				x += k;
				masX[i] = x;
				cout << "x =   " << masX[i] << "     y(x) = " << masY[i] << endl;
			}
		}
	}
};
