from math import ceil
n,m,a = list(map(int ,input().split()))
res_1 = 0
res_2 = 0
if a!=1:
    if a <= n:
        if n%a != 0:
            res_1 = n//a+1
        else:
            res_1 = n//a

    if a <= m:
        if m%a != 0:
            res_2 = m//a+1
        else:
            res_2 = m//a
    if (a > m and a <= n):
        res_2 = 1
        if n%a != 0:
            res_1 = n//a+1
        else:
            res_1 = n//a

    if (a <= m and a > n):
        if m%a != 0:
            res_2 = m//a+1
        else:
            res_2 = m//a
        res_1 = 1

    if m < a and n < a:
        res_1 = 1
        res_2 = 1

    print(res_2*res_1)
else:
    print(m*n)