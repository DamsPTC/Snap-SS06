/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092461fc; end: 10924624f;  */

void FUN_1092461fc(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1[5] - param_1[4];
  lVar1 = param_2 - uVar2;
  if (uVar2 <= param_2 && lVar1 != 0) {
    func_0x000107c27d58(param_1 + 4,lVar1);
    if (0x3fff < param_2) {
      param_2 = 0x4000;
    }
    *param_1 = param_2;
    param_1[1] = param_1[4] + 3 & 0xfffffffffffffffc;
    param_1[2] = param_1[5];
  }
  return;
}



/* Entry: 109246250; end: 10924630f;  */

void FUN_109246250(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  if (param_2 < 0x801) {
    param_2 = 0x800;
  }
  if ((param_1[5] - param_1[4] != param_2) || (param_1[6] - param_1[4] != param_2)) {
    FUN_109246310(&uStack_38,param_2);
    uVar1 = param_1[4];
    param_1[4] = uStack_38;
    uVar2 = param_1[6];
    param_1[6] = uStack_28;
    param_1[5] = uStack_30;
    if (uVar1 != 0) {
      uStack_38 = uVar1;
      uStack_30 = uVar1;
      uStack_28 = uVar2;
      __ZdlPv();
      uStack_38 = param_1[4];
      uStack_30 = param_1[5];
    }
    if (0x3fff < param_2) {
      param_2 = 0x4000;
    }
    *param_1 = param_2;
    param_1[1] = uStack_38 + 3 & 0xfffffffffffffffc;
    param_1[2] = uStack_30;
  }
  return;
}



/* Entry: 109246310; end: 10924637f;  */

undefined8 * FUN_109246310(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109246380(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 109246380; end: 1092463bb;  */

long * FUN_109246380(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (-1 < (long)param_2) {
    plVar2 = param_2;
    __Znwm();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + (long)param_2;
    return plVar2;
  }
  func_0x000104c591bc();
  plVar2 = param_1;
  FUN_10922d460();
  plVar3 = plVar2 + 0x19;
  *plVar2 = (long)&PTR_FUN_110ae5368;
  FUN_109246058();
  param_1[0x22] = 0;
  param_1[0x23] = (long)param_2;
  *(undefined4 *)(param_1 + 0x24) = 3;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = (long)plVar3;
  plVar2 = param_2 + 0x102;
  plVar1 = param_1 + 0xd;
  param_1[0x29] = (long)plVar2;
  param_1[0x2a] = (long)plVar1;
  param_1[0x2b] = 0;
  param_1[0x2c] = -1;
  param_1[0x20] = (long)&PTR_DAT_110ae51f0;
  param_1[0x21] = 0;
  param_1[0x25] = (long)&PTR_FUN_110ae5290;
  param_1[0x26] = (long)param_1;
  param_1[0x2f] = 0;
  param_1[0x30] = (long)param_2;
  *(undefined4 *)(param_1 + 0x31) = 0x16;
  param_1[0x34] = (long)param_1;
  param_1[0x35] = (long)plVar3;
  param_1[0x36] = (long)plVar2;
  param_1[0x37] = (long)plVar1;
  param_1[0x38] = 0;
  param_1[0x2d] = (long)&PTR_DAT_110ae6e90;
  param_1[0x2e] = 0;
  param_1[0x32] = (long)&PTR_FUN_110ae6fb8;
  param_1[0x33] = (long)param_1;
  param_1[0x3a] = 0x100000000;
  param_1[0x39] = -1;
  param_1[0x3d] = 0;
  param_1[0x3e] = (long)param_2;
  *(undefined4 *)(param_1 + 0x3f) = 0x15;
  param_1[0x41] = (long)param_1;
  param_1[0x42] = (long)param_1;
  param_1[0x43] = (long)plVar3;
  param_1[0x44] = (long)plVar2;
  param_1[0x45] = (long)plVar1;
  param_1[0x46] = 0;
  param_1[0x47] = -1;
  param_1[0x3b] = (long)&PTR_DAT_110ae5568;
  param_1[0x3c] = 0;
  param_1[0x40] = (long)&PTR_FUN_110ae5600;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



/* Entry: 1092463bc; end: 1092464bf;  */

undefined8 * FUN_1092463bc(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  FUN_10922d460();
  puVar3 = puVar2 + 0x19;
  *puVar2 = &PTR_FUN_110ae5368;
  FUN_109246058();
  param_1[0x22] = 0;
  param_1[0x23] = param_2;
  *(undefined4 *)(param_1 + 0x24) = 3;
  param_1[0x27] = param_1;
  param_1[0x28] = puVar3;
  lVar1 = param_2 + 0x810;
  puVar2 = param_1 + 0xd;
  param_1[0x29] = lVar1;
  param_1[0x2a] = puVar2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x20] = &PTR_DAT_110ae51f0;
  param_1[0x21] = 0;
  param_1[0x25] = &PTR_FUN_110ae5290;
  param_1[0x26] = param_1;
  param_1[0x2f] = 0;
  param_1[0x30] = param_2;
  *(undefined4 *)(param_1 + 0x31) = 0x16;
  param_1[0x34] = param_1;
  param_1[0x35] = puVar3;
  param_1[0x36] = lVar1;
  param_1[0x37] = puVar2;
  param_1[0x38] = 0;
  param_1[0x2d] = &PTR_DAT_110ae6e90;
  param_1[0x2e] = 0;
  param_1[0x32] = &PTR_FUN_110ae6fb8;
  param_1[0x33] = param_1;
  param_1[0x3a] = 0x100000000;
  param_1[0x39] = 0xffffffffffffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = param_2;
  *(undefined4 *)(param_1 + 0x3f) = 0x15;
  param_1[0x41] = param_1;
  param_1[0x42] = param_1;
  param_1[0x43] = puVar3;
  param_1[0x44] = lVar1;
  param_1[0x45] = puVar2;
  param_1[0x46] = 0;
  param_1[0x47] = 0xffffffffffffffff;
  param_1[0x3b] = &PTR_DAT_110ae5568;
  param_1[0x3c] = 0;
  param_1[0x40] = &PTR_FUN_110ae5600;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



/* Entry: 1092464c0; end: 1092465bb;  */

void FUN_1092464c0(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  
  plVar3 = (long *)(param_1 + 200);
  FUN_1092460e0(plVar3,0x21,0x10,8);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_3;
  *(undefined4 *)((long)plVar3 + 0xc) = param_4;
  if (*(int *)(param_1 + 0x88) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) ||
     (*(long *)(*(long *)(param_1 + 0x78) + -0x10) != param_2)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*(undefined8 *)(param_1 + 0x68));
    if (unaff_x22 != 0) {
      FUN_10925df7c((long *)(param_1 + 0x70),&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 1092465bc; end: 1092465d3;  */

long FUN_1092465bc(long param_1)

{
  return param_1 + 0x168;
}



/* Entry: 1092465d4; end: 109246683;  */

void FUN_1092465d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x240) = 1;
    func_0x00010924652c(param_1,0);
  }
  func_0x00010924652c(param_1,1);
  *(undefined1 *)(param_1 + 0x90) = 2;
  **(undefined4 **)(param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return;
}



/* Entry: 109246684; end: 1092466ff;  */

void FUN_109246684(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x34);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + 0x38);
  uVar3 = *(long *)(param_1 + 0xe8) + 3U & 0xfffffffffffffffc;
  *(ulong *)(param_1 + 0xd0) = uVar3;
  *(ulong *)(param_1 + 0xd8) = uVar3 + (*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8));
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  uStack_40 = 0;
  uStack_38 = 0xffffffffffffffff;
  FUN_10922d864(param_1,&uStack_40);
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_109246250(param_1 + 200,uVar1);
  }
  return;
}



/* Entry: 109246700; end: 109246703;  */

undefined8 * FUN_109246700(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x2f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x22] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110ae25c0;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xe;
  FUN_10922d758(&puStack_28);
  puStack_28 = param_1 + 9;
  FUN_10922d758(&puStack_28);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109246704; end: 109246717;  */

void FUN_109246704(void)

{
  FUN_109246718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109246718; end: 10924676b;  */

undefined8 * FUN_109246718(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x2f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x22] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110ae25c0;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xe;
  FUN_10922d758(&puStack_28);
  puStack_28 = param_1 + 9;
  FUN_10922d758(&puStack_28);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924676c; end: 10924677b;  */

void FUN_10924676c(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  if (param_2 == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x22,0x10,8);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_3;
  *(undefined1 *)((long)plVar3 + 0xc) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_2)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 10924677c; end: 1092467eb;  */

void FUN_10924677c(long param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x22,0x10,8);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_3;
  *(undefined1 *)((long)plVar3 + 0xc) = param_4;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_2)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 1092467ec; end: 109246987;  */

void FUN_1092467ec(undefined4 *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7,ulong param_8,long param_9,ulong param_10)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar18;
  ulong unaff_x23;
  undefined8 *puVar19;
  ulong unaff_x24;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 *puStack_90;
  ulong auStack_88 [5];
  
  auStack_88[4] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  auStack_88[0] = param_6;
  auStack_88[1] = param_8;
  auStack_88[2] = param_10;
  auStack_88[3] = 1;
  lVar15 = 8;
  uVar8 = param_6;
  puVar16 = auStack_88;
  do {
    uVar17 = *(ulong *)((long)auStack_88 + lVar15);
    bVar3 = uVar17 <= uVar8;
    if (uVar8 <= uVar17) {
      uVar8 = uVar17;
    }
    puVar1 = (ulong *)((long)auStack_88 + lVar15);
    if (bVar3) {
      puVar1 = puVar16;
    }
    lVar15 = lVar15 + 8;
    puVar16 = puVar1;
  } while (lVar15 != 0x20);
  puVar4 = param_1;
  lVar5 = param_3;
  uVar17 = param_6;
  uVar8 = param_8;
  uStack_f8 = unaff_x21;
  lVar15 = param_7;
  uStack_108 = unaff_x23;
  lVar18 = param_5;
  if (*puVar1 != 0) {
    unaff_x24 = 0;
    uVar9 = param_10;
    uVar12 = param_8;
    uVar14 = param_6;
    uStack_b0 = *puVar1;
    puStack_90 = param_1;
    do {
      param_1 = *(undefined4 **)(puStack_90 + 0xe);
      lVar5 = *(long *)(puStack_90 + 0x14);
      uStack_98 = uVar14 - 8;
      if (7 < uVar14) {
        uVar14 = 8;
      }
      uVar8 = 0;
      if (unaff_x24 < param_6) {
        uVar8 = uVar14;
      }
      param_7 = 0;
      if (unaff_x24 < param_6) {
        param_7 = lVar18;
      }
      uStack_a0 = uVar12 - 8;
      if (7 < uVar12) {
        uVar12 = 8;
      }
      uStack_c8 = 0;
      if (unaff_x24 < param_8) {
        uStack_c8 = uVar12;
      }
      lStack_d0 = 0;
      if (unaff_x24 < param_8) {
        lStack_d0 = lVar15;
      }
      uStack_a8 = uVar9 - 8;
      if (7 < uVar9) {
        uVar9 = 8;
      }
      uStack_b8 = 0;
      if (unaff_x24 < param_10) {
        uStack_b8 = uVar9;
      }
      lStack_c0 = 0;
      if (unaff_x24 < param_10) {
        lStack_c0 = param_9;
      }
      param_5 = param_3;
      uVar17 = param_4;
      FUN_109246988(param_1,*(undefined8 *)(puStack_90 + 0x10));
      unaff_x24 = unaff_x24 + 8;
      lVar15 = lVar15 + 0x100;
      lVar18 = lVar18 + 0x40;
      param_9 = param_9 + 0x140;
      puVar4 = puStack_90;
      uVar9 = uStack_a8;
      uVar12 = uStack_a0;
      uVar14 = uStack_98;
      unaff_x20 = param_10;
      uStack_f8 = param_2;
      uStack_108 = param_8;
    } while (unaff_x24 < uStack_b0);
  }
  uVar7 = (undefined4)uVar17;
  uVar6 = (undefined4)param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_88[4]) {
    return;
  }
  ___stack_chk_fail();
  uVar17 = uStack_c8;
  uStack_e8 = param_10;
  pcStack_d8 = FUN_109246988;
  lStack_130 = lVar18;
  lStack_128 = param_9;
  uStack_120 = param_4;
  uStack_118 = param_6;
  uStack_110 = unaff_x24;
  lStack_100 = lVar15;
  uStack_f0 = unaff_x20;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_1092460e0(puVar4,2,0x2a0,8);
  uVar14 = uStack_b8;
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar4 + 0xa0) = 0;
    *(undefined8 *)(puVar4 + 0x9e) = 0;
    *(undefined8 *)(puVar4 + 0xa4) = 0;
    *(undefined8 *)(puVar4 + 0xa2) = 0;
    *(undefined8 *)(puVar4 + 0x98) = 0;
    *(undefined8 *)(puVar4 + 0x96) = 0;
    *(undefined8 *)(puVar4 + 0x9c) = 0;
    *(undefined8 *)(puVar4 + 0x9a) = 0;
    *(undefined8 *)(puVar4 + 0x90) = 0;
    *(undefined8 *)(puVar4 + 0x8e) = 0;
    *(undefined8 *)(puVar4 + 0x94) = 0;
    *(undefined8 *)(puVar4 + 0x92) = 0;
    *(undefined8 *)(puVar4 + 0x88) = 0;
    *(undefined8 *)(puVar4 + 0x86) = 0;
    *(undefined8 *)(puVar4 + 0x8c) = 0;
    *(undefined8 *)(puVar4 + 0x8a) = 0;
    *(undefined8 *)(puVar4 + 0x80) = 0;
    *(undefined8 *)(puVar4 + 0x7e) = 0;
    *(undefined8 *)(puVar4 + 0x84) = 0;
    *(undefined8 *)(puVar4 + 0x82) = 0;
    *(undefined8 *)(puVar4 + 0x78) = 0;
    *(undefined8 *)(puVar4 + 0x76) = 0;
    *(undefined8 *)(puVar4 + 0x7c) = 0;
    *(undefined8 *)(puVar4 + 0x7a) = 0;
    *(undefined8 *)(puVar4 + 0x70) = 0;
    *(undefined8 *)(puVar4 + 0x6e) = 0;
    *(undefined8 *)(puVar4 + 0x74) = 0;
    *(undefined8 *)(puVar4 + 0x72) = 0;
    *(undefined8 *)(puVar4 + 0x68) = 0;
    *(undefined8 *)(puVar4 + 0x66) = 0;
    *(undefined8 *)(puVar4 + 0x6c) = 0;
    *(undefined8 *)(puVar4 + 0x6a) = 0;
    *(undefined8 *)(puVar4 + 0x60) = 0;
    *(undefined8 *)(puVar4 + 0x5e) = 0;
    *(undefined8 *)(puVar4 + 100) = 0;
    *(undefined8 *)(puVar4 + 0x62) = 0;
    *(undefined8 *)(puVar4 + 0x58) = 0;
    *(undefined8 *)(puVar4 + 0x56) = 0;
    *(undefined8 *)(puVar4 + 0x5c) = 0;
    *(undefined8 *)(puVar4 + 0x5a) = 0;
    *(undefined8 *)(puVar4 + 5) = 0;
    *(undefined8 *)(puVar4 + 3) = 0;
    *(undefined8 *)(puVar4 + 0x53) = 0;
    *(undefined8 *)(puVar4 + 0x4d) = 0;
    *(undefined8 *)(puVar4 + 0x4b) = 0;
    *(undefined8 *)(puVar4 + 0x51) = 0;
    *(undefined8 *)(puVar4 + 0x4f) = 0;
    *(undefined8 *)(puVar4 + 0x45) = 0;
    *(undefined8 *)(puVar4 + 0x43) = 0;
    *(undefined8 *)(puVar4 + 0x49) = 0;
    *(undefined8 *)(puVar4 + 0x47) = 0;
    *(undefined8 *)(puVar4 + 0x3d) = 0;
    *(undefined8 *)(puVar4 + 0x3b) = 0;
    *(undefined8 *)(puVar4 + 0x41) = 0;
    *(undefined8 *)(puVar4 + 0x3f) = 0;
    *(undefined8 *)(puVar4 + 0x35) = 0;
    *(undefined8 *)(puVar4 + 0x33) = 0;
    *(undefined8 *)(puVar4 + 0x39) = 0;
    *(undefined8 *)(puVar4 + 0x37) = 0;
    *(undefined8 *)(puVar4 + 0x2d) = 0;
    *(undefined8 *)(puVar4 + 0x2b) = 0;
    *(undefined8 *)(puVar4 + 0x31) = 0;
    *(undefined8 *)(puVar4 + 0x2f) = 0;
    *(undefined8 *)(puVar4 + 0x25) = 0;
    *(undefined8 *)(puVar4 + 0x23) = 0;
    *(undefined8 *)(puVar4 + 0x29) = 0;
    *(undefined8 *)(puVar4 + 0x27) = 0;
    *(undefined8 *)(puVar4 + 0x1d) = 0;
    *(undefined8 *)(puVar4 + 0x1b) = 0;
    *(undefined8 *)(puVar4 + 0x21) = 0;
    *(undefined8 *)(puVar4 + 0x1f) = 0;
    *(undefined8 *)(puVar4 + 0x15) = 0;
    *(undefined8 *)(puVar4 + 0x13) = 0;
    *(undefined8 *)(puVar4 + 0x19) = 0;
    *(undefined8 *)(puVar4 + 0x17) = 0;
    *(undefined8 *)(puVar4 + 0xd) = 0;
    *(undefined8 *)(puVar4 + 0xb) = 0;
    *(undefined8 *)(puVar4 + 0x11) = 0;
    *(undefined8 *)(puVar4 + 0xf) = 0;
    *(undefined8 *)(puVar4 + 9) = 0;
    *(undefined8 *)(puVar4 + 7) = 0;
    lVar15 = 0x140;
    puVar10 = puVar4 + 0x5f;
    do {
      puVar10[-3] = 0;
      *(undefined8 *)(puVar10 + -5) = 0;
      *(undefined8 *)(puVar10 + -7) = 0;
      *(undefined8 *)(puVar10 + -9) = 0;
      *(undefined8 *)(puVar10 + -2) = 1;
      *puVar10 = 1;
      lVar15 = lVar15 + -0x28;
      puVar10 = puVar10 + 10;
    } while (lVar15 != 0);
    puVar4[0xa6] = 0;
  }
  *puVar4 = (int)param_2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  if (uVar8 != 0) {
    _memmove(puVar4 + 3,param_7,uVar8 << 3);
  }
  lVar15 = lStack_d0;
  puVar4[0x13] = (int)uVar8;
  if (uVar17 == 0) {
    puVar4[0x54] = 0;
    lVar15 = lStack_c0;
  }
  else {
    lVar18 = uVar17 << 5;
    _memmove(puVar4 + 0x14,lStack_d0,lVar18);
    puVar4[0x54] = (int)uVar17;
    puVar19 = (undefined8 *)(lVar15 + 8);
    do {
      if (*(int *)(lVar5 + 0x20) == 0) {
        func_0x000109fccc60(lVar5,*puVar19);
      }
      puVar19 = puVar19 + 4;
      lVar18 = lVar18 + -0x20;
      lVar15 = lStack_c0;
    } while (lVar18 != 0);
  }
  if (uVar14 == 0) {
    puVar4[0xa6] = 0;
  }
  else {
    lStack_c0 = lVar15;
    _memmove(puVar4 + 0x56,lVar15,uVar14 * 0x28);
    lVar18 = lVar15 + uVar14 * 0x28;
    puVar4[0xa6] = (int)uVar14;
    do {
      if ((*(long *)(lVar15 + 0x10) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar15 + 0x10) + 0x88), lVar11 != 0)) {
        plVar13 = *(long **)(param_1 + 0x2c);
        plVar2 = *(long **)(param_1 + 0x2e);
        if (plVar13 == plVar2) {
LAB_109246b48:
          if (plVar13 != plVar2) goto LAB_109246b60;
        }
        else {
          do {
            if (*plVar13 == lVar11) goto LAB_109246b48;
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar2);
        }
        lStack_138 = lVar11;
        FUN_109245a44(param_1 + 0x2c,&lStack_138);
      }
