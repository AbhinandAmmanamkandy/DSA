# Prevent integer overflow
def sum(n):
    if(n%2==0):
        return (n/2) * (n+1)
    else:
        return ((n+1)/2) * n
    
n = 10
print(sum(n))