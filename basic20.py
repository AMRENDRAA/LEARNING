Count Odd and Even

class Solution:
	def countOddEven(self, arr):
	    count1=0
	    count2=0
	    length=len(arr)
	    for i in range(length):
	        if arr[i]%2==0:
	            count1=count1+1
	        else:
	            count2=count2+1
	    return(count2,count1)


Mean or Average of an Array
class Solution:
    def findMean(self, arr):
        sum=0
        n=len(arr)
        for i in range(n):
            sum=sum+arr[i]
        
        
        return sum//n  



Palindrome number 
class Solution:
    def isPalindrome(self, n):
        n = abs(n)
        k = n
        rev = 0
        while (k > 0):
            rev = rev * 10 + k % 10
            k = k // 10
        if (rev == n):
            return True
        else:
            return False 

Palindrome

class Solution:
    def factorial(self, n: int) -> int:
        mul=1
        while(n>0):
            mul=mul*n
            n=n-1
            
        return mul
            
        # code here

