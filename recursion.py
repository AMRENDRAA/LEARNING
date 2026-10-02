
# Online Python - IDE, Editor, Compiler, Interpreter
def sum(n):
    if n<=0:
        return 0
    return n+ sum(n-1)
    
print(sum(4))


Print 1 to 5 

def sum(n):
    if n<=0:
        return 
    print(n)
    sum(n-1)
    
print(sum(5))



def printi(n):
    # Base Case: Stop when n goes past 5
    if n > 5:
        return 
    
    print(n)        # Print current number
    printi(n + 1)   # Recursive call: move to the next number

# Start the recursion by passing 1


def printi(n):
    if (n>6):
        return 
    
    print(n)
    printi(n+1)

printi(1)
        




