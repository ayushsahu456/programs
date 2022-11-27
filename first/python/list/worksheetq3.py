#Create a small program that will take in a User’s name and last name (Hint: varName = input(“Enter your name”)), store both in two variables. And then print out a message saying (“Hello there, FirstName LastName”) (Using the %s symbols
first=input("enter your first name:")
last=input("enter your last name:")
greetings=("hello there %s %s")
print(greetings%(first,last))