




def fake_bin(x):
    temp = list(x)
    index = 0

    for i in temp:
        if int(i) < 5:
            temp[index] = '0'
        elif int(i) >= 5:
            temp[index] = '1'
        index += 1
    return ''.join(temp)
        
    
    
    
    
    

s = "45385593107843568"
print(fake_bin(s))




'''
def fake_bin(x):
    return ''.join('0' if c < '5' else '1' for c in x)
    
def fake_bin(x):
    result = ""
    for num in x:
        if int(num) < 5:
            result = result + "0"
        else:
            result = result + "1"
    return result
    
def fake_bin(s):
    return s.translate(string.maketrans('0123456789', '0000011111'))
    
def fake_bin(s):
  return ''.join('0' if int(c) < 5 else '1' for c in s)
  
def fake_bin(x):
    return "".join('0' if int(a)<5 else '1' for a in x)
'''