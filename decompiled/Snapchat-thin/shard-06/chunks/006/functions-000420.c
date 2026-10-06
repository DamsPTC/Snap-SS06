/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bf1d48; end: 104bf1d53;  */

void FUN_104bf1d48(long *param_1,long param_2)

{
  func_0x000104bf21e8();
  func_0x00010066df1c();
  FUN_104bf1e14(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000100671c8c();
  return;
}



/* Entry: 104bf1d54; end: 104bf1d8b;  */

void FUN_104bf1d54(long *param_1,long param_2)

{
  func_0x00010066df1c();
  FUN_104bf1e14(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000100671c8c();
  return;
}



/* Entry: 104bf1d8c; end: 104bf1df7;  */

long * FUN_104bf1d8c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104bf1dd4();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 104bf1df8; end: 104bf1e13;  */

void FUN_104bf1df8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  FUN_104bd35f4();
  func_0x000100671b7c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    FUN_104bf1ec0(param_4,unaff_x22);
    param_4 = lStack_48 + 0x20;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_104bf1e8c();
  FUN_104bf1ee0(auStack_70);
  return;
}



/* Entry: 104bf1e14; end: 104bf1e8b;  */

void FUN_104bf1e14(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x000100671b7c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    FUN_104bf1ec0(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x20;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_104bf1e8c();
  FUN_104bf1ee0(auStack_60);
  return;
}



/* Entry: 104bf1e8c; end: 104bf1ebf;  */

void FUN_104bf1e8c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000100100fec(param_2 + 8);
  }
  return;
}



/* Entry: 104bf1ec0; end: 104bf1edf;  */

void FUN_104bf1ec0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  func_0x00010066f050();
  return;
}



/* Entry: 104bf1ee0; end: 104bf1f0f;  */

long FUN_104bf1ee0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104bf1f10(param_1);
  }
  return param_1;
}



/* Entry: 104bf1f10; end: 104bf1f2f;  */

void FUN_104bf1f10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
    func_0x000100100fec(lVar1 + -0x18);
  }
  return;
}



/* Entry: 104bf1f30; end: 104bf1f8f;  */

void FUN_104bf1f30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x20) {
    func_0x000100100fec(param_3 + -0x18);
  }
  return;
}



/* Entry: 104bf1f90; end: 104bf1f97;  */

void FUN_104bf1f90(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010066df1c(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x20;
    func_0x000100100fec(lVar1 + -0x18);
  }
  return;
}



/* Entry: 104bf1f98; end: 104bf2033;  */

void FUN_104bf1f98(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010066df1c();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x20;
    func_0x000100100fec(lVar1 + -0x18);
  }
  return;
}



/* Entry: 104bf2034; end: 104bf20b3;  */

long FUN_104bf2034(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000100671894();
  FUN_104bf20b4();
  FUN_104bf1d8c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  FUN_104bf1ec0(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  func_0x000104bf2200();
  lVar1 = unaff_x19[1];
  func_0x000104bf21c8();
  return lVar1;
}



/* Entry: 104bf20b4; end: 104bf20f3;  */

long * FUN_104bf20b4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x7ffffffffffffff;
    }
    return plVar2;
  }
  FUN_104bf1d48();
  func_0x00010066df1c();
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    param_1 = (long *)(lVar1 + -0x18);
    func_0x000100100fec(param_1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return param_1;
}



/* Entry: 104bf20f4; end: 104bf20fb;  */

void FUN_104bf20f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010066df1c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x000100100fec(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bf20fc; end: 104bf213b;  */

void FUN_104bf20fc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010066df1c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x000100100fec(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bf213c; end: 104bf2193;  */

undefined8 FUN_104bf213c(void)

{
  int iVar1;
  
  if ((bRam00000001130a84a0 & 1) == 0) {
    iVar1 = 0x130a84a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a8490);
      ___cxa_guard_release(0x1130a84a0);
    }
  }
  return 0x1130a8490;
}



/* Entry: 104bf2194; end: 104bf222b;  */

void FUN_104bf2194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 104bf222c; end: 104bf25eb;  */

void FUN_104bf222c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *unaff_x19;
  long *plVar8;
  long lVar9;
  undefined8 in_register_00005008;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  code *apcStack_b8 [2];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  code *pcStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_58;
  
  func_0x0001003b6a94();
  uStack_58 = extraout_x8;
  if ((bRam00000001136a38b8 & 1) == 0) {
    iVar5 = 0x136a38b8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_104bf2ce8();
      FUN_104bf2a50(0);
      FUN_104bf2a50(1);
      func_0x00010b9941f8(apcStack_b8);
      func_0x00010b993b40(&pcStack_88,apcStack_b8[0],0x113815da0);
      if (((ulong)pcStack_78 & 1) == 0) goto LAB_104bf2550;
      func_0x0001003adcc0(0x1136a38c0,&pcStack_88);
      func_0x0001003b12dc(&pcStack_88);
      FUN_104bdc2fc(apcStack_b8);
      ___cxa_guard_release(0x1136a38b8);
    }
  }
  func_0x0001003b2110(auStack_e8,0x1136a38c8);
  func_0x000104bf44f8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10 != 0);
  }
  pcStack_d8 = FUN_104bf25ec;
  uStack_f8 = 0;
  uStack_f0 = 0;
  pcVar6 = (code *)0x40;
  __Znwm();
  pcStack_88 = FUN_104bf3de4;
  ppuStack_80 = &PTR_FUN_1107e8810;
  pcStack_78 = FUN_104bf25ec;
  puStack_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  puStack_70 = param_1;
  func_0x00010b9ac22c();
  pcStack_c0 = pcVar6;
  func_0x000104bf43d4();
  pcVar3 = pcVar6 + 8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *(long *)pcVar3 = *(long *)pcVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_88 = pcVar6;
  func_0x00010b9a8ef8(apcStack_b8,&pcStack_88);
  FUN_104bda388(&pcStack_88);
  FUN_104bda3d0(&pcStack_c0);
  func_0x000104bf3c24(&puStack_d0);
  pcStack_88 = FUN_104bf2970;
  func_0x000104bf44f8();
  ppuStack_80 = (undefined **)param_1;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_00 != 0);
  }
  FUN_104bf2864(auStack_a8,&pcStack_88);
  pcStack_d8 = FUN_104bf29c8;
  func_0x000104bf44f8();
  puStack_d0 = param_1;
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_01 != 0);
  }
  FUN_104bf2864(auStack_98,&pcStack_d8);
  FUN_104bdb9bc(auStack_e0,auStack_e8,apcStack_b8,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98((long)apcStack_b8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar4 = lVar9 == -0x10;
  } while (!(bool)uVar4);
  func_0x000104bf3c24(&puStack_d0);
  func_0x000104bf4434();
  func_0x000104bf3c24(&uStack_f8);
  func_0x0001003b1f60(auStack_e8);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar8 = puVar7 + 1;
  *plVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1107e8860;
  pcVar3 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar3,auStack_e0);
  puVar7[3] = &PTR_DAT_1107e88b0;
  func_0x000104bf44f8();
  puVar7[9] = in_register_00005008;
  puVar7[8] = param_1;
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_02 != 0);
  }
  apcStack_b8[0] = pcVar3;
  if ((puVar7[5] == 0) || (uVar4 = *(long *)(puVar7[5] + 8) == -1, (bool)uVar4)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_88 = pcVar3;
    ppuStack_80 = (undefined **)puVar7;
    func_0x0001003a8180(puVar7 + 4,&pcStack_88);
    func_0x0001003a90c4(&pcStack_88);
    if (puVar7[5] != 0) goto LAB_104bf2490;
  }
  else {
LAB_104bf2490:
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_03 != 0);
  }
  *unaff_x19 = (long)pcVar3;
  FUN_104bf4260(apcStack_b8);
  FUN_104bdbf78(auStack_e0);
  func_0x0001003b6bd8(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_104bf2550:
  FUN_104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104bf2558);
  (*pcVar3)();
}



