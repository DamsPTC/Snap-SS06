/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107368a00; end: 107368a43;  */

undefined ** FUN_107368a00(void)

{
  return &PTR_DAT_1109a5ff0;
}



/* Entry: 107368a44; end: 107368a57;  */

void FUN_107368a44(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010736ae64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010736afd4();
  func_0x00010726e43c();
  return;
}



/* Entry: 107368a58; end: 107368a77;  */

void FUN_107368a58(void)

{
  func_0x00010736afd4();
  func_0x00010726e43c();
  return;
}



/* Entry: 107368a78; end: 107368a8b;  */

void FUN_107368a78(void)

{
  FUN_107368a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107368a8c; end: 107368abf;  */

undefined8 FUN_107368a8c(undefined8 param_1)

{
  func_0x00010736aa8c();
  FUN_107368b8c();
  return param_1;
}



/* Entry: 107368ac0; end: 107368ae3;  */

void FUN_107368ac0(long param_1,undefined8 param_2)

{
  func_0x00010736afd4(param_2,param_1 + 8);
  func_0x0001072729e0();
  return;
}



/* Entry: 107368ae4; end: 107368b57;  */

void FUN_107368ae4(long param_1,undefined8 *param_2)

{
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = (long *)*param_2;
  if (*(int *)(param_2 + 2) == 0) {
    func_0x0001072729a4(auStack_30,param_1 + 8);
    func_0x00010736af98(*(undefined8 *)(*plVar1 + 0x18));
    (*extraout_x8_00)();
  }
  else {
    func_0x0001072729a4(auStack_30,param_1 + 8);
    func_0x00010736af98(*(undefined8 *)(*plVar1 + 0x18));
    (*extraout_x8)();
  }
  func_0x00010726dd08(auStack_30);
  return;
}



/* Entry: 107368b58; end: 107368b7f;  */

void FUN_107368b58(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a6070);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107368b80; end: 107368b8b;  */

undefined ** FUN_107368b80(void)

{
  return &PTR_DAT_1109a6070;
}



/* Entry: 107368b8c; end: 107368bab;  */

void FUN_107368b8c(void)

{
  func_0x00010736afd4();
  func_0x0001072729e0();
  return;
}



/* Entry: 107368bac; end: 107368bef;  */

void FUN_107368bac(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010736afc8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010736a764();
    func_0x00010736aa44();
  }
  else {
    func_0x00010736ae00();
  }
  return;
}



/* Entry: 107368bf0; end: 107368c53;  */

void FUN_107368bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined **ppuStack_30;
  int iStack_28;
  
  func_0x00010736a8c4();
  func_0x000107312488(param_2);
  iStack_28 = *(int *)(unaff_x20 + 8);
  if (iStack_28 == 2) {
    *unaff_x19 = 0;
  }
  else {
    ppuStack_30 = &PTR_DAT_11099f6f8;
    func_0x00010730f6d0(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
  }
  return;
}



/* Entry: 107368c54; end: 10736911f;  */

void FUN_107368c54(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x20;
  undefined8 *puVar9;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char cStack_1b8;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined4 uStack_190;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  long lStack_168;
  undefined4 uStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long alStack_100 [14];
  undefined1 auStack_90 [24];
  long *plStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  func_0x00010736a600();
  lVar2 = *param_1;
  uStack_68 = extraout_x8;
  func_0x00010bccbc98(alStack_100,*(undefined8 *)(lVar2 + 0x48),param_1[1],param_1[2]);
  uStack_170 = *(undefined8 *)(alStack_100[0] + 8);
  lStack_168 = *(long *)(alStack_100[0] + 0x10);
  if (lStack_168 != 0) {
    do {
      func_0x00010736abc4();
    } while (extraout_w10 != 0);
  }
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x30))(&uStack_1d0);
    func_0x00010730f790(&uStack_170);
    func_0x00010bccbe4c(alStack_100);
    func_0x00010bccbdb4(alStack_100);
    __ZNSt3__15mutex4lockEv(0x1131ad2a8);
    if (lRam00000001138220c0 != lRam00000001138220c8) {
      piVar1 = (int *)(*(long *)(lRam00000001138220c8 + -8) + 0x28);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    __ZNSt3__15mutex6unlockEv(0x1131ad2a8);
    puVar9 = *(undefined8 **)(lVar2 + 0x30);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    FUN_107369120(auStack_90,param_5);
    if (lVar2 != 0) {
      uStack_170 = CONCAT44(uStack_170._4_4_,0x169);
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      ppuStack_150 = &PTR_DAT_110996720;
      uStack_148 = 0;
      uStack_130 = 0x169;
      uStack_128 = 0;
      uStack_124 = 1;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_188,&UNK_10de54cd0);
      puVar7 = &uStack_170;
      func_0x00010726e300(puVar7,"result",auStack_188);
      func_0x00010730f7b8();
      func_0x00010726e6c0(alStack_100,puVar7);
      func_0x00010736acc4();
      func_0x000107262330(&uStack_170);
      if ((bStack_70 & 1) != 0) {
        if (plStack_78 == (long *)0x0) {
          func_0x000104bfeb48();
          goto LAB_107368ed4;
        }
        (**(code **)(*plStack_78 + 0x30))(plStack_78,&uStack_1d0,alStack_100);
      }
      auStack_198[0] = 1;
      uStack_190 = 0;
      uStack_1a8 = *puVar9;
      uStack_1a0 = 3;
      FUN_10743fa9c(puVar9,alStack_100,auStack_198,&uStack_1a8,7);
      func_0x000107262330(alStack_100);
    }
    FUN_107365cbc(auStack_90);
    uStack_1f0 = uStack_1f0 & 0xffffffffffffff00;
    uVar6 = cStack_1b8 == '\x01';
    if ((bool)uVar6) {
      uStack_1e8 = uStack_1c8;
      uStack_1f0 = uStack_1d0;
      uStack_1e0 = uStack_1c0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d0 = 0;
    }
    plVar8 = *(long **)(param_3 + 0x18);
    uStack_1d8 = uVar6;
    if (plVar8 == (long *)0x0) {
      func_0x000104bfeb48();
      goto LAB_107368ed4;
    }
    (**(code **)(*plVar8 + 0x30))(plVar8,&uStack_1f0);
    FUN_10736917c(&uStack_1f0);
    func_0x00010736aee4();
    func_0x00010736a534(uStack_68);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bfeb48();
LAB_107368ed4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x107368ed8);
  (*pcVar5)();
}



/* Entry: 107369120; end: 10736917b;  */

void FUN_107369120(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  code *extraout_x8;
  long unaff_x19;
  
  func_0x00010736ae24();
  if (!(bool)in_ZR) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if (lVar1 == param_2) {
      func_0x00010736a764();
      func_0x00010736aa44();
      goto LAB_10736915c;
    }
    func_0x00010736ac60();
    (*extraout_x8)();
  }
  *(long *)(unaff_x19 + 0x18) = lVar1;
LAB_10736915c:
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  return;
}



/* Entry: 10736917c; end: 10736919b;  */

void FUN_10736917c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10736919c();
  }
  return;
}



/* Entry: 10736919c; end: 1073691cb;  */

undefined8 FUN_10736919c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1073691cc(&uStack_28);
  return param_1;
}



/* Entry: 1073691cc; end: 107369227;  */

void FUN_1073691cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x48;
      FUN_107369228();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 107369228; end: 107369257;  */

void FUN_107369228(long param_1)

