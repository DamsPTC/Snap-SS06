/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10564dfd0; end: 10564e2a7;  */

void FUN_10564dfd0(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,ulong param_6,undefined8 param_7)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 extraout_x9;
  int extraout_w11;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  char cStack_1f8;
  long alStack_1f0 [10];
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [80];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_c0;
  char cStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  char cStack_70;
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010564ff68();
  uStack_48 = extraout_x8;
  func_0x00010bccbc98(alStack_1f0,param_4,extraout_x9);
  lVar5 = *(long *)(alStack_1f0[0] + 8);
  lStack_198 = *(long *)(alStack_1f0[0] + 0x10);
  lStack_1a0 = lVar5;
  if (lStack_198 != 0) {
    do {
      func_0x00010564fff8();
      lVar5 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  plVar1 = (long *)(*(long *)(lVar5 + 0x18) + ((long)param_6 >> 1));
  if ((param_6 & 1) != 0) {
    param_5 = *(code **)(*plVar1 + ((ulong)param_5 & 0xffffffff));
  }
  (*param_5)(auStack_190,plVar1,param_7);
  FUN_10564e2d4(&uStack_f8,auStack_190);
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (cStack_b8 == '\x01') {
    func_0x000105650048(&uStack_140);
    if (CONCAT71(uStack_f7,uStack_f8) == 0) goto LAB_10564e0cc;
    puVar4 = (ulong *)&uStack_f8;
    FUN_10564e344();
    uStack_228 = puVar4[1];
    uStack_230 = *puVar4;
    uStack_220 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uStack_210 = puVar4[4];
    uStack_218 = puVar4[3];
    uStack_200 = puVar4[6];
    uStack_208 = puVar4[5];
    cStack_1f8 = '\x01';
  }
  else {
    func_0x000105650048(&uStack_140);
LAB_10564e0cc:
    cStack_1f8 = '\0';
    uStack_230 = uStack_230 & 0xffffffffffffff00;
  }
  func_0x00010564ffa4(&uStack_f8);
  FUN_10564e42c(auStack_190);
  FUN_10564e49c(&lStack_1a0);
  func_0x00010bccbe4c(alStack_1f0);
  func_0x00010bccbdb4(alStack_1f0);
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  cStack_70 = cStack_1f8 == '\x01';
  if ((bool)cStack_70) {
    uStack_a0 = uStack_228;
    uStack_a8 = uStack_230;
    uStack_98 = uStack_220;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_88 = uStack_210;
    uStack_90 = uStack_218;
    uStack_78 = uStack_200;
    uStack_80 = uStack_208;
  }
  iStack_50 = 0;
  func_0x00010564a568(&uStack_230);
  uStack_f8 = 0;
  uStack_c0 = 0;
  if (iStack_50 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    uVar3 = cStack_70 == '\x01';
    if ((bool)uVar3) {
      param_1[1] = uStack_a0;
      *param_1 = uStack_a8;
      param_1[2] = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      param_1[4] = uStack_88;
      param_1[3] = uStack_90;
      param_1[6] = uStack_78;
      param_1[5] = uStack_80;
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  else {
    uVar3 = iStack_50 == 1;
    if (!(bool)uVar3) goto LAB_10564e1ec;
    FUN_10564e4c4(param_1,&uStack_f8);
  }
  func_0x00010564a568(&uStack_f8);
  func_0x0001056500f8();
  func_0x00010564ff14(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10564e1ec:
  FUN_10563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10564e1f4);
  (*pcVar2)();
}



/* Entry: 10564e2a8; end: 10564e2d3;  */

undefined ** FUN_10564e2a8(code *param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_1108a4020;
  if (((param_2 & 1) != 0 || param_1 != (code *)0x0) && param_2 != 0 || param_1 != FUN_105653330) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10564e2d4; end: 10564e343;  */

void FUN_10564e2d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 0x48) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = uVar1;
    param_1[3] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    param_1[5] = *(undefined8 *)(param_2 + 0x30);
    param_1[4] = uVar1;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_10564e3dc(param_2 + 0x10);
  }
  *param_1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 10564e344; end: 10564e3db;  */

long * FUN_10564e344(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x0001004c3cd0(auStack_38,&UNK_10f2e0451,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10564e3dc; end: 10564e3ff;  */

void FUN_10564e3dc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10564e400; end: 10564e42b;  */

void FUN_10564e400(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000105650118();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 10564e42c; end: 10564e49b;  */

undefined8 * FUN_10564e42c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_10564e3dc(param_1 + 2);
  }
  func_0x00010564a568((ulong)&uStack_70 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  func_0x00010564a568(param_1 + 2);
  return param_1;
}



/* Entry: 10564e49c; end: 10564e4c3;  */

long FUN_10564e49c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10564e4c4; end: 10564e50f;  */

undefined1 * FUN_10564e4c4(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10564e510(param_1);
    param_1[0x38] = 1;
  }
  return param_1;
}



/* Entry: 10564e510; end: 10564e53b;  */

void FUN_10564e510(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10564e53c; end: 10564e573;  */

void FUN_10564e53c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010564ff8c();
  if (!(bool)in_ZR) {
    func_0x00010564ff44((&PTR_FUN_1108a3a18)[extraout_x8]);
  }
  func_0x000105650034();
  return;
}



/* Entry: 10564e574; end: 10564e57f;  */

void FUN_10564e574(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10564e580; end: 10564e61b;  */

void FUN_10564e580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_b0 = &uStack_40;
  puStack_a8 = &uStack_30;
  uStack_b8 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10564e648(auStack_a0,&uStack_b8);
  FUN_10564e6a4(auStack_a0,0x10564d96c);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x00010564e6d4(param_1);
  func_0x00010564a4b8(&uStack_d0);
  FUN_10564ef8c(auStack_a0);
  return;
}



/* Entry: 10564e61c; end: 10564e647;  */

undefined ** FUN_10564e61c(code *param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_1108a4050;
  if (((param_2 & 1) != 0 || param_1 != (code *)0x0) && param_2 != 0 || param_1 != FUN_10565339c) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10564e648; end: 10564e6a3;  */

void FUN_10564e648(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10564e724(auStack_38);
  FUN_10564edb8(param_1,auStack_38);
  func_0x00010564a4b8(auStack_38);
  return;
}



/* Entry: 10564e6a4; end: 10564e723;  */

void FUN_10564e6a4(undefined8 param_1,code *param_2)

{
  undefined1 in_ZR;
  
  func_0x00010565008c();
  if ((bool)in_ZR) {
    func_0x00010564ee14();
    (*param_2)();
  }
  return;
}



/* Entry: 10564e724; end: 10564e773;  */

void FUN_10564e724(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  func_0x00010564e754(*param_1,&uStack_18,*(undefined8 *)param_1[2],((undefined8 *)param_1[2])[1]);
  return;
}



/* Entry: 10564e774; end: 10564eb07;  */

void FUN_10564e774(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *extraout_x8;
  long extraout_x9;
  code *pcVar7;
  ulong uVar8;
  int extraout_w12;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_310 [10];
  long lStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [80];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [72];
  long alStack_138 [8];
  byte bStack_f8;
  long alStack_f0 [8];
  byte bStack_b0;
  long *plStack_a8;
  undefined1 uStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  long *aplStack_70 [2];
  
  func_0x00010bccbc98(alStack_310,param_2);
  param_3 = (undefined8 *)*param_3;
  lVar12 = *(long *)(alStack_310[0] + 8);
  lStack_2b8 = *(long *)(alStack_310[0] + 0x10);
  lStack_2c0 = lVar12;
  if (lStack_2b8 != 0) {
    do {
      func_0x00010565007c();
      param_3 = extraout_x8;
      lVar12 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  pcVar7 = *(code **)*param_3;
  uVar1 = ((ulong *)*param_3)[1];
  if ((uVar1 & 1) != 0) {
    pcVar7 = *(code **)(*(long *)(*(long *)(lVar12 + 0x18) + ((long)uVar1 >> 1)) +
                       ((ulong)pcVar7 & 0xffffffff));
  }
  (*pcVar7)(auStack_2b0);
  FUN_10564e2d4(auStack_1c8,auStack_2b0);
  FUN_10564eb08(auStack_180,auStack_1c8);
  uStack_220 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  FUN_10564eb08(auStack_210,&uStack_260);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010564ed8c(alStack_f0,auStack_180);
  puVar6 = auStack_210;
  func_0x00010564ed8c(alStack_138);
  uStack_a0 = 0;
  plStack_a8 = param_1;
  while ((((bStack_b0 & 1) != 0 || ((bStack_f8 & 1) != 0)) && (alStack_f0[0] != alStack_138[0]))) {
    plVar4 = alStack_f0;
    FUN_10564e344();
    plVar9 = (long *)param_1[1];
    if (plVar9 < (long *)param_1[2]) {
      lVar13 = plVar4[1];
      lVar12 = *plVar4;
      plVar9[2] = plVar4[2];
      plVar9[1] = lVar13;
      *plVar9 = lVar12;
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      lVar13 = plVar4[4];
      lVar12 = plVar4[3];
      lVar14 = plVar4[5];
      plVar9[6] = plVar4[6];
      plVar9[5] = lVar14;
      plVar9[4] = lVar13;
      plVar9[3] = lVar12;
      plVar9 = plVar9 + 7;
    }
    else {
      lVar12 = (long)plVar9 - *param_1;
      uVar1 = lVar12 / 0x38 + 1;
      if (0x492492492492492 < uVar1) {
        func_0x00010564eb90();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10564ea90);
        (*pcVar7)();
      }
      uVar3 = (param_1[2] - *param_1) / 0x38;
      uVar8 = uVar3 * 2;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        uVar8 = uVar1;
      }
      if (0x249249249249248 < uVar3) {
        uVar8 = 0x492492492492492;
      }
      if (uVar8 == 0) {
        uVar8 = 0;
        puVar10 = (undefined1 *)0x0;
      }
      else {
        FUN_10564eba4();
        puVar10 = puVar6;
      }
      plVar9 = (long *)(uVar8 + lVar12);
      lVar13 = plVar4[1];
      lVar12 = *plVar4;
      plVar9[2] = plVar4[2];
      plVar9[1] = lVar13;
      *plVar9 = lVar12;
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      lVar13 = plVar4[6];
      lVar12 = plVar4[5];
      lVar14 = plVar4[3];
      plVar9[4] = plVar4[4];
      plVar9[3] = lVar14;
      plVar9[6] = lVar13;
      plVar9[5] = lVar12;
      plVar5 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar11 = plVar9 + (((long)plVar2 - (long)plVar5) / -0x38) * 7;
      ppuStack_90 = &plStack_78;
      ppuStack_88 = aplStack_70;
      aplStack_70[0] = plVar11;
      for (plVar4 = plVar5; plVar4 != plVar2; plVar4 = plVar4 + 7) {
        lVar13 = plVar4[1];
        lVar12 = *plVar4;
        aplStack_70[0][2] = plVar4[2];
        aplStack_70[0][1] = lVar13;
        *aplStack_70[0] = lVar12;
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        lVar13 = plVar4[4];
        lVar12 = plVar4[3];
        lVar14 = plVar4[5];
        aplStack_70[0][6] = plVar4[6];
        aplStack_70[0][5] = lVar14;
        aplStack_70[0][4] = lVar13;
        aplStack_70[0][3] = lVar12;
        aplStack_70[0] = aplStack_70[0] + 7;
      }
      uStack_80 = 1;
      plStack_98 = param_1 + 2;
      plStack_78 = plVar11;
      for (; plVar5 != plVar2; plVar5 = plVar5 + 7) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      plVar9 = plVar9 + 7;
      func_0x00010564ebe0(&plStack_98);
      lVar12 = *param_1;
      *param_1 = (long)plVar11;
      param_1[1] = (long)plVar9;
      param_1[2] = uVar8 + (long)puVar10 * 0x38;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    param_1[1] = (long)plVar9;
    FUN_10564ec24(alStack_f0);
  }
  uStack_a0 = 1;
  func_0x00010564ed60(&plStack_a8);
  func_0x00010564ffa4(alStack_138);
  func_0x00010564ffa4(alStack_f0);
  func_0x00010564ffa4(auStack_210);
  func_0x000105650048(&uStack_260);
  func_0x00010564ffa4(auStack_180);
  func_0x00010564ffa4(auStack_1c8);
  FUN_10564e42c(auStack_2b0);
  func_0x00010564fff0();
  func_0x0001056500e4();
  func_0x00010564ffe0();
  return;
}



/* Entry: 10564eb08; end: 10564eba3;  */

void FUN_10564eb08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = param_2[2];
    uVar2 = param_2[1];
    uVar1 = param_2[3];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    *param_1 = *param_2;
    param_1[2] = uVar3;
    param_1[1] = uVar2;
    param_1[3] = uVar1;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  func_0x00010564ffa4();
  return;
}



/* Entry: 10564eba4; end: 10564ec23;  */

undefined1  [16] FUN_10564eba4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000105650104();
  if (param_1 < extraout_x8) {
    lVar1 = param_1 * 0x38;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10564ec24; end: 10564ec97;  */

void FUN_10564ec24(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [56];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x00010054c3a4(), (int)lVar2 != 0)) {
    FUN_10564ecfc(auStack_58,*param_1);
    FUN_10564ec98(param_1 + 1,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[8] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 7) = 0;
  }
  return;
}



/* Entry: 10564ec98; end: 10564ecfb;  */

undefined8 * FUN_10564ec98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 7) == '\x01') {
    FUN_10564e400(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}



/* Entry: 10564ecfc; end: 10564ed5f;  */

void FUN_10564ecfc(long param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x00010054c7ec();
  func_0x000105650050();
  uVar1 = unaff_x20;
  func_0x00010054c8f4();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000105650140();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = unaff_x20;
  func_0x00010054c8f4();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x00010054c8f4();
  *(undefined8 *)(param_1 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10564ed60; end: 10564edb7;  */

long FUN_10564ed60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010564a4dc(param_1);
  }
  return param_1;
}



/* Entry: 10564edb8; end: 10564edcf;  */

void FUN_10564edb8(void)

{
  FUN_10564edd0();
  return;
}



/* Entry: 10564edd0; end: 10564edf7;  */

void FUN_10564edd0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10564edf8; end: 10564ee47;  */

void FUN_10564edf8(long param_1)

{
  FUN_10563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10564ee48; end: 10564ee83;  */

undefined8 * FUN_10564ee48(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10564ee84(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x38);
  return param_1;
}



/* Entry: 10564ee84; end: 10564ef8b;  */

void FUN_10564ee84(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  ulong extraout_x8;
  ulong *puStack_80;
  undefined1 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_78 = 0;
  puStack_80 = param_1;
  if (param_4 != 0) {
    func_0x000105650104();
    if (extraout_x8 <= param_4) {
      func_0x00010564eb90();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10564ef68);
      (*pcVar1)();
    }
    lVar2 = param_2;
    FUN_10564eba4();
    *param_1 = param_4;
    param_1[1] = param_4;
    puStack_70 = param_1 + 2;
    *puStack_70 = param_4 + lVar2 * 0x38;
    puStack_68 = &uStack_50;
    puStack_60 = &uStack_48;
    uStack_58 = 0;
    uStack_50 = param_4;
    for (; uStack_48 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
      FUN_10564e510(param_4,param_2);
      param_4 = uStack_48 + 0x38;
    }
    uStack_58 = 1;
    func_0x00010564ebe0(&puStack_70);
    param_1[1] = param_4;
  }
  uStack_78 = 1;
  FUN_10564ed60(&puStack_80);
  return;
}



/* Entry: 10564ef8c; end: 10564efc3;  */

void FUN_10564ef8c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010564ff8c();
  if (!(bool)in_ZR) {
    func_0x00010564ff44((&PTR_FUN_1108a3a28)[extraout_x8]);
  }
  func_0x000105650034();
  return;
}



/* Entry: 10564efc4; end: 10564efcf;  */

void FUN_10564efc4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010564c60c(param_2);
  func_0x00010564a4dc();
  return;
}



