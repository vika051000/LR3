#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	a = pow(-1, i) * (i + 1) / (pow(i, 2) + 2 * i + 1);
	while (fabs(a) > eps)
	{
		a = pow(-1, i) * (i + 1) / (pow(i, 2) + 2 * i + 1);
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	}
	return ++i;
}