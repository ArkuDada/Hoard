#pragma once
class TimerSystem
{
private:
	float tick;
	float tickStart;
	bool isActive;

public:
	TimerSystem();
	TimerSystem(float);
	void Tick(float);
	bool TimerEnd();
	void TimerReset();
};