{
  func_0x000100100fec(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 107369258; end: 107369353;  */

undefined8 * FUN_107369258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  FUN_107369120(param_1 + 3,param_2 + 3);
  param_1[8] = param_2[8];
  puVar1 = (undefined8 *)param_2[0xc];
  if (puVar1 == (undefined8 *)0x0) {
LAB_1073692b0:
    param_1[0xc] = puVar1;
  }
  else {
    if (puVar1 != param_2 + 9) {
      func_0x00010736ac60();
      (*extraout_x8)();
      goto LAB_1073692b0;
    }
    param_1[0xc] = param_1 + 9;
    func_0x00010736aa2c(param_2[0xc]);
    (*extraout_x8_00)();
  }
  puVar1 = (undefined8 *)param_2[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1 == param_2 + 0xd) {
      param_1[0x10] = param_1 + 0xd;
      func_0x00010736aa2c(param_2[0x10]);
      (*extraout_x8_02)();
      goto LAB_107369308;
    }
    func_0x00010736ac60();
    (*extraout_x8_01)();
  }
  param_1[0x10] = puVar1;
LAB_107369308:
  func_0x00010730faec(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



/* Entry: 107369354; end: 1073693a7;  */

void FUN_107369354(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010736ae24();
  if ((bool)in_ZR) {
    if (*(long *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
    }
    else if (*(long *)(param_2 + 0x18) == param_2) {
      func_0x00010736a764();
      func_0x00010736aa44();
    }
    else {
      func_0x00010736ae00();
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  return;
}



/* Entry: 1073693a8; end: 1073693eb;  */

void FUN_1073693a8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010736afc8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010736a764();
    func_0x00010736aa44();
  }
  else {
    func_0x00010736ae00();
  }
  return;
}



/* Entry: 1073693ec; end: 10736942f;  */

void FUN_1073693ec(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010736afc8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010736a764();
    func_0x00010736aa44();
  }
  else {
    func_0x00010736ae00();
  }
  return;
}



/* Entry: 107369430; end: 107369433;  */

undefined8 * FUN_107369430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6090;
  FUN_1073695fc(param_1 + 1);
  return param_1;
}



/* Entry: 107369434; end: 107369447;  */

void FUN_107369434(void)

{
  FUN_107369590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107369448; end: 10736947f;  */

undefined8 FUN_107369448(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd0;
  __Znwm(0xd0);
  FUN_1073695bc();
  return uVar1;
}



/* Entry: 107369480; end: 1073694a3;  */

void FUN_107369480(long param_1,undefined8 param_2)

{
  func_0x00010736a8c4(param_2,param_1 + 8);
  func_0x00010736aa54(&PTR_FUN_1109a6090);
  func_0x00010730fc30();
  func_0x00010736af30();
  FUN_107369258();
  return;
}



/* Entry: 1073694a4; end: 10736955b;  */

void FUN_1073694a4(long param_1)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010730fc58(auStack_40,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x00010730fcbc();
  if (iVar1 != 0) {
    FUN_107368bf0(&lStack_28,*(undefined8 *)(param_1 + 0x60));
    uStack_30 = 0;
    __ZNSt13exception_ptrD1Ev(&uStack_30);
    if (lStack_28 == 0) {
      FUN_107368c54(param_1 + 0x20,param_1 + 0x68,param_1 + 0x88,param_1 + 0xa8,param_1 + 0x38);
    }
    else if (*(char *)(param_1 + 200) == '\x01') {
      func_0x00010730f778(param_1 + 0xa8);
      func_0x00010730fa34();
    }
    __ZNSt13exception_ptrD1Ev(&lStack_28);
  }
  func_0x00010736aa18();
  return;
}



/* Entry: 10736955c; end: 107369583;  */

void FUN_10736955c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a60f0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107369584; end: 10736958f;  */

undefined ** FUN_107369584(void)

{
  return &PTR_DAT_1109a60f0;
}



/* Entry: 107369590; end: 1073695bb;  */

undefined8 * FUN_107369590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6090;
  FUN_1073695fc(param_1 + 1);
  return param_1;
}



/* Entry: 1073695bc; end: 1073695fb;  */

void FUN_1073695bc(void)

{
  func_0x00010736a8c4();
  func_0x00010736aa54(&PTR_FUN_1109a6090);
  func_0x00010730fc30();
  func_0x00010736af30();
  FUN_107369258();
  return;
}



/* Entry: 1073695fc; end: 107369657;  */

long FUN_1073695fc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010736ae18();
  func_0x00010736961c();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107369658; end: 10736965f;  */

void FUN_107369658(void)

{
  return;
}



/* Entry: 107369660; end: 10736968b;  */

void FUN_107369660(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010736af04();
  *param_1 = &PTR_FUN_1109a6110;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10736968c; end: 1073696a7;  */

void FUN_10736968c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a6110;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073696a8; end: 107369a0b;  */

void FUN_1073696a8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong *extraout_x8;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined1 auStack_2c0 [8];
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [72];
  char cStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_200 [88];
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [72];
  undefined1 uStack_158;
  undefined1 auStack_150 [88];
  long alStack_f8 [10];
  byte bStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [72];
  byte bStack_50;
  ulong *puStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [32];
  
  func_0x00010736aff4();
  FUN_1073a6a58(auStack_2c0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0x10));
  uStack_1a8 = 0;
  auStack_1a0[0] = 0;
  uStack_158 = 0;
  if (cStack_268 == '\0') {
    uVar10 = 0;
  }
  else {
    FUN_107369acc(auStack_1a0,auStack_2b0);
    FUN_107369b3c(auStack_2b0);
    uVar10 = uStack_1a8;
  }
  uStack_1a8 = uStack_2b8;
  uStack_2b8 = uVar10;
  FUN_107369a40(auStack_150,&uStack_1a8);
  uStack_210 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  FUN_107369a40(auStack_200,&uStack_260);
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2e0 = 0;
  FUN_107369ce0(&lStack_a0,auStack_150);
  FUN_107369ce0(alStack_f8,auStack_200);
  puStack_48 = &uStack_2e0;
  uStack_40 = 0;
  do {
    if ((((bStack_50 & 1) == 0) && ((bStack_a8 & 1) == 0)) || (lStack_a0 == alStack_f8[0])) {
      uStack_40 = 1;
      FUN_107369cb4(&puStack_48);
      func_0x00010736a9ec(alStack_f8);
      FUN_107369d88(auStack_98);
      func_0x00010736a9ec(auStack_200);
      func_0x00010736ae9c();
      func_0x00010736a9ec(auStack_150);
      func_0x00010736a9ec(&uStack_1a8);
      FUN_107369da8(auStack_2c0);
      extraout_x8[1] = uStack_2d8;
      *extraout_x8 = uStack_2e0;
      extraout_x8[2] = uStack_2d0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      *(undefined1 *)(extraout_x8 + 3) = 1;
      FUN_10736919c(&uStack_2e0);
      return;
    }
    if ((bStack_50 & 1) == 0) {
      uVar10 = *(undefined8 *)(lStack_a0 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_38,lStack_a0 + 0x58);
      func_0x0001004c3cd0(auStack_20,&UNK_10f2e0451,auStack_38);
      func_0x00010bcc7444(uVar10,0x65,auStack_20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    }
    if (uStack_2d8 < uStack_2d0) {
      FUN_107369ae8(uStack_2d8,auStack_98);
      uVar9 = uStack_2d8 + 0x48;
    }
    else {
      lVar7 = uStack_2d8 - uStack_2e0;
      uVar9 = lVar7 / 0x48 + 1;
      if (0x38e38e38e38e38e < uVar9) {
        FUN_107369b98();
LAB_10736998c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x107369990);
        (*pcVar3)();
      }
      uVar5 = (long)(uStack_2d0 - uStack_2e0) / 0x48;
      uVar6 = uVar5 * 2;
      if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
        uVar6 = uVar9;
      }
      if (0x1c71c71c71c71c6 < uVar5) {
        uVar6 = 0x38e38e38e38e38e;
      }
      if (uVar6 == 0) {
        lVar4 = 0;
      }
      else {
        if (0x38e38e38e38e38e < uVar6) {
          func_0x000104bd35f4();
          goto LAB_10736998c;
        }
        lVar4 = uVar6 * 0x48;
        __Znwm();
      }
      lVar7 = lVar4 + lVar7;
      FUN_107369ae8(lVar7,auStack_98);
      uVar2 = uStack_2d8;
      uVar11 = uStack_2e0;
      uVar8 = lVar7 + ((long)(uStack_2d8 - uStack_2e0) / -0x48) * 0x48;
      uVar5 = uVar8;
      for (uVar9 = uStack_2e0; uVar9 != uVar2; uVar9 = uVar9 + 0x48) {
        FUN_107369ae8(uVar5,uVar9);
        uVar5 = uVar5 + 0x48;
      }
      for (; uVar11 != uVar2; uVar11 = uVar11 + 0x48) {
        FUN_107369228(uVar11);
      }
      uVar9 = lVar7 + 0x48;
      uStack_2d0 = lVar4 + uVar6 * 0x48;
      bVar1 = uStack_2e0 != 0;
      uStack_2e0 = uVar8;
      if (bVar1) {
        uStack_2d8 = uVar9;
        __ZdlPv();
      }
    }
    uStack_2d8 = uVar9;
    FUN_107369ba4(&lStack_a0);
  } while( true );
}



/* Entry: 107369a0c; end: 107369a33;  */

void FUN_107369a0c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a6180);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107369a34; end: 107369a3f;  */

undefined ** FUN_107369a34(void)

{
  return &PTR_DAT_1109a6180;
}



/* Entry: 107369a40; end: 107369a83;  */

void FUN_107369a40(undefined8 param_1)

{
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [80];
  
  FUN_107369a84(auStack_78);
  FUN_107369a84(param_1,auStack_78);
  FUN_107369d88(auStack_70);
  return;
}



/* Entry: 107369a84; end: 107369acb;  */

undefined8 * FUN_107369a84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    FUN_107369acc(param_1 + 1,param_2 + 1);
  }
  return param_1;
}



/* Entry: 107369acc; end: 107369ae7;  */

void FUN_107369acc(long param_1)

{
  FUN_107369ae8();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 107369ae8; end: 107369b3b;  */

void FUN_107369ae8(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 107369b3c; end: 107369b5f;  */

void FUN_107369b3c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_107369228();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 107369b60; end: 107369b97;  */

void FUN_107369b60(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736a934();
  func_0x000100066230();
  func_0x000100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x00010065acbc(unaff_x20 + 0x30,unaff_x19 + 0x30);
  return;
}



/* Entry: 107369b98; end: 107369ba3;  */

void FUN_107369b98(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_78 [72];
  
  func_0x00010736ae68();
  func_0x00010736ae0c();
  if ((param_1 != 0) && (func_0x00010054c3a4(), (int)param_1 != 0)) {
    FUN_107369c48(auStack_78,*unaff_x19);
    FUN_107369c14(unaff_x19 + 1,auStack_78);
    FUN_107369228(auStack_78);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 10) == '\x01') {
    FUN_107369228();
    *(undefined1 *)(puVar1 + 9) = 0;
  }
  return;
}



/* Entry: 107369ba4; end: 107369c13;  */

void FUN_107369ba4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_68 [72];
  
  func_0x00010736ae0c();
  if ((param_1 != 0) && (func_0x00010054c3a4(), (int)param_1 != 0)) {
    FUN_107369c48(auStack_68,*unaff_x19);
    FUN_107369c14(unaff_x19 + 1,auStack_68);
    FUN_107369228(auStack_68);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 10) == '\x01') {
    FUN_107369228();
    *(undefined1 *)(puVar1 + 9) = 0;
  }
  return;
}



/* Entry: 107369c14; end: 107369c47;  */

long FUN_107369c14(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_107369b60();
  }
  else {
    FUN_107369acc();
  }
  return param_1;
}



/* Entry: 107369c48; end: 107369cb3;  */

void FUN_107369c48(long param_1,undefined8 param_2)

{
  func_0x00010054c7ec();
  func_0x0001005ecf0c(param_1);
  func_0x0001005ecf0c(param_1 + 0x18,param_2,1);
  func_0x00010061f5a8(param_1 + 0x30,param_2,2);
  return;
}



/* Entry: 107369cb4; end: 107369cdf;  */

long FUN_107369cb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1073691cc(param_1);
  }
  return param_1;
}



/* Entry: 107369ce0; end: 107369d87;  */

undefined8 * FUN_107369ce0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 1,param_2 + 1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 4,param_2 + 4);
    func_0x00010054f8dc(param_1 + 7,param_2 + 7);
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1;
}



/* Entry: 107369d88; end: 107369da7;  */

void FUN_107369d88(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_107369228();
  }
  return;
}



/* Entry: 107369da8; end: 107369e13;  */

undefined8 * FUN_107369da8(undefined8 *param_1)

{
  undefined8 uVar1;
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
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_107369b3c(param_1 + 2);
  }
  FUN_107369d88((ulong)&uStack_80 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_107369d88(param_1 + 2);
  return param_1;
}



/* Entry: 107369e14; end: 107369e6b;  */

void FUN_107369e14(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010736abd4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010736a808(uVar1);
  return;
}



/* Entry: 107369e6c; end: 107369e7f;  */

void FUN_107369e6c(void)

