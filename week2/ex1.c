#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int integ = INT_MAX;
    float flo = FLT_MAX;
    double doub = DBL_MAX;

    printf("Sizes:\n");
    printf("\tint: %lu\tfloat: %lu\tdouble: %lu\n", sizeof(integ), sizeof(flo), sizeof(doub));

    printf("Values:\n");
    printf("\tint: %d\tfloat: %f\tdouble: %f\n", integ, flo, doub);

    return 0;
}