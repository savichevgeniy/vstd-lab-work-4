#include <iostream>

using namespace std;

class Task4
{
private:
	double sum;
	int mas[17];

public:
	void Output()
	{
		sum = 0;
		cout << "�������� �������:\n";
		for (int i = 0; i < 17; i++)
		{
			mas[i] = 10 + rand() % 90;
			cout << mas[i] << endl;
			sum += mas[i];
		}
		cout << "����� ��������� ������� = " << sum << endl;

	}
};
