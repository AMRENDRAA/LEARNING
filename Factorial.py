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
    

