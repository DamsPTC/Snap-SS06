/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052b8d10; end: 1052b8d6b;  */

undefined8 FUN_1052b8d10(void)

{
  int iVar1;
  
  if ((bRam00000001130cc650 & 1) == 0) {
    iVar1 = 0x130cc650;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052a0a34();
      func_0x00010b990784(0x1130cc640);
      ___cxa_guard_release(0x1130cc650);
    }
  }
  return 0x1130cc640;
}



/* Entry: 1052b8d6c; end: 1052b8d87;  */

void FUN_1052b8d6c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1052b8d88; end: 1052b8f1f;  */

undefined8 FUN_1052b8d88(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819300 & 1) == 0) {
    iVar1 = 0x13819300;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_ProgressiveDownloadMetadata");
      pcVar2 = "requestId";
      func_0x0001003a83dc(auStack_98,"requestId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "statusCode";
      func_0x0001003a83dc(auStack_a0,"statusCode");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "contentLength";
      func_0x0001003a83dc(auStack_a8,"contentLength");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "failoverAdvice";
      func_0x0001003a83dc(auStack_b0,"failoverAdvice");
      FUN_1052b8f20();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138192f0,auStack_90,0,auStack_88,4);
      lVar4 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      ___cxa_guard_release(0x113819300);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x1138192f0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc668 & 1) == 0) {
    iVar1 = 0x130cc668;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bd788();
      func_0x00010b990784(0x1130cc658);
      ___cxa_guard_release(0x1130cc668);
    }
  }
  return 0x1130cc658;
}



/* Entry: 1052b8f20; end: 1052b8f7b;  */

undefined8 FUN_1052b8f20(void)

{
  int iVar1;
  
  if ((bRam00000001130cc668 & 1) == 0) {
    iVar1 = 0x130cc668;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bd788();
      func_0x00010b990784(0x1130cc658);
      ___cxa_guard_release(0x1130cc668);
    }
  }
  return 0x1130cc658;
}



/* Entry: 1052b8f7c; end: 1052b8fe3;  */

undefined8 *
FUN_1052b8f7c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = param_4;
  func_0x000100687510(param_1 + 6,param_5);
  return param_1;
}



/* Entry: 1052b8fe4; end: 1052b8fff;  */

void FUN_1052b8fe4(long param_1)

{
  FUN_1052b9000();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1052b9000; end: 1052b902b;  */

void FUN_1052b9000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 1052b902c; end: 1052b9047;  */

void FUN_1052b902c(long param_1)

{
  FUN_1052b9000();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1052b9048; end: 1052b917f;  */

undefined8 *
FUN_1052b9048(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b9180();
  func_0x0001003b2110(auStack_98,0x113819310);
  func_0x000105280820(auStack_88,param_2);
  func_0x000105280820(auStack_78,param_2 + 0x20);
  func_0x000105280820(auStack_68,param_2 + 0x40);
  uStack_58 = *(undefined8 *)(param_2 + 0x60);
  uStack_50 = 5;
  if (*(char *)(param_2 + 0x68) == '\0') {
    uStack_50 = 1;
    uStack_58 = 0;
  }
  uStack_4f = 0;
  uStack_48 = *(undefined8 *)(param_2 + 0x70);
  uStack_40 = 5;
  puVar6 = (undefined8 *)0x5;
  func_0x000104bdb9bc(&uStack_90,auStack_98,auStack_88);
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar5 = &uStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_90;
  func_0x000104bdbf78();
  func_0x0001052b93ec(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1052b9180;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = lVar7;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113819318 & 1) == 0) {
    puVar3 = (undefined8 *)0x113819318;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_TrackingInfo");
      pcVar4 = "id";
      func_0x0001003a83dc(auStack_150,"id");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar4);
      pcVar4 = "type";
      func_0x0001003a83dc(auStack_158,"type");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar4);
      pcVar4 = "mediaType";
      func_0x0001003a83dc(auStack_160,"mediaType");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar4);
      pcVar4 = "contentResolveTime";
      func_0x0001003a83dc(auStack_168,"contentResolveTime");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar4);
      pcVar4 = "expirationInDays";
      func_0x0001003a83dc(auStack_170,"expirationInDays");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar4);
      puVar6 = auStack_140;
      puVar5 = (undefined8 *)0x0;
      param_5 = (undefined8 *)0x5;
      func_0x000104bdbd44(0x113819308,auStack_148);
      lVar7 = 0x60;
      do {
        func_0x0001003b1c5c((long)auStack_140 + lVar7);
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar3 = (undefined8 *)0x113819318;
      ___cxa_guard_release();
    }
  }
  func_0x0001052b93ec(uStack_c8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if ((int)puVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    if (*(char *)(puVar5 + 3) == '\x01') {
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      puVar3[2] = puVar5[2];
      puVar3[1] = uVar9;
      *puVar3 = uVar8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      *(undefined1 *)(puVar3 + 3) = 1;
    }
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    if (*(char *)(puVar6 + 3) == '\x01') {
      uVar9 = puVar6[1];
      uVar8 = *puVar6;
      puVar3[6] = puVar6[2];
      puVar3[5] = uVar9;
      puVar3[4] = uVar8;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(undefined1 *)(puVar3 + 7) = 1;
    }
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    if (*(char *)(param_5 + 3) == '\x01') {
      uVar9 = param_5[1];
      uVar8 = *param_5;
      puVar3[10] = param_5[2];
      puVar3[9] = uVar9;
      puVar3[8] = uVar8;
      param_5[1] = 0;
      param_5[2] = 0;
      *param_5 = 0;
      *(undefined1 *)(puVar3 + 0xb) = 1;
    }
    puVar3[0xc] = param_6;
    puVar3[0xd] = param_7;
    puVar3[0xe] = param_8;
    return puVar3;
  }
  return (undefined8 *)0x113819308;
}



/* Entry: 1052b9180; end: 1052b933b;  */

undefined8 *
FUN_1052b9180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819318 & 1) == 0) {
    param_1 = (undefined8 *)0x113819318;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_TrackingInfo");
      pcVar1 = "id";
      func_0x0001003a83dc(auStack_b0,"id");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar1);
      pcVar1 = "type";
      func_0x0001003a83dc(auStack_b8,"type");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar1);
      pcVar1 = "mediaType";
      func_0x0001003a83dc(auStack_c0,"mediaType");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar1);
      pcVar1 = "contentResolveTime";
      func_0x0001003a83dc(auStack_c8,"contentResolveTime");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar1);
      pcVar1 = "expirationInDays";
      func_0x0001003a83dc(auStack_d0,"expirationInDays");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar1);
      param_3 = auStack_a0;
      param_2 = (undefined8 *)0x0;
      param_4 = (undefined8 *)0x5;
      func_0x000104bdbd44(0x113819308,auStack_a8);
      lVar2 = 0x60;
      do {
        func_0x0001003b1c5c((long)auStack_a0 + lVar2);
        lVar2 = lVar2 + -0x18;
        in_ZR = lVar2 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = (undefined8 *)0x113819318;
      ___cxa_guard_release();
    }
  }
  func_0x0001052b93ec(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x113819308;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    param_1[10] = param_4[2];
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  param_1[0xc] = param_5;
  param_1[0xd] = param_6;
  param_1[0xe] = param_7;
  return param_1;
}



/* Entry: 1052b933c; end: 1052b93ff;  */

void FUN_1052b933c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[10] = param_4[2];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  param_1[0xc] = param_5;
  param_1[0xd] = param_6;
  param_1[0xe] = param_7;
  return;
}



/* Entry: 1052b9400; end: 1052b9d87;  */

