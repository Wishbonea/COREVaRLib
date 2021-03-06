#ifndef SRC_CORELIBRARY_COREHARDWARE_CORETIMER_H_
#define SRC_CORELIBRARY_COREHARDWARE_CORETIMER_H_

#ifndef SIMULATION
#include "WPILib.h"
#endif

#include <chrono>

namespace CORE {
namespace COREHardware {
class CORETimer {
private:
	std::chrono::high_resolution_clock::time_point startTime, stopTime;
	bool started = false;
	bool stopped = false;
public:
	double Get();
	void Stop();
	void Reset();
	void Start();
};

}
}
#endif
