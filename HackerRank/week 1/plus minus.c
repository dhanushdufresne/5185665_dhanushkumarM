#include <stdio.h>
int main()
{
    int n,i;
    int number; 
    int positive=0;
    int negative=0;
    int zero=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        if(number>0)
            positive++;
        else if(number<0)
            negative++;
        else
            zero++;
    }
    printf("%.6f\n",(double)positive/n);
    printf("%.6f\n",(double)negative/n);
    printf("%.6f\n",(double)zero/n);
    return 0;
}