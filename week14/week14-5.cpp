// week14-5_sound
// 選單 sketch - library - manage libraries
// 安裝sound後，開始寫
// 選單File-Examples 選libraries 核心函式庫
import processing.sound.*;//Java使用Sound外掛
SoundFile music, sword, monkey, intro;
void setup(){
  size(640, 360);
  sword = new SoundFile(this,"sword slash.mp3");
  monkey = new SoundFile(this,"Monkey 1.mp3");
  intro = new SoundFile(this,"Intro Song_Final.mp3");
  music = new SoundFile(this, "In Game Music.mp3");
  music.play();
}
void draw(){
  //裡面是空白
}
