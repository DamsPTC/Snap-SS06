/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a208410; end: 10a208573;  */

/* WARNING: Possible PIC construction at 0x00010a2084a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a208f6c) */

void FUN_10a208410(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long *unaff_x19;
  long *unaff_x20;
  int *piVar16;
  ulong unaff_x21;
  ulong uVar17;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = *param_1;
  uVar17 = (param_1[1] - lVar3 >> 3) * -0x70a3d70a3d70a3d7;
  if (0 < (int)uVar17) {
    uVar9 = 0;
    lVar15 = 0xc0;
    do {
      if (uVar17 - uVar9 == 0) goto LAB_10a208570;
      if (*(char *)(lVar3 + lVar15) != '\x01') {
        if ((int)uVar9 == 0) goto LAB_10a2084ac;
        goto LAB_10a208484;
      }
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 200;
    } while ((uVar17 & 0x7fffffff) != uVar9);
    uVar9 = uVar17;
    if ((int)uVar17 != 0) {
LAB_10a208484:
      FUN_10a208e24(param_1,lVar3,lVar3 + (uVar9 & 0xffffffff) * 200);
      uVar7 = 0;
      unaff_x30 = 0x10a2084ac;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      uVar17 = uVar9;
      unaff_x19 = param_2;
      unaff_x20 = param_1;
      unaff_x21 = uVar9;
      unaff_x22 = 0x8f5c28f5c28f5c29;
      unaff_x29 = puVar1;
      param_2 = param_1;
      goto SUB_10a208ea8;
    }
  }
LAB_10a2084ac:
  lVar3 = *param_2;
  uVar11 = (param_2[1] - lVar3 >> 3) * -0x70a3d70a3d70a3d7;
  uVar10 = (uint)uVar11;
  uVar2 = uVar10 & (int)uVar10 >> 0x1f;
  uVar9 = uVar11;
  uVar17 = uVar11;
  do {
    uVar17 = uVar17 - 1;
    uVar13 = (uint)uVar9;
    uVar9 = (ulong)(uVar13 - 1);
    uVar7 = uVar2;
    uVar14 = uVar2 - 1;
    if ((int)uVar13 < 1) break;
    if (uVar11 < (uVar17 & 0xffffffff) || uVar11 - (uVar17 & 0xffffffff) == 0) {
LAB_10a208570:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a208574);
      (*pcVar6)();
    }
    uVar7 = uVar13;
    uVar14 = uVar13 - 1;
  } while ((*(byte *)(lVar3 + (uVar17 & 0xffffffff) * 200 + 0xc0) & 1) != 0);
  if (uVar7 == uVar10) {
    return;
  }
  FUN_10a208e24(param_2,lVar3 + (long)(int)uVar14 * 200 + 200);
  uVar9 = (ulong)(uint)((int)((ulong)(param_2[1] - *param_2) >> 3) * -0x3d70a3d7);
  uVar17 = 0;
SUB_10a208ea8:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  piVar16 = (int *)param_2[3];
  piVar4 = (int *)param_2[4];
  piVar12 = piVar16;
  if (piVar16 == piVar4) {
LAB_10a208f50:
    if (piVar4 < piVar16) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a208f94);
      (*pcVar6)();
    }
    if (piVar16 != piVar4) {
      param_2[4] = (long)piVar16;
    }
  }
  else {
    do {
      iVar5 = *piVar12;
      if (iVar5 < (int)uVar7 || (int)uVar9 <= iVar5) {
        if ((int)uVar7 <= iVar5) goto LAB_10a208ef4;
      }
      else {
        iVar5 = -1;
LAB_10a208ef4:
        iVar8 = (int)uVar17;
        if (iVar5 < (int)uVar7) {
          iVar8 = 0;
        }
        *piVar12 = iVar5 - iVar8;
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar4);
    do {
      if (*piVar16 < 0) {
        piVar12 = piVar16;
        if (piVar16 != piVar4) {
          while (piVar12 = piVar12 + 1, piVar12 != piVar4) {
            if (-1 < *piVar12) {
              *piVar16 = *piVar12;
              piVar16 = piVar16 + 1;
            }
          }
        }
        goto LAB_10a208f50;
      }
      piVar16 = piVar16 + 1;
    } while (piVar16 != piVar4);
  }
  return;
}



/* Entry: 10a208574; end: 10a2086b3;  */

long * FUN_10a208574(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a2086b4; end: 10a208793;  */

undefined8 * FUN_10a2086b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a208794; end: 10a2088c7;  */

long * FUN_10a208794(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x70a3d70a3d70a3d7 + 1;
  if (uVar4 < 0x147ae147ae147af) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x1eb851eb851eb852;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar3 * -0x70a3d70a3d70a3d7)) {
      uVar5 = 0x147ae147ae147ae;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a208964();
    }
    lVar6 = (long)plVar2 + lVar6;
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar6;
    plStack_40 = plVar2 + uVar5 * 0x19;
    FUN_10a2088c8(lVar6,param_2);
    plVar1 = (long *)(lVar6 + 200);
    lVar6 = lVar6 + (*param_1 - param_1[1]);
    plStack_48 = plVar1;
    FUN_10a2089ac(param_1,*param_1,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 0x19);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a208a60(&plStack_58);
    return plVar1;
  }
  FUN_10a208950();
  func_0x00010a208a60(&plStack_58);
  __Unwind_Resume();
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar6;
  lVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = lVar6;
  lVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar6;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  lVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar6;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  lVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar6;
  param_2[10] = 0;
  param_2[0xb] = 0;
  lVar6 = param_2[0xc];
  lVar7 = param_2[0xf];
  lVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar6;
  param_1[0xf] = lVar7;
  param_1[0xe] = lVar3;
  lVar8 = param_2[0x15];
  lVar7 = param_2[0x14];
  lVar3 = param_2[0x17];
  lVar6 = param_2[0x16];
  lVar10 = param_2[0x13];
  lVar9 = param_2[0x12];
  *(char *)(param_1 + 0x18) = (char)param_2[0x18];
  param_1[0x15] = lVar8;
  param_1[0x14] = lVar7;
  param_1[0x17] = lVar3;
  param_1[0x16] = lVar6;
  param_1[0x13] = lVar10;
  param_1[0x12] = lVar9;
  lVar6 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = lVar6;
  return param_1;
}



/* Entry: 10a2088c8; end: 10a20894f;  */

void FUN_10a2088c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar2 = param_2[0x17];
  uVar1 = param_2[0x16];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar1;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  return;
}



/* Entry: 10a208950; end: 10a208963;  */

void FUN_10a208950(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (0x147ae147ae147ae < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a2088c8(param_4,uVar1);
        uVar1 = uVar1 + 200;
        param_4 = param_4 + 200;
      } while (uVar1 != param_3);
      do {
        FUN_10a208a14(param_2);
        param_2 = param_2 + 200;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 200);
  return;
}



/* Entry: 10a208964; end: 10a2089ab;  */

void FUN_10a208964(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x147ae147ae147ae < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a2088c8(param_4,uVar1);
        uVar1 = uVar1 + 200;
        param_4 = param_4 + 200;
      } while (uVar1 != param_3);
      do {
        FUN_10a208a14(param_2);
        param_2 = param_2 + 200;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 200);
  return;
}



/* Entry: 10a2089ac; end: 10a208a13;  */

void FUN_10a2089ac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a2088c8(param_4,lVar1);
      lVar1 = lVar1 + 200;
      param_4 = param_4 + 200;
    } while (lVar1 != param_3);
    do {
      FUN_10a208a14(param_2);
      param_2 = param_2 + 200;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a208a14; end: 10a208bbb;  */

void FUN_10a208a14(long param_1)

{
  FUN_10a1d37cc(param_1 + 0x50);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
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



/* Entry: 10a208bbc; end: 10a208c9f;  */

void FUN_10a208bbc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x38;
        FUN_10a1d37cc(lVar1 + -0x20);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a208ca0; end: 10a208cfb;  */

void FUN_10a208ca0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a208cfc; end: 10a208d67;  */

void FUN_10a208cfc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a208d68(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a208d68; end: 10a208e23;  */

void FUN_10a208d68(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  func_0x00010a208c30(&lStack_28);
  return;
}



/* Entry: 10a208e24; end: 10a209053;  */

ulong FUN_10a208e24(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uStack_31;
  
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a208ea8);
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    func_0x00010a208f94(&uStack_31,param_3,*(undefined8 *)(param_1 + 8),param_2);
    uVar2 = *(ulong *)(param_1 + 8);
    while (uVar2 != param_3) {
      uVar2 = uVar2 - 200;
      FUN_10a208a14(uVar2);
    }
    *(ulong *)(param_1 + 8) = param_3;
  }
  return param_2;
}



/* Entry: 10a209054; end: 10a2090d7;  */

float FUN_10a209054(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0.0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == param_1) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
    do {
      lVar3 = *(long *)(lVar2 + 0x128);
      lVar1 = *(long *)(lVar2 + 0x130);
      if (lVar3 != lVar1) {
        do {
          fVar4 = fVar4 + *(float *)(lVar3 + 8);
          lVar3 = lVar3 + 0xc;
        } while (lVar3 != lVar1);
        fVar5 = *(float *)(lVar1 + -0xc) + *(float *)(lVar1 + -8);
        fVar6 = *(float *)(lVar1 + -4);
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_1);
  }
  return fVar4 - (fVar6 - fVar5);
}



/* Entry: 10a2090d8; end: 10a209d2b;  */

