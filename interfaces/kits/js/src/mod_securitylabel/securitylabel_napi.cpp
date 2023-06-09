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

#include "napi/native_api.h"
#include "napi/native_node_api.h"

#include "securitylabel_n_exporter.h"
#include "securitylabel_napi.h"

namespace OHOS {
namespace DistributedFS {
namespace ModuleSecurityLabel {
/***********************************************
 * Module export and register
 ***********************************************/
napi_value SecurityLabelExport(napi_env env, napi_value exports)
{
    static napi_property_descriptor desc[] = {
        DECLARE_NAPI_FUNCTION("setSecurityLabel", SetSecurityLabel),
        DECLARE_NAPI_FUNCTION("getSecurityLabel", GetSecurityLabel),
    };
    NAPI_CALL(env, napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc));
    return exports;
}

NAPI_MODULE(securitylabel, SecurityLabelExport)
} // namespace ModuleSecurityLabel
} // namespace DistributedFS
} // namespace OHOS