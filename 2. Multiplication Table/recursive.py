def print_table(n, i=1):
    print(f"{i} x {n} = {i*n}")
    i += 1
    if(i<=10):
        print_table(n, i)

if __name__ == '__main__':
    print_table(5)