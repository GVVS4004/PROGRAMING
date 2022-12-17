n=int(input())
if 1<=n<=100:
    for i in range(n):
        n,m=map(int,input().split())
    if 1<=n<m<=1000:
        for j in range(n):
            print(m-n)    