void FUN_1052b9400(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  code **ppcVar7;
  code ***pppcVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  code *extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  code *extraout_x8_17;
  long extraout_x8_18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  long *plVar10;
  long lVar11;
  long unaff_x23;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_320;
  undefined8 uStack_318;
  code **ppcStack_310;
  undefined1 auStack_308 [16];
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 auStack_2e0 [3];
  code *apcStack_2c8 [3];
  code **appcStack_2b0 [3];
  code *apcStack_298 [3];
  code **ppcStack_280;
  undefined8 uStack_278;
  code **ppcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  code *apcStack_250 [3];
  code **ppcStack_238;
  undefined8 uStack_230;
  code **ppcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 auStack_208 [3];
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  code **ppcStack_198;
  code **ppcStack_190;
  undefined8 *puStack_188;
  byte abStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  code *apcStack_150 [2];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  code *apcStack_120 [2];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  code *apcStack_e0 [2];
  undefined1 auStack_d0 [16];
  code *apcStack_c0 [2];
  undefined1 auStack_b0 [16];
  code **ppcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136ba050 & 1) == 0) {
    iVar6 = 0x136ba050;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1052bac84();
      FUN_1052ba5ac(0);
      FUN_1052ba5ac(1);
      func_0x00010b9941f8(&ppcStack_a0);
      func_0x00010b993b40(&ppcStack_190,ppcStack_a0,0x113819338);
      if ((abStack_180[0] & 1) == 0) goto LAB_1052b9c2c;
      func_0x0001003adcc0(0x1136ba080,&ppcStack_190);
      func_0x0001003b12dc(&ppcStack_190);
      func_0x000104bdc2fc(&ppcStack_a0);
      ___cxa_guard_release(0x1136ba050);
    }
  }
  func_0x0001003b2110(auStack_1c0,0x1136ba088);
  pcStack_1d8 = FUN_1052b9e24;
  func_0x0001052bbb4c();
  uStack_1d0 = param_2;
  if (extraout_x8 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10 != 0);
  }
  FUN_1052b9d88(&ppcStack_190,&pcStack_1d8);
  pcStack_1f0 = FUN_1052b9eec;
  func_0x0001052bbb4c();
  uStack_1e8 = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_00 != 0);
  }
  ppcVar7 = (code **)abStack_180;
  FUN_1052b9e50(ppcVar7,&pcStack_1f0);
  auStack_208[0] = 0x1052b9f18;
  func_0x0001052bbab0();
  lVar11 = extraout_x11;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052bb9fc();
      lVar11 = extraout_x11_00;
    } while (extraout_w10_01 != 0);
  }
  pcStack_1b0 = (code *)0x1052b9f18;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb1d8;
  ppuStack_98 = &PTR_FUN_110875420;
  pcStack_90 = (code *)0x1052b9f18;
  func_0x0001052bbd08();
  func_0x0001052bbb98();
  ppcStack_220 = ppcVar7;
  func_0x0001052bbbb0();
  (*extraout_x8_02)(unaff_x23 + 8);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_02 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052bbb90(auStack_170);
  func_0x0001052bbb88();
  pppcVar8 = &ppcStack_220;
  func_0x000104bda3d0();
  func_0x0001052bbca4();
  ppcStack_220 = (code **)0x1052b9f44;
  func_0x0001052bbab0();
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_03 != 0);
  }
  pcStack_1b0 = (code *)0x1052b9f44;
  uStack_218 = 0;
  uStack_210 = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb288;
  ppuStack_98 = &PTR_FUN_110875440;
  func_0x0001052bbbbc();
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0001052bbb98();
  ppcStack_238 = (code **)pppcVar8;
  func_0x0001052bb9d0(ppuStack_98);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_04 != 0);
  ppcStack_a0 = (code **)pppcVar8;
  func_0x0001052bbb90(auStack_160);
  func_0x0001052bbb88();
  func_0x000104bda3d0(&ppcStack_238);
  func_0x0001052bbc14();
  ppcStack_238 = (code **)FUN_1052ba00c;
  func_0x0001052bbb4c();
  uStack_230 = param_2;
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_05 != 0);
  }
  ppcVar7 = apcStack_150;
  FUN_1052b9f70(ppcVar7,&ppcStack_238);
  apcStack_250[0] = FUN_1052ba048;
  func_0x0001052bbab0();
  lVar11 = extraout_x11_01;
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001052bb9fc();
      lVar11 = extraout_x11_02;
    } while (extraout_w10_06 != 0);
  }
  pcStack_1b0 = FUN_1052ba048;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb3e8;
  ppuStack_98 = &PTR_FUN_110875480;
  pcStack_90 = FUN_1052ba048;
  func_0x0001052bbd08();
  func_0x0001052bbb98();
  ppcStack_268 = ppcVar7;
  func_0x0001052bbbb0();
  (*extraout_x8_06)(0x1052ba050);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_07 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052bbb90(auStack_140);
  func_0x0001052bbb88();
  pppcVar8 = &ppcStack_268;
  func_0x000104bda3d0();
  func_0x0001052bbca4();
  ppcStack_268 = (code **)FUN_1052ba080;
  func_0x0001052bbab0();
  if (extraout_x8_07 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_08 != 0);
  }
  pcStack_1b0 = FUN_1052ba080;
  uStack_260 = 0;
  uStack_258 = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb498;
  ppuStack_98 = &PTR_FUN_1108754a0;
  func_0x0001052bbbbc();
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0001052bbb98();
  ppcStack_280 = (code **)pppcVar8;
  func_0x0001052bb9d0(ppuStack_98);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_09 != 0);
  ppcStack_a0 = (code **)pppcVar8;
  func_0x0001052bbb90(auStack_130);
  func_0x0001052bbb88();
  func_0x000104bda3d0(&ppcStack_280);
  func_0x0001052bbc14();
  ppcStack_280 = (code **)FUN_1052ba178;
  func_0x0001052bbb4c();
  uStack_278 = param_2;
  if (extraout_x8_08 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_10 != 0);
  }
  ppcVar7 = apcStack_120;
  FUN_1052ba0dc(ppcVar7,&ppcStack_280);
  apcStack_298[0] = FUN_1052ba1a8;
  func_0x0001052bbab0();
  lVar11 = extraout_x11_03;
  if (extraout_x8_09 != 0) {
    do {
      func_0x0001052bb9fc();
      lVar11 = extraout_x11_04;
    } while (extraout_w10_11 != 0);
  }
  pcStack_1b0 = FUN_1052ba1a8;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb5b8;
  ppuStack_98 = &PTR_FUN_1108754e0;
  pcStack_90 = FUN_1052ba1a8;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0001052bbb98();
  appcStack_2b0[0] = ppcVar7;
  func_0x0001052bbbb0();
  (*extraout_x8_10)(&ppuStack_98);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_12 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052bbb90(auStack_110);
  func_0x0001052bbb88();
  func_0x000104bda3d0(appcStack_2b0);
  FUN_1052ac684(&uStack_1a8);
  appcStack_2b0[0] = (code **)FUN_1052ba320;
  func_0x0001052bbb4c();
  if (extraout_x8_11 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_13 != 0);
  }
  FUN_1052b9f70(auStack_100,appcStack_2b0);
  apcStack_2c8[0] = FUN_1052ba35c;
  func_0x0001052bbb4c();
  if (extraout_x8_12 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_14 != 0);
  }
  FUN_1052b9d88(auStack_f0,apcStack_2c8);
  auStack_2e0[0] = 0x1052ba388;
  func_0x0001052bbb4c();
  if (extraout_x8_13 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_15 != 0);
  }
  ppcVar7 = apcStack_e0;
  FUN_1052b9e50(ppcVar7,auStack_2e0);
  pcStack_2f8 = FUN_1052ba3b4;
  func_0x0001052bbab0();
  if (extraout_x8_14 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_16 != 0);
  }
  pcStack_1b0 = FUN_1052ba3b4;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb668;
  ppuStack_98 = &PTR_FUN_110875500;
  func_0x0001052bbbbc();
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0001052bbb98();
  ppcStack_310 = ppcVar7;
  func_0x0001052bb9d0(ppuStack_98);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_17 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052bbb90(auStack_d0);
  func_0x0001052bbb88();
  func_0x0001052bbbe4();
  FUN_1052ac684(&uStack_1a8);
  ppcStack_310 = (code **)FUN_1052ba404;
  func_0x0001052bbb4c();
  if (extraout_x8_15 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_18 != 0);
  }
  ppcVar7 = apcStack_c0;
  FUN_1052ba0dc(ppcVar7,&ppcStack_310);
  func_0x0001052bbab0();
  if (extraout_x8_16 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_19 != 0);
  }
  pcStack_1b0 = FUN_1052ba434;
  uStack_320 = 0;
  uStack_318 = 0;
  func_0x0001052bbb3c();
  ppcStack_a0 = (code **)FUN_1052bb718;
  ppuStack_98 = &PTR_FUN_110875520;
  pcStack_90 = FUN_1052ba434;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0001052bbb98();
  ppcStack_198 = ppcVar7;
  func_0x0001052bbbb0();
  (*extraout_x8_17)(&ppuStack_98);
  do {
    func_0x0001052bba20();
  } while (extraout_w10_20 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052bbb90(auStack_b0);
  func_0x0001052bbb88();
  func_0x000104bda3d0(&ppcStack_198);
  func_0x0001052bbca4();
  func_0x000104bdb9bc(auStack_1b8,auStack_1c0,&ppcStack_190,0xf);
  lVar11 = 0xe0;
  do {
    func_0x00010b9a8d98((long)&ppcStack_190 + lVar11);
    lVar11 = lVar11 + -0x10;
    uVar5 = lVar11 == -0x10;
  } while (!(bool)uVar5);
  FUN_1052ac684(&uStack_320);
  FUN_1052ac684(auStack_308);
  FUN_1052ac684(&uStack_2f0);
  func_0x0001052bbacc(auStack_2e0);
  func_0x0001052bbacc(apcStack_2c8);
  func_0x0001052bbc14();
  func_0x0001052bbacc(apcStack_298);
  func_0x0001052bbacc(&ppcStack_280);
  func_0x0001052bbacc(&ppcStack_268);
  func_0x0001052bbacc(apcStack_250);
  func_0x0001052bbacc(&ppcStack_238);
  func_0x0001052bbacc(&ppcStack_220);
  func_0x0001052bbacc(auStack_208);
  func_0x0001052bbacc(&pcStack_1f0);
  func_0x0001052bbacc(&pcStack_1d8);
  func_0x0001003b1f60(auStack_1c0);
  puVar9 = (undefined8 *)0x50;
  __Znwm();
  plVar10 = puVar9 + 1;
  *plVar10 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_110875550;
  ppcVar7 = (code **)(puVar9 + 3);
  func_0x00010b9ace44(ppcVar7,auStack_1b8);
  puVar9[3] = &PTR_DAT_1108755a0;
  func_0x0001052bbb4c();
  puVar9[9] = uStack_338;
  puVar9[8] = uStack_340;
  if (extraout_x8_18 != 0) {
    do {
      func_0x0001052bb9fc();
    } while (extraout_w10_21 != 0);
  }
  if ((puVar9[5] == 0) || (uVar5 = *(long *)(puVar9[5] + 8) == -1, ppcVar3 = ppcVar7, (bool)uVar5))
  {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppcStack_190 = ppcVar7;
    puStack_188 = puVar9;
    func_0x0001003a8180(puVar9 + 4,&ppcStack_190);
    func_0x0001003a90c4(&ppcStack_190);
    ppcStack_a0 = ppcVar7;
    ppcVar3 = ppcVar7;
    if (puVar9[5] != 0) goto LAB_1052b9b68;
  }
  else {
LAB_1052b9b68:
    do {
      ppcStack_a0 = ppcVar3;
      func_0x0001052bb9fc();
      ppcVar3 = ppcStack_a0;
    } while (extraout_w10_22 != 0);
  }
  *param_1 = (long)ppcVar7;
  FUN_1052bb8ac(&ppcStack_a0);
  func_0x000104bdbf78(auStack_1b8);
  func_0x0001052bba48(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1052b9c2c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052b9c34);
  (*pcVar4)();
}



