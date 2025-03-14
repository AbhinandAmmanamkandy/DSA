def sum(n):
    sum = 0
    for i in range(1, n+1):
        sum += i
    print(f"Sum: {sum}")

if __name__ == '__main__':
    sum(5)