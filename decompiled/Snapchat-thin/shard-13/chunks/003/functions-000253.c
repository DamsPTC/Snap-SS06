/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4e704c; end: 10a4e721f;  */

undefined8 * FUN_10a4e704c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plStack_28;
  
  puVar7 = (undefined8 *)*param_1;
  if (*(long **)param_1[2] != (long *)0x0) {
    (**(code **)(**(long **)param_1[2] + 0x38))(&plStack_28);
    uVar5 = (uint)plStack_28[2];
    while ((uVar5 >> 1 & 1) == 0) {
      FUN_10a5267a8(*puVar7);
      uVar5 = (uint)plStack_28[2];
    }
    if (plStack_28 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_28 + 1);
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
          (**(code **)(*plStack_28 + 8))();
        }
      }
    }
  }
  if (*(long **)param_1[1] != (long *)0x0) {
    (**(code **)(**(long **)param_1[1] + 0x38))(&plStack_28);
    uVar5 = (uint)plStack_28[2];
    while ((uVar5 >> 1 & 1) == 0) {
      FUN_10a5267a8(*puVar7);
      uVar5 = (uint)plStack_28[2];
    }
    if (plStack_28 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_28 + 1);
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
          (**(code **)(*plStack_28 + 8))();
        }
      }
    }
  }
  if ((*(long *)param_1[2] != 0) || (*(long *)param_1[1] != 0)) {
    FUN_10a52b48c(*puVar7);
    plVar4 = *(long **)param_1[2];
    *(long *)param_1[2] = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = *(long **)param_1[1];
    *(long *)param_1[1] = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10a4e7220; end: 10a4e750b;  */

void FUN_10a4e7220(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_198;
  undefined ***pppuStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(*param_1 + 0x78) = 0;
  FUN_10a4e750c(*param_1 + 0x498);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  ppuStack_c8 = &PTR_FUN_110bab9a0;
  uStack_40 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0xffffffff00000000;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0x109d138c8;
  ppuStack_78 = &PTR_DAT_110b3e838;
  pcStack_70 = FUN_10a1b2664;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  auVar12 = NEON_fmov(0xbf800000,4);
  uStack_13c = auVar12._8_8_;
  uStack_144 = auVar12._0_8_;
  uStack_134 = 0x7fc000007fc00000;
  uStack_12c = 0x3f800000;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0x3f800000;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_104 = 0x3f800000;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0x3f800000;
  uStack_e8 = 0;
  puStack_168 = &uStack_150;
  uStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  pppuStack_170 = &ppuStack_c8;
  uStack_160 = 0;
  FUN_10a25b1f0(&plStack_158,*param_1 + 0x3f0,0,&pppuStack_170);
  uVar9 = (uint)plStack_158[2];
  while ((uVar9 >> 1 & 1) == 0) {
    FUN_10a5267a8(*param_1);
    uVar9 = (uint)plStack_158[2];
  }
  if ((((uint)plStack_158[2] >> 1 & 1) == 0) || (((uint)plStack_158[2] >> 5 & 1) != 0)) {
    if (((uint)plStack_158[2] >> 5 & 1) == 0) {
      puVar8 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar8 = &PTR_DAT_110ae85c0;
      ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_d0,plStack_158 + 0x12);
      func_0x0001092af97c(auStack_d0);
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4e7478);
    (*pcVar6)();
  }
  if (plStack_158 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_158 + 1);
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
        (**(code **)(*plStack_158 + 8))();
      }
    }
  }
  plVar5 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar11 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  pppuVar7 = &ppuStack_c8;
  FUN_10a1b2b9c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (plStack_158 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_158 + 1);
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
          (**(code **)(*plStack_158 + 8))();
        }
      }
    }
    func_0x00010a042d30(&uStack_e0);
    FUN_10a1b2b9c(&ppuStack_c8);
    __Unwind_Resume();
    puStack_1a8 = (*pppuVar7)[0x42] + 0x68;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1b0 = 0;
    FUN_10a52a460(pppuVar7 + 1,&uStack_1e0);
    if (*(int *)(pppuVar7 + 7) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 7));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 7) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x3d) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x3d) = 0;
    }
    if (*(int *)(pppuVar7 + 8) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 8));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 8) = 0;
    }
    if (*(char *)(pppuVar7 + 0xc) == '\x01') {
      *(undefined1 *)(pppuVar7 + 0xc) = 0;
    }
    FUN_10a28590c(pppuVar7 + 0xd,&uStack_1e0);
    FUN_10a528440(pppuVar7 + 0x26,&uStack_1e0);
    func_0x00010a2859a8(pppuVar7 + 0x2f,&uStack_1e0);
    FUN_10a5280c4(pppuVar7 + 0x34,&uStack_1e0);
    if (*(int *)(pppuVar7 + 0x39) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x39));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x39) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x1cd) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x1cd) = 0;
    }
    FUN_10a526cf8(pppuVar7 + 0x3a,&uStack_1e0);
    FUN_10a5287bc(pppuVar7 + 0x41,&uStack_1e0);
    func_0x00010a285a08(pppuVar7 + 0x46,&uStack_1e0);
    if (*(int *)(pppuVar7 + 0x4d) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x4d));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x4d) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x274) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x274) = 0;
    }
    FUN_10a529ee4(pppuVar7 + 0x4f,&uStack_1e0);
    if (*(int *)(pppuVar7 + 0x59) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x59));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x59) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x2ec) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x2ec) = 0;
    }
    if (*(int *)(pppuVar7 + 0x5e) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x5e));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x5e) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x2f5) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x2f5) = 0;
    }
    if (*(int *)(pppuVar7 + 0x5f) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x5f));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x5f) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x2fd) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x2fd) = 0;
    }
    if (*(int *)(pppuVar7 + 0x60) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x60));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x60) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x305) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x305) = 0;
    }
    FUN_10a526974(pppuVar7 + 0x61,&uStack_1e0);
    if (*(int *)(pppuVar7 + 0x6a) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x6a));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x6a) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x357) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x357) = 0;
    }
    if (*(int *)(pppuVar7 + 0x6b) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x6b));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x6b) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x35d) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x35d) = 0;
    }
    if (*(int *)(pppuVar7 + 0x6c) != 0) {
      puStack_198 = (undefined1 *)CONCAT44(puStack_198._4_4_,*(int *)(pppuVar7 + 0x6c));
      func_0x0001098b0050(&lStack_1c8,&puStack_198);
      *(undefined4 *)(pppuVar7 + 0x6c) = 0;
    }
    if (*(char *)((long)pppuVar7 + 0x365) == '\x01') {
      *(undefined1 *)((long)pppuVar7 + 0x365) = 0;
    }
    FUN_10a4e4cac(pppuVar7,&uStack_1e0);
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      __ZdlPv();
    }
    puStack_198 = (undefined1 *)&uStack_1e0;
    FUN_10a26dd18(&puStack_198);
    return;
  }
  return;
}



/* Entry: 10a4e750c; end: 10a4e781f;  */

void FUN_10a4e750c(long *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  undefined1 *puStack_28;
  
  lStack_38 = *(long *)(*param_1 + 0x210) + 0x68;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  uStack_40 = 0;
  FUN_10a52a460(param_1 + 1,&uStack_70);
  if ((int)param_1[7] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[7]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*(char *)((long)param_1 + 0x3d) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x3d) = 0;
  }
  if ((int)param_1[8] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[8]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((char)param_1[0xc] == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  FUN_10a28590c(param_1 + 0xd,&uStack_70);
  FUN_10a528440(param_1 + 0x26,&uStack_70);
  func_0x00010a2859a8(param_1 + 0x2f,&uStack_70);
  FUN_10a5280c4(param_1 + 0x34,&uStack_70);
  if ((int)param_1[0x39] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x39]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  if (*(char *)((long)param_1 + 0x1cd) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x1cd) = 0;
  }
  FUN_10a526cf8(param_1 + 0x3a,&uStack_70);
  FUN_10a5287bc(param_1 + 0x41,&uStack_70);
  func_0x00010a285a08(param_1 + 0x46,&uStack_70);
  if ((int)param_1[0x4d] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x4d]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
  if (*(char *)((long)param_1 + 0x274) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x274) = 0;
  }
  FUN_10a529ee4(param_1 + 0x4f,&uStack_70);
  if ((int)param_1[0x59] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x59]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x59) = 0;
  }
  if (*(char *)((long)param_1 + 0x2ec) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  }
  if ((int)param_1[0x5e] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x5e]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x5e) = 0;
  }
  if (*(char *)((long)param_1 + 0x2f5) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x2f5) = 0;
  }
  if ((int)param_1[0x5f] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x5f]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x5f) = 0;
  }
  if (*(char *)((long)param_1 + 0x2fd) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x2fd) = 0;
  }
  if ((int)param_1[0x60] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x60]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)((long)param_1 + 0x305) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x305) = 0;
  }
  FUN_10a526974(param_1 + 0x61,&uStack_70);
  if ((int)param_1[0x6a] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x6a]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x6a) = 0;
  }
  if (*(char *)((long)param_1 + 0x357) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x357) = 0;
  }
  if ((int)param_1[0x6b] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x6b]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x6b) = 0;
  }
  if (*(char *)((long)param_1 + 0x35d) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x35d) = 0;
  }
  if ((int)param_1[0x6c] != 0) {
    puStack_28 = (undefined1 *)CONCAT44(puStack_28._4_4_,(int)param_1[0x6c]);
    func_0x0001098b0050(&lStack_58,&puStack_28);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)((long)param_1 + 0x365) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x365) = 0;
  }
  FUN_10a4e4cac(param_1,&uStack_70);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  puStack_28 = (undefined1 *)&uStack_70;
  FUN_10a26dd18(&puStack_28);
  return;
}



/* Entry: 10a4e7820; end: 10a4e7883;  */

undefined8 * FUN_10a4e7820(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a4e7884; end: 10a4e799b;  */

long FUN_10a4e7884(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a4e799c; end: 10a4e7ccb;  */

void FUN_10a4e799c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  int iVar1;
  long lVar2;
  float ****ppppfVar3;
  int iVar4;
  undefined **ppuVar5;
  float fVar6;
  float fVar7;
  float ***pppfStack_118;
  undefined8 uStack_110;
  long lStack_108;
  float ***pppfStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  double dStack_e0;
  long *plStack_80;
  char cStack_78;
  
  iVar4 = (int)param_3;
  if (iVar4 == 1) {
LAB_10a4e7a38:
    iVar4 = 0;
  }
  else if (iVar4 == 2) {
    iVar4 = 3;
  }
  else {
    if (iVar4 != 4) {
      func_0x00010ae02f4c(0,param_3);
      ppuVar5 = &PTR_PTR_113302650;
      FUN_10ae079a0();
      func_0x00010ae02f5c();
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_113302650);
      goto LAB_10a4e7a38;
    }
    iVar4 = 6;
  }
  iVar1 = 0x140;
  if (param_6 != 0) {
    iVar1 = param_6;
  }
  func_0x0001092df564(&ppuStack_e8,iVar1,iVar4);
  ppuStack_e8 = &PTR_DAT_110aea2d0;
  if (dStack_e0 != (double)param_7) {
    dStack_e0 = (double)param_7;
    func_0x0001092df660(&ppuStack_e8);
  }
  pppfStack_100 = (float ***)0x0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  if (iVar4 != 0) {
    if (iVar4 == 3) {
      func_0x0001092e0ddc(&pppfStack_118,&ppuStack_e8,param_4,param_5);
      goto LAB_10a4e7b14;
    }
    if (iVar4 == 6) {
      func_0x0001092e044c(&pppfStack_118,&ppuStack_e8,param_4,param_5,1);
      goto LAB_10a4e7b14;
    }
    func_0x00010ae02ecc(0,iVar4);
    ppuVar5 = &PTR_PTR_113302700;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113302700);
  }
  func_0x0001092df928(&pppfStack_118,&ppuStack_e8,param_4,param_5);
LAB_10a4e7b14:
  uStack_f8 = uStack_110;
  pppfStack_100 = pppfStack_118;
  lStack_f0 = lStack_108;
  if (*param_2 == 0) {
    lVar2 = 1;
    _calloc(1,0x80);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 8) = 0x3c23d70a3e800000;
    }
    *param_2 = lVar2;
  }
  ppppfVar3 = (float ****)pppfStack_100;
  if (-1 < lStack_f0) {
    ppppfVar3 = &pppfStack_100;
  }
  func_0x0001096ea4f8(0x43400000,ppppfVar3,"px");
  fVar6 = *(float *)ppppfVar3;
  fVar7 = *(float *)((long)ppppfVar3 + 4);
  lVar2 = 0x90;
  __Znwm();
  FUN_10a1b2a84();
  *param_1 = lVar2;
  func_0x0001096ec608(0,0,0x3f800000,*param_2,ppppfVar3,*(undefined8 *)(lVar2 + 0x28),(int)fVar6,
                      (int)fVar7,*(undefined4 *)(lVar2 + 0x18));
  func_0x0001096ec4d8(ppppfVar3);
  if (lStack_f0 < 0) {
    __ZdlPv(pppfStack_100);
  }
  ppuStack_e8 = &PTR_DAT_110aea290;
  if ((cStack_78 == '\x01') && (plStack_80 != (long *)0x0)) {
    (**(code **)(*plStack_80 + 0xe0))();
  }
  return;
}



/* Entry: 10a4e7ccc; end: 10a4e7fef;  */

/* WARNING: Removing unreachable block (ram,0x00010a4e7e8c) */
/* WARNING: Removing unreachable block (ram,0x00010a4e7e90) */
/* WARNING: Removing unreachable block (ram,0x00010a4e7e98) */
/* WARNING: Removing unreachable block (ram,0x00010a4e7ea0) */
/* WARNING: Removing unreachable block (ram,0x00010a4e7ea4) */

void FUN_10a4e7ccc(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 uStack_41;
  
  if (param_2 == 0) {
    return;
  }
  plVar9 = (long *)(param_1 + 8);
  lVar6 = *plVar9;
  if (lVar6 == 0) {
    bVar2 = *(byte *)(param_5 + 0x194);
joined_r0x00010a4e7d28:
    if ((bVar2 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4e7fbc);
      (*pcVar5)();
    }
  }
  else {
    bVar2 = *(byte *)(param_5 + 0x194);
    if (*(char *)(*(long *)(param_4 + 0x218) + 0x14) != *(char *)(lVar6 + 0x178) || bVar2 == 0)
    goto joined_r0x00010a4e7d28;
    uVar7 = *(ulong *)(lVar6 + 0x170);
    uVar8 = *(ulong *)(param_5 + 0x18c);
    if (((uVar7 & uVar8) >> 0x20 & 1) == 0) {
      if (((uVar8 ^ uVar7) >> 0x20 & 1) == 0) goto LAB_10a4e7db4;
    }
    else if ((float)uVar7 == (float)uVar8) goto LAB_10a4e7db4;
  }
  FUN_10a52b630(&uStack_160,*(undefined8 *)(param_5 + 0x18c));
  FUN_10a4e7820(plVar9,&uStack_160);
  if (plStack_158 != (long *)0x0) {
    plVar1 = plStack_158 + 1;
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
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
    }
  }
LAB_10a4e7db4:
  uStack_88 = *(undefined8 *)(param_4 + 0x1e0);
  uStack_90 = *(undefined8 *)(param_4 + 0x1d8);
  uStack_80 = *(undefined8 *)(param_4 + 0x1e8);
  uStack_78 = (undefined4)*(undefined8 *)(param_4 + 0x1f0);
  uStack_6c = *(undefined8 *)(param_4 + 0x1fc);
  uStack_74 = (undefined4)*(undefined8 *)(param_4 + 500);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_4 + 500) >> 0x20);
  uStack_c8 = *(undefined8 *)(param_4 + 0x1a0);
  uStack_d0 = *(undefined8 *)(param_4 + 0x198);
  uStack_b8 = *(undefined8 *)(param_4 + 0x1b0);
  uStack_c0 = *(undefined8 *)(param_4 + 0x1a8);
  uStack_a8 = *(undefined8 *)(param_4 + 0x1c0);
  uStack_b0 = *(undefined8 *)(param_4 + 0x1b8);
  uStack_98 = *(undefined8 *)(param_4 + 0x1d0);
  uStack_a0 = *(undefined8 *)(param_4 + 0x1c8);
  uStack_60 = *(undefined8 *)(param_4 + 0x208);
  plStack_58 = *(long **)(param_4 + 0x210);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a2288e0(&uStack_d0,*(undefined8 *)(param_2 + 0x10));
  *(undefined1 *)(*plVar9 + 0x1f0) = *(undefined1 *)(param_5 + 1);
  uStack_178 = *(undefined8 *)(param_2 + 0x10);
  uStack_180 = 0;
  FUN_10a2360c8(&uStack_170,&uStack_41,param_2,&uStack_180);
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_ec = uStack_6c;
  uStack_f4 = uStack_74;
  uStack_f0 = uStack_70;
  plStack_158 = plStack_168;
  uStack_160 = uStack_170;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  plStack_d8 = plStack_58;
  uStack_e0 = uStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a4e7ff0(&uStack_170,*plVar9,&uStack_160,(long)(*(double *)(param_4 + 0x20) * 1000000000.0));
  lVar6 = *(long *)(param_4 + 0xe0);
  *(undefined8 *)(param_4 + 0xe0) = uStack_170;
  if (lVar6 != 0) {
    func_0x00010a5026e4();
  }
  plVar9 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar1 = plStack_158 + 1;
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
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a4e7ff0; end: 10a4e8cd7;  */

