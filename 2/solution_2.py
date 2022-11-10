def fibonacci_evens():
    greatest = 89
    second = 55
    sum = 44
    while greatest <= 4000000:
        new_greatest = greatest + second
        if new_greatest % 2 == 0:
            sum += new_greatest
        second = greatest
        greatest = new_greatest
    return sum 

print(fibonacci_evens())