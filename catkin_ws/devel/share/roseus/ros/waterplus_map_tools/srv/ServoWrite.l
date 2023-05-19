;; Auto-generated. Do not edit!


(when (boundp 'waterplus_map_tools::ServoWrite)
  (if (not (find-package "WATERPLUS_MAP_TOOLS"))
    (make-package "WATERPLUS_MAP_TOOLS"))
  (shadow 'ServoWrite (find-package "WATERPLUS_MAP_TOOLS")))
(unless (find-package "WATERPLUS_MAP_TOOLS::SERVOWRITE")
  (make-package "WATERPLUS_MAP_TOOLS::SERVOWRITE"))
(unless (find-package "WATERPLUS_MAP_TOOLS::SERVOWRITEREQUEST")
  (make-package "WATERPLUS_MAP_TOOLS::SERVOWRITEREQUEST"))
(unless (find-package "WATERPLUS_MAP_TOOLS::SERVOWRITERESPONSE")
  (make-package "WATERPLUS_MAP_TOOLS::SERVOWRITERESPONSE"))

(in-package "ROS")





(defclass waterplus_map_tools::ServoWriteRequest
  :super ros::object
  :slots (_id _value ))

(defmethod waterplus_map_tools::ServoWriteRequest
  (:init
   (&key
    ((:id __id) 0)
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _value (float __value))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; uint8 _id
    1
    ;; float32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _id
       (write-byte _id s)
     ;; float32 _value
       (sys::poke _value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _id
     (setq _id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _value
     (setq _value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass waterplus_map_tools::ServoWriteResponse
  :super ros::object
  :slots ())

(defmethod waterplus_map_tools::ServoWriteResponse
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass waterplus_map_tools::ServoWrite
  :super ros::object
  :slots ())

(setf (get waterplus_map_tools::ServoWrite :md5sum-) "f90a4a27fdac2d3886d60d19d2b742b2")
(setf (get waterplus_map_tools::ServoWrite :datatype-) "waterplus_map_tools/ServoWrite")
(setf (get waterplus_map_tools::ServoWrite :request) waterplus_map_tools::ServoWriteRequest)
(setf (get waterplus_map_tools::ServoWrite :response) waterplus_map_tools::ServoWriteResponse)

(defmethod waterplus_map_tools::ServoWriteRequest
  (:response () (instance waterplus_map_tools::ServoWriteResponse :init)))

(setf (get waterplus_map_tools::ServoWriteRequest :md5sum-) "f90a4a27fdac2d3886d60d19d2b742b2")
(setf (get waterplus_map_tools::ServoWriteRequest :datatype-) "waterplus_map_tools/ServoWriteRequest")
(setf (get waterplus_map_tools::ServoWriteRequest :definition-)
      "uint8 id
float32 value
---

")

(setf (get waterplus_map_tools::ServoWriteResponse :md5sum-) "f90a4a27fdac2d3886d60d19d2b742b2")
(setf (get waterplus_map_tools::ServoWriteResponse :datatype-) "waterplus_map_tools/ServoWriteResponse")
(setf (get waterplus_map_tools::ServoWriteResponse :definition-)
      "uint8 id
float32 value
---

")



(provide :waterplus_map_tools/ServoWrite "f90a4a27fdac2d3886d60d19d2b742b2")


