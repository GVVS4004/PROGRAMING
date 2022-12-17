def Next_round(arr,k):
    l=arr[k-1]
    count=0
    for i in arr:
        if i>0:
            if i>=l:
                count+=1
    print(count)        
n,k=map(int,input().split(" "))
l1=[None]*n
l1=[int(i) for i in input().split()]

Next_round(l1,k)    
