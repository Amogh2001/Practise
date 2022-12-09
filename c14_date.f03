PROGRAM c14_DATE
IMPLICIT NONE

REAL, PARAMETER :: LAMBDA = 0.00012097   !Radioactive decay constant

!Data dictionary
REAL :: age !age of sample
REAL :: percent  !% of c14 remaining at time of measurement
REAL :: ratio   !ratio of c14 remaining at time of measurement to original amount

WRITE (*,*) "Enter the amount of C-14 remaining as percentage"
READ (*,*) percent
! ECHO
WRITE (*,*) "The amount of sample is: ", percent, "%"

!CAlculations
ratio = percent / 100.
age = (-1.0 /LAMBDA) * log(ratio)

WRITE (*,*) "The age of the sample is:", age, "years"

END PROGRAM c14_DATE
