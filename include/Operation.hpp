#pragma one

#include <string>

enum class OpType {
    Range,
    Put,
    DeleteRange,
    Txn,
};

class Operation
{
public:
    Operation(/* args */);
    ~Operation();

private:
    OpType mType;
    std::string mKey;
    std::string mEnd;
};
