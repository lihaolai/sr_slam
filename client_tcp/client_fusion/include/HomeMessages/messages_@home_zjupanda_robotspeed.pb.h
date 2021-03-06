// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_@home_zjupanda_robotspeed.proto

#ifndef PROTOBUF_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto__INCLUDED
#define PROTOBUF_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
void protobuf_AssignDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
void protobuf_ShutdownFile_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();

class Home_RobotSpeed;

// ===================================================================

class Home_RobotSpeed : public ::google::protobuf::Message {
 public:
  Home_RobotSpeed();
  virtual ~Home_RobotSpeed();
  
  Home_RobotSpeed(const Home_RobotSpeed& from);
  
  inline Home_RobotSpeed& operator=(const Home_RobotSpeed& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Home_RobotSpeed& default_instance();
  
  void Swap(Home_RobotSpeed* other);
  
  // implements Message ----------------------------------------------
  
  Home_RobotSpeed* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Home_RobotSpeed& from);
  void MergeFrom(const Home_RobotSpeed& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required double vx = 1;
  inline bool has_vx() const;
  inline void clear_vx();
  static const int kVxFieldNumber = 1;
  inline double vx() const;
  inline void set_vx(double value);
  
  // required double vy = 2;
  inline bool has_vy() const;
  inline void clear_vy();
  static const int kVyFieldNumber = 2;
  inline double vy() const;
  inline void set_vy(double value);
  
  // required double w = 3;
  inline bool has_w() const;
  inline void clear_w();
  static const int kWFieldNumber = 3;
  inline double w() const;
  inline void set_w(double value);
  
  // @@protoc_insertion_point(class_scope:Home_RobotSpeed)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  double vx_;
  double vy_;
  double w_;
  friend void  protobuf_AddDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
  friend void protobuf_AssignDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
  friend void protobuf_ShutdownFile_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Home_RobotSpeed* default_instance_;
};
// ===================================================================


// ===================================================================

// Home_RobotSpeed

// required double vx = 1;
inline bool Home_RobotSpeed::has_vx() const {
  return _has_bit(0);
}
inline void Home_RobotSpeed::clear_vx() {
  vx_ = 0;
  _clear_bit(0);
}
inline double Home_RobotSpeed::vx() const {
  return vx_;
}
inline void Home_RobotSpeed::set_vx(double value) {
  _set_bit(0);
  vx_ = value;
}

// required double vy = 2;
inline bool Home_RobotSpeed::has_vy() const {
  return _has_bit(1);
}
inline void Home_RobotSpeed::clear_vy() {
  vy_ = 0;
  _clear_bit(1);
}
inline double Home_RobotSpeed::vy() const {
  return vy_;
}
inline void Home_RobotSpeed::set_vy(double value) {
  _set_bit(1);
  vy_ = value;
}

// required double w = 3;
inline bool Home_RobotSpeed::has_w() const {
  return _has_bit(2);
}
inline void Home_RobotSpeed::clear_w() {
  w_ = 0;
  _clear_bit(2);
}
inline double Home_RobotSpeed::w() const {
  return w_;
}
inline void Home_RobotSpeed::set_w(double value) {
  _set_bit(2);
  w_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto__INCLUDED
