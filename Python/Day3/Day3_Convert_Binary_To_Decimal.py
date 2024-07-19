while True:
    binary = list(input("Enter binary number: "))
    if(all([True if c in "01" else False for c in binary])):
        break
    else:
        print("Enter the numbers in binary(0 or 1)")
print("Binary Number: ",int(binary));
decimal = 0
for i in range(len(binary)):
    digit = binary.pop()
    if(digit == "1"):
        decimal += pow(2,i)
print("Decimal Number: ",decimal)

