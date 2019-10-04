// oop_ex2.java: A simple Java program.

import java.io.*;

class test
{
	public static void main(String[] args)
	{
		int[] data = {1, 4, 7};
		
		System.out.println("The sum is " + addArray(data));
	}
	
	public static int addArray(int[] a)
	{
		int result = 0;
		
		for(int i=0; i<a.length; i++)
			result += a[i];
		
		return result;
	}
}