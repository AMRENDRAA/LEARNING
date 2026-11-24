# Given a number n, print all numbers from 0 to n in increasing order in a single line using a while loop.

n = int(input())

# code here
# for i in range (0,n+1):
#     print(i,end=" ")
    
i=0
while(i<=n):
    print(i,end=" ") #-->end=" "  will remain on the same 
    i=i+1



 Given three integers a, r, and n,
* a is the first term of a Geometric Progression (GP),
* r is the common ratio. 
* n is the position of the term. 
Your task is to calculate the n-th term of the GP. Since the result can be very large, return the answer modulo 1000000007 (i.e. 109+ 7).
  class Solution:
	def nthTerm(self, a, r, n):
		# code here
		MOD = 1000000007
        return (a * pow(r, n - 1, MOD)) % MOD
