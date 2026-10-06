/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109887e98; end: 109887f13;  */

void FUN_109887e98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_109887f14(param_2 + 2);
  uStack_38 = param_2[2];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = 0x109887fc4;
  param_1[1] = &PTR_DAT_110b16888;
  param_1[2] = uStack_38;
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109888018(&uStack_38);
  return;
}



/* Entry: 109887f14; end: 109887f6f;  */

void FUN_109887f14(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)0x28;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = 0;
  FUN_109887f70(plVar1 + 2,param_2);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109887f70; end: 109888017;  */

void FUN_109887f70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 3) {
    param_1[2] = param_2[2];
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  else if (3 < iVar1) {
    param_1[2] = param_2[2];
    param_2[2] = 0;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



/* Entry: 109888018; end: 10988809f;  */

undefined8 * FUN_109888018(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_1098880a0(param_1[1] + 0x10,*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 1098880a0; end: 1098881ab;  */

long * FUN_1098880a0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  if ((3 < (int)param_2[3]) && ((undefined8 *)param_2[4] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_2[4])();
  }
  __ZdlPv(param_2);
  return plVar2;
}



/* Entry: 1098881ac; end: 1098881bb;  */

void FUN_1098881ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b168b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1098881bc; end: 1098881db;  */

void FUN_1098881bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b168b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098881dc; end: 10988827b;  */

void FUN_1098881dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    while (plVar1 != (long *)(param_1 + 0x28)) {
      plVar2 = (long *)plVar1[1];
      if ((3 < (int)plVar1[3]) && ((undefined8 *)plVar1[4] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)plVar1[4])();
      }
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10988827c; end: 10988827f;  */

void FUN_10988827c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109888280; end: 10988832f;  */

void FUN_109888280(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 109888330; end: 109888a13;  */

/* WARNING: Possible PIC construction at 0x000109888824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109888f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000109888a0c) */
/* WARNING: Removing unreachable block (ram,0x000109888ab4) */
/* WARNING: Removing unreachable block (ram,0x000109888aa8) */
/* WARNING: Removing unreachable block (ram,0x000109888aac) */
/* WARNING: Removing unreachable block (ram,0x000109888ab8) */
/* WARNING: Removing unreachable block (ram,0x000109888ac4) */
/* WARNING: Removing unreachable block (ram,0x000109888ae0) */
/* WARNING: Removing unreachable block (ram,0x000109888ad4) */
/* WARNING: Removing unreachable block (ram,0x000109888ad8) */
/* WARNING: Removing unreachable block (ram,0x000109888ae4) */
/* WARNING: Removing unreachable block (ram,0x000109888af0) */
/* WARNING: Removing unreachable block (ram,0x000109888b24) */
/* WARNING: Removing unreachable block (ram,0x000109888b3c) */
/* WARNING: Removing unreachable block (ram,0x000109888b54) */
/* WARNING: Removing unreachable block (ram,0x000109888b58) */
/* WARNING: Removing unreachable block (ram,0x000109888b4c) */
/* WARNING: Removing unreachable block (ram,0x000109888b5c) */
/* WARNING: Removing unreachable block (ram,0x000109888b70) */
/* WARNING: Removing unreachable block (ram,0x000109888be4) */
/* WARNING: Removing unreachable block (ram,0x000109888ba0) */
/* WARNING: Removing unreachable block (ram,0x000109888bc4) */
/* WARNING: Removing unreachable block (ram,0x000109888bf0) */
/* WARNING: Removing unreachable block (ram,0x000109888bd0) */
/* WARNING: Removing unreachable block (ram,0x000109888c18) */
/* WARNING: Removing unreachable block (ram,0x000109888c74) */
/* WARNING: Removing unreachable block (ram,0x000109888c8c) */
/* WARNING: Removing unreachable block (ram,0x000109888c7c) */
/* WARNING: Removing unreachable block (ram,0x000109888c90) */
/* WARNING: Removing unreachable block (ram,0x000109888c9c) */
/* WARNING: Removing unreachable block (ram,0x000109888c44) */
/* WARNING: Removing unreachable block (ram,0x000109888c84) */
/* WARNING: Removing unreachable block (ram,0x000109888c60) */
/* WARNING: Removing unreachable block (ram,0x000109888ce8) */
/* WARNING: Removing unreachable block (ram,0x000109888c6c) */
/* WARNING: Removing unreachable block (ram,0x000109888cec) */
/* WARNING: Removing unreachable block (ram,0x000109888cf0) */
/* WARNING: Removing unreachable block (ram,0x000109888cf8) */
/* WARNING: Removing unreachable block (ram,0x000109888d08) */
/* WARNING: Removing unreachable block (ram,0x000109888d14) */
/* WARNING: Removing unreachable block (ram,0x000109888d28) */
/* WARNING: Removing unreachable block (ram,0x000109888d30) */
/* WARNING: Removing unreachable block (ram,0x000109888d34) */
/* WARNING: Removing unreachable block (ram,0x000109888d40) */
/* WARNING: Removing unreachable block (ram,0x000109888d48) */
/* WARNING: Removing unreachable block (ram,0x000109888d54) */
/* WARNING: Removing unreachable block (ram,0x000109888d60) */
/* WARNING: Removing unreachable block (ram,0x000109888d6c) */
/* WARNING: Removing unreachable block (ram,0x000109888d8c) */
/* WARNING: Removing unreachable block (ram,0x000109888da0) */
/* WARNING: Removing unreachable block (ram,0x000109888d90) */
/* WARNING: Removing unreachable block (ram,0x000109888d9c) */
/* WARNING: Removing unreachable block (ram,0x000109888db4) */
/* WARNING: Removing unreachable block (ram,0x000109888d74) */
/* WARNING: Removing unreachable block (ram,0x000109888dbc) */
/* WARNING: Removing unreachable block (ram,0x000109888dc0) */
/* WARNING: Removing unreachable block (ram,0x000109888d7c) */
/* WARNING: Removing unreachable block (ram,0x000109888d88) */
/* WARNING: Removing unreachable block (ram,0x000109888dd4) */
/* WARNING: Removing unreachable block (ram,0x000109888e1c) */
/* WARNING: Removing unreachable block (ram,0x000109888e24) */
/* WARNING: Removing unreachable block (ram,0x000109888e34) */
/* WARNING: Removing unreachable block (ram,0x000109888dec) */
/* WARNING: Removing unreachable block (ram,0x000109888e14) */
/* WARNING: Removing unreachable block (ram,0x000109888df4) */
/* WARNING: Removing unreachable block (ram,0x000109888e08) */
/* WARNING: Removing unreachable block (ram,0x000109888e38) */
/* WARNING: Removing unreachable block (ram,0x000109888e6c) */
/* WARNING: Removing unreachable block (ram,0x000109888e78) */
/* WARNING: Removing unreachable block (ram,0x000109888e84) */
/* WARNING: Removing unreachable block (ram,0x000109888edc) */
/* WARNING: Removing unreachable block (ram,0x000109888ee4) */
/* WARNING: Removing unreachable block (ram,0x000109888f44) */
/* WARNING: Removing unreachable block (ram,0x000109888efc) */
/* WARNING: Removing unreachable block (ram,0x000109888f08) */
/* WARNING: Removing unreachable block (ram,0x000109888f10) */
/* WARNING: Removing unreachable block (ram,0x000109888f28) */
/* WARNING: Removing unreachable block (ram,0x000109888f2c) */
/* WARNING: Removing unreachable block (ram,0x000109888f34) */
/* WARNING: Removing unreachable block (ram,0x000109888ea8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbce58) */
/* WARNING: Removing unreachable block (ram,0x000109888bdc) */
/* WARNING: Removing unreachable block (ram,0x000109888bf8) */
/* WARNING: Removing unreachable block (ram,0x000109888c04) */
/* WARNING: Removing unreachable block (ram,0x000109888b08) */
/* WARNING: Removing unreachable block (ram,0x000109888828) */
/* WARNING: Removing unreachable block (ram,0x000109888858) */
/* WARNING: Removing unreachable block (ram,0x00010988883c) */
/* WARNING: Removing unreachable block (ram,0x000109888860) */
/* WARNING: Removing unreachable block (ram,0x0001098888e4) */
/* WARNING: Removing unreachable block (ram,0x000109888900) */
/* WARNING: Removing unreachable block (ram,0x000109888904) */
/* WARNING: Removing unreachable block (ram,0x0001098888f8) */
/* WARNING: Removing unreachable block (ram,0x000109888908) */
/* WARNING: Removing unreachable block (ram,0x000109888914) */
/* WARNING: Removing unreachable block (ram,0x0001098889e0) */
/* WARNING: Removing unreachable block (ram,0x0001098888b0) */
/* WARNING: Removing unreachable block (ram,0x000109888cb8) */
/* WARNING: Removing unreachable block (ram,0x000109888cbc) */
/* WARNING: Removing unreachable block (ram,0x000109888cc4) */
/* WARNING: Removing unreachable block (ram,0x000109888cc8) */
/* WARNING: Removing unreachable block (ram,0x000109888ec8) */
/* WARNING: Removing unreachable block (ram,0x0001098885c4) */
/* WARNING: Removing unreachable block (ram,0x0001098884e8) */

void FUN_109888330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char **ppcVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  undefined8 ****ppppuVar23;
  undefined8 uVar24;
  ulong auStack_1b0 [4];
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  int iStack_174;
  undefined8 *puStack_170;
  undefined8 ***pppuStack_168;
  int iStack_15c;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  long lStack_148;
  char *pcStack_140;
  undefined8 *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char acStack_f8 [8];
  undefined8 *puStack_f0;
  char acStack_e8 [8];
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  char *pcStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  long *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = param_1 + 1;
  *puVar19 = 0;
  param_1[2] = 0;
  puStack_180 = param_1 + 3;
  param_1[4] = 0;
  *puStack_180 = 0;
  *param_1 = puVar19;
  puStack_188 = param_1 + 6;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = param_4;
  plStack_78 = (long *)0x0;
  puStack_170 = param_1;
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  FUN_109888a14(auStack_d8,&uStack_c8,alStack_90,1,0);
  if (plStack_78 == alStack_90) {
    lVar14 = 0x20;
LAB_1098883dc:
    (**(code **)(*plStack_78 + lVar14))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar14 = 0x28;
    goto LAB_1098883dc;
  }
  puVar9 = auStack_d8;
  FUN_10945a80c(puVar9,&DAT_10f4969e1);
  FUN_109381b20(acStack_e8,puVar9);
  puVar9 = auStack_d8;
  FUN_10945a80c(puVar9,&DAT_10f41631e);
  FUN_109381b20(acStack_f8,puVar9);
  pcStack_120 = acStack_e8;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0x8000000000000000;
  if (acStack_e8[0] == '\0') {
    uStack_108 = 1;
LAB_1098884a4:
    pcStack_140 = acStack_e8;
    puStack_138 = (undefined8 *)0x0;
    uStack_130 = 0;
    uStack_128 = 1;
  }
  else if (acStack_e8[0] == '\x02') {
    uStack_110 = *puStack_e0;
    pcStack_140 = acStack_e8;
    puStack_138 = (undefined8 *)0x0;
    uStack_128 = 0x8000000000000000;
    uStack_130 = puStack_e0[1];
  }
  else {
    if (acStack_e8[0] != '\x01') {
      uStack_108 = 0;
      goto LAB_1098884a4;
    }
    puStack_138 = puStack_e0 + 1;
    uStack_118 = *puStack_e0;
    pcStack_140 = acStack_e8;
    uStack_128 = 0x8000000000000000;
    uStack_130 = 0;
  }
  while( true ) {
    ppcVar10 = &pcStack_120;
    FUN_109379420(ppcVar10,&pcStack_140);
    if ((int)ppcVar10 != 0) break;
    FUN_10937b950(&pcStack_120);
    FUN_10937c804(&piStack_b8);
    FUN_1094d24d0(puStack_180,&piStack_b8);
    FUN_109386b30(&pcStack_120);
  }
  pcStack_120 = acStack_f8;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0x8000000000000000;
  if (acStack_f8[0] == '\0') {
    uStack_108 = 1;
  }
  else {
    if (acStack_f8[0] == '\x02') {
      uStack_110 = *puStack_f0;
      pcStack_140 = acStack_f8;
      puStack_138 = (undefined8 *)0x0;
      uStack_128 = 0x8000000000000000;
      uStack_130 = puStack_f0[1];
      goto LAB_109888590;
    }
    if (acStack_f8[0] == '\x01') {
      puStack_138 = puStack_f0 + 1;
      uStack_118 = *puStack_f0;
      pcStack_140 = acStack_f8;
      uStack_128 = 0x8000000000000000;
      uStack_130 = 0;
      goto LAB_109888590;
    }
    uStack_108 = 0;
  }
  pcStack_140 = acStack_f8;
  puStack_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  uStack_128 = 1;
LAB_109888590:
  while( true ) {
    ppcVar10 = &pcStack_120;
    FUN_109379420(ppcVar10,&pcStack_140);
    if ((int)ppcVar10 != 0) break;
    FUN_10937b950(&pcStack_120);
    FUN_10937c804(&piStack_b8);
    FUN_1094d24d0(puStack_188,&piStack_b8);
    FUN_109386b30(&pcStack_120);
  }
  puStack_190 = puVar19;
  FUN_10945a80c(auStack_d8,&UNK_10f41505c);
  pcStack_120 = (char *)0x0;
  uStack_118 = 0;
  FUN_10988bc1c();
  iStack_174 = 0;
  plVar17 = (long *)0x0;
  iVar20 = 0;
  puVar19 = (undefined8 *)0x0;
  uStack_98 = uStack_118;
  pcStack_a0 = pcStack_120;
  pppuStack_168 = &pppuStack_150;
  pppuStack_150 = (undefined8 ****)0x0;
  lStack_148 = 0;
  uVar2 = 0;
  pppuStack_158 = pppuStack_168;
  do {
    uVar21 = uVar2;
    FUN_109888b84(&pcStack_120,&pcStack_a0,";",1);
    if ((char)uStack_110 != '\x01') {
      uVar24 = 0x109888828;
      ppuVar5 = &puStack_190;
      plVar6 = (long *)param_1[1];
      puVar9 = (undefined1 *)register0x00000008;
      while (plVar13 = plVar6, puVar8 = (undefined1 *)ppuVar5, plVar13 != (long *)0x0) {
        *(undefined8 **)(puVar8 + -0x20) = puVar19;
        *(long **)(puVar8 + -0x18) = plVar17;
        *(undefined1 **)(puVar8 + -0x10) = puVar9 + -0x10;
        *(undefined8 *)(puVar8 + -8) = uVar24;
        uVar24 = 0x109888f70;
        ppuVar5 = (undefined8 **)(puVar8 + -0x20);
        plVar17 = plVar13;
        puVar19 = param_1;
        puVar9 = puVar8;
        plVar6 = (long *)*plVar13;
      }
      return;
    }
    iVar22 = 0;
    uVar2 = uVar21 + 1;
    while (FUN_109888b84(&pcStack_140,&pcStack_120,&DAT_10f68e8ee,1), (uStack_130 & 1) != 0) {
      FUN_10988bee0(&piStack_b8,pcStack_140,puStack_138);
      uVar15 = (long)piStack_b0 - (long)piStack_b8;
      uVar16 = (long)uVar15 >> 2;
      if (1 < uVar16 - 4 && uVar16 != 1) {
        FUN_10988bd28(&UNK_10f582228);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1098888e4);
        (*pcVar7)();
      }
      iVar22 = *piStack_b8 + iVar22;
      if (1 < uVar16) {
        iStack_15c = (int)puVar19;
        uVar1 = iVar22 + 1;
        ppppuVar12 = (undefined8 ****)pppuStack_150;
        ppppuVar18 = (undefined8 ****)pppuStack_168;
        while (ppppuVar23 = ppppuVar18, ppppuVar12 != (undefined8 ****)0x0) {
          while( true ) {
            ppppuVar11 = ppppuVar12;
            uVar3 = *(uint *)((long)ppppuVar11 + 0x1c);
            bVar4 = (int)uVar1 < *(int *)(ppppuVar11 + 4);
            if (uVar2 != uVar3) {
              bVar4 = (int)uVar2 < (int)uVar3;
            }
            if (bVar4) break;
            bVar4 = *(int *)(ppppuVar11 + 4) < (int)uVar1;
            if (uVar2 != uVar3) {
              bVar4 = (long)(int)uVar3 <= (long)uVar21;
            }
            if (!bVar4) goto LAB_1098887a0;
            ppppuVar12 = (undefined8 ****)ppppuVar11[1];
            if ((undefined8 ****)ppppuVar11[1] == (undefined8 ****)0x0) {
              ppppuVar18 = ppppuVar11 + 1;
              ppppuVar23 = ppppuVar11;
              goto LAB_109888740;
            }
          }
          ppppuVar18 = ppppuVar11;
          ppppuVar12 = (undefined8 ****)*ppppuVar11;
        }
LAB_109888740:
        ppppuVar11 = (undefined8 ****)0x38;
        __Znwm();
        *(ulong *)((long)ppppuVar11 + 0x1c) = uVar2 + ((ulong)uVar1 << 0x20);
        *(undefined8 *)((long)ppppuVar11 + 0x2c) = 0;
        *(undefined8 *)((long)ppppuVar11 + 0x24) = 0;
        *(undefined4 *)((long)ppppuVar11 + 0x34) = 0;
        *ppppuVar11 = (undefined8 ***)0x0;
        ppppuVar11[1] = (undefined8 ***)0x0;
        ppppuVar11[2] = ppppuVar23;
        *ppppuVar18 = ppppuVar11;
        ppppuVar12 = ppppuVar11;
        if ((undefined8 ****)*pppuStack_158 != (undefined8 ****)0x0) {
          ppppuVar12 = (undefined8 ****)*ppppuVar18;
          pppuStack_158 = (undefined8 ***)*pppuStack_158;
        }
        func_0x000107c27d40(pppuStack_150,ppppuVar12);
        lStack_148 = lStack_148 + 1;
        uVar15 = (long)piStack_b0 - (long)piStack_b8;
LAB_1098887a0:
        iVar20 = piStack_b8[1] + iVar20;
        *(int *)((long)ppppuVar11 + 0x34) = iVar20;
        puVar19 = (undefined8 *)(ulong)(uint)(piStack_b8[2] + iStack_15c);
        *(uint *)((long)ppppuVar11 + 0x24) = piStack_b8[2] + iStack_15c + 1;
        uVar1 = piStack_b8[3] + (int)plVar17;
        plVar17 = (long *)(ulong)uVar1;
        *(uint *)(ppppuVar11 + 5) = uVar1 + 1;
        param_1 = puStack_170;
        if (0x10 < uVar15) {
          iStack_174 = piStack_b8[4] + iStack_174;
          *(int *)((long)ppppuVar11 + 0x2c) = iStack_174;
          *(undefined1 *)(ppppuVar11 + 6) = 1;
        }
      }
      piStack_b0 = piStack_b8;
      __ZdlPv(piStack_b8);
    }
  } while( true );
}



/* Entry: 109888a14; end: 109888b83;  */

/* WARNING: Possible PIC construction at 0x000109888f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109888f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000109888cb8) */
/* WARNING: Removing unreachable block (ram,0x000109888cbc) */
/* WARNING: Removing unreachable block (ram,0x000109888cc4) */
/* WARNING: Removing unreachable block (ram,0x000109888cc8) */

byte * FUN_109888a14(byte *param_1,long *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte **ppbVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined1 ****ppppuVar21;
  undefined8 uVar22;
  long alStack_1f0 [4];
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  undefined1 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  ulong uStack_170;
  byte *pbStack_160;
  byte *pbStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  byte abStack_138 [24];
  byte *pbStack_120;
  long alStack_118 [3];
  long *plStack_100;
  undefined1 auStack_f0 [152];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  pbVar20 = param_1 + 8;
  pbVar20[0] = 0;
  pbVar20[1] = 0;
  pbVar20[2] = 0;
  pbVar20[3] = 0;
  pbVar20[4] = 0;
  pbVar20[5] = 0;
  pbVar20[6] = 0;
  pbVar20[7] = 0;
  lVar12 = *param_2;
  lVar15 = param_2[1];
  FUN_1093830cc(abStack_138);
  uVar16 = param_4;
  FUN_109888f90(alStack_118,lVar12,lVar12 + lVar15,abStack_138);
  pbVar7 = param_1;
  FUN_109889078(alStack_118,1);
  FUN_10988a49c(auStack_f0);
  if (plStack_100 == alStack_118) {
    lVar12 = 0x20;
LAB_109888ab8:
    (**(code **)(*plStack_100 + lVar12))();
  }
  else if (plStack_100 != (long *)0x0) {
    lVar12 = 0x28;
    goto LAB_109888ab8;
  }
  pbVar9 = pbStack_120;
  if (pbStack_120 == abStack_138) {
    lVar12 = 0x20;
LAB_109888ae4:
    (**(code **)(*(long *)pbStack_120 + lVar12))();
  }
  else if (pbStack_120 != (byte *)0x0) {
    lVar12 = 0x28;
    goto LAB_109888ae4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pbVar9;
  }
  ___stack_chk_fail();
  FUN_109889518(alStack_118);
  if (pbStack_120 == abStack_138) {
    lVar12 = 0x20;
LAB_109888b5c:
    (**(code **)(*(long *)pbStack_120 + lVar12))();
  }
  else if (pbStack_120 != (byte *)0x0) {
    lVar12 = 0x28;
    goto LAB_109888b5c;
  }
  pbVar8 = (byte *)(ulong)*param_1;
  FUN_109380ffc(pbVar20);
  __Unwind_Resume();
  pcStack_148 = FUN_109888b84;
  if (*(long *)(pbVar8 + 8) == 0) {
    bVar13 = 0;
    *pbVar9 = 0;
    pbVar19 = pbVar9;
    goto LAB_109888c04;
  }
  puVar11 = (undefined *)0x0;
  pbVar19 = pbVar8;
  uVar10 = uVar16;
  uStack_170 = param_4;
  pbStack_160 = pbVar20;
  pbStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  FUN_10923797c();
  lVar12 = *(long *)pbVar8;
  pbVar18 = *(byte **)(pbVar8 + 8);
  pbVar20 = pbVar18;
  if (pbVar19 <= pbVar18) {
    pbVar20 = pbVar19;
  }
  if (pbVar19 == (byte *)0xffffffffffffffff) {
    pbVar17 = (byte *)0x0;
    lVar15 = 0;
  }
  else {
    pbVar17 = pbVar19 + uVar16;
    lVar15 = (long)pbVar18 - (long)pbVar17;
    if (pbVar18 < pbVar17) {
      pbVar20 = &UNK_10f582264;
      FUN_109262df8();
      ppbVar5 = &pbStack_1b0;
      uStack_1a0 = param_4;
      uStack_198 = uVar16;
      pbStack_190 = pbVar8;
      pbStack_188 = pbVar9;
      ppuStack_180 = &puStack_150;
      pcStack_178 = FUN_109888c24;
      if ((pbVar7[0x34] & 1) == 0) {
        uStack_1a8 = (ulong)(char)pbVar7[0x17];
        pbStack_1b0 = pbVar7;
        if ((long)uStack_1a8 < 0) {
          uStack_1a8 = *(ulong *)(pbVar7 + 8);
          pbStack_1b0 = *(byte **)pbVar7;
        }
        if (uStack_1a8 < 3) {
          return pbVar20;
        }
        pbVar9 = (byte *)(uStack_1a8 - 3);
        puVar11 = &DAT_10f2f41e7;
        uVar10 = 0xffffffffffffffff;
        param_5 = 3;
        uVar22 = 0x109888cb8;
        goto FUN_109888ee4;
      }
      iVar4 = *(int *)(pbVar7 + 0x30) - *(int *)(pbVar20 + 0x48);
      if (pbVar7[0x3c] == 1) {
        if (iVar4 == 1) {
          iVar14 = *(int *)(pbVar20 + 0x4c);
        }
        else {
          iVar14 = 0;
        }
        iVar14 = *(int *)(pbVar7 + 0x38) - iVar14;
      }
      else {
        iVar14 = 1;
      }
      if (*(long *)(pbVar20 + 0x10) == 0) {
        return pbVar20;
      }
      pbVar8 = pbVar20 + 8;
      pbVar19 = *(byte **)pbVar8;
      pbVar9 = pbVar8;
      pbVar18 = pbVar19;
      if (pbVar19 == (byte *)0x0) {
LAB_109888d60:
        if (pbVar9 == *(byte **)pbVar20) goto LAB_109888e14;
        if (pbVar9 == pbVar8) {
          if (pbVar19 == (byte *)0x0) {
            do {
              pbVar9 = *(byte **)(pbVar8 + 0x10);
              bVar6 = *(byte **)pbVar9 == pbVar8;
              pbVar8 = pbVar9;
            } while (bVar6);
          }
          else {
            do {
              pbVar9 = pbVar19;
              pbVar19 = *(byte **)(pbVar9 + 8);
            } while (*(byte **)(pbVar9 + 8) != (byte *)0x0);
          }
          pbVar8 = pbVar9 + 0x24;
        }
        else {
          pbVar8 = pbVar9;
          pbVar19 = *(byte **)pbVar9;
          if (*(byte **)pbVar9 == (byte *)0x0) {
            do {
              pbVar18 = *(byte **)(pbVar8 + 0x10);
              bVar6 = *(byte **)pbVar18 == pbVar8;
              pbVar8 = pbVar18;
            } while (bVar6);
          }
          else {
            do {
              pbVar18 = pbVar19;
              pbVar19 = *(byte **)(pbVar18 + 8);
            } while (*(byte **)(pbVar18 + 8) != (byte *)0x0);
          }
          pbVar8 = pbVar9 + 0x1c;
          pbVar19 = pbVar18 + 0x1c;
          iVar3 = *(int *)pbVar19;
          if (*(int *)pbVar8 == iVar4) {
            if (iVar4 != iVar3) goto LAB_109888e14;
            if (iVar14 - *(int *)(pbVar18 + 0x20) <= *(int *)(pbVar9 + 0x20) - iVar14) {
              pbVar8 = pbVar19;
            }
            pbVar8 = pbVar8 + 8;
          }
          else {
            if (iVar4 - iVar3 <= *(int *)pbVar8 - iVar4) {
              pbVar8 = pbVar19;
            }
            pbVar8 = pbVar8 + 8;
            if (iVar4 == iVar3) {
              pbVar8 = pbVar18 + 0x24;
            }
          }
        }
      }
      else {
        do {
          bVar6 = *(int *)(pbVar18 + 0x20) < iVar14;
          if (*(int *)(pbVar18 + 0x1c) != iVar4) {
            bVar6 = *(int *)(pbVar18 + 0x1c) < iVar4;
          }
          lVar12 = 8;
          if (!bVar6) {
            lVar12 = 0;
            pbVar9 = pbVar18;
          }
          pbVar17 = pbVar18 + lVar12;
          pbVar18 = *(byte **)pbVar17;
        } while (*(byte **)pbVar17 != (byte *)0x0);
        if (((pbVar9 == pbVar8) || (*(int *)(pbVar9 + 0x1c) != iVar4)) ||
           (*(int *)(pbVar9 + 0x20) != iVar14)) goto LAB_109888d60;
LAB_109888e14:
        pbVar8 = pbVar9 + 0x24;
      }
      pbVar9 = (byte *)(*(long *)(pbVar20 + 0x30) + (long)*(int *)(pbVar8 + 0x10) * 0x18);
      ppbVar5 = (byte **)pbVar7;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      *(int *)(pbVar7 + 0x30) = *(int *)pbVar8;
      pbVar7[0x34] = 1;
      if (pbVar7[0x3c] == 1) {
        *(int *)(pbVar7 + 0x38) = *(int *)(pbVar8 + 4);
        pbVar7[0x3c] = 1;
      }
      if (pbVar8[0xc] != 1) {
        return (byte *)ppbVar5;
      }
      iVar4 = *(int *)(pbVar8 + 8);
      uVar16 = (*(long *)(pbVar20 + 0x20) - *(long *)(pbVar20 + 0x18) >> 3) * -0x5555555555555555;
      if ((ulong)(long)iVar4 <= uVar16 && uVar16 - (long)iVar4 != 0) {
        pbVar7 = pbVar7 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                  (pbVar7,*(long *)(pbVar20 + 0x18) + (long)iVar4 * 0x18);
        return pbVar7;
      }
      FUN_109520c48();
      uVar22 = 0x109888ee4;
      func_0x000104bd46a0();
      pbVar8 = pbVar20;
FUN_109888ee4:
      ppppuVar21 = &pppuStack_1c0;
      uVar16 = (long)*(byte **)((long)ppbVar5 + 8) - (long)pbVar9;
      pbStack_1d0 = pbVar8;
      pbStack_1c8 = pbVar7;
      pppuStack_1c0 = &ppuStack_180;
      uStack_1b8 = uVar22;
      if (*(byte **)((long)ppbVar5 + 8) < pbVar9) {
        pbVar20 = &UNK_10f582264;
        uVar22 = 0x109888f50;
        FUN_109262df8();
        ppbVar5 = &pbStack_1d0;
        while (pbVar19 = pbVar9, pbVar19 != (byte *)0x0) {
          *(byte **)((long)ppbVar5 + -0x20) = pbVar8;
          *(byte **)((long)ppbVar5 + -0x18) = pbVar7;
          *(undefined1 *****)((long)ppbVar5 + -0x10) = ppppuVar21;
          *(undefined8 *)((long)ppbVar5 + -8) = uVar22;
          ppppuVar21 = (undefined1 ****)((long)ppbVar5 + -0x10);
          uVar22 = 0x109888f70;
          ppbVar5 = (byte **)((long)ppbVar5 + -0x20);
          pbVar7 = pbVar19;
          pbVar8 = pbVar20;
          pbVar9 = *(byte **)pbVar19;
        }
        return pbVar20;
      }
      if (uVar10 <= uVar16) {
        uVar16 = uVar10;
      }
      uVar10 = param_5;
      if (uVar16 <= param_5) {
        uVar10 = uVar16;
      }
      pbVar9 = pbVar9 + (long)*ppbVar5;
      _memcmp(pbVar9,puVar11,uVar10);
      uVar1 = 1;
      if (uVar16 < param_5) {
        uVar1 = 0xffffffff;
      }
      uVar2 = 0;
      if (uVar16 != param_5) {
        uVar2 = uVar1;
      }
      uVar1 = (uint)pbVar9;
      if ((uint)pbVar9 == 0) {
        uVar1 = uVar2;
      }
      return (byte *)(ulong)uVar1;
    }
    pbVar17 = pbVar17 + lVar12;
  }
  *(byte **)pbVar8 = pbVar17;
  *(long *)(pbVar8 + 8) = lVar15;
  bVar13 = 1;
  *(long *)pbVar9 = lVar12;
  *(byte **)(pbVar9 + 8) = pbVar20;
LAB_109888c04:
  pbVar9[0x10] = bVar13;
  return pbVar19;
}



/* Entry: 109888b84; end: 109888c23;  */

/* WARNING: Possible PIC construction at 0x000109888f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109888f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000109888cb8) */
/* WARNING: Removing unreachable block (ram,0x000109888cbc) */
/* WARNING: Removing unreachable block (ram,0x000109888cc4) */
/* WARNING: Removing unreachable block (ram,0x000109888cc8) */

long * FUN_109888b84(long *param_1,long *param_2,long *param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long **pplVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  int *piVar21;
  int *piVar22;
  undefined1 ***pppuVar23;
  undefined8 uVar24;
  long alStack_b0 [4];
  long *plStack_90;
  long *plStack_88;
  undefined1 **ppuStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (param_2[1] == 0) {
    uVar13 = 0;
    *(undefined1 *)param_1 = 0;
    plVar8 = param_1;
    goto LAB_109888c04;
  }
  puVar12 = (undefined *)0x0;
  plVar8 = param_2;
  uVar11 = param_4;
  FUN_10923797c();
  lVar9 = *param_2;
  plVar18 = (long *)param_2[1];
  plVar10 = plVar18;
  if (plVar8 <= plVar18) {
    plVar10 = plVar8;
  }
  if (plVar8 == (long *)0xffffffffffffffff) {
    puVar17 = (undefined1 *)0x0;
    lVar15 = 0;
  }
  else {
    plVar20 = (long *)((long)plVar8 + param_4);
    lVar15 = (long)plVar18 - (long)plVar20;
    if (plVar18 < plVar20) {
      plVar8 = (long *)&UNK_10f582264;
      FUN_109262df8();
      pplVar6 = &plStack_70;
      puStack_40 = &stack0xfffffffffffffff0;
      pcStack_38 = FUN_109888c24;
      if ((*(byte *)((long)param_3 + 0x34) & 1) == 0) {
        uStack_68 = (ulong)*(char *)((long)param_3 + 0x17);
        plStack_70 = param_3;
        if ((long)uStack_68 < 0) {
          uStack_68 = param_3[1];
          plStack_70 = (long *)*param_3;
        }
        if (uStack_68 < 3) {
          return plVar8;
        }
        plVar10 = (long *)(uStack_68 - 3);
        puVar12 = &DAT_10f2f41e7;
        uVar11 = 0xffffffffffffffff;
        param_5 = 3;
        uVar24 = 0x109888cb8;
        goto FUN_109888ee4;
      }
      iVar5 = (int)param_3[6] - (int)plVar8[9];
      if (*(char *)((long)param_3 + 0x3c) == '\x01') {
        if (iVar5 == 1) {
          iVar14 = *(int *)((long)plVar8 + 0x4c);
        }
        else {
          iVar14 = 0;
        }
        iVar14 = (int)param_3[7] - iVar14;
      }
      else {
        iVar14 = 1;
      }
      if (plVar8[2] == 0) {
        return plVar8;
      }
      plVar18 = plVar8 + 1;
      plVar20 = (long *)*plVar18;
      plVar10 = plVar18;
      plVar19 = plVar20;
      if (plVar20 == (long *)0x0) {
LAB_109888d60:
        if (plVar10 == (long *)*plVar8) goto LAB_109888e14;
        if (plVar10 == plVar18) {
          if (plVar20 == (long *)0x0) {
            do {
              plVar10 = (long *)plVar18[2];
              bVar7 = (long *)*plVar10 == plVar18;
              plVar18 = plVar10;
            } while (bVar7);
          }
          else {
            do {
              plVar10 = plVar20;
              plVar20 = (long *)plVar10[1];
            } while ((long *)plVar10[1] != (long *)0x0);
          }
          piVar21 = (int *)((long)plVar10 + 0x24);
        }
        else {
          plVar18 = plVar10;
          plVar20 = (long *)*plVar10;
          if ((long *)*plVar10 == (long *)0x0) {
            do {
              plVar19 = (long *)plVar18[2];
              bVar7 = (long *)*plVar19 == plVar18;
              plVar18 = plVar19;
            } while (bVar7);
          }
          else {
            do {
              plVar19 = plVar20;
              plVar20 = (long *)plVar19[1];
            } while ((long *)plVar19[1] != (long *)0x0);
          }
          piVar21 = (int *)((long)plVar10 + 0x1c);
          piVar22 = (int *)((long)plVar19 + 0x1c);
          iVar4 = *piVar22;
          if (*piVar21 == iVar5) {
            if (iVar5 != iVar4) goto LAB_109888e14;
            if (iVar14 - (int)plVar19[4] <= (int)plVar10[4] - iVar14) {
              piVar21 = piVar22;
            }
            piVar21 = piVar21 + 2;
          }
          else {
            if (iVar5 - iVar4 <= *piVar21 - iVar5) {
              piVar21 = piVar22;
            }
            piVar21 = piVar21 + 2;
            if (iVar5 == iVar4) {
              piVar21 = (int *)((long)plVar19 + 0x24);
            }
          }
        }
      }
      else {
        do {
          bVar7 = (int)plVar19[4] < iVar14;
          if (*(int *)((long)plVar19 + 0x1c) != iVar5) {
            bVar7 = *(int *)((long)plVar19 + 0x1c) < iVar5;
          }
          lVar9 = 8;
          if (!bVar7) {
            lVar9 = 0;
            plVar10 = plVar19;
          }
          puVar1 = (undefined8 *)((long)plVar19 + lVar9);
          plVar19 = (long *)*puVar1;
        } while ((long *)*puVar1 != (long *)0x0);
        if (((plVar10 == plVar18) || (*(int *)((long)plVar10 + 0x1c) != iVar5)) ||
           ((int)plVar10[4] != iVar14)) goto LAB_109888d60;
LAB_109888e14:
        piVar21 = (int *)((long)plVar10 + 0x24);
      }
      plVar10 = (long *)(plVar8[6] + (long)piVar21[4] * 0x18);
      pplVar6 = (long **)param_3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      *(int *)(param_3 + 6) = *piVar21;
      *(undefined1 *)((long)param_3 + 0x34) = 1;
      if (*(char *)((long)param_3 + 0x3c) == '\x01') {
        *(int *)(param_3 + 7) = piVar21[1];
        *(undefined1 *)((long)param_3 + 0x3c) = 1;
      }
      if ((char)piVar21[3] != '\x01') {
        return (long *)pplVar6;
      }
      iVar5 = piVar21[2];
      uVar16 = (plVar8[4] - plVar8[3] >> 3) * -0x5555555555555555;
      if ((ulong)(long)iVar5 <= uVar16 && uVar16 - (long)iVar5 != 0) {
        param_3 = param_3 + 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                  (param_3,plVar8[3] + (long)iVar5 * 0x18);
        return param_3;
      }
      FUN_109520c48();
      uVar24 = 0x109888ee4;
      func_0x000104bd46a0();
      param_2 = plVar8;
FUN_109888ee4:
      pppuVar23 = &ppuStack_80;
      uVar16 = (long)pplVar6[1] - (long)plVar10;
      plStack_90 = param_2;
      plStack_88 = param_3;
      ppuStack_80 = &puStack_40;
      uStack_78 = uVar24;
      if (pplVar6[1] < plVar10) {
        plVar8 = (long *)&UNK_10f582264;
        uVar24 = 0x109888f50;
        FUN_109262df8();
        pplVar6 = &plStack_90;
        while (plVar18 = plVar10, plVar18 != (long *)0x0) {
          *(long **)((long)pplVar6 + -0x20) = param_2;
          *(long **)((long)pplVar6 + -0x18) = param_3;
          *(undefined1 ****)((long)pplVar6 + -0x10) = pppuVar23;
          *(undefined8 *)((long)pplVar6 + -8) = uVar24;
          pppuVar23 = (undefined1 ***)((long)pplVar6 + -0x10);
          uVar24 = 0x109888f70;
          pplVar6 = (long **)((long)pplVar6 + -0x20);
          param_3 = plVar18;
          param_2 = plVar8;
          plVar10 = (long *)*plVar18;
        }
        return plVar8;
      }
      if (uVar11 <= uVar16) {
        uVar16 = uVar11;
      }
      uVar11 = param_5;
      if (uVar16 <= param_5) {
        uVar11 = uVar16;
      }
      lVar9 = (long)*pplVar6 + (long)plVar10;
      _memcmp(lVar9,puVar12,uVar11);
      uVar2 = 1;
      if (uVar16 < param_5) {
        uVar2 = 0xffffffff;
      }
      uVar3 = 0;
      if (uVar16 != param_5) {
        uVar3 = uVar2;
      }
      uVar2 = (uint)lVar9;
      if ((uint)lVar9 == 0) {
        uVar2 = uVar3;
      }
      return (long *)(ulong)uVar2;
    }
    puVar17 = (undefined1 *)(lVar9 + (long)plVar20);
  }
  *param_2 = (long)puVar17;
  param_2[1] = lVar15;
  uVar13 = 1;
  *param_1 = lVar9;
  param_1[1] = (long)plVar10;
LAB_109888c04:
  *(undefined1 *)(param_1 + 2) = uVar13;
  return plVar8;
}



/* Entry: 109888c24; end: 109888ee3;  */

/* WARNING: Possible PIC construction at 0x000109888f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109888f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000109888cb8) */
/* WARNING: Removing unreachable block (ram,0x000109888cbc) */
/* WARNING: Removing unreachable block (ram,0x000109888cc4) */
/* WARNING: Removing unreachable block (ram,0x000109888cc8) */

long * FUN_109888c24(long *param_1,long *param_2,ulong param_3,undefined *param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long **pplVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  int *piVar17;
  long *unaff_x20;
  undefined1 **ppuVar18;
  undefined8 uVar19;
  long alStack_80 [4];
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  pplVar7 = &plStack_40;
  if ((*(byte *)((long)param_2 + 0x34) & 1) == 0) {
    uStack_38 = (ulong)*(char *)((long)param_2 + 0x17);
    plStack_40 = param_2;
    if ((long)uStack_38 < 0) {
      uStack_38 = param_2[1];
      plStack_40 = (long *)*param_2;
    }
    if (uStack_38 < 3) {
      return param_1;
    }
    plVar11 = (long *)(uStack_38 - 3);
    param_4 = &DAT_10f2f41e7;
    param_3 = 0xffffffffffffffff;
    param_5 = 3;
    uVar19 = 0x109888cb8;
    goto FUN_109888ee4;
  }
  iVar6 = (int)param_2[6] - (int)param_1[9];
  if (*(char *)((long)param_2 + 0x3c) == '\x01') {
    if (iVar6 == 1) {
      iVar12 = *(int *)((long)param_1 + 0x4c);
    }
    else {
      iVar12 = 0;
    }
    iVar12 = (int)param_2[7] - iVar12;
  }
  else {
    iVar12 = 1;
  }
  if (param_1[2] == 0) {
    return param_1;
  }
  plVar10 = param_1 + 1;
  plVar15 = (long *)*plVar10;
  plVar11 = plVar10;
  plVar14 = plVar15;
  if (plVar15 == (long *)0x0) {
LAB_109888d60:
    if (plVar11 == (long *)*param_1) goto LAB_109888e14;
    if (plVar11 == plVar10) {
      if (plVar15 == (long *)0x0) {
        do {
          plVar11 = (long *)plVar10[2];
          bVar8 = (long *)*plVar11 == plVar10;
          plVar10 = plVar11;
        } while (bVar8);
      }
      else {
        do {
          plVar11 = plVar15;
          plVar15 = (long *)plVar11[1];
        } while ((long *)plVar11[1] != (long *)0x0);
      }
      piVar16 = (int *)((long)plVar11 + 0x24);
    }
    else {
      plVar10 = plVar11;
      plVar15 = (long *)*plVar11;
      if ((long *)*plVar11 == (long *)0x0) {
        do {
          plVar14 = (long *)plVar10[2];
          bVar8 = (long *)*plVar14 == plVar10;
          plVar10 = plVar14;
        } while (bVar8);
      }
      else {
        do {
          plVar14 = plVar15;
          plVar15 = (long *)plVar14[1];
        } while ((long *)plVar14[1] != (long *)0x0);
      }
      piVar16 = (int *)((long)plVar11 + 0x1c);
      piVar17 = (int *)((long)plVar14 + 0x1c);
      iVar5 = *piVar17;
      if (*piVar16 == iVar6) {
        if (iVar6 != iVar5) goto LAB_109888e14;
        if (iVar12 - (int)plVar14[4] <= (int)plVar11[4] - iVar12) {
          piVar16 = piVar17;
        }
        piVar16 = piVar16 + 2;
      }
      else {
        if (iVar6 - iVar5 <= *piVar16 - iVar6) {
          piVar16 = piVar17;
        }
        piVar16 = piVar16 + 2;
        if (iVar6 == iVar5) {
          piVar16 = (int *)((long)plVar14 + 0x24);
        }
      }
    }
  }
  else {
    do {
      bVar8 = (int)plVar14[4] < iVar12;
      if (*(int *)((long)plVar14 + 0x1c) != iVar6) {
        bVar8 = *(int *)((long)plVar14 + 0x1c) < iVar6;
      }
      lVar9 = 8;
      if (!bVar8) {
        lVar9 = 0;
        plVar11 = plVar14;
      }
      puVar1 = (undefined8 *)((long)plVar14 + lVar9);
      plVar14 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if (((plVar11 == plVar10) || (*(int *)((long)plVar11 + 0x1c) != iVar6)) ||
       ((int)plVar11[4] != iVar12)) goto LAB_109888d60;
LAB_109888e14:
    piVar16 = (int *)((long)plVar11 + 0x24);
  }
  plVar11 = (long *)(param_1[6] + (long)piVar16[4] * 0x18);
  pplVar7 = (long **)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(int *)(param_2 + 6) = *piVar16;
  *(undefined1 *)((long)param_2 + 0x34) = 1;
  if (*(char *)((long)param_2 + 0x3c) == '\x01') {
    *(int *)(param_2 + 7) = piVar16[1];
    *(undefined1 *)((long)param_2 + 0x3c) = 1;
  }
  if ((char)piVar16[3] != '\x01') {
    return (long *)pplVar7;
  }
  iVar6 = piVar16[2];
  uVar13 = (param_1[4] - param_1[3] >> 3) * -0x5555555555555555;
  if ((ulong)(long)iVar6 <= uVar13 && uVar13 - (long)iVar6 != 0) {
    param_2 = param_2 + 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,param_1[3] + (long)iVar6 * 0x18);
    return param_2;
  }
  FUN_109520c48();
  uVar19 = 0x109888ee4;
  func_0x000104bd46a0();
  unaff_x20 = param_1;
FUN_109888ee4:
  ppuVar18 = &puStack_50;
  uVar13 = (long)pplVar7[1] - (long)plVar11;
  plStack_60 = unaff_x20;
  plStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  uStack_48 = uVar19;
  if (pplVar7[1] < plVar11) {
    plVar10 = (long *)&UNK_10f582264;
    uVar19 = 0x109888f50;
    FUN_109262df8();
    pplVar7 = &plStack_60;
    while (plVar15 = plVar11, plVar15 != (long *)0x0) {
      *(long **)((long)pplVar7 + -0x20) = unaff_x20;
      *(long **)((long)pplVar7 + -0x18) = param_2;
      *(undefined1 ***)((long)pplVar7 + -0x10) = ppuVar18;
      *(undefined8 *)((long)pplVar7 + -8) = uVar19;
      ppuVar18 = (undefined1 **)((long)pplVar7 + -0x10);
      uVar19 = 0x109888f70;
      pplVar7 = (long **)((long)pplVar7 + -0x20);
      param_2 = plVar15;
      unaff_x20 = plVar10;
      plVar11 = (long *)*plVar15;
    }
    return plVar10;
  }
  if (param_3 <= uVar13) {
    uVar13 = param_3;
  }
  uVar4 = param_5;
  if (uVar13 <= param_5) {
    uVar4 = uVar13;
  }
  lVar9 = (long)*pplVar7 + (long)plVar11;
  _memcmp(lVar9,param_4,uVar4);
  uVar2 = 1;
  if (uVar13 < param_5) {
    uVar2 = 0xffffffff;
  }
  uVar3 = 0;
  if (uVar13 != param_5) {
    uVar3 = uVar2;
  }
  uVar2 = (uint)lVar9;
  if ((uint)lVar9 == 0) {
    uVar2 = uVar3;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 109888ee4; end: 109888f8f;  */

/* WARNING: Possible PIC construction at 0x000109888f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109888f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

undefined *
FUN_109888ee4(long *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar11;
  ulong auStack_40 [4];
  undefined1 *puVar7;
  
  uVar4 = param_1[1] - (long)param_2;
  if (param_2 <= (ulong *)param_1[1]) {
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    uVar3 = param_5;
    if (uVar4 <= param_5) {
      uVar3 = uVar4;
    }
    lVar8 = *param_1 + (long)param_2;
    _memcmp(lVar8,param_4,uVar3);
    uVar1 = 1;
    if (uVar4 < param_5) {
      uVar1 = 0xffffffff;
    }
    uVar2 = 0;
    if (uVar4 != param_5) {
      uVar2 = uVar1;
    }
    uVar1 = (uint)lVar8;
    if ((uint)lVar8 == 0) {
      uVar1 = uVar2;
    }
    return (undefined *)(ulong)uVar1;
  }
  puVar9 = &UNK_10f582264;
  uVar11 = 0x109888f50;
  FUN_109262df8();
  puVar5 = &stack0xffffffffffffffe0;
  puVar6 = (undefined1 *)register0x00000008;
  while (puVar10 = param_2, puVar7 = puVar5, puVar10 != (ulong *)0x0) {
    *(undefined **)(puVar7 + -0x20) = unaff_x20;
    *(ulong **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar6 + -0x10;
    *(undefined8 *)(puVar7 + -8) = uVar11;
    uVar11 = 0x109888f70;
    puVar5 = puVar7 + -0x20;
    unaff_x19 = puVar10;
    unaff_x20 = puVar9;
    puVar6 = puVar7;
    param_2 = (ulong *)*puVar10;
  }
  return puVar9;
}



/* Entry: 109888f90; end: 109889077;  */

undefined ****
FUN_109888f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  undefined ****ppppuVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined **ppuStack_228;
  undefined1 uStack_220;
  undefined **ppuStack_218;
  char cStack_210;
  undefined **ppuStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **appuStack_1b0 [2];
  undefined1 auStack_1a0 [24];
  undefined8 auStack_188 [2];
  char cStack_171;
  long alStack_170 [3];
  long *plStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined1 uStack_127;
  char cStack_f8;
  long lStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_109382f8c(appuStack_58,param_4);
  puVar6 = &uStack_68;
  pppuVar2 = appuStack_58;
  FUN_109889568(param_1,puVar6,pppuVar2,param_5,param_6);
  iVar5 = (int)puVar6;
  ppppuVar3 = (undefined ****)pppuStack_40;
  if (pppuStack_40 == appuStack_58) {
    lVar7 = 0x20;
LAB_109889008:
    (**(code **)((long)*pppuStack_40 + lVar7))();
  }
  else if ((undefined ****)pppuStack_40 != (undefined ****)0x0) {
    lVar7 = 0x28;
    goto LAB_109889008;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == appuStack_58) {
    lVar7 = 0x20;
LAB_109889064:
    (**(code **)((long)*pppuStack_40 + lVar7))();
  }
  else if ((undefined ****)pppuStack_40 != (undefined ****)0x0) {
    lVar7 = 0x28;
    goto LAB_109889064;
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppppuVar3[3] == (undefined ***)0x0) {
    uStack_127 = *(undefined1 *)(ppppuVar3 + 0x17);
    pppuStack_140 = (undefined ***)0x0;
    pppuStack_148 = (undefined ***)0x0;
    uStack_130 = 0;
    uStack_138 = 0;
    cStack_128 = '\0';
    pppuStack_150 = pppuVar2;
    FUN_10988b2e4(ppppuVar3,&pppuStack_150);
    if (iVar5 != 0) {
      iVar5 = (int)ppppuVar3 + 0x28;
      FUN_10988966c();
      *(int *)(ppppuVar3 + 4) = iVar5;
      if (iVar5 != 0xf) {
        pppuVar8 = ppppuVar3[9];
        FUN_10988addc(auStack_188,ppppuVar3 + 5);
        ppuStack_1c8 = (undefined **)ppppuVar3[10];
        ppuStack_1d0 = (undefined **)ppppuVar3[9];
        ppuStack_1c0 = (undefined **)ppppuVar3[0xb];
        func_0x000107c31940(auStack_200,"value");
        FUN_10988aec8(auStack_1e8,ppppuVar3,0xf,auStack_200);
        FUN_109384a64(appuStack_1b0,0x65,&ppuStack_1d0,auStack_1e8);
        ppppuVar3 = (undefined ****)appuStack_1b0;
        FUN_109385a70(&pppuStack_150,pppuVar8,auStack_188,appuStack_1b0);
        appuStack_1b0[0] = &PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_1a0);
        __ZNSt9exceptionD2Ev(appuStack_1b0);
        if (cStack_1d1 < '\0') {
          __ZdlPv(auStack_1e8[0]);
        }
        if (cStack_1e9 < '\0') {
          __ZdlPv(auStack_200[0]);
        }
        if (cStack_171 < '\0') {
          __ZdlPv(auStack_188[0]);
        }
      }
    }
    if (cStack_128 == '\x01') {
      *(char *)pppuVar2 = '\t';
      ppuStack_228 = pppuVar2[1];
      pppuVar2[1] = (undefined **)0x0;
      FUN_109380ffc(&ppuStack_228);
    }
    ppppuVar1 = (undefined ****)pppuStack_148;
    if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
      pppuStack_140 = pppuStack_148;
      __ZdlPv();
    }
    goto LAB_1098893a0;
  }
  FUN_1093830cc(alStack_170,ppppuVar3);
  FUN_109385ac0(&pppuStack_150,pppuVar2,alStack_170,*(undefined1 *)(ppppuVar3 + 0x17));
  if (plStack_158 == alStack_170) {
    lVar7 = 0x20;
LAB_109889240:
    (**(code **)(*plStack_158 + lVar7))();
  }
  else if (plStack_158 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_109889240;
  }
  FUN_10988a4dc(ppppuVar3,&pppuStack_150);
  if (iVar5 != 0) {
    iVar5 = (int)ppppuVar3 + 0x28;
    FUN_10988966c();
    *(int *)(ppppuVar3 + 4) = iVar5;
    if (iVar5 != 0xf) {
      pppuVar8 = ppppuVar3[9];
      FUN_10988addc(auStack_188,ppppuVar3 + 5);
      ppuStack_1c8 = (undefined **)ppppuVar3[10];
      ppuStack_1d0 = (undefined **)ppppuVar3[9];
      ppuStack_1c0 = (undefined **)ppppuVar3[0xb];
      func_0x000107c31940(auStack_200,"value");
      FUN_10988aec8(auStack_1e8,ppppuVar3,0xf,auStack_200);
      FUN_109384a64(appuStack_1b0,0x65,&ppuStack_1d0,auStack_1e8);
      ppppuVar3 = (undefined ****)appuStack_1b0;
      FUN_109384928(&pppuStack_150,pppuVar8,auStack_188,appuStack_1b0);
      appuStack_1b0[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_1a0);
      __ZNSt9exceptionD2Ev(appuStack_1b0);
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
      }
      if (cStack_171 < '\0') {
        __ZdlPv(auStack_188[0]);
      }
    }
  }
  if (cStack_f8 == '\x01') {
    cStack_210 = *(char *)pppuVar2;
    *(char *)pppuVar2 = '\t';
    ppuStack_208 = pppuVar2[1];
    pppuVar2[1] = (undefined **)0x0;
    pppuVar2 = &ppuStack_208;
    cVar4 = cStack_210;
LAB_109889394:
    FUN_109380ffc(pppuVar2,cVar4);
  }
  else if (*(char *)pppuVar2 == '\t') {
    *(char *)pppuVar2 = '\0';
    uStack_220 = 9;
    ppuStack_218 = pppuVar2[1];
    pppuVar2[1] = (undefined **)0x0;
    pppuVar2 = &ppuStack_218;
    cVar4 = '\t';
    goto LAB_109889394;
  }
  ppppuVar1 = &pppuStack_150;
  FUN_109387a34();
LAB_1098893a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  appuStack_1b0[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(ppppuVar3 + 2);
  __ZNSt9exceptionD2Ev(appuStack_1b0);
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
    pppuStack_140 = pppuStack_148;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_10988a49c(ppppuVar1 + 5);
  ppppuVar3 = (undefined ****)ppppuVar1[3];
  if (ppppuVar3 == ppppuVar1) {
    lVar7 = 0x20;
  }
  else {
    if (ppppuVar3 == (undefined ****)0x0) {
      return ppppuVar1;
    }
    lVar7 = 0x28;
  }
  (**(code **)((long)*ppppuVar3 + lVar7))();
  return ppppuVar1;
}



/* Entry: 109889078; end: 109889517;  */

char ** FUN_109889078(undefined ***param_1,int param_2,char *param_3)

{
  int iVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  char **ppcVar4;
  char cVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  char cStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **appuStack_140 [2];
  undefined1 auStack_130 [24];
  undefined8 auStack_118 [2];
  char cStack_101;
  long alStack_100 [3];
  long *plStack_e8;
  char *pcStack_e0;
  char **ppcStack_d8;
  char **ppcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined1 uStack_b7;
  char cStack_88;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[3] == (undefined **)0x0) {
    uStack_b7 = *(undefined1 *)(param_1 + 0x17);
    ppcStack_d0 = (char **)0x0;
    ppcStack_d8 = (char **)0x0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    cStack_b8 = '\0';
    pcStack_e0 = param_3;
    FUN_10988b2e4(param_1,&pcStack_e0);
    if (param_2 != 0) {
      iVar1 = (int)param_1 + 0x28;
      FUN_10988966c();
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0xf) {
        ppuVar7 = param_1[9];
        FUN_10988addc(auStack_118,param_1 + 5);
        ppuStack_158 = param_1[10];
        ppuStack_160 = param_1[9];
        ppuStack_150 = param_1[0xb];
        func_0x000107c31940(auStack_190,"value");
        FUN_10988aec8(auStack_178,param_1,0xf,auStack_190);
        FUN_109384a64(appuStack_140,0x65,&ppuStack_160,auStack_178);
        param_1 = appuStack_140;
        FUN_109385a70(&pcStack_e0,ppuVar7,auStack_118,appuStack_140);
        appuStack_140[0] = &PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_130);
        __ZNSt9exceptionD2Ev(appuStack_140);
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        if (cStack_179 < '\0') {
          __ZdlPv(auStack_190[0]);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(auStack_118[0]);
        }
      }
    }
    if (cStack_b8 == '\x01') {
      *param_3 = '\t';
      uStack_1b8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      FUN_109380ffc(&uStack_1b8);
    }
    ppcVar2 = ppcStack_d8;
    if (ppcStack_d8 != (char **)0x0) {
      ppcStack_d0 = ppcStack_d8;
      __ZdlPv();
    }
    goto LAB_1098893a0;
  }
  FUN_1093830cc(alStack_100,param_1);
  FUN_109385ac0(&pcStack_e0,param_3,alStack_100,*(undefined1 *)(param_1 + 0x17));
  if (plStack_e8 == alStack_100) {
    lVar6 = 0x20;
LAB_109889240:
    (**(code **)(*plStack_e8 + lVar6))();
  }
  else if (plStack_e8 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_109889240;
  }
  FUN_10988a4dc(param_1,&pcStack_e0);
  if (param_2 != 0) {
    iVar1 = (int)param_1 + 0x28;
    FUN_10988966c();
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0xf) {
      ppuVar7 = param_1[9];
      FUN_10988addc(auStack_118,param_1 + 5);
      ppuStack_158 = param_1[10];
      ppuStack_160 = param_1[9];
      ppuStack_150 = param_1[0xb];
      func_0x000107c31940(auStack_190,"value");
      FUN_10988aec8(auStack_178,param_1,0xf,auStack_190);
      FUN_109384a64(appuStack_140,0x65,&ppuStack_160,auStack_178);
      param_1 = appuStack_140;
      FUN_109384928(&pcStack_e0,ppuVar7,auStack_118,appuStack_140);
      appuStack_140[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_130);
      __ZNSt9exceptionD2Ev(appuStack_140);
      if (cStack_161 < '\0') {
        __ZdlPv(auStack_178[0]);
      }
      if (cStack_179 < '\0') {
        __ZdlPv(auStack_190[0]);
      }
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
    }
  }
  if (cStack_88 == '\x01') {
    cStack_1a0 = *param_3;
    *param_3 = '\t';
    uStack_198 = *(undefined8 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    puVar3 = &uStack_198;
    cVar5 = cStack_1a0;
LAB_109889394:
    FUN_109380ffc(puVar3,cVar5);
  }
  else if (*param_3 == '\t') {
    *param_3 = '\0';
    uStack_1b0 = 9;
    uStack_1a8 = *(undefined8 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    puVar3 = &uStack_1a8;
    cVar5 = '\t';
    goto LAB_109889394;
  }
  ppcVar2 = &pcStack_e0;
  FUN_109387a34();
LAB_1098893a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppcVar2;
  }
  ___stack_chk_fail();
  appuStack_140[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(appuStack_140);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  if (ppcStack_d8 != (char **)0x0) {
    ppcStack_d0 = ppcStack_d8;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_10988a49c(ppcVar2 + 5);
  ppcVar4 = (char **)ppcVar2[3];
  if (ppcVar4 == ppcVar2) {
    lVar6 = 0x20;
  }
  else {
    if (ppcVar4 == (char **)0x0) {
      return ppcVar2;
    }
    lVar6 = 0x28;
  }
  (**(code **)(*ppcVar4 + lVar6))();
  return ppcVar2;
}



/* Entry: 109889518; end: 109889567;  */

long * FUN_109889518(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_10988a49c(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 109889568; end: 10988963b;  */

long FUN_109889568(long param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_1093830cc(param_1,param_3);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  uVar3 = *param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_2[1];
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined1 *)(lVar2 + 0x38) = param_5;
  *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(char **)(lVar2 + 0x90) = "";
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  FUN_10988963c();
  *(int *)(param_1 + 0xb0) = (int)lVar2;
  *(undefined1 *)(param_1 + 0xb8) = param_4;
  iVar1 = (int)param_1 + 0x28;
  FUN_10988966c();
  *(int *)(param_1 + 0x20) = iVar1;
  return param_1;
}



/* Entry: 10988963c; end: 10988966b;  */

int FUN_10988963c(undefined8 *param_1)

{
  char cVar1;
  
  _localeconv();
  if ((char *)*param_1 == (char *)0x0) {
    cVar1 = '.';
  }
  else {
    cVar1 = *(char *)*param_1;
  }
  return (int)cVar1;
}



/* Entry: 10988966c; end: 1098898ff;  */

undefined4 * FUN_10988966c(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(long *)(param_2 + 8) == 0) && (puVar5 = param_2, FUN_109889900(), ((ulong)puVar5 & 1) == 0)
     ) {
    puVar12 = &UNK_10f56787a;
    goto LAB_109889784;
  }
  do {
    FUN_10988a1e4(param_2);
    uVar2 = param_2[5];
    uVar11 = (ulong)uVar2;
  } while (uVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100002600U) != 0);
  cVar1 = *(char *)(param_2 + 4);
  while ((cVar1 == '\x01' && (uVar2 = (uint)uVar11, uVar2 == 0x2f))) {
    puVar5 = param_2;
    func_0x000109889960();
    if ((int)puVar5 == 0) {
      return (undefined4 *)0xe;
    }
    do {
      FUN_10988a1e4(param_2);
      uVar2 = param_2[5];
      uVar11 = (ulong)uVar2;
    } while (uVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100002600U) != 0);
    cVar1 = *(char *)(param_2 + 4);
  }
  if ((int)uVar2 < 0x3a) {
    if ((int)uVar2 < 0x2d) {
      if (uVar2 + 1 < 2) {
        return (undefined4 *)0xf;
      }
      if (uVar2 == 0x22) {
        unaff_x29 = &stack0xfffffffffffffff0;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_10988a2dc();
        unaff_x21 = &UNK_10f567b51;
        unaff_x22 = &UNK_10e0052d4;
code_r0x000109889a50:
        puVar5 = param_2;
        FUN_10988a1e4();
        puVar6 = (undefined4 *)0x4;
        puVar12 = unaff_x21;
        puVar14 = unaff_x20;
        switch((int)puVar5) {
        case 0:
          puVar12 = &UNK_10f567a2d;
          break;
        case 1:
          puVar12 = &UNK_10f567a76;
          break;
        case 2:
          puVar12 = &UNK_10f567abf;
          break;
        case 3:
          puVar12 = &UNK_10f567b08;
          break;
        case 4:
          break;
        case 5:
          puVar12 = &UNK_10f567b9a;
          break;
        case 6:
          puVar12 = &UNK_10f567be3;
          break;
        case 7:
          puVar12 = &UNK_10f567c2c;
          break;
        case 8:
          puVar12 = &UNK_10f567c75;
          break;
        case 9:
          puVar12 = &UNK_10f567cc3;
          break;
        case 10:
          puVar12 = &UNK_10f567d11;
          break;
        case 0xb:
          puVar12 = &UNK_10f567d5f;
          break;
        case 0xc:
          puVar12 = &UNK_10f567da7;
          break;
        case 0xd:
          puVar12 = &UNK_10f567df5;
          break;
        case 0xe:
          puVar12 = &UNK_10f567e43;
          break;
        case 0xf:
          puVar12 = &UNK_10f567e8b;
          break;
        case 0x10:
          puVar12 = &UNK_10f567ed3;
          break;
        case 0x11:
          puVar12 = &UNK_10f567f1c;
          break;
        case 0x12:
          puVar12 = &UNK_10f567f65;
          break;
        case 0x13:
          puVar12 = &UNK_10f567fae;
          break;
        case 0x14:
          puVar12 = &UNK_10f567ff7;
          break;
        case 0x15:
          puVar12 = &UNK_10f568040;
          break;
        case 0x16:
          puVar12 = &UNK_10f568089;
          break;
        case 0x17:
          puVar12 = &UNK_10f5680d2;
          break;
        case 0x18:
          puVar12 = &UNK_10f56811b;
          break;
        case 0x19:
          puVar12 = &UNK_10f568164;
          break;
        case 0x1a:
          puVar12 = &UNK_10f5681ac;
          break;
        case 0x1b:
          puVar12 = &UNK_10f5681f5;
          break;
        case 0x1c:
          puVar12 = &UNK_10f56823e;
          break;
        case 0x1d:
          puVar12 = &UNK_10f568286;
          break;
        case 0x1e:
          puVar12 = &UNK_10f5682ce;
          break;
        case 0x1f:
          puVar12 = &UNK_10f568316;
          break;
        case 0x20:
        case 0x21:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
          uVar2 = param_2[5];
          goto code_r0x000109889a80;
        case 0x22:
          goto code_r0x000109889e8c;
        case 0x5c:
          puVar5 = param_2;
          FUN_10988a1e4();
          puVar12 = &UNK_10f5679f9;
          iVar4 = (int)puVar5;
          if (iVar4 < 0x66) {
            if (iVar4 < 0x5c) {
              if (iVar4 == 0x22) {
                uVar2 = 0x22;
              }
              else {
                if (iVar4 != 0x2f) break;
                uVar2 = 0x2f;
              }
            }
            else if (iVar4 == 0x5c) {
              uVar2 = 0x5c;
            }
            else {
              if (iVar4 != 0x62) break;
              uVar2 = 8;
            }
          }
          else if (iVar4 < 0x72) {
            if (iVar4 == 0x66) {
              uVar2 = 0xc;
            }
            else {
              if (iVar4 != 0x6e) break;
              uVar2 = 10;
            }
          }
          else if (iVar4 == 0x72) {
            uVar2 = 0xd;
          }
          else {
            if (iVar4 != 0x74) {
              if (iVar4 == 0x75) {
                puVar14 = param_2;
                FUN_10988a330();
                uVar2 = (uint)puVar14;
                if (uVar2 == 0xffffffff) {
code_r0x000109889ebc:
                  puVar12 = &UNK_10f567933;
                }
                else {
                  unaff_x20 = puVar14;
                  if ((uVar2 & 0xfffffc00) == 0xd800) {
                    puVar5 = param_2;
                    FUN_10988a1e4();
                    if (((int)puVar5 == 0x5c) &&
                       (puVar5 = param_2, FUN_10988a1e4(), (int)puVar5 == 0x75)) {
                      puVar5 = param_2;
                      FUN_10988a330();
                      uVar3 = (uint)puVar5;
                      if (uVar3 == 0xffffffff) goto code_r0x000109889ebc;
                      if (uVar3 >> 10 == 0x37) {
                        puVar14 = (undefined4 *)(ulong)(uVar3 + uVar2 * 0x400 + 0xfca02400);
code_r0x000109889b94:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,
                                   (uint)((ulong)puVar14 >> 0x12) & 0x3fff | 0xfffffff0);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,(uint)puVar14 >> 0xc & 0x3f | 0xffffff80);
code_r0x000109889bb8:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,(uint)puVar14 >> 6 & 0x3f | 0xffffff80);
                        goto code_r0x000109889bc8;
                      }
                    }
                    puVar12 = &UNK_10f567969;
                  }
                  else {
                    if ((uVar2 & 0xfffffc00) != 0xdc00) {
                      if (0x7f < (int)uVar2) {
                        if (0x7ff < uVar2) {
                          if (uVar2 >> 0x10 != 0) goto code_r0x000109889b94;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                    (param_2 + 0x14,uVar2 >> 0xc | 0xffffffe0);
                          goto code_r0x000109889bb8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,uVar2 >> 6 | 0xffffffc0);
code_r0x000109889bc8:
                        uVar2 = (uint)puVar14 & 0x3f | 0xffffff80;
                      }
                      goto code_r0x000109889a80;
                    }
                    puVar12 = &UNK_10f5679b5;
                  }
                }
              }
              break;
            }
            uVar2 = 9;
          }
code_r0x000109889a80:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(int)(char)uVar2);
          unaff_x20 = puVar14;
          goto code_r0x000109889a50;
        default:
          puVar12 = &UNK_10f56835e;
          break;
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 199:
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
        case 0xd8:
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
        case 0xde:
        case 0xdf:
          uStack_60 = 0xbf00000080;
          uVar10 = 2;
          goto code_r0x000109889c10;
        case 0xe0:
          uStack_60 = 0xbf000000a0;
          goto code_r0x000109889ab4;
        case 0xe1:
        case 0xe2:
        case 0xe3:
        case 0xe4:
        case 0xe5:
        case 0xe6:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xee:
        case 0xef:
          uStack_60 = 0xbf00000080;
          goto code_r0x000109889ab4;
        case 0xed:
          uStack_60 = 0x9f00000080;