/* Entry: 1052b9d88; end: 1052b9e23;  */

void FUN_1052b9d88(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int extraout_w10;
  undefined8 uStack_48;
  
  func_0x0001052bb938();
  func_0x0001052bbb3c();
  func_0x0001052bb9dc(FUN_1052bb0cc);
  func_0x0001052bbc80();
  func_0x0001052bb974();
  do {
    func_0x0001052bba20();
  } while (extraout_w10 != 0);
  func_0x0001052bba90();
  func_0x0001052bbc68();
  func_0x0001052bbbe4();
  func_0x0001052bbc50();
  func_0x0001052bba48(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    func_0x0001052bbb60();
  }
  else {
    func_0x0001052bb974();
    func_0x0001052bbc1c();
  }
  func_0x0001052bbbdc();
  func_0x0001052bb9b4();
  func_0x0001052bbc38();
  func_0x0001052bbce0();
  func_0x0001052bbb58();
  return;
}



/* Entry: 1052b9e24; end: 1052b9e4f;  */

void FUN_1052b9e24(void)

{
  func_0x0001052bb9b4();
  func_0x0001052bbc38();
  func_0x0001052bbce0();
  func_0x0001052bbb58();
  return;
}



/* Entry: 1052b9e50; end: 1052b9eeb;  */

void FUN_1052b9e50(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_48;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  func_0x0001052bb938();
  func_0x0001052bbb3c();
  func_0x0001052bb9dc(FUN_1052bb168);
  func_0x0001052bbc80();
  func_0x0001052bb974();
  do {
    func_0x0001052bba20();
  } while (extraout_w10 != 0);
  func_0x0001052bba90();
  func_0x0001052bbc68();
  func_0x0001052bbbe4();
  func_0x0001052bbc50();
  func_0x0001052bba48(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined1 *)CONCAT44(uVar4,uVar3);
  if (param_2 == 0) {
    func_0x0001052bbb60();
    uVar2 = (undefined1)uVar3;
  }
  else {
    func_0x0001052bb974();
    uVar2 = (undefined1)uVar3;
    func_0x0001052bbc1c();
  }
  func_0x0001052bbbdc();
  func_0x0001052bb9b4();
  (**(code **)(extraout_x8 + 0x18))();
  *(undefined2 *)(puVar1 + 8) = 7;
  *puVar1 = uVar2;
  return;
}



/* Entry: 1052b9eec; end: 1052b9f6f;  */

void FUN_1052b9eec(undefined1 param_1)

