/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1d0924; end: 10b1d09bb;  */

long * FUN_10b1d0924(void)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  long *aplStack_30 [2];
  
  func_0x00010b1ebb5c(auStack_48);
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010b1ec8a4(aplStack_30);
  FUN_10b1d072c();
  FUN_10b127f28(&uStack_58);
  func_0x00010b1eb9bc();
  if (aplStack_30[0] == (long *)0x0) {
    aplStack_30[0] = (long *)0x0;
  }
  else {
    (**(code **)(*aplStack_30[0] + 0x90))();
  }
  func_0x00010b125864(aplStack_30);
  return aplStack_30[0];
}



/* Entry: 10b1d09bc; end: 10b1d0a0f;  */

void FUN_10b1d09bc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  func_0x00010b1ebb5c(auStack_40);
  func_0x00010b1ec238(uStack_30);
  FUN_10b1d0a10();
  FUN_10b1d0a30();
  func_0x00010b1eb9c4();
  return;
}



/* Entry: 10b1d0a10; end: 10b1d0a2f;  */

long FUN_10b1d0a10(long param_1)

{
  func_0x00010b1eb568();
  FUN_10b1e9738();
  return param_1 + 0x18;
}



/* Entry: 10b1d0a30; end: 10b1d0a87;  */

void FUN_10b1d0a30(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b1ebd50();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1eb524();
  func_0x00010b125864();
  return;
}



/* Entry: 10b1d0a88; end: 10b1d0acf;  */

long FUN_10b1d0a88(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_10b1dcab0(auStack_30);
  FUN_10b124eb8(auStack_30);
  func_0x00010b1ec7ac();
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x68) & 1) != 0) {
    return lVar2 + 0x40;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,lVar2 + 0x40);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1dcaa4);
  (*pcVar1)();
}



/* Entry: 10b1d0ad0; end: 10b1d0b43;  */

