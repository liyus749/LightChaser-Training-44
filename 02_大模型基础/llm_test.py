"""
第 2 章 · API 练习：用代码调用 DeepSeek

运行前准备：
  1. 安装依赖：  pip install openai python-dotenv
  2. 在本文件夹建一个 .env 文件，写一行：  DEEPSEEK_API_KEY=你的Key
     （可以从 .env.example 复制一份再改）

运行：  python llm_test.py
成功的话，终端会打印出模型对"什么是边缘检测"的回答。
"""

import os
import sys
from pathlib import Path

from dotenv import load_dotenv
from openai import OpenAI

# 读取"本文件同目录"下的 .env，这样在哪个目录下运行都不会找不到
load_dotenv(Path(__file__).resolve().parent / ".env")

api_key = os.getenv("DEEPSEEK_API_KEY")
if not api_key:
    sys.exit(
        "没有找到 DEEPSEEK_API_KEY。\n"
        "请在本文件夹建一个 .env，写入：DEEPSEEK_API_KEY=你的Key"
    )

# DeepSeek 用 OpenAI 兼容接口，所以直接复用官方 openai 库，只改 base_url
client = OpenAI(
    api_key=api_key,
    base_url="https://api.deepseek.com",   # ★ 关键：换成 DeepSeek 的地址
)

resp = client.chat.completions.create(
    model="deepseek-chat",                 # 或 deepseek-reasoner（推理版）
    messages=[
        {"role": "system", "content": "你是一名耐心的大一助教"},
        {"role": "user", "content": "用三句话解释什么是边缘检测"},
    ],
)

print(resp.choices[0].message.content)