{
  long extraout_x8;
  undefined1 *unaff_x19;
  
  func_0x0001052bb9b4();
  (**(code **)(extraout_x8 + 0x18))();
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1052b9f70; end: 1052ba00b;  */

void FUN_1052b9f70(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int extraout_w10;
  undefined8 uStack_48;
  
  func_0x0001052bb938();
  func_0x0001052bbb3c();
  func_0x0001052bb9dc(FUN_1052bb338);
  func_0x0001052bbc80();
  func_0x0001052bb974();
  do {
    func_0x0001052bba20();
  } while (extraout_w10 != 0);
  func_0x0001052bba90();
  func_0x0001052bbc68();
  func_0x0001052bbbe4();
  func_0x0001052bbc50();
  func_0x0001052bba48(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    func_0x0001052bbb60();
  }
  else {
    func_0x0001052bb974();
    func_0x0001052bbc1c();
  }
  func_0x0001052bbbdc();
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  func_0x0001052bbccc();
  func_0x0001052bbc24();
  return;
}



/* Entry: 1052ba00c; end: 1052ba047;  */

void FUN_1052ba00c(void)

{
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  func_0x0001052bbccc();
  func_0x0001052bbc24();
  return;
}



/* Entry: 1052ba048; end: 1052ba07f;  */

void FUN_1052ba048(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  FUN_1052badc8(auStack_30);
  func_0x0001006856e8(auStack_30);
  return;
}



/* Entry: 1052ba080; end: 1052ba0db;  */

void FUN_1052ba080(void)

{
  undefined1 auStack_38 [16];
  char cStack_28;
  
  func_0x0001052bb9b4();
  func_0x0001052bbc38();
  if (cStack_28 == '\x01') {
    func_0x000108b800ac(auStack_38);
  }
  else {
    func_0x0001052bb990();
  }
  func_0x0001000ff348(auStack_38);
  return;
}



/* Entry: 1052ba0dc; end: 1052ba177;  */

void FUN_1052ba0dc(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  int extraout_w10;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_80;
  undefined8 uStack_48;
  
  func_0x0001052bb938();
  func_0x0001052bbb3c();
  uVar1 = param_1;
  func_0x0001052bb9dc(FUN_1052bb548);
  func_0x0001052bbc80();
  uStack_80 = param_1;
  func_0x0001052bb974();
  do {
    func_0x0001052bba20();
  } while (extraout_w10 != 0);
  func_0x0001052bba90();
  func_0x0001052bbc68();
  func_0x0001052bbbe4();
  func_0x0001052bbc50();
  func_0x0001052bba48(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    func_0x0001052bbb60();
  }
  else {
    func_0x0001052bb974();
    func_0x0001052bbc1c();
  }
  func_0x0001052bbbdc();
  pcStack_b8 = FUN_1052ba178;
  uStack_d0 = param_1;
  uStack_c8 = uVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  func_0x0001052bbcc0();
  func_0x0001001148fc(auStack_f0);
  return;
}



/* Entry: 1052ba178; end: 1052ba1a7;  */

void FUN_1052ba178(void)

{
  undefined1 auStack_40 [32];
  
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  func_0x0001052bbcc0();
  func_0x0001001148fc(auStack_40);
  return;
}



/* Entry: 1052ba1a8; end: 1052ba31f;  */

void FUN_1052ba1a8(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar4;
  long alStack_90 [2];
  long alStack_80 [2];
  int iStack_70;
  long lStack_60;
  long alStack_58 [3];
  
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  if (alStack_90[0] == 0) {
    func_0x0001052bb990();
    goto LAB_1052ba2fc;
  }
  uVar3 = 0;
  lVar1 = alStack_90[0];
  func_0x0001052bbb2c();
  if (lVar1 != 0) {
    alStack_58[0] = *(long *)(lVar1 + 8);
    if ((alStack_58[0] != 0) && (*(long *)(alStack_58[0] + 0x10) != 0)) {
      do {
        func_0x0001052bbaa0();
        alStack_58[0] = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001052bbb70();
    func_0x0001052bbc60();
    goto LAB_1052ba2fc;
  }
  func_0x0001052bbb20();
  alStack_58[0] = alStack_90[0];
  func_0x0001052bbc00();
  if (lVar1 == 0) {
    iVar4 = 1;
LAB_1052ba288:
    FUN_1052bc640(&lStack_60,alStack_90);
    if (lVar1 == 0) {
      func_0x000104bf822c(alStack_80);
      iStack_70 = iVar4;
      func_0x0001052bbcec();
      func_0x0001052bbadc();
      lRam0000000000000008 = lStack_60;
      func_0x0001052bbc98();
      if ((uVar3 & 1) != 0) {
        alStack_58[0] = 0;
      }
      func_0x0001052bbc58();
      plVar2 = alStack_80;
    }
    else {
      func_0x000104bf822c(alStack_58,lStack_60);
      func_0x0001052bbc40();
      plVar2 = alStack_58;
    }
    func_0x000104bdc2a0(plVar2);
    func_0x0001052bbb70();
    plVar2 = &lStack_60;
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x28);
    func_0x0001052bbcf4(alStack_58);
    if (alStack_58[0] == 0) {
      iVar4 = iVar4 + 1;
      func_0x0001052bbc60();
      goto LAB_1052ba288;
    }
    alStack_80[0] = alStack_58[0];
    if (*(long *)(alStack_58[0] + 0x10) != 0) {
      do {
        func_0x0001052bbaa0();
        alStack_80[0] = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    func_0x0001052bbb70();
    func_0x000104be7e54(alStack_80);
    plVar2 = alStack_58;
  }
  func_0x000104be7e54(plVar2);
  func_0x0001052bbb14();
LAB_1052ba2fc:
  FUN_1052bb074(alStack_90);
  return;
}



/* Entry: 1052ba320; end: 1052ba35b;  */

void FUN_1052ba320(void)

{
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  func_0x0001052bbccc();
  func_0x0001052bbc24();
  return;
}



/* Entry: 1052ba35c; end: 1052ba3b3;  */

void FUN_1052ba35c(void)

{
  func_0x0001052bb9b4();
  func_0x0001052bbc38();
  func_0x0001052bbce0();
  func_0x0001052bbb58();
  return;
}



/* Entry: 1052ba3b4; end: 1052ba403;  */

void FUN_1052ba3b4(void)

{
  undefined1 auStack_98 [120];
  
  func_0x0001052bb9b4();
  func_0x0001052bbc38();
  FUN_1052b9048(auStack_98);
  func_0x0001052bb09c(auStack_98);
  return;
}



/* Entry: 1052ba404; end: 1052ba433;  */

void FUN_1052ba404(void)

{
  undefined1 auStack_40 [32];
  
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  func_0x0001052bbcc0();
  func_0x0001001148fc(auStack_40);
  return;
}



/* Entry: 1052ba434; end: 1052ba5ab;  */

void FUN_1052ba434(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar4;
  long alStack_90 [2];
  long alStack_80 [2];
  int iStack_70;
  long lStack_60;
  long alStack_58 [3];
  
  func_0x0001052bb9b4();
  func_0x0001052bbba0();
  if (alStack_90[0] == 0) {
    func_0x0001052bb990();
    goto LAB_1052ba588;
  }
  uVar3 = 0;
  lVar1 = alStack_90[0];
  func_0x0001052bbb2c();
  if (lVar1 != 0) {
    alStack_58[0] = *(long *)(lVar1 + 8);
    if ((alStack_58[0] != 0) && (*(long *)(alStack_58[0] + 0x10) != 0)) {
      do {
        func_0x0001052bbaa0();
        alStack_58[0] = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001052bbb70();
    func_0x0001052bbc60();
    goto LAB_1052ba588;
  }
  func_0x0001052bbb20();
  alStack_58[0] = alStack_90[0];
  func_0x0001052bbc00();
  if (lVar1 == 0) {
    iVar4 = 1;
LAB_1052ba514:
    FUN_1052bd924(&lStack_60,alStack_90);
    if (lVar1 == 0) {
      func_0x000104bf822c(alStack_80);
      iStack_70 = iVar4;
      func_0x0001052bbcec();
      func_0x0001052bbadc();
      lRam0000000000000008 = lStack_60;
      func_0x0001052bbc98();
      if ((uVar3 & 1) != 0) {
        alStack_58[0] = 0;
      }
      func_0x0001052bbc58();
      plVar2 = alStack_80;
    }
    else {
      func_0x000104bf822c(alStack_58,lStack_60);
      func_0x0001052bbc40();
      plVar2 = alStack_58;
    }
    func_0x000104bdc2a0(plVar2);
    func_0x0001052bbb70();
    plVar2 = &lStack_60;
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x28);
    func_0x0001052bbcf4(alStack_58);
    if (alStack_58[0] == 0) {
      iVar4 = iVar4 + 1;
      func_0x0001052bbc60();
      goto LAB_1052ba514;
    }
    alStack_80[0] = alStack_58[0];
    if (*(long *)(alStack_58[0] + 0x10) != 0) {
      do {
        func_0x0001052bbaa0();
        alStack_80[0] = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    func_0x0001052bbb70();
    func_0x000104be7e54(alStack_80);
    plVar2 = alStack_58;
  }
  func_0x000104be7e54(plVar2);
  func_0x0001052bbb14();
LAB_1052ba588:
  func_0x0001005ad23c(alStack_90);
  return;
}



/* Entry: 1052ba5ac; end: 1052babeb;  */

void FUN_1052ba5ac(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052bdbe8();
  FUN_1052bcd5c(param_1);
  FUN_1052c484c(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba048);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba048) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052ba620;
  if ((bRam00000001136ba058 & 1) == 0) goto LAB_1052ba644;
  while( true ) {
    func_0x000108b80888(0x1136ba090,param_1);
LAB_1052ba620:
    func_0x0001052bba48(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052ba644:
    iVar2 = 0x136ba058;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052bac84();
      func_0x0001003a83dc(&uStack_1a8,"getUrl");
      func_0x000104bdbd7c();
      func_0x0001052bb984(auStack_1b8);
      uStack_1a0 = uStack_1a8;
      uStack_1a8 = 0;
      func_0x0001003aef98(auStack_198,auStack_1b8);
      func_0x0001003a83dc(&uStack_1c0,"getIsRelativePath");
      func_0x000104bef4f0();
      func_0x0001052bb984(auStack_1d0);
      uStack_188 = uStack_1c0;
      uStack_1c0 = 0;
      func_0x0001003aef98(auStack_180,auStack_1d0);
      func_0x0001003a83dc(&uStack_1d8,"getRequestMethod");
      if ((bRam00000001136ba060 & 1) == 0) {
        iVar2 = 0x136ba060;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x00010b990e20(0x1136ba0a0);
          ___cxa_guard_release(0x1136ba060);
        }
      }
      func_0x0001052bb984(auStack_1e8,0x1136ba0a0);
      uStack_170 = uStack_1d8;
      uStack_1d8 = 0;
      func_0x0001003aef98(auStack_168,auStack_1e8);
      func_0x0001003a83dc(&uStack_1f0,"getRequestType");
      if ((bRam00000001136ba068 & 1) == 0) {
        iVar2 = 0x136ba068;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x00010b990e20(0x1136ba0b0);
          ___cxa_guard_release(0x1136ba068);
        }
      }
      func_0x0001052bb984(auStack_200,0x1136ba0b0);
      uStack_158 = uStack_1f0;
      uStack_1f0 = 0;
      func_0x0001003aef98(auStack_150,auStack_200);
      func_0x0001003a83dc(&uStack_208,"getHeaders");
      FUN_1052b8218();
      func_0x0001052bb984(auStack_218);
      uStack_140 = uStack_208;
      uStack_208 = 0;
      func_0x0001003aef98(auStack_138,auStack_218);
      func_0x0001003a83dc(&uStack_220,"getPayloadDeprecated");
      FUN_1052b8cb4();
      func_0x0001052bb984(auStack_230);
      uStack_128 = uStack_220;
      uStack_220 = 0;
      func_0x0001003aef98(auStack_120,auStack_230);
      func_0x0001003a83dc(&uStack_238,"getPayloadDataRef");
      FUN_1052b8d10();
      func_0x0001052bb984(auStack_248);
      uStack_110 = uStack_238;
      uStack_238 = 0;
      func_0x0001003aef98(auStack_108,auStack_248);
      func_0x0001003a83dc(&uStack_250,"getPayloadLocalUrl");
      func_0x000104bf1120();
      func_0x0001052bb984(auStack_260);
      uStack_f8 = uStack_250;
      uStack_250 = 0;
      func_0x0001003aef98(auStack_f0,auStack_260);
      func_0x0001003a83dc(&uStack_268,"getPayloadStream");
      if ((bRam00000001136ba070 & 1) == 0) {
        iVar2 = 0x136ba070;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_1052bcfe0();
          func_0x00010b990784(0x1136ba0c0);
          ___cxa_guard_release(0x1136ba070);
        }
      }
      func_0x0001052bb984(auStack_278,0x1136ba0c0);
      uStack_e0 = uStack_268;
      uStack_268 = 0;
      func_0x0001003aef98(auStack_d8,auStack_278);
      func_0x0001003a83dc(&uStack_280,"getParameters");
      FUN_1052b8218();
      func_0x0001052bb984(auStack_290);
      uStack_c8 = uStack_280;
      uStack_280 = 0;
      func_0x0001003aef98(auStack_c0,auStack_290);
      func_0x0001003a83dc(&uStack_298,"getKey");
      func_0x000104bdbd7c();
      func_0x0001052bb984(auStack_2a8);
      uStack_b0 = uStack_298;
      uStack_298 = 0;
      func_0x0001003aef98(auStack_a8,auStack_2a8);
      func_0x0001003a83dc(&uStack_2b0,"getIsAuthenticated");
      func_0x000104bef4f0();
      func_0x0001052bb984(auStack_2c0);
      uStack_98 = uStack_2b0;
      uStack_2b0 = 0;
      func_0x0001003aef98(auStack_90,auStack_2c0);
      func_0x0001003a83dc(&uStack_2c8,"getTrackingInfo");
      FUN_1052b9180();
      func_0x0001052bb984(auStack_2d8);
      uStack_80 = uStack_2c8;
      uStack_2c8 = 0;
      func_0x0001003aef98(auStack_78,auStack_2d8);
      func_0x0001003a83dc(&uStack_2e0,"getSwitchboardConfigKey");
      func_0x000104bf1120();
      func_0x0001052bb984(auStack_2f0);
      uStack_68 = uStack_2e0;
      uStack_2e0 = 0;
      func_0x0001003aef98(auStack_60,auStack_2f0);
      func_0x0001003a83dc(&uStack_2f8,"getFallbackUrlProvider");
      if ((bRam00000001136ba078 & 1) == 0) {
        iVar2 = 0x136ba078;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_1052bdd0c();
          func_0x00010b990784(0x1136ba0d0);
          ___cxa_guard_release(0x1136ba078);
        }
      }
      func_0x0001052bb984(auStack_308,0x1136ba0d0);
      uStack_50 = uStack_2f8;
      uStack_2f8 = 0;
      func_0x0001003aef98(auStack_48,auStack_308);
      func_0x000104bdbd44(0x1136ba090,0x113819338,1,&uStack_1a0,0xf);
      lVar3 = 0x150;
      do {
        func_0x0001003b1c5c(auStack_198 + lVar3 + -8);
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052bbad4(auStack_308);
      func_0x0001003a8c94(&uStack_2f8);
      func_0x0001052bbad4(auStack_2f0);
      func_0x0001003a8c94(&uStack_2e0);
      func_0x0001052bbad4(auStack_2d8);
      func_0x0001003a8c94(&uStack_2c8);
      func_0x0001052bbad4(auStack_2c0);
      func_0x0001003a8c94(&uStack_2b0);
      func_0x0001052bbad4(auStack_2a8);
      func_0x0001003a8c94(&uStack_298);
      func_0x0001052bbad4(auStack_290);
      func_0x0001003a8c94(&uStack_280);
      func_0x0001052bbad4(auStack_278);
      func_0x0001003a8c94(&uStack_268);
      func_0x0001052bbad4(auStack_260);
      func_0x0001003a8c94(&uStack_250);
      func_0x0001052bbad4(auStack_248);
      func_0x0001003a8c94(&uStack_238);
      func_0x0001052bbad4(auStack_230);
      func_0x0001003a8c94(&uStack_220);
      func_0x0001052bbad4(auStack_218);
      func_0x0001003a8c94(&uStack_208);
      func_0x0001052bbad4(auStack_200);
      func_0x0001003a8c94(&uStack_1f0);
      func_0x0001052bbad4(auStack_1e8);
      func_0x0001003a8c94(&uStack_1d8);
      func_0x0001052bbad4(auStack_1d0);
      func_0x0001003a8c94(&uStack_1c0);
      func_0x0001052bbad4(auStack_1b8);
      func_0x0001003a8c94(&uStack_1a8);
      ___cxa_guard_release(0x1136ba058);
    }
  }
  return;
}



/* Entry: 1052babec; end: 1052bac83;  */

undefined8 FUN_1052babec(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819330 & 1) == 0) {
    iVar4 = 0x13819330;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052bac84();
      lStack_20 = lRam0000000113819338;
      if (lRam0000000113819338 != 0) {
        piVar1 = (int *)(lRam0000000113819338 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819320,&lStack_20);
      func_0x0001052bbb68();
      ___cxa_guard_release(0x113819330);
    }
  }
  return 0x113819320;
}



/* Entry: 1052bac84; end: 1052bacd7;  */

void FUN_1052bac84(void)

{
  int iVar1;
  
  if ((bRam0000000113819340 & 1) == 0) {
    iVar1 = 0x13819340;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819338,"_djinni_interface_UrlRequest");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819340);
      return;
    }
  }
  return;
}



