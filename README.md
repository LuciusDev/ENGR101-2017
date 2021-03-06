# Team *High Ground* AVC
![alt text][pic]

## Team Members
* Tom - Head of Software - tom.buurmans@gmail.com
* Isaac - Hardware - isaachamiltonj@gmail.com
* Xavier - Software - Xavier.Broadhead@gmail.com
* Raven - Head of Hardware - Ravengotztier@icloud.com
* Luke - Admin - luke.honiss@gmail.com


## Information
* [Google Docs Link](https://docs.google.com/document/d/1r9uR-22ZHVupD0Ts2tCpkkdqB7kD9Vjael_ExiJzlJU/edit?usp=sharing)
    * This will be a general place for team members to put code snippets or paste pictures of progress and more general items that don't belong directly on this document.
* We are using a Facebook Group chat to communicate
<table>
   <th colspan="3">First robot design</th>
   <tr>
      <td><img src="images/Robot1.jpg" alt="Robot 1" width="200px" /></td>
      <td><img src="images/Robot2.jpg" alt="Robot 2" width="200px" /></td>
      <td><img src="images/Robot3.jpg" alt="Robot 3" width="200px" /></td>
   </tr>
   <th colspan="3">Final robot designs</th>
   <tr>
      <td><img src="images/robot-battery.jpg" alt="Complete robot without battery" width="200px" /></td>
      <td colspan="2"><img src="images/Robot-complete.jpg" alt="Complete robot" width="400px" /></td>
   </tr>
</table>

## Coding Guidelines
* 4 spaces in place of a tab (can be configured through Geany)
* Comments before each method and wherever possible
* Using underscores (`_`) in variable and method names (e.g. `my_method()`, `my_var`)
* Constants will be in 'UPPER_CASE'
* Opening curly brace will be on the same line as the method/statement declaration (i.e.)
```c
int main() {
    if(true) {
        print("true");
    } else {
        print("false");
    }
    
    return 0;
}
```


## Project Plan
| Week | Dates | Objective | Items Due | Conflicts | Tasks |
| ---- | ----- | --------- | --------- | --------- | ----- |
| 1    | 1-5/5 | Robot Moving<br/>Chassis Design | AVC Plan | | [W1 Checklist](https://github.com/LuciusDev/ENGR101-2017/blob/master/README.md#week-1) |
| 2    | 8-12/5 | Chassis Complete<br />Base Code | | | [W2 Checklist](https://github.com/LuciusDev/ENGR101-2017/blob/master/README.md#week-2) |
| 3    | 15-19/5 | Quad1&2 Complete | COMP102 Test | | [W3 Checklist](https://github.com/LuciusDev/ENGR101-2017/blob/master/README.md#week-3) |
| 4    | 22-26/5 |Quad3 Complete | AVC Progress | ENGR121 Test | [W4 Checklist](https://github.com/LuciusDev/ENGR101-2017/blob/master/README.md#week-4) |
| 5    | 29/5-2/6 | Quad4 Complete | **AVC Challenge** | | [W5 Checklist](https://github.com/LuciusDev/ENGR101-2017/blob/master/README.md#week-5) |


## Weekly Checklists
### Week 1
- [x] [ALL] Sort out team roles
- [x] [ALL] Team name
- [x] [ALL] Sign team agreement
- [x] [ALL] Create team schedule
- [x] [Luke] Setup team GitHub Repository
- [ ] [Raven] Ideal robot mockup

#### Review
We are still to complete the mockup for the robot and complete the chassis for the robot. We had problems with attaching the motors to the GPIO pins, however the code we wrote worked fine (examples/forward.cpp).


### Week 2
- [x] [Raven] Ideal robot mockup
- [ ] [Raven] Mounting for camera, IR, and motors
- [x] [Raven] Wheel guiding system
- [ ] [Raven] Finish chassis
- [x] [SOFTWARE] Camera code
- [ ] [SOFTWARE] Robot can follow line
- [ ] [SOFTWARE] WiFi gate works
- [ ] [SOFTWARE] Test code

#### Review
We have done a lot of work this week. We managed to make a basic robot chasis with the parts that we could get. We have not yet finished the chasis but are not too far off it. Our hardware team will be completing the chasis at home. The software is pretty much complete for quadrant 1 which is very helpful. All of the team except Luke will be comming back on friday to complete the chasis and tidy stuff up.

### Week 3
- [x] [HARDWARE] Complete CAD files
- [x] [HARDWARE] 3d print parts
- [x] [HARDWARE] Finish chassis
- [x] [SOFTWARE] Test code
- [x] [HARDWARE] Mount camera, IR, and motors
- [ ] [SOFTWARE] Robot can follow line
- [x] [SOFTWARE] WiFi gate works
- [x] [SOFTWARE] Implement derivitive signal
- [ ] [SOFTWARE] Refine constants
- [x] [HARDWARE] Refine Robot Design
- [ ] [ALL] Quad 1&2 complete

#### Review
Unfortunately we were unable to get to use the 3D printers on Tuesday. We completed most of the CAD files there and made a few adjustments later in our own time. On Thursday we managed to get all our important parts printed and mounted. If we get the oppurtunity on Friday we may come back and try to do some testing. On Friday we managed to print out the final part of the chassis and test the gate opening. The gate now fully opens so it is working as expected.

### Week 4
- [ ] [ALL] Quad 1&2&3 complete
- [x] [SOFTWARE] Test code
- [x] [SOFTWARE] Robot can follow line
- [x] [SOFTWARE] WiFi gate works
- [x] [SOFTWARE] Refine constants

#### Review
We made a huge amount of progress on the robot this week. On Tuesday we began testing and got the robot to follow the line. The constants are all working as expected. The robot can go through Quad 1 and 2 all the time and Quad 3 is very nealy complete. We had to change the rear wheel to a marble as the robot was not turning correctly in Quad 3. Code for Quad 4 needs to be written however the chassis is complete.

### Week 5
- [ ] [ALL] Quad Quad 1&2&3&4 complete
- [x] [ALL] Finishing touches
- [x] AVC CHALLENGE COMPLETED!

#### Review
A large section of the code and sections of the chassis were modified before the final run. Unfortunately the robot was not complete and it only managed 50% of the maze. This was probably due to a few things. One of the motors had begun to spin slower than the other. This caused it to veer of slightly and not turn correctly. Due to the position of the camera it appeared that it was picking up a little bit of white dust on the track which caused it to veer off completely in Quad 2. Also some parts of the software had not been debuged correctly so changes had to be made quickly and were not completely tested. The chassis got 3 points taken off it due to the back wheel being not very sturdy (it became loose before the maze) and a few other little things


### Weekly Progress Checklist
* [ALL] Each member/team completed their valid tasks
* [ALL] New goal for each member/team
* [Luke] Next week finalised
* [Luke] Review completed
* [Luke] Meetings finalised
* [Luke] Updated GitHub
    * [ALL] Code/pictures etc. committed
* [ALL] Extra tasks discussed

[pic]: https://m.popkey.co/fe3716/AlpAp_s-200x150.gif "We have the high ground"