/* Entry: 104bf25ec; end: 104bf2863;  */

void FUN_104bf25ec(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x20;
  long *plVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  func_0x000104bf433c();
  plVar3 = (long *)*unaff_x20;
  func_0x00010b9a9608();
  (**(code **)(*plVar3 + 0x10))(&uStack_d0,plVar3,param_1);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_104bf2d3c(&lStack_98);
  lStack_b8 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x000104bf4284();
      lStack_b8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_104be4a3c(&uStack_40,&uStack_e0,&uStack_50);
  FUN_104be4a64(alStack_30,&uStack_40);
  FUN_104be4a18(&uStack_40);
  FUN_104be4a18(&uStack_50);
  func_0x0001003b69cc(&uStack_58);
  func_0x0001003b6c18(&uStack_40,uStack_58);
  uStack_68 = uStack_58;
  lStack_70 = lStack_b8;
  lStack_b8 = 0;
  uStack_58 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_90 = alStack_30[0] + 0x50;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  FUN_104bf2f68();
  if ((int)lVar1 == 0) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    lVar1 = lStack_70;
    *puVar2 = &PTR_DAT_1107e8780;
    lStack_70 = 0;
    uStack_68 = 0;
    func_0x000104bf4518(lVar1);
    if (extraout_x8_00 != 0) {
      func_0x000104bf43f4();
    }
  }
  else {
    FUN_104be4a64(&lStack_80,alStack_30);
  }
  func_0x0001000df5a0(&lStack_90);
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001003b6c00();
      } while (extraout_w10 != 0);
    }
    FUN_104bf2fa8(&lStack_70);
    FUN_104be4a18(&lStack_90);
  }
  uStack_a8 = uStack_38;
  uStack_b0 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_104be4a18(&lStack_80);
  plVar3 = &lStack_70;
  func_0x000104bf3544();
  func_0x000104bf4374();
  func_0x000104bf44c4();
  if (plVar3 != (long *)0x0) {
    func_0x0001003b84d0();
  }
  FUN_104be4a18(alStack_30);
  func_0x0001003b6c64(&uStack_b0);
  func_0x000104bf4384();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x000104bf4284();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bf4304();
  FUN_104bddedc(alStack_30);
  FUN_104bf3564(&lStack_98);
  func_0x000104bf437c();
  FUN_104be4a18(&uStack_d0);
  return;
}



/* Entry: 104bf2864; end: 104bf296f;  */

void FUN_104bf2864(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code *pcVar4;
  code **ppcVar5;
  code **ppcVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  code **ppcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x000104bf4294();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uVar8 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar4 = (code *)0x40;
  uStack_98 = uStack_b0;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_104bf3fbc;
  ppuStack_70 = &PTR_FUN_1107e8830;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_58 = uVar8;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar4;
  func_0x000104bf43c4();
  pcVar1 = pcVar4 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *(long *)pcVar1 = *(long *)pcVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar7 = (int)&pcStack_78;
  pcStack_78 = pcVar4;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_78);
  ppcVar5 = &pcStack_80;
  FUN_104bda3d0();
  func_0x000104bf4434();
  func_0x0001003b6bd8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    func_0x000104bf42b4();
  }
  else {
    func_0x000104bf43c4();
    __ZdlPv(pcVar4);
  }
  ppcVar6 = ppcVar5;
  FUN_104bd46a0();
  pcStack_b8 = FUN_104bf2970;
  pcStack_d0 = pcVar4;
  ppcStack_c8 = ppcVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)*ppcVar6 + 0x18))(&uStack_e0);
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x000104bf4448();
  func_0x000104bf42f4();
  func_0x000104bf4318();
  return;
}



/* Entry: 104bf2970; end: 104bf29c7;  */

void FUN_104bf2970(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*(long *)*param_1 + 0x18))(&uStack_30);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000104bf4448();
  func_0x000104bf42f4();
  func_0x000104bf4318();
  return;
}



/* Entry: 104bf29c8; end: 104bf2a4f;  */

void FUN_104bf29c8(void)

{
  undefined8 *unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000104bf433c();
  plVar1 = (long *)*unaff_x20;
  func_0x00010529dcb8(auStack_48);
  (**(code **)(*plVar1 + 0x20))(&uStack_30,plVar1,auStack_48);
  func_0x000100100fec(auStack_48);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000104bf4448();
  func_0x000104bf42f4();
  func_0x000104bf42ec();
  return;
}



/* Entry: 104bf2a50; end: 104bf2c4b;  */

