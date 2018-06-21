##Diyalog-Integration-With-Domain##

###APIs that should be implemented on Enterprise Applications

**/checkauthtoken**

> This rest api will check Diyalog Server's token of user. 
> 
> #####BaseUrl
> 
> 	`https://domain.token.validation.server/v1/`
> 	
> **/checkauthtoken parameters and JSON fields**
> 
> The following parameters are send to enterprise token server in JSON format by POST method by Diyalog server. 
> 
>  Name          |     Type     | Description                      |Required |
|:---------------|:-------------|:---------------------------------|:---------|
| **deviceId**   |  String      |Enterprise device ID              | yes      |
| **dlgToken**   |  String      |Token that created for DiyalogSDK | yes      |
| **customerNo** |  String      |Enterprise customer no            | yes      |

> POST Request Sample
>	
	 POST https://domain.token.validation.server/v1/checkauthtoken
	 Headers :
	 Auth-Token : THIS_IS_YOUR_API_TOKEN_FOR_DLG_SERVER_AUTHORISATION
	 Content-Type: application/json
	 POST body:
	 {
	 	"deviceId":"123456789aacaaca",
	 	"dlgToken":"2121sasasrwsdssfdrsdaasdasdadasdasdasdasd",
	 	"customerNo":"1234567"
	 }
 
 
> POST Response
> 
> Response will be text format. Possible values are :
> 	
> 		Validated
> 		ExpiredCode
> 		InvalidCode
> 		InvalidHash
> 		InternalError

**/updatemokstatus**

> This rest api will update status of MOK Push on Security server
> 
> #####BaseUrl
> 
> 	`https://domain.token.validation.server/v1/`
> 	
> **/updatemokstatus parameters and JSON fields**
> 
> The following parameters are send to enterprise server in JSON format by POST method by Diyalog server. 
> 
>  Name          |     Type     |Description                      |Required |
|:---------------|:-------------|:---------------------------------|:---------|
| **messageId**  |  String      |This field is unique push message id which is created by enterprise server. |yes      |
| **status**     |  String      |It is status of the push message (Approved,Cancelled,SentToUser,ReceivedByUser,ReadByUser) | yes      |
| **customerNo** |  String      |it is customer number that push message is sent | yes      |
| **secretData** |  String      |This is used for MOK message. It is MOK data that signed by user device's private key |yes      |

> Possible values of **status** field are :
>
>   Statuses       |  Description|
|:---------------|:-------------|
| 	Approved   | User pressed approved button or auto approved if user's application is active for seeamless integration. |
|Cancelled | If user pressed cancel button of the push message |
|	SentToUser| If push message send to push provider (Apple APNS or Google FireBase server). In this status, push may not be received by user.|
| ReceivedByUser| If push message is delivered to user's phone exactly.|
|ReadByUser |User open push message in the application and read it.|
|Timeout|If push is not sent or received to user in a interval, status will updated as timeout.|


> POST Request Sample
>	
	 POST https://domain.token.validation.server/v1/updatemokstatus
	 Headers :
	 Auth-Token : THIS_IS_YOUR_API_TOKEN_FOR_DLG_SERVER_AUTHORISATION
	 Content-Type: application/json
	 POST body:
	 {
	 	"messageId":"123456789aacaaca",
	 	"status":"ReceivedByUser",
	 	"customerNo":"1234567",
	 	"secretData": "",
	 }
>
>	 
	 POST https://domain.token.validation.server/v1/updatemokstatus
	 Headers :
	 Auth-Token : THIS_IS_YOUR_API_TOKEN_FOR_DLG_SERVER_AUTHORISATION
	 Content-Type: application/json
	 POST body:
	 {
	 	"messageId":"123456789aacaaca",
	 	"status":"Approved",
	 	"customerNo":"1234567",
	 	"secretData": "ababccff12a412212121542121212121",
	 }
 
 
> POST Response
> 
> Response will be text format. Possible values are :
> 	
> 		OK
	
 
###APIs that should be implemented on Enterprise Applications
 

 

