t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    
    brand_costs = {}
    for _ in range(k):
        b, c = map(int, input().split())
        if b not in brand_costs:
            brand_costs[b] = []
        brand_costs[b].append(c)
    
    top_costs = []
    for costs in brand_costs.values():
        costs.sort(reverse=True)
        top_costs.extend(costs[:n])
    
    top_costs.sort(reverse=True)
    max_earnings = sum(top_costs[:n])

    print(max_earnings)
