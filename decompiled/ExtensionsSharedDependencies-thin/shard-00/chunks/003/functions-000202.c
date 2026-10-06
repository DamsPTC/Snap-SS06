/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00480868; end: 0048086f; -[SCNNotificationsRedriveMetadata setRedriveAttemptCount:] */

void FUN_00480868(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 00480870; end: 0048088b;  */

void FUN_00480870(void)

{
  _objc_alloc_init(PTR_PTR_00ac2f00);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0048088c; end: 004808bf; -[SCNNotificationsSuppressData init] */

void FUN_0048088c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac3d50;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 004808c0; end: 0048091f;  */

void FUN_004808c0(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x00792f00();
  _objc_retainAutoreleasedReturnValue();
  FUN_00480920(auStack_48);
  FUN_0046eecc(param_1,auStack_48);
  FUN_0046ef5c(auStack_48);
  FUN_00480ccc();
  return;
}



/* Entry: 00480920; end: 00480a33;  */

void FUN_00480920(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  _objc_retain();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_00480a34;
  uStack_68 = 0x480a40;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  fStack_38 = 1.0;
  uVar1 = param_2;
  func_0x00780e80(param_2);
  func_0x0046f578(&uStack_58,(long)((float)uVar1 / fStack_38));
  func_0x00782b60(param_2);
  FUN_0046f4e4(param_1,puStack_80 + 6);
  func_0x00480ce4();
  FUN_0046ef5c(&uStack_58);
  func_0x00480ccc();
  return;
}



/* Entry: 00480a34; end: 00480a47;  */

void FUN_00480a34(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 00480a48; end: 00480ccb;  */

void FUN_00480a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong unaff_x23;
  float fVar13;
  qword qStack_70;
  qword qStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00787200();
  func_0x00480cd4();
  FUN_0047c764(&qStack_70,param_3);
  _objc_release(param_3);
  iVar9 = (int)param_2;
  uVar11 = (ulong)iVar9;
  uVar10 = *(ulong *)(lVar12 + 0x38);
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar7 * uVar10;
      }
    }
    plVar5 = *(long **)(*(long *)(lVar12 + 0x30) + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_00480b34;
          uVar7 = plVar5[1];
          if (uVar7 != uVar11) break;
          if (*(int *)(plVar5 + 2) == iVar9) goto LAB_00480c74;
        }
        if ((uVar10 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar10 <= uVar7) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar2 * uVar10;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_00480b34:
  pcVar3 = segment_command_00000020.segname + 8;
  __Znwm();
  puVar1 = (undefined8 *)(lVar12 + 0x40);
  uStack_48 = 1;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  *(ulong *)(pcVar3 + 8) = uVar11;
  *(int *)(pcVar3 + 0x10) = iVar9;
  *(undefined8 *)(pcVar3 + 0x28) = uStack_60;
  *(qword *)(pcVar3 + 0x20) = qStack_68;
  *(qword *)(pcVar3 + 0x18) = qStack_70;
  qStack_70 = 0;
  qStack_68 = 0;
  uStack_60 = 0;
  fVar13 = (float)(*(long *)(lVar12 + 0x48) + 1);
  pcStack_58 = pcVar3;
  puStack_50 = puVar1;
  if ((uVar10 == 0) || (*(float *)(lVar12 + 0x50) * (float)uVar10 < fVar13)) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)(fVar13 / *(float *)(lVar12 + 0x50));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    func_0x0046f578(lVar12 + 0x30,uVar4);
    uVar10 = *(ulong *)(lVar12 + 0x38);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar6 = *(long *)(lVar12 + 0x30);
  puVar8 = *(undefined8 **)(lVar6 + unaff_x23 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    *(undefined8 *)pcStack_58 = *puVar1;
    *puVar1 = pcStack_58;
    *(undefined8 **)(lVar6 + unaff_x23 * 8) = puVar1;
    if (*(long *)pcStack_58 != 0) {
      uVar11 = *(ulong *)(*(long *)pcStack_58 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar4 * uVar10;
      }
      *(char **)(lVar6 + uVar11 * 8) = pcStack_58;
    }
  }
  else {
    *(undefined8 *)pcStack_58 = *puVar8;
    *puVar8 = pcStack_58;
  }
  pcStack_58 = (char *)0x0;
  *(long *)(lVar12 + 0x48) = *(long *)(lVar12 + 0x48) + 1;
  func_0x0046fa28(&pcStack_58);
LAB_00480c74:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&qStack_70);
  return;
}



/* Entry: 00480ccc; end: 00480cef;  */

void FUN_00480ccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 00480cf0; end: 00480d93; -[SCNNotificationsTweaks initWithTweaks:] */

undefined1 * FUN_00480cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3d58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00480d94; end: 00480d9b; -[SCNNotificationsTweaks tweaks] */

undefined8 FUN_00480d94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00480d9c; end: 00480da3; -[SCNNotificationsTweaks setTweaks:] */

void FUN_00480d9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00480da4; end: 00480daf; -[SCNNotificationsTweaks .cxx_destruct] */

void FUN_00480da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00480db0; end: 00480e2f;  */

undefined8 * FUN_00480db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8360;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x00480de4();
  return param_1;
}



/* Entry: 00480e30; end: 00480f83;  */

void FUN_00480e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_210 [24];
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [200];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [184];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  func_0x00487390();
  FUN_00481198(auStack_48,param_5);
  uStack_110 = param_1;
  uStack_108 = param_2;
  FUN_004813a4(auStack_100,param_5);
  func_0x004862e0(auStack_1d8,&uStack_110);
  FUN_00425cb4(auStack_1f0,param_2);
  if (*(char *)(param_5 + 0xb0) == '\x01') {
    FUN_00459e04(auStack_210,param_5 + 0x68);
  }
  else {
    auStack_210[0] = 0;
    uStack_1f8 = 0;
  }
  FUN_00481230(param_1,auStack_1d8,param_3,param_4,auStack_1f0,param_6,auStack_48[0],uStack_44,
               auStack_40,auStack_20,auStack_210,param_7);
  FUN_00457530(auStack_210);
  func_0x00487158();
  func_0x004872d4();
  FUN_00463c5c(auStack_100);
  func_0x00486308(auStack_48);
  return;
}



/* Entry: 00480f84; end: 00481133;  */

void FUN_00480f84(long param_1,undefined8 param_2,undefined8 param_3,qword *param_4)

