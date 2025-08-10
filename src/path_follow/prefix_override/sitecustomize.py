import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rameel/Documents/final_output_nomap_and_SLAM_multiple/install/path_follow'
