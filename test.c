#include <stdio.h>
#include <math.h>

int main () {
    float a, b, c;
    float StartX, EndX, dX;
    float F, x;
    
    printf("Vvedite chisla: \n");

printf("\ta = "); scanf("%f", &a);
printf("\tb = "); scanf("%f", &b);
printf("\tc = "); scanf("%f", &c);
printf("\tX Start. = "); scanf("%f", &StartX);
printf("\tX End. = "); scanf("%f", &EndX);
printf("\tdX = "); scanf("%f", &dX);

for (x = StartX; x <= EndX; x += dX){	
if (x + 10 < 0 && b != 0){
	F = a * (float)pow(x, 2) - c * x  ;
} else 
if (x + 10 > 0 && b == 0){ 
F = (x - a) / (x - c);
}  else {
	F = -x / (a - c);
}

if (((long)floor(a) | (long)floor(b) & (~((long)floor(a) | (long)floor(c)))) != 0){
	printf("x = %.2f\tF = %.0f\n", x, F);
}

else{
	printf("x = %.2f\tF = %.2f\n", x, F);
}

}

return 0;
}