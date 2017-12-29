#import <Foundation/Foundation.h>
#import "ACCertificateEnvelope.h"
#import "ACDeviceTypeUpdateInput.h"
#import "ACRejectedCSVRowsEnvelope.h"
#import "ACUploadIdEnvelope.h"
#import "ACUploadStatusEnvelope.h"
#import "ACWhitelistEnvelope.h"
#import "ACWhitelistResultEnvelope.h"
#import "ACApi.h"

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



@interface ACWhitelistingApi: NSObject <ACApi>

extern NSString* kACWhitelistingApiErrorDomain;
extern NSInteger kACWhitelistingApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(ACApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Delete a vdid from the devicetype whitelist.
/// Delete a vdid from the devicetype whitelist.
///
/// @param dtid Device Type ID.
/// @param vdid Vendor Device ID.
/// 
///  code:0 message:"success"
///
/// @return ACWhitelistEnvelope*
-(NSURLSessionTask*) deleteVdidWithDtid: (NSString*) dtid
    vdid: (NSString*) vdid
    completionHandler: (void (^)(ACWhitelistEnvelope* output, NSError* error)) handler;


/// Delete a whitelist certificate associated with a devicetype.
/// Delete a whitelist certificate associated with a devicetype.
///
/// @param dtid Device Type ID.
/// @param cid Certificate ID.
/// 
///  code:0 message:"success"
///
/// @return ACWhitelistEnvelope*
-(NSURLSessionTask*) deleteWhitelistCertificateWithDtid: (NSString*) dtid
    cid: (NSString*) cid
    completionHandler: (void (^)(ACWhitelistEnvelope* output, NSError* error)) handler;


/// Enable or disble whitelist feature of a device type
/// Enable or disble whitelist feature of a device type
///
/// @param dtid Device Type ID.
/// @param deviceTypeUpdateInfo Device type update input.
/// 
///  code:0 message:"success"
///
/// @return ACWhitelistEnvelope*
-(NSURLSessionTask*) enableWhitelistWithDtid: (NSString*) dtid
    deviceTypeUpdateInfo: (ACDeviceTypeUpdateInput*) deviceTypeUpdateInfo
    completionHandler: (void (^)(ACWhitelistEnvelope* output, NSError* error)) handler;


/// Get the list of rejected rows for an uploaded CSV file.
/// Get the list of rejected rows for an uploaded CSV file.
///
/// @param dtid Device type id related to the uploaded CSV file.
/// @param uploadId Upload id related to the uploaded CSV file.
/// @param count Max results count. (optional)
/// @param offset Result starting offset. (optional)
/// 
///  code:0 message:"success"
///
/// @return ACRejectedCSVRowsEnvelope*
-(NSURLSessionTask*) getRejectedRowListWithDtid: (NSString*) dtid
    uploadId: (NSString*) uploadId
    count: (NSNumber*) count
    offset: (NSNumber*) offset
    completionHandler: (void (^)(ACRejectedCSVRowsEnvelope* output, NSError* error)) handler;


/// Get the status of a uploaded CSV file.
/// Get the status of a uploaded CSV file.
///
/// @param dtid Device type id related to the uploaded CSV file.
/// @param uploadId Upload id related to the uploaded CSV file.
/// 
///  code:0 message:"success"
///
/// @return ACUploadStatusEnvelope*
-(NSURLSessionTask*) getUploadStatusWithDtid: (NSString*) dtid
    uploadId: (NSString*) uploadId
    completionHandler: (void (^)(ACUploadStatusEnvelope* output, NSError* error)) handler;


/// Get whitelisted vdids of a device type.
/// Get whitelisted vdids of a device type.
///
/// @param dtid Device Type ID.
/// @param count Max results count. (optional)
/// @param offset Result starting offset. (optional)
/// 
///  code:0 message:"success"
///
/// @return ACWhitelistResultEnvelope*
-(NSURLSessionTask*) getWhitelistWithDtid: (NSString*) dtid
    count: (NSNumber*) count
    offset: (NSNumber*) offset
    completionHandler: (void (^)(ACWhitelistResultEnvelope* output, NSError* error)) handler;


/// Get whitelist certificate of device type.
/// Get whitelist certificate of device type.
///
/// @param dtid Device Type ID.
/// 
///  code:0 message:"success"
///
/// @return ACCertificateEnvelope*
-(NSURLSessionTask*) getWhitelistCertificateWithDtid: (NSString*) dtid
    completionHandler: (void (^)(ACCertificateEnvelope* output, NSError* error)) handler;


/// Get the status of whitelist feature (enabled/disabled) of a device type.
/// Get the status of whitelist feature (enabled/disabled) of a device type.
///
/// @param dtid Device Type ID.
/// 
///  code:0 message:"success"
///
/// @return ACWhitelistEnvelope*
-(NSURLSessionTask*) getWhitelistStatusWithDtid: (NSString*) dtid
    completionHandler: (void (^)(ACWhitelistEnvelope* output, NSError* error)) handler;


/// Upload a CSV file related to the Device Type.
/// Upload a CSV file related to the Device Type.
///
/// @param dtid Device Type ID.
/// @param file Device Type ID.
/// 
///  code:0 message:"success"
///
/// @return ACUploadIdEnvelope*
-(NSURLSessionTask*) uploadCSVWithDtid: (NSString*) dtid
    file: (NSData*) file
    completionHandler: (void (^)(ACUploadIdEnvelope* output, NSError* error)) handler;



@end
