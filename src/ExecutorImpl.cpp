#include "ExecutorImpl.hpp"
namespace adas {

Executor *Executor::NewExecutor(const Pose &pose) noexcept {
    return new (std::nothrow) ExecutorImpl(pose);
}

// 默认构造函数
ExecutorImpl::ExecutorImpl(const Pose &pose) noexcept : pose(pose) {}

// Execute函数
void ExecutorImpl::Execute(const std::string &commands) noexcept {}

// Query函数返回保存的pose
Pose ExecutorImpl::Query() const noexcept { return pose; }

} // namespace adas
