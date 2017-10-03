#include "Transform.h"

// Sets the transform of a 3D object
Transform::Transform(glm::vec3 transform)
{
	matrix4 m4Translate = glm::translate(IDENTITY_M4, transform);
}

void Transform::SetScale(glm::vec3 scalar)
{
	matrix4 m4Scale = glm::scale(IDENTITY_M4, scalar);
}

void Transform::Translate(glm::vec3 translation)
{
	matrix4 m4Translate = glm::translate(IDENTITY_M4, translation);
}

void Transform::Scale(glm::vec3 scalar)
{
	matrix4 m4Scale = glm::scale(IDENTITY_M4, scalar);
}