undefined ** FUN_10a4e7ff0(long *param_1,undefined **param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong *puVar1;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  int iVar13;
  long lVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uStack_6c0;
  undefined **ppuStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined8 uStack_64c;
  undefined8 uStack_640;
  undefined **ppuStack_638;
  undefined8 uStack_630;
  undefined8 *puStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  ulong uStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined **ppuStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined4 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  float fStack_4b0;
  undefined4 uStack_4ac;
  undefined1 uStack_4a8;
  undefined *puStack_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [136];
  uint uStack_3a0;
  int iStack_39c;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_358;
  long lStack_340;
  byte bStack_330;
  undefined8 *puStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined **ppuStack_300;
  undefined8 uStack_2b8;
  long *plStack_208;
  byte bStack_1d0;
  char cStack_1b8;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  long *plStack_a8;
  char cStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar13 = (int)param_3 + 0x10;
  FUN_10a4cbc0c(param_2 + 5);
  ppuStack_320 = (undefined **)&UNK_10f65d517;
  ppuStack_318 = (undefined **)0x36;
  if (*(long *)param_2[5] == 0) {
    FUN_10a0edfc4(&ppuStack_320);
    goto LAB_10a4e8b44;
  }
  ppuStack_6b8 = (undefined **)param_3[1];
  uStack_6c0 = *param_3;
  if (param_3[1] != 0) {
    plVar9 = (long *)(param_3[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_668 = param_3[0xb];
  uStack_670 = param_3[10];
  uStack_660 = param_3[0xc];
  uStack_658 = (undefined4)param_3[0xd];
  uStack_64c = *(undefined8 *)((long)param_3 + 0x74);
  uStack_654 = (undefined4)*(undefined8 *)((long)param_3 + 0x6c);
  uStack_650 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x6c) >> 0x20);
  uStack_6a8 = param_3[3];
  uStack_6b0 = param_3[2];
  uStack_698 = param_3[5];
  uStack_6a0 = param_3[4];
  uStack_688 = param_3[7];
  uStack_690 = param_3[6];
  uStack_678 = param_3[9];
  uStack_680 = param_3[8];
  ppuStack_638 = (undefined **)param_3[0x11];
  uStack_640 = param_3[0x10];
  if (param_3[0x11] != 0) {
    plVar9 = (long *)(param_3[0x11] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_630 = param_4;
  if (((ulong)param_2[0x38] & 1) == 0) {
    iVar13 = (int)&uStack_6c0;
    FUN_10a4e910c(param_2);
  }
  if ((param_2[0x28] != (undefined *)0x0) &&
     (((uint)*(undefined8 *)(param_2[0x28] + 0x10) >> 1 & 1) != 0)) {
    func_0x0001092af8bc(param_2 + 0x28);
    if ((param_2[0x28][0x208] & 1) == 0) goto LAB_10a4e8b44;
    FUN_10a52be68(&ppuStack_320,param_2[0x28] + 0x98);
    plVar9 = (long *)param_2[0x28];
    param_2[0x28] = (undefined *)0x0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar16 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar16 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar16 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    iVar13 = (int)&ppuStack_320;
    FUN_10a52be68(&puStack_498);
    if (cStack_1b8 == '\x01') {
      FUN_10a4f96d8(&ppuStack_320);
    }
    if (bStack_330 != 1) goto LAB_10a4e8878;
    param_2[0x30] = puStack_498;
    *(undefined4 *)(param_2 + 0x31) = uStack_490;
    if (*(char *)(param_2 + 0x38) == '\x01') {
      if (*(char *)((long)param_2 + 0x1a7) < '\0') {
        __ZdlPv(param_2[0x32]);
      }
      param_2[0x33] = puStack_480;
      param_2[0x32] = puStack_488;
      param_2[0x34] = puStack_478;
      puStack_478 = (undefined *)((ulong)puStack_478 & 0xffffffffffffff);
      puStack_488 = (undefined *)((ulong)puStack_488 & 0xffffffffffffff00);
      if (param_2[0x35] != (undefined *)0x0) {
        param_2[0x36] = param_2[0x35];
        __ZdlPv();
        param_2[0x35] = (undefined *)0x0;
        param_2[0x36] = (undefined *)0x0;
        param_2[0x37] = (undefined *)0x0;
      }
      param_2[0x36] = puStack_468;
      param_2[0x35] = puStack_470;
      param_2[0x37] = puStack_460;
      puStack_468 = (undefined *)0x0;
      puStack_460 = (undefined *)0x0;
      puStack_470 = (undefined *)0x0;
      if (((ulong)param_2[0x38] & 1) == 0) goto LAB_10a4e8b44;
    }
    else {
      param_2[0x34] = puStack_478;
      param_2[0x36] = puStack_468;
      param_2[0x35] = puStack_470;
      param_2[0x33] = puStack_480;
      param_2[0x32] = puStack_488;
      puStack_488 = (undefined *)0x0;
      puStack_480 = (undefined *)0x0;
      param_2[0x37] = puStack_460;
      puStack_478 = (undefined *)0x0;
      *(undefined1 *)(param_2 + 0x38) = 1;
    }
    puStack_460 = (undefined *)0x0;
    puStack_468 = (undefined *)0x0;
    puStack_470 = (undefined *)0x0;
    fVar21 = 1.0;
    if (*(char *)((long)param_2 + 0x174) == '\x01') {
      fVar21 = *(float *)(param_2 + 0x2e);
    }
    ppuVar12 = param_2 + 3;
    ppuVar19 = (undefined **)*ppuVar12;
    ppuVar15 = ppuVar12;
    if (ppuVar19 == (undefined **)0x0) {
LAB_10a4e82cc:
      if ((bStack_330 & 1) == 0) goto LAB_10a4e8b44;
      puStack_628 = *(undefined8 **)(lStack_340 + 0x10);
      uStack_310 = 0;
      uStack_308 = 0;
      ppuStack_318 = (undefined **)0x0;
      ppuStack_320 = &PTR_DAT_110af6b80;
      func_0x000109496680(&ppuStack_320,&puStack_628);
      lVar14 = *(long *)(lStack_340 + 0x40);
      if (lVar14 == 0) {
        lVar14 = *(long *)(lStack_340 + 0x18) * (long)*(int *)(lStack_340 + 0x14);
      }
      _memcpy(ppuStack_318,*(undefined8 *)(lStack_340 + 0x28),lVar14);
      puVar11 = (undefined8 *)0x40;
      __Znwm();
      func_0x000109473664();
      *puVar11 = &PTR_DAT_110af6758;
      puVar11[4] = (double)(int)uStack_310;
      puVar11[5] = (double)uStack_310._4_4_;
      puVar11[6] = (double)fVar21 / (double)uStack_310._4_4_;
      *(undefined1 *)((long)puVar11 + 0x15) = 1;
      uVar20 = *(undefined8 *)param_2[5];
      plVar9 = (long *)0x20;
      puStack_628 = puVar11;
      __Znwm();
      *plVar9 = (long)&PTR_DAT_110af6c40;
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar9[3] = (long)puVar11;
      plStack_620 = plVar9;
      func_0x000109474b64(&uStack_5e0,uVar20,&puStack_628);
      plVar9 = plStack_620;
      if (plStack_620 != (long *)0x0) {
        plVar3 = plStack_620 + 1;
        do {
          lVar14 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_620 + 0x10))(plStack_620);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      ppuStack_320 = &PTR_DAT_110af6b80;
      if (ppuStack_318 != (undefined **)0x0) {
        __ZdaPv();
      }
      ppuVar15 = (undefined **)*ppuVar12;
      while (ppuVar19 = ppuVar12, ppuVar15 != (undefined **)0x0) {
        while( true ) {
          ppuVar12 = ppuVar15;
          ppuVar15 = param_2 + 0x35;
          FUN_10a10b984(ppuVar15,ppuVar12 + 4);
          if ((char)ppuVar15 < '\0') break;
          ppuVar15 = ppuVar12 + 4;
          FUN_10a10b984(ppuVar15,param_2 + 0x35);
          if (-1 < (char)ppuVar15) {
            ppuVar15 = (undefined **)*ppuVar19;
            if (ppuVar15 != (undefined **)0x0) goto LAB_10a4e84d8;
            goto LAB_10a4e844c;
          }
          ppuVar19 = ppuVar12 + 1;
          ppuVar15 = (undefined **)*ppuVar19;
          if ((undefined **)*ppuVar19 == (undefined **)0x0) goto LAB_10a4e844c;
        }
        ppuVar15 = (undefined **)*ppuVar12;
      }
LAB_10a4e844c:
      puVar17 = param_2[0x35];
      puVar4 = param_2[0x36];
      ppuVar15 = (undefined **)0x50;
      __Znwm();
      ppuVar10 = param_2 + 2;
      uStack_310 = 0;
      ppuVar15[5] = (undefined *)0x0;
      ppuVar15[6] = (undefined *)0x0;
      ppuVar15[4] = (undefined *)0x0;
      ppuStack_320 = ppuVar15;
      ppuStack_318 = ppuVar10;
      FUN_10a05151c(ppuVar15 + 4,puVar17,puVar4,(long)puVar4 - (long)puVar17);
      ppuVar15[8] = puStack_5d8;
      ppuVar15[7] = uStack_5e0;
      ppuVar15[9] = puStack_5d0;
      puStack_5d8 = (undefined *)0x0;
      puStack_5d0 = (undefined *)0x0;
      uStack_5e0 = (undefined *)0x0;
      *ppuVar15 = (undefined *)0x0;
      ppuVar15[1] = (undefined *)0x0;
      ppuVar15[2] = (undefined *)ppuVar12;
      *ppuVar19 = (undefined *)ppuVar15;
      if (*(undefined **)*ppuVar10 != (undefined *)0x0) {
        *ppuVar10 = *(undefined **)*ppuVar10;
        ppuVar15 = (undefined **)*ppuVar19;
      }
      func_0x000107c2b058(param_2[3],ppuVar15);
      param_2[4] = param_2[4] + 1;
      ppuVar15 = ppuStack_320;
LAB_10a4e84d8:
      if ((long)puStack_5d0 < 0) {
        __ZdlPv(uStack_5e0);
      }
      if (*(char *)((long)ppuVar15 + 0x4f) < '\0') {
        func_0x000107c3192c(&ppuStack_560,ppuVar15[7],ppuVar15[8]);
      }
      else {
        puStack_558 = ppuVar15[8];
        ppuStack_560 = (undefined **)ppuVar15[7];
        puStack_550 = ppuVar15[9];
      }
      uStack_540 = 0;
      uStack_548 = 0;
      uStack_530 = 0;
      uStack_538 = 0;
      uStack_528 = 0x3f800000;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_500 = 0x3f800000;
      ppuStack_320 = (undefined **)0x3f847ae147ae147b;
      lStack_4f0 = 0;
      uStack_4e8 = 0;
      lStack_4f8 = 0;
      FUN_10a0cf024(&lStack_4f8,&ppuStack_320,&ppuStack_318,1);
      lStack_4d8 = 0;
      lStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      lStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      fStack_4b0 = fVar21;
      FUN_10a50424c(param_2 + 0x2b,&ppuStack_560,&ppuStack_560);
      if (lStack_4b8 < 0) {
        __ZdlPv(uStack_4c8);
      }
      if (lStack_4e0 != 0) {
        lStack_4d8 = lStack_4e0;
        __ZdlPv();
      }
      if (lStack_4f8 != 0) {
        lStack_4f0 = lStack_4f8;
        __ZdlPv();
      }
      func_0x00010a22de78(&uStack_520);
      func_0x000107c2826c(&uStack_548);
      if ((long)puStack_550 < 0) {
        __ZdlPv(ppuStack_560);
      }
    }
    else {
      do {
        ppuVar10 = ppuVar19 + 4;
        FUN_10a10b984(ppuVar10,param_2 + 0x35);
        if (-1 < (char)ppuVar10) {
          ppuVar15 = ppuVar19;
        }
        ppuVar19 = *(undefined ***)((long)ppuVar19 + ((ulong)((uint)(int)(char)ppuVar10 >> 4) & 8));
      } while (ppuVar19 != (undefined **)0x0);
      if (ppuVar15 == ppuVar12) goto LAB_10a4e82cc;
      ppuVar19 = param_2 + 0x35;
      FUN_10a10b984(ppuVar19,ppuVar15 + 4);
      if ((char)ppuVar19 < '\0') goto LAB_10a4e82cc;
    }
    if ((bStack_330 & 1) == 0) {
LAB_10a4e8b44:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4e8b48);
      (*pcVar7)();
    }
    uStack_5e0 = (undefined *)CONCAT44(iStack_39c,uStack_3a0);
    puStack_5d8 = puStack_398;
    uStack_5c8 = uStack_388;
    puStack_5d0 = puStack_390;
    uStack_5a0 = (ulong)&uStack_5e0 | 8;
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_5b0 = uStack_370;
    lStack_5a8 = lStack_368;
    uStack_590 = 0;
    uStack_588 = 0;
    if (lStack_368 != 0) {
      piVar2 = (int *)(lStack_368 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_598 = &uStack_590;
    if (iStack_39c < 3) {
      uStack_590 = *puStack_358;
      uStack_588 = puStack_358[1];
    }
    else {
      uStack_5e0 = (undefined *)(ulong)uStack_3a0;
      func_0x000109a84868(&uStack_5e0,&uStack_3a0);
    }
    if (*(char *)((long)ppuVar15 + 0x4f) < '\0') {
      func_0x000107c3192c(&puStack_580,ppuVar15[7],ppuVar15[8]);
    }
    else {
      puStack_578 = ppuVar15[8];
      puStack_580 = ppuVar15[7];
      puStack_570 = ppuVar15[9];
    }
    puVar11 = (undefined8 *)0x90;
    __Znwm();
    if (((bStack_330 & 1) == 0) ||
       (FUN_10a4e8d10(&ppuStack_320,param_2,auStack_438), (bStack_330 & 1) == 0))
    goto LAB_10a4e8b44;
    ppuVar15 = param_2 + 5;
    FUN_10a4cbd0c(&puStack_628,ppuVar15,&ppuStack_320,param_2 + 0x2b,auStack_428,&uStack_5e0);
    iVar13 = (int)ppuVar15;
    puVar11[1] = plStack_620;
    *puVar11 = puStack_628;
    puVar11[3] = uStack_610;
    puVar11[2] = uStack_618;
    puStack_328 = &uStack_5f8;
    puVar11[5] = uStack_600;
    puVar11[4] = uStack_608;
    puVar11[7] = uStack_5f0;
    puVar11[6] = uStack_5f8;
    puVar11[8] = uStack_5e8;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    *(undefined1 *)(puVar11 + 9) = 0;
    *(undefined1 *)(puVar11 + 0x11) = 0;
    func_0x00010a4f03b4(&puStack_328);
    plVar9 = plStack_a8;
    if ((cStack_a0 == '\x01') && (plStack_a8 != (long *)0x0)) {
      plVar3 = plStack_a8 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (lStack_118 != 0) {
      lStack_110 = lStack_118;
      __ZdlPv();
    }
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    plVar9 = plStack_208;
    if (plStack_208 != (long *)0x0) {
      plVar3 = plStack_208 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_208 + 0x10))(plStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    _free(uStack_2b8);
    if ((long)puStack_570 < 0) {
      __ZdlPv(puStack_580);
    }
    if (lStack_5a8 != 0) {
      piVar2 = (int *)(lStack_5a8 + 0x14);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_5e0);
      }
    }
    lStack_5a8 = 0;
    uStack_5c8 = 0;
    puStack_5d0 = (undefined *)0x0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    if (0 < uStack_5e0._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_5a0 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_5e0._4_4_);
    }
    if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
      _free(puStack_598[-1]);
    }
    if ((bStack_330 & 1) != 0) {
      FUN_10a4f96d8(&puStack_498);
    }
    func_0x00010a5026e4(puVar11);
  }
LAB_10a4e8878:
  if (((ulong)param_2[0x38] & 1) == 0) {
    *param_1 = 0;
  }
  else {
    plVar9 = (long *)0x90;
    __Znwm();
    FUN_10a4e8d10(&ppuStack_320,param_2,&uStack_6c0);
    ppuVar15 = param_2 + 5;
    FUN_10a4cbd0c(&puStack_498,ppuVar15,&ppuStack_320,param_2 + 0x2b,&uStack_6b0,0);
    iVar13 = (int)ppuVar15;
    plVar9[1] = CONCAT44(uStack_48c,uStack_490);
    *plVar9 = (long)puStack_498;
    plVar9[3] = (long)puStack_480;
    plVar9[2] = (long)puStack_488;
    ppuStack_560 = &puStack_468;
    plVar9[5] = (long)puStack_470;
    plVar9[4] = (long)puStack_478;
    plVar9[7] = (long)puStack_460;
    plVar9[6] = (long)puStack_468;
    plVar9[8] = lStack_458;
    puStack_468 = (undefined *)0x0;
    puStack_460 = (undefined *)0x0;
    lStack_458 = 0;
    *(undefined1 *)(plVar9 + 9) = 0;
    *(undefined1 *)(plVar9 + 0x11) = 0;
    func_0x00010a4f03b4(&ppuStack_560);
    if ((cStack_a0 == '\x01') && (plStack_a8 != (long *)0x0)) {
      plVar3 = plStack_a8 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
    if (lStack_118 != 0) {
      lStack_110 = lStack_118;
      __ZdlPv();
    }
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    if (plStack_208 != (long *)0x0) {
      plVar3 = plStack_208 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_208 + 0x10))(plStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
      }
    }
    _free(uStack_2b8);
    iVar8 = (int)param_2[5];
    FUN_10a4cb850();
    if (iVar8 == 0) {
      if (*(char *)(param_2 + 0x38) == '\x01') {
        if (param_2[0x35] != (undefined *)0x0) {
          param_2[0x36] = param_2[0x35];
          __ZdlPv();
        }
        if (*(char *)((long)param_2 + 0x1a7) < '\0') {
          __ZdlPv(param_2[0x32]);
        }
        *(undefined1 *)(param_2 + 0x38) = 0;
      }
      *param_1 = 0;
      func_0x00010a5026e4(plVar9);
    }
    else {
      *param_1 = (long)plVar9;
    }
  }
  puVar18 = (undefined8 *)param_2[5];
  puVar11 = puVar18;
  FUN_10a4cb850();
  if ((int)puVar11 != 0) {
    ppuVar15 = (undefined **)*puVar18;
    func_0x000109476718(&ppuStack_320,ppuVar15);
    if (ppuStack_300 != (undefined **)0x0) {
      ppuVar12 = ppuStack_300 + 1;
      do {
        puVar17 = *ppuVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar6) {
          *ppuVar12 = puVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuStack_300 + 0x10))(ppuStack_300);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_300);
        ppuVar15 = ppuStack_300;
      }
    }
    if (uStack_310 < 0) {
      ppuVar15 = ppuStack_320;
      __ZdlPv(ppuStack_320);
    }
    if ((bStack_1d0 & 1) != 0) goto LAB_10a4e8a84;
  }
  iVar13 = (int)&uStack_6c0;
  FUN_10a4e910c(param_2);
  ppuVar15 = param_2;
LAB_10a4e8a84:
  ppuVar12 = ppuStack_638;
  if (ppuStack_638 != (undefined **)0x0) {
    ppuVar19 = ppuStack_638 + 1;
    do {
      puVar17 = *ppuVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar6) {
        *ppuVar19 = puVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_638 + 0x10))(ppuStack_638);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      ppuVar15 = ppuVar12;
    }
  }
  ppuVar12 = ppuStack_6b8;
  if (ppuStack_6b8 != (undefined **)0x0) {
    ppuVar19 = ppuStack_6b8 + 1;
    do {
      puVar17 = *ppuVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar6) {
        *ppuVar19 = puVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_6b8 + 0x10))(ppuStack_6b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      ppuVar15 = ppuVar12;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  if (iVar13 != 0) {
    func_0x000104bd46a0(ppuVar15);
    func_0x00010567aa40(&uStack_5e0);
    if (bStack_330 == 1) {
      FUN_10a4f96d8(&puStack_498);
    }
    func_0x00010a042d30(&uStack_640);
    func_0x00010a136de4(&uStack_6c0);
  }
  __Unwind_Resume(ppuVar15);
  plVar9 = (long *)0x21c00000002;
  if (iRam00000001132ffd98 != 1) {
    plVar9 = (long *)0x2d000000002;
  }
  plVar3 = (long *)0x16800000002;
  if (iRam00000001132ffd98 != 0) {
    plVar3 = plVar9;
  }
  return (undefined **)plVar3;
}



/* Entry: 10a4e8cd8; end: 10a4e8d0f;  */

undefined8 FUN_10a4e8cd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x21c00000002;
  if (iRam00000001132ffd98 != 1) {
    uVar2 = 0x2d000000002;
  }
  uVar1 = 0x16800000002;
  if (iRam00000001132ffd98 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10a4e8d10; end: 10a4e905f;  */

long * FUN_10a4e8d10(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_3;
  iVar2 = *(int *)(lVar8 + 0x24);
  if ((*(char *)(param_2 + 0x288) == '\x01') && (*(int *)(param_2 + 0x280) == iVar2)) {
    puStack_d0 = *(undefined8 **)(param_2 + 0x270);
  }
  else {
    FUN_10a1b498c(&puStack_d0,iVar2,7);
    if (*(char *)(param_2 + 0x288) == '\x01') {
      func_0x00010a1bb0e8((undefined8 *)(param_2 + 0x270));
    }
    *(undefined8 *)(param_2 + 0x278) = uStack_c8;
    *(undefined8 **)(param_2 + 0x270) = puStack_d0;
    *(int *)(param_2 + 0x280) = iVar2;
    *(undefined1 *)(param_2 + 0x288) = 1;
    lVar8 = *param_3;
  }
  uStack_f0 = (ulong)uStack_f0._4_4_ << 0x20;
  puVar9 = (undefined8 *)*puStack_d0;
  puVar5 = puStack_d0;
  puStack_d0 = *(undefined8 **)(lVar8 + 0x10);
  (*(code *)*puVar9)(&plStack_e0,puVar5,lVar8,&uStack_f0,&puStack_d0);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3ff0000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x49] = 0x403e000000000000;
  param_1[0x4a] = 0x403e000000000000;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_10acdd07c(&puStack_d0,param_3 + 2);
  plVar7 = plStack_d8;
  lVar11 = plStack_e0[5];
  lVar8 = plStack_e0[2];
  lVar10 = plStack_e0[3];
  plStack_100 = plStack_e0;
  plStack_f8 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)0x78;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110bea0c0;
  plVar6[4] = lVar11;
  plVar6[5] = lVar8;
  plStack_100 = plVar6 + 3;
  *plStack_100 = (long)&PTR_DAT_110bea130;
  *(int *)(plVar6 + 6) = (int)lVar10;
  plVar6[7] = (long)FUN_10a52e544;
  plVar6[8] = (long)&PTR_DAT_110bee8e8;
  plVar6[9] = (long)plStack_e0;
  plVar6[10] = (long)plVar7;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plStack_f8 = plVar6;
  func_0x000109452cd0((double)param_3[0x12] / 1000000000.0,param_1,&puStack_d0,&plStack_100,0);
  plVar7 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar6 = plStack_f8 + 1;
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
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar6 = plStack_e8 + 1;
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
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_78;
  _free();
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      plVar7 = plStack_d8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010a502068(&plStack_100);
  FUN_10a504680(&uStack_f0);
  _free(plStack_78);
  func_0x000109458ce0(plStack_d8);
  func_0x00010a136de4(&plStack_e0);
  __Unwind_Resume();
  if (*(char *)((long)plVar7 + 0x77) < '\0') {
    __ZdlPv(plVar7[0xc]);
  }
  if (plVar7[7] != 0) {
    piVar1 = (int *)(plVar7[7] + 0x14);
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
      func_0x000109a848d4(plVar7);
    }
  }
  plVar7[7] = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  if (0 < *(int *)((long)plVar7 + 4)) {
    lVar8 = 0;
    lVar10 = plVar7[8];
    do {
      *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)plVar7 + 4));
  }
  plVar6 = (long *)plVar7[9];
  if (plVar6 != plVar7 + 10 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  return plVar7;
}



/* Entry: 10a4e9060; end: 10a4e910b;  */