void FUN_10a2090d8(float param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 **param_5,uint param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 **ppuVar11;
  undefined8 ***pppuVar12;
  undefined4 uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_510;
  long *plStack_508;
  undefined8 **ppuStack_500;
  undefined2 uStack_4f8;
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  char cStack_4d8;
  undefined4 uStack_4d0;
  undefined1 auStack_4c8 [8];
  long *plStack_4c0;
  undefined8 **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  float fStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  byte bStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined2 uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  char cStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  
  FUN_10a24da00();
  plVar20 = (long *)(param_3 + 0x30);
  puVar3 = (undefined8 *)*plVar20;
  puVar4 = *(undefined8 **)(param_3 + 0x38);
  if (puVar3 == puVar4) {
    return;
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)*(byte *)(*(long *)(param_3 + 8) + 0x70);
  }
  pfVar15 = *(float **)(param_3 + 0x90);
  fVar21 = 0.0;
  while (pfVar15 != *(float **)(param_3 + 0x98)) {
    pfVar16 = pfVar15 + 2;
    fVar22 = *pfVar15;
    pfVar8 = pfVar15 + 1;
    pfVar15 = pfVar16;
    if (fVar21 <= *pfVar8 - fVar22) {
      fVar21 = *pfVar8 - fVar22;
    }
  }
  if (fVar21 < param_1) {
    return;
  }
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_158 = 0;
  lStack_160 = 0;
  uStack_14f = 0;
  uStack_148 = 0;
  uStack_157 = 0;
  uStack_150 = 0;
  lStack_130 = 0;
  lStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  plStack_118 = (long *)0x0;
  uStack_108 = 0;
  uStack_b8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  fStack_100 = 1.0;
  uStack_cc = 0;
  if (param_6 == 0) {
    uStack_170 = puVar4[-0x19];
    if (&uStack_170 == puVar4 + -0x19) {
      uStack_150 = (undefined1)puVar4[-0x15];
      uStack_14f = (undefined7)((ulong)puVar4[-0x15] >> 8);
      uStack_140 = *(undefined1 *)(puVar4 + -0x13);
      uStack_148 = (undefined1)puVar4[-0x14];
      uStack_147 = (undefined7)((ulong)puVar4[-0x14] >> 8);
    }
    else {
      func_0x00010a14ddc8((ulong)&uStack_170 | 8,puVar4[-0x18],puVar4[-0x17],
                          (long)(puVar4[-0x17] - puVar4[-0x18]) >> 2);
      uStack_150 = (undefined1)puVar4[-0x15];
      uStack_14f = (undefined7)((ulong)puVar4[-0x15] >> 8);
      uStack_140 = *(undefined1 *)(puVar4 + -0x13);
      uStack_148 = (undefined1)puVar4[-0x14];
      uStack_147 = (undefined7)((ulong)puVar4[-0x14] >> 8);
      FUN_10a0ea4a0(&lStack_138,puVar4[-0x12],puVar4[-0x11],
                    (long)(puVar4[-0x11] - puVar4[-0x12]) >> 2);
    }
    FUN_10a2086b4(&uStack_120,puVar4 + -0xf);
    uStack_108 = puVar4[-0xc];
    uStack_110 = puVar4[-0xd];
    uStack_f8 = (undefined4)puVar4[-10];
    uStack_f4 = (undefined4)((ulong)puVar4[-10] >> 0x20);
    fStack_100 = (float)puVar4[-0xb];
    uStack_fc = (undefined4)((ulong)puVar4[-0xb] >> 0x20);
    uStack_e8 = (undefined4)puVar4[-8];
    uStack_e4 = (undefined4)((ulong)puVar4[-8] >> 0x20);
    uStack_f0 = (undefined4)puVar4[-9];
    uStack_ec = (undefined4)((ulong)puVar4[-9] >> 0x20);
    uStack_c8 = puVar4[-4];
    uStack_b8 = puVar4[-2];
    uStack_c0 = puVar4[-3];
    uStack_b0 = *(undefined1 *)(puVar4 + -1);
    uStack_d8 = (undefined4)puVar4[-6];
    uStack_d4 = (undefined4)((ulong)puVar4[-6] >> 0x20);
    uStack_e0 = (undefined4)puVar4[-7];
    uStack_dc = (undefined4)((ulong)puVar4[-7] >> 0x20);
    uStack_d0 = (undefined4)puVar4[-5];
    uStack_cc = (undefined4)((ulong)puVar4[-5] >> 0x20);
  }
  else {
    uStack_170 = *puVar3;
    if (&uStack_170 == puVar3) {
      uStack_140 = *(undefined1 *)(puVar3 + 6);
      uStack_150 = (undefined1)puVar3[4];
      uStack_14f = (undefined7)((ulong)puVar3[4] >> 8);
      uStack_148 = (undefined1)puVar3[5];
      uStack_147 = (undefined7)((ulong)puVar3[5] >> 8);
    }
    else {
      func_0x00010a14ddc8((ulong)&uStack_170 | 8,puVar3[1],puVar3[2],
                          (long)(puVar3[2] - puVar3[1]) >> 2);
      uStack_140 = *(undefined1 *)(puVar3 + 6);
      uStack_150 = (undefined1)puVar3[4];
      uStack_14f = (undefined7)((ulong)puVar3[4] >> 8);
      uStack_148 = (undefined1)puVar3[5];
      uStack_147 = (undefined7)((ulong)puVar3[5] >> 8);
      FUN_10a0ea4a0(&lStack_138,puVar3[7],puVar3[8],(long)(puVar3[8] - puVar3[7]) >> 2);
    }
    FUN_10a2086b4(&uStack_120,puVar3 + 10);
    uStack_108 = puVar3[0xd];
    uStack_110 = puVar3[0xc];
    uStack_f8 = (undefined4)puVar3[0xf];
    uStack_f4 = (undefined4)((ulong)puVar3[0xf] >> 0x20);
    fStack_100 = (float)puVar3[0xe];
    uStack_fc = (undefined4)((ulong)puVar3[0xe] >> 0x20);
    uStack_e8 = (undefined4)puVar3[0x11];
    uStack_e4 = (undefined4)((ulong)puVar3[0x11] >> 0x20);
    uStack_f0 = (undefined4)puVar3[0x10];
    uStack_ec = (undefined4)((ulong)puVar3[0x10] >> 0x20);
    uStack_c8 = puVar3[0x15];
    uStack_b8 = puVar3[0x17];
    uStack_c0 = puVar3[0x16];
    uStack_b0 = *(undefined1 *)(puVar3 + 0x18);
    uStack_d8 = (undefined4)puVar3[0x13];
    uStack_d4 = (undefined4)((ulong)puVar3[0x13] >> 0x20);
    uStack_e0 = (undefined4)puVar3[0x12];
    uStack_dc = (undefined4)((ulong)puVar3[0x12] >> 0x20);
    uStack_d0 = (undefined4)puVar3[0x14];
    uStack_cc = (undefined4)((ulong)puVar3[0x14] >> 0x20);
  }
  FUN_10a20a0cc(&ppuStack_1b8,&uStack_120,uStack_f4);
  fVar21 = fStack_100;
  do {
    plStack_3f0 = (long *)0x0;
    uStack_408 = 0;
    lStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    ppuStack_430 = (undefined8 **)0x0;
    uStack_418 = 0;
    uStack_420 = 0;
    *(undefined8 *)(param_3 + 200) = 0;
    *(undefined2 *)(param_3 + 0xd0) = 0;
    func_0x00010a20a7e0(param_3 + 0xd8,&uStack_420);
    *(undefined4 *)(param_3 + 0xf8) = (undefined4)uStack_400;
    func_0x00010a20a77c(param_3 + 0x100,&uStack_3f8);
    plVar2 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      plVar1 = plStack_3f0 + 1;
      do {
        lVar17 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (((char)uStack_408 == '\x01') && (lStack_410 < 0)) {
      __ZdlPv(uStack_420);
    }
    ppuVar11 = param_5;
    FUN_10a20a2e8(param_5,&ppuStack_1b8,param_4);
    puStack_1c8 = (undefined8 *)0x0;
    puStack_1d0 = (undefined8 *)0x0;
    uStack_1c0 = 0;
    FUN_10a20b6d0(&puStack_1d0,*ppuVar11,ppuVar11[1],
                  ((long)ppuVar11[1] - (long)*ppuVar11 >> 3) * -0x70a3d70a3d70a3d7);
    while( true ) {
      puVar3 = puStack_1d0;
      if (puStack_1d0 == puStack_1c8) goto LAB_10a209b8c;
      fVar22 = param_1 - (float)param_2 * fVar21 * *(float *)(puStack_1d0 + 0x15);
      if (0.0 <= fVar22) break;
      lVar17 = *(long *)(param_3 + 0x30);
      lVar19 = *(long *)(param_3 + 0x38);
      if ((ulong)((lVar19 - lVar17 >> 3) * -0x70a3d70a3d70a3d7) < 2) goto LAB_10a209b70;
      if (param_6 == 0) {
        if (lVar17 == lVar19) goto LAB_10a209c74;
        lVar17 = lVar19 + -200;
        FUN_10a208a14(lVar17);
        *(long *)(param_3 + 0x38) = lVar17;
        if (*(long *)(param_3 + 0x30) == lVar17) goto LAB_10a209c74;
        lVar19 = lVar19 + -400;
      }
      else {
        if (lVar19 == lVar17) goto LAB_10a209c74;
        lVar14 = lVar17 + 200;
        func_0x00010a208f94(&ppuStack_500,lVar14,lVar19,lVar17);
        lVar17 = *(long *)(param_3 + 0x38);
        while (lVar17 != lVar14) {
          lVar17 = lVar17 + -200;
          FUN_10a208a14(lVar17);
        }
        *(long *)(param_3 + 0x38) = lVar14;
        lVar19 = *(long *)(param_3 + 0x30);
        if (lVar19 == lVar14) goto LAB_10a209c74;
      }
      FUN_10a20a0cc(&ppuStack_430,lVar19 + 0x50,*(undefined4 *)(lVar19 + 0x7c));
      ppuStack_1b8 = ppuStack_430;
      uStack_1b0 = (undefined2)uStack_428;
      func_0x00010a20a7e0(auStack_1a8,&uStack_420);
      plVar2 = plStack_178;
      plStack_178 = plStack_3f0;
      uStack_180 = uStack_3f8;
      uStack_188 = (undefined4)uStack_400;
      uStack_3f8 = 0;
      plStack_3f0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      plVar2 = plStack_3f0;
      if (plStack_3f0 != (long *)0x0) {
        plVar1 = plStack_3f0 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if (((char)uStack_408 == '\x01') && (lStack_410 < 0)) {
        __ZdlPv(uStack_420);
      }
      fVar21 = *(float *)(lVar19 + 0x70);
      ppuVar11 = param_5;
      FUN_10a20a2e8(param_5,&ppuStack_1b8,param_4);
      if (&puStack_1d0 != ppuVar11) {
        FUN_10a20b910(&puStack_1d0,*ppuVar11,ppuVar11[1],
                      ((long)ppuVar11[1] - (long)*ppuVar11 >> 3) * -0x70a3d70a3d70a3d7);
      }
    }
    if (puStack_1c8 == puStack_1d0) {
LAB_10a209c74:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a209c78);
      (*pcVar10)();
    }
    uStack_360 = *puStack_1d0;
    lStack_350 = 0;
    uStack_348 = 0;
    lStack_358 = 0;
    FUN_10a0ca588(&lStack_358,puStack_1d0[1],puStack_1d0[2],
                  (long)(puStack_1d0[2] - puStack_1d0[1]) >> 2);
    uStack_340 = puVar3[4];
    uStack_330 = puVar3[6];
    uStack_338 = puVar3[5];
    lStack_320 = 0;
    uStack_318 = 0;
    lStack_328 = 0;
    FUN_10a0e9a40(&lStack_328,puVar3[7],puVar3[8],(long)(puVar3[8] - puVar3[7]) >> 2);
    uStack_250 = uStack_318;
    lStack_258 = lStack_320;
    lStack_260 = lStack_328;
    plStack_240 = (long *)puVar3[0xb];
    uStack_248 = puVar3[10];
    if (puVar3[0xb] != 0) {
      plVar2 = (long *)(puVar3[0xb] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_2f8 = puVar3[0xd];
    uStack_300 = puVar3[0xc];
    uStack_2e8 = puVar3[0xf];
    uStack_2f0 = puVar3[0xe];
    uStack_2d8 = puVar3[0x11];
    uStack_2e0 = puVar3[0x10];
    uStack_2b8 = puVar3[0x15];
    uStack_2c0 = puVar3[0x14];
    uStack_2a8 = puVar3[0x17];
    uStack_2b0 = puVar3[0x16];
    uStack_2a0 = *(undefined1 *)(puVar3 + 0x18);
    uStack_2c8 = puVar3[0x13];
    uStack_2d0 = puVar3[0x12];
    if (1.1920929e-07 <= ABS(fVar21 + -1.0)) {
      uStack_218 = CONCAT44((float)((ulong)uStack_2e0 >> 0x20) * fVar21,(float)uStack_2e0 * fVar21);
      uStack_210 = CONCAT44((float)((ulong)uStack_2d8 >> 0x20) * fVar21,(float)uStack_2d8 * fVar21);
      uStack_208 = CONCAT44((float)((ulong)uStack_2d0 >> 0x20) * fVar21,(float)uStack_2d0 * fVar21);
      uStack_200 = CONCAT44((float)((ulong)uStack_2c8 >> 0x20) * fVar21,(float)uStack_2c8 * fVar21);
      uStack_1f8 = CONCAT44((float)((ulong)uStack_2c0 >> 0x20) * fVar21,(float)uStack_2c0 * fVar21);
      uStack_1f0 = CONCAT44((float)((ulong)uStack_2b8 >> 0x20) * fVar21,(float)uStack_2b8 * fVar21);
      uVar9 = (ulong)uStack_2f0 >> 0x20;
      uStack_2f0 = CONCAT44((int)uVar9,fVar21);
      uStack_1e8 = uStack_2b0;
      uStack_1e0 = uStack_2a8;
      uStack_1d8 = uStack_2a0;
      uStack_2e0 = uStack_218;
      uStack_2d8 = uStack_210;
      uStack_2d0 = uStack_208;
      uStack_2c8 = uStack_200;
      uStack_2c0 = uStack_1f8;
      uStack_2b8 = uStack_1f0;
    }
    else {
      uStack_210 = puVar3[0x11];
      uStack_218 = puVar3[0x10];
      uStack_200 = puVar3[0x13];
      uStack_208 = puVar3[0x12];
      uStack_1f0 = puVar3[0x15];
      uStack_1f8 = puVar3[0x14];
      uStack_1e8 = puVar3[0x16];
      uStack_1e0 = puVar3[0x17];
      uStack_1d8 = *(undefined1 *)(puVar3 + 0x18);
    }
    uStack_268 = uStack_330;
    uStack_270 = uStack_338;
    uStack_280 = uStack_348;
    lStack_288 = lStack_350;
    lStack_290 = lStack_358;
    uStack_298 = uStack_360;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    lStack_320 = 0;
    lStack_328 = 0;
    uStack_348 = 0;
    lStack_350 = 0;
    lStack_358 = 0;
    uStack_278 = uStack_340;
    lVar17 = *(long *)(param_3 + 0x30);
    lVar19 = *(long *)(param_3 + 0x38);
    ppuStack_430 = (undefined8 **)((ulong)ppuStack_430 & 0xffffffffffffff00);
    bStack_368 = 0;
    uStack_238 = uStack_300;
    uStack_230 = uStack_2f8;
    uStack_228 = uStack_2f0;
    uStack_220 = uStack_2e8;
    if (lVar17 == lVar19) {
LAB_10a209988:
      plVar2 = plStack_240;
      if (lVar17 != lVar19) {
        if (param_6 == 0) {
          lVar17 = lVar19 + -200;
        }
        fVar22 = -(float)uStack_1f0;
        if (((param_6 ^ uVar18) & 1) == 0) {
          fVar22 = *(float *)(lVar17 + 0xa8);
        }
        fVar22 = (uStack_1f0._4_4_ +
                 (*(float *)(lVar17 + 0x80) - *(float *)(lVar17 + 0xac)) + fVar22) -
                 (float)uStack_218;
        uStack_218 = CONCAT44((float)((ulong)uStack_218 >> 0x20) + 0.0,(float)uStack_218 + fVar22);
        uStack_210 = CONCAT44((float)((ulong)uStack_210 >> 0x20) + 0.0,(float)uStack_210 + fVar22);
        uStack_208 = CONCAT44((float)((ulong)uStack_208 >> 0x20) + 0.0,(float)uStack_208 + fVar22);
        uStack_200 = CONCAT44((float)((ulong)uStack_200 >> 0x20) + 0.0,(float)uStack_200 + fVar22);
      }
      if ((bStack_368 & 1) == 0) {
        plStack_240 = (long *)0x0;
        uStack_248 = 0;
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 1;
          do {
            lVar17 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      else {
        uVar13 = (undefined4)uStack_228;
        FUN_10a2086b4(&uStack_248,&uStack_3e0);
        uStack_220 = CONCAT44(uStack_3b4,uStack_3b8);
        uStack_230 = uStack_3c8;
        uStack_238 = uStack_3d0;
        uStack_228 = CONCAT44(uStack_3bc,uVar13);
      }
      lVar17 = *(long *)(param_3 + 0x30);
      if (lVar17 != *(long *)(param_3 + 0x38)) {
        lVar19 = lVar17;
        if (param_6 == 0) {
          lVar19 = *(long *)(param_3 + 0x38) + -200;
        }
        uStack_1e0 = *(undefined8 *)(lVar19 + 0xb8);
      }
      if (param_6 == 0) {
        FUN_10a20a72c(plVar20,&uStack_298);
      }
      else {
        FUN_10a20a504(plVar20,lVar17,&uStack_298);
      }
      *(undefined1 *)(param_3 + 0x110) = 1;
      *(undefined8 ***)(param_3 + 200) = ppuStack_1b8;
      *(undefined2 *)(param_3 + 0xd0) = uStack_1b0;
      func_0x00010a1cca60(param_3 + 0xd8,auStack_1a8);
      *(undefined4 *)(param_3 + 0xf8) = uStack_188;
      FUN_10a1c2cac(param_3 + 0x100,&uStack_180);
      FUN_10a253434(param_3);
      bVar7 = true;
    }
    else {
      if (param_6 == 0) {
        FUN_10a24e354(&ppuStack_500,fVar22,param_2,param_3,param_7);
      }
      else {
        FUN_10a24e644(&ppuStack_500,fVar22,param_2,param_3,param_7);
      }
      FUN_10a20bbf8(&ppuStack_430,&ppuStack_500);
      FUN_10a20a078(&ppuStack_500);
      if (bStack_368 == 1) {
        plStack_508 = plStack_3d8;
        uStack_510 = uStack_3e0;
        uVar13 = uStack_3b4;
        fVar22 = fStack_3c0;
        if (plStack_3d8 != (long *)0x0) {
          plVar2 = plStack_3d8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        uStack_510 = 0;
        plStack_508 = (long *)0x0;
        uVar13 = 0;
        fVar22 = 1.0;
      }
      FUN_10a20a0cc(&ppuStack_500,&uStack_510,uVar13);
      plVar2 = plStack_508;
      if (plStack_508 != (long *)0x0) {
        plVar1 = plStack_508 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_508 + 0x10))(plStack_508);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      pppuVar12 = &ppuStack_1b8;
      FUN_10a20a46c(pppuVar12,&ppuStack_500);
      if (((int)pppuVar12 == 0) || (1.1920929e-07 <= ABS(fVar21 - fVar22))) {
        ppuStack_1b8 = ppuStack_500;
        uStack_1b0 = uStack_4f8;
        func_0x00010a1cca60(auStack_1a8,auStack_4f0);
        uStack_188 = uStack_4d0;
        FUN_10a1c2cac(&uStack_180,auStack_4c8);
        bVar6 = false;
        fVar21 = fVar22;
      }
      else {
        bVar6 = true;
      }
      plVar2 = plStack_4c0;
      if (plStack_4c0 != (long *)0x0) {
        plVar1 = plStack_4c0 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((cStack_4d8 == '\x01') && (cStack_4d9 < '\0')) {
        __ZdlPv(auStack_4f0[0]);
      }
      bVar7 = false;
      if (bVar6) {
        lVar17 = *(long *)(param_3 + 0x30);
        lVar19 = *(long *)(param_3 + 0x38);
        goto LAB_10a209988;
      }
    }
    FUN_10a20a078(&ppuStack_430);
    plVar2 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      plVar1 = plStack_240 + 1;
      do {
        lVar17 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (lStack_260 != 0) {
      lStack_258 = lStack_260;
      __ZdlPv();
    }
    if (lStack_290 != 0) {
      lStack_288 = lStack_290;
      __ZdlPv();
    }
    ppuStack_430 = &puStack_1d0;
    func_0x00010a208c30(&ppuStack_430);
  } while (!bVar7);
LAB_10a209b9c:
  plVar20 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar2 = plStack_178 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if ((cStack_190 == '\x01') && (cStack_191 < '\0')) {
    __ZdlPv(auStack_1a8[0]);
  }
  plVar20 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar2 = plStack_118 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  return;
LAB_10a209b70:
  while (lVar19 != lVar17) {
    lVar19 = lVar19 + -200;
    FUN_10a208a14(lVar19);
  }
  *(long *)(param_3 + 0x38) = lVar17;
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_3 + 0x48);
  FUN_10a253434(param_3);
LAB_10a209b8c:
  ppuStack_430 = &puStack_1d0;
  func_0x00010a208c30(&ppuStack_430);
  goto LAB_10a209b9c;
}



/* Entry: 10a209d2c; end: 10a209e4f;  */

void FUN_10a209d2c(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fStack_44;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = lVar5 + 0x10;
      FUN_10a24d004(lVar2);
      lVar3 = lVar2 + lVar3;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_2);
  }
  func_0x0001073b504c(param_1,lVar3);
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = lVar5 + 0x10;
      FUN_10a24d004(lVar2);
      lVar3 = lVar2 + lVar3;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_2);
  }
  func_0x0001073b504c(param_1 + 3,lVar3);
  for (lVar5 = *(long *)(param_2 + 8); lVar5 != param_2; lVar5 = *(long *)(lVar5 + 8)) {
    pfVar1 = *(float **)(lVar5 + 0x130);
    for (pfVar4 = *(float **)(lVar5 + 0x128); pfVar4 != pfVar1; pfVar4 = pfVar4 + 3) {
      fStack_44 = *pfVar4 + pfVar4[1];
      FUN_10a001c34(param_1,&fStack_44);
      FUN_10a0ca014(param_1 + 3,pfVar4 + 2);
    }
  }
  return;
}



/* Entry: 10a209e50; end: 10a209f53;  */

long * FUN_10a209e50(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    plVar1 = *(long **)(*param_3 + 8);
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    do {
      plVar1 = (long *)param_2[1];
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
      func_0x00010a208aac(param_2 + 2);
      __ZdlPv(param_2);
      param_2 = plVar1;
    } while (plVar1 != param_3);
  }
  return param_3;
}



/* Entry: 10a209f54; end: 10a209fcb;  */

