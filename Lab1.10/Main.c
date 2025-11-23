#include <stdio.h>

int main()
{

    int clearancelLevel, age, isActive;

    printf("Please fill in 1.ClearanceLevel , 2.age ,3.isActive (1 = Active , 2 = Inactive): ");

    if (scanf("%d %d %d", &clearancelLevel, &age, &isActive) != 3)
    {
        return 1;
    };

    int CL = clearancelLevel;

    if ((CL == 3 && isActive == 1) || (CL == 2 && age >= 25 && isActive == 1))
    {
        printf("Access GRANTED");
    } else {
        printf("Access DENIED");
    }

    return 0;
}