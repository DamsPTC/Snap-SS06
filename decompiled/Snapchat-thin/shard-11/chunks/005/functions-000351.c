/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10867b848; end: 10867b87b;  */

void FUN_10867b848(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010867cf58();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1a8;
    func_0x00010068e154();
  }
  return;
}



/* Entry: 10867b87c; end: 10867b8c3;  */

void FUN_10867b87c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010867cf6c();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10867b918(param_2,param_3);
  FUN_10867b8c4();
  return;
}



/* Entry: 10867b8c4; end: 10867b917;  */

void FUN_10867b8c4(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010867cf8c();
    func_0x000107c27dd8();
    func_0x00010867cfec();
    FUN_10867b94c();
  }
  func_0x00010867cf7c();
  func_0x00010867b9d0();
  return;
}



/* Entry: 10867b918; end: 10867b94b;  */

long FUN_10867b918(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  while (param_1 != param_2) {
    lVar1 = lVar1 + 1;
    func_0x000107c27be0();
  }
  return lVar1;
}



/* Entry: 10867b94c; end: 10867b97f;  */

void FUN_10867b94c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10867b980();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10867b980; end: 10867b993;  */

void FUN_10867b980(void)

{
  FUN_10867b994();
  return;
}



/* Entry: 10867b994; end: 10867ba67;  */

undefined8 * FUN_10867b994(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  while (param_2 != param_3) {
    *param_4 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c27be0();
    param_4 = param_4 + 1;
  }
  return param_4;
}



/* Entry: 10867ba68; end: 10867ba6f;  */

void FUN_10867ba68(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010867cf58(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x1a8;
    func_0x00010068e154();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10867ba70; end: 10867baa3;  */

void FUN_10867ba70(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010867cf58();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x1a8;
    func_0x00010068e154();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10867baa4; end: 10867bac3;  */

void FUN_10867baa4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10867bac4; end: 10867bbfb;  */

undefined8 * FUN_10867bac4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a61d18;
  func_0x000104bee748(param_1 + 0x19);
  FUN_10865a95c(param_1 + 0xd);
  func_0x000107c288a4(param_1 + 0xb);
  func_0x000107c28a70(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c28ab4(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  return param_1;
}



/* Entry: 10867bbfc; end: 10867bc13;  */

void FUN_10867bbfc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10867bc14; end: 10867bc5f;  */

void FUN_10867bc14(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1e8 [440];
  
  FUN_10867bc60(auStack_1e8,param_2);
  FUN_10867bc60(param_1,auStack_1e8);
  func_0x00010867cf64();
  return;
}



/* Entry: 10867bc60; end: 10867bc7f;  */

void FUN_10867bc60(void)

{
  func_0x00010867d028();
  FUN_10867bc80();
  return;
}



/* Entry: 10867bc80; end: 10867bcab;  */

undefined1 * FUN_10867bc80(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x1a8] = 0;
  FUN_10867bcac();
  return param_1;
}



/* Entry: 10867bcac; end: 10867bcbf;  */

void FUN_10867bcac(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    func_0x00010068df2c();
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    return;
  }
  return;
}



/* Entry: 10867bcc0; end: 10867bd43;  */

undefined8 * FUN_10867bcc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_3a0 [440];
  undefined1 auStack_1e8 [440];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010867bdec(auStack_1e8);
  func_0x00010867bdec(auStack_3a0,param_3);
  FUN_10867bd44(param_1,auStack_1e8,auStack_3a0);
  func_0x00010867cf64();
  func_0x00010867cfe4();
  return param_1;
}



/* Entry: 10867bd44; end: 10867bdbf;  */

void FUN_10867bd44(void)

{
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010867cf6c();
  while ((((*(byte *)(unaff_x20 + 0x36) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x36) & 1) != 0)) &&
         (*unaff_x20 != *unaff_x19))) {
    func_0x00010068e438();
    FUN_10867b444();
    func_0x000107c28980();
  }
  func_0x00010867cf7c();
  FUN_10867bdc0();
  return;
}



/* Entry: 10867bdc0; end: 10867be0b;  */

long FUN_10867bdc0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010867ba30(param_1);
  }
  return param_1;
}



/* Entry: 10867be0c; end: 10867be43;  */

undefined1 * FUN_10867be0c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x1a8] = 0;
  FUN_10867be44();
  return param_1;
}



/* Entry: 10867be44; end: 10867be57;  */

void FUN_10867be44(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    func_0x00010068e4a4();
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    return;
  }
  return;
}



/* Entry: 10867be58; end: 10867be8f;  */

void FUN_10867be58(long param_1)

{
  func_0x00010068e4a4();
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  return;
}



/* Entry: 10867be90; end: 10867becb;  */

undefined8 * FUN_10867be90(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10867becc(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x18);
  return param_1;
}



/* Entry: 10867becc; end: 10867bf1f;  */