long FUN_10a4e9060(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a4e910c; end: 10a4e97e3;  */

void FUN_10a4e910c(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined **ppuVar16;
  long *plVar17;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  undefined **ppuStack_70;
  
  if (param_1[0x28] == 0) {
    puVar12 = param_1;
    if (param_1[0x3a] != param_1[0x3b]) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      iVar4 = *(int *)(param_1 + 0x3d);
      uVar14 = ((long)(param_1[0x3b] - param_1[0x3a]) >> 3) * -0x5555555555555555;
      if (uVar14 < (ulong)(long)iVar4 || uVar14 - (long)iVar4 == 0) goto LAB_10a4e979c;
      if ((long)puVar12 - param_1[0x39] <
          *(long *)(param_1[0x3a] + (long)iVar4 * 0x18 + 8) * 1000000) {
        return;
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_1[0x39] = puVar12;
    iVar4 = *(int *)(param_1 + 0x3d);
    uVar14 = ((long)(param_1[0x3b] - param_1[0x3a]) >> 3) * -0x5555555555555555;
    if (uVar14 < (ulong)(long)iVar4 || uVar14 - (long)iVar4 == 0) {
LAB_10a4e979c:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a4e97a0);
      (*pcVar10)();
    }
    ppuVar16 = *(undefined ***)(param_1[0x3a] + (long)iVar4 * 0x18 + 0x10);
    plVar15 = (long *)param_2[1];
    plStack_138 = (long *)param_2[1];
    uStack_140 = *param_2;
    if (plVar15 != (long *)0x0) {
      plVar11 = plVar15 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_e8 = param_2[0xb];
    uStack_f0 = param_2[10];
    uStack_e0 = param_2[0xc];
    uStack_d8 = (undefined4)param_2[0xd];
    uStack_cc = *(undefined8 *)((long)param_2 + 0x74);
    uStack_d4 = (undefined4)*(undefined8 *)((long)param_2 + 0x6c);
    uStack_d0 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x6c) >> 0x20);
    uStack_128 = param_2[3];
    uStack_130 = param_2[2];
    uStack_118 = param_2[5];
    uStack_120 = param_2[4];
    uStack_108 = param_2[7];
    uStack_110 = param_2[6];
    uStack_f8 = param_2[9];
    uStack_100 = param_2[8];
    plStack_b8 = (long *)param_2[0x11];
    uStack_c0 = param_2[0x10];
    if (param_2[0x11] != 0) {
      plVar11 = (long *)(param_2[0x11] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_b0 = param_2[0x12];
    plVar11 = (long *)*param_2;
    (**(code **)(*plVar11 + 0x40))(plVar11,1);
    FUN_10a1b9b14(&uStack_1f0,plVar11);
    plStack_138 = plStack_1e8;
    uStack_140 = uStack_1f0;
    uStack_1f0 = 0;
    plStack_1e8 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar11 = plVar15 + 1;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      plVar11 = plStack_1e8 + 1;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    uVar9 = uStack_b0;
    plVar11 = plStack_b8;
    uVar8 = uStack_c0;
    plVar15 = plStack_138;
    uVar7 = uStack_140;
    uVar3 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 != 0) {
      plVar17 = (long *)(lVar13 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_1e0 = uStack_140;
    plStack_1d8 = plStack_138;
    uStack_140 = 0;
    plStack_138 = (long *)0x0;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_16c = uStack_cc;
    uStack_174 = uStack_d4;
    uStack_170 = uStack_d0;
    uStack_1c8 = uStack_128;
    uStack_1d0 = uStack_130;
    uStack_1b8 = uStack_118;
    uStack_1c0 = uStack_120;
    uStack_1a8 = uStack_108;
    uStack_1b0 = uStack_110;
    uStack_198 = uStack_f8;
    uStack_1a0 = uStack_100;
    uStack_160 = uStack_c0;
    plStack_158 = plStack_b8;
    uStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    uStack_150 = uStack_b0;
    ppuVar2 = &PTR_PTR_1132fed50;
    if (*(char *)(param_1 + 0x3e) != '\0') {
      ppuVar2 = ppuVar16;
    }
    plVar17 = (long *)ppuVar2[2];
    plStack_98 = (long *)0x0;
    puStack_90 = (undefined8 *)0x0;
    if (plVar17 == (long *)0x0) {
      plStack_1e8 = (long *)0x0;
      uStack_1f0 = 0;
      plStack_1d8 = (long *)0x0;
      uStack_1e0 = 0;
      uStack_160 = 0;
      plStack_158 = (long *)0x0;
      puVar12 = (undefined8 *)0x2d0;
      __Znwm();
      puVar12[2] = 0;
      puVar12[1] = 0x200000006;
      *(undefined2 *)(puVar12 + 3) = 4;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[0xf] = 0;
      puVar12[0xe] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = puVar12 + 3;
      puVar12[0x12] = 0;
      *(undefined1 *)(puVar12 + 0x13) = 0;
      *(undefined1 *)(puVar12 + 0x41) = 0;
      *puVar12 = &PTR_DAT_110bee8c0;
      puStack_a0 = puVar12 + 0x42;
      puVar12[0x42] = uVar3;
      puVar12[0x43] = lVar13;
      puVar12[0x44] = uVar7;
      puVar12[0x45] = plVar15;
      puVar12[0x4f] = uStack_e8;
      puVar12[0x4e] = uStack_f0;
      puVar12[0x51] = CONCAT44(uStack_d4,uStack_d8);
      puVar12[0x50] = uStack_e0;
      *(undefined8 *)((long)puVar12 + 0x294) = uStack_cc;
      *(ulong *)((long)puVar12 + 0x28c) = CONCAT44(uStack_d0,uStack_d4);
      puVar12[0x47] = uStack_128;
      puVar12[0x46] = uStack_130;
      puVar12[0x49] = uStack_118;
      puVar12[0x48] = uStack_120;
      puVar12[0x4b] = uStack_108;
      puVar12[0x4a] = uStack_110;
      puVar12[0x4d] = uStack_f8;
      puVar12[0x4c] = uStack_100;
      puVar12[0x54] = uVar8;
      puVar12[0x55] = plVar11;
      puVar12[0x56] = uVar9;
      *(undefined1 *)(puVar12 + 0x58) = 1;
      puVar12[0x59] = 0;
      pcStack_88 = FUN_10a52c08c;
      plStack_98 = puVar12;
      puStack_90 = puVar12;
    }
    else {
      pcStack_80 = (code *)0x0;
      uStack_1f0 = uVar3;
      plStack_1e8 = (long *)lVar13;
      (**(code **)(*plVar17 + 0x28))(plVar17,0,&pcStack_80);
      if (pcStack_80 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_80);
        goto LAB_10a4e979c;
      }
      plStack_1e8 = (long *)0x0;
      uStack_1f0 = 0;
      plStack_1d8 = (long *)0x0;
      uStack_1e0 = 0;
      uStack_160 = 0;
      plStack_158 = (long *)0x0;
      puVar12 = (undefined8 *)0x2d8;
      __Znwm();
      puVar12[2] = 0;
      puVar12[1] = 0x200000006;
      *(undefined2 *)(puVar12 + 3) = 4;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[0xf] = 0;
      puVar12[0xe] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = puVar12 + 3;
      puVar12[0x12] = 0;
      *(undefined1 *)(puVar12 + 0x13) = 0;
      *(undefined1 *)(puVar12 + 0x41) = 0;
      *puVar12 = &PTR_FUN_110bee850;
      puVar12[0x42] = uVar3;
      puVar12[0x43] = lVar13;
      puVar12[0x44] = uVar7;
      puVar12[0x45] = plVar15;
      puVar12[0x4f] = uStack_e8;
      puVar12[0x4e] = uStack_f0;
      puVar12[0x51] = CONCAT44(uStack_d4,uStack_d8);
      puVar12[0x50] = uStack_e0;
      *(undefined8 *)((long)puVar12 + 0x294) = uStack_cc;
      *(ulong *)((long)puVar12 + 0x28c) = CONCAT44(uStack_d0,uStack_d4);
      puVar12[0x47] = uStack_128;
      puVar12[0x46] = uStack_130;
      puVar12[0x49] = uStack_118;
      puVar12[0x48] = uStack_120;
      puVar12[0x4b] = uStack_108;
      puVar12[0x4a] = uStack_110;
      puVar12[0x4d] = uStack_f8;
      puVar12[0x4c] = uStack_100;
      puVar12[0x54] = uVar8;
      puVar12[0x55] = plVar11;
      puVar12[0x56] = uVar9;
      *(undefined1 *)(puVar12 + 0x58) = 1;
      puVar12[0x59] = 0;
      puVar12[0x5a] = plVar17;
      if (plStack_98 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_98 + 1);
        do {
          uVar14 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar14 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
      plStack_98 = puVar12;
      if (puStack_90 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_90);
      }
      pcStack_88 = (code *)0x10a52c05c;
      puStack_a0 = puVar12 + 0x42;
      puStack_90 = puVar12;
      __ZNSt13exception_ptrD1Ev(&pcStack_80);
    }
    puVar12 = puStack_a0;
    if (puStack_a0[0x17] != 0) {
      func_0x0001092b4274();
    }
    puVar12[0x17] = puStack_90;
    puStack_90 = (undefined8 *)0x0;
    pcStack_80 = pcStack_88;
    puStack_78 = puStack_a0;
    ppuStack_70 = ppuVar2;
    (**(code **)*ppuVar2)(ppuVar2,&pcStack_80);
    plVar15 = plStack_98;
    plStack_98 = (long *)0x0;
    if ((puStack_90 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_90), plStack_98 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_98 + 1);
      do {
        uVar14 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar14 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_98 + 8))();
        }
      }
    }
    plVar11 = (long *)param_1[0x28];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar14 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar14 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = plStack_158;
    param_1[0x28] = plVar15;
    if (plStack_158 != (long *)0x0) {
      plVar15 = plStack_158 + 1;
      do {
        lVar13 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar15 = plStack_1d8;
    if (plStack_1d8 != (long *)0x0) {
      plVar11 = plStack_1d8 + 1;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    if (plStack_1e8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar15 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar11 = plStack_138 + 1;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  return;
}



/* Entry: 10a4e97e4; end: 10a4e98e3;  */

ulong FUN_10a4e97e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  uVar2 = 0;
  if ((lVar1 != 0) &&
     ((*(long *)(lVar1 + 0x28) != *(long *)(lVar1 + 0x30) ||
      (uVar2 = 0, *(long *)(lVar1 + 0x58) != 0)))) {
    uVar2 = 1;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar2 = uVar2 | 0x800;
  }
  uVar2 = uVar2 | (ulong)*(byte *)(param_1 + 0x100) << 0xc;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = uVar2 | 8;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar2 = uVar2 | 0x80000000;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar2 = uVar2 | 0x40000000;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar2 = uVar2 | 0x10000000;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar2 = uVar2 | 0x4000000;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar2 = uVar2 | 0x20000;
  }
  if (*(long *)(*(long *)(param_1 + 0x118) + 0x10) != *(long *)(*(long *)(param_1 + 0x118) + 0x18))
  {
    uVar2 = uVar2 | 0x40000;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    uVar2 = uVar2 | 0x100000;
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    uVar2 = uVar2 | 0x400000000;
  }
  return uVar2;
}



/* Entry: 10a4e98e4; end: 10a4e993b;  */

void FUN_10a4e98e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bee918;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_DAT_110c434e0;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10a4e993c; end: 10a4e99c3;  */

void FUN_10a4e993c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bee988;
  puVar1[3] = &PTR_DAT_110c6d5a8;
  puVar1[4] = 0;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar1[4] = puVar2;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4e99c4; end: 10a4e9a1b;  */

void FUN_10a4e99c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110bee9f8;
  FUN_10ace7c6c();
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4e9a1c; end: 10a4e9a73;  */

void FUN_10a4e9a1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110beea68;
  FUN_10ace8b28();
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4e9a74; end: 10a4e9aff;  */

void FUN_10a4e9a74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110beead8;
  puVar1[3] = &PTR_FUN_110be7588;
  puVar1[5] = 0;
  puVar1[6] = 0;
  FUN_10aad3518(puVar1 + 7);
  *(undefined1 *)(puVar1 + 9) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4e9b00; end: 10a4e9c47;  */

void FUN_10a4e9b00(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
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
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65d54e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a4e9bf0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65d55f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a4e9c48(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65d567;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a4e9c48(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a4e9c48; end: 10a4e9c9f;  */

ulong FUN_10a4e9c48(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a52ec78(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a4e9ca0; end: 10a4ea897;  */

void FUN_10a4e9ca0(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong *****pppppuVar7;
  ulong ****ppppuVar8;
  undefined8 **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong ***pppuVar15;
  long lVar16;
  ulong *****pppppuVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong ****ppppuVar27;
  ulong *****unaff_x24;
  ulong *****pppppuVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long *plVar31;
  long *plVar32;
  undefined8 uVar33;
  ulong ****ppppuStack_180;
  ulong ****ppppuStack_178;
  ulong ***pppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 *puStack_158;
  int iStack_14c;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong ****ppppuStack_100;
  ulong ****ppppuStack_f8;
  ulong ****ppppuStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_e0;
  long lStack_d8;
  ulong ****ppppuStack_d0;
  ulong ****ppppuStack_c8;
  ulong ****ppppuStack_c0;
  ulong ****ppppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  ppppuStack_d0 = (ulong ****)0x0;
  ppppuStack_c8 = (ulong ****)0x0;
  ppppuStack_c0 = (ulong ****)0x0;
  pppppuVar7 = (ulong *****)param_1[7];
  if (pppppuVar7 != (ulong *****)0x0) {
    if ((ulong)pppppuVar7 >> 0x3c != 0) {
      FUN_10a4facd0();
LAB_10a4ea7cc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4ea7d0);
      (*pcVar5)();
    }
    ppppuStack_e0 = (ulong ****)&ppppuStack_d0;
    lVar16 = param_2;
    FUN_10a4face4();
    pppppuVar28 = (ulong *****)((long)pppppuVar7 - ((long)ppppuStack_c8 - (long)ppppuStack_d0));
    _memcpy(pppppuVar28);
    ppppuStack_f0 = ppppuStack_d0;
    ppppuStack_e8 = ppppuStack_c0;
    ppppuStack_100 = ppppuStack_d0;
    ppppuStack_f8 = ppppuStack_d0;
    ppppuStack_d0 = (ulong ****)pppppuVar28;
    ppppuStack_c8 = (ulong ****)pppppuVar7;
    ppppuStack_c0 = (ulong ****)(pppppuVar7 + lVar16 * 2);
    func_0x00010a4fad18(&ppppuStack_100);
  }
  plVar32 = (long *)param_1[5];
  if (plVar32 == param_1 + 6) {
    uVar25 = 0;
  }
  else {
    uVar25 = 0;
    do {
      ppppuVar8 = (ulong ****)plVar32[5];
      if ((ppppuVar8 != (ulong ****)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_170 = (ulong ***)ppppuVar8,
         ppppuVar8 != (ulong ****)0x0)) {
        pppppuVar7 = (ulong *****)plVar32[4];
        ppppuStack_178 = (ulong ****)pppppuVar7;
        if (pppppuVar7 == (ulong *****)0x0) {
          ppppuVar27 = ppppuVar8 + 1;
          do {
            pppuVar15 = *ppppuVar27;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppuVar27,0x10);
            if (bVar6) {
              *ppppuVar27 = (ulong ***)((long)pppuVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppuVar15 == (ulong ***)0x0) {
            (*(code *)(*ppppuVar8)[2])(ppppuVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar8);
          }
        }
        else {
          pppppuVar28 = pppppuVar7;
          lVar16 = param_5;
          (*(code *)(*pppppuVar7)[0xd])(pppppuVar7,param_5,param_3);
          if (ppppuStack_c8 < ppppuStack_c0) {
            *ppppuStack_c8 = (ulong ***)pppppuVar7;
            ppppuStack_c8[1] = (ulong ***)ppppuVar8;
            pppppuVar7 = (ulong *****)(ppppuStack_c8 + 2);
          }
          else {
            lVar26 = (long)ppppuStack_c8 - (long)ppppuStack_d0;
            uVar19 = (lVar26 >> 4) + 1;
            if (uVar19 >> 0x3c != 0) {
              FUN_10a4facd0();
              goto LAB_10a4ea7cc;
            }
            uVar13 = (long)ppppuStack_c0 - (long)ppppuStack_d0 >> 3;
            if (uVar13 <= uVar19) {
              uVar13 = uVar19;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppppuStack_c0 - (long)ppppuStack_d0)) {
              uVar13 = 0xfffffffffffffff;
            }
            ppppuStack_e0 = (ulong ****)&ppppuStack_d0;
            FUN_10a4face4();
            puVar29 = (undefined8 *)(uVar13 + lVar26);
            unaff_x24 = (ulong *****)(uVar13 + lVar16 * 0x10);
            *puVar29 = pppppuVar7;
            puVar29[1] = ppppuVar8;
            ppppuStack_178 = (ulong ****)0x0;
            pppuStack_170 = (ulong ***)0x0;
            pppppuVar7 = (ulong *****)(puVar29 + 2);
            pppppuVar17 = (ulong *****)((long)puVar29 - ((long)ppppuStack_c8 - (long)ppppuStack_d0))
            ;
            _memcpy(pppppuVar17);
            ppppuStack_f0 = ppppuStack_d0;
            ppppuStack_e8 = ppppuStack_c0;
            ppppuStack_100 = ppppuStack_d0;
            ppppuStack_f8 = ppppuStack_d0;
            ppppuStack_d0 = (ulong ****)pppppuVar17;
            ppppuStack_c8 = (ulong ****)pppppuVar7;
            ppppuStack_c0 = (ulong ****)unaff_x24;
            func_0x00010a4fad18(&ppppuStack_100);
          }
          uVar25 = (ulong)pppppuVar28 | uVar25;
          ppppuStack_c8 = (ulong ****)pppppuVar7;
        }
      }
      plVar4 = (long *)plVar32[1];
      plVar31 = plVar32;
      if ((long *)plVar32[1] == (long *)0x0) {
        do {
          plVar32 = (long *)plVar31[2];
          bVar6 = (long *)*plVar32 != plVar31;
          plVar31 = plVar32;
        } while (bVar6);
      }
      else {
        do {
          plVar32 = plVar4;
          plVar4 = (long *)*plVar32;
        } while ((long *)*plVar32 != (long *)0x0);
      }
    } while (plVar32 != param_1 + 6);
  }
  uVar19 = param_1[4];
  param_1[4] = param_2;
  param_1[0x61] = param_2;
  ppppuStack_e8 = (ulong ****)0x0;
  ppppuStack_f0 = (ulong ****)0x0;
  lStack_d8 = 0;
  ppppuStack_e0 = (ulong ****)0x0;
  ppppuStack_f8 = (ulong ****)0x0;
  ppppuStack_100 = (ulong ****)0x0;
  ppuStack_168 = &puStack_118;
  puStack_118 = &uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  ppuStack_160 = &puStack_130;
  uStack_128 = 0;
  ppppuStack_140 = (ulong ****)0x0;
  lStack_138 = 0;
  iStack_14c = 0;
  ppppuStack_178 = (ulong ****)&ppppuStack_100;
  pppuStack_170 = (ulong ***)&iStack_14c;
  puStack_158 = param_1;
  ppppuStack_148 = (ulong ****)&ppppuStack_140;
  puStack_130 = &uStack_128;
  FUN_10a4ea898(&ppppuStack_178);
  if (lStack_d8 != 0) {
    plVar32 = param_1 + 8;
    plVar4 = param_1 + 10;
    do {
      pppppuVar7 = (ulong *****)
                   ppppuStack_f8[(ulong)ppppuStack_e0 >> 8][((ulong)ppppuStack_e0 & 0xff) * 2];
      iVar2 = *(int *)(ppppuStack_f8[(ulong)ppppuStack_e0 >> 8] + ((ulong)ppppuStack_e0 & 0xff) * 2
                      + 1);
      lStack_d8 = lStack_d8 + -1;
      ppppuStack_e0 = (ulong ****)((long)ppppuStack_e0 + 1);
      if ((ulong *****)0x1ff < ppppuStack_e0) {
        __ZdlPv(*ppppuStack_f8);
        ppppuStack_f8 = ppppuStack_f8 + 1;
        ppppuStack_e0 = ppppuStack_e0 + -0x20;
      }
      ppuVar9 = &puStack_118;
      ppppuStack_180 = (ulong ****)pppppuVar7;
      FUN_10a52f568(ppuVar9,pppppuVar7,&ppppuStack_180);
      if (iVar2 == *(int *)(ppuVar9 + 5) && ((ulong)pppppuVar7 & uVar25) == 0) {
        lVar16 = *param_4;
        lVar26 = param_4[1];
        lVar10 = lVar16;
        func_0x00010a52eb8c(lVar16,lVar26,pppppuVar7);
        if (lVar10 != 0) {
          uVar33 = param_1[4];
          uVar14 = (uint)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)((ulong)uVar33 >> 8)) +
                                POPCOUNT((char)((ulong)uVar33 >> 0x10)) +
                                POPCOUNT((char)((ulong)uVar33 >> 0x18)) +
                                POPCOUNT((char)((ulong)uVar33 >> 0x20)) +
                                POPCOUNT((char)((ulong)uVar33 >> 0x28)) +
                                POPCOUNT((char)((ulong)uVar33 >> 0x30)) +
                               POPCOUNT((char)((ulong)uVar33 >> 0x38)));
          if ((int)(uVar14 * uVar14) <= iStack_14c) {
            iStack_14c = iStack_14c + 1;
            FUN_10a00946c(&UNK_10f65d56c);
            goto LAB_10a4ea7cc;
          }
          plVar31 = plVar32;
          iStack_14c = iStack_14c + 1;
          FUN_10a52ed60(plVar32,pppppuVar7);
          if (plVar31 == (long *)0x0) {
            func_0x00010a52eb8c(lVar16,lVar26,pppppuVar7);
            (**(code **)(lVar16 + 0x18))(&plStack_90);
            lStack_98 = param_1[1];
            uStack_a0 = *param_1;
            if (param_1[1] != 0) {
              plVar31 = (long *)(param_1[1] + 0x10);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                if (bVar6) {
                  *plVar31 = *plVar31 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            (**(code **)(*plStack_90 + 0x10))(plStack_90,&uStack_a0);
            if (lStack_98 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            (**(code **)(*plStack_90 + 0x40))(plStack_90,param_1 + 2);
            (**(code **)(*plStack_90 + 0x18))();
            plVar1 = plStack_88;
            plVar12 = plStack_90;
            plStack_b0 = plStack_90;
            plStack_a8 = plStack_88;
            plStack_90 = (long *)0x0;
            plStack_88 = (long *)0x0;
            pppppuVar28 = (ulong *****)param_1[9];
            ppppuStack_b8 = (ulong ****)pppppuVar7;
            if (pppppuVar28 != (ulong *****)0x0) {
              uVar13 = (long)pppppuVar28 - 1;
              if (((ulong)pppppuVar28 & uVar13) == 0) {
                unaff_x24 = (ulong *****)(uVar13 & (ulong)pppppuVar7);
              }
              else {
                unaff_x24 = pppppuVar7;
                if (pppppuVar28 <= pppppuVar7) {
                  uVar18 = 0;
                  if (pppppuVar28 != (ulong *****)0x0) {
                    uVar18 = (ulong)pppppuVar7 / (ulong)pppppuVar28;
                  }
                  unaff_x24 = (ulong *****)((long)pppppuVar7 - uVar18 * (long)pppppuVar28);
                }
              }
              puVar29 = *(undefined8 **)(*plVar32 + (long)unaff_x24 * 8);
              if (puVar29 != (undefined8 *)0x0) {
                for (plVar31 = (long *)*puVar29; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31)
                {
                  pppppuVar17 = (ulong *****)plVar31[1];
                  if (pppppuVar17 == pppppuVar7) {
                    if ((ulong *****)plVar31[2] == pppppuVar7) {
                      if (plVar1 != (long *)0x0) {
                        plVar12 = plVar1 + 1;
                        do {
                          lVar16 = *plVar12;
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                          if (bVar6) {
                            *plVar12 = lVar16 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (lVar16 == 0) {
                          (**(code **)(*plVar1 + 0x10))(plVar1);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                        }
                      }
                      goto LAB_10a4ea3c0;
                    }
                  }
                  else {
                    if (((ulong)pppppuVar28 & uVar13) == 0) {
                      pppppuVar17 = (ulong *****)((ulong)pppppuVar17 & uVar13);
                    }
                    else if (pppppuVar28 <= pppppuVar17) {
                      uVar18 = 0;
                      if (pppppuVar28 != (ulong *****)0x0) {
                        uVar18 = (ulong)pppppuVar17 / (ulong)pppppuVar28;
                      }
                      pppppuVar17 = (ulong *****)((long)pppppuVar17 - uVar18 * (long)pppppuVar28);
                    }
                    if (pppppuVar17 != unaff_x24) break;
                  }
                }
              }
            }
            plVar31 = (long *)0x28;
            __Znwm();
            uStack_70 = 1;
            *plVar31 = 0;
            plVar31[1] = (long)pppppuVar7;
            plVar31[2] = (long)pppppuVar7;
            plVar31[3] = (long)plVar12;
            plVar31[4] = (long)plVar1;
            plStack_b0 = (long *)0x0;
            plStack_a8 = (long *)0x0;
            plStack_80 = plVar31;
            plStack_78 = plVar32;
            if ((pppppuVar28 == (ulong *****)0x0) ||
               (*(float *)(param_1 + 0xc) * (float)pppppuVar28 < (float)(param_1[0xb] + 1))) {
              uVar13 = 1;
              if ((ulong *****)0x2 < pppppuVar28) {
                uVar13 = (ulong)(((ulong)pppppuVar28 & (long)pppppuVar28 - 1U) != 0);
              }
              uVar13 = uVar13 | (long)pppppuVar28 << 1;
              uVar18 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
              if (uVar13 <= uVar18) {
                uVar13 = uVar18;
              }
              FUN_10a52f010(plVar32,uVar13);
              pppppuVar28 = (ulong *****)param_1[9];
              if (((ulong)pppppuVar28 & (long)pppppuVar28 - 1U) == 0) {
                unaff_x24 = (ulong *****)((long)pppppuVar28 - 1U & (ulong)pppppuVar7);
              }
              else {
                unaff_x24 = pppppuVar7;
                if (pppppuVar28 <= pppppuVar7) {
                  uVar13 = 0;
                  if (pppppuVar28 != (ulong *****)0x0) {
                    uVar13 = (ulong)pppppuVar7 / (ulong)pppppuVar28;
                  }
                  unaff_x24 = (ulong *****)((long)pppppuVar7 - uVar13 * (long)pppppuVar28);
                }
              }
            }
            lVar16 = *plVar32;
            plVar12 = *(long **)(lVar16 + (long)unaff_x24 * 8);
            if (plVar12 == (long *)0x0) {
              *plVar31 = *plVar4;
              *plVar4 = (long)plVar31;
              *(long **)(lVar16 + (long)unaff_x24 * 8) = plVar4;
              if (*plVar31 != 0) {
                pppppuVar17 = *(ulong ******)(*plVar31 + 8);
                if (((ulong)pppppuVar28 & (long)pppppuVar28 - 1U) == 0) {
                  pppppuVar17 = (ulong *****)((ulong)pppppuVar17 & (long)pppppuVar28 - 1U);
                }
                else if (pppppuVar28 <= pppppuVar17) {
                  uVar13 = 0;
                  if (pppppuVar28 != (ulong *****)0x0) {
                    uVar13 = (ulong)pppppuVar17 / (ulong)pppppuVar28;
                  }
                  pppppuVar17 = (ulong *****)((long)pppppuVar17 - uVar13 * (long)pppppuVar28);
                }
                plVar12 = (long *)(*plVar32 + (long)pppppuVar17 * 8);
                goto LAB_10a4ea3b0;
              }
            }
            else {
              *plVar31 = *plVar12;
LAB_10a4ea3b0:
              *plVar12 = (long)plVar31;
            }
            param_1[0xb] = param_1[0xb] + 1;
LAB_10a4ea3c0:
            plVar12 = plStack_88;
            if (plStack_88 != (long *)0x0) {
              plVar1 = plStack_88 + 1;
              do {
                lVar16 = *plVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar16 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
          ppppuVar8 = (ulong ****)plVar31[3];
          plVar31 = (long *)plVar31[4];
          if (plVar31 != (long *)0x0) {
            plVar12 = plVar31 + 1;
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          (*(code *)(*ppppuVar8)[10])(ppppuVar8,param_3);
          pppppuVar28 = (ulong *****)ppppuStack_140;
          unaff_x24 = &ppppuStack_140;
          while (pppppuVar17 = unaff_x24, pppppuVar28 != (ulong *****)0x0) {
            while (pppppuVar17 = pppppuVar28, pppppuVar17[4] <= pppppuVar7) {
              if (pppppuVar7 <= pppppuVar17[4]) goto LAB_10a4ea184;
              pppppuVar28 = (ulong *****)pppppuVar17[1];
              if ((ulong *****)pppppuVar17[1] == (ulong *****)0x0) {
                unaff_x24 = pppppuVar17 + 1;
                goto LAB_10a4ea13c;
              }
            }
            unaff_x24 = pppppuVar17;
            pppppuVar28 = (ulong *****)*pppppuVar17;
          }
LAB_10a4ea13c:
          pppppuVar28 = (ulong *****)0x30;
          __Znwm();
          pppppuVar28[4] = (ulong ****)pppppuVar7;
          pppppuVar28[5] = (ulong ****)0x0;
          *pppppuVar28 = (ulong ****)0x0;
          pppppuVar28[1] = (ulong ****)0x0;
          pppppuVar28[2] = (ulong ****)pppppuVar17;
          *unaff_x24 = (ulong ****)pppppuVar28;
          pppppuVar7 = pppppuVar28;
          if ((ulong *****)*ppppuStack_148 != (ulong *****)0x0) {
            pppppuVar7 = (ulong *****)*unaff_x24;
            ppppuStack_148 = (ulong ****)*ppppuStack_148;
          }
          func_0x000107c2b058(ppppuStack_140,pppppuVar7);
          lStack_138 = lStack_138 + 1;
          pppppuVar17 = pppppuVar28;
LAB_10a4ea184:
          ppppuVar27 = pppppuVar17[5];
          (*(code *)(*ppppuVar8)[9])(ppppuVar8,param_3);
          pppppuVar17[5] = ppppuVar8;
          FUN_10a4ea898(&ppppuStack_178);
          for (; ppppuVar27 != (ulong ****)0x0;
              ppppuVar27 = (ulong ****)((long)ppppuVar27 - 1U & (ulong)ppppuVar27)) {
            plStack_80 = (long *)((ulong)ppppuVar27 & -(long)ppppuVar27);
            ppuVar9 = &puStack_130;
            FUN_10a52f568(ppuVar9,plStack_80,&plStack_80);
            *(int *)(ppuVar9 + 5) = *(int *)(ppuVar9 + 5) + -1;
          }
          if (plVar31 != (long *)0x0) {
            plVar12 = plVar31 + 1;
            do {
              lVar16 = *plVar12;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
            }
          }
        }
      }
    } while (lStack_d8 != 0);
  }
  param_1[4] = 0;
  if (puStack_130 != &uStack_128) {
    uVar13 = 0;
    puVar29 = puStack_130;
    do {
      if (0 < *(int *)(puVar29 + 5)) {
        uVar13 = puVar29[4] | uVar13;
        param_1[4] = uVar13;
      }
      puVar23 = puVar29;
      puVar30 = (undefined8 *)puVar29[1];
      if ((undefined8 *)puVar29[1] == (undefined8 *)0x0) {
        do {
          puVar29 = (undefined8 *)puVar23[2];
          bVar6 = (undefined8 *)*puVar29 != puVar23;
          puVar23 = puVar29;
        } while (bVar6);
      }
      else {
        do {
          puVar29 = puVar30;
          puVar30 = (undefined8 *)*puVar29;
        } while ((undefined8 *)*puVar29 != (undefined8 *)0x0);
      }
    } while (puVar29 != &uStack_128);
  }
  puVar29 = (undefined8 *)param_1[10];
  pppppuVar7 = (ulong *****)ppppuStack_d0;
  pppppuVar28 = (ulong *****)ppppuStack_c8;
  do {
    while( true ) {
      ppppuStack_d0 = (ulong ****)pppppuVar7;
      ppppuStack_c8 = (ulong ****)pppppuVar28;
      if (puVar29 == (undefined8 *)0x0) {
        if (pppppuVar7 != pppppuVar28) {
          do {
            ppppuVar8 = *pppppuVar7;
            (*(code *)(*ppppuVar8)[0xd])(ppppuVar8,param_5,param_3);
            if ((param_1[4] & (ulong)ppppuVar8) != 0 || (uVar19 & uVar25) != 0) {
              lVar16 = 0x18;
              if ((param_1[4] & (ulong)ppppuVar8) == 0) {
                lVar16 = 0x38;
              }
              (**(code **)((long)**pppppuVar7 + lVar16))();
            }
            pppppuVar7 = pppppuVar7 + 2;
          } while (pppppuVar7 != pppppuVar28);
        }
        if (uVar19 != param_1[4]) {
          func_0x00010ae02f94(0,uVar19);
          func_0x00010ae02f94();
          func_0x00010ae02fb8();
          ppuVar11 = &PTR_PTR_113302418;
          FUN_10ae079a0();
          func_0x00010ae02fa4();
          func_0x00010ae02fa4();
          func_0x00010ae02fc8();
          FUN_10ae07cd4(ppuVar11,&PTR_PTR_113302418);
        }
        func_0x00010a52f530(ppppuStack_140);
        func_0x00010a52f4f8(uStack_128);
        func_0x00010a52f4f8(uStack_110);
        lStack_d8 = 0;
        lVar16 = (long)ppppuStack_f0 - (long)ppppuStack_f8;
        pppppuVar7 = (ulong *****)ppppuStack_f0;
        while (uVar25 = lVar16 >> 3, ppppuStack_f0 = (ulong ****)pppppuVar7, 2 < uVar25) {
          __ZdlPv(*ppppuStack_f8);
          ppppuStack_f8 = ppppuStack_f8 + 1;
          pppppuVar7 = (ulong *****)ppppuStack_f0;
          lVar16 = (long)ppppuStack_f0 - (long)ppppuStack_f8;
        }
        if (uVar25 == 1) {
          ppppuStack_e0 = (ulong ****)0x80;
        }
        else if (uVar25 == 2) {
          ppppuStack_e0 = (ulong ****)0x100;
        }
        pppppuVar28 = (ulong *****)ppppuStack_f8;
        if ((ulong *****)ppppuStack_f8 != pppppuVar7) {
          do {
            pppppuVar17 = pppppuVar28 + 1;
            __ZdlPv(*pppppuVar28);
            pppppuVar28 = pppppuVar17;
          } while (pppppuVar17 != pppppuVar7);
          if (ppppuStack_f0 != ppppuStack_f8) {
            ppppuStack_f0 =
                 (ulong ****)
                 ((long)ppppuStack_f0 +
                 ((long)ppppuStack_f8 + (7 - (long)ppppuStack_f0) & 0xfffffffffffffff8U));
          }
        }
        if ((ulong *****)ppppuStack_100 != (ulong *****)0x0) {
          __ZdlPv();
        }
        FUN_10a4fae68(&ppppuStack_d0);
        return;
      }
      if ((param_1[4] & puVar29[2]) == 0 || (puVar29[2] & uVar25) != 0) break;
      puVar29 = (undefined8 *)*puVar29;
    }
    (**(code **)(*(long *)puVar29[3] + 0x38))();
    uVar18 = param_1[9];
    uVar13 = puVar29[1];
    uVar20 = uVar18 - 1;
    if ((uVar18 & uVar20) == 0) {
      uVar13 = uVar20 & uVar13;
    }
    else if (uVar18 <= uVar13) {
      uVar22 = 0;
      if (uVar18 != 0) {
        uVar22 = uVar13 / uVar18;
      }
      uVar13 = uVar13 - uVar22 * uVar18;
    }
    puVar30 = (undefined8 *)*puVar29;
    puVar23 = *(undefined8 **)(param_1[8] + uVar13 * 8);
    do {
      puVar21 = puVar23;
      puVar23 = (undefined8 *)*puVar21;
    } while ((undefined8 *)*puVar21 != puVar29);
    puVar23 = puVar30;
    if (puVar21 == param_1 + 10) {
LAB_10a4ea55c:
      if (puVar30 == (undefined8 *)0x0) {
LAB_10a4ea594:
        *(undefined8 *)(param_1[8] + uVar13 * 8) = 0;
        puVar23 = (undefined8 *)*puVar29;
        goto LAB_10a4ea59c;
      }
      uVar22 = puVar30[1];
      if ((uVar18 & uVar20) == 0) {
        uVar24 = uVar22 & uVar20;
      }
      else {
        uVar24 = uVar22;
        if (uVar18 <= uVar22) {
          uVar24 = 0;
          if (uVar18 != 0) {
            uVar24 = uVar22 / uVar18;
          }
          uVar24 = uVar22 - uVar24 * uVar18;
        }
      }
      if (uVar24 != uVar13) goto LAB_10a4ea594;
LAB_10a4ea5a4:
      if ((uVar18 & uVar20) == 0) {
        uVar22 = uVar22 & uVar20;
      }
      else if (uVar18 <= uVar22) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar22 / uVar18;
        }
        uVar22 = uVar22 - uVar20 * uVar18;
      }
      if (uVar22 != uVar13) {
        *(undefined8 **)(param_1[8] + uVar22 * 8) = puVar21;
        puVar23 = (undefined8 *)*puVar29;
      }
    }
    else {
      uVar22 = puVar21[1];
      if ((uVar18 & uVar20) == 0) {
        uVar22 = uVar22 & uVar20;
      }
      else if (uVar18 <= uVar22) {
        uVar24 = 0;
        if (uVar18 != 0) {
          uVar24 = uVar22 / uVar18;
        }
        uVar22 = uVar22 - uVar24 * uVar18;
      }
      if (uVar22 != uVar13) goto LAB_10a4ea55c;
LAB_10a4ea59c:
      if (puVar23 != (undefined8 *)0x0) {
        uVar22 = puVar23[1];
        goto LAB_10a4ea5a4;
      }
    }
    *puVar21 = puVar23;
    *puVar29 = 0;
    param_1[0xb] = param_1[0xb] + -1;
    FUN_10a52ec20(puVar29 + 3);
    __ZdlPv(puVar29);
    puVar29 = puVar30;
    pppppuVar7 = (ulong *****)ppppuStack_d0;
    pppppuVar28 = (ulong *****)ppppuStack_c8;
  } while( true );
}



/* Entry: 10a4ea898; end: 10a4eac83;  */

void FUN_10a4ea898(long *param_1,ulong param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uStack_68;
  
  if (param_2 != 0) {
    lVar18 = param_1[4];
    do {
      puVar3 = (ulong *)*param_1;
      puVar12 = (undefined8 *)puVar3[1];
      puVar14 = (undefined8 *)puVar3[2];
      puVar16 = (undefined8 *)((long)puVar14 - (long)puVar12);
      lVar10 = 0;
      if (puVar16 != (undefined8 *)0x0) {
        lVar10 = ((long)puVar14 - (long)puVar12) * 0x20 + -1;
      }
      uVar17 = param_2 & -param_2;
      uVar4 = *(undefined4 *)param_1[1];
      uVar13 = puVar3[4];
      uStack_68 = uVar17;
      if (lVar10 == puVar3[5] + uVar13) {
        if (uVar13 < 0x100) {
          puVar20 = (undefined8 *)puVar3[3];
          puVar19 = (undefined8 *)*puVar3;
          if (puVar16 < (undefined8 *)((long)puVar20 - (long)puVar19)) {
            uVar11 = 0x1000;
            __Znwm();
            if (puVar20 == puVar14) {
              if (puVar12 == puVar19) {
                uVar13 = (long)puVar20 - (long)puVar12 >> 2;
                if (puVar14 == puVar12) {
                  uVar13 = 1;
                }
                if (uVar13 >> 0x3d != 0) goto LAB_10a4eac48;
                uVar9 = uVar13 << 3;
                __Znwm();
                puVar20 = (undefined8 *)(uVar9 + (uVar13 * 2 + 6 & 0xfffffffffffffff8));
                puVar8 = puVar20;
                if (puVar14 != puVar12) {
                  puVar8 = (undefined8 *)((long)puVar20 + (long)puVar16);
                  puVar14 = puVar20;
                  puVar15 = puVar12;
                  do {
                    *puVar14 = *puVar15;
                    puVar16 = puVar16 + -1;
                    puVar14 = puVar14 + 1;
                    puVar15 = puVar15 + 1;
                  } while (puVar16 != (undefined8 *)0x0);
                }
                *puVar3 = uVar9;
                puVar3[1] = (ulong)puVar20;
                puVar3[2] = (ulong)puVar8;
                puVar3[3] = uVar9 + uVar13 * 8;
                bVar2 = puVar12 != (undefined8 *)0x0;
                puVar12 = puVar20;
                if (bVar2) {
                  __ZdlPv(puVar19);
                  puVar12 = (undefined8 *)puVar3[1];
                }
              }
              puVar12[-1] = uVar11;
              uVar13 = puVar3[1];
              puVar3[1] = uVar13 - 8;
              uVar11 = *(undefined8 *)(uVar13 - 8);
              puVar3[1] = uVar13;
              FUN_10a4fad64(puVar3,uVar11);
            }
            else {
              *puVar14 = uVar11;
              puVar3[2] = puVar3[2] + 8;
            }
          }
          else {
            uVar13 = (long)puVar20 - (long)puVar19 >> 2;
            if (puVar20 == puVar19) {
              uVar13 = 1;
            }
            if (uVar13 >> 0x3d != 0) {
LAB_10a4eac48:
              func_0x000109ffded8();
LAB_10a4eac4c:
              func_0x000109ffded8();
LAB_10a4eac50:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4eac54);
              (*pcVar7)();
            }
            puVar20 = (undefined8 *)(uVar13 * 8);
            __Znwm();
            uVar11 = 0x1000;
            __Znwm();
            puVar19 = puVar20 + uVar13;
            puVar8 = puVar20;
            puVar15 = (undefined8 *)((long)puVar20 + (long)puVar16);
            if (puVar16 == (undefined8 *)(uVar13 * 8)) {
              if ((long)puVar16 < 1) {
                uVar13 = (long)puVar16 >> 2;
                if (puVar14 == puVar12) {
                  uVar13 = 1;
                }
                if (uVar13 >> 0x3d != 0) goto LAB_10a4eac4c;
                puVar8 = (undefined8 *)(uVar13 << 3);
                __Znwm();
                puVar19 = puVar8 + uVar13;
                __ZdlPv(puVar20);
                puVar12 = (undefined8 *)puVar3[1];
                puVar14 = (undefined8 *)puVar3[2];
                puVar15 = puVar8;
              }
              else {
                puVar15 = (undefined8 *)
                          (((long)puVar20 + (long)puVar16) -
                          (((ulong)puVar16 >> 1) + 4 & 0xfffffffffffffff8));
              }
            }
            puVar16 = puVar15 + 1;
            *puVar15 = uVar11;
            if (puVar14 != puVar12) {
              do {
                puVar12 = puVar15;
                if (puVar15 == puVar8) {
                  if (puVar16 < puVar19) {
                    lVar10 = ((long)puVar19 - (long)puVar16 >> 3) + 1;
                    lVar5 = (long)puVar16 - (long)puVar15;
                    lVar6 = (long)puVar16 - (long)puVar15;
                    puVar16 = puVar16 + ((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
                    puVar12 = (undefined8 *)((long)puVar16 - lVar5);
                    if (lVar6 != 0) {
                      _memmove(puVar12,puVar15,lVar6);
                    }
                  }
                  else {
                    uVar13 = (long)puVar19 - (long)puVar15 >> 2;
                    if ((long)puVar19 - (long)puVar15 == 0) {
                      uVar13 = 1;
                    }
                    if (uVar13 >> 0x3d != 0) {
                      func_0x000109ffded8();
                      goto LAB_10a4eac50;
                    }
                    puVar20 = (undefined8 *)(uVar13 << 3);
                    __Znwm();
                    puVar12 = (undefined8 *)((long)puVar20 + (uVar13 * 2 + 6 & 0xfffffffffffffff8));
                    lVar10 = (long)puVar16 - (long)puVar15;
                    puVar16 = puVar12;
                    if (lVar10 != 0) {
                      puVar16 = (undefined8 *)((long)puVar12 + lVar10);
                      puVar19 = puVar12;
                      do {
                        *puVar19 = *puVar15;
                        lVar10 = lVar10 + -8;
                        puVar19 = puVar19 + 1;
                        puVar15 = puVar15 + 1;
                      } while (lVar10 != 0);
                    }
                    puVar19 = puVar20 + uVar13;
                    __ZdlPv(puVar8);
                    puVar8 = puVar20;
                  }
                }
                puVar14 = puVar14 + -1;
                puVar15 = puVar12 + -1;
                *puVar15 = *puVar14;
              } while (puVar14 != (undefined8 *)puVar3[1]);
            }
            uVar13 = *puVar3;
            *puVar3 = (ulong)puVar8;
            puVar3[1] = (ulong)puVar15;
            puVar3[2] = (ulong)puVar16;
            puVar3[3] = (ulong)puVar19;
            if (uVar13 != 0) {
              __ZdlPv();
            }
          }
        }
        else {
          puVar3[4] = uVar13 - 0x100;
          uVar11 = *puVar12;
          puVar3[1] = (ulong)(puVar12 + 1);
          FUN_10a4fad64(puVar3,uVar11);
        }
      }
      param_2 = param_2 - 1 & param_2;
      uVar9 = puVar3[5];
      uVar13 = uVar9 + puVar3[4];
      puVar1 = (ulong *)(*(long *)(puVar3[1] + (uVar13 >> 8) * 8) + (uVar13 & 0xff) * 0x10);
      *puVar1 = uVar17;
      *(undefined4 *)(puVar1 + 1) = uVar4;
      puVar3[5] = uVar9 + 1;
      lVar10 = param_1[2];
      uVar4 = *(undefined4 *)param_1[1];
      FUN_10a52f568(lVar10,uVar17,&uStack_68);
      *(undefined4 *)(lVar10 + 0x28) = uVar4;
      lVar10 = param_1[3];
      FUN_10a52f568(lVar10,uVar17,&uStack_68);
      *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
      *(ulong *)(lVar18 + 0x20) = *(ulong *)(lVar18 + 0x20) | uVar17;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 10a4eac84; end: 10a4ead4b;  */

long * FUN_10a4eac84(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10a4eacf4;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10a4eacf4:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4ead4c; end: 10a4eb183;  */

void FUN_10a4ead4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  float fVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar7 = (undefined8 *)0x48;
  __Znwm();
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[8] = 0;
  uStack_e8 = 0;
  func_0x00010a5026a0(param_4 + 0xa0,puVar7);
  func_0x00010a5026a0(&uStack_e8,0);
  **(undefined1 **)(param_4 + 0xa0) = 1;
  func_0x000107c2b054(&uStack_e8,"");
  uStack_d0 = 0;
  uStack_cc = uStack_cc & 0xffffff00;
  uStack_c0 = 0;
  uStack_c8 = 0x3f800000;
  uStack_b0 = 0;
  uStack_b8 = 0x3f80000000000000;
  uStack_a0 = 0x3f800000;
  uStack_a8 = 0;
  uStack_90 = 0x3f80000000000000;
  uStack_98 = 0;
  if ((*(byte *)(param_5 + 0x130) & 1) == 0) {
LAB_10a4eb160:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4eb164);
    (*pcVar5)();
  }
  if (*(long *)(param_5 + 0x128) != 0) {
    plVar16 = *(long **)(param_5 + 0x118);
    if (plVar16 != (long *)(param_5 + 0x120)) {
      pcVar4 = *(char **)(param_1 + 8);
      uVar12 = *(ulong *)(param_1 + 0x10);
      if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
        pcVar4 = (char *)(param_1 + 8);
        uVar12 = (ulong)*(byte *)(param_1 + 0x1f);
      }
      do {
        lVar11 = (long)*(char *)((long)plVar16 + 0x37);
        if (lVar11 < 0) {
          lVar11 = plVar16[5];
          plVar10 = (long *)plVar16[4];
          if (uVar12 != 0) goto LAB_10a4eae4c;
LAB_10a4eaef0:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_e8,plVar16 + 4);
          break;
        }
        plVar10 = plVar16 + 4;
        if (uVar12 == 0) goto LAB_10a4eaef0;
LAB_10a4eae4c:
        if ((long)uVar12 <= lVar11) {
          plVar1 = (long *)((long)plVar10 + lVar11);
          cVar2 = *pcVar4;
          plVar8 = plVar10;
          do {
            if ((0xfffffffffffffffe < lVar11 - uVar12) ||
               (_memchr(plVar8,(long)cVar2,(lVar11 - uVar12) + 1), plVar8 == (long *)0x0)) break;
            plVar9 = plVar8;
            _memcmp();
            if ((int)plVar9 == 0) {
              if ((plVar8 != plVar1) && ((long)plVar8 - (long)plVar10 != -1)) goto LAB_10a4eaef0;
              break;
            }
            plVar8 = (long *)((long)plVar8 + 1);
            lVar11 = (long)plVar1 - (long)plVar8;
          } while ((long)uVar12 <= lVar11);
        }
        plVar10 = (long *)plVar16[1];
        plVar8 = plVar16;
        if ((long *)plVar16[1] == (long *)0x0) {
          do {
            plVar16 = (long *)plVar8[2];
            bVar6 = (long *)*plVar16 != plVar8;
            plVar8 = plVar16;
          } while (bVar6);
        }
        else {
          do {
            plVar16 = plVar10;
            plVar10 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
      } while (plVar16 != (long *)(param_5 + 0x120));
    }
  }
  uStack_90 = 0x3f800000c0000000;
  uStack_98 = 0x3f00000000000000;
  fVar21 = 0.0;
  fVar3 = (float)*(double *)(param_4 + 0x20) * 3.1415927 * 0.5;
  uVar17 = SUB41(fVar3,0);
  uVar18 = (undefined1)((uint)fVar3 >> 8);
  uVar19 = (undefined1)((uint)fVar3 >> 0x10);
  uVar20 = (undefined1)((uint)fVar3 >> 0x18);
  ___sincosf_stret();
  fVar22 = 1.0 - fVar21;
  fVar24 = fVar22 * 0.0;
  fVar25 = fVar21 + fVar24 * 0.0;
  fVar26 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) + fVar24 * 0.0;
  fVar27 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) * -0.0;
  fVar28 = fVar27 + fVar24;
  fVar29 = fVar24 * 0.0 - (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
  fVar3 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) * 0.0;
  fVar24 = fVar3 + fVar24;
  fVar3 = fVar3 + fVar22 * 0.0;
  fVar27 = fVar27 + fVar22 * 0.0;
  fVar21 = fVar21 + fVar22;
  fVar22 = fVar29 * 0.0;
  fVar23 = fVar3 * 0.0;
  fVar30 = fVar25 * 0.0;
  uStack_c0 = CONCAT44(fVar28 * 0.0 + fVar30 + fVar26 * 0.0,
                       fVar28 * 0.70710677 + fVar30 + fVar26 * -0.70710677);
  uStack_c8 = CONCAT44(fVar28 * 0.70710677 + fVar30 + fVar26 * 0.70710677,
                       fVar28 * 0.0 + fVar25 + fVar26 * 0.0);
  uStack_b0 = CONCAT44(fVar24 * 0.0 + fVar22 + fVar25 * 0.0,
                       fVar24 * 0.70710677 + fVar22 + fVar25 * -0.70710677);
  uStack_b8 = CONCAT44(fVar24 * 0.70710677 + fVar22 + fVar25 * 0.70710677,
                       fVar24 * 0.0 + fVar29 + fVar30);
  fVar22 = fVar21 * 0.70710677 + fVar23 + fVar27 * 0.70710677;
  fVar24 = fVar21 * 0.0 + fVar23 + fVar27 * 0.0;
  uStack_a0 = CONCAT17((char)((uint)fVar24 >> 0x18),
                       CONCAT16((char)((uint)fVar24 >> 0x10),
                                CONCAT15((char)((uint)fVar24 >> 8),
                                         CONCAT14(SUB41(fVar24,0),
                                                  fVar21 * 0.70710677 +
                                                  (float)CONCAT13((char)((uint)fVar23 >> 0x18),
                                                                  (int3)(CONCAT16((char)((uint)
                                                  fVar23 >> 0x10),
                                                  CONCAT15((char)((uint)fVar23 >> 8),
                                                           CONCAT14(SUB41(fVar23,0),fVar3))) >> 0x20
                                                  )) + fVar27 * -0.70710677))));
  uStack_a8 = CONCAT17((char)((uint)fVar22 >> 0x18),
                       CONCAT16((char)((uint)fVar22 >> 0x10),
                                CONCAT15((char)((uint)fVar22 >> 8),
                                         CONCAT14(SUB41(fVar22,0),
                                                  fVar21 * 0.0 + fVar3 + fVar27 * 0.0))));
  lVar11 = *(long *)(param_4 + 0xa0);
  puVar7 = *(undefined8 **)(lVar11 + 0x38);
  if (puVar7 < *(undefined8 **)(lVar11 + 0x40)) {
    puVar7[2] = lStack_d8;
    puVar7[1] = uStack_e0;
    *puVar7 = uStack_e8;
    puVar7[6] = uStack_b8;
    puVar7[5] = uStack_c0;
    puVar7[0xb] = uStack_90;
    puVar7[10] = uStack_98;
    puVar7[9] = uStack_a0;
    puVar7[8] = uStack_a8;
    puVar7[7] = uStack_b0;
    puVar7[4] = uStack_c8;
    puVar7[3] = CONCAT44(uStack_cc,uStack_d0);
    *(undefined8 **)(lVar11 + 0x38) = puVar7 + 0xc;
  }
  else {
    plVar16 = (long *)(lVar11 + 0x30);
    lVar15 = (long)puVar7 - *plVar16;
    uVar12 = (lVar15 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar12) {
      FUN_10a4f01ac();
      goto LAB_10a4eb160;
    }
    lVar13 = (long)*(undefined8 **)(lVar11 + 0x40) - *plVar16 >> 5;
    uVar14 = lVar13 * 0x5555555555555556;
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      uVar14 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
      uVar14 = 0x2aaaaaaaaaaaaaa;
    }
    plVar10 = plVar16;
    plStack_68 = plVar16;
    FUN_10a4f01c0();
    puVar7 = (undefined8 *)((long)plVar10 + lVar15);
    puVar7[2] = lStack_d8;
    puVar7[1] = uStack_e0;
    *puVar7 = uStack_e8;
    uStack_e0 = 0;
    lStack_d8 = 0;
    uStack_e8 = 0;
    puVar7[4] = uStack_c8;
    puVar7[3] = CONCAT44(uStack_cc,uStack_d0);
    puVar7[6] = uStack_b8;
    puVar7[5] = uStack_c0;
    puVar7[0xb] = uStack_90;
    puVar7[10] = uStack_98;
    puVar7[9] = uStack_a0;
    puVar7[8] = uStack_a8;
    puVar7[7] = uStack_b0;
    lVar15 = (long)puVar7 + (*(long *)(lVar11 + 0x30) - *(long *)(lVar11 + 0x38));
    func_0x00010a4f0204(plVar16,*(long *)(lVar11 + 0x30),*(long *)(lVar11 + 0x38),lVar15);
    uStack_88 = *(undefined8 *)(lVar11 + 0x30);
    *(long *)(lVar11 + 0x30) = lVar15;
    *(undefined8 **)(lVar11 + 0x38) = puVar7 + 0xc;
    uStack_70 = *(undefined8 *)(lVar11 + 0x40);
    *(long **)(lVar11 + 0x40) = plVar10 + uVar14 * 0xc;
    uStack_80 = uStack_88;
    uStack_78 = uStack_88;
    func_0x00010a4f0354(&uStack_88);
    *(undefined8 **)(lVar11 + 0x38) = puVar7 + 0xc;
    if (lStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
  }
  return;
}



/* Entry: 10a4eb184; end: 10a4eb1db;  */

ulong FUN_10a4eb184(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  FUN_10a4eb1dc(*(undefined8 *)(param_2 + 0x10));
  uVar1 = *(ulong *)(*(long *)(param_1 + 8) + 0x78);
  if (*(char *)(param_3 + 0x110) == '\x01') {
    uVar1 = uVar1 | (ulong)(*(uint *)(param_3 + 0x58) >> 6) & 1;
  }
  return *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 8) & (uVar1 ^ 0xffffffffffffffff) |
         0x100;
}



/* Entry: 10a4eb1dc; end: 10a4eb347;  */

void FUN_10a4eb1dc(double param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  
  lVar5 = *(long *)(param_2 + 8);
  pdVar1 = *(double **)(lVar5 + 8);
  pdVar2 = *(double **)(lVar5 + 0x10);
  pdVar8 = pdVar2;
  if ((long)pdVar2 - (long)pdVar1 != 0) {
    uVar9 = (long)pdVar2 - (long)pdVar1 >> 3;
    pdVar7 = pdVar1;
    do {
      uVar10 = uVar9 >> 1;
      pdVar8 = pdVar7 + uVar10 + 1;
      uVar9 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= pdVar7[uVar10]) {
        pdVar8 = pdVar7;
        uVar9 = uVar10;
      }
      pdVar7 = pdVar8;
    } while (uVar9 != 0);
  }
  if (pdVar2 == pdVar8) {
    pdVar8 = pdVar8 + -1;
  }
  else if ((pdVar1 != pdVar8) && (ABS(param_1 - pdVar8[-1]) < ABS(param_1 - *pdVar8))) {
    pdVar8 = pdVar8 + -1;
  }
  uVar9 = (ulong)((long)pdVar8 - (long)pdVar1) >> 3;
  iVar11 = (int)uVar9;
  if ((*(int **)(lVar5 + 0x20) != (int *)0x0) && (**(int **)(lVar5 + 0x20) == iVar11)) {
    return;
  }
  puVar3 = (undefined4 *)0x238;
  __Znwm();
  _bzero();
  *puVar3 = 0xffffffff;
  FUN_10a4c5ae8(puVar3 + 4);
  FUN_10a52f638(*(long *)(param_2 + 8) + 0x20,puVar3);
  puVar6 = *(undefined8 **)(param_2 + 8);
  *(int *)puVar6[4] = iVar11;
  plVar4 = (long *)*puVar6;
  (**(code **)(*plVar4 + 0x218))(plVar4,uVar9);
  FUN_10a4c63c0((*(undefined8 **)(param_2 + 8))[4] + 0x10,**(undefined8 **)(param_2 + 8));
  puVar6 = *(undefined8 **)(param_2 + 8);
  lVar12 = puVar6[4];
  lVar5 = lVar12 + 0x10;
  FUN_10a4e97e4();
  *(long *)(lVar12 + 8) = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a4eb330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar6 + 0x220))();
  return;
}



/* Entry: 10a4eb348; end: 10a4eb4cf;  */

void FUN_10a4eb348(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (*(long *)(*(long *)(param_1 + 8) + 8) != *(long *)(*(long *)(param_1 + 8) + 0x10)) {
    FUN_10a4eb1dc(*(undefined8 *)(param_4 + 0x20));
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20);
    FUN_10a4c89b0(param_4,lVar6 + 0x10,*(undefined8 *)(lVar6 + 8),1,0);
    if ((*(char *)(param_5 + 0x170) == '\x01') && ((*(byte *)(param_5 + 0x15c) & 1) != 0)) {
      lVar7 = *(long *)(param_4 + 0xd0);
      lVar6 = *(long *)(param_1 + 8);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar6 + 0x30) + 1;
        *(int *)(lVar6 + 0x30) = iVar1;
        *(int *)(lVar7 + 200) = iVar1;
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
    }
    if (*(char *)(lVar6 + 0x28) == '\x01') {
      *(undefined4 *)(param_4 + 0x198) = *(undefined4 *)(lVar6 + 0x2c);
      lVar6 = *(long *)(param_4 + 0x218);
      FUN_10a22b608(lVar6,*(undefined4 *)(lVar6 + 0xa0));
      plVar8 = *(long **)(lVar6 + 0x78);
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    lVar6 = *(long *)(param_1 + 8);
    if (*(char *)(lVar6 + 0x29) == '\x01') {
      func_0x00010a0eca88(param_4 + 0x198);
      lVar6 = *(long *)(param_1 + 8);
    }
    uVar3 = *(uint *)(param_5 + 0x58) >> 6;
    if (*(char *)(param_5 + 0x110) == '\0') {
      uVar3 = 0;
    }
    if (((uVar3 | *(uint *)(lVar6 + 0x78)) & 1) != 0) {
      plVar8 = *(long **)(param_4 + 0x68);
      *(undefined8 *)(param_4 + 0x68) = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
        lVar6 = *(long *)(param_1 + 8);
      }
    }
    if (*(char *)(*(long *)(lVar6 + 0x40) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a4eb4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_4,param_5);
      return;
    }
  }
  return;
}



/* Entry: 10a4eb4d0; end: 10a4eb5fb;  */

undefined8 * FUN_10a4eb4d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_DAT_110be84d0;
  puVar3 = (undefined8 *)0x80;
  __Znwm();
  puVar7 = param_1 + 1;
  *puVar7 = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 6) = 0xffffffff;
  puVar3[7] = FUN_10a52f674;
  puVar3[8] = &PTR_DAT_110950c70;
  puVar3[0xe] = 0;
  puVar3[0xf] = param_3;
  lVar4 = param_2;
  FUN_10ad01a04();
  if ((int)lVar4 == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 != 0) {
      FUN_10a00946c(&UNK_10f65d59d);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4eb5c8);
      (*pcVar2)();
    }
  }
  else {
    lVar4 = 0x140;
    __Znwm();
    FUN_10a0f6e20();
    plVar5 = (long *)*puVar7;
    plVar6 = (long *)*plVar5;
    *plVar5 = lVar4;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      plVar5 = (long *)*puVar7;
    }
    FUN_10a4eb5fc(plVar5);
  }
  return param_1;
}



