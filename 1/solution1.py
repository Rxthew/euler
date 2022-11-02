def sum_multiples():
    threshold = 1000
    sum = 0
    for i in range(threshold):
        if i % 3 == 0 or i % 5 == 0:
            sum += i
    return sum 

print(sum_multiples())