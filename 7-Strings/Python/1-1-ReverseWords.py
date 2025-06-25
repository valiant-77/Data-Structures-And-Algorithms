s="hello world from me"

words=s.split()
n=len(words)
for i in range(0,n):
    words[i]=words[i][::-1]

res=" ".join(words)

print(res)