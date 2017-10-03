/*----------------------------------------------
Programmer: Jason Ketcherside (jmk1426@g.rit.edu)
Date: 2017/05
----------------------------------------------*/
#ifndef __TRANSFORM_H_
#define __TRANSFORM_H_

#include "Definitions.h"

class Transform
{

public:
// Sets the transform of the mesh object
Transform(glm::vec3 transform);

// Sets the scale of the mesh object
void SetScale(glm::vec3 scalar);

// Translates the transform by a vec3 argument
void Translate(glm::vec3 translation);

// Scales the transform by a float argument
void Scale(glm::vec3 scalar);

};

#endif //__TRANSFORM_H_