void FUN_10867becc(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010867cf8c();
    FUN_10867bf20();
    func_0x00010867cfec();
    FUN_10867bf68();
  }
  func_0x00010867cf7c();
  func_0x00010867c0ac();
  return;
}



/* Entry: 10867bf20; end: 10867bf67;  */

void FUN_10867bf20(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1 + 2;
    func_0x00010528d560();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
  }
  else {
    func_0x00010528d4e0();
    plVar1 = param_1 + 2;
    FUN_10867bf9c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10867bf68; end: 10867bf9b;  */

void FUN_10867bf68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10867bf9c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10867bf9c; end: 10867bfaf;  */

void FUN_10867bf9c(void)

{
  FUN_10867bfb0();
  return;
}



/* Entry: 10867bfb0; end: 10867c02b;  */

long FUN_10867bfb0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010867d014();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c27994(param_4,param_2);
    param_4 = lStack_38 + 0x18;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10867c02c(auStack_60);
  return param_4;
}



/* Entry: 10867c02c; end: 10867c05b;  */

long FUN_10867c02c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10867c05c(param_1);
  }
  return param_1;
}



/* Entry: 10867c05c; end: 10867c07b;  */

void FUN_10867c05c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10867c07c; end: 10867c0d7;  */

void FUN_10867c07c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10867c0d8; end: 10867c10b;  */

void FUN_10867c0d8(void)

{
  func_0x00010867c0f0();
  return;
}



/* Entry: 10867c10c; end: 10867c19b;  */

