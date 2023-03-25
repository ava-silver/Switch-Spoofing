#ifndef _TIMER_H_
#define _TIMER_H_

#include "driver/gptimer.h"

#define APP_LOOP_PERIOD_MS 5

extern uint64_t app_timer;       // App runtime in ms
extern gptimer_handle_t gptimer; // gp timer

#endif