```
cd ~ && rm -rf mesos/ && cp -r /vagrant/ ./mesos ** cd mesos/build/src
make
```

```
-DPACKAGE_NAME=\"mesos\" -DPACKAGE_TARNAME=\"mesos\" -DPACKAGE_VERSION=\"0.26.0\" "-DPACKAGE_STRING=\"mesos 0.26.0\"" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE_URL=\"\" -DPACKAGE=\"mesos\" -DVERSION=\"0.26.0\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_DLFCN_H=1 -DLT_OBJDIR=\".libs/\" -DHAVE_PTHREAD_PRIO_INHERIT=1 -DHAVE_PTHREAD=1 -DHAVE_LIBZ=1 -DHAVE_LIBCURL=1 -DHAVE_APR_POOLS_H=1 -DHAVE_LIBAPR_1=1 -DHAVE_SVN_VERSION_H=1 -DHAVE_LIBSVN_SUBR_1=1 -DHAVE_SVN_DELTA_H=1 -DHAVE_LIBSVN_DELTA_1=1 -DHAVE_LIBSASL2=1 -DMESOS_HAS_JAVA=1 -DHAVE_PYTHON=\"2.7\" -DMESOS_HAS_PYTHON=1 -I. -I../../src -Wall -Werror -DLIBDIR=\"/usr/local/lib\" -DPKGLIBEXECDIR=\"/usr/local/libexec/mesos\" -DPKGDATADIR=\"/usr/local/share/mesos\" -I../../include -I../../3rdparty/libprocess/include -I../../3rdparty/libprocess/3rdparty/stout/include -I../include -I../include/mesos -I../3rdparty/libprocess/3rdparty/boost-1.53.0 -I../3rdparty/libprocess/3rdparty/picojson-1.3.0 -DPICOJSON_USE_INT64 -D__STDC_FORMAT_MACROS -I../3rdparty/libprocess/3rdparty/protobuf-2.5.0/src -I../3rdparty/libprocess/3rdparty/glog-0.3.3/src -I../3rdparty/libprocess/3rdparty/glog-0.3.3/src -I../3rdparty/leveldb/include -I../3rdparty/zookeeper-3.4.5/src/c/include -I../3rdparty/zookeeper-3.4.5/src/c/generated -I../3rdparty/libprocess/3rdparty/protobuf-2.5.0/src -I/usr/include/subversion-1 -I/usr/include/apr-1 -I/usr/include/apr-1.0 -pthread -g1 -O0 -Wno-unused-local-typedefs -std=c++11 -MT docker/libmesos_no_3rdparty_la-docker.lo -MD -MP -MF docker/.deps/libmesos_no_3rdparty_la-docker.Tpo -c ../../src/docker/docker.cpp  -fPIC -DPIC -o docker/.libs/libmesos_no_3rdparty_la-docker.o
```

# About Apache Mesos

Apache Mesos is a cluster manager that provides efficient resource isolation 
and sharing across distributed applications, or frameworks. It can run Hadoop, 
MPI, Hypertable, Spark, and other frameworks on a dynamically shared pool of 
nodes.

Visit us at [mesos.apache.org](http://mesos.apache.org).

# Mailing Lists

 * [User Mailing List](mailto:user-subscribe@mesos.apache.org) ([Archive](https://mail-archives.apache.org/mod_mbox/mesos-user/))
 * [Development Mailing List](mailto:dev-subscribe@mesos.apache.org) ([Archive](https://mail-archives.apache.org/mod_mbox/mesos-dev/))

# Documentation

Documentation is available in the docs/ directory. Additionally, a rendered HTML 
version can be found on the Mesos website's [Documentation](http://mesos.apache.org/documentation/) page.

# Installation

Instructions are included on the [Getting Started](http://mesos.apache.org/gettingstarted/) page.

# License

Apache Mesos is licensed under the [Apache License, Version 2.0](http://www.apache.org/licenses/LICENSE-2.0).

For additional information, see the LICENSE and NOTICE files.