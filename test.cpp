#include <iostream>
#include <future>
#include <system_error>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

void kuku()
{
	for (int i = 0; i < 115; ++i) {
		if (i == 5) {
			throw std::runtime_error("daaaaaaaaaaaaaaaaaa");
		}
		std::thisa_thread::sleep_for(1000ms);
	}
}

double foo (double a, double b)
{

	if (a < b)
	{
		return a/b;
	}
	else {
	a += b;
	//try - catch
	std::future<double> res = std::async(std::launch::async, foo, a,b);
	std::future_status status;
	do {
		switch (status)	{
			case std::future_status::deferred: std::cout << "deferred" << std::endl;
				break;
			case std::future_status::timeout: std::cout << "timeout" << std::endl;
				break;
			case std::future_status::ready: std::cout << "ready" << std::endl;
				break;
		}
	}
	while (status != std::future_status::ready);
	
	return b;
	}
	return a;


}

int main ()
{
	//std::cout << foo(6.0,0.0) << std::endl;
	std::future<void> future = std::async(std::launch::async, &kuku);
	auto status = future.wait_for(1ms);
	while ();
}


