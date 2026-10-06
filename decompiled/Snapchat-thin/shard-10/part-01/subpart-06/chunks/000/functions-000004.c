/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777ccd4; end: 10777cd03;  */

undefined2 FUN_10777ccd4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f347c();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cef4; end: 10777cf23;  */

undefined2 FUN_10777cef4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f3558();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777de9c; end: 10777decb;  */

undefined8 * FUN_10777de9c(undefined8 *param_1)

{
  func_0x000104c3365c(param_1 + 0x18);
  func_0x000107327aec(param_1 + 9);
  *param_1 = &PTR_FUN_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10777e8d8; end: 10777e937;  */

int * FUN_10777e8d8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int *unaff_x19;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010777f8f4();
  uStack_28 = extraout_x8;
  func_0x00010777e6f8(auStack_68);
  puVar2 = auStack_68;
  func_0x00010774b37c();
  func_0x00010777fa90();
  func_0x00010777f8e0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010777fa90();
  func_0x00010777f924();
  if (*(int *)(param_2 + 8) == 0x17) {
    puVar3 = puVar2 + 0x48;
    func_0x00010774b3f4(puVar3,param_2 + 0x48);
    if ((int)puVar3 != 0) {
      piVar1 = (int *)(puVar2 + 0xc0);
      if (*(int *)(param_2 + 0xc0) == *piVar1) {
        func_0x00010774edfc();
        func_0x00010774e544();
        return piVar1;
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/* Entry: 10777f358; end: 10777f397;  */

void FUN_10777f358(long param_1)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  long unaff_x21;
  
  func_0x00010777f968();
  lVar1 = extraout_x9;
  while (lVar1 != unaff_x21) {
    func_0x00010777f998();
    lVar1 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x18) {
    func_0x0001073c6654();
  }
  func_0x00010777f92c();
  return;
}



/* Entry: 10777f5f8; end: 10777f637;  */

void FUN_10777f5f8(long param_1)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  long unaff_x21;
  
  func_0x00010777f968();
  lVar1 = extraout_x9;
  while (lVar1 != unaff_x21) {
    func_0x00010777f998();
    lVar1 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x18) {
    func_0x0001073c66e0();
  }
  func_0x00010777f92c();
  return;
}



/* Entry: 10777f8e0; end: 10777faa7;  */

void FUN_10777f8e0(void)

{
  return;
}



/* Entry: 10777fdb0; end: 10777fe77;  */

/* WARNING: Possible PIC construction at 0x00010777fe14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777fe18) */
/* WARNING: Removing unreachable block (ram,0x00010777fe58) */
/* WARNING: Removing unreachable block (ram,0x00010777fe70) */
/* WARNING: Removing unreachable block (ram,0x00010777fe3c) */

undefined8 * FUN_10777fdb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010777ffe8();
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107273b60(auStack_70,1);
  puStack_60[2] = 0;
  *puStack_60 = &PTR_DAT_110996440;
  puStack_60[1] = 0;
  func_0x00010777fec4(puStack_60 + 3,param_2);
  return puStack_60;
}



/* Entry: 10778049c; end: 10778053f;  */

undefined1  [16] FUN_10778049c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  byte *pbVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  undefined8 uVar6;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  byte *unaff_x19;
  undefined8 unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  func_0x000107781398();
  if (*(int *)(param_1 + 7) == 0) {
    pbVar2 = (byte *)0x0;
    uVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + 7) == 1) {
      pbVar2 = (byte *)*param_1;
    }
    else {
      pbVar2 = (byte *)*param_3;
      func_0x00010778104c();
      func_0x0001077813f8();
    }
    uVar6 = 1;
  }
  uVar1 = *(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8;
  if ((bool)uVar1) {
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = pbVar2;
    return auVar8;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  func_0x000107781398();
  if (*(int *)(pbVar2 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(int *)(pbVar2 + 0x30) == 1;
    if ((bool)uVar1) {
      pbVar2 = (byte *)(ulong)*pbVar2;
    }
    else {
      func_0x000107280464();
      func_0x0001077813f8();
    }
    uVar3 = (ulong)((uint)pbVar2 | 0x100);
    unaff_x19 = pbVar2;
  }
  func_0x000107781384(extraout_x8_00);
  if ((bool)uVar1) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = uVar3;
    return auVar9;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  plVar4 = *(long **)(uVar3 + 0x150);
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = (long *)(uVar3 + 0x18);
  if (*(char *)(uVar3 + 0x50) == '\0') {
    plVar5 = plVar4;
  }
  func_0x0001000d03a8(extraout_x8_01,plVar5);
  func_0x000104c2feb0();
  unaff_x19[0x30] = 0xff;
  unaff_x19[0x31] = 0xff;
  unaff_x19[0x32] = 0xff;
  unaff_x19[0x33] = 0xff;
  unaff_x19[0x34] = 0xff;
  unaff_x19[0x35] = 0xff;
  unaff_x19[0x36] = 0xff;
  unaff_x19[0x37] = 0xff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  auVar7._8_8_ = plVar5;
  auVar7._0_8_ = unaff_x19;
  return auVar7;
}



/* Entry: 107780bcc; end: 107780cbb;  */

void FUN_107780bcc(long param_1)

{
  undefined8 *in_x4;
  undefined4 in_w5;
  undefined1 in_w6;
  undefined8 in_x7;
  long unaff_x19;
  undefined1 unaff_w24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined8 *puStack_58;
  
  func_0x000107781450();
  func_0x000107263b58(param_1 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x58) = unaff_w24;
  uVar2 = in_x4[1];
  uVar1 = *in_x4;
  uVar4 = in_x4[3];
  uVar3 = in_x4[2];
  *(undefined8 *)(unaff_x19 + 0x88) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x80) = in_w5;
  *(undefined1 *)(unaff_x19 + 0x84) = in_w6;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined **)(unaff_x19 + 0xa8) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined **)(unaff_x19 + 200) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  func_0x000107780efc(unaff_x19 + 0xe8,in_stack_00000000);
  func_0x00010785f1f4();
  puStack_58 = (undefined8 *)(unaff_x19 + 0x88);
  func_0x000107781364(unaff_x19 + 0x150,in_x7,&puStack_58);
  return;
}



/* Entry: 107780e3c; end: 107780e57;  */

void FUN_107780e3c(long param_1)

