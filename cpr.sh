#!/bin/zsh

# Find the latest right firmware file
latest_firmware=$(ls -t ./firmware/*-right-clique.uf2 | head -n 1)
cp ${latest_firmware} /Volumes/ADV360PRO/
