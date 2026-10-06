/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074391cc; end: 107439203;  */

void FUN_1074391cc(undefined8 param_1,long param_2)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_18;
  
  uStack_50 = *(undefined8 *)(param_2 + 8);
  uStack_48 = *(undefined4 *)(param_2 + 0x10);
  uStack_18 = 0;
  FUN_1074331ac(param_1,&uStack_50);
  func_0x00010743bd78();
  return;
}



/* Entry: 107439204; end: 10743920b;  */

void FUN_107439204(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_18;
  
  uStack_50 = *param_3;
  uStack_48 = *(undefined4 *)(param_3 + 1);
  uStack_18 = 0;
  FUN_1074331ac(param_1,&uStack_50);
  func_0x00010743bd78();
  return;
}



/* Entry: 10743920c; end: 107439243;  */

void FUN_10743920c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_18;
  
  uStack_50 = *param_3;
  uStack_48 = *(undefined4 *)(param_3 + 1);
  uStack_18 = 0;
  FUN_1074331ac(param_1,&uStack_50);
  func_0x00010743bd78();
  return;
}



/* Entry: 107439244; end: 10743924b;  */

ulong FUN_107439244(ulong param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_250 [64];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  
  plVar2 = (long *)*param_2;
  lVar5 = param_3;
  func_0x00010743b2d4();
  uVar1 = ((*(byte *)(lVar5 + 0x10) ^ 0xff) & 6) == 0;
  if ((bool)uVar1) {
    param_1 = (ulong)*(uint *)*plVar2;
    func_0x0001077512dc(auStack_1c8);
    uStack_e0 = *(undefined8 *)(*plVar2 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*plVar2 + 0x40);
    puVar6 = auStack_1c8;
    func_0x00010743bfac();
    FUN_10743933c(param_3);
    func_0x00010743bde0();
    FUN_1074331ac();
    func_0x00010743bd78();
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8();
  }
  else {
    FUN_1074393b0(auStack_250,param_3);
    puVar6 = auStack_250;
    func_0x00010743bec0();
    func_0x00010743c1ec();
  }
  func_0x00010743b24c();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  puVar3 = auStack_1c8;
  func_0x000107267da8();
  func_0x00010743b660();
  puVar4 = puVar3;
  FUN_1074393e4();
  if (((ulong)puVar6 >> 0x20 & 1) == 0) {
    if (puVar3[0x34] == '\x01') {
      param_1 = (ulong)*(uint *)(puVar3 + 0x28);
    }
  }
  else {
    param_1 = (ulong)puVar4 & 0xffffffff;
  }
  return param_1;
}



/* Entry: 10743924c; end: 10743933b;  */

ulong FUN_10743924c(ulong param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_250 [64];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  
  lVar4 = param_3;
  func_0x00010743b2d4();
  uVar1 = ((*(byte *)(lVar4 + 0x10) ^ 0xff) & 6) == 0;
  if ((bool)uVar1) {
    param_1 = (ulong)*(uint *)*param_2;
    func_0x0001077512dc(auStack_1c8);
    uStack_e0 = *(undefined8 *)(*param_2 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*param_2 + 0x40);
    puVar5 = auStack_1c8;
    func_0x00010743bfac();
    FUN_10743933c(param_3);
    func_0x00010743bde0();
    FUN_1074331ac();
    func_0x00010743bd78();
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8();
  }
  else {
    FUN_1074393b0(auStack_250,param_3);
    puVar5 = auStack_250;
    func_0x00010743bec0();
    func_0x00010743c1ec();
  }
  func_0x00010743b24c();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  puVar2 = auStack_1c8;
  func_0x000107267da8();
  func_0x00010743b660();
  puVar3 = puVar2;
  FUN_1074393e4();
  if (((ulong)puVar5 >> 0x20 & 1) == 0) {
    if (puVar2[0x34] == '\x01') {
      param_1 = (ulong)*(uint *)(puVar2 + 0x28);
    }
  }
  else {
    param_1 = (ulong)puVar3 & 0xffffffff;
  }
  return param_1;
}



/* Entry: 10743933c; end: 1074393af;  */

