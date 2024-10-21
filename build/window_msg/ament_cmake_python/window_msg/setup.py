from setuptools import find_packages
from setuptools import setup

setup(
    name='window_msg',
    version='0.0.0',
    packages=find_packages(
        include=('window_msg', 'window_msg.*')),
)