/* Entry: 10564efd0; end: 10564f157;  */

undefined1  [16] FUN_10564efd0(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong *puVar7;
  code *in_x3;
  ulong in_x4;
  ulong *in_x5;
  undefined8 *in_x6;
  ulong extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined8 extraout_x9;
  int extraout_w11;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  long lStack_130;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [8];
  ulong auStack_a8 [11];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010565009c();
  uStack_48 = extraout_x9;
  func_0x000105650024();
  uVar8 = *(ulong *)(lStack_130 + 8);
  uStack_d8 = *(ulong *)(lStack_130 + 0x10);
  uStack_e0 = uVar8;
  if (uStack_d8 != 0) {
    do {
      func_0x00010564fff8();
      uVar8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar4 = (ulong *)(*(long *)(uVar8 + 0x18) + ((long)in_x4 >> 1));
  if ((in_x4 & 1) != 0) {
    in_x3 = *(code **)(*puVar4 + ((ulong)in_x3 & 0xffffffff));
  }
  puVar5 = in_x5;
  (*in_x3)(auStack_d0,puVar4,in_x5,*in_x6);
  func_0x000105650060();
  func_0x00010054cac4();
  func_0x00010564fff0();
  func_0x0001056500e4();
  uVar1 = (uint)in_x3 & (uint)(in_x6 != (undefined8 *)0x0);
  uVar3 = uVar1 == 0;
  puVar10 = (undefined1 *)(ulong)uVar1;
  if ((bool)uVar3) {
    in_x5 = (ulong *)0x0;
  }
  func_0x00010564ffe0();
  func_0x0001056500c0();
LAB_10564f06c:
  puVar9 = auStack_a8;
  puVar7 = puVar5;
  do {
    func_0x0001056501a8(puVar9);
    FUN_10564f184();
    func_0x00010564ff14(uStack_48);
    if ((bool)uVar3) {
      auVar11._8_8_ = in_x5;
      auVar11._0_8_ = puVar10;
      return auVar11;
    }
    ___stack_chk_fail();
    iVar6 = (int)puVar7;
    puVar5 = puVar4;
    in_x5 = puVar4;
    if (iVar6 == 0) {
      do {
        func_0x00010564ff84();
        iVar6 = (int)puVar7;
      } while (iVar6 == 0);
      puVar5 = puVar4;
      func_0x00010564fff0();
      in_x5 = puVar4;
    }
    func_0x00010564ffe0();
    uVar3 = iVar6 == 2;
    if (!(bool)uVar3) {
      func_0x000104bd46a0(in_x5);
LAB_10564f13c:
      FUN_10563ab98();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10564f144);
      (*pcVar2)();
    }
    func_0x000105650008();
    puVar10 = auStack_b0;
    puVar4 = auStack_a8;
    FUN_10563ab1c();
    iStack_50 = 1;
    ___cxa_end_catch();
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    if (iStack_50 == 0) goto LAB_10564f06c;
    if (iStack_50 != 1) goto LAB_10564f13c;
    puVar9 = &uStack_e0;
    uVar3 = 1;
    puVar7 = puVar5;
  } while( true );
}



/* Entry: 10564f158; end: 10564f183;  */

undefined ** FUN_10564f158(code *param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_1108a4080;
  if (((param_2 & 1) != 0 || param_1 != (code *)0x0) && param_2 != 0 || param_1 != FUN_105653454) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10564f184; end: 10564f1bb;  */

void FUN_10564f184(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010564ff8c();
  if (!(bool)in_ZR) {
    func_0x00010564ff44((&PTR_FUN_1108a3a38)[extraout_x8]);
  }
  func_0x000105650034();
  return;
}



/* Entry: 10564f1bc; end: 10564f1c3;  */

void FUN_10564f1bc(void)

{
  return;
}



/* Entry: 10564f1c4; end: 10564f33b;  */

undefined1  [16] FUN_10564f1c4(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  code *in_x3;
  ulong in_x4;
  long *in_x5;
  ulong extraout_x8;
  ulong uVar7;
  ulong *puVar8;
  undefined8 extraout_x9;
  int extraout_w11;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  long lStack_120;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [88];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x00010565009c();
  uStack_38 = extraout_x9;
  func_0x000105650024();
  uVar7 = *(ulong *)(lStack_120 + 8);
  uStack_c8 = *(ulong *)(lStack_120 + 0x10);
  uStack_d0 = uVar7;
  if (uStack_c8 != 0) {
    do {
      func_0x00010564fff8();
      uVar7 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  pcVar2 = (code *)(*(long *)(uVar7 + 0x18) + ((long)in_x4 >> 1));
  if ((in_x4 & 1) != 0) {
    in_x3 = *(code **)(*(long *)pcVar2 + ((ulong)in_x3 & 0xffffffff));
  }
  pcVar5 = (code *)*in_x5;
  (*in_x3)(auStack_c0);
  func_0x000105650060();
  func_0x00010054cac4();
  func_0x00010564fff0();
  func_0x0001056500e4();
  uVar1 = (uint)in_x5 & (uint)(in_x4 != 0);
  uVar3 = uVar1 == 0;
  puVar9 = (undefined1 *)(ulong)uVar1;
  if ((bool)uVar3) {
    in_x3 = (code *)0x0;
  }
  func_0x00010564ffe0();
  func_0x0001056500c0();
LAB_10564f254:
  puVar8 = (ulong *)auStack_98;
  pcVar6 = pcVar5;
  do {
    func_0x0001056501a8(puVar8);
    FUN_10564f368();
    func_0x00010564ff14(uStack_38);
    if ((bool)uVar3) {
      auVar10._8_8_ = in_x3;
      auVar10._0_8_ = puVar9;
      return auVar10;
    }
    ___stack_chk_fail();
    iVar4 = (int)pcVar6;
    pcVar5 = pcVar2;
    in_x3 = pcVar2;
    if (iVar4 == 0) {
      do {
        func_0x00010564ff84();
        iVar4 = (int)pcVar6;
      } while (iVar4 == 0);
      pcVar5 = pcVar2;
      func_0x00010564fff0();
      in_x3 = pcVar2;
    }
    func_0x00010564ffe0();
    uVar3 = iVar4 == 2;
    if (!(bool)uVar3) {
      func_0x000104bd46a0(in_x3);
LAB_10564f320:
      FUN_10563ab98();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10564f328);
      (*pcVar2)();
    }
    func_0x000105650008();
    puVar9 = auStack_a0;
    pcVar2 = (code *)auStack_98;
    FUN_10563ab1c();
    iStack_40 = 1;
    ___cxa_end_catch();
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    if (iStack_40 == 0) goto LAB_10564f254;
    if (iStack_40 != 1) goto LAB_10564f320;
    puVar8 = &uStack_d0;
    uVar3 = 1;
    pcVar6 = pcVar5;
  } while( true );
}



/* Entry: 10564f33c; end: 10564f367;  */

undefined ** FUN_10564f33c(code *param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_1108a40b0;
  if (((param_2 & 1) != 0 || param_1 != (code *)0x0) && param_2 != 0 || param_1 != FUN_1056535fc) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10564f368; end: 10564f39f;  */

void FUN_10564f368(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010564ff8c();
  if (!(bool)in_ZR) {
    func_0x00010564ff44((&PTR_FUN_1108a3a48)[extraout_x8]);
  }
  func_0x000105650034();
  return;
}



/* Entry: 10564f3a0; end: 10564f3ab;  */

void FUN_10564f3a0(void)

{
  return;
}



/* Entry: 10564f3ac; end: 10564f43f;  */

undefined8 *
FUN_10564f3ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_78 [56];
  
  FUN_10565286c(auStack_78);
  func_0x00010bccbe58(param_1,param_2,auStack_78,param_3,param_4,param_5);
  func_0x00010054d304(auStack_78);
  *param_1 = &PTR_DAT_1108a3a68;
  return param_1;
}



/* Entry: 10564f440; end: 10564f453;  */

void FUN_10564f440(void)

{
  func_0x00010bccc224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564f454; end: 10564f4a3;  */

void FUN_10564f454(long *param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010bccc390();
  FUN_10564f4a4(auStack_30,*(undefined8 *)*param_1);
  FUN_10564f4c4(*param_1 + 8,auStack_30);
  func_0x00010564ffc8();
  return;
}



/* Entry: 10564f4a4; end: 10564f4c3;  */

void FUN_10564f4a4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10564f500(&uStack_11,param_1);
  return;
}



/* Entry: 10564f4c4; end: 10564f4ff;  */

undefined8 * FUN_10564f4c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001000df524(&uStack_30);
  return param_1;
}



/* Entry: 10564f500; end: 10564f57f;  */

undefined1 * FUN_10564f500(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010564ff68();
  uStack_28 = extraout_x8;
  FUN_10564f580(auStack_40,1);
  FUN_10564f5d4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010564f650();
  func_0x00010564ff14(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010564f650();
  func_0x00010564ff84();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10564f5a8();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10564f580; end: 10564f5a7;  */

long FUN_10564f580(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10564f5a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10564f5a8; end: 10564f5d3;  */

undefined8 * FUN_10564f5a8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong extraout_x8;
  undefined8 *unaff_x30;
  
  func_0x000105650104();
  if (param_2 < extraout_x8) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  unaff_x30[2] = 0;
  *unaff_x30 = &PTR_FUN_1108a3ab0;
  unaff_x30[1] = 0;
  FUN_105652920(unaff_x30 + 3);
  return unaff_x30;
}



/* Entry: 10564f5d4; end: 10564f613;  */

undefined8 * FUN_10564f5d4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a3ab0;
  param_1[1] = 0;
  FUN_105652920(param_1 + 3);
  return param_1;
}



/* Entry: 10564f614; end: 10564f617;  */

void FUN_10564f614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3ab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564f618; end: 10564f62b;  */

void FUN_10564f618(void)

{
  func_0x00010564f63c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564f62c; end: 10564f65f;  */

void FUN_10564f62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010564f634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10564f660; end: 10564f6e7;  */

bool FUN_10564f660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_d8 = &uStack_40;
  uStack_b8 = param_9;
  puStack_a8 = &uStack_30;
  uStack_b0 = param_10;
  uStack_e0 = param_3;
  uStack_d0 = param_6;
  uStack_c8 = param_7;
  uStack_c0 = param_8;
  uStack_40 = param_4;
  uStack_38 = param_5;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10564f6e8(auStack_a0,&uStack_e0);
  puVar2 = auStack_a0;
  FUN_10564f72c(puVar2,0x10564d96c);
  iVar1 = *(int *)(puVar2 + 0x58);
  FUN_10564f8b8(auStack_a0);
  return iVar1 != 1;
}



/* Entry: 10564f6e8; end: 10564f72b;  */

void FUN_10564f6e8(long param_1)

{
  FUN_10564f75c();
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10564f72c; end: 10564f75b;  */

void FUN_10564f72c(undefined8 param_1,code *param_2)

{
  undefined1 in_ZR;
  
  func_0x00010565008c();
  if ((bool)in_ZR) {
    func_0x00010564f89c();
    (*param_2)();
  }
  return;
}



/* Entry: 10564f75c; end: 10564f7ff;  */

void FUN_10564f75c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *pcVar2;
  ulong extraout_x11;
  int extraout_w12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_28;
  
  func_0x00010564ff68();
  uStack_88 = param_1[2];
  uStack_90 = param_1[1];
  uStack_78 = param_1[4];
  uStack_80 = param_1[3];
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  pcStack_58 = FUN_10564f800;
  ppuStack_50 = &PTR_FUN_1108a3af0;
  puStack_48 = (undefined1 *)&uStack_90;
  uStack_28 = extraout_x8;
  func_0x00010bccc554(*param_1,&pcStack_58,*(undefined8 *)param_1[7],((undefined8 *)param_1[7])[1]);
  pppuVar1 = &ppuStack_50;
  (*(code *)*ppuStack_50)();
  func_0x00010564ff14(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010564ff78(&pcStack_58);
    func_0x00010564ff84();
    if (pppuVar1[2] != (undefined **)0x0) {
      do {
        func_0x00010565007c();
      } while (extraout_w12 != 0);
    }
    func_0x000105650194();
    pcVar2 = extraout_x9;
    if ((extraout_x11 & 1) != 0) {
      pcVar2 = *(code **)((long)*pppuVar1 + ((ulong)extraout_x9 & 0xffffffff));
    }
    (*pcVar2)();
    func_0x00010564ffc8();
    return;
  }
  return;
}



/* Entry: 10564f800; end: 10564f86f;  */

void FUN_10564f800(long *param_1)

{
  code *extraout_x9;
  code *pcVar1;
  ulong extraout_x11;
  int extraout_w12;
  
  if (param_1[2] != 0) {
    do {
      func_0x00010565007c();
    } while (extraout_w12 != 0);
  }
  func_0x000105650194();
  pcVar1 = extraout_x9;
  if ((extraout_x11 & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  (*pcVar1)();
  func_0x00010564ffc8();
  return;
}



/* Entry: 10564f870; end: 10564f87f;  */

void FUN_10564f870(void)

{
  return;
}



/* Entry: 10564f880; end: 10564f8b7;  */

void FUN_10564f880(long param_1)

{
  FUN_10563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10564f8b8; end: 10564f8ef;  */

void FUN_10564f8b8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010564ff8c();
  if (!(bool)in_ZR) {
    func_0x00010564ff44((&PTR_FUN_1108a3b08)[extraout_x8]);
  }
  func_0x000105650034();
  return;
}



/* Entry: 10564f8f0; end: 10564f8f7;  */

void FUN_10564f8f0(void)

{
  return;
}



/* Entry: 10564f8f8; end: 10564f97b;  */

void FUN_10564f8f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  int extraout_w11;
  long lVar5;
  long lVar6;
  
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar5 = lVar1;
  if (lVar6 != 0) {
    do {
      func_0x00010564fff8();
      puVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lVar2 = ((long *)*puVar4)[1];
  for (lVar3 = *(long *)*puVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x68) {
    FUN_1056538a4(*(undefined8 *)(lVar1 + 0x18),lVar3,lVar3 + 0x18,*(undefined8 *)(lVar3 + 0x30),
                  lVar3 + 0x38,lVar3 + 0x50,in_x6,in_x7,lVar5,lVar6);
  }
  func_0x00010564ffc8();
  return;
}



/* Entry: 10564f97c; end: 10564f98b;  */

void FUN_10564f97c(void)

{
  return;
}



/* Entry: 10564f98c; end: 10564fbbb;  */

void FUN_10564f98c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lStack_278;
  long lStack_270;
  undefined1 auStack_268 [8];
  long lStack_260;
  undefined1 auStack_258 [112];
  char cStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  plVar8 = *(long **)(param_2 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  lStack_270 = *(long *)(param_1 + 0x10);
  if (lStack_270 != 0) {
    plVar1 = (long *)(lStack_270 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_278 = lVar2;
  FUN_1056533f4(auStack_268,*(undefined8 *)(lVar2 + 0x18),plVar8[1],*(undefined8 *)plVar8[2]);
  lStack_d8 = 0;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  bStack_60 = 0;
  if (cStack_1e8 == '\0') {
    lVar6 = 0;
  }
  else {
    func_0x00010564a7a0(&uStack_d0,auStack_258);
    func_0x00010564a77c(auStack_258);
    lVar6 = lStack_d8;
  }
  lVar5 = lStack_260;
  lStack_d8 = lStack_260;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_260 = lVar6;
  if ((bStack_60 & 1) == 0) {
    func_0x0001056500ec();
  }
  else {
    func_0x0001056500ec();
    if (lVar5 != 0) {
      if ((bStack_60 & 1) == 0) {
        uVar7 = *(undefined8 *)(lStack_d8 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_58,lStack_d8 + 0x58);
        func_0x0001004c3cd0(&uStack_160,&UNK_10f2e0451,auStack_58);
        func_0x00010bcc7444(uVar7,0x65,&uStack_160);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_160);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      }
      uStack_180 = uStack_70;
      uStack_1d0 = uStack_c0;
      uStack_1d8 = uStack_c8;
      uStack_1e0 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      uStack_1c0 = uStack_b0;
      uStack_1c8 = uStack_b8;
      uStack_1b8 = uStack_a8;
      uStack_1b0 = uStack_a0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_1a0 = uStack_90;
      uStack_1a8 = uStack_98;
      uStack_198 = uStack_88;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_188 = uStack_78;
      uStack_190 = uStack_80;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_170 = 1;
      uStack_178 = uStack_68;
      goto LAB_10564fb0c;
    }
  }
  uStack_170 = 0;
  uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
LAB_10564fb0c:
  FUN_10564a800(&uStack_d0);
  FUN_10564a6dc(*plVar8,&uStack_1e0);
  FUN_10564a800(&uStack_1e0);
  FUN_10564fbbc(auStack_268);
  if (*(char *)(*plVar8 + 0x70) == '\x01') {
    FUN_105653850(*(long *)(lVar2 + 0x18) + 0x4f0);
  }
  FUN_10564e49c(&lStack_278);
  return;
}



/* Entry: 10564fbbc; end: 10564fc2b;  */

undefined8 * FUN_10564fbbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
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
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  param_1[1] = 0;
  FUN_10564a6dc(param_1 + 2,(ulong)&uStack_a0 | 8);
  FUN_10564a800((ulong)&uStack_a0 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_10564a800(param_1 + 2);
  return param_1;
}



/* Entry: 10564fc2c; end: 10564fc3b;  */

void FUN_10564fc2c(void)

{
  return;
}



/* Entry: 10564fc3c; end: 10564fcb7;  */

bool FUN_10564fc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_b8 = &uStack_40;
  puStack_a8 = &uStack_30;
  uStack_c0 = param_3;
  uStack_b0 = param_6;
  uStack_40 = param_4;
  uStack_38 = param_5;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10564fcb8(auStack_a0,&uStack_c0);
  puVar2 = auStack_a0;
  FUN_10564fcfc(puVar2,0x10564d96c);
  iVar1 = *(int *)(puVar2 + 0x58);
  FUN_10564fe68(auStack_a0);
  return iVar1 != 1;
}



/* Entry: 10564fcb8; end: 10564fcfb;  */

void FUN_10564fcb8(long param_1)

{
  FUN_10564fd2c();
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10564fcfc; end: 10564fd2b;  */

void FUN_10564fcfc(undefined8 param_1,code *param_2)

{
  undefined1 in_ZR;
  
  func_0x00010565008c();
  if ((bool)in_ZR) {
    func_0x00010564fe4c();
    (*param_2)();
  }
  return;
}



/* Entry: 10564fd2c; end: 10564fd5f;  */

void FUN_10564fd2c(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[2];
  uStack_20 = param_1[1];
  FUN_10564fd60(*param_1,&uStack_20,*(undefined8 *)param_1[3],((undefined8 *)param_1[3])[1]);
  return;
}



/* Entry: 10564fd60; end: 10564fdc3;  */

void FUN_10564fd60(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *pcVar1;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010564ff68();
  func_0x00010bccc554();
  func_0x00010564ffac();
  func_0x00010564ff14(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010564ff50();
    func_0x00010564ff84();
    if (param_1[2] != 0) {
      do {
        func_0x00010565007c();
      } while (extraout_w12 != 0);
    }
    func_0x000105650194();
    pcVar1 = extraout_x9;
    if ((extraout_w11 & 1) != 0) {
      pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
    }
    (*pcVar1)();
    func_0x00010564ffc8();
    return;
  }
  return;
}



/* Entry: 10564fdc4; end: 10564fe1f;  */

void FUN_10564fdc4(long *param_1)

{
  code *extraout_x9;
  code *pcVar1;
  uint extraout_w11;
  int extraout_w12;
  
  if (param_1[2] != 0) {
    do {
      func_0x00010565007c();
    } while (extraout_w12 != 0);
  }
  func_0x000105650194();
  pcVar1 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  (*pcVar1)();
  func_0x00010564ffc8();
  return;
}



/* Entry: 10564fe20; end: 10564fe2f;  */

void FUN_10564fe20(void)

{
  return;
}



/* Entry: 10564fe30; end: 10564fe67;  */

void FUN_10564fe30(long param_1)

{
  FUN_10563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10564fe68; end: 10564fe9f;  */

void FUN_10564fe68(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010564ff8c();
  if (!(bool)in_ZR) {
    func_0x00010564ff44((&PTR_FUN_1108a3b60)[extraout_x8]);
  }
  func_0x000105650034();
  return;
}



/* Entry: 10564fea0; end: 10564fea7;  */

void FUN_10564fea0(void)

{
  return;
}



/* Entry: 10564fea8; end: 10564ff03;  */

void FUN_10564fea8(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x0001006204e0(*(long *)(lVar2 + 0x18) + 0x688);
  func_0x0001006204e0(*(long *)(lVar2 + 0x18) + 0x3e0);
  func_0x00010564ffc8();
  return;
}



/* Entry: 10564ff04; end: 1056501bb;  */

void FUN_10564ff04(void)

{
  return;
}



/* Entry: 1056501bc; end: 1056501ef;  */

void FUN_1056501bc(void)

{
  FUN_1056501f0();
  return;
}



/* Entry: 1056501f0; end: 105650237;  */

void FUN_1056501f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1b0;
  __Znwm();
  FUN_105650238();
  *param_1 = uVar1;
  return;
}



/* Entry: 105650238; end: 1056502a3;  */

void FUN_105650238(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  uStack_38 = 0x1010001;
  uStack_34 = 0;
  uStack_30 = 0x100;
  uStack_2c = 2;
  uStack_20 = 0x100;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0x101;
  uStack_12 = 1;
  uStack_24 = uStack_38;
  FUN_10564f3ac(param_1,param_2,0,0,&uStack_38);
  return;
}



/* Entry: 1056502a4; end: 1056503b7;  */

undefined1 *
FUN_1056502a4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  int unaff_w20;
  undefined1 auStack_128 [88];
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined4 **ppuStack_58;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &uStack_b4;
  puStack_a8 = &uStack_b8;
  puStack_a0 = &uStack_bc;
  puStack_88 = &uStack_c8;
  uStack_78 = param_9;
  uStack_70 = param_10;
  pcStack_68 = FUN_105651544;
  ppuStack_60 = &PTR_FUN_1108a3be8;
  ppuStack_58 = &puStack_b0;
  uStack_c8 = param_7;
  uStack_bc = param_4;
  uStack_b8 = param_3;
  uStack_b4 = param_2;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_80 = param_8;
  func_0x00010bccc554(param_1,&pcStack_68,&UNK_10f2e1dd3,0x11);
  func_0x000105651edc(ppuStack_60);
  uStack_d0 = 0;
  while( true ) {
    puVar1 = auStack_128;
    FUN_1056503b8(puVar1);
    func_0x000105651f00(uStack_38);
    if ((bool)in_ZR) {
      return (undefined1 *)0x1;
    }
    ___stack_chk_fail();
    func_0x000105651fb8();
    if (unaff_w20 == 0) break;
    func_0x000105651edc(ppuStack_60);
    in_ZR = unaff_w20 == 2;
    if (!(bool)in_ZR) goto LAB_1056503b4;
    func_0x000105652104();
    func_0x0001056520d8();
    uStack_d0 = 1;
    ___cxa_end_catch();
    func_0x0001056520b0();
  }
  func_0x000105651f38();
LAB_1056503b4:
  func_0x00010565210c();
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_FUN_1108a3b88)[extraout_x8]);
  }
  func_0x000105652080();
  return puVar1;
}



/* Entry: 1056503b8; end: 1056503ef;  */

void FUN_1056503b8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_FUN_1108a3b88)[extraout_x8]);
  }
  func_0x000105652080();
  return;
}



