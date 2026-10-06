/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10893cf8c; end: 10893cf9b;  */

void FUN_10893cf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010893cf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10893cf9c; end: 10893cfc7;  */

undefined8 * FUN_10893cf9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b140;
  func_0x00010893c120(param_1 + 1);
  return param_1;
}



/* Entry: 10893cfc8; end: 10893cfdb;  */

void FUN_10893cfc8(void)

{
  FUN_10893cf9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893cfdc; end: 10893cfeb;  */

void FUN_10893cfdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010893cfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10893cfec; end: 10893d00f;  */

void FUN_10893cfec(long param_1)

{
  func_0x00010893d1f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10893d010; end: 10893d1fb;  */

void FUN_10893d010(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00010893d01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10893d1fc; end: 10893d2e3;  */

long FUN_10893d1fc(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar2 = param_1;
  func_0x00010893d60c();
  lVar1 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010893d5f4();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x38) = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010893d5f4();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_5[1];
  uVar3 = *param_5;
  *(undefined8 *)(param_1 + 0x48) = param_5[1];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010893d5f4();
    } while (extraout_w10_01 != 0);
  }
  *(char *)(param_1 + 0x50) = (char)param_4;
  *(undefined1 *)(param_1 + 0x51) = 0;
  if (param_4 != 0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x40))();
  }
  return param_1;
}



/* Entry: 10893d2e4; end: 10893d32b;  */

long FUN_10893d2e4(long param_1)

{
  func_0x00010893d60c();
  FUN_10893d32c();
  func_0x000104c05304(param_1 + 0x40);
  func_0x000104c053c4(param_1 + 0x30);
  func_0x000108938314(param_1 + 0x20);
  func_0x000107c278e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10893d32c; end: 10893d377;  */

void FUN_10893d32c(long param_1)

{
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  (**(code **)(**(long **)(param_1 + 0x30) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010893d374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x40))();
  return;
}



/* Entry: 10893d378; end: 10893d383;  */

long FUN_10893d378(long param_1)

{
  func_0x00010893d60c();
  FUN_10893d32c();
  func_0x000104c05304(param_1 + 0x40);
  func_0x000104c053c4(param_1 + 0x30);
  func_0x000108938314(param_1 + 0x20);
  func_0x000107c278e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10893d384; end: 10893d397;  */

void FUN_10893d384(void)

{
  FUN_10893d2e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893d398; end: 10893d39f;  */

void FUN_10893d398(long param_1)

{
  FUN_10893d2e4(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893d3a0; end: 10893d433;  */

void FUN_10893d3a0(long param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  if ((*(char *)(param_2 + 0x68) == '\x01') && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    (**(code **)(**(long **)(param_1 + 0x30) + 0x40))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10893b5e4(auStack_80,param_2);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_80);
  func_0x000108939440(auStack_80);
  return;
}



/* Entry: 10893d434; end: 10893d49f;  */

void FUN_10893d434(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    FUN_1089403a8(auStack_48,param_2);
    (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48);
    FUN_10893d574(auStack_40);
  }
  return;
}



/* Entry: 10893d4a0; end: 10893d50f;  */

void FUN_10893d4a0(long param_1)

{
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010893d4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
  return;
}



/* Entry: 10893d510; end: 10893d56f;  */

undefined8 FUN_10893d510(void)

{
  int iVar1;
  
  if ((bRam000000011372cee8 & 1) == 0) {
    iVar1 = 0x1372cee8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x11372cee0,&UNK_10f4ed152);
      ___cxa_guard_release(0x11372cee8);
    }
  }
  return 0x11372cee0;
}



/* Entry: 10893d570; end: 10893d573;  */

undefined8 FUN_10893d570(void)

{
  int iVar1;
  
  if ((bRam000000011372cee8 & 1) == 0) {
    iVar1 = 0x1372cee8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x11372cee0,&UNK_10f4ed152);
      ___cxa_guard_release(0x11372cee8);
    }
  }
  return 0x11372cee0;
}



/* Entry: 10893d574; end: 10893d5af;  */

long * FUN_10893d574(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_10893d5b0(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10893d5b0; end: 10893d5f3;  */

void FUN_10893d5b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1] + 8;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x000107c279a4(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x28;
  }
  return;
}



/* Entry: 10893d5f4; end: 10893d61f;  */

void FUN_10893d5f4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10893d620; end: 10893dabb;  */

