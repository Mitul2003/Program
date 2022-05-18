var myApp = angular.module("myModule" , [])
                    .controller("myController", function ($scope) {
	                     $scope.student = {
                                  name : "xyz",
                                  division : "B",
                                    subject : "Advance Web Technology",
                                    year : "Second year",
                                    course : "MSC(CA/IT)"
                                 };
                                 
                                
                                 var Employee = {
                                  name : "xyz",
                                  division : "B",
                                    subject : "Web Technology",
                                    year : "Second year",
                                    course : "MSC(CA/IT)"
                                 };

                    //  $scope.student = student;
                     $scope.Empl = Employee ;
                     $scope.msg = " Hello "

                    });