void FUN_104bf2a50(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x000104bf4294();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113815d68);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113815d68) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_104bf2aa0;
  if ((bRam0000000113815d98 & 1) == 0) goto LAB_104bf2ab8;
  while( true ) {
    func_0x000108b80888(0x113815d88);
LAB_104bf2aa0:
    func_0x0001003b6bd8(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf2ab8:
    iVar2 = 0x13815d98;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf2ce8();
      pcVar3 = "fetchGroups";
      func_0x0001003a83dc(&uStack_98,"fetchGroups");
      FUN_104bf3c4c();
      FUN_104bef4f0();
      func_0x0001003adcc0(auStack_80,pcVar3);
      func_0x000104bf4454(auStack_a8);
      uStack_70 = uStack_98;
      uStack_98 = 0;
      func_0x0001003aef98(auStack_68,auStack_a8);
      func_0x0001003a83dc(&uStack_b0,"getTrendingPublicGroups");
      FUN_104bf3cbc();
      FUN_104bdbd48(auStack_c0);
      uStack_58 = uStack_b0;
      uStack_b0 = 0;
      func_0x0001003aef98(auStack_50,auStack_c0);
      pcVar3 = "getTopPublicGroupsForUser";
      func_0x0001003a83dc(&uStack_c8,"getTopPublicGroupsForUser");
      FUN_104bf3cbc();
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_90,pcVar3);
      func_0x000104bf4454(auStack_d8);
      uStack_40 = uStack_c8;
      uStack_c8 = 0;
      func_0x0001003aef98(auStack_38,auStack_d8);
      FUN_104bdbd44(0x113815d88,0x113815da0,1,&uStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_68 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000104bf4334(auStack_d8);
      func_0x000104bf4334(auStack_90);
      func_0x0001003a8c94(&uStack_c8);
      func_0x000104bf4334(auStack_c0);
      func_0x0001003a8c94(&uStack_b0);
      func_0x000104bf4334(auStack_a8);
      func_0x000104bf4334(auStack_80);
      func_0x0001003a8c94(&uStack_98);
      ___cxa_guard_release(0x113815d98);
    }
  }
  return;
}



/* Entry: 104bf2c4c; end: 104bf2ce7;  */

undefined8 FUN_104bf2c4c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815d80 & 1) == 0) {
    iVar4 = 0x13815d80;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bf2ce8();
      lStack_20 = lRam0000000113815da0;
      if (lRam0000000113815da0 != 0) {
        piVar1 = (int *)(lRam0000000113815da0 + 8);
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
      func_0x0001003ad9a4(0x113815d70,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815d80);
    }
  }
  return 0x113815d70;
}



/* Entry: 104bf2ce8; end: 104bf2d3b;  */

void FUN_104bf2ce8(void)

{
  int iVar1;
  
  if ((bRam0000000113815da8 & 1) == 0) {
    iVar1 = 0x13815da8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815da0,"_djinni_interface_GroupsManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815da8);
      return;
    }
  }
  return;
}



/* Entry: 104bf2d3c; end: 104bf2d7b;  */

void FUN_104bf2d3c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001003b6a94();
  uStack_28 = extraout_x8;
  FUN_104bf2d7c(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001003b6bd8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_104bf2d7c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_104bf2d98(&uStack_51);
  return;
}



/* Entry: 104bf2d7c; end: 104bf2d97;  */

void FUN_104bf2d7c(void)

{
  undefined1 uStack_11;
  
  FUN_104bf2d98(&uStack_11);
  return;
}



/* Entry: 104bf2d98; end: 104bf2e0f;  */

void FUN_104bf2d98(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001003b6a94();
  uStack_28 = extraout_x8;
  FUN_104bf2e2c(auStack_40,1);
  FUN_104bf2e84(lStack_30);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_104bf2e10(lVar2 + 0x18);
  FUN_104bf2f58(auStack_40);
  func_0x0001003b6bd8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_104bf2f58();
  func_0x000104bf42b4();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_104bf2e10;
    lStack_58 = extraout_x8_00[1];
    puStack_60 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x000104bf4284();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(puVar3,&puStack_60);
    func_0x0001003a90c4(&puStack_60);
    return;
  }
  return;
}



/* Entry: 104bf2e10; end: 104bf2e2b;  */

void FUN_104bf2e10(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        FUN_104bf4284();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(lVar1,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 104bf2e2c; end: 104bf2e53;  */

long FUN_104bf2e2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104bf2e54();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104bf2e54; end: 104bf2e83;  */

undefined8 * FUN_104bf2e54(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x11a7b9611a7b962) {
    puVar1 = (undefined8 *)(param_2 * 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  FUN_104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e8908;
  param_1[1] = 0;
  func_0x00010b9a4650(param_1 + 3);
  return param_1;
}



/* Entry: 104bf2e84; end: 104bf2ec7;  */

undefined8 * FUN_104bf2e84(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e8908;
  param_1[1] = 0;
  func_0x00010b9a4650(param_1 + 3);
  return param_1;
}



/* Entry: 104bf2ec8; end: 104bf2ecb;  */

void FUN_104bf2ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf2ecc; end: 104bf2edf;  */

void FUN_104bf2ecc(void)

{
  func_0x000104bf2eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf2ee0; end: 104bf2ef7;  */

long FUN_104bf2ee0(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xb8))();
  func_0x00010b9a4e8c(param_1 + 0x90);
  FUN_104bda910(param_1 + 0x78);
  func_0x00010b9a1f08(param_1 + 0x30);
  func_0x000107c278e8(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 104bf2ef8; end: 104bf2f57;  */

void FUN_104bf2ef8(long param_1,long param_2,undefined8 param_3)

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
        FUN_104bf4284();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bf2f58; end: 104bf2f67;  */

void FUN_104bf2f58(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bf2f68; end: 104bf2fa7;  */

bool FUN_104bf2f68(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x90) != 0;
    func_0x000104bf42bc();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104bf2fa8; end: 104bf332b;  */

void FUN_104bf2fa8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  func_0x000104bf4294();
  uStack_100 = param_2;
  lStack_f8 = param_3;
  uStack_68 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10 != 0);
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_00 != 0);
  }
  plStack_80 = (long *)0x0;
  lStack_78 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_f0 = param_2;
  lStack_e8 = param_3;
  FUN_104be4a3c(&plStack_a8,&uStack_f0,&uStack_b8);
  FUN_104be4a64(&plStack_80,&plStack_a8);
  FUN_104be4a18(&plStack_a8);
  FUN_104be4a18(&uStack_b8);
  plStack_a8 = plStack_80 + 10;
  uStack_a0 = 1;
  __ZNSt3__15mutex4lockEv();
  plVar2 = plStack_80;
  plStack_c8 = plStack_80;
  lStack_c0 = lStack_78;
  if (lStack_78 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_01 != 0);
  }
  while (plVar5 = plVar2, FUN_104bf2f68(), ((ulong)plVar5 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(plVar2 + 4,&plStack_a8);
  }
  FUN_104be4a18(&plStack_c8);
  if (plStack_80[0x12] == 0) {
    lVar6 = *plStack_80;
    lStack_88 = plStack_80[2];
    lVar10 = plStack_80[1];
    plStack_80[1] = 0;
    plStack_80[2] = 0;
    *plStack_80 = 0;
    lStack_98 = lVar6;
    lStack_90 = lVar10;
    func_0x0001000df5a0(&plStack_a8);
    FUN_104be4a18(&plStack_80);
    func_0x00010b9abe10(&plStack_a8,(lVar10 - lVar6) / 200);
    lVar7 = 0;
    lVar9 = 0x18;
    for (uVar8 = 0; uVar1 = (lVar10 - lVar6) / 200, uVar4 = uVar8 == uVar1, uVar8 < uVar1;
        uVar8 = uVar8 + 1) {
      func_0x00010528a964(&plStack_80,lVar6 + lVar7);
      func_0x00010b9a9020((long)plStack_a8 + lVar9,&plStack_80);
      func_0x00010b9a8d98(&plStack_80);
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + 200;
      lVar6 = lStack_98;
      lVar10 = lStack_90;
    }
    func_0x00010b9a8f84(auStack_e0,&plStack_a8);
    FUN_104bddf38(&plStack_a8);
    func_0x000104bf351c(&plStack_80,auStack_e0);
    func_0x000104bf42fc();
    FUN_104bda910(&plStack_80);
    func_0x00010b9a8d98(auStack_e0);
    FUN_104be4d64(&lStack_98);
    FUN_104be4a18(&uStack_f0);
    FUN_104be4a18(&uStack_100);
    func_0x0001003b8370(*(undefined8 *)(param_1 + 8));
    func_0x0001003b6bd8(uStack_68);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_d0);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_d0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104bf31cc);
  (*pcVar3)();
}



