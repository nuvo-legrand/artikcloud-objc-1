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




@protocol ACExportRequestInfo
@end

@interface ACExportRequestInfo : ACObject

/* Add header to csv format [optional]
 */
@property(nonatomic) NSNumber* csvHeaders;
/* Timestamp of latest message (in milliseconds since epoch). [optional]
 */
@property(nonatomic) NSNumber* endDate;
/* Format of the export. [optional]
 */
@property(nonatomic) NSString* format;
/* Ascending or descending sort order. [optional]
 */
@property(nonatomic) NSString* order;
/* Source Device IDs being searched for messages (Comma-separated for multiple Device IDs). [optional]
 */
@property(nonatomic) NSString* sdids;
/* Source Device Type IDs being searched for messages (Comma-separated for multiple Device Type IDs). [optional]
 */
@property(nonatomic) NSString* sdtids;
/* Timestamp of earliest message (in milliseconds since epoch). [optional]
 */
@property(nonatomic) NSNumber* startDate;
/* Trial ID being searched for messages. [optional]
 */
@property(nonatomic) NSString* trialId;
/* Owner's user IDs being searched for messages (Comma-separated for multiple User IDs). [optional]
 */
@property(nonatomic) NSString* uids;
/* URL added to successful email message. [optional]
 */
@property(nonatomic) NSString* url;

@end
