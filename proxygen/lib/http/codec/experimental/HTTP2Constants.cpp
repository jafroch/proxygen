/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include <proxygen/lib/http/codec/experimental/HTTP2Constants.h>

namespace proxygen { namespace http2 {

const uint32_t kFrameHeaderSize = 9;

const uint32_t kFrameHeadersBaseMaxSize = kFramePrioritySize + 1;
const uint32_t kFramePrioritySize = 5;
const uint32_t kFrameRstStreamSize = 4;
const uint32_t kFramePushPromiseSize = 4;
const uint32_t kFramePingSize = 8;
const uint32_t kFrameGoawaySize = 8;
const uint32_t kFrameWindowUpdateSize = 4;

const uint32_t kFrameAltSvcSizeBase = 8;

const uint32_t kMaxFramePayloadLengthMin = (1u << 14);
const uint32_t kMaxFramePayloadLength = (1u << 24) - 1;
const uint32_t kMaxStreamID = (1u << 31) - 1;
const uint32_t kMaxWindowUpdateSize = (1u << 31) - 1;

const std::string kAuthority(":authority");
const std::string kMethod(":method");
const std::string kPath(":path");
const std::string kScheme(":scheme");
const std::string kStatus(":status");

const std::string kHttp("http");
const std::string kHttps("https");

const std::string kConnectionPreface("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
}}
