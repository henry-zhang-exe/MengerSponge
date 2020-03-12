#include "camera.h"
#include <glm/gtc/matrix_transform.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/rotate_vector.hpp>

#include <math.h>

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
	eye_[2] -= zoom_speed;
	center_[2] -= zoom_speed;

}

void Camera::shift_backward() {
	eye_[2] += zoom_speed;
	center_[2] += zoom_speed;
}

void Camera::shift_up() {
	eye_[1] += pan_speed;
	center_[1] += pan_speed;
}

void Camera::shift_down() {
	eye_[1] -= pan_speed;
	center_[1] -= pan_speed	;
}

void Camera::shift_right() {
	eye_[0] += pan_speed;
	center_[0] += pan_speed;
}

void Camera::shift_left() {
	eye_[0] -= pan_speed;
	center_[0] -= pan_speed;
}

void Camera::look_right() {
	center_[0] += pan_speed;
}

void Camera::look_left() {
	center_[0] -= pan_speed;
}

void Camera::rollc() {
	up_[0] = up_[0]*cos(roll_speed) - up_[1]*sin(roll_speed);
	up_[1] = up_[0]*sin(roll_speed) + up_[1]*cos(roll_speed);	
}

void Camera::rollcc() {
	up_[0] = up_[0]*cos(-roll_speed) - up_[1]*sin(-roll_speed);
	up_[1] = up_[0]*sin(-roll_speed) + up_[1]*cos(-roll_speed);
}

void Camera::shift_orbit_up() {
	center_[1] += pan_speed;
}

void Camera::shift_orbit_down() {
	center_[1] -= pan_speed;
}

void Camera::shift_camera_up() {
	eye_[1] += pan_speed;
}

void Camera::shift_camera_down() {
	eye_[1] -= pan_speed;
}

void Camera::zoom(double mousey) {
	double difference = zoom_speed*(mousey - mousey_);
	eye_[2] -= difference;
	camera_distance_ = glm::length(center_ - eye_);
	mousey_ = mousey;
}

void Camera::rotate_fps(double mousex, double mousey) {
	look_ = glm::rotate(look_, -(float)(rotation_speed * (mousex_ - mousex)/100), up_);
	glm::vec3 perpen = glm::normalize(glm::cross(look_, up_));
	//up_ = glm::normalize(glm::cross(look_, perpen));
	look_ = glm::rotate(look_, -(float)(rotation_speed * (mousey_ - mousey)/100), perpen);
	center_ = look_ * camera_distance_ + eye_;
	mousex_ = mousex;
	mousey_ = mousey;
}

void Camera::rotate_orbital(double mousex, double mousey) {

}
bool Camera::is_fps() {
	return fps_mode;
}

void Camera::change_mode() {
	fps_mode = !fps_mode;
}