{
  func_0x000107780e58();
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 107781034; end: 10778104b;  */

void FUN_107781034(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 107781204; end: 10778120f;  */

undefined ** FUN_107781204(void)

{
  return &PTR_DAT_1109d6d30;
}



/* Entry: 107781304; end: 10778133b;  */

long FUN_107781304(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6e00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107781abc; end: 107781b0f;  */

void FUN_107781abc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109d6e38)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107781d30; end: 107781d3f;  */

undefined8 FUN_107781d30(undefined8 param_1,long param_2)

{
  func_0x0001072993f4(param_1,param_1,*(long *)(param_2 + 8) + 0xc0);
  return param_1;
}



/* Entry: 107782568; end: 10778258b;  */

void FUN_107782568(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010778334c(param_1,&uStack_11);
  return;
}



/* Entry: 107783254; end: 107783267;  */

void FUN_107783254(void)

{
  return;
}



/* Entry: 1077833dc; end: 1077833e3;  */

void FUN_1077833dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 107783500; end: 10778350b;  */

void FUN_107783500(void)

{
  return;
}



/* Entry: 107783674; end: 10778369b;  */

void FUN_107783674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x00010778369c(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107783c00; end: 107783c2f;  */

long FUN_107783c00(long param_1,long param_2)

{
  func_0x000107338c5c();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 107783fac; end: 10778402f;  */

undefined8 FUN_107783fac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000107786544();
  func_0x00010734936c(param_2);
  if (*(int *)(unaff_x20 + 0x198) != 0) {
    func_0x000107786538();
    FUN_107777bdc();
    func_0x0001077858cc();
  }
  if (*(int *)(unaff_x20 + 0x1d0) != 0) {
    func_0x000107786538();
    FUN_107777bdc();
    func_0x0001077858cc();
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x7d);
  return 1;
}



/* Entry: 107784b28; end: 107784b97;  */

void FUN_107784b28(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107784c0c(param_1,&uStack_11);
  return;
}



/* Entry: 107784d2c; end: 107784e0b;  */

void FUN_107784d2c(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  float *extraout_x8_01;
  undefined8 extraout_x8_02;
  float *extraout_x8_03;
  float *pfVar7;
  float *extraout_x8_04;
  float *extraout_x8_05;
  undefined4 *extraout_x8_06;
  undefined4 *unaff_x19;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_170 [8];
  float afStack_168 [2];
  double dStack_160;
  undefined8 uStack_128;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [80];
  long lStack_c0;
  float *pfStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float afStack_90 [8];
  double dStack_70;
  undefined8 uStack_38;
  undefined1 *puVar2;
  
  func_0x000107786398();
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  afStack_90[2] = 0.0;
  afStack_90[3] = 0.0;
  afStack_90[4] = 0.0;
  afStack_90[5] = 0.0;
  uStack_38 = extraout_x8;
  func_0x0001072ac134(afStack_90,2);
  for (lVar8 = 0; uVar3 = lVar8 == 8, !(bool)uVar3; lVar8 = lVar8 + 4) {
    dStack_70 = (double)*(float *)(param_1 + lVar8);
    afStack_90[6] = 4.2039e-45;
    func_0x0001072aad1c(afStack_90,afStack_90 + 6);
    func_0x000104c3323c(afStack_90 + 6);
  }
  pfVar6 = afStack_90;
  func_0x000107327958(&uStack_a0);
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_98;
  *(undefined8 *)(unaff_x19 + 2) = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000104c33108(&uStack_a0);
  pfVar4 = afStack_90;
  func_0x000107269124();
  func_0x00010778634c(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  pfVar5 = afStack_90;
  func_0x000107269124();
  func_0x000107786550();
  puVar2 = auStack_110;
  puStack_a8 = &UNK_107784e0c;
  pppppppuVar9 = (undefined8 *******)&pppppuStack_b0;
  lStack_c0 = param_1;
  pfStack_b8 = pfVar4;
  pppppuStack_b0 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar11 = &UNK_107784e48;
    __Unwind_Resume();
    pfVar4 = extraout_x8_01;
    if (pfVar5[0xc] == 0.0) {
LAB_1077863ac:
      pfVar4[0x10] = 0.0;
      pfVar4[0x11] = 0.0;
      pfVar4[10] = 0.0;
      pfVar4[0xb] = 0.0;
      pfVar4[8] = 0.0;
      pfVar4[9] = 0.0;
      pfVar4[0xe] = 0.0;
      pfVar4[0xf] = 0.0;
      pfVar4[0xc] = 0.0;
      pfVar4[0xd] = 0.0;
      pfVar4[2] = 0.0;
      pfVar4[3] = 0.0;
      pfVar4[0] = 0.0;
      pfVar4[1] = 0.0;
      pfVar4[6] = 0.0;
      pfVar4[7] = 0.0;
      pfVar4[4] = 0.0;
      pfVar4[5] = 0.0;
      *pfVar4 = 9.80909e-45;
      return;
    }
    uVar3 = pfVar5[0xc] == 1.4013e-45;
    pfVar7 = extraout_x8_01;
    if ((bool)uVar3) {
      puVar2 = auStack_170;
      puStack_118 = &UNK_107784e48;
      pfVar6 = extraout_x8_01;
      ppppppuStack_120 = pppppppuVar9;
      func_0x000107786418();
      dStack_160 = (double)*pfVar5;
      afStack_168[0] = 4.2039e-45;
      pfVar5 = afStack_168;
      uStack_128 = extraout_x8_02;
      func_0x000104c32a18();
      *(undefined1 *)(pfVar6 + 0x10) = 1;
      func_0x000107786500();
      func_0x00010778634c(uStack_128);
      if ((bool)uVar3) {
        return;
      }
      puVar11 = &UNK_107784ed0;
      ___stack_chk_fail();
      pfVar7 = extraout_x8_03;
      pppppppuVar9 = &ppppppuStack_120;
    }
    puVar1 = puVar2 + -0x70;
    *(long *)(puVar2 + -0x20) = param_1;
    *(undefined8 *)(puVar2 + -0x18) = extraout_x8_00;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar9;
    *(undefined **)(puVar2 + -8) = puVar11;
    puVar10 = puVar2 + -0x10;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      puVar11 = &UNK_107784f0c;
      __Unwind_Resume();
      pfVar4 = extraout_x8_04;
      if (pfVar6[0x26] == 0.0) goto LAB_1077863ac;
      pfVar4 = pfVar6 + 2;
      uVar3 = pfVar6[0x26] == 1.4013e-45;
      pfVar6 = extraout_x8_04;
      if ((bool)uVar3) {
        puVar1 = puVar2 + -0xe0;
        *(long *)(puVar2 + -0x90) = param_1;
        *(float **)(puVar2 + -0x88) = pfVar7;
        *(undefined1 **)(puVar2 + -0x80) = puVar10;
        *(undefined **)(puVar2 + -0x78) = &UNK_107784f0c;
        puVar10 = puVar2 + -0x80;
        func_0x000107786380();
        FUN_10775f12c(puVar2 + -0xd8);
        func_0x000107786470();
        func_0x00010778647c(1);
        func_0x000107786334();
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
        puVar11 = &UNK_107784f80;
        __Unwind_Resume();
        pfVar5 = pfVar4;
        pfVar6 = extraout_x8_05;
      }
      *(long *)(puVar1 + -0x20) = param_1;
      *(float **)(puVar1 + -0x18) = pfVar7;
      *(undefined1 **)(puVar1 + -0x10) = puVar10;
      *(undefined **)(puVar1 + -8) = puVar11;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(long *)(puVar1 + -0x90) = param_1;
        *(float **)(puVar1 + -0x88) = pfVar6;
        *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
        *(code **)(puVar1 + -0x78) = FUN_107784fbc;
        func_0x000107269c1c(puVar1 + -0xa0);
        if (*(char *)(pfVar5 + 2) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)pfVar5);
          func_0x000107785078(puVar1 + -0xc0);
        }
        if (*(char *)(pfVar5 + 6) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)(pfVar5 + 4));
          func_0x0001077850a0(puVar1 + -0xc0,puVar1 + -0xa0,"delay",puVar1 + -0xa8);
        }
        uVar13 = *(undefined8 *)(puVar1 + -0x98);
        uVar12 = *(undefined8 *)(puVar1 + -0xa0);
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *extraout_x8_06 = 1;
        *(undefined8 *)(extraout_x8_06 + 4) = uVar13;
        *(undefined8 *)(extraout_x8_06 + 2) = uVar12;
        *(undefined8 *)(puVar1 + -0xd0) = 0;
        *(undefined8 *)(puVar1 + -200) = 0;
        func_0x000104c335c0(puVar1 + -0xd0);
        func_0x000104c335c0(puVar1 + -0xa0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107784fbc; end: 107785077;  */

void FUN_107784fbc(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107269c1c(&uStack_30);
  if (*(char *)(param_2 + 1) == '\x01') {
    func_0x0001077867e0(*param_2);
    func_0x000107785078(auStack_50);
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    func_0x0001077867e0(param_2[2]);
    func_0x0001077850a0(auStack_50,&uStack_30,"delay",auStack_38);
  }
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000104c335c0(&uStack_60);
  func_0x000104c335c0(&uStack_30);
  return;
}



/* Entry: 107785194; end: 1077851af;  */

void FUN_107785194(void)

{
  func_0x00010778675c();
  func_0x000107786694();
  return;
}



/* Entry: 107785298; end: 1077852c7;  */

undefined8 *
FUN_107785298(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar5;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar6;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined1 uStack_50;
  undefined8 uStack_18;
  
  if (*(int *)(param_2 + 6) == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return param_2;
  }
  uVar3 = *(int *)(param_2 + 6) == 1;
  if ((bool)uVar3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x000107786418();
    uStack_50 = *(undefined1 *)param_2;
    auStack_58[0] = 6;
    param_2 = (undefined8 *)auStack_58;
    uStack_18 = extraout_x8;
    func_0x000104c32a18();
    *(undefined1 *)(param_1 + 8) = 1;
    func_0x000107786500();
    func_0x00010778634c(uStack_18);
    if ((bool)uVar3) {
      return param_1;
    }
    unaff_x30 = &LAB_10778531c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_3 = param_1;
    param_1 = extraout_x8_00;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x88) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &SUB_107785358;
    uVar1 = ((long)param_2 - (long)param_3) / 0x18;
    while (puVar2 = param_3, uVar1 != 0) {
      uVar6 = uVar1 >> 1;
      puVar5 = puVar2 + uVar6 * 3;
      puVar4 = puVar5;
      func_0x0001077853d8(puVar5,param_4);
      uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
      param_3 = puVar5 + 3;
      if ((int)puVar4 == 0) {
        uVar1 = uVar6;
        param_3 = puVar2;
      }
    }
    return puVar2;
  }
  return param_3;
}



/* Entry: 107785514; end: 10778553b;  */

long FUN_107785514(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010778553c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107785644; end: 107785683;  */

undefined8 * FUN_107785644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073db32c(&uStack_30);
  return param_1;
}



/* Entry: 107785938; end: 107785973;  */

undefined8 FUN_107785938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 107785b9c; end: 107785bb7;  */

undefined8 FUN_107785b9c(void)

{
  return 1;
}



/* Entry: 107785d10; end: 107785d17;  */

void FUN_107785d10(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x000107786568();
  func_0x000107785d4c();
  return;
}



/* Entry: 107785dfc; end: 107785e47;  */

void FUN_107785dfc(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != -1 && *(int *)(param_2 + 0x38) == iVar1) {
    func_0x000107786784(*(int *)(param_2 + 0x38) == iVar1,param_1);
    func_0x000107786518();
  }
  return;
}



/* Entry: 107785f58; end: 107785f63;  */

void FUN_107785f58(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107786544(*param_1,param_1[1]);
  func_0x0001072ca524();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 7) = 1;
  return;
}



/* Entry: 107786084; end: 10778609f;  */

undefined8 FUN_107786084(void)

{
  return 1;
}



/* Entry: 1077861d0; end: 107786203;  */

void FUN_1077861d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x90) == 1) {
    func_0x00010729e5f0(param_2,param_3);
    func_0x000107262f3c();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a969c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x000107786568();
  func_0x000107786204();
  return;
}



/* Entry: 107786814; end: 10778683f;  */

undefined ** FUN_107786814(void)

{
  return &PTR_DAT_1109d6fb0;
}



/* Entry: 107786998; end: 1077869f3;  */

undefined8 * FUN_107786998(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x0001077869cc(param_1 + 4);
  return param_1;
}



/* Entry: 107786b64; end: 107786c7b;  */

/* WARNING: Possible PIC construction at 0x000107786c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107786c0c) */
/* WARNING: Removing unreachable block (ram,0x000107786c10) */
/* WARNING: Removing unreachable block (ram,0x000107786c14) */
/* WARNING: Removing unreachable block (ram,0x000107786c1c) */
/* WARNING: Removing unreachable block (ram,0x000107786c24) */
/* WARNING: Removing unreachable block (ram,0x000107786c58) */
/* WARNING: Removing unreachable block (ram,0x000107786c78) */
/* WARNING: Removing unreachable block (ram,0x000107786c44) */
/* WARNING: Removing unreachable block (ram,0x000107786c94) */

