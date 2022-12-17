def Equal(arr):
    for i in arr:
        if i[0]==i[-1]:
            print("YES")
        else:
            print("NO")

n=int(input())
l=[]
for i in range(n):
    x=str(input())
    l.append(x)
Equal(l)    
