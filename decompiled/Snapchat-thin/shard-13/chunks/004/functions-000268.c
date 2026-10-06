/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5335e0; end: 10a53367f;  */

void FUN_10a5335e0(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a061620(param_1 + 0x18);
    func_0x00010a4ee7c8(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a533680; end: 10a533777;  */

void FUN_10a533680(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a53374c);
    (*pcVar4)();
  }
  lVar6 = param_1[8];
  param_1[8] = 0;
  lStack_28 = lVar6;
  FUN_10a531670(param_1 + 1,*(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a5336f4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a5336f4:
      if ((char)param_1[7] == '\x01') {
        func_0x00010a061620(param_1 + 3);
        func_0x00010a4ee7c8(param_1 + 1);
        *(undefined1 *)(param_1 + 7) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a533778; end: 10a53392f;  */

undefined8 * FUN_10a533778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef270;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    func_0x00010a061620(param_1 + 0x17);
    func_0x00010a4ee7c8(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a533930; end: 10a5339ab;  */

undefined * FUN_10a533930(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  ppuVar7 = &PTR_PTR_113302470;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a5339ac; end: 10a5339bb;  */

void FUN_10a5339ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef2e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5339bc; end: 10a5339db;  */

void FUN_10a5339bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef2e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5339dc; end: 10a5339ff;  */

void FUN_10a5339dc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a5339f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10a533a00; end: 10a533a57;  */

long FUN_10a533a00(long param_1)

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



/* Entry: 10a533a58; end: 10a534223;  */

void FUN_10a533a58(undefined **param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *extraout_x8;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[0x27] & 1) == 0) {
    plVar6 = (long *)param_1[9];
    if (((uint)*(undefined8 *)(param_1[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar6 + 0x12);
      goto LAB_10a533fe0;
    }
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)param_1[0x1f];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar10 = param_1[0x25];
    puVar7 = param_1[0x22];
    param_1[0x22] = (undefined *)0x0;
    param_1[0x23] = puVar7;
    param_1[0x1f] = (undefined *)0x0;
    param_1[0x20] = (undefined *)0x0;
    plVar6 = *(long **)(puVar10 + 0x50);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
LAB_10a533bdc:
      FUN_10a4f41d4(&pcStack_a8,&UNK_10f65db58);
      FUN_109d1a6b8(param_1 + 0x23,&pcStack_a8);
      __ZNSt13exception_ptrD1Ev(&pcStack_a8);
      if (plVar6 != (long *)0x0) goto LAB_10a533d68;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[0x20] = (undefined *)plVar6;
      if (plVar6 == (long *)0x0) goto LAB_10a533bdc;
      puVar11 = *(undefined8 **)(puVar10 + 0x48);
      param_1[0x1f] = (undefined *)puVar11;
      if (puVar11 == (undefined8 *)0x0) goto LAB_10a533bdc;
      puVar7 = param_1[0x24];
      *(undefined4 *)(param_1 + 9) = 3;
      if ((char)puVar7[0x1f] < '\0') {
        func_0x000107c3192c(param_1 + 10,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10))
        ;
        cVar3 = puVar7[0x1f];
        param_1[0xe] = (undefined *)0x0;
        param_1[0xd] = (undefined *)0x0;
        param_1[0x14] = (undefined *)0x0;
        param_1[0x13] = (undefined *)0x0;
        param_1[0x1a] = (undefined *)0x0;
        param_1[0x19] = (undefined *)0x0;
        param_1[0x1c] = (undefined *)0x0;
        param_1[0x1b] = (undefined *)0x0;
        param_1[0x1e] = (undefined *)0x0;
        param_1[0x1d] = (undefined *)0x0;
        param_1[0x16] = (undefined *)0x0;
        param_1[0x15] = (undefined *)0x0;
        param_1[0x18] = (undefined *)0x0;
        param_1[0x17] = (undefined *)0x0;
        param_1[0x10] = (undefined *)0x0;
        param_1[0xf] = (undefined *)0x0;
        param_1[0x12] = (undefined *)0x0;
        param_1[0x11] = (undefined *)0x0;
        puStack_c8 = param_1[0x23];
        puVar7 = param_1[0x24];
        param_1[0x23] = (undefined *)0x0;
        if (-1 < cVar3) goto LAB_10a533c64;
        func_0x000107c3192c(&uStack_c0,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
        puStack_98 = puStack_c8;
      }
      else {
        puVar12 = *(undefined **)(puVar7 + 0x10);
        puVar10 = *(undefined **)(puVar7 + 8);
        param_1[0xc] = *(undefined **)(puVar7 + 0x18);
        param_1[0xb] = puVar12;
        param_1[10] = puVar10;
        param_1[0x1a] = (undefined *)0x0;
        param_1[0x19] = (undefined *)0x0;
        param_1[0xe] = (undefined *)0x0;
        param_1[0xd] = (undefined *)0x0;
        param_1[0x14] = (undefined *)0x0;
        param_1[0x13] = (undefined *)0x0;
        param_1[0x10] = (undefined *)0x0;
        param_1[0xf] = (undefined *)0x0;
        param_1[0x12] = (undefined *)0x0;
        param_1[0x11] = (undefined *)0x0;
        param_1[0x16] = (undefined *)0x0;
        param_1[0x15] = (undefined *)0x0;
        param_1[0x18] = (undefined *)0x0;
        param_1[0x17] = (undefined *)0x0;
        param_1[0x1c] = (undefined *)0x0;
        param_1[0x1b] = (undefined *)0x0;
        param_1[0x1e] = (undefined *)0x0;
        param_1[0x1d] = (undefined *)0x0;
        puStack_c8 = param_1[0x23];
        param_1[0x23] = (undefined *)0x0;
LAB_10a533c64:
        uStack_b8 = *(undefined8 *)(puVar7 + 0x10);
        uStack_c0 = *(undefined8 *)(puVar7 + 8);
        lStack_b0 = *(long *)(puVar7 + 0x18);
        puStack_98 = puStack_c8;
      }
      ppuStack_d0 = param_1 + 0x1c;
      pcStack_a8 = FUN_10a4f4228;
      ppuStack_a0 = &PTR_DAT_110be8ea8;
      puStack_c8 = (undefined *)0x0;
      lStack_80 = lStack_b0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      uStack_c0 = 0;
      (**(code **)*puVar11)(puVar11,param_1 + 9,&pcStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      if (puStack_c8 != (undefined *)0x0) {
        func_0x0001092b4274(&puStack_c8);
      }
      if (*(char *)((long)param_1 + 0xf7) < '\0') {
        __ZdlPv(*ppuStack_d0);
      }
      if (*(char *)((long)param_1 + 0xdf) < '\0') {
        __ZdlPv(param_1[0x19]);
      }
      if (*(char *)((long)param_1 + 199) < '\0') {
        __ZdlPv(param_1[0x16]);
      }
      if (*(char *)((long)param_1 + 0xaf) < '\0') {
        __ZdlPv(param_1[0x13]);
      }
      if (*(char *)((long)param_1 + 0x97) < '\0') {
        __ZdlPv(param_1[0x10]);
      }
      if (*(char *)((long)param_1 + 0x7f) < '\0') {
        __ZdlPv(param_1[0xd]);
      }
      if (*(char *)((long)param_1 + 0x67) < '\0') {
        __ZdlPv(param_1[10]);
      }
LAB_10a533d68:
      plVar2 = plVar6 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (param_1[0x23] != (undefined *)0x0) {
      func_0x0001092b4274(param_1 + 0x23);
    }
    if (param_1[0x22] != (undefined *)0x0) {
      func_0x0001092b4274(param_1 + 0x22);
    }
    FUN_10a4f3e88(param_1 + 0x1f,param_1 + 0x21,param_1[0x26] + 0x28);
    param_1[9] = param_1[0x1f];
    plVar6 = (long *)(param_1[0x1f] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(param_1[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x27) = 1;
      puVar10 = param_1[9];
      plVar6 = (long *)(puVar10 + 0x10);
      puVar7 = param_1[3];
      do {
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            pcStack_a8 = (code *)0x0;
            ppuStack_a0 = param_1;
            puStack_98 = puVar7;
            func_0x000109d1b588(puVar10 + 0x18,&pcStack_a8);
            *(undefined8 *)(puVar10 + 0x10) = 0;
            goto LAB_10a533f5c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  puVar7 = param_1[9];
  if (((uint)*(undefined8 *)(param_1[9] + 0x10) >> 5 & 1) == 0) {
    if ((puVar7[0xb0] & 1) == 0) goto LAB_10a533fe0;
    FUN_10a4f3dd0(param_1 + 2,puVar7 + 0x98);
    plVar6 = (long *)param_1[9];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)param_1[0x1f];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)param_1[0x21];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    func_0x000109d1a1d0(param_1 + 2);
    __ZdlPv(param_1);
LAB_10a533f5c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    puVar7 = extraout_x8;
  }
  func_0x0001092af97c(puVar7 + 0x90);
LAB_10a533fe0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a533fe4);
  (*pcVar5)();
}



/* Entry: 10a534224; end: 10a5343e7;  */

void FUN_10a534224(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xf8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      func_0x0001092b4274(param_1 + 0x110);
    }
  }
  else {
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xf8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x108);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a5343e8; end: 10a534663;  */

void FUN_10a5343e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    FUN_10a4f2dfc(param_1 + 0x78,param_1 + 0x48);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x78);
    plVar5 = (long *)(*(long *)(param_1 + 0x78) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      lVar8 = *(long *)(param_1 + 0x68);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x68);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xc0) & 1) != 0) {
      FUN_10a4f2d30(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x68);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
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
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x78);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
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
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      if (*(char *)(param_1 + 0x67) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a534598);
  (*pcVar4)();
}



/* Entry: 10a534664; end: 10a534733;  */

void FUN_10a534664(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x78);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a534734; end: 10a534c93;  */

void FUN_10a534734(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  char cStack_59;
  char cStack_58;
  
  plVar13 = (long *)(param_1 + 0x70);
  lVar12 = param_1 + 0x10;
  lVar9 = *plVar13;
  if (((uint)*(undefined8 *)(*plVar13 + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar9 + 0x90);
LAB_10a534aac:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a534ab0);
    (*pcVar5)();
  }
  if ((*(byte *)(lVar9 + 0xc0) & 1) == 0) goto LAB_10a534aac;
  puVar14 = (undefined8 *)(param_1 + 0x48);
  FUN_10a4f0c8c(puVar14,lVar9 + 0x98);
  plVar6 = (long *)*plVar13;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  ppuVar8 = &PTR_PTR_113302218;
  FUN_10ae079a0(0,&PTR_PTR_113302218);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_113302218);
  puVar7 = puVar14;
  FUN_10a4f0ad8();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x0001092ba100(lVar12);
    goto LAB_10a534a1c;
  }
  puVar2 = (undefined8 *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    func_0x000107c3192c(puVar2,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x50);
    *puVar2 = *puVar14;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x58);
  }
  uVar10 = *(ulong *)(param_1 + 0xb8);
  puVar11 = *(undefined8 **)(param_1 + 0xb0);
  if (-1 < (char)*(byte *)(param_1 + 199)) {
    uVar10 = (ulong)*(byte *)(param_1 + 199);
    puVar11 = puVar2;
  }
  plVar6 = plVar13;
  FUN_10a4f0e48(plVar13,puVar11,uVar10);
  func_0x00010ad031c0();
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 200,*plVar6,plVar6[1]);
  }
  else {
    lVar16 = plVar6[1];
    lVar9 = *plVar6;
    *(long *)(param_1 + 0xd8) = plVar6[2];
    *(long *)(param_1 + 0xd0) = lVar16;
    *(long *)(param_1 + 200) = lVar9;
  }
  func_0x000107c2b054(&uStack_70,&DAT_10f2ecb66);
  (**(code **)(*plVar13 + 0x10))(param_1 + 0xf8,plVar13,&uStack_70);
  if (cStack_59 < '\0') {
    __ZdlPv(CONCAT71(uStack_6f,uStack_70));
  }
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x0001094944b0(auStack_90,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                      (long *)(param_1 + 0x90),1,0);
  plVar6 = *(long **)(param_1 + 0xa8);
  if (plVar6 == (long *)(param_1 + 0x90)) {
    lVar9 = 0x20;
LAB_10a53490c:
    (**(code **)(*plVar6 + lVar9))();
  }
  else if (plVar6 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_10a53490c;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x108);
  puVar15 = (undefined8 *)*puVar11;
  uStack_70 = 0;
  cStack_58 = '\0';
  func_0x00010940674c(auStack_80,plVar13,param_1 + 200,auStack_90,puVar11 + 4,puVar11 + 0x12,
                      &uStack_70);
  FUN_10a4f0b14(*puVar15,auStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar13 = plStack_78 + 1;
    do {
      lVar9 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if ((cStack_58 == '\x01') && (CONCAT71(uStack_6f,uStack_70) != 0)) {
    lStack_68 = CONCAT71(uStack_6f,uStack_70);
    __ZdlPv();
  }
  func_0x000109380ffc(auStack_88,auStack_90[0]);
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
    __ZdlPv();
  }
  plVar13 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  *(undefined ***)(param_1 + 0x70) = &PTR_DAT_110af47c8;
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*puVar2);
  }
