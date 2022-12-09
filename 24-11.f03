PROGRAM m_resistance

REAL :: req, r1, r2, r3, r4, r_para, r_ser
READ (*,*) r1, r2, r3, r4
WRITE (*,*) "The values are:    ", r1, r2, r3, r4
r_ser = r1 + r2 + r3 + r4
WRITE(*,*) "Resistance in series =         ", r_ser
r_par = 1/((1/r1)+(1/r2)+(1/r3)+(1/r4))
WRITE (*,*) "Resistance in parallel=     ", r_para
REAL :: v_damp, vm, alp, t, omega1
v_damp = vm * EXP(-alp * t) * COS(omega1 * t)



END PROGRAM m_resistance