undefined8 FUN_10b1d0ad0(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  uVar1 = param_2[1] <= *param_2;
  uVar2 = *param_2 == param_2[1];
  if ((bool)uVar2) {
    uVar3 = 1;
  }
  else {
    func_0x00010b1eb648();
    FUN_10b1371b0();
    func_0x00010b1eb784();
    if (!(bool)uVar1 || (bool)uVar2) {
      func_0x000100063660();
      return unaff_x19;
    }
    func_0x00010b1edbbc();
    uStack_28 = param_1;
    func_0x00010b1ecbf8();
    func_0x00010b1eb5b4(auStack_30,0xd4,auStack_48);
    func_0x00010b1eb750();
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b1d0b44; end: 10b1d0bab;  */

void FUN_10b1d0b44(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(char *)(param_1 + 0x58) == '\x01') && (bVar1 = *(char *)(param_1 + 0x630) == '\x01', bVar1)
     ) {
    *(undefined1 *)(param_1 + 0x5f0) = 1;
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  func_0x00010b1ee12c();
  if (((bVar1) && (*(char *)(param_1 + 0x560) == '\x01')) && (*(char *)(param_1 + 0x558) == '\x01'))
  {
    *(undefined1 *)(param_1 + 0x550) = 1;
  }
  return;
}



/* Entry: 10b1d0bac; end: 10b1d0c67;  */

void FUN_10b1d0bac(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_e8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  puVar2 = &uStack_b0;
  func_0x00010b1eae28();
  func_0x00010b1ee12c(param_1 + 0x58);
  if (((bool)in_ZR) && (func_0x00010b1ee330(), (bool)in_ZR)) {
    *(undefined1 *)(unaff_x19 + 0x5f0) = 0;
  }
  func_0x00010b1ecd44();
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010b1ebe1c();
  func_0x00010b1ebbe0();
  func_0x00010b1eafb4(&PTR_FUN_110cc4a20);
  func_0x00010b1ec7b4();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eafb4(&PTR_FUN_110cc4a20);
  func_0x00010b1ec7b4();
  func_0x00010b1eb590();
  puVar3 = auStack_170;
  func_0x00010b1eaf00();
  func_0x00010b1ee12c((undefined1 *)((long)puVar2 + 0x58));
  uVar1 = 0;
  if ((bool)in_ZR) {
    uVar1 = *(char *)((long)puVar2 + 0x630) == '\x01';
    if ((bool)uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170);
      puVar2 = &uStack_158;
      func_0x00010b1ee038();
      uStack_148 = 0x10b1ea1bc;
      ppuStack_140 = &PTR_FUN_110cc4a38;
      func_0x00010b1ec004();
      func_0x00010b1edfec();
      puVar2[4] = uStack_150;
      puVar2[3] = uStack_158;
      uStack_158 = 0;
      uStack_150 = 0;
      puStack_138 = puVar2;
      func_0x00010b1ed83c();
      func_0x00010b1ecb00();
      func_0x00010b1eb08c(ppuStack_140);
      FUN_10b1d0d58();
      puVar2 = (undefined8 *)puVar3;
    }
  }
  func_0x00010b1eaddc(uStack_e8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb08c(ppuStack_140);
  FUN_10b1d0d58(auStack_170);
  func_0x00010b1eb590();
  func_0x00010b1ebd60();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (puVar2);
  return;
}



/* Entry: 10b1d0c68; end: 10b1d0d57;  */

void FUN_10b1d0c68(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_38;
  
  puVar3 = auStack_c0;
  func_0x00010b1eaf00();
  func_0x00010b1ee12c(param_1 + 0x58);
  uVar1 = 0;
  if ((bool)in_ZR) {
    uVar1 = param_1[0x630] == '\x01';
    if ((bool)uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c0);
      puVar2 = &uStack_a8;
      func_0x00010b1ee038();
      uStack_98 = 0x10b1ea1bc;
      ppuStack_90 = &PTR_FUN_110cc4a38;
      func_0x00010b1ec004();
      func_0x00010b1edfec();
      puVar2[4] = uStack_a0;
      puVar2[3] = uStack_a8;
      uStack_a8 = 0;
      uStack_a0 = 0;
      puStack_88 = puVar2;
      func_0x00010b1ed83c();
      func_0x00010b1ecb00();
      func_0x00010b1eb08c(ppuStack_90);
      FUN_10b1d0d58();
      param_1 = puVar3;
    }
  }
  func_0x00010b1eaddc(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb08c(ppuStack_90);
  FUN_10b1d0d58(auStack_c0);
  func_0x00010b1eb590();
  func_0x00010b1ebd60();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1d0d58; end: 10b1d0d77;  */

void FUN_10b1d0d58(void)

{
  func_0x00010b1ebd60();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1d0d78; end: 10b1d0db3;  */

void FUN_10b1d0d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010b1eda8c();
  FUN_10b1ddd5c(uStack_28,param_2);
  func_0x00010b1ec680();
  return;
}



/* Entry: 10b1d0db4; end: 10b1d0dcf;  */

void FUN_10b1d0db4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b1eb580();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  return;
}



/* Entry: 10b1d0dd0; end: 10b1d1507;  */

void FUN_10b1d0dd0(long *param_1,long param_2,undefined8 *param_3,uint param_4,undefined4 param_5,
                  undefined8 param_6,ulong param_7,ulong param_8)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong extraout_x8_00;
  long *plVar14;
  long extraout_x8_01;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  bool bVar19;
  long lVar20;
  long unaff_x30;
  undefined8 uVar21;
  undefined8 in_stack_00000050;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  ulong uStack_3c8;
  long lStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  long lStack_3b0;
  ushort uStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  byte bStack_388;
  undefined7 uStack_387;
  undefined8 uStack_380;
  long alStack_378 [10];
  long lStack_328;
  undefined8 *puStack_320;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  char cStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long alStack_250 [10];
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [80];
  ulong auStack_160 [9];
  byte bStack_118;
  ulong uStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ushort uStack_d0;
  undefined6 uStack_ce;
  byte bStack_c8;
  long **pplStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 uStack_60;
  byte bStack_38;
  char cStack_30;
  int iStack_20;
  
  func_0x00010b1ec024();
  uStack_3e8 = CONCAT44(param_5,(undefined4)uStack_3e8);
  plVar5 = param_1;
  func_0x00010b1eae84();
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  bVar19 = false;
  lVar20 = -1;
  do {
    uStack_3b8 = 0;
    uStack_3a8 = uStack_3a8 & 0xff00;
    plVar12 = (long *)0x23;
    func_0x00010bccbc98(alStack_378,param_2 + 0x80,&UNK_10f7385e4,0x23);
    lVar16 = *(long *)(alStack_378[0] + 8);
    puStack_320 = *(undefined8 **)(alStack_378[0] + 0x10);
    lStack_328 = lVar16;
    if (puStack_320 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eaf98();
        lVar16 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    plVar10 = (long *)0x1;
    FUN_10b1fbacc(auStack_318,*(undefined8 *)(lVar16 + 0x10),lVar20,1);
    uStack_1f8 = uStack_1f8 & 0xffffffffffffff00;
    uStack_1b8 = 0;
    if (cStack_2c8 != '\0') {
      uStack_1f0 = uStack_300;
      uStack_1f8 = uStack_308;
      uStack_1e8 = uStack_2f8;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_1d8 = uStack_2e8;
      uStack_1e0 = uStack_2f0;
      uStack_1d0 = uStack_2e0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_1c0 = uStack_2d0;
      uStack_1c8 = uStack_2d8;
      uStack_1b8 = 1;
      func_0x00010b1de180(&uStack_308);
    }
    uStack_200 = uStack_310;
    uStack_310 = 0;
    func_0x00010b1de0dc(auStack_1b0,&uStack_200);
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    func_0x00010b1de0dc(alStack_250,&uStack_2a0);
    plStack_2b8 = (long *)0x0;
    plStack_2b0 = (long *)0x0;
    plStack_2c0 = (long *)0x0;
    FUN_10b1de378(&uStack_110,auStack_1b0);
    plVar9 = alStack_250;
    FUN_10b1de378(auStack_160);
    pplStack_c0 = &plStack_2c0;
    uStack_b8 = 0;
    while ((((bStack_c8 & 1) != 0 || ((bStack_118 & 1) != 0)) && (uStack_110 != auStack_160[0]))) {
      if ((bStack_c8 & 1) == 0) {
        uVar18 = *(undefined8 *)(uStack_110 + 8);
        func_0x00010b1eb9a4(auStack_b0);
        func_0x00010b1ee27c();
        func_0x00010b1eb224();
        plVar10 = alStack_98;
        func_0x00010b1eb99c(uVar18);
        func_0x00010b1ebf08();
        func_0x00010b1ebf10();
      }
      plVar2 = plStack_2b8;
      plVar15 = plStack_2c0;
      if (plStack_2b8 < plStack_2b0) {
        plStack_2b8[2] = (long)plStack_f8;
        plStack_2b8[1] = (long)plStack_100;
        *plStack_2b8 = (long)plStack_108;
        plStack_100 = (long *)0x0;
        plStack_f8 = (long *)0x0;
        plStack_108 = (long *)0x0;
        plStack_2b8[4] = lStack_e8;
        plStack_2b8[3] = uStack_f0;
        plStack_2b8[5] = lStack_e0;
        lStack_e8 = 0;
        lStack_e0 = 0;
        uStack_f0 = 0;
        plStack_2b8[7] = CONCAT62(uStack_ce,uStack_d0);
        plStack_2b8[6] = lStack_d8;
        plVar15 = plStack_2b8 + 8;
      }
      else {
        lVar20 = (long)plStack_2b8 - (long)plStack_2c0;
        lVar16 = lVar20 >> 6;
        if (lVar16 + 1U >> 0x3a != 0) {
          FUN_10b1de1fc();
          goto LAB_10b1d14a0;
        }
        func_0x00010b1ebaa0((long)plStack_2b0 - (long)plStack_2c0);
        uVar8 = extraout_x9;
        if (0x7fffffffffffffbf < extraout_x8_00) {
          uVar8 = 0x3ffffffffffffff;
        }
        if (uVar8 == 0) {
          lVar6 = 0;
        }
        else {
          if (uVar8 >> 0x3a != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1d14a0;
          }
          lVar6 = uVar8 << 6;
          __Znwm();
        }
        puVar7 = (undefined8 *)(lVar6 + lVar20);
        puVar7[1] = plStack_100;
        *puVar7 = plStack_108;
        puVar7[2] = plStack_f8;
        plStack_108 = (long *)0x0;
        plStack_100 = (long *)0x0;
        puVar7[4] = lStack_e8;
        puVar7[3] = uStack_f0;
        puVar7[5] = lStack_e0;
        plStack_f8 = (long *)0x0;
        uStack_f0 = 0;
        lStack_e8 = 0;
        lStack_e0 = 0;
        plVar17 = puVar7 + lVar16 * -8;
        puVar7[7] = CONCAT62(uStack_ce,uStack_d0);
        puVar7[6] = lStack_d8;
        plVar14 = plVar17;
        plVar11 = plVar15;
        while (plVar11 != plVar2) {
          func_0x00010b1eb2fc(plVar14);
          uVar21 = *(undefined8 *)(extraout_x9_00 + 0x20);
          uVar18 = *(undefined8 *)(extraout_x9_00 + 0x18);
          *(undefined8 *)(extraout_x8_01 + 0x28) = *(undefined8 *)(extraout_x9_00 + 0x28);
          *(undefined8 *)(extraout_x8_01 + 0x20) = uVar21;
          *(undefined8 *)(extraout_x8_01 + 0x18) = uVar18;
          *(undefined8 *)(extraout_x9_00 + 0x20) = 0;
          *(undefined8 *)(extraout_x9_00 + 0x28) = 0;
          *(undefined8 *)(extraout_x9_00 + 0x18) = 0;
          uVar18 = *(undefined8 *)(extraout_x9_00 + 0x30);
          *(undefined8 *)(extraout_x8_01 + 0x38) = *(undefined8 *)(extraout_x9_00 + 0x38);
          *(undefined8 *)(extraout_x8_01 + 0x30) = uVar18;
          plVar14 = (long *)(extraout_x8_01 + 0x40);
          plVar11 = (long *)(extraout_x9_00 + 0x40);
        }
        for (; plVar15 != plVar2; plVar15 = plVar15 + 8) {
          func_0x00010b1de1dc(plVar15);
        }
        plStack_2b0 = (long *)(lVar6 + uVar8 * 0x40);
        plVar15 = puVar7 + 8;
        bVar1 = plStack_2c0 != (long *)0x0;
        plStack_2c0 = plVar17;
        if (bVar1) {
          plStack_2b8 = plVar15;
          __ZdlPv();
        }
      }
      plStack_2b8 = plVar15;
      FUN_10b1de208(&uStack_110);
    }
    uStack_b8 = 1;
    FUN_10b1de30c(&pplStack_c0);
    func_0x00010b1ebc00(auStack_160);
    FUN_10b1de3ec(&plStack_108);
    func_0x00010b1ebc00(alStack_250);
    func_0x00010b1ebc00(&uStack_2a0);
    func_0x00010b1ebc00(auStack_1b0);
    func_0x00010b1ebc00(&uStack_200);
    plStack_398 = plStack_2b8;
    plStack_3a0 = plStack_2c0;
    plStack_390 = plStack_2b0;
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)0x0;
    plStack_2b0 = (long *)0x0;
    bStack_388 = 1;
    FUN_10b1de40c(&plStack_2c0);
    FUN_10b1de430(auStack_318);
    FUN_10b1b7824(&lStack_328);
    func_0x00010bccbe4c(alStack_378);
    func_0x00010bccbdb4(alStack_378);
    func_0x00010b1ecd94();
    uVar4 = bStack_388 == 1;
    plVar15 = (long *)(ulong)param_4;
    if ((bool)uVar4) {
      plStack_70 = plStack_398;
      plStack_78 = plStack_3a0;
      plStack_68 = plStack_390;
      func_0x00010b1ee548();
      uStack_60 = 1;
    }
    iStack_20 = 0;
    func_0x00010b1ed09c();
    func_0x00010b1ecbec();
    if (iStack_20 == 0) {
      plStack_3e0 = (long *)((ulong)plStack_3e0._1_7_ << 8);
      uStack_3c8 = uStack_3c8 & 0xffffffffffffff00;
      func_0x00010b1ecd88();
      if ((bool)uVar4) {
        plStack_3d8 = plStack_70;
        plStack_3e0 = plStack_78;
        plStack_3d0 = plStack_68;
        plStack_70 = (long *)0x0;
        plStack_68 = (long *)0x0;
        plStack_78 = (long *)0x0;
        uVar4 = 1;
        goto LAB_10b1d11e0;
      }
    }
    else {
      if (iStack_20 != 1) {
        func_0x00010563ab98();
LAB_10b1d14a0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1d14a4);
        (*pcVar3)();
      }
      uVar4 = 0;
      plStack_3e0 = (long *)((ulong)plStack_3e0._1_7_ << 8);
LAB_10b1d11e0:
      uStack_3c8 = CONCAT71(uStack_3c8._1_7_,uVar4);
    }
    func_0x00010b1ed09c();
    func_0x00010b1ec3f0();
    FUN_10b1de4a4();
    func_0x00010b1ecf0c();
    plVar2 = plStack_3d8;
    iVar13 = (int)param_8;
    uVar4 = (char)uStack_3c8 == '\x01';
    if ((!(bool)uVar4) || (uVar4 = true, plVar10 = plStack_3e0, plStack_3e0 == plStack_3d8)) {
      func_0x00010b1ed188();
      if ((bVar19 & (*(byte *)(param_3[1] + 8) ^ 0xff)) != 0) {
        FUN_10b1d0dd0(&lStack_80,param_2,param_3,plVar15,0);
        FUN_10b1d16b8(param_1,((long)plStack_78 - lStack_80) / 0x48 + (param_1[1] - *param_1) / 0x48
                     );
        plVar9 = plStack_78;
        plVar10 = param_1;
        FUN_10b1de4e8(lStack_80,plStack_78,param_1);
        func_0x00010b128754(&lStack_80);
        plVar12 = plVar15;
      }
LAB_10b1d141c:
      func_0x00010b1eadc4();
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      if ((int)plVar9 != 0) {
        func_0x00010b1ebbe8();
        func_0x00010b128754(param_1);
      }
      func_0x00010b1eb598();
      func_0x00010b1ecc8c(FUN_10b1d1508);
      puStack_320 = &stack0x00000050;
      func_0x00010b1ecb5c();
      func_0x00010b1eb674(&plStack_398,plVar9,plVar10,plVar12,&section_100000100);
      uVar8 = CONCAT71(uStack_387,bStack_388);
      if (((uVar8 == 0) || (*(char *)(uVar8 + 0x40) != '\x01')) ||
         (*(char *)(uVar8 + 0x130) != '\x01')) {
        uVar18 = 0;
      }
      else {
        if (iVar13 == 0) {
LAB_10b1d15e0:
          uVar4 = (undefined1)uVar8;
          FUN_10b1c7b9c();
          plStack_398 = (long *)0x0;
          plStack_390 = (long *)((ulong)plStack_390 & 0xffffffffffffff00);
          uStack_380 = 0;
          alStack_378[0] = 0;
          func_0x00010b1ee4b8(&uStack_3e8);
          func_0x00010b1ebe44();
          func_0x00010b1eb910();
          if ((char)plStack_3a0 != '\x01') {
            func_0x00010b1ee004();
            func_0x00010b1ee0b0();
            func_0x00010b1ec928();
            return;
          }
          uStack_3a8 = CONCAT11(uStack_3a8._1_1_,uVar4);
          plStack_108 = plStack_3e0;
          uStack_110 = uStack_3e8;
          plStack_100 = plStack_3d8;
          uStack_3e8 = 0;
          plStack_3e0 = (long *)0x0;
          uStack_f0 = uStack_3c8;
          plStack_f8 = plStack_3d0;
          lStack_e8 = lStack_3c0;
          plStack_3d8 = (long *)0x0;
          plStack_3d0 = (long *)0x0;
          uStack_3c8 = 0;
          lStack_3c0 = 0;
          lStack_e0 = CONCAT71(uStack_3b7,uStack_3b8);
          lStack_d8 = lStack_3b0;
          uStack_d0 = uStack_3a8;
          func_0x00010b1ec940();
          pplStack_c0 = (long **)((ulong)pplStack_c0 & 0xffffffffffffff00);
          func_0x00010b1ee004();
          goto LAB_10b1d1590;
        }
        if ((*(byte *)(uVar8 + 0x164) & 1) == 0) {
          lVar20 = *(long *)(uVar8 + 0x48);
          lVar16 = *(long *)(uVar8 + 0x50);
          while( true ) {
            if (lVar20 == lVar16) {
              uVar8 = (ulong)bStack_388;
              goto LAB_10b1d15e0;
            }
            FUN_10b2029a0();
            FUN_10b1231f8();
            if (((param_7 & 1) != 0) &&
               (0 < (int)*(uint *)(uVar8 + 0x50) &&
                unaff_x30 < (long)((ulong)*(uint *)(uVar8 + 0x50) * 1000000))) break;
            lVar20 = lVar20 + 0x88;
          }
        }
        uVar18 = 1;
      }
      func_0x00010b1ec928(uVar18);
      pplStack_c0 = (long **)CONCAT71(pplStack_c0._1_7_,extraout_w8);
LAB_10b1d1590:
      func_0x00010b1ee0b0();
      return;
    }
    plVar11 = plStack_3e0;
    if ((char)plStack_3d8[-1] == '\x01') {
      lVar20 = plStack_3d8[-2];
    }
    else {
      lVar20 = 0;
    }
    for (; plVar11 != plVar2; plVar11 = plVar11 + 8) {
      if ((char)plVar11[7] == '\x01') {
        unaff_x30 = plVar11[6] * -1000;
      }
      else {
        unaff_x30 = 0;
      }
      param_7 = 1;
      plVar12 = plVar11 + 3;
      unaff_x30 = unaff_x30 + (long)plVar5;
      param_8 = uStack_3e8 >> 0x20;
      plVar10 = plVar11;
      FUN_10b1d1508(&lStack_80,param_2,plVar11,plVar12,plVar15);
      uVar4 = cStack_30 == '\0' && bVar19 == false;
      bVar19 = cStack_30 != '\0' || bVar19 != false;
      if ((bStack_38 & 1) != 0) {
        plVar9 = &lStack_80;
        FUN_10b1d83e8(param_1);
        if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
          puVar7 = param_3;
          (*(code *)*param_3)();
          iVar13 = (int)param_8;
          if (((ulong)puVar7 & 1) != 0) {
            func_0x00010b1edb8c();
            func_0x00010b1ed188();
            goto LAB_10b1d141c;
          }
        }
      }
      func_0x00010b1edb8c();
    }
    func_0x00010b1ed188();
  } while( true );
}



