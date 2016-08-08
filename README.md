

# build and install extension library with DEBUG symbols
~/CFLAGS="-O0 -g" CXXFLAGS="-O0 -g" python setup.py install
# run main
~/python main.py
# attach to running process (find pid using 'ps aux | grep python')
~/gdb python <pid of running process>