LAB_109246b60:
      if (*(int *)(lVar5 + 0x20) == 0) {
        func_0x000109fccc60(lVar5,*(undefined8 *)(lVar15 + 0x10));
      }
      lVar15 = lVar15 + 0x28;
    } while (lVar15 != lVar18);
  }
  return;
}



/* Entry: 109246988; end: 109246bb3;  */

void FUN_109246988(long param_1,undefined4 *param_2,long param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,long param_8,long param_9
                  ,long param_10,long param_11,long param_12)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lStack_68;
  
  FUN_1092460e0(param_2,2,0x2a0,8);
  if (param_2 != (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0x9e) = 0;
    *(undefined8 *)(param_2 + 0xa4) = 0;
    *(undefined8 *)(param_2 + 0xa2) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0x96) = 0;
    *(undefined8 *)(param_2 + 0x9c) = 0;
    *(undefined8 *)(param_2 + 0x9a) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x8e) = 0;
    *(undefined8 *)(param_2 + 0x94) = 0;
    *(undefined8 *)(param_2 + 0x92) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x86) = 0;
    *(undefined8 *)(param_2 + 0x8c) = 0;
    *(undefined8 *)(param_2 + 0x8a) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x7e) = 0;
    *(undefined8 *)(param_2 + 0x84) = 0;
    *(undefined8 *)(param_2 + 0x82) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x76) = 0;
    *(undefined8 *)(param_2 + 0x7c) = 0;
    *(undefined8 *)(param_2 + 0x7a) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x6e) = 0;
    *(undefined8 *)(param_2 + 0x74) = 0;
    *(undefined8 *)(param_2 + 0x72) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x66) = 0;
    *(undefined8 *)(param_2 + 0x6c) = 0;
    *(undefined8 *)(param_2 + 0x6a) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x5e) = 0;
    *(undefined8 *)(param_2 + 100) = 0;
    *(undefined8 *)(param_2 + 0x62) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x56) = 0;
    *(undefined8 *)(param_2 + 0x5c) = 0;
    *(undefined8 *)(param_2 + 0x5a) = 0;
    *(undefined8 *)(param_2 + 5) = 0;
    *(undefined8 *)(param_2 + 3) = 0;
    *(undefined8 *)(param_2 + 0x53) = 0;
    *(undefined8 *)(param_2 + 0x4d) = 0;
    *(undefined8 *)(param_2 + 0x4b) = 0;
    *(undefined8 *)(param_2 + 0x51) = 0;
    *(undefined8 *)(param_2 + 0x4f) = 0;
    *(undefined8 *)(param_2 + 0x45) = 0;
    *(undefined8 *)(param_2 + 0x43) = 0;
    *(undefined8 *)(param_2 + 0x49) = 0;
    *(undefined8 *)(param_2 + 0x47) = 0;
    *(undefined8 *)(param_2 + 0x3d) = 0;
    *(undefined8 *)(param_2 + 0x3b) = 0;
    *(undefined8 *)(param_2 + 0x41) = 0;
    *(undefined8 *)(param_2 + 0x3f) = 0;
    *(undefined8 *)(param_2 + 0x35) = 0;
    *(undefined8 *)(param_2 + 0x33) = 0;
    *(undefined8 *)(param_2 + 0x39) = 0;
    *(undefined8 *)(param_2 + 0x37) = 0;
    *(undefined8 *)(param_2 + 0x2d) = 0;
    *(undefined8 *)(param_2 + 0x2b) = 0;
    *(undefined8 *)(param_2 + 0x31) = 0;
    *(undefined8 *)(param_2 + 0x2f) = 0;
    *(undefined8 *)(param_2 + 0x25) = 0;
    *(undefined8 *)(param_2 + 0x23) = 0;
    *(undefined8 *)(param_2 + 0x29) = 0;
    *(undefined8 *)(param_2 + 0x27) = 0;
    *(undefined8 *)(param_2 + 0x1d) = 0;
    *(undefined8 *)(param_2 + 0x1b) = 0;
    *(undefined8 *)(param_2 + 0x21) = 0;
    *(undefined8 *)(param_2 + 0x1f) = 0;
    *(undefined8 *)(param_2 + 0x15) = 0;
    *(undefined8 *)(param_2 + 0x13) = 0;
    *(undefined8 *)(param_2 + 0x19) = 0;
    *(undefined8 *)(param_2 + 0x17) = 0;
    *(undefined8 *)(param_2 + 0xd) = 0;
    *(undefined8 *)(param_2 + 0xb) = 0;
    *(undefined8 *)(param_2 + 0x11) = 0;
    *(undefined8 *)(param_2 + 0xf) = 0;
    *(undefined8 *)(param_2 + 9) = 0;
    *(undefined8 *)(param_2 + 7) = 0;
    lVar4 = 0x140;
    puVar2 = param_2 + 0x5f;
    do {
      puVar2[-3] = 0;
      *(undefined8 *)(puVar2 + -5) = 0;
      *(undefined8 *)(puVar2 + -7) = 0;
      *(undefined8 *)(puVar2 + -9) = 0;
      *(undefined8 *)(puVar2 + -2) = 1;
      *puVar2 = 1;
      lVar4 = lVar4 + -0x28;
      puVar2 = puVar2 + 10;
    } while (lVar4 != 0);
    param_2[0xa6] = 0;
  }
  *param_2 = param_4;
  param_2[1] = param_5;
  param_2[2] = param_6;
  if (param_8 != 0) {
    _memmove(param_2 + 3,param_7,param_8 << 3);
  }
  param_2[0x13] = (int)param_8;
  if (param_10 == 0) {
    param_2[0x54] = 0;
  }
  else {
    lVar4 = param_10 << 5;
    _memmove(param_2 + 0x14,param_9,lVar4);
    param_2[0x54] = (int)param_10;
    puVar6 = (undefined8 *)(param_9 + 8);
    do {
      if (*(int *)(param_3 + 0x20) == 0) {
        func_0x000109fccc60(param_3,*puVar6);
      }
      puVar6 = puVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (param_12 == 0) {
    param_2[0xa6] = 0;
  }
  else {
    _memmove(param_2 + 0x56,param_11,param_12 * 0x28);
    lVar4 = param_11 + param_12 * 0x28;
    param_2[0xa6] = (int)param_12;
    do {
      if ((*(long *)(param_11 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_11 + 0x10) + 0x88), lVar3 != 0)) {
        plVar5 = *(long **)(param_1 + 0xb0);
        plVar1 = *(long **)(param_1 + 0xb8);
        if (plVar5 == plVar1) {
LAB_109246b48:
          if (plVar5 != plVar1) goto LAB_109246b60;
        }
        else {
          do {
            if (*plVar5 == lVar3) goto LAB_109246b48;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
        lStack_68 = lVar3;
        FUN_109245a44(param_1 + 0xb0,&lStack_68);
      }
LAB_109246b60:
      if (*(int *)(param_3 + 0x20) == 0) {
        func_0x000109fccc60(param_3,*(undefined8 *)(param_11 + 0x10));
      }
      param_11 = param_11 + 0x28;
    } while (param_11 != lVar4);
  }
  return;
}



/* Entry: 109246bb4; end: 109246bc3;  */

void FUN_109246bb4(void)

{
  return;
}



/* Entry: 109246bc4; end: 109246c0f;  */

void FUN_109246bc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar1 + 0x240) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x240) = 1;
    func_0x00010924652c(lVar1,0);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(lVar1 + 0x90) = 1;
  *(undefined4 *)(lVar1 + 0x94) = 1;
  return;
}



/* Entry: 109246c10; end: 109246c73;  */

void FUN_109246c10(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x21;
  long unaff_x22;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar1 = 8;
    if (param_3 == 0) {
      lVar1 = 0xc;
    }
    iVar2 = *(int *)((long)param_2 + lVar1);
    if (iVar2 != -1) {
      if ((param_3 & 1) == 0) {
        bVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x38) + 0x18) + 0x924) == 1;
      }
      else {
        bVar4 = false;
      }
      plVar5 = *(long **)(param_1 + 0x40);
      FUN_1092460e0(plVar5,0x22,0x10,8);
      *plVar5 = lVar7;
      *(int *)(plVar5 + 1) = iVar2;
      *(bool *)((long)plVar5 + 0xc) = bVar4;
      puVar6 = *(undefined8 **)(param_1 + 0x50);
      if (*(int *)(puVar6 + 4) != 0) {
        return;
      }
      if ((puVar6[1] == puVar6[2]) || (*(long *)(puVar6[2] + -0x10) != lVar7)) {
        FUN_10922d97c(&stack0xffffffffffffffd0,*puVar6);
        if (unaff_x22 != 0) {
          FUN_10925df7c(puVar6 + 1,&stack0xffffffffffffffd0);
        }
        if (unaff_x21 != (long *)0x0) {
          plVar5 = unaff_x21 + 1;
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 109246c74; end: 109246ce3;  */

void FUN_109246c74(long param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x22,0x10,8);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_3;
  *(undefined1 *)((long)plVar3 + 0xc) = param_4;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_2)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 109246ce4; end: 109246e7f;  */

void FUN_109246ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,long param_7,ulong param_8,long param_9,ulong param_10)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong auStack_88 [5];
  
  auStack_88[4] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  auStack_88[0] = param_6;
  auStack_88[1] = param_8;
  auStack_88[2] = param_10;
  auStack_88[3] = 1;
  lVar13 = 8;
  uVar12 = param_6;
  puVar14 = auStack_88;
  do {
    uVar15 = *(ulong *)((long)auStack_88 + lVar13);
    bVar8 = uVar15 <= uVar12;
    if (uVar12 <= uVar15) {
      uVar12 = uVar15;
    }
    puVar1 = (ulong *)((long)auStack_88 + lVar13);
    if (bVar8) {
      puVar1 = puVar14;
    }
    lVar13 = lVar13 + 8;
    puVar14 = puVar1;
  } while (lVar13 != 0x20);
  uVar12 = *puVar1;
  if (uVar12 != 0) {
    uVar15 = 0;
    uVar9 = param_10;
    uVar10 = param_8;
    uVar11 = param_6;
    do {
      uVar7 = uVar11 - 8;
      if (7 < uVar11) {
        uVar11 = 8;
      }
      uVar2 = 0;
      if (uVar15 < param_6) {
        uVar2 = uVar11;
      }
      lVar13 = 0;
      if (uVar15 < param_6) {
        lVar13 = param_5;
      }
      uVar11 = uVar10 - 8;
      if (7 < uVar10) {
        uVar10 = 8;
      }
      uVar3 = 0;
      if (uVar15 < param_8) {
        uVar3 = uVar10;
      }
      lVar4 = 0;
      if (uVar15 < param_8) {
        lVar4 = param_7;
      }
      uVar10 = uVar9 - 8;
      if (7 < uVar9) {
        uVar9 = 8;
      }
      uVar5 = 0;
      if (uVar15 < param_10) {
        uVar5 = uVar9;
      }
      lVar6 = 0;
      if (uVar15 < param_10) {
        lVar6 = param_9;
      }
      FUN_109246988(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                    *(undefined8 *)(param_1 + 0x50),param_2,param_3,param_4,lVar13,uVar2,lVar4,uVar3
                    ,lVar6,uVar5);
      uVar15 = uVar15 + 8;
      param_7 = param_7 + 0x100;
      param_5 = param_5 + 0x40;
      param_9 = param_9 + 0x140;
      uVar9 = uVar10;
      uVar10 = uVar11;
      uVar11 = uVar7;
    } while (uVar15 < uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_88[4]) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109246e80; end: 109246e8f;  */

void FUN_109246e80(void)

{
  return;
}



/* Entry: 109246e90; end: 109246edf;  */

void FUN_109246e90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar1 + 0x240) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x240) = 1;
    func_0x00010924652c(lVar1,0);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(lVar1 + 0x90) = 1;
  *(undefined4 *)(lVar1 + 0x94) = 3;
  return;
}



/* Entry: 109246ee0; end: 109246f43;  */

