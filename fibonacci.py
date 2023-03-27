import time

# time O(2^n) Space O(n)
def fibo1(n: int) -> int:
    if (n == 0):
        return 0
    if (n == 1):
        return 1
    return fibo1(n-1) + fibo1(n-2)

# time O(n) Space O(1)
def fibo2(n: int) -> int:
    a, b = 0, 1
    # n-=1
    while (n):
        a, b = b, a+b
        n -= 1
    return a


start1 = time.time()
for i in range(1, 35):
    fibo1(i)
    # print(fibo1(i), end=" ")
print("For Recursion Function = ", time.time()-start1, " s")

start2 = time.time()
for i in range(1, 35):
    fibo2(i)
    # print(fibo2(i), end=" ")
print("For Loop Function = ", time.time()-start2, " s")
