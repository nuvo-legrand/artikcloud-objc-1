#import "ACMessage.h"

@implementation ACMessage

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    self.type = @"message";
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"data": @"data", @"sdid": @"sdid", @"ts": @"ts", @"type": @"type" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"data", @"sdid", @"ts", @"type"];
  return [optionalProperties containsObject:propertyName];
}

@end