void FUN_10893d620(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code *pcVar8;
  undefined8 ***pppuVar9;
  ulong uVar10;
  undefined8 ***pppuVar11;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  char cStack_220;
  undefined4 auStack_218 [2];
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1d8;
  undefined4 auStack_1d0 [2];
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char cStack_190;
  undefined4 auStack_188 [2];
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined1 auStack_160 [24];
  undefined4 uStack_148;
  undefined1 uStack_140;
  uint auStack_138 [2];
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  uint auStack_b8 [2];
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  uint uStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  
  auStack_b8[0] = auStack_b8[0] & 0xffffff00;
  cStack_98 = '\0';
  if (*(char *)(param_2 + 0xc) == '\x01') {
    FUN_1089404d4(&ppuStack_e0,param_2 + 7);
    if (cStack_98 == '\x01') {
      auStack_b8[0] = (uint)ppuStack_e0;
      if ((undefined8 ***)ppuStack_b0 != (undefined8 ***)0x0) {
        FUN_10893e8c8(&ppuStack_b0);
        __ZdlPv(ppuStack_b0);
      }
      ppuStack_a8 = ppuStack_d0;
      ppuStack_b0 = ppuStack_d8;
      uStack_a0 = uStack_c8;
      ppuStack_d0 = (undefined8 ***)0x0;
      uStack_c8 = 0;
      ppuStack_d8 = (undefined8 ***)0x0;
    }
    else {
      FUN_10893e8ac(auStack_b8,&ppuStack_e0);
    }
    FUN_10893e93c(&ppuStack_d8);
  }
  ppuStack_e0 = (undefined8 **)((ulong)ppuStack_e0 & 0xffffffffffffff00);
  bStack_c0 = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_f8,param_2 + 2);
    ppuVar7 = ppuStack_e8;
    ppuVar6 = ppuStack_f0;
    ppuVar5 = ppuStack_f8;
    uStack_68 = *(uint *)(param_2 + 5);
    ppuStack_78 = ppuStack_f0;
    ppuStack_80 = ppuStack_f8;
    ppuStack_70 = ppuStack_e8;
    ppuStack_f8 = (undefined8 ***)0x0;
    ppuStack_f0 = (undefined8 ***)0x0;
    ppuStack_e8 = (undefined8 ***)0x0;
    if (bStack_c0 == 1) {
      func_0x000107c27b9c(&ppuStack_e0,&ppuStack_80);
    }
    else {
      ppuStack_d8 = ppuVar6;
      ppuStack_e0 = ppuVar5;
      ppuStack_d0 = ppuVar7;
      ppuStack_78 = (undefined8 ***)0x0;
      ppuStack_70 = (undefined8 ***)0x0;
      ppuStack_80 = (undefined8 ***)0x0;
      bStack_c0 = 1;
    }
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f8);
  }
  __ZNSt3__19to_stringEx(auStack_110,*param_2);
  ppuVar5 = ppuStack_a8;
  pppuVar11 = (undefined8 ***)ppuStack_b0;
  uVar4 = *(undefined1 *)(param_2 + 1);
  auStack_138[0] = auStack_138[0] & 0xffffff00;
  uStack_118 = 0;
  if (cStack_98 == '\x01') {
    auStack_138[0] = auStack_b8[0];
    ppuStack_90 = &ppuStack_130;
    ppuStack_128 = (undefined8 ***)0x0;
    ppuStack_120 = (undefined8 ***)0x0;
    ppuStack_130 = (undefined8 ***)0x0;
    uStack_88 = 0;
    if ((long)ppuStack_a8 - (long)ppuStack_b0 != 0) {
      uVar10 = ((long)ppuStack_a8 - (long)ppuStack_b0) / 0x28;
      if (0x666666666666666 < uVar10) {
        FUN_10893e9a4();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10893da10);
        (*pcVar8)();
      }
      pppuVar9 = &ppuStack_120;
      FUN_10893e9b0();
      ppuStack_120 = pppuVar9 + uVar10 * 5;
      ppuStack_78 = &ppuStack_60;
      ppuStack_70 = &ppuStack_58;
      uStack_68 = uStack_68 & 0xffffff00;
      ppuStack_130 = pppuVar9;
      ppuStack_128 = pppuVar9;
      ppuStack_80 = &ppuStack_120;
      ppuStack_60 = pppuVar9;
      for (; ppuStack_58 = pppuVar9, pppuVar11 != (undefined8 ***)ppuVar5; pppuVar11 = pppuVar11 + 5
          ) {
        FUN_10893ea00(pppuVar9,pppuVar11);
        pppuVar9 = (undefined8 ***)(ppuStack_58 + 5);
      }
      uStack_68 = CONCAT31(uStack_68._1_3_,1);
      FUN_10893ea28(&ppuStack_80);
      ppuStack_128 = pppuVar9;
    }
    uStack_88 = 1;
    func_0x00010893eaac(&ppuStack_90);
    uStack_118 = 1;
  }
  auStack_160[0] = 0;
  uStack_140 = 0;
  bVar1 = (bStack_c0 & 1) != 0;
  if (bVar1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_160,&ppuStack_e0);
    uStack_148 = (undefined4)uStack_c8;
  }
  uVar2 = *(undefined4 *)(param_2 + 0xd);
  uStack_140 = bVar1;
  func_0x000107c279a0(&uStack_1a8,param_2 + 0xe);
  uStack_180 = uStack_180 & 0xffffffffffffff00;
  uStack_168 = cStack_190 == '\x01';
  if ((bool)uStack_168) {
    uStack_178 = uStack_1a0;
    uStack_180 = uStack_1a8;
    uStack_170 = uStack_198;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x12);
  auStack_188[0] = uVar2;
  func_0x000107c279a0(&uStack_1f0,param_2 + 0x13);
  uStack_1c8 = uStack_1c8 & 0xffffffffffffff00;
  uStack_1b0 = cStack_1d8 == '\x01';
  if ((bool)uStack_1b0) {
    uStack_1c0 = uStack_1e8;
    uStack_1c8 = uStack_1f0;
    uStack_1b8 = uStack_1e0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f0 = 0;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x17);
  auStack_1d0[0] = uVar3;
  func_0x000107c279a0(&uStack_238,param_2 + 0x18);
  uStack_210 = uStack_210 & 0xffffffffffffff00;
  uStack_1f8 = cStack_220 == '\x01';
  if ((bool)uStack_1f8) {
    uStack_208 = uStack_230;
    uStack_210 = uStack_238;
    uStack_200 = uStack_228;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
  }
  auStack_218[0] = uVar2;
  FUN_10893eb28(param_1,auStack_110,uVar4,auStack_138,auStack_160,auStack_188,auStack_1d0,
                auStack_218);
  func_0x000107c279a4(&uStack_210);
  func_0x000107c279a4(&uStack_238);
  func_0x000107c279a4(&uStack_1c8);
  func_0x000107c279a4(&uStack_1f0);
  func_0x000107c279a4(&uStack_180);
  func_0x000107c279a4(&uStack_1a8);
  FUN_10893eb08(auStack_160);
  func_0x00010893ead8(auStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  FUN_10893eb08(&ppuStack_e0);
  func_0x00010893ead8(auStack_b8);
  return;
}



