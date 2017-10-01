var OPEN_WIDTH = "250px";
var CLOSE_WIDTH = "0px";

function openNav()
{
    document.getElementById("navigation").style.width = OPEN_WIDTH;
    document.getElementById("antiNav").style.paddingLeft = OPEN_WIDTH;
}

function closeNav()
{
    document.getElementById("navigation").style.width = CLOSE_WIDTH;
    document.getElementById("antiNav").style.paddingLeft = CLOSE_WIDTH;

}