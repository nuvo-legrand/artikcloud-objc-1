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




@protocol ACDeviceTask
@end

@interface ACDeviceTask : ACObject

/* Number of attempts [optional]
 */
@property(nonatomic) NSNumber* numAttempts;
/* Error Message [optional]
 */
@property(nonatomic) NSString* errorMessage;
/* Error Code [optional]
 */
@property(nonatomic) NSString* errorCode;
/* Device ID [optional]
 */
@property(nonatomic) NSString* did;
/* Status [optional]
 */
@property(nonatomic) NSString* status;
/* Timestamp of most recent status change [optional]
 */
@property(nonatomic) NSNumber* ts;

@end
