/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10882bac8; end: 10882badb;  */

void FUN_10882bac8(void)

{
  FUN_10882badc();
  return;
}



/* Entry: 10882badc; end: 10882bb3f;  */

long FUN_10882badc(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010882f538();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x000107c339d4(unaff_x20);
    unaff_x20 = lStack_38 + 0x18;
    lStack_38 = unaff_x20;
  }
  uStack_48 = 1;
  func_0x0001052bfec8(auStack_60);
  return unaff_x20;
}



/* Entry: 10882bb40; end: 10882bb67;  */

void FUN_10882bb40(void)

{
  uint extraout_w8;
  
  func_0x000107c33b68();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001052bfc50();
  }
  return;
}



/* Entry: 10882bb68; end: 10882bb97;  */

long FUN_10882bb68(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10882bb98(param_1);
  }
  return param_1;
}



/* Entry: 10882bb98; end: 10882bbb7;  */

void FUN_10882bb98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    func_0x0001052c283c();
  }
  return;
}



/* Entry: 10882bbb8; end: 10882bc33;  */

void FUN_10882bbb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x48;
    func_0x0001052c283c();
  }
  return;
}



/* Entry: 10882bc34; end: 10882bc47;  */

void FUN_10882bc34(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010882bc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 10882bc48; end: 10882bc67;  */

void FUN_10882bc48(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10882bc6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10882bc68; end: 10882bc6b;  */

void FUN_10882bc68(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10882bc6c; end: 10882bc8f;  */

long FUN_10882bc6c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33a24();
  func_0x0001052c2794();
  lVar1 = unaff_x19;
  func_0x000104bfa5f0();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10882bc90; end: 10882bcc7;  */

void FUN_10882bc90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010882bca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10882bcc8; end: 10882bceb;  */

void FUN_10882bcc8(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10882bcec; end: 10882bd23;  */

void FUN_10882bcec(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10882bd24; end: 10882bdd3;  */

void FUN_10882bd24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x9;
  long lVar2;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_1[2];
  lVar3 = *(long *)(lVar4 + 0x160);
  puVar1 = param_1;
  func_0x000107c33a8c();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a78660;
  puVar1[3] = &PTR_DAT_110a786b0;
  lVar2 = param_1[4];
  uVar5 = param_1[3];
  puVar1[5] = param_1[4];
  puVar1[4] = uVar5;
  if (lVar2 != 0) {
    do {
      func_0x000107c33900();
    } while (extraout_w12 != 0);
  }
  lVar2 = *(long *)(lVar4 + 0x208);
  uVar5 = *(undefined8 *)(lVar4 + 0x200);
  puVar1[7] = *(undefined8 *)(lVar4 + 0x208);
  puVar1[6] = uVar5;
  if (lVar2 != 0) {
    do {
      func_0x000107c33900();
    } while (extraout_w12_00 != 0);
  }
  do {
    func_0x000107c33b34();
  } while (extraout_w11 != 0);
  uStack_38 = *(undefined8 *)(lVar3 + 0x10);
  uStack_40 = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = extraout_x9;
  *(undefined8 **)(lVar3 + 0x10) = puVar1;
  func_0x000107c27a70(&uStack_40);
  func_0x00010882f7f0();
  return;
}



/* Entry: 10882bdd4; end: 10882bdd7;  */

void FUN_10882bdd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a78660;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10882bdd8; end: 10882bdeb;  */

void FUN_10882bdd8(void)

{
  FUN_10882c370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882bdec; end: 10882bdf7;  */

void FUN_10882bdec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10882bdf8; end: 10882be0b;  */

void FUN_10882bdf8(void)

{
  FUN_10882c164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882be0c; end: 10882bfdb;  */

undefined1 *
FUN_10882be0c(code *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **in_register_00005008;
  undefined1 auStack_1f0 [40];
  undefined1 auStack_1c8 [72];
  code *pcStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  undefined1 *puStack_150;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  code **ppcStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [32];
  code *pcStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined1 *puStack_60;
  
  puVar2 = auStack_f0;
  puVar3 = auStack_f0;
  lVar8 = param_4;
  func_0x00010882e3b0();
  lVar6 = *(long *)(param_2 + 0x18);
  func_0x00010882f400(*(undefined8 *)(param_2 + 0x10));
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882f76c();
  func_0x000107c28b70(auStack_c8,param_4);
  puVar1 = auStack_b0;
  func_0x000108684e9c(puVar1,param_5);
  func_0x000107c28150();
  lVar5 = *(long *)(lVar6 + 0x10);
  func_0x00010882fc8c();
  lVar7 = *(long *)(lVar5 + 0x70);
  pcStack_90 = FUN_10882c194;
  ppuStack_88 = &PTR_FUN_110a786e8;
  func_0x000107c33a84();
  func_0x00010882edd8();
  func_0x00010882f5bc();
  func_0x000107c28b70(param_4 + 0x28,auStack_c8);
  func_0x000108684e9c(param_4 + 0x40,auStack_b0);
  lStack_80 = param_4;
  puStack_60 = puVar1;
  func_0x000107c28154(lVar5 + 0x48,&pcStack_90);
  func_0x000107c33880(ppuStack_88);
  func_0x00010882f660();
  if (lVar7 == 0) {
    func_0x00010882fa44();
    pcStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c339ac();
    (*extraout_x8_01)();
    func_0x000107c27e74(&pcStack_90);
  }
  func_0x00010882c254();
  func_0x00010882e28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_90);
    func_0x00010882c254();
    func_0x00010882edf0();
    puVar1 = auStack_1f0;
    puVar4 = auStack_1f0;
    pcStack_f8 = FUN_10882bfdc;
    puStack_140 = auStack_f0;
    lStack_138 = lVar7;
    puStack_130 = auStack_f0;
    lStack_128 = lVar5;
    lStack_120 = lVar6;
    ppcStack_118 = &pcStack_90;
    lStack_110 = param_4;
    puStack_108 = puVar2;
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x00010882e3b0();
    lVar6 = *(long *)(puVar3 + 0x18);
    func_0x00010882f400(*(undefined8 *)(puVar3 + 0x10));
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882f76c();
    puVar2 = auStack_1c8;
    FUN_10882c2f0(puVar2,lVar8);
    func_0x000107c28150();
    lVar6 = *(long *)(lVar6 + 0x10);
    func_0x00010882fc8c();
    lVar8 = *(long *)(lVar6 + 0x70);
    pcStack_180 = FUN_10882c284;
    ppuStack_178 = &PTR_FUN_110a78700;
    func_0x000107c33a44();
    func_0x00010882edd8();
    func_0x00010882f5bc();
    FUN_10882c2f0(param_4 + 0x28,auStack_1c8);
    lStack_170 = param_4;
    puStack_150 = puVar2;
    func_0x000107c28154(lVar6 + 0x48,&pcStack_180);
    func_0x000107c33880(ppuStack_178);
    func_0x00010882f660();
    if (lVar8 == 0) {
      func_0x00010882fa44();
      pcStack_180 = param_1;
      ppuStack_178 = in_register_00005008;
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c339ac();
      (*extraout_x8_04)();
      func_0x000107c27e74(&pcStack_180);
    }
    FUN_10882c348();
    func_0x00010882e28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107c27e74(&pcStack_180);
      FUN_10882c348(auStack_1f0);
      func_0x00010882edf0();
      func_0x000107c3392c(&PTR_DAT_110a786b0);
      func_0x000107c27a70(param_4);
      return puVar4;
    }
    return puVar1;
  }
  return puVar2;
}



/* Entry: 10882bfdc; end: 10882c163;  */

undefined1 * FUN_10882bfdc(code *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined **in_register_00005008;
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [72];
  code *pcStack_90;
  undefined **ppuStack_88;
  
  puVar1 = auStack_100;
  puVar2 = auStack_100;
  func_0x00010882e3b0();
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010882f400(*(undefined8 *)(param_2 + 0x10));
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882f76c();
  FUN_10882c2f0(auStack_d8,param_4);
  func_0x000107c28150();
  lVar3 = *(long *)(lVar3 + 0x10);
  func_0x00010882fc8c();
  lVar4 = *(long *)(lVar3 + 0x70);
  pcStack_90 = FUN_10882c284;
  ppuStack_88 = &PTR_FUN_110a78700;
  func_0x000107c33a44();
  func_0x00010882edd8();
  func_0x00010882f5bc();
  FUN_10882c2f0(unaff_x20 + 0x28,auStack_d8);
  func_0x000107c28154(lVar3 + 0x48,&pcStack_90);
  func_0x000107c33880(ppuStack_88);
  func_0x00010882f660();
  if (lVar4 == 0) {
    func_0x00010882fa44();
    pcStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c339ac();
    (*extraout_x8_01)();
    func_0x000107c27e74(&pcStack_90);
  }
  FUN_10882c348();
  func_0x00010882e28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_90);
    FUN_10882c348(auStack_100);
    func_0x00010882edf0();
    func_0x000107c3392c(&PTR_DAT_110a786b0);
    func_0x000107c27a70();
    return puVar2;
  }
  return puVar1;
}



/* Entry: 10882c164; end: 10882c193;  */

undefined8 FUN_10882c164(undefined8 param_1)

{
  func_0x000107c3392c(&PTR_DAT_110a786b0);
  func_0x000107c27a70();
  return param_1;
}



/* Entry: 10882c194; end: 10882c1df;  */

void FUN_10882c194(void)

{
  code *extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010882ed48();
  FUN_10882c1e0();
  if (uStack_30 != 0) {
    func_0x000107c339ac();
    (*extraout_x8)();
  }
  func_0x00010882f7f0();
  return;
}



/* Entry: 10882c1e0; end: 10882c20b;  */

void FUN_10882c1e0(long param_1)

{
  long unaff_x19;
  
  func_0x00010882faa4();
  if (param_1 != 0) {
    func_0x00010882fcd0();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010882feac();
    }
  }
  return;
}



/* Entry: 10882c20c; end: 10882c22b;  */

void FUN_10882c20c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010882c254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10882c22c; end: 10882c22f;  */

void FUN_10882c22c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10882c230; end: 10882c283;  */

void FUN_10882c230(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10882c284; end: 10882c2cb;  */

void FUN_10882c284(void)

{
  code *extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010882ed48();
  FUN_10882c1e0();
  if (uStack_30 != 0) {
    func_0x000107c33a5c();
    (*extraout_x8)();
  }
  func_0x00010882f7f0();
  return;
}



/* Entry: 10882c2cc; end: 10882c2eb;  */

void FUN_10882c2cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10882c348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10882c2ec; end: 10882c2ef;  */

void FUN_10882c2ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10882c2f0; end: 10882c347;  */

void FUN_10882c2f0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c33990();
  func_0x000107c33c64();
  if ((bool)in_ZR) {
    func_0x000107c33be4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  func_0x000107c28b70(unaff_x19 + 0x20,unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  return;
}



/* Entry: 10882c348; end: 10882c36f;  */

long FUN_10882c348(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882ef64();
  func_0x000104be7830();
  func_0x00010882ee28();
  lVar1 = unaff_x19;
  func_0x000107c3398c();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10882c370; end: 10882c3b3;  */

void FUN_10882c370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a78660;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10882c3b4; end: 10882c4ef;  */

void FUN_10882c3b4(long param_1)

{
  bool bVar1;
  int iVar2;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar3 + 0x37c) == '\x01') {
    bVar1 = *(int *)(lVar3 + 0x378) == 2;
  }
  else {
    bVar1 = false;
  }
  iVar2 = (int)*(undefined8 *)(lVar3 + 0x1a0);
  func_0x000107c339ac();
  (*extraout_x8)();
  if ((iVar2 == 0) || (!bVar1)) {
    if (iVar2 == 0) {
      if (bVar1) {
        func_0x00010882feb8();
        if (extraout_x8_02 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_01 != 0);
        }
        FUN_10882c4f0(*(undefined8 *)(lVar3 + 0x200));
      }
      else {
        func_0x00010882feb8();
        if (extraout_x8_03 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_02 != 0);
        }
        FUN_10882c4f0(*(undefined8 *)(lVar3 + 0x200));
      }
    }
    else {
      func_0x00010882feb8();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_00 != 0);
      }
      FUN_10882c4f0(*(undefined8 *)(lVar3 + 0x200));
    }
  }
  else {
    func_0x00010882feb8();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10 != 0);
    }
    FUN_10882c4f0(*(undefined8 *)(lVar3 + 0x200));
  }
  func_0x00010882f6c8();
  return;
}



/* Entry: 10882c4f0; end: 10882c5df;  */

void FUN_10882c4f0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lVar1;
  undefined8 uStack_78;
  
  func_0x000107c3378c();
  if (param_3 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar1 = unaff_x19[2];
  func_0x00010882fc84();
  lVar1 = *(long *)(lVar1 + 0x70);
  func_0x00010882f620(FUN_10882c5e0);
  func_0x00010882f614();
  func_0x00010882e844(uStack_78);
  func_0x00010882f658();
  if (lVar1 == 0) {
    param_1 = *unaff_x19;
    if (unaff_x19[3] != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c339ac();
    func_0x00010882fbdc();
    func_0x00010882f634();
  }
  func_0x00010882f6c8();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882ee1c();
    func_0x000107c27e74();
    func_0x00010882f6c8();
    func_0x00010882edf0();
                    /* WARNING: Could not recover jumptable at 0x00010882c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10882c5e0; end: 10882c643;  */

void FUN_10882c5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010882c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 10882c644; end: 10882c78b;  */

void FUN_10882c644(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long lVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 auStack_a8 [2];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_38;
  
  func_0x000107c3380c();
  lVar2 = **(long **)*param_1;
  uStack_38 = extraout_x8;
  func_0x000107c278b8(&pcStack_98,&UNK_10f4bc728);
  func_0x000107c3146c(auStack_a8,&pcStack_98,2,4,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_d0,lVar2 + 8);
  uStack_b8 = *(undefined8 *)(lVar2 + 0xe0);
  lStack_b0 = *(long *)(lVar2 + 0xe8);
  if (lStack_b0 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  pcStack_98 = FUN_10882c7b4;
  ppuStack_90 = &PTR_DAT_110a78868;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  func_0x00010882ff0c(uStack_b8);
  uStack_b8 = 0;
  lStack_b0 = 0;
  func_0x000107c33a10();
  (*extraout_x8_00)(auStack_a8[0],&pcStack_98);
  func_0x000107c33880(ppuStack_90);
  FUN_10880d940(&uStack_d0);
  func_0x000107c27c20(auStack_a8);
  func_0x000107c337a8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c33880(ppuStack_90);
    FUN_10880d940(&uStack_d0);
    puVar1 = auStack_a8;
    func_0x000107c27c20();
    func_0x00010882edf0();
                    /* WARNING: Could not recover jumptable at 0x00010882c79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar1[2] + 0x1f0) + 0x88))();
    return;
  }
  return;
}



/* Entry: 10882c78c; end: 10882c7b3;  */

void FUN_10882c78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010882c79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x1f0) + 0x88))();
  return;
}



/* Entry: 10882c7b4; end: 10882c943;  */

