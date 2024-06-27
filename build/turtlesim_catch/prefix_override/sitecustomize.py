import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rishabh/testinggit/TurtlesimGame/install/turtlesim_catch'
