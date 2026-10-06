/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a18388c; end: 10a1838eb;  */

void FUN_10a18388c(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lStack_28 = param_1 + 0x30;
    func_0x00010a09ad80(&lStack_28);
    if (*(long *)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
      __ZdlPv();
    }
    lStack_28 = param_1;
    FUN_10a09ae0c(&lStack_28);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 10a1838ec; end: 10a18395f;  */

long * FUN_10a1838ec(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_1[3];
  if (uVar5 < 3) {
    param_1[uVar5] = param_2;
    param_1[3] = uVar5 + 1;
    return param_1;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  uVar3 = uVar2;
  ___cxa_throw(uVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(uVar2);
  __Unwind_Resume(uVar3);
  plVar4 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  lVar1 = plVar4[1];
  lVar6 = plVar4[2];
  while (lVar6 != lVar1) {
    plVar4[2] = lVar6 + -0x578;
    func_0x00010a09acc8();
    lVar6 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 10a183960; end: 10a183973;  */

long * FUN_10a183960(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x578;
    func_0x00010a09acc8();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a183974; end: 10a1839bf;  */

long * FUN_10a183974(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x578;
    func_0x00010a09acc8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1839c0; end: 10a1839d3;  */

void FUN_10a1839c0(void)

{
  FUN_109ffde64(&UNK_10f6403f7);
  return;
}



/* Entry: 10a1839d4; end: 10a1839db;  */

void FUN_10a1839d4(void)

{
  return;
}



/* Entry: 10a1839dc; end: 10a183a0f;  */

void FUN_10a1839dc(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a183a10; end: 10a183a17;  */

void FUN_10a183a10(void)

{
  return;
}



/* Entry: 10a183a18; end: 10a183be7;  */

void FUN_10a183a18(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((((ulong)plVar4 & 1) != 0) && (*(char *)((long)plVar6 + 0x27) < '\0')) {
    __ZdlPv(plVar6[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a183be8; end: 10a183c83;  */

void FUN_10a183be8(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a183c84; end: 10a183c8b;  */

void FUN_10a183c84(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a183c88);
  (*pcVar1)();
}



/* Entry: 10a183c8c; end: 10a183caf;  */

bool FUN_10a183c8c(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10a2421c8();
  return *(long *)(lVar1 + 0x230) != 0;
}



/* Entry: 10a183cb0; end: 10a183cbb;  */

void FUN_10a183cb0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x68] = 0;
  return;
}



/* Entry: 10a183cbc; end: 10a183d73;  */

void FUN_10a183cbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a1950ec();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a183d74; end: 10a183dcf;  */

long * FUN_10a183d74(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a183dd0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a183dd0; end: 10a183e6b;  */

void FUN_10a183dd0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a183e6c; end: 10a184023;  */

long * FUN_10a183e6c(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long lStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1 + 5;
  FUN_10a1842bc();
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 4;
    plVar7 = (long *)0x20;
    __Znwm();
    lVar9 = *param_2;
    plVar7[3] = param_2[1];
    plVar7[2] = lVar9;
    plVar8 = param_1 + 2;
    lVar9 = *plVar8;
    *plVar7 = lVar9;
    plVar7[1] = (long)plVar8;
    *(long **)(lVar9 + 8) = plVar7;
    *plVar8 = (long)plVar7;
    param_1[4] = param_1[4] + 1;
    lStack_78 = 0x10a184378;
    ppuStack_70 = &PTR_DAT_110baa310;
    plStack_68 = param_1;
    plStack_60 = plVar7;
    func_0x00010a108320(plVar6 + 6,&lStack_78);
    FUN_10a044790(&lStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
LAB_10a183fdc:
      iVar5 = 0x13300498;
      ___cxa_guard_acquire();
      plVar11 = (long *)0x113300488;
      if (iVar5 != 0) {
        uRam0000000113300488 = 0;
        uRam0000000113300490 = 0;
        ___cxa_guard_release(0x113300498);
      }
LAB_10a183f9c:
      ppuVar4 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar1 = ppuStack_70 + 1;
        do {
          puVar10 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar10 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
        }
      }
    }
    return plVar11;
  }
  (**(code **)(*param_1 + 0x18))(&lStack_78,param_1,param_2);
  if (lStack_78 != 0) {
    FUN_10a184024(param_1,param_2,&lStack_78);
    plVar11 = param_1 + 4;
    goto LAB_10a183f9c;
  }
  if ((bRam0000000113300498 & 1) == 0) goto LAB_10a183fdc;
  plVar11 = (long *)0x113300488;
  goto LAB_10a183f9c;
}



/* Entry: 10a184024; end: 10a1842bb;  */

long * FUN_10a184024(undefined *param_1,ulong *param_2,ulong *param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  puVar8 = &uStack_90;
  puVar9 = &uStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f64048f);
  }
  else {
    plVar16 = (long *)(param_1 + 0x28);
    puVar7 = param_2;
    FUN_10a1842bc();
    if (plVar16 == (long *)0x0) {
      ppuStack_88 = (undefined **)param_3[1];
      uStack_90 = *param_3;
      if (param_3[1] != 0) {
        plVar16 = (long *)(param_3[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      puStack_80 = &UNK_1053a6a3c;
      ppuStack_78 = &PTR_DAT_110ae9180;
      plVar16 = (long *)(param_1 + 0x28);
      FUN_10a1844ac(plVar16,param_2,param_2,&uStack_90);
      FUN_10a044790(&puStack_80);
      (*(code *)*ppuStack_78)(&ppuStack_78);
      ppuVar6 = ppuStack_88;
      if (ppuStack_88 != (undefined **)0x0) {
        ppuVar1 = ppuStack_88 + 1;
        do {
          puVar12 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      ppuVar6 = (undefined **)0x20;
      __Znwm();
      plVar10 = (long *)(param_1 + 0x10);
      puVar12 = (undefined *)*param_2;
      ppuVar6[3] = (undefined *)param_2[1];
      ppuVar6[2] = puVar12;
      puVar12 = (undefined *)*plVar10;
      *ppuVar6 = puVar12;
      ppuVar6[1] = (undefined *)plVar10;
      *(undefined ***)(puVar12 + 8) = ppuVar6;
      *plVar10 = (long)ppuVar6;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      uStack_90 = 0x10a184378;
      ppuStack_88 = &PTR_DAT_110baa310;
      puStack_80 = param_1;
      ppuStack_78 = ppuVar6;
      func_0x00010a108320(plVar16 + 6);
      FUN_10a044790(&uStack_90);
      (*(code *)*ppuStack_88)(&ppuStack_88);
      func_0x00010a184460(param_1);
    }
    else {
      if (param_1[0x50] == '\x01') goto LAB_10a184294;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f640520,0x91,&UNK_10f64071c);
      }
      FUN_10a1843c4(plVar16 + 4,param_3);
      ppuVar6 = (undefined **)0x20;
      __Znwm();
      puVar12 = (undefined *)*param_2;
      ppuVar6[3] = (undefined *)param_2[1];
      ppuVar6[2] = puVar12;
      plVar10 = (long *)(param_1 + 0x10);
      puVar12 = (undefined *)*plVar10;
      *ppuVar6 = puVar12;
      ppuVar6[1] = (undefined *)plVar10;
      *(undefined ***)(puVar12 + 8) = ppuVar6;
      *plVar10 = (long)ppuVar6;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      uStack_90 = 0x10a184378;
      ppuStack_88 = &PTR_DAT_110baa310;
      puStack_80 = param_1;
      ppuStack_78 = ppuVar6;
      func_0x00010a108320(plVar16 + 6);
      FUN_10a044790(&uStack_90);
      (*(code *)*ppuStack_88)(&ppuStack_88);
      puVar9 = puVar8;
    }
    param_2 = puVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return plVar16;
    }
  }
  ___stack_chk_fail();
  puVar7 = param_2;
LAB_10a184294:
  plVar16 = (long *)&UNK_10f6404c1;
  FUN_10a00946c();
  func_0x00010a184428(&uStack_90);
  __Unwind_Resume();
  uVar11 = plVar16[1];
  if (uVar11 != 0) {
    uVar2 = *puVar7;
    uVar13 = puVar7[1] + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
    uVar14 = uVar11 - 1;
    if ((uVar11 & uVar14) == 0) {
      uVar15 = uVar13 & uVar14;
    }
    else {
      uVar15 = uVar13;
      if (uVar11 <= uVar13) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = uVar13 / uVar11;
        }
        uVar15 = uVar13 - uVar15 * uVar11;
      }
    }
    plVar16 = *(long **)(*plVar16 + uVar15 * 8);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      do {
        if (plVar16 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar17 = plVar16[1];
        if (uVar17 == uVar13) {
          if (plVar16[2] == uVar2 && plVar16[3] == puVar7[1]) {
            return plVar16;
          }
        }
        else {
          if ((uVar11 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar11 <= uVar17) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar5 * uVar11;
          }
          if (uVar17 != uVar15) {
            return (long *)0x0;
          }
        }
        plVar16 = (long *)*plVar16;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1842bc; end: 10a1843c3;  */

long * FUN_10a1842bc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar1 = *param_2;
    uVar4 = param_2[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
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
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar1 && plVar7[3] == param_2[1]) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1843c4; end: 10a1844ab;  */

undefined8 * FUN_10a1843c4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a1844ac; end: 10a1846db;  */

undefined1  [16] FUN_10a1844ac(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  long *aplStack_48 [3];
  
  uVar4 = *param_2;
  uVar9 = param_2[1] + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x22 = uVar9 & uVar6;
    }
    else {
      unaff_x22 = uVar9;
      if (uVar10 <= uVar9) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar9 / uVar10;
        }
        unaff_x22 = uVar9 - uVar8 * uVar10;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar7; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar8 = plVar2[1];
        if (uVar8 == uVar9) {
          if (plVar2[2] == uVar4 && plVar2[3] == param_2[1]) {
            uVar3 = 0;
            goto LAB_10a18469c;
          }
        }
        else {
          if ((uVar10 & uVar6) == 0) {
            uVar8 = uVar8 & uVar6;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a1846dc(aplStack_48,param_1,uVar9);
  if ((uVar10 == 0) || (*(float *)((long)param_1 + 0x24) * (float)uVar10 < (float)(param_1[3] + 1)))
  {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)((long)param_1 + 0x24));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_10a184788(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x22 = uVar10 - 1 & uVar9;
    }
    else {
      unaff_x22 = uVar9;
      if (uVar10 <= uVar9) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar9 / uVar10;
        }
        unaff_x22 = uVar9 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar4 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar4 = uVar4 & uVar10 - 1;
      }
      else if (uVar10 <= uVar4) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar4 / uVar10;
        }
        uVar4 = uVar4 - uVar9 * uVar10;
      }
      *(long **)(*param_1 + uVar4 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a18469c:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10a1846dc; end: 10a184787;  */

void FUN_10a1846dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uVar3 = *param_4;
  uVar5 = param_5[1];
  uVar4 = *param_5;
  puVar1[3] = param_4[1];
  puVar1[2] = uVar3;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  *param_5 = 0;
  param_5[1] = 0;
  puVar1[6] = param_5[2];
  plVar2 = param_5 + 3;
  (**(code **)(*plVar2 + 0x10))(puVar1 + 7,plVar2);
  param_5[2] = &UNK_1053a6a3c;
  (**(code **)*plVar2)(plVar2);
  *plVar2 = (long)&PTR_DAT_110ae9180;
  return;
}



/* Entry: 10a184788; end: 10a184857;  */

void FUN_10a184788(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10a1847d0:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          FUN_10a044790(param_2 + 0x30);
          (*(code *)**(undefined8 **)(param_2 + 0x38))();
          FUN_10a184b9c(param_2 + 0x20);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)((long)param_1 + 0x24));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10a1847d0;
  }
  return;
}



/* Entry: 10a184858; end: 10a184a7b;  */

void FUN_10a184858(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        FUN_10a044790(param_2 + 0x30);
        (*(code *)**(undefined8 **)(param_2 + 0x38))();
        FUN_10a184b9c(param_2 + 0x20);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 10a184a7c; end: 10a184b9b;  */

void FUN_10a184a7c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a184b30;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a184b30;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a184b30:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a184b9c; end: 10a184bf3;  */

long FUN_10a184b9c(long param_1)

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



/* Entry: 10a184bf4; end: 10a184c03;  */

void FUN_10a184bf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9700;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a184c04; end: 10a184c23;  */

void FUN_10a184c04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9700;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a184c24; end: 10a184c67;  */

void FUN_10a184c24(long param_1)

{
  long lVar1;
  
  func_0x000109243058(param_1 + 0x58);
  FUN_10a09da04(param_1 + 0x48);
  param_1 = param_1 + 0x38;
  lVar1 = -0x30;
  do {
    func_0x00010a0eb124(param_1);
    param_1 = param_1 + -0x10;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0);
  return;
}



/* Entry: 10a184c68; end: 10a184c6b;  */

void FUN_10a184c68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a184c6c; end: 10a184cdf;  */

undefined8 * FUN_10a184c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  FUN_10a0e908c(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10a184ce0; end: 10a184d63;  */

void FUN_10a184ce0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a184d28(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a184d64; end: 10a184dcf;  */

void FUN_10a184d64(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a184dd0; end: 10a184de3;  */

void FUN_10a184dd0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    if ((char)plVar1[2] == '\x01') {
      FUN_10a183dd0(lVar2 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a184de4; end: 10a184e2b;  */

void FUN_10a184de4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a183dd0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a184e2c; end: 10a185263;  */

long * FUN_10a184e2c(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  byte bVar16;
  
  plVar10 = param_1;
  func_0x000107c2b05c(param_1,param_2 + 2);
  param_2[1] = (long)plVar10;
  plVar12 = (long *)param_1[1];
  plVar4 = plVar10;
  if ((plVar12 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar12 < (float)(param_1[3] + 1))) {
    uVar13 = 1;
    if ((long *)0x2 < plVar12) {
      uVar13 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
    }
    plVar5 = (long *)(uVar13 | (long)plVar12 << 1);
    plVar9 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar5 <= plVar9) {
      plVar5 = plVar9;
    }
    if ((long)plVar5 - 1U == 0) {
      plVar5 = (long *)0x2;
    }
    else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar12 = (long *)param_1[1];
      plVar4 = plVar5;
    }
    if (plVar12 < plVar5) {
LAB_10a184ee8:
      if ((ulong)plVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
        return plVar4;
      }
      lVar3 = (long)plVar5 << 3;
      __Znwm();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      plVar12 = (long *)0x0;
      param_1[1] = (long)plVar5;
      do {
        *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (plVar5 != plVar12);
      plVar12 = (long *)param_1[2];
      if (plVar12 != (long *)0x0) {
        plVar9 = (long *)plVar12[1];
        uVar13 = (long)plVar5 - 1;
        if (((ulong)plVar5 & uVar13) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar13);
        }
        else if (plVar5 <= plVar9) {
          uVar1 = 0;
          if (plVar5 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar5;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar5);
        }
        *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
        while (plVar8 = plVar12, plVar12 = (long *)*plVar8, plVar12 != (long *)0x0) {
          plVar15 = (long *)plVar12[1];
          if (((ulong)plVar5 & uVar13) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar13);
          }
          else if (plVar5 <= plVar15) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar15 / (ulong)plVar5;
            }
            plVar15 = (long *)((long)plVar15 - uVar1 * (long)plVar5);
          }
          if (plVar15 != plVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar15 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar15 * 8) = plVar8;
              plVar9 = plVar15;
            }
            else {
              lVar11 = *plVar12;
              plVar7 = plVar12;
              if (lVar11 == 0) {
                plVar6 = (long *)0x0;
              }
              else {
                do {
                  plVar4 = param_1;
                  func_0x000107c2b068(param_1,plVar12 + 2,lVar11 + 0x10);
                  plVar6 = (long *)*plVar7;
                  if ((int)plVar4 == 0) goto LAB_10a18504c;
                  lVar11 = *plVar6;
                  plVar7 = plVar6;
                } while (lVar11 != 0);
                plVar6 = (long *)0x0;
LAB_10a18504c:
                lVar3 = *param_1;
              }
              *plVar8 = (long)plVar6;
              *plVar7 = **(long **)(lVar3 + (long)plVar15 * 8);
              **(undefined8 **)(lVar3 + (long)plVar15 * 8) = plVar12;
              plVar12 = plVar8;
            }
          }
        }
      }
    }
    else if (plVar5 < plVar12) {
      plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar4) {
        plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
      }
      if (plVar5 <= plVar4) {
        plVar5 = plVar4;
      }
      if (plVar5 < plVar12) {
        if (plVar5 != (long *)0x0) goto LAB_10a184ee8;
        plVar4 = (long *)*param_1;
        *param_1 = 0;
        if (plVar4 != (long *)0x0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
    }
    plVar12 = (long *)param_1[1];
  }
  bVar16 = POPCOUNT((char)plVar12) + POPCOUNT((char)((ulong)plVar12 >> 8)) +
           POPCOUNT((char)((ulong)plVar12 >> 0x10)) + POPCOUNT((char)((ulong)plVar12 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar12 >> 0x20)) + POPCOUNT((char)((ulong)plVar12 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar12 >> 0x30)) + POPCOUNT((char)((ulong)plVar12 >> 0x38));
  uVar13 = (long)plVar12 - 1;
  if (((ulong)plVar12 & uVar13) == 0) {
    plVar5 = (long *)(uVar13 & (ulong)plVar10);
  }
  else {
    plVar5 = plVar10;
    if (plVar12 <= plVar10) {
      uVar1 = 0;
      if (plVar12 != (long *)0x0) {
        uVar1 = (ulong)plVar10 / (ulong)plVar12;
      }
      plVar5 = (long *)((long)plVar10 - uVar1 * (long)plVar12);
    }
  }
  plVar9 = *(long **)(*param_1 + (long)plVar5 * 8);
  if ((plVar9 != (long *)0x0) && (lVar3 = *plVar9, lVar3 != 0)) {
    uVar14 = 0;
    bVar16 = 0;
    do {
      plVar8 = *(long **)(lVar3 + 8);
      if (((ulong)plVar12 & uVar13) == 0) {
        plVar15 = (long *)((ulong)plVar8 & uVar13);
      }
      else {
        plVar15 = plVar8;
        if (plVar12 <= plVar8) {
          uVar1 = 0;
          if (plVar12 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar12;
          }
          plVar15 = (long *)((long)plVar8 - uVar1 * (long)plVar12);
        }
      }
      if (plVar15 != plVar5) break;
      if (plVar8 == plVar10) {
        plVar4 = param_1;
        func_0x000107c2b068(param_1,lVar3 + 0x10,param_2 + 2);
      }
      else {
        plVar4 = (long *)0x0;
      }
      bVar2 = (uint)plVar4 != uVar14;
      if ((bool)(bVar16 & bVar2)) break;
      uVar14 = uVar14 | bVar2;
      bVar16 = bVar16 | bVar2;
      plVar9 = (long *)*plVar9;
      lVar3 = *plVar9;
    } while (lVar3 != 0);
    plVar12 = (long *)param_1[1];
    bVar16 = POPCOUNT((char)plVar12) + POPCOUNT((char)((ulong)plVar12 >> 8)) +
             POPCOUNT((char)((ulong)plVar12 >> 0x10)) + POPCOUNT((char)((ulong)plVar12 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar12 >> 0x20)) + POPCOUNT((char)((ulong)plVar12 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar12 >> 0x30)) + POPCOUNT((char)((ulong)plVar12 >> 0x38));
  }
  plVar10 = (long *)param_2[1];
  if (bVar16 < 2) {
    plVar10 = (long *)((long)plVar12 - 1U & (ulong)plVar10);
  }
  else if (plVar12 <= plVar10) {
    uVar13 = 0;
    if (plVar12 != (long *)0x0) {
      uVar13 = (ulong)plVar10 / (ulong)plVar12;
    }
    plVar10 = (long *)((long)plVar10 - uVar13 * (long)plVar12);
  }
  if (plVar9 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + (long)plVar10 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a185238;
    plVar5 = *(long **)(*param_2 + 8);
    if (bVar16 < 2) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar12 - 1U);
    }
    else if (plVar12 <= plVar5) {
      uVar13 = 0;
      if (plVar12 != (long *)0x0) {
        uVar13 = (ulong)plVar5 / (ulong)plVar12;
      }
      plVar5 = (long *)((long)plVar5 - uVar13 * (long)plVar12);
    }
  }
  else {
    *param_2 = *plVar9;
    *plVar9 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a185238;
    plVar5 = *(long **)(*param_2 + 8);
    if (bVar16 < 2) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar12 - 1U);
    }
    else if (plVar12 <= plVar5) {
      uVar13 = 0;
      if (plVar12 != (long *)0x0) {
        uVar13 = (ulong)plVar5 / (ulong)plVar12;
      }
      plVar5 = (long *)((long)plVar5 - uVar13 * (long)plVar12);
    }
    if (plVar5 == plVar10) goto LAB_10a185238;
  }
  *(long **)(*param_1 + (long)plVar5 * 8) = param_2;
LAB_10a185238:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10a185264; end: 10a1852ab;  */

undefined8 * FUN_10a185264(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  return param_1;
}



/* Entry: 10a1852ac; end: 10a18532f;  */

undefined8 FUN_10a1852ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEm(&ppuStack_38,*param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 10a185330; end: 10a1856ef;  */

undefined1  [16] FUN_10a185330(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x24;
  undefined1 auVar19 [16];
  
  uVar16 = (ulong)param_2;
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar7 = uVar18 - 1;
    uVar17 = (uint)uVar18;
    if ((uVar18 & uVar7) == 0) {
      unaff_x24 = (ulong)(uVar17 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar16;
      if (uVar18 <= uVar16) {
        uVar1 = 0;
        if (uVar17 != 0) {
          uVar1 = param_2 / uVar17;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar17);
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar10 = plVar15[1];
        if (uVar10 == uVar16) {
          if (*(uint *)(plVar15 + 2) == param_2) {
            uVar6 = 0;
            goto LAB_10a185678;
          }
        }
        else {
          if ((uVar18 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar18 <= uVar10) {
            uVar8 = 0;
            if (uVar18 != 0) {
              uVar8 = uVar10 / uVar18;
            }
            uVar10 = uVar10 - uVar8 * uVar18;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x18;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  *(undefined4 *)(plVar15 + 2) = *param_3;
  *(undefined4 *)((long)plVar15 + 0x14) = 0;
  if ((uVar18 == 0) || (*(float *)(param_1 + 4) * (float)uVar18 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar18) {
      uVar7 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar7 = uVar7 | uVar18 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = param_1[1];
    }
    if (uVar18 < uVar7) {
LAB_10a185484:
      if (uVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1856dc);
        (*pcVar3)();
      }
      lVar4 = uVar7 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar18 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar7 != uVar18);
      plVar11 = (long *)param_1[2];
      uVar18 = uVar7;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar8 = uVar7 - 1;
        if ((uVar7 & uVar8) == 0) {
          uVar10 = uVar10 & uVar8;
        }
        else if (uVar7 <= uVar10) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar14 * uVar7;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar7 & uVar8) == 0) {
            uVar14 = uVar14 & uVar8;
          }
          else if (uVar7 <= uVar14) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar2 * uVar7;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar14 * 8) == 0) {
              *(long **)(lVar4 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar4 + uVar14 * 8);
              **(long **)(lVar4 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar7 < uVar18) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      if (uVar7 < uVar18) {
        if (uVar7 != 0) goto LAB_10a185484;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = param_1[1];
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar18 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar16;
      if (uVar18 <= uVar16) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar16 / uVar18;
        }
        unaff_x24 = uVar16 - uVar7 * uVar18;
      }
    }
  }
  lVar4 = *param_1;
  plVar11 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar11;
    if (*plVar15 == 0) goto LAB_10a185668;
    uVar16 = *(ulong *)(*plVar15 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar16 = uVar16 & uVar18 - 1;
    }
    else if (uVar18 <= uVar16) {
      uVar7 = 0;
      if (uVar18 != 0) {
        uVar7 = uVar16 / uVar18;
      }
      uVar16 = uVar16 - uVar7 * uVar18;
    }
    plVar11 = (long *)(*param_1 + uVar16 * 8);
  }
  else {
    *plVar15 = *plVar11;
  }
  *plVar11 = (long)plVar15;
LAB_10a185668:
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10a185678:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar15;
  return auVar19;
}



/* Entry: 10a1856f0; end: 10a186237;  */

/* WARNING: Removing unreachable block (ram,0x00010a1859e8) */
/* WARNING: Removing unreachable block (ram,0x00010a185b74) */
/* WARNING: Removing unreachable block (ram,0x00010a185fd8) */
/* WARNING: Removing unreachable block (ram,0x00010a185ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a185a18) */

void FUN_10a1856f0(ulong *******param_1,ulong *******param_2,ulong *******param_3,
                  ulong *******param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *******pppppppuVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  long lVar12;
  ulong *******pppppppuVar13;
  long lVar14;
  ulong *******pppppppuVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong *******pppppppuVar21;
  ulong ******ppppppuVar22;
  ulong ******ppppppuVar23;
  ulong ******ppppppuVar24;
  ulong ******ppppppuVar25;
  ulong ******ppppppuStack_118;
  ulong ******ppppppuStack_110;
  ulong ******ppppppuStack_108;
  ulong ******ppppppuStack_100;
  ulong ******ppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  ulong ******ppppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_c8;
  uint uStack_c4;
  ulong ******ppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong *****pppppuStack_98;
  ulong *****pppppuStack_90;
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar15 = param_3;
  pppppppuVar8 = param_2;
  pppppppuVar10 = param_1;
  do {
    ppppppuStack_b8 = (ulong ******)pppppppuVar10;
    ppppppuStack_c0 = (ulong ******)pppppppuVar8;
    pppppppuVar13 = (ulong *******)ppppppuStack_b8;
    pppppppuVar9 = (ulong *******)ppppppuStack_c0;
    uVar16 = (long)ppppppuStack_c0 - (long)ppppppuStack_b8 >> 5;
    if (uVar16 - 2 == 0 || (long)uVar16 < 2) {
      if (uVar16 < 2) goto LAB_10a1861f8;
      if (uVar16 == 2) {
        param_1 = (ulong *******)(ppppppuStack_c0 + -4);
        param_2 = (ulong *******)ppppppuStack_b8;
        ppppppuStack_c0 = (ulong ******)param_1;
        FUN_10a003e3c();
        if (((uint)param_1 >> 7 & 1) != 0) {
          param_1 = &ppppppuStack_b8;
          param_2 = &ppppppuStack_c0;
LAB_10a185c14:
          FUN_10a09c5d4();
        }
        goto LAB_10a1861f8;
      }
    }
    else {
      if (uVar16 == 3) {
        param_3 = (ulong *******)(ppppppuStack_c0 + -4);
        param_2 = (ulong *******)(ppppppuStack_b8 + 4);
        param_1 = (ulong *******)ppppppuStack_b8;
        ppppppuStack_c0 = (ulong ******)param_3;
        FUN_10a186238();
        goto LAB_10a1861f8;
      }
      if (uVar16 == 4) {
        pppppppuVar15 = (ulong *******)(ppppppuStack_c0 + -4);
        pppppppuVar9 = (ulong *******)(ppppppuStack_b8 + 4);
        param_4 = (ulong *******)(ppppppuStack_b8 + 8);
        uStack_78._0_7_ = SUB87(pppppppuVar9,0);
        uStack_78._7_1_ = (undefined1)((ulong)pppppppuVar9 >> 0x38);
        param_3 = param_4;
        ppppppuStack_c0 = (ulong ******)pppppppuVar15;
        ppppppuStack_b0 = (ulong ******)pppppppuVar15;
        ppppppuStack_a8 = (ulong ******)param_4;
        ppppppuStack_a0 = (ulong ******)(ulong *******)ppppppuStack_b8;
        FUN_10a186238(ppppppuStack_b8,pppppppuVar9);
        param_1 = pppppppuVar15;
        param_2 = param_4;
        FUN_10a003e3c();
        if (((uint)param_1 >> 7 & 1) != 0) {
          FUN_10a09c5d4(&ppppppuStack_a8,&ppppppuStack_b0);
          param_1 = (ulong *******)ppppppuStack_a8;
          param_2 = pppppppuVar9;
          FUN_10a003e3c();
          if (((uint)param_1 >> 7 & 1) != 0) {
            FUN_10a09c5d4(&uStack_78,&ppppppuStack_a8);
            param_1 = (ulong *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            param_2 = pppppppuVar13;
            FUN_10a003e3c();
            if (((uint)param_1 >> 7 & 1) != 0) {
              param_1 = &ppppppuStack_a0;
              param_2 = (ulong *******)&uStack_78;
              goto LAB_10a185c14;
            }
          }
        }
        goto LAB_10a1861f8;
      }
      if (uVar16 == 5) {
        ppppppuStack_c0 = ppppppuStack_c0 + -4;
        param_2 = (ulong *******)(ppppppuStack_b8 + 4);
        param_3 = (ulong *******)(ppppppuStack_b8 + 8);
        param_1 = (ulong *******)ppppppuStack_b8;
        FUN_10a1862e4();
        goto LAB_10a1861f8;
      }
    }
    if ((long)uVar16 < 0x18) {
      if (((ulong)param_4 & 1) == 0) {
        if ((ppppppuStack_b8 != ppppppuStack_c0) &&
           (pppppppuVar15 = (ulong *******)(ppppppuStack_b8 + 4),
           pppppppuVar15 != (ulong *******)ppppppuStack_c0)) {
          lVar14 = 0x20;
          param_4 = (ulong *******)ppppppuStack_b8;
          lVar19 = 0;
          do {
            lVar12 = lVar14;
            param_1 = pppppppuVar15;
            param_2 = param_4;
            FUN_10a003e3c();
            if (((uint)param_1 >> 7 & 1) != 0) {
              pppppuStack_98 = (ulong *****)pppppppuVar15[1];
              ppppppuStack_a0 = *pppppppuVar15;
              pppppuStack_90 = (ulong *****)pppppppuVar15[2];
              pppppppuVar15[1] = (ulong ******)0x0;
              pppppppuVar15[2] = (ulong ******)0x0;
              *pppppppuVar15 = (ulong ******)0x0;
              uStack_88 = *(undefined4 *)(param_4 + 7);
              do {
                lVar14 = lVar19;
                puVar2 = (undefined8 *)((long)pppppppuVar13 + lVar14);
                if (*(char *)((long)puVar2 + 0x37) < '\0') {
                  __ZdlPv(puVar2[4]);
                }
                puVar2[5] = puVar2[1];
                puVar2[4] = *puVar2;
                puVar2[6] = puVar2[2];
                *(undefined1 *)((long)puVar2 + 0x17) = 0;
                *(undefined1 *)puVar2 = 0;
                *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar2 + 3);
                if (lVar14 == -0x20) goto LAB_10a186230;
                param_1 = &ppppppuStack_a0;
                param_2 = (ulong *******)(lVar14 + -0x20 + (long)pppppppuVar13);
                FUN_10a003e3c();
                lVar19 = lVar14 + -0x20;
              } while (((uint)param_1 >> 7 & 1) != 0);
              if (*(char *)((long)pppppppuVar13 + lVar14 + 0x17) < '\0') {
                param_1 = *(ulong ********)((long)pppppppuVar13 + lVar14);
                __ZdlPv();
              }
              *(ulong ******)((long)pppppppuVar13 + lVar14 + 0x10) = pppppuStack_90;
              *(ulong ******)((long)pppppppuVar13 + lVar14 + 8) = pppppuStack_98;
              *(ulong *******)((long)pppppppuVar13 + lVar14) = ppppppuStack_a0;
              pppppuStack_90 = (ulong *****)((ulong)pppppuStack_90 & 0xffffffffffffff);
              ppppppuStack_a0 = (ulong ******)((ulong)ppppppuStack_a0 & 0xffffffffffffff00);
              *(undefined4 *)((long)pppppppuVar13 + lVar14 + 0x18) = uStack_88;
            }
            param_4 = (ulong *******)((long)pppppppuVar13 + lVar12);
            pppppppuVar15 = (ulong *******)((long)pppppppuVar13 + lVar12 + 0x20);
            lVar14 = lVar12 + 0x20;
            lVar19 = lVar12;
          } while (pppppppuVar15 != pppppppuVar9);
        }
      }
      else if ((ppppppuStack_b8 != ppppppuStack_c0) && (ppppppuStack_b8 + 4 != ppppppuStack_c0)) {
        lVar14 = 0;
        pppppppuVar8 = (ulong *******)(ppppppuStack_b8 + 4);
        pppppppuVar10 = (ulong *******)ppppppuStack_b8;
        do {
          pppppppuVar15 = pppppppuVar8;
          param_1 = pppppppuVar15;
          param_2 = pppppppuVar10;
          FUN_10a003e3c();
          if (((uint)param_1 >> 7 & 1) != 0) {
            pppppuStack_98 = (ulong *****)pppppppuVar15[1];
            ppppppuStack_a0 = *pppppppuVar15;
            pppppuStack_90 = (ulong *****)pppppppuVar15[2];
            pppppppuVar15[1] = (ulong ******)0x0;
            pppppppuVar15[2] = (ulong ******)0x0;
            *pppppppuVar15 = (ulong ******)0x0;
            uStack_88 = *(undefined4 *)(pppppppuVar10 + 7);
            lVar19 = lVar14;
            do {
              lVar12 = lVar19;
              puVar2 = (undefined8 *)((long)pppppppuVar13 + lVar12);
              if (*(char *)((long)puVar2 + 0x37) < '\0') {
                param_1 = (ulong *******)puVar2[4];
                __ZdlPv();
              }
              puVar2[5] = puVar2[1];
              puVar2[4] = *puVar2;
              puVar2[6] = puVar2[2];
              *(undefined1 *)((long)puVar2 + 0x17) = 0;
              *(undefined1 *)puVar2 = 0;
              *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar2 + 3);
              pppppppuVar8 = pppppppuVar13;
              if (lVar12 == 0) goto LAB_10a185d50;
              param_1 = &ppppppuStack_a0;
              param_2 = (ulong *******)(lVar12 + -0x20 + (long)pppppppuVar13);
              FUN_10a003e3c();
              lVar19 = lVar12 + -0x20;
            } while (((uint)param_1 >> 7 & 1) != 0);
            pppppppuVar8 = (ulong *******)((long)pppppppuVar13 + lVar12);
LAB_10a185d50:
            if (*(char *)((long)pppppppuVar8 + 0x17) < '\0') {
              param_1 = (ulong *******)*pppppppuVar8;
              __ZdlPv();
            }
            pppppppuVar8[2] = (ulong ******)pppppuStack_90;
            pppppppuVar8[1] = (ulong ******)pppppuStack_98;
            *pppppppuVar8 = ppppppuStack_a0;
            *(undefined4 *)(pppppppuVar8 + 3) = uStack_88;
          }
          lVar14 = lVar14 + 0x20;
          pppppppuVar8 = pppppppuVar15 + 4;
          param_4 = pppppppuVar15;
          pppppppuVar10 = pppppppuVar15;
        } while (pppppppuVar15 + 4 != pppppppuVar9);
      }
      goto LAB_10a1861f8;
    }
    if (pppppppuVar15 == (ulong *******)0x0) {
      if (ppppppuStack_b8 != ppppppuStack_c0) {
        uVar18 = uVar16 - 2 >> 1;
        uVar17 = uVar18;
        do {
          if ((long)uVar17 <= (long)uVar18) {
            uVar3 = uVar17 << 1 | 1;
            pppppppuVar15 = pppppppuVar13 + uVar3 * 4;
            uVar1 = uVar17 * 2 + 2;
            pppppppuVar8 = pppppppuVar15;
            uVar20 = uVar3;
            if ((long)uVar1 < (long)uVar16) {
              pppppppuVar10 = pppppppuVar15;
              FUN_10a003e3c(pppppppuVar15,pppppppuVar15 + 4);
              pppppppuVar8 = pppppppuVar15 + 4;
              uVar20 = uVar1;
              if (-1 < (char)pppppppuVar10) {
                pppppppuVar8 = pppppppuVar15;
                uVar20 = uVar3;
              }
            }
            pppppppuVar15 = pppppppuVar13 + uVar17 * 4;
            param_1 = pppppppuVar8;
            param_2 = pppppppuVar15;
            FUN_10a003e3c();
            if (((uint)param_1 >> 7 & 1) == 0) {
              pppppuStack_98 = (ulong *****)pppppppuVar15[1];
              ppppppuStack_a0 = *pppppppuVar15;
              pppppuStack_90 = (ulong *****)pppppppuVar15[2];
              pppppppuVar15[1] = (ulong ******)0x0;
              pppppppuVar15[2] = (ulong ******)0x0;
              *pppppppuVar15 = (ulong ******)0x0;
              uStack_88 = *(undefined4 *)(pppppppuVar15 + 3);
              do {
                pppppppuVar10 = pppppppuVar8;
                if (*(char *)((long)pppppppuVar15 + 0x17) < '\0') {
                  param_1 = (ulong *******)*pppppppuVar15;
                  __ZdlPv();
                }
                ppppppuVar25 = pppppppuVar10[1];
                ppppppuVar22 = *pppppppuVar10;
                pppppppuVar15[2] = pppppppuVar10[2];
                pppppppuVar15[1] = ppppppuVar25;
                *pppppppuVar15 = ppppppuVar22;
                *(undefined1 *)((long)pppppppuVar10 + 0x17) = 0;
                *(undefined1 *)pppppppuVar10 = 0;
                *(undefined4 *)(pppppppuVar15 + 3) = *(undefined4 *)(pppppppuVar10 + 3);
                if ((long)uVar18 < (long)uVar20) break;
                uVar3 = uVar20 << 1 | 1;
                pppppppuVar15 = pppppppuVar13 + uVar3 * 4;
                uVar1 = uVar20 * 2 + 2;
                pppppppuVar8 = pppppppuVar15;
                uVar20 = uVar3;
                if ((long)uVar1 < (long)uVar16) {
                  pppppppuVar11 = pppppppuVar15;
                  FUN_10a003e3c(pppppppuVar15,pppppppuVar15 + 4);
                  pppppppuVar8 = pppppppuVar15 + 4;
                  uVar20 = uVar1;
                  if (-1 < (char)pppppppuVar11) {
                    pppppppuVar8 = pppppppuVar15;
                    uVar20 = uVar3;
                  }
                }
                param_2 = &ppppppuStack_a0;
                param_1 = pppppppuVar8;
                FUN_10a003e3c();
                pppppppuVar15 = pppppppuVar10;
              } while (((uint)param_1 >> 7 & 1) == 0);
              if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
                param_1 = (ulong *******)*pppppppuVar10;
                __ZdlPv();
              }
              pppppppuVar10[2] = (ulong ******)pppppuStack_90;
              pppppppuVar10[1] = (ulong ******)pppppuStack_98;
              *pppppppuVar10 = ppppppuStack_a0;
              *(undefined4 *)(pppppppuVar10 + 3) = uStack_88;
            }
          }
          bVar5 = uVar17 != 0;
          uVar17 = uVar17 - 1;
          pppppppuVar8 = pppppppuVar9;
        } while (bVar5);
        do {
          ppppppuVar22 = *pppppppuVar13;
          uStack_78._0_7_ = SUB87(pppppppuVar13[1],0);
          uStack_78._7_1_ = (undefined1)*(undefined8 *)((long)pppppppuVar13 + 0xf);
          uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar13 + 0xf) >> 8);
          pppppppuVar13[1] = (ulong ******)0x0;
          pppppppuVar13[2] = (ulong ******)0x0;
          *pppppppuVar13 = (ulong ******)0x0;
          uStack_c8 = *(undefined4 *)(pppppppuVar13 + 3);
          uStack_c4 = (uint)*(byte *)((long)pppppppuVar13 + 0x17);
          pppppppuVar10 = pppppppuVar13;
          pppppppuVar9 = (ulong *******)0x0;
          do {
            pppppppuVar11 = pppppppuVar10 + (long)pppppppuVar9 * 4 + 4;
            pppppppuVar4 = (ulong *******)((long)pppppppuVar9 << 1 | 1);
            param_4 = (ulong *******)((long)pppppppuVar9 * 2 + 2);
            pppppppuVar15 = pppppppuVar11;
            pppppppuVar21 = pppppppuVar4;
            if ((long)param_4 < (long)uVar16) {
              param_1 = pppppppuVar11;
              param_2 = pppppppuVar10 + (long)pppppppuVar9 * 4 + 8;
              FUN_10a003e3c();
              pppppppuVar15 = pppppppuVar10 + (long)pppppppuVar9 * 4 + 8;
              pppppppuVar21 = param_4;
              if (-1 < (char)param_1) {
                pppppppuVar15 = pppppppuVar11;
                pppppppuVar21 = pppppppuVar4;
              }
            }
            if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
              param_1 = (ulong *******)*pppppppuVar10;
              __ZdlPv();
            }
            ppppppuVar24 = pppppppuVar15[1];
            ppppppuVar25 = *pppppppuVar15;
            pppppppuVar10[2] = pppppppuVar15[2];
            pppppppuVar10[1] = ppppppuVar24;
            *pppppppuVar10 = ppppppuVar25;
            *(undefined1 *)((long)pppppppuVar15 + 0x17) = 0;
            *(undefined1 *)pppppppuVar15 = 0;
            *(undefined4 *)(pppppppuVar10 + 3) = *(undefined4 *)(pppppppuVar15 + 3);
            pppppppuVar10 = pppppppuVar15;
            pppppppuVar9 = pppppppuVar21;
          } while ((long)pppppppuVar21 <= (long)(uVar16 - 2 >> 1));
          pppppppuVar9 = pppppppuVar8 + -4;
          if (pppppppuVar15 == pppppppuVar9) {
            if (*(char *)((long)pppppppuVar15 + 0x17) < '\0') {
              param_1 = (ulong *******)*pppppppuVar15;
              __ZdlPv();
            }
            *pppppppuVar15 = ppppppuVar22;
            pppppppuVar15[1] = (ulong ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            *(ulong *)((long)pppppppuVar15 + 0xf) = CONCAT71(uStack_70,uStack_78._7_1_);
            *(char *)((long)pppppppuVar15 + 0x17) = (char)uStack_c4;
            *(undefined4 *)(pppppppuVar15 + 3) = uStack_c8;
          }
          else {
            if (*(char *)((long)pppppppuVar15 + 0x17) < '\0') {
              param_1 = (ulong *******)*pppppppuVar15;
              __ZdlPv();
            }
            ppppppuVar24 = pppppppuVar8[-3];
            ppppppuVar25 = *pppppppuVar9;
            pppppppuVar15[2] = pppppppuVar8[-2];
            pppppppuVar15[1] = ppppppuVar24;
            *pppppppuVar15 = ppppppuVar25;
            *(undefined1 *)((long)pppppppuVar8 + -9) = 0;
            *(undefined1 *)(pppppppuVar8 + -4) = 0;
            *(undefined4 *)(pppppppuVar15 + 3) = *(undefined4 *)(pppppppuVar8 + -1);
            pppppppuVar8[-4] = ppppppuVar22;
            pppppppuVar8[-3] = (ulong ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            *(ulong *)((long)pppppppuVar8 + -0x11) = CONCAT71(uStack_70,uStack_78._7_1_);
            *(char *)((long)pppppppuVar8 + -9) = (char)uStack_c4;
            *(undefined4 *)(pppppppuVar8 + -1) = uStack_c8;
            lVar14 = (long)pppppppuVar15 + (0x20 - (long)pppppppuVar13) >> 5;
            if (1 < lVar14) {
              uVar17 = lVar14 - 2U >> 1;
              param_4 = pppppppuVar13 + uVar17 * 4;
              param_1 = param_4;
              param_2 = pppppppuVar15;
              FUN_10a003e3c();
              if (((uint)param_1 >> 7 & 1) != 0) {
                pppppuStack_98 = (ulong *****)pppppppuVar15[1];
                ppppppuStack_a0 = *pppppppuVar15;
                pppppuStack_90 = (ulong *****)pppppppuVar15[2];
                pppppppuVar15[1] = (ulong ******)0x0;
                pppppppuVar15[2] = (ulong ******)0x0;
                *pppppppuVar15 = (ulong ******)0x0;
                uStack_88 = *(undefined4 *)(pppppppuVar15 + 3);
                pppppppuVar8 = pppppppuVar15;
                do {
                  pppppppuVar15 = param_4;
                  if (*(char *)((long)pppppppuVar8 + 0x17) < '\0') {
                    param_1 = (ulong *******)*pppppppuVar8;
                    __ZdlPv();
                  }
                  ppppppuVar25 = pppppppuVar15[1];
                  ppppppuVar22 = *pppppppuVar15;
                  pppppppuVar8[2] = pppppppuVar15[2];
                  pppppppuVar8[1] = ppppppuVar25;
                  *pppppppuVar8 = ppppppuVar22;
                  *(undefined1 *)((long)pppppppuVar15 + 0x17) = 0;
                  *(undefined1 *)pppppppuVar15 = 0;
                  *(undefined4 *)(pppppppuVar8 + 3) = *(undefined4 *)(pppppppuVar15 + 3);
                  param_4 = pppppppuVar15;
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1 >> 1;
                  param_4 = pppppppuVar13 + uVar17 * 4;
                  param_2 = &ppppppuStack_a0;
                  param_1 = param_4;
                  FUN_10a003e3c();
                  pppppppuVar8 = pppppppuVar15;
                } while (((uint)param_1 >> 7 & 1) != 0);
                if (*(char *)((long)pppppppuVar15 + 0x17) < '\0') {
                  param_1 = (ulong *******)*pppppppuVar15;
                  __ZdlPv();
                }
                pppppppuVar15[2] = (ulong ******)pppppuStack_90;
                pppppppuVar15[1] = (ulong ******)pppppuStack_98;
                *pppppppuVar15 = ppppppuStack_a0;
                *(undefined4 *)(pppppppuVar15 + 3) = uStack_88;
              }
            }
          }
          bVar5 = 2 < (long)uVar16;
          pppppppuVar8 = pppppppuVar9;
          uVar16 = uVar16 - 1;
        } while (bVar5);
      }
      goto LAB_10a1861f8;
    }
    uVar17 = uVar16 >> 1;
    param_3 = (ulong *******)(ppppppuStack_c0 + -4);
    if (uVar16 < 0x81) {
      FUN_10a186238(ppppppuStack_b8 + uVar17 * 4,ppppppuStack_b8);
    }
    else {
      FUN_10a186238(ppppppuStack_b8);
      ppppppuVar22 = ppppppuStack_c0;
      FUN_10a186238(ppppppuStack_b8 + 4,ppppppuStack_b8 + uVar17 * 4 + -4,ppppppuStack_c0 + -8);
      FUN_10a186238(ppppppuStack_b8 + 8,ppppppuStack_b8 + uVar17 * 4 + 4,ppppppuVar22 + -0xc);
      param_3 = (ulong *******)(ppppppuStack_b8 + uVar17 * 4 + 4);
      FUN_10a186238(ppppppuStack_b8 + uVar17 * 4 + -4,ppppppuStack_b8 + uVar17 * 4);
      ppppppuStack_a0 = ppppppuStack_b8 + uVar17 * 4;
      FUN_10a09c868(&ppppppuStack_b8,&ppppppuStack_a0);
    }
    pppppppuVar15 = (ulong *******)((long)pppppppuVar15 + -1);
    if (((ulong)param_4 & 1) == 0) {
      uVar7 = (int)ppppppuStack_b8 - 0x20;
      FUN_10a003e3c();
      ppppppuVar25 = ppppppuStack_b8;
      ppppppuVar22 = ppppppuStack_c0;
      if ((uVar7 >> 7 & 1) != 0) goto LAB_10a185890;
      ppppppuStack_a8 = ppppppuStack_c0;
      pppppuStack_98 = ppppppuStack_b8[1];
      ppppppuStack_a0 = (ulong ******)*ppppppuStack_b8;
      pppppuStack_90 = ppppppuStack_b8[2];
      ppppppuStack_b8[1] = (ulong *****)0x0;
      ppppppuStack_b8[2] = (ulong *****)0x0;
      *ppppppuStack_b8 = (ulong *****)0x0;
      uStack_88 = *(undefined4 *)(ppppppuStack_b8 + 3);
      pppppppuVar9 = (ulong *******)(ppppppuStack_c0 + -4);
      pppppppuVar10 = &ppppppuStack_a0;
      FUN_10a003e3c();
      pppppppuVar8 = (ulong *******)ppppppuVar25;
      if (((uint)pppppppuVar10 >> 7 & 1) == 0) {
        do {
          pppppppuVar8 = pppppppuVar8 + 4;
          uStack_78._0_7_ = SUB87(pppppppuVar8,0);
          uStack_78._7_1_ = (undefined1)((ulong)pppppppuVar8 >> 0x38);
          if (ppppppuStack_a8 <= pppppppuVar8) break;
          pppppppuVar10 = &ppppppuStack_a0;
          pppppppuVar9 = pppppppuVar8;
          FUN_10a003e3c();
        } while (((uint)pppppppuVar10 >> 7 & 1) == 0);
      }
      else {
        do {
          pppppppuVar8 = pppppppuVar8 + 4;
          uStack_78._0_7_ = SUB87(pppppppuVar8,0);
          uStack_78._7_1_ = (undefined1)((ulong)pppppppuVar8 >> 0x38);
          if (pppppppuVar8 == (ulong *******)ppppppuVar22) goto LAB_10a186230;
          pppppppuVar10 = &ppppppuStack_a0;
          pppppppuVar9 = pppppppuVar8;
          FUN_10a003e3c();
        } while (((uint)pppppppuVar10 >> 7 & 1) == 0);
      }
      pppppppuVar13 = (ulong *******)ppppppuStack_a8;
      if (pppppppuVar8 < ppppppuStack_a8) {
        do {
          if (pppppppuVar13 == (ulong *******)ppppppuVar25) goto LAB_10a186230;
          pppppppuVar13 = pppppppuVar13 + -4;
          pppppppuVar10 = &ppppppuStack_a0;
          pppppppuVar9 = pppppppuVar13;
          ppppppuStack_a8 = (ulong ******)pppppppuVar13;
          FUN_10a003e3c();
        } while (((uint)pppppppuVar10 >> 7 & 1) != 0);
        pppppppuVar8 = (ulong *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
      }
      if (pppppppuVar8 < pppppppuVar13) {
        do {
          FUN_10a09c5d4(&uStack_78,&ppppppuStack_a8);
          do {
            pppppppuVar8 = (ulong *******)(CONCAT17(uStack_78._7_1_,(undefined7)uStack_78) + 0x20);
            uStack_78._0_7_ = SUB87(pppppppuVar8,0);
            uStack_78._7_1_ = (undefined1)((ulong)pppppppuVar8 >> 0x38);
            if (pppppppuVar8 == (ulong *******)ppppppuVar22) goto LAB_10a186230;
            uVar7 = (uint)&ppppppuStack_a0;
            FUN_10a003e3c();
          } while ((uVar7 >> 7 & 1) == 0);
          do {
            if (ppppppuStack_a8 == ppppppuVar25) goto LAB_10a186230;
            pppppppuVar9 = (ulong *******)(ppppppuStack_a8 + -4);
            pppppppuVar10 = &ppppppuStack_a0;
            ppppppuStack_a8 = (ulong ******)pppppppuVar9;
            FUN_10a003e3c();
          } while (((uint)pppppppuVar10 >> 7 & 1) != 0);
          pppppppuVar8 = (ulong *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
        } while (pppppppuVar8 < ppppppuStack_a8);
      }
      pppppppuVar13 = pppppppuVar8 + -4;
      if (pppppppuVar13 != (ulong *******)ppppppuVar25) {
        if (*(char *)((long)ppppppuVar25 + 0x17) < '\0') {
          pppppppuVar10 = (ulong *******)*ppppppuVar25;
          __ZdlPv();
        }
        ppppppuVar24 = pppppppuVar8[-3];
        ppppppuVar22 = *pppppppuVar13;
        ppppppuVar25[2] = (ulong *****)pppppppuVar8[-2];
        ppppppuVar25[1] = (ulong *****)ppppppuVar24;
        *ppppppuVar25 = (ulong *****)ppppppuVar22;
        *(undefined1 *)((long)pppppppuVar8 + -9) = 0;
        *(undefined1 *)(pppppppuVar8 + -4) = 0;
        *(undefined4 *)(ppppppuVar25 + 3) = *(undefined4 *)(pppppppuVar8 + -1);
      }
      ppppppuStack_b8 = (ulong ******)pppppppuVar10;
      pppppppuVar8[-2] = (ulong ******)pppppuStack_90;
      pppppppuVar8[-3] = (ulong ******)pppppuStack_98;
      *pppppppuVar13 = ppppppuStack_a0;
      pppppuStack_90 = (ulong *****)((ulong)pppppuStack_90 & 0xffffffffffffff);
      ppppppuStack_a0 = (ulong ******)((ulong)ppppppuStack_a0 & 0xffffffffffffff00);
      *(undefined4 *)(pppppppuVar8 + -1) = uStack_88;
      pppppppuVar13 = (ulong *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
LAB_10a185bb0:
      param_4 = (ulong *******)0x0;
      param_1 = (ulong *******)ppppppuStack_b8;
      param_2 = pppppppuVar9;
      pppppppuVar8 = (ulong *******)ppppppuStack_c0;
      pppppppuVar10 = pppppppuVar13;
    }
    else {
LAB_10a185890:
      ppppppuVar25 = ppppppuStack_b8;
      ppppppuVar22 = ppppppuStack_c0;
      lVar14 = 0;
      ppppppuStack_a8 = ppppppuStack_c0;
      pppppuStack_98 = ppppppuStack_b8[1];
      ppppppuStack_a0 = (ulong ******)*ppppppuStack_b8;
      pppppuStack_90 = ppppppuStack_b8[2];
      ppppppuStack_b8[1] = (ulong *****)0x0;
      ppppppuStack_b8[2] = (ulong *****)0x0;
      *ppppppuStack_b8 = (ulong *****)0x0;
      uStack_88 = *(undefined4 *)(ppppppuStack_b8 + 3);
      do {
        pppppppuVar8 = (ulong *******)((long)ppppppuVar25 + lVar14 + 0x20);
        uStack_78._0_7_ = SUB87(pppppppuVar8,0);
        uStack_78._7_1_ = (undefined1)((ulong)pppppppuVar8 >> 0x38);
        if (pppppppuVar8 == (ulong *******)ppppppuVar22) goto LAB_10a186230;
        FUN_10a003e3c(pppppppuVar8,&ppppppuStack_a0);
        lVar14 = lVar14 + 0x20;
      } while (((uint)pppppppuVar8 >> 7 & 1) != 0);
      pppppppuVar8 = (ulong *******)ppppppuStack_a8;
      if (lVar14 == 0x20) {
        pppppppuVar8 = (ulong *******)(ppppppuVar25 + 4);
        pppppppuVar10 = (ulong *******)ppppppuStack_a8;
        do {
          if (pppppppuVar10 <= pppppppuVar8) break;
          pppppppuVar10 = pppppppuVar10 + -4;
          pppppppuVar9 = pppppppuVar10;
          ppppppuStack_a8 = (ulong ******)pppppppuVar10;
          FUN_10a003e3c(pppppppuVar10,&ppppppuStack_a0);
        } while (((uint)pppppppuVar9 >> 7 & 1) == 0);
      }
      else {
        do {
          if (pppppppuVar8 == (ulong *******)ppppppuVar25) {
LAB_10a186230:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a186234);
            (*pcVar6)();
          }
          pppppppuVar8 = pppppppuVar8 + -4;
          pppppppuVar10 = pppppppuVar8;
          ppppppuStack_a8 = (ulong ******)pppppppuVar8;
          FUN_10a003e3c(pppppppuVar8,&ppppppuStack_a0);
        } while (((uint)pppppppuVar10 >> 7 & 1) == 0);
        pppppppuVar8 = (ulong *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
      }
      ppppppuVar24 = ppppppuStack_a8;
      pppppppuVar13 = pppppppuVar8;
      if (pppppppuVar8 < ppppppuStack_a8) {
        do {
          FUN_10a09c5d4(&uStack_78,&ppppppuStack_a8);
          do {
            pppppppuVar10 = (ulong *******)(CONCAT17(uStack_78._7_1_,(undefined7)uStack_78) + 0x20);
            uStack_78._0_7_ = SUB87(pppppppuVar10,0);
            uStack_78._7_1_ = (undefined1)((ulong)pppppppuVar10 >> 0x38);
            if (pppppppuVar10 == (ulong *******)ppppppuVar22) goto LAB_10a186230;
            FUN_10a003e3c(pppppppuVar10,&ppppppuStack_a0);
          } while (((uint)pppppppuVar10 >> 7 & 1) != 0);
          do {
            if (ppppppuStack_a8 == ppppppuVar25) goto LAB_10a186230;
            pppppppuVar10 = (ulong *******)(ppppppuStack_a8 + -4);
            ppppppuStack_a8 = (ulong ******)pppppppuVar10;
            FUN_10a003e3c(pppppppuVar10,&ppppppuStack_a0);
          } while (((uint)pppppppuVar10 >> 7 & 1) == 0);
          pppppppuVar13 = (ulong *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
        } while (pppppppuVar13 < ppppppuStack_a8);
      }
      pppppppuVar9 = pppppppuVar13 + -4;
      if (pppppppuVar9 != (ulong *******)ppppppuVar25) {
        if (*(char *)((long)ppppppuVar25 + 0x17) < '\0') {
          __ZdlPv(*ppppppuVar25);
        }
        ppppppuVar23 = pppppppuVar13[-3];
        ppppppuVar22 = *pppppppuVar9;
        ppppppuVar25[2] = (ulong *****)pppppppuVar13[-2];
        ppppppuVar25[1] = (ulong *****)ppppppuVar23;
        *ppppppuVar25 = (ulong *****)ppppppuVar22;
        *(undefined1 *)((long)pppppppuVar13 + -9) = 0;
        *(undefined1 *)(pppppppuVar13 + -4) = 0;
        *(undefined4 *)(ppppppuVar25 + 3) = *(undefined4 *)(pppppppuVar13 + -1);
      }
      pppppppuVar13[-2] = (ulong ******)pppppuStack_90;
      pppppppuVar13[-3] = (ulong ******)pppppuStack_98;
      *pppppppuVar9 = ppppppuStack_a0;
      pppppuStack_90 = (ulong *****)((ulong)pppppuStack_90 & 0xffffffffffffff);
      ppppppuStack_a0 = (ulong ******)((ulong)ppppppuStack_a0 & 0xffffffffffffff00);
      *(undefined4 *)(pppppppuVar13 + -1) = uStack_88;
      if (pppppppuVar8 < ppppppuVar24) {
LAB_10a185a28:
        param_3 = pppppppuVar15;
        FUN_10a1856f0();
        goto LAB_10a185bb0;
      }
      pppppppuVar11 = (ulong *******)ppppppuStack_b8;
      FUN_10a186408(ppppppuStack_b8,pppppppuVar9);
      param_1 = pppppppuVar13;
      param_2 = (ulong *******)ppppppuStack_c0;
      FUN_10a186408();
      if ((int)param_1 == 0) {
        pppppppuVar8 = (ulong *******)ppppppuStack_c0;
        pppppppuVar10 = pppppppuVar13;
        if ((int)pppppppuVar11 == 0) goto LAB_10a185a28;
      }
      else {
        pppppppuVar8 = pppppppuVar9;
        pppppppuVar10 = (ulong *******)ppppppuStack_b8;
        if (((ulong)pppppppuVar11 & 1) != 0) {
LAB_10a1861f8:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return;
          }
          ___stack_chk_fail();
          pcStack_d8 = FUN_10a186238;
          pppppppuVar8 = param_2;
          ppppppuStack_118 = (ulong ******)param_3;
          ppppppuStack_110 = (ulong ******)param_2;
          ppppppuStack_108 = (ulong ******)param_1;
          ppppppuStack_100 = (ulong ******)param_4;
          ppppppuStack_f8 = (ulong ******)pppppppuVar15;
          ppppppuStack_f0 = (ulong ******)pppppppuVar9;
          ppppppuStack_e8 = (ulong ******)pppppppuVar13;
          puStack_e0 = &stack0xfffffffffffffff0;
          FUN_10a003e3c(param_2,param_1);
          FUN_10a003e3c(param_3,param_2);
          if (((uint)pppppppuVar8 >> 7 & 1) == 0) {
            if (-1 < (char)param_3) {
              return;
            }
            FUN_10a09c5d4(&ppppppuStack_110,&ppppppuStack_118);
            pppppppuVar15 = (ulong *******)ppppppuStack_110;
            FUN_10a003e3c(ppppppuStack_110,ppppppuStack_108);
            if (((uint)pppppppuVar15 >> 7 & 1) == 0) {
              return;
            }
            pppppppuVar15 = &ppppppuStack_108;
            pppppppuVar8 = &ppppppuStack_110;
          }
          else {
            pppppppuVar15 = &ppppppuStack_108;
            if (-1 < (char)param_3) {
              FUN_10a09c5d4(pppppppuVar15,&ppppppuStack_110);
              pppppppuVar15 = (ulong *******)ppppppuStack_118;
              FUN_10a003e3c(ppppppuStack_118,ppppppuStack_110);
              if (((uint)pppppppuVar15 >> 7 & 1) == 0) {
                return;
              }
              pppppppuVar15 = &ppppppuStack_110;
            }
            pppppppuVar8 = &ppppppuStack_118;
          }
          FUN_10a09c5d4(pppppppuVar15,pppppppuVar8);
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a186238; end: 10a1862e3;  */

void FUN_10a186238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_1;
  FUN_10a003e3c(param_2,param_1);
  FUN_10a003e3c(param_3,param_2);
  if (((uint)uVar1 >> 7 & 1) == 0) {
    if (-1 < (char)param_3) {
      return;
    }
    FUN_10a09c5d4(&uStack_40,&uStack_48);
    uVar1 = uStack_40;
    FUN_10a003e3c(uStack_40,uStack_38);
    if (((uint)uVar1 >> 7 & 1) == 0) {
      return;
    }
    puVar2 = &uStack_38;
    puVar3 = &uStack_40;
  }
  else {
    puVar2 = &uStack_38;
    if (-1 < (char)param_3) {
      FUN_10a09c5d4(puVar2,&uStack_40);
      uVar1 = uStack_48;
      FUN_10a003e3c(uStack_48,uStack_40);
      if (((uint)uVar1 >> 7 & 1) == 0) {
        return;
      }
      puVar2 = &uStack_40;
    }
    puVar3 = &uStack_48;
  }
  FUN_10a09c5d4(puVar2,puVar3);
  return;
}



/* Entry: 10a1862e4; end: 10a186407;  */

void FUN_10a1862e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = param_5;
  uStack_80 = param_4;
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  FUN_10a186238();
  uVar1 = param_4;
  FUN_10a003e3c(param_4,param_3);
  if (((uint)uVar1 >> 7 & 1) != 0) {
    FUN_10a09c5d4(&uStack_58,&uStack_60);
    uVar1 = uStack_58;
    FUN_10a003e3c(uStack_58,param_2);
    if (((uint)uVar1 >> 7 & 1) != 0) {
      FUN_10a09c5d4(&uStack_50,&uStack_58);
      uVar1 = uStack_50;
      FUN_10a003e3c(uStack_50,param_1);
      if (((uint)uVar1 >> 7 & 1) != 0) {
        FUN_10a09c5d4(&uStack_48,&uStack_50);
      }
    }
  }
  FUN_10a003e3c(param_5,param_4);
  if (((uint)param_5 >> 7 & 1) != 0) {
    FUN_10a09c5d4(&uStack_80,&uStack_88);
    uVar1 = uStack_80;
    FUN_10a003e3c(uStack_80,param_3);
    if (((uint)uVar1 >> 7 & 1) != 0) {
      FUN_10a09c5d4(&uStack_78,&uStack_80);
      uVar1 = uStack_78;
      FUN_10a003e3c(uStack_78,param_2);
      if (((uint)uVar1 >> 7 & 1) != 0) {
        FUN_10a09c5d4(&uStack_70,&uStack_78);
        uVar1 = uStack_70;
        FUN_10a003e3c(uStack_70,param_1);
        if (((uint)uVar1 >> 7 & 1) != 0) {
          FUN_10a09c5d4(&uStack_68,&uStack_70);
        }
      }
    }
  }
  return;
}



/* Entry: 10a186408; end: 10a186653;  */

bool FUN_10a186408(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  ppuVar2 = &puStack_80;
  uVar6 = (long)param_2 - (long)param_1 >> 5;
  puStack_58 = param_2;
  puStack_50 = param_1;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_10a1864b0:
      FUN_10a186238(param_1,param_1 + 4,param_1 + 8);
      if (param_1 + 0xc == param_2) {
        return true;
      }
      iVar8 = 0;
      puVar4 = param_1 + 0xc;
      puVar3 = param_1 + 8;
      do {
        puVar7 = puVar4;
        puVar4 = puVar7;
        FUN_10a003e3c(puVar7,puVar3);
        if (((uint)puVar4 >> 7 & 1) != 0) {
          uStack_78 = puVar7[1];
          puStack_80 = (ulong *)*puVar7;
          uStack_70 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          uStack_68 = (undefined4)puVar7[3];
          do {
            puVar4 = puVar3;
            if (*(char *)((long)puVar4 + 0x37) < '\0') {
              __ZdlPv(puVar4[4]);
            }
            puVar4[5] = puVar4[1];
            puVar4[4] = *puVar4;
            puVar4[6] = puVar4[2];
            *(undefined1 *)((long)puVar4 + 0x17) = 0;
            *(undefined1 *)puVar4 = 0;
            *(int *)(puVar4 + 7) = (int)puVar4[3];
            if (puVar4 == puStack_50) break;
            uVar1 = (uint)&puStack_80;
            FUN_10a003e3c(&puStack_80,puVar4 + -4);
            puVar3 = puVar4 + -4;
          } while ((uVar1 >> 7 & 1) != 0);
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            __ZdlPv(*puVar4);
          }
          puVar4[2] = uStack_70;
          puVar4[1] = uStack_78;
          *puVar4 = (ulong)puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (ulong *)((ulong)puStack_80 & 0xffffffffffffff00);
          *(undefined4 *)(puVar4 + 3) = uStack_68;
          iVar8 = iVar8 + 1;
          if (iVar8 == 8) {
            return puVar7 + 4 == puStack_58;
          }
        }
        puVar4 = puVar7 + 4;
        puVar3 = puVar7;
        if (puVar7 + 4 == puStack_58) {
          return true;
        }
      } while( true );
    }
    param_2 = param_2 + -4;
    puStack_58 = param_2;
    FUN_10a003e3c(param_2,param_1);
    if (((uint)param_2 >> 7 & 1) == 0) {
      return true;
    }
    ppuVar2 = &puStack_50;
    ppuVar5 = &puStack_58;
  }
  else {
    if (uVar6 == 3) {
      FUN_10a186238(param_1,param_1 + 4,param_2 + -4);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_10a1862e4(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
        return true;
      }
      goto LAB_10a1864b0;
    }
    puVar4 = param_1 + 4;
    puVar3 = param_1 + 8;
    param_2 = param_2 + -4;
    puStack_80 = param_1;
    puStack_48 = param_2;
    puStack_40 = puVar3;
    puStack_38 = puVar4;
    FUN_10a186238(param_1,puVar4,puVar3);
    FUN_10a003e3c(param_2,puVar3);
    if (((uint)param_2 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10a09c5d4(&puStack_40,&puStack_48);
    puVar3 = puStack_40;
    FUN_10a003e3c(puStack_40,puVar4);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10a09c5d4(&puStack_38,&puStack_40);
    puVar4 = puStack_38;
    FUN_10a003e3c(puStack_38,param_1);
    if (((uint)puVar4 >> 7 & 1) == 0) {
      return true;
    }
    ppuVar5 = &puStack_38;
  }
  FUN_10a09c5d4(ppuVar2,ppuVar5);
  return true;
}



/* Entry: 10a186654; end: 10a186723;  */

long * FUN_10a186654(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a186724; end: 10a186893;  */

/* WARNING: Removing unreachable block (ram,0x00010a186858) */

void FUN_10a186724(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)(param_1[2] - lVar5 >> 5) < param_4) {
    plVar2 = param_1;
    func_0x00010a18669c();
    if (param_4 >> 0x3b != 0) {
      FUN_10a09b878();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = lVar5;
      __Unwind_Resume();
      lVar5 = *plVar2;
      *plVar2 = 0;
      if (lVar5 != 0) {
        if ((char)plVar2[2] == '\x01') {
          FUN_10a09aef4(lVar5 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar5);
        return;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1 >> 4;
    if (uVar4 <= param_4) {
      uVar4 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar4 = 0x7ffffffffffffff;
    }
    FUN_10a09b840(param_1,uVar4);
    FUN_10a09b8c0(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)(lVar6 - lVar5 >> 5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
          param_2 = param_2 + 0x20;
          lVar5 = lVar5 + 0x20;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x20) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        param_2 = param_2 + 0x20;
        lVar5 = lVar5 + 0x20;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10a09b8c0(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a186894; end: 10a1868db;  */

void FUN_10a186894(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a09aef4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1868dc; end: 10a186903;  */

void FUN_10a1868dc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_48;
  
  FUN_109ffde64(&UNK_10f6403f7);
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  func_0x000104c4f944(puVar1 + 0x358);
  puStack_48 = puVar1 + 0x338;
  FUN_10a0426d8(&puStack_48);
  puStack_48 = puVar1 + 800;
  FUN_10a0426d8(&puStack_48);
  if ((char)puVar1[799] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x308));
  }
  if ((char)puVar1[0x2ff] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x2e8));
  }
  if ((char)puVar1[0x2e7] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x2d0));
  }
  if ((char)puVar1[0x2cf] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x2b8));
  }
  if ((char)puVar1[0x2b7] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x2a0));
  }
  func_0x00010923ff08(puVar1 + 0x100);
  func_0x00010a0eb82c(puVar1 + 0x60);
  lVar2 = 0x50;
  do {
    func_0x00010a0eb17c(puVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x30);
  FUN_10a09da04(puVar1 + 0x30);
  lVar2 = 0x20;
  do {
    func_0x00010a0eb124(puVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  func_0x00010a09dbbc(puVar1);
  return;
}



/* Entry: 10a186904; end: 10a1869eb;  */

void FUN_10a186904(long param_1)

{
  long lVar1;
  long lStack_28;
  
  func_0x000104c4f944(param_1 + 0x358);
  lStack_28 = param_1 + 0x338;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1 + 800;
  FUN_10a0426d8(&lStack_28);
  if (*(char *)(param_1 + 799) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x308));
  }
  if (*(char *)(param_1 + 0x2ff) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2e8));
  }
  if (*(char *)(param_1 + 0x2e7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2d0));
  }
  if (*(char *)(param_1 + 0x2cf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2b8));
  }
  if (*(char *)(param_1 + 0x2b7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2a0));
  }
  func_0x00010923ff08(param_1 + 0x100);
  func_0x00010a0eb82c(param_1 + 0x60);
  lVar1 = 0x50;
  do {
    func_0x00010a0eb17c(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
  FUN_10a09da04(param_1 + 0x30);
  lVar1 = 0x20;
  do {
    func_0x00010a0eb124(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  func_0x00010a09dbbc(param_1);
  return;
}



/* Entry: 10a1869ec; end: 10a186c2b;  */

long * FUN_10a1869ec(long *param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (0 < param_5) {
    lVar5 = param_1[1];
    if ((param_1[2] - lVar5 >> 3) * -0x5555555555555555 < param_5) {
      lVar7 = *param_1;
      uVar6 = param_5 + (lVar5 - lVar7 >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar6) {
        plVar3 = param_1;
        FUN_10a05a0c0();
        param_1[1] = lVar5;
        __Unwind_Resume();
        plVar2 = (long *)plVar3[2];
        plVar4 = plVar3;
        plVar9 = plVar2;
        if (param_3 != 0) {
          plVar9 = plVar2 + param_3 * 3;
          param_3 = param_3 * 0x18;
          do {
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              plVar4 = plVar2;
              func_0x000107c3192c(plVar2,*param_2,param_2[1]);
            }
            else {
              lVar7 = param_2[1];
              lVar5 = *param_2;
              plVar2[2] = param_2[2];
              plVar2[1] = lVar7;
              *plVar2 = lVar5;
            }
            plVar2 = plVar2 + 3;
            param_2 = param_2 + 3;
            param_3 = param_3 + -0x18;
          } while (param_3 != 0);
        }
        plVar3[2] = (long)plVar9;
        return plVar4;
      }
      lVar5 = param_1[2] - lVar7 >> 3;
      uVar8 = lVar5 * 0x5555555555555556;
      if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
        uVar8 = uVar6;
      }
      if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      plStack_58 = param_1;
      if (uVar8 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_1;
        FUN_10a05a0d4();
      }
      plStack_70 = (long *)((long)plVar2 + ((long)param_2 - lVar7));
      plStack_60 = plVar2 + uVar8 * 3;
      plStack_78 = plVar2;
      plStack_68 = plStack_70;
      FUN_10a186c2c(&plStack_78,param_3,param_5);
      plVar2 = plStack_70;
      _memcpy(plStack_68,param_2,param_1[1] - (long)param_2);
      plStack_68 = (long *)((long)plStack_68 + (param_1[1] - (long)param_2));
      param_1[1] = (long)param_2;
      lVar5 = (long)plStack_70 - ((long)param_2 - *param_1);
      _memcpy(lVar5);
      plStack_78 = (long *)*param_1;
      *param_1 = lVar5;
      lVar5 = param_1[2];
      param_1[2] = (long)plStack_60;
      param_1[1] = (long)plStack_68;
      plStack_70 = plStack_78;
      plStack_68 = plStack_78;
      plStack_60 = (long *)lVar5;
      func_0x000107c31938(&plStack_78);
      param_2 = plVar2;
    }
    else {
      lVar7 = lVar5 - (long)param_2;
      if ((lVar7 >> 3) * -0x5555555555555555 < param_5) {
        lVar1 = lVar7 + param_3;
        plVar2 = param_1;
        FUN_10a0cf198(param_1,lVar1,param_4,lVar5);
        param_1[1] = (long)plVar2;
        if (0 < lVar7) {
          func_0x000107c283b8(param_1,param_2,lVar5,param_2 + param_5 * 3);
          plVar2 = param_2;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar2,param_3)
            ;
            param_3 = param_3 + 0x18;
            plVar2 = plVar2 + 3;
          } while (param_3 != lVar1);
        }
      }
      else {
        func_0x000107c283b8(param_1,param_2,lVar5,param_2 + param_5 * 3);
        lVar5 = param_3 + param_5 * 0x18;
        plVar2 = param_2;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar2,param_3);
          param_3 = param_3 + 0x18;
          plVar2 = plVar2 + 3;
        } while (param_3 != lVar5);
      }
    }
  }
  return param_2;
}



