/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073743ac; end: 10737442b;  */

undefined8 * FUN_1073743ac(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_107330fdc(&uStack_30);
  return param_1;
}



/* Entry: 10737442c; end: 107374433;  */

void FUN_10737442c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107379004(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_107330fdc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107374434; end: 107374493;  */

undefined8 FUN_107374434(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107374460(&uStack_28);
  return param_1;
}



/* Entry: 107374494; end: 1073744df;  */

void FUN_107374494(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107379010();
  FUN_1073744e0();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x00010028af84(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 1073744e0; end: 107374663;  */

void FUN_1073744e0(void)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  
  func_0x000107379010();
  FUN_107374664();
  uVar8 = unaff_x20[3];
  if (uVar8 != 0) {
    if ((ulong)(*(long *)(*unaff_x19 + -8) + unaff_x19[3]) < uVar8) {
      FUN_1073741e0();
    }
    lVar6 = *unaff_x20;
    lVar4 = unaff_x20[1];
    FUN_1073746c8();
    lStack_70 = lVar6;
    while (lStack_70 != 0) {
      bVar2 = (byte)lStack_70;
      lStack_68 = lVar4;
      func_0x0001073797b4();
      plVar3 = unaff_x19;
      func_0x00010ae6c8b4();
      lVar6 = unaff_x19[1];
      uVar1 = unaff_x19[2];
      lVar5 = *unaff_x19;
      *(byte *)(lVar5 + (long)plVar3) = bVar2 & 0x7f;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar1) + (uVar1 & 7)) = bVar2 & 0x7f;
      lVar6 = lVar6 + (long)plVar3 * 0x50;
      func_0x000107379198(lVar6);
      puVar7 = (undefined8 *)(lVar6 + 0x38);
      *puVar7 = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined8 *)(lVar6 + 0x48) = 0;
      lVar6 = *(long *)(lVar4 + 0x38);
      lVar4 = *(long *)(lVar4 + 0x40);
      uStack_58 = 0;
      lVar5 = lVar4 - lVar6;
      puStack_60 = puVar7;
      if (lVar5 != 0) {
        func_0x000107374324(puVar7,lVar5 >> 4);
        func_0x0001073742a8(puVar7,lVar6,lVar4);
      }
      uStack_58 = 1;
      FUN_107374724(&puStack_60);
      func_0x000107374750(&lStack_70);
      lVar4 = lStack_68;
    }
    unaff_x19[3] = uVar8;
    *(ulong *)(*unaff_x19 + -8) = *(long *)(*unaff_x19 + -8) - uVar8;
  }
  return;
}



/* Entry: 107374664; end: 107374677;  */

void FUN_107374664(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 107374678; end: 1073746c7;  */

undefined8 * FUN_107374678(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x000107374270(lVar2);
      }
      lVar2 = lVar2 + 0x50;
      pcVar1 = pcVar1 + 1;
    }
    func_0x000107379714();
  }
  return param_1;
}



/* Entry: 1073746c8; end: 1073746eb;  */

undefined1  [16] FUN_1073746c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_1073746ec(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1073746ec; end: 107374723;  */

void FUN_1073746ec(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001073791e4();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107374724; end: 107374783;  */

long FUN_107374724(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107374460(param_1);
  }
  return param_1;
}



/* Entry: 107374784; end: 107374787;  */

undefined8 * FUN_107374784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6510;
  FUN_107374cc0(param_1 + 1);
  return param_1;
}



/* Entry: 107374788; end: 10737479b;  */

void FUN_107374788(void)

{
  FUN_107374a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737479c; end: 1073747cf;  */

undefined8 FUN_10737479c(undefined8 param_1)

{
  func_0x0001073797ec();
  FUN_107374aa8();
  return param_1;
}



/* Entry: 1073747d0; end: 1073747f3;  */

void FUN_1073747d0(long param_1,undefined8 param_2)

{
  func_0x000107379010(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a6510);
  func_0x000107379670();
  FUN_107374494();
  return;
}



/* Entry: 1073747f4; end: 107374a2b;  */

void FUN_1073747f4(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar8;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f4 [2];
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107379004();
  func_0x000107378e90();
  iVar4 = (int)auStack_140;
  uStack_70 = extraout_x8;
  func_0x000107379454();
  func_0x000107379554();
  if (iVar4 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    lVar5 = *(long *)(unaff_x20 + 0x28);
    FUN_1073746c8();
    lStack_108 = lVar7;
    while (lStack_100 = lVar5, lStack_108 != 0) {
      puVar1 = *(undefined8 **)(lVar5 + 0x40);
      for (puVar8 = *(undefined8 **)(lVar5 + 0x38); in_ZR = puVar8 == puVar1, !(bool)in_ZR;
          puVar8 = puVar8 + 2) {
        uVar2 = *(undefined1 *)(unaff_x20 + 0x48);
        uStack_130 = *(undefined8 *)(unaff_x20 + 0x48);
        uStack_128 = *(undefined4 *)(unaff_x20 + 0x50);
        func_0x000107296b84(&uStack_c8,1);
        puVar3 = puStack_b8;
        lVar7 = puVar8[1];
        uStack_d8 = puVar8[1];
        uStack_e0 = *puVar8;
        puStack_b8[1] = 0;
        puStack_b8[2] = 0;
        *puStack_b8 = &PTR_DAT_110998a58;
        if (lVar7 != 0) {
          do {
            func_0x000107378f58();
          } while (extraout_w10 != 0);
        }
        puStack_b0 = (undefined8 *)((ulong)puStack_b0 & 0xffffffffffffff00);
        uStack_78 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_130;
        uStack_e8 = uStack_128;
        uStack_e4 = 1;
        auStack_f4[0] = uVar2;
        FUN_107374ae4(puVar3 + 3,&uStack_e0,uVar6,lVar5,&puStack_b0,auStack_f4);
        func_0x00010724b3d8(&puStack_b0);
        func_0x000107267e44(&uStack_e0);
        puStack_118 = puStack_b8;
        puStack_b8 = (undefined8 *)0x0;
        puStack_120 = puStack_118 + 3;
        func_0x000107297fb8(&uStack_c8);
        puStack_a8 = puStack_118;
        puStack_b0 = puStack_120;
        if (puStack_118 != (undefined8 *)0x0) {
          do {
            func_0x000107378f58();
          } while (extraout_w10_00 != 0);
        }
        uStack_a0 = 1;
        uStack_c8 = 0;
        uStack_c0 = 0;
        func_0x00010726acf0(&uStack_c8);
        (**(code **)(*unaff_x19 + 0x110))();
        func_0x00010726b264(&uStack_c8);
        func_0x000107279298(&puStack_b0);
        func_0x0001072792b8(&puStack_120);
      }
      func_0x000107374750(&lStack_108);
      lVar5 = lStack_100;
    }
  }
  func_0x000107270b00();
  func_0x000107378dfc(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107270b00(auStack_140);
  func_0x000107378f88();
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 107374a2c; end: 107374a53;  */

void FUN_107374a2c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6570);
  func_0x000107378e80();
  return;
}



/* Entry: 107374a54; end: 107374a7b;  */

undefined ** FUN_107374a54(void)

{
  return &PTR_DAT_1109a6570;
}



/* Entry: 107374a7c; end: 107374aa7;  */

undefined8 * FUN_107374a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6510;
  FUN_107374cc0(param_1 + 1);
  return param_1;
}