{
  qword qVar1;
  qword qVar2;
  char *pcVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uVar5;
  qword *pqStack_1a8;
  char *pcStack_1a0;
  qword qStack_190;
  qword qStack_188;
  undefined1 auStack_158 [256];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  func_0x005ba43c(param_2,&uStack_48);
  if ((int)param_2 == 0) {
    plVar4 = (long *)*param_4;
    func_0x00487300();
    func_0x00487084();
    func_0x004870b0();
    func_0x00487148();
    func_0x00487014(*(undefined8 *)(*plVar4 + 0x30));
    func_0x00487140();
    func_0x00486dc0();
    func_0x00487160();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_00425cb4(auStack_158,"PushNotificationService");
    qVar1 = *param_4;
    qVar2 = param_4[1];
    pcVar3 = segment_command_00000020.segname + 8;
    __Znwm();
    *(qword *)(pcVar3 + 8) = 0;
    *(qword *)(pcVar3 + 0x10) = 0;
    *(undefined ***)pcVar3 = &PTR_FUN_009e8670;
    qStack_190 = qVar1;
    qStack_188 = qVar2;
    if (qVar2 != 0) {
      do {
        func_0x00486d10();
      } while (extraout_w10 != 0);
      do {
        func_0x00486d10();
      } while (extraout_w10_00 != 0);
    }
    *(qword *)(pcVar3 + 0x20) = qVar1;
    *(qword *)(pcVar3 + 0x28) = qVar2;
    func_0x00485fd4(&qStack_190);
    pqStack_1a8 = (qword *)(pcVar3 + 0x18);
    *pqStack_1a8 = (qword)&PTR_DAT_009e86c0;
    uStack_58 = 0;
    uStack_50 = 0;
    qStack_190 = 0;
    qStack_188 = 0;
    pcStack_1a0 = pcVar3;
    FUN_00480e30(uVar5,"/snapchat.notification.PushNotificationService/AckNotification",&uStack_48,
                 auStack_158,param_3,&pqStack_1a8,&qStack_190);
    func_0x00467d6c(&qStack_190);
    func_0x004870a0();
    FUN_00486c78(&uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  }
  FUN_00468b24(&uStack_48);
  return;
}



/* Entry: 00481134; end: 0048115f;  */

bool FUN_00481134(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  bVar1 = false;
  if (lVar2 != 0) {
    FUN_004083ec(lVar2,0);
    bVar1 = (int)lVar2 - 1U < 2;
  }
  return bVar1;
}



/* Entry: 00481160; end: 00481197;  */

void FUN_00481160(void)

{
  func_0x00487370();
  return;
}



/* Entry: 00481198; end: 0048122f;  */

void FUN_00481198(byte *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    *param_1 = (*(byte *)(param_2 + 0x40) | *(byte *)(param_2 + 0x41) ^ 0xff) & 1;
    uVar1 = *(undefined4 *)(param_2 + 0x88);
    if (*(char *)(param_2 + 0x8c) == '\0') {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 4) = uVar1;
    FUN_00459e04(param_1 + 8,param_2 + 0x48);
    FUN_00459e04(param_1 + 0x28,param_2 + 0x90);
  }
  else {
    *param_1 = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0x20] = 0;
    param_1[0x28] = 0;
    param_1[0x40] = 0;
  }
  return;
}



/* Entry: 00481230; end: 004813a3;  */

void FUN_00481230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 auStack_2f0 [200];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [56];
  undefined1 auStack_1d8 [256];
  undefined1 auStack_d8 [184];
  undefined1 auStack_20 [32];
  
  func_0x00487390();
  FUN_005b9a64(auStack_20,param_1 + 0x1e0,param_5);
  FUN_00481494(auStack_1d8,param_1,auStack_20,param_1 + 0x88,in_stack_00000060,param_4,0,param_7,
               param_8,in_stack_00000070,in_stack_00000068,in_stack_00000078);
  if (*(char *)(param_1 + 200) == '\x01') {
    plVar1 = (long *)*param_6;
    FUN_00425cb4(auStack_228,"Abort requests in Guest Mode");
    FUN_0046e000(auStack_210,10,auStack_228);
    func_0x00486ebc(*(undefined8 *)(*plVar1 + 0x30),plVar1,auStack_1d8,auStack_210);
    FUN_00464a10(auStack_210);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
  }
  else {
    func_0x0048728c(auStack_2f0);
    FUN_004818ac(param_1,auStack_2f0,param_3,auStack_1d8,auStack_d8,param_6);
    func_0x004870c8();
  }
  func_0x004862b8(auStack_1d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_20);
  return;
}



/* Entry: 004813a4; end: 004813d7;  */

undefined1 * FUN_004813a4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xb0] = 0;
  FUN_004813d8();
  return param_1;
}



/* Entry: 004813d8; end: 004813eb;  */

void FUN_004813d8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_00481408();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 004813ec; end: 00481407;  */

void FUN_004813ec(long param_1)

