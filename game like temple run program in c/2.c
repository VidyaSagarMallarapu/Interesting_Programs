#include<stdio.h>
#include<string.h>
main()
{
    int count=0;
    char a[100];
    gets(a);
    int i;
    for(i=0;a[i];++i)
        {
        int k,numb=0;
        for(k=i;48<=a[k]&&a[k]<58;++k)
            {
            numb=numb*10+a[k]-48;
            }
            i=k;
            count+=numb;
        }
    printf("%d\n",count);
        
}
