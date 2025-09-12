# factorial

num = int(input("Enter a num: "))
factorial = 1

for i in range(1,num+1):
    factorial *= i 

print("The factorial of ",num," = ",factorial)