/* Entry: 1052bacd8; end: 1052bacff;  */

void FUN_1052bacd8(undefined8 *param_1,long param_2)

{
  int extraout_w11;
  long *plVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (*(char *)(param_2 + 0x28) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return;
  }
  FUN_10529d1b8(&lStack_38);
  plVar1 = (long *)(param_2 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_1052808e4(auStack_48,plVar1 + 2);
    func_0x0001052bbcfc();
    func_0x0001052bbcd8();
    FUN_1052808e4(auStack_48,plVar1 + 5);
    func_0x0001052bbcfc();
    func_0x0001052bbcd8();
  }
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    do {
      func_0x0001052bbaa0();
    } while (extraout_w11 != 0);
  }
  func_0x00010b9a8f78(param_1,auStack_48);
  func_0x000104bddedc(auStack_48);
  FUN_10529d184(&lStack_38);
  return;
}



/* Entry: 1052bad00; end: 1052badc7;  */

void FUN_1052bad00(undefined8 param_1,long param_2)

{
  int extraout_w11;
  long *plVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_10529d1b8(&lStack_38);
  plVar1 = (long *)(param_2 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_1052808e4(auStack_48,plVar1 + 2);
    func_0x0001052bbcfc();
    func_0x0001052bbcd8();
    FUN_1052808e4(auStack_48,plVar1 + 5);
    func_0x0001052bbcfc();
    func_0x0001052bbcd8();
  }
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    do {
      func_0x0001052bbaa0();
    } while (extraout_w11 != 0);
  }
  func_0x00010b9a8f78(param_1,auStack_48);
  func_0x000104bddedc(auStack_48);
  FUN_10529d184(&lStack_38);
  return;
}



/* Entry: 1052badc8; end: 1052bae4b;  */

void FUN_1052badc8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    func_0x0001052bb990();
  }
  else {
    func_0x0001052bbb2c(lVar1,&PTR_DAT_110875360);
    if (lVar1 == 0) {
      FUN_1052bae4c(param_1,&uStack_29,param_2);
    }
    else {
      lStack_28 = *(long *)(lVar1 + 8);
      if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
        do {
          func_0x0001052bbaa0();
          lStack_28 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x0001052bbb70();
      func_0x000104be7e54(&lStack_28);
    }
  }
  return;
}



/* Entry: 1052bae4c; end: 1052baf5b;  */