LAB_10a534a1c:
  plVar13 = *(long **)(param_1 + 0x68);
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*puVar14);
  }
  if (((ulong)puVar7 & 1) != 0) {
    func_0x0001092ba100(lVar12);
  }
  func_0x000109d1a1d0(lVar12);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a534c94; end: 10a534d03;  */

void FUN_10a534c94(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a534d04; end: 10a534fdf;  */

void FUN_10a534d04(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    FUN_10a4f049c(param_1 + 0x58,param_1 + 0x60);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x58);
    plVar6 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x100) = 1;
      lVar9 = *(long *)(param_1 + 0x48);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a534f1c);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  _free(*(undefined8 *)(param_1 + 0xd8));
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a534fe0; end: 10a53512b;  */

void FUN_10a534fe0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  _free(*(undefined8 *)(param_1 + 0xd8));
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a53512c; end: 10a5352cb;  */

void FUN_10a53512c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x0001092ba100(param_1 + 0x10);
    FUN_10a4f6180(param_1 + 0x48);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a535210);
  (*pcVar4)();
}



/* Entry: 10a5352cc; end: 10a53538b;  */

void FUN_10a5352cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  FUN_10a4f6180(param_1 + 0x48);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a53538c; end: 10a5359eb;  */

void FUN_10a53538c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code **ppcVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  uint5 uStack_a8;
  undefined8 uStack_a0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)(param_1 + 0x70);
  lVar14 = param_1 + 0x10;
  plVar7 = (long *)*plVar13;
  if (((uint)*(undefined8 *)(*plVar13 + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a535858);
    (*pcVar4)();
  }
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar7 = *(long **)(param_1 + 0x88);
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  plVar7 = *(long **)(param_1 + 0x58);
  if (plVar7 == (long *)0x0) {
    lVar15 = 0;
    lVar10 = 0;
  }
  else {
    do {
      lVar10 = *(long *)(param_1 + 0xd0) + 0x88;
      FUN_10a4dd364(lVar10,plVar7 + 2,plVar7 + 5,0);
      if ((lVar10 != 0) && (lVar15 = *(long *)(lVar10 + 0x98), (*(byte *)(lVar15 + 0x150) & 1) != 0)
         ) {
        iVar5 = (int)plVar7 + 0x28;
        FUN_10a4de6a0();
        if (iVar5 == 0) {
          uVar6 = 0x40000000;
        }
        else {
          pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
          lVar15 = param_1 + 200;
          func_0x0001098ac018(lVar15,&UNK_10e4c8f08,0x24,&pcStack_c0,0,1);
          uVar6 = (undefined4)lVar15;
          lVar15 = *(long *)(lVar10 + 0x98);
        }
        uVar16 = *(undefined8 *)(lVar15 + 0x10c);
        pcStack_c0 = (code *)0x47fffffff;
        lStack_b0._0_5_ = 0x100000002;
        uVar12 = (ulong)_uStack_a8 >> 0x28;
        uStack_a8._0_4_ = (uint)_uStack_a8 & 0xffffff00;
        uStack_a8 = (uint5)(uint)uStack_a8;
        _uStack_a8 = CONCAT35((int3)uVar12,uStack_a8);
        lVar15 = param_1 + 200;
        uStack_b8 = (undefined **)uVar16;
        func_0x0001098ac018(lVar15,&UNK_10e4a7ac1,0x23,&pcStack_c0,0,1);
        pcStack_c0 = (code *)0x77fffffff;
        lStack_b0 = CONCAT35(lStack_b0._5_3_,0x100000002);
        uVar12 = (ulong)_uStack_a8 >> 0x28;
        uStack_a8._0_4_ = (uint)_uStack_a8 & 0xffffff00;
        uStack_a8 = (uint5)(uint)uStack_a8;
        _uStack_a8 = CONCAT35((int3)uVar12,uStack_a8);
        lVar8 = param_1 + 200;
        uStack_b8 = (undefined **)uVar16;
        func_0x0001098ac018(lVar8,&UNK_10e4a7ac1,0x23,&pcStack_c0,0,1);
        lVar17 = *(long *)(param_1 + 200);
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        pcStack_c0 = (code *)CONCAT44((int)lVar8,(int)lVar15);
        uStack_b8 = (undefined **)CONCAT44(uStack_b8._4_4_,uVar6);
        FUN_10a26ebc0(param_1 + 0x88,0,&pcStack_c0,(long)&uStack_b8 + 4,3);
        pcStack_c0 = FUN_10a4f68d8;
        uStack_b8 = &PTR_FUN_110be9180;
        lVar17 = lVar17 + 0x18;
        lStack_b0 = lVar10;
        FUN_10a4f6764(lVar17,&pcStack_c0,param_1 + 0x88);
        (*(code *)*uStack_b8)(&uStack_b8);
        if (*(long *)(param_1 + 0x88) != 0) {
          *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
          __ZdlPv();
        }
        plVar9 = *(long **)(param_1 + 0xa8);
        if (plVar9 < *(long **)(param_1 + 0xb0)) {
          if (*(char *)((long)plVar7 + 0x27) < '\0') {
            func_0x000107c3192c(plVar9,plVar7[2],plVar7[3]);
          }
          else {
            lVar15 = plVar7[3];
            lVar10 = plVar7[2];
            plVar9[2] = plVar7[4];
            plVar9[1] = lVar15;
            *plVar9 = lVar10;
          }
          *(int *)(plVar9 + 3) = (int)lVar17;
          plVar9 = plVar9 + 4;
        }
        else {
          plVar9 = (long *)(param_1 + 0xa0);
          FUN_10a4f6c34(plVar9,plVar7 + 2,lVar17);
        }
        *(long **)(param_1 + 0xa8) = plVar9;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    lVar10 = *(long *)(param_1 + 0xa0);
    lVar15 = *(long *)(param_1 + 0xa8);
  }
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  FUN_10a4f6dec(&lStack_f0,lVar10,lVar15,lVar15 - lVar10 >> 5);
  uVar16 = uStack_e0;
  lVar15 = lStack_e8;
  lVar10 = lStack_f0;
  uStack_a0 = *(undefined8 *)(param_1 + 0xb0);
  _uStack_a8 = *(undefined8 *)(param_1 + 0xa8);
  lStack_b0 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(long *)(param_1 + 0x78) = lVar15;
  *(long *)(param_1 + 0x70) = lVar10;
  *(undefined8 *)(param_1 + 0x80) = uVar16;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  pcStack_c0 = FUN_10a4f6f6c;
  uStack_b8 = &PTR_FUN_110be91b8;
  uStack_108 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 200) + 0x18;
  ppcVar11 = &pcStack_c0;
  FUN_10a4f6e60(lVar10,ppcVar11,plVar13);
  (*(code *)*uStack_b8)(&uStack_b8);
  FUN_10a4f70dc(&uStack_108);
  if (*plVar13 != 0) {
    *(long *)(param_1 + 0x78) = *plVar13;
    __ZdlPv();
  }
  **(undefined4 **)(param_1 + 0xd8) = (int)lVar10;
  FUN_10a4f70dc(&uStack_d8);
  func_0x0001092ba100(lVar14);
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  FUN_10a4f70dc(param_1 + 0xa0);
  func_0x00010a22eba0(param_1 + 0x48);
  while( true ) {
    func_0x000109d1a1d0(lVar14);
    plVar7 = *(long **)(param_1 + 0xc0);
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    plVar9 = *(long **)(param_1 + 0xb8);
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    lVar10 = param_1;
    __ZdlPv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
    ___stack_chk_fail();
    if ((int)ppcVar11 == 0) {
      __Unwind_Resume();
      plVar7 = *(long **)(lVar10 + 0x70);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(lVar10 + 0x88);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x00010a22eba0(lVar10 + 0x48);
      func_0x000109d1a1d0(lVar10 + 0x10);
      plVar7 = *(long **)(lVar10 + 0xc0);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      plVar7 = *(long **)(lVar10 + 0xb8);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar10);
      return;
    }
    (*(code *)*uStack_b8)(plVar7 + 1);
    FUN_10a4f70dc(&uStack_108);
    if (*plVar13 != 0) {
      *(long *)(param_1 + 0x78) = *plVar13;
      __ZdlPv();
    }
    FUN_10a4f70dc(&uStack_d8);
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      __ZdlPv();
    }
    FUN_10a4f70dc(param_1 + 0xa0);
    func_0x00010a22eba0(param_1 + 0x48);
    ___cxa_begin_catch(lVar10);
    func_0x000109d1a178(lVar14);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a5359ec; end: 10a535b57;  */

void FUN_10a5359ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x88);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x00010a22eba0(param_1 + 0x48);
  func_0x000109d1a1d0(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 0xc0);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a535b58; end: 10a535bc3;  */

bool FUN_10a535b58(long *param_1,long param_2)

{
  if (param_2 != 0xc) {
    return false;
  }
  if (*param_1 != 0x7463617274736241 || (int)param_1[1] != 0x61746144) {
    return *param_1 == 0x624f747069726353 && (int)param_1[1] == 0x7463656a;
  }
  return true;
}



/* Entry: 10a535bc4; end: 10a535c27;  */

void FUN_10a535bc4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_50 = 0xffffffff00000002;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f65e59d;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10a535c28(param_1,&uStack_58);
  FUN_10a53f558();
  return;
}



/* Entry: 10a535c28; end: 10a535cff;  */

