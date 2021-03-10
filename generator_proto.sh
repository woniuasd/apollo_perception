#!/bin/bash
protoc -I=/home/wk/projects/apollo_perception --cpp_out=/home/wk/projects/apollo_perception  /home/wk/projects/apollo_perception/modules/perception/proto/*.proto
