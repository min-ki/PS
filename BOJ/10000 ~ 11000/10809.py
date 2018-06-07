s = input()

alphabet_item = ['a','b','c','d','e','f','g','h','i','j',
                 'k','l','m','n','o','p','q','r','s','t',
                 'u','v','w','x','y','z']

alphabet = {'a' : -1,'b' : -1,'c' : -1,'d' : -1,'e' : -1,'f' : -1,'g' : -1,
            'h' : -1,'i' : -1,'j' : -1,'k' : -1,'l' : -1,'m' : -1,'n' : -1,
            'o' : -1,'p' : -1,'q' : -1,'r' : -1,'s' : -1,'t' : -1,'u' : -1,
            'v' : -1,'w' : -1,'x' : -1,'y' : -1,'z' : -1}

for i in range(len(s)):
    for j in range(len(alphabet_item)):
        if s[i] == alphabet_item[j]:
            alphabet[s[i]] =  s.find(s[i])

for i in range(len(alphabet)):
    print(alphabet[alphabet_item[i]], end=" ")
