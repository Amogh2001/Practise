import numpy as np
import math
import matplotlib as mpl
from matplotlib import pyplot as plt


A = 10000 ## Area
E = 200000 ## Young's Modulus
L = 1000 ## Element Length


ARR = (np.array([[1, -1],[-1,1]]))
K =ARR*((A*E)/L) ## Stiffness matrix
## ONly one element, thereofre elemental stiffness matrix + global stiffness matrix
F = np.array(([0],[10000])) ##Force load vector


##Ki = np.linalg.inv(k)
##q = F* Ki

q = np.linalg.solve(K,F)
print(q)