/* Entry: 10893dabc; end: 10893db1f;  */

void FUN_10893dabc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110a9b268;
  param_1[1] = &PTR_FUN_110a9b308;
  param_1[2] = &PTR_FUN_110a9b338;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
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
  return;
}



/* Entry: 10893db20; end: 10893dcaf;  */

void FUN_10893db20(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *extraout_x8;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_200 [32];
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1a8 [40];
  undefined8 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long alStack_158 [29];
  long alStack_70 [4];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  alStack_70[3] = param_3;
  uStack_50 = param_4;
  FUN_10893dcb0(alStack_70,(param_2[1] - *param_2) / 0xe0);
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0xe0) {
    FUN_10893d620(alStack_158,lVar6);
    func_0x00010893efec(alStack_70,alStack_158);
    func_0x00010893f304();
  }
  plVar7 = *(long **)(param_1 + 0x18);
  func_0x000107c27f30(alStack_158,alStack_70 + 3);
  plVar3 = alStack_158;
  plVar4 = alStack_70;
  (**(code **)(*plVar7 + 0x10))(plVar7,plVar3,plVar4,param_5,param_6);
  func_0x00010893f214();
  while( true ) {
    FUN_10893f148(alStack_70);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010893f21c();
    func_0x00010893f214();
    if ((int)param_5 != 1) break;
    func_0x00010893f254();
    func_0x00010893f1ec();
    func_0x00010893f2c4();
    func_0x00010893f274();
    plVar4 = alStack_158;
    plVar3 = (long *)0x4b0;
    (*extraout_x8)(param_1);
    func_0x00010893f214();
    ___cxa_end_catch();
  }
  plVar2 = alStack_70;
  FUN_10893f148();
  func_0x00010893f264();
  pcStack_168 = FUN_10893dcb0;
  ppuStack_1c0 = &puStack_170;
  if ((long *)((plVar2[2] - *plVar2) / 0xe8) < plVar3) {
    uStack_180 = param_6;
    lStack_178 = param_1;
    puStack_170 = &stack0xfffffffffffffff0;
    if ((long *)0x11a7b9611a7b961 < plVar3) {
      FUN_10893ecac();
      plVar5 = plVar2;
      func_0x00010893f30c();
      func_0x00010893f2bc();
      pcStack_1b8 = FUN_10893dd3c;
      plVar5 = (long *)plVar5[3];
      plStack_1e0 = plVar7;
      uStack_1d8 = param_5;
      uStack_1d0 = param_6;
      plStack_1c8 = plVar2;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x00010893f2c4();
      func_0x00010893f2cc((int)plVar4[1]);
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,auStack_200);
      func_0x00010893f26c();
      func_0x00010893f214();
      return;
    }
    FUN_10893ed38(auStack_1a8);
    func_0x00010893f354();
    func_0x00010893f30c();
  }
  return;
}



/* Entry: 10893dcb0; end: 10893dd3b;  */

void FUN_10893dcb0(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  undefined1 auStack_a0 [32];
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0xe8) < param_2) {
    if (0x11a7b9611a7b961 < param_2) {
      FUN_10893ecac();
      func_0x00010893f30c();
      func_0x00010893f2bc();
      plVar1 = (long *)param_1[3];
      (**(code **)(*param_3 + 0x10))(param_3);
      func_0x00010893f2c4();
      func_0x00010893f2cc((int)param_3[1]);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,auStack_a0);
      func_0x00010893f26c();
      func_0x00010893f214();
      return;
    }
    FUN_10893ed38(auStack_48,param_2,(param_1[1] - *param_1) / 0xe8);
    func_0x00010893f354();
    func_0x00010893f30c();
  }
  return;
}



/* Entry: 10893dd3c; end: 10893de0b;  */

void FUN_10893dd3c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined1 auStack_50 [32];
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*param_3 + 0x10))(param_3);
  func_0x00010893f2c4();
  func_0x00010893f2cc((int)param_3[1]);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,auStack_50);
  func_0x00010893f26c();
  func_0x00010893f214();
  return;
}



/* Entry: 10893de0c; end: 10893df2f;  */

void FUN_10893de0c(long param_1,undefined8 *param_2,uint param_3)

{
  code *extraout_x8;
  long *plVar1;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [24];
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)(param_2 + 1) == '\x01') {
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(auStack_48,*param_2);
    auStack_68[0] = 0;
    uStack_50 = 0;
    func_0x00010893f398();
    (*extraout_x8)(plVar1,auStack_48,param_3 ^ 1,auStack_68,auStack_74);
    func_0x00010893f2b4();
    func_0x00010893f2ac();
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_3 ^ 1);
  }
  return;
}



/* Entry: 10893df30; end: 10893dfb7;  */

void FUN_10893df30(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),2);
  return;
}



/* Entry: 10893dfb8; end: 10893dfbb;  */

void FUN_10893dfb8(void)

{
  return;
}



/* Entry: 10893dfbc; end: 10893e0a7;  */

void FUN_10893dfbc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar2 = (undefined8 *)*param_2;
  plVar1 = *(long **)(param_1 + 0x18);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3f800000;
  while (puVar2 != param_2 + 1) {
    func_0x000107c28278(&uStack_60,puVar2 + 4);
    func_0x000107c27be0();
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_60);
  func_0x000107c2826c(&uStack_60);
  return;
}



/* Entry: 10893e0a8; end: 10893e193;  */

