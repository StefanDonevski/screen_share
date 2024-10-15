#include <Python.h>
#include <iostream>

int main() {

    Py_Initialize();

    const char* pyscript = R"(

from vidstream import ScreenShareClient

ip = input("Enter ip: ")
port = int(input("Enter port: "))

connect = ScreenShareClient(ip, port)
connect.start_stream()
)";

    PyRun_SimpleString(pyscript);
    
    Py_Finalize();

    return 0;
}