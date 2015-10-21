// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mesos/master/quota.proto

#ifndef PROTOBUF_mesos_2fmaster_2fquota_2eproto__INCLUDED
#define PROTOBUF_mesos_2fmaster_2fquota_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "mesos/mesos.pb.h"
// @@protoc_insertion_point(includes)

namespace mesos {
namespace master {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mesos_2fmaster_2fquota_2eproto();
void protobuf_AssignDesc_mesos_2fmaster_2fquota_2eproto();
void protobuf_ShutdownFile_mesos_2fmaster_2fquota_2eproto();

class QuotaInfo;

// ===================================================================

class QuotaInfo : public ::google::protobuf::Message {
 public:
  QuotaInfo();
  virtual ~QuotaInfo();

  QuotaInfo(const QuotaInfo& from);

  inline QuotaInfo& operator=(const QuotaInfo& from) {
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
  static const QuotaInfo& default_instance();

  void Swap(QuotaInfo* other);

  // implements Message ----------------------------------------------

  QuotaInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QuotaInfo& from);
  void MergeFrom(const QuotaInfo& from);
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

  // optional string role = 1;
  inline bool has_role() const;
  inline void clear_role();
  static const int kRoleFieldNumber = 1;
  inline const ::std::string& role() const;
  inline void set_role(const ::std::string& value);
  inline void set_role(const char* value);
  inline void set_role(const char* value, size_t size);
  inline ::std::string* mutable_role();
  inline ::std::string* release_role();
  inline void set_allocated_role(::std::string* role);

  // repeated .mesos.Resource guarantee = 3;
  inline int guarantee_size() const;
  inline void clear_guarantee();
  static const int kGuaranteeFieldNumber = 3;
  inline const ::mesos::Resource& guarantee(int index) const;
  inline ::mesos::Resource* mutable_guarantee(int index);
  inline ::mesos::Resource* add_guarantee();
  inline const ::google::protobuf::RepeatedPtrField< ::mesos::Resource >&
      guarantee() const;
  inline ::google::protobuf::RepeatedPtrField< ::mesos::Resource >*
      mutable_guarantee();

  // @@protoc_insertion_point(class_scope:mesos.master.QuotaInfo)
 private:
  inline void set_has_role();
  inline void clear_has_role();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* role_;
  ::google::protobuf::RepeatedPtrField< ::mesos::Resource > guarantee_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_mesos_2fmaster_2fquota_2eproto();
  friend void protobuf_AssignDesc_mesos_2fmaster_2fquota_2eproto();
  friend void protobuf_ShutdownFile_mesos_2fmaster_2fquota_2eproto();

  void InitAsDefaultInstance();
  static QuotaInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// QuotaInfo

// optional string role = 1;
inline bool QuotaInfo::has_role() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QuotaInfo::set_has_role() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QuotaInfo::clear_has_role() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QuotaInfo::clear_role() {
  if (role_ != &::google::protobuf::internal::kEmptyString) {
    role_->clear();
  }
  clear_has_role();
}
inline const ::std::string& QuotaInfo::role() const {
  return *role_;
}
inline void QuotaInfo::set_role(const ::std::string& value) {
  set_has_role();
  if (role_ == &::google::protobuf::internal::kEmptyString) {
    role_ = new ::std::string;
  }
  role_->assign(value);
}
inline void QuotaInfo::set_role(const char* value) {
  set_has_role();
  if (role_ == &::google::protobuf::internal::kEmptyString) {
    role_ = new ::std::string;
  }
  role_->assign(value);
}
inline void QuotaInfo::set_role(const char* value, size_t size) {
  set_has_role();
  if (role_ == &::google::protobuf::internal::kEmptyString) {
    role_ = new ::std::string;
  }
  role_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* QuotaInfo::mutable_role() {
  set_has_role();
  if (role_ == &::google::protobuf::internal::kEmptyString) {
    role_ = new ::std::string;
  }
  return role_;
}
inline ::std::string* QuotaInfo::release_role() {
  clear_has_role();
  if (role_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = role_;
    role_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void QuotaInfo::set_allocated_role(::std::string* role) {
  if (role_ != &::google::protobuf::internal::kEmptyString) {
    delete role_;
  }
  if (role) {
    set_has_role();
    role_ = role;
  } else {
    clear_has_role();
    role_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .mesos.Resource guarantee = 3;
inline int QuotaInfo::guarantee_size() const {
  return guarantee_.size();
}
inline void QuotaInfo::clear_guarantee() {
  guarantee_.Clear();
}
inline const ::mesos::Resource& QuotaInfo::guarantee(int index) const {
  return guarantee_.Get(index);
}
inline ::mesos::Resource* QuotaInfo::mutable_guarantee(int index) {
  return guarantee_.Mutable(index);
}
inline ::mesos::Resource* QuotaInfo::add_guarantee() {
  return guarantee_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::Resource >&
QuotaInfo::guarantee() const {
  return guarantee_;
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::Resource >*
QuotaInfo::mutable_guarantee() {
  return &guarantee_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace master
}  // namespace mesos

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mesos_2fmaster_2fquota_2eproto__INCLUDED
