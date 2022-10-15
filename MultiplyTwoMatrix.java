/*
                    program: 7
        Write a java program To multiply two matrix A and B.
*/

import java.util.Scanner;

public class MultiplyTwoMatrix {


    public static void multiplyMatrix(int a[][], int b[][]) {
        int sum;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                sum=0;
                for(int k=0; k<3; k++){
                    sum+=a[i][k]*b[k][j];
                }
                System.out.print(sum + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

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
        System.out.println("multiply of two matrix A and B.");
        multiplyMatrix(a,b);
    }
}

/*
 *    Output:
 *    Enter the element of 3X3 matrix A.
 *    2 2 2
 *    3 3 3
 *    4 4 4
 *    Enter the element of 3X3 matrix B.
 *    2 2 2
 *    3 3 3
 *    4 4 4
 *    multiply of two matrix A and B.
 *    18 18 18 
 *    27 27 27 
 *    36 36 36
 */