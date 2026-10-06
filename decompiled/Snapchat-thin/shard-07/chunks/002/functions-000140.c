/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052a0684; end: 1052a06e3;  */

void FUN_1052a0684(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001052a2558();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1052a06e4; end: 1052a06f7;  */

void FUN_1052a06e4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052a06f8; end: 1052a072f;  */

undefined1 * FUN_1052a06f8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_1052a0730();
  return param_1;
}



/* Entry: 1052a0730; end: 1052a0743;  */

void FUN_1052a0730(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1052a0760();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1052a0744; end: 1052a075f;  */

void FUN_1052a0744(long param_1)

{
  FUN_1052a0760();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1052a0760; end: 1052a07a7;  */

long FUN_1052a0760(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x00010028af84(lVar1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 1052a07a8; end: 1052a07c7;  */

void FUN_1052a07a8(void)

{
  func_0x0001052a29cc();
  FUN_1052a07e8();
  return;
}



/* Entry: 1052a07c8; end: 1052a07db;  */

void FUN_1052a07c8(void)

{
  FUN_1052a08a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a07dc; end: 1052a07e7;  */

char * FUN_1052a07dc(void)

{
  return "Bad expected access";
}



/* Entry: 1052a07e8; end: 1052a0813;  */

undefined1 * FUN_1052a07e8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_1052a0814();
  return param_1;
}



/* Entry: 1052a0814; end: 1052a0827;  */

void FUN_1052a0814(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1052a0844();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1052a0828; end: 1052a0843;  */

void FUN_1052a0828(long param_1)

{
  FUN_1052a0844();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1052a0844; end: 1052a089f;  */

void FUN_1052a0844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return;
}



/* Entry: 1052a08a0; end: 1052a08c3;  */

void FUN_1052a08a0(void)

{
  func_0x0001052a29cc();
  FUN_1052a038c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1052a08c4; end: 1052a08eb;  */

undefined8 * FUN_1052a08c4(undefined8 *param_1)

{
  FUN_1052a08ec(*param_1);
  return param_1;
}



/* Entry: 1052a08ec; end: 1052a08f7;  */

void FUN_1052a08ec(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1052a08f8; end: 1052a091f;  */

void FUN_1052a08f8(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001000ff1ac();
  }
  else {
    FUN_1052a038c();
  }
  return;
}



/* Entry: 1052a0920; end: 1052a097b;  */

undefined8 FUN_1052a0920(void)

{
  int iVar1;
  
  if ((bRam00000001130cc398 & 1) == 0) {
    iVar1 = 0x130cc398;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052aefa4();
      func_0x00010b990784(0x1130cc388);
      ___cxa_guard_release(0x1130cc398);
    }
  }
  return 0x1130cc388;
}



/* Entry: 1052a097c; end: 1052a09d7;  */

undefined8 FUN_1052a097c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc3b0 & 1) == 0) {
    iVar1 = 0x130cc3b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052c521c();
      func_0x00010b990784(0x1130cc3a0);
      ___cxa_guard_release(0x1130cc3b0);
    }
  }
  return 0x1130cc3a0;
}



/* Entry: 1052a09d8; end: 1052a0a33;  */

undefined8 FUN_1052a09d8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc3c8 & 1) == 0) {
    iVar1 = 0x130cc3c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052af24c();
      func_0x00010b990784(0x1130cc3b8);
      ___cxa_guard_release(0x1130cc3c8);
    }
  }
  return 0x1130cc3b8;
}



/* Entry: 1052a0a34; end: 1052a0a4b;  */

void FUN_1052a0a34(void)

{
  func_0x000108b8033c();
  return;
}



/* Entry: 1052a0a4c; end: 1052a12f7;  */

