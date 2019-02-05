#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i=1; i<=T; i++)
    {
        int num1, den1;
        int num2, den2;
        scanf("%d%*c%d %d%*c%d", &num1,&den1,&num2,&den2);

        int num3, den3;
        den3 = gcd(den1,den2);
        den3 = (den1*den2)/den3;
        num3 = (num1)*(den3/den1) + (num2)*(den3/den2);
        printf("Case %d: %d/%d\n", i, num3, den3);
    }

    return 0;
}
