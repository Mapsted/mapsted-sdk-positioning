//
//  MNPropertyInfo.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-19.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyInfo_h
#define MNPropertyInfo_h

@class MNBuildingInfo;
@class MNMercator;
@class MNHoursOfOperation;


/// An interface to represent a Property.

@interface MNPropertyInfo : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'propertyId'.
///
/// - Parameter propertyId:  A number identifying the property
/// - Returns: The new `Property` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId;


/***************************************************************************/


/// Unique identifying number for a Property.
- (NSInteger)propertyId;

/// Name of the Property.
- (nonnull NSString *)name;

/// Short name of the Property.
- (nonnull NSString *)shortName;

/// A combination of latitude and longitude to represent a property's location.
- (nonnull MNMercator *)centroid;

/// Minimum latitude of a property's location
- (double)minLat;

/// Maximum latitude of a property's location
- (double)maxLat;

/// Minimum longitude of a property's location
- (double)minLng;

/// Maximum longitude of a property's location
- (double)maxLng;

/// TODO: Ask what this is
- (double)mapToReal;

/// TODO: Ask what this is
- (double)fileSize;

/// Maximum full address of a property
- (nonnull NSString *)fullAddress;

/// Street address of a property
- (nonnull NSString *)streetAddress;

/// Postal Code of a property
- (nonnull NSString *)postalCode;

/// Property's hours of operation
- (nonnull MNHoursOfOperation *)hoursOfOperation;

/// Property's timezone
- (nonnull NSString *)timezone;

/// A collection of building information objects
- (nonnull NSArray<MNBuildingInfo *> *)buildingInfos;

/// TODO: Ask what this is
- (nonnull NSDictionary<NSString *, NSString *> *)urlMap;

/// TODO: ASK WHAT THIS IS
- (nonnull NSString *)imageUid;

/// ID of the city in which the property is located
- (NSInteger)cityId;

/// Name of the city in which the property is located
- (nonnull NSString *)cityName;

/// ID of the country in which the property is located
- (NSInteger)countryId;

/// Long name of the country in which the property is located
- (nonnull NSString *)countryLongName;

/// Short name of the country in which the property is located
- (nonnull NSString *)countryShortName;

 /// ID of the province in which the property is located.
- (NSInteger)stateProvinceId;

/// Long name of the province in which the property is located
- (nonnull NSString *)stateProvinceLongName;

/// Short name of the province in which the property is located
- (nonnull NSString *)stateProvinceShortName;

/// Very rough boundary defined by min/max latitude/longitude
- (nonnull NSArray<MNMercator *>*)looseBoundary;

/***************************************************************************/

/// website for property
- (nonnull NSString *)website;

/// phone number for property
- (nonnull NSString *)phoneNumber;

/***************************************************************************/
- (int) getPropertyDataMaxVersion;

- (int) getValidationType;

- (bool) isDisplayMultipleBuildings;

- (float) getPoiFadeZoomTh;
@end


#endif /* MNPropertyInfo_h */