undefined1 * FUN_107786b64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  
  func_0x000107786f08();
  lVar4 = *(long *)(param_1 + 8);
  func_0x000107786d60(auStack_50,1);
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109d7408;
  func_0x000107785684(puStack_40 + 3,lVar4);
  puStack_40[3] = &PTR_DAT_1109d74d0;
  puStack_40[0x30] = *(undefined8 *)(lVar4 + 0x168);
  lVar4 = *(long *)(lVar4 + 0x170);
  puStack_40[0x31] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_40 = (undefined8 *)0x0;
  func_0x000107786e90(auStack_50);
  return auStack_50;
}



/* Entry: 107786e00; end: 107786e13;  */

void FUN_107786e00(void)

{
  func_0x000107786e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107786fdc; end: 107786ff3;  */

undefined8 FUN_107786fdc(void)

{
  return 0;
}



/* Entry: 1077870f8; end: 107787133;  */

long FUN_1077870f8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d74b0);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107787c4c; end: 107787dcf;  */

undefined8 FUN_107787c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010778c87c();
  func_0x00010734936c(param_2);
  if (*(int *)(unaff_x20 + 0x198) != 0) {
    func_0x00010778c5e4(&DAT_10f428372);
    func_0x00010778c874();
  }
  if (*(int *)(unaff_x20 + 0x210) != 0) {
    func_0x00010778c5e4(&DAT_10f427b79);
    func_0x00010778c8f0();
  }
  if (*(int *)(unaff_x20 + 0x248) != 0) {
    func_0x00010778c5e4(&DAT_10f427c8d);
    func_0x00010778c874();
  }
  if (*(int *)(unaff_x20 + 0x280) != 0) {
    func_0x00010778c5e4(&DAT_10f42818e);
    func_0x00010778c874();
  }
  if (*(int *)(unaff_x20 + 0x2b8) != 0) {
    func_0x00010778c5e4(&DAT_10f427f1c);
    func_0x00010778c874();
  }
  if (*(int *)(unaff_x20 + 0x2f0) != 0) {
    func_0x00010778c5e4(&DAT_10f427859);
    func_0x00010778c874();
  }
  if (*(int *)(unaff_x20 + 0x328) != 0) {
    func_0x00010778c5e4(&DAT_10f427abc);
    func_0x00010778c874();
  }
  if (*(int *)(unaff_x20 + 0x3a0) != 0) {
    func_0x00010778c5e4(&DAT_10f4278a2);
    func_0x00010778c8f0();
  }
  if (*(int *)(unaff_x20 + 0x418) != 0) {
    func_0x00010778c5e4(&DAT_10f427fad);
    func_0x00010778c8f0();
  }
  if (*(int *)(unaff_x20 + 0x490) != 0) {
    func_0x00010778c5e4(&DAT_10f427a32);
    func_0x00010778c8f0();
  }
  if (*(int *)(unaff_x20 + 0x508) != 0) {
    func_0x00010778c5e4(&DAT_10f428275);
    func_0x00010778c8f0();
  }
  if (*(int *)(unaff_x20 + 0x540) != 0) {
    func_0x00010778c5e4(&DAT_10f428116);
    func_0x00010778c874();
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x7d);
  return 1;
}



/* Entry: 10778afd0; end: 10778b007;  */

void FUN_10778afd0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010778b120(param_1,&uStack_11);
  return;
}



/* Entry: 10778b238; end: 10778b283;  */

/* WARNING: Possible PIC construction at 0x00010778b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b25c) */
/* WARNING: Removing unreachable block (ram,0x00010778b27c) */
/* WARNING: Removing unreachable block (ram,0x00010778b274) */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined8 * FUN_10778b238(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *unaff_x19;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined8 auStack_250 [7];
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1e8 [72];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 ***pppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [72];
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  double dStack_e0;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [72];
  
  puVar5 = param_2;
  func_0x00010778c620();
  uStack_78 = 0x10778b25c;
  puStack_80 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x00010778c620(auStack_68);
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  puVar3 = &uStack_100;
  func_0x00010778ca0c();
  for (lVar6 = 0; uVar2 = lVar6 == 0x10, !(bool)uVar2; lVar6 = lVar6 + 4) {
    dStack_e0 = (double)*(float *)((long)param_2 + lVar6);
    uStack_e8 = 3;
    func_0x00010778ca48();
    func_0x00010778c8e8();
  }
  func_0x00010778ca28();
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_108;
  *(undefined8 *)(unaff_x19 + 2) = uStack_110;
  func_0x00010778c8d4();
  func_0x00010778c9a8();
  func_0x00010778c564();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x00010778c9a8();
  func_0x00010778c858();
  puVar1 = (undefined8 *)auStack_180;
  puStack_118 = &UNK_10778b328;
  ppppuVar7 = (undefined8 ****)&ppuStack_120;
  puStack_130 = param_2;
  puStack_128 = puVar3;
  ppuStack_120 = &puStack_80;
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_138);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar8 = &UNK_10778b36c;
    __Unwind_Resume();
    if (*(int *)(puVar4 + 0xe) == 0) {
      extraout_x8[8] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[7] = 0;
      extraout_x8[6] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      *(undefined4 *)extraout_x8 = 7;
      return puVar4;
    }
    uVar2 = *(int *)(puVar4 + 0xe) == 1;
    if ((bool)uVar2) {
      puStack_188 = &UNK_10778b36c;
      puStack_1a0 = param_2;
      puStack_198 = puVar3;
      pppuStack_190 = ppppuVar7;
      func_0x00010778c620(puVar4 + 1);
      puVar1 = auStack_250;
      puVar5 = auStack_250;
      puStack_1f8 = &UNK_10778b3c0;
      ppppuVar7 = &pppuStack_200;
      puStack_210 = param_2;
      puStack_208 = puVar3;
      pppuStack_200 = &pppuStack_190;
      func_0x00010778c620(auStack_1e8);
      uStack_218 = extraout_x8_00;
      func_0x000104c2fe00(auStack_250);
      func_0x000104c33004(puVar3,auStack_250);
      func_0x000104c2f714();
      func_0x00010778c57c(uStack_218);
      if ((bool)uVar2) {
        return puVar5;
      }
      puVar8 = &UNK_10778b440;
      ___stack_chk_fail();
    }
    *(undefined8 **)((long)puVar1 + -0x20) = param_2;
    *(undefined8 **)((long)puVar1 + -0x18) = puVar3;
    *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar7;
    *(undefined **)((long)puVar1 + -8) = puVar8;
    func_0x00010778c620();
    func_0x00010778c7e0();
    func_0x00010778c980();
    func_0x00010778c758();
    func_0x00010778c738(2);
    func_0x00010778c57c(*(undefined8 *)((long)puVar1 + -0x28));
    puVar4 = puVar5;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 **)((long)puVar1 + -0x90) = param_2;
      *(undefined8 **)((long)puVar1 + -0x88) = puVar3;
      *(undefined1 **)((long)puVar1 + -0x80) = (undefined1 *)((long)puVar1 + -0x10);
      *(undefined **)((long)puVar1 + -0x78) = &UNK_10778b484;
      if (*(char *)(puVar5 + 7) == '\x01') {
        func_0x00010748aaa4(puVar5);
      }
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 10778b514; end: 10778b537;  */

void FUN_10778b514(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010778b538(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10778b674; end: 10778b6b7;  */

undefined8 * FUN_10778b674(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d7fb0;
  _bzero(puVar1 + 0x2d,0x3e0);
  func_0x00010778b83c(param_1 + 0xa9);
  return param_1;
}



/* Entry: 10778bc64; end: 10778bc9b;  */

undefined8 FUN_10778bc64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 10778bedc; end: 10778beef;  */

undefined8 FUN_10778bedc(void)

{
  return 1;
}



/* Entry: 10778c018; end: 10778c04f;  */

void FUN_10778c018(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  lStack_20 = param_1;
  puStack_18 = param_3;
  func_0x00010778c050(&lStack_20);
  return;
}



/* Entry: 10778c12c; end: 10778c177;  */

void FUN_10778c12c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != -1 && *(int *)(param_2 + 0x40) == iVar1) {
    func_0x00010778cb28(*(int *)(param_2 + 0x40) == iVar1,param_1);
    func_0x00010778c824();
  }
  return;
}



/* Entry: 10778c394; end: 10778c3b3;  */

undefined8 FUN_10778c394(void)

{
  return 1;
}



/* Entry: 10778cf84; end: 10778cf9b;  */

uint FUN_10778cf84(uint param_1)

{
  func_0x000107781d40();
  return param_1 ^ 1;
}



/* Entry: 10778d300; end: 10778d373;  */

undefined8 *
FUN_10778d300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [32];
  
  func_0x00010778d44c();
  func_0x0001073db868(auStack_60);
  *param_4 = &PTR_DAT_1109d8020;
  *(undefined4 *)((long)param_4 + 0x1c) = param_1;
  *(undefined4 *)(param_4 + 4) = param_2;
  *(undefined4 *)((long)param_4 + 0x24) = param_3;
  func_0x00010748ece0(param_4 + 5,param_6);
  return param_4;
}



/* Entry: 10778d528; end: 10778d53b;  */

void FUN_10778d528(void)