/* WARNING: Removing unreachable block (ram,0x00010a535cc0) */

undefined1  [16] FUN_10a535c28(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f65fc4a,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a53f45c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a535d00; end: 10a535e73;  */

undefined8 * FUN_10a535d00(undefined8 *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_DAT_110bef7a0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  lVar3 = *(long *)(param_2 + 0x100);
  param_1[3] = *(undefined8 *)(lVar3 + 0x1d8);
  lVar3 = *(long *)(lVar3 + 0x268);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar3 + 0x70) + 0x10) & 1) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x70) + 0x40);
    puVar4 = (undefined8 *)(*(ulong *)(lVar3 + 0x10) & 0xfffffffffffffffc);
    cVar1 = *(char *)((long)puVar4 + 0x17);
    if (cVar1 < '\0') {
      if (puVar4[1] != 0) goto LAB_10a535d80;
    }
    else if (cVar1 != '\0') {
LAB_10a535d80:
      puVar5 = (undefined8 *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
      uVar6 = (ulong)*(char *)((long)puVar5 + 0x17);
      uVar2 = uVar6;
      if ((long)uVar6 < 0) {
        uVar2 = puVar5[1];
      }
      if (uVar2 != 0) {
        if (cVar1 < '\0') {
          func_0x000107c3192c(&uStack_60,*puVar4,puVar4[1]);
          puVar5 = (undefined8 *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
          uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
        }
        else {
          uStack_58 = puVar4[1];
          uStack_60 = *puVar4;
          lStack_50 = puVar4[2];
        }
        if (((uint)uVar6 >> 7 & 1) == 0) {
          uStack_40 = puVar5[1];
          uStack_48 = *puVar5;
          lStack_38 = puVar5[2];
        }
        else {
          func_0x000107c3192c(&uStack_48,*puVar5,puVar5[1]);
        }
        goto LAB_10a535dc0;
      }
    }
  }
  uStack_48 = 0;
  lStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
LAB_10a535dc0:
  FUN_10a535e74(param_1 + 4,&uStack_60);
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return param_1;
}



/* Entry: 10a535e74; end: 10a536027;  */

undefined8 * FUN_10a535e74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    *(undefined1 *)((long)param_2 + 0x2f) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  else {
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
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 10a536028; end: 10a536053;  */

void FUN_10a536028(void)

{
  return;
}



/* Entry: 10a536054; end: 10a536137;  */

undefined8 * FUN_10a536054(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_31;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110bef7f0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_3 + 2) == '\x01') {
    lVar4 = param_3[1];
    uVar5 = *param_3;
    param_1[4] = param_3[1];
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
    *(undefined1 *)(param_1 + 5) = 1;
  }
  FUN_10a05a5d4(param_1 + 6,&uStack_31);
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x10] = 0x32aaaba7;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  return param_1;
}



/* Entry: 10a536138; end: 10a53653b;  */

void FUN_10a536138(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long lVar8;
  long unaff_x24;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_180;
  ulong uStack_178;
  code **ppcStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  if ((char)param_1[0x18] != '\x03') {
    __ZNSt3__15mutex4lockEv(param_1 + 0x10);
    cVar2 = (char)param_1[0x18];
    if (cVar2 != '\x01' && cVar2 != '\x03') {
      if (cVar2 != '\x02') {
        *(undefined1 *)(param_1 + 0x18) = 1;
        __ZNSt3__15mutex6unlockEv(param_1 + 0x10);
        FUN_10a3bf120(&plStack_138);
        lVar8 = *(long *)(param_1[1] + 0x100);
        FUN_10a5366ac(&uStack_160,param_1[6],param_1);
        unaff_x20 = (long *)0x138;
        __Znwm();
        plStack_a8 = plStack_138;
        unaff_x24 = lVar8 + 0x208;
        unaff_x23 = unaff_x20 + 1;
        *unaff_x23 = 0;
        unaff_x20[2] = 0;
        *unaff_x20 = (long)&PTR_FUN_110b9f3b0;
        plVar5 = unaff_x20 + 3;
        plStack_138 = (long *)0x0;
        plStack_a0 = plStack_130;
        (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
        uStack_60 = uStack_f0;
        uStack_178 = *(ulong *)(lVar8 + 0x210);
        lStack_180 = *(long *)(lVar8 + 0x208);
        if (-1 < (char)*(byte *)(lVar8 + 0x21f)) {
          uStack_178 = (ulong)*(byte *)(lVar8 + 0x21f);
          lStack_180 = unaff_x24;
        }
        ppcStack_170 = &pcStack_e8;
        pcStack_e8 = FUN_10a53f6f8;
        ppuStack_e0 = &PTR_DAT_110bf00b0;
        uStack_d8 = uStack_160;
        uStack_c8 = uStack_150;
        uStack_d0 = uStack_158;
        uStack_158 = 0;
        uStack_150 = 0;
        FUN_10a23708c(plVar5,&UNK_10f65fc57,0x23,&UNK_10f647b45,3,&plStack_a8,0);
        (*(code *)*ppuStack_e0)(&ppuStack_e0);
        FUN_10a042634(&plStack_a8);
        plStack_148 = plVar5;
        plStack_140 = unaff_x20;
        FUN_10a536754(&uStack_160);
        FUN_10a042634(&plStack_138);
        unaff_x22 = *(long **)(*(long *)(param_1[1] + 0x100) + 0x1c8);
        (**(code **)(*unaff_x22 + 0x60))();
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        plVar6 = (long *)unaff_x22[1];
        if (((plVar6 == (long *)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar6, plVar6 == (long *)0x0))
           || (plVar6 = (long *)*unaff_x22, plStack_a8 = plVar6, plVar6 == (long *)0x0)) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            plVar6 = (long *)0x0;
            func_0x00010ae06f08(0,1,&UNK_10f65e59e,&UNK_10f65e5e0,0x81,&UNK_10f65e62f);
          }
        }
        else {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar3) {
              *unaff_x23 = *unaff_x23 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plStack_138 = plVar5;
          plStack_130 = unaff_x20;
          (**(code **)*plVar6)(plVar6,&plStack_138);
          unaff_x20 = plStack_130;
          if (plStack_130 != (long *)0x0) {
            plVar5 = plStack_130 + 1;
            do {
              lVar8 = *plVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_130 + 0x10))(plStack_130);
              plVar6 = unaff_x20;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          if ((char)param_1[5] == '\x01') {
            pcStack_e8 = (code *)CONCAT71(pcStack_e8._1_7_,1);
            plVar6 = (long *)(param_1[3] + 0x38);
            func_0x00010a54138c(plVar6,&pcStack_e8);
            if (plVar6 == (long *)0x0) {
              if ((*(byte *)(param_1 + 5) & 1) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5364a0);
                (*pcVar4)();
              }
              plVar6 = (long *)param_1[3];
              FUN_10a5367d4(plVar6,1);
            }
          }
        }
        plVar5 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          plVar1 = plStack_a0 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar5;
          }
        }
        unaff_x19 = plStack_140;
        if (plStack_140 != (long *)0x0) {
          plVar5 = plStack_140 + 1;
          do {
            lVar8 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_140 + 0x10))(plStack_140);
            plVar6 = unaff_x19;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        goto LAB_10a536194;
      }
      FUN_10a53653c();
      if ((int)plVar6 != 0) {
        *(undefined1 *)(param_1 + 0x18) = 3;
      }
    }
    plVar6 = param_1 + 0x10;
    __ZNSt3__15mutex6unlockEv();
    unaff_x19 = param_1;
  }
LAB_10a536194:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_138);
  func_0x00010a05a8c4(&plStack_a8);
  FUN_10a05bd88(&plStack_148);
  plVar5 = plVar6;
  __Unwind_Resume();
  pcStack_188 = FUN_10a53653c;
  if ((char)plVar5[5] == '\x01') {
    plStack_1e0 = (long *)CONCAT71(plStack_1e0._1_7_,1);
    lVar8 = plVar5[3] + 0x38;
    lStack_1c0 = unaff_x24;
    plStack_1b8 = unaff_x23;
    plStack_1b0 = unaff_x22;
    plStack_1a8 = plVar6;
    plStack_1a0 = unaff_x20;
    plStack_198 = unaff_x19;
    puStack_190 = &stack0xfffffffffffffff0;
    func_0x00010a54138c(lVar8,&plStack_1e0);
    if (lVar8 != 0) {
      if ((*(byte *)(plVar5 + 5) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a536690);
        (*pcVar4)();
      }
      plVar6 = (long *)plVar5[3];
      FUN_10a537110(plVar6,1);
      plStack_1d8 = (long *)0x0;
      uStack_1d0 = 0;
      plStack_1e0 = (long *)0x0;
      FUN_10a26a074(&plStack_1e0,*plVar6,plVar6[1],plVar6[1] - *plVar6 >> 4);
      plVar1 = plStack_1d8;
      for (plVar6 = plStack_1e0; plVar6 != plVar1; plVar6 = plVar6 + 2) {
        plVar7 = plVar5 + 0xb;
        FUN_10a53f614(plVar7,*plVar6 + 0x18);
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar6;
          lVar8 = plVar7[5];
          func_0x00010a04a7fc(lVar8 + 8,lVar9 + 8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar8 + 0x18,lVar9 + 0x18);
          FUN_10a29ffd8(lVar8 + 0x30,lVar9 + 0x30);
          func_0x00010a1cca60(lVar8 + 0x78,lVar9 + 0x78);
          *(undefined1 *)(lVar8 + 0x98) = *(undefined1 *)(lVar9 + 0x98);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar8 + 0xa0,lVar9 + 0xa0);
          func_0x00010a1cca60(lVar8 + 0xb8,lVar9 + 0xb8);
          uVar11 = *(undefined8 *)(lVar9 + 0xe0);
          uVar10 = *(undefined8 *)(lVar9 + 0xd8);
          *(undefined1 *)(lVar8 + 0xe8) = *(undefined1 *)(lVar9 + 0xe8);
          *(undefined8 *)(lVar8 + 0xe0) = uVar11;
          *(undefined8 *)(lVar8 + 0xd8) = uVar10;
          *(undefined2 *)(lVar8 + 0xec) = *(undefined2 *)(lVar9 + 0xec);
          uVar11 = *(undefined8 *)(lVar9 + 0xf8);
          uVar10 = *(undefined8 *)(lVar9 + 0xf0);
          uVar13 = *(undefined8 *)(lVar9 + 0x108);
          uVar12 = *(undefined8 *)(lVar9 + 0x100);
          uVar14 = *(undefined8 *)(lVar9 + 0x109);
          *(undefined8 *)(lVar8 + 0x111) = *(undefined8 *)(lVar9 + 0x111);
          *(undefined8 *)(lVar8 + 0x109) = uVar14;
          *(undefined8 *)(lVar8 + 0xf8) = uVar11;
          *(undefined8 *)(lVar8 + 0xf0) = uVar10;
          *(undefined8 *)(lVar8 + 0x108) = uVar13;
          *(undefined8 *)(lVar8 + 0x100) = uVar12;
        }
      }
      puStack_1c8 = (undefined1 *)&plStack_1e0;
      FUN_10a26a1e8(&puStack_1c8);
    }
  }
  return;
}



/* Entry: 10a53653c; end: 10a5366ab;  */

