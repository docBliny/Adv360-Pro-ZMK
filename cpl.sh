#!/bin/zsh

# Find the latest left firmware file
latest_firmware=$(ls -t ./firmware/*-left-clique.uf2 | head -n 1)
cp ${latest_firmware} /Volumes/ADV360PRO/
