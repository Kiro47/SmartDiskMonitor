# Smart Disk Monitor
---
#### What is Smart Disk Monitor?
Smart disk monitor is a small project designed to work with [SmartMonTools](https://www.smartmontools.org/)  to deliver statistics to a central server in order to keep track of things such as disk information, used/capacity, and the health of the drives.  Ideally this could be used to prevent the loss of information by warning the central host that the disk is starting to fail before it does, allowing easy duplication.  

#### Who is this designed for?
When first thought of Smart Disk Monitor was intended to be used in a corporate setting with many computers, however I've also considered using it in my home lab environment as well.

#### What is the layout of this project?
In the current design Smart Disk Monitor is split into two main components: the client and the server.  Many clients will be able to connect to the server to report back data at some given interval in a configuration file with some kind of unique ID to keep track of each client (Possibly via MAC Address or something else? Later Issue).  The client side of the program simply performs a statistical analysis of the disks on the given interval and reports back to the server.

#### Planned Features
* Notifications on central server (Kind of the entire point)
* Notifications being sent back to client (So a SysAdmin can be easily notified)
* Website interface
	* Allowing searching by the various statistics
	* Secured
	* Logins required
* TODO:

### Licensing
This program is licensed under the [GNU GPLv3](https://www.gnu.org/licenses/gpl-3.0.en.html).

