words_list=["flowers" , "flow" , "fly", "flight"]
words_list.sort()

first=words_list[0]
last=words_list[-1]

n=len(first)
m=len(last)

mini=min(n,m)
common=""
for i in range(0,mini):
    if(first[i]==last[i]):
        common=common+first[i]
        break


print(common)
