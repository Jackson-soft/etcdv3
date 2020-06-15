#pragma once

namespace Uranus
{
class Noncopyable
{
protected:
    Noncopyable()  = default;
    ~Noncopyable() = default;

public:
    Noncopyable(const Noncopyable &) = delete;
    auto operator=(const Noncopyable &) -> Noncopyable & = delete;
};
}  // namespace Uranus
