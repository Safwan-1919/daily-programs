binary = input("Enter the binary number: ")
result = []
for c in binary:
    if c in "01":
        result.append(True)
    else:
        result.append(False)

if(result):
    print("Binary String")
else:
    print("Not binary string")

