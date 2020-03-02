#include "menger.h"

namespace {
	const int kMinLevel = 0;
	const int kMaxLevel = 4;
};

Menger::Menger()
{
	// Add additional initialization if you like
}

Menger::~Menger()
{
}

void
Menger::set_nesting_level(int level)
{
	nesting_level_ = level;
	dirty_ = true;
}

bool
Menger::is_dirty() const
{
	return dirty_;
}

void
Menger::set_clean()
{
	dirty_ = false;
}

// generate a cube with a hole in it.                                 
void Menger::generate_punched_cube(glm::vec4 v0, glm::vec4 v1, glm::vec4 v2,
		glm::vec4 v3, glm::vec4 v4, glm::vec4 v5, glm::vec4 v6, glm::vec4 v7,
		std::vector<glm::vec4>& vtx_normals,
		std::vector<glm::uvec3>& obj_faces

// FIXME generate Menger sponge geometry
void
Menger::generate_geometry(std::vector<glm::vec4>& obj_vertices,
			  std::vector<glm::vec4>& vtx_normals,
                          std::vector<glm::uvec3>& obj_faces) const
{	
	//if ur confused draw it out

	// Front Face tri 1
	glm::vec4 v0 = glm::vec4(0.5f, 0.5f, 0.5f, 1.0f);
	glm::vec4 v1 = glm::vec4(0.5f, -0.5f, 0.5f, 1.0f);
	glm::vec4 v2 = glm::vec4(-0.5f, -0.5f, 0.5f, 1.0f);
	glm::vec4 v3 = glm::vec4(-0.5f, -0.5f, 0.5f, 1.0f);
	glm::vec4 v4 = glm::vec4(0.5f, 0.5f, -0.5f, 1.0f);
	glm::vec4 v5 = glm::vec4(-0.5f, 0.5f, -0.5f, 1.0f);            
	glm::vec4 v6 = glm::vec4(-0.5f, -0.5f, -0.5f, 1.0f);
	glm::vec4 v7 = glm::vec4(0.5f, -0.5f, -0.5f, 1.0f);


	obj_vertices.push_back(v0);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_vertices.push_back(v1);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_vertices.push_back(v2);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_faces.push_back(glm::uvec3(0, 1, 2));

	// Front face tri 2 

	obj_vertices.push_back(v3);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
 
	obj_faces.push_back(glm::uvec3(0, 2, 3));

	// Back face tri 1
	obj_vertices.push_back(v4);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_vertices.push_back(v5);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_vertices.push_back(v6);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_faces.push_back(glm::uvec3(4, 5, 6));

	//Back face tri 2
	obj_vertices.push_back(v7);
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));

	obj_faces.push_back(glm::uvec3(4, 6, 7));

	//Add faces that connect the front and back squares


	// Left side faces (connecting front + back)
	obj_faces.push_back(glm::uvec3(6, 3, 2));
	obj_faces.push_back(glm::uvec3(6, 5, 3));

	// Right side faces	 (connecting front + back)
	obj_faces.push_back(glm::uvec3(0, 4, 7));
	obj_faces.push_back(glm::uvec3(0, 7, 1));

	// Top faces (connecting front + back)
	obj_faces.push_back(glm::uvec3(4, 0, 5));
	obj_faces.push_back(glm::uvec3(5, 0, 3));

	// Bottom faces (connecting front + back)
	obj_faces.push_back(glm::uvec3(1, 7, 6));
	obj_faces.push_back(glm::uvec3(1, 6, 2));

	//Generate Base Cube with faces.

	// Generate single cube

	// For each iteration...


	// create 27 new cube within main cube via edges. 
	// obliterate old cube
	// determine normals
	//
}