code_r0x000109889ab4:
          uStack_58 = 0xbf00000080;
          uVar10 = 4;
code_r0x000109889c10:
          puVar5 = param_2;
          param_1 = uStack_60;
          FUN_10988a408(param_2,&uStack_60,uVar10);
          if (((ulong)puVar5 & 1) == 0) goto code_r0x000109889e88;
          goto code_r0x000109889a50;
        case 0xf0:
          puVar7 = (undefined8 *)&UNK_10e0054e4;
          goto code_r0x000109889bfc;
        case 0xf1:
        case 0xf2:
        case 0xf3:
          puVar7 = (undefined8 *)&UNK_10e0054fc;
          goto code_r0x000109889bfc;
        case 0xf4:
          puVar7 = (undefined8 *)&UNK_10e005514;
code_r0x000109889bfc:
          uStack_50 = 0xbf00000080;
          uStack_58 = puVar7[1];
          uStack_60 = *puVar7;
          uVar10 = 6;
          goto code_r0x000109889c10;
        case -1:
          puVar12 = &UNK_10f56790d;
        }
        *(undefined **)(param_2 + 0x1a) = puVar12;
        goto code_r0x000109889e88;
      }
      if (uVar2 == 0x2c) {
        return (undefined4 *)0xd;
      }
    }
    else {
      puVar6 = param_2;
      if ((uVar2 - 0x30 < 10) || (uVar2 == 0x2d)) goto code_r0x000109889ee4;
    }
  }
  else if ((int)uVar2 < 0x6e) {
    if ((int)uVar2 < 0x5d) {
      if (uVar2 == 0x3a) {
        return (undefined4 *)0xc;
      }
      if (uVar2 == 0x5b) {
        return (undefined4 *)0x8;
      }
    }
    else {
      if (uVar2 == 0x5d) {
        return (undefined4 *)0xa;
      }
      if (uVar2 == 0x66) {
        lVar13 = 0;
        while (puVar5 = param_2, FUN_10988a1e4(),
              (uint)(byte)(&UNK_10e0054dd)[lVar13] == ((uint)puVar5 & 0xff)) {
          lVar13 = lVar13 + 1;
          if (lVar13 == 4) {
            return (undefined4 *)0x2;
          }
        }
      }
    }
  }
  else if ((int)uVar2 < 0x7b) {
    if (uVar2 == 0x6e) {
      lVar13 = 1;
      while (puVar5 = param_2, FUN_10988a1e4(),
            (uint)(byte)(&stack0xffffffffffffffc8)[lVar13] == ((uint)puVar5 & 0xff)) {
        lVar13 = lVar13 + 1;
        if (lVar13 == 4) {
          return (undefined4 *)0x3;
        }
      }
    }
    else if (uVar2 == 0x74) {
      lVar13 = 1;
      while (puVar5 = param_2, FUN_10988a1e4(),
            (uint)(byte)(&stack0xffffffffffffffcc)[lVar13] == ((uint)puVar5 & 0xff)) {
        lVar13 = lVar13 + 1;
        if (lVar13 == 4) {
          return (undefined4 *)0x1;
        }
      }
    }
  }
  else {
    if (uVar2 == 0x7b) {
      return (undefined4 *)0x9;
    }
    if (uVar2 == 0x7d) {
      return (undefined4 *)0xb;
    }
  }
  puVar12 = &UNK_10f5678a7;
