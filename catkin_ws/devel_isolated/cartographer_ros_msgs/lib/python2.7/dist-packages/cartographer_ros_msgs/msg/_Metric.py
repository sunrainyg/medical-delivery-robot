# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cartographer_ros_msgs/Metric.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import cartographer_ros_msgs.msg

class Metric(genpy.Message):
  _md5sum = "94a6ea1c6ef245b483a220f6769c8e36"
  _type = "cartographer_ros_msgs/Metric"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# 2018 The Cartographer Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

uint8 TYPE_COUNTER=0
uint8 TYPE_GAUGE=1
uint8 TYPE_HISTOGRAM=2

uint8 type
cartographer_ros_msgs/MetricLabel[] labels

# TYPE_COUNTER or TYPE_GAUGE
float64 value

# TYPE_HISTOGRAM
cartographer_ros_msgs/HistogramBucket[] counts_by_bucket

================================================================================
MSG: cartographer_ros_msgs/MetricLabel
# 2018 The Cartographer Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

string key
string value

================================================================================
MSG: cartographer_ros_msgs/HistogramBucket
# 2018 The Cartographer Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# A histogram bucket counts values x for which:
#   previous_boundary < x <= bucket_boundary
# holds.
float64 bucket_boundary
float64 count
"""
  # Pseudo-constants
  TYPE_COUNTER = 0
  TYPE_GAUGE = 1
  TYPE_HISTOGRAM = 2

  __slots__ = ['type','labels','value','counts_by_bucket']
  _slot_types = ['uint8','cartographer_ros_msgs/MetricLabel[]','float64','cartographer_ros_msgs/HistogramBucket[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,labels,value,counts_by_bucket

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Metric, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = 0
      if self.labels is None:
        self.labels = []
      if self.value is None:
        self.value = 0.
      if self.counts_by_bucket is None:
        self.counts_by_bucket = []
    else:
      self.type = 0
      self.labels = []
      self.value = 0.
      self.counts_by_bucket = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_B().pack(self.type))
      length = len(self.labels)
      buff.write(_struct_I.pack(length))
      for val1 in self.labels:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_d().pack(self.value))
      length = len(self.counts_by_bucket)
      buff.write(_struct_I.pack(length))
      for val1 in self.counts_by_bucket:
        _x = val1
        buff.write(_get_struct_2d().pack(_x.bucket_boundary, _x.count))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.labels is None:
        self.labels = None
      if self.counts_by_bucket is None:
        self.counts_by_bucket = None
      end = 0
      start = end
      end += 1
      (self.type,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.labels = []
      for i in range(0, length):
        val1 = cartographer_ros_msgs.msg.MetricLabel()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8')
        else:
          val1.value = str[start:end]
        self.labels.append(val1)
      start = end
      end += 8
      (self.value,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.counts_by_bucket = []
      for i in range(0, length):
        val1 = cartographer_ros_msgs.msg.HistogramBucket()
        _x = val1
        start = end
        end += 16
        (_x.bucket_boundary, _x.count,) = _get_struct_2d().unpack(str[start:end])
        self.counts_by_bucket.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.type))
      length = len(self.labels)
      buff.write(_struct_I.pack(length))
      for val1 in self.labels:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_d().pack(self.value))
      length = len(self.counts_by_bucket)
      buff.write(_struct_I.pack(length))
      for val1 in self.counts_by_bucket:
        _x = val1
        buff.write(_get_struct_2d().pack(_x.bucket_boundary, _x.count))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.labels is None:
        self.labels = None
      if self.counts_by_bucket is None:
        self.counts_by_bucket = None
      end = 0
      start = end
      end += 1
      (self.type,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.labels = []
      for i in range(0, length):
        val1 = cartographer_ros_msgs.msg.MetricLabel()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8')
        else:
          val1.value = str[start:end]
        self.labels.append(val1)
      start = end
      end += 8
      (self.value,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.counts_by_bucket = []
      for i in range(0, length):
        val1 = cartographer_ros_msgs.msg.HistogramBucket()
        _x = val1
        start = end
        end += 16
        (_x.bucket_boundary, _x.count,) = _get_struct_2d().unpack(str[start:end])
        self.counts_by_bucket.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