void FUN_109246ee0(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x21;
  long unaff_x22;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar1 = 8;
    if (param_3 == 0) {
      lVar1 = 0xc;
    }
    iVar2 = *(int *)((long)param_2 + lVar1);
    if (iVar2 != -1) {
      if ((param_3 & 1) == 0) {
        bVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x38) + 0x18) + 0x924) == 1;
      }
      else {
        bVar4 = false;
      }
      plVar5 = *(long **)(param_1 + 0x40);
      FUN_1092460e0(plVar5,0x22,0x10,8);
      *plVar5 = lVar7;
      *(int *)(plVar5 + 1) = iVar2;
      *(bool *)((long)plVar5 + 0xc) = bVar4;
      puVar6 = *(undefined8 **)(param_1 + 0x50);
      if (*(int *)(puVar6 + 4) != 0) {
        return;
      }
      if ((puVar6[1] == puVar6[2]) || (*(long *)(puVar6[2] + -0x10) != lVar7)) {
        FUN_10922d97c(&stack0xffffffffffffffd0,*puVar6);
        if (unaff_x22 != 0) {
          FUN_10925df7c(puVar6 + 1,&stack0xffffffffffffffd0);
        }
        if (unaff_x21 != (long *)0x0) {
          plVar5 = unaff_x21 + 1;
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 109246f44; end: 109246fb3;  */

void FUN_109246f44(long param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x22,0x10,8);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_3;
  *(undefined1 *)((long)plVar3 + 0xc) = param_4;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_2)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 109246fb4; end: 10924714f;  */

void FUN_109246fb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,long param_7,ulong param_8,long param_9,ulong param_10)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong auStack_88 [5];
  
  auStack_88[4] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  auStack_88[0] = param_6;
  auStack_88[1] = param_8;
  auStack_88[2] = param_10;
  auStack_88[3] = 1;
  lVar13 = 8;
  uVar12 = param_6;
  puVar14 = auStack_88;
  do {
    uVar15 = *(ulong *)((long)auStack_88 + lVar13);
    bVar8 = uVar15 <= uVar12;
    if (uVar12 <= uVar15) {
      uVar12 = uVar15;
    }
    puVar1 = (ulong *)((long)auStack_88 + lVar13);
    if (bVar8) {
      puVar1 = puVar14;
    }
    lVar13 = lVar13 + 8;
    puVar14 = puVar1;
  } while (lVar13 != 0x20);
  uVar12 = *puVar1;
  if (uVar12 != 0) {
    uVar15 = 0;
    uVar9 = param_10;
    uVar10 = param_8;
    uVar11 = param_6;
    do {
      uVar7 = uVar11 - 8;
      if (7 < uVar11) {
        uVar11 = 8;
      }
      uVar2 = 0;
      if (uVar15 < param_6) {
        uVar2 = uVar11;
      }
      lVar13 = 0;
      if (uVar15 < param_6) {
        lVar13 = param_5;
      }
      uVar11 = uVar10 - 8;
      if (7 < uVar10) {
        uVar10 = 8;
      }
      uVar3 = 0;
      if (uVar15 < param_8) {
        uVar3 = uVar10;
      }
      lVar4 = 0;
      if (uVar15 < param_8) {
        lVar4 = param_7;
      }
      uVar10 = uVar9 - 8;
      if (7 < uVar9) {
        uVar9 = 8;
      }
      uVar5 = 0;
      if (uVar15 < param_10) {
        uVar5 = uVar9;
      }
      lVar6 = 0;
      if (uVar15 < param_10) {
        lVar6 = param_9;
      }
      FUN_109246988(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                    *(undefined8 *)(param_1 + 0x50),param_2,param_3,param_4,lVar13,uVar2,lVar4,uVar3
                    ,lVar6,uVar5);
      uVar15 = uVar15 + 8;
      param_7 = param_7 + 0x100;
      param_5 = param_5 + 0x40;
      param_9 = param_9 + 0x140;
      uVar9 = uVar10;
      uVar10 = uVar11;
      uVar11 = uVar7;
    } while (uVar15 < uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_88[4]) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109247150; end: 10924715f;  */

void FUN_109247150(void)

{
  return;
}



/* Entry: 109247160; end: 1092471af;  */

void FUN_109247160(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar1 + 0x240) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x240) = 1;
    func_0x00010924652c(lVar1,0);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(lVar1 + 0x90) = 1;
  *(undefined4 *)(lVar1 + 0x94) = 2;
  return;
}



/* Entry: 1092471b0; end: 109247203;  */

void FUN_1092471b0(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x21;
  long unaff_x22;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar1 = 8;
    if (param_3 == 0) {
      lVar1 = 0xc;
    }
    iVar2 = *(int *)((long)param_2 + lVar1);
    if (iVar2 != -1) {
      if ((param_3 & 1) == 0) {
        bVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x38) + 0x18) + 0x924) == 1;
      }
      else {
        bVar4 = false;
      }
      plVar5 = *(long **)(param_1 + 0x40);
      FUN_1092460e0(plVar5,0x22,0x10,8);
      *plVar5 = lVar7;
      *(int *)(plVar5 + 1) = iVar2;
      *(bool *)((long)plVar5 + 0xc) = bVar4;
      puVar6 = *(undefined8 **)(param_1 + 0x50);
      if (*(int *)(puVar6 + 4) != 0) {
        return;
      }
      if ((puVar6[1] == puVar6[2]) || (*(long *)(puVar6[2] + -0x10) != lVar7)) {
        FUN_10922d97c(&stack0xffffffffffffffd0,*puVar6);
        if (unaff_x22 != 0) {
          FUN_10925df7c(puVar6 + 1,&stack0xffffffffffffffd0);
        }
        if (unaff_x21 != (long *)0x0) {
          plVar5 = unaff_x21 + 1;
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 109247204; end: 1092472c7;  */

undefined8 * FUN_109247204(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 4;
  *param_1 = &PTR_FUN_110ae5420;
  param_1[1] = 0;
  param_1[5] = param_2;
  param_1[6] = param_2 + 0x930;
  param_1[7] = param_2;
  param_1[8] = param_2 + 0x930;
  param_1[9] = param_2 + 0x810;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_10926613c(param_1 + 0xe);
  lVar1 = param_1[5];
  param_1[0xb2a] = lVar1;
  param_1[0xb2b] = lVar1 + 0x930;
  param_1[0xb2c] = lVar1 + 0x810;
  param_1[0xb2d] = 0;
  FUN_109261628(param_1 + 0xb2e);
  *(undefined4 *)(param_1 + 0x15b5) = 0;
  return param_1;
}



/* Entry: 1092472c8; end: 109247317;  */

long FUN_1092472c8(long param_1)

{
  func_0x000109247d2c(param_1 + 0x5970);
  func_0x000109247cf4(param_1 + 0x70);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109247318; end: 10924731b;  */

long FUN_109247318(long param_1)

{
  func_0x000109247d2c(param_1 + 0x5970);
  func_0x000109247cf4(param_1 + 0x70);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10924731c; end: 10924732f;  */

void FUN_10924731c(void)

{
  FUN_1092472c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109247330; end: 109247bc3;  */

long * FUN_109247330(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                    undefined8 param_5,long *param_6,long param_7,undefined8 param_8,
                    undefined8 *param_9,long param_10,int param_11,undefined4 param_12,long param_13
                    )

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  long *plVar15;
  long lStack_130;
  long *plStack_128;
  undefined1 auStack_120 [8];
  long *plStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  byte *pbStack_f8;
  long **pplStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  byte bStack_c9;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 **appuStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = *(long *)(param_1 + 0x28);
  if (*(int *)(lStack_98 + 0x910) != 0) {
    lStack_98 = 0;
  }
  ppuStack_90 = &PTR_FUN_110ae5480;
  plStack_c0 = param_6;
  lStack_b8 = param_7;
  FUN_109253e50(&lStack_98);
  plVar6 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar6 + 0x30))();
  if (plVar6 == (long *)0x0) goto LAB_109247a54;
  plStack_c8 = plVar6;
  FUN_109253628();
  uStack_e8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x888);
  if (lStack_b8 != 0) {
    lVar8 = lStack_b8 << 3;
    plVar6 = plStack_c0;
    do {
      if ((*(byte *)(*plVar6 + 0x98) & 1) == 0) {
        bStack_c9 = 1;
        func_0x000109fcd53c(uStack_e8);
        goto LAB_1092473f8;
      }
      lVar8 = lVar8 + -8;
      plVar6 = plVar6 + 1;
    } while (lVar8 != 0);
  }
  bStack_c9 = 0;
LAB_1092473f8:
  pbStack_f8 = &bStack_c9;
  pplStack_f0 = &plStack_c0;
  puStack_e0 = &param_13;
  lStack_d8 = param_1;
  func_0x000109fd0328(auStack_120,plStack_c0,lStack_b8,&param_13);
  if ((param_13 == 0) && ((bStack_c9 & 1) != 0)) {
    func_0x000109fcbc0c(&lStack_130,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x890));
    param_13 = lStack_130;
  }
  else {
    lStack_130 = 0;
    plStack_128 = (long *)0x0;
  }
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      FUN_10926c528(*param_2);
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  for (; puStack_110 != puStack_108; puStack_110 = puStack_110 + 2) {
    FUN_10926c528(*puStack_110);
  }
  FUN_10925aabc(plStack_c8 + 0x1a);
  func_0x000109267d30(param_1 + 0x70);
  lVar8 = param_1 + 0x5970;
  FUN_109261878(lVar8);
  *(undefined4 *)(param_1 + 0xada8) = 0;
  *(long **)(param_1 + 0x5968) = plStack_c8;
  *(long **)(param_1 + 0x88) = plStack_c8;
  *(long **)(param_1 + 0x50) = plStack_c8;
  if (lStack_b8 != 0) {
    plVar1 = plStack_c0 + lStack_b8;
    plVar6 = plStack_c0;
    do {
      lVar12 = *plVar6;
      FUN_1092465d4(lVar12);
      if (plStack_c8 == (long *)0x0) {
LAB_109247520:
        _glDisable(0xc11);
        if ((*(byte *)(lVar12 + 0xe0) & 1) == 0) {
LAB_109247a94:
          FUN_109243bf8(&UNK_10f55eacc);
LAB_109247ae4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109247ae8);
          (*pcVar5)();
        }
        if (plStack_c8 == (long *)0x0) {
          FUN_109231308(appuStack_b0,&UNK_10f55eb03);
          FUN_109247ea4(appuStack_b0);
          goto LAB_109247ae4;
        }
      }
      else {
        if (*(char *)((long)plStack_c8 + 0x241) != '\x01' || (char)plStack_c8[0x48] != '\0') {
          *(undefined2 *)(plStack_c8 + 0x48) = 0x100;
          goto LAB_109247520;
        }
        if ((*(byte *)(lVar12 + 0xe0) & 1) == 0) goto LAB_109247a94;
      }
      plVar9 = *(long **)(lVar12 + 0xe8);
code_r0x00010924754c:
      piVar13 = (int *)((long)plVar9 + 3U & 0xfffffffffffffffc);
      if (*piVar13 != -1) {
        switch(*piVar13) {
        case 1:
          puVar14 = (undefined4 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          plVar9 = (long *)(puVar14 + 0xe);
          lVar12 = lVar8;
          if ((*(int *)(param_1 + 0xada8) == 3) ||
             (lVar12 = param_1 + 0x518, *(int *)(param_1 + 0xada8) == 2)) {
            FUN_109261980(lVar12,*puVar14,*(undefined8 *)(puVar14 + 2),puVar14 + 4,puVar14[0xc]);
          }
          goto code_r0x00010924754c;
        case 2:
          plVar9 = (long *)(((long)piVar13 + 0xbU & 0xfffffffffffffff8) + 0x2a0);
          plVar15 = (long *)(param_1 + 0x5958);
          if ((*(int *)(param_1 + 0xada8) == 3) ||
             (plVar15 = (long *)(param_1 + 0x78), *(int *)(param_1 + 0xada8) == 2)) {
            func_0x00010928827c(*plVar15);
          }
          goto code_r0x00010924754c;
        case 3:
          uVar7 = 3;
          goto code_r0x000109247730;
        case 4:
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_1092496b4(param_1 + 0x5950,uVar11);
          goto code_r0x0001092478a8;
        case 5:
          FUN_109261b80(lVar8,*(undefined8 *)(param_1 + 0x5968));
          (**(code **)(*(long *)(param_1 + 0x5958) + 0x930))(piVar13[1],piVar13[2],piVar13[3]);
          break;
        case 6:
          FUN_109261878(lVar8);
        case 0x20:
code_r0x000109247918:
          plVar9 = (long *)((long)piVar13 + 5);
          *(undefined4 *)(param_1 + 0xada8) = 0;
          goto code_r0x00010924754c;
        case 7:
          *(undefined4 *)(param_1 + 0xada8) = 2;
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_1092674ac(param_1 + 0x70,uVar11);
          plVar9 = (long *)(uVar11 + 0x138);
          goto code_r0x00010924754c;
        case 8:
          *(undefined4 *)(param_1 + 0xada8) = 2;
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_109267acc(param_1 + 0x70,uVar11);
          plVar9 = (long *)(uVar11 + 0x2e0);
          goto code_r0x00010924754c;
        case 9:
          FUN_109267980(param_1 + 0x70);
        case 0x24:
code_r0x000109247820:
          plVar9 = (long *)((long)piVar13 + 5);
          goto code_r0x00010924754c;
        case 10:
          puVar10 = (undefined8 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          plVar9 = puVar10 + 1;
          *(undefined8 *)(param_1 + 0x98) = *puVar10;
          goto code_r0x00010924754c;
        case 0xb:
          FUN_1092661e8(param_1 + 0x70);
          plVar9 = (long *)(piVar13 + 7);
          goto code_r0x00010924754c;
        case 0xc:
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_10926659c(param_1 + 0x70,uVar11);
          plVar9 = (long *)(uVar11 + 0x68);
          goto code_r0x00010924754c;
        case 0xd:
          puVar14 = (undefined4 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          FUN_109288eb8(param_1 + 1000,*puVar14,*(undefined8 *)(puVar14 + 2),puVar14[4]);
          goto code_r0x00010924770c;
        case 0xe:
          piVar13 = (int *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          FUN_109267d70(param_1 + 0x70,piVar13);
          break;
        case 0xf:
          FUN_109266274(param_1 + 0x70);
          break;
        case 0x10:
          FUN_109248454(*(undefined8 *)(param_1 + 0x78),param_1 + 0xa0,piVar13[1],piVar13[2],
                        *(undefined8 *)(param_1 + 0x88));
          plVar9 = (long *)(piVar13 + 3);
          goto code_r0x00010924754c;
        case 0x11:
          FUN_1092662ec(param_1 + 0x70);
          goto code_r0x000109247810;
        case 0x12:
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_109266370(param_1 + 0x70,uVar11);
          goto code_r0x0001092478a8;
        case 0x13:
          func_0x000109267ef8(param_1 + 0x70);
          goto code_r0x000109247810;
        case 0x14:
          FUN_109267f50(param_1 + 0x70);
code_r0x000109247810:
          plVar9 = (long *)(piVar13 + 5);
          goto code_r0x00010924754c;
        case 0x15:
          piVar13 = (int *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          func_0x00010926811c(param_1 + 0x70,piVar13);
          break;
        case 0x16:
          piVar13 = (int *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          func_0x0001092681c0(param_1 + 0x70,piVar13);
          break;
        case 0x17:
          puVar14 = (undefined4 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          func_0x000109268264(param_1 + 0x70,puVar14);
          goto code_r0x00010924770c;
        case 0x18:
          puVar14 = (undefined4 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          func_0x000109268330(param_1 + 0x70,puVar14);
code_r0x00010924770c:
          plVar9 = (long *)(puVar14 + 6);
          goto code_r0x00010924754c;
        case 0x19:
          func_0x000109267cec(param_1 + 0x70);
          goto code_r0x000109247918;
        case 0x1a:
          uVar7 = 1;
code_r0x000109247730:
          *(undefined4 *)(param_1 + 0xada8) = uVar7;
          goto code_r0x000109247820;
        case 0x1b:
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_109243c80(param_1 + 0x38,uVar11);
          plVar9 = (long *)(uVar11 + 0xd8);
          goto code_r0x00010924754c;
        case 0x1c:
          puVar10 = (undefined8 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          FUN_109288580(*puVar10,puVar10[1],puVar10 + 2,*(undefined4 *)(puVar10 + 0x3a),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50));
          goto code_r0x000109247908;
        case 0x1d:
          puVar10 = (undefined8 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          FUN_109243f74(param_1 + 0x38,puVar10);
code_r0x000109247908:
          plVar9 = puVar10 + 0x3b;
          goto code_r0x00010924754c;
        case 0x1e:
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_10924463c(param_1 + 0x38,uVar11);
          plVar9 = (long *)(uVar11 + 0x178);
          goto code_r0x00010924754c;
        case 0x1f:
          uVar11 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
          FUN_109244c6c(param_1 + 0x38,uVar11);
code_r0x0001092478a8:
          plVar9 = (long *)(uVar11 + 8);
          goto code_r0x00010924754c;
        case 0x21:
          puVar10 = (undefined8 *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          plVar9 = puVar10 + 2;
          FUN_109265b68(*puVar10,*(undefined4 *)(puVar10 + 1),*(undefined4 *)((long)puVar10 + 0xc));
          goto code_r0x00010924754c;
        case 0x22:
          plVar15 = (long *)((long)piVar13 + 0xbU & 0xfffffffffffffff8);
          if (*(char *)((long)plVar15 + 0xc) == '\x01') {
            _glFlush();
          }
          plVar9 = plVar15 + 2;
          lVar12 = *plVar15;
          uVar2 = *(uint *)(plVar15 + 1);
          if (uVar2 < *(uint *)(lVar12 + 0x24)) {
            (**(code **)(*(long *)(lVar12 + 0x30) + 0x9b8))
                      (*(undefined4 *)(*(long *)(lVar12 + 0x38) + (ulong)uVar2 * 4),0x8e28);
            uVar11 = (ulong)(uVar2 >> 3) & 0x1ffffff8;
            *(ulong *)(*(long *)(lVar12 + 0x68) + uVar11) =
                 *(ulong *)(*(long *)(lVar12 + 0x68) + uVar11) | 1L << ((ulong)uVar2 & 0x3f);
          }
          goto code_r0x00010924754c;
        case 0x23:
          goto code_r0x0001092475bc;
        default:
          FUN_109231308(appuStack_b0,&UNK_10f55eb4e);
          FUN_109247f2c(appuStack_b0);
          goto LAB_109247ae4;
        }
        plVar9 = (long *)(piVar13 + 4);
        goto code_r0x00010924754c;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  *(undefined8 *)(param_1 + 0x5968) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_109256ad4(plStack_c8 + 0x13);
  func_0x00010925ac94(plStack_c8 + 0x1a);
  for (; param_10 != 0; param_10 = param_10 + -1) {
    FUN_10926c5f4(*param_9);
    param_9 = param_9 + 1;
  }
  if ((param_13 == 0) || (FUN_109254fec(), param_13 == 0)) {
    if (param_11 == 1) goto LAB_1092479ac;
  }
  else if ((param_11 == 1) || ((*(byte *)((long)plStack_c8 + 0x2da) & 1) == 0)) {
LAB_1092479ac:
    _glFlush();
  }
  plVar6 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar1 = plStack_128 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  appuStack_b0[0] = &puStack_110;
  FUN_109247e28(appuStack_b0);
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  FUN_109247c50(&pbStack_f8);
  if (param_11 == 2) {
    _glFinish();
    func_0x000109fcd53c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x888));
  }
LAB_109247a54:
  plVar6 = &lStack_98;
  FUN_109253f94();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_109247c14(auStack_120);
  FUN_109247c50(&pbStack_f8);
  FUN_109253f94(&lStack_98);
  __Unwind_Resume(plVar6);
  func_0x000104bd46a0();
  lVar8 = *plVar6;
  plVar1 = (long *)plVar6[1];
  *(undefined8 *)(lVar8 + 0x5968) = 0;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  FUN_109256ad4(*plVar1 + 0x98);
  func_0x00010925ac94(*(long *)plVar6[1] + 0xd0);
  return plVar6;
code_r0x0001092475bc:
  plVar9 = (long *)(piVar13 + 10);
  goto code_r0x00010924754c;
}



/* Entry: 109247bc4; end: 109247c0f;  */

long * FUN_109247bc4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  *(undefined8 *)(lVar1 + 0x5968) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  FUN_109256ad4(*plVar2 + 0x98);
  func_0x00010925ac94(*(long *)param_1[1] + 0xd0);
  return param_1;
}



/* Entry: 109247c10; end: 109247c13;  */

void FUN_109247c10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFlush_11034b590)();
  return;
}



/* Entry: 109247c14; end: 109247c4f;  */

void FUN_109247c14(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x10;
  FUN_109247e28(&lStack_28);
  FUN_1092328e4(param_1);
  return;
}



/* Entry: 109247c50; end: 109247ccb;  */

undefined8 * FUN_109247c50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = param_1[4];
  if (*(char *)*param_1 == '\x01') {
    lVar1 = ((undefined8 *)param_1[1])[1];
    if (lVar1 != 0) {
      plVar3 = *(long **)param_1[1];
      lVar1 = lVar1 << 3;
      do {
        if ((*(byte *)(*plVar3 + 0x98) & 1) == 0) {
          func_0x000109fcd08c(param_1[2],*plVar3,*(undefined8 *)param_1[3]);
        }
        plVar3 = plVar3 + 1;
        lVar1 = lVar1 + -8;
      } while (lVar1 != 0);
    }
  }
  FUN_10924c2a0(*(undefined8 *)(lVar2 + 0x28));
  return param_1;
}



/* Entry: 109247ccc; end: 109247e27;  */

void FUN_109247ccc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lStack_40;
  char cStack_38;
  
  _glFinish();
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x888);
  lVar5 = lVar1 + 8;
  cStack_38 = '\x01';
  lStack_40 = lVar5;
  __ZNSt3__15mutex4lockEv(lVar5);
  lVar3 = *(long *)(lVar1 + 0x78);
  if (*(long *)(lVar1 + 0x80) != lVar3) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + lVar5 + 0x10);
      if (((plVar2 != (long *)0x0) && ((*(byte *)(lVar3 + lVar5 + 0x28) & 1) == 0)) &&
         ((**(code **)(*plVar2 + 0x30))(plVar2,*(undefined8 *)(lVar3 + lVar5 + 0x20)),
         (int)plVar2 == 1)) {
        func_0x000109fcd634(lVar1,uVar4,&lStack_40);
      }
      uVar4 = uVar4 + 1;
      lVar3 = *(long *)(lVar1 + 0x78);
      lVar5 = lVar5 + 0x30;
    } while (uVar4 < (ulong)((*(long *)(lVar1 + 0x80) - lVar3 >> 4) * -0x5555555555555555));
    lVar5 = lStack_40;
    if (cStack_38 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar5);
  return;
}



/* Entry: 109247e28; end: 109247e97;  */

void FUN_109247e28(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10923273c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109247e98; end: 109247ea3;  */

void FUN_109247e98(void)

{
  return;
}



/* Entry: 109247ea4; end: 109247ef3;  */

void FUN_109247ea4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109247ef4();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae5498,FUN_109247f14);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110ae54c0;
  return;
}



/* Entry: 109247ef4; end: 109247f13;  */

void FUN_109247ef4(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110ae54c0;
  return;
}



/* Entry: 109247f14; end: 109247f17;  */

void FUN_109247f14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109247f18; end: 109247f2b;  */

void FUN_109247f18(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109247f2c; end: 109247f7b;  */

void FUN_109247f2c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109247f7c();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae54d8,FUN_109247f9c);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110ae5500;
  return;
}



