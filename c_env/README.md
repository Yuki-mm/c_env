# 1. imageをbuildする
docker-compose build c_env_cpp_container

# 2. containerをbuildする
docker run -v /$(pwd):/root/problems -it c_env_cpp_container
