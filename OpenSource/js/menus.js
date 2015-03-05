$(document).ready(function() 
{
	$("#nav li a").mouseover(function()

	{
		$(this).animate({fontSize:"26px"},"fast");
	});
	
	$("#nav li a").mouseout(function()

	{
		$(this).animate({fontSize:"25px"},"fast");
	});
});
	
	