LAB_109889784:
  *(undefined **)(param_2 + 0x1a) = puVar12;
  return (undefined4 *)0xe;
code_r0x000109889e88:
  puVar6 = (undefined4 *)0xe;
code_r0x000109889e8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  unaff_x30 = FUN_109889ee4;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&uStack_60;
  unaff_x19 = param_2;
code_r0x000109889ee4:
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined4 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined4 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10988a2dc();
  iVar4 = puVar6[5];
  if (iVar4 - 0x31U < 9) {
    iVar15 = 5;
LAB_109889f14:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(int)(char)iVar4);
      puVar5 = puVar6;
      FUN_10988a1e4();
      iVar4 = (int)puVar5;
      if (9 < iVar4 - 0x30U) break;
      iVar4 = puVar6[5];
    }
    if (iVar4 != 0x2e) {
      if ((iVar4 != 0x45) && (iVar4 != 0x65)) {
LAB_10988a0fc:
        puVar5 = puVar6;
        FUN_10988a28c();
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        ___error();
        *puVar5 = 0;
        piVar8 = puVar6 + 0x14;
        if (iVar15 == 5) {
          if (*(char *)((long)puVar6 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoull(piVar8,(undefined1 *)((long)register0x00000008 + -0x38),10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar6 + 0x1e) = piVar8;
            return (undefined4 *)0x5;
          }
        }
        else {
          if (*(char *)((long)puVar6 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoll(piVar8,(undefined1 *)((long)register0x00000008 + -0x38),10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar6 + 0x1c) = piVar8;
            return (undefined4 *)0x6;
          }
        }
        goto LAB_109889fd0;
      }
      goto LAB_109889f58;
    }
LAB_10988a0a4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 0x22));
    puVar5 = puVar6;
    FUN_10988a1e4();
    if (9 < (int)puVar5 - 0x30U) {
      puVar12 = &UNK_10f5683ad;
      goto LAB_10988a1c4;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_10988a1e4();
      iVar4 = (int)puVar5;
    } while (iVar4 - 0x30U < 10);
    if ((iVar4 == 0x65) || (iVar4 == 0x45)) goto LAB_109889f58;
  }
  else {
    if (iVar4 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,0x30);
      iVar15 = 5;
    }
    else {
      if (iVar4 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (puVar6 + 0x14,0x2d);
      }
      puVar5 = puVar6;
      FUN_10988a1e4();
      if ((int)puVar5 - 0x31U < 9) {
        iVar4 = puVar6[5];
        iVar15 = 6;
        goto LAB_109889f14;
      }
      if ((int)puVar5 != 0x30) {
        puVar12 = &UNK_10f568384;
        goto LAB_10988a1c4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      iVar15 = 6;
    }
    puVar5 = puVar6;
    FUN_10988a1e4();
    iVar4 = (int)puVar5;
    if ((iVar4 != 0x65) && (iVar4 != 0x45)) {
      if (iVar4 != 0x2e) goto LAB_10988a0fc;
      goto LAB_10988a0a4;
    }
LAB_109889f58:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
    puVar5 = puVar6;
    FUN_10988a1e4();
    iVar4 = (int)puVar5;
    if (9 < iVar4 - 0x30U) {
      if ((iVar4 != 0x2d) && (iVar4 != 0x2b)) {
        puVar12 = &UNK_10f5683d6;
LAB_10988a1c4:
        *(undefined **)(puVar6 + 0x1a) = puVar12;
        return (undefined4 *)0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_10988a1e4();
      if (9 < (int)puVar5 - 0x30U) {
        puVar12 = &UNK_10f568411;
        goto LAB_10988a1c4;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
    puVar5 = puVar6;
    FUN_10988a1e4();
    iVar4 = (int)puVar5;
    while (iVar4 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_10988a1e4();
      iVar4 = (int)puVar5;
    }
  }
  puVar5 = puVar6;
  FUN_10988a28c();
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  ___error();
  *puVar5 = 0;
LAB_109889fd0:
  puVar7 = (undefined8 *)(puVar6 + 0x14);
  if (*(char *)((long)puVar6 + 0x67) < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  _strtod(puVar7,(undefined1 *)((long)register0x00000008 + -0x38));
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  return (undefined4 *)0x7;
}



/* Entry: 109889900; end: 109889a0f;  */

bool FUN_109889900(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_10988a1e4();
  if ((int)uVar2 == 0xef) {
    uVar2 = param_1;
    FUN_10988a1e4();
    if ((int)uVar2 == 0xbb) {
      FUN_10988a1e4(param_1);
      bVar1 = (int)param_1 == 0xbf;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    FUN_10988a28c(param_1);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 109889a10; end: 109889ee3;  */

undefined4 * FUN_109889a10(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong unaff_x20;
  ulong uVar12;
  int iVar13;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10988a2dc();
code_r0x000109889a50:
  uVar4 = param_2;
  FUN_10988a1e4();
  puVar5 = (undefined4 *)0x4;
  puVar11 = &UNK_10f567b51;
  uVar12 = unaff_x20;
  switch((int)uVar4) {
  case 0:
    puVar11 = &UNK_10f567a2d;
    break;
  case 1:
    puVar11 = &UNK_10f567a76;
    break;
  case 2:
    puVar11 = &UNK_10f567abf;
    break;
  case 3:
    puVar11 = &UNK_10f567b08;
    break;
  case 4:
    break;
  case 5:
    puVar11 = &UNK_10f567b9a;
    break;
  case 6:
    puVar11 = &UNK_10f567be3;
    break;
  case 7:
    puVar11 = &UNK_10f567c2c;
    break;
  case 8:
    puVar11 = &UNK_10f567c75;
    break;
  case 9:
    puVar11 = &UNK_10f567cc3;
    break;
  case 10:
    puVar11 = &UNK_10f567d11;
    break;
  case 0xb:
    puVar11 = &UNK_10f567d5f;
    break;
  case 0xc:
    puVar11 = &UNK_10f567da7;
    break;
  case 0xd:
    puVar11 = &UNK_10f567df5;
    break;
  case 0xe:
    puVar11 = &UNK_10f567e43;
    break;
  case 0xf:
    puVar11 = &UNK_10f567e8b;
    break;
  case 0x10:
    puVar11 = &UNK_10f567ed3;
    break;
  case 0x11:
    puVar11 = &UNK_10f567f1c;
    break;
  case 0x12:
    puVar11 = &UNK_10f567f65;
    break;
  case 0x13:
    puVar11 = &UNK_10f567fae;
    break;
  case 0x14:
    puVar11 = &UNK_10f567ff7;
    break;
  case 0x15:
    puVar11 = &UNK_10f568040;
    break;
  case 0x16:
    puVar11 = &UNK_10f568089;
    break;
  case 0x17:
    puVar11 = &UNK_10f5680d2;
    break;
  case 0x18:
    puVar11 = &UNK_10f56811b;
    break;
  case 0x19:
    puVar11 = &UNK_10f568164;
    break;
  case 0x1a:
    puVar11 = &UNK_10f5681ac;
    break;
  case 0x1b:
    puVar11 = &UNK_10f5681f5;
    break;
  case 0x1c:
    puVar11 = &UNK_10f56823e;
    break;
  case 0x1d:
    puVar11 = &UNK_10f568286;
    break;
  case 0x1e:
    puVar11 = &UNK_10f5682ce;
    break;
  case 0x1f:
    puVar11 = &UNK_10f568316;
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    uVar1 = *(uint *)(param_2 + 0x14);
    goto code_r0x000109889a80;
  case 0x22:
    goto code_r0x000109889e8c;
  case 0x5c:
    uVar4 = param_2;
    FUN_10988a1e4();
    puVar11 = &UNK_10f5679f9;
    iVar3 = (int)uVar4;
    if (iVar3 < 0x66) {
      if (iVar3 < 0x5c) {
        if (iVar3 == 0x22) {
          uVar1 = 0x22;
        }
        else {
          if (iVar3 != 0x2f) break;
          uVar1 = 0x2f;
        }
      }
      else if (iVar3 == 0x5c) {
        uVar1 = 0x5c;
      }
      else {
        if (iVar3 != 0x62) break;
        uVar1 = 8;
      }
    }
    else if (iVar3 < 0x72) {
      if (iVar3 == 0x66) {
        uVar1 = 0xc;
      }
      else {
        if (iVar3 != 0x6e) break;
        uVar1 = 10;
      }
    }
    else if (iVar3 == 0x72) {
      uVar1 = 0xd;
    }
    else {
      if (iVar3 != 0x74) {
        if (iVar3 == 0x75) {
          uVar12 = param_2;
          FUN_10988a330();
          uVar1 = (uint)uVar12;
          if (uVar1 == 0xffffffff) {
code_r0x000109889ebc:
            puVar11 = &UNK_10f567933;
          }
          else {
            unaff_x20 = uVar12;
            if ((uVar1 & 0xfffffc00) == 0xd800) {
              uVar4 = param_2;
              FUN_10988a1e4();
              if (((int)uVar4 == 0x5c) && (uVar4 = param_2, FUN_10988a1e4(), (int)uVar4 == 0x75)) {
                uVar4 = param_2;
                FUN_10988a330();
                uVar2 = (uint)uVar4;
                if (uVar2 == 0xffffffff) goto code_r0x000109889ebc;
                if (uVar2 >> 10 == 0x37) {
                  uVar12 = (ulong)(uVar2 + uVar1 * 0x400 + 0xfca02400);
code_r0x000109889b94:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)(uVar12 >> 0x12) & 0x3fff | 0xfffffff0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)uVar12 >> 0xc & 0x3f | 0xffffff80);
code_r0x000109889bb8:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)uVar12 >> 6 & 0x3f | 0xffffff80);
                  goto code_r0x000109889bc8;
                }
              }
              puVar11 = &UNK_10f567969;
            }
            else {
              if ((uVar1 & 0xfffffc00) != 0xdc00) {
                if (0x7f < (int)uVar1) {
                  if (0x7ff < uVar1) {
                    if (uVar1 >> 0x10 != 0) goto code_r0x000109889b94;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2 + 0x50,uVar1 >> 0xc | 0xffffffe0);
                    goto code_r0x000109889bb8;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,uVar1 >> 6 | 0xffffffc0);
code_r0x000109889bc8:
                  uVar1 = (uint)uVar12 & 0x3f | 0xffffff80;
                }
                goto code_r0x000109889a80;
              }
              puVar11 = &UNK_10f5679b5;
            }
          }
        }
        break;
      }
      uVar1 = 9;
    }
code_r0x000109889a80:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x50,(int)(char)uVar1);
    unaff_x20 = uVar12;
    goto code_r0x000109889a50;
  default:
    puVar11 = &UNK_10f56835e;
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    uStack_60 = 0xbf00000080;
    uVar10 = 2;
    goto code_r0x000109889c10;
  case 0xe0:
    uStack_60 = 0xbf000000a0;
    goto code_r0x000109889ab4;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    uStack_60 = 0xbf00000080;
    goto code_r0x000109889ab4;
  case 0xed:
    uStack_60 = 0x9f00000080;
code_r0x000109889ab4:
    uStack_58 = 0xbf00000080;
    uVar10 = 4;
code_r0x000109889c10:
    uVar4 = param_2;
    param_1 = uStack_60;
    FUN_10988a408(param_2,&uStack_60,uVar10);
    if ((uVar4 & 1) == 0) goto code_r0x000109889e88;
    goto code_r0x000109889a50;
  case 0xf0:
    puVar6 = (undefined8 *)&UNK_10e0054e4;
    goto code_r0x000109889bfc;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    puVar6 = (undefined8 *)&UNK_10e0054fc;
    goto code_r0x000109889bfc;
  case 0xf4:
    puVar6 = (undefined8 *)&UNK_10e005514;
code_r0x000109889bfc:
    uStack_50 = 0xbf00000080;
    uStack_58 = puVar6[1];
    uStack_60 = *puVar6;
    uVar10 = 6;
    goto code_r0x000109889c10;
  case -1:
    puVar11 = &UNK_10f56790d;
  }
  *(undefined **)(param_2 + 0x68) = puVar11;
code_r0x000109889e88:
  puVar5 = (undefined4 *)0xe;
code_r0x000109889e8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puStack_90 = &UNK_10e0052d4;
  puStack_88 = &UNK_10f567b51;
  pcStack_68 = FUN_109889ee4;
  uStack_80 = unaff_x20;
  uStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10988a2dc();
  iVar3 = puVar5[5];
  if (iVar3 - 0x31U < 9) {
    iVar13 = 5;
LAB_109889f14:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(int)(char)iVar3);
      puVar7 = puVar5;
      FUN_10988a1e4();
      iVar3 = (int)puVar7;
      if (9 < iVar3 - 0x30U) break;
      iVar3 = puVar5[5];
    }
    if (iVar3 != 0x2e) {
      if ((iVar3 != 0x45) && (iVar3 != 0x65)) {
LAB_10988a0fc:
        puVar7 = puVar5;
        FUN_10988a28c();
        uStack_98 = 0;
        ___error();
        *puVar7 = 0;
        piVar8 = puVar5 + 0x14;
        if (iVar13 == 5) {
          if (*(char *)((long)puVar5 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoull(piVar8,&uStack_98,10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar5 + 0x1e) = piVar8;
            return (undefined4 *)0x5;
          }
        }
        else {
          if (*(char *)((long)puVar5 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoll(piVar8,&uStack_98,10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar5 + 0x1c) = piVar8;
            return (undefined4 *)0x6;
          }
        }
        goto LAB_109889fd0;
      }
      goto LAB_109889f58;
    }
LAB_10988a0a4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 0x22));
    puVar7 = puVar5;
    FUN_10988a1e4();
    if (9 < (int)puVar7 - 0x30U) {
      puVar11 = &UNK_10f5683ad;
      goto LAB_10988a1c4;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_10988a1e4();
      iVar3 = (int)puVar7;
    } while (iVar3 - 0x30U < 10);
    if ((iVar3 == 0x65) || (iVar3 == 0x45)) goto LAB_109889f58;
  }
  else {
    if (iVar3 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,0x30);
      iVar13 = 5;
    }
    else {
      if (iVar3 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (puVar5 + 0x14,0x2d);
      }
      puVar7 = puVar5;
      FUN_10988a1e4();
      if ((int)puVar7 - 0x31U < 9) {
        iVar3 = puVar5[5];
        iVar13 = 6;
        goto LAB_109889f14;
      }
      if ((int)puVar7 != 0x30) {
        puVar11 = &UNK_10f568384;
        goto LAB_10988a1c4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      iVar13 = 6;
    }
    puVar7 = puVar5;
    FUN_10988a1e4();
    iVar3 = (int)puVar7;
    if ((iVar3 != 0x65) && (iVar3 != 0x45)) {
      if (iVar3 != 0x2e) goto LAB_10988a0fc;
      goto LAB_10988a0a4;
    }
LAB_109889f58:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
    puVar7 = puVar5;
    FUN_10988a1e4();
    iVar3 = (int)puVar7;
    if (9 < iVar3 - 0x30U) {
      if ((iVar3 != 0x2d) && (iVar3 != 0x2b)) {
        puVar11 = &UNK_10f5683d6;
LAB_10988a1c4:
        *(undefined **)(puVar5 + 0x1a) = puVar11;
        return (undefined4 *)0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_10988a1e4();
      if (9 < (int)puVar7 - 0x30U) {
        puVar11 = &UNK_10f568411;
        goto LAB_10988a1c4;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
    puVar7 = puVar5;
    FUN_10988a1e4();
    iVar3 = (int)puVar7;
    while (iVar3 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_10988a1e4();
      iVar3 = (int)puVar7;
    }
  }
  puVar7 = puVar5;
  FUN_10988a28c();
  uStack_98 = 0;
  ___error();
  *puVar7 = 0;
LAB_109889fd0:
  puVar6 = (undefined8 *)(puVar5 + 0x14);
  if (*(char *)((long)puVar5 + 0x67) < '\0') {
    puVar6 = (undefined8 *)*puVar6;
  }
  _strtod(puVar6,&uStack_98);
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  return (undefined4 *)0x7;
}



/* Entry: 109889ee4; end: 10988a1e3;  */

undefined8 FUN_109889ee4(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uStack_38;
  
  FUN_10988a2dc();
  iVar1 = param_2[5];
  if (iVar1 - 0x31U < 9) {
    iVar7 = 5;
LAB_109889f14:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(int)(char)iVar1);
      puVar3 = param_2;
      FUN_10988a1e4();
      iVar1 = (int)puVar3;
      if (9 < iVar1 - 0x30U) break;
      iVar1 = param_2[5];
    }
    if (iVar1 != 0x2e) {
      if ((iVar1 != 0x45) && (iVar1 != 0x65)) {
LAB_10988a0fc:
        puVar3 = param_2;
        FUN_10988a28c();
        uStack_38 = 0;
        ___error();
        *puVar3 = 0;
        piVar4 = param_2 + 0x14;
        if (iVar7 == 5) {
          if (*(char *)((long)param_2 + 0x67) < '\0') {
            piVar4 = *(int **)piVar4;
          }
          _strtoull(piVar4,&uStack_38,10);
          piVar5 = piVar4;
          ___error();
          if (*piVar5 == 0) {
            *(int **)(param_2 + 0x1e) = piVar4;
            return 5;
          }
        }
        else {
          if (*(char *)((long)param_2 + 0x67) < '\0') {
            piVar4 = *(int **)piVar4;
          }
          _strtoll(piVar4,&uStack_38,10);
          piVar5 = piVar4;
          ___error();
          if (*piVar5 == 0) {
            *(int **)(param_2 + 0x1c) = piVar4;
            return 6;
          }
        }
        goto LAB_109889fd0;
      }
      goto LAB_109889f58;
    }
LAB_10988a0a4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 0x22));
    puVar3 = param_2;
    FUN_10988a1e4();
    if (9 < (int)puVar3 - 0x30U) {
      puVar6 = &UNK_10f5683ad;
      goto LAB_10988a1c4;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_10988a1e4();
      iVar1 = (int)puVar3;
    } while (iVar1 - 0x30U < 10);
    if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_109889f58;
  }
  else {
    if (iVar1 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,0x30);
      iVar7 = 5;
    }
    else {
      if (iVar1 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2 + 0x14,0x2d);
      }
      puVar3 = param_2;
      FUN_10988a1e4();
      if ((int)puVar3 - 0x31U < 9) {
        iVar1 = param_2[5];
        iVar7 = 6;
        goto LAB_109889f14;
      }
      if ((int)puVar3 != 0x30) {
        puVar6 = &UNK_10f568384;
        goto LAB_10988a1c4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      iVar7 = 6;
    }
    puVar3 = param_2;
    FUN_10988a1e4();
    iVar1 = (int)puVar3;
    if ((iVar1 != 0x65) && (iVar1 != 0x45)) {
      if (iVar1 != 0x2e) goto LAB_10988a0fc;
      goto LAB_10988a0a4;
    }
LAB_109889f58:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 5));
    puVar3 = param_2;
    FUN_10988a1e4();
    iVar1 = (int)puVar3;
    if (9 < iVar1 - 0x30U) {
      if ((iVar1 != 0x2d) && (iVar1 != 0x2b)) {
        puVar6 = &UNK_10f5683d6;
LAB_10988a1c4:
        *(undefined **)(param_2 + 0x1a) = puVar6;
        return 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_10988a1e4();
      if (9 < (int)puVar3 - 0x30U) {
        puVar6 = &UNK_10f568411;
        goto LAB_10988a1c4;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 5));
    puVar3 = param_2;
    FUN_10988a1e4();
    iVar1 = (int)puVar3;
    while (iVar1 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_10988a1e4();
      iVar1 = (int)puVar3;
    }
  }
  puVar3 = param_2;
  FUN_10988a28c();
  uStack_38 = 0;
  ___error();
  *puVar3 = 0;
LAB_109889fd0:
  puVar2 = (undefined8 *)(param_2 + 0x14);
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  _strtod(puVar2,&uStack_38);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return 7;
}



/* Entry: 10988a1e4; end: 10988a28b;  */

int FUN_10988a1e4(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 uStack_21;
  
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar3 = *(uint *)((long)param_1 + 0x14);
  }
  else {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar3;
  }
  if (uVar3 == 0xffffffff) {
    iVar2 = -1;
  }
  else {
    uStack_21 = (undefined1)uVar3;
    FUN_1092d2eec(param_1 + 7,&uStack_21);
    iVar2 = *(int *)((long)param_1 + 0x14);
    if (iVar2 == 10) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
    }
  }
  return iVar2;
}



/* Entry: 10988a28c; end: 10988a2db;  */

void FUN_10988a28c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  lVar2 = *plVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x30);
    lVar2 = *plVar1;
    if (lVar2 == 0) goto LAB_10988a2c0;
  }
  *plVar1 = lVar2 + -1;
LAB_10988a2c0:
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  return;
}



/* Entry: 10988a2dc; end: 10988a32f;  */

void FUN_10988a2dc(long param_1)

{
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  uStack_11 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  FUN_1092d2eec((undefined8 *)(param_1 + 0x38),&uStack_11);
  return;
}



/* Entry: 10988a330; end: 10988a407;  */

