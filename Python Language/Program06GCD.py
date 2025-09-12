num1 = int(input("Enter the first num :"))
num2 = int(input("Enter the second num :"))


hcf=1
for i in range(2, min(num1,num2)+1):
    if(num1%i==0 and num2%i==0):
        hcf = i
    
print("HCF of ",num1 ," ", num2 ,"=", hcf)