/* Entry: 10b1d1508; end: 10b1d16b7;  */

void FUN_10b1d1508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7,int param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 extraout_w8;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined2 in_stack_00000068;
  char in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  func_0x00010b1ecc8c();
  func_0x00010b1ecb5c();
  func_0x00010b1eb674(&stack0x00000078,param_2,param_3,param_4,&section_100000100);
  if (((in_stack_00000088 == 0) || (*(char *)(in_stack_00000088 + 0x40) != '\x01')) ||
     (*(char *)(in_stack_00000088 + 0x130) != '\x01')) {
    uVar4 = 0;
LAB_10b1d1588:
    func_0x00010b1ec928(uVar4);
    *(undefined1 *)(unaff_x19 + 10) = extraout_w8;
  }
  else {
    if (param_8 != 0) {
      if ((*(byte *)(in_stack_00000088 + 0x164) & 1) != 0) {
LAB_10b1d157c:
        uVar4 = 1;
        goto LAB_10b1d1588;
      }
      lVar1 = *(long *)(in_stack_00000088 + 0x50);
      lVar2 = in_stack_00000088;
      for (lVar3 = *(long *)(in_stack_00000088 + 0x48); lVar3 != lVar1; lVar3 = lVar3 + 0x88) {
        FUN_10b2029a0();
        FUN_10b1231f8();
        if (((param_7 & 1) != 0) &&
           (0 < (int)*(uint *)(lVar2 + 0x50) &&
            param_6 < (long)((ulong)*(uint *)(lVar2 + 0x50) * 1000000))) goto LAB_10b1d157c;
      }
    }
    lVar3 = in_stack_00000088;
    FUN_10b1c7b9c();
    in_stack_00000078 = 0;
    in_stack_00000080 = 0;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    func_0x00010b1ee4b8(&stack0x00000028);
    func_0x00010b1ebe44();
    func_0x00010b1eb910();
    if (in_stack_00000070 != '\x01') {
      func_0x00010b1ee004();
      func_0x00010b1ee0b0();
      func_0x00010b1ec928();
      *(undefined1 *)(unaff_x19 + 10) = 0;
      return;
    }
    in_stack_00000068 = CONCAT11(in_stack_00000068._1_1_,(char)lVar3);
    unaff_x19[1] = in_stack_00000030;
    *unaff_x19 = in_stack_00000028;
    unaff_x19[2] = in_stack_00000038;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    unaff_x19[4] = in_stack_00000048;
    unaff_x19[3] = in_stack_00000040;
    unaff_x19[5] = in_stack_00000050;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    unaff_x19[7] = in_stack_00000060;
    unaff_x19[6] = in_stack_00000058;
    *(undefined2 *)(unaff_x19 + 8) = in_stack_00000068;
    func_0x00010b1ec940();
    *(undefined1 *)(unaff_x19 + 10) = 0;
    func_0x00010b1ee004();
  }
  func_0x00010b1ee0b0();
  return;
}



/* Entry: 10b1d16b8; end: 10b1d1743;  */

void FUN_10b1d16b8(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x48) < param_2) {
    if (0x38e38e38e38e38e < param_2) {
      FUN_10b128580();
      func_0x00010b1eb668();
      func_0x00010b1d86c8();
      func_0x00010b1eb590();
      if ((char)param_1[0xb] == '\x01') {
        FUN_10b1d34ac();
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      return;
    }
    FUN_10b1d85bc(auStack_48,param_2,(param_1[1] - *param_1) / 0x48);
    func_0x00010b1eb918();
    FUN_10b1d8564();
    func_0x00010b1d86c8(auStack_48);
  }
  return;
}



/* Entry: 10b1d1744; end: 10b1d1767;  */

