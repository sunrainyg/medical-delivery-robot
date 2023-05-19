#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/rosfun/catkin_ws/src/arbotix_ros/arbotix_python"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/rosfun/catkin_ws/install_isolated/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/rosfun/catkin_ws/install_isolated/lib/python2.7/dist-packages:/home/rosfun/catkin_ws/build_isolated/arbotix_python/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/rosfun/catkin_ws/build_isolated/arbotix_python" \
    "/usr/bin/python" \
    "/home/rosfun/catkin_ws/src/arbotix_ros/arbotix_python/setup.py" \
    build --build-base "/home/rosfun/catkin_ws/build_isolated/arbotix_python" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/rosfun/catkin_ws/install_isolated" --install-scripts="/home/rosfun/catkin_ws/install_isolated/bin"
