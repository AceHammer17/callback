//
// Created by Andrew on 10/4/2021.
//
#include <iostream>
#include <node.h>
using v8::Context;
using v8::Function;
using v8::FunctionCallbackInfo;
using v8::FunctionTemplate;
using v8::Isolate;
using v8::Local;
using v8::Number;
using v8::Object;
using v8::Persistent;
using v8::String;
using v8::Value;
using v8::Array;
using v8::Exception;
using namespace v8;


void Method(const FunctionCallbackInfo<Value>& args) {
    args.GetReturnValue().Set(args.Holder());
}


void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "RBG", Method);
}

//Name to call
NODE_MODULE(callback_name, init)