#include <stdio.h>  // responsible for almost anything..
#include <stdlib.h> // responsible for what?
int comp(int *a ,int *b)
{

    if(*a>*b)
        return 1;
    return 0;
}
int main()
{
    int arr[2000],size,l,s;
    int register i;
    long long register count;
    scanf("%d",&size);
    while(size>0)
    {
        count = 0;
        for(i=0;i<size;i++)
            scanf("%d",arr+i);

        qsort(arr,size,sizeof(int),comp);

        for(i=size-1;i>1;i--)
        {
            l=i-1;
            s=0;
            while(s<l)
            {
                if(arr[s]+arr[l]<arr[i])
                {
                    count += l-s;
                    s++;
                }
                else
                    l--;
            }

        }
        printf("%lld\n",count);
        scanf("%d",&size);
    }
    return 0;
}
