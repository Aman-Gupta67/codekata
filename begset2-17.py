n=int(input("Enter a number: "))
a=len(str(abs(n)))
s=0

temp=n
while temp>0:
    digit=temp%10
    s+=digit**a
    temp//=10

if n==s:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")