int FUN_10988a330(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint auStack_60 [6];
  long lStack_48;
  
  iVar6 = 0;
  lVar7 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_60[2] = 4;
  auStack_60[3] = 0;
  auStack_60[0] = 0xc;
  auStack_60[1] = 8;
  do {
    uVar3 = *(uint *)((long)auStack_60 + lVar7);
    lVar4 = param_1;
    FUN_10988a1e4();
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = iVar2 - 0x30;
    if (9 < uVar5) {
      if (iVar2 - 0x41U < 6) {
        uVar5 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) {
          iVar6 = -1;
          break;
        }
        uVar5 = iVar2 - 0x57;
      }
    }
    iVar6 = (uVar5 << (ulong)(uVar3 & 0x1f)) + iVar6;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return iVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (lVar4 + 0x50,(long)*(char *)(lVar4 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_10988a1e4(lVar4);
      iVar6 = *(int *)(lVar4 + 0x14);
      if ((iVar6 < *param_2) || (param_2[1] < iVar6)) {
        *(undefined **)(lVar4 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (lVar4 + 0x50,(int)(char)iVar6);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 10988a408; end: 10988a49b;  */

undefined8 FUN_10988a408(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (param_1 + 0x50,(long)*(char *)(param_1 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_10988a1e4(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
      if ((iVar2 < *param_2) || (param_2[1] < iVar2)) {
        *(undefined **)(param_1 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 0x50,(int)(char)iVar2);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 10988a49c; end: 10988a4db;  */

long FUN_10988a49c(long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10988a4dc; end: 10988addb;  */

/* WARNING: Removing unreachable block (ram,0x00010988a8e8) */

ulong FUN_10988a4dc(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined **appuStack_98 [2];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
code_r0x00010988a514:
  iVar2 = (int)param_1;
  uVar4 = param_2;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_98[0] = (undefined **)CONCAT71(appuStack_98[0]._1_7_,1);
    FUN_109386fe4(param_2,appuStack_98,0);
    break;
  case 2:
    appuStack_98[0] = (undefined **)((ulong)appuStack_98[0]._1_7_ << 8);
    FUN_109386fe4(param_2,appuStack_98,0);
    break;
  case 3:
    appuStack_98[0] = (undefined **)0x0;
    FUN_109387184(param_2,appuStack_98,0);
    break;
  case 4:
    FUN_1093874bc(param_2,param_1 + 0x78,0);
    break;
  case 5:
    appuStack_98[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109387664(param_2,appuStack_98,0);
    break;
  case 6:
    appuStack_98[0] = *(undefined ***)(param_1 + 0x98);
    FUN_10938731c(param_2,appuStack_98,0);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_10988addc(auStack_70,param_1 + 0x28);
      FUN_10988addc(auStack_e0,param_1 + 0x28);
      FUN_10928a5e0(auStack_c8,&UNK_10f568460,auStack_e0);
      FUN_109259240(&uStack_b0,auStack_c8,&DAT_10f638984);
      FUN_109386318(appuStack_98,0x196,&uStack_b0);
      func_0x0001093862c8(param_2,uVar5,auStack_70,appuStack_98);
      appuStack_98[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_88);
      __ZNSt9exceptionD2Ev(appuStack_98);
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      goto code_r0x00010988a8c0;
    }
    appuStack_98[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109386e44(param_2,appuStack_98,0);
    break;
  case 8:
    uVar3 = param_2;
    FUN_10938603c(param_2,0xffffffffffffffff);
    if ((int)uVar3 == 0) {
code_r0x00010988a8f4:
      param_2 = 0;
      goto LAB_10988a78c;
    }
    iVar1 = iVar2 + 0x28;
    FUN_10988966c();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 10) {
      FUN_1093861c4();
code_r0x00010988a5f4:
      if ((uVar4 & 1) != 0) break;
      goto code_r0x00010988a8f4;
    }
    appuStack_98[0] = (undefined **)CONCAT71(appuStack_98[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_58,appuStack_98);
    goto code_r0x00010988a514;
  case 9:
    uVar3 = param_2;
    FUN_109385bcc(param_2,0xffffffffffffffff);
    if ((uVar3 & 1) == 0) goto code_r0x00010988a8f4;
    iVar1 = iVar2 + 0x28;
    FUN_10988966c();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0xb) {
      FUN_109385d54();
      goto code_r0x00010988a5f4;
    }
    if (iVar1 == 4) {
      FUN_109385f0c(param_2,param_1 + 0x78);
      if ((int)uVar4 == 0) goto code_r0x00010988a8f4;
      iVar1 = iVar2 + 0x28;
      FUN_10988966c();
      *(int *)(param_1 + 0x20) = iVar1;
      if (iVar1 == 0xc) {
        appuStack_98[0] = (undefined **)((ulong)appuStack_98[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_58,appuStack_98);
        iVar2 = iVar2 + 0x28;
        FUN_10988966c();
        goto code_r0x00010988a724;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_10988addc(auStack_70,param_1 + 0x28);
      uStack_a8 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x48);
      lStack_a0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_e0,&UNK_10f56844f);
      FUN_10988aec8(auStack_c8,param_1,0xc,auStack_e0);
      FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
      FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_10988addc(auStack_70,param_1 + 0x28);
      uStack_a8 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x48);
      lStack_a0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_e0,&UNK_10f568444);
      FUN_10988aec8(auStack_c8,param_1,4,auStack_e0);
      FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
      FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    }
    goto code_r0x00010988a8a0;
  default:
    goto LAB_10988a82c;
  case 0xe:
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    FUN_10988addc(auStack_70,param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x50);
    uStack_b0 = *(undefined8 *)(param_1 + 0x48);
    lStack_a0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_e0,"value");
    FUN_10988aec8(auStack_c8,param_1,0,auStack_e0);
    FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
    FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    goto code_r0x00010988a8a0;
  }
  if (lStack_50 != 0) {
    do {
      uVar4 = param_2;
      if ((*(ulong *)(lStack_58 + (lStack_50 - 1U >> 6) * 8) >> (lStack_50 - 1U & 0x3f) & 1) == 0) {
        iVar1 = iVar2 + 0x28;
        FUN_10988966c();
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 == 0xd) {
          iVar1 = iVar2 + 0x28;
          FUN_10988966c();
          *(int *)(param_1 + 0x20) = iVar1;
          if (iVar1 != 4) {
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            FUN_10988addc(auStack_70,param_1 + 0x28);
            uStack_a8 = *(undefined8 *)(param_1 + 0x50);
            uStack_b0 = *(undefined8 *)(param_1 + 0x48);
            lStack_a0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_e0,&UNK_10f568444);
            FUN_10988aec8(auStack_c8,param_1,4,auStack_e0);
            FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
            FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
            goto code_r0x00010988a8a0;
          }
          FUN_109385f0c(param_2,param_1 + 0x78);
          if ((int)uVar4 == 0) goto code_r0x00010988a8f4;
          iVar1 = iVar2 + 0x28;
          FUN_10988966c();
          *(int *)(param_1 + 0x20) = iVar1;
          if (iVar1 != 0xc) {
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            FUN_10988addc(auStack_70,param_1 + 0x28);
            uStack_a8 = *(undefined8 *)(param_1 + 0x50);
            uStack_b0 = *(undefined8 *)(param_1 + 0x48);
            lStack_a0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_e0,&UNK_10f56844f);
            FUN_10988aec8(auStack_c8,param_1,0xc,auStack_e0);
            FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
            FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
            goto code_r0x00010988a8a0;
          }
          iVar2 = iVar2 + 0x28;
          FUN_10988966c();
          goto code_r0x00010988a724;
        }
        if (iVar1 != 0xb) {
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_10988addc(auStack_70,param_1 + 0x28);
          uStack_a8 = *(undefined8 *)(param_1 + 0x50);
          uStack_b0 = *(undefined8 *)(param_1 + 0x48);
          lStack_a0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_e0,&DAT_10f365d6f);
          FUN_10988aec8(auStack_c8,param_1,0xb,auStack_e0);
          FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
          FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
          goto code_r0x00010988a8a0;
        }
        FUN_109385d54();
      }
      else {
        iVar1 = iVar2 + 0x28;
        FUN_10988966c();
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 == 0xd) goto code_r0x00010988a6d8;
        if (iVar1 != 10) {
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_10988addc(auStack_70,param_1 + 0x28);
          uStack_a8 = *(undefined8 *)(param_1 + 0x50);
          uStack_b0 = *(undefined8 *)(param_1 + 0x48);
          lStack_a0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_e0,"array");
          FUN_10988aec8(auStack_c8,param_1,10,auStack_e0);
          FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
          FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
          goto code_r0x00010988a8a0;
        }
        FUN_1093861c4();
      }
      if ((uVar4 & 1) == 0) goto code_r0x00010988a8f4;
      lStack_50 = lStack_50 + -1;
      if (lStack_50 == 0) break;
    } while( true );
  }
  param_2 = 1;
  goto LAB_10988a78c;
code_r0x00010988a6d8:
  iVar2 = iVar2 + 0x28;
  FUN_10988966c();
code_r0x00010988a724:
  *(int *)(param_1 + 0x20) = iVar2;
  goto code_r0x00010988a514;
LAB_10988a82c:
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  FUN_10988addc(auStack_70,param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x50);
  uStack_b0 = *(undefined8 *)(param_1 + 0x48);
  lStack_a0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_e0,"value");
  FUN_10988aec8(auStack_c8,param_1,0x10,auStack_e0);
  FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
  FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
code_r0x00010988a8a0:
  appuStack_98[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_88);
  __ZNSt9exceptionD2Ev(appuStack_98);
code_r0x00010988a8c0:
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
LAB_10988a78c:
  if (lStack_58 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10988addc; end: 10988aec7;  */

/* WARNING: Removing unreachable block (ram,0x00010988b144) */
/* WARNING: Removing unreachable block (ram,0x00010988af80) */
/* WARNING: Removing unreachable block (ram,0x00010988b090) */
/* WARNING: Removing unreachable block (ram,0x00010988b1d8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10988addc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *******pppppppuVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined1 *puStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar2 = (byte *)param_2[8];
  for (pbVar1 = (byte *)param_2[7]; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    param_2 = param_1;
    if (bVar3 < 0x20) {
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = (ulong)bVar3;
      _snprintf(&uStack_48,9,&UNK_10f568509);
      param_4 = &uStack_48;
      _strlen();
      param_3 = &uStack_48;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    }
    else {
      param_3 = (undefined8 *)(ulong)(uint)(int)(char)bVar3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  puVar6 = param_2;
  __Unwind_Resume();
  pcStack_58 = FUN_10988aec8;
  pbStack_80 = pbVar2;
  pbStack_78 = pbVar1;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c31940(extraout_x8,&UNK_10f568528);
  uVar8 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  if (uVar8 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_c0,&UNK_10f568536,param_4);
    puVar7 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7," ",1);
    uStack_98 = puVar7[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar7;
    uStack_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (extraout_x8,&DAT_10f568545,2);
  uVar8 = (ulong)*(uint *)(puVar6 + 4);
  if (*(uint *)(puVar6 + 4) == 0xe) {
    func_0x000107c31940(auStack_f8,puVar6[0x12]);
    puVar7 = auStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f568548,0xe);
    uStack_d8 = puVar7[1];
    uStack_e0 = *puVar7;
    lStack_d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_10988addc(&puStack_110,puVar6 + 5);
    ppuVar5 = (undefined1 **)puStack_110;
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
      ppuVar5 = &puStack_110;
    }
    puVar6 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,ppuVar5,uStack_108);
    uStack_b8 = puVar6[1];
    uStack_c0 = *puVar6;
    lStack_b0 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,&DAT_10f638984,1);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if ((char)bStack_f9 < '\0') {
      __ZdlPv(puStack_110);
    }
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (-1 < cStack_e1) goto joined_r0x00010988b164;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_c0,uVar8);
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f568557,0xb);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    auStack_f8[0] = uStack_c0;
    if (-1 < lStack_b0) goto joined_r0x00010988b164;
  }
  __ZdlPv(auStack_f8[0]);
joined_r0x00010988b164:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_c0,param_3);
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f568563,0xb);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  return;
}



/* Entry: 10988aec8; end: 10988b2e3;  */

/* WARNING: Removing unreachable block (ram,0x00010988b144) */
/* WARNING: Removing unreachable block (ram,0x00010988af80) */
/* WARNING: Removing unreachable block (ram,0x00010988b090) */
/* WARNING: Removing unreachable block (ram,0x00010988b1d8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10988aec8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *******pppppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c31940(param_1,&UNK_10f568528);
  uVar4 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar4 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_70,&UNK_10f568536,param_4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3," ",1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f568545,2);
  uVar4 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    func_0x000107c31940(auStack_a8,*(undefined8 *)(param_2 + 0x90));
    puVar3 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f568548,0xe);
    uStack_88 = puVar3[1];
    uStack_90 = *puVar3;
    lStack_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10988addc(&puStack_c0,param_2 + 0x28);
    ppuVar2 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar2 = &puStack_c0;
    }
    puVar3 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar2,uStack_b8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    lStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&DAT_10f638984,1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (-1 < cStack_91) goto joined_r0x00010988b154;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_70,uVar4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568557,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    auStack_a8[0] = uStack_70;
    if (-1 < lStack_60) goto joined_r0x00010988b154;
  }
  __ZdlPv(auStack_a8[0]);
joined_r0x00010988b154:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_70,param_3);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568563,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  return;
}



/* Entry: 10988b2e4; end: 10988bc1b;  */

undefined ** FUN_10988b2e4(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **appuStack_a8 [2];
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_69;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  ppuVar1 = (undefined **)(param_1 + 0x78);
code_r0x00010988b330:
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 2:
    appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0]._1_7_ << 8);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 3:
    appuStack_a8[0] = (undefined **)0x0;
    FUN_109388200(param_2,appuStack_a8);
    break;
  case 4:
    FUN_1093885d4(param_2,ppuVar1);
    break;
  case 5:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109388804(param_2,appuStack_a8);
    break;
  case 6:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0x98);
    FUN_1093883d4(param_2,appuStack_a8);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_10988addc(&uStack_80,param_1 + 0x28);
      FUN_10988addc(auStack_f0,param_1 + 0x28);
      FUN_10928a5e0(auStack_d8,&UNK_10f568460,auStack_f0);
      FUN_109259240(&uStack_c0,auStack_d8,&DAT_10f638984);
      FUN_109386318(appuStack_a8,0x196,&uStack_c0);
      func_0x000109387ab4(param_2,uVar6,&uStack_80,appuStack_a8);
      appuStack_a8[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(appuStack_a8);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      goto code_r0x00010988b708;
    }
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109387e00(param_2,appuStack_a8);
    break;
  case 8:
    uStack_80 = 2;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_10988966c();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 10) {
code_r0x00010988b420:
      param_2[2] = param_2[2] + -8;
      break;
    }
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_68,appuStack_a8);
    goto code_r0x00010988b330;
  case 9:
    uStack_80 = 1;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_10988966c();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) goto code_r0x00010988b420;
    if (iVar2 == 4) {
      lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
      appuStack_a8[0] = ppuVar1;
      FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
      param_2[4] = (undefined *)(lVar5 + 0x38);
      iVar2 = iVar3 + 0x28;
      FUN_10988966c();
      *(int *)(param_1 + 0x20) = iVar2;
      if (iVar2 == 0xc) {
        appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_68,appuStack_a8);
        iVar3 = iVar3 + 0x28;
        FUN_10988966c();
        goto code_r0x00010988b560;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_10988addc(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f56844f);
      FUN_10988aec8(auStack_d8,param_1,0xc,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_10988addc(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f568444);
      FUN_10988aec8(auStack_d8,param_1,4,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    goto code_r0x00010988b6e8;
  default:
    goto LAB_10988b674;
  case 0xe:
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    FUN_10988addc(&uStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_c0 = *(undefined8 *)(param_1 + 0x48);
    lStack_b0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_f0,"value");
    FUN_10988aec8(auStack_d8,param_1,0,auStack_f0);
    FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
    FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    goto code_r0x00010988b6e8;
  }
  if (lStack_60 != 0) {
    do {
      if ((*(ulong *)(lStack_68 + (lStack_60 - 1U >> 6) * 8) >> (lStack_60 - 1U & 0x3f) & 1) == 0) {
        iVar2 = iVar3 + 0x28;
        FUN_10988966c();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          iVar2 = iVar3 + 0x28;
          FUN_10988966c();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 4) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            FUN_10988addc(&uStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            uStack_c0 = *(undefined8 *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_f0,&UNK_10f568444);
            FUN_10988aec8(auStack_d8,param_1,4,auStack_f0);
            FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
            FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
            goto code_r0x00010988b6e8;
          }
          lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
          appuStack_a8[0] = ppuVar1;
          FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
          param_2[4] = (undefined *)(lVar5 + 0x38);
          iVar2 = iVar3 + 0x28;
          FUN_10988966c();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 == 0xc) {
            iVar3 = iVar3 + 0x28;
            FUN_10988966c();
            goto code_r0x00010988b560;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_10988addc(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&UNK_10f56844f);
          FUN_10988aec8(auStack_d8,param_1,0xc,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010988b6e8;
        }
        if (iVar2 != 0xb) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_10988addc(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&DAT_10f365d6f);
          FUN_10988aec8(auStack_d8,param_1,0xb,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010988b6e8;
        }
      }
      else {
        iVar2 = iVar3 + 0x28;
        FUN_10988966c();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto code_r0x00010988b4f8;
        if (iVar2 != 10) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_10988addc(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,"array");
          FUN_10988aec8(auStack_d8,param_1,10,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010988b6e8;
        }
      }
      param_2[2] = param_2[2] + -8;
      lStack_60 = lStack_60 + -1;
      if (lStack_60 == 0) break;
    } while( true );
  }
  param_2 = (undefined **)0x1;
  goto LAB_10988b5d0;
code_r0x00010988b4f8:
  iVar3 = iVar3 + 0x28;
  FUN_10988966c();
code_r0x00010988b560:
  *(int *)(param_1 + 0x20) = iVar3;
  goto code_r0x00010988b330;
LAB_10988b674:
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  FUN_10988addc(&uStack_80,param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  lStack_b0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_f0,"value");
  FUN_10988aec8(auStack_d8,param_1,0x10,auStack_f0);
  FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
  FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
code_r0x00010988b6e8:
  appuStack_a8[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_98);
  __ZNSt9exceptionD2Ev(appuStack_a8);
code_r0x00010988b708:
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT71(uStack_7f,uStack_80));
  }
LAB_10988b5d0:
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10988bc1c; end: 10988bd27;  */

void FUN_10988bc1c(char *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x03') {
    puVar3 = *(undefined8 **)(param_1 + 8);
    lVar5 = (long)*(char *)((long)puVar3 + 0x17);
    puVar4 = puVar3;
    if (lVar5 < 0) {
      puVar4 = (undefined8 *)*puVar3;
      lVar5 = puVar3[1];
    }
    *param_2 = puVar4;
    param_2[1] = lVar5;
    return;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(auStack_60,param_1);
  FUN_10928a5e0(auStack_48,&UNK_10f5674a8,auStack_60);
  FUN_10937bbbc(uVar2,0x12e,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10988bcd0);
  (*pcVar1)();
}



/* Entry: 10988bd28; end: 10988bdbf;  */

void FUN_10988bd28(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,param_1);
  FUN_10988bdc0(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110b168f0,FUN_10988be28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10988bd88);
  (*pcVar1)();
}



/* Entry: 10988bdc0; end: 10988be27;  */

undefined8 * FUN_10988bdc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110b16940;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  return param_1;
}



/* Entry: 10988be28; end: 10988be63;  */

void FUN_10988be28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16940;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10988be64; end: 10988be77;  */

void FUN_10988be64(void)

{
  FUN_10988be28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10988be78; end: 10988be93;  */

undefined8 * FUN_10988be78(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}



/* Entry: 10988be94; end: 10988bedf;  */

void FUN_10988be94(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_24 [4];
  
  ___cxa_demangle(param_2,0,0,auStack_24);
  func_0x000107c31940(param_1,param_2);
  _free(param_2);
  return;
}



/* Entry: 10988bee0; end: 10988bfcb;  */

void FUN_10988bee0(undefined8 *param_1,char *param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iStack_44;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar1 = (&UNK_10e00554a)[*param_2];
      if (bVar1 == 0xff) {
        FUN_10988bd28(&UNK_10f582278);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10988bfac);
        (*pcVar2)();
      }
      uVar3 = ((bVar1 & 0x1f) << (ulong)(uVar4 & 0x1f)) + uVar3;
      if ((bVar1 >> 5 & 1) == 0) {
        iVar5 = -0x80000000;
        if (1 < uVar3) {
          iVar5 = -((int)uVar3 >> 1);
        }
        iStack_44 = (int)uVar3 >> 1;
        if ((uVar3 & 1) != 0) {
          iStack_44 = iVar5;
        }
        FUN_1092d7128(param_1,&iStack_44);
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + 5;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10988bfcc; end: 10988c003;  */

void FUN_10988bfcc(long param_1)

{
  FUN_1093fd894(param_1 + 0x58,param_1 + 0x78);
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
  return;
}



/* Entry: 10988c004; end: 10988c023;  */

void FUN_10988c004(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  uVar4 = *(ulong *)(param_1[0xc] + -8);
  param_1[0xc] = param_1[0xc] + -8;
  if (param_1[0xf] == uVar4) {
    return;
  }
  lVar1 = *param_1;
  lVar8 = param_1[1];
  lVar6 = lVar8 - lVar1;
  uVar10 = lVar6 >> 4;
  if (uVar10 < uVar4) {
    uVar11 = uVar4 - uVar10;
    lVar9 = param_1[2];
    if ((ulong)(lVar9 - lVar8 >> 4) < uVar11) {
      if (uVar4 >> 0x3c == 0) {
        uVar5 = lVar9 - lVar1 >> 3;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        if (0x7fffffffffffffef < (ulong)(lVar9 - lVar1)) {
          uVar5 = 0xfffffffffffffff;
        }
        plStack_68 = param_1;
        if (uVar5 >> 0x3c == 0) {
          lVar3 = uVar5 << 4;
          __Znwm();
          lVar8 = lVar3 + lVar6;
          _bzero(lVar8,uVar11 * 0x10);
          lVar7 = lVar8 + uVar10 * -0x10;
          _memcpy(lVar7,lVar1,lVar6);
          *param_1 = lVar7;
          param_1[1] = lVar8 + uVar11 * 0x10;
          param_1[2] = lVar3 + uVar5 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar9;
          FUN_10988c1b8(&lStack_88);
          goto LAB_10988c138;
        }
        func_0x000104c4f740();
      }
      else {
        FUN_10988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar8,uVar11 * 0x10);
    param_1[1] = lVar8 + uVar11 * 0x10;
  }
  else if (uVar4 < uVar10) {
    lVar1 = lVar1 + uVar4 * 0x10;
    while (lVar8 != lVar1) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    param_1[1] = lVar1;
  }
LAB_10988c138:
  param_1[0xf] = uVar4;
  return;
}



/* Entry: 10988c024; end: 10988c16f;  */

void FUN_10988c024(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar5 = lVar7 - lVar1;
  uVar9 = lVar5 >> 4;
  if (uVar9 < param_2) {
    uVar10 = param_2 - uVar9;
    lVar8 = param_1[2];
    if ((ulong)(lVar8 - lVar7 >> 4) < uVar10) {
      if (param_2 >> 0x3c == 0) {
        uVar4 = lVar8 - lVar1 >> 3;
        if (uVar4 <= param_2) {
          uVar4 = param_2;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar1)) {
          uVar4 = 0xfffffffffffffff;
        }
        plStack_68 = param_1;
        if (uVar4 >> 0x3c == 0) {
          lVar3 = uVar4 << 4;
          __Znwm();
          lVar7 = lVar3 + lVar5;
          _bzero(lVar7,uVar10 * 0x10);
          lVar6 = lVar7 + uVar9 * -0x10;
          _memcpy(lVar6,lVar1,lVar5);
          *param_1 = lVar6;
          param_1[1] = lVar7 + uVar10 * 0x10;
          param_1[2] = lVar3 + uVar4 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar8;
          FUN_10988c1b8(&lStack_88);
          goto LAB_10988c138;
        }
        func_0x000104c4f740();
      }
      else {
        FUN_10988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar7,uVar10 * 0x10);
    param_1[1] = lVar7 + uVar10 * 0x10;
  }
  else if (param_2 < uVar9) {
    lVar1 = lVar1 + param_2 * 0x10;
    while (lVar7 != lVar1) {
      lVar7 = lVar7 + -0x10;
      func_0x00010988c204(lVar7);
    }
    param_1[1] = lVar1;
  }
LAB_10988c138:
  param_1[0xf] = param_2;
  return;
}



/* Entry: 10988c170; end: 10988c1a3;  */

void FUN_10988c170(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar3 = param_1[0xe];
  uVar4 = lVar3 - 1;
  param_1[0xe] = uVar4;
  if (uVar4 < 8) {
    uVar4 = param_1[lVar3 + 2];
    if (param_1[0xf] == uVar4) {
      return;
    }
  }
  else {
    uVar4 = *(ulong *)(param_1[0xc] + -8);
    param_1[0xc] = param_1[0xc] + -8;
    if (param_1[0xf] == uVar4) {
      return;
    }
  }
  lVar3 = *param_1;
  lVar8 = param_1[1];
  lVar6 = lVar8 - lVar3;
  uVar10 = lVar6 >> 4;
  if (uVar10 < uVar4) {
    uVar11 = uVar4 - uVar10;
    lVar9 = param_1[2];
    if ((ulong)(lVar9 - lVar8 >> 4) < uVar11) {
      if (uVar4 >> 0x3c == 0) {
        uVar5 = lVar9 - lVar3 >> 3;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        if (0x7fffffffffffffef < (ulong)(lVar9 - lVar3)) {
          uVar5 = 0xfffffffffffffff;
        }
        plStack_68 = param_1;
        if (uVar5 >> 0x3c == 0) {
          lVar2 = uVar5 << 4;
          __Znwm();
          lVar8 = lVar2 + lVar6;
          _bzero(lVar8,uVar11 * 0x10);
          lVar7 = lVar8 + uVar10 * -0x10;
          _memcpy(lVar7,lVar3,lVar6);
          *param_1 = lVar7;
          param_1[1] = lVar8 + uVar11 * 0x10;
          param_1[2] = lVar2 + uVar5 * 0x10;
          lStack_88 = lVar3;
          lStack_80 = lVar3;
          lStack_78 = lVar3;
          lStack_70 = lVar9;
          FUN_10988c1b8(&lStack_88);
          goto LAB_10988c138;
        }
        func_0x000104c4f740();
      }
      else {
        FUN_10988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar8,uVar11 * 0x10);
    param_1[1] = lVar8 + uVar11 * 0x10;
  }
  else if (uVar4 < uVar10) {
    lVar3 = lVar3 + uVar4 * 0x10;
    while (lVar8 != lVar3) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    param_1[1] = lVar3;
  }
LAB_10988c138:
  param_1[0xf] = uVar4;
  return;
}



/* Entry: 10988c1a4; end: 10988c1b7;  */

long * FUN_10988c1a4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    func_0x00010988c204();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10988c1b8; end: 10988c25b;  */

long * FUN_10988c1b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010988c204();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10988c25c; end: 10988c41b;  */

long * FUN_10988c25c(long *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uStack_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar5 = *param_2;
  iVar7 = ((int)(lVar5 / 86400000) + (int)(lVar5 >> 0x3f)) -
          (SUB164(SEXT816(lVar5) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar8 = (long)iVar7 * 86400000;
  uVar6 = lVar5 + (long)(int)(iVar7 - (uint)(lVar8 - lVar5 != 0 && lVar5 <= lVar8)) * -86400000;
  uVar1 = -uVar6;
  if (-1 < (long)uVar6) {
    uVar1 = uVar6;
  }
  iStack_90 = (int)(uVar1 / 3600000);
  uVar2 = (int)uVar1 + iStack_90 * -3600000;
  uStack_94 = uVar2 / 60000;
  uStack_98 = (uVar2 % 60000) / 1000;
  plVar3 = param_2;
  FUN_10988c41c();
  uStack_8c = SUB84(plVar3,0);
  plVar3 = param_2;
  func_0x00010988c578();
  iStack_88 = (int)plVar3 + -1;
  plVar3 = param_2;
  func_0x00010988c6c4();
  iStack_84 = (int)plVar3 + -0x76c;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puVar4 = &uStack_98;
  _mktime();
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  *param_1 = (long)puVar4 / 1000;
  lVar5 = *param_2;
  iVar7 = ((int)(lVar5 / 86400000) + (int)(lVar5 >> 0x3f)) -
          (SUB164(SEXT816(lVar5) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar8 = (long)iVar7 * 86400000;
  uVar6 = lVar5 + (long)(int)(iVar7 - (uint)(lVar8 - lVar5 != 0 && lVar5 <= lVar8)) * -86400000;
  uVar1 = -uVar6;
  if (-1 < (long)uVar6) {
    uVar1 = uVar6;
  }
  uVar2 = (int)(uVar1 % 3600000) + (int)((uVar1 % 3600000) / 60000) * -60000;
  *param_1 = (long)puVar4 / 1000 +
             (ulong)(ushort)((short)uVar2 + (short)((uVar2 >> 3 & 0x1fff) / 0x7d) * -1000);
  return param_1;
}



/* Entry: 10988c41c; end: 10988cc0b;  */

uint FUN_10988c41c(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *param_1;
  iVar5 = ((int)(lVar4 / 86400000) + (int)(lVar4 >> 0x3f)) -
          (SUB164(SEXT816(lVar4) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  lVar6 = (long)iVar5 * 86400000;
  iVar5 = iVar5 - (uint)(lVar6 - lVar4 != 0 && lVar4 <= lVar6);
  iVar2 = iVar5 + 0xafa6c;
  if (iVar5 < -0xafa6c) {
    iVar2 = iVar5 + 0x8bfbc;
  }
  uVar1 = (iVar2 / 0x23ab1) * -0x23ab1 + iVar5 + 0xafa6c;
  uVar3 = ((uVar1 >> 2) / 0x23ab + uVar1) - ((uVar1 >> 2) / 0x16d + uVar1 / 0x23ab0);
  iVar2 = (uVar1 - uVar3 / 0x5b4) + uVar3 / 0x8e94 + (uVar3 / 0x16d) * -0x16d;
  return (iVar2 - (((iVar2 * 5 + 2U) / 0x99) * 0x99 + 2) / 5) + 1 & 0xff;
}



/* Entry: 10988cc0c; end: 10988cd63;  */

long * FUN_10988cc0c(long *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 ***pppuStack_28;
  
  *param_1 = 0;
  pppuStack_28 = (undefined8 ***)(param_2 * 1000);
  ppppuVar4 = &pppuStack_28;
  __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
            ();
  ppppuVar5 = &pppuStack_28;
  pppuStack_28 = ppppuVar4;
  _localtime();
  if (ppppuVar5 != (undefined8 ****)0x0) {
    bVar1 = *(char *)(ppppuVar5 + 2) + 1;
    iVar15 = (int)(short)(*(short *)((long)ppppuVar5 + 0x14) + 0x76c) - (uint)(bVar1 < 3);
    iVar2 = iVar15 + -399;
    if (-1 < iVar15) {
      iVar2 = iVar15;
    }
    uVar3 = iVar15 + (iVar2 / 400) * -400;
    iVar15 = -3;
    if (bVar1 < 3) {
      iVar15 = 9;
    }
    *param_1 = param_2 % 1000 +
               ((long)*(int *)ppppuVar5 +
               ((long)*(int *)((long)ppppuVar5 + 4) +
               ((long)*(int *)(ppppuVar5 + 1) +
               (long)(int)((((uint)*(byte *)((long)ppppuVar5 + 0xc) +
                             ((iVar15 + (uint)bVar1) * 0x99 + 2) / 5 + (iVar2 / 400) * 0x23ab1 +
                             (uVar3 >> 2) + uVar3 * 0x16d) - uVar3 / 100) + -0xafa6d) * 0x18) * 0x3c
               ) * 0x3c) * 1000;
    return param_1;
  }
  plVar6 = (long *)&UNK_10f58229a;
  FUN_10988bd28();
  plVar11 = &lStack_110;
  plVar12 = &lStack_110;
  plVar13 = &lStack_110;
  plVar8 = plVar6 + 2;
  *plVar8 = 0;
  *plVar6 = (long)&PTR_FUN_110b16968;
  plVar6[1] = (long)&PTR_DAT_110b16d28;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0x100;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[10] = 0x20;
  plVar6[0xc] = 0;
  plVar6[0xb] = 0;
  plVar6[0xe] = 0;
  plVar6[0xd] = 0;
  lVar7 = 0xaf0;
  __Znwm();
  plVar6[0xc] = lVar7;
  plVar6[0xd] = lVar7;
  plVar6[0xe] = lVar7 + 0xaf0;
  *(undefined4 *)(plVar6 + 0xf) = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0x80;
  plVar6[0x17] = 0;
  plVar6[0x16] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0x100;
  plVar17 = plVar6 + 0x1d;
  *(undefined1 *)plVar17 = 0;
  *(undefined1 *)(plVar6 + 0x1e) = 0;
  *(undefined1 *)(plVar6 + 0x1f) = 0;
  *(undefined1 *)(plVar6 + 0x20) = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1a] = 0;
  lVar7 = 0;
  _JSGlobalContextCreateInGroup(0,0);
  plVar6[0x21] = lVar7;
  *(undefined1 *)(plVar6 + 0x22) = 0;
  plVar6[0x24] = 0;
  plVar6[0x23] = 0;
  plVar6[0x26] = 0;
  plVar6[0x25] = 0;
  plVar6[0x28] = 0;
  plVar6[0x27] = 0;
  plVar6[0x29] = 0;
  _JSContextGetGlobalObject();
  FUN_10988e404(plVar8,plVar6,lVar7,0);
  plVar6[0x2a] = (long)plVar8;
  *(undefined1 *)(plVar6 + 0x2b) = 1;
  plVar6[0x2f] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x31] = 0;
  plVar6[0x30] = 0;
  plVar6[0x33] = 0;
  plVar6[0x32] = 0;
  puVar9 = &DAT_10f355a53;
  _JSStringCreateWithUTF8CString();
  plVar6[0x2e] = (long)puVar9;
  plVar6[0x2f] = 0;
  pcVar10 = "sourceURL";
  _JSStringCreateWithUTF8CString();
  plVar6[0x2f] = (long)pcVar10;
  plVar6[0x30] = 0;
  puVar9 = &DAT_10f3efbca;
  _JSStringCreateWithUTF8CString();
  plVar6[0x30] = (long)puVar9;
  plVar6[0x31] = 0;
  pcVar10 = "line";
  _JSStringCreateWithUTF8CString();
  plVar6[0x31] = (long)pcVar10;
  plVar6[0x32] = 0;
  puVar9 = &DAT_10f3b067d;
  _JSStringCreateWithUTF8CString();
  plVar6[0x32] = (long)puVar9;
  plVar6[0x33] = 0;
  puVar9 = &UNK_10f58231a;
  _JSStringCreateWithUTF8CString();
  plVar6[0x33] = (long)puVar9;
  *(undefined1 *)(plVar6 + 0x34) = 1;
  puVar9 = PTR__kJSClassDefinitionEmpty_110346ff0;
  uStack_c0 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x50);
  uStack_a8 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x68);
  pcStack_b0 = *(code **)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x60);
  uStack_98 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x78);
  uStack_a0 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x70);
  puStack_108 = *(undefined8 **)(PTR__kJSClassDefinitionEmpty_110346ff0 + 8);
  uStack_f8 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x18);
  uStack_100 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x10);
  uStack_e8 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x28);
  uStack_f0 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x20);
  pcStack_d0 = FUN_10988d660;
  pcStack_c8 = FUN_10988d844;
  lStack_110 = 0x200000000;
  pcStack_e0 = FUN_10988d5dc;
  pcStack_d8 = FUN_10988db04;
  pcStack_b8 = FUN_10988dba8;
  _JSClassCreate();
  plVar6[0x15] = (long)plVar11;
  pcStack_c8 = *(code **)(puVar9 + 0x48);
  pcStack_d0 = *(code **)(puVar9 + 0x40);
  pcStack_b8 = *(code **)(puVar9 + 0x58);
  uStack_c0 = *(undefined8 *)(puVar9 + 0x50);
  uStack_a8 = *(undefined8 *)(puVar9 + 0x68);
  pcStack_b0 = *(code **)(puVar9 + 0x60);
  uStack_98 = *(undefined8 *)(puVar9 + 0x78);
  uStack_a0 = *(undefined8 *)(puVar9 + 0x70);
  puStack_108 = *(undefined8 **)(puVar9 + 8);
  uStack_f8 = *(undefined8 *)(puVar9 + 0x18);
  uStack_100 = *(undefined8 *)(puVar9 + 0x10);
  uStack_e8 = *(undefined8 *)(puVar9 + 0x28);
  uStack_f0 = *(undefined8 *)(puVar9 + 0x20);
  pcStack_d8 = *(code **)(puVar9 + 0x38);
  lStack_110 = 0x200000000;
  pcStack_e0 = FUN_10988dc64;
  _JSClassCreate();
  plVar6[0x1b] = (long)plVar12;
  pcStack_c8 = *(code **)(puVar9 + 0x48);
  pcStack_d0 = *(code **)(puVar9 + 0x40);
  pcStack_b8 = *(code **)(puVar9 + 0x58);
  uStack_c0 = *(undefined8 *)(puVar9 + 0x50);
  uStack_a8 = *(undefined8 *)(puVar9 + 0x68);
  uStack_98 = *(undefined8 *)(puVar9 + 0x78);
  uStack_a0 = *(undefined8 *)(puVar9 + 0x70);
  puStack_108 = *(undefined8 **)(puVar9 + 8);
  uStack_f8 = *(undefined8 *)(puVar9 + 0x18);
  uStack_100 = *(undefined8 *)(puVar9 + 0x10);
  uStack_e8 = *(undefined8 *)(puVar9 + 0x28);
  uStack_f0 = *(undefined8 *)(puVar9 + 0x20);
  pcStack_d8 = *(code **)(puVar9 + 0x38);
  lStack_110 = 0x200000000;
  pcStack_e0 = (code *)0x10988dcbc;
  pcStack_b0 = FUN_10988dd10;
  _JSClassCreate();
  plVar6[0x1c] = (long)plVar13;
  plVar11 = plVar6;
  (**(code **)(*plVar6 + 0x98))(plVar6,plVar6[0x2a]);
  plStack_88 = plVar11;
  FUN_1098811a4(&lStack_110,&plStack_88,plVar6,&UNK_10f47a60d);
  if (((char)plVar6[0x1e] == '\x01') && ((undefined8 *)*plVar17 != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)*plVar17)();
  }
  plVar6[0x1d] = lStack_110;
  lStack_110 = 0;
  *(undefined1 *)(plVar6 + 0x1e) = 1;
  if (plStack_88 != (long *)0x0) {
    (**(code **)*plStack_88)();
  }
  (**(code **)(*plVar6 + 0x120))(&plStack_88,plVar6,&UNK_10f47a5ee,9);
  (**(code **)(*plVar6 + 0x1a8))(&lStack_110,plVar6,plVar17,&plStack_88);
  if (plStack_88 != (long *)0x0) {
    (**(code **)*plStack_88)();
  }
  FUN_109884c0c(&puStack_90,&lStack_110,plVar6);
  FUN_1098811a4(&plStack_88,&puStack_90,plVar6,&UNK_10f47a615);
  if (((char)plVar6[0x20] == '\x01') && ((undefined8 *)plVar6[0x1f] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)plVar6[0x1f])();
  }
  plVar6[0x1f] = (long)plStack_88;
  plStack_88 = (long *)0x0;
  *(undefined1 *)(plVar6 + 0x20) = 1;
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if ((3 < (int)lStack_110) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  lVar7 = plVar6[0x21];
  uVar16 = *(undefined8 *)(plVar6[0x2a] + 0x10);
  puVar9 = &UNK_10f581e9b;
  _JSStringCreateWithUTF8CString();
  _JSObjectGetProperty(lVar7,uVar16,puVar9,0);
  if (puVar9 != (undefined *)0x0) {
    _JSStringRelease(puVar9);
  }
  lVar14 = plVar6[0x21];
  _JSObjectGetPrototype(lVar14,lVar7);
  plVar6[0x2c] = lVar14;
  lVar7 = plVar6[0x21];
  uVar16 = *(undefined8 *)(plVar6[0x2a] + 0x10);
  puVar9 = &DAT_10f47a5f8;
  _JSStringCreateWithUTF8CString();
  _JSObjectGetProperty(lVar7,uVar16,puVar9,0);
  if (puVar9 != (undefined *)0x0) {
    _JSStringRelease(puVar9);
  }
  lVar14 = plVar6[0x21];
  _JSObjectGetPrototype(lVar14,lVar7);
  plVar6[0x2d] = lVar14;
  return plVar6;
}



