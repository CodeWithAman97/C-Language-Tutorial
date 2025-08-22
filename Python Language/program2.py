# Use of operators  (arithmatic , relational , logical ,assignment ,bitwise)

# Operators in Python

# 1 Arithmatic Operator(+,-,*,%,/ ,// ,**)
print("ARITHMATIC OPERATOR(+,-,*,%,/ ,// ,**)")
a =21
b =32        
print(a+b)    #addition(+)
print(a-b)    #substraction
print(a*b)    #multiplication
print(a%b)    #modulo - it prints the remainder
print(a/b)    #division 
print(a//b)   #floor division 
print(a**b)   #power

# 2 Relational Operator(< , > , <= , >= , == ,!=)
print("RELATIONAL OPERATOR(< , > , <= , >= , == ,!=)")
c = 10
d = 10

print(a>b)    
print(a<b)
print(a<=b)
print(c<=d)
print(a>=b)
print(a==b)
print(a!=b)

# 3. Logical Operator(and , or , not)
print("LOGICAL OPERATOR(and , or , not)")
e = 0
f = 1
print(e and f)
print(e or f)
print(not e)
print(not f)

# 4. Assignment Operator(= , += ,-= ,*= , /=, %=, **=)
print("ASSIGNMENT OPERATOR")
g=4
h=5

g += h
print(g)

g -= h
print(g)

g*=h
print(g)

g /= h
print(g)

g %= h 
print(g)

print(g)
g **= h
print(g)

# 5 Bitwise Operator(& , | , ~ , ^ , << , >>)
h=2 # 010
i=5 # 101

# bitwise And
print(h & i) #000 = 0

# bitwise or
print(h | i)

# bitwise not
print(~h)
print(~i)

#bitwise XOR
print(a^b)

#left shift
print(a<<2)

#right shift
print(a>>2)


