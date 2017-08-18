# Introduction to openFrameworks (Part 1)


[openFrameworks](openframeworks.cc) is an open source C++ library for creative coding. Similar to Processing, openFrameworks allows users to quickly and easily (sometimes) create graphics-driven applications.

## Why use openFrameworks?

One of the biggest advantages of openFrameworks is its extremely active community. Because it is opensource, many people contribute to the openFrameworks code base. There are also many people contributing libraries (called 'addons') that extend oF's core capabilities. All addons are catalogued on [ofxAddons.com](http://ofxaddons.com/categories) and cover a huge variety of topics. Some addons are completely new code, while others wrap other useful libraries. Here's a sampling of some of the most popular libraries:

* [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker) Requires ofxCv. Detects faces and tracks the positions, orientations, and scales of key facial features (eyes, nostrils, jaw, etc.)
* [ofxDarknet](https://github.com/mrzl/ofxDarknet) A neural network addon for openFrameworks. Comes with pre-trained models and samples to try out fun neural network techniques.
* [ofxMidi](https://github.com/danomatika/ofxMidi) Provides MIDI I/O capability to an oF app. 
* [ofxAudioAnalyzer](https://github.com/leozimmerman/ofxAudioAnalyzer)
* [ofxFilterLibrary](https://github.com/mfargo/ofxFilterLibrary) A set of graphical filter examples that use GLSL shaders.

Caveats: Not all addons are maintained, and some may become incompatible with later releases of openFrameworks. You also cannot guarantee the quality (or functionality) or any library. Have fun, but know the risks. 

### openFrameworks vs. Processing 

For many of our workshops, we've been using tools like p5.js, Processing, and Javascript. OpenFrameworks is a C++-based library that can be more challenging to master. That said, it can be well suited for more complex projects that require performance and speed. It's also great if you want to leverage the existing libraries. OpenFrameworks is used by many professional-level creative coding studios for permanent installations.

Processing (or p5.js) is excellent for quick software prototypes. It's easy to throw some code in, experiment, and see the result. Processing is not usually suited for professional-level installations or more permanent pieces. Processing can be much slower than openFrameworks, depending on what you're doing. With p5.js, you can easily publish projects to the web.

Like Processing, openFrameworks has a setup and a draw function. The setup function will be called exactly once, at the beginning of you program. The draw function will be called repeatedly. OpenFrameworks also has an update function, which can be used to update non-graphics values, such as positions, etc.

## Setup

For this workshop, download a zip of the latest [openFrameworks release](http://openframeworks.cc/download/) (0.9.8). You can also clone the openframeworks repository directly from Github, but the zip file comes with a prebuilt project generator, which can be used to create a new project. 


### Clone the Code Kitchen repository


After downloading the openFrameworks release, navigate to openFrameworks/apps and clone or download this repository. To clone from a terminal, use the following commands:

```cd of_v0.9.8_osx_release/apps
git clone https://github.com/codekitchensd/2017-08-17-intro-to-openframeworks.git
```

### (Option) Create your own project with the Project Generator

To build a new project in openFrameworks, it's easiest to use the Project Generator tool. This ensures that your application knows where all of the openFrameworks source files are. You have the option of including additional ofxAddons using the project generator as well.

[Show example image]

### Open your app and build openFrameworks

Unlike processing, you can't simply hit the play button. To build and run an openFrameworks application, you must first build openFrameworks itself. 

[Take a tour through XCode w/building]

## Learning

AKA a very brief overview of core oF functionality. Most of these are covered on the oF's website, so we'll just show a few highlights.

#### [2D Graphics, Images, & Typography](http://openframeworks.cc/documentation/graphics/)

##### Assets

Assets are stored within App Folder/bin. 

##### Displaying Images

Declare an image using the ofImage object.

```
ofImage myImage;
```

then, load your image file:

```
image.load("images/puppy.jpg"); 
```

then, draw it in the draw() function. It takes in parameters for the x and y position.

```
image.draw(300,0); 
```

You can also specify the image size:

```
image.draw(300,0, 100, 100); 
```

#### [Working with Video](http://openframeworks.cc/documentation/video/)

The oF video object is called 'ofVideoPlayer'. Declare and play a video like so:

```
// Call these functions once to initialize a video object
ofVideoPlayer testMovie;

// Now, load the video file
testMovie.load("testmovie.mov");

// Start playing the movie
testMovie.play();
```

In the update function, we need to call update on our video object. This tells the video player to grab the next frame of video:

```
testMovie.update();
```

In the draw function, draw the movie:


```
testMovie.draw(0, 0, 400, 300);
```


#### [Working in 3D](http://openframeworks.cc/documentation/)

You can also use openFrameworks to create 3D scenes. Some background knowledge of computer graphics is helpful. 

## Example Apps

There are many examples included with openFrameworks. We've picked out a few interesting ones to go over. 

* SoundPlayer FFT Example 
* asciiVideo Example
* multiTextureShader Example
* opencvExample
* noiseField2D Example
* particles Example

Spend some time looking through the other examples (at your leisure).

## Challenge

Select one of the examples we've gone over and modify it in any way you choose. This could be as simple as adding basic mouse input, or as complex as writing custom noise functions to modify a noise field. Pick something you enjoy!

## Inspiration

### Cool Projects 
* [ConnectedWorlds by Design I/O](http://design-io.com/projects/ConnectedWorlds/)
* [Drawing experiments by Kind](https://thenextweb.com/dd/2012/05/04/amazing-video-drawing-experiments-by-kynd-use-openframeworks-to-create-art/#.tnw_2rnWBh5z)
* [CSIS Data Chandelier by Sosolimited](https://www.sosolimited.com/work/csis-data-chandelier/)
* [Anthropocene by Joel Gethin Lewis](http://openframeworks.cc/ofBook/chapters/project_joel.html)

### Resources 
* [ofxAddons](http://ofxaddons.com/categories)
* [oF Tutorials](http://openframeworks.cc/learning/)
* [oF Documentation of core libraries](http://openframeworks.cc/documentation/)


### Articles
* [How Open Source is Disrupting Visual Art](https://creators.vice.com/en_us/article/wnzm4q/how-open-source-is-disrupting-visual-art)