void FUN_10882c7b4(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long **pplVar2;
  long unaff_x19;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [96];
  undefined8 uStack_e8;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  func_0x000107c3378c();
  func_0x000107c292ac(aplStack_b8,param_1 + 0x28);
  if (aplStack_b8[0] != (long *)0x0) {
    plVar1 = (long *)(unaff_x19 + 0x10);
    if (*(char *)(unaff_x19 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    _stat(plVar1,auStack_148);
    if ((int)plVar1 == 0) {
      func_0x000107c33ac8();
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar1 = (long)&PTR_FUN_110a787b8;
      pcStack_78 = FUN_10882c964;
      ppuStack_70 = &PTR_FUN_110a787f8;
      uStack_68 = uStack_e8;
      plVar1[3] = (long)&PTR_DAT_110a78848;
      plVar1[4] = (long)FUN_10882c964;
      uStack_a8 = 0x10882c9c4;
      ppuStack_a0 = &PTR_DAT_110a78818;
      func_0x000107c27cf8(plVar1 + 5,&ppuStack_70);
      FUN_1080dea64(plVar1 + 10,&uStack_a8);
      func_0x00010882ea7c(ppuStack_a0);
      func_0x000107c33880(ppuStack_70);
      puStack_158 = plVar1 + 3;
      puStack_150 = plVar1;
      func_0x00010882ca3c(0);
      (**(code **)(*aplStack_b8[0] + 0x2f8))(aplStack_b8[0],&puStack_158);
      func_0x00010881e060(&puStack_158);
    }
  }
  func_0x000107c2911c(aplStack_b8);
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010881e060(&puStack_158);
  pplVar2 = aplStack_b8;
  func_0x000107c2911c();
  func_0x00010882edf8();
  *pplVar2 = (long *)&PTR_FUN_110a787b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10882c944; end: 10882c947;  */

void FUN_10882c944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a787b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10882c948; end: 10882c95b;  */

void FUN_10882c948(void)

{
  FUN_10882ca30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882c95c; end: 10882c963;  */

void FUN_10882c95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10882c964; end: 10882c99f;  */

/* WARNING: Possible PIC construction at 0x00010882c97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010882c980) */

void FUN_10882c964(undefined8 param_1,long param_2)

{
  long extraout_x8;
  
  func_0x0001005ed310(0x29,(long)*(int *)(param_2 + 0x10));
  func_0x0001005ed358();
  func_0x0001005f4a10();
  func_0x000100693a78(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x0001005ed374();
  return;
}



/* Entry: 10882c9a0; end: 10882c9d7;  */

void FUN_10882c9a0(void)

{
  return;
}



/* Entry: 10882c9d8; end: 10882c9eb;  */

void FUN_10882c9d8(void)

{
  FUN_10882c9ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882c9ec; end: 10882ca2f;  */

undefined8 * FUN_10882c9ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a78848;
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10882ca30; end: 10882ca83;  */

void FUN_10882ca30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a787b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10882ca84; end: 10882caef;  */

void FUN_10882ca84(long param_1)

{
  long lVar1;
  
  func_0x00010882fbd4();
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010882f1c0();
  func_0x00010882f2ac();
  func_0x00010880d330(lVar1 + 0x20);
  func_0x00010882f78c();
  *(undefined1 *)(lVar1 + 0x50) = 1;
  func_0x00010882f068();
  func_0x00010882eed8();
  func_0x00010882f040();
  return;
}



/* Entry: 10882caf0; end: 10882cb17;  */

void FUN_10882caf0(void)

{
  func_0x000107c33a60();
  func_0x000107c27f9c();
  func_0x00010882f2ac();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882cb18; end: 10882cb73;  */

void FUN_10882cb18(long param_1)

{
  func_0x000107c28834(param_1 + 0x38);
  func_0x00010882f0d0();
  func_0x00010882efec();
  func_0x00010882fcb0();
  func_0x00010882f068();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882cb74; end: 10882cb9f;  */

void FUN_10882cb74(void)

{
  func_0x000107c33b18();
  func_0x000107c27f9c();
  func_0x00010882efec();
  func_0x00010882fcb0();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882cba0; end: 10882d2e3;  */

/* WARNING: Possible PIC construction at 0x00010883f0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010883f128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010883f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010883f168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108846ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010882d17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010883dda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003b0628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010883dda8) */
/* WARNING: Removing unreachable block (ram,0x00010883ddc0) */
/* WARNING: Removing unreachable block (ram,0x00010883ddd4) */
/* WARNING: Removing unreachable block (ram,0x00010883de34) */
/* WARNING: Removing unreachable block (ram,0x00010883dddc) */
/* WARNING: Removing unreachable block (ram,0x00010883ddc8) */
/* WARNING: Removing unreachable block (ram,0x00010883ddb4) */
/* WARNING: Removing unreachable block (ram,0x00010883dd90) */
/* WARNING: Removing unreachable block (ram,0x00010883dd94) */
/* WARNING: Removing unreachable block (ram,0x000107c33da0) */
/* WARNING: Removing unreachable block (ram,0x0001005f0bd8) */
/* WARNING: Removing unreachable block (ram,0x00010882d180) */
/* WARNING: Removing unreachable block (ram,0x000108846ef8) */
/* WARNING: Removing unreachable block (ram,0x000108846f04) */
/* WARNING: Removing unreachable block (ram,0x00010883f16c) */
/* WARNING: Removing unreachable block (ram,0x00010883f14c) */
/* WARNING: Removing unreachable block (ram,0x00010883f12c) */
/* WARNING: Removing unreachable block (ram,0x00010883f0cc) */
/* WARNING: Removing unreachable block (ram,0x00010883f104) */
/* WARNING: Removing unreachable block (ram,0x00010883f11c) */
/* WARNING: Removing unreachable block (ram,0x00010883f0e4) */
/* WARNING: Removing unreachable block (ram,0x0001003b062c) */
/* WARNING: Removing unreachable block (ram,0x00010883fd0c) */
/* WARNING: Removing unreachable block (ram,0x000108840fd4) */
/* WARNING: Removing unreachable block (ram,0x000108840fe4) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_10882cba0(uint *******param_1,float param_2,float param_3,undefined **param_4,undefined8 param_5
             ,uint *******param_6,uint *******param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *******pppppppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint ****UNRECOVERED_JUMPTABLE;
  code *pcVar11;
  undefined1 extraout_w8;
  undefined1 uVar12;
  byte bVar13;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  uint uVar14;
  uint extraout_w8_11;
  uint *****pppppuVar15;
  undefined **ppuVar16;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  code *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  long *extraout_x8_13;
  long *extraout_x8_14;
  long *extraout_x8_15;
  long *extraout_x8_16;
  long *extraout_x8_17;
  long *extraout_x8_18;
  long *extraout_x8_19;
  long *extraout_x8_20;
  long *extraout_x8_21;
  long *extraout_x8_22;
  long *extraout_x8_23;
  code *extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  long *extraout_x8_27;
  long *extraout_x8_28;
  long *extraout_x8_29;
  long extraout_x8_30;
  long *extraout_x8_31;
  long *extraout_x8_32;
  long *extraout_x8_33;
  code *extraout_x8_34;
  uint *******extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  uint ******extraout_x8_39;
  code *extraout_x8_40;
  uint ******extraout_x8_41;
  uint ******extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  code *extraout_x8_45;
  undefined8 *extraout_x8_46;
  long extraout_x8_47;
  uint *******extraout_x8_48;
  uint *******extraout_x8_49;
  uint *******extraout_x8_50;
  uint *******extraout_x8_51;
  uint *******extraout_x8_52;
  uint *******extraout_x8_53;
  uint extraout_w9;
  uint *******pppppppuVar17;
  long lVar18;
  uint *******extraout_x9;
  uint *******extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  uint *******pppppppuVar19;
  ulong uVar20;
  long extraout_x9_05;
  uint *******extraout_x9_06;
  uint *******extraout_x9_07;
  uint *******extraout_x9_08;
  uint *******extraout_x9_09;
  uint *******extraout_x9_10;
  uint *******extraout_x9_11;
  uint *******extraout_x9_12;
  uint *******extraout_x9_13;
  long extraout_x9_14;
  uint *******pppppppuVar21;
  uint *******extraout_x9_15;
  uint *******extraout_x9_16;
  long extraout_x9_17;
  uint *******pppppppuVar22;
  uint *******pppppppuVar23;
  long extraout_x9_18;
  long extraout_x9_19;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  int extraout_w10_11;
  uint extraout_w10_12;
  uint extraout_w10_13;
  int extraout_w10_14;
  uint extraout_w10_15;
  uint extraout_w10_16;
  int extraout_w10_17;
  uint extraout_w10_18;
  uint extraout_w10_19;
  int extraout_w10_20;
  uint extraout_w10_21;
  uint extraout_w10_22;
  int extraout_w10_23;
  uint extraout_w10_24;
  uint extraout_w10_25;
  int extraout_w10_26;
  uint extraout_w10_27;
  uint extraout_w10_28;
  int extraout_w10_29;
  uint extraout_w10_30;
  uint extraout_w10_31;
  int extraout_w10_32;
  long lVar24;
  long *extraout_x10;
  long *plVar25;
  long *extraout_x10_00;
  uint *******extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined8 *puVar26;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  ulong extraout_x11_08;
  ulong extraout_x11_09;
  ulong extraout_x11_10;
  ulong extraout_x11_11;
  ulong extraout_x11_12;
  ulong extraout_x11_13;
  ulong extraout_x11_14;
  ulong extraout_x11_15;
  ulong extraout_x11_16;
  ulong extraout_x11_17;
  ulong extraout_x11_18;
  uint ******ppppppuVar27;
  uint *******extraout_x11_19;
  uint *******extraout_x11_20;
  ulong extraout_x11_21;
  ulong extraout_x11_22;
  uint *******extraout_x11_23;
  uint *******extraout_x11_24;
  uint *******extraout_x11_25;
  uint *******extraout_x11_26;
  uint *******extraout_x11_27;
  undefined8 *extraout_x11_28;
  uint ******extraout_x12;
  long *plVar28;
  long extraout_x13;
  uint *******pppppppuVar29;
  uint *******extraout_x14;
  uint *******extraout_x14_00;
  uint ******extraout_x15;
  uint *******extraout_x16;
  undefined **ppuVar30;
  uint *******pppppppuVar31;
  uint ******ppppppuVar32;
  undefined **ppuVar33;
  uint uVar34;
  uint *******unaff_x21;
  uint *******unaff_x22;
  uint *******unaff_x23;
  undefined4 uVar35;
  uint *******unaff_x24;
  uint *******unaff_x25;
  uint *******unaff_x26;
  uint *******unaff_x27;
  undefined8 *unaff_x28;
  uint *******unaff_x29;
  uint *******unaff_x30;
  uint *******pppppppuVar36;
  uint *****pppppuVar37;
  uint ******ppppppuVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  uint *******in_stack_00000000;
  uint *******in_stack_00000008;
  uint *******in_stack_00000010;
  uint *******in_stack_00000018;
  undefined **in_stack_00000020;
  uint *******in_stack_00000028;
  undefined **in_stack_00000030;
  uint *******in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  int iStack000000000000004c;
  uint *******in_stack_00000050;
  uint *******pppppppuStack0000000000000058;
  uint *******in_stack_00000060;
  undefined4 uStack0000000000000068;
  uint uStack000000000000006c;
  uint *******in_stack_00000070;
  uint *******in_stack_00000078;
  uint5 uStack0000000000000080;
  undefined3 uStack0000000000000085;
  uint *******in_stack_00000088;
  uint *******in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined1 uStack00000000000000a8;
  uint ******in_stack_000000d0;
  uint *******in_stack_000000d8;
  undefined8 in_stack_000000e0;
  uint ******in_stack_000000e8;
  undefined **in_stack_000000f0;
  uint *******in_stack_000000f8;
  uint *******in_stack_00000100;
  uint *******in_stack_00000108;
  uint *******in_stack_00000110;
  uint *******in_stack_00000118;
  uint in_stack_00000130;
  uint in_stack_00000150;
  uint *******in_stack_00000160;
  undefined8 in_stack_00000168;
  ulong in_stack_00000170;
  undefined **in_stack_00000180;
  undefined1 in_stack_00000188;
  undefined1 in_stack_00000198;
  undefined8 in_stack_000001d0;
  char in_stack_00000250;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *******pppppppuStack_90;
  undefined1 auStack_78 [8];
  uint ******ppppppuStack_70;
  uint ******ppppppuStack_68;
  uint *******pppppppuStack_60;
  uint *****pppppuStack_58;
  char cStack_50;
  uint ******ppppppuStack_48;
  long in_stack_ffffffffffffffd0;
  uint *******in_stack_ffffffffffffffd8;
  uint *******pppppppuStack_20;
  uint *******pppppppuStack_18;
  uint *******pppppppuStack_10;
  uint *******pppppppuStack_8;
  
  func_0x000107c33c90();
  pppppppuVar31 = (uint *******)in_stack_00000030;
  pppppppuVar29 = in_stack_00000010;
  pppppppuVar23 = (uint *******)&stack0x00000050;
  bVar13 = *(byte *)(param_4 + 0x28);
  ppuVar16 = (undefined **)(ulong)bVar13;
  pppppppuVar22 = (uint *******)&UNK_10df5b974;
  puVar26 = (undefined8 *)(ulong)*(ushort *)(&UNK_10df5b974 + (long)ppuVar16 * 2);
  pppppppuVar17 = (uint *******)((long)puVar26 * 4 + 0x10882cbdc);
  ppuVar33 = &PTR___tlv_bootstrap_11340e278;
  uVar34 = (uint)unaff_x21;
  uVar14 = (uint)unaff_x22;
  pppppppuVar19 = (uint *******)param_4;
  pppppppuVar36 = unaff_x30;
  ppuVar30 = param_4;
  pppppppuVar7 = unaff_x22;
  pppppppuVar21 = pppppppuVar23;
  in_stack_00000050 = unaff_x29;
  switch(bVar13) {
  default:
    func_0x00010882f9bc();
  case 0x2c:
    func_0x00010882f1c0();
    func_0x000107c28288(param_4 + 0x1d);
    pppppppuVar19 = (uint *******)(param_4 + 0x1c);
    func_0x000107c28afc();
    unaff_x21 = (uint *******)param_4[0x27];
code_r0x00010882cbf8:
    *(undefined4 *)(param_4 + 4) = 0x16;
code_r0x00010882cc00:
    param_4[5] = (undefined *)0x0;
    param_4[6] = (undefined *)0x0;
    *(undefined1 *)(param_4 + 7) = 0;
code_r0x00010882cc08:
    func_0x000107c28258();
    param_4[6] = (undefined *)pppppppuVar19;
    bVar13 = 1;
    *(undefined1 *)(param_4 + 7) = 1;
    pppppppuVar22 = (uint *******)unaff_x21[0x20];
code_r0x00010882cc1c:
    *(byte *)(pppppppuVar22 + 7) = bVar13;
    pppppppuVar19 = (uint *******)pppppppuVar22[3];
    func_0x00010882f820();
    func_0x00010882f974();
    func_0x00010882f604();
    do {
      func_0x00010882e6b8();
    } while (extraout_w10 != 0);
    func_0x00010882eaf0();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x00010882e668(1);
      unaff_x22 = (uint *******)*pppppppuVar19;
      if (unaff_x22 == (uint *******)0x0) {
        func_0x000107c3a5c0();
        unaff_x22 = (uint *******)*pppppppuVar19;
      }
      func_0x00010882f3b8();
      plVar28 = extraout_x8;
      do {
        if (*plVar28 == 0) {
          func_0x00010882e74c();
          plVar28 = extraout_x8_01;
          uVar14 = extraout_w10_01;
          uVar5 = extraout_x11_00;
        }
        else {
          func_0x00010882f020();
          plVar28 = extraout_x8_00;
          uVar14 = extraout_w10_00;
          uVar5 = extraout_x11;
        }
        if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
      } while ((uVar14 >> 1 & 1) == 0);
    }
code_r0x00010882cc7c:
    func_0x00010882f1b8();
    func_0x00010882efec();
    func_0x00010882f0a0();
    func_0x00010882fc40();
    pppppppuVar19 = (uint *******)(param_4 + 5);
    func_0x000107c28288();
    func_0x00010882fcc8();
    unaff_x21 = (uint *******)param_4[0x27];
    if (unaff_x21[0x1c] != (uint ******)0x0) {
      func_0x00010882f8d4(0x15);
      param_4[10] = (undefined *)pppppppuVar19;
      func_0x00010882fb20();
      pppppppuVar19 = (uint *******)unaff_x21[0x1c];
      func_0x00010882f96c();
      func_0x00010882f5ec();
      do {
        func_0x00010882e6b8();
      } while (extraout_w10_02 != 0);
      func_0x00010882effc(param_4[0xc]);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(param_4 + 0x28) = 2;
        unaff_x21 = (uint *******)param_4[0xc];
        func_0x00010882e774();
        unaff_x22 = (uint *******)*pppppppuVar19;
code_r0x00010882ccf0:
        if (unaff_x22 == (uint *******)0x0) {
          func_0x000107c3a5c0();
          unaff_x22 = (uint *******)*pppppppuVar19;
        }
        func_0x00010882f3b8();
        plVar28 = extraout_x8_02;
        do {
          if (*plVar28 == 0) {
            func_0x00010882e74c();
            plVar28 = extraout_x8_04;
            uVar14 = extraout_w10_04;
            uVar5 = extraout_x11_02;
          }
          else {
            func_0x00010882f020();
            plVar28 = extraout_x8_03;
            uVar14 = extraout_w10_03;
            uVar5 = extraout_x11_01;
          }
          if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
        } while ((uVar14 >> 1 & 1) == 0);
      }
code_r0x00010882cd20:
      func_0x00010882f5fc();
      func_0x00010882f0a0();
      func_0x00010882f964();
      func_0x00010882fc4c();
      pppppppuVar19 = (uint *******)(param_4 + 9);
      func_0x000107c28288();
      func_0x00010882f3c4();
      unaff_x21 = (uint *******)param_4[0x27];
    }
    if (unaff_x21[0x2e] != (uint ******)0x0) {
      func_0x00010882f5d0(0x17);
      func_0x000107c33a20();
      func_0x00010882f6ec(unaff_x21[0x2e]);
      (*extraout_x8_05)();
      pppppppuVar19 = unaff_x21 + 0x2e;
      func_0x00010880d34c();
      func_0x000107c33c1c();
      func_0x00010882fa20();
      unaff_x21 = (uint *******)param_4[0x27];
      unaff_x22 = (uint *******)register0x00000008;
    }
    if (unaff_x21[0x22] != (uint ******)0x0) {
      func_0x00010882f8d4(0x1a);
      param_4[10] = (undefined *)pppppppuVar19;
      func_0x00010882fb20();
      pppppppuVar19 = (uint *******)unaff_x21[0x22][3];
      *(undefined1 *)(unaff_x21[0x22] + 7) = extraout_w8;
      func_0x00010882f820();
      func_0x00010882f96c();
      func_0x00010882f5ec();
      do {
        func_0x00010882e6b8();
      } while (extraout_w10_05 != 0);
      func_0x00010882effc(param_4[0xc]);
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(param_4 + 0x28) = 3;
        unaff_x21 = (uint *******)param_4[0xc];
        func_0x00010882e774();
        unaff_x22 = (uint *******)*pppppppuVar19;
        if (unaff_x22 == (uint *******)0x0) {
          func_0x000107c3a5c0();
          unaff_x22 = (uint *******)*pppppppuVar19;
        }
        func_0x00010882f3b8();
        plVar28 = extraout_x8_06;
        do {
          if (*plVar28 == 0) {
            func_0x00010882e74c();
            plVar28 = extraout_x8_08;
            uVar14 = extraout_w10_07;
            uVar5 = extraout_x11_04;
          }
          else {
            func_0x00010882f020();
            plVar28 = extraout_x8_07;
            uVar14 = extraout_w10_06;
            uVar5 = extraout_x11_03;
          }
          if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
        } while ((uVar14 >> 1 & 1) == 0);
      }
code_r0x00010882ce00:
      func_0x00010882f5fc();
      func_0x00010882f0a0();
      func_0x00010882f964();
      func_0x00010882fc28();
      pppppppuVar19 = (uint *******)(param_4 + 9);
      func_0x000107c28288();
      func_0x00010882f3c4();
      unaff_x21 = (uint *******)param_4[0x27];
    }
    if (unaff_x21[0x24] != (uint ******)0x0) {
      *(undefined1 *)(unaff_x21[0x24] + 7) = 1;
      func_0x00010882ee08();
      func_0x00010882f974();
      func_0x00010882f604();
      do {
        func_0x00010882e6b8();
      } while (extraout_w10_08 != 0);
      func_0x00010882eaf0();
      if ((extraout_w8_03 >> 1 & 1) == 0) {
        func_0x00010882e668(4);
        unaff_x22 = (uint *******)*pppppppuVar19;
        if (unaff_x22 == (uint *******)0x0) {
          func_0x000107c3a5c0();
          unaff_x22 = (uint *******)*pppppppuVar19;
        }
        func_0x00010882f3b8();
        plVar28 = extraout_x8_09;
        do {
          if (*plVar28 == 0) {
            func_0x00010882e74c();
            plVar28 = extraout_x8_11;
            uVar14 = extraout_w10_10;
            uVar5 = extraout_x11_06;
          }
          else {
            func_0x00010882f020();
            plVar28 = extraout_x8_10;
            uVar14 = extraout_w10_09;
            uVar5 = extraout_x11_05;
          }
          if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
        } while ((uVar14 >> 1 & 1) == 0);
      }
code_r0x00010882ce8c:
      func_0x00010882f1b8();
      func_0x00010882efec();
      func_0x00010882f0a0();
      func_0x00010882fc34();
    }
    *(undefined4 *)(param_4 + 0x14) = 0x13;
    param_4[0x15] = (undefined *)0x0;
    param_4[0x16] = (undefined *)0x0;
    *(undefined1 *)(param_4 + 0x17) = 0;
    func_0x000107c28258();
    param_4[0x16] = (undefined *)pppppppuVar19;
    *(undefined1 *)(param_4 + 0x17) = 1;
    param_4[8] = param_4[0x24];
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_11 != 0);
    func_0x00010882eaf0();
    if ((extraout_w8_04 >> 1 & 1) == 0) {
      func_0x00010882e668(5);
      unaff_x22 = (uint *******)*pppppppuVar19;
      if (unaff_x22 == (uint *******)0x0) {
        func_0x000107c3a5c0();
        unaff_x22 = (uint *******)*pppppppuVar19;
      }
      func_0x00010882f3b8();
      plVar28 = extraout_x8_12;
      do {
        if (*plVar28 == 0) {
          func_0x00010882e74c();
          plVar28 = extraout_x8_14;
          uVar14 = extraout_w10_13;
          uVar5 = extraout_x11_08;
        }
        else {
          func_0x00010882f020();
          plVar28 = extraout_x8_13;
          uVar14 = extraout_w10_12;
          uVar5 = extraout_x11_07;
        }
        if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
      } while ((uVar14 >> 1 & 1) == 0);
    }
code_r0x00010882cf14:
    func_0x00010882f1b8();
    func_0x00010882efec();
    func_0x000107c28288(param_4 + 0x15);
    pppppppuVar19 = (uint *******)(param_4 + 0x14);
    func_0x000107c28afc();
    *(undefined4 *)(param_4 + 0x10) = 0x14;
    param_4[0x11] = (undefined *)0x0;
    param_4[0x12] = (undefined *)0x0;
    *(undefined1 *)(param_4 + 0x13) = 0;
    func_0x000107c28258();
    param_4[0x12] = (undefined *)pppppppuVar19;
    *(undefined1 *)(param_4 + 0x13) = 1;
    param_4[8] = param_4[0x23];
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_14 != 0);
    func_0x00010882eaf0();
    if ((extraout_w8_05 >> 1 & 1) == 0) {
      func_0x00010882e668(6);
      unaff_x22 = (uint *******)*pppppppuVar19;
      if (unaff_x22 == (uint *******)0x0) {
        func_0x000107c3a5c0();
        unaff_x22 = (uint *******)*pppppppuVar19;
      }
      func_0x00010882f3b8();
      plVar28 = extraout_x8_15;
      do {
        if (*plVar28 == 0) {
          func_0x00010882e74c();
          plVar28 = extraout_x8_17;
          uVar14 = extraout_w10_16;
          uVar5 = extraout_x11_10;
        }
        else {
          func_0x00010882f020();
          plVar28 = extraout_x8_16;
          uVar14 = extraout_w10_15;
          uVar5 = extraout_x11_09;
        }
        if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
      } while ((uVar14 >> 1 & 1) == 0);
    }
code_r0x00010882cfa4:
    func_0x00010882f1b8();
    func_0x00010882efec();
    func_0x000107c28288(param_4 + 0x11);
    pppppppuVar19 = (uint *******)(param_4 + 0x10);
    func_0x000107c28afc();
    param_4[8] = param_4[0x22];
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_17 != 0);
    func_0x00010882eaf0();
    if ((extraout_w8_06 >> 1 & 1) == 0) {
      func_0x00010882e668(7);
      unaff_x22 = (uint *******)*pppppppuVar19;
      if (unaff_x22 == (uint *******)0x0) {
        func_0x000107c3a5c0();
        unaff_x22 = (uint *******)*pppppppuVar19;
      }
      func_0x00010882f3b8();
      plVar28 = extraout_x8_18;
      do {
        if (*plVar28 == 0) {
          func_0x00010882e74c();
          plVar28 = extraout_x8_20;
          uVar14 = extraout_w10_19;
          uVar5 = extraout_x11_12;
        }
        else {
          func_0x00010882f020();
          plVar28 = extraout_x8_19;
          uVar14 = extraout_w10_18;
          uVar5 = extraout_x11_11;
        }
        if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
      } while ((uVar14 >> 1 & 1) == 0);
    }
code_r0x00010882d014:
    func_0x00010882f1b8();
    func_0x00010882efec();
    *(undefined4 *)(param_4 + 0xc) = 0x1b;
    param_4[0xd] = (undefined *)0x0;
    param_4[0xe] = (undefined *)0x0;
    *(undefined1 *)(param_4 + 0xf) = 0;
    func_0x000107c28258();
    param_4[0xe] = (undefined *)pppppppuVar19;
    *(undefined1 *)(param_4 + 0xf) = 1;
    param_4[8] = param_4[0x21];
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_20 != 0);
    func_0x00010882eaf0();
    if ((extraout_w8_07 >> 1 & 1) == 0) {
      func_0x00010882e668(8);
      unaff_x22 = (uint *******)*pppppppuVar19;
      if (unaff_x22 == (uint *******)0x0) {
        func_0x000107c3a5c0();
        unaff_x22 = (uint *******)*pppppppuVar19;
      }
      func_0x00010882f3b8();
      plVar28 = extraout_x8_21;
      do {
        if (*plVar28 == 0) {
          func_0x00010882e74c();
          plVar28 = extraout_x8_23;
          uVar14 = extraout_w10_22;
          uVar5 = extraout_x11_14;
        }
        else {
          func_0x00010882f020();
          plVar28 = extraout_x8_22;
          uVar14 = extraout_w10_21;
          uVar5 = extraout_x11_13;
        }
        if ((uVar5 & 1) != 0) goto code_r0x00010882d1a8;
      } while ((uVar14 >> 1 & 1) == 0);
    }
code_r0x00010882d094:
    func_0x00010882f1b8();
    func_0x00010882efec();
    ppppppuVar32 = (uint ******)param_4[0x27];
    pppppuVar37 = ppppppuVar32[0x53];
    pppppuVar15 = ppppppuVar32[0x52];
    func_0x00010882fa04();
    ppppppuVar32[0x53] = pppppuVar37;
    ppppppuVar32[0x52] = pppppuVar15;
    func_0x000107c29d04();
    func_0x00010880d314(ppppppuVar32 + 0x22);
    func_0x000107c28288(param_4 + 0xd);
    func_0x000107c28afc(param_4 + 0xc);
    func_0x00010882f45c();
    func_0x00010882f430();
    func_0x00010882ebf8();
    func_0x000107c33a5c(unaff_x22[0x36]);
    (*extraout_x8_24)();
    func_0x00010882f2bc();
    func_0x00010882f3c4();
    func_0x000107c339ac(*(uint ******)((long)param_4[0x27] + 0x1c0));
    (*extraout_x8_25)();
    pppppppuVar19 = *(uint ********)((long)param_4[0x27] + 0x1e0);
    func_0x000107c33b0c();
    (*extraout_x8_26)();
    param_4[0x26] = param_4[0x25];
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_23 != 0);
    func_0x00010882effc(param_4[0x26]);
    if ((extraout_w8_08 >> 1 & 1) == 0) {
      *(undefined1 *)(param_4 + 0x28) = 9;
      unaff_x21 = (uint *******)param_4[0x26];
      func_0x00010882e774();
      ppuVar33 = (undefined **)*pppppppuVar19;
      if ((uint *******)ppuVar33 == (uint *******)0x0) {
        func_0x000107c3a5c0();
        ppuVar33 = (undefined **)*pppppppuVar19;
      }
      func_0x00010882f3b8();
      plVar28 = extraout_x8_27;
      do {
        if (*plVar28 == 0) {
          func_0x00010882e74c();
          plVar28 = extraout_x8_29;
          uVar14 = extraout_w10_25;
          uVar5 = extraout_x11_16;
        }
        else {
          func_0x00010882f020();
          plVar28 = extraout_x8_28;
          uVar14 = extraout_w10_24;
          uVar5 = extraout_x11_15;
        }
        if ((uVar5 & 1) != 0) {
          func_0x00010882fe64();
          if ((bool)in_ZR) {
            func_0x00010882e988();
            func_0x00010882e484();
            func_0x00010882e380();
            unaff_x21[0x12] = (uint ******)pppppppuVar19;
          }
          func_0x00010882fe78();
          goto code_r0x0001005671d8;
        }
      } while ((uVar14 >> 1 & 1) == 0);
    }
code_r0x00010882d170:
    func_0x000107c28834(param_4 + 0x26);
    pppppppuVar22 = (uint *******)(param_4 + 0x26);
    pppppppuStack_8 = (uint *******)0x10882d180;
    pppppppuStack_18 = (uint *******)param_4;
code_r0x00010054ebfc:
    ppppppuVar32 = *pppppppuVar22;
    if (ppppppuVar32 != (uint ******)0x0) {
      ppppppuVar27 = ppppppuVar32 + 1;
      do {
        pppppuVar15 = *ppppppuVar27;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
        if (bVar3) {
          *ppppppuVar27 = (uint *****)((long)pppppuVar15 + -4);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (((ulong)pppppuVar15 & 0x1fffffffc) == 4) {
        unaff_x30 = (uint *******)0x0;
        pppppppuStack_20 = (uint *******)ppuVar33;
        pppppppuStack_10 = pppppppuVar23;
        (*(code *)(*ppppppuVar32)[2])(ppppppuVar32,0,pppppppuVar22);
        do {
          pppppuVar15 = *ppppppuVar27;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
          if (bVar3) {
            *ppppppuVar27 = (uint *****)((long)pppppuVar15 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((uint *****)((long)pppppuVar15 + -1) == (uint *****)0x0) {
          (*(code *)(*ppppppuVar32)[1])(ppppppuVar32);
        }
      }
    }
    auVar41._8_8_ = unaff_x30;
    auVar41._0_8_ = pppppppuVar22;
    return auVar41;
  case 1:
    goto code_r0x00010882cc7c;
  case 2:
    goto code_r0x00010882cd20;
  case 3:
    goto code_r0x00010882ce00;
  case 4:
    goto code_r0x00010882ce8c;
  case 5:
    goto code_r0x00010882cf14;
  case 6:
    goto code_r0x00010882cfa4;
  case 7:
    goto code_r0x00010882d014;
  case 8:
    goto code_r0x00010882d094;
  case 9:
    goto code_r0x00010882d170;
  case 10:
    goto code_r0x00010882cc00;
  case 0xb:
    in_stack_00000030 = (undefined **)pppppppuVar23;
    in_stack_00000038 = unaff_x30;
    if (((ulong)param_4[8] & 1) == 0) {
      pppppppuVar22 = (uint *******)(param_4 + 4);
      FUN_10880e0c8(param_4 + 7);
      param_4[6] = param_4[7];
      do {
        func_0x00010882e6b8();
      } while (extraout_w10_26 != 0);
      func_0x00010882effc(param_4[6]);
      if ((extraout_w8_09 >> 1 & 1) == 0) {
        *(undefined1 *)(param_4 + 8) = 1;
        ppppppuVar32 = (uint ******)param_4[6];
        func_0x00010882e57c();
        if (*pppppppuVar22 == (uint ******)0x0) {
          func_0x000107c3a5c0();
        }
        func_0x00010882f560();
        plVar28 = extraout_x8_31;
        do {
          if (*plVar28 == 0) {
            func_0x00010882e74c();
            plVar28 = extraout_x8_33;
            uVar14 = extraout_w10_28;
            uVar5 = extraout_x11_18;
          }
          else {
            func_0x00010882f020();
            plVar28 = extraout_x8_32;
            uVar14 = extraout_w10_27;
            uVar5 = extraout_x11_17;
          }
          if ((uVar5 & 1) != 0) {
            func_0x00010882e94c();
            if ((bool)in_ZR) {
              func_0x00010882e988();
              func_0x00010882e484();
              func_0x00010882e380();
              ppppppuVar32[0x12] = (uint *****)pppppppuVar22;
            }
            func_0x00010882e2a4();
            auVar44._8_8_ = unaff_x30;
            auVar44._0_8_ = pppppppuVar22;
            return auVar44;
          }
        } while ((uVar14 >> 1 & 1) == 0);
      }
    }
    func_0x000107c28834(param_4 + 6);
    func_0x00010882f44c();
    func_0x00010882f0d0();
    func_0x00010882f068();
    func_0x00010882eed8();
    goto code_r0x00010bdbd7ac;
  case 0xc:
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    puVar8 = &stack0x000000b8;
    pppppppuStack_18 = (uint *******)param_4;
    pppppppuStack_10 = pppppppuVar23;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (puVar8);
    auVar96._8_8_ = unaff_x30;
    auVar96._0_8_ = puVar8;
    return auVar96;
  case 0xd:
    auVar58._8_8_ = unaff_x30;
    auVar58._0_8_ = param_4;
    return auVar58;
  case 0xe:
    auVar57._8_8_ = unaff_x30;
    auVar57._0_8_ = &stack0x00001680;
    return auVar57;
  case 0xf:
  case 0x32:
  case 0x57:
  case 0xb1:
    goto code_r0x000108839d14;
  case 0x10:
  case 0x33:
  case 0x58:
  case 0xb2:
    unaff_x30 = *(uint ********)((ulong)unaff_x30 & 0xfffffffffffffffe);
    pppppppuVar22 = (uint *******)(param_4 + 5);
    goto SUB_107c30250;
  case 0x11:
  case 0x34:
  case 0x59:
  case 0xb3:
  case 0xe9:
    goto code_r0x000108848d60;
  case 0x12:
  case 0x35:
  case 0x5a:
  case 0xed:
    auVar86._0_8_ = (long)ppuVar16 * 0x10df5b974;
    auVar86[8] = (uint *******)ppuVar16 != (uint *******)0x0;
    auVar86._9_7_ = 0;
    return auVar86;
  case 0x13:
  case 0x36:
  case 0x5b:
  case 0xee:
    goto code_r0x000108849970;
  case 0x14:
  case 0x37:
  case 0x5c:
  case 0x98:
  case 0xef:
    goto code_r0x0001088451a8;
  case 0x15:
  case 0x38:
  case 0x5d:
  case 0xf0:
    in_stack_00000038 = *(uint ********)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c27994(&stack0x00000020);
    func_0x00010868c9c4(&stack0x00000048,&stack0x00000020,1);
    in_stack_00000030 = (undefined **)0x0;
    in_stack_00000038 = (uint *******)0x0;
    _uStack0000000000000040 = (uint *******)0x0;
    param_4 = ppuVar16;
  case 0x99:
    in_stack_00000020 = (undefined **)0x0;
    in_stack_00000028 = (uint *******)0x0;
    in_stack_00000010 = (uint *******)0x0;
    in_stack_00000018 = (uint *******)0x0;
    in_stack_00000000 = (uint *******)0x0;
    in_stack_00000008 = (uint *******)0x0;
    puVar26 = (undefined8 *)&stack0x00000048;
    func_0x0001052916b0(param_4,puVar26,&stack0x00000030,&stack0x00000018);
    func_0x000104bee7a0();
    func_0x000104bee7dc(&stack0x00000018);
    func_0x000104bee864(&stack0x00000030);
    func_0x000107c27a04(&stack0x00000048);
    puVar9 = &stack0x00000020;
    func_0x000107c27914();
    if (*(uint ********)PTR____stack_chk_guard_11034bdc0 == in_stack_00000038) {
      auVar50._8_8_ = puVar26;
      auVar50._0_8_ = puVar9;
      return auVar50;
    }
    ___stack_chk_fail();
    puVar10 = &stack0x00000020;
    func_0x000107c27914(puVar10);
    func_0x000108847dfc();
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    pppppppuStack_8 = (uint *******)FUN_108847238;
    pppppppuStack_18 = (uint *******)puVar9;
    pppppppuStack_10 = pppppppuVar23;
    func_0x000108847f44();
    func_0x000107c33f94();
    func_0x000107c27914();
    auVar56._8_8_ = puVar26;
    auVar56._0_8_ = puVar10;
    return auVar56;
  case 0x16:
  case 0x39:
  case 0x5e:
  case 0xf1:
    goto code_r0x000108846994;
  case 0x17:
  case 0xf2:
    func_0x000107c279d4();
    in_stack_00000070 = (uint *******)CONCAT71(in_stack_00000070._1_7_,1);
    ppppppuVar32 = unaff_x22[0x14];
    func_0x00010883cbbc(unaff_x22[0x17]);
    (*extraout_x8_34)();
    uStack0000000000000080 = (uint5)uVar34;
    in_stack_00000078 = (uint *******)ppppppuVar32;
    func_0x00010883cda8();
    func_0x00010883cc44();
    auVar65._1_7_ = 0;
    auVar65[0] = param_4 == &PTR___tlv_bootstrap_11340e278;
    auVar65._8_8_ = unaff_x30;
    return auVar65;
  case 0x18:
  case 0x27:
  case 0xf3:
    in_stack_00000018 = (uint *******)0x0;
    in_stack_00000020 = (undefined **)0x0;
    in_stack_00000030 = (undefined **)0x0;
    in_stack_00000038 = (uint *******)0x0;
    in_stack_00000010 = (uint *******)((ulong)in_stack_00000010 & 0xffffffff);
    in_stack_00000028 = (uint *******)((ulong)in_stack_00000028 & 0xffffffff);
    _uStack0000000000000040 = (uint *******)((ulong)_uStack0000000000000040 & 0xffffffff);
  case 0x22:
  case 0x85:
LAB_108846190:
code_r0x000108846194:
code_r0x0001088461a4:
    pppppuStack_58._0_1_ = 0;
code_r0x0001088461a8:
code_r0x0001088461ac:
    if (((uint)ppuVar16 >> 7 & 1) != 0) {
code_r0x0001088461b0:
      func_0x000107c29ee0(&stack0x000000c8,CONCAT44(uRam000000011340e31c,uRam000000011340e318));
      FUN_10869026c(&pppppuStack_58,&stack0x000000c8);
      func_0x000107c27914(&stack0x000000c8);
    }
    FUN_1088479f4(&stack0x000000c8);
    in_stack_000000e8 = (uint ******)((long)unaff_x25 / 1000);
    in_stack_000000f8 = (uint *******)CONCAT44(in_stack_000000f8._4_4_,2);
    in_stack_00000100 = (uint *******)(ulong)(uVar14 ^ 1);
    in_stack_00000108 = (uint *******)CONCAT71(in_stack_00000108._1_7_,1);
    in_stack_000000f0 = (undefined **)in_stack_000000e8;
    func_0x000107c27f70(&stack0x000000a8,uRam000000011340e2d8 & 0xfffffffffffffffc);
    func_0x000107c27c5c(&stack0x00000110,&stack0x000000a8);
    in_stack_00000130 = (uint)(iRam000000011340e368 == 1);
    func_0x000107c29e30();
    func_0x000107c295bc(&stack0x00000180,&stack0xffffffffffffffc8);
    in_stack_00000090 = (uint *******)0x0;
    in_stack_00000098 = 0;
    in_stack_000000a0 = 0;
    func_0x000107c295bc(&stack0x00000198,&stack0x00000090);
    in_stack_00000070 = (uint *******)((ulong)in_stack_00000070 & 0xffffffffffffff00);
    in_stack_00000088 = (uint *******)((ulong)in_stack_00000088 & 0xffffffffffffff00);
    func_0x000107c28d24(&stack0x000001b0);
    in_stack_000001d0 = 1;
    func_0x000108846074();
    func_0x0001088460ac();
    func_0x00010884602c();
    func_0x000108846050();
    func_0x000107c29e74();
    func_0x000107c28d24(&stack0x000003e8,&pppppuStack_58);
    bVar3 = (uRam000000011340e288._1_1_ >> 3 & 1) != 0;
    if (bVar3) {
      func_0x000107c33f9c(*(undefined8 *)(lRam000000011340e338 + 0x18));
      func_0x000107c29ee0(&pppppppuStack_20);
      func_0x000108847e94();
    }
    else {
      in_stack_00000050 = (uint *******)((ulong)in_stack_00000050 & 0xffffffffffffff00);
    }
    _uStack0000000000000068 = (uint *******)CONCAT71(stack0x00000069,bVar3);
    func_0x000108848030(&stack0x000000c8);
    unaff_x30 = (uint *******)&stack0x000000c8;
    func_0x000107c291e0(in_stack_00000008,unaff_x30);
    func_0x000108847f78();
    func_0x000108847f70();
    func_0x000107c27a04(&stack0x00000090);
    func_0x000107c279a4(&stack0x000000a8);
    func_0x000107c288d0(&stack0x000000c8);
    ppppppuVar32 = &pppppuStack_58;
    func_0x000107c279dc(ppppppuVar32);
    func_0x000107c34048();
code_r0x00010066f7bc:
    auVar48._8_8_ = unaff_x30;
    auVar48._0_8_ = ppppppuVar32;
    return auVar48;
  case 0x19:
  case 0x23:
  case 0x28:
  case 0x86:
  case 0xf4:
    goto code_r0x0001088499a8;
  case 0x1a:
  case 0x29:
  case 0x8f:
  case 0xf5:
    goto code_r0x000108848980;
  case 0x1b:
  case 0xf6:
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    pppppppuStack_18 = (uint *******)param_4;
    pppppppuStack_10 = pppppppuVar23;
  case 0xac:
    if ((uint ******)param_4[1] != (uint ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    auVar71._8_8_ = unaff_x30;
    auVar71._0_8_ = param_4;
    return auVar71;
  case 0x1c:
  case 0x7e:
  case 0xf7:
    goto code_r0x000108848d90;
  case 0x1d:
    goto code_r0x00010883e18c;
  case 0x1e:
  case 0x72:
    in_stack_00000028 = (uint *******)&UNK_10df5c14c;
    in_stack_00000030 = &PTR_FUN_110a7a2e8;
    pppppppuVar21 = (uint *******)((long)param_4 + (long)unaff_x23 * (long)ppuVar16);
    in_stack_00000008 = (uint *******)0x0;
    in_stack_00000010 = (uint *******)0x0;
    in_stack_00000038 = unaff_x21;
    _uStack0000000000000040 = unaff_x22;
    func_0x00010bcce9b8(&stack0x00000018,&PTR___tlv_bootstrap_11340e278,&stack0x00000028);
    func_0x00010884121c();
    puVar26 = &stack0x00000018;
    FUN_10868009c(param_4 + 5,puVar26);
    func_0x000107c27f44(&stack0x00000018);
    pppppppuVar22 = (uint *******)&stack0x00000008;
    func_0x000107c29c5c();
    if (*(uint ********)PTR____stack_chk_guard_11034bdc0 == in_stack_00000018) {
      auVar75._8_8_ = puVar26;
      auVar75._0_8_ = pppppppuVar22;
      return auVar75;
    }
    ___stack_chk_fail();
    func_0x000107c27f44(&stack0x00000018);
    pppppppuVar19 = (uint *******)&stack0x00000008;
    func_0x000107c29c5c();
    func_0x000108841234();
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    pppppppuStack_8 = (uint *******)FUN_10884048c;
    ppppppuVar32 = *pppppppuVar21;
    ppppppuVar27 = pppppppuVar21[1];
    pppppppuStack_18 = pppppppuVar22;
    pppppppuStack_10 = pppppppuVar23;
    func_0x000107c27994(&stack0xffffffffffffff78);
    if (pppppppuVar19[10] == (uint ******)0x0) {
      unaff_x21 = (uint *******)0x7fffffffffffffff;
    }
    else {
      unaff_x21 = (uint *******)pppppppuVar19[8][9];
    }
    unaff_x22 = pppppppuVar19 + 9;
    ppuVar16 = (undefined **)*unaff_x22;
    ppppppuStack_70 = ppppppuVar32;
    ppppppuStack_68 = ppppppuVar27;
    unaff_x24 = unaff_x22;
    pppppppuStack_60 = param_7;
    register0x00000008 = (BADSPACEBASE *)&pppppppuStack_90;
    while (unaff_x23 = unaff_x22, (uint *******)ppuVar16 != (uint *******)0x0) {
LAB_1088404f0:
      while( true ) {
        param_4 = (undefined **)((long)register0x00000008 + 8);
        func_0x000108841128(param_4,ppuVar16 + 4);
        unaff_x22 = (uint *******)ppuVar16;
code_r0x000108840500:
        if ((int)param_4 != 0) break;
        pppppppuVar23 = unaff_x22 + 4;
        ppppppuVar32 = (uint ******)((long)register0x00000008 + 8);
        func_0x000108841128(pppppppuVar23,ppppppuVar32);
        if ((int)pppppppuVar23 == 0) {
          if (*unaff_x23 == (uint ******)0x0) goto LAB_108840544;
          uVar6 = 0;
          goto LAB_1088405c4;
        }
        unaff_x23 = unaff_x22 + 1;
        ppuVar16 = (undefined **)*unaff_x23;
        if ((uint *******)ppuVar16 == (uint *******)0x0) goto LAB_108840544;
      }
      ppuVar16 = (undefined **)*unaff_x22;
    }
  case 0xeb:
LAB_108840544:
    ppppppuVar32 = (uint ******)0x50;
    __Znwm();
    *(uint *******)((long)register0x00000008 + 0x38) = ppppppuVar32;
    *(uint ********)((long)register0x00000008 + 0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + 0x48) = 0;
    FUN_108840628(ppppppuVar32 + 4,(undefined1 *)((long)register0x00000008 + 8));
    *(undefined1 *)((long)register0x00000008 + 0x48) = 1;
    *ppppppuVar32 = (uint *****)0x0;
    ppppppuVar32[1] = (uint *****)0x0;
    ppppppuVar32[2] = (uint *****)unaff_x22;
    *unaff_x23 = ppppppuVar32;
    if ((uint ******)*pppppppuVar19[8] != (uint ******)0x0) {
      pppppppuVar19[8] = (uint ******)*pppppppuVar19[8];
    }
    func_0x000107c27be4(pppppppuVar19[9],ppppppuVar32);
    pppppppuVar19[10] = (uint ******)((long)pppppppuVar19[10] + 1);
    *(undefined8 *)((long)register0x00000008 + 0x38) = 0;
    func_0x0001088411b8((undefined1 *)((long)register0x00000008 + 0x38));
    if (*(long *)((long)register0x00000008 + 0x30) < (long)unaff_x21) {
      FUN_108840334(pppppppuVar19);
    }
    uVar6 = 1;
LAB_1088405c4:
    func_0x000107c27914((undefined1 *)((long)register0x00000008 + 8));
    auVar76._8_8_ = ppppppuVar32;
    auVar76._0_8_ = uVar6;
    return auVar76;
  case 0x1f:
  case 0x82:
    unaff_x24 = *(uint ********)((long)param_4[2] + unaff_x22 * 8);
    if (unaff_x24 != (uint *******)0x0) goto LAB_1088498b8;
    goto LAB_108849908;
  case 0x20:
  case 0x83:
  case 0x9c:
    goto code_r0x000108845194;
  case 0x21:
  case 0x84:
    func_0x00010883b21c();
    ppppppuVar32 = (uint ******)*param_4;
    *param_4 = (undefined *)0x0;
    FUN_1086d5868(&PTR___tlv_bootstrap_11340e278,ppppppuVar32);
    ppppppuVar27 = (uint ******)param_4[2];
    ppppppuRam000000011340e280 = (uint ******)param_4[1];
    _uRam000000011340e288 = ppppppuVar27;
    param_4[1] = (undefined *)0x0;
    pppppppuRam000000011340e290 = (uint *******)param_4[3];
    uRam000000011340e298 = *(undefined4 *)(param_4 + 4);
    if (pppppppuRam000000011340e290 != (uint *******)0x0) {
      ppppppuVar27 = (uint ******)ppppppuVar27[1];
      if (((ulong)ppppppuRam000000011340e280 & (ulong)((long)ppppppuRam000000011340e280 + -1)) == 0)
      {
        ppppppuVar27 = (uint ******)
                       ((ulong)((long)ppppppuRam000000011340e280 + -1) & (ulong)ppppppuVar27);
      }
      else if (ppppppuRam000000011340e280 <= ppppppuVar27) {
        uVar5 = 0;
        if (ppppppuRam000000011340e280 != (uint ******)0x0) {
          uVar5 = (ulong)ppppppuVar27 / (ulong)ppppppuRam000000011340e280;
        }
        ppppppuVar27 = (uint ******)((long)ppppppuVar27 - uVar5 * (long)ppppppuRam000000011340e280);
      }
      *(undefined8 *)
       (CONCAT44(PTR___tlv_bootstrap_11340e278._4_4_,PTR___tlv_bootstrap_11340e278._0_4_) +
       (long)ppppppuVar27 * 8) = 0x11340e288;
      param_4[2] = (undefined *)0x0;
      param_4[3] = (undefined *)0x0;
    }
    auVar46._8_8_ = ppppppuVar32;
    auVar46._0_8_ = ppuVar33;
    return auVar46;
  case 0x24:
  case 0x87:
    *param_4 = &UNK_10df5b984;
    param_4[1] = (undefined *)0x0;
    param_4[4] = (undefined *)0x0;
    pppppppuVar22 = (uint *******)(ulong)PTR___tlv_bootstrap_11340e278._4_4_;
  case 0xa0:
    *(byte *)(param_4 + 2) = bVar13 & (int)pppppppuVar22 != 1;
    func_0x0001087f48a0();
    if ((undefined ***)param_4 != &stack0x00000020) {
code_r0x000108846994:
      pppppppuVar23 = (uint *******)param_4[1];
      pppppppuVar22 = pppppppuVar23;
      if (((ulong)pppppppuVar23 & 1) != 0) {
        func_0x000108847e5c();
        pppppppuVar23 = extraout_x8_50;
        pppppppuVar22 = extraout_x9_15;
      }
      pppppppuVar19 = in_stack_00000028;
      pppppppuVar21 = in_stack_00000028;
      if (((ulong)in_stack_00000028 & 1) != 0) {
        func_0x000108847eb4();
        pppppppuVar23 = extraout_x8_51;
        pppppppuVar22 = extraout_x9_16;
        pppppppuVar19 = extraout_x10_01;
        pppppppuVar21 = extraout_x11_27;
      }
      if (pppppppuVar22 == pppppppuVar21) {
        param_4[1] = (undefined *)pppppppuVar19;
        pppppppuVar22 = (uint *******)param_4[2];
        pppppppuVar19 = (uint *******)param_4[3];
        param_4[2] = (undefined *)in_stack_00000030;
        param_4[3] = (undefined *)in_stack_00000038;
        pppppppuVar21 = (uint *******)param_4[4];
        param_4[4] = (undefined *)_uStack0000000000000040;
        in_stack_00000028 = pppppppuVar23;
        in_stack_00000030 = (undefined **)pppppppuVar22;
        in_stack_00000038 = pppppppuVar19;
        _uStack0000000000000040 = pppppppuVar21;
      }
      else {
        unaff_x30 = (uint *******)&stack0x00000020;
        FUN_1088b8fe8();
      }
    }
    puVar26 = &stack0x00000020;
    func_0x000107c2a280(puVar26);
    auVar82._8_8_ = unaff_x30;
    auVar82._0_8_ = puVar26;
    return auVar82;
  case 0x25:
  case 0x88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
    auVar97._8_8_ = unaff_x30;
    auVar97._0_8_ = param_4;
    return auVar97;
  case 0x26:
    pppppppuVar22 = (uint *******)param_4;
    func_0x00010883cd48();
    bVar2 = (uint *******)0x2 < unaff_x24;
    bVar3 = unaff_x24 == (uint *******)0x3;
    func_0x00010883caf4();
    pppppppuVar23 = extraout_x8_35;
    if (!bVar2 || bVar3) {
      pppppppuVar23 = extraout_x9;
    }
    if ((long)pppppppuVar23 - 1U == 0) {
      pppppppuVar23 = (uint *******)0x2;
    }
    else if (((ulong)pppppppuVar23 & (long)pppppppuVar23 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      pppppppuVar22 = pppppppuVar23;
    }
    pppppppuVar19 = (uint *******)param_4[1];
    if (pppppppuVar19 > pppppppuVar23 || pppppppuVar23 == pppppppuVar19) {
      if (pppppppuVar19 <= pppppppuVar23) goto LAB_10883aad0;
      func_0x00010883cbd4();
      if ((pppppppuVar19 < (uint *******)0x3) ||
         (((ulong)pppppppuVar19 & (long)pppppppuVar19 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010883ca48();
      }
      if (pppppppuVar23 <= pppppppuVar22) {
        pppppppuVar23 = pppppppuVar22;
      }
      if (pppppppuVar19 <= pppppppuVar23) {
        pppppppuVar19 = (uint *******)param_4[1];
        goto LAB_10883aad0;
      }
      if (pppppppuVar23 == (uint *******)0x0) {
        FUN_10883ab80(param_4,0);
        param_4[1] = (undefined *)0x0;
        pppppppuVar19 = (uint *******)0x0;
        goto LAB_10883aad0;
      }
    }
    if ((ulong)pppppppuVar23 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10883ab70);
      (*pcVar11)();
    }
    lVar24 = (long)pppppppuVar23 << 3;
    __Znwm(lVar24);
    FUN_10883ab80(param_4,lVar24);
    pppppppuVar22 = (uint *******)0x0;
    param_4[1] = (undefined *)pppppppuVar23;
    while (pppppppuVar23 != pppppppuVar22) {
      func_0x00010883ce7c();
      pppppppuVar22 = extraout_x9_00;
    }
    pppppppuVar19 = pppppppuVar23;
    if (*unaff_x23 != (uint ******)0x0) {
      func_0x00010883ce68();
      func_0x00010883ce54();
      lVar24 = extraout_x8_36;
      uVar5 = extraout_x9_01;
      plVar28 = extraout_x10;
      pppppppuVar22 = extraout_x11_19;
      while (plVar25 = plVar28, plVar28 = (long *)*plVar25, plVar28 != (long *)0x0) {
        pppppppuVar21 = (uint *******)plVar28[1];
        if (((ulong)pppppppuVar23 & uVar5) == 0) {
          pppppppuVar21 = (uint *******)((ulong)pppppppuVar21 & uVar5);
        }
        else if (pppppppuVar23 <= pppppppuVar21) {
          uVar20 = 0;
          if (pppppppuVar23 != (uint *******)0x0) {
            uVar20 = (ulong)pppppppuVar21 / (ulong)pppppppuVar23;
          }
          pppppppuVar21 = (uint *******)((long)pppppppuVar21 - uVar20 * (long)pppppppuVar23);
        }
        if (pppppppuVar21 != pppppppuVar22) {
          if (*(long *)(lVar24 + (long)pppppppuVar21 * 8) == 0) {
            *(long **)(lVar24 + (long)pppppppuVar21 * 8) = plVar25;
            pppppppuVar22 = pppppppuVar21;
          }
          else {
            *plVar25 = *plVar28;
            func_0x00010883caac();
            lVar24 = extraout_x8_37;
            uVar5 = extraout_x9_02;
            plVar28 = extraout_x10_00;
            pppppppuVar22 = extraout_x11_20;
          }
        }
      }
    }
LAB_10883aad0:
    if (((ulong)pppppppuVar19 & (long)pppppppuVar19 - 1U) == 0) {
      func_0x00010883ce88();
      ppuVar33 = (undefined **)unaff_x25;
    }
    else if (pppppppuVar19 < (uint *******)((long)&PTR___tlv_bootstrap_11340e278 + 1)) {
      uVar5 = 0;
      if (pppppppuVar19 != (uint *******)0x0) {
        uVar5 = 0x11340e278 / (ulong)pppppppuVar19;
      }
      ppuVar33 = (undefined **)((long)&PTR___tlv_bootstrap_11340e278 - uVar5 * (long)pppppppuVar19);
    }
    pppppppuVar23 = in_stack_00000008;
    pppppuVar15 = *(uint ******)((long)*param_4 + ppuVar33 * 8);
    if (pppppuVar15 == (uint *****)0x0) {
      func_0x00010883cd6c();
      if (extraout_x9_03 != 0) {
        pppppppuVar22 = *(uint ********)(extraout_x9_03 + 8);
        if (((ulong)pppppppuVar19 & (long)pppppppuVar19 - 1U) == 0) {
          pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 & (long)pppppppuVar19 - 1U);
        }
        else if (pppppppuVar19 <= pppppppuVar22) {
          uVar5 = 0;
          if (pppppppuVar19 != (uint *******)0x0) {
            uVar5 = (ulong)pppppppuVar22 / (ulong)pppppppuVar19;
          }
          pppppppuVar22 = (uint *******)((long)pppppppuVar22 - uVar5 * (long)pppppppuVar19);
        }
        *(uint ********)(extraout_x8_38 + (long)pppppppuVar22 * 8) = pppppppuVar23;
      }
    }
    else {
      *in_stack_00000008 = (uint ******)*pppppuVar15;
      *pppppuVar15 = (uint ****)in_stack_00000008;
    }
    func_0x00010883ca68();
    FUN_10883ab98();
    auVar63._8_8_ = 1;
    auVar63._0_8_ = pppppppuVar23;
    return auVar63;
  case 0x2a:
    goto code_r0x00010883e194;
  case 0x2e:
    goto code_r0x00010882cbf8;
  case 0x30:
    goto code_r0x00010882cc1c;
  case 0x3a:
  case 0x76:
    auVar59._8_8_ = unaff_x30;
    auVar59._0_8_ = param_4;
    return auVar59;
  case 0x3b:
  case 0xfd:
    goto LAB_1088498e0;
  case 0x3c:
  case 0xfe:
    ppppppuVar32 = (uint ******)param_4[7];
    if (ppppppuVar32 == (uint ******)0x0) {
      ppppppuVar32 = (uint ******)param_4[1];
      if (((ulong)ppppppuVar32 & 1) != 0) {
        ppppppuVar32 = *(uint *******)((ulong)ppppppuVar32 & 0xfffffffffffffffe);
      }
      func_0x0001088485f0();
      param_4[7] = (undefined *)ppppppuVar32;
    }
    auVar91._8_8_ = unaff_x30;
    auVar91._0_8_ = ppppppuVar32;
    return auVar91;
  case 0x3d:
    while (((uint ******)ppuVar16[0x1d] != (uint ******)0x0 || (((ulong)ppuVar16[0x17] & 1) == 0)))
    {
      func_0x00010883e354();
      func_0x00010883e644();
      *(undefined1 *)unaff_x22 = 0;
      *(undefined1 *)((long)param_4 + 0xe2) = 1;
      pppppppuVar23 = unaff_x21;
      func_0x000107c28a3c();
      func_0x00010883e71c();
      if ((extraout_x9_04 & 1) == 0) {
        ppppppuVar27 = (uint ******)param_4[0x1b];
        ppppppuVar32 = extraout_x8_39;
      }
      else {
        func_0x00010883e5f8();
        func_0x00010883e310(param_4[0x1a]);
        (*extraout_x8_40)();
        func_0x00010883e5a4();
        unaff_x21[1] = (uint ******)0x0;
        unaff_x21[2] = (uint ******)0x0;
        *unaff_x21 = (uint ******)0x0;
        param_4[4] = (undefined *)(unaff_x23 + 2);
        *(undefined4 *)(param_4 + 8) = 0x2a3;
        param_4[0x12] = (undefined *)((long)unaff_x22 * 1000000);
        (*(code *)(*pppppppuVar23)[3])();
        ppppppuVar32 = (uint ******)param_4[0x1a];
        func_0x00010883e1f8();
        func_0x00010883e610();
        pppppppuVar23 = *(uint ********)((long)param_4[0x1a] + 0x10);
        unaff_x30 = (uint *******)(param_4 + 0x19);
        FUN_10883d06c(param_4 + 0x12,pppppppuVar23,unaff_x30,
                      (uint ******)((long)param_4[0x1a] + 0x80));
        func_0x000107c33ebc(param_4[0x12]);
        do {
          func_0x000107c33d58();
        } while (extraout_w10_29 != 0);
        func_0x000107c33dc8(param_4[4]);
        if ((extraout_w8_10 >> 1 & 1) == 0) {
          *(undefined1 *)(param_4 + 0x1c) = 1;
          func_0x00010883e444();
          ppppppuVar27 = *pppppppuVar23;
          if (ppppppuVar27 == (uint ******)0x0) {
            func_0x000107c3a5c0();
            ppppppuVar27 = *pppppppuVar23;
          }
          ppppppuVar38 = ppppppuVar32 + 2;
          do {
            if (*ppppppuVar38 == (uint *****)0x0) {
              func_0x000107c33d68();
              ppppppuVar38 = extraout_x8_42;
              uVar14 = extraout_w10_31;
              uVar5 = extraout_x11_22;
            }
            else {
              func_0x00010883e348();
              ppppppuVar38 = extraout_x8_41;
              uVar14 = extraout_w10_30;
              uVar5 = extraout_x11_21;
            }
            if ((uVar5 & 1) != 0) {
              pppppuVar15 = ppppppuVar32[0x12];
              func_0x00010883e564();
              if ((bool)in_ZR) {
                func_0x00010883e17c();
                func_0x00010883e108();
                func_0x00010883e14c();
                pppppuVar15[1] = (uint ****)pppppppuVar23;
                ppppppuVar32[0x12] = (uint *****)pppppppuVar23;
              }
              func_0x00010883e554();
              *(uint *******)(extraout_x8_43 + 0x20) = ppppppuVar27;
              func_0x00010883e16c(ppppppuVar32[0x12]);
              ppppppuVar32[2] = (uint *****)0x0;
              goto code_r0x0001005f0b4c;
            }
          } while ((uVar14 >> 1 & 1) == 0);
        }
        pppppppuVar23 = (uint *******)(param_4 + 4);
        func_0x000107c28870();
        ppppppuVar27 = *pppppppuVar23;
        func_0x00010883e1d4();
        func_0x00010883e67c();
        if (ppppppuVar27 == (uint ******)0x0) {
          func_0x00010883e5ec(param_4[0x1a]);
          if (pppppppuVar23 != (uint *******)0x0) {
            func_0x00010883e658();
          }
          FUN_10883d264(param_4 + 4,param_4[0x1a]);
          func_0x00010883e71c();
          if (extraout_w9 == *(byte *)(param_4 + 8)) {
            if (extraout_w9 != 0) {
              func_0x00010883e5c8();
            }
          }
          else if (extraout_w9 == 0) {
            func_0x00010883e3cc();
            *(undefined1 *)(extraout_x8_44 + 0xb0) = 1;
          }
          else {
            func_0x00010883e42c();
          }
          ppppppuVar32 = (uint ******)param_4[0x1a];
          func_0x00010883d4b8(param_4 + 4);
          in_ZR = *(char *)(ppppppuVar32 + 0x16) == '\x01';
          if ((bool)in_ZR) {
            func_0x00010883e54c(param_4[0x1a]);
          }
          param_4[4] = (undefined *)*(uint *******)((long)param_4[0x1a] + 0x20);
          *(undefined1 *)(param_4 + 5) = 1;
          __ZNSt3__15mutex4lockEv();
          func_0x00010883e3a4();
          func_0x000107c2798c(param_4 + 4);
          ppppppuVar32 = (uint ******)param_4[0x15];
          if (ppppppuVar32 != (uint ******)0x0) {
            func_0x000107c27994(param_4 + 0x12,param_4 + 0xe);
            func_0x00010868c9c4(param_4 + 4,param_4[0x17],param_4[0x18]);
            (*(code *)(*ppppppuVar32)[0x19])(ppppppuVar32,param_4 + 4);
            func_0x00010883e520();
            func_0x000107c27914(param_4 + 0x12);
          }
          ppppppuVar32 = (uint ******)param_4[0x1a];
          func_0x00010883e510();
          pppppuVar15 = ppppppuVar32[8];
          param_4[0xb] = (undefined *)0x0;
          param_4[0xc] = (undefined *)0x0;
          func_0x00010883e58c(unaff_x23 + 2,pppppuVar15);
          unaff_x30 = (uint *******)(param_4 + 9);
          (*extraout_x8_45)();
          func_0x00010883e500();
        }
        func_0x00010883e39c();
        func_0x00010883e38c();
        ppppppuVar32 = (uint ******)param_4[0x1a];
      }
      param_4[0x1b] = (undefined *)ppppppuVar27;
      *(undefined1 *)((long)param_4 + 0xe1) = *(undefined1 *)((long)param_4 + 0xe2);
      ppppppuVar32 = (uint ******)ppppppuVar32[0xc];
      param_4[4] = (undefined *)(ppppppuVar32 + 0xb);
      param_4[5] = (undefined *)ppppppuVar32;
      if (ppppppuVar32 != (uint ******)0x0) {
        do {
          func_0x000107c33d58();
        } while (extraout_w10_32 != 0);
      }
      pppppppuVar23 = (uint *******)(param_4 + 4);
      func_0x000107c314f0();
      if (((ulong)pppppppuVar23 & 1) == 0) {
        *(undefined1 *)(param_4 + 0x1c) = 0;
        func_0x00010883e444();
        if (*pppppppuVar23 == (uint ******)0x0) {
          func_0x000107c3a5c0();
        }
        func_0x000107c33d98();
        if (((ulong)pppppppuVar23 & 1) != 0) {
code_r0x0001005f0b4c:
          auVar43._8_8_ = unaff_x30;
          auVar43._0_8_ = pppppppuVar23;
          return auVar43;
        }
      }
      unaff_x21 = (uint *******)(param_4 + 5);
      unaff_x22 = (uint *******)(*unaff_x21 + 0x15);
      do {
        ppppppuVar32 = *unaff_x22;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
        if (bVar3) {
          *(undefined1 *)unaff_x22 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while ((cVar1 != '\0') || (((ulong)ppppppuVar32 & 1) != 0));
      ppuVar16 = (undefined **)*unaff_x21;
    }
    func_0x000107c33e74();
    *(undefined1 *)unaff_x22 = 0;
    *(undefined1 *)((long)param_4 + 0xe2) = 0;
    func_0x000107c28a3c(unaff_x21);
    func_0x00010883e1dc();
    func_0x00010883e19c();
    goto code_r0x00010bdbd7ac;
  case 0x3e:
    auVar89._4_4_ = 0;
    auVar89._0_4_ = *(uint *)((long)ppuVar16 + ((ulong)param_4 & 0xffffffff) * 4);
    auVar89._8_8_ = unaff_x30;
    return auVar89;
  case 0x3f:
  case 0xfb:
    goto code_r0x00010884899c;
  case 0x40:
    goto code_r0x000108846194;
  case 0x41:
  case 0x92:
code_r0x000108849d94:
  case 0x8b:
    do {
      func_0x000107c340d8();
      puVar26 = extraout_x11_28;
code_r0x000108849d9c:
    } while ((int)puVar26 != 0);
LAB_108849da0:
    func_0x000107c340b8();
    if (extraout_x9_19 != 0) {
      do {
        func_0x000107c340d8();
      } while (extraout_w11_03 != 0);
    }
    in_stack_00000020 = param_4;
    func_0x000107c340d4();
    FUN_10892dee4();
    param_4 = (undefined **)&stack0x00000018;
    FUN_10884c7dc(param_4);
    func_0x000107c340f0();
code_r0x00010061dcfc:
    auVar45._8_8_ = unaff_x30;
    auVar45._0_8_ = param_4;
    return auVar45;
  case 0x42:
    in_stack_00000020 = &PTR___tlv_bootstrap_11340e278;
    pppppppuVar22 = unaff_x30;
    in_stack_00000028 = (uint *******)param_4;
    in_stack_00000030 = (undefined **)pppppppuVar23;
    FUN_10883ec98();
    bVar13 = *(byte *)(param_4 + 2);
    uVar14 = ((uint)param_6 ^ 1) & (uint)bVar13;
    if ((int)param_8 == 0) {
      bVar3 = false;
      if (uVar14 != 0) {
        bVar3 = param_4[1] <= param_7;
      }
      if (((bVar13 & 1) == 0) || (bVar3)) {
        if (*(char *)(unaff_x30 + 4) == '\x01') {
          ppppppuVar32 = *unaff_x30;
          ppppppuVar38 = unaff_x30[3];
          ppppppuVar27 = unaff_x30[2];
          ppuVar16[3] = (undefined *)unaff_x30[1];
          ppuVar16[2] = (undefined *)ppppppuVar32;
          ppuVar16[5] = (undefined *)ppppppuVar38;
          ppuVar16[4] = (undefined *)ppppppuVar27;
          ppuVar16[6] = (undefined *)unaff_x30[4];
          *(undefined4 *)ppuVar16 = 0;
          ppuVar16[1] = (undefined *)0x0;
          goto code_r0x0001006b6114;
        }
        *(undefined4 *)ppuVar16 = 0;
        ppuVar16[1] = (undefined *)0x0;
      }
      else {
        ppppppuVar32 = (uint ******)param_4[1];
        *(undefined4 *)ppuVar16 = *(undefined4 *)param_4;
        ppuVar16[1] = (undefined *)ppppppuVar32;
      }
      *(undefined1 *)(ppuVar16 + 2) = 0;
      *(undefined1 *)(ppuVar16 + 6) = 0;
    }
    else {
      pppppppuVar23 = (uint *******)param_4[1];
      uVar34 = 0;
      if (pppppppuVar23 <= param_7) {
        uVar34 = uVar14;
      }
      uVar12 = (undefined1)uVar34;
      uVar14 = *(uint *)param_4;
      if (((uVar34 ^ 1) & (uint)bVar13) == 0) {
        pppppppuVar23 = (uint *******)0x0;
        uVar14 = 0;
      }
      if (*(uint *)param_4 < *(uint *)unaff_x30) {
        uVar12 = 1;
      }
      if ((*(byte *)(unaff_x30 + 4) & 1 & (uint)bVar13) == 0) {
        uVar12 = (char)(*(byte *)(unaff_x30 + 4) & 1);
      }
      ppppppuVar32 = *unaff_x30;
      ppppppuVar38 = unaff_x30[3];
      ppppppuVar27 = unaff_x30[2];
      ppuVar16[3] = (undefined *)unaff_x30[1];
      ppuVar16[2] = (undefined *)ppppppuVar32;
      ppuVar16[5] = (undefined *)ppppppuVar38;
      ppuVar16[4] = (undefined *)ppppppuVar27;
      *(undefined4 *)((long)ppuVar16 + 0x31) = *(undefined4 *)((long)unaff_x30 + 0x21);
      *(undefined4 *)((long)ppuVar16 + 0x34) = *(undefined4 *)((long)unaff_x30 + 0x24);
      *(uint *)ppuVar16 = uVar14;
      ppuVar16[1] = (undefined *)pppppppuVar23;
      *(undefined1 *)(ppuVar16 + 6) = uVar12;
    }
code_r0x0001006b6114:
    *(char *)(ppuVar16 + 7) = (char)param_6;
    auVar55._8_8_ = pppppppuVar22;
    auVar55._0_8_ = param_8;
    return auVar55;
  case 0x43:
    goto code_r0x0001088489a4;
  case 0x44:
  case 0xd6:
    goto code_r0x000108848db0;
  case 0x45:
  case 0xb0:
    goto code_r0x00010882ccf0;
  case 0x46:
    goto code_r0x00010882cc08;
  case 0x48:
  case 0xa6:
  case 0xdb:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x000108841ad0(unaff_x21);
      FUN_108841950();
      unaff_x30 = unaff_x22 + 5;
      func_0x00010b51e194();
LAB_1088418f8:
      unaff_x22 = (uint *******)*unaff_x22;
      if (unaff_x22 == (uint *******)0x0) break;
code_r0x000108841900:
      unaff_x21 = (uint *******)ppuVar33;
      FUN_108841a84();
      func_0x000108841ad0();
      FUN_108841b78();
    }
    auVar79._8_8_ = unaff_x30;
    auVar79._0_8_ = unaff_x21;
    return auVar79;
  case 0x49:
code_r0x0001088399ac:
    in_stack_00000028 = pppppppuVar7;
    in_stack_00000030 = (undefined **)unaff_x23;
    _uStack0000000000000040 = unaff_x25;
    _uStack0000000000000048 = unaff_x26;
    func_0x00010883ce14();
    for (; unaff_x26 = unaff_x30, 0 < (long)pppppppuVar19;
        pppppppuVar19 = (uint *******)((long)pppppppuVar19 - (long)pppppppuVar22)) {
      pppppppuVar23 = _uStack0000000000000048;
      if (_uStack0000000000000048 == (uint *******)*_uStack0000000000000040) {
        _uStack0000000000000040 = _uStack0000000000000040 + -1;
        pppppppuVar23 = (uint *******)(*_uStack0000000000000040 + 0x200);
      }
      _uStack0000000000000048 = pppppppuVar23 + -1;
      pppppppuVar17 = (uint *******)((long)pppppppuVar23 - (long)*_uStack0000000000000040 >> 3);
      pppppppuVar22 = pppppppuVar17;
      if ((long)pppppppuVar19 <= (long)pppppppuVar17) {
        pppppppuVar22 = pppppppuVar19;
      }
      pppppppuVar29 = pppppppuVar23 + -(long)pppppppuVar19;
      if ((long)pppppppuVar17 <= (long)pppppppuVar19) {
        pppppppuVar29 = (uint *******)*_uStack0000000000000040;
      }
      if (unaff_x27 < pppppppuVar23 && pppppppuVar29 <= unaff_x27) {
        puVar26 = &stack0x00000028;
        FUN_1086f6b4c(puVar26,&stack0x00000040);
        pppppppuVar21[-0xd] = (uint ******)_uStack0000000000000040;
        pppppppuVar21[-0xc] = (uint ******)unaff_x27;
        FUN_10883b78c(pppppppuVar21 + -0xd,(long)puVar26 + -1);
        unaff_x27 = (uint *******)pppppppuVar21[-0xc];
        pppppppuVar7 = in_stack_00000028;
        unaff_x23 = (uint *******)in_stack_00000030;
      }
      if (pppppppuVar29 != pppppppuVar23) {
        ppppppuVar32 = *pppppppuVar7;
        while( true ) {
          uVar20 = (long)unaff_x23 - (long)ppppppuVar32 >> 3;
          uVar5 = (long)pppppppuVar23 - (long)pppppppuVar29 >> 3;
          if ((long)uVar20 <= (long)uVar5) {
            uVar5 = uVar20;
          }
          pppppppuVar23 = pppppppuVar23 + -uVar5;
          unaff_x23 = unaff_x23 + -uVar5;
          if ((uVar5 & 0x1fffffffffffffff) != 0) {
            _memmove(unaff_x23,pppppppuVar23,uVar5 << 3);
          }
          if (pppppppuVar29 == pppppppuVar23) break;
          pppppppuVar7 = pppppppuVar7 + -1;
          ppppppuVar32 = *pppppppuVar7;
          unaff_x23 = (uint *******)(ppppppuVar32 + 0x200);
        }
        if (unaff_x23 == (uint *******)(*pppppppuVar7 + 0x200)) {
          pppppppuVar7 = pppppppuVar7 + 1;
          unaff_x23 = (uint *******)*pppppppuVar7;
        }
      }
      unaff_x30 = (uint *******)((long)pppppppuVar22 + -1);
      in_stack_00000028 = pppppppuVar7;
      in_stack_00000030 = (undefined **)unaff_x23;
      FUN_10883b90c(&stack0x00000040);
    }
    goto LAB_108839ac4;
  case 0x4a:
  case 0x77:
    in_stack_00000010 = pppppppuVar23;
    in_stack_00000018 = unaff_x30;
    func_0x000107c34034();
    if (((ulong)param_4 & 1) == 0) {
      unaff_x30 = (uint *******)&DAT_10f4bdfde;
      func_0x000108847ec0();
      if (((ulong)param_4 & 1) != 0) {
        param_4 = (undefined **)0x0;
        goto code_r0x00010069adcc;
      }
      unaff_x30 = (uint *******)&DAT_10f4bdfe8;
      func_0x000108847ec0();
      goto code_r0x000108844994;
    }
    param_4 = (undefined **)0x2;
  case 0x50:
code_r0x00010069adcc:
    auVar52._8_8_ = unaff_x30;
    auVar52._0_8_ = param_4;
    return auVar52;
  case 0x4b:
    FUN_1088394dc(&PTR___tlv_bootstrap_11340e278);
    func_0x00010883cdd0();
    puVar26 = &stack0x00000028;
    FUN_1086d2c8c(puVar26);
    func_0x00010883cccc();
    auVar47._8_8_ = unaff_x30;
    auVar47._0_8_ = puVar26;
    return auVar47;
  case 0x4c:
    func_0x000104be0ccc();
  case 0xdc:
    ppuVar16 = (undefined **)(ulong)uRam000000011340e29c;
    pppppppuVar22 = pppppppuRam000000011340e290;
code_r0x0001088448a8:
    pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 & 0xfffffffffffffffc);
code_r0x0001088448ac:
    if ((int)ppuVar16 != 2) {
      pppppppuVar22 = unaff_x21;
    }
    func_0x000107c27f70(&stack0x00000008,pppppppuVar22);
    if (2 < uVar14 - 1) {
      uVar14 = 0;
    }
    puVar26 = &stack0x00000028;
    func_0x000105299660(param_4,puVar26,&stack0x00000008,uVar14,uRam000000011340e28c);
    func_0x000107c279a4(&stack0x00000008);
    func_0x000107c279c4(&stack0x00000028);
    puVar9 = &stack0x00000010;
    func_0x000107c279c4(puVar9);
    auVar81._8_8_ = puVar26;
    auVar81._0_8_ = puVar9;
    return auVar81;
  case 0x4d:
    goto code_r0x000108849958;
  case 0x4e:
    goto code_r0x00010884517c;
  case 0x4f:
    goto code_r0x0001088461a4;
  case 0x51:
    goto code_r0x000108849d9c;
  case 0x52:
    goto code_r0x0001088449a4;
  case 0x53:
    if (-1 < *(char *)((long)ppuVar16 + 0x1f)) {
      auVar87._8_8_ = unaff_x30;
      auVar87._0_8_ = param_4;
      return auVar87;
    }
    auVar88._0_8_ = (uint ******)*param_4;
    auVar88._8_8_ = unaff_x30;
    return auVar88;
  case 0x54:
    goto code_r0x000108847d9c;
  case 0x55:
    unaff_x24 = (uint *******)param_4;
    FUN_108845e74();
    uVar35 = SUB84(unaff_x24,0);
    ppppppuStack_48 = (uint ******)((ulong)ppppppuStack_48 & 0xffffffffffffff00);
    if ((_uRam000000011340e288 >> 1 & 1) != 0) goto code_r0x000108845980;
    goto LAB_108845988;
  case 0x56:
    func_0x0001086e53d4();
    func_0x00010873a20c(param_4 + 4);
    func_0x000107c290c0(param_4 + 2);
    register0x00000008 = (BADSPACEBASE *)&stack0x00000020;
    pppppppuVar22 = (uint *******)param_4;
    param_4 = (undefined **)in_stack_00000008;
    ppuVar33 = (undefined **)in_stack_00000000;
    pppppppuVar23 = in_stack_00000010;
    pppppppuVar19 = in_stack_00000018;
    goto code_r0x00010054fa10;
  case 0x5f:
LAB_1088498b8:
    do {
      while( true ) {
        unaff_x24 = (uint *******)*unaff_x24;
        if (unaff_x24 == (uint *******)0x0) goto LAB_108849908;
        ppuVar16 = (undefined **)unaff_x24[1];
        if (ppuVar16 != &PTR___tlv_bootstrap_11340e278) break;
        pppppppuVar23 = unaff_x24 + 2;
        unaff_x30 = (uint *******)&stack0x00000028;
        func_0x000107c278d0(pppppppuVar23,unaff_x30);
        if (((ulong)pppppppuVar23 & 1) != 0) goto LAB_108849a5c;
      }
LAB_1088498e0:
      if (((ulong)unaff_x21 & (ulong)unaff_x23) == 0) {
        ppuVar16 = (undefined **)((ulong)ppuVar16 & (ulong)unaff_x23);
      }
      else if (unaff_x21 <= ppuVar16) {
        uVar5 = 0;
        if (unaff_x21 != (uint *******)0x0) {
          uVar5 = (ulong)ppuVar16 / (ulong)unaff_x21;
        }
        ppuVar16 = (undefined **)((long)ppuVar16 - uVar5 * (long)unaff_x21);
      }
    } while ((uint *******)ppuVar16 == unaff_x22);
LAB_108849908:
    ppppppuVar32 = (uint ******)0x40;
    __Znwm();
    unaff_x23 = (uint *******)(param_4 + 4);
    in_stack_000000e0 = 1;
    *ppppppuVar32 = (uint *****)0x0;
    ppppppuVar32[1] = (uint *****)&PTR___tlv_bootstrap_11340e278;
    ppppppuVar32[3] = (uint *****)in_stack_00000030;
    ppppppuVar32[2] = (uint *****)in_stack_00000028;
    ppppppuVar32[4] = (uint *****)in_stack_00000038;
    in_stack_00000028 = (uint *******)0x0;
    in_stack_00000030 = (undefined **)0x0;
    in_stack_00000038 = (uint *******)0x0;
    ppppppuVar32[6] = (uint *****)in_stack_00000018;
    ppppppuVar32[5] = (uint *****)in_stack_00000010;
    ppppppuVar32[7] = (uint *****)in_stack_00000020;
    in_stack_00000018 = (uint *******)0x0;
    in_stack_00000020 = (undefined **)0x0;
    in_stack_00000010 = (uint *******)0x0;
    ppuVar16 = (undefined **)param_4[5];
    in_stack_000000d0 = ppppppuVar32;
    in_stack_000000d8 = unaff_x23;
code_r0x000108849958:
    param_1 = (uint *******)(ulong)(uint)(float)((long)ppuVar16 + 1);
    param_2 = *(float *)(param_4 + 6);
    if (unaff_x21 != (uint *******)0x0) {
      param_3 = param_2 * (float)unaff_x21;
code_r0x000108849970:
      if (SUB84(param_1,0) <= param_3) goto LAB_1088499e0;
    }
    ppuVar16 = (undefined **)((long)unaff_x21 << 1);
    pppppppuVar22 = (uint *******)0x1;
code_r0x000108849980:
    if ((uint *******)0x2 < unaff_x21) {
      pppppppuVar22 = (uint *******)(ulong)(((ulong)unaff_x21 & (long)unaff_x21 - 1U) != 0);
    }
    pppppppuVar23 = (uint *******)(long)(SUB84(param_1,0) / param_2);
    unaff_x30 = (uint *******)((ulong)pppppppuVar22 | (ulong)ppuVar16);
    if ((uint *******)((ulong)pppppppuVar22 | (ulong)ppuVar16) <= pppppppuVar23) {
      unaff_x30 = pppppppuVar23;
    }
code_r0x0001088499a8:
    func_0x000107c278d8(param_4 + 2);
    unaff_x21 = (uint *******)param_4[3];
    if (((ulong)unaff_x21 & (long)unaff_x21 - 1U) == 0) {
      unaff_x22 = (uint *******)((long)unaff_x21 - 1U & 0x11340e278);
    }
    else {
      unaff_x22 = (uint *******)ppuVar33;
      if (unaff_x21 < (uint *******)((long)&PTR___tlv_bootstrap_11340e278 + 1)) {
        uVar5 = 0;
        if (unaff_x21 != (uint *******)0x0) {
          uVar5 = 0x11340e278 / (ulong)unaff_x21;
        }
        unaff_x22 = (uint *******)((long)&PTR___tlv_bootstrap_11340e278 - uVar5 * (long)unaff_x21);
      }
    }
LAB_1088499e0:
    ppppppuVar32 = (uint ******)param_4[2];
    pppppuVar15 = ppppppuVar32[(long)unaff_x22];
    if (pppppuVar15 == (uint *****)0x0) {
      *in_stack_000000d0 = (uint *****)*unaff_x23;
      *unaff_x23 = in_stack_000000d0;
      ppppppuVar32[(long)unaff_x22] = (uint *****)unaff_x23;
      if (*in_stack_000000d0 != (uint *****)0x0) {
        pppppppuVar23 = (uint *******)(*in_stack_000000d0)[1];
        if (((ulong)unaff_x21 & (long)unaff_x21 - 1U) == 0) {
          pppppppuVar23 = (uint *******)((ulong)pppppppuVar23 & (long)unaff_x21 - 1U);
        }
        else if (unaff_x21 <= pppppppuVar23) {
          uVar5 = 0;
          if (unaff_x21 != (uint *******)0x0) {
            uVar5 = (ulong)pppppppuVar23 / (ulong)unaff_x21;
          }
          pppppppuVar23 = (uint *******)((long)pppppppuVar23 - uVar5 * (long)unaff_x21);
        }
        ppppppuVar32[(long)pppppppuVar23] = (uint *****)in_stack_000000d0;
      }
    }
    else {
      *in_stack_000000d0 = (uint *****)*pppppuVar15;
      *pppppuVar15 = (uint ****)in_stack_000000d0;
    }
    in_stack_000000d0 = (uint ******)0x0;
    param_4[5] = (undefined *)((long)param_4[5] + 1);
    func_0x000107c278dc(&stack0x000000d0);
LAB_108849a5c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000010);
    puVar26 = &stack0x00000028;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar26);
    auVar94._8_8_ = unaff_x30;
    auVar94._0_8_ = puVar26;
    return auVar94;
  case 0x60:
  case 100:
  case 0xab:
    goto code_r0x0001088489ac;
  case 0x61:
  case 0x65:
    goto code_r0x0001088451a4;
  case 0x62:
  case 0x66:
  case 0x9d:
    goto code_r0x000108846178;
  case 99:
    unaff_x21 = (uint *******)param_4;
    __Unwind_Resume();
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    pppppppuStack_8 = (uint *******)FUN_1088418c0;
    ppuVar33 = (undefined **)(extraout_x8_46 + 2);
    *ppuVar33 = (undefined *)0x0;
    *extraout_x8_46 = &PTR_DAT_110cf7b68;
    extraout_x8_46[1] = 0;
    extraout_x8_46[3] = 0;
    extraout_x8_46[4] = 0;
    *(undefined4 *)(extraout_x8_46 + 5) = 0;
    unaff_x22 = unaff_x21 + 2;
    pppppppuStack_18 = (uint *******)param_4;
    pppppppuStack_10 = pppppppuVar23;
    goto LAB_1088418f8;
  case 0x67:
    goto LAB_1088404f0;
  case 0x68:
  case 0xec:
    puVar26 = &stack0x00000010;
    func_0x000107c279c4();
    func_0x000108847dfc();
    pcVar11 = FUN_108844938;
    func_0x000107c34040(puVar26[5]);
    lVar24 = extraout_x9_05;
    if (!(bool)in_ZR) {
      lVar24 = extraout_x8_47;
    }
    uStack000000000000006c = *(uint *)(lVar24 + 0xa8);
    in_stack_00000070 = (uint *******)pcVar11;
    goto code_r0x000100693194;
  case 0x69:
    pppppppuVar23 = (uint *******)param_4;
    func_0x000108847ed0(4);
    if (((ulong)pppppppuVar23 & 1) != 0) {
      func_0x000108847e88();
    }
    func_0x000108847798();
    param_4[7] = (undefined *)pppppppuVar23;
    func_0x000108847e7c();
    if (!(bool)in_ZR) {
      pppppppuVar23 = (uint *******)pppppppuVar23[1];
      if (((ulong)pppppppuVar23 & 1) != 0) {
        func_0x000108847e5c();
        pppppppuVar23 = extraout_x9_06;
      }
      pppppppuVar22 = in_stack_00000010;
      if (((ulong)in_stack_00000010 & 1) != 0) {
        func_0x000108847eb4();
        pppppppuVar23 = extraout_x9_07;
        pppppppuVar22 = extraout_x11_23;
      }
      if (pppppppuVar23 == pppppppuVar22) {
        func_0x000108847f08();
      }
      else {
        unaff_x30 = (uint *******)&stack0x00000008;
        FUN_10891da48();
      }
    }
    puVar26 = &stack0x00000008;
    FUN_10891d9a0(puVar26);
    break;
  case 0x6a:
    goto code_r0x000108847d8c;
  case 0x6b:
    goto code_r0x000108845998;
  case 0x6c:
  case 0x8e:
  case 0xa1:
  case 0xc3:
    in_stack_00000110 = pppppppuVar23;
    in_stack_00000118 = param_7;
    func_0x000107c340b4();
    func_0x000107c340fc();
    param_4[1] = (undefined *)0x0;
    param_4[2] = (undefined *)0x0;
    *param_4 = (undefined *)&PTR_FUN_110a7bbb8;
    func_0x000107c340d0();
    if (unaff_x22 != (uint *******)0x0) goto code_r0x000108849d94;
    goto LAB_108849da0;
  case 0x6d:
    func_0x000107c34124();
    in_stack_00000110 = pppppppuVar23;
    in_stack_00000118 = param_7;
    func_0x000107c340b4();
  case 0x7c:
    func_0x000107c340fc();
    param_4[1] = (undefined *)0x0;
    param_4[2] = (undefined *)0x0;
    ppuVar16 = &PTR_DAT_110a7b000;
code_r0x0001088495b8:
    *param_4 = (undefined *)(ppuVar16 + 0xa7);
    func_0x000107c340d0();
    if (unaff_x22 != (uint *******)0x0) {
      do {
        func_0x000107c340d8();
      } while (extraout_w11 != 0);
    }
    func_0x000107c340b8();
    if (extraout_x9_17 != 0) {
      do {
        func_0x000107c340d8();
      } while (extraout_w11_00 != 0);
    }
    in_stack_00000020 = param_4;
    func_0x000107c340d4();
    FUN_10892d684();
    param_4 = (undefined **)&stack0x00000018;
    FUN_10884b70c(param_4);
    func_0x000107c340f0();
    goto code_r0x00010061dcfc;
  case 0x6e:
    goto code_r0x000108841900;
  case 0x6f:
    goto code_r0x0001088448ac;
  case 0x70:
  case 0x71:
  case 0xaf:
  case 0xd9:
    *(undefined1 *)((long)param_4 + 1) = 0;
    param_4[1] = (undefined *)0x0;
    unaff_x22[1] = (uint ******)param_4;
    pppppppuRam000000011340e308 = (uint *******)param_4;
    auVar67._8_8_ = unaff_x30;
    auVar67._0_8_ = param_4;
    return auVar67;
  case 0x73:
  case 0xc2:
  case 0xd2:
    goto code_r0x000108849d28;
  case 0x74:
  case 0xd3:
    goto code_r0x0001088448a8;
  case 0x75:
  case 0xd4:
    if (bVar13 != 0) {
      uVar6 = 0;
      goto LAB_108839160;
    }
    unaff_x30 = unaff_x22 + 2;
    FUN_108839198(&PTR___tlv_bootstrap_11340e278,unaff_x30);
    pppppppuVar36 = (uint *******)register0x00000008;
    if ((int)ppuVar33 == 0) goto code_r0x00010883918c;
  case 0x89:
    uVar6 = 1;
    *(undefined4 *)(unaff_x22 + 3) = 1;
LAB_108839160:
    auVar64._8_8_ = unaff_x30;
    auVar64._0_8_ = uVar6;
    return auVar64;
  case 0x78:
    goto code_r0x000108846da8;
  case 0x79:
  case 0xbe:
    func_0x000107c340d4();
    FUN_10892d578();
    param_4 = (undefined **)&stack0x00000018;
    FUN_10884b4e0(param_4);
  case 0x93:
  case 0x97:
  case 0xe5:
    func_0x000107c340f0();
    goto code_r0x00010061dcfc;
  case 0x7a:
  case 0xbf:
    goto code_r0x000108845d70;
  case 0x7b:
    in_stack_00000030 = (undefined **)CONCAT44(in_stack_00000030._4_4_,(uint)bVar13);
    ppuVar16 = (undefined **)0x8;
    goto code_r0x000108848d60;
  case 0x7d:
    in_stack_00000038 = (uint *******)(uRam000000011340e358 & 0xffffffffffffff00);
    in_stack_00000030 = (undefined **)extraout_x14;
  case 0x80:
  case 0x91:
code_r0x00010884616c:
    if ((int)unaff_x27 == 0) {
      _uStack0000000000000048 = (uint *******)0x0;
    }
    else {
      _uStack0000000000000048 = (uint *******)0x73344e00456c706d;
code_r0x000108846178:
    }
    _uStack0000000000000040 = (uint *******)CONCAT44(0x6e,uStack0000000000000040);
    func_0x000108847fb0();
    ppuVar16 = (undefined **)extraout_x8_49;
code_r0x00010884618c:
    goto LAB_108846190;
  case 0x7f:
    goto code_r0x00010884518c;
  case 0x81:
  case 0xd1:
    goto code_r0x000108840500;
  case 0x8a:
    _uStack0000000000000048 = (uint *******)0x0;
    pppppppuVar19 = (uint *******)&UNK_10df61d11;
    _uStack0000000000000040 = param_7;
    func_0x000107c2793c(&UNK_10df61d11);
    ppuVar16 = param_4;
  case 0xcc:
    func_0x000107c3173c(ppuVar16);
    auVar90._8_8_ = unaff_x30;
    auVar90._0_8_ = pppppppuVar19;
    return auVar90;
  case 0x8c:
    func_0x000108848018();
    uVar5 = (ulong)(uVar34 == 2);
    func_0x000107c29e80(*(undefined4 *)(param_4 + 0x16),uVar5);
    func_0x000108848024();
    auVar85._8_8_ = uVar5;
    auVar85._0_8_ = param_4;
    return auVar85;
  case 0x8d:
code_r0x000108845980:
    uVar35 = SUB84(unaff_x24,0);
    func_0x000107c291e4();
LAB_108845988:
    ppuVar16 = (undefined **)((ulong)_uRam000000011340e288 & 0xffffffff);
    _uStack0000000000000048 = (uint *******)CONCAT44(uVar35,uStack0000000000000048);
    ppuVar30 = &PTR_DAT_113278000;
    in_stack_00000008 = (uint *******)param_4;
code_r0x000108845994:
    param_4 = ppuVar30 + 0x6c;
code_r0x000108845998:
    uVar14 = (uint)ppuVar16;
    if ((uVar14 >> 4 & 1) == 0) {
      in_stack_00000038 = (uint *******)0x0;
      _uStack0000000000000040 = (uint *******)0x0;
      bVar3 = false;
      in_stack_00000018 = (uint *******)0x0;
      in_stack_00000020 = (undefined **)0x0;
      in_stack_00000028 = (uint *******)0x0;
      in_stack_00000030 = (undefined **)0x0;
      in_stack_00000010 = (uint *******)((ulong)in_stack_00000010 & 0xffffffff);
    }
    else {
      iVar4 = *(int *)(PTR_DAT_11340e2d0 + 0x34);
      func_0x000108848068();
      pppppppuVar23 = (uint *******)param_4;
      if (pppppppuRam000000011340e2b0 != (uint *******)0x0) {
        pppppppuVar23 = pppppppuRam000000011340e2b0;
      }
      in_stack_00000038 = (uint *******)((ulong)pppppppuVar23[4] & 0xffffffffffffff00);
      bVar3 = iVar4 != 0;
      if (iVar4 == 0) {
        _uStack0000000000000040 = (uint *******)0x0;
      }
      else {
        _uStack0000000000000040 = *(uint ********)(extraout_x9_14 + 0x38);
      }
      in_stack_00000028 =
           (uint *******)CONCAT44(in_stack_00000028._4_4_,(uint)*(byte *)(extraout_x9_14 + 0x40));
      in_stack_00000030 = (undefined **)extraout_x14_00;
      func_0x000108847fb0();
      uVar14 = extraout_w8_11;
    }
    ppppppuStack_68 = (uint ******)((ulong)ppppppuStack_68 & 0xffffffffffffff00);
    cStack_50 = '\0';
    if ((uVar14 >> 5 & 1) != 0) {
      func_0x000107c29ee0(&stack0x000000e8,uRam000000011340e2d8);
      FUN_10869026c(&ppppppuStack_68,&stack0x000000e8);
      func_0x000107c27914(&stack0x000000e8);
    }
    FUN_1088479f4(&stack0x000000e8);
    if (pppppppuRam000000011340e2b0 != (uint *******)0x0) {
      param_4 = (undefined **)pppppppuRam000000011340e2b0;
    }
    in_stack_00000100 = (uint *******)param_4[4];
    in_stack_00000108 = pppppppuRam000000011340e2f8;
    in_stack_00000110 = (uint *******)unaff_x23[7];
    in_stack_00000118 = (uint *******)CONCAT44(in_stack_00000118._4_4_,uVar34);
    if (pppppppuRam000000011340e2c0 != (uint *******)0x0) {
      unaff_x26 = pppppppuRam000000011340e2c0;
    }
    switch(*(undefined4 *)(unaff_x26 + 10)) {
    case 10:
      func_0x000108848050();
      break;
    case 0xb:
      func_0x000108848050();
      break;
    case 0xc:
      func_0x000108848050();
      break;
    case 0xd:
      func_0x000108848050();
    }
    func_0x000107c27f70(&stack0x000000c8,uRam000000011340e2a8 & 0xfffffffffffffffc);
    func_0x000107c27c5c(&stack0x00000130,&stack0x000000c8);
    in_stack_00000150 = (uint)(iRam000000011340e304 == 1);
    func_0x000107c29e30();
    FUN_10871c4bc(&stack0x00000158,&ppppppuStack_48);
    func_0x000107c3407c(uRam000000011340e2c8);
    FUN_1088ee3d0(&stack0x00000180);
    in_stack_00000198 = uRam000000011340e301;
    func_0x000107c29e28(&stack0x000000b0,0x11340e290);
    func_0x000107c295bc(&stack0x000001a0,&stack0x000000b0);
    func_0x000107c29e28(&stack0x00000098,unaff_x23 + 3);
    func_0x000107c295bc(&stack0x000001b8,&stack0x00000098);
    param_4 = &PTR_PTR_11326cb58;
    ppppppuVar32 = (uint ******)param_4;
    if (unaff_x23[6] != (uint ******)0x0) {
      ppppppuVar32 = unaff_x23[6];
    }
    lVar24 = (long)*(char *)(((ulong)ppppppuVar32[2] & 0xfffffffffffffffc) + 0x17);
    if (lVar24 < 0) {
      lVar24 = *(long *)(((ulong)ppppppuVar32[2] & 0xfffffffffffffffc) + 8);
    }
    if (lVar24 != 0x10) {
      in_stack_00000070 = (uint *******)((ulong)in_stack_00000070 & 0xffffffffffffff00);
    }
    else {
      func_0x000107c29ee0(&stack0x00000050);
      in_stack_00000070 = in_stack_00000050;
      _uStack0000000000000080 = in_stack_00000060;
      in_stack_00000050 = (uint *******)0x0;
      in_stack_00000078 = unaff_x30;
      func_0x000107c27914(&stack0x00000050);
    }
    in_stack_00000088 = (uint *******)CONCAT71(in_stack_00000088._1_7_,lVar24 == 0x10);
    unaff_x21 = &stack0x000000e8;
    func_0x000107c28d24(&stack0x000001d0,&stack0x00000070);
    in_ZR = !bVar3;
code_r0x000108845ca4:
    iVar4 = iStack000000000000004c;
    func_0x000107c28d24(unaff_x21 + 100,&ppppppuStack_68);
    if ((char)uRam000000011340e288 < '\0') {
      func_0x000108847ff8(uRam000000011340e2e8);
      if (!(bool)in_ZR) {
        param_4 = (undefined **)extraout_x8_48;
      }
      func_0x000107c29ee0(&pppppppuStack_20,param_4);
      func_0x000108847e94();
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
      in_stack_00000050 = (uint *******)((ulong)in_stack_00000050 & 0xffffffffffffff00);
    }
    param_4 = (undefined **)in_stack_00000008;
    _uStack0000000000000068 = (uint *******)CONCAT71(stack0x00000069,uVar12);
    func_0x000108848030(&stack0x000000e8);
    unaff_x30 = &stack0x000000e8;
    func_0x000107c291e0(param_4,unaff_x30);
    func_0x000108847f78();
    func_0x000108847f70();
    func_0x000107c27a04(&stack0x00000098);
    func_0x000107c27a04(&stack0x000000b0);
    func_0x000107c279a4(&stack0x000000c8);
    func_0x000107c288d0(&stack0x000000e8);
    if (iVar4 == 2) {
      if (((ulong)_uRam000000011340e288 & 1) != 0) {
code_r0x000108845d60:
        ppuVar16 = (undefined **)pppppppuRam000000011340e2b0[5];
        if ((uint *******)ppuVar16 != (uint *******)0x0) {
          pppppppuVar22 = (uint *******)(ulong)*(byte *)(param_4 + 0x23);
code_r0x000108845d70:
          if (((ulong)pppppppuVar22 & 1) == 0) {
            *(undefined1 *)(param_4 + 0x23) = 1;
          }
          param_4[0x22] = (undefined *)ppuVar16;
        }
      }
      ppppppuVar32 = ppppppuRam000000011340e310;
      if (ppppppuRam000000011340e310 != (uint ******)0x0) {
        if (((ulong)param_4[0x25] & 1) == 0) {
          *(undefined1 *)(param_4 + 0x25) = 1;
        }
        param_4[0x24] = (undefined *)ppppppuVar32;
      }
    }
    func_0x000107c279dc(&ppppppuStack_68);
    ppppppuVar32 = (uint ******)&ppppppuStack_48;
    func_0x000107c288d4(ppppppuVar32);
    goto code_r0x00010066f7bc;
  case 0x90:
code_r0x000108844994:
    if (((ulong)param_4 & 1) != 0) {
      param_4 = (undefined **)0x1;
      goto code_r0x00010069adcc;
    }
    unaff_x30 = (uint *******)&UNK_10f4bd000;
    goto code_r0x0001088449a4;
  case 0x94:
    in_stack_000000f0 = &PTR___tlv_bootstrap_11340e278;
    pppppppuVar21 = (uint *******)&stack0x00000100;
    pppppppuVar22 = (uint *******)param_4;
    unaff_x22 = unaff_x30;
    in_stack_000000f8 = (uint *******)param_4;
    in_stack_00000100 = pppppppuVar23;
    in_stack_00000108 = unaff_x30;
    func_0x000107c29460();
    if (param_6 == unaff_x22) {
      ppuVar33 = (undefined **)0x0;
    }
    else {
      ppuVar33 = (undefined **)
                 ((((long)param_6 - (long)*unaff_x30 >> 3) +
                  ((long)unaff_x30 - (long)pppppppuVar22) * 0x40) -
                 ((long)unaff_x22 - (long)*pppppppuVar22 >> 3));
    }
    pppppppuVar23 = (uint *******)param_4[5];
    unaff_x30 = (uint *******)((long)pppppppuVar23 - (long)ppuVar33);
    if (ppuVar33 < unaff_x30) {
      if ((uint ******)param_4[4] == (uint ******)0x0) {
        pppppppuVar23 = (uint *******)param_4;
        FUN_10883b2c0();
        if (pppppppuVar23 < (uint *******)0x200) {
          ppppppuVar32 = (uint ******)*param_4;
          ppppppuVar27 = (uint ******)param_4[3];
          uVar5 = (long)ppppppuVar27 - (long)ppppppuVar32;
          if ((ulong)((long)param_4[2] - (long)param_4[1]) < uVar5) {
            pppppppuVar23 = (uint *******)0x1000;
            if ((uint ******)param_4[1] == ppppppuVar32) {
              __Znwm();
              unaff_x22 = (uint *******)&stack0x00000070;
              in_stack_00000070 = pppppppuVar23;
              FUN_10883b598(param_4);
              FUN_10883cd24();
            }
            else {
              __Znwm();
              unaff_x22 = (uint *******)&stack0x00000070;
              in_stack_00000070 = pppppppuVar23;
              FUN_10883b4f8(param_4);
            }
            if ((long)param_4[2] - (long)param_4[1] == 8) {
              ppppppuVar32 = (uint ******)0x100;
            }
            else {
              ppppppuVar32 = (uint ******)((long)param_4[4] + 0x200);
            }
            param_4[4] = (undefined *)ppppppuVar32;
          }
          else {
            pppppppuVar23 = (uint *******)((long)uVar5 >> 2);
            if (ppppppuVar27 == ppppppuVar32) {
              pppppppuVar23 = (uint *******)0x1;
            }
            FUN_10883b6f0();
            pppppppuStack0000000000000058 = pppppppuVar23 + (long)unaff_x22;
            pppppppuVar22 = (uint *******)0x1000;
            _uStack0000000000000040 = pppppppuVar23;
            _uStack0000000000000048 = pppppppuVar23;
            in_stack_00000050 = pppppppuVar23;
            __Znwm();
            in_stack_00000038 = (uint *******)0x200;
            unaff_x22 = (uint *******)&stack0x00000070;
            in_stack_00000028 = pppppppuVar22;
            in_stack_00000030 = param_4 + 5;
            in_stack_00000070 = pppppppuVar22;
            FUN_10883b624(&stack0x00000040);
            in_stack_00000028 = (uint *******)0x0;
            for (pppppppuVar23 = (uint *******)param_4[1];
                pppppppuVar22 = pppppppuStack0000000000000058,
                pppppppuVar19 = (uint *******)param_4[2], pppppppuVar23 != pppppppuVar19;
                pppppppuVar23 = pppppppuVar23 + 1) {
              if (in_stack_00000050 == pppppppuStack0000000000000058) {
                if (_uStack0000000000000048 < _uStack0000000000000040 ||
                    (long)_uStack0000000000000048 - (long)_uStack0000000000000040 == 0) {
                  pppppppuVar19 =
                       (uint *******)((long)in_stack_00000050 - (long)_uStack0000000000000040 >> 2);
                  if ((long)in_stack_00000050 - (long)_uStack0000000000000040 == 0) {
                    pppppppuVar19 = (uint *******)0x1;
                  }
                  pppppppuVar17 = pppppppuVar19;
                  pppppppuVar29 = _uStack0000000000000048;
                  in_stack_00000090 = (uint *******)(param_4 + 3);
                  FUN_10883b6f0();
                  in_stack_00000078 = pppppppuVar17 + ((ulong)pppppppuVar19 >> 2);
                  in_stack_00000088 = pppppppuVar17 + (long)pppppppuVar29;
                  unaff_x22 = _uStack0000000000000048;
                  in_stack_00000070 = pppppppuVar17;
                  _uStack0000000000000080 = in_stack_00000078;
                  FUN_10883b6bc(&stack0x00000070,_uStack0000000000000048,in_stack_00000050);
                  pppppppuVar29 = in_stack_00000050;
                  pppppppuVar17 = _uStack0000000000000048;
                  pppppppuVar19 = _uStack0000000000000040;
                  _uStack0000000000000048 = in_stack_00000078;
                  _uStack0000000000000040 = in_stack_00000070;
                  pppppppuStack0000000000000058 = in_stack_00000088;
                  in_stack_00000050 = _uStack0000000000000080;
                  in_stack_00000078 = pppppppuVar17;
                  in_stack_00000070 = pppppppuVar19;
                  in_stack_00000088 = pppppppuVar22;
                  _uStack0000000000000080 = pppppppuVar29;
                  func_0x00010883b74c(&stack0x00000070);
                }
                else {
                  lVar24 = (((long)_uStack0000000000000048 - (long)_uStack0000000000000040 >> 3) + 1
                           ) / -2;
                  pppppppuVar22 = _uStack0000000000000048 + lVar24;
                  lVar18 = (long)in_stack_00000050 - (long)_uStack0000000000000048;
                  if (lVar18 != 0) {
                    _memmove(pppppppuVar22,_uStack0000000000000048,lVar18);
                  }
                  in_stack_00000050 = (uint *******)((long)pppppppuVar22 + lVar18);
                  unaff_x22 = _uStack0000000000000048;
                  _uStack0000000000000048 = _uStack0000000000000048 + lVar24;
                }
              }
              *in_stack_00000050 = *pppppppuVar23;
              in_stack_00000050 = in_stack_00000050 + 1;
            }
            pppppppuVar22 = (uint *******)param_4[1];
            pppppppuVar23 = (uint *******)*param_4;
            param_4[1] = (undefined *)_uStack0000000000000048;
            *param_4 = (undefined *)_uStack0000000000000040;
            param_4[3] = (undefined *)pppppppuStack0000000000000058;
            param_4[2] = (undefined *)in_stack_00000050;
            if ((long)in_stack_00000050 - (long)_uStack0000000000000048 == 8) {
              ppppppuVar32 = (uint ******)0x100;
            }
            else {
              ppppppuVar32 = (uint ******)((long)param_4[4] + 0x200);
            }
            param_4[4] = (undefined *)ppppppuVar32;
            _uStack0000000000000040 = pppppppuVar23;
            _uStack0000000000000048 = pppppppuVar22;
            in_stack_00000050 = pppppppuVar19;
            func_0x00010883b720(&stack0x00000028);
            func_0x00010883b74c(&stack0x00000040);
          }
        }
        else {
          param_4[4] = (undefined *)0x200;
          FUN_10883cd24();
        }
      }
      if ((uint *******)ppuVar33 == (uint *******)0x0) {
        pppppppuVar23 = (uint *******)param_4;
        func_0x000107c29460();
        if ((uint *******)*pppppppuVar23 == unaff_x22) {
          unaff_x22 = (uint *******)(pppppppuVar23[-1] + 0x200);
        }
        unaff_x22[-1] = *param_7;
        param_4[5] = (undefined *)((long)param_4[5] + 1);
        param_4[4] = (undefined *)((long)param_4[4] + -1);
        unaff_x26 = unaff_x22;
        goto LAB_108839d60;
      }
      unaff_x23 = (uint *******)param_4;
      func_0x000107c29460();
      unaff_x30 = unaff_x22;
      in_stack_00000018 = unaff_x23;
      in_stack_00000020 = (undefined **)unaff_x22;
      func_0x00010883b270();
      in_ZR = param_7 == unaff_x22;
      unaff_x21 = param_7;
      goto code_r0x000108839cf0;
    }
    pppppppuVar22 = (uint *******)param_4;
    FUN_10883b2c0();
    if (pppppppuVar22 == (uint *******)0x0) {
      FUN_10883b2e8(param_4);
      pppppppuVar23 = (uint *******)param_4[5];
      unaff_x30 = (uint *******)((long)pppppppuVar23 - (long)ppuVar33);
    }
    pppppppuVar7 = (uint *******)param_4;
    func_0x000107c29464();
    if (pppppppuVar23 == (uint *******)ppuVar33) {
      func_0x00010883ce40(*param_7);
      unaff_x26 = unaff_x22;
      goto LAB_108839d60;
    }
    unaff_x25 = pppppppuVar7;
    unaff_x26 = unaff_x22;
    func_0x00010883b270();
    unaff_x27 = unaff_x22;
    if (param_7 != unaff_x26) {
      unaff_x27 = param_7;
    }
    func_0x00010883ce40(*unaff_x26);
    unaff_x23 = unaff_x22;
    if ((uint *******)0x1 < unaff_x30) {
      pppppppuVar19 = (uint *******)&stack0x00000070;
      in_stack_00000070 = pppppppuVar7;
      in_stack_00000078 = unaff_x22;
      FUN_10883b90c();
      goto code_r0x0001088399ac;
    }
LAB_108839ac4:
    if (unaff_x23 == (uint *******)*pppppppuVar7) {
      unaff_x23 = (uint *******)(pppppppuVar7[-1] + 0x200);
    }
    unaff_x23[-1] = *unaff_x27;
    goto LAB_108839d60;
  case 0x95:
    in_stack_00000008 = (uint *******)(ppuVar16 + 2);
    in_stack_00000010 = (uint *******)0x0;
    in_stack_00000020 = (undefined **)0x0;
    in_stack_00000028 = (uint *******)0x0;
  case 200:
    in_stack_00000018 = (uint *******)0x0;
    switch(iStack000000000000004c) {
    case 1:
      unaff_x30 = (uint *******)&stack0x00000030;
      FUN_1086d0184(unaff_x30);
      goto code_r0x000108848970;
    default:
      goto LAB_1088489cc;
    case 3:
      FUN_1086cf9f0(&stack0x00000030);
      FUN_1086c5c14(&stack0x00000008);
      FUN_108919e8c();
      unaff_x30 = (uint *******)&stack0x00000008;
      pppppppuVar31 = (uint *******)in_stack_00000030;
code_r0x000108848970:
      ppuVar16 = (undefined **)0x10;
      break;
    case 6:
      param_4 = (undefined **)&stack0x00000030;
      func_0x0001088332d4(param_4);
      pppppppuVar19 = pppppppuVar31;
code_r0x00010884899c:
      ppuVar16 = (undefined **)0x18;
      unaff_x30 = (uint *******)param_4;
code_r0x0001088489a4:
      pppppppuVar31 = pppppppuVar19;
      break;
    case 9:
      FUN_108848bc8();
code_r0x0001088489ac:
      ppuVar16 = (undefined **)0x20;
      pppppppuVar31 = (uint *******)param_4;
      break;
    case 0xc:
      FUN_108848bc8();
      ppuVar16 = (undefined **)0x28;
      pppppppuVar31 = (uint *******)param_4;
      break;
    case 0xd:
      unaff_x30 = (uint *******)&stack0x00000030;
      func_0x000108833240(unaff_x30);
      ppuVar16 = (undefined **)0x30;
      break;
    case 0xe:
      FUN_108848bc8();
      ppuVar16 = (undefined **)0x38;
code_r0x000108848980:
      pppppppuVar31 = (uint *******)param_4;
      break;
    case 0xf:
      FUN_108848bc8();
      ppuVar16 = (undefined **)0x40;
code_r0x00010884898c:
      pppppppuVar31 = (uint *******)param_4;
    }
    (**(code **)((long)*pppppppuVar31 + (long)ppuVar16))(pppppppuVar31);
LAB_1088489cc:
    FUN_108917820(&stack0x00000008);
    FUN_108916cd0(&stack0x00000030);
    puVar26 = &stack0x00000030;
    func_0x000107c28adc(puVar26);
    auVar92._8_8_ = unaff_x30;
    auVar92._0_8_ = puVar26;
    return auVar92;
  case 0x96:
  case 0xe3:
    goto code_r0x00010884a594;
  case 0x9a:
    pppppppuVar22 = (uint *******)(param_4 + 4);
SUB_107c30250:
    if (((uint)*pppppppuVar22 >> 1 & 1) == 0) {
      pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
      if (unaff_x30 == (uint *******)0x0) {
        pppppppuVar19 = pppppppuVar22;
        pppppppuStack_18 = (uint *******)param_4;
        pppppppuStack_10 = pppppppuVar23;
        func_0x000100063c9c();
        pppppppuVar19[1] = (uint ******)0x0;
        pppppppuVar19[2] = (uint ******)0x0;
        *pppppppuVar19 = (uint ******)0x0;
        uVar5 = 2;
      }
      else {
        pppppppuVar19 = (uint *******)&stack0xffffffffffffffd8;
        pppppppuStack_18 = (uint *******)param_4;
        pppppppuStack_10 = pppppppuVar23;
        func_0x00010006903c();
        uVar5 = 3;
      }
      *pppppppuVar22 = (uint ******)(uVar5 | (ulong)pppppppuVar19);
      auVar39._8_8_ = unaff_x30;
      auVar39._0_8_ = pppppppuVar19;
      return auVar39;
    }
    auVar54._0_8_ = (ulong)*pppppppuVar22 & 0xfffffffffffffffc;
    auVar54._8_8_ = unaff_x30;
    return auVar54;
  case 0x9b:
    func_0x000108847ed0(5);
    if (((ulong)pppppppuVar19 & 1) != 0) {
      func_0x000108847e88();
    }
    func_0x0001088477cc();
    param_4[7] = (undefined *)pppppppuVar19;
    func_0x000108847e7c();
  case 0xc0:
    if (!(bool)in_ZR) {
      pppppppuVar23 = (uint *******)pppppppuVar19[1];
      if (((ulong)pppppppuVar23 & 1) != 0) {
        func_0x000108847e5c();
        pppppppuVar23 = extraout_x9_08;
      }
      pppppppuVar22 = in_stack_00000010;
      if (((ulong)in_stack_00000010 & 1) != 0) {
        func_0x000108847eb4();
        pppppppuVar23 = extraout_x9_09;
        pppppppuVar22 = extraout_x11_24;
      }
      if (pppppppuVar23 == pppppppuVar22) {
        func_0x000108847f08();
      }
      else {
        unaff_x30 = (uint *******)&stack0x00000008;
        FUN_10891dca4();
      }
    }
    puVar26 = &stack0x00000008;
    FUN_10891dbfc(puVar26);
    break;
  case 0x9e:
    pppppppuVar36 = (uint *******)0x10883dda8;
    goto code_r0x00010883e18c;
  case 0x9f:
    goto code_r0x000108847d70;
  case 0xa2:
    auVar69._8_8_ = unaff_x30;
    auVar69._0_8_ = param_4;
    return auVar69;
  case 0xa3:
  case 0xbb:
    goto code_r0x000108847d8c;
  case 0xa4:
  case 199:
    goto code_r0x0001088461ac;
  case 0xa5:
    pppppppuVar22 = (uint *******)(param_4 + 4);
    pppppppuStack_18 = (uint *******)param_4;
    ppuVar33 = param_4;
    pppppppuStack_8 = unaff_x30;
    goto code_r0x00010054ebfc;
  case 0xa7:
    if (((ulong)pppppppuVar17 & (ulong)extraout_x14) == 0) {
      pppppppuVar23 = (uint *******)((ulong)extraout_x16 & (ulong)extraout_x14);
    }
    else {
      pppppppuVar23 = extraout_x16;
      if (pppppppuVar17 <= extraout_x16) {
        uVar5 = 0;
        if (pppppppuVar17 != (uint *******)0x0) {
          uVar5 = (ulong)extraout_x16 / (ulong)pppppppuVar17;
        }
        pppppppuVar23 = (uint *******)((long)extraout_x16 - uVar5 * (long)pppppppuVar17);
      }
    }
    ppppppuVar32 = extraout_x15;
    if (pppppppuVar23 != (uint *******)&UNK_10df5b974) {
      *(undefined8 **)(extraout_x13 + (long)pppppppuVar23 * 8) = puVar26;
      ppppppuVar32 = *unaff_x30;
    }
    *puVar26 = ppppppuVar32;
    *unaff_x30 = (uint ******)0x0;
    param_4[3] = (undefined *)((long)param_4[3] + -1);
    *ppuVar16 = (undefined *)unaff_x30;
    ppuVar16[1] = (undefined *)extraout_x12;
    *(undefined1 *)(ppuVar16 + 2) = 1;
    *(undefined4 *)((long)ppuVar16 + 0x11) = 0;
    *(undefined4 *)((long)ppuVar16 + 0x14) = 0;
    auVar62._8_8_ = unaff_x30;
    auVar62._0_8_ = param_4;
    return auVar62;
  case 0xa8:
  case 0xca:
    ppppppuVar32 = (uint ******)*param_4;
    *param_4 = (undefined *)0x0;
    if (ppppppuVar32 == (uint ******)0x0) goto code_r0x000100699568;
code_r0x000108847d70:
    __ZdlPv();
code_r0x000100699568:
    auVar51._8_8_ = unaff_x30;
    auVar51._0_8_ = param_4;
    return auVar51;
  case 0xa9:
  case 0xcf:
    goto code_r0x00010884898c;
  case 0xaa:
    if (((ulong)param_4 & 1) != 0) {
      func_0x000108847e88();
    }
    func_0x00010884789c();
    param_4[7] = (undefined *)pppppppuVar19;
    func_0x000108847e7c();
    goto code_r0x00010884517c;
  case 0xad:
    goto code_r0x000108839d28;
  case 0xae:
    param_4[1] = (undefined *)0x0;
    auVar68._8_8_ = unaff_x30;
    auVar68._0_8_ = param_4;
    return auVar68;
  case 0xb4:
    unaff_x30 = (uint *******)&stack0x00000008;
    FUN_10891e7f4();
    puVar26 = &stack0x00000008;
    FUN_10891e74c(puVar26);
    break;
  case 0xb5:
    FUN_10884ce84(2);
    func_0x00010884d0c4();
    if ((bool)in_ZR) {
      func_0x00010884d040();
      func_0x00010884cf10();
      if (unaff_x23 != (uint *******)0x0) {
        func_0x00010884cee8();
        func_0x00010884cfe4();
        func_0x00010884cfcc();
        func_0x00010884d144();
        func_0x00010884d058();
        if ((((ulong)unaff_x23 & 1) != 0) && (_uStack00000000000000a8 != 0)) {
          func_0x00010884cf80();
          do {
            if (unaff_x26 == (uint *******)0x0) goto LAB_10884b23c;
            FUN_10884cff4();
          } while ((int)param_4 == 0);
          func_0x00010884cebc();
          func_0x00010884d07c();
          func_0x00010884d128();
          if (((byte)pppppppuStack_8 & 1) == 0) {
            func_0x000104bdc2c8();
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10884b294);
            (*pcVar11)();
          }
          func_0x00010884d04c();
        }
LAB_10884b23c:
        func_0x00010884d110();
      }
    }
    if ((uVar34 == 0) || (*(int *)unaff_x22 != 1 && *(int *)unaff_x22 != 0xe)) {
      func_0x00010884d168();
    }
    func_0x00010884d094();
    func_0x00010884d174();
    func_0x00010884cfb8();
    func_0x00010884d120();
    func_0x00010884d118();
    goto LAB_10884cf64;
  case 0xb6:
  case 0xdf:
    goto code_r0x000108845994;
  case 0xb7:
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
      uVar6 = 3;
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == (uint *******)param_4;
      unaff_x23 = (uint *******)(ulong)!(bool)in_ZR;
      uVar6 = 2;
    }
    FUN_10884ce84(uVar6);
    func_0x00010884d0c4();
    if ((bool)in_ZR) {
      func_0x00010884d040();
      func_0x00010884cf10();
      goto code_r0x00010884a500;
    }
    goto LAB_10884a554;
  case 0xb8:
    func_0x000107c33d08();
    ppppppuVar32 = *param_6;
    while (pppppppuVar23 = unaff_x21, param_7 != (uint *******)0x0) {
      param_7 = (uint *******)((ulong)pppppppuVar23 >> 1);
      in_stack_00000000 = (uint *******)ppuVar33;
      in_stack_00000008 = (uint *******)param_4;
      FUN_10883a51c();
      unaff_x21 = param_7;
      if ((long)*in_stack_00000008 < (long)ppppppuVar32) {
        param_4 = (undefined **)(in_stack_00000008 + 1);
        if ((long)param_4 - (long)*in_stack_00000000 == 0x1000) {
          in_stack_00000000 = in_stack_00000000 + 1;
          param_4 = (undefined **)*in_stack_00000000;
        }
        param_7 = (uint *******)((long)pppppppuVar23 + ~(ulong)param_7);
        ppuVar33 = (undefined **)in_stack_00000000;
        unaff_x21 = param_7;
      }
    }
    auVar61._8_8_ = param_4;
    auVar61._0_8_ = ppuVar33;
    return auVar61;
  case 0xb9:
    goto code_r0x00010884616c;
  case 0xba:
  case 0xc6:
    pppppppuVar23 = (uint *******)param_4;
    func_0x000108847e48();
    func_0x000108847ed0(0x19);
    if (((ulong)pppppppuVar23 & 1) != 0) {
      func_0x000108847e88();
    }
    func_0x0001088479c0();
    param_4[7] = (undefined *)pppppppuVar23;
    func_0x000108847e7c();
    if (!(bool)in_ZR) {
      pppppppuVar23 = (uint *******)pppppppuVar23[1];
      if (((ulong)pppppppuVar23 & 1) != 0) {
        func_0x000108847e5c();
        pppppppuVar23 = extraout_x9_12;
      }
      pppppppuVar22 = in_stack_00000010;
      if (((ulong)in_stack_00000010 & 1) != 0) {
        func_0x000108847eb4();
        pppppppuVar23 = extraout_x9_13;
        pppppppuVar22 = extraout_x11_26;
      }
      if (pppppppuVar23 == pppppppuVar22) {
        func_0x000108847f08();
      }
      else {
        unaff_x30 = (uint *******)&stack0x00000008;
        FUN_10891f234();
      }
    }
    puVar26 = &stack0x00000008;
    FUN_10891f18c(puVar26);
    break;
  case 0xbc:
    auVar53._8_8_ = unaff_x30;
    auVar53._0_8_ = param_4;
    return auVar53;
  case 0xbd:
    if ((bool)in_ZR) {
      unaff_x28[0x2d] = in_stack_000000e8;
      unaff_x28[0x2c] = in_stack_000000e0;
      in_stack_000000e8 = (uint ******)0x0;
      in_stack_000000f0 = (undefined **)0x0;
      in_stack_000000e0 = 0;
    }
    pppppppuStack_20._0_5_ = SUB85(in_stack_00000100,0);
    pppppppuStack_18 = (uint *******)CONCAT71(pppppppuStack_18._1_7_,1);
    func_0x000107c279a4(&stack0x000000e0);
    func_0x000107c3401c(&pppppuStack_58);
    unaff_x27 = (uint *******)(ulong)*(uint *)(unaff_x24 + 0x15);
    func_0x000107c29e60(&uStack_a0);
    unaff_x28[0x25] = unaff_x28[0x21];
    unaff_x28[0x24] = unaff_x28[0x20];
    ppppppuStack_70 = (uint ******)pppppppuStack_90;
    uStack_98 = 0;
    pppppppuStack_90 = (uint *******)0x0;
    uStack_a0 = 0;
    bVar13 = 1;
    goto code_r0x000108846da8;
  case 0xc1:
code_r0x0001088479a8:
    func_0x000108847e40();
    goto code_r0x0001088479ac;
  case 0xc4:
    do {
      FUN_1088395b4();
      pppppppuVar23 = (uint *******)&stack0x00000008;
      pppppppuVar22 = unaff_x23;
      FUN_1088391d0();
      pppppppuVar19 = pppppppuVar22;
      while( true ) {
        if ((pppppppuVar19 == unaff_x23) || ((long)unaff_x22 < (long)pppppppuVar19[0x10])) {
          auVar66._8_8_ = pppppppuVar23;
          auVar66._0_8_ = pppppppuVar22;
          return auVar66;
        }
        in_stack_00000008 = pppppppuVar19;
        if ((char)pppppppuRam000000011340e290 != '\x01') break;
        pppppppuVar23 = pppppppuVar19 + 8;
        pppppppuVar22 = (uint *******)ppuVar33;
        func_0x000107c28078(&PTR___tlv_bootstrap_11340e278,pppppppuVar23);
        if ((int)pppppppuVar22 == 0) break;
        pppppppuVar19 = (uint *******)pppppppuVar19[1];
      }
      FUN_1086c4ca0(param_4,pppppppuVar19 + 8);
      FUN_10867b1ac();
    } while( true );
  case 0xc5:
    auVar78._8_8_ = unaff_x30;
    auVar78._0_8_ = param_4;
    return auVar78;
  case 0xc9:
    puVar8 = &stack0xffffffffffffffd0;
    func_0x000107c2882c();
    func_0x0001088437d4();
    ppuVar33 = &PTR_PTR_113286e08;
    if (*(undefined ***)(puVar8 + 0x30) != (undefined **)0x0) {
      ppuVar33 = *(undefined ***)(puVar8 + 0x30);
    }
    auVar80._1_7_ = 0;
    auVar80[0] = 0 < (long)ppuVar33[0x24] &&
                 (ulong)((long)unaff_x30 + (0x758f0dfbf - (long)ppuVar33[0x24])) < 0xeb1e1bf7f;
    auVar80._8_8_ = unaff_x30;
    return auVar80;
  case 0xcb:
    goto code_r0x0001088461b0;
  case 0xcd:
    do {
      pppppppuStack_18 = (uint *******)((long)ppuVar16 + 1);
      func_0x000108840780(&pppppppuStack_90);
      while( true ) {
        func_0x00010867bb84(&stack0x00000080);
        if (*(char *)(ppuVar33 + 4) == '\x01') {
          pppppppuVar23 = (uint *******)(ppuVar33 + 3);
          func_0x0001072833b8(pppppppuVar23);
          FUN_10867b1ac(unaff_x21 + 5,pppppppuVar23);
        }
        else {
          *(char *)(unaff_x21 + 10) = (char)unaff_x27;
        }
        ppuVar33 = ppuVar33 + 6;
        if ((uint *******)ppuVar33 == unaff_x24) {
          ppppppuStack_48 = (uint ******)0x0;
          pppppppuVar23 = pppppppuStack_18;
          func_0x000107c27ab0(&ppppppuStack_48,pppppppuStack_18);
          for (pppppppuVar22 = pppppppuStack_20; pppppppuVar22 != (uint *******)0x0;
              pppppppuVar22 = (uint *******)*pppppppuVar22) {
            func_0x000107c27994(&pppppppuStack_90,pppppppuVar22 + 2);
            FUN_108767914(auStack_78,pppppppuVar22 + 5);
            cStack_50 = *(char *)(pppppppuVar22 + 10);
            pppppppuVar23 = (uint *******)&pppppppuStack_90;
            func_0x000107c29f64(&stack0x00000080,*(uint ******)((long)param_4[3] + 0x10),
                                pppppppuVar23,2);
            if (in_stack_00000250 == '\x01') {
              pppppppuVar23 = (uint *******)&pppppppuStack_90;
              func_0x000107c28840(&ppppppuStack_48,pppppppuVar23);
              if (pppppppuStack_60 == (uint *******)0x0) {
                _uStack0000000000000068 = (uint *******)0x0;
                in_stack_00000070 = (uint *******)0x0;
                in_stack_00000078 = (uint *******)0x0;
                func_0x000108841248(*(uint ******)((long)param_4[3] + 0x40));
                func_0x000108841200();
                func_0x00010884122c();
              }
              else {
                pppppppuVar23 = (uint *******)&pppppppuStack_90;
                FUN_108861b60(&stack0x00000068,*(uint ******)((long)param_4[3] + 0x10),pppppppuVar23
                              ,auStack_78,1);
                if (_uStack0000000000000068 == in_stack_00000070) {
                  if (cStack_50 == '\x01') {
                    in_stack_00000050 = (uint *******)0x0;
                    in_stack_00000038 = (uint *******)0x0;
                    _uStack0000000000000040 = (uint *******)0x0;
                    _uStack0000000000000048 = (uint *******)0x0;
                    pppppppuVar23 = (uint *******)&pppppppuStack_90;
                    (*(code *)***(uint ******)((long)param_4[3] + 0x40))
                              (*(uint ******)((long)param_4[3] + 0x40),pppppppuVar23,
                               &stack0x00000080,1,&stack0x00000050,&stack0x00000038);
                    func_0x000104be1274(&stack0x00000038);
                    func_0x00010867b9fc(&stack0x00000050);
                  }
                }
                else {
                  func_0x000108841248(*(uint ******)((long)param_4[3] + 0x40));
                  func_0x000108841200();
                  func_0x00010884122c();
                  pppppuVar15 = *(uint ******)((long)param_4[3] + 0x30);
                  FUN_10869ad4c(&stack0x00000050,ppppppuStack_68,0);
                  pppppppuVar23 = (uint *******)&pppppppuStack_90;
                  (*(code *)(*pppppuVar15)[0x2e])(pppppuVar15,pppppppuVar23,&stack0x00000050,0);
                  func_0x000107c27ae4(&stack0x00000050);
                }
              }
              func_0x00010867b9fc(&stack0x00000068);
            }
            func_0x000107c288c8(&stack0x00000080);
            FUN_1088402b4(&pppppppuStack_90);
          }
          if (ppppppuStack_48 != (uint ******)0x0) {
            pppppppuVar23 = &ppppppuStack_48;
            (*(code *)(**(uint ******)((long)param_4[3] + 0x30))[0x19])
                      (*(uint ******)((long)param_4[3] + 0x30),pppppppuVar23);
          }
          func_0x000107c27a04(&ppppppuStack_48);
          FUN_1088402dc(&stack0xffffffffffffffd0);
          FUN_108840334(param_4);
          func_0x0001088406b0(&stack0x00000020);
          puVar26 = &stack0x00000010;
          func_0x000107c29c60(puVar26);
          auVar77._8_8_ = pppppppuVar23;
          auVar77._0_8_ = puVar26;
          return auVar77;
        }
        in_stack_00000098 = 0;
        in_stack_00000090 = (uint *******)0x0;
        _uStack00000000000000a8 = 0;
        in_stack_00000088 = (uint *******)0x0;
        _uStack0000000000000080 = (uint *******)0x0;
        in_stack_000000a0 = 0x3f800000;
        pppppppuVar23 = (uint *******)ppuVar33;
        FUN_108848654();
        if (in_stack_ffffffffffffffd8 == (uint *******)0x0) break;
        uVar5 = (long)in_stack_ffffffffffffffd8 - 1;
        uVar14 = (uint)in_stack_ffffffffffffffd8;
        if (((ulong)in_stack_ffffffffffffffd8 & uVar5) == 0) {
          unaff_x23 = (uint *******)((ulong)(uVar14 - 1) & (ulong)pppppppuVar23);
        }
        else {
          unaff_x23 = pppppppuVar23;
          if (in_stack_ffffffffffffffd8 <= pppppppuVar23) {
            uVar34 = 0;
            if (uVar14 != 0) {
              uVar34 = (uint)pppppppuVar23 / uVar14;
            }
            unaff_x23 = (uint *******)(ulong)((uint)pppppppuVar23 - uVar34 * uVar14);
          }
        }
        unaff_x21 = *(uint ********)(in_stack_ffffffffffffffd0 + (long)unaff_x23 * 8);
        if (unaff_x21 == (uint *******)0x0) break;
        do {
          while( true ) {
            unaff_x21 = (uint *******)*unaff_x21;
            if (unaff_x21 == (uint *******)0x0) goto LAB_108840ac0;
            pppppppuVar22 = (uint *******)unaff_x21[1];
            if (pppppppuVar22 == pppppppuVar23) break;
            if (((ulong)in_stack_ffffffffffffffd8 & uVar5) == 0) {
              pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 & uVar5);
            }
            else if (in_stack_ffffffffffffffd8 <= pppppppuVar22) {
              uVar20 = 0;
              if (in_stack_ffffffffffffffd8 != (uint *******)0x0) {
                uVar20 = (ulong)pppppppuVar22 / (ulong)in_stack_ffffffffffffffd8;
              }
              pppppppuVar22 =
                   (uint *******)((long)pppppppuVar22 - uVar20 * (long)in_stack_ffffffffffffffd8);
            }
            if (pppppppuVar22 != unaff_x23) goto LAB_108840ac0;
          }
          pppppppuVar22 = unaff_x21 + 2;
          func_0x000107c28078(pppppppuVar22,ppuVar33);
        } while (((ulong)pppppppuVar22 & 1) == 0);
      }
LAB_108840ac0:
      unaff_x21 = (uint *******)0x58;
      __Znwm();
      *unaff_x21 = (uint ******)0x0;
      unaff_x21[1] = (uint ******)pppppppuVar23;
      pppppppuStack_90 = unaff_x21;
      func_0x000107c27994(unaff_x21 + 2,ppuVar33);
      FUN_1086af1f8(unaff_x21 + 5,&stack0x00000080);
      *(undefined1 *)(unaff_x21 + 10) = uStack00000000000000a8;
      if ((in_stack_ffffffffffffffd8 == (uint *******)0x0) ||
         (pppppppuStack_10._0_4_ * (float)in_stack_ffffffffffffffd8 <
          (float)((long)pppppppuStack_18 + 1))) {
        pppppppuVar22 = unaff_x27;
        if ((uint *******)0x2 < in_stack_ffffffffffffffd8) {
          pppppppuVar22 =
               (uint *******)
               (ulong)(((ulong)in_stack_ffffffffffffffd8 & (long)in_stack_ffffffffffffffd8 - 1U) !=
                      0);
        }
        pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 | (long)in_stack_ffffffffffffffd8 << 1);
        pppppppuVar19 =
             (uint *******)(long)((float)((long)pppppppuStack_18 + 1) / pppppppuStack_10._0_4_);
        if (pppppppuVar22 <= pppppppuVar19) {
          pppppppuVar22 = pppppppuVar19;
        }
        if ((long)pppppppuVar22 - 1U == 0) {
          pppppppuVar22 = (uint *******)0x2;
        }
        else if (((ulong)pppppppuVar22 & (long)pppppppuVar22 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        if (in_stack_ffffffffffffffd8 < pppppppuVar22) {
LAB_108840b78:
          if ((ulong)pppppppuVar22 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x108840ff4);
            (*pcVar11)();
          }
          lVar24 = (long)pppppppuVar22 << 3;
          __Znwm(lVar24);
          FUN_1088407c0(&stack0xffffffffffffffd0,lVar24);
          for (pppppppuVar19 = (uint *******)0x0; pppppppuVar22 != pppppppuVar19;
              pppppppuVar19 = (uint *******)((long)pppppppuVar19 + 1)) {
            *(undefined8 *)(in_stack_ffffffffffffffd0 + (long)pppppppuVar19 * 8) = 0;
          }
          in_stack_ffffffffffffffd8 = pppppppuVar22;
          if (pppppppuStack_20 != (uint *******)0x0) {
            pppppppuVar19 = (uint *******)pppppppuStack_20[1];
            uVar20 = (long)pppppppuVar22 - 1;
            uVar5 = 0;
            if (pppppppuVar22 != (uint *******)0x0) {
              uVar5 = (ulong)pppppppuVar19 / (ulong)pppppppuVar22;
            }
            pppppppuVar21 = pppppppuVar19;
            if (pppppppuVar22 <= pppppppuVar19) {
              pppppppuVar21 = (uint *******)((long)pppppppuVar19 - uVar5 * (long)pppppppuVar22);
            }
            if (((ulong)pppppppuVar22 & uVar20) == 0) {
              pppppppuVar21 = (uint *******)((ulong)pppppppuVar19 & uVar20);
            }
            *(uint ********)(in_stack_ffffffffffffffd0 + (long)pppppppuVar21 * 8) = unaff_x25;
            pppppppuVar19 = pppppppuStack_20;
            while (pppppppuVar17 = pppppppuVar19, pppppppuVar19 = (uint *******)*pppppppuVar17,
                  pppppppuVar19 != (uint *******)0x0) {
              pppppppuVar29 = (uint *******)pppppppuVar19[1];
              if (((ulong)pppppppuVar22 & uVar20) == 0) {
                pppppppuVar29 = (uint *******)((ulong)pppppppuVar29 & uVar20);
              }
              else if (pppppppuVar22 <= pppppppuVar29) {
                uVar5 = 0;
                if (pppppppuVar22 != (uint *******)0x0) {
                  uVar5 = (ulong)pppppppuVar29 / (ulong)pppppppuVar22;
                }
                pppppppuVar29 = (uint *******)((long)pppppppuVar29 - uVar5 * (long)pppppppuVar22);
              }
              if (pppppppuVar29 != pppppppuVar21) {
                if (*(long *)(in_stack_ffffffffffffffd0 + (long)pppppppuVar29 * 8) == 0) {
                  *(uint ********)(in_stack_ffffffffffffffd0 + (long)pppppppuVar29 * 8) =
                       pppppppuVar17;
                  pppppppuVar21 = pppppppuVar29;
                }
                else {
                  *pppppppuVar17 = *pppppppuVar19;
                  *pppppppuVar19 =
                       (uint ******)
                       **(undefined8 **)(in_stack_ffffffffffffffd0 + (long)pppppppuVar29 * 8);
                  **(undefined8 **)(in_stack_ffffffffffffffd0 + (long)pppppppuVar29 * 8) =
                       pppppppuVar19;
                  pppppppuVar19 = pppppppuVar17;
                }
              }
            }
          }
        }
        else if (pppppppuVar22 < in_stack_ffffffffffffffd8) {
          pppppppuVar19 = (uint *******)(long)((float)pppppppuStack_18 / pppppppuStack_10._0_4_);
          if ((in_stack_ffffffffffffffd8 < (uint *******)0x3) ||
             (((ulong)in_stack_ffffffffffffffd8 & (long)in_stack_ffffffffffffffd8 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((uint *******)0x1 < pppppppuVar19) {
            pppppppuVar19 =
                 (uint *******)((long)unaff_x27 << (-LZCOUNT((long)pppppppuVar19 + -1) & 0x3fU));
          }
          if (pppppppuVar22 <= pppppppuVar19) {
            pppppppuVar22 = pppppppuVar19;
          }
          if (pppppppuVar22 < in_stack_ffffffffffffffd8) {
            if (pppppppuVar22 != (uint *******)0x0) goto LAB_108840b78;
            FUN_1088407c0(&stack0xffffffffffffffd0,0);
            in_stack_ffffffffffffffd8 = (uint *******)0x0;
          }
        }
        if (((ulong)in_stack_ffffffffffffffd8 & (long)in_stack_ffffffffffffffd8 - 1U) == 0) {
          unaff_x23 = (uint *******)
                      ((ulong)((int)in_stack_ffffffffffffffd8 - 1) & (ulong)pppppppuVar23);
        }
        else {
          unaff_x23 = pppppppuVar23;
          if (in_stack_ffffffffffffffd8 <= pppppppuVar23) {
            uVar5 = 0;
            if (in_stack_ffffffffffffffd8 != (uint *******)0x0) {
              uVar5 = (ulong)pppppppuVar23 / (ulong)in_stack_ffffffffffffffd8;
            }
            unaff_x23 = (uint *******)
                        ((long)pppppppuVar23 - uVar5 * (long)in_stack_ffffffffffffffd8);
          }
        }
      }
      puVar26 = *(undefined8 **)(in_stack_ffffffffffffffd0 + (long)unaff_x23 * 8);
      if (puVar26 == (undefined8 *)0x0) {
        *unaff_x21 = (uint ******)pppppppuStack_20;
        *(uint ********)(in_stack_ffffffffffffffd0 + (long)unaff_x23 * 8) = unaff_x25;
        pppppppuStack_20 = unaff_x21;
        if (*unaff_x21 != (uint ******)0x0) {
          pppppppuVar23 = (uint *******)(*unaff_x21)[1];
          if (((ulong)in_stack_ffffffffffffffd8 & (long)in_stack_ffffffffffffffd8 - 1U) == 0) {
            pppppppuVar23 =
                 (uint *******)((ulong)pppppppuVar23 & (long)in_stack_ffffffffffffffd8 - 1U);
          }
          else if (in_stack_ffffffffffffffd8 <= pppppppuVar23) {
            uVar5 = 0;
            if (in_stack_ffffffffffffffd8 != (uint *******)0x0) {
              uVar5 = (ulong)pppppppuVar23 / (ulong)in_stack_ffffffffffffffd8;
            }
            pppppppuVar23 =
                 (uint *******)((long)pppppppuVar23 - uVar5 * (long)in_stack_ffffffffffffffd8);
          }
          *(uint ********)(in_stack_ffffffffffffffd0 + (long)pppppppuVar23 * 8) = unaff_x21;
        }
      }
      else {
        *unaff_x21 = (uint ******)*puVar26;
        *puVar26 = unaff_x21;
      }
      pppppppuStack_90 = (uint *******)0x0;
      ppuVar16 = (undefined **)pppppppuStack_18;
    } while( true );
  case 0xce:
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    auVar98._8_8_ = unaff_x30;
    auVar98._0_8_ = param_4;
    return auVar98;
  case 0xd0:
  case 0xe1:
    goto code_r0x000108845d60;
  case 0xd5:
    func_0x000107c340f0();
    func_0x00010884d108();
    pcVar11 = FUN_108849cc0;
    func_0x000107c34124();
    in_stack_00000110 = pppppppuVar23;
    in_stack_00000118 = (uint *******)pcVar11;
    func_0x000107c340b4();
    func_0x000107c340fc();
    param_4[1] = (undefined *)0x0;
    param_4[2] = (undefined *)0x0;
    *param_4 = (undefined *)&PTR_FUN_110a7bae8;
    func_0x000107c340d0();
    if (unaff_x22 != (uint *******)0x0) {
      do {
        func_0x000107c340d8();
      } while (extraout_w11_01 != 0);
    }
    func_0x000107c340b8();
    pppppppuVar23 = extraout_x8_52;
    if (extraout_x9_18 != 0) {
      do {
        func_0x000107c340d8();
        pppppppuVar23 = extraout_x8_53;
      } while (extraout_w11_02 != 0);
    }
    in_stack_00000018 = pppppppuVar23;
    in_stack_00000020 = param_4;
    func_0x000107c340d4();
    goto code_r0x000108849d28;
  case 0xd7:
    goto code_r0x00010884618c;
  case 0xd8:
    puVar8 = &stack0x00000430;
    func_0x000107c28824(puVar8,&stack0x00000810,unaff_x22[0x11340e278]);
    func_0x00010883f7fc();
    if (*(char *)(param_4 + 4) == '\x01') {
      func_0x00010873a0a8();
      lVar24 = 0x1e1;
      if (*(char *)param_4 == '\0') {
        lVar24 = 0x1e2;
      }
    }
    else {
      lVar24 = 0x1e0;
    }
    func_0x000107c278b8(&stack0x00000810,PTR_DAT_113268e60);
    func_0x000107c28824(puVar8,&stack0x00000810,unaff_x22[lVar24]);
    func_0x00010883f7fc();
    func_0x000107c2884c(&stack0x00000810,puVar8);
    puVar8 = &stack0x00000810;
    (*(code *)(*unaff_x21)[10])();
    func_0x000107c2882c(&stack0x00000810);
    func_0x000107c2882c(&stack0x00000430);
    func_0x000107c27a04(&pppppppuStack_8);
    func_0x000107c288a4();
    func_0x000107c28ab8(&stack0x00000010);
    func_0x000107c28800(&stack0x00000020);
    func_0x000107c28ab4(&stack0x00000030);
    puVar26 = (undefined8 *)&stack0x00000040;
    func_0x000107c28808(puVar26);
    auVar70._8_8_ = puVar8;
    auVar70._0_8_ = puVar26;
    return auVar70;
  case 0xda:
    in_stack_00000018 = param_1;
    FUN_108843514(&stack0x00000020,&stack0x00000008);
  case 0xea:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x108843504);
    (*pcVar11)();
  case 0xdd:
    (*(code *)*(uint ******)param_4[6])(param_4 + 6);
    func_0x000104be3970(&PTR___tlv_bootstrap_11340e278);
    __Unwind_Resume();
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    pppppppuStack_8 = (uint *******)FUN_10883fce0;
    ppppppuVar32 = unaff_x21[1];
    unaff_x21[1] = (uint ******)((long)ppppppuVar32 + -1);
    if ((uint ******)((long)ppppppuVar32 + -1) != (uint ******)0x0) {
      auVar72._8_8_ = 0;
      auVar72._0_8_ = unaff_x21;
      return auVar72;
    }
    pppppppuStack_18 = (uint *******)param_4;
    pppppppuStack_10 = pppppppuVar23;
    (*(code *)unaff_x21[5])(unaff_x21 + 5);
    if (*(char *)((long)unaff_x21 + 0x24) == '\x01') {
      ppppppuVar32 = unaff_x21[2];
      uVar5 = (ulong)*(uint *)(unaff_x21 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010883fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*ppppppuVar32)[3])(ppppppuVar32,uVar5);
      auVar73._8_8_ = uVar5;
      auVar73._0_8_ = ppppppuVar32;
      return auVar73;
    }
    ppppppuVar32 = unaff_x21[2];
    UNRECOVERED_JUMPTABLE = (*ppppppuVar32)[2];
                    /* WARNING: Could not recover jumptable at 0x00010883fd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar74._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar74._0_8_ = ppppppuVar32;
    return auVar74;
  case 0xde:
    in_stack_00000160 = pppppppuVar23;
    func_0x00010884cfa0();
    if ((int)param_4 != 0) {
      FUN_108848d1c();
    }
    func_0x00010884d0e4();
    if ((bool)in_ZR) {
      func_0x00010884cf48();
      func_0x00010884d180();
      if ((bool)in_ZR) {
        func_0x00010884d088();
        func_0x00010884d070();
        func_0x00010884d064();
        func_0x00010884d0d4();
      }
      else {
        func_0x00010884cf2c();
        in_ZR = unaff_x23 == (uint *******)param_4;
        unaff_x23 = (uint *******)(ulong)!(bool)in_ZR;
      }
    }
    else {
      func_0x00010884d130();
    }
    FUN_10884ce84();
    func_0x00010884d0c4();
    if ((bool)in_ZR) {
      func_0x00010884d040();
      func_0x00010884cf10();
      if (unaff_x23 != (uint *******)0x0) {
        func_0x00010884cee8();
        func_0x00010884cfe4();
        func_0x00010884cfcc();
        func_0x00010884d144();
        func_0x00010884d058();
        if ((((ulong)unaff_x23 & 1) != 0) && (_uStack00000000000000a8 != 0)) {
          func_0x00010884cf80();
          do {
            if (unaff_x26 == (uint *******)0x0) goto LAB_10884a228;
            FUN_10884cff4();
          } while ((int)param_4 == 0);
          func_0x00010884cebc();
          func_0x00010884d07c();
          func_0x00010884d128();
          if (((ulong)in_stack_00000108 & 1) == 0) {
            func_0x000104bdc2c8();
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10884a280);
            (*pcVar11)();
          }
          func_0x00010884d04c();
        }
LAB_10884a228:
        func_0x00010884d110();
      }
    }
    if ((uVar34 == 0) || (*(int *)unaff_x22 != 1 && *(int *)unaff_x22 != 0xe)) {
      func_0x00010884d168();
    }
    func_0x00010884d094();
    func_0x00010884d174();
    func_0x00010884cfb8();
    func_0x00010884d120();
    func_0x00010884d118();
    goto LAB_10884cf64;
  case 0xe0:
    goto code_r0x000108848d7c;
  case 0xe2:
    func_0x00010873a20c();
    func_0x000107c290c0(&stack0x00000090);
    pppppppuVar22 = (uint *******)&stack0xffffffffffffffc0;
    pppppppuVar19 = (uint *******)0x10883f0cc;
code_r0x00010054fa10:
    *(undefined ***)((long)register0x00000008 + -0x20) = ppuVar33;
    *(undefined ***)((long)register0x00000008 + -0x18) = param_4;
    *(uint ********)((long)register0x00000008 + -0x10) = pppppppuVar23;
    *(uint ********)((long)register0x00000008 + -8) = pppppppuVar19;
    func_0x0001000dfb88();
    if (pppppppuVar22 != (uint *******)0x0) {
      func_0x000107c60d68();
    }
    auVar40._8_8_ = unaff_x30;
    auVar40._0_8_ = param_4;
    return auVar40;
  case 0xe4:
    if ((uint *******)param_4 == (uint *******)0x0) goto code_r0x0001088479a8;
    func_0x000108847dbc();
code_r0x0001088479ac:
    func_0x000108847dc8(&UNK_110a95590);
    goto code_r0x000100699568;
  case 0xe6:
code_r0x00010884a500:
    if (unaff_x23 != (uint *******)0x0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if ((((ulong)unaff_x23 & 1) != 0) && (_uStack00000000000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == (uint *******)0x0) goto LAB_10884a550;
          FUN_10884cff4();
        } while ((int)param_4 == 0);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if (((byte)pppppppuStack_8 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10884a5a8);
          (*pcVar11)();
        }
        func_0x00010884d04c();
      }
LAB_10884a550:
      func_0x00010884d110();
    }
LAB_10884a554:
    if ((uVar34 == 0) || (*(int *)unaff_x22 != 1 && *(int *)unaff_x22 != 0xe)) {
      func_0x00010884d168();
    }
    func_0x00010884d094();
    func_0x00010884d174();
    func_0x00010884cfb8();
    func_0x00010884d120();
code_r0x00010884a594:
    func_0x00010884d118();
LAB_10884cf64:
    auVar95._8_8_ = unaff_x30;
    auVar95._0_8_ = param_4;
    return auVar95;
  case 0xe7:
code_r0x000108839cf0:
    unaff_x27 = unaff_x30;
    if (!(bool)in_ZR) {
      unaff_x27 = unaff_x21;
    }
    *unaff_x30 = *unaff_x22;
    param_4[5] = (undefined *)((long)param_4[5] + 1);
    param_4[4] = (undefined *)((long)param_4[4] + -1);
    in_ZR = (uint *******)ppuVar33 == (uint *******)0x1;
    goto code_r0x000108839d14;
  case 0xe8:
    goto code_r0x0001088495b8;
  case 0xf8:
code_r0x00010883918c:
    FUN_1088391d0();
    uVar6 = 1;
    unaff_x30 = pppppppuVar36;
    goto LAB_108839160;
  case 0xf9:
    goto code_r0x000108845ca4;
  case 0xfa:
    goto code_r0x000108849980;
  case 0xfc:
    goto code_r0x0001088461a8;
  case 0xff:
    pppppppuStack_20 = (uint *******)&PTR___tlv_bootstrap_11340e278;
    pppppppuStack_18 = (uint *******)param_4;
    pppppppuStack_10 = pppppppuVar23;
    pppppppuStack_8 = unaff_x30;
    func_0x00010054ee70();
    pppppppuVar22 = (uint *******)param_4;
    ppuVar33 = (undefined **)pppppppuStack_20;
    pppppppuVar23 = pppppppuStack_10;
    goto code_r0x00010054ebfc;
  }
LAB_108845434:
  auVar84._8_8_ = unaff_x30;
  auVar84._0_8_ = puVar26;
  return auVar84;
code_r0x000108849d28:
  FUN_10892ddd8();
  param_4 = (undefined **)&stack0x00000018;
  FUN_10884c5b0(param_4);
  func_0x000107c340f0();
  goto code_r0x00010061dcfc;
code_r0x00010884517c:
  if (!(bool)in_ZR) {
    pppppppuVar22 = (uint *******)pppppppuVar19[1];
    if (((ulong)pppppppuVar22 & 1) != 0) {
      func_0x000108847e5c();
      pppppppuVar22 = extraout_x9_10;
    }
code_r0x00010884518c:
    pppppppuVar17 = in_stack_00000010;
    if (((ulong)in_stack_00000010 & 1) == 0) {
code_r0x000108845194:
    }
    else {
      func_0x000108847eb4();
      pppppppuVar22 = extraout_x9_11;
      pppppppuVar17 = extraout_x11_25;
    }
    if (pppppppuVar22 == pppppppuVar17) {
      func_0x000108847f08();
    }
    else {
      unaff_x30 = (uint *******)&stack0x00000008;
code_r0x0001088451a4:
      FUN_10891fb34();
code_r0x0001088451a8:
    }
  }
  puVar26 = &stack0x00000008;
  FUN_10891fa8c(puVar26);
  goto LAB_108845434;
code_r0x0001088449a4:
  unaff_x30 = unaff_x30 + 0x1fe;
  func_0x000108847ec0();
  if (((ulong)param_4 & 1) == 0) {
    unaff_x30 = (uint *******)&DAT_10f4bdff7;
    func_0x000108847ec0();
    iVar4 = (int)param_4;
    if (((ulong)param_4 & 1) == 0) {
      unaff_x30 = (uint *******)&DAT_10f4be00a;
      func_0x000108847ec0();
      uVar14 = 5;
      if (iVar4 == 0) {
        uVar14 = 3;
      }
      param_4 = (undefined **)(ulong)uVar14;
    }
    else {
      param_4 = (undefined **)0x4;
    }
  }
  else {
    param_4 = (undefined **)0x3;
  }
  goto code_r0x00010069adcc;
code_r0x00010883e18c:
  ppuVar33 = param_4;
code_r0x00010883e194:
  pppppppuStack_8 = pppppppuVar36;
  pppppppuVar22 = (uint *******)(param_4 + 9);
  pppppppuStack_18 = (uint *******)param_4;
  goto code_r0x00010054ebfc;
code_r0x00010882d1a8:
  func_0x00010882f058();
  if ((bool)in_ZR) {
    func_0x00010882e988();
    func_0x00010882e484();
    func_0x00010882e4d8();
    func_0x00010882fa54();
  }
  func_0x00010882f048();
  *(uint ********)(extraout_x8_30 + 0x20) = unaff_x22;
code_r0x0001005671d8:
  func_0x00010882ea40(unaff_x21[0x12]);
  unaff_x21[2] = (uint ******)0x0;
  auVar42._8_8_ = unaff_x30;
  auVar42._0_8_ = pppppppuVar19;
  return auVar42;
code_r0x000108846da8:
  ppppppuStack_68 = (uint ******)CONCAT71(ppppppuStack_68._1_7_,bVar13);
  if (*(char *)(unaff_x22 + 0x21) == '\x01') {
    in_stack_00000170 = 0;
    in_stack_00000180 = (undefined **)0x0;
    ppppppuVar27 = unaff_x22[0x1f];
    for (ppppppuVar32 = unaff_x22[0x1e]; ppppppuVar32 != ppppppuVar27;
        ppppppuVar32 = ppppppuVar32 + 3) {
      FUN_1086c2e14(&stack0x00000170,ppppppuVar32);
    }
    in_stack_000000e8 = (uint ******)unaff_x28[1];
    in_stack_000000e0 = *unaff_x28;
    in_stack_000000f0 = in_stack_00000180;
    in_stack_00000170 = 0;
    in_stack_00000180 = (undefined **)0x0;
    in_stack_000000f8 = (uint *******)CONCAT71(in_stack_000000f8._1_7_,1);
    FUN_10869e32c(&stack0x00000250,&stack0x000000e0);
    func_0x000107c27a3c(&stack0x000000e0);
    func_0x000104be1594(&stack0x00000170);
  }
  func_0x000107c29e5c(&stack0x00000238);
  uStack000000000000006c = (uint)unaff_x27;
  func_0x000107c27994(&stack0x00000220);
  func_0x000107c33f9c(unaff_x22[0xd]);
  func_0x000107c29ee0(&stack0x00000208);
  func_0x000107c29e2c(&stack0x000001e8,unaff_x22 + 10);
  func_0x000107c29e6c(&stack0x000001d0);
  func_0x000107c29ea4(&stack0x00000190);
  func_0x000107c29e4c(unaff_x22 + 10,in_stack_00000070);
  in_stack_00000170 = in_stack_00000170 & 0xffffffffffffff00;
  in_stack_00000188 = 0;
  func_0x000107c28bd0(&stack0x00000140,&stack0xffffffffffffffc0);
  func_0x000107c3407c(unaff_x24[0x14]);
  func_0x000107c29270(&stack0x000000e0);
  func_0x000107c29ea8(&stack0x00000118,&stack0x000000e0);
  func_0x000107c29e44(&stack0x00000078);
code_r0x000100693194:
  uVar5 = 0;
  if ((uStack000000000000006c < 0x26) &&
     ((1L << ((ulong)uStack000000000000006c & 0x3f) & 0x3fffffff7fU) != 0)) {
    uVar5 = (ulong)*(uint *)(&UNK_10df61ad4 + (ulong)uStack000000000000006c * 4);
  }
  auVar49._8_8_ = in_stack_00000070;
  auVar49._0_8_ = uVar5;
  return auVar49;
code_r0x000108847d8c:
code_r0x000108847d9c:
  auVar83._8_8_ = unaff_x30;
  auVar83._0_8_ = param_4;
  return auVar83;
code_r0x000108848d60:
  _uStack0000000000000048 = (uint *******)in_stack_00000020;
  _uStack0000000000000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000018 = (uint *******)0x0;
  in_stack_00000020 = (undefined **)0x0;
  in_stack_00000028 = (uint *******)0x0;
  in_stack_00000038 = (uint *******)ppuVar16;
code_r0x000108848d7c:
  in_stack_00000000 = (uint *******)0x0;
  in_stack_00000008 = (uint *******)0x0;
  in_stack_00000010 = (uint *******)0x0;
  ppuVar16 = (undefined **)pppppppuVar29;
code_r0x000108848d90:
  in_stack_00000078 = (uint *******)CONCAT71(in_stack_00000078._1_7_,1);
  unaff_x30 = (uint *******)&stack0x00000030;
  _uStack0000000000000068 = (uint *******)ppuVar16;
  in_stack_00000070 = (uint *******)param_4;
  func_0x00010bcc46f8(param_4,unaff_x30);
  param_4 = (undefined **)&stack0x00000030;
  func_0x00010786e114(param_4);
code_r0x000108848db0:
  func_0x00010884d198();
  func_0x000107c34108();
  auVar93._8_8_ = unaff_x30;
  auVar93._0_8_ = param_4;
  return auVar93;
code_r0x000108839d14:
  in_stack_00000010 = (uint *******)ppuVar33;
  if (!(bool)in_ZR) {
    in_stack_00000070 = unaff_x23;
    in_stack_00000078 = unaff_x22;
    FUN_10883a51c(&stack0x00000070,1);
    in_stack_00000008 = in_stack_00000078;
    in_stack_00000000 = in_stack_00000070;
    pppppppuVar23 = (uint *******)&stack0x00000018;
    func_0x00010883b298();
    in_stack_00000078 = in_stack_00000008;
    in_stack_00000070 = in_stack_00000000;
    in_stack_00000028 = unaff_x23;
    in_stack_00000030 = (undefined **)unaff_x22;
    _uStack0000000000000040 = pppppppuVar23;
    _uStack0000000000000048 = (uint *******)ppuVar33;
    func_0x00010883ce14();
    for (; pppppppuVar22 = in_stack_00000078, unaff_x30 = (uint *******)ppuVar33,
        0 < (long)pppppppuVar23;
        pppppppuVar23 = (uint *******)((long)pppppppuVar23 - (long)pppppppuVar19)) {
      pppppppuVar17 =
           (uint *******)((long)(*in_stack_00000070 + 0x200) - (long)in_stack_00000078 >> 3);
      pppppppuVar19 = pppppppuVar17;
      if ((long)pppppppuVar23 <= (long)pppppppuVar17) {
        pppppppuVar19 = pppppppuVar23;
      }
      pppppppuVar29 = in_stack_00000078 + (long)pppppppuVar23;
      if ((long)pppppppuVar17 <= (long)pppppppuVar23) {
        pppppppuVar29 = (uint *******)(*in_stack_00000070 + 0x200);
      }
      if (in_stack_00000078 <= unaff_x27 && unaff_x27 < pppppppuVar29) {
        puVar26 = &stack0x00000070;
        FUN_1086f6b4c(puVar26,&stack0x00000028);
        pppppppuVar21[-0xd] = (uint ******)in_stack_00000070;
        pppppppuVar21[-0xc] = (uint ******)unaff_x27;
        FUN_10883b78c(pppppppuVar21 + -0xd,-(long)puVar26);
        unaff_x27 = (uint *******)pppppppuVar21[-0xc];
        unaff_x22 = (uint *******)in_stack_00000030;
        unaff_x23 = in_stack_00000028;
      }
      if (pppppppuVar22 != pppppppuVar29) {
        pppppppuVar17 = (uint *******)*unaff_x23;
        while( true ) {
          pppppppuVar31 = unaff_x23 + 1;
          lVar18 = (long)pppppppuVar17 + (0x1000 - (long)unaff_x22) >> 3;
          lVar24 = (long)pppppppuVar29 - (long)pppppppuVar22 >> 3;
          if (lVar18 <= lVar24) {
            lVar24 = lVar18;
          }
          if (lVar24 != 0) {
            _memmove(unaff_x22,pppppppuVar22,lVar24 * 8);
          }
          pppppppuVar22 = pppppppuVar22 + lVar24;
          if (pppppppuVar29 == pppppppuVar22) break;
          pppppppuVar17 = (uint *******)*pppppppuVar31;
          unaff_x22 = pppppppuVar17;
          unaff_x23 = pppppppuVar31;
        }
        unaff_x22 = unaff_x22 + lVar24;
        if (unaff_x22 == (uint *******)(*unaff_x23 + 0x200)) {
          unaff_x22 = (uint *******)*pppppppuVar31;
          unaff_x23 = pppppppuVar31;
        }
      }
      ppuVar33 = (undefined **)pppppppuVar19;
      in_stack_00000028 = unaff_x23;
      in_stack_00000030 = (undefined **)unaff_x22;
      FUN_10883a51c(&stack0x00000070);
    }
  }
  *unaff_x22 = *unaff_x27;
  ppuVar33 = (undefined **)in_stack_00000010;
code_r0x000108839d28:
  unaff_x26 = unaff_x30;
LAB_108839d60:
  func_0x000107c29460();
  puVar26 = &stack0x00000070;
  in_stack_00000070 = (uint *******)param_4;
  in_stack_00000078 = unaff_x26;
  func_0x00010883b298(puVar26,ppuVar33);
  auVar60._8_8_ = ppuVar33;
  auVar60._0_8_ = puVar26;
  return auVar60;
}



/* Entry: 10882d2e4; end: 10882d36f;  */

void FUN_10882d2e4(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  uint extraout_w8;
  code *pcVar3;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  int extraout_w10;
  long lVar4;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar5;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long unaff_x19;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x23;
  
  func_0x000107c33a80();
  plVar6 = (long *)(unaff_x19 + 0x60);
  plVar7 = (long *)(unaff_x19 + 0x80);
  pcVar3 = (code *)(ulong)*(byte *)(unaff_x19 + 0x140);
  uVar5 = (ulong)(byte)pcVar3[0x10df5b988];
  lVar4 = uVar5 * 4 + 0x10882d31c;
  uVar1 = in_ZR;
  plVar2 = param_1;
  switch(*(byte *)(unaff_x19 + 0x140)) {
  case 0:
    break;
  case 1:
  case 4:
  case 0x28:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0xd0:
    func_0x000107c27f9c();
  case 0x44:
    break;
  case 2:
  case 3:
    func_0x000107c27f9c(plVar6);
    break;
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
  case 0x48:
    break;
  case 10:
  case 0x29:
  case 0x50:
  case 0x7c:
  case 0x9a:
  case 0xbb:
  case 0xd1:
  case 0xef:
    do {
      param_1 = plVar6;
      (*pcVar3)();
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x60);
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
code_r0x00010882d468:
      func_0x000107c27f98();
      func_0x00010882f0a0();
      *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x90);
      do {
        func_0x00010882e6b8();
      } while (extraout_w10 != 0);
      func_0x00010882effc(*(undefined8 *)(unaff_x19 + 0x88));
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0xa8) = 1;
code_r0x00010882d498:
        plVar6 = *(long **)(unaff_x19 + 0x88);
        func_0x00010882e57c();
code_r0x00010882d4a0:
        if (*param_1 == 0) {
code_r0x00010882d4a8:
          func_0x000107c3a5c0();
code_r0x00010882d4ac:
        }
LAB_10882d4b0:
        func_0x00010882f560();
        pcVar3 = extraout_x8_02;
        do {
          lVar4 = *(long *)pcVar3;
code_r0x00010882d4b8:
          if (lVar4 == 0) {
            func_0x00010882e74c();
            pcVar3 = extraout_x8_04;
            lVar4 = extraout_x10_00;
            uVar5 = extraout_x11_00;
code_r0x00010882d4cc:
          }
          else {
code_r0x00010882d4bc:
            func_0x00010882f020();
            pcVar3 = extraout_x8_03;
            lVar4 = extraout_x10;
            uVar5 = extraout_x11;
code_r0x00010882d4c0:
          }
          if ((uVar5 & 1) != 0) goto LAB_10882d4ec;
LAB_10882d4d0:
        } while (((uint)lVar4 >> 1 & 1) == 0);
      }
LAB_10882d4d4:
code_r0x00010882d4d8:
      func_0x000107c28834();
code_r0x00010882d4dc:
      func_0x00010882f9c4();
      param_1 = (long *)(unaff_x19 + 0x90);
code_r0x00010882d4e4:
      func_0x000107c27f9c();
LAB_10882d3cc:
      func_0x00010882e540(*(undefined8 *)(*(long *)(unaff_x19 + 0xa0) + 0xb0));
      (*extraout_x8)();
code_r0x00010882d3dc:
      pcVar3 = *(code **)(unaff_x19 + 0xa0);
code_r0x00010882d3e0:
      in_ZR = (int)param_1 == 1;
code_r0x00010882d3e4:
      uVar1 = 0;
      if ((bool)in_ZR) {
        func_0x00010882ee08(*(undefined8 *)(pcVar3 + 0xb0));
        (**(code **)(extraout_x8_05 + 0x38))();
        func_0x00010882f3c4();
        lVar4 = *(long *)(unaff_x19 + 0xa0);
        func_0x00010882fc7c(*(undefined8 *)(lVar4 + 0x1f0));
        FUN_10880c47c(lVar4 + 0x1f0);
        func_0x00010882f5d0(0x1d);
        func_0x000107c33a20();
        func_0x000107c29b20();
        FUN_10880c498(lVar4 + 8);
        func_0x000107c33aac(&stack0xffffffffffffffd0);
        func_0x00010882fa20();
        func_0x00010882fcc8();
        lVar4 = *(long *)(unaff_x19 + 0x98);
        *(undefined1 *)(*(long *)(unaff_x19 + 0xa0) + 0x390) = 1;
        func_0x000107c339ac(*(undefined8 *)(lVar4 + 8));
        (*extraout_x8_06)();
        func_0x00010882f068();
        func_0x00010882eed8();
        func_0x00010882f040();
        return;
      }
code_r0x00010882d3e8:
      unaff_x23 = *(undefined8 **)(pcVar3 + 0xc0);
      in_ZR = uVar1;
code_r0x00010882d3ec:
      func_0x000107c33ae8();
      plVar2 = param_1;
      func_0x00010882fbb4();
      plVar7 = param_1;
code_r0x00010882d3f8:
      plVar6 = (long *)(unaff_x19 + 0x68);
      *plVar6 = (long)plVar2;
code_r0x00010882d400:
      func_0x000107c33b4c(&PTR_SUB_110a73db0);
      pcVar3 = (code *)(extraout_x8_00 + 0xa0);
      *(undefined2 *)pcVar3 = 0;
      plVar2[0x15] = 0;
      plVar6[-1] = (long)plVar2;
      plVar6[2] = 0;
      plVar6[3] = 0;
code_r0x00010882d420:
      plVar6[1] = (long)pcVar3;
code_r0x00010882d428:
      func_0x000107c27f98();
      func_0x00010882f858();
code_r0x00010882d430:
      *(undefined1 *)((long)plVar7 + 0xa1) = 1;
code_r0x00010882d438:
      func_0x00010882fad8();
      func_0x000107c2887c();
code_r0x00010882d440:
      func_0x000107c339ac(*unaff_x23,FUN_10880dfac,plVar6[1]);
      pcVar3 = extraout_x8_01;
    } while( true );
  case 0xb:
  case 0x2a:
  case 0x51:
  case 0x9b:
  case 0xca:
  case 0xf0:
    goto code_r0x00010882d3ec;
  default:
    goto LAB_10882d3cc;
  case 0xd:
  case 0x18:
  case 0x22:
  case 0x2c:
  case 0x37:
  case 0x40:
  case 0x53:
  case 0x5e:
  case 0x65:
  case 0x6c:
  case 0x6e:
  case 0x9d:
  case 0xa8:
  case 0xf2:
  case 0xfd:
    goto LAB_10882d4d4;
  case 0xe:
  case 0x15:
  case 0x2d:
  case 0x34:
  case 0x54:
  case 0x5b:
  case 0x89:
  case 0x96:
  case 0x9e:
  case 0xa5:
  case 0xaf:
  case 0xb7:
  case 0xbf:
  case 0xc4:
  case 0xde:
  case 0xeb:
  case 0xf3:
  case 0xfa:
    goto code_r0x00010882d4a0;
  case 0xf:
  case 0x25:
  case 0x2e:
  case 0x55:
  case 0x6a:
  case 0x75:
  case 0x8e:
  case 0x94:
  case 0x9f:
  case 0xe3:
  case 0xe9:
  case 0xf4:
    goto code_r0x00010882d4dc;
  case 0x10:
  case 0x2f:
  case 0x56:
  case 0xa0:
  case 0xbe:
  case 0xf5:
    goto code_r0x00010882d400;
  case 0x11:
  case 0x24:
  case 0x30:
  case 0x57:
  case 0x69:
  case 0x93:
  case 0xa1:
  case 0xe8:
  case 0xf6:
    goto LAB_10882d4d0;
  case 0x12:
  case 0x1d:
  case 0x31:
  case 0x3b:
  case 0x58:
  case 0x6d:
  case 0x8b:
  case 0x92:
  case 0x98:
  case 0xa2:
  case 0xb1:
  case 0xb9:
  case 0xe0:
  case 0xe7:
  case 0xed:
  case 0xf7:
    goto LAB_10882d4b0;
  case 0x16:
  case 0x19:
  case 0x35:
  case 0x38:
  case 0x5c:
  case 0x5f:
  case 0xa6:
  case 0xa9:
  case 0xb0:
  case 0xb8:
  case 0xfb:
  case 0xfe:
    goto code_r0x00010882d4b8;
  case 0x17:
  case 0x20:
  case 0x36:
  case 0x3e:
  case 0x5d:
  case 0xa7:
  case 0xfc:
    goto code_r0x00010882d4c0;
  case 0x1a:
  case 0x1b:
  case 0x82:
  case 0xd7:
  case 0xff:
    goto code_r0x00010882d3e0;
  case 0x1c:
  case 0x3a:
  case 0x7d:
  case 0xb3:
  case 0xbc:
  case 0xc9:
  case 0xd2:
    goto code_r0x00010882d468;
  case 0x21:
  case 0x3f:
  case 0x68:
  case 0x6b:
  case 0x73:
  case 0xad:
  case 0xb5:
  case 0xc2:
  case 0xc6:
    goto code_r0x00010882d4d8;
  case 0x23:
  case 0x99:
  case 200:
  case 0xee:
    goto code_r0x00010882d440;
  case 0x26:
  case 0x95:
  case 0xc0:
  case 0xc1:
  case 0xea:
    goto code_r0x00010882d4cc;
  case 0x27:
  case 0x41:
  case 0x76:
  case 0xba:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
    goto code_r0x00010882d430;
  case 0x39:
  case 0xaa:
  case 0xb2:
    goto code_r0x00010882d3f8;
  case 0x4c:
    goto code_r0x0001005f1cec;
  case 0x60:
  case 0x83:
  case 0xd8:
    goto code_r0x00010882d3e4;
  case 0x61:
  case 0x84:
  case 0xd9:
    goto code_r0x00010882d3dc;
  case 0x62:
    goto code_r0x00010882d420;
  case 100:
    goto code_r0x00010882d500;
  case 0x66:
  case 0x97:
  case 0xc3:
  case 0xec:
    goto code_r0x00010882d4a8;
  case 0x67:
    goto code_r0x00010882d428;
  case 0x6f:
  case 0x7e:
  case 0x8f:
  case 0xac:
  case 0xb4:
  case 0xc5:
  case 0xd3:
  case 0xe4:
LAB_10882d4ec:
    func_0x00010882e94c();
  case 0x74:
    if ((bool)in_ZR) {
      func_0x00010882e988();
      func_0x00010882e484();
code_r0x00010882d500:
      func_0x00010882e380();
      plVar6[0x12] = (long)param_1;
    }
    func_0x00010882e2a4();
    return;
  case 0x71:
    goto code_r0x00010882d438;
  case 0x72:
  case 0x8a:
  case 0x90:
  case 0xae:
  case 0xb6:
  case 199:
  case 0xdf:
  case 0xe5:
    goto code_r0x00010882d4e4;
  case 0x78:
    goto code_r0x00010882d348;
  case 0x7f:
  case 0xd4:
    goto code_r0x00010882d3e8;
  case 0x80:
  case 0x81:
  case 0x85:
  case 0x86:
  case 0x8d:
  case 0x91:
  case 0xbd:
  case 0xcb:
  case 0xd5:
  case 0xd6:
  case 0xda:
  case 0xdb:
  case 0xe2:
  case 0xe6:
    goto code_r0x00010882d498;
  case 0x88:
  case 0xdd:
    goto code_r0x00010882d4bc;
  case 0x8c:
  case 0xe1:
    goto code_r0x00010882d4ac;
  }
  func_0x000107c27f9c();
code_r0x00010882d348:
  func_0x00010882f74c();
  func_0x00010882f774();
  func_0x00010882f754();
  func_0x00010882f9ac();
  func_0x00010882f75c();
code_r0x0001005f1cec:
  func_0x00010882f7c8();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882d370; end: 10882d5cf;  */

void FUN_10882d370(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  uint extraout_w8;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar4;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  func_0x000107c33c90();
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) goto LAB_10882d4d4;
  lVar7 = param_1;
  func_0x00010882f5fc();
  func_0x00010882f0a0();
  func_0x00010882f858();
  func_0x00010882f3c4();
  func_0x000107c28258();
  *(undefined4 *)(param_1 + 0x40) = 0x1e;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x50) = lVar7;
  func_0x00010882fb20();
  do {
    func_0x00010882e540(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0xb0));
    (*extraout_x8)();
    uVar2 = (int)lVar7 == 1;
    if ((bool)uVar2) {
      func_0x00010882ee08(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0xb0));
      (**(code **)(extraout_x8_05 + 0x38))();
      func_0x00010882f3c4();
      lVar7 = *(long *)(param_1 + 0xa0);
      func_0x00010882fc7c(*(undefined8 *)(lVar7 + 0x1f0));
      FUN_10880c47c(lVar7 + 0x1f0);
      func_0x00010882f5d0(0x1d);
      func_0x000107c33a20();
      func_0x000107c29b20();
      FUN_10880c498(lVar7 + 8);
      func_0x000107c33aac();
      func_0x00010882fa20();
      func_0x00010882fcc8();
      lVar7 = *(long *)(param_1 + 0x98);
      *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x390) = 1;
      func_0x000107c339ac(*(undefined8 *)(lVar7 + 8));
      (*extraout_x8_06)();
      func_0x00010882f068();
      func_0x00010882eed8();
      func_0x00010882f040();
      return;
    }
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0xa0) + 0xc0);
    func_0x000107c33ae8();
    lVar3 = lVar7;
    func_0x00010882fbb4();
    plVar6 = (long *)(param_1 + 0x68);
    *plVar6 = lVar3;
    func_0x000107c33b4c(&PTR_SUB_110a73db0);
    *(undefined2 *)(extraout_x8_00 + 0xa0) = 0;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(long *)(param_1 + 0x60) = lVar3;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined2 **)(param_1 + 0x70) = (undefined2 *)(extraout_x8_00 + 0xa0);
    func_0x000107c27f98(param_1 + 0x80);
    func_0x00010882f858();
    *(undefined1 *)(lVar7 + 0xa1) = 1;
    func_0x00010882fad8();
    func_0x000107c2887c();
    func_0x000107c339ac(*puVar8,FUN_10880dfac,*(undefined8 *)(param_1 + 0x70));
    (*extraout_x8_01)();
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    func_0x000107c27f98();
    func_0x00010882f0a0();
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    do {
      func_0x00010882e6b8();
    } while (extraout_w10 != 0);
    func_0x00010882effc(*(undefined8 *)(param_1 + 0x88));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar7 = *(long *)(param_1 + 0x88);
      func_0x00010882e57c();
      if (*plVar6 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010882f560();
      plVar4 = extraout_x8_02;
      do {
        if (*plVar4 == 0) {
          func_0x00010882e74c();
          plVar4 = extraout_x8_04;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x00010882f020();
          plVar4 = extraout_x8_03;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x00010882e94c();
          if ((bool)uVar2) {
            func_0x00010882e988();
            func_0x00010882e484();
            func_0x00010882e380();
            *(long **)(lVar7 + 0x90) = plVar6;
          }
          func_0x00010882e2a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
LAB_10882d4d4:
    func_0x000107c28834(param_1 + 0x88);
    func_0x00010882f9c4();
    lVar7 = param_1 + 0x90;
    func_0x000107c27f9c();
  } while( true );
}



/* Entry: 10882d5d0; end: 10882d61f;  */

void FUN_10882d5d0(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0xa8) == '\0';
  lVar1 = 0x90;
  if (bVar3) {
    lVar1 = 0x78;
  }
  lVar2 = 0x88;
  if (bVar3) {
    lVar2 = 0x60;
  }
  func_0x000107c27f9c(param_1 + lVar2);
  func_0x000107c27f9c(param_1 + lVar1);
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882d620; end: 10882d72b;  */

void FUN_10882d620(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_10880dbfc(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    do {
      func_0x00010882e6b8();
    } while (extraout_w10 != 0);
    func_0x00010882effc(*(undefined8 *)(param_1 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x00010882e57c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010882f560();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x00010882e74c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010882f020();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010882e94c();
          if ((bool)in_ZR) {
            func_0x00010882e988();
            func_0x00010882e484();
            func_0x00010882e380();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x00010882e2a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x38);
  func_0x00010882f0d0();
  func_0x00010882efec();
  func_0x00010882f068();
  func_0x00010882eed8();
  func_0x00010882fb68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882d72c; end: 10882d763;  */

void FUN_10882d72c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010882f0d0();
    func_0x00010882efec();
  }
  func_0x00010882eed8();
  func_0x00010882fb68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882d764; end: 10882d7b3;  */

void FUN_10882d764(undefined8 param_1)

{
  func_0x00010882fbd4();
  func_0x00010882f1c0();
  func_0x00010882f2ac();
  func_0x00010882f068();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882d7b4; end: 10882d7db;  */

void FUN_10882d7b4(void)

{
  func_0x000107c33a60();
  func_0x000107c27f9c();
  func_0x00010882f2ac();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882d7dc; end: 10882d8e3;  */

void FUN_10882d7dc(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_10880e0c8(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    do {
      func_0x00010882e6b8();
    } while (extraout_w10 != 0);
    func_0x00010882effc(*(undefined8 *)(param_1 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010882e57c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010882f560();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x00010882e74c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010882f020();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010882e94c();
          if ((bool)in_ZR) {
            func_0x00010882e988();
            func_0x00010882e484();
            func_0x00010882e380();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x00010882e2a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x30);
  func_0x00010882f44c();
  func_0x00010882f0d0();
  func_0x00010882f068();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882d8e4; end: 10882d917;  */

void FUN_10882d8e4(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010882f44c();
    func_0x00010882f0d0();
  }
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10882d918; end: 10882da4b;  */

void FUN_10882d918(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x23;
  
  func_0x000107c3378c();
  FUN_1086c1de4();
  func_0x00010882f44c();
  func_0x00010882f0d0();
  func_0x00010882fae4();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x00010882fb38();
  func_0x00010882f10c();
  func_0x00010882eacc(0x10882ac1c);
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010882fafc();
  func_0x00010882ef24();
  func_0x00010882e5ac();
  func_0x00010882efb0();
  if (unaff_x23 == 0) {
    func_0x00010882ebe8();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c339ac();
    func_0x00010882f454();
    func_0x00010882f330();
  }
  func_0x00010882f4ac();
  func_0x00010882f7d0();
  func_0x00010882f068();
  while( true ) {
    func_0x00010882eed8();
    func_0x00010882f040();
    func_0x000107c33784();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if (param_2 == 0) break;
    func_0x00010882f330();
    func_0x00010882f4ac();
    func_0x00010882f7d0();
    func_0x00010882f088();
    func_0x00010882efd0();
    ___cxa_end_catch();
  }
  func_0x00010882edf8();
  func_0x00010882f070();
  func_0x000107c27f9c();
  func_0x00010882f0d0();
  func_0x00010882f7d0();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882da4c; end: 10882da77;  */

void FUN_10882da4c(void)

{
  func_0x00010882f070();
  func_0x000107c27f9c();
  func_0x00010882f0d0();
  func_0x00010882f7d0();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882da78; end: 10882db7b;  */

void FUN_10882da78(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long lVar5;
  
  func_0x00010882ff24();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_10882a7f4(unaff_x19 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x50);
    do {
      func_0x00010882e6b8();
    } while (extraout_w10 != 0);
    func_0x00010882effc(*(undefined8 *)(unaff_x19 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010882fb20();
      lVar5 = *(long *)(unaff_x19 + 0x48);
      func_0x00010882e57c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010882f560();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010882e74c();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010882f020();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010882e94c();
          if ((bool)in_ZR) {
            func_0x00010882e988();
            func_0x00010882e484();
            func_0x00010882e380();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x00010882e2a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x48);
  func_0x00010882f4cc();
  func_0x00010882f668();
  func_0x00010882f068();
  func_0x00010882eed8();
  func_0x00010882fcb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882db7c; end: 10882dbaf;  */

void FUN_10882db7c(void)

{
  int extraout_w8;
  
  func_0x00010882ff24();
  if (extraout_w8 == 1) {
    func_0x00010882f4cc();
    func_0x00010882f668();
  }
  func_0x00010882eed8();
  func_0x00010882fcb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882dbb0; end: 10882dcd3;  */

void FUN_10882dbb0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x23;
  
  func_0x000107c3378c();
  func_0x00010882fbd4();
  func_0x00010882f1c0();
  func_0x00010882fec4();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x00010882fb38();
  func_0x00010882f10c();
  func_0x00010882eacc(FUN_10882af94);
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010882fafc();
  func_0x00010882ef24();
  func_0x00010882e5ac();
  func_0x00010882efb0();
  if (unaff_x23 == 0) {
    func_0x00010882ebe8();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c339ac();
    func_0x00010882f454();
    func_0x00010882f330();
  }
  func_0x00010882f4ac();
  func_0x00010882f068();
  while( true ) {
    func_0x00010882eed8();
    func_0x00010882f040();
    func_0x000107c33784();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if (param_2 == 0) break;
    func_0x00010882f330();
    func_0x00010882f4ac();
    func_0x00010882f088();
    func_0x00010882efd0();
    ___cxa_end_catch();
  }
  func_0x00010882edf8();
  func_0x000107c33a60();
  func_0x000107c27f9c();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882dcd4; end: 10882dcf7;  */

void FUN_10882dcd4(void)

{
  func_0x000107c33a60();
  func_0x000107c27f9c();
  func_0x00010882eed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882dcf8; end: 10882ddfb;  */

void FUN_10882dcf8(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long lVar5;
  
  func_0x00010882ff24();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_10882ad6c(unaff_x19 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x50);
    do {
      func_0x00010882e6b8();
    } while (extraout_w10 != 0);
    func_0x00010882effc(*(undefined8 *)(unaff_x19 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010882fb20();
      lVar5 = *(long *)(unaff_x19 + 0x48);
      func_0x00010882e57c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010882f560();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010882e74c();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010882f020();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010882e94c();
          if ((bool)in_ZR) {
            func_0x00010882e988();
            func_0x00010882e484();
            func_0x00010882e380();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x00010882e2a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x48);
  func_0x00010882f4cc();
  func_0x00010882f668();
  func_0x00010882f068();
  func_0x00010882eed8();
  func_0x00010882fcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882ddfc; end: 10882de2f;  */

void FUN_10882ddfc(void)

{
  int extraout_w8;
  
  func_0x00010882ff24();
  if (extraout_w8 == 1) {
    func_0x00010882f4cc();
    func_0x00010882f668();
  }
  func_0x00010882eed8();
  func_0x00010882fcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882de30; end: 10882ff97;  */

void FUN_10882de30(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 in_stack_000000e0;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x23 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x23 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_000000e0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  uVar1 = *(undefined8 *)(unaff_x23 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x23 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x23 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x23 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(long *)(unaff_x29 + -0x88) = unaff_x20;
  return;
}



/* Entry: 10882ff98; end: 108830cff;  */

void FUN_10882ff98(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined *puVar16;
  undefined8 *****pppppuVar17;
  undefined8 extraout_x8;
  undefined8 *****extraout_x8_00;
  undefined8 *****pppppuVar18;
  code *extraout_x8_01;
  long extraout_x8_02;
  long lVar19;
  long *plVar20;
  long extraout_x9;
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
  int extraout_w11;
  int iVar21;
  undefined8 ****ppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined *puVar26;
  char cVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_318;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined ***pppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined4 uStack_2c0;
  uint auStack_2b8 [2];
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  int iStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_270;
  char cStack_250;
  undefined8 ***pppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 ****ppppuStack_190;
  undefined8 ****ppppuStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ***pppuStack_160;
  long lStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 *puStack_138;
  undefined8 ***apppuStack_130 [2];
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  char cStack_e9;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  
  lVar19 = param_2;
  func_0x000108833eb0();
  uStack_68 = extraout_x8;
  if (*(char *)(lVar19 + 0x98) == '\x01') {
    func_0x000107c28744(&ppppuStack_c0,param_2 + 0x70);
  }
  else {
    ppppuStack_b8 = (undefined8 *****)0x0;
    ppppuStack_c0 = (undefined8 *****)0x0;
    uStack_a8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    uStack_a0 = 0x3f800000;
  }
  func_0x000107c29b00(&puStack_110,&ppppuStack_c0);
  func_0x000107c286c8(&ppppuStack_c0);
  ppuVar8 = &puStack_110;
  func_0x000107c29b04(ppuVar8,100);
  if (((ulong)ppuVar8 & 1) == 0) {
    ppppuStack_c0 = (undefined8 ****)CONCAT44(ppppuStack_c0._4_4_,100);
    if ((puStack_110 != (undefined *)0x0) &&
       (puVar16 = puStack_110, func_0x000107c2909c(puStack_110,&ppppuStack_c0),
       puVar16 != (undefined *)0x0)) {
      puVar16 = puStack_110;
      func_0x000107c2909c(puStack_110,&ppppuStack_c0);
      func_0x000107c27cf4(puVar16 + 0x18,&DAT_10f2cf702);
    }
  }
  func_0x000107c278b8(&ppppuStack_c0,&UNK_10f4bcf52);
  func_0x000107c3146c(&uStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_c0);
  func_0x000107c28064(apppuStack_130,param_3);
  func_0x000107c27c04(&puStack_138);
  func_0x000107c27e78(&ppppuStack_d0);
  ppppuStack_d0[0x12] = (undefined8 ****)0x2710;
  ppppuStack_d0[0xd] = (undefined8 ****)0x4e20;
  *(undefined1 *)(ppppuStack_d0 + 0xe) = 1;
  func_0x000107c27b98(ppppuStack_d0 + 1,param_2 + 0x50);
  *(undefined4 *)((long)ppppuStack_d0 + 0x8c) = 3;
  *(undefined1 *)(ppppuStack_d0 + 0x11) = 1;
  *(undefined1 *)(ppppuStack_d0 + 0x16) = 1;
  iVar21 = (int)&puStack_110;
  func_0x000107c29e1c();
  if (iVar21 != 0) {
    *(undefined4 *)((long)ppppuStack_d0 + 0x8c) = 2;
  }
  if ((puStack_110 != (undefined *)0x0) &&
     (puVar16 = puStack_110, func_0x000107c29e14(puStack_110,0x2f), (int)puVar16 != 0)) {
    *(undefined4 *)((long)ppppuStack_d0 + 0x8c) = 1;
  }
  ppppuStack_90 = (undefined8 ****)((ulong)ppppuStack_90 & 0xffffffffffffff00);
  uStack_78 = 0;
  func_0x000107c29b50(&ppppuStack_c0,&puStack_110,0x35,&ppppuStack_90);
  func_0x000107c279a4(&ppppuStack_90);
  if ((char)uStack_a8 == '\x01') {
    func_0x000107c27b98(ppppuStack_d0 + 5,&ppppuStack_c0);
  }
  ppppuVar24 = ppppuStack_d0;
  func_0x000107c29e18(&ppppuStack_100,&puStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppppuVar24 + 0x13,&ppppuStack_100);
  func_0x0001088340b0();
  iVar21 = (int)&puStack_110;
  func_0x000107c29e20();
  if (iVar21 != 0) {
    puVar16 = puStack_110;
    func_0x000107c2909c(puStack_110,&UNK_10df5f880);
    ppppuVar24 = (undefined8 ****)(puVar16 + 0x18);
    __ZNSt3__15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (ppppuVar24,0,10);
    ppppuStack_d0[0xd] = ppppuVar24;
    *(undefined1 *)(ppppuStack_d0 + 0xe) = 1;
  }
  uVar9 = 0;
  func_0x000107c29e24();
  if ((uVar9 & 1) != 0) {
    puVar16 = puStack_110;
    func_0x000107c2909c(puStack_110,&UNK_10df5f884);
    ppppuVar24 = (undefined8 ****)(puVar16 + 0x18);
    __ZNSt3__16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (ppppuVar24,0,0x10);
    ppppuStack_d0[0xf] = ppppuVar24;
    *(undefined1 *)(ppppuStack_d0 + 0x10) = 1;
  }
  ppppuStack_f8 = ppppuStack_c8;
  ppppuStack_100 = ppppuStack_d0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2bf94();
  func_0x000107c27e7c(&ppppuStack_100);
  if (puStack_110 != (undefined *)0x0) {
    puVar16 = puStack_110;
    func_0x00010883424c();
    if (puVar16 != (undefined *)0x0) {
      puVar16 = puStack_110;
      func_0x00010883424c(puStack_110);
      func_0x0001088341a8(puVar16);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&ppppuStack_100,PTR_DAT_11330a920);
      func_0x00010b281910(puStack_138,&ppppuStack_100);
      func_0x0001088340b0();
    }
    puVar16 = puStack_110;
    func_0x00010883422c();
    if (puVar16 == (undefined *)0x0) {
      _unsetenv(&UNK_10f4bcd1a);
    }
    else {
      puVar16 = puStack_110;
      func_0x00010883422c(puStack_110);
      func_0x0001088341a8(puVar16);
      if (-1 < cStack_e9) {
        ppppuStack_100 = &ppppuStack_100;
      }
      _setenv(&UNK_10f4bcd1a,ppppuStack_100,1);
      func_0x0001088340b0();
    }
  }
  func_0x000107c2c490(puStack_138 + 8,0x1000000);
  func_0x000108834238();
  pppppuVar10 = &ppppuStack_d0;
  func_0x000107c27e94();
  func_0x0001088340e8();
  pppppuVar10[1] = (undefined8 ****)0x0;
  pppppuVar10[2] = (undefined8 ****)0x0;
  *pppppuVar10 = (undefined8 ****)&PTR_FUN_110a79060;
  pppppuVar17 = pppppuVar10 + 3;
  *pppppuVar17 = (undefined8 ****)&PTR_DAT_110a790b0;
  ppppuVar24 = (undefined8 ****)*param_5;
  ppppuStack_150 = pppppuVar17;
  ppppuStack_148 = pppppuVar10;
  if (ppppuVar24 != (undefined8 ****)0x0) {
    ppppuVar22 = (undefined8 ****)param_5[1];
    pppppuVar11 = pppppuVar10;
    func_0x000108834064();
    pppppuVar11[1] = (undefined8 ****)0x0;
    pppppuVar11[2] = (undefined8 ****)0x0;
    *pppppuVar11 = (undefined8 ****)&PTR_DAT_110a79108;
    pppppuVar18 = pppppuVar11 + 3;
    *pppppuVar18 = (undefined8 ****)&PTR_FUN_110a669e8;
    pppppuVar11[4] = ppppuVar24;
    pppppuVar11[5] = ppppuVar22;
    pppppuVar23 = pppppuVar10;
    if (ppppuVar22 != (undefined8 ****)0x0) {
      do {
        func_0x00010883417c();
        pppppuVar18 = extraout_x8_00;
        pppppuVar23 = (undefined8 *****)ppppuStack_148;
      } while (extraout_w11 != 0);
    }
    pppppuVar10 = &ppppuStack_c0;
    ppppuStack_150 = pppppuVar18;
    ppppuStack_148 = pppppuVar11;
    ppppuStack_c0 = pppppuVar17;
    ppppuStack_b8 = pppppuVar23;
    func_0x0001086f00e4();
  }
  func_0x0001088340e8();
  pppppuVar10[1] = (undefined8 ****)0x0;
  pppppuVar10[2] = (undefined8 ****)0x0;
  *pppppuVar10 = (undefined8 ****)&PTR_DAT_110a79158;
  pppppuVar18 = pppppuVar10 + 3;
  *pppppuVar18 = (undefined8 ****)&PTR_DAT_110a791a8;
  pppppuVar11 = pppppuVar10;
  ppppuStack_170 = pppppuVar18;
  ppppuStack_168 = pppppuVar10;
  func_0x0001088340e8();
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)&PTR_FUN_110a791f8;
  pppppuVar23 = pppppuVar11 + 3;
  *pppppuVar23 = (undefined8 ****)&PTR_DAT_110a79248;
  ppppuStack_180 = pppppuVar23;
  ppppuStack_178 = pppppuVar11;
  func_0x000107c29afc(&ppppuStack_190);
  func_0x000107c29c78(&ppppuStack_c0,1);
  puStack_1a0 = puStack_138;
  puStack_b0[2] = 0;
  *puStack_b0 = &PTR_DAT_110a78998;
  puStack_b0[1] = 0;
  puStack_138 = (undefined8 *)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppppuStack_168 = (undefined8 ****)0x0;
  ppppuStack_180 = (undefined8 ****)0x0;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_c8 = ppppuStack_188;
  ppppuStack_d0 = ppppuStack_190;
  ppppuStack_190 = (undefined8 ****)0x0;
  ppppuStack_188 = (undefined8 ****)0x0;
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  ppuVar8 = &puStack_110;
  pppppuVar17 = (undefined8 *****)apppuStack_130;
  ppppuStack_100 = pppppuVar23;
  ppppuStack_f8 = pppppuVar11;
  ppppuStack_90 = pppppuVar18;
  ppppuStack_88 = pppppuVar10;
  func_0x000107c29ef8(puStack_b0 + 3,&puStack_1a0,&uStack_120,ppuVar8,pppppuVar17,&ppppuStack_90,
                      &ppppuStack_100,&ppppuStack_d0);
  func_0x000107c29b84(&puStack_e0);
  func_0x000107c28800(&ppppuStack_d0);
  func_0x000107c289fc(&ppppuStack_100);
  func_0x000107c29c7c(&ppppuStack_90);
  func_0x000107c27c10(&puStack_1a0);
  puVar13 = puStack_b0;
  puStack_b0 = (undefined8 *)0x0;
  func_0x000107c29c74(&pppuStack_160,puVar13 + 3);
  func_0x000107c29c84(&ppppuStack_c0);
  func_0x000107c29bac(&ppppuStack_190);
  FUN_108833494(&ppppuStack_180);
  FUN_108833414(&ppppuStack_170);
  ppppuStack_170 = (undefined8 ****)0x0;
  ppppuStack_168 = (undefined8 ****)0x0;
  ppppuStack_180 = (undefined8 ****)0x0;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_190 = (undefined8 *****)0x0;
  ppppuStack_188 = (undefined8 *****)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  lStack_198 = 0;
  ppuVar12 = &puStack_110;
  func_0x000107c29b08(&ppppuStack_c0);
  ppppuVar22 = ppppuStack_148;
  ppppuVar24 = ppppuStack_150;
  pppuStack_1b0 = (undefined8 ****)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  if ((char)uStack_a8 == '\x01') {
    func_0x000108834064();
    ppuVar8 = ppuVar12 + 1;
    *ppuVar8 = (undefined *)0x0;
    ppuVar12[2] = (undefined *)0x0;
    *ppuVar12 = (undefined *)&PTR_FUN_110a792c0;
    ppppuVar25 = (undefined8 ****)(ppuVar12 + 3);
    *ppppuVar25 = (undefined8 ***)&PTR_FUN_110a66b50;
    ppuVar12[5] = (undefined *)ppppuVar22;
    ppuVar12[4] = (undefined *)ppppuVar24;
    if ((undefined8 *****)ppppuVar22 != (undefined8 *****)0x0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_00 != 0);
    }
    ppppuStack_d0 = ppppuVar25;
    ppppuStack_c8 = (undefined8 ****)ppuVar12;
    func_0x000107c29be0(&ppppuStack_90,1);
    puVar13 = puStack_80;
    puStack_80[1] = 0;
    puStack_80[2] = 0;
    *puStack_80 = &PTR_DAT_110a789e8;
    ppppuStack_100 = ppppuVar25;
    ppppuStack_f8 = (undefined8 ****)ppuVar12;
    do {
      cVar27 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar4) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar27 = ExclusiveMonitorsStatus();
      }
    } while (cVar27 != '\0');
    func_0x000107c29be4(puVar13 + 3,&ppppuStack_100);
    func_0x0001088341b4();
    puStack_d8 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    puStack_e0 = puStack_d8 + 3;
    func_0x000107c29bf4(&ppppuStack_90);
    func_0x000107c29bfc(&ppppuStack_90,1);
    puVar13 = puStack_80;
    puStack_80[1] = 0;
    puStack_80[2] = 0;
    *puStack_80 = &PTR_DAT_110a78a90;
    ppppuStack_100 = ppppuVar25;
    ppppuStack_f8 = (undefined8 ****)ppuVar12;
    do {
      cVar27 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar4) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar27 = ExclusiveMonitorsStatus();
      }
    } while (cVar27 != '\0');
    ppuVar8 = &puStack_110;
    pppppuVar17 = &ppppuStack_100;
    func_0x000107c29c00(puVar13 + 3,&ppppuStack_c0,0);
    func_0x0001088341b4();
    puStack_1b8 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    pppuStack_1c0 = (undefined8 ***)(puStack_1b8 + 3);
    func_0x000107c29c08(&ppppuStack_90);
    puVar13 = puStack_1b8;
    pppuVar2 = pppuStack_1c0;
    pppuStack_1c0 = (undefined8 ***)0x0;
    puStack_1b8 = (undefined8 *)0x0;
    ppppuStack_88 = (undefined8 ****)puStack_1a8;
    ppppuStack_90 = (undefined8 ****)pppuStack_1b0;
    puStack_1a8 = puVar13;
    pppuStack_1b0 = pppuVar2;
    func_0x000107c29388(&ppppuStack_90);
    func_0x000107c29388(&pppuStack_1c0);
    func_0x00010883415c();
    func_0x000107c29b0c();
    ppppuVar22 = ppppuStack_f8;
    ppppuVar24 = ppppuStack_100;
    ppppuStack_100 = (undefined8 ****)0x0;
    ppppuStack_f8 = (undefined8 ****)0x0;
    ppppuStack_88 = ppppuStack_168;
    ppppuStack_90 = ppppuStack_170;
    ppppuStack_168 = ppppuVar22;
    ppppuStack_170 = ppppuVar24;
    func_0x000107c29c0c(&ppppuStack_90);
    func_0x000107c29c0c(&ppppuStack_100);
    func_0x00010883415c();
    func_0x000107c29b10();
    ppppuVar22 = ppppuStack_f8;
    ppppuVar24 = ppppuStack_100;
    ppppuStack_100 = (undefined8 *****)0x0;
    ppppuStack_f8 = (undefined8 *****)0x0;
    ppppuStack_88 = ppppuStack_178;
    ppppuStack_90 = ppppuStack_180;
    ppppuStack_178 = ppppuVar22;
    ppppuStack_180 = ppppuVar24;
    func_0x000107c29370(&ppppuStack_90);
    func_0x000107c29c10(&ppppuStack_100);
    func_0x00010883415c();
    func_0x000107c29b14();
    ppppuVar22 = ppppuStack_f8;
    ppppuVar24 = ppppuStack_100;
    ppppuStack_100 = (undefined8 *****)0x0;
    ppppuStack_f8 = (undefined8 *****)0x0;
    ppppuStack_88 = ppppuStack_188;
    ppppuStack_90 = ppppuStack_190;
    ppppuStack_188 = ppppuVar22;
    ppppuStack_190 = ppppuVar24;
    func_0x000107c29c14(&ppppuStack_90);
    func_0x000107c29c14(&ppppuStack_100);
    func_0x000107c29b18(&ppppuStack_90,&pppuStack_1b0,&puStack_e0);
    func_0x000107c29b1c(&puStack_1a0,&ppppuStack_90);
    func_0x000107c29bdc(&ppppuStack_90);
    func_0x000107c29bf8(&puStack_e0);
    FUN_1088334e4(&ppppuStack_d0);
  }
  if (puStack_110 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar16 = puStack_110;
    func_0x000107c29e14(puStack_110,0x61);
    uVar5 = SUB81(puVar16,0);
  }
  ppuVar12 = &puStack_110;
  puVar16 = (undefined *)0x1ffffffff;
  func_0x000107c28cf4(ppuVar12,0x62);
  if (puStack_110 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar26 = puStack_110;
    func_0x000107c29e14(puStack_110,0xb0);
    uVar6 = SUB81(puVar26,0);
  }
  puVar13 = (undefined8 *)0x188;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &PTR_FUN_110a79310;
  ppppuStack_88 = (undefined8 ****)lStack_158;
  ppppuStack_90 = (undefined8 ****)pppuStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_01 != 0);
  }
  ppppuStack_f8 = ppppuStack_168;
  ppppuStack_100 = ppppuStack_170;
  if (ppppuStack_168 != (undefined8 ****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_02 != 0);
  }
  ppppuStack_c8 = ppppuStack_188;
  ppppuStack_d0 = ppppuStack_190;
  if ((undefined8 *****)ppppuStack_188 != (undefined8 *****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_03 != 0);
  }
  puStack_d8 = (undefined8 *)lStack_198;
  puStack_e0 = puStack_1a0;
  if (lStack_198 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_04 != 0);
  }
  puVar13[3] = &PTR_FUN_110a78e60;
  func_0x000107c27994(puVar13 + 4,param_2);
  *(undefined1 *)(puVar13 + 7) = 0;
  *(undefined1 *)(puVar13 + 0xd) = 0;
  uVar3 = *(char *)(param_2 + 0x48) == '\x01';
  if ((bool)uVar3) {
    func_0x000107c27994(puVar13 + 7,param_2 + 0x18);
    func_0x000107c27994(puVar13 + 10,param_2 + 0x30);
    *(undefined1 *)(puVar13 + 0xd) = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar13 + 0xe,param_2 + 0x50);
  *(undefined1 *)(puVar13 + 0x11) = *(undefined1 *)(param_2 + 0x68);
  func_0x000107c29b7c(puVar13 + 0x12,param_2 + 0x70);
  puVar13[0x19] = lStack_108;
  puVar13[0x18] = puStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_05 != 0);
  }
  puVar13[0x1b] = lStack_118;
  puVar13[0x1a] = uStack_120;
  if (lStack_118 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_06 != 0);
  }
  func_0x000107c2815c(puVar13 + 0x1c,param_4);
  puVar13[0x1f] = ppppuStack_88;
  puVar13[0x1e] = ppppuStack_90;
  if (ppppuStack_88 != (undefined8 ****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_07 != 0);
  }
  puVar13[0x21] = ppppuStack_f8;
  puVar13[0x20] = ppppuStack_100;
  if (ppppuStack_f8 != (undefined8 ****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_08 != 0);
  }
  puVar13[0x23] = ppppuStack_178;
  puVar13[0x22] = ppppuStack_180;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_09 != 0);
  }
  puVar13[0x25] = ppppuStack_c8;
  puVar13[0x24] = ppppuStack_d0;
  if ((undefined8 *****)ppppuStack_c8 != (undefined8 *****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_10 != 0);
  }
  puVar13[0x27] = puStack_d8;
  puVar13[0x26] = puStack_e0;
  if (puStack_d8 != (undefined8 *)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_11 != 0);
  }
  puVar13[0x29] = ppppuStack_148;
  puVar13[0x28] = ppppuStack_150;
  if ((undefined8 *****)ppppuStack_148 != (undefined8 *****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_12 != 0);
  }
  puVar13[0x2a] = &PTR_FUN_110a7a888;
  *(undefined1 *)(puVar13 + 0x2b) = uVar5;
  *(int *)((long)puVar13 + 0x15c) = (int)ppuVar12;
  *(undefined1 *)(puVar13 + 0x2c) = uVar6;
  puVar13[0x2e] = 0;
  puVar13[0x2d] = 0;
  puVar13[0x30] = 0;
  puVar13[0x2f] = 0;
  puVar13[0x2e] = 1;
  __ZNSt3__17promiseIvEC1Ev(puVar13 + 0x2f);
  __ZNSt3__17promiseIvE10get_futureEv(puVar13 + 0x30,puVar13 + 0x2f);
  puVar1 = puVar13 + 3;
  func_0x000107c289f4(&puStack_e0);
  func_0x000107c2936c(&ppppuStack_d0);
  func_0x000107c29374(&ppppuStack_100);
  func_0x000107c297bc(&ppppuStack_90);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar13;
  func_0x000107c29388(&pppuStack_1b0);
  func_0x000108834238();
  func_0x000107c29bdc(&puStack_1a0);
  func_0x000107c29c14(&ppppuStack_190);
  func_0x000107c29370(&ppppuStack_180);
  func_0x000107c29c0c(&ppppuStack_170);
  func_0x000107c29c88(&pppuStack_160);
  func_0x0001086f00e4(&ppppuStack_150);
  func_0x000107c27c10(&puStack_138);
  func_0x000107c27c18(apppuStack_130);
  func_0x000107c27c20(&uStack_120);
  ppuVar12 = &puStack_110;
  func_0x000107c28d9c();
  func_0x000108833e48(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001088340b0();
  func_0x000107c279a4(&ppppuStack_c0);
  func_0x000107c27e94(&ppppuStack_d0);
  func_0x000107c27c10(&puStack_138);
  func_0x000107c27c18(apppuStack_130);
  func_0x000107c27c20(&uStack_120);
  ppuVar14 = &puStack_110;
  func_0x000107c28d9c();
  func_0x000108833f34();
  func_0x000108833f0c();
  puVar26 = ppuVar14[0x1a];
  puVar29 = ppuVar14[0x1a];
  puVar28 = ppuVar14[0x19];
  func_0x000108834224();
  ppuVar14[1] = (undefined *)0x0;
  ppuVar14[2] = (undefined *)0x0;
  *ppuVar14 = (undefined *)&PTR_DAT_110a79360;
  pppuVar15 = (undefined ***)(ppuVar14 + 3);
  if (puVar26 != (undefined *)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_13 != 0);
  }
  ppuVar14[3] = (undefined *)&PTR_FUN_110a78ea8;
  ppppuVar24 = pppppuVar17[1];
  ppppuVar22 = *pppppuVar17;
  ppuVar14[5] = (undefined *)pppppuVar17[1];
  ppuVar14[4] = (undefined *)ppppuVar22;
  if (ppppuVar24 != (undefined8 ****)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_14 != 0);
  }
  ppuVar14[7] = puVar29;
  ppuVar14[6] = puVar28;
  uStack_298 = 0;
  uStack_290 = 0;
  func_0x000107c2814c(&uStack_298);
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  puVar26 = ppuVar12[0x1d];
  pppuStack_2d0 = pppuVar15;
  ppuStack_2c8 = ppuVar14;
  if (puVar26 == (undefined *)0x0) {
    auStack_2b8[0] = 0;
  }
  else {
    plVar20 = (long *)ppuVar12[0x1f];
    if (plVar20 == (long *)0x0) {
      puVar28 = (undefined *)0x0;
      cVar27 = '\0';
    }
    else {
      (**(code **)(*plVar20 + 0x18))(&uStack_298,plVar20,puVar1);
      FUN_1086edae4(&uStack_298);
      if (cStack_250 == '\0') {
        puStack_270 = (undefined *)0x0;
      }
      if (cStack_250 == '\x01' && puVar16 <= puStack_270) {
        func_0x000108833e74(pppuStack_2d0);
        auStack_2b8[0] = 1;
        goto LAB_10883114c;
      }
      puVar26 = ppuVar12[0x1d];
      puVar28 = puStack_270;
      cVar27 = cStack_250;
    }
    func_0x00010883429c();
    puVar13 = puVar1;
    (*extraout_x8_01)();
    if (((ulong)puVar13 & 0xff) == 0) {
      puVar26 = puVar28;
      puVar29 = (undefined *)0x0;
      if (cVar27 == '\0') {
        puVar26 = (undefined *)0x0;
      }
    }
    else {
      puVar29 = puVar26;
      if (puVar16 <= puVar26) {
        func_0x000108833e74(pppuStack_2d0);
        auStack_2b8[0] = 2;
        goto LAB_10883114c;
      }
    }
    plVar20 = (long *)ppuVar12[0x21];
    if (((int)*(uint *)((long)ppuVar12 + 0x144) < 0) ||
       ((ulong)((long)puVar16 - (long)puVar26) <= (ulong)*(uint *)((long)ppuVar12 + 0x144))) {
      (**(code **)(*plVar20 + 0x28))(plVar20,puVar1);
      ppuStack_330 = &PTR_DAT_110a947b8;
      uStack_328 = 0;
      uStack_318 = 0;
      pppuVar15 = &ppuStack_330;
      func_0x000107c3034c(pppuVar15,*ppuVar8,*(int *)(ppuVar8 + 1) - (int)*ppuVar8);
      bVar4 = uStack_318._4_4_ == 0xd;
      auStack_2b8[0] = (uint)pppuVar15;
      uVar7 = 0;
      if (bVar4) {
        uVar7 = auStack_2b8[0];
      }
      if ((uVar7 & 1) == 0) {
        func_0x0001088342ec();
        FUN_108831e90();
        iVar21 = 1;
        uStack_2c0 = 1;
        lVar19 = 2;
        puStack_2b0 = puVar26;
        puStack_2a8 = puVar16;
      }
      else {
        func_0x000108834274();
        lVar19 = extraout_x9 + 0x548;
        if (!bVar4) {
          lVar19 = extraout_x8_02;
        }
        puVar16 = *(undefined **)(lVar19 + 0x38);
        if (((ulong)puVar13 & 0xff) == 0) {
          if (cVar27 == '\0') {
            puVar28 = (undefined *)0x0;
          }
          if (puVar28 != puVar16 + -1) goto LAB_108831030;
          plVar20 = (long *)ppuVar12[0x1d];
          func_0x000108834210();
          func_0x000108833f18(*(undefined8 *)(*plVar20 + 0x10));
          func_0x000108833fe0();
          func_0x000108833e74(pppuStack_2d0);
          lVar19 = 0;
          iVar21 = 2;
          uStack_2c0 = 2;
          auStack_2b8[0] = 0;
        }
        else if (puVar29 == puVar16 + -1) {
          plVar20 = (long *)ppuVar12[0x1d];
          func_0x000108834210();
          func_0x000108833f18(*(undefined8 *)(*plVar20 + 0x10));
          func_0x000108833fe0();
          func_0x000108833e74(pppuStack_2d0);
          lVar19 = 0;
          iVar21 = 2;
          uStack_2c0 = 2;
          auStack_2b8[0] = 1;
        }
        else {
LAB_108831030:
          func_0x0001088342ec();
          FUN_108831e90();
          iVar21 = 1;
          lVar19 = 2;
          uStack_2c0 = 1;
          auStack_2b8[0] = 2;
          puStack_2b0 = puVar26;
          puStack_2a8 = puVar16;
        }
      }
      iStack_2a0 = (int)lVar19;
      func_0x0001088340c0();
      goto LAB_108831150;
    }
    (**(code **)(*plVar20 + 0x10))(plVar20,puVar1,puVar26);
    if (*(char *)(ppuVar12 + 0x29) == '\x01') {
      ppuStack_330 = &PTR_DAT_110a947b8;
      uStack_328 = 0;
      uStack_318 = 0;
      pppuVar15 = &ppuStack_330;
      func_0x000107c3034c(pppuVar15,*ppuVar8,*(int *)(ppuVar8 + 1) - (int)*ppuVar8);
      uVar7 = 0;
      if (uStack_318._4_4_ == 0xd) {
        uVar7 = (uint)pppuVar15;
      }
      if ((uVar7 & 1) == 0) {
        func_0x0001088340c0();
        goto LAB_108831128;
      }
      func_0x000108834274();
      plVar20 = (long *)ppuVar12[0x1d];
      func_0x000108834210();
      func_0x000108833f18(*(undefined8 *)(*plVar20 + 0x10));
      func_0x000108833fe0();
      func_0x0001088340c0();
      func_0x000108833e74(pppuStack_2d0);
      auStack_2b8[0] = 5;
    }
    else {
LAB_108831128:
      func_0x000108833e74(pppuStack_2d0);
      auStack_2b8[0] = 3;
    }
    if (cVar27 != '\0') {
      auStack_2b8[0] = auStack_2b8[0] + 1;
    }
  }
LAB_10883114c:
  uStack_2c0 = 0;
  iVar21 = 0;
  lVar19 = 1;
  iStack_2a0 = 1;
LAB_108831150:
  func_0x000104be35c8(&pppuStack_2d0);
  FUN_108833560(&uStack_2e0);
  func_0x0001086efe58(&ppuStack_330,0);
  ppuStack_330 = &PTR_DAT_110a78fa0;
  uVar5 = 2;
  if (iVar21 != 1) {
    uVar5 = iVar21 == 2;
  }
  func_0x0001086efe8c(&ppuStack_330,0,uVar5);
  func_0x0001088342bc();
  func_0x0001088340e0();
  ppuStack_330 = ppuVar12;
  pppuStack_2d0 = &ppuStack_330;
  (*(code *)(&PTR_FUN_110a78fc8)[lVar19])(&pppuStack_2d0,auStack_2b8);
  puVar16 = puStack_2b0;
  if ((iStack_2a0 == 2) && (puStack_2b0 != (undefined *)0x0)) {
    plVar20 = (long *)ppuVar12[0x25];
    func_0x0001086efe58(&ppuStack_330,4);
    (**(code **)(*plVar20 + 0x28))(plVar20,&ppuStack_330,(long)puStack_2a8 - (long)puVar16);
  }
  return;
}



/* Entry: 108830d00; end: 10883138f;  */

/* WARNING: Removing unreachable block (ram,0x000108830f50) */
/* WARNING: Removing unreachable block (ram,0x000108830ed0) */
/* WARNING: Removing unreachable block (ram,0x000108830f58) */
/* WARNING: Removing unreachable block (ram,0x000108830f60) */
/* WARNING: Removing unreachable block (ram,0x000108830fe8) */
/* WARNING: Removing unreachable block (ram,0x000108830fec) */
/* WARNING: Removing unreachable block (ram,0x000108830ffc) */
/* WARNING: Removing unreachable block (ram,0x000108830f6c) */
/* WARNING: Removing unreachable block (ram,0x000108831030) */
/* WARNING: Removing unreachable block (ram,0x000108830f78) */
/* WARNING: Removing unreachable block (ram,0x000108830ed8) */
/* WARNING: Removing unreachable block (ram,0x000108830ee0) */

void FUN_108830d00(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  code *extraout_x8;
  long *plVar5;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  ulong unaff_x20;
  int iVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined4 uStack_e0;
  undefined4 auStack_d8 [2];
  ulong uStack_d0;
  ulong uStack_c8;
  int iStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_90;
  char cStack_70;
  
  func_0x000108833f0c();
  lVar7 = param_1[0x1a];
  uVar12 = param_1[0x1a];
  uVar10 = param_1[0x19];
  func_0x000108834224();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a79360;
  puVar1 = param_1 + 3;
  if (lVar7 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10 != 0);
  }
  param_1[3] = &PTR_FUN_110a78ea8;
  lVar7 = param_5[1];
  uVar11 = *param_5;
  param_1[5] = param_5[1];
  param_1[4] = uVar11;
  if (lVar7 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_00 != 0);
  }
  param_1[7] = uVar12;
  param_1[6] = uVar10;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x000107c2814c(&uStack_b8);
  uStack_100 = 0;
  uStack_f8 = 0;
  uVar3 = *(ulong *)(unaff_x19 + 0xe8);
  puStack_f0 = puVar1;
  puStack_e8 = param_1;
  if (uVar3 == 0) {
    auStack_d8[0] = 0;
  }
  else {
    plVar5 = *(long **)(unaff_x19 + 0xf8);
    if (plVar5 == (long *)0x0) {
      uVar9 = 0;
      cVar8 = '\0';
    }
    else {
      (**(code **)(*plVar5 + 0x18))(&uStack_b8,plVar5);
      FUN_1086edae4(&uStack_b8);
      if (cStack_70 == '\0') {
        uStack_90 = 0;
      }
      if (cStack_70 == '\x01' && param_3 <= uStack_90) {
        func_0x000108833e74(puStack_f0);
        auStack_d8[0] = 1;
        goto LAB_10883114c;
      }
      uVar3 = *(ulong *)(unaff_x19 + 0xe8);
      uVar9 = uStack_90;
      cVar8 = cStack_70;
    }
    func_0x00010883429c();
    (*extraout_x8)();
    if ((unaff_x20 & 0xff) == 0) {
      uVar3 = uVar9;
      if (cVar8 == '\0') {
        uVar3 = 0;
      }
    }
    else if (param_3 <= uVar3) {
      func_0x000108833e74(puStack_f0);
      auStack_d8[0] = 2;
      goto LAB_10883114c;
    }
    if (((int)*(uint *)(unaff_x19 + 0x144) < 0) ||
       (param_3 - uVar3 <= (ulong)*(uint *)(unaff_x19 + 0x144))) {
      (**(code **)(**(long **)(unaff_x19 + 0x108) + 0x28))();
      puVar4 = &stack0xfffffffffffffeb0;
      func_0x000107c3034c(puVar4,*param_4,*(int *)(param_4 + 1) - (int)*param_4);
      func_0x0001088342ec();
      FUN_108831e90();
      uStack_e0 = 1;
      iVar6 = 1;
      lVar7 = 2;
      iStack_c0 = 2;
      auStack_d8[0] = (int)puVar4;
      uStack_d0 = uVar3;
      uStack_c8 = param_3;
      func_0x0001088340c0();
      goto LAB_108831150;
    }
    (**(code **)(**(long **)(unaff_x19 + 0x108) + 0x10))();
    if (*(char *)(unaff_x19 + 0x148) == '\x01') {
      func_0x000107c3034c(&stack0xfffffffffffffeb0,*param_4,*(int *)(param_4 + 1) - (int)*param_4);
      func_0x0001088340c0();
    }
    func_0x000108833e74(puStack_f0);
    auStack_d8[0] = 3;
    if (cVar8 != '\0') {
      auStack_d8[0] = 4;
    }
  }
LAB_10883114c:
  uStack_e0 = 0;
  iVar6 = 0;
  lVar7 = 1;
  iStack_c0 = 1;
LAB_108831150:
  func_0x000104be35c8(&puStack_f0);
  FUN_108833560(&uStack_100);
  func_0x0001086efe58(&stack0xfffffffffffffeb0,0);
  uVar2 = 2;
  if (iVar6 != 1) {
    uVar2 = iVar6 == 2;
  }
  func_0x0001086efe8c(&stack0xfffffffffffffeb0,0,uVar2);
  func_0x0001088342bc();
  func_0x0001088340e0();
  puStack_f0 = (undefined8 *)&stack0xfffffffffffffeb0;
  (*(code *)(&PTR_FUN_110a78fc8)[lVar7])(&puStack_f0,auStack_d8);
  uVar3 = uStack_d0;
  if ((iStack_c0 == 2) && (uStack_d0 != 0)) {
    plVar5 = *(long **)(unaff_x19 + 0x128);
    func_0x0001086efe58(&stack0xfffffffffffffeb0,4);
    (**(code **)(*plVar5 + 0x28))(plVar5,&stack0xfffffffffffffeb0,uStack_c8 - uVar3);
  }
  return;
}



/* Entry: 108831390; end: 108831b47;  */

undefined *** FUN_108831390(undefined ***param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined ****ppppuVar6;
  undefined1 *puVar7;
  undefined1 uVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  code *pcVar14;
  undefined ***pppuVar15;
  undefined8 extraout_x8;
  long lVar16;
  undefined8 extraout_x8_00;
  undefined8 uVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined8 *puVar20;
  undefined ***pppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined ***pppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined ***pppuStack_270;
  undefined ***pppuStack_268;
  undefined ***pppuStack_260;
  undefined ***pppuStack_258;
  undefined **appuStack_248 [3];
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  undefined ***pppuStack_1d0;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined4 uStack_178;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined4 uStack_120;
  undefined4 uStack_118;
  ulong auStack_110 [15];
  undefined4 uStack_98;
  int iStack_94;
  undefined8 uStack_70;
  undefined1 *puVar8;
  
  pppuVar10 = param_1;
  func_0x000108833eb0();
  ppuVar23 = pppuVar10[0x1a];
  ppuStack_288 = pppuVar10[0x1a];
  pppuStack_290 = (undefined ***)pppuVar10[0x19];
  uStack_70 = extraout_x8;
  func_0x000108834224();
  pppuVar18 = pppuVar10 + 1;
  *pppuVar18 = (undefined **)0x0;
  pppuVar10[2] = (undefined **)0x0;
  *pppuVar10 = &PTR_FUN_110a793b0;
  pppuVar15 = pppuVar10 + 3;
  if (ppuVar23 != (undefined **)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10 != 0);
  }
  pppuVar10[3] = &PTR_FUN_110a78ed8;
  lVar16 = param_4[1];
  ppuVar23 = (undefined **)*param_4;
  pppuVar10[5] = (undefined **)param_4[1];
  pppuVar10[4] = ppuVar23;
  if (lVar16 != 0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_00 != 0);
  }
  pppuVar10[7] = ppuStack_288;
  pppuVar10[6] = (undefined **)pppuStack_290;
  ppuStack_140 = (undefined **)0x0;
  ppuStack_138 = (undefined **)0x0;
  func_0x000107c2814c(&ppuStack_140);
  ppuStack_280 = (undefined **)0x0;
  uStack_278 = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
    if (bVar5) {
      *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
    if (bVar5) {
      *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pppuStack_270 = pppuVar15;
  pppuStack_268 = pppuVar10;
  pppuStack_1c0 = pppuVar15;
  pppuStack_1b8 = pppuVar10;
  pppuStack_1b0 = pppuVar15;
  pppuStack_1a8 = pppuVar10;
  FUN_10875faa4(appuStack_248);
  func_0x000107c29ee4(&ppuStack_140,param_1 + 1);
  func_0x00010875faac(appuStack_248);
  func_0x000107c287d0();
  func_0x000108834154();
  pppuVar15 = param_1 + 0x27;
  FUN_108843b1c();
  pppuStack_1d0 = pppuVar15;
  FUN_1086a2e08(&ppuStack_140);
  func_0x000107c29edc(&pppuStack_170,param_3);
  FUN_10879d9ac(&ppuStack_140);
  func_0x000107c27b9c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_170);
  uStack_98 = *(undefined4 *)(param_3 + 0x18);
  func_0x000108848188();
  iStack_94 = 1;
  if (*(int *)(param_3 + 0x1c) - 1U < 3) {
    iStack_94 = *(int *)(param_3 + 0x1c) + 1;
  }
  if (*(char *)(param_3 + 0x50) == '\x01') {
    lVar1 = *(long *)(param_3 + 0x40);
    for (lVar16 = *(long *)(param_3 + 0x38); lVar16 != lVar1; lVar16 = lVar16 + 0x18) {
      FUN_108848384(&pppuStack_170,lVar16);
      FUN_10879d9f8(auStack_110);
      FUN_10879c7d4();
      func_0x000107c2a4cc(&pppuStack_170);
    }
  }
  func_0x00010875fabc(appuStack_248);
  pppuVar15 = &ppuStack_140;
  FUN_1086ac3c8();
  func_0x000107c2a500(&ppuStack_140);
  puVar2 = *(undefined8 **)(param_3 + 0x28);
  for (puVar20 = *(undefined8 **)(param_3 + 0x20); puVar20 != puVar2; puVar20 = puVar20 + 3) {
    ppuStack_140 = &PTR_DAT_110a93b98;
    ppuStack_138 = (undefined **)0x0;
    pppuStack_128 = (undefined ***)0x0;
    func_0x000107c3034c(&ppuStack_140,*puVar20,*(int *)(puVar20 + 1) - (int)*puVar20);
    FUN_10876018c(auStack_200);
    pppuVar15 = &ppuStack_140;
    FUN_10875facc();
    FUN_108912edc(&ppuStack_140);
  }
  lVar1 = param_2[1];
  for (lVar16 = *param_2; lVar16 != lVar1; lVar16 = lVar16 + 0x18) {
    ppuStack_140 = &PTR_FUN_110a90cd0;
    ppuStack_138 = (undefined **)0x0;
    uStack_118 = 0;
    pppuStack_130 = (undefined ***)0x0;
    pppuStack_128 = (undefined ***)0x0;
    func_0x000107c29ee4(&pppuStack_170,lVar16);
    FUN_1086cf28c(&ppuStack_140);
    FUN_1086c1dc8();
    func_0x000107c287d0();
    func_0x000107c2a2e0(&pppuStack_170);
    FUN_1087602a4(auStack_230);
    pppuVar15 = &ppuStack_140;
    FUN_1086ec534();
    func_0x000107c2a484(&ppuStack_140);
  }
  ppuVar3 = (undefined **)param_2[4];
  ppuVar23 = (undefined **)param_2[3];
  ppuVar22 = ppuVar23;
  pppuStack_290 = param_1;
  for (; pppuVar10 = pppuStack_1a8, pcVar14 = (code *)pppuStack_1b0, uVar9 = ppuVar23 == ppuVar3,
      !(bool)uVar9; ppuVar23 = ppuVar23 + 0xb) {
    pppuStack_170 = (undefined ***)&PTR_DAT_110a90c80;
    pppuStack_168 = (undefined ***)0x0;
    pppuStack_158 = (undefined ***)0x0;
    uStack_150 = 0;
    pppuStack_160 = (undefined ***)0x0;
    uStack_148 = 0;
    func_0x000107c29ee4(&ppuStack_140,ppuVar23);
    FUN_1087c0034(&pppuStack_170);
    func_0x000107c287d0();
    func_0x000108834154();
    if (*(uint *)(ppuVar23 + 6) < 0xd) {
      uStack_148 = *(undefined4 *)(&UNK_10df60d88 + (ulong)*(uint *)(ppuVar23 + 6) * 4);
    }
    else {
      uStack_148 = 0;
    }
    ppuStack_140 = &PTR_DAT_110d137d0;
    ppuStack_138 = (undefined **)0x0;
    pppuStack_130 = (undefined ***)&DAT_11383d918;
    pppuStack_128 = (undefined ***)&DAT_11383d918;
    auStack_110[0] = 0;
    uStack_120 = 0;
    pppuVar15 = (undefined ***)ppuVar23[3];
    pppuVar10 = &ppuStack_140;
    func_0x000107c3034c(pppuVar10,pppuVar15,*(int *)(ppuVar23 + 4) - (int)pppuVar15);
    if (((ulong)pppuVar10 & 1) == 0) {
      pppuStack_190 = (undefined ***)((long)ppuVar23[4] - (long)ppuVar23[3]);
      ppuStack_198 = (undefined **)&UNK_100697a48;
      pppuStack_188 = (undefined ***)0x0;
      ppuStack_1a0 = ppuVar22;
      func_0x000107c2793c(&UNK_10f4bcfc8);
      func_0x000107c3173c(&pppuStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_260);
    }
    else {
      func_0x0001087c0044(&pppuStack_170);
      FUN_1087c0054();
      ppuStack_1a0 = &PTR_FUN_110a90cd0;
      ppuStack_198 = (undefined **)0x0;
      uStack_178 = 0;
      pppuStack_190 = (undefined ***)0x0;
      pppuStack_188 = (undefined ***)0x0;
      func_0x0001087c0238(&ppuStack_1a0);
      FUN_1087c00b8();
      FUN_1087602a4(auStack_230);
      pppuVar15 = &ppuStack_1a0;
      FUN_1086ec534();
      func_0x000107c2a484(&ppuStack_1a0);
    }
    func_0x00010b59e378(&ppuStack_140);
    FUN_108907ff0(&pppuStack_170);
    ppuVar22 = ppuVar22 + 0xb;
  }
  pppuVar18 = pppuStack_290 + 0x2a;
  pppuVar21 = (undefined ***)0x108833b0c;
  pppuStack_170 = (undefined ***)0x108833b0c;
  pppuStack_168 = (undefined ***)&PTR_DAT_110a79680;
  pppuStack_160 = pppuStack_1b0;
  pppuStack_158 = pppuStack_1a8;
  if (pppuStack_1a8 != (undefined ***)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_01 != 0);
  }
  pppuVar19 = pppuStack_1b8;
  pppuVar13 = pppuStack_1c0;
  ppuStack_1a0 = (undefined **)FUN_108833b4c;
  ppuStack_198 = &PTR_FUN_110a79698;
  pppuStack_190 = pppuStack_1c0;
  pppuStack_188 = pppuStack_1b8;
  if (pppuStack_1b8 != (undefined ***)0x0) {
    do {
      func_0x000108833e94();
    } while (extraout_w10_02 != 0);
  }
  pppuVar11 = pppuVar18;
  FUN_1086ef340();
  if (((ulong)pppuVar11 & 1) == 0) {
    pppuStack_260 = (undefined ***)0x0;
    pppuStack_258 = (undefined ***)0x0;
    ppuVar23 = &PTR_FUN_110a79698;
  }
  else {
    pppuVar12 = (undefined ***)0x88;
    __Znwm();
    pppuVar12[1] = (undefined **)0x0;
    pppuVar12[2] = (undefined **)0x0;
    *pppuVar12 = &PTR_DAT_110a795a8;
    pppuVar12[3] = &PTR_FUN_110a6b498;
    pppuVar12[4] = (undefined **)0x108833b0c;
    pppuVar21 = pppuVar12 + 5;
    *pppuVar21 = &PTR_DAT_110a79680;
    pppuVar12[6] = (undefined **)pcVar14;
    pppuVar12[7] = (undefined **)pppuVar10;
    pppuVar11 = pppuVar12;
    if (pppuVar10 != (undefined ***)0x0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_03 != 0);
    }
    pcVar14 = FUN_108833b4c;
    ppuStack_140 = (undefined **)FUN_108833b4c;
    ppuStack_138 = &PTR_FUN_110a79698;
    pppuStack_130 = pppuVar13;
    pppuStack_128 = pppuVar19;
    if (pppuVar19 != (undefined ***)0x0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_04 != 0);
    }
    pppuVar10 = &ppuStack_140;
    pppuVar12[10] = (undefined **)FUN_108833a90;
    pppuVar12[0xb] = &PTR_FUN_110a79668;
    func_0x000108834064();
    *pppuVar11 = (undefined **)FUN_108833b4c;
    pppuVar11[1] = &PTR_FUN_110a79698;
    pppuVar11[2] = (undefined **)pppuVar13;
    pppuVar11[3] = (undefined **)pppuVar19;
    if (pppuVar19 != (undefined ***)0x0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_05 != 0);
    }
    pppuVar12[0xc] = (undefined **)pppuVar11;
    func_0x000104be3970(&pppuStack_130);
    pppuVar12[3] = &PTR_DAT_110a795f8;
    pppuVar12[0x10] = (undefined **)pppuVar18;
    ppuVar23 = ppuStack_198;
    pppuStack_260 = pppuVar12 + 3;
    pppuStack_258 = pppuVar12;
  }
  pppuVar19 = pppuStack_258;
  pppuVar13 = pppuStack_260;
  func_0x000108834104(ppuVar23);
  func_0x000108834050();
  if (pppuVar13 != (undefined ***)0x0) {
    pppuStack_260 = (undefined ***)0x0;
    pppuStack_258 = (undefined ***)0x0;
    ppuStack_140 = (undefined **)((ulong)ppuStack_140 & 0xffffffffffffff00);
    auStack_110[0] = auStack_110[0] & 0xffffffffffffff00;
    pppuVar15 = appuStack_248;
    pppuStack_170 = pppuVar13;
    pppuStack_168 = pppuVar19;
    (**(code **)(*pppuStack_290[0x1b] + 0x20))
              (pppuStack_290[0x1b],pppuVar15,&pppuStack_170,&ppuStack_140);
    func_0x00010086ab34(&ppuStack_140);
    func_0x000108760458(&pppuStack_170);
  }
  FUN_108833bb4(&pppuStack_260);
  FUN_108902090(appuStack_248);
  func_0x000104be3970(&pppuStack_1c0);
  func_0x000104be3970(&pppuStack_1b0);
  func_0x000104be3970(&pppuStack_270);
  pppuVar13 = &ppuStack_280;
  FUN_1088335b0(pppuVar13);
  while( true ) {
    while( true ) {
      func_0x000108833e48(uStack_70);
      if ((bool)uVar9) {
        return pppuVar13;
      }
      ___stack_chk_fail();
      func_0x000108833f0c();
      func_0x000104be3970(pppuVar10 + 2);
      (*(code *)*pppuVar19[5])(pppuVar21);
      __ZNSt3__119__shared_weak_countD2Ev(pppuVar19);
      __ZdlPv();
      func_0x000108834104(ppuStack_198);
      func_0x000108834050();
      FUN_108902090(appuStack_248);
      func_0x000104be3970(&pppuStack_1c0);
      func_0x000104be3970(&pppuStack_1b0);
      func_0x000104be3970(&pppuStack_270);
      pppuVar13 = &ppuStack_280;
      FUN_1088335b0();
      uVar9 = (int)pppuVar18 == 2;
      if (!(bool)uVar9) break;
      pppuVar13 = (undefined ***)pcVar14;
      ___cxa_begin_catch(pcVar14);
      ___cxa_end_catch();
    }
    uVar9 = (int)pppuVar18 == 1;
    if (!(bool)uVar9) break;
    pppuVar13 = (undefined ***)pcVar14;
    ___cxa_begin_catch();
    func_0x000108833ed0();
    ppuStack_140 = (undefined **)0x10f2443cc;
    ppuStack_138 = (undefined **)0x0;
    pppuStack_128 = (undefined ***)0x0;
    pppuStack_130 = pppuVar13;
    func_0x000108833f28();
    func_0x0001088340c8(appuStack_248);
    pppuVar13 = appuStack_248;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar13);
    ___cxa_end_catch();
  }
  func_0x000108833f34();
  pcVar24 = FUN_108831b48;
  func_0x00010883412c();
  ppppuVar6 = &pppuStack_290;
  puVar7 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar8 = (undefined1 *)ppppuVar6;
    pppuVar11 = (undefined ***)(puVar8 + -0xe0);
    *(undefined ***)(puVar8 + -0x40) = &PTR_DAT_110a79680;
    *(undefined ****)(puVar8 + -0x38) = pppuVar10;
    *(undefined ****)(puVar8 + -0x30) = pppuVar21;
    *(undefined ****)(puVar8 + -0x28) = pppuVar19;
    *(undefined ****)(puVar8 + -0x20) = pppuVar18;
    *(code **)(puVar8 + -0x18) = pcVar14;
    *(undefined1 **)(puVar8 + -0x10) = puVar7 + -0x10;
    *(code **)(puVar8 + -8) = pcVar24;
    pppuVar10 = pppuVar13;
    func_0x000108833eb0();
    *(undefined8 *)(puVar8 + -0x48) = extraout_x8_00;
    *pppuVar10 = &PTR_FUN_110a78e60;
    pppuVar10 = pppuVar10 + 0x2a;
    FUN_1086ef3dc(pppuVar10);
    pppuVar18 = pppuVar13 + 0x17;
    ppuVar23 = *pppuVar18;
    __ZNSt3__17promiseIvEC1Ev(puVar8 + -0xe0);
    __ZNSt3__17promiseIvE10get_futureEv(puVar8 + -0xb0,puVar8 + -0xe0);
    uVar17 = *(undefined8 *)(puVar8 + -0xe0);
    *(undefined8 *)(puVar8 + -0xe0) = 0;
    *(undefined8 *)(puVar8 + -0xa8) = 0x108833ccc;
    *(undefined ***)(puVar8 + -0xa0) = &PTR_FUN_110a79740;
    *(undefined8 *)(puVar8 + -0xd0) = 0;
    *(undefined ****)(puVar8 + -200) = pppuVar13;
    *(undefined8 *)(puVar8 + -0x98) = uVar17;
    *(undefined ****)(puVar8 + -0x90) = pppuVar13;
    func_0x000108834258(*(undefined8 *)(*ppuVar23 + 0x10));
    func_0x000108833e88(*(undefined8 *)(puVar8 + -0xa0));
    __ZNSt3__17promiseIvED1Ev(puVar8 + -0xd0);
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)(puVar8 + -0xb0));
    __ZNSt3__16futureIvED1Ev(puVar8 + -0xb0);
    __ZNSt3__17promiseIvED1Ev(puVar8 + -0xe0);
    func_0x00010789ad44(pppuVar10);
    pppuVar21 = (undefined ***)pppuVar13[0x17];
    pppuVar19 = pppuVar13 + 0x1b;
    ppuVar23 = *pppuVar19;
    *(undefined ***)(puVar8 + -0xd8) = pppuVar13[0x1c];
    *(undefined ***)(puVar8 + -0xe0) = ppuVar23;
    *pppuVar19 = (undefined **)0x0;
    pppuVar13[0x1c] = (undefined **)0x0;
    __ZNSt3__17promiseIvEC1Ev(puVar8 + -0xb0);
    __ZNSt3__17promiseIvE10get_futureEv(puVar8 + -0xb8,puVar8 + -0xb0);
    uVar17 = *(undefined8 *)(puVar8 + -0xb0);
    pppuVar10 = (undefined ***)(puVar8 + -0xa8);
    uVar26 = *(undefined8 *)(puVar8 + -0xd8);
    uVar25 = *(undefined8 *)(puVar8 + -0xe0);
    *(undefined8 *)(puVar8 + -0xe0) = 0;
    *(undefined8 *)(puVar8 + -0xd8) = 0;
    *(undefined8 *)(puVar8 + -0xb0) = 0;
    *(undefined8 *)(puVar8 + -0xa8) = 0x108833d48;
    *(undefined ***)(puVar8 + -0xa0) = &PTR_FUN_110a79758;
    *(undefined8 *)(puVar8 + -0x98) = uVar17;
    *(undefined8 *)(puVar8 + -0x88) = uVar26;
    *(undefined8 *)(puVar8 + -0x90) = uVar25;
    *(undefined8 *)(puVar8 + -200) = 0;
    *(undefined8 *)(puVar8 + -0xc0) = 0;
    *(undefined8 *)(puVar8 + -0xd0) = 0;
    func_0x000108834258((*pppuVar21)[2]);
    func_0x000108833e88(*(undefined8 *)(puVar8 + -0xa0));
    FUN_108833d20(puVar8 + -0xd0);
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)(puVar8 + -0xb8));
    __ZNSt3__16futureIvED1Ev(puVar8 + -0xb8);
    __ZNSt3__17promiseIvED1Ev(puVar8 + -0xb0);
    func_0x000107c297bc(puVar8 + -0xe0);
    func_0x00010bcceaec(*pppuVar18);
    __ZNSt3__16futureIvED1Ev(pppuVar13 + 0x2d);
    __ZNSt3__17promiseIvED1Ev(pppuVar13 + 0x2c);
    func_0x0001086f00e4(pppuVar13 + 0x25);
    func_0x000107c289f4(pppuVar13 + 0x23);
    func_0x000107c2936c(pppuVar13 + 0x21);
    func_0x000107c29370(pppuVar13 + 0x1f);
    func_0x000107c29374(pppuVar13 + 0x1d);
    func_0x000107c297bc(pppuVar19);
    func_0x000107c2814c(pppuVar13 + 0x19);
    func_0x000107c27c20(pppuVar18);
    func_0x000107c28d9c(pppuVar13 + 0x15);
    pcVar14 = (code *)(pppuVar13 + 1);
    func_0x00010863ed24();
    func_0x000108833e48(*(undefined8 *)(puVar8 + -0x48));
    if ((bool)uVar9) break;
    ___stack_chk_fail();
    if ((int)pppuVar15 == 0) {
      pppuVar11 = (undefined ***)pcVar14;
      func_0x000108833f34();
    }
    else {
      __ZNSt3__16futureIvED1Ev(puVar8 + -0xb8);
      __ZNSt3__17promiseIvED1Ev(puVar8 + -0xb0);
      func_0x000107c297bc();
    }
    pcVar24 = FUN_108831ddc;
    func_0x00010883412c();
    ppppuVar6 = (undefined ****)(puVar8 + -0xe0);
    pppuVar13 = pppuVar11;
    puVar7 = puVar8;
  }
  return pppuVar13;
}



