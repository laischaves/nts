---
tags:
  - compsci
  - programming
  - theory
---
### What is it?
- Microservices architectures break down an application into smaller independent services.

Ways to split an application into microservices are considering **functionalities** (1. shopping-cart, 2. checkout), each service will do a specific job.

Each microservice must be **self-contained** and **independent**, that is, _developed, deployed and scaled_ separately, without any type of dependencies on any other services. This is called **loosely coupled**.

This means each service has their own independent versions, can be updated without the others.

### Communication between microservices

A way to establish communication between services is through the use of **API calls**, in which each service has it's own API to accept requests from other services. This is a *synchronous* communication, a service makes a request and waits for a response.

Another way is using a **message broker**, an asynchronous method of communication. In this, services will send messages to an intermediary message service and then that message broker will forward to the respective service.

A third way is using a **service mesh**, which is {--}

### Challenges
- Added complexity due to a distributed system
- Configure the communication between services
- More difficult to monitor multiple instances of each service distributed across servers

## Monorepo vs Polyrepo

- **Monorepo** means using a single git repository that contains all the services. A way to structure is using folders.
	- **Advantages**
		- Makes the code management and development easier ^c6e112
		- Changes can be tracked, tested and released together
		- Code and work with only 1 repo
	- **Challenges**
		- May fail the objective of being completely independent and isolated and develop more tightly coupled code
		- When the application grows, git interactions become slow
		- Additional logic to ensure the only services built and deployed are the ones with actual code changes
		- All projects and teams are affected by issues


- **Polyrepo** means using a git project to each service.
	- **Advantages**
		- Code is completely isolated
		- Work can be done separately
		- Each repo has it's own pipeline
	- **Challenges**
		- Cross-cutting changes is more difficult
		- Changes across projects must be submitted separately, instead of having a single, atomic merge request
		- Searching, testing and debugging across multiple projects can be more difficult
		- Sharing resources is more difficult

The general consensus is that the monorepo structure is better for smaller microservice applications and, subsequently, polyrepo is better for larger microservice applications.