void FUN_1052a0a4c(code ****param_1,undefined8 param_2,code ****param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int iVar4;
  code ***pppcVar5;
  code ****ppppcVar6;
  code ****ppppcVar7;
  undefined8 *puVar8;
  code *****pppppcVar9;
  undefined8 extraout_x8;
  code ****extraout_x8_00;
  code ****extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  code *extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
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
  int extraout_w11_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long *plVar10;
  code ***pppcVar11;
  code ***unaff_x22;
  long lVar12;
  int unaff_w28;
  code ***in_register_00005008;
  code ***pppcStack_260;
  code **ppcStack_258;
  code ***pppcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  code ***pppcStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  code *apcStack_218 [3];
  code *apcStack_200 [3];
  code ****appppcStack_1e8 [3];
  code ***pppcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *apcStack_1b8 [3];
  code *pcStack_1a0;
  code ***pppcStack_198;
  code **ppcStack_190;
  code *pcStack_188;
  code ***pppcStack_180;
  code **ppcStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  code ***pppcStack_160;
  code **ppcStack_158;
  undefined8 uStack_150;
  code ***pppcStack_148;
  code ***pppcStack_140;
  undefined8 *puStack_138;
  code **appcStack_130 [2];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  code **appcStack_f0 [2];
  code **appcStack_e0 [2];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  code ****ppppcStack_b0;
  code **ppcStack_a8;
  code *pcStack_a0;
  undefined8 uStack_78;
  
  ppppcVar6 = param_3;
  func_0x0001052a257c();
  uStack_78 = extraout_x8;
  func_0x0001052a2610(&UNK_10dd918a3,*ppppcVar6);
  pppcVar5 = *param_3;
  if (pppcVar5 == (code ***)0x0) {
    func_0x0001052a2548();
    pppcVar5 = unaff_x22;
  }
  else {
    func_0x0001052a2600(pppcVar5,&PTR_DAT_110874720);
    if (pppcVar5 == (code ***)0x0) {
      func_0x0001052a2648();
      pppcStack_140 = *param_3;
      func_0x0001052a2880();
      func_0x000104bdbfcc();
      if (pppcVar5 == (code ***)0x0) {
        unaff_w28 = 1;
      }
      else {
        iVar4 = *(int *)(pppcVar5 + 5);
        func_0x000104bf7d80(&pppcStack_140,pppcVar5 + 3);
        if ((code ****)pppcStack_140 != (code ****)0x0) {
          ppppcStack_b0 = (code ****)pppcStack_140;
          if ((code ***)pppcStack_140[2] != (code ***)0x0) {
            do {
              func_0x0001052a2558();
              ppppcStack_b0 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          func_0x0001052a26d4();
          func_0x000104be7e54(&ppppcStack_b0);
          ppppcVar6 = &pppcStack_140;
          goto LAB_1052a1118;
        }
        unaff_w28 = iVar4 + 1;
        func_0x000104be7e54(&pppcStack_140);
      }
      if ((bRam00000001136b9a90 & 1) == 0) goto LAB_1052a1150;
      goto LAB_1052a0b6c;
    }
    pppcStack_140 = (code ***)pppcVar5[1];
    if (((code ****)pppcStack_140 != (code ****)0x0) &&
       ((code ***)pppcStack_140[2] != (code ***)0x0)) {
      do {
        func_0x0001052a2558();
        pppcStack_140 = (code ***)extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x0001052a26d4();
    func_0x000104be7e54(&pppcStack_140);
    pppcVar5 = unaff_x22;
  }
  do {
    func_0x0001052a2504(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_1052a1150:
    iVar4 = 0x136b9a90;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10529f4bc();
      FUN_10529ee8c(0);
      FUN_10529ee8c(1);
      func_0x00010b9941f8(&ppppcStack_b0);
      func_0x00010b993b40(&pppcStack_140,ppppcStack_b0,0x1136b9aa8);
      if (((ulong)appcStack_130[0] & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1052a11d0);
        (*pcVar3)();
      }
      func_0x0001003adcc0(0x1136b9ad0,&pppcStack_140);
      func_0x0001003b12dc(&pppcStack_140);
      func_0x000104bdc2fc(&ppppcStack_b0);
      ___cxa_guard_release(0x1136b9a90);
    }
LAB_1052a0b6c:
    func_0x0001003b2110(auStack_170,0x1136b9ad8);
    pcStack_188 = FUN_10529e820;
    func_0x0001052a2764();
    pppcStack_180 = (code ***)param_1;
    ppcStack_178 = (code **)in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10 != 0);
    }
    FUN_10529e768(&pppcStack_140,&pcStack_188);
    pcStack_1a0 = FUN_10529e8c0;
    func_0x0001052a2764();
    pppcStack_198 = (code ***)param_1;
    ppcStack_190 = (code **)in_register_00005008;
    if (extraout_x8_03 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_00 != 0);
    }
    ppppcVar6 = (code ****)appcStack_130;
    FUN_10529e768(ppppcVar6,&pcStack_1a0);
    apcStack_1b8[0] = FUN_10529e988;
    func_0x0001052a2708();
    lVar12 = extraout_x11;
    if (extraout_x8_04 != 0) {
      do {
        func_0x0001052a25b0();
        lVar12 = extraout_x11_00;
      } while (extraout_w10_01 != 0);
    }
    pppcStack_160 = (code ***)FUN_10529e988;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined8 *)(lVar12 + 0x10) = 0;
    func_0x0001052a2720();
    ppppcStack_b0 = (code ****)FUN_1052a1bc8;
    ppcStack_a8 = (code **)&PTR_FUN_110874480;
    pcStack_a0 = FUN_10529e988;
    ppcStack_158 = (code **)0x0;
    uStack_150 = 0;
    func_0x0001052a2858();
    pppcStack_1d0 = (code ***)ppppcVar6;
    func_0x0001052a26c4();
    do {
      func_0x0001052a25f0();
    } while (extraout_w10_02 != 0);
    ppppcStack_b0 = ppppcVar6;
    func_0x0001052a2850(auStack_120);
    func_0x0001052a2848();
    ppppcVar6 = &pppcStack_1d0;
    func_0x000104bda3d0();
    func_0x0001052a29f8();
    pppcStack_1d0 = (code ***)FUN_10529ea6c;
    func_0x0001052a2708();
    if (extraout_x8_05 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_03 != 0);
    }
    pppcStack_160 = (code ***)FUN_10529ea6c;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    func_0x0001052a2720();
    func_0x0001052a2860(FUN_1052a1cb8);
    func_0x0001052a2858();
    appppcStack_1e8[0] = ppppcVar6;
    func_0x0001052a26c4();
    do {
      func_0x0001052a25f0();
    } while (extraout_w10_04 != 0);
    ppppcStack_b0 = ppppcVar6;
    func_0x0001052a2850(auStack_110);
    func_0x0001052a2848();
    func_0x000104bda3d0(appppcStack_1e8);
    func_0x0001052a28ac();
    appppcStack_1e8[0] = (code ****)FUN_10529eb8c;
    func_0x0001052a2764();
    if (extraout_x8_06 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_05 != 0);
    }
    FUN_10529ead4(auStack_100,appppcStack_1e8);
    apcStack_200[0] = FUN_10529ebd8;
    func_0x0001052a2764();
    if (extraout_x8_07 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_06 != 0);
    }
    ppppcVar6 = (code ****)appcStack_f0;
    FUN_10529ead4(ppppcVar6,apcStack_200);
    apcStack_218[0] = FUN_10529ec24;
    func_0x0001052a2708();
    lVar12 = extraout_x11_01;
    if (extraout_x8_08 != 0) {
      do {
        func_0x0001052a25b0();
        lVar12 = extraout_x11_02;
      } while (extraout_w10_07 != 0);
    }
    pppcStack_160 = (code ***)FUN_10529ec24;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined8 *)(lVar12 + 0x10) = 0;
    func_0x0001052a2720();
    func_0x0001052a2860(FUN_1052a1ddc);
    func_0x0001052a2858();
    pppcStack_230 = (code ***)ppppcVar6;
    func_0x0001052a26c4();
    do {
      func_0x0001052a25f0();
    } while (extraout_w10_08 != 0);
    ppppcVar7 = (code ****)appcStack_e0;
    ppppcStack_b0 = ppppcVar6;
    func_0x0001052a2850();
    func_0x0001052a2848();
    func_0x0001052a2a84();
    func_0x0001052a28ac();
    pppcStack_230 = (code ***)FUN_10529ec74;
    func_0x0001052a2708();
    if (extraout_x8_09 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_09 != 0);
    }
    pppcStack_160 = (code ***)FUN_10529ec74;
    uStack_228 = 0;
    uStack_220 = 0;
    func_0x0001052a2720();
    ppppcStack_b0 = (code ****)FUN_1052a1ecc;
    ppcStack_a8 = (code **)&PTR_FUN_110874500;
    pcStack_a0 = FUN_10529ec74;
    ppcStack_158 = (code **)0x0;
    uStack_150 = 0;
    func_0x0001052a2858();
    pppcStack_248 = (code ***)ppppcVar7;
    func_0x0001052a27f4();
    (*extraout_x8_10)(&ppcStack_a8);
    do {
      func_0x0001052a25f0();
    } while (extraout_w10_10 != 0);
    ppppcStack_b0 = ppppcVar7;
    func_0x0001052a2850(auStack_d0);
    func_0x0001052a2848();
    func_0x000104bda3d0(&pppcStack_248);
    ppppcVar6 = (code ****)&ppcStack_158;
    func_0x0001005f1e7c();
    pppcStack_248 = (code ***)FUN_10529ed0c;
    func_0x0001052a2708();
    if (extraout_x8_11 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_11 != 0);
    }
    pppcStack_160 = (code ***)FUN_10529ed0c;
    uStack_240 = 0;
    uStack_238 = 0;
    func_0x0001052a2720();
    ppppcStack_b0 = (code ****)FUN_1052a1fbc;
    ppcStack_a8 = (code **)&PTR_FUN_110874520;
    pcStack_a0 = FUN_10529ed0c;
    ppcStack_158 = (code **)0x0;
    uStack_150 = 0;
    param_1 = (code ****)pppcStack_260;
    in_register_00005008 = (code ***)ppcStack_258;
    func_0x0001052a2858();
    pppcStack_148 = (code ***)ppppcVar6;
    func_0x0001052a27f4();
    (*extraout_x8_12)(&ppcStack_a8);
    do {
      func_0x0001052a25f0();
    } while (extraout_w10_12 != 0);
    ppppcStack_b0 = ppppcVar6;
    func_0x0001052a2850(auStack_c0);
    func_0x0001052a2848();
    func_0x000104bda3d0(&pppcStack_148);
    func_0x0001005f1e7c(&ppcStack_158);
    func_0x000104bdb9bc(auStack_168,auStack_170,&pppcStack_140,9);
    lVar12 = 0x80;
    do {
      func_0x00010b9a8d98((long)&pppcStack_140 + lVar12);
      lVar12 = lVar12 + -0x10;
      in_ZR = lVar12 == -0x10;
    } while (!(bool)in_ZR);
    func_0x0001052a28ac();
    func_0x0001052a29f8();
    func_0x0001052a26bc(apcStack_218);
    func_0x0001052a26bc(apcStack_200);
    func_0x0001052a26bc(appppcStack_1e8);
    func_0x0001052a26bc(&pppcStack_1d0);
    func_0x0001052a26bc(apcStack_1b8);
    func_0x0001052a26bc(&pcStack_1a0);
    func_0x0001052a26bc(&pcStack_188);
    func_0x0001003b1f60(auStack_170);
    puVar8 = (undefined8 *)0x50;
    __Znwm();
    plVar10 = puVar8 + 1;
    *plVar10 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_110874550;
    ppppcVar6 = (code ****)(puVar8 + 3);
    func_0x00010b9ace44(ppppcVar6,auStack_168);
    puVar8[3] = &PTR_DAT_1108745a0;
    func_0x0001052a2764();
    puVar8[9] = in_register_00005008;
    puVar8[8] = param_1;
    if (extraout_x8_13 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_13 != 0);
    }
    if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppcStack_140 = (code ***)ppppcVar6;
      puStack_138 = puVar8;
      func_0x0001003a8180(puVar8 + 4,&pppcStack_140);
      func_0x0001003a90c4(&pppcStack_140);
      if (puVar8[5] != 0) goto LAB_1052a1044;
    }
    else {
LAB_1052a1044:
      do {
        func_0x0001052a25b0();
      } while (extraout_w10_14 != 0);
    }
    pppcStack_160 = (code ***)ppppcVar6;
    func_0x0001003a916c(ppppcVar6);
    func_0x000104bdbf78(auStack_168);
    if (pppcVar5 == (code ***)0x0) {
      pppcVar11 = *param_3;
      func_0x000104bf822c(&ppppcStack_b0,ppppcVar6);
      pppcVar5 = (code ***)0x11328ad40;
      pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,unaff_w28);
      param_3 = (code ****)0x30;
      __Znwm();
      in_register_00005008 = (code ***)ppcStack_a8;
      param_1 = ppppcStack_b0;
      puStack_138 = (undefined8 *)0x11328ad50;
      appcStack_130[0] = (code **)0x1;
      param_3[2] = pppcVar11;
      *param_3 = (code ***)0x0;
      param_3[1] = (code ***)0x0;
      param_3[4] = (code ***)ppcStack_a8;
      param_3[3] = (code ***)ppppcStack_b0;
      ppppcStack_b0 = (code ****)0x0;
      ppcStack_a8 = (code **)0x0;
      *(int *)(param_3 + 5) = unaff_w28;
      pppcVar11 = (code ***)0x11328ad58;
      pppcStack_140 = (code ***)param_3;
      func_0x000104bf7ea8();
      param_3[1] = pppcVar11;
      ppppcVar6 = param_3;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)ppppcVar6 & 1) != 0) {
        pppcStack_140 = (code ***)0x0;
      }
      func_0x000104bdc220(&pppcStack_140);
      pppppcVar9 = &ppppcStack_b0;
    }
    else {
      func_0x000104bf822c(&pppcStack_140,ppppcVar6);
      appcStack_130[0] = (code **)CONCAT44(appcStack_130[0]._4_4_,unaff_w28);
      func_0x000104bf7db8(pppcVar5 + 3,&pppcStack_140);
      pppppcVar9 = (code *****)&pppcStack_140;
    }
    func_0x000104bdc2a0(pppppcVar9);
    func_0x0001052a26d4();
    ppppcVar6 = &pppcStack_160;
LAB_1052a1118:
    func_0x000104be7e54(ppppcVar6);
    func_0x0001052a263c();
  } while( true );
}



/* Entry: 1052a12f8; end: 1052a13bb;  */

