n = int(input())
a = list(map(int, input().split()))

sum_a = sum(a)
sum_b = 0
for i in a:
    sum_b += i*i

ans = (sum_a*sum_a - sum_b)//2
print(ans)
