b=input()
l=["A","E","I","O","U","Y"]
c=int(b[0])+int(b[1])
d=int(b[3])+int(b[4])
e=int(b[4])+int(b[5])
f=int(b[7])+int(b[8])
if b[2] in l:
    print("invalid")

elif c%2==0 and d%2==0 and e%2==0 and f%2==0:
    print("Valid")
else:
    print("invalid")
