# 02 大模型基础 · 交付物

本章交 **3 张截图**（放在本文件夹），`llm_test.py` 是第 3 张截图用的代码（可选提交，放进来更好）。

| 截图 | 截什么 | 文件名 |
| --- | --- | --- |
| ① 网页版 AI | 网页版 DeepSeek 解释第 1 章指针代码的界面 | `2-1_网页版AI解释指针.png` |
| ② 编辑器里用 AI | Trae / VS Code 里选中代码、AI 给出回答的界面 | `2-2_编辑器里用AI.png` |
| ③ API 跑通 | 终端里 `python llm_test.py` 打印出回答的界面 | `2-3_API跑通.png` |

---

## ① 网页版 AI 解释指针代码

1. 打开 <https://chat.deepseek.com/> 登录。
2. 把 `01_C语言基础/swap_pointer.c` 的内容整段贴进去，用这个提问：

   > 这是我写的大一 C 语言代码，请逐行解释它是怎么用指针交换两个变量的值的，
   > 重点讲清楚 `&` 和 `*` 各自做了什么。

3. 等它回答完，用 `Win + Shift + S` 只框选"你的代码 + AI 的回答"，存成 `2-1_网页版AI解释指针.png`。

## ② 编辑器里用 AI

1. 用 Trae 或 VS Code（+ Continue / Cline 插件）打开 `01_C语言基础` 文件夹。
2. 选中 `average_malloc.c` 里任意一段代码，让 AI 解释或找 bug，例如：

   > 帮我看看这段 malloc / free 的用法有没有问题。

3. 截图要能同时看到**代码文件名 / 选中区域 + AI 的回答面板**，存成 `2-2_编辑器里用AI.png`。

## ③ API 跑通

### 1. 装 Python 和依赖

```bat
pip install openai python-dotenv
```

### 2. 申请 Key 并保护它

1. 到 <https://platform.deepseek.com/> → 「API Keys」→ 创建新 Key，复制保存（只显示一次）。
2. 复制 `.env.example` 为 `.env`，把里面的值换成你的真实 Key：

   ```
   DEEPSEEK_API_KEY=sk-你的真实Key
   ```

   > `.env` 已经在仓库根目录的 `.gitignore` 里，不会被提交。

### 3. 运行并截图

```bat
cd 02_大模型基础
python llm_test.py
```

终端打印出模型回答后截图，存成 `2-3_API跑通.png`。

---

## 截图前的三条自检

- 画面里**不要出现 API Key**（`.env`、代码、终端回显里都可能有），有就打码。
- 关掉微信 / QQ、邮箱、无关浏览器标签和文件管理器，用 `Win + Shift + S` 只框选需要的区域。
- 单张图别超过 2 MB，格式用 `.png` 或 `.jpg`。