/* Entry: 10988cd64; end: 10988d2f3;  */

long * FUN_10988cd64(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  plVar5 = &lStack_e0;
  plVar6 = &lStack_e0;
  plVar7 = &lStack_e0;
  plVar2 = param_1 + 2;
  *plVar2 = 0;
  *param_1 = (long)&PTR_FUN_110b16968;
  param_1[1] = (long)&PTR_DAT_110b16d28;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x100;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0x20;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  lVar1 = 0xaf0;
  __Znwm();
  param_1[0xc] = lVar1;
  param_1[0xd] = lVar1;
  param_1[0xe] = lVar1 + 0xaf0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x80;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x100;
  plVar10 = param_1 + 0x1d;
  *(undefined1 *)plVar10 = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  lVar1 = 0;
  _JSGlobalContextCreateInGroup(0,0);
  param_1[0x21] = lVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  _JSContextGetGlobalObject();
  FUN_10988e404(plVar2,param_1,lVar1,0);
  param_1[0x2a] = (long)plVar2;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  puVar3 = &DAT_10f355a53;
  _JSStringCreateWithUTF8CString();
  param_1[0x2e] = (long)puVar3;
  param_1[0x2f] = 0;
  pcVar4 = "sourceURL";
  _JSStringCreateWithUTF8CString();
  param_1[0x2f] = (long)pcVar4;
  param_1[0x30] = 0;
  puVar3 = &DAT_10f3efbca;
  _JSStringCreateWithUTF8CString();
  param_1[0x30] = (long)puVar3;
  param_1[0x31] = 0;
  pcVar4 = "line";
  _JSStringCreateWithUTF8CString();
  param_1[0x31] = (long)pcVar4;
  param_1[0x32] = 0;
  puVar3 = &DAT_10f3b067d;
  _JSStringCreateWithUTF8CString();
  param_1[0x32] = (long)puVar3;
  param_1[0x33] = 0;
  puVar3 = &UNK_10f58231a;
  _JSStringCreateWithUTF8CString();
  param_1[0x33] = (long)puVar3;
  *(undefined1 *)(param_1 + 0x34) = 1;
  puVar3 = PTR__kJSClassDefinitionEmpty_110346ff0;
  uStack_90 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x50);
  uStack_78 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x68);
  pcStack_80 = *(code **)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x60);
  uStack_68 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x78);
  uStack_70 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x70);
  puStack_d8 = *(undefined8 **)(PTR__kJSClassDefinitionEmpty_110346ff0 + 8);
  uStack_c8 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x18);
  uStack_d0 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x10);
  uStack_b8 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x28);
  uStack_c0 = *(undefined8 *)(PTR__kJSClassDefinitionEmpty_110346ff0 + 0x20);
  pcStack_a0 = FUN_10988d660;
  pcStack_98 = FUN_10988d844;
  lStack_e0 = 0x200000000;
  pcStack_b0 = FUN_10988d5dc;
  pcStack_a8 = FUN_10988db04;
  pcStack_88 = FUN_10988dba8;
  _JSClassCreate();
  param_1[0x15] = (long)plVar5;
  pcStack_98 = *(code **)(puVar3 + 0x48);
  pcStack_a0 = *(code **)(puVar3 + 0x40);
  pcStack_88 = *(code **)(puVar3 + 0x58);
  uStack_90 = *(undefined8 *)(puVar3 + 0x50);
  uStack_78 = *(undefined8 *)(puVar3 + 0x68);
  pcStack_80 = *(code **)(puVar3 + 0x60);
  uStack_68 = *(undefined8 *)(puVar3 + 0x78);
  uStack_70 = *(undefined8 *)(puVar3 + 0x70);
  puStack_d8 = *(undefined8 **)(puVar3 + 8);
  uStack_c8 = *(undefined8 *)(puVar3 + 0x18);
  uStack_d0 = *(undefined8 *)(puVar3 + 0x10);
  uStack_b8 = *(undefined8 *)(puVar3 + 0x28);
  uStack_c0 = *(undefined8 *)(puVar3 + 0x20);
  pcStack_a8 = *(code **)(puVar3 + 0x38);
  lStack_e0 = 0x200000000;
  pcStack_b0 = FUN_10988dc64;
  _JSClassCreate();
  param_1[0x1b] = (long)plVar6;
  pcStack_98 = *(code **)(puVar3 + 0x48);
  pcStack_a0 = *(code **)(puVar3 + 0x40);
  pcStack_88 = *(code **)(puVar3 + 0x58);
  uStack_90 = *(undefined8 *)(puVar3 + 0x50);
  uStack_78 = *(undefined8 *)(puVar3 + 0x68);
  uStack_68 = *(undefined8 *)(puVar3 + 0x78);
  uStack_70 = *(undefined8 *)(puVar3 + 0x70);
  puStack_d8 = *(undefined8 **)(puVar3 + 8);
  uStack_c8 = *(undefined8 *)(puVar3 + 0x18);
  uStack_d0 = *(undefined8 *)(puVar3 + 0x10);
  uStack_b8 = *(undefined8 *)(puVar3 + 0x28);
  uStack_c0 = *(undefined8 *)(puVar3 + 0x20);
  pcStack_a8 = *(code **)(puVar3 + 0x38);
  lStack_e0 = 0x200000000;
  pcStack_b0 = (code *)0x10988dcbc;
  pcStack_80 = FUN_10988dd10;
  _JSClassCreate();
  param_1[0x1c] = (long)plVar7;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,param_1[0x2a]);
  plStack_58 = plVar5;
  FUN_1098811a4(&lStack_e0,&plStack_58,param_1,&UNK_10f47a60d);
  if (((char)param_1[0x1e] == '\x01') && ((undefined8 *)*plVar10 != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)*plVar10)();
  }
  param_1[0x1d] = lStack_e0;
  lStack_e0 = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  if (plStack_58 != (long *)0x0) {
    (**(code **)*plStack_58)();
  }
  (**(code **)(*param_1 + 0x120))(&plStack_58,param_1,&UNK_10f47a5ee,9);
  (**(code **)(*param_1 + 0x1a8))(&lStack_e0,param_1,plVar10,&plStack_58);
  if (plStack_58 != (long *)0x0) {
    (**(code **)*plStack_58)();
  }
  FUN_109884c0c(&puStack_60,&lStack_e0,param_1);
  FUN_1098811a4(&plStack_58,&puStack_60,param_1,&UNK_10f47a615);
  if (((char)param_1[0x20] == '\x01') && ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[0x1f])();
  }
  param_1[0x1f] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if ((3 < (int)lStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d8)();
  }
  lVar1 = param_1[0x21];
  uVar9 = *(undefined8 *)(param_1[0x2a] + 0x10);
  puVar3 = &UNK_10f581e9b;
  _JSStringCreateWithUTF8CString();
  _JSObjectGetProperty(lVar1,uVar9,puVar3,0);
  if (puVar3 != (undefined *)0x0) {
    _JSStringRelease(puVar3);
  }
  lVar8 = param_1[0x21];
  _JSObjectGetPrototype(lVar8,lVar1);
  param_1[0x2c] = lVar8;
  lVar1 = param_1[0x21];
  uVar9 = *(undefined8 *)(param_1[0x2a] + 0x10);
  puVar3 = &DAT_10f47a5f8;
  _JSStringCreateWithUTF8CString();
  _JSObjectGetProperty(lVar1,uVar9,puVar3,0);
  if (puVar3 != (undefined *)0x0) {
    _JSStringRelease(puVar3);
  }
  lVar8 = param_1[0x21];
  _JSObjectGetPrototype(lVar8,lVar1);
  param_1[0x2d] = lVar8;
  return param_1;
}



/* Entry: 10988d2f4; end: 10988d5a3;  */

long FUN_10988d2f4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_78 [48];
  undefined1 uStack_48;
  
  if (*(char *)(param_1 + 0x158) != '\0') {
    if (*(undefined8 **)(param_1 + 0x150) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x150))();
    }
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  auStack_78[0] = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    if (*(long *)(param_1 + 0x198) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 400) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x170) != 0) {
      _JSStringRelease();
    }
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  FUN_109892744(auStack_78);
  puVar3 = *(undefined8 **)(param_1 + 0x128);
  puVar7 = puVar3;
  if (*(undefined8 **)(param_1 + 0x130) != puVar3) {
    uVar2 = *(ulong *)(param_1 + 0x140);
    puVar8 = puVar3 + (uVar2 >> 9);
    plVar5 = (long *)*puVar8;
    plVar9 = plVar5 + (uVar2 & 0x1ff);
    uVar2 = *(long *)(param_1 + 0x148) + uVar2;
    plVar1 = (long *)(puVar3[uVar2 >> 9] + (uVar2 & 0x1ff) * 8);
    puVar7 = *(undefined8 **)(param_1 + 0x130);
    if (plVar9 != plVar1) {
      do {
        if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar9)();
          plVar5 = (long *)*puVar8;
        }
        plVar9 = plVar9 + 1;
        if ((long)plVar9 - (long)plVar5 == 0x1000) {
          puVar8 = puVar8 + 1;
          plVar5 = (long *)*puVar8;
          plVar9 = plVar5;
        }
      } while (plVar9 != plVar1);
      puVar3 = *(undefined8 **)(param_1 + 0x128);
      puVar7 = *(undefined8 **)(param_1 + 0x130);
    }
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  lVar6 = (long)puVar7 - (long)puVar3;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x128) + 8);
    *(undefined8 **)(param_1 + 0x128) = puVar3;
    lVar6 = *(long *)(param_1 + 0x130) - (long)puVar3;
  }
  if (uVar2 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10988d478;
    uVar4 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x140) = uVar4;
LAB_10988d478:
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    if (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0xe8))();
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0xf8))();
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  _JSClassRelease(*(undefined8 *)(param_1 + 0xa8));
  _JSClassRelease(*(undefined8 *)(param_1 + 0xd8));
  _JSClassRelease(*(undefined8 *)(param_1 + 0xe0));
  *(undefined1 *)(param_1 + 0x110) = 1;
  _JSGlobalContextRelease(*(undefined8 *)(param_1 + 0x108));
  FUN_109892744(param_1 + 0x170);
  if ((*(char *)(param_1 + 0x158) == '\x01') &&
     (*(undefined8 **)(param_1 + 0x150) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x150))();
  }
  FUN_1098930a8(param_1 + 0x120);
  if ((*(char *)(param_1 + 0x100) == '\x01') &&
     (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xf8))();
  }
  if ((*(char *)(param_1 + 0xf0) == '\x01') &&
     (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xe8))();
  }
  func_0x00010989303c(param_1 + 0xb0);
  func_0x000109892fd0(param_1 + 0x80);
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x000109892f64(param_1 + 0x38);
  func_0x000109892ef8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10988d5a4; end: 10988d5af;  */

long FUN_10988d5a4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_78 [48];
  undefined1 uStack_48;
  
  if (*(char *)(param_1 + 0x158) != '\0') {
    if (*(undefined8 **)(param_1 + 0x150) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x150))();
    }
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  auStack_78[0] = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    if (*(long *)(param_1 + 0x198) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 400) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      _JSStringRelease();
    }
    if (*(long *)(param_1 + 0x170) != 0) {
      _JSStringRelease();
    }
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  FUN_109892744(auStack_78);
  puVar3 = *(undefined8 **)(param_1 + 0x128);
  puVar7 = puVar3;
  if (*(undefined8 **)(param_1 + 0x130) != puVar3) {
    uVar2 = *(ulong *)(param_1 + 0x140);
    puVar8 = puVar3 + (uVar2 >> 9);
    plVar5 = (long *)*puVar8;
    plVar9 = plVar5 + (uVar2 & 0x1ff);
    uVar2 = *(long *)(param_1 + 0x148) + uVar2;
    plVar1 = (long *)(puVar3[uVar2 >> 9] + (uVar2 & 0x1ff) * 8);
    puVar7 = *(undefined8 **)(param_1 + 0x130);
    if (plVar9 != plVar1) {
      do {
        if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar9)();
          plVar5 = (long *)*puVar8;
        }
        plVar9 = plVar9 + 1;
        if ((long)plVar9 - (long)plVar5 == 0x1000) {
          puVar8 = puVar8 + 1;
          plVar5 = (long *)*puVar8;
          plVar9 = plVar5;
        }
      } while (plVar9 != plVar1);
      puVar3 = *(undefined8 **)(param_1 + 0x128);
      puVar7 = *(undefined8 **)(param_1 + 0x130);
    }
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  lVar6 = (long)puVar7 - (long)puVar3;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x128) + 8);
    *(undefined8 **)(param_1 + 0x128) = puVar3;
    lVar6 = *(long *)(param_1 + 0x130) - (long)puVar3;
  }
  if (uVar2 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10988d478;
    uVar4 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x140) = uVar4;
LAB_10988d478:
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    if (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0xe8))();
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0xf8))();
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  _JSClassRelease(*(undefined8 *)(param_1 + 0xa8));
  _JSClassRelease(*(undefined8 *)(param_1 + 0xd8));
  _JSClassRelease(*(undefined8 *)(param_1 + 0xe0));
  *(undefined1 *)(param_1 + 0x110) = 1;
  _JSGlobalContextRelease(*(undefined8 *)(param_1 + 0x108));
  FUN_109892744(param_1 + 0x170);
  if ((*(char *)(param_1 + 0x158) == '\x01') &&
     (*(undefined8 **)(param_1 + 0x150) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x150))();
  }
  FUN_1098930a8(param_1 + 0x120);
  if ((*(char *)(param_1 + 0x100) == '\x01') &&
     (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xf8))();
  }
  if ((*(char *)(param_1 + 0xf0) == '\x01') &&
     (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xe8))();
  }
  func_0x00010989303c(param_1 + 0xb0);
  func_0x000109892fd0(param_1 + 0x80);
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x000109892f64(param_1 + 0x38);
  func_0x000109892ef8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10988d5b0; end: 10988d5db;  */

void FUN_10988d5b0(void)

{
  FUN_10988d2f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10988d5dc; end: 10988d65f;  */

void FUN_10988d5dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = param_1;
  _JSObjectGetPrivate();
  if (plVar4 != (long *)0x0) {
    _JSObjectSetPrivate(param_1,0);
    lVar7 = *plVar4;
    plVar6 = (long *)plVar4[2];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    *plVar4 = *(long *)(lVar7 + 0xa0);
    *(long **)(lVar7 + 0xa0) = plVar4;
  }
  return;
}



/* Entry: 10988d660; end: 10988d843;  */

long FUN_10988d660(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  int aiStack_58 [2];
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 *puStack_48;
  
  _JSObjectGetPrivate();
  lVar3 = *param_2;
  if (param_3 == 0) {
    func_0x000105688514(&UNK_10f58237a);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10988d7ec);
    (*pcVar1)();
  }
  puStack_48 = *(undefined8 **)(lVar3 + 0x58);
  if (puStack_48 == (undefined8 *)0x0) {
    FUN_109892d80(lVar3 + 0x38);
    puStack_48 = *(undefined8 **)(lVar3 + 0x58);
  }
  *(undefined8 *)(lVar3 + 0x58) = *puStack_48;
  puStack_48[1] = lVar3;
  puStack_48[2] = param_3;
  *(undefined4 *)(puStack_48 + 3) = 0;
  *puStack_48 = &PTR_FUN_110b16e18;
  plVar2 = (long *)param_2[1];
  (**(code **)(*plVar2 + 0x10))(aiStack_58,plVar2,lVar3,&puStack_48);
  if (aiStack_58[0] < 4) {
    if (aiStack_58[0] < 2) {
      if (aiStack_58[0] == 0) {
        _JSValueMakeUndefined(param_1);
      }
      else {
        if (aiStack_58[0] != 1) {
LAB_10988d7ec:
          _abort();
          if (puStack_48 != (undefined8 *)0x0) {
            (**(code **)*puStack_48)();
          }
          ___cxa_begin_catch(plVar2);
          FUN_1098924c8(lVar3,param_4);
          ___cxa_end_catch();
          return lVar3;
        }
        _JSValueMakeNull(param_1);
      }
    }
    else if (aiStack_58[0] == 2) {
      _JSValueMakeBoolean(param_1,uStack_50);
    }
    else {
      if (aiStack_58[0] != 3) goto LAB_10988d7ec;
      _JSValueMakeNumber(CONCAT71(uStack_4f,uStack_50),param_1);
    }
  }
  else {
    if (1 < aiStack_58[0] - 4U) {
      if (aiStack_58[0] == 6) {
        _JSValueMakeString(param_1,*(undefined8 *)(CONCAT71(uStack_4f,uStack_50) + 0x10));
        goto LAB_10988d78c;
      }
      if (aiStack_58[0] != 7) goto LAB_10988d7ec;
    }
    param_1 = *(long *)(CONCAT71(uStack_4f,uStack_50) + 0x10);
  }
LAB_10988d78c:
  if ((3 < aiStack_58[0]) && ((undefined8 *)CONCAT71(uStack_4f,uStack_50) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_4f,uStack_50))();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  return param_1;
}



/* Entry: 10988d844; end: 10988db03;  */

long * FUN_10988d844(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4,
                    undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  _JSObjectGetPrivate();
  lVar5 = *param_3;
  if (param_4 == 0) {
    func_0x000105688514(&UNK_10f58237a);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10988da8c);
    (*pcVar1)();
  }
  puStack_48 = *(undefined8 **)(lVar5 + 0x58);
  if (puStack_48 == (undefined8 *)0x0) {
    FUN_109892d80(lVar5 + 0x38);
    puStack_48 = *(undefined8 **)(lVar5 + 0x58);
  }
  *(undefined8 *)(lVar5 + 0x58) = *puStack_48;
  puStack_48[1] = lVar5;
  puStack_48[2] = param_4;
  *(undefined4 *)(puStack_48 + 3) = 0;
  *puStack_48 = &PTR_FUN_110b16e18;
  plVar6 = (long *)param_3[1];
  uVar3 = *(undefined8 *)(lVar5 + 0x108);
  _JSValueGetType(uVar3,param_5);
  iVar2 = (int)uVar3;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        aiStack_58[0] = 0;
      }
      else {
        if (iVar2 != 1) {
LAB_10988da8c:
          _abort();
          if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
            (**(code **)*puStack_50)();
          }
          if (puStack_48 != (undefined8 *)0x0) {
            (**(code **)*puStack_48)();
          }
          ___cxa_begin_catch(uVar3);
          FUN_1098924c8(lVar5,param_6);
          ___cxa_end_catch();
          return (long *)0x0;
        }
        aiStack_58[0] = 1;
      }
    }
    else if (iVar2 == 2) {
      uVar3 = *(undefined8 *)(lVar5 + 0x108);
      _JSValueToBoolean(uVar3,param_5);
      aiStack_58[0] = 2;
      puStack_50 = (undefined8 *)CONCAT71(puStack_50._1_7_,(char)uVar3);
    }
    else {
      if (iVar2 != 3) goto LAB_10988da8c;
      _JSValueToNumber(*(undefined8 *)(lVar5 + 0x108),param_5,0);
      aiStack_58[0] = 3;
      puStack_50 = param_1;
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      uVar3 = *(undefined8 *)(lVar5 + 0x108);
      _JSValueToStringCopy(uVar3,param_5,0);
      puStack_50 = *(undefined8 **)(lVar5 + 0x58);
      if (puStack_50 == (undefined8 *)0x0) {
        FUN_109892d80(lVar5 + 0x38);
        puStack_50 = *(undefined8 **)(lVar5 + 0x58);
      }
      *(undefined8 *)(lVar5 + 0x58) = *puStack_50;
      puStack_50[1] = lVar5;
      puStack_50[2] = uVar3;
      *(undefined4 *)(puStack_50 + 3) = 1;
      *puStack_50 = &PTR_FUN_110b16e18;
      aiStack_58[0] = 6;
    }
    else {
      if (iVar2 != 5) goto LAB_10988da8c;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      FUN_1098927b8(puVar4,lVar5,param_5,1);
      aiStack_58[0] = 7;
      puStack_50 = puVar4;
    }
  }
  else if (iVar2 == 6) {
    puVar4 = (undefined8 *)(lVar5 + 0x10);
    FUN_1098927b8(puVar4,lVar5,param_5,1);
    aiStack_58[0] = 4;
    puStack_50 = puVar4;
  }
  else {
    if (iVar2 != 7) goto LAB_10988da8c;
    puVar4 = (undefined8 *)(lVar5 + 0x10);
    FUN_1098927b8(puVar4,lVar5,param_5,1);
    aiStack_58[0] = 5;
    puStack_50 = puVar4;
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,&puStack_48,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  return plVar6;
}



/* Entry: 10988db04; end: 10988dba7;  */

long * FUN_10988db04(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_38;
  
  _JSObjectGetPrivate();
  lVar2 = *param_2;
  puStack_38 = *(undefined8 **)(lVar2 + 0x58);
  if (puStack_38 == (undefined8 *)0x0) {
    FUN_109892d80(lVar2 + 0x38);
    puStack_38 = *(undefined8 **)(lVar2 + 0x58);
  }
  *(undefined8 *)(lVar2 + 0x58) = *puStack_38;
  puStack_38[1] = lVar2;
  puStack_38[2] = param_3;
  *(undefined4 *)(puStack_38 + 3) = 0;
  *puStack_38 = &PTR_FUN_110b16e18;
  plVar1 = (long *)param_2[1];
  (**(code **)(*plVar1 + 0x20))(plVar1,lVar2,&puStack_38);
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return plVar1;
}



/* Entry: 10988dba8; end: 10988dc63;  */

void FUN_10988dba8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_48;
  long *plStack_40;
  
  _JSObjectGetPrivate();
  (**(code **)(*(long *)param_2[1] + 0x28))(&plStack_48,(long *)param_2[1],*param_2);
  plVar2 = plStack_40;
  plVar1 = plStack_48;
  for (plVar3 = plStack_48; plStack_48 = plVar1, plVar3 != plVar2; plVar3 = plVar3 + 1) {
    _JSPropertyNameAccumulatorAddName(param_3,*(undefined8 *)(*plVar3 + 0x10));
    plVar1 = plStack_48;
  }
  plVar3 = plStack_40;
  if (plVar1 != (long *)0x0) {
    while (plVar3 != plVar1) {
      plVar3 = plVar3 + -1;
      if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar3)();
      }
    }
    __ZdlPv(plStack_48);
  }
  return;
}



/* Entry: 10988dc64; end: 10988dd0f;  */

void FUN_10988dc64(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1;
  _JSObjectGetPrivate();
  if (uVar1 != 0) {
    _JSObjectSetPrivate(param_1,0);
    puVar3 = (undefined8 *)(uVar1 ^ 7);
    if ((code *)puVar3[2] != (code *)0x0) {
      (*(code *)puVar3[2])(puVar3[1],*puVar3);
    }
    puVar2 = (undefined8 *)puVar3[3];
    puVar3[3] = *puVar2;
    *puVar2 = puVar3;
  }
  return;
}



/* Entry: 10988dd10; end: 10988e3c3;  */

undefined8
FUN_10988dd10(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 *param_5)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int aiStack_158 [2];
  undefined1 uStack_150;
  undefined7 uStack_14f;
  int aiStack_148 [2];
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _JSObjectGetPrivate();
  lVar14 = *param_2;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar7 = *(long *)(lVar14 + 0x60);
  plVar9 = *(long **)(lVar14 + 0x68);
  uVar11 = ((long)plVar9 - lVar7 >> 3) * 0x6db6db6db6db6db7;
  lVar8 = 0;
  if (uVar11 < 0x32) {
    if (plVar9 < *(long **)(lVar14 + 0x70)) {
      *plVar9 = (long)&uStack_130;
      *(undefined4 *)(plVar9 + 1) = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[6] = 0;
      plVar9 = plVar9 + 7;
    }
    else {
      lVar8 = (long)*(long **)(lVar14 + 0x70) - lVar7 >> 3;
      uVar13 = lVar8 * -0x2492492492492492;
      if (uVar13 < uVar11 + 1 || uVar13 - (uVar11 + 1) == 0) {
        uVar13 = uVar11 + 1;
      }
      if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
        uVar13 = 0x492492492492492;
      }
      if (0x492492492492492 < uVar13) {
        func_0x000104c4f740();
        goto LAB_10988e328;
      }
      lVar8 = uVar13 * 0x38;
      __Znwm();
      plVar9 = (long *)(lVar8 + ((long)plVar9 - lVar7));
      *plVar9 = (long)&uStack_130;
      *(undefined4 *)(plVar9 + 1) = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[6] = 0;
      plVar9 = plVar9 + 7;
      _memcpy();
      *(long *)(lVar14 + 0x60) = lVar8;
      *(long **)(lVar14 + 0x68) = plVar9;
      *(ulong *)(lVar14 + 0x70) = lVar8 + uVar13 * 0x38;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
    *(long **)(lVar14 + 0x68) = plVar9;
    lVar8 = lVar14;
  }
  puVar16 = (undefined8 *)0x0;
  uStack_f8 = 8;
  uStack_100 = 0;
  puStack_108 = auStack_f0;
  lStack_138 = lVar8;
  uVar11 = param_4;
  if (param_4 < 9) goto joined_r0x00010988df60;
  if (param_4 >> 0x3b == 0) {
    puVar5 = (undefined1 *)(param_4 << 4);
    __Znwm();
    if (uStack_100 == 0) {
      uVar13 = param_4;
      if (puStack_108 != (undefined1 *)0x0) goto LAB_10988e01c;
    }
    else {
      lVar7 = uStack_100 << 4;
      plVar9 = (long *)(puStack_108 + 8);
      plVar12 = (long *)(puVar5 + 8);
      do {
        iVar4 = (int)plVar9[-1];
        *(int *)(plVar12 + -1) = iVar4;
        if (iVar4 == 3) {
          puVar16 = (undefined8 *)*plVar9;
          *plVar12 = (long)puVar16;
        }
        else if (iVar4 == 2) {
          *(char *)plVar12 = (char)*plVar9;
        }
        else if (3 < iVar4) {
          *plVar12 = *plVar9;
          *plVar9 = 0;
        }
        *(undefined4 *)(plVar9 + -1) = 0;
        plVar9 = plVar9 + 2;
        plVar12 = plVar12 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      uVar13 = param_4;
      if (puStack_108 != (undefined1 *)0x0) {
        plVar9 = (long *)(puStack_108 + 8);
        uVar13 = uStack_100;
        do {
          if ((3 < (int)plVar9[-1]) && ((undefined8 *)*plVar9 != (undefined8 *)0x0)) {
            (*(code *)**(undefined8 **)*plVar9)();
          }
          plVar9 = plVar9 + 2;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
LAB_10988e01c:
        uVar13 = param_4;
        if (auStack_f0 != puStack_108) {
          __ZdlPv();
          uVar13 = param_4;
        }
      }
    }
    do {
      uStack_f8 = uVar13;
      puStack_108 = puVar5;
      uVar15 = *param_5;
      uVar6 = *(undefined8 *)(lVar14 + 0x108);
      _JSValueGetType(uVar6,uVar15);
      iVar4 = (int)uVar6;
      if (iVar4 < 4) {
        if (iVar4 < 2) {
          if (iVar4 == 0) {
            bVar2 = false;
            aiStack_148[0] = 0;
          }
          else {
            if (iVar4 != 1) goto LAB_10988e30c;
            bVar2 = false;
            aiStack_148[0] = 1;
          }
        }
        else if (iVar4 == 2) {
          uVar6 = *(undefined8 *)(lVar14 + 0x108);
          _JSValueToBoolean(uVar6,uVar15);
          bVar2 = false;
          aiStack_148[0] = 2;
          puStack_140 = (undefined8 *)CONCAT71(puStack_140._1_7_,(char)uVar6);
        }
        else {
          if (iVar4 != 3) goto LAB_10988e30c;
          _JSValueToNumber(*(undefined8 *)(lVar14 + 0x108),uVar15,0);
          bVar2 = false;
          aiStack_148[0] = 3;
          puStack_140 = puVar16;
        }
      }
      else {
        if (iVar4 < 6) {
          if (iVar4 == 4) {
            uVar6 = *(undefined8 *)(lVar14 + 0x108);
            _JSValueToStringCopy(uVar6,uVar15,0);
            puVar10 = *(undefined8 **)(lVar14 + 0x58);
            if (puVar10 == (undefined8 *)0x0) {
              FUN_109892d80(lVar14 + 0x38);
              puVar10 = *(undefined8 **)(lVar14 + 0x58);
            }
            *(undefined8 *)(lVar14 + 0x58) = *puVar10;
            puVar10[1] = lVar14;
            puVar10[2] = uVar6;
            bVar2 = true;
            *(undefined4 *)(puVar10 + 3) = 1;
            *puVar10 = &PTR_FUN_110b16e18;
            aiStack_148[0] = 6;
            puStack_140 = puVar10;
            goto LAB_10988e1b8;
          }
          if (iVar4 != 5) goto LAB_10988e30c;
          puVar10 = (undefined8 *)(lVar14 + 0x10);
          FUN_1098927b8(puVar10,lVar14,uVar15,1);
          aiStack_148[0] = 7;
        }
        else if (iVar4 == 6) {
          puVar10 = (undefined8 *)(lVar14 + 0x10);
          FUN_1098927b8(puVar10,lVar14,uVar15,1);
          aiStack_148[0] = 4;
        }
        else {
          if (iVar4 != 7) goto LAB_10988e30c;
          puVar10 = (undefined8 *)(lVar14 + 0x10);
          FUN_1098927b8(puVar10,lVar14,uVar15,1);
          aiStack_148[0] = 5;
        }
        bVar2 = true;
        puStack_140 = puVar10;
      }
LAB_10988e1b8:
      piVar1 = (int *)(puStack_108 + uStack_100 * 0x10);
      if (uStack_100 == uStack_f8) {
        FUN_10989325c(aiStack_158,&puStack_108,piVar1,aiStack_148);
        if ((3 < aiStack_148[0]) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
      }
      else {
        *piVar1 = aiStack_148[0];
        if (aiStack_148[0] == 3) {
          *(undefined8 **)(piVar1 + 2) = puStack_140;
          puVar16 = puStack_140;
        }
        else if (aiStack_148[0] == 2) {
          *(undefined1 *)(piVar1 + 2) = puStack_140._0_1_;
        }
        else if (bVar2) {
          *(undefined8 **)(piVar1 + 2) = puStack_140;
        }
        uStack_100 = uStack_100 + 1;
      }
      param_5 = param_5 + 1;
      uVar11 = uVar11 - 1;
joined_r0x00010988df60:
      puVar5 = puStack_108;
      uVar13 = uStack_f8;
    } while (uVar11 != 0);
    puVar16 = (undefined8 *)(lVar14 + 0x10);
    FUN_10988e404(puVar16,lVar14,param_3,1);
    aiStack_148[0] = 7;
    puStack_140 = puVar16;
    (*(code *)param_2[1])(aiStack_158,lVar14,aiStack_148,puStack_108,param_4,param_2 + 1);
    if (aiStack_158[0] < 4) {
      if (1 < aiStack_158[0]) {
        if (aiStack_158[0] == 2) {
          _JSValueMakeBoolean(param_1,uStack_150);
        }
        else {
          if (aiStack_158[0] != 3) goto LAB_10988e30c;
          _JSValueMakeNumber(CONCAT71(uStack_14f,uStack_150),param_1);
        }
        goto LAB_10988e280;
      }
      if (aiStack_158[0] == 0) {
        _JSValueMakeUndefined(param_1);
        goto LAB_10988e280;
      }
      if (aiStack_158[0] == 1) {
        _JSValueMakeNull(param_1);
        goto LAB_10988e280;
      }
LAB_10988e30c:
      _abort();
    }
    else {
      if (1 < aiStack_158[0] - 4U) {
        if (aiStack_158[0] == 6) {
          _JSValueMakeString(param_1,*(undefined8 *)(CONCAT71(uStack_14f,uStack_150) + 0x10));
          goto LAB_10988e280;
        }
        if (aiStack_158[0] != 7) goto LAB_10988e30c;
      }
      param_1 = *(undefined8 *)(CONCAT71(uStack_14f,uStack_150) + 0x10);
LAB_10988e280:
      if ((3 < aiStack_158[0]) &&
         ((undefined8 *)CONCAT71(uStack_14f,uStack_150) != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)CONCAT71(uStack_14f,uStack_150))();
      }
      if ((3 < aiStack_148[0]) && (puStack_140 != (undefined8 *)0x0)) {
        (**(code **)*puStack_140)();
      }
      FUN_10989349c(&puStack_108);
      FUN_10989351c(&lStack_138);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return param_1;
      }
    }
    ___stack_chk_fail();
  }
  func_0x00010772e1f8(&UNK_10f424dbf);
LAB_10988e328:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10988e32c);
  (*pcVar3)();
}



/* Entry: 10988e3c4; end: 10988e3f3;  */

void FUN_10988e3c4(long *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x98))(param_2,param_2[0x2a]);
  *param_1 = (long)param_2;
  return;
}



/* Entry: 10988e3f4; end: 10988e403;  */

undefined8 FUN_10988e3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10988e404; end: 10988e48b;  */

