def Add_or_substract(x,y):
    a=x
    b=y
    print(a,b)
    count=0
    if(a>b):
        diff=a-b
        print(diff)
        if diff%2==0:
            count+=1
        
        if diff%2!=0:
            count+=2    
    
    if(b<a):
        dif=b-a
        print(dif)
        if dif%2==0:
            count+=2
            print(count)
        if dif%2!=0:
            count+=1
        
    if a==b:
        print(count)
    
x=int(input())
y=int(input())
Add_or_substract(x,y)