/* Entry: 1056503f0; end: 1056504ff;  */

undefined1 *
FUN_1056503f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int unaff_w20;
  undefined1 auStack_108 [88];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined1 *puStack_88;
  
  func_0x000105651fb8();
  func_0x000105652070();
  FUN_10564d7c8(auStack_a8,param_4);
  uStack_90 = param_3;
  puStack_88 = auStack_a8;
  func_0x00010bccc554();
  func_0x000105651edc(&PTR_FUN_1108a3c00);
  uStack_b0 = 0;
  while( true ) {
    FUN_105650500(auStack_108);
    puVar1 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000105651f00(extraout_x8);
    if ((bool)in_ZR) {
      return (undefined1 *)0x1;
    }
    ___stack_chk_fail();
    func_0x000105651fb8();
    if (unaff_w20 == 0) break;
    func_0x000105651edc(&PTR_FUN_1108a3c00);
    in_ZR = unaff_w20 == 2;
    if (!(bool)in_ZR) {
      func_0x00010565210c();
      break;
    }
    func_0x000105652104();
    func_0x0001056520d8();
    uStack_b0 = 1;
    ___cxa_end_catch();
    func_0x0001056520b0();
  }
  func_0x000105651f38();
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_DAT_1108a3b98)[extraout_x8_00]);
  }
  func_0x000105652080();
  return puVar1;
}



