
import java.util.*;
import java.io.*;
class A

{
	static int binaryS(int a[],int i,int j,int n)
	{
		if(i<=j)
		{
			int mid=i+(j-i)/2;
			if(a[mid]==n)
			{
				return mid;
			}
			if(a[mid]>n)
			return	binaryS(a,i,mid-1,n);
			 return binaryS(a,mid+1,j,n);
		 }
		 	return -1;
		 
	}
	public static void main(String[] args)
	 {
		int a[]={1,2,3,4,5,6,7,8,11,13};
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println(binaryS(a,0,a.length-1,n));
		
	}
}