{
  func_0x000107369e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107369e80; end: 107369eb7;  */

undefined8 FUN_107369e80(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_10736a10c();
  return uVar1;
}



/* Entry: 107369eb8; end: 107369edb;  */

void FUN_107369eb8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  
  func_0x00010736adcc();
  *param_2 = extraout_x8;
  FUN_1073659cc(param_2 + 1);
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 == param_1 + 0x28) {
      *(undefined8 **)(unaff_x19 + 0x40) = param_2 + 5;
      func_0x00010736aa2c(*(undefined8 *)(param_1 + 0x40));
      (*extraout_x8_01)();
      return;
    }
    func_0x00010736ac60();
    (*extraout_x8_00)();
  }
  *(long *)(unaff_x19 + 0x40) = lVar1;
  return;
}



/* Entry: 107369edc; end: 10736a0bb;  */

void FUN_107369edc(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  undefined1 auStack_d8 [88];
  
  if ((char)param_2[3] == '\x01') {
    lVar10 = *param_2;
    lVar1 = param_2[1];
    if (lVar10 != lVar1) {
      for (; lVar10 != lVar1; lVar10 = lVar10 + 0x48) {
        func_0x0001072d786c(auStack_d8);
        puVar4 = auStack_d8;
        func_0x00010006369c(puVar4,*(undefined8 *)(lVar10 + 0x30),
                            *(int *)(lVar10 + 0x38) - (int)*(undefined8 *)(lVar10 + 0x30));
        if (((ulong)puVar4 & 1) != 0) {
          Hint_Prefetch(*(undefined8 *)(param_1 + 8),0,2,0);
          uVar5 = param_1 + 8;
          func_0x0001072a02f8(*(undefined8 *)(param_1 + 8),uVar5,lVar10 + 0x18);
          lVar12 = 0;
          uVar13 = *(ulong *)(param_1 + 8);
          uVar14 = *(ulong *)(param_1 + 0x18);
          uVar8 = uVar13 >> 0xc ^ uVar5 >> 7;
          bVar2 = (byte)uVar5;
          uVar16 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2)
                                                                        )))) & 0x7f7f7f7f7f7f;
          while( true ) {
            uVar8 = uVar8 & uVar14;
            uVar17 = *(undefined8 *)(uVar13 + uVar8);
            cVar18 = (char)((ulong)uVar17 >> 8);
            cVar19 = (char)((ulong)uVar17 >> 0x10);
            cVar20 = (char)((ulong)uVar17 >> 0x18);
            cVar21 = (char)((ulong)uVar17 >> 0x20);
            cVar22 = (char)((ulong)uVar17 >> 0x28);
            bVar15 = (byte)((ulong)uVar17 >> 0x30);
            bVar23 = (byte)((ulong)uVar17 >> 0x38);
            for (uVar11 = CONCAT17(-(bVar23 == (bVar2 & 0x7f)),
                                   CONCAT16(-(bVar15 == (bVar2 & 0x7f)),
                                            CONCAT15(-(cVar22 == (char)(uVar16 >> 0x28)),
                                                     CONCAT14(-(cVar21 == (char)(uVar16 >> 0x20)),
                                                              CONCAT13(-(cVar20 ==
                                                                        (char)(uVar16 >> 0x18)),
                                                                       CONCAT12(-(cVar19 ==
                                                                                 (char)(uVar16 >>
                                                                                       0x10)),
                                                                                CONCAT11(-(cVar18 ==
                                                                                          (char)(
                                                  uVar16 >> 8)),-((char)uVar17 == (char)uVar16))))))
                                           )) & 0x8080808080808080; uVar11 != 0;
                uVar11 = uVar11 - 1 & uVar11) {
              uVar9 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar14;
              uVar6 = *(long *)(param_1 + 0x10) + uVar9 * 0x50;
              func_0x000107283140(uVar6,lVar10 + 0x18);
              if ((uVar6 & 1) != 0) goto LAB_10736a014;
            }
            bVar15 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                         CONCAT16(-(bVar15 == 0x80),
                                                  CONCAT15(-(cVar22 == -0x80),
                                                           CONCAT14(-(cVar21 == -0x80),
                                                                    CONCAT13(-(cVar20 == -0x80),
                                                                             CONCAT12(-(cVar19 ==
                                                                                       -0x80),
                                                  CONCAT11(-(cVar18 == -0x80),
                                                           -((char)uVar17 == -0x80)))))))),1);
            if ((bVar15 & 1) != 0) break;
            lVar12 = lVar12 + 8;
            uVar8 = lVar12 + uVar8;
          }
          uVar9 = param_1 + 8;
          FUN_10736a188(uVar9,uVar5);
          lVar12 = *(long *)(param_1 + 0x10) + uVar9 * 0x50;
          func_0x000107262e9c(lVar12,lVar10 + 0x18);
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x40) = 0;
          *(undefined8 *)(lVar12 + 0x48) = 0;
LAB_10736a014:
          func_0x0001072ba220(*(long *)(param_1 + 0x10) + uVar9 * 0x50 + 0x38,auStack_d8);
        }
        func_0x000107932ce0(auStack_d8);
      }
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1073659cc(auStack_d8,param_1 + 8);
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10736a0a0);
      (*pcVar3)();
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,auStack_d8);
    FUN_107365374(auStack_d8);
  }
  return;
}



/* Entry: 10736a0bc; end: 10736a0e3;  */

void FUN_10736a0bc(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a6230);
  func_0x00010736a6d0();
  return;
}



/* Entry: 10736a0e4; end: 10736a10b;  */

undefined ** FUN_10736a0e4(void)

{
  return &PTR_DAT_1109a6230;
}



/* Entry: 10736a10c; end: 10736a187;  */

void FUN_10736a10c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  
  func_0x00010736adcc();
  *param_1 = extraout_x8;
  FUN_1073659cc(param_1 + 1);
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    if (lVar1 == param_2 + 0x20) {
      *(undefined8 **)(unaff_x19 + 0x40) = param_1 + 5;
      func_0x00010736aa2c(*(undefined8 *)(param_2 + 0x38));
      (*extraout_x8_01)();
      return;
    }
    func_0x00010736ac60();
    (*extraout_x8_00)();
  }
  *(long *)(unaff_x19 + 0x40) = lVar1;
  return;
}



/* Entry: 10736a188; end: 10736a1f3;  */

