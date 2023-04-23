#include <Eigen/Core>
#include <Eigen/Dense>
#include <cmath>
#include <iostream>

int main() {
    Eigen::Vector3f p(2.0f, 1.0f, 1.0f);

    float sina = std::sin(45.0 / 180.0 * M_PI);
    float cosa = std::cos(45.0 / 180.0 * M_PI);

    // clang-format off
    Eigen::Matrix3f rotate;
    rotate << cosa, -sina, 0.0,
              sina, cosa,  0.0, 
              0.0,  0.0,   1.0;
    std::cout <<"rotate matrix" << std::endl;
    std::cout << rotate << std::endl;

    Eigen::Matrix3f transform;
    transform << 1.0, 0.0, 1.0,
                 0.0, 1.0, 2.0,
                 0.0, 0.0, 1.0;
    // clang-format on

    std::cout << "transform matrix" << std::endl;
    std::cout << transform << std::endl;
    std::cout << "final result" << std::endl;
    std::cout << transform * rotate * p << std::endl;

    return 0;
}
