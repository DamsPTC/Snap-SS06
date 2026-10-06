/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bdd1c0; end: 104bdd243;  */

long * FUN_104bdd1c0(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_50 [16];
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_28;
  
  func_0x000104bdda1c();
  pplStack_40 = &plStack_28;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    plVar5 = param_4;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar5 = plStack_28;
      } while (cVar2 != '\0');
    }
    *param_4 = lVar4;
    param_4 = plVar5 + 1;
    plStack_28 = param_4;
  }
  uStack_38 = 1;
  FUN_104bdd244(auStack_50);
  return param_4;
}



/* Entry: 104bdd244; end: 104bdd273;  */

long FUN_104bdd244(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104bdd274(param_1);
  }
  return param_1;
}



/* Entry: 104bdd274; end: 104bdd293;  */

void FUN_104bdd274(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 104bdd294; end: 104bdd337;  */

void FUN_104bdd294(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 104bdd338; end: 104bdd3db;  */

long FUN_104bdd338(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_104bdd3dc(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_104bdd16c();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  *param_2 = 0;
  FUN_104bdd41c(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x000104bdd4f0(&plStack_58);
  return lVar3;
}



/* Entry: 104bdd3dc; end: 104bdd41b;  */

long * FUN_104bdd3dc(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_104bdd160();
  func_0x000100048240();
  plVar1 = param_1 + 2;
  FUN_104bdd454(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x000100048290();
  return plVar1;
}



/* Entry: 104bdd41c; end: 104bdd453;  */

void FUN_104bdd41c(long *param_1,long param_2)

{
  func_0x000100048240();
  FUN_104bdd454(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000100048290();
  return;
}



/* Entry: 104bdd454; end: 104bdd4bf;  */

void FUN_104bdd454(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [16];
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_28;
  
  func_0x000104bdda1c();
  ppuStack_40 = &puStack_28;
  for (; puVar1 = param_4 + 1, param_2 != param_3; param_2 = param_2 + 1) {
    *param_4 = *param_2;
    *param_2 = 0;
    param_4 = puVar1;
    puStack_28 = puVar1;
  }
  uStack_38 = 1;
  FUN_104bdd4c0();
  FUN_104bdd244(auStack_50);
  return;
}



/* Entry: 104bdd4c0; end: 104bdd51b;  */

void FUN_104bdd4c0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 104bdd51c; end: 104bdd523;  */

void FUN_104bdd51c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100048240(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 104bdd524; end: 104bdd583;  */

void FUN_104bdd524(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100048240();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 104bdd584; end: 104bdd5ab;  */

void FUN_104bdd584(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bdd588);
  (*pcVar1)();
}



/* Entry: 104bdd5ac; end: 104bdd5ff;  */

void FUN_104bdd5ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 104bdd600; end: 104bdd60f;  */

void FUN_104bdd600(long param_1)

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



/* Entry: 104bdd610; end: 104bdd623;  */

void FUN_104bdd610(void)

{
  func_0x000104bdd62c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdd624; end: 104bdd663;  */

void FUN_104bdd624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bdd9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bdd664; end: 104bdd68b;  */

void FUN_104bdd664(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104bdd68c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104bdd68c; end: 104bdd723;  */

void FUN_104bdd68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x000104bdd998();
  uStack_38 = extraout_x8;
  FUN_104bdd740(auStack_50,1);
  FUN_104bdd794(lStack_40,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_104bdd724(param_1,lVar6 + 0x18);
  FUN_104bdd8e8();
  func_0x000104bdd940(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bdd960();
  FUN_104bdd8e8();
  func_0x000104bdd938();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_104bdd724;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_70);
    func_0x0001003a90c4(&puStack_70);
    return;
  }
  return;
}



/* Entry: 104bdd724; end: 104bdd73f;  */

void FUN_104bdd724(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 104bdd740; end: 104bdd767;  */

long FUN_104bdd740(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104bdd768();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104bdd768; end: 104bdd793;  */

undefined8 * FUN_104bdd768(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  FUN_104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e6408;
  FUN_104bdd7f8(param_1 + 3);
  return param_1;
}



/* Entry: 104bdd794; end: 104bdd7d7;  */

undefined8 * FUN_104bdd794(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e6408;
  FUN_104bdd7f8(param_1 + 3);
  return param_1;
}



/* Entry: 104bdd7d8; end: 104bdd7db;  */

void FUN_104bdd7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bdd7dc; end: 104bdd7ef;  */

void FUN_104bdd7dc(void)

{
  FUN_104bdd86c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdd7f0; end: 104bdd7f7;  */

void FUN_104bdd7f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bdd9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bdd7f8; end: 104bdd86b;  */

undefined8 * FUN_104bdd7f8(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *param_3;
  *param_1 = &PTR_DAT_1107e6240;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_1107e62c0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = uVar2;
  param_1[8] = lVar5;
  FUN_104bdd600(0);
  return param_1;
}



/* Entry: 104bdd86c; end: 104bdd87b;  */

void FUN_104bdd86c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bdd87c; end: 104bdd8e7;  */

void FUN_104bdd87c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bdd8e8; end: 104bdd8f7;  */

void FUN_104bdd8e8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bdd8f8; end: 104bdd91f;  */

undefined8 * FUN_104bdd8f8(undefined8 *param_1)

{
  FUN_104bdd920(*param_1);
  return param_1;
}



/* Entry: 104bdd920; end: 104bdda3b;  */

void FUN_104bdd920(long param_1)

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



/* Entry: 104bdda3c; end: 104bddaff;  */

void FUN_104bdda3c(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000104bd4df4(auStack_28);
  func_0x000104bde5bc("reservePartition");
  func_0x000104bde5bc("partitionMakeMetric");
  func_0x000104bde5bc("partitionGetMetrics");
  func_0x000104bde5bc("metricAddDimension");
  func_0x000104bde5bc("metricSubmitValue");
  func_0x00010b9a8f54(param_1,auStack_28);
  FUN_104bd4e40(auStack_28);
  return;
}



/* Entry: 104bddb00; end: 104bddc27;  */

long * FUN_104bddb00(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  long *plVar4;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x40;
  __Znwm();
  pcStack_78 = FUN_104bddc64;
  ppuStack_70 = &PTR_DAT_1107e64c0;
  uStack_68 = param_3;
  func_0x00010b9ac22c();
  lStack_98 = lVar3;
  func_0x000104bde5cc();
  plVar4 = (long *)(lVar3 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lStack_90 = lVar3;
  func_0x00010b9a8ef8(auStack_88,&lStack_90);
  lVar3 = *param_2;
  func_0x0001003a83dc(&pcStack_78,param_1);
  func_0x000104bd9bd4(lVar3 + 0x10,&pcStack_78);
  func_0x00010b9a9020();
  func_0x0001003a8c94(&pcStack_78);
  func_0x00010b9a8d98(auStack_88);
  FUN_104bda388(&lStack_90);
  plVar4 = &lStack_98;
  FUN_104bda3d0();
  func_0x000104bde610(uStack_48);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x0001003a8c94(&pcStack_78);
  func_0x00010b9a8d98(auStack_88);
  FUN_104bda388(&lStack_90);
  FUN_104bda3d0(&lStack_98);
  func_0x000104bde564();
  func_0x000104bde5f8();
  return plVar4;
}



/* Entry: 104bddc28; end: 104bddc63;  */

void FUN_104bddc28(void)

{
  func_0x000104bde5f8();
  return;
}



/* Entry: 104bddc64; end: 104bddc77;  */

void FUN_104bddc64(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104bddc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104bddc78; end: 104bddea3;  */

void FUN_104bddc78(undefined8 param_1,undefined8 **param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  func_0x00010b9abfe4(auStack_68,param_2,0);
  func_0x000104bde59c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104bde534();
    goto LAB_104bdde34;
  }
  func_0x00010b9ac048(&lStack_70,param_2,1);
  func_0x000104bde59c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x000104bde534();
  }
  else {
    puStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    puStack_90 = (undefined8 *)0x0;
    lVar6 = 0x18;
    for (lVar5 = *(long *)(lStack_70 + 0x10); lVar5 != 0; lVar5 = lVar5 + -1) {
      func_0x00010b9a8f04(&puStack_60,lStack_70 + lVar6);
      if (((byte)puStack_58 & 0xfe) == 2) {
        func_0x00010b9a9358(&puStack_98,&puStack_60);
        func_0x000104bdd2f0(&puStack_90,&puStack_98);
        func_0x000104bde5dc();
      }
      param_2 = &puStack_60;
      func_0x00010b9a8d98(param_2);
      lVar6 = lVar6 + 0x10;
    }
    func_0x00010b9a6a00();
    puVar4 = (undefined8 *)0x50;
    __Znwm();
    plVar7 = puVar4 + 1;
    *plVar7 = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_1107e64f0;
    puVar1 = puVar4 + 3;
    puStack_58 = puStack_88;
    puStack_60 = puStack_90;
    uStack_50 = uStack_80;
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_104bdc650(puVar1,auStack_68,param_2,&puStack_60);
    func_0x000104bdd014(&puStack_60);
    lVar6 = puVar4[5];
    if ((lVar6 == 0) || (*(long *)(lVar6 + 8) == -1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_60 = puVar1;
      puStack_58 = puVar4;
      func_0x0001003a8180(puVar4 + 4,&puStack_60);
      func_0x0001003a90c4(&puStack_60);
      lVar6 = puVar4[5];
      if (lVar6 != 0) goto LAB_104bdddf0;
    }
    else {
LAB_104bdddf0:
      plVar7 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_98 = puVar1;
    puStack_60 = puVar1;
    func_0x00010b9a8f78(param_1,&puStack_60);
    FUN_104bddedc(&puStack_60);
    FUN_104bddf10(&puStack_98);
    func_0x000104bdd014(&puStack_90);
  }
  FUN_104bddf38(&lStack_70);
LAB_104bdde34:
  func_0x0001003a8c94(auStack_68);
  return;
}



/* Entry: 104bddea4; end: 104bddea7;  */

void FUN_104bddea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e64f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bddea8; end: 104bddebb;  */

void FUN_104bddea8(void)

{
  func_0x000104bddecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bddebc; end: 104bddedb;  */

void FUN_104bddebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bddec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bddedc; end: 104bddf03;  */

undefined8 * FUN_104bddedc(undefined8 *param_1)

{
  FUN_104bddf04(*param_1);
  return param_1;
}



/* Entry: 104bddf04; end: 104bddf0f;  */

void FUN_104bddf04(long param_1)

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



/* Entry: 104bddf10; end: 104bddf37;  */

long * FUN_104bddf10(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 104bddf38; end: 104bddf5f;  */

undefined8 * FUN_104bddf38(undefined8 *param_1)

{
  FUN_104bddf60(*param_1);
  return param_1;
}



/* Entry: 104bddf60; end: 104bddf8b;  */

void FUN_104bddf60(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bddf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bddf8c; end: 104bde0bf;  */

void FUN_104bddf8c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong uStack_98;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  func_0x00010b9abfa4(param_2,0);
  FUN_104bde0c0(&uStack_50,lVar5,*(long *)(param_2 + 0x18));
  if ((*(byte *)(*(long *)(param_2 + 0x18) + 8) & 1) == 0) {
LAB_104bde048:
    func_0x000104bde534();
  }
  else {
    func_0x000104bde5ec();
    func_0x000104bde59c();
    if ((extraout_x8 & 1) == 0) goto LAB_104bde048;
    FUN_104bdc968(&lStack_48,uStack_50);
    in_ZR = lStack_48 == 1;
    if ((bool)in_ZR) {
      if ((lStack_40 != 0) && (*(long *)(lStack_40 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lStack_40 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_58 = lStack_40;
      func_0x00010b9a8f78(param_1,&lStack_58);
      func_0x000104bde5c4();
    }
    else {
      func_0x00010b99ff08(*(undefined8 *)(param_2 + 0x18),&lStack_40);
      func_0x000104bde534();
    }
    FUN_104bde150(&lStack_48);
  }
  puVar6 = &uStack_50;
  FUN_104bddf10();
  func_0x000104bde610(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_104bde150(&lStack_48);
  FUN_104bddf10(&uStack_50);
  func_0x000104bde564();
  func_0x000104bde56c();
  if (uStack_98 == 0) {
    uStack_98 = 0;
  }
  else {
    ___dynamic_cast(uStack_98,&PTR_DAT_110d7ebe8,&PTR_DAT_1107e62e8,0);
    if (uStack_98 == 0) {
      *puVar6 = 0;
      func_0x000104bde604();
      goto LAB_104bde124;
    }
    uVar7 = uStack_98;
    func_0x00010b9a5818();
    if ((uVar7 & 1) == 0) {
      func_0x00010b9a5890();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104bde110);
      (*pcVar4)();
    }
  }
  *puVar6 = uStack_98;
LAB_104bde124:
  func_0x000104bde5c4();
  return;
}



/* Entry: 104bde0c0; end: 104bde14f;  */

void FUN_104bde0c0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x19;
  ulong uStack_38;
  
  func_0x000104bde56c();
  if (uStack_38 == 0) {
    uStack_38 = 0;
  }
  else {
    ___dynamic_cast(uStack_38,&PTR_DAT_110d7ebe8,&PTR_DAT_1107e62e8,0);
    if (uStack_38 == 0) {
      *unaff_x19 = 0;
      func_0x000104bde604();
      goto LAB_104bde124;
    }
    uVar2 = uStack_38;
    func_0x00010b9a5818();
    if ((uVar2 & 1) == 0) {
      func_0x00010b9a5890();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104bde110);
      (*pcVar1)();
    }
  }
  *unaff_x19 = uStack_38;
LAB_104bde124:
  func_0x000104bde5c4();
  return;
}



/* Entry: 104bde150; end: 104bde177;  */

long * FUN_104bde150(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    FUN_104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    FUN_104bdd920(param_1[1]);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 104bde178; end: 104bde27f;  */

void FUN_104bde178(undefined8 param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_78 [16];
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  func_0x000104bde554();
  FUN_104bde0c0(&uStack_48,param_1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000104bde59c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104bde534();
  }
  else {
    FUN_104bdcb54(&lStack_60,uStack_48);
    func_0x00010b9abe10(&lStack_68,lStack_58 - lStack_60 >> 3);
    lVar2 = 0;
    lVar4 = 0x18;
    for (uVar3 = 0; lVar1 = lStack_68, uVar3 < (ulong)(lStack_58 - lStack_60 >> 3);
        uVar3 = uVar3 + 1) {
      func_0x00010b9a8e18(auStack_78,lStack_60 + lVar2);
      func_0x00010b9a9020(lVar1 + lVar4,auStack_78);
      func_0x00010b9a8d98(auStack_78);
      lVar4 = lVar4 + 0x10;
      lVar2 = lVar2 + 8;
    }
    func_0x00010b9a8f84();
    FUN_104bddf38(&lStack_68);
    func_0x000104bdd014(&lStack_60);
  }
  FUN_104bddf10(&uStack_48);
  return;
}



/* Entry: 104bde280; end: 104bde3c3;  */

void FUN_104bde280(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  byte bStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  func_0x000104bde554();
  FUN_104bde3c4(&uStack_28,param_1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000104bde59c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104bde534();
  }
  else {
    func_0x00010b9abfe4(auStack_30);
    func_0x000104bde59c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x000104bde534();
    }
    else {
      lVar1 = unaff_x20;
      func_0x00010b9abfa4();
      func_0x00010b9a8f04(auStack_40,lVar1);
      if ((bStack_38 & 0xfe) == 2) {
        func_0x00010b9a9358(auStack_48,auStack_40);
        FUN_104bdcd20(uStack_28,auStack_30,auStack_48);
        func_0x000104bde5dc();
      }
      else if ((bStack_38 & 0xfc) == 4) {
        puVar2 = auStack_40;
        func_0x00010b9a9588(puVar2);
        FUN_104bdcdb0(uStack_28,auStack_30,puVar2);
      }
      else {
        func_0x00010b9a0050(*(undefined8 *)(unaff_x20 + 0x18),"Invalid dimension value type");
      }
      func_0x000104bde534();
      func_0x00010b9a8d98(auStack_40);
    }
    func_0x0001003a8c94(auStack_30);
  }
  FUN_104bdd8f8(&uStack_28);
  return;
}



/* Entry: 104bde3c4; end: 104bde453;  */

void FUN_104bde3c4(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x19;
  ulong uStack_38;
  
  func_0x000104bde56c();
  if (uStack_38 == 0) {
    uStack_38 = 0;
  }
  else {
    ___dynamic_cast(uStack_38,&PTR_DAT_110d7ebe8,&PTR_DAT_1107e6300,0);
    if (uStack_38 == 0) {
      *unaff_x19 = 0;
      func_0x000104bde604();
      goto LAB_104bde428;
    }
    uVar2 = uStack_38;
    func_0x00010b9a5818();
    if ((uVar2 & 1) == 0) {
      func_0x00010b9a5890();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104bde414);
      (*pcVar1)();
    }
  }
  *unaff_x19 = uStack_38;
LAB_104bde428:
  func_0x000104bde5c4();
  return;
}



/* Entry: 104bde454; end: 104bde533;  */

void FUN_104bde454(double param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  int extraout_w8;
  ulong extraout_x8;
  long lVar3;
  long unaff_x20;
  long lStack_38;
  
  func_0x000104bde554();
  plVar2 = &lStack_38;
  FUN_104bde3c4(plVar2,param_2,*(undefined8 *)(unaff_x20 + 0x18));
  iVar1 = (int)plVar2;
  func_0x000104bde59c();
  if (extraout_w8 == 1) {
    func_0x000104bde5ec();
    func_0x000104bde59c();
    if ((extraout_x8 & 1) != 0) {
      func_0x00010b9ac024();
      if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) != 0) {
        if (iVar1 == 2) {
          lVar3 = 0x10;
        }
        else {
          if (iVar1 != 1) {
            if (iVar1 == 0) {
              FUN_104bdce6c(lStack_38);
            }
            else {
              func_0x00010b9a0050(*(long *)(unaff_x20 + 0x18),"Invalid submit type");
            }
            goto LAB_104bde50c;
          }
          lVar3 = 8;
        }
        plVar2 = *(long **)(*(long *)(lStack_38 + 0x40) + 0x18);
        (**(code **)(*plVar2 + lVar3))(plVar2,lStack_38 + 0x18,(long)param_1);
      }
    }
  }
LAB_104bde50c:
  func_0x000104bde534();
  FUN_104bdd8f8(&lStack_38);
  return;
}



/* Entry: 104bde534; end: 104bde623;  */

void FUN_104bde534(void)

{
  undefined8 *unaff_x19;
  
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bde624; end: 104bde673;  */

void FUN_104bde624(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  
  func_0x000104bdeee8();
  FUN_104bde674(auStack_58);
  func_0x000104bdeed0(*(undefined8 *)(*(long *)*param_1 + 8));
  func_0x000104bdee30();
  return;
}



/* Entry: 104bde674; end: 104bde71f;  */

void FUN_104bde674(undefined8 param_1,undefined4 param_2,long *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *extraout_x8;
  char *extraout_x9;
  undefined1 auStack_60 [24];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_1107e6720;
  uStack_40 = 0;
  uStack_28 = param_2;
  func_0x00010002b838(auStack_60,"Module");
  if (*param_3 == 0) {
    pcVar1 = "__unattributed__";
  }
  else {
    func_0x000104bdee6c();
    pcVar1 = extraout_x9;
    if (!(bool)in_ZR) {
      pcVar1 = extraout_x8;
    }
  }
  FUN_104bded34(&ppuStack_48,auStack_60,pcVar1);
  FUN_104bdedd0(param_1,&ppuStack_48);
  func_0x000104bdee44();
  func_0x000104bded74(&ppuStack_48);
  return;
}



/* Entry: 104bde720; end: 104bde723;  */

undefined8 * FUN_104bde720(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e66d0;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 104bde724; end: 104bde787;  */

void FUN_104bde724(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  
  puVar1 = param_1;
  FUN_104bdef24();
  FUN_104bde674(auStack_58,param_1,param_2);
  (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,auStack_58,*param_3);
  func_0x000104bdee30();
  return;
}



/* Entry: 104bde788; end: 104bde7c3;  */

void FUN_104bde788(undefined8 param_1)

{
  code *extraout_x8;
  undefined1 auStack_48 [40];
  
  func_0x000104bdeee8();
  func_0x000104bdef10();
  func_0x000104bdee4c();
  (*extraout_x8)(param_1,auStack_48);
  func_0x000104bdee30();
  return;
}



/* Entry: 104bde7c4; end: 104bde8a7;  */

void FUN_104bde7c4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *extraout_x8;
  code *extraout_x8_00;
  char *extraout_x9;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  FUN_104bde674(auStack_70,param_1,param_2);
  func_0x00010002b838(auStack_48,"Backend");
  if (*param_3 == 0) {
    pcVar1 = "__unattributed__";
  }
  else {
    func_0x000104bdee6c();
    pcVar1 = extraout_x9;
    if (!(bool)in_ZR) {
      pcVar1 = extraout_x8;
    }
  }
  FUN_104bded34(auStack_70,auStack_48,pcVar1);
  FUN_104bdedd0(auStack_98,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010014d224(auStack_68,auStack_90);
  uStack_50 = uStack_78;
  func_0x000104bdee30();
  FUN_104bdef24();
  func_0x000104bdee4c();
  (*extraout_x8_00)();
  func_0x000104bdeef4();
  return;
}



/* Entry: 104bde8a8; end: 104bde907;  */

void FUN_104bde8a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  
  puVar1 = (undefined8 *)0x0;
  FUN_104bdef24();
  FUN_104bde674(auStack_58,0,param_2);
  (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,auStack_58,*param_3);
  func_0x000104bdee30();
  return;
}



/* Entry: 104bde908; end: 104bde94f;  */

void FUN_104bde908(void)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_104bde624(0xd,&uStack_28);
  func_0x0001003a8c94(&uStack_28);
  return;
}



/* Entry: 104bde950; end: 104bde9af;  */

void FUN_104bde950(void)

{
  code *extraout_x8;
  
  func_0x000104bdeee8(0xe);
  func_0x000104bdef10();
  func_0x000104bdee4c();
  (*extraout_x8)();
  func_0x000104bdee30();
  return;
}



/* Entry: 104bde9b0; end: 104bde9ef;  */

void FUN_104bde9b0(void)

{
  long extraout_x8;
  
  FUN_104bdef24();
  func_0x000104bdef10();
  func_0x000104bdee60();
  func_0x000104bdeed0(*(undefined8 *)(extraout_x8 + 8));
  func_0x000104bdee30();
  return;
}



/* Entry: 104bde9f0; end: 104bdea07;  */

void FUN_104bde9f0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *extraout_x8;
  code *extraout_x8_00;
  char *extraout_x9;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  FUN_104bde674(auStack_70,10,param_2);
  func_0x00010002b838(auStack_48,"Backend");
  if (*param_3 == 0) {
    pcVar1 = "__unattributed__";
  }
  else {
    func_0x000104bdee6c();
    pcVar1 = extraout_x9;
    if (!(bool)in_ZR) {
      pcVar1 = extraout_x8;
    }
  }
  FUN_104bded34(auStack_70,auStack_48,pcVar1);
  FUN_104bdedd0(auStack_98,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010014d224(auStack_68,auStack_90);
  uStack_50 = uStack_78;
  func_0x000104bdee30();
  FUN_104bdef24();
  func_0x000104bdee4c();
  (*extraout_x8_00)();
  func_0x000104bdeef4();
  return;
}



/* Entry: 104bdea08; end: 104bdea7f;  */

void FUN_104bdea08(void)

{
  undefined8 *puVar1;
  long extraout_x8;
  undefined8 auStack_80 [10];
  
  puVar1 = auStack_80;
  func_0x000104bdeefc();
  func_0x000104bdeeac();
  func_0x000104bdeeac(auStack_80,0x22);
  FUN_104bdef24();
  func_0x000104bdee60();
  func_0x000104bdeedc(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x000104bdeec4(*(undefined8 *)(*(long *)*puVar1 + 0x10));
  func_0x000104bdeebc();
  func_0x000104bdeeb4();
  return;
}



/* Entry: 104bdea80; end: 104bdeaf7;  */

void FUN_104bdea80(void)

{
  undefined8 *puVar1;
  long extraout_x8;
  undefined8 auStack_80 [10];
  
  puVar1 = auStack_80;
  func_0x000104bdeefc();
  func_0x000104bdeeac();
  func_0x000104bdeeac(auStack_80,0x24);
  FUN_104bdef24();
  func_0x000104bdee60();
  func_0x000104bdeedc(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x000104bdeec4(*(undefined8 *)(*(long *)*puVar1 + 0x10));
  func_0x000104bdeebc();
  func_0x000104bdeeb4();
  return;
}



/* Entry: 104bdeaf8; end: 104bdeb47;  */

void FUN_104bdeaf8(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 auStack_48 [40];
  
  FUN_104bde674(auStack_48,0x25,param_2);
  FUN_104bdef24();
  func_0x000104bdee60();
  (**(code **)(extraout_x8 + 0x10))();
  func_0x000104bdee30();
  return;
}



/* Entry: 104bdeb48; end: 104bdeb6f;  */

void FUN_104bdeb48(void)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  
  puVar1 = (undefined8 *)0x26;
  func_0x000104bdeee8();
  FUN_104bde674(auStack_58);
  func_0x000104bdeed0(*(undefined8 *)(*(long *)*puVar1 + 8));
  func_0x000104bdee30();
  return;
}



/* Entry: 104bdeb70; end: 104bdec6f;  */

void FUN_104bdeb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *extraout_x8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_104bde674(auStack_80,0x2b,param_2);
  func_0x00010002b838(auStack_98,"CreatedViews");
  FUN_104bdece0(param_5);
  FUN_104bdec70(auStack_80,auStack_98,param_5);
  func_0x00010002b838(auStack_b0,"VisitedNodes");
  FUN_104bdece0(param_4);
  FUN_104bdec70(auStack_80,auStack_b0,param_4);
  FUN_104bdedd0(auStack_58,auStack_80);
  func_0x000104bdee44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000104bdeef4();
  FUN_104bdef24();
  func_0x000104bdee4c();
  (*extraout_x8)();
  func_0x000104bded74(auStack_58);
  return;
}



/* Entry: 104bdec70; end: 104bdecdf;  */

undefined8 FUN_104bdec70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen(param_3);
  FUN_104bded34(param_1,&uStack_40,param_3,uVar1);
  func_0x000104bdee44();
  return param_1;
}



/* Entry: 104bdece0; end: 104bded33;  */

char * FUN_104bdece0(ulong param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "101_1000";
  if (1000 < param_1) {
    pcVar1 = "1000_plus";
  }
  pcVar2 = "11_100";
  if (100 < param_1) {
    pcVar2 = pcVar1;
  }
  pcVar1 = "1_10";
  if (10 < param_1) {
    pcVar1 = pcVar2;
  }
  pcVar2 = "0";
  if (0 < (long)param_1) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}



/* Entry: 104bded34; end: 104bdeda3;  */

long FUN_104bded34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 104bdeda4; end: 104bdedab;  */

long FUN_104bdeda4(long param_1)

{
  return param_1 + 8;
}



/* Entry: 104bdedac; end: 104bdedbf;  */

void FUN_104bdedac(void)

{
  func_0x000104bded74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdedc0; end: 104bdedcf;  */

undefined4 FUN_104bdedc0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 104bdedd0; end: 104bdee1b;  */

undefined8 * FUN_104bdedd0(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_1107e66d0;
  func_0x00010015bc98(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_1107e6720;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 104bdee1c; end: 104bdef23;  */

undefined1 * FUN_104bdee1c(void)

{
  undefined **ppuStack0000000000000008;
  
  ppuStack0000000000000008 = &PTR_DAT_1107e66d0;
  func_0x0001000e30f4(&stack0x00000010);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 104bdef24; end: 104bdefbf;  */

undefined8 FUN_104bdef24(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113815ca8 & 1) == 0) {
    iVar1 = 0x13815ca8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bdefc0(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam0000000113815ca0 = puVar2;
      func_0x000100164334(auStack_68);
      ___cxa_guard_release(0x113815ca8);
    }
  }
  return 0x113815ca0;
}



/* Entry: 104bdefc0; end: 104bdf43f;  */

/* WARNING: Possible PIC construction at 0x000104bdeff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104bdf018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bdeff8) */
/* WARNING: Removing unreachable block (ram,0x000104bdf01c) */
/* WARNING: Removing unreachable block (ram,0x000104bdf384) */
/* WARNING: Removing unreachable block (ram,0x000104bdf398) */
/* WARNING: Removing unreachable block (ram,0x000104bdf3d4) */
/* WARNING: Removing unreachable block (ram,0x000104bdf3e4) */
/* WARNING: Removing unreachable block (ram,0x000104bdf3f4) */
/* WARNING: Removing unreachable block (ram,0x000104bdf42c) */
/* WARNING: Removing unreachable block (ram,0x000104bdf3c0) */

void FUN_104bdefc0(void)

{
  char *pcVar1;
  undefined1 auStack_470 [1080];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = "SCN_COMPOSER";
  func_0x00010002b82c(auStack_470,"SCN_COMPOSER");
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 104bdf440; end: 104bdf45b;  */

void FUN_104bdf440(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 104bdf45c; end: 104bdf5c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104bdf45c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  long alStack_70 [2];
  undefined **ppuStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000104bd4df4(alStack_70);
  lVar3 = 0x40;
  __Znwm();
  alStack_70[1] = 0x104bdf5d0;
  ppuStack_60 = &PTR_DAT_1107e6778;
  func_0x00010b9ac22c();
  lStack_90 = lVar3;
  func_0x000104bdf5ec();
  plVar4 = (long *)(lVar3 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lStack_88 = lVar3;
  func_0x00010b9a8ef8(auStack_80,&lStack_88);
  func_0x0001003a83dc(alStack_70 + 1,"isYellowBrandFillEnabled");
  func_0x000104bd9bd4(alStack_70[0] + 0x10,alStack_70 + 1);
  func_0x00010b9a9020();
  func_0x0001003a8c94(alStack_70 + 1);
  func_0x00010b9a8d98(auStack_80);
  FUN_104bda388(&lStack_88);
  FUN_104bda3d0(&lStack_90);
  func_0x00010b9a8f54(param_1,alStack_70);
  plVar4 = alStack_70;
  FUN_104bd4e40(plVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001003a8c94(alStack_70 + 1);
  func_0x00010b9a8d98(auStack_80);
  FUN_104bda388(&lStack_88);
  FUN_104bda3d0(&lStack_90);
  FUN_104bd4e40(alStack_70);
  __Unwind_Resume(plVar4);
  return;
}



/* Entry: 104bdf5c8; end: 104bdf60b;  */

void FUN_104bdf5c8(void)

{
  return;
}



/* Entry: 104bdf60c; end: 104bdf8a3;  */

void FUN_104bdf60c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010552f90c(auStack_a0);
  alStack_48[0] = 0;
  alStack_48[1] = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x000100604a3c(auStack_38,auStack_a0,&uStack_58);
  func_0x000100604a9c(alStack_48,auStack_38);
  func_0x00010060475c(auStack_38);
  func_0x00010060475c(&uStack_58);
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1107e6820;
  puVar2 = (undefined8 *)0xb0;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1107e6840;
  puVar4 = puVar2 + 3;
  *puVar4 = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0x3cb0b1bb;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0x32aaaba7;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0;
  puVar2[0x15] = 0;
  puVar1[1] = puVar4;
  puVar1[2] = puVar2;
  puVar1[3] = puVar4;
  puVar1[4] = puVar2;
  do {
    func_0x000104bdffd8();
  } while (extraout_w11 != 0);
  *puVar1 = &PTR_FUN_1107e67d8;
  puStack_30 = puVar2;
  do {
    func_0x000104bdffd8();
  } while (extraout_w11_00 != 0);
  do {
    func_0x000104bdffd8();
  } while (extraout_w11_01 != 0);
  uStack_70 = extraout_x9;
  puStack_68 = puVar2;
  func_0x000104bdfc18(auStack_38);
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_90 = alStack_48[0] + 0x48;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  puStack_30 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_48[0];
  func_0x000100604ae0();
  if ((int)lVar3 == 0) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    *puVar2 = &PTR_FUN_1107e6890;
    puStack_30 = (undefined8 *)0x0;
    puVar2[2] = puVar1;
    lVar3 = *(long *)(alStack_48[0] + 0x90);
    *(undefined8 **)(alStack_48[0] + 0x90) = puVar2;
    if (lVar3 != 0) {
      func_0x000104bdffc8();
    }
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x000100604a9c(&lStack_80,alStack_48);
  }
  func_0x0001000df5a0(&lStack_90);
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x000104bdffa8();
      } while (extraout_w10 != 0);
    }
    FUN_104bdf8a4(auStack_38);
    func_0x000100605608();
  }
  param_1[1] = puStack_68;
  *param_1 = uStack_70;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  func_0x0001006055b8();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000104bdff98();
  }
  func_0x000104bdfc18(&uStack_70);
  func_0x00010060475c(alStack_48);
  func_0x000100604a94();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x0001000df5a0(&lStack_90);
    func_0x0001006055b8();
    puStack_30 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000104bdff98();
    }
    func_0x000104bdfc18(&uStack_70);
    func_0x00010060475c(alStack_48);
    func_0x000100604a94();
    do {
      func_0x000104bdfffc();
    } while( true );
  }
  return;
}



/* Entry: 104bdf8a4; end: 104bdfb37;  */

void FUN_104bdf8a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    do {
      func_0x000104bdffa8();
    } while (extraout_w10 != 0);
    do {
      func_0x000104bdffa8();
    } while (extraout_w10_00 != 0);
  }
  uStack_90 = param_2;
  lStack_88 = param_3;
  func_0x0001006054a0(&puStack_60,&uStack_90);
  if (puStack_60 == (undefined8 *)0x0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar5,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104bdfa80);
    (*pcVar3)();
  }
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_1107e68d0;
  if (lStack_58 != 0) {
    do {
      func_0x000104bdffa8();
    } while (extraout_w10_01 != 0);
  }
  puVar4[3] = &PTR_FUN_1107e6970;
  puVar4[4] = puStack_60;
  puVar4[5] = lStack_58;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001005f25dc(&uStack_50);
  puStack_80 = puVar4 + 3;
  puStack_78 = puVar4;
  func_0x0001005f25dc(&puStack_60);
  puStack_60 = (undefined8 *)0x0;
  lStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_104bdfdd0(&uStack_50,lVar7 + 8,&uStack_70);
  FUN_104bdfe04(&puStack_60,&uStack_50);
  func_0x000104bdfc18(&uStack_50);
  func_0x000104bdfc18(&uStack_70);
  puVar2 = puStack_60;
  __ZNSt3__15mutex4lockEv(puStack_60 + 9);
  puVar1 = puStack_78;
  puVar4 = puStack_80;
  if (*(char *)(puStack_60 + 2) == '\x01') {
    puStack_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    uStack_48 = puStack_60[1];
    uStack_50 = *puStack_60;
    puStack_60[1] = puVar1;
    *puStack_60 = puVar4;
    func_0x000104bdfbf4(&uStack_50);
  }
  else {
    puStack_60[1] = puStack_78;
    *puStack_60 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    *(undefined1 *)(puStack_60 + 2) = 1;
  }
  plVar6 = (long *)puStack_60[0x12];
  puStack_60[0x12] = 0;
  __ZNSt3__15mutex6unlockEv(puVar2 + 9);
  if (plVar6 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(puStack_60 + 3);
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6,&puStack_60);
    func_0x000104bdff98();
  }
  func_0x000104bdfc18(&puStack_60);
  func_0x000104bdfbf4(&puStack_80);
  func_0x0001006055b8();
  func_0x000100605608();
  return;
}



/* Entry: 104bdfb38; end: 104bdfb3b;  */

undefined8 * FUN_104bdfb38(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_1107e6820;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_FUN_1107e6938;
    ppuStack_30 = &PTR_FUN_1107e6938;
    FUN_104bdfe3c(auStack_28,&ppuStack_30);
    FUN_104bdfcec(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000104bdfc18(param_1 + 3);
  func_0x000104bdfc18(param_1 + 1);
  return param_1;
}



/* Entry: 104bdfb3c; end: 104bdfb4f;  */

void FUN_104bdfb3c(void)

{
  FUN_104bdfc3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdfb50; end: 104bdfb53;  */

undefined8 * FUN_104bdfb50(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_1107e6820;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_FUN_1107e6938;
    ppuStack_30 = &PTR_FUN_1107e6938;
    FUN_104bdfe3c(auStack_28,&ppuStack_30);
    FUN_104bdfcec(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000104bdfc18(param_1 + 3);
  func_0x000104bdfc18(param_1 + 1);
  return param_1;
}



/* Entry: 104bdfb54; end: 104bdfb67;  */

void FUN_104bdfb54(void)

{
  FUN_104bdfc3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdfb68; end: 104bdfb6b;  */

void FUN_104bdfb68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bdfb6c; end: 104bdfb7f;  */

void FUN_104bdfb6c(void)

{
  FUN_104bdfbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdfb80; end: 104bdfbdf;  */

long FUN_104bdfb80(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    func_0x000104be0004();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar1 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x0001005f25d0();
    if (param_1 != 0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 104bdfbe0; end: 104bdfbf3;  */

void FUN_104bdfbe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdfbf4; end: 104bdfc3b;  */

void FUN_104bdfbf4(long param_1)

{
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bdfc3c; end: 104bdfce7;  */

undefined8 * FUN_104bdfc3c(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_1107e6820;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_FUN_1107e6938;
    ppuStack_30 = &PTR_FUN_1107e6938;
    FUN_104bdfe3c(auStack_28,&ppuStack_30);
    FUN_104bdfcec(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000104bdfc18(param_1 + 3);
  func_0x000104bdfc18(param_1 + 1);
  return param_1;
}



/* Entry: 104bdfce8; end: 104bdfceb;  */

void FUN_104bdfce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 104bdfcec; end: 104bdfdcf;  */

void FUN_104bdfcec(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_104bdfdd0(auStack_40,param_1 + 8,&uStack_50);
  FUN_104bdfe04(alStack_30,auStack_40);
  func_0x000104bdfc18(auStack_40);
  func_0x000104bdfff4();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x48);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x88,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x90);
  *(undefined8 *)(alStack_30[0] + 0x90) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x18);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x000104bdffb8();
  }
  func_0x000104bdfc18(alStack_30);
  return;
}



/* Entry: 104bdfdd0; end: 104bdfe03;  */

void FUN_104bdfdd0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x000100604a2c();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x000100604a70();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 104bdfe04; end: 104bdfe3b;  */

undefined8 * FUN_104bdfe04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000104bdfff4();
  return param_1;
}



/* Entry: 104bdfe3c; end: 104bdfe9b;  */

void FUN_104bdfe3c(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_FUN_1107e6938;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bdfe7c);
  (*pcVar1)();
}



/* Entry: 104bdfe9c; end: 104bdfeaf;  */

void FUN_104bdfe9c(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdfeb0; end: 104bdfebb;  */

char * FUN_104bdfeb0(void)

{
  return "djinni::Promise was destructed before setting a result";
}


