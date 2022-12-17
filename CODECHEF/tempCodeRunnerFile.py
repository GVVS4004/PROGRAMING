i=0
l=[]
for j in range(1,len(arr)):
    if arr[j]==0:
        continue
    else:
        area=min(arr[i],arr[j])*(j-1)-(sum(l))
        l.append(arr[j])
if area>0:
    print(area)
else:
    print(0)