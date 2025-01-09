# initialize the list
my_list = [2, 4, 6, 8, 10, 11, 13, 15, 17, 19, 22, 24, 26, 26, 28]

# prompt user to enter an integer number
n = int(input("Enter an integer number: "))

# check if the number exists in the list using a for loop
found = False
for i in my_list:
    if i == n:
        found = True
        break

# print the result
if found:
    print("FOUND")
else:
    print("NOT FOUND")