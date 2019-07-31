
import java.util.*;
import java.io.*;
class A
{

    //sorting order 
    private final static TreeMap<Integer, String> map = new TreeMap<Integer, String>();

    static {

        map.put(1000, "M");
        map.put(900, "CM");
        map.put(500, "D");
        map.put(400, "CD");
        map.put(100, "C");
        map.put(90, "XC");
        map.put(50, "L");
        map.put(40, "XL");
        map.put(10, "X");
        map.put(9, "IX");
        map.put(5, "V");
        map.put(4, "IV");
        map.put(1, "I");

    }

    public  static String toRoman(long number1)
    {
    	int number=(int)number1;



        //floorkey returns the less than or equal value to it.
        int l =  map.floorKey(number);
        if ( number == l ) {
            //map.get return value of matching key
            return map.get(number);
        }
        return map.get(l) + toRoman(number-l);
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long number=sc.nextInt();
        while(number>0&&number<4000)
        {
            String roman=toRoman(number);
            int leastbase=findLeastBase(roman);

            number=findDecimalofPericularBase(roman,leastbase);

        }
        System.out.print(number);
    }

    private static int findLeastBase(String roman) {
        int c=roman.charAt(0);
        for (int i=1;i<roman.length();++i)
        {
            if(roman.charAt(i)>c)
                c=roman.charAt(i);
        }
        
         return c-54;
    }
    private static long findDecimalofPericularBase(String roman, int leastbase) {
        long count=0,increment=0;
            for(int i=roman.length()-1;i>-1;--i)
            {
                count+=(roman.charAt(i)-55)*Math.pow(leastbase,increment++);
            }
            return count;
}
}
