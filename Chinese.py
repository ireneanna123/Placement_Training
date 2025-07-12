n=int(input())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
t=int(input())
arr1.sort()
arr2.sort(reverse=True)
amount=0
for i in range(n):
    if arr1[i]+arr2[i]>t:
        amount+=abs((arr1[i]+arr2[i])-t)
amount=amount*100
print(amount)