void FUN_1052a12f8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x0001052a278c();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x00010b9a9810(&lStack_28);
    if (lStack_28 == 0) {
      lStack_28 = 0;
    }
    else {
      func_0x0001052a2ab0(lStack_28,&PTR_DAT_110d7f038,&PTR_DAT_110874750);
    }
    func_0x0001052a2784();
    if (lStack_28 != 0) {
      lVar1 = *(long *)(lStack_28 + 0x30);
      uVar2 = *(undefined8 *)(lStack_28 + 0x28);
      unaff_x19[1] = *(undefined8 *)(lStack_28 + 0x30);
      *unaff_x19 = uVar2;
      if (lVar1 == 0) {
        return;
      }
      do {
        func_0x0001052a25b0();
      } while (extraout_w10 != 0);
      return;
    }
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1052a13bc; end: 1052a15fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052a13bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *plVar4;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long alStack_58 [7];
  
  func_0x000104bf2d3c(&lStack_98);
  lStack_b8 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a2558();
      lStack_b8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  alStack_58[5] = 0;
  alStack_58[6] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  FUN_1052a15fc(alStack_58 + 3,param_2,alStack_58 + 1);
  FUN_1052a1650(alStack_58 + 5,alStack_58 + 3);
  FUN_1052a18c8(alStack_58 + 3);
  FUN_1052a18c8(alStack_58 + 1);
  func_0x0001003b69cc(alStack_58);
  func_0x0001003b6c18(alStack_58 + 3,alStack_58[0]);
  lStack_68 = alStack_58[0];
  lStack_70 = lStack_b8;
  lStack_b8 = 0;
  alStack_58[0] = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  func_0x0001052a29b4();
  __ZNSt3__15mutex4lockEv();
  lVar2 = alStack_58[5];
  func_0x0001052a1688();
  if ((int)lVar2 == 0) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    lVar1 = lStack_68;
    lVar2 = lStack_70;
    *puVar3 = &PTR_FUN_110874420;
    lStack_70 = 0;
    lStack_68 = 0;
    puVar3[2] = lVar1;
    puVar3[1] = lVar2;
    plVar4 = *(long **)(alStack_58[5] + 0x90);
    *(undefined8 **)(alStack_58[5] + 0x90) = puVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  else {
    FUN_1052a1650(&lStack_80,alStack_58 + 5);
  }
  func_0x0001052a2940();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052a25b0();
      } while (extraout_w10 != 0);
    }
    FUN_1052a16d4(&lStack_70);
    func_0x0001052a2a7c();
  }
  uStack_a8 = alStack_58[4];
  uStack_b0 = alStack_58[3];
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  FUN_1052a18c8(&lStack_80);
  FUN_1052a1ac0(&lStack_70);
  func_0x0001003b6c64(alStack_58 + 3);
  lVar2 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar2 != 0) {
    func_0x0001052a2a18();
  }
  func_0x0001052a27c8();
  func_0x0001003b6c64(&uStack_b0);
  func_0x000104bf3564(&lStack_b8);
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a2558();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052a2948();
  func_0x000104bddedc(alStack_58 + 5);
  func_0x000104bf3564(&lStack_98);
  return;
}



/* Entry: 1052a15fc; end: 1052a164f;  */

void FUN_1052a15fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1052a1650; end: 1052a16d3;  */

undefined8 * FUN_1052a1650(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052a2754();
  return param_1;
}



/* Entry: 1052a16d4; end: 1052a18c7;  */

long * FUN_1052a16d4(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar2;
  int unaff_w21;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001052a257c();
  uStack_98 = param_2;
  lStack_90 = param_3;
  uStack_38 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x0001052a25b0();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052a25b0();
    } while (extraout_w10_00 != 0);
  }
  plVar2 = (long *)*param_1;
  uStack_88 = param_2;
  lStack_80 = param_3;
  FUN_1052a1980(auStack_78,&uStack_88);
  FUN_1052a0a4c(&uStack_68,auStack_78);
  func_0x000104bf351c(auStack_50,&uStack_68);
  func_0x0001052a2a54();
  func_0x000104bda914(auStack_50);
  func_0x00010b9a8d98(&uStack_68);
  func_0x0001052a2978();
  do {
    FUN_1052a18c8(&uStack_88);
    FUN_1052a18c8(&uStack_98);
    plVar1 = (long *)param_1[1];
    func_0x0001003b8370(plVar1);
    while( true ) {
      func_0x0001052a2504(uStack_38);
      if ((bool)in_ZR) {
        return plVar1;
      }
      ___stack_chk_fail();
      func_0x0001052a2acc();
      func_0x000104bda914(auStack_50);
      func_0x00010b9a8d98(&uStack_68);
      func_0x0001052a2978();
      in_ZR = unaff_w21 == 1;
      if ((bool)in_ZR) break;
      FUN_1052a18c8(&uStack_88);
      FUN_1052a18c8(&uStack_98);
      in_ZR = unaff_w21 == 1;
      if (!(bool)in_ZR) {
        func_0x0001052a282c();
        func_0x000104bd46a0();
        func_0x0001005f1e70();
        if (plVar2 != (long *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      ___cxa_begin_catch(plVar2);
      param_1 = (long *)param_1[1];
      __ZSt17current_exceptionv(&lStack_a0);
      func_0x000104bf33cc(param_1,&lStack_a0);
      plVar1 = &lStack_a0;
      __ZNSt13exception_ptrD1Ev(&lStack_a0);
      ___cxa_end_catch();
    }
    ___cxa_begin_catch();
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar2 + 0x10))();
    func_0x00010b99f5f8(auStack_78,plVar2);
    uStack_68 = 2;
    uStack_60 = auStack_78[0];
    auStack_78[0] = 0;
    func_0x0001052a2a54();
    func_0x000104bda914(&uStack_68);
    func_0x000104bda93c(auStack_78);
    ___cxa_end_catch();
    plVar2 = plVar1;
  } while( true );
}



/* Entry: 1052a18c8; end: 1052a18eb;  */

void FUN_1052a18c8(long param_1)

{
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a18ec; end: 1052a18ef;  */

undefined8 * FUN_1052a18ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874420;
  FUN_1052a1ac0(param_1 + 1);
  return param_1;
}



/* Entry: 1052a18f0; end: 1052a1903;  */

void FUN_1052a18f0(void)

{
  FUN_1052a1954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a1904; end: 1052a1953;  */

void FUN_1052a1904(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0001052a25b0();
    } while (extraout_w10 != 0);
  }
  FUN_1052a16d4(param_1 + 8);
  func_0x0001052a2754();
  return;
}



/* Entry: 1052a1954; end: 1052a197f;  */

undefined8 * FUN_1052a1954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874420;
  FUN_1052a1ac0(param_1 + 1);
  return param_1;
}



/* Entry: 1052a1980; end: 1052a1a77;  */

