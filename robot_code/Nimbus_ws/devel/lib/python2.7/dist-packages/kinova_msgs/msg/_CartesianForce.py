# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kinova_msgs/CartesianForce.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CartesianForce(genpy.Message):
  _md5sum = "b01974557c40b776cdb7003057779989"
  _type = "kinova_msgs/CartesianForce"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 force_x
float32 force_y
float32 force_z
float32 torque_x
float32 torque_y
float32 torque_z
"""
  __slots__ = ['force_x','force_y','force_z','torque_x','torque_y','torque_z']
  _slot_types = ['float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       force_x,force_y,force_z,torque_x,torque_y,torque_z

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CartesianForce, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.force_x is None:
        self.force_x = 0.
      if self.force_y is None:
        self.force_y = 0.
      if self.force_z is None:
        self.force_z = 0.
      if self.torque_x is None:
        self.torque_x = 0.
      if self.torque_y is None:
        self.torque_y = 0.
      if self.torque_z is None:
        self.torque_z = 0.
    else:
      self.force_x = 0.
      self.force_y = 0.
      self.force_z = 0.
      self.torque_x = 0.
      self.torque_y = 0.
      self.torque_z = 0.

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
      _x = self
      buff.write(_struct_6f.pack(_x.force_x, _x.force_y, _x.force_z, _x.torque_x, _x.torque_y, _x.torque_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.force_x, _x.force_y, _x.force_z, _x.torque_x, _x.torque_y, _x.torque_z,) = _struct_6f.unpack(str[start:end])
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
      _x = self
      buff.write(_struct_6f.pack(_x.force_x, _x.force_y, _x.force_z, _x.torque_x, _x.torque_y, _x.torque_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.force_x, _x.force_y, _x.force_z, _x.torque_x, _x.torque_y, _x.torque_z,) = _struct_6f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_6f = struct.Struct("<6f")
