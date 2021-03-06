#import <Foundation/Foundation.h>
#import "ACObject.h"

/**
* ARTIK Cloud API
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "ACCreateModelData.h"
#import "ACParameters.h"


@protocol ACCreateModelBody
@end

@interface ACCreateModelBody : ACObject


@property(nonatomic) ACCreateModelData* data;

@property(nonatomic) NSString* type;

@property(nonatomic) ACParameters* parameters;

@end
