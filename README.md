1. 과제 소개 (Project Overview)
이 프로젝트는 여러 명의 플레이어가 접속하여 출제된 3자리 숫자를 맞추는 경쟁 게임입니다.
기본 규칙: 1~9 사이의 중복되지 않는 3자리 숫자를 맞춥니다.
판정 기준:
Strike (S): 숫자와 위치가 모두 일치
Ball (B): 숫자는 맞지만 위치가 다름
OUT: 일치하는 숫자가 없음
승리 조건: 3 스트라이크를 달성하거나, 정해진 횟수 내에 숫자를 맞추면 승리


3. 주요 구현 과정 (Implementation Details)
Server RPC: 클라이언트의 입력을 서버로 전달하여 검증
Client/Multicast RPC: 판정 결과나 로그인 메시지를 특정 혹은 모든 플레이어에게 쏴줌.
Property Replication: 플레이어의 이름, 현재 시도 횟수 등의 데이터를 실시간으로 동기화
💻 핵심 클래스 및 기능
ABSGameModeBase: 정답 숫자 생성(GenerateSecretNumber), 결과 판정(JudgeResult), 게임 승패 로직(JudgeGame)을 관리합니다.
ABSPlayerController: 채팅 입력 위젯을 생성하고 서버와 클라이언트 간의 RPC 라우팅을 담당합니다.
ABSPlayerState: 서버와 클라이언트 간에 공유되는 플레이어의 점수와 상태 데이터를 저장합니다.
UI System: UBSChatInput을 통해 추측값을 입력받고, 결과 메시지를 화면에 표시합니다.
