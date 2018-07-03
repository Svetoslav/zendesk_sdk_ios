// Generated by Apple Swift version 4.0 (swiftlang-900.0.65 clang-900.0.37)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import ZendeskCoreSDK;
#endif

#import <ZendeskProviderSDK/ZendeskProviderSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("ZendeskProviderSDK")

SWIFT_CLASS_NAMED("AttachmentSettings")
@interface ZDKAttachmentSettings : NSObject
@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) NSInteger maxAttachmentSize;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("ContactUsSettings")
@interface ZDKContactUsSettings : NSObject
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tags;
- (nonnull instancetype)initWith:(NSArray<NSString *> * _Nonnull)tags OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("ConversationsSettings")
@interface ZDKConversationsSettings : NSObject
@property (nonatomic, readonly) BOOL enabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ZDKZendesk;
@class NSURLResponse;

SWIFT_CLASS("_TtC18ZendeskProviderSDK17DispatcherAdapter")
@interface DispatcherAdapter : NSObject
+ (void)performRequestWithZendesk:(ZDKZendesk * _Nonnull)zendesk urlRequset:(NSURLRequest * _Nonnull)urlRequset requiresAuth:(BOOL)requiresAuth completionHandler:(void (^ _Nonnull)(NSURLResponse * _Nullable, NSData * _Nullable, NSError * _Nullable))completionHandler;
+ (NSError * _Nullable)convertErrorWithResponse:(NSURLResponse * _Nullable)response originalError:(NSError * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
+ (void)clearSettingsAndSession;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK13HTMLSanitizer")
@interface HTMLSanitizer : NSObject
+ (NSString * _Nonnull)cleanWithHtml:(NSString * _Nonnull)html SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ZDKHelpCenterArticle;

SWIFT_CLASS_NAMED("HelpCenterArticleViewModel")
@interface ZDKHelpCenterArticleViewModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull section_id;
+ (NSArray<ZDKHelpCenterArticleViewModel *> * _Nonnull)convertWithArticles:(NSArray<ZDKHelpCenterArticle *> * _Nonnull)articles SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("HelpCenterBlips")
@interface ZDKHelpCenterBlips : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



@class ZDKHelpCenterSectionViewModel;

SWIFT_CLASS_NAMED("HelpCenterCategoryViewModel")
@interface ZDKHelpCenterCategoryViewModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSArray<ZDKHelpCenterSectionViewModel *> * _Nonnull sections;
- (ZDKHelpCenterCategoryViewModel * _Nonnull)updateWithSection:(ZDKHelpCenterSectionViewModel * _Nonnull)newSection SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("HelpCenterCategoryViewModelContainer")
@interface ZDKHelpCenterCategoryViewModelContainer : NSObject
+ (NSArray<ZDKHelpCenterCategoryViewModel *> * _Nullable)parseWithData:(NSData * _Nonnull)data error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("HelpCenterSectionViewModel")
@interface ZDKHelpCenterSectionViewModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSArray<ZDKHelpCenterArticleViewModel *> * _Nonnull articles;
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull category_id;
@property (nonatomic, readonly) NSInteger article_count;
@property (nonatomic, readonly, copy) NSString * _Nonnull detailTitle;
- (ZDKHelpCenterSectionViewModel * _Nonnull)sectionByReplacingWithArticles:(NSArray<ZDKHelpCenterArticleViewModel *> * _Nonnull)articles SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("HelpCenterSettings")
@interface ZDKHelpCenterSettings : NSObject
@property (nonatomic, readonly) BOOL helpCenterArticleVotingEnabled;
@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly, copy) NSString * _Nonnull locale;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ZDKRequestStorage;

SWIFT_CLASS_NAMED("LegacyRequestStorageMigrator")
@interface ZDKLegacyRequestStorageMigrator : NSObject
- (nonnull instancetype)initWithRequestStorage:(ZDKRequestStorage * _Nonnull)requestStorage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




SWIFT_CLASS_NAMED("RequestBlips")
@interface ZDKRequestBlips : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




SWIFT_CLASS_NAMED("RequestForStorage")
@interface ZDKRequestForStorage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




SWIFT_CLASS_NAMED("RequestStorage")
@interface ZDKRequestStorage : NSObject
- (nonnull instancetype)initWithZendesk:(ZDKZendesk * _Nonnull)zendesk;
- (ZDKRequestForStorage * _Nullable)getRequestForId:(NSString * _Nonnull)requestId SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