/* Entry: 107374aa8; end: 107374ae3;  */

void FUN_107374aa8(void)

{
  func_0x000107379010();
  func_0x000107378ea0(&PTR_FUN_1109a6510);
  func_0x000107379670();
  FUN_107374494();
  return;
}



/* Entry: 107374ae4; end: 107374cbf;  */

long FUN_107374ae4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  undefined4 uStack_170;
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_10;
  undefined8 uStack_8;
  
  func_0x0001073799f0();
  func_0x0001073793c4();
  func_0x000107378e90();
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *param_1 = &PTR_DAT_110998aa8;
  auStack_188[0] = (undefined1)*param_2;
  uStack_8 = extraout_x8;
  func_0x000107379244();
  (*extraout_x8_00)();
  uVar2 = *unaff_x21;
  lStack_178 = unaff_x21[1];
  uStack_180 = uVar2;
  if (lStack_178 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
    uVar2 = *unaff_x21;
  }
  uStack_170 = 1;
  func_0x000107379958(uVar2);
  (*extraout_x8_01)();
  func_0x000107269bac(auStack_168,uVar2);
  func_0x000104c2fe00(auStack_128,param_3);
  func_0x000104c2fe00(auStack_f0,param_4);
  (**(code **)(*(long *)*unaff_x21 + 0x38))(auStack_198);
  puVar3 = auStack_198;
  FUN_107330078(puVar3);
  func_0x000107297358(auStack_b8,puVar3);
  func_0x000107263b58(auStack_a0,param_5);
  func_0x000107379958(*unaff_x21);
  (*extraout_x8_02)();
  func_0x00010726236c(auStack_60);
  uStack_18 = param_6[1];
  uStack_20 = *param_6;
  uStack_10 = *(undefined1 *)(param_6 + 2);
  func_0x000107297044(unaff_x19 + 0x30,auStack_188);
  func_0x0001072977f4();
  func_0x000107378dfc(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072977f4(auStack_188);
    func_0x0001072978a8();
    func_0x000107378fd8();
    func_0x000107379574();
    func_0x000107374ce0();
    lVar1 = unaff_x19;
    func_0x00010725c0a0();
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 107374cc0; end: 107374d6f;  */

long FUN_107374cc0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107379574();
  func_0x000107374ce0();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107374d70; end: 107374d73;  */

undefined8 * FUN_107374d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a65a0;
  FUN_107375204(param_1 + 1);
  return param_1;
}



/* Entry: 107374d74; end: 107374d87;  */

void FUN_107374d74(void)

