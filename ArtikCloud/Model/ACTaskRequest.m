#import "ACTaskRequest.h"

@implementation ACTaskRequest

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"filter": @"filter", @"taskType": @"taskType", @"dtid": @"dtid", @"_property": @"property", @"dids": @"dids", @"taskParameters": @"taskParameters" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"filter", @"taskType", @"dtid", @"_property", @"dids", @"taskParameters"];
  return [optionalProperties containsObject:propertyName];
}

@end
