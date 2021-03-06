/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2016 Google Inc.
 */

//
//  GTLUserEndPointApiUserBean.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   userEndPointApi/v1
// Description:
//   This is an API
// Classes:
//   GTLUserEndPointApiUserBean (0 custom class methods, 7 custom properties)

#import "GTLUserEndPointApiUserBean.h"

// ----------------------------------------------------------------------------
//
//   GTLUserEndPointApiUserBean
//

@implementation GTLUserEndPointApiUserBean
@dynamic creationDate, displayName, email, identifier, subscriptionPaid,
         subscriptionPaidDate, updatedDate;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
  return map;
}

@end
