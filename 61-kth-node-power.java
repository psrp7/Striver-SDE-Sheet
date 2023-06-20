public class Solution {
    public static int NthRoot(int n, int m) {
        int ans = 0;
        int i = 1;
        while (true) {
            int pow = pow(i, n);
            if (pow == m) {
                return i;
            } else if (pow > m) {
                break;
            }
            i++;
        }
        return -1;
    }

    private static int pow(int base, int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
}
