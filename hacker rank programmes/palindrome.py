
a=raw_input()
a=a.split(" ")
num=int(a[0])
changes=int(a[1])
arr=list(raw_input())
l=0;
r=num-1;
palin=[]
for i in arr:palin.append(i)
while(l<r):
    if(palin[l]!=arr[r]):
        max=palin[l];
        if(palin[r]>max):max=palin[r]
        palin[r]=palin[l]=max; 
        changes-=1;
    l+=1;
    r-=1;
if(changes<0):print("-1")
else:
    l=0;
    r=num-1;
    while(l<=r):
        if(changes>=1 and l==r ):
            palin[l]=='9'
        if(palin[l]<'9'):
            if(changes>=2 and palin[l]==arr[l] and palin[r]==arr[r] ):
                palin[l]=palin[r]='9';
                changes-=2
            elif(changes>=1 and (palin[l]!=arr[l] or palin[r]!=arr[r]  )):
                palin[l]=palin[r]='9';
                changes-=1;
        l+=1;r-=1
    arr=""
    for i in palin:
        arr+=i;
    print arr


    """

Palindromes are strings that read the same from the left or right, for example madam or 0110.

You will be given a string representation of a number and a maximum number of changes you can make. Alter the string, one digit at a time, to create the string representation of the largest number possible given the limit to the number of changes. The length of the string may not be altered, so you must consider
's left of all higher digits in your tests. For example is 0110 valid, 0011 is not. 

    """