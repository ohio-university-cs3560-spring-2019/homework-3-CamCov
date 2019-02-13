##################################################
#	Cameron Coventry	2/13/19
#
#	HW4		CS3560
#
#	This program will find the sum of numbers
#	divisble by 3 and 5 from 0 to 1000
##################################################

#sum of multiples of 3 and 5
sum = 0

#for loop that runs until 1000
for x in range(1000):

#If statment that checks for multiples of 3 and 5
	if (x % 3 == 0 or x % 5 == 0):
		sum = sum + x

#prints the sum of the multiples
print("The sum of the multiples of 3 and 5 is: ", sum)
