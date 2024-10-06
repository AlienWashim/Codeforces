for _ in range(int(input())):
    n = int(input().split()[0])
    a,b = sorted(map(int,input().split()))
    p = int(input())
    print(a-1 if p<a else n-b if p>b else (b-a)//2)
