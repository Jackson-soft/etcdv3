#pragma once

namespace Uranus
{
class Noncopyable
{
protected:
    Noncopyable()  = default;
    ~Noncopyable() = default;

    Noncopyable(const Noncopyable &) = delete;
    Noncopyable &operator=(const Noncopyable &) = delete;
};
}  // namespace Uranus
