/*
                program: 1
    Write a java program To display fibonacci series up to a range.
*/

import java.util.Scanner;
public class FibonacciSeries {

    static void printFibonacci(int range){
        int i=0;
        int a=0;
        int b=1;
        int c=0;
        while(i<range){
            System.out.print(c +" ");
            c=a+b;
            b=a;
            a=c;
            i++;
        }

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the range of fibonacci series: ");
        int range=sc.nextInt();
        printFibonacci(range);

    }
}

/*
 *   Output:
 *   Enter the range of fibonacci series: 10
 *   0 1 1 2 3 5 8 13 21 34 
 * 
 */