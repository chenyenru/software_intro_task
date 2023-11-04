from setuptools import find_packages
from setuptools import setup

setup(
    name='teleop_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('teleop_msgs', 'teleop_msgs.*')),
)