/* Entry: 109247f7c; end: 109247f9b;  */

void FUN_109247f7c(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110ae5500;
  return;
}



/* Entry: 109247f9c; end: 109247f9f;  */

void FUN_109247f9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109247fa0; end: 1092480b3;  */

void FUN_109247fa0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092480b4; end: 109248163;  */

void FUN_1092480b4(undefined8 param_1,char *param_2,long param_3)

{
  int iVar1;
  
  if (*param_2 == '\x01') {
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0x235) == '\x01' && *(char *)(param_3 + 0x234) == '\x01')
      goto LAB_109248128;
      *(undefined2 *)(param_3 + 0x234) = 0x101;
    }
    _glEnable(0xb71);
  }
  else {
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0x235) == '\x01' && *(char *)(param_3 + 0x234) == '\0')
      goto LAB_109248128;
      *(undefined2 *)(param_3 + 0x234) = 0x100;
    }
    _glDisable(0xb71);
  }
LAB_109248128:
  _glDepthMask(param_2[1]);
  iVar1 = *(int *)(param_2 + 4);
  func_0x000109248038();
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x18c) == iVar1) {
      return;
    }
    *(int *)(param_3 + 0x18c) = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDepthFunc_11034b4f8)();
  return;
}



/* Entry: 109248164; end: 109248453;  */

void FUN_109248164(undefined8 param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0x243) == '\x01' && *(char *)(param_4 + 0x242) == '\x01')
      goto LAB_1092481e4;
      *(undefined2 *)(param_4 + 0x242) = 0x101;
    }
    _glEnable(0xb90);
  }
  else {
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0x243) == '\x01' && *(char *)(param_4 + 0x242) == '\0')
      goto LAB_1092481e4;
      *(undefined2 *)(param_4 + 0x242) = 0x100;
    }
    _glDisable(0xb90);
  }
LAB_1092481e4:
  if (*(char *)(param_2 + 8) != '\x01') {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x18);
  func_0x000109248038();
  iVar1 = *param_3;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (param_4 == 0) {
    _glStencilFuncSeparate(0x404);
    iVar3 = *(int *)(param_2 + 0x20);
LAB_10924828c:
    _glStencilMaskSeparate(0x404,iVar3);
  }
  else {
    if ((((*(char *)(param_4 + 0x1ec) != '\x01') || (*(int *)(param_4 + 0x1e0) != iVar3)) ||
        (*(int *)(param_4 + 0x1e4) != iVar1)) || (*(int *)(param_4 + 0x1e8) != iVar2)) {
      *(undefined1 *)(param_4 + 0x1ec) = 1;
      *(int *)(param_4 + 0x1e0) = iVar3;
      *(int *)(param_4 + 0x1e4) = iVar1;
      *(int *)(param_4 + 0x1e8) = iVar2;
      _glStencilFuncSeparate(0x404);
    }
    iVar3 = *(int *)(param_2 + 0x20);
    if ((*(char *)(param_4 + 0x1c4) != '\x01') || (*(int *)(param_4 + 0x1c0) != iVar3)) {
      *(undefined1 *)(param_4 + 0x1c4) = 1;
      *(int *)(param_4 + 0x1c0) = iVar3;
      goto LAB_10924828c;
    }
  }
  uVar4 = (ulong)*(uint *)(param_2 + 0xc);
  func_0x000109247fb4();
  uVar5 = (ulong)*(uint *)(param_2 + 0x14);
  func_0x000109247fb4();
  iVar3 = *(int *)(param_2 + 0x10);
  func_0x000109247fb4();
  if (param_4 == 0) {
LAB_109248300:
    _glStencilOpSeparate(0x404,uVar4,uVar5);
  }
  else if (((*(char *)(param_4 + 0x21c) != '\x01') || (*(int *)(param_4 + 0x210) != (int)uVar4)) ||
          ((*(int *)(param_4 + 0x214) != (int)uVar5 || (*(int *)(param_4 + 0x218) != iVar3)))) {
    *(undefined1 *)(param_4 + 0x21c) = 1;
    *(int *)(param_4 + 0x210) = (int)uVar4;
    *(int *)(param_4 + 0x214) = (int)uVar5;
    *(int *)(param_4 + 0x218) = iVar3;
    goto LAB_109248300;
  }
  iVar3 = *(int *)(param_2 + 0x30);
  func_0x000109248038();
  iVar1 = param_3[1];
  iVar2 = *(int *)(param_2 + 0x34);
  if (param_4 == 0) {
    _glStencilFuncSeparate(0x405);
    iVar3 = *(int *)(param_2 + 0x38);
  }
  else {
    if ((((*(char *)(param_4 + 0x1fc) != '\x01') || (*(int *)(param_4 + 0x1f0) != iVar3)) ||
        (*(int *)(param_4 + 500) != iVar1)) || (*(int *)(param_4 + 0x1f8) != iVar2)) {
      *(undefined1 *)(param_4 + 0x1fc) = 1;
      *(int *)(param_4 + 0x1f0) = iVar3;
      *(int *)(param_4 + 500) = iVar1;
      *(int *)(param_4 + 0x1f8) = iVar2;
      _glStencilFuncSeparate(0x405);
    }
    iVar3 = *(int *)(param_2 + 0x38);
    if ((*(char *)(param_4 + 0x1cc) == '\x01') && (*(int *)(param_4 + 0x1c8) == iVar3))
    goto LAB_1092483b4;
    *(undefined1 *)(param_4 + 0x1cc) = 1;
    *(int *)(param_4 + 0x1c8) = iVar3;
  }
  _glStencilMaskSeparate(0x405,iVar3);
LAB_1092483b4:
  uVar4 = (ulong)*(uint *)(param_2 + 0x24);
  func_0x000109247fb4();
  uVar5 = (ulong)*(uint *)(param_2 + 0x2c);
  func_0x000109247fb4();
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000109247fb4();
  if (param_4 != 0) {
    if (((*(char *)(param_4 + 0x22c) == '\x01') && (*(int *)(param_4 + 0x220) == (int)uVar4)) &&
       ((*(int *)(param_4 + 0x224) == (int)uVar5 && (*(int *)(param_4 + 0x228) == iVar3)))) {
      return;
    }
    *(undefined1 *)(param_4 + 0x22c) = 1;
    *(int *)(param_4 + 0x220) = (int)uVar4;
    *(int *)(param_4 + 0x224) = (int)uVar5;
    *(int *)(param_4 + 0x228) = iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glStencilOpSeparate_11034b7d0)(0x405,uVar4,uVar5);
  return;
}



/* Entry: 109248454; end: 109248633;  */

void FUN_109248454(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = (int)param_4;
  if (param_3 == 2) {
    *(int *)(param_2 + 0x340) = iVar6;
    *(int *)(param_2 + 0x344) = iVar6;
    lVar7 = *(long *)(param_2 + 0x338);
    if (lVar7 != 0) {
      iVar3 = *(int *)(lVar7 + 800);
      func_0x000109248038();
      iVar1 = *(int *)(lVar7 + 0x324);
      if (param_5 != 0) {
        if (((*(char *)(param_5 + 0x1ec) == '\x01') && (*(int *)(param_5 + 0x1e0) == iVar3)) &&
           ((*(int *)(param_5 + 0x1e4) == iVar6 && (*(int *)(param_5 + 0x1e8) == iVar1)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          *(undefined1 *)(param_5 + 0x1ec) = 1;
          *(int *)(param_5 + 0x1e0) = iVar3;
          *(int *)(param_5 + 0x1e4) = iVar6;
          *(int *)(param_5 + 0x1e8) = iVar1;
        }
        if ((((*(char *)(param_5 + 0x1fc) == '\x01') && (*(int *)(param_5 + 0x1f0) == iVar3)) &&
            (*(int *)(param_5 + 500) == iVar6)) && (*(int *)(param_5 + 0x1f8) == iVar1)) {
          if (!bVar2) {
            return;
          }
        }
        else {
          *(undefined1 *)(param_5 + 0x1fc) = 1;
          *(int *)(param_5 + 0x1f0) = iVar3;
          *(int *)(param_5 + 500) = iVar6;
          *(int *)(param_5 + 0x1f8) = iVar1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glStencilFunc_11034b7a8)();
      return;
    }
  }
  else {
    *(int *)(param_2 + 0x340 + (ulong)param_3 * 4) = iVar6;
    lVar7 = *(long *)(param_2 + 0x338);
    if (lVar7 != 0) {
      if (param_3 == 0) {
        uVar4 = (ulong)*(uint *)(lVar7 + 800);
        func_0x000109248038();
        iVar3 = *(int *)(lVar7 + 0x324);
        if (param_5 != 0) {
          if ((((*(char *)(param_5 + 0x1ec) == '\x01') && (*(int *)(param_5 + 0x1e0) == (int)uVar4))
              && (*(int *)(param_5 + 0x1e4) == iVar6)) && (*(int *)(param_5 + 0x1e8) == iVar3)) {
            return;
          }
          *(undefined1 *)(param_5 + 0x1ec) = 1;
          *(int *)(param_5 + 0x1e0) = (int)uVar4;
          *(int *)(param_5 + 0x1e4) = iVar6;
          *(int *)(param_5 + 0x1e8) = iVar3;
        }
        uVar5 = 0x404;
      }
      else {
        uVar4 = (ulong)*(uint *)(lVar7 + 0x338);
        func_0x000109248038();
        iVar3 = *(int *)(lVar7 + 0x33c);
        if (param_5 != 0) {
          if (((*(char *)(param_5 + 0x1fc) == '\x01') && (*(int *)(param_5 + 0x1f0) == (int)uVar4))
             && ((*(int *)(param_5 + 500) == iVar6 && (*(int *)(param_5 + 0x1f8) == iVar3)))) {
            return;
          }
          *(undefined1 *)(param_5 + 0x1fc) = 1;
          *(int *)(param_5 + 0x1f0) = (int)uVar4;
          *(int *)(param_5 + 500) = iVar6;
          *(int *)(param_5 + 0x1f8) = iVar3;
        }
        uVar5 = 0x405;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glStencilFuncSeparate_11034b7b0)(uVar5,uVar4,param_4);
      return;
    }
  }
  return;
}



/* Entry: 109248634; end: 1092486c7;  */

void FUN_109248634(undefined8 param_1,char *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  
  pcVar12 = param_2;
  if (param_2[4] == '\x01') {
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0x23d) == '\x01' && *(char *)(param_3 + 0x23c) == '\x01')
      goto LAB_1092486a4;
      *(undefined2 *)(param_3 + 0x23c) = 0x101;
    }
    _glEnable(0x809e);
  }
  else {
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0x23d) == '\x01' && *(char *)(param_3 + 0x23c) == '\0')
      goto LAB_1092486a4;
      *(undefined2 *)(param_3 + 0x23c) = 0x100;
    }
    _glDisable(0x809e);
  }
