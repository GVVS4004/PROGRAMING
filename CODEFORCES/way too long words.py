def way_to_long(arr):
     
    if len(arr)>10:
        a=arr[0]+(str(len(arr)-2))+arr[len(arr)-1]
        print(a)
    else :
        print(arr)
n=int(input())
l=[]
for i in range (n):
    a=str(input())
    l.append(a)
for i in range (n):
    way_to_long(l[i])