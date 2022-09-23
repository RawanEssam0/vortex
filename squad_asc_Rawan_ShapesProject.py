import math
def square(height):
    for i in range(height):
        for j in range(height):
           print("* ",end='')
        print(" ")
    print("\n")    
    
def triangle(height):
   for i in range(height):
    for j in range(i+1):
        print("* ", end="")
    print()

def pyramid(height):
    k = 0
    for i in range(1, height+1):
        for space in range(1, (height-i)+1):
           print(end="  ")
   
        while k!=(2*i-1):
          print("* ", end="")
          k += 1
        k = 0
        print()
def circle(r):
    for i in range(0, 2*r+1):
        for k in range(0,2*r+1):
            if (pow(i-r,2)+ pow(k-r,2)<=pow(r,2)+1):
                print("*",end=" ")
            else:
                print(" ", end=" ")
            print(" ", end=" ")
        print("\n")
num = int(input("Enter number of shapes: "))
shapes=[]
i=1
while (i<=num):
    print("Triangle - Pyramid - Square - Circle")
    shape= input("Enter shape letter (T,P,S,C): ")
    while shape not in "TPSCtpsc":
        shape= input("Invalid choice !\nEnter shape letter (T,P,S,C): ")
    height=int(input("Enter height: "))
    sh =(shape,height)
    shapes.append(sh)
    i+=1
shapes.sort(key=lambda t:t[1])
for l in range(0,len(shapes)):
    if (shapes[l][0].upper() == "T"):
        triangle(shapes[l][1])
    elif (shapes[l][0].upper() == "P"):
        pyramid(shapes[l][1])
    elif (shapes[l][0].upper() == "S"):
        square(shapes[l][1])
    elif (shapes[l][0].upper() == "C"):
        circle(shapes[l][1])