void FUN_10a209f54(long *param_1,ulong param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar6 * -0x5555555555555555);
  uVar5 = param_2 + lVar6 * 0x5555555555555555;
  if (bVar2 || uVar5 == 0) {
    if (bVar2) {
      param_1[1] = *param_1 + param_2 * 0x18;
    }
    return;
  }
  lVar6 = param_1[1];
  if (uVar5 <= (ulong)((param_1[2] - lVar6 >> 3) * -0x5555555555555555)) {
    if (uVar5 != 0) {
      lVar7 = ((uVar5 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar6,lVar7);
      lVar6 = lVar6 + lVar7;
    }
    param_1[1] = lVar6;
    return;
  }
  lVar6 = lVar6 - *param_1;
  uVar8 = uVar5 + (lVar6 >> 3) * -0x5555555555555555;
  if (uVar8 < 0xaaaaaaaaaaaaaab) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a20c6b0();
    }
    lVar6 = (long)plVar3 + lVar6;
    lVar10 = ((uVar5 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar6,lVar10);
    lVar11 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar7 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar6 + lVar10;
    param_1[2] = (long)(plVar3 + uVar9 * 3);
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    FUN_10a20c69c();
    plVar3 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (uVar5 < 0xaaaaaaaaaaaaaab) {
      __Znwm(uVar5 * 0x18);
      return;
    }
    func_0x000109ffded8();
    lVar6 = plVar3[1];
    if (uVar5 <= (ulong)((plVar3[2] - lVar6 >> 2) * -0x5555555555555555)) {
      if (uVar5 != 0) {
        lVar7 = ((uVar5 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        _bzero(lVar6,lVar7);
        lVar6 = lVar6 + lVar7;
      }
      plVar3[1] = lVar6;
      return;
    }
    lVar6 = lVar6 - *plVar3;
    uVar8 = uVar5 + (lVar6 >> 2) * -0x5555555555555555;
    if (uVar8 < 0x1555555555555556) {
      lVar7 = plVar3[2] - *plVar3 >> 2;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        uVar9 = uVar8;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0x1555555555555555;
      }
      if (uVar9 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = plVar3;
        FUN_10a20c864();
      }
      puVar1 = (undefined *)((long)plVar4 + lVar6);
      lVar6 = ((uVar5 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(puVar1,lVar6);
      lVar10 = (long)puVar1 - (plVar3[1] - *plVar3);
      _memcpy(lVar10);
      lVar7 = *plVar3;
      *plVar3 = lVar10;
      plVar3[1] = (long)(puVar1 + lVar6);
      plVar3[2] = (long)((long)plVar4 + uVar9 * 0xc);
      if (lVar7 == 0) {
        return;
      }
    }
    else {
      FUN_10a20c850();
      plVar3 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if (uVar5 < 0x1555555555555556) {
        __Znwm(uVar5 * 0xc);
        return;
      }
      func_0x000109ffded8();
      plVar4 = (long *)*plVar3;
      lVar6 = *plVar4;
      if (lVar6 == 0) {
        return;
      }
      lVar7 = lVar6;
      lVar10 = plVar4[1];
      if (plVar4[1] != lVar6) {
        do {
          lVar7 = lVar10 + -0x70;
          FUN_10a1d37cc(lVar10 + -0x20);
          lVar10 = lVar7;
        } while (lVar7 != lVar6);
        lVar7 = *(long *)*plVar3;
      }
      plVar4[1] = lVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar7);
  return;
}



/* Entry: 10a209fcc; end: 10a20a00b;  */

long * FUN_10a209fcc(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a20a00c; end: 10a20a077;  */

void FUN_10a20a00c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      func_0x00010a208aac(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a20a078; end: 10a20a0cb;  */

long FUN_10a20a078(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_10a1d37cc(param_1 + 0x50);
    if (*(long *)(param_1 + 0x38) != 0) {
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 8) != 0) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10a20a0cc; end: 10a20a2e7;  */

void FUN_10a20a0cc(undefined4 *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char cStack_81;
  char cStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  char cStack_68;
  long lStack_60;
  long *plStack_58;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lStack_60 = CONCAT44(lStack_60._4_4_,8);
    FUN_10a1cc830(lVar4,&lStack_60);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x18);
      ___dynamic_cast(lVar5,&PTR_DAT_110baded8,&PTR_DAT_110badf00,0);
      plVar6 = *(long **)(lVar4 + 0x20);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_60 = lVar5;
      plStack_58 = plVar6;
      FUN_10a1ccb30(&uStack_98,lVar5 + 0x10);
      uStack_78 = *(undefined8 *)(lVar5 + 0x30);
      uStack_70 = *(undefined2 *)(lVar5 + 0x38);
      cStack_68 = '\x01';
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (cStack_68 == '\x01') {
        *param_1 = (undefined4)uStack_78;
        *(undefined1 *)(param_1 + 1) = uStack_78._4_1_;
        *(undefined2 *)(param_1 + 2) = uStack_70;
        func_0x00010a1cca60(param_1 + 4,&uStack_98);
        if (((cStack_68 == '\x01') && (cStack_80 == '\x01')) && (cStack_81 < '\0')) {
          __ZdlPv(CONCAT44(uStack_94,uStack_98));
        }
      }
    }
    lVar4 = *param_2;
    uStack_98 = 6;
    FUN_10a1cc830(lVar4,&uStack_98);
    if (lVar4 == 0) {
      lVar4 = *param_2;
      uStack_98 = 7;
      FUN_10a1cc830(lVar4,&uStack_98);
      if (lVar4 == 0) goto LAB_10a20a26c;
    }
    FUN_10a1c2cac(param_1 + 0xe,lVar4 + 0x18);
  }
LAB_10a20a26c:
  param_1[0xc] = param_3;
  return;
}



/* Entry: 10a20a2e8; end: 10a20a46b;  */

uint * FUN_10a20a2e8(long param_1,uint *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [304];
  undefined8 *apuStack_2d8 [38];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [304];
  undefined8 *puStack_48;
  
  lVar6 = param_1;
  puVar10 = param_2;
  FUN_10a20ac90();
  if (lVar6 == 0) {
    plVar7 = *(long **)(param_3 + 0x18);
    puVar8 = (uint *)0x0;
    if (plVar7 == (long *)0x0) goto LAB_10a20a41c;
    (**(code **)(*plVar7 + 0x30))(auStack_178,plVar7,param_2);
    FUN_10a20a87c(&uStack_190,auStack_178);
    func_0x00010a20b480(auStack_408,auStack_178);
    uVar5 = uStack_180;
    uVar4 = uStack_188;
    uVar3 = uStack_190;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010a20b480(apuStack_2d8,auStack_408);
    uStack_1a0 = uVar4;
    uStack_1a8 = uVar3;
    uStack_198 = uVar5;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_420 = 0;
    FUN_10a20ae6c(param_1,param_2,param_2,apuStack_2d8);
    puStack_48 = &uStack_1a8;
    func_0x00010a208c30(&puStack_48);
    FUN_10a1f4af8(apuStack_2d8);
    puStack_48 = &uStack_420;
    func_0x00010a208c30(&puStack_48);
    FUN_10a1f4af8(auStack_408);
    apuStack_2d8[0] = &uStack_190;
    func_0x00010a208c30(apuStack_2d8);
    FUN_10a1f4af8(auStack_178);
  }
  FUN_10a20ac90();
  if (param_1 != 0) {
    return (uint *)(param_1 + 0x188);
  }
  puVar8 = (uint *)&UNK_10f639994;
  FUN_109ffdddc();
  puVar10 = param_2;
LAB_10a20a41c:
  FUN_10a06186c();
  FUN_10a20ac54(apuStack_2d8);
  puStack_48 = &uStack_420;
  func_0x00010a208c30(&puStack_48);
  FUN_10a1f4af8(auStack_408);
  apuStack_2d8[0] = &uStack_190;
  func_0x00010a208c30(apuStack_2d8);
  FUN_10a1f4af8(auStack_178);
  __Unwind_Resume();
  uVar11 = (uint)(byte)puVar8[1];
  uVar12 = (uint)(byte)puVar10[1];
  if ((byte)((byte)puVar10[1] & (byte)puVar8[1]) != 0) {
    uVar11 = *puVar8;
    uVar12 = *puVar10;
  }
  if (uVar11 == uVar12) {
    bVar1 = *(byte *)((long)puVar8 + 9);
    bVar2 = *(byte *)((long)puVar10 + 9);
    if ((bVar2 & bVar1) != 0) {
      bVar1 = (byte)puVar8[2];
      bVar2 = (byte)puVar10[2];
    }
    if (bVar1 == bVar2) {
      puVar9 = puVar8 + 4;
      FUN_10a20bd18(puVar9,puVar10 + 4);
      if ((int)puVar9 == 0) {
        return puVar9;
      }
      if (puVar8[0xc] == puVar10[0xc]) {
        return (uint *)(ulong)(*(long *)(puVar8 + 0xe) == *(long *)(puVar10 + 0xe));
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10a20a46c; end: 10a20a503;  */

void FUN_10a20a46c(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(byte)param_1[1];
  uVar4 = (uint)(byte)param_2[1];
  if ((byte)((byte)param_2[1] & (byte)param_1[1]) != 0) {
    uVar3 = *param_1;
    uVar4 = *param_2;
  }
  if (uVar3 == uVar4) {
    bVar1 = *(byte *)((long)param_1 + 9);
    bVar2 = *(byte *)((long)param_2 + 9);
    if ((bVar2 & bVar1) != 0) {
      bVar1 = (byte)param_1[2];
      bVar2 = (byte)param_2[2];
    }
    if (bVar1 == bVar2) {
      FUN_10a20bd18(param_1 + 4,param_2 + 4);
    }
  }
  return;
}



/* Entry: 10a20a504; end: 10a20a72b;  */

long * FUN_10a20a504(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    if (param_2 == plVar2) {
      FUN_10a20c05c(plVar2,param_3);
      param_1[1] = (long)(plVar2 + 0x19);
      param_1 = param_2;
    }
    else {
      FUN_10a20bda0(param_1,param_2,plVar2,param_2 + 0x19);
      if ((long *)param_1[1] < param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a20a708);
        (*pcVar1)();
      }
      lVar4 = 200;
      if ((long *)param_1[1] <= param_3 || param_3 < param_2) {
        lVar4 = 0;
      }
      param_3 = (long *)((long)param_3 + lVar4);
      *param_2 = *param_3;
      if (param_2 == param_3) {
        param_2[4] = param_3[4];
        lVar4 = param_3[5];
        *(char *)(param_2 + 6) = (char)param_3[6];
        param_2[5] = lVar4;
      }
      else {
        func_0x00010a14ddc8(param_2 + 1,param_3[1],param_3[2],param_3[2] - param_3[1] >> 2);
        param_2[4] = param_3[4];
        lVar4 = param_3[5];
        *(char *)(param_2 + 6) = (char)param_3[6];
        param_2[5] = lVar4;
        FUN_10a0ea4a0(param_2 + 7,param_3[7],param_3[8],param_3[8] - param_3[7] >> 2);
      }
      FUN_10a2086b4(param_2 + 10,param_3 + 10);
      lVar4 = param_3[0xc];
      lVar8 = param_3[0xf];
      lVar5 = param_3[0xe];
      param_2[0xd] = param_3[0xd];
      param_2[0xc] = lVar4;
      param_2[0xf] = lVar8;
      param_2[0xe] = lVar5;
      lVar4 = param_3[0x10];
      param_2[0x11] = param_3[0x11];
      param_2[0x10] = lVar4;
      lVar9 = param_3[0x15];
      lVar8 = param_3[0x14];
      lVar5 = param_3[0x17];
      lVar4 = param_3[0x16];
      lVar11 = param_3[0x13];
      lVar10 = param_3[0x12];
      *(char *)(param_2 + 0x18) = (char)param_3[0x18];
      param_2[0x15] = lVar9;
      param_2[0x14] = lVar8;
      param_2[0x17] = lVar5;
      param_2[0x16] = lVar4;
      param_2[0x13] = lVar11;
      param_2[0x12] = lVar10;
      param_1 = param_2;
    }
  }
  else {
    lVar4 = *param_1;
    uVar7 = ((long)plVar2 - lVar4 >> 3) * -0x70a3d70a3d70a3d7 + 1;
    if (0x147ae147ae147ae < uVar7) {
      plVar3 = param_1;
      FUN_10a208950();
      param_1[1] = (long)plVar2;
      __Unwind_Resume();
      uVar7 = plVar3[1];
      if (uVar7 < (ulong)plVar3[2]) {
        FUN_10a20c05c(uVar7);
        plVar2 = (long *)(uVar7 + 200);
        plVar3[1] = (long)plVar2;
      }
      else {
        plVar2 = plVar3;
        FUN_10a20c228();
      }
      plVar3[1] = (long)plVar2;
      return plVar2;
    }
    lVar5 = param_1[2] - lVar4 >> 3;
    uVar6 = lVar5 * 0x1eb851eb851eb852;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar5 * -0x70a3d70a3d70a3d7)) {
      uVar6 = 0x147ae147ae147ae;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a208964();
    }
    lStack_50 = (long)plVar2 + ((long)param_2 - lVar4);
    plStack_40 = plVar2 + uVar6 * 0x19;
    plStack_58 = plVar2;
    lStack_48 = lStack_50;
    FUN_10a20be38(&plStack_58,param_3);
    FUN_10a20bfa4(param_1,&plStack_58,param_2);
    func_0x00010a208a60(&plStack_58);
  }
  return param_1;
}



/* Entry: 10a20a72c; end: 10a20a77b;  */

void FUN_10a20a72c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a20c05c(uVar1);
    lVar2 = uVar1 + 200;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10a20c228();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a20a77c; end: 10a20a87b;  */

undefined8 * FUN_10a20a77c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a20a87c; end: 10a20ac53;  */

void FUN_10a20a87c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1c0;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined4 uStack_c1;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar12 = *param_2;
  if (param_2[1] != lVar12) {
    uVar13 = 0;
    lVar14 = param_2[0x12];
    fVar17 = 0.0;
    do {
      plVar8 = param_2 + 3;
      FUN_10a20cf48(plVar8,lVar12 + uVar13 * 0x28);
      if (plVar8 == (long *)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
LAB_10a20abf4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a20abf8);
        (*pcVar7)();
      }
      lVar12 = param_2[8];
      uVar9 = (param_2[9] - lVar12 >> 2) * -0x5555555555555555;
      if (uVar9 < uVar13 || uVar9 - uVar13 == 0) goto LAB_10a20abf4;
      uStack_bc = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_c1 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      uStack_b8 = 0x3f80000000000000;
      uStack_b0 = *(undefined8 *)(lVar14 + 0x38);
      plStack_148 = (long *)0x0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_130 = 0x3f800000;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      FUN_10a2086b4(&uStack_150,lVar14 + 0x20);
      uStack_138 = *(undefined8 *)(lVar14 + 0x48);
      uStack_140 = *(undefined8 *)(lVar14 + 0x40);
      uStack_12c = (undefined4)*(undefined8 *)(lVar14 + 0x38);
      uStack_128 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x38) >> 0x20);
      uStack_124 = *(undefined4 *)(lVar14 + 0x34);
      uStack_130 = 0x3f800000;
      if ((0 < (int)plVar8[0xe]) && (0 < *(int *)((long)plVar8 + 0x74))) {
        lVar11 = *param_2;
        uVar9 = (param_2[1] - lVar11 >> 3) * -0x3333333333333333;
        if ((uVar9 < uVar13 || uVar9 - uVar13 == 0) ||
           (uVar9 = (param_2[0x19] - param_2[0x18] >> 3) * -0x5555555555555555,
           uVar9 < uVar13 || uVar9 - uVar13 == 0)) goto LAB_10a20abf4;
        uVar18 = *(undefined4 *)((long)plVar8 + 0x7c);
        lVar6 = plVar8[0xd];
        uVar19 = *(undefined4 *)((long)plVar8 + 0x6c);
        plVar10 = (long *)(param_2[0x18] + uVar13 * 0x18);
        lStack_230 = 0;
        lStack_228 = 0;
        uStack_220 = 0;
        lVar2 = *plVar10;
        lVar3 = plVar10[1];
        FUN_10a0e9a40(&lStack_230,lVar2,lVar3,lVar3 - lVar2 >> 2);
        if ((ulong)(param_2[0x1c] - param_2[0x1b] >> 2) <= uVar13) goto LAB_10a20abf4;
        lVar12 = lVar12 + uVar13 * 0xc;
        unaff_x22 = unaff_x22 & 0xffffffffffffff00;
        unaff_x21 = unaff_x21 & 0xffffffffffffff00;
        FUN_10a208044(&puStack_218,fVar17,0,uVar18,(int)lVar6,uVar19,lVar12,plVar8 + 7,
                      lVar11 + uVar13 * 0x28,&lStack_230,unaff_x22,unaff_x21,0,
                      *(undefined4 *)(param_2[0x1b] + uVar13 * 4),&uStack_150);
        FUN_10a208000(param_1,&puStack_218);
        plVar10 = plStack_1c0;
        if (plStack_1c0 != (long *)0x0) {
          plVar1 = plStack_1c0 + 1;
          do {
            lVar11 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (lStack_1e0 != 0) {
          lStack_1d8 = lStack_1e0;
          __ZdlPv();
        }
        if (lStack_210 != 0) {
          lStack_208 = lStack_210;
          __ZdlPv();
        }
        if (lStack_230 != 0) {
          lStack_228 = lStack_230;
          __ZdlPv();
        }
        lVar11 = param_1[1];
        if (*param_1 == lVar11) goto LAB_10a20abf4;
        fVar15 = (float)*(undefined8 *)(lVar11 + -0x48);
        fVar16 = fVar17 - fVar15;
        *(ulong *)(lVar11 + -0x40) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x40) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar11 + -0x40) + fVar16);
        *(ulong *)(lVar11 + -0x48) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x48) >> 0x20) + 0.0,fVar15 + fVar16)
        ;
        lVar11 = param_1[1];
        if (*param_1 == lVar11) goto LAB_10a20abf4;
        *(ulong *)(lVar11 + -0x30) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x30) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar11 + -0x30) + fVar16);
        *(ulong *)(lVar11 + -0x38) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + -0x38) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lVar11 + -0x38) + fVar16);
        fVar17 = fVar17 + *(float *)((long)plVar8 + 0x7c) * (float)*(int *)(lVar12 + 8);
      }
      plVar8 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar10 = plStack_148 + 1;
        do {
          lVar12 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_d8 != 0) {
        __ZdlPv();
      }
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
      if (lStack_108 != 0) {
        lStack_100 = lStack_108;
        __ZdlPv();
      }
      puStack_218 = &uStack_120;
      func_0x00010a208c30(&puStack_218);
      uVar13 = uVar13 + 1;
      lVar12 = *param_2;
    } while (uVar13 < (ulong)((param_2[1] - lVar12 >> 3) * -0x3333333333333333));
  }
  return;
}



/* Entry: 10a20ac54; end: 10a20ac8f;  */

void FUN_10a20ac54(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x130;
  func_0x00010a208c30(&lStack_28);
  FUN_10a1f4af8(param_1);
  return;
}



/* Entry: 10a20ac90; end: 10a20ae6b;  */

