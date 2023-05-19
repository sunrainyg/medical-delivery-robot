
"use strict";

let GetWaypointByName = require('./GetWaypointByName.js')
let AddNewWaypoint = require('./AddNewWaypoint.js')
let GetWaypointByIndex = require('./GetWaypointByIndex.js')
let GetNumOfWaypoints = require('./GetNumOfWaypoints.js')
let ServoWrite = require('./ServoWrite.js')
let SaveWaypoints = require('./SaveWaypoints.js')

module.exports = {
  GetWaypointByName: GetWaypointByName,
  AddNewWaypoint: AddNewWaypoint,
  GetWaypointByIndex: GetWaypointByIndex,
  GetNumOfWaypoints: GetNumOfWaypoints,
  ServoWrite: ServoWrite,
  SaveWaypoints: SaveWaypoints,
};
