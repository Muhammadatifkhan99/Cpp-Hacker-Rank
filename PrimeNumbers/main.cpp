#include <iostream>

int main() {

    int n;
    bool notPrime = false;
    std::cout<<"Enter a number to find out if its prime or not?";
    std::cin>>n;
    for(int i=2;i<n;i++){
        if (n%2 == 0){
            notPrime;
        }
        else
            notPrime = true;
    }
    if(notPrime) std::cout << "Prime Number" << std::endl;
    else
        std::cout<<"Not Prime Number"<<std::endl;

    return 0;
}
