#ifndef PREPARATION_H
#define PREPARATION_H

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

#define PREPFLAG_NONE 0
#define PREPFLAG_NO_UNDEAD 1
#define PREPFLAG_NO_DEEP_DWARF 2

struct preparation_def
{
    preparation_type prep_num;
    duration_type  warmup_duration;
    /*duration_type*/ int duration;

    int num_stars;                   // how many pips of piety you need (also influences maluses)

    const char* ability_name;        // displayed on the activate/deactivate menu

    const char* start_message;       // shown when you try to turn on a preparation
    const char* ready_message;       // shown when it finishes warming up
    const char* deactivate_message;  // shown when you turn it off
    const char* finished_message;    // shown when it finishes cooling off

    int flags;
};

// void init_preparation_index();
extern const preparation_def preparation_list[];

#endif
