#include "menger.h"
#include <iostream>


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


void 
Menger::generate_cube(glm::vec4 corner, float distance, int L, std::vector<glm::vec4>& obj_vertices, 
	std::vector<glm::vec4>& vtx_normals, std::vector<glm::uvec3>& obj_faces) 
{

	// glm::vec4 v0 = glm::vec4(0.5f, 0.5f, 0.5f, 1.0f);
	// glm::vec4 v1 = glm::vec4(-0.5f, 0.5f, 0.5f, 1.0f);
	// glm::vec4 v2 = glm::vec4(-0.5f, -0.5f, 0.5f, 1.0f);
	// glm::vec4 v3 = glm::vec4(-0.5f, 0.5f, 0.5f, 1.0f);
	// glm::vec4 v4 = glm::vec4(0.5f, 0.5f, -0.5f, 1.0f);
	// glm::vec4 v5 = glm::vec4(0.5f, -0.5f, -0.5f, 1.0f);            
	// glm::vec4 v6 = glm::vec4(-0.5f, -0.5f, -0.5f, 1.0f);
	// glm::vec4 v7 = glm::vec4(-0.5f, 0.5f, -0.5f, 1.0f);

	// // When generating faces, put v's in counterclockwise!!!


	
	//front face
	float x = corner[0];
	float y = corner[1];
	float z = corner[2];
	float one_third = (1.0f/3.0f)*distance;

	int size = obj_faces.size()*3;

	obj_vertices.push_back(glm::vec4(x + distance, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 0, size + 1, size + 2));

	obj_vertices.push_back(glm::vec4(x + distance, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 3, size + 4, size + 5));

	//back face
	obj_vertices.push_back(glm::vec4(x + distance, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x,  y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 6, size + 7, size + 8));
    
	obj_vertices.push_back(glm::vec4(x + distance, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 9, size + 10, size + 11));

	//right face
	obj_vertices.push_back(glm::vec4(x + distance, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 12, size + 13, size + 14));

	obj_vertices.push_back(glm::vec4(x + distance, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 15, size + 16, size + 17));

	//left face
	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 18, size + 19, size + 20));

	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 21, size + 22, size + 23));

	//top face
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 24, size + 25, size + 26));

	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y + distance, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 27, size + 28, size + 29));

	//bottom face
	obj_vertices.push_back(glm::vec4(x + distance, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(size + 30, size + 31, size + 32));

	obj_vertices.push_back(glm::vec4(x + distance, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + distance, y, z - distance, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f ));
	obj_faces.push_back(glm::uvec3(size + 33, size + 34, size + 35));




}

// generate a cube with a hole in it.                                 
//void Menger::generate_punched_cube(glm::vec4 v0, glm::vec4 v1, glm::vec4 v2,
//		glm::vec4 v3, glm::vec4 v4, glm::vec4 v5, glm::vec4 v6, glm::vec4 v7,
//		std::vector<glm::vec4>& vtx_normals,
//		std::vector<glm::uvec3>& obj_faces)

// FIXME generate Menger sponge geometry

void
Menger::generate_menger(glm::vec4 corner, float distance, int L, std::vector<glm::vec4>& obj_vertices, 
	std::vector<glm::vec4>& vtx_normals, std::vector<glm::uvec3>& obj_faces) 
{

	
	if(L == 0)	 {
		// Recursion done. Generate cube from current corner and distance.
		Menger::generate_cube(corner, distance, L, obj_vertices, vtx_normals,  obj_faces);
	}
	//20 recursive call
	else {
		//generate new starting verts and new distance
		float new_dist = distance/3.0f;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					if(!(i == 1 && j == 1) &&
						!(j == 1 && k == 1) &&
						!(i == 1 && k == 1)) {
						// if not hole, 
						// recursive call
						 std::cout << "bitch ass\n";
						glm::vec4 new_corner = glm::vec4(corner[0] + (float)i * new_dist, corner[1] + (float)j * new_dist, corner[2] - (float)k * new_dist, 1.0f);
						std::cout << new_corner[0] << new_corner[1] << new_corner[2] << "\n";
						Menger::generate_menger(new_corner, new_dist, L - 1, obj_vertices, vtx_normals, obj_faces);
					}

				}
			}
		}
	}





}


void
Menger::generate_geometry(std::vector<glm::vec4>& obj_vertices,
			  std::vector<glm::vec4>& vtx_normals,
                          std::vector<glm::uvec3>& obj_faces) 
{	
	obj_vertices.clear();
	vtx_normals.clear();
	obj_faces.clear();
	// Generate initial vertices

	// front bottom left vertex
	glm::vec4 initial_vertex = glm::vec4(-0.5f, -0.5f, 0.5f, 1.0f);
	float initial_distance = 1.0f;
	int L = nesting_level_;


	//Make recursive call

	generate_menger(initial_vertex, initial_distance, L, obj_vertices, vtx_normals, obj_faces);






	//Generate Base Cube with faces.

	// Generate single cube

	// For each iteration...


	// create 27 new cube within main cube via edges. 
	// obliterate old cube
	// determine normals
	//
}

