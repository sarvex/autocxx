// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This example shows Rust subclasses of C++ classes.
// Here are the C++ classes which we're subclassing.

#pragma once

#include <string>
#include <memory>

class MessageProducer {
public:
    MessageProducer() {} // necessary due to https://github.com/google/autocxx/issues/122
    virtual std::string get_message() const = 0;
    virtual ~MessageProducer() {};
};

class MessageDisplayer {
public:
    MessageDisplayer() {}
    virtual void display_message(const std::string& message) const = 0;
    virtual ~MessageDisplayer() {};
};

void register_cpp_thingies();
void register_producer(const MessageProducer& producer);
void register_displayer(const MessageDisplayer& displayer);

void run_demo();
