// Used to Calculate Largest SubArray with Maximum sum.
//Array  consists of both +ve and -ve numbers and in case of +ve array, ans is equal to array.
import java.util.*;
public class KadaneAlgorithm {
    //N People are in circle, we have to kill Kth person. Output is last person standing.
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i <n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(fun(arr,n));
        
    }
    public static int fun(int[] arr, int n) {
       int currSum = 0, maxSum = Integer.MIN_VALUE;
       for (int i = 0; i < n; i++) {
            currSum = currSum + arr[i];
            maxSum = Math.max(currSum,maxSum);
            if(currSum < 0) currSum = 0;
       }
       return maxSum;
    }
}
