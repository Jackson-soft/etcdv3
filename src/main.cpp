#include <grpc++/grpc++.h>
#include <iostream>

int main()
{
    grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    return 0;
}
