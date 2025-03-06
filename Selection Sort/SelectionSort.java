public class SelectionSort {
    
    public static void main(String[] args){
        
        int[] nums = {2, 8, 3, 5, 7, 6};
        int size = nums.length;
        
        System.out.println("Before Sorting");
        for(int num: nums){
            System.out.print(num + " ");
        }
        
        int minIndex = -1;
        int temp;
        for(int i=0; i<size-1; i++){
            minIndex = i;
            for(int j=i+1; j<size; j++){
                if(nums[j] < nums[minIndex]){
                    minIndex = j;
                }
            }
            temp = nums[minIndex];
            nums[minIndex] = nums[i];
            nums[i] = temp;
        }
        
        System.out.println("\nAfter Sorting");
        for(int num: nums){
            System.out.print(num + " ");
        }
        System.out.println();
        
    }
    
}