LAB_1092486a4:
  if (param_2[5] != '\x01') {
    return;
  }
  puVar8 = &UNK_10f55ec40;
  FUN_109244fe8();
  if (puVar8[0x29] == '\x01') {
    if (*(long *)(pcVar12 + 0x100) == 0) {
      return;
    }
    uVar24 = 0;
    do {
      pcVar20 = pcVar12 + uVar24 * 0x20;
      uVar2 = *(uint *)(pcVar20 + 0x1c);
      FUN_109248cd8(puVar8,uVar24,uVar2 & 1,uVar2 >> 1 & 1,uVar2 >> 2 & 1,uVar2 >> 3 & 1,param_3);
      if (*pcVar20 == '\x01') {
        puVar14 = (undefined8 *)(puVar8 + 0x910);
        if (param_3 == 0) goto LAB_1092487bc;
        pcVar13 = (char *)(*(long *)(param_3 + 600) + uVar24 * 0x28);
        if ((pcVar13[1] != '\x01') || (*pcVar13 != '\x01')) {
          pcVar13[0] = '\x01';
          pcVar13[1] = '\x01';
          goto LAB_1092487bc;
        }
      }
      else {
        puVar14 = (undefined8 *)(puVar8 + 0x918);
        if (param_3 != 0) {
          pcVar13 = (char *)(*(long *)(param_3 + 600) + uVar24 * 0x28);
          if ((pcVar13[1] == '\x01') && (*pcVar13 == '\0')) goto LAB_1092487cc;
          pcVar13[0] = '\0';
          pcVar13[1] = '\x01';
        }
LAB_1092487bc:
        (*(code *)*puVar14)(0xbe2,uVar24);
      }
LAB_1092487cc:
      uVar9 = (ulong)*(uint *)(pcVar20 + 0xc);
      func_0x000109247fe0();
      uVar10 = (ulong)*(uint *)(pcVar20 + 0x18);
      func_0x000109247fe0();
      if (param_3 == 0) {
LAB_109248820:
        (**(code **)(puVar8 + 0x920))(uVar24,uVar9);
      }
      else {
        lVar15 = *(long *)(param_3 + 600) + uVar24 * 0x28;
        if ((*(char *)(lVar15 + 0x10) != '\x01') ||
           (*(int *)(lVar15 + 8) != (int)uVar9 || *(int *)(lVar15 + 0xc) != (int)uVar10)) {
          *(undefined1 *)(lVar15 + 0x10) = 1;
          *(ulong *)(lVar15 + 8) = uVar9 & 0xffffffff | uVar10 << 0x20;
          goto LAB_109248820;
        }
      }
      uVar9 = (ulong)*(uint *)(pcVar20 + 4);
      func_0x00010924800c();
      uVar10 = (ulong)*(uint *)(pcVar20 + 8);
      func_0x00010924800c();
      uVar11 = (ulong)*(uint *)(pcVar20 + 0x10);
      func_0x00010924800c();
      iVar7 = *(int *)(pcVar20 + 0x14);
      func_0x00010924800c();
      pcVar16 = *(code **)(puVar8 + 0x928);
      if (param_3 == 0) {
LAB_1092488bc:
        (*pcVar16)(uVar24,uVar9,uVar10,uVar11);
      }
      else {
        lVar15 = *(long *)(param_3 + 600) + uVar24 * 0x28;
        if ((((*(char *)(lVar15 + 0x24) != '\x01') || (*(int *)(lVar15 + 0x14) != (int)uVar9)) ||
            (*(int *)(lVar15 + 0x18) != (int)uVar10)) ||
           ((*(int *)(lVar15 + 0x1c) != (int)uVar11 || (*(int *)(lVar15 + 0x20) != iVar7)))) {
          *(undefined1 *)(lVar15 + 0x24) = 1;
          *(int *)(lVar15 + 0x14) = (int)uVar9;
          *(int *)(lVar15 + 0x18) = (int)uVar10;
          *(int *)(lVar15 + 0x1c) = (int)uVar11;
          *(int *)(lVar15 + 0x20) = iVar7;
          goto LAB_1092488bc;
        }
      }
      uVar24 = (ulong)((int)uVar24 + 1);
      if (*(ulong *)(pcVar12 + 0x100) <= uVar24) {
        return;
      }
    } while( true );
  }
  if (*(long *)(pcVar12 + 0x100) == 0) {
    return;
  }
  uVar2 = *(uint *)(pcVar12 + 0x1c);
  uVar4 = uVar2 >> 1 & 1;
  uVar5 = uVar2 >> 2 & 1;
  uVar6 = uVar2 >> 3 & 1;
  if (param_3 == 0) {
LAB_1092489a0:
    _glColorMask();
LAB_1092489a4:
    if (*pcVar12 == '\x01') {
      if (param_3 != 0) {
        lVar17 = *(long *)(param_3 + 600);
        lVar15 = *(long *)(param_3 + 0x260) - lVar17;
        if (lVar15 == 0) goto LAB_109248ad8;
        bVar19 = false;
        lVar18 = 0;
        lVar15 = lVar15 >> 3;
        do {
          lVar3 = lVar18 * 0x28;
          lVar18 = lVar18 + 1;
          pcVar20 = (char *)(lVar17 + 1 + lVar3);
          while ((*pcVar20 == '\x01' && (pcVar20[-1] == '\x01'))) {
            *pcVar20 = '\x01';
            lVar18 = lVar18 + 1;
            pcVar20 = pcVar20 + 0x28;
            if (lVar15 * 0x3333333333333333 + lVar18 == 1) {
              if (!bVar19) goto LAB_109248ad8;
              goto LAB_109248ac0;
            }
          }
          pcVar20[-1] = '\x01';
          pcVar20[0] = '\x01';
          bVar19 = true;
        } while (lVar18 != lVar15 * -0x3333333333333333);
      }
LAB_109248ac0:
      _glEnable(0xbe2);
    }
    else {
      if (param_3 != 0) {
        lVar17 = *(long *)(param_3 + 600);
        lVar15 = *(long *)(param_3 + 0x260) - lVar17;
        if (lVar15 == 0) goto LAB_109248ad8;
        bVar19 = false;
        lVar18 = 0;
        lVar15 = lVar15 >> 3;
        do {
          lVar3 = lVar18 * 0x28;
          lVar18 = lVar18 + 1;
          pcVar20 = (char *)(lVar17 + 1 + lVar3);
          while ((*pcVar20 == '\x01' && (pcVar20[-1] == '\0'))) {
            *pcVar20 = '\x01';
            lVar18 = lVar18 + 1;
            pcVar20 = pcVar20 + 0x28;
            if (lVar15 * 0x3333333333333333 + lVar18 == 1) {
              if (!bVar19) goto LAB_109248ad8;
              goto LAB_109248ad0;
            }
          }
          pcVar20[-1] = '\0';
          pcVar20[0] = '\x01';
          bVar19 = true;
        } while (lVar18 != lVar15 * -0x3333333333333333);
      }
LAB_109248ad0:
      _glDisable(0xbe2);
    }
  }
  else {
    lVar15 = *(long *)(param_3 + 600);
    lVar17 = *(long *)(param_3 + 0x260);
    if (lVar15 != lVar17) {
      uVar1 = uVar5 << 0x10 | uVar6 << 0x18 | uVar4 << 8 | uVar2 & 1;
      bVar19 = true;
      do {
        while (((*(char *)(lVar15 + 6) != '\x01' || ((uint)*(byte *)(lVar15 + 2) != (uVar2 & 1))) ||
               ((*(byte *)(lVar15 + 3) != uVar4 ||
                ((*(byte *)(lVar15 + 4) != uVar5 || (*(byte *)(lVar15 + 5) != uVar6))))))) {
          bVar19 = false;
          *(undefined1 *)(lVar15 + 6) = 1;
          *(uint *)(lVar15 + 2) = uVar1;
          lVar15 = lVar15 + 0x28;
          if (lVar15 == lVar17) goto LAB_1092489a0;
        }
        *(undefined1 *)(lVar15 + 6) = 1;
        *(uint *)(lVar15 + 2) = uVar1;
        lVar15 = lVar15 + 0x28;
      } while (lVar15 != lVar17);
      if (!bVar19) goto LAB_1092489a0;
      goto LAB_1092489a4;
    }
  }
LAB_109248ad8:
  uVar24 = (ulong)*(uint *)(pcVar12 + 0xc);
  func_0x000109247fe0();
  uVar9 = (ulong)*(uint *)(pcVar12 + 0x18);
  func_0x000109247fe0();
  if (((((puVar8[0x34] & 1) == 0) &&
       (0xfffffffd < (int)uVar24 - 0x8009U || 0xfffffffd < (int)uVar9 - 0x8009U)) &&
      (lVar15 = *(long *)(puVar8 + 8), (*(byte *)(lVar15 + 1) >> 2 & 1) != 0)) &&
     (*(uint *)(lVar15 + 8) < 6)) {
    func_0x000109fd19d0(lVar15,5,0x400,&UNK_10f55ecb7,0x38);
  }
  if (param_3 != 0) {
    lVar15 = *(long *)(param_3 + 600);
    lVar17 = *(long *)(param_3 + 0x260);
    if (lVar15 == lVar17) goto LAB_109248bc4;
    uVar10 = uVar24 & 0xffffffff | uVar9 << 0x20;
    bVar19 = true;
    do {
      while ((*(char *)(lVar15 + 0x10) != '\x01' ||
             (*(int *)(lVar15 + 8) != (int)uVar24 || *(int *)(lVar15 + 0xc) != (int)uVar9))) {
        bVar19 = false;
        *(undefined1 *)(lVar15 + 0x10) = 1;
        *(ulong *)(lVar15 + 8) = uVar10;
        lVar15 = lVar15 + 0x28;
        if (lVar15 == lVar17) goto LAB_109248bb8;
      }
      *(undefined1 *)(lVar15 + 0x10) = 1;
      *(ulong *)(lVar15 + 8) = uVar10;
      lVar15 = lVar15 + 0x28;
    } while (lVar15 != lVar17);
    if (bVar19) goto LAB_109248bc4;
  }
LAB_109248bb8:
  _glBlendEquationSeparate(uVar24,uVar9);
LAB_109248bc4:
  uVar24 = (ulong)*(uint *)(pcVar12 + 4);
  func_0x00010924800c();
  uVar9 = (ulong)*(uint *)(pcVar12 + 8);
  func_0x00010924800c();
  uVar10 = (ulong)*(uint *)(pcVar12 + 0x10);
  func_0x00010924800c();
  iVar7 = *(int *)(pcVar12 + 0x14);
  func_0x00010924800c();
  if (param_3 != 0) {
    lVar15 = *(long *)(param_3 + 0x260);
    if (*(long *)(param_3 + 600) == lVar15) {
      return;
    }
    bVar19 = true;
    lVar17 = *(long *)(param_3 + 600);
    do {
      while( true ) {
        lVar18 = lVar17 + 0x28;
        iVar21 = (int)uVar24;
        iVar22 = (int)uVar9;
        iVar23 = (int)uVar10;
        if (((*(char *)(lVar17 + 0x24) != '\x01') || (*(int *)(lVar17 + 0x14) != iVar21)) ||
           ((*(int *)(lVar17 + 0x18) != iVar22 ||
            ((*(int *)(lVar17 + 0x1c) != iVar23 || (*(int *)(lVar17 + 0x20) != iVar7)))))) break;
        *(undefined1 *)(lVar17 + 0x24) = 1;
        *(int *)(lVar17 + 0x14) = iVar21;
        *(int *)(lVar17 + 0x18) = iVar22;
        *(int *)(lVar17 + 0x1c) = iVar23;
        lVar17 = lVar18;
        if (lVar18 == lVar15) {
          if (bVar19) {
            return;
          }
          goto LAB_109248cac;
        }
      }
      bVar19 = false;
      *(undefined1 *)(lVar17 + 0x24) = 1;
      *(int *)(lVar17 + 0x14) = iVar21;
      *(int *)(lVar17 + 0x18) = iVar22;
      *(int *)(lVar17 + 0x1c) = iVar23;
      *(int *)(lVar17 + 0x20) = iVar7;
      lVar17 = lVar18;
    } while (lVar18 != lVar15);
  }
LAB_109248cac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendFuncSeparate_11034b3c0)(uVar24,uVar9,uVar10);
  return;
}



/* Entry: 1092486c8; end: 109248cd7;  */

