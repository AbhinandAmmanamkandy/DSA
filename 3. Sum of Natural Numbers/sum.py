def findSum(n):
    sum = 0
    x = 1
    while x <= n:
        sum = sum + x
        x = x + 1
    return sum


# Driver code
n = 10
print(findSum(n))