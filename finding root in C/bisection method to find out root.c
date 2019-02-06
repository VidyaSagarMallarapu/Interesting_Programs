#include<math.h>
void main(){
int a,b,c,i,d,k,e,f,y,t,kk;double w,tt,small,big,percent;
printf("enter the variable a,b,c,d \n for the equation ax^3+bx^2+cx+d\n To find the root of the equation\n\n");
scanf("%d %d %d %d",&a,&kk,&b,&c);
for (i=-20;i<21;i++){
	d=a*pow(i,3)+kk*pow(i,2)+b*i+c;
	if(i==-20)k=d;
	else if(d<=0){
			if(d>k)
				k=d;}
	else if(k<0 && d>0){y=i;break;}}
for (i=20;i>-20;--i){
	e=a*pow(i,3)+kk*pow(i,2)+b*i+c;
	if (i==20)f=e;
	if(e>=0){
			if(e<f)
				f=d;}
	if(f>0 && e<0){t=i;break;}}
printf("First   interval:( %d , %d ) \n\n",t,y);
small=t;big=y;
for (i=0;i<=20;++i){
	w=(small+big)*1.0/2.00000;
	tt=a*pow(w,3)+kk*pow(i,2)+b*w+c;
	if (tt<0)small=w;
	else if(tt>0)big=w;
	if(big>small)percent=((big-small)/big*1.0)*100;
	printf("%d  interval:( %llf , %llf )  f(x%d)=%f  per error :%f\n\n",i+1,small,big,i,tt,percent);}}
