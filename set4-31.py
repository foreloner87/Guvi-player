s=input()
f=0
for x in s:
    if(x=='('):
        f+=1;
    if(x==')'):
        f-=1;
if(f==0):
    print("yes")
else:
    print("no")
