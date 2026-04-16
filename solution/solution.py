import heapq
n,m=map(int,input().split())
l=list(map(int,input().split()))
h=[]
nlw=0
for i in l:
    if len(h)<m:heapq.heappush(h,i)
    else:
        heapq.heappush(h,i)
        if heapq.heappop(h)==i:nlw+=1
print(nlw)