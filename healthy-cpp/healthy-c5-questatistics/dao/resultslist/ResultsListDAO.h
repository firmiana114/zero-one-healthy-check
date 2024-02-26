#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: ���ܵ���
 @Date: 2024/1/19 17:36:29

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
#ifndef _RESULTSLIST_DAO_
#define _RESULTSLIST_DAO_
#include "BaseDAO.h"
#include "../../domain/do/resultslist/ResultsListDO.h"
#include "../../domain/query/resultslist/ResultsListQuery.h"

/*
 * �����۱����ݿ����ʵ��
 */
class ResultsListDAO : public BaseDAO
{
public:
	// ͳ����������
	uint64_t count(const ResultsListQuery::Wrapper& query);
	// ��ҳ��ѯ����
	list<ResultsListDO> selectWithPage(const ResultsListQuery::Wrapper& query);
};
#endif // !_RESULTSLIST_DAO_