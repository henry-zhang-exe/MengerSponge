#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>

class Camera {
public:
	glm::mat4 get_view_matrix() const;
	void shift_foward();
	void shift_backward();
	void shift_up();
	void shift_down();
	void shift_right();
	void shift_left();
	void rotate_right();
	void rotate_left();
	void look_right();
	void look_left();
	bool is_fps();
	void change_mode();
	// FIXME: add functions to manipulate camera objects.
private:
	float camera_distance_ = 3.0;
	glm::vec3 look_ = glm::vec3(0.0f, 0.0f, -1.0f);
	glm::vec3 up_ = glm::vec3(0.0f, 1.0f, 0.0f);
	glm::vec3 eye_ = glm::vec3(0.0f, 0.0f, camera_distance_);
	glm::vec3 center_ = glm::vec3(0.0f, 0.0f, 0.0f);
	bool fps_mode = true;
	// Note: you may need additional member variables
};

#endif