{
  FUN_00481408();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 00481408; end: 00481493;  */

void FUN_00481408(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00486dc8();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_004591f4(param_1 + 2,param_2 + 2);
  *(undefined2 *)(unaff_x19 + 0x40) = *(undefined2 *)(unaff_x20 + 0x40);
  FUN_00459e04(unaff_x19 + 0x48,unaff_x20 + 0x48);
  FUN_00459e04(unaff_x19 + 0x68,unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  FUN_00459e04(unaff_x19 + 0x90,unaff_x20 + 0x90);
  return;
}



/* Entry: 00481494; end: 004818ab;  */

void FUN_00481494(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [256];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  long lStack_108;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  char cStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_98;
  char cStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  int iStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  func_0x00487390();
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x3f800000;
  cStack_c8 = '\0';
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  auStack_e0[0] = 0;
  uStack_a0 = 0x3f800000;
  uStack_98 = 0;
  cStack_80 = '\0';
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  plStack_68 = (long *)0x0;
  uStack_58 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_48 = 0;
  lStack_108 = param_1 + 0x220;
  cStack_100 = '\x01';
  __ZNSt3__15mutex4lockEv();
  bVar3 = *(byte *)(param_1 + 0x100);
  if ((bVar3 & 1) == 0) {
    FUN_005baa98(auStack_248,param_2);
    FUN_00473a54(param_1 + 0xe8,auStack_248);
    func_0x00487074();
  }
  else {
    FUN_00456f00(&lStack_108);
  }
  puVar9 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar9 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else {
    FUN_00459e04(auStack_128,param_1 + 0x1c0);
    FUN_00459e04(auStack_148,param_4);
    (**(code **)*puVar9)(auStack_248,puVar9,param_2,param_3,param_1 + 0xe8,auStack_128,auStack_148);
    FUN_00467eec(&uStack_f8,auStack_248);
    FUN_0046c560(auStack_248);
    FUN_00457530(auStack_148);
    FUN_00457530(auStack_128);
    if (((bVar3 & 1) == 0) && (cStack_c8 == '\x01')) {
      puVar7 = auStack_e0;
      FUN_00459c38(puVar7,param_1 + 0x200);
      if (((ulong)puVar7 & 1) == 0) {
        FUN_00481a38(param_1,auStack_e0);
      }
    }
    plVar1 = plStack_68;
    if (cStack_80 == '\x01') {
      FUN_00425cb4(auStack_248,"x-snap-route-tag");
      func_0x00487354();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x00487074();
      plVar1 = plStack_68;
    }
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      FUN_00476f08(&uStack_40,plVar1 + 2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    }
    uVar8 = 2;
    if (iStack_48 != 1) {
      uVar8 = 0;
    }
  }
  if (cStack_100 == '\x01') {
    FUN_00456f00(&lStack_108);
  }
  if ((bRam0000000000b04eb0 & 1) == 0) {
    iVar6 = 0xb04eb0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_005bad5c(0xb04e98);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_00998a28
                    ,0xb04e98,0);
      ___cxa_guard_release(0xb04eb0);
    }
  }
  uVar2 = uRam0000000000b04ea0;
  if (-1 < (char)bRam0000000000b04eaf) {
    uVar2 = (ulong)bRam0000000000b04eaf;
  }
  if ((((param_6 & 1) == 0) && (uVar2 != 0)) && (*(int *)(param_1 + 0x218) == 2)) {
    FUN_00425cb4(auStack_248,"accept-encoding");
    func_0x00487354();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x00487074();
  }
  FUN_00459e04(auStack_268,in_stack_00000068);
  uStack_278 = in_stack_00000070[1];
  uStack_280 = *in_stack_00000070;
  if (in_stack_00000070[1] != 0) {
    plVar1 = (long *)(in_stack_00000070[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00481f58(auStack_248,param_5,param_2,param_6,param_7,param_8,in_stack_00000060,&uStack_40,
               uVar8);
  func_0x00467d6c(&uStack_280);
  FUN_00457530(auStack_268);
  FUN_00482060(extraout_x8,auStack_248,&uStack_f8);
  func_0x00467d18(auStack_248);
  FUN_0040d514(&lStack_108);
  FUN_0046c560(&uStack_f8);
  func_0x00459d84(&uStack_40);
  return;
}



/* Entry: 004818ac; end: 00481a37;  */

void FUN_004818ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 *param_6)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [200];
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [184];
  undefined1 auStack_158 [200];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_00482450(auStack_210,param_5);
  func_0x0048728c(auStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_90,param_4 + 0xa0);
  FUN_004829a4(auStack_78,param_3);
  uStack_68 = param_6[1];
  uStack_70 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_004822b8(&lStack_220,param_1 + 0xd0,param_6,auStack_210,param_5);
  func_0x0048728c(auStack_2e8);
  if (lStack_220 == 0) {
    lStack_2f8 = 0;
    lStack_2f0 = 0;
  }
  else {
    lStack_2f8 = lStack_220;
    lStack_2f0 = lStack_218;
    if (lStack_218 != 0) {
      do {
        func_0x00486d10();
      } while (extraout_w10_01 != 0);
    }
  }
  FUN_004822e4(param_1,auStack_2e8,param_3,param_4,&lStack_2f8);
  func_0x004870a0();
  func_0x004870c8();
  func_0x0048624c(&lStack_220);
  func_0x00486270(auStack_210);
  return;
}



/* Entry: 00481a38; end: 00481acb;  */

void FUN_00481a38(long param_1)

{
  long *plVar1;
  int extraout_w10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [4];
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  plVar1 = alStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x004870b8();
  if (*plVar1 == *(long *)(param_1 + 0x38)) {
    FUN_00481b00(&uStack_50);
  }
  else {
    FUN_00481b6c(*(long *)(param_1 + 0x38),&uStack_50);
  }
  FUN_00481cdc(&uStack_50);
  return;
}



/* Entry: 00481acc; end: 00481aff;  */

long FUN_00481acc(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_00481d04(param_1,param_2,&UNK_008000a0,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 00481b00; end: 00481b6b;  */

void FUN_00481b00(long param_1)

{
  long alStack_30 [2];
  
  FUN_00481bc4(alStack_30);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0x34) & 1) == 0)) {
    func_0x005b87cc(*(undefined8 *)(alStack_30[0] + 0x18),param_1 + 0x10);
    if ((*(byte *)(alStack_30[0] + 0x35) & 1) == 0) {
      FUN_00468160();
    }
  }
  func_0x0046c830(alStack_30);
  return;
}



/* Entry: 00481b6c; end: 00481bc3;  */

void FUN_00481b6c(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 auStack_88 [12];
  undefined8 uStack_28;
  
  func_0x00486ce0();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  func_0x00481c00();
  func_0x004871e8();
  func_0x00486dd4();
  func_0x00486d20();
  func_0x00486c9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00486d20();
  func_0x00486da8();
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  lVar2 = puVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8_00[1] = lVar2;
    if (lVar2 != 0) {
      *extraout_x8_00 = *puVar1;
    }
  }
  return;
}



/* Entry: 00481bc4; end: 00481c2b;  */

void FUN_00481bc4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 00481c2c; end: 00481c43;  */

void FUN_00481c2c(long param_1)

{
  long lVar1;
  long alStack_30 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_00481bc4(alStack_30);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0x34) & 1) == 0)) {
    func_0x005b87cc(*(undefined8 *)(alStack_30[0] + 0x18),lVar1 + 0x10);
    if ((*(byte *)(alStack_30[0] + 0x35) & 1) == 0) {
      FUN_00468160();
    }
  }
  func_0x0046c830(alStack_30);
  return;
}



/* Entry: 00481c44; end: 00481c63;  */

void FUN_00481c44(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00481cdc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00481c64; end: 00481c67;  */

void FUN_00481c64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00481c68; end: 00481ca3;  */

void FUN_00481c68(void)

{
  func_0x00486e8c();
  __Znwm(0x28);
  FUN_00481ca4();
  func_0x00487248();
  return;
}



/* Entry: 00481ca4; end: 00481cdb;  */

undefined8 * FUN_00481ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 00481cdc; end: 00481d03;  */

undefined8 FUN_00481cdc(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x0046cd3c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 00481d04; end: 00481eff;  */

undefined1  [16] FUN_00481d04(float param_1,float param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  long *plVar4;
  long *unaff_x21;
  long *plVar5;
  long *plVar6;
  long *unaff_x27;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 auStack_78 [3];
  
  plVar4 = param_3 + 3;
  FUN_004597c4();
  plVar6 = (long *)param_3[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x27 = (long *)(uVar7 & (ulong)plVar4);
    }
    else {
      unaff_x27 = plVar4;
      if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x27 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_3 + (long)unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_00481dd4;
          plVar3 = (long *)unaff_x21[1];
          plVar5 = unaff_x21;
          if (plVar3 != plVar4) break;
          plVar3 = unaff_x21 + 2;
          FUN_00459c38(plVar3,param_4);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_00481ed0;
          }
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar7);
        }
        else if (plVar6 <= plVar3) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
        }
      } while (plVar3 == unaff_x27);
    }
  }
