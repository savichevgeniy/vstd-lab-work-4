#include <iostream>

using namespace std;

class Task3
{
private:
	const unsigned  Xmax = 50, Xmin = 1, h = 5; unsigned M[10], X[500], t;

	unsigned i, j, u, N;
	float MX, DX;
	
public:
	void Output()
	{
		printf("Ведите N:");
		scanf_s("%u", &N);
		for (i = 0; i < N; i++)
			X[i] = (double)rand() / (RAND_MAX + 1) * (Xmax - Xmin + 1) + Xmin;
		for (i = 0; i < 10; i++) M[i] = 0;
		for (i = 0; i < N; i++)
			M[(X[i] - Xmin) / h]++;
		for (i = 0; i < 10; i++)

		{

			printf("%3d - %3d%3d ", i*h + 1, (i + 1)*h, M[i]);
			for (j = 0; j < M[i]; j++)

				printf("X"); printf("\n");

		}
		MX = 0;
		for (i = 0; i < N; i++) MX = MX + X[i];
		MX = (float)MX / N; printf("\nMX = %lf\n", MX);

		DX = 0;

		for (i = 0; i < N; i++) 
			DX = DX + (X[i] - MX)*(X[i] - MX);
		DX = (float)DX / N; printf("DX = %lf\n", DX);
	}
};