void FUN_10a53653c(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plStack_60 = (long *)CONCAT71(plStack_60._1_7_,1);
    lVar4 = *(long *)(param_1 + 0x18) + 0x38;
    func_0x00010a54138c(lVar4,&plStack_60);
    if (lVar4 != 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a536690);
        (*pcVar2)();
      }
      plVar3 = *(long **)(param_1 + 0x18);
      FUN_10a537110(plVar3,1);
      plStack_58 = (long *)0x0;
      uStack_50 = 0;
      plStack_60 = (long *)0x0;
      FUN_10a26a074(&plStack_60,*plVar3,plVar3[1],plVar3[1] - *plVar3 >> 4);
      plVar1 = plStack_58;
      for (plVar3 = plStack_60; plVar3 != plVar1; plVar3 = plVar3 + 2) {
        lVar4 = param_1 + 0x58;
        FUN_10a53f614(lVar4,*plVar3 + 0x18);
        if (lVar4 != 0) {
          lVar5 = *plVar3;
          lVar4 = *(long *)(lVar4 + 0x28);
          func_0x00010a04a7fc(lVar4 + 8,lVar5 + 8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar4 + 0x18,lVar5 + 0x18);
          FUN_10a29ffd8(lVar4 + 0x30,lVar5 + 0x30);
          func_0x00010a1cca60(lVar4 + 0x78,lVar5 + 0x78);
          *(undefined1 *)(lVar4 + 0x98) = *(undefined1 *)(lVar5 + 0x98);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar4 + 0xa0,lVar5 + 0xa0);
          func_0x00010a1cca60(lVar4 + 0xb8,lVar5 + 0xb8);
          uVar7 = *(undefined8 *)(lVar5 + 0xe0);
          uVar6 = *(undefined8 *)(lVar5 + 0xd8);
          *(undefined1 *)(lVar4 + 0xe8) = *(undefined1 *)(lVar5 + 0xe8);
          *(undefined8 *)(lVar4 + 0xe0) = uVar7;
          *(undefined8 *)(lVar4 + 0xd8) = uVar6;
          *(undefined2 *)(lVar4 + 0xec) = *(undefined2 *)(lVar5 + 0xec);
          uVar7 = *(undefined8 *)(lVar5 + 0xf8);
          uVar6 = *(undefined8 *)(lVar5 + 0xf0);
          uVar9 = *(undefined8 *)(lVar5 + 0x108);
          uVar8 = *(undefined8 *)(lVar5 + 0x100);
          uVar10 = *(undefined8 *)(lVar5 + 0x109);
          *(undefined8 *)(lVar4 + 0x111) = *(undefined8 *)(lVar5 + 0x111);
          *(undefined8 *)(lVar4 + 0x109) = uVar10;
          *(undefined8 *)(lVar4 + 0xf8) = uVar7;
          *(undefined8 *)(lVar4 + 0xf0) = uVar6;
          *(undefined8 *)(lVar4 + 0x108) = uVar9;
          *(undefined8 *)(lVar4 + 0x100) = uVar8;
        }
      }
      puStack_48 = (undefined1 *)&plStack_60;
      FUN_10a26a1e8(&puStack_48);
    }
  }
  return;
}



/* Entry: 10a5366ac; end: 10a536753;  */

void FUN_10a5366ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110beff18;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a536754; end: 10a5367d3;  */

undefined8 * FUN_10a536754(undefined8 *param_1)

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
        FUN_10a05c0fc(param_1[1],*param_1);
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



/* Entry: 10a5367d4; end: 10a53710f;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c04) */

void FUN_10a5367d4(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 in_x7;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  undefined *puVar20;
  ulong unaff_x22;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x98);
  lVar9 = param_1 + 0x70;
  FUN_10a5412e8(lVar9,param_2);
  if (lVar9 == 0) {
    uVar22 = param_2 & 0xffffffff;
    uVar23 = *(ulong *)(param_1 + 0x78);
    uVar19 = (uint)param_2;
    if (uVar23 != 0) {
      uVar13 = uVar23 - 1;
      if ((uVar23 & uVar13) == 0) {
        unaff_x22 = (uint)uVar23 - 1 & uVar22;
      }
      else {
        unaff_x22 = uVar22;
        if (uVar23 <= uVar22) {
          uVar1 = (uint)uVar23 & 0xff;
          uVar4 = 0;
          if ((uVar23 & 0xff) != 0) {
            uVar4 = uVar19 / uVar1;
          }
          unaff_x22 = (ulong)(uVar19 - uVar4 * uVar1);
        }
      }
      plVar15 = *(long **)(*(long *)(param_1 + 0x70) + unaff_x22 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_10a5368f8;
            uVar16 = plVar15[1];
            if (uVar16 != uVar22) break;
            if (*(byte *)(plVar15 + 2) == uVar19) goto LAB_10a536b80;
          }
          if ((uVar23 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar23 <= uVar16) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar16 / uVar23;
            }
            uVar16 = uVar16 - uVar14 * uVar23;
          }
        } while (uVar16 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar15 = (long *)0x18;
    __Znwm();
    *plVar15 = 0;
    plVar15[1] = uVar22;
    *(char *)(plVar15 + 2) = (char)param_2;
    fVar25 = (float)(*(long *)(param_1 + 0x88) + 1);
    if ((uVar23 != 0) && (fVar25 <= *(float *)(param_1 + 0x90) * (float)uVar23)) {
LAB_10a536b0c:
      lVar9 = *(long *)(param_1 + 0x70);
      plVar10 = *(long **)(lVar9 + unaff_x22 * 8);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(param_1 + 0x80);
        *plVar15 = *plVar10;
        *plVar10 = (long)plVar15;
        *(long **)(lVar9 + unaff_x22 * 8) = plVar10;
        if (*plVar15 != 0) {
          uVar13 = *(ulong *)(*plVar15 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar10 = (long *)(*(long *)(param_1 + 0x70) + uVar13 * 8);
          goto LAB_10a536b70;
        }
      }
      else {
        *plVar15 = *plVar10;
LAB_10a536b70:
        *plVar10 = (long)plVar15;
      }
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
LAB_10a536b80:
      __ZNSt3__15mutex6unlockEv(param_1 + 0x98);
      ppuVar7 = &PTR___tlv_bootstrap_11340de28;
      (*(code *)PTR___tlv_bootstrap_11340de28)();
      uStack_118 = 0;
      if (*ppuVar7 != (undefined *)0x0) {
        plVar15 = *(long **)(*ppuVar7 + 0x10);
        if (plVar15 == (long *)0x0) {
          uStack_118 = 0;
        }
        else {
          puVar8 = (undefined8 *)0x20;
          __Znwm();
          auStack_b0[0] = 0x8000000000000020;
          plStack_b8 = (long *)0x1b;
          *(undefined8 *)((long)puVar8 + 0x13) = 0x54494d494c5f544e;
          *(undefined8 *)((long)puVar8 + 0xb) = 0x554f435f444e4549;
          puVar8[1] = 0x5f444e454952465f;
          *puVar8 = 0x45524f43534e454c;
          *(undefined1 *)((long)puVar8 + 0x1b) = 0;
          puStack_c0 = puVar8;
          (**(code **)(*plVar15 + 0x40))(plVar15,&puStack_c0,0);
          uStack_118 = (long)plVar15 << 0x20;
        }
      }
      lVar9 = *(long *)(param_1 + 0x20);
      uStack_120 = *(undefined8 *)(param_1 + 0x20);
      uStack_128 = *(undefined8 *)(param_1 + 0x18);
      if (lVar9 != 0) {
        plVar15 = (long *)(lVar9 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_140 = FUN_10a5414ec;
      ppuStack_138 = &PTR_FUN_110bf0118;
      uStack_118 = uStack_118 | uVar22;
      lStack_130 = param_1;
      if (lVar9 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) {
          puVar20 = &UNK_10e4c9541;
          uVar21 = 0x31;
        }
        else {
          if (uVar19 != 1) {
LAB_10a536fe0:
            __ZNSt3__19to_stringEi(&puStack_190,param_2);
            FUN_109feb280(&puStack_c0,&UNK_10f6600db,&puStack_190);
            FUN_10a0029c0(&puStack_c0);
            goto LAB_10a537008;
          }
          puVar20 = &UNK_10e4c94cb;
          uVar21 = 0x24;
        }
      }
      else if (uVar19 == 4) {
        puVar20 = &UNK_10e4c9573;
        uVar21 = 0x32;
      }
      else if (uVar19 == 3) {
        puVar20 = &UNK_10e4c9516;
        uVar21 = 0x2a;
      }
      else {
        if (uVar19 != 2) goto LAB_10a536fe0;
        puVar20 = &UNK_10e4c94f0;
        uVar21 = 0x25;
      }
      FUN_10a3bf120(&puStack_190);
      lVar24 = *(long *)(*(long *)(param_1 + 8) + 0x100);
      FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(param_1 + 0x28),&pcStack_140);
      plVar10 = (long *)0x138;
      __Znwm();
      puStack_c0 = puStack_190;
      plVar17 = plVar10 + 1;
      *plVar17 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110b9f3b0;
      plVar15 = plVar10 + 3;
      puStack_190 = (undefined8 *)0x0;
      plStack_b8 = (long *)uStack_188;
      (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
      uStack_78 = uStack_148;
      uVar23 = *(ulong *)(lVar24 + 0x210);
      lVar9 = *(long *)(lVar24 + 0x208);
      if (-1 < (char)*(byte *)(lVar24 + 0x21f)) {
        uVar23 = (ulong)*(byte *)(lVar24 + 0x21f);
        lVar9 = lVar24 + 0x208;
      }
      uStack_100 = 0x10a05c39c;
      ppuStack_f8 = &PTR_FUN_110b9f370;
      uStack_f0 = uStack_1b8;
      uStack_e0 = uStack_1a8;
      uStack_e8 = uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      FUN_10a23708c(plVar15,puVar20,uVar21,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar9,uVar23,
                    &uStack_100);
      (*(code *)*ppuStack_f8)(&ppuStack_f8);
      FUN_10a042634(&puStack_c0);
      plStack_1a0 = plVar15;
      plStack_198 = plVar10;
      func_0x00010a05c07c(&uStack_1b8);
      FUN_10a042634(&puStack_190);
      plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x100) + 0x1c8);
      (**(code **)(*plVar11 + 0x60))();
      puStack_c0 = (undefined8 *)0x0;
      plStack_b8 = (long *)0x0;
      plVar12 = (long *)plVar11[1];
      if (((plVar12 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar12, plVar12 == (long *)0x0))
         || (puStack_c0 = (undefined8 *)*plVar11, puStack_c0 == (undefined8 *)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
        }
      }
      else {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_1c8 = plVar15;
        plStack_1c0 = plVar10;
        (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
        plVar15 = plStack_1c0;
        if (plStack_1c0 != (long *)0x0) {
          plVar10 = plStack_1c0 + 1;
          do {
            lVar9 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
      }
      plVar15 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar10 = plStack_b8 + 1;
        do {
          lVar9 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      plVar15 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar10 = plStack_198 + 1;
        do {
          lVar9 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      (*(code *)*ppuStack_138)(&ppuStack_138);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      goto LAB_10a536fd4;
    }
    uVar13 = 1;
    if (2 < uVar23) {
      uVar13 = (ulong)((uVar23 & uVar23 - 1) != 0);
    }
    uVar13 = uVar13 | uVar23 << 1;
    uVar16 = (ulong)(fVar25 / *(float *)(param_1 + 0x90));
    if (uVar13 <= uVar16) {
      uVar13 = uVar16;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar23 = *(ulong *)(param_1 + 0x78);
    }
    if (uVar13 <= uVar23) {
      if (uVar13 < uVar23) {
        uVar16 = (ulong)((float)*(ulong *)(param_1 + 0x88) / *(float *)(param_1 + 0x90));
        if ((uVar23 < 3) || ((uVar23 & uVar23 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar16) {
          uVar16 = 1L << (-LZCOUNT(uVar16 - 1) & 0x3fU);
        }
        if (uVar13 <= uVar16) {
          uVar13 = uVar16;
        }
        if (uVar13 < uVar23) {
          if (uVar13 != 0) goto LAB_10a536990;
          lVar9 = *(long *)(param_1 + 0x70);
          *(undefined8 *)(param_1 + 0x70) = 0;
          if (lVar9 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x78) = 0;
          uVar23 = 0;
        }
        else {
          uVar23 = *(ulong *)(param_1 + 0x78);
        }
      }
LAB_10a536adc:
      if ((uVar23 & uVar23 - 1) == 0) {
        unaff_x22 = (int)uVar23 - 1 & uVar22;
      }
      else {
        unaff_x22 = uVar22;
        if (uVar23 <= uVar22) {
          uVar13 = 0;
          if (uVar23 != 0) {
            uVar13 = uVar22 / uVar23;
          }
          unaff_x22 = uVar22 - uVar13 * uVar23;
        }
      }
      goto LAB_10a536b0c;
    }
LAB_10a536990:
    if (uVar13 >> 0x3d == 0) {
      lVar9 = uVar13 << 3;
      __Znwm();
      lVar24 = *(long *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar9;
      if (lVar24 != 0) {
        __ZdlPv();
      }
      uVar23 = 0;
      *(ulong *)(param_1 + 0x78) = uVar13;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar23 * 8) = 0;
        uVar23 = uVar23 + 1;
      } while (uVar13 != uVar23);
      plVar10 = *(long **)(param_1 + 0x80);
      uVar23 = uVar13;
      if (plVar10 != (long *)0x0) {
        uVar16 = plVar10[1];
        uVar14 = uVar13 - 1;
        if ((uVar13 & uVar14) == 0) {
          uVar16 = uVar16 & uVar14;
        }
        else if (uVar13 <= uVar16) {
          uVar18 = 0;
          if (uVar13 != 0) {
            uVar18 = uVar16 / uVar13;
          }
          uVar16 = uVar16 - uVar18 * uVar13;
        }
        *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar16 * 8) = (undefined8 *)(param_1 + 0x80);
        plVar17 = (long *)*plVar10;
        while (plVar17 != (long *)0x0) {
          uVar18 = plVar17[1];
          if ((uVar13 & uVar14) == 0) {
            uVar18 = uVar18 & uVar14;
          }
          else if (uVar13 <= uVar18) {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar5 * uVar13;
          }
          plVar11 = plVar17;
          if (uVar18 != uVar16) {
            lVar9 = *(long *)(param_1 + 0x70);
            if (*(long *)(lVar9 + uVar18 * 8) == 0) {
              *(long **)(lVar9 + uVar18 * 8) = plVar10;
              uVar16 = uVar18;
            }
            else {
              *plVar10 = *plVar17;
              *plVar17 = **(undefined8 **)(lVar9 + uVar18 * 8);
              **(long **)(lVar9 + uVar18 * 8) = (long)plVar17;
              plVar11 = plVar10;
            }
          }
          plVar10 = plVar11;
          plVar17 = (long *)*plVar11;
        }
      }
      goto LAB_10a536adc;
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x98);
      return;
    }
LAB_10a536fd4:
    ___stack_chk_fail();
  }
  func_0x000109ffded8();
LAB_10a537008:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a537110; end: 10a53714b;  */

undefined1  [16] FUN_10a537110(long param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uStack_11;
  
  param_1 = param_1 + 0x38;
  puVar1 = &uStack_11;
  uStack_11 = param_2;
  func_0x00010a54138c(param_1,puVar1);
  if (param_1 != 0) {
    auVar2._8_8_ = puVar1;
    auVar2._0_8_ = param_1 + 0x18;
    return auVar2;
  }
  FUN_10a00946c(&UNK_10f65ea67);
  auVar3._8_8_ = 0x10;
  auVar3._0_8_ = &UNK_10f65fc7b;
  return auVar3;
}



/* Entry: 10a53714c; end: 10a5371df;  */

undefined1  [16] FUN_10a53714c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f65fc7b;
  return auVar1;
}



/* Entry: 10a5371e0; end: 10a537287;  */

void FUN_10a5371e0(undefined8 param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  puStack_80 = (undefined1 *)0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a537288(param_1,&puStack_88);
  puStack_90 = &UNK_10f65e6d5;
  puStack_88 = &UNK_10f65e6c0;
  uStack_78 = 1;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x800000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_80 = (undefined1 *)&puStack_90;
  FUN_10a540a44();
  FUN_10a540c08(param_1);
  return;
}



/* Entry: 10a537288; end: 10a53735f;  */

/* WARNING: Removing unreachable block (ram,0x00010a537320) */

undefined1  [16] FUN_10a537288(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f65fc7b,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a540948(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a537360; end: 10a5375b7;  */

undefined8 * FUN_10a537360(undefined8 *param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_110bef840;
  param_1[1] = param_2;
  param_1[3] = &PTR_DAT_110bef8a0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bbaa38;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[3] = &PTR_FUN_110bbaa88;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[0xb] = FUN_10a296ae4;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[9] = puVar1 + 3;
  param_1[10] = puVar1;
  lVar2 = *(long *)(*(long *)(param_2 + 0x100) + 0x268);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x10) >> 5 & 1) != 0)) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x88) + 0x10);
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    param_1[6] = lVar2 / 1000;
    FUN_10a0ee900(auStack_58,&UNK_10f65fc8c,0x432);
    uVar3 = *(undefined8 *)(param_2 + 0x870);
    func_0x000107c2b054(auStack_70,&UNK_10f65e59d);
    FUN_10a462990(uVar3,auStack_58,auStack_70,0,0);
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return param_1;
}



