package com.zeroone.star.portfolioitems.config;

import com.zeroone.star.project.config.swagger.SwaggerCore;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import springfox.documentation.spring.web.plugins.Docket;
import springfox.documentation.swagger2.annotations.EnableSwagger2WebMvc;

/**
 * Swagger配置
 */

@Configuration
@EnableSwagger2WebMvc
public class SwaggerConfig {
    @Bean
    Docket sampleApis(){
        return SwaggerCore.defaultDocketBuilder("组合项目模块","com.zeroone.star.portfolioitems.controller","portfolioitems");
    }
}