void FUN_10893e0a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  func_0x00010893f324();
  __ZNSt3__19to_stringEx(auStack_48,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,param_2);
  func_0x00010893f2cc(*(undefined4 *)(param_2 + 0x18));
  (**(code **)(*unaff_x20 + 0x38))();
  func_0x00010893f26c();
  func_0x00010893f214();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10893e194; end: 10893e243;  */

void FUN_10893e194(void)

{
  long *unaff_x20;
  undefined1 auStack_118 [232];
  
  func_0x00010893f324();
  FUN_10893d620(auStack_118);
  (**(code **)(*unaff_x20 + 0x40))();
  func_0x00010893f304();
  return;
}



/* Entry: 10893e244; end: 10893e247;  */

void FUN_10893e244(void)

{
  return;
}



/* Entry: 10893e248; end: 10893e31f;  */

void FUN_10893e248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x00010893f324();
  FUN_1089404d4(auStack_50,param_2);
  __ZNSt3__19to_stringEx(auStack_68,param_3);
  (**(code **)(*unaff_x20 + 0x50))();
  func_0x00010893f214();
  FUN_10893e93c(auStack_48);
  return;
}



/* Entry: 10893e320; end: 10893e323;  */

void FUN_10893e320(void)

{
  return;
}



/* Entry: 10893e324; end: 10893e643;  */

void FUN_10893e324(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *unaff_x27;
  ulong uVar7;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  float fStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  plStack_98 = (long *)0x0;
  lStack_a0 = 0;
  lStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  puVar5 = (undefined8 *)*param_2;
  do {
    if (puVar5 == param_2 + 1) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x48))(*(long **)(param_1 + 0x18),&lStack_a0);
      func_0x0001057061b4(&lStack_a0);
      return;
    }
    __ZNSt3__19to_stringEx(&lStack_b8,puVar5[4]);
    plVar3 = &lStack_88;
    func_0x000107c278c4(plVar3,&lStack_b8);
    plVar6 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      uVar7 = (long)plStack_98 - 1;
      if (((ulong)plStack_98 & uVar7) == 0) {
        unaff_x27 = (long *)(uVar7 & (ulong)plVar3);
      }
      else {
        unaff_x27 = plVar3;
        if (plStack_98 <= plVar3) {
          uVar2 = 0;
          if (plStack_98 != (long *)0x0) {
            uVar2 = (ulong)plVar3 / (ulong)plStack_98;
          }
          unaff_x27 = (long *)((long)plVar3 - uVar2 * (long)plStack_98);
        }
      }
      plVar4 = *(long **)(lStack_a0 + (long)unaff_x27 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          while( true ) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) goto LAB_10893e41c;
            plVar1 = (long *)plVar4[1];
            if (plVar1 != plVar3) break;
            uVar2 = (ulong)(plVar4 + 2);
            func_0x000107c278d0(uVar2,&lStack_b8);
            if ((uVar2 & 1) != 0) goto LAB_10893e554;
          }
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar1 = (long *)((ulong)plVar1 & uVar7);
          }
          else if (plVar6 <= plVar1) {
            uVar2 = 0;
            if (plVar6 != (long *)0x0) {
              uVar2 = (ulong)plVar1 / (ulong)plVar6;
            }
            plVar1 = (long *)((long)plVar1 - uVar2 * (long)plVar6);
          }
        } while (plVar1 == unaff_x27);
      }
    }
