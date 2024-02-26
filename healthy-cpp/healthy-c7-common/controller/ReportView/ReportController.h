#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: DY
 @Date: 2022/10/25 0:27:04

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
#ifndef _REPORT_CONTROLLER_
#define _REPORT_CONTROLLER_

#include "domain/query/ReportView/ReportQuery.h"
#include "domain/vo/ReportView/ReportVO.h"

#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "ServerInfo.h"



// 0 ����API������ʹ�ú�
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

/**
 * ʾ������������ʾ�����ӿڵ�ʹ��
 */
class ReportController : public oatpp::web::server::api::ApiController // 1 �̳п�����
{
	// 2 ����������������
	API_ACCESS_DECLARE(ReportController);

public:
	
	// 3.1 �����ѯ�ӿ�����
	ENDPOINT_INFO(queryReport) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("report.query.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(ReportJsonVO);
		
		// ����ID
		API_DEF_ADD_QUERY_PARAMS(String, "personId", ZH_WORDS_GETTER("report.field.personId"), "1", true);
	
	}
	

	

	
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/report", queryReport, QUERIES(QueryParams, params), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		API_HANDLER_QUERY_PARAM(uq, ReportQuery, params);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execQueryreport(uq));
	}

	
	
	
	

private:

	// ִ�е��ļ��ϴ�����
	//StringJsonVO::Wrapper execUploadOne(std::shared_ptr<IncomingRequest> request);


	ReportJsonVO::Wrapper execQueryreport(const ReportQuery::Wrapper& query);

};
// 0 ȡ��API������ʹ�ú�
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _REPORT_CONTROLLER_