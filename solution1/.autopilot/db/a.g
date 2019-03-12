#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/nrs/Phase2_final/solution1/.autopilot/db/a.g.bc ${1+"$@"}