undefined * FUN_10736a188(undefined *param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  undefined *puVar1;
  
  func_0x00010736a570();
  func_0x00010736ac24();
  if ((extraout_x9 == 0) && (func_0x00010736ad5c(), !(bool)in_ZR)) {
    func_0x00010736ad50();
    if (((bool)in_CY) && (func_0x00010736a750(), (bool)in_CY)) {
      param_2 = &UNK_1109a6210;
      func_0x00010736a8b0();
    }
    else {
      func_0x00010736a8e0();
      FUN_107365b20();
    }
    func_0x00010736a7fc();
  }
  func_0x00010736a480();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = *(undefined **)(param_2 + 0x30);
  if (puVar1 == (undefined *)0xffffffffffffffff) {
    puVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(puVar1,puVar1 + (long)param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar1;
}



/* Entry: 10736a1f4; end: 10736a203;  */

long FUN_10736a1f4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10736a204; end: 10736a237;  */

void FUN_10736a204(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010736abd4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010736a808(uVar1);
  return;
}



/* Entry: 10736a238; end: 10736a297;  */

void FUN_10736a238(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  func_0x00010736a900();
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      func_0x00010736a7b8();
      if ((int)param_1 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 10736a298; end: 10736a2d7;  */

void FUN_10736a298(void)

{
  ulong unaff_x20;
  
  func_0x00010736a8f0();
  FUN_10736a2d8();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010736aacc();
    FUN_10736a44c();
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 10736a2d8; end: 10736a343;  */

void FUN_10736a2d8(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x00010736a900();
  func_0x00010736a8c4();
  func_0x00010736a5b8();
  func_0x00010736a5c8();
  while( true ) {
    func_0x00010736a834();
    while (unaff_x28 != 0) {
      func_0x00010736a66c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010736afbc();
    }
    func_0x00010736a78c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010736afb0();
  }
  func_0x00010736aa0c();
  FUN_10736a344();
  func_0x00010736ade8();
  return;
}



/* Entry: 10736a344; end: 10736a3af;  */

void FUN_10736a344(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736a570();
  func_0x00010736ac24();
  if ((extraout_x9 == 0) && (func_0x00010736ad5c(), !(bool)in_ZR)) {
    func_0x00010736ad50();
    if (((bool)in_CY) && (func_0x00010736a750(), (bool)in_CY)) {
      func_0x00010736a8b0();
    }
    else {
      func_0x00010736a8e0();
      FUN_10736a3b0();
    }
    func_0x00010736a7fc();
  }
  func_0x00010736a480();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x00010726d624();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_10736a41c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10736a3b0; end: 10736a41b;  */

void FUN_10736a3b0(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x00010726d624();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_10736a41c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10736a41c; end: 10736a43b;  */

undefined8 FUN_10736a41c(void)

{
  undefined8 unaff_x19;
  
  func_0x00010736abf4();
  func_0x00010736ab9c();
  func_0x00010736ae48();
  func_0x0001073650ac();
  func_0x00010736a9f4();
  return unaff_x19;
}



/* Entry: 10736a43c; end: 10736a44b;  */

long FUN_10736a43c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10736a44c; end: 10736a47f;  */

void FUN_10736a44c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10736a480; end: 10736b01f;  */

void FUN_10736a480(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x19;
  byte unaff_w20;
  
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
  *(ulong *)(param_1 + -8) =
       *(long *)(param_1 + -8) - (ulong)(*(char *)(param_1 + param_2) == -0x80);
  uVar1 = *(ulong *)(unaff_x19 + 0x10);
  *(byte *)(param_1 + param_2) = unaff_w20 & 0x7f;
  *(byte *)(param_1 + (uVar1 & param_2 - 7U) + (uVar1 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 10736b020; end: 10736b07f;  */

void FUN_10736b020(long param_1,undefined8 *param_2)

{
  int iVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x00010736b364();
  iVar1 = iRam00000001138220e0 + 1;
  *(int *)(param_1 + 8) = iRam00000001138220e0;
  iRam00000001138220e0 = iVar1;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_107362658(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(unaff_x19 + 8));
  return;
}



/* Entry: 10736b080; end: 10736b0bb;  */

void FUN_10736b080(long param_1)

{
  long unaff_x19;
  
  func_0x00010736b364();
  FUN_107362e18(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(unaff_x19 + 8));
  func_0x0001072ac9b8((undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10736b0bc; end: 10736b0bf;  */

void FUN_10736b0bc(long param_1)

{
  long unaff_x19;
  
  func_0x00010736b364();
  FUN_107362e18(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(unaff_x19 + 8));
  func_0x0001072ac9b8((undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10736b0c0; end: 10736b0d3;  */

void FUN_10736b0c0(void)

{
  FUN_10736b080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10736b0d4; end: 10736b1e3;  */

void FUN_10736b0d4(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 auStack_268 [24];
  byte bStack_250;
  undefined1 auStack_238 [176];
  undefined1 auStack_188 [24];
  undefined8 *puStack_170;
  undefined1 auStack_128 [112];
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010736b344();
  func_0x00010736a4fc();
  func_0x00010736a84c();
  func_0x00010736aedc();
  func_0x00010736a5f0(auStack_268);
  func_0x00010736ab60();
  if ((bStack_250 & 1) == 0) {
    func_0x00010736af60();
    if (!(bool)in_ZR) goto LAB_107362f88;
    func_0x00010736aebc();
    func_0x00010736aa04(auStack_b8);
    func_0x00010736aaf0();
    func_0x00010736aaa0();
    func_0x00010736a964();
    func_0x00010736aae8();
    func_0x00010736acb0();
    func_0x00010736aec4();
    func_0x00010736abec();
    func_0x00010736a5f0(&stack0xfffffffffffffe98);
    FUN_107326484(auStack_268,&stack0xfffffffffffffe98);
    func_0x0001072b9760(&stack0xfffffffffffffe98);
    func_0x00010736a9d0();
    in_ZR = bStack_250 == 1;
    if (!(bool)in_ZR) goto LAB_107362f88;
  }
  func_0x00010736a984();
  func_0x00010726933c(auStack_128);
  FUN_10736327c(auStack_238,&stack0xfffffffffffffe98);
  puStack_170 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a57c0;
  FUN_10736327c(puVar1 + 1,auStack_238);
  puStack_170 = puVar1;
  func_0x00010736a744();
  FUN_1073671cc(auStack_188);
  FUN_1073632b0(auStack_238);
  FUN_1073632b0(&stack0xfffffffffffffe98);
LAB_107362f88:
  func_0x00010736aae0();
  func_0x00010736ab14();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072b9760(&stack0xfffffffffffffe98);
  func_0x00010736a9d0();
  func_0x00010736aae0();
  do {
    func_0x00010736ab14();
    func_0x00010736a888();
    func_0x00010736ab60();
  } while( true );
}



/* Entry: 10736b1e4; end: 10736b24f;  */

void FUN_10736b1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1073255f0(auStack_48,param_3);
  FUN_107364dc4(uVar2,uVar1,param_2,auStack_48);
  func_0x0001072b978c(auStack_48);
  return;
}



/* Entry: 10736b250; end: 10736b2ab;  */

void FUN_10736b250(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1073639d4(uVar1,param_2,&uStack_40);
  func_0x00010726e078(&uStack_40);
  return;
}



/* Entry: 10736b2ac; end: 10736b32b;  */

void FUN_10736b2ac(long param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  uint auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  auStack_48[0] = auStack_48[0] & 0xffffff00;
  uStack_28 = (char)param_3[8] == '\x01';
  if ((bool)uStack_28) {
    auStack_48[0] = *param_3;
    uStack_38 = *(undefined8 *)(param_3 + 4);
    uStack_40 = *(undefined8 *)(param_3 + 2);
    uStack_30 = *(undefined8 *)(param_3 + 6);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
  }
  FUN_107363a3c(uVar1,param_2,auStack_48);
  FUN_1073405b4(auStack_48);
  return;
}



/* Entry: 10736b32c; end: 10736b377;  */

void FUN_10736b32c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x00010736aa20(*(undefined8 *)(param_1 + 0x10));
  func_0x00010736a820();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar1 = unaff_x21 + 0x170;
  FUN_107363b84(lVar1,param_2);
  if (lVar1 == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    FUN_10736581c();
  }
  func_0x000100100f40(auStack_40);
  return;
}



/* Entry: 10736b378; end: 10736b39f;  */

undefined8 FUN_10736b378(undefined8 param_1)

{
  FUN_10736b3a0(param_1,0);
  return param_1;
}



/* Entry: 10736b3a0; end: 10736b3b7;  */

void FUN_10736b3a0(long *param_1,long param_2)

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



/* Entry: 10736b3b8; end: 10736b46b;  */

void FUN_10736b3b8(ulong param_1,uint param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *param_4 + (ulong)param_2 * 0x78;
  lVar3 = *param_4 + (param_1 & 0xffffffff) * 0x78;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10736b46c(lVar4,&uStack_50);
  func_0x00010736c0d4();
  lVar1 = *(long *)(lVar3 + 0x30);
  for (lVar5 = *(long *)(lVar3 + 0x28); lVar5 != lVar1; lVar5 = lVar5 + 0x20) {
    lVar2 = param_3;
    FUN_10736beac(param_3,lVar5);
    if (*(uint *)(lVar2 + 0x18) != param_2) {
      *(uint *)(lVar2 + 0x18) = param_2;
      FUN_10736c1ec(lVar4 + 0x10,lVar5);
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10736b46c(lVar3,&uStack_50);
  func_0x00010736c0d4();
  func_0x00010736c21c(lVar3 + 0x10);
  return;
}



/* Entry: 10736b46c; end: 10736b4ab;  */

undefined8 * FUN_10736b46c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010736c0d4();
  return param_1;
}



/* Entry: 10736b4ac; end: 10736b73f;  */

void FUN_10736b4ac(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  long *plStack_88;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10736b740(auStack_70,*(undefined8 *)(param_2 + 0x10));
  FUN_10736b740(auStack_98,param_1[2],param_3);
  uStack_b8 = 0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  plVar10 = (long *)lStack_60;
  do {
    plVar9 = plStack_88;
    if (plVar10 == (long *)0x0) {
      do {
        if (plVar9 == (long *)0x0) {
          func_0x00010736c014(&lStack_c0);
          func_0x00010736bfd0(auStack_98);
          func_0x00010736bfd0(auStack_70);
          func_0x00010735c6e4(&uStack_48);
          return;
        }
        lVar3 = plVar9[2];
        uVar5 = uStack_b8 - 1;
        for (puVar4 = *(ulong **)(lVar3 + 0x28); puVar4 != *(ulong **)(lVar3 + 0x30);
            puVar4 = puVar4 + 4) {
          if (uStack_b8 != 0 && lStack_a8 != 0) {
            uVar6 = *puVar4;
            if ((uStack_b8 & uVar5) == 0) {
              uVar7 = uVar5 & uVar6;
            }
            else {
              uVar7 = uVar6;
              if (uStack_b8 <= uVar6) {
                uVar7 = 0;
                if (uStack_b8 != 0) {
                  uVar7 = uVar6 / uStack_b8;
                }
                uVar7 = uVar6 - uVar7 * uStack_b8;
              }
            }
            plVar10 = *(long **)(lStack_c0 + uVar7 * 8);
            if (plVar10 != (long *)0x0) {
              do {
                while( true ) {
                  plVar10 = (long *)*plVar10;
                  if (plVar10 == (long *)0x0) goto LAB_10736b6b4;
                  uVar8 = plVar10[1];
                  if (uVar8 != uVar6) break;
                  if (plVar10[2] == uVar6) {
                    if (plVar10[3] != lVar3) {
                      FUN_10736bac8(plVar10[3],lVar3,0);
                      goto LAB_10736b6c4;
                    }
                    goto LAB_10736b6b4;
                  }
                }
                if ((uStack_b8 & uVar5) == 0) {
                  uVar8 = uVar8 & uVar5;
                }
                else if (uStack_b8 <= uVar8) {
                  uVar2 = 0;
                  if (uStack_b8 != 0) {
                    uVar2 = uVar8 / uStack_b8;
                  }
                  uVar8 = uVar8 - uVar2 * uStack_b8;
                }
              } while (uVar8 == uVar7);
            }
          }
LAB_10736b6b4:
        }
LAB_10736b6c4:
        plVar9 = (long *)*plVar9;
      } while( true );
    }
    lVar3 = plVar10[2];
    uVar5 = param_1[1];
    uVar6 = uVar5 - 1;
    for (puVar4 = *(ulong **)(lVar3 + 0x28); puVar4 != *(ulong **)(lVar3 + 0x30);
        puVar4 = puVar4 + 4) {
      if (((puVar4[2] != 0) && (*(long *)(puVar4[2] + 8) != -1)) && (uVar5 != 0 && param_1[3] != 0))
      {
        uVar7 = *puVar4;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar6 & uVar7;
        }
        else {
          uVar8 = uVar7;
          if (uVar5 <= uVar7) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar7 / uVar5;
            }
            uVar8 = uVar7 - uVar8 * uVar5;
          }
        }
        plVar9 = *(long **)(*param_1 + uVar8 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_10736b5cc;
              uVar2 = plVar9[1];
              if (uVar7 != uVar2) break;
              if (plVar9[2] == uVar7) goto LAB_10736b5cc;
            }
            if ((uVar5 & uVar6) == 0) {
              uVar2 = uVar2 & uVar6;
            }
            else if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
          } while (uVar2 == uVar8);
          plVar9 = (long *)0x0;
LAB_10736b5cc:
          if ((plVar9 != (long *)0x0) && (*param_3 != 0)) {
            FUN_10736bac8(*param_3 + (ulong)*(uint *)((long)plVar9 + 0x18) * 0x78,lVar3,&lStack_c0);
            break;
          }
        }
      }
    }
    plVar10 = (long *)*plVar10;
  } while( true );
}



/* Entry: 10736b740; end: 10736bac7;  */

void FUN_10736b740(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long **pplVar7;
  long **pplVar8;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  long **extraout_x11;
  long **extraout_x11_00;
  long extraout_x12;
  long **pplVar10;
  long **unaff_x24;
  long *plVar11;
  long *plVar12;
  long **pplVar13;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  plVar11 = param_1 + 2;
  param_1[3] = 0;
  *plVar11 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  do {
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar12 = (long *)(*param_3 + (ulong)*(uint *)(param_2 + 3) * 0x78);
    pplVar7 = &plStack_78;
    plStack_78 = plVar12;
    func_0x0001000df370(pplVar7,8);
    pplVar13 = (long **)param_1[1];
    if (pplVar13 != (long **)0x0) {
      uVar5 = (long)pplVar13 - 1;
      if (((ulong)pplVar13 & uVar5) == 0) {
        unaff_x24 = (long **)(uVar5 & (ulong)pplVar7);
      }
      else {
        unaff_x24 = pplVar7;
        if (pplVar13 <= pplVar7) {
          uVar1 = 0;
          if (pplVar13 != (long **)0x0) {
            uVar1 = (ulong)pplVar7 / (ulong)pplVar13;
          }
          unaff_x24 = (long **)((long)pplVar7 - uVar1 * (long)pplVar13);
        }
      }
      plVar6 = *(long **)(*param_1 + (long)unaff_x24 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_10736b838;
            pplVar8 = (long **)plVar6[1];
            if (pplVar8 != pplVar7) break;
            if ((long *)plVar6[2] == plVar12) goto LAB_10736ba88;
          }
          if (((ulong)pplVar13 & uVar5) == 0) {
            pplVar8 = (long **)((ulong)pplVar8 & uVar5);
          }
          else if (pplVar13 <= pplVar8) {
            uVar1 = 0;
            if (pplVar13 != (long **)0x0) {
              uVar1 = (ulong)pplVar8 / (ulong)pplVar13;
            }
            pplVar8 = (long **)((long)pplVar8 - uVar1 * (long)pplVar13);
          }
        } while (pplVar8 == unaff_x24);
      }
    }
LAB_10736b838:
    plVar6 = (long *)0x18;
    __Znwm();
    uStack_68 = 1;
    *plVar6 = 0;
    plVar6[1] = (long)pplVar7;
    plVar6[2] = (long)plVar12;
    plStack_70 = plVar11;
    if ((pplVar13 == (long **)0x0) ||
       (*(float *)(param_1 + 4) * (float)pplVar13 < (float)(param_1[3] + 1))) {
      bVar3 = pplVar13 == (long **)0x3;
      plStack_78 = plVar6;
      func_0x00010736c094((long)pplVar13 << 1);
      if (bVar3) {
        unaff_x24 = (long **)0x2;
      }
      else if (((ulong)unaff_x24 & extraout_x8) != 0) {
        __ZNSt3__112__next_primeEm();
        pplVar13 = (long **)param_1[1];
      }
      if (pplVar13 < unaff_x24) {
LAB_10736b8c0:
        if ((ulong)unaff_x24 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10736baa0);
          (*pcVar2)();
        }
        lVar4 = (long)unaff_x24 << 3;
        __Znwm(lVar4);
        func_0x00010736bf48(param_1,lVar4);
        param_1[1] = (long)unaff_x24;
        lVar4 = *param_1;
        for (pplVar13 = (long **)0x0; bVar3 = pplVar13 <= unaff_x24, unaff_x24 != pplVar13;
            pplVar13 = (long **)((long)pplVar13 + 1)) {
          *(undefined8 *)(lVar4 + (long)pplVar13 * 8) = 0;
        }
        pplVar13 = unaff_x24;
        if (*plVar11 != 0) {
          func_0x00010736c0dc();
          pplVar8 = extraout_x11;
          if (bVar3) {
            pplVar8 = (long **)((long)extraout_x11 - extraout_x12 * (long)unaff_x24);
          }
          if (((ulong)unaff_x24 & extraout_x9) == 0) {
            pplVar8 = (long **)((ulong)extraout_x11 & extraout_x9);
          }
          *(long **)(extraout_x8_00 + (long)pplVar8 * 8) = plVar11;
          lVar4 = extraout_x8_00;
          uVar5 = extraout_x9;
          plVar12 = extraout_x10;
          while (plVar9 = plVar12, plVar12 = (long *)*plVar9, plVar12 != (long *)0x0) {
            pplVar10 = (long **)plVar12[1];
            if (((ulong)unaff_x24 & uVar5) == 0) {
              pplVar10 = (long **)((ulong)pplVar10 & uVar5);
            }
            else if (unaff_x24 <= pplVar10) {
              uVar1 = 0;
              if (unaff_x24 != (long **)0x0) {
                uVar1 = (ulong)pplVar10 / (ulong)unaff_x24;
              }
              pplVar10 = (long **)((long)pplVar10 - uVar1 * (long)unaff_x24);
            }
            if (pplVar10 != pplVar8) {
              if (*(long *)(lVar4 + (long)pplVar10 * 8) == 0) {
                *(long **)(lVar4 + (long)pplVar10 * 8) = plVar9;
                pplVar8 = pplVar10;
              }
              else {
                func_0x00010736c074();
                lVar4 = extraout_x8_01;
                uVar5 = extraout_x9_00;
                plVar12 = extraout_x10_00;
                pplVar8 = extraout_x11_00;
              }
            }
          }
        }
      }
      else if (unaff_x24 < pplVar13) {
        pplVar8 = (long **)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((pplVar13 < (long **)0x3) || (((ulong)pplVar13 & (long)pplVar13 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010736c0b0();
        }
        if (unaff_x24 <= pplVar8) {
          unaff_x24 = pplVar8;
        }
        if (unaff_x24 < pplVar13) {
          if (unaff_x24 != (long **)0x0) goto LAB_10736b8c0;
          func_0x00010736bf48(param_1,0);
          param_1[1] = 0;
          pplVar13 = (long **)0x0;
        }
        else {
          pplVar13 = (long **)param_1[1];
        }
      }
      if (((ulong)pplVar13 & (long)pplVar13 - 1U) == 0) {
        unaff_x24 = (long **)((long)pplVar13 - 1U & (ulong)pplVar7);
      }
      else {
        unaff_x24 = pplVar7;
        if (pplVar13 <= pplVar7) {
          uVar5 = 0;
          if (pplVar13 != (long **)0x0) {
            uVar5 = (ulong)pplVar7 / (ulong)pplVar13;
          }
          unaff_x24 = (long **)((long)pplVar7 - uVar5 * (long)pplVar13);
        }
      }
    }
    lVar4 = *param_1;
    plVar12 = *(long **)(lVar4 + (long)unaff_x24 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar6 = *plVar11;
      *plVar11 = (long)plVar6;
      *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar11;
      if (*plVar6 != 0) {
        pplVar7 = *(long ***)(*plVar6 + 8);
        if (((ulong)pplVar13 & (long)pplVar13 - 1U) == 0) {
          pplVar7 = (long **)((ulong)pplVar7 & (long)pplVar13 - 1U);
        }
        else if (pplVar13 <= pplVar7) {
          uVar5 = 0;
          if (pplVar13 != (long **)0x0) {
            uVar5 = (ulong)pplVar7 / (ulong)pplVar13;
          }
          pplVar7 = (long **)((long)pplVar7 - uVar5 * (long)pplVar13);
        }
        *(long **)(lVar4 + (long)pplVar7 * 8) = plVar6;
      }
    }
    else {
      *plVar6 = *plVar12;
      *plVar12 = (long)plVar6;
    }
    plStack_78 = (long *)0x0;
    param_1[3] = param_1[3] + 1;
    FUN_10736bf60(&plStack_78);
LAB_10736ba88:
    param_2 = (long *)*param_2;
  } while( true );
}



/* Entry: 10736bac8; end: 10736beab;  */

void FUN_10736bac8(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar10;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong unaff_x24;
  ulong uVar16;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  FUN_10736b46c(param_1,&plStack_78);
  func_0x00010735ce54(&plStack_78);
  puVar15 = *(ulong **)(param_2 + 0x28);
  puVar2 = *(ulong **)(param_2 + 0x30);
  plVar1 = param_3 + 2;
  do {
    if (puVar15 == puVar2) {
      plStack_78 = (long *)0x0;
      plStack_70 = (long *)0x0;
      FUN_10736b46c(param_2,&plStack_78);
      func_0x00010735ce54(&plStack_78);
      func_0x00010736c21c(param_2 + 0x10);
      return;
    }
    for (puVar7 = *(ulong **)(param_1 + 0x28); puVar7 != *(ulong **)(param_1 + 0x30);
        puVar7 = puVar7 + 4) {
      if ((((puVar7[2] != 0) && (*(long *)(puVar7[2] + 8) != -1 && puVar15[2] != 0)) &&
          (*(long *)(puVar15[2] + 8) != -1)) && (*puVar7 == *puVar15)) goto LAB_10736be58;
    }
    FUN_10736c1ec(param_1 + 0x10,puVar15);
    if (param_3 != (long *)0x0) {
      uVar16 = *puVar15;
      uVar14 = param_3[1];
      if (uVar14 != 0) {
        uVar8 = uVar14 - 1;
        if ((uVar14 & uVar8) == 0) {
          unaff_x24 = uVar8 & uVar16;
        }
        else {
          unaff_x24 = uVar16;
          if (uVar14 <= uVar16) {
            uVar10 = 0;
            if (uVar14 != 0) {
              uVar10 = uVar16 / uVar14;
            }
            unaff_x24 = uVar16 - uVar10 * uVar14;
          }
        }
        plVar9 = *(long **)(*param_3 + unaff_x24 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_10736bc08;
              uVar10 = plVar9[1];
              if (uVar10 != uVar16) break;
              if (plVar9[2] == uVar16) goto LAB_10736be58;
            }
            if ((uVar14 & uVar8) == 0) {
              uVar10 = uVar10 & uVar8;
            }
            else if (uVar14 <= uVar10) {
              uVar13 = 0;
              if (uVar14 != 0) {
                uVar13 = uVar10 / uVar14;
              }
              uVar10 = uVar10 - uVar13 * uVar14;
            }
          } while (uVar10 == unaff_x24);
        }
      }
LAB_10736bc08:
      plVar9 = (long *)0x20;
      __Znwm();
      uStack_68 = 1;
      *plVar9 = 0;
      plVar9[1] = uVar16;
      plVar9[2] = uVar16;
      plVar9[3] = param_1;
      plStack_70 = plVar1;
      if ((uVar14 == 0) || (*(float *)(param_3 + 4) * (float)uVar14 < (float)(param_3[3] + 1))) {
        bVar5 = uVar14 == 3;
        plStack_78 = plVar9;
        func_0x00010736c094(uVar14 << 1);
        if (bVar5) {
          unaff_x24 = 2;
        }
        else if ((unaff_x24 & extraout_x8) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar14 = param_3[1];
        }
        if (uVar14 < unaff_x24) {
LAB_10736bc90:
          uVar14 = unaff_x24;
          if (uVar14 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10736be94);
            (*pcVar4)();
          }
          lVar6 = uVar14 << 3;
          __Znwm(lVar6);
          FUN_10736bf8c(param_3,lVar6);
          param_3[1] = uVar14;
          lVar6 = *param_3;
          for (uVar8 = 0; bVar5 = uVar8 <= uVar14, uVar14 != uVar8; uVar8 = uVar8 + 1) {
            *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
          }
          if (*plVar1 != 0) {
            func_0x00010736c0dc();
            uVar8 = extraout_x11;
            if (bVar5) {
              uVar8 = extraout_x11 - extraout_x12 * uVar14;
            }
            if ((uVar14 & extraout_x9) == 0) {
              uVar8 = extraout_x11 & extraout_x9;
            }
            *(long **)(extraout_x8_00 + uVar8 * 8) = plVar1;
            lVar6 = extraout_x8_00;
            uVar10 = extraout_x9;
            plVar12 = extraout_x10;
            while (plVar11 = plVar12, plVar12 = (long *)*plVar11, plVar12 != (long *)0x0) {
              uVar13 = plVar12[1];
              if ((uVar14 & uVar10) == 0) {
                uVar13 = uVar13 & uVar10;
              }
              else if (uVar14 <= uVar13) {
                uVar3 = 0;
                if (uVar14 != 0) {
                  uVar3 = uVar13 / uVar14;
                }
                uVar13 = uVar13 - uVar3 * uVar14;
              }
              if (uVar13 != uVar8) {
                if (*(long *)(lVar6 + uVar13 * 8) == 0) {
                  *(long **)(lVar6 + uVar13 * 8) = plVar11;
                  uVar8 = uVar13;
                }
                else {
                  func_0x00010736c074();
                  lVar6 = extraout_x8_01;
                  uVar10 = extraout_x9_00;
                  plVar12 = extraout_x10_00;
                  uVar8 = extraout_x11_00;
                }
              }
            }
          }
        }
        else if (unaff_x24 < uVar14) {
          uVar8 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
          if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x00010736c0b0();
          }
          if (unaff_x24 <= uVar8) {
            unaff_x24 = uVar8;
          }
          if (unaff_x24 < uVar14) {
            if (unaff_x24 != 0) goto LAB_10736bc90;
            FUN_10736bf8c(param_3,0);
            uVar14 = 0;
            param_3[1] = 0;
          }
          else {
            uVar14 = param_3[1];
          }
        }
        if ((uVar14 & uVar14 - 1) == 0) {
          unaff_x24 = uVar14 - 1 & uVar16;
        }
        else {
          unaff_x24 = uVar16;
          if (uVar14 <= uVar16) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar16 / uVar14;
            }
            unaff_x24 = uVar16 - uVar8 * uVar14;
          }
        }
      }
      lVar6 = *param_3;
      plVar12 = *(long **)(lVar6 + unaff_x24 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar9 = *plVar1;
        *plVar1 = (long)plVar9;
        *(long **)(lVar6 + unaff_x24 * 8) = plVar1;
        if (*plVar9 != 0) {
          uVar16 = *(ulong *)(*plVar9 + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar16 & uVar14 - 1;
          }
          else if (uVar14 <= uVar16) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar8 * uVar14;
          }
          *(long **)(lVar6 + uVar16 * 8) = plVar9;
        }
      }
      else {
        *plVar9 = *plVar12;
        *plVar12 = (long)plVar9;
      }
      plStack_78 = (long *)0x0;
      param_3[3] = param_3[3] + 1;
      FUN_10736bfa4(&plStack_78);
    }
LAB_10736be58:
    puVar15 = puVar15 + 4;
  } while( true );
}



/* Entry: 10736beac; end: 10736bf5f;  */

long FUN_10736beac(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10736bf60; end: 10736bf8b;  */

long * FUN_10736bf60(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10736bf8c; end: 10736bfa3;  */

void FUN_10736bf8c(long *param_1,long param_2)

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



/* Entry: 10736bfa4; end: 10736c057;  */

long * FUN_10736bfa4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10736c058; end: 10736c0ef;  */

void FUN_10736c058(void)

{
  return;
}



/* Entry: 10736c0f0; end: 10736c1d3;  */

undefined1  [16] FUN_10736c0f0(undefined1 (*param_1) [16])

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double *apdStack_50 [2];
  
  if (param_1[1][0] != '\x01') {
    uVar4 = 0;
    lVar1 = *(long *)param_1[2];
    dVar5 = 0.0;
    dVar6 = 0.0;
    for (lVar3 = *(long *)(param_1[1] + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
      FUN_1073558a4(apdStack_50,lVar3 + 8);
      if ((apdStack_50[0] != (double *)0x0) && (*(int *)apdStack_50[0] == 6)) {
        pdVar2 = apdStack_50[0];
        FUN_10736cc38();
        uVar4 = uVar4 + 1;
        dVar5 = dVar5 + *pdVar2;
        dVar6 = dVar6 + pdVar2[1];
      }
      func_0x00010735ce54(apdStack_50);
    }
    if (uVar4 == 0) {
      dVar6 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar5 = dVar5 / (double)uVar4;
      dVar6 = dVar6 / (double)uVar4;
    }
    *(double *)*param_1 = dVar5;
    *(double *)(*param_1 + 8) = dVar6;
    param_1[1][0] = 1;
  }
  FUN_10736c1d4();
  return *param_1;
}



/* Entry: 10736c1d4; end: 10736c1eb;  */

long FUN_10736c1d4(long param_1)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  bVar1 = *(char *)(param_1 + 0x10) != '\0';
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  param_1 = param_1 + 0x18;
  func_0x00010736e044();
  if (bVar1) {
    FUN_10736ccf8();
  }
  else {
    func_0x00010736ccd0();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 10736c1ec; end: 10736c233;  */

long FUN_10736c1ec(long param_1)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  
  bVar1 = *(char *)(param_1 + 0x10) != '\0';
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  param_1 = param_1 + 0x18;
  func_0x00010736e044();
  if (bVar1) {
    FUN_10736ccf8();
  }
  else {
    func_0x00010736ccd0();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 10736c234; end: 10736c5ef;  */

long * FUN_10736c234(undefined8 param_1,long param_2,long *param_3,long *param_4,long *param_5,
                    undefined8 *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 extraout_x8_00;
  long lVar12;
  undefined8 extraout_x9;
  long *plVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  int aiStack_170 [12];
  long alStack_140 [4];
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  plVar15 = param_3;
  puVar8 = param_6;
  func_0x00010736e0e0();
  *(short *)plVar15 = (short)param_4;
  plVar17 = plVar15 + 1;
  *plVar17 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  lVar12 = *param_5;
  plVar15[2] = param_5[1];
  *plVar17 = lVar12;
  plVar15[3] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  lVar12 = 0;
  plVar15[5] = 0;
  plVar15[4] = 0;
  plVar15[10] = 0;
  plVar15[7] = 0;
  plVar15[6] = 0;
  plVar15[9] = 0;
  plVar15[8] = 0;
  *(undefined4 *)(plVar15 + 0xb) = 0x3f800000;
  alStack_140[1] = 0;
  alStack_140[0] = 0;
  alStack_140[3] = 0;
  alStack_140[2] = 0;
  uStack_120 = 0x3f800000;
  aiStack_170[2] = 0;
  aiStack_170[3] = 0;
  aiStack_170[0] = 0;
  aiStack_170[1] = 0;
  aiStack_170[6] = 0;
  aiStack_170[7] = 0;
  aiStack_170[4] = 0;
  aiStack_170[5] = 0;
  aiStack_170[8] = 0x3f800000;
  plVar16 = (long *)puVar8[1];
  plVar13 = plVar15;
  uStack_70 = extraout_x8;
  for (plVar14 = (long *)*puVar8; plVar14 != plVar16; plVar14 = plVar14 + 2) {
    plVar13 = alStack_140;
    param_4 = (long *)(*plVar14 + 0x30);
    FUN_10736d004();
  }
  iVar19 = 0;
  plVar11 = (long *)param_3[2];
  for (plVar16 = (long *)param_3[1]; plVar16 != plVar11; plVar16 = plVar16 + 0xf) {
    lStack_e8 = plVar16[1];
    lVar12 = *plVar16;
    lStack_f0 = lVar12;
    if (plVar16[1] != 0) {
      do {
        func_0x00010736df44();
      } while (extraout_w10 != 0);
    }
    func_0x00010736e194();
    func_0x00010736e0d8();
    plVar14 = (long *)plVar16[6];
    for (plVar20 = (long *)plVar16[5]; plVar20 != plVar14; plVar20 = plVar20 + 4) {
      FUN_1073558a4(alStack_100,plVar20 + 1);
      func_0x00010726236c(&lStack_f0,alStack_100[0] + 0x30);
      func_0x000107262398(auStack_a8,&lStack_f0,0x1138369c0);
      func_0x00010724ef84(auStack_118,auStack_a8);
      func_0x000104c2f714(auStack_a8);
      func_0x00010724b3d8(&lStack_f0);
      piVar6 = aiStack_170;
      param_4 = (long *)(alStack_100[0] + 0x30);
      FUN_10736d004();
      func_0x00010736e164(alStack_100[0]);
      if (piVar6[4] != 0) {
        FUN_10735c55c(piVar6);
        piVar6[4] = 0;
      }
      *piVar6 = iVar19;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      plVar13 = alStack_100;
      func_0x00010735ce54();
    }
    iVar19 = iVar19 + 1;
  }
  plVar11 = (long *)param_6[1];
  for (plVar16 = (long *)*param_6; uVar4 = plVar16 == plVar11, !(bool)uVar4; plVar16 = plVar16 + 2)
  {
    plVar20 = (long *)param_3[8];
    if ((plVar20 != (long *)0x0) && (param_3[10] != 0)) {
      plVar14 = (long *)*plVar16;
      plVar7 = param_3 + 10;
      param_4 = plVar14 + 6;
      func_0x00010786e5e4();
      uVar21 = (long)plVar20 - 1;
      if (((ulong)plVar20 & uVar21) == 0) {
        plVar22 = (long *)((ulong)plVar7 & uVar21);
      }
      else {
        plVar22 = plVar7;
        if (plVar20 <= plVar7) {
          uVar2 = 0;
          if (plVar20 != (long *)0x0) {
            uVar2 = (ulong)plVar7 / (ulong)plVar20;
          }
          plVar22 = (long *)((long)plVar7 - uVar2 * (long)plVar20);
        }
      }
      plVar18 = *(long **)(plVar15[7] + (long)plVar22 * 8);
      plVar13 = plVar7;
      if (plVar18 != (long *)0x0) {
        do {
          while( true ) {
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) goto LAB_10736c47c;
            plVar9 = (long *)plVar18[1];
            if (plVar9 != plVar7) break;
            plVar13 = plVar18 + 2;
            param_4 = plVar14 + 6;
            func_0x00010735c498();
            if (((ulong)plVar13 & 1) != 0) goto LAB_10736c510;
          }
          if (((ulong)plVar20 & uVar21) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar21);
          }
          else if (plVar20 <= plVar9) {
            uVar2 = 0;
            if (plVar20 != (long *)0x0) {
              uVar2 = (ulong)plVar9 / (ulong)plVar20;
            }
            plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar20);
          }
        } while (plVar9 == plVar22);
      }
    }
LAB_10736c47c:
    lStack_e8 = plVar16[1];
    lStack_f0 = *plVar16;
    plVar20 = plVar13;
    if (plVar16[1] != 0) {
      do {
        func_0x00010736df44();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010736e194();
    func_0x00010736e0d8();
    func_0x00010736e164(*plVar16);
    plVar13 = plVar20;
    if ((int)plVar20[2] == 1) {
      lVar10 = plVar16[1];
      lVar12 = *plVar16;
      if (plVar16[1] != 0) {
        do {
          func_0x00010736df44();
        } while (extraout_w10_01 != 0);
      }
      lStack_e8 = plVar20[1];
      param_2 = *plVar20;
      lStack_f0 = param_2;
      plVar20[1] = lVar10;
      *plVar20 = lVar12;
      func_0x00010736e0d8();
    }
    else {
      FUN_10735c55c();
      lVar10 = plVar16[1];
      lVar12 = *plVar16;
      plVar20[1] = plVar16[1];
      *plVar20 = lVar12;
      if (lVar10 != 0) {
        do {
          func_0x00010736df44();
        } while (extraout_w10_02 != 0);
      }
      *(undefined4 *)(plVar20 + 2) = 1;
    }
LAB_10736c510:
  }
  FUN_10736da00(aiStack_170);
  plVar13 = alStack_140;
  FUN_10736da00();
  func_0x00010736e010(uStack_70);
  if ((bool)uVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  FUN_10736da00(aiStack_170);
  FUN_10736da00(alStack_140);
  func_0x00010735c688(plVar15 + 7);
  FUN_1073589cc(plVar15 + 4);
  func_0x00010735c6e4(plVar17);
  __Unwind_Resume();
  func_0x00010736e188();
  fVar23 = (float)lVar12;
  fVar24 = (float)param_2;
  plVar16 = (long *)plVar14[1];
  if (plVar16 != (long *)0x0) {
    uVar21 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar21) == 0) {
      plVar17 = (long *)(uVar21 & (ulong)plVar13);
    }
    else {
      plVar17 = plVar13;
      if (plVar16 <= plVar13) {
        uVar2 = 0;
        if (plVar16 != (long *)0x0) {
          uVar2 = (ulong)plVar13 / (ulong)plVar16;
        }
        plVar17 = (long *)((long)plVar13 - uVar2 * (long)plVar16);
      }
    }
    plVar15 = *(long **)(*plVar14 + (long)plVar17 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          fVar23 = (float)lVar12;
          fVar24 = (float)param_2;
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10736c6a8;
          plVar11 = (long *)plVar15[1];
          if (plVar11 != plVar13) break;
          plVar11 = plVar15 + 2;
          func_0x00010735c498(plVar11,param_4);
          if (((ulong)plVar11 & 1) != 0) goto LAB_10736c7b8;
        }
        if (((ulong)plVar16 & uVar21) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar21);
        }
        else if (plVar16 <= plVar11) {
          uVar2 = 0;
          if (plVar16 != (long *)0x0) {
            uVar2 = (ulong)plVar11 / (ulong)plVar16;
          }
          plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar16);
        }
      } while (plVar11 == plVar17);
    }
  }
LAB_10736c6a8:
  plVar11 = plVar14 + 2;
  plVar15 = (long *)0x68;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = (long)plVar13;
  func_0x000107269bac(plVar15 + 2,param_4);
  *(undefined4 *)(plVar15 + 10) = 0;
  *(undefined4 *)(plVar15 + 0xc) = 0;
  func_0x00010736e1a0();
  func_0x00010736e030();
  if ((plVar16 == (long *)0x0) || (fVar24 * (float)plVar16 < fVar23)) {
    bVar3 = (long *)0x2 < plVar16;
    bVar5 = plVar16 == (long *)0x3;
    func_0x00010736dffc((long)plVar16 << 1);
    uVar1 = extraout_x8_00;
    if (!bVar3 || bVar5) {
      uVar1 = extraout_x9;
    }
    FUN_10735c31c(plVar14,uVar1);
    plVar16 = (long *)plVar14[1];
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      plVar17 = (long *)((long)plVar16 - 1U & (ulong)plVar13);
    }
    else {
      plVar17 = plVar13;
      if (plVar16 <= plVar13) {
        uVar21 = 0;
        if (plVar16 != (long *)0x0) {
          uVar21 = (ulong)plVar13 / (ulong)plVar16;
        }
        plVar17 = (long *)((long)plVar13 - uVar21 * (long)plVar16);
      }
    }
  }
  lVar12 = *plVar14;
  plVar13 = *(long **)(lVar12 + (long)plVar17 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
    *(long **)(lVar12 + (long)plVar17 * 8) = plVar11;
    if (*plVar15 != 0) {
      plVar13 = *(long **)(*plVar15 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar13 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar13) {
        uVar21 = 0;
        if (plVar16 != (long *)0x0) {
          uVar21 = (ulong)plVar13 / (ulong)plVar16;
        }
        plVar13 = (long *)((long)plVar13 - uVar21 * (long)plVar16);
      }
      *(long **)(lVar12 + (long)plVar13 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar13;
    *plVar13 = (long)plVar15;
  }
  func_0x00010736e114();
  FUN_10735c5ec();
LAB_10736c7b8:
  return plVar15 + 10;
}



/* Entry: 10736c5f0; end: 10736c7e7;  */

long * FUN_10736c5f0(float param_1,float param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x24;
  ulong uVar8;
  
  func_0x00010736e188();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x24 = uVar8 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10736c6a8;
          uVar3 = plVar6[1];
          if (uVar3 != param_3) break;
          plVar2 = plVar6 + 2;
          func_0x00010735c498(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) goto LAB_10736c7b8;
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = uVar3 & uVar8;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
      } while (uVar3 == unaff_x24);
    }
  }
