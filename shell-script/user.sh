#!/bin/sh
echo "What is your name?"
read USER_NAME
echo "Hello $USER_NAME I will create a file with your name"
touch "{$USER_NAME}_file"