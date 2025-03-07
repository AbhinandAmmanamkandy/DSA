public class InsertionSort {
    public static void main(String[] args){
        
        int arr[] = {5, 3, 2, 4, 1};
        
        for(int num: arr){
            System.out.print(num + " ");
        }
        System.out.println();
        
        // Do insertion sort
        // Check from 1
        for(int i=1; i<arr.length; i++){
            // Store value in key
            int key = arr[i];
            // j starts from i-1 and goes downwards
            int j = i-1;
            // Check j>=0 and value is greater than key
            // If so shift elements
            while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            // Copy element back to j+1
            arr[j+1] = key;
        }
        
        for(int num: arr){
            System.out.print(num + " ");
        }
        System.out.println();
        
    }
}