LAB_10893e41c:
    plVar4 = (long *)0x30;
    __Znwm();
    uStack_68 = 1;
    *plVar4 = 0;
    plVar4[1] = (long)plVar3;
    plVar4[3] = lStack_b0;
    plVar4[2] = lStack_b8;
    plVar4[4] = lStack_a8;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(puVar5 + 5);
    plStack_78 = plVar4;
    pplStack_70 = &plStack_90;
    if ((plVar6 == (long *)0x0) || (fStack_80 * (float)plVar6 < (float)(lStack_88 + 1))) {
      uVar7 = 1;
      if ((long *)0x2 < plVar6) {
        uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
      }
      uVar7 = uVar7 | (long)plVar6 << 1;
      uVar2 = (ulong)((float)(lStack_88 + 1) / fStack_80);
      if (uVar7 <= uVar2) {
        uVar7 = uVar2;
      }
      func_0x0001074d9a08(&lStack_a0,uVar7);
      plVar6 = plStack_98;
      if (((ulong)plStack_98 & (long)plStack_98 - 1U) == 0) {
        unaff_x27 = (long *)((long)plStack_98 - 1U & (ulong)plVar3);
      }
      else {
        unaff_x27 = plVar3;
        if (plStack_98 <= plVar3) {
          uVar7 = 0;
          if (plStack_98 != (long *)0x0) {
            uVar7 = (ulong)plVar3 / (ulong)plStack_98;
          }
          unaff_x27 = (long *)((long)plVar3 - uVar7 * (long)plStack_98);
        }
      }
    }
    plVar3 = *(long **)(lStack_a0 + (long)unaff_x27 * 8);
    if (plVar3 == (long *)0x0) {
      *plStack_78 = (long)plStack_90;
      plStack_90 = plStack_78;
      *(long ***)(lStack_a0 + (long)unaff_x27 * 8) = &plStack_90;
      if (*plStack_78 != 0) {
        plVar3 = *(long **)(*plStack_78 + 8);
        if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
          plVar3 = (long *)((ulong)plVar3 & (long)plVar6 - 1U);
        }
        else if (plVar6 <= plVar3) {
          uVar7 = 0;
          if (plVar6 != (long *)0x0) {
            uVar7 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar7 * (long)plVar6);
        }
        *(long **)(lStack_a0 + (long)plVar3 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar3;
      *plVar3 = (long)plStack_78;
    }
    plStack_78 = (long *)0x0;
    lStack_88 = lStack_88 + 1;
    func_0x0001074d9bd4(&plStack_78);
LAB_10893e554:
    func_0x00010893f214();
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 10893e644; end: 10893e64b;  */

void FUN_10893e644(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *unaff_x27;
  ulong uVar7;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  float fStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  plStack_98 = (long *)0x0;
  lStack_a0 = 0;
  lStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  puVar5 = (undefined8 *)*param_2;
  do {
    if (puVar5 == param_2 + 1) {
      (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),&lStack_a0);
      func_0x0001057061b4(&lStack_a0);
      return;
    }
    __ZNSt3__19to_stringEx(&lStack_b8,puVar5[4]);
    plVar3 = &lStack_88;
    func_0x000107c278c4(plVar3,&lStack_b8);
    plVar6 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      uVar7 = (long)plStack_98 - 1;
      if (((ulong)plStack_98 & uVar7) == 0) {
        unaff_x27 = (long *)(uVar7 & (ulong)plVar3);
      }
      else {
        unaff_x27 = plVar3;
        if (plStack_98 <= plVar3) {
          uVar2 = 0;
          if (plStack_98 != (long *)0x0) {
            uVar2 = (ulong)plVar3 / (ulong)plStack_98;
          }
          unaff_x27 = (long *)((long)plVar3 - uVar2 * (long)plStack_98);
        }
      }
      plVar4 = *(long **)(lStack_a0 + (long)unaff_x27 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          while( true ) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) goto LAB_10893e41c;
            plVar1 = (long *)plVar4[1];
            if (plVar1 != plVar3) break;
            uVar2 = (ulong)(plVar4 + 2);
            func_0x000107c278d0(uVar2,&lStack_b8);
            if ((uVar2 & 1) != 0) goto LAB_10893e554;
          }
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar1 = (long *)((ulong)plVar1 & uVar7);
          }
          else if (plVar6 <= plVar1) {
            uVar2 = 0;
            if (plVar6 != (long *)0x0) {
              uVar2 = (ulong)plVar1 / (ulong)plVar6;
            }
            plVar1 = (long *)((long)plVar1 - uVar2 * (long)plVar6);
          }
        } while (plVar1 == unaff_x27);
      }
    }
LAB_10893e41c:
    plVar4 = (long *)0x30;
    __Znwm();
    uStack_68 = 1;
    *plVar4 = 0;
    plVar4[1] = (long)plVar3;
    plVar4[3] = lStack_b0;
    plVar4[2] = lStack_b8;
    plVar4[4] = lStack_a8;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(puVar5 + 5);
    plStack_78 = plVar4;
    pplStack_70 = &plStack_90;
    if ((plVar6 == (long *)0x0) || (fStack_80 * (float)plVar6 < (float)(lStack_88 + 1))) {
      uVar7 = 1;
      if ((long *)0x2 < plVar6) {
        uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
      }
      uVar7 = uVar7 | (long)plVar6 << 1;
      uVar2 = (ulong)((float)(lStack_88 + 1) / fStack_80);
      if (uVar7 <= uVar2) {
        uVar7 = uVar2;
      }
      func_0x0001074d9a08(&lStack_a0,uVar7);
      plVar6 = plStack_98;
      if (((ulong)plStack_98 & (long)plStack_98 - 1U) == 0) {
        unaff_x27 = (long *)((long)plStack_98 - 1U & (ulong)plVar3);
      }
      else {
        unaff_x27 = plVar3;
        if (plStack_98 <= plVar3) {
          uVar7 = 0;
          if (plStack_98 != (long *)0x0) {
            uVar7 = (ulong)plVar3 / (ulong)plStack_98;
          }
          unaff_x27 = (long *)((long)plVar3 - uVar7 * (long)plStack_98);
        }
      }
    }
    plVar3 = *(long **)(lStack_a0 + (long)unaff_x27 * 8);
    if (plVar3 == (long *)0x0) {
      *plStack_78 = (long)plStack_90;
      plStack_90 = plStack_78;
      *(long ***)(lStack_a0 + (long)unaff_x27 * 8) = &plStack_90;
      if (*plStack_78 != 0) {
        plVar3 = *(long **)(*plStack_78 + 8);
        if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
          plVar3 = (long *)((ulong)plVar3 & (long)plVar6 - 1U);
        }
        else if (plVar6 <= plVar3) {
          uVar7 = 0;
          if (plVar6 != (long *)0x0) {
            uVar7 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar7 * (long)plVar6);
        }
        *(long **)(lStack_a0 + (long)plVar3 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar3;
      *plVar3 = (long)plStack_78;
    }
    plStack_78 = (long *)0x0;
    lStack_88 = lStack_88 + 1;
    func_0x0001074d9bd4(&plStack_78);
LAB_10893e554:
    func_0x00010893f214();
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 10893e64c; end: 10893e71b;  */

void FUN_10893e64c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined1 auStack_68 [56];
  
  func_0x00010893f324();
  func_0x00010893f384();
  func_0x000107c27f70(auStack_68,param_3);
  (**(code **)(*unaff_x20 + 0x28))();
  func_0x00010893f2b4();
  func_0x00010893f2ac();
  return;
}



/* Entry: 10893e71c; end: 10893e723;  */

void FUN_10893e71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined1 auStack_68 [56];
  
  func_0x00010893f324(param_1 + -8);
  func_0x00010893f384();
  func_0x000107c27f70(auStack_68,param_3);
  (**(code **)(*unaff_x20 + 0x28))();
  func_0x00010893f2b4();
  func_0x00010893f2ac();
  return;
}



