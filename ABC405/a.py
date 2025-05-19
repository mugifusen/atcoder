r, x = map(int, input().split())

flag = False
if x == 1:
    if r >= 1600 and 2999 >= r:
        flag = True
else:
    if r >= 1200 and 2399 >= r:
        flag = True
if flag:
    print('Yes')
else:
    print('No')
