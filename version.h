#ifndef _VERSION_H_
#define _VERSION_H_

#include <stdint.h>

typedef struct
{
  uint8_t major;
  uint8_t minor;
  uint8_t patch;
}Version;


#define DEFINE_VERSION(lib, major, minor, patch) \
  const Version __version_##lib##__ {.major=major, .minor=minor, .patch=patch}


#endif