/* Entry: 10893e724; end: 10893e7db;  */

void FUN_10893e724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  undefined1 auStack_68 [56];
  
  func_0x00010893f324();
  func_0x00010893f384();
  func_0x000107c27f70(auStack_68,param_3);
  func_0x00010893f398();
  (*extraout_x8)();
  func_0x00010893f2b4();
  func_0x00010893f2ac();
  return;
}



/* Entry: 10893e7dc; end: 10893e7e3;  */

void FUN_10893e7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  undefined1 auStack_68 [56];
  
  func_0x00010893f324(param_1 + -8);
  func_0x00010893f384();
  func_0x000107c27f70(auStack_68,param_3);
  func_0x00010893f398();
  (*extraout_x8)();
  func_0x00010893f2b4();
  func_0x00010893f2ac();
  return;
}



/* Entry: 10893e7e4; end: 10893e86f;  */

void FUN_10893e7e4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10893e870; end: 10893e877;  */

void FUN_10893e870(void)

{
  return;
}



/* Entry: 10893e878; end: 10893e88b;  */

void FUN_10893e878(void)

{
  FUN_108939528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893e88c; end: 10893e8ab;  */

long FUN_10893e88c(long param_1)

{
  func_0x000108938244(param_1 + 0x20);
  func_0x0001089383c8(param_1 + 0x10);
  return param_1 + -8;
}



/* Entry: 10893e8ac; end: 10893e8c7;  */

void FUN_10893e8ac(long param_1)

{
  FUN_10893e910();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10893e8c8; end: 10893e8cf;  */

void FUN_10893e8c8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893f330(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    func_0x000107c279c4(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893e8d0; end: 10893e90f;  */

void FUN_10893e8d0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893f330();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    func_0x000107c279c4(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893e910; end: 10893e93b;  */

void FUN_10893e910(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 10893e93c; end: 10893e9a3;  */

undefined8 FUN_10893e93c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010893e968(&uStack_28);
  return param_1;
}



/* Entry: 10893e9a4; end: 10893e9af;  */

void FUN_10893e9a4(void)

{
  func_0x00010893f348();
  FUN_10893e9d4();
  return;
}



/* Entry: 10893e9b0; end: 10893e9d3;  */

void FUN_10893e9b0(void)

{
  FUN_10893e9d4();
  return;
}



/* Entry: 10893e9d4; end: 10893e9ff;  */

undefined4 * FUN_10893e9d4(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 < (undefined4 *)0x666666666666667) {
    param_2 = (undefined4 *)((long)param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  func_0x000104bd35f4();
  *param_1 = *param_2;
  func_0x000104be0ccc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10893ea00; end: 10893ea27;  */

undefined4 * FUN_10893ea00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000104be0ccc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10893ea28; end: 10893ea57;  */

long FUN_10893ea28(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10893ea58(param_1);
  }
  return param_1;
}



/* Entry: 10893ea58; end: 10893ea77;  */

void FUN_10893ea58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    func_0x000107c279c4(lVar1 + -0x20);
  }
  return;
}



/* Entry: 10893ea78; end: 10893eb07;  */

void FUN_10893ea78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x28) {
    func_0x000107c279c4(param_3 + -0x20);
  }
  return;
}



/* Entry: 10893eb08; end: 10893eb27;  */

void FUN_10893eb08(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10893eb28; end: 10893ebab;  */

long FUN_10893eb28(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010893f290();
  *(undefined1 *)(lVar1 + 0x18) = param_3;
  FUN_10893ebac(lVar1 + 0x20,param_4);
  func_0x00010893ebec(param_1 + 0x48,param_5);
  func_0x00010893ec20(param_1 + 0x70,param_6);
  func_0x00010893ec20(param_1 + 0x98,param_7);
  func_0x00010893ec20(param_1 + 0xc0,param_8);
  return param_1;
}



/* Entry: 10893ebac; end: 10893ebd7;  */

undefined1 * FUN_10893ebac(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_10893ebd8();
  return param_1;
}



/* Entry: 10893ebd8; end: 10893ec63;  */

void FUN_10893ebd8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10893e910();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10893ec64; end: 10893ecab;  */

void FUN_10893ec64(long param_1)

{
  func_0x000107c279a4(param_1 + 200);
  func_0x000107c279a4(param_1 + 0xa0);
  func_0x000107c279a4(param_1 + 0x78);
  FUN_10893eb08(param_1 + 0x48);
  func_0x00010893ead8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10893ecac; end: 10893ecb7;  */

void FUN_10893ecac(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010893f348();
  func_0x00010893f330();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xe8) * 0xe8;
  FUN_10893edd8(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10893ecb8; end: 10893ed37;  */

void FUN_10893ecb8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010893f330();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xe8) * 0xe8;
  FUN_10893edd8(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10893ed38; end: 10893eda7;  */

long * FUN_10893ed38(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010893ed84();
  }
  lVar1 = param_4 + param_3 * 0xe8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xe8;
  return param_1;
}



/* Entry: 10893eda8; end: 10893edd7;  */

void FUN_10893eda8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0xe8) {
    func_0x00010893eea0(param_4,uVar1);
    param_4 = lStack_48 + 0xe8;
  }
  uStack_58 = 1;
  func_0x00010893ee70(param_1,param_2,param_3);
  FUN_10893ef04(&uStack_70);
  return;
}



/* Entry: 10893edd8; end: 10893ee6f;  */

void FUN_10893edd8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xe8) {
    func_0x00010893eea0(param_4,lVar1);
    param_4 = lStack_38 + 0xe8;
  }
  uStack_48 = 1;
  func_0x00010893ee70(param_1,param_2,param_3);
  FUN_10893ef04(&uStack_60);
  return;
}



