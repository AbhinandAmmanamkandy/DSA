def mul(n, i=1):
    if(i==11):
        return
    print(f"{n} x {i} = {n*i}")
    i+=1
    mul(n, i)

if __name__ == "__main__":
    n = 5
    mul(n)