ulong FUN_10743933c(ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar1 = (uint)param_2;
  FUN_1074393e4();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_2 + 0x34) == '\x01') {
      param_1 = (ulong)*(uint *)(param_2 + 0x28);
    }
  }
  else {
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 1074393b0; end: 1074393c7;  */

void FUN_1074393b0(void)

{
  FUN_1074393c8();
  return;
}



/* Entry: 1074393c8; end: 1074393e3;  */

void FUN_1074393c8(long param_1)

{
  FUN_107438460();
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1074393e4; end: 10743948b;  */

undefined1  [16] FUN_1074393e4(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uStack_b9;
  undefined1 auStack_b8 [120];
  int iStack_40;
  
  func_0x00010743b2d4();
  puVar2 = (undefined1 *)*param_1;
  func_0x000107753050(auStack_b8,puVar2);
  uVar1 = iStack_40 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_b8;
    func_0x00010727f7dc(puVar2);
    param_2 = &uStack_b9;
    FUN_10743948c();
    uVar3 = (ulong)puVar2 & 0xffffffffffffff00;
    uVar5 = (ulong)puVar2 & 0xff;
    uVar4 = (ulong)param_2 & 0xff00000000;
    uVar6 = (ulong)param_2 & 0xffffffff;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  func_0x00010743b8b0();
  func_0x00010743b24c();
  if ((bool)uVar1) {
    auVar7._0_8_ = uVar5 | uVar3;
    auVar7._8_8_ = uVar6 | uVar4;
    return auVar7;
  }
  ___stack_chk_fail();
  func_0x00010743b8b0();
  func_0x00010743b660();
  func_0x0001077752bc();
  auVar8._8_8_ = (ulong)param_2 & 0xffffffffff;
  auVar8._0_8_ = puVar2;
  return auVar8;
}



/* Entry: 10743948c; end: 1074394a3;  */

void FUN_10743948c(void)

{
  func_0x0001077752bc();
  return;
}



/* Entry: 1074394a4; end: 10743955b;  */

undefined4 *
FUN_1074394a4(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,long param_6,long param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 extraout_w8;
  undefined4 *unaff_x19;
  long lStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  long lStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_38;
  
  if (*(int *)(param_6 + 0x38) == 0 && *(int *)(param_7 + 0x38) == 0) {
    lVar2 = param_6;
    func_0x00010743957c();
    uStack_78 = (undefined4)lVar2;
    uStack_74 = (undefined1)((ulong)lVar2 >> 0x20);
    lStack_80 = param_6;
    func_0x00010743957c();
    uStack_88 = (undefined4)lVar2;
    uStack_84 = (undefined1)((ulong)lVar2 >> 0x20);
    lStack_90 = param_7;
    uStack_70 = param_2;
    func_0x00010743955c(&lStack_80,&lStack_90);
    uStack_38 = 0;
    uStack_6c = param_3;
    uStack_68 = param_4;
    func_0x00010743bec0();
    puVar1 = &uStack_70;
    FUN_107433214(puVar1);
    return puVar1;
  }
  func_0x00010743b574();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10743968c();
  return unaff_x19;
}



/* Entry: 10743955c; end: 1074395a3;  */

void FUN_10743955c(void)

{
  func_0x00010743b7b8();
  FUN_1074395a4();
  return;
}



/* Entry: 1074395a4; end: 1074395f3;  */

undefined8 FUN_1074395a4(double param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  return CONCAT44((float)((double)(float)((ulong)*param_4 >> 0x20) * param_1 +
                         (double)(float)((ulong)*param_3 >> 0x20) * (1.0 - param_1)),
                  (float)((double)(float)*param_4 * param_1 +
                         (double)(float)*param_3 * (1.0 - param_1)));
}



/* Entry: 1074395f4; end: 10743962f;  */

void FUN_1074395f4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107439618(param_1,&uStack_11);
  return;
}



/* Entry: 107439630; end: 10743965b;  */

undefined1  [16] FUN_107439630(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*(int *)(param_1 + 7) == 0) {
    uVar1 = *param_1;
    uVar2 = (ulong)*(uint *)(param_1 + 1) | 0x100000000;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10743965c; end: 10743968b;  */

void FUN_10743965c(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10743968c();
  return;
}



/* Entry: 10743968c; end: 1074396cb;  */

void FUN_10743968c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_107433214();
  func_0x00010743c41c();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_FUN_1109afed0);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 1074396cc; end: 1074396db;  */

void FUN_1074396cc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar1 = uVar2;
  return;
}



/* Entry: 1074396dc; end: 10743977f;  */

/* WARNING: Possible PIC construction at 0x000107439714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107439718) */
/* WARNING: Removing unreachable block (ram,0x000107439738) */

