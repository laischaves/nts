TARGET DECK: AWS

You ONLY want to manage Applications and Data. Which type of Cloud Computing model should you use? #flashcard
In the **Platform as a Service** model, you only manage the data and the applications.
<!--ID: 1736349720355-->


What is the pricing model of Cloud Computing? #flashcard
Pay-as-you-go pricing
<!--ID: 1736349720360-->


Which Global Infrastructure identity is composed of one or more discrete data centers with redundant power, networking, and connectivity, and are used to deploy infrastructure? #flashcard
 Availability Zones
<!--ID: 1736349720362-->


Which are the 3 pricing fundamentals of the AWS Cloud? #flashcard
 Compute, Storage, and data transfer **out** of the AWS Cloud are the 3 pricing fundamentals of the AWS Cloud.
<!--ID: 1736349720365-->


Which of the following options is NOT a point of consideration when choosing an AWS Region? A. Compliance, B. Latency, C. Capacity #flashcard
 Capacity is unlimited in the cloud, you do not need to worry about it. The 4 points of considerations when choosing an AWS Region are: compliance with data governance and legal requirements, proximity to customers, available services and features within a Region, and pricing.
<!--ID: 1736349720368-->


AWS Regions are composed of? #flashcard
 AWS Regions consist of multiple, isolated, and physically separate **Availability Zones** within a geographic area.
<!--ID: 1736349720371-->


Availability Zones are composed of? #flashcard
 One or more discrete data centers.
<!--ID: 1736349720373-->


Which of the following services has a global scope? A. EC2, B. IAM, C. Lambda #flashcard
 IAM is a global service (encompasses all regions).
<!--ID: 1736349720376-->


What defines the distribution of responsibilities for security in the AWS Cloud? #flashcard
 The **Shared Responsibility Model** defines who is responsible for what in the AWS Cloud.
<!--ID: 1736349720379-->


A company would like to benefit from the advantages of the Public Cloud but would like to keep sensitive assets in its own infrastructure. Which deployment model should the company use? #flashcard
 Hybrid Cloud
<!--ID: 1736349720381-->


AWS 3 pricing fundamentals, following the pay-as-you-go pricing model #flashcard
 - Compute: Pay for compute time
- Storage: Pay for data stored in the Cloud
- Data transfer OUT of the Cloud: Data transfer IN is free
<!--ID: 1736349720384-->


AWS Region #flashcard
 A cluster of data centers
<!--ID: 1736349720387-->


AWS Availability Zones (AZ) #flashcard
 one or more
discrete data centers with redundant power,
networking, and connectivity, separate from each other.
<!--ID: 1736349720389-->


AWS Points of Presence (Edge Locations) #flashcard
 Content is delivered to end users with lower latency.
<!--ID: 1736349720392-->


AWS Global Services #flashcard
 - Identity and Access Management (IAM)
- Route 53 (DNS service)
- CloudFront (Content Delivery Network)
- WAF (Web Application Firewall)
<!--ID: 1736349720394-->


True or false: Most AWS services are Region-scoped #flashcard
 True
<!--ID: 1736349720397-->


Shared Responsibility Model #flashcard
CUSTOMER = RESPONSIBILITY FOR THE SECURITY **IN** THE CLOUD
AWS = RESPONSIBILITY FOR THE SECURITY **OF** THE CLOUD
<!--ID: 1736349720399-->


What is a proper definition of IAM Roles? #flashcard 
An **IAM entity** that defines a set of permissions for making AWS service requests - used by AWS services
<!--ID: 1736357460172-->


The IAM Credentials report... #flashcard 
...lists all your account's users and the status of their various credentials
<!--ID: 1736357460176-->


The IAM Access Advisor... #flashcard 
...shows the service permissions granted to a user and when those services were last accessed.
<!--ID: 1736357460180-->



What are IAM Policies? #flashcard
Users and groups can be assigned on JSON documents called policies.
An IAM policy is an entity that, when attached to an identity or resource, defines their permissions - 
<!--ID: 1736357460183-->


Which EC2 Purchasing Option can provide the biggest discount, but is not suitable for critical jobs or databases? #flashcard
**Spot Instances** are good for short workloads, but are less reliable.
<!--ID: 1736357460186-->


Which network security tool can you use to control traffic in and out of EC2 Instances? #flashcard 
**Security Groups** operate at instance level and can control traffic.
<!--ID: 1736357460190-->


Which EC2 Purchasing Option should you use for an application you plan on running on a server continuously for 1 year? #flashcard
*Reserved Instances* are good for long workloads. You can reserve instances for 1 or 3 years.
<!--ID: 1736357460194-->

How can users access AWS? #flashcard
To access AWS, you have three options:
• AWS Management Console (protected by password + MFA)
• AWS Command Line Interface (CLI): protected by access keys
• AWS Software Developer Kit (SDK) - for code: protected by access keys
<!--ID: 1736364388577-->


IAM Roles for Services #flashcard
Some AWS service will need to perform actions on your behalf. To do so, we will assign permissions to AWS services with IAM Roles
<!--ID: 1736364388581-->


What is EC2? #flashcard
EC2 = Elastic Compute Cloud = Infrastructure as a Service
It mainly consists in the capability of :
• Renting virtual machines (EC2)
• Storing data on virtual drives (EBS)
• Distributing load across machines (ELB)
• Scaling the services using an auto-scaling group (ASG)
<!--ID: 1736364388585-->


EC2 user data is used to... #flashcard
automate boot tasks such as.
<!--ID: 1736364388591-->


It is possible to bootstrap our instances using an... #flashcard
EC2 User data script
! The EC2 User Data Script runs with the root user !
<!--ID: 1736364388595-->


EC2 Instance types are... #flashcard
General purpose
Compute Optimized
Memory Optimized
Accelerated Computing
Storage Optimized
HPC (high performance computing) Optimized 
<!--ID: 1736364388598-->

Security Groups are... #flashcard
the fundamental of network security in AWS
They control how traffic is allowed into or out of our EC2 Instances.
<!--ID: 1736377105475-->


Security groups are acting as a “firewall” on EC2 instances, they regulate: #flashcard
• Access to Ports
• Authorized IP ranges – IPv4 and IPv6
• Control of inbound network (from other to the instance)
• Control of outbound network (from the instance to other)
<!--ID: 1736377105479-->



