/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10addab30; end: 10addab83;  */

void FUN_10addab30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10addab84; end: 10addac13; -[LSAVideoProcessingComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10addab84(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_10addb324(param_1 + _DAT_112784670);
  _objc_storeStrong(param_1 + _DAT_112784658,0);
  func_0x00010add98b0(param_1 + _DAT_112784674,0);
  lVar3 = (long)_DAT_112784660;
  lVar2 = *(long *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  if (lVar2 != 0) {
    func_0x00010addb36c(param_1 + lVar3);
  }
  plVar1 = *(long **)(param_1 + _DAT_11278465c);
  *(undefined8 *)(param_1 + _DAT_11278465c) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010addac04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10addac14; end: 10addace3; -[LSAVideoProcessingComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10addac14(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + _DAT_11278465c) = 0;
  *(undefined8 *)(param_1 + _DAT_112784660) = 0;
  *(undefined8 *)(param_1 + _DAT_112784674) = 0;
  *(undefined4 *)(param_1 + _DAT_112784664) = 0;
  *(undefined8 *)(param_1 + _DAT_112784654) = 0;
  lVar2 = (long)_DAT_11278466c;
  *(undefined8 *)(param_1 + lVar2) = 0;
  ((undefined8 *)(param_1 + lVar2))[1] = 0;
  *(undefined8 *)(param_1 + _DAT_11278464c) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112784670);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  return;
}



/* Entry: 10addace4; end: 10addad4b;  */

void FUN_10addace4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110bb5518;
  FUN_10a23b258(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10addad4c; end: 10addaf5f;  */

long FUN_10addad4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x198) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x148);
    if (lVar3 != 0) {
      lVar1 = *(long *)(param_1 + 0x150);
      lVar2 = lVar3;
      if (lVar1 != lVar3) {
        do {
          lVar1 = lVar1 + -0x10;
          func_0x000109232dd4();
        } while (lVar1 != lVar3);
        lVar2 = *(long *)(param_1 + 0x148);
      }
      *(long *)(param_1 + 0x150) = lVar3;
      __ZdlPv(lVar2);
    }
    lStack_28 = param_1 + 0x130;
    func_0x00010928e7ec(&lStack_28);
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar2 = lVar3;
      if (lVar1 != lVar3) {
        do {
          lVar1 = lVar1 + -0x10;
          func_0x000109232594();
        } while (lVar1 != lVar3);
        lVar2 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 0x10) = lVar3;
      __ZdlPv(lVar2);
    }
  }
  return param_1;
}



/* Entry: 10addaf60; end: 10addb12f;  */

void FUN_10addaf60(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  plVar5 = param_1;
  plVar12 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  iVar4 = (int)plVar12;
  plVar12 = (long *)param_1[1];
  if (plVar12 > param_2 || param_2 == plVar12) {
    if (plVar12 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar12 <= param_2) {
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
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar12 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar6);
      }
      else if (param_2 <= plVar12) {
        uVar13 = 0;
        if (param_2 != (long *)0x0) {
          uVar13 = (ulong)plVar12 / (ulong)param_2;
        }
        plVar12 = (long *)((long)plVar12 - uVar13 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar5;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (param_2 <= plVar11) {
          uVar13 = 0;
          if (param_2 != (long *)0x0) {
            uVar13 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar13 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar12) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar11 * 8) = plVar5;
            plVar12 = plVar11;
          }
          else {
            *plVar5 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar11 * 8);
            **(long **)(lVar2 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar5;
          }
        }
        plVar5 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
    return;
  }
  func_0x000104c4f740();
  uVar13 = (ulong)iVar4;
  uVar6 = plVar5[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x24 = uVar7 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar6 <= uVar13) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar13 / uVar6;
        }
        unaff_x24 = uVar13 - uVar8 * uVar6;
      }
    }
    plVar12 = *(long **)(*plVar5 + unaff_x24 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10addb1dc;
          uVar8 = plVar12[1];
          if (uVar8 != uVar13) break;
          if (*(int *)(plVar12 + 2) == iVar4) {
            return;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (uVar6 <= uVar8) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar8 / uVar6;
          }
          uVar8 = uVar8 - uVar1 * uVar6;
        }
      } while (uVar8 == unaff_x24);
    }
  }
LAB_10addb1dc:
  plVar12 = (long *)0x28;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar13;
  lVar2 = *param_3;
  plVar12[3] = param_3[1];
  plVar12[2] = lVar2;
  plVar12[4] = param_3[2];
  if ((uVar6 == 0) || (*(float *)(plVar5 + 4) * (float)uVar6 < (float)(plVar5[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar6) {
      uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar7 = uVar7 | uVar6 << 1;
    uVar6 = (ulong)((float)(plVar5[3] + 1) / *(float *)(plVar5 + 4));
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_10addaf60(plVar5,uVar7);
    uVar6 = plVar5[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar6 <= uVar13) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar13 / uVar6;
        }
        unaff_x24 = uVar13 - uVar7 * uVar6;
      }
    }
  }
  lVar2 = *plVar5;
  plVar9 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar5 + 2;
    *plVar12 = *plVar9;
    *plVar9 = (long)plVar12;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar9;
    if (*plVar12 == 0) goto LAB_10addb2f0;
    uVar13 = *(ulong *)(*plVar12 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar13 = uVar13 & uVar6 - 1;
    }
    else if (uVar6 <= uVar13) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar13 / uVar6;
      }
      uVar13 = uVar13 - uVar7 * uVar6;
    }
    plVar9 = (long *)(*plVar5 + uVar13 * 8);
  }
  else {
    *plVar12 = *plVar9;
  }
  *plVar9 = (long)plVar12;
LAB_10addb2f0:
  plVar5[3] = plVar5[3] + 1;
  return;
}



/* Entry: 10addb130; end: 10addb323;  */

