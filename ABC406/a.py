a,b,c,d = map(int, input().split())


if a > c or (a == c and b > d):
    print('Yes')
else:
    print('No')
