# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multi_robot_coordination:msg/CylinderDetectionMulti.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'xyxy'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CylinderDetectionMulti(type):
    """Metaclass of message 'CylinderDetectionMulti'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('multi_robot_coordination')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multi_robot_coordination.msg.CylinderDetectionMulti')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cylinder_detection_multi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cylinder_detection_multi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cylinder_detection_multi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cylinder_detection_multi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cylinder_detection_multi

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CylinderDetectionMulti(metaclass=Metaclass_CylinderDetectionMulti):
    """Message class 'CylinderDetectionMulti'."""

    __slots__ = [
        '_detected',
        '_robot_namespace',
        '_x',
        '_y',
        '_z',
        '_u',
        '_v',
        '_confidence',
        '_xyxy',
        '_x_min',
        '_y_min',
        '_x_max',
        '_y_max',
        '_image_width',
        '_target_namespace',
        '_header',
    ]

    _fields_and_field_types = {
        'detected': 'boolean',
        'robot_namespace': 'string',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'u': 'double',
        'v': 'double',
        'confidence': 'double',
        'xyxy': 'double[4]',
        'x_min': 'double',
        'y_min': 'double',
        'x_max': 'double',
        'y_max': 'double',
        'image_width': 'double',
        'target_namespace': 'string',
        'header': 'std_msgs/Header',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detected = kwargs.get('detected', bool())
        self.robot_namespace = kwargs.get('robot_namespace', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.u = kwargs.get('u', float())
        self.v = kwargs.get('v', float())
        self.confidence = kwargs.get('confidence', float())
        if 'xyxy' not in kwargs:
            self.xyxy = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.xyxy = numpy.array(kwargs.get('xyxy'), dtype=numpy.float64)
            assert self.xyxy.shape == (4, )
        self.x_min = kwargs.get('x_min', float())
        self.y_min = kwargs.get('y_min', float())
        self.x_max = kwargs.get('x_max', float())
        self.y_max = kwargs.get('y_max', float())
        self.image_width = kwargs.get('image_width', float())
        self.target_namespace = kwargs.get('target_namespace', str())
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detected != other.detected:
            return False
        if self.robot_namespace != other.robot_namespace:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.u != other.u:
            return False
        if self.v != other.v:
            return False
        if self.confidence != other.confidence:
            return False
        if all(self.xyxy != other.xyxy):
            return False
        if self.x_min != other.x_min:
            return False
        if self.y_min != other.y_min:
            return False
        if self.x_max != other.x_max:
            return False
        if self.y_max != other.y_max:
            return False
        if self.image_width != other.image_width:
            return False
        if self.target_namespace != other.target_namespace:
            return False
        if self.header != other.header:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detected(self):
        """Message field 'detected'."""
        return self._detected

    @detected.setter
    def detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'detected' field must be of type 'bool'"
        self._detected = value

    @builtins.property
    def robot_namespace(self):
        """Message field 'robot_namespace'."""
        return self._robot_namespace

    @robot_namespace.setter
    def robot_namespace(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_namespace' field must be of type 'str'"
        self._robot_namespace = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def u(self):
        """Message field 'u'."""
        return self._u

    @u.setter
    def u(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'u' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._u = value

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def xyxy(self):
        """Message field 'xyxy'."""
        return self._xyxy

    @xyxy.setter
    def xyxy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'xyxy' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'xyxy' numpy.ndarray() must have a size of 4"
            self._xyxy = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'xyxy' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._xyxy = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def x_min(self):
        """Message field 'x_min'."""
        return self._x_min

    @x_min.setter
    def x_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_min = value

    @builtins.property
    def y_min(self):
        """Message field 'y_min'."""
        return self._y_min

    @y_min.setter
    def y_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_min = value

    @builtins.property
    def x_max(self):
        """Message field 'x_max'."""
        return self._x_max

    @x_max.setter
    def x_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_max = value

    @builtins.property
    def y_max(self):
        """Message field 'y_max'."""
        return self._y_max

    @y_max.setter
    def y_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_max = value

    @builtins.property
    def image_width(self):
        """Message field 'image_width'."""
        return self._image_width

    @image_width.setter
    def image_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'image_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'image_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._image_width = value

    @builtins.property
    def target_namespace(self):
        """Message field 'target_namespace'."""
        return self._target_namespace

    @target_namespace.setter
    def target_namespace(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_namespace' field must be of type 'str'"
        self._target_namespace = value

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value