/* Entry: 108831b48; end: 108831ddb;  */

undefined8 * FUN_108831b48(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar4;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  
  while( true ) {
    puVar2 = (undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = param_1;
    func_0x000108833eb0();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *puVar1 = &PTR_FUN_110a78e60;
    puVar1 = puVar1 + 0x2a;
    FUN_1086ef3dc(puVar1);
    unaff_x20 = param_1 + 0x17;
    plVar4 = (long *)*unaff_x20;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xe0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xb0),
               (undefined1 *)((long)register0x00000008 + -0xe0));
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x108833ccc;
    *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_110a79740;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 **)((long)register0x00000008 + -200) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar3;
    *(undefined8 **)((long)register0x00000008 + -0x90) = param_1;
    func_0x000108834258(*(undefined8 *)(*plVar4 + 0x10));
    func_0x000108833e88(*(undefined8 *)((long)register0x00000008 + -0xa0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xd0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010789ad44(puVar1);
    unaff_x22 = (long *)param_1[0x17];
    unaff_x21 = param_1 + 0x1b;
    uVar3 = *unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = param_1[0x1c];
    *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar3;
    *unaff_x21 = 0;
    param_1[0x1c] = 0;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xb8),
               (undefined1 *)((long)register0x00000008 + -0xb0));
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xa8);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x108833d48;
    *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_110a79758;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar3;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    func_0x000108834258(*(undefined8 *)(*unaff_x22 + 0x10));
    func_0x000108833e88(*(undefined8 *)((long)register0x00000008 + -0xa0));
    FUN_108833d20((undefined1 *)((long)register0x00000008 + -0xd0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xb8));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb8));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
    func_0x000107c297bc((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010bcceaec(*unaff_x20);
    __ZNSt3__16futureIvED1Ev(param_1 + 0x2d);
    __ZNSt3__17promiseIvED1Ev(param_1 + 0x2c);
    func_0x0001086f00e4(param_1 + 0x25);
    func_0x000107c289f4(param_1 + 0x23);
    func_0x000107c2936c(param_1 + 0x21);
    func_0x000107c29370(param_1 + 0x1f);
    func_0x000107c29374(param_1 + 0x1d);
    func_0x000107c297bc(unaff_x21);
    func_0x000107c2814c(param_1 + 0x19);
    func_0x000107c27c20(unaff_x20);
    func_0x000107c28d9c(param_1 + 0x15);
    unaff_x19 = param_1 + 1;
    func_0x00010863ed24();
    func_0x000108833e48(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      puVar2 = unaff_x19;
      func_0x000108833f34();
    }
    else {
      __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb8));
      __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
      func_0x000107c297bc();
    }
    unaff_x30 = FUN_108831ddc;
    func_0x00010883412c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    param_1 = puVar2;
  }
  return param_1;
}



/* Entry: 108831ddc; end: 108831ddf;  */

undefined8 * FUN_108831ddc(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar4;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  
  while( true ) {
    puVar2 = (undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = param_1;
    func_0x000108833eb0();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *puVar1 = &PTR_FUN_110a78e60;
    puVar1 = puVar1 + 0x2a;
    FUN_1086ef3dc(puVar1);
    unaff_x20 = param_1 + 0x17;
    plVar4 = (long *)*unaff_x20;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xe0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xb0),
               (undefined1 *)((long)register0x00000008 + -0xe0));
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x108833ccc;
    *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_110a79740;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 **)((long)register0x00000008 + -200) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar3;
    *(undefined8 **)((long)register0x00000008 + -0x90) = param_1;
    func_0x000108834258(*(undefined8 *)(*plVar4 + 0x10));
    func_0x000108833e88(*(undefined8 *)((long)register0x00000008 + -0xa0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xd0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010789ad44(puVar1);
    unaff_x22 = (long *)param_1[0x17];
    unaff_x21 = param_1 + 0x1b;
    uVar3 = *unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = param_1[0x1c];
    *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar3;
    *unaff_x21 = 0;
    param_1[0x1c] = 0;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xb8),
               (undefined1 *)((long)register0x00000008 + -0xb0));
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xa8);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x108833d48;
    *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_110a79758;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar3;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    func_0x000108834258(*(undefined8 *)(*unaff_x22 + 0x10));
    func_0x000108833e88(*(undefined8 *)((long)register0x00000008 + -0xa0));
    FUN_108833d20((undefined1 *)((long)register0x00000008 + -0xd0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xb8));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb8));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
    func_0x000107c297bc((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010bcceaec(*unaff_x20);
    __ZNSt3__16futureIvED1Ev(param_1 + 0x2d);
    __ZNSt3__17promiseIvED1Ev(param_1 + 0x2c);
    func_0x0001086f00e4(param_1 + 0x25);
    func_0x000107c289f4(param_1 + 0x23);
    func_0x000107c2936c(param_1 + 0x21);
    func_0x000107c29370(param_1 + 0x1f);
    func_0x000107c29374(param_1 + 0x1d);
    func_0x000107c297bc(unaff_x21);
    func_0x000107c2814c(param_1 + 0x19);
    func_0x000107c27c20(unaff_x20);
    func_0x000107c28d9c(param_1 + 0x15);
    unaff_x19 = param_1 + 1;
    func_0x00010863ed24();
    func_0x000108833e48(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      puVar2 = unaff_x19;
      func_0x000108833f34();
    }
    else {
      __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb8));
      __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xb0));
      func_0x000107c297bc();
    }
    unaff_x30 = FUN_108831ddc;
    func_0x00010883412c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    param_1 = puVar2;
  }
  return param_1;
}



