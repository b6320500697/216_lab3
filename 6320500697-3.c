#include <stdio.h>
int main()
{
    int n,n2,i=2;
    scanf ("%d",&n);
    do
    {
        if (n==1)
        {
            printf ("0");
            break;
        }
        else if(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;
        }
        else
        {
            i++;
        }
    }
    while (1);
    return 0;
}
