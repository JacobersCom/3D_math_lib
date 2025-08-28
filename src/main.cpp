#include <Vec3.h>
#include <iostream>

//Always make sure you're in Dev branch before coding

int main(){
    Vec3 vector(2.0f, 2.0f);
    Vec3 vector2(5.0f, 4.0f);

    Vec3 resutls = vector.vec_add(vector, vector2);

    std::cout << resutls;
}