/* Entry: 10a5375b8; end: 10a53769b;  */

undefined8 * FUN_10a5375b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef840;
  param_1[3] = &PTR_DAT_110bef8a0;
  func_0x00010a296810(param_1 + 9);
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  return param_1;
}



/* Entry: 10a53769c; end: 10a5376af;  */

void FUN_10a53769c(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_110bef840;
  *param_1 = &PTR_DAT_110bef8a0;
  func_0x00010a296810(param_1 + 6);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10a5376b0; end: 10a537797;  */

long FUN_10a5376b0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    return (*(long *)(param_1 + 0x30) / 1000 +
           (long)(int)*(double *)(*(long *)(*(long *)(param_1 + 8) + 0x850) + 8)) * 1000;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 / 1000;
}



/* Entry: 10a537798; end: 10a5377ef;  */

undefined1  [16] FUN_10a537798(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &DAT_10f65c95b;
  return auVar1;
}



/* Entry: 10a5377f0; end: 10a537ad3;  */

void FUN_10a5377f0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f65c95b,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befd18;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befd18;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf0328;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a537ab4;
    FUN_10a054dac(param_1,&UNK_10f65e827,FUN_10a540cc4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a537ab4;
    FUN_10a054dac(param_1,&UNK_10f65e83f,FUN_10a540de8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a537ab4;
    FUN_10a054dac(param_1,&UNK_10f65e84f,FUN_10a540ec0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65e861,FUN_10a540f9c,FUN_10a541058);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f65c95b,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a537ab4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a537ab8);
  (*pcVar6)();
}



/* Entry: 10a537ad4; end: 10a537b7b;  */

undefined8 * FUN_10a537ad4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110bef8f8;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0x3f800000;
  *puVar1 = &PTR_DAT_110c6fcf0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1[6] = 0;
  puVar1[5] = 0x3f800000;
  *(undefined1 *)((long)puVar1 + 0x3c) = 0;
  param_1[3] = puVar1;
  return param_1;
}



/* Entry: 10a537b7c; end: 10a537c23;  */

undefined8 * FUN_10a537b7c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110bef950;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_10a5411c0(auStack_38,&uStack_21);
  FUN_10a537c24(param_1 + 3,auStack_38);
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
  return param_1;
}



/* Entry: 10a537c24; end: 10a537ce7;  */

undefined8 * FUN_10a537c24(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a537ce8; end: 10a537d7f;  */

void FUN_10a537ce8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c2b054(auStack_48,&UNK_10f65e870);
  if (lVar2 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return;
}



/* Entry: 10a537d80; end: 10a537d93;  */

void FUN_10a537d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a537d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x18) + 0x18))();
  return;
}



/* Entry: 10a537d94; end: 10a537e7b;  */

void FUN_10a537d94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar4 = *(long *)(param_2 + 8);
  func_0x000107c2b054(auStack_48,&UNK_10f65e88d);
  if (lVar4 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar4 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f65e8ab,&UNK_10f65e8ec,0x1a,&UNK_10f65e953);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
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
  }
  return;
}



/* Entry: 10a537e7c; end: 10a537f3f;  */

undefined8 * FUN_10a537e7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_110bef9a0;
  param_1[1] = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *(undefined1 *)(puVar1 + 3) = 1;
  param_1[3] = puVar1 + 3;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e6c08;
  puVar1[1] = 0;
  param_1[4] = puVar1;
  FUN_10a05a5d4(param_1 + 5,&uStack_21);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x13] = 0x32aaaba7;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



/* Entry: 10a537f40; end: 10a537f4b;  */

