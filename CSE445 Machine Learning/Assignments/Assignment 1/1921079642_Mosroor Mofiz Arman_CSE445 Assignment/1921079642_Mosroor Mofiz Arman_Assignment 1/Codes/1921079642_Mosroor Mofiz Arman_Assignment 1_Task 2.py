def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        print("ERROR: divide by zero.")
        return None
    else:
        return a / b

def power(a, b):
    return a ** b

def modulus(a, b):
    if b == 0:
        print("ERROR: divide by zero.")
        return None
    else:
        a = abs(a)
        b = abs(b)
        while a >= b:
            a -= b
        if a < 0:
            a += b
        return a

def get_input():
    operation = input("-------------------------------------------------------------------------------------------\n\t\t\t\t\tMenu: Revisiting simple arithmetic operations\n-------------------------------------------------------------------------------------------\n1) Enter 'add' or 'ADD' to find the summation between two numbers                         :\n2) Enter 'subtract' or 'SUBTRACT' to find the difference between two numbers              :\n3) Enter 'multiply' or 'MULTIPLY' to find the multiplication between two numbers          :\n4) Enter 'divide' or 'DIVIDE' to find the division of a number by the 2nd one             :\n5) Enter 'power' or 'POWER' to find result of 1st number raised to the power of 2nd number:\n6) Enter 'modulus' or 'MODULUS' to find the remainder of the 1st number by the 2nd number :\n-------------------------------------------------------------------------------------------\nEnter your choice from the list above: ")

    if operation.lower() not in ["add", "subtract", "multiply", "divide", "power", "modulus"]:
        print("Choice not listed above...")
        return None, None
    else:
        try:
            num1 = float(input("Enter the first number: "))
            num2 = float(input("Enter the second number: "))
            return operation.lower(), num1, num2
        except ValueError:
            print("Invalid operation. Please try again.")
            return None, None

def perform_operation():
    operation, num1, num2 = get_input()
    if operation == "add":
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif operation == "subtract":
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif operation == "multiply":
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif operation == "divide":
        result = divide(num1, num2)
        if result is not None:
            print(f"{num1} / {num2} = {result}")
    elif operation == "power":
        print(f"{num1} ** {num2} = {power(num1, num2)}")
    elif operation == "modulus":
        print(f"{num1} % {num2} = {modulus(num1, num2)}")

while True:
    perform_operation()
    choice = input("Do you want to perform another operation? (y/n): ")
    if choice.lower() == "n":
        break
