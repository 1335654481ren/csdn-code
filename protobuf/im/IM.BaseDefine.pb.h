// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.BaseDefine.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_IM_2eBaseDefine_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_IM_2eBaseDefine_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_IM_2eBaseDefine_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_IM_2eBaseDefine_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace IM {
namespace BaseDefine {

enum ServiceID : int {
  SID_DEFAULT = 0,
  SID_LOGIN = 1,
  SID_BUDDY_LIST = 2,
  SID_MSG = 3,
  SID_GROUP = 4,
  SID_FILE = 5,
  SID_SWITCH_SERVICE = 6,
  SID_OTHER = 7,
  SID_INTERNAL = 8,
  ServiceID_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ServiceID_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ServiceID_IsValid(int value);
constexpr ServiceID ServiceID_MIN = SID_DEFAULT;
constexpr ServiceID ServiceID_MAX = SID_INTERNAL;
constexpr int ServiceID_ARRAYSIZE = ServiceID_MAX + 1;

enum LoginCmdID : int {
  CID_LOGIN_REQ_DEFAULT = 0,
  CID_LOGIN_REQ_MSGSERVER = 257,
  CID_LOGIN_RES_MSGSERVER = 258,
  CID_LOGIN_REQ_USERLOGIN = 259,
  CID_LOGIN_RES_USERLOGIN = 260,
  CID_LOGIN_REQ_LOGINOUT = 261,
  CID_LOGIN_RES_LOGINOUT = 262,
  CID_LOGIN_KICK_USER = 263,
  CID_LOGIN_REQ_DEVICETOKEN = 264,
  CID_LOGIN_RES_DEVICETOKEN = 265,
  CID_LOGIN_REQ_KICKPCCLIENT = 266,
  CID_LOGIN_RES_KICKPCCLIENT = 267,
  CID_LOGIN_REQ_PUSH_SHIELD = 268,
  CID_LOGIN_RES_PUSH_SHIELD = 269,
  CID_LOGIN_REQ_QUERY_PUSH_SHIELD = 270,
  CID_LOGIN_RES_QUERY_PUSH_SHIELD = 271,
  LoginCmdID_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  LoginCmdID_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool LoginCmdID_IsValid(int value);
constexpr LoginCmdID LoginCmdID_MIN = CID_LOGIN_REQ_DEFAULT;
constexpr LoginCmdID LoginCmdID_MAX = CID_LOGIN_RES_QUERY_PUSH_SHIELD;
constexpr int LoginCmdID_ARRAYSIZE = LoginCmdID_MAX + 1;

enum MessageCmdID : int {
  CID_MSG_DEFAULT = 0,
  CID_MSG_DATA = 769,
  CID_MSG_DATA_ACK = 770,
  CID_MSG_READ_ACK = 771,
  CID_MSG_READ_NOTIFY = 772,
  CID_MSG_TIME_REQUEST = 773,
  CID_MSG_TIME_RESPONSE = 774,
  CID_MSG_UNREAD_CNT_REQUEST = 775,
  CID_MSG_UNREAD_CNT_RESPONSE = 776,
  CID_MSG_LIST_REQUEST = 777,
  CID_MSG_LIST_RESPONSE = 778,
  CID_MSG_GET_LATEST_MSG_ID_REQ = 779,
  CID_MSG_GET_LATEST_MSG_ID_RSP = 780,
  CID_MSG_GET_BY_MSG_ID_REQ = 781,
  CID_MSG_GET_BY_MSG_ID_RES = 782,
  MessageCmdID_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  MessageCmdID_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool MessageCmdID_IsValid(int value);
constexpr MessageCmdID MessageCmdID_MIN = CID_MSG_DEFAULT;
constexpr MessageCmdID MessageCmdID_MAX = CID_MSG_GET_BY_MSG_ID_RES;
constexpr int MessageCmdID_ARRAYSIZE = MessageCmdID_MAX + 1;

enum UserStatType : int {
  USER_STATUS_DEFAULT = 0,
  USER_STATUS_ONLINE = 1,
  USER_STATUS_OFFLINE = 2,
  USER_STATUS_LEAVE = 3,
  UserStatType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  UserStatType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool UserStatType_IsValid(int value);
constexpr UserStatType UserStatType_MIN = USER_STATUS_DEFAULT;
constexpr UserStatType UserStatType_MAX = USER_STATUS_LEAVE;
constexpr int UserStatType_ARRAYSIZE = UserStatType_MAX + 1;

enum ClientType : int {
  CLIENT_TYPE_DEFAULT = 0,
  CLIENT_TYPE_WINDOWS = 1,
  CLIENT_TYPE_MAC = 2,
  CLIENT_TYPE_IOS = 17,
  CLIENT_TYPE_ANDROID = 18,
  ClientType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ClientType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ClientType_IsValid(int value);
constexpr ClientType ClientType_MIN = CLIENT_TYPE_DEFAULT;
constexpr ClientType ClientType_MAX = CLIENT_TYPE_ANDROID;
constexpr int ClientType_ARRAYSIZE = ClientType_MAX + 1;

enum MsgType : int {
  MSG_TYPE_DEFAULT = 0,
  MSG_TYPE_SINGLE_TEXT = 1,
  MSG_TYPE_SINGLE_AUDIO = 2,
  MSG_TYPE_GROUP_TEXT = 17,
  MSG_TYPE_GROUP_AUDIO = 18,
  MsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  MsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool MsgType_IsValid(int value);
constexpr MsgType MsgType_MIN = MSG_TYPE_DEFAULT;
constexpr MsgType MsgType_MAX = MSG_TYPE_GROUP_AUDIO;
constexpr int MsgType_ARRAYSIZE = MsgType_MAX + 1;

enum SessionType : int {
  SESSION_TYPE_DEFAULT = 0,
  SESSION_TYPE_SINGLE = 1,
  SESSION_TYPE_GROUP = 2,
  SessionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SessionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SessionType_IsValid(int value);
constexpr SessionType SessionType_MIN = SESSION_TYPE_DEFAULT;
constexpr SessionType SessionType_MAX = SESSION_TYPE_GROUP;
constexpr int SessionType_ARRAYSIZE = SessionType_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace BaseDefine
}  // namespace IM

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::IM::BaseDefine::ServiceID> : ::std::true_type {};
template <> struct is_proto_enum< ::IM::BaseDefine::LoginCmdID> : ::std::true_type {};
template <> struct is_proto_enum< ::IM::BaseDefine::MessageCmdID> : ::std::true_type {};
template <> struct is_proto_enum< ::IM::BaseDefine::UserStatType> : ::std::true_type {};
template <> struct is_proto_enum< ::IM::BaseDefine::ClientType> : ::std::true_type {};
template <> struct is_proto_enum< ::IM::BaseDefine::MsgType> : ::std::true_type {};
template <> struct is_proto_enum< ::IM::BaseDefine::SessionType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_IM_2eBaseDefine_2eproto
