
# Diyalog Messenger Platform Messagin API Reference

## 1. Sending Messages

Many types of content can be sent with Diyalog Messenger Platform including text, audio, images, video, files.

There are also some pre-defined messages templates available. You can send structured messages for a good user experience. All these messaging templates are copied from Facebook Messenger :smiley: in order to compatibility with fb messenger. Therefore, you can directly integrate your as is facebook bot application to Diyalog Messenger platform.

##### Supported Templates

* Generic Template
* Button Template
* Quick Reply Template
* List Template ( not available yet)

### 1.1 Send API Reference

##### Request URI
 
```
https://<DIYALOG-SERVER-API-ENDPOINT>/v1/bots/sendmessage/<YOUR-BOT-ACCESS-TOKEN>
```

##### Example Request

```
curl -X POST -H "Content-Type: application/json" -d '{
    "recipient":	{
        "appCustomerId":"1231231"
    },
    "message":{
        "text":"hello world",
        "quick_replies":[]
    }
}' "https://<DIYALOG-SERVER-API-ENDPOINT>/v1/bots/sendmessage/<YOUR-BOT-ACCESS-TOKEN>"

```

##### Properties

|	  Property   |     Type     |Description       |Required|
| -------------- | ------------ | ---------------- | ------ |
| recipient      |  Object      | recipient object |yes     |
| message        |  Object      | message objecy   |yes     |

##### _recipient_

It declares the recipient of the message. Request must include one of _id_, _appCustomerId_
 
|	  Property   |     Type     |Description                       |Required|
| -------------- | ------------ | -------------------------------- | ------ |
| recipient.id  |  String      | It is id of user in Diyalog platform. If you know it, you can directly use Diyalog user id. | Optional |
| receipient.appCustomerId |  String      | You can use direct customer id of your system. But Diyalog seesion should be created with this customer id. If you are using Token base authentication of DiyalogSDK in your client application, system will create user and save the customer id.| Optional


##### _message_

|	  Property      |     Type     |Description                     |Required|
| ----------------- | ------------ | ------------------------------ | ------ |
| message.messaging_type      |  String      | Not Appicable - It is fb messenger default. It will be used later version of Diyalog Platform.|No|
| message.tag        |  String      | Not Appicable - It is fb messenger default. It will be used later version of Diyalog Platform.|No|
| message.text        |  String      | it is text message that will send to recipient. If you send text message you should set it, for other type of messages, you shoud set **attachment** property instead of **text**.|Optional|
| message.attachment        |  Object      | it is used to define message content other than text messages. If you want to send message other than text you should set **attachment** property instead of **text**.|Optional|
| message.quick_replies       |  Array[quick_reply]      | it is used to send user quick reply buttons to user. If there is no any button you should send empty array obejct ([]). |yes|

##### _attachment_

The following can be included in the attachment object: 
* 	Rich media messages including images, audios, videos, or files.
* 	Templates including generic template, button template, list template.

|	  Property      |     Type     |Description                     |Required|
| ----------------- | ------------ | ------------------------------ | ------ |
| attachment.type      |  String      | Type of attachment, may be image, audio, video, file or template|yes|
| attachment.payload     |  Object      | Payload of the attaachment|yes|

### 1.2 Response

A successful Send API request returns a JSON string containing identifiers for the message and its recipient.

```
{
   "recipient_id": "2074022437",
   "message_id": "-7523925115459309081"
}
```
		
##### _Properties_

|	  Property      |     Type     |Description                     |
| ----------------- | ------------ | ------------------------------ |
| recipient_id     |  String      | Unique user id that message sent in Diyalog platform|
| message_id     |  Object      | Unique id of the sent message in Diyalog Platform|


## 2.Template Reference

### 2.1 Generic Template Reference

<p align="center">
  <img src="resources/genericTemplateSS.png">
</p>

The generic template allows you to send a structured message that includes an image, text and buttons. A generic template with multiple templates described in the elements array will send a horizontally scrollable carousel of items, each composed of an image, text and buttons. For complete implementation details, see Generic Template.

##### Request URI

```
https://<DIYALOG-SERVER-API-ENDPOINT>/v1/bots/sendmessage/<YOUR-BOT-ACCESS-TOKEN>
```

##### Example Request

```
curl -X POST -H "Content-Type: application/json" -d '{
    "recipient":{
        "appCustomerId":"1231231"
    },
    "message":{
        "attachment":{
            "type":"template",
            "payload":{
                "template_type":"generic",
                "elements":[
                    {
                        "title":"Your Holiday Offer",
                        "image_url":"https://diyalog.im/app/testmessage/testimages/generictemplate-6.jpg",
                        "subtitle":"We have a special holiday offer for you. This holiday is for you.",
                        "default_action":{
                            "type":"web_url",
                            "url":"https://defaulaction.com",
                            "webview_height_ratio":"FULL"
                        },
                        "buttons":[
                            {
                                "type":"web_url",
                                "title":"I am interested",
                                "payload":"https://isbank.com.tr"
                            },
                            {
                                "type":"postback",
                                "title":"Cancel",
                                "payload":"cancelled1"
                            }
                        ]
                    }
                ],
                "buttons":[]
            }
        },
        "quick_replies":[]
    }
}' "https://<DIYALOG-SERVER-API-ENDPOINT>/v1/bots/sendmessage/<YOUR-BOT-ACCESS-TOKEN>"
```


##### Example Response

```json
{
   "recipient_id": "2074022437",
   "message_id": "-7523925115459309081"
}
```

##### _recipient_

It declares the recipient of the message. Request must include one of _id_, _appCustomerId_
 
|	  Property      |     Type     |Description                       |Required|
| ----------------- | ------------ | -------------------------------- | ------ |
| id   				|  String      | It is id of user in Diyalog platform. If you know it, you can directly use Diyalog user id. | Optional|
| appCustomerId     |  String      | You can use direct customer id of your system. But Diyalog seesion should be created with this customer id. If you are using Token base authentication of DiyalogSDK in your client application, system will create user and save the customer id.| Optional

##### _message_

|	  Property      |     Type                 |Description                     |Required|
| ----------------- | ------------------------ | ------------------------------ | ------ |
| attachment        |  Object                  | It contains payload od the generic template content|yes|
| quick_replies     |  Array<quick_reply>      | This property will not used in generic template. It should be set empty array. [] |yes|

##### _message.attachment_

|	  Property      |     Type     |Description                     |Required|
| ----------------- | ------------ | ------------------------------ | ------ |
| type              |  String      | Value must be **template**     |yes     |
| payload           |  Object      | Payload of the generic template|yes     |

##### _message.attachment.payload_
 
|	  Property      |    Type                  |Description                     |Required|
| ----------------- | ------------------------ | ------------------------------ | ------ |
| template_type     | String                   | Value must be **generic**      |yes     |
| elements          | Array[element]           | An array of element objects that describe instances of the generic template to be sent. Specifying multiple elements will send a horizontally scrollable carousel of templates. A maximum of 10 elements is supported.|yes|
| buttons           | Array[[button](#button)] | This property will not used in generic template. It should be set empty array. [] | yes|

##### _message.attachment.payload.elements_
 
|	  Property                         |     Type                 |Description                              |Required|
| -------------------------------------| ------------------------ | --------------------------------------- | ------ |
| title                                |  String                  | The title to display in the template.   |Optional|
| subtitle                             |  String                  | The subtitle to display in the template.|Optional|
| image_url                            |  String                  | The URL of the image to display in the template.| Optional|
| [default_action](#default_action)    |  Object                  | The default action executed when the template is tapped.| Optional|
| buttons                              |  Array[[button](#button)]|  An array of buttons to append to the template. A maximum of 3 buttons per element is supported. If you don't add any button you should set empty array []. | yes|


##### _default\_action_

|	  Property        |     Type     |Description                                           |Required|
| ------------------- | ------------ | ---------------------------------------------------- | ------ |
| type                |  String      | Default action is only support url button. Value must be "web_url". |yes|
| url                 |  String      | The url address that will open when tapped to content|yes     |
| webview_height_ratio|  String      | Value must be *FULL"                                 |yes     |


##### _button_

|	  Property         |     Type     |Description                     |Required|
| ---------------------| ------------ | ------------------------------ | ------ |
| type                 |  String      | Default action is only support url button. Value must be "web_url". |yes|
| url                  |  String     | The url address that will open when tapped to content|yes|
| webview_height_ratio |  String     | Value must be *FULL"|yes|



 <p align="center">
   Made with :heart: by Ayya Co Ltd.
 </p>



