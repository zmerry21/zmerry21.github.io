
def yfunc(t,v0):
    return v0*t + 0.5*g*t**2

def yfunc2(t):
    global v0
    v0=7
    return v0*t + 0.5*g*t**2

g=9.81 #global variable
v0=6   #global variable
y1=yfunc(0.1,6)
y2=yfunc(0.1,v0=6)
y3=yfunc(t=0.1,v0=6)
y4=yfunc(v0=6,t=0.1)
y5=yfunc2(0.1)
print(y1,y2,y3,y4,y5)
print(v0)
