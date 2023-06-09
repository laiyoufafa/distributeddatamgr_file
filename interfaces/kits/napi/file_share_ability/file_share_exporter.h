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
#ifndef STORAGE_DISKMGR_INTERFACE_KITS_NAPI_DSM_FILE_SHARE_EXPORTER_H
#define STORAGE_DISKMGR_INTERFACE_KITS_NAPI_DSM_FILE_SHARE_EXPORTER_H

#pragma once

#include "../common/napi/n_exporter.h"

namespace OHOS {
namespace DistributedFS {
namespace ModuleFMSExpoter {
class FileShareExporter final : public NExporter {
public:
    inline static const std::string className_ = "FileShare";
    static napi_value FuzzyFileToUri(napi_env env, napi_callback_info info);

    bool Export() override;

    std::string GetClassName() override;

    FileShareExporter(napi_env env, napi_value exports);
    ~FileShareExporter() override;
};
} // namespace ModuleFMSExpoter
} // namespace DistributedFS
} // namespace OHOS

#endif // STORAGE_DISKMGR_INTERFACE_KITS_NAPI_DSM_FILE_SHARE_EXPORTER_H