LAB_10736c6a8:
  plVar2 = unaff_x19 + 2;
  plVar6 = (long *)0x68;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = param_3;
  func_0x000107269bac(plVar6 + 2,param_4);
  *(undefined4 *)(plVar6 + 10) = 0;
  *(undefined4 *)(plVar6 + 0xc) = 0;
  func_0x00010736e1a0();
  func_0x00010736e030();
  if ((uVar7 == 0) || (param_2 * (float)uVar7 < param_1)) {
    func_0x00010736dffc(uVar7 << 1);
    FUN_10735c31c();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar8 * uVar7;
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar6 = *plVar2;
    *plVar2 = (long)plVar6;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar2;
    if (*plVar6 != 0) {
      uVar8 = *(ulong *)(*plVar6 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
  }
  func_0x00010736e114();
  FUN_10735c5ec();
LAB_10736c7b8:
  return plVar6 + 10;
}



/* Entry: 10736c7e8; end: 10736c7ef;  */

long * FUN_10736c7e8(undefined8 param_1,long param_2,long *param_3,ulong param_4,long *param_5,
                    undefined8 *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 extraout_x8_00;
  long lVar14;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  int aiStack_170 [12];
  long alStack_140 [4];
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  plVar9 = (long *)(param_4 & 0xffff);
  plVar16 = param_3;
  puVar10 = param_6;
  func_0x00010736e0e0();
  *(short *)plVar16 = (short)plVar9;
  plVar18 = plVar16 + 1;
  *plVar18 = 0;
  plVar16[2] = 0;
  plVar16[3] = 0;
  lVar14 = *param_5;
  plVar16[2] = param_5[1];
  *plVar18 = lVar14;
  plVar16[3] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  lVar14 = 0;
  plVar16[5] = 0;
  plVar16[4] = 0;
  plVar16[10] = 0;
  plVar16[7] = 0;
  plVar16[6] = 0;
  plVar16[9] = 0;
  plVar16[8] = 0;
  *(undefined4 *)(plVar16 + 0xb) = 0x3f800000;
  alStack_140[1] = 0;
  alStack_140[0] = 0;
  alStack_140[3] = 0;
  alStack_140[2] = 0;
  uStack_120 = 0x3f800000;
  aiStack_170[2] = 0;
  aiStack_170[3] = 0;
  aiStack_170[0] = 0;
  aiStack_170[1] = 0;
  aiStack_170[6] = 0;
  aiStack_170[7] = 0;
  aiStack_170[4] = 0;
  aiStack_170[5] = 0;
  aiStack_170[8] = 0x3f800000;
  plVar17 = (long *)puVar10[1];
  plVar8 = plVar16;
  uStack_70 = extraout_x8;
  for (plVar15 = (long *)*puVar10; plVar15 != plVar17; plVar15 = plVar15 + 2) {
    plVar8 = alStack_140;
    plVar9 = (long *)(*plVar15 + 0x30);
    FUN_10736d004();
  }
  iVar20 = 0;
  plVar13 = (long *)param_3[2];
  for (plVar17 = (long *)param_3[1]; plVar17 != plVar13; plVar17 = plVar17 + 0xf) {
    lStack_e8 = plVar17[1];
    lVar14 = *plVar17;
    lStack_f0 = lVar14;
    if (plVar17[1] != 0) {
      do {
        func_0x00010736df44();
      } while (extraout_w10 != 0);
    }
    func_0x00010736e194();
    func_0x00010736e0d8();
    plVar15 = (long *)plVar17[6];
    for (plVar21 = (long *)plVar17[5]; plVar21 != plVar15; plVar21 = plVar21 + 4) {
      FUN_1073558a4(alStack_100,plVar21 + 1);
      func_0x00010726236c(&lStack_f0,alStack_100[0] + 0x30);
      func_0x000107262398(auStack_a8,&lStack_f0,0x1138369c0);
      func_0x00010724ef84(auStack_118,auStack_a8);
      func_0x000104c2f714(auStack_a8);
      func_0x00010724b3d8(&lStack_f0);
      piVar6 = aiStack_170;
      plVar9 = (long *)(alStack_100[0] + 0x30);
      FUN_10736d004();
      func_0x00010736e164(alStack_100[0]);
      if (piVar6[4] != 0) {
        FUN_10735c55c(piVar6);
        piVar6[4] = 0;
      }
      *piVar6 = iVar20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      plVar8 = alStack_100;
      func_0x00010735ce54();
    }
    iVar20 = iVar20 + 1;
  }
  plVar13 = (long *)param_6[1];
  for (plVar17 = (long *)*param_6; uVar4 = plVar17 == plVar13, !(bool)uVar4; plVar17 = plVar17 + 2)
  {
    plVar21 = (long *)param_3[8];
    if ((plVar21 != (long *)0x0) && (param_3[10] != 0)) {
      plVar15 = (long *)*plVar17;
      plVar7 = param_3 + 10;
      plVar9 = plVar15 + 6;
      func_0x00010786e5e4();
      uVar22 = (long)plVar21 - 1;
      if (((ulong)plVar21 & uVar22) == 0) {
        plVar23 = (long *)((ulong)plVar7 & uVar22);
      }
      else {
        plVar23 = plVar7;
        if (plVar21 <= plVar7) {
          uVar2 = 0;
          if (plVar21 != (long *)0x0) {
            uVar2 = (ulong)plVar7 / (ulong)plVar21;
          }
          plVar23 = (long *)((long)plVar7 - uVar2 * (long)plVar21);
        }
      }
      plVar19 = *(long **)(plVar16[7] + (long)plVar23 * 8);
      plVar8 = plVar7;
      if (plVar19 != (long *)0x0) {
        do {
          while( true ) {
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) goto LAB_10736c47c;
            plVar11 = (long *)plVar19[1];
            if (plVar11 != plVar7) break;
            plVar8 = plVar19 + 2;
            plVar9 = plVar15 + 6;
            func_0x00010735c498();
            if (((ulong)plVar8 & 1) != 0) goto LAB_10736c510;
          }
          if (((ulong)plVar21 & uVar22) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar22);
          }
          else if (plVar21 <= plVar11) {
            uVar2 = 0;
            if (plVar21 != (long *)0x0) {
              uVar2 = (ulong)plVar11 / (ulong)plVar21;
            }
            plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar21);
          }
        } while (plVar11 == plVar23);
      }
    }
