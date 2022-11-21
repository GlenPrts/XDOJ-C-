#include <stdio.h>
double function(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lf", function(n));
    return 0;
}
double function(int n)
{
	double A = 0; 
	for(;n > 0;n--)
    {
		A = 1 / (1 + A) ;
	}
	
	return A;
}