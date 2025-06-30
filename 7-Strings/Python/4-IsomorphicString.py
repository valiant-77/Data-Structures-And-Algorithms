
s="egg"
t="ada"
s_indices = []
t_indices = []

for c in s:
        s_indices.append(s.index(c))  # first index of each character in s

for c in t:
        t_indices.append(t.index(c))  # first index of each character in t

if s_indices == t_indices:
 print(True)
else:
 print (False)
    

