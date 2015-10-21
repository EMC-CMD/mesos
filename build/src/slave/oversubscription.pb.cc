// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mesos/slave/oversubscription.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mesos/slave/oversubscription.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace mesos {
namespace slave {

namespace {

const ::google::protobuf::Descriptor* QoSCorrection_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QoSCorrection_reflection_ = NULL;
const ::google::protobuf::Descriptor* QoSCorrection_Kill_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QoSCorrection_Kill_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* QoSCorrection_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_mesos_2fslave_2foversubscription_2eproto() {
  protobuf_AddDesc_mesos_2fslave_2foversubscription_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "mesos/slave/oversubscription.proto");
  GOOGLE_CHECK(file != NULL);
  QoSCorrection_descriptor_ = file->message_type(0);
  static const int QoSCorrection_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection, kill_),
  };
  QoSCorrection_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QoSCorrection_descriptor_,
      QoSCorrection::default_instance_,
      QoSCorrection_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QoSCorrection));
  QoSCorrection_Kill_descriptor_ = QoSCorrection_descriptor_->nested_type(0);
  static const int QoSCorrection_Kill_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection_Kill, framework_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection_Kill, executor_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection_Kill, container_id_),
  };
  QoSCorrection_Kill_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QoSCorrection_Kill_descriptor_,
      QoSCorrection_Kill::default_instance_,
      QoSCorrection_Kill_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection_Kill, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QoSCorrection_Kill, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QoSCorrection_Kill));
  QoSCorrection_Type_descriptor_ = QoSCorrection_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_mesos_2fslave_2foversubscription_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QoSCorrection_descriptor_, &QoSCorrection::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QoSCorrection_Kill_descriptor_, &QoSCorrection_Kill::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_mesos_2fslave_2foversubscription_2eproto() {
  delete QoSCorrection::default_instance_;
  delete QoSCorrection_reflection_;
  delete QoSCorrection_Kill::default_instance_;
  delete QoSCorrection_Kill_reflection_;
}

void protobuf_AddDesc_mesos_2fslave_2foversubscription_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::mesos::protobuf_AddDesc_mesos_2fmesos_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"mesos/slave/oversubscription.proto\022\013me"
    "sos.slave\032\021mesos/mesos.proto\"\204\002\n\rQoSCorr"
    "ection\022-\n\004type\030\001 \002(\0162\037.mesos.slave.QoSCo"
    "rrection.Type\022-\n\004kill\030\002 \001(\0132\037.mesos.slav"
    "e.QoSCorrection.Kill\032\202\001\n\004Kill\022(\n\014framewo"
    "rk_id\030\001 \001(\0132\022.mesos.FrameworkID\022&\n\013execu"
    "tor_id\030\002 \001(\0132\021.mesos.ExecutorID\022(\n\014conta"
    "iner_id\030\003 \001(\0132\022.mesos.ContainerID\"\020\n\004Typ"
    "e\022\010\n\004KILL\020\001B\032\n\020org.apache.mesosB\006Protos", 359);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mesos/slave/oversubscription.proto", &protobuf_RegisterTypes);
  QoSCorrection::default_instance_ = new QoSCorrection();
  QoSCorrection_Kill::default_instance_ = new QoSCorrection_Kill();
  QoSCorrection::default_instance_->InitAsDefaultInstance();
  QoSCorrection_Kill::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mesos_2fslave_2foversubscription_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mesos_2fslave_2foversubscription_2eproto {
  StaticDescriptorInitializer_mesos_2fslave_2foversubscription_2eproto() {
    protobuf_AddDesc_mesos_2fslave_2foversubscription_2eproto();
  }
} static_descriptor_initializer_mesos_2fslave_2foversubscription_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* QoSCorrection_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QoSCorrection_Type_descriptor_;
}
bool QoSCorrection_Type_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const QoSCorrection_Type QoSCorrection::KILL;
const QoSCorrection_Type QoSCorrection::Type_MIN;
const QoSCorrection_Type QoSCorrection::Type_MAX;
const int QoSCorrection::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int QoSCorrection_Kill::kFrameworkIdFieldNumber;
const int QoSCorrection_Kill::kExecutorIdFieldNumber;
const int QoSCorrection_Kill::kContainerIdFieldNumber;
#endif  // !_MSC_VER

