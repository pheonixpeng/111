#include "Executor.hpp"
#include <gtest/gtest.h>
#include <memory>
#include <tuple>
namespace adas {
bool operator==(
    const Pose &lhs,
    const Pose &
        rhs) { // 为Pose定义==运算符重载，使得在测试中比较Pose对象变得简单明了，

    return std::tie(lhs.x, lhs.y, lhs.heading) ==
           std::tie(rhs.x, rhs.y, rhs.heading); // std::tie提高代码可读性
}
}