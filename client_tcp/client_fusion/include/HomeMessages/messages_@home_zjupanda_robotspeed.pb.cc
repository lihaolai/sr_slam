// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages_@home_zjupanda_robotspeed.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Home_RobotSpeed_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Home_RobotSpeed_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto() {
  protobuf_AddDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages_@home_zjupanda_robotspeed.proto");
  GOOGLE_CHECK(file != NULL);
  Home_RobotSpeed_descriptor_ = file->message_type(0);
  static const int Home_RobotSpeed_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Home_RobotSpeed, vx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Home_RobotSpeed, vy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Home_RobotSpeed, w_),
  };
  Home_RobotSpeed_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Home_RobotSpeed_descriptor_,
      Home_RobotSpeed::default_instance_,
      Home_RobotSpeed_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Home_RobotSpeed, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Home_RobotSpeed, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Home_RobotSpeed));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Home_RobotSpeed_descriptor_, &Home_RobotSpeed::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto() {
  delete Home_RobotSpeed::default_instance_;
  delete Home_RobotSpeed_reflection_;
}

void protobuf_AddDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(messages_@home_zjupanda_robotspeed.pro"
    "to\"4\n\017Home_RobotSpeed\022\n\n\002vx\030\001 \002(\001\022\n\n\002vy\030"
    "\002 \002(\001\022\t\n\001w\030\003 \002(\001", 96);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages_@home_zjupanda_robotspeed.proto", &protobuf_RegisterTypes);
  Home_RobotSpeed::default_instance_ = new Home_RobotSpeed();
  Home_RobotSpeed::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto {
  StaticDescriptorInitializer_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto() {
    protobuf_AddDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();
  }
} static_descriptor_initializer_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Home_RobotSpeed::kVxFieldNumber;
const int Home_RobotSpeed::kVyFieldNumber;
const int Home_RobotSpeed::kWFieldNumber;
#endif  // !_MSC_VER

Home_RobotSpeed::Home_RobotSpeed()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Home_RobotSpeed::InitAsDefaultInstance() {
}

Home_RobotSpeed::Home_RobotSpeed(const Home_RobotSpeed& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Home_RobotSpeed::SharedCtor() {
  _cached_size_ = 0;
  vx_ = 0;
  vy_ = 0;
  w_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Home_RobotSpeed::~Home_RobotSpeed() {
  SharedDtor();
}

void Home_RobotSpeed::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Home_RobotSpeed::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Home_RobotSpeed::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Home_RobotSpeed_descriptor_;
}

const Home_RobotSpeed& Home_RobotSpeed::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_messages_5f_40home_5fzjupanda_5frobotspeed_2eproto();  return *default_instance_;
}

Home_RobotSpeed* Home_RobotSpeed::default_instance_ = NULL;

Home_RobotSpeed* Home_RobotSpeed::New() const {
  return new Home_RobotSpeed;
}

void Home_RobotSpeed::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    vx_ = 0;
    vy_ = 0;
    w_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Home_RobotSpeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double vx = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vx_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_vy;
        break;
      }
      
      // required double vy = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_vy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vy_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_w;
        break;
      }
      
      // required double w = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_w:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &w_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Home_RobotSpeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required double vx = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->vx(), output);
  }
  
  // required double vy = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->vy(), output);
  }
  
  // required double w = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->w(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Home_RobotSpeed::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required double vx = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->vx(), target);
  }
  
  // required double vy = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->vy(), target);
  }
  
  // required double w = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->w(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Home_RobotSpeed::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double vx = 1;
    if (has_vx()) {
      total_size += 1 + 8;
    }
    
    // required double vy = 2;
    if (has_vy()) {
      total_size += 1 + 8;
    }
    
    // required double w = 3;
    if (has_w()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Home_RobotSpeed::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Home_RobotSpeed* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Home_RobotSpeed*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Home_RobotSpeed::MergeFrom(const Home_RobotSpeed& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_vx(from.vx());
    }
    if (from._has_bit(1)) {
      set_vy(from.vy());
    }
    if (from._has_bit(2)) {
      set_w(from.w());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Home_RobotSpeed::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Home_RobotSpeed::CopyFrom(const Home_RobotSpeed& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Home_RobotSpeed::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void Home_RobotSpeed::Swap(Home_RobotSpeed* other) {
  if (other != this) {
    std::swap(vx_, other->vx_);
    std::swap(vy_, other->vy_);
    std::swap(w_, other->w_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Home_RobotSpeed::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Home_RobotSpeed_descriptor_;
  metadata.reflection = Home_RobotSpeed_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
