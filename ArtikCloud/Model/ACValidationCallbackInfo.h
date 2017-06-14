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




@protocol ACValidationCallbackInfo
@end

@interface ACValidationCallbackInfo : ACObject

/* Application id that created the subscription. [optional]
 */
@property(nonatomic) NSString* aid;
/* Nonce obtained from the validation request. [optional]
 */
@property(nonatomic) NSString* nonce;

@end
