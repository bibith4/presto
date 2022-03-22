// DO NOT EDIT : This file is generated by presto_protocol-to-thrift-json.py
/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

// This file is generated DO NOT EDIT @generated
// This file is generated DO NOT EDIT @generated

#include "presto_cpp/main/thrift/gen-cpp2/PrestoThrift.h"
#include "presto_cpp/presto_protocol/presto_protocol.h"

namespace facebook::presto {

void toThrift(protocol::TaskState& proto, thrift::TaskState& thrift);
void toThrift(protocol::ErrorType& proto, thrift::ErrorType& thrift);
void toThrift(const protocol::Lifespan& proto, thrift::Lifespan& thrift);
void toThrift(
    const protocol::ErrorLocation& proto,
    thrift::ErrorLocation& thrift);
void toThrift(const protocol::HostAddress& proto, thrift::HostAddress& thrift);
void toThrift(const protocol::TaskStatus& proto, thrift::TaskStatus& thrift);
void toThrift(const protocol::ErrorCode& proto, thrift::ErrorCode& thrift);
void toThrift(
    const protocol::ExecutionFailureInfo& proto,
    thrift::ExecutionFailureInfo& thrift);

} // namespace facebook::presto