{
  FUN_107375120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107374d88; end: 107374dbb;  */

undefined8 FUN_107374d88(undefined8 param_1)

{
  func_0x00010737945c();
  FUN_10737514c();
  return param_1;
}



/* Entry: 107374dbc; end: 107374ddf;  */

void FUN_107374dbc(long param_1,undefined8 param_2)

{
  func_0x000107379010(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a65a0);
  func_0x000107379670();
  func_0x000107374d54();
  return;
}



/* Entry: 107374de0; end: 1073750eb;  */

void FUN_107374de0(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  long lVar1;
  long *unaff_x21;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_e0 [16];
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [16];
  undefined ***pppuStack_98;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001073793c4();
  func_0x000107378e90();
  uStack_58 = extraout_x8;
  func_0x000107378fc0();
  func_0x00010737934c();
  if (param_1 != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    in_ZR = (char)unaff_x21[7] == '\x01';
    if ((bool)in_ZR) {
      if ((int)unaff_x21[6] != 0) {
        FUN_107371e6c(&ppuStack_b0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&plStack_d0,auStack_a8);
        uStack_b8 = ppuStack_b0._0_1_;
        uStack_78 = uStack_c8;
        plStack_80 = plStack_d0;
        uStack_70 = uStack_c0;
        plStack_d0 = (long *)0x0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_68 = ppuStack_b0._0_1_;
        uStack_60 = 1;
        FUN_107371ca0(*(undefined8 *)(unaff_x19 + 0x60),&plStack_80,0);
        FUN_107371e08(&plStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_d0);
        unaff_x21 = *(long **)(lVar1 + 0x1e8);
        func_0x0001073070f0(&plStack_80,(ulong)ppuStack_b0 & 0xff);
        func_0x0001073798b8();
        func_0x000107379880();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x0001073795dc();
        goto LAB_107374ffc;
      }
      uVar2 = *(undefined8 *)(lVar1 + 0x1e8);
      plVar3 = (long *)*unaff_x21;
      (**(code **)(*plVar3 + 0x20))(&plStack_80,plVar3);
      plVar4 = plStack_80 + 2;
      while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(&ppuStack_b0,plVar3,plVar4 + 2);
        if (ppuStack_b0 != (undefined **)0x0) {
          func_0x000107379244();
          (*extraout_x8_00)();
        }
        func_0x000107331000(&ppuStack_b0);
      }
      func_0x000107283194(&plStack_80);
      func_0x0001073798b8();
      FUN_10737191c(uVar2);
      func_0x00010737947c(&plStack_80);
      unaff_x21 = plStack_80;
      plVar4 = plStack_80;
      FUN_10737bd4c();
      if (((int)plVar4 != 0) && (in_ZR = *(char *)(lVar1 + 0x1e0) == '\x01', (bool)in_ZR)) {
        pppuStack_98 = &ppuStack_b0;
        ppuStack_b0 = &PTR_FUN_1109a6620;
        func_0x00010737931c(*(undefined8 *)(unaff_x19 + 0x40));
        (*extraout_x8_01)();
        func_0x0001006393ec(&ppuStack_b0);
      }
      func_0x000107378f40();
    }
    else {
      func_0x0001072c8f9c(auStack_e0);
      func_0x00010737988c(&ppuStack_b0);
      func_0x00010737947c(&plStack_80);
      func_0x000107373d70(&ppuStack_b0);
      func_0x00010737986c();
      func_0x000107378f40();
    }
    if (plStack_80 != (long *)0x0) {
      func_0x000107378f10();
    }
  }
LAB_107374ffc:
  func_0x000107378fe8();
  func_0x000107378dfc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(&ppuStack_b0);
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 8))(unaff_x21);
  }
  func_0x000107378fe8();
  func_0x000107378f88();
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 1073750ec; end: 107375113;  */

void FUN_1073750ec(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6690);
  func_0x000107378e80();
  return;
}



/* Entry: 107375114; end: 10737511f;  */

undefined ** FUN_107375114(void)

{
  return &PTR_DAT_1109a6690;
}



/* Entry: 107375120; end: 10737514b;  */

undefined8 * FUN_107375120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a65a0;
  FUN_107375204(param_1 + 1);
  return param_1;
}



/* Entry: 10737514c; end: 107375187;  */

void FUN_10737514c(void)

{
  func_0x000107379010();
  func_0x000107378ea0(&PTR_FUN_1109a65a0);
  func_0x000107379670();
  func_0x000107374d54();
  return;
}



/* Entry: 107375188; end: 10737518f;  */

void FUN_107375188(void)

{
  return;
}



/* Entry: 107375190; end: 1073751af;  */

void FUN_107375190(undefined8 *param_1)

{
  func_0x0001073792f0();
  *param_1 = &PTR_FUN_1109a6620;
  return;
}



/* Entry: 1073751b0; end: 1073751cf;  */

void FUN_1073751b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a6620;
  return;
}



/* Entry: 1073751d0; end: 1073751f7;  */

void FUN_1073751d0(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6680);
  func_0x000107378e80();
  return;
}



/* Entry: 1073751f8; end: 107375203;  */

undefined ** FUN_1073751f8(void)

{
  return &PTR_DAT_1109a6680;
}



/* Entry: 107375204; end: 10737521f;  */

