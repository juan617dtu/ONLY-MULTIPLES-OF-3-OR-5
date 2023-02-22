def checkingReminder(n):
    i = 0 
    j = 0

    while True:
        if i % 3 == 0 or i % 5 == 0:
            print("%d +" %(i), end = " ")
            j += i
        
        i += 1
        if i == n: 
            break

    j += i

    print("%d = %d" %(i, j))

while True:
    data = input("Enter a number: ")

    checkInput = data.strip()

    if not checkInput.isdigit():
        print("\nNot a number!\n")
    else:
        num = int(checkInput)
        break

if num == 0:
    print("\n%d\n\n" %(num))
    exit()

checkingReminder(num)

