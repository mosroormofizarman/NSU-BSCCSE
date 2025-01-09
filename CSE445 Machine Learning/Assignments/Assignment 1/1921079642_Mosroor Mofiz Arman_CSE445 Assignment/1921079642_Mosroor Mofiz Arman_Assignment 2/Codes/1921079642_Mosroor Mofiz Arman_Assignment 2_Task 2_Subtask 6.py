# initialize the list
my_list = [10, 3, 15, -7, 90, 11]

# initialize the maximum and minimum variables to the first element of the list
maximum = my_list[0]
minimum = my_list[0]

# loop through the list to find the maximum number
for i in range(len(my_list)):
    if my_list[i] > maximum:
        maximum = my_list[i]

# loop through the list again to find the minimum number
for i in range(len(my_list)):
    if my_list[i] < minimum:
        minimum = my_list[i]

# print the result
print("Maximum number is", maximum)
print("Minimum number is", minimum)
