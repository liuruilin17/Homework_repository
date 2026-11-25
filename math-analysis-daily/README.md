# 每日数学分析 · 练习题库

本目录是一个纯静态网页，包含：
- `index.html`：按日期分类、题目搜索、难度筛选、已完成标记与复习笔记。
- `questions.json`：每日练习题数据。目前已录入 2026-11-16 至 2026-11-24 的 37 道题。

## 在线发布到 GitHub Pages（仓库所有者执行一次）

打开 GitHub 仓库 `liuruilin17/Homework_repository` → **Settings** → **Pages** → **Build and deployment** → **Deploy from a branch** → Branch: `main`，Folder: `/(root)` → **Save**。

发布后可访问：`https://liuruilin17.github.io/Homework_repository/math-analysis-daily/`。

## 每日更新

每日出题自动任务已加入「成功推送后尽量追加 questions.json」指令。连接器若不可用或保存失败，当日题目不会自动出现在网站上；需要检查同步结果。历史数据采用日期和题目 ID，避免重复追加。

## 备注

已知 2026-11-16、2026-11-17 的第 4 题条件不足，页面如实标注，未擅自改变历史题干。

网站不包含答案，完成状态与笔记由浏览器 localStorage 在当前设备本地保存，不会上传到 GitHub 仓库。
