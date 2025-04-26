import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    static int[] nums1 = {1, 3, 5, 0, 0, 0};
    static int[] nums2 = {2, 4, 6};
    static int m = 3;
    int n = 3;
    static int p = m;
    static int i = 0;
    static int j = 0;

    public void swap(int i, int[] nums1,int j, int[] nums2) {
        int temp = nums1[i];
        nums1[i] = nums2[j];
        nums2[j] = temp;
    }
    public void merge() {
        if(nums1[p] == 0) {
            if(nums1[i] < nums2[j]) {
                i++;
            } else if(nums1[i] > nums2[j]) {
                nums1[p] = nums1[i];
                swap(i, nums1, j, nums2);
                j++;
            }
        } else {
            // Get Minimum of three
            if(nums1[i] == nums1[p]) {
                p++;
            } else if(nums1[p] == nums2[j]) {
                // Maybe p++?
                j++;
            }else if(nums1[i] < nums1[p] && nums1[i] < nums2[j]) {
                i++;
            } else if(nums1[p] < nums1[i] && nums1[p] < nums2[j]) {
                swap(i, nums1, p, nums1);
                i++;
            } else if(nums2[j] < nums1[p] && nums2[j] < nums1[i]) {
                swap(i, nums1, j, nums2);
                j++;
            }
        }
    }
    public void loop() {
        while(i < m+n) {
            merge();
        }
        // Copy Remaining value
        nums1[i-1] = nums2[j];
    }
    public static void main(String[] args) {
        Main main = new Main();
        main.loop();
        System.out.println(Arrays.toString(nums1));
        System.out.println(Arrays.toString(nums2));
        System.out.println("i: " + i + "\nj: " + j + "\np: " + p);
    }
}