void FUN_10a537f40(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10a537f4c; end: 10a53803b;  */

void FUN_10a537f4c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_10a537110();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a53803c(param_1,param_2[1] - *param_2 >> 4);
  plVar2 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar2; param_2 = param_2 + 2) {
    lVar6 = *param_2;
    FUN_10a541430(auStack_48,&uStack_31,lVar6 + 0x18,lVar6 + 0x30,lVar6 + 0x78);
    func_0x00010a5380d4(param_1,auStack_48);
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a53803c; end: 10a5381b7;  */

undefined1  [16] FUN_10a53803c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lStack_f8;
  long *plStack_f0;
  undefined1 auStack_e1 [9];
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar8 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar8 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a29b7a8();
      uStack_68 = 0x10a5380d4;
      ppuStack_d0 = &puStack_70;
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        uVar15 = *param_2;
        puVar14 = puVar3 + 2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar15;
        *param_2 = 0;
        param_2[1] = 0;
        plVar12 = param_1;
      }
      else {
        lVar8 = (long)puVar3 - *param_1;
        uVar1 = (lVar8 >> 4) + 1;
        puStack_70 = &stack0xfffffffffffffff0;
        if (uVar1 >> 0x3c != 0) {
          plVar12 = param_1;
          FUN_10a29b7a8();
          pcStack_c8 = FUN_10a5381b8;
          lStack_f8 = plVar12[0xc];
          auStack_e1._1_8_ = param_2;
          plStack_d8 = param_1;
          if (lStack_f8 != 0) {
            plVar12 = (long *)plVar12[0xd];
            if (plVar12 != (long *)0x0) {
              plVar6 = plVar12 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar5) {
                  *plVar6 = *plVar6 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar6 = (long *)auStack_e1;
            lVar8 = lStack_f8 + 0x18;
            plStack_f0 = plVar12;
            FUN_10a541430(plVar6,lVar8,lStack_f8 + 0x30,lStack_f8 + 0x78);
            if (plVar12 != (long *)0x0) {
              plVar2 = plVar12 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                plVar6 = plVar12;
              }
            }
            auVar18._8_8_ = lVar8;
            auVar18._0_8_ = plVar6;
            return auVar18;
          }
          puVar7 = &UNK_10f65eabf;
          FUN_10a00946c(&UNK_10f65eabf);
          func_0x00010a26a190(&lStack_f8);
          __Unwind_Resume(puVar7);
          auVar19._8_8_ = 7;
          auVar19._0_8_ = &DAT_10f65c979;
          return auVar19;
        }
        uVar9 = param_1[2] - *param_1;
        uVar11 = (long)uVar9 >> 3;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar11 = 0xfffffffffffffff;
        }
        plVar12 = param_1;
        plStack_98 = param_1;
        FUN_10a29b7bc();
        puVar3 = (undefined8 *)((long)plVar12 + lVar8);
        uVar15 = *param_2;
        puVar14 = puVar3 + 2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar15;
        *param_2 = 0;
        param_2[1] = 0;
        param_2 = (undefined8 *)*param_1;
        lVar8 = (long)puVar3 - (param_1[1] - (long)param_2);
        _memcpy(lVar8);
        lStack_b8 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)puVar14;
        lStack_a0 = param_1[2];
        param_1[2] = (long)(plVar12 + uVar11 * 2);
        plVar12 = &lStack_b8;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        FUN_10a53f0b4(plVar12);
      }
      param_1[1] = (long)puVar14;
      auVar17._8_8_ = param_2;
      auVar17._0_8_ = plVar12;
      return auVar17;
    }
    lVar10 = param_1[1];
    plVar12 = param_1;
    plStack_38 = param_1;
    FUN_10a29b7bc();
    lVar8 = (long)plVar12 + (lVar10 - lVar8);
    lVar10 = (long)param_2 * 2;
    param_2 = (undefined8 *)*param_1;
    lVar13 = lVar8 - (param_1[1] - (long)param_2);
    _memcpy(lVar13);
    lStack_58 = *param_1;
    *param_1 = lVar13;
    param_1[1] = lVar8;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar12 + lVar10);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a53f0b4(param_1);
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 10a5381b8; end: 10a538267;  */

undefined1  [16] FUN_10a5381b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_38;
  long *plStack_30;
  
  lStack_38 = *(long *)(param_1 + 0x60);
  if (lStack_38 != 0) {
    plVar8 = *(long **)(param_1 + 0x68);
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = (long *)&stack0xffffffffffffffdf;
    lVar6 = lStack_38 + 0x18;
    plStack_30 = plVar8;
    FUN_10a541430(plVar4,lVar6,lStack_38 + 0x30,lStack_38 + 0x78);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar4 = plVar8;
      }
    }
    auVar9._8_8_ = lVar6;
    auVar9._0_8_ = plVar4;
    return auVar9;
  }
  puVar5 = &UNK_10f65eabf;
  FUN_10a00946c(&UNK_10f65eabf);
  func_0x00010a26a190(&lStack_38);
  __Unwind_Resume(puVar5);
  auVar10._8_8_ = 7;
  auVar10._0_8_ = &DAT_10f65c979;
  return auVar10;
}



/* Entry: 10a538268; end: 10a5382b7;  */

undefined1  [16] FUN_10a538268(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &DAT_10f65c979;
  return auVar1;
}



/* Entry: 10a5382b8; end: 10a5385a3;  */

void FUN_10a5382b8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f65c979,7);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befd60;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befd60;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf0328;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a538584;
    FUN_10a054dac(param_1,&UNK_10f65eaf5,FUN_10a542770,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a538584;
    FUN_10a054dac(param_1,&UNK_10f65eb08,FUN_10a542894,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a538584;
    FUN_10a054dac(param_1,&UNK_10f65eb1e,FUN_10a542964,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a538584;
    FUN_10a054dac(param_1,&UNK_10f65eb37,FUN_10a542a34,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f65c979,7);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a538584:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a538588);
  (*pcVar6)();
}



/* Entry: 10a5385a4; end: 10a538657;  */

undefined8 * FUN_10a5385a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bef9f0;
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_110c6fd48;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = 0x4014000000000000;
  puVar1[0x1e] = 1000;
  *(undefined1 *)(puVar1 + 0x1f) = 3;
  param_1[3] = puVar1;
  return param_1;
}



/* Entry: 10a538658; end: 10a5386a7;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a538658(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar5 = param_1;
  if ((*(char *)(param_2 + 0xc0) == '\x01') &&
     (lVar2 = *(long *)(param_2 + 0xa8), lVar2 != *(long *)(param_2 + 0xb0))) {
    if (-1 < *(char *)(lVar2 + 0x37)) {
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      param_1[2] = *(undefined8 *)(lVar2 + 0x30);
      param_1[1] = uVar9;
      *param_1 = uVar8;
      auVar13._8_8_ = param_3;
      auVar13._0_8_ = param_2;
      return auVar13;
    }
    puVar6 = *(undefined **)(lVar2 + 0x20);
    uVar3 = *(ulong *)(lVar2 + 0x28);
    if (0x16 < uVar3) {
      if (uVar3 < 0x7ffffffffffffff7) {
        puVar6 = (undefined *)0x19;
        if ((uVar3 | 7) != 0x17) {
          puVar6 = (undefined *)((uVar3 | 7) + 1);
        }
      }
      else {
        func_0x000104bd47d4();
      }
      puVar4 = puVar6;
      func_0x000107c60e20(puVar6);
      auVar10._8_8_ = puVar6;
      auVar10._0_8_ = puVar4;
      return auVar10;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    puVar4 = (undefined *)(uVar3 + 1);
  }
  else {
    puVar6 = &UNK_10f65e59d;
    puVar4 = puVar6;
    puVar7 = puVar6;
    func_0x000107c613d0();
    if ((undefined *)0x7ffffffffffffff7 < puVar4) {
      func_0x000107c2b040();
      if ((bRam00000001132ffc88 & 1) == 0) {
        puVar4 = (undefined *)0x1132ffc88;
        func_0x000107c60e48();
        if ((int)puVar4 != 0) {
          puVar5 = (undefined8 *)0x30;
          func_0x000107c60e20();
          uVar8 = 0x1132ffc28;
          uRam00000001132ffc38 = 0x8000000000000030;
          uRam00000001132ffc30 = 0x2c;
          puRam00000001132ffc28 = puVar5;
          puVar5[1] = 0x434948504152475f;
          *puVar5 = 0x45524f43534e454c;
          puVar5[3] = 0x525f595a414c5f54;
          puVar5[2] = 0x5845544e4f435f53;
          *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
          *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
          *(undefined1 *)((long)puVar5 + 0x2c) = 0;
          uRam00000001132ffc40 = 0;
          pcRam00000001132ffc48 = FUN_10a09e854;
          ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
          func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
          uVar9 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
          auVar14._8_8_ = uVar8;
          auVar14._0_8_ = uVar9;
          return auVar14;
        }
      }
      auVar12._8_8_ = puVar7;
      auVar12._0_8_ = puVar4;
      return auVar12;
    }
    if (puVar4 < (undefined *)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)puVar4;
      if (puVar4 == (undefined *)0x0) {
        *(undefined1 *)param_1 = 0;
        auVar11._8_8_ = puVar7;
        auVar11._0_8_ = param_1;
        return auVar11;
      }
    }
    else {
      puVar1 = (undefined8 *)0x19;
      if (((ulong)puVar4 | 7) != 0x17) {
        puVar1 = (undefined8 *)(((ulong)puVar4 | 7) + 1);
      }
      puVar5 = puVar1;
      func_0x000107c60e20();
      param_1[1] = puVar4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar5,puVar6,puVar4);
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = puVar5;
  return auVar15;
}



/* Entry: 10a5386a8; end: 10a53875b;  */

undefined8 * FUN_10a5386a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a538658(auStack_38,*(undefined8 *)(param_1 + 0x18));
  puVar1 = auStack_38;
  func_0x00010a5386f4(puVar1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return puVar1;
}



/* Entry: 10a53875c; end: 10a5387ef;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a53875c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar5 = param_1;
  if ((*(char *)(param_2 + 0xc0) == '\x01') &&
     (lVar2 = *(long *)(param_2 + 0xa8), lVar2 != *(long *)(param_2 + 0xb0))) {
    if (-1 < *(char *)(lVar2 + 0x4f)) {
      uVar9 = *(undefined8 *)(lVar2 + 0x40);
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      param_1[2] = *(undefined8 *)(lVar2 + 0x48);
      param_1[1] = uVar9;
      *param_1 = uVar8;
      auVar13._8_8_ = param_3;
      auVar13._0_8_ = param_2;
      return auVar13;
    }
    puVar6 = *(undefined **)(lVar2 + 0x38);
    uVar3 = *(ulong *)(lVar2 + 0x40);
    if (0x16 < uVar3) {
      if (uVar3 < 0x7ffffffffffffff7) {
        puVar6 = (undefined *)0x19;
        if ((uVar3 | 7) != 0x17) {
          puVar6 = (undefined *)((uVar3 | 7) + 1);
        }
      }
      else {
        func_0x000104bd47d4();
      }
      puVar4 = puVar6;
      func_0x000107c60e20(puVar6);
      auVar10._8_8_ = puVar6;
      auVar10._0_8_ = puVar4;
      return auVar10;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    puVar4 = (undefined *)(uVar3 + 1);
  }
  else {
    puVar6 = &UNK_10f65e59d;
    puVar4 = puVar6;
    puVar7 = puVar6;
    func_0x000107c613d0();
    if ((undefined *)0x7ffffffffffffff7 < puVar4) {
      func_0x000107c2b040();
      if ((bRam00000001132ffc88 & 1) == 0) {
        puVar4 = (undefined *)0x1132ffc88;
        func_0x000107c60e48();
        if ((int)puVar4 != 0) {
          puVar5 = (undefined8 *)0x30;
          func_0x000107c60e20();
          uVar8 = 0x1132ffc28;
          uRam00000001132ffc38 = 0x8000000000000030;
          uRam00000001132ffc30 = 0x2c;
          puRam00000001132ffc28 = puVar5;
          puVar5[1] = 0x434948504152475f;
          *puVar5 = 0x45524f43534e454c;
          puVar5[3] = 0x525f595a414c5f54;
          puVar5[2] = 0x5845544e4f435f53;
          *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
          *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
          *(undefined1 *)((long)puVar5 + 0x2c) = 0;
          uRam00000001132ffc40 = 0;
          pcRam00000001132ffc48 = FUN_10a09e854;
          ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
          func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
          uVar9 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
          auVar14._8_8_ = uVar8;
          auVar14._0_8_ = uVar9;
          return auVar14;
        }
      }
      auVar12._8_8_ = puVar7;
      auVar12._0_8_ = puVar4;
      return auVar12;
    }
    if (puVar4 < (undefined *)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)puVar4;
      if (puVar4 == (undefined *)0x0) {
        *(undefined1 *)param_1 = 0;
        auVar11._8_8_ = puVar7;
        auVar11._0_8_ = param_1;
        return auVar11;
      }
    }
    else {
      puVar1 = (undefined8 *)0x19;
      if (((ulong)puVar4 | 7) != 0x17) {
        puVar1 = (undefined8 *)(((ulong)puVar4 | 7) + 1);
      }
      puVar5 = puVar1;
      func_0x000107c60e20();
      param_1[1] = puVar4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar5,puVar6,puVar4);
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = puVar5;
  return auVar15;
}



/* Entry: 10a5387f0; end: 10a538897;  */

