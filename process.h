#include <stdio.h>

using namespace std;
class Process {
	private:
		int pid;
		int burstTime;
		int arrival;
		int priority;
		int io;
		int timeleft;
		int deadline;
		int waitedTime;
		int currentQuantum;
		int currentQueue;
        int originalPriority;
		int originalIO;

	public:
		Process(int pid, int burstTime, int arrival, int priority, int io, int deadline);
		int getPid() const { return pid; };
		int setPid(int pid);
		void setburstTime(int burst_time);
		int getArrival() const {return arrival;};
		int getBurstTime() const {return burstTime;};
		void setPriority(int newPriority);
		int getPriority() const { return priority;};
		void setIO(int newIO);
		int getIO() const { return io; };
		void setTimeLeft(int timeLeft);
		int getTimeLeft() const { return timeleft; };
		void setDeadline(int deadline);
		int getDeadline() const { return deadline; };
		void setWaitedTime(int wait);
		int getWaitedTime() const { return waitedTime; };
		void setCurrentQuantum(int current);
		int getCurrentQuantum() const { return currentQuantum; };
		void setQueue(int queue);
		int getQueue() const { return currentQueue; };
        int getOriginalPriority() const { return originalPriority; };
		int getOriginalIO() const { return originalIO; };
};
