#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test,arr[100001],size,i,count;
    scanf("%d",&test);
    while(test--)
    {
        count=0;
        for(i=0;i<100001;i++)
            arr[i]=0;
        scanf("%d",&size);
        while(size--)
        {
            scanf("%d",&i);
            arr[i]++;
        }
        for(i=0;i<100001;i++)
            if(arr[i]>0)
                count++;
        printf("%d\n",count);

    }
    return 0;
}
