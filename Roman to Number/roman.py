def romanToInt(s):
    dict = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
    sum = 0
    prev = 0
    for ch in reversed(s):
        current = dict[ch]
        if(prev>current):
            sum -= current
        else:
            sum += current
        prev = current
    return sum

print(romanToInt("MCMXCIV"))