/* Entry: 10a4eb5fc; end: 10a4eb6d3;  */

void FUN_10a4eb5fc(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x208))();
  if ((int)plVar1 != 0) {
    uVar2 = 0;
    do {
      (**(code **)(*(long *)*param_1 + 0x218))((long *)*param_1,uVar2);
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x210))(plVar1,&PTR_DAT_110be7638);
      uStack_40 = 0;
      FUN_10a1025f4(auStack_50,plVar1);
      (**(code **)(*plVar1 + 0x220))(plVar1);
      auStack_50[0] = uStack_40;
      (**(code **)(*(long *)*param_1 + 0x220))();
      FUN_10a0cec80(param_1 + 1,auStack_50);
      uVar2 = uVar2 + 1;
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x208))();
    } while (uVar2 < (uint)plVar1);
  }
  return;
}



/* Entry: 10a4eb6d4; end: 10a4eb74b;  */

undefined8 * FUN_10a4eb6d4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110be84d0;
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10a52f684();
  }
  return param_1;
}



/* Entry: 10a4eb74c; end: 10a4eb7eb;  */

void FUN_10a4eb74c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2,&uStack_30);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a4eb7ec; end: 10a4ec2c3;  */

long * FUN_10a4eb7ec(long *param_1,long *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  long *plStack_70;
  long *plStack_68;
  
  plVar3 = (long *)0x980;
  __Znwm();
  lVar8 = param_2[1];
  lVar6 = *param_2;
  plVar3[1] = param_2[1];
  *plVar3 = lVar6;
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar7 = plVar3 + 4;
  plVar3[5] = 0;
  *plVar7 = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 8) = 0x3f800000;
  plStack_70 = (long *)0x2;
  plVar10 = plVar7;
  FUN_10a52e604(plVar7,2,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a52e870;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110bee958;
  plVar10[5] = (long)FUN_10a4e98e4;
  plStack_70 = (long *)0x100000;
  plVar10 = plVar7;
  FUN_10a52e604(plVar7,0x100000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a52e91c;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110bee9c8;
  plVar10[5] = (long)FUN_10a4e993c;
  plStack_70 = (long *)0x1000;
  plVar10 = plVar7;
  FUN_10a52e604(plVar7,0x1000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a52e9c8;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110beea38;
  plVar10[5] = (long)FUN_10a4e99c4;
  plStack_70 = (long *)0x800;
  plVar10 = plVar7;
  FUN_10a52e604(plVar7,0x800,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a52ea74;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110beeaa8;
  plVar10[5] = (long)FUN_10a4e9a1c;
  plStack_70 = (long *)0x10;
  plVar10 = plVar7;
  FUN_10a52e604(plVar7,0x10,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a52eb20;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110beeb18;
  plVar10[5] = (long)FUN_10a4e9a74;
  plStack_70 = (long *)0x80000000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x80000000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4f9c7c;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be94a8;
  plVar10[5] = (long)FUN_10a4f97c0;
  plStack_70 = (long *)0x40000000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x40000000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4f9d28;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9518;
  plVar10[5] = (long)FUN_10a4f9818;
  plStack_70 = (long *)0x4000000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x4000000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4f9fc0;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9588;
  plVar10[5] = (long)FUN_10a4f9dd4;
  plStack_70 = (long *)0x40;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x40,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4fa174;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be95f8;
  plVar10[5] = (long)FUN_10a4fa06c;
  plStack_70 = (long *)0x400;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x400,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = 0x10a4fa26c;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9668;
  plVar10[5] = (long)FUN_10a4fa220;
  plStack_70 = (long *)0x10000000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x10000000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4fa600;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be96d8;
  plVar10[5] = (long)FUN_10a4fa318;
  plStack_70 = (long *)0x8000000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x8000000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4fa6ac;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9748;
  plVar10[5] = (long)FUN_10a4fa4f0;
  plStack_70 = (long *)0x20000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x20000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = 0x10a4fa7c4;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be97b8;
  plVar10[5] = (long)FUN_10a4fa758;
  plStack_70 = (long *)0x8;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,8,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4fa8fc;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9828;
  plVar10[5] = (long)FUN_10a4fa870;
  plStack_70 = (long *)0x100000000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x100000000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = (long)FUN_10a4fab28;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9898;
  plVar10[5] = (long)FUN_10a4fa9a4;
  plStack_70 = (long *)0x40000;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x40000,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = 0x10a4fac24;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110be9908;
  plVar10[5] = (long)FUN_10a4fabd4;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110beeb48;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = (long)(plVar3 + 0x13);
  plVar3[0x10] = (long)(puVar4 + 3);
  plVar3[0x11] = (long)puVar4;
  plVar3[0x14] = 0;
  *(undefined2 *)(plVar3 + 0x15) = 0x101;
  *(undefined1 *)((long)plVar3 + 0xaa) = 2;
  FUN_10a4ca448(plVar3 + 0x16);
  puVar5 = (undefined1 *)0x113835230;
  FUN_10a08f69c();
  *(undefined1 *)(plVar3 + 200) = *puVar5;
  lVar6 = 0x8a8;
  __Znwm();
  FUN_10a4e16e0();
  plVar3[0xc9] = lVar6;
  *(undefined1 *)(plVar3 + 0xca) = 1;
  plVar3[0xd4] = 0;
  plVar3[0xd3] = 0;
  plVar3[0xd1] = 0;
  plVar3[0xcc] = 0;
  plVar3[0xcb] = 0;
  plVar3[0xce] = 0;
  plVar3[0xcd] = 0;
  plVar3[0xd0] = 0;
  plVar3[0xcf] = 0;
  plVar3[0xd2] = (long)(plVar3 + 0xd3);
  plVar3[0xd6] = 0;
  plVar3[0xd5] = 0;
  plVar3[0xd8] = 0;
  plVar3[0xd7] = 0;
  *(undefined4 *)(plVar3 + 0xd9) = 0x3f800000;
  plVar3[0xda] = (long)&PTR_FUN_110c447a0;
  plVar3[0xdc] = (long)(plVar3 + 0xdb);
  plVar3[0xdd] = 0;
  plVar3[0xdb] = (long)&PTR_FUN_110b3f378;
  func_0x000109d1f14c(plVar3 + 0xde,0x400);
  *(undefined1 *)((long)plVar3 + 0x96f) = 0x12;
  *(undefined2 *)(plVar3 + 0x12d) = 0x7265;
  plVar3[300] = 0x6e6e755272656b63;
  plVar3[299] = 0x6172546870617247;
  *(undefined1 *)((long)plVar3 + 0x96a) = 0;
  plVar3[0x12e] = 0;
  plStack_70 = (long *)0x200;
  plVar10 = plVar7;
  FUN_10a4f9870(plVar7,0x200,&plStack_70);
  plVar9 = plVar10 + 4;
  plVar10[3] = 0x10a52f910;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_DAT_110beec68;
  plStack_70 = (long *)0x20;
  FUN_10a4f9870(plVar7,0x20,&plStack_70);
  plVar10 = plVar7 + 4;
  plVar7[3] = (long)FUN_10a52fa24;
  (**(code **)*plVar10)(plVar10);
  *plVar10 = (long)&PTR_DAT_110beed68;
  *param_1 = (long)plVar3;
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110beed98;
  puVar4[3] = &PTR_DAT_110beede8;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined8 *)((long)puVar4 + 0x24) = 0;
  auVar11 = NEON_fmov(0xbf800000,4);
  *(long *)((long)puVar4 + 0x34) = auVar11._8_8_;
  *(long *)((long)puVar4 + 0x2c) = auVar11._0_8_;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0x7fc000007fc00000;
  *(undefined4 *)((long)puVar4 + 0x44) = 0x3f800000;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 0x3f800000;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined4 *)((long)puVar4 + 0x6c) = 0x3f800000;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0x3f800000;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  plVar10 = (long *)plVar3[0xc];
  plVar3[0xb] = (long)(puVar4 + 3);
  plVar3[0xc] = (long)puVar4;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  FUN_10a52fc9c(&plStack_70);
  FUN_10a4ec2c4(*param_1 + 0x10,&plStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  plStack_70 = (long *)0x1;
  lVar6 = *param_1 + 0x20;
  FUN_10a4f9870(lVar6,1,&plStack_70);
  puVar4 = (undefined8 *)(lVar6 + 0x20);
  *(code **)(lVar6 + 0x18) = FUN_10a52fd34;
  (**(code **)*puVar4)(puVar4);
  *puVar4 = &PTR_FUN_110beeeb8;
  *(long **)(lVar6 + 0x28) = param_1;
  lVar6 = *param_1;
  if ((param_3 != 0) && ((*(byte *)(lVar6 + 0x640) & 1) == 0)) {
    FUN_10a4ec328();
    lVar6 = *param_1;
  }
  plStack_70 = (long *)0x100;
  lVar6 = lVar6 + 0x20;
  FUN_10a4f9870(lVar6,0x100,&plStack_70);
  puVar4 = (undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x18) = 0x10a52fdc0;
  (**(code **)*puVar4)(puVar4);
  *puVar4 = &PTR_DAT_110beeed8;
  *(long **)(lVar6 + 0x28) = param_1;
  FUN_10a4ec3f0((long *)*param_1 + 0xcf,*(long *)*param_1 + 0x10);
  plVar3 = *(long **)(*param_2 + 0x48);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(&plStack_70,plVar3,0);
    plVar3 = plStack_70;
    lVar6 = *param_1;
    if (plStack_70 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      *puVar4 = &PTR_DAT_110beef08;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = plVar3;
    }
    plStack_70 = (long *)0x0;
    *(long **)(lVar6 + 0x658) = plVar3;
    plVar3 = *(long **)(lVar6 + 0x660);
    *(undefined8 **)(lVar6 + 0x660) = puVar4;
    if (plVar3 != (long *)0x0) {
      plVar10 = plVar3 + 1;
      do {
        lVar6 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plVar3 = plStack_70;
    plStack_70 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return param_1;
}



/* Entry: 10a4ec2c4; end: 10a4ec327;  */

undefined8 * FUN_10a4ec2c4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a4ec328; end: 10a4ec3ef;  */

void FUN_10a4ec328(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_31;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar4 = (undefined8 *)0x30;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110beef68;
    puVar4[3] = &PTR_FUN_110c43338;
    FUN_10aae37ac(puVar4 + 4,&uStack_31,param_1);
    plVar6 = *(long **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x48) = puVar4 + 3;
    *(undefined8 **)(param_1 + 0x50) = puVar4;
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
  }
  return;
}



/* Entry: 10a4ec3f0; end: 10a4ec46b;  */

undefined8 * FUN_10a4ec3f0(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 10a4ec46c; end: 10a4ec50b;  */

void FUN_10a4ec46c(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x22;
  
  lVar6 = *param_1;
  plVar10 = *(long **)(lVar6 + 0x6b8);
  if (plVar10 != (long *)0x0) {
    do {
      (**(code **)(*(long *)plVar10[3] + 0x30))((long *)plVar10[3],param_2);
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    lVar6 = *param_1;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    if ((*(byte *)(lVar6 + 0x650) & 1) != 0) {
      puVar7 = *(undefined8 **)(lVar6 + 0x648);
      uVar9 = *param_2;
      if ((*(byte *)(puVar7 + 1) & 1) == 0) {
        *(undefined1 *)(puVar7 + 1) = 1;
      }
      *puVar7 = uVar9;
      return;
    }
  }
  else if ((*(byte *)(lVar6 + 0x650) & 1) != 0) {
    plVar10 = (long *)(lVar6 + 0x648);
    *(undefined8 *)(*plVar10 + 0x78) = 0;
    func_0x0001098b7d14(&stack0xffffffffffffffd0,*plVar10 + 0x3f0);
    uVar5 = (uint)unaff_x22[2];
    while ((uVar5 >> 1 & 1) == 0) {
      FUN_10a5267a8(*plVar10);
      uVar5 = (uint)unaff_x22[2];
    }
    if ((((uint)unaff_x22[2] >> 1 & 1) != 0) && (((uint)unaff_x22[2] >> 5 & 1) == 0)) {
      if (unaff_x22 != (long *)0x0) {
        puVar1 = (ulong *)(unaff_x22 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*unaff_x22 + 8))();
          }
        }
      }
      return;
    }
    if (((uint)unaff_x22[2] >> 5 & 1) == 0) {
      puVar7 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar7 = &PTR_DAT_110ae85c0;
      ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&stack0xffffffffffffffd8,unaff_x22 + 0x12);
      func_0x0001092af97c(&stack0xffffffffffffffd8);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4e4c38);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ec50c);
  (*pcVar4)();
}



/* Entry: 10a4ec50c; end: 10a4ec543;  */

void FUN_10a4ec50c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  uVar7 = param_2[1];
  uVar6 = *param_2;
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
  lVar4 = *(long *)(lVar5 + 0x78);
  *(undefined8 *)(lVar5 + 0x78) = uVar7;
  *(undefined8 *)(lVar5 + 0x70) = uVar6;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a4ec544; end: 10a4ec6eb;  */

void FUN_10a4ec544(long *param_1)

{
  long *plVar1;
  
  func_0x00010a4ec598(*param_1 + 0x10);
  if (*(long *)(*param_1 + 0x48) != 0) {
    plVar1 = *(long **)(*(long *)(*(long *)(*param_1 + 0x48) + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010a4ec588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    return;
  }
  return;
}



/* Entry: 10a4ec6ec; end: 10a4ec783;  */

void FUN_10a4ec6ec(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  
  FUN_10a4ec784(*param_1);
  lVar6 = *param_1;
  uVar7 = 0xfffffffe33ede3a4;
  if (*(char *)(lVar6 + 0x640) == '\0') {
    uVar7 = 0xffffffffffffffff;
  }
  FUN_10a4e9ca0(lVar6 + 0x668,uVar7 & (*(ulong *)(param_2 + 0x590) | 0x100),lVar6 + 0xb0,
                lVar6 + 0x20,param_3);
  lVar6 = *param_1;
  if ((*(byte *)(lVar6 + 0x650) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ec784);
    (*pcVar2)();
  }
  FUN_10a4e42e0(lVar6 + 0x648,lVar6 + 0xb0,param_2 + 0x598,*(undefined1 *)(param_2 + 0x618));
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0xf8) == '\x01') {
    lVar4 = lVar6 + 0xd0;
    func_0x00010aad327c();
  }
  else {
    lVar4 = 0;
  }
  *(long *)(lVar6 + 0x68) = lVar4;
  for (plVar8 = *(long **)(lVar6 + 0x6b8); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    puVar5 = (undefined8 *)plVar8[3];
    (**(code **)*puVar5)(puVar5,lVar6 + 0xb0);
    iVar3 = (int)puVar5;
    if (iVar3 != -1) {
      iVar9 = 1;
      if (iVar3 != 7) {
        iVar9 = 2;
      }
      iVar1 = 0;
      if (iVar3 != -1) {
        iVar1 = iVar9;
      }
      if (*(int *)(lVar6 + 0x68) < iVar1) {
        *(int *)(lVar6 + 0x68) = iVar1;
      }
      iVar3 = (int)((ulong)puVar5 >> 0x20);
      if (*(int *)(lVar6 + 0x6c) < iVar3) {
        *(int *)(lVar6 + 0x6c) = iVar3;
      }
    }
  }
  if ((*(byte *)(lVar6 + 0x650) & 1) != 0) {
    iVar3 = *(int *)(*(long *)(lVar6 + 0x648) + 0x78);
    if (*(int *)(lVar6 + 0x68) < iVar3) {
      *(int *)(lVar6 + 0x68) = iVar3;
    }
    iVar3 = *(int *)(*(long *)(lVar6 + 0x648) + 0x7c);
    if (*(int *)(lVar6 + 0x6c) < iVar3) {
      *(int *)(lVar6 + 0x6c) = iVar3;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ec8cc);
  (*pcVar2)();
}



/* Entry: 10a4ec784; end: 10a4ec7eb;  */

undefined8 * FUN_10a4ec784(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_10a224690(param_1 + 0xb0);
  if (*(byte *)(param_1 + 0xa8) < *(byte *)(param_1 + 0xb0)) {
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xa8);
  }
  if (*(byte *)(param_1 + 0xa9) < *(byte *)(param_1 + 0xb1)) {
    *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xa9);
  }
  if (*(byte *)(param_1 + 0xaa) < *(byte *)(param_1 + 0xb2)) {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xaa);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x630);
  *(undefined8 *)(param_1 + 0x630) = uVar7;
  *(undefined8 *)(param_1 + 0x628) = uVar6;
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
  return (undefined8 *)(param_1 + 0x628);
}



