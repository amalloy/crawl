#include "preparation.h"

extern const preparation_def preparation_list[] =
{
    {
        PREP_ATTACK, DUR_HERKAN_ATTACKING_WARMUP, DUR_HERKAN_ATTACKING, 1, "Attack",

        "Your defences become weaker as you devote a portion of your mind to attacking.",
        "You have set aside a portion of your mind to improve your attacks.",

        "Your attacks weaken as you relax your focus on them.",
        "You regain your defensive alertness.",
        PREPFLAG_NONE
    },
    {
        PREP_REGEN, DUR_HERKAN_REGENERATING_WARMUP, DUR_HERKAN_REGENERATING, 2, "Regeneration",

        "Your stomach rumbles as you devote a portion of your mind to speeding your healing.",
        "You have set aside a portion of your mind to heal your wounds quickly.",

        "You are no longer focusing closely enough to speed your healing.",
        "Your metabolism is no longer running quite so quickly.",
        PREPFLAG_NO_UNDEAD | PREPFLAG_NO_DEEP_DWARF
    }
};
