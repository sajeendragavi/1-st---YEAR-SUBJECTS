#хеламбаге

import math as m


x1,y1=map(int,input("input cordinate of point A:").split())
x2,y2=map(int,input("input cordinate of point B:").split())
x3,y3=map(int,input("input cordinate of point C:").split())

if(x1==0 and x2==0 and x3==0):
  print('this is not triangle')
elif(y1==0 and y2==0 and y3==0):
  print('this is not traiangle')
else:  
#find the length of a foot of the triangle

    AB=m.sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))
    BC=m.sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)))
    AC=m.sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)))

    print("the length of the AB:{:5.3f}".format(AB))
    print("the length of the BC:{:5.3f}".format(BC))
    print("the length of the AC:{:5.3f}".format(AC))

#find the maximum angle and find the height from the largest angle

    if(AB>BC)and (AB>AC):
        print("the maximum angle is C")
        H=abs(y3*(x2-x1)+x3*(y2-y1)-y1*(x2-x1)+x1*(y2-y1))/m.sqrt((y2-y1)**2+(x2-x1)**2)
        print("the height from the largest angle H:{:5.3f}".format(H))

    elif (BC>AB)and (BC>AC):
        print("the maximum angle is A")
        H=abs(y1*(x2-x1)+x1*(y2-y1)-y1*(x2-x1)+x1*(y2-y1))/m.sqrt((y2-y1)**2+(x2-x1)**2)
        print("the height from the largest angle H:{:5.3f}".format(H))

    elif(AC>BC)and (AC>AB):
        print("the maximum angle is B")
        H=abs(y2*(x2-x1)+x2*(y2-y1)-y1*(x2-x1)+x1*(y2-y1))/m.sqrt((y2-y1)**2+(x2-x1)**2)
        print("the height from the largest angle H:{:5.3f}".format(H))
#input the point   
        x,y=map(float,input("input cordinate of a point:").split())  
 #determine the point inside or outside in the triangle
        s=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2
        s1=(x*(y1-y2)+x1*(y2-y)+x2*(y-y1))/2
        s2=(x*(y2-y3)+x2*(y3-y)+x3*(y-y2))/2
        s3=(x*(y3-y1)+x3*(y1-y)+x1*(y-y3))/2
        s4=s1+s2+s3
        if s4==s:
            print('point is inside the triangle')
        elif s1==0 or s2==0 or s3==0 :
            print('point is on the foot of triangle')
        else:
            print('point is outside the triangle')
#find the distance from the point to the nearest foot
            #z1=from the point to the AB
            #z2=from the point to the AC
            #z3=from the point to the BC
            z1=0
            z2=0
            z3=0
        if(x1==x2):
              z1=x-x1
        elif(x1==x3):
              z2=x-x3
        elif(x3==x2):
              z3=x-x2
        else:
              z1=abs(y*(x2-x1)+x*(y2-y1)-y1*(x2-x1)+x1*(y2-y1))/m.sqrt((y2-y1)**2+(x2-x1)**2)
              z2=abs(y*(x3-x1)+x*(y3-y1)-y1*(x3-x1)+x1*(y3-y1))/m.sqrt((y3-y1)**2+(x3-x1)**2)
              z3=abs(y*(x2-x3)+x*(y2-y3)-y1*(x2-x3)+x1*(y2-y3))/m.sqrt((y2-y3)**2+(x2-x3)**2)
              
              if z1<z2 and z1<z3:
                   print('the distance from the point to the nearest foot h:{:5.3f}'.format(z1))
              elif z2<z1 and z2<z3:
                   print('the distance from the point to the nearest foot h:{:5.3f}'.format(z2))
              elif z3<z1 and z3<z2:
                   print('the distance from the point to the nearest foot h:{:5.3f}'.format(z3))
