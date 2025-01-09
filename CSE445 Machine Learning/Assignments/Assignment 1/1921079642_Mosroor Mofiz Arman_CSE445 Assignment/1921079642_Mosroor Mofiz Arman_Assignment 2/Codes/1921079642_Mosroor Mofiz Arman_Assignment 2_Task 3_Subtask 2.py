adop = int(input("Enter the length (adjacent/opponent) of the triangle: "))


# Outer loop
for i in range(adop):

    # Inner loop
    for j in range(i + 1):
        # Printing the pattern
        print("*", end=' ')

    # Next Line
    print()