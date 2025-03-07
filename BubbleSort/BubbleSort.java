public class BubbleSort {

    public static void main(String args[]){
        
        int nums[] = {8, 6, 9, 2, 4, 5};
        int size = nums.length;
        int temp;
        
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-1; j++){
                if(nums[j] > nums[j+1]){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        
        for(int num: nums){
            System.out.print(num + " ");
        }
        System.out.println();
        
        
    }
    
}
