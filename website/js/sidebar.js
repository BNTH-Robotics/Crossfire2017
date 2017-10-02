var OPEN_WIDTH = "25%";
var CLOSE_WIDTH = "1%";
var navLink = document.getElementsByClassName("navigation a");
var navlinkposOpen = "0%"
var navlinkposClose = "700%"

function openNav()
{
    document.getElementById("navigation").style.width = OPEN_WIDTH;
    document.getElementById("navigation").style.display = "block";
    document.getElementById("antiNav").style.marginLeft = OPEN_WIDTH;
    navLink.style.right(navlinkposOpen);
}

function closeNav()
{
    document.getElementById("navigation").style.width = CLOSE_WIDTH;
    document.getElementById("antiNav").style.marginLeft = CLOSE_WIDTH;
    navLinkink.style.right(navlinkposClose);

}