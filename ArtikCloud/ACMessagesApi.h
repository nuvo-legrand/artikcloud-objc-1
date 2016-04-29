#import <Foundation/Foundation.h>
#import "ACAggregatesHistogramResponse.h"
#import "ACFieldPresenceEnvelope.h"
#import "ACNormalizedMessagesEnvelope.h"
#import "ACAggregatesResponse.h"
#import "ACMessageAction.h"
#import "ACMessageIDEnvelope.h"
#import "ACObject.h"
#import "ACApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface ACMessagesApi: NSObject

@property(nonatomic, assign)ACApiClient *apiClient;

-(instancetype) initWithApiClient:(ACApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(ACMessagesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(ACMessagesApi*) sharedAPI;
///
///
/// Get Histogram aggregates
/// Get Histogram on normalized messages.
///
/// @param startDate Timestamp of earliest message (in milliseconds since epoch).
/// @param endDate Timestamp of latest message (in milliseconds since epoch).
/// @param sdid Source device ID of the messages being searched.
/// @param field Message field being queried for building histogram.
/// @param interval Interval of time for building histogram blocks. (Valid values: minute, hour, day, month, year)
/// 
///
/// @return ACAggregatesHistogramResponse*
-(NSNumber*) getAggregatesHistogramWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    sdid: (NSString*) sdid
    field: (NSString*) field
    interval: (NSString*) interval
    completionHandler: (void (^)(ACAggregatesHistogramResponse* output, NSError* error)) handler;


///
///
/// Get normalized message presence
/// Get normalized message presence.
///
/// @param startDate startDate
/// @param endDate endDate
/// @param interval String representing grouping interval. One of: &#39;minute&#39; (1 hour limit), &#39;hour&#39; (1 day limit), &#39;day&#39; (31 days limit), &#39;month&#39; (1 year limit), or &#39;year&#39; (10 years limit).
/// @param sdid Source device ID of the messages being searched.
/// @param fieldPresence String representing a field from the specified device ID.
/// 
///
/// @return ACFieldPresenceEnvelope*
-(NSNumber*) getFieldPresenceWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    interval: (NSString*) interval
    sdid: (NSString*) sdid
    fieldPresence: (NSString*) fieldPresence
    completionHandler: (void (^)(ACFieldPresenceEnvelope* output, NSError* error)) handler;


///
///
/// Get Last Normalized Message
/// Get last messages normalized.
///
/// @param count Number of items to return per query.
/// @param sdids Comma separated list of source device IDs (minimum: 1).
/// @param fieldPresence String representing a field from the specified device ID.
/// 
///
/// @return ACNormalizedMessagesEnvelope*
-(NSNumber*) getLastNormalizedMessagesWithCount: (NSNumber*) count
    sdids: (NSString*) sdids
    fieldPresence: (NSString*) fieldPresence
    completionHandler: (void (^)(ACNormalizedMessagesEnvelope* output, NSError* error)) handler;


///
///
/// Get Normalized Message Aggregates
/// Get Aggregates on normalized messages.
///
/// @param sdid Source device ID of the messages being searched.
/// @param field Message field being queried for aggregates.
/// @param startDate Timestamp of earliest message (in milliseconds since epoch).
/// @param endDate Timestamp of latest message (in milliseconds since epoch).
/// 
///
/// @return ACAggregatesResponse*
-(NSNumber*) getMessageAggregatesWithSdid: (NSString*) sdid
    field: (NSString*) field
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(ACAggregatesResponse* output, NSError* error)) handler;


///
///
/// Get Normalized Messages
/// Get the messages normalized
///
/// @param uid User ID. If not specified, assume that of the current authenticated user. If specified, it must be that of a user for which the current authenticated user has read access to.
/// @param sdid Source device ID of the messages being searched.
/// @param mid The SAMI message ID being searched.
/// @param fieldPresence String representing a field from the specified device ID.
/// @param filter Filter.
/// @param offset A string that represents the starting item, should be the value of &#39;next&#39; field received in the last response. (required for pagination)
/// @param count count
/// @param startDate startDate
/// @param endDate endDate
/// @param order Desired sort order: &#39;asc&#39; or &#39;desc&#39;
/// 
///
/// @return ACNormalizedMessagesEnvelope*
-(NSNumber*) getNormalizedMessagesWithUid: (NSString*) uid
    sdid: (NSString*) sdid
    mid: (NSString*) mid
    fieldPresence: (NSString*) fieldPresence
    filter: (NSString*) filter
    offset: (NSString*) offset
    count: (NSNumber*) count
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    order: (NSString*) order
    completionHandler: (void (^)(ACNormalizedMessagesEnvelope* output, NSError* error)) handler;


///
///
/// Send Message Action
/// Send a message or an Action:<br/><table><tr><th>Combination</th><th>Parameters</th><th>Description</th></tr><tr><td>Send Message</td><td>sdid, type=message</td><td>Send a message from a Source Device</td></tr><tr><td>Send Action</td><td>ddid, type=action</td><td>Send an action to a Destination Device</td></tr><tr><td>Common</td><td>data, ts, token</td><td>Parameters that can be used with the above combinations.</td></tr></table>
///
/// @param data Message or Action object that is passed in the body
/// 
///
/// @return ACMessageIDEnvelope*
-(NSNumber*) sendMessageActionWithData: (ACMessageAction*) data
    completionHandler: (void (^)(ACMessageIDEnvelope* output, NSError* error)) handler;



@end
