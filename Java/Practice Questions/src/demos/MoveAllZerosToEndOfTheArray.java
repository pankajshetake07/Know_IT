package demos;

import java.util.ArrayList;
import java.util.List;

public class MoveAllZerosToEndOfTheArray {

	public static void main(String[] args) {
		//int[] arr = {0,0,0,3,1,4};
		
		int[] arr = {3,5,0,0,4};
		int insert=0;
		for(int i=0; i<arr.length; i++) {
			if(arr[i] != 0) {
				arr[insert++] = arr[i];
			}
		}
		while(insert < arr.length) {
			arr[insert++] = 0;
		}
		
        for(int k=0; k<arr.length; k++) {
        	System.out.print(arr[k]+" ");
        }
	}

}
