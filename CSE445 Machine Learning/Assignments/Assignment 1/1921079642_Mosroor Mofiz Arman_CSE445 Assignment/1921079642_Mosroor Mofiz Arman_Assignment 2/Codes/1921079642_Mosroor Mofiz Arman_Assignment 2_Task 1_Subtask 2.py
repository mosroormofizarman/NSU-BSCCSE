num = int(input("Enter an integer number: "))

sum = 0
i = 1
while i <= num:
    if i % 2 == 1: # check if i is odd
        sum += i
    i += 1

print("The summation of all the odd numbers from 1 up to", num, "is", sum)