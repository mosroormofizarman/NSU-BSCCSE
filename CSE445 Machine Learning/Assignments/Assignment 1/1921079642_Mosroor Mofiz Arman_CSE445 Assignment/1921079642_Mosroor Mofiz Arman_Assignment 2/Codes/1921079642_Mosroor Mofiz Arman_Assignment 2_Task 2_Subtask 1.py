# prompt user to enter a special character
special_char = input("Enter a special character from the following options: @, #, $, *: ")

# prompt user to enter an integer number
N = int(input("Enter an integer number: "))

# print the special character N times using a for loop
for i in range(N):
    print(special_char, end="")
