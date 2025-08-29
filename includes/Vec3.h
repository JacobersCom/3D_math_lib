#include <iostream>

class Vec3{
public:
    
// -- Constructors --
    
    Vec3() = default;
    Vec3(float x, float y);
    
// -- Functions -- 
    
    Vec3 vec_add(Vec3& v, Vec3& u);
    Vec3 vec_sub(Vec3& v, Vec3& u);
    float Magnitude(Vec3& v);
    float dist(Vec3& v, Vec3& u);
    Vec3 normal(Vec3& v);

// -- Operator Overloads -- 
    
    float operator[](int i);

    const float operator[](int i) const;

    inline Vec3& operator+=(Vec3& v);

    inline Vec3& operator-=(Vec3& v);

    friend inline Vec3& operator/(Vec3& v, float s);

    friend inline std::ostream& operator<<(std::ostream& os, Vec3& v);
   

protected:

    float x,y;

};