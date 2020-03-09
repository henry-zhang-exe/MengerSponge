#include "camera.h"
#include <glm/gtc/matrix_transform.hpp>

namespace {
	float pan_speed = 0.1f;
	float roll_speed = 0.1f;
	float rotation_speed = 0.05f;
	float zoom_speed = 0.1f;
};

// FIXME: Calculate the view matrix
glm::mat4 Camera::get_view_matrix() const
{	
	return glm::lookAt(eye_, center_, up_);
}

void Camera::shift_foward() {
	eye_[2] -= .1;
	center_[2] -= .1;

}

void Camera::shift_backward() {
	eye_[2] += .1;
	center_[2] += .1;
}

void Camera::shift_up() {
	eye_[1] += .1;
	center_[1] += .1;
}

void Camera::shift_down() {
	eye_[1] -= .1;
	center_[1] -= .1;
}

void Camera::shift_right() {
	eye_[0] += .1;
	center_[0] += .1;
}

void Camera::shift_left() {
	eye_[0] -= .1;
	center_[0] -= .1;
}

void Camera::look_right() {
	center_[0] += .1;
}

void Camera::look_left() {
	center_[0] -= .1;
}

bool Camera::is_fps() {
	return fps_mode;
}

void Camera::change_mode() {
	fps_mode = !fps_mode;
}