/* Entry: 10a186c2c; end: 10a186cbb;  */

void FUN_10a186c2c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = puVar1;
  if (param_3 != 0) {
    puVar2 = puVar1 + param_3 * 3;
    param_3 = param_3 * 0x18;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(puVar1,*param_2,param_2[1]);
      }
      else {
        uVar4 = param_2[1];
        uVar3 = *param_2;
        puVar1[2] = param_2[2];
        puVar1[1] = uVar4;
        *puVar1 = uVar3;
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + 3;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  return;
}



/* Entry: 10a186cbc; end: 10a186d9f;  */

undefined8 * FUN_10a186cbc(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    do {
      puVar3 = param_1;
      param_1 = puVar3 + 3;
      puVar4 = param_2;
      if (param_1 == param_2) break;
      uVar2 = param_3;
      FUN_10a0cd2f8(param_3,puVar3,param_1);
      puVar4 = puVar3;
    } while ((int)uVar2 == 0);
    if (param_2 != puVar4) {
      for (puVar3 = puVar4 + 6; puVar3 != param_2; puVar3 = puVar3 + 3) {
        uVar2 = param_3;
        FUN_10a0cd2f8(param_3,puVar4,puVar3);
        if ((uVar2 & 1) == 0) {
          puVar1 = puVar4 + 3;
          if (*(char *)((long)puVar4 + 0x2f) < '\0') {
            __ZdlPv(*puVar1);
          }
          uVar6 = puVar3[1];
          uVar5 = *puVar3;
          puVar4[5] = puVar3[2];
          puVar4[4] = uVar6;
          *puVar1 = uVar5;
          *(undefined1 *)((long)puVar3 + 0x17) = 0;
          *(undefined1 *)puVar3 = 0;
          puVar4 = puVar1;
        }
      }
      param_2 = puVar4 + 3;
    }
  }
  return param_2;
}



/* Entry: 10a186da0; end: 10a186deb;  */

undefined8 * FUN_10a186da0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a186dec; end: 10a186e57;  */

bool FUN_10a186dec(long param_1,ulong param_2,char *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 < param_4) {
    return false;
  }
  if (param_4 != 0) {
    lVar4 = -param_4;
    do {
      cVar1 = *(char *)(param_1 + param_2 + lVar4);
      uVar5 = (int)cVar1 + 0x20;
      if (0x19 < (int)cVar1 - 0x41U) {
        uVar5 = (uint)cVar1;
      }
      cVar1 = *param_3;
      uVar6 = (int)cVar1 + 0x20;
      if (0x19 < (int)cVar1 - 0x41U) {
        uVar6 = (uint)cVar1;
      }
      bVar2 = (uVar5 & 0xff) == (uVar6 & 0xff);
      bVar3 = lVar4 != -1;
      lVar4 = lVar4 + 1;
      param_3 = param_3 + 1;
    } while (bVar2 && bVar3);
    return bVar2;
  }
  return true;
}



/* Entry: 10a186e58; end: 10a186e6b;  */

void FUN_10a186e58(void)

{
  FUN_10a186eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a186e6c; end: 10a186e7b;  */

undefined4 FUN_10a186e6c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



/* Entry: 10a186e7c; end: 10a186e93;  */

void FUN_10a186e7c(long param_1)

{
  FUN_10a186eb4(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a186e94; end: 10a186e9b;  */

undefined8 * FUN_10a186e94(undefined8 *param_1)

{
  param_1[-8] = &PTR_FUN_110ba8fa8;
  param_1[-1] = &PTR_FUN_110ba90b0;
  *param_1 = &PTR_FUN_110ba90d8;
  func_0x00010a09db0c(param_1 + 0x10);
  func_0x00010a09dbbc(param_1 + 0xe);
  func_0x00010a045fb4(param_1 + 0xb);
  *param_1 = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 1);
  return param_1 + -8;
}



/* Entry: 10a186e9c; end: 10a186eb3;  */

void FUN_10a186e9c(long param_1)

{
  FUN_10a186eb4(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a186eb4; end: 10a186f17;  */

undefined8 * FUN_10a186eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8fa8;
  param_1[7] = &PTR_FUN_110ba90b0;
  param_1[8] = &PTR_FUN_110ba90d8;
  func_0x00010a09db0c(param_1 + 0x18);
  func_0x00010a09dbbc(param_1 + 0x16);
  func_0x00010a045fb4(param_1 + 0x13);
  param_1[8] = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 9);
  return param_1;
}



/* Entry: 10a186f18; end: 10a186f2b;  */

undefined1  [16] FUN_10a186f18(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar2 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (0x5d1745d1745d174 < param_2) {
    func_0x000109ffded8();
    plVar1 = (long *)plVar2[2];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      FUN_10a186fd0(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar2;
    return auVar5;
  }
  lVar3 = param_2 * 0x2c;
  __Znwm(lVar3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 10a186f2c; end: 10a186f73;  */

undefined1  [16] FUN_10a186f2c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0x5d1745d1745d174 < param_2) {
    func_0x000109ffded8();
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      FUN_10a186fd0(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar2;
    }
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar2 = param_2 * 0x2c;
  __Znwm(lVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10a186f74; end: 10a186fcf;  */

long * FUN_10a186f74(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a186fd0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a186fd0; end: 10a18702b;  */

void FUN_10a186fd0(long param_1)

{
  func_0x00010a0ec3c8(param_1 + 0x58);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a18702c; end: 10a18709b;  */

void FUN_10a18702c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x20) != 0) {
          *(long *)(lVar3 + -0x18) = *(long *)(lVar3 + -0x20);
          __ZdlPv();
        }
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a18709c; end: 10a1870eb;  */

undefined1  [16] FUN_10a18709c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_109ffde64(&UNK_10f6403f7);
  FUN_109ffde64(&UNK_10f6403f7);
  FUN_109ffde64(&UNK_10f6403f7);
  puVar2 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (puVar2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)puVar2 * 0x18;
    __Znwm(lVar3);
    auVar5._8_8_ = puVar2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  lVar3 = param_2;
  if (param_2 != 0) {
    FUN_10a1871b8(puVar2);
    puVar4 = (undefined8 *)puVar2[1];
    puVar1 = puVar4 + param_2 * 8;
    param_2 = param_2 << 6;
    do {
      puVar4[1] = 0;
      *puVar4 = 0x3f800000;
      puVar4[3] = 0;
      puVar4[2] = 0x3f80000000000000;
      puVar4[5] = 0x3f800000;
      puVar4[4] = 0;
      puVar4[7] = 0x3f80000000000000;
      puVar4[6] = 0;
      puVar4 = puVar4 + 8;
      param_2 = param_2 + -0x40;
    } while (param_2 != 0);
    puVar2[1] = puVar1;
  }
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10a1870ec; end: 10a18712f;  */

undefined1  [16] FUN_10a1870ec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_1 * 0x18;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = param_2;
  if (param_2 != 0) {
    FUN_10a1871b8(param_1);
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar3 + param_2 * 8;
    param_2 = param_2 << 6;
    do {
      puVar3[1] = 0;
      *puVar3 = 0x3f800000;
      puVar3[3] = 0;
      puVar3[2] = 0x3f80000000000000;
      puVar3[5] = 0x3f800000;
      puVar3[4] = 0;
      puVar3[7] = 0x3f80000000000000;
      puVar3[6] = 0;
      puVar3 = puVar3 + 8;
      param_2 = param_2 + -0x40;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a187130; end: 10a1871b7;  */

undefined8 * FUN_10a187130(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a1871b8(param_1);
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar2 + param_2 * 8;
    param_2 = param_2 << 6;
    do {
      puVar2[1] = 0;
      *puVar2 = 0x3f800000;
      puVar2[3] = 0;
      puVar2[2] = 0x3f80000000000000;
      puVar2[5] = 0x3f800000;
      puVar2[4] = 0;
      puVar2[7] = 0x3f80000000000000;
      puVar2[6] = 0;
      puVar2 = puVar2 + 8;
      param_2 = param_2 + -0x40;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  return param_1;
}



/* Entry: 10a1871b8; end: 10a1871ef;  */

undefined1  [16] FUN_10a1871b8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3a == 0) {
    plVar3 = param_1;
    FUN_10a0435e0();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + param_2 * 8);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar3;
    return auVar5;
  }
  FUN_10a0435cc();
  FUN_109ffde64(&UNK_10f6403f7);
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    plVar3 = (long *)&UNK_10f6403f7;
    FUN_109ffde64();
    lVar2 = plVar3[1];
    lVar1 = plVar3[2];
    while (lVar4 = lVar1, lVar4 != lVar2) {
      plVar3[2] = lVar4 + -0x30;
      lVar1 = lVar4 + -0x30;
      if (*(long *)(lVar4 + -0x20) != 0) {
        *(long *)(lVar4 + -0x18) = *(long *)(lVar4 + -0x20);
        __ZdlPv();
        lVar1 = plVar3[2];
      }
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar3;
    return auVar7;
  }
  lVar2 = param_2 * 0x18;
  __Znwm(lVar2);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 10a1871f0; end: 10a187203;  */

undefined1  [16] FUN_10a1871f0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_109ffde64(&UNK_10f6403f7);
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    plVar3 = (long *)&UNK_10f6403f7;
    FUN_109ffde64();
    lVar2 = plVar3[1];
    lVar1 = plVar3[2];
    while (lVar4 = lVar1, lVar4 != lVar2) {
      plVar3[2] = lVar4 + -0x30;
      lVar1 = lVar4 + -0x30;
      if (*(long *)(lVar4 + -0x20) != 0) {
        *(long *)(lVar4 + -0x18) = *(long *)(lVar4 + -0x20);
        __ZdlPv();
        lVar1 = plVar3[2];
      }
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = plVar3;
    return auVar6;
  }
  lVar2 = param_2 * 0x18;
  __Znwm(lVar2);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 10a187204; end: 10a187247;  */

undefined1  [16] FUN_10a187204(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    plVar3 = (long *)&UNK_10f6403f7;
    FUN_109ffde64();
    lVar2 = plVar3[1];
    lVar1 = plVar3[2];
    while (lVar4 = lVar1, lVar4 != lVar2) {
      plVar3[2] = lVar4 + -0x30;
      lVar1 = lVar4 + -0x30;
      if (*(long *)(lVar4 + -0x20) != 0) {
        *(long *)(lVar4 + -0x18) = *(long *)(lVar4 + -0x20);
        __ZdlPv();
        lVar1 = plVar3[2];
      }
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = plVar3;
    return auVar6;
  }
  lVar2 = param_2 * 0x18;
  __Znwm(lVar2);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 10a187248; end: 10a18725b;  */

long * FUN_10a187248(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  lVar1 = plVar3[1];
  lVar2 = plVar3[2];
  while (lVar4 = lVar2, lVar4 != lVar1) {
    plVar3[2] = lVar4 + -0x30;
    lVar2 = lVar4 + -0x30;
    if (*(long *)(lVar4 + -0x20) != 0) {
      *(long *)(lVar4 + -0x18) = *(long *)(lVar4 + -0x20);
      __ZdlPv();
      lVar2 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a18725c; end: 10a1872bb;  */

long * FUN_10a18725c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x30;
    lVar2 = lVar3 + -0x30;
    if (*(long *)(lVar3 + -0x20) != 0) {
      *(long *)(lVar3 + -0x18) = *(long *)(lVar3 + -0x20);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1872bc; end: 10a1872f7;  */

void FUN_10a1872bc(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long *plStack_78;
  
  FUN_109ffde64(&UNK_10f6403f7);
  FUN_109ffde64(&UNK_10f6403f7);
  plVar2 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_4 != 0) {
    if (0x555555555555555 < param_4) {
      FUN_10a187430();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a187408);
      (*pcVar1)();
    }
    plVar3 = plVar2;
    FUN_10a187444();
    *plVar2 = (long)plVar3;
    plVar2[1] = (long)plVar3;
    plVar2[2] = (long)(plVar3 + param_4 * 6);
    pplStack_98 = &plStack_80;
    pplStack_90 = &plStack_78;
    uStack_88 = 0;
    plStack_a0 = plVar2;
    plStack_80 = plVar3;
    for (; plStack_78 = plVar3, param_2 != param_3; param_2 = param_2 + 6) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar3,*param_2,param_2[1]);
      }
      else {
        lVar5 = param_2[1];
        lVar4 = *param_2;
        plVar3[2] = param_2[2];
        plVar3[1] = lVar5;
        *plVar3 = lVar4;
      }
      plVar3[3] = param_2[3];
      lVar4 = param_2[4];
      plVar3[5] = param_2[5];
      plVar3[4] = lVar4;
      plVar3 = plStack_78 + 6;
    }
    uStack_88 = 1;
    FUN_10a187488(&plStack_a0);
    plVar2[1] = (long)plVar3;
  }
  return;
}



/* Entry: 10a1872f8; end: 10a18742f;  */

void FUN_10a1872f8(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long **pplStack_68;
  long **pplStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 != 0) {
    if (0x555555555555555 < param_4) {
      FUN_10a187430();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a187408);
      (*pcVar1)();
    }
    plVar2 = param_1;
    FUN_10a187444();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_4 * 6);
    pplStack_68 = &plStack_50;
    pplStack_60 = &plStack_48;
    uStack_58 = 0;
    plStack_50 = plVar2;
    plStack_70 = param_1;
    for (; plStack_48 = plVar2, param_2 != param_3; param_2 = param_2 + 6) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar2,*param_2,param_2[1]);
      }
      else {
        lVar4 = param_2[1];
        lVar3 = *param_2;
        plVar2[2] = param_2[2];
        plVar2[1] = lVar4;
        *plVar2 = lVar3;
      }
      plVar2[3] = param_2[3];
      lVar3 = param_2[4];
      plVar2[5] = param_2[5];
      plVar2[4] = lVar3;
      plVar2 = plStack_48 + 6;
    }
    uStack_58 = 1;
    FUN_10a187488(&plStack_70);
    param_1[1] = (long)plVar2;
  }
  return;
}



/* Entry: 10a187430; end: 10a187443;  */

undefined1  [16] FUN_10a187430(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  if ((puVar1[0x18] & 1) == 0) {
    FUN_10a1874bc(puVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a187444; end: 10a187487;  */

undefined1  [16] FUN_10a187444(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a1874bc(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a187488; end: 10a1874bb;  */

long FUN_10a187488(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a1874bc(param_1);
  }
  return param_1;
}



/* Entry: 10a1874bc; end: 10a18753f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1874e8) */

void FUN_10a1874bc(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x30
      ) {
  }
  return;
}



/* Entry: 10a187540; end: 10a18758b;  */

/* WARNING: Removing unreachable block (ram,0x00010a18756c) */

void FUN_10a187540(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a18758c; end: 10a1876ff;  */

void FUN_10a18758c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_88;
  long **pplStack_80;
  long **pplStack_78;
  undefined1 uStack_70;
  long *plStack_68;
  long *aplStack_60 [2];
  
  if (param_4 != 0) {
    if (0x2aaaaaaaaaaaaaa < param_4) {
      FUN_10a187700();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1876c4);
      (*pcVar1)();
    }
    plVar2 = param_1;
    FUN_10a187714();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_4 * 0xc);
    pplStack_80 = &plStack_68;
    pplStack_78 = aplStack_60;
    uStack_70 = 0;
    plStack_68 = plVar2;
    plStack_88 = param_1;
    for (; aplStack_60[0] = plVar2, param_2 != param_3; param_2 = param_2 + 0xc) {
      lVar4 = param_2[1];
      lVar3 = *param_2;
      lVar5 = param_2[2];
      lVar7 = param_2[5];
      lVar6 = param_2[4];
      plVar2[3] = param_2[3];
      plVar2[2] = lVar5;
      plVar2[5] = lVar7;
      plVar2[4] = lVar6;
      plVar2[1] = lVar4;
      *plVar2 = lVar3;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[8] = 0;
      FUN_10a1872f8(plVar2 + 6,param_2[6],param_2[7],
                    (param_2[7] - param_2[6] >> 4) * -0x5555555555555555);
      plVar2[9] = 0;
      plVar2[10] = 0;
      plVar2[0xb] = 0;
      FUN_10a18758c(plVar2 + 9,param_2[9],param_2[10],
                    (param_2[10] - param_2[9] >> 5) * -0x5555555555555555);
      plVar2 = aplStack_60[0] + 0xc;
    }
    uStack_70 = 1;
    FUN_10a187758(&plStack_88);
    param_1[1] = (long)plVar2;
  }
  return;
}



/* Entry: 10a187700; end: 10a187713;  */

undefined1  [16] FUN_10a187700(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x60;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  if ((*(byte *)(puVar1 + 3) & 1) == 0) {
    param_2 = *(ulong *)puVar1[2];
    FUN_10a1877a0(*puVar1,param_2,param_2,*(undefined8 *)puVar1[1],*(undefined8 *)puVar1[1]);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a187714; end: 10a187757;  */

undefined1  [16] FUN_10a187714(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x60;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    param_2 = *(ulong *)param_1[2];
    FUN_10a1877a0(*param_1,param_2,param_2,*(undefined8 *)param_1[1],*(undefined8 *)param_1[1]);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a187758; end: 10a18779f;  */

undefined8 * FUN_10a187758(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_10a1877a0(*param_1,*(undefined8 *)param_1[2],*(undefined8 *)param_1[2],
                  *(undefined8 *)param_1[1],*(undefined8 *)param_1[1]);
  }
  return param_1;
}



/* Entry: 10a1877a0; end: 10a187807;  */

void FUN_10a1877a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_38;
  
  for (; param_3 != param_5; param_3 = param_3 + -0x60) {
    lStack_38 = param_3 + -0x18;
    FUN_10a187808(&lStack_38);
    lStack_38 = param_3 + -0x30;
    func_0x00010a187500(&lStack_38);
  }
  return;
}



/* Entry: 10a187808; end: 10a187847;  */

void FUN_10a187808(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a187848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a187848; end: 10a1878b7;  */

void FUN_10a187848(long param_1,long param_2)

{
  long lVar1;
  long lStack_38;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x60) {
    lStack_38 = lVar1 + -0x18;
    FUN_10a187808(&lStack_38);
    lStack_38 = lVar1 + -0x30;
    func_0x00010a187500(&lStack_38);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a1878b8; end: 10a1878cb;  */

bool FUN_10a1878b8(undefined8 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) &&
     (*(long *)(piVar1 + 4) == *(long *)(param_2 + 4))) {
    if (*(long *)(piVar1 + 6) != *(long *)(param_2 + 6)) {
      return false;
    }
    if (piVar1[8] != param_2[8]) {
      return false;
    }
    if (((*(long *)(piVar1 + 10) == *(long *)(param_2 + 10)) && (piVar1[0xc] == param_2[0xc])) &&
       (piVar1[0xd] == param_2[0xd])) {
      if (*(long *)(piVar1 + 0xe) != *(long *)(param_2 + 0xe)) {
        return false;
      }
      if (piVar1[0x10] != param_2[0x10]) {
        return false;
      }
      if ((*(long *)(piVar1 + 0x12) == *(long *)(param_2 + 0x12)) &&
         (*(long *)(piVar1 + 0x14) == *(long *)(param_2 + 0x14))) {
        return *(long *)(piVar1 + 0x16) == *(long *)(param_2 + 0x16);
      }
    }
  }
  return false;
}



/* Entry: 10a1878cc; end: 10a1879c3;  */

bool FUN_10a1878cc(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (*(long *)(param_1 + 4) == *(long *)(param_2 + 4))) {
    if (*(long *)(param_1 + 6) != *(long *)(param_2 + 6)) {
      return false;
    }
    if (param_1[8] != param_2[8]) {
      return false;
    }
    if (((*(long *)(param_1 + 10) == *(long *)(param_2 + 10)) && (param_1[0xc] == param_2[0xc])) &&
       (param_1[0xd] == param_2[0xd])) {
      if (*(long *)(param_1 + 0xe) != *(long *)(param_2 + 0xe)) {
        return false;
      }
      if (param_1[0x10] != param_2[0x10]) {
        return false;
      }
      if ((*(long *)(param_1 + 0x12) == *(long *)(param_2 + 0x12)) &&
         (*(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14))) {
        return *(long *)(param_1 + 0x16) == *(long *)(param_2 + 0x16);
      }
    }
  }
  return false;
}



/* Entry: 10a1879c4; end: 10a187b1b;  */

undefined1  [16]
FUN_10a1879c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar9 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  puVar3 = param_1;
  if ((undefined8 *)((lVar9 - (long)puVar12 >> 5) * -0x5555555555555555) < param_4) {
    puVar13 = param_1;
    puVar11 = param_2;
    puVar4 = param_3;
    puVar6 = param_4;
    if (puVar12 != (undefined8 *)0x0) {
      param_1[1] = puVar12;
      __ZdlPv();
      lVar9 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar13 = puVar12;
    }
    if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_4) {
      FUN_10a187b64();
      if (puVar11 < (undefined8 *)0x2aaaaaaaaaaaaab) {
        puVar3 = puVar13;
        FUN_10a187b78();
        *puVar13 = puVar3;
        puVar13[1] = puVar3;
        puVar13[2] = puVar3 + (long)puVar11 * 0xc;
        auVar16._8_8_ = puVar11;
        auVar16._0_8_ = puVar3;
        return auVar16;
      }
      FUN_10a187b64();
      puVar3 = (undefined8 *)&UNK_10f6403f7;
      FUN_109ffde64();
      if (puVar11 < (undefined8 *)0x2aaaaaaaaaaaaab) {
        lVar9 = (long)puVar11 * 0x60;
        __Znwm(lVar9);
        auVar17._8_8_ = puVar11;
        auVar17._0_8_ = lVar9;
        return auVar17;
      }
      func_0x000109ffded8();
      uVar10 = puVar3[2];
      puVar13 = (undefined8 *)*puVar3;
      puVar12 = puVar3;
      if ((undefined8 *)((long)(uVar10 - (long)puVar13) >> 4) < puVar6) {
        puVar14 = puVar3;
        puVar5 = puVar11;
        puVar7 = puVar4;
        puVar8 = puVar6;
        if (puVar13 != (undefined8 *)0x0) {
          puVar3[1] = puVar13;
          __ZdlPv();
          uVar10 = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar14 = puVar13;
        }
        if ((ulong)puVar6 >> 0x3c != 0) {
          func_0x00010a044abc();
          if ((ulong)puVar5 >> 0x3c == 0) {
            puVar3 = puVar14;
            FUN_10a044ad0();
            *puVar14 = puVar3;
            puVar14[1] = puVar3;
            puVar14[2] = puVar3 + (long)puVar5 * 2;
            auVar19._8_8_ = puVar5;
            auVar19._0_8_ = puVar3;
            return auVar19;
          }
          func_0x00010a044abc();
          uVar10 = puVar14[2];
          puVar3 = (undefined8 *)*puVar14;
          if ((undefined8 *)((long)(uVar10 - (long)puVar3) >> 3) < puVar8) {
            puVar12 = puVar5;
            puVar13 = puVar7;
            if (puVar3 != (undefined8 *)0x0) {
              puVar14[1] = puVar3;
              __ZdlPv();
              uVar10 = 0;
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
            }
            if ((ulong)puVar8 >> 0x3d != 0) {
              FUN_10a187e74();
              if ((ulong)puVar12 >> 0x3d == 0) {
                puVar13 = puVar3;
                FUN_10a187e88();
                *puVar3 = puVar13;
                puVar3[1] = puVar13;
                puVar3[2] = puVar13 + (long)puVar12;
                auVar21._8_8_ = puVar12;
                auVar21._0_8_ = puVar13;
                return auVar21;
              }
              FUN_10a187e74();
              puVar3 = (undefined8 *)&UNK_10f6403f7;
              FUN_109ffde64();
              if ((ulong)puVar12 >> 0x3d == 0) {
                lVar9 = (long)puVar12 << 3;
                __Znwm(lVar9);
                auVar22._8_8_ = puVar12;
                auVar22._0_8_ = lVar9;
                return auVar22;
              }
              func_0x000109ffded8();
              puVar11 = puVar12;
              if (puVar3 != puVar12) {
                uVar10 = puVar13[1];
                puVar4 = (undefined8 *)*puVar13;
                if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
                  uVar10 = (ulong)*(byte *)((long)puVar13 + 0x17);
                  puVar4 = puVar13;
                }
                do {
                  bVar2 = *(byte *)((long)puVar3 + 0x17);
                  uVar1 = puVar3[1];
                  if (-1 < (char)bVar2) {
                    uVar1 = (ulong)bVar2;
                  }
                  if (uVar1 == uVar10) {
                    puVar13 = (undefined8 *)*puVar3;
                    if (-1 < (char)bVar2) {
                      puVar13 = puVar3;
                    }
                    puVar11 = puVar4;
                    _memcmp(puVar13,puVar4,uVar10);
                    if ((int)puVar13 == 0) break;
                  }
                  puVar3 = puVar3 + 3;
                } while (puVar3 != puVar12);
              }
              auVar23._8_8_ = puVar11;
              auVar23._0_8_ = puVar3;
              return auVar23;
            }
            puVar12 = (undefined8 *)((long)uVar10 >> 2);
            if ((undefined8 *)((long)uVar10 >> 2) <= puVar8) {
              puVar12 = puVar8;
            }
            if (0x7ffffffffffffff7 < uVar10) {
              puVar12 = (undefined8 *)0x1fffffffffffffff;
            }
            puVar3 = puVar14;
            FUN_10a187e3c(puVar14,puVar12);
            puVar13 = (undefined8 *)puVar14[1];
            for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
              *puVar13 = *puVar5;
              puVar13 = puVar13 + 1;
            }
            puVar14[1] = puVar13;
            puVar5 = puVar12;
          }
          else {
            puVar12 = (undefined8 *)puVar14[1];
            lVar9 = (long)puVar12 - (long)puVar3;
            puVar13 = puVar5;
            if ((undefined8 *)(lVar9 >> 3) < puVar8) {
              puVar13 = (undefined8 *)((long)puVar5 + lVar9);
              puVar4 = puVar3;
              puVar6 = puVar5;
              puVar11 = puVar12;
              if (puVar12 != puVar3) {
                do {
                  puVar3 = puVar4 + 1;
                  *puVar4 = *puVar6;
                  lVar9 = lVar9 + -8;
                  puVar4 = puVar3;
                  puVar6 = puVar6 + 1;
                } while (lVar9 != 0);
              }
              for (; puVar13 != puVar7; puVar13 = puVar13 + 1) {
                *puVar12 = *puVar13;
                puVar12 = puVar12 + 1;
                puVar11 = puVar11 + 1;
              }
              puVar14[1] = puVar11;
            }
            else {
              for (; puVar13 != puVar7; puVar13 = puVar13 + 1) {
                *puVar3 = *puVar13;
                puVar3 = puVar3 + 1;
              }
              puVar14[1] = puVar3;
            }
          }
          auVar20._8_8_ = puVar5;
          auVar20._0_8_ = puVar3;
          return auVar20;
        }
        puVar5 = (undefined8 *)((long)uVar10 >> 3);
        if ((undefined8 *)((long)uVar10 >> 3) <= puVar6) {
          puVar5 = puVar6;
        }
        if (0x7fffffffffffffef < uVar10) {
          puVar5 = (undefined8 *)0xfffffffffffffff;
        }
        FUN_10a187ce4(puVar3,puVar5);
        puVar13 = (undefined8 *)puVar3[1];
        lVar9 = (long)puVar4 - (long)puVar11;
        if (lVar9 != 0) {
          puVar12 = puVar13;
          _memmove(puVar13,puVar11,lVar9);
          puVar5 = puVar11;
        }
        lVar9 = (long)puVar13 + lVar9;
      }
      else {
        puVar14 = (undefined8 *)puVar3[1];
        if ((undefined8 *)((long)puVar14 - (long)puVar13 >> 4) < puVar6) {
          puVar6 = (undefined8 *)((long)puVar11 + ((long)puVar14 - (long)puVar13));
          if (puVar14 != puVar13) {
            _memmove(puVar13,puVar11);
            puVar14 = (undefined8 *)puVar3[1];
            puVar12 = puVar13;
          }
          lVar9 = (long)puVar4 - (long)puVar6;
          puVar5 = puVar11;
          if (lVar9 != 0) {
            puVar12 = puVar14;
            _memmove(puVar14,puVar6,lVar9);
            puVar5 = puVar6;
          }
          lVar9 = (long)puVar14 + lVar9;
        }
        else {
          lVar9 = (long)puVar4 - (long)puVar11;
          puVar5 = puVar11;
          if (lVar9 != 0) {
            puVar12 = puVar13;
            _memmove(puVar13,puVar11,lVar9);
            puVar5 = puVar11;
          }
          lVar9 = (long)puVar13 + lVar9;
        }
      }
      puVar3[1] = lVar9;
      auVar18._8_8_ = puVar5;
      auVar18._0_8_ = puVar12;
      return auVar18;
    }
    puVar11 = (undefined8 *)((lVar9 >> 5) * 0x5555555555555556);
    if (puVar11 < param_4 || (long)puVar11 - (long)param_4 == 0) {
      puVar11 = param_4;
    }
    if (0x155555555555554 < (ulong)((lVar9 >> 5) * -0x5555555555555555)) {
      puVar11 = (undefined8 *)0x2aaaaaaaaaaaaaa;
    }
    FUN_10a187b1c(param_1,puVar11);
    puVar12 = (undefined8 *)param_1[1];
    lVar9 = (long)param_3 - (long)param_2;
    if (lVar9 != 0) {
      puVar3 = puVar12;
      _memmove(puVar12,param_2,lVar9);
      puVar11 = param_2;
    }
    lVar9 = (long)puVar12 + lVar9;
  }
  else {
    puVar13 = (undefined8 *)param_1[1];
    if ((undefined8 *)(((long)puVar13 - (long)puVar12 >> 5) * -0x5555555555555555) < param_4) {
      puVar4 = (undefined8 *)((long)param_2 + ((long)puVar13 - (long)puVar12));
      if (puVar13 != puVar12) {
        _memmove(puVar12,param_2);
        puVar13 = (undefined8 *)param_1[1];
        puVar3 = puVar12;
      }
      lVar9 = (long)param_3 - (long)puVar4;
      puVar11 = param_2;
      if (lVar9 != 0) {
        puVar3 = puVar13;
        _memmove(puVar13,puVar4,lVar9);
        puVar11 = puVar4;
      }
      lVar9 = (long)puVar13 + lVar9;
    }
    else {
      lVar9 = (long)param_3 - (long)param_2;
      puVar11 = param_2;
      if (lVar9 != 0) {
        puVar3 = puVar12;
        _memmove(puVar12,param_2,lVar9);
        puVar11 = param_2;
      }
      lVar9 = (long)puVar12 + lVar9;
    }
  }
  param_1[1] = lVar9;
  auVar15._8_8_ = puVar11;
  auVar15._0_8_ = puVar3;
  return auVar15;
}