void FUN_1052bae4c(long param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  int extraout_w11;
  int iVar2;
  long alStack_58 [2];
  int iStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x0001052bbb20();
  alStack_58[0] = *param_2;
  func_0x0001052bbc70();
  if (param_1 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    func_0x0001052bbcf4(alStack_58);
    if (alStack_58[0] != 0) {
      lStack_38 = alStack_58[0];
      if (*(long *)(alStack_58[0] + 0x10) != 0) {
        do {
          func_0x0001052bbaa0();
          lStack_38 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x0001052bbb70();
      func_0x000104be7e54(&lStack_38);
      plVar1 = alStack_58;
      goto LAB_1052baf48;
    }
    iVar2 = iVar2 + 1;
    func_0x000104be7e54(alStack_58);
  }
  FUN_1052c4240(&lStack_38,param_2);
  iStack_48 = iVar2;
  if (param_1 == 0) {
    lStack_40 = *param_2;
    func_0x000104bf822c(alStack_58,lStack_38);
    FUN_1052baf5c(0x11328ad40,&lStack_40,alStack_58);
  }
  else {
    func_0x000104bf822c(alStack_58,lStack_38);
    func_0x000104bf7db8(param_1 + 0x18,alStack_58);
  }
  func_0x000104bdc2a0(alStack_58);
  func_0x0001052bbb70();
  plVar1 = &lStack_38;
LAB_1052baf48:
  func_0x000104be7e54(plVar1);
  func_0x0001052bbb14();
  return;
}



/* Entry: 1052baf5c; end: 1052baf8b;  */

void FUN_1052baf5c(void)

{
  func_0x0001052baf74();
  return;
}



/* Entry: 1052baf8c; end: 1052baff3;  */

undefined1  [16] FUN_1052baf8c(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_1052baff4(auStack_38);
  uVar1 = auStack_38[0];
  func_0x000104bf7e44(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x000104bdc220(auStack_38);
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1052baff4; end: 1052bb073;  */

void FUN_1052baff4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  func_0x0001052bbcec();
  *param_1 = puVar1;
  param_1[1] = param_2 + 2;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = *param_3;
  uVar2 = *param_4;
  puVar1[4] = param_4[1];
  puVar1[3] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_4 + 2);
  param_2 = param_2 + 3;
  func_0x000104bf7ea8();
  puVar1[1] = param_2;
  return;
}



/* Entry: 1052bb074; end: 1052bb0cb;  */

long FUN_1052bb074(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052bb0cc; end: 1052bb11f;  */

void FUN_1052bb0cc(void)

{
  func_0x0001052bbc88();
  func_0x0001052bbbd0();
  return;
}



/* Entry: 1052bb120; end: 1052bb167;  */

long FUN_1052bb120(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb168; end: 1052bb1bb;  */

void FUN_1052bb168(void)

{
  func_0x0001052bbc88();
  func_0x0001052bbbd0();
  return;
}



/* Entry: 1052bb1bc; end: 1052bb1d7;  */

long FUN_1052bb1bc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb1d8; end: 1052bb26b;  */

void FUN_1052bb1d8(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb26c; end: 1052bb287;  */

long FUN_1052bb26c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb288; end: 1052bb31b;  */

void FUN_1052bb288(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb31c; end: 1052bb337;  */

long FUN_1052bb31c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb338; end: 1052bb3cb;  */

void FUN_1052bb338(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb3cc; end: 1052bb3e7;  */

long FUN_1052bb3cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb3e8; end: 1052bb47b;  */

void FUN_1052bb3e8(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb47c; end: 1052bb497;  */

long FUN_1052bb47c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb498; end: 1052bb52b;  */

void FUN_1052bb498(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb52c; end: 1052bb547;  */

long FUN_1052bb52c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb548; end: 1052bb59b;  */

void FUN_1052bb548(void)

{
  func_0x0001052bbc88();
  func_0x0001052bbbd0();
  return;
}



/* Entry: 1052bb59c; end: 1052bb5b7;  */

long FUN_1052bb59c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb5b8; end: 1052bb64b;  */

void FUN_1052bb5b8(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb64c; end: 1052bb667;  */

long FUN_1052bb64c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb668; end: 1052bb6fb;  */

void FUN_1052bb668(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb6fc; end: 1052bb717;  */

long FUN_1052bb6fc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb718; end: 1052bb7ab;  */

void FUN_1052bb718(void)

{
  func_0x0001052bba80();
  func_0x0001052bba5c();
  return;
}



/* Entry: 1052bb7ac; end: 1052bb7cb;  */

long FUN_1052bb7ac(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bb7cc; end: 1052bb7df;  */

void FUN_1052bb7cc(void)

{
  FUN_1052bb89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052bb7e0; end: 1052bb7f3;  */

void FUN_1052bb7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052bb7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052bb7f4; end: 1052bb807;  */

void FUN_1052bb7f4(void)

{
  FUN_1052bb818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052bb808; end: 1052bb817;  */

undefined1  [16] FUN_1052bb808(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052bb818; end: 1052bb89b;  */

void FUN_1052bb818(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1108755a0;
  puVar2 = param_1;
  func_0x0001052bbb20();
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  func_0x0001052bbc70();
  iVar1 = *(int *)(puVar2 + 5);
  *(int *)(puVar2 + 5) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  func_0x0001052bbb14();
  FUN_1052ac684(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052bb89c; end: 1052bb8ab;  */

void FUN_1052bb89c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110875550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052bb8ac; end: 1052bb8d3;  */

long * FUN_1052bb8ac(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052bb8d4; end: 1052bbd1b;  */

void FUN_1052bb8d4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  return;
}



/* Entry: 1052bbd1c; end: 1052bc017;  */

void FUN_1052bbd1c(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052ba5ac();
  FUN_1052bc144(param_1);
  FUN_1052c484c(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba0e0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba0e0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052bbd90;
  if ((bRam00000001136ba0e8 & 1) == 0) goto LAB_1052bbdc0;
  while( true ) {
    func_0x000108b80888(0x1136ba0f0,param_1);
LAB_1052bbd90:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052bbdc0:
    iVar2 = 0x136ba0e8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052bc0b4();
      pcVar3 = "OnSuccessDeprecated";
      func_0x0001003a83dc(&uStack_108,"OnSuccessDeprecated");
      func_0x000104bef4f0();
      pcVar4 = pcVar3;
      FUN_1052babec();
      puVar5 = auStack_b0;
      func_0x0001003adcc0(puVar5,pcVar4);
      FUN_1052bc42c();
      puVar6 = auStack_a0;
      func_0x0001003adcc0(puVar6,puVar5);
      FUN_1052c4a58();
      func_0x0001003adcc0(auStack_90,puVar6);
      func_0x000104bdbd48(auStack_118,pcVar3,auStack_b0,3);
      uStack_80 = uStack_108;
      uStack_108 = 0;
      func_0x0001003aef98(auStack_78,auStack_118);
      pcVar3 = "onSuccess";
      func_0x0001003a83dc(&uStack_120,"onSuccess");
      func_0x0001003b166c(auStack_140);
      FUN_1052babec();
      puVar6 = auStack_e0;
      func_0x0001003adcc0(puVar6,pcVar3);
      FUN_1052bc42c();
      puVar5 = auStack_d0;
      func_0x0001003adcc0(puVar5,puVar6);
      FUN_1052b8d10();
      func_0x0001003adcc0(auStack_c0,puVar5);
      func_0x000104bdbd48(auStack_130,auStack_140,auStack_e0,3);
      uStack_68 = uStack_120;
      uStack_120 = 0;
      func_0x0001003aef98(auStack_60,auStack_130);
      pcVar3 = "OnFailure";
      func_0x0001003a83dc(&uStack_148,"OnFailure");
      func_0x0001003b166c(auStack_168);
      FUN_1052babec();
      puVar6 = auStack_100;
      func_0x0001003adcc0(puVar6,pcVar3);
      FUN_1052bc42c();
      func_0x0001003adcc0(auStack_f0,puVar6);
      func_0x000104bdbd48(auStack_158,auStack_168,auStack_100,2);
      uStack_50 = uStack_148;
      uStack_148 = 0;
      func_0x0001003aef98(auStack_48,auStack_158);
      func_0x000104bdbd44(0x1136ba0f0,0x113819360,1,&uStack_80,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar7 + -8);
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x18);
      FUN_1052bc134(auStack_158);
      lVar7 = 0x18;
      do {
        func_0x0001052bc13c();
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -8);
      FUN_1052bc134(auStack_168);
      func_0x0001003a8c94(&uStack_148);
      FUN_1052bc134(auStack_130);
      lVar7 = 0x28;
      do {
        func_0x0001052bc13c();
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -8);
      FUN_1052bc134(auStack_140);
      func_0x0001003a8c94(&uStack_120);
      FUN_1052bc134(auStack_118);
      lVar7 = 0x28;
      do {
        func_0x0001052bc13c();
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -8);
      func_0x0001003a8c94(&uStack_108);
      ___cxa_guard_release(0x1136ba0e8);
    }
  }
  return;
}



/* Entry: 1052bc018; end: 1052bc0b3;  */

undefined8 FUN_1052bc018(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819358 & 1) == 0) {
    iVar4 = 0x13819358;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052bc0b4();
      lStack_20 = lRam0000000113819360;
      if (lRam0000000113819360 != 0) {
        piVar1 = (int *)(lRam0000000113819360 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819348,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819358);
    }
  }
  return 0x113819348;
}



/* Entry: 1052bc0b4; end: 1052bc107;  */

void FUN_1052bc0b4(void)

{
  int iVar1;
  
  if ((bRam0000000113819368 & 1) == 0) {
    iVar1 = 0x13819368;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819360,"_djinni_interface_UrlRequestCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819368);
      return;
    }
  }
  return;
}



/* Entry: 1052bc108; end: 1052bc133;  */

long FUN_1052bc108(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052bc134; end: 1052bc143;  */

void FUN_1052bc134(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1052bc144; end: 1052bc42b;  */

void FUN_1052bc144(ulong param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba100);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba100) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052bc1a0;
  if ((bRam00000001136ba108 & 1) == 0) goto LAB_1052bc1d0;
  while( true ) {
    func_0x000108b80888(0x1136ba110);
LAB_1052bc1a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052bc1d0:
    iVar2 = 0x136ba108;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052bc4c8();
      func_0x0001003a83dc(&uStack_e8,"getResponseCode");
      func_0x000104bef760();
      FUN_1052bc62c(auStack_f8);
      uStack_e0 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_d8,auStack_f8);
      func_0x0001003a83dc(&uStack_100,"getFinalRespondingUrl");
      func_0x000104bdbd7c();
      FUN_1052bc62c(auStack_110);
      uStack_c8 = uStack_100;
      uStack_100 = 0;
      func_0x0001003aef98(auStack_c0,auStack_110);
      func_0x0001003a83dc(&uStack_118,"getResponseHeaders");
      FUN_1052b837c();
      FUN_1052bc62c(auStack_128);
      uStack_b0 = uStack_118;
      uStack_118 = 0;
      func_0x0001003aef98(auStack_a8,auStack_128);
      func_0x0001003a83dc(&uStack_130,"getContentLength");
      func_0x000104bef5f8();
      FUN_1052bc62c(auStack_140);
      uStack_98 = uStack_130;
      uStack_130 = 0;
      func_0x0001003aef98(auStack_90,auStack_140);
      func_0x0001003a83dc(&uStack_148,"getNetworkError");
      FUN_1052a097c();
      FUN_1052bc62c(auStack_158);
      uStack_80 = uStack_148;
      uStack_148 = 0;
      func_0x0001003aef98(auStack_78,auStack_158);
      func_0x0001003a83dc(&uStack_160,"getRequestId");
      func_0x000104bf1120();
      FUN_1052bc62c(auStack_170);
      uStack_68 = uStack_160;
      uStack_160 = 0;
      func_0x0001003aef98(auStack_60,auStack_170);
      func_0x0001003a83dc(&uStack_178,"getFailoverAdvice");
      FUN_1052b8f20();
      FUN_1052bc62c(auStack_188);
      uStack_50 = uStack_178;
      uStack_178 = 0;
      func_0x0001003aef98(auStack_48,auStack_188);
      func_0x000104bdbd44(0x1136ba110,0x113819388,1,&uStack_e0,7);
      lVar3 = 0x90;
      do {
        func_0x0001003b1c5c(auStack_d8 + lVar3 + -8);
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x18);
      func_0x0001052bc638(auStack_188);
      func_0x0001003a8c94(&uStack_178);
      func_0x0001052bc638(auStack_170);
      func_0x0001003a8c94(&uStack_160);
      func_0x0001052bc638(auStack_158);
      func_0x0001003a8c94(&uStack_148);
      func_0x0001052bc638(auStack_140);
      func_0x0001003a8c94(&uStack_130);
      func_0x0001052bc638(auStack_128);
      func_0x0001003a8c94(&uStack_118);
      func_0x0001052bc638(auStack_110);
      func_0x0001003a8c94(&uStack_100);
      func_0x0001052bc638(auStack_f8);
      func_0x0001003a8c94(&uStack_e8);
      ___cxa_guard_release(0x1136ba108);
    }
  }
  return;
}



/* Entry: 1052bc42c; end: 1052bc4c7;  */

undefined8 FUN_1052bc42c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819380 & 1) == 0) {
    iVar4 = 0x13819380;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052bc4c8();
      lStack_20 = lRam0000000113819388;
      if (lRam0000000113819388 != 0) {
        piVar1 = (int *)(lRam0000000113819388 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819370,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819380);
    }
  }
  return 0x113819370;
}



/* Entry: 1052bc4c8; end: 1052bc51b;  */

void FUN_1052bc4c8(void)

{
  int iVar1;
  
  if ((bRam0000000113819390 & 1) == 0) {
    iVar1 = 0x13819390;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819388,"_djinni_interface_UrlResponseInfo");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819390);
      return;
    }
  }
  return;
}



/* Entry: 1052bc51c; end: 1052bc5ef;  */

void FUN_1052bc51c(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_60;
  undefined1 auStack_58 [24];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x0001003a8364();
  (**(code **)(*param_2 + 0x10))();
  uStack_38 = 0;
  plStack_40 = param_2;
  func_0x0001003a91d4("C++: {}");
  func_0x0001003a9204(auStack_58);
  func_0x0001003ac750(&plStack_40,plVar1,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  plStack_60 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x00010b99f560(auStack_58,&plStack_60);
  func_0x00010b99ff08(uVar2,auStack_58);
  func_0x000104bda93c(auStack_58);
  func_0x0001003a8c94(&plStack_60);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  func_0x0001003a8c94(&plStack_40);
  return;
}



/* Entry: 1052bc5f0; end: 1052bc62b;  */

void FUN_1052bc5f0(undefined8 *param_1,long param_2,long param_3)

{
  func_0x00010b99febc(*(undefined8 *)(param_3 + 0x18),param_2 + 0x10);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052bc62c; end: 1052bc63f;  */

void FUN_1052bc62c(undefined8 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = 0x1000000;
  func_0x0001003b16ac(&uStack_14,param_1,0,0);
  return;
}



/* Entry: 1052bc640; end: 1052bcb43;  */

void FUN_1052bc640(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long lVar8;
  long *plVar9;
  undefined8 in_register_00005008;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 auStack_160 [2];
  undefined8 uStack_150;
  undefined8 auStack_148 [2];
  code *pcStack_138;
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  byte abStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  func_0x0001052bd464();
  uStack_70 = extraout_x8;
  if ((bRam00000001136ba128 & 1) == 0) {
    iVar6 = 0x136ba128;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1052bd07c();
      FUN_1052bcd5c(0);
      FUN_1052bcd5c(1);
      func_0x00010b9941f8(&pcStack_a0);
      func_0x00010b993b40(&pcStack_f0,pcStack_a0,0x1138193b0);
      if ((abStack_e0[0] & 1) == 0) goto LAB_1052bca70;
      func_0x0001003adcc0(0x1136ba138,&pcStack_f0);
      func_0x0001003b12dc(&pcStack_f0);
      func_0x000104bdc2fc(&pcStack_a0);
      ___cxa_guard_release(0x1136ba128);
    }
  }
  func_0x0001003b2110(auStack_120,0x1136ba140);
  pcStack_138 = FUN_1052bcc4c;
  func_0x0001052bd458();
  auStack_130[0] = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052bd3d4();
    } while (extraout_w10 != 0);
  }
  FUN_1052bcb44(&pcStack_f0,&pcStack_138);
  uStack_150 = 0x1052bcc78;
  func_0x0001052bd458();
  auStack_148[0] = param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052bd3d4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1052bcb44(abStack_e0,&uStack_150);
  uStack_168 = 0x1052bcca4;
  func_0x0001052bd458();
  auStack_160[0] = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052bd3d4();
    } while (extraout_w10_01 != 0);
  }
  pcVar4 = (code *)auStack_d0;
  FUN_1052bcb44(pcVar4,&uStack_168);
  uStack_180 = 0x1052bcd04;
  func_0x0001052bd458();
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052bd3d4();
    } while (extraout_w10_02 != 0);
  }
  uStack_110 = 0x1052bcd04;
  uStack_178 = 0;
  uStack_170 = 0;
  func_0x0001052bd49c();
  pcStack_a0 = FUN_1052bd1ac;
  ppuStack_98 = &PTR_FUN_1108755f0;
  uStack_90 = 0x1052bcd04;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_88 = param_2;
  func_0x00010b9ac22c();
  pcStack_198 = pcVar4;
  func_0x0001052bd4a4();
  (*extraout_x8_04)(&ppuStack_98);
  do {
    func_0x0001052bd484();
  } while (extraout_w10_03 != 0);
  pcStack_a0 = pcVar4;
  func_0x00010b9a8ef8(auStack_c0,&pcStack_a0);
  func_0x000104bda388(&pcStack_a0);
  func_0x000104bda3d0(&pcStack_198);
  pcVar4 = (code *)&uStack_108;
  FUN_1052bb074();
  pcStack_198 = (code *)0x1052bcd30;
  func_0x0001052bd458();
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001052bd3d4();
    } while (extraout_w10_04 != 0);
  }
  uStack_110 = 0x1052bcd30;
  uStack_190 = 0;
  uStack_188 = 0;
  func_0x0001052bd49c();
  pcStack_a0 = FUN_1052bd21c;
  ppuStack_98 = &PTR_FUN_110875610;
  uStack_90 = 0x1052bcd30;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_88 = param_2;
  func_0x00010b9ac22c();
  pcStack_f8 = pcVar4;
  func_0x0001052bd4a4();
  (*extraout_x8_06)(&ppuStack_98);
  do {
    func_0x0001052bd484();
  } while (extraout_w10_05 != 0);
  pcStack_a0 = pcVar4;
  func_0x00010b9a8ef8(auStack_b0,&pcStack_a0);
  func_0x000104bda388(&pcStack_a0);
  func_0x000104bda3d0(&pcStack_f8);
  FUN_1052bb074(&uStack_108);
  func_0x000104bdb9bc(auStack_118,auStack_120,&pcStack_f0,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)&pcStack_f0 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar5 = lVar8 == -0x10;
  } while (!(bool)uVar5);
  FUN_1052bb074(&uStack_190);
  FUN_1052bb074(&uStack_178);
  FUN_1052bb074(auStack_160);
  FUN_1052bb074(auStack_148);
  FUN_1052bb074(auStack_130);
  func_0x0001003b1f60(auStack_120);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar9 = puVar7 + 1;
  *plVar9 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110875640;
  pcVar4 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar4,auStack_118);
  puVar7[3] = &PTR_DAT_110875690;
  func_0x0001052bd458();
  puVar7[9] = in_register_00005008;
  puVar7[8] = param_2;
  if (extraout_x8_07 != 0) {
    do {
      func_0x0001052bd3d4();
    } while (extraout_w10_06 != 0);
  }
  if ((puVar7[5] == 0) || (uVar5 = *(long *)(puVar7[5] + 8) == -1, pcVar3 = pcVar4, (bool)uVar5)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_f0 = pcVar4;
    puStack_e8 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&pcStack_f0);
    func_0x0001003a90c4(&pcStack_f0);
    pcStack_a0 = pcVar4;
    pcVar3 = pcVar4;
    if (puVar7[5] != 0) goto LAB_1052bc9a8;
  }
  else {
LAB_1052bc9a8:
    do {
      pcStack_a0 = pcVar3;
      func_0x0001052bd3d4();
      pcVar3 = pcStack_a0;
    } while (extraout_w10_07 != 0);
  }
  *param_1 = (long)pcVar4;
  FUN_1052bd38c(&pcStack_a0);
  func_0x000104bdbf78(auStack_118);
  func_0x0001052bd428(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1052bca70:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052bca78);
  (*pcVar4)();
}