/* Entry: 10a4ec7ec; end: 10a4ec8cb;  */

void FUN_10a4ec7ec(long param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    lVar4 = param_1 + 0xd0;
    func_0x00010aad327c();
  }
  else {
    lVar4 = 0;
  }
  *(long *)(param_1 + 0x68) = lVar4;
  for (plVar6 = *(long **)(param_1 + 0x6b8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    puVar5 = (undefined8 *)plVar6[3];
    (**(code **)*puVar5)(puVar5,param_1 + 0xb0);
    iVar3 = (int)puVar5;
    if (iVar3 != -1) {
      iVar7 = 1;
      if (iVar3 != 7) {
        iVar7 = 2;
      }
      iVar1 = 0;
      if (iVar3 != -1) {
        iVar1 = iVar7;
      }
      if (*(int *)(param_1 + 0x68) < iVar1) {
        *(int *)(param_1 + 0x68) = iVar1;
      }
      iVar3 = (int)((ulong)puVar5 >> 0x20);
      if (*(int *)(param_1 + 0x6c) < iVar3) {
        *(int *)(param_1 + 0x6c) = iVar3;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x650) & 1) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x648) + 0x78);
    if (*(int *)(param_1 + 0x68) < iVar3) {
      *(int *)(param_1 + 0x68) = iVar3;
    }
    iVar3 = *(int *)(*(long *)(param_1 + 0x648) + 0x7c);
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      *(int *)(param_1 + 0x6c) = iVar3;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ec8cc);
  (*pcVar2)();
}



