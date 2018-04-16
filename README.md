<p align="center">
  <img  width="200" height="200" src="logo_blue_512.png">
</p>

# Diyalog Messaging Platform 1.0.4

## Introduction

Diyalog is a platform which provides mutual, continuous and secure communication to companies with their customers.

Diyalog is mutual, because;

- It provides two-way messaging infrastructure.
- It provides one-to-one messaging.
- It provides group creation and group messaging
- It provides broadcasting messages to multiple users.
- Messages can be sent to users unless they are not online. Notifications sent to users to inform they have new messages and they can see them whenever they want.
- Messages states can be monitored by the platform. All messages sent, delivered and read status are tracked.
- It has apple and Google push notification support.
- It can send SMS to clients.
- It can send email to client if it is wanted.
- Integration - It provides API and SDK to integrate internal and external systems.
- Bot Library - It has bot library that provides developing autonomous services.

Diyalog is countinuous, because;

- It is fast.
- It has Apple iOS, Android OS client for smart phones and tablets.
- It has web client.
- All messages are sent to all clients of users at the same time. Therefor user can see thier messages on every clients.
- Users can start to communicate from one client (for example mobile device) and finish from other client (for example web client). 
- It provides voice calls with webrtc.
- It provides video call with webrtc.
- It supports voice messages.
- It supports photo messages.
- It support video messages.
- It supports files and documents sharing.
- It can store all media and documents on central storages and cloud storages.

Diyalog is secure, because;

- It is enterprise infrastructure.
- All parts like application, database and storage servers can be deployed to enterprise's infrastructure.
- System is protected by TLS ans AES 256 encryption.
- Every connection is encrypted by unique keys.
- Company and custermer users can configure and coordinate in the platform.
- All messages are stored in the system.
- All messaging can be audited.

## Getting Started

Diyalog server has following parts:

1. **diyalog-server**  : 

	Server application of the platform. It is developed by Scala Akka.io technology and it needs Linux/Windows server and Open/Oracle JDK1.8+. 
	
2. **diyalog-database** :

	Diyalog Platform is using Oracle 12c+/Postgresql9.4+ database servers to record data.
		
3. **diyalog-keygenerator** : 

	It is simple keygenerator application written with Java. It is used only one time to generate secure server keys that need to run server securely.
	
4. **diyalog-masterbot** :  

	It is masterbot application which is responsible for the creation of new bots. Only admin users can see masterbot user in your contact list to create new bot credentials. MasterBot can be run when you need to create new bot for security reasons. But it is not necessary to do this.

5. **diyalog-webapp** :

	This is web application client web server. It serves for downloading web client single page application files by users' browsers. 

6. **diyalog-turnserver** :

	Diyalog Platform has voice and video calls features. Diyalog doing them by using WebRTC library. To enable this you need to install or use TURN/STUN servers onpremise or in cloud in order to resolve clients ip addresses in NAT.

	
Diyalog clients are :

1. Web SDK
2. iOS SDK
3. [Android SDK](diyalog-android-sdk/README.MD)
4. [Ionic / Cordova Plugin](diyalog-cordova-plugin/README.md)


## DevOps Documentation
Welcome to devops documentatation. You can find how you can install Diyalog Platform server from Diyalog docker images.

Installation procedure should be following order.

