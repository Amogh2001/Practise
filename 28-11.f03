PROGRAM quad_roots

REAL :: a, b, c

REAL :: discriminant 
REAL :: x1, x2
REAL :: real_part, imag_part
REAL :: x_root

DISCRIM = (b**2) - (4*a*c)
WRITE (*,*)  "The formula for finding roots of a quadratic equation is &
&x = (-b (+-) sqrt(b**2 - 4*a*c))/(2*a)"
WRITE (*,*) "ENter the values of a, b and c"
READ (*,*)  a, b , c
WRITE (*,*)  "a = ", a, "b = ", b, "c =", c


IF (discriminant > 0.) THEN
	x1 = (-b + ((b**2) - 4*a*c)) / (2*a)
	
	x2 = (-b - ((b**2) - 4*a*c)) / (2*a)
	WRITE (*,*) "The roots are real and unequal"
	WRITE (*,*) "The root x1 = ", x1, "x2 = ", x2

ELSE IF (discriminant == 0.) THEN
	x_root = b/(2*a)
	WRITE (*,*) "The roots are equal and are equal to:", x_root

ELSE 
	real_part = -b/ (2*a) 
	imag_part = SQRT(ABS(discriminant)) / (2*a)
	WRITE (*,*) "The real part = ", real_part
	WRITE (*,*) "The imaginary part = ", imag_part
END IF
END PROGRAM quad_roots