void FUN_10addb130(long *param_1,int param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar6 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10addb1dc;
          uVar6 = plVar4[1];
          if (uVar6 != uVar8) break;
          if (*(int *)(plVar4 + 2) == param_2) {
            return;
          }
        }
        if ((uVar7 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (uVar7 <= uVar6) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar6 / uVar7;
          }
          uVar6 = uVar6 - uVar1 * uVar7;
        }
      } while (uVar6 == unaff_x24);
    }
  }
LAB_10addb1dc:
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  lVar5 = *param_3;
  plVar4[3] = param_3[1];
  plVar4[2] = lVar5;
  plVar4[4] = param_3[2];
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10addaf60(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_10addb2f0;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_10addb2f0:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10addb324; end: 10addb3ab;  */

long * FUN_10addb324(long *param_1)

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



/* Entry: 10addb3ac; end: 10addb3fb;  */

void FUN_10addb3ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a1a2d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10addb3fc; end: 10addbc77; +[LSAAppleBacktraceFormatter formatBacktraceWithFrames:count:threadId:] */

/* WARNING: Removing unreachable block (ram,0x00010addb644) */
/* WARNING: Removing unreachable block (ram,0x00010addb588) */
/* WARNING: Removing unreachable block (ram,0x00010addba38) */
/* WARNING: Removing unreachable block (ram,0x00010addbae8) */
/* WARNING: Removing unreachable block (ram,0x00010addbabc) */
/* WARNING: Removing unreachable block (ram,0x00010addbbd8) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10addb3fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *******pppppppuVar8;
  long *******ppppppplVar9;
  int *piVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  ulong uVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  int *piVar16;
  uint uVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  byte *pbVar28;
  long ******pppppplStack_560;
  undefined *puStack_558;
  long *******ppppppplStack_550;
  long *******ppppppplStack_548;
  undefined1 *puStack_540;
  code *pcStack_538;
  undefined1 *puStack_530;
  code *pcStack_528;
  long *******ppppppplStack_520;
  long *******ppppppplStack_518;
  long *plStack_510;
  char *pcStack_508;
  long *******ppppppplStack_500;
  long *plStack_4f8;
  long *******ppppppplStack_4f0;
  ulong uStack_4e8;
  long *******ppppppplStack_4e0;
  long ******pppppplStack_4d8;
  long lStack_4d0;
  long ******pppppplStack_4c8;
  undefined8 *******pppppppuStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  long *******ppppppplStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 *******pppppppuStack_490;
  long ******pppppplStack_488;
  long ******pppppplStack_480;
  long alStack_90 [4];
  long lStack_70;
  
  puVar2 = PTR__mach_task_self__11034c5c8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_490 = (undefined8 *******)0x0;
  ppppppplStack_4e0 = (long *******)((ulong)ppppppplStack_4e0 & 0xffffffff00000000);
  iVar5 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_threads(iVar5,&pppppppuStack_490,&ppppppplStack_4e0);
  if (iVar5 == 0) {
    if ((int)ppppppplStack_4e0 == 0) {
      ppppppplVar14 = (long *******)0x0;
      lVar20 = 0;
    }
    else {
      uVar19 = 0;
      bVar21 = false;
      ppppppplVar14 = (long *******)0x0;
      do {
        bVar4 = *(int *)((long)pppppppuStack_490 + uVar19 * 4) == param_5;
        uVar17 = (uint)uVar19;
        if (!bVar4) {
          uVar17 = (uint)ppppppplVar14;
        }
        uVar23 = (uint)ppppppplVar14;
        if (!bVar21) {
          uVar23 = uVar17;
        }
        ppppppplVar14 = (long *******)(ulong)uVar23;
        _mach_port_deallocate(*(undefined4 *)puVar2);
        bVar21 = (bool)(bVar21 | bVar4);
        uVar19 = uVar19 + 1;
      } while (uVar19 < ((ulong)ppppppplStack_4e0 & 0xffffffff));
      lVar20 = ((ulong)ppppppplStack_4e0 & 0xffffffff) << 2;
    }
    _vm_deallocate(*(undefined4 *)puVar2,pppppppuStack_490,lVar20);
  }
  else {
    ppppppplVar14 = (long *******)0x0;
  }
  ppppppplStack_4a8 = (long *******)0x0;
  uStack_4a0 = 0;
  lStack_498 = 0;
  __ZNSt3__19to_stringEi(alStack_90,ppppppplVar14);
  plVar6 = alStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar6,0,"Crashed Thread: ",0x10);
  pppppplStack_4d8 = (long ******)plVar6[1];
  ppppppplStack_4e0 = (long *******)*plVar6;
  lStack_4d0 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  ppppppplVar25 = (long *******)&ppppppplStack_4e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar25,&DAT_10f590110,2);
  pppppplStack_488 = ppppppplVar25[1];
  pppppppuStack_490 = (undefined8 *******)*ppppppplVar25;
  pppppplStack_480 = ppppppplVar25[2];
  ppppppplVar25[1] = (long ******)0x0;
  ppppppplVar25[2] = (long ******)0x0;
  *ppppppplVar25 = (long ******)0x0;
  pppppplVar11 = pppppplStack_488;
  pppppppuVar8 = pppppppuStack_490;
  if (-1 < (long)pppppplStack_480) {
    pppppplVar11 = (long ******)((ulong)pppppplStack_480 >> 0x38);
    pppppppuVar8 = &pppppppuStack_490;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppppplStack_4a8,pppppppuVar8,pppppplVar11);
  if ((long)pppppplStack_480 < 0) {
    __ZdlPv(pppppppuStack_490);
  }
  if (lStack_4d0 < 0) {
    __ZdlPv(ppppppplStack_4e0);
  }
  __ZNSt3__19to_stringEi(alStack_90,ppppppplVar14);
  plVar6 = alStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar6,0,&UNK_10f6a916a,7);
  pppppplStack_4d8 = (long ******)plVar6[1];
  ppppppplStack_4e0 = (long *******)*plVar6;
  lStack_4d0 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  ppppppplVar25 = (long *******)&ppppppplStack_4e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar25,&UNK_10f6ae0f9,10);
  pppppplStack_488 = ppppppplVar25[1];
  pppppppuStack_490 = (undefined8 *******)*ppppppplVar25;
  pppppplStack_480 = ppppppplVar25[2];
  ppppppplVar25[1] = (long ******)0x0;
  ppppppplVar25[2] = (long ******)0x0;
  *ppppppplVar25 = (long ******)0x0;
  pppppplVar11 = pppppplStack_488;
  pppppppuVar8 = pppppppuStack_490;
  if (-1 < (long)pppppplStack_480) {
    pppppplVar11 = (long ******)((ulong)pppppplStack_480 >> 0x38);
    pppppppuVar8 = &pppppppuStack_490;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppppplStack_4a8,pppppppuVar8,pppppplVar11);
  if ((long)pppppplStack_480 < 0) {
    __ZdlPv(pppppppuStack_490);
  }
  if (lStack_4d0 < 0) {
    __ZdlPv(ppppppplStack_4e0);
  }
  ppppppplVar26 = (long *******)0x0;
  ppppppplVar25 = (long *******)0x0;
  if (param_4 != 0) {
    ppppppplVar18 = (long *******)0x0;
    lVar20 = 0;
    do {
      plVar22 = *(long **)(param_3 + lVar20 * 8);
      pppppppuStack_4c0 = (undefined8 *******)0x0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      pppppplStack_4d8 = (long ******)0x0;
      ppppppplStack_4e0 = (long *******)0x0;
      pppppplStack_4c8 = (long ******)0x0;
      lStack_4d0 = 0;
      plVar6 = plVar22;
      _dladdr(plVar22,&ppppppplStack_4e0);
      ppppppplVar14 = ppppppplStack_4e0;
      if ((int)plVar6 == 0) {
        ppppppplVar15 = (long *******)0x0;
        ppppppplVar14 = (long *******)&DAT_10f4944a3;
      }
      else {
        if (ppppppplStack_4e0 == (long *******)0x0) {
          ppppppplVar14 = (long *******)&DAT_10f4944a3;
        }
        else {
          ppppppplVar15 = ppppppplStack_4e0;
          _strrchr(ppppppplStack_4e0,0x2f);
          if (ppppppplVar15 != (long *******)0x0) {
            ppppppplVar14 = (long *******)((long)ppppppplVar15 + 1);
          }
        }
        pppppplVar11 = pppppplStack_4d8;
        ppppppplVar9 = ppppppplVar25;
        ppppppplVar27 = ppppppplVar26;
        ppppppplVar15 = ppppppplVar26;
        if (pppppplStack_4d8 != (long ******)0x0) {
          do {
            if (ppppppplVar15 == ppppppplVar25) {
              if (ppppppplVar25 < ppppppplVar18) {
                ppppppplVar9 = ppppppplVar25 + 1;
                *ppppppplVar25 = pppppplStack_4d8;
                break;
              }
              lVar24 = (long)ppppppplVar25 - (long)ppppppplVar26;
              uVar19 = (lVar24 >> 3) + 1;
              if (uVar19 >> 0x3d == 0) {
                uVar13 = (long)ppppppplVar18 - (long)ppppppplVar26 >> 2;
                if (uVar13 <= uVar19) {
                  uVar13 = uVar19;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)ppppppplVar18 - (long)ppppppplVar26)) {
                  uVar13 = 0x1fffffffffffffff;
                }
                if (uVar13 >> 0x3d == 0) {
                  lVar7 = uVar13 << 3;
                  __Znwm();
                  puVar1 = (undefined8 *)(lVar7 + lVar24);
                  ppppppplVar18 = (long *******)(lVar7 + uVar13 * 8);
                  ppppppplVar27 = (long *******)(puVar1 + -(lVar24 >> 3));
                  ppppppplVar9 = (long *******)(puVar1 + 1);
                  *puVar1 = pppppplVar11;
                  _memcpy(ppppppplVar27,ppppppplVar26,lVar24);
                  if (ppppppplVar26 != (long *******)0x0) {
                    __ZdlPv(ppppppplVar26);
                  }
                  break;
                }
                func_0x000104c4f740();
              }
              else {
                FUN_10addbc78();
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10addbb88);
              (*pcVar3)();
            }
            pppppplVar12 = *ppppppplVar15;
            ppppppplVar15 = ppppppplVar15 + 1;
          } while (pppppplVar12 != pppppplStack_4d8);
        }
        ppppppplVar25 = ppppppplVar9;
        ppppppplVar26 = ppppppplVar27;
        if (lStack_4d0 == 0 || pppppplStack_4c8 == (long ******)0x0) {
          if (pppppplStack_4d8 == (long ******)0x0) {
            ppppppplVar15 = (long *******)0x0;
            goto LAB_10addb7c4;
          }
          ppppppplStack_520 = (long *******)pppppplStack_4d8;
          _snprintf(&pppppppuStack_490,0x20,&UNK_10f6ae104);
          func_0x000107c2c4dc(&pppppppuStack_4c0,&pppppppuStack_490);
          pppppplVar11 = pppppplStack_4d8;
        }
        else {
          func_0x000107c2c4dc(&pppppppuStack_4c0);
          pppppplVar11 = pppppplStack_4c8;
        }
        ppppppplVar15 = (long *******)((long)plVar22 - (long)pppppplVar11);
      }
LAB_10addb7c4:
      ppppppplStack_520 = (long *******)lVar20;
      ppppppplStack_518 = ppppppplVar14;
      plStack_510 = plVar22;
      _snprintf(&pppppppuStack_490,0x100,&UNK_10f6ae10d);
      pppppppuVar8 = &pppppppuStack_490;
      _strlen(pppppppuVar8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppplStack_4a8,&pppppppuStack_490,pppppppuVar8);
      uVar19 = uStack_4b8;
      pppppppuVar8 = pppppppuStack_4c0;
      if (-1 < (long)uStack_4b0) {
        uVar19 = uStack_4b0 >> 0x38;
        pppppppuVar8 = &pppppppuStack_4c0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppplStack_4a8,pppppppuVar8,uVar19);
      ppppppplStack_520 = ppppppplVar15;
      _snprintf(alStack_90,0x20,&UNK_10f6ae122);
      plVar6 = alStack_90;
      _strlen(plVar6);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppplStack_4a8,alStack_90,plVar6);
      if ((long)uStack_4b0 < 0) {
        __ZdlPv(pppppppuStack_4c0);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != param_4);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppppplStack_4a8,"\nBinary Images:\n",0x10);
  ppppppplVar18 = ppppppplVar26;
  ppppppplStack_4f0 = ppppppplVar25;
  if (ppppppplVar26 != ppppppplVar25) {
    do {
      ppppppplVar25 = (long *******)*ppppppplVar18;
      ppppppplVar14 = (long *******)&ppppppplStack_4e0;
      func_0x000107c31940(ppppppplVar14,&UNK_10f6ae12a);
      uVar17 = (uint)ppppppplVar14;
      alStack_90[0] = 0;
      alStack_90[1] = 0;
      alStack_90[2] = 0;
      __dyld_image_count();
      ppppppplVar14 = ppppppplVar25;
      if (uVar17 != 0) {
        ppppppplVar15 = (long *******)0x0;
LAB_10addb8d0:
        ppppppplVar9 = ppppppplVar15;
        __dyld_get_image_header();
        if (ppppppplVar9 != ppppppplVar25) goto code_r0x00010addb8e4;
        __dyld_get_image_name();
        ppppppplVar14 = (long *******)"";
        if (ppppppplVar15 != (long *******)0x0) {
          ppppppplVar14 = ppppppplVar15;
        }
        func_0x000107c2c4dc(alStack_90,ppppppplVar14);
        uVar17 = *(uint *)(ppppppplVar9 + 2);
        if (uVar17 == 0) {
          uStack_4e8 = 0;
        }
        else {
          uVar23 = 0;
          uStack_4e8 = 0;
          lVar20 = 0x20;
          if (*(int *)ppppppplVar9 != -0x30051202 && *(int *)ppppppplVar9 != -0x1120531) {
            lVar20 = 0x1c;
          }
          piVar16 = (int *)((long)ppppppplVar9 + lVar20);
          do {
            iVar5 = *piVar16;
            if (iVar5 == 1) {
              piVar10 = piVar16 + 2;
              _strcmp(piVar10,&UNK_10f3b2cbe);
              if ((int)piVar10 == 0) {
                uStack_4e8 = (ulong)(uint)piVar16[7];
              }
            }
            else if (iVar5 == 0x19) {
              piVar10 = piVar16 + 2;
              _strcmp(piVar10,&UNK_10f3b2cbe);
              if ((int)piVar10 == 0) {
                uStack_4e8 = *(ulong *)(piVar16 + 8);
              }
            }
            else if (iVar5 == 0x1b) {
              lVar20 = 0;
              pbVar28 = (byte *)(piVar16 + 2);
              do {
                ppppppplStack_520 = (long *******)(ulong)*pbVar28;
                _snprintf((long)&pppppppuStack_490 + lVar20,3,&DAT_10f3212df);
                lVar20 = lVar20 + 2;
                pbVar28 = pbVar28 + 1;
              } while (lVar20 != 0x20);
              func_0x000107c2c4d8(&ppppppplStack_4e0,&pppppppuStack_490,0x20);
              uVar17 = *(uint *)(ppppppplVar9 + 2);
            }
            piVar16 = (int *)((long)piVar16 + (ulong)(uint)piVar16[1]);
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar17);
        }
        uVar19 = uStack_4e8;
        if (uStack_4e8 < 2) {
          uVar19 = 1;
        }
        ppppppplVar14 = (long *******)((long)ppppppplVar25 + (uVar19 - 1));
      }
LAB_10addba24:
      plVar6 = alStack_90;
      plVar22 = plVar6;
      _strrchr(plVar6,0x2f);
      if (plVar22 != (long *)0x0) {
        plVar6 = (long *)((long)plVar22 + 1);
      }
      ppppppplStack_500 = ppppppplStack_4e0;
      if (-1 < lStack_4d0) {
        ppppppplStack_500 = (long *******)&ppppppplStack_4e0;
      }
      plStack_4f8 = alStack_90;
      pcStack_508 = "arm64";
      ppppppplStack_520 = ppppppplVar25;
      ppppppplStack_518 = ppppppplVar14;
      plStack_510 = plVar6;
      _snprintf(&pppppppuStack_490,0x400,&UNK_10f6ae14b);
      pppppppuVar8 = &pppppppuStack_490;
      _strlen(pppppppuVar8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppplStack_4a8,&pppppppuStack_490,pppppppuVar8);
      if (lStack_4d0 < 0) {
        __ZdlPv(ppppppplStack_4e0);
      }
      ppppppplVar14 = ppppppplVar18 + 1;
      ppppppplVar18 = ppppppplVar14;
    } while (ppppppplVar14 != ppppppplStack_4f0);
  }
  ppppppplVar25 = (long *******)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  ppppppplVar18 = ppppppplVar25;
  if (ppppppplVar26 != (long *******)0x0) {
    __ZdlPv();
    ppppppplVar18 = ppppppplVar26;
  }
  if (lStack_498 < 0) {
    ppppppplVar18 = ppppppplStack_4a8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppppplVar25);
    return ppppppplVar25;
  }
  ___stack_chk_fail();
  if ((long)pppppplStack_480 < 0) {
    __ZdlPv(pppppppuStack_490);
  }
  if (lStack_4d0 < 0) {
    __ZdlPv(ppppppplStack_4e0);
  }
  if (lStack_498 < 0) {
    __ZdlPv(ppppppplStack_4a8);
  }
  __Unwind_Resume(ppppppplVar18);
  pcStack_528 = FUN_10addbc78;
  pppppplVar11 = (long ******)&DAT_10f62a4d8;
  puStack_530 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  ppppppplVar25 = &pppppplStack_560;
  pcStack_538 = FUN_10addbc8c;
  puStack_558 = PTR_PTR_1127014b8;
  pppppplStack_560 = pppppplVar11;
  ppppppplStack_550 = ppppppplVar18;
  ppppppplStack_548 = ppppppplVar14;
  puStack_540 = (undefined1 *)&puStack_530;
  _objc_msgSendSuper2(&pppppplStack_560,PTR_s_init_1125d9248);
  if (ppppppplVar25 != (long *******)0x0) {
    pppppplVar11 = (long ******)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    pppppplVar12 = ppppppplVar25[1];
    ppppppplVar25[1] = pppppplVar11;
    _objc_release(pppppplVar12);
  }
  return ppppppplVar25;
code_r0x00010addb8e4:
  uVar23 = (int)ppppppplVar15 + 1;
  ppppppplVar15 = (long *******)(ulong)uVar23;
  if (uVar17 == uVar23) goto LAB_10addba24;
  goto LAB_10addb8d0;
}



/* Entry: 10addbc78; end: 10addbc8b;  */

undefined1 * FUN_10addbc78(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  ppuVar2 = &puStack_40;
  puStack_38 = PTR_PTR_1127014b8;
  puStack_40 = puVar1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined **)((long)ppuVar2 + 8) = puVar1;
    _objc_release(uVar3);
  }
  return (undefined1 *)ppuVar2;
}