1. Starting database server for running application.

	You can use Oracle or Postgresql server for Diyalog Platform. If you are using Postgresql database server you can use Posgres official docker images with the following command.
	
	**For Postgres Database Server**
	
		docker run --name=diyalog-db -e PASSWORD=<your postgresql password> -e POSTGRES_USER=diyalog -e POSTGRES_DB=diyalog -p 5432:5432 -v <volume for db data>:/var/lib/postgresql/data -d postgres:9.6

	You can find more information on [postgres official docker repository](https://hub.docker.com/_/postgres/)
	
	**For Oracle Database Server**
	
	There is not any docker official docker image for Oracle database server. You should install your database server and create schema and cridentials.

	*It is important to note that, database PASSWORD, USER, and DB or SCHEMA information will be used on diyalog-server application jdbc configuration setting.*

2. Generating the trusted server keys

	diyalog-keygenerator docker image should be used to generate secure keys for Diyalog server and clients.

	Following command will start the diyalog-keygenerator docker container and automatically generate key-files, public trusted keys for clients and secret key for diyalog server. These outputs are important for running diyalog-server application docker image. Therefore output should be saved or noted.
	
		docker run -it -v <volume for created keys>:/generatedkeys diyalog/diyalog-keygenerator:1.0.0
 
 Out put of the docker container will be like following:
 
 		---------------------------------------------------------------------
		| Trusted public key that will be used on clients are :             |
		|                                                                   |
		| b6e78e0295d984beb2328529cbdf2a310ea50c20df39a87303d907a7688c8620  |
		| 4990d9f5515adda853d85e0a0789222dd9df8f7d2c92a7fc2e991dfde4b4094a  |
		| f599890af2007dca8f1d603f5027d1e440d91c7b1a72529e8a9e310ad90e190e  |
		| e95a1dcc3ae3e131fee232e0a5af3d9e303b8b2aa2903eb82cf55acf8108377a  |
		| 17f0554d6fe47f50d3c7904057bfa53944311f6c5c6ad72399687360deb8662c  |
		| 8191cba8fb746aeacf8fe708eb90b4c2967da9941572a31ca16e7327f69dba08  |
		|                                                                   |
		| You can find this keys on keys/trustedKeys file                   |
		---------------------------------------------------------------------
		All server keys created and copiedon keys folder. Please add these files to server configuration.

		Shared Secret: Z2oLqdIvCuq56GYw8KJ0d/0gVQTLHvlUQWG5tzacQmj3Qej1lNBJ59j/hEljJ/N+P7OEUCACfrSyuGLR1MMATw==

		This shared secret should be set in server configuration or add to env vars when running docker image og diyalog-server

	**Server key files** created by this diyalog-keygenerator. 6 key pairs are created and copied to **/generatedkeys** folder in container. Therefore, a volume can mount to this folder to copy them for using in server.

	**Trusted public keys** will be used on ios and android clients. So, they should be shared with mobile development team to run Diyalog mobile SDK with these keys. This public keys are also stored in the trustedKeys/publickeys file on volume.

	**Shared Secret** is another important data to securing your server. This is a random string and this will be used for creating some hash and other secure data. **When a server runs with this secret, this secret should not be changed due to backward compatibility.**

 
3. Running Diyalog-Server

	**diyalog-server** docker image should be used for running diyalog-server. The following setting can be add to you docker run command as environment variable to change setting in the server. 
	
	**For Securing Server :**
			
			SERVER_SECRET : Shared secret. Shared secret that was created in step 2 (Keygeneration step) should be set to this variable
			

	**For Oracle DB configuration :**
	
			SERVER_DB_HOST          : Database server hostname. Default value is localhost
			SERVER_DB_PORT          : Database server port. Default value is 1521
			DB_NAME                 : Database name. Default value is orcl
			DB_USER                 : Database username.  Default value is diyalog
			DB_PASSWORD             : Database user pasword. Default value is password
			SLICK_ORACLE_SCHEMANAME : Database shemaname. Default is DIYALOG

	**For Postgres DB configuration :**
	
			SERVER_DB_HOST          : Database server hostname. Default value is postgres
			SERVER_DB_PORT          : Database server port. Default value is 5432
			DB_NAME                 : Database name. Default value is postgres
			DB_USER                 : Database username.  Default value is postgres
			DB_PASSWORD             : Database user pasword. Default value is password
			
	**Email config for sending OTP via Email :**
			
			EMAIL_SENDER_ADDRESS : Sender address of email. Default value is empty.
			EMAIL_SENDER_NAME    : Sender name of email. Default value is Diyalog.
			SMTP_HOST            : SMTP server host name. Default is empty.
			SMTP_PORT            : SMTP server port number. Default value is 465
			SMTP_USERNAME        : SMTP server username. Default is empty.
			SMTP_PASSWORD        : SMTP server user password. Default is empty.
			SMTP_TLS             : SMTP server tls flag. Default value is true.
			
	**Storage Settings :**
	
			FILE_STORAGE_ADAPTER : It is used for configuration of storage adapter.
										Default value is im.diyalog.server.file.local.LocalFileStorageAdapter 
										i.e. local file storage. If you want to use amazon S3 storage this 
										value should be set to im.diyalog.server.file.s3
	
			For local file storage following env variable should be set,
				FILESTORAGE_LOCATION : This is the directory name that server store files on it. 
											Default local file storage is /var/lib/diyalog/files
				
			For S3 adapter following env variables should be set,
				AWS_S3_APIKEY     : Your Amazon S3 API key
				AWS_S3_APISECRET  : Your Amazon S3 API Secret
				AWS_S3_BUCKETNAME : Your Amazon S3 bucket name. Default value is bucket_diyalog
				AWS_S3_ENDPOINT   : This variable is used for S3 API compatible storage rather than Amazon S3.
	
	**Google Messaging Service Settings :**

			//TODO: This will be documented later.

	**Apple Push Notification Service Settings :**

			//TODO: This will be documented later.
			
	**TURN/STUN server settings :**

			ICE_SERVER_TCP_URL  : TCP url for TURN/STUN server. Default value is turn:localhost:3478?transport=tcp
			ICE_SERVER_UDP_URL  : UDP url for TURN/STUN server. Default value is turn:localhost:3478?transport=udp
			ICE_SERVER_USERNAME : Tcp TURN/STUN server user name. Default value is diyalog
			ICE_SERVER_PASSWORD : Tcp TURN/STUN server user password. Default value is password
	
	**Cluster Settings :**

		This settings are for akka clustering. 
	
			PUBLISH_HOST : netty.tcp.hostname configuration of akka remoting. 
							  External (logical) hostname (the host to advertise on)
			PUBLISH_PORT : netty.tcp.port configuration of akka remoting. 
							  External (logical) port (the port to advertise on)
			BIND_HOST    : netty.tcp.bind-hostname configuration of akka remoting.
								Internal (bind) hostname
			BIND_PORT    : netty.tcp.bind-port configuration of akka remoting.
								Internal (bind) port
								

	You can find example of docker run command with minimal env variable setting below. In docker image server application search key files in /var/lib/diyalog/keys folder. Therefore, server key files created in step 1 should be shared with a volume mount to this folder.
	
	**for oracle**
	
		docker run \
			 --name=diyalog-server \
			 -e "SERVER_DB_HOST=<Your database server host name>" \
			 -e "DB_NAME=<Your database name>" \
			 -e "DB_USER=<Your database user>" \
			 -e "DB_PASSWORD=<Your database user password>" \
			 -v <docker volume for file storage>:/var/lib/diyalog/files \
			 -v <docker volume for generated server keys>:/var/lib/diyalog/keys \
			 -p 4857:4857 \
			 -p 4858:4858 \
			 -p 4859:4859 \
			 -d \
			 diyalog/server-orcl:1.0.3
			 
	**for postgres**
	
		docker run \
			 --name=diyalog-server \
			 --link diyalog-db:diyalog
			 -v <docker volume for file storage>:/var/lib/diyalog/files \
			 -v <docker volume for generated server keys>:/var/lib/diyalog/keys \
			 -p 4857:4857 \
			 -p 4858:4858 \
			 -p 4859:4859 \
			 -d \
			 diyalog/server-orcl:1.0.3
			 
	
	After running Diyalog server. You can add a proxy server in front of it for SSL offloading, load balance and directing the connection. Haproxy is recomended for it. You can use following DNS names notation and backend port configuration.
	
	**DNS and Backend Conf**
	
	| Record Name  | DNS Name (sample)  | Default Port |  Description |
	| ------------ | -----------------  | ------------ | -------------  |
	| web          | web.domain.com     | 3000 | Web client application endpoint.             |
	| ws           | ws.domain.com      | 4858 | Websocket port of Diyalog server for clients.|
	| tcp          | tcp.domain.com     | 4857 | Tcp port of Diyalog server for mobile apps.  |
	| api          | api.domain.com     | 4859 | Http api endpoint. This endpoint is also support bots. |
		
	
4. Starting MasterBot app to be able to create and manage credentials of new bot applications.
	
	There is a possibility to create new bot applications for the Diyalog platform. There is a diyalog-bots-platform library. You can use this library to create new bot application which can communicate with diyalog-server. MasterBot is a bot application. Its main purpose is to create and manage newly developed bot applications. 

	**diyalog-masterbot** docker image should be used for running diyalog masterbot. You can start MasterBot docker image with following command. Since Masterbot app will connect to Diyalog-server when started, diyalog-server should be started first.

	For starting Masterbot app you need to set some environment variables. You can find the details about them below.
		
	**MasterBot Settings**
		
		BOT_ENDPOINT : Diyalog server "api" endpoint adress. Diyalog server is waiting 
						  websocket connection from bot applications at port 4859 as default.
						  This port shou
		
	for starting docker image:
	
		docker run \
			--name=diyalog-masterbot \
			-e "BOT_ENDPOINT=ws://<Diyalog Server api endpoint>" \
			-e "BOT_USERNAME=<Username which created in Diyalog platform for Masterbot>" \
			-e "BOT_TOKEN=<Token which created in Diyalog platform for Masterbot>" \
			-d \
			diyalog-masterbot:1.0.0
	

	
5. 
	

## Server Installation


:rocket:
