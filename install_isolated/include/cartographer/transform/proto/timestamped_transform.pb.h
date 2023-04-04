// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/transform/proto/timestamped_transform.proto

#ifndef PROTOBUF_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto__INCLUDED
#define PROTOBUF_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace transform {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto();
void protobuf_AssignDesc_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto();
void protobuf_ShutdownFile_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto();

class TimestampedTransform;

// ===================================================================

class TimestampedTransform : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.transform.proto.TimestampedTransform) */ {
 public:
  TimestampedTransform();
  virtual ~TimestampedTransform();

  TimestampedTransform(const TimestampedTransform& from);

  inline TimestampedTransform& operator=(const TimestampedTransform& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TimestampedTransform& default_instance();

  void Swap(TimestampedTransform* other);

  // implements Message ----------------------------------------------

  inline TimestampedTransform* New() const { return New(NULL); }

  TimestampedTransform* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TimestampedTransform& from);
  void MergeFrom(const TimestampedTransform& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TimestampedTransform* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 time = 1;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // optional .cartographer.transform.proto.Rigid3d transform = 2;
  bool has_transform() const;
  void clear_transform();
  static const int kTransformFieldNumber = 2;
  const ::cartographer::transform::proto::Rigid3d& transform() const;
  ::cartographer::transform::proto::Rigid3d* mutable_transform();
  ::cartographer::transform::proto::Rigid3d* release_transform();
  void set_allocated_transform(::cartographer::transform::proto::Rigid3d* transform);

  // @@protoc_insertion_point(class_scope:cartographer.transform.proto.TimestampedTransform)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 time_;
  ::cartographer::transform::proto::Rigid3d* transform_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto();
  friend void protobuf_AssignDesc_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto();

  void InitAsDefaultInstance();
  static TimestampedTransform* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TimestampedTransform

// optional int64 time = 1;
inline void TimestampedTransform::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TimestampedTransform::time() const {
  // @@protoc_insertion_point(field_get:cartographer.transform.proto.TimestampedTransform.time)
  return time_;
}
inline void TimestampedTransform::set_time(::google::protobuf::int64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:cartographer.transform.proto.TimestampedTransform.time)
}

// optional .cartographer.transform.proto.Rigid3d transform = 2;
inline bool TimestampedTransform::has_transform() const {
  return !_is_default_instance_ && transform_ != NULL;
}
inline void TimestampedTransform::clear_transform() {
  if (GetArenaNoVirtual() == NULL && transform_ != NULL) delete transform_;
  transform_ = NULL;
}
inline const ::cartographer::transform::proto::Rigid3d& TimestampedTransform::transform() const {
  // @@protoc_insertion_point(field_get:cartographer.transform.proto.TimestampedTransform.transform)
  return transform_ != NULL ? *transform_ : *default_instance_->transform_;
}
inline ::cartographer::transform::proto::Rigid3d* TimestampedTransform::mutable_transform() {
  
  if (transform_ == NULL) {
    transform_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.transform.proto.TimestampedTransform.transform)
  return transform_;
}
inline ::cartographer::transform::proto::Rigid3d* TimestampedTransform::release_transform() {
  // @@protoc_insertion_point(field_release:cartographer.transform.proto.TimestampedTransform.transform)
  
  ::cartographer::transform::proto::Rigid3d* temp = transform_;
  transform_ = NULL;
  return temp;
}
inline void TimestampedTransform::set_allocated_transform(::cartographer::transform::proto::Rigid3d* transform) {
  delete transform_;
  transform_ = transform;
  if (transform) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.transform.proto.TimestampedTransform.transform)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace transform
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2ftransform_2fproto_2ftimestamped_5ftransform_2eproto__INCLUDED