LAB_00481dd4:
  func_0x00487440(auStack_78);
  FUN_00481f00();
  func_0x0048742c();
  if ((plVar6 == (long *)0x0) || (param_2 * (float)plVar6 < param_1)) {
    func_0x00487230((long)plVar6 << 1);
    FUN_00459320(param_3);
    plVar6 = (long *)param_3[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x27 = plVar4;
      if (plVar6 <= plVar4) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x27 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
      }
    }
  }
  if (*(long *)(*param_3 + (long)unaff_x27 * 8) == 0) {
    func_0x00487218();
    *(undefined8 *)(extraout_x8 + (long)unaff_x27 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      plVar4 = *(long **)(*unaff_x21 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar4) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
      }
      *(long **)(extraout_x8 + (long)plVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00487418();
  }
  auStack_78[0] = 0;
  param_3[3] = param_3[3] + 1;
  FUN_00459cdc(auStack_78);
  uVar2 = 1;
LAB_00481ed0:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 00481f00; end: 00481f57;  */

void FUN_00481f00(void)

{
  long lVar1;
  undefined8 *in_x3;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  __Znwm();
  func_0x004873f8();
  in_x3 = (undefined8 *)*in_x3;
  uVar3 = in_x3[1];
  uVar2 = *in_x3;
  *(undefined8 *)(lVar1 + 0x20) = in_x3[2];
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  in_x3[1] = 0;
  in_x3[2] = 0;
  *in_x3 = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 00481f58; end: 0048205f;  */

void FUN_00481f58(void)

{
  long lVar1;
  undefined1 in_w3;
  undefined1 in_w4;
  undefined4 in_w5;
  undefined8 in_x7;
  long unaff_x19;
  undefined8 uVar2;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  func_0x00487120();
  func_0x004872e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0x30);
  FUN_00459254(unaff_x19 + 0x48,in_x7);
  *(undefined1 *)(unaff_x19 + 0x70) = in_w4;
  *(undefined4 *)(unaff_x19 + 0x74) = in_w5;
  func_0x004872c8();
  *(undefined1 *)(unaff_x19 + 0x98) = in_w3;
  lVar1 = unaff_x19 + 0xa0;
  func_0x004872b4();
  FUN_006ad008();
  *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  *(long *)(unaff_x19 + 0xb8) = lVar1;
  *(undefined4 *)(unaff_x19 + 0xc0) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0xc4) = in_stack_00000008;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (*(char *)(in_stack_00000010 + 3) == '\x01') {
    func_0x00487050(*in_stack_00000010);
    in_stack_00000010[1] = 0;
    in_stack_00000010[2] = 0;
    *in_stack_00000010 = 0;
    *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  }
  uVar2 = *in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00000018[1];
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  *in_stack_00000018 = 0;
  in_stack_00000018[1] = 0;
  return;
}



/* Entry: 00482060; end: 00482247;  */

long FUN_00482060(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00482090();
  func_0x004821a4(lVar1 + 0x100,param_3);
  return param_1;
}



/* Entry: 00482248; end: 004822b7;  */

void FUN_00482248(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 004822b8; end: 004822e3;  */

void FUN_004822b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_004829c8(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 004822e4; end: 0048244f;  */

void FUN_004822e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,long *param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  long lStack_440;
  long lStack_438;
  undefined1 auStack_338 [256];
  undefined1 auStack_238 [200];
  undefined8 auStack_170 [33];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = &lStack_440;
  func_0x00486cf4();
  uStack_48 = extraout_x8;
  func_0x004862e0(auStack_238);
  FUN_0048420c(auStack_170,param_2,auStack_238,param_4,param_5 + 0xa0,param_6);
  func_0x004872d4();
  uVar1 = *(char *)(param_5 + 0x70) == '\x01';
  if ((bool)uVar1) {
    lStack_440 = *param_6;
    if (lStack_440 == 0) {
      lStack_440 = 0;
      lStack_438 = 0;
    }
    else {
      lStack_438 = param_6[1];
      if (lStack_438 != 0) {
        do {
          func_0x00486d10();
        } while (extraout_w10 != 0);
      }
    }
    uStack_50 = 0;
    plVar3 = auStack_170;
    FUN_0048429c(param_2,plVar3,param_5,&lStack_440,auStack_68);
    func_0x00485f90(auStack_68);
    func_0x00485fd4(&lStack_440);
  }
  else {
    param_2 = *(long *)(param_2 + 0x38);
    FUN_00486160(&lStack_440,auStack_170);
    FUN_00483978(auStack_338,param_5);
    FUN_004843ec(param_2,&lStack_440);
    func_0x00486224(&lStack_440);
  }
  func_0x004861f0(auStack_170);
  func_0x00486c9c(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00486e9c();
    func_0x00486224();
    puVar2 = auStack_170;
    func_0x004861f0();
    func_0x00486da8();
    func_0x00486dc8();
    func_0x004871a8();
    puVar2[1] = in_register_00005008;
    *puVar2 = param_1;
    FUN_00459e04(puVar2 + 3,plVar3 + 3);
    FUN_004824d0(param_5 + 0x38,param_2 + 0x38);
    FUN_00459e04(param_5 + 0x60,param_2 + 0x60);
    FUN_00459254(param_5 + 0x80,param_2 + 0x80);
    func_0x004871b8();
    return;
  }
  return;
}



/* Entry: 00482450; end: 004824cf;  */

void FUN_00482450(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00486dc8();
  func_0x004871a8();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  FUN_00459e04(param_2 + 3,param_3 + 0x18);
  FUN_004824d0(unaff_x19 + 0x38,unaff_x20 + 0x38);
  FUN_00459e04(unaff_x19 + 0x60,unaff_x20 + 0x60);
  FUN_00459254(unaff_x19 + 0x80,unaff_x20 + 0x80);
  func_0x004871b8();
  return;
}



/* Entry: 004824d0; end: 0048251f;  */

void FUN_004824d0(undefined8 *param_1,long param_2)

{
  func_0x00486dc8();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x00482558();
  func_0x00482520();
  return;
}



/* Entry: 00482520; end: 0048261b;  */

void FUN_00482520(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00486e64();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x00482734();
  }
  return;
}



/* Entry: 0048261c; end: 00482717;  */