{
  func_0x000107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778ebd4; end: 10778ec2b;  */

undefined1 * FUN_10778ebd4(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_30 [16];
  
  puVar2 = auStack_30;
  iVar1 = (int)auStack_30;
  func_0x00010772d2fc();
  func_0x00010778f938();
  func_0x000107785358();
  if ((puVar2 == (undefined1 *)(param_1 + 0x228)) ||
     (func_0x000107785400(auStack_30,puVar2), iVar1 != 0)) {
    puVar2 = (undefined1 *)(param_1 + 0x228);
  }
  return puVar2;
}



/* Entry: 10778ef74; end: 10778ef77;  */

void FUN_10778ef74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d8330;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10778f0c8; end: 10778f0df;  */

void FUN_10778f0c8(void)

{
  func_0x00010778f0e0();
  return;
}



/* Entry: 10778f2d4; end: 10778f2ff;  */

void FUN_10778f2d4(undefined8 param_1,long param_2)

{
  func_0x00010778fa48(*(undefined4 *)(param_2 + 0x30));
  func_0x00010778fa3c();
  return;
}



/* Entry: 10778f4bc; end: 10778f523;  */

void FUN_10778f4bc(undefined8 param_1,undefined8 *param_2)

{
  func_0x000107785b28(*param_2);
  func_0x00010778f884();
  return;
}



/* Entry: 10778fc44; end: 10778fc47;  */

long FUN_10778fc44(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109d8440;
  func_0x00010778ed34(param_1 + 0x76);
  func_0x00010778f074(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 10778fe08; end: 10778fe63;  */

byte FUN_10778fe08(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x70) == 0;
  bVar1 = 2;
  if (bVar3) {
    bVar1 = 3;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    bVar1 = bVar3;
  }
  bVar2 = bVar1 | 4;
  if (*(int *)(param_1 + 0xe8) != 0) {
    bVar2 = bVar1;
  }
  bVar1 = bVar2 | 8;
  if (*(int *)(param_1 + 0x130) != 0) {
    bVar1 = bVar2;
  }
  bVar2 = 0x10;
  if (*(int *)(param_1 + 0x200) != 0) {
    bVar2 = 0;
  }
  return bVar1 | bVar2;
}



/* Entry: 107790000; end: 10779003b;  */

void FUN_107790000(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077915b8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107791990();
  return;
}



/* Entry: 10779071c; end: 1077908b7;  */

long * FUN_10779071c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 auStack_170 [16];
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **appuStack_148 [18];
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined1 uStack_a8;
  long alStack_a0 [11];
  int iStack_48;
  undefined8 uStack_38;
  
  func_0x000107791900();
  uStack_38 = extraout_x8;
  func_0x000107326d6c(alStack_a0,0,0x400,0);
  uVar1 = *(char *)(param_1 + 0x17) == '\0';
  func_0x0001075222a8();
  if (iStack_48 == 0) {
    uStack_158 = 0;
    uStack_150 = 0;
    ppuStack_b8 = (undefined **)((ulong)ppuStack_b8 & 0xffffffffffffff00);
    uStack_a8 = 0;
    auStack_170[0] = 0;
    uStack_160 = 0;
    auStack_190[0] = 0;
    uStack_178 = 0;
    func_0x0001075375e8(appuStack_148,&uStack_158,&ppuStack_b8,auStack_170,auStack_190);
    func_0x0001001148fc(auStack_190);
    func_0x000107323f70(auStack_170);
    func_0x000107323ef8(&ppuStack_b8);
    func_0x000107323f90(&uStack_158);
    plStack_b0 = alStack_a0;
    ppuStack_b8 = &PTR_DAT_1131ad2e8;
    pppuVar3 = &ppuStack_b8;
    func_0x000107532864(auStack_170,pppuVar3,param_2,appuStack_148,0,0);
    func_0x0001072f5f6c(&ppuStack_b8);
    func_0x000107324968(appuStack_148);
  }
  else {
    func_0x000107878d14(appuStack_148,alStack_a0);
    pppuVar3 = appuStack_148;
    func_0x000100066230(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_148);
    *unaff_x19 = 0;
    unaff_x19[0x10] = 0;
  }
  plVar2 = alStack_a0;
  func_0x000107326ea8(plVar2);
  func_0x0001077918dc(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001072f5f6c(&ppuStack_b8);
  func_0x000107324968(appuStack_148);
  plVar2 = alStack_a0;
  func_0x000107326ea8();
  func_0x000107791998();
  plVar2 = (long *)*plVar2;
  if ((plVar2 != (long *)0x0) && (*pppuVar3 != (undefined **)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001077908dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return plVar2;
  }
  return (long *)(ulong)(plVar2 == (long *)0x0 && *pppuVar3 == (undefined **)0x0);
}



/* Entry: 107791528; end: 107791547;  */

void FUN_107791528(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072c9b9c();
  }
  return;
}



/* Entry: 1077916f4; end: 107791707;  */

void FUN_1077916f4(void)

{
  func_0x000107791774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107791ae4; end: 107791af7;  */

void FUN_107791ae4(void)

{
  func_0x000107791b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107791cec; end: 107791cef;  */

undefined8 * FUN_107791cec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10779296c; end: 1077939c7;  */

/* WARNING: Possible PIC construction at 0x000107792d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107792d1c) */
/* WARNING: Removing unreachable block (ram,0x000107792e80) */
/* WARNING: Removing unreachable block (ram,0x000107792e88) */
/* WARNING: Removing unreachable block (ram,0x000107792e9c) */
/* WARNING: Removing unreachable block (ram,0x000107792d24) */
/* WARNING: Removing unreachable block (ram,0x000107792d38) */
/* WARNING: Removing unreachable block (ram,0x000107792d40) */
/* WARNING: Removing unreachable block (ram,0x0001077933c8) */
/* WARNING: Removing unreachable block (ram,0x000107792d48) */
/* WARNING: Removing unreachable block (ram,0x0001077933d0) */
/* WARNING: Removing unreachable block (ram,0x0001077933d8) */
/* WARNING: Removing unreachable block (ram,0x0001077933dc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10779296c(long param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4,
                  long *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 ******ppppppuVar4;
  undefined1 *puVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar12;
  undefined1 extraout_w8_02;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  undefined8 *puVar13;
  undefined1 *unaff_x19;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  undefined1 uStack_171;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined8 ******appppppuStack_160 [3];
  undefined8 ******ppppppuStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 ******ppppppuStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined1 uStack_e0;
  byte bStack_d8;
  byte bStack_c8;
  byte bStack_c0;
  byte bStack_b8;
  byte bStack_60;
  undefined8 uStack_58;
  
  plVar10 = (long *)appppppuStack_160;
  pppppppuVar6 = appppppuStack_160;
  puVar9 = param_4;
  plVar11 = param_5;
  func_0x0001077947e4();
  puStack_130 = param_2;
  uStack_128 = param_3;
  uStack_58 = extraout_x8;
  func_0x00010772d2fc(&ppppppuStack_100,&puStack_130);
  ppuVar3 = &PTR_DAT_1109d88e0;
  pppppppuVar7 = (undefined8 *******)&UNK_1109d8bc8;
  plVar8 = (long *)&ppppppuStack_100;
  func_0x000107785358(&PTR_DAT_1109d88e0,&UNK_1109d8bc8,plVar8);
  uVar2 = ppuVar3 == (undefined **)&UNK_1109d8bc8;
  if ((bool)uVar2) {
LAB_1077929e0:
    *unaff_x19 = 0;
    unaff_x19[0x18] = 0;
    goto LAB_107793744;
  }
  ppppppuVar4 = &ppppppuStack_100;
  pppppppuVar7 = (undefined8 *******)ppuVar3;
  func_0x000107785400(ppppppuVar4,ppuVar3);
  if ((int)ppppppuVar4 != 0) goto LAB_1077929e0;
  bVar1 = *(byte *)(ppuVar3 + 1);
  uVar2 = bVar1 == 0x1e;
  uVar14 = (uint)bVar1;
  switch(bVar1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 0xb:
  case 0x1e:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x00010733b904();
    if ((bStack_c8 & 1) != 0) {
      uVar15 = (uint)bVar1;
      uVar2 = uVar15 == 0xb;
      switch(bVar1) {
      case 0:
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_00 + 0x2f0);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_120 + 0x5e);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x2f0);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 1:
      case 2:
      case 4:
      case 5:
      case 8:
      case 9:
      case 10:
code_r0x000107792afc:
        func_0x00010727e950(&ppppppuStack_100);
        ppppppuVar4 = &ppppppuStack_148;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar4);
        uVar2 = uVar15 - 1 == 9;
        switch(uVar15 - 1) {
        case 0:
          goto code_r0x000107792b30;
        case 1:
          goto code_r0x000107792d10;
        case 2:
        case 5:
        case 6:
          break;
        case 3:
          goto code_r0x000107792bdc;
        case 4:
          goto code_r0x000107792b84;
        case 7:
          goto code_r0x000107792cb8;
        case 8:
          goto code_r0x000107792c60;
        case 9:
          goto code_r0x000107792d64;
        default:
          uVar2 = uVar15 - 0x18 == 5;
          switch(uVar15 - 0x18) {
          case 0:
            goto code_r0x0001077930c4;
          case 1:
            goto code_r0x000107793064;
          case 2:
          case 5:
            goto code_r0x000107792ffc;
          }
        }
        goto LAB_1077931e4;
      case 3:
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_17 + 0x490);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_120 + 0x92);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x490);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 6:
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_16 + 0x590);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_120 + 0xb2);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x590);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 7:
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_18 + 0x5f0);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_120 + 0xbe);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x5f0);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 0xb:
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_15 + 0x7e0);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            func_0x00010779488c();
            pppppppuVar7 = pppppppuStack_120;
            FUN_1077946cc(&ppppppuStack_100,pppppppuStack_120);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            pppppppuVar7 = (undefined8 *******)*param_5;
            FUN_1077946cc(&ppppppuStack_100,pppppppuVar7);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      default:
        uVar2 = uVar14 == 0x1e;
        if (!(bool)uVar2) goto code_r0x000107792afc;
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_02 + 0x2b8);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x0001077949a8(pppppppuStack_120 + 0x57);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x0001077949a8(*param_5 + 0x2b8);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      goto LAB_107793730;
    }
    func_0x000107794768();
    if (extraout_x8_01 != 0) {
      func_0x000107794780();
      func_0x0001077947cc();
      func_0x000107794790();
LAB_107792aa0:
      func_0x0001077947f8();
      func_0x000107794930();
    }
LAB_107792aa8:
    func_0x000107794718();
LAB_107793734:
    func_0x000107794994();
    func_0x00010727e950();
    break;
  case 1:
code_r0x000107792b30:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001077848c0();
    if ((bStack_b8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_11 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar5 = (undefined1 *)&ppppppuStack_100;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_03 + 0x350);
      func_0x000107785bfc(puVar5,pppppppuVar7);
      if (((ulong)puVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          pppppppuVar7 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b90(pppppppuStack_120);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b90(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010754e888();
    break;
  case 2:
code_r0x000107792d10:
    func_0x000107794824();
    func_0x00010779474c();
    puVar16 = (undefined *)0x107792d1c;
    goto code_r0x0001077939c8;
  case 4:
code_r0x000107792bdc:
    pppppppuStack_120 = (undefined8 *******)0x0;
    uStack_118 = 0;
    uStack_110 = 0;
    ppppppuStack_100._0_1_ = 0;
    appppppuStack_160[0]._0_1_ = 0;
    pppppppuVar7 = &pppppppuStack_120;
    puVar9 = (undefined1 *)&ppppppuStack_100;
    plVar8 = param_5;
    func_0x000107791374(&ppppppuStack_148,param_4,pppppppuVar7,param_5);
    if ((uStack_138 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_10 != 0) {
        func_0x000105988308(&ppppppuStack_100,param_5 + 8,&pppppppuStack_120);
        func_0x0001077947cc();
        puVar9 = (undefined1 *)&ppppppuStack_100;
        plVar8 = (long *)0xdd;
        func_0x0001003a9204(appppppuStack_160);
        func_0x000100066230(&pppppppuStack_120,appppppuStack_160);
        func_0x000107794930();
        pppppppuVar7 = pppppppuVar6;
      }
      func_0x000107794a10();
      uVar12 = extraout_w8;
    }
    else {
      func_0x00010779491c();
      ppppppuVar4 = &ppppppuStack_148;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_05 + 0x4f0);
      func_0x0001077908b8(ppppppuVar4,pppppppuVar7);
      if (((ulong)ppppppuVar4 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          func_0x000107791d04(&ppppppuStack_100,*param_5);
          func_0x000107794b58(CONCAT71(ppppppuStack_100._1_7_,ppppppuStack_100._0_1_));
          pppppppuVar7 = &ppppppuStack_100;
          func_0x0001077943bc(param_5,pppppppuVar7);
          func_0x000107793af4(&ppppppuStack_100);
        }
        else {
          func_0x000107794b58(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
      uVar12 = extraout_w8_01;
    }
    unaff_x19[0x18] = uVar12;
    FUN_107791528(&ppppppuStack_148);
    goto code_r0x00010779384c;
  case 5:
code_r0x000107792b84:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001073398b8();
    if ((bStack_c0 & 1) != 0) {
      func_0x00010779491c();
      puVar5 = (undefined1 *)&ppppppuStack_100;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_04 + 0x528);
      FUN_107785dfc(puVar5,pppppppuVar7);
      if (((ulong)puVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          pppppppuVar7 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794a54(pppppppuStack_120 + 0xa5);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794a54(*param_5 + 0x528);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      goto code_r0x000107793394;
    }
    func_0x000107794768();
    if (extraout_x8_09 != 0) {
      func_0x000107794780();
      func_0x0001077947cc();
      func_0x000107794790();
code_r0x000107792e4c:
      func_0x0001077947f8();
      func_0x000107794930();
    }
code_r0x000107792e54:
    func_0x000107794718();
    goto code_r0x000107793398;
  case 8:
code_r0x000107792cb8:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001077848dc();
    if ((bStack_60 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_13 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar5 = (undefined1 *)&ppppppuStack_100;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_07 + 0x650);
      func_0x0001077860a0(puVar5,pppppppuVar7);
      if (((ulong)puVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          pppppppuVar7 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b34(pppppppuStack_120);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b34(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010754f474();
    break;
  case 9:
code_r0x000107792c60:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x0001073398b8();
    if ((bStack_c0 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_12 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        goto code_r0x000107792e4c;
      }
      goto code_r0x000107792e54;
    }
    func_0x00010779491c();
    puVar5 = (undefined1 *)&ppppppuStack_100;
    pppppppuVar7 = (undefined8 *******)(extraout_x8_06 + 0x718);
    FUN_107785dfc(puVar5,pppppppuVar7);
    if (((ulong)puVar5 & 1) == 0) {
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        pppppppuVar7 = (undefined8 *******)*param_5;
        func_0x00010779488c();
        func_0x000107794a54(pppppppuStack_120 + 0xe3);
        func_0x0001077947a0();
        func_0x00010779487c();
      }
      else {
        func_0x000107794a54(*param_5 + 0x718);
      }
      func_0x0001077947bc();
      func_0x000107794884();
    }
code_r0x000107793394:
    func_0x000107794954();
code_r0x000107793398:
    func_0x000107794994();
    func_0x000107339974();
    break;
  case 10:
code_r0x000107792d64:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x00010778ac78();
    if ((bStack_c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_14 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar5 = (undefined1 *)&ppppppuStack_100;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_08 + 0x780);
      func_0x00010778bef0(puVar5,pppppppuVar7);
      if (((ulong)puVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          pppppppuVar7 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b1c(pppppppuStack_120);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b1c(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010778b484();
    break;
  default:
LAB_1077931e4:
    uVar2 = uVar14 - 0x1b == 1;
    if (uVar14 - 0x1b < 2) {
      func_0x000107794824();
      func_0x00010779474c();
      func_0x00010733b904();
      if ((bStack_c8 & 1) == 0) {
        func_0x000107794768();
        if (extraout_x8_27 != 0) {
          func_0x000107794780();
          func_0x0001077947cc();
          func_0x000107794790();
          goto LAB_107792aa0;
        }
        goto LAB_107792aa8;
      }
      func_0x00010779491c();
      uVar2 = uVar14 == 0x1b;
      if ((bool)uVar2) {
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_26 + 0x210);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x0001077949a8(pppppppuStack_120 + 0x42);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x0001077949a8(*param_5 + 0x210);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      else {
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_26 + 0x248);
        func_0x000107786038(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x0001077949a8(pppppppuStack_120 + 0x49);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x0001077949a8(*param_5 + 0x248);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
LAB_107793730:
      func_0x000107794954();
      goto LAB_107793734;
    }
    pppppppuStack_120 = (undefined8 *******)0x0;
    uStack_118 = 0;
    uStack_110 = 0;
    pppppppuVar7 = &pppppppuStack_120;
    func_0x00010754bb48(&ppppppuStack_100,param_4,pppppppuVar7,param_5);
    if ((bStack_d8 & 1) == 0) {
      func_0x000107794a10();
      uVar12 = extraout_w8_00;
      goto LAB_107793848;
    }
    uVar2 = uVar14 - 0xc == 0xb;
    switch(uVar14 - 0xc) {
    case 0:
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar4 = ppppppuStack_148 + 0x65;
        *(undefined1 *)(ppppppuStack_148 + 0x69) = uStack_e0;
        break;
      }
      puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x328);
      *(undefined1 *)(*(long *)(param_1 + 8) + 0x348) = uStack_e0;
code_r0x00010779383c:
      puVar13[1] = pppppuStack_f8;
      *puVar13 = CONCAT71(ppppppuStack_100._1_7_,ppppppuStack_100._0_1_);
      puVar13[3] = pppppuStack_e8;
      puVar13[2] = pppppuStack_f0;
      goto LAB_107793844;
    case 1:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x398);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x3b8) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0x73;
      *(undefined1 *)(ppppppuStack_148 + 0x77) = uStack_e0;
      break;
    case 2:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x408);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x428) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0x81;
      *(undefined1 *)(ppppppuStack_148 + 0x85) = uStack_e0;
      break;
    case 3:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x4c8);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x4e8) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0x99;
      *(undefined1 *)(ppppppuStack_148 + 0x9d) = uStack_e0;
      break;
    case 4:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        func_0x000107794ab0(*(undefined8 *)(param_1 + 8));
        goto LAB_107793844;
      }
      func_0x000107794914();
      func_0x000107794ab0(ppppppuStack_148);
      goto code_r0x0001077936c8;
    case 5:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x568);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x588) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0xad;
      *(undefined1 *)(ppppppuStack_148 + 0xb1) = uStack_e0;
      break;
    case 6:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x5c8);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x5e8) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0xb9;
      *(undefined1 *)(ppppppuStack_148 + 0xbd) = uStack_e0;
      break;
    case 7:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x628);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x648) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0xc5;
      *(undefined1 *)(ppppppuStack_148 + 0xc9) = uStack_e0;
      break;
    case 8:
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        func_0x000107794ac8(ppppppuStack_148);
        goto code_r0x0001077936c8;
      }
      func_0x000107794ac8(*(undefined8 *)(param_1 + 8));
      goto LAB_107793844;
    case 9:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x758);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x778) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0xeb;
      *(undefined1 *)(ppppppuStack_148 + 0xef) = uStack_e0;
      break;
    case 10:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x7b8);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x7d8) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0xf7;
      *(undefined1 *)(ppppppuStack_148 + 0xfb) = uStack_e0;
      break;
    case 0xb:
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 8) + 0x818);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x838) = uStack_e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar4 = ppppppuStack_148 + 0x103;
      *(undefined1 *)(ppppppuStack_148 + 0x107) = uStack_e0;
      break;
    default:
      goto LAB_107793844;
    }
    ppppppuVar4[1] = pppppuStack_f8;
    *ppppppuVar4 = (undefined8 *****)CONCAT71(ppppppuStack_100._1_7_,ppppppuStack_100._0_1_);
    ppppppuVar4[3] = pppppuStack_e8;
    ppppppuVar4[2] = pppppuStack_f0;
code_r0x0001077936c8:
    pppppppuVar7 = &ppppppuStack_148;
    func_0x0001077943bc(param_1 + 8,pppppppuVar7);
    func_0x000107793af4(&ppppppuStack_148);
LAB_107793844:
    func_0x000107794954();
    uVar12 = extraout_w8_02;
LAB_107793848:
    unaff_x19[0x18] = uVar12;
    plVar8 = param_5;
    plVar10 = plVar11;
code_r0x00010779384c:
    pppppppuVar6 = &pppppppuStack_120;
    goto LAB_107793740;
  case 0x18:
code_r0x0001077930c4:
    ppppppuStack_148 = (undefined8 ******)0x0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x000107794a8c();
    plVar11 = (long *)0x0;
    func_0x000107557da8();
    if ((bStack_c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_24 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar5 = (undefined1 *)&ppppppuStack_100;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_21 + 0x168);
      func_0x000107794360(puVar5,pppppppuVar7);
      if (((ulong)puVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          pppppppuVar7 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794af4(pppppppuStack_120);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794af4(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x000107793dc0();
    break;
  case 0x19:
code_r0x000107793064:
    ppppppuStack_148 = (undefined8 ******)0x0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x000107794a8c();
    plVar11 = (long *)0x1;
    func_0x000107557f84();
    if ((bStack_c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_23 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar5 = (undefined1 *)&ppppppuStack_100;
      pppppppuVar7 = (undefined8 *******)(extraout_x8_20 + 0x1a0);
      func_0x0001077944fc(puVar5,pppppppuVar7);
      if (((ulong)puVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          pppppppuVar7 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b00(pppppppuStack_120);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b00(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x000107793dec();
    break;
  case 0x1a:
  case 0x1d:
code_r0x000107792ffc:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x00010733e5bc();
    if ((bStack_c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_22 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      uVar2 = uVar14 == 0x1d;
      if ((bool)uVar2) {
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_25 + 0x280);
        func_0x000107785b50(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x000107794a4c(pppppppuStack_120 + 0x50);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x000107794a4c(*param_5 + 0x280);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      else {
        uVar2 = uVar14 == 0x1a;
        if (!(bool)uVar2) {
          func_0x00010733e5d8(&ppppppuStack_100);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_148);
          goto LAB_1077931e4;
        }
        func_0x00010779491c();
        puVar5 = (undefined1 *)&ppppppuStack_100;
        pppppppuVar7 = (undefined8 *******)(extraout_x8_19 + 0x1d8);
        func_0x000107785b50(puVar5,pppppppuVar7);
        if (((ulong)puVar5 & 1) == 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
            pppppppuVar7 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x000107794a4c(pppppppuStack_120 + 0x3b);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x000107794a4c(*param_5 + 0x1d8);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010733e5d8();
  }
  pppppppuVar6 = &ppppppuStack_148;
  plVar10 = plVar11;
LAB_107793740:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar6);
  plVar11 = plVar10;
LAB_107793744:
  func_0x000107794738(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107794850();
  func_0x00010727e950(&ppppppuStack_100);
  ppppppuVar4 = &ppppppuStack_148;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar4);
  puVar16 = &UNK_1077939c8;
  func_0x000107794960();
code_r0x0001077939c8:
  puStack_170 = &stack0xfffffffffffffff0;
  puStack_168 = puVar16;
  func_0x000107555de4(&uStack_171,ppppppuVar4,pppppppuVar7,plVar8,*puVar9,(char)*plVar11);
  return;
}



/* Entry: 107793d40; end: 107793d8f;  */

long FUN_107793d40(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  func_0x0001077947e4();
  lVar1 = *param_2;
  func_0x000107794aa4();
  func_0x000107794ae0();
  func_0x000107794940();
  func_0x000104c32a18();
  *(undefined1 *)(unaff_x19 + 0x40) = 2;
  func_0x0001077949a0();
  func_0x000107794700();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    func_0x0001072dbce8(lVar1);
  }
  return lVar1;
}



/* Entry: 107793f64; end: 107793f77;  */

void FUN_107793f64(void)

{
  func_0x000107793fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107794064; end: 1077940b3;  */

long FUN_107794064(long param_1)

{
  func_0x000107266a30(param_1 + 0x150);
  func_0x00010727fc1c(param_1 + 0x118);
  func_0x000107266a30(param_1 + 0xe0);
  func_0x000107266a30(param_1 + 0xa8);
  func_0x00010727fc1c(param_1 + 0x70);
  func_0x00010755e980(param_1 + 0x38);
  func_0x000107794a84();
  return param_1;
}



/* Entry: 1077942b8; end: 10779430f;  */

void FUN_1077942b8(undefined8 *param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  
  func_0x000107794804();
  func_0x0001077949e4();
  func_0x000107794aa4();
  func_0x000107794ae0();
  func_0x000107794940();
  FUN_1077778dc();
  func_0x0001077949a0();
  func_0x000107794700();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077949a0();
  func_0x000107794960();
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 107794400; end: 107794453;  */

void FUN_107794400(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107794bbc();
  if (!(bool)in_ZR || (int)extraout_x8 != -1) {
    if ((int)extraout_x8 == -1) {
      func_0x000107794a84();
    }
    else {
      func_0x000107794ae8((&PTR_DAT_1109d8cc0)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077946cc; end: 1077946ff;  */

/* WARNING: Possible PIC construction at 0x0001077946e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077946ec) */

void FUN_1077946cc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x810) != -1 || *(int *)(param_1 + 0x30) != -1) {
    if (*(int *)(param_1 + 0x30) == -1) {
      if (*(uint *)(param_2 + 0x810) != 0xffffffff) {
        func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(param_2 + 0x810)],param_2 + 0x7e0,
                            param_2 + 0x7e0,param_1);
      }
      *(undefined4 *)(param_2 + 0x810) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 107794ed0; end: 107794ef7;  */

undefined8 * FUN_107794ed0(undefined8 *param_1)

{
  func_0x0001073e4d20(param_1 + 5);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1077950c0; end: 1077950fb;  */

long FUN_1077950c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072f6da0();
  func_0x0001072f6da0(lVar1 + 0x10);
  return param_1;
}



/* Entry: 1077958d8; end: 107795bbf;  */

undefined8 FUN_1077958d8(void)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 *puStack_28;
  
  func_0x000107799334();
  func_0x00010734936c();
  if (*(int *)(unaff_x20 + 0x198) != 0) {
    func_0x0001077990dc(&DAT_10f428e5a);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x1d0) != 0) {
    func_0x0001077990dc(&DAT_10f428c59);
    func_0x0001077994bc();
  }
  if (*(int *)(unaff_x20 + 0x208) != 0) {
    func_0x0001077990dc(&DAT_10f428bf0);
    func_0x0001077994bc();
  }
  if (*(int *)(unaff_x20 + 0x240) != 0) {
    func_0x0001077990dc(&DAT_10f428b24);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x2b8) != 0) {
    func_0x0001077990dc(&DAT_10f428b72);
    func_0x00010779943c();
  }
  if (*(int *)(unaff_x20 + 0x330) != 0) {
    func_0x0001077990dc(&DAT_10f428b69);
    func_0x00010779943c();
  }
  if (*(int *)(unaff_x20 + 0x368) != 0) {
    func_0x0001077990dc(&DAT_10f428f66);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x3a0) != 0) {
    func_0x0001077990dc(&DAT_10f428dc2);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x3d8) != 0) {
    func_0x0001077990dc(&DAT_10f428d32);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x450) != 0) {
    func_0x0001077990dc(&DAT_10f428bba);
    func_0x00010779943c();
  }
  if (*(int *)(unaff_x20 + 0x4c8) != 0) {
    func_0x0001077990dc(&DAT_10f428e85);
    func_0x00010779943c();
  }
  if (*(int *)(unaff_x20 + 0x510) != 0) {
    func_0x0001077990dc(&DAT_10f428f43);
    func_0x000107799544();
  }
  if (*(int *)(unaff_x20 + 0x548) != 0) {
    func_0x0001077990dc(&DAT_10f428b3f);
    func_0x0001073f1cf4(unaff_x20 + 0x518);
    uVar1 = (ulong)*(uint *)(unaff_x20 + 0x548);
    if (*(uint *)(unaff_x20 + 0x548) == 0xffffffff) {
      uVar1 = 0xffffffffffffffff;
    }
    puStack_28 = &stack0xffffffffffffffd0;
    (*(code *)(&PTR_FUN_1109d93a8)[uVar1])(&puStack_28,unaff_x20 + 0x518);
  }
  if (*(int *)(unaff_x20 + 0x580) != 0) {
    func_0x0001077990dc(&DAT_10f428b87);
    func_0x0001077994bc();
  }
  if (*(int *)(unaff_x20 + 0x5b8) != 0) {
    func_0x0001077990dc(&DAT_10f428e6f);
    func_0x0001077994bc();
  }
  if (*(int *)(unaff_x20 + 0x630) != 0) {
    func_0x0001077990dc(&DAT_10f428cd6);
    func_0x00010779943c();
  }
  if (*(int *)(unaff_x20 + 0x678) != 0) {
    func_0x0001077990dc(&DAT_10f428d69);
    func_0x000107799544();
  }
  if (*(int *)(unaff_x20 + 0x6b0) != 0) {
    func_0x0001077990dc(&DAT_10f428ce3);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x6e8) != 0) {
    func_0x0001077990dc(&DAT_10f428f08);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x720) != 0) {
    func_0x0001077990dc(&DAT_10f428c82);
    func_0x00010779935c();
  }
  if (*(int *)(unaff_x20 + 0x768) != 0) {
    func_0x0001077990dc(&DAT_10f428eab);
    func_0x00010779861c();
  }
  if (*(int *)(unaff_x20 + 0x7b0) != 0) {
    func_0x0001077990dc(&DAT_10f428b02);
    func_0x000107799544();
  }
  if (*(int *)(unaff_x20 + 0x7e8) != 0) {
    func_0x0001077990dc(&DAT_10f428e1a);
    func_0x00010779935c();
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x7d);
  return 1;
}