long FUN_10a20ac90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  func_0x00010a20ad68();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a20a46c(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a20ae6c; end: 10a20b0ab;  */

undefined1  [16]
FUN_10a20ae6c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x00010a20ad68();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = plVar7 + 2;
          FUN_10a20a46c(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a20b068;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_10a20b0ac(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x00010a20b1cc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_10a20b068:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a20b0ac; end: 10a20b127;  */

void FUN_10a20b0ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1a0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a20b128(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a20b128; end: 10a20b29b;  */

undefined8 * FUN_10a20b128(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar4;
  FUN_10a1ccb30(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  lVar5 = param_2[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
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
  func_0x00010a20b480(param_1 + 9,param_3);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x130);
  param_1[0x30] = *(undefined8 *)(param_3 + 0x138);
  param_1[0x2f] = uVar4;
  param_1[0x31] = *(undefined8 *)(param_3 + 0x140);
  *(undefined8 *)(param_3 + 0x130) = 0;
  *(undefined8 *)(param_3 + 0x138) = 0;
  *(undefined8 *)(param_3 + 0x140) = 0;
  return param_1;
}



/* Entry: 10a20b29c; end: 10a20b58b;  */

void FUN_10a20b29c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a20b420(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a20b58c; end: 10a20b6cf;  */

void FUN_10a20b58c(long *param_1,long *param_2)

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



/* Entry: 10a20b6d0; end: 10a20b753;  */

void FUN_10a20b6d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a20b754(param_1,param_4);
    lVar1 = param_1;
    FUN_10a20b7a0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a20b754; end: 10a20b79f;  */

long * FUN_10a20b754(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 < 0x147ae147ae147af) {
    plVar1 = param_1;
    FUN_10a208964();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x19);
    return plVar1;
  }
  FUN_10a208950();
  for (; param_2 != param_3; param_2 = param_2 + 200) {
    FUN_10a20b824(param_4,param_2);
    param_4 = param_4 + 0x19;
  }
  return param_4;
}



/* Entry: 10a20b7a0; end: 10a20b823;  */

long FUN_10a20b7a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 200) {
    FUN_10a20b824(param_4,param_2);
    param_4 = param_4 + 200;
  }
  return param_4;
}



/* Entry: 10a20b824; end: 10a20b90f;  */

undefined8 * FUN_10a20b824(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a0ca588(param_1 + 1,param_2[1],param_2[2],(long)(param_2[2] - param_2[1]) >> 2);
  param_1[4] = param_2[4];
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  param_1[7] = 0;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_10a0e9a40();
  lVar4 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
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
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  uVar8 = param_2[0x15];
  uVar7 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  uVar5 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  return param_1;
}



/* Entry: 10a20b910; end: 10a20ba87;  */

void FUN_10a20b910(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)((param_1[2] - *param_1 >> 3) * -0x70a3d70a3d70a3d7) < param_4) {
    plVar1 = param_1;
    FUN_10a20ba88();
    if (0x147ae147ae147ae < param_4) {
      FUN_10a208950();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        lVar6 = plVar1[1];
        lVar3 = lVar4;
        if (lVar6 != lVar4) {
          do {
            lVar6 = lVar6 + -200;
            FUN_10a208a14(lVar6);
          } while (lVar6 != lVar4);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar4;
        __ZdlPv(lVar3);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x1eb851eb851eb852;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar4 * -0x70a3d70a3d70a3d7)) {
      uVar5 = 0x147ae147ae147ae;
    }
    FUN_10a20b754(param_1,uVar5);
    FUN_10a20b7a0(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (ulong)((lVar4 >> 3) * -0x70a3d70a3d70a3d7)) {
      FUN_10a20baec(&uStack_41,param_2,param_3);
      lVar4 = param_1[1];
      while (lVar4 != param_2) {
        lVar4 = lVar4 + -200;
        FUN_10a208a14(lVar4);
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10a20baec(&uStack_42,param_2,param_2 + lVar4);
    FUN_10a20b7a0(param_1,param_2 + lVar4,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a20ba88; end: 10a20baeb;  */

void FUN_10a20ba88(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -200;
        FUN_10a208a14(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a20baec; end: 10a20bbf7;  */

undefined1  [16]
FUN_10a20baec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (param_2 != param_3) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)((long)param_2 + lVar4);
      puVar2 = (undefined8 *)((long)param_4 + lVar4);
      *puVar2 = *puVar1;
      if (param_4 == param_2) {
        puVar2[4] = puVar1[4];
        uVar3 = puVar1[5];
        *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
        puVar2[5] = uVar3;
      }
      else {
        func_0x00010a14ddc8(puVar2 + 1,puVar1[1],puVar1[2],(long)(puVar1[2] - puVar1[1]) >> 2);
        puVar2[4] = puVar1[4];
        uVar3 = puVar1[5];
        *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
        puVar2[5] = uVar3;
        FUN_10a0ea4a0(puVar2 + 7,puVar1[7],puVar1[8],(long)(puVar1[8] - puVar1[7]) >> 2);
      }
      FUN_10a2086b4(puVar2 + 10,puVar1 + 10);
      uVar3 = puVar1[0xc];
      uVar6 = puVar1[0xf];
      uVar5 = puVar1[0xe];
      puVar2[0xd] = puVar1[0xd];
      puVar2[0xc] = uVar3;
      puVar2[0xf] = uVar6;
      puVar2[0xe] = uVar5;
      uVar3 = puVar1[0x10];
      puVar2[0x11] = puVar1[0x11];
      puVar2[0x10] = uVar3;
      uVar7 = puVar1[0x15];
      uVar6 = puVar1[0x14];
      uVar5 = puVar1[0x17];
      uVar3 = puVar1[0x16];
      uVar9 = puVar1[0x13];
      uVar8 = puVar1[0x12];
      *(undefined1 *)(puVar2 + 0x18) = *(undefined1 *)(puVar1 + 0x18);
      puVar2[0x15] = uVar7;
      puVar2[0x14] = uVar6;
      puVar2[0x17] = uVar5;
      puVar2[0x16] = uVar3;
      puVar2[0x13] = uVar9;
      puVar2[0x12] = uVar8;
      lVar4 = lVar4 + 200;
    } while (puVar1 + 0x19 != param_3);
    param_4 = (undefined8 *)((long)param_4 + lVar4);
    param_2 = param_3;
  }
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Entry: 10a20bbf8; end: 10a20bd17;  */

void FUN_10a20bbf8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x19);
  if (cVar1 == *(char *)(param_2 + 0x19)) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      func_0x0001074714f0(param_1 + 1,param_2 + 1);
      param_1[4] = param_2[4];
      uVar2 = param_2[5];
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      param_1[5] = uVar2;
      func_0x00010869e720(param_1 + 7,param_2 + 7);
      func_0x00010a208730(param_1 + 10,param_2 + 10);
      uVar2 = param_2[0xc];
      uVar4 = param_2[0xf];
      uVar3 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      param_1[0xf] = uVar4;
      param_1[0xe] = uVar3;
      uVar4 = param_2[0x10];
      uVar3 = param_2[0x13];
      uVar2 = param_2[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar4;
      param_1[0x13] = uVar3;
      param_1[0x12] = uVar2;
      param_1[0x14] = param_2[0x14];
      uVar3 = param_2[0x16];
      uVar2 = param_2[0x15];
      uVar4 = *(undefined8 *)((long)param_2 + 0xb1);
      *(undefined8 *)((long)param_1 + 0xb9) = *(undefined8 *)((long)param_2 + 0xb9);
      *(undefined8 *)((long)param_1 + 0xb1) = uVar4;
      param_1[0x16] = uVar3;
      param_1[0x15] = uVar2;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x19) == '\x01') {
        FUN_10a1d37cc(param_1 + 10);
        if (param_1[7] != 0) {
          param_1[8] = param_1[7];
          __ZdlPv();
        }
        if (param_1[1] != 0) {
          param_1[2] = param_1[1];
          __ZdlPv();
        }
        *(undefined1 *)(param_1 + 0x19) = 0;
      }
      return;
    }
    FUN_10a2088c8(param_1,param_2);
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}



/* Entry: 10a20bd18; end: 10a20bd9f;  */

bool FUN_10a20bd18(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  
  bVar6 = *(byte *)(param_1 + 3) == *(byte *)(param_2 + 3);
  if ((*(byte *)(param_2 + 3) & *(byte *)(param_1 + 3)) != 0) {
    bVar4 = *(byte *)((long)param_1 + 0x17);
    uVar1 = param_1[1];
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    bVar5 = *(byte *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    if (uVar1 == uVar2) {
      plVar7 = (long *)*param_1;
      if (-1 < (char)bVar4) {
        plVar7 = param_1;
      }
      plVar3 = (long *)*param_2;
      if (-1 < (char)bVar5) {
        plVar3 = param_2;
      }
      _memcmp(plVar7,plVar3);
      bVar6 = (int)plVar7 == 0;
    }
    else {
      bVar6 = false;
    }
  }
  return bVar6;
}



/* Entry: 10a20bda0; end: 10a20be37;  */

void FUN_10a20bda0(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uStack_51;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar3 = param_2 + (lVar4 - param_4);
  lVar2 = lVar4;
  for (uVar1 = uVar3; uVar1 < param_3; uVar1 = uVar1 + 200) {
    FUN_10a2088c8(lVar2,uVar1);
    lVar2 = lVar2 + 200;
  }
  *(long *)(param_1 + 8) = lVar2;
  FUN_10a20c148(&uStack_51,param_2,uVar3,lVar4);
  return;
}



/* Entry: 10a20be38; end: 10a20bfa3;  */

void FUN_10a20be38(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar4 = param_1[2];
  uVar3 = uVar4;
  if (uVar4 == param_1[3]) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = ((long)(uVar4 - uVar1) >> 3) * 0x1eb851eb851eb852;
      if (uVar4 - uVar1 == 0) {
        uVar3 = 1;
      }
      uVar4 = uVar3 >> 2;
      uVar1 = param_1[4];
      uStack_68 = uVar1;
      FUN_10a208964();
      uVar6 = uVar1 + uVar4 * 200;
      uStack_78 = param_1[2];
      uStack_80 = param_1[1];
      lVar2 = uStack_78 - uStack_80;
      uVar4 = uVar6;
      if (lVar2 != 0) {
        uVar4 = uVar6 + lVar2;
        uVar5 = uVar6;
        do {
          FUN_10a2088c8(uVar5,uStack_80);
          uVar5 = uVar5 + 200;
          uStack_80 = uStack_80 + 200;
          lVar2 = lVar2 + -200;
        } while (lVar2 != 0);
        uStack_78 = param_1[2];
        uStack_80 = param_1[1];
      }
      uStack_88 = *param_1;
      *param_1 = uVar1;
      param_1[1] = uVar6;
      uStack_70 = param_1[3];
      param_1[2] = uVar4;
      param_1[3] = uVar1 + uVar3 * 200;
      func_0x00010a208a60(&uStack_88);
      uVar3 = param_1[2];
    }
    else {
      lVar2 = ((long)(uVar3 - uVar1) >> 3) * -0x70a3d70a3d70a3d7 + 1;
      lVar2 = ((ulong)(lVar2 - (lVar2 >> 0x3f)) >> 1) * -200;
      func_0x00010a208f94(&uStack_88,uVar3,uVar4,uVar3 + lVar2);
      param_1[1] = param_1[1] + lVar2;
      param_1[2] = uVar3;
    }
  }
  FUN_10a20c05c(uVar3,param_2);
  param_1[2] = param_1[2] + 200;
  return;
}



/* Entry: 10a20bfa4; end: 10a20c05b;  */

