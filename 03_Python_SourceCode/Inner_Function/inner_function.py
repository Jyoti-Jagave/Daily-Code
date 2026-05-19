def fun1(): 
    a = 45
    def fun2(): 
        nonlocal a 
        a=54
        print(a)
    fun2()
    print(a)
fun1()