void FUN_1092486c8(long param_1,char *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  
  if (*(char *)(param_1 + 0x29) == '\x01') {
    if (*(long *)(param_2 + 0x100) == 0) {
      return;
    }
    uVar22 = 0;
    do {
      pcVar18 = param_2 + uVar22 * 0x20;
      uVar2 = *(uint *)(pcVar18 + 0x1c);
      FUN_109248cd8(param_1,uVar22,uVar2 & 1,uVar2 >> 1 & 1,uVar2 >> 2 & 1,uVar2 >> 3 & 1,param_3);
      if (*pcVar18 == '\x01') {
        puVar12 = (undefined8 *)(param_1 + 0x910);
        if (param_3 == 0) goto LAB_1092487bc;
        pcVar11 = (char *)(*(long *)(param_3 + 600) + uVar22 * 0x28);
        if ((pcVar11[1] != '\x01') || (*pcVar11 != '\x01')) {
          pcVar11[0] = '\x01';
          pcVar11[1] = '\x01';
          goto LAB_1092487bc;
        }
      }
      else {
        puVar12 = (undefined8 *)(param_1 + 0x918);
        if (param_3 != 0) {
          pcVar11 = (char *)(*(long *)(param_3 + 600) + uVar22 * 0x28);
          if ((pcVar11[1] == '\x01') && (*pcVar11 == '\0')) goto LAB_1092487cc;
          pcVar11[0] = '\0';
          pcVar11[1] = '\x01';
        }
LAB_1092487bc:
        (*(code *)*puVar12)(0xbe2,uVar22);
      }
LAB_1092487cc:
      uVar8 = (ulong)*(uint *)(pcVar18 + 0xc);
      func_0x000109247fe0();
      uVar9 = (ulong)*(uint *)(pcVar18 + 0x18);
      func_0x000109247fe0();
      if (param_3 == 0) {
LAB_109248820:
        (**(code **)(param_1 + 0x920))(uVar22,uVar8);
      }
      else {
        lVar13 = *(long *)(param_3 + 600) + uVar22 * 0x28;
        if ((*(char *)(lVar13 + 0x10) != '\x01') ||
           (*(int *)(lVar13 + 8) != (int)uVar8 || *(int *)(lVar13 + 0xc) != (int)uVar9)) {
          *(undefined1 *)(lVar13 + 0x10) = 1;
          *(ulong *)(lVar13 + 8) = uVar8 & 0xffffffff | uVar9 << 0x20;
          goto LAB_109248820;
        }
      }
      uVar8 = (ulong)*(uint *)(pcVar18 + 4);
      func_0x00010924800c();
      uVar9 = (ulong)*(uint *)(pcVar18 + 8);
      func_0x00010924800c();
      uVar10 = (ulong)*(uint *)(pcVar18 + 0x10);
      func_0x00010924800c();
      iVar7 = *(int *)(pcVar18 + 0x14);
      func_0x00010924800c();
      pcVar14 = *(code **)(param_1 + 0x928);
      if (param_3 == 0) {
LAB_1092488bc:
        (*pcVar14)(uVar22,uVar8,uVar9,uVar10);
      }
      else {
        lVar13 = *(long *)(param_3 + 600) + uVar22 * 0x28;
        if ((((*(char *)(lVar13 + 0x24) != '\x01') || (*(int *)(lVar13 + 0x14) != (int)uVar8)) ||
            (*(int *)(lVar13 + 0x18) != (int)uVar9)) ||
           ((*(int *)(lVar13 + 0x1c) != (int)uVar10 || (*(int *)(lVar13 + 0x20) != iVar7)))) {
          *(undefined1 *)(lVar13 + 0x24) = 1;
          *(int *)(lVar13 + 0x14) = (int)uVar8;
          *(int *)(lVar13 + 0x18) = (int)uVar9;
          *(int *)(lVar13 + 0x1c) = (int)uVar10;
          *(int *)(lVar13 + 0x20) = iVar7;
          goto LAB_1092488bc;
        }
      }
      uVar22 = (ulong)((int)uVar22 + 1);
      if (*(ulong *)(param_2 + 0x100) <= uVar22) {
        return;
      }
    } while( true );
  }
  if (*(long *)(param_2 + 0x100) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar4 = uVar2 >> 1 & 1;
  uVar5 = uVar2 >> 2 & 1;
  uVar6 = uVar2 >> 3 & 1;
  if (param_3 == 0) {
LAB_1092489a0:
    _glColorMask();
LAB_1092489a4:
    if (*param_2 == '\x01') {
      if (param_3 != 0) {
        lVar15 = *(long *)(param_3 + 600);
        lVar13 = *(long *)(param_3 + 0x260) - lVar15;
        if (lVar13 == 0) goto LAB_109248ad8;
        bVar17 = false;
        lVar16 = 0;
        lVar13 = lVar13 >> 3;
        do {
          lVar3 = lVar16 * 0x28;
          lVar16 = lVar16 + 1;
          pcVar18 = (char *)(lVar15 + 1 + lVar3);
          while ((*pcVar18 == '\x01' && (pcVar18[-1] == '\x01'))) {
            *pcVar18 = '\x01';
            lVar16 = lVar16 + 1;
            pcVar18 = pcVar18 + 0x28;
            if (lVar13 * 0x3333333333333333 + lVar16 == 1) {
              if (!bVar17) goto LAB_109248ad8;
              goto LAB_109248ac0;
            }
          }
          pcVar18[-1] = '\x01';
          pcVar18[0] = '\x01';
          bVar17 = true;
        } while (lVar16 != lVar13 * -0x3333333333333333);
      }
LAB_109248ac0:
      _glEnable(0xbe2);
    }
    else {
      if (param_3 != 0) {
        lVar15 = *(long *)(param_3 + 600);
        lVar13 = *(long *)(param_3 + 0x260) - lVar15;
        if (lVar13 == 0) goto LAB_109248ad8;
        bVar17 = false;
        lVar16 = 0;
        lVar13 = lVar13 >> 3;
        do {
          lVar3 = lVar16 * 0x28;
          lVar16 = lVar16 + 1;
          pcVar18 = (char *)(lVar15 + 1 + lVar3);
          while ((*pcVar18 == '\x01' && (pcVar18[-1] == '\0'))) {
            *pcVar18 = '\x01';
            lVar16 = lVar16 + 1;
            pcVar18 = pcVar18 + 0x28;
            if (lVar13 * 0x3333333333333333 + lVar16 == 1) {
              if (!bVar17) goto LAB_109248ad8;
              goto LAB_109248ad0;
            }
          }
          pcVar18[-1] = '\0';
          pcVar18[0] = '\x01';
          bVar17 = true;
        } while (lVar16 != lVar13 * -0x3333333333333333);
      }
LAB_109248ad0:
      _glDisable(0xbe2);
    }
  }
  else {
    lVar13 = *(long *)(param_3 + 600);
    lVar15 = *(long *)(param_3 + 0x260);
    if (lVar13 != lVar15) {
      uVar1 = uVar5 << 0x10 | uVar6 << 0x18 | uVar4 << 8 | uVar2 & 1;
      bVar17 = true;
      do {
        while (((*(char *)(lVar13 + 6) != '\x01' || ((uint)*(byte *)(lVar13 + 2) != (uVar2 & 1))) ||
               ((*(byte *)(lVar13 + 3) != uVar4 ||
                ((*(byte *)(lVar13 + 4) != uVar5 || (*(byte *)(lVar13 + 5) != uVar6))))))) {
          bVar17 = false;
          *(undefined1 *)(lVar13 + 6) = 1;
          *(uint *)(lVar13 + 2) = uVar1;
          lVar13 = lVar13 + 0x28;
          if (lVar13 == lVar15) goto LAB_1092489a0;
        }
        *(undefined1 *)(lVar13 + 6) = 1;
        *(uint *)(lVar13 + 2) = uVar1;
        lVar13 = lVar13 + 0x28;
      } while (lVar13 != lVar15);
      if (!bVar17) goto LAB_1092489a0;
      goto LAB_1092489a4;
    }
  }
LAB_109248ad8:
  uVar22 = (ulong)*(uint *)(param_2 + 0xc);
  func_0x000109247fe0();
  uVar8 = (ulong)*(uint *)(param_2 + 0x18);
  func_0x000109247fe0();
  if (((((*(byte *)(param_1 + 0x34) & 1) == 0) &&
       (0xfffffffd < (int)uVar22 - 0x8009U || 0xfffffffd < (int)uVar8 - 0x8009U)) &&
      (lVar13 = *(long *)(param_1 + 8), (*(byte *)(lVar13 + 1) >> 2 & 1) != 0)) &&
     (*(uint *)(lVar13 + 8) < 6)) {
    func_0x000109fd19d0(lVar13,5,0x400,&UNK_10f55ecb7,0x38);
  }
  if (param_3 != 0) {
    lVar13 = *(long *)(param_3 + 600);
    lVar15 = *(long *)(param_3 + 0x260);
    if (lVar13 == lVar15) goto LAB_109248bc4;
    uVar9 = uVar22 & 0xffffffff | uVar8 << 0x20;
    bVar17 = true;
    do {
      while ((*(char *)(lVar13 + 0x10) != '\x01' ||
             (*(int *)(lVar13 + 8) != (int)uVar22 || *(int *)(lVar13 + 0xc) != (int)uVar8))) {
        bVar17 = false;
        *(undefined1 *)(lVar13 + 0x10) = 1;
        *(ulong *)(lVar13 + 8) = uVar9;
        lVar13 = lVar13 + 0x28;
        if (lVar13 == lVar15) goto LAB_109248bb8;
      }
      *(undefined1 *)(lVar13 + 0x10) = 1;
      *(ulong *)(lVar13 + 8) = uVar9;
      lVar13 = lVar13 + 0x28;
    } while (lVar13 != lVar15);
    if (bVar17) goto LAB_109248bc4;
  }
LAB_109248bb8:
  _glBlendEquationSeparate(uVar22,uVar8);
LAB_109248bc4:
  uVar22 = (ulong)*(uint *)(param_2 + 4);
  func_0x00010924800c();
  uVar8 = (ulong)*(uint *)(param_2 + 8);
  func_0x00010924800c();
  uVar9 = (ulong)*(uint *)(param_2 + 0x10);
  func_0x00010924800c();
  iVar7 = *(int *)(param_2 + 0x14);
  func_0x00010924800c();
  if (param_3 != 0) {
    lVar13 = *(long *)(param_3 + 0x260);
    if (*(long *)(param_3 + 600) == lVar13) {
      return;
    }
    bVar17 = true;
    lVar15 = *(long *)(param_3 + 600);
    do {
      while( true ) {
        lVar16 = lVar15 + 0x28;
        iVar19 = (int)uVar22;
        iVar20 = (int)uVar8;
        iVar21 = (int)uVar9;
        if (((*(char *)(lVar15 + 0x24) != '\x01') || (*(int *)(lVar15 + 0x14) != iVar19)) ||
           ((*(int *)(lVar15 + 0x18) != iVar20 ||
            ((*(int *)(lVar15 + 0x1c) != iVar21 || (*(int *)(lVar15 + 0x20) != iVar7)))))) break;
        *(undefined1 *)(lVar15 + 0x24) = 1;
        *(int *)(lVar15 + 0x14) = iVar19;
        *(int *)(lVar15 + 0x18) = iVar20;
        *(int *)(lVar15 + 0x1c) = iVar21;
        lVar15 = lVar16;
        if (lVar16 == lVar13) {
          if (bVar17) {
            return;
          }
          goto LAB_109248cac;
        }
      }
      bVar17 = false;
      *(undefined1 *)(lVar15 + 0x24) = 1;
      *(int *)(lVar15 + 0x14) = iVar19;
      *(int *)(lVar15 + 0x18) = iVar20;
      *(int *)(lVar15 + 0x1c) = iVar21;
      *(int *)(lVar15 + 0x20) = iVar7;
      lVar15 = lVar16;
    } while (lVar16 != lVar13);
  }
LAB_109248cac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendFuncSeparate_11034b3c0)(uVar22,uVar8,uVar9);
  return;
}



/* Entry: 109248cd8; end: 109248d5f;  */

void FUN_109248cd8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  
  if (param_7 != 0) {
    lVar1 = *(long *)(param_7 + 600) + (param_2 & 0xffffffff) * 0x28;
    if ((((*(char *)(lVar1 + 6) == '\x01') && ((uint)*(byte *)(lVar1 + 2) == (uint)param_3)) &&
        ((uint)*(byte *)(lVar1 + 3) == (uint)param_4)) &&
       (((uint)*(byte *)(lVar1 + 4) == (uint)param_5 &&
        ((uint)*(byte *)(lVar1 + 5) == (uint)param_6)))) {
      return;
    }
    *(undefined1 *)(lVar1 + 6) = 1;
    *(uint *)(lVar1 + 2) =
         (uint)param_5 << 0x10 | (uint)param_6 << 0x18 | (uint)param_4 << 8 | (uint)param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000109248d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x908))(param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 109248d60; end: 10924955b;  */

void FUN_109248d60(long param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  char *pcVar8;
  code *pcVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  int aiStack_6c [3];
  
  pcVar8 = param_2;
  if (*param_2 == '\x01') {
    if (*(char *)(param_1 + 0x33) != '\0') {
      if (param_3 != 0) {
        if (*(char *)(param_3 + 0x23b) == '\x01' && *(char *)(param_3 + 0x23a) == '\0')
        goto LAB_109248df8;
        *(undefined2 *)(param_3 + 0x23a) = 0x100;
      }
      _glDisable(0x8c89);
    }
  }
  else if (*(char *)(param_1 + 0x33) != '\0') {
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0x23b) == '\x01' && *(char *)(param_3 + 0x23a) == '\x01')
      goto LAB_109248df8;
      *(undefined2 *)(param_3 + 0x23a) = 0x101;
    }
    _glEnable(0x8c89);
  }
LAB_109248df8:
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 - 3U < 6) {
    uVar7 = *(uint *)(&UNK_10dfbd5e4 + (ulong)(iVar2 - 3U) * 4);
  }
  else {
    uVar7 = 1;
  }
  if (iVar2 - 1U < 8) {
    pcVar16 = (char *)(ulong)*(uint *)(&UNK_10dfbd5fc + (ulong)(iVar2 - 1U) * 4);
  }
  else {
    pcVar16 = (char *)0x1;
  }
  uVar15 = (uint)pcVar16;
  if (*(char *)(param_1 + 0x47) == '\x01') {
    if (param_3 == 0) {
LAB_109248e88:
      pcVar8 = (char *)0x96d2;
      (*pcRam0000000113829e40)(0x96d2);
    }
    else {
      aiStack_6c[1] = 0x96d2;
      aiStack_6c[2] = 0x96d2;
      if ((*(char *)(param_3 + 0x164) != '\x01') || (*(long *)(param_3 + 0x15c) != 0x96d2000096d2))
      {
        *(undefined1 *)(param_3 + 0x164) = 1;
        *(long *)(param_3 + 0x15c) = 0x96d2000096d2;
        goto LAB_109248e88;
      }
    }
    iVar2 = 0;
    if ((((uVar7 < 5) && ((1 << (ulong)(uVar7 & 0x1f) & 0x16U) != 0)) && (iVar2 = 0, uVar15 < 5)) &&
       ((1 << (ulong)(uVar15 & 0x1f) & 0x16U) != 0)) {
      iVar2 = *(int *)(&UNK_10dfbd4f0 +
                      (ulong)((uVar7 & 0xfffffffe) + (uVar7 >> 1) + (uVar15 >> 1)) * 4);
    }
    pcVar9 = pcRam0000000113829e38;
    if (param_3 != 0) {
      if ((*(char *)(param_3 + 0x158) == '\x01') && (*(int *)(param_3 + 0x154) == iVar2))
      goto LAB_1092490cc;
      *(undefined1 *)(param_3 + 0x158) = 1;
      *(int *)(param_3 + 0x154) = iVar2;
      pcVar9 = pcRam0000000113829e38;
    }
LAB_1092490c8:
    (*pcVar9)();
  }
  else {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      if (param_3 == 0) {
LAB_109249084:
        _glEnable(0x96a5);
        FUN_10924955c();
        pcVar8 = pcVar16;
        pcVar9 = pcRam0000000113829e58;
        if (param_3 != 0) goto LAB_10924909c;
      }
      else {
        if ((*(char *)(param_3 + 0x247) != '\x01') || (*(char *)(param_3 + 0x246) != '\x01')) {
          *(undefined2 *)(param_3 + 0x246) = 0x101;
          goto LAB_109249084;
        }
        FUN_10924955c();
        pcVar8 = pcVar16;
LAB_10924909c:
        if ((*(char *)(param_3 + 0x16c) == '\x01') && (*(uint *)(param_3 + 0x168) == uVar7))
        goto LAB_1092490cc;
        *(undefined1 *)(param_3 + 0x16c) = 1;
        *(uint *)(param_3 + 0x168) = uVar7;
        pcVar9 = pcRam0000000113829e58;
      }
      goto LAB_1092490c8;
    }
    if (*(char *)(param_1 + 0x49) == '\x01') {
      if (iVar2 == 0) {
        if (param_3 != 0) {
          if ((*(char *)(param_3 + 0x245) == '\x01') && (*(char *)(param_3 + 0x244) == '\0'))
          goto LAB_1092490cc;
          *(undefined2 *)(param_3 + 0x244) = 0x100;
        }
        _glDisable(0x9563);
      }
      else {
        if (param_3 == 0) {
LAB_109248f94:
          (*pcRam0000000113829e48)(0);
        }
        else if ((*(char *)(param_3 + 0x174) != '\x01') || (*(int *)(param_3 + 0x170) != 0)) {
          *(undefined1 *)(param_3 + 0x174) = 1;
          *(undefined4 *)(param_3 + 0x170) = 0;
          goto LAB_109248f94;
        }
        aiStack_6c[0] = 0;
        if ((((uVar7 < 5) && ((1 << (ulong)(uVar7 & 0x1f) & 0x16U) != 0)) &&
            (aiStack_6c[0] = 0, uVar15 < 5)) && ((1 << (ulong)(uVar15 & 0x1f) & 0x16U) != 0)) {
          aiStack_6c[0] =
               *(int *)(&UNK_10dfbd514 +
                       (ulong)((uVar7 & 0xfffffffe) + (uVar7 >> 1) + (uVar15 >> 1)) * 4);
        }
        if (param_3 == 0) {
          pcVar8 = (char *)0x0;
          (*pcRam0000000113829e50)(0,0,1,aiStack_6c);
        }
        else {
          if (((*(char *)(param_3 + 0x184) != '\x01') ||
              (*(int *)(param_3 + 0x178) != 0 || *(int *)(param_3 + 0x17c) != 0)) ||
             (*(int *)(param_3 + 0x180) != aiStack_6c[0])) {
            *(undefined1 *)(param_3 + 0x184) = 1;
            *(undefined8 *)(param_3 + 0x178) = 0;
            *(int *)(param_3 + 0x180) = aiStack_6c[0];
            pcVar8 = (char *)0x0;
            (*pcRam0000000113829e50)(0,0,1,aiStack_6c);
          }
          if ((*(char *)(param_3 + 0x245) == '\x01') && (*(char *)(param_3 + 0x244) == '\x01'))
          goto LAB_1092490cc;
          *(undefined2 *)(param_3 + 0x244) = 0x101;
        }
        _glEnable(0x9563);
      }
    }
  }
