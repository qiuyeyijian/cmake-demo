#include <stdio.h>
#include <math.h>
#include <string>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Please enter two numbers");
        return 1;
    }
    printf("The program path is: %s\n", argv[0]);

    double a = std::stod(argv[1]);
    double b = std::stod(argv[2]);
    printf("%f ^ %f is: %0.3f", a, b, pow(a, b));

    return 0;
}
