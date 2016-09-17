#!/usr/bin/python
__author__ = 'Ivan'
import sys
#Fibonacci iteratively

def fibonacci_iteratively(nth):
    Nminus2 = 0
    Nminus1 = 1
    result = 0
    if nth == 0:
        print "N:" , nth , " Fib(", int(nth) ,") = " , Nminus2 , " Length: " , len(str(Nminus2))
    if nth == 1:
        print "N:" , nth , " Fib(", int(nth) ,") = " , Nminus1 , " Length: " , len(str(Nminus1))
    else:
        i = 0
        print "N: 0 Fib( 0 ) = " , Nminus2 , " Length: " , len(str(Nminus2))  
        print "N: 1 Fib( 1 ) = " , Nminus1 , " Length: " , len(str(Nminus1))

        for i in range(2, nth ,1 ):
            #print 'i = %s' %(i)
            result = Nminus1 + Nminus2
            Nminus2 = Nminus1
            Nminus1 = result
            print "N:" , i , " Fib(", int(i) ,") = " , result , " Length: " , len(str(result))  
            
def main(argv):
    print "==========="
    print "N = " ,int(argv[0]) -1 
    print "==========="
    fibonacci_iteratively(int(argv[0]));

if __name__ == "__main__":
    main(sys.argv[1:])
    