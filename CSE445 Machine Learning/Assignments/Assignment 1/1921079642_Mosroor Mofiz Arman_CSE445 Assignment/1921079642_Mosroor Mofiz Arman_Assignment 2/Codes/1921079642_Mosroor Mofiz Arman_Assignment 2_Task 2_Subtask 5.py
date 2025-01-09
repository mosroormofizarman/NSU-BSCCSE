# initialize the list
my_list = [2, 4, 6, 8, 10, 11, 13, 15, 17, 19, 22, 24, 26, 28]

# prompt user to enter an integer number
n = int(input("Enter an integer number: "))

# initialize the index variable
index = -1

# loop through the list and find the index of n if it exists
for i in range(len(my_list)):
    if my_list[i] == n:
        index = i
        break

# print the result
if index != -1:
    print(n, "appears at location", index)
else:
    print(n, "does not appear in the list")
