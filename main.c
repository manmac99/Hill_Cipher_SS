// main.c

#include <stdio.h>
#include <stdint.h>
#include "hill_cipher_encrypt.c"
#include "chekc_ans.c"

int main() {
    u_int8_t plaintext[MATRIX_SIZE + 1], ciphertext[MATRIX_SIZE + 1];
    u_int8_t ans[MATRIX_SIZE + 1] = "QROGTPHF";

    printf("암호화할 평문을 입력하세요 (길이는 %d로): ", MATRIX_SIZE);
    scanf("%8s", plaintext);

    hill_cipher_encrypt(plaintext, ciphertext);

    printf("암호문: %s\n", ciphertext);

    if(check_ans(ciphertext, ans)) {
        printf("비밀번호는 같습니다.\n");
    } else {
        printf("비밀번호는 틀립니다.\n");
    }

    return 0;
}



1. 현재 삼성디스플레이에서 사업적, 혹은 상품 측면에서 가장 많이 고민하고 있는 부분이 있을까요?
IT 제품군에서 새로운 증착방식으로 PNL을 쌓아 경쟁력을 확보하려고 주력하고있습니다. 
2. 현재 중소형 oled 측면에서 삼성전자와 애플이 최대 고객사라고 알고 있는데요, 혹시 회사 내에서 더 민감하게 반응하는 고객사가 있을까요?
말씀하신 두 고객사가 메이저이고, 나머지 중화쪽, 그 외 글로벌이라 칭하는 여러 국가의 고객사가 있습니다. 따라서 외국어능력이 가장 중요한 소량일것같아요.
3. 중국의 디스플레이 회사들도 삼성디스플레이에 위기가 될 수 있다, 그럼에도 불구하고 중국의 회사들이 아직 기술적인 측면에서 따라잡기 어렵다와 같이 중국 회사에 대한 입장이 상이한걸 확인할 수 있었는데요, 중국 디스플레이에 대해 현업에서는 어떻게 인식하는지 궁금합니다!
말씀하신 두 가지 입장이 공존해요. 그래서 제조업은 늘 기술력을 쌓으려고 노력합니다.
4. 스마트폰이나 it용 기기에 있어 ai 탑재로 oled 시장의 성장과 삼성디스플레이에게도 기회로 작용할 수 있다는 기사를 봤는데요, 단순히 ai 탑재 스마트폰 판매량 증가에 따른 기회인지, 혹은 ai 탑재를 위한 oled의 기술력으로 삼성디스플레이의 경쟁력이 올라가는 것인지 궁금합니다.
저희는 패널을 만드는 회사입니다. 전자에 가깝다고 생각해요.
5. 혹시 현직자 분께서는 영업 담당자 분들과 소통하실 일이 많으신지 궁금합니다. 또한 영업 직무에 종사하다보면 회사 내 다양한 분들과 소통할 일이 많을 것 같은데, 디스플레이 임직원으로서 기본적으로 갖추어야 할 엔지니어링 지식이 있을까요?
네, 영업분들과 소통을 많이하죠. 기초적인 PNL Stack-up&모델별 특성 등 고객에 정확히 우리의 제품의 강점을 전달할수있는 수준의 지식은 필요합니다.
<면접 관련 질문>
1. 제가 직무 면접이 처음이다 보니 준비하는 과정에서 어떻게 준비를 해야하는지 많은 고민이 드는거 같습니다. 직무면접에 있어 실무지식, 배우려는 자세 등 여러 요소 중에 가장 중요한 점이 어떤 것인지 궁금합니다!
이건 질문에 정답이있네요.. 영업 쪽이라 제가 잘 모르지만.. 영업은 고객과 엔지니어 사이에서 소통구 역할을 합니다. 전달자로서 내용을 명확하게 전달하기 위한 역량을 키운다는 자세가 중요해보입니다. 그러기 위해서는 외국어, 제품 지식, 소통능력. 세 가지가 가장 중요하겠네요.
2. 삼성디스플레이 임원 면접에서 중요하게 보는 태도가 어떤 것인지 궁금합니다.
이건 케바케라 .. 특히 영업 쪽은 어렵네요 ㅠ 열정, 겸손..?
<추가적으로 함께 면접 준비하시는 분들의 질문도 취합해 보았습니다..!>
1. 경영지원 부문이 기획, 경영관리, 재경, 인사 등의 직무를 따로 뽑지 않고 부문 통틀어서 한꺼번에 뽑는 이유가 무엇인지 혹시 알고 계실지 궁금합니다.
이유 까지는 잘,,
2. 현직자님께서는 입사하셨을 때, 삼성디스플레이 회사를 선택하신 이유가 무엇인지 궁금합니다.
전공을 살릴 기회를 보았습니다.
삼성디스플레이는 국내외 1위 기업인 디스플레이 회사로, 디스플레이를 한 몸 처럼 생활하고 있는 현대 사회에서 중요한 high-tech 제품을 세계적으로 알리고자 지원했습니다.
3. 한 기수에 대략적으로 뽑는 인원이 궁금합니다.
매번 달라져서 000명 부터 00명까지 다양합니다.
