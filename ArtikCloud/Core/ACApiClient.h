#import <AFNetworking/AFNetworking.h>
#import "ACConfiguration.h"
#import "ACResponseDeserializer.h"
#import "ACSanitizer.h"

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


/**
 * A key for `NSError` user info dictionaries.
 *
 * The corresponding value is the parsed response body for an HTTP error.
 */
extern NSString *const ACResponseObjectErrorKey;


@interface ACApiClient : AFHTTPSessionManager

@property (nonatomic, strong, readonly) id<ACConfiguration> configuration;

@property(nonatomic, assign) NSTimeInterval timeoutInterval;

@property(nonatomic, strong) id<ACResponseDeserializer> responseDeserializer;

@property(nonatomic, strong) id<ACSanitizer> sanitizer;

@property (nonatomic, strong) NSDictionary< NSString *, AFHTTPRequestSerializer <AFURLRequestSerialization> *>* requestSerializerForContentType;

/**
 * Gets client singleton instance
 */
+ (instancetype) sharedClient;


/**
 * Updates header parameters and query parameters for authentication
 *
 * @param headers The header parameter will be udpated, passed by pointer to pointer.
 * @param querys The query parameters will be updated, passed by pointer to pointer.
 * @param authSettings The authentication names NSArray.
 */
- (void) updateHeaderParams:(NSDictionary **)headers queryParams:(NSDictionary **)querys WithAuthSettings:(NSArray *)authSettings;


/**
 * Initializes the session manager with a configuration.
 *
 * @param configuration The configuration implementation
 */
- (instancetype)initWithConfiguration:(id<ACConfiguration>)configuration;

/**
* Initializes the session manager with a configuration and url
*
* @param url The base url
* @param configuration The configuration implementation
*/
- (instancetype)initWithBaseURL:(NSURL *)url configuration:(id<ACConfiguration>)configuration;

/**
 * Performs request
 *
 * @param path Request url.
 * @param method Request method.
 * @param pathParams Request path parameters.
 * @param queryParams Request query parameters.
 * @param body Request body.
 * @param headerParams Request header parameters.
 * @param authSettings Request authentication names.
 * @param requestContentType Request content-type.
 * @param responseContentType Response content-type.
 * @param completionBlock The block will be executed when the request completed.
 *
 * @return The created session task.
 */
- (NSURLSessionTask*) requestWithPath: (NSString*) path
                               method: (NSString*) method
                           pathParams: (NSDictionary *) pathParams
                          queryParams: (NSDictionary*) queryParams
                           formParams: (NSDictionary *) formParams
                                files: (NSDictionary *) files
                                 body: (id) body
                         headerParams: (NSDictionary*) headerParams
                         authSettings: (NSArray *) authSettings
                   requestContentType: (NSString*) requestContentType
                  responseContentType: (NSString*) responseContentType
                         responseType: (NSString *) responseType
                      completionBlock: (void (^)(id, NSError *))completionBlock;

@end