/* Entry: 1052bcb44; end: 1052bcc4b;  */

void FUN_1052bcb44(code *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  pcVar1 = param_1;
  func_0x0001052bd464();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar5 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_48 = extraout_x8;
  func_0x0001052bd49c();
  pcStack_78 = FUN_1052bd110;
  ppuStack_70 = &PTR_FUN_1108755d0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  uStack_58 = uVar5;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar1;
  func_0x0001052bd448();
  do {
    func_0x0001052bd484();
  } while (extraout_w10 != 0);
  iVar4 = (int)&pcStack_78;
  pcStack_78 = pcVar1;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_78);
  func_0x000104bda3d0(&pcStack_80);
  puVar2 = &uStack_90;
  FUN_1052bb074();
  func_0x0001052bd428(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume(puVar2);
  }
  else {
    func_0x0001052bd448();
    __ZdlPv(pcVar1);
  }
  puVar3 = puVar2;
  func_0x000104bd46a0();
  func_0x0001052bd40c();
  (**(code **)(extraout_x8_00 + 0x10))();
  *(undefined2 *)(puVar2 + 1) = 5;
  *puVar2 = puVar3;
  return;
}



/* Entry: 1052bcc4c; end: 1052bcd5b;  */

void FUN_1052bcc4c(undefined8 param_1)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001052bd40c();
  (**(code **)(extraout_x8 + 0x10))();
  *(undefined2 *)(unaff_x19 + 1) = 5;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1052bcd5c; end: 1052bcfdf;  */

