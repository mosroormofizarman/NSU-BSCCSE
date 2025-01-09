# initialize the list
new_list = [1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9]

# prompt user to enter an integer number
n = int(input("Enter an integer number: "))

# initialize the count variable
count = 0

# loop through the list and count the number of occurrences of n
for i in new_list:
    if i == n:
        count += 1

# print the result
if count > 0:
    print(n, "appears", count, "times in the list")
else:
    print(n, "appears 0 times in the list")
