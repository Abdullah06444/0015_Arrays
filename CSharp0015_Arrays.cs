using System;

namespace CSharp0015_Arrays
{

    class CSharp0015_Arrays
    {
        static void Main(string[] args)
        {
            
            int size = 1, i = -1, n = 0, k = 0;
            int[] array = { };
            string s = Console.ReadLine();
            var input = s.Split(' ');
            foreach(var number in input)
            {
                if (i == -1) {
                    size = int.Parse(number);
                    array = new int[size];
                }
                else if (i < size)
                    array[i] = int.Parse(number);
                else if (i == size)
                    n = int.Parse(number);
                else
                    k = int.Parse(number);
                i++;
            }
            
            rotate(array, n, k);
        }

        private static void rotate(int[] a, int n, int k)
        {
            int i = 0;

            foreach (int item in a)
            {
                if (i < n)
                    Console.Write(a[(i + n - k) % n] + " ");
                else
                    Console.Write(a[i] + " ");
                i++;
            }
        }
    }
}
