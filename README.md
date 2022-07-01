# qt_knowledge_base
Qt 常用的一些知识，属于术层面的，方便开发使用

### 通过按钮点击弹出自定义窗体,主要的知识点有：
*   如何将窗体放到顶层：widget->raise();
*   窗体的显示的具体位置：btn->mapToGlobal(pos);
*   监听主窗体的force in事件，对界面进行隐藏