void FUN_1052a1980(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  int extraout_w11;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052a15fc(auStack_40,param_2,&uStack_50);
  FUN_1052a1650(&puStack_30,auStack_40);
  func_0x0001052a2a7c();
  FUN_1052a18c8(&uStack_50);
  func_0x0001052a29b4();
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  puVar2 = puStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001052a2558();
      puVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1052a1a78(puVar2 + 3,auStack_40,&puStack_60);
  func_0x0001052a2920();
  if (puStack_30[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a1a3c);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  param_1[1] = puStack_30[1];
  *param_1 = uVar3;
  *puStack_30 = 0;
  puStack_30[1] = 0;
  func_0x0001052a2940();
  func_0x0001052a27c8();
  return;
}



/* Entry: 1052a1a78; end: 1052a1ab7;  */

void FUN_1052a1a78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052a1ab8(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 1052a1ab8; end: 1052a1abf;  */

bool FUN_1052a1ab8(long *param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(*param_1 + 0x88) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1052a1ac0; end: 1052a1ae7;  */

undefined8 FUN_1052a1ac0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001003b6cec(param_1 + 8);
  func_0x0001003b6ce0(param_1);
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052a1ae8; end: 1052a1b7f;  */

void FUN_1052a1ae8(void)

{
  func_0x0001052a2770();
  func_0x0001052a27d8();
  return;
}



/* Entry: 1052a1b80; end: 1052a1bc7;  */

void FUN_1052a1b80(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a1bc8; end: 1052a1c1b;  */

void FUN_1052a1bc8(void)

{
  func_0x0001052a27e4();
  func_0x0001052a26ec();
  return;
}



/* Entry: 1052a1c1c; end: 1052a1c73;  */

void FUN_1052a1c1c(void)

{
  func_0x0001052a2668();
  func_0x0001003a8364();
  func_0x0001052a24e0();
  func_0x0001052a2598();
  func_0x0001052a2518();
  func_0x0001052a2538();
  func_0x0001052a2730();
  func_0x0001052a2568();
  func_0x0001052a25c0();
  func_0x0001052a25d8();
  func_0x0001052a2728();
  func_0x0001052a2718();
  func_0x0001052a24cc();
  return;
}



/* Entry: 1052a1c74; end: 1052a1c9b;  */

void FUN_1052a1c74(undefined8 param_1,long param_2)

{
  func_0x0001052a25e4(*(undefined8 *)(param_2 + 0x18));
  func_0x0001052a2548();
  return;
}



/* Entry: 1052a1c9c; end: 1052a1cb7;  */

void FUN_1052a1c9c(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a1cb8; end: 1052a1d4f;  */

void FUN_1052a1cb8(void)

{
  func_0x0001052a2770();
  func_0x0001052a27d8();
  return;
}



/* Entry: 1052a1d50; end: 1052a1d6b;  */

void FUN_1052a1d50(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a1d6c; end: 1052a1dbf;  */

void FUN_1052a1d6c(void)

{
  func_0x0001052a27e4();
  func_0x0001052a26ec();
  return;
}



/* Entry: 1052a1dc0; end: 1052a1ddb;  */

void FUN_1052a1dc0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a1ddc; end: 1052a1e2f;  */

void FUN_1052a1ddc(void)

{
  func_0x0001052a27e4();
  func_0x0001052a26ec();
  return;
}



/* Entry: 1052a1e30; end: 1052a1e87;  */

void FUN_1052a1e30(void)

{
  func_0x0001052a2668();
  func_0x0001003a8364();
  func_0x0001052a24e0();
  func_0x0001052a2598();
  func_0x0001052a2518();
  func_0x0001052a2538();
  func_0x0001052a2730();
  func_0x0001052a2568();
  func_0x0001052a25c0();
  func_0x0001052a25d8();
  func_0x0001052a2728();
  func_0x0001052a2718();
  func_0x0001052a24cc();
  return;
}



/* Entry: 1052a1e88; end: 1052a1eaf;  */

void FUN_1052a1e88(undefined8 param_1,long param_2)

{
  func_0x0001052a25e4(*(undefined8 *)(param_2 + 0x18));
  func_0x0001052a2548();
  return;
}



/* Entry: 1052a1eb0; end: 1052a1ecb;  */

void FUN_1052a1eb0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a1ecc; end: 1052a1f1f;  */

void FUN_1052a1ecc(void)

{
  func_0x0001052a27e4();
  func_0x0001052a26ec();
  return;
}



/* Entry: 1052a1f20; end: 1052a1f77;  */

void FUN_1052a1f20(void)

{
  func_0x0001052a2668();
  func_0x0001003a8364();
  func_0x0001052a24e0();
  func_0x0001052a2598();
  func_0x0001052a2518();
  func_0x0001052a2538();
  func_0x0001052a2730();
  func_0x0001052a2568();
  func_0x0001052a25c0();
  func_0x0001052a25d8();
  func_0x0001052a2728();
  func_0x0001052a2718();
  func_0x0001052a24cc();
  return;
}



/* Entry: 1052a1f78; end: 1052a1f9f;  */

void FUN_1052a1f78(undefined8 param_1,long param_2)

{
  func_0x0001052a25e4(*(undefined8 *)(param_2 + 0x18));
  func_0x0001052a2548();
  return;
}



/* Entry: 1052a1fa0; end: 1052a1fbb;  */

void FUN_1052a1fa0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a1fbc; end: 1052a2053;  */

void FUN_1052a1fbc(void)

{
  func_0x0001052a2770();
  func_0x0001052a27d8();
  return;
}



/* Entry: 1052a2054; end: 1052a2073;  */

void FUN_1052a2054(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a2074; end: 1052a2087;  */

void FUN_1052a2074(void)

{
  FUN_1052a2130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a2088; end: 1052a2093;  */

void FUN_1052a2088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052a2aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052a2094; end: 1052a20a7;  */

void FUN_1052a2094(void)

{
  FUN_1052a20b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a20a8; end: 1052a20b7;  */

undefined1  [16] FUN_1052a20a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052a20b8; end: 1052a212f;  */

void FUN_1052a20b8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_DAT_1108745a0;
  puVar2 = param_1;
  func_0x0001052a2648();
  func_0x0001052a26dc();
  iVar1 = *(int *)(puVar2 + 5);
  *(int *)(puVar2 + 5) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    func_0x0001052a2880();
    func_0x000104bdc09c();
  }
  func_0x0001052a263c();
  func_0x0001005f1e7c(param_1 + 5);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052a2130; end: 1052a2147;  */

void FUN_1052a2130(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110874550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052a2148; end: 1052a216b;  */

void FUN_1052a2148(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1108745f8;
  return;
}



/* Entry: 1052a216c; end: 1052a2193;  */

void FUN_1052a216c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1108745f8;
  return;
}



/* Entry: 1052a2194; end: 1052a21af;  */

void FUN_1052a2194(void)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
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
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [32];
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
  
  FUN_10529ee8c(0);
  func_0x0001052a257c();
  uStack_38 = extraout_x8;
  FUN_1052a3bd8();
  FUN_1052a7c78(1);
  FUN_1052a96b8(1);
  FUN_1052ad450(1);
  FUN_1052b36d4(1);
  FUN_1052b53d4(1);
  bVar1 = bRam00000001136b9a81;
  bRam00000001136b9a81 = 1;
  if ((bVar1 & 1) != 0) goto LAB_10529ef10;
  if ((bRam00000001136b9a98 & 1) == 0) goto LAB_10529ef2c;
  while( true ) {
    func_0x000108b80888(0x1136b9ae0,1);
LAB_10529ef10:
    func_0x0001052a2504(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10529ef2c:
    iVar2 = 0x136b9a98;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10529f4bc();
      pcVar3 = "fetchFullContent";
      func_0x0001003a83dc(&uStack_208,"fetchFullContent");
      FUN_1052a420c();
      pcVar4 = pcVar3;
      FUN_1052be804();
      func_0x0001003adcc0(auStack_130,pcVar4);
      FUN_1052b39bc();
      func_0x0001052a2938();
      func_0x0001052a2918(auStack_218,pcVar3,auStack_130);
      uStack_110 = uStack_208;
      uStack_208 = 0;
      func_0x0001003aef98(auStack_108,auStack_218);
      pcVar3 = "fetchContentRange";
      func_0x0001003a83dc(&uStack_220,"fetchContentRange");
      FUN_1052a420c();
      FUN_1052be804();
      puVar5 = auStack_160;
      func_0x0001003adcc0(puVar5,pcVar3);
      FUN_1052b39bc();
      func_0x0001052a2938();
      FUN_1052af24c();
      func_0x0001003adcc0(auStack_140,puVar5);
      func_0x0001052a2a64(auStack_230);
      uStack_f8 = uStack_220;
      uStack_220 = 0;
      func_0x0001003aef98(auStack_f0,auStack_230);
      pcVar3 = "prefetchContent";
      func_0x0001003a83dc(&uStack_238,"prefetchContent");
      FUN_1052ad820();
      func_0x0001052a2970();
      puVar5 = auStack_190;
      func_0x0001003adcc0(puVar5,pcVar3);
      FUN_1052be804();
      func_0x0001052a2938();
      FUN_1052a0920();
      func_0x0001003adcc0(auStack_170,puVar5);
      func_0x0001052a2a64(auStack_248);
      uStack_e0 = uStack_238;
      uStack_238 = 0;
      func_0x0001003aef98(auStack_d8,auStack_248);
      pcVar3 = "getContentStatusResult";
      func_0x0001003a83dc(&uStack_250,"getContentStatusResult");
      FUN_1052a2bf0();
      func_0x0001052a2970();
      func_0x0001003adcc0(auStack_1a0,pcVar3);
      func_0x0001052a27b0(auStack_260);
      uStack_c8 = uStack_250;
      uStack_250 = 0;
      func_0x0001003aef98(auStack_c0,auStack_260);
      pcVar3 = "hasDownloadStarted";
      func_0x0001003a83dc(&uStack_268,"hasDownloadStarted");
      func_0x000104bef4f0();
      func_0x0001052a2970();
      func_0x0001003adcc0(auStack_1b0,pcVar3);
      func_0x0001052a27b0(auStack_278);
      uStack_b0 = uStack_268;
      uStack_268 = 0;
      func_0x0001003aef98(auStack_a8,auStack_278);
      pcVar3 = "isDownloadComplete";
      func_0x0001003a83dc(&uStack_280,"isDownloadComplete");
      func_0x000104bef4f0();
      func_0x0001052a2970();
      func_0x0001003adcc0(auStack_1c0,pcVar3);
      func_0x0001052a27b0(auStack_290);
      uStack_98 = uStack_280;
      uStack_280 = 0;
      func_0x0001003aef98(auStack_90,auStack_290);
      func_0x0001003a83dc(&uStack_298,"getCachePolicyManager");
      FUN_1052a7f18();
      func_0x0001052a2a0c(auStack_2a8);
      uStack_80 = uStack_298;
      uStack_298 = 0;
      func_0x0001003aef98(auStack_78,auStack_2a8);
      pcVar3 = "linkContent";
      func_0x0001003a83dc(&uStack_2b0);
      FUN_1052a097c();
      pcVar4 = pcVar3;
      FUN_1052a9fd8();
      func_0x0001003adcc0(auStack_1e0,pcVar4);
      FUN_1052b39bc();
      func_0x0001052a2938();
      func_0x0001052a2918(auStack_2c0,pcVar3,auStack_1e0);
      uStack_68 = uStack_2b0;
      uStack_2b0 = 0;
      func_0x0001003aef98(auStack_60,auStack_2c0);
      pcVar3 = "retrieveSyncIfCached";
      func_0x0001003a83dc(&uStack_2c8,"retrieveSyncIfCached");
      if ((bRam00000001136b9aa0 & 1) == 0) {
        pcVar3 = (char *)0x1136b9aa0;
        ___cxa_guard_acquire();
        if ((int)pcVar3 != 0) {
          FUN_1052a0a34();
          pcVar4 = pcVar3;
          FUN_1052a097c();
          func_0x00010b9913cc(0x1136b9af0,pcVar3,pcVar4);
          pcVar3 = (char *)0x1136b9aa0;
          ___cxa_guard_release(0x1136b9aa0);
        }
      }
      FUN_1052b39bc();
      puVar5 = auStack_200;
      func_0x0001003adcc0(puVar5,pcVar3);
      FUN_1052a09d8();
      func_0x0001003adcc0(auStack_1f0,puVar5);
      func_0x0001052a2918(auStack_2d8,0x1136b9af0,auStack_200);
      uStack_50 = uStack_2c8;
      uStack_2c8 = 0;
      func_0x0001003aef98(auStack_48,auStack_2d8);
      func_0x000104bdbd44(0x1136b9ae0,0x1136b9aa8,1,&uStack_110,9);
      lVar6 = 0xc0;
      do {
        func_0x0001003b1c5c(auStack_108 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052a2678(auStack_2d8);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_2c8);
      func_0x0001052a2678(auStack_2c0);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_2b0);
      func_0x0001052a2678(auStack_2a8);
      func_0x0001003a8c94(&uStack_298);
      func_0x0001052a2678(auStack_290);
      func_0x0001052a2678(auStack_1c0);
      func_0x0001003a8c94(&uStack_280);
      func_0x0001052a2678(auStack_278);
      func_0x0001052a2678(auStack_1b0);
      func_0x0001003a8c94(&uStack_268);
      func_0x0001052a2678(auStack_260);
      func_0x0001052a2678(auStack_1a0);
      func_0x0001003a8c94(&uStack_250);
      func_0x0001052a2678(auStack_248);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_238);
      func_0x0001052a2678(auStack_230);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_220);
      func_0x0001052a2678(auStack_218);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_208);
      ___cxa_guard_release(0x1136b9a98);
    }
  }
  return;
}



/* Entry: 1052a21b0; end: 1052a21e7;  */

long FUN_1052a21b0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110874658);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1052a21e8; end: 1052a21f3;  */

undefined ** FUN_1052a21e8(void)

{
  return &PTR_DAT_110874658;
}



/* Entry: 1052a21f4; end: 1052a228b;  */

void FUN_1052a21f4(undefined8 param_1,long param_2)

{
  func_0x0001052a2770();
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1052a228c; end: 1052a22a7;  */

void FUN_1052a228c(void)

{
  return;
}



/* Entry: 1052a22a8; end: 1052a2493;  */

void FUN_1052a22a8(undefined8 param_1,long ****param_2,long ***param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long ****pppplVar3;
  int iVar4;
  undefined8 extraout_x8;
  long ***extraout_x8_00;
  long ***ppplVar5;
  long ***extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  long ***ppplStack_78;
  long **pplStack_70;
  long **pplStack_68;
  long ***ppplStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long **pplStack_48;
  undefined8 uStack_38;
  
  func_0x0001052a257c();
  uStack_38 = extraout_x8;
  (*(code *)param_3[2])(param_1);
  while( true ) {
    func_0x0001052a2504(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    iVar4 = (int)param_3;
    if (iVar4 == 0) break;
    in_ZR = iVar4 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x000104bf2d3c(&ppplStack_60);
      uStack_50 = 2;
      pplStack_48 = (long **)param_2[2];
      if ((long ***)pplStack_48 != (long ***)0x0) {
        ppplVar5 = (long ***)(pplStack_48 + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppplVar5,0x10);
          if (bVar2) {
            *ppplVar5 = (long **)((long)*ppplVar5 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010b9a4940(ppplStack_60,&uStack_50);
      func_0x000104bda914(&uStack_50);
      ppplVar5 = ppplStack_60;
      if ((ppplStack_60 != (long ***)0x0) && (ppplStack_60[2] != (long **)0x0)) {
        do {
          func_0x0001052a2558();
          ppplVar5 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      param_3 = &pplStack_68;
      pplStack_68 = (long **)ppplVar5;
      func_0x0001052a2948();
      func_0x000104bddedc(&pplStack_68);
      param_2 = &ppplStack_60;
      func_0x000104bf3564();
    }
    else {
      in_ZR = iVar4 == 2;
      if (!(bool)in_ZR) goto LAB_1052a2488;
      ___cxa_begin_catch();
      pppplVar3 = param_2;
      func_0x0001003a8364();
      (*(code *)(*param_2)[2])();
      uStack_58 = 0;
      ppplStack_60 = (long ***)param_2;
      func_0x0001052a2598();
      func_0x0001003a9204(&uStack_50);
      func_0x0001003ac750(&ppplStack_60,pppplVar3,&uStack_50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
      func_0x000104bf2d3c(&pplStack_68);
      ppplStack_78 = ppplStack_60;
      ppplStack_60 = (long ***)0x0;
      func_0x00010b99f560(&pplStack_70,&ppplStack_78);
      uStack_50 = 2;
      pplStack_48 = pplStack_70;
      pplStack_70 = (long **)0x0;
      func_0x0001052a2a54();
      func_0x000104bda914(&uStack_50);
      func_0x000104bda93c(&pplStack_70);
      func_0x0001003a8c94(&ppplStack_78);
      ppplVar5 = (long ***)pplStack_68;
      if (((long ***)pplStack_68 != (long ***)0x0) && ((long **)pplStack_68[2] != (long **)0x0)) {
        do {
          func_0x0001052a2558();
          ppplVar5 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      param_3 = &pplStack_70;
      pplStack_70 = (long **)ppplVar5;
      func_0x0001052a2948();
      func_0x000104bddedc(&pplStack_70);
      func_0x000104bf3564(&pplStack_68);
      param_2 = &ppplStack_60;
      func_0x0001003a8c94();
    }
    ___cxa_end_catch();
  }
LAB_1052a2490:
  __Unwind_Resume();
  return;
LAB_1052a2488:
  do {
    func_0x000104bd46a0();
  } while ((int)param_3 != 0);
  goto LAB_1052a2490;
}



/* Entry: 1052a2494; end: 1052a2ae3;  */

void FUN_1052a2494(void)

{
  return;
}



/* Entry: 1052a2ae4; end: 1052a2bef;  */

undefined1 * FUN_1052a2ae4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052a2bf0();
  func_0x0001003b2110(auStack_78,0x113818d20);
  auStack_68[0] = *param_2;
  uStack_60 = 7;
  uStack_50 = 5;
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_48 = *(undefined8 *)(param_2 + 0x10);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_1052a2d50(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_1052a2bf0;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = auStack_68;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818d28 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818d28;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_BufferedContentFetcherCacheStatusResult");
      pcVar4 = "isAvailable";
      func_0x0001003a83dc(auStack_100,"isAvailable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "contentSizeOnDiskBytes";
      func_0x0001003a83dc(auStack_108,"contentSizeOnDiskBytes");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "contentLengthBytes";
      func_0x0001003a83dc(auStack_110,"contentLengthBytes");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818d18,auStack_f8,0,auStack_f0,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar3 = (undefined1 *)0x113818d28;
      ___cxa_guard_release(0x113818d28);
    }
  }
  FUN_1052a2d50(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818d18;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052a2bf0; end: 1052a2d4f;  */

undefined8 FUN_1052a2bf0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818d28 & 1) == 0) {
    param_1 = 0x113818d28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_BufferedContentFetcherCacheStatusResult");
      pcVar1 = "isAvailable";
      func_0x0001003a83dc(auStack_80,"isAvailable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "contentSizeOnDiskBytes";
      func_0x0001003a83dc(auStack_88,"contentSizeOnDiskBytes");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "contentLengthBytes";
      func_0x0001003a83dc(auStack_90,"contentLengthBytes");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818d18,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x113818d28;
      ___cxa_guard_release(0x113818d28);
    }
  }
  FUN_1052a2d50(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818d18;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052a2d50; end: 1052a2d63;  */

void FUN_1052a2d50(void)

{
  return;
}



/* Entry: 1052a2d64; end: 1052a334f;  */

void FUN_1052a2d64(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  code ***pppcVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code ***extraout_x8_04;
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
  int extraout_w11;
  long extraout_x11;
  long extraout_x11_00;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code **ppcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code **ppcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *apcStack_170 [3];
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  code *pcStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  code **ppcStack_118;
  code **ppcStack_110;
  undefined8 *puStack_108;
  byte abStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  code *apcStack_d0 [2];
  undefined1 auStack_c0 [32];
  undefined8 ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_70;
  
  func_0x0001052a623c();
  uStack_70 = extraout_x8;
  if ((bRam00000001136b9b18 & 1) == 0) {
    iVar6 = 0x136b9b18;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1052a42a8();
      FUN_1052a3bd8(0);
      FUN_1052a3bd8(1);
      func_0x00010b9941f8(&pppuStack_a0);
      func_0x00010b993b40(&ppcStack_110,pppuStack_a0,0x113818d48);
      if ((abStack_100[0] & 1) == 0) goto LAB_1052a3284;
      func_0x0001003adcc0(0x1136b9b60,&ppcStack_110);
      func_0x0001003b12dc(&ppcStack_110);
      func_0x000104bdc2fc(&pppuStack_a0);
      ___cxa_guard_release(0x1136b9b18);
    }
  }
  func_0x0001003b2110(auStack_140,0x1136b9b68);
  pcStack_158 = FUN_1052a3454;
  uStack_148 = param_2[1];
  uStack_150 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
  }
  pppcVar7 = &ppcStack_110;
  FUN_1052a3350(pppcVar7,&pcStack_158);
  apcStack_170[0] = FUN_1052a3480;
  func_0x0001052a6650();
  lVar10 = extraout_x11;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052a6200();
      lVar10 = extraout_x11_00;
    } while (extraout_w10_00 != 0);
  }
  pcStack_130 = FUN_1052a3480;
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  func_0x0001052a6730();
  pppuStack_a0 = (undefined8 ***)FUN_1052a5a24;
  ppuStack_98 = &PTR_FUN_110874920;
  pcStack_90 = FUN_1052a3480;
  func_0x0001052a65d0();
  pcStack_128 = (code *)0x0;
  uStack_120 = 0;
  func_0x0001052a679c();
  ppcStack_188 = (code **)pppcVar7;
  func_0x0001052a624c();
  do {
    func_0x0001052a64c0();
  } while (extraout_w10_01 != 0);
  pppuStack_a0 = (undefined8 ***)pppcVar7;
  func_0x0001052a67a4(abStack_100);
  func_0x0001052a678c();
  pppcVar7 = &ppcStack_188;
  func_0x000104bda3d0();
  func_0x0001052a68ac();
  ppcStack_188 = (code **)FUN_1052a3644;
  func_0x0001052a6650();
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10_02 != 0);
  }
  pcStack_130 = FUN_1052a3644;
  uStack_180 = 0;
  uStack_178 = 0;
  func_0x0001052a6730();
  pppuStack_a0 = (undefined8 ***)FUN_1052a5b78;
  ppuStack_98 = &PTR_FUN_110874940;
  pcStack_90 = FUN_1052a3644;
  func_0x0001052a65d0();
  pcStack_128 = (code *)0x0;
  uStack_120 = 0;
  func_0x0001052a679c();
  pppuStack_1a0 = (undefined8 ***)pppcVar7;
  func_0x0001052a624c();
  do {
    func_0x0001052a64c0();
  } while (extraout_w10_03 != 0);
  pppuStack_a0 = (undefined8 ***)pppcVar7;
  func_0x0001052a67a4(auStack_f0);
  func_0x0001052a678c();
  func_0x000104bda3d0(&pppuStack_1a0);
  pppuVar8 = (undefined8 ***)&pcStack_128;
  func_0x00010529fe38();
  pppuStack_1a0 = (undefined8 ***)FUN_1052a3808;
  func_0x0001052a6650();
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10_04 != 0);
  }
  pcStack_130 = FUN_1052a3808;
  uStack_198 = 0;
  uStack_190 = 0;
  func_0x0001052a6730();
  pppuStack_a0 = (undefined8 ***)FUN_1052a5ccc;
  ppuStack_98 = &PTR_FUN_110874960;
  pcStack_90 = FUN_1052a3808;
  func_0x0001052a65d0();
  pcStack_128 = (code *)0x0;
  uStack_120 = 0;
  func_0x0001052a679c();
  ppcStack_1b8 = (code **)pppuVar8;
  func_0x0001052a624c();
  do {
    func_0x0001052a64c0();
  } while (extraout_w10_05 != 0);
  pppuStack_a0 = pppuVar8;
  func_0x0001052a67a4(auStack_e0);
  func_0x0001052a678c();
  func_0x000104bda3d0(&ppcStack_1b8);
  func_0x00010529fe38(&pcStack_128);
  ppcStack_1b8 = (code **)FUN_1052a39cc;
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10_06 != 0);
  }
  pppuVar8 = (undefined8 ***)apcStack_d0;
  FUN_1052a3350(pppuVar8,&ppcStack_1b8);
  func_0x0001052a6650();
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10_07 != 0);
  }
  pcStack_130 = FUN_1052a3a34;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  func_0x0001052a6730();
  pppuStack_a0 = (undefined8 ***)FUN_1052a5e20;
  ppuStack_98 = &PTR_FUN_110874980;
  pcStack_90 = FUN_1052a3a34;
  func_0x0001052a65d0();
  pcStack_128 = (code *)0x0;
  uStack_120 = 0;
  func_0x0001052a679c();
  ppcStack_118 = (code **)pppuVar8;
  func_0x0001052a624c();
  do {
    func_0x0001052a64c0();
  } while (extraout_w10_08 != 0);
  pppuStack_a0 = pppuVar8;
  func_0x0001052a67a4(auStack_c0);
  func_0x0001052a678c();
  func_0x000104bda3d0(&ppcStack_118);
  func_0x00010529fe38(&pcStack_128);
  pppcVar7 = &ppcStack_110;
  pppuStack_a0 = (undefined8 ***)FUN_1052a3b44;
  pcStack_90 = (code *)param_2[1];
  ppuStack_98 = (undefined **)*param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001052a61ac();
      pppcVar7 = extraout_x8_04;
    } while (extraout_w11 != 0);
  }
  FUN_1052a3350(pppcVar7 + 0xc,&pppuStack_a0);
  func_0x000104bdb9bc(auStack_138,auStack_140,&ppcStack_110,7);
  lVar10 = 0x60;
  do {
    func_0x00010b9a8d98((long)&ppcStack_110 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar5 = lVar10 == -0x10;
  } while (!(bool)uVar5);
  func_0x0001052a68f0();
  func_0x00010529fe38(&uStack_1c8);
  func_0x0001052a6630(&ppcStack_1b8);
  func_0x0001052a68ac();
  func_0x00010529fe38(&uStack_180);
  func_0x0001052a6630(apcStack_170);
  func_0x0001052a6630(&pcStack_158);
  func_0x0001003b1f60(auStack_140);
  puVar9 = (undefined8 *)0x50;
  __Znwm();
  plVar11 = puVar9 + 1;
  *plVar11 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_1108749b0;
  pppuVar8 = (undefined8 ***)(puVar9 + 3);
  func_0x00010b9ace44(pppuVar8,auStack_138);
  puVar9[3] = &PTR_DAT_110874a00;
  lVar10 = param_2[1];
  uVar12 = *param_2;
  puVar9[9] = param_2[1];
  puVar9[8] = uVar12;
  if (lVar10 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10_09 != 0);
  }
  if ((puVar9[5] == 0) || (uVar5 = *(long *)(puVar9[5] + 8) == -1, pppuVar3 = pppuVar8, (bool)uVar5)
     ) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppcStack_110 = (code **)pppuVar8;
    puStack_108 = puVar9;
    func_0x0001003a8180(puVar9 + 4,&ppcStack_110);
    func_0x0001003a90c4(&ppcStack_110);
    pppuStack_a0 = pppuVar8;
    pppuVar3 = pppuVar8;
    if (puVar9[5] != 0) goto LAB_1052a31c0;
  }
  else {
LAB_1052a31c0:
    do {
      pppuStack_a0 = pppuVar3;
      func_0x0001052a6200();
      pppuVar3 = pppuStack_a0;
    } while (extraout_w10_10 != 0);
  }
  *param_1 = (long)pppuVar8;
  FUN_1052a613c(&pppuStack_a0);
  func_0x000104bdbf78(auStack_138);
  func_0x0001052a6198(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1052a3284:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052a328c);
  (*pcVar4)();
}



