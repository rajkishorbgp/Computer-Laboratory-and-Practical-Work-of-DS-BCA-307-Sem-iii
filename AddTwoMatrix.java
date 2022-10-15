/*
            program: 6
     Write a java program To add two matrix A and B.
*/

import java.util.Scanner;

public class AddTwoMatrix {

    static void addTwoMatrix(int a[][], int b[][]){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(a[i][j]+b[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a[][]=new int[3][3];
        System.out.println("Enter the element of 3X3 matrix A.");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j]=sc.nextInt();
            }
        }
        int b[][]=new int[3][3];
        System.out.println("Enter the element of 3X3 matrix B.");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                b[i][j]=sc.nextInt();
            }
        }
        System.out.println("Add of two matrix A and B.");
        addTwoMatrix(a, b);
    }
}

/*
 *  Output:
 *  Enter the element of 3X3 matrix A.
 *   2 3 4
 *   2 3 4
 *   5 4 3
 *   Enter the element of 3X3 matrix B.
 *   2 3 4
 *   5 4 3
 *   2 3 4
 *   Add of two matrix A and B.
 *   4 6 8 
 *   7 7 7 
 *   7 7 7
 */