undefined8 * FUN_10988e404(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_109892840(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(uint *)(puVar1 + 3) = (param_4 ^ 0xffffffff) & 1;
  *puVar1 = &PTR_FUN_110b16db0;
  *(undefined2 *)((long)puVar1 + 0x1c) = 0xffff;
  if ((param_4 & 1) == 0) {
    FUN_109892990(puVar1);
  }
  return puVar1;
}



/* Entry: 10988e48c; end: 10988e4ff;  */

undefined8 * FUN_10988e48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_109892840(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = &PTR_FUN_110b16db0;
  *(undefined2 *)((long)puVar1 + 0x1c) = 0xffff;
  FUN_109892990(puVar1);
  return puVar1;
}



/* Entry: 10988e500; end: 10988e56b;  */

long FUN_10988e500(long param_1,long *param_2)

{
  param_1 = param_1 + 8;
  if (param_2[1] != -0x711f0026beb5a27e || *param_2 != 0x2f5f1545eb654c00) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10988e56c; end: 10988e60f;  */

void FUN_10988e56c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)0x50;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b16e70;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar2 = param_4[1];
  puVar6[7] = *param_4;
  puVar6[8] = uVar2;
  *(undefined8 *)((long)puVar6 + 0x47) = *(undefined8 *)((long)param_4 + 0xf);
  uVar3 = *(undefined1 *)((long)param_4 + 0x17);
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  puVar6[3] = &PTR_FUN_110b16ec0;
  puVar6[4] = &PTR_FUN_110b16ef0;
  puVar6[6] = uVar8;
  puVar6[5] = uVar7;
  *(undefined1 *)((long)puVar6 + 0x4f) = uVar3;
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  return;
}



/* Entry: 10988e610; end: 10988e72b;  */

void FUN_10988e610(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  plStack_28 = (long *)param_2[1];
  if (plStack_28 == (long *)0x0) {
    lStack_40 = 0;
    if (lStack_30 != 0) {
      lStack_40 = lStack_30 + 8;
    }
    plStack_38 = (long *)0x0;
  }
  else {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_40 = 0;
    if (lStack_30 != 0) {
      lStack_40 = lStack_30 + 8;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plStack_38 = plStack_28;
    } while (cVar3 != '\0');
  }
  FUN_10988e72c(param_1,&lStack_40,lStack_30 + 0x20);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10988e72c; end: 10988e9a3;  */

char * FUN_10988e72c(undefined4 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                    char *param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lStack_50;
  char *pcStack_48;
  
  plVar5 = (long *)*param_4;
  (**(code **)(*plVar5 + 0x18))();
  plVar6 = (long *)*param_4;
  (**(code **)(*plVar6 + 0x10))();
  FUN_10988e9fc(&pcStack_48,plVar5,plVar6);
  pcVar9 = *(char **)param_5;
  if (-1 < param_5[0x17]) {
    pcVar9 = param_5;
  }
  pcVar7 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar7 = pcVar9;
  }
  _JSStringCreateWithUTF8CString();
  lStack_50 = 0;
  uVar8 = *(undefined8 *)(param_3 + 0x108);
  _JSEvaluateScript(uVar8,pcStack_48,0,pcVar7,0,&lStack_50);
  if (lStack_50 != 0) {
    FUN_10988eb1c(param_3);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10988e97c);
    (*pcVar3)();
  }
  pcVar9 = *(char **)(param_3 + 0x108);
  _JSValueGetType(pcVar9,uVar8);
  iVar4 = (int)pcVar9;
  if (iVar4 < 4) {
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        *param_1 = 0;
      }
      else {
        if (iVar4 != 1) {
LAB_10988e97c:
          _abort();
          if (pcVar7 != (char *)0x0) {
            _JSStringRelease(pcVar7);
          }
          if (pcStack_48 != (char *)0x0) {
            _JSStringRelease(pcStack_48);
          }
          __Unwind_Resume();
          plVar5 = *(long **)(pcVar9 + 8);
          if (plVar5 != (long *)0x0) {
            plVar6 = plVar5 + 1;
            do {
              lVar13 = *plVar6;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar2) {
                *plVar6 = lVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          return pcVar9;
        }
        *param_1 = 1;
      }
    }
    else if (iVar4 == 2) {
      pcVar9 = *(char **)(param_3 + 0x108);
      _JSValueToBoolean(pcVar9,uVar8);
      *param_1 = 2;
      *(char *)(param_1 + 2) = (char)pcVar9;
    }
    else {
      if (iVar4 != 3) goto LAB_10988e97c;
      pcVar9 = *(char **)(param_3 + 0x108);
      _JSValueToNumber(pcVar9,uVar8,0);
      *param_1 = 3;
      *(undefined8 *)(param_1 + 2) = param_2;
    }
  }
  else {
    if (iVar4 < 6) {
      if (iVar4 == 4) {
        pcVar10 = *(char **)(param_3 + 0x108);
        _JSValueToStringCopy(pcVar10,uVar8,0);
        puVar12 = *(undefined8 **)(param_3 + 0x58);
        pcVar9 = pcVar10;
        if (puVar12 == (undefined8 *)0x0) {
          pcVar9 = (char *)(param_3 + 0x38);
          FUN_109892d80(pcVar9);
          puVar12 = *(undefined8 **)(param_3 + 0x58);
        }
        *(undefined8 *)(param_3 + 0x58) = *puVar12;
        puVar12[1] = param_3;
        puVar12[2] = pcVar10;
        *(undefined4 *)(puVar12 + 3) = 1;
        *puVar12 = &PTR_FUN_110b16e18;
        *param_1 = 6;
        *(undefined8 **)(param_1 + 2) = puVar12;
        goto LAB_10988e940;
      }
      if (iVar4 != 5) goto LAB_10988e97c;
      pcVar9 = (char *)(param_3 + 0x10);
      FUN_1098927b8(pcVar9,param_3,uVar8,0);
      uVar11 = 7;
    }
    else if (iVar4 == 6) {
      pcVar9 = (char *)(param_3 + 0x10);
      FUN_1098927b8(pcVar9,param_3,uVar8,0);
      uVar11 = 4;
    }
    else {
      if (iVar4 != 7) goto LAB_10988e97c;
      pcVar9 = (char *)(param_3 + 0x10);
      FUN_1098927b8(pcVar9,param_3,uVar8,0);
      uVar11 = 5;
    }
    *param_1 = uVar11;
    *(char **)(param_1 + 2) = pcVar9;
  }
LAB_10988e940:
  if (pcVar7 != (char *)0x0) {
    _JSStringRelease(pcVar7);
    pcVar9 = pcVar7;
  }
  if (pcStack_48 != (char *)0x0) {
    _JSStringRelease(pcStack_48);
    pcVar9 = pcStack_48;
  }
  return pcVar9;
}



/* Entry: 10988e9a4; end: 10988e9fb;  */

long FUN_10988e9a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10988e9fc; end: 10988eb1b;  */

undefined8 * FUN_10988e9fc(undefined8 *param_1,char *param_2,ulong param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    uStack_48 = uStack_48 & 0xffffffffffffff;
    ppppuVar3 = &pppuStack_58;
  }
  else {
    if (param_2[param_3] == '\0') {
      *param_1 = 0;
      pcVar2 = "";
      if (param_2 != (char *)0x0) {
        pcVar2 = param_2;
      }
      _JSStringCreateWithUTF8CString();
      *param_1 = pcVar2;
      return param_1;
    }
    if (0x7ffffffffffffff7 < param_3) {
      func_0x000104c4f6b8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988eb18);
      (*pcVar1)();
    }
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      ppppuVar3 = &pppuStack_58;
    }
    else {
      ppppuVar4 = (undefined8 ****)0x19;
      if ((param_3 | 7) != 0x17) {
        ppppuVar4 = (undefined8 ****)((param_3 | 7) + 1);
      }
      ppppuVar3 = ppppuVar4;
      __Znwm();
      uStack_48 = (ulong)ppppuVar4 | 0x8000000000000000;
      pppuStack_58 = ppppuVar3;
      uStack_50 = param_3;
    }
    _memmove(ppppuVar3,param_2,param_3);
  }
  *(char *)((long)ppppuVar3 + param_3) = '\0';
  ppppuVar3 = (undefined8 ****)pppuStack_58;
  if (-1 < (long)uStack_48) {
    ppppuVar3 = &pppuStack_58;
  }
  *param_1 = 0;
  ppppuVar4 = (undefined8 ****)"";
  if (ppppuVar3 != (undefined8 ****)0x0) {
    ppppuVar4 = ppppuVar3;
  }
  _JSStringCreateWithUTF8CString();
  *param_1 = ppppuVar4;
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  return param_1;
}



/* Entry: 10988eb1c; end: 10988ee2f;  */

void FUN_10988eb1c(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lStack_1a0;
  undefined8 **ppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  long alStack_180 [2];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [256];
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  uVar3 = *(ulong *)(param_1 + 0x108);
  _JSValueIsObject();
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    _JSObjectHasProperty(uVar4,param_2,*(undefined8 *)(param_1 + 400));
    if ((int)uVar4 == 0) goto LAB_10988eb6c;
  }
  FUN_109890ee0(param_1,param_2);
LAB_10988eb6c:
  FUN_1098923d8(alStack_180,*(undefined8 *)(param_1 + 0x108),param_2);
  FUN_10988f620(&ppuStack_68,alStack_180[0]);
  if (alStack_180[0] != 0) {
    _JSStringRelease(alStack_180[0]);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  _JSObjectGetProperty(uVar4,param_2,*(undefined8 *)(param_1 + 0x178),0);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  _JSObjectGetProperty(uVar5,param_2,*(undefined8 *)(param_1 + 0x188),0);
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  _JSObjectGetProperty(uVar6,param_2,*(undefined8 *)(param_1 + 0x180),0);
  FUN_1092a988c(alStack_180);
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    ppuStack_68 = &ppuStack_68;
  }
  FUN_1092b4db8(auStack_170,ppuStack_68,uStack_60);
  uVar3 = *(ulong *)(param_1 + 0x108);
  _JSValueIsUndefined(uVar3,uVar4);
  if ((uVar3 & 1) == 0) {
    puVar7 = auStack_170;
    FUN_1092b4db8(puVar7,&UNK_10f5822ff,4);
    FUN_1098923d8(&lStack_1a0,*(undefined8 *)(param_1 + 0x108),uVar4);
    FUN_10988f620(&ppuStack_198,lStack_1a0);
    pppuVar1 = (undefined8 ***)ppuStack_198;
    if (-1 < (char)bStack_181) {
      uStack_190 = (ulong)bStack_181;
      pppuVar1 = &ppuStack_198;
    }
    FUN_1092b4db8(puVar7,pppuVar1,uStack_190);
    if ((char)bStack_181 < '\0') {
      __ZdlPv(ppuStack_198);
    }
    if (lStack_1a0 != 0) {
      _JSStringRelease(lStack_1a0);
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x108);
  _JSValueIsUndefined(uVar3,uVar5);
  if ((uVar3 & 1) == 0) {
    puVar7 = auStack_170;
    FUN_1092b4db8(puVar7,&UNK_10f582304,9);
    _JSValueToNumber(*(undefined8 *)(param_1 + 0x108),uVar5,0);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(puVar7);
  }
  uVar3 = *(ulong *)(param_1 + 0x108);
  _JSValueIsUndefined(uVar3,uVar6);
  if ((uVar3 & 1) == 0) {
    puVar7 = auStack_170;
    FUN_1092b4db8(puVar7,&UNK_10f58230e,0xb);
    _JSValueToNumber(*(undefined8 *)(param_1 + 0x108),uVar6,0);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(puVar7);
  }
  FUN_10926dc5c(&ppuStack_198,auStack_168,&lStack_1a0);
  FUN_109893e50(param_1,&ppuStack_198);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10988ec64);
  (*pcVar2)();
}



/* Entry: 10988ee30; end: 10988f243;  */

void FUN_10988ee30(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar7 = (undefined8 *)*param_2;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x98))();
  puVar9 = (undefined8 *)param_1[0x25];
  puVar17 = (undefined8 *)param_1[0x26];
  uVar4 = (long)puVar17 - (long)puVar9;
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar11 = ((long)puVar17 - (long)puVar9) * 0x40 - 1;
  }
  uVar1 = param_1[0x28];
  lVar12 = param_1[0x29];
  uVar13 = lVar12 + uVar1;
  if (uVar11 != uVar13) goto LAB_10988f008;
  if (uVar1 < 0x200) {
    puVar14 = (undefined8 *)param_1[0x27];
    puVar16 = (undefined8 *)param_1[0x24];
    if (uVar4 < (ulong)((long)puVar14 - (long)puVar16)) {
      uVar15 = 0x1000;
      __Znwm();
      if (puVar14 == puVar17) {
        if (puVar9 == puVar16) {
          lVar12 = (long)puVar14 - (long)puVar9 >> 2;
          if (puVar17 == puVar9) {
            lVar12 = 1;
          }
          lVar5 = lVar12;
          FUN_109893734();
          puVar9 = (undefined8 *)(lVar5 + (lVar12 * 2 + 6U & 0xfffffffffffffff8));
          lVar12 = param_1[0x26] - param_1[0x25];
          puVar17 = puVar9;
          if (lVar12 != 0) {
            puVar17 = (undefined8 *)((long)puVar9 + lVar12);
            puVar14 = (undefined8 *)param_1[0x25];
            puVar16 = puVar9;
            do {
              *puVar16 = *puVar14;
              lVar12 = lVar12 + -8;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar12 != 0);
          }
          lVar12 = param_1[0x24];
          param_1[0x24] = lVar5;
          param_1[0x25] = (long)puVar9;
          param_1[0x26] = (long)puVar17;
          param_1[0x27] = lVar5 + (long)puVar7 * 8;
          if (lVar12 != 0) {
            __ZdlPv(lVar12);
            puVar9 = (undefined8 *)param_1[0x25];
          }
        }
        puVar9[-1] = uVar15;
        puVar7 = (undefined8 *)param_1[0x25];
        puVar17 = (undefined8 *)param_1[0x26];
        puVar9 = puVar7 + -1;
        param_1[0x25] = (long)puVar9;
        goto LAB_10988ee9c;
      }
      *puVar17 = uVar15;
      goto LAB_10988eff0;
    }
    puVar10 = (undefined8 *)((long)puVar14 - (long)puVar16 >> 2);
    if (puVar14 == puVar16) {
      puVar10 = (undefined8 *)0x1;
    }
    FUN_109893734();
    uVar15 = 0x1000;
    puVar8 = puVar7;
    __Znwm();
    puVar14 = (undefined8 *)((long)puVar10 + uVar4);
    puVar16 = puVar10 + (long)puVar7;
    puVar6 = puVar10;
    if (uVar4 == (long)puVar7 * 8) {
      if ((long)uVar4 < 1) {
        puVar7 = (undefined8 *)((long)puVar14 - (long)puVar10 >> 2);
        if (puVar17 == puVar9) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar6 = puVar7;
        FUN_109893734();
        puVar14 = puVar6 + ((ulong)puVar7 >> 2);
        puVar16 = puVar6 + (long)puVar8;
        if (puVar10 != (undefined8 *)0x0) {
          __ZdlPv(puVar10);
        }
      }
      else {
        lVar12 = ((long)puVar14 - (long)puVar10 >> 3) + 1;
        puVar14 = puVar14 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar17 = puVar14 + 1;
    *puVar14 = uVar15;
    puVar9 = (undefined8 *)param_1[0x26];
    puVar7 = puVar6;
    if (puVar9 != (undefined8 *)param_1[0x25]) {
      do {
        puVar6 = puVar7;
        puVar10 = puVar14;
        if (puVar14 == puVar7) {
          if (puVar17 < puVar16) {
            lVar12 = ((long)puVar16 - (long)puVar17 >> 3) + 1;
            lVar5 = (long)puVar17 - (long)puVar7;
            lVar2 = (long)puVar17 - (long)puVar7;
            puVar17 = puVar17 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar10 = (undefined8 *)((long)puVar17 - lVar5);
            if (lVar2 != 0) {
              _memmove(puVar10,puVar14,lVar2);
              puVar8 = puVar14;
            }
          }
          else {
            puVar10 = (undefined8 *)((long)puVar16 - (long)puVar7 >> 2);
            if ((long)puVar16 - (long)puVar7 == 0) {
              puVar10 = (undefined8 *)0x1;
            }
            puVar6 = puVar10;
            FUN_109893734();
            puVar10 = (undefined8 *)((long)puVar6 + ((long)puVar10 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar17 - (long)puVar7;
            puVar17 = puVar10;
            if (lVar12 != 0) {
              puVar17 = (undefined8 *)((long)puVar10 + lVar12);
              puVar16 = puVar10;
              do {
                *puVar16 = *puVar14;
                lVar12 = lVar12 + -8;
                puVar16 = puVar16 + 1;
                puVar14 = puVar14 + 1;
              } while (lVar12 != 0);
            }
            puVar16 = puVar6 + (long)puVar8;
            if (puVar7 != (undefined8 *)0x0) {
              __ZdlPv(puVar7);
            }
          }
        }
        puVar9 = puVar9 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar9;
        puVar7 = puVar6;
      } while (puVar9 != (undefined8 *)param_1[0x25]);
    }
    lVar12 = param_1[0x24];
    param_1[0x24] = (long)puVar6;
    param_1[0x25] = (long)puVar14;
    param_1[0x26] = (long)puVar17;
    param_1[0x27] = (long)puVar16;
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  else {
    param_1[0x28] = uVar1 - 0x200;
    puVar7 = puVar9 + 1;
LAB_10988ee9c:
    uVar15 = *puVar9;
    param_1[0x25] = (long)puVar7;
    if (puVar17 == (undefined8 *)param_1[0x27]) {
      puVar9 = (undefined8 *)param_1[0x24];
      if (puVar7 < puVar9 || (long)puVar7 - (long)puVar9 == 0) {
        uVar11 = (long)puVar17 - (long)puVar9 >> 2;
        if ((long)puVar17 - (long)puVar9 == 0) {
          uVar11 = 1;
        }
        uVar4 = uVar11;
        FUN_109893734();
        puVar9 = (undefined8 *)(uVar4 + (uVar11 >> 2) * 8);
        lVar12 = param_1[0x26] - param_1[0x25];
        puVar17 = puVar9;
        if (lVar12 != 0) {
          puVar17 = (undefined8 *)((long)puVar9 + lVar12);
          puVar14 = (undefined8 *)param_1[0x25];
          puVar16 = puVar9;
          do {
            *puVar16 = *puVar14;
            lVar12 = lVar12 + -8;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        lVar12 = param_1[0x24];
        param_1[0x24] = uVar4;
        param_1[0x25] = (long)puVar9;
        param_1[0x26] = (long)puVar17;
        param_1[0x27] = uVar4 + (long)puVar7 * 8;
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
          puVar17 = (undefined8 *)param_1[0x26];
        }
      }
      else {
        lVar12 = (((long)puVar7 - (long)puVar9 >> 3) + 1) / 2;
        puVar9 = puVar7 + -lVar12;
        lVar5 = (long)puVar17 - (long)puVar7;
        if (lVar5 != 0) {
          _memmove(puVar9,puVar7,lVar5);
          puVar7 = (undefined8 *)param_1[0x25];
        }
        puVar17 = (undefined8 *)((long)puVar9 + lVar5);
        param_1[0x25] = (long)(puVar7 + -lVar12);
        param_1[0x26] = (long)puVar17;
      }
    }
    *puVar17 = uVar15;
LAB_10988eff0:
    param_1[0x26] = param_1[0x26] + 8;
  }
  puVar9 = (undefined8 *)param_1[0x25];
  lVar12 = param_1[0x29];
  uVar13 = param_1[0x28] + lVar12;
LAB_10988f008:
  *(long **)(puVar9[uVar13 >> 9] + (uVar13 & 0x1ff) * 8) = plVar3;
  param_1[0x29] = lVar12 + 1;
  return;
}



/* Entry: 10988f244; end: 10988f3cb;  */

undefined8 FUN_10988f244(long *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int aiStack_48 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  lVar3 = param_1[0x29];
  if (lVar3 != 0) {
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    iVar8 = param_2 + 1;
    do {
      iVar8 = iVar8 + -1;
      if (iVar8 < 1) {
        return 1;
      }
      lVar5 = param_1[0x25];
      uVar4 = param_1[0x28];
      uVar6 = uVar4 >> 6 & 0x3fffffffffffff8;
      lVar7 = *(long *)(lVar5 + uVar6);
      lVar1 = (uVar4 & 0x1ff) * 8;
      puStack_38 = *(undefined8 **)(lVar7 + lVar1);
      *(undefined8 *)(lVar7 + lVar1) = 0;
      puVar2 = *(undefined8 **)(*(long *)(lVar5 + uVar6) + lVar1);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)();
        uVar4 = param_1[0x28];
        lVar3 = param_1[0x29];
      }
      param_1[0x28] = uVar4 + 1;
      param_1[0x29] = lVar3 + -1;
      if (0x3ff < uVar4 + 1) {
        __ZdlPv(*(undefined8 *)param_1[0x25]);
        param_1[0x25] = param_1[0x25] + 8;
        param_1[0x28] = param_1[0x28] + -0x200;
      }
      aiStack_30[0] = 0;
      (**(code **)(*param_1 + 0x2a8))(aiStack_48,param_1,&puStack_38,aiStack_30,0,0);
      if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
        (**(code **)*puStack_28)();
      }
      if ((3 < aiStack_48[0]) && (puStack_40 != (undefined8 *)0x0)) {
        (**(code **)*puStack_40)();
      }
      if (puStack_38 != (undefined8 *)0x0) {
        (**(code **)*puStack_38)();
      }
      lVar3 = param_1[0x29];
    } while (lVar3 != 0);
  }
  return 1;
}



/* Entry: 10988f3cc; end: 10988f453;  */

void FUN_10988f3cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__19to_stringEm(auStack_38);
  puVar1 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar1,0,&UNK_10f5822c3,4);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10988f454; end: 10988f45b;  */

undefined8 FUN_10988f454(void)

{
  return 0;
}



/* Entry: 10988f45c; end: 10988f48f;  */

undefined8 FUN_10988f45c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  _JSObjectGetPrivate();
  if ((~(uint)uVar1 & 7) == 0) {
    uVar2 = *(undefined8 *)(uVar1 & 0xfffffffffffffff8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10988f490; end: 10988f577;  */

void FUN_10988f490(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  
  FUN_10988e9fc(&uStack_38);
  puVar1 = *(undefined8 **)(param_2 + 0x58);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_109892d80(param_2 + 0x38);
    puVar1 = *(undefined8 **)(param_2 + 0x58);
  }
  *(undefined8 *)(param_2 + 0x58) = *puVar1;
  puVar1[1] = param_2;
  puVar1[2] = uStack_38;
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = &PTR_FUN_110b16e18;
  *param_1 = puVar1;
  return;
}



/* Entry: 10988f578; end: 10988f5fb;  */

void FUN_10988f578(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_3;
  if (*(int *)(lVar2 + 0x18) == 0) {
    _JSStringRetain(*(undefined8 *)(lVar2 + 0x10));
    iVar1 = 2;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x18) + 1;
  }
  *(int *)(lVar2 + 0x18) = iVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 10988f5fc; end: 10988f60f;  */

void FUN_10988f5fc(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *extraout_x8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  FUN_109892a8c(&UNK_10f5822c8);
  uVar6 = *(ulong *)(*param_2 + 0x10);
  uVar5 = uVar6;
  _JSStringGetLength();
  _JSStringGetCharactersPtr();
  func_0x000104c59120(extraout_x8,uVar5 * 3,0);
  plVar9 = (long *)*extraout_x8;
  if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
    plVar9 = extraout_x8;
  }
  if (uVar5 == 0) {
    lVar7 = 0;
  }
  else {
    uVar12 = 0;
    lVar1 = (long)plVar9 + 1;
    lVar10 = 0;
    do {
      uVar4 = *(ushort *)(uVar6 + uVar12 * 2);
      uVar11 = (uint)uVar4;
      uVar3 = uVar4 & 0xfc00;
      if (uVar3 == 0xdc00) {
LAB_10988f6d8:
        uVar11 = 0xfffd;
LAB_10988f6dc:
        *(byte *)((long)plVar9 + lVar10) = (byte)(uVar11 >> 0xc) | 0xe0;
        *(byte *)(lVar1 + lVar10) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
        uVar11 = uVar11 & 0x3f | 0xffffff80;
        lVar7 = 3;
        plVar8 = (long *)((long)plVar9 + 2);
      }
      else {
        if (uVar3 == 0xd800) {
          uVar2 = uVar12 + 1;
          if ((uVar5 <= uVar2) ||
             (uVar11 = (uint)*(ushort *)(uVar6 + uVar2 * 2), (uVar11 & 0xfc00) != 0xdc00))
          goto LAB_10988f6d8;
          uVar11 = uVar11 + (uint)uVar4 * 0x400 + 0xfca02400;
          uVar12 = uVar2;
        }
        if (uVar11 < 0x80) {
          lVar7 = 1;
          plVar8 = plVar9;
        }
        else if (uVar11 < 0x800) {
          *(byte *)((long)plVar9 + lVar10) = (byte)(uVar11 >> 6) | 0xc0;
          uVar11 = uVar11 & 0x3f | 0xffffff80;
          lVar7 = 2;
          plVar8 = (long *)lVar1;
        }
        else {
          if (uVar11 >> 0x10 == 0) goto LAB_10988f6dc;
          *(byte *)((long)plVar9 + lVar10) = (byte)(uVar11 >> 0x12) | 0xf0;
          *(byte *)(lVar1 + lVar10) = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)plVar9 + 2 + lVar10) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          lVar7 = 4;
          uVar11 = uVar11 & 0x3f | 0xffffff80;
          plVar8 = (long *)((long)plVar9 + 3);
        }
      }
      lVar7 = lVar7 + lVar10;
      *(char *)((long)plVar8 + lVar10) = (char)uVar11;
      uVar12 = uVar12 + 1;
      lVar10 = lVar7;
    } while (uVar12 < uVar5);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(extraout_x8,lVar7,0);
  return;
}



/* Entry: 10988f610; end: 10988f61f;  */

void FUN_10988f610(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar7 = *(ulong *)(*param_3 + 0x10);
  uVar6 = uVar7;
  _JSStringGetLength();
  _JSStringGetCharactersPtr();
  func_0x000104c59120(param_1,uVar6 * 3,0);
  plVar4 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar4 = param_1;
  }
  if (uVar6 == 0) {
    lVar8 = 0;
  }
  else {
    uVar12 = 0;
    lVar1 = (long)plVar4 + 1;
    lVar10 = 0;
    do {
      uVar5 = *(ushort *)(uVar7 + uVar12 * 2);
      uVar11 = (uint)uVar5;
      uVar3 = uVar5 & 0xfc00;
      if (uVar3 == 0xdc00) {
LAB_10988f6d8:
        uVar11 = 0xfffd;
LAB_10988f6dc:
        *(byte *)((long)plVar4 + lVar10) = (byte)(uVar11 >> 0xc) | 0xe0;
        *(byte *)(lVar1 + lVar10) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
        uVar11 = uVar11 & 0x3f | 0xffffff80;
        lVar8 = 3;
        plVar9 = (long *)((long)plVar4 + 2);
      }
      else {
        if (uVar3 == 0xd800) {
          uVar2 = uVar12 + 1;
          if ((uVar6 <= uVar2) ||
             (uVar11 = (uint)*(ushort *)(uVar7 + uVar2 * 2), (uVar11 & 0xfc00) != 0xdc00))
          goto LAB_10988f6d8;
          uVar11 = uVar11 + (uint)uVar5 * 0x400 + 0xfca02400;
          uVar12 = uVar2;
        }
        if (uVar11 < 0x80) {
          lVar8 = 1;
          plVar9 = plVar4;
        }
        else if (uVar11 < 0x800) {
          *(byte *)((long)plVar4 + lVar10) = (byte)(uVar11 >> 6) | 0xc0;
          uVar11 = uVar11 & 0x3f | 0xffffff80;
          lVar8 = 2;
          plVar9 = (long *)lVar1;
        }
        else {
          if (uVar11 >> 0x10 == 0) goto LAB_10988f6dc;
          *(byte *)((long)plVar4 + lVar10) = (byte)(uVar11 >> 0x12) | 0xf0;
          *(byte *)(lVar1 + lVar10) = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)plVar4 + 2 + lVar10) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          lVar8 = 4;
          uVar11 = uVar11 & 0x3f | 0xffffff80;
          plVar9 = (long *)((long)plVar4 + 3);
        }
      }
      lVar8 = lVar8 + lVar10;
      *(char *)((long)plVar9 + lVar10) = (char)uVar11;
      uVar12 = uVar12 + 1;
      lVar10 = lVar8;
    } while (uVar12 < uVar6);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,lVar8,0);
  return;
}



/* Entry: 10988f620; end: 10988f7eb;  */

void FUN_10988f620(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar6 = param_2;
  _JSStringGetLength();
  _JSStringGetCharactersPtr();
  func_0x000104c59120(param_1,uVar6 * 3,0);
  plVar4 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar4 = param_1;
  }
  if (uVar6 == 0) {
    lVar7 = 0;
  }
  else {
    uVar11 = 0;
    lVar1 = (long)plVar4 + 1;
    lVar9 = 0;
    do {
      uVar5 = *(ushort *)(param_2 + uVar11 * 2);
      uVar10 = (uint)uVar5;
      uVar3 = uVar5 & 0xfc00;
      if (uVar3 == 0xdc00) {
LAB_10988f6d8:
        uVar10 = 0xfffd;
LAB_10988f6dc:
        *(byte *)((long)plVar4 + lVar9) = (byte)(uVar10 >> 0xc) | 0xe0;
        *(byte *)(lVar1 + lVar9) = (byte)(uVar10 >> 6) & 0x3f | 0x80;
        uVar10 = uVar10 & 0x3f | 0xffffff80;
        lVar7 = 3;
        plVar8 = (long *)((long)plVar4 + 2);
      }
      else {
        if (uVar3 == 0xd800) {
          uVar2 = uVar11 + 1;
          if ((uVar6 <= uVar2) ||
             (uVar10 = (uint)*(ushort *)(param_2 + uVar2 * 2), (uVar10 & 0xfc00) != 0xdc00))
          goto LAB_10988f6d8;
          uVar10 = uVar10 + (uint)uVar5 * 0x400 + 0xfca02400;
          uVar11 = uVar2;
        }
        if (uVar10 < 0x80) {
          lVar7 = 1;
          plVar8 = plVar4;
        }
        else if (uVar10 < 0x800) {
          *(byte *)((long)plVar4 + lVar9) = (byte)(uVar10 >> 6) | 0xc0;
          uVar10 = uVar10 & 0x3f | 0xffffff80;
          lVar7 = 2;
          plVar8 = (long *)lVar1;
        }
        else {
          if (uVar10 >> 0x10 == 0) goto LAB_10988f6dc;
          *(byte *)((long)plVar4 + lVar9) = (byte)(uVar10 >> 0x12) | 0xf0;
          *(byte *)(lVar1 + lVar9) = (byte)(uVar10 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)plVar4 + 2 + lVar9) = (byte)(uVar10 >> 6) & 0x3f | 0x80;
          lVar7 = 4;
          uVar10 = uVar10 & 0x3f | 0xffffff80;
          plVar8 = (long *)((long)plVar4 + 3);
        }
      }
      lVar7 = lVar7 + lVar9;
      *(char *)((long)plVar8 + lVar9) = (char)uVar10;
      uVar11 = uVar11 + 1;
      lVar9 = lVar7;
    } while (uVar11 < uVar6);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,lVar7,0);
  return;
}



/* Entry: 10988f7ec; end: 10988f7ff;  */

void FUN_10988f7ec(undefined8 param_1,long *param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSStringIsEqual_110346f38)
            (*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_3 + 0x10));
  return;
}



/* Entry: 10988f800; end: 10988f8e7;  */

void FUN_10988f800(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int aiStack_38 [2];
  long *plStack_30;
  undefined8 *puStack_28;
  
  aiStack_38[0] = 4;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x80))(param_2,*param_3);
  plStack_30 = plVar1;
  FUN_109885044(&puStack_28,aiStack_38,param_2);
  (**(code **)(*param_2 + 0x138))(param_1,param_2,&puStack_28);
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  if ((3 < aiStack_38[0]) && (plStack_30 != (long *)0x0)) {
    (**(code **)*plStack_30)();
  }
  return;
}



/* Entry: 10988f8e8; end: 10988f95f;  */

