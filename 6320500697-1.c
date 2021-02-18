#include<stdio.h>
int main()
{
    int i,j,k,max=0,win=0,total;
    for(i=1;i<=5;i++)
    {
        total=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&k);
            total+=k;
        }
        if(total>max)
        {
            max=total;
            win=i;
        }
    }
    printf("%d %d\n" ,win,max);

    return 0;
}