undefined8 * FUN_10a5387f0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110befa48;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_10a542bb0(auStack_38,&uStack_21);
  FUN_10a538898(param_1 + 3,auStack_38);
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
  return param_1;
}



/* Entry: 10a538898; end: 10a53895b;  */

undefined8 * FUN_10a538898(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a53895c; end: 10a53896f;  */

void FUN_10a53895c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a53896c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x18) + 0x10))();
  return;
}



/* Entry: 10a538970; end: 10a5389f3;  */

void FUN_10a538970(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f65eb4b,&UNK_10f65eb87,0x14,&UNK_10f65ebe9);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
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
  }
  return;
}



/* Entry: 10a5389f4; end: 10a5389ff;  */

void FUN_10a5389f4(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x4e7) = 1;
  return;
}



/* Entry: 10a538a00; end: 10a538de3;  */

void FUN_10a538a00(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "WeatherCondition";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f65e59d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Unknown";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Lightning";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "LowVisibility";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "PartlyCloudy";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "ClearNight";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Cloudy";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Rainy";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Hail";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Snow";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Windy";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Sunny";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65e59d;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a538d40();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a538de4; end: 10a538e43;  */

undefined1  [16] FUN_10a538de4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &DAT_10f65c981;
  return auVar1;
}



/* Entry: 10a538e44; end: 10a539267;  */

void FUN_10a538e44(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f65c981,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befde8;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befde8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf0328;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539248;
    FUN_10a054dac(param_1,&UNK_10f65ec68,FUN_10a542c80,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539248;
    FUN_10a054dac(param_1,&UNK_10f65ec76,FUN_10a542e84,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539248;
    FUN_10a054dac(param_1,&UNK_10f65ec88,FUN_10a542ff8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539248;
    FUN_10a054dac(param_1,&UNK_10f65ec94,FUN_10a5430a8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539248;
    FUN_10a054dac(param_1,&UNK_10f65eca4,FUN_10a543194,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f65ecba,FUN_10a543280,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f340132,FUN_10a543364,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f65ecc1,FUN_10a54344c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2ca5f5,FUN_10a543530,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f65c981,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a539248:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53924c);
  (*pcVar6)();
}



/* Entry: 10a539268; end: 10a53937f;  */

undefined1  [16] FUN_10a539268(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x60);
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      param_2 = *plVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      FUN_10a53f17c(&uStack_40,param_2,plVar2[1],plVar2[1] - param_2 >> 2);
      if (*(long *)(param_1 + 0x20) != 0) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 0x28) = uStack_38;
      *(undefined8 *)(param_1 + 0x20) = uStack_40;
      *(undefined8 *)(param_1 + 0x30) = uStack_30;
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1 + 0x20;
    return auVar4;
  }
  puVar1 = &UNK_10f65ee5d;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x18) != 0) {
    lVar3 = *(long *)(*(long *)(puVar1 + 0x18) + 0x60);
    if (lVar3 == 0) {
      *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(puVar1 + 0x38);
    }
    else {
      param_2 = *(long *)(lVar3 + 0x18);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      FUN_10a53f17c(&uStack_80,param_2,*(long *)(lVar3 + 0x20),
                    *(long *)(lVar3 + 0x20) - param_2 >> 2);
      if (*(long *)(puVar1 + 0x38) != 0) {
        *(long *)(puVar1 + 0x40) = *(long *)(puVar1 + 0x38);
        __ZdlPv();
      }
      *(undefined8 *)(puVar1 + 0x40) = uStack_78;
      *(undefined8 *)(puVar1 + 0x38) = uStack_80;
      *(undefined8 *)(puVar1 + 0x48) = uStack_70;
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = puVar1 + 0x38;
    return auVar5;
  }
  FUN_10a00946c(&UNK_10f65eeff);
  FUN_10a00946c(&UNK_10f65ef95);
  auVar6._8_8_ = 8;
  auVar6._0_8_ = &DAT_10f2df715;
  return auVar6;
}



/* Entry: 10a539380; end: 10a539393;  */

undefined1  [16] FUN_10a539380(void)

{
  undefined1 auVar1 [16];
  
  FUN_10a00946c(&UNK_10f65ef95);
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &DAT_10f2df715;
  return auVar1;
}



/* Entry: 10a539394; end: 10a5393db;  */

undefined1  [16] FUN_10a539394(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &DAT_10f2df715;
  return auVar1;
}



/* Entry: 10a5393dc; end: 10a539c1f;  */

void FUN_10a5393dc(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f2df715,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befe00;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befe00;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf0328;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65efbe,FUN_10a543614,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&DAT_10f65d6f8,FUN_10a543738,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65efd2,FUN_10a5437f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65efde,FUN_10a5438c8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65efea,FUN_10a54399c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65eff7,FUN_10a543a70,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f00d,FUN_10a543b44,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f021,FUN_10a543c18,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f02a,FUN_10a543cec,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f034,FUN_10a543dc0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f03f,FUN_10a543e94,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f052,FUN_10a543f64,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f05f,FUN_10a544048,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f06b,FUN_10a5441d8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f07b,FUN_10a54437c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f08b,FUN_10a544434,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65eaf5,FUN_10a5444e4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65eb08,FUN_10a5445a0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65eb1e,FUN_10a544670,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65eb37,FUN_10a544740,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f0a1,FUN_10a5447f0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f0c1,FUN_10a544920,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a539c00;
    FUN_10a054dac(param_1,&UNK_10f65f0d9,FUN_10a544a10,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f2df715,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a539c00:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a539c04);
  (*pcVar6)();
}



/* Entry: 10a539c20; end: 10a539cd7;  */

undefined8 * FUN_10a539c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110befa98;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_110c6fd48;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = 0x4014000000000000;
  puVar1[0x1e] = 1000;
  *(undefined1 *)(puVar1 + 0x1f) = 3;
  param_1[3] = puVar1;
  return param_1;
}



/* Entry: 10a539cd8; end: 10a539d3f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a539cd8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar7 = *(long *)(param_2 + 0x18);
  puVar4 = param_1;
  if (*(char *)(lVar7 + 0x68) == '\x01') {
    if (-1 < *(char *)(lVar7 + 0x5f)) {
      uVar9 = *(undefined8 *)(lVar7 + 0x50);
      uVar8 = *(undefined8 *)(lVar7 + 0x48);
      param_1[2] = *(undefined8 *)(lVar7 + 0x58);
      param_1[1] = uVar9;
      *param_1 = uVar8;
      auVar13._8_8_ = param_3;
      auVar13._0_8_ = param_2;
      return auVar13;
    }
    puVar5 = *(undefined **)(lVar7 + 0x48);
    uVar2 = *(ulong *)(lVar7 + 0x50);
    if (0x16 < uVar2) {
      if (uVar2 < 0x7ffffffffffffff7) {
        puVar5 = (undefined *)0x19;
        if ((uVar2 | 7) != 0x17) {
          puVar5 = (undefined *)((uVar2 | 7) + 1);
        }
      }
      else {
        func_0x000104bd47d4();
      }
      puVar3 = puVar5;
      func_0x000107c60e20(puVar5);
      auVar10._8_8_ = puVar5;
      auVar10._0_8_ = puVar3;
      return auVar10;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar3 = (undefined *)(uVar2 + 1);
  }
  else {
    puVar5 = &UNK_10f65e59d;
    puVar3 = puVar5;
    puVar6 = puVar5;
    func_0x000107c613d0();
    if ((undefined *)0x7ffffffffffffff7 < puVar3) {
      func_0x000107c2b040();
      if ((bRam00000001132ffc88 & 1) == 0) {
        puVar3 = (undefined *)0x1132ffc88;
        func_0x000107c60e48();
        if ((int)puVar3 != 0) {
          puVar4 = (undefined8 *)0x30;
          func_0x000107c60e20();
          uVar8 = 0x1132ffc28;
          uRam00000001132ffc38 = 0x8000000000000030;
          uRam00000001132ffc30 = 0x2c;
          puRam00000001132ffc28 = puVar4;
          puVar4[1] = 0x434948504152475f;
          *puVar4 = 0x45524f43534e454c;
          puVar4[3] = 0x525f595a414c5f54;
          puVar4[2] = 0x5845544e4f435f53;
          *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
          *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
          *(undefined1 *)((long)puVar4 + 0x2c) = 0;
          uRam00000001132ffc40 = 0;
          pcRam00000001132ffc48 = FUN_10a09e854;
          ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
          func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
          uVar9 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
          auVar14._8_8_ = uVar8;
          auVar14._0_8_ = uVar9;
          return auVar14;
        }
      }
      auVar12._8_8_ = puVar6;
      auVar12._0_8_ = puVar3;
      return auVar12;
    }
    if (puVar3 < (undefined *)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)puVar3;
      if (puVar3 == (undefined *)0x0) {
        *(undefined1 *)param_1 = 0;
        auVar11._8_8_ = puVar6;
        auVar11._0_8_ = param_1;
        return auVar11;
      }
    }
    else {
      puVar1 = (undefined8 *)0x19;
      if (((ulong)puVar3 | 7) != 0x17) {
        puVar1 = (undefined8 *)(((ulong)puVar3 | 7) + 1);
      }
      puVar4 = puVar1;
      func_0x000107c60e20();
      param_1[1] = puVar3;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar4,puVar5,puVar3);
  auVar15._8_8_ = puVar5;
  auVar15._0_8_ = puVar4;
  return auVar15;
}



/* Entry: 10a539d40; end: 10a539dfb;  */

undefined8 * FUN_10a539d40(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110befaf0;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_10a544b64(auStack_48,&uStack_31);
  FUN_10a539dfc(param_1 + 3,auStack_48);
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
  return param_1;
}



/* Entry: 10a539dfc; end: 10a539edf;  */

undefined8 * FUN_10a539dfc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a539ee0; end: 10a539fb3;  */

void FUN_10a539ee0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  (**(code **)(**(long **)(param_1[3] + 0x18) + 0x10))();
  lVar4 = param_1[5];
  if ((lVar4 != 0) && (*(char *)(*(long *)(param_1[3] + 0x18) + 0x68) == '\x01')) {
    (**(code **)(*param_1 + 0x18))(auStack_40,param_1);
    FUN_10a539fb4(lVar4,auStack_40);
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
    FUN_10a53a228(param_1 + 5);
  }
  return;
}



/* Entry: 10a539fb4; end: 10a53a227;  */

