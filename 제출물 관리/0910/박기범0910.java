package ch_1_Binary_Search;

import java.util.Arrays;
import java.util.Scanner;

public class Binary_Search {
	
	public int BinarySearch(int nums[], int key)
	{
		 key 값이 배열의 최댓값 보다 클 경우
		if(key  nums[nums.length - 1])
		{
			return nums.length  -1 - 1;
		}
		int left = 0, right = nums.length - 1, mid = 0;
		while(left = right)
		{
			mid = (left + right)  2;
			
			if(key == nums[mid])
			{
				System.out.println(key값을 찾았습니다.);
				return mid;
			}
			else if(key  nums[mid])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		mid = mid  (-1) - 1;
		return mid;
	}
	
	public void BubbleSort(int nums[])
	{

		for(int i = 0; i  nums.length; i++)
		{
			for(int j = 0; j  nums.length - (i + 1); j++)
			{
				if(nums[j]  nums[j + 1])
				{
					int temp = nums[j];
					nums[j] = nums[j + 1];
					nums[j + 1] = temp;
				}
			}
		}
	}
	
	public static void main(String[] args) 
	{
		 TODO Auto-generated method stub
		int[] nums = new int[10];
		int key = 1;

		Binary_Search BS = new Binary_Search();
		
		Scanner sc = new Scanner(System.in);
		System.out.println(값 10개를 오름차순으로 입력하세요);
		
		for(int i = 0; i  nums.length; i++)
		{
			nums[i] = sc.nextInt();
		}
		
		BS.BubbleSort(nums);
		
		System.out.print(찾을 key 값을 입력하세요  );
		key = sc.nextInt();
		
		System.out.println(이진탐색 직접 구현);
		
		int idx = BS.BinarySearch(nums, key);
		if(idx  0)
		{
			System.out.println(key값이 없습니다.  + 삽입 포인트   + idx);
		}
		
		idx = Arrays.binarySearch(nums, key);
		System.out.println(Arrays.binarySearch 구현);
		
		if(idx  0)
		{
			System.out.println(key값이 없습니다. 삽입 포인트   + idx);
		}
		else
		{
			System.out.println(key값을 찾았습니다.);
		}
	}

}