undefined8 FUN_10a20bfa4(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  FUN_10a2089ac(param_1,param_3,param_1[1],param_2[2]);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 + (lVar2 - param_3);
  FUN_10a2089ac(param_1,lVar2,param_3,lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 10a20c05c; end: 10a20c147;  */

undefined8 * FUN_10a20c05c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a0ca588(param_1 + 1,param_2[1],param_2[2],(long)(param_2[2] - param_2[1]) >> 2);
  param_1[4] = param_2[4];
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  param_1[7] = 0;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_10a0e9a40();
  lVar4 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
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
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  uVar8 = param_2[0x15];
  uVar7 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  uVar5 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  return param_1;
}



/* Entry: 10a20c148; end: 10a20c227;  */

undefined1  [16] FUN_10a20c148(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (param_3 != param_2) {
    lVar4 = 0;
    do {
      lVar1 = param_3 + lVar4;
      lVar2 = param_4 + lVar4;
      *(undefined8 *)(lVar2 + -200) = *(undefined8 *)(lVar1 + -200);
      func_0x0001074714f0(lVar2 + -0xc0,lVar1 + -0xc0);
      *(undefined8 *)(lVar2 + -0xa8) = *(undefined8 *)(lVar1 + -0xa8);
      uVar3 = *(undefined8 *)(lVar1 + -0xa0);
      *(undefined1 *)(lVar2 + -0x98) = *(undefined1 *)(lVar1 + -0x98);
      *(undefined8 *)(lVar2 + -0xa0) = uVar3;
      func_0x00010869e720(lVar2 + -0x90,lVar1 + -0x90);
      func_0x00010a208730(lVar2 + -0x78,lVar1 + -0x78);
      uVar5 = *(undefined8 *)(lVar1 + -0x60);
      uVar3 = *(undefined8 *)(lVar1 + -0x68);
      uVar6 = *(undefined8 *)(lVar1 + -0x58);
      *(undefined8 *)(lVar2 + -0x50) = *(undefined8 *)(lVar1 + -0x50);
      *(undefined8 *)(lVar2 + -0x58) = uVar6;
      *(undefined8 *)(lVar2 + -0x60) = uVar5;
      *(undefined8 *)(lVar2 + -0x68) = uVar3;
      uVar5 = *(undefined8 *)(lVar1 + -0x30);
      uVar3 = *(undefined8 *)(lVar1 + -0x38);
      uVar6 = *(undefined8 *)(lVar1 + -0x48);
      *(undefined8 *)(lVar2 + -0x40) = *(undefined8 *)(lVar1 + -0x40);
      *(undefined8 *)(lVar2 + -0x48) = uVar6;
      *(undefined8 *)(lVar2 + -0x30) = uVar5;
      *(undefined8 *)(lVar2 + -0x38) = uVar3;
      *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(lVar1 + -0x28);
      uVar5 = *(undefined8 *)(lVar1 + -0x18);
      uVar3 = *(undefined8 *)(lVar1 + -0x20);
      uVar6 = *(undefined8 *)(lVar1 + -0x17);
      *(undefined8 *)(lVar2 + -0xf) = *(undefined8 *)(lVar1 + -0xf);
      *(undefined8 *)(lVar2 + -0x17) = uVar6;
      *(undefined8 *)(lVar2 + -0x18) = uVar5;
      *(undefined8 *)(lVar2 + -0x20) = uVar3;
      lVar4 = lVar4 + -200;
    } while (param_3 + lVar4 != param_2);
    param_4 = param_4 + lVar4;
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Entry: 10a20c228; end: 10a20c367;  */

undefined1  [16] FUN_10a20c228(ulong ****param_1,ulong ***param_2)

{
  undefined *puVar1;
  ulong **ppuVar2;
  ulong ****ppppuVar3;
  ulong ****ppppuVar4;
  ulong ***pppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong ***pppuVar10;
  long lVar11;
  ulong ***pppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong ***pppuStack_c8;
  ulong **ppuStack_c0;
  ulong **ppuStack_b8;
  ulong ***pppuStack_b0;
  ulong ***pppuStack_a8;
  ulong ***pppuStack_58;
  ulong **ppuStack_50;
  ulong **ppuStack_48;
  ulong ***pppuStack_40;
  ulong ***pppuStack_38;
  
  lVar16 = (long)param_1[1] - (long)*param_1;
  uVar13 = (lVar16 >> 3) * -0x70a3d70a3d70a3d7 + 1;
  if (uVar13 < 0x147ae147ae147af) {
    lVar11 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar14 = lVar11 * 0x1eb851eb851eb852;
    if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
      uVar14 = uVar13;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar11 * -0x70a3d70a3d70a3d7)) {
      uVar14 = 0x147ae147ae147ae;
    }
    pppuStack_38 = (ulong ***)param_1;
    if (uVar14 == 0) {
      ppppuVar3 = (ulong ****)0x0;
    }
    else {
      ppppuVar3 = param_1;
      FUN_10a208964();
    }
    lVar16 = (long)ppppuVar3 + lVar16;
    pppuStack_40 = (ulong ***)(ppppuVar3 + uVar14 * 0x19);
    pppuStack_58 = (ulong ***)ppppuVar3;
    ppuStack_50 = (ulong **)lVar16;
    ppuStack_48 = (ulong **)lVar16;
    FUN_10a20c05c(lVar16,param_2);
    ppuStack_48 = (ulong **)(lVar16 + 200);
    pppuVar5 = *param_1;
    pppuVar12 = (ulong ***)((long)pppuVar5 + (lVar16 - (long)param_1[1]));
    FUN_10a2089ac(param_1,pppuVar5,param_1[1],pppuVar12);
    ppuVar2 = ppuStack_48;
    pppuStack_58 = *param_1;
    *param_1 = pppuVar12;
    pppuVar12 = param_1[2];
    param_1[2] = pppuStack_40;
    param_1[1] = (ulong ***)ppuStack_48;
    ppuStack_50 = (ulong **)pppuStack_58;
    ppuStack_48 = (ulong **)pppuStack_58;
    pppuStack_40 = pppuVar12;
    func_0x00010a208a60(&pppuStack_58);
    auVar17._8_8_ = pppuVar5;
    auVar17._0_8_ = ppuVar2;
    return auVar17;
  }
  FUN_10a208950();
  func_0x00010a208a60(&pppuStack_58);
  __Unwind_Resume();
  pppuVar12 = param_1[1];
  if ((ulong ***)(((long)param_1[2] - (long)pppuVar12 >> 3) * -0x70a3d70a3d70a3d7) < param_2) {
    lVar16 = (long)pppuVar12 - (long)*param_1;
    uVar13 = (long)param_2 + (lVar16 >> 3) * -0x70a3d70a3d70a3d7;
    if (0x147ae147ae147ae < uVar13) {
      FUN_10a208950();
      func_0x00010a208a60(&pppuStack_c8);
      __Unwind_Resume();
      ppppuVar3 = (ulong ****)param_1[1];
      if ((ulong ***)(((long)param_1[2] - (long)ppppuVar3 >> 3) * -0x5555555555555555) < param_2) {
        lVar16 = (long)ppppuVar3 - (long)*param_1;
        uVar13 = (long)param_2 + (lVar16 >> 3) * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uVar13) {
          FUN_10a20c69c();
          plVar6 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if (param_2 < (ulong ***)0xaaaaaaaaaaaaaab) {
            lVar16 = (long)param_2 * 0x18;
            __Znwm(lVar16);
            auVar20._8_8_ = param_2;
            auVar20._0_8_ = lVar16;
            return auVar20;
          }
          func_0x000109ffded8();
          plVar8 = (long *)plVar6[1];
          if (param_2 <= (ulong ***)((plVar6[2] - (long)plVar8 >> 2) * -0x5555555555555555)) {
            plVar7 = plVar6;
            pppuVar12 = (ulong ***)0x0;
            if (param_2 != (ulong ***)0x0) {
              pppuVar5 = (ulong ***)((((long)param_2 * 0xc - 0xcU) / 0xc) * 0xc + 0xc);
              plVar7 = plVar8;
              pppuVar12 = pppuVar5;
              _bzero(plVar8,pppuVar5);
              plVar8 = (long *)((long)plVar8 + (long)pppuVar5);
            }
            param_2 = pppuVar12;
            plVar6[1] = (long)plVar8;
LAB_10a20c838:
            auVar21._8_8_ = param_2;
            auVar21._0_8_ = plVar7;
            return auVar21;
          }
          lVar16 = (long)plVar8 - *plVar6;
          uVar13 = (long)param_2 + (lVar16 >> 2) * -0x5555555555555555;
          if (uVar13 < 0x1555555555555556) {
            lVar11 = plVar6[2] - *plVar6 >> 2;
            uVar14 = lVar11 * 0x5555555555555556;
            if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
              uVar14 = uVar13;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar14 = 0x1555555555555555;
            }
            if (uVar14 == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar6;
              FUN_10a20c864();
            }
            puVar1 = (undefined *)((long)plVar8 + lVar16);
            lVar16 = (((long)param_2 * 0xc - 0xcU) / 0xc) * 0xc + 0xc;
            _bzero(puVar1,lVar16);
            param_2 = (ulong ***)*plVar6;
            lVar11 = (long)puVar1 - (plVar6[1] - (long)param_2);
            _memcpy(lVar11);
            pppuVar5 = (ulong ***)*plVar6;
            *plVar6 = lVar11;
            plVar6[1] = (long)(puVar1 + lVar16);
            plVar6[2] = (long)((long)plVar8 + uVar14 * 0xc);
            plVar7 = (long *)0x0;
            if (pppuVar5 == (ulong ***)0x0) goto LAB_10a20c838;
          }
          else {
            FUN_10a20c850();
            puVar9 = (undefined8 *)&DAT_10f62a4d8;
            FUN_109ffde64();
            if (param_2 < (ulong ***)0x1555555555555556) {
              lVar16 = (long)param_2 * 0xc;
              __Znwm(lVar16);
              auVar22._8_8_ = param_2;
              auVar22._0_8_ = lVar16;
              return auVar22;
            }
            func_0x000109ffded8();
            puVar15 = (undefined8 *)*puVar9;
            pppuVar12 = (ulong ***)*puVar15;
            if (pppuVar12 == (ulong ***)0x0) {
              auVar23._8_8_ = param_2;
              auVar23._0_8_ = puVar9;
              return auVar23;
            }
            pppuVar5 = pppuVar12;
            pppuVar10 = (ulong ***)puVar15[1];
            if ((ulong ***)puVar15[1] != pppuVar12) {
              do {
                pppuVar5 = pppuVar10 + -0xe;
                FUN_10a1d37cc(pppuVar10 + -4);
                pppuVar10 = pppuVar5;
              } while (pppuVar5 != pppuVar12);
              pppuVar5 = *(ulong ****)*puVar9;
            }
            puVar15[1] = pppuVar12;
          }
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(pppuVar5);
          auVar24._8_8_ = param_2;
          auVar24._0_8_ = pppuVar5;
          return auVar24;
        }
        lVar11 = (long)param_1[2] - (long)*param_1 >> 3;
        uVar14 = lVar11 * 0x5555555555555556;
        if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
          uVar14 = uVar13;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar14 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar14 == 0) {
          ppppuVar3 = (ulong ****)0x0;
        }
        else {
          ppppuVar3 = param_1;
          FUN_10a20c6b0();
        }
        lVar16 = (long)ppppuVar3 + lVar16;
        lVar11 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
        _bzero(lVar16,lVar11);
        param_2 = *param_1;
        pppuVar12 = (ulong ***)(lVar16 - ((long)param_1[1] - (long)param_2));
        _memcpy(pppuVar12);
        pppuVar5 = *param_1;
        *param_1 = pppuVar12;
        param_1[1] = (ulong ***)(lVar16 + lVar11);
        param_1[2] = (ulong ***)(ppppuVar3 + uVar14 * 3);
        ppppuVar4 = (ulong ****)0x0;
        if (pppuVar5 != (ulong ***)0x0) goto __ZdlPv;
      }
      else {
        ppppuVar4 = param_1;
        pppuVar12 = (ulong ***)0x0;
        if (param_2 != (ulong ***)0x0) {
          uVar13 = ((long)param_2 * 0x18 - 0x18U) / 0x18;
          pppuVar12 = (ulong ***)(uVar13 * 0x18 + 0x18);
          ppppuVar4 = ppppuVar3;
          _bzero(ppppuVar3,pppuVar12);
          ppppuVar3 = ppppuVar3 + uVar13 * 3 + 3;
        }
        param_2 = pppuVar12;
        param_1[1] = (ulong ***)ppppuVar3;
      }
      auVar19._8_8_ = param_2;
      auVar19._0_8_ = ppppuVar4;
      return auVar19;
    }
    lVar11 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar14 = lVar11 * 0x1eb851eb851eb852;
    if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
      uVar14 = uVar13;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar11 * -0x70a3d70a3d70a3d7)) {
      uVar14 = 0x147ae147ae147ae;
    }
    pppuStack_a8 = (ulong ***)param_1;
    if (uVar14 == 0) {
      ppppuVar3 = (ulong ****)0x0;
    }
    else {
      ppppuVar3 = param_1;
      FUN_10a208964();
    }
    ppuStack_c0 = (ulong **)((long)ppppuVar3 + lVar16);
    pppuVar5 = (ulong ***)(ppuStack_c0 + (long)param_2 * 0x19);
    pppuVar12 = (ulong ***)ppuStack_c0;
    do {
      pppuVar12[0x11] = (ulong **)0x0;
      pppuVar12[0x10] = (ulong **)0x0;
      pppuVar12[0x13] = (ulong **)0x0;
      pppuVar12[0x12] = (ulong **)0x0;
      pppuVar12[0x18] = (ulong **)0x0;
      pppuVar12[0x15] = (ulong **)0x0;
      pppuVar12[0x14] = (ulong **)0x0;
      pppuVar12[0x17] = (ulong **)0x0;
      pppuVar12[0x16] = (ulong **)0x0;
      pppuVar12[0xd] = (ulong **)0x0;
      pppuVar12[0xc] = (ulong **)0x0;
      pppuVar12[0xf] = (ulong **)0x0;
      pppuVar12[0xe] = (ulong **)0x0;
      pppuVar12[9] = (ulong **)0x0;
      pppuVar12[8] = (ulong **)0x0;
      pppuVar12[0xb] = (ulong **)0x0;
      pppuVar12[10] = (ulong **)0x0;
      pppuVar12[5] = (ulong **)0x0;
      pppuVar12[4] = (ulong **)0x0;
      pppuVar12[7] = (ulong **)0x0;
      pppuVar12[6] = (ulong **)0x0;
      pppuVar12[1] = (ulong **)0x0;
      *pppuVar12 = (ulong **)0x0;
      pppuVar12[3] = (ulong **)0x0;
      pppuVar12[2] = (ulong **)0x0;
      *(undefined4 *)(pppuVar12 + 0xe) = 0x3f800000;
      *(undefined8 *)((long)pppuVar12 + 0x7c) = 0;
      *(undefined8 *)((long)pppuVar12 + 0x74) = 0;
      *(undefined8 *)((long)pppuVar12 + 0x8c) = 0;
      *(undefined8 *)((long)pppuVar12 + 0x84) = 0;
      *(undefined8 *)((long)pppuVar12 + 0x9c) = 0;
      *(undefined8 *)((long)pppuVar12 + 0x94) = 0;
      *(undefined4 *)((long)pppuVar12 + 0xa4) = 0;
      pppuVar12 = pppuVar12 + 0x19;
    } while (pppuVar12 != pppuVar5);
    param_2 = *param_1;
    pppuVar12 = (ulong ***)((long)ppuStack_c0 + ((long)param_2 - (long)param_1[1]));
    pppuStack_c8 = (ulong ***)ppppuVar3;
    ppuStack_b8 = (ulong **)pppuVar5;
    pppuStack_b0 = (ulong ***)(ppppuVar3 + uVar14 * 0x19);
    FUN_10a2089ac(param_1,param_2,param_1[1],pppuVar12);
    pppuStack_c8 = *param_1;
    *param_1 = pppuVar12;
    param_1[1] = pppuVar5;
    pppuStack_b0 = param_1[2];
    param_1[2] = (ulong ***)(ppppuVar3 + uVar14 * 0x19);
    param_1 = &pppuStack_c8;
    ppuStack_c0 = (ulong **)pppuStack_c8;
    ppuStack_b8 = (ulong **)pppuStack_c8;
    func_0x00010a208a60(param_1);
  }
  else {
    pppuVar5 = pppuVar12;
    if (param_2 != (ulong ***)0x0) {
      pppuVar5 = pppuVar12 + (long)param_2 * 0x19;
      do {
        pppuVar12[0x11] = (ulong **)0x0;
        pppuVar12[0x10] = (ulong **)0x0;
        pppuVar12[0x13] = (ulong **)0x0;
        pppuVar12[0x12] = (ulong **)0x0;
        pppuVar12[0x18] = (ulong **)0x0;
        pppuVar12[0x15] = (ulong **)0x0;
        pppuVar12[0x14] = (ulong **)0x0;
        pppuVar12[0x17] = (ulong **)0x0;
        pppuVar12[0x16] = (ulong **)0x0;
        pppuVar12[0xd] = (ulong **)0x0;
        pppuVar12[0xc] = (ulong **)0x0;
        pppuVar12[0xf] = (ulong **)0x0;
        pppuVar12[0xe] = (ulong **)0x0;
        pppuVar12[9] = (ulong **)0x0;
        pppuVar12[8] = (ulong **)0x0;
        pppuVar12[0xb] = (ulong **)0x0;
        pppuVar12[10] = (ulong **)0x0;
        pppuVar12[5] = (ulong **)0x0;
        pppuVar12[4] = (ulong **)0x0;
        pppuVar12[7] = (ulong **)0x0;
        pppuVar12[6] = (ulong **)0x0;
        pppuVar12[1] = (ulong **)0x0;
        *pppuVar12 = (ulong **)0x0;
        pppuVar12[3] = (ulong **)0x0;
        pppuVar12[2] = (ulong **)0x0;
        *(undefined4 *)(pppuVar12 + 0xe) = 0x3f800000;
        *(undefined8 *)((long)pppuVar12 + 0x7c) = 0;
        *(undefined8 *)((long)pppuVar12 + 0x74) = 0;
        *(undefined8 *)((long)pppuVar12 + 0x8c) = 0;
        *(undefined8 *)((long)pppuVar12 + 0x84) = 0;
        *(undefined8 *)((long)pppuVar12 + 0x9c) = 0;
        *(undefined8 *)((long)pppuVar12 + 0x94) = 0;
        *(undefined4 *)((long)pppuVar12 + 0xa4) = 0;
        pppuVar12 = pppuVar12 + 0x19;
      } while (pppuVar12 != pppuVar5);
    }
    param_1[1] = pppuVar5;
  }
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 10a20c368; end: 10a20c53f;  */

void FUN_10a20c368(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar5 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar5 >> 3) * -0x70a3d70a3d70a3d7) < param_2) {
    lVar11 = (long)puVar5 - *param_1;
    uVar4 = param_2 + (lVar11 >> 3) * -0x70a3d70a3d70a3d7;
    if (0x147ae147ae147ae < uVar4) {
      FUN_10a208950();
      func_0x00010a208a60(&plStack_58);
      __Unwind_Resume();
      lVar11 = param_1[1];
      if (param_2 <= (ulong)((param_1[2] - lVar11 >> 3) * -0x5555555555555555)) {
        if (param_2 != 0) {
          lVar7 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
          _bzero(lVar11,lVar7);
          lVar11 = lVar11 + lVar7;
        }
        param_1[1] = lVar11;
        return;
      }
      lVar11 = lVar11 - *param_1;
      uVar4 = param_2 + (lVar11 >> 3) * -0x5555555555555555;
      if (uVar4 < 0xaaaaaaaaaaaaaab) {
        lVar7 = param_1[2] - *param_1 >> 3;
        uVar8 = lVar7 * 0x5555555555555556;
        if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
          uVar8 = uVar4;
        }
        if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
          uVar8 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar8 == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = param_1;
          FUN_10a20c6b0();
        }
        lVar11 = (long)plVar2 + lVar11;
        lVar9 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar11,lVar9);
        lVar10 = lVar11 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lVar7 = *param_1;
        *param_1 = lVar10;
        param_1[1] = lVar11 + lVar9;
        param_1[2] = (long)(plVar2 + uVar8 * 3);
        if (lVar7 == 0) {
          return;
        }
      }
      else {
        FUN_10a20c69c();
        plVar2 = (long *)&DAT_10f62a4d8;
        FUN_109ffde64();
        if (param_2 < 0xaaaaaaaaaaaaaab) {
          __Znwm(param_2 * 0x18);
          return;
        }
        func_0x000109ffded8();
        lVar11 = plVar2[1];
        if (param_2 <= (ulong)((plVar2[2] - lVar11 >> 2) * -0x5555555555555555)) {
          if (param_2 != 0) {
            lVar7 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
            _bzero(lVar11,lVar7);
            lVar11 = lVar11 + lVar7;
          }
          plVar2[1] = lVar11;
          return;
        }
        lVar11 = lVar11 - *plVar2;
        uVar4 = param_2 + (lVar11 >> 2) * -0x5555555555555555;
        if (uVar4 < 0x1555555555555556) {
          lVar7 = plVar2[2] - *plVar2 >> 2;
          uVar8 = lVar7 * 0x5555555555555556;
          if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
            uVar8 = uVar4;
          }
          if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
            uVar8 = 0x1555555555555555;
          }
          if (uVar8 == 0) {
            plVar3 = (long *)0x0;
          }
          else {
            plVar3 = plVar2;
            FUN_10a20c864();
          }
          puVar1 = (undefined *)((long)plVar3 + lVar11);
          lVar11 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          _bzero(puVar1,lVar11);
          lVar9 = (long)puVar1 - (plVar2[1] - *plVar2);
          _memcpy(lVar9);
          lVar7 = *plVar2;
          *plVar2 = lVar9;
          plVar2[1] = (long)(puVar1 + lVar11);
          plVar2[2] = (long)((long)plVar3 + uVar8 * 0xc);
          if (lVar7 == 0) {
            return;
          }
        }
        else {
          FUN_10a20c850();
          plVar2 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          if (param_2 < 0x1555555555555556) {
            __Znwm(param_2 * 0xc);
            return;
          }
          func_0x000109ffded8();
          plVar3 = (long *)*plVar2;
          lVar11 = *plVar3;
          if (lVar11 == 0) {
            return;
          }
          lVar7 = lVar11;
          lVar9 = plVar3[1];
          if (plVar3[1] != lVar11) {
            do {
              lVar7 = lVar9 + -0x70;
              FUN_10a1d37cc(lVar9 + -0x20);
              lVar9 = lVar7;
            } while (lVar7 != lVar11);
            lVar7 = *(long *)*plVar2;
          }
          plVar3[1] = lVar11;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar7);
      return;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x1eb851eb851eb852;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar7 * -0x70a3d70a3d70a3d7)) {
      uVar8 = 0x147ae147ae147ae;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a208964();
    }
    plStack_50 = (long *)((long)plVar2 + lVar11);
    puVar6 = plStack_50 + param_2 * 0x19;
    puVar5 = plStack_50;
    do {
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x18] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      puVar5[0x17] = 0;
      puVar5[0x16] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *(undefined4 *)(puVar5 + 0xe) = 0x3f800000;
      *(undefined8 *)((long)puVar5 + 0x7c) = 0;
      *(undefined8 *)((long)puVar5 + 0x74) = 0;
      *(undefined8 *)((long)puVar5 + 0x8c) = 0;
      *(undefined8 *)((long)puVar5 + 0x84) = 0;
      *(undefined8 *)((long)puVar5 + 0x9c) = 0;
      *(undefined8 *)((long)puVar5 + 0x94) = 0;
      *(undefined4 *)((long)puVar5 + 0xa4) = 0;
      puVar5 = puVar5 + 0x19;
    } while (puVar5 != puVar6);
    lVar11 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = puVar6;
    plStack_40 = plVar2 + uVar8 * 0x19;
    FUN_10a2089ac(param_1,*param_1,param_1[1],lVar11);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar6;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar8 * 0x19);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a208a60(&plStack_58);
  }
  else {
    puVar6 = puVar5;
    if (param_2 != 0) {
      puVar6 = puVar5 + param_2 * 0x19;
      do {
        puVar5[0x11] = 0;
        puVar5[0x10] = 0;
        puVar5[0x13] = 0;
        puVar5[0x12] = 0;
        puVar5[0x18] = 0;
        puVar5[0x15] = 0;
        puVar5[0x14] = 0;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        *(undefined4 *)(puVar5 + 0xe) = 0x3f800000;
        *(undefined8 *)((long)puVar5 + 0x7c) = 0;
        *(undefined8 *)((long)puVar5 + 0x74) = 0;
        *(undefined8 *)((long)puVar5 + 0x8c) = 0;
        *(undefined8 *)((long)puVar5 + 0x84) = 0;
        *(undefined8 *)((long)puVar5 + 0x9c) = 0;
        *(undefined8 *)((long)puVar5 + 0x94) = 0;
        *(undefined4 *)((long)puVar5 + 0xa4) = 0;
        puVar5 = puVar5 + 0x19;
      } while (puVar5 != puVar6);
    }
    param_1[1] = (long)puVar6;
  }
  return;
}



/* Entry: 10a20c540; end: 10a20c69b;  */

