#include<stdio.h>
#include<math.h>
int rev(int n){
if(n>=20 && n<30){
    printf( "twenty  ");
    n=n%20;}
  else if(n>=30 && n<40){
    printf( "thirty  ");
    n=n%30;}
  else if(n>=40 && n<50){
    printf( "fourty  ");
    n=n%40;}
  else if(n>=50 && n<60){
    printf( "fifty  ");
    n=n%50;}
  else if(n>=60 && n<70){
    printf( "sixty  ");
    n=n%60;}
  else if(n>=70 && n<80){
    printf( "seventy  ");
    n=n%70;}
  else if(n>=80 && n<90){
    printf( "eighty  ");
    n=n%80;}
  else if(n>=90 && n<100){
    printf( "ninty  ");
    n=n%90;}
if(n==1){printf( "one  ");}
if(n==2){printf( "two  ");}
if(n==3){printf( "three  ");}
if(n==4){printf( "four  ");}
if(n==5){printf( "five  ");}
if(n==6){printf( "six  ");}
if(n==7){printf( "seven  ");}
if(n==8){printf( "eight  ");}
if(n==9){printf( "nine  ");}
if(n==10){ printf( "ten  ");}
if(n==11){printf( "eleven  ");}
if(n==12){printf( "twelve  ");}
if(n==13){printf( "thirteen  ");}
if(n==14){printf( "fourteen  ");}
if(n==15){printf( "fifteen  ");}
if(n==16){printf( "sixteen  ");}
if(n==17){printf( "seventeen  ");}
if(n==18){printf( "eighteen  ");}
if(n==19){printf( "nineteen  ");}
}
void revv(int n){
int k,o;
while(n>99){
  if(n>=100 && n<1000) {
    k=n/100;
    if(k>=1&&k<=9)rev(k);
    printf( "hundred  ");
    n=n%100;}
  else if(n>=1000&&n<100000){
	k=n/1000;
	rev(k);
    n=n%1000;
    printf( "thousand  ");}
  else if(n>=100000&&n<10000000){
  	o=n/100000;
  	rev(o);
  	printf("lakh  ");n=n%100000;}
}
if(n<=99)rev(n);
}
void main(){
long long n,num,c=0,j,k=0,numb,number;
printf("enter the number");
scanf("%lld",&n);
num=n;
while(num>0){
	c=c+1;
	num=num/10;}
	num=(c)%7;
j=pow(10,c-num);number=num;
while(c>=7){k=k+1;
	if(k==1){num=n/j;revv(num);	printf("crore  ");n=n%j;c=c-number;}
	else if(k>1){num=(n/pow(10,c-7));revv(num);numb=pow(10,c-7);n=n%numb;c=c-7;if(c>=7)printf("crore  ");}}
	if(n<10000000)revv(n);printf("\n");
	}
