#include <stdio.h>  // responsible for almost anything..
#include <stdlib.h> // responsible for what?
int comp(int *a ,int *b)
{

    if(*a>*b)
        return 0;
    return 1;
}
int main()
{
    int arr[2000],size,l,s;
    int register i;
    int register count;
    scanf("%d",&size);
    while(size>0)
    {
        count = 0;
        for(i=0;i<size;i++)
            scanf("%d",arr+i);

        qsort(arr,size,4,comp);

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
        printf("%d\n",count);
        scanf("%d",&size);
    }
    return 0;
}