QoSCorrection_Kill::QoSCorrection_Kill()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QoSCorrection_Kill::InitAsDefaultInstance() {
  framework_id_ = const_cast< ::mesos::FrameworkID*>(&::mesos::FrameworkID::default_instance());
  executor_id_ = const_cast< ::mesos::ExecutorID*>(&::mesos::ExecutorID::default_instance());
  container_id_ = const_cast< ::mesos::ContainerID*>(&::mesos::ContainerID::default_instance());
}

QoSCorrection_Kill::QoSCorrection_Kill(const QoSCorrection_Kill& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QoSCorrection_Kill::SharedCtor() {
  _cached_size_ = 0;
  framework_id_ = NULL;
  executor_id_ = NULL;
  container_id_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QoSCorrection_Kill::~QoSCorrection_Kill() {
  SharedDtor();
}

void QoSCorrection_Kill::SharedDtor() {
  if (this != default_instance_) {
    delete framework_id_;
    delete executor_id_;
    delete container_id_;
  }
}

void QoSCorrection_Kill::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QoSCorrection_Kill::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QoSCorrection_Kill_descriptor_;
}

const QoSCorrection_Kill& QoSCorrection_Kill::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mesos_2fslave_2foversubscription_2eproto();
  return *default_instance_;
}

QoSCorrection_Kill* QoSCorrection_Kill::default_instance_ = NULL;

QoSCorrection_Kill* QoSCorrection_Kill::New() const {
  return new QoSCorrection_Kill;
}

void QoSCorrection_Kill::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_framework_id()) {
      if (framework_id_ != NULL) framework_id_->::mesos::FrameworkID::Clear();
    }
    if (has_executor_id()) {
      if (executor_id_ != NULL) executor_id_->::mesos::ExecutorID::Clear();
    }
    if (has_container_id()) {
      if (container_id_ != NULL) container_id_->::mesos::ContainerID::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QoSCorrection_Kill::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .mesos.FrameworkID framework_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_framework_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_executor_id;
        break;
      }

      // optional .mesos.ExecutorID executor_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_executor_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_executor_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_container_id;
        break;
      }

      // optional .mesos.ContainerID container_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_container_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_container_id()));
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

void QoSCorrection_Kill::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .mesos.FrameworkID framework_id = 1;
  if (has_framework_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->framework_id(), output);
  }

  // optional .mesos.ExecutorID executor_id = 2;
  if (has_executor_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->executor_id(), output);
  }

  // optional .mesos.ContainerID container_id = 3;
  if (has_container_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->container_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QoSCorrection_Kill::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .mesos.FrameworkID framework_id = 1;
  if (has_framework_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->framework_id(), target);
  }

  // optional .mesos.ExecutorID executor_id = 2;
  if (has_executor_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->executor_id(), target);
  }

  // optional .mesos.ContainerID container_id = 3;
  if (has_container_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->container_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QoSCorrection_Kill::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .mesos.FrameworkID framework_id = 1;
    if (has_framework_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->framework_id());
    }

    // optional .mesos.ExecutorID executor_id = 2;
    if (has_executor_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->executor_id());
    }

    // optional .mesos.ContainerID container_id = 3;
    if (has_container_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->container_id());
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

