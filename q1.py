number = int(input("Number?"))
count = 1
factorial = number

if number == 1:
    print("The factorial is 1")
    print("The End")
else:
    while count < number:
        number = number - 1
        factorial = factorial * number

    print("The factorial is: ", factorial)
print("Last Line")