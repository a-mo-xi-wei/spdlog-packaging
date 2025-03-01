# 封装spdlog作为库被包含

#### 介绍
简单封装spdlog开源库，并且将其作为子模块被包含，供其他模块使用

/***********
 * 项目spdlog_wrapper原地址：https://github.com/gqw/spdlog_wrapper
 *	本人稍作修改：
 *	修正 spdlog::level::error 中的 error 为 spdlog::level::err
 *	修正 spdlog::level::fatal 中的 fatal 为 spdlog::level::critical
 *	具体操作可见 doc.md

 ***********/
