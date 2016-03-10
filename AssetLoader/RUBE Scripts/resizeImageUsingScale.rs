float PTM_RATIO = 30;
image[] imgs = getSelectedImages();
for(uint i = 0; i < imgs.length; i ++)
{
   float h = imgs[i].getPixelHeight();
   float s = h/PTM_RATIO;
   imgs[i].setScale(s);
   print("Image:" + imgs[i].getName() + " Scale:" + s);
}