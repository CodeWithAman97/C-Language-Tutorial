# program to count the number of vowels in the string using loop
count = 0

sentence = input("Enter a sentence or a word : ")
sentence = sentence.lower()
print(sentence)
for i in sentence :
    if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' ):
        count+=1

print("The number or vowels : ",count)