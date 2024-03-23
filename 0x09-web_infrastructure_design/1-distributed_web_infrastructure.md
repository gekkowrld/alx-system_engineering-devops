# 0x09-web_infrastructure_design

## 1-distributed_web_infrastructure

[![1 - Web Infrastructure Design](https://i.postimg.cc/MGkWRdSV/Untitled-Diagram-drawio-2.png)](https://postimg.cc/G4QwnP9m)

### Servers and Components

- **2 Servers**: Two servers are added to ensure redundancy and high availability. This setup allows for failover in case one server fails, ensuring that the application remains accessible.
- **1 Web Server (Nginx)**: Nginx is used as a web server to serve static content and act as a reverse proxy to the application server. This improves performance and security by offloading static content delivery to Nginx, freeing up resources on the application server.
- **1 Application Server**: The application server hosts the application code and processes. This separation allows for better scalability and maintenance, as changes to the application do not directly affect the web server.
- **1 Load-Balancer (HAproxy)**: HAproxy is used to distribute incoming network traffic across multiple servers to ensure no single server becomes a bottleneck. This enhances the application's ability to handle high loads and increases its availability.
- **1 Set of Application Files (Code Base)**: The application files are necessary for the application to run. They include the source code, configuration files, and any other resources required by the application.
- **1 Database (MySQL)**: MySQL is used as the database to store and manage the application's data. This ensures that the application can persist data across sessions and users.

### Load Balancer Configuration and Distribution Algorithm

The load balancer, HAproxy, is configured with a round-robin distribution algorithm. This algorithm distributes incoming connections to the backend servers in a sequential manner, ensuring that each server receives an equal number of connections over time. This setup is simple and effective for balancing load evenly across servers.

### Active-Active vs. Active-Passive Setup

- **Active-Active Setup**: In an active-active setup, all servers are operational and can handle requests simultaneously. This setup provides high availability and redundancy, ensuring that the application remains accessible even if one server fails.
- **Active-Passive Setup**: In an active-passive setup, one server is active and handles all requests, while the other server is on standby, ready to take over if the active server fails. This setup is simpler and requires less resources but offers less redundancy and availability compared to an active-active setup.

### Database Primary-Replica (Master-Slave) Cluster

A database primary-replica (master-slave) cluster works by having one primary node (master) that handles all write operations and one or more replica nodes (slaves) that replicate the data from the master. The replica nodes can handle read operations, reducing the load on the master. This setup ensures data consistency and redundancy, as the master's data is always up-to-date on the replicas.

### Primary Node vs. Replica Node

- **Primary Node**: The primary node is the master in a master-slave database setup. It handles all write operations and is the source of truth for the data. The primary node is crucial for the application's write operations.
- **Replica Node**: The replica node is the slave in a master-slave database setup. It replicates the data from the primary node and can handle read operations. The replica node is used for read operations to distribute the load and improve performance.

### Issues with the Infrastructure

- **Single Points of Failure (SPOF)**: The load balancer and the database master are potential SPOFs. If the load balancer fails, incoming requests cannot be distributed, and if the database master fails, the application cannot write data.
- **Security Issues**: The absence of a firewall and HTTPS exposes the infrastructure to potential security threats, such as unauthorized access and data breaches.
- **No Monitoring**: Without monitoring, it's difficult to detect and respond to issues in a timely manner. This can lead to downtime and reduced service availability.

To mitigate these issues, consider implementing a firewall, enabling HTTPS for secure communication, and setting up monitoring and alerting systems to detect and respond to potential problems early.