void FUN_10b1d1744(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b1d34ac();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 10b1d1768; end: 10b1d1853;  */

void FUN_10b1d1768(void)

{
  undefined4 in_w3;
  undefined1 auStack_c0 [40];
  long lStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x00010b1eb63c();
  func_0x00010b1ed980(&uStack_68);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uStack_40 = uStack_58;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_38 = in_w3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  func_0x00010b1ec518();
  func_0x00010b1ebdbc(auStack_90);
  FUN_10b1baed4();
  if ((lStack_80 != 0) && (FUN_10b1bf250(lStack_80,&uStack_50), lStack_80 != 0)) {
    *(undefined1 *)(lStack_80 + 0x20) = 0;
    func_0x00010b1ebdbc(&lStack_98);
    FUN_10b1be290();
    if (lStack_98 != 0) {
      func_0x00010b1ebcb4();
      FUN_10b1be194(auStack_90,auStack_c0);
      func_0x00010b1eb910();
      __ZNSt3__117__assoc_sub_state4waitEv(lStack_98);
    }
    func_0x00010b1ec230();
  }
  func_0x00010b1ebe64();
  func_0x00010b1ece94();
  return;
}



/* Entry: 10b1d1854; end: 10b1d1a8f;  */

void FUN_10b1d1854(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 in_x5;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w11;
  undefined4 unaff_w22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [80];
  undefined4 uStack_160;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  puVar3 = &uStack_1e0;
  func_0x00010b1ee250();
  lVar1 = param_1;
  func_0x00010b1eaf40();
  uStack_68 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  FUN_10b1e3630(&uStack_100,param_1 + 8);
  lStack_f0 = param_1;
  uStack_e0 = in_x5;
  lStack_d8 = lVar1;
  FUN_10b1e3630(&uStack_1e0,param_1 + 8);
  lStack_1d0 = param_1;
  func_0x00010b1ec9d4(auStack_1c8);
  FUN_10b17d5c4(auStack_1b0);
  puVar2 = auStack_158;
  uStack_160 = unaff_w22;
  func_0x00010b1ec1fc();
  lStack_138 = lStack_f8;
  uStack_140 = uStack_100;
  if (lStack_f8 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  lStack_130 = lStack_f0;
  lStack_118 = lStack_d8;
  uStack_120 = uStack_e0;
  pcStack_c8 = FUN_10b1ea1ec;
  ppuStack_c0 = &PTR_FUN_110cc4a50;
  uStack_110 = in_x5;
  func_0x00010b1ecea4();
  puVar2[1] = uStack_1d8;
  *puVar2 = uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  puVar2[2] = lStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 3,auStack_1c8);
  FUN_10b17d5c4(puVar2 + 6,auStack_1b0);
  *(undefined4 *)(puVar2 + 0x10) = uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar2 + 0x11,auStack_158);
  puVar2[0x15] = lStack_138;
  puVar2[0x14] = uStack_140;
  if (lStack_138 != 0) {
    do {
      func_0x00010b1eaf98();
      puVar3 = (undefined8 *)extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uVar6 = *(undefined8 *)((long)puVar3 + 0xb0);
  uVar5 = *(undefined8 *)((long)puVar3 + 200);
  uVar4 = *(undefined8 *)((long)puVar3 + 0xc0);
  puVar2[0x17] = *(undefined8 *)((long)puVar3 + 0xb8);
  puVar2[0x16] = uVar6;
  puVar2[0x19] = uVar5;
  puVar2[0x18] = uVar4;
  puVar2[0x1a] = uStack_110;
  puStack_b8 = puVar2;
  func_0x00010b1ed83c();
  func_0x00010b1ecb00();
  func_0x00010b1eafb4(ppuStack_c0);
  FUN_10b1d1a90(&uStack_1e0);
  func_0x00010b1edbf4();
  func_0x00010b1eaddc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1eafb4(ppuStack_c0);
    FUN_10b1d1a90(&uStack_1e0);
    func_0x00010b1edbf4();
    do {
      func_0x00010b1eb590();
    } while( true );
  }
  return;
}



/* Entry: 10b1d1a90; end: 10b1d1ac7;  */

/* WARNING: Possible PIC construction at 0x00010b1d1aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b1d1aa8) */
/* WARNING: Removing unreachable block (ram,0x00010b1ec820) */

long FUN_10b1d1a90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa0;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1d1ac8; end: 10b1d1bab;  */

code ** FUN_10b1d1ac8(code **param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code **ppcVar4;
  undefined4 uVar5;
  code *extraout_x8;
  undefined8 extraout_x9;
  int extraout_w11;
  int unaff_w20;
  code **ppcVar6;
  undefined4 uStack_208;
  undefined1 uStack_204;
  undefined1 auStack_200 [24];
  byte bStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  code *pcStack_188;
  undefined **ppuStack_180;
  code *pcStack_178;
  code *pcStack_170;
  undefined8 uStack_128;
  undefined1 auStack_78 [16];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  func_0x00010b1ed62c();
  pcStack_68 = FUN_10b1e9e0c;
  ppuStack_60 = &PTR_FUN_110cc49f0;
  puStack_58 = auStack_78;
  func_0x00010b1ec284();
  ppcVar6 = &pcStack_68;
  func_0x00010b1ebe34();
  func_0x00010b1eafb4(ppuStack_60);
  func_0x00010b1ec6fc();
  do {
    func_0x00010b1ed360();
    do {
      func_0x00010b1ebffc();
      func_0x00010b1ebcc4();
      func_0x00010b1eaddc(uStack_38);
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x00010b1eb5a0();
      FUN_10b1dd074();
      func_0x00010b1ebcc4();
      do {
        func_0x00010b1eb590();
        func_0x00010b1eb648();
      } while (unaff_w20 == 0);
      func_0x00010b1eafb4(ppuStack_60);
      in_ZR = unaff_w20 == 2;
      if (!(bool)in_ZR) {
        func_0x00010b1eb8dc();
        func_0x00010b1eaf30(param_1);
        uVar5 = (undefined4)param_3;
        ppcVar4 = (code **)param_1[0xd9];
        pcStack_178 = *ppcVar6;
        pcStack_170 = ppcVar6[1];
        if (pcStack_170 != (code *)0x0) {
          pcVar1 = pcStack_170 + 8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
              *(long *)pcVar1 = *(long *)pcVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_188 = FUN_10b1ea428;
        ppuStack_180 = &PTR_DAT_110cc4a98;
        uStack_128 = extraout_x9;
        if (pcStack_170 != (code *)0x0) {
          do {
            func_0x00010b1eaf98();
            uVar5 = (undefined4)param_3;
          } while (extraout_w11 != 0);
        }
        func_0x00010b1eb9d4();
        (*extraout_x8)();
        func_0x00010b1edd5c(ppuStack_180);
        func_0x00010b1ed338();
        func_0x00010b1eaddc(uStack_128);
        if ((bool)in_ZR) {
          return ppcVar4;
        }
        ___stack_chk_fail();
        ppcVar6 = ppcVar4;
        func_0x00010b1eba88(&pcStack_188);
        func_0x00010b1ed338();
        func_0x00010b1eb590();
        func_0x00010b1ebbb0();
        __ZNSt3__16chrono12system_clock3nowEv();
        lStack_1e0 = (long)ppcVar6 / 1000;
        uStack_1d8 = 1;
        func_0x00010b1ec6ac(auStack_200);
        uStack_204 = 1;
        ppcVar6 = ppcVar4 + 0x10;
        uStack_208 = uVar5;
        FUN_10b1d1d44(ppcVar6,FUN_10b1fca94,0,&lStack_1e0,auStack_200,&uStack_208);
        func_0x00010b1ecff0();
        if (((ulong)ppcVar6 & 1) == 0) {
          ppcVar6 = (code **)0x0;
        }
        else {
          func_0x00010b1ed9e0(auStack_200);
          ppcVar6 = (code **)(ulong)bStack_1e8;
          if (bStack_1e8 == 1) {
            FUN_10b1cd178(ppcVar4,auStack_200,5);
          }
          FUN_10b1d48fc(auStack_200);
        }
        return ppcVar6;
      }
      func_0x00010b1ebea4();
      ppcVar6 = param_1;
      func_0x00010b1ed340();
      ___cxa_end_catch();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      func_0x00010b1ed330();
      func_0x00010b1ec868();
    } while ((bool)in_ZR);
  } while( true );
}



/* Entry: 10b1d1bac; end: 10b1d1c6b;  */

ulong FUN_10b1d1bac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined4 uVar5;
  code *extraout_x8;
  undefined8 extraout_x9;
  int extraout_w11;
  ulong uVar6;
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined1 auStack_100 [24];
  byte bStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_28;
  
  func_0x00010b1eaf30(param_1);
  uVar5 = (undefined4)param_3;
  uVar4 = *(ulong *)(param_1 + 0x6c8);
  uStack_78 = *param_2;
  lStack_70 = param_2[1];
  if (lStack_70 != 0) {
    plVar1 = (long *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_88 = FUN_10b1ea428;
  ppuStack_80 = &PTR_DAT_110cc4a98;
  uStack_28 = extraout_x9;
  if (lStack_70 != 0) {
    do {
      func_0x00010b1eaf98();
      uVar5 = (undefined4)param_3;
    } while (extraout_w11 != 0);
  }
  func_0x00010b1eb9d4();
  (*extraout_x8)();
  func_0x00010b1edd5c(ppuStack_80);
  func_0x00010b1ed338();
  func_0x00010b1eaddc(uStack_28);
  if ((bool)in_ZR) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar6 = uVar4;
  func_0x00010b1eba88(&pcStack_88);
  func_0x00010b1ed338();
  func_0x00010b1eb590();
  func_0x00010b1ebbb0();
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_e0 = (long)uVar6 / 1000;
  uStack_d8 = 1;
  func_0x00010b1ec6ac(auStack_100);
  uStack_104 = 1;
  uVar6 = uVar4 + 0x80;
  uStack_108 = uVar5;
  FUN_10b1d1d44(uVar6,FUN_10b1fca94,0,&lStack_e0,auStack_100,&uStack_108);
  func_0x00010b1ecff0();
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00010b1ed9e0(auStack_100);
    uVar6 = (ulong)bStack_e8;
    if (bStack_e8 == 1) {
      FUN_10b1cd178(uVar4,auStack_100,5);
    }
    FUN_10b1d48fc(auStack_100);
  }
  return uVar6;
}



/* Entry: 10b1d1c6c; end: 10b1d1d43;  */

char FUN_10b1d1c6c(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long unaff_x19;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 auStack_60 [24];
  char cStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x00010b1ebbb0();
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_40 = param_1 / 1000;
  uStack_38 = 1;
  func_0x00010b1ec6ac(auStack_60);
  uStack_64 = 1;
  uVar1 = unaff_x19 + 0x80;
  uStack_68 = param_3;
  FUN_10b1d1d44(uVar1,FUN_10b1fca94,0,&lStack_40,auStack_60,&uStack_68);
  func_0x00010b1ecff0();
  if ((uVar1 & 1) == 0) {
    cStack_48 = '\0';
  }
  else {
    func_0x00010b1ed9e0(auStack_60);
    if (cStack_48 == '\x01') {
      FUN_10b1cd178();
    }
    FUN_10b1d48fc(auStack_60);
  }
  return cStack_48;
}



/* Entry: 10b1d1d44; end: 10b1d1d6b;  */

byte * FUN_10b1d1d44(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar1;
  long extraout_x10;
  ulong extraout_x11;
  int extraout_w12;
  uint uVar2;
  int unaff_w20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = &uStack_98;
  pcStack_68 = FUN_10b1ea78c;
  ppuStack_60 = &PTR_FUN_110cc4ab0;
  ppuStack_58 = &puStack_88;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  func_0x00010bccc554(param_1,&pcStack_68,&UNK_10f731917,0);
  func_0x00010b1eafb4(ppuStack_60);
  func_0x00010b1ec6fc();
  do {
    func_0x00010b1ed360();
    uVar2 = (uint)*param_1;
    while( true ) {
      func_0x00010b1ebffc();
      func_0x00010b1ebcc4();
      func_0x00010b1eaddc(uStack_38);
      if ((bool)in_ZR) {
        return (byte *)(ulong)(uVar2 & 1);
      }
      ___stack_chk_fail();
      func_0x00010b1eb5a0();
      FUN_10b1dd074();
      func_0x00010b1ebcc4();
      do {
        func_0x00010b1eb590();
        func_0x00010b1eb648();
      } while (unaff_w20 == 0);
      func_0x00010b1eafb4(ppuStack_60);
      in_ZR = unaff_w20 == 2;
      if (!(bool)in_ZR) {
        func_0x00010b1eb8dc();
        func_0x00010b1eb388();
        if (extraout_x10 != 0) {
          do {
            func_0x00010b1eb0ac();
          } while (extraout_w12 != 0);
        }
        func_0x00010b1eb02c();
        pcVar1 = extraout_x9;
        if ((extraout_x11 & 1) != 0) {
          func_0x00010b1ec364();
          pcVar1 = extraout_x9_00;
        }
        (*pcVar1)();
        func_0x00010b1eb728();
        return param_1;
      }
      func_0x00010b1ebea4();
      func_0x00010b1ed340();
      ___cxa_end_catch();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      func_0x00010b1ed330();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      uVar2 = 0;
    }
  } while( true );
}



/* Entry: 10b1d1d6c; end: 10b1d20ff;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010b1d1e7c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10b1d1d6c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *****ppppplVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  long extraout_x8_04;
  long *****ppppplVar8;
  long *****extraout_x9;
  long *****extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *****ppppplVar9;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  long extraout_x11;
  long *****extraout_x11_00;
  long *****extraout_x11_01;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *****extraout_x13;
  long *****extraout_x13_00;
  undefined8 *unaff_x19;
  long *****unaff_x20;
  long *****unaff_x21;
  int *piVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  int *piStack_90;
  int *piStack_88;
  long ****pppplStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x00010b1ebe28();
  FUN_10b1bac30();
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0x3f800000;
  ppppplVar9 = unaff_x20;
  FUN_10b1ce34c(&piStack_90);
  plVar1 = unaff_x19 + 2;
  piVar11 = piStack_90;
  do {
    uVar5 = (long)piVar11 - (long)piStack_88 < 0;
    if (piVar11 == piStack_88) {
      FUN_10b1d95a0(&piStack_90);
      return;
    }
    iVar2 = *piVar11;
    ppppplVar12 = (long *****)(long)iVar2;
    ppppplVar13 = (long *****)unaff_x19[1];
    ppppplVar6 = ppppplVar9;
    if (ppppplVar13 != (long *****)0x0) {
      if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
        unaff_x21 = (long *****)((long)ppppplVar13 - 1U & (ulong)ppppplVar12);
        uVar5 = false;
      }
      else {
        uVar5 = (long)ppppplVar13 - (long)ppppplVar12 < 0;
        unaff_x21 = ppppplVar12;
        if (ppppplVar13 <= ppppplVar12) {
          uVar3 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar12 / (ulong)ppppplVar13;
          }
          unaff_x21 = (long *****)((long)ppppplVar12 - uVar3 * (long)ppppplVar13);
        }
      }
      func_0x00010b1ee190();
      ppppplVar6 = ppppplVar9;
      if (unaff_x20 != (long *****)0x0) {
        do {
          while( true ) {
            unaff_x20 = (long *****)*unaff_x20;
            if (unaff_x20 == (long *****)0x0) goto LAB_10b1d1e54;
            ppppplVar8 = (long *****)unaff_x20[1];
            if (ppppplVar8 != ppppplVar12) break;
            uVar5 = *(int *)(unaff_x20 + 2) - iVar2 < 0;
            if (*(int *)(unaff_x20 + 2) == iVar2) goto LAB_10b1d2068;
          }
          if (((ulong)ppppplVar13 & extraout_x8) == 0) {
            ppppplVar8 = (long *****)((ulong)ppppplVar8 & extraout_x8);
          }
          else if (ppppplVar13 <= ppppplVar8) {
            uVar3 = 0;
            if (ppppplVar13 != (long *****)0x0) {
              uVar3 = (ulong)ppppplVar8 / (ulong)ppppplVar13;
            }
            ppppplVar8 = (long *****)((long)ppppplVar8 - uVar3 * (long)ppppplVar13);
          }
          uVar5 = (long)ppppplVar8 - (long)unaff_x21 < 0;
        } while (ppppplVar8 == unaff_x21);
      }
    }
LAB_10b1d1e54:
    func_0x00010b1ec004();
    uStack_68 = 1;
    pppplStack_78 = (long ****)ppppplVar6;
    plStack_70 = plVar1;
    *ppppplVar6 = (long ****)0x0;
    ppppplVar6[1] = (long ****)ppppplVar12;
    *(int *)(ppppplVar6 + 2) = iVar2;
    ppppplVar6[3] = (long ****)0x0;
    ppppplVar6[4] = (long ****)0x0;
    ppppplVar9 = ppppplVar6;
    func_0x00010b1eb0f0();
    if ((ppppplVar13 == (long *****)0x0) ||
       (func_0x00010b1ebbbc(param_1,param_2,(float)ppppplVar13), (bool)uVar5)) {
      uVar5 = ppppplVar13 == (long *****)0x3;
      func_0x00010b1eaeec((long)ppppplVar13 << 1);
      func_0x00010b1ee224();
      if ((bool)uVar5) {
        unaff_x21 = (long *****)0x2;
      }
      else if (((ulong)unaff_x21 & extraout_x8_00) != 0) {
        func_0x00010b1ecfa4();
        ppppplVar13 = (long *****)unaff_x19[1];
        unaff_x21 = ppppplVar9;
      }
      if (ppppplVar13 < unaff_x21) {
LAB_10b1d1ecc:
        if ((ulong)unaff_x21 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1d20cc);
          (*pcVar4)();
        }
        __Znwm((long)unaff_x21 << 3);
        func_0x00010b1ea7f4();
        func_0x00010b1ec590();
        ppppplVar9 = extraout_x9;
        while (uVar5 = unaff_x21 == ppppplVar9, !(bool)uVar5) {
          func_0x00010b1ebda4();
          ppppplVar9 = extraout_x9_00;
        }
        ppppplVar13 = unaff_x21;
        if (*plVar1 != 0) {
          func_0x00010b1eb8ac();
          func_0x00010b1ec544();
          *(long **)(extraout_x8_01 + extraout_x11 * 8) = plVar1;
          plVar10 = extraout_x10;
          while (*plVar10 != 0) {
            func_0x00010b1ee368();
            lVar7 = extraout_x8_02;
            plVar10 = extraout_x12;
            ppppplVar9 = extraout_x11_00;
            if ((bool)uVar5) {
              ppppplVar8 = (long *****)((ulong)extraout_x13 & extraout_x9_01);
            }
            else {
              ppppplVar8 = extraout_x13;
              if (unaff_x21 <= extraout_x13) {
                func_0x00010b1ee20c();
                lVar7 = extraout_x8_03;
                ppppplVar9 = extraout_x11_01;
                plVar10 = extraout_x12_00;
                ppppplVar8 = extraout_x13_00;
              }
            }
            uVar5 = ppppplVar8 == ppppplVar9;
            if (!(bool)uVar5) {
              if (*(long *)(lVar7 + (long)ppppplVar8 * 8) == 0) {
                func_0x00010b1ebf54();
                plVar10 = extraout_x12_01;
              }
              else {
                func_0x00010b1ead88();
                plVar10 = extraout_x10_00;
              }
            }
          }
        }
      }
      else if (unaff_x21 < ppppplVar13) {
        func_0x00010b1eafd8();
        if ((ppppplVar13 < (long *****)0x3) || (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) != 0))
        {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *****)0x1 < ppppplVar9) {
          ppppplVar9 = (long *****)(1L << (-LZCOUNT((long)ppppplVar9 + -1) & 0x3fU));
        }
        if (unaff_x21 <= ppppplVar9) {
          unaff_x21 = ppppplVar9;
        }
        if (unaff_x21 < ppppplVar13) {
          if (unaff_x21 != (long *****)0x0) goto LAB_10b1d1ecc;
          func_0x00010b1ed31c();
          func_0x00010b1ea7f4();
          unaff_x19[1] = 0;
          ppppplVar13 = (long *****)0x0;
        }
        else {
          ppppplVar13 = (long *****)unaff_x19[1];
        }
      }
      if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
        unaff_x21 = (long *****)((long)ppppplVar13 - 1U & (ulong)ppppplVar12);
      }
      else {
        unaff_x21 = ppppplVar12;
        if (ppppplVar13 <= ppppplVar12) {
          uVar3 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar12 / (ulong)ppppplVar13;
          }
          unaff_x21 = (long *****)((long)ppppplVar12 - uVar3 * (long)ppppplVar13);
        }
      }
    }
    func_0x00010b1ee578();
    if (extraout_x9_02 == 0) {
      *ppppplVar6 = (long ****)*plVar1;
      *plVar1 = (long)ppppplVar6;
      *(long **)(extraout_x8_04 + (long)unaff_x21 * 8) = plVar1;
      if (*ppppplVar6 != (long ****)0x0) {
        ppppplVar9 = (long *****)(*ppppplVar6)[1];
        if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
          ppppplVar9 = (long *****)((ulong)ppppplVar9 & (long)ppppplVar13 - 1U);
        }
        else if (ppppplVar13 <= ppppplVar9) {
          uVar3 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar9 / (ulong)ppppplVar13;
          }
          ppppplVar9 = (long *****)((long)ppppplVar9 - uVar3 * (long)ppppplVar13);
        }
        *(long ******)(extraout_x8_04 + (long)ppppplVar9 * 8) = ppppplVar6;
      }
    }
    else {
      func_0x00010b1eb5cc();
    }
    pppplStack_78 = (long ****)0x0;
    unaff_x19[3] = unaff_x19[3] + 1;
    ppppplVar9 = &pppplStack_78;
    FUN_10b1ea80c();
    unaff_x20 = ppppplVar6;
LAB_10b1d2068:
    if ((char)piVar11[2] == '\x01') {
      unaff_x20[3] = (long ****)((long)unaff_x20[3] + *(long *)(piVar11 + 4));
    }
    else {
      unaff_x20[4] = (long ****)((long)unaff_x20[4] + *(long *)(piVar11 + 4));
    }
    piVar11 = piVar11 + 8;
  } while( true );
}



/* Entry: 10b1d2100; end: 10b1d2ae7;  */

void FUN_10b1d2100(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  long **pplVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined8 uVar18;
  undefined1 auStack_3d8 [16];
  long lStack_3c8;
  code *pcStack_398;
  undefined **ppuStack_390;
  undefined8 **ppuStack_388;
  char cStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  long **pplStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_320 [40];
  code *pcStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 **ppuStack_2e8;
  char cStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 **ppuStack_2b0;
  char cStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  long lStack_278;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined1 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  char cStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [24];
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined1 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_150;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined8 **ppuStack_110;
  char cStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined8 **ppuStack_38;
  
  func_0x00010b1ec024();
  uVar18 = param_3;
  lVar5 = param_4;
  func_0x00010b1eb424();
  func_0x00010b1eae84();
  func_0x000107c278d0(uVar18,lVar5);
  if ((int)uVar18 != 0) {
    func_0x00010b1ecb24();
    func_0x000107c278b8(&plStack_100);
    FUN_10b199864(&pcStack_120,&UNK_10f731cfd);
    uVar18 = uStack_f0;
    plStack_a8 = plStack_f8;
    plStack_b0 = plStack_100;
    uStack_f0 = 0;
    plStack_100 = (long *)0x0;
    plStack_f8 = (long *)0x0;
    func_0x00010b1ec38c(uVar18);
    uVar3 = cStack_108 == '\x01';
    if ((bool)uVar3) {
      ppuStack_88 = ppuStack_118;
      pcStack_90 = pcStack_120;
      ppuStack_80 = ppuStack_110;
      ppuStack_110 = (code ***)0x0;
      pcStack_120 = (code *)0x0;
      ppuStack_118 = (undefined **)0x0;
      func_0x00010b1ee508();
    }
    func_0x00010b1eb3b0();
    func_0x00010b1ec138();
    func_0x000107c279a4(&pcStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_100);
    goto LAB_10b1d29ec;
  }
  func_0x00010b1eb6f8(auStack_148);
  func_0x00010b1eb674();
  plStack_1a0 = (long *)((ulong)plStack_1a0 & 0xffffffffffffff00);
  bStack_150 = 0;
  uVar12 = uStack_138;
  func_0x00010b1ebe54();
  uVar11 = uStack_138;
  if ((uVar12 & 1) == 0) {
    cVar1 = *(char *)(param_4 + 0x30);
    if (cVar1 == '\x01') {
      func_0x00010b1edc70(auStack_1b8);
      FUN_10b2026a0(&plStack_b0,uVar11,auStack_1b8);
    }
    else {
      FUN_10b202630(&plStack_b0,uStack_138);
    }
    uVar4 = bStack_150 == 1;
    if ((bool)uVar4) {
      FUN_10b1559a4(&plStack_1a0,&plStack_b0);
    }
    else {
      plStack_198 = plStack_a8;
      plStack_1a0 = plStack_b0;
      uStack_190 = uStack_a0;
      plStack_a8 = (long *)0x0;
      uStack_a0 = 0;
      plStack_b0 = (long *)0x0;
      uStack_188 = uStack_188 & 0xffffffffffffff00;
      uVar4 = (char)ppuStack_80 == '\x01';
      if ((bool)uVar4) {
        pcStack_180 = pcStack_90;
        uStack_188 = uStack_98;
        ppuStack_178 = ppuStack_88;
        pcStack_90 = (code *)0x0;
        ppuStack_88 = (undefined **)0x0;
        uStack_98 = 0;
      }
      uStack_160 = uStack_70;
      uStack_168 = uStack_78;
      uStack_158 = uStack_68;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      bStack_150 = 1;
      uStack_170 = uVar4;
    }
    func_0x00010b121e00(&plStack_b0);
    if (cVar1 != '\0') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    }
LAB_10b1d2360:
    uVar3 = uVar4;
    if ((bStack_150 & 1) != 0) {
      uVar11 = uStack_138;
      func_0x000107c278d0(uStack_138,param_4);
      uVar3 = uVar4;
      if (((uVar11 & 1) == 0) && (func_0x00010b1ec3bc(uStack_138), uVar3 = 0, (bool)uVar4)) {
        uVar3 = *(long *)(extraout_x8 + 0x38) == 1;
        if (0 < *(long *)(extraout_x8 + 0x38)) {
          pcStack_90 = (code *)0x0;
          plStack_a8 = (long *)0x0;
          plStack_b0 = (long *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          func_0x00010b1edd24();
          func_0x00010b1d3e60(&plStack_b0);
          func_0x00010b1ed284(&pplStack_360);
          lVar5 = lStack_350;
          func_0x00010b1ec238();
          plVar6 = (long *)(lVar5 + 0x108);
          FUN_10b1e4440(plVar6,param_3);
          if (plVar6 == (long *)0x0) {
            uVar18 = *(undefined8 *)(unaff_x21 + 0x238);
            func_0x00010b1ebd14();
            func_0x00010b1eb884(&plStack_b0);
            func_0x00010b1eb654(&pcStack_48,&plStack_b0);
            func_0x00010b1eb040(uVar18);
            func_0x00010b1ec10c();
            func_0x00010b1eb5ac(&plStack_b0);
          }
          else {
            uVar12 = *(ulong *)(lVar5 + 0x110);
            lVar10 = *plVar6;
            uVar11 = plVar6[1];
            uVar14 = uVar12 - 1;
            if ((uVar12 & uVar14) == 0) {
              uVar11 = uVar14 & uVar11;
            }
            else if (uVar12 <= uVar11) {
              uVar16 = 0;
              if (uVar12 != 0) {
                uVar16 = uVar11 / uVar12;
              }
              uVar11 = uVar11 - uVar16 * uVar12;
            }
            lVar15 = *(long *)(lVar5 + 0x108);
            plVar2 = *(long **)(lVar15 + uVar11 * 8);
            do {
              plVar13 = plVar2;
              plVar2 = (long *)*plVar13;
            } while ((long *)*plVar13 != plVar6);
            plStack_a8 = (long *)(lVar5 + 0x118);
            uVar3 = true;
            if (plVar13 == plStack_a8) {
LAB_10b1d2488:
              if (lVar10 == 0) {
LAB_10b1d24bc:
                *(undefined8 *)(lVar15 + uVar11 * 8) = 0;
                lVar10 = *plVar6;
                goto LAB_10b1d24c4;
              }
              uVar16 = *(ulong *)(lVar10 + 8);
              if ((uVar12 & uVar14) == 0) {
                uVar17 = uVar16 & uVar14;
              }
              else {
                uVar17 = uVar16;
                if (uVar12 <= uVar16) {
                  uVar17 = 0;
                  if (uVar12 != 0) {
                    uVar17 = uVar16 / uVar12;
                  }
                  uVar17 = uVar16 - uVar17 * uVar12;
                }
              }
              uVar3 = uVar17 == uVar11;
              if (!(bool)uVar3) goto LAB_10b1d24bc;
LAB_10b1d24cc:
              if ((uVar12 & uVar14) == 0) {
                uVar16 = uVar16 & uVar14;
              }
              else if (uVar12 <= uVar16) {
                uVar14 = 0;
                if (uVar12 != 0) {
                  uVar14 = uVar16 / uVar12;
                }
                uVar16 = uVar16 - uVar14 * uVar12;
              }
              uVar3 = uVar16 == uVar11;
              if (!(bool)uVar3) {
                *(long **)(lVar15 + uVar16 * 8) = plVar13;
                lVar10 = *plVar6;
              }
            }
            else {
              uVar16 = plVar13[1];
              if ((uVar12 & uVar14) == 0) {
                uVar16 = uVar16 & uVar14;
              }
              else if (uVar12 <= uVar16) {
                uVar17 = 0;
                if (uVar12 != 0) {
                  uVar17 = uVar16 / uVar12;
                }
                uVar16 = uVar16 - uVar17 * uVar12;
              }
              uVar3 = uVar16 == uVar11;
              if (!(bool)uVar3) goto LAB_10b1d2488;
LAB_10b1d24c4:
              if (lVar10 != 0) {
                uVar16 = *(ulong *)(lVar10 + 8);
                goto LAB_10b1d24cc;
              }
            }
            *plVar13 = lVar10;
            *plVar6 = 0;
            *(long *)(lVar5 + 0x120) = *(long *)(lVar5 + 0x120) + -1;
            uStack_a0 = 1;
            plStack_b0 = plVar6;
            FUN_10b1d5e60(&plStack_b0);
          }
          func_0x00010b1eceec();
          func_0x00010b1eb6f8(&plStack_b0);
          func_0x00010b1eb674();
          func_0x00010b1edd24();
          func_0x00010b1d3e60(&plStack_b0);
          if ((uStack_138 == 0) || (func_0x00010b1ebe54(), (uStack_138 & 1) == 0)) {
            func_0x00010b1ecb24();
            func_0x000107c278b8(&plStack_208);
            func_0x000107c278b8(&pcStack_228,&UNK_10f731d43);
            uStack_a0 = uStack_1f8;
            uStack_210 = 1;
            plStack_a8 = plStack_200;
            plStack_b0 = plStack_208;
            plStack_208 = (long *)0x0;
            plStack_200 = (long *)0x0;
            uStack_1f8 = 0;
            uStack_98 = 2;
            ppuStack_88 = ppuStack_220;
            pcStack_90 = pcStack_228;
            ppuStack_80 = ppuStack_218;
            pcStack_228 = (code *)0x0;
            ppuStack_220 = (undefined **)0x0;
            ppuStack_218 = (code ***)0x0;
            uStack_78 = CONCAT71(uStack_78._1_7_,1);
            func_0x00010b1eb3b0();
            func_0x00010b1ec138();
            func_0x000107c279a4(&pcStack_228);
            pplVar8 = &plStack_208;
            goto LAB_10b1d26e4;
          }
          if ((bStack_150 & 1) != 0) {
            func_0x00010b121e00(&plStack_1a0);
            bStack_150 = 0;
          }
        }
      }
    }
    if ((bStack_150 & 1) == 0) {
      func_0x00010b1eb6f8(auStack_288);
      func_0x00010b1eb674();
      if (lStack_278 == 0) {
        func_0x00010b1ecb24();
        func_0x000107c278b8(&plStack_2a0);
        func_0x0001073a471c(&pcStack_2c0,&UNK_10f731dc3);
        uStack_a0 = uStack_290;
        plStack_a8 = plStack_298;
        plStack_b0 = plStack_2a0;
        plStack_298 = (long *)0x0;
        uStack_290 = 0;
        plStack_2a0 = (long *)0x0;
        uStack_98 = 1;
        pcStack_90 = (code *)((ulong)pcStack_90 & 0xffffffffffffff00);
        uVar11 = uStack_78 >> 8;
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        uVar3 = cStack_2a8 == '\x01';
        if ((bool)uVar3) {
          ppuStack_88 = ppuStack_2b8;
          pcStack_90 = pcStack_2c0;
          ppuStack_80 = ppuStack_2b0;
          ppuStack_2b8 = (undefined **)0x0;
          ppuStack_2b0 = (code ***)0x0;
          pcStack_2c0 = (code *)0x0;
          uStack_78 = CONCAT71((int7)uVar11,1);
        }
        func_0x00010b1eb3b0();
        func_0x00010b1ec138();
        func_0x00010b1edbfc();
        pplVar8 = &plStack_2a0;
LAB_10b1d2768:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar8);
      }
      else {
        func_0x00010b1ebe54();
        if ((int)lStack_278 != 0) {
          func_0x00010b1ecb24();
          func_0x000107c278b8(&plStack_2d8);
          func_0x0001068868b0(&pcStack_2f8,&UNK_10f731dd4);
          uVar18 = uStack_2c8;
          plStack_a8 = plStack_2d0;
          plStack_b0 = plStack_2d8;
          plStack_2d0 = (long *)0x0;
          uStack_2c8 = 0;
          plStack_2d8 = (long *)0x0;
          func_0x00010b1ec38c(uVar18);
          uVar3 = cStack_2e0 == '\x01';
          if ((bool)uVar3) {
            ppuStack_88 = ppuStack_2f0;
            pcStack_90 = pcStack_2f8;
            ppuStack_80 = ppuStack_2e8;
            ppuStack_2f0 = (undefined **)0x0;
            ppuStack_2e8 = (code ***)0x0;
            pcStack_2f8 = (code *)0x0;
            func_0x00010b1ee508();
          }
          func_0x00010b1eb3b0();
          func_0x00010b1ec138();
          func_0x000107c279a4(&pcStack_2f8);
          pplVar8 = &plStack_2d8;
          goto LAB_10b1d2768;
        }
        func_0x000107c27f70(&pplStack_360);
        func_0x000107c27f70(&uStack_340,param_3);
        func_0x00010b1ebfc4(auStack_320);
        pcStack_d0 = FUN_10b1fcf9c;
        uStack_c8 = 0;
        uStack_e8 = 0;
        uStack_d8 = 0;
        ppcStack_c0 = &pcStack_d0;
        pcStack_48 = FUN_10b1ea864;
        ppuStack_40 = &PTR_FUN_110cc4ac8;
        ppuStack_38 = &ppcStack_c0;
        ppuStack_b8 = &pplStack_360;
        func_0x00010b1ec284();
        func_0x00010b1ebe34(unaff_x21 + 0x80,&pcStack_48);
        func_0x00010b1ebb00(ppuStack_40);
        plStack_b0 = (long *)CONCAT71(plStack_b0._1_7_,1);
        uStack_58 = 0;
        pplVar8 = &plStack_b0;
        func_0x00010b1dd05c();
        plVar6 = *pplVar8;
        func_0x00010b1eda6c();
        func_0x00010b1ed91c();
        if (((ulong)plVar6 & 1) == 0) {
          func_0x00010b1ecb24();
          func_0x000107c278b8(&plStack_378);
          func_0x0001073a471c(&pcStack_398,&UNK_10f731df2);
          uVar18 = uStack_368;
          plStack_a8 = plStack_370;
          plStack_b0 = plStack_378;
          plStack_370 = (long *)0x0;
          uStack_368 = 0;
          plStack_378 = (long *)0x0;
          func_0x00010b1ec38c(uVar18);
          uVar3 = cStack_380 == '\x01';
          if ((bool)uVar3) {
            ppuStack_88 = ppuStack_390;
            pcStack_90 = pcStack_398;
            ppuStack_80 = ppuStack_388;
            func_0x00010b1ed800();
            func_0x00010b1ee508();
          }
          func_0x00010b1eb3b0();
          func_0x00010b1ec138();
          func_0x00010b1ed0e0();
          func_0x00010b1ed29c();
        }
        else {
          func_0x00010b1eb6f8();
          FUN_10b1bebec();
          *unaff_x19 = 0;
          unaff_x19[0x40] = 0;
        }
        FUN_10b1de578(&pplStack_360);
      }
      func_0x00010b1d3e60(auStack_288);
    }
    else {
      puVar7 = &uStack_168;
      func_0x000107c278d0(puVar7,param_4 + 0x38);
      if ((int)puVar7 == 0) {
        func_0x00010b1ecb24();
        func_0x000107c278b8(&plStack_240);
        pplStack_360 = &plStack_1a0;
        uStack_358 = 0x10b1ea830;
        uStack_348 = 0x10b1ea830;
        uStack_338 = 0x10b1ea830;
        lStack_350 = param_4;
        uStack_340 = param_3;
        func_0x000107c2793c(&UNK_10f731d6b);
        func_0x000107c3173c(&pcStack_48);
        ppuStack_80 = ppuStack_38;
        ppuStack_88 = ppuStack_40;
        pcStack_90 = pcStack_48;
        uStack_a0 = uStack_230;
        uStack_258 = 0;
        pcStack_48 = (code *)0x0;
        ppuStack_40 = (undefined **)0x0;
        ppuStack_38 = (code ***)0x0;
        uStack_248 = 1;
        plStack_a8 = plStack_238;
        plStack_b0 = plStack_240;
        plStack_240 = (long *)0x0;
        plStack_238 = (long *)0x0;
        uStack_230 = 0;
        uStack_98 = 3;
        uStack_260 = 0;
        uStack_250 = 0;
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        func_0x00010b1eb3b0();
        func_0x00010b1ec138();
        func_0x000107c279a4(&uStack_260);
        func_0x00010b1ed9a8();
        pplVar8 = &plStack_240;
        goto LAB_10b1d26e4;
      }
      *unaff_x19 = 0;
      unaff_x19[0x40] = 0;
    }
  }
  else {
    if ((*(byte *)(uStack_138 + 0x40) & 1) == 0) {
      uVar4 = 1;
      if (*(long *)(uStack_138 + 0x48) == *(long *)(uStack_138 + 0x50)) goto LAB_10b1d2360;
    }
    func_0x00010b1ecb24();
    func_0x000107c278b8(&plStack_1d0);
    func_0x000107273db0(&pcStack_1f0,&UNK_10f731d23);
    uVar18 = uStack_1c0;
    plStack_a8 = plStack_1c8;
    plStack_b0 = plStack_1d0;
    plStack_1c8 = (long *)0x0;
    uStack_1c0 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x00010b1ec38c(uVar18);
    uVar3 = cStack_1d8 == '\x01';
    if ((bool)uVar3) {
      ppuStack_88 = ppuStack_1e8;
      pcStack_90 = pcStack_1f0;
      ppuStack_80 = ppuStack_1e0;
      ppuStack_1e8 = (undefined **)0x0;
      ppuStack_1e0 = (code ***)0x0;
      pcStack_1f0 = (code *)0x0;
      func_0x00010b1ee508();
    }
    func_0x00010b1eb3b0();
    func_0x00010b1ec138();
    func_0x00010b1edbe0();
    pplVar8 = &plStack_1d0;
LAB_10b1d26e4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar8);
  }
  FUN_10b1de5a0(&plStack_1a0);
  func_0x00010b1d3e60(auStack_148);
LAB_10b1d29ec:
  func_0x00010b1eadc4();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eda6c();
  func_0x00010b1ed91c();
  FUN_10b1de578(&pplStack_360);
  func_0x00010b1d3e60(auStack_288);
  FUN_10b1de5a0(&plStack_1a0);
  puVar9 = auStack_148;
  func_0x00010b1d3e60(puVar9);
  func_0x00010b1edf04();
  FUN_10b1bad14(auStack_3d8,puVar9 + 0x360);
  FUN_10b1de5c0(extraout_x8_00,lStack_3c8 + 0x30);
  func_0x00010b1ec680();
  return;
}



