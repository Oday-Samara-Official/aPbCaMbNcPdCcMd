#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int var_1, var_2;
    float var_3, var_4;
    scanf("%d %d", &var_1,&var_2);
    scanf("%f %f", &var_3,&var_4);
    printf("%d %d\n", var_1+var_2,var_1-var_2);
    printf("%.1f %.1f", var_3+var_4,var_3-var_4);
    return 0;
}
