#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <gmp.h>
using namespace std;

void print_fibonacci (int nth)
{
  //mpz_t n_minus_2 = 0 , n_minus_1 = 1 , result = 0 ,
  mpz_t n_minus_2 , n_minus_1, result; 
  int length = 0;
  mpz_init(n_minus_2);
  mpz_init(n_minus_1);
  mpz_init(result);
  //string myStr;
  //char* hello;
  mpz_set_ui(n_minus_2,0);
  mpz_set_ui(n_minus_1,1);
  mpz_set_ui(result,0);
  std::string str;
  
  
  if(nth == 0){
    cout << "N: 0 Fib( 0 ) = " ;
    mpz_out_str(stdout,10,n_minus_2);
    cout << endl;
  }
  if(nth == 1){
    cout << "N: 1 Fib( 1 ) = " ;
    mpz_out_str(stdout,10,n_minus_1);
    cout << endl;
  }
  else {
    cout << "N: 0 Fib( 0 ) = "; 
    mpz_out_str(stdout,10,n_minus_2); 
    cout << endl;
    cout << "N: 1 Fib( 1 ) = ";
    mpz_out_str(stdout,10,n_minus_1);
    cout << endl;
    for(int i = 2 ;i < nth ; i++){
        mpz_add(result,n_minus_1,n_minus_2);   
        mpz_set(n_minus_2,n_minus_1);
        mpz_set(n_minus_1,result);
        cout << "N: "<< i << " Fib( " << i << " ) = ";
        mpz_out_str(stdout,10,result);
        cout << endl;
    }
  }
  //clean
  mpz_clear(n_minus_2);
  mpz_clear(n_minus_1);
  mpz_clear(result);
}

int main(int argc , char* argv[])
{
  int nth = atoi(argv[1]);  
  cout << "=======================" << endl;
  cout << "N: " << nth << endl;
  cout << "=======================" << endl;  
  print_fibonacci(nth);
  
	return 0;
}




/*
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



*/
