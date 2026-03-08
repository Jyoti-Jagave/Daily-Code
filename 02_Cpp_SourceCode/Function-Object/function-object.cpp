#include <iostream>
#include <thread>

using namespace std;

// Define a function object 
class SumFunctor {
public:
    int n;
    SumFunctor(int a) : n(a) {}

    // Overload the operator() to
    // make it callable
    void operator()() const{
        cout << n;
    }
    
};

int main(){
    // Create a thread using
    // the functor object
    thread t (SumFunctor(3));

    // Wait for the thread to 
    // complete
    t.join();
    return 0;
}