/* Entry: 10b1d2ae8; end: 10b1d2b2f;  */

void FUN_10b1d2ae8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [16];
  long lStack_28;
  
  FUN_10b1bad14(auStack_38,param_2 + 0x360);
  FUN_10b1de5c0(param_1,lStack_28 + 0x30);
  func_0x00010b1ec680();
  return;
}



/* Entry: 10b1d2b30; end: 10b1d2b33;  */

undefined8 * FUN_10b1d2b30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3630;
  func_0x000107c27c20(param_1 + 0xdd);
  func_0x000107c27c20(param_1 + 0xdb);
  func_0x000107c27c20(param_1 + 0xd9);
  func_0x00010b1d3234(param_1 + 0xd3);
  FUN_10b1d3254(param_1 + 0xbb);
  FUN_10b1d348c(param_1 + 0xaf);
  func_0x000107c28e38(param_1 + 0xad);
  FUN_10b1d35d0(param_1 + 0xa5);
  func_0x00010b1deaec(param_1 + 0xa2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x9b);
  (**(code **)param_1[0x93])(param_1 + 0x93);
  __ZNSt3__15mutexD1Ev(param_1 + 0x89);
  FUN_10b1d3658(param_1 + 0x6c);
  FUN_10b1d3768(param_1 + 0x61);
  func_0x00010b1d37b8(param_1 + 0x54);
  func_0x00010b0fe8e8(param_1 + 0x49);
  func_0x00010b12487c(param_1 + 0x47);
  FUN_10b1d3984(param_1 + 0x10);
  __ZNSt3__113shared_futureIvED1Ev(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x00010b1deac8(param_1 + 1);
  return param_1;
}