LAB_1092490cc:
  uVar7 = (uint)pcVar8;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 == 2) {
      if (param_3 != 0) {
        if ((*(char *)(param_3 + 0x233) == '\x01') && (*(char *)(param_3 + 0x232) == '\0'))
        goto LAB_109249170;
        *(undefined2 *)(param_3 + 0x232) = 0x100;
      }
      _glDisable(0xb44);
    }
    else {
      if (param_3 == 0) {
LAB_109249130:
        _glEnable(0xb44);
        iVar2 = *(int *)(param_2 + 8);
      }
      else if ((*(char *)(param_3 + 0x233) != '\x01') || (*(char *)(param_3 + 0x232) != '\x01')) {
        *(undefined2 *)(param_3 + 0x232) = 0x101;
        goto LAB_109249130;
      }
      uVar7 = (uint)pcVar8;
      if (iVar2 == 1) {
        iVar2 = 0x404;
      }
      else {
        if (iVar2 != 0) goto LAB_109249550;
        iVar2 = 0x405;
      }
      if (param_3 != 0) {
        if (*(int *)(param_3 + 0x188) == iVar2) goto LAB_109249170;
        *(int *)(param_3 + 0x188) = iVar2;
      }
      _glCullFace();
    }
LAB_109249170:
    uVar7 = (uint)pcVar8;
    uVar15 = *(uint *)(param_2 + 0x14);
    if (uVar15 != 0) {
      uVar14 = 0;
      do {
        if ((uVar14 != 0x5c89) || ((*(byte *)(param_1 + 0x33) & 1) != 0)) {
          if (param_3 == 0) goto LAB_1092493dc;
          if ((int)uVar14 < 5) {
            if (-1 < (int)uVar14) {
              if ((int)uVar14 < 2) {
                if (uVar14 == 0) {
                  lVar11 = 0xc;
                }
                else {
                  if (uVar14 != 1) goto LAB_1092493dc;
                  lVar11 = 0xd;
                }
              }
              else if (uVar14 == 2) {
                lVar11 = 0xe;
              }
              else if (uVar14 == 3) {
                lVar11 = 0xf;
              }
              else {
                if (uVar14 != 4) goto LAB_1092493dc;
                lVar11 = 0x10;
              }
              goto LAB_1092493c0;
            }
            if ((int)uVar14 < -0x2470) {
              if (uVar14 == 0xffffdb44) {
                lVar11 = 1;
              }
              else {
                if (uVar14 != 0xffffdb71) goto LAB_1092493dc;
                lVar11 = 2;
              }
              goto LAB_1092493c0;
            }
            if (uVar14 == 0xffffdb90) {
              lVar11 = 9;
              goto LAB_1092493c0;
            }
            if (uVar14 == 0xffffdbe2) {
              lVar12 = *(long *)(param_3 + 600);
              lVar11 = *(long *)(param_3 + 0x260) - lVar12;
              if (lVar11 == 0) goto LAB_1092493e4;
              bVar10 = false;
              lVar13 = 0;
              lVar11 = lVar11 >> 3;
              do {
                lVar1 = lVar13 * 0x28;
                lVar13 = lVar13 + 1;
                pcVar16 = (char *)(lVar12 + 1 + lVar1);
                while ((*pcVar16 == '\x01' && (pcVar16[-1] == '\x01'))) {
                  *pcVar16 = '\x01';
                  lVar13 = lVar13 + 1;
                  pcVar16 = pcVar16 + 0x28;
                  if (lVar11 * 0x3333333333333333 + lVar13 == 1) {
                    if (!bVar10) goto LAB_1092493e4;
                    goto LAB_1092493dc;
                  }
                }
                pcVar16[-1] = '\x01';
                pcVar16[0] = '\x01';
                bVar10 = true;
              } while (lVar13 != lVar11 * -0x3333333333333333);
            }
            else if (uVar14 == 0xffffdc11) {
              lVar11 = 8;
              goto LAB_1092493c0;
            }
          }
          else {
            if ((int)uVar14 < 0x50a0) {
              if ((int)uVar14 < 7) {
                if (uVar14 == 5) {
                  lVar11 = 0x11;
                }
                else {
                  if (uVar14 != 6) goto LAB_1092493dc;
                  lVar11 = 0x12;
                }
              }
              else if (uVar14 == 7) {
                lVar11 = 0x13;
              }
              else if (uVar14 == 0x5037) {
                lVar11 = 3;
              }
              else {
                if (uVar14 != 0x509e) goto LAB_1092493dc;
                lVar11 = 6;
              }
            }
            else if ((int)uVar14 < 0x5d69) {
              if (uVar14 == 0x50a0) {
                lVar11 = 7;
              }
              else {
                if (uVar14 != 0x5c89) goto LAB_1092493dc;
                lVar11 = 5;
              }
            }
            else if (uVar14 == 0x5d69) {
              lVar11 = 4;
            }
            else if (uVar14 == 0x6563) {
              lVar11 = 10;
            }
            else {
              if (uVar14 != 0x66a5) goto LAB_1092493dc;
              lVar11 = 0xb;
            }
LAB_1092493c0:
            pcVar16 = (char *)(param_3 + 0x230 + lVar11 * 2);
            if (pcVar16[1] == '\x01' && *pcVar16 == '\x01') goto LAB_1092493e4;
            pcVar16[0] = '\x01';
            pcVar16[1] = '\x01';
          }
LAB_1092493dc:
          _glEnable();
          uVar15 = *(uint *)(param_2 + 0x14);
        }
LAB_1092493e4:
        uVar7 = (uint)pcVar8;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
    if (*(int *)(param_2 + 0xc) == 1) {
      uVar4 = 0x900;
    }
    else {
      if (*(int *)(param_2 + 0xc) != 0) goto LAB_109249538;
      uVar4 = 0x901;
    }
    _glFrontFace(uVar4);
    if (*(int *)(param_2 + 4) == 0) {
      if (param_2[0x10] == '\x01') {
        if (param_3 != 0) {
          if ((*(char *)(param_3 + 0x237) == '\x01') && (*(char *)(param_3 + 0x236) == '\x01')) {
            return;
          }
          *(undefined2 *)(param_3 + 0x236) = 0x101;
        }
        uVar4 = 0x8037;
LAB_109249474:
        _glEnable(uVar4);
        return;
      }
      if (param_3 != 0) {
        if ((*(char *)(param_3 + 0x237) == '\x01') && (*(char *)(param_3 + 0x236) == '\0')) {
          return;
        }
        *(undefined2 *)(param_3 + 0x236) = 0x100;
      }
      uVar4 = 0x8037;
LAB_1092494a0:
      _glDisable(uVar4);
      return;
    }
    if (*(int *)(param_2 + 4) == 1) {
      uVar4 = 0x2a02;
      if (param_2[0x10] == '\x01') goto LAB_109249474;
      goto LAB_1092494a0;
    }
  }
  else {
    if (*(int *)(param_2 + 4) == 1) {
      FUN_109243bf8(&UNK_10f55ecf0);
    }
    FUN_109243bf8(&UNK_10f55eba1);
LAB_109249538:
    FUN_109243bf8(&UNK_10f55eb7a);
  }
  FUN_10924962c(&UNK_10f55ec89);
LAB_109249550:
  uVar15 = 0xf55eb8f;
  FUN_109243bf8();
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_10924955c;
  uVar3 = 0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_b0 = 0x96a7000096a6;
  uStack_a4 = 0x96a8;
  uStack_a0 = 0x96a9;
  uStack_98 = 0;
  uStack_94 = 0x96ae000096ac;
  if ((((uVar15 < 5) && ((1 << (ulong)(uVar15 & 0x1f) & 0x16U) != 0)) && (uVar3 = 0, uVar7 < 5)) &&
     ((1 << (ulong)(uVar7 & 0x1f) & 0x16U) != 0)) {
    uVar3 = *(undefined4 *)
             ((long)&uStack_b0 + (ulong)((uVar15 & 0xfffffffe) + (uVar15 >> 1) + (uVar7 >> 1)) * 4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    ___stack_chk_fail(uVar3);
    puVar5 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    FUN_10924967c();
    puVar6 = puVar5;
    ___cxa_throw(puVar5,&PTR_DAT_110ae5518,FUN_10924969c);
    ___cxa_free_exception(puVar5);
    __Unwind_Resume();
    __ZNSt13runtime_errorC2EPKc();
    *puVar6 = &PTR_FUN_110ae5540;
    return;
  }
  return;
}



/* Entry: 10924955c; end: 10924962b;  */

void FUN_10924955c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  long lStack_18;
  
  uVar1 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c = 0;
  uStack_38 = 0;
  uStack_40 = 0x96a7000096a6;
  uStack_34 = 0x96a8;
  uStack_30 = 0x96a9;
  uStack_28 = 0;
  uStack_24 = 0x96ae000096ac;
  if ((param_1 < 5) && ((1 << (ulong)(param_1 & 0x1f) & 0x16U) != 0)) {
    uVar1 = 0;
    if ((param_2 < 5) && ((1 << (ulong)(param_2 & 0x1f) & 0x16U) != 0)) {
      uVar1 = *(undefined4 *)
               ((long)&uStack_40 +
               (ulong)((param_1 & 0xfffffffe) + (param_1 >> 1) + (param_2 >> 1)) * 4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return;
  }
  ___stack_chk_fail(uVar1);
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10924967c();
  puVar3 = puVar2;
  ___cxa_throw(puVar2,&PTR_DAT_110ae5518,FUN_10924969c);
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar3 = &PTR_FUN_110ae5540;
  return;
}



/* Entry: 10924962c; end: 10924967b;  */

void FUN_10924962c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10924967c();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae5518,FUN_10924969c);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_110ae5540;
  return;
}



/* Entry: 10924967c; end: 10924969b;  */

void FUN_10924967c(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110ae5540;
  return;
}



/* Entry: 10924969c; end: 10924969f;  */

void FUN_10924969c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1092496a0; end: 1092496b3;  */

void FUN_1092496a0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092496b4; end: 109249707;  */

long * FUN_1092496b4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *param_2;
  puVar1 = (undefined8 *)(lVar7 + 0xb8);
  puVar2 = (undefined8 *)0x0;
  if (lVar7 != 0) {
    puVar2 = puVar1;
  }
  if (*(undefined8 **)(param_1 + 0x1a8) != puVar2) {
    if (*(undefined8 **)(param_1 + 0x41b8) != puVar2) {
      *(undefined8 **)(param_1 + 0x41b8) = puVar2;
      *(undefined1 *)(param_1 + 0x4580) = 1;
    }
    *(undefined8 **)(param_1 + 0x4590) = puVar2;
    *(undefined8 **)(param_1 + 0x4680) = puVar2;
    *(undefined8 **)(param_1 + 0x52f0) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x1a8) = puVar2;
  plVar5 = *(long **)(param_1 + 0x18);
  if ((*(byte *)(lVar7 + 0x3d8) & 1) == 0) {
    FUN_10925e060(puVar1);
    (**(code **)*puVar1)(puVar1);
    *(undefined1 *)(lVar7 + 0x3d8) = 1;
  }
  lVar7 = *(long *)(lVar7 + 0xd0);
  plVar6 = plVar5;
  FUN_109264b14();
  uVar3 = *(uint *)(lVar7 + 0x10);
  plVar4 = (long *)(ulong)uVar3;
  if (uVar3 != 0) {
    if (plVar5 != (long *)0x0) {
      if (*(uint *)(plVar5 + 0x20) == uVar3) {
        return plVar4;
      }
      *(uint *)(plVar5 + 0x20) = uVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glUseProgram_11034b8d0)();
    return plVar4;
  }
  plVar5 = (long *)&UNK_10f561883;
  FUN_109243bf8();
  if (*plVar5 != 0) {
    func_0x000109264f54(plVar5);
    __ZdlPv(*plVar5);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
  }
  lVar7 = *plVar6;
  plVar5[1] = plVar6[1];
  *plVar5 = lVar7;
  plVar5[2] = plVar6[2];
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar4 = plVar5 + 3;
  if (*plVar4 != 0) {
    func_0x000109264fa0(plVar4);
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
  }
  lVar7 = plVar6[3];
  plVar5[4] = plVar6[4];
  plVar5[3] = lVar7;
  plVar5[5] = plVar6[5];
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar4 = plVar5 + 6;
  if (*plVar4 != 0) {
    func_0x000109264fec(plVar4);
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
  }
  lVar7 = plVar6[6];
  plVar5[7] = plVar6[7];
  plVar5[6] = lVar7;
  plVar5[8] = plVar6[8];
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  FUN_109241b08(plVar5 + 9);
  lVar7 = plVar6[9];
  plVar5[10] = plVar6[10];
  plVar5[9] = lVar7;
  plVar5[0xb] = plVar6[0xb];
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar4 = plVar5 + 0xc;
  if (*plVar4 != 0) {
    func_0x000109265038(plVar4);
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
  }
  lVar7 = plVar6[0xc];
  plVar5[0xd] = plVar6[0xd];
  plVar5[0xc] = lVar7;
  plVar5[0xe] = plVar6[0xe];
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  if (*(char *)((long)plVar5 + 0x8f) < '\0') {
    __ZdlPv(plVar5[0xf]);
  }
  lVar8 = plVar6[0x10];
  lVar7 = plVar6[0xf];
  plVar5[0x11] = plVar6[0x11];
  plVar5[0x10] = lVar8;
  plVar5[0xf] = lVar7;
  *(undefined1 *)((long)plVar6 + 0x8f) = 0;
  *(undefined1 *)(plVar6 + 0xf) = 0;
  lVar7 = plVar6[0x12];
  *(int *)(plVar5 + 0x13) = (int)plVar6[0x13];
  plVar5[0x12] = lVar7;
  FUN_109241da0(plVar5 + 0x14);
  lVar7 = plVar6[0x14];
  plVar5[0x15] = plVar6[0x15];
  plVar5[0x14] = lVar7;
  plVar5[0x16] = plVar6[0x16];
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  lVar7 = plVar5[0x17];
  if (lVar7 != 0) {
    plVar5[0x18] = lVar7;
    __ZdlPv();
    plVar5[0x17] = 0;
    plVar5[0x18] = 0;
    plVar5[0x19] = 0;
  }
  lVar7 = plVar6[0x17];
  plVar5[0x18] = plVar6[0x18];
  plVar5[0x17] = lVar7;
  plVar5[0x19] = plVar6[0x19];
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar4 = plVar5 + 0x1a;
  if (*plVar4 != 0) {
    func_0x000109265084(plVar4);
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar5[0x1b] = 0;
    plVar5[0x1c] = 0;
  }
  lVar7 = plVar6[0x1a];
  plVar5[0x1b] = plVar6[0x1b];
  plVar5[0x1a] = lVar7;
  plVar5[0x1c] = plVar6[0x1c];
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar4 = plVar5 + 0x1d;
  if (*plVar4 != 0) {
    func_0x0001092650d0(plVar4);
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar5[0x1e] = 0;
    plVar5[0x1f] = 0;
  }
  lVar7 = plVar6[0x1d];
  plVar5[0x1e] = plVar6[0x1e];
  plVar5[0x1d] = lVar7;
  plVar5[0x1f] = plVar6[0x1f];
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  *(int *)(plVar5 + 0x20) = (int)plVar6[0x20];
  return plVar5;
}



/* Entry: 109249708; end: 109249743;  */

void FUN_109249708(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  FUN_109246e90();
  lVar2 = *(long *)(param_1 + 0x40);
  puVar1 = *(undefined4 **)(lVar2 + 8);
  uVar3 = *(long *)(lVar2 + 0x10) - (long)puVar1;
  while (uVar3 < 0x15) {
    func_0x000109246168(lVar2,0x15);
    puVar1 = *(undefined4 **)(lVar2 + 8);
    uVar3 = *(long *)(lVar2 + 0x10) - (long)puVar1;
  }
  *puVar1 = 3;
  *(ulong *)(lVar2 + 8) = (ulong)(puVar1 + 2) & 0xfffffffffffffffc;
  return;
}



/* Entry: 109249744; end: 1092497cb;  */

void FUN_109249744(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  
  lVar6 = *param_2;
  lVar7 = param_2[1];
  lVar5 = param_2[1];
  FUN_109246e90();
  FUN_1092460e0(*(undefined8 *)(param_1 + 0x40),3,1,1);
  *(long *)(param_1 + 0x58) = lVar6;
  *(long *)(param_1 + 0x60) = lVar7;
  if (lVar6 == 0 || (int)lVar5 == -1) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x22,0x10,8);
  *plVar3 = lVar6;
  *(int *)(plVar3 + 1) = (int)lVar5;
  *(undefined1 *)((long)plVar3 + 0xc) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != lVar6)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 1092497cc; end: 10924992b;  */

