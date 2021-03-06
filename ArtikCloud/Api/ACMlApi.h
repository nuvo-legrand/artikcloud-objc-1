#import <Foundation/Foundation.h>
#import "ACCreateModelBody.h"
#import "ACGetModelsResponseBody.h"
#import "ACModelResponseBody.h"
#import "ACPredictBody.h"
#import "ACPredictResponseBody.h"
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



@interface ACMlApi: NSObject <ACApi>

extern NSString* kACMlApiErrorDomain;
extern NSInteger kACMlApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(ACApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create model
/// Create model
///
/// @param body Body (optional)
/// 
///  code:0 message:"success"
///
/// @return ACModelResponseBody*
-(NSURLSessionTask*) createModelWithBody: (ACCreateModelBody*) body
    completionHandler: (void (^)(ACModelResponseBody* output, NSError* error)) handler;


/// Delete model
/// Delete model
///
/// @param modelId modelId
/// 
///  code:0 message:"success"
///
/// @return ACModelResponseBody*
-(NSURLSessionTask*) deleteModelWithModelId: (NSString*) modelId
    completionHandler: (void (^)(ACModelResponseBody* output, NSError* error)) handler;


/// Get model
/// Get model
///
/// @param modelId modelId
/// 
///  code:0 message:"success"
///
/// @return ACModelResponseBody*
-(NSURLSessionTask*) getModelWithModelId: (NSString*) modelId
    completionHandler: (void (^)(ACModelResponseBody* output, NSError* error)) handler;


/// Get models
/// Get models
///
/// @param uid uid (optional)
/// @param count count (optional)
/// @param offset offset (optional)
/// 
///  code:0 message:"success"
///
/// @return ACGetModelsResponseBody*
-(NSURLSessionTask*) getModelsWithUid: (NSString*) uid
    count: (NSString*) count
    offset: (NSString*) offset
    completionHandler: (void (^)(ACGetModelsResponseBody* output, NSError* error)) handler;


/// Predict
/// Predict
///
/// @param modelId modelId
/// @param body Body (optional)
/// 
///  code:0 message:"success"
///
/// @return ACPredictResponseBody*
-(NSURLSessionTask*) predictWithModelId: (NSString*) modelId
    body: (ACPredictBody*) body
    completionHandler: (void (^)(ACPredictResponseBody* output, NSError* error)) handler;



@end