/* Entry: 107797c64; end: 107797c9b;  */

void FUN_107797c64(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107797c9c(param_1,&uStack_11);
  return;
}



/* Entry: 107797f28; end: 107797f6b;  */

long FUN_107797f28(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077991a8();
  func_0x0001077992bc();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x000104c32a18();
  func_0x0001077992f4(2);
  func_0x0001077990b0();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010779954c();
  }
  return param_1;
}



/* Entry: 1077980e0; end: 1077980f3;  */

void FUN_1077980e0(void)

{
  func_0x000107798148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107798338; end: 10779844f;  */

long FUN_107798338(long param_1)

{
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  
  _bzero(param_1,0xa0);
  *(undefined1 *)(param_1 + 0x98) = 1;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x160) = 1;
  func_0x0001077993c8();
  *(undefined1 *)(param_1 + 0x1c0) = extraout_w8;
  *(undefined8 *)(param_1 + 0x228) = 0;
  func_0x0001077993c8();
  *(undefined1 *)(param_1 + 0x228) = extraout_w8_00;
  *(ulong *)(param_1 + 0x238) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x230) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x248) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x240) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 600) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x250) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x268) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x260) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x278) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x270) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x288) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x280) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x288) = extraout_w8_00;
  *(ulong *)(param_1 + 0x298) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x290) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x2a8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x2a0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x2b8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x2b0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x2c8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x2c0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x2d8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x2d0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x2e8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x2e0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = extraout_w8_00;
  func_0x0001077993c8();
  *(undefined1 *)(param_1 + 0x350) = extraout_w8_01;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  func_0x0001077993c8();
  *(undefined1 *)(param_1 + 0x3b8) = extraout_w8_02;
  *(ulong *)(param_1 + 0x3c8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x3c0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x3d8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x3d0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 1000) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x3e0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x3f8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x3f0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x408) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x400) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x418) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x410) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x418) = extraout_w8_02;
  *(ulong *)(param_1 + 0x478) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x470) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x468) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x460) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x458) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x450) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x448) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x440) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x438) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x430) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x428) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x420) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x478) = extraout_w8_02;
  *(ulong *)(param_1 + 0x4d8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x4d0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x4c8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x4c0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x4b8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x4b0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x4a8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x4a0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x498) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x490) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x488) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x480) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x4d8) = extraout_w8_02;
  *(ulong *)(param_1 + 0x538) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x530) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x528) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x520) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x518) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x510) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x508) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x500) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x4f8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x4f0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(param_1 + 0x4e8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(param_1 + 0x4e0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x538) = extraout_w8_02;
  return param_1;
}



