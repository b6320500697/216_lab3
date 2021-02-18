#include<stdio.h>
int main()
{
    int n,i,p,a,time[48]={0},max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&a);
        time[p-1]+=a;
    }
    max=0;
    for(i=0;i<48;i++)
    {

        if(max<time[i])
        {
            max=time[i];
            i;
        }
    }
    printf("%d %d",i,time[i]);
  return 0;
}
