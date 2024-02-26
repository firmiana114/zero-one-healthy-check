#pragma once
/*
 Copyright Zero One Star. All rights reserved.
 
 @Author: awei
 @Date: 2022/10/24 23:29:24
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
      https://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _PREVIEWREPORT_FASTDFS_H_
#define _PREVIEWREPORT_FASTDFS_H_
#include <string>
using namespace std;

/**
 * ����FastDFS
 */
class PreviewReportFastDfs {
public:
	static std::string pdfDfsWithConf(string fileName);
};

#endif // _PREVIEWREPORT_FASTDFS_H_