void FUN_0048261c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_00468068(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_00482718(plVar3);
    FUN_00468068(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 00482718; end: 00482767;  */

void FUN_00482718(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
    return;
  }
  FUN_0040cee8();
  func_0x0048274c();
  return;
}



/* Entry: 00482768; end: 0048292b;  */

undefined1  [16] FUN_00482768(float param_1,float param_2,long *param_3,int *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  undefined8 extraout_x9;
  ulong uVar5;
  long *unaff_x21;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x23;
  undefined1 auVar8 [16];
  undefined8 auStack_58 [3];
  
  uVar5 = (ulong)*param_4;
  uVar7 = param_3[1];
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
    if ((uVar7 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar5;
    }
    else {
      unaff_x23 = uVar5;
      if (uVar7 <= uVar5) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar5 / uVar7;
        }
        unaff_x23 = uVar5 - uVar4 * uVar7;
      }
    }
    plVar6 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar6;
          if (unaff_x21 == (long *)0x0) goto LAB_00482814;
          uVar4 = unaff_x21[1];
          plVar6 = unaff_x21;
          if (uVar4 != uVar5) break;
          if ((int)unaff_x21[2] == *param_4) {
            uVar2 = 0;
            goto LAB_00482904;
          }
        }
        if ((uVar7 & uVar3) == 0) {
          uVar4 = uVar4 & uVar3;
        }
        else if (uVar7 <= uVar4) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar4 / uVar7;
          }
          uVar4 = uVar4 - uVar1 * uVar7;
        }
      } while (uVar4 == unaff_x23);
    }
  }
LAB_00482814:
  func_0x00487440(auStack_58);
  FUN_0048292c();
  func_0x0048742c();
  if ((uVar7 == 0) || (param_2 * (float)uVar7 < param_1)) {
    func_0x00487230(uVar7 << 1);
    func_0x00482558(param_3);
    uVar7 = param_3[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x23 = uVar7 - 1 & uVar5;
    }
    else {
      unaff_x23 = uVar5;
      if (uVar7 <= uVar5) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar5 / uVar7;
        }
        unaff_x23 = uVar5 - uVar3 * uVar7;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x00487218();
    *(undefined8 *)(extraout_x8 + unaff_x23 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar5 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar5 = uVar5 & uVar7 - 1;
      }
      else if (uVar7 <= uVar5) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar5 / uVar7;
        }
        uVar5 = uVar5 - uVar3 * uVar7;
      }
      *(long **)(extraout_x8 + uVar5 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00487418();
  }
  auStack_58[0] = 0;
  param_3[3] = param_3[3] + 1;
  FUN_00482968(auStack_58);
  uVar2 = 1;
LAB_00482904:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 0048292c; end: 00482967;  */

void FUN_0048292c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = 0x18;
  __Znwm();
  func_0x004873f8();
  *(undefined4 *)(lVar1 + 0x10) = *param_3;
  return;
}



/* Entry: 00482968; end: 0048298b;  */

undefined8 FUN_00482968(undefined8 param_1)

{
  FUN_0048298c(param_1,0);
  return param_1;
}



/* Entry: 0048298c; end: 004829a3;  */

void FUN_0048298c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004829a4; end: 004829c7;  */

undefined8 * FUN_004829a4(undefined8 *param_1)

{
  *param_1 = 0;
  func_0x0046a6c8();
  return param_1;
}



/* Entry: 004829c8; end: 00482a43;  */

long FUN_004829c8(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x23;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00487200();
  func_0x00486cf4();
  uStack_48 = extraout_x8;
  FUN_00482a44(auStack_60,1);
  FUN_00482a9c();
  func_0x004871d0();
  func_0x004841fc();
  func_0x00486c9c(uStack_48);
  if ((bool)in_ZR) {
    return lStack_50;
  }
  ___stack_chk_fail();
  func_0x00486e9c();
  func_0x004841fc();
  lVar1 = lStack_50;
  func_0x00486da8();
  *(undefined8 *)(lVar1 + 8) = unaff_x23;
  lVar2 = lVar1;
  FUN_00482a6c();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 00482a44; end: 00482a6b;  */

long FUN_00482a44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_00482a6c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 00482a6c; end: 00482a9b;  */

undefined8 * FUN_00482a6c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xd79435e50d7944) {
    puVar1 = (undefined8 *)(param_2 * 0x130);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e83a8;
  param_1[1] = 0;
  FUN_00482afc(param_1 + 3);
  return param_1;
}



/* Entry: 00482a9c; end: 00482adb;  */

undefined8 * FUN_00482a9c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e83a8;
  param_1[1] = 0;
  FUN_00482afc(param_1 + 3);
  return param_1;
}



/* Entry: 00482adc; end: 00482adf;  */

void FUN_00482adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e83a8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00482ae0; end: 00482af3;  */

void FUN_00482ae0(void)

