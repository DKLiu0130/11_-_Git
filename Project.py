import sys
from transformers import BertTokenizer, BertModel
import numpy as np
from flask import Flask, request, jsonify

app = Flask(__name__)

# 记录bert库的路径
bert_path = "D:\\大学\\大二上\\第三学期\\软件系统实践\\文本相似度分析项目\\TextAnalysisWindow\\bert_based_chinese"

# 加载分词路径和库路径
tokenizer = BertTokenizer.from_pretrained(bert_path)
model = BertModel.from_pretrained(bert_path)


# 使用数学方法计算余弦相似度
def cosine_similarity(vec1, vec2):
    return np.dot(vec1, vec2) / (np.linalg.norm(vec1) * np.linalg.norm(vec2))


# 将文本转化为bert模型的嵌入向量
def get_bert_embedding(text, in_model, in_tokenizer):

    # 功能： 将输入文本分词，并转化为pytorch张量格式
    # padding = True: 对文本进行填充以适应模型输入长度要求
    # truncation = True：截断超过最大长度的文本
    # max_length = 512: 设置最大输入长度为512个token
    inputs = in_tokenizer(text, return_tensors='pt', padding=True, truncation=True, max_length=1024)

    # 将输入张量传递给BERT模型，获取模型输出。
    outputs = in_model(**inputs)

    # 计算最后一层隐藏状态的平均值，将结果转换为NumPy数组。
    return outputs.last_hidden_state.mean(dim=1).detach().numpy()[0]


@app.route('/similarity', methods=['POST'])
def similarity():
    # 从主调程序获取text
    data = request.json
    # print(data)
    text1 = data['text1']
    text2 = data['text2']
    print(text1, text2)
    # 通过bert模型对输入进行语义分析，并转换为NumPY矩阵
    embedding1 = get_bert_embedding(text1, model, tokenizer)
    embedding2 = get_bert_embedding(text2, model, tokenizer)

    similarity_score = cosine_similarity(embedding1, embedding2)
    print("success")
    print(float(similarity_score))
    return jsonify({'similarity': float(similarity_score)})


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
