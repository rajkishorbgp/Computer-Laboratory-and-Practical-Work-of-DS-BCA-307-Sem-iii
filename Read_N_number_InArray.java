/*
                    program: 2
    write a java program To read n numbers and display it, to demonstrate the
    concept of ane dimensional array finding.
    
*/

import java.util.Scanner;

public class Read_N_number_InArray {

    static void printArray(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        Scanner sc= new Scanner(System.in);

        System.out.print("Enter the element you want to store in the array: ");
        int n=sc.nextInt();

        int arr[]=new int[n];
        System.out.println("Enter the "+ n + " element.");
        for(int i=0; i<arr.length; i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Element is present in the array.");
        printArray(arr);

    }
}

/*
 *   Output:
 *   Enter the element you want to store in the array: 8
 *   Enter the 8 element.
 *   5 3 4 2 1 8 7 9
 *   Element is present in the array.
 *   5 3 4 2 1 8 7 9
 * 
 */