void FUN_10a20c540(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[1];
  if (param_2 <= (ulong)((param_1[2] - lVar9 >> 3) * -0x5555555555555555)) {
    if (param_2 != 0) {
      lVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar9,lVar4);
      lVar9 = lVar9 + lVar4;
    }
    param_1[1] = lVar9;
    return;
  }
  lVar9 = lVar9 - *param_1;
  uVar5 = param_2 + (lVar9 >> 3) * -0x5555555555555555;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a20c6b0();
    }
    lVar9 = (long)plVar2 + lVar9;
    lVar7 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar9,lVar7);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar4 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + lVar7;
    param_1[2] = (long)(plVar2 + uVar6 * 3);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_10a20c69c();
    plVar2 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (param_2 < 0xaaaaaaaaaaaaaab) {
      __Znwm(param_2 * 0x18);
      return;
    }
    func_0x000109ffded8();
    lVar9 = plVar2[1];
    if (param_2 <= (ulong)((plVar2[2] - lVar9 >> 2) * -0x5555555555555555)) {
      if (param_2 != 0) {
        lVar4 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        _bzero(lVar9,lVar4);
        lVar9 = lVar9 + lVar4;
      }
      plVar2[1] = lVar9;
      return;
    }
    lVar9 = lVar9 - *plVar2;
    uVar5 = param_2 + (lVar9 >> 2) * -0x5555555555555555;
    if (uVar5 < 0x1555555555555556) {
      lVar4 = plVar2[2] - *plVar2 >> 2;
      uVar6 = lVar4 * 0x5555555555555556;
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
        uVar6 = uVar5;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar6 = 0x1555555555555555;
      }
      if (uVar6 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = plVar2;
        FUN_10a20c864();
      }
      puVar1 = (undefined *)((long)plVar3 + lVar9);
      lVar9 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(puVar1,lVar9);
      lVar7 = (long)puVar1 - (plVar2[1] - *plVar2);
      _memcpy(lVar7);
      lVar4 = *plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)(puVar1 + lVar9);
      plVar2[2] = (long)((long)plVar3 + uVar6 * 0xc);
      if (lVar4 == 0) {
        return;
      }
    }
    else {
      FUN_10a20c850();
      plVar2 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if (param_2 < 0x1555555555555556) {
        __Znwm(param_2 * 0xc);
        return;
      }
      func_0x000109ffded8();
      plVar3 = (long *)*plVar2;
      lVar9 = *plVar3;
      if (lVar9 == 0) {
        return;
      }
      lVar4 = lVar9;
      lVar7 = plVar3[1];
      if (plVar3[1] != lVar9) {
        do {
          lVar4 = lVar7 + -0x70;
          FUN_10a1d37cc(lVar7 + -0x20);
          lVar7 = lVar4;
        } while (lVar4 != lVar9);
        lVar4 = *(long *)*plVar2;
      }
      plVar3[1] = lVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar4);
  return;
}



/* Entry: 10a20c69c; end: 10a20c6af;  */

void FUN_10a20c69c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  lVar8 = plVar2[1];
  if (param_2 <= (ulong)((plVar2[2] - lVar8 >> 2) * -0x5555555555555555)) {
    if (param_2 != 0) {
      lVar4 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(lVar8,lVar4);
      lVar8 = lVar8 + lVar4;
    }
    plVar2[1] = lVar8;
    return;
  }
  lVar8 = lVar8 - *plVar2;
  uVar5 = param_2 + (lVar8 >> 2) * -0x5555555555555555;
  if (uVar5 < 0x1555555555555556) {
    lVar4 = plVar2[2] - *plVar2 >> 2;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x1555555555555555;
    }
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      FUN_10a20c864();
    }
    puVar1 = (undefined *)((long)plVar3 + lVar8);
    lVar8 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(puVar1,lVar8);
    lVar7 = (long)puVar1 - (plVar2[1] - *plVar2);
    _memcpy(lVar7);
    lVar4 = *plVar2;
    *plVar2 = lVar7;
    plVar2[1] = (long)(puVar1 + lVar8);
    plVar2[2] = (long)((long)plVar3 + uVar6 * 0xc);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_10a20c850();
    plVar2 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (param_2 < 0x1555555555555556) {
      __Znwm(param_2 * 0xc);
      return;
    }
    func_0x000109ffded8();
    plVar3 = (long *)*plVar2;
    lVar8 = *plVar3;
    if (lVar8 == 0) {
      return;
    }
    lVar4 = lVar8;
    lVar7 = plVar3[1];
    if (plVar3[1] != lVar8) {
      do {
        lVar4 = lVar7 + -0x70;
        FUN_10a1d37cc(lVar7 + -0x20);
        lVar7 = lVar4;
      } while (lVar4 != lVar8);
      lVar4 = *(long *)*plVar2;
    }
    plVar3[1] = lVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar4);
  return;
}



/* Entry: 10a20c6b0; end: 10a20c6f3;  */

void FUN_10a20c6b0(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  lVar8 = param_1[1];
  if (param_2 <= (ulong)((param_1[2] - lVar8 >> 2) * -0x5555555555555555)) {
    if (param_2 != 0) {
      lVar2 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(lVar8,lVar2);
      lVar8 = lVar8 + lVar2;
    }
    param_1[1] = lVar8;
    return;
  }
  lVar8 = lVar8 - *param_1;
  uVar3 = param_2 + (lVar8 >> 2) * -0x5555555555555555;
  if (uVar3 < 0x1555555555555556) {
    lVar2 = param_1[2] - *param_1 >> 2;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0x1555555555555555;
    }
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a20c864();
    }
    lVar8 = (long)plVar1 + lVar8;
    lVar5 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar8,lVar5);
    lVar6 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar2 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar8 + lVar5;
    param_1[2] = (long)plVar1 + uVar4 * 0xc;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    FUN_10a20c850();
    plVar1 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (param_2 < 0x1555555555555556) {
      __Znwm(param_2 * 0xc);
      return;
    }
    func_0x000109ffded8();
    plVar7 = (long *)*plVar1;
    lVar8 = *plVar7;
    if (lVar8 == 0) {
      return;
    }
    lVar2 = lVar8;
    lVar5 = plVar7[1];
    if (plVar7[1] != lVar8) {
      do {
        lVar2 = lVar5 + -0x70;
        FUN_10a1d37cc(lVar5 + -0x20);
        lVar5 = lVar2;
      } while (lVar2 != lVar8);
      lVar2 = *(long *)*plVar1;
    }
    plVar7[1] = lVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a20c6f4; end: 10a20c84f;  */

void FUN_10a20c6f4(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_1[1];
  if (param_2 <= (ulong)((param_1[2] - lVar8 >> 2) * -0x5555555555555555)) {
    if (param_2 != 0) {
      lVar2 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(lVar8,lVar2);
      lVar8 = lVar8 + lVar2;
    }
    param_1[1] = lVar8;
    return;
  }
  lVar8 = lVar8 - *param_1;
  uVar3 = param_2 + (lVar8 >> 2) * -0x5555555555555555;
  if (uVar3 < 0x1555555555555556) {
    lVar2 = param_1[2] - *param_1 >> 2;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0x1555555555555555;
    }
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a20c864();
    }
    lVar8 = (long)plVar1 + lVar8;
    lVar5 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar8,lVar5);
    lVar6 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar2 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar8 + lVar5;
    param_1[2] = (long)plVar1 + uVar4 * 0xc;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    FUN_10a20c850();
    plVar1 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if (param_2 < 0x1555555555555556) {
      __Znwm(param_2 * 0xc);
      return;
    }
    func_0x000109ffded8();
    plVar7 = (long *)*plVar1;
    lVar8 = *plVar7;
    if (lVar8 == 0) {
      return;
    }
    lVar2 = lVar8;
    lVar5 = plVar7[1];
    if (plVar7[1] != lVar8) {
      do {
        lVar2 = lVar5 + -0x70;
        FUN_10a1d37cc(lVar5 + -0x20);
        lVar5 = lVar2;
      } while (lVar2 != lVar8);
      lVar2 = *(long *)*plVar1;
    }
    plVar7[1] = lVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a20c850; end: 10a20c863;  */

void FUN_10a20c850(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*plVar1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    lVar2 = plVar3[1];
    if (plVar3[1] != lVar4) {
      do {
        lVar5 = lVar2 + -0x70;
        FUN_10a1d37cc(lVar2 + -0x20);
        lVar2 = lVar5;
      } while (lVar5 != lVar4);
      lVar5 = *(long *)*plVar1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5);
    return;
  }
  return;
}



/* Entry: 10a20c864; end: 10a20c8a7;  */

