
import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch_1 {
	
	
		public void BinaryArray(int key,int[] a) {
			
			 int left = 0;
			 int right = a.length-1;
			 int u=0;
			 
			 while (left <= right) { 
		       		        
				 int mid = (right + left) / 2;
		            if (key == a[mid])
		            {
		                System.out.println("key는 index에 있습니다.");
		                break;
		            }
		            else if (a[mid] < key)
		             {
		                left = mid + 1;
		             }
		            else if (a[mid] > key)
		            {
		                right = mid - 1;
		            } 
		            u = (mid+1) * (-1) + (-1);
			     }	
					 
			 System.out.println("삽입 포인트 : "+u);
	}


		
	
			public static void main(String[] args) {
			
				
				int[] a = new int[10];
				 int key = 0;		
				
				Scanner sc = new Scanner(System.in);
			    
			    BinarySearch_1 Bc = new BinarySearch_1();
			    
			    	System.out.print(" 10 개의 숫자를 입력하세요! : ");
		    	
					for (int i = 0 ; i < 10 ; i++) {
						a[i] = sc.nextInt();		
					}
					   Arrays.sort(a);
				        
				        
				        
					System.out.print(" key 입력 : ");
					key = sc.nextInt();
				
			
					Bc.BinaryArray(key, a); 
															        
								     
					}

			}