void QoSCorrection_Kill::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QoSCorrection_Kill* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QoSCorrection_Kill*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QoSCorrection_Kill::MergeFrom(const QoSCorrection_Kill& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_framework_id()) {
      mutable_framework_id()->::mesos::FrameworkID::MergeFrom(from.framework_id());
    }
    if (from.has_executor_id()) {
      mutable_executor_id()->::mesos::ExecutorID::MergeFrom(from.executor_id());
    }
    if (from.has_container_id()) {
      mutable_container_id()->::mesos::ContainerID::MergeFrom(from.container_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QoSCorrection_Kill::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QoSCorrection_Kill::CopyFrom(const QoSCorrection_Kill& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QoSCorrection_Kill::IsInitialized() const {

  if (has_framework_id()) {
    if (!this->framework_id().IsInitialized()) return false;
  }
  if (has_executor_id()) {
    if (!this->executor_id().IsInitialized()) return false;
  }
  if (has_container_id()) {
    if (!this->container_id().IsInitialized()) return false;
  }
  return true;
}

void QoSCorrection_Kill::Swap(QoSCorrection_Kill* other) {
  if (other != this) {
    std::swap(framework_id_, other->framework_id_);
    std::swap(executor_id_, other->executor_id_);
    std::swap(container_id_, other->container_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QoSCorrection_Kill::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QoSCorrection_Kill_descriptor_;
  metadata.reflection = QoSCorrection_Kill_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int QoSCorrection::kTypeFieldNumber;
const int QoSCorrection::kKillFieldNumber;
#endif  // !_MSC_VER

QoSCorrection::QoSCorrection()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QoSCorrection::InitAsDefaultInstance() {
  kill_ = const_cast< ::mesos::slave::QoSCorrection_Kill*>(&::mesos::slave::QoSCorrection_Kill::default_instance());
}

QoSCorrection::QoSCorrection(const QoSCorrection& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QoSCorrection::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  kill_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QoSCorrection::~QoSCorrection() {
  SharedDtor();
}

void QoSCorrection::SharedDtor() {
  if (this != default_instance_) {
    delete kill_;
  }
}

void QoSCorrection::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QoSCorrection::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QoSCorrection_descriptor_;
}

const QoSCorrection& QoSCorrection::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mesos_2fslave_2foversubscription_2eproto();
  return *default_instance_;
}

QoSCorrection* QoSCorrection::default_instance_ = NULL;

QoSCorrection* QoSCorrection::New() const {
  return new QoSCorrection;
}

void QoSCorrection::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 1;
    if (has_kill()) {
      if (kill_ != NULL) kill_->::mesos::slave::QoSCorrection_Kill::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QoSCorrection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .mesos.slave.QoSCorrection.Type type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::mesos::slave::QoSCorrection_Type_IsValid(value)) {
            set_type(static_cast< ::mesos::slave::QoSCorrection_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_kill;
        break;
      }

      // optional .mesos.slave.QoSCorrection.Kill kill = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_kill:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_kill()));
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

void QoSCorrection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .mesos.slave.QoSCorrection.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .mesos.slave.QoSCorrection.Kill kill = 2;
  if (has_kill()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->kill(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QoSCorrection::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .mesos.slave.QoSCorrection.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .mesos.slave.QoSCorrection.Kill kill = 2;
  if (has_kill()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->kill(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QoSCorrection::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .mesos.slave.QoSCorrection.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .mesos.slave.QoSCorrection.Kill kill = 2;
    if (has_kill()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->kill());
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

void QoSCorrection::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QoSCorrection* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QoSCorrection*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QoSCorrection::MergeFrom(const QoSCorrection& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_kill()) {
      mutable_kill()->::mesos::slave::QoSCorrection_Kill::MergeFrom(from.kill());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QoSCorrection::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QoSCorrection::CopyFrom(const QoSCorrection& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QoSCorrection::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_kill()) {
    if (!this->kill().IsInitialized()) return false;
  }
  return true;
}

void QoSCorrection::Swap(QoSCorrection* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(kill_, other->kill_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QoSCorrection::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QoSCorrection_descriptor_;
  metadata.reflection = QoSCorrection_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace slave
}  // namespace mesos

// @@protoc_insertion_point(global_scope)
