#pragma once
#ifndef _CRITICALQUERY_H_
#define _CRITICALQUERY_H_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个查询用户信息的数据查询模型
 */
class CriticalQuery : public oatpp::DTO
{
	// 定义初始化
	DTO_INIT(CriticalQuery, DTO);
	//Id
	API_DTO_FIELD_DEFAULT(UInt64, id, ZH_WORDS_GETTER("critical.field.id"));
	//等级
	API_DTO_FIELD_DEFAULT(String, level, ZH_WORDS_GETTER("critical.field.level"));
	//类型
	API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("critical.field.type"));
	//区间值
	API_DTO_FIELD_DEFAULT(String, intervalValue, ZH_WORDS_GETTER("critical.field.intervalValue"));
	//适合性别
	API_DTO_FIELD_DEFAULT(String, allowSex, ZH_WORDS_GETTER("critical.field.allowSex"));
	//年龄最低值
	API_DTO_FIELD_DEFAULT(UInt32, minAge, ZH_WORDS_GETTER("critical.field.minAge"));
	//年龄最高值
	API_DTO_FIELD_DEFAULT(UInt32, maxAge, ZH_WORDS_GETTER("critical.field.maxAge"));
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_USERQUERY_H_