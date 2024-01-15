#!/bin/bash
wget -p /tmp https://github.com/Kennie-Simz/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
