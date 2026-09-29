#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    float F;
    printf("==================\n");
    printf("  C            F\n");
    printf("==================\n");

    for(C=30; C<=50; C++){
            F= (9/5)*C +32;
    printf("  %d           %f\n", C, F);

    }
    return 0;
}