{
  FUN_004841ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00482af4; end: 00482afb;  */

void FUN_00482af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00486f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00482afc; end: 00482ba3;  */

undefined8 * FUN_00482afc(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 in_x3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *unaff_x19;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [5];
  undefined8 uStack_48;
  
  func_0x00486ce0();
  uStack_48 = extraout_x8;
  FUN_00482ba4(auStack_78,in_x3);
  FUN_004830fc();
  func_0x00486ed8();
  (*extraout_x8_00)();
  func_0x00486c9c(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00486ed8();
  puVar1 = auStack_70;
  (*extraout_x8_01)();
  func_0x00486da8();
  *puVar1 = FUN_00482bd0;
  FUN_00482fcc(puVar1 + 1);
  return puVar1;
}



/* Entry: 00482ba4; end: 00482bcf;  */

undefined8 * FUN_00482ba4(undefined8 *param_1)

{
  *param_1 = FUN_00482bd0;
  FUN_00482fcc(param_1 + 1);
  return param_1;
}



/* Entry: 00482bd0; end: 00482bdf;  */

void FUN_00482bd0(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [184];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [256];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  long alStack_10 [2];
  
  lVar8 = *(long *)(param_2 + 0x10);
  func_0x00487390(lVar8,param_1);
  func_0x00486ef0();
  FUN_00481bc4(auStack_1c8,lVar8 + 0x1b0);
  FUN_00482e48(alStack_10,auStack_1c8);
  func_0x0046c830(auStack_1c8);
  if ((alStack_10[0] == 0) || (*(char *)(alStack_10[0] + 0x34) == '\x01')) {
    FUN_00425cb4(auStack_c8,"Service disposed");
    func_0x00486ea8(auStack_1c8);
    func_0x00487068();
    func_0x00486d3c();
  }
  else {
    if ((*(char **)(unaff_x19 + 0xf0) == (char *)0x0) || (**(char **)(unaff_x19 + 0xf0) != '\x01'))
    {
      FUN_00482450(auStack_c8);
      iStack_c4 = iStack_c4 + 1;
      uVar4 = *(undefined1 *)(unaff_x19 + 0x98);
      uVar5 = *(undefined1 *)(unaff_x19 + 0x70);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x74);
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xc0);
      FUN_00459e04(auStack_1e8,unaff_x19 + 0xd0);
      uStack_1f8 = *(undefined8 *)(unaff_x19 + 0xf8);
      uStack_200 = *(undefined8 *)(unaff_x19 + 0xf0);
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        plVar1 = (long *)(*(long *)(unaff_x19 + 0xf8) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_00482e9c(auStack_1c8,unaff_x19 + 0x18,unaff_x19 + 0x30,unaff_x19 + 0xa0,uVar4,uVar5,uVar2,
                   unaff_x19 + 0x78,unaff_x19 + 0x48,uVar9,uVar3);
      func_0x00467d6c(&uStack_200);
      FUN_00457530(auStack_1e8);
      func_0x004862e0(auStack_2c8,unaff_x20 + 0xb8);
      FUN_004818ac(alStack_10[0],auStack_2c8,unaff_x20 + 0x198,auStack_1c8,auStack_c8,
                   unaff_x20 + 0x1a0);
      FUN_00463c5c(auStack_2b8);
      func_0x00467d18(auStack_1c8);
      FUN_0046c560(auStack_c8);
      goto LAB_00482dac;
    }
    FUN_00425cb4(auStack_c8,"Request cancelled");
    func_0x00486ea8(auStack_1c8);
    func_0x00487068();
    func_0x00486d3c();
  }
  FUN_00464a10(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
LAB_00482dac:
  FUN_00482fa8(alStack_10);
  return;
}



/* Entry: 00482be0; end: 00482e47;  */

void FUN_00482be0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [184];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [256];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  long alStack_10 [2];
  
  func_0x00487390();
  func_0x00486ef0();
  FUN_00481bc4(auStack_1c8,param_1 + 0x1b0);
  FUN_00482e48(alStack_10,auStack_1c8);
  func_0x0046c830(auStack_1c8);
  if ((alStack_10[0] == 0) || (*(char *)(alStack_10[0] + 0x34) == '\x01')) {
    FUN_00425cb4(auStack_c8,"Service disposed");
    func_0x00486ea8(auStack_1c8);
    func_0x00487068();
    func_0x00486d3c();
  }
  else {
    if ((*(char **)(unaff_x19 + 0xf0) == (char *)0x0) || (**(char **)(unaff_x19 + 0xf0) != '\x01'))
    {
      FUN_00482450(auStack_c8);
      iStack_c4 = iStack_c4 + 1;
      uVar4 = *(undefined1 *)(unaff_x19 + 0x98);
      uVar5 = *(undefined1 *)(unaff_x19 + 0x70);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x74);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xc0);
      FUN_00459e04(auStack_1e8,unaff_x19 + 0xd0);
      uStack_1f8 = *(undefined8 *)(unaff_x19 + 0xf8);
      uStack_200 = *(undefined8 *)(unaff_x19 + 0xf0);
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        plVar1 = (long *)(*(long *)(unaff_x19 + 0xf8) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_00482e9c(auStack_1c8,unaff_x19 + 0x18,unaff_x19 + 0x30,unaff_x19 + 0xa0,uVar4,uVar5,uVar2,
                   unaff_x19 + 0x78,unaff_x19 + 0x48,uVar8,uVar3);
      func_0x00467d6c(&uStack_200);
      FUN_00457530(auStack_1e8);
      func_0x004862e0(auStack_2c8,unaff_x20 + 0xb8);
      FUN_004818ac(alStack_10[0],auStack_2c8,unaff_x20 + 0x198,auStack_1c8,auStack_c8,
                   unaff_x20 + 0x1a0);
      FUN_00463c5c(auStack_2b8);
      func_0x00467d18(auStack_1c8);
      FUN_0046c560(auStack_c8);
      goto LAB_00482dac;
    }
    FUN_00425cb4(auStack_c8,"Request cancelled");
    func_0x00486ea8(auStack_1c8);
    func_0x00487068();
    func_0x00486d3c();
  }
  FUN_00464a10(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
LAB_00482dac:
  FUN_00482fa8(alStack_10);
  return;
}



/* Entry: 00482e48; end: 00482e9b;  */

void FUN_00482e48(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_009e6fe0,&PTR_DAT_009e7018,0), lVar1 != 0)) {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 00482e9c; end: 00482fa7;  */

void FUN_00482e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                 undefined8 param_13,undefined8 *param_14,undefined8 *param_15)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00487120();
  func_0x004872e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0x30,param_3)
  ;
  FUN_00459254(unaff_x19 + 0x48,param_9);
  *(undefined1 *)(unaff_x19 + 0x70) = param_6;
  *(undefined4 *)(unaff_x19 + 0x74) = param_7;
  func_0x004872c8();
  *(undefined1 *)(unaff_x19 + 0x98) = param_5;
  func_0x004872b4(unaff_x19 + 0xa0);
  *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = param_10;
  *(undefined4 *)(unaff_x19 + 0xc0) = param_11;
  *(undefined8 *)(unaff_x19 + 0xc4) = param_13;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (*(char *)(param_14 + 3) == '\x01') {
    uVar2 = param_14[1];
    uVar1 = *param_14;
    *(undefined8 *)(unaff_x19 + 0xe0) = param_14[2];
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
    param_14[1] = 0;
    param_14[2] = 0;
    *param_14 = 0;
    *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  }
  uVar1 = *param_15;
  *(undefined8 *)(unaff_x19 + 0xf8) = param_15[1];
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar1;
  *param_15 = 0;
  param_15[1] = 0;
  return;
}



/* Entry: 00482fa8; end: 00482fcb;  */

void FUN_00482fa8(long param_1)

