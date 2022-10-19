

def gap(g, m, n):
    prime_arr = []
    prime_range = range(m, n+1)   
    #print(prime_range)
    
    for i in prime_range:
        #print(i)
        div_counter = 0
        for k in range(2, n): # start at two if change to one change div_counter check to < 1
            if (i % k) == 0:
               #print('%d is divisible by %d' % (i, k))
               div_counter += 1
               #print(div_counter)
        if div_counter <= 1:
            prime_arr.append(i)            
            #print('%d is prime' % i)
    #print(prime_arr)
    
    for i in range(len(prime_arr) - 1):       
        if prime_arr[i+1] - prime_arr[i] == g:
            return [prime_arr[i], prime_arr[i+1]]
        
    

# use previous prime instead of calculating each number seperately
'''def gap(g, m, n):
    previous_prime = n
    for i in range(m, n + 1):
        if is_prime(i):
            if i - previous_prime == g: 
                return [previous_prime, i]
            previous_prime = i
    return None
            
    
def is_prime(n):
    for i in range(2, int(n**.5 + 1)):
        if n % i == 0:
            return False
    return True    '''
   
print(gap(10,1,100000)) #[101, 103]
'''print(gap(4,100,110)) #[103, 107]
print(gap(6,100,110)) #None
print(gap(8,300,400)) #[359, 367]
print(gap(10,300,400)) #[337, 347]
print(gap(2,100,103)) #[101, 103]'''