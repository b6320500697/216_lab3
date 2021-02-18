#include <stdio.h>
int main()
{
    int n,n2,i;
    scanf ("%d",&n);
    if (n==1)
        {
            printf ("1\n");
        }
    for(i=2;n!=1;i++)
    {

        while(n%i == 0)
        {
            n = n/i;
            printf("%d\n",i);
        }
    }
    printf ("0");
    return 0;
}