{
  func_0x00486fa4();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00482fcc; end: 00482fdb;  */

void FUN_00482fcc(undefined8 param_1,undefined8 param_2)

{
  func_0x00486e8c(param_1,&PTR_FUN_009e83e8,param_2);
  __Znwm(0x1c0);
  FUN_0048303c();
  func_0x00487248();
  return;
}



/* Entry: 00482fdc; end: 00482ffb;  */

void FUN_00482fdc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00486270();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00482ffc; end: 00482fff;  */

void FUN_00482ffc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00483000; end: 0048303b;  */

void FUN_00483000(void)

{
  func_0x00486e8c();
  __Znwm(0x1c0);
  FUN_0048303c();
  func_0x00487248();
  return;
}



/* Entry: 0048303c; end: 004830d3;  */

void FUN_0048303c(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00486dc8();
  FUN_00482450();
  FUN_004830d4(param_1 + 0xb8,unaff_x20 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x19 + 0x188) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x180) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  FUN_004829a4(unaff_x19 + 0x198,unaff_x20 + 0x198);
  lVar1 = *(long *)(unaff_x20 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  return;
}



/* Entry: 004830d4; end: 004830fb;  */

undefined8 * FUN_004830d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_00463a14(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 004830fc; end: 004831c7;  */

undefined8 *
FUN_004830fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  *param_1 = &PTR_FUN_009e8410;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  param_1[3] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 4,param_4 + 1);
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_00482450(param_1 + 0xb,param_5);
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



/* Entry: 004831c8; end: 004831cb;  */

undefined8 * FUN_004831c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8410;
  FUN_0046c560(param_1 + 0xb);
  func_0x00486b00(param_1 + 9);
  (**(code **)param_1[4])();
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 004831cc; end: 004831df;  */

void FUN_004831cc(void)

{
  FUN_00483744();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004831e0; end: 0048320f;  */

void FUN_004831e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004831ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 00483210; end: 00483313;  */

void FUN_00483210(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 *puStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  char *pcStack_50;
  undefined8 uStack_48;
  
  func_0x00486e64();
  pcStack_50 = "x-envoy-overloaded";
  uStack_48 = 0x12;
  FUN_00464080(param_3,&pcStack_50);
  if (unaff_x19 + 8 == param_3) {
    FUN_005bad5c(auStack_68);
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 == 0) {
      *(undefined1 *)(unaff_x21 + 0x110) = 0;
    }
    else {
      func_0x005bad60(&puStack_90);
      puStack_78 = puStack_90;
      if (-1 < (long)cStack_79) {
        puStack_78 = (undefined1 *)&puStack_90;
      }
      lStack_70 = lStack_88;
      if (-1 < cStack_79) {
        lStack_70 = (long)cStack_79;
      }
      FUN_00464080();
      *(bool *)(unaff_x21 + 0x110) = param_3 != unaff_x19;
      func_0x00486f6c();
    }
    func_0x004870d0();
  }
  else {
    *(undefined1 *)(unaff_x21 + 0x110) = 1;
  }
  func_0x004872a8(*(undefined8 *)(**(long **)(unaff_x21 + 0x48) + 0x28));
  return;
}



/* Entry: 00483314; end: 004835af;  */

long * FUN_00483314(long param_1,long param_2,int *param_3,long param_4)

{
  undefined1 in_ZR;
  int *piVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  long unaff_x19;
  long unaff_x24;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 uStack_230;
  undefined8 uStack_218;
  long lStack_210;
  long *plStack_208;
  int *piStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [16];
  long alStack_188 [32];
  undefined8 uStack_88;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  func_0x00486ce0();
  uStack_58 = extraout_x8;
  if (((*(byte *)(param_1 + 0x110) & 1) == 0) &&
     (((*(byte **)(param_2 + 0xf0) == (byte *)0x0 || ((**(byte **)(param_2 + 0xf0) & 1) == 0)) &&
      (piVar1 = param_3, FUN_005ba880(param_3,unaff_x19 + 0x58), (int)piVar1 != 0)))) {
    param_3 = (int *)(unaff_x19 + 0x58);
    func_0x0048379c();
    param_4 = *(long *)(unaff_x19 + 8);
    plVar4 = alStack_188;
    FUN_00483978(alStack_188,param_2);
    uStack_88 = *(undefined8 *)(unaff_x19 + 0x18);
    puVar2 = auStack_80;
    func_0x00487030(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x10),puVar2);
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_00483808(auStack_198,param_4,alStack_188,puVar2 + (long)param_3 * 1000000);
    func_0x004631ec(auStack_198);
    plVar3 = alStack_188;
    FUN_00483a64();
  }
  else {
    __ZNSt3__19to_stringEi(auStack_1c8,param_4);
    func_0x00483a94(alStack_188,&PTR_s_fromServer_009e8468,auStack_1c8);
    func_0x00483acc(auStack_1b0,alStack_188,1);
    func_0x00487028();
    func_0x00486dc0();
    func_0x004873a8();
    if ((bool)in_ZR) {
      func_0x00486fb0();
      func_0x00483dc8(auStack_1b0,alStack_188);
      func_0x00487028();
      func_0x00486fb0();
      func_0x00483dc8(auStack_1c8,alStack_188);
      func_0x00487028();
    }
    plVar4 = plRam0000000000b6bf88;
    if (plRam0000000000b6bf88 != (long *)0x0) {
      unaff_x24 = (long)*param_3;
      FUN_0048405c(alStack_188,auStack_1b0);
      func_0x00487198(*(undefined8 *)*plVar4);
      (*extraout_x8_00)();
      func_0x00487168();
    }
    plVar4 = plRam0000000000b6bf88;
    if (plRam0000000000b6bf88 != (long *)0x0) {
      func_0x00487314();
      func_0x00487198(*(undefined8 *)*plVar4);
      (*extraout_x8_01)();
      func_0x00487168();
    }
    plVar4 = plRam0000000000b6bf88;
    if (plRam0000000000b6bf88 != (long *)0x0) {
      unaff_x24 = (long)*(int *)(unaff_x19 + 0x5c);
      func_0x00487314();
      func_0x00487198(*(undefined8 *)*plVar4);
      (*extraout_x8_02)();
      func_0x00487168();
    }
    FUN_005ba72c(0xf,param_2,0,auStack_1c8);
    plVar3 = *(long **)(unaff_x19 + 0x48);
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3,param_4);
    func_0x004870a8();
    func_0x00487138();
  }
  func_0x00486c9c(uStack_58);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_00483a64(alStack_188);
  func_0x00486da8();
  pcStack_1d8 = FUN_004835b0;
  lStack_210 = unaff_x24;
  plStack_208 = plVar4;
  piStack_200 = param_3;
  lStack_1f8 = param_4;
  lStack_1f0 = param_2;
  plStack_1e8 = plVar3;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00486e64();
  func_0x00486cf4();
  uStack_218 = extraout_x8_03;
  FUN_004841bc(auStack_248,&PTR_s_fromServer_009e8468,"1");
  func_0x00483acc(auStack_260,auStack_248,1);
  func_0x00487038();
  func_0x004873a8();
  if ((bool)in_ZR) {
    func_0x00486fc4();
    func_0x00483dc8(auStack_260,auStack_248);
    func_0x00487038();
    func_0x00486fc4();
    func_0x00483dc8(auStack_278,auStack_248);
    func_0x00487038();
  }
  plVar4 = plRam0000000000b6bf88;
  if (plRam0000000000b6bf88 != (long *)0x0) {
    FUN_0048405c(auStack_248,auStack_260);
    (**(code **)*plVar4)(plVar4,0xd,param_2 + 0xa0,0,auStack_248);
    func_0x00487344();
  }
  if (plRam0000000000b6bf88 != (long *)0x0) {
    auStack_248[0] = 0;
    uStack_230 = 0;
    (**(code **)*plRam0000000000b6bf88)
              (plRam0000000000b6bf88,0x10,param_2 + 0xa0,(long)*(int *)(param_4 + 0x5c),auStack_248)
    ;
    func_0x00487344();
  }
  FUN_005ba72c(0xf,param_2,1,auStack_278);
  plVar4 = *(long **)(param_4 + 0x48);
  func_0x004872a8(*(undefined8 *)(*plVar4 + 0x38));
  func_0x004870a8();
  func_0x00487138();
  func_0x00486c9c(uStack_218);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00487038();
  func_0x004870a8();
  func_0x00487138();
  func_0x00486da8();
  *plVar4 = (long)&PTR_FUN_009e8410;
  FUN_0046c560(plVar4 + 0xb);
  func_0x00486b00(plVar4 + 9);
  (**(code **)plVar4[4])();
  func_0x0045a078(plVar4 + 1);
  return plVar4;
}



