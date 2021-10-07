//
// Created by Andrew on 10/4/2021.
//
#include <iostream>
#include <node.h>
#include <nan.h>
using namespace v8;
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void Method(const FunctionCallbackInfo<Value>& args) {
    args.GetReturnValue().Set(args.Holder());
}


void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "hello", Method);
}

NODE_MODULE(callback_name, init)