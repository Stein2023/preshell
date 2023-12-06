#!/bin/bash

pid_max=$(cat /proc/sys/kernel/pid_max)
echo "Maximum PID Value: $pid_max"