undefined1 *
FUN_1074396dc(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = param_1;
  lVar4 = param_4;
  func_0x00010743b2d4();
  if (*(int *)(lVar4 + 0x70) == 0) {
    func_0x00010743b24c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010743ba90();
      func_0x000104c2f714();
      func_0x00010743b660();
      if (*(int *)(param_3 + 0x30) == 0) {
        return puVar3;
      }
      func_0x00010727f740(param_3,puVar3,param_2);
      return param_3;
    }
    param_5 = param_4 + 8;
    puVar3 = param_1;
  }
  else {
    unaff_x30 = 0x107439718;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    puVar3 = puVar2;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8(puVar3,param_5);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(long *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107439780; end: 1074397a7;  */

undefined4
FUN_107439780(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}



/* Entry: 1074397a8; end: 1074399f7;  */

void FUN_1074397a8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010730b0e8(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074399f8; end: 1074399fb;  */

undefined8 * FUN_1074399f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109afef0;
  plVar2 = param_1 + 7;
  if (*plVar2 != 0) {
    FUN_107434094(plVar2);
    __ZdlPv(*plVar2);
  }
  func_0x0001074340dc(param_1 + 2,param_1[4]);
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_1109af438;
  FUN_10742dcd0(param_1[1],param_1);
  return param_1;
}



/* Entry: 1074399fc; end: 107439a0f;  */

void FUN_1074399fc(void)

{
  FUN_107439b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107439a10; end: 107439b1b;  */

undefined8 * FUN_107439a10(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w11;
  int extraout_w11_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  puVar4 = param_1;
  if (*(int *)(param_2 + 0x48) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    lVar5 = *(long *)(param_2 + 0x10);
    puVar6 = (undefined8 *)param_1[8];
    if (puVar6 < (undefined8 *)param_1[9]) {
      *puVar6 = uVar2;
      puVar6[1] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x00010743bfcc();
          puVar6 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar6 = puVar6 + 2;
    }
    else {
      lVar10 = param_1[7];
      lVar12 = (long)puVar6 - lVar10;
      lVar13 = lVar12 >> 4;
      uVar1 = lVar13 + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_107439b80();
LAB_107439b18:
        func_0x000104bd35f4();
        *param_1 = &PTR_FUN_1109afef0;
        plVar11 = param_1 + 7;
        if (*plVar11 != 0) {
          FUN_107434094(plVar11);
          __ZdlPv(*plVar11);
        }
        func_0x0001074340dc(param_1 + 2,param_1[4]);
        lVar5 = param_1[2];
        param_1[2] = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        *param_1 = &PTR_DAT_1109af438;
        FUN_10742dcd0(param_1[1],param_1);
        return param_1;
      }
      uVar8 = (long)param_1[9] - lVar10;
      uVar9 = (long)uVar8 >> 3;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar9 = 0xfffffffffffffff;
      }
      if (uVar9 >> 0x3c != 0) goto LAB_107439b18;
      lVar3 = uVar9 << 4;
      __Znwm();
      puVar7 = (undefined8 *)(lVar3 + lVar12);
      *puVar7 = uVar2;
      puVar7[1] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x00010743bfcc();
        } while (extraout_w11_00 != 0);
        lVar10 = param_1[7];
        lVar12 = param_1[8] - lVar10;
        lVar13 = lVar12 >> 4;
        puVar7 = extraout_x8_00;
      }
      puVar6 = puVar7 + 2;
      puVar7 = puVar7 + lVar13 * -2;
      puVar4 = puVar7;
      _memcpy(puVar7,lVar10,lVar12);
      param_1[7] = puVar7;
      param_1[8] = puVar6;
      param_1[9] = lVar3 + uVar9 * 0x10;
      if (lVar10 != 0) {
        func_0x00010743b7f4();
      }
    }
    param_1[8] = puVar6;
  }
  return puVar4;
}



/* Entry: 107439b1c; end: 107439b7f;  */

undefined8 * FUN_107439b1c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109afef0;
  plVar2 = param_1 + 7;
  if (*plVar2 != 0) {
    FUN_107434094(plVar2);
    __ZdlPv(*plVar2);
  }
  func_0x0001074340dc(param_1 + 2,param_1[4]);
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_1109af438;
  FUN_10742dcd0(param_1[1],param_1);
  return param_1;
}



/* Entry: 107439b80; end: 107439b8b;  */

void FUN_107439b80(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010743c320();
  func_0x00010743c558();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010743b2a4();
  }
  return;
}



/* Entry: 107439b8c; end: 107439c1f;  */

void FUN_107439b8c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010743c558();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010743b2a4();
  }
  return;
}



/* Entry: 107439c20; end: 107439c37;  */

void FUN_107439c20(long *param_1)

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



/* Entry: 107439c38; end: 107439c7b;  */

undefined8 FUN_107439c38(void)

{
  undefined8 unaff_x19;
  
  func_0x00010743ba34();
  func_0x0001074399cc();
  func_0x00010743ba18();
  FUN_107439c7c();
  return unaff_x19;
}



/* Entry: 107439c7c; end: 107439c93;  */

void FUN_107439c7c(long *param_1)

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



/* Entry: 107439c94; end: 107439d03;  */

undefined8 FUN_107439c94(void)