/* Entry: 10b1d2b34; end: 10b1d2b47;  */

void FUN_10b1d2b34(void)

{
  FUN_10b1de630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d2b48; end: 10b1d2ba7;  */

void FUN_10b1d2b48(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b1ec250();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return;
}



/* Entry: 10b1d2ba8; end: 10b1d2bcf;  */

void FUN_10b1d2ba8(long param_1)

{
  func_0x0001052a71ac(param_1 + 0x30);
  func_0x00010b1eca40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1d2bd0; end: 10b1d2bef;  */

void FUN_10b1d2bd0(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_10b1d2ba8();
  }
  return;
}



/* Entry: 10b1d2bf0; end: 10b1d2c6f;  */

void FUN_10b1d2bf0(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010b1ebbb0();
  lVar1 = *(long *)(param_1 + 8);
  lStack_50 = lVar1;
  lStack_48 = lVar1;
  func_0x00010b1ebc7c();
  uStack_58 = 0;
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x88) {
    func_0x00010b1ee4b8();
    FUN_10b1d66ac();
    lVar1 = lStack_48 + 0x88;
    lStack_48 = lVar1;
  }
  func_0x00010b1ebed4();
  FUN_10b1d2d30(auStack_70);
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10b1d2c70; end: 10b1d2ce7;  */

void FUN_10b1d2c70(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b1cf4dc();
    __ZdlPv(*param_1);
    func_0x00010b1ec2c8();
  }
  return;
}



