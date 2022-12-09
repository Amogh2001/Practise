PROGRAM temp_conversion
IMPLICIT NONE

REAL :: t_fahr, t_kelv

WRITE (*,*) "ENter temp in fahrenheit"
READ (*,*) t_fahr

t_kelv = (5./9.) * (t_fahr -32.) +273.15

WRITE (*,*) "Temp in kelvin is: ", t_kelv, " kelvins"

END PROGRAM temp_conversion