/* Entry: 1052a3350; end: 1052a3453;  */

void FUN_1052a3350(code *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  code *pcVar1;
  code **ppcVar2;
  int iVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  pcVar1 = param_1;
  func_0x0001052a623c();
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar4 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_48 = extraout_x8;
  func_0x0001052a6730();
  pcStack_78 = FUN_1052a5980;
  ppuStack_70 = &PTR_FUN_110874900;
  uStack_68 = uVar5;
  uStack_60 = uVar6;
  uStack_58 = uVar4;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar1;
  func_0x0001052a62ac(ppuStack_70);
  do {
    func_0x0001052a64c0();
  } while (extraout_w10 != 0);
  iVar3 = (int)&pcStack_78;
  pcStack_78 = pcVar1;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_78);
  ppcVar2 = &pcStack_80;
  func_0x000104bda3d0();
  func_0x0001052a68f0();
  func_0x0001052a6198(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    func_0x0001052a634c();
  }
  else {
    func_0x0001052a62ac(ppuStack_70);
    __ZdlPv(pcVar1);
  }
  func_0x0001052a6934();
  func_0x0001052a6604();
  (**(code **)(extraout_x8_00 + 0x10))();
  *(undefined2 *)(ppcVar2 + 1) = 1;
  *ppcVar2 = (code *)0x0;
  return;
}