/* Entry: 108831de0; end: 108831df3;  */

void FUN_108831de0(void)

{
  FUN_108831b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108831df4; end: 108831e5b;  */

long FUN_108831df4(long param_1)

{
  long lStack_28;
  
  func_0x0001086f00e4(param_1 + 0x30);
  func_0x000104be35c8(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108831e5c; end: 108831e8f;  */

void FUN_108831e5c(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *extraout_x8;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  auStack_28[0] = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  uStack_1c = param_5;
  func_0x000108833f4c();
  (*extraout_x8)(param_1,auStack_28);
  return;
}



/* Entry: 108831e90; end: 1088323bf;  */

void FUN_108831e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong *puVar10;
  long *plVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined **ppuVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined6 uStack_1a0;
  undefined2 uStack_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  undefined ***pppuStack_170;
  code *pcStack_168;
  ulong auStack_160 [5];
  undefined1 uStack_138;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000108833eb0();
  uVar3 = *(char *)(param_1 + 0x140) == '\x01';
  if ((bool)uVar3) {
    plVar4 = (long *)*param_5;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x18);
    func_0x000108833e48(extraout_x8);
    if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000108831f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    lStack_228 = *(long *)(param_1 + 0xe8);
    lStack_220 = *(long *)(param_1 + 0xf0);
    if (lStack_220 != 0) {
      plVar4 = (long *)(lStack_220 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_188 = &PTR_SUB_110a79518;
    uStack_238 = 0;
    uStack_230 = 0;
    pppuStack_170 = &ppuStack_188;
    ppuStack_1c8 = &PTR_FUN_110a905d0;
    uStack_1c0 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_19a = 0;
    uStack_198 = 0;
    lStack_180 = lStack_228;
    lStack_178 = lStack_220;
    uStack_68 = extraout_x8;
    func_0x000107c29ee4(auStack_d0,param_2);
    FUN_108782474(&ppuStack_1c8);
    func_0x000107c287d0();
    puVar5 = auStack_d0;
    func_0x000107c2a2e0();
    uStack_198 = (undefined6)param_3;
    uStack_192 = (undefined2)((ulong)param_3 >> 0x30);
    func_0x000107c316c4();
    func_0x000107c27994(auStack_d0,param_2);
    uStack_b8 = param_4;
    puStack_b0 = puVar5;
    func_0x0001088335d4(auStack_a8,&ppuStack_188);
    puStack_80 = param_5[1];
    puStack_88 = *param_5;
    if (param_5[1] != (undefined *)0x0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10 != 0);
    }
    uStack_70 = *(undefined8 *)(param_1 + 0x130);
    uStack_78 = *(undefined8 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x130) != 0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c27994(auStack_208,param_2);
    puStack_1e0 = param_5[1];
    puStack_1e8 = *param_5;
    uStack_1f0 = param_4;
    if (param_5[1] != (undefined *)0x0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_01 != 0);
    }
    uStack_1d0 = *(undefined8 *)(param_1 + 0x130);
    uStack_1d8 = *(undefined8 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x130) != 0) {
      do {
        func_0x000108833e94();
      } while (extraout_w10_02 != 0);
    }
    ppuStack_100 = (undefined **)FUN_108833718;
    ppuStack_f8 = &PTR_FUN_110a794d8;
    lVar6 = 0x68;
    __Znwm();
    func_0x000107c27994();
    *(undefined1 **)(lVar6 + 0x20) = puStack_b0;
    *(undefined8 *)(lVar6 + 0x18) = uStack_b8;
    lVar7 = lVar6 + 0x28;
    func_0x0001088335d4(lVar7,auStack_a8);
    puVar5 = auStack_d0;
    *(undefined **)(lVar6 + 0x50) = puStack_80;
    *(undefined **)(lVar6 + 0x48) = puStack_88;
    if (puStack_80 != (undefined *)0x0) {
      do {
        func_0x00010883417c();
        puVar5 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *(undefined8 *)(lVar6 + 0x60) = uStack_70;
    *(undefined8 *)(lVar6 + 0x58) = uStack_78;
    *(undefined8 *)(puVar5 + 0x58) = 0;
    *(undefined8 *)(puVar5 + 0x60) = 0;
    pcStack_130 = FUN_108833894;
    ppuStack_128 = &PTR_FUN_110a794f0;
    lStack_f0 = lVar6;
    func_0x000108834224();
    func_0x000107c27994();
    puVar5 = auStack_208;
    *(undefined8 *)(lVar7 + 0x18) = uStack_1f0;
    *(undefined **)(lVar7 + 0x28) = puStack_1e0;
    *(undefined **)(lVar7 + 0x20) = puStack_1e8;
    if (puStack_1e0 != (undefined *)0x0) {
      do {
        func_0x00010883417c();
        puVar5 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    *(undefined8 *)(lVar7 + 0x38) = uStack_1d0;
    *(undefined8 *)(lVar7 + 0x30) = uStack_1d8;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    puVar8 = (undefined *)(param_1 + 0x150U);
    lStack_120 = lVar7;
    FUN_1086ef340();
    if (((ulong)puVar8 & 1) == 0) {
      ppuStack_218 = (undefined **)0x0;
      ppuStack_210 = (undefined **)0x0;
      ppuVar12 = &PTR_FUN_110a794f0;
    }
    else {
      ppuVar9 = (undefined **)0x88;
      __Znwm();
      ppuVar9[1] = (undefined *)0x0;
      ppuVar9[2] = (undefined *)0x0;
      *ppuVar9 = (undefined *)&PTR_FUN_110a79400;
      ppuVar9[3] = (undefined *)&PTR_FUN_110a6ee40;
      ppuVar9[4] = (undefined *)ppuStack_100;
      (*(code *)ppuStack_f8[2])(ppuVar9 + 5,&ppuStack_f8);
      pcStack_168 = pcStack_130;
      puVar10 = auStack_160;
      (*(code *)ppuStack_128[2])(puVar10,&ppuStack_128);
      ppuVar9[10] = FUN_10883369c;
      ppuVar9[0xb] = (undefined *)&PTR_FUN_110a794c0;
      func_0x000108834064();
      *puVar10 = (ulong)pcStack_168;
      (**(code **)(auStack_160[0] + 0x10))(puVar10 + 1,auStack_160);
      ppuVar9[0xc] = (undefined *)puVar10;
      func_0x0001088340d0();
      ppuVar9[3] = (undefined *)&PTR_DAT_110a79450;
      ppuVar9[0x10] = (undefined *)(param_1 + 0x150U);
      ppuVar12 = ppuStack_128;
      ppuStack_218 = ppuVar9 + 3;
      ppuStack_210 = ppuVar9;
    }
    param_5 = ppuStack_210;
    ppuVar9 = ppuStack_218;
    func_0x000108834240(ppuVar12);
    func_0x000108833e88(ppuStack_f8);
    if (ppuVar9 != (undefined **)0x0) {
      plVar4 = *(long **)(param_1 + 0xd8);
      ppuStack_100 = ppuVar9;
      ppuStack_f8 = param_5;
      if (param_5 != (undefined **)0x0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10_03 != 0);
      }
      pcStack_168 = (code *)((ulong)pcStack_168 & 0xffffffffffffff00);
      uStack_138 = 0;
      (**(code **)(*plVar4 + 0x40))();
      func_0x00010086ab34(&pcStack_168);
      func_0x0001087820a0(&ppuStack_100);
    }
    FUN_108833910(&ppuStack_218);
    FUN_108831df4(auStack_208);
    func_0x000108831e24(auStack_d0);
    FUN_1089052c4(&ppuStack_1c8);
    func_0x000108833628(&ppuStack_188);
    func_0x000107c29374(&uStack_238);
    plVar4 = &lStack_228;
    func_0x000107c29374();
    func_0x000108833e48(uStack_68);
    if ((bool)uVar3) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x0001088340d0();
  (**(code **)param_5[5])(param_5 + 5);
  __ZNSt3__119__shared_weak_countD2Ev(param_5);
  __ZdlPv();
  func_0x000108834240(ppuStack_128);
  func_0x000108833e88(ppuStack_f8);
  FUN_108831df4(auStack_208);
  func_0x000108831e24(auStack_d0);
  FUN_1089052c4(&ppuStack_1c8);
  func_0x000108833628(&ppuStack_188);
  func_0x000107c29374(&uStack_238);
  plVar11 = &lStack_228;
  func_0x000107c29374();
  func_0x000108833f34();
  func_0x000108833f0c();
  *plVar11 = (long)&PTR_FUN_110a805f0;
  plVar11[1] = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  FUN_1088325a0();
  FUN_108905fac();
  func_0x000107c316c4();
  plVar4[4] = (long)plVar11;
  plVar4[5] = (long)plVar11;
  return;
}



/* Entry: 1088323c0; end: 108832413;  */

void FUN_1088323c0(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x000108833f0c();
  *param_1 = &PTR_FUN_110a805f0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_1088325a0();
  FUN_108905fac();
  func_0x000107c316c4();
  *(undefined8 **)(unaff_x19 + 0x20) = param_1;
  *(undefined8 **)(unaff_x19 + 0x28) = param_1;
  return;
}



/* Entry: 108832414; end: 10883259f;  */

void FUN_108832414(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  byte bStack_70;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  if (*(long **)(param_2 + 0xf8) == (long *)0x0) {
    func_0x0001088342c8();
    return;
  }
  (**(code **)(**(long **)(param_2 + 0xf8) + 0x18))(auStack_80);
  if ((bStack_38 & 1) != 0) {
    if ((bStack_70 & 1) != 0) {
      uVar5 = *(ulong *)(lStack_68 + 0x10) & 0xfffffffffffffffc;
      cVar1 = *(char *)(uVar5 + 0x17);
      if (cVar1 < '\0') {
        if (*(long *)(uVar5 + 8) == 0) goto LAB_1088324e4;
      }
      else if (cVar1 == '\0') goto LAB_1088324e4;
      func_0x000107c27994(&uStack_d0,param_3);
      uVar4 = uStack_c0;
      uVar3 = uStack_c8;
      uVar2 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      uStack_98 = uStack_50;
      uStack_a0 = uStack_58;
      uStack_88 = uStack_40;
      uStack_90 = uStack_48;
      param_1[1] = uVar3;
      *param_1 = uVar2;
      param_1[2] = uVar4;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_b8 = 0;
      param_1[4] = uStack_50;
      param_1[3] = uStack_58;
      param_1[6] = uStack_40;
      param_1[5] = uStack_48;
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x000107c27914(&uStack_b8);
      func_0x000107c27914(&uStack_d0);
      goto LAB_1088324fc;
    }
LAB_1088324e4:
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x20))(*(long **)(param_2 + 0xf8),param_3);
  }
  func_0x0001088342c8();
LAB_1088324fc:
  FUN_1086edae4(auStack_80);
  return;
}



/* Entry: 1088325a0; end: 1088325d3;  */

void FUN_1088325a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x0001088342a8();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010883419c();
    }
    FUN_10875e698();
    *(ulong *)(param_1 + 0x18) = uVar2;
  }
  return;
}