/* Entry: 10a187b1c; end: 10a187b63;  */

undefined1  [16]
FUN_10a187b1c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    plVar3 = param_1;
    FUN_10a187b78();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 0xc);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = plVar3;
    return auVar15;
  }
  FUN_10a187b64();
  puVar5 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    lVar4 = (long)param_2 * 0x60;
    __Znwm(lVar4);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar4;
    return auVar16;
  }
  func_0x000109ffded8();
  uVar10 = puVar5[2];
  puVar13 = (undefined8 *)*puVar5;
  puVar11 = puVar5;
  if ((undefined8 *)((long)(uVar10 - (long)puVar13) >> 4) < param_4) {
    puVar14 = puVar5;
    puVar7 = param_2;
    puVar8 = param_3;
    puVar9 = param_4;
    if (puVar13 != (undefined8 *)0x0) {
      puVar5[1] = puVar13;
      __ZdlPv();
      uVar10 = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar14 = puVar13;
    }
    if ((ulong)param_4 >> 0x3c != 0) {
      func_0x00010a044abc();
      if ((ulong)puVar7 >> 0x3c == 0) {
        puVar5 = puVar14;
        FUN_10a044ad0();
        *puVar14 = puVar5;
        puVar14[1] = puVar5;
        puVar14[2] = puVar5 + (long)puVar7 * 2;
        auVar18._8_8_ = puVar7;
        auVar18._0_8_ = puVar5;
        return auVar18;
      }
      func_0x00010a044abc();
      uVar10 = puVar14[2];
      puVar5 = (undefined8 *)*puVar14;
      if ((undefined8 *)((long)(uVar10 - (long)puVar5) >> 3) < puVar9) {
        puVar11 = puVar7;
        puVar13 = puVar8;
        if (puVar5 != (undefined8 *)0x0) {
          puVar14[1] = puVar5;
          __ZdlPv();
          uVar10 = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
        }
        if ((ulong)puVar9 >> 0x3d != 0) {
          FUN_10a187e74();
          if ((ulong)puVar11 >> 0x3d == 0) {
            puVar13 = puVar5;
            FUN_10a187e88();
            *puVar5 = puVar13;
            puVar5[1] = puVar13;
            puVar5[2] = puVar13 + (long)puVar11;
            auVar20._8_8_ = puVar11;
            auVar20._0_8_ = puVar13;
            return auVar20;
          }
          FUN_10a187e74();
          puVar5 = (undefined8 *)&UNK_10f6403f7;
          FUN_109ffde64();
          if ((ulong)puVar11 >> 0x3d == 0) {
            lVar4 = (long)puVar11 << 3;
            __Znwm(lVar4);
            auVar21._8_8_ = puVar11;
            auVar21._0_8_ = lVar4;
            return auVar21;
          }
          func_0x000109ffded8();
          puVar14 = puVar11;
          if (puVar5 != puVar11) {
            uVar10 = puVar13[1];
            puVar7 = (undefined8 *)*puVar13;
            if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
              uVar10 = (ulong)*(byte *)((long)puVar13 + 0x17);
              puVar7 = puVar13;
            }
            do {
              bVar2 = *(byte *)((long)puVar5 + 0x17);
              uVar1 = puVar5[1];
              if (-1 < (char)bVar2) {
                uVar1 = (ulong)bVar2;
              }
              if (uVar1 == uVar10) {
                puVar13 = (undefined8 *)*puVar5;
                if (-1 < (char)bVar2) {
                  puVar13 = puVar5;
                }
                puVar14 = puVar7;
                _memcmp(puVar13,puVar7,uVar10);
                if ((int)puVar13 == 0) break;
              }
              puVar5 = puVar5 + 3;
            } while (puVar5 != puVar11);
          }
          auVar22._8_8_ = puVar14;
          auVar22._0_8_ = puVar5;
          return auVar22;
        }
        puVar11 = (undefined8 *)((long)uVar10 >> 2);
        if ((undefined8 *)((long)uVar10 >> 2) <= puVar9) {
          puVar11 = puVar9;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          puVar11 = (undefined8 *)0x1fffffffffffffff;
        }
        puVar5 = puVar14;
        FUN_10a187e3c(puVar14,puVar11);
        puVar13 = (undefined8 *)puVar14[1];
        for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
          *puVar13 = *puVar7;
          puVar13 = puVar13 + 1;
        }
        puVar14[1] = puVar13;
        puVar7 = puVar11;
      }
      else {
        puVar11 = (undefined8 *)puVar14[1];
        lVar4 = (long)puVar11 - (long)puVar5;
        puVar13 = puVar7;
        if ((undefined8 *)(lVar4 >> 3) < puVar9) {
          puVar13 = (undefined8 *)((long)puVar7 + lVar4);
          puVar6 = puVar5;
          puVar12 = puVar7;
          puVar9 = puVar11;
          if (puVar11 != puVar5) {
            do {
              puVar5 = puVar6 + 1;
              *puVar6 = *puVar12;
              lVar4 = lVar4 + -8;
              puVar6 = puVar5;
              puVar12 = puVar12 + 1;
            } while (lVar4 != 0);
          }
          for (; puVar13 != puVar8; puVar13 = puVar13 + 1) {
            *puVar11 = *puVar13;
            puVar11 = puVar11 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar14[1] = puVar9;
        }
        else {
          for (; puVar13 != puVar8; puVar13 = puVar13 + 1) {
            *puVar5 = *puVar13;
            puVar5 = puVar5 + 1;
          }
          puVar14[1] = puVar5;
        }
      }
      auVar19._8_8_ = puVar7;
      auVar19._0_8_ = puVar5;
      return auVar19;
    }
    puVar7 = (undefined8 *)((long)uVar10 >> 3);
    if ((undefined8 *)((long)uVar10 >> 3) <= param_4) {
      puVar7 = param_4;
    }
    if (0x7fffffffffffffef < uVar10) {
      puVar7 = (undefined8 *)0xfffffffffffffff;
    }
    FUN_10a187ce4(puVar5,puVar7);
    puVar13 = (undefined8 *)puVar5[1];
    lVar4 = (long)param_3 - (long)param_2;
    if (lVar4 != 0) {
      puVar11 = puVar13;
      _memmove(puVar13,param_2,lVar4);
      puVar7 = param_2;
    }
    lVar4 = (long)puVar13 + lVar4;
  }
  else {
    puVar14 = (undefined8 *)puVar5[1];
    if ((undefined8 *)((long)puVar14 - (long)puVar13 >> 4) < param_4) {
      puVar8 = (undefined8 *)((long)param_2 + ((long)puVar14 - (long)puVar13));
      if (puVar14 != puVar13) {
        _memmove(puVar13,param_2);
        puVar14 = (undefined8 *)puVar5[1];
        puVar11 = puVar13;
      }
      lVar4 = (long)param_3 - (long)puVar8;
      puVar7 = param_2;
      if (lVar4 != 0) {
        puVar11 = puVar14;
        _memmove(puVar14,puVar8,lVar4);
        puVar7 = puVar8;
      }
      lVar4 = (long)puVar14 + lVar4;
    }
    else {
      lVar4 = (long)param_3 - (long)param_2;
      puVar7 = param_2;
      if (lVar4 != 0) {
        puVar11 = puVar13;
        _memmove(puVar13,param_2,lVar4);
        puVar7 = param_2;
      }
      lVar4 = (long)puVar13 + lVar4;
    }
  }
  puVar5[1] = lVar4;
  auVar17._8_8_ = puVar7;
  auVar17._0_8_ = puVar11;
  return auVar17;
}



