# # from sys import maxsize

# # l = list(map(int, input().split()))
# # length = len(l)-1
# # table = [0]*(length+1)
# # maximum = -maxsize
# # for i in range(length+1):
# #     if i!=length and l[i] > l[i+1]:
# arr=list(map(int,input("Enter").split(" ")))
# i=0
# l=[]
# for j in range(1,len(arr)):
#     if arr[j]==0:
#         continue
#     else:
#         area=min(arr[i],arr[j])*(j-1)-(sum(l))
#         l.append(arr[j])
#         if arr[j]>=arr[i]:
#             i=j
# if area>0:
#     print(area)
# else:
#     print(0)

l = list(map(int, input().split()))
sum = 0
maximum = 0
for i in range(len(l)-1):
    if l[i] < l[i+1] and sum > maximum:
        maximum = sum
        sum = 0
    if l[i]>l[i+1]:
        sum += l[i]-l[i+1]
        l[i+1] = l[i]
print(maximum, sum)