undefined1  [16] FUN_10867c10c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10867c19c(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_50 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
    plStack_58 = param_1 + 1;
    FUN_10867c1ec(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x00010867c238(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10867c19c; end: 10867c1eb;  */

long * FUN_10867c19c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_10867c1e4;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10867c1e4;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10867c1e4:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10867c1ec; end: 10867c25b;  */

void FUN_10867c1ec(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10867c25c; end: 10867c273;  */

void FUN_10867c25c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10867c274; end: 10867c2a7;  */

void FUN_10867c274(void)

{
  func_0x00010867c28c();
  return;
}



/* Entry: 10867c2a8; end: 10867c41b;  */

undefined1  [16] FUN_10867c2a8(float param_1,float param_2,long *param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  ulong uVar5;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar6;
  long *unaff_x21;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  undefined1 auStack_58 [24];
  
  uVar6 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    func_0x000107c32088();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar3 = extraout_x8;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar7;
          if (unaff_x21 == (long *)0x0) goto LAB_10867c34c;
          uVar5 = unaff_x21[1];
          plVar7 = unaff_x21;
          if (uVar5 != uVar6) break;
          if (unaff_x21[2] == uVar6) {
            uVar2 = 0;
            goto LAB_10867c408;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          func_0x000100bd8310();
          uVar3 = extraout_x8_00;
          uVar5 = extraout_x9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10867c34c:
  func_0x000107c3208c(auStack_58);
  FUN_10867c41c();
  func_0x000107c32090();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x000107c32080();
    uVar1 = uVar8 == 3;
    func_0x000107c3207c();
    func_0x000107c28a7c(param_3);
    uVar8 = param_3[1];
    func_0x000107c32088();
    if ((bool)uVar1) {
      unaff_x23 = extraout_x8_01 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x000107c32074();
    if (extraout_x9_00 != 0) {
      uVar6 = *(ulong *)(extraout_x9_00 + 8);
      lVar4 = extraout_x8_02;
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        func_0x000100bd8310();
        lVar4 = extraout_x8_03;
        uVar6 = extraout_x9_01;
      }
      *(long **)(lVar4 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000100ab3630();
  }
  func_0x000107c3206c();
  uVar2 = 1;
LAB_10867c408:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 10867c41c; end: 10867c43b;  */

void FUN_10867c41c(void)

{
  func_0x000107c32068();
  func_0x000107c32078();
  return;
}



/* Entry: 10867c43c; end: 10867c4a7;  */

undefined8 * FUN_10867c43c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_10867c4d0(param_1 + 2);
  }
  FUN_10867baa4((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10867baa4(param_1 + 2);
  return param_1;
}



/* Entry: 10867c4a8; end: 10867c4cf;  */

void FUN_10867c4a8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010867cf58();
  func_0x000107c3194c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10867c4d0; end: 10867c50f;  */

void FUN_10867c4d0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10867c510; end: 10867c53b;  */

void FUN_10867c510(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10867c53c; end: 10867c587;  */

void FUN_10867c53c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x000107c3194c();
  func_0x000107c3194c(param_2,&uStack_40);
  func_0x00010867cedc();
  return;
}



/* Entry: 10867c588; end: 10867c5f3;  */

void FUN_10867c588(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_10867c628(auStack_40,*param_1);
    FUN_10867c5f4(param_1 + 1,auStack_40);
    func_0x00010867cedc();
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}



/* Entry: 10867c5f4; end: 10867c627;  */

long FUN_10867c5f4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10867c4a8();
  }
  else {
    func_0x00010867c4f4();
  }
  return param_1;
}



/* Entry: 10867c628; end: 10867c693;  */

void FUN_10867c628(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c313f8();
  func_0x000107c2879c(&uStack_40);
  func_0x000107c313d8(param_2,1);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  func_0x00010867cedc();
  return;
}



/* Entry: 10867c694; end: 10867c74b;  */

void FUN_10867c694(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = FUN_10867ccdc;
  puVar2[1] = FUN_10867ce0c;
  uVar1 = param_2[1];
  puVar2[4] = *param_2;
  puVar2[5] = uVar1;
  param_2[1] = 0;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000107c287c4(param_1,puVar2 + 2);
  puVar2[6] = param_3;
  *(undefined1 *)(puVar2 + 8) = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,0,puVar2);
  return;
}



/* Entry: 10867c74c; end: 10867c8ab;  */

void FUN_10867c74c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  *puVar4 = FUN_10867cc58;
  puVar4[1] = FUN_10867ccb0;
  func_0x000107c27f94(puVar4 + 2);
  func_0x000107c287c4(param_1,puVar4 + 2);
  FUN_10867c8ac(puVar4 + 5);
  puVar4[4] = puVar4[5];
  plVar1 = (long *)(puVar4[5] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar4[4] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 6) = 0;
    lVar5 = puVar4[4];
    func_0x00010867cf40();
    if (*param_2 == 0) {
      func_0x000107c3a5c0();
    }
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        bVar3 = cVar2 == '\0';
        if (bVar3) {
          func_0x00010867d000();
          if (bVar3) {
            func_0x00010867cf28();
            func_0x00010867cee4();
          }
          func_0x00010867ce88();
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar5 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar4 + 4);
  func_0x00010867cf38();
  func_0x00010867cecc();
  func_0x00010867cfb0();
  func_0x00010867ce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 10867c8ac; end: 10867cba3;  */

void FUN_10867c8ac(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined1 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  int iStack_b8;
  byte bStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [32];
  char cStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar8 = *param_2;
  func_0x000107c27f94(auStack_158);
  puVar4 = auStack_158;
  func_0x000107c287c4(param_1);
  uStack_128 = 0;
  func_0x000107c28258();
  uStack_118 = 1;
  puStack_120 = puVar4;
  if ((*(byte *)(lVar8 + 0xe0) & 1) == 0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    FUN_10886d4b0(&lStack_a8,*(undefined8 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 8));
    lStack_d8 = 0;
    auStack_d0[0] = 0;
    bStack_b0 = 0;
    if (cStack_78 == '\0') {
      lVar7 = 0;
    }
    else {
      func_0x00010867c4f4(auStack_d0,auStack_98);
      func_0x00010867c4d0(auStack_98);
      lVar7 = lStack_d8;
    }
    lStack_d8 = lStack_a0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    lStack_110 = 0;
    lStack_a0 = lVar7;
    while( true ) {
      if ((((bStack_b0 & 1) == 0) && ((uStack_e8 & 1) == 0)) || (lStack_d8 == lStack_110)) break;
      if ((bStack_b0 & 1) == 0) {
        uVar9 = *(undefined8 *)(lStack_d8 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_70,lStack_d8 + 0x58);
        func_0x000107c27f54(auStack_58,&UNK_10f2e0451,auStack_70);
        func_0x00010bcc7444(uVar9,0x65,auStack_58);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
      }
      if (iStack_b8 < *(int *)(lVar8 + 0xc)) break;
      func_0x000107c28840(&uStack_140,auStack_d0);
      FUN_10867c588(&lStack_d8);
    }
    func_0x00010867cfb8();
    FUN_10867baa4(auStack_d0);
    FUN_10867c43c(&lStack_a8);
    FUN_10866c90c(lVar8 + 200,&uStack_140);
    func_0x000107c27a04(&uStack_140);
  }
  lVar7 = *(long *)(lVar8 + 200);
  if (lVar7 != *(long *)(lVar8 + 0xd0)) {
    plVar5 = *(long **)(lVar8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar7);
    if (((ulong)plVar5 & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x18);
      FUN_10886d554(uVar9,lVar7);
      iVar2 = (int)uVar9;
      iVar1 = iVar2 - *(int *)(lVar8 + 0xc);
      if (iVar1 == 0 || iVar2 < *(int *)(lVar8 + 0xc)) {
        FUN_10867cba4(lVar8 + 200,*(undefined8 *)(lVar8 + 200));
      }
      else {
        if (*(int *)(lVar8 + 0x10) <= iVar1) {
          iVar1 = *(int *)(lVar8 + 0x10);
        }
        iVar3 = iVar2;
        func_0x000107c3208c();
        FUN_10867ab3c();
        if ((iVar3 == 0) || (iVar2 - iVar1 <= *(int *)(lVar8 + 0xc))) {
          FUN_10867cba4(lVar8 + 200,*(undefined8 *)(lVar8 + 200));
        }
        plVar5 = *(long **)(lVar8 + 0x58);
        puVar6 = &uStack_128;
        func_0x000107c2825c();
        lStack_a8 = (long)puVar6 * 1000;
        (**(code **)(*plVar5 + 0x10))(plVar5,0x27f,&lStack_a8);
      }
    }
  }
  func_0x000107c287c8(auStack_158);
  func_0x000107c27fb8(auStack_158);
  return;
}



/* Entry: 10867cba4; end: 10867cbd7;  */

void FUN_10867cba4(long param_1)

{
  long unaff_x19;
  
  func_0x00010867cf58();
  FUN_10867cbd8(unaff_x19 + 0x18,*(undefined8 *)(param_1 + 8));
  func_0x000107c279c0();
  return;
}



/* Entry: 10867cbd8; end: 10867cc03;  */

void FUN_10867cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10867cc04(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10867cc04; end: 10867cc57;  */

void FUN_10867cc04(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010867cf8c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x000107c3194c(in_x3,unaff_x21);
    in_x3 = in_x3 + 0x18;
  }
  return;
}



/* Entry: 10867cc58; end: 10867ccaf;  */

void FUN_10867cc58(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010867cf38();
  func_0x00010867cecc();
  func_0x00010867cfb0();
  func_0x00010867ce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867ccb0; end: 10867ccdb;  */

void FUN_10867ccb0(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x00010867cecc();
  func_0x00010867ce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867ccdc; end: 10867ce0b;  */

void FUN_10867ccdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    FUN_10867c74c(param_1 + 0x38);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x38);
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010867cf40();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      plVar4 = (long *)(lVar5 + 0x10);
      do {
        lVar5 = *plVar4;
        if (lVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
          if (bVar3) {
            func_0x00010867d000();
            if (bVar3) {
              func_0x00010867cf28();
              func_0x00010867cee4();
            }
            func_0x00010867ce88();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar5 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x30);
  func_0x00010867cfa8();
  func_0x00010867cfc4();
  func_0x00010867cfb0();
  func_0x00010867ce80();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867ce0c; end: 10867ce47;  */

void FUN_10867ce0c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010867cfa8();
    func_0x00010867cfc4();
  }
  func_0x00010867ce80();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867ce48; end: 10867d03b;  */

void FUN_10867ce48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10867d03c; end: 10867d0d7;  */

long * FUN_10867d03c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long alStack_48 [5];
  
  if ((ulong)((param_1[2] - *param_1) / 0x1a8) < param_2) {
    if (0x9a90e7d95bc609 < param_2) {
      FUN_10867b624();
      plVar2 = alStack_48;
      func_0x00010867b814();
      func_0x00010867dd30();
      uVar1 = plVar2[1];
      if (uVar1 < (ulong)plVar2[2]) {
        FUN_10867d1b0();
        plVar3 = (long *)(uVar1 + 0x20);
      }
      else {
        plVar3 = plVar2;
        FUN_10867d1e4();
      }
      plVar2[1] = (long)plVar3;
      return plVar3 + -4;
    }
    FUN_10867b638(alStack_48,param_2,(param_1[1] - *param_1) / 0x1a8);
    FUN_10867b5a4(param_1,alStack_48);
    param_1 = alStack_48;
    func_0x00010867b814(param_1);
  }
  return param_1;
}



/* Entry: 10867d0d8; end: 10867d117;  */

long FUN_10867d0d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10867d1b0();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_10867d1e4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 10867d118; end: 10867d18f;  */

void FUN_10867d118(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c288a8(&uStack_48,param_2 + 0x60);
  uStack_38 = uStack_48;
  uStack_48 = 0;
  lStack_40 = param_2;
  FUN_10867d348(param_1,&lStack_40,uVar1);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_48);
  return;
}



/* Entry: 10867d190; end: 10867d19b;  */

void FUN_10867d190(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  iVar1 = (int)param_2 + 0xa0;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x60);
  }
  lVar2 = *(long *)(param_2 + 0xa8);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10867d19c; end: 10867d1af;  */

void FUN_10867d19c(void)

{
  func_0x00010867d2e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867d1b0; end: 10867d1e3;  */

void FUN_10867d1b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10867d290(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 10867d1e4; end: 10867d28f;  */

long FUN_10867d1e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000104be77f0(param_1,(param_1[1] - *param_1 >> 5) + 1);
  func_0x000104be74ec(auStack_58,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_10867d290(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x20;
  func_0x000104be74b4(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000104be769c(auStack_58);
  return lVar2;
}



/* Entry: 10867d290; end: 10867d347;  */

undefined8 * FUN_10867d290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c27994(&uStack_40);
  uVar1 = uStack_30;
  uVar2 = *param_3;
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c27914(&uStack_40);
  return param_1;
}



/* Entry: 10867d348; end: 10867d3ff;  */

void FUN_10867d348(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = FUN_10867daec;
  puVar2[1] = FUN_10867dc1c;
  uVar1 = param_2[1];
  puVar2[4] = *param_2;
  puVar2[5] = uVar1;
  param_2[1] = 0;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000107c287c4(param_1,puVar2 + 2);
  puVar2[6] = param_3;
  *(undefined1 *)(puVar2 + 8) = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,0,puVar2);
  return;
}



/* Entry: 10867d400; end: 10867d563;  */

void FUN_10867d400(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  *puVar4 = FUN_10867da68;
  puVar4[1] = FUN_10867dac0;
  func_0x000107c27f94(puVar4 + 2);
  func_0x000107c287c4(param_1,puVar4 + 2);
  FUN_10867d564(puVar4 + 5);
  puVar4[4] = puVar4[5];
  plVar1 = (long *)(puVar4[5] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar4[4] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 6) = 0;
    lVar5 = puVar4[4];
    func_0x00010867dcdc();
    if (*param_2 == 0) {
      func_0x000107c3a5c0();
    }
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        bVar3 = cVar2 == '\0';
        if (bVar3) {
          func_0x00010867dd48();
          if (bVar3) {
            func_0x00010867dcec();
            func_0x00010867dcb4();
          }
          func_0x00010867dc80();
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar5 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar4 + 4);
  func_0x00010867dcd4();
  func_0x00010867dcac();
  func_0x00010867dcfc();
  func_0x00010867dc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 10867d564; end: 10867d9bb;  */

void FUN_10867d564(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_380 [24];
  long lStack_368;
  long lStack_360;
  undefined1 auStack_350 [24];
  undefined8 uStack_338;
  undefined1 *puStack_330;
  undefined1 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [64];
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined4 uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  long alStack_238 [3];
  undefined1 auStack_220 [352];
  long lStack_c0;
  char cStack_b8;
  
  lVar12 = *param_2;
  func_0x000107c27f94(auStack_380);
  puVar3 = auStack_380;
  func_0x000107c287c4(param_1);
  if (0 < *(int *)(lVar12 + 8)) {
    uStack_338 = 0;
    func_0x000107c28258();
    uStack_328 = 1;
    puStack_330 = puVar3;
    (**(code **)(**(long **)(lVar12 + 0x20) + 0x28))(auStack_350);
    FUN_108865e4c(&lStack_368,*(undefined8 *)(lVar12 + 0x10),auStack_350,*(undefined4 *)(lVar12 + 8)
                 );
    lVar8 = lStack_368;
    if (lStack_368 == lStack_360) {
      func_0x00010867dcfc();
    }
    else {
      for (; lVar8 != lStack_360; lVar8 = lVar8 + 0x38) {
        func_0x0001006941fc(alStack_238,*(undefined8 *)(lVar12 + 0x10),lVar8,0);
        lVar7 = lStack_c0;
        if (cStack_b8 == '\0') {
          lVar7 = 0x7fffffffffffffff;
        }
        FUN_108865d98(&uStack_250,*(undefined8 *)(lVar12 + 0x10),lVar8,*(undefined8 *)(lVar8 + 0x18)
                      ,*(undefined8 *)(lVar8 + 0x20));
        uStack_278 = 0;
        uStack_280 = 0;
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_260 = 0x3f800000;
        lStack_298 = 0;
        lStack_290 = 0;
        uStack_288 = 0;
        uVar6 = (long)(uStack_248 - uStack_250) / 0x1a8;
        FUN_10867d03c(&lStack_298);
        uVar2 = uStack_248;
        uVar9 = uStack_250;
        if (uStack_250 != uStack_248) {
          for (; uVar9 != uVar2; uVar9 = uVar9 + 0x1a8) {
            uVar4 = uVar9;
            func_0x00010867b2f4();
            if (((uVar6 & 1) == 0) || ((long)uVar4 < lVar7)) {
              FUN_10867b1ac(&uStack_280,uVar9 + 0x18);
              uVar6 = uVar9;
              FUN_10867b444(&lStack_298);
            }
          }
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18);
        func_0x000107c278b8(auStack_2f0,&DAT_10f4affd4);
        func_0x000107c31420(auStack_2d8,uVar10,auStack_2f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2f0);
        if (lStack_268 != 0) {
          FUN_10886488c(*(undefined8 *)(lVar12 + 0x10),lVar8,&uStack_280);
        }
        FUN_108865bb0(*(undefined8 *)(lVar12 + 0x10),lVar8);
        if (lStack_298 != lStack_290) {
          (**(code **)(**(long **)(lVar12 + 0x30) + 0x138))
                    (*(long **)(lVar12 + 0x30),lVar8,&lStack_298);
          plVar11 = *(long **)(lVar12 + 0x30);
          puVar3 = auStack_220;
          func_0x0001006b61e4(puVar3);
          (**(code **)(*plVar11 + 0x140))(plVar11,lVar8,(ulong)puVar3 & 0xffffffff | 0x100000000);
          uStack_308 = 0;
          uStack_300 = 0;
          uStack_2f8 = 0;
          func_0x000104be7444(&uStack_308,(lStack_290 - lStack_298) / 0x1a8);
          lVar1 = lStack_290;
          for (lVar7 = lStack_298; lVar7 != lVar1; lVar7 = lVar7 + 0x1a8) {
            FUN_10867d0d8(&uStack_308,lVar7,lVar7 + 0x18);
          }
          uStack_320 = 0;
          uStack_318 = 0;
          uStack_310 = 0;
          (**(code **)**(undefined8 **)(lVar12 + 0x40))
                    (*(undefined8 **)(lVar12 + 0x40),lVar8,alStack_238,1,&uStack_320,&uStack_308);
          func_0x00010867b9fc(&uStack_320);
          func_0x000104be1274(&uStack_308);
        }
        func_0x000107c31428(auStack_2d8);
        func_0x000107c31424(auStack_2d8);
        func_0x00010867b9fc(&lStack_298);
        func_0x00010867bb84(&uStack_280);
        func_0x00010867b9fc(&uStack_250);
        func_0x000107c287e4(alStack_238);
      }
      plVar11 = *(long **)(lVar12 + 0x50);
      puVar5 = &uStack_338;
      func_0x000107c2825c();
      alStack_238[0] = (long)puVar5 * 1000;
      (**(code **)(*plVar11 + 0x10))(plVar11,0x283,alStack_238);
    }
    FUN_10867d9bc(&lStack_368);
    func_0x000107c27a04(auStack_350);
    if (lStack_368 == lStack_360) goto LAB_10867d8f8;
  }
  func_0x000107c287c8(auStack_380);
LAB_10867d8f8:
  func_0x000107c27fb8(auStack_380);
  return;
}



/* Entry: 10867d9bc; end: 10867da27;  */

undefined8 FUN_10867d9bc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010867d9f0(&uStack_28);
  return param_1;
}



/* Entry: 10867da28; end: 10867da2f;  */

void FUN_10867da28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10867da30; end: 10867da67;  */

void FUN_10867da30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10867da68; end: 10867dabf;  */

void FUN_10867da68(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010867dcd4();
  func_0x00010867dcac();
  func_0x00010867dcfc();
  func_0x00010867dc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867dac0; end: 10867daeb;  */

void FUN_10867dac0(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x00010867dcac();
  func_0x00010867dc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867daec; end: 10867dc1b;  */

void FUN_10867daec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    FUN_10867d400(param_1 + 0x38);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x38);
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010867dcdc();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      plVar4 = (long *)(lVar5 + 0x10);
      do {
        lVar5 = *plVar4;
        if (lVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
          if (bVar3) {
            func_0x00010867dd48();
            if (bVar3) {
              func_0x00010867dcec();
              func_0x00010867dcb4();
            }
            func_0x00010867dc80();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar5 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x30);
  func_0x00010867dd20();
  func_0x00010867dd28();
  func_0x00010867dcfc();
  func_0x00010867dc78();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867dc1c; end: 10867dc57;  */

void FUN_10867dc1c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010867dd20();
    func_0x00010867dd28();
  }
  func_0x00010867dc78();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867dc58; end: 10867dd5b;  */

void FUN_10867dc58(void)

{
  return;
}



/* Entry: 10867dd5c; end: 10867de63;  */

void FUN_10867dd5c(void)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  int extraout_w10;
  long unaff_x19;
  undefined4 unaff_w23;
  long unaff_x27;
  long *in_stack_00000010;
  long in_stack_00000028;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  func_0x00010867e380();
  func_0x00010867e298();
  func_0x00010867e370();
  if ((bool)in_ZR) {
    func_0x00010867e3b0();
  }
  func_0x00010867e344();
  func_0x00010867e324();
  func_0x00010867e2ec();
  *(undefined4 *)(unaff_x27 + 0x54) = unaff_w23;
  func_0x00010867e304();
  func_0x000107c27b98(unaff_x27 + 0xa0);
  FUN_10867decc();
  *(undefined4 *)(unaff_x27 + 0x10c) = in_stack_000000a0;
  *(char *)(unaff_x27 + 0x110) = (char)unaff_w23;
  lVar1 = unaff_x19 + 8;
  func_0x0001006933e4(lVar1,in_stack_00000098);
  *(ushort *)(unaff_x27 + 0x108) = (ushort)lVar1 | 0x100;
  *(undefined8 *)(unaff_x27 + 0x118) = in_stack_000000a8;
  *(undefined1 *)(unaff_x27 + 0x120) = 1;
  *(undefined8 *)(unaff_x27 + 0x130) = in_stack_000000b8;
  *(undefined1 *)(unaff_x27 + 0x138) = 1;
  FUN_10867a634(&stack0x00000010,unaff_x19 + 0x20);
  plVar2 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010,in_stack_000000b0);
  }
  *(ushort *)(unaff_x27 + 0x128) = (ushort)plVar2 | 0x100;
  func_0x000107c30128();
  if (in_stack_00000028 != 0) {
    do {
      func_0x00010867e358();
    } while (extraout_w10 != 0);
  }
  func_0x00010867e39c();
  func_0x00010867e350();
  func_0x00010867e330();
  func_0x00010867e31c();
  return;
}



/* Entry: 10867de64; end: 10867decb;  */

void FUN_10867de64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x168;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a61e20;
  _bzero(puVar1 + 5,0x140);
  puVar1[3] = &PTR_DAT_110cee570;
  puVar1[4] = &PTR_DAT_110cee5d8;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 0x27) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10867decc; end: 10867deeb;  */

undefined4 FUN_10867decc(uint param_1)

{
  if (param_1 < 0x19) {
    return *(undefined4 *)(&UNK_10df41078 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 10867deec; end: 10867dfb3;  */

void FUN_10867deec(void)

{
  undefined1 in_ZR;
  int extraout_w10;
  undefined1 unaff_w23;
  long unaff_x27;
  long *in_stack_00000010;
  long in_stack_00000028;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a8;
  
  func_0x00010867e380();
  func_0x00010867e298();
  func_0x00010867e370();
  if ((bool)in_ZR) {
    func_0x00010867e3b0();
  }
  func_0x00010867e344();
  func_0x00010867e324();
  func_0x00010867e2ec();
  *(undefined4 *)(unaff_x27 + 0x54) = 0;
  func_0x00010867e304();
  FUN_10867decc();
  *(undefined4 *)(unaff_x27 + 0x10c) = in_stack_00000098;
  *(undefined1 *)(unaff_x27 + 0x110) = unaff_w23;
  func_0x00010867e3a4();
  func_0x00010867e2c0();
  if (in_stack_00000010 != (long *)0x0) {
    (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010,in_stack_000000a8);
  }
  *(ushort *)(unaff_x27 + 0x128) = (ushort)in_stack_00000010 | 0x100;
  func_0x000107c30128();
  if (in_stack_00000028 != 0) {
    do {
      func_0x00010867e358();
    } while (extraout_w10 != 0);
  }
  func_0x00010867e39c();
  func_0x00010867e350();
  func_0x00010867e330();
  func_0x00010867e31c();
  return;
}



/* Entry: 10867dfb4; end: 10867e08b;  */

void FUN_10867dfb4(void)

{
  undefined1 in_ZR;
  int extraout_w10;
  undefined1 unaff_w23;
  undefined4 *unaff_x26;
  long unaff_x27;
  long *in_stack_00000010;
  long in_stack_00000028;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a8;
  
  func_0x00010867e380();
  func_0x00010867e298();
  func_0x00010867e370();
  if ((bool)in_ZR) {
    *(undefined4 *)(unaff_x27 + 0xc0) = *unaff_x26;
    *(undefined1 *)(unaff_x27 + 0xc4) = 1;
  }
  func_0x00010867e344();
  func_0x00010867e324();
  func_0x00010867e2ec();
  *(undefined4 *)(unaff_x27 + 0x54) = 2;
  func_0x00010867e304();
  FUN_10867decc();
  *(undefined4 *)(unaff_x27 + 0x10c) = in_stack_00000098;
  *(undefined1 *)(unaff_x27 + 0x110) = unaff_w23;
  func_0x00010867e3a4();
  func_0x00010867e2c0();
  if (in_stack_00000010 != (long *)0x0) {
    (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010,in_stack_000000a8);
  }
  *(ushort *)(unaff_x27 + 0x128) = (ushort)in_stack_00000010 | 0x100;
  func_0x000107c30128();
  if (in_stack_00000028 != 0) {
    do {
      func_0x00010867e358();
    } while (extraout_w10 != 0);
  }
  func_0x00010867e39c();
  func_0x00010867e350();
  func_0x00010867e330();
  func_0x00010867e31c();
  return;
}



/* Entry: 10867e08c; end: 10867e1c7;  */

void FUN_10867e08c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12,
                  undefined4 param_13,undefined4 param_14,long param_15,long param_16)

{
  long lVar1;
  int extraout_w10;
  undefined8 in_stack_00000090;
  byte in_stack_00000098;
  
  func_0x00010867e380();
  FUN_10867de64(&param_15);
  lVar1 = param_15;
  func_0x000107c27b98(param_15 + 0x30,param_2);
  func_0x000107c27b98(lVar1 + 0x60,param_7);
  *(undefined8 *)(lVar1 + 0x80) = param_8;
  *(undefined1 *)(lVar1 + 0x88) = 1;
  __ZNSt3__19to_stringEx(&param_11,in_stack_00000090);
  func_0x000107c27b98(lVar1 + 0xa0,&param_11);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&param_11);
  *(ushort *)(lVar1 + 0x50) = in_stack_00000098 | 0x100;
  *(undefined4 *)(lVar1 + 0x54) = 3;
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(undefined8 *)(lVar1 + 0x90) = param_4;
  *(undefined1 *)(lVar1 + 0x98) = 1;
  FUN_10867decc();
  *(undefined4 *)(lVar1 + 0x10c) = param_3;
  *(undefined1 *)(lVar1 + 0x110) = 1;
  param_1 = param_1 + 8;
  func_0x0001006933e4(param_1,param_6);
  *(ushort *)(lVar1 + 0x108) = (ushort)param_1 | 0x100;
  *(undefined8 *)(lVar1 + 0x130) = param_5;
  *(undefined1 *)(lVar1 + 0x138) = 1;
  func_0x000107c30128();
  param_11 = lVar1;
  param_12 = param_16;
  if (param_16 != 0) {
    do {
      func_0x00010867e358();
    } while (extraout_w10 != 0);
  }
  func_0x00010b4a72ec();
  func_0x000105979594(&param_11);
  func_0x00010867e31c();
  return;
}



/* Entry: 10867e1c8; end: 10867e1cb;  */

undefined8 * FUN_10867e1c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61db8;
  func_0x000107c28a6c(param_1 + 4);
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 10867e1cc; end: 10867e1df;  */

void FUN_10867e1cc(void)

{
  FUN_10867e1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867e1e0; end: 10867e21b;  */

undefined8 * FUN_10867e1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61db8;
  func_0x000107c28a6c(param_1 + 4);
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 10867e21c; end: 10867e21f;  */

void FUN_10867e21c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61e20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10867e220; end: 10867e233;  */

void FUN_10867e220(void)

{
  func_0x00010867e244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867e234; end: 10867e253;  */

void FUN_10867e234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010867e23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10867e254; end: 10867e27b;  */

long FUN_10867e254(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10867e27c; end: 10867e3c3;  */

void FUN_10867e27c(void)

{
  return;
}



/* Entry: 10867e3c4; end: 10867e4c7;  */

void FUN_10867e3c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x19;
  undefined1 auStack_b0 [80];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x00010867e758();
  uStack_60 = 0x254;
  func_0x00010867e78c();
  func_0x00010867e7c4();
  FUN_10867e4c8();
  func_0x000107c278b8(auStack_b0,"error_code");
  func_0x000107c2881c(param_1,auStack_b0,*(undefined4 *)(param_3 + 8));
  func_0x000107c2884c(auStack_58,param_1);
  func_0x00010867e7bc(*(undefined8 *)(*unaff_x19 + 0x50));
  func_0x00010867e774();
  func_0x00010867e7b4();
  func_0x00010867e77c();
  func_0x00010867e784();
  return;
}



/* Entry: 10867e4c8; end: 10867e537;  */

undefined8 FUN_10867e4c8(undefined8 param_1,uint param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268dd8);
  func_0x000107c28824(param_1,auStack_38,(&PTR_s_success_113269028)[param_2 & 0x1af]);
  func_0x00010867e7ac();
  return param_1;
}



/* Entry: 10867e538; end: 10867e61b;  */

void FUN_10867e538(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  plVar3 = *(long **)(param_1 + 8);
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x255;
  uVar1 = 0x4401ab;
  if (param_3 == 0) {
    uVar1 = 0x4401ac;
  }
  pppuVar2 = &ppuStack_80;
  FUN_10867e4c8(pppuVar2,uVar1);
  func_0x000107c278b8(auStack_98,"error_code");
  func_0x000107c2881c(pppuVar2,auStack_98,*(undefined4 *)(param_2 + 8));
  func_0x000107c2884c(auStack_58,pppuVar2);
  func_0x00010867e7bc(*(undefined8 *)(*plVar3 + 0x50));
  func_0x000107c2882c(auStack_58);
  func_0x00010867e7ac();
  func_0x000107c2882c(&ppuStack_80);
  return;
}



/* Entry: 10867e61c; end: 10867e707;  */

void FUN_10867e61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x19;
  undefined1 auStack_b0 [80];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x00010867e758();
  uStack_60 = 0x256;
  func_0x00010867e78c();
  func_0x00010867e7c4();
  func_0x000107c278b8(auStack_b0,&DAT_10f637eac);
  func_0x000107c2881c(param_1,auStack_b0,param_3);
  func_0x000107c2884c(auStack_58,param_1);
  func_0x00010867e7bc(*(undefined8 *)(*unaff_x19 + 0x50));
  func_0x00010867e774();
  func_0x00010867e7b4();
  func_0x00010867e77c();
  func_0x00010867e784();
  return;
}



/* Entry: 10867e708; end: 10867e70b;  */

undefined8 * FUN_10867e708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61e70;
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 10867e70c; end: 10867e71f;  */

void FUN_10867e70c(void)

{
  FUN_10867e720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867e720; end: 10867e74f;  */

undefined8 * FUN_10867e720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61e70;
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 10867e750; end: 10867e7cf;  */

void FUN_10867e750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10867e7d0; end: 10867e807;  */

void FUN_10867e7d0(void)

{
  func_0x000108680494();
  FUN_10867f028();
  func_0x000108680480();
  func_0x0001086804d0();
  return;
}


