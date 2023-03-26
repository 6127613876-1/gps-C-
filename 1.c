#include <stdio.h>
float bmi_value(float height,float weight,float BMI)
{
    if (weight<=0 && height<=0)
    {
        printf("Enter valid input");
    }
    else
    {
        BMI=weight/(height*height);
        printf("%.2f",BMI);
    }
}
