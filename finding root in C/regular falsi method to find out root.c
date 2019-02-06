#include<math.h>
void main()
{
printf("enter a,b,c,d values to ax^3+bx^2+cx+d\n");
int a,b,c,d,i,small,s,sma,big;
scanf("%d %d %d %d",&a,&b,&c,&d);
for(i=-20;i<21;++i){
	s=a*pow(i,3)+b*pow(i,2)+c*i+d;
	if (i==-20)big=s;
	if(s<=0){
		if(s>big){big=s;
		}
	}
	if(big<0 && s>0)break;
}
sma=i;
for(i=20;i>-21;--i){
	s=a*pow(i,3)+b*pow(i,2)+c*i+d;
	if (i==20)small=s;
	if(s>=0){
		if(s<small){small=s;
		}
	}
	if(small>0&&s<0)break;}
int ii;float smal=big,bigg=small,smallat=i,bigat=sma,sal,sall;
printf("0'th  interval( %f  , %f ) \n\n",smallat,bigat);
for(ii=0;ii<20;++ii){
	sal=(smallat*bigg-bigat*smal)/(bigg-smal);
	sall=a*pow(sal,3)+b*pow(sal,2)+c*sal+d;
	if(sall<0){smallat=sal;smal=sall;}
	if(sall>0){bigat=sal;bigg=sall;}	
	if(ii<9)printf("%d   interval( %f  , %f )   and   f(x%d) = %f\n",ii+1,smallat,bigat,ii,sall);
	if(ii>=9)printf("%d  interval( %f  , %f )   and   f(x%d) = %f\n",ii+1,smallat,bigat,ii,sall);
	
}}














