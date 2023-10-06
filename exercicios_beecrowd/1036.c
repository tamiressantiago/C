// BEECROWD 1036 - Fórmula de Bhaskara

#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, delta, x, x1, x2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = sqrt(pow(b, 2) - 4*a*c);
	
	
	if (a == 0){
		printf("Impossivel calcular\n");
	}
	else if (delta > 0){
		x1 = (-b + delta) / (2*a);
		x2 = (-b - delta) / (2*a);
		printf("R1 = %.5lf\n", x1);
		printf("R2 = %.5lf\n", x2);
	}
	else{
		printf("Impossivel calcular\n");	
	}
	
	return 0;
}