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

