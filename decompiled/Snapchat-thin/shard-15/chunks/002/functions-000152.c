/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b934c3c; end: 10b934cf3;  */

void FUN_10b934c3c(void)

{
  int iVar1;
  
  if ((bRam00000001137fd168 & 1) == 0) {
    iVar1 = 0x137fd168;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd160,"url");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137fd168);
      return;
    }
  }
  return;
}



/* Entry: 10b934cf4; end: 10b934db3;  */

void FUN_10b934cf4(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77748;
  lVar4 = *param_2;
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
  param_1[3] = lVar4;
  param_1[4] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  lVar4 = *param_3;
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
  param_1[0xd] = lVar4;
  lVar4 = *param_4;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xe] = lVar4;
  param_1[0xf] = param_5;
  param_1[0x10] = &UNK_10dd5b8b0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &UNK_10dd5b8b0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 500;
  param_1[0x1b] = 0;
  return;
}



/* Entry: 10b934db4; end: 10b934eaf;  */

undefined8 * FUN_10b934db4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d77748;
  lVar1 = param_1[0x19];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x16] + lVar3)) {
        FUN_10b935d8c(param_1[0x17] + lVar2);
        lVar1 = param_1[0x19];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    param_1[0x1b] = 0;
    param_1[0x16] = &UNK_10dd5b8b0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar1 = param_1[0x13];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x10] + lVar3)) {
        func_0x00010b935db0(param_1[0x11] + lVar2);
        lVar1 = param_1[0x13];
      }
      lVar2 = lVar2 + 0x18;
    }
    __ZdlPv();
    param_1[0x15] = 0;
    param_1[0x10] = &UNK_10dd5b8b0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  func_0x000104bd5214(param_1 + 0xe);
  func_0x00010b935dd4(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x0001080e6aa4(param_1 + 3);
  func_0x00010b93082c(param_1 + 1);
  return param_1;
}



/* Entry: 10b934eb0; end: 10b934eb3;  */

undefined8 * FUN_10b934eb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d77748;
  lVar1 = param_1[0x19];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x16] + lVar3)) {
        FUN_10b935d8c(param_1[0x17] + lVar2);
        lVar1 = param_1[0x19];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    param_1[0x1b] = 0;
    param_1[0x16] = &UNK_10dd5b8b0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar1 = param_1[0x13];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x10] + lVar3)) {
        func_0x00010b935db0(param_1[0x11] + lVar2);
        lVar1 = param_1[0x13];
      }
      lVar2 = lVar2 + 0x18;
    }
    __ZdlPv();
    param_1[0x15] = 0;
    param_1[0x10] = &UNK_10dd5b8b0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  func_0x000104bd5214(param_1 + 0xe);
  func_0x00010b935dd4(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x0001080e6aa4(param_1 + 3);
  func_0x00010b93082c(param_1 + 1);
  return param_1;
}



/* Entry: 10b934eb4; end: 10b934ec7;  */

void FUN_10b934eb4(void)