/* Entry: 10addbc8c; end: 10addbcef; -[LSACompletionListInvoker init] */

undefined1 * FUN_10addbc8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127014b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10addbcf0; end: 10addbe03; -[LSACompletionListInvoker addCompletion:forKey:] */

undefined * FUN_10addbcf0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010bffc4a0();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_4);
    }
    if (param_3 != 0) {
      lVar2 = param_3;
      func_0x00010bf51e00(param_3);
      func_0x00010befa120(puVar1,param_2,lVar2);
      _objc_release(lVar2);
    }
    puVar3 = puVar1;
    func_0x00010bf529e0(puVar1);
    _objc_release(puVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10addbe04; end: 10addbf97; -[LSACompletionListInvoker runCompletionsForKey:withMapper:] */

long FUN_10addbe04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (param_4 != 0) {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    param_1 = 0;
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  return *(long *)(param_3 + 8);
}



/* Entry: 10addbf98; end: 10addbf9f; -[LSACompletionListInvoker completionMap] */

undefined8 FUN_10addbf98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10addbfa0; end: 10addbfcf; -[LSACompletionListInvoker setCompletionMap:] */

void FUN_10addbfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10addbfd0; end: 10addbfdb; -[LSACompletionListInvoker .cxx_destruct] */

void FUN_10addbfd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10addbfdc; end: 10addc25f; +[LSAExceptionHandler runtimeExceptionBlock:info:] */

void FUN_10addbfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c142e20(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10addc260; end: 10addc3bf;  */

void FUN_10addc260(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *param_1;
  *param_1 = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  (**(code **)(*param_2 + 0x10))(param_2);
  func_0x00010c25da80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_10ad04458(auStack_48,*(ulong *)(*(long *)(*param_2 + -8) + 8) & 0x7fffffffffffffff);
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*param_1);
  _objc_release(puVar1);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10addc3c0; end: 10addc463;  */

void FUN_10addc3c0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de210;
  if (*(char *)(param_2 + 0x118) == '\x01') {
    _pthread_self();
    _pthread_mach_thread_np();
    func_0x00010bfb58e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10addc464; end: 10addc66f; +[LSAExceptionHandler runtimeJSExceptionBlock:info:] */

void FUN_10addc464(undefined8 param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_3;
  plVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  (*(code *)param_3[2])(param_3);
  puVar7 = (undefined *)0x0;
  do {
    _objc_release(param_4);
    plVar1 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
    if (param_2 != 1) {
      _objc_release(param_4);
      _objc_release(param_3);
      __Unwind_Resume(plVar1);
      _objc_retain(plVar5);
      _objc_retain(plVar3);
      (*(code *)plVar5[2])(plVar5);
      _objc_release(plVar3);
      _objc_release(plVar5);
      puVar7 = (undefined *)0x0;
      goto _objc_autoreleaseReturnValue;
    }
    ___cxa_begin_catch();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    (**(code **)(*plVar1 + 0x10))();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    plVar1 = param_4;
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = param_4;
    func_0x00010bf98940();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(plVar1);
    _objc_release(puVar2);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 10addc670; end: 10addcadf; +[LSAExceptionHandler runtimeCancelationExceptionBlock:info:] */

void FUN_10addc670(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10addcae0; end: 10addcb53;  */

long FUN_10addcae0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0 && param_2 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
    if ((param_1 != 0) && (param_2 != 0)) {
      lVar1 = param_1;
      func_0x00010c071ae0(param_1);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10addcb54; end: 10addcba3;  */

ulong FUN_10addcb54(ulong *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if (1 < (int)param_2) {
    lVar2 = (ulong)param_2 - 1;
    do {
      param_1 = param_1 + 1;
      uVar1 = *param_1 | uVar1 << 0x20;
      uVar1 = ~uVar1 + uVar1 * 0x40000;
      uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
      uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
      uVar1 = uVar1 ^ uVar1 >> 0x16;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return uVar1;
}



/* Entry: 10addcba4; end: 10addcd6b;  */

undefined1 * FUN_10addcba4(undefined8 *param_1,undefined1 *param_2,undefined ****param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined ****ppppuVar6;
  undefined ***pppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_169;
  undefined **ppuStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  code *pcStack_110;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [16];
  int iStack_c8;
  long lStack_c0;
  int iStack_b4;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  ppppuVar6 = param_3;
  FUN_10ad55ab4(param_1);
  while( true ) {
    iVar5 = (int)ppppuVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((iVar5 == 0) || (iVar5 != 1)) {
      __Unwind_Resume(puVar4);
      func_0x000104bd46a0();
      if ((uint)puVar4 < 0x17) {
        return (undefined1 *)(ulong)*(uint *)(&UNK_10e515628 + ((ulong)puVar4 & 0xffffffff) * 4);
      }
      return (undefined1 *)0x0;
    }
    ___cxa_begin_catch();
    if (*(int *)(puVar4 + 0x120) != -0x1a1b) break;
    FUN_10ad51d24(auStack_d8,param_2,1,0xffffffff,param_3);
    lVar1 = lStack_c0;
    iVar5 = iStack_c8;
    param_3 = (undefined ****)(long)iStack_c8;
    iVar3 = iStack_b4;
    FUN_10addcd6c();
    if (lVar1 == (long)iVar5 * (long)iVar3) {
      ___cxa_rethrow();
      goto LAB_10addcd14;
    }
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_160 = 0;
    ppuStack_168 = &PTR_FUN_110bab9a0;
    uStack_e0 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0xffffffff00000000;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_120 = 0x109d138c8;
    ppuStack_118 = &PTR_DAT_110b3e838;
    pcStack_110 = FUN_10a1b2664;
    FUN_10a1b2f9c(&ppuStack_168,auStack_d8,0);
    ppppuVar6 = &pppuStack_188;
    pppuStack_188 = &ppuStack_168;
    FUN_10addcd8c(&uStack_180,&uStack_169);
    param_1[1] = uStack_178;
    *param_1 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    FUN_10addce30(&uStack_180);
    FUN_10a1b2b9c(&ppuStack_168);
    puVar4 = auStack_d8;
    FUN_10a1b2b9c();
    ___cxa_end_catch();
  }
  ___cxa_rethrow();
LAB_10addcd14:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10addcd18);
  (*pcVar2)();
}



/* Entry: 10addcd6c; end: 10addcd8b;  */

undefined4 FUN_10addcd6c(uint param_1)

{
  if (param_1 < 0x17) {
    return *(undefined4 *)(&UNK_10e515628 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 10addcd8c; end: 10addcde3;  */

void FUN_10addcd8c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10addcde4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10addcde4; end: 10addce2f;  */

undefined8 * FUN_10addcde4(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0f28;
  FUN_10a316140(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10addce30; end: 10addce87;  */

long FUN_10addce30(long param_1)

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



/* Entry: 10addce88; end: 10addcedb; +[LSAQueuePerformer mainQueuePerformer] */

void FUN_10addce88(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137ed360 != -1) {
    func_0x000107c27d9c(0x1137ed360,&PTR___NSConcreteGlobalBlock_110c75668);
  }
  uVar1 = uRam00000001137ed358;
  _objc_retain(uRam00000001137ed358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10addcedc; end: 10addcf0b;  */

void FUN_10addcedc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126de0d0;
  _objc_alloc();
  func_0x00010c027f20();
  uVar1 = puRam00000001137ed358;
  puRam00000001137ed358 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10addcf0c; end: 10addcf9b; -[LSAQueuePerformer initWithMainQueue] */

undefined1 * FUN_10addcf0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_1127014c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar1;
    _objc_release(uVar3);
    *(undefined2 *)((long)puVar2 + 0x10) = 0x101;
    uVar3 = 0;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = uVar3;
    _objc_release(uVar4);
    *(undefined2 *)((long)puVar2 + 0x20) = 0x101;
    *(undefined1 *)((long)puVar2 + 0x38) = 1;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10addcf9c; end: 10addcfa3; -[LSAQueuePerformer initWithLabel:qualityOfService:] */

void FUN_10addcf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c021470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLabel_qualityOfService_w_1125e5f00,param_3,param_4,0);
  return;
}



/* Entry: 10addcfa4; end: 10addd1e3; -[LSAQueuePerformer initWithLabel:qualityOfService:wrappingExecutionBlock:] */

undefined1 *
FUN_10addcfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1127014c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4 & 0xffffffff;
    _dispatch_get_global_queue(uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_queue_create_with_target_V2(param_3,uVar3,uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar5);
    lVar7 = *(long *)((long)puVar1 + 0x30);
    _objc_retain(lVar7);
    if (lRam00000001137ed370 != -1) {
      func_0x000107c27d9c(0x1137ed370,&PTR___NSConcreteGlobalBlock_110c756d8);
    }
    _dispatch_semaphore_wait(uRam00000001137ed368,0xffffffffffffffff);
    lVar8 = lVar7;
    _dispatch_queue_get_specific(lVar7,&PTR____CFConstantStringClassReference_110f2e918);
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      lVar8 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
      lVar4 = lVar8;
      _CFUUIDCreate(lVar8);
      _CFUUIDCreateString(lVar8,lVar4);
      _CFRelease(lVar4);
      _objc_retain(lVar8);
      _dispatch_queue_set_specific
                (lVar7,&PTR____CFConstantStringClassReference_110f2e918,lVar8,FUN_10addde3c);
    }
    _dispatch_semaphore_signal(uRam00000001137ed368);
    _objc_release(lVar7);
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = lVar8;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
    uVar5 = 0;
    _dispatch_semaphore_create();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    _objc_release(uVar6);
    *(undefined2 *)((long)puVar1 + 0x20) = 0x101;
    uVar5 = param_5;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10addd1e4; end: 10addd27f; -[LSAQueuePerformer _makeDispatchBlock:] */

void FUN_10addd1e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_110c75688;
  }
  else {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x10addd284;
    puStack_38 = &UNK_1107d0af0;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    _objc_retainBlock(&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10addd280; end: 10addd2ef;  */

void FUN_10addd280(void)

{
  return;
}



/* Entry: 10addd2f0; end: 10addd38f; -[LSAQueuePerformer invalidate] */

void FUN_10addd2f0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010c06fc80();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 10addd390; end: 10addd397; -[LSAQueuePerformer setShouldCatchExceptions:] */

void FUN_10addd390(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10addd398; end: 10addd39f; -[LSAQueuePerformer setShouldCatchLensJSExceptions:] */

void FUN_10addd398(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10addd3a0; end: 10addd3db; -[LSAQueuePerformer perform:] */

void FUN_10addd3a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be5b8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d8c(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10addd3dc; end: 10addd3df; -[LSAQueuePerformer performV2:] */

void FUN_10addd3dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_perform__11261ba10);
  return;
}



/* Entry: 10addd3e0; end: 10addd483; -[LSAQueuePerformer perform:after:] */

void FUN_10addd3e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010be5b8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d84(uVar1,uVar2,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10addd484; end: 10addd4f7; -[LSAQueuePerformer performImmediatelyIfCurrentPerformer:] */

void FUN_10addd484(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c06fc80();
  uVar1 = (uint)uVar2 ^ 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010c0f7fc0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10addd4f8; end: 10addd5bb; -[LSAQueuePerformer performAndWait:] */

void FUN_10addd4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (lVar1 = param_1, func_0x00010c06fc80(), (int)lVar1 != 0)) {
    func_0x00010be5b8e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be5b8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27da4(uVar2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10addd5bc; end: 10addd657; -[LSAQueuePerformer performAndWaitWithSemaphore:] */

void FUN_10addd5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10addd658;
  puStack_48 = &UNK_1107d0af0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x18),0xffffffffffffffff);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10addd658; end: 10addd6b7;  */

void FUN_10addd658(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be5b8e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 10addd6b8; end: 10addd7cb; -[LSAQueuePerformer performUnsafeBlockWithInfo:block:completion:] */

void FUN_10addd6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10addd7cc;
  puStack_58 = &UNK_110c756a8;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10addd7cc; end: 10addd837;  */

void FUN_10addd7cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010be5b8e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27cf20(uVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10addd838; end: 10addd83b; -[LSAQueuePerformer performUnsafeBlockV2WithInfo:block:completion:] */

void FUN_10addd838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_performUnsafeBlockWithInfo_block_11261be88);
  return;
}



/* Entry: 10addd83c; end: 10addd94f; -[LSAQueuePerformer performUnsafeBlockImmediatelyIfCurrentPerformerWithInfo:block:completion:] */

void FUN_10addd83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10addd950;
  puStack_58 = &UNK_110c756a8;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f88c0(param_1,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10addd950; end: 10addd95f;  */

void FUN_10addd950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_tryToExecuteUnsafeBlock_blockInf_11267cdf0,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10addd960; end: 10adddb1f; -[LSAQueuePerformer performUnsafeBlockAndWaitWithInfo:block:completion:] */

void FUN_10addd960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10adddb20;
    puStack_78 = &UNK_110c756a8;
    puVar1 = &uStack_60;
    lStack_70 = param_1;
    _objc_retain(param_4);
    puVar2 = &uStack_68;
    uStack_60 = param_4;
    _objc_retain(param_3);
    puVar3 = &uStack_58;
    uStack_68 = param_3;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c0f8240(param_1,param_2,&puStack_90);
  }
  else {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10adddb8c;
    puStack_b8 = &UNK_110c756a8;
    puVar1 = &uStack_a0;
    lStack_b0 = param_1;
    _objc_retain(param_4);
    puVar2 = &uStack_a8;
    uStack_a0 = param_4;
    _objc_retain(param_3);
    puVar3 = &uStack_98;
    uStack_a8 = param_3;
    _objc_retain(param_5);
    uStack_98 = param_5;
    func_0x00010c0f8260(param_1,param_2,&puStack_d0);
  }
  _objc_release(*puVar3);
  _objc_release(*puVar2);
  _objc_release(*puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adddb20; end: 10adddb8b;  */

void FUN_10adddb20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010be5b8e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27cf20(uVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adddb8c; end: 10adddbf7;  */

void FUN_10adddb8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010be5b8e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27cf20(uVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10adddbf8; end: 10adddc43; -[LSAQueuePerformer isCurrentPerformer] */

undefined * FUN_10adddbf8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
                    /* WARNING: Could not recover jumptable at 0x00010c077490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSThread_1126b47e0,PTR_s_isMainThread_1125fb730);
    return puVar2;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2e918;
  _dispatch_get_specific(&PTR____CFConstantStringClassReference_110f2e918);
  return (undefined *)(ulong)(ppuVar1 == *(undefined ***)(param_1 + 8));
}



/* Entry: 10adddc44; end: 10adddd63; -[LSAQueuePerformer tryToExecuteUnsafeBlock:blockInfo:completion:] */

void FUN_10adddc44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126db568;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010c142e40(PTR_PTR_1126db568);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c142e60(PTR_PTR_1126db568);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
    (**(code **)(param_3 + 0x10))(param_3);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adddd64; end: 10adddd6b; -[LSAQueuePerformer queue] */

undefined8 FUN_10adddd64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10adddd6c; end: 10adddd73; -[LSAQueuePerformer isValid] */

undefined1 FUN_10adddd6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10adddd74; end: 10adddd8b; -[LSAQueuePerformer cancelationDelegate] */

void FUN_10adddd74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adddd8c; end: 10adddd97; -[LSAQueuePerformer setCancelationDelegate:] */

void FUN_10adddd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10adddd98; end: 10addddaf; -[LSAQueuePerformer delegate] */

void FUN_10adddd98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10addddb0; end: 10addddbb; -[LSAQueuePerformer setDelegate:] */

void FUN_10addddb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10addddbc; end: 10addde13; -[LSAQueuePerformer .cxx_destruct] */

void FUN_10addddbc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10addde14; end: 10addde3b;  */

void FUN_10addde14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  _dispatch_semaphore_create();
  uVar1 = uRam00000001137ed368;
  uRam00000001137ed368 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10addde3c; end: 10addde3f;  */

void FUN_10addde3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)();
  return;
}



/* Entry: 10addde40; end: 10addde8f;  */

long FUN_10addde40(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 10addde90; end: 10adddff3;  */

void FUN_10addde90(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  ppuVar6 = &puStack_70;
  plVar5 = (long *)0x30;
  __Znwm();
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c75798;
  plStack_50 = plVar5 + 3;
  lVar8 = *param_2;
  plVar5[4] = param_2[1];
  plVar5[3] = lVar8;
  plVar5[5] = param_2[2];
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc6000000;
  pcStack_60 = FUN_10adddff4;
  puStack_58 = &UNK_110c75740;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_48 = plVar5;
  _objc_retainBlock(&puStack_70);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar7 = PTR_PTR_1126db570;
  func_0x00010c12fd80(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9160(uVar9);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  do {
    lVar8 = *plVar10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10adddff4; end: 10adde03b;  */

void FUN_10adddff4(long param_1)

{
  undefined **ppuVar1;
  long extraout_x8;
  undefined *puVar2;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)(*(undefined8 *)(param_1 + 0x20));
  puVar2 = *ppuVar1;
  *ppuVar1 = *(undefined **)(extraout_x8 + 0x10);
  FUN_109d1aecc(extraout_x8);
  *ppuVar1 = puVar2;
  return;
}



/* Entry: 10adde03c; end: 10adde063;  */

void FUN_10adde03c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
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
  return;
}



/* Entry: 10adde064; end: 10adde0bb;  */

void FUN_10adde064(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
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



/* Entry: 10adde0bc; end: 10adde127;  */

void FUN_10adde0bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  _objc_retain();
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_FUN_110c75708;
  *puVar1 = &PTR_DAT_110c757e8;
  puVar1[4] = puVar2;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10adde128; end: 10adde137;  */

void FUN_10adde128(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adde138; end: 10adde157;  */

void FUN_10adde138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75798;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adde158; end: 10adde16f;  */

void FUN_10adde158(void)

{
  return;
}



/* Entry: 10adde170; end: 10adde18f;  */

void FUN_10adde170(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c757e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adde190; end: 10adde19f;  */

void FUN_10adde190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adde198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10adde1a0; end: 10adde1e7; -[LSATrackerAvailability initWithTrackingRequirements:] */

void FUN_10adde1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127014c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10adde1e8; end: 10adde20b; +[LSATrackerAvailability all] */

void FUN_10adde1e8(void)

{
  _objc_alloc(PTR_PTR_1126dd060);
  func_0x00010c055040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde20c; end: 10adde22f; +[LSATrackerAvailability allExceptFace] */

void FUN_10adde20c(void)

{
  _objc_alloc(PTR_PTR_1126dd060);
  func_0x00010c055040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde230; end: 10adde253; +[LSATrackerAvailability none] */

void FUN_10adde230(void)

{
  _objc_alloc(PTR_PTR_1126dd060);
  func_0x00010c055040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde254; end: 10adde277; +[LSATrackerAvailability deviceMotionOnly] */

void FUN_10adde254(void)

{
  _objc_alloc(PTR_PTR_1126dd060);
  func_0x00010c055040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde278; end: 10adde27f; -[LSATrackerAvailability availableTrackers] */

undefined8 FUN_10adde278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adde280; end: 10adde31b; -[LSAUnsafeBlockInfo initWithErrorDomain:errorCode:] */

undefined1 *
FUN_10adde280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127014d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adde31c; end: 10adde353; +[LSAUnsafeBlockInfo componentManagerErrorWithCodeCode:] */

void FUN_10adde31c(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde354; end: 10adde38b; +[LSAUnsafeBlockInfo audioProcessingComponentErrorWithCode:] */

void FUN_10adde354(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde38c; end: 10adde3c3; +[LSAUnsafeBlockInfo bitmojiComponentErrorWithCode:] */

void FUN_10adde38c(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde3c4; end: 10adde3fb; +[LSAUnsafeBlockInfo lensComponentErrorWithCode:] */

void FUN_10adde3c4(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde3fc; end: 10adde433; +[LSAUnsafeBlockInfo suspendableComponentErrorWithCode:] */

void FUN_10adde3fc(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde434; end: 10adde46b; +[LSAUnsafeBlockInfo externalImageComponentErrorWithCode:] */

void FUN_10adde434(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde46c; end: 10adde4a3; +[LSAUnsafeBlockInfo freezeFrameComponentErrorWithCode:] */

void FUN_10adde46c(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde4a4; end: 10adde4db; +[LSAUnsafeBlockInfo presetsComponentErrorWithCode:] */

void FUN_10adde4a4(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde4dc; end: 10adde513; +[LSAUnsafeBlockInfo remoteAssetsComponentErrorWithCode:] */

void FUN_10adde4dc(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde514; end: 10adde54b; +[LSAUnsafeBlockInfo touchProcessingComponentErrorWithCode:] */

void FUN_10adde514(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde54c; end: 10adde583; +[LSAUnsafeBlockInfo trackingComponentErrorWithCode:] */

void FUN_10adde54c(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde584; end: 10adde5bb; +[LSAUnsafeBlockInfo videoProcessingComponentErrorWithCode:] */

void FUN_10adde584(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde5bc; end: 10adde5f3; +[LSAUnsafeBlockInfo geoDataComponentErrorWithCode:] */

void FUN_10adde5bc(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde5f4; end: 10adde62b; +[LSAUnsafeBlockInfo uriServiceComponentErrorWithCode:] */

void FUN_10adde5f4(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde62c; end: 10adde663; +[LSAUnsafeBlockInfo serializationComponentErrorWithCode:] */

void FUN_10adde62c(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde664; end: 10adde69b; +[LSAUnsafeBlockInfo connectedLensComponentErrorWithCode:] */

void FUN_10adde664(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde69c; end: 10adde6d3; +[LSAUnsafeBlockInfo externalStreamComponentErrorWithCode:] */

void FUN_10adde69c(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