void FUN_10a539fb4(undefined ******param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *****pppppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined8 *puVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******unaff_x21;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined8 uStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined8 uStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    ppppppuVar6 = param_1;
    if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a53a1a0;
    pppppuVar11 = *param_1;
    pppppuStack_78 = (undefined *****)param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    (*(code *)pppppuVar11)(ppppppuVar6,param_1);
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10a53a1a0;
    ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppuVar8 = (undefined ******)pppppuStack_78;
    } while (cVar3 != '\0');
  }
  else {
    unaff_x21 = param_1;
    puVar9 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10a544c8c(ppppppuVar6,param_2);
      iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a53a1a0;
    }
    ppppppuVar6 = (undefined ******)0x0;
    if (puVar9 == (undefined8 *)0x0) goto LAB_10a53a1a0;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar4) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_90 = *param_2;
    ppppppuVar7 = (undefined ******)param_2[1];
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar4) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10a544e90;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110bf01d0;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar4) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar7;
    uStack_60 = uStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar7;
    FUN_10a4634ec(puVar9,&ppppuStack_80);
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar7 + 1;
      do {
        pppppuVar11 = *ppppppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar4) {
          *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar7;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a53a1a0;
    ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppuVar8 = (undefined ******)pppppuStack_98;
      param_1 = (undefined ******)&ppppuStack_a0;
    } while (cVar3 != '\0');
  }
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar8;
  }
LAB_10a53a1a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppuStack_78)(unaff_x21 + 1);
  FUN_10a544c34(param_1 + 2);
  func_0x00010a004dac(&ppppuStack_a0);
  __Unwind_Resume();
  pppppuVar11 = ppppppuVar6[1];
  *ppppppuVar6 = (undefined *****)0x0;
  ppppppuVar6[1] = (undefined *****)0x0;
  if (pppppuVar11 != (undefined *****)0x0) {
    pppppuVar2 = pppppuVar11 + 1;
    do {
      ppppuVar10 = *pppppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
      if (bVar4) {
        *pppppuVar2 = (undefined ****)((long)ppppuVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppuVar10 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar11)[2])(pppppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppppuVar11);
      return;
    }
  }
  return;
}



/* Entry: 10a53a228; end: 10a53a283;  */

void FUN_10a53a228(undefined8 *param_1)

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



/* Entry: 10a53a284; end: 10a53a297;  */

void FUN_10a53a284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a53a294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x18) + 0x18))();
  return;
}



/* Entry: 10a53a298; end: 10a53a31b;  */

void FUN_10a53a298(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f65f0ec,&UNK_10f65f129,0x1d,&UNK_10f65f18c);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
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
  }
  return;
}



/* Entry: 10a53a31c; end: 10a53a333;  */

undefined8 * FUN_10a53a31c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(long *)(param_1 + 0x30) = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(param_1 + 0x28);
}



/* Entry: 10a53a334; end: 10a53a3a7;  */

undefined8 * FUN_10a53a334(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a53a3a8; end: 10a53a403;  */

undefined1  [16] FUN_10a53a3a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &DAT_10f65c968;
  return auVar1;
}



/* Entry: 10a53a404; end: 10a53a857;  */

void FUN_10a53a404(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f65c968,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befe30;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befe30;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf0328;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f1be,FUN_10a544f08,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f1cf,FUN_10a5450fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f1e4,FUN_10a5451cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f1f9,FUN_10a54529c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f207,FUN_10a545394,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f21a,FUN_10a545464,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f238,FUN_10a545590,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&DAT_10f49864e,FUN_10a5456bc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53a838;
    FUN_10a054dac(param_1,&UNK_10f65f24a,FUN_10a5457cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f65c968,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a53a838:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53a83c);
  (*pcVar6)();
}



/* Entry: 10a53a858; end: 10a53a96f;  */

undefined8 * FUN_10a53a858(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110befb40;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_110c6fdf8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x000107c2b054(puVar1 + 4,&UNK_10f65e59d);
  *(undefined4 *)(puVar1 + 7) = 0x3f266666;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0xa0000000f;
  *(undefined2 *)((long)puVar1 + 0x44) = 0;
  plVar2 = (long *)param_1[3];
  param_1[3] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 10a53a970; end: 10a53a9f3;  */

void FUN_10a53a970(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x00010aae9fd8();
    FUN_10a08d2e0(&uStack_38,lVar1 + 0x10);
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),&uStack_38);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 10a53a9f4; end: 10a53aa03;  */

void FUN_10a53a9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a53aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10a53aa04; end: 10a53aaab;  */

undefined8 * FUN_10a53aa04(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110befba0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_10a545940(auStack_38,&uStack_21);
  FUN_10a53aaac(param_1 + 3,auStack_38);
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
  return param_1;
}



/* Entry: 10a53aaac; end: 10a53ab6f;  */

undefined8 * FUN_10a53aaac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a53ab70; end: 10a53ac07;  */

void FUN_10a53ab70(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c2b054(auStack_48,&UNK_10f65f258);
  if (lVar2 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return;
}



/* Entry: 10a53ac08; end: 10a53acbf;  */

void FUN_10a53ac08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c2b054(auStack_50,&UNK_10f65f279);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x8d8);
    func_0x000107c2b054(auStack_38,&UNK_10f65f29a);
    FUN_10a76bdb0(uVar2,auStack_50,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 10a53acc0; end: 10a53ad77;  */

undefined8 *** FUN_10a53acc0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  lVar6 = *(long *)(param_2 + 8);
  pppuVar4 = appuStack_48;
  func_0x000107c2b054(pppuVar4,&UNK_10f65f2b3);
  if (lVar6 != 0) {
    pppuVar4 = *(undefined8 ****)(lVar6 + 0x8d8);
    FUN_10a76c080(pppuVar4,appuStack_48);
  }
  if (cStack_31 < '\0') {
    pppuVar4 = (undefined8 ***)appuStack_48[0];
    __ZdlPv(appuStack_48[0]);
  }
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return pppuVar4;
  }
  puVar5 = &UNK_10f65f2d5;
  FUN_10a00946c(&UNK_10f65f2d5);
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
  __Unwind_Resume(puVar5);
  return (undefined8 ***)0x40000;
}



/* Entry: 10a53ad78; end: 10a53ae67;  */

undefined8 FUN_10a53ad78(void)

{
  return 0x40000;
}



/* Entry: 10a53ae68; end: 10a53bb2b;  */

void FUN_10a53ae68(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f660173,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befeb8;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befeb8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f30f,FUN_10a545a10,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f31f,FUN_10a545bd4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f32c,FUN_10a545db4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f6446e7,FUN_10a545e6c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f33b,FUN_10a545fac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f6446f9,FUN_10a546064,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f64470c,FUN_10a5461ec,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f358,FUN_10a5462a4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f36e,FUN_10a546450,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f388,FUN_10a546508,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f3ab,FUN_10a5465c0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f3c7,FUN_10a546678,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f3da,FUN_10a546730,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f3f5,FUN_10a5467e8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f411,FUN_10a5468a0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f42f,FUN_10a546958,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f644723,FUN_10a546b0c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f446,FUN_10a546bc4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f465,FUN_10a546c7c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f644738,FUN_10a546d34,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f475,FUN_10a546dec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f48b,FUN_10a546ea4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f4a9,FUN_10a546f5c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f644779,FUN_10a547014,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f4cf,FUN_10a5470e8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f4e9,FUN_10a5471a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f4fc,FUN_10a547268,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f51a,FUN_10a547320,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f531,FUN_10a547474,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f644798,FUN_10a54752c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f54c,FUN_10a5475e4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f565,FUN_10a54769c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f6447b5,FUN_10a5477a4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f6447ce,FUN_10a54785c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f571,FUN_10a547970,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f6447e0,FUN_10a547b40,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f6447ee,FUN_10a547f08,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f586,FUN_10a548024,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53bb0c;
    FUN_10a054dac(param_1,&UNK_10f65f595,FUN_10a54812c,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f660173,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a53bb0c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53bb10);
  (*pcVar6)();
}



/* Entry: 10a53bb2c; end: 10a53be53;  */

void FUN_10a53bb2c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&DAT_10f648ad9,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110befed0;
  pppuVar2 = (undefined8 ***)&UNK_10f65e59d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110befed0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf0328;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53be34;
    FUN_10a054dac(param_1,&UNK_10f65f5a4,FUN_10a548270,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53be34;
    FUN_10a054dac(param_1,"clear",FUN_10a5483d8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53be34;
    FUN_10a054dac(param_1,&UNK_10f65f5bc,FUN_10a5484f8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53be34;
    FUN_10a054dac(param_1,&UNK_10f65f5cb,FUN_10a548e00,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a53be34;
    FUN_10a054dac(param_1,&UNK_10f65f5db,FUN_10a548f44,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f648ad9,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a53be34:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53be38);
  (*pcVar6)();
}



/* Entry: 10a53be54; end: 10a53bed7;  */

void FUN_10a53be54(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x000107c2b054(auStack_38,&UNK_10f65f5ec);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  func_0x000107c2b054(param_1,&UNK_10f65e59d);
  return;
}



/* Entry: 10a53bed8; end: 10a53c02b;  */

undefined8 * FUN_10a53bed8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110befbf0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[9] = 0;
  func_0x000107c2b054(auStack_48,&UNK_10f65f60e);
  if (param_2 != 0) {
    FUN_10a76c080(*(undefined8 *)(param_2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6fe80;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  puVar1[1] = puVar2;
  plVar3 = (long *)param_1[9];
  param_1[9] = puVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10a53c02c; end: 10a53c033;  */

void FUN_10a53c02c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  lVar1 = **(long **)(param_1 + 0x48) + 0xd8;
  uStack_18 = param_2;
  FUN_10a4f5f30(lVar1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  *(undefined2 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x3a) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 7;
  *(undefined8 *)(lVar1 + 0x40) = 0x3d4ccccd3f000000;
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0xf;
  *(undefined8 *)(lVar1 + 0x50) = 0x401a028f5c28f5c3;
  *(undefined4 *)(lVar1 + 0x58) = 4;
  *(undefined1 *)(lVar1 + 0x5c) = 0;
  *(undefined4 *)(lVar1 + 0x60) = 0xa0;
  *(undefined1 *)(lVar1 + 100) = 1;
  *(undefined8 *)(lVar1 + 0x68) = 0x8000000028;
  *(undefined2 *)(lVar1 + 0x70) = 0x101;
  *(undefined1 *)(lVar1 + 0x72) = 1;
  *(undefined1 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0x405fc00000000000;
  return;
}



/* Entry: 10a53c034; end: 10a53c06b;  */

bool FUN_10a53c034(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x48);
  func_0x00010ad3d4c4(*plVar5 + 0xd8);
  lVar4 = *plVar5;
  lVar1 = lVar4 + 0xf0;
  lVar3 = lVar1;
  FUN_10ad3d68c(lVar1,param_2);
  bVar2 = lVar4 + 0xf8 != lVar3;
  if (bVar2) {
    FUN_10ad3d708(lVar1,lVar3);
    func_0x00010a293784(lVar3 + 0x20);
    __ZdlPv(lVar3);
  }
  return bVar2;
}



/* Entry: 10a53c06c; end: 10a53c11b;  */

void FUN_10a53c06c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 uStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c2b054(auStack_50,&UNK_10f65f64f);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_50);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  lVar1 = **(long **)(param_1 + 0x48) + 0xd8;
  auStack_50[0] = param_2;
  FUN_10a4f5f30(lVar1,param_2,&UNK_10dd5b8f9,auStack_50,&uStack_31);
  *(undefined1 *)(lVar1 + 0x72) = param_3;
  return;
}