{
  undefined8 unaff_x19;
  
  func_0x00010743ba34();
  func_0x000107439cb8();
  func_0x00010743ba18();
  FUN_107439d04();
  return unaff_x19;
}



/* Entry: 107439d04; end: 107439d1b;  */

void FUN_107439d04(long *param_1)

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



/* Entry: 107439d1c; end: 107439de7;  */

long FUN_107439d1c(long param_1)

{
  func_0x000107439d40(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107439de8; end: 107439dff;  */

void FUN_107439de8(long *param_1)

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



/* Entry: 107439e00; end: 107439e43;  */

undefined8 FUN_107439e00(void)

{
  undefined8 unaff_x19;
  
  func_0x00010743ba34();
  func_0x000107439880();
  func_0x00010743ba18();
  FUN_107439e44();
  return unaff_x19;
}



/* Entry: 107439e44; end: 107439e5b;  */

void FUN_107439e44(long *param_1)

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



/* Entry: 107439e5c; end: 107439ecf;  */

undefined8 FUN_107439e5c(void)

{
  undefined8 unaff_x19;
  
  func_0x00010743ba34();
  func_0x000107439e80();
  func_0x00010743ba18();
  FUN_107439ed0();
  return unaff_x19;
}



/* Entry: 107439ed0; end: 107439ee7;  */

void FUN_107439ed0(long *param_1)

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



/* Entry: 107439ee8; end: 107439f5b;  */

undefined8 FUN_107439ee8(void)

{
  undefined8 unaff_x19;
  
  func_0x00010743ba34();
  func_0x000107439f0c();
  func_0x00010743ba18();
  FUN_107439f5c();
  return unaff_x19;
}



/* Entry: 107439f5c; end: 107439f73;  */

void FUN_107439f5c(long *param_1)

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



/* Entry: 107439f74; end: 107439fb7;  */

undefined8 FUN_107439f74(void)

{
  undefined8 unaff_x19;
  
  func_0x00010743ba34();
  func_0x0001074398f0();
  func_0x00010743ba18();
  FUN_107439fb8();
  return unaff_x19;
}



/* Entry: 107439fb8; end: 107439fcf;  */

void FUN_107439fb8(long *param_1)

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



/* Entry: 107439fd0; end: 107439fef;  */

void FUN_107439fd0(void)

{
  func_0x00010743ba18();
  FUN_1074301b4();
  return;
}



/* Entry: 107439ff0; end: 10743a017;  */

long FUN_107439ff0(long param_1)

{
  FUN_10743a018();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10743a018; end: 10743a03f;  */

void FUN_10743a018(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010743c558();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10743a040; end: 10743a0db;  */

long FUN_10743a040(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010743c198(), extraout_x8 != 0)) {
    func_0x00010743bd5c();
    func_0x00010743ba08();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010743c174();
      if ((bool)in_CY) {
        func_0x00010743c0e4();
      }
    }
    func_0x00010743c120();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x00010743c564();
        if (!(bool)in_ZR) break;
        func_0x00010743b6d4();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x00010743c0c0();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 10743a0dc; end: 10743a357;  */

undefined1  [16] FUN_10743a0dc(ulong param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x10;
  long *plVar8;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  func_0x00010743c39c();
  func_0x00010743bb14();
  func_0x00010726364c();
  func_0x00010743c1a4();
  if (unaff_x24 != 0) {
    uVar10 = unaff_x24 - 1;
    in_NG = (long)(unaff_x24 & uVar10) < 0;
    in_ZR = (unaff_x24 & uVar10) == 0;
    bVar2 = false;
    if ((bool)in_ZR) {
      unaff_x25 = uVar10 & unaff_x21;
    }
    else {
      func_0x00010743c06c();
      if (bVar2) {
        func_0x00010743bad8();
      }
    }
    func_0x00010743c060();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10743a17c;
          func_0x00010743c048();
          if (!(bool)in_ZR) break;
          param_1 = (ulong)(unaff_x20 + 2);
          func_0x000104c32db4(param_1,param_2);
          if ((param_1 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10743a324;
          }
        }
        if ((unaff_x24 & uVar10) == 0) {
          uVar6 = extraout_x8 & uVar10;
        }
        else {
          uVar6 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x00010743c03c();
            uVar6 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar6 - unaff_x25) < 0;
        in_ZR = uVar6 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10743a17c:
  uVar10 = *param_4;
  func_0x00010743ba58();
  func_0x00010743b288();
  func_0x00010743c370();
  *(undefined4 *)(unaff_x20 + 0xb) = 0;
  func_0x00010743b584();
  if ((unaff_x24 != 0) && (func_0x00010743b688(), !(bool)in_NG)) goto LAB_10743a2e0;
  func_0x00010743b2f8();
  uVar3 = 2 < unaff_x24;
  uVar4 = unaff_x24 == 3;
  func_0x00010743b2c0();
  func_0x00010743c1c8();
  if ((bool)uVar4) {
    uVar10 = 2;
  }
  else {
    uVar4 = (uVar10 & extraout_x8_01) == 0;
    uVar3 = 0;
    if (!(bool)uVar4) {
      func_0x00010743bd94();
      uVar10 = param_1;
    }
  }
  func_0x00010743c078();
  if (!(bool)uVar3 || (bool)uVar4) {
    if (!(bool)uVar3) {
      func_0x00010743b35c();
      if (((bool)uVar3) && (func_0x00010743bdec(), extraout_x8_04 == 0)) {
        func_0x00010743b20c();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010743ba24();
      if ((bool)uVar3) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (uVar10 != 0) goto LAB_10743a1dc;
        func_0x00010743c108();
        FUN_10743a358();
        func_0x00010743c150();
      }
    }
  }
  else {
LAB_10743a1dc:
    if (uVar10 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10743a34c);
      (*pcVar1)();
    }
    __Znwm(uVar10 << 3);
    FUN_10743a358();
    func_0x00010743b9f8();
    uVar6 = extraout_x9;
    while (uVar4 = uVar10 == uVar6, !(bool)uVar4) {
      func_0x00010743baf0();
      uVar6 = extraout_x9_00;
    }
    unaff_x24 = uVar10;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010743b618();
      func_0x00010743b604();
      plVar8 = extraout_x10;
      while (*plVar8 != 0) {
        func_0x00010743c180();
        lVar7 = extraout_x8_02;
        plVar8 = extraout_x12;
        uVar6 = extraout_x11;
        if ((bool)uVar4) {
          uVar9 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar9 = extraout_x13;
          if (uVar10 <= extraout_x13) {
            func_0x00010743c1bc();
            lVar7 = extraout_x8_03;
            uVar6 = extraout_x11_00;
            plVar8 = extraout_x12_00;
            uVar9 = extraout_x13_00;
          }
        }
        uVar4 = uVar9 == uVar6;
        if (!(bool)uVar4) {
          if (*(long *)(lVar7 + uVar9 * 8) == 0) {
            func_0x00010743bc98();
            plVar8 = extraout_x12_01;
          }
          else {
            func_0x00010743b22c();
            plVar8 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x00010743bce4();
  if ((bool)uVar4) {
    in_ZR = 1;
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010743bad8();
    }
  }
LAB_10743a2e0:
  func_0x00010743c054();
  if (extraout_x9_02 == 0) {
    func_0x00010743b4bc();
    if (extraout_x9_03 != 0) {
      func_0x00010743b678();
      lVar7 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar10 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar10 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010743bccc();
          lVar7 = extraout_x8_06;
          uVar10 = extraout_x9_05;
        }
      }
      *(long **)(lVar7 + uVar10 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010743b7a8();
  }
  func_0x00010743b4d4();
  func_0x000107434400();
  uVar5 = 1;
LAB_10743a324:
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = unaff_x20;
  return auVar11;
}



/* Entry: 10743a358; end: 10743a36f;  */

void FUN_10743a358(long *param_1,long param_2)

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



/* Entry: 10743a370; end: 10743a4b3;  */

ulong * FUN_10743a370(ulong *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uStack_38;
  
  puVar8 = param_1 + 1;
  *puVar8 = 0;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 2) = 0;
  if (param_4 == (param_2 & 0xffffffff) * (param_2 >> 0x20) * 4) {
    func_0x00010724e178(&uStack_38,param_2,(param_2 >> 0x20) * (param_2 & 0xffffffff) * 4);
    uVar6 = uStack_38;
    uStack_38 = 0;
    FUN_1073c8290(puVar8,uVar6);
    func_0x00010724e5b8(&uStack_38);
    lVar7 = (*param_1 & 0xffffffff) * 4 * (*param_1 >> 0x20);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar4) {
        cVar3 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + lVar7;
      }
    } while (cVar3 != '\0');
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = (long)(0x1f - (int)LZCOUNT((int)lVar7));
    }
    piVar1 = (int *)(lVar2 * 4 + 0x113823db8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_4 != 0) {
      func_0x00010743bae4(*puVar8);
      _memmove();
    }
    return param_1;
  }
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar6,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10743a490);
  (*pcVar5)();
}



/* Entry: 10743a4b4; end: 10743a5db;  */

void FUN_10743a4b4(undefined8 *param_1)

{
  long *plVar1;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  func_0x00010743b804();
  plVar2 = param_1 + 1;
  *plVar2 = 0;
  param_1[2] = 0;
  *param_1 = plVar2;
  puVar3 = (undefined8 *)*unaff_x20;
  do {
    if (puVar3 == unaff_x20 + 1) {
      return;
    }
    plVar1 = plVar2;
    if ((plVar2 == (long *)*unaff_x19) ||
       (func_0x00010002c810(), (ulong)plVar1[4] < (ulong)puVar3[4])) {
      plStack_58 = plVar2;
      if (*plVar2 != 0) {
        plVar4 = plVar1 + 1;
        plStack_58 = plVar1;
        goto LAB_10743a540;
      }
LAB_10743a554:
      lVar5 = puVar3[5];
      lVar7 = puVar3[5];
      lVar6 = puVar3[4];
      func_0x00010743bee0();
      uStack_60 = 1;
      plVar1[5] = lVar7;
      plVar1[4] = lVar6;
      plStack_68 = plVar2;
      if (lVar5 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10 != 0);
      }
      FUN_10743a5dc();
      uStack_70 = 0;
      FUN_10743a674(&uStack_70);
    }
    else {
      plVar1 = unaff_x19;
      FUN_10743a628();
      plVar4 = plVar1;
LAB_10743a540:
      if (*plVar4 == 0) goto LAB_10743a554;
    }
    func_0x00010002c7d4();
  } while( true );
}