/* Entry: 10893ee70; end: 10893ef03;  */

void FUN_10893ee70(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xe8) {
    FUN_10893ec64();
  }
  return;
}



/* Entry: 10893ef04; end: 10893ef33;  */

long FUN_10893ef04(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10893ef34(param_1);
  }
  return param_1;
}



/* Entry: 10893ef34; end: 10893ef53;  */

void FUN_10893ef34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xe8;
    FUN_10893ec64();
  }
  return;
}



/* Entry: 10893ef54; end: 10893efaf;  */

void FUN_10893ef54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xe8;
    FUN_10893ec64();
  }
  return;
}



/* Entry: 10893efb0; end: 10893efb7;  */

void FUN_10893efb0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893f330(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xe8;
    FUN_10893ec64();
  }
  return;
}



/* Entry: 10893efb8; end: 10893f04f;  */

void FUN_10893efb8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893f330();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xe8;
    FUN_10893ec64();
  }
  return;
}



/* Entry: 10893f050; end: 10893f0e7;  */

long FUN_10893f050(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10893f0e8(param_1,(param_1[1] - *param_1) / 0xe8 + 1);
  FUN_10893ed38(auStack_58,plVar1,(param_1[1] - *param_1) / 0xe8,param_1 + 2);
  func_0x00010893eea0(lStack_48,param_2);
  lStack_48 = lStack_48 + 0xe8;
  func_0x00010893f354();
  lVar2 = param_1[1];
  func_0x00010893f30c();
  return lVar2;
}



/* Entry: 10893f0e8; end: 10893f147;  */

long * FUN_10893f0e8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0x11a7b9611a7b961 < param_2) {
    FUN_10893ecac();
    plStack_38 = param_1;
    func_0x00010893f174(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0xe8;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x8d3dcb08d3dcaf < uVar1) {
    plVar2 = (long *)0x11a7b9611a7b961;
  }
  return plVar2;
}



/* Entry: 10893f148; end: 10893f1af;  */

undefined8 FUN_10893f148(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010893f174(&uStack_28);
  return param_1;
}



/* Entry: 10893f1b0; end: 10893f1b7;  */

