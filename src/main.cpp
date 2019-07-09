#include <grpc++/grpc++.h>
#include <iostream>

<<<<<<< HEAD
int main()
{
    grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
=======
#include "Client.hpp"

int main() {
>>>>>>> 5dafaf54e891df491f699031e8dccfd9678f7e1c
    return 0;
}
