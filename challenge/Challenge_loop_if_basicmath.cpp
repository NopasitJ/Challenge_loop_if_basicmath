#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	int n = 0;
	double s = 0;
	double z = 0;
	double av, SD;
	printf("Input = ");
	scanf_s("%d %d", &a,&b);
	if (a > b)
	{
		for (double i = a; i > b - 1; i--)
		{
			printf("%.0lf ", i);
			s += i;
			z += (i * i);
			n += 1;
		}
	}
	else if (a < b)
	{
		for (double i = a; i < b + 1; i++)
		{
			printf("%.0lf ", i);
			s += i;
			z += (i * i);
			n += 1;
		}
	}
	av = s / n;
	SD = sqrt(((n * z) - (s * s)) / (n*(n - 1)));
	printf("\n");
	printf("Average = %.1lf \n", av);
	printf("SD = %.2lf", SD);


	return 0;
}