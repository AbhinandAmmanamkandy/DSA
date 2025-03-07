public class BinarySearch {

    public static void main(String[] args){

        int[] nums = {1, 3, 5, 7, 9, 11, 13};
        int target = 11;

        int left = 0;
        int right = nums.length - 1;

        int result = binarySearch(nums, target, left, right);
        if(result != -1){
            System.out.println("Number found at positin: " + result);
        } else{
            System.out.println("Number not found!");
        }

    }

    public static int binarySearch(int[] nums, int target, int left, int right){

        // 1 3 5 7 9 11 13

        if(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                return binarySearch(nums, target, mid + 1, right);
            else
                return binarySearch(nums, target, left, mid - 1);
        }else {
            return -1;
        }

    }

}
