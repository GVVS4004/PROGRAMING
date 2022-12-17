def matrix(arr):
    count=0
    for i in range(0,5):
        for j in range(5):
            if arr[i][j]==1:
                while(arr[2][2]!=1):
                    if i>2 and j>2:
                        while i!=2:
                            arr[i][j],arr[i-1][j]=arr[i-1][j],arr[i][j]
                            i-=1
                            count+=1
                        while j!=2:
                            arr[i][j-1],arr[i][j]=arr[i][j],arr[i][j-1] 
                            j-=1
                            count+=1   
                    elif i<2 and j<2:
                        while i!=2:
                            arr[i][j],arr[i+1][j]=arr[i+1][j],arr[i][j]
                            i+=1
                            count+=1
                        while j!=2:
                            arr[i][j+1],arr[i][j]=arr[i][j],arr[i][j+1] 
                            j+=1
                            count+=1   
                    elif i>2 and j<2:
                        while i!=2:
                            arr[i][j],arr[i-1][j]=arr[i-1][j],arr[i][j]
                            i-=1
                            count+=1
                        while j!=2:
                            arr[i][j+1],arr[i][j]=arr[i][j],arr[i][j+1] 
                            j+=1
                            count+=1
                    elif i<2 and j>2:
                        while i!=2:
                            arr[i][j],arr[i+1][j]=arr[i+1][j],arr[i][j]
                            i+=1
                            count+=1
                        while j!=2:
                            arr[i][j-1],arr[i][j]=arr[i][j],arr[i][j-1] 
                            j-=1
                            count+=1
                    elif i==2 and j>2:
                        while j!=2:
                            arr[i][j-1],arr[i][j]=arr[i][j],arr[i][j-1] 
                            j-=1
                            count+=1
                    elif i==2 and j<2:
                        while j!=2:
                            arr[i][j+1],arr[i][j]=arr[i][j],arr[i][j+1] 
                            j+=1
                            count+=1
                    elif j==2 and i<2:
                        while i!=2:
                            arr[i][j],arr[i+1][j]=arr[i+1][j],arr[i][j]
                            i+=1
                            count+=1
                    elif j==2 and i>2:
                        while i!=2:
                            arr[i][j],arr[i-1][j]=arr[i-1][j],arr[i][j]
                            i-=1
                            count+=1
    print(count)

arr=[]
for i in range(5):
    a,b,c,d,e=map(int,input().split())
    l=[a,b,c,d,e]
    arr.append(l)
matrix(arr)    