/* Entry: 104bf332c; end: 104bf3333;  */

void FUN_104bf332c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001003b6a18();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_FUN_1107e6938;
    FUN_104bf336c();
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x0001003b6c64(unaff_x19 + 0x18);
  func_0x0001003b6c64((long *)(param_1 + 8));
  return;
}



/* Entry: 104bf3334; end: 104bf3347;  */

void FUN_104bf3334(void)

{
  func_0x0001003ba0a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf3348; end: 104bf334b;  */

void FUN_104bf3348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e89c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf334c; end: 104bf335f;  */

void FUN_104bf334c(void)

{
  FUN_104bf3360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf3360; end: 104bf336b;  */

void FUN_104bf3360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e89c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf336c; end: 104bf33cb;  */

void FUN_104bf336c(void)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_FUN_1107e6938;
  FUN_104bdfe3c(auStack_28,&ppuStack_30);
  func_0x000104bf4460();
  func_0x000104bf42bc();
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 104bf33cc; end: 104bf33eb;  */

void FUN_104bf33cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_104bf33ec(param_1,&uStack_18);
  return;
}



/* Entry: 104bf33ec; end: 104bf347f;  */

void FUN_104bf33ec(undefined8 param_1,long *param_2)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x0001003b8280();
  func_0x0001003b83f4();
  func_0x0001003b8444();
  func_0x0001003b6c10();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x38);
  FUN_104bf3480(param_2,alStack_30);
  func_0x0001003b844c();
  if (param_2 == (long *)0x0) {
    func_0x0001003b8460();
  }
  else {
    func_0x000104bf44a4(*(undefined8 *)(*param_2 + 0x10));
    func_0x000104bf42a4();
  }
  func_0x0001003b846c();
  return;
}



/* Entry: 104bf3480; end: 104bf3497;  */

void FUN_104bf3480(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x78,*param_1);
  return;
}



/* Entry: 104bf3498; end: 104bf34ab;  */

void FUN_104bf3498(void)

{
  FUN_104bf34f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf34ac; end: 104bf34ef;  */

void FUN_104bf34ac(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000104bf4504();
  if (param_3 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10 != 0);
  }
  FUN_104bf2fa8(param_1 + 8);
  func_0x000104bf437c();
  return;
}



/* Entry: 104bf34f0; end: 104bf3563;  */

undefined8 * FUN_104bf34f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e8780;
  func_0x000104bf3544(param_1 + 1);
  return param_1;
}



/* Entry: 104bf3564; end: 104bf3587;  */

void FUN_104bf3564(void)

{
  func_0x0001003b6ce0();
  FUN_104bf3588();
  return;
}



/* Entry: 104bf3588; end: 104bf3593;  */

void FUN_104bf3588(long param_1)

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



/* Entry: 104bf3594; end: 104bf379f;  */

void FUN_104bf3594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
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
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_104bf2d3c(&lStack_98);
  lStack_b8 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      FUN_104bf4284();
      lStack_b8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_104be5630(&uStack_40,param_2,&uStack_50);
  FUN_104be5658(&uStack_30,&uStack_40);
  FUN_104be55fc(&uStack_40);
  FUN_104be55fc(&uStack_50);
  func_0x0001003b69cc(&uStack_58);
  func_0x0001003b6c18(&uStack_40,uStack_58);
  uStack_68 = uStack_58;
  lStack_70 = lStack_b8;
  lStack_b8 = 0;
  uStack_58 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  func_0x000104bf441c();
  __ZNSt3__15mutex4lockEv();
  uVar2 = uStack_30;
  FUN_104bf37a0();
  if ((int)uVar2 == 0) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    lVar1 = lStack_70;
    *puVar3 = &PTR_FUN_1107e87d0;
    lStack_70 = 0;
    uStack_68 = 0;
    func_0x000104bf4518(lVar1);
    if (extraout_x8_00 != 0) {
      func_0x000104bf43f4();
    }
  }
  else {
    FUN_104be5658(&lStack_80,&uStack_30);
  }
  func_0x000104bf4404();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001003b6c00();
      } while (extraout_w10 != 0);
    }
    FUN_104bf37e0(&lStack_70);
    func_0x000104bf44b0();
  }
  uStack_a8 = uStack_38;
  uStack_b0 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_104be55fc(&lStack_80);
  plVar4 = &lStack_70;
  FUN_104bf3c04();
  func_0x000104bf4374();
  func_0x000104bf44c4();
  if (plVar4 != (long *)0x0) {
    func_0x0001003b84d0();
  }
  func_0x000104bf42ec();
  func_0x0001003b8444();
  FUN_104bf3564(&lStack_b8);
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      FUN_104bf4284();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bf4304();
  FUN_104bddedc(&uStack_30);
  func_0x000104bf4384();
  return;
}



/* Entry: 104bf37a0; end: 104bf37df;  */

bool FUN_104bf37a0(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x90) != 0;
    func_0x000104bf42bc();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104bf37e0; end: 104bf3a3b;  */

