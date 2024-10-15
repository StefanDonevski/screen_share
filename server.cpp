#include <Python.h>
#include <iostream>

int main() {

    Py_Initialize();

    const char* pyscript = R"(
from vidstream import StreamingServer

ip = input("Enter ip: ")

server = StreamingServer(ip, 5000)
server.start_server()

while input("") != '123':
    continue

server.stop_server()
)";

    PyRun_SimpleString(pyscript);

    Py_Finalize();
    
    return 0;
}