from setuptools import find_packages
from setuptools import setup

setup(
    name='multi_robot_coordination',
    version='0.0.0',
    packages=find_packages(
        include=('multi_robot_coordination', 'multi_robot_coordination.*')),
)
