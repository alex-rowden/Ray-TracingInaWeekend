#pragma once

#ifndef RAYH
#define RAYH
#include "vec3.h"
class Ray
{
public:
	vec3 pos, dir;
	Ray() {};
	Ray(const vec3& pos, const vec3& dir) { this->pos = pos; this->dir = dir; }
	vec3 origin() const { return pos; }
	vec3 direction() const { return dir; }
	vec3 point_at_parameter(float t) const { return pos + dir * t; }
};

#endif