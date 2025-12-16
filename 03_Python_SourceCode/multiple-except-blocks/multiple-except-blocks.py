'''
General Syntax: 
try: 
    BLOCK (one or more statements)
except ExceptionName_1: 
    BLOCK 
except ExceptionName_2: 
    BLOCK 
except ExceptionName_3: 
    BLOCK 
    .
    .
    .
except ExceptionName_N: 
    BLOCK 

At the end you can optionally add generic except block  
'''
#------------------------------------------------------------------------------------
triggerNameError = 1 
triggerValueError = 2 
triggerTypeError = 3 
#------------------------------------------------------------------------------------
def trigger(whichException): 
    if whichException == triggerNameError: 
        print('trigger():Writing a statement which will trigger a NameError')
        print(x) # NameError exception will be raised 
    elif whichException == 2: 
        print('trigger():Writing a statement which will trigger a ValueError')
        L = [10, 20, 30, 40]
        L.remove(500) # ValueError exception will be raised 
    elif whichException == 3: 
        print('trigger():Writing a statement which will trigger a TypeError')
        s = "Hello"
        return s / 500.500
    else: 
        print('trigger():Writing a statement which will trigger an AttributeError')
        raise AttributeError('he exception ugach raise kela ahe')
    
#------------------------------------------------------------------------------------
try: 
    print('----Start of try block----')
    n = int(input('Enter an integer between 1 to 3:'))
    trigger(n)
    print('----End of try block')
except NameError: 
    print('An undefined variable must have got accessed in RHS sense')
except ValueError: 
    print('A wrong value must have been provided somewhere')
except TypeError: 
    print('An incompatible operation must have got invoked on some object')
except: 
    print('Some unanticipated error')
#------------------------------------------------------------------------------------