/* Entry: 10a4ec8cc; end: 10a4ecaaf;  */

undefined8 * FUN_10a4ec8cc(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 10a4ecab0; end: 10a4ecb8f;  */

void FUN_10a4ecab0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  long *plStack_28;
  
  FUN_10a23545c(&puStack_30,&uStack_40);
  lVar4 = param_1[1];
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a4d8a24(*puStack_30,&uStack_40);
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar4);
  }
  FUN_10aabc7b4(&puStack_30);
  FUN_10aac3cdc(&puStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a4ecb90; end: 10a4ed27b;  */

undefined8 *
FUN_10a4ecb90(undefined8 *param_1,int param_2,long param_3,long *param_4,undefined4 param_5)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 *puStack_190;
  long alStack_160 [2];
  undefined8 uStack_150;
  char cStack_139;
  undefined8 *apuStack_130 [8];
  undefined8 *apuStack_f0 [7];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110be8558;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  param_1[0xd] = 0x32aaaba7;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  puVar9 = (undefined8 *)*param_4;
  lVar10 = puVar9[0xc];
  uVar6 = puVar9[0xb];
  param_1[0x19] = puVar9[0xc];
  param_1[0x18] = uVar6;
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar9 = (undefined8 *)*param_4;
  }
  lVar10 = puVar9[1];
  uVar6 = *puVar9;
  param_1[0x1b] = puVar9[1];
  param_1[0x1a] = uVar6;
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined2 *)(param_1 + 0x1c) = 1;
  param_1[0x1d] = 0;
  *(int *)((long)param_1 + 0xe4) = param_2;
  uStack_1c4 = param_5;
  if (param_3 != 0) {
    if (param_2 == 1) {
      ppuVar8 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      ppuStack_b8 = (undefined **)*ppuVar8;
      plVar5 = (long *)0x1d0;
      __Znwm();
      plVar7 = plVar5;
      FUN_10a322f64();
      alStack_160[0] = 0;
      lVar10 = param_1[0x15];
      param_1[0x15] = plVar5;
      if (lVar10 != 0) {
        plVar7 = param_1 + 0x15;
        FUN_10a31ed38(plVar7);
        lVar10 = alStack_160[0];
        alStack_160[0] = 0;
        if (lVar10 != 0) {
          plVar7 = alStack_160;
          FUN_10a31ed38(plVar7);
        }
      }
      FUN_109d1c1c4();
      ppuStack_a8 = (undefined **)param_1[0x15];
      ppuStack_b8 = (undefined **)FUN_10a53132c;
      ppuStack_b0 = &PTR_DAT_110bef170;
      ppuStack_1a0 = (undefined **)FUN_10a531350;
      ppuStack_198 = &PTR_FUN_110bef188;
      puStack_190 = param_1;
      FUN_109d1b72c(alStack_160,&UNK_10e4b9e98,8,plVar7,&ppuStack_b8,&ppuStack_1a0,0);
      (*(code *)*ppuStack_198)(&ppuStack_198);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      ppuStack_1b0 = (undefined **)0x68e0f066500;
      uStack_1c0 = 1;
      uStack_1b8 = 1;
      FUN_109d1d1f0(&ppuStack_b8,&uStack_1a1,alStack_160,&uStack_1b8,&uStack_1c0,&ppuStack_1b0);
      ppuVar1 = ppuStack_b0;
      ppuVar8 = ppuStack_b8;
      ppuStack_1a0 = ppuStack_b8;
      ppuStack_198 = ppuStack_b0;
      uVar6 = 0xb8;
      __Znwm();
      ppuStack_b0 = (undefined **)&UNK_109896774;
      ppuStack_a8 = &PTR_DAT_110b17068;
      ppuStack_a0 = ppuVar8;
      ppuStack_98 = ppuVar1;
      ppuStack_b8 = ppuVar8;
      func_0x000109d18d1c();
      func_0x0001092ba41c(&ppuStack_b8);
      plVar7 = (long *)param_1[0x16];
      param_1[0x16] = uVar6;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      puVar9 = (undefined8 *)param_1[0x16];
      plVar7 = (long *)puVar9[2];
      ppuStack_b0 = (undefined **)0x0;
      ppuStack_a8 = (undefined **)0x0;
      if (plVar7 == (long *)0x0) {
        ppuVar8 = (undefined **)0xd0;
        __Znwm();
        *(undefined2 *)(ppuVar8 + 3) = 4;
        ppuVar8[2] = (undefined *)0x0;
        ppuVar8[1] = (undefined *)0x200000006;
        ppuVar8[5] = (undefined *)0x0;
        ppuVar8[4] = (undefined *)0x0;
        ppuVar8[7] = (undefined *)0x0;
        ppuVar8[6] = (undefined *)0x0;
        ppuVar8[9] = (undefined *)0x0;
        ppuVar8[8] = (undefined *)0x0;
        ppuVar8[0xb] = (undefined *)0x0;
        ppuVar8[10] = (undefined *)0x0;
        ppuVar8[0xd] = (undefined *)0x0;
        ppuVar8[0xc] = (undefined *)0x0;
        ppuVar8[0xf] = (undefined *)0x0;
        ppuVar8[0xe] = (undefined *)0x0;
        ppuVar8[0x10] = (undefined *)0x0;
        ppuVar8[0x11] = (undefined *)(ppuVar8 + 3);
        ppuVar8[0x12] = (undefined *)0x0;
        *(undefined2 *)(ppuVar8 + 0x13) = 0;
        *ppuVar8 = (undefined *)&PTR_DAT_110be9fc8;
        ppuStack_b8 = ppuVar8 + 0x14;
        *ppuStack_b8 = (undefined *)param_1;
        ppuVar8[0x15] = (undefined *)param_4;
        ppuVar8[0x16] = (undefined *)&uStack_1c4;
        *(undefined1 *)(ppuVar8 + 0x18) = 1;
        ppuVar8[0x19] = (undefined *)0x0;
        ppuStack_a0 = (undefined **)FUN_10a5000f4;
        ppuStack_b0 = ppuVar8;
        ppuStack_a8 = ppuVar8;
      }
      else {
        ppuStack_1a0 = (undefined **)0x0;
        (**(code **)(*plVar7 + 0x28))(plVar7,0,&ppuStack_1a0);
        if (ppuStack_1a0 != (undefined **)0x0) goto LAB_10a4ed128;
        ppuVar8 = (undefined **)0xd8;
        __Znwm();
        ppuVar8[2] = (undefined *)0x0;
        ppuVar8[1] = (undefined *)0x200000006;
        *(undefined2 *)(ppuVar8 + 3) = 4;
        ppuVar8[5] = (undefined *)0x0;
        ppuVar8[4] = (undefined *)0x0;
        ppuVar8[7] = (undefined *)0x0;
        ppuVar8[6] = (undefined *)0x0;
        ppuVar8[9] = (undefined *)0x0;
        ppuVar8[8] = (undefined *)0x0;
        ppuVar8[0xb] = (undefined *)0x0;
        ppuVar8[10] = (undefined *)0x0;
        ppuVar8[0xd] = (undefined *)0x0;
        ppuVar8[0xc] = (undefined *)0x0;
        ppuVar8[0xf] = (undefined *)0x0;
        ppuVar8[0xe] = (undefined *)0x0;
        ppuVar8[0x10] = (undefined *)0x0;
        ppuVar8[0x11] = (undefined *)(ppuVar8 + 3);
        ppuVar8[0x12] = (undefined *)0x0;
        *(undefined2 *)(ppuVar8 + 0x13) = 0;
        *ppuVar8 = (undefined *)&PTR_FUN_110be9f90;
        ppuVar8[0x14] = (undefined *)param_1;
        ppuVar8[0x15] = (undefined *)param_4;
        ppuVar8[0x16] = (undefined *)&uStack_1c4;
        *(undefined1 *)(ppuVar8 + 0x18) = 1;
        ppuVar8[0x19] = (undefined *)0x0;
        ppuVar8[0x1a] = (undefined *)plVar7;
        if (ppuStack_b0 != (undefined **)0x0) {
          ppuVar1 = ppuStack_b0 + 1;
          do {
            puVar11 = *ppuVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar3) {
              *ppuVar1 = puVar11 + -4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((ulong)puVar11 & 0x1fffffffc) == 4) {
            do {
              puVar11 = *ppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar3) {
                *ppuVar1 = puVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar11 + -1 == (undefined *)0x0) {
              (**(code **)(*ppuStack_b0 + 8))();
            }
          }
        }
        ppuStack_b0 = ppuVar8;
        if (ppuStack_a8 != (undefined **)0x0) {
          func_0x0001092b4274(&ppuStack_a8);
        }
        ppuStack_a0 = (undefined **)FUN_10a5000c4;
        ppuStack_b8 = ppuVar8 + 0x14;
        ppuStack_a8 = ppuVar8;
        __ZNSt13exception_ptrD1Ev(&ppuStack_1a0);
      }
      ppuVar8 = ppuStack_b8;
      if (ppuStack_b8[5] != (undefined *)0x0) {
        func_0x0001092b4274();
      }
      ppuVar8[5] = (undefined *)ppuStack_a8;
      ppuStack_a8 = (undefined **)0x0;
      ppuStack_1a0 = ppuStack_a0;
      ppuStack_198 = ppuStack_b8;
      puStack_190 = puVar9;
      (**(code **)*puVar9)(puVar9,&ppuStack_1a0);
      ppuStack_1b0 = ppuStack_b0;
      ppuStack_b0 = (undefined **)0x0;
      if (ppuStack_a8 != (undefined **)0x0) {
        func_0x0001092b4274(&ppuStack_a8);
        if (ppuStack_b0 != (undefined **)0x0) {
          ppuVar8 = ppuStack_b0 + 1;
          do {
            puVar11 = *ppuVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar3) {
              *ppuVar8 = puVar11 + -4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((ulong)puVar11 & 0x1fffffffc) == 4) {
            do {
              puVar11 = *ppuVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
              if (bVar3) {
                *ppuVar8 = puVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar11 + -1 == (undefined *)0x0) {
              (**(code **)(*ppuStack_b0 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&ppuStack_1b0);
      FUN_10a09b344(&ppuStack_1b0);
      if (ppuStack_1b0 != (undefined **)0x0) {
        ppuVar8 = ppuStack_1b0 + 1;
        do {
          puVar11 = *ppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar3) {
            *ppuVar8 = puVar11 + -4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((ulong)puVar11 & 0x1fffffffc) == 4) {
          do {
            puVar11 = *ppuVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar3) {
              *ppuVar8 = puVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar11 + -1 == (undefined *)0x0) {
            (**(code **)(*ppuStack_1b0 + 8))();
          }
        }
      }
      (*(code *)*apuStack_f0[0])(apuStack_f0);
      (*(code *)*apuStack_130[0])(apuStack_130);
      if (cStack_139 < '\0') {
        __ZdlPv(uStack_150);
      }
    }
    else {
      uVar6 = 8;
      __Znwm(8);
      FUN_10a4eb7ec();
      FUN_10a5005a0(param_1 + 0x17,uVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10a4ed128:
  func_0x0001092af97c(&ppuStack_1a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ed134);
  (*pcVar4)();
}



/* Entry: 10a4ed27c; end: 10a4ed2d7;  */

long FUN_10a4ed27c(long param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  lVar2 = 0x50;
  do {
    lVar1 = param_1 + lVar2;
    __ZNSt13exception_ptrD1Ev(lVar1 + -8);
    func_0x00010a09db0c(lVar1 + -0x18);
    FUN_10a234904(lVar1 + -0x28);
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0);
  return param_1;
}



/* Entry: 10a4ed2d8; end: 10a4ed6bb;  */

undefined8 * FUN_10a4ed2d8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_110be8558;
  puVar8 = (undefined8 *)param_1[0x16];
  if (puVar8 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar8[2];
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0xc0;
      __Znwm();
      plVar9[2] = 0;
      plVar9[1] = 0x200000006;
      *(undefined2 *)(plVar9 + 3) = 4;
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plVar9[9] = 0;
      plVar9[8] = 0;
      plVar9[0xb] = 0;
      plVar9[10] = 0;
      plVar9[0xd] = 0;
      plVar9[0xc] = 0;
      plVar9[0xf] = 0;
      plVar9[0xe] = 0;
      plVar9[0x10] = 0;
      plVar9[0x11] = (long)(plVar9 + 3);
      plVar9[0x12] = 0;
      *(undefined2 *)(plVar9 + 0x13) = 0;
      *plVar9 = (long)&PTR_DAT_110bea038;
      plStack_78 = plVar9 + 0x14;
      *plStack_78 = (long)param_1;
      *(undefined1 *)(plVar9 + 0x16) = 1;
      plVar9[0x17] = 0;
      lStack_60 = 0x10a50039c;
      plStack_70 = plVar9;
      plStack_68 = plVar9;
    }
    else {
      lStack_58 = 0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_58);
      if (lStack_58 != 0) {
        func_0x0001092af97c(&lStack_58);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ed648);
        (*pcVar4)();
      }
      plVar5 = (long *)0xc8;
      __Znwm();
      plVar5[2] = 0;
      plVar5[1] = 0x200000006;
      *(undefined2 *)(plVar5 + 3) = 4;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = (long)(plVar5 + 3);
      plVar5[0x12] = 0;
      *(undefined2 *)(plVar5 + 0x13) = 0;
      plVar5[0x14] = (long)param_1;
      *plVar5 = (long)&PTR_DAT_110bea000;
      *(undefined1 *)(plVar5 + 0x16) = 1;
      plVar5[0x17] = 0;
      plVar5[0x18] = (long)plVar9;
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
      plStack_70 = plVar5;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
      }
      lStack_60 = 0x10a50036c;
      plStack_78 = plVar5 + 0x14;
      plStack_68 = plVar5;
      __ZNSt13exception_ptrD1Ev(&lStack_58);
    }
    plVar9 = plStack_78;
    if (plStack_78[3] != 0) {
      func_0x0001092b4274();
    }
    plVar9[3] = (long)plStack_68;
    plStack_68 = (long *)0x0;
    lStack_58 = lStack_60;
    plStack_50 = plStack_78;
    puStack_48 = puVar8;
    (**(code **)*puVar8)(puVar8,&lStack_58);
    plStack_80 = plStack_70;
    plStack_70 = (long *)0x0;
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
    }
    FUN_109d1a244(&plStack_80);
    FUN_10a09b344(&plStack_80);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
    plVar9 = (long *)param_1[0x16];
    param_1[0x16] = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  func_0x00010a06e274(param_1 + 0x1a);
  FUN_10a235404(param_1 + 0x18);
  FUN_10a5005a0(param_1 + 0x17,0);
  plVar9 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  lVar6 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar6 != 0) {
    FUN_10a31ed38();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  lVar6 = 0;
  do {
    __ZNSt13exception_ptrD1Ev((long)param_1 + lVar6 + 0x58);
    func_0x00010a09db0c((long)param_1 + lVar6 + 0x48);
    FUN_10a234904((long)param_1 + lVar6 + 0x38);
    lVar6 = lVar6 + -0x28;
  } while (lVar6 != -0x50);
  __ZNSt3__16futureIvED1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a4ed6bc; end: 10a4ed6bf;  */

undefined8 * FUN_10a4ed6bc(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_110be8558;
  puVar8 = (undefined8 *)param_1[0x16];
  if (puVar8 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar8[2];
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0xc0;
      __Znwm();
      plVar9[2] = 0;
      plVar9[1] = 0x200000006;
      *(undefined2 *)(plVar9 + 3) = 4;
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plVar9[9] = 0;
      plVar9[8] = 0;
      plVar9[0xb] = 0;
      plVar9[10] = 0;
      plVar9[0xd] = 0;
      plVar9[0xc] = 0;
      plVar9[0xf] = 0;
      plVar9[0xe] = 0;
      plVar9[0x10] = 0;
      plVar9[0x11] = (long)(plVar9 + 3);
      plVar9[0x12] = 0;
      *(undefined2 *)(plVar9 + 0x13) = 0;
      *plVar9 = (long)&PTR_DAT_110bea038;
      plStack_78 = plVar9 + 0x14;
      *plStack_78 = (long)param_1;
      *(undefined1 *)(plVar9 + 0x16) = 1;
      plVar9[0x17] = 0;
      lStack_60 = 0x10a50039c;
      plStack_70 = plVar9;
      plStack_68 = plVar9;
    }
    else {
      lStack_58 = 0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_58);
      if (lStack_58 != 0) {
        func_0x0001092af97c(&lStack_58);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ed648);
        (*pcVar4)();
      }
      plVar5 = (long *)0xc8;
      __Znwm();
      plVar5[2] = 0;
      plVar5[1] = 0x200000006;
      *(undefined2 *)(plVar5 + 3) = 4;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = (long)(plVar5 + 3);
      plVar5[0x12] = 0;
      *(undefined2 *)(plVar5 + 0x13) = 0;
      plVar5[0x14] = (long)param_1;
      *plVar5 = (long)&PTR_DAT_110bea000;
      *(undefined1 *)(plVar5 + 0x16) = 1;
      plVar5[0x17] = 0;
      plVar5[0x18] = (long)plVar9;
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
      plStack_70 = plVar5;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
      }
      lStack_60 = 0x10a50036c;
      plStack_78 = plVar5 + 0x14;
      plStack_68 = plVar5;
      __ZNSt13exception_ptrD1Ev(&lStack_58);
    }
    plVar9 = plStack_78;
    if (plStack_78[3] != 0) {
      func_0x0001092b4274();
    }
    plVar9[3] = (long)plStack_68;
    plStack_68 = (long *)0x0;
    lStack_58 = lStack_60;
    plStack_50 = plStack_78;
    puStack_48 = puVar8;
    (**(code **)*puVar8)(puVar8,&lStack_58);
    plStack_80 = plStack_70;
    plStack_70 = (long *)0x0;
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
    }
    FUN_109d1a244(&plStack_80);
    FUN_10a09b344(&plStack_80);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
    plVar9 = (long *)param_1[0x16];
    param_1[0x16] = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  func_0x00010a06e274(param_1 + 0x1a);
  FUN_10a235404(param_1 + 0x18);
  FUN_10a5005a0(param_1 + 0x17,0);
  plVar9 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  lVar6 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar6 != 0) {
    FUN_10a31ed38();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  lVar6 = 0;
  do {
    __ZNSt13exception_ptrD1Ev((long)param_1 + lVar6 + 0x58);
    func_0x00010a09db0c((long)param_1 + lVar6 + 0x48);
    FUN_10a234904((long)param_1 + lVar6 + 0x38);
    lVar6 = lVar6 + -0x28;
  } while (lVar6 != -0x50);
  __ZNSt3__16futureIvED1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a4ed6c0; end: 10a4ed6d3;  */

void FUN_10a4ed6c0(void)

{
  FUN_10a4ed2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ed6d4; end: 10a4eda2f;  */

long FUN_10a4ed6d4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lStack_88 = 0;
  puVar7 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar7 == (undefined8 *)0x0) {
    lStack_88 = **(long **)(param_1 + 0xb8) + 0x68;
  }
  else {
    plVar8 = (long *)puVar7[2];
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0xc8;
      __Znwm();
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      plStack_78 = plVar8 + 0x14;
      *plStack_78 = param_1;
      *plVar8 = (long)&PTR_DAT_110bef1e8;
      plVar8[0x15] = (long)&lStack_88;
      *(undefined1 *)(plVar8 + 0x17) = 1;
      plVar8[0x18] = 0;
      pcStack_60 = (code *)0x10a5313dc;
      plStack_70 = plVar8;
      plStack_68 = plVar8;
    }
    else {
      pcStack_58 = (code *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
      if (pcStack_58 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ed9bc);
        (*pcVar4)();
      }
      plVar5 = (long *)0xd0;
      __Znwm();
      plVar5[2] = 0;
      plVar5[1] = 0x200000006;
      *(undefined2 *)(plVar5 + 3) = 4;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = (long)(plVar5 + 3);
      plVar5[0x12] = 0;
      *(undefined2 *)(plVar5 + 0x13) = 0;
      *plVar5 = (long)&PTR_DAT_110bef1b0;
      plVar5[0x14] = param_1;
      plVar5[0x15] = (long)&lStack_88;
      *(undefined1 *)(plVar5 + 0x17) = 1;
      plVar5[0x18] = 0;
      plVar5[0x19] = (long)plVar8;
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
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
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
      plStack_70 = plVar5;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
      }
      pcStack_60 = FUN_10a5313ac;
      plStack_78 = plVar5 + 0x14;
      plStack_68 = plVar5;
      __ZNSt13exception_ptrD1Ev(&pcStack_58);
    }
    plVar8 = plStack_78;
    if (plStack_78[4] != 0) {
      func_0x0001092b4274();
    }
    plVar8[4] = (long)plStack_68;
    plStack_68 = (long *)0x0;
    pcStack_58 = pcStack_60;
    plStack_50 = plStack_78;
    puStack_48 = puVar7;
    (**(code **)*puVar7)(puVar7,&pcStack_58);
    plStack_80 = plStack_70;
    plStack_70 = (long *)0x0;
    if ((plStack_68 != (long *)0x0) && (func_0x0001092b4274(&plStack_68), plStack_70 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_70 + 1);
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
          (**(code **)(*plStack_70 + 8))();
        }
      }
    }
    FUN_109d1a244(&plStack_80);
    FUN_10a09b344(&plStack_80);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
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
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
  }
  return lStack_88;
}



