#Mosroor Mofiz Arman
#mosroor.arman@northsouth.edu
#27 February, 2023

from graphics import *
import turtle
import random

# Define the function to draw a circle
def draw_circle():
  turtle.penup()
  x = random.randint(-200, 200)
  y = random.randint(-200, 200)
  turtle.setpos(x, y)
  turtle.pendown()
  turtle.color("red")
  turtle.begin_fill()
  turtle.circle(100)
  turtle.end_fill()

# Define the function to draw a rectangle
def draw_rectangle():
  turtle.penup()
  x = random.randint(-200, 200)
  y = random.randint(-200, 200)
  turtle.setpos(x, y)
  turtle.pendown()
  turtle.color("green")
  turtle.begin_fill()
  for i in range(2):
    turtle.forward(200)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
  turtle.end_fill()

# Define the function to draw a triangle
def draw_triangle():
  turtle.penup()
  x = random.randint(-200, 200)
  y = random.randint(-200, 200)
  turtle.setpos(x, y)
  turtle.pendown()
  turtle.color("blue")
  turtle.begin_fill()
  for i in range(3):
    turtle.forward(200)
    turtle.left(120)
  turtle.end_fill()

# Ask user for input
shape = input("Enter a shape (circle, rectangle, or triangle): ")

# Draw the appropriate shape based on user input
if shape.lower() == "circle":
  draw_circle()
elif shape.lower() == "rectangle":
  draw_rectangle()
elif shape.lower() == "triangle":
  draw_triangle()
else:
  print("Invalid choice of shape.")
