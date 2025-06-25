s = "470983706987506"

n = len(s)

start=-1
end=-1
for i in range(n):
    if int(s[i]) != 0:
        start = i
        break


for j in range(n - 1, -1, -1):
    if int(s[j]) % 2!= 0:
        end = j
        break

if(end==-1 and start==-1):
    print( " ")
else:
    print((s[start:end+1]))

