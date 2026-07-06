#factorial of number 

num= int(input("Enter the number "))
n=num
prod=1
while (num>0):
    prod=prod*num
    num=num-1

print(prod)