void FUN_1092497cc(long param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lStack_48;
  
  puVar3 = *(undefined4 **)(param_1 + 0x40);
  FUN_1092460e0(puVar3,1,0x38,8);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  *puVar3 = param_2;
  *(long *)(puVar3 + 2) = param_4;
  puVar3[0xc] = (int)param_6;
  if (param_6 != 0) {
    _memmove(puVar3 + 4,param_5,param_6 << 2);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar7 + 0x98) & 1) == 0) {
    uVar4 = *(ulong *)(param_4 + 0x850);
    if (uVar4 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        if ((*(long *)(*(long *)(param_4 + 0x848) + lVar8) != 0) && (*(int *)(lVar7 + 0x88) == 0)) {
          func_0x000109fccc60(lVar7 + 0x68);
          uVar4 = *(ulong *)(param_4 + 0x850);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar9 < uVar4);
    }
    if (*(int *)(lVar7 + 0x88) == 0) {
      func_0x000109fccc60(lVar7 + 0x68,param_4);
    }
    if (*(int *)(lVar7 + 0x60) == 0) {
      func_0x000109fccc60(lVar7 + 0x40,*(undefined8 *)(param_4 + 0x30));
    }
  }
  if (*(long *)(param_4 + 0x8a8) != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    plVar6 = *(long **)(param_4 + 0x8a0);
    plVar1 = plVar6 + *(long *)(param_4 + 0x8a8);
    do {
      lStack_48 = *plVar6;
      plVar5 = *(long **)(lVar7 + 0xb0);
      plVar2 = *(long **)(lVar7 + 0xb8);
      if (plVar5 == plVar2) {
LAB_1092498f0:
        if (plVar5 == plVar2) goto LAB_1092498f8;
      }
      else {
        do {
          if (*plVar5 == lStack_48) goto LAB_1092498f0;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar2);
LAB_1092498f8:
        FUN_109249b14(lVar7 + 0xb0,&lStack_48);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



/* Entry: 10924992c; end: 1092499cb;  */

void FUN_10924992c(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4,long param_5)

{
  if (param_5 != 0) {
    param_2 = param_2 & 0xffffffff;
    do {
      func_0x000109fd0a20(*(undefined8 *)(*(long *)(param_3 + 0x60) + param_2 * 8),*param_4);
      FUN_1092497cc(param_1,param_2);
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 1092499cc; end: 109249a1f;  */

void FUN_1092499cc(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,4,8,8);
  *plVar3 = param_2;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_2)) {
    FUN_10922d97c(&lStack_30,*puVar4);
    if (lStack_30 != 0) {
      FUN_10925df7c(puVar4 + 1,&lStack_30);
    }
    if (plStack_28 != (long *)0x0) {
      plVar3 = plStack_28 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 109249a20; end: 109249a67;  */

void FUN_109249a20(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  FUN_1092460e0(puVar1,5,0xc,4);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  return;
}



/* Entry: 109249a68; end: 109249afb;  */

void FUN_109249a68(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_109246ee0(param_1,param_1 + 0x58,0);
  lVar2 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x94) = 0;
  puVar1 = *(undefined4 **)(lVar2 + 8);
  uVar3 = *(long *)(lVar2 + 0x10) - (long)puVar1;
  while (uVar3 < 0x15) {
    func_0x000109246168(lVar2,0x15);
    puVar1 = *(undefined4 **)(lVar2 + 8);
    uVar3 = *(long *)(lVar2 + 0x10) - (long)puVar1;
  }
  *puVar1 = 6;
  *(ulong *)(lVar2 + 8) = (ulong)(puVar1 + 2) & 0xfffffffffffffffc;
  return;
}



/* Entry: 109249afc; end: 109249b13;  */

void FUN_109249afc(long param_1)

{
  if (*(long *)(param_1 + -0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109249b14; end: 109249bd7;  */

undefined1 ** FUN_109249b14(undefined1 **param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 **ppuStack_3d8;
  undefined1 **ppuStack_3d0;
  code *pcStack_3c8;
  undefined1 **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [56];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [736];
  undefined4 uStack_90;
  long lStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < param_1[2]) {
    puVar11 = puVar2 + 1;
    *puVar2 = *param_2;
    ppuVar4 = param_1;
  }
  else {
    lVar10 = (long)puVar2 - (long)*param_1;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10922d710();
      pcStack_38 = FUN_109249bd8;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar5 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x000109fc8ec0();
      *ppuVar5 = (undefined1 *)&PTR_FUN_110ae5648;
      ppuVar5[0x17] = (undefined1 *)&PTR_FUN_110ae5698;
      uVar3 = *param_3;
      FUN_109249ebc(auStack_3b0,param_3 + 0xe);
      FUN_10924a098(auStack_370,auStack_3b0);
      uStack_90 = 1;
      ppuStack_3c0 = param_1 + 7;
      uStack_3b8 = 1;
      lVar10 = 0;
      if (*(long *)(param_3 + 10) != 0) {
        lVar10 = *(long *)(param_3 + 10) + 0xb8;
      }
      FUN_10925d11c(ppuVar5 + 0x17,param_2,uVar3,0,auStack_378,&ppuStack_3c0,lVar10,
                    *(undefined8 *)(param_3 + 0xc));
      FUN_10924a120(auStack_370);
      puVar9 = auStack_3b0;
      func_0x00010922e088();
      *param_1 = (undefined1 *)&PTR_FUN_110ae5648;
      param_1[0x17] = (undefined1 *)&PTR_FUN_110ae5698;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return param_1;
      }
      ___stack_chk_fail();
      FUN_10924a120(auStack_370);
      func_0x00010922e088(auStack_3b0);
      FUN_10922dba8(param_1);
      puVar6 = puVar9;
      __Unwind_Resume();
      pcStack_3c8 = FUN_109249d0c;
      ppuVar5 = (undefined1 **)(puVar6 + 0xb8);
      puStack_3e0 = puVar9;
      ppuStack_3d8 = param_1;
      ppuStack_3d0 = &puStack_40;
      FUN_10925e1ec(ppuVar5);
      if (*(int *)(*(long *)(puVar6 + 0xd0) + 0x10) != 0) {
        uStack_400 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        FUN_10924a188(&uStack_400,*(long *)(puVar6 + 0x3f8),*(long *)(puVar6 + 0x400),
                      *(long *)(puVar6 + 0x400) - *(long *)(puVar6 + 0x3f8) >> 7);
        FUN_109249d98(puVar6 + 0x98,&uStack_400);
        ppuVar5 = &puStack_3e8;
        puStack_3e8 = (undefined1 *)&uStack_400;
        FUN_10922dc0c(ppuVar5);
      }
      return ppuVar5;
    }
    uVar7 = (long)param_1[2] - (long)*param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    ppuVar5 = param_1;
    FUN_10922d724();
    puVar2 = (undefined8 *)((long)ppuVar5 + lVar10);
    puVar11 = puVar2 + 1;
    *puVar2 = *param_2;
    puVar9 = (undefined1 *)((long)puVar2 - ((long)param_1[1] - (long)*param_1));
    _memcpy(puVar9);
    ppuVar4 = (undefined1 **)*param_1;
    *param_1 = puVar9;
    param_1[1] = (undefined1 *)puVar11;
    param_1[2] = (undefined1 *)(ppuVar5 + uVar8);
    if (ppuVar4 != (undefined1 **)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (undefined1 *)puVar11;
  return ppuVar4;
}



/* Entry: 109249bd8; end: 109249d0b;  */

undefined1 ** FUN_109249bd8(undefined1 **param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 **ppuStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined1 **ppuStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [56];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [736];
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_1;
  func_0x000109fc8ec0();
  *ppuVar3 = (undefined1 *)&PTR_FUN_110ae5648;
  ppuVar3[0x17] = (undefined1 *)&PTR_FUN_110ae5698;
  uVar2 = *param_3;
  FUN_109249ebc(auStack_380,param_3 + 0xe);
  FUN_10924a098(auStack_340,auStack_380);
  uStack_60 = 1;
  ppuStack_390 = param_1 + 7;
  uStack_388 = 1;
  lVar1 = 0;
  if (*(long *)(param_3 + 10) != 0) {
    lVar1 = *(long *)(param_3 + 10) + 0xb8;
  }
  FUN_10925d11c(ppuVar3 + 0x17,param_2,uVar2,0,auStack_348,&ppuStack_390,lVar1,
                *(undefined8 *)(param_3 + 0xc));
  FUN_10924a120(auStack_340);
  puVar4 = auStack_380;
  func_0x00010922e088();
  *param_1 = (undefined1 *)&PTR_FUN_110ae5648;
  param_1[0x17] = (undefined1 *)&PTR_FUN_110ae5698;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10924a120(auStack_340);
  func_0x00010922e088(auStack_380);
  FUN_10922dba8(param_1);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_398 = FUN_109249d0c;
  ppuVar3 = (undefined1 **)(puVar5 + 0xb8);
  puStack_3b0 = puVar4;
  ppuStack_3a8 = param_1;
  puStack_3a0 = &stack0xfffffffffffffff0;
  FUN_10925e1ec(ppuVar3);
  if (*(int *)(*(long *)(puVar5 + 0xd0) + 0x10) != 0) {
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    FUN_10924a188(&uStack_3d0,*(long *)(puVar5 + 0x3f8),*(long *)(puVar5 + 0x400),
                  *(long *)(puVar5 + 0x400) - *(long *)(puVar5 + 0x3f8) >> 7);
    FUN_109249d98(puVar5 + 0x98,&uStack_3d0);
    ppuVar3 = &puStack_3b8;
    puStack_3b8 = (undefined1 *)&uStack_3d0;
    FUN_10922dc0c(ppuVar3);
  }
  return ppuVar3;
}



/* Entry: 109249d0c; end: 109249d97;  */

void FUN_109249d0c(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  FUN_10925e1ec(param_1 + 0xb8);
  if (*(int *)(*(long *)(param_1 + 0xd0) + 0x10) != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_10924a188(&uStack_40,*(long *)(param_1 + 0x3f8),*(long *)(param_1 + 0x400),
                  *(long *)(param_1 + 0x400) - *(long *)(param_1 + 0x3f8) >> 7);
    FUN_109249d98(param_1 + 0x98,&uStack_40);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10922dc0c(&puStack_28);
  }
  return;
}



/* Entry: 109249d98; end: 109249e13;  */

undefined8 * FUN_109249d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x00010923fd80(param_1);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
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
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 109249e14; end: 109249e1b;  */

void FUN_109249e14(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  FUN_10925e1ec(param_1);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_10924a188(&uStack_40,*(long *)(param_1 + 0x340),*(long *)(param_1 + 0x348),
                  *(long *)(param_1 + 0x348) - *(long *)(param_1 + 0x340) >> 7);
    FUN_109249d98(param_1 + -0x20,&uStack_40);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10922dc0c(&puStack_28);
  }
  return;
}



/* Entry: 109249e1c; end: 109249e63;  */

long FUN_109249e1c(long param_1)

{
  if ((*(byte *)(param_1 + 0x3d8) & 1) == 0) {
    FUN_10925e060(param_1 + 0xb8);
    (*(code *)**(undefined8 **)(param_1 + 0xb8))(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x3d8) = 1;
  }
  return param_1 + 0x98;
}



/* Entry: 109249e64; end: 109249e67;  */

void FUN_109249e64(void)

{
  return;
}



/* Entry: 109249e68; end: 109249ebb;  */

undefined8 * FUN_109249e68(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  FUN_10925da08(param_1 + 0x17);
  *param_1 = &PTR_DAT_110b97a80;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_28 = param_1 + 0x13;
    FUN_10922dc0c(&puStack_28);
  }
  func_0x00010922e088(param_1 + 0xc);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109249ebc; end: 109249f13;  */

undefined1 * FUN_109249ebc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_109249f14(param_1);
    param_1[0x30] = 1;
  }
  return param_1;
}



/* Entry: 109249f14; end: 109249f9b;  */

undefined8 * FUN_109249f14(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109249f9c();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10924a020();
  return param_1;
}



/* Entry: 109249f9c; end: 10924a01f;  */

void FUN_109249f9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000109242790(param_1,param_4);
    lVar1 = param_1;
    FUN_1092427d8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10924a020; end: 10924a097;  */

void FUN_10924a020(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1092429d0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10924a098; end: 10924a0c7;  */

undefined1 * FUN_10924a098(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_10924a0c8();
  return param_1;
}



/* Entry: 10924a0c8; end: 10924a11f;  */

void FUN_10924a0c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 6) == '\x01') {
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
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    param_1[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



/* Entry: 10924a120; end: 10924a173;  */

void FUN_10924a120(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x2e0) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ae56d8)[*(uint *)(param_1 + 0x2e0)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  return;
}



/* Entry: 10924a174; end: 10924a187;  */

void FUN_10924a174(void)

{
  return;
}



/* Entry: 10924a188; end: 10924a20b;  */

void FUN_10924a188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10924185c(param_1,param_4);
    lVar1 = param_1;
    FUN_109241894(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10924a20c; end: 10924a26b;  */

undefined8 * FUN_10924a20c(undefined8 *param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 9) = param_4;
  if (param_3 != 0) {
    if (param_3 != 1) {
      return param_1;
    }
    puVar1 = param_1;
    FUN_109374fe0();
    if (puVar1 != (undefined8 *)0x0) {
      *param_1 = puVar1;
      _CFRetain();
      uVar3 = 1;
      goto LAB_10924a258;
    }
  }
  uVar2 = 0;
  FUN_109374d60();
  uVar3 = 0;
  *param_1 = uVar2;
LAB_10924a258:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}



/* Entry: 10924a26c; end: 10924a2ab;  */

long * FUN_10924a26c(long *param_1)

{
  if (*param_1 != 0) {
    if ((char)param_1[1] == '\0') {
      FUN_109374f28();
    }
    else {
      _CFRelease();
    }
  }
  return param_1;
}



/* Entry: 10924a2ac; end: 10924a303;  */

undefined8 * FUN_10924a2ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1;
  FUN_109374fe0();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = puVar1;
  if (puVar1 != (undefined8 *)*param_2) {
    if (puVar1 != (undefined8 *)0x0) {
      _CFRetain();
    }
    FUN_10924a304(param_2);
  }
  return param_1;
}



/* Entry: 10924a304; end: 10924a39b;  */

void FUN_10924a304(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 1) & 0xfd) != 0) {
    plVar3 = param_1;
    FUN_109374fe0();
    if ((long *)*param_1 == plVar3) {
      return;
    }
    FUN_109374fe0();
    FUN_109231308(auStack_38,&UNK_10f55ed86);
    FUN_10924a434(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10924a380);
    (*pcVar1)();
  }
  lVar2 = *param_1;
  lVar4 = lVar2;
  FUN_109374fe0();
  if ((lVar4 != lVar2) &&
     (puVar5 = PTR__OBJC_CLASS___EAGLContext_1126d34e8, func_0x00010c187140(),
     ((ulong)puVar5 & 1) == 0)) {
    func_0x00010b0ae4b8(auStack_38,&UNK_10f567268,0x35);
    func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1093750b8);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10924a39c; end: 10924a40b;  */

void FUN_10924a39c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  FUN_109374fe0();
  plVar2 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) && (plVar1 != plVar2)) {
    FUN_10924a40c(4,&UNK_10f55ed28);
    plVar2 = (long *)*param_1;
  }
  if ((long *)param_1[1] != plVar2) {
    FUN_109375044();
    if (param_1[1] != 0) {
      _CFRelease();
    }
  }
  return;
}



/* Entry: 10924a40c; end: 10924a433;  */

void FUN_10924a40c(undefined8 param_1,undefined8 param_2)

{
  func_0x000109fcc4a8(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 10924a434; end: 10924a483;  */

void FUN_10924a434(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10924a484();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae4668,FUN_109243c68);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110ae4690;
  return;
}



/* Entry: 10924a484; end: 10924a4a3;  */

void FUN_10924a484(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110ae4690;
  return;
}



/* Entry: 10924a4a4; end: 10924a50b;  */

void FUN_10924a4a4(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uStack_28 = param_2;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    FUN_10924a5b0(param_1 + 0x18,&uStack_28,&uStack_28);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  }
  return;
}



/* Entry: 10924a50c; end: 10924a56f;  */

void FUN_10924a50c(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uStack_28 = param_2;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    func_0x00010924a6bc(param_1 + 0x18,&uStack_28);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  }
  return;
}



/* Entry: 10924a570; end: 10924a5af;  */

void FUN_10924a570(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10924a570(param_1,*param_2);
    FUN_10924a570(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10924a5b0; end: 10924a667;  */

undefined1  [16] FUN_10924a5b0(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_10924a650;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10924a618;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10924a618:
  plVar1 = (long *)0x28;
  __Znwm();
  plVar1[4] = *param_3;
  FUN_10924a668(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10924a650:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10924a668; end: 10924a7ab;  */

void FUN_10924a668(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}


