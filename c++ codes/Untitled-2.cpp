<!DOCTYPE html>
<html>

<head>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
    <style>
        * {
            margin: 0px;
            padding: 0px;
            box-sizing: border-box;
        }

        body {
            background-color:aliceblue;
        }

        header {
            display: flex;
            flex-direction: row;
            align-items: center;
            justify-content: space-between;
            background-color: white;
            border-radius: 7px;
            margin: 20px 10px;
        }

        header #navbar {
            padding: 10px;
            display: flex;
            flex-direction: row;
            align-items: center;
            justify-content: flex-start;
        }

        header #navbar li {
            margin: 20px;
            list-style: none;
        }

        header #search-icon {
            margin: 0px 20px;
        }

        #advestiment-container {
            padding: 10px;
            margin: 10px;
            display: flex;
            flex-direction: row;
            align-items: center;
            justify-content: space-between;
            background-color: white;
            border-radius: 7px;
            height: 100px;
        }

        #advestiment-container .adItem {
            display: flex;
            flex-direction: row;
            align-items: center;
            justify-content: center;
        }

        #advestiment-container .adItem>img {
            margin: 10px;
            border-radius: 50%;
        }

        .button {
            border-radius: 4px;
            color: white;
            text-align: center;
            font-size: 10px;
            padding: 2px 2px;
            display: block;
            width: 50px;
            margin: 3px 2px;
        }

        #button1 {
            background-color: purple;
        }

        #button2 {
            background-color: green;
        }

        #button3 {
            background-color: purple;
        }

        #button4 {
            background-color: orange;
        }

        #button5 {
            background-color: red;
        }

        #photo-container .photoItem {
            color: white;
            display: flex;
            flex-direction: column;
            justify-content: flex-end;
            border-radius: 10px;

        }

        #photoItem1 {
            grid-area: header;
            background: url('./webfst/images/image.jpg') no-repeat center center;
            background-size: cover;
            height: 250px;
        }

        #photoItem2 {
            grid-area: menu;
            background: url('./webfst/images/food.jpg') no-repeat center center;
            background-size: cover;
            height: 250px;
        }

        #photoItem3 {
            grid-area: main;
            background: url('./webfst/images/fashion2.jpg') no-repeat center center;
            background-size: cover;
            height: 510px;
        }

        #photoItem4 {
            grid-area: right;
            background: url('./webfst/images/tech.jpg') no-repeat center center;
            background-size: cover;
            height: 250px;
        }

        #photoItem5 {
            background: url('./webfst/images/image1.jpg') no-repeat center center;
            background-size: cover;
            height: 250px;
        }

        #photo-container {
            display: grid;
            height: 100%;
            grid-template-areas:
                'header main right'
                'menu main footer';
            grid-gap: 10px;
            padding: 10px;
        }
    </style>
</head>

<body>

    <header>
        <ul id="navbar">
            <h2>Atlas</h2>
            <li>Reviews</li>
            <li>News</li>
            <li>Random</li>
            <li>Fashion</li>
        </ul>
        <i id="search-icon" class="fa fa-search"></i>
    </header>

    <div id="advestiment-container">
        <span id="adItem1" class="adItem">
            <img src="./webfst/images/food.jpg" alt="Error" width="40px" height="40px">
            <span>
                <h2>American sweet
                    pancakes with honey
                </h2>
                <p>about a year ago</p>
            </span>
        </span>
        <span id="adItem2" class="adItem">
            <img src="./webfst/images/image1.jpg" alt="Error" width="40px" height="40px">
            <span>
                <h2>How to spend a
                    vacation in the maldives
                </h2>
                <p>about a year ago</p>
            </span>
        </span>
        <span id="adItem3" class="adItem">
            <img src="./webfst/images/image.jpg" alt="Error" width="40px" height="40px">
            <span>
                <h2>Fashion & Style Tips
                    every woman should know
                </h2>
                <p>about a year ago</p>
            </span>
        </span>
        <span id="adItem4" class="adItem">
            <img src="./webfst/images/fashion2.jpg" alt="Error" width="40px" height="40px">
            <span>
                <h2>How lovely yellow is!
                    it stands for the</h2>
                <p>about a year ago</p>
            </span>
        </span>
    </div>

    <div id="photo-container">
        <span id="photoItem1" class="photoItem">
            <button id="button1" class="button">Fashion</button>

            <p> Fashion & Style Tips Every
                Women Should Know
            </p>
        </span>

        <span id="photoItem2" class="photoItem">
            <button id="button2" class="button">Food</button>

            <p>Fast food is Popular
                because it's convient
            </p>
        </span>

        <span id="photoItem3" class="photoItem">
            <button id="button3" class="button">Fashion</button>
            <p>How lovely yellow is! it stands for the
                sun</p>
        </span>

        <span id="photoItem4" class="photoItem">
            <button id="button4" class="button">Tech</button>
            <p>For good results must be
                make good plan
            </p>
        </span>

        <span id="photoItem5" class="photoItem">
            <button id="button5" class="button">Sports</button>
            <p>If you think lifting is
                dangerous,try being weak
            </p>
        </span>

</body>

</html>