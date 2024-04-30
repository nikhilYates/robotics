Collection of passion projects re/ robotics

1. Projects


  a. FSM Project (./projects/fsm)
    8-state machine describing the motion of a robot that heads to a site and performs a 'scan'. Simulated using
    gazebo
      1. At starting position
      2. Determines path to scan site using an RRT-based path finding algorithm
      3. Move to task starting position
      4. Now proceed through obstacles to the "radioactive" scan site
      5. Scan the "radioactive" area
      6. Return from the scan site to the task start position
      7. Return from the task start position to origin
      8. Work complete state


2. Algorithms

  a. RRT + custom
  b. RRT
  c. A*

