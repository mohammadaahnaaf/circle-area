#include<stdio.h>
float area(float x);
float area(float x)
{
	float area;
	area = 3.14159 * x * x;
	return(area);
}
int main()
{
	float r, a;
	printf("Enter a value for radious\n");
	scanf_s("%f", &r);
	a = area(r);
	printf("area = %f\n", a);
}