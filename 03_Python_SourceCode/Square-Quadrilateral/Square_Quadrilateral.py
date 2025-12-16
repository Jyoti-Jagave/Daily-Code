# SERVER SIDE 

class Quadrilateral: 
    def __init__(self, s1:float, s2:float, s3:float, s4:float): 
        # Validation checks for type and value 
        # Type validation 
        acceptable_types = (int, float)
        if type(s1) not in acceptable_types: 
            raise TypeError('Bad Type for s1')
        if type(s2) not in acceptable_types: 
            raise TypeError('Bad Type for s2')
        if type(s3) not in acceptable_types: 
            raise TypeError('Bad Type for s3')
        if type(s4) not in acceptable_types: 
            raise TypeError('Bad Type for s4')
        # Value validation 
        if s1 <= 0 or s2 <= 0 or s3 <= 0 or s4 <= 0:
            raise ValueError('Side of square cannot be negative or zero')

        if (
            (s1 + s2 + s3) <= s4 or 
            (s2 + s3 + s4) <= s1 or 
            (s3 + s4 + s1) <= s2 or 
            (s4 + s1 + s2) <= s3
        ): 
            raise ValueError('Sum of any three sides of quadrilateral must be greater than the fourth')
        
        # Validation check is over. Now create property names 's1', 's2', 's3' and 's4' in a
        # new Quadrilateral object named by self and actual parameters to formal parameters 
        # s1, s2, s3, and s4 will be thier property values, respectively. 
        self.s1 = s1 
        self.s2 = s2 
        self.s3 = s3 
        self.s4 = s4 

    
    def perimeter(self): 
        print('----Entered Quadrilateral.perimeter()----')
        print(f'type(self):{type(self)}, self.__dict__:{self.__dict__}')
        P = self.s1 + self.s2 + self.s3 + self.s4 
        print('----Leaving Quadrilateral.perimeter()----')
        return P 


    def area(self): 
        s = self.perimeter() / 2   
        return (((s - self.s1) * (s - self.s2) * (s - self.s3) * (s - self.s4)) ** 0.5)


    def __str__(self): 
        return f'Side1:{self.s1} units, Side2:{self.s2} units, Side3:{self.s3} units, Side4:{self.s4} units'

# class Square  is-a    class Quadrilateral
class Square(Quadrilateral): 
    def __init__(self, s:float): 
        print('----Entered Square.__init__()----')
        print('self.__dict__:', self.__dict__) # EMPTY 
        Quadrilateral.__init__(self, s, s, s, s)
        print('self.__dict__:', self.__dict__) # ATTRIBUTE READY 
        self.s = s
        print('self.__dict__:', self.__dict__) # ATTRIBUTE READY 
        print('----Leaving Square.__init__()----')

    def __str__(self): 
        quadStr = Quadrilateral.__str__(self)
        outputStr = quadStr + f' Side:{self.s} units'
        return outputStr 

S = Square(10.0) 
P = S.perimeter() # Quadrilateral.perimeter(S)
A = S.area() 
print('Square:', S)
print(f'Area of Square S:{A} square units, Perimeter of Suqare S:{P} units')