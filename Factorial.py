#factorial of number 

num= int(input("Enter the number "))
n=num
prod=1
while (num>0):
    prod=prod*num
    num=num-1

print(prod)

#REVISION 

num=int(input("Enter the number"))
ans=1

while(num>0):
    ans=ans*num
    num=num-1
    
    
    
print(ans)




n=153

t=n
p=len(str(n))
while(t>0):
    d=t%10
    s+=d**p
    t//=10

if s==n:
    print("armstrong number")
else:
    print("not armstrong number")



n=int(input("enter the number"))

sum=0
for i in range (2,n-1):
    if(n%i==0):
        sum=sum+1


if(sum==0):
    print("yes prime ")
else:
    print("no not prime")
#N TH FIBONACCI

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

print(fibonacci(9))


#Implement negative number filtering from a list
a = [5, -3, 7, -1, 2, -9, 4]

for num in a:
    if num < 0:
        print(num)
        

