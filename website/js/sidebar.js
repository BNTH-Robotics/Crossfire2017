var OPEN_WIDTH = "25%";
var CLOSE_WIDTH = "0%";

function openNav()
{
    document.getElementById("navigation").style.width = OPEN_WIDTH;
    document.getElementById("navigation").style.display = "block";
    document.getElementById("antiNav").style.marginLeft = OPEN_WIDTH;
}

function closeNav()
{
    document.getElementById("navigation").style.width = CLOSE_WIDTH;
    document.getElementById("antiNav").style.marginLeft = CLOSE_WIDTH;

}