long FUN_107375204(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010737983c();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107375220; end: 107375273;  */

long FUN_107375220(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x000107379120(*(undefined8 *)(param_2 + 0x18));
    func_0x00010737907c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 107375274; end: 10737530b;  */

long FUN_107375274(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107379574();
  FUN_107375ca0();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10737530c; end: 107375333;  */

void FUN_10737530c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107375334; end: 10737545b;  */

/* WARNING: Possible PIC construction at 0x000107375348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010737534c) */

long FUN_107375334(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  func_0x000107379270();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x000107378fa8(uVar2);
  return param_1;
}



/* Entry: 10737545c; end: 10737547f;  */

void FUN_10737545c(long *param_1)

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



/* Entry: 107375480; end: 107375493;  */

void FUN_107375480(void)

{
  func_0x000107375474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107375494; end: 10737549f;  */

void FUN_107375494(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073754a0; end: 1073754cb;  */

undefined8 * FUN_1073754a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6700;
  FUN_10736e2c8(param_1 + 1);
  return param_1;
}



/* Entry: 1073754cc; end: 1073754df;  */

void FUN_1073754cc(void)

{
  FUN_1073754a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073754e0; end: 107375513;  */

void FUN_1073754e0(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107379280();
  func_0x0001073792d4(&PTR_FUN_1109a6700);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107375514; end: 10737555b;  */

void FUN_107375514(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a6700;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10737555c; end: 1073756b3;  */

void FUN_10737555c(undefined1 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c0 [112];
  undefined1 uStack_250;
  undefined1 auStack_248 [400];
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x000107378e90();
  uVar3 = **(undefined8 **)(param_2 + 8);
  uStack_38 = extraout_x8;
  func_0x000107751284(auStack_248);
  auStack_2c0[0] = 0;
  uStack_250 = 0;
  func_0x000107751444(auStack_248,param_3,auStack_2c0);
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  func_0x000107753050(auStack_b8,uVar3,auStack_248,&uStack_310);
  func_0x00010724b3d8(&uStack_310);
  func_0x000107267e8c(auStack_2c0);
  func_0x000107267da8(auStack_248);
  puVar2 = auStack_b8;
  func_0x00010727f7dc();
  iVar1 = *(int *)(puVar2 + 0x68);
  if ((iVar1 != 0) && (in_ZR = iVar1 == 1, !(bool)in_ZR)) {
    in_ZR = iVar1 == 3;
    if ((bool)in_ZR) {
      func_0x00010729807c(param_1,puVar2 + 8);
      goto LAB_10737564c;
    }
    in_ZR = iVar1 == 2;
    if ((bool)in_ZR) {
      __ZNSt3__19to_stringEd(auStack_2c0,*(undefined8 *)(puVar2 + 8));
      func_0x0001072625b4(auStack_248,auStack_2c0);
      func_0x0001072627ac(param_1,auStack_248);
      func_0x000104c2f714(auStack_248);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10737564c;
    }
  }
  *param_1 = 0;
  param_1[0x38] = 0;
LAB_10737564c:
  func_0x000107379804();
  func_0x000107378dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107379804();
  func_0x000107378f88();
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 1073756b4; end: 1073756db;  */

void FUN_1073756b4(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6760);
  func_0x000107378e80();
  return;
}



/* Entry: 1073756dc; end: 1073756f3;  */

undefined ** FUN_1073756dc(void)

{
  return &PTR_DAT_1109a6760;
}



/* Entry: 1073756f4; end: 107375707;  */

void FUN_1073756f4(void)

{
  func_0x0001073756e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107375708; end: 107375713;  */

long * FUN_107375708(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001072c953c(plVar1);
    __ZdlPv(*plVar1 + -8);
  }
  return plVar1;
}



/* Entry: 107375714; end: 10737573f;  */

undefined8 * FUN_107375714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a67d0;
  FUN_10736e3e4(param_1 + 1);
  return param_1;
}



/* Entry: 107375740; end: 107375753;  */

void FUN_107375740(void)

{
  FUN_107375714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107375754; end: 107375787;  */

void FUN_107375754(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107379280();
  func_0x0001073792d4(&PTR_FUN_1109a67d0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107375788; end: 1073757cf;  */

void FUN_107375788(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a67d0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073757d0; end: 107375a9b;  */

void FUN_1073757d0(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long lVar6;
  long lStack_460;
  long lStack_458;
  undefined8 auStack_450 [2];
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [104];
  undefined1 uStack_380;
  undefined8 uStack_378;
  undefined8 auStack_370 [7];
  char cStack_338;
  undefined1 auStack_270 [136];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_58;
  
  plVar5 = param_3;
  func_0x000107378e90();
  lVar6 = *(long *)(param_2 + 8);
  lVar2 = *plVar5;
  uStack_58 = extraout_x8;
  func_0x00010737931c();
  (*extraout_x8_00)();
  func_0x000107268400(auStack_450);
  FUN_107375ad0();
  lStack_460 = lVar6;
  uVar3 = auStack_450[0];
  while (lStack_458 = lVar2, lStack_460 != 0) {
    auStack_450[0] = uVar3;
    FUN_107372ba0(uVar3,lVar2);
    if ((int)uVar3 != 0) {
      func_0x000107751284(&uStack_378);
      lStack_438 = param_3[1];
      lStack_440 = *param_3;
      if (param_3[1] != 0) {
        do {
          func_0x000107378f58();
        } while (extraout_w10 != 0);
      }
      auStack_3f0[0] = 0;
      uStack_380 = 0;
      func_0x000107751444(&uStack_378,&lStack_440,auStack_3f0);
      func_0x000107295f10(auStack_270,param_4);
      func_0x000107751334(&uStack_1e8,&uStack_378);
      func_0x000107267e8c(auStack_3f0);
      func_0x000107267e44(&lStack_440);
      func_0x000107267da8(&uStack_378);
      uStack_400 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      lStack_438 = 0;
      lStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      func_0x000107753050(&uStack_378,*(undefined8 *)(lVar2 + 0x38),&uStack_1e8,&lStack_440);
      puVar4 = &uStack_378;
      FUN_1073405dc(puVar4);
      func_0x0001072786d8(auStack_3e8,puVar4 + 1);
      func_0x00010727f7f8(auStack_370);
      func_0x00010724b3d8(&lStack_440);
      func_0x00010729d318(&uStack_378,auStack_3f0,&lStack_440);
      in_ZR = cStack_338 == '\x01';
      if ((bool)in_ZR) {
        FUN_1073654b8(&lStack_440,auStack_450,lVar2,&uStack_378);
      }
      func_0x000107267ed0(&uStack_378);
      func_0x00010726af18(auStack_3e8);
      func_0x000107267da8(&uStack_1e8);
    }
    FUN_107375b30(&lStack_460);
    lVar2 = lStack_458;
    uVar3 = auStack_450[0];
  }
  func_0x000107375b64(&uStack_1e8,1);
  puStack_1d8[2] = 0;
  *puStack_1d8 = &PTR_FUN_1109a7290;
  puStack_1d8[1] = 0;
  FUN_107379d50(puStack_1d8 + 3,param_3,auStack_450);
  puVar1 = puStack_1d8;
  puStack_1d8 = (undefined8 *)0x0;
  puVar4 = puVar1 + 3;
  func_0x000107375be8(&uStack_1e8);
  uStack_378 = 0;
  auStack_370[0] = 0;
  FUN_107375bf8(&uStack_378);
  func_0x000104c335c0(auStack_450);
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_107330fdc();
  func_0x000107378dfc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(puVar4);
  func_0x000107375be8(&uStack_1e8);
  func_0x000104c335c0(auStack_450);
  func_0x000107378f88();
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 107375a9c; end: 107375ac3;  */

void FUN_107375a9c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6830);
  func_0x000107378e80();
  return;
}



/* Entry: 107375ac4; end: 107375acf;  */

undefined ** FUN_107375ac4(void)

{
  return &PTR_DAT_1109a6830;
}



/* Entry: 107375ad0; end: 107375af7;  */

undefined1  [16] FUN_107375ad0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_107375af8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107375af8; end: 107375b2f;  */

void FUN_107375af8(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001073791e4();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107375b30; end: 107375b83;  */

long * FUN_107375b30(long *param_1)

{
  param_1[1] = param_1[1] + 0x48;
  *param_1 = *param_1 + 1;
  FUN_107375af8();
  return param_1;
}



/* Entry: 107375b84; end: 107375bb3;  */

void FUN_107375b84(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x12f684bda12f685) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a7290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107375bb4; end: 107375bb7;  */

void FUN_107375bb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107375bb8; end: 107375bcb;  */

void FUN_107375bb8(void)

{
  func_0x000107375bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107375bcc; end: 107375bf7;  */

void FUN_107375bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107375bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107375bf8; end: 107375c1b;  */

void FUN_107375bf8(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107375c1c; end: 107375c23;  */

void FUN_107375c1c(void)

{
  return;
}



/* Entry: 107375c24; end: 107375c43;  */

void FUN_107375c24(undefined8 *param_1)

{
  func_0x0001073792f0();
  *param_1 = &PTR_FUN_1109a6850;
  return;
}



/* Entry: 107375c44; end: 107375c6b;  */

void FUN_107375c44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a6850;
  return;
}



/* Entry: 107375c6c; end: 107375c93;  */

void FUN_107375c6c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a68b0);
  func_0x000107378e80();
  return;
}



/* Entry: 107375c94; end: 107375c9f;  */

undefined ** FUN_107375c94(void)

{
  return &PTR_DAT_1109a68b0;
}



/* Entry: 107375ca0; end: 107375dcb;  */

void FUN_107375ca0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107379270();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107378fa8(uVar1);
  return;
}



/* Entry: 107375dcc; end: 107375e1f;  */

undefined8 * FUN_107375dcc(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_107377254(lVar2);
      }
      pcVar1 = pcVar1 + 1;
      lVar2 = lVar2 + 0x50;
    }
    func_0x000107379714();
  }
  return param_1;
}



/* Entry: 107375e20; end: 107375e9b;  */

void FUN_107375e20(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107379010();
  FUN_107332104();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  func_0x000107332144(param_1 + 0x28,unaff_x20 + 0x28);
  FUN_107375e9c(unaff_x19 + 0x48,unaff_x20 + 0x48);
  func_0x000107375edc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  return;
}



/* Entry: 107375e9c; end: 107375f1b;  */

void FUN_107375e9c(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010737967c();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x000107378e28();
  }
  else {
    func_0x000107378fb4();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 107375f1c; end: 10737602f;  */

long FUN_107375f1c(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x000107379010();
  func_0x00010737951c();
  lVar6 = 0;
  uVar7 = *unaff_x19;
  uVar8 = unaff_x19[2];
  uVar3 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar2 = (byte)param_1;
  uVar11 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar3);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = unaff_x19[1];
      puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
      func_0x000104c32db4();
      if ((uVar4 & 1) != 0) goto LAB_107375ffc;
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  puVar5 = unaff_x19;
  func_0x0001073770f0();
  lVar6 = unaff_x19[1] + (long)puVar5 * 0x50;
  func_0x000107379198();
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
LAB_107375ffc:
  return unaff_x19[1] + (long)puVar5 * 0x50 + 0x38;
}



/* Entry: 107376030; end: 107376147;  */

void FUN_107376030(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x0001073799f0();
  func_0x0001073793c4();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    FUN_1073772c0(uVar2);
    lVar9 = uVar2 + 0x20;
  }
  else {
    lVar9 = uVar2 - *unaff_x19;
    uVar2 = (lVar9 >> 5) + 1;
    if (uVar2 >> 0x3b != 0) {
      FUN_1073772e4();
LAB_107376144:
      func_0x000104bd35f4();
      func_0x0001073790ac();
      func_0x000107379198();
      return;
    }
    uVar6 = *(ulong *)(param_1 + 0x10) - *unaff_x19;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3b != 0) goto LAB_107376144;
      lVar4 = uVar7 << 5;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    FUN_1073772c0(lVar9);
    lVar8 = *unaff_x19;
    lVar3 = unaff_x19[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar1;
    for (lVar5 = lVar8; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
      FUN_1073772c0(lVar10,lVar5);
      lVar10 = lVar10 + 0x20;
    }
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x20) {
      func_0x0001072b978c(lVar8);
    }
    lVar9 = lVar9 + 0x20;
    lVar5 = *unaff_x19;
    *unaff_x19 = lVar1;
    unaff_x19[1] = lVar9;
    unaff_x19[2] = lVar4 + uVar7 * 0x20;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar9;
  return;
}



/* Entry: 107376148; end: 10737616f;  */

void FUN_107376148(void)

{
  func_0x0001073790ac();
  func_0x000107379198();
  return;
}



/* Entry: 107376170; end: 107376173;  */

undefined8 * FUN_107376170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a68d0;
  func_0x0001073770ac(param_1 + 1);
  return param_1;
}



/* Entry: 107376174; end: 107376187;  */

void FUN_107376174(void)

{
  FUN_107376588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107376188; end: 1073761ab;  */

undefined8 FUN_107376188(void)

{
  undefined8 unaff_x20;
  
  FUN_107379430();
  func_0x000107379004();
  func_0x000107378ea0(&PTR_FUN_1109a68d0);
  FUN_107376148();
  return unaff_x20;
}



/* Entry: 1073761ac; end: 1073761cf;  */

void FUN_1073761ac(long param_1,undefined8 param_2)

{
  func_0x000107379004(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a68d0);
  FUN_107376148();
  return;
}



/* Entry: 1073761d0; end: 107376553;  */

void FUN_1073761d0(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined *****pppppuVar4;
  undefined ****ppppuVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  undefined ***pppuVar6;
  undefined ****ppppuVar7;
  undefined *****unaff_x22;
  undefined *****unaff_x23;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [24];
  undefined ****ppppuStack_1b8;
  undefined ***apppuStack_1b0 [4];
  undefined ****ppppuStack_190;
  undefined ****ppppuStack_188;
  undefined ****ppppuStack_180;
  undefined1 auStack_178 [56];
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  long lStack_130;
  long lStack_128;
  undefined ****ppppuStack_120;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [24];
  undefined1 *puStack_c8;
  undefined ***apppuStack_c0 [3];
  undefined ****ppppuStack_a8;
  undefined ***pppuStack_a0;
  undefined4 uStack_98;
  undefined ****ppppuStack_90;
  undefined ****ppppuStack_88;
  undefined ***pppuStack_80;
  undefined ****ppppuStack_78;
  undefined8 uStack_68;
  undefined ****ppppuVar3;
  
  iVar1 = (int)auStack_1e0;
  func_0x000107379004();
  func_0x000107378e90();
  uStack_68 = extraout_x8;
  func_0x000107379454();
  func_0x000107379554();
  if (iVar1 == 0) goto LAB_107376478;
  ppppuVar7 = *(undefined *****)(unaff_x20 + 0x20);
  unaff_x22 = &ppppuStack_180;
  ppppuStack_180 = ppppuVar7;
  func_0x000107379198(auStack_178);
  ppppuStack_120 = ppppuStack_180;
  unaff_x23 = &ppppuStack_140;
  ppppuStack_140 = ppppuVar7;
  ppppuStack_138 = ppppuVar7;
  lStack_130 = unaff_x20 + 0x60;
  lStack_128 = unaff_x20 + 0x28;
  func_0x000104c2fe00(auStack_118,auStack_178);
  ppppuVar5 = ppppuStack_120;
  ppppuVar3 = ppppuStack_138;
  ppppuVar7 = ppppuStack_140;
  if (*(int *)(unaff_x19 + 0x78) == 0) {
    in_ZR = 0;
    if (*(char *)(ppppuStack_140 + 0x2e) == '\x01') {
      ppppuVar3 = apppuStack_c0;
      FUN_1073765ec(ppppuVar3,unaff_x19 + 0x20,*(undefined1 *)(unaff_x19 + 1),
                    *(undefined2 *)(ppppuStack_140 + 0x1d));
      iVar1 = (int)ppppuVar3;
      FUN_107371e9c();
      if (iVar1 == 0) {
        pppuVar6 = *(undefined ****)(unaff_x19 + 0x68);
      }
      else {
        pppuVar6 = ppppuVar7[0x34];
        FUN_107372414(pppuVar6,ppppuVar7[0x35]);
      }
      in_ZR = *(char *)(unaff_x19 + 0x70) == '\0';
      if ((bool)in_ZR) {
        pppuVar6 = (undefined ***)0x0;
      }
      FUN_1073768a0(ppppuVar7[0x2d],apppuStack_c0,pppuVar6);
      ppppuVar7 = apppuStack_c0;
      goto LAB_107376464;
    }
  }
  else {
    in_ZR = *(int *)(unaff_x19 + 0x78) == 1;
    if ((bool)in_ZR) {
      FUN_1073765ec(apppuStack_1b0,unaff_x19 + 8,*(undefined1 *)(unaff_x19 + 1),
                    *(undefined2 *)(ppppuStack_138 + 0x1d));
      puVar2 = auStack_1d0;
      ppppuVar7 = ppppuVar3 + 0x4f;
      FUN_10736f7ec();
      ppppuStack_1b8 = ppppuVar3;
      puStack_c8 = (undefined1 *)0x0;
      func_0x00010737903c();
      func_0x0001073796a0(&PTR_FUN_1109a69c0);
      *(undefined8 *)(puVar2 + 0x18) = extraout_x8_00;
      *(undefined *****)(puVar2 + 0x20) = ppppuVar3;
      puStack_c8 = puVar2;
      if (*(int *)(ppppuVar3 + 0x26) == 0) {
        ppppuVar5 = apppuStack_1b0;
        FUN_10731e678();
        ppppuStack_90 = ppppuVar5;
        ppppuStack_88 = ppppuVar7;
        while (ppppuStack_90 != (undefined ****)0x0) {
          apppuStack_c0[0] = (undefined ***)&PTR_FUN_1109a6400;
          ppppuStack_a8 = apppuStack_c0;
          func_0x00010737931c(ppppuVar3[0x25],ppppuStack_88);
          (*extraout_x8_01)();
          func_0x000107379474();
          FUN_10731e6dc(&ppppuStack_90);
        }
      }
      else {
        ppppuVar5 = apppuStack_1b0;
        FUN_10731e678();
        ppppuStack_190 = ppppuVar5;
        while (ppppuStack_188 = ppppuVar7, ppppuStack_190 != (undefined ****)0x0) {
          pppuVar6 = ppppuVar3[0x25];
          ppppuVar5 = apppuStack_c0;
          func_0x000107376950(ppppuVar5,auStack_e0);
          pppuStack_a0 = *ppppuVar7;
          uStack_98 = *(undefined4 *)(ppppuVar7 + 1);
          ppppuStack_78 = (undefined ****)0x0;
          func_0x00010737954c();
          *ppppuVar5 = (undefined ***)&PTR_FUN_1109a6940;
          func_0x000107376950(ppppuVar5 + 1,apppuStack_c0);
          ppppuVar5[5] = pppuStack_a0;
          *(undefined4 *)(ppppuVar5 + 6) = uStack_98;
          ppppuStack_78 = ppppuVar5;
          (*(code *)(*pppuVar6)[4])(pppuVar6,ppppuVar7,&ppppuStack_90);
          func_0x0001006393ec(&ppppuStack_90);
          func_0x0001073752b4(apppuStack_c0);
          FUN_10731e6dc(&ppppuStack_190);
          ppppuVar7 = ppppuStack_188;
        }
      }
      func_0x0001073752b4(auStack_e0);
      func_0x0001073793b4();
      ppppuVar7 = apppuStack_1b0;
LAB_107376464:
      func_0x00010731e248(ppppuVar7);
    }
    else {
      pppppuVar4 = &ppppuStack_90;
      FUN_10736f7ec(pppppuVar4,ppppuStack_120 + 0x4f);
      ppppuStack_78 = ppppuVar5;
      ppppuStack_a8 = (undefined ****)0x0;
      func_0x00010737903c();
      *pppppuVar4 = (undefined ****)&PTR_FUN_1109a6b50;
      pppppuVar4[2] = ppppuStack_88;
      pppppuVar4[1] = ppppuStack_90;
      ppppuStack_90 = (undefined ****)0x0;
      ppppuStack_88 = (undefined ****)0x0;
      pppppuVar4[3] = (undefined ****)pppuStack_80;
      pppppuVar4[4] = ppppuVar5;
      ppppuStack_a8 = (undefined ****)pppppuVar4;
      FUN_107376c78(ppppuVar5[0x25],*(undefined4 *)(ppppuVar5 + 0x26),apppuStack_c0);
      func_0x000107379474();
      func_0x00010725b1d4(&ppppuStack_90);
    }
  }
  func_0x000104c2f714(auStack_118);
  func_0x000104c2f714();
LAB_107376478:
  func_0x000107378fe8();
  func_0x000107378dfc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073752b4(auStack_e0);
    func_0x0001073793b4();
    func_0x00010731e248(apppuStack_1b0);
    func_0x000104c2f714(unaff_x23 + 5);
    func_0x000104c2f714(unaff_x22 + 1);
    func_0x000107378fe8();
    func_0x000107378f88();
    func_0x000107378ff0();
    func_0x000107378fe0();
    func_0x000107378e80();
    return;
  }
  return;
}



/* Entry: 107376554; end: 10737657b;  */

void FUN_107376554(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6bc0);
  func_0x000107378e80();
  return;
}



/* Entry: 10737657c; end: 107376587;  */

undefined ** FUN_10737657c(void)

{
  return &PTR_DAT_1109a6bc0;
}



/* Entry: 107376588; end: 1073765b3;  */

undefined8 * FUN_107376588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a68d0;
  func_0x0001073770ac(param_1 + 1);
  return param_1;
}



/* Entry: 1073765b4; end: 1073765eb;  */

void FUN_1073765b4(void)

{
  func_0x000107379004();
  func_0x000107378ea0(&PTR_FUN_1109a68d0);
  FUN_107376148();
  return;
}



/* Entry: 1073765ec; end: 10737689f;  */

void FUN_1073765ec(undefined8 param_1,byte ****param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  undefined8 *puVar4;
  byte ***pppbVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  byte ****ppppbVar8;
  undefined8 *puVar9;
  long unaff_x21;
  uint uVar10;
  byte ****ppppbVar11;
  long lVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  uint uStack_bc;
  char cStack_b8;
  uint uStack_b4;
  int iStack_b0;
  char cStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  byte ***pppbStack_a0;
  byte ***pppbStack_98;
  long lStack_90;
  byte ***pppbStack_80;
  byte ***pppbStack_78;
  long lStack_70;
  byte ***pppbStack_68;
  
  func_0x0001073793c4();
  lStack_90 = 0;
  ppppbVar11 = param_2;
  pppbStack_a0 = (byte ***)&pppbStack_a0;
  pppbStack_98 = (byte ***)&pppbStack_a0;
  FUN_10731e678();
  ppppbVar8 = ppppbVar11;
  while (uStack_d0 = param_2, uStack_c8 = ppppbVar8, param_2 != (byte ****)0x0) {
    if (*(byte *)ppppbVar8 == param_3) {
      func_0x000107379250();
      pppbVar5 = *ppppbVar8;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(ppppbVar8 + 1);
      param_2[1] = (byte ***)&pppbStack_a0;
      param_2[2] = pppbVar5;
      *param_2 = pppbStack_a0;
      pppbStack_a0[1] = (byte **)param_2;
      lStack_90 = lStack_90 + 1;
      pppbStack_a0 = (byte ***)param_2;
    }
    FUN_10731e6dc(&uStack_d0);
    param_2 = uStack_d0;
    ppppbVar8 = uStack_c8;
  }
  *unaff_x19 = &UNK_10e52b660;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  FUN_10731e678();
  pppbStack_80 = (byte ***)0x0;
  uVar10 = (uint)((ulong)param_4 >> 8);
  lStack_70 = unaff_x21;
  pppbStack_68 = (byte ***)ppppbVar11;
  ppppbVar11 = (byte ****)pppbStack_98;
  while (pppbStack_98 = (byte ***)ppppbVar11, lStack_70 != 0) {
    bVar1 = *(byte *)pppbStack_68;
    if (((uint)param_4 & 0xff) <= (uint)bVar1 && (bVar1 < uVar10 || bVar1 == uVar10)) {
      FUN_10735d488(&uStack_d0,unaff_x19);
      pppbStack_78 = (byte ***)uStack_c8;
      pppbStack_80 = (byte ***)uStack_d0;
      FUN_10731e6dc(&pppbStack_80);
    }
    FUN_10731e6dc(&lStack_70);
    ppppbVar11 = (byte ****)pppbStack_98;
  }
  for (; ppppbVar11 != &pppbStack_a0; ppppbVar11 = (byte ****)ppppbVar11[1]) {
    if (*(byte *)(ppppbVar11 + 2) < uVar10) {
      iStack_c0 = *(int *)((long)ppppbVar11 + 0x14) << 1;
      iStack_b0 = *(int *)(ppppbVar11 + 3) << 1;
      cStack_b8 = *(byte *)(ppppbVar11 + 2) + 1;
      uStack_d0 = (byte ****)CONCAT71(uStack_d0._1_7_,cStack_b8);
      uStack_d0 = (byte ****)CONCAT44(iStack_c0,(undefined4)uStack_d0);
      uStack_bc = *(int *)(ppppbVar11 + 3) << 1 | 1;
      uStack_c8._0_5_ = CONCAT14(cStack_b8,iStack_b0);
      uStack_b4 = *(int *)((long)ppppbVar11 + 0x14) << 1 | 1;
      ppppbVar2 = (byte ****)0x0;
      cStack_ac = cStack_b8;
      uStack_a8 = uStack_b4;
      uStack_a4 = uStack_bc;
      FUN_1073768cc(0,&uStack_d0);
      ppppbVar8 = ppppbVar2;
      for (lVar12 = 0xc; lVar12 != 0x30; lVar12 = lVar12 + 0xc) {
        ppppbVar3 = ppppbVar8;
        FUN_1073768cc(ppppbVar8,(long)&uStack_d0 + lVar12);
        ppppbVar8[1] = (byte ***)ppppbVar3;
        ppppbVar8 = ppppbVar3;
      }
      pppbStack_a0[1] = (byte **)ppppbVar2;
      *ppppbVar2 = pppbStack_a0;
      ppppbVar8[1] = (byte ***)&pppbStack_a0;
      lStack_90 = lStack_90 + 4;
      pppbStack_a0 = (byte ***)ppppbVar8;
      if ((int)(((uint)param_4 & 0xff) - 1) <= (int)(uint)*(byte *)(ppppbVar11 + 2)) {
        puVar9 = &uStack_d0;
        lVar12 = 0x30;
        do {
          puVar6 = unaff_x19;
          puVar4 = puVar9;
          FUN_107359ce0();
          if (((ulong)puVar4 & 1) != 0) {
            puVar6 = (undefined8 *)(unaff_x19[1] + (long)puVar6 * 0xc);
            uVar7 = *puVar9;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar9 + 1);
            *puVar6 = uVar7;
          }
          lVar12 = lVar12 + -0xc;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        } while (lVar12 != 0);
      }
    }
  }
  func_0x0001073768fc(&pppbStack_a0);
  return;
}