/* Entry: 10a4eda30; end: 10a4ee797;  */

void FUN_10a4eda30(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined1 auStack_180 [16];
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1[0x17] == 0) || ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    plVar10 = param_1 + 2;
    __ZNSt3__15mutex4lockEv(param_1 + 0xd);
    FUN_10a5005e8(plVar10);
    if (1 < *(uint *)(param_1 + 0xc)) goto LAB_10a4ee5fc;
    plVar9 = plVar10 + (ulong)*(uint *)(param_1 + 0xc) * 5;
    ppuStack_118 = (undefined **)plVar9[1];
    lStack_120 = *plVar9;
    if (plVar9[1] != 0) {
      plVar15 = (long *)(plVar9[1] + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_108 = (long *)plVar9[3];
    lStack_110 = plVar9[2];
    if (plVar9[3] != 0) {
      plVar15 = (long *)(plVar9[3] + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    __ZNSt13exception_ptrC1ERKS_(auStack_100,plVar9 + 4);
    if (1 < *(uint *)(param_1 + 0xc)) goto LAB_10a4ee5fc;
    plVar10 = plVar10 + (ulong)*(uint *)(param_1 + 0xc) * 5;
    if (*plVar10 == 0) {
      FUN_10a52fc9c(&plStack_b8);
      FUN_10a4ec2c4(plVar10,&plStack_b8);
      ppuVar8 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar7 = ppuStack_b0 + 1;
        do {
          puVar13 = *ppuVar7;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar5) {
            *ppuVar7 = puVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
    }
    FUN_10a225fb4(plVar10 + 2,param_4);
    __ZNSt3__15mutex6unlockEv(param_1 + 0xd);
    __ZNSt13exception_ptrD1Ev(auStack_100);
    plVar10 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar9 = plStack_108 + 1;
      do {
        lVar14 = *plVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (ppuStack_118 != (undefined **)0x0) {
      ppuVar8 = ppuStack_118 + 1;
      do {
        puVar13 = *ppuVar8;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar5) {
          *ppuVar8 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar7 = ppuStack_118;
      } while (cVar3 != '\0');
      goto LAB_10a4ee590;
    }
LAB_10a4ee5ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((int)param_1[0x1d] != (int)param_3 ||
        *(int *)((long)param_1 + 0xec) != (int)((ulong)param_3 >> 0x20)) {
      param_1[0x1d] = param_3;
      FUN_10a4eeaf8(param_1 + 2);
    }
    ppuVar7 = (undefined **)0x28;
    __Znwm();
    ppuVar17 = ppuVar7 + 1;
    *ppuVar17 = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    *ppuVar7 = (undefined *)&PTR_FUN_110bef220;
    ppuVar18 = ppuVar7 + 3;
    *ppuVar18 = (undefined *)*param_2;
    *param_2 = 0;
    __ZNSt3__17promiseIvEC1Ev(ppuVar7 + 4);
    ppuStack_130 = ppuVar18;
    ppuStack_128 = ppuVar7;
    __ZNSt3__17promiseIvE10get_futureEv(&ppuStack_170,ppuVar7 + 4);
    ppuVar8 = ppuStack_170;
    ppuStack_170 = (undefined **)0x0;
    plStack_b8 = (long *)param_1[1];
    param_1[1] = (long)ppuVar8;
    __ZNSt3__16futureIvED1Ev(&plStack_b8);
    iVar6 = (int)&ppuStack_170;
    __ZNSt3__16futureIvED1Ev();
    FUN_10ad055a0();
    if (iVar6 == 0) {
LAB_10a4edd34:
      plStack_b8 = (long *)param_1[0x1a];
      plStack_98 = (long *)param_1[0x1b];
      if (plStack_98 != (long *)0x0) {
        plVar10 = plStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_170 = (undefined **)0x0;
      ppuStack_168 = (undefined **)0x0;
      ppuStack_b0 = (undefined **)&UNK_109896774;
      ppuStack_a8 = &PTR_DAT_110b17068;
      plVar9 = (long *)0xd0;
      plStack_a0 = plStack_b8;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar15 = plVar9 + 3;
      *plVar9 = (long)&PTR_DAT_110ae90f0;
      func_0x000109d18d1c(plVar15,&UNK_10f65dc7c,0x1a,&plStack_b8);
    }
    else {
      ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar8 == (undefined *)0x0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar10 = (long *)*ppuVar8;
        if ((plVar10 == (long *)0x0) || ((**(code **)(*plVar10 + 0x18))(), plVar10 == (long *)0x0))
        goto LAB_10a4edd34;
        plVar10 = plVar10 + 7;
      }
      else {
        plVar10 = (long *)(*ppuVar8 + 8);
      }
      plStack_b8 = (long *)param_1[0x1a];
      plStack_98 = (long *)param_1[0x1b];
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_170 = (undefined **)0x0;
      ppuStack_168 = (undefined **)0x0;
      ppuStack_b0 = (undefined **)&UNK_109896774;
      ppuStack_a8 = &PTR_DAT_110b17068;
      plVar9 = (long *)0xd0;
      plStack_a0 = plStack_b8;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar15 = plVar9 + 3;
      *plVar9 = (long)&PTR_DAT_110ae90f0;
      func_0x000109d18e28(plVar15,&UNK_10f65dc7c,0x1a,&plStack_b8,plVar10);
    }
    plStack_140 = plVar15;
    plStack_138 = plVar9;
    func_0x0001092ba41c(&plStack_b8);
    (**(code **)(*(long *)param_1[0x18] + 0x20))((long *)param_1[0x18],plVar9 + 6);
    plVar10 = plStack_140;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar5) {
        *ppuVar17 = *ppuVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_160 = plStack_140;
    plStack_140 = (long *)0x0;
    plStack_138 = (long *)0x0;
    if ((*(byte *)((long)param_1 + 0xe1) & 0xfd) == 1) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)((long)param_1 + 0xe4) == 1;
    }
    ppuStack_170 = ppuVar18;
    ppuStack_168 = ppuVar7;
    plStack_158 = plVar9;
    plStack_150 = param_1;
    if (param_1[0x17] == 0) {
LAB_10a4ee280:
      plVar10 = plStack_158;
      if (plStack_158 != (long *)0x0) {
        plVar9 = plStack_158 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      ppuVar8 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar7 = ppuStack_168 + 1;
        do {
          puVar13 = *ppuVar7;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar5) {
            *ppuVar7 = puVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      if (((*(byte *)((long)param_1 + 0xe1) & 0xfd) != 1) && (*(int *)((long)param_1 + 0xe4) == 1))
      {
        __ZNSt3__15mutex4lockEv(param_1 + 0xd);
        plVar10 = param_1 + 2;
        FUN_10a5005e8(plVar10);
        uVar2 = *(uint *)(param_1 + 0xc);
        if (1 < uVar2) goto LAB_10a4ee5fc;
        plVar9 = (long *)plVar10[(ulong)uVar2 * 5 + 1];
        if (plVar10[(ulong)uVar2 * 5 + 1] != 0) {
          plVar15 = (long *)(plVar10[(ulong)uVar2 * 5 + 1] + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = *plVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar15 = (long *)plVar10[(ulong)uVar2 * 5 + 3];
        if (plVar10[(ulong)uVar2 * 5 + 3] != 0) {
          plVar16 = (long *)(plVar10[(ulong)uVar2 * 5 + 3] + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = *plVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        __ZNSt13exception_ptrC1ERKS_(auStack_180,plVar10 + (ulong)uVar2 * 5 + 4);
        if (1 < *(uint *)(param_1 + 0xc)) goto LAB_10a4ee5fc;
        plVar10 = plVar10 + (ulong)*(uint *)(param_1 + 0xc) * 5;
        if (*plVar10 == 0) {
          FUN_10a52fc9c(&plStack_b8);
          FUN_10a4ec2c4(plVar10,&plStack_b8);
          ppuVar8 = ppuStack_b0;
          if (ppuStack_b0 != (undefined **)0x0) {
            ppuVar7 = ppuStack_b0 + 1;
            do {
              puVar13 = *ppuVar7;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar5) {
                *ppuVar7 = puVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (puVar13 == (undefined *)0x0) {
              (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
            }
          }
          FUN_10a225fb4(plVar10 + 2,param_4);
        }
        __ZNSt3__15mutex6unlockEv(param_1 + 0xd);
        __ZNSt13exception_ptrD1Ev(auStack_180);
        if (plVar15 != (long *)0x0) {
          plVar10 = plVar15 + 1;
          do {
            lVar14 = *plVar10;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar14 = *plVar10;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      FUN_10a4ee820(&plStack_b8,param_1 + 2);
      if ((((*(byte *)((long)param_1 + 0xe1) & 0xfd) == 1) || (*(int *)((long)param_1 + 0xe4) == 0))
         || (plStack_b8 == (long *)0x0)) {
        FUN_10a4ee8d4(param_1);
      }
      __ZNSt13exception_ptrD1Ev(&plStack_98);
      plVar10 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar9 = plStack_a0 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      ppuVar8 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar7 = ppuStack_b0 + 1;
        do {
          puVar13 = *ppuVar7;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar5) {
            *ppuVar7 = puVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      plVar10 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar9 = plStack_138 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (ppuStack_128 != (undefined **)0x0) {
        ppuVar8 = ppuStack_128 + 1;
        do {
          puVar13 = *ppuVar8;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar5) {
            *ppuVar8 = puVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          ppuVar7 = ppuStack_128;
        } while (cVar3 != '\0');
LAB_10a4ee590:
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      goto LAB_10a4ee5ac;
    }
    plVar15 = (long *)param_1[0x16];
    if (plVar15 == (long *)0x0) {
      FUN_10a531670(&ppuStack_170);
      goto LAB_10a4ee280;
    }
    ppuStack_170 = (undefined **)0x0;
    ppuStack_168 = (undefined **)0x0;
    plStack_a0 = plVar10;
    plStack_160 = (long *)0x0;
    plStack_158 = (long *)0x0;
    plStack_b8 = param_1;
    ppuStack_b0 = ppuVar18;
    ppuStack_a8 = ppuVar7;
    plStack_98 = plVar9;
    plStack_90 = param_1;
    if (bVar5) {
      plVar16 = (long *)plVar15[2];
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x40;
        __Znwm();
        *plVar16 = (long)param_1;
        ppuStack_b0 = (undefined **)0x0;
        ppuStack_a8 = (undefined **)0x0;
        plVar16[4] = (long)plVar9;
        plVar16[3] = (long)plVar10;
        plVar16[2] = (long)ppuVar7;
        plVar16[1] = (long)ppuVar18;
        plStack_a0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        plVar16[5] = (long)param_1;
        plVar16[7] = 0x10a533618;
        pcStack_f0 = FUN_10a53359c;
        plStack_e8 = plVar16;
        plStack_e0 = plVar15;
        (**(code **)*plVar15)(plVar15,&pcStack_f0);
      }
      else {
        pcStack_d0 = (code *)0x0;
        (**(code **)(*plVar16 + 0x28))(plVar16,0,&pcStack_d0);
        if (pcStack_d0 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_d0);
          goto LAB_10a4ee5fc;
        }
        plVar11 = (long *)0x48;
        __Znwm();
        *plVar11 = (long)param_1;
        plVar11[1] = (long)ppuVar18;
        ppuStack_b0 = (undefined **)0x0;
        ppuStack_a8 = (undefined **)0x0;
        plVar11[2] = (long)ppuVar7;
        plVar11[3] = (long)plVar10;
        plStack_a0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        plVar11[4] = (long)plVar9;
        plVar11[5] = (long)param_1;
        plVar11[7] = (long)FUN_10a5335e0;
        plVar11[8] = (long)plVar16;
        pcStack_f0 = FUN_10a53356c;
        plStack_e8 = plVar11;
        plStack_e0 = plVar15;
        (**(code **)*plVar15)(plVar15,&pcStack_f0);
        __ZNSt13exception_ptrD1Ev(&pcStack_d0);
      }
      pcStack_d0 = (code *)0x0;
      __ZNSt13exception_ptrD1Ev(&pcStack_d0);
LAB_10a4ee248:
      ppuVar8 = ppuStack_a8;
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar7 = ppuStack_a8 + 1;
        do {
          puVar13 = *ppuVar7;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar5) {
            *ppuVar7 = puVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      goto LAB_10a4ee280;
    }
    plVar16 = (long *)plVar15[2];
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    if (plVar16 == (long *)0x0) {
      plStack_98 = (long *)0x0;
      plStack_a0 = (long *)0x0;
      ppuStack_a8 = (undefined **)0x0;
      ppuStack_b0 = (undefined **)0x0;
      plVar16 = (long *)0xe8;
      __Znwm();
      plVar16[2] = 0;
      plVar16[1] = 0x200000006;
      *(undefined2 *)(plVar16 + 3) = 4;
      plVar16[5] = 0;
      plVar16[4] = 0;
      plVar16[7] = 0;
      plVar16[6] = 0;
      plVar16[9] = 0;
      plVar16[8] = 0;
      plVar16[0xb] = 0;
      plVar16[10] = 0;
      plVar16[0xd] = 0;
      plVar16[0xc] = 0;
      plVar16[0xf] = 0;
      plVar16[0xe] = 0;
      plVar16[0x10] = 0;
      plVar16[0x11] = (long)(plVar16 + 3);
      plVar16[0x12] = 0;
      *(undefined2 *)(plVar16 + 0x13) = 0;
      *plVar16 = (long)&PTR_DAT_110bef2a8;
      pcStack_f0 = (code *)(plVar16 + 0x14);
      *(long **)pcStack_f0 = param_1;
      plVar16[0x15] = (long)ppuVar18;
      plVar16[0x16] = (long)ppuVar7;
      plVar16[0x17] = (long)plVar10;
      plVar16[0x18] = (long)plVar9;
      plVar16[0x19] = (long)param_1;
      *(undefined1 *)(plVar16 + 0x1b) = 1;
      plVar16[0x1c] = 0;
      pcStack_d8 = FUN_10a533680;
      plStack_e8 = plVar16;
      plStack_e0 = plVar16;
LAB_10a4ee110:
      pcVar4 = pcStack_f0;
      if (*(long *)(pcStack_f0 + 0x40) != 0) {
        func_0x0001092b4274();
      }
      *(long **)(pcVar4 + 0x40) = plStack_e0;
      plStack_e0 = (long *)0x0;
      pcStack_d0 = pcStack_d8;
      pcStack_c8 = pcStack_f0;
      plStack_c0 = plVar15;
      (**(code **)*plVar15)(plVar15,&pcStack_d0);
      plStack_f8 = plStack_e8;
      plStack_e8 = (long *)0x0;
      if ((plStack_e0 != (long *)0x0) &&
         (func_0x0001092b4274(&plStack_e0), plStack_e8 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_e8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_e8 + 8))();
          }
        }
      }
      FUN_109d1a244(&plStack_f8);
      FUN_10a09b344(&plStack_f8);
      if (plStack_f8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_f8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_f8 + 8))();
          }
        }
      }
      plVar10 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar9 = plStack_98 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      goto LAB_10a4ee248;
    }
    pcStack_d0 = (code *)0x0;
    (**(code **)(*plVar16 + 0x28))(plVar16,0,&pcStack_d0);
    if (pcStack_d0 == (code *)0x0) {
      plStack_98 = (long *)0x0;
      plStack_a0 = (long *)0x0;
      ppuStack_a8 = (undefined **)0x0;
      ppuStack_b0 = (undefined **)0x0;
      plVar11 = (long *)0xf0;
      __Znwm();
      plVar11[2] = 0;
      plVar11[1] = 0x200000006;
      *(undefined2 *)(plVar11 + 3) = 4;
      plVar11[5] = 0;
      plVar11[4] = 0;
      plVar11[7] = 0;
      plVar11[6] = 0;
      plVar11[9] = 0;
      plVar11[8] = 0;
      plVar11[0xb] = 0;
      plVar11[10] = 0;
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      plVar11[0xf] = 0;
      plVar11[0xe] = 0;
      plVar11[0x10] = 0;
      plVar11[0x11] = (long)(plVar11 + 3);
      plVar11[0x12] = 0;
      *(undefined2 *)(plVar11 + 0x13) = 0;
      *plVar11 = (long)&PTR_FUN_110bef270;
      plVar11[0x14] = (long)param_1;
      plVar11[0x15] = (long)ppuVar18;
      plVar11[0x16] = (long)ppuVar7;
      plVar11[0x17] = (long)plVar10;
      plVar11[0x18] = (long)plVar9;
      plVar11[0x19] = (long)param_1;
      *(undefined1 *)(plVar11 + 0x1b) = 1;
      plVar11[0x1c] = 0;
      plVar11[0x1d] = (long)plVar16;
      if (plStack_e8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_e8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_e8 + 8))();
          }
        }
      }
      plStack_e8 = plVar11;
      if (plStack_e0 != (long *)0x0) {
        func_0x0001092b4274(&plStack_e0);
      }
      pcStack_d8 = (code *)0x10a533650;
      pcStack_f0 = (code *)(plVar11 + 0x14);
      plStack_e0 = plVar11;
      __ZNSt13exception_ptrD1Ev(&pcStack_d0);
      goto LAB_10a4ee110;
    }
  }
  func_0x0001092af97c(&pcStack_d0);
LAB_10a4ee5fc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ee600);
  (*pcVar4)();
}



/* Entry: 10a4ee798; end: 10a4ee81f;  */

long FUN_10a4ee798(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  __ZNSt13exception_ptrD1Ev(param_1 + 0x20);
  func_0x00010a09db0c(param_1 + 0x10);
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



/* Entry: 10a4ee820; end: 10a4ee8d3;  */

void FUN_10a4ee820(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x58);
  FUN_10a5005e8(param_2);
  if (*(uint *)(param_2 + 0x50) < 2) {
    puVar5 = (undefined8 *)(param_2 + (ulong)*(uint *)(param_2 + 0x50) * 0x28);
    lVar6 = puVar5[1];
    uVar7 = *puVar5;
    param_1[1] = puVar5[1];
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
    lVar6 = puVar5[3];
    uVar7 = puVar5[2];
    param_1[3] = puVar5[3];
    param_1[2] = uVar7;
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
    __ZNSt13exception_ptrC1ERKS_(param_1 + 4,puVar5 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4ee8c0);
  (*pcVar4)();
}



/* Entry: 10a4ee8d4; end: 10a4ee8ff;  */

char FUN_10a4ee8d4(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 auStack_40 [2];
  
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__16futureIvE3getEv();
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x68);
  cVar4 = *(char *)(param_1 + 100);
  if (cVar4 == '\x01') {
    auStack_40[0] = 0;
    plStack_58 = (long *)0x0;
    uStack_60 = 0;
    plStack_48 = (long *)0x0;
    uStack_50 = 0;
    if (1 < *(uint *)(param_1 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a4eeaf8);
      (*pcVar8)();
    }
    lVar9 = param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0x60) * 0x28;
    FUN_10a4ec2c4(lVar9,&uStack_60);
    func_0x00010a099dfc(lVar9 + 0x10,&uStack_50);
    __ZNSt13exception_ptraSERKS_(lVar9 + 0x20,auStack_40);
    __ZNSt13exception_ptrD1Ev(auStack_40);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    uVar2 = *(int *)(param_1 + 0x60) + 1U & 1;
    uVar3 = -uVar2;
    if (-2 < *(int *)(param_1 + 0x60)) {
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0x60) = uVar3;
    *(undefined1 *)(param_1 + 100) = 0;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x68);
  return cVar4;
}



/* Entry: 10a4ee900; end: 10a4ee9cf;  */

void FUN_10a4ee900(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long lStack_38;
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  FUN_10a4ee820(auStack_48,param_1 + 0x10);
  if (lStack_38 == 0) {
    FUN_10a4ee8d4(param_1);
  }
  __ZNSt13exception_ptrD1Ev(auStack_28);
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



/* Entry: 10a4ee9d0; end: 10a4eeaf7;  */

char FUN_10a4ee9d0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 auStack_40 [2];
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  cVar4 = *(char *)(param_1 + 0x54);
  if (cVar4 == '\x01') {
    auStack_40[0] = 0;
    plStack_58 = (long *)0x0;
    uStack_60 = 0;
    plStack_48 = (long *)0x0;
    uStack_50 = 0;
    if (1 < *(uint *)(param_1 + 0x50)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a4eeaf8);
      (*pcVar8)();
    }
    lVar9 = param_1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
    FUN_10a4ec2c4(lVar9,&uStack_60);
    func_0x00010a099dfc(lVar9 + 0x10,&uStack_50);
    __ZNSt13exception_ptraSERKS_(lVar9 + 0x20,auStack_40);
    __ZNSt13exception_ptrD1Ev(auStack_40);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    uVar2 = *(int *)(param_1 + 0x50) + 1U & 1;
    uVar3 = -uVar2;
    if (-2 < *(int *)(param_1 + 0x50)) {
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0x50) = uVar3;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x58);
  return cVar4;
}



