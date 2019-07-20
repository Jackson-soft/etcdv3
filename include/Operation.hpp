#pragma once

#include <string>

namespace Uranus
{
enum class OpType {
    Range,
    Put,
    DeleteRange,
    Txn,
};

class Operation
{
public:
    Operation();
    ~Operation();

private:
    OpType mType;
    std::string mKey;
    std::string mEnd;
};
}  // namespace Uranus