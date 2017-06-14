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




@protocol ACActionOut
@end

@interface ACActionOut : ACObject

/* Message ID. [optional]
 */
@property(nonatomic) NSString* mid;
/* User ID. [optional]
 */
@property(nonatomic) NSString* uid;
/* Source Device Type ID. [optional]
 */
@property(nonatomic) NSString* sdtid;
/* Created Timestamp (past, present or future). Defaults to current time if not provided. [optional]
 */
@property(nonatomic) NSNumber* cts;
/* Manifest Version. [optional]
 */
@property(nonatomic) NSNumber* mv;

@end
