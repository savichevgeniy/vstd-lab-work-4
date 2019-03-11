#include <iostream>

using namespace std;

class Task1
{
private:
	double x, y, k, s, rez;

	double Calculate()
	{
		return 1.8 * pow(x, 2) - sin(10 * x);
	}
public:
void Output()
{
	
	cout << "¬ведите значение шаг:"; cin >> k;
	x = 0.2;
	y = 0;
	while (x <= 2.2)
	{

		y += Calculate();
		s = y;
		s += y;
		rez = x - s;
		x += k;
		cout << "x =   " << x << "     s(x) = " << s << "     y(x) = " << y << "      y(x) - s(x) = " << rez << endl;

	}
}
};