/* Entry: 1088325d4; end: 108832a47;  */

void FUN_1088325d4(undefined8 *param_1,long param_2,undefined8 *param_3,undefined **param_4,
                  long param_5,ulong param_6)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  uint uVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auStack_1e8 [24];
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [72];
  undefined **ppuStack_180;
  long lStack_178;
  long lStack_170;
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  
  func_0x000108833eb0();
  ppuStack_118 = &PTR_DAT_110a96180;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  ppuStack_f0 = (undefined **)0x0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  ppuStack_b8 = (undefined **)0x0;
  uStack_a8 = 0;
  ppuStack_a0 = &PTR_DAT_110a947b8;
  lStack_98 = 0;
  uStack_88 = (undefined ***)0x0;
  uVar8 = *(int *)(param_3 + 1) - (int)*param_3;
  pppuVar4 = &ppuStack_a0;
  uStack_58 = extraout_x8;
  func_0x000107c3034c(pppuVar4,*param_3,uVar8);
  if (((ulong)pppuVar4 & 1) == 0) {
    uVar8 = 0;
    param_5 = 0;
    param_6 = 4;
    FUN_108832a48(param_1,*(undefined8 *)(param_2 + 0x128),0,0);
    goto LAB_1088326b4;
  }
  if (uStack_88._4_4_ == 0xd) {
    pppuVar5 = &ppuStack_a0;
    func_0x000108833240();
    pppuVar7 = pppuVar5;
    func_0x0001088342a8();
    if (pppuVar7 == (undefined ***)0x0) {
      pppuVar7 = (undefined ***)pppuVar5[1];
      if (((ulong)pppuVar7 & 1) != 0) {
        func_0x00010883419c();
      }
      FUN_10875e698();
      pppuVar5[3] = (undefined **)pppuVar7;
    }
    ppuVar10 = pppuVar7[3];
    in_ZR = ((ulong)ppuVar10 & 1) == 0;
    pppuVar5 = pppuVar7 + 3;
    if (!(bool)in_ZR) {
      pppuVar5 = (undefined ***)((long)ppuVar10 + 7);
    }
    lVar13 = (long)*(int *)(pppuVar7 + 4) << 3;
    do {
      if (lVar13 == 0) {
        lVar13 = 2;
        goto LAB_108832778;
      }
      pppuVar11 = pppuVar5 + 1;
      pppuVar7 = (undefined ***)*pppuVar5;
      lVar13 = lVar13 + -8;
      pppuVar5 = pppuVar11;
    } while (((long)param_4 < 0) || (in_ZR = pppuVar7[0xc] == param_4, !(bool)in_ZR));
    lVar13 = 2;
LAB_108832768:
    func_0x000107c2895c(&ppuStack_118,pppuVar7);
  }
  else {
    in_ZR = uStack_88._4_4_ == 6;
    if ((bool)in_ZR) {
      if ((*(byte *)(lStack_90 + 0x10) >> 1 & 1) != 0) {
        pppuVar5 = &ppuStack_a0;
        func_0x0001088332d4();
        *(uint *)(pppuVar5 + 2) = *(uint *)(pppuVar5 + 2) | 2;
        pppuVar7 = (undefined ***)pppuVar5[4];
        if (pppuVar7 == (undefined ***)0x0) {
          pppuVar7 = (undefined ***)pppuVar5[1];
          if (((ulong)pppuVar7 & 1) != 0) {
            func_0x00010883419c();
          }
          func_0x0001086cfa40();
          pppuVar5[4] = (undefined **)pppuVar7;
        }
        lVar13 = 3;
        goto LAB_108832768;
      }
    }
    else {
      in_ZR = uStack_88._4_4_ == 1;
      if ((bool)in_ZR) {
        pppuVar7 = &ppuStack_a0;
        FUN_1086d0184(pppuVar7);
        FUN_1086c5c14();
        lVar13 = 1;
        goto LAB_108832768;
      }
    }
LAB_1088326b4:
    lVar13 = 0;
  }
