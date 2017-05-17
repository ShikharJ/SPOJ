import os

def gcd(a, b):
	if b == 0:
		return a
	else:
		return gcd(b, a % b)

count = input()
count = int(count)
while count:
	count = count - 1
	a, b = input().split()
	print (gcd(int(a), int(b)))