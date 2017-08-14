# WKImageBrowserView
图片浏览器，没有显示缩略图部分

## 用法:
1. 两个文件拖进去；
2. 需要使用的地方导入.h文件，放入全局导入文件或PCH也可以。
3. 在想要显示的地方，例如 按钮点击实现
```
    WKImageBrowserView * imageBrowser = [[WKImageBrowserView alloc] initWithImageArr:_srcStringArray andTag:1];
    imageBrowser.frame = CGRectMake(0, 0, KSCREEN_HEIGHT, KSCREEN_HEIGHT);
    [imageBrowser show];
```

4. 如果多个按钮需要的话，可以在封装一层

```
  //传入图片数组，打开图片浏览器
- (void)borrowImagesWith:(NSArray *)ImageAarray{
    WKImageBrowserView * imageBrowser = [[WKImageBrowserView alloc] initWithImageArr:_srcStringArray andTag:1];
    imageBrowser.frame = CGRectMake(0, 0, KSCREEN_HEIGHT, KSCREEN_HEIGHT);
    [imageBrowser show];
}
```

使用的时候直接调用就行了
```
    [self borrowImagesWith:_srcStringArray];

```
