arr = [10]
arr = list(map(int,input().split()))
sum = 0
temp = 0

for i in range (10) :
    if(arr[i] != 0) :
        sum+=arr[i]
        temp+=1
    else : break

print(f"{sum} {sum/temp:.1f}")