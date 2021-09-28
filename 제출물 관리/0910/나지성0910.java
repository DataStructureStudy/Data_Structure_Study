package org.opentutorials.javatutorials.DatastructureStudy.ArraySearching;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {

        int[] array = new int[Integer.parseInt(args[0])];

        for(int i = 0 ; i < array.length ; i++) {

            array[i] = Integer.parseInt(args[i+1]);

        }

        int key = Integer.parseInt(args[array.length + 1]);

        System.out.println(key + "는 " + Arrays.binarySearch(array, key) + "번 인덱스에 있습니다.");

        ArraySearching.binarySearch(array,key);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public class ArraySearching {
    public static void binarySearch(int[] array, int key) {

        int least = 0, greatest = array.length - 1, mid;

        while (least <= greatest) {

            mid = (least + greatest) / 2;

            if (array[mid] == key) {

                System.out.println(key + "는 " + mid + "번 인덱스에 있습니다.");
                return;

            } else if (key > array[mid]) {

                least = mid + 1;

            } else if (key < array[mid]) {

                greatest = mid - 1;

            }
        }
        System.out.println(least * (-1) - 1);
    }
}
