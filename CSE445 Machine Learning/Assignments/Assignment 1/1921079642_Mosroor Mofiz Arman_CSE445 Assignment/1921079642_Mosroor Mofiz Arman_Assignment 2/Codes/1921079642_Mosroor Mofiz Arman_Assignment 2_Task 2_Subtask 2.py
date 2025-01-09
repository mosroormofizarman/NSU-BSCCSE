# prompt user to enter an integer number
n = int(input("Enter an integer number: "))

# initialize the sum variable
sum = 0

# loop through all the numbers from 1 up to n
for i in range(1, n+1):
    # check if the current number is a multiple of 5
    if i % 5 == 0:
        # add the current number to the sum
        sum += i

# print the sum of all multiples of 5 from 1 up to n
print("The summation of all multiples of 5 from 1 up to", n, "is", sum)