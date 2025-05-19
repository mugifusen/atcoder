n, m = map(int, input().split())
a = list(map(int, input().split()))

count = 0
for i in range(n):
    tmp = set(a)
    if not len(tmp) == m:
        break
    count += 1
    a.pop()

print(count)