LAB_108832778:
  FUN_108916cd0(&ppuStack_a0);
  if ((int)pppuVar4 == 0) goto LAB_1088329b8;
  if (((long)param_4 < 0) || (in_ZR = ppuStack_b8 == param_4, !(bool)in_ZR)) {
    uVar8 = 0;
    param_6 = 5;
    param_5 = lVar13;
    FUN_108832a48(param_1,*(undefined8 *)(param_2 + 0x128),0,lVar13);
    goto LAB_1088329b8;
  }
  ppuVar10 = &PTR_PTR_113280c30;
  if (ppuStack_f0 != (undefined **)0x0) {
    ppuVar10 = ppuStack_f0;
  }
  ppuVar1 = &PTR_PTR_113280bc8;
  if ((undefined **)ppuVar10[0xd] != (undefined **)0x0) {
    ppuVar1 = (undefined **)ppuVar10[0xd];
  }
  uVar2 = *(uint *)((long)ppuVar1 + 0x1c);
  if (uVar2 < 2) {
    param_4 = (undefined **)0x1;
LAB_108832810:
    if (uVar2 - 2 < 5) {
LAB_108832818:
      if (*(char *)(param_2 + 0x50) == '\x01') {
        lVar9 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
        param_5 = *(long *)(param_2 + 0x20);
        pppuVar4 = &ppuStack_118;
        FUN_1086674f4(pppuVar4,*(long *)(param_2 + 8),lVar9,param_5,
                      *(long *)(param_2 + 0x28) - param_5,*(long *)(param_2 + 0x38),
                      *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38));
        uVar8 = (uint)lVar9;
        iVar3 = (int)pppuVar4;
        goto LAB_1088328bc;
      }
      param_6 = 0;
    }
    else {
      in_ZR = uVar2 == 2;
      if (uVar2 < 2) {
LAB_1088328f4:
        puVar12 = (undefined8 *)((ulong)ppuVar10[0xc] & 0xfffffffffffffffc);
        lVar9 = (long)*(char *)((long)puVar12 + 0x17);
        if (lVar9 < 0) {
          lVar9 = puVar12[1];
          puVar12 = (undefined8 *)*puVar12;
        }
        func_0x000107c28004(&uStack_130,puVar12,(long)puVar12 + lVar9);
        uStack_148 = uStack_128;
        uStack_150 = uStack_130;
        uStack_140 = uStack_120;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_130 = 0;
        uStack_138 = 1;
        param_2 = *(long *)(param_2 + 0x128);
        ppuVar10 = param_4;
        func_0x0001086ef9a8(&ppuStack_a0,lVar13,param_4);
        uVar8 = (uint)ppuVar10;
        func_0x0001088342bc();
        func_0x0001088340e0();
        func_0x000107c27b7c(&ppuStack_a0,&uStack_150);
        *param_1 = 0;
        func_0x000107c27b7c(param_1 + 1,&ppuStack_a0);
        func_0x000107c279c4(&ppuStack_a0);
        func_0x000107c279c4(&uStack_150);
        func_0x000107c27914(&uStack_130);
        goto LAB_1088329b8;
      }
      if (uVar2 == 7) goto LAB_108832874;
      param_6 = 4;
    }
    in_ZR = 0;
    func_0x000108834134();
    goto LAB_1088329b8;
  }
  if (uVar2 == 5) {
    param_4 = (undefined **)0x2;
    goto LAB_108832818;
  }
  if (uVar2 != 7) {
    param_4 = (undefined **)0x4;
    goto LAB_108832810;
  }
  param_4 = (undefined **)0x3;
