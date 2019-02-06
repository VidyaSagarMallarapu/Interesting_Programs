#include<stdio.h>
#include<string.h>
main()
{
    char a[100],aa[100],number;
    gets(a);
    int i,ii,j,len=0,k;
    for(i=0;a[i++];);
  
   i=i-2;
   if(strlen(a)==1)printf("NONE\n");
   else{
   for(ii=i;ii;--ii)
      
     { if(a[ii]>a[ii-1])break;}
     k=ii-1;
     char tem=a[k];
     if(ii==0){printf("NONE\n");}
     else{
  for(j=ii-1;j<=i;j++)
    {
        aa[len++]=a[j];
        }
         
        
  
    for(j=0;j<len;++j)
    {
         for(ii=j+1;ii<len;++ii)
        {
            if(aa[j]>aa[ii])
            {
                number=aa[j];
                aa[j]=aa[ii];
                aa[ii]=number;
            }
        }
    }
    for(j=0;j<len;++j){if(tem<aa[j])break;}
    tem=aa[j];
    tem=aa[j];for(ii=0;ii<k;++ii)printf("%c",a[ii]);
    printf("%c",tem);
   
    for(ii=0;ii<len;++ii)
        if(aa[ii]!=tem)printf("%c",aa[ii]);
    printf("\n");
    }
    }
    }
        
    
    
      

