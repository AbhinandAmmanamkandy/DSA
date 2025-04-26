import java.util.Arrays;

public class Main {
    static int[] nums1 = {1, 2, 3, 0, 0, 0};
    static int[] nums2 = {1, 2, 3};
    static int i = 0;
    static int j = 0;
    static int p = 3;

    public void setMinimum() {
        int minValue = nums1[p] == 0 ? Math.min(nums1[i], nums2[j]) : Math.min(Math.min(nums1[i], nums1[p]), Math.min(nums1[p], nums2[j]));
        int minIndex = nums1[i] == minValue ? i : nums1[p] == minValue ? p : j;
        if(i == p) {
            p++;
        }
        if(nums1[minIndex] == minValue) {
            if (i != minIndex) {
                swap(i, nums1, p, nums1);
            }
            i++;
        } else {
            nums1[p] = nums1[i];
            swap(i, nums1, j, nums2);
            j++;
        }
    }

    public void swap(int i, int[] nums1,int j, int[] nums2) {
        int temp = nums1[i];
        nums1[i] = nums2[j];
        nums2[j] = temp;
    }
    public void merge() {
        setMinimum();
    }
    public static void main(String[] args) {
        int count = 1;
        System.out.println(count++ + "-> " + Arrays.toString(nums1));
        Main main = new Main();
        main.merge();
        System.out.println(count++ + "-> " + Arrays.toString(nums1));
        main.merge();
        System.out.println(count++ + "-> " + Arrays.toString(nums1));
        main.merge();
        System.out.println(count++ + "-> " + Arrays.toString(nums1));
        main.merge();
        System.out.println(count++ + "-> " + Arrays.toString(nums1));
        main.merge();
        System.out.println(count++ + "-> " + Arrays.toString(nums1));
    }
}
