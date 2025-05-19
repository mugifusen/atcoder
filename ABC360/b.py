s, t = input().split()

for w in range(1,len(s)):
    # sをw文字ごとに区切る
    for c in range(w):
        now = ''
        for i in range(c,len(s),w):
            now += s[i]
        if now == t:
            print('Yes')
            exit()
print('No')