/* Entry: 10a187b64; end: 10a187b77;  */

undefined1  [16]
FUN_10a187b64(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar4 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x60;
    __Znwm(lVar3);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar3;
    return auVar14;
  }
  func_0x000109ffded8();
  uVar9 = puVar4[2];
  puVar12 = (undefined8 *)*puVar4;
  puVar10 = puVar4;
  if ((undefined8 *)((long)(uVar9 - (long)puVar12) >> 4) < param_4) {
    puVar13 = puVar4;
    puVar6 = param_2;
    puVar7 = param_3;
    puVar8 = param_4;
    if (puVar12 != (undefined8 *)0x0) {
      puVar4[1] = puVar12;
      __ZdlPv();
      uVar9 = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar13 = puVar12;
    }
    if ((ulong)param_4 >> 0x3c != 0) {
      func_0x00010a044abc();
      if ((ulong)puVar6 >> 0x3c == 0) {
        puVar4 = puVar13;
        FUN_10a044ad0();
        *puVar13 = puVar4;
        puVar13[1] = puVar4;
        puVar13[2] = puVar4 + (long)puVar6 * 2;
        auVar16._8_8_ = puVar6;
        auVar16._0_8_ = puVar4;
        return auVar16;
      }
      func_0x00010a044abc();
      uVar9 = puVar13[2];
      puVar4 = (undefined8 *)*puVar13;
      if ((undefined8 *)((long)(uVar9 - (long)puVar4) >> 3) < puVar8) {
        puVar10 = puVar6;
        puVar12 = puVar7;
        if (puVar4 != (undefined8 *)0x0) {
          puVar13[1] = puVar4;
          __ZdlPv();
          uVar9 = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
        }
        if ((ulong)puVar8 >> 0x3d != 0) {
          FUN_10a187e74();
          if ((ulong)puVar10 >> 0x3d == 0) {
            puVar12 = puVar4;
            FUN_10a187e88();
            *puVar4 = puVar12;
            puVar4[1] = puVar12;
            puVar4[2] = puVar12 + (long)puVar10;
            auVar18._8_8_ = puVar10;
            auVar18._0_8_ = puVar12;
            return auVar18;
          }
          FUN_10a187e74();
          puVar4 = (undefined8 *)&UNK_10f6403f7;
          FUN_109ffde64();
          if ((ulong)puVar10 >> 0x3d == 0) {
            lVar3 = (long)puVar10 << 3;
            __Znwm(lVar3);
            auVar19._8_8_ = puVar10;
            auVar19._0_8_ = lVar3;
            return auVar19;
          }
          func_0x000109ffded8();
          puVar13 = puVar10;
          if (puVar4 != puVar10) {
            uVar9 = puVar12[1];
            puVar6 = (undefined8 *)*puVar12;
            if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
              uVar9 = (ulong)*(byte *)((long)puVar12 + 0x17);
              puVar6 = puVar12;
            }
            do {
              bVar2 = *(byte *)((long)puVar4 + 0x17);
              uVar1 = puVar4[1];
              if (-1 < (char)bVar2) {
                uVar1 = (ulong)bVar2;
              }
              if (uVar1 == uVar9) {
                puVar12 = (undefined8 *)*puVar4;
                if (-1 < (char)bVar2) {
                  puVar12 = puVar4;
                }
                puVar13 = puVar6;
                _memcmp(puVar12,puVar6,uVar9);
                if ((int)puVar12 == 0) break;
              }
              puVar4 = puVar4 + 3;
            } while (puVar4 != puVar10);
          }
          auVar20._8_8_ = puVar13;
          auVar20._0_8_ = puVar4;
          return auVar20;
        }
        puVar10 = (undefined8 *)((long)uVar9 >> 2);
        if ((undefined8 *)((long)uVar9 >> 2) <= puVar8) {
          puVar10 = puVar8;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          puVar10 = (undefined8 *)0x1fffffffffffffff;
        }
        puVar4 = puVar13;
        FUN_10a187e3c(puVar13,puVar10);
        puVar12 = (undefined8 *)puVar13[1];
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          *puVar12 = *puVar6;
          puVar12 = puVar12 + 1;
        }
        puVar13[1] = puVar12;
        puVar6 = puVar10;
      }
      else {
        puVar10 = (undefined8 *)puVar13[1];
        lVar3 = (long)puVar10 - (long)puVar4;
        puVar12 = puVar6;
        if ((undefined8 *)(lVar3 >> 3) < puVar8) {
          puVar12 = (undefined8 *)((long)puVar6 + lVar3);
          puVar5 = puVar4;
          puVar11 = puVar6;
          puVar8 = puVar10;
          if (puVar10 != puVar4) {
            do {
              puVar4 = puVar5 + 1;
              *puVar5 = *puVar11;
              lVar3 = lVar3 + -8;
              puVar5 = puVar4;
              puVar11 = puVar11 + 1;
            } while (lVar3 != 0);
          }
          for (; puVar12 != puVar7; puVar12 = puVar12 + 1) {
            *puVar10 = *puVar12;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar13[1] = puVar8;
        }
        else {
          for (; puVar12 != puVar7; puVar12 = puVar12 + 1) {
            *puVar4 = *puVar12;
            puVar4 = puVar4 + 1;
          }
          puVar13[1] = puVar4;
        }
      }
      auVar17._8_8_ = puVar6;
      auVar17._0_8_ = puVar4;
      return auVar17;
    }
    puVar6 = (undefined8 *)((long)uVar9 >> 3);
    if ((undefined8 *)((long)uVar9 >> 3) <= param_4) {
      puVar6 = param_4;
    }
    if (0x7fffffffffffffef < uVar9) {
      puVar6 = (undefined8 *)0xfffffffffffffff;
    }
    FUN_10a187ce4(puVar4,puVar6);
    puVar12 = (undefined8 *)puVar4[1];
    lVar3 = (long)param_3 - (long)param_2;
    if (lVar3 != 0) {
      puVar10 = puVar12;
      _memmove(puVar12,param_2,lVar3);
      puVar6 = param_2;
    }
    lVar3 = (long)puVar12 + lVar3;
  }
  else {
    puVar13 = (undefined8 *)puVar4[1];
    if ((undefined8 *)((long)puVar13 - (long)puVar12 >> 4) < param_4) {
      puVar7 = (undefined8 *)((long)param_2 + ((long)puVar13 - (long)puVar12));
      if (puVar13 != puVar12) {
        _memmove(puVar12,param_2);
        puVar13 = (undefined8 *)puVar4[1];
        puVar10 = puVar12;
      }
      lVar3 = (long)param_3 - (long)puVar7;
      puVar6 = param_2;
      if (lVar3 != 0) {
        puVar10 = puVar13;
        _memmove(puVar13,puVar7,lVar3);
        puVar6 = puVar7;
      }
      lVar3 = (long)puVar13 + lVar3;
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      puVar6 = param_2;
      if (lVar3 != 0) {
        puVar10 = puVar12;
        _memmove(puVar12,param_2,lVar3);
        puVar6 = param_2;
      }
      lVar3 = (long)puVar12 + lVar3;
    }
  }
  puVar4[1] = lVar3;
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = puVar10;
  return auVar15;
}



