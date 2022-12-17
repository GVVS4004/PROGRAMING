
def Team(arr):
    count=0
    for x in arr:
        
            if (x[0] and x[1])==1 or (x[0] and x[2])==1 or (x[1] and x[2])==1:
                count+=1
    print(count)
n=int(input())  
l=[]  
for i in range(n):
        x,y,z=map(int,(input().split()))
        l1=[x,y,z]
        l.append(l1)
Team(l)
