#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, R;
    
    scanf("%d%d", &A, &B);
    
    while (B)
    {
        R = A % B;
        A = B;
        B = R;
    }
    
    printf("%d\n", A);

    return 0;
}