/* Entry: 10a187b78; end: 10a187bbb;  */

undefined1  [16]
FUN_10a187b78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x60;
    __Znwm(lVar3);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar3;
    return auVar14;
  }
  func_0x000109ffded8();
  uVar10 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if ((undefined8 *)((long)(uVar10 - (long)puVar12) >> 4) < param_4) {
    puVar13 = param_1;
    puVar7 = param_2;
    puVar6 = param_3;
    puVar9 = param_4;
    if (puVar12 != (undefined8 *)0x0) {
      param_1[1] = puVar12;
      __ZdlPv();
      uVar10 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar13 = puVar12;
    }
    if ((ulong)param_4 >> 0x3c != 0) {
      func_0x00010a044abc();
      if ((ulong)puVar7 >> 0x3c == 0) {
        puVar4 = puVar13;
        FUN_10a044ad0();
        *puVar13 = puVar4;
        puVar13[1] = puVar4;
        puVar13[2] = puVar4 + (long)puVar7 * 2;
        auVar16._8_8_ = puVar7;
        auVar16._0_8_ = puVar4;
        return auVar16;
      }
      func_0x00010a044abc();
      uVar10 = puVar13[2];
      puVar4 = (undefined8 *)*puVar13;
      if ((undefined8 *)((long)(uVar10 - (long)puVar4) >> 3) < puVar9) {
        puVar12 = puVar7;
        puVar8 = puVar6;
        if (puVar4 != (undefined8 *)0x0) {
          puVar13[1] = puVar4;
          __ZdlPv();
          uVar10 = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
        }
        if ((ulong)puVar9 >> 0x3d != 0) {
          FUN_10a187e74();
          if ((ulong)puVar12 >> 0x3d == 0) {
            puVar13 = puVar4;
            FUN_10a187e88();
            *puVar4 = puVar13;
            puVar4[1] = puVar13;
            puVar4[2] = puVar13 + (long)puVar12;
            auVar18._8_8_ = puVar12;
            auVar18._0_8_ = puVar13;
            return auVar18;
          }
          FUN_10a187e74();
          puVar4 = (undefined8 *)&UNK_10f6403f7;
          FUN_109ffde64();
          if ((ulong)puVar12 >> 0x3d == 0) {
            lVar3 = (long)puVar12 << 3;
            __Znwm(lVar3);
            auVar19._8_8_ = puVar12;
            auVar19._0_8_ = lVar3;
            return auVar19;
          }
          func_0x000109ffded8();
          puVar13 = puVar12;
          if (puVar4 != puVar12) {
            uVar10 = puVar8[1];
            puVar7 = (undefined8 *)*puVar8;
            if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
              uVar10 = (ulong)*(byte *)((long)puVar8 + 0x17);
              puVar7 = puVar8;
            }
            do {
              bVar2 = *(byte *)((long)puVar4 + 0x17);
              uVar1 = puVar4[1];
              if (-1 < (char)bVar2) {
                uVar1 = (ulong)bVar2;
              }
              if (uVar1 == uVar10) {
                puVar6 = (undefined8 *)*puVar4;
                if (-1 < (char)bVar2) {
                  puVar6 = puVar4;
                }
                puVar13 = puVar7;
                _memcmp(puVar6,puVar7,uVar10);
                if ((int)puVar6 == 0) break;
              }
              puVar4 = puVar4 + 3;
            } while (puVar4 != puVar12);
          }
          auVar20._8_8_ = puVar13;
          auVar20._0_8_ = puVar4;
          return auVar20;
        }
        puVar12 = (undefined8 *)((long)uVar10 >> 2);
        if ((undefined8 *)((long)uVar10 >> 2) <= puVar9) {
          puVar12 = puVar9;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          puVar12 = (undefined8 *)0x1fffffffffffffff;
        }
        puVar4 = puVar13;
        FUN_10a187e3c(puVar13,puVar12);
        puVar9 = (undefined8 *)puVar13[1];
        for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
          *puVar9 = *puVar7;
          puVar9 = puVar9 + 1;
        }
        puVar13[1] = puVar9;
        puVar7 = puVar12;
      }
      else {
        puVar12 = (undefined8 *)puVar13[1];
        lVar3 = (long)puVar12 - (long)puVar4;
        puVar8 = puVar7;
        if ((undefined8 *)(lVar3 >> 3) < puVar9) {
          puVar9 = (undefined8 *)((long)puVar7 + lVar3);
          puVar5 = puVar4;
          puVar11 = puVar7;
          puVar8 = puVar12;
          if (puVar12 != puVar4) {
            do {
              puVar4 = puVar5 + 1;
              *puVar5 = *puVar11;
              lVar3 = lVar3 + -8;
              puVar5 = puVar4;
              puVar11 = puVar11 + 1;
            } while (lVar3 != 0);
          }
          for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
            *puVar12 = *puVar9;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar13[1] = puVar8;
        }
        else {
          for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
            *puVar4 = *puVar8;
            puVar4 = puVar4 + 1;
          }
          puVar13[1] = puVar4;
        }
      }
      auVar17._8_8_ = puVar7;
      auVar17._0_8_ = puVar4;
      return auVar17;
    }
    puVar7 = (undefined8 *)((long)uVar10 >> 3);
    if ((undefined8 *)((long)uVar10 >> 3) <= param_4) {
      puVar7 = param_4;
    }
    if (0x7fffffffffffffef < uVar10) {
      puVar7 = (undefined8 *)0xfffffffffffffff;
    }
    FUN_10a187ce4(param_1,puVar7);
    puVar12 = (undefined8 *)param_1[1];
    lVar3 = (long)param_3 - (long)param_2;
    if (lVar3 != 0) {
      puVar4 = puVar12;
      _memmove(puVar12,param_2,lVar3);
      puVar7 = param_2;
    }
    lVar3 = (long)puVar12 + lVar3;
  }
  else {
    puVar13 = (undefined8 *)param_1[1];
    if ((undefined8 *)((long)puVar13 - (long)puVar12 >> 4) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + ((long)puVar13 - (long)puVar12));
      if (puVar13 != puVar12) {
        _memmove(puVar12,param_2);
        puVar13 = (undefined8 *)param_1[1];
        puVar4 = puVar12;
      }
      lVar3 = (long)param_3 - (long)puVar6;
      puVar7 = param_2;
      if (lVar3 != 0) {
        puVar4 = puVar13;
        _memmove(puVar13,puVar6,lVar3);
        puVar7 = puVar6;
      }
      lVar3 = (long)puVar13 + lVar3;
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      puVar7 = param_2;
      if (lVar3 != 0) {
        puVar4 = puVar12;
        _memmove(puVar12,param_2,lVar3);
        puVar7 = param_2;
      }
      lVar3 = (long)puVar12 + lVar3;
    }
  }
  param_1[1] = lVar3;
  auVar15._8_8_ = puVar7;
  auVar15._0_8_ = puVar4;
  return auVar15;
}



