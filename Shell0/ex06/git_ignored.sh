#!/bin/sh
git status --ignored --short | grep '^!!' | cut -c4-
