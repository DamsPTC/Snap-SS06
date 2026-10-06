/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab9ac6c; end: 10ab9ac8b;  */

void FUN_10ab9ac6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab9ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
  return;
}



/* Entry: 10ab9ac8c; end: 10ab9accf;  */

/* WARNING: Possible PIC construction at 0x00010ab9ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ab9acb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ab9accc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ab9acb8) */
/* WARNING: Removing unreachable block (ram,0x00010ab9acd0) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ad3c) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ad40) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ad48) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ad50) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ad54) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ada0) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ada4) */
/* WARNING: Removing unreachable block (ram,0x00010ab9ada8) */

void FUN_10ab9ac8c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [6];
  undefined8 auStack_30 [4];
  
  uVar2 = 0x10ab9ac98;
  puVar1 = &stack0xfffffffffffffff0;
  do {
    *(undefined1 **)(puVar1 + -0x10) = puVar1;
    *(undefined8 *)(puVar1 + -8) = uVar2;
    FUN_10a0ee06c(&UNK_10f5822c8);
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x18) = 0x10ab9acac;
    uVar2 = 0x10ab9acb8;
    puVar1 = puVar1 + -0x20;
  } while( true );
}



/* Entry: 10ab9acd0; end: 10ab9ae1f;  */

undefined8 * FUN_10ab9acd0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 uVar10;
  ulong uStack_40;
  undefined4 uStack_38;
  
  puVar9 = &uStack_40;
  plVar7 = (long *)*param_2;
  (**(code **)(*plVar7 + 0x20))();
  uVar10 = SUB84(plVar7,0);
  FUN_10ab99e60(param_1);
  *param_1 = &PTR_FUN_110c4f858;
  param_1[7] = &PTR_DAT_110c4f948;
  param_1[0x14] = &PTR_FUN_110c4f968;
  plVar7 = (long *)*param_2;
  lVar2 = param_2[1];
  param_1[0x15] = plVar7;
  param_1[0x16] = lVar2;
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar7 = (long *)param_1[0x15];
  }
  (**(code **)(*plVar7 + 0x48))();
  *(int *)((long)param_1 + 0x5c) = (int)plVar7;
  param_1[0xc] = *(undefined8 *)(param_1[0x15] + 0x18);
  uVar3 = *(undefined4 *)(param_1[0x15] + 0x20);
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((long)param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  plVar7 = (long *)*param_2;
  (**(code **)(*plVar7 + 0x50))();
  *(int *)((long)param_1 + 0x7c) = (int)plVar7;
  uVar4 = *(uint *)(param_1[0x15] + 0x34);
  uVar1 = 4;
  if (uVar4 != 0x27 && uVar4 != 3) {
    uVar1 = uVar4;
  }
  uVar8 = (ulong)uVar1;
  *(uint *)(param_1 + 0x12) = uVar1;
  FUN_10ab99cd4();
  uStack_40 = uVar8;
  uStack_38 = uVar10;
  FUN_10a301d18();
  *(ulong **)((long)param_1 + 0x94) = puVar9;
  *(undefined4 *)((long)param_1 + 0x9c) = uVar10;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)((long)param_1 + 0x84) = *(undefined1 *)(param_1[0x15] + 0x54);
  return param_1;
}



/* Entry: 10ab9ae20; end: 10ab9afef;  */

undefined8 * FUN_10ab9ae20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4f858;
  param_1[7] = &PTR_DAT_110c4f948;
  param_1[0x14] = &PTR_FUN_110c4f968;
  func_0x00010a09db0c(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c4f540;
  param_1[7] = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ab9aff0; end: 10ab9b223;  */

void FUN_10ab9aff0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long alStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  int iStack_a4;
  undefined *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_78;
  undefined1 uStack_61;
  
  ppuVar7 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar11 = *ppuVar7;
  if (((puVar11 != (undefined *)0x0) && (puVar11[0xc0] == '\x01')) &&
     (*(long *)(puVar11 + 0x80) != 0)) {
    FUN_10a08dbac(puVar11 + 0x18);
  }
  lVar12 = param_1[0x15];
  uVar1 = *(uint *)(lVar12 + 0x18);
  uVar2 = *(uint *)(lVar12 + 0x1c);
  iVar3 = *(int *)(lVar12 + 0x4c);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  lVar13 = *(long *)param_1[8];
  plVar9 = param_1;
  iStack_a4 = iVar3;
  (**(code **)(*param_1 + 0x28))(param_1);
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x30))(param_1);
  lVar13 = *(long *)(lVar13 + 0x10);
  puStack_a0 = &UNK_10f635282;
  plStack_98 = (long *)0x2b;
  if (lVar13 != 0) {
    func_0x00010ab9ca70(&puStack_a0,lVar12,0);
    uVar10 = 0x8ca9;
    if (uStack_78 < 2) {
      uVar10 = 0x8d40;
    }
    FUN_10ab9cbe8(alStack_e8,lVar13 + 0x50,uVar10,&puStack_a0,0,
                  (ulong)plVar9 & 0xffffffff | (long)plVar8 << 0x20,0);
    FUN_10ab9b224(&uStack_c8,alStack_e8);
    FUN_10ab9ce18(alStack_e8);
    lVar12 = *param_2;
    if (((lVar12 == 0) || ((long)*(int *)(lVar12 + 0x10) != (ulong)uVar1)) ||
       (((long)*(int *)(lVar12 + 0x14) != (ulong)uVar2 || (*(int *)(lVar12 + 0x24) != iVar3)))) {
      alStack_e8[0] = param_1[0x15];
      FUN_10a1959b0(&puStack_a0,&uStack_61,alStack_e8,&iStack_a4);
      FUN_10a16b1ec(param_2,&puStack_a0);
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar8 = plStack_98 + 1;
        do {
          lVar12 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
      plVar9 = (long *)param_1[0x15];
      (**(code **)(*plVar9 + 0x10))
                (plVar9,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x18),0,
                 *(undefined4 *)((long)plVar9 + 0x1c));
    }
    plStack_98 = (long *)0x0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_10ab9b224(&uStack_c8,&puStack_a0);
    FUN_10ab9ce18(&puStack_a0);
    FUN_10ab9ce18(&uStack_c8);
    return;
  }
  FUN_10a0edfc4(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab9b208);
  (*pcVar6)();
}



/* Entry: 10ab9b224; end: 10ab9b2d3;  */

undefined8 * FUN_10ab9b224(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar7 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar7;
  puVar6 = param_1 + 1;
  plStack_38 = (long *)param_1[2];
  uStack_40 = *puVar6;
  *puVar6 = 0;
  param_1[2] = 0;
  func_0x00010a09094c(puVar6,param_2 + 1);
  func_0x00010a09094c(param_2 + 1,&uStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_2 + 3) = uVar2;
  return param_1;
}



/* Entry: 10ab9b2d4; end: 10ab9b2db;  */

void FUN_10ab9b2d4(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  int iStack_a4;
  undefined *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_78;
  undefined1 uStack_61;
  
  plVar9 = (long *)(param_1 - 0xa0);
  ppuVar7 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar11 = *ppuVar7;
  if (((puVar11 != (undefined *)0x0) && (puVar11[0xc0] == '\x01')) &&
     (*(long *)(puVar11 + 0x80) != 0)) {
    FUN_10a08dbac(puVar11 + 0x18);
  }
  lVar12 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(lVar12 + 0x18);
  uVar2 = *(uint *)(lVar12 + 0x1c);
  iVar3 = *(int *)(lVar12 + 0x4c);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  lVar13 = **(long **)(param_1 + -0x60);
  plVar8 = plVar9;
  iStack_a4 = iVar3;
  (**(code **)(*plVar9 + 0x28))(plVar9);
  (**(code **)(*plVar9 + 0x30))(plVar9);
  lVar13 = *(long *)(lVar13 + 0x10);
  puStack_a0 = &UNK_10f635282;
  plStack_98 = (long *)0x2b;
  if (lVar13 != 0) {
    func_0x00010ab9ca70(&puStack_a0,lVar12,0);
    uVar10 = 0x8ca9;
    if (uStack_78 < 2) {
      uVar10 = 0x8d40;
    }
    FUN_10ab9cbe8(auStack_e8,lVar13 + 0x50,uVar10,&puStack_a0,0,
                  (ulong)plVar8 & 0xffffffff | (long)plVar9 << 0x20,0);
    FUN_10ab9b224(&uStack_c8,auStack_e8);
    FUN_10ab9ce18(auStack_e8);
    lVar12 = *param_2;
    if (((lVar12 == 0) || ((long)*(int *)(lVar12 + 0x10) != (ulong)uVar1)) ||
       (((long)*(int *)(lVar12 + 0x14) != (ulong)uVar2 || (*(int *)(lVar12 + 0x24) != iVar3)))) {
      auStack_e8[0] = *(undefined8 *)(param_1 + 8);
      FUN_10a1959b0(&puStack_a0,&uStack_61,auStack_e8,&iStack_a4);
      FUN_10a16b1ec(param_2,&puStack_a0);
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar8 = plStack_98 + 1;
        do {
          lVar12 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x10))
                (plVar9,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x18),0,
                 *(undefined4 *)((long)plVar9 + 0x1c));
    }
    plStack_98 = (long *)0x0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_10ab9b224(&uStack_c8,&puStack_a0);
    FUN_10ab9ce18(&puStack_a0);
    FUN_10ab9ce18(&uStack_c8);
    return;
  }
  FUN_10a0edfc4(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab9b208);
  (*pcVar6)();
}



/* Entry: 10ab9b2dc; end: 10ab9b55f;  */

/* WARNING: Removing unreachable block (ram,0x00010a30390c) */

void FUN_10ab9b2dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  uVar10 = param_2;
  uVar12 = param_3;
  if ((char)param_1[3] == '\x01') {
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar15 = *ppuVar4;
    if (((puVar15 != (undefined *)0x0) && (puVar15[0xc0] == '\x01')) &&
       (*(long *)(puVar15 + 0x80) != 0)) {
      FUN_10a08dbac(puVar15 + 0x18);
    }
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x50))();
  if (((int)plVar5 == 4) || (plVar5 = param_1, (**(code **)(*param_1 + 0x50))(), (int)plVar5 == 1))
  {
    if ((int)param_3 == 0) {
      uVar6 = (ulong)*(uint *)(param_1[0x15] + 0x34);
      FUN_10a3158cc();
      uVar14 = 3;
      if (((uint)uVar6 & 0xfffffffb) != 0xb) {
        uVar14 = 1;
      }
      uVar1 = *(undefined4 *)((long)param_1 + 0x5c);
      uVar2 = *(undefined4 *)((long)param_1 + 0x7c);
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x28))(param_1);
      (**(code **)(*param_1 + 0x30))(param_1);
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = param_2;
      FUN_10ad4b248(uVar1,uVar2,1,plVar5,param_1,uVar6,uVar14,uVar14);
      return;
    }
    FUN_10a00946c(&UNK_10f696343);
  }
  plVar5 = (long *)&UNK_10f696317;
  FUN_10a00946c();
  uStack_78 = 0x10ab9b424;
  uVar11 = uVar10;
  uVar13 = uVar12;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((char)plVar5[3] == '\x01') {
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar15 = *ppuVar4;
    if (((puVar15 != (undefined *)0x0) && (puVar15[0xc0] == '\x01')) &&
       (*(long *)(puVar15 + 0x80) != 0)) {
      FUN_10a08dbac(puVar15 + 0x18);
    }
  }
  plVar7 = plVar5;
  (**(code **)(*plVar5 + 0x50))();
  if (((int)plVar7 != 4) && (plVar7 = plVar5, (**(code **)(*plVar5 + 0x50))(), (int)plVar7 != 1)) {
LAB_10ab9b554:
    puVar15 = &UNK_10f69636b;
    FUN_10a00946c();
    ppuVar4 = &puStack_100;
    pcStack_e8 = FUN_10ab9b560;
    puStack_100 = &UNK_10f696393;
    uStack_f8 = 0x3b;
    ppuStack_f0 = &puStack_80;
    if (*(long **)(puVar15 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab9b594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(puVar15 + 0xa8) + 0x38))();
      return;
    }
    FUN_10a0edfc4();
    ppuVar9 = &puStack_120;
    uStack_108 = 0x10ab9b5a0;
    puStack_120 = &UNK_10f6963cf;
    uStack_118 = 0x32;
    pppuStack_110 = &ppuStack_f0;
    if (*(long **)((long)ppuVar4 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab9b5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)((long)ppuVar4 + 0xa8) + 0x30))();
      return;
    }
    FUN_10a0edfc4();
    FUN_10a303694(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glTexParameteri_11034b7f8)(*(undefined4 *)((long)ppuVar9 + 0x7c),uVar11,uVar13);
    return;
  }
  if ((int)uStack_70 != 0) {
    FUN_10a00946c(&UNK_10f696343);
    goto LAB_10ab9b554;
  }
  uVar6 = (ulong)*(uint *)(plVar5[0x15] + 0x34);
  FUN_10a3158cc();
  uVar14 = 3;
  if (((uint)uVar6 & 0xfffffffb) != 0xb) {
    uVar14 = 1;
  }
  uStack_d4 = (undefined4)uVar12;
  uStack_d0 = 0;
  uStack_d8 = (undefined4)uVar10;
  uStack_e0 = param_8;
  FUN_10ad4b248(*(undefined4 *)((long)plVar5 + 0x5c),*(undefined4 *)((long)plVar5 + 0x7c),1,param_5,
                param_6,uVar6,uVar14,uVar14);
  lVar8 = 1;
  FUN_10a303694();
  iVar3 = *(int *)((long)plVar5 + 0x7c);
  if ((*(char *)(lVar8 + 0x270) != '\x01') || (*(int *)(lVar8 + 0xb0) != 0)) {
    _glActiveTexture(0x84c0);
    *(undefined4 *)(lVar8 + 0xb0) = 0;
    if (*(char *)(lVar8 + 0x270) != '\x01') {
      _glBindTexture(iVar3,0);
      goto LAB_10a3038e4;
    }
  }
  if ((*(int *)(lVar8 + 0x10c) == 0) && (*(int *)(lVar8 + 0x14c) == iVar3)) {
    return;
  }
  _glBindTexture(iVar3,0);
LAB_10a3038e4:
  *(undefined4 *)(lVar8 + 0x10c) = 0;
  *(int *)(lVar8 + 0x14c) = iVar3;
  *(int *)(lVar8 + 0x27c) = *(int *)(lVar8 + 0x27c) + 1;
  return;
}



/* Entry: 10ab9b560; end: 10ab9b5df;  */

void FUN_10ab9b560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  puStack_20 = &UNK_10f696393;
  uStack_18 = 0x3b;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab9b594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))();
    return;
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_40;
  uStack_28 = 0x10ab9b5a0;
  puStack_40 = &UNK_10f6963cf;
  uStack_38 = 0x32;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long **)((long)ppuVar1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab9b5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)ppuVar1 + 0xa8) + 0x30))();
    return;
  }
  FUN_10a0edfc4();
  FUN_10a303694(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glTexParameteri_11034b7f8)(*(undefined4 *)((long)ppuVar2 + 0x7c),param_2,param_3);
  return;
}



/* Entry: 10ab9b5e0; end: 10ab9b65f;  */

void FUN_10ab9b5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10a303694(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glTexParameteri_11034b7f8)(*(undefined4 *)(param_1 + 0x7c),param_2,param_3);
  return;
}



/* Entry: 10ab9b660; end: 10ab9b76b;  */

undefined8 * FUN_10ab9b660(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  long *plVar1;
  long **pplVar2;
  undefined4 uVar3;
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar3 = SUB84(param_2,0);
  pplVar2 = &plStack_40;
  FUN_10ab9a9e4();
  *param_1 = &PTR_DAT_110c4f990;
  param_1[7] = &PTR_DAT_110c4fa78;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_2 != (long *)0x0) {
    *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x28))();
    *(int *)(param_1 + 0xc) = (int)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x30))();
    *(int *)((long)param_1 + 100) = (int)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x48))();
    *(int *)(param_1 + 0xe) = (int)plVar1;
    *(char *)(param_1 + 0xf) = (char)param_2[0xf];
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))();
    *(int *)((long)param_1 + 0x6c) = (int)plVar1;
    *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)((long)param_2 + 0x7c);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x50))();
    *(int *)(param_1 + 0x12) = (int)plVar1;
    FUN_10ab99cd4();
    plStack_40 = plVar1;
    uStack_38 = uVar3;
    FUN_10a301d18();
    *(long ***)((long)param_1 + 0x94) = pplVar2;
    *(undefined4 *)((long)param_1 + 0x9c) = uVar3;
    (**(code **)(*param_2 + 0x68))();
    *(int *)(param_1 + 0x10) = (int)param_2;
    *(undefined1 *)((long)param_1 + 0x84) = param_3;
  }
  return param_1;
}



/* Entry: 10ab9b76c; end: 10ab9b7cf;  */

undefined8 * FUN_10ab9b76c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10ab9b7d0; end: 10ab9b817;  */

void FUN_10ab9b7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab9b7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 200))();
  return;
}



/* Entry: 10ab9b818; end: 10ab9b8f7;  */

void FUN_10ab9b818(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  long *plStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar5 = *param_2;
  if ((lVar5 == 0) ||
     (uStack_22 = param_3, ___dynamic_cast(lVar5,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0),
     lVar5 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plStack_30 = (long *)param_2[1];
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_38 = lVar5;
    FUN_10abd9240(&uStack_50,&uStack_21,&lStack_38,&uStack_22);
    plVar1 = plStack_30;
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ab9b8f8; end: 10ab9b917;  */

void FUN_10ab9b8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab9b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
  return;
}



/* Entry: 10ab9b918; end: 10ab9bc8b;  */

long * FUN_10ab9b918(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  byte bVar13;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  undefined8 uStack_60;
  
  plVar4 = param_1;
  piVar9 = param_2;
  FUN_10ab9a9e4();
  uVar8 = SUB84(piVar9,0);
  *plVar4 = (long)&PTR_FUN_110c4fa98;
  plVar4[7] = (long)&PTR_DAT_110c4fb80;
  plVar4[0x15] = 0x7fffffff7fffffff;
  plVar4[0x14] = 0x7fffffff7fffffff;
  *(undefined4 *)(plVar4 + 0x16) = 0x7fffffff;
  *(undefined8 *)((long)plVar4 + 0xbc) = 0;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0;
  *(undefined8 *)((long)plVar4 + 0xc4) = 0x7fffffff7fffffff;
  *(undefined4 *)((long)plVar4 + 0xcc) = 0x7fffffff;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  puVar5 = (undefined *)(ulong)(uint)param_2[4];
  *(int *)(param_1 + 0x12) = param_2[4];
  FUN_10ab99cd4();
  uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
  ppuVar6 = &puStack_68;
  puStack_68 = puVar5;
  FUN_10a301d18();
  *(undefined ***)((long)param_1 + 0x94) = ppuVar6;
  *(undefined4 *)((long)param_1 + 0x9c) = uVar8;
  iVar11 = param_2[1];
  *(int *)(param_1 + 0xc) = iVar11;
  iVar1 = param_2[2];
  *(int *)((long)param_1 + 100) = iVar1;
  *(char *)((long)param_1 + 0x84) = (char)param_2[10];
  lVar12 = param_1[8];
  puStack_68 = &DAT_10f3bd36b;
  uStack_60 = 8;
  FUN_10a303a58(lVar12,iVar11,iVar1,(int)param_1[0xd],&puStack_68);
  iVar11 = *param_2;
  puStack_68 = &UNK_10f696402;
  uStack_60 = 0x1a;
  if (iVar11 == 4) {
    FUN_10a0edfc4(&puStack_68);
    goto LAB_10ab9bc04;
  }
  bVar13 = 0;
  if (iVar11 < 2) {
    if (iVar11 == 0) {
      if (param_2[3] == 1) {
        *(undefined4 *)(param_1 + 0xd) = 1;
        *(undefined4 *)(param_1 + 0xe) = 1;
        uVar8 = 0xde1;
LAB_10ab9ba80:
        bVar13 = 1;
        *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
        goto LAB_10ab9baa8;
      }
      puVar5 = &UNK_10f69641d;
    }
    else {
      if (iVar11 != 1) goto LAB_10ab9baa8;
      iVar11 = param_2[3];
      if (iVar11 != 0) {
        *(undefined4 *)(param_1 + 0xd) = 1;
        *(int *)(param_1 + 0xe) = iVar11;
        uVar8 = 0x8c1a;
        goto LAB_10ab9baa0;
      }
      puVar5 = &UNK_10f696443;
    }
  }
  else {
    if (iVar11 == 2) {
      if (param_2[3] == 0) {
        puVar5 = &UNK_10f69646e;
        goto LAB_10ab9bc00;
      }
      *(int *)(param_1 + 0xd) = param_2[3];
      *(undefined4 *)(param_1 + 0xe) = 1;
      uVar8 = 0x806f;
LAB_10ab9baa0:
      *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
      bVar13 = *(byte *)(lVar12 + 0x221);
    }
    else if (iVar11 == 3) {
      if (param_2[3] != 1) {
        __ZNSt3__19to_stringEj(auStack_98);
        FUN_109feb280(auStack_80,&UNK_10f696496,auStack_98);
        FUN_10a012db0(&puStack_68,auStack_80,&UNK_10f6964ad);
        FUN_10a0029c0(&puStack_68);
        goto LAB_10ab9bc04;
      }
      *(undefined4 *)(param_1 + 0xd) = 1;
      *(undefined4 *)(param_1 + 0xe) = 1;
      uVar8 = 0x8513;
      goto LAB_10ab9ba80;
    }
LAB_10ab9baa8:
    if (param_2[8] == 3) {
      iVar11 = 3;
    }
    else {
      lVar2 = param_1[0xc];
      uVar8 = *(undefined4 *)((long)param_1 + 100);
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x50))(param_1);
      lVar7 = lVar12;
      FUN_10a30449c(lVar12,(int)lVar2,uVar8,plVar4,0);
      iVar11 = param_2[8];
      if ((int)lVar7 == 0) {
        iVar11 = 1;
      }
    }
    *(int *)(param_1 + 0x10) = iVar11;
    if ((bVar13 & 1) == 0) {
      puVar5 = &UNK_10f6964c4;
    }
    else {
      uVar10 = param_2[6];
      if ((((uVar10 & 1) == 0) || (iVar11 == 1)) || (*(char *)(lVar12 + 0x221) == '\x01')) {
        plVar4 = param_1;
        FUN_10a094cec();
        uVar8 = SUB84(plVar4,0);
        uVar10 = param_2[6];
      }
      else {
        uVar8 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x6c) = uVar8;
      if ((uVar10 >> 2 & 1) == 0) {
        FUN_10ab9bc8c(param_1,lVar12);
        FUN_10a303840(lVar12,*(undefined4 *)((long)param_1 + 0x7c),0,0);
        return param_1;
      }
      if (*(long *)(param_2 + 0xc) == 0) {
        return param_1;
      }
      puVar5 = &UNK_10f63fba2;
    }
  }
LAB_10ab9bc00:
  FUN_10a00946c(puVar5);
LAB_10ab9bc04:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab9bc08);
  (*pcVar3)();
}



/* Entry: 10ab9bc8c; end: 10ab9bfab;  */

long * FUN_10ab9bc8c(long *param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    return param_1;
  }
  FUN_10ab8f598(param_1,param_2,*(undefined4 *)((long)param_1 + 0x94));
  iVar6 = *(int *)((long)param_1 + 0x5c);
  puStack_60 = &UNK_10f6960bb;
  uStack_58 = 0x22;
  if (iVar6 == 0) {
    FUN_10a0edfc4(&puStack_60);
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x7c);
    plVar9 = param_1;
    (**(code **)(*param_1 + 0x50))();
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plVar8 = param_1;
    (**(code **)(*param_1 + 0x40))();
    FUN_10a303840(param_2,iVar2,iVar6,0);
    ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar9 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar9) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
      lVar14 = 0;
      bVar3 = *(byte *)(ppuVar1 + 3);
      uVar4 = 0;
      if (bVar3 != 0) {
        uVar4 = (((int)plVar7 + (uint)bVar3) - 1) / (uint)bVar3;
      }
      uVar4 = uVar4 * *(byte *)((long)ppuVar1 + 0x1a);
      do {
        uVar12 = *(uint *)(&UNK_10e4ff290 + lVar14);
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar4 / uVar12;
        }
        if (uVar4 - uVar5 * uVar12 == 0) goto LAB_10ab9bdac;
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0xc);
      uVar12 = 1;
LAB_10ab9bdac:
      _glPixelStorei(0xcf5,uVar12);
      _glTexParameteri(iVar2,0x2801,0x2600);
      _glTexParameteri(iVar2,0x2800,0x2600);
      _glTexParameteri(iVar2,0x2802,0x812f);
      _glTexParameteri(iVar2,0x2803,0x812f);
      if (iVar2 == 0x806f) {
        _glTexParameteri(0x806f,0x8072,0x812f);
      }
      if (2999 < *(int *)(param_2 + 0x1f0)) {
        _glTexParameteri(iVar2,0x813c,0);
        _glTexParameteri(iVar2,0x813d,(uint)plVar8 - 1);
      }
      if ((((uint)plVar8 < 2) && (param_3 == 0)) && ((*(byte *)(param_2 + 0x219) & 1) != 0)) {
        iVar6 = *(int *)((long)param_1 + 0x94);
        func_0x00010a301e1c();
        if (iVar6 != 0) {
          plVar9 = param_1;
          (**(code **)(*param_1 + 0x28))(param_1);
          plVar7 = param_1;
          (**(code **)(*param_1 + 0x30))(param_1);
          plVar8 = param_1;
          (**(code **)(*param_1 + 0x38))(param_1);
          plVar10 = param_1;
          (**(code **)(*param_1 + 0x48))(param_1);
          iVar6 = *(int *)((long)param_1 + 0x7c);
          plVar11 = param_1;
          (**(code **)(*param_1 + 0x40))(param_1);
          if (iVar6 < 0x8513) {
            if (iVar6 == 0xde1) {
              uVar13 = 0xde1;
LAB_10ab9bf7c:
              FUN_10a303c60(param_2,uVar13,plVar11,*(undefined4 *)((long)param_1 + 0x94),plVar9,
                            plVar7);
              goto LAB_10ab9be54;
            }
            if (iVar6 != 0x806f) goto LAB_10ab9bfa0;
            uVar13 = 0x806f;
            plVar10 = plVar8;
          }
          else {
            if (iVar6 == 0x8513) {
              uVar13 = 0x8513;
              goto LAB_10ab9bf7c;
            }
            if (iVar6 != 0x8c1a) goto LAB_10ab9bfa0;
            uVar13 = 0x8c1a;
          }
          FUN_10a3041e0(param_2,uVar13,plVar11,*(undefined4 *)((long)param_1 + 0x94),plVar9,plVar7,
                        plVar10);
          goto LAB_10ab9be54;
        }
      }
      FUN_10ab99f24(param_2,param_1,param_3);
LAB_10ab9be54:
      plVar9 = (long *)0xcf5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glPixelStorei_11034b738)(0xcf5,1);
      return plVar9;
    }
  }
  func_0x000109243bf8(&UNK_10f62e152);
LAB_10ab9bfa0:
  plVar9 = (long *)&UNK_10f6960de;
  FUN_10a0ee06c();
  *plVar9 = (long)&PTR_FUN_110c4fa98;
  plVar9[7] = (long)&PTR_DAT_110c4fb80;
  if (*(int *)((long)plVar9 + 0x5c) != 0) {
    FUN_10a315c68(plVar9 + 0x1a);
    lVar14 = 0;
    FUN_10a303694();
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x270) == '\x01')) {
      piVar15 = (int *)(lVar14 + 0x10c);
      lVar14 = 0x10;
      do {
        if (*(int *)((long)plVar9 + 0x5c) == *piVar15) {
          *piVar15 = -1;
          piVar15[0x10] = 0;
        }
        piVar15 = piVar15 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  FUN_10a09d22c(plVar9 + 0x1a);
  *plVar9 = (long)&PTR_DAT_110c4f540;
  plVar9[7] = (long)&PTR_DAT_110c50768;
  return plVar9;
}



/* Entry: 10ab9bfac; end: 10ab9c05b;  */

undefined8 * FUN_10ab9bfac(undefined8 *param_1)

{
  long lVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_110c4fa98;
  param_1[7] = &PTR_DAT_110c4fb80;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    FUN_10a315c68(param_1 + 0x1a);
    lVar1 = 0;
    FUN_10a303694();
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x270) == '\x01')) {
      piVar2 = (int *)(lVar1 + 0x10c);
      lVar1 = 0x10;
      do {
        if (*(int *)((long)param_1 + 0x5c) == *piVar2) {
          *piVar2 = -1;
          piVar2[0x10] = 0;
        }
        piVar2 = piVar2 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
  }
  FUN_10a09d22c(param_1 + 0x1a);
  *param_1 = &PTR_DAT_110c4f540;
  param_1[7] = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ab9c05c; end: 10ab9c067;  */

undefined8 * FUN_10ab9c05c(undefined8 *param_1)

{
  long lVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_110c4fa98;
  param_1[7] = &PTR_DAT_110c4fb80;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    FUN_10a315c68(param_1 + 0x1a);
    lVar1 = 0;
    FUN_10a303694();
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x270) == '\x01')) {
      piVar2 = (int *)(lVar1 + 0x10c);
      lVar1 = 0x10;
      do {
        if (*(int *)((long)param_1 + 0x5c) == *piVar2) {
          *piVar2 = -1;
          piVar2[0x10] = 0;
        }
        piVar2 = piVar2 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
  }
  FUN_10a09d22c(param_1 + 0x1a);
  *param_1 = &PTR_DAT_110c4f540;
  param_1[7] = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ab9c068; end: 10ab9c177;  */

void FUN_10ab9c068(void)

{
  FUN_10ab9bfac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab9c178; end: 10ab9c4db;  */

/* WARNING: Removing unreachable block (ram,0x00010a30390c) */

void FUN_10ab9c178(long *param_1,long param_2,int param_3,int param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,long param_11,uint param_12,undefined4 param_13)

{
  undefined **ppuVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar10 = (ulong)param_12;
  FUN_10ab9bc8c(param_1,param_2,0);
  FUN_10a303840(param_2,*(undefined4 *)((long)param_1 + 0x7c),*(undefined4 *)((long)param_1 + 0x5c),
                0);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x50))();
  ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar4 & 0xffffffff) * 4;
  if (0x56 < (uint)plVar4) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if (*(byte *)((long)ppuVar1 + 0x1a) == 0) {
    func_0x000109243bf8(&UNK_10f62e152);
  }
  else {
    lVar6 = 0;
    bVar2 = *(byte *)(ppuVar1 + 3);
    iVar8 = (int)param_6;
    uVar9 = 0;
    if (bVar2 != 0) {
      uVar9 = ((iVar8 + (uint)bVar2) - 1) / (uint)bVar2;
    }
    uVar9 = uVar9 * *(byte *)((long)ppuVar1 + 0x1a);
    do {
      uVar5 = *(uint *)(&UNK_10e4ff290 + lVar6);
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar9 / uVar5;
      }
      if (uVar9 - uVar3 * uVar5 == 0) goto LAB_10ab9c258;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xc);
    uVar5 = 1;
LAB_10ab9c258:
    _glPixelStorei(0xcf5,uVar5);
    if (param_12 == 0) {
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x9c);
    }
    else {
      FUN_10a316e18(uVar10);
    }
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x50))();
    uVar9 = (uint)param_5;
    if (((int)plVar4 != 0x25) || (*(int *)(param_2 + 0x1f0) != 2000)) {
      iVar7 = *(int *)((long)param_1 + 0x7c);
      if (iVar7 < 0x8513) {
        if (iVar7 == 0xde1) {
          if (uVar9 != 0) goto LAB_10ab9c4cc;
          puStack_70 = &UNK_10f6964ef;
          uStack_68 = 0x15;
          if (1 < *(uint *)(param_1 + 0xd)) goto LAB_10ab9c4b8;
          _glTexSubImage2D(0xde1,param_13,param_3,param_4,param_6,param_7,param_9,uVar10,param_11);
        }
        else {
          iVar8 = 0x806f;
LAB_10ab9c334:
          if (iVar7 != iVar8) goto LAB_10ab9c4c0;
          puStack_70 = &UNK_10f696505;
          uStack_68 = 0x2f;
          if ((*(byte *)(param_2 + 0x221) & 1) == 0) goto LAB_10ab9c4b8;
          _glTexSubImage3D(iVar7,param_13,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           *(undefined4 *)((long)param_1 + 0x9c),param_11);
        }
      }
      else {
        if (iVar7 != 0x8513) {
          iVar8 = 0x8c1a;
          goto LAB_10ab9c334;
        }
        plVar4 = param_1;
        (**(code **)(*param_1 + 0x50))();
        uVar5 = (uint)param_8 + uVar9;
        if (uVar9 < uVar5) {
          ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar4 & 0xffffffff) * 4;
          if (0x56 < (uint)plVar4) {
            ppuVar1 = &PTR_DAT_110ae4700;
          }
          bVar2 = *(byte *)((long)ppuVar1 + 0x1b);
          iVar7 = 0;
          if (uVar9 < 7) {
            iVar7 = 6 - uVar9;
          }
          do {
            puStack_70 = &UNK_10f696535;
            uStack_68 = 0x1f;
            if (iVar7 == 0) goto LAB_10ab9c4b8;
            _glTexSubImage2D((int)param_5 + 0x8515,param_13,param_3,param_4,param_6,param_7,param_9,
                             *(undefined4 *)((long)param_1 + 0x9c),param_11);
            param_11 = param_11 +
                       (ulong)(((int)param_7 - param_4) * (iVar8 - param_3) * (uint)bVar2);
            uVar9 = (int)param_5 + 1;
            param_5 = (ulong)uVar9;
            iVar7 = iVar7 + -1;
          } while (uVar9 != uVar5);
        }
      }
code_r0x00010a303840:
      _glPixelStorei(0xcf5,1);
      iVar8 = *(int *)((long)param_1 + 0x7c);
      if ((*(char *)(param_2 + 0x270) != '\x01') || (*(int *)(param_2 + 0xb0) != 0)) {
        _glActiveTexture(0x84c0);
        *(undefined4 *)(param_2 + 0xb0) = 0;
        if (*(char *)(param_2 + 0x270) != '\x01') {
          _glBindTexture(iVar8,0);
          goto LAB_10a3038e4;
        }
      }
      if ((*(int *)(param_2 + 0x10c) == 0) && (*(int *)(param_2 + 0x14c) == iVar8)) {
        return;
      }
      _glBindTexture(iVar8,0);
LAB_10a3038e4:
      *(undefined4 *)(param_2 + 0x10c) = 0;
      *(int *)(param_2 + 0x14c) = iVar8;
      *(int *)(param_2 + 0x27c) = *(int *)(param_2 + 0x27c) + 1;
      return;
    }
    if ((param_4 == 0 && param_3 == 0) && ((int)param_1[0xc] == iVar8)) {
      puStack_70 = &UNK_10f6964da;
      uStack_68 = 0x14;
      if ((1 < (uint)param_8) || ((uVar9 != 0 || (*(int *)((long)param_1 + 100) != (int)param_7))))
      goto LAB_10ab9c4b8;
      FUN_10a303910(param_2,*(undefined4 *)((long)param_1 + 0x7c),param_13,
                    *(undefined4 *)((long)param_1 + 0x94),param_6,param_7,param_9,
                    *(undefined4 *)((long)param_1 + 0x9c),param_11);
      goto code_r0x00010a303840;
    }
  }
  puStack_70 = &UNK_10f6964da;
  uStack_68 = 0x14;
LAB_10ab9c4b8:
  do {
    FUN_10a0edfc4(&puStack_70);
LAB_10ab9c4c0:
    FUN_10a0ee06c(&UNK_10f6476ed);
LAB_10ab9c4cc:
    puStack_70 = &UNK_10f6964ef;
    uStack_68 = 0x15;
  } while( true );
}



/* Entry: 10ab9c4dc; end: 10ab9c52b;  */

void FUN_10ab9c4dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_10ab9c178(param_1,*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4,param_5,param_6,
                param_7,*(undefined4 *)(param_1 + 0x98));
  return;
}



/* Entry: 10ab9c52c; end: 10ab9c763;  */

void FUN_10ab9c52c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *extraout_x8;
  long lVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_40;
  puStack_40 = &UNK_10f696555;
  uStack_38 = 0x1c;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar8 = (int)param_2;
    if (iVar8 < 0x8072) {
      if (iVar8 < 0x2802) {
        if (iVar8 == 0x2800) {
          lVar10 = 0xa4;
LAB_10ab9c624:
          if (*(int *)(param_1 + lVar10) != (int)param_3) {
            FUN_10a303694(1);
            _glTexParameteri(*(undefined4 *)(param_1 + 0x7c),param_2,param_3);
            *(int *)(param_1 + lVar10) = (int)param_3;
          }
          return;
        }
        if (iVar8 == 0x2801) {
          lVar10 = 0xa0;
          goto LAB_10ab9c624;
        }
      }
      else {
        if (iVar8 == 0x2802) {
          lVar10 = 0xa8;
          goto LAB_10ab9c624;
        }
        if (iVar8 == 0x2803) {
          lVar10 = 0xac;
          goto LAB_10ab9c624;
        }
      }
    }
    else if (iVar8 < 0x813b) {
      if (iVar8 == 0x8072) {
        lVar10 = 0xb0;
        goto LAB_10ab9c624;
      }
      if (iVar8 == 0x813a) {
        lVar10 = 200;
        goto LAB_10ab9c624;
      }
    }
    else {
      if (iVar8 == 0x813b) {
        lVar10 = 0xc4;
        goto LAB_10ab9c624;
      }
      if (iVar8 == 0x813d) {
        lVar10 = 0xcc;
        goto LAB_10ab9c624;
      }
    }
    puStack_40 = &UNK_10f696572;
    uStack_38 = 0x19;
  }
  FUN_10a0edfc4();
  uVar4 = (uint)param_2;
  ppuVar6 = &puStack_80;
  uStack_48 = 0x10ab9c678;
  puStack_80 = &UNK_10f696555;
  uStack_78 = 0x1c;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(int *)((long)ppuVar5 + 0x5c) != 0) {
    if (uVar4 == 0x1004) {
      puStack_80 = &UNK_10f69658c;
      uStack_78 = 0x1d;
      if (param_4 == 4) {
        if (param_3 != param_3 + 0x10) {
          lVar10 = 0;
          do {
            if (*(float *)(param_3 + lVar10) !=
                *(float *)((undefined1 *)((long)ppuVar5 + 0xb4) + lVar10)) {
              FUN_10a303694(1);
              _glTexParameterfv(*(undefined4 *)((long)ppuVar5 + 0x7c),0x1004,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__memmove_11034c660)
                        ((undefined1 *)((long)ppuVar5 + 0xb4),param_3,(param_3 + 0x10) - param_3);
              return;
            }
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0x10);
        }
        return;
      }
    }
    else {
      puStack_80 = &UNK_10f696572;
      uStack_78 = 0x19;
    }
  }
  FUN_10a0edfc4();
  uVar9 = (undefined4)param_3;
  ppuVar5 = &puStack_a0;
  pcStack_88 = FUN_10ab9c764;
  pppuStack_b0 = &ppuStack_90;
  puStack_a0 = &UNK_10f6965aa;
  uStack_98 = 0x23;
  if (*(long *)((long)ppuVar6 + 0xd0) == 0) {
    ppuStack_90 = &puStack_50;
    FUN_10a0edfc4();
    ppuVar6 = &puStack_c0;
    uStack_a8 = 0x10ab9c79c;
    puStack_c0 = &UNK_10f6965ce;
    uStack_b8 = 0x2c;
    if (*(long *)((long)ppuVar5 + 0xd0) != 0) {
      return;
    }
    FUN_10a0edfc4();
    uVar1 = *(undefined4 *)((long)ppuVar6 + 0x5c);
    *extraout_x8 = *(undefined4 *)((long)ppuVar6 + 0x7c);
    extraout_x8[1] = uVar1;
    uVar1 = *(undefined4 *)((long)ppuVar6 + 0x9c);
    *(undefined8 *)(extraout_x8 + 5) = *(undefined8 *)((long)ppuVar6 + 0x94);
    extraout_x8[7] = uVar1;
    plVar7 = (long *)ppuVar6;
    (**(code **)((long)*ppuVar6 + 0x28))();
    uVar3 = (uint)plVar7 >> (ulong)(uVar4 & 0x1f);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    extraout_x8[2] = uVar3;
    plVar7 = (long *)ppuVar6;
    (**(code **)((long)*ppuVar6 + 0x30))();
    uVar3 = (uint)plVar7 >> (ulong)(uVar4 & 0x1f);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    extraout_x8[3] = uVar3;
    plVar7 = (long *)ppuVar6;
    (**(code **)((long)*ppuVar6 + 0x60))();
    extraout_x8[4] = (int)plVar7;
    extraout_x8[8] = uVar4;
    extraout_x8[9] = uVar9;
    plVar7 = (long *)ppuVar6;
    (**(code **)((long)*ppuVar6 + 0x48))();
    uVar4 = (uint)plVar7;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    bVar2 = *(byte *)((long)ppuVar6 + 0x84);
    extraout_x8[10] = uVar4;
    extraout_x8[0xb] = -(bVar2 >> 2 & 1) & 3;
    return;
  }
  return;
}



/* Entry: 10ab9c764; end: 10ab9c7d3;  */

void FUN_10ab9c764(long param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined4 *extraout_x8;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar4 = &puStack_20;
  puStack_20 = &UNK_10f6965aa;
  uStack_18 = 0x23;
  if (*(long *)(param_1 + 0xd0) != 0) {
    return;
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_40;
  uStack_28 = 0x10ab9c79c;
  puStack_40 = &UNK_10f6965ce;
  uStack_38 = 0x2c;
  if (*(long *)((long)ppuVar4 + 0xd0) != 0) {
    return;
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  uVar1 = *(undefined4 *)((long)ppuVar5 + 0x5c);
  *extraout_x8 = *(undefined4 *)((long)ppuVar5 + 0x7c);
  extraout_x8[1] = uVar1;
  uVar1 = *(undefined4 *)((long)ppuVar5 + 0x9c);
  *(undefined8 *)(extraout_x8 + 5) = *(undefined8 *)((long)ppuVar5 + 0x94);
  extraout_x8[7] = uVar1;
  plVar6 = (long *)ppuVar5;
  (**(code **)((long)*ppuVar5 + 0x28))();
  uVar3 = (uint)plVar6 >> (ulong)(param_2 & 0x1f);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  extraout_x8[2] = uVar3;
  plVar6 = (long *)ppuVar5;
  (**(code **)((long)*ppuVar5 + 0x30))();
  uVar3 = (uint)plVar6 >> (ulong)(param_2 & 0x1f);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  extraout_x8[3] = uVar3;
  plVar6 = (long *)ppuVar5;
  (**(code **)((long)*ppuVar5 + 0x60))();
  extraout_x8[4] = (int)plVar6;
  extraout_x8[8] = param_2;
  extraout_x8[9] = param_3;
  plVar6 = (long *)ppuVar5;
  (**(code **)((long)*ppuVar5 + 0x48))();
  uVar3 = (uint)plVar6;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  bVar2 = *(byte *)((long)ppuVar5 + 0x84);
  extraout_x8[10] = uVar3;
  extraout_x8[0xb] = -(bVar2 >> 2 & 1) & 3;
  return;
}



/* Entry: 10ab9c7d4; end: 10ab9c89b;  */

void FUN_10ab9c7d4(undefined4 *param_1,long *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  
  uVar1 = *(undefined4 *)((long)param_2 + 0x5c);
  *param_1 = *(undefined4 *)((long)param_2 + 0x7c);
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((long)param_2 + 0x9c);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((long)param_2 + 0x94);
  param_1[7] = uVar1;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x28))();
  uVar3 = (uint)plVar4 >> (ulong)(param_3 & 0x1f);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  param_1[2] = uVar3;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x30))();
  uVar3 = (uint)plVar4 >> (ulong)(param_3 & 0x1f);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  param_1[3] = uVar3;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x60))();
  param_1[4] = (int)plVar4;
  param_1[8] = param_3;
  param_1[9] = param_4;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x48))();
  uVar3 = (uint)plVar4;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  bVar2 = *(byte *)((long)param_2 + 0x84);
  param_1[10] = uVar3;
  param_1[0xb] = -(bVar2 >> 2 & 1) & 3;
  return;
}



/* Entry: 10ab9c89c; end: 10ab9c9af;  */

void FUN_10ab9c89c(undefined4 *param_1,long *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  plVar3 = param_2;
  uVar2 = param_3;
  (**(code **)(*param_2 + 0xb8))();
  *param_1 = (int)plVar3[0x16];
  if (*(int *)(plVar3[3] + 0x734) == 1) {
    uVar2 = 0;
    func_0x00010926dea0(plVar3);
    uVar5 = *(undefined4 *)((long)plVar3 + 0xac);
  }
  else {
    uVar5 = 0;
  }
  param_1[1] = uVar5;
  uVar4 = (ulong)*(uint *)(plVar3 + 8);
  FUN_10a3158cc();
  FUN_10ab79c98();
  FUN_10ab99cd4();
  *(ulong *)(param_1 + 5) = uVar4;
  param_1[7] = uVar2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x28))();
  uVar2 = (uint)plVar3 >> (ulong)(param_3 & 0x1f);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  param_1[2] = uVar2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))();
  uVar2 = (uint)plVar3 >> (ulong)(param_3 & 0x1f);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  param_1[3] = uVar2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x60))();
  param_1[4] = (int)plVar3;
  param_1[8] = param_3;
  param_1[9] = param_4;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x48))();
  uVar2 = (uint)plVar3;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  bVar1 = *(byte *)((long)param_2 + 0x94);
  param_1[10] = uVar2;
  param_1[0xb] = -(bVar1 >> 2 & 1) & 3;
  return;
}



/* Entry: 10ab9c9b0; end: 10ab9cb1b;  */

void FUN_10ab9c9b0(undefined8 *param_1,long *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if (param_2 != (long *)0x0) {
    plVar5 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
    if (plVar5 != (long *)0x0) {
      uVar6 = *(undefined4 *)((long)plVar5 + 0x5c);
      *(undefined4 *)param_1 = *(undefined4 *)((long)plVar5 + 0x7c);
      *(undefined4 *)((long)param_1 + 4) = uVar6;
      uVar6 = *(undefined4 *)((long)plVar5 + 0x9c);
      *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)plVar5 + 0x94);
      *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0x28))();
      uVar2 = (uint)plVar3 >> (ulong)(param_3 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      *(uint *)(param_1 + 1) = uVar2;
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0x30))();
      uVar2 = (uint)plVar3 >> (ulong)(param_3 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      *(uint *)((long)param_1 + 0xc) = uVar2;
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0x60))();
      *(int *)(param_1 + 2) = (int)plVar3;
      *(uint *)(param_1 + 4) = param_3;
      *(undefined4 *)((long)param_1 + 0x24) = param_4;
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0x48))();
      uVar2 = (uint)plVar3;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      bVar1 = *(byte *)((long)plVar5 + 0x84);
      *(uint *)(param_1 + 5) = uVar2;
      *(uint *)((long)param_1 + 0x2c) = -(bVar1 >> 2 & 1) & 3;
      return;
    }
    ___dynamic_cast(param_2,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0a0,0);
    if (param_2 != (long *)0x0) {
      plVar5 = param_2;
      uVar2 = param_3;
      (**(code **)(*param_2 + 0xb8))();
      *(int *)param_1 = (int)plVar5[0x16];
      if (*(int *)(plVar5[3] + 0x734) == 1) {
        uVar2 = 0;
        func_0x00010926dea0(plVar5);
        uVar6 = *(undefined4 *)((long)plVar5 + 0xac);
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)((long)param_1 + 4) = uVar6;
      uVar4 = (ulong)*(uint *)(plVar5 + 8);
      FUN_10a3158cc();
      FUN_10ab79c98();
      FUN_10ab99cd4();
      *(ulong *)((long)param_1 + 0x14) = uVar4;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x28))();
      uVar2 = (uint)plVar5 >> (ulong)(param_3 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      *(uint *)(param_1 + 1) = uVar2;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x30))();
      uVar2 = (uint)plVar5 >> (ulong)(param_3 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      *(uint *)((long)param_1 + 0xc) = uVar2;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x60))();
      *(int *)(param_1 + 2) = (int)plVar5;
      *(uint *)(param_1 + 4) = param_3;
      *(undefined4 *)((long)param_1 + 0x24) = param_4;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x48))();
      uVar2 = (uint)plVar5;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      bVar1 = *(byte *)((long)param_2 + 0x94);
      *(uint *)(param_1 + 5) = uVar2;
      *(uint *)((long)param_1 + 0x2c) = -(bVar1 >> 2 & 1) & 3;
      return;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 1;
  return;
}



/* Entry: 10ab9cb1c; end: 10ab9cbe7;  */

bool FUN_10ab9cb1c(long *param_1,uint param_2,long *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  
  bVar3 = false;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    uVar1 = (uint)plVar4 >> (ulong)(param_2 & 0x1f);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    (**(code **)(*param_1 + 0x30))();
    uVar2 = (uint)param_1 >> (ulong)(param_2 & 0x1f);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    if (uVar1 == uVar2) {
      plVar4 = param_3;
      (**(code **)(*param_3 + 0x28))();
      uVar1 = (uint)plVar4 >> (ulong)(param_4 & 0x1f);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      (**(code **)(*param_3 + 0x30))();
      uVar2 = (uint)param_3 >> (ulong)(param_4 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      bVar3 = uVar1 == uVar2;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



/* Entry: 10ab9cbe8; end: 10ab9ce17;  */

/* WARNING: Removing unreachable block (ram,0x00010ab9cdf8) */

undefined **
FUN_10ab9cbe8(ulong *param_1,undefined **param_2,undefined4 param_3,undefined8 param_4,
             undefined **param_5,undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined1 auVar6 [8];
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_470 [8];
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [8];
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [8];
  undefined1 auStack_448 [8];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2cc;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined *puStack_260;
  undefined8 uStack_258;
  
  if (param_2 == (undefined **)0x0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puStack_260 = &UNK_10f635282;
    uStack_258 = 0x2b;
    if (*(long *)(*ppuVar5 + 0x10) == 0) {
      ppuVar5 = &puStack_260;
      FUN_10a0edfc4();
      func_0x00010a0a038c(auStack_470);
      __Unwind_Resume();
      puVar8 = *ppuVar5;
      if (puVar8 != (undefined *)0x0) {
        if (*(char *)(ppuVar5 + 3) == '\x01') {
          func_0x00010a302934(ppuVar5[1],0x3ffff);
          puVar8 = *ppuVar5;
        }
        func_0x00010a090848(puVar8);
      }
      func_0x00010a0a038c(ppuVar5 + 1);
      return ppuVar5;
    }
    param_2 = (undefined **)(*(long *)(*ppuVar5 + 0x10) + 0x50);
  }
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  auStack_448 = (undefined1  [8])0x0;
  auStack_450 = (undefined1  [8])0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  auStack_468 = (undefined1  [8])0x0;
  auStack_458 = (undefined1  [8])0x0;
  auStack_460 = (undefined1  [8])0x0;
  lVar7 = 0;
  do {
    *(undefined8 *)(auStack_450 + lVar7 + 4) = 0;
    *(undefined8 *)(auStack_458 + lVar7 + 4) = 0;
    *(undefined8 *)(auStack_460 + lVar7 + 4) = 0;
    *(undefined8 *)(auStack_468 + lVar7 + 4) = 0;
    *(undefined8 *)(auStack_470 + lVar7 + 4) = 0;
    *(undefined8 *)(auStack_448 + lVar7 + 4) = 1;
    lVar1 = lVar7 + 0x34;
    *(undefined4 *)((long)&uStack_440 + lVar7 + 4) = 0;
    lVar7 = lVar1;
  } while (lVar1 != 0x1a0);
  uStack_2ac = 0;
  uStack_2c4 = 0;
  uStack_2cc = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_270 = 1;
  uStack_268 = 0;
  uStack_2a4 = 1;
  auStack_470 = (undefined1  [8])0x1;
  uStack_264 = param_3;
  _memcpy(&puStack_260,auStack_470,0x210);
  ppuVar5 = param_2;
  FUN_10a090b8c(auStack_470,param_2,&puStack_260);
  if (((int)((ulong)param_6 >> 0x20) - (int)((ulong)param_5 >> 0x20)) *
      ((int)param_6 - (int)param_5) != 0) {
    _glViewport(param_5,(ulong)param_5 >> 0x20);
    ppuVar5 = param_5;
  }
  auVar6 = auStack_468;
  *param_1 = (ulong)param_2;
  param_1[2] = (ulong)auStack_468;
  param_1[1] = (ulong)auStack_470;
  if (auStack_468 == (undefined1  [8])0x0) {
    *(undefined1 *)(param_1 + 3) = param_7;
  }
  else {
    ppuVar2 = (undefined **)((long)auStack_468 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 3) = param_7;
    if (auStack_468 != (undefined1  [8])0x0) {
      ppuVar2 = (undefined **)((long)auStack_468 + 8);
      do {
        puVar8 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*(undefined **)auStack_468 + 0x10))(auStack_468);
        __ZNSt3__119__shared_weak_count14__release_weakEv(auVar6);
        ppuVar5 = (undefined **)auVar6;
      }
    }
  }
  return ppuVar5;
}



/* Entry: 10ab9ce18; end: 10ab9ce6b;  */

long * FUN_10ab9ce18(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((char)param_1[3] == '\x01') {
      func_0x00010a302934(param_1[1],0x3ffff);
      lVar1 = *param_1;
    }
    func_0x00010a090848(lVar1);
  }
  func_0x00010a0a038c(param_1 + 1);
  return param_1;
}



/* Entry: 10ab9ce6c; end: 10ab9cf43;  */

void FUN_10ab9ce6c(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    plVar2 = param_1;
    ___dynamic_cast(param_1,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0);
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      ___dynamic_cast(param_1,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
      if (plVar2 != (long *)0x0) {
        return;
      }
      ___dynamic_cast(param_1,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0a0,0);
      if (param_1 == (long *)0x0) {
        return;
      }
      (**(code **)(*param_1 + 0xb8))();
      iVar1 = *(int *)(param_1[3] + 0x734);
    }
    else {
      FUN_10ad70254();
      param_1 = (long *)*plVar2;
      iVar1 = *(int *)(param_1[3] + 0x734);
    }
    if (iVar1 == 1) {
      func_0x00010926dea0(param_1,0);
    }
  }
  return;
}



/* Entry: 10ab9cf44; end: 10ab9d16f;  */

undefined8 ** FUN_10ab9cf44(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plStack_340;
  long lStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined8 **ppuStack_318;
  undefined8 **ppuStack_310;
  long lStack_308;
  undefined8 *apuStack_300 [7];
  undefined8 **ppuStack_2c8;
  long *plStack_2c0;
  undefined8 *apuStack_2b8 [8];
  long lStack_278;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined8 **ppuStack_208;
  long lStack_1d8;
  undefined **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_179;
  code *pcStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined1 auStack_138 [16];
  undefined8 **ppuStack_128;
  char cStack_111;
  undefined8 *apuStack_108 [8];
  undefined8 *apuStack_c8 [7];
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    lVar6 = 1;
    func_0x00010ae06f08(1,4,&UNK_10f69665e,&UNK_10f696696,0x26,&UNK_10f6966b6);
  }
  FUN_109d1c1c4();
  pcStack_90 = FUN_10abd9324;
  ppuStack_88 = &PTR_FUN_110c532a8;
  pcStack_178 = FUN_10abd9404;
  ppuStack_170 = &PTR_FUN_110c532c0;
  lStack_168 = param_1;
  ppuStack_80 = (undefined **)param_1;
  FUN_109d1b72c(auStack_138,&UNK_10e4fe935,0x14,lVar6,&pcStack_90,&pcStack_178,0);
  (*(code *)*ppuStack_170)(&ppuStack_170);
  (*(code *)*ppuStack_88)(&ppuStack_88);
  uStack_188 = 0x68e0f066500;
  uStack_198 = 1;
  uStack_190 = 1;
  FUN_109d1d1f0(&pcStack_90,&uStack_179,auStack_138,&uStack_190,&uStack_198,&uStack_188);
  ppuVar4 = ppuStack_88;
  pcVar5 = pcStack_90;
  pcStack_178 = pcStack_90;
  ppuStack_170 = ppuStack_88;
  uVar7 = 0xb8;
  __Znwm();
  ppuStack_88 = (undefined **)&UNK_109896774;
  ppuStack_80 = &PTR_DAT_110b17068;
  pcStack_78 = pcVar5;
  ppuStack_70 = ppuVar4;
  iVar13 = 0x14;
  pcStack_90 = pcVar5;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&pcStack_90);
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  (*(code *)*apuStack_c8[0])(apuStack_c8);
  ppuVar10 = apuStack_108;
  (*(code *)*apuStack_108[0])();
  if (cStack_111 < '\0') {
    __ZdlPv();
    ppuVar10 = ppuStack_128;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  func_0x00010a06e274(&pcStack_178);
  FUN_109d1c850(auStack_138);
  ppuVar9 = ppuVar10;
  __Unwind_Resume();
  ppuStack_1d0 = ppuVar4;
  pcStack_1c8 = pcVar5;
  pcStack_1a8 = FUN_10ab9d170;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar9 + 1;
  uStack_1c0 = uVar7;
  ppuStack_1b8 = ppuVar10;
  puStack_1b0 = &stack0xfffffffffffffff0;
  if (*ppuVar11 != (undefined8 *)0x0) {
    pcStack_218 = FUN_10abd9478;
    ppuStack_210 = &PTR_FUN_110c532d8;
    iVar13 = 0;
    ppuStack_208 = ppuVar9;
    FUN_10ab9d2b8(ppuVar9,&pcStack_218);
    (*(code *)*ppuStack_210)(&ppuStack_210);
    (**(code **)(*ppuVar9[2] + 0x38))(&pcStack_218);
    FUN_109d1a244(&pcStack_218);
    FUN_10a09b344(&pcStack_218);
    if (pcStack_218 != (code *)0x0) {
      pcVar5 = pcStack_218 + 8;
      do {
        uVar14 = *(ulong *)pcVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar3) {
          *(ulong *)pcVar5 = uVar14 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *(ulong *)pcVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar3) {
            *(ulong *)pcVar5 = uVar14 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*(long *)pcStack_218 + 8))();
        }
      }
    }
  }
  ppuVar10 = (undefined8 **)ppuVar9[2];
  ppuVar9[2] = (undefined8 *)0x0;
  if (ppuVar10 != (undefined8 **)0x0) {
    (*(code *)(*ppuVar10)[2])();
  }
  plVar8 = *ppuVar11;
  *ppuVar11 = (undefined8 *)0x0;
  if (plVar8 != (long *)0x0) {
    FUN_10a31ed38();
    ppuVar10 = ppuVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  if ((int)plVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
    if (bVar3) {
      *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_308 = *plVar8;
  ppuStack_310 = ppuVar10;
  (**(code **)(plVar8[1] + 0x10))(apuStack_300);
  puVar15 = ppuVar10[2];
  if (iVar13 == 0) {
    plVar8 = (long *)puVar15[2];
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x58;
      __Znwm();
      *plVar8 = (long)ppuStack_310;
      plVar8[1] = lStack_308;
      (*(code *)apuStack_300[0][2])(plVar8 + 2,apuStack_300);
      plVar8[10] = 0x10abd9574;
      ppuStack_2c8 = (undefined8 **)FUN_10abd9504;
      plStack_2c0 = plVar8;
      apuStack_2b8[0] = puVar15;
      (**(code **)*puVar15)(puVar15,&ppuStack_2c8);
    }
    else {
      plStack_330 = (long *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&plStack_330);
      if (plStack_330 != (long *)0x0) {
        func_0x0001092af97c(&plStack_330);
        goto LAB_10ab9d7e8;
      }
      plVar12 = (long *)0x60;
      __Znwm();
      *plVar12 = (long)ppuStack_310;
      plVar12[1] = lStack_308;
      (*(code *)apuStack_300[0][2])(plVar12 + 2,apuStack_300);
      plVar12[10] = (long)FUN_10abd9540;
      plVar12[0xb] = (long)plVar8;
      ppuStack_2c8 = (undefined8 **)FUN_10abd94d4;
      plStack_2c0 = plVar12;
      apuStack_2b8[0] = puVar15;
      (**(code **)*puVar15)(puVar15,&ppuStack_2c8);
      __ZNSt13exception_ptrD1Ev(&plStack_330);
    }
    plStack_330 = (long *)0x0;
    __ZNSt13exception_ptrD1Ev(&plStack_330);
LAB_10ab9d78c:
    ppuVar10 = apuStack_300;
    (*(code *)*apuStack_300[0])(ppuVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
      return ppuVar10;
    }
    ___stack_chk_fail();
  }
  else {
    plVar8 = (long *)puVar15[2];
    plStack_328 = (long *)0x0;
    plStack_320 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      ppuStack_2c8 = ppuStack_310;
      plStack_2c0 = (long *)lStack_308;
      (*(code *)apuStack_300[0][2])(apuStack_2b8,apuStack_300);
      plVar8 = (long *)0x100;
      __Znwm();
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      *plVar8 = (long)&PTR_DAT_110c50950;
      plVar8[0x14] = (long)ppuStack_2c8;
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      plVar8[0x15] = (long)plStack_2c0;
      (*(code *)apuStack_2b8[0][2])(plVar8 + 0x16,apuStack_2b8);
      *(undefined1 *)(plVar8 + 0x1e) = 1;
      plVar8[0x1f] = 0;
      if (plStack_328 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_328 + 1);
        do {
          uVar14 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar14 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_328 + 8))();
          }
        }
      }
      plStack_328 = plVar8;
      if (plStack_320 != (long *)0x0) {
        func_0x0001092b4274(&plStack_320);
      }
      plStack_330 = plVar8 + 0x14;
      plStack_320 = plVar8;
      (*(code *)*apuStack_2b8[0])(apuStack_2b8);
      ppuStack_318 = (undefined8 **)FUN_10abd0640;
LAB_10ab9d628:
      plVar8 = plStack_330;
      if (plStack_330[0xb] != 0) {
        func_0x0001092b4274();
      }
      plVar8[0xb] = (long)plStack_320;
      plStack_320 = (long *)0x0;
      ppuStack_2c8 = ppuStack_318;
      plStack_2c0 = plStack_330;
      apuStack_2b8[0] = puVar15;
      (**(code **)*puVar15)(puVar15,&ppuStack_2c8);
      plStack_340 = plStack_328;
      plStack_328 = (long *)0x0;
      if (plStack_320 != (long *)0x0) {
        func_0x0001092b4274(&plStack_320);
        if (plStack_328 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_328 + 1);
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plStack_328 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_340);
      FUN_10a09b344(&plStack_340);
      if (plStack_340 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_340 + 1);
        do {
          uVar14 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar14 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_340 + 8))();
          }
        }
      }
      goto LAB_10ab9d78c;
    }
    lStack_338 = 0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_338);
    if (lStack_338 == 0) {
      ppuStack_2c8 = ppuStack_310;
      plStack_2c0 = (long *)lStack_308;
      (*(code *)apuStack_300[0][2])(apuStack_2b8,apuStack_300);
      plVar12 = (long *)0x108;
      __Znwm();
      *(undefined2 *)(plVar12 + 3) = 4;
      plVar12[0x10] = 0;
      plVar12[0x11] = (long)(plVar12 + 3);
      *plVar12 = (long)&PTR_FUN_110c50918;
      plVar12[0x14] = (long)ppuStack_2c8;
      plVar12[2] = 0;
      plVar12[1] = 0x200000006;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      plVar12[0xf] = 0;
      plVar12[0xe] = 0;
      plVar12[9] = 0;
      plVar12[8] = 0;
      plVar12[0xb] = 0;
      plVar12[10] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[0x12] = 0;
      *(undefined2 *)(plVar12 + 0x13) = 0;
      plVar12[0x15] = (long)plStack_2c0;
      (*(code *)apuStack_2b8[0][2])(plVar12 + 0x16,apuStack_2b8);
      *(undefined1 *)(plVar12 + 0x1e) = 1;
      plVar12[0x1f] = 0;
      plVar12[0x20] = (long)plVar8;
      if (plStack_328 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_328 + 1);
        do {
          uVar14 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar14 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_328 + 8))();
          }
        }
      }
      plStack_328 = plVar12;
      if (plStack_320 != (long *)0x0) {
        func_0x0001092b4274(&plStack_320);
      }
      plStack_330 = plVar12 + 0x14;
      plStack_320 = plVar12;
      (*(code *)*apuStack_2b8[0])(apuStack_2b8);
      ppuStack_318 = (undefined8 **)FUN_10abd0610;
      __ZNSt13exception_ptrD1Ev(&lStack_338);
      goto LAB_10ab9d628;
    }
  }
  func_0x0001092af97c(&lStack_338);
LAB_10ab9d7e8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab9d7ec);
  (*pcVar5)();
}



/* Entry: 10ab9d170; end: 10ab9d2b7;  */

undefined8 ** FUN_10ab9d170(undefined8 **param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  long lStack_168;
  undefined8 *apuStack_160 [7];
  undefined8 **ppuStack_128;
  long *plStack_120;
  undefined8 *apuStack_118 [8];
  long lStack_d8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 **ppuStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1 + 1;
  if (*ppuVar6 != (undefined8 *)0x0) {
    pcStack_78 = FUN_10abd9478;
    ppuStack_70 = &PTR_FUN_110c532d8;
    param_3 = 0;
    ppuStack_68 = param_1;
    FUN_10ab9d2b8(param_1,&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    (**(code **)(*param_1[2] + 0x38))(&pcStack_78);
    FUN_109d1a244(&pcStack_78);
    FUN_10a09b344(&pcStack_78);
    if (pcStack_78 != (code *)0x0) {
      pcVar4 = pcStack_78 + 8;
      do {
        uVar9 = *(ulong *)pcVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar3) {
          *(ulong *)pcVar4 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *(ulong *)pcVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(ulong *)pcVar4 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*(long *)pcStack_78 + 8))();
        }
      }
    }
  }
  ppuVar5 = (undefined8 **)param_1[2];
  param_1[2] = (undefined8 *)0x0;
  if (ppuVar5 != (undefined8 **)0x0) {
    (*(code *)(*ppuVar5)[2])();
  }
  plVar8 = *ppuVar6;
  *ppuVar6 = (undefined8 *)0x0;
  if (plVar8 != (long *)0x0) {
    FUN_10a31ed38();
    ppuVar5 = ppuVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)plVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
    if (bVar3) {
      *(int *)ppuVar5 = *(int *)ppuVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_168 = *plVar8;
  ppuStack_170 = ppuVar5;
  (**(code **)(plVar8[1] + 0x10))(apuStack_160);
  puVar10 = ppuVar5[2];
  if (param_3 == 0) {
    plVar8 = (long *)puVar10[2];
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x58;
      __Znwm();
      *plVar8 = (long)ppuStack_170;
      plVar8[1] = lStack_168;
      (*(code *)apuStack_160[0][2])(plVar8 + 2,apuStack_160);
      plVar8[10] = 0x10abd9574;
      ppuStack_128 = (undefined8 **)FUN_10abd9504;
      plStack_120 = plVar8;
      apuStack_118[0] = puVar10;
      (**(code **)*puVar10)(puVar10,&ppuStack_128);
    }
    else {
      plStack_190 = (long *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&plStack_190);
      if (plStack_190 != (long *)0x0) {
        func_0x0001092af97c(&plStack_190);
        goto LAB_10ab9d7e8;
      }
      plVar7 = (long *)0x60;
      __Znwm();
      *plVar7 = (long)ppuStack_170;
      plVar7[1] = lStack_168;
      (*(code *)apuStack_160[0][2])(plVar7 + 2,apuStack_160);
      plVar7[10] = (long)FUN_10abd9540;
      plVar7[0xb] = (long)plVar8;
      ppuStack_128 = (undefined8 **)FUN_10abd94d4;
      plStack_120 = plVar7;
      apuStack_118[0] = puVar10;
      (**(code **)*puVar10)(puVar10,&ppuStack_128);
      __ZNSt13exception_ptrD1Ev(&plStack_190);
    }
    plStack_190 = (long *)0x0;
    __ZNSt13exception_ptrD1Ev(&plStack_190);
LAB_10ab9d78c:
    ppuVar6 = apuStack_160;
    (*(code *)*apuStack_160[0])(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return ppuVar6;
    }
    ___stack_chk_fail();
  }
  else {
    plVar8 = (long *)puVar10[2];
    plStack_188 = (long *)0x0;
    plStack_180 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      ppuStack_128 = ppuStack_170;
      plStack_120 = (long *)lStack_168;
      (*(code *)apuStack_160[0][2])(apuStack_118,apuStack_160);
      plVar8 = (long *)0x100;
      __Znwm();
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      *plVar8 = (long)&PTR_DAT_110c50950;
      plVar8[0x14] = (long)ppuStack_128;
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      plVar8[0x15] = (long)plStack_120;
      (*(code *)apuStack_118[0][2])(plVar8 + 0x16,apuStack_118);
      *(undefined1 *)(plVar8 + 0x1e) = 1;
      plVar8[0x1f] = 0;
      if (plStack_188 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_188 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plStack_188 + 8))();
          }
        }
      }
      plStack_188 = plVar8;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
      }
      plStack_190 = plVar8 + 0x14;
      plStack_180 = plVar8;
      (*(code *)*apuStack_118[0])(apuStack_118);
      ppuStack_178 = (undefined8 **)FUN_10abd0640;
LAB_10ab9d628:
      plVar8 = plStack_190;
      if (plStack_190[0xb] != 0) {
        func_0x0001092b4274();
      }
      plVar8[0xb] = (long)plStack_180;
      plStack_180 = (long *)0x0;
      ppuStack_128 = ppuStack_178;
      plStack_120 = plStack_190;
      apuStack_118[0] = puVar10;
      (**(code **)*puVar10)(puVar10,&ppuStack_128);
      plStack_1a0 = plStack_188;
      plStack_188 = (long *)0x0;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
        if (plStack_188 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_188 + 1);
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plStack_188 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_1a0);
      FUN_10a09b344(&plStack_1a0);
      if (plStack_1a0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1a0 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plStack_1a0 + 8))();
          }
        }
      }
      goto LAB_10ab9d78c;
    }
    lStack_198 = 0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_198);
    if (lStack_198 == 0) {
      ppuStack_128 = ppuStack_170;
      plStack_120 = (long *)lStack_168;
      (*(code *)apuStack_160[0][2])(apuStack_118,apuStack_160);
      plVar7 = (long *)0x108;
      __Znwm();
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      *plVar7 = (long)&PTR_FUN_110c50918;
      plVar7[0x14] = (long)ppuStack_128;
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[0x12] = 0;
      *(undefined2 *)(plVar7 + 0x13) = 0;
      plVar7[0x15] = (long)plStack_120;
      (*(code *)apuStack_118[0][2])(plVar7 + 0x16,apuStack_118);
      *(undefined1 *)(plVar7 + 0x1e) = 1;
      plVar7[0x1f] = 0;
      plVar7[0x20] = (long)plVar8;
      if (plStack_188 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_188 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plStack_188 + 8))();
          }
        }
      }
      plStack_188 = plVar7;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
      }
      plStack_190 = plVar7 + 0x14;
      plStack_180 = plVar7;
      (*(code *)*apuStack_118[0])(apuStack_118);
      ppuStack_178 = (undefined8 **)FUN_10abd0610;
      __ZNSt13exception_ptrD1Ev(&lStack_198);
      goto LAB_10ab9d628;
    }
  }
  func_0x0001092af97c(&lStack_198);
LAB_10ab9d7e8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab9d7ec);
  (*pcVar4)();
}



/* Entry: 10ab9d2b8; end: 10ab9d88f;  */

void FUN_10ab9d2b8(code *param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  undefined8 *apuStack_e0 [7];
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 *apuStack_98 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *(int *)param_1 = *(int *)param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_e8 = *param_2;
  pcStack_f0 = param_1;
  (**(code **)(param_2[1] + 0x10))(apuStack_e0);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (param_3 == 0) {
    plVar8 = (long *)puVar7[2];
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x58;
      __Znwm();
      *plVar8 = (long)pcStack_f0;
      plVar8[1] = lStack_e8;
      (*(code *)apuStack_e0[0][2])(plVar8 + 2,apuStack_e0);
      plVar8[10] = 0x10abd9574;
      pcStack_a8 = FUN_10abd9504;
      plStack_a0 = plVar8;
      apuStack_98[0] = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_a8);
    }
    else {
      plStack_110 = (long *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&plStack_110);
      if (plStack_110 != (long *)0x0) {
        func_0x0001092af97c(&plStack_110);
        goto LAB_10ab9d7e8;
      }
      plVar5 = (long *)0x60;
      __Znwm();
      *plVar5 = (long)pcStack_f0;
      plVar5[1] = lStack_e8;
      (*(code *)apuStack_e0[0][2])(plVar5 + 2,apuStack_e0);
      plVar5[10] = (long)FUN_10abd9540;
      plVar5[0xb] = (long)plVar8;
      pcStack_a8 = FUN_10abd94d4;
      plStack_a0 = plVar5;
      apuStack_98[0] = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_a8);
      __ZNSt13exception_ptrD1Ev(&plStack_110);
    }
    plStack_110 = (long *)0x0;
    __ZNSt13exception_ptrD1Ev(&plStack_110);
LAB_10ab9d78c:
    (*(code *)*apuStack_e0[0])(apuStack_e0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar8 = (long *)puVar7[2];
    plStack_108 = (long *)0x0;
    plStack_100 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      pcStack_a8 = pcStack_f0;
      plStack_a0 = (long *)lStack_e8;
      (*(code *)apuStack_e0[0][2])(apuStack_98,apuStack_e0);
      plVar8 = (long *)0x100;
      __Znwm();
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      *plVar8 = (long)&PTR_DAT_110c50950;
      plVar8[0x14] = (long)pcStack_a8;
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      plVar8[0x15] = (long)plStack_a0;
      (*(code *)apuStack_98[0][2])(plVar8 + 0x16,apuStack_98);
      *(undefined1 *)(plVar8 + 0x1e) = 1;
      plVar8[0x1f] = 0;
      if (plStack_108 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_108 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_108 + 8))();
          }
        }
      }
      plStack_108 = plVar8;
      if (plStack_100 != (long *)0x0) {
        func_0x0001092b4274(&plStack_100);
      }
      plStack_110 = plVar8 + 0x14;
      plStack_100 = plVar8;
      (*(code *)*apuStack_98[0])(apuStack_98);
      pcStack_f8 = FUN_10abd0640;
LAB_10ab9d628:
      plVar8 = plStack_110;
      if (plStack_110[0xb] != 0) {
        func_0x0001092b4274();
      }
      plVar8[0xb] = (long)plStack_100;
      plStack_100 = (long *)0x0;
      pcStack_a8 = pcStack_f8;
      plStack_a0 = plStack_110;
      apuStack_98[0] = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_a8);
      plStack_120 = plStack_108;
      plStack_108 = (long *)0x0;
      if (plStack_100 != (long *)0x0) {
        func_0x0001092b4274(&plStack_100);
        if (plStack_108 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_108 + 1);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar6 & 0x1fffffffc) == 4) {
            do {
              uVar6 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar6 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar6 - 1 == 0) {
              (**(code **)(*plStack_108 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_120);
      FUN_10a09b344(&plStack_120);
      if (plStack_120 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_120 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_120 + 8))();
          }
        }
      }
      goto LAB_10ab9d78c;
    }
    lStack_118 = 0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_118);
    if (lStack_118 == 0) {
      pcStack_a8 = pcStack_f0;
      plStack_a0 = (long *)lStack_e8;
      (*(code *)apuStack_e0[0][2])(apuStack_98,apuStack_e0);
      plVar5 = (long *)0x108;
      __Znwm();
      *(undefined2 *)(plVar5 + 3) = 4;
      plVar5[0x10] = 0;
      plVar5[0x11] = (long)(plVar5 + 3);
      *plVar5 = (long)&PTR_FUN_110c50918;
      plVar5[0x14] = (long)pcStack_a8;
      plVar5[2] = 0;
      plVar5[1] = 0x200000006;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[0x12] = 0;
      *(undefined2 *)(plVar5 + 0x13) = 0;
      plVar5[0x15] = (long)plStack_a0;
      (*(code *)apuStack_98[0][2])(plVar5 + 0x16,apuStack_98);
      *(undefined1 *)(plVar5 + 0x1e) = 1;
      plVar5[0x1f] = 0;
      plVar5[0x20] = (long)plVar8;
      if (plStack_108 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_108 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_108 + 8))();
          }
        }
      }
      plStack_108 = plVar5;
      if (plStack_100 != (long *)0x0) {
        func_0x0001092b4274(&plStack_100);
      }
      plStack_110 = plVar5 + 0x14;
      plStack_100 = plVar5;
      (*(code *)*apuStack_98[0])(apuStack_98);
      pcStack_f8 = FUN_10abd0610;
      __ZNSt13exception_ptrD1Ev(&lStack_118);
      goto LAB_10ab9d628;
    }
  }
  func_0x0001092af97c(&lStack_118);
LAB_10ab9d7e8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab9d7ec);
  (*pcVar4)();
}



/* Entry: 10ab9d890; end: 10ab9d97b;  */

long FUN_10ab9d890(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x228);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[3] != 0) {
      plVar1[4] = plVar1[3];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x160);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010abd95a8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  FUN_10a276ef4(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ab9d97c; end: 10ab9d97f;  */

long FUN_10ab9d97c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x228);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[3] != 0) {
      plVar1[4] = plVar1[3];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x160);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010abd95a8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  FUN_10a276ef4(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ab9d980; end: 10ab9d993;  */

void FUN_10ab9d980(void)

{
  FUN_10ab9d890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab9d994; end: 10ab9da8f;  */

long FUN_10ab9d994(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 uStack_48;
  
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c50c00 + (param_2 & 0xffffffff) * 5);
  FUN_10ab91b60(param_1);
  lVar1 = param_1 + 0x40;
  FUN_10abd8fbc(lVar1,uStack_48);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x30;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if ((param_3 != 0xd8) && (lVar1 == 0)) {
    func_0x000107c2b074(auStack_60,&PTR_DAT_110c50c00 + (ulong)param_3 * 5);
    FUN_10ab91b60(param_1);
    param_1 = param_1 + 0x40;
    FUN_10abd8fbc(param_1,uStack_48);
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x30;
    }
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  return lVar2;
}



/* Entry: 10ab9da90; end: 10ab9dafb;  */

undefined8 FUN_10ab9da90(long param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 8) < 0x1c) {
    if (uVar1 == 0xd) {
      return 0xde1;
    }
    if (uVar1 == 0x1a) {
      return 0x8c1a;
    }
    if (uVar1 == 0x1b) {
      return 0x806f;
    }
  }
  else {
    if (uVar1 - 0x1d < 2) {
      return 0xde1;
    }
    if (uVar1 == 0x1c) {
      return 0x8513;
    }
  }
  return 0;
}



/* Entry: 10ab9dafc; end: 10ab9dbc7;  */

undefined8 * FUN_10ab9dafc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  
  puVar1 = param_1;
  FUN_10a03e114();
  FUN_10a03c0d0(puVar1 + 4);
  param_1[8] = param_2;
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_110c4fc70;
  param_1[4] = &PTR_DAT_110c4fce0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  pbVar2 = (byte *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)((long)param_1 + 0x49) = *pbVar2 >> 3 & 1;
  return param_1;
}



/* Entry: 10ab9dbc8; end: 10ab9dc73;  */

undefined8 * FUN_10ab9dbc8(undefined8 *param_1)

{
  param_1[4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10ab9dc74; end: 10ab9dc7f;  */

undefined8 * FUN_10ab9dc74(undefined8 *param_1)

{
  long *plVar1;
  
  func_0x00010a09dbbc(param_1 + 0xd);
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010abd867c(param_1 + 10,0);
  param_1[4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10ab9dc80; end: 10ab9dcab;  */

void FUN_10ab9dc80(void)

{
  func_0x00010ab9dc28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab9dcac; end: 10ab9e3e7;  */

void FUN_10ab9dcac(long *param_1,undefined4 param_2,float param_3,float param_4,long param_5,
                  long param_6,long param_7,ulong param_8,long param_9,int param_10,long param_11)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  int iStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  int iStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float fStack_260;
  uint uStack_258;
  long *plStack_d0;
  long *plStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_298 = (int)*(undefined8 *)(param_6 + 0x268);
  puVar9 = (ulong *)0x1;
  FUN_10a088744();
  if (puVar9 == (ulong *)0x0) {
    plStack_290 = (long *)0x0;
    plStack_288 = (long *)0x0;
  }
  else {
    plStack_288 = (long *)puVar9[1];
    param_1 = (long *)*puVar9;
    plStack_290 = param_1;
    if (puVar9[1] != 0) {
      plVar14 = (long *)(puVar9[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = *plVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  iStack_2b0 = (int)*(undefined8 *)(param_7 + 0x268);
  puVar9 = (ulong *)0x1;
  FUN_10a088744();
  if (puVar9 == (ulong *)0x0) {
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)0x0;
  }
  else {
    plStack_2a0 = (long *)puVar9[1];
    param_1 = (long *)*puVar9;
    plStack_2a8 = param_1;
    if (puVar9[1] != 0) {
      plVar14 = (long *)(puVar9[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = *plVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  fVar16 = SUB84(param_1,0);
  if (iStack_298 == 2) {
    if (iStack_2b0 == 2) {
      plVar5 = *(long **)(param_6 + 0x268);
      (**(code **)(*plVar5 + 0x90))(&fStack_2d8);
      plVar6 = plStack_290;
      plVar14 = plStack_2a8;
      if (*(char *)(param_5 + 100) == '\x01') {
        lVar13 = *(long *)(param_5 + 0x68);
        FUN_10a3ca004();
        uVar3 = *(int *)(lVar13 + 0x734) - 2;
        uVar11 = (uint)(0x2040404040203 >> (((ulong)uVar3 & 7) << 3));
        if (6 < uVar3) {
          uVar11 = 4;
        }
        plVar14 = (long *)plVar5[((ulong)uVar11 & 7) + 7];
        if (plVar14 == (long *)0x0) {
          FUN_10a3ca05c();
          plVar14 = (long *)plVar5[((ulong)uVar11 & 7) + 7];
        }
        plVar6 = plVar14;
        FUN_10a244d68();
        FUN_10a025e68(&uStack_280,&plStack_2a8,0,0,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
        (**(code **)(*plVar6 + 0x88))(plVar6,&uStack_280);
        if (plStack_a8 != (long *)0x0) {
          plVar5 = plStack_a8 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
        if (plStack_d0 != (long *)0x0) {
          plVar5 = plStack_d0 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
          }
        }
        func_0x00010a048e34(&uStack_278,uStack_280);
        uStack_280 = (undefined *)(param_8 & 0xffffffff | param_9 << 0x20);
        uStack_278 = (long)uStack_280 + (param_11 << 0x20) & 0xffffffff00000000U |
                     (ulong)(uint)(param_10 + (int)param_8);
        (**(code **)(*plVar6 + 0xc0))(plVar6,&uStack_280);
        (**(code **)(**(long **)(param_6 + 0x268) + 0xd8))();
        FUN_10a244c44(plVar14);
        uStack_280 = (undefined *)
                     CONCAT44(fStack_2c8 * 0.0 + param_3 * fStack_2d4 + fStack_2bc * 0.0,
                              fStack_2cc * 0.0 + param_3 * fStack_2d8 + fStack_2c0 * 0.0);
        uStack_278 = CONCAT44(param_4 * fStack_2cc + fStack_2d8 * 0.0 + fStack_2c0 * 0.0,
                              fStack_2c4 * 0.0 + param_3 * fStack_2d0 + fStack_2b8 * 0.0);
        uStack_270 = CONCAT44(fStack_2c4 * param_4 + fStack_2d0 * 0.0 + fStack_2b8 * 0.0,
                              fStack_2c8 * param_4 + fStack_2d4 * 0.0 + fStack_2bc * 0.0);
        uStack_268 = CONCAT44(fStack_2c8 * fVar16 + fStack_2d4 * fVar16 + fStack_2bc,
                              fStack_2cc * fVar16 + fStack_2d8 * fVar16 + fStack_2c0);
        fStack_260 = fVar16 * fStack_2c4 + fVar16 * fStack_2d0 + fStack_2b8;
        FUN_10ab11d88();
        (**(code **)(*plVar6 + 0x90))(plVar6,0,3,3);
LAB_10ab9e23c:
        plVar14 = plStack_2a0;
        if (plStack_2a0 != (long *)0x0) {
          plVar6 = plStack_2a0 + 1;
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
            (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar14 = plStack_288;
        if (plStack_288 != (long *)0x0) {
          plVar6 = plStack_288 + 1;
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
            (**(code **)(*plStack_288 + 0x10))(plStack_288);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        lVar13 = *(long *)(*(long *)(*(long *)(param_5 + 0x40) + 0x100) + 0x260);
        uStack_280 = &UNK_10f653c20;
        uStack_278 = 0x21;
        if (lVar13 != 0) {
          FUN_10a24489c();
          plVar5 = (long *)0x1;
          FUN_10a303694();
          FUN_10a5bbc70();
          lVar15 = *(long *)(*plVar5 + 0x10);
          uStack_280 = &UNK_10f635282;
          uStack_278 = 0x2b;
          if (lVar15 == 0) {
            FUN_10a0edfc4(&uStack_280);
            goto LAB_10ab9e318;
          }
          uStack_2f8 = 0;
          uStack_2f0 = 0;
          uStack_2e0 = 0;
          uStack_2e8 = 0;
          if (*(char *)(param_5 + 0x49) == '\x01') {
            FUN_10ab9c9b0(&uStack_280,plVar14,0,0);
            uVar10 = param_8 & 0xffffffff | param_9 << 0x20;
            uVar12 = 0x8ca9;
            if (uStack_258 < 2) {
              uVar12 = 0x8d40;
            }
            FUN_10ab9cbe8(&uStack_320,lVar15 + 0x50,uVar12,&uStack_280,uVar10,
                          uVar10 + (param_11 << 0x20) & 0xffffffff00000000 |
                          (ulong)(uint)(param_10 + (int)param_8),0);
            FUN_10ab9b224(&uStack_2f8,&uStack_320);
            FUN_10ab9ce18(&uStack_320);
          }
          else {
            plVar5 = (long *)(param_5 + 0x50);
            lVar15 = *plVar5;
            if (lVar15 == 0) {
              uVar7 = 0x500;
              __Znwm(0x500);
              FUN_10ab8ed3c();
              func_0x00010abd867c(plVar5,uVar7);
              lVar15 = *plVar5;
            }
            *(undefined4 *)(lVar15 + 0x24) = 0x8d40;
            func_0x00010a3022a4(lVar15 + 0x18);
            FUN_10ab9e3e8(*plVar5,plVar14);
            _glViewport(param_8,param_9,param_10,param_11);
          }
          (**(code **)(**(long **)(param_6 + 0x268) + 0xd8))();
          uStack_280 = (undefined *)CONCAT44(param_4,fVar16);
          uStack_278 = CONCAT44(param_2,fVar16);
          uStack_270 = CONCAT44(param_2,param_3);
          uStack_268 = CONCAT44(param_4,param_3);
          plVar14 = plVar6;
          (**(code **)(*plVar6 + 0x28))();
          plVar5 = plVar6;
          (**(code **)(*plVar6 + 0x30))();
          uStack_320 = CONCAT44((float)((ulong)plVar5 & 0xffffffff),
                                (float)((ulong)plVar14 & 0xffffffff));
          FUN_10ab996d0(0,lVar13,&UNK_10e4fe8a8,4,&uStack_280,4,*(undefined4 *)((long)plVar6 + 0x5c)
                        ,&uStack_320,6,&fStack_2d8);
          if (*(char *)(param_5 + 0x49) == '\x01') {
            uStack_318 = 0;
            uStack_320 = 0;
            uStack_308 = 0;
            uStack_310 = 0;
            FUN_10ab9b224(&uStack_2f8,&uStack_320);
            FUN_10ab9ce18(&uStack_320);
          }
          else {
            lVar13 = *(long *)(param_5 + 0x50);
            func_0x00010a3022f0(lVar13 + 0x18);
            func_0x00010a302418(lVar13 + 0x18);
            *(undefined8 *)(lVar13 + 0x4f8) = 0;
            *(undefined8 *)(lVar13 + 0x4e0) = 0;
            *(undefined8 *)(lVar13 + 0x4d8) = 0;
            *(undefined8 *)(lVar13 + 0x4f0) = 0;
            *(undefined8 *)(lVar13 + 0x4e8) = 0;
            *(undefined8 *)(lVar13 + 0x4c0) = 0;
            *(undefined8 *)(lVar13 + 0x4b8) = 0;
            *(undefined8 *)(lVar13 + 0x4d0) = 0;
            *(undefined8 *)(lVar13 + 0x4c8) = 0;
            *(undefined8 *)(lVar13 + 0x4a0) = 0;
            *(undefined8 *)(lVar13 + 0x498) = 0;
            *(undefined8 *)(lVar13 + 0x4b0) = 0;
            *(undefined8 *)(lVar13 + 0x4a8) = 0;
            *(undefined8 *)(lVar13 + 0x480) = 0;
            *(undefined8 *)(lVar13 + 0x478) = 0;
            *(undefined8 *)(lVar13 + 0x490) = 0;
            *(undefined8 *)(lVar13 + 0x488) = 0;
            *(undefined8 *)(lVar13 + 0x470) = 0;
            *(undefined8 *)(lVar13 + 0x468) = 0;
            func_0x00010a3020b0(*(long *)(param_5 + 0x50) + 0x18);
          }
          FUN_10ab9ce18(&uStack_2f8);
          goto LAB_10ab9e23c;
        }
      }
      FUN_10a0edfc4(&uStack_280);
      goto LAB_10ab9e318;
    }
    puVar8 = &UNK_10f696929;
  }
  else {
    puVar8 = &UNK_10f696909;
  }
  FUN_10a00946c(puVar8);
LAB_10ab9e318:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab9e31c);
  (*pcVar4)();
}



/* Entry: 10ab9e3e8; end: 10ab9e47f;  */

void FUN_10ab9e3e8(long param_1,long param_2,ulong *param_3,float param_4,undefined4 param_5,
                  undefined8 *param_6,int param_7,int param_8)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  bool bVar20;
  int iVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  float fStack_338;
  float fStack_334;
  long lStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  long *plStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 uStack_2b8;
  float fStack_2b0;
  uint uStack_2a8;
  long *plStack_120;
  long *plStack_f8;
  long lStack_c0;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar6 = &puStack_50;
  puStack_50 = &UNK_10f697c07;
  uStack_48 = 0x25;
  if (param_2 != 0) {
    FUN_10ab8ee54(&puStack_50,param_2,0,0,1,0);
    uVar13 = *(uint *)(param_1 + 0x3c);
    if (uVar13 < 2) {
      uVar13 = 1;
    }
    *(uint *)(param_1 + 0x3c) = uVar13;
    *(undefined4 *)(param_1 + 0x41c) = 0x8ce0;
    *(undefined4 *)(param_1 + 0x70) = 0x8ce0;
    *(undefined8 *)(param_1 + 0x48) = uStack_48;
    *(undefined **)(param_1 + 0x40) = puStack_50;
    *(undefined8 *)(param_1 + 0x58) = uStack_38;
    *(undefined8 *)(param_1 + 0x50) = uStack_40;
    *(undefined8 *)(param_1 + 0x68) = uStack_28;
    *(undefined8 *)(param_1 + 0x60) = uStack_30;
    FUN_10a3024c0(param_1 + 0x18,param_1 + 0x40);
    *(long *)(param_1 + 0x468) = param_2;
    return;
  }
  FUN_10a0edfc4();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar16 = *ppuVar7;
  if (((puVar16 != (undefined *)0x0) && (puVar16[0xc0] == '\x01')) &&
     (*(long *)(puVar16 + 0x80) != 0)) {
    FUN_10a08dbac(puVar16 + 0x18);
  }
  plVar8 = (long *)*param_3;
  (**(code **)(*plVar8 + 0x50))();
  uVar13 = 4;
  if (0x26 < (uint)plVar8 - 0x30) {
    uVar13 = (uint)plVar8;
  }
  uVar4 = 4;
  if (uVar13 != 0x26) {
    uVar4 = uVar13;
  }
  uVar9 = (ulong)uVar4;
  FUN_10ad4c0a4();
  if (uVar9 >> 0x20 == 1) {
    cVar2 = (char)puStack_50;
    plVar8 = (long *)*param_3;
    iVar21 = (int)uVar9;
    fStack_2d0 = param_4;
    fStack_2cc = (float)param_5;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8;
      ___dynamic_cast(plVar8,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      plVar11 = plVar8;
      ___dynamic_cast(plVar8,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0);
      if ((*(char *)(param_2 + 100) != '\x01') || (plVar10 == (long *)0x0 && plVar11 == (long *)0x0)
         ) goto LAB_10ab9e708;
      lVar17 = *(long *)(param_2 + 0x68);
      FUN_10a3ca004();
      uVar4 = *(int *)(lVar17 + 0x734) - 2;
      uVar13 = (uint)(0x2040404040203 >> (((ulong)uVar4 & 7) << 3));
      if (6 < uVar4) {
        uVar13 = 4;
      }
      plVar8 = (long *)plVar11[((ulong)uVar13 & 7) + 7];
      if (plVar8 == (long *)0x0) {
        FUN_10a3ca05c();
        plVar8 = (long *)plVar11[((ulong)uVar13 & 7) + 7];
      }
      plVar10 = plVar8;
      FUN_10a244d68();
      plVar11 = plVar10;
      (**(code **)(*plVar10 + 0xe8))();
      lVar17 = plVar11[1];
      __ZNSt3__115recursive_mutex4lockEv(lVar17);
      plVar11 = (long *)*param_3;
      (**(code **)(*plVar11 + 0x50))();
      uVar13 = 4;
      if (0x26 < (uint)plVar11 - 0x30) {
        uVar13 = (uint)plVar11;
      }
      uVar4 = 4;
      if (uVar13 != 0x26) {
        uVar4 = uVar13;
      }
      uVar22 = (ulong)uVar4;
      FUN_10ab79b88();
      uVar13 = 5;
      if ((uint)uVar22 != 1) {
        uVar13 = (uint)uVar22;
      }
      lVar18 = plVar8[0x3c];
      plVar11 = (long *)*param_3;
      (**(code **)(*plVar11 + 0x20))();
      uStack_2b8 = CONCAT44((int)plVar11,(undefined4)uStack_2b8);
      fStack_2b0 = 1.4013e-45;
      fStack_2c8 = 1.4013e-45;
      fStack_2c0 = 7.86128e-43;
      fStack_2bc = 1.4013e-45;
      uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
      fStack_2c4 = (float)uVar4;
      FUN_10a048f04(&lStack_310,lVar18,&fStack_2d0);
      *(undefined1 *)(lStack_310 + 0x19) = 1;
      lVar18 = lStack_310;
      ___dynamic_cast(lStack_310,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      if (lVar18 != 0) {
        uVar22 = (ulong)uVar13;
        if (param_8 != 0) {
          uVar22 = (ulong)*(uint *)(lVar18 + 0x34);
          FUN_10a3158cc();
        }
        if (param_7 != 0) {
          iVar14 = (int)uVar22;
          if ((iVar21 == 1) && (iVar14 == 5)) {
            uVar22 = 1;
          }
          else if ((iVar21 == 5) && (iVar14 == 1)) {
            uVar22 = 5;
          }
          else {
            uVar22 = uVar9;
            if ((iVar21 == 3) && (iVar14 == 4)) {
              uVar22 = 3;
            }
          }
        }
      }
      FUN_10a025e68(&fStack_2d0,&lStack_310,0,0,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*plVar10 + 0x88))(plVar10,&fStack_2d0);
      if (plStack_f8 != (long *)0x0) {
        plVar11 = plStack_f8 + 1;
        do {
          lVar18 = *plVar11;
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar20) {
            *plVar11 = lVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
        }
      }
      if (plStack_120 != (long *)0x0) {
        plVar11 = plStack_120 + 1;
        do {
          lVar18 = *plVar11;
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar20) {
            *plVar11 = lVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_120 + 0x10))(plStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
        }
      }
      func_0x00010a048e34(&fStack_2c8,CONCAT44(fStack_2cc,fStack_2d0));
      fStack_2d0 = 0.0;
      fStack_2cc = 0.0;
      fStack_2c8 = param_4;
      fStack_2c4 = (float)param_5;
      (**(code **)(*plVar10 + 0xc0))(plVar10,&fStack_2d0);
      FUN_10a244c44(plVar8);
      fVar30 = (float)param_6[3];
      fStack_2b0 = *(float *)(param_6 + 4);
      fVar27 = (float)*(undefined8 *)((long)param_6 + 0xc);
      fVar24 = (float)*param_6;
      fStack_2d0 = fVar24 + fVar27 * 0.0 + fVar30 * 0.0;
      fVar28 = (float)param_6[2];
      fVar29 = (float)((ulong)param_6[2] >> 0x20);
      fVar25 = (float)*(undefined8 *)((long)param_6 + 4);
      fVar26 = (float)((ulong)*(undefined8 *)((long)param_6 + 4) >> 0x20);
      fVar23 = (float)((ulong)param_6[3] >> 0x20);
      fStack_2cc = fVar25 + fVar28 * 0.0 + fVar23 * 0.0;
      fStack_2c8 = fVar26 + fVar29 * 0.0 + fStack_2b0 * 0.0;
      fStack_2c4 = -fVar27 + fVar24 * 0.0 + fVar30 * 0.0;
      fStack_2c0 = -(float)((ulong)*(undefined8 *)((long)param_6 + 0xc) >> 0x20) +
                   (float)((ulong)*param_6 >> 0x20) * 0.0 + fVar23 * 0.0;
      fStack_2bc = -fVar29 + fVar26 * 0.0 + fStack_2b0 * 0.0;
      fStack_2b0 = fVar29 + fVar26 * 0.0 + fStack_2b0;
      uStack_2b8 = CONCAT44(fVar28 + fVar25 * 0.0 + *(float *)((long)param_6 + 0x1c),
                            fVar27 + fVar24 * 0.0 + fVar30);
      FUN_10ab11d88();
      (**(code **)(*plVar10 + 0x90))(plVar10,0,3,3);
      plVar8 = plStack_308;
      ppuVar6[1] = (undefined *)0x0;
      *ppuVar6 = (undefined *)0x0;
      ppuVar6[3] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar6 + 4) = 0xffffffff;
      fStack_2d0 = (float)lStack_310;
      fStack_2cc = (float)((ulong)lStack_310 >> 0x20);
      if (plStack_308 == (long *)0x0) {
        fStack_2c8 = 0.0;
        fStack_2c4 = 0.0;
        lVar18 = lStack_310;
LAB_10ab9edbc:
        lStack_330 = 0;
        if (lVar18 != 0) {
          lStack_330 = lVar18 + 0x40;
        }
        plStack_328 = (long *)0x0;
        bVar20 = true;
      }
      else {
        plVar10 = plStack_308 + 1;
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        fStack_2c8 = SUB84(plStack_308,0);
        fStack_2c4 = (float)((ulong)plStack_308 >> 0x20);
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        do {
          lVar18 = *plVar10;
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = lVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
        lVar18 = CONCAT44(fStack_2cc,fStack_2d0);
        plStack_328 = (long *)CONCAT44(fStack_2c4,fStack_2c8);
        if (plStack_328 == (long *)0x0) goto LAB_10ab9edbc;
        plVar8 = plStack_328 + 1;
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar20) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lStack_330 = 0;
        if (lVar18 != 0) {
          lStack_330 = lVar18 + 0x40;
        }
        do {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar20) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        bVar20 = false;
      }
      plVar8 = plStack_328;
      func_0x00010a099dfc(ppuVar6,&lStack_330);
      plVar10 = plStack_328;
      if (plStack_328 != (long *)0x0) {
        plVar11 = plStack_328 + 1;
        do {
          lVar18 = *plVar11;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_328 + 0x10))(plStack_328);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (!bVar20) {
        plVar10 = plVar8 + 1;
        do {
          lVar18 = *plVar10;
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = lVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      *(int *)(ppuVar6 + 4) = (int)uVar22;
      if (cVar2 != '\0') {
        FUN_10abd9668(&lStack_330,*ppuVar6,uVar22);
        func_0x00010a74eb88(ppuVar6 + 2,&lStack_330);
        plVar8 = plStack_328;
        if (plStack_328 != (long *)0x0) {
          plVar10 = plStack_328 + 1;
          do {
            lVar18 = *plVar10;
            cVar2 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar20) {
              *plVar10 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      plVar8 = (long *)CONCAT44(fStack_2c4,fStack_2c8);
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 1;
        do {
          lVar18 = *plVar10;
          cVar2 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_308;
      if (plStack_308 != (long *)0x0) {
        plVar10 = plStack_308 + 1;
        do {
          lVar18 = *plVar10;
          cVar2 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      __ZNSt3__115recursive_mutex6unlockEv(lVar17);
LAB_10ab9ef20:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
        return;
      }
      goto LAB_10ab9ef64;
    }
LAB_10ab9e708:
    FUN_10a30f97c();
    FUN_10a30fb38(&lStack_2e0);
    if (param_8 == 0) {
      iVar14 = *(int *)(lStack_2e0 + 0x4c);
    }
    else {
      iVar14 = *(int *)(lStack_2e0 + 0x34);
      FUN_10a3158cc();
    }
    if (param_7 == 0) {
      bVar20 = false;
    }
    else if (((iVar21 == 1 && iVar14 == 5) || (iVar21 == 5 && iVar14 == 1)) ||
            (iVar21 == 3 && iVar14 == 4)) {
      bVar20 = true;
      iVar14 = iVar21;
    }
    else {
      bVar20 = iVar21 == 4 && iVar14 == 3;
      iVar14 = iVar21;
    }
    plVar11 = (long *)0x1;
    FUN_10a303694();
    FUN_10a303840();
    plVar10 = &lStack_2e0;
    FUN_10ab91954(plVar10,0);
    plVar12 = (long *)0x20;
    plStack_2f0 = plVar10;
    __Znwm();
    *plVar12 = (long)&PTR_FUN_110c53300;
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[3] = (long)plVar10;
    lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x40) + 0x100) + 0x260);
    fStack_2d0 = 1.1302151e-29;
    fStack_2cc = 1.4013e-45;
    fStack_2c8 = 4.62428e-44;
    fStack_2c4 = 0.0;
    plStack_2e8 = plVar12;
    if (lVar17 != 0) {
      if (bVar20) {
        FUN_10a244ab8();
      }
      else {
        FUN_10a24489c();
      }
      FUN_10a5bbc70(plVar11);
      lVar18 = *(long *)(*plVar11 + 0x10);
      fStack_2d0 = 1.12078545e-29;
      fStack_2cc = 1.4013e-45;
      fStack_2c8 = 6.02558e-44;
      fStack_2c4 = 0.0;
      if (lVar18 == 0) {
        FUN_10a0edfc4(&fStack_2d0);
        goto LAB_10ab9ef7c;
      }
      lStack_310 = 0;
      plStack_308 = (long *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      if (*(char *)(param_2 + 0x49) == '\x01') {
        uVar19 = *(undefined8 *)(lStack_2e0 + 0x18);
        FUN_10ab9c9b0(&fStack_2d0,plVar10,0,0);
        uVar15 = 0x8ca9;
        if (uStack_2a8 < 2) {
          uVar15 = 0x8d40;
        }
        FUN_10ab9cbe8(&lStack_330,lVar18 + 0x50,uVar15,&fStack_2d0,0,uVar19,0);
        FUN_10ab9b224(&lStack_310,&lStack_330);
        FUN_10ab9ce18(&lStack_330);
      }
      else {
        plVar11 = (long *)(param_2 + 0x50);
        lVar18 = *plVar11;
        if (lVar18 == 0) {
          uVar19 = 0x500;
          __Znwm(0x500);
          FUN_10ab8ed3c();
          func_0x00010abd867c(plVar11,uVar19);
          lVar18 = *plVar11;
        }
        *(undefined4 *)(lVar18 + 0x24) = 0x8d40;
        func_0x00010a3022a4(lVar18 + 0x18);
        FUN_10ab9e3e8(*plVar11,plVar10);
        _glViewport(0,0,*(undefined4 *)(lStack_2e0 + 0x18),*(undefined4 *)(lStack_2e0 + 0x1c));
      }
      fStack_2c8 = -1.0;
      fStack_2c4 = -1.0;
      fStack_2d0 = -1.0;
      fStack_2cc = 1.0;
      uStack_2b8 = 0x3f8000003f800000;
      fStack_2c0 = 1.0;
      fStack_2bc = -1.0;
      plStack_328 = (long *)0x3f80000000000000;
      lStack_330 = 0;
      uStack_318 = 0x3f800000;
      uStack_320 = 0x3f8000003f800000;
      plVar10 = plVar8;
      (**(code **)(*plVar8 + 0x28))();
      plVar11 = plVar8;
      (**(code **)(*plVar8 + 0x30))();
      fStack_338 = (float)((ulong)plVar10 & 0xffffffff);
      fStack_334 = (float)((ulong)plVar11 & 0xffffffff);
      FUN_10ab996d0(0,lVar17,&fStack_2d0,4,&lStack_330,4,*(undefined4 *)((long)plVar8 + 0x5c),
                    &fStack_338,6,param_6);
      ppuVar6[1] = (undefined *)0x0;
      *ppuVar6 = (undefined *)0x0;
      ppuVar6[3] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar6 + 4) = 0xffffffff;
      FUN_10a225fb4(ppuVar6,&lStack_2e0);
      *(int *)(ppuVar6 + 4) = iVar14;
      if (cVar2 != '\0') {
        FUN_10abd9668(&uStack_360,*ppuVar6,iVar14);
        func_0x00010a74eb88(ppuVar6 + 2,&uStack_360);
        plVar8 = plStack_358;
        if (plStack_358 != (long *)0x0) {
          plVar10 = plStack_358 + 1;
          do {
            lVar17 = *plVar10;
            cVar2 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar20) {
              *plVar10 = lVar17 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_358 + 0x10))(plStack_358);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      if (*(char *)(param_2 + 0x49) == '\x01') {
        plStack_358 = (long *)0x0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        FUN_10ab9b224(&lStack_310,&uStack_360);
        FUN_10ab9ce18(&uStack_360);
      }
      else {
        lVar17 = *(long *)(param_2 + 0x50);
        func_0x00010a3022f0(lVar17 + 0x18);
        func_0x00010a302418(lVar17 + 0x18);
        *(undefined8 *)(lVar17 + 0x4f8) = 0;
        *(undefined8 *)(lVar17 + 0x4e0) = 0;
        *(undefined8 *)(lVar17 + 0x4d8) = 0;
        *(undefined8 *)(lVar17 + 0x4f0) = 0;
        *(undefined8 *)(lVar17 + 0x4e8) = 0;
        *(undefined8 *)(lVar17 + 0x4c0) = 0;
        *(undefined8 *)(lVar17 + 0x4b8) = 0;
        *(undefined8 *)(lVar17 + 0x4d0) = 0;
        *(undefined8 *)(lVar17 + 0x4c8) = 0;
        *(undefined8 *)(lVar17 + 0x4a0) = 0;
        *(undefined8 *)(lVar17 + 0x498) = 0;
        *(undefined8 *)(lVar17 + 0x4b0) = 0;
        *(undefined8 *)(lVar17 + 0x4a8) = 0;
        *(undefined8 *)(lVar17 + 0x480) = 0;
        *(undefined8 *)(lVar17 + 0x478) = 0;
        *(undefined8 *)(lVar17 + 0x490) = 0;
        *(undefined8 *)(lVar17 + 0x488) = 0;
        *(undefined8 *)(lVar17 + 0x470) = 0;
        *(undefined8 *)(lVar17 + 0x468) = 0;
        func_0x00010a3020b0(*(long *)(param_2 + 0x50) + 0x18);
      }
      FUN_10ab9ce18(&lStack_310);
      plVar8 = plStack_2e8;
      if (plStack_2e8 != (long *)0x0) {
        plVar10 = plStack_2e8 + 1;
        do {
          lVar17 = *plVar10;
          cVar2 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar20) {
            *plVar10 = lVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_2d8 != (long *)0x0) {
        plVar8 = plStack_2d8 + 1;
        do {
          lVar17 = *plVar8;
          cVar2 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar20) {
            *plVar8 = lVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d8);
        }
      }
      goto LAB_10ab9ef20;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f696947);
LAB_10ab9ef64:
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&fStack_2d0);
LAB_10ab9ef7c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab9ef80);
  (*pcVar5)();
}



/* Entry: 10ab9e480; end: 10ab9f0af;  */

void FUN_10ab9e480(undefined8 *param_1,long param_2,ulong *param_3,float param_4,undefined4 param_5,
                  undefined8 *param_6,int param_7,int param_8,char param_9)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  float fStack_2e8;
  float fStack_2e4;
  long lStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long lStack_290;
  long *plStack_288;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  float fStack_260;
  uint uStack_258;
  long *plStack_d0;
  long *plStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar14 = *ppuVar5;
  if (((puVar14 != (undefined *)0x0) && (puVar14[0xc0] == '\x01')) &&
     (*(long *)(puVar14 + 0x80) != 0)) {
    FUN_10a08dbac(puVar14 + 0x18);
  }
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x50))();
  uVar11 = 4;
  if (0x26 < (uint)plVar6 - 0x30) {
    uVar11 = (uint)plVar6;
  }
  uVar3 = 4;
  if (uVar11 != 0x26) {
    uVar3 = uVar11;
  }
  uVar7 = (ulong)uVar3;
  FUN_10ad4c0a4();
  if (uVar7 >> 0x20 == 1) {
    plVar6 = (long *)*param_3;
    iVar19 = (int)uVar7;
    fStack_280 = param_4;
    fStack_27c = (float)param_5;
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6;
      ___dynamic_cast(plVar6,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      plVar9 = plVar6;
      ___dynamic_cast(plVar6,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0);
      if ((*(char *)(param_2 + 100) != '\x01') || (plVar8 == (long *)0x0 && plVar9 == (long *)0x0))
      goto LAB_10ab9e708;
      lVar15 = *(long *)(param_2 + 0x68);
      FUN_10a3ca004();
      uVar3 = *(int *)(lVar15 + 0x734) - 2;
      uVar11 = (uint)(0x2040404040203 >> (((ulong)uVar3 & 7) << 3));
      if (6 < uVar3) {
        uVar11 = 4;
      }
      plVar6 = (long *)plVar9[((ulong)uVar11 & 7) + 7];
      if (plVar6 == (long *)0x0) {
        FUN_10a3ca05c();
        plVar6 = (long *)plVar9[((ulong)uVar11 & 7) + 7];
      }
      plVar8 = plVar6;
      FUN_10a244d68();
      plVar9 = plVar8;
      (**(code **)(*plVar8 + 0xe8))();
      lVar15 = plVar9[1];
      __ZNSt3__115recursive_mutex4lockEv(lVar15);
      plVar9 = (long *)*param_3;
      (**(code **)(*plVar9 + 0x50))();
      uVar11 = 4;
      if (0x26 < (uint)plVar9 - 0x30) {
        uVar11 = (uint)plVar9;
      }
      uVar3 = 4;
      if (uVar11 != 0x26) {
        uVar3 = uVar11;
      }
      uVar20 = (ulong)uVar3;
      FUN_10ab79b88();
      uVar11 = 5;
      if ((uint)uVar20 != 1) {
        uVar11 = (uint)uVar20;
      }
      lVar16 = plVar6[0x3c];
      plVar9 = (long *)*param_3;
      (**(code **)(*plVar9 + 0x20))();
      uStack_268 = CONCAT44((int)plVar9,(undefined4)uStack_268);
      fStack_260 = 1.4013e-45;
      fStack_278 = 1.4013e-45;
      fStack_270 = 7.86128e-43;
      fStack_26c = 1.4013e-45;
      uStack_268 = uStack_268 & 0xffffffffffffff00;
      fStack_274 = (float)uVar3;
      FUN_10a048f04(&lStack_2c0,lVar16,&fStack_280);
      *(undefined1 *)(lStack_2c0 + 0x19) = 1;
      lVar16 = lStack_2c0;
      ___dynamic_cast(lStack_2c0,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      if (lVar16 != 0) {
        uVar20 = (ulong)uVar11;
        if (param_8 != 0) {
          uVar20 = (ulong)*(uint *)(lVar16 + 0x34);
          FUN_10a3158cc();
        }
        if (param_7 != 0) {
          iVar12 = (int)uVar20;
          if ((iVar19 == 1) && (iVar12 == 5)) {
            uVar20 = 1;
          }
          else if ((iVar19 == 5) && (iVar12 == 1)) {
            uVar20 = 5;
          }
          else {
            uVar20 = uVar7;
            if ((iVar19 == 3) && (iVar12 == 4)) {
              uVar20 = 3;
            }
          }
        }
      }
      FUN_10a025e68(&fStack_280,&lStack_2c0,0,0,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*plVar8 + 0x88))(plVar8,&fStack_280);
      if (plStack_a8 != (long *)0x0) {
        plVar9 = plStack_a8 + 1;
        do {
          lVar16 = *plVar9;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar18) {
            *plVar9 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
      if (plStack_d0 != (long *)0x0) {
        plVar9 = plStack_d0 + 1;
        do {
          lVar16 = *plVar9;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar18) {
            *plVar9 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
        }
      }
      func_0x00010a048e34(&fStack_278,CONCAT44(fStack_27c,fStack_280));
      fStack_280 = 0.0;
      fStack_27c = 0.0;
      fStack_278 = param_4;
      fStack_274 = (float)param_5;
      (**(code **)(*plVar8 + 0xc0))(plVar8,&fStack_280);
      FUN_10a244c44(plVar6);
      fVar28 = (float)param_6[3];
      fStack_260 = *(float *)(param_6 + 4);
      fVar25 = (float)*(undefined8 *)((long)param_6 + 0xc);
      fVar22 = (float)*param_6;
      fStack_280 = fVar22 + fVar25 * 0.0 + fVar28 * 0.0;
      fVar26 = (float)param_6[2];
      fVar27 = (float)((ulong)param_6[2] >> 0x20);
      fVar23 = (float)*(undefined8 *)((long)param_6 + 4);
      fVar24 = (float)((ulong)*(undefined8 *)((long)param_6 + 4) >> 0x20);
      fVar21 = (float)((ulong)param_6[3] >> 0x20);
      fStack_27c = fVar23 + fVar26 * 0.0 + fVar21 * 0.0;
      fStack_278 = fVar24 + fVar27 * 0.0 + fStack_260 * 0.0;
      fStack_274 = -fVar25 + fVar22 * 0.0 + fVar28 * 0.0;
      fStack_270 = -(float)((ulong)*(undefined8 *)((long)param_6 + 0xc) >> 0x20) +
                   (float)((ulong)*param_6 >> 0x20) * 0.0 + fVar21 * 0.0;
      fStack_26c = -fVar27 + fVar24 * 0.0 + fStack_260 * 0.0;
      fStack_260 = fVar27 + fVar24 * 0.0 + fStack_260;
      uStack_268 = CONCAT44(fVar26 + fVar23 * 0.0 + *(float *)((long)param_6 + 0x1c),
                            fVar25 + fVar22 * 0.0 + fVar28);
      FUN_10ab11d88();
      (**(code **)(*plVar8 + 0x90))(plVar8,0,3,3);
      plVar6 = plStack_2b8;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      fStack_280 = (float)lStack_2c0;
      fStack_27c = (float)((ulong)lStack_2c0 >> 0x20);
      if (plStack_2b8 == (long *)0x0) {
        fStack_278 = 0.0;
        fStack_274 = 0.0;
        lVar16 = lStack_2c0;
LAB_10ab9edbc:
        lStack_2e0 = 0;
        if (lVar16 != 0) {
          lStack_2e0 = lVar16 + 0x40;
        }
        plStack_2d8 = (long *)0x0;
        bVar18 = true;
      }
      else {
        plVar8 = plStack_2b8 + 1;
        do {
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        fStack_278 = SUB84(plStack_2b8,0);
        fStack_274 = (float)((ulong)plStack_2b8 >> 0x20);
        do {
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        do {
          lVar16 = *plVar8;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
        lVar16 = CONCAT44(fStack_27c,fStack_280);
        plStack_2d8 = (long *)CONCAT44(fStack_274,fStack_278);
        if (plStack_2d8 == (long *)0x0) goto LAB_10ab9edbc;
        plVar6 = plStack_2d8 + 1;
        do {
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar18) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lStack_2e0 = 0;
        if (lVar16 != 0) {
          lStack_2e0 = lVar16 + 0x40;
        }
        do {
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar18) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        bVar18 = false;
      }
      plVar6 = plStack_2d8;
      func_0x00010a099dfc(param_1,&lStack_2e0);
      plVar8 = plStack_2d8;
      if (plStack_2d8 != (long *)0x0) {
        plVar9 = plStack_2d8 + 1;
        do {
          lVar16 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (!bVar18) {
        plVar8 = plVar6 + 1;
        do {
          lVar16 = *plVar8;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      *(int *)(param_1 + 4) = (int)uVar20;
      if (param_9 != '\0') {
        FUN_10abd9668(&lStack_2e0,*param_1,uVar20);
        func_0x00010a74eb88(param_1 + 2,&lStack_2e0);
        plVar6 = plStack_2d8;
        if (plStack_2d8 != (long *)0x0) {
          plVar8 = plStack_2d8 + 1;
          do {
            lVar16 = *plVar8;
            cVar1 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar18) {
              *plVar8 = lVar16 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plVar6 = (long *)CONCAT44(fStack_274,fStack_278);
      if (plVar6 != (long *)0x0) {
        plVar8 = plVar6 + 1;
        do {
          lVar16 = *plVar8;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_2b8;
      if (plStack_2b8 != (long *)0x0) {
        plVar8 = plStack_2b8 + 1;
        do {
          lVar16 = *plVar8;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      __ZNSt3__115recursive_mutex6unlockEv(lVar15);
LAB_10ab9ef20:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      goto LAB_10ab9ef64;
    }
LAB_10ab9e708:
    FUN_10a30f97c();
    FUN_10a30fb38(&lStack_290);
    if (param_8 == 0) {
      iVar12 = *(int *)(lStack_290 + 0x4c);
    }
    else {
      iVar12 = *(int *)(lStack_290 + 0x34);
      FUN_10a3158cc();
    }
    if (param_7 == 0) {
      bVar18 = false;
    }
    else if (((iVar19 == 1 && iVar12 == 5) || (iVar19 == 5 && iVar12 == 1)) ||
            (iVar19 == 3 && iVar12 == 4)) {
      bVar18 = true;
      iVar12 = iVar19;
    }
    else {
      bVar18 = iVar19 == 4 && iVar12 == 3;
      iVar12 = iVar19;
    }
    plVar9 = (long *)0x1;
    FUN_10a303694();
    FUN_10a303840();
    plVar8 = &lStack_290;
    FUN_10ab91954(plVar8,0);
    plVar10 = (long *)0x20;
    plStack_2a0 = plVar8;
    __Znwm();
    *plVar10 = (long)&PTR_FUN_110c53300;
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar8;
    lVar15 = *(long *)(*(long *)(*(long *)(param_2 + 0x40) + 0x100) + 0x260);
    fStack_280 = 1.1302151e-29;
    fStack_27c = 1.4013e-45;
    fStack_278 = 4.62428e-44;
    fStack_274 = 0.0;
    plStack_298 = plVar10;
    if (lVar15 != 0) {
      if (bVar18) {
        FUN_10a244ab8();
      }
      else {
        FUN_10a24489c();
      }
      FUN_10a5bbc70(plVar9);
      lVar16 = *(long *)(*plVar9 + 0x10);
      fStack_280 = 1.12078545e-29;
      fStack_27c = 1.4013e-45;
      fStack_278 = 6.02558e-44;
      fStack_274 = 0.0;
      if (lVar16 == 0) {
        FUN_10a0edfc4(&fStack_280);
        goto LAB_10ab9ef7c;
      }
      lStack_2c0 = 0;
      plStack_2b8 = (long *)0x0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      if (*(char *)(param_2 + 0x49) == '\x01') {
        uVar17 = *(undefined8 *)(lStack_290 + 0x18);
        FUN_10ab9c9b0(&fStack_280,plVar8,0,0);
        uVar13 = 0x8ca9;
        if (uStack_258 < 2) {
          uVar13 = 0x8d40;
        }
        FUN_10ab9cbe8(&lStack_2e0,lVar16 + 0x50,uVar13,&fStack_280,0,uVar17,0);
        FUN_10ab9b224(&lStack_2c0,&lStack_2e0);
        FUN_10ab9ce18(&lStack_2e0);
      }
      else {
        plVar9 = (long *)(param_2 + 0x50);
        lVar16 = *plVar9;
        if (lVar16 == 0) {
          uVar17 = 0x500;
          __Znwm(0x500);
          FUN_10ab8ed3c();
          func_0x00010abd867c(plVar9,uVar17);
          lVar16 = *plVar9;
        }
        *(undefined4 *)(lVar16 + 0x24) = 0x8d40;
        func_0x00010a3022a4(lVar16 + 0x18);
        FUN_10ab9e3e8(*plVar9,plVar8);
        _glViewport(0,0,*(undefined4 *)(lStack_290 + 0x18),*(undefined4 *)(lStack_290 + 0x1c));
      }
      fStack_278 = -1.0;
      fStack_274 = -1.0;
      fStack_280 = -1.0;
      fStack_27c = 1.0;
      uStack_268 = 0x3f8000003f800000;
      fStack_270 = 1.0;
      fStack_26c = -1.0;
      plStack_2d8 = (long *)0x3f80000000000000;
      lStack_2e0 = 0;
      uStack_2c8 = 0x3f800000;
      uStack_2d0 = 0x3f8000003f800000;
      plVar8 = plVar6;
      (**(code **)(*plVar6 + 0x28))();
      plVar9 = plVar6;
      (**(code **)(*plVar6 + 0x30))();
      fStack_2e8 = (float)((ulong)plVar8 & 0xffffffff);
      fStack_2e4 = (float)((ulong)plVar9 & 0xffffffff);
      FUN_10ab996d0(0,lVar15,&fStack_280,4,&lStack_2e0,4,*(undefined4 *)((long)plVar6 + 0x5c),
                    &fStack_2e8,6,param_6);
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      FUN_10a225fb4(param_1,&lStack_290);
      *(int *)(param_1 + 4) = iVar12;
      if (param_9 != '\0') {
        FUN_10abd9668(&uStack_310,*param_1,iVar12);
        func_0x00010a74eb88(param_1 + 2,&uStack_310);
        plVar6 = plStack_308;
        if (plStack_308 != (long *)0x0) {
          plVar8 = plStack_308 + 1;
          do {
            lVar15 = *plVar8;
            cVar1 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar18) {
              *plVar8 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_308 + 0x10))(plStack_308);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      if (*(char *)(param_2 + 0x49) == '\x01') {
        plStack_308 = (long *)0x0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        FUN_10ab9b224(&lStack_2c0,&uStack_310);
        FUN_10ab9ce18(&uStack_310);
      }
      else {
        lVar15 = *(long *)(param_2 + 0x50);
        func_0x00010a3022f0(lVar15 + 0x18);
        func_0x00010a302418(lVar15 + 0x18);
        *(undefined8 *)(lVar15 + 0x4f8) = 0;
        *(undefined8 *)(lVar15 + 0x4e0) = 0;
        *(undefined8 *)(lVar15 + 0x4d8) = 0;
        *(undefined8 *)(lVar15 + 0x4f0) = 0;
        *(undefined8 *)(lVar15 + 0x4e8) = 0;
        *(undefined8 *)(lVar15 + 0x4c0) = 0;
        *(undefined8 *)(lVar15 + 0x4b8) = 0;
        *(undefined8 *)(lVar15 + 0x4d0) = 0;
        *(undefined8 *)(lVar15 + 0x4c8) = 0;
        *(undefined8 *)(lVar15 + 0x4a0) = 0;
        *(undefined8 *)(lVar15 + 0x498) = 0;
        *(undefined8 *)(lVar15 + 0x4b0) = 0;
        *(undefined8 *)(lVar15 + 0x4a8) = 0;
        *(undefined8 *)(lVar15 + 0x480) = 0;
        *(undefined8 *)(lVar15 + 0x478) = 0;
        *(undefined8 *)(lVar15 + 0x490) = 0;
        *(undefined8 *)(lVar15 + 0x488) = 0;
        *(undefined8 *)(lVar15 + 0x470) = 0;
        *(undefined8 *)(lVar15 + 0x468) = 0;
        func_0x00010a3020b0(*(long *)(param_2 + 0x50) + 0x18);
      }
      FUN_10ab9ce18(&lStack_2c0);
      plVar6 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar8 = plStack_298 + 1;
        do {
          lVar15 = *plVar8;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar18) {
            *plVar8 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (plStack_288 != (long *)0x0) {
        plVar6 = plStack_288 + 1;
        do {
          lVar15 = *plVar6;
          cVar1 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar18) {
            *plVar6 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_288 + 0x10))(plStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_288);
        }
      }
      goto LAB_10ab9ef20;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f696947);
LAB_10ab9ef64:
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&fStack_280);
LAB_10ab9ef7c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab9ef80);
  (*pcVar4)();
}



/* Entry: 10ab9f0b0; end: 10ab9f193;  */

void FUN_10ab9f0b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  FUN_10ab9e480(auStack_48,param_2,param_3,param_4,param_5,param_6,param_7,0,1);
  param_1[1] = plStack_30;
  *param_1 = uStack_38;
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 10ab9f194; end: 10ab9f54b;  */

undefined **
FUN_10ab9f194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined **appuStack_a8 [2];
  undefined **ppuStack_98;
  undefined4 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10a00946c(&UNK_10f696980);
  }
  else if ((*(byte *)(param_7[1] + 8) & 1) != 0) {
    unaff_x27 = *(long *)(param_1 + 0x58);
    if (unaff_x27 == 0) {
      unaff_x27 = 0x88;
      __Znwm();
      unaff_x28 = &uStack_b0;
      uStack_b0 = 0x10abd9744;
      appuStack_a8[0] = &PTR_DAT_110c53368;
      FUN_10a31350c();
      (*(code *)*appuStack_a8[0])(appuStack_a8);
      plVar4 = *(long **)(param_1 + 0x58);
      *(long *)(param_1 + 0x58) = unaff_x27;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
        unaff_x27 = *(long *)(param_1 + 0x58);
      }
    }
    FUN_10ab9e480(&uStack_b0,param_1,param_2,param_3,param_4,param_5,param_6,
                  *(undefined1 *)(unaff_x27 + 0x80),0);
    ppuVar5 = (undefined **)0x58;
    __Znwm();
    ppuVar10 = ppuVar5 + 1;
    *ppuVar10 = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    ppuVar9 = ppuVar5 + 3;
    *ppuVar9 = (undefined *)*param_7;
    *ppuVar5 = (undefined *)&PTR_DAT_110c53398;
    ppuVar5[6] = (undefined *)0x0;
    ppuVar5[5] = (undefined *)0x0;
    ppuVar5[8] = (undefined *)0x0;
    ppuVar5[7] = (undefined *)0x0;
    ppuVar5[10] = (undefined *)0x0;
    ppuVar5[9] = (undefined *)0x0;
    ppuVar5[4] = (undefined *)&PTR_DAT_110950c70;
    ppuStack_c0 = ppuVar9;
    ppuStack_b8 = ppuVar5;
    func_0x0001092b2a94(ppuVar5 + 4,param_7 + 1);
    ppuVar6 = *(undefined ***)(param_1 + 0x58);
    ppuStack_c8 = appuStack_a8[0];
    uStack_d0 = uStack_b0;
    if (appuStack_a8[0] != (undefined **)0x0) {
      ppuVar1 = appuStack_a8[0] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar3) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_e0 = ppuVar9;
    ppuStack_d8 = ppuVar5;
    FUN_10a313f9c(ppuVar6,&uStack_d0,&ppuStack_e0,uStack_90);
    ppuVar5 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_d8 + 1;
      do {
        puVar8 = *ppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar3) {
          *ppuVar9 = puVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar6 = ppuVar5;
      }
    }
    ppuVar5 = ppuStack_c8;
    if (ppuStack_c8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_c8 + 1;
      do {
        puVar8 = *ppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar3) {
          *ppuVar9 = puVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar6 = ppuVar5;
      }
    }
    iVar7 = *(int *)(param_1 + 0x60);
    if (iVar7 == 0) {
      FUN_10a5ae998(*(undefined8 *)(param_1 + 0x28),&PTR_DAT_110b9f988,
                    *(undefined8 *)(param_1 + 0x40),param_1 + 0x20);
      ppuVar6 = *(undefined ***)(param_1 + 8);
      FUN_10a5ae998(ppuVar6,&PTR_DAT_110b9fab0,*(undefined8 *)(param_1 + 0x40),param_1);
      iVar7 = *(int *)(param_1 + 0x60);
    }
    ppuVar5 = ppuStack_b8;
    *(int *)(param_1 + 0x60) = iVar7 + 1;
    if (ppuStack_b8 != (undefined **)0x0) {
      ppuVar9 = ppuStack_b8 + 1;
      do {
        puVar8 = *ppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar3) {
          *ppuVar9 = puVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar6 = ppuVar5;
      }
    }
    if (ppuStack_98 != (undefined **)0x0) {
      ppuVar5 = ppuStack_98 + 1;
      do {
        puVar8 = *ppuVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar3) {
          *ppuVar5 = puVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar6 = ppuStack_98;
      }
    }
    ppuVar5 = appuStack_a8[0];
    if (appuStack_a8[0] != (undefined **)0x0) {
      ppuVar9 = appuStack_a8[0] + 1;
      do {
        puVar8 = *ppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar3) {
          *ppuVar9 = puVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*appuStack_a8[0] + 0x10))(appuStack_a8[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar6 = ppuVar5;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return ppuVar6;
    }
    goto LAB_10ab9f4d8;
  }
  ppuVar6 = (undefined **)&UNK_10f6969b9;
  FUN_10a00946c();
LAB_10ab9f4d8:
  ___stack_chk_fail();
  (*(code *)*appuStack_a8[0])(unaff_x28 + 1);
  __ZdlPv(unaff_x27);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar6 + 100) != '\x01') {
    return (undefined **)0x0;
  }
  return (undefined **)(ulong)(byte)ppuVar6[0xd][0x4e];
}



/* Entry: 10ab9f54c; end: 10ab9f56b;  */

undefined1 FUN_10ab9f54c(long param_1)

{
  if (*(char *)(param_1 + 100) == '\x01') {
    return *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x4e);
  }
  return 0;
}



/* Entry: 10ab9f56c; end: 10ab9f5e7;  */

long FUN_10ab9f56c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + 100) != '\x01') ||
     (uVar1 = *(uint *)(*(long *)(param_1 + 0x68) + 0x734), lVar3 = 1,
     8 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x10cU) == 0)) {
    lVar3 = 1;
    lVar2 = 1;
    FUN_10a303694();
    if (*(int *)(lVar2 + 0x1f0) < 3000) {
      if ((*(byte *)(lVar2 + 0x20b) & 1) == 0) {
        lVar3 = (ulong)*(byte *)(lVar2 + 0x20c) << 1;
      }
      else {
        lVar3 = 2;
      }
    }
  }
  return lVar3;
}



/* Entry: 10ab9f5e8; end: 10ab9f5ff;  */

undefined4 FUN_10ab9f5e8(long param_1)

{
  FUN_10ad4ae18();
  return *(undefined4 *)(param_1 + 0x40);
}



/* Entry: 10ab9f600; end: 10ab9f667;  */

void FUN_10ab9f600(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  long *plStack_78;
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar7 = 1;
    FUN_10ab9f668();
    FUN_10a3136dc(*(undefined8 *)(param_1 + 0x58));
    plVar5 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      puVar6 = &UNK_10f6969e4;
      FUN_10a00946c();
      FUN_10a313790((float)*(double *)(*(long *)(*(long *)(puVar6 + 0x40) + 0x850) + 0x10),
                    *(undefined8 *)(puVar6 + 0x58),0);
      if (iVar7 != 0) {
        FUN_10a313748(*(undefined8 *)(puVar6 + 0x58));
      }
      lVar8 = *(long *)(*(long *)(puVar6 + 0x58) + 0x78);
      do {
        if (lVar8 == 0) {
          if (*(int *)(puVar6 + 0x60) == 0) {
            FUN_10a5ae930(*(undefined8 *)(puVar6 + 0x28));
            FUN_10a5ae930(*(undefined8 *)(puVar6 + 8));
          }
          return;
        }
        FUN_10a314098(&uStack_b0);
        plVar5 = plStack_98;
        if ((bStack_90 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f696a1b,&UNK_10f696a4a,0x209,&UNK_10f696a90);
          }
        }
        else {
          if (plStack_98 != (long *)0x0) {
            plVar1 = plStack_98 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((bStack_90 & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10ab9f8a4);
              (*pcVar9)();
            }
          }
          pcVar9 = (code *)*puStack_a0;
          plStack_78 = plStack_a8;
          uStack_80 = uStack_b0;
          if (plStack_a8 != (long *)0x0) {
            plVar1 = plStack_a8 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          (*pcVar9)(&uStack_80);
          plVar1 = plStack_78;
          if (plStack_78 != (long *)0x0) {
            plVar2 = plStack_78 + 1;
            do {
              lVar8 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          *(int *)(puVar6 + 0x60) = *(int *)(puVar6 + 0x60) + -1;
          if (plVar5 != (long *)0x0) {
            plVar1 = plVar5 + 1;
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
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        plVar5 = plStack_98;
        if (bStack_90 == 1) {
          if (plStack_98 != (long *)0x0) {
            plVar1 = plStack_98 + 1;
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
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          plVar5 = plStack_a8;
          if (plStack_a8 != (long *)0x0) {
            plVar1 = plStack_a8 + 1;
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
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        lVar8 = *(long *)(*(long *)(puVar6 + 0x58) + 0x78);
      } while( true );
    }
  }
  return;
}



/* Entry: 10ab9f668; end: 10ab9f8cf;  */

void FUN_10ab9f668(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  byte bStack_70;
  undefined8 uStack_60;
  long *plStack_58;
  
  FUN_10a313790((float)*(double *)(*(long *)(*(long *)(param_1 + 0x40) + 0x850) + 0x10),
                *(undefined8 *)(param_1 + 0x58),0);
  if (param_2 != 0) {
    FUN_10a313748(*(undefined8 *)(param_1 + 0x58));
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x78);
  do {
    if (lVar6 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_10a5ae930(*(undefined8 *)(param_1 + 0x28));
        FUN_10a5ae930(*(undefined8 *)(param_1 + 8));
      }
      return;
    }
    FUN_10a314098(&uStack_90);
    plVar5 = plStack_78;
    if ((bStack_70 & 1) == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f696a1b,&UNK_10f696a4a,0x209,&UNK_10f696a90);
      }
    }
    else {
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((bStack_70 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab9f8a4);
          (*pcVar7)();
        }
      }
      pcVar7 = (code *)*puStack_80;
      plStack_58 = plStack_88;
      uStack_60 = uStack_90;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar7)(&uStack_60);
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    plVar5 = plStack_78;
    if (bStack_70 == 1) {
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x78);
  } while( true );
}



/* Entry: 10ab9f8d0; end: 10ab9f8f7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab9f6ac) */

void FUN_10ab9f8d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  byte bStack_70;
  undefined8 uStack_60;
  long *plStack_58;
  
  FUN_10a313790((float)*(double *)(*(long *)(*(long *)(param_1 + 0x40) + 0x850) + 0x10),
                *(undefined8 *)(param_1 + 0x58),0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x78);
  do {
    if (lVar6 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_10a5ae930(*(undefined8 *)(param_1 + 0x28));
        FUN_10a5ae930(*(undefined8 *)(param_1 + 8));
      }
      return;
    }
    FUN_10a314098(&uStack_90);
    plVar5 = plStack_78;
    if ((bStack_70 & 1) == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f696a1b,&UNK_10f696a4a,0x209,&UNK_10f696a90);
      }
    }
    else {
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((bStack_70 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab9f8a4);
          (*pcVar7)();
        }
      }
      pcVar7 = (code *)*puStack_80;
      plStack_58 = plStack_88;
      uStack_60 = uStack_90;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar7)(&uStack_60);
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    plVar5 = plStack_78;
    if (bStack_70 == 1) {
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x78);
  } while( true );
}



/* Entry: 10ab9f8f8; end: 10ab9faf3;  */

/* WARNING: Removing unreachable block (ram,0x00010ab9f9ac) */
/* WARNING: Removing unreachable block (ram,0x00010ab9fac4) */

float * FUN_10ab9f8f8(float *param_1,long *param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 **ppuVar13;
  float *pfVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  float *pfVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  float *pfVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long *plVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  float fStack_598;
  float fStack_594;
  undefined8 uStack_590;
  undefined8 uStack_588;
  float fStack_580;
  float fStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  float *pfStack_550;
  long *plStack_548;
  long alStack_540 [2];
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined8 uStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  float *pfStack_4f0;
  long *plStack_4e8;
  long alStack_4e0 [2];
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  long lStack_498;
  float *pfStack_490;
  long *plStack_488;
  long alStack_480 [3];
  long lStack_468;
  float *pfStack_460;
  int iStack_458;
  undefined8 uStack_450;
  float *pfStack_448;
  float fStack_440;
  float fStack_43c;
  float *pfStack_438;
  undefined8 uStack_430;
  long lStack_428;
  float *pfStack_3b0;
  float *pfStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 uStack_380;
  undefined8 uStack_37c;
  undefined8 uStack_370;
  long *plStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_300;
  float *pfStack_2f8;
  float *pfStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined1 auStack_88 [8];
  undefined8 **ppuStack_80;
  undefined1 auStack_78 [8];
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  lVar24 = param_2[1];
  lVar35 = *param_2;
  *(long *)(param_1 + 6) = param_2[1];
  *(long *)(param_1 + 4) = lVar35;
  if (lVar24 != 0) {
    plVar18 = (long *)(lVar24 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *plVar18 = *plVar18 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puVar17 = (undefined8 *)&UNK_10f696ac1;
  plVar18 = (long *)0x1a;
  puVar22 = (undefined8 *)0x16;
  FUN_10ab451f4(auStack_88,0,&UNK_10f696aa6);
  func_0x00010a015c50(param_1,auStack_88);
  plVar25 = *(long **)(*(long *)param_1 + 0x228);
  if (plVar25 == *(long **)(*(long *)param_1 + 0x230)) {
    lVar35 = 0;
  }
  else {
    lVar35 = *plVar25;
  }
  func_0x00010a3326b8(lVar35 + 0x218,1);
  func_0x00010a332748(lVar35 + 0x219,0);
  lVar24 = *(long *)(lVar35 + 600);
  *(undefined8 *)(lVar24 + 0x30) = 0;
  *(undefined8 *)(lVar24 + 0x28) = 6;
  *(undefined8 *)(lVar24 + 0x40) = 0;
  *(undefined8 *)(lVar24 + 0x38) = 0;
  *(undefined8 *)(lVar24 + 0x50) = 0;
  *(undefined8 *)(lVar24 + 0x48) = 0;
  *(undefined4 *)(lVar35 + 0x21e) = 0x1010101;
  plVar25 = (long *)0x0;
  func_0x00010a3325d0(lVar35);
  FUN_10a044790(auStack_78);
  ppuVar13 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (ppuStack_80 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_80 + 1;
    do {
      puVar27 = *ppuVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar8) {
        *ppuVar1 = (undefined8 *)((long)puVar27 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (puVar27 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_80)[2])(ppuStack_80);
      ppuVar13 = ppuStack_80;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a0cfa6c(ppuStack_80);
  FUN_10a0617bc(param_1);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = 0;
  FUN_10a2421c8();
  uStack_380 = 0;
  uStack_37c = 0x100000000;
  uStack_398 = *puVar17;
  uStack_388 = 0x100000010;
  uStack_390 = 0x400000001;
  FUN_10a048f04(&pfStack_3b0,*(undefined8 *)(lVar35 + 0x1e0),&uStack_398);
  if ((pfStack_3b0 == (float *)0x0) || (*plVar18 == 0)) {
    FUN_10a00946c(&UNK_10f696ad8);
    goto LAB_10ab9fff8;
  }
  lStack_300 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  uStack_120 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  uStack_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  uStack_108 = 0x3f800000;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_318 = 0;
  plStack_368 = (long *)0x0;
  uStack_370 = 0;
  lStack_360 = 0;
  uStack_358 = 0xffffffffffffffff;
  uStack_350 = 0xffffffffffffffff;
  uStack_348 = 0;
  plStack_340 = (long *)0x0;
  uStack_338 = 0;
  uStack_330 = 0xffffffffffffffff;
  uStack_328 = 0xffffffffffffffff;
  uStack_320 = 0;
  uStack_310 = 0;
  FUN_10a061728(&lStack_300,&uStack_370);
  plVar15 = plStack_340;
  if (plStack_340 != (long *)0x0) {
    plVar23 = plStack_340 + 1;
    do {
      lVar35 = *plVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *plVar23 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*plStack_340 + 0x10))(plStack_340);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_368;
  if (plStack_368 != (long *)0x0) {
    plVar23 = plStack_368 + 1;
    do {
      lVar35 = *plVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *plVar23 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*plStack_368 + 0x10))(plStack_368);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  pfVar21 = pfStack_2f0;
  if (pfStack_3a8 != (float *)0x0) {
    pfVar14 = pfStack_3a8 + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pfVar14,0x10);
      if (bVar8) {
        *(long *)pfVar14 = *(long *)pfVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pfStack_2f0 = pfStack_3a8;
  pfStack_2f8 = pfStack_3b0;
  if (pfVar21 != (float *)0x0) {
    pfVar14 = pfVar21 + 2;
    do {
      lVar35 = *(long *)pfVar14;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pfVar14,0x10);
      if (bVar8) {
        *(long *)pfVar14 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*(long *)pfVar21 + 0x10))(pfVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar21);
    }
  }
  uStack_2e8 = 0;
  uStack_2e0 = 0xffffffffffffffff;
  uStack_2d8 = 0xffffffffffffffff;
  auVar38 = NEON_fmov(0x3f800000,4);
  uStack_2a0 = auVar38._8_8_;
  uStack_2a8 = auVar38._0_8_;
  uStack_100 = 2;
  uStack_fc = 2;
  (**(code **)(*plVar25 + 0x88))(plVar25,&lStack_300);
  pfVar21 = pfStack_3b0;
  pfVar14 = pfStack_3b0;
  (**(code **)(*(long *)pfStack_3b0 + 0x28))();
  (**(code **)(*(long *)pfVar21 + 0x30))();
  uVar37 = (uint)pfVar14;
  if (uVar37 < 2) {
    uVar37 = 1;
  }
  uVar12 = (uint)pfVar21;
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  plStack_368 = (long *)CONCAT44(uVar12,uVar37);
  uStack_370 = 0;
  (**(code **)(*plVar25 + 0xc0))(plVar25,&uStack_370);
  plVar15 = plVar25 + 4;
  FUN_10a5dfd94(plVar15,*ppuVar13);
  plVar23 = plVar25 + 4;
  FUN_10a01eacc(plVar23,plVar15);
  func_0x000107c2b074(&uStack_370,&PTR_DAT_110c50978);
  if (*plVar18 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(*plVar18 + 0x268);
  }
  FUN_10a5e17a8(plVar23,&uStack_370,uVar19,&UNK_10e4ac8a8);
  if (lStack_360 < 0) {
    __ZdlPv(uStack_370);
  }
  plStack_368 = (long *)0x0;
  uStack_370 = 0x3f800000;
  uStack_358 = 0;
  lStack_360 = 0x3f80000000000000;
  uStack_348 = 0x3f800000;
  uStack_350 = 0;
  uStack_338 = 0x3f80000000000000;
  plStack_340 = (long *)0x0;
  plVar23 = (long *)0x1;
  (**(code **)(*plVar25 + 0x58))(plVar25,ppuVar13[2],plVar15,&uStack_370);
  (**(code **)(*plVar25 + 0x90))(plVar25,0,3,3);
  plVar18 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar35 = *plVar25;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar8) {
        *plVar25 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar25 = plStack_150 + 1;
    do {
      lVar35 = *plVar25;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar8) {
        *plVar25 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  func_0x00010a048e34(&pfStack_2f8,lStack_300);
  if (pfStack_3b0 != (float *)0x0) {
    ppuVar20 = &PTR_DAT_110baa0e8;
    pfVar21 = (float *)0xfffffffffffffffe;
    ___dynamic_cast(pfStack_3b0,&PTR_DAT_110ba0e18);
    if (pfStack_3b0 != (float *)0x0) {
      lStack_300 = 0;
      pfStack_2f8 = (float *)0x0;
      plVar18 = &lStack_300;
      (*(code *)**(undefined8 **)pfStack_3b0)();
      pfVar14 = pfStack_2f8;
      iVar3 = *(int *)(lStack_300 + 0x14);
      if (iVar3 != 0) {
        uVar28 = 0;
        iVar30 = 0;
        pfVar32 = (float *)0x0;
        iVar4 = *(int *)(lStack_300 + 0x20);
        iVar5 = *(int *)(lStack_300 + 0x18);
        lVar35 = *(long *)(lStack_300 + 0x28);
        uVar37 = *(uint *)(lStack_300 + 0x10);
        do {
          uVar33 = uVar28;
          uVar34 = (ulong)uVar37;
          if (uVar37 != 0) {
            do {
              pfStack_3b0 = pfVar32;
              if ((float *)puVar22[1] <= pfStack_3b0) goto LAB_10ab9fff8;
              bVar6 = *(byte *)(lVar35 + uVar33);
              plVar18 = (long *)(ulong)bVar6;
              pfVar32 = (float *)(ulong)((int)pfStack_3b0 + 1);
              ppuVar20 = (undefined **)*puVar22;
              *(byte *)((long)ppuVar20 + (long)pfStack_3b0) = bVar6;
              uVar33 = (ulong)(uint)((int)uVar33 + iVar4);
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
          iVar30 = iVar30 + 1;
          uVar28 = (ulong)(uint)((int)uVar28 + iVar5);
        } while (iVar30 != iVar3);
      }
      if (pfStack_2f8 != (float *)0x0) {
        pfVar32 = pfStack_2f8 + 2;
        do {
          lVar35 = *(long *)pfVar32;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar8) {
            *(long *)pfVar32 = lVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar35 == 0) {
          (**(code **)(*(long *)pfStack_2f8 + 0x10))(pfStack_2f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pfStack_3b0 = pfVar14;
        }
      }
      pfVar14 = pfStack_3b0;
      if (pfStack_3a8 != (float *)0x0) {
        pfVar32 = pfStack_3a8 + 2;
        do {
          lVar35 = *(long *)pfVar32;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar8) {
            *(long *)pfVar32 = lVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar35 == 0) {
          (**(code **)(*(long *)pfStack_3a8 + 0x10))(pfStack_3a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pfVar14 = pfStack_3a8;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        return pfVar14;
      }
      ___stack_chk_fail();
      FUN_10a0d92c8(&lStack_300);
      func_0x00010a0523dc(&pfStack_3b0);
      do {
        __Unwind_Resume();
      } while ((int)plVar18 == 0);
      func_0x000104bd46a0(pfVar14);
      lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar35 = *(long *)(*ppuVar20 + 0x50);
      if (lVar35 == 0) {
        FUN_10a00946c(&UNK_10f696b37);
LAB_10aba0948:
        FUN_10a00946c(&UNK_10f696b58);
LAB_10aba0954:
        puVar26 = &UNK_10f696b73;
      }
      else {
        plVar18 = *(long **)(*ppuVar20 + 0x268);
        if (plVar18 == (long *)0x0) goto LAB_10aba0948;
        puVar17 = (undefined8 *)0x1;
        plVar25 = plVar18;
        FUN_10a088744();
        iStack_458 = (int)plVar25;
        if (puVar17 == (undefined8 *)0x0) {
          uStack_450 = 0;
          pfStack_448 = (float *)0x0;
        }
        else {
          uStack_450 = *puVar17;
          pfStack_448 = (float *)puVar17[1];
          if (puVar17[1] != 0) {
            plVar25 = (long *)(puVar17[1] + 8);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar8) {
                *plVar25 = *plVar25 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
        }
        if (iStack_458 != 2) goto LAB_10aba0954;
        plVar25 = *(long **)(*ppuVar20 + 0x268);
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0xe8))();
          if ((int)plVar25 == 4) {
            if (5 < (ulong)*(byte *)(lVar35 + 0x29)) goto LAB_10aba0a84;
            plVar36 = *(long **)(lVar35 + (ulong)*(byte *)(lVar35 + 0x29) * 8 + 0x30);
            plVar25 = plVar18;
            (**(code **)(*plVar18 + 0xb0))(plVar18);
            plVar15 = plVar18;
            (**(code **)(*plVar18 + 0xb8))(plVar18);
            (**(code **)(*plVar18 + 0x90))(&fStack_530,plVar18);
            fStack_4b8 = (float)uStack_518;
            fStack_4d0 = fStack_530 + fStack_524 * 0.0 + fStack_4b8 * 0.0;
            fVar9 = -fStack_524 + fStack_530 * 0.0;
            fVar10 = -fStack_520 + fStack_52c * 0.0;
            fStack_4cc = fStack_52c + fStack_520 * 0.0 + uStack_518._4_4_ * 0.0;
            fStack_4c8 = fStack_528 + fStack_51c * 0.0 + (float)lStack_510 * 0.0;
            fStack_4c4 = fVar9 + fStack_4b8 * 0.0;
            fStack_4c0 = (float)(CONCAT17((char)((uint)fVar10 >> 0x18),
                                          CONCAT16((char)((uint)fVar10 >> 0x10),
                                                   CONCAT15((char)((uint)fVar10 >> 8),
                                                            CONCAT14(SUB41(fVar10,0),fVar9)))) >>
                                0x20) + uStack_518._4_4_ * 0.0;
            fStack_4bc = -fStack_51c + fStack_528 * 0.0 + (float)lStack_510 * 0.0;
            fStack_4b8 = fStack_524 + fStack_530 * 0.0 + fStack_4b8;
            fStack_4b4 = fStack_520 + fStack_52c * 0.0 + uStack_518._4_4_;
            fStack_4b0 = fStack_51c + fStack_528 * 0.0 + (float)lStack_510;
            (**(code **)(*plVar36 + 0x30))
                      (&lStack_468,plVar36,&uStack_450,plVar25,plVar15,&fStack_4d0,1);
            fVar9 = *pfVar21;
            fVar10 = pfVar21[1];
            fStack_4d0 = 127.5;
            pfVar21 = (float *)((ulong)&fStack_4d0 | 8);
            fStack_4c4 = 0.0;
            fStack_4c0 = 0.0;
            fStack_4cc = 0.0;
            fStack_4c8 = 0.0;
            fStack_4b4 = 0.0;
            fStack_4b0 = 0.0;
            fStack_4bc = 0.0;
            fStack_4b8 = 0.0;
            uStack_4a4 = 0;
            uStack_4ac = 0;
            uStack_4a8 = 0;
            lStack_498 = 0;
            uStack_4a0 = 0;
            uStack_49c = 0;
            alStack_480[0] = 0;
            alStack_480[1] = 0;
            puVar26 = *ppuVar20;
            plVar18 = *(long **)(puVar26 + 0x268);
            pfStack_490 = pfVar21;
            plStack_488 = alStack_480;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0xb0))();
              puVar26 = *ppuVar20;
            }
            lVar35 = (long)(int)fVar9;
            fStack_528 = fVar10;
            fStack_524 = fVar9;
            if (SUB84(plVar18,0) == fVar9) {
              plVar18 = *(long **)(puVar26 + 0x268);
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0xb8))();
              }
              if (SUB84(plVar18,0) != fVar10) {
                puVar26 = *ppuVar20;
                goto LAB_10aba0454;
              }
              uStack_518 = *(long *)(lStack_468 + 0x28);
              lVar29 = *(long *)(lStack_468 + 0x18);
              fStack_530 = 127.50018;
              fStack_52c = 2.8026e-45;
              pfStack_4f0 = (float *)((ulong)&fStack_530 | 8);
              fStack_520 = (float)uStack_518;
              fStack_51c = (float)((ulong)uStack_518 >> 0x20);
              lStack_508 = 0;
              lStack_510 = 0;
              lStack_4f8 = 0;
              uStack_500 = 0;
              alStack_4e0[0] = 0;
              alStack_4e0[1] = 0;
              lVar24 = (long)(int)fVar10 * (long)(int)fVar9;
              plStack_4e8 = alStack_4e0;
              if ((lVar24 != 0) && (uStack_518 == 0)) {
                puVar16 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar16 = 1;
                uStack_590 = puVar16 + 1;
                uStack_588._0_4_ = 3.92364e-44;
                uStack_588._4_4_ = 0.0;
                *(undefined1 *)(puVar16 + 8) = 0;
                *(undefined8 *)(puVar16 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar16 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar16 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar16 + 4) = 0x61746164207c7c20;
                func_0x000109ac3188(0xffffff29,&uStack_590,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                goto LAB_10aba0a84;
              }
              lVar31 = lVar35 << 2;
              if (fVar10 != 1.4013e-45) {
                lVar31 = lVar29;
              }
              alStack_4e0[0] = lVar35 << 2;
              if (lVar29 != 0) {
                alStack_4e0[0] = lVar31;
              }
              fStack_530 = 127.62518;
              if (lVar31 != lVar35 * 4 && lVar29 != 0) {
                fStack_530 = 127.50018;
              }
              alStack_4e0[1] = 4;
              lStack_508 = uStack_518 + alStack_4e0[0] * (int)fVar10;
              lStack_510 = (lStack_508 - alStack_4e0[0]) + lVar35 * 4;
              if (lStack_498 != 0) {
                piVar2 = (int *)(lStack_498 + 0x14);
                do {
                  iVar3 = *piVar2;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = iVar3 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&fStack_4d0);
                }
              }
              if (0 < (int)fStack_4cc) {
                lVar29 = 0;
                do {
                  pfStack_490[lVar29] = 0.0;
                  lVar29 = lVar29 + 1;
                } while (lVar29 < (int)fStack_4cc);
              }
              fStack_4c8 = fStack_528;
              fStack_4c4 = fStack_524;
              fStack_4d0 = fStack_530;
              fStack_4cc = fStack_52c;
              fStack_4b8 = (float)uStack_518;
              fStack_4b4 = (float)((ulong)uStack_518 >> 0x20);
              fStack_4c0 = fStack_520;
              fStack_4bc = fStack_51c;
              uStack_4a8 = (undefined4)lStack_508;
              uStack_4a4 = (undefined4)((ulong)lStack_508 >> 0x20);
              fStack_4b0 = (float)lStack_510;
              uStack_4ac = (undefined4)((ulong)lStack_510 >> 0x20);
              lStack_498 = lStack_4f8;
              uStack_4a0 = (undefined4)uStack_500;
              uStack_49c = (undefined4)((ulong)uStack_500 >> 0x20);
              pfVar14 = pfStack_490;
              plVar18 = plStack_488;
              if ((plStack_488 != alStack_480) &&
                 (pfVar14 = pfVar21, plVar18 = alStack_480, plStack_488 != (long *)0x0)) {
                _free(plStack_488[-1]);
              }
              plStack_488 = plVar18;
              pfStack_490 = pfVar14;
              if ((int)fStack_52c < 3) {
                puVar17 = (undefined8 *)((ulong)&fStack_530 | 4);
                *plStack_488 = *plStack_4e8;
                plStack_488[1] = plStack_4e8[1];
                fStack_530 = 127.5;
                puVar17[1] = 0;
                *puVar17 = 0;
                puVar17[3] = 0;
                puVar17[2] = 0;
                puVar17[5] = 0;
                puVar17[4] = 0;
                *(undefined8 *)((long)puVar17 + 0x34) = 0;
                *(undefined8 *)((long)puVar17 + 0x2c) = 0;
                uStack_588 = (float *)CONCAT44(uStack_588._4_4_,(float)uStack_588);
                if (plStack_4e8 != alStack_4e0) {
                  _free(plStack_4e8[-1]);
                }
              }
              else {
                pfStack_490 = pfStack_4f0;
                plStack_488 = plStack_4e8;
              }
LAB_10aba070c:
              uStack_518 = *plVar23;
              fStack_530 = 127.5;
              fStack_52c = 2.8026e-45;
              pfStack_4f0 = &fStack_528;
              fStack_520 = (float)uStack_518;
              fStack_51c = (float)((ulong)uStack_518 >> 0x20);
              lStack_508 = 0;
              lStack_510 = 0;
              lStack_4f8 = 0;
              uStack_500 = 0;
              alStack_4e0[0] = 0;
              alStack_4e0[1] = 0;
              plStack_4e8 = alStack_4e0;
              if ((lVar24 != 0) && (uStack_518 == 0)) {
                puVar16 = (undefined4 *)0x24;
                fStack_528 = fVar10;
                fStack_524 = fVar9;
                func_0x000107c2ae8c();
                *puVar16 = 1;
                uStack_590 = puVar16 + 1;
                uStack_588._0_4_ = 3.92364e-44;
                uStack_588._4_4_ = 0.0;
                *(undefined1 *)(puVar16 + 8) = 0;
                *(undefined8 *)(puVar16 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar16 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar16 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar16 + 4) = 0x61746164207c7c20;
                func_0x000109ac3188(0xffffff29,&uStack_590,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                goto LAB_10aba0a84;
              }
              fStack_530 = 127.625;
              alStack_4e0[1] = 1;
              lStack_510 = uStack_518 + lVar24;
              uStack_590._0_4_ = 2.3693558e-38;
              uStack_588 = &fStack_4d0;
              fStack_580 = 0.0;
              fStack_57c = 0.0;
              fStack_440 = 9.477423e-38;
              uStack_430 = 0;
              pfVar21 = (float *)&uStack_590;
              fStack_528 = fVar10;
              fStack_524 = fVar9;
              lStack_508 = lStack_510;
              alStack_4e0[0] = lVar35;
              pfStack_438 = &fStack_530;
              func_0x000109ac9fc8(pfVar21,&fStack_440,0xb,0);
              if (lStack_4f8 != 0) {
                piVar2 = (int *)(lStack_4f8 + 0x14);
                do {
                  iVar3 = *piVar2;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = iVar3 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar3 + -1 == 0) {
                  pfVar21 = &fStack_530;
                  func_0x000109a848d4(pfVar21);
                }
              }
              lStack_4f8 = 0;
              uStack_518 = 0;
              fStack_520 = 0.0;
              fStack_51c = 0.0;
              lStack_508 = 0;
              lStack_510 = 0;
              if (0 < (int)fStack_52c) {
                lVar35 = 0;
                do {
                  pfStack_4f0[lVar35] = 0.0;
                  lVar35 = lVar35 + 1;
                } while (lVar35 < (int)fStack_52c);
              }
              if (plStack_4e8 != alStack_4e0 && plStack_4e8 != (long *)0x0) {
                pfVar21 = (float *)plStack_4e8[-1];
                _free(pfVar21);
              }
              if (lStack_498 != 0) {
                piVar2 = (int *)(lStack_498 + 0x14);
                do {
                  iVar3 = *piVar2;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = iVar3 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar3 + -1 == 0) {
                  pfVar21 = &fStack_4d0;
                  func_0x000109a848d4(pfVar21);
                }
              }
              lStack_498 = 0;
              fStack_4b8 = 0.0;
              fStack_4b4 = 0.0;
              fStack_4c0 = 0.0;
              fStack_4bc = 0.0;
              uStack_4a8 = 0;
              uStack_4a4 = 0;
              fStack_4b0 = 0.0;
              uStack_4ac = 0;
              if (0 < (int)fStack_4cc) {
                lVar35 = 0;
                do {
                  pfStack_490[lVar35] = 0.0;
                  lVar35 = lVar35 + 1;
                } while (lVar35 < (int)fStack_4cc);
              }
              if (plStack_488 != alStack_480 && plStack_488 != (long *)0x0) {
                pfVar21 = (float *)plStack_488[-1];
                _free(pfVar21);
              }
              if (pfStack_460 != (float *)0x0) {
                pfVar14 = pfStack_460 + 2;
                do {
                  lVar35 = *(long *)pfVar14;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(pfVar14,0x10);
                  if (bVar8) {
                    *(long *)pfVar14 = lVar35 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar35 == 0) {
                  (**(code **)(*(long *)pfStack_460 + 0x10))(pfStack_460);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pfStack_460);
                  pfVar21 = pfStack_460;
                }
              }
              pfVar14 = pfStack_448;
              if (pfStack_448 != (float *)0x0) {
                pfVar32 = pfStack_448 + 2;
                do {
                  lVar35 = *(long *)pfVar32;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
                  if (bVar8) {
                    *(long *)pfVar32 = lVar35 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar35 == 0) {
                  (**(code **)(*(long *)pfStack_448 + 0x10))(pfStack_448);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar14);
                  pfVar21 = pfVar14;
                }
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
                return pfVar21;
              }
              ___stack_chk_fail();
            }
            else {
LAB_10aba0454:
              plVar18 = *(long **)(puVar26 + 0x268);
              if (plVar18 == (long *)0x0) {
                fStack_524 = 0.0;
                plVar18 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar18 + 0xb0))();
                fStack_524 = SUB84(plVar18,0);
                plVar18 = *(long **)(*ppuVar20 + 0x268);
                if (plVar18 != (long *)0x0) {
                  (**(code **)(*plVar18 + 0xb8))();
                }
              }
              uStack_518 = *(long *)(lStack_468 + 0x28);
              lVar24 = *(long *)(lStack_468 + 0x18);
              fStack_530 = 127.50018;
              fStack_52c = 2.8026e-45;
              pfStack_4f0 = &fStack_528;
              fStack_528 = SUB84(plVar18,0);
              fStack_520 = (float)uStack_518;
              fStack_51c = (float)((ulong)uStack_518 >> 0x20);
              lStack_508 = 0;
              lStack_510 = 0;
              lStack_4f8 = 0;
              uStack_500 = 0;
              alStack_4e0[0] = 0;
              alStack_4e0[1] = 0;
              plStack_4e8 = alStack_4e0;
              if (((long)(int)fStack_528 * (long)(int)fStack_524 == 0) || (uStack_518 != 0)) {
                lVar31 = (long)(int)fStack_524;
                lVar29 = lVar31 << 2;
                if (fStack_528 != 1.4013e-45) {
                  lVar29 = lVar24;
                }
                alStack_4e0[0] = lVar31 << 2;
                if (lVar24 != 0) {
                  alStack_4e0[0] = lVar29;
                }
                fStack_530 = 127.62518;
                if (lVar29 != lVar31 * 4 && lVar24 != 0) {
                  fStack_530 = 127.50018;
                }
                alStack_4e0[1] = 4;
                lStack_508 = uStack_518 + alStack_4e0[0] * (int)fStack_528;
                lStack_510 = (lStack_508 - alStack_4e0[0]) + lVar31 * 4;
                uStack_590._0_4_ = 127.5;
                uStack_588._4_4_ = 0.0;
                fStack_580 = 0.0;
                uStack_590._4_4_ = 0.0;
                uStack_588._0_4_ = 0.0;
                uStack_574 = 0;
                uStack_570 = 0;
                fStack_57c = 0.0;
                uStack_578 = 0;
                uStack_564 = 0;
                uStack_56c = 0;
                uStack_568 = 0;
                lStack_558 = 0;
                uStack_560 = 0;
                uStack_55c = 0;
                pfStack_550 = (float *)((ulong)&uStack_590 | 8);
                alStack_540[0] = 0;
                alStack_540[1] = 0;
                plStack_548 = alStack_540;
                fStack_440 = fVar10;
                fStack_43c = fVar9;
                func_0x000109a83fd0(&uStack_590,2,&fStack_440,0x18);
                if (lStack_498 != 0) {
                  piVar2 = (int *)(lStack_498 + 0x14);
                  do {
                    iVar3 = *piVar2;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar8) {
                      *piVar2 = iVar3 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar3 + -1 == 0) {
                    func_0x000109a848d4(&fStack_4d0);
                  }
                }
                if (0 < (int)fStack_4cc) {
                  lVar24 = 0;
                  do {
                    pfStack_490[lVar24] = 0.0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < (int)fStack_4cc);
                }
                fStack_4c8 = (float)uStack_588;
                fStack_4c4 = uStack_588._4_4_;
                fStack_4d0 = (float)uStack_590;
                fStack_4cc = uStack_590._4_4_;
                fStack_4b8 = (float)uStack_578;
                fStack_4b4 = (float)uStack_574;
                fStack_4c0 = fStack_580;
                fStack_4bc = fStack_57c;
                uStack_4a8 = uStack_568;
                uStack_4a4 = uStack_564;
                fStack_4b0 = (float)uStack_570;
                uStack_4ac = uStack_56c;
                lStack_498 = lStack_558;
                uStack_4a0 = uStack_560;
                uStack_49c = uStack_55c;
                pfVar14 = pfStack_490;
                plVar18 = plStack_488;
                if ((plStack_488 != alStack_480) &&
                   (pfVar14 = pfVar21, plVar18 = alStack_480, plStack_488 != (long *)0x0)) {
                  _free(plStack_488[-1]);
                }
                plStack_488 = plVar18;
                pfStack_490 = pfVar14;
                if ((int)uStack_590._4_4_ < 3) {
                  puVar17 = (undefined8 *)((ulong)&uStack_590 | 4);
                  *plStack_488 = *plStack_548;
                  plStack_488[1] = plStack_548[1];
                  uStack_590._0_4_ = 127.5;
                  puVar17[1] = 0;
                  *puVar17 = 0;
                  puVar17[3] = 0;
                  puVar17[2] = 0;
                  puVar17[5] = 0;
                  puVar17[4] = 0;
                  *(undefined8 *)((long)puVar17 + 0x34) = 0;
                  *(undefined8 *)((long)puVar17 + 0x2c) = 0;
                  if (plStack_548 != alStack_540) {
                    _free(plStack_548[-1]);
                  }
                }
                else {
                  pfStack_490 = pfStack_550;
                  plStack_488 = plStack_548;
                }
                uStack_590._0_4_ = 2.3693558e-38;
                uStack_588 = &fStack_530;
                fStack_580 = 0.0;
                fStack_57c = 0.0;
                fStack_440 = 9.477423e-38;
                pfStack_438 = &fStack_4d0;
                uStack_430 = 0;
                fStack_598 = fVar9;
                fStack_594 = fVar10;
                func_0x000109b0f718(0,0,&uStack_590,&fStack_440,&fStack_598,1);
                if (lStack_4f8 != 0) {
                  piVar2 = (int *)(lStack_4f8 + 0x14);
                  do {
                    iVar3 = *piVar2;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar8) {
                      *piVar2 = iVar3 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar3 + -1 == 0) {
                    func_0x000109a848d4(&fStack_530);
                  }
                }
                lStack_4f8 = 0;
                uStack_518 = 0;
                fStack_520 = 0.0;
                fStack_51c = 0.0;
                lStack_508 = 0;
                lStack_510 = 0;
                if (0 < (int)fStack_52c) {
                  lVar24 = 0;
                  do {
                    pfStack_4f0[lVar24] = 0.0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < (int)fStack_52c);
                }
                if (plStack_4e8 != alStack_4e0 && plStack_4e8 != (long *)0x0) {
                  _free(plStack_4e8[-1]);
                }
                lVar24 = (long)(int)fVar10 * (long)(int)fVar9;
                goto LAB_10aba070c;
              }
            }
            puVar16 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar16 = 1;
            uStack_590 = puVar16 + 1;
            uStack_588._0_4_ = 3.92364e-44;
            uStack_588._4_4_ = 0.0;
            *(undefined1 *)(puVar16 + 8) = 0;
            *(undefined8 *)(puVar16 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar16 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar16 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar16 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_590,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10aba0a84;
          }
        }
        puVar26 = &UNK_10f696b8c;
      }
      FUN_10a00946c(puVar26);
LAB_10aba0a84:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10aba0a88);
      (*pcVar11)();
    }
  }
  FUN_10a00946c(&UNK_10f696af2);
LAB_10ab9fff8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab9fffc);
  (*pcVar11)();
}



/* Entry: 10ab9faf4; end: 10aba009b;  */

void FUN_10ab9faf4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  float *pfVar20;
  long *plVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  float fStack_4f8;
  float fStack_4f4;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  float fStack_4e0;
  float fStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long lStack_4b8;
  float *pfStack_4b0;
  long *plStack_4a8;
  long alStack_4a0 [2];
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  undefined8 uStack_478;
  long lStack_470;
  long lStack_468;
  undefined8 uStack_460;
  long lStack_458;
  float *pfStack_450;
  long *plStack_448;
  long alStack_440 [2];
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long lStack_3f8;
  float *pfStack_3f0;
  long *plStack_3e8;
  long alStack_3e0 [3];
  long lStack_3c8;
  long *plStack_3c0;
  int iStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  float fStack_3a0;
  float fStack_39c;
  float *pfStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_310;
  long *plStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2dc;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = 0;
  FUN_10a2421c8();
  uStack_2e0 = 0;
  uStack_2dc = 0x100000000;
  uStack_2f8 = *param_4;
  uStack_2e8 = 0x100000010;
  uStack_2f0 = 0x400000001;
  FUN_10a048f04(&plStack_310,*(undefined8 *)(lVar13 + 0x1e0),&uStack_2f8);
  if ((plStack_310 == (long *)0x0) || (*param_3 == 0)) {
    FUN_10a00946c(&UNK_10f696ad8);
    goto LAB_10ab9fff8;
  }
  lStack_260 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_80 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_278 = 0;
  plStack_2c8 = (long *)0x0;
  uStack_2d0 = 0;
  lStack_2c0 = 0;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_2a8 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_298 = 0;
  uStack_290 = 0xffffffffffffffff;
  uStack_288 = 0xffffffffffffffff;
  uStack_280 = 0;
  uStack_270 = 0;
  FUN_10a061728(&lStack_260,&uStack_2d0);
  plVar16 = plStack_2a0;
  if (plStack_2a0 != (long *)0x0) {
    plVar21 = plStack_2a0 + 1;
    do {
      lVar13 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plStack_2c8;
  if (plStack_2c8 != (long *)0x0) {
    plVar21 = plStack_2c8 + 1;
    do {
      lVar13 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plStack_250;
  if (plStack_308 != (long *)0x0) {
    plVar21 = plStack_308 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = *plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_250 = plStack_308;
  plStack_258 = plStack_310;
  if (plVar16 != (long *)0x0) {
    plVar21 = plVar16 + 1;
    do {
      lVar13 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  uStack_248 = 0;
  uStack_240 = 0xffffffffffffffff;
  uStack_238 = 0xffffffffffffffff;
  auVar33 = NEON_fmov(0x3f800000,4);
  uStack_200 = auVar33._8_8_;
  uStack_208 = auVar33._0_8_;
  uStack_60 = 2;
  uStack_5c = 2;
  (**(code **)(*param_2 + 0x88))(param_2,&lStack_260);
  plVar16 = plStack_310;
  plVar21 = plStack_310;
  (**(code **)(*plStack_310 + 0x28))();
  (**(code **)(*plVar16 + 0x30))();
  uVar32 = (uint)plVar21;
  if (uVar32 < 2) {
    uVar32 = 1;
  }
  uVar12 = (uint)plVar16;
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  plStack_2c8 = (long *)CONCAT44(uVar12,uVar32);
  uStack_2d0 = 0;
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2d0);
  plVar16 = param_2 + 4;
  FUN_10a5dfd94(plVar16,*param_1);
  plVar21 = param_2 + 4;
  FUN_10a01eacc(plVar21,plVar16);
  func_0x000107c2b074(&uStack_2d0,&PTR_DAT_110c50978);
  if (*param_3 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*param_3 + 0x268);
  }
  FUN_10a5e17a8(plVar21,&uStack_2d0,uVar18,&UNK_10e4ac8a8);
  if (lStack_2c0 < 0) {
    __ZdlPv(uStack_2d0);
  }
  plStack_2c8 = (long *)0x0;
  uStack_2d0 = 0x3f800000;
  uStack_2b8 = 0;
  lStack_2c0 = 0x3f80000000000000;
  uStack_2a8 = 0x3f800000;
  uStack_2b0 = 0;
  uStack_298 = 0x3f80000000000000;
  plStack_2a0 = (long *)0x0;
  plVar21 = (long *)0x1;
  (**(code **)(*param_2 + 0x58))(param_2,param_1[2],plVar16,&uStack_2d0);
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  plVar16 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar14 = plStack_88 + 1;
    do {
      lVar13 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar14 = plStack_b0 + 1;
    do {
      lVar13 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  func_0x00010a048e34(&plStack_258,lStack_260);
  if (plStack_310 != (long *)0x0) {
    ppuVar19 = &PTR_DAT_110baa0e8;
    pfVar20 = (float *)0xfffffffffffffffe;
    ___dynamic_cast(plStack_310,&PTR_DAT_110ba0e18);
    if (plStack_310 != (long *)0x0) {
      lStack_260 = 0;
      plStack_258 = (long *)0x0;
      plVar16 = &lStack_260;
      (**(code **)*plStack_310)();
      plVar14 = plStack_258;
      iVar2 = *(int *)(lStack_260 + 0x14);
      if (iVar2 != 0) {
        uVar23 = 0;
        iVar25 = 0;
        plVar27 = (long *)0x0;
        iVar3 = *(int *)(lStack_260 + 0x20);
        iVar4 = *(int *)(lStack_260 + 0x18);
        lVar13 = *(long *)(lStack_260 + 0x28);
        uVar32 = *(uint *)(lStack_260 + 0x10);
        do {
          uVar28 = uVar23;
          uVar29 = (ulong)uVar32;
          if (uVar32 != 0) {
            do {
              plStack_310 = plVar27;
              if ((long *)param_5[1] <= plStack_310) goto LAB_10ab9fff8;
              bVar5 = *(byte *)(lVar13 + uVar28);
              plVar16 = (long *)(ulong)bVar5;
              plVar27 = (long *)(ulong)((int)plStack_310 + 1);
              ppuVar19 = (undefined **)*param_5;
              *(byte *)((long)ppuVar19 + (long)plStack_310) = bVar5;
              uVar28 = (ulong)(uint)((int)uVar28 + iVar3);
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          iVar25 = iVar25 + 1;
          uVar23 = (ulong)(uint)((int)uVar23 + iVar4);
        } while (iVar25 != iVar2);
      }
      if (plStack_258 != (long *)0x0) {
        plVar27 = plStack_258 + 1;
        do {
          lVar13 = *plVar27;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar7) {
            *plVar27 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plStack_310 = plVar14;
        }
      }
      plVar14 = plStack_310;
      if (plStack_308 != (long *)0x0) {
        plVar27 = plStack_308 + 1;
        do {
          lVar13 = *plVar27;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar7) {
            *plVar27 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar14 = plStack_308;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      FUN_10a0d92c8(&lStack_260);
      func_0x00010a0523dc(&plStack_310);
      do {
        __Unwind_Resume();
      } while ((int)plVar16 == 0);
      func_0x000104bd46a0(plVar14);
      lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = *(long *)(*ppuVar19 + 0x50);
      if (lVar13 == 0) {
        FUN_10a00946c(&UNK_10f696b37);
LAB_10aba0948:
        FUN_10a00946c(&UNK_10f696b58);
LAB_10aba0954:
        puVar22 = &UNK_10f696b73;
      }
      else {
        plVar16 = *(long **)(*ppuVar19 + 0x268);
        if (plVar16 == (long *)0x0) goto LAB_10aba0948;
        puVar17 = (undefined8 *)0x1;
        plVar14 = plVar16;
        FUN_10a088744();
        iStack_3b8 = (int)plVar14;
        if (puVar17 == (undefined8 *)0x0) {
          uStack_3b0 = 0;
          plStack_3a8 = (long *)0x0;
        }
        else {
          uStack_3b0 = *puVar17;
          plStack_3a8 = (long *)puVar17[1];
          if (puVar17[1] != 0) {
            plVar14 = (long *)(puVar17[1] + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar7) {
                *plVar14 = *plVar14 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        if (iStack_3b8 != 2) goto LAB_10aba0954;
        plVar14 = *(long **)(*ppuVar19 + 0x268);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0xe8))();
          if ((int)plVar14 == 4) {
            if (5 < (ulong)*(byte *)(lVar13 + 0x29)) goto LAB_10aba0a84;
            plVar31 = *(long **)(lVar13 + (ulong)*(byte *)(lVar13 + 0x29) * 8 + 0x30);
            plVar14 = plVar16;
            (**(code **)(*plVar16 + 0xb0))(plVar16);
            plVar27 = plVar16;
            (**(code **)(*plVar16 + 0xb8))(plVar16);
            (**(code **)(*plVar16 + 0x90))(&fStack_490,plVar16);
            fStack_418 = (float)uStack_478;
            fStack_430 = fStack_490 + fStack_484 * 0.0 + fStack_418 * 0.0;
            fVar8 = -fStack_484 + fStack_490 * 0.0;
            fVar9 = -fStack_480 + fStack_48c * 0.0;
            fStack_42c = fStack_48c + fStack_480 * 0.0 + uStack_478._4_4_ * 0.0;
            fStack_428 = fStack_488 + fStack_47c * 0.0 + (float)lStack_470 * 0.0;
            fStack_424 = fVar8 + fStack_418 * 0.0;
            fStack_420 = (float)(CONCAT17((char)((uint)fVar9 >> 0x18),
                                          CONCAT16((char)((uint)fVar9 >> 0x10),
                                                   CONCAT15((char)((uint)fVar9 >> 8),
                                                            CONCAT14(SUB41(fVar9,0),fVar8)))) >>
                                0x20) + uStack_478._4_4_ * 0.0;
            fStack_41c = -fStack_47c + fStack_488 * 0.0 + (float)lStack_470 * 0.0;
            fStack_418 = fStack_484 + fStack_490 * 0.0 + fStack_418;
            fStack_414 = fStack_480 + fStack_48c * 0.0 + uStack_478._4_4_;
            fStack_410 = fStack_47c + fStack_488 * 0.0 + (float)lStack_470;
            (**(code **)(*plVar31 + 0x30))
                      (&lStack_3c8,plVar31,&uStack_3b0,plVar14,plVar27,&fStack_430,1);
            fVar8 = *pfVar20;
            fVar9 = pfVar20[1];
            fStack_430 = 127.5;
            pfVar20 = (float *)((ulong)&fStack_430 | 8);
            fStack_424 = 0.0;
            fStack_420 = 0.0;
            fStack_42c = 0.0;
            fStack_428 = 0.0;
            fStack_414 = 0.0;
            fStack_410 = 0.0;
            fStack_41c = 0.0;
            fStack_418 = 0.0;
            uStack_404 = 0;
            uStack_40c = 0;
            uStack_408 = 0;
            lStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3fc = 0;
            alStack_3e0[0] = 0;
            alStack_3e0[1] = 0;
            puVar22 = *ppuVar19;
            plVar16 = *(long **)(puVar22 + 0x268);
            pfStack_3f0 = pfVar20;
            plStack_3e8 = alStack_3e0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0xb0))();
              puVar22 = *ppuVar19;
            }
            lVar13 = (long)(int)fVar8;
            fStack_488 = fVar9;
            fStack_484 = fVar8;
            if (SUB84(plVar16,0) == fVar8) {
              plVar16 = *(long **)(puVar22 + 0x268);
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0xb8))();
              }
              if (SUB84(plVar16,0) != fVar9) {
                puVar22 = *ppuVar19;
                goto LAB_10aba0454;
              }
              uStack_478 = *(long *)(lStack_3c8 + 0x28);
              lVar24 = *(long *)(lStack_3c8 + 0x18);
              fStack_490 = 127.50018;
              fStack_48c = 2.8026e-45;
              pfStack_450 = (float *)((ulong)&fStack_490 | 8);
              fStack_480 = (float)uStack_478;
              fStack_47c = (float)((ulong)uStack_478 >> 0x20);
              lStack_468 = 0;
              lStack_470 = 0;
              lStack_458 = 0;
              uStack_460 = 0;
              alStack_440[0] = 0;
              alStack_440[1] = 0;
              lVar30 = (long)(int)fVar9 * (long)(int)fVar8;
              plStack_448 = alStack_440;
              if ((lVar30 != 0) && (uStack_478 == 0)) {
                puVar15 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar15 = 1;
                uStack_4f0 = puVar15 + 1;
                uStack_4e8._0_4_ = 3.92364e-44;
                uStack_4e8._4_4_ = 0.0;
                *(undefined1 *)(puVar15 + 8) = 0;
                *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
                func_0x000109ac3188(0xffffff29,&uStack_4f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                goto LAB_10aba0a84;
              }
              lVar26 = lVar13 << 2;
              if (fVar9 != 1.4013e-45) {
                lVar26 = lVar24;
              }
              alStack_440[0] = lVar13 << 2;
              if (lVar24 != 0) {
                alStack_440[0] = lVar26;
              }
              fStack_490 = 127.62518;
              if (lVar26 != lVar13 * 4 && lVar24 != 0) {
                fStack_490 = 127.50018;
              }
              alStack_440[1] = 4;
              lStack_468 = uStack_478 + alStack_440[0] * (int)fVar9;
              lStack_470 = (lStack_468 - alStack_440[0]) + lVar13 * 4;
              if (lStack_3f8 != 0) {
                piVar1 = (int *)(lStack_3f8 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&fStack_430);
                }
              }
              if (0 < (int)fStack_42c) {
                lVar24 = 0;
                do {
                  pfStack_3f0[lVar24] = 0.0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 < (int)fStack_42c);
              }
              fStack_428 = fStack_488;
              fStack_424 = fStack_484;
              fStack_430 = fStack_490;
              fStack_42c = fStack_48c;
              fStack_418 = (float)uStack_478;
              fStack_414 = (float)((ulong)uStack_478 >> 0x20);
              fStack_420 = fStack_480;
              fStack_41c = fStack_47c;
              uStack_408 = (undefined4)lStack_468;
              uStack_404 = (undefined4)((ulong)lStack_468 >> 0x20);
              fStack_410 = (float)lStack_470;
              uStack_40c = (undefined4)((ulong)lStack_470 >> 0x20);
              lStack_3f8 = lStack_458;
              uStack_400 = (undefined4)uStack_460;
              uStack_3fc = (undefined4)((ulong)uStack_460 >> 0x20);
              pfVar10 = pfStack_3f0;
              plVar16 = plStack_3e8;
              if ((plStack_3e8 != alStack_3e0) &&
                 (pfVar10 = pfVar20, plVar16 = alStack_3e0, plStack_3e8 != (long *)0x0)) {
                _free(plStack_3e8[-1]);
              }
              plStack_3e8 = plVar16;
              pfStack_3f0 = pfVar10;
              if ((int)fStack_48c < 3) {
                puVar17 = (undefined8 *)((ulong)&fStack_490 | 4);
                *plStack_3e8 = *plStack_448;
                plStack_3e8[1] = plStack_448[1];
                fStack_490 = 127.5;
                puVar17[1] = 0;
                *puVar17 = 0;
                puVar17[3] = 0;
                puVar17[2] = 0;
                puVar17[5] = 0;
                puVar17[4] = 0;
                *(undefined8 *)((long)puVar17 + 0x34) = 0;
                *(undefined8 *)((long)puVar17 + 0x2c) = 0;
                uStack_4e8 = (float *)CONCAT44(uStack_4e8._4_4_,(float)uStack_4e8);
                if (plStack_448 != alStack_440) {
                  _free(plStack_448[-1]);
                }
              }
              else {
                pfStack_3f0 = pfStack_450;
                plStack_3e8 = plStack_448;
              }
LAB_10aba070c:
              uStack_478 = *plVar21;
              fStack_490 = 127.5;
              fStack_48c = 2.8026e-45;
              pfStack_450 = &fStack_488;
              fStack_480 = (float)uStack_478;
              fStack_47c = (float)((ulong)uStack_478 >> 0x20);
              lStack_468 = 0;
              lStack_470 = 0;
              lStack_458 = 0;
              uStack_460 = 0;
              alStack_440[0] = 0;
              alStack_440[1] = 0;
              plStack_448 = alStack_440;
              if ((lVar30 != 0) && (uStack_478 == 0)) {
                puVar15 = (undefined4 *)0x24;
                fStack_488 = fVar9;
                fStack_484 = fVar8;
                func_0x000107c2ae8c();
                *puVar15 = 1;
                uStack_4f0 = puVar15 + 1;
                uStack_4e8._0_4_ = 3.92364e-44;
                uStack_4e8._4_4_ = 0.0;
                *(undefined1 *)(puVar15 + 8) = 0;
                *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
                func_0x000109ac3188(0xffffff29,&uStack_4f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                goto LAB_10aba0a84;
              }
              fStack_490 = 127.625;
              alStack_440[1] = 1;
              lStack_470 = uStack_478 + lVar30;
              uStack_4f0._0_4_ = 2.3693558e-38;
              uStack_4e8 = &fStack_430;
              fStack_4e0 = 0.0;
              fStack_4dc = 0.0;
              fStack_3a0 = 9.477423e-38;
              uStack_390 = 0;
              fStack_488 = fVar9;
              fStack_484 = fVar8;
              lStack_468 = lStack_470;
              alStack_440[0] = lVar13;
              pfStack_398 = &fStack_490;
              func_0x000109ac9fc8(&uStack_4f0,&fStack_3a0,0xb,0);
              if (lStack_458 != 0) {
                piVar1 = (int *)(lStack_458 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&fStack_490);
                }
              }
              lStack_458 = 0;
              uStack_478 = 0;
              fStack_480 = 0.0;
              fStack_47c = 0.0;
              lStack_468 = 0;
              lStack_470 = 0;
              if (0 < (int)fStack_48c) {
                lVar13 = 0;
                do {
                  pfStack_450[lVar13] = 0.0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < (int)fStack_48c);
              }
              if (plStack_448 != alStack_440 && plStack_448 != (long *)0x0) {
                _free(plStack_448[-1]);
              }
              if (lStack_3f8 != 0) {
                piVar1 = (int *)(lStack_3f8 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&fStack_430);
                }
              }
              lStack_3f8 = 0;
              fStack_418 = 0.0;
              fStack_414 = 0.0;
              fStack_420 = 0.0;
              fStack_41c = 0.0;
              uStack_408 = 0;
              uStack_404 = 0;
              fStack_410 = 0.0;
              uStack_40c = 0;
              if (0 < (int)fStack_42c) {
                lVar13 = 0;
                do {
                  pfStack_3f0[lVar13] = 0.0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < (int)fStack_42c);
              }
              if (plStack_3e8 != alStack_3e0 && plStack_3e8 != (long *)0x0) {
                _free(plStack_3e8[-1]);
              }
              if (plStack_3c0 != (long *)0x0) {
                plVar16 = plStack_3c0 + 1;
                do {
                  lVar13 = *plVar16;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *plVar16 = lVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3c0);
                }
              }
              plVar16 = plStack_3a8;
              if (plStack_3a8 != (long *)0x0) {
                plVar21 = plStack_3a8 + 1;
                do {
                  lVar13 = *plVar21;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar7) {
                    *plVar21 = lVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                }
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
                return;
              }
              ___stack_chk_fail();
            }
            else {
LAB_10aba0454:
              plVar16 = *(long **)(puVar22 + 0x268);
              if (plVar16 == (long *)0x0) {
                fStack_484 = 0.0;
                plVar16 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar16 + 0xb0))();
                fStack_484 = SUB84(plVar16,0);
                plVar16 = *(long **)(*ppuVar19 + 0x268);
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0xb8))();
                }
              }
              uStack_478 = *(long *)(lStack_3c8 + 0x28);
              lVar30 = *(long *)(lStack_3c8 + 0x18);
              fStack_490 = 127.50018;
              fStack_48c = 2.8026e-45;
              pfStack_450 = &fStack_488;
              fStack_488 = SUB84(plVar16,0);
              fStack_480 = (float)uStack_478;
              fStack_47c = (float)((ulong)uStack_478 >> 0x20);
              lStack_468 = 0;
              lStack_470 = 0;
              lStack_458 = 0;
              uStack_460 = 0;
              alStack_440[0] = 0;
              alStack_440[1] = 0;
              plStack_448 = alStack_440;
              if (((long)(int)fStack_488 * (long)(int)fStack_484 == 0) || (uStack_478 != 0)) {
                lVar26 = (long)(int)fStack_484;
                lVar24 = lVar26 << 2;
                if (fStack_488 != 1.4013e-45) {
                  lVar24 = lVar30;
                }
                alStack_440[0] = lVar26 << 2;
                if (lVar30 != 0) {
                  alStack_440[0] = lVar24;
                }
                fStack_490 = 127.62518;
                if (lVar24 != lVar26 * 4 && lVar30 != 0) {
                  fStack_490 = 127.50018;
                }
                alStack_440[1] = 4;
                lStack_468 = uStack_478 + alStack_440[0] * (int)fStack_488;
                lStack_470 = (lStack_468 - alStack_440[0]) + lVar26 * 4;
                uStack_4f0._0_4_ = 127.5;
                uStack_4e8._4_4_ = 0.0;
                fStack_4e0 = 0.0;
                uStack_4f0._4_4_ = 0.0;
                uStack_4e8._0_4_ = 0.0;
                uStack_4d4 = 0;
                uStack_4d0 = 0;
                fStack_4dc = 0.0;
                uStack_4d8 = 0;
                uStack_4c4 = 0;
                uStack_4cc = 0;
                uStack_4c8 = 0;
                lStack_4b8 = 0;
                uStack_4c0 = 0;
                uStack_4bc = 0;
                pfStack_4b0 = (float *)((ulong)&uStack_4f0 | 8);
                alStack_4a0[0] = 0;
                alStack_4a0[1] = 0;
                plStack_4a8 = alStack_4a0;
                fStack_3a0 = fVar9;
                fStack_39c = fVar8;
                func_0x000109a83fd0(&uStack_4f0,2,&fStack_3a0,0x18);
                if (lStack_3f8 != 0) {
                  piVar1 = (int *)(lStack_3f8 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar7) {
                      *piVar1 = iVar2 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&fStack_430);
                  }
                }
                if (0 < (int)fStack_42c) {
                  lVar30 = 0;
                  do {
                    pfStack_3f0[lVar30] = 0.0;
                    lVar30 = lVar30 + 1;
                  } while (lVar30 < (int)fStack_42c);
                }
                fStack_428 = (float)uStack_4e8;
                fStack_424 = uStack_4e8._4_4_;
                fStack_430 = (float)uStack_4f0;
                fStack_42c = uStack_4f0._4_4_;
                fStack_418 = (float)uStack_4d8;
                fStack_414 = (float)uStack_4d4;
                fStack_420 = fStack_4e0;
                fStack_41c = fStack_4dc;
                uStack_408 = uStack_4c8;
                uStack_404 = uStack_4c4;
                fStack_410 = (float)uStack_4d0;
                uStack_40c = uStack_4cc;
                lStack_3f8 = lStack_4b8;
                uStack_400 = uStack_4c0;
                uStack_3fc = uStack_4bc;
                pfVar10 = pfStack_3f0;
                plVar16 = plStack_3e8;
                if ((plStack_3e8 != alStack_3e0) &&
                   (pfVar10 = pfVar20, plVar16 = alStack_3e0, plStack_3e8 != (long *)0x0)) {
                  _free(plStack_3e8[-1]);
                }
                plStack_3e8 = plVar16;
                pfStack_3f0 = pfVar10;
                if ((int)uStack_4f0._4_4_ < 3) {
                  puVar17 = (undefined8 *)((ulong)&uStack_4f0 | 4);
                  *plStack_3e8 = *plStack_4a8;
                  plStack_3e8[1] = plStack_4a8[1];
                  uStack_4f0._0_4_ = 127.5;
                  puVar17[1] = 0;
                  *puVar17 = 0;
                  puVar17[3] = 0;
                  puVar17[2] = 0;
                  puVar17[5] = 0;
                  puVar17[4] = 0;
                  *(undefined8 *)((long)puVar17 + 0x34) = 0;
                  *(undefined8 *)((long)puVar17 + 0x2c) = 0;
                  if (plStack_4a8 != alStack_4a0) {
                    _free(plStack_4a8[-1]);
                  }
                }
                else {
                  pfStack_3f0 = pfStack_4b0;
                  plStack_3e8 = plStack_4a8;
                }
                uStack_4f0._0_4_ = 2.3693558e-38;
                uStack_4e8 = &fStack_490;
                fStack_4e0 = 0.0;
                fStack_4dc = 0.0;
                fStack_3a0 = 9.477423e-38;
                pfStack_398 = &fStack_430;
                uStack_390 = 0;
                fStack_4f8 = fVar8;
                fStack_4f4 = fVar9;
                func_0x000109b0f718(0,0,&uStack_4f0,&fStack_3a0,&fStack_4f8,1);
                if (lStack_458 != 0) {
                  piVar1 = (int *)(lStack_458 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar7) {
                      *piVar1 = iVar2 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&fStack_490);
                  }
                }
                lStack_458 = 0;
                uStack_478 = 0;
                fStack_480 = 0.0;
                fStack_47c = 0.0;
                lStack_468 = 0;
                lStack_470 = 0;
                if (0 < (int)fStack_48c) {
                  lVar30 = 0;
                  do {
                    pfStack_450[lVar30] = 0.0;
                    lVar30 = lVar30 + 1;
                  } while (lVar30 < (int)fStack_48c);
                }
                if (plStack_448 != alStack_440 && plStack_448 != (long *)0x0) {
                  _free(plStack_448[-1]);
                }
                lVar30 = (long)(int)fVar9 * (long)(int)fVar8;
                goto LAB_10aba070c;
              }
            }
            puVar15 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            uStack_4f0 = puVar15 + 1;
            uStack_4e8._0_4_ = 3.92364e-44;
            uStack_4e8._4_4_ = 0.0;
            *(undefined1 *)(puVar15 + 8) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_4f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10aba0a84;
          }
        }
        puVar22 = &UNK_10f696b8c;
      }
      FUN_10a00946c(puVar22);
LAB_10aba0a84:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10aba0a88);
      (*pcVar11)();
    }
  }
  FUN_10a00946c(&UNK_10f696af2);
LAB_10ab9fff8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab9fffc);
  (*pcVar11)();
}



/* Entry: 10aba009c; end: 10aba0b6f;  */

void FUN_10aba009c(undefined8 param_1,undefined8 param_2,long *param_3,float *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  float *pfStack_1a0;
  long *plStack_198;
  long alStack_190 [2];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  float *pfStack_140;
  long *plStack_138;
  long alStack_130 [2];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  float *pfStack_e0;
  long *plStack_d8;
  long alStack_d0 [3];
  long lStack_b8;
  long *plStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  float fStack_90;
  float fStack_8c;
  float *pfStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(*param_3 + 0x50);
  if (lVar16 == 0) {
    FUN_10a00946c(&UNK_10f696b37);
LAB_10aba0948:
    FUN_10a00946c(&UNK_10f696b58);
LAB_10aba0954:
    puVar11 = &UNK_10f696b73;
  }
  else {
    plVar19 = *(long **)(*param_3 + 0x268);
    if (plVar19 == (long *)0x0) goto LAB_10aba0948;
    puVar13 = (undefined8 *)0x1;
    plVar9 = plVar19;
    FUN_10a088744();
    iStack_a8 = (int)plVar9;
    if (puVar13 == (undefined8 *)0x0) {
      uStack_a0 = 0;
      plStack_98 = (long *)0x0;
    }
    else {
      plStack_98 = (long *)puVar13[1];
      uStack_a0 = *puVar13;
      if (puVar13[1] != 0) {
        plVar9 = (long *)(puVar13[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if (iStack_a8 != 2) goto LAB_10aba0954;
    plVar9 = *(long **)(*param_3 + 0x268);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0xe8))();
      if ((int)plVar9 == 4) {
        if (5 < (ulong)*(byte *)(lVar16 + 0x29)) goto LAB_10aba0a84;
        plVar18 = *(long **)(lVar16 + (ulong)*(byte *)(lVar16 + 0x29) * 8 + 0x30);
        plVar9 = plVar19;
        (**(code **)(*plVar19 + 0xb0))(plVar19);
        plVar10 = plVar19;
        (**(code **)(*plVar19 + 0xb8))(plVar19);
        (**(code **)(*plVar19 + 0x90))(&fStack_180,plVar19);
        fStack_108 = (float)uStack_168;
        fStack_120 = fStack_180 + fStack_174 * 0.0 + fStack_108 * 0.0;
        fVar5 = -fStack_174 + fStack_180 * 0.0;
        fVar6 = -fStack_170 + fStack_17c * 0.0;
        fStack_11c = fStack_17c + fStack_170 * 0.0 + uStack_168._4_4_ * 0.0;
        fStack_118 = fStack_178 + fStack_16c * 0.0 + (float)lStack_160 * 0.0;
        fStack_114 = fVar5 + fStack_108 * 0.0;
        fStack_110 = (float)(CONCAT17((char)((uint)fVar6 >> 0x18),
                                      CONCAT16((char)((uint)fVar6 >> 0x10),
                                               CONCAT15((char)((uint)fVar6 >> 8),
                                                        CONCAT14(SUB41(fVar6,0),fVar5)))) >> 0x20) +
                     uStack_168._4_4_ * 0.0;
        fStack_10c = -fStack_16c + fStack_178 * 0.0 + (float)lStack_160 * 0.0;
        fStack_108 = fStack_174 + fStack_180 * 0.0 + fStack_108;
        fStack_104 = fStack_170 + fStack_17c * 0.0 + uStack_168._4_4_;
        fStack_100 = fStack_16c + fStack_178 * 0.0 + (float)lStack_160;
        (**(code **)(*plVar18 + 0x30))(&lStack_b8,plVar18,&uStack_a0,plVar9,plVar10,&fStack_120,1);
        fVar5 = *param_4;
        fVar6 = param_4[1];
        fStack_120 = 127.5;
        pfVar17 = (float *)((ulong)&fStack_120 | 8);
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        fStack_11c = 0.0;
        fStack_118 = 0.0;
        fStack_104 = 0.0;
        fStack_100 = 0.0;
        fStack_10c = 0.0;
        fStack_108 = 0.0;
        uStack_f4 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        alStack_d0[0] = 0;
        alStack_d0[1] = 0;
        lVar16 = *param_3;
        plVar19 = *(long **)(lVar16 + 0x268);
        pfStack_e0 = pfVar17;
        plStack_d8 = alStack_d0;
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0xb0))();
          lVar16 = *param_3;
        }
        lVar20 = (long)(int)fVar5;
        fStack_178 = fVar6;
        fStack_174 = fVar5;
        if (SUB84(plVar19,0) == fVar5) {
          plVar19 = *(long **)(lVar16 + 0x268);
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0xb8))();
          }
          if (SUB84(plVar19,0) != fVar6) {
            lVar16 = *param_3;
            goto LAB_10aba0454;
          }
          uStack_168 = *(long *)(lStack_b8 + 0x28);
          lVar14 = *(long *)(lStack_b8 + 0x18);
          fStack_180 = 127.50018;
          fStack_17c = 2.8026e-45;
          pfStack_140 = (float *)((ulong)&fStack_180 | 8);
          fStack_170 = (float)uStack_168;
          fStack_16c = (float)((ulong)uStack_168 >> 0x20);
          lStack_158 = 0;
          lStack_160 = 0;
          lStack_148 = 0;
          uStack_150 = 0;
          alStack_130[0] = 0;
          alStack_130[1] = 0;
          lVar16 = (long)(int)fVar6 * (long)(int)fVar5;
          plStack_138 = alStack_130;
          if ((lVar16 != 0) && (uStack_168 == 0)) {
            puVar12 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar12 = 1;
            uStack_1e0 = puVar12 + 1;
            uStack_1d8._0_4_ = 3.92364e-44;
            uStack_1d8._4_4_ = 0.0;
            *(undefined1 *)(puVar12 + 8) = 0;
            *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_1e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10aba0a84;
          }
          lVar15 = lVar20 << 2;
          if (fVar6 != 1.4013e-45) {
            lVar15 = lVar14;
          }
          alStack_130[0] = lVar20 << 2;
          if (lVar14 != 0) {
            alStack_130[0] = lVar15;
          }
          fStack_180 = 127.62518;
          if (lVar15 != lVar20 * 4 && lVar14 != 0) {
            fStack_180 = 127.50018;
          }
          alStack_130[1] = 4;
          lStack_158 = uStack_168 + alStack_130[0] * (int)fVar6;
          lStack_160 = (lStack_158 - alStack_130[0]) + lVar20 * 4;
          if (lStack_e8 != 0) {
            piVar1 = (int *)(lStack_e8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&fStack_120);
            }
          }
          if (0 < (int)fStack_11c) {
            lVar14 = 0;
            do {
              pfStack_e0[lVar14] = 0.0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)fStack_11c);
          }
          fStack_118 = fStack_178;
          fStack_114 = fStack_174;
          fStack_120 = fStack_180;
          fStack_11c = fStack_17c;
          fStack_108 = (float)uStack_168;
          fStack_104 = (float)((ulong)uStack_168 >> 0x20);
          fStack_110 = fStack_170;
          fStack_10c = fStack_16c;
          uStack_f8 = (undefined4)lStack_158;
          uStack_f4 = (undefined4)((ulong)lStack_158 >> 0x20);
          fStack_100 = (float)lStack_160;
          uStack_fc = (undefined4)((ulong)lStack_160 >> 0x20);
          lStack_e8 = lStack_148;
          uStack_f0 = (undefined4)uStack_150;
          uStack_ec = (undefined4)((ulong)uStack_150 >> 0x20);
          pfVar7 = pfStack_e0;
          plVar19 = plStack_d8;
          if ((plStack_d8 != alStack_d0) &&
             (pfVar7 = pfVar17, plVar19 = alStack_d0, plStack_d8 != (long *)0x0)) {
            _free(plStack_d8[-1]);
          }
          plStack_d8 = plVar19;
          pfStack_e0 = pfVar7;
          if ((int)fStack_17c < 3) {
            puVar13 = (undefined8 *)((ulong)&fStack_180 | 4);
            *plStack_d8 = *plStack_138;
            plStack_d8[1] = plStack_138[1];
            fStack_180 = 127.5;
            puVar13[1] = 0;
            *puVar13 = 0;
            puVar13[3] = 0;
            puVar13[2] = 0;
            puVar13[5] = 0;
            puVar13[4] = 0;
            *(undefined8 *)((long)puVar13 + 0x34) = 0;
            *(undefined8 *)((long)puVar13 + 0x2c) = 0;
            uStack_1d8 = (float *)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
            if (plStack_138 != alStack_130) {
              _free(plStack_138[-1]);
            }
          }
          else {
            pfStack_e0 = pfStack_140;
            plStack_d8 = plStack_138;
          }
LAB_10aba070c:
          uStack_168 = *param_5;
          fStack_180 = 127.5;
          fStack_17c = 2.8026e-45;
          pfStack_140 = &fStack_178;
          fStack_170 = (float)uStack_168;
          fStack_16c = (float)((ulong)uStack_168 >> 0x20);
          lStack_158 = 0;
          lStack_160 = 0;
          lStack_148 = 0;
          uStack_150 = 0;
          alStack_130[0] = 0;
          alStack_130[1] = 0;
          plStack_138 = alStack_130;
          if ((lVar16 != 0) && (uStack_168 == 0)) {
            puVar12 = (undefined4 *)0x24;
            fStack_178 = fVar6;
            fStack_174 = fVar5;
            func_0x000107c2ae8c();
            *puVar12 = 1;
            uStack_1e0 = puVar12 + 1;
            uStack_1d8._0_4_ = 3.92364e-44;
            uStack_1d8._4_4_ = 0.0;
            *(undefined1 *)(puVar12 + 8) = 0;
            *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_1e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10aba0a84;
          }
          fStack_180 = 127.625;
          alStack_130[1] = 1;
          lStack_160 = uStack_168 + lVar16;
          uStack_1e0._0_4_ = 2.3693558e-38;
          uStack_1d8 = &fStack_120;
          fStack_1d0 = 0.0;
          fStack_1cc = 0.0;
          fStack_90 = 9.477423e-38;
          uStack_80 = 0;
          fStack_178 = fVar6;
          fStack_174 = fVar5;
          lStack_158 = lStack_160;
          alStack_130[0] = lVar20;
          pfStack_88 = &fStack_180;
          func_0x000109ac9fc8(&uStack_1e0,&fStack_90,0xb,0);
          if (lStack_148 != 0) {
            piVar1 = (int *)(lStack_148 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&fStack_180);
            }
          }
          lStack_148 = 0;
          uStack_168 = 0;
          fStack_170 = 0.0;
          fStack_16c = 0.0;
          lStack_158 = 0;
          lStack_160 = 0;
          if (0 < (int)fStack_17c) {
            lVar16 = 0;
            do {
              pfStack_140[lVar16] = 0.0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)fStack_17c);
          }
          if (plStack_138 != alStack_130 && plStack_138 != (long *)0x0) {
            _free(plStack_138[-1]);
          }
          if (lStack_e8 != 0) {
            piVar1 = (int *)(lStack_e8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&fStack_120);
            }
          }
          lStack_e8 = 0;
          fStack_108 = 0.0;
          fStack_104 = 0.0;
          fStack_110 = 0.0;
          fStack_10c = 0.0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          fStack_100 = 0.0;
          uStack_fc = 0;
          if (0 < (int)fStack_11c) {
            lVar16 = 0;
            do {
              pfStack_e0[lVar16] = 0.0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)fStack_11c);
          }
          if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
            _free(plStack_d8[-1]);
          }
          if (plStack_b0 != (long *)0x0) {
            plVar19 = plStack_b0 + 1;
            do {
              lVar16 = *plVar19;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar4) {
                *plVar19 = lVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
            }
          }
          plVar19 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar9 = plStack_98 + 1;
            do {
              lVar16 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
            return;
          }
          ___stack_chk_fail();
        }
        else {
LAB_10aba0454:
          plVar19 = *(long **)(lVar16 + 0x268);
          if (plVar19 == (long *)0x0) {
            fStack_174 = 0.0;
            plVar19 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar19 + 0xb0))();
            fStack_174 = SUB84(plVar19,0);
            plVar19 = *(long **)(*param_3 + 0x268);
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0xb8))();
            }
          }
          uStack_168 = *(long *)(lStack_b8 + 0x28);
          lVar16 = *(long *)(lStack_b8 + 0x18);
          fStack_180 = 127.50018;
          fStack_17c = 2.8026e-45;
          pfStack_140 = &fStack_178;
          fStack_178 = SUB84(plVar19,0);
          fStack_170 = (float)uStack_168;
          fStack_16c = (float)((ulong)uStack_168 >> 0x20);
          lStack_158 = 0;
          lStack_160 = 0;
          lStack_148 = 0;
          uStack_150 = 0;
          alStack_130[0] = 0;
          alStack_130[1] = 0;
          plStack_138 = alStack_130;
          if (((long)(int)fStack_178 * (long)(int)fStack_174 == 0) || (uStack_168 != 0)) {
            lVar15 = (long)(int)fStack_174;
            lVar14 = lVar15 << 2;
            if (fStack_178 != 1.4013e-45) {
              lVar14 = lVar16;
            }
            alStack_130[0] = lVar15 << 2;
            if (lVar16 != 0) {
              alStack_130[0] = lVar14;
            }
            fStack_180 = 127.62518;
            if (lVar14 != lVar15 * 4 && lVar16 != 0) {
              fStack_180 = 127.50018;
            }
            alStack_130[1] = 4;
            lStack_158 = uStack_168 + alStack_130[0] * (int)fStack_178;
            lStack_160 = (lStack_158 - alStack_130[0]) + lVar15 * 4;
            uStack_1e0._0_4_ = 127.5;
            uStack_1d8._4_4_ = 0.0;
            fStack_1d0 = 0.0;
            uStack_1e0._4_4_ = 0.0;
            uStack_1d8._0_4_ = 0.0;
            uStack_1c4 = 0;
            uStack_1c0 = 0;
            fStack_1cc = 0.0;
            uStack_1c8 = 0;
            uStack_1b4 = 0;
            uStack_1bc = 0;
            uStack_1b8 = 0;
            lStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            pfStack_1a0 = (float *)((ulong)&uStack_1e0 | 8);
            alStack_190[0] = 0;
            alStack_190[1] = 0;
            plStack_198 = alStack_190;
            fStack_90 = fVar6;
            fStack_8c = fVar5;
            func_0x000109a83fd0(&uStack_1e0,2,&fStack_90,0x18);
            if (lStack_e8 != 0) {
              piVar1 = (int *)(lStack_e8 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&fStack_120);
              }
            }
            if (0 < (int)fStack_11c) {
              lVar16 = 0;
              do {
                pfStack_e0[lVar16] = 0.0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)fStack_11c);
            }
            fStack_118 = (float)uStack_1d8;
            fStack_114 = uStack_1d8._4_4_;
            fStack_120 = (float)uStack_1e0;
            fStack_11c = uStack_1e0._4_4_;
            fStack_108 = (float)uStack_1c8;
            fStack_104 = (float)uStack_1c4;
            fStack_110 = fStack_1d0;
            fStack_10c = fStack_1cc;
            uStack_f8 = uStack_1b8;
            uStack_f4 = uStack_1b4;
            fStack_100 = (float)uStack_1c0;
            uStack_fc = uStack_1bc;
            lStack_e8 = lStack_1a8;
            uStack_f0 = uStack_1b0;
            uStack_ec = uStack_1ac;
            pfVar7 = pfStack_e0;
            plVar19 = plStack_d8;
            if ((plStack_d8 != alStack_d0) &&
               (pfVar7 = pfVar17, plVar19 = alStack_d0, plStack_d8 != (long *)0x0)) {
              _free(plStack_d8[-1]);
            }
            plStack_d8 = plVar19;
            pfStack_e0 = pfVar7;
            if ((int)uStack_1e0._4_4_ < 3) {
              puVar13 = (undefined8 *)((ulong)&uStack_1e0 | 4);
              *plStack_d8 = *plStack_198;
              plStack_d8[1] = plStack_198[1];
              uStack_1e0._0_4_ = 127.5;
              puVar13[1] = 0;
              *puVar13 = 0;
              puVar13[3] = 0;
              puVar13[2] = 0;
              puVar13[5] = 0;
              puVar13[4] = 0;
              *(undefined8 *)((long)puVar13 + 0x34) = 0;
              *(undefined8 *)((long)puVar13 + 0x2c) = 0;
              if (plStack_198 != alStack_190) {
                _free(plStack_198[-1]);
              }
            }
            else {
              pfStack_e0 = pfStack_1a0;
              plStack_d8 = plStack_198;
            }
            uStack_1e0._0_4_ = 2.3693558e-38;
            uStack_1d8 = &fStack_180;
            fStack_1d0 = 0.0;
            fStack_1cc = 0.0;
            fStack_90 = 9.477423e-38;
            pfStack_88 = &fStack_120;
            uStack_80 = 0;
            fStack_1e8 = fVar5;
            fStack_1e4 = fVar6;
            func_0x000109b0f718(0,0,&uStack_1e0,&fStack_90,&fStack_1e8,1);
            if (lStack_148 != 0) {
              piVar1 = (int *)(lStack_148 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&fStack_180);
              }
            }
            lStack_148 = 0;
            uStack_168 = 0;
            fStack_170 = 0.0;
            fStack_16c = 0.0;
            lStack_158 = 0;
            lStack_160 = 0;
            if (0 < (int)fStack_17c) {
              lVar16 = 0;
              do {
                pfStack_140[lVar16] = 0.0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)fStack_17c);
            }
            if (plStack_138 != alStack_130 && plStack_138 != (long *)0x0) {
              _free(plStack_138[-1]);
            }
            lVar16 = (long)(int)fVar6 * (long)(int)fVar5;
            goto LAB_10aba070c;
          }
        }
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        uStack_1e0 = puVar12 + 1;
        uStack_1d8._0_4_ = 3.92364e-44;
        uStack_1d8._4_4_ = 0.0;
        *(undefined1 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_1e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        goto LAB_10aba0a84;
      }
    }
    puVar11 = &UNK_10f696b8c;
  }
  FUN_10a00946c(puVar11);
LAB_10aba0a84:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba0a88);
  (*pcVar8)();
}



/* Entry: 10aba0b70; end: 10aba0c5b;  */

long * FUN_10aba0b70(undefined8 *param_1,long *param_2,undefined **param_3,int *param_4,
                    undefined8 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined8 **ppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined8 *puVar31;
  long lVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar36;
  undefined **unaff_x22;
  long *unaff_x23;
  uint uVar37;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  long *plStack_310;
  long *plStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2dc;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 *puStack_140;
  undefined2 uStack_132;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *apuStack_100 [2];
  char cStack_e9;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  char cStack_89;
  long *plStack_88;
  
  if (*param_3 == (undefined *)0x0) {
    FUN_10a00946c(&UNK_10f696bce);
LAB_10aba0c50:
    plVar16 = (long *)&UNK_10f696c0b;
    FUN_10a00946c();
    plStack_88 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar16 + 1;
    *plVar14 = 0;
    *plVar16 = (long)&PTR_FUN_110c4fd08;
    lVar22 = param_2[1];
    lVar13 = *param_2;
    plVar33 = plVar16 + 2;
    plVar16[3] = param_2[1];
    *plVar33 = lVar13;
    if (lVar22 != 0) {
      plVar36 = (long *)(lVar22 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar7) {
          *plVar36 = *plVar36 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x000107c2b054(apuStack_100,&UNK_10f6753ed);
    func_0x000107c2b054(auStack_e8,&UNK_10f675426);
    func_0x000107c2b054(auStack_d0,&UNK_10f675409);
    func_0x000107c2b054(&uStack_b8,&UNK_10f696c3e);
    func_0x000107c2b054(auStack_a0,&UNK_10f63f092);
    FUN_10a5b8c64(&uStack_130,apuStack_100,&plStack_88,5);
    lVar13 = 0;
    do {
      if ((&cStack_89)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x78);
    uStack_132 = 0x3f;
    lVar22 = *plVar33;
    lVar13 = 0x98;
    __Znwm();
    func_0x000107c2b054(apuStack_100,&UNK_10f646d24);
    puStack_140 = &uStack_132;
    uStack_150 = 0;
    uStack_148 = 0x1000002000;
    FUN_10a19465c(lVar13,&uStack_118,&uStack_130,apuStack_100,lVar22 + 0x18,0,0,0);
    if (cStack_e9 < '\0') {
      __ZdlPv(apuStack_100[0]);
    }
    lVar22 = *plVar14;
    *plVar14 = lVar13;
    if (lVar22 != 0) {
      FUN_10a1944f0(plVar14);
    }
    apuStack_100[0] = &uStack_130;
    FUN_10a0426d8(apuStack_100);
    apuStack_100[0] = &uStack_118;
    ppuVar17 = apuStack_100;
    FUN_10a0426d8();
    if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_88) {
      return plVar16;
    }
    ___stack_chk_fail();
    if (cStack_e9 < '\0') {
      __ZdlPv(apuStack_100[0]);
    }
    __ZdlPv(lVar13);
    apuStack_100[0] = &uStack_130;
    FUN_10a0426d8(apuStack_100);
    apuStack_100[0] = &uStack_118;
    FUN_10a0426d8(apuStack_100);
    func_0x00010a09dbbc(plVar33);
    lVar13 = *plVar14;
    *plVar14 = 0;
    if (lVar13 != 0) {
      FUN_10a1944f0(plVar14);
    }
    __Unwind_Resume();
    return ppuVar17[1];
  }
  if ((ulong)param_5[1] < (ulong)((long)param_4[1] * (long)*param_4)) goto LAB_10aba0c50;
  plVar16 = *(long **)(*param_3 + 0x268);
  if (plVar16 == (long *)0x0) {
    uVar37 = 0;
    plVar16 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar16 + 0xb0))();
    uVar37 = (uint)plVar16;
    plVar16 = *(long **)(*param_3 + 0x268);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0xb8))();
    }
  }
  if (uVar37 <= (uint)plVar16) {
    uVar37 = (uint)plVar16;
  }
  ppuVar19 = param_3;
  if (0x80 < uVar37) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = 0;
    FUN_10a2421c8();
    uStack_2e0 = 0;
    uStack_2dc = 0x100000000;
    uStack_2f8 = *(undefined8 *)param_4;
    uStack_2e8 = 0x100000010;
    uStack_2f0 = 0x400000001;
    FUN_10a048f04(&plStack_310,*(undefined8 *)(lVar13 + 0x1e0),&uStack_2f8);
    if ((plStack_310 == (long *)0x0) || (*param_3 == (undefined *)0x0)) {
      FUN_10a00946c(&UNK_10f696ad8);
      goto LAB_10ab9fff8;
    }
    lStack_260 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    auStack_a0[0] = 0xffffffffffffffff;
    auStack_a0[1] = 0xffffffffffffffff;
    plStack_88 = (long *)0x0;
    uStack_90 = 0;
    uStack_278 = 0;
    plStack_2c8 = (long *)0x0;
    uStack_2d0 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0xffffffffffffffff;
    uStack_2b0 = 0xffffffffffffffff;
    uStack_2a8 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_298 = 0;
    uStack_290 = 0xffffffffffffffff;
    uStack_288 = 0xffffffffffffffff;
    uStack_280 = 0;
    uStack_270 = 0;
    FUN_10a061728(&lStack_260,&uStack_2d0);
    plVar16 = plStack_2a0;
    if (plStack_2a0 != (long *)0x0) {
      plVar14 = plStack_2a0 + 1;
      do {
        lVar13 = *plVar14;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_2c8;
    if (plStack_2c8 != (long *)0x0) {
      plVar14 = plStack_2c8 + 1;
      do {
        lVar13 = *plVar14;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_250;
    if (plStack_308 != (long *)0x0) {
      plVar14 = plStack_308 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = *plVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plStack_250 = plStack_308;
    plStack_258 = plStack_310;
    if (plVar16 != (long *)0x0) {
      plVar14 = plVar16 + 1;
      do {
        lVar13 = *plVar14;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    uStack_248 = 0;
    uStack_240 = 0xffffffffffffffff;
    uStack_238 = 0xffffffffffffffff;
    auVar40 = NEON_fmov(0x3f800000,4);
    uStack_200 = auVar40._8_8_;
    uStack_208 = auVar40._0_8_;
    (**(code **)(*param_2 + 0x88))(param_2,&lStack_260);
    plVar16 = plStack_310;
    plVar14 = plStack_310;
    (**(code **)(*plStack_310 + 0x28))();
    (**(code **)(*plVar16 + 0x30))();
    uVar37 = (uint)plVar14;
    if (uVar37 < 2) {
      uVar37 = 1;
    }
    uVar11 = (uint)plVar16;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    plStack_2c8 = (long *)CONCAT44(uVar11,uVar37);
    uStack_2d0 = 0;
    (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2d0);
    unaff_x23 = param_2 + 4;
    FUN_10a5dfd94(unaff_x23,*param_1);
    unaff_x24 = param_2 + 4;
    FUN_10a01eacc(unaff_x24,unaff_x23);
    func_0x000107c2b074(&uStack_2d0,&PTR_DAT_110c50978);
    if (*param_3 == (undefined *)0x0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*param_3 + 0x268);
    }
    FUN_10a5e17a8(unaff_x24,&uStack_2d0,uVar18,&UNK_10e4ac8a8);
    if (lStack_2c0 < 0) {
      __ZdlPv(uStack_2d0);
    }
    plStack_2c8 = (long *)0x0;
    uStack_2d0 = 0x3f800000;
    uStack_2b8 = 0;
    lStack_2c0 = 0x3f80000000000000;
    uStack_2a8 = 0x3f800000;
    uStack_2b0 = 0;
    uStack_298 = 0x3f80000000000000;
    plStack_2a0 = (long *)0x0;
    puVar20 = (undefined8 *)0x1;
    (**(code **)(*param_2 + 0x58))(param_2,param_1[2],unaff_x23,&uStack_2d0);
    (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
    plVar16 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar14 = plStack_88 + 1;
      do {
        lVar13 = *plVar14;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    unaff_x20 = plStack_b0;
    unaff_x21 = &lStack_260;
    if (plStack_b0 != (long *)0x0) {
      plVar16 = plStack_b0 + 1;
      do {
        lVar13 = *plVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      }
    }
    func_0x00010a048e34(&plStack_258,lStack_260);
    if (plStack_310 != (long *)0x0) {
      ppuVar19 = &PTR_DAT_110baa0e8;
      param_4 = (int *)0xfffffffffffffffe;
      ___dynamic_cast(plStack_310,&PTR_DAT_110ba0e18);
      if (plStack_310 != (long *)0x0) {
        lStack_260 = 0;
        plStack_258 = (long *)0x0;
        plVar16 = &lStack_260;
        (**(code **)*plStack_310)();
        plVar14 = plStack_258;
        iVar4 = *(int *)(lStack_260 + 0x14);
        if (iVar4 != 0) {
          uVar27 = 0;
          iVar30 = 0;
          plVar33 = (long *)0x0;
          iVar21 = *(int *)(lStack_260 + 0x20);
          iVar12 = *(int *)(lStack_260 + 0x18);
          lVar13 = *(long *)(lStack_260 + 0x28);
          uVar37 = *(uint *)(lStack_260 + 0x10);
          do {
            uVar34 = uVar27;
            uVar35 = (ulong)uVar37;
            if (uVar37 != 0) {
              do {
                plStack_310 = plVar33;
                if ((long *)param_5[1] <= plStack_310) goto LAB_10ab9fff8;
                bVar5 = *(byte *)(lVar13 + uVar34);
                plVar16 = (long *)(ulong)bVar5;
                plVar33 = (long *)(ulong)((int)plStack_310 + 1);
                ppuVar19 = (undefined **)*param_5;
                *(byte *)((long)ppuVar19 + (long)plStack_310) = bVar5;
                uVar34 = (ulong)(uint)((int)uVar34 + iVar21);
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
            iVar30 = iVar30 + 1;
            uVar27 = (ulong)(uint)((int)uVar27 + iVar12);
          } while (iVar30 != iVar4);
        }
        param_5 = puVar20;
        if (plStack_258 != (long *)0x0) {
          plVar33 = plStack_258 + 1;
          do {
            lVar13 = *plVar33;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar7) {
              *plVar33 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_258 + 0x10))(plStack_258);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plStack_310 = plVar14;
            param_5 = puVar20;
          }
        }
        unaff_x19 = plStack_310;
        if (plStack_308 != (long *)0x0) {
          plVar14 = plStack_308 + 1;
          do {
            lVar13 = *plVar14;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar7) {
              *plVar14 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_308 + 0x10))(plStack_308);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x19 = plStack_308;
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
          return unaff_x19;
        }
        ___stack_chk_fail();
        FUN_10a0d92c8(&lStack_260);
        func_0x00010a0523dc(&plStack_310);
        do {
          __Unwind_Resume();
        } while ((int)plVar16 == 0);
        unaff_x30 = FUN_10aba009c;
        func_0x000104bd46a0(unaff_x19);
        register0x00000008 = (BADSPACEBASE *)&plStack_310;
        unaff_x22 = param_3;
        goto code_r0x00010aba009c;
      }
    }
    FUN_10a00946c(&UNK_10f696af2);
LAB_10ab9fff8:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab9fffc);
    (*pcVar10)();
  }
code_r0x00010aba009c:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(*ppuVar19 + 0x50);
  if (lVar13 == 0) {
    FUN_10a00946c(&UNK_10f696b37);
LAB_10aba0948:
    FUN_10a00946c(&UNK_10f696b58);
LAB_10aba0954:
    puVar23 = &UNK_10f696b73;
  }
  else {
    plVar16 = *(long **)(*ppuVar19 + 0x268);
    if (plVar16 == (long *)0x0) goto LAB_10aba0948;
    puVar20 = (undefined8 *)0x1;
    plVar14 = plVar16;
    FUN_10a088744();
    *(int *)((long)register0x00000008 + -0xa8) = (int)plVar14;
    if (puVar20 == (undefined8 *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    }
    else {
      lVar22 = puVar20[1];
      uVar18 = *puVar20;
      *(undefined8 *)((long)register0x00000008 + -0x98) = puVar20[1];
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar18;
      if (lVar22 != 0) {
        plVar33 = (long *)(lVar22 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar7) {
            *plVar33 = *plVar33 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    if ((int)plVar14 != 2) goto LAB_10aba0954;
    plVar14 = *(long **)(*ppuVar19 + 0x268);
    if ((plVar14 != (long *)0x0) && ((**(code **)(*plVar14 + 0xe8))(), (int)plVar14 == 4)) {
      bVar5 = *(byte *)(lVar13 + 0x29);
      if (5 < (ulong)bVar5) goto LAB_10aba0a84;
      *(undefined8 **)((long)register0x00000008 + -0x1f8) = param_5;
      plVar36 = *(long **)(lVar13 + (ulong)bVar5 * 8 + 0x30);
      plVar14 = plVar16;
      (**(code **)(*plVar16 + 0xb0))(plVar16);
      plVar33 = plVar16;
      (**(code **)(*plVar16 + 0xb8))(plVar16);
      (**(code **)(*plVar16 + 0x90))((undefined1 *)((long)register0x00000008 + -0x180),plVar16);
      fVar46 = (float)*(undefined8 *)((long)register0x00000008 + -0x168);
      fVar47 = *(float *)((long)register0x00000008 + -0x160);
      fVar43 = (float)*(undefined8 *)((long)register0x00000008 + -0x174);
      fVar39 = (float)*(undefined8 *)((long)register0x00000008 + -0x180);
      fVar44 = (float)*(undefined8 *)((long)register0x00000008 + -0x170);
      fVar45 = (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x170) >> 0x20);
      fVar41 = (float)*(undefined8 *)((long)register0x00000008 + -0x17c);
      fVar42 = (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x17c) >> 0x20);
      fVar8 = -fVar43 + fVar39 * 0.0;
      fVar9 = -(float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x174) >> 0x20) +
              (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x180) >> 0x20) * 0.0;
      fVar38 = (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x168) >> 0x20);
      *(ulong *)((long)register0x00000008 + -0x114) =
           CONCAT44((float)(CONCAT17((char)((uint)fVar9 >> 0x18),
                                     CONCAT16((char)((uint)fVar9 >> 0x10),
                                              CONCAT15((char)((uint)fVar9 >> 8),
                                                       CONCAT14(SUB41(fVar9,0),fVar8)))) >> 0x20) +
                    fVar38 * 0.0,fVar8 + fVar46 * 0.0);
      *(ulong *)((long)register0x00000008 + -0x11c) =
           CONCAT44(fVar42 + fVar45 * 0.0 + fVar47 * 0.0,fVar41 + fVar44 * 0.0 + fVar38 * 0.0);
      *(float *)((long)register0x00000008 + -0x120) = fVar39 + fVar43 * 0.0 + fVar46 * 0.0;
      *(float *)((long)register0x00000008 + -0x10c) = -fVar45 + fVar42 * 0.0 + fVar47 * 0.0;
      *(float *)((long)register0x00000008 + -0x108) = fVar43 + fVar39 * 0.0 + fVar46;
      *(float *)((long)register0x00000008 + -0x104) =
           fVar44 + fVar41 * 0.0 + *(float *)((long)register0x00000008 + -0x164);
      *(float *)((long)register0x00000008 + -0x100) = fVar45 + fVar42 * 0.0 + fVar47;
      (**(code **)(*plVar36 + 0x30))
                ((undefined1 *)((long)register0x00000008 + -0xb8),plVar36,
                 (undefined1 *)((long)register0x00000008 + -0xa0),plVar14,plVar33,
                 (undefined1 *)((long)register0x00000008 + -0x120),1);
      iVar4 = *param_4;
      iVar30 = param_4[1];
      *(undefined4 *)((long)register0x00000008 + -0x120) = 0x42ff0000;
      uVar27 = (ulong)((long)register0x00000008 + -0x120) | 8;
      *(undefined8 *)((long)register0x00000008 + -0x114) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x11c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x104) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x10c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf4) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xfc) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      puVar20 = (undefined8 *)((long)register0x00000008 + -0xd0);
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar27;
      *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar20;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      puVar23 = *ppuVar19;
      plVar16 = *(long **)(puVar23 + 0x268);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0xb0))();
        puVar23 = *ppuVar19;
      }
      lVar13 = (long)iVar4;
      *(long *)((long)register0x00000008 + -0x1f0) = (long)iVar30;
      if ((int)plVar16 == iVar4) {
        plVar16 = *(long **)(puVar23 + 0x268);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0xb8))();
        }
        if ((int)plVar16 != iVar30) {
          puVar23 = *ppuVar19;
          goto LAB_10aba0454;
        }
        lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0xb8) + 0x28);
        lVar28 = *(long *)(*(long *)((long)register0x00000008 + -0xb8) + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0x242ff0018;
        *(int *)((long)register0x00000008 + -0x178) = iVar30;
        *(int *)((long)register0x00000008 + -0x174) = iVar4;
        *(long *)((long)register0x00000008 + -0x170) = lVar24;
        *(long *)((long)register0x00000008 + -0x168) = lVar24;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(ulong *)((long)register0x00000008 + -0x140) =
             (ulong)((long)register0x00000008 + -0x180) | 8;
        *(undefined8 **)((long)register0x00000008 + -0x138) =
             (undefined8 *)((long)register0x00000008 + -0x130);
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        lVar22 = (long)(int)*(undefined8 *)((long)register0x00000008 + -0x1f0) * (long)iVar4;
        if ((lVar22 != 0) && (lVar24 == 0)) {
          puVar15 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          *(undefined4 **)((long)register0x00000008 + -0x1e0) = puVar15 + 1;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x1c;
          *(undefined1 *)(puVar15 + 8) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,(undefined1 *)((long)register0x00000008 + -0x1e0),
                              &UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          goto LAB_10aba0a84;
        }
        lVar32 = lVar13 << 2;
        if (iVar30 != 1) {
          lVar32 = lVar28;
        }
        lVar3 = lVar13 << 2;
        if (lVar28 != 0) {
          lVar3 = lVar32;
        }
        uVar2 = 0x42ff4018;
        if (lVar32 != lVar13 * 4 && lVar28 != 0) {
          uVar2 = 0x42ff0018;
        }
        *(undefined4 *)((long)register0x00000008 + -0x180) = uVar2;
        *(long *)((long)register0x00000008 + -0x130) = lVar3;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 4;
        *(long *)((long)register0x00000008 + -0x160) =
             ((lVar24 + lVar3 * *(long *)((long)register0x00000008 + -0x1f0)) - lVar3) + lVar13 * 4;
        *(long *)((long)register0x00000008 + -0x158) =
             lVar24 + lVar3 * *(long *)((long)register0x00000008 + -0x1f0);
        if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0xe8) + 0x14);
          do {
            iVar21 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x120));
          }
        }
        if (0 < *(int *)((long)register0x00000008 + -0x11c)) {
          lVar24 = 0;
          lVar28 = *(long *)((long)register0x00000008 + -0xe0);
          do {
            *(undefined4 *)(lVar28 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *(int *)((long)register0x00000008 + -0x11c));
        }
        iVar21 = *(int *)((long)register0x00000008 + -0x17c);
        *(undefined8 *)((long)register0x00000008 + -0x118) =
             *(undefined8 *)((long)register0x00000008 + -0x178);
        *(undefined8 *)((long)register0x00000008 + -0x120) =
             *(undefined8 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x108) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        *(undefined8 *)((long)register0x00000008 + -0x110) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        *(undefined8 *)((long)register0x00000008 + -0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0x158);
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x160);
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0x148);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x150);
        puVar29 = *(undefined8 **)((long)register0x00000008 + -0xd8);
        if (puVar29 != puVar20) {
          if (puVar29 != (undefined8 *)0x0) {
            _free(puVar29[-1]);
            iVar21 = *(int *)((long)register0x00000008 + -0x17c);
          }
          *(ulong *)((long)register0x00000008 + -0xe0) = uVar27;
          *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar20;
          puVar29 = puVar20;
        }
        puVar31 = *(undefined8 **)((long)register0x00000008 + -0x138);
        if (iVar21 < 3) {
          puVar25 = (undefined8 *)((ulong)((long)register0x00000008 + -0x180) | 4);
          *puVar29 = *puVar31;
          puVar29[1] = puVar31[1];
          *(undefined4 *)((long)register0x00000008 + -0x180) = 0x42ff0000;
          puVar25[1] = 0;
          *puVar25 = 0;
          puVar25[3] = 0;
          puVar25[2] = 0;
          puVar25[5] = 0;
          puVar25[4] = 0;
          *(undefined8 *)((long)puVar25 + 0x34) = 0;
          *(undefined8 *)((long)puVar25 + 0x2c) = 0;
          if (puVar31 != (undefined8 *)((long)register0x00000008 + -0x130)) {
            _free(puVar31[-1]);
          }
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0xe0) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar31;
        }
LAB_10aba070c:
        lVar24 = **(long **)((long)register0x00000008 + -0x1f8);
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0x242ff0000;
        *(int *)((long)register0x00000008 + -0x178) = iVar30;
        *(int *)((long)register0x00000008 + -0x174) = iVar4;
        *(long *)((long)register0x00000008 + -0x170) = lVar24;
        *(long *)((long)register0x00000008 + -0x168) = lVar24;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x140) =
             (undefined1 *)((long)register0x00000008 + -0x178);
        *(undefined1 **)((long)register0x00000008 + -0x138) =
             (undefined1 *)((long)register0x00000008 + -0x130);
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        if ((lVar22 != 0) && (lVar24 == 0)) {
          puVar15 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          *(undefined4 **)((long)register0x00000008 + -0x1e0) = puVar15 + 1;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x1c;
          *(undefined1 *)(puVar15 + 8) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,(undefined1 *)((long)register0x00000008 + -0x1e0),
                              &UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          goto LAB_10aba0a84;
        }
        *(undefined4 *)((long)register0x00000008 + -0x180) = 0x42ff4000;
        *(long *)((long)register0x00000008 + -0x130) = lVar13;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 1;
        *(long *)((long)register0x00000008 + -0x160) = lVar24 + lVar22;
        *(long *)((long)register0x00000008 + -0x158) = lVar24 + lVar22;
        *(undefined4 *)((long)register0x00000008 + -0x1e0) = 0x1010000;
        *(undefined1 **)((long)register0x00000008 + -0x1d8) =
             (undefined1 *)((long)register0x00000008 + -0x120);
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x90) = 0x2010000;
        *(undefined1 **)((long)register0x00000008 + -0x88) =
             (undefined1 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        plVar16 = (long *)((long)register0x00000008 + -0x1e0);
        func_0x000109ac9fc8(plVar16,(undefined1 *)((long)register0x00000008 + -0x90),0xb,0);
        if (*(long *)((long)register0x00000008 + -0x148) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x148) + 0x14);
          do {
            iVar4 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 + -1 == 0) {
            plVar16 = (long *)((long)register0x00000008 + -0x180);
            func_0x000109a848d4(plVar16);
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x17c)) {
          lVar13 = 0;
          lVar22 = *(long *)((long)register0x00000008 + -0x140);
          do {
            *(undefined4 *)(lVar22 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)register0x00000008 + -0x17c));
        }
        puVar26 = *(undefined1 **)((long)register0x00000008 + -0x138);
        if (puVar26 != (undefined1 *)((long)register0x00000008 + -0x130) &&
            puVar26 != (undefined1 *)0x0) {
          plVar16 = *(long **)(puVar26 + -8);
          _free(plVar16);
        }
        if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0xe8) + 0x14);
          do {
            iVar4 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 + -1 == 0) {
            plVar16 = (long *)((long)register0x00000008 + -0x120);
            func_0x000109a848d4(plVar16);
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x11c)) {
          lVar13 = 0;
          lVar22 = *(long *)((long)register0x00000008 + -0xe0);
          do {
            *(undefined4 *)(lVar22 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)register0x00000008 + -0x11c));
        }
        puVar29 = *(undefined8 **)((long)register0x00000008 + -0xd8);
        if (puVar29 != puVar20 && puVar29 != (undefined8 *)0x0) {
          plVar16 = (long *)puVar29[-1];
          _free(plVar16);
        }
        plVar14 = *(long **)((long)register0x00000008 + -0xb0);
        if (plVar14 != (long *)0x0) {
          plVar33 = plVar14 + 1;
          do {
            lVar13 = *plVar33;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar7) {
              *plVar33 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            plVar16 = plVar14;
          }
        }
        plVar14 = *(long **)((long)register0x00000008 + -0x98);
        if (plVar14 != (long *)0x0) {
          plVar33 = plVar14 + 1;
          do {
            lVar13 = *plVar33;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar7) {
              *plVar33 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            plVar16 = plVar14;
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)
           ) {
          return plVar16;
        }
        ___stack_chk_fail();
      }
      else {
LAB_10aba0454:
        plVar16 = *(long **)(puVar23 + 0x268);
        if (plVar16 == (long *)0x0) {
          iVar21 = 0;
          plVar16 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar16 + 0xb0))();
          iVar21 = (int)plVar16;
          plVar16 = *(long **)(*ppuVar19 + 0x268);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0xb8))();
          }
        }
        lVar22 = *(long *)(*(long *)((long)register0x00000008 + -0xb8) + 0x28);
        lVar24 = *(long *)(*(long *)((long)register0x00000008 + -0xb8) + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0x242ff0018;
        iVar12 = (int)plVar16;
        *(int *)((long)register0x00000008 + -0x178) = iVar12;
        *(int *)((long)register0x00000008 + -0x174) = iVar21;
        *(long *)((long)register0x00000008 + -0x170) = lVar22;
        *(long *)((long)register0x00000008 + -0x168) = lVar22;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x140) =
             (undefined1 *)((long)register0x00000008 + -0x178);
        *(undefined1 **)((long)register0x00000008 + -0x138) =
             (undefined1 *)((long)register0x00000008 + -0x130);
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        if (((long)iVar12 * (long)iVar21 == 0) || (lVar22 != 0)) {
          lVar32 = (long)iVar21;
          lVar28 = lVar32 << 2;
          if (iVar12 != 1) {
            lVar28 = lVar24;
          }
          lVar3 = lVar32 << 2;
          if (lVar24 != 0) {
            lVar3 = lVar28;
          }
          uVar2 = 0x42ff4018;
          if (lVar28 != lVar32 * 4 && lVar24 != 0) {
            uVar2 = 0x42ff0018;
          }
          *(undefined4 *)((long)register0x00000008 + -0x180) = uVar2;
          *(long *)((long)register0x00000008 + -0x130) = lVar3;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 4;
          lVar22 = lVar22 + lVar3 * iVar12;
          *(long *)((long)register0x00000008 + -0x160) = (lVar22 - lVar3) + lVar32 * 4;
          *(long *)((long)register0x00000008 + -0x158) = lVar22;
          *(undefined4 *)((long)register0x00000008 + -0x1e0) = 0x42ff0000;
          *(undefined8 *)((long)register0x00000008 + -0x1d4) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1dc) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1c4) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1cc) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1b4) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1bc) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
          *(ulong *)((long)register0x00000008 + -0x1a0) =
               (ulong)((long)register0x00000008 + -0x1e0) | 8;
          *(undefined8 **)((long)register0x00000008 + -0x198) =
               (undefined8 *)((long)register0x00000008 + -400);
          *(undefined8 *)((long)register0x00000008 + -400) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
          *(int *)((long)register0x00000008 + -0x90) = iVar30;
          *(int *)((long)register0x00000008 + -0x8c) = iVar4;
          func_0x000109a83fd0((undefined1 *)((long)register0x00000008 + -0x1e0),2,
                              (undefined1 *)((long)register0x00000008 + -0x90),0x18);
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            piVar1 = (int *)(*(long *)((long)register0x00000008 + -0xe8) + 0x14);
            do {
              iVar21 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar21 + -1 == 0) {
              func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x120));
            }
          }
          if (0 < *(int *)((long)register0x00000008 + -0x11c)) {
            lVar22 = 0;
            lVar24 = *(long *)((long)register0x00000008 + -0xe0);
            do {
              *(undefined4 *)(lVar24 + lVar22 * 4) = 0;
              lVar22 = lVar22 + 1;
            } while (lVar22 < *(int *)((long)register0x00000008 + -0x11c));
          }
          iVar21 = *(int *)((long)register0x00000008 + -0x1dc);
          *(undefined8 *)((long)register0x00000008 + -0x118) =
               *(undefined8 *)((long)register0x00000008 + -0x1d8);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0x1e0);
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)((long)register0x00000008 + -0x1c8);
          *(undefined8 *)((long)register0x00000008 + -0x110) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          *(undefined8 *)((long)register0x00000008 + -0xf8) =
               *(undefined8 *)((long)register0x00000008 + -0x1b8);
          *(undefined8 *)((long)register0x00000008 + -0x100) =
               *(undefined8 *)((long)register0x00000008 + -0x1c0);
          *(undefined8 *)((long)register0x00000008 + -0xe8) =
               *(undefined8 *)((long)register0x00000008 + -0x1a8);
          *(undefined8 *)((long)register0x00000008 + -0xf0) =
               *(undefined8 *)((long)register0x00000008 + -0x1b0);
          puVar29 = *(undefined8 **)((long)register0x00000008 + -0xd8);
          if (puVar29 != puVar20) {
            if (puVar29 != (undefined8 *)0x0) {
              _free(puVar29[-1]);
              iVar21 = *(int *)((long)register0x00000008 + -0x1dc);
            }
            *(ulong *)((long)register0x00000008 + -0xe0) = uVar27;
            *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar20;
            puVar29 = puVar20;
          }
          puVar31 = *(undefined8 **)((long)register0x00000008 + -0x198);
          if (iVar21 < 3) {
            puVar25 = (undefined8 *)((ulong)((long)register0x00000008 + -0x1e0) | 4);
            *puVar29 = *puVar31;
            puVar29[1] = puVar31[1];
            *(undefined4 *)((long)register0x00000008 + -0x1e0) = 0x42ff0000;
            puVar25[1] = 0;
            *puVar25 = 0;
            puVar25[3] = 0;
            puVar25[2] = 0;
            puVar25[5] = 0;
            puVar25[4] = 0;
            *(undefined8 *)((long)puVar25 + 0x34) = 0;
            *(undefined8 *)((long)puVar25 + 0x2c) = 0;
            if (puVar31 != (undefined8 *)((long)register0x00000008 + -400)) {
              _free(puVar31[-1]);
            }
          }
          else {
            *(undefined8 *)((long)register0x00000008 + -0xe0) =
                 *(undefined8 *)((long)register0x00000008 + -0x1a0);
            *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar31;
          }
          *(int *)((long)register0x00000008 + -0x1e4) = iVar30;
          *(undefined4 *)((long)register0x00000008 + -0x1e0) = 0x1010000;
          *(undefined1 **)((long)register0x00000008 + -0x1d8) =
               (undefined1 *)((long)register0x00000008 + -0x180);
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          *(undefined4 *)((long)register0x00000008 + -0x90) = 0x2010000;
          *(undefined1 **)((long)register0x00000008 + -0x88) =
               (undefined1 *)((long)register0x00000008 + -0x120);
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(int *)((long)register0x00000008 + -0x1e8) = iVar4;
          func_0x000109b0f718(0,0,(undefined1 *)((long)register0x00000008 + -0x1e0),
                              (undefined1 *)((long)register0x00000008 + -0x90),
                              (undefined1 *)((long)register0x00000008 + -0x1e8),1);
          if (*(long *)((long)register0x00000008 + -0x148) != 0) {
            piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x148) + 0x14);
            do {
              iVar21 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar21 + -1 == 0) {
              func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x180));
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
          if (0 < *(int *)((long)register0x00000008 + -0x17c)) {
            lVar22 = 0;
            lVar24 = *(long *)((long)register0x00000008 + -0x140);
            do {
              *(undefined4 *)(lVar24 + lVar22 * 4) = 0;
              lVar22 = lVar22 + 1;
            } while (lVar22 < *(int *)((long)register0x00000008 + -0x17c));
          }
          puVar26 = *(undefined1 **)((long)register0x00000008 + -0x138);
          if (puVar26 != (undefined1 *)((long)register0x00000008 + -0x130) &&
              puVar26 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puVar26 + -8));
          }
          lVar22 = (long)(int)*(undefined8 *)((long)register0x00000008 + -0x1f0) * (long)iVar4;
          goto LAB_10aba070c;
        }
      }
      puVar15 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      *(undefined4 **)((long)register0x00000008 + -0x1e0) = puVar15 + 1;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x1c;
      *(undefined1 *)(puVar15 + 8) = 0;
      *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,(undefined1 *)((long)register0x00000008 + -0x1e0),
                          &UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
      goto LAB_10aba0a84;
    }
    puVar23 = &UNK_10f696b8c;
  }
  FUN_10a00946c(puVar23);
LAB_10aba0a84:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10aba0a88);
  (*pcVar10)();
}



/* Entry: 10aba0c5c; end: 10aba0f27;  */

undefined8 * FUN_10aba0c5c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [2];
  char cStack_a9;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  *param_1 = &PTR_FUN_110c4fd08;
  lVar5 = param_2[1];
  lVar8 = *param_2;
  plVar7 = param_1 + 2;
  param_1[3] = param_2[1];
  *plVar7 = lVar8;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  func_0x000107c2b054(apuStack_c0,&UNK_10f6753ed);
  func_0x000107c2b054(auStack_a8,&UNK_10f675426);
  func_0x000107c2b054(auStack_90,&UNK_10f675409);
  func_0x000107c2b054(auStack_78,&UNK_10f696c3e);
  func_0x000107c2b054(auStack_60,&UNK_10f63f092);
  FUN_10a5b8c64(&uStack_f0,apuStack_c0,&lStack_48,5);
  lVar5 = 0;
  do {
    if ((&cStack_49)[lVar5] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
    }
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x78);
  uStack_f2 = 0x3f;
  lVar8 = *plVar7;
  lVar5 = 0x98;
  __Znwm();
  func_0x000107c2b054(apuStack_c0,&UNK_10f646d24);
  FUN_10a19465c(lVar5,&uStack_d8,&uStack_f0,apuStack_c0,lVar8 + 0x18,0,0,0,0,0x1000002000,&uStack_f2
               );
  if (cStack_a9 < '\0') {
    __ZdlPv(apuStack_c0[0]);
  }
  lVar8 = *plVar6;
  *plVar6 = lVar5;
  if (lVar8 != 0) {
    FUN_10a1944f0(plVar6);
  }
  apuStack_c0[0] = &uStack_f0;
  FUN_10a0426d8(apuStack_c0);
  apuStack_c0[0] = &uStack_d8;
  ppuVar4 = apuStack_c0;
  FUN_10a0426d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_a9 < '\0') {
    __ZdlPv(apuStack_c0[0]);
  }
  __ZdlPv(lVar5);
  apuStack_c0[0] = &uStack_f0;
  FUN_10a0426d8(apuStack_c0);
  apuStack_c0[0] = &uStack_d8;
  FUN_10a0426d8(apuStack_c0);
  func_0x00010a09dbbc(plVar7);
  lVar5 = *plVar6;
  *plVar6 = 0;
  if (lVar5 != 0) {
    FUN_10a1944f0(plVar6);
  }
  __Unwind_Resume();
  return ppuVar4[1];
}



/* Entry: 10aba0f28; end: 10aba0f37;  */

undefined8 FUN_10aba0f28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aba0f38; end: 10aba1097;  */

void FUN_10aba0f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)0x858;
  __Znwm();
  FUN_10aba1b90();
  *puVar1 = &PTR_FUN_110c533e8;
  puVar2 = (undefined8 *)0x1b8;
  __Znwm();
  puVar2[0x36] = 0;
  puVar2[0x33] = 0;
  puVar2[0x32] = 0;
  puVar2[0x35] = 0;
  puVar2[0x34] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x31] = 0;
  puVar2[0x30] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x27] = 0;
  puVar2[0x26] = 0;
  puVar2[0x29] = 0;
  puVar2[0x28] = 0;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3 = (undefined8 *)0x32b8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar4 = puVar3 + 3;
  *puVar3 = &PTR_FUN_110baa380;
  FUN_10ad60874();
  puVar2[2] = puVar4;
  puVar2[3] = puVar3;
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  puVar2[0x12] = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  puVar2[0x16] = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  *(undefined2 *)(puVar2 + 0x18) = 0;
  puVar2[0x1c] = 0;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  *(undefined2 *)(puVar2 + 0x1e) = 0;
  puVar2[0x22] = 0;
  *(undefined1 *)(puVar2 + 0x23) = 0;
  *(undefined2 *)(puVar2 + 0x24) = 0;
  puVar2[0x26] = 0;
  *(undefined1 *)(puVar2 + 0x27) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[6] = 0;
  puVar2[0x29] = 0;
  puVar2[0x28] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x31] = 0;
  puVar2[0x30] = 0;
  puVar2[0x33] = 0;
  puVar2[0x32] = 0;
  puVar2[0x35] = 0;
  puVar2[0x34] = 0;
  puVar2[0x36] = 0;
  FUN_10a1977f4(puVar1 + 0x109,puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10aba1098; end: 10aba109f;  */

void FUN_10aba1098(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10aba10a0; end: 10aba10df;  */

undefined8 FUN_10aba10a0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x168;
  __Znwm(0x168);
  FUN_10aba1d58();
  return uVar1;
}



/* Entry: 10aba10e0; end: 10aba1327;  */

undefined8 * FUN_10aba10e0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  uVar15 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  puVar7 = (undefined8 *)0xe8;
  lVar9 = param_2;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined2 *)(puVar7 + 3) = 0x100;
  puVar8 = puVar7;
  func_0x00010a0fda30();
  puVar7[4] = puVar8;
  puVar7[5] = lVar9;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[8] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xb] = 0x100000000;
  puVar7[0xf] = 0x500000004;
  puVar7[0xe] = 0x300000002;
  puVar7[0x10] = 0xffffffff00000000;
  *(undefined4 *)(puVar7 + 0x11) = 0;
  *(undefined1 *)((long)puVar7 + 0x8c) = 0;
  *puVar7 = &PTR_DAT_110bb4a60;
  puVar7[7] = &PTR_FUN_110bb4b50;
  puVar7[0x12] = 0x100000001;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  puVar7[0x13] = plVar4;
  puVar7[0x14] = lVar9;
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar7[0x15] = uVar15;
  *(uint *)(puVar7 + 0x16) = uVar2;
  *(undefined4 *)((long)puVar7 + 0xb4) = 1;
  puVar7[0x17] = 0;
  *(undefined4 *)(puVar7 + 0x18) = 0;
  *(undefined4 *)((long)puVar7 + 0xc4) = uVar3;
  puVar7[0x1a] = 0x500000004;
  puVar7[0x19] = 0x300000002;
  puVar7[0x1b] = 0;
  *(undefined1 *)(puVar7 + 0x1c) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x78))(&uStack_70);
    plStack_78 = plStack_68;
    uStack_80 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    func_0x00010a169c14(puVar7 + 8,&uStack_80);
    plVar4 = plStack_78;
    lVar9 = puVar7[8];
    uVar10 = *(undefined8 *)(lVar9 + 0x3c);
    uVar15 = *(undefined8 *)(lVar9 + 0x34);
    uVar12 = *(undefined8 *)(lVar9 + 0x4c);
    uVar11 = *(undefined8 *)(lVar9 + 0x44);
    uVar14 = *(undefined8 *)(lVar9 + 0x2c);
    uVar13 = *(undefined8 *)(lVar9 + 0x24);
    *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(lVar9 + 0x54);
    puVar7[0xd] = uVar10;
    puVar7[0xc] = uVar15;
    puVar7[0xf] = uVar12;
    puVar7[0xe] = uVar11;
    puVar7[0xb] = uVar14;
    puVar7[10] = uVar13;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar9 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar9 = *plVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  *(undefined1 *)(puVar7 + 0x1c) = *(undefined1 *)(param_2 + 0x28);
  *(undefined4 *)((long)puVar7 + 0xdc) = *(undefined4 *)(param_2 + 0x20);
  return puVar7;
}



/* Entry: 10aba1328; end: 10aba138b;  */

undefined8 * FUN_10aba1328(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = 0;
  FUN_10a239728();
  return puVar1;
}



/* Entry: 10aba138c; end: 10aba1393;  */

void FUN_10aba138c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10aba1394; end: 10aba1477;  */

undefined8 FUN_10aba1394(void)

{
  int iVar1;
  
  if ((bRam00000001137ec4d0 & 1) == 0) {
    iVar1 = 0x137ec4d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001137ec4c8 = &PTR_DAT_110c53510;
      ___cxa_guard_release(0x1137ec4d0);
    }
  }
  return 0x1137ec4c8;
}



/* Entry: 10aba1478; end: 10aba14ff;  */

void FUN_10aba1478(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_3 + 0x268);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0xb0))();
    plVar2 = *(long **)(param_3 + 0x268);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xb8))();
      goto LAB_10aba14d0;
    }
  }
  plVar2 = (long *)0x0;
LAB_10aba14d0:
                    /* WARNING: Could not recover jumptable at 0x00010aba14fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,0,0,plVar1,plVar2);
  return;
}



/* Entry: 10aba1500; end: 10aba1533;  */

void FUN_10aba1500(long *param_1,undefined **param_2,long *param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long *extraout_x8;
  long lVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar18;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  
  puVar5 = &stack0xfffffffffffffff0;
  if (param_3 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f696ad8);
  }
  else {
    param_3 = (long *)param_3[0x4d];
    if (param_3 != (long *)0x0) goto code_r0x00010aba1534;
  }
  param_2 = (undefined **)&UNK_10f696b58;
  unaff_x30 = FUN_10aba1534;
  FUN_10a00946c();
  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  param_1 = extraout_x8;
  unaff_x29 = puVar5;
code_r0x00010aba1534:
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  plVar18 = param_3;
  do {
    puVar16 = (undefined8 *)0xfffffffffffffffe;
    plVar6 = plVar18;
    ppuVar13 = &PTR_DAT_110bb3788;
    ppuVar15 = &PTR_DAT_110b9f720;
    ___dynamic_cast();
    if (plVar6 != (long *)0x0) {
      lVar17 = *(long *)(*(long *)(param_2[8] + 0x100) + 0x260);
      *(undefined **)((long)register0x00000008 + -0x90) = &UNK_10f653c20;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x21;
      if (lVar17 == 0) {
        FUN_10a0edfc4();
        func_0x00010a0523dc(plVar18 + 1);
        puVar8 = puVar7;
        __Unwind_Resume(puVar7);
        *(long **)((long)register0x00000008 + -0xc0) = param_3;
        *(long **)((long)register0x00000008 + -0xb8) = param_1;
        *(undefined ***)((long)register0x00000008 + -0xb0) = param_2;
        *(undefined1 **)((long)register0x00000008 + -0xa8) = puVar7;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x98) = FUN_10aba175c;
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        if (ppuVar13 == (undefined **)0x0) {
          FUN_10a00946c(&UNK_10f696ad8);
LAB_10aba180c:
          plVar9 = (long *)&UNK_10f696b58;
          FUN_10a00946c();
        }
        else {
          param_2 = (undefined **)ppuVar13[0x4d];
          if (param_2 == (undefined **)0x0) goto LAB_10aba180c;
          *(undefined **)((long)register0x00000008 + -0x108) = *ppuVar15;
          param_1 = (long *)((long)register0x00000008 + -0x108);
          (**(code **)(ppuVar15[1] + 0x18))
                    ((undefined1 *)((long)register0x00000008 + -0x100),ppuVar15 + 1);
          puVar16 = (undefined8 *)((long)register0x00000008 + -0x108);
          ppuVar15 = (undefined **)0x0;
          ppuVar13 = param_2;
          FUN_10aba183c(puVar8,param_2,0);
          plVar9 = (long *)((long)register0x00000008 + -0x100);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -200)) {
            return;
          }
        }
        ___stack_chk_fail();
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))(param_1 + 1);
        plVar10 = plVar9;
        __Unwind_Resume();
        *(undefined ***)((long)register0x00000008 + -0x160) = &PTR_DAT_110b9f720;
        *(long **)((long)register0x00000008 + -0x158) = plVar18;
        *(undefined ***)((long)register0x00000008 + -0x150) = &PTR_DAT_110bb3788;
        *(long **)((long)register0x00000008 + -0x148) = plVar6;
        *(long **)((long)register0x00000008 + -0x140) = param_3;
        *(long **)((long)register0x00000008 + -0x138) = param_1;
        *(undefined ***)((long)register0x00000008 + -0x130) = param_2;
        *(long **)((long)register0x00000008 + -0x128) = plVar9;
        *(undefined1 **)((long)register0x00000008 + -0x120) =
             (undefined1 *)((long)register0x00000008 + -0xa0);
        *(code **)((long)register0x00000008 + -0x118) = FUN_10aba183c;
        *(undefined8 *)((long)register0x00000008 + -0x168) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        ppuVar11 = ppuVar13;
        ___dynamic_cast(ppuVar13,&PTR_DAT_110bb3788,&PTR_DAT_110b9f720,0xfffffffffffffffe);
        if (ppuVar11 != (undefined **)0x0) {
          lVar17 = *(long *)(*(long *)(plVar10[8] + 0x100) + 0x260);
          *(undefined **)((long)register0x00000008 + -0x1e8) = &UNK_10f653c20;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x21;
          if (lVar17 == 0) goto LAB_10aba1b24;
          FUN_10a244d68();
          if ((*(char *)((long)ppuVar11 + 0x11) == '\x01') && (ppuVar11[1] != (undefined *)0x0)) {
            iVar1 = *(int *)(*(long *)(ppuVar11[1] + 0x850) + 0x2c);
            if (*(int *)((long)ppuVar11 + 0x14) == iVar1) goto LAB_10aba1900;
            *(int *)((long)ppuVar11 + 0x14) = iVar1;
          }
          (**(code **)(*ppuVar11 + 0x10))(ppuVar11,lVar17);
        }
LAB_10aba1900:
        (**(code **)(*ppuVar13 + 0x100))((undefined1 *)((long)register0x00000008 + -0x1c0),ppuVar13)
        ;
        plVar18 = *(long **)((long)register0x00000008 + -0x1b8);
        if (*(long *)((long)register0x00000008 + -0x1c0) == 0) {
          if (plVar18 != (long *)0x0) {
            plVar6 = plVar18 + 1;
            do {
              lVar17 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
          puVar14 = (undefined8 *)0x1;
          ppuVar11 = ppuVar13;
          FUN_10a088744();
          *(int *)((long)register0x00000008 + -0x1c0) = (int)ppuVar11;
          if (puVar14 == (undefined8 *)0x0) {
            *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
          }
          else {
            lVar17 = puVar14[1];
            uVar19 = *puVar14;
            *(undefined8 *)((long)register0x00000008 + -0x1b0) = puVar14[1];
            *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar19;
            if (lVar17 != 0) {
              plVar18 = (long *)(lVar17 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar3) {
                  *plVar18 = *plVar18 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          if ((int)ppuVar11 != 2) {
            FUN_10a00946c(&UNK_10f696b73);
            goto LAB_10aba1b3c;
          }
          ppuVar11 = ppuVar13;
          (**(code **)(*ppuVar13 + 0xb0))(ppuVar13);
          ppuVar12 = ppuVar13;
          (**(code **)(*ppuVar13 + 0xb8))(ppuVar13);
          (**(code **)(*ppuVar13 + 0x90))
                    ((undefined1 *)((long)register0x00000008 + -0x1e8),ppuVar13);
          *(undefined8 *)((long)register0x00000008 + -0x1a8) = *puVar16;
          (**(code **)(puVar16[1] + 0x10))
                    ((undefined1 *)((long)register0x00000008 + -0x1a0),puVar16 + 1);
          (**(code **)(*plVar10 + 0x38))
                    (plVar10,(undefined1 *)((long)register0x00000008 + -0x1b8),ppuVar11,ppuVar12,
                     (undefined1 *)((long)register0x00000008 + -0x1e8),ppuVar15,
                     (undefined1 *)((long)register0x00000008 + -0x1a8));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1a0))
                    ((undefined1 *)((long)register0x00000008 + -0x1a0));
          plVar18 = *(long **)((long)register0x00000008 + -0x1b0);
          if (plVar18 != (long *)0x0) {
            plVar6 = plVar18 + 1;
            do {
              lVar17 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_10aba1ad0;
          }
        }
        else {
          pcVar4 = (code *)*puVar16;
          *(long *)((long)register0x00000008 + -0x1e8) =
               *(long *)((long)register0x00000008 + -0x1c0);
          *(long **)((long)register0x00000008 + -0x1e0) = plVar18;
          if (plVar18 != (long *)0x0) {
            plVar18 = plVar18 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *plVar18 = *plVar18 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (*pcVar4)((undefined1 *)((long)register0x00000008 + -0x1e8),puVar16);
          plVar18 = *(long **)((long)register0x00000008 + -0x1e0);
          if (plVar18 != (long *)0x0) {
            plVar6 = plVar18 + 1;
            do {
              lVar17 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
          plVar18 = *(long **)((long)register0x00000008 + -0x1b8);
          if (plVar18 != (long *)0x0) {
            plVar6 = plVar18 + 1;
            do {
              lVar17 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_10aba1ad0:
            if (lVar17 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0x168)) {
          return;
        }
        ___stack_chk_fail();
LAB_10aba1b24:
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x1e8));
LAB_10aba1b3c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba1b40);
        (*pcVar4)();
      }
      FUN_10a244d68();
      if ((*(char *)((long)plVar6 + 0x11) == '\x01') && (plVar6[1] != 0)) {
        iVar1 = *(int *)(*(long *)(plVar6[1] + 0x850) + 0x2c);
        if (*(int *)((long)plVar6 + 0x14) == iVar1) break;
        *(int *)((long)plVar6 + 0x14) = iVar1;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6,lVar17);
      break;
    }
    plVar18 = (long *)plVar18[0x13];
  } while (plVar18 != (long *)0x0);
  if ((param_4 & 1) == 0) {
    (**(code **)(*param_3 + 0x100))(param_1,param_3);
    if (*param_1 != 0) {
      return;
    }
    func_0x00010a136de4(param_1);
  }
  puVar16 = (undefined8 *)0x1;
  plVar18 = param_3;
  FUN_10a088744();
  *(int *)((long)register0x00000008 + -0x68) = (int)plVar18;
  if (puVar16 == (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  }
  else {
    lVar17 = puVar16[1];
    uVar19 = *puVar16;
    *(undefined8 *)((long)register0x00000008 + -0x58) = puVar16[1];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar19;
    if (lVar17 != 0) {
      plVar6 = (long *)(lVar17 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if ((int)plVar18 == 2) {
    plVar18 = param_3;
    (**(code **)(*param_3 + 0xb0))(param_3);
    plVar6 = param_3;
    (**(code **)(*param_3 + 0xb8))(param_3);
    (**(code **)(*param_3 + 0x90))((undefined1 *)((long)register0x00000008 + -0x90),param_3);
    (**(code **)(*param_2 + 0x30))
              (param_1,param_2,(undefined1 *)((long)register0x00000008 + -0x60),plVar18,plVar6,
               (undefined1 *)((long)register0x00000008 + -0x90),param_4);
    plVar18 = *(long **)((long)register0x00000008 + -0x58);
    if (plVar18 != (long *)0x0) {
      plVar6 = plVar18 + 1;
      do {
        lVar17 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f696b73);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba173c);
  (*pcVar4)();
}



/* Entry: 10aba1534; end: 10aba175b;  */

void FUN_10aba1534(undefined **param_1,undefined **param_2,long *param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long *plVar16;
  undefined *puStack_1e8;
  long *plStack_1e0;
  int iStack_1c0;
  undefined4 uStack_1bc;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined *puStack_1a8;
  undefined8 *apuStack_1a0 [7];
  long lStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  int iStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  ppuVar6 = &puStack_90;
  plVar16 = param_3;
  do {
    ppuVar14 = (undefined **)0xfffffffffffffffe;
    plVar5 = plVar16;
    ppuVar11 = &PTR_DAT_110bb3788;
    ppuVar13 = &PTR_DAT_110b9f720;
    ___dynamic_cast();
    if (plVar5 != (long *)0x0) {
      lVar15 = *(long *)(*(long *)(param_2[8] + 0x100) + 0x260);
      puStack_90 = &UNK_10f653c20;
      uStack_88 = 0x21;
      if (lVar15 == 0) {
        FUN_10a0edfc4();
        func_0x00010a0523dc(plVar16 + 1);
        puVar7 = (undefined1 *)ppuVar6;
        __Unwind_Resume(ppuVar6);
        pcStack_98 = FUN_10aba175c;
        lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plStack_c0 = param_3;
        ppuStack_b8 = param_1;
        ppuStack_b0 = param_2;
        puStack_a8 = (undefined1 *)ppuVar6;
        puStack_a0 = &stack0xfffffffffffffff0;
        if (ppuVar11 == (undefined **)0x0) {
          FUN_10a00946c(&UNK_10f696ad8);
LAB_10aba180c:
          ppuVar8 = (undefined8 **)&UNK_10f696b58;
          FUN_10a00946c();
        }
        else {
          param_2 = (undefined **)ppuVar11[0x4d];
          if (param_2 == (undefined **)0x0) goto LAB_10aba180c;
          puStack_108 = *ppuVar13;
          (**(code **)(ppuVar13[1] + 0x18))(apuStack_100,ppuVar13 + 1);
          ppuVar14 = &puStack_108;
          ppuVar13 = (undefined **)0x0;
          ppuVar11 = param_2;
          FUN_10aba183c(puVar7,param_2,0);
          ppuVar8 = apuStack_100;
          (*(code *)*apuStack_100[0])();
          param_1 = &puStack_108;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
            return;
          }
        }
        ___stack_chk_fail();
        (*(code *)*apuStack_100[0])(param_1 + 1);
        ppuVar9 = ppuVar8;
        __Unwind_Resume();
        ppuStack_160 = &PTR_DAT_110b9f720;
        ppuStack_150 = &PTR_DAT_110bb3788;
        pcStack_118 = FUN_10aba183c;
        lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar6 = ppuVar11;
        plStack_158 = plVar16;
        plStack_148 = plVar5;
        plStack_140 = param_3;
        ppuStack_138 = param_1;
        ppuStack_130 = param_2;
        ppuStack_128 = ppuVar8;
        ppuStack_120 = &puStack_a0;
        ___dynamic_cast(ppuVar11,&PTR_DAT_110bb3788,&PTR_DAT_110b9f720,0xfffffffffffffffe);
        if (ppuVar6 != (undefined **)0x0) {
          lVar15 = *(long *)(ppuVar9[8][0x20] + 0x260);
          puStack_1e8 = &UNK_10f653c20;
          plStack_1e0 = (long *)0x21;
          if (lVar15 == 0) goto LAB_10aba1b24;
          FUN_10a244d68();
          if ((*(char *)((long)ppuVar6 + 0x11) == '\x01') && (ppuVar6[1] != (undefined *)0x0)) {
            iVar1 = *(int *)(*(long *)(ppuVar6[1] + 0x850) + 0x2c);
            if (*(int *)((long)ppuVar6 + 0x14) == iVar1) goto LAB_10aba1900;
            *(int *)((long)ppuVar6 + 0x14) = iVar1;
          }
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6,lVar15);
        }
LAB_10aba1900:
        (**(code **)(*ppuVar11 + 0x100))(&iStack_1c0,ppuVar11);
        if ((undefined *)CONCAT44(uStack_1bc,iStack_1c0) == (undefined *)0x0) {
          if (plStack_1b8 != (long *)0x0) {
            plVar16 = plStack_1b8 + 1;
            do {
              lVar15 = *plVar16;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
            }
          }
          puVar12 = (undefined8 *)0x1;
          ppuVar6 = ppuVar11;
          FUN_10a088744();
          iStack_1c0 = (int)ppuVar6;
          if (puVar12 == (undefined8 *)0x0) {
            plStack_1b8 = (long *)0x0;
            plStack_1b0 = (long *)0x0;
          }
          else {
            plStack_1b0 = (long *)puVar12[1];
            plStack_1b8 = (long *)*puVar12;
            if (puVar12[1] != 0) {
              plVar16 = (long *)(puVar12[1] + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar3) {
                  *plVar16 = *plVar16 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          if (iStack_1c0 != 2) {
            FUN_10a00946c(&UNK_10f696b73);
            goto LAB_10aba1b3c;
          }
          ppuVar6 = ppuVar11;
          (**(code **)(*ppuVar11 + 0xb0))(ppuVar11);
          ppuVar10 = ppuVar11;
          (**(code **)(*ppuVar11 + 0xb8))(ppuVar11);
          (**(code **)(*ppuVar11 + 0x90))(&puStack_1e8,ppuVar11);
          puStack_1a8 = *ppuVar14;
          (**(code **)(ppuVar14[1] + 0x10))(apuStack_1a0,ppuVar14 + 1);
          (*(code *)(*ppuVar9)[7])
                    (ppuVar9,&plStack_1b8,ppuVar6,ppuVar10,&puStack_1e8,ppuVar13,&puStack_1a8);
          (*(code *)*apuStack_1a0[0])(apuStack_1a0);
          if (plStack_1b0 != (long *)0x0) {
            plVar16 = plStack_1b0 + 1;
            do {
              lVar15 = *plVar16;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              plVar5 = plStack_1b0;
            } while (cVar2 != '\0');
            goto LAB_10aba1ad0;
          }
        }
        else {
          pcVar4 = (code *)*ppuVar14;
          plStack_1e0 = plStack_1b8;
          if (plStack_1b8 != (long *)0x0) {
            plVar16 = plStack_1b8 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = *plVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          puStack_1e8 = (undefined *)CONCAT44(uStack_1bc,iStack_1c0);
          (*pcVar4)(&puStack_1e8,ppuVar14);
          plVar16 = plStack_1e0;
          if (plStack_1e0 != (long *)0x0) {
            plVar5 = plStack_1e0 + 1;
            do {
              lVar15 = *plVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
          if (plStack_1b8 != (long *)0x0) {
            plVar16 = plStack_1b8 + 1;
            do {
              lVar15 = *plVar16;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              plVar5 = plStack_1b8;
            } while (cVar2 != '\0');
LAB_10aba1ad0:
            if (lVar15 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
          return;
        }
        ___stack_chk_fail();
LAB_10aba1b24:
        FUN_10a0edfc4(&puStack_1e8);
LAB_10aba1b3c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba1b40);
        (*pcVar4)();
      }
      FUN_10a244d68();
      if ((*(char *)((long)plVar5 + 0x11) == '\x01') && (plVar5[1] != 0)) {
        iVar1 = *(int *)(*(long *)(plVar5[1] + 0x850) + 0x2c);
        if (*(int *)((long)plVar5 + 0x14) == iVar1) break;
        *(int *)((long)plVar5 + 0x14) = iVar1;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar15);
      break;
    }
    plVar16 = (long *)plVar16[0x13];
  } while (plVar16 != (long *)0x0);
  if ((param_4 & 1) == 0) {
    (**(code **)(*param_3 + 0x100))(param_1,param_3);
    if (*param_1 != (undefined *)0x0) {
      return;
    }
    func_0x00010a136de4(param_1);
  }
  puVar12 = (undefined8 *)0x1;
  plVar16 = param_3;
  FUN_10a088744();
  iStack_68 = (int)plVar16;
  if (puVar12 == (undefined8 *)0x0) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    plStack_58 = (long *)puVar12[1];
    uStack_60 = *puVar12;
    if (puVar12[1] != 0) {
      plVar16 = (long *)(puVar12[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (iStack_68 == 2) {
    plVar16 = param_3;
    (**(code **)(*param_3 + 0xb0))(param_3);
    plVar5 = param_3;
    (**(code **)(*param_3 + 0xb8))(param_3);
    (**(code **)(*param_3 + 0x90))(&puStack_90,param_3);
    (**(code **)(*param_2 + 0x30))(param_1,param_2,&uStack_60,plVar16,plVar5,&puStack_90,param_4);
    plVar16 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar15 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f696b73);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba173c);
  (*pcVar4)();
}



/* Entry: 10aba175c; end: 10aba183b;  */

void FUN_10aba175c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *unaff_x21;
  undefined *puStack_158;
  long *plStack_150;
  int iStack_130;
  undefined4 uStack_12c;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 *apuStack_110 [7];
  long lStack_d8;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f696ad8);
LAB_10aba180c:
    plVar10 = param_2;
    ppuVar4 = (undefined8 **)&UNK_10f696b58;
    FUN_10a00946c();
  }
  else {
    plVar10 = (long *)param_2[0x4d];
    if (plVar10 == (long *)0x0) goto LAB_10aba180c;
    uStack_78 = *param_3;
    unaff_x21 = &uStack_78;
    (**(code **)(param_3[1] + 0x18))(apuStack_70,param_3 + 1);
    param_4 = &uStack_78;
    param_3 = (undefined8 *)0x0;
    FUN_10aba183c(param_1,plVar10,0);
    ppuVar4 = apuStack_70;
    (*(code *)*apuStack_70[0])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(unaff_x21 + 1);
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar10;
  ___dynamic_cast(plVar10,&PTR_DAT_110bb3788,&PTR_DAT_110b9f720,0xfffffffffffffffe);
  if (plVar5 == (long *)0x0) {
LAB_10aba1900:
    (**(code **)(*plVar10 + 0x100))(&iStack_130,plVar10);
    if ((undefined *)CONCAT44(uStack_12c,iStack_130) == (undefined *)0x0) {
      if (plStack_128 != (long *)0x0) {
        plVar5 = plStack_128 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
        }
      }
      puVar8 = (undefined8 *)0x1;
      plVar5 = plVar10;
      FUN_10a088744();
      iStack_130 = (int)plVar5;
      if (puVar8 == (undefined8 *)0x0) {
        plStack_128 = (long *)0x0;
        plStack_120 = (long *)0x0;
      }
      else {
        plStack_120 = (long *)puVar8[1];
        plStack_128 = (long *)*puVar8;
        if (puVar8[1] != 0) {
          plVar5 = (long *)(puVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      if (iStack_130 != 2) {
        FUN_10a00946c(&UNK_10f696b73);
        goto LAB_10aba1b3c;
      }
      plVar5 = plVar10;
      (**(code **)(*plVar10 + 0xb0))(plVar10);
      plVar7 = plVar10;
      (**(code **)(*plVar10 + 0xb8))(plVar10);
      (**(code **)(*plVar10 + 0x90))(&puStack_158,plVar10);
      uStack_118 = *param_4;
      (**(code **)(param_4[1] + 0x10))(apuStack_110,param_4 + 1);
      (*(code *)(*ppuVar4)[7])(ppuVar4,&plStack_128,plVar5,plVar7,&puStack_158,param_3,&uStack_118);
      (*(code *)*apuStack_110[0])(apuStack_110);
      if (plStack_120 != (long *)0x0) {
        plVar10 = plStack_120 + 1;
        do {
          lVar6 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar5 = plStack_120;
        } while (cVar2 != '\0');
        goto LAB_10aba1ad0;
      }
    }
    else {
      pcVar9 = (code *)*param_4;
      plStack_150 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar10 = plStack_128 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_158 = (undefined *)CONCAT44(uStack_12c,iStack_130);
      (*pcVar9)(&puStack_158,param_4);
      plVar10 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        plVar5 = plStack_150 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (plStack_128 != (long *)0x0) {
        plVar10 = plStack_128 + 1;
        do {
          lVar6 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar5 = plStack_128;
        } while (cVar2 != '\0');
LAB_10aba1ad0:
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar6 = *(long *)(ppuVar4[8][0x20] + 0x260);
    puStack_158 = &UNK_10f653c20;
    plStack_150 = (long *)0x21;
    if (lVar6 != 0) {
      FUN_10a244d68();
      if ((*(char *)((long)plVar5 + 0x11) == '\x01') && (plVar5[1] != 0)) {
        iVar1 = *(int *)(*(long *)(plVar5[1] + 0x850) + 0x2c);
        if (*(int *)((long)plVar5 + 0x14) == iVar1) goto LAB_10aba1900;
        *(int *)((long)plVar5 + 0x14) = iVar1;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar6);
      goto LAB_10aba1900;
    }
  }
  FUN_10a0edfc4(&puStack_158);
LAB_10aba1b3c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aba1b40);
  (*pcVar9)();
}



/* Entry: 10aba183c; end: 10aba1b8f;  */

void FUN_10aba183c(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined *puStack_d8;
  long *plStack_d0;
  int iStack_b0;
  undefined4 uStack_ac;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110bb3788,&PTR_DAT_110b9f720,0xfffffffffffffffe);
  if (plVar4 == (long *)0x0) {
LAB_10aba1900:
    (**(code **)(*param_2 + 0x100))(&iStack_b0,param_2);
    if ((undefined *)CONCAT44(uStack_ac,iStack_b0) == (undefined *)0x0) {
      if (plStack_a8 != (long *)0x0) {
        plVar4 = plStack_a8 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
      puVar7 = (undefined8 *)0x1;
      plVar4 = param_2;
      FUN_10a088744();
      iStack_b0 = (int)plVar4;
      if (puVar7 == (undefined8 *)0x0) {
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
      }
      else {
        plStack_a0 = (long *)puVar7[1];
        plStack_a8 = (long *)*puVar7;
        if (puVar7[1] != 0) {
          plVar4 = (long *)(puVar7[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      if (iStack_b0 != 2) {
        FUN_10a00946c(&UNK_10f696b73);
        goto LAB_10aba1b3c;
      }
      plVar4 = param_2;
      (**(code **)(*param_2 + 0xb0))(param_2);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0xb8))(param_2);
      (**(code **)(*param_2 + 0x90))(&puStack_d8,param_2);
      uStack_98 = *param_4;
      (**(code **)(param_4[1] + 0x10))(apuStack_90,param_4 + 1);
      (**(code **)(*param_1 + 0x38))
                (param_1,&plStack_a8,plVar4,plVar6,&puStack_d8,param_3,&uStack_98);
      (*(code *)*apuStack_90[0])(apuStack_90);
      if (plStack_a0 != (long *)0x0) {
        plVar4 = plStack_a0 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_a0;
        } while (cVar2 != '\0');
        goto LAB_10aba1ad0;
      }
    }
    else {
      pcVar8 = (code *)*param_4;
      plStack_d0 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar4 = plStack_a8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_d8 = (undefined *)CONCAT44(uStack_ac,iStack_b0);
      (*pcVar8)(&puStack_d8,param_4);
      plVar4 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar6 = plStack_d0 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if (plStack_a8 != (long *)0x0) {
        plVar4 = plStack_a8 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_a8;
        } while (cVar2 != '\0');
LAB_10aba1ad0:
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1[8] + 0x100) + 0x260);
    puStack_d8 = &UNK_10f653c20;
    plStack_d0 = (long *)0x21;
    if (lVar5 != 0) {
      FUN_10a244d68();
      if ((*(char *)((long)plVar4 + 0x11) == '\x01') && (plVar4[1] != 0)) {
        iVar1 = *(int *)(*(long *)(plVar4[1] + 0x850) + 0x2c);
        if (*(int *)((long)plVar4 + 0x14) == iVar1) goto LAB_10aba1900;
        *(int *)((long)plVar4 + 0x14) = iVar1;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar5);
      goto LAB_10aba1900;
    }
  }
  FUN_10a0edfc4(&puStack_d8);
LAB_10aba1b3c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba1b40);
  (*pcVar8)();
}



/* Entry: 10aba1b90; end: 10aba1caf;  */

undefined8 * FUN_10aba1b90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4fd98;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_10a5e8714(param_1 + 5);
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  param_1[0xfb] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x101) = 0x3f800000;
  param_1[0x102] = 0;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  *(undefined1 *)(param_1 + 0x105) = 1;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  *(undefined1 *)(param_1 + 0x10a) = 1;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  param_1[1] = 0x30;
  *(undefined1 *)((long)param_1 + 0x1f) = 1;
  return param_1;
}



/* Entry: 10aba1cb0; end: 10aba1cff;  */

undefined8 * FUN_10aba1cb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4fd98;
  FUN_10a1977f4(param_1 + 0x109,0);
  FUN_10abd0b1c(param_1 + 4);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10aba1d00; end: 10aba1d57;  */

void FUN_10aba1d00(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = param_1 + 1;
    do {
      if (*plVar2 != 0) {
        *(undefined1 *)(*plVar2 + 0x19) = 0;
      }
      if (plVar2[5] != 0) {
        *(undefined1 *)(plVar2[5] + 0x19) = 0;
      }
      plVar2 = plVar2 + 0xd;
    } while (plVar2 != param_1 + lVar1 * 0xd + 1);
  }
  if (param_1[0x35] != 0) {
    *(undefined1 *)(param_1[0x35] + 0x19) = 0;
  }
  if (param_1[0x3a] != 0) {
    *(undefined1 *)(param_1[0x3a] + 0x19) = 0;
  }
  return;
}



/* Entry: 10aba1d58; end: 10aba1f0b;  */

undefined8 * FUN_10aba1d58(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_110c4fea8;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = param_1 + 10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_10a19079c(param_1 + 0xd);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x16] = 0xff7fffff00000000;
  param_1[0x15] = 0;
  param_1[0x17] = 0xff7fffffff7fffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  param_1[0x27] = puVar1 + 0xd;
  param_1[0x28] = puVar1 + 0xd;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0x3f800000;
  puVar1[0xc] = 0x3f80000000000000;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[7] = 0x3f80000000000000;
  puVar1[6] = 0;
  param_1[0x26] = puVar1;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



/* Entry: 10aba1f0c; end: 10aba1fbf;  */

undefined8 * FUN_10aba1f0c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c4fea8;
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x23;
  func_0x00010ab55134(&puStack_28);
  puStack_28 = param_1 + 0x20;
  FUN_10a0d89d4(&puStack_28);
  func_0x00010abd99a8(param_1 + 0x1e);
  func_0x00010abd9950(param_1 + 0x1c);
  func_0x00010abd9950(param_1 + 0x1a);
  puStack_28 = param_1 + 0xd;
  func_0x00010a190844(&puStack_28);
  func_0x00010abd98cc(param_1[10]);
  func_0x00010a0616d0(param_1 + 7);
  func_0x00010a0616d0(param_1 + 5);
  return param_1;
}



/* Entry: 10aba1fc0; end: 10aba1fc3;  */

undefined8 * FUN_10aba1fc0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c4fea8;
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x23;
  func_0x00010ab55134(&puStack_28);
  puStack_28 = param_1 + 0x20;
  FUN_10a0d89d4(&puStack_28);
  func_0x00010abd99a8(param_1 + 0x1e);
  func_0x00010abd9950(param_1 + 0x1c);
  func_0x00010abd9950(param_1 + 0x1a);
  puStack_28 = param_1 + 0xd;
  func_0x00010a190844(&puStack_28);
  func_0x00010abd98cc(param_1[10]);
  func_0x00010a0616d0(param_1 + 7);
  func_0x00010a0616d0(param_1 + 5);
  return param_1;
}



/* Entry: 10aba1fc4; end: 10aba1fd7;  */

void FUN_10aba1fc4(void)

{
  FUN_10aba1f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aba1fd8; end: 10aba209f;  */

void FUN_10aba1fd8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + 0xa8);
  if (*(undefined8 **)(param_2 + 0xf0) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0xf0);
  }
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 10aba20a0; end: 10aba2317;  */

void FUN_10aba20a0(float *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar18;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  undefined1 auStack_b8 [72];
  
  if (*(long *)(param_2 + 0x70) != *(long *)(param_2 + 0x78)) {
    uVar6 = param_4[1] - *param_4 >> 6;
    uVar4 = (*(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x70) >> 3) * -0x5555555555555555;
    if (uVar6 <= uVar4) {
      if (param_4[1] == *param_4) {
        fVar10 = 0.0;
        fVar12 = 0.0;
        uVar4 = 0xff7fffffff7fffff;
        fVar11 = 3.4028235e+38;
        fVar3 = -3.4028235e+38;
      }
      else {
        lVar7 = 0;
        lVar8 = 0;
        uVar9 = 0;
        uVar4 = 0xff7fffffff7fffff;
        uVar16 = 0x7f7fffffff7fffff;
        uVar18 = 0xff7fffff7f7fffff;
        fVar3 = -3.4028235e+38;
        fVar11 = 3.4028235e+38;
        do {
          uVar5 = (*(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x70) >> 3) * -0x5555555555555555
          ;
          if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
LAB_10aba2314:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10aba2318);
            (*pcVar2)();
          }
          lVar1 = *(long *)(param_2 + 0x70) + lVar7;
          fVar10 = fVar3;
          if (0.0 <= *(float *)(lVar1 + 0xc)) {
            if ((ulong)(param_4[1] - *param_4 >> 6) <= uVar9) goto LAB_10aba2314;
            func_0x000109519fd0(auStack_b8,param_3,*param_4 + lVar8);
            FUN_10a005448(auStack_d0,lVar1,auStack_b8);
            fVar10 = fStack_c8 - fStack_bc;
            if (fVar11 <= fStack_c8 - fStack_bc) {
              fVar10 = fVar11;
            }
            fVar11 = fVar10;
            fVar13 = auStack_d0._0_4_ - (float)uStack_c4;
            fVar12 = (float)((ulong)uStack_c4 >> 0x20);
            fVar14 = auStack_d0._4_4_ - fVar12;
            fVar10 = auStack_d0._0_4_ + (float)uStack_c4;
            fVar12 = auStack_d0._4_4_ + fVar12;
            fVar17 = (float)(uVar4 >> 0x20);
            fVar15 = (float)uVar4;
            uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(fVar12,fVar10)) &
                            CONCAT44(-(uint)(fVar17 < fVar12),-(uint)(fVar15 < fVar10));
            uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar14,fVar10)) &
                              CONCAT44(-(uint)(fVar14 < (float)(uVar16 >> 0x20)),
                                       -(uint)(fVar15 < fVar10));
            uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar12,fVar13)) &
                              CONCAT44(-(uint)(fVar17 < fVar12),-(uint)(fVar13 < (float)uVar18));
            fVar10 = fStack_c8 + fStack_bc;
            if (fStack_c8 + fStack_bc <= fVar3) {
              fVar10 = fVar3;
            }
          }
          fVar3 = fVar10;
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x40;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 != uVar9);
        fVar10 = ((float)uVar18 + (float)uVar16) * 0.5;
        fVar12 = ((float)(uVar18 >> 0x20) + (float)(uVar16 >> 0x20)) * 0.5;
      }
      fVar11 = (fVar3 + fVar11) * 0.5;
      *param_1 = fVar10;
      *(ulong *)(param_1 + 3) = CONCAT44((float)(uVar4 >> 0x20) - fVar12,(float)uVar4 - fVar10);
      *(ulong *)(param_1 + 1) = CONCAT44(fVar11,fVar12);
      param_1[5] = fVar3 - fVar11;
      return;
    }
    if (((bRam00000001137ec4a1 & 1) == 0) &&
       (bRam00000001137ec4a1 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
      func_0x00010ae06f08(1,2,&UNK_10f696cb3,&UNK_10f696ce6,0x58,&UNK_10f696d7b,in_x6,in_x7,uVar4,
                          uVar6);
    }
  }
  param_1[2] = 0.0;
  param_1[3] = -3.4028235e+38;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = -3.4028235e+38;
  param_1[5] = -3.4028235e+38;
  return;
}



/* Entry: 10aba2318; end: 10aba24a7;  */

void FUN_10aba2318(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_50;
  long *plStack_48;
  
  if ((param_3 == 0) || (*(long *)(param_2 + 0xd0) != 0)) {
    if (*(long *)(param_2 + 0xe0) != 0) goto LAB_10aba2458;
    plVar5 = *(long **)(*(long *)(param_2 + 0x48) + 0x48);
    lVar6 = *plVar5;
    lVar2 = plVar5[1];
    plVar5 = (long *)0x50;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110c53558;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = lVar2 - lVar6;
    *(undefined1 *)(plVar5 + 9) = 0;
    plVar5[4] = 0;
    plStack_50 = plVar5 + 3;
    *plStack_50 = (long)(plVar5 + 4);
    plStack_48 = plVar5;
    FUN_10aba24a8((long *)(param_2 + 0xe0),&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aba2458;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(*(long *)(param_2 + 0x48) + 0x48);
    lVar6 = *plVar5;
    lVar2 = plVar5[1];
    plVar5 = (long *)0x50;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110c53558;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = lVar2 - lVar6;
    *(undefined1 *)(plVar5 + 9) = 0;
    plVar5[4] = 0;
    plStack_50 = plVar5 + 3;
    *plStack_50 = (long)(plVar5 + 4);
    plStack_48 = plVar5;
    FUN_10aba24a8((long *)(param_2 + 0xd0),&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aba2458;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = plStack_48;
  if (lVar6 == 0) {
    (**(code **)(*plStack_48 + 0x10))(plStack_48);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10aba2458:
  lVar6 = 0xd0;
  if (param_3 == 0) {
    lVar6 = 0xe0;
  }
  puVar1 = (undefined8 *)(param_2 + lVar6);
  lVar6 = puVar1[1];
  uVar7 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 10aba24a8; end: 10aba250b;  */

undefined8 * FUN_10aba24a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10aba250c; end: 10aba257b;  */

void FUN_10aba250c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10a2421c8();
  FUN_10a18cdb8(param_1 + 0x28,param_2);
  FUN_10a177570(param_1 + 0x60,param_3);
  *(undefined4 *)(param_1 + 0xc4) = param_4;
  FUN_10a244e70(uVar1,param_3);
  *(int *)(param_1 + 200) = (int)uVar1;
  return;
}



/* Entry: 10aba257c; end: 10aba2583;  */

undefined8 * FUN_10aba257c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
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
  return (undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aba2584; end: 10aba2f67;  */

void FUN_10aba2584(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  short sVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  short *psVar20;
  long lVar21;
  undefined4 uVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined2 *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined2 *puVar28;
  ulong uVar29;
  undefined8 *******pppppppuVar30;
  long lVar31;
  long *plVar32;
  undefined8 *puVar33;
  undefined1 uVar34;
  long lVar35;
  undefined8 *******pppppppuVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  long *plStack_c8;
  int iStack_bc;
  undefined8 ******ppppppuStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  plVar10 = (long *)0x0;
  FUN_10a2421c8();
  uVar38 = param_2[0x33];
  *(undefined8 *)(param_1 + 0x10) = param_2[0x34];
  *(undefined8 *)(param_1 + 8) = uVar38;
  puStack_90 = (undefined8 *)0x0;
  plStack_88 = (long *)0x0;
  if ((param_2[0xb] != param_2[0xc]) && (param_2[0x12] - param_2[0x11] == 0x30)) {
    plVar11 = plVar10;
    FUN_10a244d68();
    (**(code **)(*plVar11 + 0xd8))();
    plVar32 = (long *)param_2[0x11];
    if (plVar32 == (long *)param_2[0x12]) goto LAB_10aba2efc;
    if (((ulong)plVar11 & 0xffffffff) < (ulong)(plVar32[1] - *plVar32 >> 2)) {
      FUN_10a39d16c(&puStack_80,param_2,0xc,0,0);
      plStack_88 = plStack_78;
      puStack_90 = puStack_80;
      param_2 = puStack_80;
    }
  }
  if ((param_3 >> 3 & 1) != 0) {
    FUN_10a177570(param_1 + 0x60,param_2 + 0x1e);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0xec);
    plVar32 = plVar10;
    FUN_10a244e70(plVar10,param_2 + 0x1e);
    *(int *)(param_1 + 200) = (int)plVar32;
  }
  plVar32 = (long *)(param_1 + 0x28);
  if (*plVar32 == 0) {
    plVar11 = (long *)plVar10[0x45];
    (**(code **)(*plVar11 + 0x48))();
    FUN_10a174ef8(plVar32,plVar11);
  }
  puVar12 = param_2;
  FUN_10ab4cc0c();
  if ((int)puVar12 == 0) {
    FUN_10ab4aef8(param_1 + 0x130,1);
    puVar12 = *(undefined8 **)(param_1 + 0x130);
    if (*(undefined8 **)(param_1 + 0x138) == puVar12) goto LAB_10aba2efc;
    *puVar12 = 0;
    *(undefined4 *)(puVar12 + 1) = 0;
    goto LAB_10aba2e80;
  }
  if (param_2[0x14] != param_2[0x15]) {
    puVar12 = (undefined8 *)0x1e0;
    __Znwm();
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar13 = puVar12 + 3;
    *puVar12 = &PTR_FUN_110c535a8;
    FUN_10a178004(puVar13,param_2);
    plVar11 = *(long **)(param_1 + 0xf8);
    *(undefined8 **)(param_1 + 0xf0) = puVar13;
    *(undefined8 **)(param_1 + 0xf8) = puVar12;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar23 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0xec);
  iStack_bc = *(int *)(param_2 + 0x1d);
  plVar11 = param_2 + 5;
  plStack_c8 = (long *)0x0;
  if (iStack_bc != 0) {
    plStack_c8 = plVar11;
  }
  if ((param_3 & 1) != 0) {
    uVar34 = 1;
    if (((param_4 & 1) == 0) && (param_2[0x14] == param_2[0x15])) {
      uVar34 = *(undefined1 *)(param_1 + 0x148);
    }
    if (param_4 != 0) {
      (**(code **)(*(long *)*plVar32 + 0x18))
                ((long *)*plVar32,*(int *)(param_2 + 4) - *(int *)(param_2 + 2),uVar34);
    }
    lVar23 = param_2[2];
    if (lVar23 != param_2[3]) {
      (**(code **)(*(long *)*plVar32 + 0x10))((long *)*plVar32,lVar23,param_2[3] - lVar23,0,uVar34);
    }
    if ((param_4 & 1) == 0) {
      uVar34 = *(undefined1 *)(param_1 + 0x149);
    }
    else {
      uVar34 = 1;
    }
    if (*(int *)(param_1 + 0xc4) == 2) {
      if (*(int *)(param_2 + 0x1d) != 0) {
        lVar23 = 1;
        if (iStack_bc != 1) {
          lVar23 = 2;
        }
        lVar35 = ((ulong)(param_2[6] - param_2[5]) >> lVar23) - 2;
        plStack_c8 = (long *)(param_1 + 0x150);
        uVar17 = lVar35 * 3 << lVar23;
        uVar26 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150);
        if (uVar17 < uVar26 || uVar17 - uVar26 == 0) {
          if (uVar17 < uVar26) {
            *(ulong *)(param_1 + 0x158) = *(long *)(param_1 + 0x150) + uVar17;
          }
        }
        else {
          func_0x000107c27d58(plStack_c8,uVar17 - uVar26);
        }
        if (iStack_bc == 1) {
          if (lVar35 != 0) {
            puVar19 = (undefined2 *)*plVar11;
            puVar28 = (undefined2 *)(*plStack_c8 + 2);
            puVar25 = puVar19 + 2;
            do {
              puVar28[-1] = *puVar19;
              *puVar28 = puVar25[-1];
              puVar28[1] = *puVar25;
              puVar28 = puVar28 + 3;
              lVar35 = lVar35 + -1;
              puVar25 = puVar25 + 1;
            } while (lVar35 != 0);
          }
        }
        else {
          if (iStack_bc != 2) {
            FUN_10a00946c(&UNK_10f696dc6);
            goto LAB_10aba2efc;
          }
          if (lVar35 != 0) {
            puVar18 = (undefined4 *)*plVar11;
            puVar27 = (undefined4 *)(*plStack_c8 + 4);
            puVar24 = puVar18 + 2;
            do {
              puVar27[-1] = *puVar18;
              *puVar27 = puVar24[-1];
              puVar27[1] = *puVar24;
              puVar27 = puVar27 + 3;
              lVar35 = lVar35 + -1;
              puVar24 = puVar24 + 1;
            } while (lVar35 != 0);
          }
        }
        *(undefined4 *)(param_1 + 0xc4) = 0;
        goto LAB_10aba2918;
      }
      iVar7 = 0;
      if ((ulong)*(uint *)(param_2 + 0x1e) != 0) {
        iVar7 = (int)((ulong)(param_2[3] - param_2[2]) / (ulong)*(uint *)(param_2 + 0x1e));
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
      plStack_c8 = (long *)(param_1 + 0x150);
      uVar17 = (ulong)(iVar7 - 2) * 6;
      lVar23 = *(long *)(param_1 + 0x150);
      uVar26 = *(long *)(param_1 + 0x158) - lVar23;
      if (uVar17 < uVar26 || uVar17 - uVar26 == 0) {
        if (uVar17 < uVar26) {
          *(ulong *)(param_1 + 0x158) = lVar23 + uVar17;
        }
      }
      else {
        func_0x000107c27d58(plStack_c8,uVar17 - uVar26);
        lVar23 = *plStack_c8;
      }
      if (iVar7 != 2) {
        uVar17 = 0;
        psVar20 = (short *)(lVar23 + 4);
        do {
          psVar20[-2] = 0;
          sVar8 = (short)uVar17;
          uVar17 = uVar17 + 1;
          psVar20[-1] = (short)uVar17;
          *psVar20 = sVar8 + 2;
          psVar20 = psVar20 + 3;
        } while (uVar17 < iVar7 - 2);
      }
LAB_10aba29ec:
      plVar11 = (long *)(param_1 + 0x38);
      plVar32 = (long *)*plVar11;
      *(undefined4 *)(param_1 + 0xc0) = 2;
      if (plVar32 == (long *)0x0) {
        plVar10 = (long *)plVar10[0x45];
        (**(code **)(*plVar10 + 0x58))(plVar10,1);
        FUN_10a174ef8(plVar11,plVar10);
        plVar32 = (long *)*plVar11;
      }
      lVar23 = *plStack_c8;
      if (param_4 != 0) {
        (**(code **)(*plVar32 + 0x18))(plVar32,(int)plStack_c8[2] - (int)lVar23,uVar34);
        plVar32 = (long *)*plVar11;
        lVar23 = *plStack_c8;
      }
      (**(code **)(*plVar32 + 0x10))(plVar32,lVar23,plStack_c8[1] - lVar23,0,uVar34);
      iStack_bc = 1;
    }
    else {
LAB_10aba2918:
      if (iStack_bc == 0) {
        *(undefined4 *)(param_1 + 0xc0) = 0;
        FUN_10aba2f68(param_1 + 0x38);
        iStack_bc = 0;
      }
      else {
        if (iStack_bc != 2) {
          if (iStack_bc != 1) {
            FUN_10a00946c(&UNK_10f696dea);
            goto LAB_10aba2efc;
          }
          goto LAB_10aba29ec;
        }
        plVar11 = (long *)(param_1 + 0x38);
        plVar32 = (long *)*plVar11;
        *(undefined4 *)(param_1 + 0xc0) = 4;
        if (plVar32 == (long *)0x0) {
          plVar10 = (long *)plVar10[0x45];
          (**(code **)(*plVar10 + 0x58))(plVar10,2);
          FUN_10a174ef8(plVar11,plVar10);
          plVar32 = (long *)*plVar11;
        }
        (**(code **)(*plVar32 + 0x10))
                  (plVar32,*plStack_c8,plStack_c8[1] - *plStack_c8,0,
                   *(undefined1 *)(param_1 + 0x149));
        iStack_bc = 2;
      }
    }
  }
  if ((param_3 >> 1 & 1) != 0) {
    plVar10 = (long *)(param_1 + 0x48);
    puVar12 = (undefined8 *)(param_1 + 0x50);
    ppppppuStack_a0 = (undefined8 ******)*puVar12;
    lStack_98 = *(long *)(param_1 + 0x58);
    pppppppuVar14 = (undefined8 *******)ppppppuStack_a0;
    if (lStack_98 != 0) {
      ppppppuStack_a0[2] = &ppppppuStack_a0;
      *plVar10 = (long)puVar12;
      *puVar12 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      pppppppuVar14 = (undefined8 *******)0x0;
    }
    FUN_10abd98cc(pppppppuVar14);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar12;
    puVar13 = (undefined8 *)param_2[9];
    for (puVar12 = (undefined8 *)param_2[8]; puVar12 != puVar13; puVar12 = puVar12 + 9) {
      plVar32 = plVar10;
      FUN_10a043650(plVar10,&uStack_68,puVar12);
      puVar33 = (undefined8 *)*plVar32;
      if (puVar33 == (undefined8 *)0x0) {
        puVar33 = (undefined8 *)0x58;
        __Znwm();
        uStack_70 = 0;
        puStack_80 = puVar33;
        plStack_78 = plVar10;
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          func_0x000107c3192c(puVar33 + 4,*puVar12,puVar12[1]);
        }
        else {
          uVar39 = puVar12[1];
          uVar38 = *puVar12;
          puVar33[6] = puVar12[2];
          puVar33[5] = uVar39;
          puVar33[4] = uVar38;
        }
        puVar33[10] = 0;
        puVar33[9] = 0;
        puVar33[8] = 0;
        puVar33[7] = 0;
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33[2] = uStack_68;
        *plVar32 = (long)puVar33;
        puVar16 = puVar33;
        if (*(long *)*plVar10 != 0) {
          *plVar10 = *(long *)*plVar10;
          puVar16 = (undefined8 *)*plVar32;
        }
        func_0x000107c2b058(*(undefined8 *)(param_1 + 0x50),puVar16);
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
      }
      pppppppuVar30 = (undefined8 *******)ppppppuStack_a0;
      pppppppuVar14 = &ppppppuStack_a0;
      if ((undefined8 *******)ppppppuStack_a0 == (undefined8 *******)0x0) {
LAB_10aba2bf4:
        FUN_10a3aa7c4(puVar33 + 9,puVar12 + 7);
        FUN_10aba2f68(puVar33 + 7);
      }
      else {
        do {
          pppppppuVar36 = pppppppuVar14;
          pppppppuVar2 = pppppppuVar30 + 4;
          pppppppuVar15 = pppppppuVar2;
          FUN_10a003e3c(pppppppuVar2,puVar12);
          pppppppuVar14 = pppppppuVar36;
          if (-1 < (char)pppppppuVar15) {
            pppppppuVar14 = pppppppuVar30;
          }
          pppppppuVar30 =
               *(undefined8 ********)((long)pppppppuVar30 + ((ulong)pppppppuVar15 >> 4 & 8));
        } while (pppppppuVar30 != (undefined8 *******)0x0);
        if (pppppppuVar14 == &ppppppuStack_a0) goto LAB_10aba2bf4;
        pppppppuVar30 = pppppppuVar36 + 4;
        if (-1 < (char)pppppppuVar15) {
          pppppppuVar30 = pppppppuVar2;
        }
        puVar16 = puVar12;
        FUN_10a003e3c(puVar12,pppppppuVar30);
        if ((((uint)puVar16 >> 7 & 1) != 0) || (pppppppuVar14[9] != (undefined8 ******)puVar12[7]))
        goto LAB_10aba2bf4;
        FUN_10a18cdb8(puVar33 + 7,pppppppuVar14 + 7);
        FUN_10a0d3730(puVar33 + 9,pppppppuVar14 + 9);
      }
    }
    FUN_10abd98cc(ppppppuStack_a0);
  }
  if ((param_3 >> 2 & 1) != 0) {
    if ((undefined8 *)(param_1 + 0x100) != param_2 + 0xb) {
      FUN_10a0d8644();
    }
    if ((undefined8 *)(param_1 + 0x118) != param_2 + 0x11) {
      FUN_10a4af00c();
    }
  }
  fVar40 = *(float *)(param_2 + 0x28);
  fVar43 = (float)param_2[0x27];
  fVar44 = (float)((ulong)param_2[0x27] >> 0x20);
  fVar41 = ((float)*(undefined8 *)((long)param_2 + 0x144) + fVar43) * 0.5;
  fVar42 = ((float)((ulong)*(undefined8 *)((long)param_2 + 0x144) >> 0x20) + fVar44) * 0.5;
  fVar37 = (*(float *)((long)param_2 + 0x14c) + fVar40) * 0.5;
  *(float *)(param_1 + 0xa8) = fVar41;
  *(ulong *)(param_1 + 0xb4) = CONCAT44(fVar44 - fVar42,fVar43 - fVar41);
  *(ulong *)(param_1 + 0xac) = CONCAT44(fVar37,fVar42);
  *(float *)(param_1 + 0xbc) = fVar40 - fVar37;
  lVar23 = param_2[0x1a];
  lVar35 = param_2[0x1b];
  plVar10 = (long *)(param_1 + 0x130);
  if (lVar23 == lVar35) {
    FUN_10ab4aef8(plVar10,1);
    puVar27 = *(undefined4 **)(param_1 + 0x130);
    if (*(undefined4 **)(param_1 + 0x138) == puVar27) {
LAB_10aba2efc:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10aba2f00);
      (*pcVar9)();
    }
    *puVar27 = 0;
    puVar27[2] = 0;
    if (iStack_bc == 2) {
      uVar22 = (undefined4)((ulong)(plStack_c8[1] - *plStack_c8) >> 2);
    }
    else if (iStack_bc == 1) {
      uVar22 = (undefined4)((ulong)(plStack_c8[1] - *plStack_c8) >> 1);
    }
    else {
      if (iStack_bc != 0) {
        FUN_10a00946c(&UNK_10f696dfc);
        goto LAB_10aba2efc;
      }
      uVar4 = *(uint *)(param_2 + 0x1e);
      uVar22 = 0;
      if (uVar4 != 0) {
        uVar22 = 0;
        if ((ulong)uVar4 != 0) {
          uVar22 = (undefined4)((ulong)(param_2[3] - param_2[2]) / (ulong)uVar4);
        }
      }
    }
    puVar27[1] = uVar22;
    goto LAB_10aba2e80;
  }
  if (plVar10 == param_2 + 0x1a) goto LAB_10aba2e80;
  uVar17 = lVar35 - lVar23;
  lVar21 = *(long *)(param_1 + 0x140);
  lVar31 = *(long *)(param_1 + 0x130);
  if ((ulong)(lVar21 - lVar31) < uVar17) {
    uVar26 = ((long)uVar17 >> 3) * 0x4ec4ec4ec4ec4ec5;
    if (lVar31 != 0) {
      *(long *)(param_1 + 0x138) = lVar31;
      __ZdlPv(lVar31);
      lVar21 = 0;
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    if (0x276276276276276 < uVar26) {
      FUN_10a18d150();
      goto LAB_10aba2efc;
    }
    uVar29 = (lVar21 >> 3) * -0x6276276276276276;
    if (uVar29 < uVar26 || uVar29 + ((long)uVar17 >> 3) * -0x4ec4ec4ec4ec4ec5 == 0) {
      uVar29 = uVar26;
    }
    if (0x13b13b13b13b13a < (ulong)((lVar21 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      uVar29 = 0x276276276276276;
    }
    func_0x00010a1922c8(plVar10,uVar29);
    lVar31 = *(long *)(param_1 + 0x138);
LAB_10aba2e3c:
    _memmove(lVar31,lVar23,uVar17);
    lVar31 = lVar31 + uVar17;
  }
  else {
    lVar21 = *(long *)(param_1 + 0x138);
    if (uVar17 <= (ulong)(lVar21 - lVar31)) goto LAB_10aba2e3c;
    lVar3 = lVar23 + (lVar21 - lVar31);
    if (lVar21 != lVar31) {
      _memmove(lVar31,lVar23);
      lVar21 = *(long *)(param_1 + 0x138);
    }
    lVar35 = lVar35 - lVar3;
    if (lVar35 != 0) {
      _memmove(lVar21,lVar3,lVar35);
    }
    lVar31 = lVar21 + lVar35;
  }
  *(long *)(param_1 + 0x138) = lVar31;
LAB_10aba2e80:
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar32 = plStack_88 + 1;
    do {
      lVar23 = *plVar32;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *plVar32 = lVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10aba2f68; end: 10aba2fc3;  */

void FUN_10aba2f68(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10aba2fc4; end: 10aba2fe3;  */

void FUN_10aba2fc4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x148) = param_2;
  return;
}



/* Entry: 10aba2fe4; end: 10aba30cf;  */

long * FUN_10aba2fe4(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))();
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    plVar3 = (long *)(ulong)(uint)((int)plVar3 + (int)plVar4);
  }
  plVar4 = *(long **)(param_1 + 0x48);
  while (iVar6 = (int)plVar3, plVar4 != (long *)(param_1 + 0x50)) {
    plVar3 = (long *)plVar4[7];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
      iVar6 = iVar6 + (int)plVar3;
    }
    plVar3 = plVar4 + 9;
    plVar1 = (long *)plVar4[1];
    plVar7 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar7[2];
        bVar2 = (long *)*plVar4 != plVar7;
        plVar7 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    plVar3 = (long *)(ulong)(uint)(iVar6 + (((int *)*plVar3)[2] - *(int *)*plVar3));
  }
  lVar5 = *(long *)(param_1 + 0xf0);
  if (lVar5 != 0) {
    plVar3 = (long *)(ulong)(uint)(iVar6 + (*(int *)(lVar5 + 0x30) - *(int *)(lVar5 + 0x28)));
  }
  return plVar3;
}



/* Entry: 10aba30d0; end: 10aba3297;  */

/* WARNING: Possible PIC construction at 0x00010aba3320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aba3324) */
/* WARNING: Removing unreachable block (ram,0x00010aba332c) */
/* WARNING: Removing unreachable block (ram,0x00010aba3330) */

void FUN_10aba30d0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  plVar10 = (long *)param_1[1];
  if (plVar10 < (long *)param_1[2]) {
    lVar13 = *param_2;
    plVar7 = plVar10 + 2;
    plVar10[1] = param_2[1];
    *plVar10 = lVar13;
    *param_2 = 0;
    param_2[1] = 0;
LAB_10aba3194:
    param_1[1] = (long)plVar7;
    return;
  }
  plVar11 = (long *)((long)plVar10 - *param_1);
  plVar7 = (long *)(((long)plVar11 >> 4) + 1);
  plVar6 = param_1;
  plVar8 = param_2;
  if ((ulong)plVar7 >> 0x3c == 0) {
    uVar9 = param_1[2] - *param_1;
    plVar10 = (long *)((long)uVar9 >> 3);
    if (plVar10 <= plVar7) {
      plVar10 = plVar7;
    }
    if (0x7fffffffffffffef < uVar9) {
      plVar10 = (long *)0xfffffffffffffff;
    }
    if ((ulong)plVar10 >> 0x3c == 0) {
      lVar5 = (long)plVar10 << 4;
      __Znwm();
      plVar11 = (long *)(lVar5 + (long)plVar11);
      lVar17 = param_2[1];
      lVar16 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      lVar13 = *param_1;
      lVar12 = (long)plVar11 - (param_1[1] - lVar13);
      plVar7 = plVar11 + 2;
      plVar11[1] = lVar17;
      *plVar11 = lVar16;
      _memcpy(lVar12,lVar13);
      *param_1 = lVar12;
      param_1[1] = (long)plVar7;
      param_1[2] = lVar5 + (long)plVar10 * 0x10;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10aba3194;
    }
  }
  else {
    func_0x00010abd0d40();
  }
  uVar15 = 0x10aba31b4;
  func_0x000109ffded8();
  puVar3 = &stack0xffffffffffffffc0;
  do {
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x40);
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long **)(puVar3 + -0x30) = plVar10;
    *(long **)(puVar3 + -0x28) = plVar11;
    *(long **)(puVar3 + -0x20) = param_2;
    *(long **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(undefined8 *)(puVar3 + -8) = uVar15;
    plVar10 = (long *)plVar6[1];
    if (plVar10 < (long *)plVar6[2]) {
      lVar13 = *plVar8;
      plVar11 = plVar10 + 2;
      plVar10[1] = plVar8[1];
      *plVar10 = lVar13;
      *plVar8 = 0;
      plVar8[1] = 0;
LAB_10aba3278:
      plVar6[1] = (long)plVar11;
      return;
    }
    lVar13 = (long)plVar10 - *plVar6;
    plVar7 = (long *)((lVar13 >> 4) + 1);
    param_2 = plVar6;
    plVar11 = plVar8;
    if ((ulong)plVar7 >> 0x3c == 0) {
      uVar9 = plVar6[2] - *plVar6;
      plVar10 = (long *)((long)uVar9 >> 3);
      if (plVar10 <= plVar7) {
        plVar10 = plVar7;
      }
      if (0x7fffffffffffffef < uVar9) {
        plVar10 = (long *)0xfffffffffffffff;
      }
      if ((ulong)plVar10 >> 0x3c == 0) {
        lVar5 = (long)plVar10 << 4;
        __Znwm();
        plVar7 = (long *)(lVar5 + lVar13);
        lVar17 = plVar8[1];
        lVar16 = *plVar8;
        *plVar8 = 0;
        plVar8[1] = 0;
        lVar13 = *plVar6;
        lVar12 = (long)plVar7 - (plVar6[1] - lVar13);
        plVar11 = plVar7 + 2;
        plVar7[1] = lVar17;
        *plVar7 = lVar16;
        _memcpy(lVar12,lVar13);
        *plVar6 = lVar12;
        plVar6[1] = (long)plVar11;
        plVar6[2] = lVar5 + (long)plVar10 * 0x10;
        if (lVar13 != 0) {
          __ZdlPv(lVar13);
        }
        goto LAB_10aba3278;
      }
    }
    else {
      func_0x00010abd0d54();
    }
    func_0x000109ffded8();
    plVar4 = (long *)(puVar3 + -0x80);
    *(long **)(puVar3 + -0x70) = plVar10;
    *(long *)(puVar3 + -0x68) = lVar13;
    *(long **)(puVar3 + -0x60) = plVar8;
    *(long **)(puVar3 + -0x58) = plVar6;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x48) = FUN_10aba3298;
    param_1 = (long *)*plVar11;
    plVar7 = param_2 + 6;
    plVar6 = param_1;
    FUN_10abd9efc();
    if (((ulong)plVar6 & 1) != 0) {
      *(long **)(param_2[7] + (long)plVar7 * 8) = param_1;
      func_0x00010a1759fc(param_2 + 0x16,plVar11);
    }
    plVar7 = param_2 + 10;
    plVar6 = param_1;
    FUN_10abd9efc();
    if (((ulong)plVar6 & 1) == 0) {
      return;
    }
    *(long **)(param_2[0xb] + (long)plVar7 * 8) = param_1;
    lVar13 = plVar11[1];
    lVar5 = *plVar11;
    *(long *)(puVar3 + -0x78) = plVar11[1];
    *(long *)(puVar3 + -0x80) = lVar5;
    if (lVar13 != 0) {
      plVar7 = (long *)(lVar13 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar15 = 0x10aba3324;
    puVar3 = puVar3 + -0x80;
    plVar6 = param_2;
    plVar8 = plVar4;
  } while( true );
}



/* Entry: 10aba3298; end: 10aba3363;  */

void FUN_10aba3298(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = *param_2;
  lVar4 = param_1 + 0x30;
  uVar5 = uVar6;
  FUN_10abd9efc();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x38) + lVar4 * 8) = uVar6;
    func_0x00010a1759fc(param_1 + 0xb0,param_2);
  }
  lVar4 = param_1 + 0x50;
  uVar5 = uVar6;
  FUN_10abd9efc();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x58) + lVar4 * 8) = uVar6;
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
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
    func_0x00010aba31b4(param_1,&uStack_40);
    if (uStack_38 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(uVar6 + 0x18) = 1;
  }
  return;
}



/* Entry: 10aba3364; end: 10aba36db;  */

/* WARNING: Removing unreachable block (ram,0x00010aba3418) */
/* WARNING: Removing unreachable block (ram,0x00010aba3428) */
/* WARNING: Removing unreachable block (ram,0x00010aba3444) */
/* WARNING: Removing unreachable block (ram,0x00010aba3448) */
/* WARNING: Removing unreachable block (ram,0x00010aba345c) */
/* WARNING: Removing unreachable block (ram,0x00010aba3520) */
/* WARNING: Removing unreachable block (ram,0x00010aba3530) */
/* WARNING: Removing unreachable block (ram,0x00010aba354c) */
/* WARNING: Removing unreachable block (ram,0x00010aba3550) */
/* WARNING: Removing unreachable block (ram,0x00010aba3564) */

void FUN_10aba3364(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)param_1[3];
  puVar6 = (undefined8 *)param_1[4];
  if (puVar8 != puVar6) {
LAB_10aba338c:
    puVar9 = puVar8 + 2;
    if ((puVar8[1] != 0) && (*(long *)(puVar8[1] + 8) != -1)) goto code_r0x00010aba33a0;
    if ((puVar8 != puVar6) && (puVar9 != puVar6)) {
      do {
        lVar7 = puVar9[1];
        if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != -1)) {
          uVar5 = *puVar9;
          *puVar9 = 0;
          puVar9[1] = 0;
          lVar4 = puVar8[1];
          *puVar8 = uVar5;
          puVar8[1] = lVar7;
          if (lVar4 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar8 = puVar8 + 2;
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar6);
      puVar6 = (undefined8 *)param_1[4];
    }
    if (puVar6 < puVar8) goto LAB_10aba36d8;
    if (puVar8 != puVar6) {
      for (; puVar6 != puVar8; puVar6 = puVar6 + -2) {
        if (puVar6[-1] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      param_1[4] = puVar8;
    }
  }
LAB_10aba3484:
  puVar6 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  do {
    puVar9 = puVar8;
    if (puVar9 == puVar6) goto LAB_10aba358c;
    puVar8 = puVar9 + 2;
  } while ((puVar9[1] != 0) && (*(long *)(puVar9[1] + 8) != -1));
  if ((puVar9 != puVar6) && (puVar8 != puVar6)) {
    do {
      lVar7 = puVar8[1];
      if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != -1)) {
        uVar5 = *puVar8;
        *puVar8 = 0;
        puVar8[1] = 0;
        lVar4 = puVar9[1];
        *puVar9 = uVar5;
        puVar9[1] = lVar7;
        if (lVar4 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        puVar9 = puVar9 + 2;
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
  }
  if (puVar6 < puVar9) {
LAB_10aba36d8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aba36dc);
    (*pcVar3)();
  }
  if (puVar9 != puVar6) {
    for (; puVar6 != puVar9; puVar6 = puVar6 + -2) {
      if (puVar6[-1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    param_1[1] = puVar9;
  }
LAB_10aba358c:
  lVar7 = param_1[0x1f];
  lVar4 = param_1[0x20];
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a0523dc();
  }
  param_1[0x20] = lVar7;
  lVar7 = param_1[0x19];
  lVar4 = param_1[0x1a];
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a0616d0();
  }
  param_1[0x1a] = lVar7;
  lVar7 = param_1[0x1c];
  lVar4 = param_1[0x1d];
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a0616d0();
  }
  param_1[0x1d] = lVar7;
  lVar7 = param_1[0x22];
  lVar4 = param_1[0x23];
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a0523dc();
  }
  param_1[0x23] = lVar7;
  lVar7 = param_1[0x16];
  lVar4 = param_1[0x17];
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a0616d0();
  }
  param_1[0x17] = lVar7;
  lVar7 = param_1[0x25];
  lVar4 = param_1[0x26];
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a0523dc();
  }
  param_1[0x26] = lVar7;
  if (param_1[8] != 0) {
    FUN_10ae6cbe8(param_1 + 6,&UNK_110c53608,(ulong)param_1[8] < 0x80);
  }
  if (param_1[0x10] != 0) {
    FUN_10ae6cbe8(param_1 + 0xe,&UNK_110c535e8,(ulong)param_1[0x10] < 0x80);
  }
  if (param_1[0xc] != 0) {
    FUN_10ae6cbe8(param_1 + 10,&UNK_110c53608,(ulong)param_1[0xc] < 0x80);
  }
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x12;
    param_1[0x15] = 0;
    if ((ulong)param_1[0x14] < 0x80) {
      lVar4 = param_1[0x14];
      lVar7 = *plVar1;
      _memset(lVar7,0x80,lVar4 + 8);
      *(undefined1 *)(lVar7 + lVar4) = 0xff;
      uVar2 = param_1[0x14];
      lVar7 = 6;
      if (uVar2 != 7) {
        lVar7 = uVar2 - (uVar2 >> 3);
      }
      *(long *)(*plVar1 + -8) = lVar7 - param_1[0x15];
    }
    else {
      (*(code *)&DAT_104c32e5c)(plVar1);
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      *plVar1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
code_r0x00010aba33a0:
  puVar8 = puVar9;
  if (puVar9 == puVar6) goto LAB_10aba3484;
  goto LAB_10aba338c;
}



/* Entry: 10aba36dc; end: 10aba37df;  */

undefined8 * FUN_10aba36dc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110c4ff70;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar5;
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
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  (**(code **)(**(long **)(param_2 + 0x228) + 0x28))(auStack_40);
  FUN_10aba37e0(param_1 + 8,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10aba37e0; end: 10aba388b;  */

undefined8 * FUN_10aba37e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10aba388c; end: 10aba388f;  */

undefined8 * FUN_10aba388c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4ff70;
  func_0x00010abda3a8(param_1 + 8);
  func_0x00010a183e14(param_1 + 6);
  func_0x00010abda2d0(param_1 + 1);
  return param_1;
}



/* Entry: 10aba3890; end: 10aba38a3;  */

void FUN_10aba3890(void)

{
  func_0x00010aba3844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aba38a4; end: 10aba3b83;  */

undefined8
FUN_10aba38a4(long param_1,long param_2,uint param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar13 = 0;
  lVar1 = param_1 + param_2 * 0x80;
  do {
    if (param_4 != 0) {
      uVar13 = uVar13 + (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 6);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    for (lVar11 = *(long *)(param_1 + 8); lVar11 != lVar3; lVar11 = lVar11 + 0x40) {
      uVar13 = uVar13 + 1;
      if (param_3 < uVar13) goto LAB_10aba399c;
      uVar5 = *(uint *)(lVar11 + 0x1c);
      if (0xffffffef < uVar5) {
        FUN_10ae03140(0,param_5,param_6);
        FUN_10ae03140();
        func_0x00010ae02f4c();
        ppuVar10 = &PTR_PTR_113306c38;
        ppuVar8 = ppuVar10;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae0314c();
        func_0x00010ae02f5c();
        goto LAB_10aba3ac8;
      }
      lVar12 = *(long *)(lVar11 + 0x28);
      lVar4 = *(long *)(lVar11 + 0x30);
      if (lVar12 != lVar4) {
        do {
          uVar7 = (ulong)*(uint *)(lVar12 + 0x24);
          if (*(uint *)(lVar12 + 0x24) - 1 < 0x13) {
            func_0x000109296680();
            uVar6 = *(uint *)(lVar12 + 0x20);
            uVar2 = uVar6;
            if (uVar6 < 2) {
              uVar2 = 1;
            }
            if (uVar6 != 0) {
              uVar6 = (uint)uVar7;
              if ((uint)uVar7 <= *(uint *)(lVar12 + 0x1c)) {
                uVar6 = *(uint *)(lVar12 + 0x1c);
              }
              uVar7 = (ulong)uVar6;
            }
            if (((ulong)(uVar5 + 0xf) & 0xfffffff0) <
                (ulong)*(uint *)(lVar12 + 0x18) + (ulong)uVar2 * (uVar7 & 0xffffffff)) {
              FUN_10ae03140(0,param_5,param_6);
              FUN_10ae03140();
              func_0x00010ae02f4c();
              func_0x00010ae02f94();
              FUN_10ae03140();
              func_0x00010ae02f94();
              ppuVar10 = &PTR_PTR_113306cc0;
              ppuVar8 = ppuVar10;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae0314c();
              func_0x00010ae02f5c();
              func_0x00010ae02fa4();
              FUN_10ae0314c();
              func_0x00010ae02fa4();
              goto LAB_10aba3ac8;
            }
          }
          lVar12 = lVar12 + 0x28;
        } while (lVar12 != lVar4);
      }
    }
    param_1 = param_1 + 0x80;
    if (param_1 == lVar1) {
      if (param_3 < uVar13) {
LAB_10aba399c:
        FUN_10ae03140(0,param_5,param_6);
        func_0x00010ae02f4c();
        ppuVar10 = &PTR_PTR_113306d48;
        ppuVar8 = ppuVar10;
        FUN_10ae079a0();
        FUN_10ae0314c();
        func_0x00010ae02f5c();
LAB_10aba3ac8:
        FUN_10ae07cd4(ppuVar8,ppuVar10);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      return uVar9;
    }
  } while( true );
}



/* Entry: 10aba3b84; end: 10aba4057;  */

/* WARNING: Removing unreachable block (ram,0x00010aba3d9c) */
/* WARNING: Removing unreachable block (ram,0x00010aba3da0) */
/* WARNING: Removing unreachable block (ram,0x00010aba3da8) */
/* WARNING: Removing unreachable block (ram,0x00010aba3db0) */
/* WARNING: Removing unreachable block (ram,0x00010aba3dbc) */
/* WARNING: Removing unreachable block (ram,0x00010aba3dc4) */
/* WARNING: Removing unreachable block (ram,0x00010aba3dcc) */
/* WARNING: Removing unreachable block (ram,0x00010aba3dd0) */
/* WARNING: Removing unreachable block (ram,0x00010aba3f7c) */
/* WARNING: Removing unreachable block (ram,0x00010aba3f80) */
/* WARNING: Removing unreachable block (ram,0x00010aba3f88) */
/* WARNING: Removing unreachable block (ram,0x00010aba3f90) */
/* WARNING: Removing unreachable block (ram,0x00010aba3f9c) */
/* WARNING: Removing unreachable block (ram,0x00010aba3fa4) */
/* WARNING: Removing unreachable block (ram,0x00010aba3fac) */
/* WARNING: Removing unreachable block (ram,0x00010aba3fb0) */

void FUN_10aba3b84(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if ((param_3 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), param_3 == (long *)0x0)
     ) {
    FUN_10a043ecc();
    goto LAB_10aba400c;
  }
  plVar6 = param_3 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = *plVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar2 = param_3 + 1;
  do {
    lVar8 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*param_3 + 0x10))(param_3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
  }
  uVar1 = *param_4;
  plVar2 = (long *)param_4[1];
  if (plVar2 == (long *)0x0) {
    param_6 = (undefined8 *)*param_6;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = (long *)param_6[2];
    plVar7 = plVar6;
    if (plVar9 != (long *)0x0) goto LAB_10aba3cb0;
  }
  else {
    plVar7 = plVar2 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_6 = (undefined8 *)*param_6;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = (long *)param_6[2];
    if (plVar9 != (long *)0x0) {
LAB_10aba3cb0:
      puStack_88 = (undefined8 *)0x0;
      pcStack_78 = (code *)0x0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,&pcStack_78);
      if (pcStack_78 != (code *)0x0) {
LAB_10aba400c:
        func_0x0001092af97c(&pcStack_78);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10aba4018);
        (*pcVar5)();
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar2 != (long *)0x0) {
        plVar7 = plVar2 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puStack_90 = (undefined8 *)0xf8;
      __Znwm();
      puStack_90[2] = 0;
      puStack_90[1] = 0x200000006;
      *(undefined2 *)(puStack_90 + 3) = 4;
      puStack_90[5] = 0;
      puStack_90[4] = 0;
      puStack_90[7] = 0;
      puStack_90[6] = 0;
      puStack_90[9] = 0;
      puStack_90[8] = 0;
      puStack_90[0xb] = 0;
      puStack_90[10] = 0;
      puStack_90[0xd] = 0;
      puStack_90[0xc] = 0;
      puStack_90[0xf] = 0;
      puStack_90[0xe] = 0;
      puStack_90[0x10] = 0;
      puStack_90[0x11] = puStack_90 + 3;
      puStack_90[0x12] = 0;
      *(undefined1 *)(puStack_90 + 0x13) = 0;
      *(undefined1 *)(puStack_90 + 0x15) = 0;
      *puStack_90 = &PTR_FUN_110c50a10;
      puStack_98 = puStack_90 + 0x16;
      *puStack_98 = param_2;
      puStack_90[0x17] = param_3;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puStack_90[0x18] = uVar1;
      puStack_90[0x19] = plVar2;
      if (plVar2 != (long *)0x0) {
        plVar6 = plVar2 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(puStack_90 + 0x1a) = param_5;
      *(undefined1 *)(puStack_90 + 0x1c) = 1;
      puStack_90[0x1d] = 0;
      puStack_90[0x1e] = plVar9;
      if (puStack_88 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_88);
      }
      puStack_88 = puStack_90;
      if (plVar2 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
      pcStack_80 = FUN_10abd0d68;
      __ZNSt13exception_ptrD1Ev(&pcStack_78);
      goto LAB_10aba3f10;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    puStack_88 = (undefined8 *)0x0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_90 = (undefined8 *)0xf0;
  __Znwm();
  puStack_90[2] = 0;
  puStack_90[1] = 0x200000006;
  *(undefined2 *)(puStack_90 + 3) = 4;
  puStack_90[5] = 0;
  puStack_90[4] = 0;
  puStack_90[7] = 0;
  puStack_90[6] = 0;
  puStack_90[9] = 0;
  puStack_90[8] = 0;
  puStack_90[0xb] = 0;
  puStack_90[10] = 0;
  puStack_90[0xd] = 0;
  puStack_90[0xc] = 0;
  puStack_90[0xf] = 0;
  puStack_90[0xe] = 0;
  puStack_90[0x10] = 0;
  puStack_90[0x11] = puStack_90 + 3;
  puStack_90[0x12] = 0;
  *(undefined1 *)(puStack_90 + 0x13) = 0;
  *(undefined1 *)(puStack_90 + 0x15) = 0;
  *puStack_90 = &PTR_DAT_110c50a80;
  puStack_98 = puStack_90 + 0x16;
  *puStack_98 = param_2;
  puStack_90[0x17] = param_3;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = *plVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_90[0x18] = uVar1;
  puStack_90[0x19] = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar6 = plVar2 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(puStack_90 + 0x1a) = param_5;
  *(undefined1 *)(puStack_90 + 0x1c) = 1;
  puStack_90[0x1d] = 0;
  if (puStack_88 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_88);
  }
  puStack_88 = puStack_90;
  if (plVar2 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
  pcStack_80 = FUN_10abd0d98;
LAB_10aba3f10:
  if (puStack_98[7] != 0) {
    func_0x0001092b4274();
  }
  puStack_98[7] = puStack_88;
  puStack_88 = (undefined8 *)0x0;
  pcStack_78 = pcStack_80;
  puStack_70 = puStack_98;
  puStack_68 = param_6;
  (**(code **)*param_6)(param_6,&pcStack_78);
  *param_1 = puStack_90;
  if (puStack_88 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_88);
  }
  plVar6 = param_3;
  if (plVar2 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    plVar6 = plVar2;
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
  return;
}



/* Entry: 10aba4058; end: 10aba408f;  */

long FUN_10aba4058(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aba4090; end: 10aba498b;  */

void FUN_10aba4090(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lStack_248;
  undefined8 ****ppppuStack_240;
  long lStack_238;
  char cStack_229;
  undefined1 auStack_228 [8];
  long *plStack_220;
  char cStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 ****ppppuStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 ****ppppuStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b0 [104];
  undefined8 ****ppppuStack_148;
  long *plStack_140;
  undefined7 uStack_138;
  char cStack_131;
  undefined8 ****ppppuStack_e0;
  long lStack_d8;
  undefined1 uStack_c8;
  byte bStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_1;
  FUN_10ad055a0();
  if ((int)plVar10 == 0) {
LAB_10aba4108:
    lVar13 = param_2[0x82];
    if (lVar13 == 0) {
      plStack_210 = (long *)0x0;
      plStack_208 = (long *)0x0;
      plVar10 = (long *)param_2[3];
      if (((plVar10 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_208 = plVar10, plVar10 == (long *)0x0))
         || (plVar17 = (long *)param_2[2], plStack_210 = plVar17, plVar17 == (long *)0x0)) {
        FUN_10aba498c(param_1);
      }
      else {
        plVar11 = plVar17;
        (**(code **)(*plVar17 + 0x40))();
        if (((ulong)plVar11 & 1) == 0) {
          FUN_10aba498c(param_1);
        }
        else {
          lVar13 = *param_4;
          lVar16 = *param_5;
          plVar11 = plVar17;
          (**(code **)(*plVar17 + 0x38))();
          if (((int)plVar11 == 0 || lVar13 == 0) || lVar16 == 0) {
            if (*param_5 == 0) {
              (**(code **)(*plVar17 + 0x10))(&ppppuStack_200,plVar17,param_2 + 4,param_3);
              FUN_10aba4a74(&ppppuStack_e0,&ppppuStack_200);
              plVar10 = (long *)param_2[0x82];
              if (plVar10 != (long *)0x0) {
                puVar1 = (ulong *)(plVar10 + 1);
                do {
                  uVar15 = *puVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar15 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar15 & 0x1fffffffc) == 4) {
                  do {
                    uVar15 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar15 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar15 - 1 == 0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                }
              }
              plVar10 = plStack_1f8;
              param_2[0x82] = ppppuStack_e0;
              if (plStack_1f8 != (long *)0x0) {
                plVar17 = plStack_1f8 + 1;
                do {
                  lVar13 = *plVar17;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar6) {
                    *plVar17 = lVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                }
              }
              pppppuVar14 = (undefined8 *****)param_2[0x82];
            }
            else {
              FUN_10aba3b84(&ppppuStack_200,*param_2,param_2[1],&plStack_210,param_3,param_5);
              plVar10 = (long *)param_2[0x82];
              if (plVar10 != (long *)0x0) {
                puVar1 = (ulong *)(plVar10 + 1);
                do {
                  uVar15 = *puVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar15 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar15 & 0x1fffffffc) == 4) {
                  do {
                    uVar15 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar15 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar15 - 1 == 0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                }
              }
              param_2[0x82] = ppppuStack_200;
              pppppuVar14 = (undefined8 *****)ppppuStack_200;
            }
            *param_1 = (long)pppppuVar14;
            if (pppppuVar14 != (undefined8 *****)0x0) {
              pppppuVar14 = pppppuVar14 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
                if (bVar6) {
                  *pppppuVar14 = (undefined8 ****)((long)*pppppuVar14 + 4);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          else {
            (**(code **)(*plVar17 + 0x18))(&ppppuStack_240,plVar17,param_2 + 4,param_3);
            if (cStack_218 == '\x01') {
              FUN_10aba4a74(&ppppuStack_200,auStack_228);
              plVar10 = (long *)param_2[0x82];
              if (plVar10 != (long *)0x0) {
                puVar1 = (ulong *)(plVar10 + 1);
                do {
                  uVar15 = *puVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar15 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar15 & 0x1fffffffc) == 4) {
                  do {
                    uVar15 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar15 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar15 - 1 == 0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                }
              }
              param_2[0x82] = ppppuStack_200;
              *param_1 = (long)ppppuStack_200;
              if ((undefined8 *****)ppppuStack_200 != (undefined8 *****)0x0) {
                pppppuVar14 = (undefined8 *****)(ppppuStack_200 + 1);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
                  if (bVar6) {
                    *pppppuVar14 = (undefined8 ****)((long)*pppppuVar14 + 4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            else {
              (**(code **)(*plVar17 + 0x48))(&ppppuStack_e0,plVar17,param_4);
              if ((bStack_78 & 1) != 0) {
                FUN_10aba4b64(&ppppuStack_148,&ppppuStack_e0);
                ppppuStack_200 = (undefined8 ****)*param_2;
                plVar11 = (long *)param_2[1];
                if (plVar11 == (long *)0x0) {
                  plStack_1f8 = (long *)0x0;
                }
                else {
                  __ZNSt3__119__shared_weak_count4lockEv();
                  ppppuVar7 = ppppuStack_200;
                  plStack_1f8 = plVar11;
                  if (plVar11 != (long *)0x0) {
                    plVar4 = plVar11 + 2;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                      if (bVar6) {
                        *plVar4 = *plVar4 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    func_0x00010a198158(&ppppuStack_200);
                    plVar2 = plVar10 + 2;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *plVar2 = *plVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    lVar13 = param_5[1];
                    lStack_1d0 = param_5[1];
                    lStack_1d8 = *param_5;
                    if (lVar13 != 0) {
                      plVar3 = (long *)(lVar13 + 0x10);
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar6) {
                          *plVar3 = *plVar3 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    lVar16 = *param_4;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                      if (bVar6) {
                        *plVar4 = *plVar4 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *plVar2 = *plVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    uStack_1e0 = (undefined1)param_3;
                    if (lVar13 != 0) {
                      plVar4 = (long *)(lVar13 + 0x10);
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                        if (bVar6) {
                          *plVar4 = *plVar4 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    ppppuStack_200 = ppppuVar7;
                    plStack_1f0 = plVar17;
                    plStack_1e8 = plVar10;
                    if (cStack_229 < '\0') {
                      plStack_1f8 = plVar11;
                      func_0x000107c3192c(&ppppuStack_1c8,ppppuStack_240,lStack_238);
                    }
                    else {
                      lStack_1c0 = lStack_238;
                      ppppuStack_1c8 = ppppuStack_240;
                      plStack_1f8 = plVar11;
                    }
                    FUN_10aba4c24(auStack_1b0,&ppppuStack_148);
                    FUN_10abd13a4(&lStack_248,lVar16,&ppppuStack_200);
                    plVar17 = (long *)param_2[0x82];
                    if (plVar17 != (long *)0x0) {
                      puVar1 = (ulong *)(plVar17 + 1);
                      do {
                        uVar15 = *puVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar6) {
                          *puVar1 = uVar15 - 4;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if ((uVar15 & 0x1fffffffc) == 4) {
                        do {
                          uVar15 = *puVar1;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar6) {
                            *puVar1 = uVar15 - 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (uVar15 - 1 == 0) {
                          (**(code **)(*plVar17 + 8))();
                        }
                      }
                    }
                    param_2[0x82] = lStack_248;
                    FUN_10aba4ccc(&ppppuStack_200);
                    lVar16 = param_2[0x82];
                    *param_1 = lVar16;
                    if (lVar16 != 0) {
                      plVar17 = (long *)(lVar16 + 8);
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                        if (bVar6) {
                          *plVar17 = *plVar17 + 4;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    if (lVar13 != 0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
                    }
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                    func_0x00010a167a60(&ppppuStack_148);
                    goto LAB_10aba4690;
                  }
                }
                FUN_10a043ecc();
                goto LAB_10aba4824;
              }
              FUN_10aba3b84(&ppppuStack_200,*param_2,param_2[1],&plStack_210,param_3,param_5);
              plVar10 = (long *)param_2[0x82];
              if (plVar10 != (long *)0x0) {
                puVar1 = (ulong *)(plVar10 + 1);
                do {
                  uVar15 = *puVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = uVar15 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar15 & 0x1fffffffc) == 4) {
                  do {
                    uVar15 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar15 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar15 - 1 == 0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                }
              }
              param_2[0x82] = ppppuStack_200;
              *param_1 = (long)ppppuStack_200;
              if ((undefined8 *****)ppppuStack_200 != (undefined8 *****)0x0) {
                pppppuVar14 = (undefined8 *****)(ppppuStack_200 + 1);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
                  if (bVar6) {
                    *pppppuVar14 = (undefined8 ****)((long)*pppppuVar14 + 4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
LAB_10aba4690:
              func_0x00010abd4d0c(&ppppuStack_e0);
            }
            if ((cStack_218 == '\x01') && (plStack_220 != (long *)0x0)) {
              plVar10 = plStack_220 + 1;
              do {
                lVar13 = *plVar10;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = lVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plStack_220 + 0x10))(plStack_220);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_220);
              }
            }
            if (cStack_229 < '\0') {
              __ZdlPv(ppppuStack_240);
            }
          }
        }
      }
      plVar10 = plStack_208;
      if (plStack_208 != (long *)0x0) {
        plVar17 = plStack_208 + 1;
        do {
          lVar13 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    else {
      *param_1 = lVar13;
      plVar10 = (long *)(lVar13 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar9 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar9 == (undefined *)0x0) {
      ppuVar9 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar10 = (long *)*ppuVar9;
      if ((plVar10 == (long *)0x0) || ((**(code **)(*plVar10 + 0x18))(), plVar10 == (long *)0x0))
      goto LAB_10aba4108;
      plVar10 = plVar10 + 7;
    }
    else {
      plVar10 = (long *)(*ppuVar9 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) goto LAB_10aba4108;
  }
  func_0x000107c2b054(&ppppuStack_148,&UNK_10f696e23);
  func_0x000107c2b054(&ppppuStack_240,"");
  ppppuStack_e0 = (undefined8 ****)0x10f29b0c6;
  ppppuStack_200 = ppppuStack_e0;
  if (cStack_131 < '\0') {
    if (plStack_140 != (long *)0x0) {
      ppppuStack_200 = ppppuStack_148;
    }
  }
  else if (cStack_131 != '\0') {
    ppppuStack_200 = &ppppuStack_148;
  }
  if (cStack_229 < '\0') {
    if (lStack_238 != 0) {
      ppppuStack_e0 = ppppuStack_240;
    }
  }
  else if (cStack_229 != '\0') {
    ppppuStack_e0 = &ppppuStack_240;
  }
  FUN_10a224324(&ppppuStack_200,&ppppuStack_e0);
  if (cStack_131 < '\0') {
    if (plStack_140 != (long *)0x0) {
      func_0x000107c3192c(&ppppuStack_200,ppppuStack_148);
      goto LAB_10aba47bc;
    }
LAB_10aba479c:
    uVar12 = 0;
    ppppuStack_200 = (undefined8 ****)((ulong)ppppuStack_200 & 0xffffffffffffff00);
  }
  else {
    if (cStack_131 == '\0') goto LAB_10aba479c;
    plStack_1f8 = plStack_140;
    ppppuStack_200 = ppppuStack_148;
    plStack_1f0 = (long *)CONCAT17(cStack_131,uStack_138);
LAB_10aba47bc:
    uVar12 = 1;
  }
  plStack_1e8 = (long *)CONCAT71(plStack_1e8._1_7_,uVar12);
  if (cStack_229 < '\0') {
    if (lStack_238 != 0) {
      func_0x000107c3192c(&ppppuStack_e0,ppppuStack_240);
      goto LAB_10aba4804;
    }
LAB_10aba47e8:
    uStack_c8 = 0;
    ppppuStack_e0 = (undefined8 ****)((ulong)ppppuStack_e0 & 0xffffffffffffff00);
  }
  else {
    if (cStack_229 == '\0') goto LAB_10aba47e8;
    lStack_d8 = lStack_238;
    ppppuStack_e0 = ppppuStack_240;
LAB_10aba4804:
    uStack_c8 = 1;
  }
  FUN_10a234a0c(&ppppuStack_200,&ppppuStack_e0);
LAB_10aba4824:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba4828);
  (*pcVar8)();
}