/* Entry: 107798588; end: 10779858b;  */

undefined8 FUN_107798588(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077986ec; end: 1077986fb;  */

long FUN_1077986ec(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  
  func_0x0001077991d0(*(undefined8 *)*param_1);
  lVar1 = *param_2;
  func_0x000107799464();
  func_0x000107799434();
  func_0x0001077992a8();
  FUN_1077778dc();
  func_0x000107799354();
  func_0x0001077990b0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107799354();
    func_0x00010779934c();
    if (*(int *)(lVar1 + 0x40) != 0) {
      func_0x0001077995a8();
      func_0x0001077987c4();
    }
    return 0;
  }
  return lVar1;
}



/* Entry: 107798894; end: 1077988df;  */

void FUN_107798894(undefined8 param_1,undefined8 *param_2)

{
  func_0x000107785b28(*param_2);
  func_0x00010779917c();
  return;
}



/* Entry: 107798a88; end: 107798aab;  */

undefined8 FUN_107798a88(undefined8 param_1)

{
  func_0x000107798aac();
  return param_1;
}



/* Entry: 107798bb8; end: 107798bef;  */

void FUN_107798bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x0001073f2a14(param_2,param_3);
    func_0x00010727e15c();
    func_0x0001073efb98(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x000107798bf0(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107798e60; end: 107798f13;  */

undefined1 * FUN_107798e60(long *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  long lVar7;
  long unaff_x21;
  undefined1 uStack_b9;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  puVar4 = auStack_a0;
  puVar6 = auStack_a0;
  puVar5 = auStack_a0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_1;
  uVar3 = *(int *)(lVar7 + 0x68) == 2;
  if ((bool)uVar3) {
    func_0x000107799470();
    func_0x0001077990c8(uStack_38);
    puVar4 = param_2;
    if ((bool)uVar3) {
      puVar4 = (undefined1 *)(unaff_x21 + 0x28);
      cVar2 = *(char *)(unaff_x21 + 0x60);
      if (cVar2 != *(char *)(param_3 + 0x60)) {
        if (cVar2 != '\0') {
          if (*(char *)(unaff_x21 + 0x60) == '\x01') {
            func_0x000104c2f714();
            *(undefined1 *)(unaff_x21 + 0x60) = 0;
          }
          return puVar4;
        }
        func_0x000104c2fe00();
        puVar4[0x38] = 1;
        return puVar4;
      }
      if (cVar2 != '\0') {
        func_0x0001072747d8();
        func_0x000107262f84();
        func_0x000104c2fe38();
        *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
        return unaff_x20;
      }
      return puVar4;
    }
  }
  else {
    func_0x0001073244c0(auStack_a0,param_3);
    func_0x00010738371c(lVar7);
    func_0x000107324484(auStack_a0);
    func_0x0001077990c8(uStack_38);
    if ((bool)uVar3) {
      return puVar6;
    }
  }
  ___stack_chk_fail();
  func_0x000107324484();
  func_0x00010779934c();
  iVar1 = *(int *)(puVar5 + 0x38);
  puVar6 = (undefined1 *)(ulong)(*(int *)(puVar4 + 0x38) == iVar1);
  if (iVar1 != -1 && *(int *)(puVar4 + 0x38) == iVar1) {
    puStack_a8 = &UNK_107798f14;
    puStack_b8 = &uStack_b9;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x0001077993e4(puVar6,puVar5);
  }
  return puVar6;
}



/* Entry: 1077998d0; end: 107799967;  */

undefined8 * FUN_1077998d0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined4 uStack_84;
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_80[0] = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_84 = 0;
  func_0x0001073837dc(param_1 + 0x210,param_2,auStack_80,&uStack_84);
  puVar1 = (undefined8 *)auStack_80;
  func_0x00010724b3d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_80);
  puVar2 = puVar1;
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_1109d94f0;
  func_0x000107797be0(puVar2 + 0xfe);
  func_0x00010779824c(puVar2 + 0x2d);
  func_0x0001077866dc(puVar2);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(puVar2 + 0x28);
  func_0x000107284d8c(puVar1 + 0x1a);
  func_0x000107283194(puVar1 + 0x18);
  func_0x0001072c9b9c(puVar1 + 0x16);
  func_0x000104c2f714(puVar1 + 0xf);
  func_0x000104c2f714(puVar1 + 8);
  func_0x000104c2f714(unaff_x20 + 1);
  return puVar1;
}



