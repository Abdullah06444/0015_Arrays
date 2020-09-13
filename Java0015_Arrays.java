import java.util.Scanner;

public class Java0015_Arrays {

    public static void main(String[] args) {

        int size, i;
        Scanner s = new Scanner(System.in);
        size = s.nextInt();
        int[] array = new int[size];

        for (i = 0; i < size; i++)
            array[i] = s.nextInt();

        int n = s.nextInt();
        int k = s.nextInt();

        rotate(array, n, k);
    }

    private static void rotate(int[] a, int n, int k) {
        int i;
        for (i = 0; i < n; i++)
            System.out.print(a[(i+n-k)%n] + " ");
        for (i = n; i < a.length; i++)
            System.out.print(a[i] + " ");
    }
}
