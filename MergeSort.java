/*
    Merge Sort

    idea(?)-> Divide & Conquer( Ha... Ha..  haaaaa)!

*/


public class MergeSort{

    public static void mergeSort(int arr[], int si, int ei) {
        if (si >= ei)
        {
            return;
        }
        int mid = si + (ei - si) / 2; // (si+ei)/2
        mergeSort(arr, si, mid);      // left part
        mergeSort(arr, mid + 1, ei);  // right part
        merge(arr, si, mid, ei);
    }

    public static void merge(int arr[], int si, int mid, int ei) {
        int temp[]= new int[ei-si+1];
        int i = si;
        int j = mid + 1;
        int k = 0;
        while (i <= mid && j <= ei)
        {
            if (arr[i] < arr[j])
            {
                temp[k] = arr[i++];
            }
            else
            {
                temp[k] = arr[j++];
            }
            k++;
        }
        // left part
        while (i <= mid)
        {
            temp[k++] = arr[i++];
        }
    
        // right part
        while (j <= ei)
        {
            temp[k++] = arr[j++];
        }
    
        // copy temp to original array
        for (i = si, k = 0; k <temp.length; k++, i++)
        {
            arr[i] = temp[k];
        }
    }

    public static void printArr(int arr[]) {
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+ " ");
        }
    }

    public static void main(String[] args) {
        
        int arr[]={9, 8, 7, 6, 5, 4, 3, 2, 1};
        mergeSort(arr, 0, arr.length-1);
        printArr(arr);

    }

}

/*
    Output
    1 2 3 4 5 6 7 8 9
*/