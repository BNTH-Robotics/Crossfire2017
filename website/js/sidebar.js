var OPEN_WIDTH = "25%";
var CLOSE_WIDTH = "1%";
var navlinkposOpen = "750%";
var navlinkposClose = "750%";
function openNav()
{
    document.getElementById("navigation").style.width = OPEN_WIDTH;
    document.getElementById("antiNav").style.marginLeft = OPEN_WIDTH;
}

function closeNav()
{
    document.getElementById("navigation").style.width = CLOSE_WIDTH;
    document.getElementById("antiNav").style.marginLeft = CLOSE_WIDTH;
}

