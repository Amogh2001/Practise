PROGRAM factorial
IMPLICIT NONE

INTEGER :: i, n, n_factorial 
!REAL :: n_factorial


WRITE (*,*) "Enter the number for which the factorial must be found"
READ (*,*) n

n_factorial = 1

DO i = 1, n
	n_factorial = n_factorial * i

END DO

WRITE (*,*) "the factorial of",n , "is", n_factorial

END PROGRAM factorial
