n, k = map(int, input().split())
a = list(map(int, input().split()))

sum = 1

for item in a:
    sum *= item

    if len(str(sum)) >= k+1:
        sum = 1
print(sum)