/* Entry: 10743a5dc; end: 10743a627;  */

void FUN_10743a5dc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10743a628; end: 10743a673;  */

long * FUN_10743a628(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, (ulong)plVar2[4] <= param_3) {
      if (param_3 <= (ulong)plVar2[4]) goto LAB_10743a66c;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_10743a66c;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_10743a66c:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 10743a674; end: 10743a6d7;  */

void FUN_10743a674(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010743b62c();
  if (unaff_x20 != 0) {
    func_0x00010743bd30();
    if ((bool)in_ZR) {
      func_0x000107439d80(unaff_x20 + 0x20);
    }
    func_0x00010743b7f4();
  }
  return;
}



/* Entry: 10743a6d8; end: 10743a79b;  */

long FUN_10743a6d8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    uVar2 = *param_2;
    FUN_1074350a8();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar3[1];
        if (uVar6 != uVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar7 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar1 * uVar7;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10743a79c; end: 10743a7cb;  */

undefined8 FUN_10743a79c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10743a7cc(auStack_38);
  FUN_1074350d8(auStack_38);
  return uVar1;
}



/* Entry: 10743a7cc; end: 10743a8bf;  */

void FUN_10743a7cc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10743a880;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10743a880;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10743a880:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10743a8c0; end: 10743a8ef;  */

void FUN_10743a8c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10743a8f0();
  if (lVar1 != 0) {
    FUN_10743a9b4(param_1,lVar1);
  }
  return;
}