/* Entry: 10b1d2ce8; end: 10b1d2d2f;  */

ulong FUN_10b1d2ce8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong unaff_x19;
  long *unaff_x20;
  
  if (0x1e1e1e1e1e1e1e1 < param_2) {
    FUN_10b1d2de0();
    func_0x00010b1ebd44();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1eb758();
      while (param_1 != unaff_x20) {
        param_1 = param_1 + -0x11;
        FUN_10b1d5ca0();
      }
    }
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x88;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0xf0f0f0f0f0f0ef < uVar1) {
    uVar2 = 0x1e1e1e1e1e1e1e1;
  }
  return uVar2;
}



/* Entry: 10b1d2d30; end: 10b1d2d67;  */

void FUN_10b1d2d30(long param_1)

{
  uint extraout_w8;
  long unaff_x20;
  
  func_0x00010b1ebd44();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0x88;
      FUN_10b1d5ca0();
    }
  }
  return;
}



/* Entry: 10b1d2d68; end: 10b1d2dab;  */

long FUN_10b1d2d68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b1eb5dc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x88) {
    FUN_10b1bd620(param_3,unaff_x21);
    param_3 = param_3 + 0x88;
    unaff_x19 = unaff_x19 + 0x88;
  }
  return unaff_x19;
}



/* Entry: 10b1d2dac; end: 10b1d2ddf;  */