/* Entry: 107799bf4; end: 107799c0b;  */

void FUN_107799bf4(void)

{
  func_0x000107799c0c();
  return;
}



/* Entry: 10779a804; end: 10779a817;  */

void FUN_10779a804(void)

{
  func_0x000107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779b2ac; end: 10779b2bf;  */

void FUN_10779b2ac(void)

{
  func_0x00010779b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779b4f0; end: 10779b503;  */

void FUN_10779b4f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x50) != 0) {
    uStack_18 = param_3;
    func_0x00010779b530(&lStack_20);
  }
  return;
}



/* Entry: 10779b5e4; end: 10779b61b;  */

void FUN_10779b5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    func_0x000107561800(param_2,param_3);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x45);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x45) = uVar1;
    return;
  }
  func_0x00010779b61c(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10779b834; end: 10779b837;  */

void FUN_10779b834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d9710;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10779bc00; end: 10779bc3b;  */

void FUN_10779bc00(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010779cbbc(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010779d0e0();
  return;
}



/* Entry: 10779c24c; end: 10779ca13;  */

void FUN_10779c24c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [32];
  undefined1 uStack_a8;
  byte bStack_a0;
  uint uStack_98;
  byte bStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_70 = param_5;
  uStack_68 = param_6;
  func_0x00010772d2fc(auStack_c8,&uStack_70);
  ppuVar2 = &PTR_DAT_1109d97f8;
  func_0x000107785358(&PTR_DAT_1109d97f8,&UNK_1109d9978,auStack_c8);
  if (ppuVar2 == (undefined **)&UNK_1109d9978) {
LAB_10779c2b8:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  puVar3 = auStack_c8;
  func_0x000107785400(puVar3,ppuVar2);
  if ((int)puVar3 != 0) goto LAB_10779c2b8;
  bVar1 = *(byte *)(ppuVar2 + 1);
  if (bVar1 < 6) {
LAB_10779c2d0:
    puStack_88 = (undefined1 *)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_60 = (undefined1 *)((ulong)puStack_60 & 0xffffffffffffff00);
    auStack_e0[0] = 0;
    func_0x00010733b904(auStack_c8,param_7,&puStack_88,param_8,&puStack_60,auStack_e0);
    if ((bStack_90 & 1) == 0) {
      func_0x00010779d154();
      if (extraout_x8_00 != 0) {
        func_0x00010779d144();
        func_0x00010779d180();
        func_0x00010779d134();
        func_0x00010779d16c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
      }
      func_0x00010779d0e8();
      uVar5 = extraout_w8;
    }
    else {
      switch(bVar1) {
      case 0:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8 + 0x168);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x168);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x168);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 1:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8_05 + 0x1c8);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x1c8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x1c8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 2:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8_07 + 0x228);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x228);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x228);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 3:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8_08 + 0x288);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x288);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x288);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 4:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8_09 + 0x2e8);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x2e8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x2e8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 5:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8_04 + 0x348);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x348);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x348);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      default:
        func_0x00010779d178();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_88);
        if (bVar1 != 6) goto LAB_10779c39c;
        goto LAB_10779c444;
      case 7:
        func_0x00010779d0d4();
        puVar3 = auStack_c8;
        func_0x000107786038(puVar3,extraout_x8_06 + 0x408);
        if (((ulong)puVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_60 + 0x408);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x408);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
      }
      uVar5 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar5;
    func_0x00010779d178();
  }
  else {
    if (bVar1 != 6) {
      if (bVar1 == 7) goto LAB_10779c2d0;
LAB_10779c39c:
      puStack_60 = (undefined1 *)0x0;
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x00010754bb48(auStack_c8,param_7,&puStack_60,param_8);
      if ((bStack_a0 & 1) == 0) {
        param_1[1] = uStack_58;
        *param_1 = puStack_60;
        param_1[2] = uStack_50;
        uStack_58 = 0;
        uStack_50 = 0;
        puStack_60 = (undefined1 *)0x0;
        uVar5 = 1;
      }
      else {
        switch(bVar1) {
        case 8:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_01 + 0x1a8) = in_register_00005008;
            *(undefined8 *)(extraout_x8_01 + 0x1a0) = param_2;
            *(undefined8 *)(extraout_x8_01 + 0x1b8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_01 + 0x1b0) = param_3;
            *(undefined1 *)(extraout_x8_01 + 0x1c0) = uStack_a8;
code_r0x00010779c80c:
            FUN_10779ce5c(param_4 + 8,&puStack_88);
            func_0x00010779cb08(&puStack_88);
          }
          else {
            func_0x00010779d064();
            *(undefined8 *)(extraout_x8_19 + 0x1a8) = in_register_00005008;
            *(undefined8 *)(extraout_x8_19 + 0x1a0) = param_2;
            *(undefined8 *)(extraout_x8_19 + 0x1b8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_19 + 0x1b0) = param_3;
            *(undefined1 *)(extraout_x8_19 + 0x1c0) = uStack_a8;
          }
          break;
        case 9:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_13 + 0x208) = in_register_00005008;
            *(undefined8 *)(extraout_x8_13 + 0x200) = param_2;
            *(undefined8 *)(extraout_x8_13 + 0x218) = in_register_00005028;
            *(undefined8 *)(extraout_x8_13 + 0x210) = param_3;
            *(undefined1 *)(extraout_x8_13 + 0x220) = uStack_a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_20 + 0x208) = in_register_00005008;
          *(undefined8 *)(extraout_x8_20 + 0x200) = param_2;
          *(undefined8 *)(extraout_x8_20 + 0x218) = in_register_00005028;
          *(undefined8 *)(extraout_x8_20 + 0x210) = param_3;
          *(undefined1 *)(extraout_x8_20 + 0x220) = uStack_a8;
          break;
        case 10:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_11 + 0x268) = in_register_00005008;
            *(undefined8 *)(extraout_x8_11 + 0x260) = param_2;
            *(undefined8 *)(extraout_x8_11 + 0x278) = in_register_00005028;
            *(undefined8 *)(extraout_x8_11 + 0x270) = param_3;
            *(undefined1 *)(extraout_x8_11 + 0x280) = uStack_a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_17 + 0x268) = in_register_00005008;
          *(undefined8 *)(extraout_x8_17 + 0x260) = param_2;
          *(undefined8 *)(extraout_x8_17 + 0x278) = in_register_00005028;
          *(undefined8 *)(extraout_x8_17 + 0x270) = param_3;
          *(undefined1 *)(extraout_x8_17 + 0x280) = uStack_a8;
          break;
        case 0xb:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_12 + 0x2c8) = in_register_00005008;
            *(undefined8 *)(extraout_x8_12 + 0x2c0) = param_2;
            *(undefined8 *)(extraout_x8_12 + 0x2d8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_12 + 0x2d0) = param_3;
            *(undefined1 *)(extraout_x8_12 + 0x2e0) = uStack_a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_18 + 0x2c8) = in_register_00005008;
          *(undefined8 *)(extraout_x8_18 + 0x2c0) = param_2;
          *(undefined8 *)(extraout_x8_18 + 0x2d8) = in_register_00005028;
          *(undefined8 *)(extraout_x8_18 + 0x2d0) = param_3;
          *(undefined1 *)(extraout_x8_18 + 0x2e0) = uStack_a8;
          break;
        case 0xc:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_10 + 0x328) = in_register_00005008;
            *(undefined8 *)(extraout_x8_10 + 800) = param_2;
            *(undefined8 *)(extraout_x8_10 + 0x338) = in_register_00005028;
            *(undefined8 *)(extraout_x8_10 + 0x330) = param_3;
            *(undefined1 *)(extraout_x8_10 + 0x340) = uStack_a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_16 + 0x328) = in_register_00005008;
          *(undefined8 *)(extraout_x8_16 + 800) = param_2;
          *(undefined8 *)(extraout_x8_16 + 0x338) = in_register_00005028;
          *(undefined8 *)(extraout_x8_16 + 0x330) = param_3;
          *(undefined1 *)(extraout_x8_16 + 0x340) = uStack_a8;
          break;
        case 0xd:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_14 + 0x388) = in_register_00005008;
            *(undefined8 *)(extraout_x8_14 + 0x380) = param_2;
            *(undefined8 *)(extraout_x8_14 + 0x398) = in_register_00005028;
            *(undefined8 *)(extraout_x8_14 + 0x390) = param_3;
            *(undefined1 *)(extraout_x8_14 + 0x3a0) = uStack_a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_21 + 0x388) = in_register_00005008;
          *(undefined8 *)(extraout_x8_21 + 0x380) = param_2;
          *(undefined8 *)(extraout_x8_21 + 0x398) = in_register_00005028;
          *(undefined8 *)(extraout_x8_21 + 0x390) = param_3;
          *(undefined1 *)(extraout_x8_21 + 0x3a0) = uStack_a8;
          break;
        case 0xe:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_15 + 1000) = in_register_00005008;
            *(undefined8 *)(extraout_x8_15 + 0x3e0) = param_2;
            *(undefined8 *)(extraout_x8_15 + 0x3f8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_15 + 0x3f0) = param_3;
            *(undefined1 *)(extraout_x8_15 + 0x400) = uStack_a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_22 + 1000) = in_register_00005008;
          *(undefined8 *)(extraout_x8_22 + 0x3e0) = param_2;
          *(undefined8 *)(extraout_x8_22 + 0x3f8) = in_register_00005028;
          *(undefined8 *)(extraout_x8_22 + 0x3f0) = param_3;
          *(undefined1 *)(extraout_x8_22 + 0x400) = uStack_a8;
          break;
        case 0xf:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            func_0x00010779d1d4();
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          func_0x00010779d1d4();
        }
        uVar5 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 3) = uVar5;
      ppuVar4 = &puStack_60;
      goto LAB_10779c8ec;
    }
