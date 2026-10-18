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

void print_array(const char *title, const double *arr, int size)
{
    printf("%s [", title);
    for (int i = 0; i < size; i++) {
        printf("%.15g", arr[i]);
        if (i < size - 1) printf(" ");
    }
    printf("]\n");
}

int main(void)
{
    int group = 79;
    int variant = 22;
    double course = 4;

    int orig_group = group;
    double orig_course = course;
    int orig_variant = variant;

    Calculations(&group, &variant, &course);

    
    double arr[] = {1, 2, group, variant, course};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_array("Orig masiv:", arr, size);

    
    arr[0] = orig_group;
    arr[1] = orig_course;

    
    for (int i = 0; i < size; i++)
        arr[i] += orig_variant;

    print_array("Masiv pislya zmin:", arr, size);
    return 0;
}
