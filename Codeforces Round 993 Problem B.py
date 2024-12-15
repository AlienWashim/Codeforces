t = int(input())
 
for _ in range(t):
    a = input()[::-1]
    b = a.translate(str.maketrans("pq", "qp"))
    print(b)
