#include "logger.hpp"
/***********
 * 项目spdlog_wrapper原地址：https://github.com/gqw/spdlog_wrapper
 *	本人稍作修改：
 *	修正 spdlog::level::error 中的 error 为 spdlog::level::err
 *	修正 spdlog::level::fatal 中的 fatal 为 spdlog::level::critical
 *	具体操作可见 doc.md
 ***********/


int main() {
	using namespace mylog;
	if (!logger::get().init("logs/test.log")) {
		return 1;
	}
	logger::get().set_level(spdlog::level::trace);
	STREAM_DEBUG() << "STM_DEBUG " << 1;
	PRINT_WARN("PRINT_WARN, %d", 1);
	LOG_INFO("LOG_INFO {}", 1);

	logger::get().set_level(spdlog::level::info);
	STREAM_DEBUG() << "STM_DEBUG " << 2;
	PRINT_WARN("PRINT_WARN, %d", 2);
	LOG_INFO("LOG_INFO {}", 2);

	// call before spdlog static variables destroy
	logger::get().shutdown();
	return 0;
}