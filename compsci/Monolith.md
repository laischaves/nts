---
tags:
  - compsci
  - programming
---
### What is it?
- ==In a monolith all the components of an application are part of a single unit.==

For example:

>==If there's a monolithic shopping website, the application will contain it's _user-auth, shopping-cart, produce-catalog, notifications, payment,_ and etc. All the code will be in one code base. Everything is developed, deployed and scaled as one single unit.==

Negative points for monolithic architecture are:
- Application is too large/complex
- Partes are more tangled into each other
- You must scale the entire app, being unable to do it only to a specific service
- Difficulty if services need different dependency versions, often times you must choose only one version.
- The release process takes longer
- The entire application must be tested for every change
- A bug on any module can bring down the entire app