/* Entry: 1073768a0; end: 1073768cb;  */

void FUN_1073768a0(undefined8 *param_1)

{
  code *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107379958();
    (*extraout_x8)();
    return;
  }
  func_0x000104bfeb48();
  func_0x000107379004();
  func_0x000107379250();
  *param_1 = unaff_x20;
  param_1[1] = 0;
  param_1[2] = *unaff_x19;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(unaff_x19 + 1);
  return;
}



/* Entry: 1073768cc; end: 10737698f;  */

void FUN_1073768cc(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107379004();
  func_0x000107379250();
  *param_1 = unaff_x20;
  param_1[1] = 0;
  param_1[2] = *unaff_x19;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(unaff_x19 + 1);
  return;
}



/* Entry: 107376990; end: 107376993;  */

undefined8 * FUN_107376990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6940;
  func_0x0001073752b4(param_1 + 1);
  return param_1;
}



/* Entry: 107376994; end: 1073769a7;  */

void FUN_107376994(void)

{
  FUN_107376a44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073769a8; end: 1073769db;  */

undefined8 FUN_1073769a8(undefined8 param_1)

{
  func_0x00010737954c();
  func_0x000107376a70();
  return param_1;
}



/* Entry: 1073769dc; end: 107376a0f;  */

void FUN_1073769dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107379004(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109a6940;
  func_0x000107376950(param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return;
}



/* Entry: 107376a10; end: 107376a37;  */

void FUN_107376a10(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a69a0);
  func_0x000107378e80();
  return;
}



/* Entry: 107376a38; end: 107376a43;  */

undefined ** FUN_107376a38(void)

{
  return &PTR_DAT_1109a69a0;
}



/* Entry: 107376a44; end: 107376aab;  */

undefined8 * FUN_107376a44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6940;
  func_0x0001073752b4(param_1 + 1);
  return param_1;
}



/* Entry: 107376aac; end: 107376acb;  */

long * FUN_107376aac(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107376abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x000107379398(&PTR_FUN_1109a69c0);
  return plVar1;
}



/* Entry: 107376acc; end: 107376acf;  */

undefined8 FUN_107376acc(undefined8 param_1)

{
  func_0x000107379398(&PTR_FUN_1109a69c0);
  return param_1;
}


