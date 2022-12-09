PROGRAM temp_c

INTEGER :: temp_c
temp_c = 35
temp: SELECT CASE (temp_c)
CASE (:-1)
	WRITE (*,*) "Its below freezing"

CASE (0)
	WRITE (*,*) "Its at the freezing point"

CASE(1:20) 
	WRITE (*,*) "Its at room temperature"

CASE (21:33) 
	WRITE (*,*) "Its warm today"

CASE (34:)
	WRITE (*,*) "Its hot today"


END SELECT temp
END PROGRAM temp_c
