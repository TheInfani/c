#include <stdio.h>
#include <math.h>

void Calculations(int *group, int *variant, double *course)
{
    int sum = *group + *variant + (int)(*course);
    int product = *group * *variant * (int)(*course);

    *group = sum;
    *variant = product;
    *course = sin(sum);
}

int main(void)
{
    int group = 79;  
    int variant = 22;   
    double course = 4; 

    printf("Startovi znachenya: group = %d, variant = %d, course = %g\n",
           group, variant, course);

    Calculations(&group, &variant, &course);

    printf("Novi znachenya: group = %d, variant = %d, course = %f\n",
           group, variant, course);
    return 0;
}