/* Entry: 10a187bbc; end: 10a187ce3;  */

undefined1  [16]
FUN_10a187bbc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar10 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  puVar3 = param_1;
  if ((undefined8 *)((long)(uVar10 - (long)puVar12) >> 4) < param_4) {
    puVar13 = param_1;
    puVar7 = param_2;
    puVar6 = param_3;
    puVar9 = param_4;
    if (puVar12 != (undefined8 *)0x0) {
      param_1[1] = puVar12;
      __ZdlPv();
      uVar10 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar13 = puVar12;
    }
    if ((ulong)param_4 >> 0x3c != 0) {
      func_0x00010a044abc();
      if ((ulong)puVar7 >> 0x3c == 0) {
        puVar3 = puVar13;
        FUN_10a044ad0();
        *puVar13 = puVar3;
        puVar13[1] = puVar3;
        puVar13[2] = puVar3 + (long)puVar7 * 2;
        auVar15._8_8_ = puVar7;
        auVar15._0_8_ = puVar3;
        return auVar15;
      }
      func_0x00010a044abc();
      uVar10 = puVar13[2];
      puVar3 = (undefined8 *)*puVar13;
      if ((undefined8 *)((long)(uVar10 - (long)puVar3) >> 3) < puVar9) {
        puVar12 = puVar7;
        puVar8 = puVar6;
        if (puVar3 != (undefined8 *)0x0) {
          puVar13[1] = puVar3;
          __ZdlPv();
          uVar10 = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
        }
        if ((ulong)puVar9 >> 0x3d != 0) {
          FUN_10a187e74();
          if ((ulong)puVar12 >> 0x3d == 0) {
            puVar13 = puVar3;
            FUN_10a187e88();
            *puVar3 = puVar13;
            puVar3[1] = puVar13;
            puVar3[2] = puVar13 + (long)puVar12;
            auVar17._8_8_ = puVar12;
            auVar17._0_8_ = puVar13;
            return auVar17;
          }
          FUN_10a187e74();
          puVar3 = (undefined8 *)&UNK_10f6403f7;
          FUN_109ffde64();
          if ((ulong)puVar12 >> 0x3d == 0) {
            lVar5 = (long)puVar12 << 3;
            __Znwm(lVar5);
            auVar18._8_8_ = puVar12;
            auVar18._0_8_ = lVar5;
            return auVar18;
          }
          func_0x000109ffded8();
          puVar13 = puVar12;
          if (puVar3 != puVar12) {
            uVar10 = puVar8[1];
            puVar7 = (undefined8 *)*puVar8;
            if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
              uVar10 = (ulong)*(byte *)((long)puVar8 + 0x17);
              puVar7 = puVar8;
            }
            do {
              bVar2 = *(byte *)((long)puVar3 + 0x17);
              uVar1 = puVar3[1];
              if (-1 < (char)bVar2) {
                uVar1 = (ulong)bVar2;
              }
              if (uVar1 == uVar10) {
                puVar6 = (undefined8 *)*puVar3;
                if (-1 < (char)bVar2) {
                  puVar6 = puVar3;
                }
                puVar13 = puVar7;
                _memcmp(puVar6,puVar7,uVar10);
                if ((int)puVar6 == 0) break;
              }
              puVar3 = puVar3 + 3;
            } while (puVar3 != puVar12);
          }
          auVar19._8_8_ = puVar13;
          auVar19._0_8_ = puVar3;
          return auVar19;
        }
        puVar12 = (undefined8 *)((long)uVar10 >> 2);
        if ((undefined8 *)((long)uVar10 >> 2) <= puVar9) {
          puVar12 = puVar9;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          puVar12 = (undefined8 *)0x1fffffffffffffff;
        }
        puVar3 = puVar13;
        FUN_10a187e3c(puVar13,puVar12);
        puVar9 = (undefined8 *)puVar13[1];
        for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
          *puVar9 = *puVar7;
          puVar9 = puVar9 + 1;
        }
        puVar13[1] = puVar9;
        puVar7 = puVar12;
      }
      else {
        puVar12 = (undefined8 *)puVar13[1];
        lVar5 = (long)puVar12 - (long)puVar3;
        puVar8 = puVar7;
        if ((undefined8 *)(lVar5 >> 3) < puVar9) {
          puVar9 = (undefined8 *)((long)puVar7 + lVar5);
          puVar4 = puVar3;
          puVar11 = puVar7;
          puVar8 = puVar12;
          if (puVar12 != puVar3) {
            do {
              puVar3 = puVar4 + 1;
              *puVar4 = *puVar11;
              lVar5 = lVar5 + -8;
              puVar4 = puVar3;
              puVar11 = puVar11 + 1;
            } while (lVar5 != 0);
          }
          for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
            *puVar12 = *puVar9;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar13[1] = puVar8;
        }
        else {
          for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
            *puVar3 = *puVar8;
            puVar3 = puVar3 + 1;
          }
          puVar13[1] = puVar3;
        }
      }
      auVar16._8_8_ = puVar7;
      auVar16._0_8_ = puVar3;
      return auVar16;
    }
    puVar7 = (undefined8 *)((long)uVar10 >> 3);
    if ((undefined8 *)((long)uVar10 >> 3) <= param_4) {
      puVar7 = param_4;
    }
    if (0x7fffffffffffffef < uVar10) {
      puVar7 = (undefined8 *)0xfffffffffffffff;
    }
    FUN_10a187ce4(param_1,puVar7);
    puVar12 = (undefined8 *)param_1[1];
    lVar5 = (long)param_3 - (long)param_2;
    if (lVar5 != 0) {
      puVar3 = puVar12;
      _memmove(puVar12,param_2,lVar5);
      puVar7 = param_2;
    }
    lVar5 = (long)puVar12 + lVar5;
  }
  else {
    puVar13 = (undefined8 *)param_1[1];
    if ((undefined8 *)((long)puVar13 - (long)puVar12 >> 4) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + ((long)puVar13 - (long)puVar12));
      if (puVar13 != puVar12) {
        _memmove(puVar12,param_2);
        puVar13 = (undefined8 *)param_1[1];
        puVar3 = puVar12;
      }
      lVar5 = (long)param_3 - (long)puVar6;
      puVar7 = param_2;
      if (lVar5 != 0) {
        puVar3 = puVar13;
        _memmove(puVar13,puVar6,lVar5);
        puVar7 = puVar6;
      }
      lVar5 = (long)puVar13 + lVar5;
    }
    else {
      lVar5 = (long)param_3 - (long)param_2;
      puVar7 = param_2;
      if (lVar5 != 0) {
        puVar3 = puVar12;
        _memmove(puVar12,param_2,lVar5);
        puVar7 = param_2;
      }
      lVar5 = (long)puVar12 + lVar5;
    }
  }
  param_1[1] = lVar5;
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = puVar3;
  return auVar14;
}



