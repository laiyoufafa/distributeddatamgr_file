/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INTERFACES_KITS_NAPI_COMMON_COMMON_FUNC_H
#define INTERFACES_KITS_NAPI_COMMON_COMMON_FUNC_H

#include <string>
#include "napi/uni_header.h"

namespace OHOS {
namespace DistributedFS {
const std::string FUNC_PROP_SUCCESS = "success";
const std::string FUNC_PROP_FAIL = "fail";
const std::string FUNC_PROP_COMPLETE = "complete";

struct CommonFunc {
    static std::tuple<bool, napi_ref, napi_ref, napi_ref> GetCallbackHandles(napi_env env,
                                                                             napi_value object);
};
} // namespace DistributedFS
} // namespace OHOS
#endif