#ifndef OBJECT_H
#define OBJECT_H

#include "Ray.h"

class Material;

// Records whenever a Ray hits an Object.
struct hit_record
{
    float t;     // Number needed for a Ray to reach the surface of an Object.
    Vec p;       // The location where the Ray hits the Object.
    Vec normal;  // The (unit) normal vector for the hit point.
	Material *mat;
};

class Object
{
public:
    // Pure virtual function. Tests to see if an Object is hit by a Ray.
    virtual bool hit(const Ray &r, float t_min, float t_max, hit_record &rec) = 0;
};

#endif