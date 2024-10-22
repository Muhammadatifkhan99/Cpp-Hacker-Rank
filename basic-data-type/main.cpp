#include <iostream>
#include<iomanip>

int main() {

//    Some C++ data types, their format specifiers, and their most common bit widths are as follows:
//
//    Int ("%d"): 32 Bit integer
//    Long ("%ld"): 64 bit integer
//    Char ("%c"): Character type
//    Float ("%f"): 32 bit real value
//    Double ("%lf"): 64 bit real value

double a;
//scanf("`format specifier`", &val);

//for reading we use the & sign
//scanf("%lf",&a);

//for print no & is used
//printf("%lf", a);

    int i{0};
    long ld{0};
    char s{};
    float d1 {0};
    double d2 {0};
    scanf("%d %ld %c %f %lf",&i,&ld,&s,&d1,&d2);
//    printf("%d %ld %c %f %lf", i, ld, s, d1, d2);

    std::cout<<i<<std::endl;
    std::cout<<ld<<std::endl;
    std::cout<<s<<std::endl;
    std::cout<<std::fixed << std::setprecision(3)<<d1<<std::endl;
    std::cout<<std::fixed << std::setprecision(5)<<d2<<std::endl;
    return 0;
}