void FUN_1052bcd5c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052bd464();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba120);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba120) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052bcdb0;
  if ((bRam00000001136ba130 & 1) == 0) goto LAB_1052bcdd4;
  while( true ) {
    func_0x000108b80888(0x1136ba148);
LAB_1052bcdb0:
    func_0x0001052bd428(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052bcdd4:
    iVar2 = 0x136ba130;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052bd07c();
      func_0x0001003a83dc(&uStack_c8,"getLength");
      func_0x000104bef5f8();
      func_0x0001052bd3e4(auStack_d8);
      uStack_b0 = uStack_c8;
      uStack_c8 = 0;
      func_0x0001003aef98(auStack_a8,auStack_d8);
      func_0x0001003a83dc(&uStack_e0,"getOffset");
      func_0x000104bef5f8();
      func_0x0001052bd3e4(auStack_f0);
      uStack_98 = uStack_e0;
      uStack_e0 = 0;
      func_0x0001003aef98(auStack_90,auStack_f0);
      pcVar3 = "read";
      func_0x0001003a83dc(&uStack_f8,"read");
      func_0x000104bef5f8();
      pcVar4 = pcVar3;
      FUN_1052b079c();
      func_0x0001003adcc0(auStack_c0,pcVar4);
      func_0x000104bdbd48(auStack_108,pcVar3,auStack_c0,1);
      uStack_80 = uStack_f8;
      uStack_f8 = 0;
      func_0x0001003aef98(auStack_78,auStack_108);
      func_0x0001003a83dc(&uStack_110,"rewind");
      func_0x000104bef4f0();
      func_0x0001052bd3e4(auStack_120);
      uStack_68 = uStack_110;
      uStack_110 = 0;
      func_0x0001003aef98(auStack_60,auStack_120);
      func_0x0001003a83dc(&uStack_128,"close");
      func_0x0001003b166c(auStack_148);
      func_0x0001052bd3e4(auStack_138,auStack_148);
      uStack_50 = uStack_128;
      uStack_128 = 0;
      func_0x0001003aef98(auStack_48,auStack_138);
      func_0x000104bdbd44(0x1136ba148,0x1138193b0,1,&uStack_b0,5);
      lVar5 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a8 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052bd3f0(auStack_138);
      func_0x0001052bd3f0(auStack_148);
      func_0x0001003a8c94(&uStack_128);
      func_0x0001052bd3f0(auStack_120);
      func_0x0001003a8c94(&uStack_110);
      func_0x0001052bd3f0(auStack_108);
      func_0x0001052bd3f0(auStack_c0);
      func_0x0001003a8c94(&uStack_f8);
      func_0x0001052bd3f0(auStack_f0);
      func_0x0001003a8c94(&uStack_e0);
      func_0x0001052bd3f0(auStack_d8);
      func_0x0001003a8c94(&uStack_c8);
      ___cxa_guard_release(0x1136ba130);
    }
  }
  return;
}



/* Entry: 1052bcfe0; end: 1052bd07b;  */

undefined8 FUN_1052bcfe0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138193a8 & 1) == 0) {
    iVar4 = 0x138193a8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052bd07c();
      lStack_20 = lRam00000001138193b0;
      if (lRam00000001138193b0 != 0) {
        piVar1 = (int *)(lRam00000001138193b0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819398,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x1138193a8);
    }
  }
  return 0x113819398;
}



/* Entry: 1052bd07c; end: 1052bd0cf;  */

void FUN_1052bd07c(void)

{
  int iVar1;
  
  if ((bRam00000001138193b8 & 1) == 0) {
    iVar1 = 0x138193b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138193b0,"_djinni_interface_UploadStreamDataProvider");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138193b8);
      return;
    }
  }
  return;
}



/* Entry: 1052bd0d0; end: 1052bd10f;  */

undefined1  [16] FUN_1052bd0d0(void)

{
  undefined1 auVar1 [16];
  long lStack_28;
  
  func_0x00010b9a96d0(&lStack_28);
  auVar1 = *(undefined1 (*) [16])(lStack_28 + 0x20);
  func_0x000104bdb38c(&lStack_28);
  return auVar1;
}



/* Entry: 1052bd110; end: 1052bd163;  */

void FUN_1052bd110(void)

{
  func_0x0001052bd474();
  func_0x0001052bd41c();
  return;
}



/* Entry: 1052bd164; end: 1052bd1ab;  */

long FUN_1052bd164(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bd1ac; end: 1052bd1ff;  */

void FUN_1052bd1ac(void)

{
  func_0x0001052bd474();
  func_0x0001052bd41c();
  return;
}



/* Entry: 1052bd200; end: 1052bd21b;  */

long FUN_1052bd200(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bd21c; end: 1052bd26f;  */

void FUN_1052bd21c(void)

{
  func_0x0001052bd474();
  func_0x0001052bd41c();
  return;
}



/* Entry: 1052bd270; end: 1052bd28f;  */

long FUN_1052bd270(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bd290; end: 1052bd2a3;  */

void FUN_1052bd290(void)

{
  FUN_1052bd37c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052bd2a4; end: 1052bd2b7;  */

void FUN_1052bd2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052bd2b8; end: 1052bd2cb;  */

void FUN_1052bd2b8(void)

{
  FUN_1052bd2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052bd2cc; end: 1052bd2db;  */

undefined1  [16] FUN_1052bd2cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052bd2dc; end: 1052bd37b;  */

void FUN_1052bd2dc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110875690;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  FUN_1052bb074(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052bd37c; end: 1052bd38b;  */

void FUN_1052bd37c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110875640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052bd38c; end: 1052bd3b7;  */

long * FUN_1052bd38c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}


