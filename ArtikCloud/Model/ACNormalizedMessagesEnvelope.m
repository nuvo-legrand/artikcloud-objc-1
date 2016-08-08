#import "ACNormalizedMessagesEnvelope.h"

@implementation ACNormalizedMessagesEnvelope

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"sdids": @"sdids", @"sdid": @"sdid", @"uid": @"uid", @"startDate": @"startDate", @"endDate": @"endDate", @"order": @"order", @"next": @"next", @"count": @"count", @"size": @"size", @"data": @"data" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"sdids", @"sdid", @"uid", @"startDate", @"endDate", @"order", @"next", ];
  return [optionalProperties containsObject:propertyName];
}

@end