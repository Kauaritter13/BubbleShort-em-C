#include <stdio.h>
#define MAX 10

int main (void)
{
    int num[MAX],temp;
    for(int i=0;i<MAX;i++)
    {
        printf("Digite o  %d numero: ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<MAX-1;i++)
    {
        for(int k=0;k<MAX-1;k++)
        {
            if(num[k]>num[k+1])
            {
                temp = num[k];
                num[k] = num[k+1];
                num[k+1] = temp;
            }
        }
    }
    for(int i=0;i<MAX;i++)
    {
        printf("%d ",num[i]);
    }
}
