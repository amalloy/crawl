#ifndef PREPARATION_H
#define PREPARATION_H

enum preparation_state
{
    PREP_INACTIVE,
    PREP_WARMING_UP,
    PREP_ACTIVE,
    PREP_COOLING_DOWN
};

enum preparation_flag
{
    PREPFLAG_NONE = 0,
    PREPFLAG_NO_UNDEAD = 1,
    PREPFLAG_NO_DEEP_DWARF = 2,
};

DEF_BITFIELD(preparation_flags, preparation_flag);

enum preparation_type
{
  PREP_ATTACK,
  PREP_FIRST_PREPARATION = PREP_ATTACK,
  /* PREP_DEFENCE, */
  PREP_REGEN,
  /* PREP_HUNGER, */
  /* PREP_RF, */
  /* PREP_RC, */
  /* PREP_STEALTH, */
  /* PREP_MR, */
  /* PREP_ESCAPE, */
  /* PREP_DERVISH, */
  PREP_LAST_PREPARATION = PREP_REGEN, /* TODO update as more preps implemented */
};

struct preparation_def
{
    preparation_type prep_num;
    duration_type warmup_duration;
    duration_type duration;

    int num_stars;                   // how many pips of piety you need (also influences maluses)

    const char* ability_name;        // displayed on the activate/deactivate menu

    const char* start_message;       // shown when you try to turn on a preparation
    const char* ready_message;       // shown when it finishes warming up
    const char* deactivate_message;  // shown when you turn it off
    const char* finished_message;    // shown when it finishes cooling off

    preparation_flags flags;
};

extern const preparation_def preparation_list[];
preparation_state preparation_status(const preparation_def &);

#endif
