/*----------------------------------------------
Programmer: Jason Ketcherside (jmk1426@g.rit.edu)
Date: 2017/05
----------------------------------------------*/
#ifndef __TRANSFORM_H_
#define __TRANSFORM_H_

#include "Definitions.h"

class Transform
{
	glm::vec3 transformation;
	glm::vec3 scale;


// Sets the transform of the mesh object
void SetTransformation();

// Sets the scale of the mesh object
void SetScale();

// Translates the transform by a vec3 argument
void Translate(glm::vec3 translation);

// Scales the transform by a float argument
void Scale(float scalar);

};

#endif //__TRANSFORM_H_