/* Entry: 105650500; end: 105650537;  */

void FUN_105650500(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_DAT_1108a3b98)[extraout_x8]);
  }
  func_0x000105652080();
  return;
}



/* Entry: 105650538; end: 105650817;  */

void FUN_105650538(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  int extraout_w11;
  undefined1 auStack_410 [152];
  undefined1 uStack_378;
  long alStack_370 [10];
  long lStack_320;
  long lStack_318;
  undefined1 auStack_310 [8];
  ulong uStack_308;
  undefined1 auStack_300 [152];
  char cStack_268;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [160];
  ulong uStack_1b8;
  undefined1 auStack_1b0 [144];
  undefined1 uStack_120;
  byte bStack_118;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [160];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x000105652070(param_2,param_2);
  uStack_48 = extraout_x8;
  func_0x00010bccbc98(alStack_370);
  lVar4 = *(long *)(alStack_370[0] + 8);
  lStack_318 = *(long *)(alStack_370[0] + 0x10);
  lStack_320 = lVar4;
  if (lStack_318 != 0) {
    do {
      func_0x000105652090();
      lVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_1056542f4(auStack_310,*(undefined8 *)(lVar4 + 0x10),param_3);
  uStack_1b8 = 0;
  auStack_1b0[0] = 0;
  bStack_118 = 0;
  if (cStack_268 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_105651680(auStack_1b0,auStack_300);
    func_0x00010565169c(auStack_300);
    uVar5 = uStack_1b8;
  }
  bVar2 = bStack_118;
  uVar1 = uStack_308;
  uStack_1b8 = uStack_308;
  uStack_308 = uVar5;
  _bzero(auStack_260,0xa8);
  if ((bVar2 & 1) == 0) {
    FUN_10564a63c(auStack_258);
LAB_105650674:
    uStack_378 = 0;
    auStack_410[0] = 0;
  }
  else {
    FUN_10564a63c(auStack_258);
    if (uVar1 == 0) goto LAB_105650674;
    if ((bStack_118 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_110,uStack_1b8 + 0x58);
      func_0x0001004c3cd0(auStack_260,&UNK_10f2e1e06,auStack_110);
      func_0x000105652114();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    }
    FUN_1056516f8(auStack_410,auStack_1b0);
    uStack_378 = 1;
  }
  FUN_10564a63c(auStack_1b0);
  FUN_10565171c(auStack_310);
  FUN_10564e49c(&lStack_320);
  func_0x00010bccbe4c(alStack_370);
  func_0x00010bccbdb4(alStack_370);
  FUN_105651780(auStack_f0,auStack_410);
  iStack_50 = 0;
  FUN_10564a63c(auStack_410);
  uStack_1b8 = uStack_1b8 & 0xffffffffffffff00;
  uStack_120 = 0;
  if (iStack_50 == 0) {
    FUN_105651780(param_1,auStack_f0);
  }
  else {
    if (iStack_50 != 1) goto LAB_105650720;
    *param_1 = 0;
    param_1[0x98] = 0;
    in_ZR = 1;
  }
  FUN_10564a63c(&uStack_1b8);
  func_0x000105652134();
  func_0x000105651f00(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_105650720:
  FUN_10563ab98();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x105650728);
  (*pcVar3)();
}



/* Entry: 105650818; end: 105650f1f;  */

void FUN_105650818(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  long extraout_x8;
  ulong uVar7;
  int extraout_w11;
  long *plVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuStack_620;
  undefined8 ***pppuStack_618;
  undefined8 ***pppuStack_610;
  undefined8 **ppuStack_608;
  undefined8 **ppuStack_600;
  undefined8 **ppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  uint uStack_5c8;
  undefined1 uStack_5c4;
  undefined8 **ppuStack_5c0;
  undefined8 **ppuStack_5b8;
  undefined8 **ppuStack_5b0;
  undefined8 ***pppuStack_5a0;
  undefined8 ***pppuStack_598;
  undefined8 ***pppuStack_590;
  undefined8 ***pppuStack_580;
  undefined8 ***pppuStack_578;
  undefined8 ***apppuStack_570 [2];
  long alStack_560 [10];
  long lStack_510;
  long lStack_508;
  undefined1 auStack_500 [8];
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [136];
  char cStack_468;
  undefined1 auStack_460 [152];
  undefined8 **appuStack_3c8 [19];
  undefined8 uStack_330;
  undefined1 auStack_328 [136];
  undefined1 uStack_2a0;
  undefined1 auStack_298 [152];
  long alStack_200 [18];
  byte bStack_170;
  long lStack_168;
  undefined8 **appuStack_160 [17];
  byte bStack_d8;
  undefined8 ***pppuStack_d0;
  undefined1 uStack_c8;
  undefined8 ***apppuStack_c0 [3];
  undefined8 ***apppuStack_a8 [3];
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined1 uStack_78;
  
  func_0x00010bccbc98(alStack_560,param_2,&UNK_10f2e1e31,0x19);
  lVar11 = *(long *)(alStack_560[0] + 8);
  lStack_508 = *(long *)(alStack_560[0] + 0x10);
  lStack_510 = lVar11;
  if (lStack_508 != 0) {
    do {
      func_0x000105652090();
      lVar11 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_105654320(auStack_500,*(undefined8 *)(lVar11 + 0x10),param_3,param_4);
  uStack_330 = 0;
  auStack_328[0] = 0;
  uStack_2a0 = 0;
  if (cStack_468 == '\0') {
    uVar9 = 0;
  }
  else {
    FUN_105651834(auStack_328,auStack_4f0);
    FUN_10565186c(auStack_4f0);
    uVar9 = uStack_330;
  }
  uStack_330 = uStack_4f8;
  uStack_4f8 = uVar9;
  FUN_1056517bc(auStack_298,&uStack_330);
  _bzero(auStack_460,0x98);
  FUN_1056517bc(appuStack_3c8,auStack_460);
  pppuStack_578 = (undefined8 ****)0x0;
  apppuStack_570[0] = (undefined8 ****)0x0;
  pppuStack_580 = (undefined8 ****)0x0;
  FUN_105651afc(&lStack_168,auStack_298);
  ppppuVar6 = (undefined8 ****)appuStack_3c8;
  FUN_105651afc(alStack_200);
  pppuStack_d0 = &pppuStack_580;
  uStack_c8 = 0;
  while ((((bStack_d8 & 1) != 0 || ((bStack_170 & 1) != 0)) && (lStack_168 != alStack_200[0]))) {
    if ((bStack_d8 & 1) == 0) {
      uVar9 = *(undefined8 *)(lStack_168 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppuStack_c0,lStack_168 + 0x58);
      func_0x0001004c3cd0(apppuStack_a8,&UNK_10f2e1e06,apppuStack_c0);
      ppppuVar6 = (undefined8 ****)0x65;
      func_0x00010bcc7444(uVar9,0x65,apppuStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_c0);
    }
    if (pppuStack_578 < apppuStack_570[0]) {
      ppppuVar6 = (undefined8 ****)appuStack_160;
      FUN_105651850();
      ppppuVar12 = (undefined8 ****)(pppuStack_578 + 0x11);
    }
    else {
      lVar11 = (long)pppuStack_578 - (long)pppuStack_580;
      uVar5 = lVar11 / 0x88 + 1;
      if (0x1e1e1e1e1e1e1e1 < uVar5) {
        FUN_1056518c0();
        goto LAB_105650de8;
      }
      uVar2 = ((long)apppuStack_570[0] - (long)pppuStack_580) / 0x88;
      uVar7 = uVar2 * 2;
      if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
        uVar7 = uVar5;
      }
      if (0xf0f0f0f0f0f0ef < uVar2) {
        uVar7 = 0x1e1e1e1e1e1e1e1;
      }
      if (uVar7 == 0) {
        uVar7 = 0;
        ppppuVar10 = (undefined8 ****)0x0;
      }
      else {
        FUN_1056518cc();
        ppppuVar10 = ppppuVar6;
      }
      lVar11 = uVar7 + lVar11;
      ppppuVar6 = (undefined8 ****)appuStack_160;
      FUN_105651850(lVar11);
      pppuVar3 = pppuStack_578;
      ppppuVar13 = (undefined8 ****)pppuStack_580;
      ppppuVar14 = (undefined8 ****)
                   (lVar11 + (((long)pppuStack_578 - (long)pppuStack_580) / -0x88) * 0x88);
      pppuStack_88 = apppuStack_c0;
      pppuStack_80 = apppuStack_a8;
      apppuStack_a8[0] = ppppuVar14;
      apppuStack_c0[0] = ppppuVar14;
      pppuStack_90 = apppuStack_570;
      for (ppppuVar12 = (undefined8 ****)pppuStack_580; ppppuVar12 != (undefined8 ****)pppuVar3;
          ppppuVar12 = ppppuVar12 + 0x11) {
        ppppuVar6 = ppppuVar12;
        FUN_105651850(apppuStack_a8[0]);
        apppuStack_a8[0] = apppuStack_a8[0] + 0x11;
      }
      uStack_78 = 1;
      for (; ppppuVar13 != (undefined8 ****)pppuVar3; ppppuVar13 = ppppuVar13 + 0x11) {
        FUN_1056512b8(ppppuVar13);
      }
      ppppuVar12 = (undefined8 ****)(lVar11 + 0x88);
      ppppuVar10 = (undefined8 ****)(uVar7 + (long)ppppuVar10 * 0x88);
      func_0x00010565190c(&pppuStack_90);
      bVar1 = (undefined8 ****)pppuStack_580 != (undefined8 ****)0x0;
      pppuStack_580 = ppppuVar14;
      apppuStack_570[0] = ppppuVar10;
      if (bVar1) {
        pppuStack_578 = ppppuVar12;
        __ZdlPv();
      }
    }
    pppuStack_578 = ppppuVar12;
    FUN_105651950(&lStack_168);
  }
  uStack_c8 = 1;
  FUN_105651ad0(&pppuStack_d0);
  func_0x000105651f40(alStack_200);
  FUN_105651bd0(appuStack_160);
  func_0x000105651f40(appuStack_3c8);
  func_0x000105651f40(auStack_460);
  func_0x000105651f40(auStack_298);
  func_0x000105651f40(&uStack_330);
  FUN_105651bf0(auStack_500);
  FUN_10564e49c(&lStack_510);
  func_0x00010bccbe4c(alStack_560);
  func_0x00010bccbdb4(alStack_560);
  pppuStack_618 = pppuStack_578;
  pppuStack_620 = pppuStack_580;
  pppuStack_610 = apppuStack_570[0];
  pppuStack_580 = (undefined8 ****)0x0;
  pppuStack_578 = (undefined8 ****)0x0;
  apppuStack_570[0] = (undefined8 ****)0x0;
  uStack_5c8 = 0;
  FUN_105651230(&pppuStack_580);
  pppuStack_90 = (undefined8 ****)0x0;
  pppuStack_88 = (undefined8 ****)0x0;
  pppuStack_80 = (undefined8 ****)0x0;
  if (uStack_5c8 == 0) {
    pppuStack_598 = pppuStack_618;
    pppuStack_5a0 = pppuStack_620;
    pppuStack_590 = pppuStack_610;
    pppuStack_618 = (undefined8 ****)0x0;
    pppuStack_610 = (undefined8 ****)0x0;
    pppuStack_620 = (undefined8 ****)0x0;
  }
  else {
    if (uStack_5c8 != 1) {
      FUN_10563ab98();
      goto LAB_105650de8;
    }
    pppuStack_5a0 = (undefined8 ****)0x0;
    pppuStack_598 = (undefined8 ****)0x0;
    pppuStack_590 = (undefined8 ****)0x0;
    pppuStack_580 = &pppuStack_5a0;
    pppuStack_578 = (undefined8 ***)CONCAT71(pppuStack_578._1_7_,1);
    FUN_105651ad0(&pppuStack_580);
  }
  FUN_105651230(&pppuStack_90);
  FUN_1056512e8(&pppuStack_620);
  *param_1 = 0;
  param_1[1] = 0;
  plVar8 = param_1 + 2;
  *plVar8 = 0;
  if ((long)pppuStack_598 - (long)pppuStack_5a0 != 0) {
    uVar5 = ((long)pppuStack_598 - (long)pppuStack_5a0) / 0x88;
    if (0x222222222222222 < uVar5) {
      FUN_105651330();
LAB_105650de8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x105650dec);
      (*pcVar4)();
    }
    FUN_1056513e8(&pppuStack_620,uVar5,0,plVar8);
    FUN_10565133c(param_1,&pppuStack_620);
    func_0x0001056514b0(&pppuStack_620);
  }
  pppuVar3 = pppuStack_598;
  ppppuVar6 = (undefined8 ****)(pppuStack_5a0 + 9);
  do {
    if (ppppuVar6 + -9 == (undefined8 ****)pppuVar3) {
      FUN_105651230(&pppuStack_5a0);
      return;
    }
    pppuStack_620 = ppppuVar6[-9];
    pppuStack_618 = (undefined8 ***)CONCAT44(pppuStack_618._4_4_,*(undefined4 *)(ppppuVar6 + -8));
    ppuStack_608 = ppppuVar6[-6];
    pppuStack_610 = ppppuVar6[-7];
    ppuStack_600 = ppppuVar6[-5];
    ppppuVar6[-6] = (undefined8 ***)0x0;
    ppppuVar6[-5] = (undefined8 ***)0x0;
    ppppuVar6[-7] = (undefined8 ***)0x0;
    ppuStack_5f8 = ppppuVar6[-1];
    if (*(char *)((long)ppppuVar6 + 0x17) < '\0') {
      if (ppppuVar6[1] == (undefined8 ***)0x0) goto LAB_105650c94;
LAB_105650c7c:
      FUN_10564d5cc(&uStack_5f0,ppppuVar6);
    }
    else {
      if (*(char *)((long)ppppuVar6 + 0x17) != '\0') goto LAB_105650c7c;
LAB_105650c94:
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5d0 = 0x3f800000;
    }
    if (*(char *)(ppppuVar6 + 4) != '\x01') {
      uStack_5c8 = uStack_5c8 & 0xffffff00;
    }
    else {
      uStack_5c8 = (uint)ppppuVar6[3];
    }
    uStack_5c4 = *(char *)(ppppuVar6 + 4) == '\x01';
    ppuStack_5b8 = ppppuVar6[6];
    ppuStack_5c0 = ppppuVar6[5];
    ppuStack_5b0 = ppppuVar6[7];
    ppppuVar6[6] = (undefined8 ***)0x0;
    ppppuVar6[7] = (undefined8 ***)0x0;
    ppppuVar6[5] = (undefined8 ***)0x0;
    uVar5 = param_1[1];
    if (uVar5 < (ulong)param_1[2]) {
      func_0x00010565145c(uVar5,&pppuStack_620);
      lVar11 = uVar5 + 0x78;
    }
    else {
      lVar11 = (long)(uVar5 - *param_1) / 0x78;
      uVar5 = lVar11 + 1;
      if (0x222222222222222 < uVar5) {
        FUN_105651330();
        goto LAB_105650de8;
      }
      uVar2 = (param_1[2] - *param_1) / 0x78;
      uVar7 = uVar2 * 2;
      if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
        uVar7 = uVar5;
      }
      if (0x111111111111110 < uVar2) {
        uVar7 = 0x222222222222222;
      }
      FUN_1056513e8(&pppuStack_90,uVar7,lVar11,plVar8);
      func_0x00010565145c(pppuStack_80,&pppuStack_620);
      pppuStack_80 = pppuStack_80 + 0xf;
      FUN_10565133c(param_1,&pppuStack_90);
      lVar11 = param_1[1];
      func_0x0001056514b0(&pppuStack_90);
    }
    param_1[1] = lVar11;
    func_0x00010564a488(&pppuStack_620);
    ppppuVar6 = ppppuVar6 + 0x11;
  } while( true );
}



/* Entry: 105650f20; end: 10565107f;  */

undefined8 FUN_105650f20(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w11;
  undefined8 uVar4;
  undefined1 *apuStack_110 [11];
  undefined4 uStack_b8;
  long alStack_b0 [10];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  ppuVar2 = apuStack_110;
  func_0x00010bccbc98(alStack_b0,param_1,&UNK_10f2e1e4b,0x20);
  lVar3 = *(long *)(alStack_b0[0] + 8);
  lStack_58 = *(long *)(alStack_b0[0] + 0x10);
  lStack_60 = lVar3;
  if (lStack_58 != 0) {
    do {
      func_0x000105652090();
      lVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_105654380(auStack_50,*(undefined8 *)(lVar3 + 0x10),param_2,param_2);
  puVar1 = auStack_50;
  FUN_105651c54();
  FUN_105651df4(auStack_50);
  FUN_10564e49c(&lStack_60);
  func_0x00010bccbe4c(alStack_b0);
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  func_0x00010bccbdb4(alStack_b0);
  uStack_b8 = 0;
  apuStack_110[0] = puVar1;
  func_0x000105651e60();
  uVar4 = *ppuVar2;
  FUN_1056514f8(apuStack_110);
  return uVar4;
}



/* Entry: 105651080; end: 105651197;  */

undefined1 * FUN_105651080(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int iVar4;
  undefined1 auStack_d8 [88];
  undefined4 uStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x000105652070();
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  puVar2 = &UNK_10f2e1db0;
  func_0x0001003ba264(&UNK_10f2e1db0,0x22,0x93a80);
  lStack_78 = lVar1 / 1000000 - (long)puVar2;
  plStack_70 = &lStack_78;
  pcStack_68 = FUN_105651e78;
  ppuStack_60 = &PTR_FUN_1108a3c18;
  ppuStack_58 = &plStack_70;
  func_0x00010bccc554(param_1,&pcStack_68,&UNK_10f2e1e6c,0x19);
  func_0x000105651edc(ppuStack_60);
  uStack_80 = 0;
  while( true ) {
    puVar3 = auStack_d8;
    FUN_105651198(puVar3);
    func_0x000105651f00(uStack_38);
    if ((bool)in_ZR) {
      return (undefined1 *)0x1;
    }
    ___stack_chk_fail();
    func_0x000105651fb8();
    iVar4 = (int)(lVar1 / 1000000);
    if (iVar4 == 0) break;
    func_0x000105651edc(ppuStack_60);
    in_ZR = iVar4 == 2;
    if (!(bool)in_ZR) goto LAB_105651194;
    func_0x000105652104();
    func_0x0001056520d8();
    uStack_80 = 1;
    ___cxa_end_catch();
    func_0x0001056520b0();
  }
  func_0x000105651f38();
LAB_105651194:
  func_0x00010565210c();
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_DAT_1108a3bd8)[extraout_x8_00]);
  }
  func_0x000105652080();
  return puVar3;
}



