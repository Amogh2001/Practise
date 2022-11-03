import numpy as np
from matplotlib import pyplot as plt

L = float(input("\nEnter the length of the beam 'L' in mm: "))
P = float(input("Enter the magnitude of force 'P' in N: "))
E = float(input("Enter the Young's Modulus 'E' of material in N/mm^2 :"))

b = float(input("Enter the width of the beam in mm: "))
d = float(input("Enter the depth of the beam in mm: "))


mesh = int(input("Enter the number of mesh elements: "))

el = float(L/mesh)

Force = np.array([[-P],[0]])
F = np.zeros(2*mesh+2)
F[2*mesh:1+2*mesh] = F[2*mesh:1+2*mesh]+Force[0]

print("\nForce Matrix :")
for i in F:
    print(i)



kb = ((E*b*(d**3))/(12*(el**3)))*np.array([[12,6*el,-12,6*el],
                                [6*el,4*el*el,-6*el,2*el*el],
              [-12,-6*el,12,-6*el],[6*el,2*el*el,-6*el,4*el*el]])

print("\nElement stiffness matrix K = \n",kb)

K = np.zeros((2+2*mesh,2+2*mesh))


for i in range(4):
    for j in range(4):
	     K[i,j]=kb[i,j]

k=1
while k<=2*mesh-2:
    p=k
    i=1
    while i<=4:
        j=1
        q=k
        while j<=4:
            K[p+1,q+1]=K[p+1,q+1]+kb[i-1,j-1]
            j=j+1
            q=q+1
        i=i+1
        p=p+1
    k=k+2

Kinv = np.linalg.inv(K[2:2+2*mesh,2:2+2*mesh])

D = np.zeros((2+2*mesh))
D[2:2+2*mesh] = np.dot(Kinv,F[2:2+2*mesh])

print("\nDisplacement Matrix : \n")
for i in D:
    print(i)
	     
