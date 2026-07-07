
# All prime number in a given range
# for i in range(0,10):
#     print(i)
# print()




# for i in range (0,11):
#     print(i)



# Find all the prime number in an interval


# num1 =int(input())
# num2=int(input())

# for num in range(num1, num2+1):
#     if num >1:
#         for i in range(2, num):
#             if (num%i)==0:
#                 break
#         else:
#             print(num)




#given number is prime or not
i = int(input("Enter the number: "))

for nums in range(2, i):
    if (i % nums == 0):
        print("Not a prime")
        break
else:
    print("Prime number")

    
