adop = int(input("Enter the length (adjacent/opponent) of the triangle: "))

# Outer loop
for i in range (1, adop+1):

    # Inner loop
    # display space
    for j in range(1, (adop-i)+1):
        # Printing the pattern
        print(" ", end=' ')

    # display *
    for k in range(1, i+1):
        # Printing the pattern
        print("*", end=' ')

    # Next Line
    print()