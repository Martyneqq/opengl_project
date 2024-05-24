#pragma once

#include <glm/glm.hpp>
#include <memory>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glfw/glfw3.h>

class Camera {
private:
    glm::mat4 projectionMatrix = glm::perspective(glm::radians(45.0f), 4.0f / 3.0f, 1.0f, 150.0f);
    glm::vec3 position;
    glm::vec3 direction;
    glm::vec3 upVector;

public:
    float currentTime;

    Camera(); // default params
    Camera(const glm::vec3& startPosition);
    Camera(const glm::vec3& startPosition, const glm::vec3& startDirection);
    Camera(const glm::vec3& startPosition, const glm::vec3& startDirection, const glm::vec3& startOrientation);


    void move(glm::vec3 moveVector);
    void moveRight(float movement);
    void moveLeft(float movement);
    void moveForward(float movement);
    void moveBackward(float movement);
    void moveBind(GLFWwindow* window);

    void setPosition(glm::vec3 newPosition);
    void ground();

    void setProjectionMatrixRatio(float ratio);
    void setProjectionMatrixRatio(float width, float height);
};