/* Entry: 105651198; end: 1056511cf;  */

void FUN_105651198(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_DAT_1108a3bd8)[extraout_x8]);
  }
  func_0x000105652080();
  return;
}



/* Entry: 1056511d0; end: 1056511df;  */

void FUN_1056511d0(void)

{
  return;
}



/* Entry: 1056511e0; end: 105651223;  */

void FUN_1056511e0(long param_1)

{
  if (*(uint *)(param_1 + 0xa0) != 0xffffffff) {
    func_0x000105651ee8((&PTR_FUN_1108a3ba8)[*(uint *)(param_1 + 0xa0)]);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  return;
}



/* Entry: 105651224; end: 10565122f;  */

void FUN_105651224(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_10564a65c();
  }
  return;
}



/* Entry: 105651230; end: 10565125b;  */

undefined8 FUN_105651230(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10565125c(&uStack_28);
  return param_1;
}



/* Entry: 10565125c; end: 1056512b7;  */

void FUN_10565125c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x88;
      FUN_1056512b8();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1056512b8; end: 1056512e7;  */

long FUN_1056512b8(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x70);
  func_0x0001056520fc();
  func_0x0001056520f4();
  func_0x0001056520ec();
  return param_1;
}



/* Entry: 1056512e8; end: 105651323;  */

