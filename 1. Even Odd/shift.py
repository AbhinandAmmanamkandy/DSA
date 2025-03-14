def isEven(n):
    if n == (n>>1)<<1:
        return True
    else:
        return False
    
if __name__ == '__main__':
    n = 5
    print("Even" if isEven(n) else "Odd")