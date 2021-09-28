package testPackge;

import java.util.Scanner;

public class testJava {

	public void binerySearch(int key, int num[])
	{
		int mid = 0;
		int left = 0;
		int right = num.length - 1;
		
		
		
		while (right >= left)
		{
			mid = (right + left)/2;
			
			if(key == num[mid])
			{
				
				System.out.println(key +"는 index에 있습니다.");
				
			}
			
			
			
			if(key< num[mid])
			{
				right = mid -1;
			}
			else 
			{
				left = mid +1;
			}
			
			
		}
		
		if(mid <= num.length -1 && num[mid] <= key )
		{
			while(mid <= num.length -1 && num[mid] <= key )
			{
				mid++;
			}
			
			
			mid = mid *(-1) -1;
			System.out.println("삽입포인트는" + mid + "입니다.");
		
		}
		
	
	}
	public static void main(String[] args) 
	{
		int count = 0;
		int[] num;
		int key;
		testJava and = new testJava();
		
		
		Scanner sc = new Scanner(System.in);
		System.out.print("배열의 개수는? :");
		count = sc.nextInt();
		num = new int[count];
		
		System.out.print(count + "개의 숫자를 입력하세요:");
		for(int i = 0; i<count; i++)
		{
			num[i] = sc.nextInt();
			
		}
		
		System.out.print("검색할 숫자를 입력하세요:");
		key = sc.nextInt();
		
		and.binerySearch(key, num);
		
		
	}
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
package test;

import java.util.Arrays;
import java.util.Scanner;

import testPackge.testJava;

public class testman {
	
	public static void main(String[] args)
	{
		int[] num;
		int count = 0;
		int key;
		testJava and = new testJava();
		
		Scanner sc = new Scanner(System.in); 
		System.out.print("배열의 개수는?: ");
		
        count = sc.nextInt(); 
        num = new int[count];
        
        System.out.println(count + "개의 숫자를 입력하세요:");
        
        for(int i = 0; i<count; i++)
		{
			num[i] = sc.nextInt();
			
		}
       
        System.out.print("검색할 숫자를 입력하세요:");
		key = sc.nextInt();
		
		int idx = Arrays.binarySearch(num,key); 
		
		if(idx < 0) 
		{
			System.out.println(key +"는 index 안에 없습니다.");
			System.out.print("삽입포인트는" + idx + "입니다.");
		}
		else
		{
			System.out.println(key +"는 index 안에 있습니다.");
			
		}
	}

}
