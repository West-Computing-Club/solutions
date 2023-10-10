n, b, s = (int(x) for x in input().split(' '))
ans = 0
s = int(str(s), b)
for i in range(n):
    num = s
    while (num > 0):
        if num % b == b - 1:
            ans += 1
        num //= b
    s += 1
print(ans)
