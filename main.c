#include<stdio.h>
#include<math.h>

//ע�����arrayһ��Ҫ��ȫ�ֶ��壬�ֲ�����Ļ����һ������Բ���
//ԭ��Ϊ������ȫ�ֱ����;ֲ������������ֱ����洢��λ�ò�һ����
//ȫ�ֱ������Ǵ洢���ڴ��еľ�̬����static��
//���ֲ����������Ǵ洢��ջ����stack����
//�Ʋ������PAT��ջ�Ƚ�С�治����ô������
int array[100000];

int main() {
    int number = 0;
    int count = 0;
    int index = 0;
    int j;
    scanf("%d", &number);
    //2��ʼ������
    for (int i = 2; i <= number; i++) {
        //����������
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                break;
        }
        //����Ĵ��� ˵�������ѭ��û�б�Break
        if (j > sqrt(i)) {
            //�������Ķ�������������
            array[index++] = i;
        }
    }
    //��������ѭ��
    for (int k = 1; k <= number; k++) {
        //ȡ���ڵ������� ��� �������2 ���������ĿҪ��
        if (array[k + 1] - array[k] == 2) {
            //count��+1
            count++;
        }
    }
    //������
    printf("%d", count);
    return 0;
}

