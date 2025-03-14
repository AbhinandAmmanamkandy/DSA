def is_even(n):
    if (n&1) == 0:
        return True
    else:
        return False
    
if __name__ == '__main__':
    n = 101
    print("Even" if is_even(n) else "Odd")