void FUN_10a20c864(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x70;
        FUN_10a1d37cc(lVar1 + -0x20);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a20c8a8; end: 10a20c91b;  */

void FUN_10a20c8a8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x70;
        FUN_10a1d37cc(lVar1 + -0x20);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a20c91c; end: 10a20ca4b;  */

void FUN_10a20c91c(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2 + 0x98;
    FUN_10a208bbc(&lStack_28);
    func_0x00010a20c994(param_2 + 0x70);
    if (*(long *)(param_2 + 0x58) != 0) {
      *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x58);
      __ZdlPv();
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x40);
      __ZdlPv();
    }
    lStack_28 = param_2 + 0x18;
    FUN_10a20c8a8(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10a20ca4c; end: 10a20cd6f;  */

void FUN_10a20ca4c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar10 = *(long *)(param_2 + 8);
  if (lVar10 != param_2) {
    lVar11 = 0;
    do {
      FUN_10a24da00(lVar10 + 0x10);
      lVar5 = *(long *)(lVar10 + 0x40);
      if (*(long *)(lVar10 + 0x48) != lVar5) {
        uVar12 = 0;
        uVar9 = 0;
        do {
          if ((uVar9 < (ulong)(*(long *)(lVar10 + 0x78) - *(long *)(lVar10 + 0x70) >> 3)) &&
             (*(ulong *)(*(long *)(lVar10 + 0x70) + uVar9 * 8) < uVar12)) {
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 1;
          }
          lVar6 = param_3 + 0x18;
          FUN_10a20cf48(lVar6,lVar5 + uVar12 * 200);
          if (lVar6 == 0) {
            lVar5 = param_2 + 0x20;
            FUN_10a20ac90(lVar5,lVar10 + 0xd8);
            if (lVar5 != 0) {
              uVar7 = (*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 3) *
                      -0x70a3d70a3d70a3d7;
              if (uVar7 < uVar12 || uVar7 - uVar12 == 0) goto LAB_10a20cd34;
              lVar5 = lVar5 + 0x70;
              FUN_10a20cf48(lVar5,*(long *)(lVar10 + 0x40) + uVar12 * 200);
              if (lVar5 != 0) {
                lVar6 = *(long *)(lVar10 + 0x40);
                uVar7 = (*(long *)(lVar10 + 0x48) - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
                if (uVar7 < uVar12 || uVar7 - uVar12 == 0) goto LAB_10a20cd34;
                lVar8 = lVar6 + uVar12 * 200;
                uStack_c8 = *(undefined8 *)(lVar8 + 0x88);
                uStack_d0 = *(undefined8 *)(lVar8 + 0x80);
                uStack_b8 = *(undefined8 *)(lVar8 + 0x98);
                uStack_c0 = *(undefined8 *)(lVar8 + 0x90);
                uStack_b0 = *(undefined8 *)(lVar8 + 0xa0);
                lStack_a8 = lVar5 + 0x38;
                uStack_a0 = uStack_a0 & 0xffffffffffffff00;
                uStack_98 = 0;
                uStack_88 = *(undefined8 *)(lVar8 + 0xb8);
                plStack_78 = *(long **)(lVar8 + 0x58);
                uStack_80 = *(undefined8 *)(lVar8 + 0x50);
                if (*(long *)(lVar8 + 0x58) != 0) {
                  plVar1 = (long *)(*(long *)(lVar8 + 0x58) + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar3) {
                      *plVar1 = *plVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  lVar6 = *(long *)(lVar10 + 0x40);
                  uVar7 = (*(long *)(lVar10 + 0x48) - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
                }
                lStack_90 = lVar11;
                if (uVar7 <= uVar12) goto LAB_10a20cd34;
                lVar6 = lVar6 + uVar12 * 200;
                uStack_70 = *(undefined4 *)(lVar6 + 0x70);
                uStack_6c = *(undefined8 *)(lVar6 + 0xa8);
                FUN_10a20ced8(param_1,&uStack_d0);
                if (plStack_78 != (long *)0x0) {
                  plVar1 = plStack_78 + 1;
                  do {
                    lVar5 = *plVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar3) {
                      *plVar1 = lVar5 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  goto LAB_10a20cbc0;
                }
              }
            }
          }
          else {
            lVar5 = *(long *)(lVar10 + 0x40);
            uVar7 = (*(long *)(lVar10 + 0x48) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
            if (uVar7 < uVar12 || uVar7 - uVar12 == 0) {
LAB_10a20cd34:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a20cd38);
              (*pcVar4)();
            }
            lVar8 = lVar5 + uVar12 * 200;
            uStack_c8 = *(undefined8 *)(lVar8 + 0x88);
            uStack_d0 = *(undefined8 *)(lVar8 + 0x80);
            uStack_b8 = *(undefined8 *)(lVar8 + 0x98);
            uStack_c0 = *(undefined8 *)(lVar8 + 0x90);
            uStack_b0 = *(undefined8 *)(lVar8 + 0xa0);
            lStack_a8 = lVar6 + 0x38;
            uStack_a0 = *(ulong *)(lVar8 + 0x28);
            uStack_98 = *(undefined1 *)(lVar8 + 0x30);
            uStack_88 = *(undefined8 *)(lVar8 + 0xb8);
            plStack_78 = *(long **)(lVar8 + 0x58);
            uStack_80 = *(undefined8 *)(lVar8 + 0x50);
            if (*(long *)(lVar8 + 0x58) != 0) {
              plVar1 = (long *)(*(long *)(lVar8 + 0x58) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = *plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              lVar5 = *(long *)(lVar10 + 0x40);
              uVar7 = (*(long *)(lVar10 + 0x48) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
            }
            lStack_90 = lVar11;
            if (uVar7 <= uVar12) goto LAB_10a20cd34;
            lVar5 = lVar5 + uVar12 * 200;
            uStack_70 = *(undefined4 *)(lVar5 + 0x70);
            uStack_6c = *(undefined8 *)(lVar5 + 0xa8);
            FUN_10a20ced8(param_1,&uStack_d0);
            if (plStack_78 != (long *)0x0) {
              plVar1 = plStack_78 + 1;
              do {
                lVar5 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
LAB_10a20cbc0:
              plVar1 = plStack_78;
              if (lVar5 == 0) {
                (**(code **)(*plStack_78 + 0x10))(plStack_78);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
          }
          uVar12 = uVar12 + 1;
          lVar5 = *(long *)(lVar10 + 0x40);
          uVar7 = (*(long *)(lVar10 + 0x48) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
        } while (uVar12 <= uVar7 && uVar7 - uVar12 != 0);
      }
      lVar11 = lVar11 + 1;
      lVar10 = *(long *)(lVar10 + 8);
    } while (lVar10 != param_2);
  }
  return;
}



/* Entry: 10a20cd70; end: 10a20cdff;  */

void FUN_10a20cd70(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = param_2;
  while (lVar1 = *(long *)(lVar1 + 8), lVar1 != param_2) {
    FUN_10a20d41c(param_1,param_1[1],*(long *)(lVar1 + 0x140),*(long *)(lVar1 + 0x148),
                  (*(long *)(lVar1 + 0x148) - *(long *)(lVar1 + 0x140) >> 3) * 0x6db6db6db6db6db7);
  }
  return;
}



/* Entry: 10a20ce00; end: 10a20ced7;  */

void FUN_10a20ce00(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    uVar5 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    uVar13 = param_2[4];
    uVar15 = param_2[7];
    uVar14 = param_2[6];
    puVar9[5] = param_2[5];
    puVar9[4] = uVar13;
    puVar9[7] = uVar15;
    puVar9[6] = uVar14;
    puVar9[1] = uVar10;
    *puVar9 = uVar5;
    puVar9[3] = uVar12;
    puVar9[2] = uVar11;
    puVar9 = puVar9 + 8;
  }
  else {
    lVar8 = (long)puVar9 - *param_1;
    uVar1 = (lVar8 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a20e128();
      puVar9 = (undefined8 *)param_1[1];
      if (puVar9 < (undefined8 *)param_1[2]) {
        uVar5 = *param_2;
        puVar9[1] = param_2[1];
        *puVar9 = uVar5;
        uVar10 = param_2[3];
        uVar5 = param_2[2];
        uVar12 = param_2[5];
        uVar11 = param_2[4];
        uVar13 = param_2[6];
        uVar15 = param_2[9];
        uVar14 = param_2[8];
        puVar9[7] = param_2[7];
        puVar9[6] = uVar13;
        puVar9[9] = uVar15;
        puVar9[8] = uVar14;
        puVar9[3] = uVar10;
        puVar9[2] = uVar5;
        puVar9[5] = uVar12;
        puVar9[4] = uVar11;
        uVar5 = param_2[10];
        puVar9[0xb] = param_2[0xb];
        puVar9[10] = uVar5;
        param_2[10] = 0;
        param_2[0xb] = 0;
        uVar5 = param_2[0xc];
        *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(param_2 + 0xd);
        puVar9[0xc] = uVar5;
        plVar3 = puVar9 + 0xe;
      }
      else {
        plVar3 = param_1;
        FUN_10a20d034();
      }
      param_1[1] = (long)plVar3;
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar6 = 0x3ffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a20e13c();
    puVar2 = (undefined8 *)((long)plVar3 + lVar8);
    uVar5 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    uVar15 = param_2[1];
    uVar14 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar2[5] = param_2[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar11;
    puVar2[6] = uVar10;
    puVar2[1] = uVar15;
    *puVar2 = uVar14;
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    puVar9 = puVar2 + 8;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar3 + uVar6 * 8);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 10a20ced8; end: 10a20cf47;  */

void FUN_10a20ced8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    uVar6 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    puVar1[7] = param_2[7];
    puVar1[6] = uVar6;
    puVar1[9] = uVar8;
    puVar1[8] = uVar7;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
    uVar2 = param_2[10];
    puVar1[0xb] = param_2[0xb];
    puVar1[10] = uVar2;
    param_2[10] = 0;
    param_2[0xb] = 0;
    uVar2 = param_2[0xc];
    *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    puVar1[0xc] = uVar2;
    puVar1 = puVar1 + 0xe;
  }
  else {
    puVar1 = param_1;
    FUN_10a20d034();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a20cf48; end: 10a20d033;  */

long FUN_10a20cf48(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10a2063e0();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar2 == uVar4) {
          if (plVar3[6] == *(long *)(param_2 + 0x20)) {
            uVar4 = (ulong)(plVar3 + 2);
            FUN_10a2064c0(uVar4,param_2);
            if ((uVar4 & 1) != 0) {
              return (long)plVar3;
            }
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a20d034; end: 10a20d18f;  */

/* WARNING: Possible PIC construction at 0x00010a20d13c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a20d140) */

void FUN_10a20d034(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar1 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar6 = (lVar8 >> 4) * 0x6db6db6db6db6db7 + 1;
  if (uVar6 < 0x24924924924924a) {
    lVar4 = (long)(param_1[2] - *param_1) >> 4;
    uVar7 = lVar4 * -0x2492492492492492;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar7 = 0x249249249249249;
    }
    puStack_38 = param_1;
    if (uVar7 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_10a20d1a4();
    }
    puStack_50 = (undefined8 *)((long)puVar2 + lVar8);
    puStack_40 = puVar2 + uVar7 * 0xe;
    uVar10 = param_2[3];
    uVar5 = param_2[2];
    uVar12 = param_2[5];
    uVar11 = param_2[4];
    uVar13 = param_2[6];
    uVar15 = param_2[9];
    uVar14 = param_2[8];
    puStack_50[7] = param_2[7];
    puStack_50[6] = uVar13;
    puStack_50[9] = uVar15;
    puStack_50[8] = uVar14;
    puStack_50[5] = uVar12;
    puStack_50[4] = uVar11;
    uVar11 = *param_2;
    puStack_50[1] = param_2[1];
    *puStack_50 = uVar11;
    puStack_50[3] = uVar10;
    puStack_50[2] = uVar5;
    uVar5 = param_2[10];
    puStack_50[0xb] = param_2[0xb];
    puStack_50[10] = uVar5;
    param_2[10] = 0;
    param_2[0xb] = 0;
    uVar5 = param_2[0xc];
    *(undefined4 *)(puStack_50 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    puStack_50[0xc] = uVar5;
    unaff_x20 = puStack_50 + 0xe;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar5 = 0x10a20d140;
    puStack_58 = puVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_10a20d190();
    func_0x00010a20d270(&puStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a20d190;
    ppuStack_70 = ppuVar9;
    FUN_109ffde64(&DAT_10f62a4d8);
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_10a20d1a4;
    ppuVar9 = &puStack_80;
    if (param_2 < (undefined8 *)0x24924924924924a) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x70);
      return;
    }
    uVar5 = 0x10a20d1ec;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  if (param_2 != param_3) {
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(ulong **)(puVar1 + -0x18) = param_1;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    puVar3 = param_2;
    do {
      uVar5 = *puVar3;
      param_4[1] = puVar3[1];
      *param_4 = uVar5;
      uVar10 = puVar3[3];
      uVar5 = puVar3[2];
      uVar12 = puVar3[5];
      uVar11 = puVar3[4];
      uVar13 = puVar3[6];
      uVar15 = puVar3[9];
      uVar14 = puVar3[8];
      param_4[7] = puVar3[7];
      param_4[6] = uVar13;
      param_4[9] = uVar15;
      param_4[8] = uVar14;
      param_4[3] = uVar10;
      param_4[2] = uVar5;
      param_4[5] = uVar12;
      param_4[4] = uVar11;
      uVar5 = puVar3[10];
      param_4[0xb] = puVar3[0xb];
      param_4[10] = uVar5;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      uVar5 = puVar3[0xc];
      *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar3 + 0xd);
      param_4[0xc] = uVar5;
      puVar3 = puVar3 + 0xe;
      param_4 = param_4 + 0xe;
    } while (puVar3 != param_3);
    do {
      FUN_10a1d37cc(param_2 + 10);
      param_2 = param_2 + 0xe;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a20d190; end: 10a20d1a3;  */

void FUN_10a20d190(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined8 *)0x249249249249249 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        uVar5 = puVar1[5];
        uVar4 = puVar1[4];
        uVar6 = puVar1[6];
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        param_4[7] = puVar1[7];
        param_4[6] = uVar6;
        param_4[9] = uVar8;
        param_4[8] = uVar7;
        param_4[3] = uVar3;
        param_4[2] = uVar2;
        param_4[5] = uVar5;
        param_4[4] = uVar4;
        uVar2 = puVar1[10];
        param_4[0xb] = puVar1[0xb];
        param_4[10] = uVar2;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        uVar2 = puVar1[0xc];
        *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
        param_4[0xc] = uVar2;
        puVar1 = puVar1 + 0xe;
        param_4 = param_4 + 0xe;
      } while (puVar1 != param_3);
      do {
        FUN_10a1d37cc(param_2 + 10);
        param_2 = param_2 + 0xe;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x70);
  return;
}



/* Entry: 10a20d1a4; end: 10a20d2bf;  */

void FUN_10a20d1a4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((undefined8 *)0x249249249249249 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        uVar5 = puVar1[5];
        uVar4 = puVar1[4];
        uVar6 = puVar1[6];
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        param_4[7] = puVar1[7];
        param_4[6] = uVar6;
        param_4[9] = uVar8;
        param_4[8] = uVar7;
        param_4[3] = uVar3;
        param_4[2] = uVar2;
        param_4[5] = uVar5;
        param_4[4] = uVar4;
        uVar2 = puVar1[10];
        param_4[0xb] = puVar1[0xb];
        param_4[10] = uVar2;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        uVar2 = puVar1[0xc];
        *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
        param_4[0xc] = uVar2;
        puVar1 = puVar1 + 0xe;
        param_4 = param_4 + 0xe;
      } while (puVar1 != param_3);
      do {
        FUN_10a1d37cc(param_2 + 10);
        param_2 = param_2 + 0xe;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x70);
  return;
}



/* Entry: 10a20d2c0; end: 10a20d327;  */

void FUN_10a20d2c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x70;
        FUN_10a1d37cc(lVar1 + -0x20);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a20d328; end: 10a20d41b;  */

void FUN_10a20d328(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010a20d3c8();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a20d41c; end: 10a20d6f3;  */

/* WARNING: Possible PIC construction at 0x00010a20d580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a20d5e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a20d584) */
/* WARNING: Removing unreachable block (ram,0x00010a20d588) */
/* WARNING: Removing unreachable block (ram,0x00010a20d5c8) */
/* WARNING: Removing unreachable block (ram,0x00010a20d5e4) */
/* WARNING: Removing unreachable block (ram,0x00010a20d5ec) */
/* WARNING: Removing unreachable block (ram,0x00010a20d62c) */

long * FUN_10a20d41c(long *param_1,long *param_2,undefined8 *param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_5 < 1) {
    return param_2;
  }
  plVar6 = (long *)param_1[1];
  if ((param_1[2] - (long)plVar6 >> 3) * 0x6db6db6db6db6db7 < param_5) {
    lVar12 = *param_1;
    uVar11 = param_5 + ((long)plVar6 - lVar12 >> 3) * 0x6db6db6db6db6db7;
    if (uVar11 < 0x492492492492493) {
      lVar7 = param_1[2] - lVar12 >> 3;
      uVar9 = lVar7 * -0x2492492492492492;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
        uVar9 = uVar11;
      }
      if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
        uVar9 = 0x492492492492492;
      }
      plStack_48 = param_1;
      if (uVar9 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = param_1;
        FUN_10a20d89c();
      }
      puStack_60 = (undefined8 *)((long)plVar6 + ((long)param_2 - lVar12));
      plStack_50 = plVar6 + uVar9 * 7;
      puStack_58 = puStack_60 + param_5 * 7;
      puVar8 = puStack_60;
      do {
        uVar15 = param_3[1];
        uVar10 = *param_3;
        puVar8[2] = param_3[2];
        puVar8[1] = uVar15;
        *puVar8 = uVar10;
        lVar12 = param_3[4];
        uVar10 = param_3[3];
        puVar8[4] = param_3[4];
        puVar8[3] = uVar10;
        if (lVar12 != 0) {
          plVar2 = (long *)(lVar12 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar10 = param_3[5];
        *(undefined2 *)(puVar8 + 6) = *(undefined2 *)(param_3 + 6);
        puVar8[5] = uVar10;
        puVar8 = puVar8 + 7;
        param_3 = param_3 + 7;
      } while (puVar8 != puStack_58);
      plStack_68 = plVar6;
      func_0x00010a20d7d0(param_1,&plStack_68,param_2);
      func_0x00010a20d960(&plStack_68);
      return param_1;
    }
    FUN_10a20d888();
    func_0x00010a20d960(&plStack_68);
    __Unwind_Resume();
  }
  else {
    lVar12 = (long)plVar6 - (long)param_2;
    if ((lVar12 >> 3) * 0x6db6db6db6db6db7 < param_5) {
      plVar1 = plVar6;
      for (plVar2 = (long *)(lVar12 + (long)param_3); plVar2 != param_4; plVar2 = plVar2 + 7) {
        lVar14 = plVar2[1];
        lVar7 = *plVar2;
        plVar1[2] = plVar2[2];
        plVar1[1] = lVar14;
        *plVar1 = lVar7;
        lVar7 = plVar2[4];
        lVar14 = plVar2[3];
        plVar1[4] = plVar2[4];
        plVar1[3] = lVar14;
        if (lVar7 != 0) {
          plVar13 = (long *)(lVar7 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar7 = plVar2[5];
        *(short *)(plVar1 + 6) = (short)plVar2[6];
        plVar1[5] = lVar7;
        plVar1 = plVar1 + 7;
      }
      param_1[1] = (long)plVar1;
      if (lVar12 < 1) {
        return param_2;
      }
      param_4 = param_2 + param_5 * 7;
    }
    else {
      param_4 = param_2 + param_5 * 7;
    }
  }
  plVar13 = (long *)param_1[1];
  param_2 = (long *)((long)param_2 + ((long)plVar13 - (long)param_4));
  plVar1 = plVar13;
  for (plVar2 = param_2; plVar2 < plVar6; plVar2 = plVar2 + 7) {
    lVar7 = plVar2[1];
    lVar12 = *plVar2;
    plVar1[2] = plVar2[2];
    plVar1[1] = lVar7;
    *plVar1 = lVar12;
    lVar12 = plVar2[3];
    plVar1[4] = plVar2[4];
    plVar1[3] = lVar12;
    plVar2[3] = 0;
    plVar2[4] = 0;
    lVar12 = plVar2[5];
    *(short *)(plVar1 + 6) = (short)plVar2[6];
    plVar1[5] = lVar12;
    plVar1 = plVar1 + 7;
  }
  param_1[1] = (long)plVar1;
  if (plVar13 != param_4) {
    lVar12 = 0;
    do {
      uVar15 = *(undefined8 *)((long)param_2 + lVar12 + -0x30);
      uVar10 = *(undefined8 *)((long)param_2 + lVar12 + -0x38);
      *(undefined8 *)((long)plVar13 + lVar12 + -0x28) =
           *(undefined8 *)((long)param_2 + lVar12 + -0x28);
      *(undefined8 *)((long)plVar13 + lVar12 + -0x30) = uVar15;
      *(undefined8 *)((long)plVar13 + lVar12 + -0x38) = uVar10;
      param_1 = (long *)((long)plVar13 + lVar12 + -0x20);
      func_0x00010a208730(param_1,(long)param_2 + lVar12 + -0x20);
      uVar3 = *(undefined2 *)((long)param_2 + lVar12 + -8);
      *(undefined8 *)((long)plVar13 + lVar12 + -0x10) =
           *(undefined8 *)((long)param_2 + lVar12 + -0x10);
      *(undefined2 *)((long)plVar13 + lVar12 + -8) = uVar3;
      lVar12 = lVar12 + -0x38;
    } while ((long)param_4 - (long)plVar13 != lVar12);
  }
  return param_1;
}



/* Entry: 10a20d6f4; end: 10a20d887;  */

void FUN_10a20d6f4(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)((long)puVar6 + (param_2 - (long)param_4));
  puVar2 = puVar6;
  for (puVar1 = puVar3; puVar1 < param_3; puVar1 = puVar1 + 7) {
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    puVar2[2] = puVar1[2];
    puVar2[1] = uVar8;
    *puVar2 = uVar5;
    uVar5 = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[3] = uVar5;
    puVar1[3] = 0;
    puVar1[4] = 0;
    uVar5 = puVar1[5];
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(puVar1 + 6);
    puVar2[5] = uVar5;
    puVar2 = puVar2 + 7;
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (puVar6 != param_4) {
    lVar7 = 0;
    do {
      uVar8 = *(undefined8 *)((long)puVar3 + lVar7 + -0x30);
      uVar5 = *(undefined8 *)((long)puVar3 + lVar7 + -0x38);
      *(undefined8 *)((long)puVar6 + lVar7 + -0x28) = *(undefined8 *)((long)puVar3 + lVar7 + -0x28);
      *(undefined8 *)((long)puVar6 + lVar7 + -0x30) = uVar8;
      *(undefined8 *)((long)puVar6 + lVar7 + -0x38) = uVar5;
      func_0x00010a208730((long)puVar6 + lVar7 + -0x20,(long)puVar3 + lVar7 + -0x20);
      uVar4 = *(undefined2 *)((long)puVar3 + lVar7 + -8);
      *(undefined8 *)((long)puVar6 + lVar7 + -0x10) = *(undefined8 *)((long)puVar3 + lVar7 + -0x10);
      *(undefined2 *)((long)puVar6 + lVar7 + -8) = uVar4;
      lVar7 = lVar7 + -0x38;
    } while ((long)param_4 - (long)puVar6 != lVar7);
  }
  return;
}



/* Entry: 10a20d888; end: 10a20d89b;  */

void FUN_10a20d888(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        puVar1[3] = 0;
        puVar1[4] = 0;
        uVar2 = puVar1[5];
        *(undefined2 *)(param_4 + 6) = *(undefined2 *)(puVar1 + 6);
        param_4[5] = uVar2;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        FUN_10a1d37cc(param_2 + 3);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 10a20d89c; end: 10a20d9af;  */

void FUN_10a20d89c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        puVar1[3] = 0;
        puVar1[4] = 0;
        uVar2 = puVar1[5];
        *(undefined2 *)(param_4 + 6) = *(undefined2 *)(puVar1 + 6);
        param_4[5] = uVar2;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        FUN_10a1d37cc(param_2 + 3);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 10a20d9b0; end: 10a20dae7;  */

void FUN_10a20d9b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x38;
        FUN_10a1d37cc(lVar1 + -0x20);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a20dae8; end: 10a20dc23;  */

long * FUN_10a20dae8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  
  if (param_2 == (ulong *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar7 = *param_2;
        uVar8 = uVar5 - 1;
        if ((uVar5 & uVar8) == 0) {
          uVar11 = uVar8 & uVar7;
        }
        else {
          uVar11 = uVar7;
          if (uVar5 <= uVar7) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar7 / uVar5;
            }
            uVar11 = uVar7 - uVar11 * uVar5;
          }
        }
        plVar3 = *(long **)(*param_1 + uVar11 * 8);
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)*plVar3;
          do {
            if (plVar3 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar13 = plVar3[1];
            if (uVar13 == uVar7) {
              if (plVar3[2] == uVar7) {
                return plVar3;
              }
            }
            else {
              if ((uVar5 & uVar8) == 0) {
                uVar13 = uVar13 & uVar8;
              }
              else if (uVar5 <= uVar13) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar13 / uVar5;
                }
                uVar13 = uVar13 - uVar1 * uVar5;
              }
              if (uVar13 != uVar11) {
                return (long *)0x0;
              }
            }
            plVar3 = (long *)*plVar3;
          } while( true );
        }
      }
      return (long *)0x0;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    puVar4 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar4 * 8) = 0;
      puVar4 = (ulong *)((long)puVar4 + 1);
    } while (param_2 != puVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      puVar4 = (ulong *)plVar6[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        puVar4 = (ulong *)((ulong)puVar4 & uVar5);
      }
      else if (param_2 <= puVar4) {
        uVar7 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar7 = (ulong)puVar4 / (ulong)param_2;
        }
        puVar4 = (ulong *)((long)puVar4 - uVar7 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar4 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar6;
      while (plVar9 != (long *)0x0) {
        puVar12 = (ulong *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          puVar12 = (ulong *)((ulong)puVar12 & uVar5);
        }
        else if (param_2 <= puVar12) {
          uVar7 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar7 = (ulong)puVar12 / (ulong)param_2;
          }
          puVar12 = (ulong *)((long)puVar12 - uVar7 * (long)param_2);
        }
        plVar10 = plVar9;
        if (puVar12 != puVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)puVar12 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar12 * 8) = plVar6;
            puVar4 = puVar12;
          }
          else {
            *plVar6 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)puVar12 * 8);
            **(long **)(lVar2 + (long)puVar12 * 8) = (long)plVar9;
            plVar10 = plVar6;
          }
        }
        plVar6 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  return plVar3;
}



/* Entry: 10a20dc24; end: 10a20dcc3;  */

long * FUN_10a20dc24(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a20dcc4; end: 10a20decf;  */

undefined1  [16] FUN_10a20dcc4(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if (plVar8[2] == uVar10) {
            uVar2 = 0;
            goto LAB_10a20de9c;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[2] = *(long *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x00010a20da18(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a20de8c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a20de8c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a20de9c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a20ded0; end: 10a20e127;  */

undefined1  [16]
FUN_10a20ded0(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar5 = param_2;
  puVar14 = param_2;
  if (0 < param_5) {
    puVar1 = (undefined8 *)param_1[1];
    if (((long)(param_1[2] - (long)puVar1) >> 3) * -0x5555555555555555 < param_5) {
      uVar12 = *param_1;
      uVar6 = param_5 + ((long)((long)puVar1 - uVar12) >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar6) {
        FUN_10a20c69c();
        plVar3 = (long *)&DAT_10f62a4d8;
        FUN_109ffde64();
        if ((ulong)param_2 >> 0x3a == 0) {
          lVar7 = (long)param_2 << 6;
          __Znwm(lVar7);
          auVar18._8_8_ = param_2;
          auVar18._0_8_ = lVar7;
          return auVar18;
        }
        func_0x000109ffded8();
        plVar4 = (long *)plVar3[2];
        while (plVar4 != (long *)0x0) {
          plVar4 = (long *)*plVar4;
          __ZdlPv();
        }
        lVar7 = *plVar3;
        *plVar3 = 0;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        auVar19._8_8_ = param_2;
        auVar19._0_8_ = plVar3;
        return auVar19;
      }
      lVar7 = (long)(param_1[2] - uVar12) >> 3;
      uVar10 = lVar7 * 0x5555555555555556;
      if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
        uVar10 = uVar6;
      }
      if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar10 == 0) {
        puVar2 = (ulong *)0x0;
      }
      else {
        puVar2 = param_1;
        FUN_10a20c6b0();
      }
      puVar14 = (undefined8 *)((long)puVar2 + ((long)param_2 - uVar12));
      lVar7 = param_5 * 0x18;
      puVar5 = puVar14;
      do {
        uVar16 = param_3[1];
        uVar15 = *param_3;
        puVar5[2] = param_3[2];
        puVar5[1] = uVar16;
        *puVar5 = uVar15;
        param_3 = param_3 + 3;
        lVar7 = lVar7 + -0x18;
        puVar5 = puVar5 + 3;
      } while (lVar7 != 0);
      _memcpy(puVar14 + param_5 * 3,param_2,param_1[1] - (long)param_2);
      puVar5 = (undefined8 *)*param_1;
      uVar6 = param_1[1];
      param_1[1] = (ulong)param_2;
      uVar13 = (long)puVar14 - ((long)param_2 - (long)puVar5);
      _memcpy(uVar13);
      uVar12 = *param_1;
      *param_1 = uVar13;
      param_1[1] = (long)(puVar14 + param_5 * 3) + (uVar6 - (long)param_2);
      param_1[2] = (ulong)(puVar2 + uVar10 * 3);
      if (uVar12 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar7 = (long)puVar1 - (long)param_2;
      if ((lVar7 >> 3) * -0x5555555555555555 < param_5) {
        puVar8 = puVar1;
        puVar9 = puVar1;
        for (puVar11 = (undefined8 *)(lVar7 + (long)param_3); puVar11 != param_4;
            puVar11 = puVar11 + 3) {
          uVar16 = puVar11[1];
          uVar15 = *puVar11;
          puVar9[2] = puVar11[2];
          puVar9[1] = uVar16;
          *puVar9 = uVar15;
          puVar8 = puVar8 + 3;
          puVar9 = puVar9 + 3;
        }
        param_1[1] = (ulong)puVar8;
        if (lVar7 < 1) goto LAB_10a20e10c;
        puVar5 = puVar8 + param_5 * -3;
        for (; puVar5 < puVar1; puVar5 = puVar5 + 3) {
          uVar16 = puVar5[1];
          uVar15 = *puVar5;
          puVar8[2] = puVar5[2];
          puVar8[1] = uVar16;
          *puVar8 = uVar15;
          puVar8 = puVar8 + 3;
        }
        param_1[1] = (ulong)puVar8;
        if (puVar9 != param_2 + param_5 * 3) {
          _memmove(param_2 + param_5 * 3,param_2);
        }
      }
      else {
        puVar11 = puVar1;
        for (puVar5 = puVar1 + param_5 * -3; puVar5 < puVar1; puVar5 = puVar5 + 3) {
          uVar16 = puVar5[1];
          uVar15 = *puVar5;
          puVar11[2] = puVar5[2];
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 3;
        }
        param_1[1] = (ulong)puVar11;
        if (puVar1 != param_2 + param_5 * 3) {
          _memmove(param_2 + param_5 * 3,param_2);
        }
        lVar7 = param_5 * 0x18;
      }
      _memmove(param_2,param_3,lVar7);
      puVar5 = param_3;
    }
  }
LAB_10a20e10c:
  auVar17._8_8_ = puVar5;
  auVar17._0_8_ = puVar14;
  return auVar17;
}



/* Entry: 10a20e128; end: 10a20e13b;  */

undefined1  [16] FUN_10a20e128(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    plVar3 = (long *)plVar1[2];
    while (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      __ZdlPv();
    }
    lVar2 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  lVar2 = param_2 << 6;
  __Znwm(lVar2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10a20e13c; end: 10a20e22f;  */

undefined1  [16] FUN_10a20e13c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    plVar2 = (long *)param_1[2];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      __ZdlPv();
    }
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = param_2 << 6;
  __Znwm(lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10a20e230; end: 10a20e2f7;  */

undefined1  [16] FUN_10a20e230(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar4 = plVar2, (ulong)plVar4[7] <= *(ulong *)(param_2 + 0x18)) {
        if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar4[7]) {
          uVar3 = 0;
          goto LAB_10a20e2e0;
        }
        plVar2 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar5 = plVar4 + 1;
          goto LAB_10a20e298;
        }
      }
      plVar2 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_10a20e298:
  plVar2 = (long *)0x40;
  __Znwm();
  lVar6 = *param_3;
  plVar2[5] = param_3[1];
  plVar2[4] = lVar6;
  *param_3 = 0;
  param_3[1] = 0;
  lVar6 = param_3[2];
  lVar1 = param_3[3];
  param_3[2] = 0;
  plVar2[6] = lVar6;
  plVar2[7] = lVar1;
  FUN_10a0479ec(param_1,plVar4,plVar5,plVar2);
  uVar3 = 1;
  plVar4 = plVar2;
LAB_10a20e2e0:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = plVar4;
  return auVar7;
}



/* Entry: 10a20e2f8; end: 10a20e34f;  */

void FUN_10a20e2f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110bb23b8;
  FUN_10a1766c0();
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a20e350; end: 10a20e35f;  */

void FUN_10a20e350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb23b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a20e360; end: 10a20e37f;  */

void FUN_10a20e360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb23b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a20e380; end: 10a20e3d7;  */

long FUN_10a20e380(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  FUN_10a0617bc(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10a20e3d8; end: 10a20e3db;  */

void FUN_10a20e3d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a20e3dc; end: 10a20e433;  */

long FUN_10a20e3dc(long param_1)

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



/* Entry: 10a20e434; end: 10a20e443;  */

void FUN_10a20e434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb36c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a20e444; end: 10a20e463;  */

void FUN_10a20e444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb36c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a20e464; end: 10a20e473;  */

void FUN_10a20e464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a20e46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a20e474; end: 10a20e53b;  */

void FUN_10a20e474(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20e53c(param_3,param_4);
  FUN_10a052e3c(param_6);
  (**(code **)(*param_3 + 0xa8))(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20e53c; end: 10a20e5a3;  */

void FUN_10a20e53c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a20e53c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar4 + 0xb0))();
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)((ulong)plVar4 & 0xffffffff);
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a20e5a4; end: 10a20e66b;  */

void FUN_10a20e5a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20e53c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0xb0))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)param_2 & 0xffffffff);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20e66c; end: 10a20e733;  */

void FUN_10a20e66c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20e53c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0xb8))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)param_2 & 0xffffffff);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20e734; end: 10a20e7fb;  */

void FUN_10a20e734(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20e53c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0xc0))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)param_2 & 0xffffffff);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20e7fc; end: 10a20e8c3;  */