{
  FUN_10b934db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b934ec8; end: 10b934f73;  */

long * FUN_10b934ec8(undefined8 *param_1,long *param_2,long *param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  undefined4 uVar14;
  undefined8 extraout_x8;
  undefined8 uVar15;
  undefined8 extraout_x8_00;
  long lVar16;
  ulong extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined1 extraout_w12;
  undefined1 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  byte *pbVar24;
  code *pcVar25;
  undefined8 auStack_c0 [2];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b937938();
  uStack_28 = extraout_x8;
  (**(code **)(*(long *)param_2[5] + 0x18))(&lStack_40);
  uVar9 = lStack_40 == 1;
  if ((bool)uVar9) {
    param_1[2] = uStack_30;
    param_1[1] = uStack_38;
    lStack_40 = 0;
    uVar15 = 1;
  }
  else {
    param_2 = (long *)&UNK_10f7ce26d;
    param_3 = (long *)0x1a;
    FUN_10b99fa70(&uStack_48,&uStack_38);
    param_1[1] = uStack_48;
    uStack_48 = 0;
    func_0x000104bda960(0);
    uVar15 = 2;
  }
  *param_1 = uVar15;
  plVar22 = &lStack_40;
  func_0x000104bda914();
  func_0x00010b937908(uStack_28);
  if ((bool)uVar9) {
    return plVar22;
  }
  ___stack_chk_fail();
  plVar11 = param_2;
  func_0x00010b937938();
  uStack_a8 = extraout_x8_00;
  func_0x000107c28148(*plVar11 + 0x48);
  lVar23 = *param_2;
  __ZNSt3__15mutex4lockEv(plVar22 + 4);
  if (*param_3 == 1) {
    puVar10 = auStack_c0;
    FUN_10b9a8f04(puVar10,param_3 + 1);
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar11 = plVar22 + 0x16;
    puStack_b0 = puVar10;
    FUN_10b93706c(plVar11,lVar23 + 8);
    lVar16 = 0;
    uVar18 = (ulong)plVar11 >> 7;
    while( true ) {
      uVar18 = uVar18 & plVar22[0x19];
      uVar19 = *(ulong *)(plVar22[0x16] + uVar18);
      uVar20 = uVar19 ^ ((ulong)plVar11 & 0x7f) * 0x101010101010101;
      for (uVar20 = uVar20 + 0xfefefefefefefeff & (uVar20 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
        uVar5 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        lVar21 = plVar22[0x17];
        plVar12 = (long *)(uVar18 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) &
                          plVar22[0x19]);
        if (*(long *)(lVar21 + (long)plVar12 * 0x20) == *(long *)(lVar23 + 8)) goto LAB_10b9350e4;
      }
      if ((uVar19 & ~uVar19 << 6 & 0x8080808080808080) != 0) break;
      lVar16 = lVar16 + 8;
      uVar18 = lVar16 + uVar18;
    }
    plVar12 = plVar22 + 0x16;
    FUN_10b937648(plVar12,plVar11);
    plVar2 = (long *)(plVar22[0x17] + (long)plVar12 * 0x20);
    lVar16 = *(long *)(lVar23 + 8);
    if (lVar16 != 0) {
      piVar1 = (int *)(lVar16 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        puVar10 = puStack_b0;
      } while (cVar6 != '\0');
    }
    *(undefined2 *)(plVar2 + 2) = 0;
    *plVar2 = lVar16;
    plVar2[1] = 0;
    plVar2[3] = 0;
    *(byte *)(plVar22[0x16] + (long)plVar12) = (byte)plVar11 & 0x7f;
    func_0x00010b937948();
    lVar21 = plVar22[0x17];
LAB_10b9350e4:
    lVar21 = lVar21 + (long)plVar12 * 0x20;
    FUN_10b9a9084(lVar21 + 8,auStack_c0);
    *(undefined8 **)(lVar21 + 0x18) = puVar10;
    FUN_10b9a8d98(auStack_c0);
  }
  puVar13 = (ulong *)(plVar22 + 0x10);
  lVar23 = lVar23 + 8;
  FUN_10b935c08();
  if ((ulong *)(plVar22[0x10] + plVar22[0x13]) == puVar13) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(lVar23 + 8);
    if (*(long *)(lVar23 + 0x10) != 0) {
      do {
        func_0x00010b937a04();
      } while (extraout_w10 != 0);
    }
    pbVar24 = (byte *)((long)puVar13 + 1);
    while( true ) {
      bVar4 = *pbVar24;
      uVar8 = 0xfd < bVar4;
      uVar9 = bVar4 == 0xfe;
      if (-2 < (char)bVar4) break;
      auStack_c0[0] = *(undefined8 *)pbVar24;
      puVar10 = auStack_c0;
      func_0x000107c27e58();
      pbVar24 = pbVar24 + ((ulong)puVar10 & 0xffffffff);
    }
    func_0x00010b935db0(lVar23);
    plVar22[0x12] = plVar22[0x12] + -1;
    func_0x00010b937c80(0);
    uVar18 = extraout_x8_01;
    uVar20 = extraout_x9;
    lVar23 = extraout_x10;
    lVar21 = extraout_x11;
    uVar17 = extraout_w12;
    if ((!(bool)uVar9) && ((*puVar13 & ~*puVar13 << 6 & 0x8080808080808080) != 0)) {
      func_0x00010b937cdc();
      uVar18 = (ulong)!(bool)uVar8;
      uVar17 = 0x80;
      uVar20 = extraout_x9_00;
      lVar23 = extraout_x10_00;
      lVar21 = extraout_x11_00;
      if ((bool)uVar8) {
        uVar17 = 0xfe;
      }
    }
    *(undefined1 *)(lVar23 + lVar21) = uVar17;
    *(undefined1 *)(plVar22[0x10] + (plVar22[0x13] & 7U) + (plVar22[0x13] & uVar20) + 1) = uVar17;
    plVar22[0x15] = plVar22[0x15] + uVar18;
  }
  __ZNSt3__15mutex6unlockEv(plVar22 + 4);
  plVar22 = (long *)(lVar16 + 0x30);
  puVar10 = (undefined8 *)*plVar22;
  puVar3 = *(undefined8 **)(lVar16 + 0x38);
  uVar14 = 1;
  if (param_4 == 0) {
    uVar14 = 2;
  }
  for (; uVar9 = puVar10 == puVar3, !(bool)uVar9; puVar10 = puVar10 + 6) {
    pcVar25 = (code *)*puVar10;
    FUN_10b905d74(auStack_c0,param_3);
    (*pcVar25)(auStack_c0,uVar14,puVar10);
    func_0x000104bda914(auStack_c0);
  }
  func_0x00010b937330();
  func_0x00010b937c48();
  func_0x00010b937908(uStack_a8);
  if ((bool)uVar9) {
    return plVar22;
  }
  ___stack_chk_fail();
  func_0x0001080c5c8c(plVar22 + 4);
  FUN_10b936a28(plVar22 + 2);
  if (plVar22[1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar22;
}



/* Entry: 10b934f74; end: 10b935267;  */

long * FUN_10b934f74(long param_1,long *param_2,long *param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined4 uVar11;
  undefined8 extraout_x8;
  long lVar12;
  ulong extraout_x8_00;
  ulong uVar13;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined1 extraout_w12;
  undefined1 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  byte *pbVar21;
  code *pcVar22;
  undefined8 auStack_70 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  plVar19 = param_2;
  func_0x00010b937938();
  uStack_58 = extraout_x8;
  func_0x000107c28148(*plVar19 + 0x48);
  lVar20 = *param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  if (*param_3 == 1) {
    puVar8 = auStack_70;
    FUN_10b9a8f04(puVar8,param_3 + 1);
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar13 = param_1 + 0xb0;
    puStack_60 = puVar8;
    FUN_10b93706c(uVar13,lVar20 + 8);
    lVar12 = 0;
    uVar15 = uVar13 >> 7;
    while( true ) {
      uVar15 = uVar15 & *(ulong *)(param_1 + 200);
      uVar16 = *(ulong *)(*(long *)(param_1 + 0xb0) + uVar15);
      uVar17 = uVar16 ^ (uVar13 & 0x7f) * 0x101010101010101;
      for (uVar17 = uVar17 + 0xfefefefefefefeff & (uVar17 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        lVar18 = *(long *)(param_1 + 0xb8);
        uVar9 = uVar15 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) &
                *(ulong *)(param_1 + 200);
        if (*(long *)(lVar18 + uVar9 * 0x20) == *(long *)(lVar20 + 8)) goto LAB_10b9350e4;
      }
      if ((uVar16 & ~uVar16 << 6 & 0x8080808080808080) != 0) break;
      lVar12 = lVar12 + 8;
      uVar15 = lVar12 + uVar15;
    }
    uVar9 = param_1 + 0xb0;
    FUN_10b937648(uVar9,uVar13);
    plVar19 = (long *)(*(long *)(param_1 + 0xb8) + uVar9 * 0x20);
    lVar12 = *(long *)(lVar20 + 8);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar8 = puStack_60;
      } while (cVar4 != '\0');
    }
    *(undefined2 *)(plVar19 + 2) = 0;
    *plVar19 = lVar12;
    plVar19[1] = 0;
    plVar19[3] = 0;
    *(byte *)(*(long *)(param_1 + 0xb0) + uVar9) = (byte)uVar13 & 0x7f;
    func_0x00010b937948();
    lVar18 = *(long *)(param_1 + 0xb8);
LAB_10b9350e4:
    lVar18 = lVar18 + uVar9 * 0x20;
    FUN_10b9a9084(lVar18 + 8,auStack_70);
    *(undefined8 **)(lVar18 + 0x18) = puVar8;
    FUN_10b9a8d98(auStack_70);
  }
  puVar10 = (ulong *)(param_1 + 0x80);
  lVar20 = lVar20 + 8;
  FUN_10b935c08();
  if ((ulong *)(*(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x98)) == puVar10) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar20 + 8);
    if (*(long *)(lVar20 + 0x10) != 0) {
      do {
        func_0x00010b937a04();
      } while (extraout_w10 != 0);
    }
    pbVar21 = (byte *)((long)puVar10 + 1);
    while( true ) {
      bVar3 = *pbVar21;
      uVar6 = 0xfd < bVar3;
      uVar7 = bVar3 == 0xfe;
      if (-2 < (char)bVar3) break;
      auStack_70[0] = *(undefined8 *)pbVar21;
      puVar8 = auStack_70;
      func_0x000107c27e58();
      pbVar21 = pbVar21 + ((ulong)puVar8 & 0xffffffff);
    }
    func_0x00010b935db0(lVar20);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    func_0x00010b937c80(0);
    uVar13 = extraout_x8_00;
    uVar15 = extraout_x9;
    lVar20 = extraout_x10;
    lVar18 = extraout_x11;
    uVar14 = extraout_w12;
    if ((!(bool)uVar7) && ((*puVar10 & ~*puVar10 << 6 & 0x8080808080808080) != 0)) {
      func_0x00010b937cdc();
      uVar13 = (ulong)!(bool)uVar6;
      uVar14 = 0x80;
      uVar15 = extraout_x9_00;
      lVar20 = extraout_x10_00;
      lVar18 = extraout_x11_00;
      if ((bool)uVar6) {
        uVar14 = 0xfe;
      }
    }
    *(undefined1 *)(lVar20 + lVar18) = uVar14;
    *(undefined1 *)
     (*(long *)(param_1 + 0x80) + (*(ulong *)(param_1 + 0x98) & 7) +
      (*(ulong *)(param_1 + 0x98) & uVar15) + 1) = uVar14;
    *(ulong *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + uVar13;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  plVar19 = (long *)(lVar12 + 0x30);
  puVar8 = (undefined8 *)*plVar19;
  puVar2 = *(undefined8 **)(lVar12 + 0x38);
  uVar11 = 1;
  if (param_4 == 0) {
    uVar11 = 2;
  }
  for (; uVar7 = puVar8 == puVar2, !(bool)uVar7; puVar8 = puVar8 + 6) {
    pcVar22 = (code *)*puVar8;
    FUN_10b905d74(auStack_70,param_3);
    (*pcVar22)(auStack_70,uVar11,puVar8);
    func_0x000104bda914(auStack_70);
  }
  func_0x00010b937330();
  func_0x00010b937c48();
  func_0x00010b937908(uStack_58);
  if ((bool)uVar7) {
    return plVar19;
  }
  ___stack_chk_fail();
  func_0x0001080c5c8c(plVar19 + 4);
  FUN_10b936a28(plVar19 + 2);
  if (plVar19[1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar19;
}



/* Entry: 10b935268; end: 10b935293;  */

long FUN_10b935268(long param_1)

{
  func_0x0001080c5c8c(param_1 + 0x20);
  FUN_10b936a28(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b935294; end: 10b93543b;  */

/* WARNING: Possible PIC construction at 0x00010b935414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b935418) */
/* WARNING: Removing unreachable block (ram,0x00010b935424) */

long * FUN_10b935294(long *param_1,long *param_2,long *param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined **ppuVar12;
  long *plVar13;
  ulong *puVar14;
  undefined *puVar15;
  long *plVar16;
  long extraout_x8;
  long lVar17;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined1 extraout_w12;
  undefined1 uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  plVar8 = &uStack_a0;
  puVar28 = &stack0xfffffffffffffff0;
  func_0x00010b937bc8();
  func_0x00010b937938();
  if (param_4 != 0) {
    pcVar18 = (code *)*unaff_x19;
    uVar21 = *(uint *)(pcVar18 + 0x60);
    in_ZR = uVar21 == 2;
    if ((int)uVar21 < 3) {
      if (3 < *(long *)(unaff_x20 + 0xe0) << ((ulong)uVar21 & 0x3f)) {
        lVar19 = *(long *)(pcVar18 + 8);
        if (lVar19 == 0) {
          puVar15 = &UNK_10f7d0ef0;
          uVar20 = 0;
        }
        else {
          puVar15 = (undefined *)(lVar19 + 0x18);
          uVar20 = (ulong)*(uint *)(lVar19 + 0xc);
        }
        FUN_10b937014(puVar15,puVar15 + uVar20);
        pcVar18 = (code *)*unaff_x19;
        uVar21 = *(uint *)(pcVar18 + 0x60);
      }
      *(uint *)(pcVar18 + 0x60) = uVar21 + 1;
      lStack_78 = *(long *)(unaff_x20 + 8);
      puStack_70 = *(undefined **)(unaff_x20 + 0x10);
      if (puStack_70 == (undefined *)0x0) {
        plVar16 = *(long **)(unaff_x20 + 0x70);
      }
      else {
        plVar13 = (long *)(puStack_70 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = *plVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar16 = *(long **)(unaff_x20 + 0x70);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = *plVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pcVar18 = (code *)*unaff_x19;
      }
      lStack_80 = unaff_x19[1];
      if (lStack_80 != 0) {
        plVar13 = (long *)(lStack_80 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = *plVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puStack_68 = (undefined *)0x10b9363f4;
      ppuStack_60 = &PTR_FUN_110d777d0;
      ppuVar12 = &puStack_68;
      plStack_98 = (long *)0x0;
      puStack_90 = (undefined1 *)0x0;
      pcStack_88 = pcVar18;
      lStack_58 = lStack_78;
      if (lStack_80 != 0) {
        do {
          func_0x00010b937a04();
        } while (extraout_w10_00 != 0);
      }
      (**(code **)(*plVar16 + 0x30))();
      func_0x00010b937a7c(ppuStack_60);
      func_0x00010b9356f0(&plStack_98);
      param_1 = &lStack_78;
      pcVar18 = (code *)0x10b935418;
      goto SUB_10b93082c;
    }
  }
  func_0x00010b937908(extraout_x8_01);
  if ((bool)in_ZR) {
    func_0x00010b937a2c();
    plVar16 = param_2;
    func_0x00010b937938();
    lStack_58 = extraout_x8;
    func_0x000107c28148(*plVar16 + 0x48);
    lVar19 = *param_2;
    __ZNSt3__15mutex4lockEv(param_1 + 4);
    if (*param_3 == 1) {
      ppuVar12 = &puStack_70;
      FUN_10b9a8f04(ppuVar12,param_3 + 1);
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar16 = param_1 + 0x16;
      ppuStack_60 = ppuVar12;
      FUN_10b93706c(plVar16,lVar19 + 8);
      lVar17 = 0;
      uVar20 = (ulong)plVar16 >> 7;
      while( true ) {
        uVar20 = uVar20 & param_1[0x19];
        uVar23 = *(ulong *)(param_1[0x16] + uVar20);
        uVar24 = uVar23 ^ ((ulong)plVar16 & 0x7f) * 0x101010101010101;
        for (uVar24 = uVar24 + 0xfefefefefefefeff & (uVar24 ^ 0xffffffffffffffff) &
                      0x8080808080808080; uVar24 != 0; uVar24 = uVar24 - 1 & uVar24) {
          uVar5 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          lVar25 = param_1[0x17];
          plVar13 = (long *)(uVar20 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) &
                            param_1[0x19]);
          if (*(long *)(lVar25 + (long)plVar13 * 0x20) == *(long *)(lVar19 + 8)) goto LAB_10b9350e4;
        }
        if ((uVar23 & ~uVar23 << 6 & 0x8080808080808080) != 0) break;
        lVar17 = lVar17 + 8;
        uVar20 = lVar17 + uVar20;
      }
      plVar13 = param_1 + 0x16;
      FUN_10b937648(plVar13,plVar16);
      plVar2 = (long *)(param_1[0x17] + (long)plVar13 * 0x20);
      lVar17 = *(long *)(lVar19 + 8);
      if (lVar17 != 0) {
        piVar1 = (int *)(lVar17 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppuVar12 = ppuStack_60;
        } while (cVar6 != '\0');
      }
      *(undefined2 *)(plVar2 + 2) = 0;
      *plVar2 = lVar17;
      plVar2[1] = 0;
      plVar2[3] = 0;
      *(byte *)(param_1[0x16] + (long)plVar13) = (byte)plVar16 & 0x7f;
      func_0x00010b937948();
      lVar25 = param_1[0x17];
LAB_10b9350e4:
      lVar25 = lVar25 + (long)plVar13 * 0x20;
      FUN_10b9a9084(lVar25 + 8,&puStack_70);
      *(undefined ***)(lVar25 + 0x18) = ppuVar12;
      FUN_10b9a8d98(&puStack_70);
    }
    puVar14 = (ulong *)(param_1 + 0x10);
    lVar19 = lVar19 + 8;
    FUN_10b935c08();
    if ((ulong *)(param_1[0x10] + param_1[0x13]) == puVar14) {
      lVar17 = 0;
      lStack_80 = 0;
      lStack_78 = 0;
    }
    else {
      lVar17 = *(long *)(lVar19 + 8);
      lStack_78 = *(long *)(lVar19 + 0x10);
      lStack_80 = lVar17;
      if (lStack_78 != 0) {
        do {
          func_0x00010b937a04();
        } while (extraout_w10 != 0);
      }
      pbVar27 = (byte *)((long)puVar14 + 1);
      while( true ) {
        bVar4 = *pbVar27;
        uVar10 = 0xfd < bVar4;
        uVar11 = bVar4 == 0xfe;
        if (-2 < (char)bVar4) break;
        puStack_70 = *(undefined **)pbVar27;
        ppuVar12 = &puStack_70;
        func_0x000107c27e58();
        pbVar27 = pbVar27 + ((ulong)ppuVar12 & 0xffffffff);
      }
      func_0x00010b935db0(lVar19);
      param_1[0x12] = param_1[0x12] + -1;
      func_0x00010b937c80(0);
      uVar20 = extraout_x8_00;
      uVar24 = extraout_x9;
      lVar19 = extraout_x10;
      lVar25 = extraout_x11;
      uVar22 = extraout_w12;
      if ((!(bool)uVar11) && ((*puVar14 & ~*puVar14 << 6 & 0x8080808080808080) != 0)) {
        func_0x00010b937cdc();
        uVar20 = (ulong)!(bool)uVar10;
        uVar22 = 0x80;
        uVar24 = extraout_x9_00;
        lVar19 = extraout_x10_00;
        lVar25 = extraout_x11_00;
        if ((bool)uVar10) {
          uVar22 = 0xfe;
        }
      }
      *(undefined1 *)(lVar19 + lVar25) = uVar22;
      *(undefined1 *)(param_1[0x10] + (param_1[0x13] & 7U) + (param_1[0x13] & uVar24) + 1) = uVar22;
      param_1[0x15] = param_1[0x15] + uVar20;
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 4);
    param_1 = (long *)(lVar17 + 0x30);
    puVar3 = *(undefined8 **)(lVar17 + 0x38);
    for (puVar26 = (undefined8 *)*param_1; uVar11 = puVar26 == puVar3, !(bool)uVar11;
        puVar26 = puVar26 + 6) {
      pcVar18 = (code *)*puVar26;
      FUN_10b905d74(&puStack_70,param_3);
      (*pcVar18)(&puStack_70,2,puVar26);
      func_0x000104bda914(&puStack_70);
    }
    func_0x00010b937330();
    func_0x00010b937c48();
    func_0x00010b937908(lStack_58);
    if ((bool)uVar11) {
      return param_1;
    }
    ___stack_chk_fail();
    plVar9 = &uStack_a0;
    pcStack_88 = FUN_10b935268;
    uStack_a0 = 2;
    plStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x0001080c5c8c(param_1 + 4);
    FUN_10b936a28(param_1 + 2);
    puVar28 = puStack_90;
    pcVar18 = pcStack_88;
  }
  else {
    ___stack_chk_fail();
    plVar9 = (long *)&stack0xffffffffffffff40;
    if (param_1[4] != 0) {
      func_0x00010b93791c();
    }
    FUN_10b936a28(param_1 + 2);
    pcVar18 = FUN_10b93543c;
  }
  plVar8 = plVar9 + 4;
  unaff_x20 = *plVar9;
  ppuVar12 = (undefined **)plVar9[1];
SUB_10b93082c:
  *(long *)((long)plVar8 + -0x20) = unaff_x20;
  *(undefined ***)((long)plVar8 + -0x18) = ppuVar12;
  *(undefined1 **)((long)plVar8 + -0x10) = puVar28;
  *(code **)((long)plVar8 + -8) = pcVar18;
  if (param_1[1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b93543c; end: 10b93546b;  */

long FUN_10b93543c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b93791c();
  }
  FUN_10b936a28(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b93546c; end: 10b9356d3;  */

void FUN_10b93546c(long param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar5;
  undefined8 extraout_x8_01;
  undefined8 uVar6;
  long extraout_x8_02;
  long lVar7;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  code **unaff_x19;
  long *unaff_x20;
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  char cStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *aplStack_c0 [2];
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_38;
  
  func_0x00010b937bc8();
  func_0x00010b937938();
  uStack_38 = extraout_x8;
  FUN_10b935d34(aplStack_c0,param_1 + 0x68);
  if (aplStack_c0[0] == (long *)0x0) {
    func_0x000107c31088(&uStack_c8,&UNK_10f7ce23f);
    FUN_10b99f560(&uStack_158,&uStack_c8);
    uStack_80 = 2;
    uStack_78 = uStack_158;
    uStack_158 = 0;
    func_0x00010b937a2c();
    FUN_10b934f74();
    func_0x000104bda914(&uStack_80);
    func_0x000104bda960(uStack_158);
    func_0x000107c278f8(uStack_c8);
    while( true ) {
      func_0x0001080d87c4(aplStack_c0);
      func_0x00010b937908(uStack_38);
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
LAB_10b9356a0:
      iVar4 = 0x137fd188;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x000107c31088(0x1137fd180,&DAT_10f2d965b);
        ___cxa_guard_release(0x1137fd188);
      }
LAB_10b9354b0:
      uVar5 = 0;
      if (*(long *)(*unaff_x19 + 8) != 0) {
        do {
          func_0x00010b937970();
          uVar5 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uVar6 = 0;
      uStack_d0 = uVar5;
      if (lRam00000001137fd180 != 0) {
        do {
          func_0x00010b937970();
          uVar6 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_108 = 0;
      cStack_f0 = '\0';
      uStack_d8 = uVar6;
      func_0x000104c62918(&uStack_80,&uStack_d0,&uStack_d8,&uStack_e8,&uStack_108,4);
      in_ZR = cStack_f0 == '\x01';
      if (((bool)in_ZR) && (CONCAT71(uStack_107,uStack_108) != 0)) {
        func_0x00010b93791c();
      }
      FUN_10b9a8d98(&uStack_e8);
      func_0x000107c278f8(uStack_d8);
      func_0x000107c278f8(uStack_d0);
      lVar7 = unaff_x20[1];
      lStack_110 = unaff_x20[2];
      lStack_118 = lVar7;
      if (lStack_110 == 0) {
        uVar5 = 0;
        unaff_x20 = aplStack_c0[0];
      }
      else {
        do {
          func_0x00010b937960();
          unaff_x20 = aplStack_c0[0];
        } while (extraout_w12 != 0);
        do {
          func_0x00010b937960();
          lVar7 = extraout_x8_02;
          uVar5 = extraout_x9;
        } while (extraout_w12_00 != 0);
      }
      pcStack_148 = *unaff_x19;
      pcStack_140 = unaff_x19[1];
      if (pcStack_140 != (code *)0x0) {
        pcVar1 = pcStack_140 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_b0 = FUN_10b936a50;
      ppuStack_a8 = &PTR_DAT_110d77810;
      unaff_x19 = &pcStack_b0;
      uStack_158 = 0;
      uStack_150 = 0;
      lStack_a0 = lVar7;
      uStack_98 = uVar5;
      pcStack_90 = pcStack_148;
      pcStack_88 = pcStack_140;
      if (pcStack_140 != (code *)0x0) {
        do {
          func_0x00010b937a04();
        } while (extraout_w10 != 0);
      }
      FUN_10b94ae84(auStack_138,&pcStack_b0);
      (**(code **)(*unaff_x20 + 0x10))(auStack_128,unaff_x20,&uStack_80,auStack_138);
      func_0x0001080eb314(auStack_128);
      FUN_10b936fec(auStack_138);
      func_0x00010b937a7c(ppuStack_a8);
      FUN_10b9356d4(&uStack_158);
      func_0x00010b93082c(&lStack_118);
      func_0x000104c62998(&uStack_80);
    }
    return;
  }
  if ((bRam00000001137fd188 & 1) == 0) goto LAB_10b9356a0;
  goto LAB_10b9354b0;
}



/* Entry: 10b9356d4; end: 10b935793;  */

void FUN_10b9356d4(void)

{
  long unaff_x19;
  
  func_0x00010b937a50();
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b935794; end: 10b9357e7;  */

undefined1  [16] FUN_10b935794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b93714c(&uStack_40);
  FUN_10b937180(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b9357e8; end: 10b935c07;  */

long * FUN_10b9357e8(long param_1,long *param_2,ulong *param_3,undefined8 param_4,
                    undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  code **ppcVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puVar10;
  long extraout_x8_01;
  ulong uVar11;
  undefined8 extraout_x9;
  long lVar12;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  long *plVar18;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  long lStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined8 *apuStack_90 [5];
  undefined8 uStack_68;
  
  lVar12 = param_1;
  func_0x00010b937938();
  lStack_108 = lVar12 + 0x20;
  uStack_100 = 1;
  uStack_68 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  uVar13 = param_1 + 0xb0;
  puVar10 = param_3;
  func_0x00010b93576c();
  uVar5 = *(long *)(param_1 + 0xb0) + *(long *)(param_1 + 200) == uVar13;
  if ((bool)uVar5) {
    plStack_120 = (long *)0x0;
    puStack_118 = (undefined8 *)0x0;
    lVar12 = param_1 + 0x80;
    puVar10 = param_3;
    FUN_10b935c08();
    uVar5 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x98) == lVar12;
    if ((bool)uVar5) {
      lVar12 = *param_2;
      puVar6 = (undefined8 *)0x80;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110d77840;
      if (lVar12 != 0) {
        piVar1 = (int *)(lVar12 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = puVar6 + 3;
      uStack_f8 = 0;
      lStack_130 = lVar12;
      if (*param_3 != 0) {
        do {
          func_0x00010b937970();
          uStack_f8 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      plVar18 = (long *)*param_5;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      uStack_e0 = param_5[2];
      puStack_e8 = (undefined8 *)param_5[1];
      plStack_f0 = plVar18;
      func_0x00010b937cf8(plVar7,&lStack_130,&uStack_f8,&plStack_f0,param_4);
      if (plStack_f0 != (long *)0x0) {
        func_0x00010b93791c();
      }
      func_0x00010b937c64();
      func_0x000107c278f8(lStack_130);
      lStack_130 = 0;
      lStack_128 = 0;
      puStack_e8 = puStack_118;
      plStack_f0 = plStack_120;
      plStack_120 = plVar7;
      puStack_118 = puVar6;
      FUN_10b936a28(&plStack_f0);
      func_0x00010b937c48();
      uVar11 = *param_3;
      FUN_10b93729c();
      lVar12 = 0;
      uVar13 = uVar11 >> 7;
      while( true ) {
        uVar13 = uVar13 & *(ulong *)(param_1 + 0x98);
        uVar14 = *(ulong *)(*(long *)(param_1 + 0x80) + uVar13);
        uVar16 = uVar14 ^ (uVar11 & 0x7f) * 0x101010101010101;
        for (uVar16 = uVar16 + 0xfefefefefefefeff & (uVar16 ^ 0xffffffffffffffff) &
                      0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
          uVar8 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          lVar15 = *(long *)(param_1 + 0x88);
          uVar8 = uVar13 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
                  *(ulong *)(param_1 + 0x98);
          uVar5 = 1;
          if (*(ulong *)(lVar15 + uVar8 * 0x18) == *param_3) goto LAB_10b935af0;
        }
        uVar5 = (uVar14 & ~uVar14 << 6 & 0x8080808080808080) == 0;
        if (!(bool)uVar5) break;
        lVar12 = lVar12 + 8;
        uVar13 = lVar12 + uVar13;
      }
      uVar8 = param_1 + 0x80;
      func_0x00010b937378(uVar8,uVar11);
      puVar10 = (ulong *)(*(long *)(param_1 + 0x88) + uVar8 * 0x18);
      uVar13 = *param_3;
      if (uVar13 != 0) {
        piVar1 = (int *)(uVar13 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          puVar6 = puStack_118;
          plVar7 = plStack_120;
        } while (cVar3 != '\0');
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = uVar13;
      *(byte *)(*(long *)(param_1 + 0x80) + uVar8) = (byte)uVar11 & 0x7f;
      func_0x00010b937948();
      lVar15 = *(long *)(param_1 + 0x88);
LAB_10b935af0:
      func_0x00010b935cd0(lVar15 + uVar8 * 0x18 + 8,plVar7,puVar6);
      plVar7 = plStack_120;
      pcStack_98 = (code *)*param_6;
      (**(code **)(param_6[1] + 0x10))(apuStack_90,param_6 + 1);
      func_0x00010b937d5c(plVar7 + 6,&pcStack_98);
      func_0x00010b937c74(apuStack_90[0]);
      func_0x0001080ea3b0(&lStack_108);
      lStack_b8 = *(long *)(param_1 + 8);
      lStack_128 = *(long *)(param_1 + 0x10);
      lStack_130 = lStack_b8;
      if (lStack_128 == 0) {
        plVar18 = *(long **)(param_1 + 0x70);
        uStack_b0 = 0;
      }
      else {
        do {
          func_0x00010b937960();
        } while (extraout_w12 != 0);
        plVar18 = *(long **)(param_1 + 0x70);
        do {
          func_0x00010b937960();
          lStack_b8 = extraout_x8_01;
          uStack_b0 = extraout_x9;
        } while (extraout_w12_00 != 0);
      }
      if (puVar6 != (undefined8 *)0x0) {
        plVar2 = puVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_c8 = FUN_10b9364c8;
      ppuStack_c0 = &PTR_FUN_110d777f0;
      plStack_f0 = (long *)0x0;
      puStack_e8 = (undefined8 *)0x0;
      plStack_a8 = plVar7;
      uStack_e0 = 0;
      uStack_d8 = 0;
      ppcVar9 = &pcStack_c8;
      puStack_a0 = puVar6;
      (**(code **)(*plVar18 + 0x28))();
      func_0x00010b937a7c(ppuStack_c0);
      func_0x00010b935d18(&plStack_f0);
      func_0x00010b93082c(&lStack_130);
    }
    else {
      func_0x00010b935cd0(&plStack_120,puVar10[1],puVar10[2]);
      plVar7 = plStack_120;
      pcStack_98 = (code *)*param_6;
      (**(code **)(param_6[1] + 0x10))(apuStack_90,param_6 + 1);
      ppcVar9 = &pcStack_98;
      func_0x00010b937d5c(plVar7 + 6);
      (*(code *)*apuStack_90[0])(apuStack_90);
    }
    FUN_10b936a28(&plStack_120);
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar10[3] = uVar13;
    FUN_10b9a8f04(&plStack_120,puVar10 + 1);
    func_0x0001080ea3b0(&lStack_108);
    pcVar17 = (code *)*param_6;
    func_0x000104bf351c(&plStack_f0,&plStack_120);
    ppcVar9 = (code **)0x0;
    (*pcVar17)(&plStack_f0,0,param_6);
    func_0x000104bda914(&plStack_f0);
    FUN_10b9a8d98(&plStack_120);
  }
  plVar7 = &lStack_108;
  func_0x0001080eb338();
  func_0x00010b937908(uStack_68);
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  pcVar17 = *ppcVar9;
  FUN_10b93729c();
  lVar12 = 0;
  uVar13 = (ulong)pcVar17 >> 7;
  uVar11 = plVar7[3];
  while( true ) {
    uVar13 = uVar13 & uVar11;
    uVar14 = *(ulong *)(*plVar7 + uVar13);
    uVar16 = uVar14 ^ ((ulong)pcVar17 & 0x7f) * 0x101010101010101;
    for (uVar16 = uVar16 + 0xfefefefefefefeff & (uVar16 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar8 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar13 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar11;
      if (*(code **)(plVar7[1] + uVar8 * 0x18) == *ppcVar9) goto LAB_10b935cc0;
    }
    uVar8 = uVar11;
    if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
    lVar12 = lVar12 + 8;
    uVar13 = lVar12 + uVar13;
  }
LAB_10b935cc0:
  return (long *)(*plVar7 + uVar8);
}



/* Entry: 10b935c08; end: 10b935d33;  */

long FUN_10b935c08(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *param_2;
  FUN_10b93729c();
  lVar4 = 0;
  uVar5 = uVar1 >> 7;
  uVar3 = param_1[3];
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar6 = *(ulong *)(*param_1 + uVar5);
    uVar7 = uVar6 ^ (uVar1 & 0x7f) * 0x101010101010101;
    for (uVar7 = uVar7 + 0xfefefefefefefeff & (uVar7 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar5 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar3;
      if (*(ulong *)(param_1[1] + uVar2 * 0x18) == *param_2) goto LAB_10b935cc0;
    }
    uVar2 = uVar3;
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar4 = lVar4 + 8;
    uVar5 = lVar4 + uVar5;
  }
LAB_10b935cc0:
  return *param_1 + uVar2;
}



/* Entry: 10b935d34; end: 10b935d8b;  */

void FUN_10b935d34(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *param_2;
  __ZNSt3__15mutex4lockEv(lVar3 + 0x10);
  lVar2 = *param_2;
  lVar1 = *(long *)(lVar2 + 0x60);
  uVar4 = *(undefined8 *)(lVar2 + 0x58);
  param_1[1] = *(undefined8 *)(lVar2 + 0x60);
  *param_1 = uVar4;
  if (lVar1 != 0) {
    do {
      func_0x00010b937a04();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar3 + 0x10);
  return;
}



/* Entry: 10b935d8c; end: 10b935df7;  */

undefined8 FUN_10b935d8c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b9a8d98(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b935df8; end: 10b935e23;  */

void FUN_10b935df8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b935e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b935e24; end: 10b935e4b;  */

undefined8 FUN_10b935e24(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b93791c();
  }
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b935e4c; end: 10b935fff;  */

void FUN_10b935e4c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  plVar6 = alStack_c0;
  func_0x00010b937938();
  plVar4 = *(long **)(param_1 + 0x10);
  plVar5 = plVar4;
  uStack_38 = extraout_x8;
  FUN_10b936000();
  if ((alStack_c0[0] != 0) && (*(long *)(alStack_c0[0] + 0x18) != 0)) {
    lVar7 = *(long *)(plVar4[2] + 8);
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = (long *)plVar4[5];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    lStack_90 = plVar4[7];
    lStack_98 = plVar4[6];
    ppuStack_70 = &PTR_FUN_110d7e488;
    uStack_68 = 1;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    lStack_a8 = lVar7;
    plStack_a0 = plVar5;
    FUN_10b934c3c();
    auStack_48[0] = 0;
    if (lRam00000001137fd160 != 0) {
      do {
        func_0x00010b937970();
        auStack_48[0] = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    FUN_10b98f2dc(&lStack_88,auStack_48,&lStack_a8);
    func_0x00010b937c50();
    func_0x00010b937c64();
    func_0x000107c278f8(auStack_48[0]);
    func_0x00010b934c98();
    lStack_88 = 0;
    if (lRam00000001137fd170 != 0) {
      do {
        func_0x00010b937970();
        lStack_88 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    lStack_80 = lStack_98;
    lStack_78 = lStack_90;
    func_0x00010b937c50();
    func_0x00010b937c64();
    FUN_10b98f484(&uStack_b0,&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110d7e488;
    _free(uStack_50);
    FUN_10b99daa0(&ppuStack_70,uStack_b0);
    plVar6 = *(long **)(alStack_c0[0] + 0x18);
    FUN_10b9a2210(&lStack_88,plVar4[2]);
    plVar5 = &lStack_88;
    (**(code **)(*plVar6 + 0x38))(auStack_48,plVar6,plVar5,&ppuStack_70);
    func_0x0001080c9d44(&lStack_88);
    func_0x0001080c6234(auStack_48);
    if (ppuStack_70 != (undefined **)0x0) {
      func_0x00010b93791c();
    }
    func_0x000104bdb368(uStack_b0);
    plVar6 = &lStack_a8;
    FUN_10b935e24();
  }
  func_0x00010b937c34();
  func_0x00010b937908(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar6 = 0;
    plVar6[1] = 0;
    lVar7 = plVar5[1];
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar6[1] = lVar7;
      if (lVar7 != 0) {
        *plVar6 = *plVar5;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b936000; end: 10b93603b;  */

void FUN_10b936000(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b93603c; end: 10b93605b;  */

void FUN_10b93603c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b935268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93605c; end: 10b93605f;  */

void FUN_10b93605c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b936060; end: 10b9360d3;  */

void FUN_10b936060(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77790;
  __Znwm(0x40);
  func_0x00010b937cb4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b937a04();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010b937a04();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001090ee36c(unaff_x20 + 0x20,lVar2 + 0x20);
  param_1[1] = unaff_x20;
  return;
}



/* Entry: 10b9360d4; end: 10b936107;  */

void FUN_10b9360d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = *param_2;
    *param_2 = 0;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10b936108; end: 10b9362fb;  */

void FUN_10b936108(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *extraout_x10;
  int extraout_w12;
  long lVar6;
  long alStack_f8 [2];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x00010b937938();
  lVar6 = *(long *)(param_1 + 0x10);
  uStack_48 = extraout_x8;
  FUN_10b936000(alStack_f8,lVar6);
  if (alStack_f8[0] != 0) {
    lVar5 = *(long *)(lVar6 + 0x10);
    plVar3 = *(long **)(lVar5 + 0x28);
    (**(code **)(*plVar3 + 0x10))(&lStack_68,plVar3,lVar5,lVar6 + 0x20);
    in_ZR = lStack_68 == 1;
    if ((bool)in_ZR) {
      uStack_e8 = *(undefined8 *)(alStack_f8[0] + 8);
      lStack_e0 = *(long *)(alStack_f8[0] + 0x10);
      if (lStack_e0 == 0) {
        plVar3 = *(long **)(alStack_f8[0] + 0x70);
        pcStack_d0 = (code *)0x0;
        uStack_d8 = uStack_e8;
      }
      else {
        do {
          func_0x00010b937960();
        } while (extraout_w12 != 0);
        plVar3 = *(long **)(alStack_f8[0] + 0x70);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x10,0x10);
          if (bVar2) {
            *extraout_x10 = *extraout_x10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          uStack_d8 = extraout_x8_00;
          pcStack_d0 = (code *)extraout_x9;
        } while (cVar1 != '\0');
      }
      lStack_c0 = *(long *)(lVar6 + 0x18);
      uStack_c8 = *(undefined8 *)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        do {
          func_0x00010b937a04();
        } while (extraout_w10 != 0);
      }
      func_0x0001090ee36c(&uStack_b8,&lStack_68);
      pcStack_98 = FUN_10b935e4c;
      ppuStack_90 = &PTR_FUN_110d77790;
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      *puVar4 = uStack_d8;
      puVar4[1] = pcStack_d0;
      uStack_d8 = 0;
      pcStack_d0 = (code *)0x0;
      puVar4[3] = lStack_c0;
      puVar4[2] = uStack_c8;
      if (lStack_c0 != 0) {
        do {
          func_0x00010b937a04();
        } while (extraout_w10_00 != 0);
      }
      puVar4[4] = uStack_b8;
      puVar4[6] = uStack_a8;
      puVar4[5] = uStack_b0;
      puVar4[7] = uStack_a0;
      uStack_b8 = 0;
      puStack_88 = puVar4;
      (**(code **)(*plVar3 + 0x28))(plVar3,&pcStack_98);
      func_0x00010b937c74(ppuStack_90);
      FUN_10b935268(&uStack_d8);
      FUN_10b934ec8(&uStack_d8,*(long *)(lVar6 + 0x10),auStack_60);
      func_0x00010b937b1c();
      func_0x00010b937adc();
      func_0x00010b93082c(&uStack_e8);
    }
    else {
      FUN_10b99fa70(&pcStack_98,auStack_60,&UNK_10f7ce168,0x24);
      uStack_d8 = 2;
      pcStack_d0 = pcStack_98;
      pcStack_98 = (code *)0x0;
      func_0x00010b937b1c();
      func_0x00010b937adc();
      func_0x000104bda960(pcStack_98);
    }
    func_0x0001080c5c8c(&lStack_68);
  }
  plVar3 = alStack_f8;
  FUN_10b930864();
  func_0x00010b937908(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (plVar3[1] == 0) {
      return;
    }
    FUN_10b93543c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9362fc; end: 10b93631b;  */

void FUN_10b9362fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b93543c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93631c; end: 10b93631f;  */

void FUN_10b93631c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b936320; end: 10b936393;  */

void FUN_10b936320(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110d777b0;
  __Znwm(0x38);
  func_0x00010b937cb4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b937a04();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010b937a04();
    } while (extraout_w10_00 != 0);
  }
  func_0x000104c6257c(unaff_x20 + 0x20,lVar2 + 0x20);
  param_1[1] = unaff_x20;
  return;
}



/* Entry: 10b936394; end: 10b936427;  */

long FUN_10b936394(long param_1)

{
  func_0x00010b9363c0(param_1 + 0x18);
  FUN_10b9a8d98(param_1 + 8);
  return param_1;
}



/* Entry: 10b936428; end: 10b9364c7;  */

void FUN_10b936428(long param_1)

{
  long unaff_x19;
  
  func_0x00010b937a50(param_1 + 8);
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b9364c8; end: 10b93699f;  */

long ***** FUN_10b9364c8(long *****param_1)

{
  long ***ppplVar1;
  undefined1 in_ZR;
  bool bVar2;
  long *****ppppplVar3;
  long ****pppplVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long ***ppplVar6;
  ulong uVar7;
  long *plVar8;
  long *****ppppplVar9;
  int iVar10;
  int iVar11;
  long *****unaff_x24;
  long *****ppppplVar12;
  long lStack_130;
  long ****pppplStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  long ****pppplStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long ****pppplStack_c0;
  undefined8 uStack_b8;
  long ****pppplStack_b0;
  undefined8 uStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppppplVar3 = param_1;
  func_0x00010b937938();
  uStack_68 = extraout_x8;
  func_0x00010b937c3c();
  if (lStack_130 == 0) goto LAB_10b936984;
  param_1 = param_1 + 4;
  pppplVar4 = *param_1 + 1;
  FUN_10b9a60f4(pppplVar4,&DAT_10f3046e5);
  if ((int)pppplVar4 == 0) {
    ppppplVar3 = (long *****)(*param_1 + 1);
    FUN_10b9a60f4(ppppplVar3,&UNK_10f47f4d5);
    if ((int)ppppplVar3 == 0) {
      plVar8 = *(long **)(lStack_130 + 0x18);
      if (plVar8 != (long *)0x0) {
        FUN_10b9a2210(&plStack_108,*param_1);
        (**(code **)(*plVar8 + 0x28))(&pppplStack_e0,plVar8,&plStack_108);
        func_0x0001080c9d44(&plStack_108);
        plVar8 = plStack_d8;
        in_ZR = (long *****)pppplStack_e0 == (long *****)0x1;
        if ((bool)in_ZR) {
          plStack_d8 = (long *)0x0;
          lStack_110 = lStack_d0 + lStack_c8;
          lStack_118 = lStack_d0;
          pppplStack_120 = (long ****)0x0;
          pppplStack_80 = (long ****)0x0;
          pppplStack_78 = (long ****)0x0;
          uStack_70 = 0;
          FUN_10b98eba0(&pppplStack_a0,&lStack_118);
          pppplVar4 = pppplStack_90;
          ppppplVar3 = (long *****)pppplStack_98;
          in_ZR = (long *****)pppplStack_a0 == (long *****)0x1;
          if ((bool)in_ZR) {
            iVar10 = 0;
            ppppplVar12 = (long *****)0x0;
            for (ppppplVar9 = (long *****)pppplStack_98; unaff_x24 = (long *****)pppplStack_80,
                ppppplVar3 = (long *****)pppplStack_120, iVar11 = (int)ppppplVar12,
                ppppplVar9 != (long *****)pppplVar4; ppppplVar9 = ppppplVar9 + 3) {
              FUN_10b934c3c();
              if (*ppppplVar9 == pppplRam00000001137fd160) {
                func_0x00010b98f334(&plStack_108,ppppplVar9);
                func_0x000107c31060(&pppplStack_120,&plStack_108);
                func_0x000107c278f8(plStack_108);
                ppppplVar12 = (long *****)(ulong)(iVar11 + 1);
              }
              else {
                func_0x00010b934c98();
                if (*ppppplVar9 == pppplRam00000001137fd170) {
                  if (plVar8 != (long *)0x0) {
                    func_0x00010b937ad4(*(undefined8 *)(*plVar8 + 0x10));
                  }
                  pppplStack_100 = ppppplVar9[1];
                  pppplStack_f8 = ppppplVar9[2];
                  plStack_108 = plVar8;
                  func_0x000104c625c4(&pppplStack_80,&plStack_108);
                  if (plStack_108 != (long *)0x0) {
                    func_0x00010b93791c();
                  }
                  iVar10 = iVar10 + 1;
                }
              }
            }
            in_ZR = iVar11 == 1 && iVar10 == 1;
            if (iVar11 != 1 || iVar10 != 1) {
              FUN_10b99f5f8(&pppplStack_c0,&UNK_10f7ce288);
              ppppplVar3 = (long *****)pppplStack_c0;
              unaff_x24 = ppppplVar12;
              goto LAB_10b936874;
            }
            pppplStack_120 = (long ****)0x0;
            pppplStack_80 = (long ****)0x0;
            uStack_a8 = uStack_70;
            pppplStack_b0 = pppplStack_78;
            bVar2 = true;
            plStack_108 = (long *)0x1;
            pppplStack_100 = (long ****)ppppplVar3;
            pppplStack_f8 = (long ****)unaff_x24;
            pppplStack_c0 = (long ****)0x0;
            uStack_b8 = 0;
            uStack_e8 = uStack_70;
            pppplStack_f0 = pppplStack_78;
            FUN_10b935e24(&pppplStack_c0);
          }
          else {
            pppplStack_100 = pppplStack_98;
            pppplStack_98 = (long ****)0x0;
LAB_10b936874:
            plStack_108 = (long *)0x2;
            bVar2 = false;
          }
          FUN_10b923ec4(&pppplStack_a0);
          if ((long *****)pppplStack_80 != (long *****)0x0) {
            func_0x00010b93791c();
          }
          func_0x000107c278f8(pppplStack_120);
          if (bVar2) {
            pppplStack_100 = (long ****)0x0;
            pppplStack_f8 = (long ****)0x0;
            uStack_88 = uStack_e8;
            pppplStack_90 = pppplStack_f0;
            pppplStack_a0 = (long ****)ppppplVar3;
            pppplStack_98 = (long ****)unaff_x24;
            if (ppppplVar3 == (long *****)(*param_1)[1]) {
              FUN_10b934ec8(&pppplStack_c0,*param_1,&pppplStack_98);
              bVar2 = (long *****)pppplStack_c0 == (long *****)0x1;
              in_ZR = bVar2;
              if (bVar2) {
                func_0x000104bf351c(&pppplStack_80,&uStack_b8);
                func_0x00010b937928();
                func_0x000104bda914(&pppplStack_80);
              }
              func_0x000104bda914(&pppplStack_c0);
            }
            else {
              bVar2 = false;
              in_ZR = 0;
            }
            FUN_10b935e24(&pppplStack_a0);
            FUN_10b935e24(&pppplStack_100);
          }
          else {
            func_0x000104bda960(ppppplVar3);
            bVar2 = false;
          }
          if (plVar8 != (long *)0x0) {
            func_0x00010b937ad4(*(undefined8 *)(*plVar8 + 0x18));
          }
          ppppplVar3 = &pppplStack_e0;
          func_0x0001080c5c8c(ppppplVar3);
          if (bVar2) goto LAB_10b936984;
        }
        else {
          ppppplVar3 = &pppplStack_e0;
          func_0x0001080c5c8c(ppppplVar3);
        }
      }
      func_0x00010b937a2c();
      FUN_10b93546c();
      goto LAB_10b936984;
    }
    pppplStack_c0 = (long ****)&UNK_10f7ce150;
    uStack_b8 = 8;
    pppplVar4 = *param_1 + 1;
    uVar7 = 0;
    func_0x00010b9a5f80();
    if ((uVar7 & 1) != 0) {
      ppplVar6 = (*param_1)[1];
      in_ZR = ppplVar6 == (long ***)0x0;
      uVar7 = 0;
      ppplVar1 = (long ***)&UNK_10f7d0ef0;
      if (!(bool)in_ZR) {
        uVar7 = (ulong)*(uint *)((long)ppplVar6 + 0xc);
        ppplVar1 = ppplVar6 + 3;
      }
      func_0x00010527d8c0(&pppplStack_e0);
      puVar5 = (undefined *)((long)ppplVar1 + (long)(pppplVar4 + 1));
      func_0x00010bcd5aec(puVar5,uVar7 - (long)(pppplVar4 + 1),pppplStack_e0 + 2);
      if (((ulong)puVar5 & 1) == 0) {
        FUN_10b99f5f8(&pppplStack_a0,&UNK_10f7ce159);
        plStack_108 = (long *)0x2;
        pppplStack_100 = pppplStack_a0;
        pppplStack_a0 = (long ****)0x0;
        func_0x00010b937928();
        func_0x00010b937adc();
        func_0x000104bda960(pppplStack_a0);
      }
      else {
        FUN_10b99dbac(&pppplStack_a0,&pppplStack_e0);
        FUN_10b934ec8(&plStack_108,*param_1,&pppplStack_a0);
        if ((long *****)pppplStack_a0 != (long *****)0x0) {
          func_0x00010b93791c();
        }
        func_0x00010b937928();
        func_0x00010b937adc();
      }
      func_0x00010527d974(pppplStack_e0);
      ppppplVar3 = (long *****)pppplStack_e0;
      goto LAB_10b936984;
    }
    puVar5 = &UNK_10f7ce159;
  }
  else {
    if (*(long *)(lStack_130 + 0x18) != 0) {
      FUN_10b9a6470(&pppplStack_c0,*param_1 + 1,7);
      plVar8 = *(long **)(lStack_130 + 0x18);
      FUN_10b9a2210(&pppplStack_a0,&pppplStack_c0);
      (**(code **)(*plVar8 + 0x28))(&plStack_108,plVar8,&pppplStack_a0);
      func_0x0001080c9d44(&pppplStack_a0);
      in_ZR = plStack_108 == (long *)0x1;
      if ((bool)in_ZR) {
        FUN_10b934ec8(&pppplStack_a0,*param_1,&pppplStack_100);
      }
      else {
        pppplStack_a0 = (long ****)0x2;
        pppplStack_98 = pppplStack_100;
        pppplStack_100 = (long ****)0x0;
      }
      func_0x00010b937928();
      func_0x000104bda914(&pppplStack_a0);
      func_0x0001080c5c8c(&plStack_108);
      ppppplVar3 = (long *****)pppplStack_c0;
      func_0x000107c278f8(pppplStack_c0);
      goto LAB_10b936984;
    }
    puVar5 = &UNK_10f7ce125;
  }
  FUN_10b99f5f8(&pppplStack_a0,puVar5);
  plStack_108 = (long *)0x2;
  pppplStack_100 = pppplStack_a0;
  pppplStack_a0 = (long ****)0x0;
  func_0x00010b937928();
  func_0x00010b937adc();
  ppppplVar3 = (long *****)pppplStack_a0;
  func_0x000104bda960(pppplStack_a0);
LAB_10b936984:
  func_0x00010b937c34();
  func_0x00010b937908(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b937a50(ppppplVar3 + 1);
    if (param_1[1] != (long ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  return ppppplVar3;
}



/* Entry: 10b9369a0; end: 10b936a27;  */

void FUN_10b9369a0(long param_1)

{
  long unaff_x19;
  
  func_0x00010b937a50(param_1 + 8);
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b936a28; end: 10b936a4f;  */

long FUN_10b936a28(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b936a50; end: 10b936f23;  */

code * FUN_10b936a50(long *param_1,code *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  undefined1 in_ZR;
  bool bVar7;
  bool bVar8;
  long **pplVar9;
  ulong *puVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long alStack_1f8 [2];
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  code *pcStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined2 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  pcVar11 = param_2;
  func_0x00010b937938();
  lVar13 = *param_1;
  uStack_180 = param_1[2];
  uStack_188 = param_1[1];
  uStack_170 = param_1[4];
  uStack_178 = param_1[3];
  lStack_160 = param_1[6];
  lStack_168 = param_1[5];
  lStack_158 = param_1[7];
  *param_1 = 0;
  plVar14 = alStack_1f8;
  lStack_190 = lVar13;
  uStack_68 = extraout_x8;
  FUN_10b936000(plVar14,pcVar11 + 0x10);
  if (alStack_1f8[0] == 0) goto LAB_10b936ee4;
  uStack_140 = uStack_180;
  uStack_148 = uStack_188;
  uVar2 = uStack_148;
  uStack_130 = uStack_170;
  uStack_138 = uStack_178;
  lStack_120 = lStack_160;
  lStack_128 = lStack_168;
  lStack_118 = lStack_158;
  lVar16 = lStack_118;
  lStack_190 = 0;
  in_ZR = lVar13 == 1;
  lStack_150 = lVar13;
  if ((bool)in_ZR) {
    uStack_148._0_4_ = (int)uStack_188;
    uVar15 = uStack_188 & 0xffffffff;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_148);
    uStack_98 = uStack_180;
    uStack_138._0_2_ = (undefined2)uStack_178;
    uStack_90 = (undefined2)uStack_138;
    uStack_140 = 0;
    uStack_138 = uStack_178 & 0xffffffffffff0000;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    lStack_118._0_1_ = (char)lStack_158;
    uStack_70 = (char)lStack_118 == '\x01';
    if ((bool)uStack_70) {
      uStack_88 = uStack_170;
      uStack_130 = 0;
      lStack_78 = lStack_160;
      lStack_80 = lStack_168;
    }
    in_ZR = (int)uStack_148 - 300U == 0xffffff9b;
    uStack_148 = uVar2;
    lStack_118 = lVar16;
    if ((int)uStack_148 - 300U < 0xffffff9c) {
      uVar6 = (int)uStack_148 - 500;
      bVar7 = (int)uStack_148 == 0x1ad;
      bVar8 = (int)uStack_148 == 0x198;
      in_ZR = 4 < uVar6 || uVar6 == 1;
      func_0x000107c31084();
      pcStack_108 = (code *)0x0;
      uStack_110 = uVar15;
      func_0x000107c2793c(&UNK_10f7ce1a0);
      func_0x000107c3173c(&pcStack_d0);
      func_0x000107c31080(&plStack_1c0,plVar14,&pcStack_d0);
      FUN_10b99f560(&pcStack_1a8,&plStack_1c0);
      uStack_110 = 2;
      pcStack_108 = pcStack_1a8;
      pcStack_1a8 = (code *)0x0;
      FUN_10b935294(alStack_1f8[0],param_2 + 0x20,&uStack_110,
                    4 >= uVar6 && uVar6 != 1 || (bVar8 || bVar7));
      func_0x00010b937c5c();
      func_0x000104bda960(pcStack_1a8);
      func_0x000107c278f8(plStack_1c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_d0);
    }
    else {
      pcStack_1a8 = (code *)0x0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      bVar7 = (char)lStack_118 == '\0';
      if ((bVar7) || (func_0x000105c3d468(&pcStack_1a8,&uStack_88), uStack_198 == 0)) {
        func_0x000107c31088(&plStack_1c0,&UNK_10f7ce1cc);
        FUN_10b99f560(&pcStack_d0,&plStack_1c0);
        uStack_110 = 2;
        pcStack_108 = pcStack_d0;
        pcStack_d0 = (code *)0x0;
        func_0x00010b937ac0();
        func_0x00010b937c5c();
        func_0x000104bda960(pcStack_d0);
        func_0x000107c278f8(plStack_1c0);
      }
      else {
        lVar13 = *(long *)(param_2 + 0x20);
        plVar14 = *(long **)(lVar13 + 0x10);
        if (plVar14 != (long *)0x0) {
          func_0x00010b937ad4(*(undefined8 *)(*plVar14 + 0x10));
        }
        lVar16 = *(long *)(lVar13 + 0x20);
        uStack_1b8 = *(ulong *)(lVar13 + 0x18);
        plStack_1c0 = plVar14;
        lStack_1b0 = lVar16;
        if (lVar16 == 0) {
LAB_10b936cd8:
          uVar2 = *(ulong *)(alStack_1f8[0] + 8);
          uStack_1e0 = *(ulong *)(alStack_1f8[0] + 0x10);
          if (uStack_1e0 == 0) {
            plVar12 = *(long **)(alStack_1f8[0] + 0x70);
            pcStack_108 = (code *)0x0;
          }
          else {
            plVar1 = (long *)(uStack_1e0 + 0x10);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar12 = *(long **)(alStack_1f8[0] + 0x70);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              pcStack_108 = (code *)uStack_1e0;
            } while (cVar5 != '\0');
          }
          ppuVar3 = *(undefined ***)(param_2 + 0x20);
          puVar4 = *(ulong **)(param_2 + 0x28);
          uStack_1e8 = uVar2;
          uStack_110 = uVar2;
          ppuStack_100 = ppuVar3;
          puStack_f8 = puVar4;
          if (puVar4 != (ulong *)0x0) {
            do {
              func_0x00010b937a04();
            } while (extraout_w10 != 0);
          }
          param_2 = pcStack_1a8;
          if (pcStack_1a8 != (code *)0x0) {
            (**(code **)(*(long *)pcStack_1a8 + 0x10))(pcStack_1a8);
          }
          uStack_e0 = uStack_198;
          uStack_e8 = uStack_1a0;
          pcStack_d0 = FUN_10b936108;
          ppuStack_c8 = &PTR_FUN_110d777b0;
          puVar10 = (ulong *)0x38;
          __Znwm();
          *puVar10 = uVar2;
          puVar10[1] = (ulong)pcStack_108;
          uStack_110 = 0;
          pcStack_108 = (code *)0x0;
          puVar10[2] = (ulong)ppuVar3;
          puVar10[3] = (ulong)puVar4;
          if (puVar4 != (ulong *)0x0) {
            do {
              func_0x00010b937a04();
            } while (extraout_w10_00 != 0);
          }
          puVar10[4] = (ulong)param_2;
          uStack_f0 = 0;
          puVar10[6] = uStack_e0;
          puVar10[5] = uStack_e8;
          puStack_c0 = puVar10;
          (**(code **)(*plVar12 + 0x28))(plVar12,&pcStack_d0);
          (*(code *)*ppuStack_c8)(&ppuStack_c8);
          FUN_10b93543c(&uStack_110);
          func_0x00010b93082c(&uStack_1e8);
        }
        else {
          func_0x00010b94952c(&uStack_110,&pcStack_1a8);
          FUN_10b99daa0(&pcStack_d0,uStack_110);
          func_0x000104bdb368(uStack_110);
          pplVar9 = &plStack_1c0;
          func_0x00010b99dc40(pplVar9,&pcStack_d0);
          if (((ulong)pplVar9 & 1) != 0) {
            if (pcStack_d0 != (code *)0x0) {
              func_0x00010b93791c();
            }
            goto LAB_10b936cd8;
          }
          func_0x000107c31084();
          uStack_110 = uStack_1b8;
          ppuStack_100 = ppuStack_c8;
          puStack_f8 = puStack_c0;
          pcStack_108 = (code *)lVar16;
          func_0x000107c2793c(&UNK_10f7ce1f4);
          func_0x000107c3173c(&uStack_1e8);
          func_0x000107c31080(&uStack_1d0,pplVar9,&uStack_1e8);
          FUN_10b99f560(&pcStack_1c8,&uStack_1d0);
          uStack_110 = 2;
          pcStack_108 = pcStack_1c8;
          pcStack_1c8 = (code *)0x0;
          func_0x00010b937ac0();
          func_0x00010b937c5c();
          func_0x000104bda960(pcStack_1c8);
          func_0x000107c278f8(uStack_1d0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1e8);
          if (pcStack_d0 != (code *)0x0) {
            func_0x00010b93791c();
          }
        }
        if (plVar14 != (long *)0x0) {
          func_0x00010b937ad4(*(undefined8 *)(*plVar14 + 0x18));
        }
      }
      if (pcStack_1a8 != (code *)0x0) {
        func_0x00010b93791c();
      }
    }
    FUN_10b936394(&uStack_a0);
  }
  else {
    FUN_10b99fa70(&uStack_110,&uStack_148,&UNK_10f7ce18d,0x12);
    uStack_a0 = 2;
    uStack_98 = uStack_110;
    uStack_110 = 0;
    FUN_10b935294(alStack_1f8[0],param_2 + 0x20,&uStack_a0,1);
    func_0x000104bda914(&uStack_a0);
    func_0x000104bda960(uStack_110);
  }
  FUN_10b936f24(&lStack_150);
LAB_10b936ee4:
  FUN_10b930864(alStack_1f8);
  pcVar11 = (code *)&lStack_190;
  FUN_10b936f24();
  func_0x00010b937908(uStack_68);
  if ((bool)in_ZR) {
    return pcVar11;
  }
  ___stack_chk_fail();
  if (*(long *)pcVar11 != 2) {
    if (*(long *)pcVar11 == 1) {
      func_0x00010b9363c0(pcVar11 + 0x20);
      FUN_10b9a8d98(pcVar11 + 0x10);
      return pcVar11 + 8;
    }
    return pcVar11;
  }
  func_0x0001003adc0c(pcVar11 + 8);
  func_0x000104bda960();
  return param_2;
}



/* Entry: 10b936f24; end: 10b936feb;  */

long * FUN_10b936f24(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    func_0x00010b9363c0(param_1 + 4);
    FUN_10b9a8d98(param_1 + 2);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b936fec; end: 10b937013;  */

long FUN_10b936fec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b937014; end: 10b93701b;  */

void FUN_10b937014(long param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x0001003af524(&uStack_11,param_1,param_2 - param_1);
  return;
}



/* Entry: 10b93701c; end: 10b93706b;  */

long FUN_10b93701c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b937090();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b93706c; end: 10b93708f;  */

void FUN_10b93706c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b937130(&lStack_18);
  return;
}



/* Entry: 10b937090; end: 10b93712f;  */

bool FUN_10b937090(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x20) == lVar7) goto LAB_10b937124;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b937124:
  return uVar5 != 0;
}



/* Entry: 10b937130; end: 10b93714b;  */

void FUN_10b937130(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b937ba8(param_1,*param_2);
  return;
}



/* Entry: 10b93714c; end: 10b93717f;  */

long * FUN_10b93714c(long *param_1)

{
  param_1[1] = param_1[1] + 0x20;
  *param_1 = *param_1 + 1;
  FUN_10b9371c0();
  return param_1;
}



/* Entry: 10b937180; end: 10b9371bf;  */

void FUN_10b937180(long *param_1,ulong *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  long extraout_x10;
  long extraout_x10_00;
  long lVar3;
  long extraout_x11;
  long extraout_x11_00;
  long lVar4;
  undefined1 extraout_w12;
  undefined1 uVar5;
  undefined8 unaff_x30;
  
  FUN_10b935d8c(param_3);
  param_1[2] = param_1[2] + -1;
  func_0x00010b937c80(0,param_1,param_2,unaff_x30);
  uVar1 = extraout_x8;
  uVar2 = extraout_x9;
  lVar3 = extraout_x10;
  lVar4 = extraout_x11;
  uVar5 = extraout_w12;
  if ((!(bool)in_ZR) && ((*param_2 & ~*param_2 << 6 & 0x8080808080808080) != 0)) {
    func_0x00010b937cdc();
    uVar1 = (ulong)!(bool)in_CY;
    uVar5 = 0x80;
    uVar2 = extraout_x9_00;
    lVar3 = extraout_x10_00;
    lVar4 = extraout_x11_00;
    if ((bool)in_CY) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)(lVar3 + lVar4) = uVar5;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & uVar2) + 1) = uVar5;
  param_1[5] = param_1[5] + uVar1;
  return;
}



/* Entry: 10b9371c0; end: 10b937213;  */

void FUN_10b9371c0(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x20;
  }
  return;
}



/* Entry: 10b937214; end: 10b93729b;  */

void FUN_10b937214(long *param_1,ulong *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  long extraout_x10;
  long extraout_x10_00;
  long lVar3;
  long extraout_x11;
  long extraout_x11_00;
  long lVar4;
  undefined1 extraout_w12;
  undefined1 uVar5;
  
  param_1[2] = param_1[2] + -1;
  func_0x00010b937c80(0);
  uVar1 = extraout_x8;
  uVar2 = extraout_x9;
  lVar3 = extraout_x10;
  lVar4 = extraout_x11;
  uVar5 = extraout_w12;
  if ((!(bool)in_ZR) && ((*param_2 & ~*param_2 << 6 & 0x8080808080808080) != 0)) {
    func_0x00010b937cdc();
    uVar1 = (ulong)!(bool)in_CY;
    uVar5 = 0x80;
    uVar2 = extraout_x9_00;
    lVar3 = extraout_x10_00;
    lVar4 = extraout_x11_00;
    if ((bool)in_CY) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)(lVar3 + lVar4) = uVar5;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & uVar2) + 1) = uVar5;
  param_1[5] = param_1[5] + uVar1;
  return;
}



/* Entry: 10b93729c; end: 10b9372b7;  */

void FUN_10b93729c(undefined8 param_1)

{
  func_0x00010b937ba8(param_1,param_1);
  return;
}



/* Entry: 10b9372b8; end: 10b9372bb;  */

void FUN_10b9372b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9372bc; end: 10b9372cf;  */

void FUN_10b9372bc(void)

{
  FUN_10b93731c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9372d0; end: 10b93731b;  */

/* WARNING: Possible PIC construction at 0x00010b93730c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b937310) */
/* WARNING: Removing unreachable block (ram,0x00010b937bb0) */

long FUN_10b9372d0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x48);
  if (*plVar1 != 0) {
    func_0x00010b937330(plVar1);
    __ZdlPv(*plVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b93791c();
  }
  func_0x00010007e5d0(param_1 + 0x20);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10b93731c; end: 10b937337;  */

void FUN_10b93731c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b937338; end: 10b9373ff;  */

void FUN_10b937338(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b937bc8();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    func_0x00010b937ad4(**(undefined8 **)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b937400; end: 10b93742f;  */

ulong FUN_10b937400(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b937430; end: 10b93760b;  */

void FUN_10b937430(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  
  func_0x00010b937bec();
  lVar2 = extraout_x8 + 0x10 + param_2 * 0x18;
  __Znwm(lVar2);
  func_0x00010b937bb8(lVar2 + extraout_x8 + 0x10);
  lVar2 = 0;
  func_0x00010b937c04();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b937cc8(uVar1);
  for (; unaff_x24 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar2)) {
      lVar3 = unaff_x21;
      FUN_10b93760c(unaff_x21);
      func_0x00010b937bd4();
      FUN_10b937400();
      func_0x00010b9379b8();
      FUN_10b937628(extraout_x8_01 + lVar3 * 0x18,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x18;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93760c; end: 10b937627;  */

void FUN_10b93760c(undefined8 *param_1)

{
  func_0x00010b937ba8(param_1,*param_1);
  return;
}



/* Entry: 10b937628; end: 10b937647;  */

undefined8 FUN_10b937628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10b936a28(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b937648; end: 10b9376cf;  */

void FUN_10b937648(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b937b50();
  FUN_10b9376d0();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b937700();
      }
      else {
        func_0x00010b937798();
      }
      func_0x00010b937ca0();
      FUN_10b9376d0();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b937a88(lVar1);
  return;
}



/* Entry: 10b9376d0; end: 10b9376ff;  */

ulong FUN_10b9376d0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b937700; end: 10b9378b3;  */

void FUN_10b937700(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010b937bec();
  lVar3 = extraout_x8 + 0x10 + param_2 * 0x20;
  __Znwm(lVar3);
  func_0x00010b937bb8(lVar3 + extraout_x8 + 0x10);
  lVar3 = 0;
  func_0x00010b937c04();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b937cc8(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b9378b4(unaff_x21);
      func_0x00010b937bd4();
      FUN_10b9376d0();
      func_0x00010b9379b8();
      FUN_10b9378d0(extraout_x8_01 + lVar2 * 0x20,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9378b4; end: 10b9378cf;  */

void FUN_10b9378b4(undefined8 *param_1)

{
  func_0x00010b937ba8(param_1,*param_1);
  return;
}



/* Entry: 10b9378d0; end: 10b937907;  */

long FUN_10b9378d0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b937bc8();
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_10b9a8f04(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  FUN_10b9a8d98(unaff_x19 + 8);
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b937908; end: 10b937cf7;  */

void FUN_10b937908(void)

{
  return;
}



/* Entry: 10b937cf8; end: 10b938137;  */

undefined8 *
FUN_10b937cf8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  uVar1 = *param_4;
  param_1[1] = *param_3;
  *param_3 = 0;
  param_1[2] = uVar1;
  *param_4 = 0;
  uVar1 = param_4[1];
  param_1[4] = param_4[2];
  param_1[3] = uVar1;
  param_1[5] = param_5;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  func_0x000107c28144(param_1 + 9);
  return param_1;
}



/* Entry: 10b938138; end: 10b9382db;  */

undefined8 **
FUN_10b938138(undefined8 *param_1,long param_2,undefined8 **param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [15];
  undefined8 uStack_38;
  
  func_0x00010b93a8f4();
  puStack_b8 = (undefined8 *)0x0;
  uStack_38 = extraout_x8;
  if (*(char *)(param_2 + 8) == '\x01') {
    plVar6 = (long *)*param_4;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    uStack_140 = param_4[2];
    uStack_148 = param_4[1];
    plStack_150 = plVar6;
    FUN_10b93fe04(&puStack_138,&plStack_150);
    func_0x00010b93aac0();
    func_0x000105c3e664(&puStack_138);
    if (plStack_150 != (long *)0x0) {
      func_0x00010b93a914();
    }
  }
  else {
    param_3 = (undefined8 **)param_4[2];
    FUN_10b93fd24(&puStack_138,param_4[1]);
    func_0x00010b93aac0();
    func_0x000105c3e664(&puStack_138);
  }
  uVar2 = puStack_b8 == (undefined8 *)0x1;
  if ((bool)uVar2) {
    func_0x00010b938328(&uStack_160,auStack_b0);
    puVar3 = (undefined8 *)0x38;
    __Znwm();
    uVar1 = uStack_160;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110d779c8;
    puVar5 = puVar3 + 3;
    *puVar5 = &PTR_DAT_110d77a18;
    uStack_160 = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = uVar1;
    puStack_138 = puVar5;
    puStack_130 = puVar3;
    do {
      func_0x00010b93a904();
    } while (extraout_w10 != 0);
    func_0x000107c278e4();
    func_0x000107c284e8(&puStack_138);
    if (puVar3[5] != 0) {
      do {
        func_0x00010b93a904();
      } while (extraout_w10_00 != 0);
    }
    puStack_158 = puVar5;
    func_0x00010b9a8f78(&puStack_138,&puStack_158);
    param_3 = &puStack_138;
    func_0x000104bf351c(param_1);
    FUN_10b9a8d98(&puStack_138);
    func_0x000104bddf04(puVar5);
    func_0x00010b939a78(puVar5);
    FUN_10b92e3b8(uStack_160);
  }
  else {
    *param_1 = 2;
    param_1[1] = auStack_b0[0];
    auStack_b0[0] = 0;
  }
  ppuVar4 = &puStack_b8;
  func_0x000105c3e664();
  func_0x00010b93a8e0(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if (ppuVar4 != param_3) {
      func_0x000105c3e664(ppuVar4);
      *ppuVar4 = *param_3;
      _memcpy(ppuVar4 + 1,param_3 + 1,0x78);
      *param_3 = (undefined8 *)0x0;
    }
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 10b9382dc; end: 10b93836b;  */

undefined8 * FUN_10b9382dc(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x000105c3e664(param_1);
    *param_1 = *param_2;
    _memcpy(param_1 + 1,param_2 + 1,0x78);
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10b93836c; end: 10b93837b;  */

undefined1  [16] FUN_10b93836c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = &DAT_10f5aee30;
  return auVar1;
}



/* Entry: 10b93837c; end: 10b938747;  */

undefined1  [16]
FUN_10b93837c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined **ppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long lVar5;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar6;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_238;
  undefined *puStack_230;
  ulong uStack_228;
  undefined *puStack_218;
  undefined1 auStack_210 [24];
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_f0;
  undefined8 auStack_e8 [15];
  undefined8 uStack_70;
  
  func_0x00010b93a8f4();
  plVar7 = *(long **)(param_2 + 8);
  uStack_70 = extraout_x8;
  if (plVar7 == (long *)0x0) {
    ppuVar4 = (undefined **)&UNK_10f7ce2a3;
    ppuVar2 = &puStack_f0;
    FUN_10b99f5f8(ppuVar2,&UNK_10f7ce2a3);
    *param_1 = 2;
    param_1[1] = puStack_f0;
    puStack_f0 = (undefined *)0x0;
    func_0x00010b93a9e8();
  }
  else {
    func_0x00010b93ab08();
    FUN_10b9a2210(&puStack_f0);
    ppuVar4 = &puStack_f0;
    (**(code **)(*plVar7 + 0x50))(plVar7,ppuVar4);
    func_0x0001080c9d44(&puStack_f0);
    puStack_f0 = (undefined *)0x0;
    if (*(char *)(unaff_x20 + 0x18) == '\x01') {
      plVar7 = (long *)*param_4;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      uStack_198 = param_4[2];
      uStack_1a0 = param_4[1];
      plStack_1a8 = plVar7;
      FUN_10b93fe04(&ppuStack_170,&plStack_1a8);
      func_0x00010b93aab4();
      func_0x000105c3e664(&ppuStack_170);
      if (plStack_1a8 != (long *)0x0) {
        func_0x00010b93a914();
      }
    }
    else {
      ppuVar4 = (undefined **)param_4[2];
      FUN_10b93fd24(&ppuStack_170,param_4[1],ppuVar4);
      func_0x00010b93aab4();
      func_0x000105c3e664(&ppuStack_170);
    }
    in_ZR = puStack_f0 == (undefined *)0x1;
    if ((bool)in_ZR) {
      func_0x00010b938328(&lStack_1b0,auStack_e8);
      ppuStack_170 = &PTR_FUN_110d7e488;
      uStack_168 = 1;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      lVar5 = *unaff_x21;
      if (lVar5 == 0) {
        puStack_1e0 = &UNK_10f7d0ef0;
        uStack_1d8 = 0;
      }
      else {
        puStack_1e0 = (undefined *)(lVar5 + 0x18);
        uStack_1d8 = (ulong)*(uint *)(lVar5 + 0xc);
      }
      FUN_10b9a2108(auStack_1c8,&puStack_1e0);
      func_0x00010b9a2670(auStack_1c8);
      puStack_1e0 = &DAT_10f3adff7;
      uStack_1d8 = 3;
      ppuVar4 = &puStack_1e0;
      FUN_10b9a26e0(auStack_1c8,ppuVar4);
      plVar7 = *(long **)(lStack_1b0 + 0x60);
      plVar1 = *(long **)(lStack_1b0 + 0x68);
      do {
        in_ZR = plVar7 == plVar1;
        if ((bool)in_ZR) {
          FUN_10b98f484(&lStack_1f8,&ppuStack_170);
          FUN_10b99daa0(&puStack_1e0,lStack_1f8);
          *param_1 = 1;
          param_1[1] = puStack_1e0;
          param_1[3] = uStack_1d0;
          param_1[2] = uStack_1d8;
          func_0x000104bdb368(lStack_1f8);
          goto LAB_10b9386e8;
        }
        func_0x00010b93fc94(&puStack_1e0,lStack_1b0,plVar7);
        lStack_1f8 = lStack_1b0;
        if ((lStack_1b0 != 0) && (*(long *)(lStack_1b0 + 0x10) != 0)) {
          do {
            func_0x00010b93aa18();
            lStack_1f8 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        puStack_1f0 = puStack_1e0;
        uStack_1e8 = uStack_1d8;
        lVar5 = *plVar7;
        if (lVar5 == 0) {
          puStack_230 = &UNK_10f7d0ef0;
          uStack_228 = 0;
        }
        else {
          puStack_230 = (undefined *)(lVar5 + 0x18);
          uStack_228 = (ulong)*(uint *)(lVar5 + 0xc);
        }
        FUN_10b9a2434(auStack_210,auStack_1c8,&puStack_230);
        plVar3 = *(long **)(unaff_x20 + 8);
        (**(code **)(*plVar3 + 0x38))(&lStack_180,plVar3,auStack_210,&lStack_1f8);
        lVar5 = lStack_180;
        if (lStack_180 == 1) {
          uVar6 = 0;
          if (*plVar7 != 0) {
            do {
              func_0x00010b93aa28();
              uVar6 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          uStack_238 = uVar6;
          FUN_10b9a24fc(&plStack_190,auStack_210);
          FUN_10b98f2dc(&puStack_230,&uStack_238,&plStack_190);
          ppuVar4 = &puStack_230;
          FUN_10b98f360(&ppuStack_170,ppuVar4);
          func_0x000107c278f8(puStack_230);
          func_0x000107c278f8(plStack_190);
          func_0x000107c278f8(uStack_238);
        }
        else {
          func_0x000107c31084();
          puStack_188 = &UNK_1003ab990;
          plStack_190 = plVar7;
          func_0x000107c2793c(&UNK_10f7ce2ce);
          func_0x00010b93a978(&puStack_230);
          func_0x000107c31080(&puStack_218,plVar3,&puStack_230);
          ppuVar4 = &puStack_218;
          FUN_10b99fa14(&plStack_190,auStack_178,ppuVar4);
          *param_1 = 2;
          param_1[1] = plStack_190;
          plStack_190 = (long *)0x0;
          func_0x00010b93a9e8();
          func_0x000107c278f8(puStack_218);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_230);
        }
        func_0x0001080c6234(&lStack_180);
        func_0x0001080c9d44(auStack_210);
        if (lStack_1f8 != 0) {
          func_0x00010b93a914();
        }
        plVar7 = plVar7 + 1;
      } while (lVar5 == 1);
      in_ZR = 0;
LAB_10b9386e8:
      func_0x0001080c9d44(auStack_1c8);
      ppuStack_170 = &PTR_FUN_110d7e488;
      _free(uStack_150);
      FUN_10b92e3b8(lStack_1b0);
    }
    else {
      *param_1 = 2;
      param_1[1] = auStack_e8[0];
      auStack_e8[0] = 0;
    }
    ppuVar2 = &puStack_f0;
    func_0x000105c3e664(ppuVar2);
  }
  func_0x00010b93a8e0(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    auVar9._8_8_ = 0xe;
    auVar9._0_8_ = &UNK_10f7ce2ff;
    return auVar9;
  }
  auVar8._8_8_ = ppuVar4;
  auVar8._0_8_ = ppuVar2;
  return auVar8;
}



/* Entry: 10b938748; end: 10b938757;  */

undefined1  [16] FUN_10b938748(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f7ce2ff;
  return auVar1;
}



/* Entry: 10b938758; end: 10b93893f;  */

long * FUN_10b938758(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = param_3;
  func_0x000108137f24(param_3,param_1);
  if ((long *)(*param_3 + param_3[3]) != plVar1) {
    return plVar1;
  }
  func_0x00010813843c(param_3,param_1);
  func_0x0001003b1e6c();
  return param_3;
}



/* Entry: 10b938940; end: 10b938d13;  */

long *** FUN_10b938940(undefined8 *param_1,long **param_2,long param_3,long **param_4,long param_5,
                      long ***param_6,long **param_7)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long ***ppplVar5;
  undefined8 *puVar6;
  long ***ppplVar7;
  undefined8 extraout_x8;
  long **extraout_x8_00;
  long **pplVar8;
  long **extraout_x8_01;
  long **pplVar9;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w12;
  int extraout_w12_00;
  long **unaff_x20;
  undefined1 auStack_190 [16];
  long **pplStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  long **pplStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long **pplStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  long lStack_110;
  undefined1 auStack_108 [8];
  long **pplStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  long **pplStack_d0;
  undefined *apuStack_c8 [3];
  long **pplStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  pplStack_160 = param_4;
  puStack_158 = param_1;
  func_0x00010b93a8f4();
  uStack_d8 = 0;
  pplStack_100 = (long **)&UNK_10dd5b8b0;
  puStack_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_110 = 1;
  lStack_150 = *(long *)(param_5 + 8);
  lStack_148 = lStack_150 + *(long *)(param_5 + 0x10);
  uStack_70 = extraout_x8;
  FUN_10b98eba0(&lStack_130,&lStack_150);
  if (lStack_130 == 1) {
    unaff_x20 = (long **)0x2;
    puVar6 = puStack_128;
    do {
      uVar3 = true;
      if (puVar6 == puStack_120) goto LAB_10b938be8;
      if (*(long *)(param_3 + 8) == 0) {
        FUN_10b99f5f8(&pplStack_a0,&UNK_10f7ce2a3);
        pplStack_b0 = (long **)0x2;
        pplStack_a8 = pplStack_a0;
      }
      else {
        func_0x00010b98f334(&pplStack_d0,puVar6);
        FUN_10b9a2210(&pplStack_a0,&pplStack_d0);
        func_0x000107c278f8(pplStack_d0);
        plVar4 = *(long **)(param_3 + 8);
        (**(code **)(*plVar4 + 0x20))(plVar4,&pplStack_a0);
        if (((ulong)plVar4 & 1) == 0) {
          func_0x000107c31084();
          pplStack_a8 = (long **)FUN_10b939a84;
          pplStack_b0 = (long **)&pplStack_a0;
          func_0x000107c2793c(&UNK_10f7ce32a);
          param_6 = &pplStack_b0;
          func_0x00010b93a978(&pplStack_d0);
          func_0x000107c31080(&uStack_140,plVar4,&pplStack_d0);
          FUN_10b99f560(&pplStack_138,&uStack_140);
          pplStack_b0 = (long **)0x2;
          pplStack_a8 = pplStack_138;
          pplStack_138 = (long **)0x0;
          func_0x000107c278f8(uStack_140);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_d0);
        }
        else {
          (**(code **)(**(long **)(param_3 + 8) + 0x60))
                    (&pplStack_138,*(long **)(param_3 + 8),&pplStack_a0);
          FUN_10b938758(puVar6,&pplStack_138,&pplStack_100);
          func_0x00010b9387bc(&pplStack_d0,puVar6);
          if ((pplStack_d0 == (long **)0x1) && (apuStack_c8[0] != (undefined *)*puVar6)) {
            FUN_10b938758(apuStack_c8,&pplStack_138,&pplStack_100);
          }
          pplStack_b0 = (long **)0x1;
          func_0x000104bdd63c(&pplStack_d0);
          func_0x000107c278f8(pplStack_138);
        }
        func_0x0001080c9d44(&pplStack_a0);
      }
      func_0x0001080c6694(&lStack_110,&pplStack_b0);
      ppplVar5 = &pplStack_b0;
      func_0x0001080c6234(ppplVar5);
      puVar6 = puVar6 + 3;
    } while (lStack_110 == 1);
  }
  else {
    pplStack_a0 = (long **)0x2;
    puStack_98 = puStack_128;
    puStack_128 = (undefined8 *)0x0;
    func_0x0001080c6694(&lStack_110,&pplStack_a0);
    ppplVar5 = &pplStack_a0;
    func_0x0001080c6234(ppplVar5);
  }
  uVar3 = lStack_110 == 2;
  if ((bool)uVar3) {
    plVar4 = &lStack_110;
    func_0x000107c31084();
    pplStack_d0 = pplStack_160;
    apuStack_c8[0] = &UNK_1003ab990;
    func_0x000107c2793c(&UNK_10f7ce357);
    param_6 = &pplStack_d0;
    func_0x00010b93a978(&pplStack_a0);
    func_0x000107c31080(&pplStack_b0,ppplVar5,&pplStack_a0);
    ppplVar5 = &pplStack_b0;
    FUN_10b99fa14(&pplStack_d0,auStack_108);
    *puStack_158 = 2;
    puStack_158[1] = pplStack_d0;
    pplStack_d0 = (long **)0x0;
    func_0x00010b93a9e8();
    func_0x000107c278f8(pplStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_a0);
    goto LAB_10b938ccc;
  }
LAB_10b938be8:
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  puStack_98 = puStack_f8;
  param_2 = pplStack_100;
  plVar4 = puVar6 + 1;
  *plVar4 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110d77a70;
  unaff_x20 = (long **)(puVar6 + 3);
  pplStack_100 = (long **)&UNK_10dd5b8b0;
  puStack_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pplStack_a0 = param_2;
  uStack_78 = uStack_d8;
  uStack_d8 = 0;
  FUN_10b93b2a0(unaff_x20,&pplStack_a0);
  func_0x000108138894(&pplStack_a0);
  if ((puVar6[5] == 0) || (uVar3 = *(long *)(puVar6[5] + 8) == -1, (bool)uVar3)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pplStack_a0 = unaff_x20;
    puStack_98 = puVar6;
    func_0x000107c278e4(puVar6 + 4,&pplStack_a0);
    func_0x000107c284e8(&pplStack_a0);
    if (puVar6[5] != 0) goto LAB_10b938c90;
  }
  else {
LAB_10b938c90:
    do {
      func_0x00010b93a904();
    } while (extraout_w10 != 0);
  }
  pplStack_d0 = unaff_x20;
  func_0x00010b9a8f78(&pplStack_a0,&pplStack_d0);
  ppplVar5 = &pplStack_a0;
  func_0x000104bf351c(puStack_158);
  FUN_10b9a8d98(&pplStack_a0);
  func_0x000104bddf04(unaff_x20);
  FUN_10b92b058(unaff_x20);
LAB_10b938ccc:
  FUN_10b923ec4(&lStack_130);
  func_0x0001080c6234(&lStack_110);
  ppplVar7 = &pplStack_100;
  func_0x000108138894();
  func_0x00010b93a8e0(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uStack_168 = 0x10b938d14;
    pplStack_180 = unaff_x20;
    plStack_178 = plVar4;
    puStack_170 = &stack0xfffffffffffffff0;
    ppplVar7[1] = (long **)0x0;
    ppplVar7[2] = (long **)0x0;
    *ppplVar7 = (long **)&PTR_DAT_110d778c8;
    pplVar8 = (long **)0x0;
    if (*ppplVar5 != (long **)0x0) {
      do {
        func_0x00010b93a980();
        pplVar8 = extraout_x8_00;
      } while (extraout_w12 != 0);
    }
    ppplVar7[4] = *param_6;
    ppplVar7[3] = pplVar8;
    *param_6 = (long **)0x0;
    ppplVar7[5] = param_7;
    ppplVar7[6] = param_2;
    ppplVar7[7] = (long **)&PTR_DAT_110d778f8;
    *(undefined1 *)(ppplVar7 + 8) = 0;
    pplVar9 = (long **)0x0;
    if (pplVar8 != (long **)0x0) {
      do {
        func_0x00010b93a980();
        pplVar9 = extraout_x8_01;
      } while (extraout_w12_00 != 0);
    }
    ppplVar7[9] = (long **)&PTR_FUN_110d77890;
    ppplVar7[10] = pplVar9;
    ppplVar7[0xb] = param_7;
    *(undefined1 *)(ppplVar7 + 0xc) = 0;
    ppplVar7[0xd] = (long **)0x32aaaba7;
    pplVar8 = (long **)0x0;
    pplVar9 = (long **)0x0;
    ppplVar7[0xf] = (long **)0x0;
    ppplVar7[0xe] = (long **)0x0;
    ppplVar7[0x11] = (long **)0x0;
    ppplVar7[0x10] = (long **)0x0;
    ppplVar7[0x13] = (long **)0x0;
    ppplVar7[0x12] = (long **)0x0;
    ppplVar7[0x15] = (long **)0x0;
    ppplVar7[0x14] = (long **)0x0;
    func_0x00010b93ab14();
    ppplVar7[0x1c] = pplVar9;
    ppplVar7[0x1b] = pplVar8;
    ppplVar7[0x1e] = pplVar9;
    ppplVar7[0x1d] = pplVar8;
    FUN_10b939c44(auStack_190,ppplVar7 + 3,extraout_x9);
    func_0x00010b938dfc(ppplVar7 + 0x1c,auStack_190);
    FUN_10b930864(auStack_190);
    return ppplVar7;
  }
  return ppplVar7;
}



/* Entry: 10b938d14; end: 10b938e37;  */

undefined8 *
FUN_10b938d14(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long extraout_x8;
  long lVar1;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  undefined8 extraout_x9;
  int extraout_w12;
  int extraout_w12_00;
  undefined1 in_b0;
  undefined1 uVar3;
  undefined1 in_register_00005001;
  undefined1 uVar4;
  undefined1 in_register_00005002;
  undefined1 uVar5;
  undefined1 in_register_00005003;
  undefined1 uVar6;
  undefined1 in_register_00005004;
  undefined1 uVar7;
  undefined1 in_register_00005005;
  undefined1 uVar8;
  undefined1 in_register_00005006;
  undefined1 uVar9;
  undefined1 in_register_00005007;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auStack_30 [16];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d778c8;
  lVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b93a980();
      lVar1 = extraout_x8;
    } while (extraout_w12 != 0);
  }
  param_1[4] = *param_4;
  param_1[3] = lVar1;
  *param_4 = 0;
  param_1[5] = param_5;
  param_1[6] = CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,
                                                   CONCAT13(in_register_00005003,
                                                            CONCAT12(in_register_00005002,
                                                                     CONCAT11(in_register_00005001,
                                                                              in_b0)))))));
  param_1[7] = &PTR_DAT_110d778f8;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b93a980();
      uVar2 = extraout_x8_00;
    } while (extraout_w12_00 != 0);
  }
  param_1[9] = &PTR_FUN_110d77890;
  param_1[10] = uVar2;
  param_1[0xb] = param_5;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x32aaaba7;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  func_0x00010b93ab14();
  param_1[0x1c] =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  param_1[0x1b] =
       CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,CONCAT12(uVar5,
                                                  CONCAT11(uVar4,uVar3)))))));
  param_1[0x1e] =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  param_1[0x1d] =
       CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,CONCAT12(uVar5,
                                                  CONCAT11(uVar4,uVar3)))))));
  FUN_10b939c44(auStack_30,param_1 + 3,extraout_x9);
  func_0x00010b938dfc(param_1 + 0x1c,auStack_30);
  FUN_10b930864(auStack_30);
  return param_1;
}



/* Entry: 10b938e38; end: 10b938ee3;  */

undefined8 * FUN_10b938e38(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_DAT_110d778c8;
  func_0x000104bd4728(param_1 + 0x1e);
  FUN_10b930864(param_1 + 0x1c);
  lVar1 = param_1[0x19];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x16] + lVar3)) {
        FUN_10b939770(param_1[0x17] + lVar2);
        lVar1 = param_1[0x19];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[0x1b] = 0;
    func_0x00010b93ab14();
  }
  FUN_10b9a1f08(param_1 + 0xd);
  func_0x00010b939798(param_1 + 9);
  func_0x000104bd5214(param_1 + 4);
  func_0x0001080e6aa4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b938ee4; end: 10b938eef;  */

undefined8 * FUN_10b938ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77890;
  func_0x0001080e6aa4(param_1 + 1);
  return param_1;
}



/* Entry: 10b938ef0; end: 10b938f03;  */

void FUN_10b938ef0(void)

{
  FUN_10b938e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b938f04; end: 10b938f47;  */

void FUN_10b938f04(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x68);
  FUN_10b938f48(param_1 + 0xb0,param_2);
  FUN_10b938f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x68);
  return;
}



/* Entry: 10b938f48; end: 10b938f6f;  */

long FUN_10b938f48(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b939d40(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b938f70; end: 10b938fb3;  */

long * FUN_10b938f70(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b93a944();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x00010b93a2e4();
  }
  return param_1;
}



/* Entry: 10b938fb4; end: 10b938ff3;  */

void FUN_10b938fb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  __ZNSt3__15mutex4lockEv(param_2 + 0x68);
  FUN_10b938ff4(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x68);
  return;
}



/* Entry: 10b938ff4; end: 10b93907f;  */

void FUN_10b938ff4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  
  lVar1 = param_2 + 0xb0;
  func_0x00010b939050();
  if (*(long *)(param_2 + 0xb0) + *(long *)(param_2 + 200) == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(long *)(param_3 + 8) != 0) {
      do {
        func_0x00010b93a944();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10b939080; end: 10b939417;  */

void FUN_10b939080(undefined8 param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *plVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [40];
  long lStack_e0;
  undefined1 auStack_d8 [40];
  long lStack_b0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  
  func_0x00010b93ab08();
  func_0x00010b93a8f4();
  FUN_10b938fb4(&lStack_128);
  lVar3 = lStack_128;
  if (lStack_128 == 0) {
    func_0x000107c31084();
    func_0x00010b93aacc();
    func_0x00010b93a978(&puStack_120);
    func_0x00010b93aa08();
    func_0x00010b93aaa8();
    puStack_150 = (undefined1 *)0x0;
    func_0x00010b93a9e0(*param_3,&stack0xffffffffffffff90);
    FUN_10b92b010(&stack0xffffffffffffff90);
    func_0x000104bda960(puStack_150);
    func_0x000107c278f8(uStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_120);
  }
  else {
    puStack_120 = auStack_108;
    puVar8 = (ulong *)(lStack_128 + 0x28);
    lStack_110 = 8;
    puStack_118 = (undefined8 *)0x0;
    in_ZR = (*puVar8 & 1) == 0;
    puVar1 = puVar8;
    if (!(bool)in_ZR) {
      puVar1 = (ulong *)(*puVar8 + 7);
    }
    for (lVar10 = (long)*(int *)(lStack_128 + 0x30) << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
      func_0x00010b924270(*(undefined8 *)(*puVar1 + 0x20),&puStack_120);
      puVar1 = puVar1 + 1;
    }
    iVar4 = (int)&puStack_120;
    func_0x00010b9242ec(*(undefined8 *)(unaff_x20 + 0x30));
    if ((param_2 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      in_ZR = (*puVar8 & 1) == 0;
      if (!(bool)in_ZR) {
        puVar8 = (ulong *)(*puVar8 + (long)iVar4 * 8 + 7);
      }
      uVar9 = *puVar8;
    }
    func_0x000107732ee4(&puStack_120);
    if (uVar9 == 0) {
      if ((bRam00000001137fd198 & 1) == 0) goto LAB_10b9393c0;
      goto LAB_10b939208;
    }
    in_ZR = *(undefined ***)(uVar9 + 0x18) == (undefined **)0x0;
    ppuVar2 = &PTR_PTR_1133fadf8;
    if (!(bool)in_ZR) {
      ppuVar2 = *(undefined ***)(uVar9 + 0x18);
    }
    func_0x000107c31084();
    func_0x00010b93aa90();
    do {
      func_0x00010b93a944();
    } while (extraout_w11 != 0);
    func_0x00010b93aa9c();
    uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x00010b93a9cc(&UNK_10f7ce3b5);
    puStack_118 = puStack_148;
    puStack_120 = puStack_150;
    if (puStack_148 != (undefined8 *)0x0) {
      do {
        func_0x00010b93a904();
      } while (extraout_w10 != 0);
    }
    lStack_110 = *param_3;
    plVar6 = param_3 + 1;
    func_0x00010b93a9e0(*(undefined8 *)(*plVar6 + 0x10),auStack_108);
    lStack_e0 = 0;
    if (lStack_128 != 0) {
      do {
        func_0x00010b93a944();
        lStack_e0 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b9394dc(auStack_d8,ppuVar2);
    lStack_b0 = 0;
    if (*unaff_x21 != 0) {
      do {
        func_0x00010b93aa28();
        lStack_b0 = extraout_x8_01;
      } while (extraout_w11_01 != 0);
    }
    pcStack_a0 = FUN_10b93a4a4;
    ppuStack_98 = &PTR_FUN_110d77ab0;
    __Znwm(0x78);
    func_0x00010b93a9a8();
    (*extraout_x8_02)();
    param_3[9] = lStack_e0;
    lStack_e0 = 0;
    FUN_10b9394dc(param_3 + 10,auStack_d8);
    lVar10 = 0;
    if (lStack_b0 != 0) {
      do {
        func_0x00010b93aa28();
        lVar10 = extraout_x8_03;
      } while (extraout_w11_02 != 0);
    }
    param_3[0xf] = lVar10;
    plStack_90 = plVar6;
    FUN_10b9357e8(uVar7,&uStack_158,&uStack_138,unaff_x20 + 0x48,&stack0xffffffffffffff90,
                  &pcStack_a0);
    (*(code *)*ppuStack_98)(&ppuStack_98);
    FUN_10b9394e8(&puStack_120);
    func_0x000107c278f8(uStack_158);
    func_0x00010b93a47c(&puStack_150);
    if (lVar3 != 0) {
      func_0x00010b93a914();
    }
    func_0x000107c278f8(uStack_138);
    param_3 = plVar6;
  }
  while( true ) {
    func_0x00010b93a2e4(lStack_128);
    func_0x00010b93a8e0(extraout_x8);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10b9393c0:
    iVar4 = 0x137fd198;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x48;
      __Znwm();
      *puVar5 = &PTR_FUN_110d77b20;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = &UNK_10dd5b8b0;
      puVar5[8] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[4] = 0;
      puRam00000001137fd190 = puVar5;
      ___cxa_guard_release(0x1137fd198);
    }
LAB_10b939208:
    puVar5 = puRam00000001137fd190;
    func_0x00010b93a424();
    puStack_120 = (undefined1 *)0x1;
    puStack_118 = puVar5;
    func_0x00010b93a9e0(*param_3,&puStack_120);
    FUN_10b92b010(&puStack_120);
    FUN_10b92b058(0);
  }
  return;
}



/* Entry: 10b939418; end: 10b9394db;  */

void FUN_10b939418(long *param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  if (param_2 == 0) {
LAB_10b939474:
    *param_1 = param_2;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      lVar1 = *(long *)(param_2 + 0x10);
      if (lVar1 == 0) goto LAB_10b939474;
      do {
        func_0x00010b93a904();
      } while (extraout_w10_00 != 0);
      *param_1 = param_2;
      param_1[1] = lVar1;
    }
    else {
      func_0x000107c278f0(&lStack_40);
      if (lStack_40 == 0) {
        param_2 = 0;
        lStack_38 = 0;
      }
      else if (lStack_38 != 0) {
        do {
          func_0x00010b93a904();
        } while (extraout_w10 != 0);
      }
      func_0x000107c284e8(&lStack_40);
      *param_1 = param_2;
      param_1[1] = lStack_38;
      if (lStack_38 == 0) goto LAB_10b9394c4;
    }
    do {
      func_0x00010b93a904();
    } while (extraout_w10_01 != 0);
  }
LAB_10b9394c4:
  func_0x00010b93aa50();
  return;
}



/* Entry: 10b9394dc; end: 10b9394e7;  */

undefined8 * FUN_10b9394dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110d79120;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10bd2b19c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_2 + 0x10;
  func_0x000107c2809c(lVar1,0);
  param_1[2] = lVar1;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c(param_2,0);
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10b9394e8; end: 10b939527;  */

long FUN_10b9394e8(long param_1)

{
  func_0x000107c278f4(param_1 + 0x70);
  FUN_10b9520f8(param_1 + 0x48);
  FUN_10b93a310(param_1 + 0x40);
  func_0x00010b93aa84(param_1);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b939528; end: 10b939733;  */

/* WARNING: Possible PIC construction at 0x00010b9396ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9396f0) */
/* WARNING: Removing unreachable block (ram,0x00010b9396f8) */
/* WARNING: Removing unreachable block (ram,0x00010b9396fc) */

undefined8 * FUN_10b939528(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [40];
  code *pcStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  
  func_0x00010b93ab08();
  func_0x00010b93a8f4();
  FUN_10b938fb4(&lStack_d8);
  if (lStack_d8 == 0) {
    func_0x000107c31084();
    func_0x00010b93aacc();
    func_0x00010b93a978(&uStack_d0);
    func_0x00010b93aa08();
    func_0x00010b93aaa8();
    uStack_100 = 0;
    func_0x00010b93a9e0(*param_3,&stack0xffffffffffffffa0);
    FUN_10b93a728(&stack0xffffffffffffffa0);
    func_0x000104bda960(uStack_100);
    func_0x000107c278f8(uStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    puVar1 = (undefined8 *)0x0;
    func_0x00010b93a2e4();
    func_0x00010b93a8e0(extraout_x8);
    if ((bool)in_ZR) {
      return puVar1;
    }
    ___stack_chk_fail();
    func_0x00010b93aa84();
  }
  else {
    func_0x000107c31084();
    func_0x00010b93aa90();
    do {
      func_0x00010b93a944();
    } while (extraout_w11 != 0);
    func_0x00010b93aa9c();
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x00010b93a9cc(&UNK_10f7ce3c0);
    lStack_c8 = lStack_f8;
    uStack_d0 = uStack_100;
    if (lStack_f8 != 0) {
      do {
        func_0x00010b93a904();
      } while (extraout_w10 != 0);
    }
    uStack_c0 = *param_3;
    func_0x00010b93a9e0(*(undefined8 *)(param_3[1] + 0x10),auStack_b8);
    pcStack_90 = FUN_10b93a750;
    ppuStack_88 = &PTR_FUN_110d77ad0;
    __Znwm(0x40);
    func_0x00010b93a9a8();
    (*extraout_x8_00)();
    plStack_80 = param_3 + 1;
    FUN_10b9357e8(uVar2,&uStack_108,auStack_e8,unaff_x20 + 0x38,&stack0xffffffffffffffa0,&pcStack_90
                 );
    (*(code *)*ppuStack_88)(&ppuStack_88);
    FUN_10b939734(&uStack_d0);
    func_0x000107c278f8(uStack_108);
    puVar1 = &uStack_100;
  }
  if (puVar1[1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar1;
}



/* Entry: 10b939734; end: 10b939757;  */

long FUN_10b939734(long param_1)

{
  func_0x00010b93aa84();
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b939758; end: 10b93975b;  */

void FUN_10b939758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93975c; end: 10b93976f;  */

void FUN_10b93975c(void)

{
  func_0x00010b939798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b939770; end: 10b9397c3;  */

undefined8 FUN_10b939770(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b93a310(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b9397c4; end: 10b9397e3;  */

void FUN_10b9397c4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b9397e4(&uStack_11,param_1);
  return;
}



/* Entry: 10b9397e4; end: 10b93984f;  */

void FUN_10b9397e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010b93a8f4();
  uStack_28 = extraout_x8;
  FUN_10b93986c(auStack_40,1);
  FUN_10b9398c4(lStack_30,param_3);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_10b939850(param_1,lVar2 + 0x18);
  FUN_10b939988();
  func_0x00010b93a8e0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b939850;
    lStack_58 = extraout_x8_00[1];
    puStack_60 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x00010b93aa18();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_60);
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b939850; end: 10b93986b;  */

void FUN_10b939850(long *param_1,long param_2,long param_3)

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
        func_0x00010b93aa18();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b93986c; end: 10b939893;  */

long FUN_10b93986c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b939894();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b939894; end: 10b9398c3;  */

undefined8 * FUN_10b939894(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1c71c71c71c71c8) {
    puVar1 = (undefined8 *)(param_2 * 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77978;
  param_1[1] = 0;
  func_0x000105c3cef0(param_1 + 3);
  return param_1;
}



/* Entry: 10b9398c4; end: 10b9398f7;  */

undefined8 * FUN_10b9398c4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77978;
  param_1[1] = 0;
  func_0x000105c3cef0(param_1 + 3);
  return param_1;
}



/* Entry: 10b9398f8; end: 10b9398fb;  */

void FUN_10b9398f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9398fc; end: 10b93990f;  */

void FUN_10b9398fc(void)

{
  func_0x00010b939918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b939910; end: 10b939927;  */

void FUN_10b939910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b93a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b939928; end: 10b939987;  */

void FUN_10b939928(long param_1,long param_2,undefined8 param_3)

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
        func_0x00010b93aa18();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b939988; end: 10b93999b;  */

void FUN_10b939988(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93999c; end: 10b9399af;  */

void FUN_10b93999c(void)

{
  FUN_10b939a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