/* Entry: 1052a3454; end: 1052a347f;  */

void FUN_1052a3454(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001052a6604();
  (**(code **)(extraout_x8 + 0x10))();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 1052a3480; end: 1052a3643;  */

void FUN_1052a3480(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x0001052a6604();
  func_0x0001052a68c4();
  func_0x0001052a6834();
  func_0x0001052a68bc();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6864();
  func_0x0001052a6814();
  FUN_1052a42fc();
  func_0x0001052a6960();
  FUN_1052a4324();
  FUN_1052a4560(auStack_40);
  FUN_1052a4560(auStack_50);
  func_0x0001052a689c();
  func_0x0001052a6794(uStack_58);
  func_0x0001052a6270();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4348();
  if (aiStack_30[0] == 0) {
    func_0x0001052a6740();
    func_0x0001052a6300(&PTR_FUN_110874790);
    if (extraout_x8 != 0) {
      func_0x0001052a6490();
    }
  }
  else {
    FUN_1052a4324(&lStack_80,aiStack_30);
  }
  func_0x0001052a66e8();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052a6200();
      } while (extraout_w10 != 0);
    }
    FUN_1052a4378(auStack_70);
    FUN_1052a4560(&lStack_90);
  }
  func_0x0001052a66b8();
  FUN_1052a4560();
  puVar1 = auStack_70;
  FUN_1052a4830();
  func_0x0001052a6508();
  func_0x0001052a6758();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001052a6230();
  }
  func_0x0001052a677c();
  func_0x0001052a6908();
  func_0x0001052a6708();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052a6464();
  func_0x0001052a68b4();
  func_0x0001052a6688();
  func_0x0001052a6728();
  func_0x0001052a6678();
  return;
}