LAB_10736c47c:
    lStack_e8 = plVar17[1];
    lStack_f0 = *plVar17;
    plVar21 = plVar8;
    if (plVar17[1] != 0) {
      do {
        func_0x00010736df44();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010736e194();
    func_0x00010736e0d8();
    func_0x00010736e164(*plVar17);
    plVar8 = plVar21;
    if ((int)plVar21[2] == 1) {
      lVar12 = plVar17[1];
      lVar14 = *plVar17;
      if (plVar17[1] != 0) {
        do {
          func_0x00010736df44();
        } while (extraout_w10_01 != 0);
      }
      lStack_e8 = plVar21[1];
      param_2 = *plVar21;
      lStack_f0 = param_2;
      plVar21[1] = lVar12;
      *plVar21 = lVar14;
      func_0x00010736e0d8();
    }
    else {
      FUN_10735c55c();
      lVar12 = plVar17[1];
      lVar14 = *plVar17;
      plVar21[1] = plVar17[1];
      *plVar21 = lVar14;
      if (lVar12 != 0) {
        do {
          func_0x00010736df44();
        } while (extraout_w10_02 != 0);
      }
      *(undefined4 *)(plVar21 + 2) = 1;
    }
LAB_10736c510:
  }
  FUN_10736da00(aiStack_170);
  plVar8 = alStack_140;
  FUN_10736da00();
  func_0x00010736e010(uStack_70);
  if ((bool)uVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  FUN_10736da00(aiStack_170);
  FUN_10736da00(alStack_140);
  func_0x00010735c688(plVar16 + 7);
  FUN_1073589cc(plVar16 + 4);
  func_0x00010735c6e4(plVar18);
  __Unwind_Resume();
  func_0x00010736e188();
  fVar24 = (float)lVar14;
  fVar25 = (float)param_2;
  plVar17 = (long *)plVar15[1];
  if (plVar17 != (long *)0x0) {
    uVar22 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar22) == 0) {
      plVar18 = (long *)(uVar22 & (ulong)plVar8);
    }
    else {
      plVar18 = plVar8;
      if (plVar17 <= plVar8) {
        uVar2 = 0;
        if (plVar17 != (long *)0x0) {
          uVar2 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar18 = (long *)((long)plVar8 - uVar2 * (long)plVar17);
      }
    }
    plVar16 = *(long **)(*plVar15 + (long)plVar18 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          fVar24 = (float)lVar14;
          fVar25 = (float)param_2;
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10736c6a8;
          plVar13 = (long *)plVar16[1];
          if (plVar13 != plVar8) break;
          plVar13 = plVar16 + 2;
          func_0x00010735c498(plVar13,plVar9);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10736c7b8;
        }
        if (((ulong)plVar17 & uVar22) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar22);
        }
        else if (plVar17 <= plVar13) {
          uVar2 = 0;
          if (plVar17 != (long *)0x0) {
            uVar2 = (ulong)plVar13 / (ulong)plVar17;
          }
          plVar13 = (long *)((long)plVar13 - uVar2 * (long)plVar17);
        }
      } while (plVar13 == plVar18);
    }
  }
