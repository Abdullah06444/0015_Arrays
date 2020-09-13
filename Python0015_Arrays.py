def rotate(a, n, k):
    i = 0
    for item in range(len(a)):
        if i < n:
            print(a[(i+n-k)%n], end = " ")
        else:
            print(a[i], end = " ")
        i += 1

#main function
s = str(input())
s = s.split(' ')
size = int(s[0])
i = 0


array = []
while i < size:
    array.append(int(s[i+1]))
    i += 1

n = int(s[i+1])
k = int(s[i+2])

rotate(array, n, k)