/* Entry: 1052a3644; end: 1052a3807;  */

void FUN_1052a3644(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x0001052a6604();
  func_0x0001052a68c4();
  func_0x0001052a6834();
  func_0x0001052a68bc();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6864();
  func_0x0001052a6814();
  FUN_1052a484c();
  func_0x0001052a6960();
  FUN_1052a4874();
  FUN_1052a4ab0(auStack_40);
  FUN_1052a4ab0(auStack_50);
  func_0x0001052a689c();
  func_0x0001052a6794(uStack_58);
  func_0x0001052a6270();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4898();
  if (aiStack_30[0] == 0) {
    func_0x0001052a6740();
    func_0x0001052a6300(&PTR_FUN_110874820);
    if (extraout_x8 != 0) {
      func_0x0001052a6490();
    }
  }
  else {
    FUN_1052a4874(&lStack_80,aiStack_30);
  }
  func_0x0001052a66e8();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052a6200();
      } while (extraout_w10 != 0);
    }
    FUN_1052a48c8(auStack_70);
    FUN_1052a4ab0(&lStack_90);
  }
  func_0x0001052a66b8();
  FUN_1052a4ab0();
  puVar1 = auStack_70;
  FUN_1052a4d0c();
  func_0x0001052a6508();
  func_0x0001052a6758();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001052a6230();
  }
  func_0x0001052a6774();
  func_0x0001052a6908();
  func_0x0001052a6708();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052a6464();
  func_0x0001052a68b4();
  func_0x0001052a6688();
  func_0x0001052a6720();
  func_0x0001052a6670();
  return;
}



/* Entry: 1052a3808; end: 1052a39cb;  */

void FUN_1052a3808(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x0001052a6604();
  func_0x0001052a68c4();
  func_0x0001052a6834();
  func_0x0001052a68bc();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6864();
  func_0x0001052a6814();
  FUN_1052a4d28();
  func_0x0001052a6960();
  FUN_1052a4d50();
  FUN_1052a4f84(auStack_40);
  FUN_1052a4f84(auStack_50);
  func_0x0001052a689c();
  func_0x0001052a6794(uStack_58);
  func_0x0001052a6270();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4d74();
  if (aiStack_30[0] == 0) {
    func_0x0001052a6740();
    func_0x0001052a6300(&PTR_FUN_110874870);
    if (extraout_x8 != 0) {
      func_0x0001052a6490();
    }
  }
  else {
    FUN_1052a4d50(&lStack_80,aiStack_30);
  }
  func_0x0001052a66e8();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052a6200();
      } while (extraout_w10 != 0);
    }
    FUN_1052a4da4(auStack_70);
    FUN_1052a4f84(&lStack_90);
  }
  func_0x0001052a66b8();
  FUN_1052a4f84();
  puVar1 = auStack_70;
  FUN_1052a51fc();
  func_0x0001052a6508();
  func_0x0001052a6758();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001052a6230();
  }
  func_0x0001052a676c();
  func_0x0001052a6908();
  func_0x0001052a6708();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052a6464();
  func_0x0001052a68b4();
  func_0x0001052a6688();
  func_0x0001052a6718();
  func_0x0001052a6668();
  return;
}



/* Entry: 1052a39cc; end: 1052a3a33;  */

void FUN_1052a39cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 auStack_98 [120];
  
  func_0x0001052a6624();
  plVar1 = (long *)*param_2;
  FUN_1052be72c(auStack_98);
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_98);
  func_0x00010529fe04(auStack_98);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052a3a34; end: 1052a3b43;  */

void FUN_1052a3a34(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = param_2;
  func_0x0001052a6624();
  uVar2 = param_3;
  func_0x00010b9abfa4(param_3,1);
  func_0x00010b9abfa4(param_3,2);
  plVar3 = (long *)*param_2;
  FUN_1052a9f64(auStack_70,puVar1);
  FUN_1052a7310(auStack_88,uVar2);
  FUN_105280c90(auStack_a8,param_3);
  (**(code **)(*plVar3 + 0x38))(&uStack_50,plVar3,auStack_70,auStack_88,auStack_a8);
  func_0x0001002a2294(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  uStack_b8 = uStack_48;
  uStack_c0 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052a5218(param_1,&uStack_c0);
  func_0x0001052a6528();
  func_0x0001052a6764();
  return;
}



/* Entry: 1052a3b44; end: 1052a3bd7;  */

void FUN_1052a3b44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_58 [24];
  
  puVar1 = param_2;
  func_0x0001052a6624();
  func_0x00010b9abfa4(param_3,1);
  plVar2 = (long *)*param_2;
  func_0x00010b9a9518(puVar1);
  func_0x0001052a03d4(auStack_58,param_3);
  (**(code **)(*plVar2 + 0x40))(plVar2,puVar1,auStack_58);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052a3bd8; end: 1052a420b;  */

void FUN_1052a3bd8(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
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
  undefined1 auStack_48 [24];
  
  func_0x0001052a623c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9b10);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9b10) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052a3c2c;
  if ((bRam00000001136b9b20 & 1) == 0) goto LAB_1052a3c4c;
  while( true ) {
    func_0x000108b80888(0x1136b9b70);
LAB_1052a3c2c:
    func_0x0001052a6164();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052a3c4c:
    iVar2 = 0x136b9b20;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052a42a8();
      func_0x0001003a83dc(&uStack_148,"cancel");
      func_0x0001003b166c(auStack_168);
      func_0x0001052a6404(auStack_158,auStack_168);
      uStack_e0 = uStack_148;
      uStack_148 = 0;
      func_0x0001003aef98(auStack_d8,auStack_158);
      func_0x0001003a83dc(&uStack_170,"consumeFuture");
      if ((bRam00000001136b9b28 & 1) == 0) {
        iVar2 = 0x136b9b28;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b9b30 & 1) == 0) {
            iVar2 = 0x136b9b30;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              FUN_1052a0a34();
              func_0x0001052a693c();
              func_0x0001052a692c(0x1136b9b90);
              ___cxa_guard_release(0x1136b9b30);
            }
          }
          func_0x0001052a68e8(0x1136b9b80);
          ___cxa_guard_release(0x1136b9b28);
        }
      }
      func_0x0001052a6404(auStack_180,0x1136b9b80);
      uStack_c8 = uStack_170;
      uStack_170 = 0;
      func_0x0001003aef98(auStack_c0,auStack_180);
      func_0x0001003a83dc(&uStack_188,"contentLength");
      if ((bRam00000001136b9b38 & 1) == 0) {
        iVar2 = 0x136b9b38;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b9b40 & 1) == 0) {
            iVar2 = 0x136b9b40;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000104bef5f8();
              func_0x0001052a693c();
              func_0x0001052a692c(0x1136b9bb0);
              ___cxa_guard_release(0x1136b9b40);
            }
          }
          func_0x0001052a68e8(0x1136b9ba0);
          ___cxa_guard_release(0x1136b9b38);
        }
      }
      func_0x0001052a6404(auStack_198,0x1136b9ba0);
      uStack_b0 = uStack_188;
      uStack_188 = 0;
      func_0x0001003aef98(auStack_a8,auStack_198);
      func_0x0001003a83dc(&uStack_1a0,"stitchFilePath");
      if ((bRam00000001136b9b48 & 1) == 0) {
        iVar2 = 0x136b9b48;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b9b50 & 1) == 0) {
            iVar2 = 0x136b9b50;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000104bdbd7c();
              func_0x0001052a693c();
              func_0x0001052a692c(0x1136b9bd0);
              ___cxa_guard_release(0x1136b9b50);
            }
          }
          func_0x0001052a68e8(0x1136b9bc0);
          ___cxa_guard_release(0x1136b9b48);
        }
      }
      func_0x0001052a6404(auStack_1b0,0x1136b9bc0);
      uStack_98 = uStack_1a0;
      uStack_1a0 = 0;
      func_0x0001003aef98(auStack_90,auStack_1b0);
      pcVar3 = "setRequestContext";
      func_0x0001003a83dc(&uStack_1b8,"setRequestContext");
      func_0x0001003b166c(auStack_1d8);
      FUN_1052be804();
      func_0x0001003adcc0(auStack_f0,pcVar3);
      func_0x000104bdbd48(auStack_1c8,auStack_1d8,auStack_f0,1);
      uStack_80 = uStack_1b8;
      uStack_1b8 = 0;
      func_0x0001003aef98(auStack_78,auStack_1c8);
      pcVar3 = "associateCachePolicy";
      func_0x0001003a83dc(&uStack_1e0,"associateCachePolicy");
      FUN_1052a5910();
      pcVar4 = pcVar3;
      FUN_1052a9fd8();
      puVar5 = auStack_120;
      func_0x0001003adcc0(puVar5,pcVar4);
      FUN_1052a73b0();
      puVar6 = auStack_110;
      func_0x0001003adcc0(puVar6,puVar5);
      FUN_1052810e0();
      func_0x0001003adcc0(auStack_100,puVar6);
      func_0x000104bdbd48(auStack_1f0,pcVar3,auStack_120,3);
      uStack_68 = uStack_1e0;
      uStack_1e0 = 0;
      func_0x0001003aef98(auStack_60,auStack_1f0);
      func_0x0001003a83dc(&uStack_1f8,"logConsumed");
      func_0x0001003b166c(auStack_218);
      if ((bRam00000001136b9b58 & 1) == 0) {
        iVar2 = 0x136b9b58;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x00010b990e20(0x1136b9be0);
          ___cxa_guard_release(0x1136b9b58);
        }
      }
      puVar5 = auStack_140;
      func_0x0001003adcc0(puVar5,0x1136b9be0);
      FUN_1052a09d8();
      func_0x0001003adcc0(auStack_130,puVar5);
      func_0x000104bdbd48(auStack_208,auStack_218,auStack_140,2);
      uStack_50 = uStack_1f8;
      uStack_1f8 = 0;
      func_0x0001003aef98(auStack_48,auStack_208);
      func_0x000104bdbd44(0x1136b9b70,0x113818d48,1,&uStack_e0,7);
      lVar7 = 0x90;
      do {
        func_0x0001003b1c5c(auStack_d8 + lVar7 + -8);
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x18);
      func_0x0001052a64b8(auStack_208);
      lVar7 = 0x18;
      do {
        func_0x0001003adc18(auStack_140 + lVar7);
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -8);
      func_0x0001052a64b8(auStack_218);
      func_0x0001003a8c94(&uStack_1f8);
      func_0x0001052a64b8(auStack_1f0);
      lVar7 = 0x28;
      do {
        func_0x0001003adc18(auStack_120 + lVar7);
        lVar7 = lVar7 + -0x10;
        in_ZR = lVar7 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_1e0);
      func_0x0001052a64b8(auStack_1c8);
      func_0x0001052a64b8(auStack_f0);
      func_0x0001052a64b8(auStack_1d8);
      func_0x0001003a8c94(&uStack_1b8);
      func_0x0001052a64b8(auStack_1b0);
      func_0x0001003a8c94(&uStack_1a0);
      func_0x0001052a64b8(auStack_198);
      func_0x0001003a8c94(&uStack_188);
      func_0x0001052a64b8(auStack_180);
      func_0x0001003a8c94(&uStack_170);
      func_0x0001052a64b8(auStack_158);
      func_0x0001052a64b8(auStack_168);
      func_0x0001003a8c94(&uStack_148);
      ___cxa_guard_release(0x1136b9b20);
    }
  }
  return;
}



