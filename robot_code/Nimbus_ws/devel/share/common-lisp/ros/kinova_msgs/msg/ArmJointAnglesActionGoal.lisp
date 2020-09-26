; Auto-generated. Do not edit!


(cl:in-package kinova_msgs-msg)


;//! \htmlinclude ArmJointAnglesActionGoal.msg.html

(cl:defclass <ArmJointAnglesActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type kinova_msgs-msg:ArmJointAnglesGoal
    :initform (cl:make-instance 'kinova_msgs-msg:ArmJointAnglesGoal)))
)

(cl:defclass ArmJointAnglesActionGoal (<ArmJointAnglesActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ArmJointAnglesActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ArmJointAnglesActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name kinova_msgs-msg:<ArmJointAnglesActionGoal> is deprecated: use kinova_msgs-msg:ArmJointAnglesActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ArmJointAnglesActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kinova_msgs-msg:header-val is deprecated.  Use kinova_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <ArmJointAnglesActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kinova_msgs-msg:goal_id-val is deprecated.  Use kinova_msgs-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <ArmJointAnglesActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kinova_msgs-msg:goal-val is deprecated.  Use kinova_msgs-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ArmJointAnglesActionGoal>) ostream)
  "Serializes a message object of type '<ArmJointAnglesActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ArmJointAnglesActionGoal>) istream)
  "Deserializes a message object of type '<ArmJointAnglesActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ArmJointAnglesActionGoal>)))
  "Returns string type for a message object of type '<ArmJointAnglesActionGoal>"
  "kinova_msgs/ArmJointAnglesActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ArmJointAnglesActionGoal)))
  "Returns string type for a message object of type 'ArmJointAnglesActionGoal"
  "kinova_msgs/ArmJointAnglesActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ArmJointAnglesActionGoal>)))
  "Returns md5sum for a message object of type '<ArmJointAnglesActionGoal>"
  "c55abb1cfa18bfc551ab65ebef8ed3a9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ArmJointAnglesActionGoal)))
  "Returns md5sum for a message object of type 'ArmJointAnglesActionGoal"
  "c55abb1cfa18bfc551ab65ebef8ed3a9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ArmJointAnglesActionGoal>)))
  "Returns full string definition for message of type '<ArmJointAnglesActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ArmJointAnglesGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: kinova_msgs/ArmJointAnglesGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%JointAngles angles~%~%================================================================================~%MSG: kinova_msgs/JointAngles~%float32 joint1~%float32 joint2~%float32 joint3~%float32 joint4~%float32 joint5~%float32 joint6~%float32 joint7~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ArmJointAnglesActionGoal)))
  "Returns full string definition for message of type 'ArmJointAnglesActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ArmJointAnglesGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: kinova_msgs/ArmJointAnglesGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%JointAngles angles~%~%================================================================================~%MSG: kinova_msgs/JointAngles~%float32 joint1~%float32 joint2~%float32 joint3~%float32 joint4~%float32 joint5~%float32 joint6~%float32 joint7~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ArmJointAnglesActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ArmJointAnglesActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'ArmJointAnglesActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))
