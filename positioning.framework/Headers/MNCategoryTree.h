//
//  MNCategoryTree.h
//  positioning
//
//  Created by Mapsted on 2019-08-12.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNCategoryTree_h
#define MNCategoryTree_h

@class MNCategory;

/***************************************************************************/

/// Represents a tree describing structured data of parent and child categories

@interface MNCategoryTree : NSObject


/***************************************************************************/

/// Creates an instance of MNCategoryTree with the global category tree.
///
/// - Returns: A new `MNCategoryTree` instance.

- (nullable id)initWithGlobal;

/***************************************************************************/

/// Creates an instance of 'MNCategoryTree' for the provided 'propertyId'
///
/// - Parameter propertyId: A number identifying a property
/// - Returns: A new `MNCategoryTree` instance for the given property.

- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/

/// A number identifying a property

- (NSInteger)propertyId;

/***************************************************************************/

/// A dictionary collection of names and mapped categories .

- (nonnull NSDictionary<NSString *, MNCategory *>*)categoryMap;

/***************************************************************************/

/// A list of all available root categories

- (nonnull NSArray<NSString *>*)roots;

/***************************************************************************/

/// Get the category matching the given 'guid'
///
/// - Parameter guid:  A unique string identiying the category.
///
/// - Returns: The matching category if found. If no matches found, nil is returned.

- (nullable MNCategory *)getCategory:(nonnull NSString *)guid;

/***************************************************************************/

/// Checks whether a given category with 'testGuid' is in the 'rootGuid' subtree
///
/// - Parameter rootGuid:  The subtree to check for existence of a category
/// - Parameter 'testGuid':  The category to check
/// - Returns: True if the category is found in the sub tree, and false otherwise.

- (BOOL)isCategoryInSubTree:(nonnull NSString *)rootGuid category:(nonnull NSString *)testGuid;

/***************************************************************************/

@end
#endif /* MNCategoryTree_h */