/* Entry: 10a4eeaf8; end: 10a4eebc3;  */

void FUN_10a4eeaf8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  lVar2 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_10a4ec2c4(lVar1,(long)&uStack_90 + lVar2);
    func_0x00010a099dfc(lVar1 + 0x10,(long)&uStack_80 + lVar2);
    __ZNSt13exception_ptraSERKS_(lVar1 + 0x20,(long)&uStack_70 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x50);
  lVar2 = 0x50;
  do {
    __ZNSt13exception_ptrD1Ev(auStack_98 + lVar2);
    func_0x00010a09db0c(auStack_a8 + lVar2);
    FUN_10a234904(auStack_b8 + lVar2);
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x58);
  return;
}



/* Entry: 10a4eebc4; end: 10a4eec27;  */

undefined8 FUN_10a4eebc4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a4eec28(&uStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return uStack_30;
}



/* Entry: 10a4eec28; end: 10a4eed1f;  */

void FUN_10a4eec28(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_48;
  long *plStack_40;
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  FUN_10a4ee820(&lStack_48,param_2 + 0x10);
  if (lStack_48 != 0) {
    *param_1 = lStack_48;
    param_1[1] = (long)plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    __ZNSt13exception_ptrD1Ev(auStack_28);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f65d603);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4eed0c);
  (*pcVar4)();
}



/* Entry: 10a4eed20; end: 10a4eeda3;  */

void FUN_10a4eed20(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  uVar1 = *(int *)(param_1 + 0x50) + 1U & 1;
  uVar2 = -uVar1;
  if (-2 < *(int *)(param_1 + 0x50)) {
    uVar2 = uVar1;
  }
  if (-1 < (int)uVar2) {
    lVar4 = param_1 + (ulong)uVar2 * 0x28;
    FUN_10a4ec2c4(lVar4,param_2);
    func_0x00010a099dfc(lVar4 + 0x10,param_2 + 0x10);
    __ZNSt13exception_ptraSERKS_(lVar4 + 0x20,param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x54) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4eeda0);
  (*pcVar3)();
}



/* Entry: 10a4eeda4; end: 10a4ef00b;  */

void FUN_10a4eeda4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((((*(byte *)(param_2 + 0xe1) & 0xfd) != 1) && (*(int *)(param_2 + 0xe4) != 0)) &&
     (*(long *)(param_2 + 8) == 0)) {
    FUN_10a4ee820(&uStack_70,param_2 + 0x10);
    func_0x00010a099dfc(param_1,&uStack_60);
    __ZNSt13exception_ptrD1Ev(auStack_50);
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_68 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_68 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_10a4eef34:
    plVar1 = plStack_68;
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
    return;
  }
  __ZNSt3__15mutex4lockEv(param_2 + 0x68);
  lVar7 = param_2 + 0x10;
  FUN_10a5005e8(lVar7);
  if (*(uint *)(param_2 + 0x60) < 2) {
    puVar6 = (undefined8 *)(lVar7 + (ulong)*(uint *)(param_2 + 0x60) * 0x28);
    plStack_68 = (long *)puVar6[1];
    uStack_70 = *puVar6;
    if (puVar6[1] != 0) {
      plVar1 = (long *)(puVar6[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_58 = (long *)puVar6[3];
    uStack_60 = puVar6[2];
    if (puVar6[3] != 0) {
      plVar1 = (long *)(puVar6[3] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    __ZNSt13exception_ptrC1ERKS_(auStack_50,puVar6 + 4);
    if (*(uint *)(param_2 + 0x60) < 2) {
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
      func_0x00010a099dfc(lVar7 + (ulong)*(uint *)(param_2 + 0x60) * 0x28 + 0x10,&uStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      __ZNSt3__15mutex6unlockEv(param_2 + 0x68);
      func_0x00010a099dfc(param_1,&uStack_60);
      __ZNSt13exception_ptrD1Ev(auStack_50);
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plStack_68 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_68 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10a4eef34;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4eefe4);
  (*pcVar5)();
}



/* Entry: 10a4ef00c; end: 10a4ef0bb;  */

undefined8 * FUN_10a4ef00c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_110be8578;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  plVar4 = puVar1 + 3;
  *plVar4 = 0;
  param_1[1] = plVar4;
  param_1[2] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bef2e0;
  puVar1[4] = 0;
  puVar1[5] = 0xbff0000000000000;
  lVar2 = 0x50;
  __Znwm();
  FUN_10a0f984c();
  plVar3 = (long *)*plVar4;
  *plVar4 = lVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10a4ef0bc; end: 10a4ef0c3;  */

undefined8 FUN_10a4ef0bc(void)

{
  return 0;
}



/* Entry: 10a4ef0c4; end: 10a4ef15f;  */

void FUN_10a4ef0c4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(lVar3 + 8) == '\x01') {
    dVar5 = *(double *)(param_2 + 0x20);
    dVar4 = *(double *)(lVar3 + 0x10);
    if (*(double *)(lVar3 + 0x10) == -1.0) {
      *(double *)(lVar3 + 0x10) = dVar5;
      dVar4 = dVar5;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x18);
    uVar2 = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x18) = 0;
    *(double *)(param_2 + 0x20) = dVar5 - dVar4;
    *(undefined1 *)(param_2 + 0x28) = 1;
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x128))
              ((long *)**(undefined8 **)(param_1 + 8),param_2,0);
    *(undefined1 *)(param_2 + 0x18) = uVar1;
    *(double *)(param_2 + 0x20) = dVar5;
    *(undefined1 *)(param_2 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 10a4ef160; end: 10a4ef1e3;  */

void FUN_10a4ef160(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x1b0))();
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = 0x50;
  __Znwm();
  FUN_10a0f984c();
  plVar2 = (long *)*plVar3;
  *plVar3 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = 0xbff0000000000000;
  return;
}



/* Entry: 10a4ef1e4; end: 10a4ef1eb;  */

void FUN_10a4ef1e4(void)

{
  return;
}



/* Entry: 10a4ef1ec; end: 10a4ef2d7;  */

undefined8 * FUN_10a4ef1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef718;
  FUN_10a4fdd5c(param_1 + 2);
  return param_1;
}



/* Entry: 10a4ef2d8; end: 10a4ef2df;  */

undefined8 FUN_10a4ef2d8(void)

{
  return 0x100;
}



/* Entry: 10a4ef2e0; end: 10a4ef363;  */

void FUN_10a4ef2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef348;
  func_0x00010a22fc28(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a4ef364; end: 10a4ef383;  */

undefined8 FUN_10a4ef364(undefined8 param_1,int param_2)

{
  if (param_2 != -0x732262d0 && param_2 != -0x6ab1043f) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4ef384; end: 10a4ef467;  */

void FUN_10a4ef384(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x330;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bea070;
  FUN_10a5009e0(puVar1 + 3,param_2);
  puVar1[3] = &PTR_DAT_110be86a0;
  puVar1[5] = &PTR_DAT_110be8700;
  uVar2 = *(undefined8 *)(param_2 + 0x230);
  uVar4 = *(undefined8 *)(param_2 + 0x248);
  uVar3 = *(undefined8 *)(param_2 + 0x240);
  puVar1[0x4a] = *(undefined8 *)(param_2 + 0x238);
  puVar1[0x49] = uVar2;
  puVar1[0x4c] = uVar4;
  puVar1[0x4b] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x24c);
  *(undefined8 *)((long)puVar1 + 0x26c) = *(undefined8 *)(param_2 + 0x254);
  *(undefined8 *)((long)puVar1 + 0x264) = uVar2;
  FUN_10a501c20(puVar1 + 0x4f,param_2 + 0x260);
  uVar2 = *(undefined8 *)(param_2 + 0x2e8);
  uVar4 = *(undefined8 *)(param_2 + 0x300);
  uVar3 = *(undefined8 *)(param_2 + 0x2f8);
  puVar1[0x61] = *(undefined8 *)(param_2 + 0x2f0);
  puVar1[0x60] = uVar2;
  puVar1[99] = uVar4;
  puVar1[0x62] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x308);
  puVar1[0x65] = *(undefined8 *)(param_2 + 0x310);
  puVar1[100] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x2a8);
  uVar4 = *(undefined8 *)(param_2 + 0x2c0);
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  puVar1[0x59] = *(undefined8 *)(param_2 + 0x2b0);
  puVar1[0x58] = uVar2;
  puVar1[0x5b] = uVar4;
  puVar1[0x5a] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x2c8);
  uVar3 = *(undefined8 *)(param_2 + 0x2e0);
  uVar2 = *(undefined8 *)(param_2 + 0x2d8);
  puVar1[0x5d] = *(undefined8 *)(param_2 + 0x2d0);
  puVar1[0x5c] = uVar4;
  puVar1[0x5f] = uVar3;
  puVar1[0x5e] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x288);
  uVar3 = *(undefined8 *)(param_2 + 0x2a0);
  uVar2 = *(undefined8 *)(param_2 + 0x298);
  puVar1[0x55] = *(undefined8 *)(param_2 + 0x290);
  puVar1[0x54] = uVar4;
  puVar1[0x57] = uVar3;
  puVar1[0x56] = uVar2;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a4ef468; end: 10a4ef48b;  */

long FUN_10a4ef468(long param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  if (param_2 != -0x732262d0 && param_2 != -0x6ab1043f) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4ef48c; end: 10a4ef523;  */

undefined8 * FUN_10a4ef48c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef528;
  FUN_10a0d92c8(param_1 + 0xb);
  FUN_10a0d92c8(param_1 + 9);
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a4ef524; end: 10a4ef527;  */

undefined8 * FUN_10a4ef524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef460;
  param_1[2] = &PTR_DAT_110bef4c0;
  func_0x00010a5007c4(param_1 + 0x41);
  func_0x00010a500748(param_1 + 0x3c);
  func_0x00010a500748(param_1 + 0x37);
  func_0x00010a500748(param_1 + 0x32);
  func_0x00010a50088c(param_1 + 0x2d);
  func_0x00010a500908(param_1 + 0x28);
  param_1[0x1b] = &PTR_FUN_110bef528;
  FUN_10a0d92c8(param_1 + 0x26);
  FUN_10a0d92c8(param_1 + 0x24);
  param_1[0x1d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x1e);
  param_1[0x10] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x19);
  param_1[0x12] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 10a4ef528; end: 10a4ef53b;  */

void FUN_10a4ef528(void)

{
  FUN_10a500684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4ef53c; end: 10a4ef54f;  */

undefined8 FUN_10a4ef53c(undefined8 param_1,int param_2)

{
  if (param_2 != -0x732262d0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4ef550; end: 10a4ef5b7;  */

void FUN_10a4ef550(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x248;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110bef410;
  FUN_10a5009e0(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4ef5b8; end: 10a4ef5cf;  */

long FUN_10a4ef5b8(long param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  if (param_2 != -0x732262d0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4ef5d0; end: 10a4ef657;  */

undefined8 * FUN_10a4ef5d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 9);
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a4ef658; end: 10a4ef667;  */

undefined8 FUN_10a4ef658(void)

{
  return 1;
}



/* Entry: 10a4ef668; end: 10a4ef6e7;  */

undefined8 * FUN_10a4ef668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be8790;
  FUN_10a501fc8(param_1 + 6);
  func_0x00010a28f7d8(param_1 + 1);
  return param_1;
}



/* Entry: 10a4ef6e8; end: 10a4ef6ef;  */

undefined8 FUN_10a4ef6e8(void)

{
  return 1;
}



/* Entry: 10a4ef6f0; end: 10a4ef7c7;  */

undefined8 * FUN_10a4ef6f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be8820;
  FUN_10a509c6c(param_1 + 1);
  return param_1;
}



/* Entry: 10a4ef7c8; end: 10a4ef7d3;  */

undefined8 FUN_10a4ef7c8(void)

{
  return 0x40;
}



/* Entry: 10a4ef7d4; end: 10a4ef833;  */

undefined8 * FUN_10a4ef7d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be8578;
  FUN_10a533a00(param_1 + 1);
  return param_1;
}



/* Entry: 10a4ef834; end: 10a4ef837;  */

void FUN_10a4ef834(void)

{
  return;
}



/* Entry: 10a4ef838; end: 10a4ef88f;  */

long FUN_10a4ef838(long param_1)

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



/* Entry: 10a4ef890; end: 10a4ef8a3;  */

undefined * FUN_10a4ef890(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((puVar1[0x38] == '\x01') && ((char)puVar1[0x37] < '\0')) {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x20));
  }
  puStack_38 = puVar1 + 8;
  FUN_10a2303d4(&puStack_38);
  return puVar1;
}



/* Entry: 10a4ef8a4; end: 10a4ef8f7;  */

long FUN_10a4ef8a4(long param_1)

{
  long lStack_28;
  
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x37) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lStack_28 = param_1 + 8;
  FUN_10a2303d4(&lStack_28);
  return param_1;
}



/* Entry: 10a4ef8f8; end: 10a4efa27;  */

void FUN_10a4ef8f8(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 2) < param_4) {
    puVar5 = param_1;
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar5 = puVar7;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_109ffe1ac();
      *puVar5 = 0;
      return;
    }
    uVar1 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar1 = 0x3fffffffffffffff;
    }
    FUN_109ffe174(param_1,uVar1);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined4 *)puVar4 = *param_2;
      puVar4 = (undefined8 *)((long)puVar4 + 4);
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar5 - (long)puVar7 >> 2) < param_4) {
      puVar6 = (undefined4 *)((long)param_2 + ((long)puVar5 - (long)puVar7));
      puVar4 = puVar5;
      if (puVar5 != puVar7) {
        _memmove(puVar7,param_2);
        puVar5 = (undefined8 *)param_1[1];
        puVar4 = puVar5;
      }
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *(undefined4 *)puVar5 = *puVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 4);
        puVar4 = (undefined8 *)((long)puVar4 + 4);
      }
    }
    else {
      lVar2 = (long)param_3 - (long)param_2;
      if (lVar2 != 0) {
        _memmove(puVar7,param_2,lVar2);
      }
      puVar4 = (undefined8 *)((long)puVar7 + lVar2);
    }
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a4efa28; end: 10a4efa37;  */

void FUN_10a4efa28(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4efa38; end: 10a4efbc7;  */

void FUN_10a4efa38(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  ulong param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_80 = param_1;
  uStack_78 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_70;
    lStack_70 = param_1;
    uStack_68 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (param_5 != 1) {
      plVar3 = &lStack_70;
      lStack_70 = param_1;
      uStack_68 = param_2;
      func_0x00010a289568(plVar3,param_4[1]);
      if (2 < param_5) {
        lStack_70 = param_1;
        uStack_68 = param_2;
        FUN_10a4efbc8(&lStack_70,param_4[2]);
        if (param_5 != 3) {
          lStack_70 = param_1;
          uStack_68 = param_2;
          func_0x00010a4efc70(&lStack_70,param_4[3]);
          if (4 < param_5) {
            lStack_70 = param_1;
            uStack_68 = param_2;
            func_0x00010a4efd18(&lStack_70,param_4[4]);
            if ((*plVar2 != 0) && (*plVar3 != 0)) {
              plVar3 = &lStack_80;
              FUN_10a4efdc0(plVar3,param_3);
              uVar4 = 0x48;
              __Znwm(0x48);
              FUN_10a4cc7cc((double)*(long *)*plVar2 / 1000000000.0);
              lStack_70 = 0;
              func_0x00010a5026a0(plVar3,uVar4);
              func_0x00010a5026a0(&lStack_70,0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4efbb4);
  (*pcVar1)();
}



/* Entry: 10a4efbc8; end: 10a4efdbf;  */

long FUN_10a4efbc8(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001133024e8 & 1) == 0) {
    iVar1 = 0x133024e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c5fe4,0x1133024e0,0x100000000);
      ___cxa_guard_release(0x1133024e8);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1133024e0;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4efdc0; end: 10a4efe63;  */

long FUN_10a4efdc0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb290 & 1) == 0) {
    iVar1 = 0x137eb290;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c6014,0x1137eb288,0x100000000);
      ___cxa_guard_release(0x1137eb290);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb288;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4efe64; end: 10a4efebb;  */

/* WARNING: Possible PIC construction at 0x00010a22dfcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a22dfd0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10a4efe64(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  plVar1 = (long *)*(long *)(param_1 + 0x18);
  while (plVar3 = plVar1, plVar3 != (long *)0x0) {
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_x30 = 0x10a22dfd0;
    puVar2 = puVar2 + -0x20;
    unaff_x19 = plVar3;
    unaff_x20 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
  }
  return;
}



/* Entry: 10a4efebc; end: 10a4eff03;  */

undefined1  [16] FUN_10a4efebc(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar6 = param_1;
    FUN_10a4eff18();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + param_2 * 3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar6;
    return auVar7;
  }
  FUN_10a4eff04();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_2 * 0x18;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 10a4eff04; end: 10a4eff17;  */

undefined1  [16] FUN_10a4eff04(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_2 * 0x18;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a4eff18; end: 10a4f008f;  */

undefined1  [16] FUN_10a4eff18(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar4 = param_2 * 0x18;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a4f0090; end: 10a4f010b;  */

void FUN_10a4f0090(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    FUN_10a4efebc(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
      puVar1 = puVar1 + 3;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a4f010c; end: 10a4f0163;  */

void FUN_10a4f010c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_10a4f0164();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a4f0164; end: 10a4f01ab;  */

undefined8 * FUN_10a4f0164(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110af63a8;
  func_0x000109484a78(param_1 + 3);
  return param_1;
}


