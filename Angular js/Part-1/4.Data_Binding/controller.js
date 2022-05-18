/*var myApp = angular.module("myModule" , []);//module declartion

//Creating controller

myApp.controller("myController", function ($scope) {
	var student = {
        name : "xyz",
        division : "B",
        subject : "Advance Web Technology",
        year : "Second year",
        course : "MSC(CA/IT)"
    };

    $scope.student = student;

});*/


// By using chaining method to create everything in one line

var myApp = angular
                    .module("myModule" , [])
                    .controller("myController", function ($scope) {
                        $scope.student = {
                            name : "xyz",
                            division : "B",
                            subject : "Advance Web Technology",
                            year : "Third year",
                            course : "MSC(CA/IT)"
                        };
                    
                        // $scope.student = student;
                    
                    
                    });