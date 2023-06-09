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

#include "environment_napi.h"
#include "environment_n_exporter.h"

#include "napi/native_api.h"
#include "napi/native_node_api.h"

namespace OHOS {
namespace DistributedFS {
namespace ModuleEnvironment {
/***********************************************
 * Module export and register
 ***********************************************/
napi_value EnvironmentExport(napi_env env, napi_value exports)
{
    static napi_property_descriptor desc[] = {
        DECLARE_NAPI_FUNCTION("getStorageDataDir", GetStorageDataDir),
        DECLARE_NAPI_FUNCTION("getUserDataDir", GetUserDataDir),
    };
    NAPI_CALL(env, napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc));
    return exports;
}

NAPI_MODULE(environment, EnvironmentExport)
} // namespace ModuleEnvironment
} // namespace DistributedFS
} // namespace OHOS