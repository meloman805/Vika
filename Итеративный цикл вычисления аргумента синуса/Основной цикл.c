#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main(void)
{
	double Razr = pow(2, 9);
	float pina2 = pow(2, 9);
	float  PZU[512]={0};
	float fc = 1000000;
	int i=0;
	for ( i = 0; i < Razr; i++)
	{
		float x = (1/Razr)*i;
		float eps = 0.000001;
		float n = 1;
		float sum = 0;
		float q = x;
		do
		{
			sum += q;
			q *= (-1) * x * x / (2 * n) / (2 * n + 1);
			++n;
		} while (fabs(q) >= eps);
		PZU[i] = sum;
		printf("Znachenie sin(%f)=%f,i=%d\n", x, PZU[i],i);
	}
	
	return 0;
}