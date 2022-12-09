PROGRAM std_deviation

!To calcaulate the average and standard deviation of any nu,ber of input values

IMPLICIT NONE

!Data dictionary
INTEGER :: n = 0
REAL :: std_dev = 0.
REAL :: sum_x = 0.
REAL :: sum_x2 = 0.
REAL ::  x = 0.
REAL :: x_bar

IF (n < 2) THEN
	WRITE (*,*) "Insufficient inofrmation"




DO 
	!Read next value
	WRITE (*,*) "Enter the value"
	READ (*,*) x
	WRITE (*,*) "The number is", x

	! Test for loop exit
	IF ( x < 0) EXIT

	!Otheriwse accumulate sums
	n = n + 1
	sum_x = sum_x + x
	sum_x2 = sum_x2 + x**2
END DO 

IF (n < 2) THEN
	WRITE (*,*) "Insufficient inofrmation"
ELSE 
	!Calculations
	x_bar = sum_x / real(n)
	std_dev = sqrt((real(n)*sum_x2 - sum_x **2)/(real(n)*real(n-1)))

	WRITE (*,*) "The mean is:", x_bar
	WRITE (*,*) "The standard deviation is: ", std_dev
	WRITE (*,*) "The number of data points is:", n
END IF
END PROGRAM std_deviation



