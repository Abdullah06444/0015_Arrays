# 0015_Arrays

I started to arrays/lists.

# Sample Exercise

### You should write and test the following function:

**_ void rotate(int a[], int n, int k); _**

### This function rotates the first n elements of the array a, k position to the right (or –k positions to the left if k is negative). The last k elements are wrapped around to the beginning of the array. For example, the call rotate(a, 8, 3) would transform the array (22,33,44,55,66,77,88,89,90,91) into (77,88,99,22,33,44,55,66,90,91). The rotate(a,8,-5) would have the same effect.

### You can assume the maximum number of elements in array is 50. You can also assume that valid values will be provided for n and k. Read the numbers into an array. Transform the array elements using rotate function. Display the transformed array elements on the screen.

I/O format:

**_ input:<the_number_of_array_elements><the_list_of_array_elements><the_number_of_elements_to_be_rotated><the_number_of_positions> _**

**_ output:<the_elements_of_the_transformed_array> _**

*For example:*
--

>Sample Input: 10 22 33 44 55 66 77 88 89 90 91 8 3

>Output: 77 88 89 22 33 44 55 66 90 91

**_Please, PAY ATTENTION TO THE I/O FORMAT._**