LAB_10779c444:
    puStack_88 = (undefined1 *)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x000107558408(auStack_c8,&puStack_60,param_7,&puStack_88,param_8,0,0);
    if ((bStack_90 & 1) == 0) {
      func_0x00010779d154();
      if (extraout_x8_03 != 0) {
        func_0x00010779d144();
        func_0x00010779d180();
        func_0x00010779d134();
        func_0x00010779d16c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
      }
      func_0x00010779d0e8();
      uVar5 = extraout_w8_00;
    }
    else {
      func_0x00010779d0d4();
      if (uStack_98 == 0xffffffff || *(uint *)(extraout_x8_02 + 0x3d8) != uStack_98) {
        if (*(uint *)(extraout_x8_02 + 0x3d8) != uStack_98) {
LAB_10779c680:
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779ced0(puStack_60 + 0x3a8,auStack_c8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779ced0(*param_8 + 0x3a8,auStack_c8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
      }
      else {
        ppuVar4 = &puStack_60;
        puStack_60 = auStack_e0;
        (*(code *)(&PTR_DAT_1109d99c8)[uStack_98])(ppuVar4,auStack_c8,extraout_x8_02 + 0x3a8);
        if (((ulong)ppuVar4 & 1) == 0) goto LAB_10779c680;
      }
      uVar5 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar5;
    func_0x00010779cb8c(auStack_c8);
  }
  ppuVar4 = &puStack_88;
LAB_10779c8ec:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
  return;
}



/* Entry: 10779ccf8; end: 10779ccfb;  */

void FUN_10779ccf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d9988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10779ce5c; end: 10779ce9f;  */

undefined8 * FUN_10779ce5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010779d1c4();
  func_0x0001073e6950(&uStack_40);
  return param_1;
}


