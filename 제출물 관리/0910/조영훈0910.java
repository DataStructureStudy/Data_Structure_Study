import java.util.Scanner;

public class binarySearch{

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("target : ");
        int target = sc.nextInt();
        int[] arr = {1,3,5,7,9,11,13,15,17,19,21};
        int first = 0;
        int last =  arr.length - 1;
        int mid = 0;

        while(arr[mid]!=target)
        {
            if(first>last)
            {
                System.out.println("target이 존재하지 않습니다. 삽입포인트 : "+(last * (-1) - 1));
                return;
            }
            mid = (first+last)/2;
            if (arr[mid]==target)
            {
                System.out.println("target의 idx 값 : "+mid);
                return;
            }
            else if (arr[mid]>target)
            {
                last = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Arrays;
import java.util.Scanner;

public class binarySearch_version_java {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("target : ");
        int target = sc.nextInt();
        int[] arr = {1,3,5,7,9,11,13,15,17,19,21};

        int idx = Arrays.binarySearch(arr,target);

        if(idx<0)
        {
            System.out.println("target이 존재하지 않습니다. 삽입 포인트 : "+idx);
        }
        else
        {
            System.out.println("target의 idx 값 : "+idx);
        }
    }
}

