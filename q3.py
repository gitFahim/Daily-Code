
while 1 :

    number = int(input("Number:\n"))

#Checks if the number is greater than 1 or not

    if number>1:
    #dividing the number from 2 to n/2 and checking the reminder

        for i in range (2, (number//2)+1):
            if(number%i) == 0:
                print("not a prime number")
                break
        else:
            print("prime number")

#if the number is less than 1, we do not need to calculate
    else:
        print("not a prime number")
        break
