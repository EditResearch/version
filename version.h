#ifndef _VERSION_H_
#define _VERSION_H_

#include <stdint.h>
#include <stdio.h>

typedef struct
{
  uint8_t major;
  uint8_t minor;
  uint8_t patch;
}Version;


#define DEFINE_VERSION(major, minor, patch) \
    (const Version){major, minor, patch}


inline void
version_show(
    FILE * stream
    , const Version version)
{
    fprintf(
        stream
        , "Version {major=%d, minor=%d, patch=%d}\n"
        , version.major
        , version.minor
        , version.patch);
}

#endif
