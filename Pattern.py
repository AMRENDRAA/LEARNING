
# Online Python - IDE, Editor, Compiler, Interpreter


# Online Python - IDE, Editor, Compiler, Interpreter


# for i in range (0,5):
#     for j in range(0,5):
#         print("*",end="")
#     print()
# *****
# *****
# *****
# *****
# *****


# for i in range (0,5):
#     for j in range (0,i+1):
#         print("*",end=" ")
#     print()
# * 
# * * 
# * * * 
# * * * * 
# * * * * * 


# for i in range (1,5):
#     for j in range (1,i+1):
#         print(j,end="")
#     print()
# 1
# 12
# 123

# 1234

# size = int(input("Enter the size of the array: "))
# l = []

# for i in range(0, size):
#     # Take input into a unique variable
#     num = int(input(f"Enter element {i+1}: "))
#     # Append directly to the list without re-assigning l
#     l.append(num)

# # Use Python's built-in sum function instead of a second loop
# print("The sum is:", sum(l))
# sum=0;
# for i in range (0,size):
#     sum=sum+l[i]
    
# print("The sum is ",sum)


# n=int(input())
# c=0
# while(n>0):
    
#     n=n//10
#     c += 1
# print(c)







print("*"*5);

# REVERSE OF A NUMBER 


n=0 

i=int(input("Enter the number which you want to reverse"))
c=0
k=i
while(i>0):
    j=i%10
    c=c*10+j
    i=i//10
    
print(c)

if(k==c):
    print("yes")
else:
    print("no")



        
        
        
        
    
    
