def petya (arr1,arr2):
        if arr1.lower()==arr2.lower():
            print("0")
        if arr1.lower()>arr2.lower():
            print("1")
        if arr1.lower()<arr2.lower():
            print("-1")       
i=str(input())
j=str(input())
petya(i,j)