#include "AppHdr.h"

#include "enum.h"
#include "player.h"
#include "preparation.h"


#include "preparation-data.h"

preparation_state preparation_status(const preparation_def& p)
{
    int warmup_dur = you.duration[p.warmup_duration];
    int dur = you.duration[p.duration];
    if (warmup_dur)
        return dur ? PREP_COOLING_DOWN : PREP_INACTIVE;
    else
        return dur ? PREP_ACTIVE : PREP_WARMING_UP;
}
