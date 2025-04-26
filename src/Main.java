import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    static int[] nums1 = {1, 3, 5, 1, 0, 0};
    static int[] nums2 = {3, 4, 6};
    int m = 3;
    int n = 3;
    int p = m;
    static int i = 0;
    static int j = 0;

    public void swap(int i, int[] nums1,int j, int[] nums2) {
        int temp = nums1[i];
        nums1[i] = nums2[j];
        nums2[j] = temp;
    }
    public void merge() {
        if(nums1[p] == 0) {
            if(nums1[i] < nums2[i]) {
                i++;
            } else if(nums1[i] > nums2[j]) {
                swap(i, nums1, j, nums2);
                j++;
            }
        } else {
            // Get Minimum of three
            System.out.println(nums1[i] + " " + nums1[p] + " " + nums2[j]);
            if(nums1[i] < nums1[p] && nums1[i] < nums2[j]) {
                System.out.println("first left is min");
            } else if(nums1[p] < nums1[i] && nums1[p] < nums2[j]) {
                System.out.println("first mid is min");
            } else if(nums2[j] < nums1[p] && nums2[j] < nums1[i]) {
                System.out.println("right is min");
            } else if(nums1[i] == nums1[p]) {
                System.out.println("first and mid is equal");
            } else if(nums1[p] == nums2[j]) {
                System.out.println("first mid and right is equal");
            }
        }
    }
    public static void main(String[] args) {
        Main main = new Main();
        main.merge();
        System.out.println(Arrays.toString(nums1));
        System.out.println(Arrays.toString(nums2));
        System.out.println(i);
        System.out.println(j);
    }
}
