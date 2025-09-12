# Program to check whether a number is armstrong or not

num = int(input("Enter a number : "))
copyOfNum = num
print(num)
count=0
while(num>0):
     num = num//10
     count+=1

newNum = 0
num = copyOfNum

while(copyOfNum>0):
     remainder = copyOfNum%10
     newNum = newNum + pow(remainder , count)
     copyOfNum = copyOfNum // 10

if(num == newNum):
     print("Armstrong")
else:
     print("Not Armstrong")