/* Entry: 10743a8f0; end: 10743a9b3;  */

long FUN_10743a8f0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    uVar2 = *param_2;
    FUN_107435cd4();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar3[1];
        if (uVar6 != uVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar7 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar1 * uVar7;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10743a9b4; end: 10743a9e3;  */

undefined8 FUN_10743a9b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10743a9e4(auStack_38);
  FUN_107435e84(auStack_38);
  return uVar1;
}



/* Entry: 10743a9e4; end: 10743aad7;  */

void FUN_10743a9e4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10743aa98;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10743aa98;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10743aa98:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10743aad8; end: 10743ab07;  */

void FUN_10743aad8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10743ab08();
  if (lVar1 != 0) {
    FUN_10743abcc(param_1,lVar1);
  }
  return;
}



/* Entry: 10743ab08; end: 10743abcb;  */

long FUN_10743ab08(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    uVar2 = *param_2;
    FUN_107437190();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar3[1];
        if (uVar6 != uVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar7 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar1 * uVar7;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10743abcc; end: 10743abfb;  */

undefined8 FUN_10743abcc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10743abfc(auStack_38);
  FUN_1074371c0(auStack_38);
  return uVar1;
}



/* Entry: 10743abfc; end: 10743acf3;  */

void FUN_10743abfc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10743acb0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10743acb0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10743acb0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10743acf4; end: 10743ad07;  */

void FUN_10743acf4(void)

{
  FUN_10743ad90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743ad08; end: 10743ad8f;  */

undefined8 * FUN_10743ad08(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long extraout_x8;
  code *pcVar3;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [8];
  undefined4 uStack_40;
  
  func_0x00010743b2b0(param_1);
  pcVar3 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
  }
  FUN_107425674(auStack_80,extraout_x8 + 0x20);
  uStack_40 = 1;
  (*pcVar3)(plVar1,auStack_88);
  puVar2 = auStack_80;
  FUN_10743636c();
  func_0x00010743b24c();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_80;
  FUN_10743636c();
  func_0x00010743b660();
  *puVar2 = &PTR_DAT_1109aff30;
  func_0x000104c2f714(puVar2 + 4);
  return puVar2;
}



/* Entry: 10743ad90; end: 10743adbb;  */

undefined8 * FUN_10743ad90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109aff30;
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10743adbc; end: 10743adbf;  */

void FUN_10743adbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aff70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10743adc0; end: 10743add3;  */

void FUN_10743adc0(void)

{
  func_0x00010743ae0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743add4; end: 10743ae1b;  */

long FUN_10743add4(long param_1)

{
  func_0x000104c2f714(param_1 + 0x70);
  FUN_10742aa40(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10743ae1c; end: 10743ae2f;  */

void FUN_10743ae1c(void)

{
  FUN_10743aeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743ae30; end: 10743aeaf;  */

undefined8 * FUN_10743ae30(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743b2b0(param_1);
  pcVar3 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
  }
  uStack_68 = *(undefined8 *)(extraout_x8 + 0x28);
  uStack_70 = *(undefined8 *)(extraout_x8 + 0x20);
  *(undefined8 *)(extraout_x8 + 0x20) = 0;
  *(undefined8 *)(extraout_x8 + 0x28) = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x9;
  (*pcVar3)(plVar1,auStack_78);
  puVar2 = &uStack_70;
  FUN_10743636c();
  func_0x00010743b264(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010743c384(auStack_78);
  func_0x00010743b660();
  *puVar2 = &PTR_DAT_1109affd0;
  func_0x000107435084(puVar2 + 4);
  return puVar2;
}



/* Entry: 10743aeb0; end: 10743aedb;  */

undefined8 * FUN_10743aeb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109affd0;
  func_0x000107435084(param_1 + 4);
  return param_1;
}



/* Entry: 10743aedc; end: 10743af2f;  */

void FUN_10743aedc(long param_1)

{
  undefined1 in_ZR;
  undefined4 extraout_w8;
  long unaff_x19;
  uint unaff_w21;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_1073f01e4();
  func_0x00010743c0b4();
  if (!(bool)in_ZR) {
    func_0x00010743b4b0((&PTR_FUN_1109b0000)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10743af30; end: 10743af3f;  */

void FUN_10743af30(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10743af40; end: 10743af53;  */

void FUN_10743af40(void)

{
  FUN_10743af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743af54; end: 10743af6f;  */

void FUN_10743af54(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010743c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 10743af70; end: 10743af9b;  */

undefined8 * FUN_10743af70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b0020;
  FUN_1073f01e4(param_1 + 5);
  return param_1;
}



/* Entry: 10743af9c; end: 10743afef;  */

void FUN_10743af9c(long param_1)

{
  undefined1 in_ZR;
  undefined4 extraout_w8;
  long unaff_x19;
  uint unaff_w21;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_10742acc4();
  func_0x00010743c0b4();
  if (!(bool)in_ZR) {
    func_0x00010743b4b0((&PTR_FUN_1109b0050)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10743aff0; end: 10743afff;  */

void FUN_10743aff0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10743b000; end: 10743b013;  */

void FUN_10743b000(void)

{
  FUN_10743b030();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743b014; end: 10743b02f;  */

void FUN_10743b014(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010743c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 10743b030; end: 10743b0f7;  */

undefined8 * FUN_10743b030(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b0070;
  FUN_10742acc4(param_1 + 5);
  return param_1;
}



/* Entry: 10743b0f8; end: 10743b0fb;  */

void FUN_10743b0f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b00b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10743b0fc; end: 10743b10f;  */

void FUN_10743b0fc(void)

{
  func_0x00010743b11c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743b110; end: 10743b127;  */

long FUN_10743b110(long param_1)

{
  func_0x00010730b284(param_1 + 0x290);
  func_0x0001073bca34(param_1 + 0x1f0);
  func_0x0001073bca34(param_1 + 0x160);
  func_0x0001073bca34(param_1 + 0xc0);
  func_0x0001073bca34(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10743b128; end: 10743b15b;  */

void FUN_10743b128(void)

{
  func_0x00010743b140();
  return;
}



/* Entry: 10743b15c; end: 10743b20b;  */

undefined1  [16] FUN_10743b15c(long *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_10743a628(param_1,&uStack_48,*param_2);
  plVar4 = (long *)*plVar1;
  if (plVar4 == (long *)0x0) {
    plVar4 = plVar1;
    func_0x00010743bee0();
    uStack_50 = 1;
    lVar3 = param_3[1];
    lVar5 = *param_3;
    plVar4[5] = param_3[1];
    plVar4[4] = lVar5;
    plStack_58 = param_1 + 1;
    if (lVar3 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10 != 0);
    }
    FUN_10743a5dc(param_1,uStack_48,plVar1,plVar4);
    uStack_60 = 0;
    FUN_10743a674(&uStack_60);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = plVar4;
  return auVar6;
}



/* Entry: 10743b20c; end: 10743b553;  */

ulong FUN_10743b20c(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 10743b554; end: 10743b573;  */

void FUN_10743b554(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  *param_2 = param_1;
  FUN_10743530c(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10743b574; end: 10743c5af;  */

void FUN_10743b574(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10743c5b0; end: 10743c5d3;  */

void FUN_10743c5b0(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [40];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [112];
  undefined1 auStack_128 [40];
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_28;
  
  func_0x00010044fab4();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    plVar4 = *(long **)(param_2 + 0x10);
    lStack_90 = param_3[1];
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_88 = &UNK_10b4a73f8;
    ppuStack_80 = &PTR_DAT_110cee278;
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_98 = lVar7;
    lStack_78 = param_2;
    lStack_70 = lVar7;
    lStack_68 = lStack_90;
    (**(code **)(*plVar4 + 0x10))(plVar4,&puStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x000105979594();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar4 = &lStack_98;
  func_0x000105979594();
  func_0x00010b4a7728();
  lVar7 = plVar4[2];
  plStack_100 = (long *)0x0;
  uStack_f8 = 0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x20);
  func_0x000107c3012c(&plStack_100,lVar7);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x20);
  if (plStack_100 != (long *)0x0) {
    puVar5 = (undefined8 *)(plVar4[3] + 8);
    (**(code **)*puVar5)(auStack_128);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8 + 0x28))();
    if ((uint)puVar5 < 5) {
      uVar8 = *(undefined4 *)(&UNK_10e5b3d70 + ((ulong)puVar5 & 0xffffffff) * 4);
    }
    else {
      uVar8 = 3;
    }
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_00 + 0x30))();
    puVar6 = puVar5;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_01 + 0x20))(auStack_1b0);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_02 + 8))();
    func_0x000107c27bc0(auStack_1d8,auStack_128);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_03 + 0x38))();
    uVar9 = param_1;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_04 + 0x40))();
    uVar10 = uVar9;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_05 + 0x48))();
    func_0x000106af5b68(param_1,uVar9,uVar10,auStack_198,puVar5,auStack_1b0,puVar6,auStack_1d8,uVar8
                       );
    func_0x000107c278e0(auStack_1d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    plVar1 = plStack_100;
    lVar7 = plVar4[4];
    lVar12 = plVar4[4];
    lVar11 = plVar4[3];
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110cee238;
    puVar5[1] = 0;
    puStack_1e8 = puVar5 + 3;
    *puStack_1e8 = &PTR_DAT_110cee2a0;
    puVar5[5] = lVar12;
    puVar5[4] = lVar11;
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar5;
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_198,&puStack_1e8);
    func_0x000106af61cc(&puStack_1e8);
    func_0x00010b4a7688(&uStack_1f8);
    func_0x00010b4a76b0(auStack_198);
    func_0x000107c278e0(auStack_128);
  }
  func_0x000107c28368(&plStack_100);
  return;
}



/* Entry: 10743c5d4; end: 10743c5db;  */

void FUN_10743c5d4(void)

{
  return;
}



/* Entry: 10743c5dc; end: 10743c5fb;  */

void FUN_10743c5dc(undefined8 *param_1)

{
  func_0x00010743c86c();
  *param_1 = &PTR_FUN_1109b0128;
  return;
}



/* Entry: 10743c5fc; end: 10743c617;  */

void FUN_10743c5fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b0128;
  return;
}



/* Entry: 10743c618; end: 10743c62f;  */

void FUN_10743c618(void)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return;
}



/* Entry: 10743c630; end: 10743c657;  */

void FUN_10743c630(undefined8 param_1)

{
  func_0x00010743c88c();
  func_0x00010743c874(param_1,&PTR_DAT_1109b0198);
  func_0x00010743c85c();
  return;
}



/* Entry: 10743c658; end: 10743c66b;  */

undefined ** FUN_10743c658(void)

{
  return &PTR_DAT_1109b0198;
}



/* Entry: 10743c66c; end: 10743c68b;  */

void FUN_10743c66c(undefined8 *param_1)

{
  func_0x00010743c86c();
  *param_1 = &PTR_DAT_1109b01b8;
  return;
}



/* Entry: 10743c68c; end: 10743c6a7;  */

void FUN_10743c68c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b01b8;
  return;
}


