binary = input("Enter binary number: ")
if all([True if c in "01" else False for c in binary]):
    print("Binary String")
else:
    print("Not a Binary String")