void FUN_10988f8e8(undefined8 param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *****pppppuVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  undefined8 *extraout_x8_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 ****ppppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_98;
  
  FUN_109892a8c(&UNK_10f5822c8);
  FUN_109892a8c(&UNK_10f5822c8);
  FUN_109892a8c(&UNK_10f5822c8);
  FUN_109892a8c(&UNK_10f5822c8);
  FUN_109892a8c(&UNK_10f5822c8);
  puVar6 = &UNK_10f5822c8;
  FUN_109892a8c();
  pbVar1 = param_2;
  lVar4 = param_3;
  while( true ) {
    if (lVar4 == 0) {
      FUN_10988e9fc(&uStack_98);
      puVar11 = *(undefined8 **)(puVar6 + 0x58);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_109892d80(puVar6 + 0x38);
        puVar11 = *(undefined8 **)(puVar6 + 0x58);
      }
      *(undefined8 *)(puVar6 + 0x58) = *puVar11;
      puVar11[1] = puVar6;
      puVar11[2] = uStack_98;
      *(undefined4 *)(puVar11 + 3) = 1;
      *puVar11 = &PTR_FUN_110b16e18;
      *extraout_x8 = puVar11;
      return;
    }
    if ((char)*pbVar1 < '\0') break;
    pbVar1 = pbVar1 + 1;
    lVar4 = lVar4 + -1;
  }
  puVar6 = &UNK_10f582325;
  FUN_109892a8c();
  ppppuStack_118 = (undefined8 *****)0x0;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x0001078a96a0(&ppppuStack_118,param_3);
  if (param_3 != 0) {
    iVar14 = 0;
    iVar8 = 0;
    uVar13 = 0;
    uVar10 = 0xbf;
    uVar9 = 0x80;
    do {
      bVar3 = *param_2;
      uVar12 = (uint)bVar3;
      if (iVar8 == 0) {
        if ((char)bVar3 < '\0') {
          if (uVar12 - 0xc2 < 0x1e) {
            iVar14 = 0;
            uVar13 = uVar12 & 0x1f;
            uVar10 = 0xbf;
            uVar9 = 0x80;
            iVar8 = 1;
          }
          else if ((uVar12 & 0xf0) == 0xe0) {
            iVar14 = 0;
            uVar13 = uVar12 & 0xf;
            uVar9 = 0xa0;
            if (uVar12 != 0xe0) {
              uVar9 = 0x80;
            }
            uVar10 = 0x9f;
            if (uVar12 != 0xed) {
              uVar10 = 0xbf;
            }
            iVar8 = 2;
          }
          else {
            if (4 < uVar12 - 0xf0) goto LAB_10988fc3c;
            iVar14 = 0;
            uVar13 = uVar12 & 7;
            uVar9 = 0x90;
            if (uVar12 != 0xf0) {
              uVar9 = 0x80;
            }
            uVar10 = 0x8f;
            if (uVar12 != 0xf4) {
              uVar10 = 0xbf;
            }
            iVar8 = 3;
          }
        }
        else {
          func_0x0001078281ac(&ppppuStack_118,bVar3);
          iVar8 = 0;
        }
      }
      else {
        if (uVar12 < uVar9 || uVar10 < bVar3) {
LAB_10988fc3c:
          FUN_109892a8c(&UNK_10f58233a);
          goto LAB_10988fc58;
        }
        uVar9 = bVar3 & 0x3f;
        uVar12 = uVar9 | uVar13 << 6;
        iVar14 = iVar14 + 1;
        if (iVar14 == iVar8) {
          if ((uVar13 * 0x40 & 0xffff0000) != 0) {
            func_0x0001078281ac(&ppppuStack_118,(uVar13 * 0x40 + 0x3ff0000 >> 10) - 0x2800 & 0xffff)
            ;
            uVar12 = uVar9 | uVar13 << 6 & 0x3ff | 0xffffdc00;
          }
          func_0x0001078281ac(&ppppuStack_118,uVar12 & 0xffff);
          iVar8 = 0;
          iVar14 = 0;
          uVar10 = 0xbf;
          uVar9 = 0x80;
          uVar13 = 0;
        }
        else {
          uVar10 = 0xbf;
          uVar9 = 0x80;
          uVar13 = uVar12;
        }
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    if (iVar8 != 0) {
      FUN_109892a8c(&UNK_10f58233a);
LAB_10988fc58:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988fc5c);
      (*pcVar5)();
    }
  }
  uVar2 = uStack_110;
  pppppuVar7 = (undefined8 *****)ppppuStack_118;
  if (-1 < (long)uStack_108) {
    uVar2 = uStack_108 >> 0x38;
    pppppuVar7 = &ppppuStack_118;
  }
  _JSStringCreateWithCharacters(pppppuVar7,uVar2);
  puVar11 = *(undefined8 **)(puVar6 + 0x58);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_109892d80(puVar6 + 0x38);
    puVar11 = *(undefined8 **)(puVar6 + 0x58);
  }
  *(undefined8 *)(puVar6 + 0x58) = *puVar11;
  puVar11[1] = puVar6;
  puVar11[2] = pppppuVar7;
  *(undefined4 *)(puVar11 + 3) = 1;
  *puVar11 = &PTR_FUN_110b16e18;
  *extraout_x8_00 = puVar11;
  if ((long)uStack_108 < 0) {
    __ZdlPv(ppppuStack_118);
  }
  return;
}



/* Entry: 10988f960; end: 10988f9ff;  */

void FUN_10988f960(undefined8 *param_1,long param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *****pppppuVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 ****ppppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_38;
  
  lVar4 = param_4;
  pbVar1 = param_3;
  while( true ) {
    if (lVar4 == 0) {
      FUN_10988e9fc(&uStack_38);
      puVar11 = *(undefined8 **)(param_2 + 0x58);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_109892d80(param_2 + 0x38);
        puVar11 = *(undefined8 **)(param_2 + 0x58);
      }
      *(undefined8 *)(param_2 + 0x58) = *puVar11;
      puVar11[1] = param_2;
      puVar11[2] = uStack_38;
      *(undefined4 *)(puVar11 + 3) = 1;
      *puVar11 = &PTR_FUN_110b16e18;
      *param_1 = puVar11;
      return;
    }
    if ((char)*pbVar1 < '\0') break;
    pbVar1 = pbVar1 + 1;
    lVar4 = lVar4 + -1;
  }
  puVar6 = &UNK_10f582325;
  FUN_109892a8c();
  ppppuStack_b8 = (undefined8 *****)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0001078a96a0(&ppppuStack_b8,param_4);
  if (param_4 != 0) {
    iVar14 = 0;
    iVar8 = 0;
    uVar13 = 0;
    uVar10 = 0xbf;
    uVar9 = 0x80;
    do {
      bVar3 = *param_3;
      uVar12 = (uint)bVar3;
      if (iVar8 == 0) {
        if ((char)bVar3 < '\0') {
          if (uVar12 - 0xc2 < 0x1e) {
            iVar14 = 0;
            uVar13 = uVar12 & 0x1f;
            uVar10 = 0xbf;
            uVar9 = 0x80;
            iVar8 = 1;
          }
          else if ((uVar12 & 0xf0) == 0xe0) {
            iVar14 = 0;
            uVar13 = uVar12 & 0xf;
            uVar9 = 0xa0;
            if (uVar12 != 0xe0) {
              uVar9 = 0x80;
            }
            uVar10 = 0x9f;
            if (uVar12 != 0xed) {
              uVar10 = 0xbf;
            }
            iVar8 = 2;
          }
          else {
            if (4 < uVar12 - 0xf0) goto LAB_10988fc3c;
            iVar14 = 0;
            uVar13 = uVar12 & 7;
            uVar9 = 0x90;
            if (uVar12 != 0xf0) {
              uVar9 = 0x80;
            }
            uVar10 = 0x8f;
            if (uVar12 != 0xf4) {
              uVar10 = 0xbf;
            }
            iVar8 = 3;
          }
        }
        else {
          func_0x0001078281ac(&ppppuStack_b8,bVar3);
          iVar8 = 0;
        }
      }
      else {
        if (uVar12 < uVar9 || uVar10 < bVar3) {
LAB_10988fc3c:
          FUN_109892a8c(&UNK_10f58233a);
          goto LAB_10988fc58;
        }
        uVar9 = bVar3 & 0x3f;
        uVar12 = uVar9 | uVar13 << 6;
        iVar14 = iVar14 + 1;
        if (iVar14 == iVar8) {
          if ((uVar13 * 0x40 & 0xffff0000) != 0) {
            func_0x0001078281ac(&ppppuStack_b8,(uVar13 * 0x40 + 0x3ff0000 >> 10) - 0x2800 & 0xffff);
            uVar12 = uVar9 | uVar13 << 6 & 0x3ff | 0xffffdc00;
          }
          func_0x0001078281ac(&ppppuStack_b8,uVar12 & 0xffff);
          iVar8 = 0;
          iVar14 = 0;
          uVar10 = 0xbf;
          uVar9 = 0x80;
          uVar13 = 0;
        }
        else {
          uVar10 = 0xbf;
          uVar9 = 0x80;
          uVar13 = uVar12;
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
    if (iVar8 != 0) {
      FUN_109892a8c(&UNK_10f58233a);
LAB_10988fc58:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988fc5c);
      (*pcVar5)();
    }
  }
  uVar2 = uStack_b0;
  pppppuVar7 = (undefined8 *****)ppppuStack_b8;
  if (-1 < (long)uStack_a8) {
    uVar2 = uStack_a8 >> 0x38;
    pppppuVar7 = &ppppuStack_b8;
  }
  _JSStringCreateWithCharacters(pppppuVar7,uVar2);
  puVar11 = *(undefined8 **)(puVar6 + 0x58);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_109892d80(puVar6 + 0x38);
    puVar11 = *(undefined8 **)(puVar6 + 0x58);
  }
  *(undefined8 *)(puVar6 + 0x58) = *puVar11;
  puVar11[1] = puVar6;
  puVar11[2] = pppppuVar7;
  *(undefined4 *)(puVar11 + 3) = 1;
  *puVar11 = &PTR_FUN_110b16e18;
  *extraout_x8 = puVar11;
  if ((long)uStack_a8 < 0) {
    __ZdlPv(ppppuStack_b8);
  }
  return;
}



/* Entry: 10988fa00; end: 10988fc83;  */

void FUN_10988fa00(undefined8 *param_1,long param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  pppuStack_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001078a96a0(&pppuStack_78,param_4);
  if (param_4 != 0) {
    iVar11 = 0;
    iVar5 = 0;
    uVar10 = 0;
    uVar7 = 0xbf;
    uVar6 = 0x80;
    do {
      bVar2 = *param_3;
      uVar9 = (uint)bVar2;
      if (iVar5 == 0) {
        if ((char)bVar2 < '\0') {
          if (uVar9 - 0xc2 < 0x1e) {
            iVar11 = 0;
            uVar10 = uVar9 & 0x1f;
            uVar7 = 0xbf;
            uVar6 = 0x80;
            iVar5 = 1;
          }
          else if ((uVar9 & 0xf0) == 0xe0) {
            iVar11 = 0;
            uVar10 = uVar9 & 0xf;
            uVar6 = 0xa0;
            if (uVar9 != 0xe0) {
              uVar6 = 0x80;
            }
            uVar7 = 0x9f;
            if (uVar9 != 0xed) {
              uVar7 = 0xbf;
            }
            iVar5 = 2;
          }
          else {
            if (4 < uVar9 - 0xf0) goto LAB_10988fc3c;
            iVar11 = 0;
            uVar10 = uVar9 & 7;
            uVar6 = 0x90;
            if (uVar9 != 0xf0) {
              uVar6 = 0x80;
            }
            uVar7 = 0x8f;
            if (uVar9 != 0xf4) {
              uVar7 = 0xbf;
            }
            iVar5 = 3;
          }
        }
        else {
          func_0x0001078281ac(&pppuStack_78,bVar2);
          iVar5 = 0;
        }
      }
      else {
        if (uVar9 < uVar6 || uVar7 < bVar2) {
LAB_10988fc3c:
          FUN_109892a8c(&UNK_10f58233a);
          goto LAB_10988fc58;
        }
        uVar6 = bVar2 & 0x3f;
        uVar9 = uVar6 | uVar10 << 6;
        iVar11 = iVar11 + 1;
        if (iVar11 == iVar5) {
          if ((uVar10 * 0x40 & 0xffff0000) != 0) {
            func_0x0001078281ac(&pppuStack_78,(uVar10 * 0x40 + 0x3ff0000 >> 10) - 0x2800 & 0xffff);
            uVar9 = uVar6 | uVar10 << 6 & 0x3ff | 0xffffdc00;
          }
          func_0x0001078281ac(&pppuStack_78,uVar9 & 0xffff);
          iVar5 = 0;
          iVar11 = 0;
          uVar7 = 0xbf;
          uVar6 = 0x80;
          uVar10 = 0;
        }
        else {
          uVar7 = 0xbf;
          uVar6 = 0x80;
          uVar10 = uVar9;
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
    if (iVar5 != 0) {
      FUN_109892a8c(&UNK_10f58233a);
LAB_10988fc58:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988fc5c);
      (*pcVar3)();
    }
  }
  uVar1 = uStack_70;
  ppppuVar4 = (undefined8 ****)pppuStack_78;
  if (-1 < (long)uStack_68) {
    uVar1 = uStack_68 >> 0x38;
    ppppuVar4 = &pppuStack_78;
  }
  _JSStringCreateWithCharacters(ppppuVar4,uVar1);
  puVar8 = *(undefined8 **)(param_2 + 0x58);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_109892d80(param_2 + 0x38);
    puVar8 = *(undefined8 **)(param_2 + 0x58);
  }
  *(undefined8 *)(param_2 + 0x58) = *puVar8;
  puVar8[1] = param_2;
  puVar8[2] = ppppuVar4;
  *(undefined4 *)(puVar8 + 3) = 1;
  *puVar8 = &PTR_FUN_110b16e18;
  *param_1 = puVar8;
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppuStack_78);
  }
  return;
}



/* Entry: 10988fc84; end: 10988fc93;  */

void FUN_10988fc84(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar8 = *(ulong *)(*param_3 + 0x10);
  uVar6 = uVar8;
  _JSStringGetLength();
  _JSStringGetCharactersPtr();
  func_0x000104c59120(param_1,uVar6 * 3,0);
  plVar4 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar4 = param_1;
  }
  if (uVar6 == 0) {
    lVar7 = 0;
  }
  else {
    uVar12 = 0;
    lVar1 = (long)plVar4 + 1;
    lVar10 = 0;
    do {
      uVar5 = *(ushort *)(uVar8 + uVar12 * 2);
      uVar11 = (uint)uVar5;
      uVar3 = uVar5 & 0xfc00;
      if (uVar3 == 0xdc00) {
LAB_10988f6d8:
        uVar11 = 0xfffd;
LAB_10988f6dc:
        *(byte *)((long)plVar4 + lVar10) = (byte)(uVar11 >> 0xc) | 0xe0;
        *(byte *)(lVar1 + lVar10) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
        uVar11 = uVar11 & 0x3f | 0xffffff80;
        lVar7 = 3;
        plVar9 = (long *)((long)plVar4 + 2);
      }
      else {
        if (uVar3 == 0xd800) {
          uVar2 = uVar12 + 1;
          if ((uVar6 <= uVar2) ||
             (uVar11 = (uint)*(ushort *)(uVar8 + uVar2 * 2), (uVar11 & 0xfc00) != 0xdc00))
          goto LAB_10988f6d8;
          uVar11 = uVar11 + (uint)uVar5 * 0x400 + 0xfca02400;
          uVar12 = uVar2;
        }
        if (uVar11 < 0x80) {
          lVar7 = 1;
          plVar9 = plVar4;
        }
        else if (uVar11 < 0x800) {
          *(byte *)((long)plVar4 + lVar10) = (byte)(uVar11 >> 6) | 0xc0;
          uVar11 = uVar11 & 0x3f | 0xffffff80;
          lVar7 = 2;
          plVar9 = (long *)lVar1;
        }
        else {
          if (uVar11 >> 0x10 == 0) goto LAB_10988f6dc;
          *(byte *)((long)plVar4 + lVar10) = (byte)(uVar11 >> 0x12) | 0xf0;
          *(byte *)(lVar1 + lVar10) = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)plVar4 + 2 + lVar10) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          lVar7 = 4;
          uVar11 = uVar11 & 0x3f | 0xffffff80;
          plVar9 = (long *)((long)plVar4 + 3);
        }
      }
      lVar7 = lVar7 + lVar10;
      *(char *)((long)plVar9 + lVar10) = (char)uVar11;
      uVar12 = uVar12 + 1;
      lVar10 = lVar7;
    } while (uVar12 < uVar6);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,lVar7,0);
  return;
}



/* Entry: 10988fc94; end: 10988fddb;  */

long FUN_10988fc94(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_109892990(param_2);
    iVar1 = 2;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x18) + 1;
  }
  *(int *)(param_2 + 0x18) = iVar1;
  return param_2;
}



/* Entry: 10988fddc; end: 10988ffa7;  */

void FUN_10988fddc(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  plVar9 = *(long **)(param_2 + 0xa0);
  if (*(long **)(param_2 + 0xa0) == (long *)0x0) {
    uVar16 = *(ulong *)(param_2 + 0x98);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar16;
    lVar10 = uVar16 * 0x18;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      lVar10 = -1;
    }
    __Znam();
    _bzero();
    plVar9 = *(long **)(param_2 + 0x88);
    if (plVar9 < *(long **)(param_2 + 0x90)) {
      plVar7 = (long *)0x0;
      plVar11 = plVar9 + 1;
      *plVar9 = lVar10;
    }
    else {
      lVar14 = *(long *)(param_2 + 0x80);
      lVar15 = (long)plVar9 - lVar14;
      uVar1 = (lVar15 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        func_0x000109892ed0();
LAB_10988ffa0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10988ffa4);
        (*pcVar5)();
      }
      uVar8 = (long)*(long **)(param_2 + 0x90) - lVar14;
      uVar12 = (long)uVar8 >> 2;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_10988ffa0;
      }
      lVar6 = uVar12 << 3;
      __Znwm();
      plVar9 = (long *)(lVar6 + lVar15);
      plVar11 = plVar9 + 1;
      *plVar9 = lVar10;
      _memcpy(plVar9 + -(lVar15 >> 3),lVar14,lVar15);
      *(long **)(param_2 + 0x80) = plVar9 + -(lVar15 >> 3);
      *(long **)(param_2 + 0x88) = plVar11;
      *(ulong *)(param_2 + 0x90) = lVar6 + uVar12 * 8;
      if (lVar14 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        __ZdlPv(lVar14);
        uVar16 = *(ulong *)(param_2 + 0x98);
        plVar7 = *(long **)(param_2 + 0xa0);
      }
    }
    *(long **)(param_2 + 0x88) = plVar11;
    plVar9 = plVar7;
    if (uVar16 != 0) {
      plVar9 = (long *)plVar11[-1];
      plVar11 = plVar9 + uVar16 * 3;
      lVar10 = uVar16 * 0x18;
      do {
        plVar11 = plVar11 + -3;
        puVar2 = (undefined8 *)((long)plVar9 + lVar10 + -0x18);
        *puVar2 = plVar7;
        *(undefined8 **)(param_2 + 0xa0) = puVar2;
        lVar10 = lVar10 + -0x18;
        plVar7 = plVar11;
      } while (lVar10 != 0);
    }
  }
  *(long *)(param_2 + 0xa0) = *plVar9;
  *plVar9 = param_2;
  lVar10 = *param_3;
  plVar9[2] = param_3[1];
  plVar9[1] = lVar10;
  *param_3 = 0;
  param_3[1] = 0;
  _JSObjectMake(uVar13,uVar3);
  lVar10 = param_2 + 0x10;
  FUN_10988e404(lVar10,param_2,uVar13,0);
  *param_1 = lVar10;
  return;
}



/* Entry: 10988ffa8; end: 10989003b;  */

void FUN_10988ffa8(long *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10988fddc(param_2,&uStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectSetPrototype_110346ee0)
            (*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(*param_1 + 0x10),
             *(undefined8 *)(*(long *)(param_4 + 8) + 0x10));
  return;
}



/* Entry: 10989003c; end: 10989004f;  */

void FUN_10989003c(void)

{
  code *pcVar1;
  
  FUN_109892a8c(&UNK_10f5822c8);
  FUN_109892a8c(&UNK_10f5822c8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109890068);
  (*pcVar1)();
}



/* Entry: 109890050; end: 10989006b;  */

void FUN_109890050(void)

{
  code *pcVar1;
  
  FUN_109892a8c(&UNK_10f5822c8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109890068);
  (*pcVar1)();
}



/* Entry: 10989006c; end: 10989007f;  */

void FUN_10989006c(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *extraout_x8_01;
  long *plVar14;
  undefined4 *extraout_x8_02;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plStack_128;
  long *plStack_b8;
  long lStack_b0;
  undefined1 ****ppppuStack_a0;
  code *pcStack_98;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar2 = &UNK_10f5822c8;
  FUN_109892a8c();
  pcStack_18 = FUN_109890080;
  uVar15 = *(undefined8 *)(puVar2 + 0x108);
  uVar16 = *(undefined8 *)(*param_3 + 0x10);
  iVar1 = (int)*param_4;
  uVar12 = uVar15;
  if (3 < iVar1) {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        puStack_20 = &stack0xfffffffffffffff0;
        _JSValueMakeString(uVar15,*(undefined8 *)(param_4[1] + 0x10));
        goto LAB_10989013c;
      }
      if (iVar1 != 7) goto LAB_109890150;
    }
    uVar12 = *(undefined8 *)(param_4[1] + 0x10);
    puStack_20 = &stack0xfffffffffffffff0;
LAB_10989013c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbc1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__JSObjectSetPrototype_110346ee0)(uVar15,uVar16,uVar12);
    return;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      _JSValueMakeUndefined(uVar15);
      goto LAB_10989013c;
    }
    if (iVar1 == 1) {
      puStack_20 = &stack0xfffffffffffffff0;
      _JSValueMakeNull(uVar15);
      goto LAB_10989013c;
    }
  }
  else {
    if (iVar1 == 2) {
      puStack_20 = &stack0xfffffffffffffff0;
      _JSValueMakeBoolean(uVar15,(char)param_4[1]);
      goto LAB_10989013c;
    }
    if (iVar1 == 3) {
      puStack_20 = &stack0xfffffffffffffff0;
      _JSValueMakeNumber(param_4[1],uVar15);
      goto LAB_10989013c;
    }
  }
LAB_109890150:
  puStack_20 = &stack0xfffffffffffffff0;
  _abort();
  pcStack_38 = FUN_109890154;
  plVar3 = *(long **)(puVar2 + 0x108);
  ppuStack_40 = &puStack_20;
  _JSObjectGetPrototype(plVar3,*(undefined8 *)(*param_3 + 0x10));
  lVar4 = *(long *)(puVar2 + 0x108);
  plVar7 = plVar3;
  _JSValueGetType();
  iVar1 = (int)lVar4;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar12 = *(undefined8 *)(puVar2 + 0x108);
        _JSValueToBoolean(uVar12,plVar3);
        *extraout_x8 = 2;
        *(char *)(extraout_x8 + 2) = (char)uVar12;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(*(undefined8 *)(puVar2 + 0x108),plVar3,0);
        *extraout_x8 = 3;
        *(long *)(extraout_x8 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar12 = *(undefined8 *)(puVar2 + 0x108);
      _JSValueToStringCopy(uVar12,plVar3,0);
      puVar13 = *(undefined8 **)(puVar2 + 0x58);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_109892d80(puVar2 + 0x38);
        puVar13 = *(undefined8 **)(puVar2 + 0x58);
      }
      *(undefined8 *)(puVar2 + 0x58) = *puVar13;
      puVar13[1] = puVar2;
      puVar13[2] = uVar12;
      *(undefined4 *)(puVar13 + 3) = 1;
      *puVar13 = &PTR_FUN_110b16e18;
      *extraout_x8 = 6;
      *(undefined8 **)(extraout_x8 + 2) = puVar13;
      return;
    }
    if (iVar1 == 5) {
      puVar5 = puVar2 + 0x10;
      FUN_1098927b8(puVar5,puVar2,plVar3,0);
      uVar11 = 7;
      goto LAB_1098902d8;
    }
  }
  else {
    if (iVar1 == 6) {
      puVar5 = puVar2 + 0x10;
      FUN_1098927b8(puVar5,puVar2,plVar3,0);
      uVar11 = 4;
LAB_1098902d8:
      *extraout_x8 = uVar11;
      *(undefined **)(extraout_x8 + 2) = puVar5;
      return;
    }
    if (iVar1 == 7) {
      puVar5 = puVar2 + 0x10;
      FUN_1098927b8(puVar5,puVar2,plVar3,0);
      uVar11 = 5;
      goto LAB_1098902d8;
    }
  }
  _abort();
  uStack_68 = 0x1098902f4;
  uVar12 = *(undefined8 *)(*plVar7 + 0x10);
  uVar15 = *(undefined8 *)(*param_4 + 0x10);
  lVar6 = lVar4;
  pppuStack_70 = &ppuStack_40;
  FUN_1098904a0();
  plVar7 = *(long **)(lVar4 + 0x108);
  lVar8 = lVar6;
  _JSValueGetType(plVar7,lVar6);
  iVar1 = (int)plVar7;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8_00 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8_00 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar12 = *(undefined8 *)(lVar4 + 0x108);
        _JSValueToBoolean(uVar12,lVar6);
        *extraout_x8_00 = 2;
        *(char *)(extraout_x8_00 + 2) = (char)uVar12;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(*(undefined8 *)(lVar4 + 0x108),lVar6,0);
        *extraout_x8_00 = 3;
        *(long *)(extraout_x8_00 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar12 = *(undefined8 *)(lVar4 + 0x108);
      _JSValueToStringCopy(uVar12,lVar6,0);
      puVar13 = *(undefined8 **)(lVar4 + 0x58);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_109892d80(lVar4 + 0x38);
        puVar13 = *(undefined8 **)(lVar4 + 0x58);
      }
      *(undefined8 *)(lVar4 + 0x58) = *puVar13;
      puVar13[1] = lVar4;
      puVar13[2] = uVar12;
      *(undefined4 *)(puVar13 + 3) = 1;
      *puVar13 = &PTR_FUN_110b16e18;
      *extraout_x8_00 = 6;
      *(undefined8 **)(extraout_x8_00 + 2) = puVar13;
      return;
    }
    if (iVar1 == 5) {
      lVar8 = lVar4 + 0x10;
      FUN_1098927b8(lVar8,lVar4,lVar6,0);
      uVar11 = 7;
      goto LAB_109890484;
    }
  }
  else {
    if (iVar1 == 6) {
      lVar8 = lVar4 + 0x10;
      FUN_1098927b8(lVar8,lVar4,lVar6,0);
      uVar11 = 4;
LAB_109890484:
      *extraout_x8_00 = uVar11;
      *(long *)(extraout_x8_00 + 2) = lVar8;
      return;
    }
    if (iVar1 == 7) {
      lVar8 = lVar4 + 0x10;
      FUN_1098927b8(lVar8,lVar4,lVar6,0);
      uVar11 = 5;
      goto LAB_109890484;
    }
  }
  _abort();
  pcStack_98 = FUN_1098904a0;
  plStack_b8 = (long *)0x0;
  lStack_b0 = lVar4;
  ppppuStack_a0 = &pppuStack_70;
  _JSObjectGetProperty(lVar8,uVar12,uVar15,&plStack_b8);
  if (plStack_b8 == (long *)0x0) {
    return;
  }
  plVar3 = plStack_b8;
  FUN_109890ee0();
  plVar14 = *(long **)(*plVar3 + 0x10);
  plVar3 = plVar7;
  FUN_1098904a0();
  plVar9 = (long *)plVar7[0x21];
  plVar10 = plVar3;
  _JSValueGetType();
  iVar1 = (int)plVar9;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8_01 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8_01 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        lVar4 = plVar7[0x21];
        _JSValueToBoolean(lVar4,plVar3);
        *extraout_x8_01 = 2;
        *(char *)(extraout_x8_01 + 2) = (char)lVar4;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(plVar7[0x21],plVar3,0);
        *extraout_x8_01 = 3;
        *(long *)(extraout_x8_01 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar4 = plVar7[0x21];
      _JSValueToStringCopy(lVar4,plVar3,0);
      plVar3 = (long *)plVar7[0xb];
      if (plVar3 == (long *)0x0) {
        FUN_109892d80(plVar7 + 7);
        plVar3 = (long *)plVar7[0xb];
      }
      plVar7[0xb] = *plVar3;
      plVar3[1] = (long)plVar7;
      plVar3[2] = lVar4;
      *(undefined4 *)(plVar3 + 3) = 1;
      *plVar3 = (long)&PTR_FUN_110b16e18;
      *extraout_x8_01 = 6;
      *(long **)(extraout_x8_01 + 2) = plVar3;
      return;
    }
    if (iVar1 == 5) {
      plVar10 = plVar7 + 2;
      FUN_1098927b8(plVar10,plVar7,plVar3,0);
      uVar11 = 7;
      goto LAB_109890680;
    }
  }
  else {
    if (iVar1 == 6) {
      plVar10 = plVar7 + 2;
      FUN_1098927b8(plVar10,plVar7,plVar3,0);
      uVar11 = 4;
LAB_109890680:
      *extraout_x8_01 = uVar11;
      *(long **)(extraout_x8_01 + 2) = plVar10;
      return;
    }
    if (iVar1 == 7) {
      plVar10 = plVar7 + 2;
      FUN_1098927b8(plVar10,plVar7,plVar3,0);
      uVar11 = 5;
      goto LAB_109890680;
    }
  }
  _abort();
  uVar12 = *(undefined8 *)(*plVar10 + 0x10);
  plVar7 = (long *)plVar9[0x21];
  iVar1 = (int)*plVar14;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        plVar14 = plVar7;
      }
      else {
        if (iVar1 != 1) goto LAB_1098908f0;
        _JSValueMakeNull();
        plVar14 = plVar7;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar7,(char)plVar14[1]);
      plVar14 = plVar7;
    }
    else {
      if (iVar1 != 3) goto LAB_1098908f0;
      param_1 = plVar14[1];
      _JSValueMakeNumber();
      plVar14 = plVar7;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar7,*(undefined8 *)(plVar14[1] + 0x10));
        plVar14 = plVar7;
        goto LAB_109890754;
      }
      if (iVar1 != 7) goto LAB_1098908f0;
    }
    plVar14 = *(long **)(plVar14[1] + 0x10);
  }
LAB_109890754:
  plVar3 = (long *)plVar9[0x21];
  plStack_128 = (long *)0x0;
  _JSObjectGetPropertyForKey(plVar3,uVar12,plVar14,&plStack_128);
  if (plStack_128 == (long *)0x0) {
    plVar7 = (long *)plVar9[0x21];
    plVar10 = plVar3;
    _JSValueGetType();
    iVar1 = (int)plVar7;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8_02 = 0;
        }
        else {
          if (iVar1 != 1) goto LAB_1098908f0;
          *extraout_x8_02 = 1;
        }
      }
      else if (iVar1 == 2) {
        lVar4 = plVar9[0x21];
        _JSValueToBoolean(lVar4,plVar3);
        *extraout_x8_02 = 2;
        *(char *)(extraout_x8_02 + 2) = (char)lVar4;
      }
      else {
        if (iVar1 != 3) goto LAB_1098908f0;
        _JSValueToNumber(plVar9[0x21],plVar3,0);
        *extraout_x8_02 = 3;
        *(long *)(extraout_x8_02 + 2) = param_1;
      }
    }
    else {
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          lVar4 = plVar9[0x21];
          _JSValueToStringCopy(lVar4,plVar3,0);
          plVar7 = (long *)plVar9[0xb];
          if (plVar7 == (long *)0x0) {
            FUN_109892d80(plVar9 + 7);
            plVar7 = (long *)plVar9[0xb];
          }
          plVar9[0xb] = *plVar7;
          plVar7[1] = (long)plVar9;
          plVar7[2] = lVar4;
          *(undefined4 *)(plVar7 + 3) = 1;
          *plVar7 = (long)&PTR_FUN_110b16e18;
          *extraout_x8_02 = 6;
          *(long **)(extraout_x8_02 + 2) = plVar7;
          return;
        }
        if (iVar1 != 5) goto LAB_1098908f0;
        plVar7 = plVar9 + 2;
        FUN_1098927b8(plVar7,plVar9,plVar3,0);
        uVar11 = 7;
      }
      else if (iVar1 == 6) {
        plVar7 = plVar9 + 2;
        FUN_1098927b8(plVar7,plVar9,plVar3,0);
        uVar11 = 4;
      }
      else {
        if (iVar1 != 7) goto LAB_1098908f0;
        plVar7 = plVar9 + 2;
        FUN_1098927b8(plVar7,plVar9,plVar3,0);
        uVar11 = 5;
      }
      *extraout_x8_02 = uVar11;
      *(long **)(extraout_x8_02 + 2) = plVar7;
    }
    return;
  }
  plVar10 = plStack_128;
  FUN_109890ee0();
  plVar7 = plVar9;
LAB_1098908f0:
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)
            (plVar7[0x21],*(undefined8 *)(*plVar10 + 0x10),*(undefined8 *)(*plVar14 + 0x10));
  return;
}



/* Entry: 109890080; end: 109890153;  */

void FUN_109890080(long param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *extraout_x8_01;
  long *plVar12;
  undefined4 *extraout_x8_02;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plStack_118;
  long *plStack_a8;
  long lStack_a0;
  undefined1 ***pppuStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  uVar14 = *(undefined8 *)(*param_3 + 0x10);
  iVar1 = (int)*param_4;
  uVar10 = uVar13;
  if (3 < iVar1) {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(uVar13,*(undefined8 *)(param_4[1] + 0x10));
        goto LAB_10989013c;
      }
      if (iVar1 != 7) goto LAB_109890150;
    }
    uVar10 = *(undefined8 *)(param_4[1] + 0x10);
LAB_10989013c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbc1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__JSObjectSetPrototype_110346ee0)(uVar13,uVar14,uVar10);
    return;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      _JSValueMakeUndefined(uVar13);
      goto LAB_10989013c;
    }
    if (iVar1 == 1) {
      _JSValueMakeNull(uVar13);
      goto LAB_10989013c;
    }
  }
  else {
    if (iVar1 == 2) {
      _JSValueMakeBoolean(uVar13,(char)param_4[1]);
      goto LAB_10989013c;
    }
    if (iVar1 == 3) {
      _JSValueMakeNumber(param_4[1],uVar13);
      goto LAB_10989013c;
    }
  }