void FUN_1056512e8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_FUN_1108a3bb8)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 105651324; end: 10565132f;  */

undefined8 FUN_105651324(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_10565125c(&uStack_28);
  return param_2;
}



/* Entry: 105651330; end: 10565133b;  */

void FUN_105651330(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001056520e0();
  func_0x0001056520c0();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x78) * 0x78;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
    FUN_10565145c(lVar2,lVar3);
    lVar2 = lVar2 + 0x78;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x78) {
    func_0x00010564a488(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10565133c; end: 1056513e7;  */

void FUN_10565133c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001056520c0();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x78) * 0x78;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
    FUN_10565145c(lVar2,lVar3);
    lVar2 = lVar2 + 0x78;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x78) {
    func_0x00010564a488(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1056513e8; end: 10565145b;  */

void FUN_1056513e8(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000105651fb8();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x222222222222222 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001056520c0();
      func_0x000105651f60();
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      func_0x00010028acf0(param_1 + 0x30,param_2 + 0x30);
      *(long *)(unaff_x20 + 0x58) = unaff_x19[0xb];
      lVar2 = unaff_x19[0xd];
      lVar1 = unaff_x19[0xc];
      *(long *)(unaff_x20 + 0x70) = unaff_x19[0xe];
      *(long *)(unaff_x20 + 0x68) = lVar2;
      *(long *)(unaff_x20 + 0x60) = lVar1;
      unaff_x19[0xd] = 0;
      unaff_x19[0xe] = 0;
      unaff_x19[0xc] = 0;
      return;
    }
    lVar1 = unaff_x20 * 0x78;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x78;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x78;
  return;
}