/* Entry: 1052a420c; end: 1052a42a7;  */

undefined8 FUN_1052a420c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818d40 & 1) == 0) {
    iVar4 = 0x13818d40;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052a42a8();
      lStack_20 = lRam0000000113818d48;
      if (lRam0000000113818d48 != 0) {
        piVar1 = (int *)(lRam0000000113818d48 + 8);
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
      func_0x0001003ad9a4(0x113818d30,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818d40);
    }
  }
  return 0x113818d30;
}



/* Entry: 1052a42a8; end: 1052a42fb;  */

void FUN_1052a42a8(void)

{
  int iVar1;
  
  if ((bRam0000000113818d50 & 1) == 0) {
    iVar1 = 0x13818d50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818d48,"_djinni_interface_BufferedContentFetcherResult");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818d50);
      return;
    }
  }
  return;
}



/* Entry: 1052a42fc; end: 1052a4323;  */

void FUN_1052a42fc(void)

{
  func_0x0001052a62b8();
  func_0x0001052a67cc();
  func_0x0001052a61e8();
  func_0x0001052a66cc();
  return;
}



/* Entry: 1052a4324; end: 1052a4377;  */

void FUN_1052a4324(void)

{
  func_0x0001052a6210();
  FUN_1052a4560();
  return;
}



/* Entry: 1052a4378; end: 1052a455f;  */

undefined1 * FUN_1052a4378(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int unaff_w21;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a0;
  undefined1 auStack_98 [64];
  char cStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001052a61bc();
  if (param_3 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052a6200();
    } while (extraout_w10_00 != 0);
  }
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  FUN_1052a460c(auStack_98,&uStack_c0);
  func_0x0001052a688c();
  uVar1 = cStack_58 == '\x01';
  if ((bool)uVar1) {
    FUN_1052a46c4(auStack_98);
    func_0x000108b800ac(auStack_50);
LAB_1052a4408:
    func_0x0001052a6594();
    func_0x0001052a6550();
    lVar3 = lStack_a0;
    if (lStack_a0 == 0) goto LAB_1052a442c;
  }
  else {
    func_0x0001052a6578();
    func_0x0001052a6410();
    func_0x0001052a6550();
    func_0x0001052a6854();
    lVar3 = extraout_x8;
    if ((bool)uVar1) {
      func_0x0001052a6844();
      goto LAB_1052a4408;
    }
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
LAB_1052a442c:
  func_0x0001052a6474();
  func_0x0001052a68a4();
  func_0x0001052a6540();
  func_0x0001052a6558();
  func_0x0001052a6370();
  func_0x0001052a6500();
  func_0x0001052a6648();
  func_0x0001052a4808(auStack_98);
  do {
    func_0x0001052a67ec();
    func_0x0001052a6678();
    puVar2 = *(undefined1 **)(param_1 + 8);
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052a6164();
      if ((bool)uVar1) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052a64d0();
      func_0x0001052a6540();
      puVar2 = auStack_98;
      func_0x0001052a4808();
      uVar1 = unaff_w21 == 1;
      if ((bool)uVar1) break;
      func_0x0001052a67ec();
      func_0x0001052a6678();
      uVar1 = unaff_w21 == 1;
      if (!(bool)uVar1) {
        func_0x0001052a6518();
        func_0x0001052a67d4();
        func_0x0001052a6984();
        if (puVar2 != (undefined1 *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052a6510();
      func_0x0001052a637c();
      func_0x0001052a63cc();
      func_0x0001052a6354();
      ___cxa_end_catch();
    }
    func_0x0001052a6510();
    func_0x0001052a63d8();
    func_0x0001052a68f8();
    func_0x0001052a65a8();
    func_0x0001052a64b0();
    func_0x0001052a6680();
    func_0x0001052a6640();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052a4560; end: 1052a4583;  */

void FUN_1052a4560(long param_1)

{
  func_0x0001052a6984();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a4584; end: 1052a4587;  */

undefined8 * FUN_1052a4584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874790;
  FUN_1052a4830(param_1 + 1);
  return param_1;
}



/* Entry: 1052a4588; end: 1052a459b;  */

void FUN_1052a4588(void)

{
  FUN_1052a45e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a459c; end: 1052a45df;  */

void FUN_1052a459c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052a6564();
  if (param_3 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
  }
  FUN_1052a4378(param_1 + 8);
  func_0x0001052a6728();
  return;
}



/* Entry: 1052a45e0; end: 1052a460b;  */

undefined8 * FUN_1052a45e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874790;
  FUN_1052a4830(param_1 + 1);
  return param_1;
}



/* Entry: 1052a460c; end: 1052a46c3;  */

void FUN_1052a460c(void)

{
  code *pcVar1;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined1 auStack_40 [32];
  
  func_0x0001052a6614();
  func_0x0001052a6990();
  FUN_1052a42fc();
  func_0x0001052a696c();
  FUN_1052a4324();
  FUN_1052a4560(auStack_40);
  func_0x0001052a67ec();
  func_0x0001052a62c8();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a6954();
  if (extraout_x9 != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6584();
  FUN_1052a477c();
  func_0x0001052a6678();
  func_0x0001052a6530();
  if (extraout_x9_00 != 0) {
    func_0x0001052a63c0();
    func_0x0001052a67bc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a4690);
    (*pcVar1)();
  }
  FUN_1052a47b4();
  func_0x0001052a6520();
  func_0x0001052a677c();
  return;
}



/* Entry: 1052a46c4; end: 1052a4713;  */

long FUN_1052a46c4(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return param_1;
  }
  func_0x0001052a694c();
  func_0x0001052a659c();
  func_0x0001052a66fc();
  func_0x0001052a6338();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a4704);
  (*pcVar1)();
}



/* Entry: 1052a4714; end: 1052a4717;  */

void FUN_1052a4714(void)

{
  func_0x0001052a6874();
  FUN_1052a03ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1052a4718; end: 1052a4737;  */

void FUN_1052a4718(void)

{
  func_0x0001052a6874();
  FUN_1052a0844();
  return;
}



/* Entry: 1052a4738; end: 1052a474b;  */

void FUN_1052a4738(void)

{
  FUN_1052a4758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a474c; end: 1052a4757;  */

char * FUN_1052a474c(void)

{
  return "Bad expected access";
}