LAB_109890150:
  _abort();
  pcStack_28 = FUN_109890154;
  plVar2 = *(long **)(param_2 + 0x108);
  puStack_30 = &stack0xfffffffffffffff0;
  _JSObjectGetPrototype(plVar2,*(undefined8 *)(*param_3 + 0x10));
  lVar3 = *(long *)(param_2 + 0x108);
  plVar5 = plVar2;
  _JSValueGetType();
  iVar1 = (int)lVar3;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar10 = *(undefined8 *)(param_2 + 0x108);
        _JSValueToBoolean(uVar10,plVar2);
        *extraout_x8 = 2;
        *(char *)(extraout_x8 + 2) = (char)uVar10;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(*(undefined8 *)(param_2 + 0x108),plVar2,0);
        *extraout_x8 = 3;
        *(long *)(extraout_x8 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar10 = *(undefined8 *)(param_2 + 0x108);
      _JSValueToStringCopy(uVar10,plVar2,0);
      puVar11 = *(undefined8 **)(param_2 + 0x58);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_109892d80(param_2 + 0x38);
        puVar11 = *(undefined8 **)(param_2 + 0x58);
      }
      *(undefined8 *)(param_2 + 0x58) = *puVar11;
      puVar11[1] = param_2;
      puVar11[2] = uVar10;
      *(undefined4 *)(puVar11 + 3) = 1;
      *puVar11 = &PTR_FUN_110b16e18;
      *extraout_x8 = 6;
      *(undefined8 **)(extraout_x8 + 2) = puVar11;
      return;
    }
    if (iVar1 == 5) {
      lVar3 = param_2 + 0x10;
      FUN_1098927b8(lVar3,param_2,plVar2,0);
      uVar9 = 7;
      goto LAB_1098902d8;
    }
  }
  else {
    if (iVar1 == 6) {
      lVar3 = param_2 + 0x10;
      FUN_1098927b8(lVar3,param_2,plVar2,0);
      uVar9 = 4;
LAB_1098902d8:
      *extraout_x8 = uVar9;
      *(long *)(extraout_x8 + 2) = lVar3;
      return;
    }
    if (iVar1 == 7) {
      lVar3 = param_2 + 0x10;
      FUN_1098927b8(lVar3,param_2,plVar2,0);
      uVar9 = 5;
      goto LAB_1098902d8;
    }
  }
  _abort();
  uStack_58 = 0x1098902f4;
  uVar10 = *(undefined8 *)(*plVar5 + 0x10);
  uVar13 = *(undefined8 *)(*param_4 + 0x10);
  lVar4 = lVar3;
  ppuStack_60 = &puStack_30;
  FUN_1098904a0();
  plVar5 = *(long **)(lVar3 + 0x108);
  lVar6 = lVar4;
  _JSValueGetType(plVar5,lVar4);
  iVar1 = (int)plVar5;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8_00 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8_00 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar10 = *(undefined8 *)(lVar3 + 0x108);
        _JSValueToBoolean(uVar10,lVar4);
        *extraout_x8_00 = 2;
        *(char *)(extraout_x8_00 + 2) = (char)uVar10;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(*(undefined8 *)(lVar3 + 0x108),lVar4,0);
        *extraout_x8_00 = 3;
        *(long *)(extraout_x8_00 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar10 = *(undefined8 *)(lVar3 + 0x108);
      _JSValueToStringCopy(uVar10,lVar4,0);
      puVar11 = *(undefined8 **)(lVar3 + 0x58);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_109892d80(lVar3 + 0x38);
        puVar11 = *(undefined8 **)(lVar3 + 0x58);
      }
      *(undefined8 *)(lVar3 + 0x58) = *puVar11;
      puVar11[1] = lVar3;
      puVar11[2] = uVar10;
      *(undefined4 *)(puVar11 + 3) = 1;
      *puVar11 = &PTR_FUN_110b16e18;
      *extraout_x8_00 = 6;
      *(undefined8 **)(extraout_x8_00 + 2) = puVar11;
      return;
    }
    if (iVar1 == 5) {
      lVar6 = lVar3 + 0x10;
      FUN_1098927b8(lVar6,lVar3,lVar4,0);
      uVar9 = 7;
      goto LAB_109890484;
    }
  }
  else {
    if (iVar1 == 6) {
      lVar6 = lVar3 + 0x10;
      FUN_1098927b8(lVar6,lVar3,lVar4,0);
      uVar9 = 4;
LAB_109890484:
      *extraout_x8_00 = uVar9;
      *(long *)(extraout_x8_00 + 2) = lVar6;
      return;
    }
    if (iVar1 == 7) {
      lVar6 = lVar3 + 0x10;
      FUN_1098927b8(lVar6,lVar3,lVar4,0);
      uVar9 = 5;
      goto LAB_109890484;
    }
  }
  _abort();
  pcStack_88 = FUN_1098904a0;
  plStack_a8 = (long *)0x0;
  lStack_a0 = lVar3;
  pppuStack_90 = &ppuStack_60;
  _JSObjectGetProperty(lVar6,uVar10,uVar13,&plStack_a8);
  if (plStack_a8 == (long *)0x0) {
    return;
  }
  plVar2 = plStack_a8;
  FUN_109890ee0();
  plVar12 = *(long **)(*plVar2 + 0x10);
  plVar2 = plVar5;
  FUN_1098904a0();
  plVar7 = (long *)plVar5[0x21];
  plVar8 = plVar2;
  _JSValueGetType();
  iVar1 = (int)plVar7;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8_01 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8_01 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        lVar3 = plVar5[0x21];
        _JSValueToBoolean(lVar3,plVar2);
        *extraout_x8_01 = 2;
        *(char *)(extraout_x8_01 + 2) = (char)lVar3;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(plVar5[0x21],plVar2,0);
        *extraout_x8_01 = 3;
        *(long *)(extraout_x8_01 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar3 = plVar5[0x21];
      _JSValueToStringCopy(lVar3,plVar2,0);
      plVar2 = (long *)plVar5[0xb];
      if (plVar2 == (long *)0x0) {
        FUN_109892d80(plVar5 + 7);
        plVar2 = (long *)plVar5[0xb];
      }
      plVar5[0xb] = *plVar2;
      plVar2[1] = (long)plVar5;
      plVar2[2] = lVar3;
      *(undefined4 *)(plVar2 + 3) = 1;
      *plVar2 = (long)&PTR_FUN_110b16e18;
      *extraout_x8_01 = 6;
      *(long **)(extraout_x8_01 + 2) = plVar2;
      return;
    }
    if (iVar1 == 5) {
      plVar8 = plVar5 + 2;
      FUN_1098927b8(plVar8,plVar5,plVar2,0);
      uVar9 = 7;
      goto LAB_109890680;
    }
  }
  else {
    if (iVar1 == 6) {
      plVar8 = plVar5 + 2;
      FUN_1098927b8(plVar8,plVar5,plVar2,0);
      uVar9 = 4;
LAB_109890680:
      *extraout_x8_01 = uVar9;
      *(long **)(extraout_x8_01 + 2) = plVar8;
      return;
    }
    if (iVar1 == 7) {
      plVar8 = plVar5 + 2;
      FUN_1098927b8(plVar8,plVar5,plVar2,0);
      uVar9 = 5;
      goto LAB_109890680;
    }
  }
  _abort();
  uVar10 = *(undefined8 *)(*plVar8 + 0x10);
  plVar5 = (long *)plVar7[0x21];
  iVar1 = (int)*plVar12;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        plVar12 = plVar5;
      }
      else {
        if (iVar1 != 1) goto LAB_1098908f0;
        _JSValueMakeNull();
        plVar12 = plVar5;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar5,(char)plVar12[1]);
      plVar12 = plVar5;
    }
    else {
      if (iVar1 != 3) goto LAB_1098908f0;
      param_1 = plVar12[1];
      _JSValueMakeNumber();
      plVar12 = plVar5;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar5,*(undefined8 *)(plVar12[1] + 0x10));
        plVar12 = plVar5;
        goto LAB_109890754;
      }
      if (iVar1 != 7) goto LAB_1098908f0;
    }
    plVar12 = *(long **)(plVar12[1] + 0x10);
  }
LAB_109890754:
  plVar2 = (long *)plVar7[0x21];
  plStack_118 = (long *)0x0;
  _JSObjectGetPropertyForKey(plVar2,uVar10,plVar12,&plStack_118);
  if (plStack_118 == (long *)0x0) {
    plVar5 = (long *)plVar7[0x21];
    plVar8 = plVar2;
    _JSValueGetType();
    iVar1 = (int)plVar5;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8_02 = 0;
        }
        else {
          if (iVar1 != 1) goto LAB_1098908f0;
          *extraout_x8_02 = 1;
        }
      }
      else if (iVar1 == 2) {
        lVar3 = plVar7[0x21];
        _JSValueToBoolean(lVar3,plVar2);
        *extraout_x8_02 = 2;
        *(char *)(extraout_x8_02 + 2) = (char)lVar3;
      }
      else {
        if (iVar1 != 3) goto LAB_1098908f0;
        _JSValueToNumber(plVar7[0x21],plVar2,0);
        *extraout_x8_02 = 3;
        *(long *)(extraout_x8_02 + 2) = param_1;
      }
    }
    else {
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          lVar3 = plVar7[0x21];
          _JSValueToStringCopy(lVar3,plVar2,0);
          plVar5 = (long *)plVar7[0xb];
          if (plVar5 == (long *)0x0) {
            FUN_109892d80(plVar7 + 7);
            plVar5 = (long *)plVar7[0xb];
          }
          plVar7[0xb] = *plVar5;
          plVar5[1] = (long)plVar7;
          plVar5[2] = lVar3;
          *(undefined4 *)(plVar5 + 3) = 1;
          *plVar5 = (long)&PTR_FUN_110b16e18;
          *extraout_x8_02 = 6;
          *(long **)(extraout_x8_02 + 2) = plVar5;
          return;
        }
        if (iVar1 != 5) goto LAB_1098908f0;
        plVar5 = plVar7 + 2;
        FUN_1098927b8(plVar5,plVar7,plVar2,0);
        uVar9 = 7;
      }
      else if (iVar1 == 6) {
        plVar5 = plVar7 + 2;
        FUN_1098927b8(plVar5,plVar7,plVar2,0);
        uVar9 = 4;
      }
      else {
        if (iVar1 != 7) goto LAB_1098908f0;
        plVar5 = plVar7 + 2;
        FUN_1098927b8(plVar5,plVar7,plVar2,0);
        uVar9 = 5;
      }
      *extraout_x8_02 = uVar9;
      *(long **)(extraout_x8_02 + 2) = plVar5;
    }
    return;
  }
  plVar8 = plStack_118;
  FUN_109890ee0();
  plVar5 = plVar7;
LAB_1098908f0:
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)
            (plVar5[0x21],*(undefined8 *)(*plVar8 + 0x10),*(undefined8 *)(*plVar12 + 0x10));
  return;
}



/* Entry: 109890154; end: 10989049f;  */

void FUN_109890154(undefined4 *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *extraout_x8;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *extraout_x8_00;
  long *plVar13;
  undefined4 *extraout_x8_01;
  long *plStack_f8;
  long *plStack_88;
  long lStack_80;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  plVar2 = *(long **)(param_3 + 0x108);
  _JSObjectGetPrototype(plVar2,*(undefined8 *)(*param_4 + 0x10));
  lVar3 = *(long *)(param_3 + 0x108);
  plVar5 = plVar2;
  _JSValueGetType();
  iVar1 = (int)lVar3;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *param_1 = 0;
        return;
      }
      if (iVar1 == 1) {
        *param_1 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar11 = *(undefined8 *)(param_3 + 0x108);
        _JSValueToBoolean(uVar11,plVar2);
        *param_1 = 2;
        *(char *)(param_1 + 2) = (char)uVar11;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(*(undefined8 *)(param_3 + 0x108),plVar2,0);
        *param_1 = 3;
        *(long *)(param_1 + 2) = param_2;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar11 = *(undefined8 *)(param_3 + 0x108);
      _JSValueToStringCopy(uVar11,plVar2,0);
      puVar12 = *(undefined8 **)(param_3 + 0x58);
      if (puVar12 == (undefined8 *)0x0) {
        FUN_109892d80(param_3 + 0x38);
        puVar12 = *(undefined8 **)(param_3 + 0x58);
      }
      *(undefined8 *)(param_3 + 0x58) = *puVar12;
      puVar12[1] = param_3;
      puVar12[2] = uVar11;
      *(undefined4 *)(puVar12 + 3) = 1;
      *puVar12 = &PTR_FUN_110b16e18;
      *param_1 = 6;
      *(undefined8 **)(param_1 + 2) = puVar12;
      return;
    }
    if (iVar1 == 5) {
      lVar3 = param_3 + 0x10;
      FUN_1098927b8(lVar3,param_3,plVar2,0);
      uVar10 = 7;
      goto LAB_1098902d8;
    }
  }
  else {
    if (iVar1 == 6) {
      lVar3 = param_3 + 0x10;
      FUN_1098927b8(lVar3,param_3,plVar2,0);
      uVar10 = 4;
LAB_1098902d8:
      *param_1 = uVar10;
      *(long *)(param_1 + 2) = lVar3;
      return;
    }
    if (iVar1 == 7) {
      lVar3 = param_3 + 0x10;
      FUN_1098927b8(lVar3,param_3,plVar2,0);
      uVar10 = 5;
      goto LAB_1098902d8;
    }
  }
  _abort();
  uStack_38 = 0x1098902f4;
  uVar11 = *(undefined8 *)(*plVar5 + 0x10);
  uVar9 = *(undefined8 *)(*param_5 + 0x10);
  lVar4 = lVar3;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_1098904a0();
  plVar5 = *(long **)(lVar3 + 0x108);
  lVar6 = lVar4;
  _JSValueGetType(plVar5,lVar4);
  iVar1 = (int)plVar5;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar11 = *(undefined8 *)(lVar3 + 0x108);
        _JSValueToBoolean(uVar11,lVar4);
        *extraout_x8 = 2;
        *(char *)(extraout_x8 + 2) = (char)uVar11;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(*(undefined8 *)(lVar3 + 0x108),lVar4,0);
        *extraout_x8 = 3;
        *(long *)(extraout_x8 + 2) = param_2;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      uVar11 = *(undefined8 *)(lVar3 + 0x108);
      _JSValueToStringCopy(uVar11,lVar4,0);
      puVar12 = *(undefined8 **)(lVar3 + 0x58);
      if (puVar12 == (undefined8 *)0x0) {
        FUN_109892d80(lVar3 + 0x38);
        puVar12 = *(undefined8 **)(lVar3 + 0x58);
      }
      *(undefined8 *)(lVar3 + 0x58) = *puVar12;
      puVar12[1] = lVar3;
      puVar12[2] = uVar11;
      *(undefined4 *)(puVar12 + 3) = 1;
      *puVar12 = &PTR_FUN_110b16e18;
      *extraout_x8 = 6;
      *(undefined8 **)(extraout_x8 + 2) = puVar12;
      return;
    }
    if (iVar1 == 5) {
      lVar6 = lVar3 + 0x10;
      FUN_1098927b8(lVar6,lVar3,lVar4,0);
      uVar10 = 7;
      goto LAB_109890484;
    }
  }
  else {
    if (iVar1 == 6) {
      lVar6 = lVar3 + 0x10;
      FUN_1098927b8(lVar6,lVar3,lVar4,0);
      uVar10 = 4;
LAB_109890484:
      *extraout_x8 = uVar10;
      *(long *)(extraout_x8 + 2) = lVar6;
      return;
    }
    if (iVar1 == 7) {
      lVar6 = lVar3 + 0x10;
      FUN_1098927b8(lVar6,lVar3,lVar4,0);
      uVar10 = 5;
      goto LAB_109890484;
    }
  }
  _abort();
  pcStack_68 = FUN_1098904a0;
  plStack_88 = (long *)0x0;
  lStack_80 = lVar3;
  ppuStack_70 = &puStack_40;
  _JSObjectGetProperty(lVar6,uVar11,uVar9,&plStack_88);
  if (plStack_88 == (long *)0x0) {
    return;
  }
  plVar2 = plStack_88;
  FUN_109890ee0();
  plVar13 = *(long **)(*plVar2 + 0x10);
  plVar2 = plVar5;
  FUN_1098904a0();
  plVar7 = (long *)plVar5[0x21];
  plVar8 = plVar2;
  _JSValueGetType();
  iVar1 = (int)plVar7;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8_00 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8_00 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        lVar3 = plVar5[0x21];
        _JSValueToBoolean(lVar3,plVar2);
        *extraout_x8_00 = 2;
        *(char *)(extraout_x8_00 + 2) = (char)lVar3;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(plVar5[0x21],plVar2,0);
        *extraout_x8_00 = 3;
        *(long *)(extraout_x8_00 + 2) = param_2;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar3 = plVar5[0x21];
      _JSValueToStringCopy(lVar3,plVar2,0);
      plVar2 = (long *)plVar5[0xb];
      if (plVar2 == (long *)0x0) {
        FUN_109892d80(plVar5 + 7);
        plVar2 = (long *)plVar5[0xb];
      }
      plVar5[0xb] = *plVar2;
      plVar2[1] = (long)plVar5;
      plVar2[2] = lVar3;
      *(undefined4 *)(plVar2 + 3) = 1;
      *plVar2 = (long)&PTR_FUN_110b16e18;
      *extraout_x8_00 = 6;
      *(long **)(extraout_x8_00 + 2) = plVar2;
      return;
    }
    if (iVar1 == 5) {
      plVar8 = plVar5 + 2;
      FUN_1098927b8(plVar8,plVar5,plVar2,0);
      uVar10 = 7;
      goto LAB_109890680;
    }
  }
  else {
    if (iVar1 == 6) {
      plVar8 = plVar5 + 2;
      FUN_1098927b8(plVar8,plVar5,plVar2,0);
      uVar10 = 4;
LAB_109890680:
      *extraout_x8_00 = uVar10;
      *(long **)(extraout_x8_00 + 2) = plVar8;
      return;
    }
    if (iVar1 == 7) {
      plVar8 = plVar5 + 2;
      FUN_1098927b8(plVar8,plVar5,plVar2,0);
      uVar10 = 5;
      goto LAB_109890680;
    }
  }
  _abort();
  uVar11 = *(undefined8 *)(*plVar8 + 0x10);
  plVar5 = (long *)plVar7[0x21];
  iVar1 = (int)*plVar13;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        plVar13 = plVar5;
      }
      else {
        if (iVar1 != 1) goto LAB_1098908f0;
        _JSValueMakeNull();
        plVar13 = plVar5;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar5,(char)plVar13[1]);
      plVar13 = plVar5;
    }
    else {
      if (iVar1 != 3) goto LAB_1098908f0;
      param_2 = plVar13[1];
      _JSValueMakeNumber();
      plVar13 = plVar5;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar5,*(undefined8 *)(plVar13[1] + 0x10));
        plVar13 = plVar5;
        goto LAB_109890754;
      }
      if (iVar1 != 7) goto LAB_1098908f0;
    }
    plVar13 = *(long **)(plVar13[1] + 0x10);
  }
LAB_109890754:
  plVar2 = (long *)plVar7[0x21];
  plStack_f8 = (long *)0x0;
  _JSObjectGetPropertyForKey(plVar2,uVar11,plVar13,&plStack_f8);
  if (plStack_f8 == (long *)0x0) {
    plVar5 = (long *)plVar7[0x21];
    plVar8 = plVar2;
    _JSValueGetType();
    iVar1 = (int)plVar5;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8_01 = 0;
        }
        else {
          if (iVar1 != 1) goto LAB_1098908f0;
          *extraout_x8_01 = 1;
        }
      }
      else if (iVar1 == 2) {
        lVar3 = plVar7[0x21];
        _JSValueToBoolean(lVar3,plVar2);
        *extraout_x8_01 = 2;
        *(char *)(extraout_x8_01 + 2) = (char)lVar3;
      }
      else {
        if (iVar1 != 3) goto LAB_1098908f0;
        _JSValueToNumber(plVar7[0x21],plVar2,0);
        *extraout_x8_01 = 3;
        *(long *)(extraout_x8_01 + 2) = param_2;
      }
    }
    else {
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          lVar3 = plVar7[0x21];
          _JSValueToStringCopy(lVar3,plVar2,0);
          plVar5 = (long *)plVar7[0xb];
          if (plVar5 == (long *)0x0) {
            FUN_109892d80(plVar7 + 7);
            plVar5 = (long *)plVar7[0xb];
          }
          plVar7[0xb] = *plVar5;
          plVar5[1] = (long)plVar7;
          plVar5[2] = lVar3;
          *(undefined4 *)(plVar5 + 3) = 1;
          *plVar5 = (long)&PTR_FUN_110b16e18;
          *extraout_x8_01 = 6;
          *(long **)(extraout_x8_01 + 2) = plVar5;
          return;
        }
        if (iVar1 != 5) goto LAB_1098908f0;
        plVar5 = plVar7 + 2;
        FUN_1098927b8(plVar5,plVar7,plVar2,0);
        uVar10 = 7;
      }
      else if (iVar1 == 6) {
        plVar5 = plVar7 + 2;
        FUN_1098927b8(plVar5,plVar7,plVar2,0);
        uVar10 = 4;
      }
      else {
        if (iVar1 != 7) goto LAB_1098908f0;
        plVar5 = plVar7 + 2;
        FUN_1098927b8(plVar5,plVar7,plVar2,0);
        uVar10 = 5;
      }
      *extraout_x8_01 = uVar10;
      *(long **)(extraout_x8_01 + 2) = plVar5;
    }
    return;
  }
  plVar8 = plStack_f8;
  FUN_109890ee0();
  plVar5 = plVar7;
LAB_1098908f0:
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)
            (plVar5[0x21],*(undefined8 *)(*plVar8 + 0x10),*(undefined8 *)(*plVar13 + 0x10));
  return;
}



/* Entry: 1098904a0; end: 1098904ef;  */

void FUN_1098904a0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 *extraout_x8;
  long *plVar8;
  undefined4 *extraout_x8_00;
  undefined8 uVar9;
  long *plStack_98;
  long *plStack_28;
  
  plStack_28 = (long *)0x0;
  _JSObjectGetProperty(param_3,param_4,param_5,&plStack_28);
  if (plStack_28 == (long *)0x0) {
    return;
  }
  plVar4 = plStack_28;
  FUN_109890ee0();
  plVar8 = *(long **)(*plVar4 + 0x10);
  plVar4 = param_2;
  FUN_1098904a0();
  plVar2 = (long *)param_2[0x21];
  plVar3 = plVar4;
  _JSValueGetType();
  iVar1 = (int)plVar2;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *extraout_x8 = 0;
        return;
      }
      if (iVar1 == 1) {
        *extraout_x8 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        lVar6 = param_2[0x21];
        _JSValueToBoolean(lVar6,plVar4);
        *extraout_x8 = 2;
        *(char *)(extraout_x8 + 2) = (char)lVar6;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(param_2[0x21],plVar4,0);
        *extraout_x8 = 3;
        *(long *)(extraout_x8 + 2) = param_1;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar6 = param_2[0x21];
      _JSValueToStringCopy(lVar6,plVar4,0);
      plVar4 = (long *)param_2[0xb];
      if (plVar4 == (long *)0x0) {
        FUN_109892d80(param_2 + 7);
        plVar4 = (long *)param_2[0xb];
      }
      param_2[0xb] = *plVar4;
      plVar4[1] = (long)param_2;
      plVar4[2] = lVar6;
      *(undefined4 *)(plVar4 + 3) = 1;
      *plVar4 = (long)&PTR_FUN_110b16e18;
      *extraout_x8 = 6;
      *(long **)(extraout_x8 + 2) = plVar4;
      return;
    }
    if (iVar1 == 5) {
      plVar3 = param_2 + 2;
      FUN_1098927b8(plVar3,param_2,plVar4,0);
      uVar7 = 7;
      goto LAB_109890680;
    }
  }
  else {
    if (iVar1 == 6) {
      plVar3 = param_2 + 2;
      FUN_1098927b8(plVar3,param_2,plVar4,0);
      uVar7 = 4;
LAB_109890680:
      *extraout_x8 = uVar7;
      *(long **)(extraout_x8 + 2) = plVar3;
      return;
    }
    if (iVar1 == 7) {
      plVar3 = param_2 + 2;
      FUN_1098927b8(plVar3,param_2,plVar4,0);
      uVar7 = 5;
      goto LAB_109890680;
    }
  }
  _abort();
  uVar9 = *(undefined8 *)(*plVar3 + 0x10);
  plVar4 = (long *)plVar2[0x21];
  iVar1 = (int)*plVar8;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        plVar8 = plVar4;
      }
      else {
        if (iVar1 != 1) goto LAB_1098908f0;
        _JSValueMakeNull();
        plVar8 = plVar4;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar4,(char)plVar8[1]);
      plVar8 = plVar4;
    }
    else {
      if (iVar1 != 3) goto LAB_1098908f0;
      param_1 = plVar8[1];
      _JSValueMakeNumber();
      plVar8 = plVar4;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar4,*(undefined8 *)(plVar8[1] + 0x10));
        plVar8 = plVar4;
        goto LAB_109890754;
      }
      if (iVar1 != 7) goto LAB_1098908f0;
    }
    plVar8 = *(long **)(plVar8[1] + 0x10);
  }
LAB_109890754:
  plVar5 = (long *)plVar2[0x21];
  plStack_98 = (long *)0x0;
  _JSObjectGetPropertyForKey(plVar5,uVar9,plVar8,&plStack_98);
  if (plStack_98 == (long *)0x0) {
    plVar4 = (long *)plVar2[0x21];
    plVar3 = plVar5;
    _JSValueGetType();
    iVar1 = (int)plVar4;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8_00 = 0;
        }
        else {
          if (iVar1 != 1) goto LAB_1098908f0;
          *extraout_x8_00 = 1;
        }
      }
      else if (iVar1 == 2) {
        lVar6 = plVar2[0x21];
        _JSValueToBoolean(lVar6,plVar5);
        *extraout_x8_00 = 2;
        *(char *)(extraout_x8_00 + 2) = (char)lVar6;
      }
      else {
        if (iVar1 != 3) goto LAB_1098908f0;
        _JSValueToNumber(plVar2[0x21],plVar5,0);
        *extraout_x8_00 = 3;
        *(long *)(extraout_x8_00 + 2) = param_1;
      }
    }
    else {
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          lVar6 = plVar2[0x21];
          _JSValueToStringCopy(lVar6,plVar5,0);
          plVar4 = (long *)plVar2[0xb];
          if (plVar4 == (long *)0x0) {
            FUN_109892d80(plVar2 + 7);
            plVar4 = (long *)plVar2[0xb];
          }
          plVar2[0xb] = *plVar4;
          plVar4[1] = (long)plVar2;
          plVar4[2] = lVar6;
          *(undefined4 *)(plVar4 + 3) = 1;
          *plVar4 = (long)&PTR_FUN_110b16e18;
          *extraout_x8_00 = 6;
          *(long **)(extraout_x8_00 + 2) = plVar4;
          return;
        }
        if (iVar1 != 5) goto LAB_1098908f0;
        plVar4 = plVar2 + 2;
        FUN_1098927b8(plVar4,plVar2,plVar5,0);
        uVar7 = 7;
      }
      else if (iVar1 == 6) {
        plVar4 = plVar2 + 2;
        FUN_1098927b8(plVar4,plVar2,plVar5,0);
        uVar7 = 4;
      }
      else {
        if (iVar1 != 7) goto LAB_1098908f0;
        plVar4 = plVar2 + 2;
        FUN_1098927b8(plVar4,plVar2,plVar5,0);
        uVar7 = 5;
      }
      *extraout_x8_00 = uVar7;
      *(long **)(extraout_x8_00 + 2) = plVar4;
    }
    return;
  }
  plVar3 = plStack_98;
  FUN_109890ee0();
  plVar4 = plVar2;
LAB_1098908f0:
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)
            (plVar4[0x21],*(undefined8 *)(*plVar3 + 0x10),*(undefined8 *)(*plVar8 + 0x10));
  return;
}



/* Entry: 1098904f0; end: 1098908f3;  */

void FUN_1098904f0(undefined4 *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined4 *extraout_x8;
  undefined8 uVar9;
  long *plStack_68;
  
  plVar8 = *(long **)(*param_4 + 0x10);
  plVar4 = param_3;
  FUN_1098904a0(param_3,param_3[0x21],plVar8,*(undefined8 *)(*param_5 + 0x10));
  plVar2 = (long *)param_3[0x21];
  plVar3 = plVar4;
  _JSValueGetType();
  iVar1 = (int)plVar2;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *param_1 = 0;
        return;
      }
      if (iVar1 == 1) {
        *param_1 = 1;
        return;
      }
    }
    else {
      if (iVar1 == 2) {
        lVar6 = param_3[0x21];
        _JSValueToBoolean(lVar6,plVar4);
        *param_1 = 2;
        *(char *)(param_1 + 2) = (char)lVar6;
        return;
      }
      if (iVar1 == 3) {
        _JSValueToNumber(param_3[0x21],plVar4,0);
        *param_1 = 3;
        *(long *)(param_1 + 2) = param_2;
        return;
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar6 = param_3[0x21];
      _JSValueToStringCopy(lVar6,plVar4,0);
      plVar4 = (long *)param_3[0xb];
      if (plVar4 == (long *)0x0) {
        FUN_109892d80(param_3 + 7);
        plVar4 = (long *)param_3[0xb];
      }
      param_3[0xb] = *plVar4;
      plVar4[1] = (long)param_3;
      plVar4[2] = lVar6;
      *(undefined4 *)(plVar4 + 3) = 1;
      *plVar4 = (long)&PTR_FUN_110b16e18;
      *param_1 = 6;
      *(long **)(param_1 + 2) = plVar4;
      return;
    }
    if (iVar1 == 5) {
      plVar3 = param_3 + 2;
      FUN_1098927b8(plVar3,param_3,plVar4,0);
      uVar7 = 7;
      goto LAB_109890680;
    }
  }
  else {
    if (iVar1 == 6) {
      plVar3 = param_3 + 2;
      FUN_1098927b8(plVar3,param_3,plVar4,0);
      uVar7 = 4;
LAB_109890680:
      *param_1 = uVar7;
      *(long **)(param_1 + 2) = plVar3;
      return;
    }
    if (iVar1 == 7) {
      plVar3 = param_3 + 2;
      FUN_1098927b8(plVar3,param_3,plVar4,0);
      uVar7 = 5;
      goto LAB_109890680;
    }
  }
  _abort();
  uVar9 = *(undefined8 *)(*plVar3 + 0x10);
  plVar4 = (long *)plVar2[0x21];
  iVar1 = (int)*plVar8;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        _JSValueMakeUndefined();
        plVar8 = plVar4;
      }
      else {
        if (iVar1 != 1) goto LAB_1098908f0;
        _JSValueMakeNull();
        plVar8 = plVar4;
      }
    }
    else if (iVar1 == 2) {
      _JSValueMakeBoolean(plVar4,(char)plVar8[1]);
      plVar8 = plVar4;
    }
    else {
      if (iVar1 != 3) goto LAB_1098908f0;
      param_2 = plVar8[1];
      _JSValueMakeNumber();
      plVar8 = plVar4;
    }
  }
  else {
    if (1 < iVar1 - 4U) {
      if (iVar1 == 6) {
        _JSValueMakeString(plVar4,*(undefined8 *)(plVar8[1] + 0x10));
        plVar8 = plVar4;
        goto LAB_109890754;
      }
      if (iVar1 != 7) goto LAB_1098908f0;
    }
    plVar8 = *(long **)(plVar8[1] + 0x10);
  }
LAB_109890754:
  plVar5 = (long *)plVar2[0x21];
  plStack_68 = (long *)0x0;
  _JSObjectGetPropertyForKey(plVar5,uVar9,plVar8,&plStack_68);
  if (plStack_68 == (long *)0x0) {
    plVar4 = (long *)plVar2[0x21];
    plVar3 = plVar5;
    _JSValueGetType();
    iVar1 = (int)plVar4;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          *extraout_x8 = 0;
        }
        else {
          if (iVar1 != 1) goto LAB_1098908f0;
          *extraout_x8 = 1;
        }
      }
      else if (iVar1 == 2) {
        lVar6 = plVar2[0x21];
        _JSValueToBoolean(lVar6,plVar5);
        *extraout_x8 = 2;
        *(char *)(extraout_x8 + 2) = (char)lVar6;
      }
      else {
        if (iVar1 != 3) goto LAB_1098908f0;
        _JSValueToNumber(plVar2[0x21],plVar5,0);
        *extraout_x8 = 3;
        *(long *)(extraout_x8 + 2) = param_2;
      }
    }
    else {
      if (iVar1 < 6) {
        if (iVar1 == 4) {
          lVar6 = plVar2[0x21];
          _JSValueToStringCopy(lVar6,plVar5,0);
          plVar4 = (long *)plVar2[0xb];
          if (plVar4 == (long *)0x0) {
            FUN_109892d80(plVar2 + 7);
            plVar4 = (long *)plVar2[0xb];
          }
          plVar2[0xb] = *plVar4;
          plVar4[1] = (long)plVar2;
          plVar4[2] = lVar6;
          *(undefined4 *)(plVar4 + 3) = 1;
          *plVar4 = (long)&PTR_FUN_110b16e18;
          *extraout_x8 = 6;
          *(long **)(extraout_x8 + 2) = plVar4;
          return;
        }
        if (iVar1 != 5) goto LAB_1098908f0;
        plVar4 = plVar2 + 2;
        FUN_1098927b8(plVar4,plVar2,plVar5,0);
        uVar7 = 7;
      }
      else if (iVar1 == 6) {
        plVar4 = plVar2 + 2;
        FUN_1098927b8(plVar4,plVar2,plVar5,0);
        uVar7 = 4;
      }
      else {
        if (iVar1 != 7) goto LAB_1098908f0;
        plVar4 = plVar2 + 2;
        FUN_1098927b8(plVar4,plVar2,plVar5,0);
        uVar7 = 5;
      }
      *extraout_x8 = uVar7;
      *(long **)(extraout_x8 + 2) = plVar4;
    }
    return;
  }
  plVar3 = plStack_68;
  FUN_109890ee0();
  plVar4 = plVar2;
LAB_1098908f0:
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)
            (plVar4[0x21],*(undefined8 *)(*plVar3 + 0x10),*(undefined8 *)(*plVar8 + 0x10));
  return;
}



/* Entry: 1098908f4; end: 109890923;  */

void FUN_1098908f4(long param_1,long *param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(*param_2 + 0x10),
             *(undefined8 *)(*param_3 + 0x10));
  return;
}


