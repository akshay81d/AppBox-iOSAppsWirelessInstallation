///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMRevokeLinkedApiAppArg;

#pragma mark - API Object

///
/// The `RevokeLinkedApiAppArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeLinkedApiAppArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The application's unique id
@property (nonatomic, readonly, copy) NSString * _Nonnull appId;

/// The unique id of the member owning the device
@property (nonatomic, readonly, copy) NSString * _Nonnull teamMemberId;

/// Whether to keep the application dedicated folder (in case the application
/// uses  one)
@property (nonatomic, readonly) NSNumber * _Nonnull keepAppFolder;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param appId The application's unique id
/// @param teamMemberId The unique id of the member owning the device
/// @param keepAppFolder Whether to keep the application dedicated folder (in
/// case the application uses  one)
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAppId:(NSString * _Nonnull)appId
                         teamMemberId:(NSString * _Nonnull)teamMemberId
                        keepAppFolder:(NSNumber * _Nullable)keepAppFolder;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param appId The application's unique id
/// @param teamMemberId The unique id of the member owning the device
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAppId:(NSString * _Nonnull)appId teamMemberId:(NSString * _Nonnull)teamMemberId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RevokeLinkedApiAppArg` struct.
///
@interface DBTEAMRevokeLinkedApiAppArgSerializer : NSObject

///
/// Serializes `DBTEAMRevokeLinkedApiAppArg` instances.
///
/// @param instance An instance of the `DBTEAMRevokeLinkedApiAppArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedApiAppArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMRevokeLinkedApiAppArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMRevokeLinkedApiAppArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedApiAppArg` API object.
///
/// @return An instantiation of the `DBTEAMRevokeLinkedApiAppArg` object.
///
+ (DBTEAMRevokeLinkedApiAppArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
