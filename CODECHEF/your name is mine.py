
def name(arr1,arr2):
    l1=len(arr1)
    l2=len(arr2)
    count=0
    i=0
    j=0
    a1=[]
    a2=[]
    is_set=False          
    while i<len(arr1) and j<len(arr2):
            if arr1[i]==arr2[j]:
                a1.append(arr1[i])
                a2.append(arr2[j])
                i+=1
                j+=1

            elif arr1[i]!=arr2[j]:
                if l1<l2:
                    j+=1
                elif l2<l1:
                    i+=1
                else:
                    print("NO")
                    is_set=True
                    break    
    if is_set==False:
        if a1==a2:
                print("YES")
        
        else:
                print("NO")
n=int(input())
for i in range(n):                                    
    ar1,ar2=input().split(" ")
    
    name(ar1,ar2)
'''for i in range (int(input())):
    s1=input()
    s2=input()
    c1=Counter(s1)
    c2=Counter(s2)
    for j in c1:
        if c1[j]<=c2.get(j,-1):
            continue
        break
    else:
        print ("Yes")
        exit(0)
    print("No")'''

    
         
