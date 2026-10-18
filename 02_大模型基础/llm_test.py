"""用代码调用 DeepSeek，验证 API 是否跑通。

运行前：
  1. pip install openai python-dotenv
  2. 复制 .env.example 为 .env，填入 DEEPSEEK_API_KEY

运行：python llm_test.py
"""

import os
import sys
from pathlib import Path

from dotenv import load_dotenv
from openai import OpenAI

load_dotenv(Path(__file__).resolve().parent / ".env")

api_key = os.getenv("DEEPSEEK_API_KEY")
if not api_key:
    sys.exit("没有找到 DEEPSEEK_API_KEY，请先在本文件夹创建 .env 并填入 Key")

client = OpenAI(
    api_key=api_key,
    base_url="https://api.deepseek.com",   # DeepSeek 使用 OpenAI 兼容接口
)

resp = client.chat.completions.create(
    model="deepseek-chat",
    messages=[
        {"role": "system", "content": "你是一名耐心的大一助教"},
        {"role": "user", "content": "用三句话解释什么是边缘检测"},
    ],
)

print(resp.choices[0].message.content)
