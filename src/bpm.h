/*
 * @Brief bpm class definition
 * This class handles getting the system time and providing 
 * the right time slicing for the bpm.
 *
 */

#ifndef __METRONOMICON_BPM_H__ 
#define __METRONOMICON_BPM_H__

class bpm
{
  public:
    float getSystemTime();
    float timeSlice(int usrBpm);
    ~bpm();
  private:
    float sysTime;
};

#endif //__METRONOMICON_BPM_H__
