#include "Vec3.h"

// -- Constructors 
Vec3::Vec3(float a , float b){

    x = a;
    y = b;
}

// -- Functions --
Vec3 Vec3::vec_add(Vec3& v, Vec3& u){
    return Vec3(v.x+u.x, v.y+u.y);
}

Vec3 Vec3::vec_sub(Vec3& v, Vec3& u){
    return Vec3(v.x-u.x, v.y-u.y);
}

float Vec3::Magnitude(Vec3& v){
    return sqrt(((v.x*v.x)+(v.y*v.y)));
}

float Vec3::dist(Vec3& v, Vec3& u){
    return ((sqrt(((v.x*v.x) + (v.y*v.y)))) - (sqrt(((u.x*u.x)+(u.y*u.y))))); 
}

// -- Overloaded Operators --
float Vec3::operator[](int i){
    return ((&x)[i]);
}

const float Vec3::operator[](int i) const{
    return ((&x)[i]);
}

inline Vec3& Vec3::operator+=(Vec3& v){
    x += v.x;
    y += v.y;
}

inline Vec3& Vec3::operator-=(Vec3& v){
    x -= v.x;
    y -= v.y;
}

inline std::ostream& operator<<(std::ostream& os, Vec3& v){
    os << v.x << "," << v.y << std::endl;
}