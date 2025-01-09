num = int(input("Enter an integer number: "))

sum = 0
i = 1
while i <= num:
    sum += i
    i += 1

print("The summation of all the numbers from 1 up to", num, "is", sum)