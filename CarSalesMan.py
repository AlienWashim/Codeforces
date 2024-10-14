test = int(input())
for _ in range(test):
    n,x = map(int, input().split())
    a = list(map(int, input().split()))
    mx = max(a)
    tot = sum(a)
    print(max(mx, (tot + x-1)//x))