/* Entry: 10a187ce4; end: 10a187d1b;  */

undefined1  [16]
FUN_10a187ce4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar3 = param_1;
    FUN_10a044ad0();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + (long)param_2 * 2;
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = puVar3;
    return auVar11;
  }
  func_0x00010a044abc();
  uVar8 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  if ((undefined8 *)((long)(uVar8 - (long)puVar3) >> 3) < param_4) {
    puVar9 = param_2;
    puVar6 = param_3;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = puVar3;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((ulong)param_4 >> 0x3d != 0) {
      FUN_10a187e74();
      if ((ulong)puVar9 >> 0x3d == 0) {
        puVar6 = puVar3;
        FUN_10a187e88();
        *puVar3 = puVar6;
        puVar3[1] = puVar6;
        puVar3[2] = puVar6 + (long)puVar9;
        auVar13._8_8_ = puVar9;
        auVar13._0_8_ = puVar6;
        return auVar13;
      }
      FUN_10a187e74();
      puVar3 = (undefined8 *)&UNK_10f6403f7;
      FUN_109ffde64();
      if ((ulong)puVar9 >> 0x3d == 0) {
        lVar5 = (long)puVar9 << 3;
        __Znwm(lVar5);
        auVar14._8_8_ = puVar9;
        auVar14._0_8_ = lVar5;
        return auVar14;
      }
      func_0x000109ffded8();
      puVar7 = puVar9;
      if (puVar3 != puVar9) {
        uVar8 = puVar6[1];
        puVar4 = (undefined8 *)*puVar6;
        if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
          uVar8 = (ulong)*(byte *)((long)puVar6 + 0x17);
          puVar4 = puVar6;
        }
        do {
          bVar2 = *(byte *)((long)puVar3 + 0x17);
          uVar1 = puVar3[1];
          if (-1 < (char)bVar2) {
            uVar1 = (ulong)bVar2;
          }
          if (uVar1 == uVar8) {
            puVar6 = (undefined8 *)*puVar3;
            if (-1 < (char)bVar2) {
              puVar6 = puVar3;
            }
            puVar7 = puVar4;
            _memcmp(puVar6,puVar4,uVar8);
            if ((int)puVar6 == 0) break;
          }
          puVar3 = puVar3 + 3;
        } while (puVar3 != puVar9);
      }
      auVar15._8_8_ = puVar7;
      auVar15._0_8_ = puVar3;
      return auVar15;
    }
    puVar9 = (undefined8 *)((long)uVar8 >> 2);
    if ((undefined8 *)((long)uVar8 >> 2) <= param_4) {
      puVar9 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      puVar9 = (undefined8 *)0x1fffffffffffffff;
    }
    puVar3 = param_1;
    FUN_10a187e3c(param_1,puVar9);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    }
    param_1[1] = puVar6;
    param_2 = puVar9;
  }
  else {
    puVar9 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar9 - (long)puVar3;
    puVar6 = param_2;
    if ((undefined8 *)(lVar5 >> 3) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + lVar5);
      puVar4 = puVar3;
      puVar10 = param_2;
      puVar7 = puVar9;
      if (puVar9 != puVar3) {
        do {
          puVar3 = puVar4 + 1;
          *puVar4 = *puVar10;
          lVar5 = lVar5 + -8;
          puVar4 = puVar3;
          puVar10 = puVar10 + 1;
        } while (lVar5 != 0);
      }
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      }
      param_1[1] = puVar7;
    }
    else {
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = puVar3;
    }
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = puVar3;
  return auVar12;
}



/* Entry: 10a187d1c; end: 10a187e3b;  */

undefined1  [16]
FUN_10a187d1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar8 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  if ((undefined8 *)((long)(uVar8 - (long)puVar3) >> 3) < param_4) {
    puVar9 = param_2;
    puVar6 = param_3;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = puVar3;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((ulong)param_4 >> 0x3d != 0) {
      FUN_10a187e74();
      if ((ulong)puVar9 >> 0x3d == 0) {
        puVar6 = puVar3;
        FUN_10a187e88();
        *puVar3 = puVar6;
        puVar3[1] = puVar6;
        puVar3[2] = puVar6 + (long)puVar9;
        auVar12._8_8_ = puVar9;
        auVar12._0_8_ = puVar6;
        return auVar12;
      }
      FUN_10a187e74();
      puVar3 = (undefined8 *)&UNK_10f6403f7;
      FUN_109ffde64();
      if ((ulong)puVar9 >> 0x3d == 0) {
        lVar5 = (long)puVar9 << 3;
        __Znwm(lVar5);
        auVar13._8_8_ = puVar9;
        auVar13._0_8_ = lVar5;
        return auVar13;
      }
      func_0x000109ffded8();
      puVar7 = puVar9;
      if (puVar3 != puVar9) {
        uVar8 = puVar6[1];
        puVar4 = (undefined8 *)*puVar6;
        if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
          uVar8 = (ulong)*(byte *)((long)puVar6 + 0x17);
          puVar4 = puVar6;
        }
        do {
          bVar2 = *(byte *)((long)puVar3 + 0x17);
          uVar1 = puVar3[1];
          if (-1 < (char)bVar2) {
            uVar1 = (ulong)bVar2;
          }
          if (uVar1 == uVar8) {
            puVar6 = (undefined8 *)*puVar3;
            if (-1 < (char)bVar2) {
              puVar6 = puVar3;
            }
            puVar7 = puVar4;
            _memcmp(puVar6,puVar4,uVar8);
            if ((int)puVar6 == 0) break;
          }
          puVar3 = puVar3 + 3;
        } while (puVar3 != puVar9);
      }
      auVar14._8_8_ = puVar7;
      auVar14._0_8_ = puVar3;
      return auVar14;
    }
    puVar9 = (undefined8 *)((long)uVar8 >> 2);
    if ((undefined8 *)((long)uVar8 >> 2) <= param_4) {
      puVar9 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      puVar9 = (undefined8 *)0x1fffffffffffffff;
    }
    puVar3 = param_1;
    FUN_10a187e3c(param_1,puVar9);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    }
    param_1[1] = puVar6;
    param_2 = puVar9;
  }
  else {
    puVar9 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar9 - (long)puVar3;
    puVar6 = param_2;
    if ((undefined8 *)(lVar5 >> 3) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + lVar5);
      puVar4 = puVar3;
      puVar10 = param_2;
      puVar7 = puVar9;
      if (puVar9 != puVar3) {
        do {
          puVar3 = puVar4 + 1;
          *puVar4 = *puVar10;
          lVar5 = lVar5 + -8;
          puVar4 = puVar3;
          puVar10 = puVar10 + 1;
        } while (lVar5 != 0);
      }
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      }
      param_1[1] = puVar7;
    }
    else {
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = puVar3;
    }
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = puVar3;
  return auVar11;
}



/* Entry: 10a187e3c; end: 10a187e73;  */

undefined1  [16] FUN_10a187e3c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar5 = param_1;
    FUN_10a187e88();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + (long)param_2);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = plVar5;
    return auVar10;
  }
  FUN_10a187e74();
  puVar6 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm(lVar7);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar7;
    return auVar11;
  }
  func_0x000109ffded8();
  puVar9 = param_2;
  if (puVar6 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)puVar6 + 0x17);
      uVar2 = puVar6[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar8 = (undefined8 *)*puVar6;
        if (-1 < (char)bVar3) {
          puVar8 = puVar6;
        }
        puVar9 = puVar1;
        _memcmp(puVar8,puVar1,uVar4);
        if ((int)puVar8 == 0) break;
      }
      puVar6 = puVar6 + 3;
    } while (puVar6 != param_2);
  }
  auVar12._8_8_ = puVar9;
  auVar12._0_8_ = puVar6;
  return auVar12;
}



/* Entry: 10a187e74; end: 10a187e87;  */

undefined1  [16] FUN_10a187e74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar5 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar6 = (long)param_2 << 3;
    __Znwm(lVar6);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar6;
    return auVar9;
  }
  func_0x000109ffded8();
  puVar8 = param_2;
  if (puVar5 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)puVar5 + 0x17);
      uVar2 = puVar5[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar7 = (undefined8 *)*puVar5;
        if (-1 < (char)bVar3) {
          puVar7 = puVar5;
        }
        puVar8 = puVar1;
        _memcmp(puVar7,puVar1,uVar4);
        if ((int)puVar7 == 0) break;
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != param_2);
  }
  auVar10._8_8_ = puVar8;
  auVar10._0_8_ = puVar5;
  return auVar10;
}



/* Entry: 10a187e88; end: 10a187ebb;  */

undefined1  [16] FUN_10a187e88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar7 = param_2;
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar6 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar6 = param_1;
        }
        puVar7 = puVar1;
        _memcmp(puVar6,puVar1,uVar4);
        if ((int)puVar6 == 0) break;
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 10a187ebc; end: 10a187f4b;  */

undefined8 * FUN_10a187ebc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* Entry: 10a187f4c; end: 10a187f5f;  */

void FUN_10a187f4c(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (puVar2 < (undefined *)0x864b8a7de6d1d7) {
    __Znwm((long)puVar2 * 0x1e8);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a187fac);
  (*pcVar1)();
}