LAB_10736c6a8:
  plVar13 = plVar15 + 2;
  plVar16 = (long *)0x68;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = (long)plVar8;
  func_0x000107269bac(plVar16 + 2,plVar9);
  *(undefined4 *)(plVar16 + 10) = 0;
  *(undefined4 *)(plVar16 + 0xc) = 0;
  func_0x00010736e1a0();
  func_0x00010736e030();
  if ((plVar17 == (long *)0x0) || (fVar25 * (float)plVar17 < fVar24)) {
    bVar3 = (long *)0x2 < plVar17;
    bVar5 = plVar17 == (long *)0x3;
    func_0x00010736dffc((long)plVar17 << 1);
    uVar1 = extraout_x8_00;
    if (!bVar3 || bVar5) {
      uVar1 = extraout_x9;
    }
    FUN_10735c31c(plVar15,uVar1);
    plVar17 = (long *)plVar15[1];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      plVar18 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
    }
    else {
      plVar18 = plVar8;
      if (plVar17 <= plVar8) {
        uVar22 = 0;
        if (plVar17 != (long *)0x0) {
          uVar22 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar18 = (long *)((long)plVar8 - uVar22 * (long)plVar17);
      }
    }
  }
  lVar14 = *plVar15;
  plVar9 = *(long **)(lVar14 + (long)plVar18 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar16 = *plVar13;
    *plVar13 = (long)plVar16;
    *(long **)(lVar14 + (long)plVar18 * 8) = plVar13;
    if (*plVar16 != 0) {
      plVar9 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar9) {
        uVar22 = 0;
        if (plVar17 != (long *)0x0) {
          uVar22 = (ulong)plVar9 / (ulong)plVar17;
        }
        plVar9 = (long *)((long)plVar9 - uVar22 * (long)plVar17);
      }
      *(long **)(lVar14 + (long)plVar9 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar9;
    *plVar9 = (long)plVar16;
  }
  func_0x00010736e114();
  FUN_10735c5ec();
LAB_10736c7b8:
  return plVar16 + 10;
}



