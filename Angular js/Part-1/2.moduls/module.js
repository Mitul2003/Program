var myApp = angular.module("myModule" , []);

//Creating controller

var myController = function ($scope) {
	$scope.message = "Angularjs";   // message is property
};

//Register controller

myApp.controller("myController", myController);

/*  
myApp.controller("myController", function ($scope)) {
	$scope.messge = "Angularjs";
});
   */

