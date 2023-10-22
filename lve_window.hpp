#pragma once

#include <string>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace lve {
class LveWindow {
public:
    LveWindow(const int w, const int h, std::string name);
    ~LveWindow();

    LveWindow(const LveWindow &) = delete;
    LveWindow &operator=(const LveWindow &) = delete;

    bool shouldClose();
    void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);
private:
    void initWindow();

    const int width;
    const int height;

    std::string windowName;
    GLFWwindow *window; 
};
}