void FUN_10a20e7fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20e53c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 200))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)param_2 & 0xffffffff);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20e8c4; end: 10a20e937;  */

undefined8 * FUN_10a20e8c4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a20e938(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a20eb44(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a20e938; end: 10a20ea07;  */

undefined1  [16] FUN_10a20e938(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar15 = param_1;
  puVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar15 = param_2;
  }
  puVar16 = (ulong *)param_1[1];
  if (puVar16 > param_2 || param_2 == puVar16) {
    if (puVar16 <= param_2) {
LAB_10a20e9f8:
      auVar17._8_8_ = puVar7;
      auVar17._0_8_ = puVar15;
      return auVar17;
    }
    puVar15 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar16 < (ulong *)0x3) || (((ulong)puVar16 & (long)puVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar15) {
      puVar15 = (ulong *)(1L << (-LZCOUNT((long)puVar15 + -1) & 0x3fU));
    }
    if (param_2 <= puVar15) {
      param_2 = puVar15;
    }
    if (puVar16 <= param_2) goto LAB_10a20e9f8;
  }
  puVar15 = param_2;
  if (param_2 == (ulong *)0x0) {
    uVar5 = *param_1;
    *param_1 = 0;
    if (uVar5 != 0) {
      __ZdlPv();
      puVar15 = param_2;
    }
    param_1[1] = 0;
LAB_10a20eb34:
    auVar18._8_8_ = puVar15;
    auVar18._0_8_ = uVar5;
    return auVar18;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    uVar4 = (long)param_2 << 3;
    __Znwm();
    uVar5 = *param_1;
    *param_1 = uVar4;
    if (uVar5 != 0) {
      __ZdlPv();
    }
    puVar7 = (ulong *)0x0;
    param_1[1] = (ulong)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar7 * 8) = 0;
      puVar7 = (ulong *)((long)puVar7 + 1);
    } while (param_2 != puVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      puVar7 = (ulong *)plVar8[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        puVar7 = (ulong *)((ulong)puVar7 & uVar4);
      }
      else if (param_2 <= puVar7) {
        uVar14 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar14 = (ulong)puVar7 / (ulong)param_2;
        }
        puVar7 = (ulong *)((long)puVar7 - uVar14 * (long)param_2);
      }
      *(ulong **)(*param_1 + (long)puVar7 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar8;
      while (plVar12 != (long *)0x0) {
        puVar16 = (ulong *)plVar12[1];
        if (((ulong)param_2 & uVar4) == 0) {
          puVar16 = (ulong *)((ulong)puVar16 & uVar4);
        }
        else if (param_2 <= puVar16) {
          uVar14 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar14 = (ulong)puVar16 / (ulong)param_2;
          }
          puVar16 = (ulong *)((long)puVar16 - uVar14 * (long)param_2);
        }
        plVar13 = plVar12;
        if (puVar16 != puVar7) {
          uVar14 = *param_1;
          if (*(long *)(uVar14 + (long)puVar16 * 8) == 0) {
            *(long **)(uVar14 + (long)puVar16 * 8) = plVar8;
            puVar7 = puVar16;
          }
          else {
            *plVar8 = *plVar12;
            *plVar12 = **(undefined8 **)(uVar14 + (long)puVar16 * 8);
            **(long **)(uVar14 + (long)puVar16 * 8) = (long)plVar12;
            plVar13 = plVar8;
          }
        }
        plVar8 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
    goto LAB_10a20eb34;
  }
  func_0x000109ffded8();
  uVar5 = *param_2;
  uVar4 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar5 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar14 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar9 = uVar4 - 1;
    if ((uVar4 & uVar9) == 0) {
      unaff_x24 = uVar14 & uVar9;
    }
    else {
      unaff_x24 = uVar14;
      if (uVar4 <= uVar14) {
        uVar11 = 0;
        if (uVar4 != 0) {
          uVar11 = uVar14 / uVar4;
        }
        unaff_x24 = uVar14 - uVar11 * uVar4;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (puVar15 = (ulong *)*puVar10; puVar15 != (ulong *)0x0; puVar15 = (ulong *)*puVar15) {
        uVar11 = puVar15[1];
        if (uVar11 == uVar14) {
          if (puVar15[2] == uVar5) {
            uVar6 = 0;
            goto LAB_10a20ed78;
          }
        }
        else {
          if ((uVar4 & uVar9) == 0) {
            uVar11 = uVar11 & uVar9;
          }
          else if (uVar4 <= uVar11) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar11 / uVar4;
            }
            uVar11 = uVar11 - uVar3 * uVar4;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  puVar15 = (ulong *)0x20;
  __Znwm();
  *puVar15 = 0;
  puVar15[1] = uVar14;
  uVar5 = param_3[1];
  uVar9 = *param_3;
  puVar15[3] = param_3[1];
  puVar15[2] = uVar9;
  if (uVar5 != 0) {
    plVar8 = (long *)(uVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar4) {
      uVar5 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar5 = uVar5 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    FUN_10a20e938(param_1,uVar5);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar14;
    }
    else {
      unaff_x24 = uVar14;
      if (uVar4 <= uVar14) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar14 / uVar4;
        }
        unaff_x24 = uVar14 - uVar5 * uVar4;
      }
    }
  }
  uVar5 = *param_1;
  puVar7 = *(ulong **)(uVar5 + unaff_x24 * 8);
  if (puVar7 == (ulong *)0x0) {
    puVar7 = param_1 + 2;
    *puVar15 = *puVar7;
    *puVar7 = (ulong)puVar15;
    *(ulong **)(uVar5 + unaff_x24 * 8) = puVar7;
    if (*puVar15 == 0) goto LAB_10a20ed68;
    uVar5 = *(ulong *)(*puVar15 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar5 = uVar5 & uVar4 - 1;
    }
    else if (uVar4 <= uVar5) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = uVar5 / uVar4;
      }
      uVar5 = uVar5 - uVar14 * uVar4;
    }
    puVar7 = (ulong *)(*param_1 + uVar5 * 8);
  }
  else {
    *puVar15 = *puVar7;
  }
  *puVar7 = (ulong)puVar15;
LAB_10a20ed68:
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10a20ed78:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = puVar15;
  return auVar19;
}



/* Entry: 10a20ea08; end: 10a20eb43;  */

undefined1  [16] FUN_10a20ea08(long *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong unaff_x24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar6 = param_2;
  if (param_2 == (ulong *)0x0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      __ZdlPv();
      puVar6 = param_2;
    }
    param_1[1] = 0;
LAB_10a20eb34:
    auVar19._8_8_ = puVar6;
    auVar19._0_8_ = lVar5;
    return auVar19;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    puVar8 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar8 * 8) = 0;
      puVar8 = (ulong *)((long)puVar8 + 1);
    } while (param_2 != puVar8);
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      puVar8 = (ulong *)plVar10[1];
      uVar9 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar9) == 0) {
        puVar8 = (ulong *)((ulong)puVar8 & uVar9);
      }
      else if (param_2 <= puVar8) {
        uVar12 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar12 = (ulong)puVar8 / (ulong)param_2;
        }
        puVar8 = (ulong *)((long)puVar8 - uVar12 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar8 * 8) = param_1 + 2;
      plVar15 = (long *)*plVar10;
      while (plVar15 != (long *)0x0) {
        puVar17 = (ulong *)plVar15[1];
        if (((ulong)param_2 & uVar9) == 0) {
          puVar17 = (ulong *)((ulong)puVar17 & uVar9);
        }
        else if (param_2 <= puVar17) {
          uVar12 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar12 = (ulong)puVar17 / (ulong)param_2;
          }
          puVar17 = (ulong *)((long)puVar17 - uVar12 * (long)param_2);
        }
        plVar16 = plVar15;
        if (puVar17 != puVar8) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)puVar17 * 8) == 0) {
            *(long **)(lVar4 + (long)puVar17 * 8) = plVar10;
            puVar8 = puVar17;
          }
          else {
            *plVar10 = *plVar15;
            *plVar15 = **(undefined8 **)(lVar4 + (long)puVar17 * 8);
            **(long **)(lVar4 + (long)puVar17 * 8) = (long)plVar15;
            plVar16 = plVar10;
          }
        }
        plVar10 = plVar16;
        plVar15 = (long *)*plVar16;
      }
    }
    goto LAB_10a20eb34;
  }
  func_0x000109ffded8();
  uVar9 = *param_2;
  uVar12 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
  uVar12 = (uVar9 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
  uVar18 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar11 = uVar12 - 1;
    if ((uVar12 & uVar11) == 0) {
      unaff_x24 = uVar18 & uVar11;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar12 <= uVar18) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar18 / uVar12;
        }
        unaff_x24 = uVar18 - uVar14 * uVar12;
      }
    }
    puVar13 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar13; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar14 = plVar10[1];
        if (uVar14 == uVar18) {
          if (plVar10[2] == uVar9) {
            uVar7 = 0;
            goto LAB_10a20ed78;
          }
        }
        else {
          if ((uVar12 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar12 <= uVar14) {
            uVar3 = 0;
            if (uVar12 != 0) {
              uVar3 = uVar14 / uVar12;
            }
            uVar14 = uVar14 - uVar3 * uVar12;
          }
          if (uVar14 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar18;
  lVar5 = param_3[1];
  lVar4 = *param_3;
  plVar10[3] = param_3[1];
  plVar10[2] = lVar4;
  if (lVar5 != 0) {
    plVar15 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = *plVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar12) {
      uVar9 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar9 = uVar9 | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    FUN_10a20e938(param_1,uVar9);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x24 = uVar12 - 1 & uVar18;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar12 <= uVar18) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar18 / uVar12;
        }
        unaff_x24 = uVar18 - uVar9 * uVar12;
      }
    }
  }
  lVar5 = *param_1;
  plVar15 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar15 == (long *)0x0) {
    plVar15 = param_1 + 2;
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar15;
    if (*plVar10 == 0) goto LAB_10a20ed68;
    uVar9 = *(ulong *)(*plVar10 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar9 = uVar9 & uVar12 - 1;
    }
    else if (uVar12 <= uVar9) {
      uVar18 = 0;
      if (uVar12 != 0) {
        uVar18 = uVar9 / uVar12;
      }
      uVar9 = uVar9 - uVar18 * uVar12;
    }
    plVar15 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar10 = *plVar15;
  }
  *plVar15 = (long)plVar10;
LAB_10a20ed68:
  param_1[3] = param_1[3] + 1;
  uVar7 = 1;
LAB_10a20ed78:
  auVar20._8_8_ = uVar7;
  auVar20._0_8_ = plVar10;
  return auVar20;
}


