#pragma once


//��ʹ�ø�ģ���ʱ�����Ҫ�������
void init_hook();
//����������
void clean_hook();

typedef int (*func_key_callback)(int code);

//��ʼhook���еļ�����Ϣ
void hook_global_keyboard();

//����Ҫhook�ļ���no_call_nextΪtrue�򲻻���Ӧ�ü�����Ϣ��Ϊfalse����Ӧ����Ϣ
void set_hook_key(const char key,bool no_call_next);

//���ĳ��Ҫhook�ļ�
void clear_hook_key(const char key);

//��hook����Ӧ�ļ���ʱ��Ҫ��Ӧ��
void set_hook_key_call_back(func_key_callback call_back);
