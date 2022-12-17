def Bit(arr):
    x=0
    for i in arr:    
        if i=="X++" or i=="++X":
            x+=1
        elif i=="X--" or i=="--X":
            x-=1
    print(x)        
n=int(input())
l=[]
for i in range( n):
    x=str(input())
    l.append(x)
Bit(l)