long * FUN_104bf37e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long alStack_90 [2];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x000104bf4294();
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  uStack_48 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10 != 0);
    do {
      func_0x0001003b6c00();
    } while (extraout_w10_00 != 0);
  }
  plVar4 = (long *)*param_1;
  uStack_a0 = param_2;
  lStack_98 = param_3;
  FUN_104bf3ac4(&lStack_78,&uStack_a0);
  func_0x00010b9abe10(&lStack_80,(lStack_70 - lStack_78) / 0xa8);
  lVar5 = 0;
  lVar7 = 0x18;
  for (uVar6 = 0; uVar1 = (lStack_70 - lStack_78) / 0xa8, uVar2 = uVar6 == uVar1, uVar6 < uVar1;
      uVar6 = uVar6 + 1) {
    func_0x000105297410(auStack_60,lStack_78 + lVar5);
    func_0x00010b9a9020(lStack_80 + lVar7,auStack_60);
    func_0x00010b9a8d98(auStack_60);
    lVar7 = lVar7 + 0x10;
    lVar5 = lVar5 + 0xa8;
  }
  func_0x00010b9a8f84(alStack_90,&lStack_80);
  FUN_104bddf38(&lStack_80);
  func_0x000104bf351c(auStack_60,alStack_90);
  func_0x000104bf42fc();
  FUN_104bda910(auStack_60);
  func_0x00010b9a8d98(alStack_90);
  FUN_104be58b8(&lStack_78);
  do {
    func_0x000104bf4414();
    func_0x000104bf4318();
    plVar3 = (long *)param_1[1];
    func_0x0001003b8370(plVar3);
    while( true ) {
      func_0x0001003b6bd8(uStack_48);
      if ((bool)uVar2) {
        return plVar3;
      }
      ___stack_chk_fail();
      func_0x000104bf42e0();
      func_0x000104bda914(auStack_60);
      func_0x00010b9a8d98(alStack_90);
      plVar3 = &lStack_78;
      FUN_104be58b8(plVar3);
      uVar2 = (int)lVar5 == 1;
      if ((bool)uVar2) break;
      func_0x000104bf4414();
      func_0x000104bf4318();
      uVar2 = (int)lVar5 == 1;
      if (!(bool)uVar2) {
        func_0x000104bf432c();
        FUN_104bd46a0();
        *plVar4 = (long)&PTR_FUN_1107e87d0;
        FUN_104bf3c04(plVar4 + 1);
        return plVar4;
      }
      func_0x000104bf43ac();
      param_1 = (undefined8 *)param_1[1];
      __ZSt17current_exceptionv(auStack_b8);
      func_0x000104bf4460();
      func_0x000104bf42bc();
      ___cxa_end_catch();
    }
    func_0x000104bf43ac();
    func_0x000104bf43b4();
    func_0x00010b99f5f8(alStack_90,plVar3);
    lStack_78 = 2;
    lStack_70 = alStack_90[0];
    alStack_90[0] = 0;
    func_0x000104bf42fc();
    func_0x000104bda914(&lStack_78);
    FUN_104bda93c(alStack_90);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 104bf3a3c; end: 104bf3a3f;  */

undefined8 * FUN_104bf3a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e87d0;
  FUN_104bf3c04(param_1 + 1);
  return param_1;
}



/* Entry: 104bf3a40; end: 104bf3a53;  */

void FUN_104bf3a40(void)

{
  FUN_104bf3a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf3a54; end: 104bf3a97;  */

void FUN_104bf3a54(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000104bf4504();
  if (param_3 != 0) {
    do {
      func_0x0001003b6c00();
    } while (extraout_w10 != 0);
  }
  FUN_104bf37e0(param_1 + 8);
  func_0x000104bf42f4();
  return;
}



/* Entry: 104bf3a98; end: 104bf3ac3;  */

undefined8 * FUN_104bf3a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e87d0;
  FUN_104bf3c04(param_1 + 1);
  return param_1;
}



/* Entry: 104bf3ac4; end: 104bf3bbb;  */

void FUN_104bf3ac4(undefined8 *param_1,undefined8 param_2)

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
  FUN_104be5630(auStack_40,param_2,&uStack_50);
  FUN_104be5658(&puStack_30,auStack_40);
  func_0x000104bf44b0();
  func_0x000104bf4414();
  func_0x000104bf441c();
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  puVar2 = puStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000104bf4284();
      puVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_104bf3bbc(puVar2 + 4,auStack_40,&puStack_60);
  func_0x000104bf4318();
  if (puStack_30[0x12] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104bf3b88);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  param_1[1] = puStack_30[1];
  *param_1 = uVar3;
  param_1[2] = puStack_30[2];
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = 0;
  func_0x000104bf4404();
  func_0x000104bf42ec();
  return;
}



/* Entry: 104bf3bbc; end: 104bf3bfb;  */

void FUN_104bf3bbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_104bf3bfc(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 104bf3bfc; end: 104bf3c03;  */

bool FUN_104bf3bfc(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x18) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x90) != 0;
    func_0x000104bf42bc();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104bf3c04; end: 104bf3c4b;  */

undefined8 FUN_104bf3c04(void)

{
  undefined8 unaff_x19;
  
  func_0x000104bf4468();
  func_0x0001003b6ce0();
  FUN_104bf3588();
  return unaff_x19;
}



/* Entry: 104bf3c4c; end: 104bf3cbb;  */

undefined8 FUN_104bf3c4c(void)

{
  int iVar1;
  
  if ((bRam00000001130a84b8 & 1) == 0) {
    iVar1 = 0x130a84b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bf3d2c();
      func_0x00010b9911c4(0x1130a84a8);
      ___cxa_guard_release(0x1130a84b8);
    }
  }
  return 0x1130a84a8;
}



/* Entry: 104bf3cbc; end: 104bf3d2b;  */

undefined8 FUN_104bf3cbc(void)

{
  int iVar1;
  
  if ((bRam00000001130a84e8 & 1) == 0) {
    iVar1 = 0x130a84e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bf3d88();
      func_0x00010b9911c4(0x1130a84d8);
      ___cxa_guard_release(0x1130a84e8);
    }
  }
  return 0x1130a84d8;
}



/* Entry: 104bf3d2c; end: 104bf3d87;  */

undefined8 FUN_104bf3d2c(void)

{
  int iVar1;
  
  if ((bRam00000001130a84d0 & 1) == 0) {
    iVar1 = 0x130a84d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010528aad8();
      func_0x00010b990868(0x1130a84c0);
      ___cxa_guard_release(0x1130a84d0);
    }
  }
  return 0x1130a84c0;
}



/* Entry: 104bf3d88; end: 104bf3de3;  */

undefined8 FUN_104bf3d88(void)

{
  int iVar1;
  
  if ((bRam00000001130a8500 & 1) == 0) {
    iVar1 = 0x130a8500;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010529756c();
      func_0x00010b990868(0x1130a84f0);
      ___cxa_guard_release(0x1130a8500);
    }
  }
  return 0x1130a84f0;
}



/* Entry: 104bf3de4; end: 104bf3f6f;  */

