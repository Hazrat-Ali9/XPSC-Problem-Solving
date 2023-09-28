s = input()
f=0
p=0
for i in range (len(s)):
    if s[i]=='.':
        p=i
num = int(s[:p])

dis = s[p+1:]
fd =int(dis[0])

if fd>=5:
    print(num+1)

else :print(num)