/* Entry: 004835b0; end: 00483743;  */

long * FUN_004835b0(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined8 uStack_48;
  
  func_0x00486e64();
  func_0x00486cf4();
  uStack_48 = extraout_x8;
  FUN_004841bc(auStack_78,&PTR_s_fromServer_009e8468,"1");
  func_0x00483acc(auStack_90,auStack_78,1);
  func_0x00487038();
  func_0x004873a8();
  if ((bool)in_ZR) {
    func_0x00486fc4();
    func_0x00483dc8(auStack_90,auStack_78);
    func_0x00487038();
    func_0x00486fc4();
    func_0x00483dc8(auStack_a8,auStack_78);
    func_0x00487038();
  }
  puVar1 = puRam0000000000b6bf88;
  if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
    FUN_0048405c(auStack_78,auStack_90);
    (**(code **)*puVar1)(puVar1,0xd,unaff_x20 + 0xa0,0,auStack_78);
    func_0x00487344();
  }
  if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
    auStack_78[0] = 0;
    uStack_60 = 0;
    (**(code **)*puRam0000000000b6bf88)
              (puRam0000000000b6bf88,0x10,unaff_x20 + 0xa0,(long)*(int *)(unaff_x21 + 0x5c),
               auStack_78);
    func_0x00487344();
  }
  FUN_005ba72c(0xf);
  plVar2 = *(long **)(unaff_x21 + 0x48);
  func_0x004872a8(*(undefined8 *)(*plVar2 + 0x38));
  func_0x004870a8();
  func_0x00487138();
  func_0x00486c9c(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00487038();
  func_0x004870a8();
  func_0x00487138();
  func_0x00486da8();
  *plVar2 = (long)&PTR_FUN_009e8410;
  FUN_0046c560(plVar2 + 0xb);
  func_0x00486b00(plVar2 + 9);
  (**(code **)plVar2[4])();
  func_0x0045a078(plVar2 + 1);
  return plVar2;
}



/* Entry: 00483744; end: 00483807;  */

undefined8 * FUN_00483744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8410;
  FUN_0046c560(param_1 + 0xb);
  func_0x00486b00(param_1 + 9);
  (**(code **)param_1[4])();
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 00483808; end: 0048388f;  */

undefined8 *
FUN_00483808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_98 [8];
  undefined8 auStack_90 [11];
  undefined8 uStack_38;
  
  func_0x00486cf4();
  uStack_38 = extraout_x8;
  FUN_00483890(auStack_98);
  FUN_0064c418(param_1,param_2,auStack_98,param_4);
  func_0x00486ed8();
  puVar1 = auStack_90;
  (*extraout_x8_00)();
  func_0x00486c9c(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00486ed8();
  puVar1 = auStack_90;
  (*extraout_x8_01)();
  func_0x00486da8();
  *puVar1 = 0x4838bc;
  func_0x004838cc(puVar1 + 1);
  return puVar1;
}



/* Entry: 00483890; end: 004838bb;  */

undefined8 * FUN_00483890(undefined8 *param_1)

{
  *param_1 = 0x4838bc;
  func_0x004838cc(param_1 + 1);
  return param_1;
}



/* Entry: 004838bc; end: 004838db;  */

void FUN_004838bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x004838c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x100))(lVar1,lVar1 + 0x100);
  return;
}



/* Entry: 004838dc; end: 004838fb;  */

void FUN_004838dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00483a64();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004838fc; end: 004838ff;  */

void FUN_004838fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00483900; end: 0048393b;  */

void FUN_00483900(void)

{
  func_0x00486e8c();
  __Znwm(0x130);
  FUN_0048393c();
  func_0x00487248();
  return;
}



/* Entry: 0048393c; end: 00483977;  */

void FUN_0048393c(long param_1)

{
  long unaff_x19;
  
  func_0x00486ef0();
  FUN_00483978();
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(unaff_x19 + 0x100);
  (**(code **)(*(long *)(unaff_x19 + 0x108) + 0x10))(param_1 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 00483978; end: 00483a63;  */

void FUN_00483978(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00486dc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00486f74();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_00459254(unaff_x19 + 0x48,unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  FUN_00459e04(unaff_x19 + 0x78,unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x19 + 0x98) = *(undefined1 *)(unaff_x20 + 0x98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x19 + 200) = *(undefined1 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
  FUN_00459e04(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  lVar1 = *(long *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 00483a64; end: 00483aff;  */

void FUN_00483a64(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x108))(param_1 + 0x108);
  func_0x00467d6c(param_1 + 0xf0);
  FUN_00457530(param_1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa0);
  FUN_00457530(param_1 + 0x78);
  func_0x00459d84(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00483b00; end: 00483b47;  */

void FUN_00483b00(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00486e74();
    FUN_00483b48();
    func_0x00486f34();
    FUN_00483b78();
  }
  func_0x00487100();
  return;
}



/* Entry: 00483b48; end: 00483b77;  */

void FUN_00483b48(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  
  func_0x00487254();
  if ((bool)in_CY) {
    FUN_00483ba8();
    lVar1 = param_1 + 0x10;
    func_0x00483bf4();
    *(long *)(param_1 + 8) = lVar1;
  }
  else {
    FUN_00483bb4(param_1 + 0x10);
    func_0x004873d0();
  }
  return;
}



/* Entry: 00483b78; end: 00483ba7;  */

void FUN_00483b78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00483bf4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00483ba8; end: 00483bb3;  */

void FUN_00483ba8(void)

{
  func_0x00486f54();
  FUN_00483bd4();
  return;
}



/* Entry: 00483bb4; end: 00483bd3;  */

void FUN_00483bb4(void)

{
  FUN_00483bd4();
  return;
}



/* Entry: 00483bd4; end: 00483c07;  */

void FUN_00483bd4(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x00487254();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x30);
    return;
  }
  FUN_0040cee8();
  FUN_00483c08();
  return;
}



/* Entry: 00483c08; end: 00483c53;  */

void FUN_00483c08(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00486d5c();
  while (unaff_x21 != unaff_x19) {
    func_0x004871f4();
    FUN_00483c54();
    func_0x00486f20();
  }
  func_0x00487110();
  return;
}



/* Entry: 00483c54; end: 00483c7f;  */

void FUN_00483c54(void)

{
  func_0x00486dc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00486f74();
  return;
}



/* Entry: 00483c80; end: 00483caf;  */

long FUN_00483c80(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00483cb0(param_1);
  }
  return param_1;
}



/* Entry: 00483cb0; end: 00483ccf;  */

void FUN_00483cb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00483da0();
  }
  return;
}