/// RequestUpdates object contains information about
/// unread comments on each request the user has open.
SWIFT_CLASS_NAMED("RequestUpdates")
@interface ZDKRequestUpdates : NSObject
/// Dictionary with requestIds as keys and the unread comment count
/// as values.
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull requestUpdates;
/// The total unread comments on all the user’s requests.
@property (nonatomic, readonly) NSInteger totalUpdates;
/// Method takes a request ID returns a bool indicating
/// whether a request has unread comments or not
/// \param requestId ID of request
///
///
/// returns:
/// A Bool indicating whether the request has unread comments
- (BOOL)isRequestUnread:(NSString * _Nonnull)requestId SWIFT_WARN_UNUSED_RESULT;
/// Determines whether the current user has any unread requests
///
/// returns:
/// A bool indicating whether the user has unread requests
- (BOOL)hasUpdatedRequests SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// ZDKSupport is responsible for initialization of
/// the SDK and manages the backend configuration.
SWIFT_CLASS_NAMED("Support")
@interface ZDKSupport : NSObject
/// Locale override for help center
@property (nonatomic, copy) NSString * _Nullable helpCenterLocaleOverride;
/// Initialize the Support singleton with the Zendesk singleton
/// from ZendeskCoreSDK
+ (void)initializeWithZendesk:(ZDKZendesk * _Nullable)zendesk;
/// Get the API instance (singleton).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKSupport * _Nullable instance;)
+ (ZDKSupport * _Nullable)instance SWIFT_WARN_UNUSED_RESULT;
/// This method can be used to aid in handling push notifications relating to requests.
/// This method can result in a dynamic update in the request UI. For this occur,
/// the push notification and the on screen request must contain matching request ids.
/// This method will return true only in the case of a successful UI update.
/// A return value of false means that the push notification was unhandled.
/// At this point you can decided how best to update the user based on the contents of the notification.
/// \param requestId The ID of the request to refresh
///
///
/// returns:
/// A boolean indicating whether the Request Detail Screen has been refresh or not.
- (BOOL)refreshRequestWithRequestId:(NSString * _Nonnull)requestId SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class ZDKTicketFormsSettings;

SWIFT_CLASS_NAMED("SupportSettings")
@interface ZDKSupportSettings : NSObject
@property (nonatomic, readonly) BOOL neverRequestEmail;
@property (nonatomic, readonly) BOOL showClosedRequests;
@property (nonatomic, readonly) BOOL showReferrerLogo;
@property (nonatomic, readonly, copy) NSString * _Nonnull referrerUrl;
@property (nonatomic, readonly, copy) NSString * _Nonnull systemMessage;
@property (nonatomic, readonly, strong) ZDKConversationsSettings * _Nonnull conversationSettings;
@property (nonatomic, readonly, strong) ZDKAttachmentSettings * _Nonnull attachmentSettings;
@property (nonatomic, readonly, strong) ZDKTicketFormsSettings * _Nonnull ticketFormsSettings;
@property (nonatomic, readonly, strong) ZDKContactUsSettings * _Nonnull contactUsSettings;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("TicketFormsSettings")
@interface ZDKTicketFormsSettings : NSObject
@property (nonatomic, readonly) BOOL available;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK29ZDKAttachmentSettingsProvider")
@interface ZDKAttachmentSettingsProvider : NSObject
+ (void)getAttachmentSettingsWithCallback:(void (^ _Nonnull)(ZDKAttachmentSettings * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK28ZDKContactUsSettingsProvider")
@interface ZDKContactUsSettingsProvider : NSObject
+ (void)getContactUsSettingsWithCallback:(void (^ _Nonnull)(ZDKContactUsSettings * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK32ZDKConversationsSettingsProvider")
@interface ZDKConversationsSettingsProvider : NSObject
+ (void)getConversationsSettingsWithCallback:(void (^ _Nonnull)(ZDKConversationsSettings * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK29ZDKHelpCenterSettingsProvider")
@interface ZDKHelpCenterSettingsProvider : NSObject
+ (void)getHelpCenterSettingsWithCallback:(void (^ _Nonnull)(ZDKHelpCenterSettings * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ZDKRequest;

@interface ZDKRequestProvider (SWIFT_EXTENSION(ZendeskProviderSDK))
/// Gets details of any updates to requests for this device.
/// <code>ZDKRequestUpdates</code> are cached for up to one hour. Subsequent calls to this method within
/// the hour will return the same object without querying the network. Calling this method once
/// the hour has expired will query the network again, and cache the new results for the next
/// hour.
/// If using the Zendesk UI, viewing a request will update the cached <code>ZDKRequestUpdates</code>
/// to remove the viewed request. If using the providers only, a request can be removed from
/// the cached <code>ZDKRequestUpdates</code> by calling <code>markRequestAsRead:</code>.
/// @since 1.10.0.1
/// \param callback callback supplies a optional <code>ZDKRequestUpdates</code> object that is either nil if unsuccessful
/// or <code>nonnil</code> if successful.
///
- (void)getUpdatesForDeviceWithCallback:(void (^ _Nonnull)(ZDKRequestUpdates * _Nullable))callback;
/// Marks all the comments of a request as read
/// by making the commentCount and readCommentCount
/// equal to the commentCount that is passed in.
/// \param requestId ID of request to mark as read
///
/// \param commentCount This sets both the commentCount and readCommentCount as this number.
///
- (void)markRequestAsRead:(NSString * _Nonnull)requestId withCommentCount:(NSInteger)commentCount;
/// Marks the request as unread
/// by incrementing the commentCount by one.
/// This should be used when a push notification has been recieved to
/// updated the request as unread.
/// \param requestId ID of request to mark as unread
///
- (void)markRequestAsUnread:(NSString * _Nonnull)requestId;
- (void)updateRequestStorageWithRequests:(NSArray<ZDKRequest *> * _Nonnull)requests;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK26ZDKSupportSettingsProvider")
@interface ZDKSupportSettingsProvider : NSObject
+ (void)getSupportSettingsWithCallback:(void (^ _Nonnull)(ZDKSupportSettings * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18ZendeskProviderSDK30ZDKTicketFormsSettingsProvider")
@interface ZDKTicketFormsSettingsProvider : NSObject
+ (void)getTicketFormsSettingsWithCallback:(void (^ _Nonnull)(ZDKTicketFormsSettings * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface ZDKZendesk (SWIFT_EXTENSION(ZendeskProviderSDK))
@property (nonatomic, readonly, copy) NSString * _Nonnull zendeskUrl;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
