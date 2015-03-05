$(document).ready(function() 
{
	$("li a").mouseover(function()

	{
		$(this).animate({fontSize:"26px"},"fast");
	});
	
	$("li a").mouseout(function()

	{
		$(this).animate({fontSize:"25px"},"fast");
	});
});
	
	