void FUN_10b1d2dac(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    FUN_10b1d5ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1d2de0; end: 10b1d2deb;  */

void FUN_10b1d2de0(ulong param_1)

{
  func_0x00010b1eafa8();
  if (param_1 < 0x1e1e1e1e1e1e1e2) {
    __Znwm(param_1 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010b1d3154();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10b1d2dec; end: 10b1d2e27;  */

void FUN_10b1d2dec(ulong param_1)

{
  if (param_1 < 0x1e1e1e1e1e1e1e2) {
    __Znwm(param_1 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010b1d3154();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10b1d2e28; end: 10b1d2e4b;  */

void FUN_10b1d2e28(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010b1d3154();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10b1d2e4c; end: 10b1d2f57;  */

void FUN_10b1d2e4c(long param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x00010b1ebbb0();
  FUN_10b24e3e8();
  lVar1 = *(long *)(unaff_x21 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(unaff_x21 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(unaff_x21 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x21 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c27994(unaff_x19 + 0x78,unaff_x21 + 0x78);
  lVar1 = *(long *)(unaff_x21 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x21 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = *(long *)(unaff_x21 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x21 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x21 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107c27994(unaff_x19 + 0xb0,unaff_x21 + 0xb0);
  *(undefined1 *)(unaff_x19 + 200) = 1;
  return;
}



/* Entry: 10b1d2f58; end: 10b1d2fcb;  */

void FUN_10b1d2f58(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b1d2fcc; end: 10b1d2fef;  */

void FUN_10b1d2fcc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b1d2ff0();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10b1d2ff0; end: 10b1d3037;  */

void FUN_10b1d2ff0(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1d3038; end: 10b1d3057;  */

void FUN_10b1d3038(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b1d2ff0();
  }
  return;
}



/* Entry: 10b1d3058; end: 10b1d30b3;  */

long FUN_10b1d3058(long param_1,long param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b1ee33c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010b24e968(param_1);
    }
    else {
      FUN_10b24e938(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1d30b4; end: 10b1d30ef;  */

void FUN_10b1d30b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 10b1d30f0; end: 10b1d3193;  */

void FUN_10b1d30f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb63c();
  FUN_10b1b96c0();
  FUN_10b1d30b4(param_1 + 0x58,unaff_x19 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  return;
}



/* Entry: 10b1d3194; end: 10b1d31b3;  */

void FUN_10b1d3194(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010b1d3154();
  }
  return;
}



/* Entry: 10b1d31b4; end: 10b1d320b;  */

void FUN_10b1d31b4(void)

{
  func_0x00010b1eb198();
  func_0x00010b1d31d8();
  return;
}



/* Entry: 10b1d320c; end: 10b1d3227;  */

undefined8 * FUN_10b1d320c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ccaac8;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      func_0x00010b1ee33c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10b24d570(param_1);
    }
    else {
      FUN_10b24d538(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1d3228; end: 10b1d3253;  */

void FUN_10b1d3228(long param_1)

{
  func_0x000105277f8c();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b2509e8();
  }
  return;
}



/* Entry: 10b1d3254; end: 10b1d3283;  */

long FUN_10b1d3254(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b1d3284(param_1 + 0x30);
  }
  return param_1;
}



/* Entry: 10b1d3284; end: 10b1d32cb;  */

long FUN_10b1d3284(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = param_1;
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != 0) {
    func_0x00010b1ed74c();
    FUN_10b1d32cc();
    func_0x00010b1eb70c();
    lVar1 = unaff_x21;
  }
  func_0x00010b1ebc2c();
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1d32cc; end: 10b1d32ef;  */

void FUN_10b1d32cc(long param_1)

{
  FUN_10b1d32f0(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1d32f0; end: 10b1d3333;  */

long * FUN_10b1d32f0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10b1d3334();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10b1d3468();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1d3334; end: 10b1d33ef;  */

void FUN_10b1d3334(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_10b1d33f0();
  lVar3 = param_2;
  func_0x00010b1d3414(param_1);
  do {
    lVar5 = param_2 + -0x1000;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x40;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x80;
        }
        param_1[4] = lVar3;
        return;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
      param_2 = param_2 + 0x20;
      lVar5 = lVar5 + 0x20;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10b1d33f0; end: 10b1d343b;  */

void FUN_10b1d33f0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b1d343c; end: 10b1d3467;  */

long * FUN_10b1d343c(long *param_1)

{
  FUN_10b1d3468();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1d3468; end: 10b1d348b;  */

void FUN_10b1d3468(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b1d348c; end: 10b1d34ab;  */

void FUN_10b1d348c(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b1d34ac();
  }
  return;
}



/* Entry: 10b1d34ac; end: 10b1d351b;  */

long FUN_10b1d34ac(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar2 != 0) {
    func_0x00010b1eb318();
  }
  FUN_10b1d351c(*(undefined8 *)(param_1 + 0x40));
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20) + 0x10;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010b1d354c(lVar3);
      }
      lVar3 = lVar3 + 0x38;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010b1ee0c0(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 10b1d351c; end: 10b1d35cf;  */

void FUN_10b1d351c(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x00010b1eb65c();
    FUN_10b1d351c();
    FUN_10b1d351c(*(undefined8 *)(unaff_x19 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d35d0; end: 10b1d35ef;  */

void FUN_10b1d35d0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1d35f0();
  }
  return;
}



/* Entry: 10b1d35f0; end: 10b1d3613;  */

void FUN_10b1d35f0(void)

{
  func_0x00010b1eb198();
  FUN_10b1d3614();
  return;
}



/* Entry: 10b1d3614; end: 10b1d3657;  */

void FUN_10b1d3614(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x68;
      FUN_10b1d3dd8();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d3658; end: 10b1d36a3;  */

void FUN_10b1d3658(long param_1)

{
  func_0x000107c29c20(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_10b1d36a4(param_1 + 0x88);
  }
  FUN_10b12d6dc(param_1 + 0x70);
  func_0x00010b1de558(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b1d36a4; end: 10b1d3723;  */

long FUN_10b1d36a4(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  while (lVar1 != 0) {
    func_0x00010b1edc78();
    lVar1 = unaff_x20;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 8);
    lVar1 = *plVar3;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    while (plVar3 != (long *)(param_1 + 8)) {
      plVar3 = (long *)plVar3[1];
      FUN_10b1d3724();
    }
  }
  return param_1;
}



/* Entry: 10b1d3724; end: 10b1d3767;  */

void FUN_10b1d3724(void)

{
  func_0x00010b1ebd60();
  func_0x00010b1d3744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d3768; end: 10b1d38f7;  */

void FUN_10b1d3768(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
      func_0x00010b1eb694(*(undefined8 *)(lVar1 + -0x28));
    }
    *(long *)(param_1 + 0x48) = lVar2;
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b1d38f8; end: 10b1d3983;  */

void FUN_10b1d38f8(void)

{
  func_0x00010b1ebd60();
  func_0x00010b1de708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1d3984; end: 10b1d39a3;  */

void FUN_10b1d3984(long param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    func_0x00010bccc224();
  }
  return;
}



/* Entry: 10b1d39a4; end: 10b1d39ab;  */

void FUN_10b1d39a4(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  
  ppuVar7 = &puStack_50;
  *param_1 = &PTR_DAT_110d99f88;
  plVar6 = (long *)param_1[0x14];
  uStack_48 = param_1[0x35];
  puStack_50 = (undefined1 *)param_1[0x34];
  if (param_1[0x35] != 0) {
    plVar1 = (long *)(param_1[0x35] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&puStack_50);
  func_0x00010b5ef3cc();
  if (param_1[0x2c] != 0) {
    func_0x000107c313b8();
    func_0x00010bccc9ac(*(undefined8 *)param_1[0x2c]);
    uVar2 = uStack_48;
    ppuVar5 = (undefined1 **)puStack_50;
    if (-1 < (char)bStack_39) {
      uVar2 = (ulong)bStack_39;
      ppuVar5 = &puStack_50;
    }
    (**(code **)((long)*ppuVar7 + 0x18))(ppuVar7,0,ppuVar5,uVar2,param_1[0x2d]);
    func_0x00010bccc9b8();
  }
  func_0x00010bccc870(param_1 + 0x34);
  func_0x00010563b5e4(param_1 + 0x2c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  func_0x00010bccc638(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x16);
  func_0x000105276418(param_1 + 0x14);
  func_0x00010563d08c(param_1 + 0x13);
  func_0x00010bcc7c14(param_1);
  return;
}



/* Entry: 10b1d39ac; end: 10b1d39bf;  */

void FUN_10b1d39ac(void)

{
  FUN_10b1d3a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d39c0; end: 10b1d39c3;  */

long FUN_10b1d39c0(long param_1)

{
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3740);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    FUN_10b1d3acc(param_1,auStack_28);
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  FUN_10b120e24(param_1 + 0x18);
  FUN_10b120e24();
  return param_1;
}



/* Entry: 10b1d39c4; end: 10b1d39d7;  */

void FUN_10b1d39c4(void)

{
  FUN_10b1d3a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d39d8; end: 10b1d39db;  */

void FUN_10b1d39d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1d39dc; end: 10b1d39ef;  */

void FUN_10b1d39dc(void)

{
  FUN_10b1d3a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d39f0; end: 10b1d3a47;  */

long FUN_10b1d39f0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    func_0x00010b1eb318();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar1 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x000107c350ac();
    if (param_1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b1d3a48; end: 10b1d3a57;  */

void FUN_10b1d3a48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d3a58; end: 10b1d3acb;  */

long FUN_10b1d3a58(long param_1)

{
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3740);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    FUN_10b1d3acc(param_1,auStack_28);
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  FUN_10b120e24(param_1 + 0x18);
  FUN_10b120e24();
  return param_1;
}



/* Entry: 10b1d3acc; end: 10b1d3b97;  */

void FUN_10b1d3acc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b120d0c(auStack_40,param_1 + 8,&uStack_50);
  FUN_10b120d38(alStack_30,auStack_40);
  FUN_10b120e24(auStack_40);
  FUN_10b120e24(&uStack_50);
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x48);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x88,param_2);
  lVar2 = *(long *)(alStack_30[0] + 0x90);
  *(undefined8 *)(alStack_30[0] + 0x90) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
  if (lVar2 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x18);
  }
  else {
    func_0x00010b1ed83c();
    func_0x00010b1ecb00();
    func_0x00010b1ed2a4();
  }
  func_0x00010b1eddc4();
  return;
}



/* Entry: 10b1d3b98; end: 10b1d3bc3;  */

void FUN_10b1d3b98(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b1ec7e8();
  if ((bool)in_ZR) {
    FUN_10b1d3bc4(unaff_x19 + 0x28);
  }
  func_0x00010b1ed474(&PTR_FUN_110cc3740);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    FUN_10b1d3acc();
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  FUN_10b120e24(unaff_x19 + 0x18);
  FUN_10b120e24(unaff_x20);
  return;
}



/* Entry: 10b1d3bc4; end: 10b1d3beb;  */

void FUN_10b1d3bc4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b125908();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b1d3bec; end: 10b1d3c1b;  */

void FUN_10b1d3bec(long param_1)

{
  func_0x00010b1eb648();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b1eda4c(param_1 + 0x18);
  return;
}



/* Entry: 10b1d3c1c; end: 10b1d3c37;  */

void FUN_10b1d3c1c(long param_1)

{
  FUN_10b1d2b48();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 10b1d3c38; end: 10b1d3ca3;  */

undefined8 * FUN_10b1d3c38(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_FUN_110cfcfc8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      FUN_10b523c48(param_1);
    }
    else {
      FUN_10b523c10(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1d3ca4; end: 10b1d3cbf;  */

undefined8 * FUN_10b1d3ca4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  
  *param_1 = &PTR_FUN_110ccb038;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      func_0x00010b1ee33c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10b250c50(param_1);
    }
    else {
      func_0x00010b250c18(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1d3cc0; end: 10b1d3d1b;  */

long FUN_10b1d3cc0(long param_1,long param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b1ee33c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10b250c50(param_1);
    }
    else {
      func_0x00010b250c18(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1d3d1c; end: 10b1d3d53;  */

void FUN_10b1d3d1c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3998)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d3d54; end: 10b1d3d67;  */

void FUN_10b1d3d54(void)

{
  return;
}



/* Entry: 10b1d3d68; end: 10b1d3dd7;  */

undefined8 * FUN_10b1d3d68(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_FUN_110cca930;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      FUN_10b24ce18(param_1);
    }
    else {
      FUN_10b24cde0(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1d3dd8; end: 10b1d3e83;  */

void FUN_10b1d3dd8(long param_1)

{
  func_0x00010b1eca48(*(undefined8 *)(param_1 + 0x40));
  FUN_10b24c744(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1d3e84; end: 10b1d3e9b;  */

ulong FUN_10b1d3e84(ulong param_1)

{
  FUN_10b1d3e9c();
  return param_1 & 0xffffffffff;
}



/* Entry: 10b1d3e9c; end: 10b1d3ecb;  */

void FUN_10b1d3e9c(int param_1)

{
  func_0x00010b1eb67c();
  if (param_1 != 5) {
    func_0x00010b1ebab8();
    func_0x00010b1ec64c();
  }
  return;
}



/* Entry: 10b1d3ecc; end: 10b1d40af;  */

void FUN_10b1d3ecc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_740 [288];
  undefined1 auStack_620 [288];
  undefined8 uStack_500;
  undefined1 auStack_4f8 [272];
  undefined1 uStack_3e8;
  undefined1 auStack_3e0 [288];
  long alStack_2c0 [35];
  byte bStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [272];
  byte bStack_88;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010b1eb648();
  uStack_500 = 0;
  auStack_4f8[0] = 0;
  uStack_3e8 = 0;
  if (*(char *)(param_2 + 0x120) == '\0') {
    uStack_500 = 0;
  }
  else {
    FUN_10b1d412c(auStack_4f8,unaff_x20 + 0x10);
    func_0x00010b1d4148(unaff_x20 + 0x10);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = uStack_500;
  uStack_500 = uVar1;
  FUN_10b1d40b0(auStack_3e0,&uStack_500);
  _bzero(auStack_740,0x120);
  FUN_10b1d40b0(auStack_620,auStack_740);
  func_0x00010b1ec2c8();
  FUN_10b1d462c(&lStack_1a0,auStack_3e0);
  FUN_10b1d462c(alStack_2c0,auStack_620);
  while( true ) {
    if ((((bStack_88 & 1) == 0) && ((bStack_1a8 & 1) == 0)) || (lStack_1a0 == alStack_2c0[0]))
    break;
    if ((bStack_88 & 1) == 0) {
      func_0x00010b1eb9a4(auStack_70);
      func_0x000107c27f54(auStack_58,&UNK_10f2e0451,auStack_70);
      func_0x00010b1eb3c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    }
    FUN_10b1d41d0();
    FUN_10b1d43c0(&lStack_1a0);
  }
  func_0x00010b1d4594(&stack0xffffffffffffff80);
  func_0x00010b1ebe74(alStack_2c0);
  FUN_10b1d46f8(auStack_198);
  func_0x00010b1ebe74(auStack_620);
  func_0x00010b1ebe74(auStack_740);
  func_0x00010b1ebe74(auStack_3e0);
  FUN_10b1d46f8(auStack_4f8);
  return;
}



/* Entry: 10b1d40b0; end: 10b1d40ef;  */

void FUN_10b1d40b0(void)

{
  long unaff_x20;
  
  func_0x00010b1eb548();
  FUN_10b1d40f0();
  func_0x00010b1eb714();
  FUN_10b1d40f0();
  FUN_10b1d46f8(unaff_x20 + 8);
  return;
}



/* Entry: 10b1d40f0; end: 10b1d412b;  */

void FUN_10b1d40f0(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x118) = 0;
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_10b1d412c((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 10b1d412c; end: 10b1d416b;  */

void FUN_10b1d412c(long param_1)

{
  FUN_10b1d5d6c();
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}



/* Entry: 10b1d416c; end: 10b1d41cf;  */

void FUN_10b1d416c(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb398();
  func_0x00010b1eba20();
  _memcpy(unaff_x20 + 0x40,unaff_x19 + 0x40,0x59);
  func_0x0001052b2b60(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
  func_0x0001052b2b60(unaff_x20 + 0xc0,unaff_x19 + 0xc0);
  uVar1 = *(undefined1 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe0) = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined1 *)(unaff_x20 + 0xe8) = uVar1;
  func_0x0001052b2b60(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}