void FUN_10893f1b0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893f330(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xe8;
    FUN_10893ec64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893f1b8; end: 10893f1eb;  */

void FUN_10893f1b8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010893f330();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xe8;
    FUN_10893ec64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10893f1ec; end: 10893f3ab;  */

void FUN_10893f1ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010893f1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10893f3ac; end: 10893f4b7;  */

void FUN_10893f3ac(undefined8 *param_1,undefined8 *param_2)

{
  code *extraout_x8;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_40 [2];
  
  (**(code **)(*(long *)*param_2 + 0x50))(auStack_40);
  func_0x000107c278b8(&uStack_60,&UNK_10f4ed172);
  func_0x000107c278b8(auStack_78,&UNK_10f4ed17d);
  func_0x000108940298();
  (*extraout_x8)(auStack_40[0],1,&uStack_60,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  FUN_1089382f0(auStack_40);
  func_0x00010893f4dc(auStack_78,param_2);
  func_0x00010893f4b8(&uStack_60,auStack_78);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_1089401ec(&uStack_60);
  FUN_10893fd64(auStack_78);
  return;
}



/* Entry: 10893f4b8; end: 10893f4ff;  */

void FUN_10893f4b8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10893fd88(&uStack_11,param_1);
  return;
}



/* Entry: 10893f500; end: 10893f56f;  */

undefined1 * FUN_10893f500(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001089402b0();
  FUN_10893f570(auStack_40,1);
  FUN_10893f5c4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010893fd54();
  func_0x0001089402dc();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010893fd54();
  func_0x000108940280();
  *(undefined8 *)(puVar3 + 8) = unaff_x20;
  puVar2 = puVar3;
  FUN_10893f598();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10893f570; end: 10893f597;  */

long FUN_10893f570(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10893f598();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10893f598; end: 10893f5c3;  */

void FUN_10893f598(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104bd35f4();
    *param_1 = &PTR_DAT_110a9b3f0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = &PTR_DAT_110a9b440;
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[5] = param_2[1];
    param_1[4] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000108940228();
      } while (extraout_w10 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
  return;
}



/* Entry: 10893f5c4; end: 10893f607;  */

void FUN_10893f5c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110a9b3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110a9b440;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108940228();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10893f608; end: 10893f61b;  */

void FUN_10893f608(void)

{
  FUN_10893fd48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893f61c; end: 10893f627;  */

void FUN_10893f61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108940268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10893f628; end: 10893f63b;  */

void FUN_10893f628(void)

{
  FUN_10893fb70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893f63c; end: 10893fb6f;  */

void FUN_10893f63c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  long *aplStack_d8 [2];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long *plStack_98;
  undefined8 *puStack_90;
  long alStack_80 [2];
  long *plStack_70;
  undefined8 *puStack_68;
  
  puVar2 = (undefined8 *)0x1f8;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a9b490;
  plVar1 = puVar2 + 3;
  func_0x000104c01bf4();
  plStack_70 = plVar1;
  puStack_68 = puVar2;
  func_0x000108940248();
  (**(code **)(extraout_x8 + 0x10))(alStack_80);
  if (alStack_80[0] != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,alStack_80);
  }
  func_0x000108940248();
  (**(code **)(extraout_x8_00 + 0x30))();
  func_0x000108940288();
  func_0x000108940278();
  func_0x000108940298();
  func_0x000108940210();
  func_0x000108940238();
  func_0x000108940240();
  func_0x000108940288();
  func_0x000108940278();
  func_0x000108940298();
  func_0x000108940210();
  func_0x000108940238();
  func_0x000108940240();
  func_0x000108940288();
  func_0x000108940278();
  func_0x000108940298();
  func_0x000108940210();
  func_0x000108940238();
  func_0x000108940240();
  func_0x000108940288();
  func_0x000108940278();
  func_0x000108940298();
  func_0x000108940210();
  func_0x000108940238();
  func_0x000108940240();
  func_0x000108940288();
  func_0x000108940278();
  func_0x000108940298();
  func_0x000108940210();
  func_0x000108940238();
  func_0x000108940240();
  func_0x000108940248();
  (**(code **)(extraout_x8_01 + 0x38))(auStack_c8);
  func_0x000108940278();
  (**(code **)(*plVar1 + 0x10))(plVar1,&plStack_98,auStack_b0);
  func_0x000108940238();
  func_0x000108940248();
  (**(code **)(extraout_x8_02 + 0x20))(aplStack_d8);
  if (aplStack_d8[0] != (long *)0x0) {
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110a9b4e0;
    do {
      func_0x0001089402cc();
    } while (extraout_w9 != 0);
    puVar3[3] = &PTR_DAT_110a9b530;
    puVar3[4] = plVar1;
    puVar3[5] = puVar2;
    plStack_98 = (long *)0x0;
    puStack_90 = (undefined8 *)0x0;
    func_0x00010893fd24(&plStack_98);
    uStack_100 = 0;
    lStack_f8 = 0;
    puStack_f0 = puVar3 + 3;
    puStack_e8 = puVar3;
    (**(code **)(*aplStack_d8[0] + 0x10))(aplStack_d8[0],&puStack_f0);
    func_0x0001089366f8(&puStack_f0);
    FUN_10893fc60(&uStack_100);
  }
  func_0x000108940248();
  (**(code **)(extraout_x8_03 + 0x28))(&puStack_f0);
  func_0x000108940248();
  (**(code **)(extraout_x8_04 + 0x18))(&uStack_100);
  func_0x000108940248();
  (**(code **)(extraout_x8_05 + 0x48))(&uStack_110);
  func_0x000108940248();
  (**(code **)(extraout_x8_06 + 0x40))(&uStack_120);
  func_0x000108940248();
  (**(code **)(extraout_x8_07 + 0x50))(&uStack_130);
  puVar3 = (undefined8 *)0x90;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110a9b588;
  plStack_98 = plVar1;
  puStack_90 = puVar2;
  do {
    func_0x0001089402cc();
  } while (extraout_w9_00 != 0);
  do {
    func_0x0001089402cc();
  } while (extraout_w9_01 != 0);
  puVar3[6] = puStack_e8;
  puVar3[5] = puStack_f0;
  puVar3[3] = plVar1;
  puVar3[4] = puVar2;
  if (puStack_e8 != (undefined8 *)0x0) {
    do {
      func_0x000108940228();
    } while (extraout_w10 != 0);
  }
  puVar3[8] = lStack_f8;
  puVar3[7] = uStack_100;
  if (lStack_f8 != 0) {
    do {
      func_0x000108940228();
    } while (extraout_w10_00 != 0);
  }
  puVar3[10] = lStack_108;
  puVar3[9] = uStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x000108940228();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 0xb,auStack_c8);
  puVar3[0xf] = lStack_118;
  puVar3[0xe] = uStack_120;
  if (lStack_118 != 0) {
    do {
      func_0x000108940228();
    } while (extraout_w10_02 != 0);
  }
  puVar3[0x11] = lStack_128;
  puVar3[0x10] = uStack_130;
  if (lStack_128 != 0) {
    do {
      func_0x000108940228();
    } while (extraout_w10_03 != 0);
  }
  func_0x000108938314(&plStack_98);
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  func_0x0001089382f0(&uStack_130);
  func_0x000108938244(&uStack_120);
  func_0x0001089383a4(&uStack_110);
  func_0x000108938338(&uStack_100);
  func_0x000108937570(&puStack_f0);
  func_0x0001089366d0(aplStack_d8);
  func_0x00010893fcfc(auStack_c8);
  func_0x000104c04a20(alStack_80);
  func_0x00010893fd24(&plStack_70);
  return;
}



/* Entry: 10893fb70; end: 10893fb9b;  */

undefined8 * FUN_10893fb70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9b440;
  func_0x0001089361a0(param_1 + 1);
  return param_1;
}



/* Entry: 10893fb9c; end: 10893fb9f;  */

void FUN_10893fb9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10893fba0; end: 10893fbb3;  */

void FUN_10893fba0(void)

{
  func_0x00010893fbc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893fbb4; end: 10893fbd3;  */

void FUN_10893fbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010893fbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x48))();
  return;
}



/* Entry: 10893fbd4; end: 10893fbe7;  */

void FUN_10893fbd4(void)

{
  FUN_10893fc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893fbe8; end: 10893fbf3;  */

void FUN_10893fbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108940268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10893fbf4; end: 10893fc07;  */

void FUN_10893fbf4(void)

{
  FUN_10893fc28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893fc08; end: 10893fc27;  */

void FUN_10893fc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010893fc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}



/* Entry: 10893fc28; end: 10893fc53;  */

undefined8 * FUN_10893fc28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9b530;
  func_0x00010893fd24(param_1 + 1);
  return param_1;
}



/* Entry: 10893fc54; end: 10893fc5f;  */

void FUN_10893fc54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9b4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10893fc60; end: 10893fc83;  */

void FUN_10893fc60(long param_1)

{
  func_0x0001089402a4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10893fc84; end: 10893fc87;  */

void FUN_10893fc84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b588;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