undefined8 **** FUN_104bf3de4(undefined8 ****param_1,undefined8 ***param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 ***extraout_x8_01;
  undefined8 ***pppuVar5;
  undefined8 ***extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001003b6a94();
  uStack_38 = extraout_x8;
  func_0x000104bf4364();
  while( true ) {
    func_0x0001003b6bd8(uStack_38);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    iVar4 = (int)param_2;
    if (iVar4 == 0) break;
    in_ZR = iVar4 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      FUN_104bf2d3c(&pppuStack_60);
      func_0x000104bf44d0();
      if (extraout_x8_00 != 0) {
        plVar1 = (long *)(extraout_x8_00 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010b9a4940();
      func_0x000104bf440c();
      pppuVar5 = pppuStack_60;
      if ((pppuStack_60 != (undefined8 ***)0x0) && (pppuStack_60[2] != (undefined8 **)0x0)) {
        do {
          func_0x000104bf4284();
          pppuVar5 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      param_2 = &ppuStack_68;
      ppuStack_68 = pppuVar5;
      func_0x000104bf4304();
      FUN_104bddedc(&ppuStack_68);
      param_1 = &pppuStack_60;
      FUN_104bf3564();
    }
    else {
      in_ZR = iVar4 == 2;
      if (!(bool)in_ZR) goto LAB_104bf3f64;
      ___cxa_begin_catch();
      func_0x0001003a8364();
      func_0x000104bf4350();
      uStack_58 = 0;
      pppuStack_60 = param_1;
      func_0x000104bf443c();
      func_0x000104bf438c();
      func_0x000104bf43e4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
      FUN_104bf2d3c(&ppuStack_68);
      pppuStack_78 = pppuStack_60;
      pppuStack_60 = (undefined8 ***)0x0;
      func_0x000104bf4498();
      func_0x000104bf44e4();
      func_0x000104bf42fc();
      func_0x000104bf440c();
      FUN_104bda93c(&ppuStack_70);
      func_0x0001003a8c94(&pppuStack_78);
      pppuVar5 = (undefined8 ***)ppuStack_68;
      if (((undefined8 ***)ppuStack_68 != (undefined8 ***)0x0) &&
         ((undefined8 **)ppuStack_68[2] != (undefined8 **)0x0)) {
        do {
          func_0x000104bf4284();
          pppuVar5 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      param_2 = &ppuStack_70;
      ppuStack_70 = pppuVar5;
      func_0x000104bf4304();
      FUN_104bddedc(&ppuStack_70);
      FUN_104bf3564(&ppuStack_68);
      param_1 = &pppuStack_60;
      func_0x0001003a8c94();
    }
    ___cxa_end_catch();
  }
SUB_104bf3c24:
  __Unwind_Resume();
  if (param_1[3] != (undefined8 ***)0x0) {
    func_0x0001000df548();
  }
  return param_1 + 2;
LAB_104bf3f64:
  do {
    FUN_104bd46a0();
  } while ((int)param_2 != 0);
  goto SUB_104bf3c24;
}



/* Entry: 104bf3f70; end: 104bf3fbb;  */

long FUN_104bf3f70(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 104bf3fbc; end: 104bf4147;  */

undefined8 **** FUN_104bf3fbc(undefined8 ****param_1,undefined8 ***param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 ***extraout_x8_01;
  undefined8 ***pppuVar5;
  undefined8 ***extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001003b6a94();
  uStack_38 = extraout_x8;
  func_0x000104bf4364();
  while( true ) {
    func_0x0001003b6bd8(uStack_38);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    iVar4 = (int)param_2;
    if (iVar4 == 0) break;
    in_ZR = iVar4 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      FUN_104bf2d3c(&pppuStack_60);
      func_0x000104bf44d0();
      if (extraout_x8_00 != 0) {
        plVar1 = (long *)(extraout_x8_00 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010b9a4940();
      func_0x000104bf440c();
      pppuVar5 = pppuStack_60;
      if ((pppuStack_60 != (undefined8 ***)0x0) && (pppuStack_60[2] != (undefined8 **)0x0)) {
        do {
          func_0x000104bf4284();
          pppuVar5 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      param_2 = &ppuStack_68;
      ppuStack_68 = pppuVar5;
      func_0x000104bf4304();
      FUN_104bddedc(&ppuStack_68);
      param_1 = &pppuStack_60;
      FUN_104bf3564();
    }
    else {
      in_ZR = iVar4 == 2;
      if (!(bool)in_ZR) goto LAB_104bf413c;
      ___cxa_begin_catch();
      func_0x0001003a8364();
      func_0x000104bf4350();
      uStack_58 = 0;
      pppuStack_60 = param_1;
      func_0x000104bf443c();
      func_0x000104bf438c();
      func_0x000104bf43e4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
      FUN_104bf2d3c(&ppuStack_68);
      pppuStack_78 = pppuStack_60;
      pppuStack_60 = (undefined8 ***)0x0;
      func_0x000104bf4498();
      func_0x000104bf44e4();
      func_0x000104bf42fc();
      func_0x000104bf440c();
      FUN_104bda93c(&ppuStack_70);
      func_0x0001003a8c94(&pppuStack_78);
      pppuVar5 = (undefined8 ***)ppuStack_68;
      if (((undefined8 ***)ppuStack_68 != (undefined8 ***)0x0) &&
         ((undefined8 **)ppuStack_68[2] != (undefined8 **)0x0)) {
        do {
          func_0x000104bf4284();
          pppuVar5 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      param_2 = &ppuStack_70;
      ppuStack_70 = pppuVar5;
      func_0x000104bf4304();
      FUN_104bddedc(&ppuStack_70);
      FUN_104bf3564(&ppuStack_68);
      param_1 = &pppuStack_60;
      func_0x0001003a8c94();
    }
    ___cxa_end_catch();
  }
SUB_104bf3c24:
  __Unwind_Resume();
  if (param_1[3] != (undefined8 ***)0x0) {
    func_0x0001000df548();
  }
  return param_1 + 2;
LAB_104bf413c:
  do {
    FUN_104bd46a0();
  } while ((int)param_2 != 0);
  goto SUB_104bf3c24;
}



/* Entry: 104bf4148; end: 104bf416b;  */

long FUN_104bf4148(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 104bf416c; end: 104bf417f;  */

void FUN_104bf416c(void)

{
  FUN_104bf4250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf4180; end: 104bf4193;  */

void FUN_104bf4180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bf4188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf4194; end: 104bf41a7;  */

void FUN_104bf4194(void)

{
  FUN_104bf41b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf41a8; end: 104bf41b7;  */

undefined1  [16] FUN_104bf41a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bf41b8; end: 104bf424f;  */

void FUN_104bf41b8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1107e88b0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x000104bf3c24(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bf4250; end: 104bf425f;  */

void FUN_104bf4250(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e8860;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf4260; end: 104bf4283;  */

void FUN_104bf4260(long param_1)

{
  func_0x0001003b6ce0();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 104bf4284; end: 104bf452b;  */

void FUN_104bf4284(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 104bf452c; end: 104bf48ab;  */

void FUN_104bf452c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 auStack_f8 [2];
  code *pcStack_e8;
  undefined8 auStack_e0 [2];
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined8 *puStack_a0;
  byte abStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  func_0x000104bf5298();
  uStack_68 = extraout_x8;
  if ((bRam00000001136a38d8 & 1) == 0) {
    iVar6 = 0x136a38d8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_104bf4f7c();
      FUN_104bf4ba4(0);
      FUN_104bf4ba4(1);
      func_0x00010b9941f8(&pcStack_d0);
      func_0x00010b993b40(&pcStack_a8,pcStack_d0,0x113815dc8);
      if ((abStack_98[0] & 1) == 0) goto LAB_104bf4824;
      func_0x0001003adcc0(0x1136a38e8,&pcStack_a8);
      func_0x0001003b12dc(&pcStack_a8);
      FUN_104bdc2fc(&pcStack_d0);
      ___cxa_guard_release(0x1136a38d8);
    }
  }
  func_0x0001003b2110(auStack_b8,0x1136a38f0);
  pcStack_d0 = FUN_104bf49b8;
  func_0x000104bf52cc();
  uStack_c8 = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104bf5248();
    } while (extraout_w10 != 0);
  }
  FUN_104bf48ac(&pcStack_a8,&pcStack_d0);
  pcStack_e8 = FUN_104bf4a74;
  func_0x000104bf52cc();
  auStack_e0[0] = param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bf5248();
    } while (extraout_w10_00 != 0);
  }
  FUN_104bf48ac(abStack_98,&pcStack_e8);
  pcStack_100 = FUN_104bf4adc;
  func_0x000104bf52cc();
  auStack_f8[0] = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000104bf5248();
    } while (extraout_w10_01 != 0);
  }
  FUN_104bf48ac(auStack_88,&pcStack_100);
  pcStack_118 = FUN_104bf4b44;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  if (param_3[1] != 0) {
    plVar8 = (long *)(param_3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_110 = uVar10;
  uStack_108 = uVar11;
  FUN_104bf48ac(auStack_78,&pcStack_118);
  FUN_104bdb9bc(auStack_b0,auStack_b8,&pcStack_a8,4);
  lVar9 = 0x30;
  do {
    func_0x00010b9a8d98((long)&pcStack_a8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar5 = lVar9 == -0x10;
  } while (!(bool)uVar5);
  FUN_104bf4fd0(&uStack_110);
  FUN_104bf4fd0(auStack_f8);
  FUN_104bf4fd0(auStack_e0);
  func_0x000104bf52bc();
  func_0x0001003b1f60(auStack_b8);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar8 = puVar7 + 1;
  *plVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1107e8a30;
  pcVar4 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar4,auStack_b0);
  puVar7[3] = &PTR_DAT_1107e8a80;
  func_0x000104bf52cc();
  puVar7[9] = uVar11;
  puVar7[8] = uVar10;
  if (extraout_x8_03 != 0) {
    do {
      func_0x000104bf5248();
    } while (extraout_w10_02 != 0);
  }
  if ((puVar7[5] == 0) || (uVar5 = *(long *)(puVar7[5] + 8) == -1, pcVar3 = pcVar4, (bool)uVar5)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_a8 = pcVar4;
    puStack_a0 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&pcStack_a8);
    func_0x0001003a90c4(&pcStack_a8);
    pcStack_d0 = pcVar4;
    pcVar3 = pcVar4;
    if (puVar7[5] != 0) goto LAB_104bf4760;
  }
  else {
LAB_104bf4760:
    do {
      pcStack_d0 = pcVar3;
      func_0x000104bf5248();
      pcVar3 = pcStack_d0;
    } while (extraout_w10_03 != 0);
  }
  *param_1 = (long)pcVar4;
  FUN_104bf51d0(&pcStack_d0);
  FUN_104bdbf78(auStack_b0);
  func_0x000104bf5234(uStack_68);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_104bf4824:
  FUN_104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104bf482c);
  (*pcVar4)();
}



/* Entry: 104bf48ac; end: 104bf49b7;  */

void FUN_104bf48ac(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  code *pcVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined8 extraout_x8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [24];
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x000104bf5298();
  uVar12 = param_2[1];
  uVar11 = *param_2;
  uVar10 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar3 = (code *)0x40;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_104bf4ffc;
  ppuStack_70 = &PTR_FUN_1107e8a00;
  uStack_68 = uVar11;
  uStack_60 = uVar12;
  uStack_58 = uVar10;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar3;
  func_0x000104bf5288();
  pcVar9 = pcVar3 + 8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
    if (bVar2) {
      *(long *)pcVar9 = *(long *)pcVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppcVar8 = &pcStack_78;
  pcStack_78 = pcVar3;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_78);
  ppcVar4 = &pcStack_80;
  FUN_104bda3d0();
  func_0x000104bf52bc();
  func_0x000104bf5234(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppcVar8 == 0) {
    func_0x000104bf5214();
  }
  else {
    func_0x000104bf5288();
    __ZdlPv(pcVar3);
  }
  ppcVar5 = ppcVar4;
  FUN_104bd46a0();
  ppcVar6 = ppcVar5;
  func_0x000104bf51fc();
  ppcVar7 = ppcVar6;
  func_0x000104bf5228();
  func_0x00010b9abfa4(ppcVar8,2);
  pcVar9 = *ppcVar5;
  func_0x00010529dcb8(auStack_108,ppcVar6);
  func_0x000105293f28(auStack_130,ppcVar7);
  func_0x00010b9a9608(ppcVar8);
  (**(code **)(*(long *)pcVar9 + 0x10))(pcVar9,auStack_108,auStack_130,ppcVar8);
  func_0x000100100fec(auStack_108);
  *(undefined2 *)(ppcVar4 + 1) = 1;
  *ppcVar4 = (code *)0x0;
  return;
}



/* Entry: 104bf49b8; end: 104bf4a73;  */

void FUN_104bf49b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long *plVar3;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  puVar1 = param_1;
  FUN_104bf51fc();
  puVar2 = puVar1;
  func_0x000104bf5228();
  func_0x00010b9abfa4(param_2,2);
  plVar3 = (long *)*param_1;
  func_0x00010529dcb8(auStack_58,puVar1);
  func_0x000105293f28(auStack_80,puVar2);
  func_0x00010b9a9608(param_2);
  (**(code **)(*plVar3 + 0x10))(plVar3,auStack_58,auStack_80,param_2);
  func_0x000100100fec(auStack_58);
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf4a74; end: 104bf4adb;  */

void FUN_104bf4a74(long *param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  FUN_104bf51fc();
  func_0x000104bf5228();
  func_0x000104bf5260();
  func_0x00010b9a9518(param_2);
  func_0x000104bf52b0(*(undefined8 *)(*param_1 + 0x18));
  func_0x000104bf5258();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf4adc; end: 104bf4b43;  */

void FUN_104bf4adc(long *param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  FUN_104bf51fc();
  func_0x000104bf5228();
  func_0x000104bf5260();
  func_0x00010b9a9518(param_2);
  func_0x000104bf52b0(*(undefined8 *)(*param_1 + 0x20));
  func_0x000104bf5258();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf4b44; end: 104bf4ba3;  */

void FUN_104bf4b44(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long *plVar1;
  undefined1 auStack_38 [24];
  
  FUN_104bf51fc();
  plVar1 = (long *)*param_1;
  func_0x00010529dcb8(auStack_38);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_38);
  func_0x000104bf5258();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf4ba4; end: 104bf4edf;  */

void FUN_104bf4ba4(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
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
  
  func_0x000104bf5298();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a38d0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a38d0) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_104bf4bf8;
  if ((bRam00000001136a38e0 & 1) == 0) goto LAB_104bf4c1c;
  while( true ) {
    func_0x000108b80888(0x1136a38f8);
LAB_104bf4bf8:
    func_0x000104bf5234(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf4c1c:
    iVar2 = 0x136a38e0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf4f7c();
      pcVar3 = "initWindow";
      func_0x0001003a83dc(&uStack_120,"initWindow");
      func_0x0001003b166c(auStack_140);
      func_0x00010529dde0();
      puVar4 = auStack_c8;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000105293ffc();
      func_0x000104bf52c4();
      FUN_104bef4f0();
      func_0x0001003adcc0(auStack_a8,puVar4);
      FUN_104bdbd48(auStack_130,auStack_140,auStack_c8,3);
      uStack_98 = uStack_120;
      uStack_120 = 0;
      func_0x0001003aef98(auStack_90,auStack_130);
      pcVar3 = "moveForward";
      func_0x0001003a83dc(&uStack_148,"moveForward");
      func_0x0001003b166c(auStack_168);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_e8,pcVar3);
      FUN_104bef760();
      func_0x000104bf52c4();
      FUN_104bdbd48(auStack_158,auStack_168,auStack_e8,2);
      uStack_80 = uStack_148;
      uStack_148 = 0;
      func_0x0001003aef98(auStack_78,auStack_158);
      pcVar3 = "moveBack";
      func_0x0001003a83dc(&uStack_170,"moveBack");
      func_0x0001003b166c(auStack_190);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_108,pcVar3);
      FUN_104bef760();
      func_0x000104bf52c4();
      FUN_104bdbd48(auStack_180,auStack_190,auStack_108,2);
      uStack_68 = uStack_170;
      uStack_170 = 0;
      func_0x0001003aef98(auStack_60,auStack_180);
      pcVar3 = "clipFrontToNewestCommitted";
      func_0x0001003a83dc(&uStack_198,"clipFrontToNewestCommitted");
      func_0x0001003b166c(auStack_1b8);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_118,pcVar3);
      FUN_104bdbd48(auStack_1a8,auStack_1b8,auStack_118,1);
      uStack_50 = uStack_198;
      uStack_198 = 0;
      func_0x0001003aef98(auStack_48,auStack_1a8);
      FUN_104bdbd44(0x1136a38f8,0x113815dc8,1,&uStack_98,4);
      lVar5 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_90 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000104bf520c(auStack_1a8);
      func_0x000104bf520c(auStack_118);
      func_0x000104bf520c(auStack_1b8);
      func_0x0001003a8c94(&uStack_198);
      func_0x000104bf520c(auStack_180);
      lVar5 = 0x18;
      do {
        func_0x000104bf52a8();
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -8);
      func_0x000104bf520c(auStack_190);
      func_0x0001003a8c94(&uStack_170);
      func_0x000104bf520c(auStack_158);
      lVar5 = 0x18;
      do {
        func_0x000104bf52a8();
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -8);
      func_0x000104bf520c(auStack_168);
      func_0x0001003a8c94(&uStack_148);
      func_0x000104bf520c(auStack_130);
      lVar5 = 0x28;
      do {
        func_0x000104bf52a8();
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x000104bf520c(auStack_140);
      func_0x0001003a8c94(&uStack_120);
      ___cxa_guard_release(0x1136a38e0);
    }
  }
  return;
}



/* Entry: 104bf4ee0; end: 104bf4f7b;  */

undefined8 FUN_104bf4ee0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815dc0 & 1) == 0) {
    iVar4 = 0x13815dc0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bf4f7c();
      lStack_20 = lRam0000000113815dc8;
      if (lRam0000000113815dc8 != 0) {
        piVar1 = (int *)(lRam0000000113815dc8 + 8);
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
      func_0x0001003ad9a4(0x113815db0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815dc0);
    }
  }
  return 0x113815db0;
}



/* Entry: 104bf4f7c; end: 104bf4fcf;  */

void FUN_104bf4f7c(void)

{
  int iVar1;
  
  if ((bRam0000000113815dd0 & 1) == 0) {
    iVar1 = 0x13815dd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815dc8,"_djinni_interface_MessageWindowManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815dd0);
      return;
    }
  }
  return;
}



/* Entry: 104bf4fd0; end: 104bf4ffb;  */

long FUN_104bf4fd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bf4ffc; end: 104bf506b;  */

void FUN_104bf4ffc(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 104bf506c; end: 104bf50d3;  */

long FUN_104bf506c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 104bf50d4; end: 104bf50e7;  */

void FUN_104bf50d4(void)

{
  FUN_104bf51c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf50e8; end: 104bf50fb;  */

void FUN_104bf50e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bf50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf50fc; end: 104bf510f;  */

void FUN_104bf50fc(void)

{
  FUN_104bf5120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf5110; end: 104bf511f;  */

undefined1  [16] FUN_104bf5110(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bf5120; end: 104bf51bf;  */

void FUN_104bf5120(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1107e8a80;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  FUN_104bf4fd0(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bf51c0; end: 104bf51cf;  */

void FUN_104bf51c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e8a30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf51d0; end: 104bf51fb;  */

long * FUN_104bf51d0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}