/* Entry: 10736c7f0; end: 10736c90b;  */

void FUN_10736c7f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined2 *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_d0;
  long lStack_c8;
  long alStack_b8 [16];
  undefined8 uStack_38;
  
  plVar4 = param_2;
  func_0x00010736e0e0();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = plVar4[2];
  uStack_38 = extraout_x8;
  for (lVar5 = plVar4[1]; uVar3 = lVar5 == lVar8, !(bool)uVar3; lVar5 = lVar5 + 0x78) {
    FUN_10736d844(alStack_b8,lVar5);
    FUN_10736d434(param_1,alStack_b8);
    plVar4 = alStack_b8;
    FUN_10735a134();
  }
  param_2 = param_2 + 9;
  while (param_2 = (long *)*param_2, param_2 != (long *)0x0) {
    if ((int)param_2[0xc] != 0) {
      lStack_c8 = param_2[0xb];
      lStack_d0 = param_2[10];
      if (param_2[0xb] != 0) {
        do {
          func_0x00010736df44();
        } while (extraout_w10 != 0);
      }
      FUN_1073558a4(alStack_b8,&lStack_d0);
      if (alStack_b8[0] != 0) {
        FUN_10736d860(param_1,alStack_b8);
      }
      plVar4 = alStack_b8;
      func_0x00010735ce54();
      func_0x00010736e15c();
    }
  }
  func_0x00010736e010(uStack_38);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010735ce54(alStack_b8);
    func_0x00010736e15c();
    FUN_10735a0a0(param_1);
    __Unwind_Resume();
    lVar5 = 0;
    plVar6 = plVar4 + 9;
    while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
      if ((int)plVar6[0xc] != 0) {
        lStack_138 = plVar6[0xb];
        lStack_140 = plVar6[10];
        if (plVar6[0xb] != 0) {
          do {
            func_0x00010736df44();
          } while (extraout_w10_00 != 0);
        }
        lVar5 = lVar5 + 1;
        func_0x00010736e15c();
      }
    }
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0;
    lVar1 = plVar4[2];
    lVar7 = lVar5;
    for (lVar8 = plVar4[1]; uVar2 = uStack_130, lVar8 != lVar1; lVar8 = lVar8 + 0x78) {
      lVar9 = *(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28) >> 5;
      lStack_128 = lVar9;
      func_0x0001057f9264(&lStack_140,&lStack_128);
      lVar7 = lVar9 + lVar7;
    }
    *extraout_x8_00 = (short)*plVar4;
    *(long *)(extraout_x8_00 + 8) = lStack_138;
    *(long *)(extraout_x8_00 + 4) = lStack_140;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0;
    *(undefined8 *)(extraout_x8_00 + 0xc) = uVar2;
    *(long *)(extraout_x8_00 + 0x10) = lVar5;
    *(long *)(extraout_x8_00 + 0x14) = plVar4[5] - plVar4[4] >> 4;
    *(long *)(extraout_x8_00 + 0x18) = lVar7;
    func_0x0001057f951c(&lStack_140);
    return;
  }
  return;
}