LAB_108832874:
  in_ZR = uVar2 == 7;
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  func_0x000107c29e14(uVar6,0xb4);
  if (((int)uVar6 == 0) || (*(long *)(param_2 + 0x118) == 0)) {
LAB_10883290c:
    param_6 = 3;
  }
  else {
    ppuStack_a0 = &PTR_FUN_110a796c0;
    uStack_88 = &ppuStack_a0;
    uVar6 = *(undefined8 *)(param_2 + 0x128);
    pppuVar4 = &ppuStack_118;
    lStack_98 = param_2;
    FUN_1086789dc(pppuVar4,&ppuStack_a0,uVar6);
    uVar8 = (uint)uVar6;
    iVar3 = (int)pppuVar4;
    FUN_108833c90(&ppuStack_a0);
LAB_1088328bc:
    ppuVar10 = &PTR_PTR_113280c30;
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar10 = ppuStack_f0;
    }
    in_ZR = iVar3 == 5;
    param_6 = 1;
    switch(iVar3) {
    case 0:
    case 1:
      goto LAB_1088328f4;
    case 2:
      break;
    case 3:
      goto LAB_10883290c;
    case 4:
    case 5:
      param_6 = 2;
      break;
    default:
      param_6 = 4;
    }
  }
  func_0x000108834134();
LAB_1088329b8:
  pppuVar4 = &ppuStack_118;
  func_0x000107c2a5a4();
  func_0x000108833e48(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108833c90(&ppuStack_a0);
    pppuVar7 = &ppuStack_118;
    func_0x000107c2a5a4();
    func_0x000108833f34();
    pcStack_158 = FUN_108832a48;
    ppuStack_180 = param_4;
    lStack_178 = lVar13;
    lStack_170 = param_2;
    pppuStack_168 = pppuVar4;
    puStack_160 = &stack0xfffffffffffffff0;
    FUN_1086ef91c(auStack_1c8,param_5,uVar8 & 0xff,param_6);
    func_0x0001088342bc();
    func_0x0001088340e0();
    auStack_1e8[0] = 0;
    uStack_1d0 = 0;
    *pppuVar7 = (undefined **)(param_6 & 0xffffffff | 0x100000000);
    func_0x000107c27b7c(pppuVar7 + 1,auStack_1e8);
    func_0x000107c279c4(auStack_1e8);
    return;
  }
  return;
}



/* Entry: 108832a48; end: 108832ac3;  */

void FUN_108832a48(ulong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined1 auStack_78 [72];
  
  FUN_1086ef91c(auStack_78,param_4,param_3,param_5);
  func_0x0001088342bc();
  func_0x0001088340e0();
  auStack_98[0] = 0;
  uStack_80 = 0;
  *param_1 = param_5 & 0xffffffff | 0x100000000;
  func_0x000107c27b7c(param_1 + 1,auStack_98);
  func_0x000107c279c4(auStack_98);
  return;
}



/* Entry: 108832ac4; end: 108832bd7;  */

long * FUN_108832ac4(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x000108833eb0();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_110a78ea8;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      func_0x000107c28150();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x000108834320(0x108833da0);
      func_0x000108834264(unaff_x23 + 0x48);
      func_0x000108833ec0();
      func_0x000108834114();
      if (unaff_x27 == 0) {
        func_0x000108834300();
        if (extraout_x8_00 != 0) {
          do {
            func_0x000108833e94();
          } while (extraout_w10 != 0);
        }
        func_0x000108833f4c();
        func_0x00010883426c();
        func_0x000108833fb0();
      }
      func_0x00010883407c();
      unaff_x21 = plVar1;
    }
    func_0x000107c2814c(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x000104be35c8();
    func_0x000108833e48(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x000108833f34();
    }
    else {
      func_0x000108833fb0();
    }
    unaff_x30 = FUN_108832bd8;
    func_0x00010883412c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 108832bd8; end: 108832bdb;  */

long * FUN_108832bd8(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x000108833eb0();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_110a78ea8;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      func_0x000107c28150();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x000108834320(0x108833da0);
      func_0x000108834264(unaff_x23 + 0x48);
      func_0x000108833ec0();
      func_0x000108834114();
      if (unaff_x27 == 0) {
        func_0x000108834300();
        if (extraout_x8_00 != 0) {
          do {
            func_0x000108833e94();
          } while (extraout_w10 != 0);
        }
        func_0x000108833f4c();
        func_0x00010883426c();
        func_0x000108833fb0();
      }
      func_0x00010883407c();
      unaff_x21 = plVar1;
    }
    func_0x000107c2814c(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x000104be35c8();
    func_0x000108833e48(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x000108833f34();
    }
    else {
      func_0x000108833fb0();
    }
    unaff_x30 = FUN_108832bd8;
    func_0x00010883412c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 108832bdc; end: 108832bef;  */

void FUN_108832bdc(void)

{
  FUN_108832ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108832bf0; end: 108832d27;  */

long * FUN_108832bf0(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  undefined8 uStack_48;
  
  func_0x000108833eb0();
  func_0x000108834020();
  if (extraout_x9 != 0) {
    func_0x000108833ff8();
    lStack_98 = param_3[1];
    lStack_a0 = *param_3;
    lStack_90 = param_3[2];
    func_0x000107c28150();
    func_0x000108834314();
    func_0x0001088340fc();
    unaff_x22 = unaff_x21[0xe];
    lStack_80 = 0x108833db8;
    ppuStack_78 = &PTR_FUN_110a79788;
    plVar2 = (long *)0x28;
    __Znwm();
    ppuVar6 = ppuStack_a8;
    param_1 = lStack_b0;
    unaff_x23 = &lStack_80;
    lStack_b0 = 0;
    ppuStack_a8 = (undefined **)0x0;
    plVar2[1] = (long)ppuVar6;
    *plVar2 = param_1;
    plVar2[3] = lStack_98;
    plVar2[2] = lStack_a0;
    plVar2[4] = lStack_90;
    param_2 = unaff_x21 + 9;
    param_3 = &lStack_80;
    plStack_70 = plVar2;
    func_0x000107c28154();
    func_0x000108833e88(ppuStack_78);
    func_0x000108833f58();
    if (unaff_x22 == 0) {
      func_0x000108833fe8();
      lStack_80 = param_1;
      ppuStack_78 = ppuVar6;
      if (extraout_x8 != 0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10 != 0);
      }
      func_0x000108833f4c();
      param_3 = &lStack_80;
      (*extraout_x8_00)();
      param_2 = &lStack_80;
      func_0x000107c27e74();
    }
    func_0x00010883407c();
  }
  func_0x000108833e48(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  plVar2 = &lStack_80;
  func_0x000107c27e74();
  func_0x00010883407c();
  func_0x000108833f34();
  pcStack_b8 = FUN_108832d28;
  ppuVar4 = &puStack_c0;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000108833eb0();
  func_0x000108834020();
  if (extraout_x9_00 != 0) {
    func_0x000108833ff8();
    uStack_140 = SUB84(param_3,0);
    func_0x000107c28150();
    func_0x000108834314();
    func_0x0001088340fc();
    unaff_x22 = unaff_x21[0xe];
    unaff_x23 = &lStack_130;
    func_0x000108834084(0x108833df0);
    func_0x000108834218();
    func_0x000108833e88(uStack_128);
    func_0x000108833f58();
    if (unaff_x22 == 0) {
      func_0x000108833fe8();
      lStack_130 = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10_00 != 0);
      }
      func_0x000108833f4c();
      param_3 = &lStack_130;
      (*extraout_x8_02)();
      func_0x0001088340b8();
    }
    func_0x00010883407c();
  }
  func_0x000108833e48(uStack_f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar3 = plVar2;
    func_0x0001088340b8();
    func_0x00010883407c();
    pcVar5 = FUN_108832e00;
    func_0x000108833f34();
    puVar1 = auStack_150;
    while( true ) {
      *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
      *(long *)(puVar1 + -0x58) = unaff_x27;
      *(long *)(puVar1 + -0x50) = unaff_x26;
      *(undefined1 **)(puVar1 + -0x48) = unaff_x25;
      *(long *)(puVar1 + -0x40) = unaff_x24;
      *(long **)(puVar1 + -0x38) = unaff_x23;
      *(long *)(puVar1 + -0x30) = unaff_x22;
      *(long **)(puVar1 + -0x28) = unaff_x21;
      *(long **)(puVar1 + -0x20) = unaff_x20;
      *(long **)(puVar1 + -0x18) = plVar2;
      *(undefined1 ***)(puVar1 + -0x10) = ppuVar4;
      *(code **)(puVar1 + -8) = pcVar5;
      ppuVar4 = (undefined1 **)(puVar1 + -0x10);
      plVar2 = plVar3;
      func_0x000108833eb0();
      *(undefined8 *)(puVar1 + -0x68) = extraout_x8_03;
      *plVar2 = (long)&PTR_FUN_110a78ed8;
      unaff_x20 = plVar2 + 1;
      unaff_x24 = *unaff_x20;
      if (unaff_x24 != 0) {
        unaff_x26 = plVar3[2];
        unaff_x22 = plVar3[3];
        *unaff_x20 = 0;
        plVar2[2] = 0;
        func_0x000107c28150();
        unaff_x23 = *(long **)(unaff_x22 + 0x10);
        __ZNSt3__15mutex4lockEv(unaff_x23 + 1);
        unaff_x27 = unaff_x23[0xe];
        unaff_x25 = puVar1 + -0xa0;
        func_0x000108834320(0x108833e08);
        func_0x000108834264(unaff_x23 + 9);
        func_0x000108833ec0();
        func_0x000108834114();
        if (unaff_x27 == 0) {
          func_0x000108834300();
          if (extraout_x8_04 != 0) {
            do {
              func_0x000108833e94();
            } while (extraout_w10_01 != 0);
          }
          func_0x000108833f4c();
          func_0x00010883426c();
          func_0x000108833fb0();
        }
        func_0x000108834074();
        unaff_x21 = plVar2;
      }
      func_0x000107c2814c(plVar3 + 3);
      plVar2 = unaff_x20;
      func_0x000104be3970();
      func_0x000108833e48(*(undefined8 *)(puVar1 + -0x68));
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
      plVar3 = plVar2;
      if ((int)param_3 == 0) {
        func_0x000108833f34();
      }
      else {
        func_0x000108833fb0();
      }
      pcVar5 = FUN_108832f14;
      func_0x00010883412c();
      puVar1 = puVar1 + -0xb0;
    }
    return plVar3;
  }
  return plVar2;
}



/* Entry: 108832d28; end: 108832dff;  */

long * FUN_108832d28(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  code *pcVar6;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 *puVar3;
  
  func_0x000108833eb0();
  func_0x000108834020();
  if (extraout_x9 != 0) {
    func_0x000108833ff8();
    uStack_90 = SUB84(param_3,0);
    func_0x000107c28150();
    func_0x000108834314();
    func_0x0001088340fc();
    unaff_x22 = unaff_x21[0xe];
    unaff_x23 = &uStack_80;
    func_0x000108834084(0x108833df0);
    func_0x000108834218();
    func_0x000108833e88(uStack_78);
    func_0x000108833f58();
    if (unaff_x22 == 0) {
      func_0x000108833fe8();
      uStack_80 = param_1;
      if (extraout_x8 != 0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10 != 0);
      }
      func_0x000108833f4c();
      param_3 = &uStack_80;
      (*extraout_x8_00)();
      func_0x0001088340b8();
    }
    func_0x00010883407c();
  }
  func_0x000108833e48(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar4 = param_2;
    func_0x0001088340b8();
    func_0x00010883407c();
    pcVar6 = FUN_108832e00;
    func_0x000108833f34();
    puVar1 = auStack_a0;
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar3 = puVar1;
      *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
      *(long *)(puVar3 + -0x58) = unaff_x27;
      *(long *)(puVar3 + -0x50) = unaff_x26;
      *(undefined1 **)(puVar3 + -0x48) = unaff_x25;
      *(long *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
      *(long *)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = unaff_x21;
      *(long **)(puVar3 + -0x20) = unaff_x20;
      *(long **)(puVar3 + -0x18) = param_2;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(code **)(puVar3 + -8) = pcVar6;
      plVar5 = plVar4;
      func_0x000108833eb0();
      *(undefined8 *)(puVar3 + -0x68) = extraout_x8_01;
      *plVar5 = (long)&PTR_FUN_110a78ed8;
      unaff_x20 = plVar5 + 1;
      unaff_x24 = *unaff_x20;
      if (unaff_x24 != 0) {
        unaff_x26 = plVar4[2];
        unaff_x22 = plVar4[3];
        *unaff_x20 = 0;
        plVar5[2] = 0;
        func_0x000107c28150();
        unaff_x23 = *(undefined8 **)(unaff_x22 + 0x10);
        __ZNSt3__15mutex4lockEv(unaff_x23 + 1);
        unaff_x27 = unaff_x23[0xe];
        unaff_x25 = puVar3 + -0xa0;
        func_0x000108834320(0x108833e08);
        func_0x000108834264(unaff_x23 + 9);
        func_0x000108833ec0();
        func_0x000108834114();
        if (unaff_x27 == 0) {
          func_0x000108834300();
          if (extraout_x8_02 != 0) {
            do {
              func_0x000108833e94();
            } while (extraout_w10_00 != 0);
          }
          func_0x000108833f4c();
          func_0x00010883426c();
          func_0x000108833fb0();
        }
        func_0x000108834074();
        unaff_x21 = plVar5;
      }
      func_0x000107c2814c(plVar4 + 3);
      param_2 = unaff_x20;
      func_0x000104be3970();
      func_0x000108833e48(*(undefined8 *)(puVar3 + -0x68));
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
      plVar4 = param_2;
      if ((int)param_3 == 0) {
        func_0x000108833f34();
      }
      else {
        func_0x000108833fb0();
      }
      pcVar6 = FUN_108832f14;
      func_0x00010883412c();
      puVar1 = puVar3 + -0xb0;
      puVar2 = puVar3;
    }
    return plVar4;
  }
  return param_2;
}



/* Entry: 108832e00; end: 108832f13;  */

long * FUN_108832e00(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x000108833eb0();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_110a78ed8;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      func_0x000107c28150();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x000108834320(0x108833e08);
      func_0x000108834264(unaff_x23 + 0x48);
      func_0x000108833ec0();
      func_0x000108834114();
      if (unaff_x27 == 0) {
        func_0x000108834300();
        if (extraout_x8_00 != 0) {
          do {
            func_0x000108833e94();
          } while (extraout_w10 != 0);
        }
        func_0x000108833f4c();
        func_0x00010883426c();
        func_0x000108833fb0();
      }
      func_0x000108834074();
      unaff_x21 = plVar1;
    }
    func_0x000107c2814c(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x000104be3970();
    func_0x000108833e48(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x000108833f34();
    }
    else {
      func_0x000108833fb0();
    }
    unaff_x30 = FUN_108832f14;
    func_0x00010883412c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 108832f14; end: 108832f17;  */

long * FUN_108832f14(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x000108833eb0();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_110a78ed8;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      func_0x000107c28150();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x000108834320(0x108833e08);
      func_0x000108834264(unaff_x23 + 0x48);
      func_0x000108833ec0();
      func_0x000108834114();
      if (unaff_x27 == 0) {
        func_0x000108834300();
        if (extraout_x8_00 != 0) {
          do {
            func_0x000108833e94();
          } while (extraout_w10 != 0);
        }
        func_0x000108833f4c();
        func_0x00010883426c();
        func_0x000108833fb0();
      }
      func_0x000108834074();
      unaff_x21 = plVar1;
    }
    func_0x000107c2814c(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x000104be3970();
    func_0x000108833e48(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x000108833f34();
    }
    else {
      func_0x000108833fb0();
    }
    unaff_x30 = FUN_108832f14;
    func_0x00010883412c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 108832f18; end: 108832f2b;  */

void FUN_108832f18(void)

{
  FUN_108832e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108832f2c; end: 10883301f;  */

void FUN_108832f2c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_108;
  undefined8 uStack_d8;
  undefined8 uStack_48;
  
  func_0x000108833eb0();
  func_0x000108834020();
  if (extraout_x9 != 0) {
    func_0x000108833ff8();
    func_0x000107c28150();
    func_0x000108834314();
    func_0x0001088340fc();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x000108834264();
    func_0x000108833e88(&PTR_DAT_110a797d0);
    func_0x000108833f58();
    if (lVar1 == 0) {
      func_0x000108833fe8();
      if (extraout_x8 != 0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10 != 0);
      }
      func_0x000108833f4c();
      func_0x00010883426c();
      func_0x000108833fb0();
    }
    func_0x000108834074();
  }
  func_0x000108833e48(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108833fb0();
  func_0x000108834074();
  func_0x000108833f34();
  func_0x000108833eb0();
  func_0x000108834020();
  if (extraout_x9_00 != 0) {
    func_0x000108833ff8();
    func_0x000107c28150();
    func_0x000108834314();
    func_0x0001088340fc();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x000108834084(0x108833e34);
    func_0x000108834218();
    func_0x000108833e88(uStack_108);
    func_0x000108833f58();
    if (lVar1 == 0) {
      func_0x000108833fe8();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10_00 != 0);
      }
      func_0x000108833f4c();
      (*extraout_x8_01)();
      func_0x0001088340b8();
    }
    func_0x000108834074();
  }
  func_0x000108833e48(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001088340b8();
    func_0x000108834074();
    func_0x000108833f34();
    return;
  }
  return;
}



/* Entry: 108833020; end: 1088330f7;  */

void FUN_108833020(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  func_0x000108833eb0();
  func_0x000108834020();
  if (extraout_x9 != 0) {
    func_0x000108833ff8();
    func_0x000107c28150();
    func_0x000108834314();
    func_0x0001088340fc();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x000108834084(0x108833e34);
    func_0x000108834218();
    func_0x000108833e88(uStack_78);
    func_0x000108833f58();
    if (lVar1 == 0) {
      func_0x000108833fe8();
      if (extraout_x8 != 0) {
        do {
          func_0x000108833e94();
        } while (extraout_w10 != 0);
      }
      func_0x000108833f4c();
      (*extraout_x8_00)();
      func_0x0001088340b8();
    }
    func_0x000108834074();
  }
  func_0x000108833e48(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001088340b8();
    func_0x000108834074();
    func_0x000108833f34();
    return;
  }
  return;
}



/* Entry: 1088330f8; end: 1088330fb;  */

void FUN_1088330f8(void)

{
  return;
}



/* Entry: 1088330fc; end: 10883318b;  */

void FUN_1088330fc(undefined8 *param_1)

{
  func_0x00010883418c(*param_1);
  func_0x0001086efe58();
  func_0x00010883416c();
  func_0x000108834030();
  func_0x000108833edc();
  return;
}



/* Entry: 10883318c; end: 1088331fb;  */

void FUN_10883318c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_78 [72];
  
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010883418c(*param_1);
  func_0x0001086efe58();
  func_0x00010883416c();
  func_0x000108834030();
  uVar1 = 0x12;
  if (lVar2 != 0) {
    uVar1 = 0x13;
  }
  func_0x0001086efe8c(auStack_78,2,uVar1);
  func_0x000108833edc();
  return;
}



/* Entry: 1088331fc; end: 10883336b;  */

void FUN_1088331fc(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001086efe58(param_1,8);
  *param_1 = &PTR_DAT_110a79028;
  uVar1 = 0xc;
  if (param_2 == 0) {
    uVar1 = 0x28;
  }
  lVar2 = param_1[8];
  if (lVar2 != 3) {
    param_1[8] = lVar2 + 1;
    *(undefined1 *)((long)param_1 + lVar2 * 0x10 + 0xc) = 0;
    param_1[lVar2 * 2 + 2] = uVar1;
    if ((*(byte *)(param_1 + lVar2 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar2 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 10883336c; end: 10883336f;  */

void FUN_10883336c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a79060;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108833370; end: 108833383;  */

void FUN_108833370(void)

{
  func_0x0001088333a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108833384; end: 1088333b3;  */

void FUN_108833384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108833eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


