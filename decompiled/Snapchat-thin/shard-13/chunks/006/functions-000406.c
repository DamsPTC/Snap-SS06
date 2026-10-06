/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9305a4; end: 10a9305c7;  */

long FUN_10a9305a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  lVar4 = 3;
  FUN_10a052ee0(3,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a9305c8; end: 10a930603;  */

long FUN_10a9305c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a930604; end: 10a930897;  */

void FUN_10a930604(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  float *in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a930898(param_5);
  FUN_10a1f7d54(&plStack_78,param_2,param_4);
  plVar17 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
    goto LAB_10a93085c;
  }
  fVar23 = (float)*(double *)(param_4 + 0x28);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x28))) {
    fVar23 = 0.0;
  }
  FUN_10a1f7d54(&plStack_88,param_2,param_4 + 0x30);
  FUN_10a9308bc(&plStack_68,*plStack_78,plStack_78[1],plVar17);
  if (in_stack_ffffffffffffffa0 * (long)plStack_68 != 0) {
    if ((ulong)plStack_88[1] < (ulong)(in_stack_ffffffffffffffa0 * (long)plStack_68)) {
      puVar10 = &UNK_10f683bcc;
    }
    else {
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= fVar23) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar23)) {
          bVar5 = fVar23 < 1.0;
          bVar6 = fVar23 == 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 || bVar5 != bVar7) {
        pfVar14 = (float *)*plStack_88;
        if ((in_stack_ffffffffffffffa0 != 0) &&
           (pfVar15 = in_stack_ffffffffffffffa8, pfVar16 = pfVar14,
           lVar13 = in_stack_ffffffffffffffa0, in_stack_ffffffffffffffa8 != pfVar14)) {
          do {
            *pfVar16 = *pfVar15;
            lVar13 = lVar13 + -1;
            pfVar15 = pfVar15 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar13 != 0);
        }
        if ((long *)0x1 < plStack_68) {
          plVar17 = (long *)0x1;
          lVar13 = in_stack_ffffffffffffffa0;
          pfVar15 = pfVar14;
          pfVar16 = in_stack_ffffffffffffffa8;
          do {
            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
              pfVar14[in_stack_ffffffffffffffa0] =
                   fVar23 * *pfVar14 +
                   (1.0 - fVar23) * in_stack_ffffffffffffffa8[in_stack_ffffffffffffffa0];
              pfVar14 = pfVar14 + 1;
              in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 + 1;
            }
            plVar17 = (long *)((long)plVar17 + 1);
            pfVar14 = pfVar15 + in_stack_ffffffffffffffa0;
            in_stack_ffffffffffffffa8 = pfVar16 + in_stack_ffffffffffffffa0;
            lVar13 = in_stack_ffffffffffffffa0;
            pfVar15 = pfVar14;
            pfVar16 = in_stack_ffffffffffffffa8;
          } while (plVar17 != plStack_68);
        }
        goto LAB_10a930794;
      }
      puVar10 = &UNK_10f6839fa;
    }
    FUN_10a00946c(puVar10);
LAB_10a93085c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a930860);
    (*pcVar4)();
  }
LAB_10a930794:
  if (plStack_80 != (long *)0x0) {
    plVar17 = plStack_80 + 1;
    do {
      lVar13 = *plVar17;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  if (plStack_70 != (long *)0x0) {
    plVar17 = plStack_70 + 1;
    do {
      lVar13 = *plVar17;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  *param_1 = 0;
  plVar17 = plVar9 + 0x4b;
  lVar13 = plVar9[0x59];
  uVar11 = lVar13 - 1;
  plVar9[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar17[lVar13 + 2];
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  plVar2 = (long *)*plVar17;
  plVar19 = (long *)plVar9[0x4c];
  lVar13 = (long)plVar19 - (long)plVar2;
  uVar21 = lVar13 >> 4;
  if (uVar21 < uVar11) {
    uVar22 = uVar11 - uVar21;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar19 >> 4) < uVar22) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar20 - (long)plVar2 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar2)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar17;
        if (uVar12 >> 0x3c == 0) {
          lVar8 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar13;
          _bzero(lVar1,uVar22 * 0x10);
          lVar18 = lVar1 + uVar21 * -0x10;
          _memcpy(lVar18,plVar2,lVar13);
          *plVar17 = lVar18;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar12 * 0x10;
          plStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          plStack_70 = (long *)lVar20;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(plVar19,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar19 + uVar22 * 2);
  }
  else if (uVar11 < uVar21) {
    while (plVar19 != plVar2 + uVar11 * 2) {
      plVar19 = plVar19 + -2;
      func_0x00010988c204(plVar19);
    }
    plVar9[0x4c] = (long)(plVar2 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar11;
  return;
}



/* Entry: 10a930898; end: 10a9308bb;  */

undefined *
FUN_10a930898(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  if ((int)param_1 == 4) {
    return param_1;
  }
  plVar5 = (long *)0x4;
  lVar7 = 0;
  FUN_10a052ee0();
  FUN_10a8bcad0(&lStack_70,param_4);
  if (lStack_60 == 1) {
    if ((undefined *)(lStack_68 * lStack_70) <= param_1) {
      *plVar5 = lStack_68;
      plVar5[1] = lStack_70;
      plVar5[2] = lVar7;
      return param_4;
    }
    puVar6 = &UNK_10f683bcc;
    FUN_10a00946c();
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    __Unwind_Resume();
    plVar5 = *(long **)(puVar6 + 0x10);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return puVar6 + 8;
  }
  FUN_10a0ee900(auStack_58,&UNK_10f683c4a,0x35);
  FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93094c);
  (*pcVar4)();
}



/* Entry: 10a9308bc; end: 10a930973;  */

undefined * FUN_10a9308bc(long *param_1,long param_2,ulong param_3,undefined *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a8bcad0(&lStack_60,param_4);
  if (lStack_50 != 1) {
    FUN_10a0ee900(auStack_48,&UNK_10f683c4a,0x35);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93094c);
    (*pcVar4)();
  }
  if ((ulong)(lStack_58 * lStack_60) <= param_3) {
    *param_1 = lStack_58;
    param_1[1] = lStack_60;
    param_1[2] = param_2;
    return param_4;
  }
  puVar5 = &UNK_10f683bcc;
  FUN_10a00946c();
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  __Unwind_Resume();
  plVar7 = *(long **)(puVar5 + 0x10);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return puVar5 + 8;
}



/* Entry: 10a930974; end: 10a9309af;  */

long FUN_10a930974(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a9309b0; end: 10a930caf;  */

void FUN_10a9309b0(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
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
  float fVar31;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  float *pfStack_68;
  long in_stack_ffffffffffffffa0;
  
  pfVar7 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar7 + 0xb2) < 8) {
    *(long *)(pfVar7 + *(ulong *)(pfVar7 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar7 + 0xb4);
    *(long *)(pfVar7 + 0xb2) = *(long *)(pfVar7 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar7 + 0x96);
  }
  FUN_10a930cb0(param_5);
  FUN_10a1f7d54(&plStack_80,param_2,param_4);
  pfVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar9 = param_2;
  func_0x00010a077264(param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_90,param_2,param_4 + 0x30);
  lVar13 = *plStack_80;
  uVar10 = plStack_80[1];
  FUN_10a8bcad0(&lStack_70,pfVar8);
  if (in_stack_ffffffffffffffa0 == 1) {
    if (lStack_70 == 3) {
      if (((ulong)((long)pfStack_68 * 3) <= uVar10) &&
         ((ulong)((long)pfStack_68 * 3) <= (ulong)plStack_90[1])) {
        if (pfStack_68 != (float *)0x0) {
          pfVar8 = pfStack_68;
          pfVar12 = (float *)(*plStack_90 + 8);
          pfVar14 = (float *)(lVar13 + 8);
          do {
            fVar21 = *pfVar9;
            fVar20 = pfVar9[1];
            fVar23 = pfVar14[-2];
            fVar28 = pfVar14[-1];
            fVar24 = fVar20 * -2.0;
            fVar25 = pfVar9[2];
            fVar26 = pfVar9[3];
            fVar27 = fVar25 * -2.0;
            fVar29 = fVar21 + fVar21;
            fVar22 = fVar21 * fVar21 * -2.0 + 1.0;
            fVar30 = fVar20 + fVar20;
            fVar31 = *pfVar14;
            pfVar12[-2] = fVar28 * ((fVar25 + fVar25) * fVar26 + fVar20 * fVar29) +
                          (fVar20 * fVar24 + 1.0 + fVar25 * fVar27) * fVar23 +
                          (fVar24 * fVar26 + fVar25 * fVar29) * fVar31;
            pfVar12[-1] = fVar28 * (fVar22 + fVar25 * fVar27) +
                          (fVar27 * fVar26 + fVar20 * fVar29) * fVar23 +
                          (fVar29 * fVar26 + fVar25 * fVar30) * fVar31;
            *pfVar12 = fVar28 * (fVar21 * -2.0 * fVar26 + fVar25 * fVar30) +
                       (fVar30 * fVar26 + fVar25 * fVar29) * fVar23 +
                       (fVar22 + fVar20 * fVar24) * fVar31;
            pfVar8 = (float *)((long)pfVar8 + -1);
            pfVar12 = pfVar12 + 3;
            pfVar14 = pfVar14 + 3;
          } while (pfVar8 != (float *)0x0);
        }
        if (plStack_88 != (long *)0x0) {
          plVar2 = plStack_88 + 1;
          do {
            lVar13 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
        if (plStack_78 != (long *)0x0) {
          plVar2 = plStack_78 + 1;
          do {
            lVar13 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
          }
        }
        *param_1 = 0;
        pfVar8 = pfVar7 + 0x96;
        uVar10 = *(long *)(pfVar7 + 0xb2) - 1;
        *(ulong *)(pfVar7 + 0xb2) = uVar10;
        if (uVar10 < 8) {
          uVar10 = *(ulong *)(pfVar8 + uVar10 * 2 + 6);
          if (*(ulong *)(pfVar7 + 0xb4) == uVar10) {
            return;
          }
        }
        else {
          uVar10 = *(ulong *)(*(long *)(pfVar7 + 0xae) + -8);
          *(ulong **)(pfVar7 + 0xae) = (ulong *)(*(long *)(pfVar7 + 0xae) + -8);
          if (*(ulong *)(pfVar7 + 0xb4) == uVar10) {
            return;
          }
        }
        plVar2 = *(long **)pfVar8;
        plVar16 = *(long **)(pfVar7 + 0x98);
        lVar13 = (long)plVar16 - (long)plVar2;
        uVar18 = lVar13 >> 4;
        if (uVar18 < uVar10) {
          uVar19 = uVar10 - uVar18;
          lVar17 = *(long *)(pfVar7 + 0x9a);
          if ((ulong)(lVar17 - (long)plVar16 >> 4) < uVar19) {
            if (uVar10 >> 0x3c == 0) {
              uVar11 = lVar17 - (long)plVar2 >> 3;
              if (uVar11 <= uVar10) {
                uVar11 = uVar10;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - (long)plVar2)) {
                uVar11 = 0xfffffffffffffff;
              }
              pfStack_68 = pfVar8;
              if (uVar11 >> 0x3c == 0) {
                lVar6 = uVar11 << 4;
                __Znwm();
                lVar1 = lVar6 + lVar13;
                _bzero(lVar1,uVar19 * 0x10);
                lVar15 = lVar1 + uVar18 * -0x10;
                _memcpy(lVar15,plVar2,lVar13);
                *(long *)pfVar8 = lVar15;
                *(ulong *)(pfVar7 + 0x98) = lVar1 + uVar19 * 0x10;
                *(ulong *)(pfVar7 + 0x9a) = lVar6 + uVar11 * 0x10;
                plStack_88 = plVar2;
                plStack_80 = plVar2;
                plStack_78 = plVar2;
                lStack_70 = lVar17;
                func_0x00010988c1b8(&plStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar5)();
          }
          _bzero(plVar16,uVar19 * 0x10);
          *(long **)(pfVar7 + 0x98) = plVar16 + uVar19 * 2;
        }
        else if (uVar10 < uVar18) {
          while (plVar16 != plVar2 + uVar10 * 2) {
            plVar16 = plVar16 + -2;
            func_0x00010988c204(plVar16);
          }
          *(long **)(pfVar7 + 0x98) = plVar2 + uVar10 * 2;
        }
code_r0x00010988c138:
        *(ulong *)(pfVar7 + 0xb4) = uVar10;
        return;
      }
      FUN_10a00946c(&UNK_10f683bcc);
    }
    else {
      FUN_10a0ee900(&stack0xffffffffffffffa8,&UNK_10f683c4a,0x35);
      FUN_10a0029c0(&stack0xffffffffffffffa8);
    }
  }
  else {
    FUN_10a0ee900(&stack0xffffffffffffffa8,&UNK_10f683c4a,0x35);
    FUN_10a0029c0(&stack0xffffffffffffffa8);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a930c5c);
  (*pcVar5)();
}



/* Entry: 10a930cb0; end: 10a930cd3;  */

long FUN_10a930cb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 4) {
    return param_1;
  }
  lVar4 = 4;
  FUN_10a052ee0(4,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a930cd4; end: 10a930d0f;  */

long FUN_10a930cd4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a930d10; end: 10a930f63;  */

void FUN_10a930d10(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  ulong *in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a930f64(param_5);
  FUN_10a1f7d54(&stack0xffffffffffffffb0,param_2,param_4);
  plVar5 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a20fcc4(&stack0xffffffffffffffa0,param_2,param_4 + 0x20);
  FUN_10a13a07c(&plStack_70,param_2,param_4 + 0x30);
  uVar6 = *in_stack_ffffffffffffffb0;
  uVar15 = in_stack_ffffffffffffffb0[1];
  FUN_10a930f88(uVar6,uVar15,plVar5);
  plVar5 = plStack_68;
  if ((ulong)plStack_70[1] < uVar6) {
    FUN_10a00946c(&UNK_10f683bcc);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a930f1c);
    (*pcVar2)();
  }
  if (uVar6 != 0) {
    pfVar8 = (float *)(uVar15 + 4);
    lVar9 = *plStack_70;
    do {
      if (((pfVar8[-1] < *(float *)(in_stack_ffffffffffffffa0 + 0x24)) ||
          (*(float *)(in_stack_ffffffffffffffa0 + 0x2c) < pfVar8[-1])) ||
         (*pfVar8 < *(float *)(in_stack_ffffffffffffffa0 + 0x28))) {
        bVar10 = false;
      }
      else {
        bVar10 = *pfVar8 <= *(float *)(in_stack_ffffffffffffffa0 + 0x30);
      }
      *(bool *)lVar9 = bVar10;
      pfVar8 = pfVar8 + 2;
      uVar6 = uVar6 - 1;
      lVar9 = lVar9 + 1;
    } while (uVar6 != 0);
  }
  if (plStack_68 != (long *)0x0) {
    plVar14 = plStack_68 + 1;
    do {
      lVar9 = *plVar14;
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar10) {
        *plVar5 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar10) {
        *plVar5 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar9 = plVar4[0x59];
  uVar6 = lVar9 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar5[lVar9 + 2];
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
  lVar9 = *plVar5;
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar9;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar6) {
    uVar16 = uVar6 - uVar15;
    plVar14 = (long *)plVar4[0x4d];
    if ((ulong)((long)plVar14 - lVar13 >> 4) < uVar16) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = (long)plVar14 - lVar9 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar14 - lVar9)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar9,lVar11);
          *plVar5 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          plStack_70 = plVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar4[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar6 < uVar15) {
    lVar9 = lVar9 + uVar6 * 0x10;
    while (lVar13 != lVar9) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a930f64; end: 10a930f87;  */

undefined1  [16] FUN_10a930f64(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if ((int)param_1 == 4) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  uVar5 = 4;
  uVar7 = 0;
  FUN_10a052ee0(4,0,param_1);
  uVar8 = uVar7;
  FUN_10a8bcad0(&lStack_60,param_1);
  if (lStack_50 == 1) {
    if (lStack_60 == 2) {
      if ((ulong)(lStack_58 << 1) <= uVar7) {
        auVar13._8_8_ = uVar5;
        auVar13._0_8_ = lStack_58;
        return auVar13;
      }
      puVar6 = &UNK_10f683bcc;
      FUN_10a00946c();
      if (cStack_31 < '\0') {
        __ZdlPv(auStack_48[0]);
      }
      __Unwind_Resume();
      plVar10 = *(long **)(puVar6 + 0x10);
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      auVar11._8_8_ = uVar8;
      auVar11._0_8_ = puVar6 + 8;
      return auVar11;
    }
    FUN_10a0ee900(auStack_48,&UNK_10f683c4a,0x35);
    FUN_10a0029c0(auStack_48);
  }
  else {
    FUN_10a0ee900(auStack_48,&UNK_10f683c4a,0x35);
    FUN_10a0029c0(auStack_48);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93103c);
  (*pcVar4)();
}



/* Entry: 10a930f88; end: 10a931067;  */

undefined1  [16] FUN_10a930f88(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar6 = param_2;
  FUN_10a8bcad0(&lStack_50,param_3);
  if (lStack_40 == 1) {
    if (lStack_50 == 2) {
      if ((ulong)(lStack_48 << 1) <= param_2) {
        auVar10._8_8_ = param_1;
        auVar10._0_8_ = lStack_48;
        return auVar10;
      }
      puVar5 = &UNK_10f683bcc;
      FUN_10a00946c();
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      __Unwind_Resume();
      plVar8 = *(long **)(puVar5 + 0x10);
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
        }
      }
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = puVar5 + 8;
      return auVar9;
    }
    FUN_10a0ee900(auStack_38,&UNK_10f683c4a,0x35);
    FUN_10a0029c0(auStack_38);
  }
  else {
    FUN_10a0ee900(auStack_38,&UNK_10f683c4a,0x35);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93103c);
  (*pcVar4)();
}



/* Entry: 10a931068; end: 10a9310a3;  */

long FUN_10a931068(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a9310a4; end: 10a931323;  */

void FUN_10a9310a4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  ulong *in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a92f348(param_5);
  FUN_10a1f7d54(&stack0xffffffffffffffb0,param_2,param_4);
  plVar6 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&stack0xffffffffffffffa0,param_2,param_4 + 0x20);
  plVar16 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_70,param_2,param_4 + 0x40);
  uVar8 = *in_stack_ffffffffffffffb0;
  uVar17 = in_stack_ffffffffffffffb0[1];
  FUN_10a930f88(uVar8,uVar17,plVar6);
  lVar12 = *in_stack_ffffffffffffffa0;
  puVar7 = (undefined8 *)in_stack_ffffffffffffffa0[1];
  FUN_10a930f88(lVar12,puVar7,plVar16);
  plVar6 = plStack_68;
  if ((ulong)plStack_70[1] < uVar8) {
    FUN_10a00946c(&UNK_10f683bcc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9312d8);
    (*pcVar3)();
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    lVar11 = *plStack_70;
    do {
      if (lVar12 == 0) {
        fVar20 = 3.4028235e+38;
      }
      else {
        uVar19 = *(undefined8 *)(uVar17 + uVar9 * 8);
        puVar13 = puVar7;
        lVar14 = lVar12;
        fVar18 = 3.4028235e+38;
        do {
          fVar20 = (float)*puVar13 - (float)uVar19;
          fVar21 = (float)((ulong)*puVar13 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
          fVar20 = SQRT(fVar20 * fVar20 + fVar21 * fVar21);
          if (fVar18 <= fVar20) {
            fVar20 = fVar18;
          }
          lVar14 = lVar14 + -1;
          puVar13 = puVar13 + 1;
          fVar18 = fVar20;
        } while (lVar14 != 0);
      }
      *(float *)(lVar11 + uVar9 * 4) = fVar20;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  if (plStack_68 != (long *)0x0) {
    plVar16 = plStack_68 + 1;
    do {
      lVar12 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar8 = lVar12 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar12 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar11 = plVar5[0x4c];
  lVar14 = lVar11 - lVar12;
  uVar17 = lVar14 >> 4;
  if (uVar17 < uVar8) {
    uVar9 = uVar8 - uVar17;
    plVar16 = (long *)plVar5[0x4d];
    if ((ulong)((long)plVar16 - lVar11 >> 4) < uVar9) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = (long)plVar16 - lVar12 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar16 - lVar12)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar14;
          _bzero(lVar11,uVar9 * 0x10);
          lVar15 = lVar11 + uVar17 * -0x10;
          _memcpy(lVar15,lVar12,lVar14);
          *plVar6 = lVar15;
          plVar5[0x4c] = lVar11 + uVar9 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
          plStack_70 = plVar16;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar9 * 0x10);
    plVar5[0x4c] = lVar11 + uVar9 * 0x10;
  }
  else if (uVar8 < uVar17) {
    lVar12 = lVar12 + uVar8 * 0x10;
    while (lVar11 != lVar12) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a931324; end: 10a93135f;  */

long FUN_10a931324(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a931360; end: 10a9318d7;  */

void FUN_10a931360(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a9318d8(param_5);
  FUN_10a1f7d54(&puStack_c0,param_2,param_4);
  plVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  FUN_10a928678(&plStack_d0,param_2,param_4 + 0x30);
  FUN_10a8bcad0(&uStack_80,plVar8);
  uVar13 = uStack_70;
  uVar22 = uStack_78;
  uVar12 = uStack_80;
  uStack_98 = uStack_78;
  uStack_90 = uStack_80;
  uStack_88 = uStack_70;
  FUN_10a8bcad0(&uStack_80,plVar9);
  uVar23 = uStack_78;
  uVar24 = uStack_80;
  FUN_10a91ea54(puStack_c0[1],&uStack_98);
  FUN_10a91ead0(plStack_d0[1],&uStack_98);
  if (((ulong)plStack_d0[1] < (ulong)puStack_c0[1]) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f682fd8,&UNK_10f68301f,0x1c1,&UNK_10f6830c1);
  }
  if (((uVar23 <= uVar22) && (uVar24 <= uVar12)) && (uStack_70 <= uVar13)) {
    uVar15 = uVar12 * uVar22 * uVar13;
    FUN_109ffe100(&lStack_b0,uVar15);
    if (uVar15 != 0) {
      uVar10 = 0;
      uVar14 = 1;
      do {
        if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a931860);
          (*pcVar5)();
        }
        *(uint *)(lStack_b0 + uVar10 * 4) = uVar14 - 1;
        uVar10 = (ulong)uVar14;
        uVar1 = (ulong)uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar1 <= uVar15 && uVar15 - uVar1 != 0);
    }
    lVar11 = uVar24 * uVar23 * uStack_70;
    if (lVar11 != 0) {
      lVar18 = *plStack_d0;
      uVar15 = plStack_d0[1];
      if (lVar11 == 1) {
        uVar12 = lStack_a8 - lStack_b0 >> 2;
        if (uVar15 <= uVar12) {
          uVar12 = uVar15;
        }
        _memcpy(lVar18,lStack_b0,uVar12 << 2);
      }
      else {
        uVar19 = *puStack_c0;
        iVar17 = (int)uVar22;
        iVar20 = (int)uVar12;
        uVar14 = iVar20 * iVar17;
        uVar10 = (ulong)uVar14;
        if (lVar11 - (int)uVar24 == 0) {
          if (0 < (int)uVar13) {
            lVar11 = 0;
            uVar23 = 0;
            do {
              uVar15 = uVar22 & 0x7fffffff;
              lVar21 = lVar11;
              if (0 < iVar17) {
                do {
                  FUN_10a93e7d0(uVar19,uVar12,uVar24,1,lVar18 + lVar21,lStack_b0 + lVar21);
                  lVar21 = lVar21 + (long)iVar20 * 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              uVar23 = uVar23 + 1;
              lVar11 = lVar11 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
            } while (uVar23 != (uVar13 & 0x7fffffff));
          }
        }
        else if (lVar11 - (int)uVar23 == 0) {
          if (0 < (int)uVar13) {
            lVar11 = 0;
            uVar24 = 0;
            do {
              lVar21 = lVar11;
              uVar15 = uVar12 & 0x7fffffff;
              if (0 < iVar20) {
                do {
                  FUN_10a93e7d0(uVar19,uVar22,uVar23,uVar12,lVar18 + lVar21,lStack_b0 + lVar21);
                  lVar21 = lVar21 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              uVar24 = uVar24 + 1;
              lVar11 = lVar11 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
            } while (uVar24 != (uVar13 & 0x7fffffff));
          }
        }
        else if (lVar11 - (int)uStack_70 == 0) {
          if (0 < iVar20) {
            lVar11 = 0;
            uVar24 = 0;
            do {
              uVar23 = uVar22 & 0x7fffffff;
              lVar21 = lVar11;
              if (0 < iVar17) {
                do {
                  FUN_10a93e7d0(uVar19,uVar13,uStack_70,uVar10,lVar18 + lVar21,lStack_b0 + lVar21);
                  lVar21 = lVar21 + (uVar12 & 0x7fffffff) * 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
              uVar24 = uVar24 + 1;
              lVar11 = lVar11 + 4;
            } while (uVar24 != (uVar12 & 0x7fffffff));
          }
        }
        else {
          uVar16 = puStack_c0[1];
          if (1 < (int)uVar24) {
            uStack_80 = 1;
            uStack_78 = uVar24;
            uStack_70 = 1;
            FUN_10a93ea90(uVar19,uVar16,&uStack_98,&uStack_80,lVar18,uVar15,&lStack_b0);
            _memcpy(lStack_b0,lVar18,lStack_a8 - lStack_b0);
          }
          if (1 < (int)uVar23) {
            uStack_80 = uVar23;
            uStack_70 = 1;
            uStack_78 = 1;
            FUN_10a93ea90(uVar19,uVar16,&uStack_98,&uStack_80,lVar18,uVar15,&lStack_b0);
            _memcpy(lStack_b0,lVar18,lStack_a8 - lStack_b0);
          }
          uStack_78 = 1;
          uStack_80 = 1;
          FUN_10a93ea90(uVar19,uVar16,&uStack_98,&uStack_80,lVar18,uVar15,&lStack_b0);
        }
      }
    }
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar8 = plStack_c8 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  *param_1 = 0;
  puVar2 = (ulong *)(plVar7 + 0x4b);
  lVar11 = plVar7[0x59];
  uVar12 = lVar11 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = puVar2[lVar11 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  uVar24 = *puVar2;
  lVar11 = plVar7[0x4c];
  lVar18 = lVar11 - uVar24;
  uVar22 = lVar18 >> 4;
  if (uVar22 < uVar12) {
    uVar23 = uVar12 - uVar22;
    lVar21 = plVar7[0x4d];
    if ((ulong)(lVar21 - lVar11 >> 4) < uVar23) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = (long)(lVar21 - uVar24) >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < lVar21 - uVar24) {
          uVar13 = 0xfffffffffffffff;
        }
        puStack_68 = puVar2;
        if (uVar13 >> 0x3c == 0) {
          lVar6 = uVar13 << 4;
          __Znwm();
          lVar11 = lVar6 + lVar18;
          _bzero(lVar11,uVar23 * 0x10);
          uVar22 = lVar11 + uVar22 * -0x10;
          _memcpy(uVar22,uVar24,lVar18);
          *puVar2 = uVar22;
          plVar7[0x4c] = lVar11 + uVar23 * 0x10;
          plVar7[0x4d] = lVar6 + uVar13 * 0x10;
          uStack_88 = uVar24;
          uStack_80 = uVar24;
          uStack_78 = uVar24;
          uStack_70 = lVar21;
          func_0x00010988c1b8(&uStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar11,uVar23 * 0x10);
    plVar7[0x4c] = lVar11 + uVar23 * 0x10;
  }
  else if (uVar12 < uVar22) {
    lVar18 = uVar24 + uVar12 * 0x10;
    while (lVar11 != lVar18) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar7[0x4c] = lVar18;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a9318d8; end: 10a9318fb;  */

long FUN_10a9318d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 4) {
    return param_1;
  }
  lVar4 = 4;
  FUN_10a052ee0(4,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a9318fc; end: 10a931937;  */

long FUN_10a9318fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a931938; end: 10a931eaf;  */

void FUN_10a931938(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  float *pfStack_68;
  
  pfVar7 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar7 + 0xb2) < 8) {
    *(long *)(pfVar7 + *(ulong *)(pfVar7 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar7 + 0xb4);
    *(long *)(pfVar7 + 0xb2) = *(long *)(pfVar7 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar7 + 0x96);
  }
  FUN_10a9318d8(param_5);
  FUN_10a1f7d54(&puStack_c0,param_2,param_4);
  pfVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  FUN_10a928678(&plStack_d0,param_2,param_4 + 0x30);
  FUN_10a8bcad0(&uStack_80,pfVar8);
  uVar13 = uStack_70;
  uVar23 = uStack_78;
  uVar12 = uStack_80;
  uStack_98 = uStack_78;
  uStack_90 = uStack_80;
  uStack_88 = uStack_70;
  FUN_10a8bcad0(&uStack_80,pfVar9);
  uVar24 = uStack_78;
  uVar25 = uStack_80;
  FUN_10a91e4d4(puStack_c0[1],pfVar8);
  if ((ulong)plStack_d0[1] < (ulong)((long)pfVar8[1] * (long)*pfVar8 * (long)pfVar8[2])) {
    FUN_10a0ee900(&uStack_80,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&uStack_80);
LAB_10a931e2c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a931e30);
    (*pcVar5)();
  }
  if (((uVar24 <= uVar23) && (uVar25 <= uVar12)) && (uStack_70 <= uVar13)) {
    uVar15 = uVar12 * uVar23 * uVar13;
    FUN_109ffe100(&lStack_b0,uVar15);
    if (uVar15 != 0) {
      uVar10 = 0;
      uVar14 = 1;
      do {
        if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar10) goto LAB_10a931e2c;
        *(uint *)(lStack_b0 + uVar10 * 4) = uVar14 - 1;
        uVar10 = (ulong)uVar14;
        uVar1 = (ulong)uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar1 <= uVar15 && uVar15 - uVar1 != 0);
    }
    lVar11 = uVar25 * uVar24 * uStack_70;
    if (lVar11 != 0) {
      lVar18 = *plStack_d0;
      uVar15 = plStack_d0[1];
      if (lVar11 == 1) {
        uVar12 = lStack_a8 - lStack_b0 >> 2;
        if (uVar15 <= uVar12) {
          uVar12 = uVar15;
        }
        _memcpy(lVar18,lStack_b0,uVar12 << 2);
      }
      else {
        uVar20 = *puStack_c0;
        iVar17 = (int)uVar23;
        iVar21 = (int)uVar12;
        uVar14 = iVar21 * iVar17;
        uVar10 = (ulong)uVar14;
        if (lVar11 - (int)uVar25 == 0) {
          if (0 < (int)uVar13) {
            lVar11 = 0;
            uVar24 = 0;
            do {
              uVar15 = uVar23 & 0x7fffffff;
              lVar22 = lVar11;
              if (0 < iVar17) {
                do {
                  FUN_10a93edb4(uVar20,uVar12,uVar25,1,lVar18 + lVar22,lStack_b0 + lVar22);
                  lVar22 = lVar22 + (long)iVar21 * 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              uVar24 = uVar24 + 1;
              lVar11 = lVar11 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
            } while (uVar24 != (uVar13 & 0x7fffffff));
          }
        }
        else if (lVar11 - (int)uVar24 == 0) {
          if (0 < (int)uVar13) {
            lVar11 = 0;
            uVar25 = 0;
            do {
              lVar22 = lVar11;
              uVar15 = uVar12 & 0x7fffffff;
              if (0 < iVar21) {
                do {
                  FUN_10a93edb4(uVar20,uVar23,uVar24,uVar12,lVar18 + lVar22,lStack_b0 + lVar22);
                  lVar22 = lVar22 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              uVar25 = uVar25 + 1;
              lVar11 = lVar11 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
            } while (uVar25 != (uVar13 & 0x7fffffff));
          }
        }
        else if (lVar11 - (int)uStack_70 == 0) {
          if (0 < iVar21) {
            lVar11 = 0;
            uVar25 = 0;
            do {
              uVar24 = uVar23 & 0x7fffffff;
              lVar22 = lVar11;
              if (0 < iVar17) {
                do {
                  FUN_10a93edb4(uVar20,uVar13,uStack_70,uVar10,lVar18 + lVar22,lStack_b0 + lVar22);
                  lVar22 = lVar22 + (uVar12 & 0x7fffffff) * 4;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              uVar25 = uVar25 + 1;
              lVar11 = lVar11 + 4;
            } while (uVar25 != (uVar12 & 0x7fffffff));
          }
        }
        else {
          uVar16 = puStack_c0[1];
          if (1 < (int)uVar25) {
            uStack_80 = 1;
            uStack_78 = uVar25;
            uStack_70 = 1;
            FUN_10a93f074(uVar20,uVar16,&uStack_98,&uStack_80,lVar18,uVar15,&lStack_b0);
            _memcpy(lStack_b0,lVar18,lStack_a8 - lStack_b0);
          }
          if (1 < (int)uVar24) {
            uStack_80 = uVar24;
            uStack_70 = 1;
            uStack_78 = 1;
            FUN_10a93f074(uVar20,uVar16,&uStack_98,&uStack_80,lVar18,uVar15,&lStack_b0);
            _memcpy(lStack_b0,lVar18,lStack_a8 - lStack_b0);
          }
          uStack_78 = 1;
          uStack_80 = 1;
          FUN_10a93f074(uVar20,uVar16,&uStack_98,&uStack_80,lVar18,uVar15,&lStack_b0);
        }
      }
    }
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar2 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  *param_1 = 0;
  pfVar8 = pfVar7 + 0x96;
  uVar12 = *(long *)(pfVar7 + 0xb2) - 1;
  *(ulong *)(pfVar7 + 0xb2) = uVar12;
  if (uVar12 < 8) {
    uVar12 = *(ulong *)(pfVar8 + uVar12 * 2 + 6);
    if (*(ulong *)(pfVar7 + 0xb4) == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(*(long *)(pfVar7 + 0xae) + -8);
    *(ulong **)(pfVar7 + 0xae) = (ulong *)(*(long *)(pfVar7 + 0xae) + -8);
    if (*(ulong *)(pfVar7 + 0xb4) == uVar12) {
      return;
    }
  }
  uVar25 = *(ulong *)pfVar8;
  lVar11 = *(long *)(pfVar7 + 0x98);
  lVar18 = lVar11 - uVar25;
  uVar23 = lVar18 >> 4;
  if (uVar23 < uVar12) {
    uVar24 = uVar12 - uVar23;
    lVar22 = *(long *)(pfVar7 + 0x9a);
    if ((ulong)(lVar22 - lVar11 >> 4) < uVar24) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = (long)(lVar22 - uVar25) >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < lVar22 - uVar25) {
          uVar13 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar8;
        if (uVar13 >> 0x3c == 0) {
          lVar6 = uVar13 << 4;
          __Znwm();
          lVar11 = lVar6 + lVar18;
          _bzero(lVar11,uVar24 * 0x10);
          lVar19 = lVar11 + uVar23 * -0x10;
          _memcpy(lVar19,uVar25,lVar18);
          *(long *)pfVar8 = lVar19;
          *(ulong *)(pfVar7 + 0x98) = lVar11 + uVar24 * 0x10;
          *(ulong *)(pfVar7 + 0x9a) = lVar6 + uVar13 * 0x10;
          uStack_88 = uVar25;
          uStack_80 = uVar25;
          uStack_78 = uVar25;
          uStack_70 = lVar22;
          func_0x00010988c1b8(&uStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar11,uVar24 * 0x10);
    *(ulong *)(pfVar7 + 0x98) = lVar11 + uVar24 * 0x10;
  }
  else if (uVar12 < uVar23) {
    lVar18 = uVar25 + uVar12 * 0x10;
    while (lVar11 != lVar18) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar7 + 0x98) = lVar18;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar7 + 0xb4) = uVar12;
  return;
}



/* Entry: 10a931eb0; end: 10a931eeb;  */

long FUN_10a931eb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a931eec; end: 10a9320d7;  */

void FUN_10a931eec(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  float *in_stack_ffffffffffffffb8;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a8e1a70(param_5);
  FUN_10a1f7d54(&plStack_68,param_2,param_4);
  plVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_78,param_2,param_4 + 0x20);
  FUN_10a9308bc(&stack0xffffffffffffffa8,*plStack_68,plStack_68[1],plVar9);
  if ((ulong)plStack_78[1] < in_stack_ffffffffffffffa8) {
    FUN_10a00946c(&UNK_10f683bcc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9320a0);
    (*pcVar6)();
  }
  if (in_stack_ffffffffffffffa8 != 0) {
    uVar11 = 0;
    lVar12 = *plStack_78;
    do {
      fVar18 = 0.0;
      pfVar5 = in_stack_ffffffffffffffb8;
      for (lVar15 = in_stack_ffffffffffffffb0; lVar15 != 0; lVar15 = lVar15 + -1) {
        fVar18 = fVar18 + *pfVar5 * *pfVar5;
        pfVar5 = pfVar5 + 1;
      }
      *(float *)(lVar12 + uVar11 * 4) = SQRT(fVar18);
      uVar11 = uVar11 + 1;
      in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 + in_stack_ffffffffffffffb0;
    } while (uVar11 != in_stack_ffffffffffffffa8);
  }
  if (plStack_70 != (long *)0x0) {
    plVar9 = plStack_70 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar9 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  *param_1 = 0;
  plVar9 = plVar8 + 0x4b;
  lVar12 = plVar8[0x59];
  uVar11 = lVar12 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar9[lVar12 + 2];
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  plVar2 = (long *)*plVar9;
  plVar14 = (long *)plVar8[0x4c];
  lVar12 = (long)plVar14 - (long)plVar2;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar11) {
    uVar17 = uVar11 - uVar16;
    lVar15 = plVar8[0x4d];
    if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar17) {
      if (uVar11 >> 0x3c == 0) {
        uVar10 = lVar15 - (long)plVar2 >> 3;
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar2)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar10 >> 0x3c == 0) {
          lVar7 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar12;
          _bzero(lVar1,uVar17 * 0x10);
          lVar13 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar13,plVar2,lVar12);
          *plVar9 = lVar13;
          plVar8[0x4c] = lVar1 + uVar17 * 0x10;
          plVar8[0x4d] = lVar7 + uVar10 * 0x10;
          plStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          plStack_70 = (long *)lVar15;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar14,uVar17 * 0x10);
    plVar8[0x4c] = (long)(plVar14 + uVar17 * 2);
  }
  else if (uVar11 < uVar16) {
    while (plVar14 != plVar2 + uVar11 * 2) {
      plVar14 = plVar14 + -2;
      func_0x00010988c204(plVar14);
    }
    plVar8[0x4c] = (long)(plVar2 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar11;
  return;
}



/* Entry: 10a9320d8; end: 10a932113;  */

long FUN_10a9320d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a932114; end: 10a9322d3;  */

void FUN_10a932114(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  float *in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a9322d4(param_5);
  FUN_10a1f7d54(&puStack_78,param_2,param_4);
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a9308bc(&plStack_68,*puStack_78,puStack_78[1],param_2);
  if (plStack_68 == (long *)0x0) {
    fVar23 = 0.0;
  }
  else {
    plVar12 = (long *)0x0;
    fVar23 = 0.0;
    pfVar14 = in_stack_ffffffffffffffa8;
    do {
      pfVar14 = pfVar14 + in_stack_ffffffffffffffa0;
      plVar12 = (long *)((long)plVar12 + 1);
      pfVar15 = pfVar14;
      plVar16 = plVar12;
      if (plVar12 < plStack_68) {
        do {
          fVar22 = 0.0;
          pfVar5 = in_stack_ffffffffffffffa8;
          pfVar6 = pfVar15;
          for (lVar13 = in_stack_ffffffffffffffa0; lVar13 != 0; lVar13 = lVar13 + -1) {
            fVar22 = fVar22 + (*pfVar5 - *pfVar6) * (*pfVar5 - *pfVar6);
            pfVar5 = pfVar5 + 1;
            pfVar6 = pfVar6 + 1;
          }
          if (fVar22 <= fVar23) {
            fVar22 = fVar23;
          }
          fVar23 = fVar22;
          plVar16 = (long *)((long)plVar16 + 1);
          pfVar15 = pfVar15 + in_stack_ffffffffffffffa0;
        } while (plVar16 != plStack_68);
      }
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffa0;
    } while (plVar12 != plStack_68);
  }
  if (plStack_70 != (long *)0x0) {
    plVar12 = plStack_70 + 1;
    do {
      lVar13 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)SQRT(fVar23);
  plVar12 = plVar9 + 0x4b;
  lVar13 = plVar9[0x59];
  uVar10 = lVar13 - 1;
  plVar9[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar12[lVar13 + 2];
    if (plVar9[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar10) {
      return;
    }
  }
  puVar2 = (undefined8 *)*plVar12;
  puVar18 = (undefined8 *)plVar9[0x4c];
  lVar13 = (long)puVar18 - (long)puVar2;
  uVar20 = lVar13 >> 4;
  if (uVar20 < uVar10) {
    uVar21 = uVar10 - uVar20;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)puVar18 >> 4) < uVar21) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar19 - (long)puVar2 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)puVar2)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar12;
        if (uVar11 >> 0x3c == 0) {
          lVar8 = uVar11 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar13;
          _bzero(lVar1,uVar21 * 0x10);
          lVar17 = lVar1 + uVar20 * -0x10;
          _memcpy(lVar17,puVar2,lVar13);
          *plVar12 = lVar17;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar11 * 0x10;
          puStack_88 = puVar2;
          puStack_80 = puVar2;
          puStack_78 = puVar2;
          plStack_70 = (long *)lVar19;
          func_0x00010988c1b8(&puStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(puVar18,uVar21 * 0x10);
    plVar9[0x4c] = (long)(puVar18 + uVar21 * 2);
  }
  else if (uVar10 < uVar20) {
    while (puVar18 != puVar2 + uVar10 * 2) {
      puVar18 = puVar18 + -2;
      func_0x00010988c204(puVar18);
    }
    plVar9[0x4c] = (long)(puVar2 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar10;
  return;
}



/* Entry: 10a9322d4; end: 10a9322f7;  */

long FUN_10a9322d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  lVar4 = 2;
  FUN_10a052ee0(2,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a9322f8; end: 10a932333;  */

long FUN_10a9322f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a932334; end: 10a932b8b;  */

void FUN_10a932334(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined4 *puStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined4 auStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [2];
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  long *plStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  int *piStack_98;
  long *plStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar13 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar13 + 0xb2) < 8) {
    *(undefined8 *)(pfVar13 + *(ulong *)(pfVar13 + 0xb2) * 2 + 0x9c) =
         *(undefined8 *)(pfVar13 + 0xb4);
    *(long *)(pfVar13 + 0xb2) = *(long *)(pfVar13 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar13 + 0x96);
  }
  FUN_10a932b8c(param_5);
  FUN_10a1f7d54(&plStack_210,param_2,param_4);
  pfVar14 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_220,param_2,param_4 + 0x20);
  pfVar15 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  pfVar16 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x40);
  pfVar17 = param_2;
  func_0x000109898518(param_2,param_4 + 0x50);
  pfVar18 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x60);
  pfVar19 = param_2;
  func_0x00010a1fba38(param_2,param_4 + 0x70);
  FUN_10a1f7d54(&puStack_230,param_2,param_4 + 0x80);
  FUN_10a91e4d4(plStack_210[1],pfVar14);
  FUN_10a91e4d4(plStack_220[1],pfVar15);
  uVar31 = puStack_230[1];
  FUN_10a8bcad0(&uStack_138,pfVar14);
  if ((uStack_138 != (undefined4 *)0x0) && (uStack_130 != 0)) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uStack_138;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uStack_130;
    if (SUB168(auVar7 * auVar9,8) != 0) {
LAB_10a932920:
      FUN_10a00946c(&UNK_10f6818f4);
      goto LAB_10a932a70;
    }
    uVar21 = (long)uStack_138 * uStack_130;
    if ((uVar21 != 0) && (uStack_128 != 0)) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uStack_128;
      if (SUB168(auVar8 * auVar10,8) != 0) goto LAB_10a932920;
      if (uVar31 <= uVar21 * uStack_128 && uVar21 * uStack_128 - uVar31 != 0) {
        FUN_10a0ee900(&uStack_d8,&UNK_10f683b6e,0x5d);
        FUN_10a0029c0(&uStack_d8);
        goto LAB_10a932a70;
      }
    }
  }
  if (((((1.0 <= *pfVar14) && (1.0 <= pfVar14[1])) && (1.0 <= pfVar14[2])) &&
      ((1.0 <= *pfVar15 && (1.0 <= pfVar15[1])))) && (1.0 <= pfVar15[2])) {
    iStack_d0 = (int)pfVar14[1];
    iStack_cc = (int)*pfVar14;
    uVar6 = (int)pfVar14[2] * 8 - 3;
    lStack_c8 = *plStack_210;
    uVar3 = uVar6 & 0xfff;
    uStack_d8 = uVar3 | 0x42ff0000;
    iStack_d4 = 2;
    piStack_98 = &iStack_d0;
    lStack_b0 = 0;
    lStack_b8 = 0;
    lStack_a0 = 0;
    uStack_a8 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_c0 = lStack_c8;
    plStack_90 = &lStack_88;
    if (((long)iStack_d0 * (long)iStack_cc != 0) && (lStack_c8 == 0)) {
      puVar20 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      uStack_138 = puVar20 + 1;
      uStack_130 = 0x1c;
      *(undefined1 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_138,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_10a932a70:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a932a74);
      (*pcVar11)();
    }
    uVar6 = (uVar6 >> 1 & 0x7fc) + 4;
    uStack_80 = (ulong)uVar6;
    lStack_88 = (long)(int)uVar6 * (long)iStack_cc;
    uVar3 = uVar3 | 0x42ff4000;
    lStack_b8 = lStack_c8 + lStack_88 * iStack_d0;
    uStack_128 = *puStack_230;
    uStack_138 = (undefined4 *)CONCAT44(2,uStack_d8);
    puStack_f8 = &uStack_130;
    uStack_130 = CONCAT44(iStack_cc,iStack_d0);
    lStack_110 = 0;
    lStack_118 = 0;
    lStack_100 = 0;
    uStack_108 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_120 = uStack_128;
    plStack_f0 = &lStack_e8;
    uStack_d8 = uVar3;
    lStack_b0 = lStack_b8;
    if (((long)iStack_d0 * (long)iStack_cc != 0) && (uStack_128 == 0)) {
      puVar20 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      uStack_198 = puVar20 + 1;
      uStack_190 = 0x1c;
      *(undefined1 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_198,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      goto LAB_10a932a70;
    }
    uStack_138 = (undefined4 *)CONCAT44(2,uVar3);
    lStack_118 = uStack_128 + lStack_88 * iStack_d0;
    iVar25 = (int)pfVar15[1];
    iVar24 = (int)*pfVar15;
    uVar6 = (int)pfVar15[2] * 8 - 3;
    lStack_188 = *plStack_220;
    uVar3 = uVar6 & 0xfff;
    uStack_198 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff0000);
    puStack_1d8 = &uStack_198;
    puStack_158 = &uStack_190;
    uStack_190 = CONCAT44(iVar24,iVar25);
    lStack_170 = 0;
    lStack_178 = 0;
    lStack_160 = 0;
    uStack_168 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    lStack_180 = lStack_188;
    plStack_150 = &lStack_148;
    lStack_110 = lStack_118;
    lStack_e8 = lStack_88;
    uStack_e0 = uStack_80;
    if (((long)iVar25 * (long)iVar24 != 0) && (lStack_188 == 0)) {
      puVar20 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      puStack_200 = puVar20 + 1;
      dStack_1f8 = 1.38338380835549e-322;
      *(undefined1 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&puStack_200,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      goto LAB_10a932a70;
    }
    uVar6 = (uVar6 >> 1 & 0x7fc) + 4;
    uStack_140 = (ulong)uVar6;
    lStack_148 = (long)(int)uVar6 * (long)iVar24;
    uStack_198 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff4000);
    lStack_178 = lStack_188 + lStack_148 * iVar25;
    uStack_1a0 = 0;
    auStack_1b0[0] = 0x1010000;
    puStack_1a8 = &uStack_d8;
    auStack_1c8[0] = 0x2010000;
    puStack_1c0 = &uStack_138;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    auStack_1e0[0] = 0x1010000;
    lStack_78 = CONCAT44((int)(float)((ulong)*(undefined8 *)pfVar16 >> 0x20),
                         (int)(float)*(undefined8 *)pfVar16);
    puStack_200 = (undefined4 *)(double)(float)*(undefined8 *)pfVar19;
    dStack_1f8 = (double)(float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
    dStack_1f0 = (double)(float)*(undefined8 *)(pfVar19 + 2);
    dStack_1e8 = (double)(float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
    lStack_170 = lStack_178;
    func_0x000109b32fd4(0,auStack_1b0,auStack_1c8,auStack_1e0,&lStack_78,pfVar17,pfVar18,
                        &puStack_200);
    if (lStack_160 != 0) {
      piVar2 = (int *)(lStack_160 + 0x14);
      do {
        iVar24 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_198);
      }
    }
    lStack_160 = 0;
    lStack_180 = 0;
    lStack_188 = 0;
    lStack_170 = 0;
    lStack_178 = 0;
    if (0 < uStack_198._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)((long)puStack_158 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_198._4_4_);
    }
    if (plStack_150 != &lStack_148 && plStack_150 != (long *)0x0) {
      _free(plStack_150[-1]);
    }
    if (lStack_100 != 0) {
      piVar2 = (int *)(lStack_100 + 0x14);
      do {
        iVar24 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_138);
      }
    }
    lStack_100 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    lStack_110 = 0;
    lStack_118 = 0;
    if (0 < uStack_138._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)((long)puStack_f8 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_138._4_4_);
    }
    if (plStack_f0 != &lStack_e8 && plStack_f0 != (long *)0x0) {
      _free(plStack_f0[-1]);
    }
    if (lStack_a0 != 0) {
      piVar2 = (int *)(lStack_a0 + 0x14);
      do {
        iVar24 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_d8);
      }
    }
    lStack_a0 = 0;
    lStack_c0 = 0;
    lStack_c8 = 0;
    lStack_b0 = 0;
    lStack_b8 = 0;
    if (0 < iStack_d4) {
      lVar23 = 0;
      do {
        piStack_98[lVar23] = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < iStack_d4);
    }
    if (plStack_90 != &lStack_88 && plStack_90 != (long *)0x0) {
      _free(plStack_90[-1]);
    }
  }
  if (plStack_228 != (long *)0x0) {
    plVar1 = plStack_228 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
    }
  }
  if (plStack_218 != (long *)0x0) {
    plVar1 = plStack_218 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
    }
  }
  if (plStack_208 != (long *)0x0) {
    plVar1 = plStack_208 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
    }
  }
  *param_1 = 0;
  pfVar14 = pfVar13 + 0x96;
  uVar31 = *(long *)(pfVar13 + 0xb2) - 1;
  *(ulong *)(pfVar13 + 0xb2) = uVar31;
  if (uVar31 < 8) {
    uVar31 = *(ulong *)(pfVar14 + uVar31 * 2 + 6);
    if (*(ulong *)(pfVar13 + 0xb4) == uVar31) {
      return;
    }
  }
  else {
    uVar31 = *(ulong *)(*(long *)(pfVar13 + 0xae) + -8);
    *(ulong **)(pfVar13 + 0xae) = (ulong *)(*(long *)(pfVar13 + 0xae) + -8);
    if (*(ulong *)(pfVar13 + 0xb4) == uVar31) {
      return;
    }
  }
  lVar23 = *(long *)pfVar14;
  lVar28 = *(long *)(pfVar13 + 0x98);
  lVar26 = lVar28 - lVar23;
  uVar21 = lVar26 >> 4;
  if (uVar21 < uVar31) {
    uVar30 = uVar31 - uVar21;
    lVar29 = *(long *)(pfVar13 + 0x9a);
    if ((ulong)(lVar29 - lVar28 >> 4) < uVar30) {
      if (uVar31 >> 0x3c == 0) {
        uVar22 = lVar29 - lVar23 >> 3;
        if (uVar22 <= uVar31) {
          uVar22 = uVar31;
        }
        if (0x7fffffffffffffef < (ulong)(lVar29 - lVar23)) {
          uVar22 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar14;
        if (uVar22 >> 0x3c == 0) {
          lVar12 = uVar22 << 4;
          __Znwm();
          lVar28 = lVar12 + lVar26;
          _bzero(lVar28,uVar30 * 0x10);
          lVar27 = lVar28 + uVar21 * -0x10;
          _memcpy(lVar27,lVar23,lVar26);
          *(long *)pfVar14 = lVar27;
          *(ulong *)(pfVar13 + 0x98) = lVar28 + uVar30 * 0x10;
          *(ulong *)(pfVar13 + 0x9a) = lVar12 + uVar22 * 0x10;
          lStack_88 = lVar23;
          uStack_80 = lVar23;
          lStack_78 = lVar23;
          lStack_70 = lVar29;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar11)();
    }
    _bzero(lVar28,uVar30 * 0x10);
    *(ulong *)(pfVar13 + 0x98) = lVar28 + uVar30 * 0x10;
  }
  else if (uVar31 < uVar21) {
    lVar23 = lVar23 + uVar31 * 0x10;
    while (lVar28 != lVar23) {
      lVar28 = lVar28 + -0x10;
      func_0x00010988c204(lVar28);
    }
    *(long *)(pfVar13 + 0x98) = lVar23;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar13 + 0xb4) = uVar31;
  return;
}



/* Entry: 10a932b8c; end: 10a932baf;  */

long FUN_10a932b8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 9) {
    return param_1;
  }
  lVar4 = 9;
  FUN_10a052ee0(9,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a932bb0; end: 10a932beb;  */

long FUN_10a932bb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a932bec; end: 10a933443;  */

void FUN_10a932bec(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined4 *puStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined4 auStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [2];
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  long *plStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  int *piStack_98;
  long *plStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar13 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar13 + 0xb2) < 8) {
    *(undefined8 *)(pfVar13 + *(ulong *)(pfVar13 + 0xb2) * 2 + 0x9c) =
         *(undefined8 *)(pfVar13 + 0xb4);
    *(long *)(pfVar13 + 0xb2) = *(long *)(pfVar13 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar13 + 0x96);
  }
  FUN_10a932b8c(param_5);
  FUN_10a1f7d54(&plStack_210,param_2,param_4);
  pfVar14 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_220,param_2,param_4 + 0x20);
  pfVar15 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  pfVar16 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x40);
  pfVar17 = param_2;
  func_0x000109898518(param_2,param_4 + 0x50);
  pfVar18 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x60);
  pfVar19 = param_2;
  func_0x00010a1fba38(param_2,param_4 + 0x70);
  FUN_10a1f7d54(&puStack_230,param_2,param_4 + 0x80);
  FUN_10a91e4d4(plStack_210[1],pfVar14);
  FUN_10a91e4d4(plStack_220[1],pfVar15);
  uVar31 = puStack_230[1];
  FUN_10a8bcad0(&uStack_138,pfVar14);
  if ((uStack_138 != (undefined4 *)0x0) && (uStack_130 != 0)) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uStack_138;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uStack_130;
    if (SUB168(auVar7 * auVar9,8) != 0) {
LAB_10a9331d8:
      FUN_10a00946c(&UNK_10f6818f4);
      goto LAB_10a933328;
    }
    uVar21 = (long)uStack_138 * uStack_130;
    if ((uVar21 != 0) && (uStack_128 != 0)) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uStack_128;
      if (SUB168(auVar8 * auVar10,8) != 0) goto LAB_10a9331d8;
      if (uVar31 <= uVar21 * uStack_128 && uVar21 * uStack_128 - uVar31 != 0) {
        FUN_10a0ee900(&uStack_d8,&UNK_10f683b6e,0x5d);
        FUN_10a0029c0(&uStack_d8);
        goto LAB_10a933328;
      }
    }
  }
  if (((((1.0 <= *pfVar14) && (1.0 <= pfVar14[1])) && (1.0 <= pfVar14[2])) &&
      ((1.0 <= *pfVar15 && (1.0 <= pfVar15[1])))) && (1.0 <= pfVar15[2])) {
    iStack_d0 = (int)pfVar14[1];
    iStack_cc = (int)*pfVar14;
    uVar6 = (int)pfVar14[2] * 8 - 3;
    lStack_c8 = *plStack_210;
    uVar3 = uVar6 & 0xfff;
    uStack_d8 = uVar3 | 0x42ff0000;
    iStack_d4 = 2;
    piStack_98 = &iStack_d0;
    lStack_b0 = 0;
    lStack_b8 = 0;
    lStack_a0 = 0;
    uStack_a8 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_c0 = lStack_c8;
    plStack_90 = &lStack_88;
    if (((long)iStack_d0 * (long)iStack_cc != 0) && (lStack_c8 == 0)) {
      puVar20 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      uStack_138 = puVar20 + 1;
      uStack_130 = 0x1c;
      *(undefined1 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_138,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_10a933328:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a93332c);
      (*pcVar11)();
    }
    uVar6 = (uVar6 >> 1 & 0x7fc) + 4;
    uStack_80 = (ulong)uVar6;
    lStack_88 = (long)(int)uVar6 * (long)iStack_cc;
    uVar3 = uVar3 | 0x42ff4000;
    lStack_b8 = lStack_c8 + lStack_88 * iStack_d0;
    uStack_128 = *puStack_230;
    uStack_138 = (undefined4 *)CONCAT44(2,uStack_d8);
    puStack_f8 = &uStack_130;
    uStack_130 = CONCAT44(iStack_cc,iStack_d0);
    lStack_110 = 0;
    lStack_118 = 0;
    lStack_100 = 0;
    uStack_108 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_120 = uStack_128;
    plStack_f0 = &lStack_e8;
    uStack_d8 = uVar3;
    lStack_b0 = lStack_b8;
    if (((long)iStack_d0 * (long)iStack_cc != 0) && (uStack_128 == 0)) {
      puVar20 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      uStack_198 = puVar20 + 1;
      uStack_190 = 0x1c;
      *(undefined1 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_198,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      goto LAB_10a933328;
    }
    uStack_138 = (undefined4 *)CONCAT44(2,uVar3);
    lStack_118 = uStack_128 + lStack_88 * iStack_d0;
    iVar25 = (int)pfVar15[1];
    iVar24 = (int)*pfVar15;
    uVar6 = (int)pfVar15[2] * 8 - 3;
    lStack_188 = *plStack_220;
    uVar3 = uVar6 & 0xfff;
    uStack_198 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff0000);
    puStack_1d8 = &uStack_198;
    puStack_158 = &uStack_190;
    uStack_190 = CONCAT44(iVar24,iVar25);
    lStack_170 = 0;
    lStack_178 = 0;
    lStack_160 = 0;
    uStack_168 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    lStack_180 = lStack_188;
    plStack_150 = &lStack_148;
    lStack_110 = lStack_118;
    lStack_e8 = lStack_88;
    uStack_e0 = uStack_80;
    if (((long)iVar25 * (long)iVar24 != 0) && (lStack_188 == 0)) {
      puVar20 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      puStack_200 = puVar20 + 1;
      dStack_1f8 = 1.38338380835549e-322;
      *(undefined1 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&puStack_200,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      goto LAB_10a933328;
    }
    uVar6 = (uVar6 >> 1 & 0x7fc) + 4;
    uStack_140 = (ulong)uVar6;
    lStack_148 = (long)(int)uVar6 * (long)iVar24;
    uStack_198 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff4000);
    lStack_178 = lStack_188 + lStack_148 * iVar25;
    uStack_1a0 = 0;
    auStack_1b0[0] = 0x1010000;
    puStack_1a8 = &uStack_d8;
    auStack_1c8[0] = 0x2010000;
    puStack_1c0 = &uStack_138;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    auStack_1e0[0] = 0x1010000;
    lStack_78 = CONCAT44((int)(float)((ulong)*(undefined8 *)pfVar16 >> 0x20),
                         (int)(float)*(undefined8 *)pfVar16);
    puStack_200 = (undefined4 *)(double)(float)*(undefined8 *)pfVar19;
    dStack_1f8 = (double)(float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
    dStack_1f0 = (double)(float)*(undefined8 *)(pfVar19 + 2);
    dStack_1e8 = (double)(float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
    lStack_170 = lStack_178;
    func_0x000109b32fd4(1,auStack_1b0,auStack_1c8,auStack_1e0,&lStack_78,pfVar17,pfVar18,
                        &puStack_200);
    if (lStack_160 != 0) {
      piVar2 = (int *)(lStack_160 + 0x14);
      do {
        iVar24 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_198);
      }
    }
    lStack_160 = 0;
    lStack_180 = 0;
    lStack_188 = 0;
    lStack_170 = 0;
    lStack_178 = 0;
    if (0 < uStack_198._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)((long)puStack_158 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_198._4_4_);
    }
    if (plStack_150 != &lStack_148 && plStack_150 != (long *)0x0) {
      _free(plStack_150[-1]);
    }
    if (lStack_100 != 0) {
      piVar2 = (int *)(lStack_100 + 0x14);
      do {
        iVar24 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_138);
      }
    }
    lStack_100 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    lStack_110 = 0;
    lStack_118 = 0;
    if (0 < uStack_138._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)((long)puStack_f8 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_138._4_4_);
    }
    if (plStack_f0 != &lStack_e8 && plStack_f0 != (long *)0x0) {
      _free(plStack_f0[-1]);
    }
    if (lStack_a0 != 0) {
      piVar2 = (int *)(lStack_a0 + 0x14);
      do {
        iVar24 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_d8);
      }
    }
    lStack_a0 = 0;
    lStack_c0 = 0;
    lStack_c8 = 0;
    lStack_b0 = 0;
    lStack_b8 = 0;
    if (0 < iStack_d4) {
      lVar23 = 0;
      do {
        piStack_98[lVar23] = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < iStack_d4);
    }
    if (plStack_90 != &lStack_88 && plStack_90 != (long *)0x0) {
      _free(plStack_90[-1]);
    }
  }
  if (plStack_228 != (long *)0x0) {
    plVar1 = plStack_228 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
    }
  }
  if (plStack_218 != (long *)0x0) {
    plVar1 = plStack_218 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
    }
  }
  if (plStack_208 != (long *)0x0) {
    plVar1 = plStack_208 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
    }
  }
  *param_1 = 0;
  pfVar14 = pfVar13 + 0x96;
  uVar31 = *(long *)(pfVar13 + 0xb2) - 1;
  *(ulong *)(pfVar13 + 0xb2) = uVar31;
  if (uVar31 < 8) {
    uVar31 = *(ulong *)(pfVar14 + uVar31 * 2 + 6);
    if (*(ulong *)(pfVar13 + 0xb4) == uVar31) {
      return;
    }
  }
  else {
    uVar31 = *(ulong *)(*(long *)(pfVar13 + 0xae) + -8);
    *(ulong **)(pfVar13 + 0xae) = (ulong *)(*(long *)(pfVar13 + 0xae) + -8);
    if (*(ulong *)(pfVar13 + 0xb4) == uVar31) {
      return;
    }
  }
  lVar23 = *(long *)pfVar14;
  lVar28 = *(long *)(pfVar13 + 0x98);
  lVar26 = lVar28 - lVar23;
  uVar21 = lVar26 >> 4;
  if (uVar21 < uVar31) {
    uVar30 = uVar31 - uVar21;
    lVar29 = *(long *)(pfVar13 + 0x9a);
    if ((ulong)(lVar29 - lVar28 >> 4) < uVar30) {
      if (uVar31 >> 0x3c == 0) {
        uVar22 = lVar29 - lVar23 >> 3;
        if (uVar22 <= uVar31) {
          uVar22 = uVar31;
        }
        if (0x7fffffffffffffef < (ulong)(lVar29 - lVar23)) {
          uVar22 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar14;
        if (uVar22 >> 0x3c == 0) {
          lVar12 = uVar22 << 4;
          __Znwm();
          lVar28 = lVar12 + lVar26;
          _bzero(lVar28,uVar30 * 0x10);
          lVar27 = lVar28 + uVar21 * -0x10;
          _memcpy(lVar27,lVar23,lVar26);
          *(long *)pfVar14 = lVar27;
          *(ulong *)(pfVar13 + 0x98) = lVar28 + uVar30 * 0x10;
          *(ulong *)(pfVar13 + 0x9a) = lVar12 + uVar22 * 0x10;
          lStack_88 = lVar23;
          uStack_80 = lVar23;
          lStack_78 = lVar23;
          lStack_70 = lVar29;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar11)();
    }
    _bzero(lVar28,uVar30 * 0x10);
    *(ulong *)(pfVar13 + 0x98) = lVar28 + uVar30 * 0x10;
  }
  else if (uVar31 < uVar21) {
    lVar23 = lVar23 + uVar31 * 0x10;
    while (lVar28 != lVar23) {
      lVar28 = lVar28 + -0x10;
      func_0x00010988c204(lVar28);
    }
    *(long *)(pfVar13 + 0x98) = lVar23;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar13 + 0xb4) = uVar31;
  return;
}



/* Entry: 10a933444; end: 10a93347f;  */

long FUN_10a933444(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a933480; end: 10a933b63;  */

void FUN_10a933480(undefined8 param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long ***ppplVar12;
  undefined4 *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 auStack_178 [2];
  long **pplStack_170;
  undefined8 uStack_168;
  long **pplStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined4 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  int *piStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  long lStack_80;
  long lStack_78;
  
  pfVar7 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar7 + 0xb2) < 8) {
    *(undefined8 *)(pfVar7 + *(ulong *)(pfVar7 + 0xb2) * 2 + 0x9c) = *(undefined8 *)(pfVar7 + 0xb4);
    *(long *)(pfVar7 + 0xb2) = *(long *)(pfVar7 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar7 + 0x96);
  }
  FUN_10a933b64(param_5);
  FUN_10a13a07c(&plStack_1b0,param_2,param_4);
  pfVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar9 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  pfVar10 = param_2;
  func_0x000109898518(param_2,param_4 + 0x30);
  pfVar11 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x40);
  FUN_10a933b88(&plStack_1c0,param_2,param_4 + 0x50);
  FUN_10a91e59c(pfVar8,0,0,1);
  FUN_10a91e4d4(plStack_1b0[1],pfVar8);
  if ((uint)pfVar9 < 4) {
    if ((int)pfVar10 - 1U < 4) {
      if (((uint)ABS(*pfVar11) < 0x7f800000) && ((uint)ABS(pfVar11[1]) < 0x7f800000)) {
        iStack_e0 = (int)pfVar8[1];
        lVar18 = *plStack_1c0;
        uVar16 = plStack_1c0[1];
        iStack_dc = (int)*pfVar8;
        lStack_d8 = *plStack_1b0;
        uStack_e8 = 0x242ff0000;
        puStack_158 = &uStack_e8;
        piStack_a8 = &iStack_e0;
        lStack_c0 = 0;
        lStack_c8 = 0;
        lStack_b0 = 0;
        uStack_b8 = 0;
        alStack_98[0] = 0;
        alStack_98[1] = 0;
        lStack_d0 = lStack_d8;
        plStack_a0 = alStack_98;
        if ((lStack_d8 != 0) || ((long)iStack_dc * (long)iStack_e0 == 0)) {
          uStack_e8 = 0x242ff4000;
          alStack_98[0] = (long)iStack_dc;
          alStack_98[1] = 1;
          lStack_c8 = lStack_d8 + (long)iStack_dc * (long)iStack_e0;
          uStack_148._0_4_ = 0x42ff0000;
          puStack_108 = &uStack_140;
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_148._4_4_ = 0;
          uStack_140 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_11c = 0;
          uStack_124 = 0;
          uStack_120 = 0;
          lStack_110 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_150 = 0;
          pplStack_160._0_4_ = 0x1010000;
          auStack_178[0] = 0x2010000;
          uStack_168 = 0;
          plStack_198 = (long *)0x0;
          plStack_1a0 = (long *)0x0;
          uStack_188 = 0;
          uStack_190 = 0;
          ppplVar12 = &pplStack_160;
          pplStack_170 = (long **)&uStack_148;
          puStack_100 = &uStack_f8;
          lStack_c0 = lStack_c8;
          func_0x000109a4a0a4(ppplVar12,auStack_178,1,1,1,1,0,&plStack_1a0);
          plStack_1a0 = (long *)0x0;
          plStack_198 = (long *)0x0;
          uStack_190 = 0;
          pplStack_160 = (long **)CONCAT44(pplStack_160._4_4_,0x3010000);
          uStack_150 = 0;
          auStack_178[0] = 0x8204000c;
          uStack_168 = 0;
          uVar26 = *(undefined8 *)pfVar11;
          pplStack_170 = &plStack_1a0;
          puStack_158 = &uStack_148;
          func_0x000109a91d90();
          alStack_98[2] = CONCAT44((int)(float)((ulong)uVar26 >> 0x20) + -1,(int)(float)uVar26 + -1)
          ;
          func_0x000109adf8b0(&pplStack_160,auStack_178,ppplVar12,pfVar9,pfVar10,alStack_98 + 2);
          lVar24 = 0;
          if (plStack_198 != plStack_1a0) {
            lVar24 = LZCOUNT(((long)plStack_198 - (long)plStack_1a0 >> 3) * -0x5555555555555555) *
                     -2 + 0x7e;
          }
          FUN_10a9263f8(plStack_1a0,plStack_198,lVar24,1);
          lStack_1d8 = 0;
          lStack_1d0 = 0;
          uStack_1c8 = 0;
          func_0x000107c27e9c(&lStack_1d8,
                              ((long)plStack_198 - (long)plStack_1a0 >> 3) * -0x5555555555555555);
          plVar2 = plStack_198;
          if (plStack_1a0 != plStack_198) {
            uVar17 = 0;
            plVar21 = plStack_1a0;
            do {
              iVar14 = (int)uVar17;
              uVar17 = (plVar21[1] - *plVar21 >> 2) + (long)iVar14;
              if (uVar16 < uVar17) {
                if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                  func_0x00010ae06f08(1,2,&UNK_10f682fd8,&UNK_10f683198,0x267,&UNK_10f68324b);
                }
                break;
              }
              _memcpy(lVar18 + (long)iVar14 * 4);
              plVar22 = plVar21 + 3;
              pplStack_160 = (long **)CONCAT44(pplStack_160._4_4_,
                                               (int)((ulong)(plVar21[1] - *plVar21) >> 3));
              FUN_109febd04(&lStack_1d8,&pplStack_160);
              plVar21 = plVar22;
            } while (plVar22 != plVar2);
          }
          pplStack_160 = &plStack_1a0;
          func_0x00010a001298(&pplStack_160);
          if (lStack_110 != 0) {
            piVar1 = (int *)(lStack_110 + 0x14);
            do {
              iVar14 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_148);
            }
          }
          lStack_110 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          if (0 < uStack_148._4_4_) {
            lVar18 = 0;
            do {
              puStack_108[lVar18] = 0;
              lVar18 = lVar18 + 1;
            } while (lVar18 < uStack_148._4_4_);
          }
          if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
            _free(puStack_100[-1]);
          }
          if (lStack_b0 != 0) {
            piVar1 = (int *)(lStack_b0 + 0x14);
            do {
              iVar14 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          lStack_b0 = 0;
          lStack_d0 = 0;
          lStack_d8 = 0;
          lStack_c0 = 0;
          lStack_c8 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar18 = 0;
            do {
              piStack_a8[lVar18] = 0;
              lVar18 = lVar18 + 1;
            } while (lVar18 < uStack_e8._4_4_);
          }
          if (plStack_a0 != alStack_98 && plStack_a0 != (long *)0x0) {
            _free(plStack_a0[-1]);
          }
          if (plStack_1b8 != (long *)0x0) {
            plVar2 = plStack_1b8 + 1;
            do {
              lVar18 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
            }
          }
          if (plStack_1a8 != (long *)0x0) {
            plVar2 = plStack_1a8 + 1;
            do {
              lVar18 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
            }
          }
          FUN_10a2e43f8(param_1,param_2,lStack_1d8,lStack_1d0 - lStack_1d8 >> 2);
          if (lStack_1d8 != 0) {
            lStack_1d0 = lStack_1d8;
            __ZdlPv();
          }
          pfVar8 = pfVar7 + 0x96;
          uVar16 = *(long *)(pfVar7 + 0xb2) - 1;
          *(ulong *)(pfVar7 + 0xb2) = uVar16;
          if (uVar16 < 8) {
            uVar16 = *(ulong *)(pfVar8 + uVar16 * 2 + 6);
            if (*(ulong *)(pfVar7 + 0xb4) == uVar16) {
              return;
            }
          }
          else {
            uVar16 = *(ulong *)(*(long *)(pfVar7 + 0xae) + -8);
            *(ulong **)(pfVar7 + 0xae) = (ulong *)(*(long *)(pfVar7 + 0xae) + -8);
            if (*(ulong *)(pfVar7 + 0xb4) == uVar16) {
              return;
            }
          }
          lVar18 = *(long *)pfVar8;
          lVar24 = *(long *)(pfVar7 + 0x98);
          lVar20 = lVar24 - lVar18;
          uVar17 = lVar20 >> 4;
          if (uVar17 < uVar16) {
            uVar25 = uVar16 - uVar17;
            if ((ulong)(*(long *)(pfVar7 + 0x9a) - lVar24 >> 4) < uVar25) {
              if (uVar16 >> 0x3c == 0) {
                uVar15 = *(long *)(pfVar7 + 0x9a) - lVar18;
                uVar19 = (long)uVar15 >> 3;
                if (uVar19 <= uVar16) {
                  uVar19 = uVar16;
                }
                if (0x7fffffffffffffef < uVar15) {
                  uVar19 = 0xfffffffffffffff;
                }
                if (uVar19 >> 0x3c == 0) {
                  lVar6 = uVar19 << 4;
                  __Znwm();
                  lVar24 = lVar6 + lVar20;
                  _bzero(lVar24,uVar25 * 0x10);
                  lVar23 = lVar24 + uVar17 * -0x10;
                  _memcpy(lVar23,lVar18,lVar20);
                  *(long *)pfVar8 = lVar23;
                  *(ulong *)(pfVar7 + 0x98) = lVar24 + uVar25 * 0x10;
                  *(ulong *)(pfVar7 + 0x9a) = lVar6 + uVar19 * 0x10;
                  alStack_98[2] = lVar18;
                  lStack_80 = lVar18;
                  lStack_78 = lVar18;
                  func_0x00010988c1b8(alStack_98 + 2);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar5)();
            }
            _bzero(lVar24,uVar25 * 0x10);
            *(ulong *)(pfVar7 + 0x98) = lVar24 + uVar25 * 0x10;
          }
          else if (uVar16 < uVar17) {
            lVar18 = lVar18 + uVar16 * 0x10;
            while (lVar24 != lVar18) {
              lVar24 = lVar24 + -0x10;
              func_0x00010988c204(lVar24);
            }
            *(long *)(pfVar7 + 0x98) = lVar18;
          }
code_r0x00010988c138:
          *(ulong *)(pfVar7 + 0xb4) = uVar16;
          return;
        }
        puVar13 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        uStack_148 = puVar13 + 1;
        uStack_140 = 0x1c;
        uStack_13c = 0;
        *(undefined1 *)(puVar13 + 8) = 0;
        *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_148,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        FUN_10a00946c(&UNK_10f683167);
      }
    }
    else {
      FUN_10a0ee900(&uStack_e8,&UNK_10f683128,0x3e);
      FUN_10a0029c0(&uStack_e8);
    }
  }
  else {
    FUN_10a0ee900(&uStack_e8,&UNK_10f6830ef,0x38);
    FUN_10a0029c0(&uStack_e8);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a933a74);
  (*pcVar5)();
}



/* Entry: 10a933b64; end: 10a933b87;  */

void FUN_10a933b64(undefined8 param_1)

{
  undefined8 *puVar1;
  long *extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((int)param_1 == 6) {
    return;
  }
  FUN_10a052ee0(6,0,param_1);
  FUN_10a933bf8(&uStack_50);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c2f8a8;
  puVar1[4] = uStack_48;
  puVar1[3] = uStack_50;
  puVar1[6] = uStack_38;
  puVar1[5] = uStack_40;
  *extraout_x8 = (long)(puVar1 + 3);
  extraout_x8[1] = (long)puVar1;
  return;
}



/* Entry: 10a933b88; end: 10a933bf7;  */

void FUN_10a933b88(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a933bf8(&uStack_40);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c2f8a8;
  puVar1[4] = uStack_38;
  puVar1[3] = uStack_40;
  puVar1[6] = uStack_28;
  puVar1[5] = uStack_30;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a933bf8; end: 10a933c8b;  */

void FUN_10a933bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  func_0x0001098849a4(aiStack_30,param_2,param_3);
  FUN_10a933c8c(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a933c8c; end: 10a933f2f;  */

ulong * FUN_10a933c8c(ulong *param_1,long *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long lVar8;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (*param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar5 = param_2;
    plStack_70 = plVar4;
    (**(code **)(*param_2 + 0x58))(param_2);
    func_0x000109899ccc();
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x2e8))(param_2,&plStack_70,plVar5);
    if ((int)plVar4 != 0) {
      pplVar7 = &plStack_70;
      plVar5 = param_2;
      FUN_10a924804();
      *param_1 = (ulong)plVar5;
      param_1[1] = (ulong)pplVar7;
      FUN_10a12c3a8(auStack_58,auStack_88,param_3);
      FUN_10a12c8c0(param_1 + 2,auStack_58);
      if (plStack_50 != (long *)0x0) {
        plVar5 = plStack_50 + 1;
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
        }
      }
    }
    if (plStack_70 != (long *)0x0) {
      (**(code **)*plStack_70)();
    }
    if (((ulong)plVar4 & 1) != 0) {
      return param_1;
    }
  }
  puStack_c8 = &DAT_10f58258e;
  uStack_c0 = 10;
  func_0x0001098998d4(auStack_b8,&puStack_c8);
  FUN_109feb280(auStack_a0,&UNK_10f493d5b,auStack_b8);
  FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f582552);
  func_0x000109899970(&puStack_e0,param_2,param_3);
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    puStack_e0 = (undefined1 *)&puStack_e0;
  }
  puVar6 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,puStack_e0,uStack_d8);
  uStack_68 = puVar6[1];
  plStack_70 = (long *)*puVar6;
  uStack_60 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  FUN_10a012db0(auStack_58,&plStack_70,&DAT_10f638984);
  func_0x00010989842c(auStack_58);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a933e64);
  (*pcVar3)();
}



/* Entry: 10a933f30; end: 10a933f6b;  */

long FUN_10a933f30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a933f6c; end: 10a9342b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a93413c) */
/* WARNING: Removing unreachable block (ram,0x00010a934144) */

void FUN_10a933f6c(undefined8 param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  int aiStack_98 [2];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar8 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar8 + 0xb2) < 8) {
    *(long *)(pfVar8 + *(ulong *)(pfVar8 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar8 + 0xb4);
    *(long *)(pfVar8 + 0xb2) = *(long *)(pfVar8 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar8 + 0x96);
  }
  FUN_10a9322d4(param_5);
  FUN_10a1f7d54(&plStack_e8,param_2,param_4);
  pfVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a91e59c();
  FUN_10a91e4d4(plStack_e8[1],pfVar9);
  aiStack_98[1] = (int)*pfVar9;
  lStack_90 = *plStack_e8;
  uStack_a0 = 0x242ff000d;
  plStack_d0 = &uStack_a0;
  aiStack_98[0] = 1;
  lStack_78 = 0;
  lStack_80 = 0;
  pfStack_68 = (float *)0x0;
  lStack_70 = 0;
  lStack_88 = lStack_90;
  if (aiStack_98[1] != 0 && lStack_90 == 0) {
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    plStack_d8 = (long *)(puVar11 + 1);
    plStack_d0 = (long *)0x1c;
    *(undefined1 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&plStack_d8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a934254);
    (*pcVar6)();
  }
  uStack_a0 = 0x242ff400d;
  lStack_80 = lStack_90 + (long)aiStack_98[1] * 8;
  uStack_c8 = 0;
  plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,0x1010000);
  lStack_78 = lStack_80;
  func_0x000109b408b4(&lStack_c0,&plStack_d8);
  plVar10 = (long *)0x48;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110c2f8f8;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plStack_d8 = plVar10 + 3;
  *plStack_d8 = (long)&PTR_DAT_110c6a9a8;
  plVar10[7] = lStack_b8;
  plVar10[6] = lStack_c0;
  *(undefined4 *)(plVar10 + 8) = uStack_b0;
  plStack_d0 = plVar10;
  if (pfStack_68 != (float *)0x0) {
    piVar1 = (int *)((long)pfStack_68 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  if (0 < uStack_a0._4_4_) {
    lVar13 = 0;
    do {
      aiStack_98[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_a0._4_4_);
  }
  pfStack_68 = (float *)0x0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  if (plStack_e0 != (long *)0x0) {
    plVar10 = plStack_e0 + 1;
    do {
      lVar13 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  FUN_10a9342b8(param_1,param_2,&plStack_d8);
  plVar10 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar2 = plStack_d0 + 1;
    do {
      lVar13 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  pfVar9 = pfVar8 + 0x96;
  uVar12 = *(long *)(pfVar8 + 0xb2) - 1;
  *(ulong *)(pfVar8 + 0xb2) = uVar12;
  if (uVar12 < 8) {
    uVar12 = *(ulong *)(pfVar9 + uVar12 * 2 + 6);
    if (*(ulong *)(pfVar8 + 0xb4) == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(*(long *)(pfVar8 + 0xae) + -8);
    *(ulong **)(pfVar8 + 0xae) = (ulong *)(*(long *)(pfVar8 + 0xae) + -8);
    if (*(ulong *)(pfVar8 + 0xb4) == uVar12) {
      return;
    }
  }
  lVar13 = *(long *)pfVar9;
  lVar17 = *(long *)(pfVar8 + 0x98);
  lVar15 = lVar17 - lVar13;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar12) {
    uVar20 = uVar12 - uVar19;
    lVar18 = *(long *)(pfVar8 + 0x9a);
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar14 = lVar18 - lVar13 >> 3;
        if (uVar14 <= uVar12) {
          uVar14 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar13)) {
          uVar14 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar9;
        if (uVar14 >> 0x3c == 0) {
          lVar7 = uVar14 << 4;
          __Znwm();
          lVar17 = lVar7 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar13,lVar15);
          *(long *)pfVar9 = lVar16;
          *(ulong *)(pfVar8 + 0x98) = lVar17 + uVar20 * 0x10;
          *(ulong *)(pfVar8 + 0x9a) = lVar7 + uVar14 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar18;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(lVar17,uVar20 * 0x10);
    *(ulong *)(pfVar8 + 0x98) = lVar17 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar19) {
    lVar13 = lVar13 + uVar12 * 0x10;
    while (lVar17 != lVar13) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    *(long *)(pfVar8 + 0x98) = lVar13;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar8 + 0xb4) = uVar12;
  return;
}



/* Entry: 10a9342b8; end: 10a934393;  */

void FUN_10a9342b8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppuStack_38 = &PTR_DAT_110c6b2a0;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a934394; end: 10a9343cf;  */

long FUN_10a934394(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a9343d0; end: 10a93464f;  */

void FUN_10a9343d0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a934650(param_5);
  if (*param_4 == 1) {
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
  }
  else {
    plVar9 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar9 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a934604;
    }
    func_0x00010989879c(&stack0xffffffffffffffa0);
    if ((in_stack_ffffffffffffffa0 == 0) ||
       (___dynamic_cast(in_stack_ffffffffffffffa0,&PTR_DAT_110b178e0,&PTR_DAT_110c6b2a0,0),
       in_stack_ffffffffffffffa0 == 0)) {
      plVar9 = &lStack_70;
    }
    else {
      plVar9 = (long *)&stack0xffffffffffffffa0;
      lStack_70 = in_stack_ffffffffffffffa0;
      plStack_68 = in_stack_ffffffffffffffa8;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    if (in_stack_ffffffffffffffa8 != (long *)0x0) {
      plVar9 = in_stack_ffffffffffffffa8 + 1;
      do {
        lVar12 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
      }
    }
    if (lStack_70 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a934604;
    }
  }
  lVar12 = lStack_70;
  FUN_10a1f7d54(&puStack_80,param_2,param_4 + 4);
  puStack_88 = (undefined8 *)puStack_80[1];
  if (puStack_88 < (undefined8 *)0x8) {
    FUN_10a0ee900(&stack0xffffffffffffffa0,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&stack0xffffffffffffffa0);
LAB_10a934604:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a934608);
    (*pcVar6)();
  }
  auVar18._0_4_ = (int)*(float *)(lVar12 + 0x18);
  auVar18._4_4_ = (int)*(float *)(lVar12 + 0x1c);
  auVar18._8_4_ = (int)*(float *)(lVar12 + 0x20);
  auVar18._12_4_ = (int)*(float *)(lVar12 + 0x24);
  NEON_scvtf(auVar18,4);
  func_0x000109a9bd44(&stack0xffffffffffffffa0,*puStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar9 = plStack_78 + 1;
    do {
      lVar12 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  plVar9 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  *param_1 = 0;
  plVar9 = plVar8 + 0x4b;
  lVar12 = plVar8[0x59];
  uVar10 = lVar12 - 1;
  plVar8[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar9[lVar12 + 2];
    if (plVar8[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar10) {
      return;
    }
  }
  puVar3 = (undefined8 *)*plVar9;
  puVar14 = (undefined8 *)plVar8[0x4c];
  lVar12 = (long)puVar14 - (long)puVar3;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar8[0x4d];
    if ((ulong)(lVar15 - (long)puVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - (long)puVar3 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)puVar3)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar11 >> 0x3c == 0) {
          lVar7 = uVar11 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar12;
          _bzero(lVar2,uVar17 * 0x10);
          lVar13 = lVar2 + uVar16 * -0x10;
          _memcpy(lVar13,puVar3,lVar12);
          *plVar9 = lVar13;
          plVar8[0x4c] = lVar2 + uVar17 * 0x10;
          plVar8[0x4d] = lVar7 + uVar11 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          plStack_78 = puVar3;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&puStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(puVar14,uVar17 * 0x10);
    plVar8[0x4c] = (long)(puVar14 + uVar17 * 2);
  }
  else if (uVar10 < uVar16) {
    while (puVar14 != puVar3 + uVar10 * 2) {
      puVar14 = puVar14 + -2;
      func_0x00010988c204(puVar14);
    }
    plVar8[0x4c] = (long)(puVar3 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar10;
  return;
}



/* Entry: 10a934650; end: 10a934673;  */

long FUN_10a934650(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  lVar4 = 2;
  FUN_10a052ee0(2,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a934674; end: 10a9346af;  */

long FUN_10a934674(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a9346b0; end: 10a934a6f;  */

void FUN_10a9346b0(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined4 *puStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int *piStack_70;
  float *pfStack_68;
  
  pfVar10 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar10 + 0xb2) < 8) {
    *(long *)(pfVar10 + *(ulong *)(pfVar10 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar10 + 0xb4);
    *(long *)(pfVar10 + 0xb2) = *(long *)(pfVar10 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar10 + 0x96);
  }
  FUN_10a934a70(param_5);
  FUN_10a1f7d54(&plStack_e0,param_2,param_4);
  pfVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a933b88(&puStack_f0,param_2,param_4 + 0x20);
  pfVar12 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  pfVar13 = param_2;
  func_0x00010a1fba38(param_2,param_4 + 0x40);
  pfVar14 = param_2;
  func_0x000109898518(param_2,param_4 + 0x50);
  func_0x000109898518(param_2,param_4 + 0x60);
  FUN_10a91e4d4(plStack_e0[1],pfVar11);
  FUN_10a91e59c(pfVar12,0,1,2);
  FUN_10a91e4d4(puStack_f0[1],pfVar12);
  iStack_a8 = (int)pfVar11[1];
  iStack_a4 = (int)*pfVar11;
  uVar7 = (int)pfVar11[2] * 8 - 3;
  lStack_a0 = *plStack_e0;
  uVar3 = uVar7 & 0xfff;
  uStack_b0 = uVar3 | 0x42ff0000;
  iStack_ac = 2;
  piStack_70 = &iStack_a8;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = lStack_a0;
  pfStack_68 = (float *)&stack0xffffffffffffffa0;
  if (((long)iStack_a4 * (long)iStack_a8 != 0) && (lStack_a0 == 0)) {
    puVar15 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    puStack_d0 = puVar15 + 1;
    dStack_c8 = 1.38338380835549e-322;
    *(undefined1 *)(puVar15 + 8) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&puStack_d0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9349fc);
    (*pcVar8)();
  }
  uStack_b0 = uVar3 | 0x42ff4000;
  lStack_90 = lStack_a0 + (long)(int)((uVar7 >> 1 & 0x7fc) + 4) * (long)iStack_a4 * (long)iStack_a8;
  puStack_d0 = (undefined4 *)(double)(float)*(long *)pfVar13;
  dStack_c8 = (double)(float)((ulong)*(long *)pfVar13 >> 0x20);
  dStack_c0 = (double)(float)*(long *)(pfVar13 + 2);
  dStack_b8 = (double)(float)((ulong)*(long *)(pfVar13 + 2) >> 0x20);
  lStack_88 = lStack_90;
  func_0x000109aef11c(&uStack_b0,*puStack_f0,(int)*pfVar12,&puStack_d0,pfVar14,param_2);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  if (0 < iStack_ac) {
    lVar17 = 0;
    do {
      piStack_70[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_ac);
  }
  if (pfStack_68 != (float *)&stack0xffffffffffffffa0 && pfStack_68 != (float *)0x0) {
    _free(*(long *)(pfStack_68 + -2));
  }
  if (plStack_e8 != (long *)0x0) {
    plVar2 = plStack_e8 + 1;
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
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  *param_1 = 0;
  pfVar11 = pfVar10 + 0x96;
  uVar16 = *(long *)(pfVar10 + 0xb2) - 1;
  *(ulong *)(pfVar10 + 0xb2) = uVar16;
  if (uVar16 < 8) {
    uVar16 = *(ulong *)(pfVar11 + uVar16 * 2 + 6);
    if (*(ulong *)(pfVar10 + 0xb4) == uVar16) {
      return;
    }
  }
  else {
    uVar16 = *(ulong *)(*(long *)(pfVar10 + 0xae) + -8);
    *(ulong **)(pfVar10 + 0xae) = (ulong *)(*(long *)(pfVar10 + 0xae) + -8);
    if (*(ulong *)(pfVar10 + 0xb4) == uVar16) {
      return;
    }
  }
  lVar17 = *(long *)pfVar11;
  lVar21 = *(long *)(pfVar10 + 0x98);
  lVar19 = lVar21 - lVar17;
  uVar23 = lVar19 >> 4;
  if (uVar23 < uVar16) {
    uVar24 = uVar16 - uVar23;
    lVar22 = *(long *)(pfVar10 + 0x9a);
    if ((ulong)(lVar22 - lVar21 >> 4) < uVar24) {
      if (uVar16 >> 0x3c == 0) {
        uVar18 = lVar22 - lVar17 >> 3;
        if (uVar18 <= uVar16) {
          uVar18 = uVar16;
        }
        if (0x7fffffffffffffef < (ulong)(lVar22 - lVar17)) {
          uVar18 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar11;
        if (uVar18 >> 0x3c == 0) {
          lVar9 = uVar18 << 4;
          __Znwm();
          lVar21 = lVar9 + lVar19;
          _bzero(lVar21,uVar24 * 0x10);
          lVar20 = lVar21 + uVar23 * -0x10;
          _memcpy(lVar20,lVar17,lVar19);
          *(long *)pfVar11 = lVar20;
          *(ulong *)(pfVar10 + 0x98) = lVar21 + uVar24 * 0x10;
          *(ulong *)(pfVar10 + 0x9a) = lVar9 + uVar18 * 0x10;
          lStack_88 = lVar17;
          lStack_80 = lVar17;
          lStack_78 = lVar17;
          piStack_70 = (int *)lVar22;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar8)();
    }
    _bzero(lVar21,uVar24 * 0x10);
    *(ulong *)(pfVar10 + 0x98) = lVar21 + uVar24 * 0x10;
  }
  else if (uVar16 < uVar23) {
    lVar17 = lVar17 + uVar16 * 0x10;
    while (lVar21 != lVar17) {
      lVar21 = lVar21 + -0x10;
      func_0x00010988c204(lVar21);
    }
    *(long *)(pfVar10 + 0x98) = lVar17;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar10 + 0xb4) = uVar16;
  return;
}



/* Entry: 10a934a70; end: 10a934a93;  */

long FUN_10a934a70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 7) {
    return param_1;
  }
  lVar4 = 7;
  FUN_10a052ee0(7,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a934a94; end: 10a934acf;  */

long FUN_10a934a94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a934ad0; end: 10a93550b;  */

void FUN_10a934ad0(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long ****pppplVar4;
  uint uVar5;
  long ***ppplVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long ****pppplVar16;
  undefined4 *puVar17;
  float **ppfVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long ***ppplVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  ulong uVar32;
  ulong uVar33;
  float *pfStack_188;
  float *pfStack_180;
  float *pfStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long ***ppplStack_150;
  undefined8 uStack_148;
  float *pfStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  float **ppfStack_f0;
  float **ppfStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  pfVar13 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar13 + 0xb2) < 8) {
    *(long *)(pfVar13 + *(ulong *)(pfVar13 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar13 + 0xb4);
    *(long *)(pfVar13 + 0xb2) = *(long *)(pfVar13 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar13 + 0x96);
  }
  FUN_10a93550c(param_5);
  FUN_10a1f7d54(&puStack_170,param_2,param_4);
  pfVar14 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 7) {
    pfVar15 = param_2;
    (**(code **)(*(long *)param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x28));
    pfVar27 = param_2;
    uStack_110 = pfVar15;
    (**(code **)(*(long *)param_2 + 0x208))(param_2,&uStack_110);
    if (((ulong)pfVar27 & 1) != 0) {
      pfStack_140 = uStack_110;
      ppfVar18 = &pfStack_140;
      pfVar15 = param_2;
      (**(code **)(*(long *)param_2 + 0x268))();
      pfStack_188 = (float *)0x0;
      pfStack_180 = (float *)0x0;
      pfStack_178 = (float *)0x0;
      if (pfVar15 != (float *)0x0) {
        if ((ulong)pfVar15 >> 0x3c != 0) {
          func_0x00010a935530();
          goto LAB_10a93538c;
        }
        pfVar27 = pfVar15;
        ppfStack_f0 = &pfStack_188;
        FUN_10a935544();
        pfVar31 = (float *)((long)pfVar27 - ((long)pfStack_180 - (long)pfStack_188));
        _memcpy(pfVar31);
        pfStack_100 = pfStack_188;
        pfStack_f8 = pfStack_178;
        uStack_110 = pfStack_188;
        uStack_108 = pfStack_188;
        pfStack_188 = pfVar31;
        pfStack_180 = pfVar27;
        pfStack_178 = pfVar27 + (long)ppfVar18 * 4;
        func_0x00010a935578(&uStack_110);
        pfVar27 = (float *)0x0;
        do {
          (**(code **)(*(long *)param_2 + 0x288))(&ppplStack_128,param_2,&pfStack_140,pfVar27);
          pppplVar16 = &ppplStack_128;
          FUN_10a933b88(&ppplStack_b0,param_2);
          if (pfStack_180 < pfStack_178) {
            *(long ****)(pfStack_180 + 2) = ppplStack_a8;
            *(long ****)pfStack_180 = ppplStack_b0;
            ppplStack_b0 = (long ***)0x0;
            ppplStack_a8 = (long ***)0x0;
            pfStack_180 = pfStack_180 + 4;
          }
          else {
            lVar23 = (long)pfStack_180 - (long)pfStack_188;
            uVar25 = (lVar23 >> 4) + 1;
            if (uVar25 >> 0x3c != 0) {
              func_0x00010a935530();
              goto LAB_10a93538c;
            }
            uVar32 = (long)pfStack_178 - (long)pfStack_188 >> 3;
            if (uVar32 <= uVar25) {
              uVar32 = uVar25;
            }
            if (0x7fffffffffffffef < (ulong)((long)pfStack_178 - (long)pfStack_188)) {
              uVar32 = 0xfffffffffffffff;
            }
            ppfStack_f0 = &pfStack_188;
            FUN_10a935544();
            puVar3 = (undefined8 *)(uVar32 + lVar23);
            pfVar28 = (float *)(puVar3 + 2);
            puVar3[1] = ppplStack_a8;
            *puVar3 = ppplStack_b0;
            ppplStack_b0 = (long ***)0x0;
            ppplStack_a8 = (long ***)0x0;
            pfVar31 = (float *)((long)puVar3 - ((long)pfStack_180 - (long)pfStack_188));
            _memcpy(pfVar31);
            pfStack_100 = pfStack_188;
            pfStack_f8 = pfStack_178;
            uStack_110 = pfStack_188;
            uStack_108 = pfStack_188;
            pfStack_188 = pfVar31;
            pfStack_180 = pfVar28;
            pfStack_178 = (float *)(uVar32 + (long)pppplVar16 * 0x10);
            func_0x00010a935578(&uStack_110);
            ppplVar6 = ppplStack_a8;
            pfStack_180 = pfVar28;
            if ((long ****)ppplStack_a8 != (long ****)0x0) {
              pppplVar16 = (long ****)(ppplStack_a8 + 1);
              do {
                ppplVar22 = *pppplVar16;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
                if (bVar9) {
                  *pppplVar16 = (long ***)((long)ppplVar22 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppplVar22 == (long ***)0x0) {
                (*(code *)(*ppplStack_a8)[2])(ppplStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar6);
              }
            }
          }
          if ((3 < (int)ppplStack_128) && ((long ****)ppplStack_120 != (long ****)0x0)) {
            (*(code *)**ppplStack_120)();
          }
          pfVar27 = (float *)((long)pfVar27 + 1);
        } while (pfVar27 != pfVar15);
      }
      if (pfStack_140 != (float *)0x0) {
        (*(code *)**(undefined8 **)pfStack_140)();
      }
      pfVar15 = param_2;
      func_0x00010a1fba38(param_2,param_4 + 0x30);
      pfVar27 = param_2;
      func_0x000109898518(param_2,param_4 + 0x40);
      pfVar31 = param_2;
      func_0x000109898518(param_2,param_4 + 0x50);
      FUN_10a05a42c(param_2,param_4 + 0x60);
      FUN_10a91e4d4(puStack_170[1],pfVar14);
      iVar24 = (int)pfVar14[1];
      iVar20 = (int)*pfVar14;
      uVar10 = (int)pfVar14[2] * 8 - 3;
      pfStack_100 = (float *)*puStack_170;
      uVar5 = uVar10 & 0xfff;
      uStack_110 = (float *)CONCAT44(2,uVar5 | 0x42ff0000);
      puStack_d0 = &uStack_108;
      uStack_108 = (float *)CONCAT44(iVar20,iVar24);
      ppfStack_e8 = (float **)0x0;
      ppfStack_f0 = (float **)0x0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      pfStack_f8 = pfStack_100;
      plStack_c8 = &lStack_c0;
      if ((long)iVar20 * (long)iVar24 == 0 || pfStack_100 != (float *)0x0) {
        uVar10 = (uVar10 >> 1 & 0x7fc) + 4;
        uStack_b8 = (ulong)uVar10;
        lStack_c0 = (long)(int)uVar10 * (long)iVar20;
        uStack_110 = (float *)CONCAT44(2,uVar5 + 0x42ff4000);
        ppfStack_f0 = (float **)((long)pfStack_100 + lStack_c0 * iVar24);
        ppplStack_128 = (long ***)0x0;
        ppplStack_120 = (long ***)0x0;
        ppplStack_118 = (long ***)0x0;
        ppfStack_e8 = ppfStack_f0;
        func_0x00010955a6c4(&ppplStack_128,(long)pfStack_180 - (long)pfStack_188 >> 4);
        pfVar14 = pfStack_180;
        if (pfStack_188 != pfStack_180) {
          pfVar28 = pfStack_188;
          do {
            plStack_158 = *(long **)pfVar28;
            plVar7 = *(long **)(pfVar28 + 2);
            if (plVar7 != (long *)0x0) {
              plVar1 = plVar7 + 1;
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar9) {
                  *plVar1 = *plVar1 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            ppplVar6 = (long ***)*plStack_158;
            uVar25 = (ulong)plStack_158[1] >> 1;
            ppplStack_150 = (long ***)plVar7;
            if (ppplStack_120 < ppplStack_118) {
              *ppplStack_120 = (long **)0x242ff000c;
              *(undefined4 *)(ppplStack_120 + 1) = 1;
              *(int *)((long)ppplStack_120 + 0xc) = (int)uVar25;
              ppplStack_120[2] = (long **)ppplVar6;
              ppplStack_120[3] = (long **)ppplVar6;
              ppplStack_120[5] = (long **)0x0;
              ppplStack_120[4] = (long **)0x0;
              ppplStack_120[7] = (long **)0x0;
              ppplStack_120[6] = (long **)0x0;
              ppplStack_120[10] = (long **)0x0;
              ppplStack_120[8] = (long **)(ppplStack_120 + 1);
              ppplStack_120[9] = (long **)(ppplStack_120 + 10);
              ppplStack_120[0xb] = (long **)0x0;
              if ((ppplVar6 == (long ***)0x0) && (uVar25 << 0x20 != 0)) {
                puVar17 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar17 = 1;
                ppplStack_b0 = (long ***)(puVar17 + 1);
                ppplStack_a8 = (long ***)0x1c;
                *(undefined1 *)(puVar17 + 8) = 0;
                *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
                func_0x000109ac3188(0xffffff29,&ppplStack_b0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                goto LAB_10a93538c;
              }
              ppplVar22 = (long ***)((long)(uVar25 << 0x20) >> 0x1d);
              *(undefined4 *)ppplStack_120 = 0x42ff400c;
              ppplStack_120[10] = (long **)ppplVar22;
              ppplStack_120[0xb] = (long **)0x8;
              ppplVar6 = (long ***)((long)ppplVar6 + (long)ppplVar22);
              ppplStack_120[4] = (long **)ppplVar6;
              ppplStack_120[5] = (long **)ppplVar6;
              pppplVar16 = (long ****)(ppplStack_120 + 0xc);
            }
            else {
              lVar23 = (long)ppplStack_120 - (long)ppplStack_128;
              uVar32 = (lVar23 >> 5) * -0x5555555555555555 + 1;
              if (0x2aaaaaaaaaaaaaa < uVar32) {
                FUN_109ffe390();
                goto LAB_10a93538c;
              }
              lVar30 = (long)ppplStack_118 - (long)ppplStack_128 >> 5;
              uVar33 = lVar30 * 0x5555555555555556;
              if (uVar33 < uVar32 || uVar33 - uVar32 == 0) {
                uVar33 = uVar32;
              }
              if (0x155555555555554 < (ulong)(lVar30 * -0x5555555555555555)) {
                uVar33 = 0x2aaaaaaaaaaaaaa;
              }
              ppplStack_90 = (long ***)&ppplStack_128;
              if (uVar33 == 0) {
                pppplVar16 = (long ****)0x0;
              }
              else {
                pppplVar16 = &ppplStack_128;
                FUN_109ffe3a4();
              }
              pppplVar4 = (long ****)((long)pppplVar16 + lVar23);
              ppplStack_98 = (long ***)(pppplVar16 + uVar33 * 0xc);
              ppplStack_b0 = (long ***)pppplVar16;
              ppplStack_a8 = (long ***)pppplVar4;
              ppplStack_a0 = (long ***)pppplVar4;
              *pppplVar4 = (long ***)0x242ff000c;
              *(undefined4 *)(pppplVar4 + 1) = 1;
              *(int *)((long)pppplVar4 + 0xc) = (int)uVar25;
              pppplVar4[2] = ppplVar6;
              pppplVar4[3] = ppplVar6;
              pppplVar4[5] = (long ***)0x0;
              pppplVar4[4] = (long ***)0x0;
              pppplVar4[7] = (long ***)0x0;
              pppplVar4[6] = (long ***)0x0;
              pppplVar4[10] = (long ***)0x0;
              pppplVar4[8] = (long ***)(pppplVar4 + 1);
              pppplVar4[9] = (long ***)(pppplVar4 + 10);
              pppplVar4[0xb] = (long ***)0x0;
              if ((ppplVar6 == (long ***)0x0) && (uVar25 << 0x20 != 0)) {
                puVar17 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar17 = 1;
                pfStack_140 = (float *)(puVar17 + 1);
                puStack_138 = (undefined8 *)0x1c;
                *(undefined1 *)(puVar17 + 8) = 0;
                *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
                func_0x000109ac3188(0xffffff29,&pfStack_140,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                goto LAB_10a93538c;
              }
              ppplVar22 = (long ***)((long)(uVar25 << 0x20) >> 0x1d);
              *(undefined4 *)pppplVar4 = 0x42ff400c;
              pppplVar4[10] = ppplVar22;
              pppplVar4[0xb] = (long ***)0x8;
              ppplVar6 = (long ***)((long)ppplVar6 + (long)ppplVar22);
              pppplVar4[4] = ppplVar6;
              pppplVar4[5] = ppplVar6;
              ppplStack_a0 = (long ***)(pppplVar4 + 0xc);
              pppplVar4 = (long ****)((long)pppplVar4 + ((long)ppplStack_128 - (long)ppplStack_120))
              ;
              FUN_109ffe738(&ppplStack_128,ppplStack_128,ppplStack_120,pppplVar4);
              pppplVar16 = (long ****)ppplStack_a0;
              ppplVar6 = ppplStack_118;
              ppplStack_118 = ppplStack_98;
              ppplStack_120 = ppplStack_a0;
              ppplStack_a0 = ppplStack_128;
              ppplStack_98 = ppplVar6;
              ppplStack_b0 = ppplStack_128;
              ppplStack_a8 = ppplStack_128;
              ppplStack_128 = (long ***)pppplVar4;
              func_0x00010919d9fc(&ppplStack_b0);
            }
            ppplStack_120 = (long ***)pppplVar16;
            if (plVar7 != (long *)0x0) {
              plVar1 = plVar7 + 1;
              do {
                lVar23 = *plVar1;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar9) {
                  *plVar1 = lVar23 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            pfVar28 = pfVar28 + 4;
          } while (pfVar28 != pfVar14);
        }
        ppplStack_b0 = (long ***)(double)(float)*(long *)pfVar15;
        ppplStack_a8 = (long ***)(double)(float)((ulong)*(long *)pfVar15 >> 0x20);
        ppplStack_a0 = (long ***)(double)(float)*(long *)(pfVar15 + 2);
        ppplStack_98 = (long ***)(double)(float)((ulong)*(long *)(pfVar15 + 2) >> 0x20);
        pfStack_140 = (float *)CONCAT44(pfStack_140._4_4_,0x3010000);
        puStack_138 = &uStack_110;
        uStack_130 = 0;
        plStack_158 = (long *)CONCAT44(plStack_158._4_4_,0x1050000);
        uStack_148 = 0;
        uStack_160 = CONCAT44((int)(float)((ulong)*(long *)param_2 >> 0x20),
                              (int)(float)*(long *)param_2);
        ppplStack_150 = (long ***)&ppplStack_128;
        func_0x000109aefd90(&pfStack_140,&plStack_158,&ppplStack_b0,(int)pfVar27,
                            (ulong)pfVar31 & 0xffffffff,&uStack_160);
        ppplStack_b0 = (long ***)&ppplStack_128;
        FUN_109ffe3e8(&ppplStack_b0);
        if (lStack_d8 != 0) {
          piVar2 = (int *)(lStack_d8 + 0x14);
          do {
            iVar20 = *piVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = iVar20 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&uStack_110);
          }
        }
        lStack_d8 = 0;
        pfStack_f8 = (float *)0x0;
        pfStack_100 = (float *)0x0;
        ppfStack_e8 = (float **)0x0;
        ppfStack_f0 = (float **)0x0;
        if (0 < uStack_110._4_4_) {
          lVar23 = 0;
          do {
            *(undefined4 *)((long)puStack_d0 + lVar23 * 4) = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < uStack_110._4_4_);
        }
        if (plStack_c8 != &lStack_c0 && plStack_c8 != (long *)0x0) {
          _free(plStack_c8[-1]);
        }
        func_0x00010a9355c4(&pfStack_188);
        if (plStack_168 != (long *)0x0) {
          plVar7 = plStack_168 + 1;
          do {
            lVar23 = *plVar7;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *plVar7 = lVar23 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
          }
        }
        *param_1 = 0;
        pfVar14 = pfVar13 + 0x96;
        uVar25 = *(long *)(pfVar13 + 0xb2) - 1;
        *(ulong *)(pfVar13 + 0xb2) = uVar25;
        if (uVar25 < 8) {
          uVar25 = *(ulong *)(pfVar14 + uVar25 * 2 + 6);
          if (*(ulong *)(pfVar13 + 0xb4) == uVar25) {
            return;
          }
        }
        else {
          uVar25 = *(ulong *)(*(long *)(pfVar13 + 0xae) + -8);
          *(ulong **)(pfVar13 + 0xae) = (ulong *)(*(long *)(pfVar13 + 0xae) + -8);
          if (*(ulong *)(pfVar13 + 0xb4) == uVar25) {
            return;
          }
        }
        lVar23 = *(long *)pfVar14;
        lVar30 = *(long *)(pfVar13 + 0x98);
        lVar26 = lVar30 - lVar23;
        uVar32 = lVar26 >> 4;
        if (uVar32 < uVar25) {
          uVar33 = uVar25 - uVar32;
          if ((ulong)(*(long *)(pfVar13 + 0x9a) - lVar30 >> 4) < uVar33) {
            if (uVar25 >> 0x3c == 0) {
              uVar19 = *(long *)(pfVar13 + 0x9a) - lVar23;
              uVar21 = (long)uVar19 >> 3;
              if (uVar21 <= uVar25) {
                uVar21 = uVar25;
              }
              if (0x7fffffffffffffef < uVar19) {
                uVar21 = 0xfffffffffffffff;
              }
              if (uVar21 >> 0x3c == 0) {
                lVar12 = uVar21 << 4;
                __Znwm();
                lVar30 = lVar12 + lVar26;
                _bzero(lVar30,uVar33 * 0x10);
                lVar29 = lVar30 + uVar32 * -0x10;
                _memcpy(lVar29,lVar23,lVar26);
                *(long *)pfVar14 = lVar29;
                *(ulong *)(pfVar13 + 0x98) = lVar30 + uVar33 * 0x10;
                *(ulong *)(pfVar13 + 0x9a) = lVar12 + uVar21 * 0x10;
                lStack_88 = lVar23;
                lStack_80 = lVar23;
                lStack_78 = lVar23;
                func_0x00010988c1b8(&lStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar11)();
          }
          _bzero(lVar30,uVar33 * 0x10);
          *(ulong *)(pfVar13 + 0x98) = lVar30 + uVar33 * 0x10;
        }
        else if (uVar25 < uVar32) {
          lVar23 = lVar23 + uVar25 * 0x10;
          while (lVar30 != lVar23) {
            lVar30 = lVar30 + -0x10;
            func_0x00010988c204(lVar30);
          }
          *(long *)(pfVar13 + 0x98) = lVar23;
        }
code_r0x00010988c138:
        *(ulong *)(pfVar13 + 0xb4) = uVar25;
        return;
      }
      puVar17 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar17 = 1;
      ppplStack_b0 = (long ***)(puVar17 + 1);
      ppplStack_a8 = (long ***)0x1c;
      *(undefined1 *)(puVar17 + 8) = 0;
      *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&ppplStack_b0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      goto LAB_10a93538c;
    }
    if (uStack_110 != (float *)0x0) {
      (*(code *)**(undefined8 **)uStack_110)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a93538c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a935390);
  (*pcVar11)();
}



/* Entry: 10a93550c; end: 10a935543;  */

undefined1  [16] FUN_10a93550c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((int)param_1 == 7) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  uVar3 = 0;
  FUN_10a052ee0(7,0,param_1);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar6._8_8_ = plVar1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar4 = plVar1[2];
  while (lVar4 != lVar2) {
    plVar1[2] = lVar4 + -0x10;
    func_0x00010a93db9c();
    lVar4 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10a935544; end: 10a93561f;  */

undefined1  [16] FUN_10a935544(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a93db9c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a935620; end: 10a93565b;  */

long FUN_10a935620(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a93565c; end: 10a9359e7;  */

void FUN_10a93565c(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  uint *puStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int *piStack_88;
  undefined4 **ppuStack_80;
  int *piStack_78;
  ulong uStack_70;
  float *pfStack_68;
  
  pfVar11 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar11 + 0xb2) < 8) {
    *(long *)(pfVar11 + *(ulong *)(pfVar11 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar11 + 0xb4);
    *(long *)(pfVar11 + 0xb2) = *(long *)(pfVar11 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar11 + 0x96);
  }
  FUN_10a9359e8(param_5);
  FUN_10a1f7d54(&plStack_128,param_2,param_4);
  pfVar12 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar13 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x20);
  pfVar14 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x30);
  pfVar15 = param_2;
  func_0x00010a1fba38(param_2,param_4 + 0x40);
  pfVar16 = param_2;
  func_0x000109898518(param_2,param_4 + 0x50);
  pfVar17 = param_2;
  func_0x000109898518(param_2,param_4 + 0x60);
  func_0x000109898518(param_2,param_4 + 0x70);
  FUN_10a91e4d4(plStack_128[1],pfVar12);
  iStack_c0 = (int)pfVar12[1];
  iStack_bc = (int)*pfVar12;
  uVar8 = (int)pfVar12[2] * 8 - 3;
  lStack_b8 = *plStack_128;
  uVar4 = uVar8 & 0xfff;
  uStack_c8 = uVar4 | 0x42ff0000;
  iStack_c4 = 2;
  puStack_100 = &uStack_c8;
  piStack_88 = &iStack_c0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  piStack_78 = (int *)0x0;
  uStack_70 = 0;
  lStack_b0 = lStack_b8;
  ppuStack_80 = &piStack_78;
  if ((long)iStack_bc * (long)iStack_c0 != 0 && lStack_b8 == 0) {
    puVar18 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    puStack_f0 = puVar18 + 1;
    dStack_e8 = 1.38338380835549e-322;
    *(undefined1 *)(puVar18 + 8) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&puStack_f0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a935988);
    (*pcVar9)();
  }
  uVar8 = (uVar8 >> 1 & 0x7fc) + 4;
  uStack_70 = (ulong)uVar8;
  piStack_78 = (int *)((long)(int)uVar8 * (long)iStack_bc);
  uStack_c8 = uVar4 | 0x42ff4000;
  lStack_a8 = lStack_b8 + (long)piStack_78 * (long)iStack_c0;
  uStack_110 = CONCAT44((int)(float)((ulong)*(long *)pfVar13 >> 0x20),(int)(float)*(long *)pfVar13);
  uStack_118 = CONCAT44((int)(float)((ulong)*(long *)pfVar14 >> 0x20),(int)(float)*(long *)pfVar14);
  puStack_f0 = (undefined4 *)(double)(float)*(long *)pfVar15;
  dStack_e8 = (double)(float)((ulong)*(long *)pfVar15 >> 0x20);
  dStack_e0 = (double)(float)*(long *)(pfVar15 + 2);
  dStack_d8 = (double)(float)((ulong)*(long *)(pfVar15 + 2) >> 0x20);
  auStack_108[0] = 0x3010000;
  uStack_f8 = 0;
  lStack_a0 = lStack_a8;
  func_0x000109aed744(auStack_108,&uStack_110,&uStack_118,&puStack_f0,pfVar16,pfVar17,param_2);
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar5 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  if (0 < iStack_c4) {
    lVar20 = 0;
    do {
      piStack_88[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_c4);
  }
  if (ppuStack_80 != &piStack_78 && ppuStack_80 != (int **)0x0) {
    _free(ppuStack_80[-1]);
  }
  if (plStack_120 != (long *)0x0) {
    plVar2 = plStack_120 + 1;
    do {
      lVar20 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
    }
  }
  *param_1 = 0;
  pfVar12 = pfVar11 + 0x96;
  uVar19 = *(long *)(pfVar11 + 0xb2) - 1;
  *(ulong *)(pfVar11 + 0xb2) = uVar19;
  if (uVar19 < 8) {
    uVar19 = *(ulong *)(pfVar12 + uVar19 * 2 + 6);
    if (*(ulong *)(pfVar11 + 0xb4) == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(*(long *)(pfVar11 + 0xae) + -8);
    *(ulong **)(pfVar11 + 0xae) = (ulong *)(*(long *)(pfVar11 + 0xae) + -8);
    if (*(ulong *)(pfVar11 + 0xb4) == uVar19) {
      return;
    }
  }
  piVar1 = *(int **)pfVar12;
  piVar23 = *(int **)(pfVar11 + 0x98);
  lVar20 = (long)piVar23 - (long)piVar1;
  uVar25 = lVar20 >> 4;
  if (uVar25 < uVar19) {
    uVar26 = uVar19 - uVar25;
    lVar24 = *(long *)(pfVar11 + 0x9a);
    if ((ulong)(lVar24 - (long)piVar23 >> 4) < uVar26) {
      if (uVar19 >> 0x3c == 0) {
        uVar21 = lVar24 - (long)piVar1 >> 3;
        if (uVar21 <= uVar19) {
          uVar21 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar24 - (long)piVar1)) {
          uVar21 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar12;
        if (uVar21 >> 0x3c == 0) {
          lVar10 = uVar21 << 4;
          __Znwm();
          lVar3 = lVar10 + lVar20;
          _bzero(lVar3,uVar26 * 0x10);
          lVar22 = lVar3 + uVar25 * -0x10;
          _memcpy(lVar22,piVar1,lVar20);
          *(long *)pfVar12 = lVar22;
          *(ulong *)(pfVar11 + 0x98) = lVar3 + uVar26 * 0x10;
          *(ulong *)(pfVar11 + 0x9a) = lVar10 + uVar21 * 0x10;
          piStack_88 = piVar1;
          ppuStack_80 = (undefined4 **)piVar1;
          piStack_78 = piVar1;
          uStack_70 = lVar24;
          func_0x00010988c1b8(&piStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(piVar23,uVar26 * 0x10);
    *(int **)(pfVar11 + 0x98) = piVar23 + uVar26 * 4;
  }
  else if (uVar19 < uVar25) {
    while (piVar23 != piVar1 + uVar19 * 4) {
      piVar23 = piVar23 + -4;
      func_0x00010988c204(piVar23);
    }
    *(int **)(pfVar11 + 0x98) = piVar1 + uVar19 * 4;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar11 + 0xb4) = uVar19;
  return;
}



/* Entry: 10a9359e8; end: 10a935a0b;  */

long FUN_10a9359e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 8) {
    return param_1;
  }
  lVar4 = 8;
  FUN_10a052ee0(8,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a935a0c; end: 10a935a47;  */

long FUN_10a935a0c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a935a48; end: 10a935d13;  */

void FUN_10a935a48(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  float *pfStack_68;
  ulong in_stack_ffffffffffffffa0;
  
  pfVar11 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar11 + 0xb2) < 8) {
    *(long *)(pfVar11 + *(ulong *)(pfVar11 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar11 + 0xb4);
    *(long *)(pfVar11 + 0xb2) = *(long *)(pfVar11 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar11 + 0x96);
  }
  FUN_10a935d14(param_5);
  FUN_10a1f7d54(&plStack_80,param_2,param_4);
  pfVar12 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar13 = param_2;
  FUN_10a36c25c(param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_90,param_2,param_4 + 0x30);
  FUN_10a91e59c(pfVar12,0,1,3);
  FUN_10a91e4d4(plStack_80[1],pfVar12);
  uVar19 = plStack_90[1];
  FUN_10a8bcad0(&uStack_70,pfVar12);
  if ((uStack_70 != 0) && (pfStack_68 != (float *)0x0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_70;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = pfStack_68;
    if (SUB168(auVar5 * auVar7,8) != 0) {
LAB_10a935c90:
      FUN_10a00946c(&UNK_10f6818f4);
LAB_10a935cc0:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a935cc4);
      (*pcVar9)();
    }
    uStack_70 = uStack_70 * (long)pfStack_68;
    if ((uStack_70 != 0) && (in_stack_ffffffffffffffa0 != 0)) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uStack_70;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = in_stack_ffffffffffffffa0;
      if (SUB168(auVar6 * auVar8,8) != 0) goto LAB_10a935c90;
      if (uVar19 <= uStack_70 * in_stack_ffffffffffffffa0 &&
          uStack_70 * in_stack_ffffffffffffffa0 - uVar19 != 0) {
        FUN_10a0ee900(&stack0xffffffffffffffa8,&UNK_10f683b6e,0x5d);
        FUN_10a0029c0(&stack0xffffffffffffffa8);
        goto LAB_10a935cc0;
      }
    }
  }
  lVar14 = (long)*pfVar12;
  if (lVar14 != 0) {
    pfVar12 = (float *)(*plStack_80 + 8);
    pfVar16 = (float *)(*plStack_90 + 8);
    do {
      fVar23 = pfVar12[-2];
      fVar24 = pfVar12[-1];
      fVar25 = *pfVar12;
      fVar26 = pfVar13[2];
      fVar27 = pfVar13[6];
      fVar28 = pfVar13[10];
      fVar29 = pfVar13[0xe];
      *(ulong *)(pfVar16 + -2) =
           CONCAT44((float)((ulong)*(long *)pfVar13 >> 0x20) * fVar23 +
                    (float)((ulong)*(long *)(pfVar13 + 4) >> 0x20) * fVar24 +
                    (float)((ulong)*(long *)(pfVar13 + 8) >> 0x20) * fVar25 +
                    (float)((ulong)*(long *)(pfVar13 + 0xc) >> 0x20),
                    (float)*(long *)pfVar13 * fVar23 + (float)*(long *)(pfVar13 + 4) * fVar24 +
                    (float)*(long *)(pfVar13 + 8) * fVar25 + (float)*(long *)(pfVar13 + 0xc));
      *pfVar16 = fVar23 * fVar26 + fVar24 * fVar27 + fVar25 * fVar28 + fVar29;
      lVar14 = lVar14 + -1;
      pfVar12 = pfVar12 + 3;
      pfVar16 = pfVar16 + 3;
    } while (lVar14 != 0);
  }
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar14 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      lVar14 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  *param_1 = 0;
  pfVar12 = pfVar11 + 0x96;
  uVar19 = *(long *)(pfVar11 + 0xb2) - 1;
  *(ulong *)(pfVar11 + 0xb2) = uVar19;
  if (uVar19 < 8) {
    uVar19 = *(ulong *)(pfVar12 + uVar19 * 2 + 6);
    if (*(ulong *)(pfVar11 + 0xb4) == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(*(long *)(pfVar11 + 0xae) + -8);
    *(ulong **)(pfVar11 + 0xae) = (ulong *)(*(long *)(pfVar11 + 0xae) + -8);
    if (*(ulong *)(pfVar11 + 0xb4) == uVar19) {
      return;
    }
  }
  plVar2 = *(long **)pfVar12;
  plVar18 = *(long **)(pfVar11 + 0x98);
  lVar14 = (long)plVar18 - (long)plVar2;
  uVar21 = lVar14 >> 4;
  if (uVar21 < uVar19) {
    uVar22 = uVar19 - uVar21;
    uVar20 = *(ulong *)(pfVar11 + 0x9a);
    if ((ulong)((long)(uVar20 - (long)plVar18) >> 4) < uVar22) {
      if (uVar19 >> 0x3c == 0) {
        uVar15 = (long)(uVar20 - (long)plVar2) >> 3;
        if (uVar15 <= uVar19) {
          uVar15 = uVar19;
        }
        if (0x7fffffffffffffef < uVar20 - (long)plVar2) {
          uVar15 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar12;
        if (uVar15 >> 0x3c == 0) {
          lVar10 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar10 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar17 = lVar1 + uVar21 * -0x10;
          _memcpy(lVar17,plVar2,lVar14);
          *(long *)pfVar12 = lVar17;
          *(ulong *)(pfVar11 + 0x98) = lVar1 + uVar22 * 0x10;
          *(ulong *)(pfVar11 + 0x9a) = lVar10 + uVar15 * 0x10;
          plStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          uStack_70 = uVar20;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(plVar18,uVar22 * 0x10);
    *(long **)(pfVar11 + 0x98) = plVar18 + uVar22 * 2;
  }
  else if (uVar19 < uVar21) {
    while (plVar18 != plVar2 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    *(long **)(pfVar11 + 0x98) = plVar2 + uVar19 * 2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar11 + 0xb4) = uVar19;
  return;
}



/* Entry: 10a935d14; end: 10a935d37;  */

long FUN_10a935d14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 4) {
    return param_1;
  }
  lVar4 = 4;
  FUN_10a052ee0(4,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a935d38; end: 10a935d73;  */

long FUN_10a935d38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a935d74; end: 10a936063;  */

void FUN_10a935d74(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  float *pfStack_68;
  ulong in_stack_ffffffffffffffa0;
  
  pfVar11 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar11 + 0xb2) < 8) {
    *(long *)(pfVar11 + *(ulong *)(pfVar11 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar11 + 0xb4);
    *(long *)(pfVar11 + 0xb2) = *(long *)(pfVar11 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar11 + 0x96);
  }
  FUN_10a935d14(param_5);
  FUN_10a1f7d54(&plStack_80,param_2,param_4);
  pfVar12 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar13 = param_2;
  FUN_10a36c25c(param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_90,param_2,param_4 + 0x30);
  FUN_10a91e59c(pfVar12,0,1,3);
  FUN_10a91e4d4(plStack_80[1],pfVar12);
  uVar19 = plStack_90[1];
  FUN_10a8bcad0(&uStack_70,pfVar12);
  if ((uStack_70 != 0) && (pfStack_68 != (float *)0x0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_70;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = pfStack_68;
    if (SUB168(auVar5 * auVar7,8) != 0) {
LAB_10a935fe0:
      FUN_10a00946c(&UNK_10f6818f4);
LAB_10a936010:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a936014);
      (*pcVar9)();
    }
    uStack_70 = uStack_70 * (long)pfStack_68;
    if ((uStack_70 != 0) && (in_stack_ffffffffffffffa0 != 0)) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uStack_70;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = in_stack_ffffffffffffffa0;
      if (SUB168(auVar6 * auVar8,8) != 0) goto LAB_10a935fe0;
      if (uVar19 <= uStack_70 * in_stack_ffffffffffffffa0 &&
          uStack_70 * in_stack_ffffffffffffffa0 - uVar19 != 0) {
        FUN_10a0ee900(&stack0xffffffffffffffa8,&UNK_10f683b6e,0x5d);
        FUN_10a0029c0(&stack0xffffffffffffffa8);
        goto LAB_10a936010;
      }
    }
  }
  lVar14 = (long)*pfVar12;
  if (lVar14 != 0) {
    pfVar12 = (float *)(*plStack_80 + 8);
    pfVar16 = (float *)(*plStack_90 + 8);
    do {
      fVar23 = pfVar12[-2];
      fVar24 = pfVar12[-1];
      fVar25 = *pfVar12;
      fVar26 = pfVar13[2];
      fVar28 = pfVar13[6];
      fVar29 = pfVar13[10];
      fVar30 = pfVar13[0xe];
      fVar27 = fVar23 * pfVar13[3] + fVar24 * pfVar13[7] + fVar25 * pfVar13[0xb] + pfVar13[0xf];
      *(ulong *)(pfVar16 + -2) =
           CONCAT44(((float)((ulong)*(long *)pfVar13 >> 0x20) * fVar23 +
                     (float)((ulong)*(long *)(pfVar13 + 4) >> 0x20) * fVar24 +
                    (float)((ulong)*(long *)(pfVar13 + 8) >> 0x20) * fVar25 +
                    (float)((ulong)*(long *)(pfVar13 + 0xc) >> 0x20)) / fVar27,
                    ((float)*(long *)pfVar13 * fVar23 + (float)*(long *)(pfVar13 + 4) * fVar24 +
                    (float)*(long *)(pfVar13 + 8) * fVar25 + (float)*(long *)(pfVar13 + 0xc)) /
                    fVar27);
      *pfVar16 = (fVar23 * fVar26 + fVar24 * fVar28 + fVar25 * fVar29 + fVar30) / fVar27;
      lVar14 = lVar14 + -1;
      pfVar12 = pfVar12 + 3;
      pfVar16 = pfVar16 + 3;
    } while (lVar14 != 0);
  }
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar14 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      lVar14 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  *param_1 = 0;
  pfVar12 = pfVar11 + 0x96;
  uVar19 = *(long *)(pfVar11 + 0xb2) - 1;
  *(ulong *)(pfVar11 + 0xb2) = uVar19;
  if (uVar19 < 8) {
    uVar19 = *(ulong *)(pfVar12 + uVar19 * 2 + 6);
    if (*(ulong *)(pfVar11 + 0xb4) == uVar19) {
      return;
    }
  }
  else {
    uVar19 = *(ulong *)(*(long *)(pfVar11 + 0xae) + -8);
    *(ulong **)(pfVar11 + 0xae) = (ulong *)(*(long *)(pfVar11 + 0xae) + -8);
    if (*(ulong *)(pfVar11 + 0xb4) == uVar19) {
      return;
    }
  }
  plVar2 = *(long **)pfVar12;
  plVar18 = *(long **)(pfVar11 + 0x98);
  lVar14 = (long)plVar18 - (long)plVar2;
  uVar21 = lVar14 >> 4;
  if (uVar21 < uVar19) {
    uVar22 = uVar19 - uVar21;
    uVar20 = *(ulong *)(pfVar11 + 0x9a);
    if ((ulong)((long)(uVar20 - (long)plVar18) >> 4) < uVar22) {
      if (uVar19 >> 0x3c == 0) {
        uVar15 = (long)(uVar20 - (long)plVar2) >> 3;
        if (uVar15 <= uVar19) {
          uVar15 = uVar19;
        }
        if (0x7fffffffffffffef < uVar20 - (long)plVar2) {
          uVar15 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar12;
        if (uVar15 >> 0x3c == 0) {
          lVar10 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar10 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar17 = lVar1 + uVar21 * -0x10;
          _memcpy(lVar17,plVar2,lVar14);
          *(long *)pfVar12 = lVar17;
          *(ulong *)(pfVar11 + 0x98) = lVar1 + uVar22 * 0x10;
          *(ulong *)(pfVar11 + 0x9a) = lVar10 + uVar15 * 0x10;
          plStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          uStack_70 = uVar20;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(plVar18,uVar22 * 0x10);
    *(long **)(pfVar11 + 0x98) = plVar18 + uVar22 * 2;
  }
  else if (uVar19 < uVar21) {
    while (plVar18 != plVar2 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    *(long **)(pfVar11 + 0x98) = plVar2 + uVar19 * 2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar11 + 0xb4) = uVar19;
  return;
}



/* Entry: 10a936064; end: 10a93609f;  */

long FUN_10a936064(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a9360a0; end: 10a9366bb;  */

void FUN_10a9360a0(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  undefined4 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined4 *puStack_140;
  uint *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined4 **ppuStack_e0;
  int *piStack_d8;
  ulong uStack_d0;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int *piStack_88;
  int **ppiStack_80;
  int *piStack_78;
  ulong uStack_70;
  float *pfStack_68;
  
  pfVar15 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar15 + 0xb2) < 8) {
    *(long *)(pfVar15 + *(ulong *)(pfVar15 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar15 + 0xb4);
    *(long *)(pfVar15 + 0xb2) = *(long *)(pfVar15 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar15 + 0x96);
  }
  FUN_10a9366bc(param_5);
  FUN_10a1f7d54(&plStack_178,param_2,param_4);
  pfVar16 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar17 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x20);
  pfVar18 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x30);
  pfVar19 = param_2;
  func_0x00010989847c(param_2,param_4 + 0x40);
  pfVar20 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x50);
  FUN_10a1f7d54(&puStack_188,param_2,param_4 + 0x60);
  FUN_10a91e4d4(plStack_178[1],pfVar16);
  uVar29 = puStack_188[1];
  FUN_10a8bcad0(&uStack_128,pfVar16);
  if ((uStack_128 != (undefined4 *)0x0) && (uStack_120 != 0)) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uStack_128;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uStack_120;
    if (SUB168(auVar9 * auVar11,8) != 0) {
LAB_10a9365bc:
      FUN_10a00946c(&UNK_10f6818f4);
      goto LAB_10a9365ec;
    }
    uVar22 = (long)uStack_128 * uStack_120;
    if ((uVar22 != 0) && (uStack_118 != 0)) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uStack_118;
      if (SUB168(auVar10 * auVar12,8) != 0) goto LAB_10a9365bc;
      if (uVar29 <= uVar22 * uStack_118 && uVar22 * uStack_118 - uVar29 != 0) {
        FUN_10a0ee900(&uStack_c8,&UNK_10f683b6e,0x5d);
        FUN_10a0029c0(&uStack_c8);
        goto LAB_10a9365ec;
      }
    }
  }
  if (((*pfVar16 < 1.0) || (pfVar16[1] < 1.0)) || (pfVar16[2] < 1.0)) {
    FUN_10a0ee900(&uStack_c8,&UNK_10f683285,0x54);
    FUN_10a0029c0(&uStack_c8);
  }
  else {
    iStack_c0 = (int)pfVar16[1];
    iStack_bc = (int)*pfVar16;
    uVar8 = (int)pfVar16[2] * 8 - 3;
    lStack_b8 = *plStack_178;
    uVar4 = uVar8 & 0xfff;
    uStack_c8 = uVar4 | 0x42ff0000;
    iStack_c4 = 2;
    piStack_88 = &iStack_c0;
    lStack_a0 = 0;
    lStack_a8 = 0;
    lStack_90 = 0;
    uStack_98 = 0;
    piStack_78 = (int *)0x0;
    uStack_70 = 0;
    lStack_b0 = lStack_b8;
    ppiStack_80 = &piStack_78;
    if (((long)iStack_c0 * (long)iStack_bc == 0) || (lStack_b8 != 0)) {
      uVar8 = (uVar8 >> 1 & 0x7fc) + 4;
      uStack_70 = (ulong)uVar8;
      piStack_78 = (int *)((long)(int)uVar8 * (long)iStack_bc);
      uVar4 = uVar4 | 0x42ff4000;
      lStack_a8 = lStack_b8 + (long)piStack_78 * (long)iStack_c0;
      uStack_118 = *puStack_188;
      uStack_128 = (undefined4 *)CONCAT44(2,uStack_c8);
      puStack_150 = &uStack_128;
      puStack_e8 = &uStack_120;
      uStack_120 = CONCAT44(iStack_bc,iStack_c0);
      lStack_100 = 0;
      lStack_108 = 0;
      lStack_f0 = 0;
      uStack_f8 = 0;
      piStack_d8 = (int *)0x0;
      uStack_d0 = 0;
      uStack_110 = uStack_118;
      ppuStack_e0 = &piStack_d8;
      uStack_c8 = uVar4;
      lStack_a0 = lStack_a8;
      if (((long)iStack_c0 * (long)iStack_bc == 0) || (uStack_118 != 0)) {
        uStack_128 = (undefined4 *)CONCAT44(2,uVar4);
        lStack_108 = uStack_118 + (long)piStack_78 * (long)iStack_c0;
        puStack_140 = (undefined4 *)CONCAT44(puStack_140._4_4_,0x1010000);
        puStack_138 = &uStack_c8;
        uStack_130 = 0;
        auStack_158[0] = 0x2010000;
        uStack_148 = 0;
        uStack_160 = CONCAT44((int)(float)((ulong)*(long *)pfVar17 >> 0x20),
                              (int)(float)*(long *)pfVar17);
        uStack_168 = CONCAT44((int)(float)((ulong)*(long *)pfVar18 >> 0x20),
                              (int)(float)*(long *)pfVar18);
        lStack_100 = lStack_108;
        piStack_d8 = piStack_78;
        uStack_d0 = uStack_70;
        func_0x000109b437c0(&puStack_140,auStack_158,5,&uStack_160,&uStack_168,pfVar19,pfVar20);
        if (lStack_f0 != 0) {
          piVar1 = (int *)(lStack_f0 + 0x14);
          do {
            iVar5 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_128);
          }
        }
        lStack_f0 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        lStack_100 = 0;
        lStack_108 = 0;
        if (0 < uStack_128._4_4_) {
          lVar23 = 0;
          do {
            *(undefined4 *)((long)puStack_e8 + lVar23 * 4) = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < uStack_128._4_4_);
        }
        if (ppuStack_e0 != &piStack_d8 && ppuStack_e0 != (int **)0x0) {
          _free(ppuStack_e0[-1]);
        }
        if (lStack_90 != 0) {
          piVar1 = (int *)(lStack_90 + 0x14);
          do {
            iVar5 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_c8);
          }
        }
        lStack_90 = 0;
        lStack_b0 = 0;
        lStack_b8 = 0;
        lStack_a0 = 0;
        lStack_a8 = 0;
        if (0 < iStack_c4) {
          lVar23 = 0;
          do {
            piStack_88[lVar23] = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < iStack_c4);
        }
        if (ppiStack_80 != &piStack_78 && ppiStack_80 != (int **)0x0) {
          _free(ppiStack_80[-1]);
        }
        if (plStack_180 != (long *)0x0) {
          plVar2 = plStack_180 + 1;
          do {
            lVar23 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_180 + 0x10))(plStack_180);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
          }
        }
        if (plStack_170 != (long *)0x0) {
          plVar2 = plStack_170 + 1;
          do {
            lVar23 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_170 + 0x10))(plStack_170);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
          }
        }
        *param_1 = 0;
        pfVar16 = pfVar15 + 0x96;
        uVar29 = *(long *)(pfVar15 + 0xb2) - 1;
        *(ulong *)(pfVar15 + 0xb2) = uVar29;
        if (uVar29 < 8) {
          uVar29 = *(ulong *)(pfVar16 + uVar29 * 2 + 6);
          if (*(ulong *)(pfVar15 + 0xb4) == uVar29) {
            return;
          }
        }
        else {
          uVar29 = *(ulong *)(*(long *)(pfVar15 + 0xae) + -8);
          *(ulong **)(pfVar15 + 0xae) = (ulong *)(*(long *)(pfVar15 + 0xae) + -8);
          if (*(ulong *)(pfVar15 + 0xb4) == uVar29) {
            return;
          }
        }
        piVar1 = *(int **)pfVar16;
        piVar26 = *(int **)(pfVar15 + 0x98);
        lVar23 = (long)piVar26 - (long)piVar1;
        uVar22 = lVar23 >> 4;
        if (uVar22 < uVar29) {
          uVar28 = uVar29 - uVar22;
          lVar27 = *(long *)(pfVar15 + 0x9a);
          if ((ulong)(lVar27 - (long)piVar26 >> 4) < uVar28) {
            if (uVar29 >> 0x3c == 0) {
              uVar24 = lVar27 - (long)piVar1 >> 3;
              if (uVar24 <= uVar29) {
                uVar24 = uVar29;
              }
              if (0x7fffffffffffffef < (ulong)(lVar27 - (long)piVar1)) {
                uVar24 = 0xfffffffffffffff;
              }
              pfStack_68 = pfVar16;
              if (uVar24 >> 0x3c == 0) {
                lVar14 = uVar24 << 4;
                __Znwm();
                lVar3 = lVar14 + lVar23;
                _bzero(lVar3,uVar28 * 0x10);
                lVar25 = lVar3 + uVar22 * -0x10;
                _memcpy(lVar25,piVar1,lVar23);
                *(long *)pfVar16 = lVar25;
                *(ulong *)(pfVar15 + 0x98) = lVar3 + uVar28 * 0x10;
                *(ulong *)(pfVar15 + 0x9a) = lVar14 + uVar24 * 0x10;
                piStack_88 = piVar1;
                ppiStack_80 = (int **)piVar1;
                piStack_78 = piVar1;
                uStack_70 = lVar27;
                func_0x00010988c1b8(&piStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar13)();
          }
          _bzero(piVar26,uVar28 * 0x10);
          *(int **)(pfVar15 + 0x98) = piVar26 + uVar28 * 4;
        }
        else if (uVar29 < uVar22) {
          while (piVar26 != piVar1 + uVar29 * 4) {
            piVar26 = piVar26 + -4;
            func_0x00010988c204(piVar26);
          }
          *(int **)(pfVar15 + 0x98) = piVar1 + uVar29 * 4;
        }
code_r0x00010988c138:
        *(ulong *)(pfVar15 + 0xb4) = uVar29;
        return;
      }
      puVar21 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar21 = 1;
      puStack_140 = puVar21 + 1;
      puStack_138 = (uint *)0x1c;
      *(undefined1 *)(puVar21 + 8) = 0;
      *(undefined8 *)(puVar21 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar21 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar21 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar21 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&puStack_140,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    }
    else {
      puVar21 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar21 = 1;
      uStack_128 = puVar21 + 1;
      uStack_120 = 0x1c;
      *(undefined1 *)(puVar21 + 8) = 0;
      *(undefined8 *)(puVar21 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar21 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar21 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar21 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_128,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    }
  }
LAB_10a9365ec:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a9365f0);
  (*pcVar13)();
}



/* Entry: 10a9366bc; end: 10a9366df;  */

long FUN_10a9366bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 7) {
    return param_1;
  }
  lVar4 = 7;
  FUN_10a052ee0(7,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a9366e0; end: 10a93671b;  */

long FUN_10a9366e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a93671c; end: 10a936c5b;  */

void FUN_10a93671c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined4 auStack_150 [2];
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  undefined8 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a936c5c(param_5);
  FUN_10a1f7d54(&plStack_160,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    uVar17 = *(ulong *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (uVar17 & 0x7fffffffffffffff)) {
      uVar17 = 0;
    }
    if (*(int *)(param_4 + 0x20) == 3) {
      uVar18 = *(ulong *)(param_4 + 0x28);
      if (0x7fefffffffffffff < (uVar18 & 0x7fffffffffffffff)) {
        uVar18 = 0;
      }
      plVar8 = param_2;
      func_0x00010a137904(param_2,param_4 + 0x30);
      FUN_10a1f7d54(&plStack_170,param_2,param_4 + 0x40);
      if (((int)plVar8 == 0x10) || ((int)plVar8 == 8)) {
        FUN_10a00946c(&UNK_10f6832da);
      }
      else {
        uVar10 = plStack_160[1];
        if ((ulong)plStack_170[1] < uVar10) {
          FUN_10a0ee900(&stack0xffffffffffffff40,&UNK_10f683b6e,0x5d);
          FUN_10a0029c0(&stack0xffffffffffffff40);
        }
        else {
          lStack_b0 = *plStack_160;
          uStack_c0 = 0x242ff0005;
          puStack_80 = &uStack_b8;
          uStack_b4 = (undefined4)uVar10;
          uStack_b8 = 1;
          lStack_98 = 0;
          lStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
          lVar12 = uVar10 << 0x20;
          lStack_70 = 0;
          plStack_68 = (long *)0x0;
          lStack_a8 = lStack_b0;
          plStack_78 = &lStack_70;
          if ((lVar12 == 0) || (lStack_b0 != 0)) {
            uStack_c0 = 0x242ff4005;
            lStack_70 = lVar12 >> 0x1e;
            plStack_68 = (long *)0x4;
            lStack_a0 = lStack_b0 + lStack_70;
            lStack_110 = *plStack_170;
            uStack_120 = (undefined4 *)0x242ff0005;
            puStack_148 = &uStack_120;
            puStack_e0 = &uStack_118;
            uStack_118 = CONCAT44(uStack_b4,1);
            lStack_f8 = 0;
            lStack_100 = 0;
            lStack_e8 = 0;
            uStack_f0 = 0;
            alStack_d0[0] = 0;
            alStack_d0[1] = 0;
            lStack_108 = lStack_110;
            plStack_d8 = alStack_d0;
            lStack_98 = lStack_a0;
            if ((lVar12 == 0) || (lStack_110 != 0)) {
              uStack_120 = (undefined4 *)0x242ff4005;
              alStack_d0[1] = 4;
              lStack_100 = lStack_110 + lStack_70;
              puStack_138 = (undefined4 *)CONCAT44(puStack_138._4_4_,0x1010000);
              puStack_130 = &stack0xffffffffffffff40;
              uStack_128 = 0;
              auStack_150[0] = 0x2010000;
              uStack_140 = 0;
              lStack_f8 = lStack_100;
              alStack_d0[0] = lStack_70;
              func_0x000109b59078(uVar17,uVar18,&puStack_138,auStack_150,plVar8);
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
                  func_0x000109a848d4(&uStack_120);
                }
              }
              lStack_e8 = 0;
              lStack_108 = 0;
              lStack_110 = 0;
              lStack_f8 = 0;
              lStack_100 = 0;
              if (0 < uStack_120._4_4_) {
                lVar12 = 0;
                do {
                  *(undefined4 *)((long)puStack_e0 + lVar12 * 4) = 0;
                  lVar12 = lVar12 + 1;
                } while (lVar12 < uStack_120._4_4_);
              }
              if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
                _free(plStack_d8[-1]);
              }
              if (lStack_88 != 0) {
                piVar1 = (int *)(lStack_88 + 0x14);
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
                  func_0x000109a848d4(&stack0xffffffffffffff40);
                }
              }
              lStack_88 = 0;
              lStack_a8 = 0;
              lStack_b0 = 0;
              lStack_98 = 0;
              lStack_a0 = 0;
              if (0 < iStack_bc) {
                lVar12 = 0;
                do {
                  puStack_80[lVar12] = 0;
                  lVar12 = lVar12 + 1;
                } while (lVar12 < iStack_bc);
              }
              if (plStack_78 != &lStack_70 && plStack_78 != (long *)0x0) {
                _free(plStack_78[-1]);
              }
              if (plStack_168 != (long *)0x0) {
                plVar8 = plStack_168 + 1;
                do {
                  lVar12 = *plVar8;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar4) {
                    *plVar8 = lVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plStack_168 + 0x10))(plStack_168);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
                }
              }
              if (plStack_158 != (long *)0x0) {
                plVar8 = plStack_158 + 1;
                do {
                  lVar12 = *plVar8;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar4) {
                    *plVar8 = lVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plStack_158 + 0x10))(plStack_158);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
                }
              }
              *param_1 = 0;
              plVar8 = plVar7 + 0x4b;
              lVar12 = plVar7[0x59];
              uVar17 = lVar12 - 1;
              plVar7[0x59] = uVar17;
              if (uVar17 < 8) {
                uVar17 = plVar8[lVar12 + 2];
                if (plVar7[0x5a] == uVar17) {
                  return;
                }
              }
              else {
                uVar17 = *(ulong *)(plVar7[0x57] + -8);
                plVar7[0x57] = plVar7[0x57] + -8;
                if (plVar7[0x5a] == uVar17) {
                  return;
                }
              }
              lVar12 = *plVar8;
              lVar15 = plVar7[0x4c];
              lVar13 = lVar15 - lVar12;
              uVar18 = lVar13 >> 4;
              if (uVar18 < uVar17) {
                uVar10 = uVar17 - uVar18;
                lVar16 = plVar7[0x4d];
                if ((ulong)(lVar16 - lVar15 >> 4) < uVar10) {
                  if (uVar17 >> 0x3c == 0) {
                    uVar11 = lVar16 - lVar12 >> 3;
                    if (uVar11 <= uVar17) {
                      uVar11 = uVar17;
                    }
                    if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
                      uVar11 = 0xfffffffffffffff;
                    }
                    plStack_68 = plVar8;
                    if (uVar11 >> 0x3c == 0) {
                      lVar6 = uVar11 << 4;
                      __Znwm();
                      lVar15 = lVar6 + lVar13;
                      _bzero(lVar15,uVar10 * 0x10);
                      lVar14 = lVar15 + uVar18 * -0x10;
                      _memcpy(lVar14,lVar12,lVar13);
                      *plVar8 = lVar14;
                      plVar7[0x4c] = lVar15 + uVar10 * 0x10;
                      plVar7[0x4d] = lVar6 + uVar11 * 0x10;
                      lStack_88 = lVar12;
                      puStack_80 = (undefined4 *)lVar12;
                      plStack_78 = (long *)lVar12;
                      lStack_70 = lVar16;
                      func_0x00010988c1b8(&lStack_88);
                      goto code_r0x00010988c138;
                    }
                    func_0x000104c4f740();
                  }
                  else {
                    func_0x00010988c1a4();
                  }
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
                  (*pcVar5)();
                }
                _bzero(lVar15,uVar10 * 0x10);
                plVar7[0x4c] = lVar15 + uVar10 * 0x10;
              }
              else if (uVar17 < uVar18) {
                lVar12 = lVar12 + uVar17 * 0x10;
                while (lVar15 != lVar12) {
                  lVar15 = lVar15 + -0x10;
                  func_0x00010988c204(lVar15);
                }
                plVar7[0x4c] = lVar12;
              }
code_r0x00010988c138:
              plVar7[0x5a] = uVar17;
              return;
            }
            puVar9 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_138 = puVar9 + 1;
            puStack_130 = (undefined8 *)0x1c;
            *(undefined1 *)(puVar9 + 8) = 0;
            *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&puStack_138,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
          }
          else {
            puVar9 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            uStack_120 = puVar9 + 1;
            uStack_118 = 0x1c;
            *(undefined1 *)(puVar9 + 8) = 0;
            *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_120,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
          }
        }
      }
      goto LAB_10a936b90;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10a936b90:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a936b94);
  (*pcVar5)();
}



/* Entry: 10a936c5c; end: 10a936c7f;  */

long FUN_10a936c5c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 5) {
    return param_1;
  }
  lVar4 = 5;
  FUN_10a052ee0(5,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a936c80; end: 10a936cbb;  */

long FUN_10a936c80(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a936cbc; end: 10a937213;  */

/* WARNING: Possible PIC construction at 0x00010a937208: Changing call to branch */

float * FUN_10a936cbc(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                     undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  uint *puVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined8 uVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  float *unaff_x19;
  long *plVar24;
  float *unaff_x20;
  float *unaff_x21;
  long lVar25;
  ulong *unaff_x22;
  long lVar26;
  float *unaff_x23;
  long lVar27;
  ulong unaff_x24;
  ulong uVar28;
  undefined8 *unaff_x25;
  ulong uVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar30;
  ulong uVar31;
  long lStack_180;
  long *plStack_178;
  float *pfStack_170;
  undefined8 *puStack_168;
  float *pfStack_160;
  undefined4 auStack_158 [2];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint auStack_138 [12];
  long lStack_108;
  uint *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint *puStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined4 *puStack_a0;
  ulong *puStack_98;
  ulong auStack_90 [2];
  undefined4 uStack_80;
  int iStack_7c;
  float *pfStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar15 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar15 + 0xb2) < 8) {
    *(long *)(pfVar15 + *(ulong *)(pfVar15 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar15 + 0xb4);
    *(long *)(pfVar15 + 0xb2) = *(long *)(pfVar15 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar15 + 0x96);
  }
  FUN_10a937214(param_5);
  FUN_10a1f7d54(&puStack_168,param_2,param_4);
  pfVar16 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 3) {
    uVar31 = *(ulong *)(param_4 + 0x28);
    if (0x7fefffffffffffff < (uVar31 & 0x7fffffffffffffff)) {
      uVar31 = 0;
    }
    pfVar17 = param_2;
    func_0x00010989847c(param_2,param_4 + 0x30);
    FUN_10a1f7d54(&plStack_178,param_2,param_4 + 0x40);
    FUN_10a91e59c(pfVar16,0,1,2);
    FUN_10a91e4d4(puStack_168[1],pfVar16);
    fVar30 = *pfVar16;
    puVar21 = (uint *)*puStack_168;
    puVar11 = puVar21;
    for (lVar23 = (long)fVar30 << 3; lVar23 != 0; lVar23 = lVar23 + -4) {
      if (0x7f7fffff < (*puVar11 & 0x7fffffff)) {
        FUN_10a00946c(&UNK_10f683330);
        goto LAB_10a937160;
      }
      puVar11 = puVar11 + 1;
    }
    uStack_d4 = (uint)fVar30;
    _fStack_e0 = 0x242ff000d;
    pfVar16 = &fStack_e0;
    puStack_a0 = &uStack_d8;
    uStack_d8 = 1;
    puStack_b8 = (uint *)0x0;
    puStack_c0 = (uint *)0x0;
    lStack_a8 = 0;
    uStack_b0 = 0;
    puVar3 = auStack_90;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    puStack_d0 = puVar21;
    puStack_c8 = puVar21;
    puStack_98 = puVar3;
    if (uStack_d4 == 0 || puVar21 != (uint *)0x0) {
      auStack_90[0] = -(ulong)(uStack_d4 >> 0x1f) & 0xfffffff800000000 | (ulong)uStack_d4 << 3;
      _fStack_e0 = 0x242ff400d;
      auStack_90[1] = 8;
      puStack_c0 = puVar21 + (long)(int)uStack_d4 * 2;
      iStack_7c = (int)(fVar30 + fVar30);
      uStack_140._0_4_ = 127.5;
      puStack_100 = auStack_138;
      auStack_138[1] = 0;
      auStack_138[2] = 0;
      uStack_140._4_4_ = 0;
      auStack_138[0] = 0;
      auStack_138[5] = 0;
      auStack_138[6] = 0;
      auStack_138[3] = 0;
      auStack_138[4] = 0;
      auStack_138[9] = 0;
      auStack_138[7] = 0;
      auStack_138[8] = 0;
      lStack_108 = 0;
      auStack_138[10] = 0;
      auStack_138[0xb] = 0;
      puVar4 = &uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_80 = 1;
      puStack_f8 = puVar4;
      puStack_b8 = puStack_c0;
      func_0x000109a83fd0(&uStack_140,2,&uStack_80,0xd);
      uStack_80 = 0x1010000;
      pfStack_78 = &fStack_e0;
      uStack_70 = 0;
      auStack_158[0] = 0x2010000;
      uStack_148 = 0;
      puStack_150 = &uStack_140;
      func_0x000109ac7338(uVar31,&uStack_80,auStack_158,pfVar17);
      lVar23 = (long)(int)auStack_138[0];
      lStack_180 = lVar23 << 1;
      if ((ulong)(lVar23 << 1) <= (ulong)plStack_178[1]) {
        pfVar17 = (float *)*plStack_178;
        uVar20 = CONCAT44(auStack_138[3],auStack_138[2]);
        _memcpy(pfVar17,uVar20,lVar23 << 3);
        uVar12 = auStack_138[0];
        iVar19 = (int)uVar20;
        uVar31 = (ulong)auStack_138[0];
        if (lStack_108 != 0) {
          piVar5 = (int *)(lStack_108 + 0x14);
          do {
            iVar8 = *piVar5;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar10) {
              *piVar5 = iVar8 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar8 + -1 == 0) {
            pfVar17 = (float *)&uStack_140;
            func_0x000109a848d4();
          }
        }
        lStack_108 = 0;
        auStack_138[4] = 0;
        auStack_138[5] = 0;
        auStack_138[2] = 0;
        auStack_138[3] = 0;
        auStack_138[8] = 0;
        auStack_138[9] = 0;
        auStack_138[6] = 0;
        auStack_138[7] = 0;
        if (0 < uStack_140._4_4_) {
          lVar23 = 0;
          do {
            puStack_100[lVar23] = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < uStack_140._4_4_);
        }
        if (puStack_f8 != puVar4 && puStack_f8 != (undefined8 *)0x0) {
          pfVar17 = (float *)puStack_f8[-1];
          _free();
        }
        if (lStack_a8 != 0) {
          piVar5 = (int *)(lStack_a8 + 0x14);
          do {
            iVar8 = *piVar5;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar10) {
              *piVar5 = iVar8 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar8 + -1 == 0) {
            pfVar17 = &fStack_e0;
            func_0x000109a848d4();
          }
        }
        lStack_a8 = 0;
        puStack_c8 = (uint *)0x0;
        puStack_d0 = (uint *)0x0;
        puStack_b8 = (uint *)0x0;
        puStack_c0 = (uint *)0x0;
        if (0 < iStack_dc) {
          lVar23 = 0;
          do {
            puStack_a0[lVar23] = 0;
            lVar23 = lVar23 + 1;
          } while (lVar23 < iStack_dc);
        }
        if (puStack_98 != puVar3 && puStack_98 != (ulong *)0x0) {
          pfVar17 = (float *)puStack_98[-1];
          _free();
        }
        if (pfStack_170 != (float *)0x0) {
          pfVar7 = pfStack_170 + 2;
          do {
            lVar23 = *(long *)pfVar7;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pfVar7,0x10);
            if (bVar10) {
              *(long *)pfVar7 = lVar23 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*(long *)pfStack_170 + 0x10))(pfStack_170);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pfVar17 = pfStack_170;
          }
        }
        if (pfStack_160 != (float *)0x0) {
          pfVar7 = pfStack_160 + 2;
          do {
            lVar23 = *(long *)pfVar7;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pfVar7,0x10);
            if (bVar10) {
              *(long *)pfVar7 = lVar23 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*(long *)pfStack_160 + 0x10))(pfStack_160);
            pfVar17 = pfStack_160;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *param_1 = 3;
        *(double *)(param_1 + 2) = (double)(int)uVar12;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
          ___stack_chk_fail();
          if (iVar19 == 0) {
            __Unwind_Resume();
            if ((int)pfVar17 == 5) {
              return pfVar17;
            }
            lVar23 = 5;
            FUN_10a052ee0(5,0,pfVar17);
            plVar24 = *(long **)(lVar23 + 0x10);
            if (plVar24 != (long *)0x0) {
              plVar1 = plVar24 + 1;
              do {
                lVar25 = *plVar1;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar10) {
                  *plVar1 = lVar25 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
              }
            }
            return (float *)(lVar23 + 8);
          }
          func_0x000104bd46a0();
          uStack_140._0_4_ = 0.0;
          uStack_140._4_4_ = 0;
          auStack_138[0] = 0;
          auStack_138[1] = 0;
          do {
            fVar30 = *pfStack_160;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pfStack_160,0x10);
            if (bVar10) {
              *pfStack_160 = (float)((int)fVar30 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((float)((int)fVar30 + -1) == 0.0) {
            _free(*(undefined8 *)(pfStack_160 + -2));
          }
          func_0x00010a140010(&plStack_178);
          func_0x00010a140010(&puStack_168);
          unaff_x30 = 0x10a93720c;
          register0x00000008 = (BADSPACEBASE *)&lStack_180;
          unaff_x19 = pfVar15;
          unaff_x20 = pfVar17;
          unaff_x21 = pfStack_160;
          unaff_x22 = puVar3;
          unaff_x23 = pfVar16;
          unaff_x24 = uVar31;
          unaff_x25 = puVar4;
          unaff_x29 = puVar2;
        }
        pfVar16 = pfVar15 + 0x96;
        uVar31 = *(long *)(pfVar15 + 0xb2) - 1;
        *(ulong *)(pfVar15 + 0xb2) = uVar31;
        if (uVar31 < 8) {
          uVar31 = *(ulong *)(pfVar16 + uVar31 * 2 + 6);
          if (*(ulong *)(pfVar15 + 0xb4) == uVar31) {
            return pfVar16;
          }
        }
        else {
          uVar31 = *(ulong *)(*(long *)(pfVar15 + 0xae) + -8);
          *(ulong **)(pfVar15 + 0xae) = (ulong *)(*(long *)(pfVar15 + 0xae) + -8);
          if (*(ulong *)(pfVar15 + 0xb4) == uVar31) {
            return pfVar16;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(float **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar23 = *(long *)pfVar16;
        pfVar17 = *(float **)(pfVar15 + 0x98);
        lVar25 = (long)pfVar17 - lVar23;
        uVar28 = lVar25 >> 4;
        if (uVar28 < uVar31) {
          uVar29 = uVar31 - uVar28;
          lVar27 = *(long *)(pfVar15 + 0x9a);
          if ((ulong)(lVar27 - (long)pfVar17 >> 4) < uVar29) {
            if (uVar31 >> 0x3c == 0) {
              uVar22 = lVar27 - lVar23 >> 3;
              if (uVar22 <= uVar31) {
                uVar22 = uVar31;
              }
              if (0x7fffffffffffffef < (ulong)(lVar27 - lVar23)) {
                uVar22 = 0xfffffffffffffff;
              }
              *(float **)((long)register0x00000008 + -0x68) = pfVar16;
              if (uVar22 >> 0x3c == 0) {
                lVar14 = uVar22 << 4;
                __Znwm();
                lVar6 = lVar14 + lVar25;
                _bzero(lVar6,uVar29 * 0x10);
                lVar26 = lVar6 + uVar28 * -0x10;
                _memcpy(lVar26,lVar23,lVar25);
                *(long *)pfVar16 = lVar26;
                *(ulong *)(pfVar15 + 0x98) = lVar6 + uVar29 * 0x10;
                *(ulong *)(pfVar15 + 0x9a) = lVar14 + uVar22 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar23;
                *(long *)((long)register0x00000008 + -0x70) = lVar27;
                *(long *)((long)register0x00000008 + -0x88) = lVar23;
                *(long *)((long)register0x00000008 + -0x80) = lVar23;
                pfVar16 = (float *)((long)register0x00000008 + -0x88);
                func_0x00010988c1b8(pfVar16);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar13)();
          }
          pfVar16 = pfVar17;
          _bzero(pfVar17,uVar29 * 0x10);
          *(float **)(pfVar15 + 0x98) = pfVar17 + uVar29 * 4;
        }
        else if (uVar31 < uVar28) {
          pfVar7 = (float *)(lVar23 + uVar31 * 0x10);
          while (pfVar17 != pfVar7) {
            pfVar17 = pfVar17 + -4;
            pfVar16 = pfVar17;
            func_0x00010988c204(pfVar17);
          }
          *(float **)(pfVar15 + 0x98) = pfVar7;
        }
code_r0x00010988c138:
        *(ulong *)(pfVar15 + 0xb4) = uVar31;
        return pfVar16;
      }
      FUN_10a0ee900(&uStack_80,&UNK_10f68335e,0x4e);
      FUN_10a0029c0(&uStack_80);
    }
    else {
      puVar18 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar18 = 1;
      uStack_140 = puVar18 + 1;
      auStack_138[0] = 0x1c;
      auStack_138[1] = 0;
      *(undefined1 *)(puVar18 + 8) = 0;
      *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_140,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    }
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
LAB_10a937160:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a937164);
  (*pcVar13)();
}



/* Entry: 10a937214; end: 10a937237;  */

long FUN_10a937214(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 5) {
    return param_1;
  }
  lVar4 = 5;
  FUN_10a052ee0(5,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a937238; end: 10a937273;  */

long FUN_10a937238(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a937274; end: 10a93757f;  */

void FUN_10a937274(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a937580(param_5);
  FUN_10a1f7d54(&plStack_68,param_2,param_4);
  FUN_10a1f7d54(&plStack_78,param_2,param_4 + 0x10);
  FUN_10a928678(&plStack_88,param_2,param_4 + 0x20);
  func_0x00010a068bd8(param_2,param_4 + 0x30);
  uVar10 = plStack_68[1];
  if ((ulong)plStack_78[1] < uVar10) {
    FUN_10a0ee900(&stack0xffffffffffffffa8,&UNK_10f683b16,0x23);
    FUN_10a0029c0(&stack0xffffffffffffffa8);
  }
  else {
    uVar11 = plStack_88[1];
    if (uVar10 <= uVar11) {
      lVar9 = *plStack_88;
      uVar14 = 0;
      if (uVar10 != 0) {
        uVar12 = 0;
        lVar13 = *plStack_78;
        do {
          if (*(float *)(lVar13 + uVar12 * 4) != 0.0) {
            if (uVar11 <= uVar14) goto LAB_10a93751c;
            *(int *)(lVar9 + uVar14 * 4) = (int)uVar12;
            uVar14 = (ulong)((int)uVar14 + 1);
          }
          uVar12 = uVar12 + 1;
        } while (uVar10 != uVar12);
      }
      if ((int)param_2 == 0) {
        lVar13 = 0;
        if ((int)uVar14 != 0) {
          lVar13 = LZCOUNT(uVar14) * -2 + 0x7e;
        }
        FUN_10a93920c(lVar9,lVar9 + uVar14 * 4,&stack0xffffffffffffffa8,lVar13,1);
      }
      else {
        if ((int)param_2 != 1) {
          FUN_10a00946c(&UNK_10f6839e1);
          goto LAB_10a93751c;
        }
        lVar13 = 0;
        if ((int)uVar14 != 0) {
          lVar13 = LZCOUNT(uVar14) * -2 + 0x7e;
        }
        FUN_10a93a398(lVar9,lVar9 + uVar14 * 4,&stack0xffffffffffffffa8,lVar13,1);
      }
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      if (in_stack_ffffffffffffffa0 != (long *)0x0) {
        plVar1 = in_stack_ffffffffffffffa0 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
        }
      }
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)uVar14;
      plVar1 = plVar8 + 0x4b;
      lVar9 = plVar8[0x59];
      uVar10 = lVar9 - 1;
      plVar8[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar1[lVar9 + 2];
        if (plVar8[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar10) {
          return;
        }
      }
      plVar3 = (long *)*plVar1;
      plVar16 = (long *)plVar8[0x4c];
      lVar9 = (long)plVar16 - (long)plVar3;
      uVar11 = lVar9 >> 4;
      if (uVar11 < uVar10) {
        uVar14 = uVar10 - uVar11;
        lVar13 = plVar8[0x4d];
        if ((ulong)(lVar13 - (long)plVar16 >> 4) < uVar14) {
          if (uVar10 >> 0x3c == 0) {
            uVar12 = lVar13 - (long)plVar3 >> 3;
            if (uVar12 <= uVar10) {
              uVar12 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - (long)plVar3)) {
              uVar12 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar12 >> 0x3c == 0) {
              lVar7 = uVar12 << 4;
              __Znwm();
              lVar2 = lVar7 + lVar9;
              _bzero(lVar2,uVar14 * 0x10);
              lVar15 = lVar2 + uVar11 * -0x10;
              _memcpy(lVar15,plVar3,lVar9);
              *plVar1 = lVar15;
              plVar8[0x4c] = lVar2 + uVar14 * 0x10;
              plVar8[0x4d] = lVar7 + uVar12 * 0x10;
              plStack_88 = plVar3;
              plStack_80 = plVar3;
              plStack_78 = plVar3;
              plStack_70 = (long *)lVar13;
              func_0x00010988c1b8(&plStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar6)();
        }
        _bzero(plVar16,uVar14 * 0x10);
        plVar8[0x4c] = (long)(plVar16 + uVar14 * 2);
      }
      else if (uVar10 < uVar11) {
        while (plVar16 != plVar3 + uVar10 * 2) {
          plVar16 = plVar16 + -2;
          func_0x00010988c204(plVar16);
        }
        plVar8[0x4c] = (long)(plVar3 + uVar10 * 2);
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar10;
      return;
    }
    FUN_10a0ee900(&stack0xffffffffffffffa8,&UNK_10f683b16,0x23);
    FUN_10a0029c0(&stack0xffffffffffffffa8);
  }
LAB_10a93751c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a937520);
  (*pcVar6)();
}



/* Entry: 10a937580; end: 10a9375a3;  */

long FUN_10a937580(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 4) {
    return param_1;
  }
  lVar4 = 4;
  FUN_10a052ee0(4,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a9375a4; end: 10a9375df;  */

long FUN_10a9375a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a9375e0; end: 10a937b1b;  */

void FUN_10a9375e0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulong *puVar2;
  long *****ppppplVar3;
  char cVar4;
  bool bVar5;
  long ******pppppplVar6;
  undefined4 *puVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long ******pppppplVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  FUN_10a937b1c(param_5);
  FUN_10a1f7d54(&plStack_d0,param_2,param_4);
  plVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_e0,param_2,param_4 + 0x20);
  if (*(int *)(param_4 + 0x30) == 3) {
    dVar27 = *(double *)(param_4 + 0x38);
    if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
      dVar27 = 0.0;
    }
    if (*(int *)(param_4 + 0x40) == 3) {
      dVar28 = *(double *)(param_4 + 0x48);
      if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
        dVar28 = 0.0;
      }
      FUN_10a928678(&puStack_f0,param_2,param_4 + 0x50);
      lVar13 = *plStack_d0;
      uVar24 = plStack_d0[1];
      FUN_10a8bcad0(&ppppplStack_c0,plVar11);
      ppppplVar3 = ppppplStack_c0;
      if (lStack_b0 == 4) {
        if ((long ******)ppppplStack_b8 == (long ******)0x1) {
          if (((ulong)((long)ppppplStack_c0 << 2) <= uVar24) &&
             (ppppplStack_c0 <= (long ******)plStack_e0[1])) {
            lVar19 = *plStack_e0;
            puVar18 = (undefined4 *)*puStack_f0;
            ppppplStack_90 = ppppplStack_c0;
            lStack_88 = lVar19;
            if (ppppplStack_c0 <= (long ******)puStack_f0[1]) {
              puStack_a8 = (undefined4 *)0x0;
              puStack_a0 = (undefined4 *)0x0;
              uStack_98 = 0;
              func_0x0001056c5718(&puStack_a8,ppppplStack_c0);
              ppppplStack_c0 = (long *****)((ulong)ppppplStack_c0 & 0xffffffff00000000);
              if ((long ******)ppppplVar3 != (long ******)0x0) {
                pppppplVar15 = (long ******)0x0;
                do {
                  if (dVar27 < (double)*(float *)(lVar19 + (long)pppppplVar15 * 4)) {
                    FUN_10a0e6678(&puStack_a8,&ppppplStack_c0);
                    pppppplVar15 = (long ******)((ulong)ppppplStack_c0 & 0xffffffff);
                  }
                  uVar1 = (int)pppppplVar15 + 1;
                  pppppplVar15 = (long ******)(ulong)uVar1;
                  ppppplStack_c0 = (long *****)CONCAT44(ppppplStack_c0._4_4_,uVar1);
                } while (pppppplVar15 < ppppplVar3);
              }
              ppppplStack_c0 = (long *****)&ppppplStack_90;
              lVar19 = 0;
              if (puStack_a0 != puStack_a8) {
                lVar19 = LZCOUNT((long)puStack_a0 - (long)puStack_a8 >> 2) * -2 + 0x7e;
              }
              FUN_10a93b524(puStack_a8,puStack_a0,&ppppplStack_c0,lVar19,1);
              puVar7 = puStack_a0;
              lStack_b0 = 0;
              ppppplStack_c0 = (long *****)&ppppplStack_c0;
              ppppplStack_b8 = (long *****)&ppppplStack_c0;
              if (puStack_a8 != puStack_a0) {
                puVar20 = puStack_a8;
                lVar19 = 1;
                do {
                  lVar16 = lVar19;
                  ppppplVar3 = ppppplStack_c0;
                  pppppplVar15 = (long ******)0x18;
                  __Znwm();
                  puVar21 = puVar20 + 1;
                  *(undefined4 *)(pppppplVar15 + 2) = *puVar20;
                  *pppppplVar15 = ppppplVar3;
                  pppppplVar15[1] = (long *****)&ppppplStack_c0;
                  ppppplVar3[1] = (long ****)pppppplVar15;
                  puVar20 = puVar21;
                  lVar19 = lVar16 + 1;
                  ppppplStack_c0 = (long *****)pppppplVar15;
                  lStack_b0 = lVar16;
                } while (puVar21 != puVar7);
                pppppplVar15 = (long ******)ppppplStack_b8;
                while (pppppplVar6 = pppppplVar15, pppppplVar6 != &ppppplStack_c0) {
                  pppppplVar15 = (long ******)pppppplVar6[1];
                  if (pppppplVar15 != &ppppplStack_c0) {
                    puVar2 = (ulong *)(lVar13 + (ulong)*(uint *)(pppppplVar6 + 2) * 0x10);
                    uVar35 = *puVar2;
                    uVar24 = puVar2[1];
                    fVar22 = (float)uVar24;
                    fVar37 = (float)uVar35 + fVar22;
                    fVar25 = (float)(uVar24 >> 0x20);
                    fVar36 = (float)(uVar35 >> 0x20);
                    fVar38 = fVar36 + fVar25;
                    do {
                      puVar2 = (ulong *)(lVar13 + (ulong)*(uint *)(pppppplVar15 + 2) * 0x10);
                      uVar24 = *puVar2;
                      uVar29 = puVar2[1];
                      fVar26 = (float)uVar29;
                      fVar31 = (float)uVar24 + fVar26;
                      fVar23 = (float)(uVar24 >> 0x20);
                      fVar30 = (float)(uVar29 >> 0x20);
                      fVar33 = fVar23 + fVar30;
                      uVar29 = CONCAT44(fVar33,fVar31);
                      uVar29 = uVar29 ^ (uVar29 ^ CONCAT44(fVar38,fVar37)) &
                                        ~CONCAT44(-(uint)(fVar33 < fVar38),-(uint)(fVar31 < fVar37))
                      ;
                      uVar24 = uVar24 ^ (uVar24 ^ uVar35) &
                                        ~CONCAT44(-(uint)(fVar36 < fVar23),
                                                  -(uint)((float)uVar35 < (float)uVar24));
                      fVar23 = (float)uVar29 - (float)uVar24;
                      fVar31 = (float)(uVar29 >> 0x20) - (float)(uVar24 >> 0x20);
                      iVar32 = -(uint)(fVar23 < 0.0);
                      iVar34 = -(uint)(fVar31 < 0.0);
                      fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                               ~(byte)((uint)iVar32 >> 0x18),
                                               CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                        ~(byte)((uint)iVar32 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar23 >> 8) &
                                                                 ~(byte)((uint)iVar32 >> 8),
                                                                 SUB41(fVar23,0) & ~(byte)iVar32)));
                      fVar23 = fVar23 * (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) &
                                                         ~(byte)((uint)iVar34 >> 0x18),
                                                         CONCAT16((byte)((uint)fVar31 >> 0x10) &
                                                                  ~(byte)((uint)iVar34 >> 0x10),
                                                                  CONCAT15((byte)((uint)fVar31 >> 8)
                                                                           & ~(byte)((uint)iVar34 >>
                                                                                    8),
                                                                           CONCAT14(SUB41(fVar31,0)
                                                                                    & ~(byte)iVar34,
                                                                                    fVar23)))) >>
                                               0x20);
                      fVar31 = (fVar22 * fVar25 + fVar26 * fVar30) - fVar23;
                      dVar27 = 0.0;
                      if (0.0 < fVar31) {
                        dVar27 = (double)(fVar23 / fVar31);
                      }
                      if (dVar27 <= dVar28) {
                        pppppplVar15 = (long ******)pppppplVar15[1];
                      }
                      else {
                        if (pppppplVar15 == &ppppplStack_c0) goto LAB_10a937a88;
                        ppppplVar3 = *pppppplVar15;
                        pppppplVar15 = (long ******)pppppplVar15[1];
                        ppppplVar3[1] = (long ****)pppppplVar15;
                        *pppppplVar15 = ppppplVar3;
                        lStack_b0 = lStack_b0 + -1;
                        __ZdlPv();
                      }
                    } while (pppppplVar15 != &ppppplStack_c0);
                    pppppplVar15 = (long ******)pppppplVar6[1];
                  }
                }
                if ((long ******)ppppplStack_b8 != &ppppplStack_c0) {
                  pppppplVar15 = (long ******)ppppplStack_b8;
                  do {
                    *puVar18 = *(undefined4 *)(pppppplVar15 + 2);
                    pppppplVar15 = (long ******)pppppplVar15[1];
                    puVar18 = puVar18 + 1;
                  } while (pppppplVar15 != &ppppplStack_c0);
                }
              }
              lVar13 = lStack_b0;
              FUN_10a93c448(&ppppplStack_c0);
              if (puStack_a8 != (undefined4 *)0x0) {
                puStack_a0 = puStack_a8;
                __ZdlPv();
              }
              if (plStack_e8 != (long *)0x0) {
                plVar11 = plStack_e8 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar5) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
                }
              }
              if (plStack_d8 != (long *)0x0) {
                plVar11 = plStack_d8 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar5) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
                }
              }
              if (plStack_c8 != (long *)0x0) {
                plVar11 = plStack_c8 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar5) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
                }
              }
              *param_1 = 3;
              *(double *)(param_1 + 2) = (double)(int)lVar13;
              plVar11 = plVar10 + 0x4b;
              lVar13 = plVar10[0x59];
              uVar24 = lVar13 - 1;
              plVar10[0x59] = uVar24;
              if (uVar24 < 8) {
                uVar24 = plVar11[lVar13 + 2];
                if (plVar10[0x5a] == uVar24) {
                  return;
                }
              }
              else {
                uVar24 = *(ulong *)(plVar10[0x57] + -8);
                plVar10[0x57] = plVar10[0x57] + -8;
                if (plVar10[0x5a] == uVar24) {
                  return;
                }
              }
              lVar13 = *plVar11;
              lVar19 = plVar10[0x4c];
              lVar16 = lVar19 - lVar13;
              uVar35 = lVar16 >> 4;
              if (uVar35 < uVar24) {
                uVar29 = uVar24 - uVar35;
                if ((ulong)(plVar10[0x4d] - lVar19 >> 4) < uVar29) {
                  if (uVar24 >> 0x3c == 0) {
                    uVar12 = plVar10[0x4d] - lVar13;
                    uVar14 = (long)uVar12 >> 3;
                    if (uVar14 <= uVar24) {
                      uVar14 = uVar24;
                    }
                    if (0x7fffffffffffffef < uVar12) {
                      uVar14 = 0xfffffffffffffff;
                    }
                    if (uVar14 >> 0x3c == 0) {
                      lVar9 = uVar14 << 4;
                      __Znwm();
                      lVar19 = lVar9 + lVar16;
                      _bzero(lVar19,uVar29 * 0x10);
                      lVar17 = lVar19 + uVar35 * -0x10;
                      _memcpy(lVar17,lVar13,lVar16);
                      *plVar11 = lVar17;
                      plVar10[0x4c] = lVar19 + uVar29 * 0x10;
                      plVar10[0x4d] = lVar9 + uVar14 * 0x10;
                      lStack_88 = lVar13;
                      func_0x00010988c1b8(&lStack_88);
                      goto code_r0x00010988c138;
                    }
                    func_0x000104c4f740();
                  }
                  else {
                    func_0x00010988c1a4();
                  }
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
                  (*pcVar8)();
                }
                _bzero(lVar19,uVar29 * 0x10);
                plVar10[0x4c] = lVar19 + uVar29 * 0x10;
              }
              else if (uVar24 < uVar35) {
                lVar13 = lVar13 + uVar24 * 0x10;
                while (lVar19 != lVar13) {
                  lVar19 = lVar19 + -0x10;
                  func_0x00010988c204(lVar19);
                }
                plVar10[0x4c] = lVar13;
              }
code_r0x00010988c138:
              plVar10[0x5a] = uVar24;
              return;
            }
          }
          FUN_10a00946c(&UNK_10f683bcc);
        }
        else {
          FUN_10a0ee900(&puStack_a8,&UNK_10f683c4a,0x35);
          FUN_10a0029c0(&puStack_a8);
        }
      }
      else {
        FUN_10a0ee900(&puStack_a8,&UNK_10f683c4a,0x35);
        FUN_10a0029c0(&puStack_a8);
      }
      goto LAB_10a937a88;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10a937a88:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a937a8c);
  (*pcVar8)();
}



/* Entry: 10a937b1c; end: 10a937b3f;  */

long FUN_10a937b1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 6) {
    return param_1;
  }
  lVar4 = 6;
  FUN_10a052ee0(6,0,param_1);
  plVar6 = *(long **)(lVar4 + 0x10);
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
  return lVar4 + 8;
}



/* Entry: 10a937b40; end: 10a937b7b;  */

long FUN_10a937b40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a937b7c; end: 10a937bef;  */

undefined8 * FUN_10a937b7c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109ffe174(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 10a937bf0; end: 10a938ba7;  */

void FUN_10a937bf0(long *param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
LAB_10a937c24:
  do {
    lVar13 = param_2[3];
    lVar31 = param_1[3];
    uVar15 = lVar13 - lVar31;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        param_2[3] = lVar13 + -1;
        lVar14 = *param_2;
        lVar13 = param_2[2] * (lVar13 + -1);
        uVar24 = *(uint *)(lVar14 + lVar13);
        uVar4 = *(uint *)(*param_1 + param_1[2] * param_1[3]);
        lVar31 = param_3[5] + *param_3 * 4;
        if (*(float *)(lVar31 + param_3[1] * (ulong)uVar4 * 4) <=
            *(float *)(lVar31 + param_3[1] * (ulong)uVar24 * 4)) {
          return;
        }
        *(uint *)(*param_1 + param_1[2] * param_1[3]) = uVar24;
        *(uint *)(lVar14 + lVar13) = uVar4;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        lVar16 = *param_1;
        lVar14 = param_1[2];
        param_2[3] = lVar13 + -1;
        lVar20 = *param_2;
        lVar31 = lVar14 * lVar31;
        lVar14 = lVar14 + lVar31;
        uVar24 = *(uint *)(lVar16 + lVar14);
        uVar4 = *(uint *)(lVar16 + lVar31);
        lVar22 = param_3[1];
        lVar21 = param_3[5] + *param_3 * 4;
        fVar34 = *(float *)(lVar21 + lVar22 * (ulong)uVar24 * 4);
        fVar33 = *(float *)(lVar21 + lVar22 * (ulong)uVar4 * 4);
        lVar13 = param_2[2] * (lVar13 + -1);
        uVar2 = *(uint *)(lVar20 + lVar13);
        fVar35 = *(float *)(lVar21 + lVar22 * (ulong)uVar2 * 4);
        if (fVar34 < fVar33) {
          if (fVar34 <= fVar35) {
            *(uint *)(lVar16 + lVar31) = uVar24;
            *(uint *)(lVar16 + lVar14) = uVar4;
            if (fVar33 <= *(float *)(lVar21 + lVar22 * (ulong)*(uint *)(lVar20 + lVar13) * 4)) {
              return;
            }
            *(uint *)(lVar16 + lVar14) = *(uint *)(lVar20 + lVar13);
          }
          else {
            *(uint *)(lVar16 + lVar31) = uVar2;
          }
          *(uint *)(lVar20 + lVar13) = uVar4;
          return;
        }
        if (fVar34 <= fVar35) {
          return;
        }
        *(uint *)(lVar16 + lVar14) = uVar2;
        *(uint *)(lVar20 + lVar13) = uVar24;
        uVar24 = *(uint *)(lVar16 + lVar31);
        if (*(float *)(lVar21 + lVar22 * (ulong)uVar24 * 4) <=
            *(float *)(lVar21 + lVar22 * (ulong)*(uint *)(lVar16 + lVar14) * 4)) {
          return;
        }
        *(uint *)(lVar16 + lVar31) = *(uint *)(lVar16 + lVar14);
        *(uint *)(lVar16 + lVar14) = uVar24;
        return;
      }
      if (uVar15 == 4) {
        lStack_78 = param_1[1];
        lStack_80 = *param_1;
        uStack_68 = param_1[3];
        lStack_70 = param_1[2];
        lStack_b8 = param_1[1];
        lStack_c0 = *param_1;
        lStack_90 = param_1[2];
        lStack_98 = param_1[1];
        lStack_a0 = *param_1;
        uStack_88 = param_1[3] + 1;
        lStack_b0 = param_1[2];
        lStack_a8 = param_1[3] + 2;
        param_2[3] = lVar13 + -1;
        lStack_d8 = param_2[1];
        lStack_e0 = *param_2;
        lStack_c8 = param_2[3];
        lStack_d0 = param_2[2];
        FUN_10a938ba8(&lStack_80,&lStack_a0,&lStack_c0,&lStack_e0,param_3);
        return;
      }
      if (uVar15 == 5) {
        lVar14 = *param_1;
        lStack_d8 = param_1[1];
        lVar20 = param_1[2];
        param_2[3] = lVar13 + -1;
        lVar23 = *param_2;
        lVar16 = param_2[2];
        lStack_e0 = lVar14;
        lStack_d0 = lVar20;
        lStack_c8 = lVar31 + 3;
        lStack_c0 = lVar14;
        lStack_b8 = lStack_d8;
        lStack_b0 = lVar20;
        lStack_a8 = lVar31 + 2;
        lStack_a0 = lVar14;
        lStack_98 = lStack_d8;
        lStack_90 = lVar20;
        uStack_88 = lVar31 + 1;
        lStack_80 = lVar14;
        lStack_78 = lStack_d8;
        lStack_70 = lVar20;
        uStack_68 = lVar31;
        FUN_10a938ba8(&lStack_80,&lStack_a0,&lStack_c0,&lStack_e0,param_3);
        lVar16 = lVar16 * (lVar13 + -1);
        uVar24 = *(uint *)(lVar23 + lVar16);
        lVar22 = lVar20 * (lVar31 + 3);
        uVar4 = *(uint *)(lVar14 + lVar22);
        lVar21 = param_3[1];
        lVar13 = param_3[5] + *param_3 * 4;
        if (*(float *)(lVar13 + lVar21 * (ulong)uVar4 * 4) <=
            *(float *)(lVar13 + lVar21 * (ulong)uVar24 * 4)) {
          return;
        }
        *(uint *)(lVar14 + lVar22) = uVar24;
        *(uint *)(lVar23 + lVar16) = uVar4;
        lVar16 = lVar20 * (lVar31 + 2);
        uVar24 = *(uint *)(lVar14 + lVar16);
        if (*(float *)(lVar13 + lVar21 * (ulong)uVar24 * 4) <=
            *(float *)(lVar13 + lVar21 * (ulong)*(uint *)(lVar14 + lVar22) * 4)) {
          return;
        }
        *(uint *)(lVar14 + lVar16) = *(uint *)(lVar14 + lVar22);
        *(uint *)(lVar14 + lVar22) = uVar24;
        lVar22 = lVar20 * (lVar31 + 1);
        uVar24 = *(uint *)(lVar14 + lVar22);
        if (*(float *)(lVar13 + lVar21 * (ulong)uVar24 * 4) <=
            *(float *)(lVar13 + lVar21 * (ulong)*(uint *)(lVar14 + lVar16) * 4)) {
          return;
        }
        *(uint *)(lVar14 + lVar22) = *(uint *)(lVar14 + lVar16);
        *(uint *)(lVar14 + lVar16) = uVar24;
        uVar24 = *(uint *)(lVar14 + lVar20 * lVar31);
        if (*(float *)(lVar13 + lVar21 * (ulong)uVar24 * 4) <=
            *(float *)(lVar13 + lVar21 * (ulong)*(uint *)(lVar14 + lVar22) * 4)) {
          return;
        }
        *(uint *)(lVar14 + lVar20 * lVar31) = *(uint *)(lVar14 + lVar22);
        *(uint *)(lVar14 + lVar22) = uVar24;
        return;
      }
    }
    if ((long)uVar15 < 0x18) {
      lVar14 = *param_1;
      lVar21 = param_1[2];
      if ((param_5 & 1) == 0) {
        if (lVar13 == lVar31) {
          return;
        }
        lVar22 = lVar31 + 1;
        if (lVar22 == lVar13) {
          return;
        }
        lVar27 = param_3[1];
        lVar16 = param_3[5] + *param_3 * 4;
        lVar20 = lVar14 + lVar21 * (lVar31 + -1);
        lVar23 = lVar14 + lVar21 * lVar22;
        lVar25 = lVar14 + lVar21 * lVar31;
        uVar15 = 0xfffffffffffffffe;
        do {
          lVar28 = lVar22;
          uVar24 = *(uint *)(lVar14 + lVar28 * lVar21);
          fVar33 = *(float *)(lVar16 + lVar27 * (ulong)uVar24 * 4);
          if (fVar33 < *(float *)(lVar16 + lVar27 * (ulong)*(uint *)(lVar14 + lVar31 * lVar21) * 4))
          {
            lVar31 = 0;
            uVar18 = uVar15;
            do {
              *(undefined4 *)(lVar23 + lVar31) = *(undefined4 *)(lVar25 + lVar31);
              bVar6 = 0xfffffffffffffffe < uVar18;
              uVar18 = uVar18 + 1;
              if (bVar6) goto LAB_10a938b60;
              puVar29 = (uint *)(lVar20 + lVar31);
              lVar31 = lVar31 - lVar21;
            } while (fVar33 < *(float *)(lVar16 + lVar27 * (ulong)*puVar29 * 4));
            *(uint *)(lVar23 + lVar31) = uVar24;
          }
          lVar20 = lVar20 + lVar21;
          lVar23 = lVar23 + lVar21;
          uVar15 = uVar15 - 1;
          lVar25 = lVar25 + lVar21;
          lVar22 = lVar28 + 1;
          lVar31 = lVar28;
          if (lVar28 + 1 == lVar13) {
            return;
          }
        } while( true );
      }
      if (lVar13 == lVar31) {
        return;
      }
      lVar22 = lVar31 + 1;
      if (lVar22 == lVar13) {
        return;
      }
      lVar27 = param_3[1];
      lVar16 = param_3[5] + *param_3 * 4;
      lVar20 = lVar14 + lVar21 * (lVar31 + -1);
      lVar23 = lVar14 + lVar21 * lVar22;
      lVar25 = lVar14 + lVar21 * lVar31;
      uVar15 = 0xffffffffffffffff;
      do {
        lVar28 = lVar22;
        uVar24 = *(uint *)(lVar14 + lVar28 * lVar21);
        fVar33 = *(float *)(lVar16 + lVar27 * (ulong)uVar24 * 4);
        if (fVar33 < *(float *)(lVar16 + lVar27 * (ulong)*(uint *)(lVar14 + lVar31 * lVar21) * 4)) {
          uVar18 = uVar15;
          lVar31 = 0;
          do {
            lVar22 = lVar31;
            *(undefined4 *)(lVar23 + lVar22) = *(undefined4 *)(lVar25 + lVar22);
            bVar6 = 0xfffffffffffffffe < uVar18;
            uVar18 = uVar18 + 1;
            if (bVar6) break;
            lVar31 = lVar22 - lVar21;
          } while (fVar33 < *(float *)(lVar16 + lVar27 * (ulong)*(uint *)(lVar20 + lVar22) * 4));
          *(uint *)(lVar25 + lVar22) = uVar24;
        }
        lVar20 = lVar20 + lVar21;
        lVar23 = lVar23 + lVar21;
        uVar15 = uVar15 - 1;
        lVar25 = lVar25 + lVar21;
        lVar22 = lVar28 + 1;
        lVar31 = lVar28;
        if (lVar28 + 1 == lVar13) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (lVar13 == lVar31) {
        return;
      }
      lVar16 = *param_1;
      lVar20 = param_1[2];
      lVar23 = *param_2;
      lVar25 = param_2[2];
      uVar19 = uVar15 - 2 >> 1;
      lVar21 = *param_3;
      lVar22 = param_3[1];
      lVar14 = param_3[5] + lVar21 * 4;
      uVar18 = uVar19;
      do {
        if ((long)(int)uVar18 <= (long)uVar19) {
          uVar26 = (long)(uVar18 << 0x20) >> 0x1f;
          uVar32 = uVar26 | 1;
          lVar27 = lVar31 + (int)uVar32;
          uVar26 = uVar26 + 2;
          lVar28 = lVar27 * lVar20;
          if ((long)uVar26 < (long)uVar15) {
            lVar11 = (lVar27 + 1) * lVar20;
            if (*(float *)(lVar14 + lVar22 * (ulong)*(uint *)(lVar16 + lVar28) * 4) <
                *(float *)(lVar14 + lVar22 * (ulong)*(uint *)(lVar16 + lVar11) * 4)) {
              lVar27 = lVar27 + 1;
              uVar32 = uVar26;
              lVar28 = lVar11;
            }
          }
          lVar11 = lVar31 + (int)uVar18;
          uVar24 = *(uint *)(lVar16 + lVar11 * lVar20);
          if (*(float *)(lVar14 + lVar22 * (ulong)uVar24 * 4) <=
              *(float *)(lVar14 + lVar22 * (ulong)*(uint *)(lVar16 + lVar28) * 4)) {
            lVar10 = param_3[1];
            lVar28 = param_3[5] + lVar21 * 4;
            do {
              lVar9 = lVar27;
              lVar12 = lVar9 * lVar20;
              *(undefined4 *)(lVar16 + lVar11 * lVar20) = *(undefined4 *)(lVar16 + lVar12);
              if ((long)uVar19 < (long)uVar32) break;
              uVar1 = uVar32 << 1 | 1;
              lVar27 = lVar31 + (int)uVar1;
              uVar26 = uVar32 * 2 + 2;
              lVar30 = lVar27 * lVar20;
              uVar32 = uVar1;
              if ((long)uVar26 < (long)uVar15) {
                lVar11 = (lVar27 + 1) * lVar20;
                if (*(float *)(lVar28 + lVar10 * (ulong)*(uint *)(lVar16 + lVar30) * 4) <
                    *(float *)(lVar28 + lVar10 * (ulong)*(uint *)(lVar16 + lVar11) * 4)) {
                  uVar32 = uVar26;
                  lVar27 = lVar27 + 1;
                  lVar30 = lVar11;
                }
              }
              lVar11 = lVar9;
            } while (*(float *)(lVar28 + lVar10 * (ulong)uVar24 * 4) <=
                     *(float *)(lVar28 + lVar10 * (ulong)*(uint *)(lVar16 + lVar30) * 4));
            *(uint *)(lVar16 + lVar12) = uVar24;
          }
        }
        bVar6 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar6);
      do {
        uVar18 = 0;
        uVar24 = *(uint *)(lVar16 + lVar20 * lVar31);
        lVar21 = param_3[1];
        lVar14 = param_3[5] + *param_3 * 4;
        lVar22 = lVar31;
        do {
          lVar27 = lVar22 + ((int)uVar18 + 1);
          uVar26 = uVar18 << 1 | 1;
          uVar19 = uVar18 * 2 + 2;
          lVar28 = lVar27 * lVar20;
          uVar18 = uVar26;
          if ((long)uVar19 < (long)uVar15) {
            lVar11 = (lVar27 + 1) * lVar20;
            if (*(float *)(lVar14 + lVar21 * (ulong)*(uint *)(lVar16 + lVar28) * 4) <
                *(float *)(lVar14 + lVar21 * (ulong)*(uint *)(lVar16 + lVar11) * 4)) {
              lVar27 = lVar27 + 1;
              uVar18 = uVar19;
              lVar28 = lVar11;
            }
          }
          *(undefined4 *)(lVar16 + lVar22 * lVar20) = *(undefined4 *)(lVar16 + lVar28);
          lVar22 = lVar27;
        } while ((long)uVar18 <= (long)(uVar15 - 2 >> 1));
        lVar13 = lVar13 + -1;
        lVar22 = lVar27 * lVar20;
        if (lVar27 == lVar13) {
LAB_10a9389c4:
          *(uint *)(lVar16 + lVar22) = uVar24;
        }
        else {
          *(undefined4 *)(lVar16 + lVar22) = *(undefined4 *)(lVar23 + lVar13 * lVar25);
          *(uint *)(lVar23 + lVar13 * lVar25) = uVar24;
          if (1 < (lVar27 - lVar31) + 1) {
            uVar18 = (lVar27 - lVar31) - 1U >> 1;
            lVar28 = lVar31 + (int)uVar18;
            uVar24 = *(uint *)(lVar16 + lVar22);
            fVar33 = *(float *)(lVar14 + lVar21 * (ulong)uVar24 * 4);
            if (*(float *)(lVar14 + lVar21 * (ulong)*(uint *)(lVar16 + lVar28 * lVar20) * 4) <
                fVar33) {
              do {
                lVar22 = lVar28 * lVar20;
                *(undefined4 *)(lVar16 + lVar27 * lVar20) = *(undefined4 *)(lVar16 + lVar22);
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                lVar11 = lVar31 + (int)uVar18;
                lVar27 = lVar28;
                lVar28 = lVar11;
              } while (*(float *)(lVar14 + lVar21 * (ulong)*(uint *)(lVar16 + lVar11 * lVar20) * 4)
                       < fVar33);
              goto LAB_10a9389c4;
            }
          }
        }
        bVar6 = (long)uVar15 < 3;
        uVar15 = uVar15 - 1;
        if (bVar6) {
          return;
        }
      } while( true );
    }
    uVar18 = uVar15 >> 1;
    lVar21 = *param_1;
    lVar14 = param_1[2];
    if (uVar15 < 0x81) {
      lVar25 = *param_2;
      lVar23 = lVar14 * lVar31;
      uVar24 = *(uint *)(lVar21 + lVar23);
      lVar14 = lVar14 * (uVar18 + lVar31);
      uVar4 = *(uint *)(lVar21 + lVar14);
      lVar16 = *param_3;
      lVar20 = param_3[1];
      lVar22 = param_3[5];
      lVar31 = lVar22 + lVar16 * 4;
      fVar34 = *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4);
      fVar33 = *(float *)(lVar31 + lVar20 * (ulong)uVar4 * 4);
      lVar13 = param_2[2] * (lVar13 + -1);
      uVar2 = *(uint *)(lVar25 + lVar13);
      fVar35 = *(float *)(lVar31 + lVar20 * (ulong)uVar2 * 4);
      if (fVar33 <= fVar34) {
        if (fVar35 < fVar34) {
          *(uint *)(lVar21 + lVar23) = uVar2;
          *(uint *)(lVar25 + lVar13) = uVar24;
          uVar24 = *(uint *)(lVar21 + lVar14);
          if (*(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar21 + lVar23) * 4) <
              *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4)) {
            *(uint *)(lVar21 + lVar14) = *(uint *)(lVar21 + lVar23);
            *(uint *)(lVar21 + lVar23) = uVar24;
          }
        }
      }
      else {
        if (fVar34 <= fVar35) {
          *(uint *)(lVar21 + lVar14) = uVar24;
          *(uint *)(lVar21 + lVar23) = uVar4;
          if (fVar33 <= *(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar25 + lVar13) * 4))
          goto LAB_10a938090;
          *(uint *)(lVar21 + lVar23) = *(uint *)(lVar25 + lVar13);
        }
        else {
          *(uint *)(lVar21 + lVar14) = uVar2;
        }
        *(uint *)(lVar25 + lVar13) = uVar4;
      }
    }
    else {
      iVar17 = (int)uVar18;
      lVar25 = *param_2;
      lVar23 = lVar14 * (lVar31 + iVar17);
      uVar24 = *(uint *)(lVar21 + lVar23);
      lVar14 = lVar14 * lVar31;
      uVar4 = *(uint *)(lVar21 + lVar14);
      lVar16 = *param_3;
      lVar20 = param_3[1];
      lVar22 = param_3[5];
      lVar31 = lVar22 + lVar16 * 4;
      fVar34 = *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4);
      fVar33 = *(float *)(lVar31 + lVar20 * (ulong)uVar4 * 4);
      lVar13 = param_2[2] * (lVar13 + -1);
      uVar2 = *(uint *)(lVar25 + lVar13);
      fVar35 = *(float *)(lVar31 + lVar20 * (ulong)uVar2 * 4);
      if (fVar33 <= fVar34) {
        if (fVar35 < fVar34) {
          *(uint *)(lVar21 + lVar23) = uVar2;
          *(uint *)(lVar25 + lVar13) = uVar24;
          uVar24 = *(uint *)(lVar21 + lVar14);
          if (*(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar21 + lVar23) * 4) <
              *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4)) {
            *(uint *)(lVar21 + lVar14) = *(uint *)(lVar21 + lVar23);
            *(uint *)(lVar21 + lVar23) = uVar24;
          }
        }
      }
      else {
        if (fVar34 <= fVar35) {
          *(uint *)(lVar21 + lVar14) = uVar24;
          *(uint *)(lVar21 + lVar23) = uVar4;
          if (fVar33 <= *(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar25 + lVar13) * 4))
          goto LAB_10a937de4;
          *(uint *)(lVar21 + lVar23) = *(uint *)(lVar25 + lVar13);
        }
        else {
          *(uint *)(lVar21 + lVar14) = uVar2;
        }
        *(uint *)(lVar25 + lVar13) = uVar4;
      }
LAB_10a937de4:
      lVar23 = *param_1;
      lVar14 = param_1[2];
      lVar13 = (long)((uVar18 << 0x20) + -0x100000000) >> 0x20;
      lVar27 = *param_2;
      lVar25 = (param_1[3] + lVar13) * lVar14;
      uVar24 = *(uint *)(lVar23 + lVar25);
      lVar14 = lVar14 + lVar14 * param_1[3];
      uVar4 = *(uint *)(lVar23 + lVar14);
      fVar34 = *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4);
      fVar33 = *(float *)(lVar31 + lVar20 * (ulong)uVar4 * 4);
      lVar21 = (param_2[3] + -2) * param_2[2];
      uVar2 = *(uint *)(lVar27 + lVar21);
      fVar35 = *(float *)(lVar31 + lVar20 * (ulong)uVar2 * 4);
      if (fVar33 <= fVar34) {
        if (fVar35 < fVar34) {
          *(uint *)(lVar23 + lVar25) = uVar2;
          *(uint *)(lVar27 + lVar21) = uVar24;
          uVar24 = *(uint *)(lVar23 + lVar14);
          if (*(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar23 + lVar25) * 4) <
              *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4)) {
            *(uint *)(lVar23 + lVar14) = *(uint *)(lVar23 + lVar25);
            *(uint *)(lVar23 + lVar25) = uVar24;
          }
        }
      }
      else {
        if (fVar34 <= fVar35) {
          *(uint *)(lVar23 + lVar14) = uVar24;
          *(uint *)(lVar23 + lVar25) = uVar4;
          if (fVar33 <= *(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar27 + lVar21) * 4))
          goto LAB_10a937ed8;
          *(uint *)(lVar23 + lVar25) = *(uint *)(lVar27 + lVar21);
        }
        else {
          *(uint *)(lVar23 + lVar14) = uVar2;
        }
        *(uint *)(lVar27 + lVar21) = uVar4;
      }
LAB_10a937ed8:
      lVar25 = *param_1;
      lVar14 = (long)((uVar18 << 0x20) + 0x100000000) >> 0x20;
      lVar28 = *param_2;
      lVar27 = (param_1[3] + lVar14) * param_1[2];
      uVar24 = *(uint *)(lVar25 + lVar27);
      lVar21 = (param_1[3] + 2) * param_1[2];
      uVar4 = *(uint *)(lVar25 + lVar21);
      fVar34 = *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4);
      fVar33 = *(float *)(lVar31 + lVar20 * (ulong)uVar4 * 4);
      lVar23 = (param_2[3] + -3) * param_2[2];
      uVar2 = *(uint *)(lVar28 + lVar23);
      fVar35 = *(float *)(lVar31 + lVar20 * (ulong)uVar2 * 4);
      if (fVar33 <= fVar34) {
        if (fVar35 < fVar34) {
          *(uint *)(lVar25 + lVar27) = uVar2;
          *(uint *)(lVar28 + lVar23) = uVar24;
          uVar24 = *(uint *)(lVar25 + lVar21);
          if (*(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar25 + lVar27) * 4) <
              *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4)) {
            *(uint *)(lVar25 + lVar21) = *(uint *)(lVar25 + lVar27);
            *(uint *)(lVar25 + lVar27) = uVar24;
          }
        }
      }
      else {
        if (fVar34 <= fVar35) {
          *(uint *)(lVar25 + lVar21) = uVar24;
          *(uint *)(lVar25 + lVar27) = uVar4;
          if (fVar33 <= *(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar28 + lVar23) * 4))
          goto LAB_10a937fa4;
          *(uint *)(lVar25 + lVar27) = *(uint *)(lVar28 + lVar23);
        }
        else {
          *(uint *)(lVar25 + lVar21) = uVar2;
        }
        *(uint *)(lVar28 + lVar23) = uVar4;
      }
LAB_10a937fa4:
      lVar25 = *param_1;
      lVar21 = param_1[2];
      lVar23 = param_1[3];
      lVar27 = (lVar23 + iVar17) * lVar21;
      uVar24 = *(uint *)(lVar25 + lVar27);
      lVar13 = (lVar23 + lVar13) * lVar21;
      uVar4 = *(uint *)(lVar25 + lVar13);
      fVar34 = *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4);
      fVar33 = *(float *)(lVar31 + lVar20 * (ulong)uVar4 * 4);
      lVar21 = (lVar23 + lVar14) * lVar21;
      uVar2 = *(uint *)(lVar25 + lVar21);
      fVar35 = *(float *)(lVar31 + lVar20 * (ulong)uVar2 * 4);
      if (fVar33 <= fVar34) {
        if (fVar35 < fVar34) {
          *(uint *)(lVar25 + lVar27) = uVar2;
          *(uint *)(lVar25 + lVar21) = uVar24;
          uVar24 = *(uint *)(lVar25 + lVar13);
          if (*(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar25 + lVar27) * 4) <
              *(float *)(lVar31 + lVar20 * (ulong)uVar24 * 4)) {
            *(uint *)(lVar25 + lVar13) = *(uint *)(lVar25 + lVar27);
            *(uint *)(lVar25 + lVar27) = uVar24;
          }
        }
      }
      else {
        if (fVar34 <= fVar35) {
          *(uint *)(lVar25 + lVar13) = uVar24;
          *(uint *)(lVar25 + lVar27) = uVar4;
          if (fVar33 <= *(float *)(lVar31 + lVar20 * (ulong)*(uint *)(lVar25 + lVar21) * 4))
          goto LAB_10a93806c;
          *(uint *)(lVar25 + lVar27) = *(uint *)(lVar25 + lVar21);
        }
        else {
          *(uint *)(lVar25 + lVar13) = uVar2;
        }
        *(uint *)(lVar25 + lVar21) = uVar4;
      }
LAB_10a93806c:
      lVar31 = *param_1;
      lVar14 = param_1[3] * param_1[2];
      lVar13 = (param_1[3] + (long)iVar17) * param_1[2];
      uVar3 = *(undefined4 *)(lVar31 + lVar14);
      *(undefined4 *)(lVar31 + lVar14) = *(undefined4 *)(lVar31 + lVar13);
      *(undefined4 *)(lVar31 + lVar13) = uVar3;
    }
LAB_10a938090:
    param_4 = param_4 + -1;
    lVar31 = *param_1;
    if ((param_5 & 1) == 0) {
      lVar21 = param_1[2];
      uVar18 = param_1[3];
      lVar13 = param_1[1];
      lVar23 = uVar18 * lVar21;
      uVar24 = *(uint *)(lVar31 + lVar23);
      uVar19 = (ulong)uVar24;
      lVar22 = lVar22 + lVar16 * 4;
      fVar33 = *(float *)(lVar22 + lVar20 * uVar19 * 4);
      lVar16 = *param_2;
      lVar14 = param_2[2];
      uVar15 = param_2[3];
      if (*(float *)(lVar22 + lVar20 * (ulong)*(uint *)(lVar31 + (uVar18 - 1) * lVar21) * 4) <
          fVar33) goto LAB_10a9380f8;
      uVar26 = uVar15 - 1;
      uVar19 = uVar18;
      if (*(float *)(lVar22 + lVar20 * (ulong)*(uint *)(lVar16 + uVar26 * lVar14) * 4) <= fVar33) {
        uVar32 = uVar15;
        if (uVar15 <= uVar18 + 1) {
          uVar32 = uVar18 + 1;
        }
        puVar29 = (uint *)(lVar31 + lVar21 * (uVar18 + 1));
        do {
          uVar19 = uVar19 + 1;
          if (uVar15 <= uVar19) goto LAB_10a93848c;
          uVar4 = *puVar29;
          puVar29 = (uint *)((long)puVar29 + lVar21);
        } while (*(float *)(lVar22 + lVar20 * (ulong)uVar4 * 4) <= fVar33);
      }
      else {
        puVar29 = (uint *)(lVar31 + lVar21 + lVar21 * uVar18);
        do {
          if (uVar26 == uVar19) goto LAB_10a938b60;
          uVar4 = *puVar29;
          puVar29 = (uint *)((long)puVar29 + lVar21);
          uVar19 = uVar19 + 1;
        } while (*(float *)(lVar22 + lVar20 * (ulong)uVar4 * 4) <= fVar33);
      }
      uVar32 = uVar19;
      if (uVar32 < uVar15) {
        puVar29 = (uint *)(lVar16 + lVar14 * uVar26);
        do {
          if (uVar18 == uVar15) goto LAB_10a938b60;
          uVar15 = uVar15 - 1;
          uVar4 = *puVar29;
          puVar29 = (uint *)((long)puVar29 - lVar14);
        } while (fVar33 < *(float *)(lVar22 + lVar20 * (ulong)uVar4 * 4));
      }
      if (uVar32 < uVar15) {
        do {
          lVar25 = uVar32 * lVar21;
          uVar3 = *(undefined4 *)(lVar31 + lVar25);
          *(undefined4 *)(lVar31 + lVar25) = *(undefined4 *)(lVar16 + uVar15 * lVar14);
          *(undefined4 *)(lVar16 + uVar15 * lVar14) = uVar3;
          puVar29 = (uint *)(lVar31 + lVar21 + lVar25);
          do {
            if (uVar26 == uVar32) goto LAB_10a938b60;
            uVar4 = *puVar29;
            puVar29 = (uint *)((long)puVar29 + lVar21);
            uVar32 = uVar32 + 1;
          } while (*(float *)(lVar22 + lVar20 * (ulong)uVar4 * 4) <= fVar33);
          puVar29 = (uint *)(lVar16 + lVar14 * (uVar15 - 1));
          do {
            if (uVar18 == uVar15) goto LAB_10a938b60;
            uVar15 = uVar15 - 1;
            uVar4 = *puVar29;
            puVar29 = (uint *)((long)puVar29 - lVar14);
          } while (fVar33 < *(float *)(lVar22 + lVar20 * (ulong)uVar4 * 4));
        } while (uVar32 < uVar15);
      }
LAB_10a93848c:
      lVar14 = (uVar32 - 1) * lVar21;
      if (uVar18 != uVar32 - 1) {
        *(undefined4 *)(lVar31 + lVar23) = *(undefined4 *)(lVar31 + lVar14);
      }
      *(uint *)(lVar31 + lVar14) = uVar24;
LAB_10a9384a8:
      param_5 = 0;
LAB_10a938304:
      *param_1 = lVar31;
      param_1[1] = lVar13;
      param_1[2] = lVar21;
      param_1[3] = uVar32;
      goto LAB_10a937c24;
    }
    lVar13 = param_1[1];
    lVar21 = param_1[2];
    uVar18 = param_1[3];
    lVar16 = *param_2;
    lVar14 = param_2[2];
    uVar15 = param_2[3];
    lVar23 = uVar18 * lVar21;
    uVar19 = (ulong)*(uint *)(lVar31 + lVar23);
LAB_10a9380f8:
    lVar27 = 0;
    lVar20 = param_3[1];
    lVar22 = param_3[5] + *param_3 * 4;
    lVar25 = lVar21 * uVar18;
    do {
      lVar25 = lVar21 + lVar25;
      if ((uVar18 - uVar15) + 1 == lVar27) goto LAB_10a938b60;
      fVar33 = *(float *)(lVar22 + lVar20 * uVar19 * 4);
      lVar27 = lVar27 + -1;
    } while (*(float *)(lVar22 + lVar20 * (ulong)*(uint *)(lVar31 + lVar25) * 4) < fVar33);
    uVar32 = uVar18 - lVar27;
    uVar26 = uVar15;
    if (lVar27 == -1) {
      puVar29 = (uint *)(lVar16 + lVar14 * (uVar15 - 1));
      do {
        if (uVar26 <= uVar32) goto LAB_10a938248;
        uVar26 = uVar26 - 1;
        uVar24 = *puVar29;
        puVar29 = (uint *)((long)puVar29 - lVar14);
      } while (fVar33 <= *(float *)(lVar22 + lVar20 * (ulong)uVar24 * 4));
    }
    else {
      puVar29 = (uint *)(lVar16 + lVar14 * (uVar15 - 1));
      do {
        if (uVar18 == uVar26) {
LAB_10a938b60:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a938b64);
          (*pcVar5)();
        }
        uVar26 = uVar26 - 1;
        uVar24 = *puVar29;
        puVar29 = (uint *)((long)puVar29 - lVar14);
      } while (fVar33 <= *(float *)(lVar22 + lVar20 * (ulong)uVar24 * 4));
    }
    if (uVar32 < uVar26) {
      do {
        lVar25 = uVar32 * lVar21;
        uVar3 = *(undefined4 *)(lVar31 + lVar25);
        *(undefined4 *)(lVar31 + lVar25) = *(undefined4 *)(lVar16 + uVar26 * lVar14);
        *(undefined4 *)(lVar16 + uVar26 * lVar14) = uVar3;
        puVar29 = (uint *)(lVar31 + lVar21 + lVar25);
        do {
          if (uVar15 - 1 == uVar32) goto LAB_10a938b60;
          uVar24 = *puVar29;
          puVar29 = (uint *)((long)puVar29 + lVar21);
          uVar32 = uVar32 + 1;
        } while (*(float *)(lVar22 + lVar20 * (ulong)uVar24 * 4) < fVar33);
        puVar29 = (uint *)(lVar16 + lVar14 * (uVar26 - 1));
        do {
          if (uVar18 == uVar26) goto LAB_10a938b60;
          uVar26 = uVar26 - 1;
          uVar24 = *puVar29;
          puVar29 = (uint *)((long)puVar29 - lVar14);
        } while (fVar33 <= *(float *)(lVar22 + lVar20 * (ulong)uVar24 * 4));
      } while (uVar32 < uVar26);
      bVar6 = true;
    }
    else {
LAB_10a938248:
      bVar6 = false;
    }
    uVar15 = uVar32 - 1;
    if (uVar18 != uVar15) {
      *(undefined4 *)(lVar31 + lVar23) = *(undefined4 *)(lVar31 + uVar15 * lVar21);
    }
    *(int *)(lVar31 + uVar15 * lVar21) = (int)uVar19;
    if (bVar6) {
LAB_10a938310:
      lStack_78 = param_1[1];
      lStack_80 = *param_1;
      uStack_68 = param_1[3];
      lStack_70 = param_1[2];
      lStack_a0 = lVar31;
      lStack_98 = lVar13;
      lStack_90 = lVar21;
      uStack_88 = uVar15;
      FUN_10a937bf0(&lStack_80,&lStack_a0,param_3,param_4,param_5 & 1);
      goto LAB_10a9384a8;
    }
    lStack_78 = param_1[1];
    lStack_80 = *param_1;
    uStack_68 = param_1[3];
    lStack_70 = param_1[2];
    plVar7 = &lStack_80;
    lStack_a0 = lVar31;
    lStack_98 = lVar13;
    lStack_90 = lVar21;
    uStack_88 = uVar15;
    FUN_10a938d54(plVar7,&lStack_a0,param_3);
    lStack_98 = param_2[1];
    lStack_a0 = *param_2;
    uStack_88 = param_2[3];
    lStack_90 = param_2[2];
    plVar8 = &lStack_80;
    lStack_80 = lVar31;
    lStack_78 = lVar13;
    lStack_70 = lVar21;
    uStack_68 = uVar32;
    FUN_10a938d54(plVar8,&lStack_a0,param_3);
    if ((int)plVar8 == 0) {
      if ((int)plVar7 == 0) goto LAB_10a938310;
      goto LAB_10a938304;
    }
    if (((ulong)plVar7 & 1) != 0) {
      return;
    }
    *param_2 = lVar31;
    param_2[1] = lVar13;
    param_2[2] = lVar21;
    param_2[3] = uVar15;
  } while( true );
}



/* Entry: 10a938ba8; end: 10a938d53;  */

void FUN_10a938ba8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar8 = *param_1;
  lVar10 = *param_2;
  lVar12 = *param_3;
  lVar11 = param_2[3] * param_2[2];
  uVar3 = *(uint *)(lVar10 + lVar11);
  lVar9 = param_1[3] * param_1[2];
  uVar4 = *(uint *)(lVar8 + lVar9);
  lVar2 = param_5[1];
  lVar1 = param_5[5] + *param_5 * 4;
  fVar17 = *(float *)(lVar1 + lVar2 * (ulong)uVar3 * 4);
  fVar16 = *(float *)(lVar1 + lVar2 * (ulong)uVar4 * 4);
  lVar14 = param_3[3] * param_3[2];
  uVar5 = *(uint *)(lVar12 + lVar14);
  fVar18 = *(float *)(lVar1 + lVar2 * (ulong)uVar5 * 4);
  if (fVar16 <= fVar17) {
    lVar7 = lVar2 * (ulong)uVar5;
    if (fVar18 < fVar17) {
      *(uint *)(lVar10 + lVar11) = uVar5;
      *(uint *)(lVar12 + lVar14) = uVar3;
      uVar4 = *(uint *)(lVar8 + lVar9);
      lVar7 = lVar2 * (ulong)uVar3;
      if (*(float *)(lVar1 + lVar2 * (ulong)*(uint *)(lVar10 + lVar11) * 4) <
          *(float *)(lVar1 + lVar2 * (ulong)uVar4 * 4)) {
        *(uint *)(lVar8 + lVar9) = *(uint *)(lVar10 + lVar11);
        *(uint *)(lVar10 + lVar11) = uVar4;
        lVar7 = lVar2 * (ulong)*(uint *)(lVar12 + lVar14);
      }
    }
  }
  else {
    if (fVar17 <= fVar18) {
      *(uint *)(lVar8 + lVar9) = uVar3;
      *(uint *)(lVar10 + lVar11) = uVar4;
      lVar7 = lVar2 * (ulong)*(uint *)(lVar12 + lVar14);
      if (fVar16 <= *(float *)(lVar1 + lVar7 * 4)) goto LAB_10a938c84;
      *(uint *)(lVar10 + lVar11) = *(uint *)(lVar12 + lVar14);
    }
    else {
      *(uint *)(lVar8 + lVar9) = uVar5;
    }
    *(uint *)(lVar12 + lVar14) = uVar4;
    lVar7 = lVar2 * (ulong)uVar4;
  }
LAB_10a938c84:
  lVar13 = *param_4;
  lVar12 = param_4[2];
  lVar14 = param_4[3];
  uVar3 = *(uint *)(lVar13 + lVar12 * lVar14);
  if (*(float *)(lVar1 + lVar2 * (ulong)uVar3 * 4) < *(float *)(lVar1 + lVar7 * 4)) {
    lVar15 = *param_3;
    lVar7 = param_3[3] * param_3[2];
    uVar6 = *(undefined4 *)(lVar15 + lVar7);
    *(uint *)(lVar15 + lVar7) = uVar3;
    *(undefined4 *)(lVar13 + lVar12 * lVar14) = uVar6;
    if (*(float *)(lVar1 + lVar2 * (ulong)*(uint *)(lVar15 + lVar7) * 4) <
        *(float *)(lVar1 + lVar2 * (ulong)*(uint *)(lVar10 + lVar11) * 4)) {
      lVar12 = *param_2;
      lVar7 = *param_3;
      lVar10 = param_3[2];
      lVar11 = param_3[3];
      lVar14 = param_2[3] * param_2[2];
      uVar6 = *(undefined4 *)(lVar12 + lVar14);
      *(undefined4 *)(lVar12 + lVar14) = *(undefined4 *)(lVar7 + lVar11 * lVar10);
      *(undefined4 *)(lVar7 + lVar11 * lVar10) = uVar6;
      if (*(float *)(lVar1 + lVar2 * (ulong)*(uint *)(lVar12 + lVar14) * 4) <
          *(float *)(lVar1 + lVar2 * (ulong)*(uint *)(lVar8 + lVar9) * 4)) {
        lVar8 = *param_2;
        lVar1 = param_2[2];
        lVar2 = param_2[3];
        uVar6 = *(undefined4 *)(*param_1 + param_1[3] * param_1[2]);
        *(undefined4 *)(*param_1 + param_1[3] * param_1[2]) = *(undefined4 *)(lVar8 + lVar2 * lVar1)
        ;
        *(undefined4 *)(lVar8 + lVar2 * lVar1) = uVar6;
      }
    }
  }
  return;
}



/* Entry: 10a938d54; end: 10a93920b;  */

uint FUN_10a938d54(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar10 = param_2[3];
  lVar19 = param_1[3];
  uVar12 = uVar10 - lVar19;
  if ((long)uVar12 < 3) {
    if (1 < uVar12) {
      if (uVar12 != 2) {
LAB_10a938f94:
        lVar14 = *param_1;
        lVar15 = param_1[2];
        lVar18 = lVar15 * lVar19;
        lVar11 = lVar15 + lVar18;
        uVar9 = *(uint *)(lVar14 + lVar11);
        uVar3 = *(uint *)(lVar14 + lVar18);
        uVar12 = lVar19 + 2;
        lVar2 = param_3[1];
        lVar13 = param_3[5] + *param_3 * 4;
        fVar21 = *(float *)(lVar13 + lVar2 * (ulong)uVar9 * 4);
        fVar20 = *(float *)(lVar13 + lVar2 * (ulong)uVar3 * 4);
        lVar6 = lVar15 * uVar12;
        uVar4 = *(uint *)(lVar14 + lVar6);
        fVar22 = *(float *)(lVar13 + lVar2 * (ulong)uVar4 * 4);
        if (fVar20 <= fVar21) {
          if (fVar22 < fVar21) {
            *(uint *)(lVar14 + lVar11) = uVar4;
            *(uint *)(lVar14 + lVar6) = uVar9;
            uVar9 = *(uint *)(lVar14 + lVar18);
            if (*(float *)(lVar13 + lVar2 * (ulong)*(uint *)(lVar14 + lVar11) * 4) <
                *(float *)(lVar13 + lVar2 * (ulong)uVar9 * 4)) {
              *(uint *)(lVar14 + lVar18) = *(uint *)(lVar14 + lVar11);
              *(uint *)(lVar14 + lVar11) = uVar9;
            }
          }
        }
        else {
          if (fVar21 <= fVar22) {
            *(uint *)(lVar14 + lVar18) = uVar9;
            *(uint *)(lVar14 + lVar11) = uVar3;
            if (fVar20 <= *(float *)(lVar13 + lVar2 * (ulong)*(uint *)(lVar14 + lVar6) * 4))
            goto LAB_10a93913c;
            *(uint *)(lVar14 + lVar11) = *(uint *)(lVar14 + lVar6);
          }
          else {
            *(uint *)(lVar14 + lVar18) = uVar4;
          }
          *(uint *)(lVar14 + lVar6) = uVar3;
        }
LAB_10a93913c:
        uVar16 = lVar19 + 3;
        if (uVar16 != uVar10) {
          iVar17 = 0;
          lVar11 = lVar14 + lVar15 * uVar16;
          lVar19 = lVar14 + lVar15 + lVar15 * lVar19;
          lVar6 = lVar14 + lVar15 * uVar12;
          uVar7 = 0xfffffffffffffffd;
          do {
            uVar9 = *(uint *)(lVar14 + uVar16 * lVar15);
            fVar20 = *(float *)(lVar13 + lVar2 * (ulong)uVar9 * 4);
            if (fVar20 < *(float *)(lVar13 + lVar2 * (ulong)*(uint *)(lVar14 + uVar12 * lVar15) * 4)
               ) {
              lVar18 = 0;
              uVar12 = uVar7;
              do {
                lVar8 = lVar18;
                *(undefined4 *)(lVar11 + lVar8) = *(undefined4 *)(lVar6 + lVar8);
                bVar5 = 0xfffffffffffffffe < uVar12;
                uVar12 = uVar12 + 1;
                if (bVar5) break;
                lVar18 = lVar8 - lVar15;
              } while (fVar20 < *(float *)(lVar13 + lVar2 * (ulong)*(uint *)(lVar19 + lVar8) * 4));
              *(uint *)(lVar6 + lVar8) = uVar9;
              iVar17 = iVar17 + 1;
              if (iVar17 == 8) {
                uVar9 = 0;
                uVar10 = (ulong)(uVar16 + 1 == uVar10);
                goto LAB_10a9391f0;
              }
            }
            uVar1 = uVar16 + 1;
            lVar11 = lVar11 + lVar15;
            lVar19 = lVar19 + lVar15;
            uVar7 = uVar7 - 1;
            lVar6 = lVar6 + lVar15;
            uVar12 = uVar16;
            uVar16 = uVar1;
          } while (uVar1 != uVar10);
        }
        uVar9 = 1;
LAB_10a9391f0:
        uVar9 = uVar9 | (uint)uVar10;
        goto LAB_10a9390f4;
      }
      param_2[3] = uVar10 - 1;
      lVar11 = *param_2;
      lVar13 = param_2[2] * (uVar10 - 1);
      uVar9 = *(uint *)(lVar11 + lVar13);
      uVar3 = *(uint *)(*param_1 + param_1[2] * param_1[3]);
      lVar19 = param_3[5] + *param_3 * 4;
      if (*(float *)(lVar19 + param_3[1] * (ulong)uVar9 * 4) <
          *(float *)(lVar19 + param_3[1] * (ulong)uVar3 * 4)) {
        *(uint *)(*param_1 + param_1[2] * param_1[3]) = uVar9;
        *(uint *)(lVar11 + lVar13) = uVar3;
      }
    }
  }
  else if (uVar12 == 3) {
    lVar6 = *param_1;
    lVar11 = param_1[2];
    param_2[3] = uVar10 - 1;
    lVar14 = *param_2;
    lVar19 = lVar11 * lVar19;
    lVar11 = lVar11 + lVar19;
    uVar9 = *(uint *)(lVar6 + lVar11);
    uVar3 = *(uint *)(lVar6 + lVar19);
    lVar2 = param_3[1];
    lVar13 = param_3[5] + *param_3 * 4;
    fVar21 = *(float *)(lVar13 + lVar2 * (ulong)uVar9 * 4);
    fVar20 = *(float *)(lVar13 + lVar2 * (ulong)uVar3 * 4);
    lVar15 = param_2[2] * (uVar10 - 1);
    uVar4 = *(uint *)(lVar14 + lVar15);
    fVar22 = *(float *)(lVar13 + lVar2 * (ulong)uVar4 * 4);
    if (fVar20 <= fVar21) {
      if (fVar22 < fVar21) {
        *(uint *)(lVar6 + lVar11) = uVar4;
        *(uint *)(lVar14 + lVar15) = uVar9;
        uVar9 = *(uint *)(lVar6 + lVar19);
        if (*(float *)(lVar13 + lVar2 * (ulong)*(uint *)(lVar6 + lVar11) * 4) <
            *(float *)(lVar13 + lVar2 * (ulong)uVar9 * 4)) {
          *(uint *)(lVar6 + lVar19) = *(uint *)(lVar6 + lVar11);
          *(uint *)(lVar6 + lVar11) = uVar9;
        }
      }
    }
    else {
      if (fVar21 <= fVar22) {
        *(uint *)(lVar6 + lVar19) = uVar9;
        *(uint *)(lVar6 + lVar11) = uVar3;
        if (fVar20 <= *(float *)(lVar13 + lVar2 * (ulong)*(uint *)(lVar14 + lVar15) * 4))
        goto LAB_10a9390f0;
        *(uint *)(lVar6 + lVar11) = *(uint *)(lVar14 + lVar15);
      }
      else {
        *(uint *)(lVar6 + lVar19) = uVar4;
      }
      *(uint *)(lVar14 + lVar15) = uVar3;
    }
  }
  else if (uVar12 == 4) {
    lStack_78 = param_1[1];
    lStack_80 = *param_1;
    lStack_68 = param_1[3];
    lStack_70 = param_1[2];
    lStack_b8 = param_1[1];
    lStack_c0 = *param_1;
    lStack_90 = param_1[2];
    lStack_98 = param_1[1];
    lStack_a0 = *param_1;
    lStack_88 = param_1[3] + 1;
    lStack_b0 = param_1[2];
    lStack_a8 = param_1[3] + 2;
    param_2[3] = uVar10 - 1;
    lStack_d8 = param_2[1];
    lStack_e0 = *param_2;
    lStack_c8 = param_2[3];
    lStack_d0 = param_2[2];
    FUN_10a938ba8(&lStack_80,&lStack_a0,&lStack_c0,&lStack_e0,param_3);
  }
  else {
    if (uVar12 != 5) goto LAB_10a938f94;
    lVar13 = *param_1;
    lStack_d8 = param_1[1];
    lVar15 = param_1[2];
    param_2[3] = uVar10 - 1;
    lVar18 = *param_2;
    lVar14 = param_2[2];
    lStack_e0 = lVar13;
    lStack_d0 = lVar15;
    lStack_c8 = lVar19 + 3;
    lStack_c0 = lVar13;
    lStack_b8 = lStack_d8;
    lStack_b0 = lVar15;
    lStack_a8 = lVar19 + 2;
    lStack_a0 = lVar13;
    lStack_98 = lStack_d8;
    lStack_90 = lVar15;
    lStack_88 = lVar19 + 1;
    lStack_80 = lVar13;
    lStack_78 = lStack_d8;
    lStack_70 = lVar15;
    lStack_68 = lVar19;
    FUN_10a938ba8(&lStack_80,&lStack_a0,&lStack_c0,&lStack_e0,param_3);
    lVar14 = lVar14 * (uVar10 - 1);
    uVar9 = *(uint *)(lVar18 + lVar14);
    lVar6 = lVar15 * (lVar19 + 3);
    uVar3 = *(uint *)(lVar13 + lVar6);
    lVar2 = param_3[1];
    lVar11 = param_3[5] + *param_3 * 4;
    if (*(float *)(lVar11 + lVar2 * (ulong)uVar9 * 4) <
        *(float *)(lVar11 + lVar2 * (ulong)uVar3 * 4)) {
      *(uint *)(lVar13 + lVar6) = uVar9;
      *(uint *)(lVar18 + lVar14) = uVar3;
      lVar14 = lVar15 * (lVar19 + 2);
      uVar9 = *(uint *)(lVar13 + lVar14);
      if (*(float *)(lVar11 + lVar2 * (ulong)*(uint *)(lVar13 + lVar6) * 4) <
          *(float *)(lVar11 + lVar2 * (ulong)uVar9 * 4)) {
        *(uint *)(lVar13 + lVar14) = *(uint *)(lVar13 + lVar6);
        *(uint *)(lVar13 + lVar6) = uVar9;
        lVar6 = lVar15 * (lVar19 + 1);
        uVar9 = *(uint *)(lVar13 + lVar6);
        if (*(float *)(lVar11 + lVar2 * (ulong)*(uint *)(lVar13 + lVar14) * 4) <
            *(float *)(lVar11 + lVar2 * (ulong)uVar9 * 4)) {
          *(uint *)(lVar13 + lVar6) = *(uint *)(lVar13 + lVar14);
          *(uint *)(lVar13 + lVar14) = uVar9;
          uVar9 = *(uint *)(lVar13 + lVar15 * lVar19);
          if (*(float *)(lVar11 + lVar2 * (ulong)*(uint *)(lVar13 + lVar6) * 4) <
              *(float *)(lVar11 + lVar2 * (ulong)uVar9 * 4)) {
            *(uint *)(lVar13 + lVar15 * lVar19) = *(uint *)(lVar13 + lVar6);
            *(uint *)(lVar13 + lVar6) = uVar9;
          }
        }
      }
    }
  }
LAB_10a9390f0:
  uVar9 = 1;
LAB_10a9390f4:
  return uVar9 & 1;
}



/* Entry: 10a93920c; end: 10a939eaf;  */

void FUN_10a93920c(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
LAB_10a93923c:
  do {
    puVar21 = param_1;
    uVar13 = (long)param_2 - (long)puVar21 >> 2;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        uVar18 = param_2[-1];
        if ((ulong)uVar18 < (ulong)param_3[1]) {
          uVar2 = *puVar21;
          if ((ulong)uVar2 < (ulong)param_3[1]) {
            if (*(float *)(*param_3 + (ulong)uVar2 * 4) <= *(float *)(*param_3 + (ulong)uVar18 * 4))
            {
              return;
            }
            *puVar21 = uVar18;
            param_2[-1] = uVar2;
            return;
          }
        }
        goto LAB_10a939eac;
      }
    }
    else {
      if (uVar13 == 3) {
        uVar18 = puVar21[1];
        uVar13 = param_3[1];
        if (uVar13 <= uVar18) goto LAB_10a939eac;
        uVar2 = *puVar21;
        if (uVar13 <= uVar2) goto LAB_10a939eac;
        lVar14 = *param_3;
        fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
        fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
        uVar3 = param_2[-1];
        uVar11 = (ulong)uVar3;
        if (fVar22 <= fVar23) {
          if (uVar11 < uVar13) {
            if (fVar23 <= *(float *)(lVar14 + uVar11 * 4)) {
              return;
            }
            puVar21[1] = uVar3;
            param_2[-1] = uVar18;
            uVar18 = puVar21[1];
            if ((uVar18 < uVar13) && (uVar11 = (ulong)*puVar21, uVar11 < uVar13)) {
              fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
LAB_10a939dc0:
              if (*(float *)(lVar14 + uVar11 * 4) <= fVar22) {
                return;
              }
              *puVar21 = uVar18;
              puVar21[1] = (uint)uVar11;
              return;
            }
          }
          goto LAB_10a939eac;
        }
        if (uVar13 <= uVar11) goto LAB_10a939eac;
        if (fVar23 <= *(float *)(lVar14 + uVar11 * 4)) {
          *puVar21 = uVar18;
          puVar21[1] = uVar2;
          uVar18 = param_2[-1];
          if (uVar13 <= uVar18) goto LAB_10a939eac;
          if (fVar22 <= *(float *)(lVar14 + (ulong)uVar18 * 4)) {
            return;
          }
          puVar21[1] = uVar18;
        }
        else {
          *puVar21 = uVar3;
        }
        param_2[-1] = uVar2;
        return;
      }
      if (uVar13 == 4) {
        lVar14 = *param_3;
        uVar13 = param_3[1];
        puVar6 = puVar21 + 1;
        puVar7 = puVar21 + 2;
        uVar18 = *puVar6;
        uVar11 = (ulong)uVar18;
        if (uVar13 <= uVar11) goto LAB_10a93a018;
        uVar2 = *puVar21;
        uVar19 = (ulong)uVar2;
        if (uVar13 <= uVar19) goto LAB_10a93a018;
        fVar23 = *(float *)(lVar14 + uVar11 * 4);
        fVar22 = *(float *)(lVar14 + uVar19 * 4);
        uVar3 = *puVar7;
        uVar12 = (ulong)uVar3;
        if (fVar22 <= fVar23) {
          if (uVar13 <= uVar12) goto LAB_10a93a018;
          if (*(float *)(lVar14 + uVar12 * 4) < fVar23) {
            *puVar6 = uVar3;
            *puVar7 = uVar18;
            uVar18 = *puVar6;
            if (uVar13 <= uVar18) goto LAB_10a93a018;
            uVar2 = *puVar21;
            if (uVar13 <= uVar2) goto LAB_10a93a018;
            uVar12 = uVar11;
            if (*(float *)(lVar14 + (ulong)uVar18 * 4) < *(float *)(lVar14 + (ulong)uVar2 * 4)) {
              *puVar21 = uVar18;
              *puVar6 = uVar2;
              uVar12 = (ulong)*puVar7;
            }
          }
        }
        else {
          if (uVar13 <= uVar12) goto LAB_10a93a018;
          if (fVar23 <= *(float *)(lVar14 + uVar12 * 4)) {
            *puVar21 = uVar18;
            *puVar6 = uVar2;
            uVar12 = (ulong)*puVar7;
            if (uVar13 <= uVar12) goto LAB_10a93a018;
            if (fVar22 <= *(float *)(lVar14 + uVar12 * 4)) goto LAB_10a939f84;
            *puVar6 = *puVar7;
          }
          else {
            *puVar21 = uVar3;
          }
          *puVar7 = uVar2;
          uVar12 = uVar19;
        }
LAB_10a939f84:
        uVar18 = param_2[-1];
        if ((uVar18 < uVar13) && (uVar12 < uVar13)) {
          if (*(float *)(lVar14 + uVar12 * 4) <= *(float *)(lVar14 + (ulong)uVar18 * 4)) {
            return;
          }
          *puVar7 = uVar18;
          param_2[-1] = (uint)uVar12;
          uVar18 = *puVar7;
          if (uVar18 < uVar13) {
            uVar2 = *puVar6;
            if (uVar2 < uVar13) {
              if (*(float *)(lVar14 + (ulong)uVar2 * 4) <= *(float *)(lVar14 + (ulong)uVar18 * 4)) {
                return;
              }
              *puVar6 = uVar18;
              *puVar7 = uVar2;
              uVar18 = *puVar6;
              if (uVar18 < uVar13) {
                uVar2 = *puVar21;
                if (uVar2 < uVar13) {
                  if (*(float *)(lVar14 + (ulong)uVar2 * 4) <=
                      *(float *)(lVar14 + (ulong)uVar18 * 4)) {
                    return;
                  }
                  *puVar21 = uVar18;
                  *puVar6 = uVar2;
                  return;
                }
              }
            }
          }
        }
LAB_10a93a018:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a93a01c);
        (*pcVar5)();
      }
      if (uVar13 == 5) {
        FUN_10a939eb0(puVar21,puVar21 + 1,puVar21 + 2,puVar21 + 3,*param_3,param_3[1]);
        uVar18 = param_2[-1];
        uVar13 = param_3[1];
        if (uVar18 < uVar13) {
          uVar2 = puVar21[3];
          if (uVar2 < uVar13) {
            lVar14 = *param_3;
            if (*(float *)(lVar14 + (ulong)uVar2 * 4) <= *(float *)(lVar14 + (ulong)uVar18 * 4)) {
              return;
            }
            puVar21[3] = uVar18;
            param_2[-1] = uVar2;
            uVar18 = puVar21[3];
            if (uVar18 < uVar13) {
              uVar2 = puVar21[2];
              if (uVar2 < uVar13) {
                fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
                if (*(float *)(lVar14 + (ulong)uVar2 * 4) <= fVar22) {
                  return;
                }
                puVar21[2] = uVar18;
                puVar21[3] = uVar2;
                uVar2 = puVar21[1];
                if (uVar2 < uVar13) {
                  if (*(float *)(lVar14 + (ulong)uVar2 * 4) <= fVar22) {
                    return;
                  }
                  puVar21[1] = uVar18;
                  puVar21[2] = uVar2;
                  uVar11 = (ulong)*puVar21;
                  if (uVar11 < uVar13) goto LAB_10a939dc0;
                }
              }
            }
          }
        }
        goto LAB_10a939eac;
      }
    }
    if ((long)uVar13 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (puVar21 == param_2) {
          return;
        }
        puVar6 = puVar21 + 1;
        if (puVar6 == param_2) {
          return;
        }
        lVar14 = *param_3;
        uVar13 = param_3[1];
        lVar16 = 0;
        puVar7 = puVar21;
        lVar20 = 4;
        while( true ) {
          uVar18 = *puVar6;
          if ((uVar13 <= uVar18) || (uVar13 <= *puVar7)) break;
          fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
          if (fVar22 < *(float *)(lVar14 + (ulong)*puVar7 * 4)) {
            uVar11 = (ulong)*(uint *)((long)puVar21 + lVar16);
            lVar16 = lVar20;
            do {
              *(undefined4 *)((long)puVar21 + lVar16) = (int)uVar11;
              if ((lVar16 == 0) ||
                 (uVar11 = (ulong)(uint)((undefined4 *)((long)puVar21 + lVar16))[-2],
                 uVar13 <= uVar11)) goto LAB_10a939eac;
              lVar16 = lVar16 + -4;
            } while (fVar22 < *(float *)(lVar14 + uVar11 * 4));
            *(uint *)((long)puVar21 + lVar16) = uVar18;
          }
          puVar7 = (uint *)((long)puVar21 + lVar20);
          puVar6 = (uint *)((long)puVar21 + lVar20 + 4);
          lVar16 = lVar20;
          lVar20 = lVar20 + 4;
          if (puVar6 == param_2) {
            return;
          }
        }
      }
      else {
        if (puVar21 == param_2) {
          return;
        }
        if (puVar21 + 1 == param_2) {
          return;
        }
        lVar16 = *param_3;
        uVar13 = param_3[1];
        lVar14 = 4;
        puVar6 = puVar21 + 1;
        puVar7 = puVar21;
        while( true ) {
          puVar15 = puVar6;
          uVar18 = puVar7[1];
          if ((uVar13 <= uVar18) || (uVar11 = (ulong)*puVar7, uVar13 <= uVar11)) break;
          fVar22 = *(float *)(lVar16 + (ulong)uVar18 * 4);
          lVar20 = lVar14;
          if (fVar22 < *(float *)(lVar16 + uVar11 * 4)) {
            do {
              *(int *)((long)puVar21 + lVar20) = (int)uVar11;
              lVar4 = lVar20 + -4;
              puVar6 = puVar21;
              if (lVar4 == 0) goto LAB_10a939b18;
              uVar11 = (ulong)*(uint *)((long)puVar21 + lVar20 + -8);
              if (uVar13 <= uVar11) goto LAB_10a939eac;
              lVar20 = lVar4;
            } while (fVar22 < *(float *)(lVar16 + uVar11 * 4));
            puVar6 = (uint *)((long)puVar21 + lVar4);
LAB_10a939b18:
            *puVar6 = uVar18;
          }
          puVar6 = puVar15 + 1;
          lVar14 = lVar14 + 4;
          puVar7 = puVar15;
          if (puVar6 == param_2) {
            return;
          }
        }
      }
      goto LAB_10a939eac;
    }
    if (param_4 == 0) {
      if (puVar21 == param_2) {
        return;
      }
      uVar12 = uVar13 - 2 >> 1;
      lVar14 = *param_3;
      uVar11 = param_3[1];
      uVar19 = uVar12;
      break;
    }
    puVar6 = puVar21 + (uVar13 >> 1);
    uVar11 = param_3[1];
    if (uVar13 < 0x81) {
      uVar18 = *puVar21;
      if (uVar11 <= uVar18) goto LAB_10a939eac;
      uVar2 = *puVar6;
      if (uVar11 <= uVar2) goto LAB_10a939eac;
      lVar14 = *param_3;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-1];
      uVar13 = (ulong)uVar3;
      if (fVar22 <= fVar23) {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (*(float *)(lVar14 + uVar13 * 4) < fVar23) {
          *puVar21 = uVar3;
          param_2[-1] = uVar18;
          uVar18 = *puVar21;
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          uVar2 = *puVar6;
          if (uVar11 <= uVar2) goto LAB_10a939eac;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) < *(float *)(lVar14 + (ulong)uVar2 * 4)) {
            *puVar6 = uVar18;
            *puVar21 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (fVar23 <= *(float *)(lVar14 + uVar13 * 4)) {
          *puVar6 = uVar18;
          *puVar21 = uVar2;
          uVar18 = param_2[-1];
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          if (fVar22 <= *(float *)(lVar14 + (ulong)uVar18 * 4)) goto LAB_10a939644;
          *puVar21 = uVar18;
        }
        else {
          *puVar6 = uVar3;
        }
        param_2[-1] = uVar2;
      }
    }
    else {
      uVar18 = *puVar6;
      if (uVar11 <= uVar18) goto LAB_10a939eac;
      uVar2 = *puVar21;
      if (uVar11 <= uVar2) goto LAB_10a939eac;
      lVar14 = *param_3;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-1];
      uVar13 = (ulong)uVar3;
      if (fVar22 <= fVar23) {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (*(float *)(lVar14 + uVar13 * 4) < fVar23) {
          *puVar6 = uVar3;
          param_2[-1] = uVar18;
          uVar18 = *puVar6;
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          uVar2 = *puVar21;
          if (uVar11 <= uVar2) goto LAB_10a939eac;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) < *(float *)(lVar14 + (ulong)uVar2 * 4)) {
            *puVar21 = uVar18;
            *puVar6 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (fVar23 <= *(float *)(lVar14 + uVar13 * 4)) {
          *puVar21 = uVar18;
          *puVar6 = uVar2;
          uVar18 = param_2[-1];
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          if (fVar22 <= *(float *)(lVar14 + (ulong)uVar18 * 4)) goto LAB_10a9393f8;
          *puVar6 = uVar18;
        }
        else {
          *puVar21 = uVar3;
        }
        param_2[-1] = uVar2;
      }
LAB_10a9393f8:
      puVar7 = puVar6 + -1;
      uVar18 = *puVar7;
      if (uVar11 <= uVar18) goto LAB_10a939eac;
      uVar2 = puVar21[1];
      if (uVar11 <= uVar2) goto LAB_10a939eac;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-2];
      uVar13 = (ulong)uVar3;
      if (fVar22 <= fVar23) {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (*(float *)(lVar14 + uVar13 * 4) < fVar23) {
          *puVar7 = uVar3;
          param_2[-2] = uVar18;
          uVar18 = *puVar7;
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          uVar2 = puVar21[1];
          if (uVar11 <= uVar2) goto LAB_10a939eac;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) < *(float *)(lVar14 + (ulong)uVar2 * 4)) {
            puVar21[1] = uVar18;
            *puVar7 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (fVar23 <= *(float *)(lVar14 + uVar13 * 4)) {
          puVar21[1] = uVar18;
          *puVar7 = uVar2;
          uVar18 = param_2[-2];
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          if (fVar22 <= *(float *)(lVar14 + (ulong)uVar18 * 4)) goto LAB_10a9394e8;
          *puVar7 = uVar18;
        }
        else {
          puVar21[1] = uVar3;
        }
        param_2[-2] = uVar2;
      }
LAB_10a9394e8:
      puVar15 = puVar6 + 1;
      uVar18 = *puVar15;
      if (uVar11 <= uVar18) goto LAB_10a939eac;
      uVar2 = puVar21[2];
      if (uVar11 <= uVar2) goto LAB_10a939eac;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-3];
      uVar13 = (ulong)uVar3;
      if (fVar22 <= fVar23) {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (*(float *)(lVar14 + uVar13 * 4) < fVar23) {
          *puVar15 = uVar3;
          param_2[-3] = uVar18;
          uVar18 = *puVar15;
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          uVar2 = puVar21[2];
          if (uVar11 <= uVar2) goto LAB_10a939eac;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) < *(float *)(lVar14 + (ulong)uVar2 * 4)) {
            puVar21[2] = uVar18;
            *puVar15 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        if (fVar23 <= *(float *)(lVar14 + uVar13 * 4)) {
          puVar21[2] = uVar18;
          *puVar15 = uVar2;
          uVar18 = param_2[-3];
          if (uVar11 <= uVar18) goto LAB_10a939eac;
          if (fVar22 <= *(float *)(lVar14 + (ulong)uVar18 * 4)) goto LAB_10a9395ac;
          *puVar15 = uVar18;
        }
        else {
          puVar21[2] = uVar3;
        }
        param_2[-3] = uVar2;
      }
LAB_10a9395ac:
      uVar18 = *puVar6;
      if (uVar11 <= uVar18) goto LAB_10a939eac;
      uVar2 = puVar6[-1];
      if (uVar11 <= uVar2) goto LAB_10a939eac;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = *puVar15;
      uVar13 = (ulong)uVar3;
      if (fVar22 <= fVar23) {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        fVar24 = *(float *)(lVar14 + uVar13 * 4);
        if (fVar24 < fVar23) {
          *puVar6 = uVar3;
          puVar6[1] = uVar18;
          puVar15 = puVar6;
          uVar18 = uVar3;
          uVar17 = uVar2;
          if (fVar24 < fVar22) goto LAB_10a939630;
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a939eac;
        fVar24 = *(float *)(lVar14 + uVar13 * 4);
        uVar17 = uVar18;
        if (fVar23 <= fVar24) {
          puVar6[-1] = uVar18;
          *puVar6 = uVar2;
          puVar7 = puVar6;
          uVar18 = uVar2;
          uVar17 = uVar3;
          if (fVar22 <= fVar24) goto LAB_10a939638;
        }
LAB_10a939630:
        *puVar7 = uVar3;
        *puVar15 = uVar2;
        uVar18 = uVar17;
      }
LAB_10a939638:
      uVar2 = *puVar21;
      *puVar21 = uVar18;
      *puVar6 = uVar2;
    }
LAB_10a939644:
    param_4 = param_4 + -1;
    uVar18 = *puVar21;
    uVar13 = (ulong)uVar18;
    if ((param_5 & 1) == 0) {
      if ((uVar11 <= puVar21[-1]) || (uVar11 <= uVar13)) goto LAB_10a939eac;
      fVar22 = *(float *)(lVar14 + uVar13 * 4);
      if (fVar22 <= *(float *)(lVar14 + (ulong)puVar21[-1] * 4)) {
        if (uVar11 <= param_2[-1]) goto LAB_10a939eac;
        puVar6 = puVar21 + 1;
        if (*(float *)(lVar14 + (ulong)param_2[-1] * 4) <= fVar22) {
          do {
            param_1 = puVar6;
            if (param_2 <= param_1) break;
            if (uVar11 <= *param_1) goto LAB_10a939eac;
            puVar6 = param_1 + 1;
          } while (*(float *)(lVar14 + (ulong)*param_1 * 4) <= fVar22);
        }
        else {
          do {
            param_1 = puVar6;
            if (param_1 == param_2) goto LAB_10a939eac;
            if (uVar11 <= *param_1) goto LAB_10a939eac;
            puVar6 = param_1 + 1;
          } while (*(float *)(lVar14 + (ulong)*param_1 * 4) <= fVar22);
        }
        puVar6 = param_2;
        if (param_1 < param_2) {
          do {
            if (puVar6 == puVar21) goto LAB_10a939eac;
            puVar6 = puVar6 + -1;
            if (uVar11 <= *puVar6) goto LAB_10a939eac;
          } while (fVar22 < *(float *)(lVar14 + (ulong)*puVar6 * 4));
        }
        if (param_1 < puVar6) {
          uVar13 = (ulong)*param_1;
          uVar19 = (ulong)*puVar6;
          do {
            *param_1 = (uint)uVar19;
            *puVar6 = (uint)uVar13;
            do {
              param_1 = param_1 + 1;
              if ((param_1 == param_2) || (uVar13 = (ulong)*param_1, uVar11 <= uVar13))
              goto LAB_10a939eac;
            } while (*(float *)(lVar14 + uVar13 * 4) <= fVar22);
            do {
              if (puVar6 == puVar21) goto LAB_10a939eac;
              puVar6 = puVar6 + -1;
              uVar19 = (ulong)*puVar6;
              if (uVar11 <= uVar19) goto LAB_10a939eac;
            } while (fVar22 < *(float *)(lVar14 + uVar19 * 4));
          } while (param_1 < puVar6);
        }
        puVar6 = param_1 + -1;
        if (puVar6 != puVar21) {
          *puVar21 = *puVar6;
        }
        param_5 = 0;
        *puVar6 = uVar18;
        goto LAB_10a93923c;
      }
    }
    lVar14 = 0;
    lVar16 = *param_3;
    uVar11 = param_3[1];
    do {
      puVar6 = (uint *)((long)puVar21 + lVar14 + 4);
      if (((puVar6 == param_2) || (uVar19 = (ulong)*puVar6, uVar11 <= uVar19)) || (uVar11 <= uVar13)
         ) goto LAB_10a939eac;
      fVar22 = *(float *)(lVar16 + uVar13 * 4);
      lVar14 = lVar14 + 4;
    } while (*(float *)(lVar16 + uVar19 * 4) < fVar22);
    puVar6 = (uint *)((long)puVar21 + lVar14);
    puVar7 = param_2;
    if (lVar14 == 4) {
      do {
        if (puVar7 <= puVar6) break;
        puVar7 = puVar7 + -1;
        if (uVar11 <= *puVar7) goto LAB_10a939eac;
      } while (fVar22 <= *(float *)(lVar16 + (ulong)*puVar7 * 4));
    }
    else {
      do {
        if (puVar7 == puVar21) goto LAB_10a939eac;
        puVar7 = puVar7 + -1;
        if (uVar11 <= *puVar7) goto LAB_10a939eac;
      } while (fVar22 <= *(float *)(lVar16 + (ulong)*puVar7 * 4));
    }
    param_1 = puVar6;
    if (puVar6 < puVar7) {
      uVar13 = (ulong)*puVar7;
      puVar15 = puVar7;
      do {
        *param_1 = (uint)uVar13;
        *puVar15 = (uint)uVar19;
        do {
          param_1 = param_1 + 1;
          if ((param_1 == param_2) || (uVar19 = (ulong)*param_1, uVar11 <= uVar19))
          goto LAB_10a939eac;
        } while (*(float *)(lVar16 + uVar19 * 4) < fVar22);
        do {
          if (puVar15 == puVar21) goto LAB_10a939eac;
          puVar15 = puVar15 + -1;
          uVar13 = (ulong)*puVar15;
          if (uVar11 <= uVar13) goto LAB_10a939eac;
        } while (fVar22 <= *(float *)(lVar16 + uVar13 * 4));
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar21) {
      *puVar21 = *puVar15;
    }
    *puVar15 = uVar18;
    if (puVar6 < puVar7) {
LAB_10a9397d4:
      FUN_10a93920c(puVar21,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar6 = puVar21;
      FUN_10a93a01c(puVar21,puVar15,param_3);
      puVar7 = param_1;
      FUN_10a93a01c(param_1,param_2,param_3);
      if ((int)puVar7 == 0) {
        if (((ulong)puVar6 & 1) == 0) goto LAB_10a9397d4;
      }
      else {
        param_1 = puVar21;
        param_2 = puVar15;
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
  do {
    if ((long)uVar19 <= (long)uVar12) {
      uVar10 = uVar19 << 1 | 1;
      puVar6 = puVar21 + uVar10;
      uVar9 = uVar19 * 2 + 2;
      if ((long)uVar9 < (long)uVar13) {
        if ((uVar11 <= *puVar6) || (uVar8 = (ulong)puVar6[1], uVar11 <= uVar8)) goto LAB_10a939eac;
        if (*(float *)(lVar14 + (ulong)*puVar6 * 4) < *(float *)(lVar14 + uVar8 * 4)) {
          uVar10 = uVar9;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = (ulong)*puVar6;
      if (uVar11 <= uVar9) goto LAB_10a939eac;
      uVar18 = puVar21[uVar19];
      if (uVar11 <= uVar18) goto LAB_10a939eac;
      fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      puVar7 = puVar21 + uVar19;
      if (fVar22 <= *(float *)(lVar14 + uVar9 * 4)) {
        do {
          puVar15 = puVar6;
          *puVar7 = (uint)uVar9;
          if ((long)uVar12 < (long)uVar10) break;
          uVar8 = uVar10 << 1 | 1;
          puVar6 = puVar21 + uVar8;
          uVar9 = uVar10 * 2 + 2;
          uVar10 = uVar8;
          if ((long)uVar9 < (long)uVar13) {
            if ((uVar11 <= *puVar6) || (uVar8 = (ulong)puVar6[1], uVar11 <= uVar8))
            goto LAB_10a939eac;
            if (*(float *)(lVar14 + (ulong)*puVar6 * 4) < *(float *)(lVar14 + uVar8 * 4)) {
              uVar10 = uVar9;
              puVar6 = puVar6 + 1;
            }
          }
          uVar9 = (ulong)*puVar6;
          if (uVar11 <= uVar9) goto LAB_10a939eac;
          puVar7 = puVar15;
        } while (fVar22 <= *(float *)(lVar14 + uVar9 * 4));
        *puVar15 = uVar18;
      }
    }
    bVar1 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar1);
  do {
    uVar18 = *puVar21;
    lVar14 = *param_3;
    uVar11 = param_3[1];
    puVar6 = puVar21;
    uVar19 = 0;
    do {
      puVar7 = puVar6 + uVar19 + 1;
      uVar9 = uVar19 << 1 | 1;
      uVar12 = uVar19 * 2 + 2;
      if ((long)uVar12 < (long)uVar13) {
        if (uVar11 <= *puVar7) goto LAB_10a939eac;
        uVar10 = (ulong)puVar6[uVar19 + 2];
        if (uVar11 <= uVar10) goto LAB_10a939eac;
        if (*(float *)(lVar14 + (ulong)*puVar7 * 4) < *(float *)(lVar14 + uVar10 * 4)) {
          puVar7 = puVar6 + uVar19 + 2;
          uVar9 = uVar12;
        }
      }
      *puVar6 = *puVar7;
      puVar6 = puVar7;
      uVar19 = uVar9;
    } while ((long)uVar9 <= (long)(uVar13 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar7 == param_2) {
      *puVar7 = uVar18;
    }
    else {
      *puVar7 = *param_2;
      *param_2 = uVar18;
      lVar16 = (long)puVar7 + (4 - (long)puVar21) >> 2;
      if (1 < lVar16) {
        uVar19 = lVar16 - 2U >> 1;
        uVar12 = (ulong)puVar21[uVar19];
        if (uVar11 <= uVar12) {
LAB_10a939eac:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a939eb0);
          (*pcVar5)();
        }
        uVar18 = *puVar7;
        if (uVar11 <= uVar18) goto LAB_10a939eac;
        fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
        puVar6 = puVar21 + uVar19;
        if (*(float *)(lVar14 + uVar12 * 4) < fVar22) {
          do {
            puVar15 = puVar6;
            *puVar7 = (uint)uVar12;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1 >> 1;
            uVar12 = (ulong)puVar21[uVar19];
            if (uVar11 <= uVar12) goto LAB_10a939eac;
            puVar7 = puVar15;
            puVar6 = puVar21 + uVar19;
          } while (*(float *)(lVar14 + uVar12 * 4) < fVar22);
          *puVar15 = uVar18;
        }
      }
    }
    bVar1 = (long)uVar13 < 3;
    uVar13 = uVar13 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
}



/* Entry: 10a939eb0; end: 10a93a01b;  */

void FUN_10a939eb0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  if (param_6 <= uVar5) goto LAB_10a93a018;
  uVar2 = *param_1;
  uVar6 = (ulong)uVar2;
  if (param_6 <= uVar6) goto LAB_10a93a018;
  fVar9 = *(float *)(param_5 + uVar5 * 4);
  fVar8 = *(float *)(param_5 + uVar6 * 4);
  uVar3 = *param_3;
  uVar7 = (ulong)uVar3;
  if (fVar8 <= fVar9) {
    if (param_6 <= uVar7) goto LAB_10a93a018;
    if (*(float *)(param_5 + uVar7 * 4) < fVar9) {
      *param_2 = uVar3;
      *param_3 = uVar1;
      uVar1 = *param_2;
      if (param_6 <= uVar1) goto LAB_10a93a018;
      uVar2 = *param_1;
      if (param_6 <= uVar2) goto LAB_10a93a018;
      uVar7 = uVar5;
      if (*(float *)(param_5 + (ulong)uVar1 * 4) < *(float *)(param_5 + (ulong)uVar2 * 4)) {
        *param_1 = uVar1;
        *param_2 = uVar2;
        uVar7 = (ulong)*param_3;
      }
    }
  }
  else {
    if (param_6 <= uVar7) goto LAB_10a93a018;
    if (fVar9 <= *(float *)(param_5 + uVar7 * 4)) {
      *param_1 = uVar1;
      *param_2 = uVar2;
      uVar7 = (ulong)*param_3;
      if (param_6 <= uVar7) goto LAB_10a93a018;
      if (fVar8 <= *(float *)(param_5 + uVar7 * 4)) goto LAB_10a939f84;
      *param_2 = *param_3;
    }
    else {
      *param_1 = uVar3;
    }
    *param_3 = uVar2;
    uVar7 = uVar6;
  }
LAB_10a939f84:
  uVar1 = *param_4;
  if ((uVar1 < param_6) && (uVar7 < param_6)) {
    if (*(float *)(param_5 + uVar7 * 4) <= *(float *)(param_5 + (ulong)uVar1 * 4)) {
      return;
    }
    *param_3 = uVar1;
    *param_4 = (uint)uVar7;
    uVar1 = *param_3;
    if (uVar1 < param_6) {
      uVar2 = *param_2;
      if (uVar2 < param_6) {
        if (*(float *)(param_5 + (ulong)uVar2 * 4) <= *(float *)(param_5 + (ulong)uVar1 * 4)) {
          return;
        }
        *param_2 = uVar1;
        *param_3 = uVar2;
        uVar1 = *param_2;
        if (uVar1 < param_6) {
          uVar2 = *param_1;
          if (uVar2 < param_6) {
            if (*(float *)(param_5 + (ulong)uVar2 * 4) <= *(float *)(param_5 + (ulong)uVar1 * 4)) {
              return;
            }
            *param_1 = uVar1;
            *param_2 = uVar2;
            return;
          }
        }
      }
    }
  }
LAB_10a93a018:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93a01c);
  (*pcVar4)();
}



/* Entry: 10a93a01c; end: 10a93a397;  */

bool FUN_10a93a01c(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar5 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      uVar7 = param_2[-1];
      if ((ulong)uVar7 < (ulong)param_3[1]) {
        uVar1 = *param_1;
        if ((ulong)uVar1 < (ulong)param_3[1]) {
          if (*(float *)(*param_3 + (ulong)uVar7 * 4) < *(float *)(*param_3 + (ulong)uVar1 * 4)) {
            *param_1 = uVar7;
            param_2[-1] = uVar1;
            return true;
          }
          return true;
        }
      }
      goto LAB_10a93a394;
    }
  }
  else {
    if (uVar5 == 3) {
      uVar7 = param_1[1];
      uVar5 = param_3[1];
      if (uVar7 < uVar5) {
        uVar1 = *param_1;
        if (uVar1 < uVar5) {
          lVar6 = *param_3;
          fVar17 = *(float *)(lVar6 + (ulong)uVar7 * 4);
          fVar16 = *(float *)(lVar6 + (ulong)uVar1 * 4);
          uVar2 = param_2[-1];
          uVar12 = (ulong)uVar2;
          if (fVar17 < fVar16) {
            if (uVar12 < uVar5) {
              if (fVar17 <= *(float *)(lVar6 + uVar12 * 4)) {
                *param_1 = uVar7;
                param_1[1] = uVar1;
                uVar7 = param_2[-1];
                if (uVar5 <= uVar7) goto LAB_10a93a394;
                if (fVar16 <= *(float *)(lVar6 + (ulong)uVar7 * 4)) {
                  return true;
                }
                param_1[1] = uVar7;
              }
              else {
                *param_1 = uVar2;
              }
              param_2[-1] = uVar1;
              return true;
            }
          }
          else if (uVar12 < uVar5) {
            if (fVar17 <= *(float *)(lVar6 + uVar12 * 4)) {
              return true;
            }
            param_1[1] = uVar2;
            param_2[-1] = uVar7;
            uVar7 = param_1[1];
            if ((uVar7 < uVar5) && (uVar12 = (ulong)*param_1, uVar12 < uVar5)) {
              fVar16 = *(float *)(lVar6 + (ulong)uVar7 * 4);
LAB_10a93a264:
              if (fVar16 < *(float *)(lVar6 + uVar12 * 4)) {
                *param_1 = uVar7;
                param_1[1] = (uint)uVar12;
                return true;
              }
              return true;
            }
          }
        }
      }
      goto LAB_10a93a394;
    }
    if (uVar5 == 4) {
      FUN_10a939eb0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,*param_3,param_3[1]);
      return true;
    }
    if (uVar5 == 5) {
      FUN_10a939eb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,*param_3,param_3[1]);
      uVar7 = param_2[-1];
      uVar5 = param_3[1];
      if (uVar7 < uVar5) {
        uVar1 = param_1[3];
        if (uVar1 < uVar5) {
          lVar6 = *param_3;
          if (*(float *)(lVar6 + (ulong)uVar1 * 4) <= *(float *)(lVar6 + (ulong)uVar7 * 4)) {
            return true;
          }
          param_1[3] = uVar7;
          param_2[-1] = uVar1;
          uVar7 = param_1[3];
          if (uVar7 < uVar5) {
            uVar1 = param_1[2];
            if (uVar1 < uVar5) {
              fVar16 = *(float *)(lVar6 + (ulong)uVar7 * 4);
              if (*(float *)(lVar6 + (ulong)uVar1 * 4) <= fVar16) {
                return true;
              }
              param_1[2] = uVar7;
              param_1[3] = uVar1;
              uVar1 = param_1[1];
              if (uVar1 < uVar5) {
                if (*(float *)(lVar6 + (ulong)uVar1 * 4) <= fVar16) {
                  return true;
                }
                param_1[1] = uVar7;
                param_1[2] = uVar1;
                uVar12 = (ulong)*param_1;
                if (uVar12 < uVar5) goto LAB_10a93a264;
              }
            }
          }
        }
      }
      goto LAB_10a93a394;
    }
  }
  puVar10 = param_1 + 1;
  uVar7 = *puVar10;
  uVar5 = param_3[1];
  if (uVar5 <= uVar7) {
LAB_10a93a394:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93a398);
    (*pcVar4)();
  }
  puVar9 = param_1 + 2;
  uVar1 = *param_1;
  if (uVar5 <= uVar1) goto LAB_10a93a394;
  lVar6 = *param_3;
  fVar17 = *(float *)(lVar6 + (ulong)uVar7 * 4);
  fVar16 = *(float *)(lVar6 + (ulong)uVar1 * 4);
  uVar2 = *puVar9;
  uVar12 = (ulong)uVar2;
  puVar13 = param_1;
  if (fVar16 <= fVar17) {
    if (uVar5 <= uVar12) goto LAB_10a93a394;
    fVar18 = *(float *)(lVar6 + uVar12 * 4);
    if (fVar17 <= fVar18) goto LAB_10a93a2ac;
    *puVar10 = uVar2;
    *puVar9 = uVar7;
    puVar14 = puVar10;
joined_r0x00010a93a2a0:
    if (fVar16 <= fVar18) goto LAB_10a93a2ac;
  }
  else {
    if (uVar5 <= uVar12) goto LAB_10a93a394;
    fVar18 = *(float *)(lVar6 + uVar12 * 4);
    puVar14 = puVar9;
    if (fVar17 <= fVar18) {
      *param_1 = uVar7;
      param_1[1] = uVar1;
      puVar13 = puVar10;
      goto joined_r0x00010a93a2a0;
    }
  }
  *puVar13 = uVar2;
  *puVar14 = uVar1;
LAB_10a93a2ac:
  if (param_1 + 3 != param_2) {
    iVar8 = 0;
    lVar11 = 0xc;
    puVar10 = param_1 + 3;
    do {
      puVar13 = puVar10;
      uVar7 = *puVar13;
      if ((uVar5 <= uVar7) || (uVar12 = (ulong)*puVar9, uVar5 <= uVar12)) goto LAB_10a93a394;
      fVar16 = *(float *)(lVar6 + (ulong)uVar7 * 4);
      lVar15 = lVar11;
      if (fVar16 < *(float *)(lVar6 + uVar12 * 4)) {
        do {
          *(int *)((long)param_1 + lVar15) = (int)uVar12;
          lVar3 = lVar15 + -4;
          puVar10 = param_1;
          if (lVar3 == 0) goto LAB_10a93a324;
          uVar12 = (ulong)*(uint *)((long)param_1 + lVar15 + -8);
          if (uVar5 <= uVar12) goto LAB_10a93a394;
          lVar15 = lVar3;
        } while (fVar16 < *(float *)(lVar6 + uVar12 * 4));
        puVar10 = (uint *)((long)param_1 + lVar3);
LAB_10a93a324:
        *puVar10 = uVar7;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar13 + 1 == param_2;
        }
      }
      lVar11 = lVar11 + 4;
      puVar10 = puVar13 + 1;
      puVar9 = puVar13;
    } while (puVar13 + 1 != param_2);
  }
  return true;
}



/* Entry: 10a93a398; end: 10a93b03b;  */

void FUN_10a93a398(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
LAB_10a93a3c8:
  do {
    puVar21 = param_1;
    uVar13 = (long)param_2 - (long)puVar21 >> 2;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        uVar18 = param_2[-1];
        if ((ulong)uVar18 < (ulong)param_3[1]) {
          uVar2 = *puVar21;
          if ((ulong)uVar2 < (ulong)param_3[1]) {
            if (*(float *)(*param_3 + (ulong)uVar18 * 4) <= *(float *)(*param_3 + (ulong)uVar2 * 4))
            {
              return;
            }
            *puVar21 = uVar18;
            param_2[-1] = uVar2;
            return;
          }
        }
        goto LAB_10a93b038;
      }
    }
    else {
      if (uVar13 == 3) {
        uVar18 = puVar21[1];
        uVar13 = param_3[1];
        if (uVar13 <= uVar18) goto LAB_10a93b038;
        uVar2 = *puVar21;
        if (uVar13 <= uVar2) goto LAB_10a93b038;
        lVar14 = *param_3;
        fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
        fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
        uVar3 = param_2[-1];
        uVar11 = (ulong)uVar3;
        if (fVar23 <= fVar22) {
          if (uVar11 < uVar13) {
            if (*(float *)(lVar14 + uVar11 * 4) <= fVar23) {
              return;
            }
            puVar21[1] = uVar3;
            param_2[-1] = uVar18;
            uVar18 = puVar21[1];
            if ((uVar18 < uVar13) && (uVar11 = (ulong)*puVar21, uVar11 < uVar13)) {
              fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
LAB_10a93af4c:
              if (fVar22 <= *(float *)(lVar14 + uVar11 * 4)) {
                return;
              }
              *puVar21 = uVar18;
              puVar21[1] = (uint)uVar11;
              return;
            }
          }
          goto LAB_10a93b038;
        }
        if (uVar13 <= uVar11) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar11 * 4) <= fVar23) {
          *puVar21 = uVar18;
          puVar21[1] = uVar2;
          uVar18 = param_2[-1];
          if (uVar13 <= uVar18) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= fVar22) {
            return;
          }
          puVar21[1] = uVar18;
        }
        else {
          *puVar21 = uVar3;
        }
        param_2[-1] = uVar2;
        return;
      }
      if (uVar13 == 4) {
        lVar14 = *param_3;
        uVar13 = param_3[1];
        puVar6 = puVar21 + 1;
        puVar7 = puVar21 + 2;
        uVar18 = *puVar6;
        uVar11 = (ulong)uVar18;
        if (uVar13 <= uVar11) goto LAB_10a93b1a4;
        uVar2 = *puVar21;
        uVar19 = (ulong)uVar2;
        if (uVar13 <= uVar19) goto LAB_10a93b1a4;
        fVar23 = *(float *)(lVar14 + uVar11 * 4);
        fVar22 = *(float *)(lVar14 + uVar19 * 4);
        uVar3 = *puVar7;
        uVar12 = (ulong)uVar3;
        if (fVar23 <= fVar22) {
          if (uVar13 <= uVar12) goto LAB_10a93b1a4;
          if (fVar23 < *(float *)(lVar14 + uVar12 * 4)) {
            *puVar6 = uVar3;
            *puVar7 = uVar18;
            uVar18 = *puVar6;
            if (uVar13 <= uVar18) goto LAB_10a93b1a4;
            uVar2 = *puVar21;
            if (uVar13 <= uVar2) goto LAB_10a93b1a4;
            uVar12 = uVar11;
            if (*(float *)(lVar14 + (ulong)uVar2 * 4) < *(float *)(lVar14 + (ulong)uVar18 * 4)) {
              *puVar21 = uVar18;
              *puVar6 = uVar2;
              uVar12 = (ulong)*puVar7;
            }
          }
        }
        else {
          if (uVar13 <= uVar12) goto LAB_10a93b1a4;
          if (*(float *)(lVar14 + uVar12 * 4) <= fVar23) {
            *puVar21 = uVar18;
            *puVar6 = uVar2;
            uVar12 = (ulong)*puVar7;
            if (uVar13 <= uVar12) goto LAB_10a93b1a4;
            if (*(float *)(lVar14 + uVar12 * 4) <= fVar22) goto LAB_10a93b110;
            *puVar6 = *puVar7;
          }
          else {
            *puVar21 = uVar3;
          }
          *puVar7 = uVar2;
          uVar12 = uVar19;
        }
LAB_10a93b110:
        uVar18 = param_2[-1];
        if ((uVar18 < uVar13) && (uVar12 < uVar13)) {
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= *(float *)(lVar14 + uVar12 * 4)) {
            return;
          }
          *puVar7 = uVar18;
          param_2[-1] = (uint)uVar12;
          uVar18 = *puVar7;
          if (uVar18 < uVar13) {
            uVar2 = *puVar6;
            if (uVar2 < uVar13) {
              if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= *(float *)(lVar14 + (ulong)uVar2 * 4)) {
                return;
              }
              *puVar6 = uVar18;
              *puVar7 = uVar2;
              uVar18 = *puVar6;
              if (uVar18 < uVar13) {
                uVar2 = *puVar21;
                if (uVar2 < uVar13) {
                  if (*(float *)(lVar14 + (ulong)uVar18 * 4) <=
                      *(float *)(lVar14 + (ulong)uVar2 * 4)) {
                    return;
                  }
                  *puVar21 = uVar18;
                  *puVar6 = uVar2;
                  return;
                }
              }
            }
          }
        }
LAB_10a93b1a4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a93b1a8);
        (*pcVar5)();
      }
      if (uVar13 == 5) {
        FUN_10a93b03c(puVar21,puVar21 + 1,puVar21 + 2,puVar21 + 3,*param_3,param_3[1]);
        uVar18 = param_2[-1];
        uVar13 = param_3[1];
        if (uVar18 < uVar13) {
          uVar2 = puVar21[3];
          if (uVar2 < uVar13) {
            lVar14 = *param_3;
            if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= *(float *)(lVar14 + (ulong)uVar2 * 4)) {
              return;
            }
            puVar21[3] = uVar18;
            param_2[-1] = uVar2;
            uVar18 = puVar21[3];
            if (uVar18 < uVar13) {
              uVar2 = puVar21[2];
              if (uVar2 < uVar13) {
                fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
                if (fVar22 <= *(float *)(lVar14 + (ulong)uVar2 * 4)) {
                  return;
                }
                puVar21[2] = uVar18;
                puVar21[3] = uVar2;
                uVar2 = puVar21[1];
                if (uVar2 < uVar13) {
                  if (fVar22 <= *(float *)(lVar14 + (ulong)uVar2 * 4)) {
                    return;
                  }
                  puVar21[1] = uVar18;
                  puVar21[2] = uVar2;
                  uVar11 = (ulong)*puVar21;
                  if (uVar11 < uVar13) goto LAB_10a93af4c;
                }
              }
            }
          }
        }
        goto LAB_10a93b038;
      }
    }
    if ((long)uVar13 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (puVar21 == param_2) {
          return;
        }
        puVar6 = puVar21 + 1;
        if (puVar6 == param_2) {
          return;
        }
        lVar14 = *param_3;
        uVar13 = param_3[1];
        lVar16 = 0;
        puVar7 = puVar21;
        lVar20 = 4;
        while( true ) {
          uVar18 = *puVar6;
          if ((uVar13 <= uVar18) || (uVar13 <= *puVar7)) break;
          fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
          if (*(float *)(lVar14 + (ulong)*puVar7 * 4) < fVar22) {
            uVar11 = (ulong)*(uint *)((long)puVar21 + lVar16);
            lVar16 = lVar20;
            do {
              *(undefined4 *)((long)puVar21 + lVar16) = (int)uVar11;
              if ((lVar16 == 0) ||
                 (uVar11 = (ulong)(uint)((undefined4 *)((long)puVar21 + lVar16))[-2],
                 uVar13 <= uVar11)) goto LAB_10a93b038;
              lVar16 = lVar16 + -4;
            } while (*(float *)(lVar14 + uVar11 * 4) < fVar22);
            *(uint *)((long)puVar21 + lVar16) = uVar18;
          }
          puVar7 = (uint *)((long)puVar21 + lVar20);
          puVar6 = (uint *)((long)puVar21 + lVar20 + 4);
          lVar16 = lVar20;
          lVar20 = lVar20 + 4;
          if (puVar6 == param_2) {
            return;
          }
        }
      }
      else {
        if (puVar21 == param_2) {
          return;
        }
        if (puVar21 + 1 == param_2) {
          return;
        }
        lVar16 = *param_3;
        uVar13 = param_3[1];
        lVar14 = 4;
        puVar6 = puVar21 + 1;
        puVar7 = puVar21;
        while( true ) {
          puVar15 = puVar6;
          uVar18 = puVar7[1];
          if ((uVar13 <= uVar18) || (uVar11 = (ulong)*puVar7, uVar13 <= uVar11)) break;
          fVar22 = *(float *)(lVar16 + (ulong)uVar18 * 4);
          lVar20 = lVar14;
          if (*(float *)(lVar16 + uVar11 * 4) < fVar22) {
            do {
              *(int *)((long)puVar21 + lVar20) = (int)uVar11;
              lVar4 = lVar20 + -4;
              puVar6 = puVar21;
              if (lVar4 == 0) goto LAB_10a93aca4;
              uVar11 = (ulong)*(uint *)((long)puVar21 + lVar20 + -8);
              if (uVar13 <= uVar11) goto LAB_10a93b038;
              lVar20 = lVar4;
            } while (*(float *)(lVar16 + uVar11 * 4) < fVar22);
            puVar6 = (uint *)((long)puVar21 + lVar4);
LAB_10a93aca4:
            *puVar6 = uVar18;
          }
          puVar6 = puVar15 + 1;
          lVar14 = lVar14 + 4;
          puVar7 = puVar15;
          if (puVar6 == param_2) {
            return;
          }
        }
      }
      goto LAB_10a93b038;
    }
    if (param_4 == 0) {
      if (puVar21 == param_2) {
        return;
      }
      uVar12 = uVar13 - 2 >> 1;
      lVar14 = *param_3;
      uVar11 = param_3[1];
      uVar19 = uVar12;
      break;
    }
    puVar6 = puVar21 + (uVar13 >> 1);
    uVar11 = param_3[1];
    if (uVar13 < 0x81) {
      uVar18 = *puVar21;
      if (uVar11 <= uVar18) goto LAB_10a93b038;
      uVar2 = *puVar6;
      if (uVar11 <= uVar2) goto LAB_10a93b038;
      lVar14 = *param_3;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-1];
      uVar13 = (ulong)uVar3;
      if (fVar23 <= fVar22) {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (fVar23 < *(float *)(lVar14 + uVar13 * 4)) {
          *puVar21 = uVar3;
          param_2[-1] = uVar18;
          uVar18 = *puVar21;
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          uVar2 = *puVar6;
          if (uVar11 <= uVar2) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar2 * 4) < *(float *)(lVar14 + (ulong)uVar18 * 4)) {
            *puVar6 = uVar18;
            *puVar21 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar13 * 4) <= fVar23) {
          *puVar6 = uVar18;
          *puVar21 = uVar2;
          uVar18 = param_2[-1];
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= fVar22) goto LAB_10a93a7d0;
          *puVar21 = uVar18;
        }
        else {
          *puVar6 = uVar3;
        }
        param_2[-1] = uVar2;
      }
    }
    else {
      uVar18 = *puVar6;
      if (uVar11 <= uVar18) goto LAB_10a93b038;
      uVar2 = *puVar21;
      if (uVar11 <= uVar2) goto LAB_10a93b038;
      lVar14 = *param_3;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-1];
      uVar13 = (ulong)uVar3;
      if (fVar23 <= fVar22) {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (fVar23 < *(float *)(lVar14 + uVar13 * 4)) {
          *puVar6 = uVar3;
          param_2[-1] = uVar18;
          uVar18 = *puVar6;
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          uVar2 = *puVar21;
          if (uVar11 <= uVar2) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar2 * 4) < *(float *)(lVar14 + (ulong)uVar18 * 4)) {
            *puVar21 = uVar18;
            *puVar6 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar13 * 4) <= fVar23) {
          *puVar21 = uVar18;
          *puVar6 = uVar2;
          uVar18 = param_2[-1];
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= fVar22) goto LAB_10a93a584;
          *puVar6 = uVar18;
        }
        else {
          *puVar21 = uVar3;
        }
        param_2[-1] = uVar2;
      }
LAB_10a93a584:
      puVar7 = puVar6 + -1;
      uVar18 = *puVar7;
      if (uVar11 <= uVar18) goto LAB_10a93b038;
      uVar2 = puVar21[1];
      if (uVar11 <= uVar2) goto LAB_10a93b038;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-2];
      uVar13 = (ulong)uVar3;
      if (fVar23 <= fVar22) {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (fVar23 < *(float *)(lVar14 + uVar13 * 4)) {
          *puVar7 = uVar3;
          param_2[-2] = uVar18;
          uVar18 = *puVar7;
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          uVar2 = puVar21[1];
          if (uVar11 <= uVar2) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar2 * 4) < *(float *)(lVar14 + (ulong)uVar18 * 4)) {
            puVar21[1] = uVar18;
            *puVar7 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar13 * 4) <= fVar23) {
          puVar21[1] = uVar18;
          *puVar7 = uVar2;
          uVar18 = param_2[-2];
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= fVar22) goto LAB_10a93a674;
          *puVar7 = uVar18;
        }
        else {
          puVar21[1] = uVar3;
        }
        param_2[-2] = uVar2;
      }
LAB_10a93a674:
      puVar15 = puVar6 + 1;
      uVar18 = *puVar15;
      if (uVar11 <= uVar18) goto LAB_10a93b038;
      uVar2 = puVar21[2];
      if (uVar11 <= uVar2) goto LAB_10a93b038;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = param_2[-3];
      uVar13 = (ulong)uVar3;
      if (fVar23 <= fVar22) {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (fVar23 < *(float *)(lVar14 + uVar13 * 4)) {
          *puVar15 = uVar3;
          param_2[-3] = uVar18;
          uVar18 = *puVar15;
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          uVar2 = puVar21[2];
          if (uVar11 <= uVar2) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar2 * 4) < *(float *)(lVar14 + (ulong)uVar18 * 4)) {
            puVar21[2] = uVar18;
            *puVar15 = uVar2;
          }
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar13 * 4) <= fVar23) {
          puVar21[2] = uVar18;
          *puVar15 = uVar2;
          uVar18 = param_2[-3];
          if (uVar11 <= uVar18) goto LAB_10a93b038;
          if (*(float *)(lVar14 + (ulong)uVar18 * 4) <= fVar22) goto LAB_10a93a738;
          *puVar15 = uVar18;
        }
        else {
          puVar21[2] = uVar3;
        }
        param_2[-3] = uVar2;
      }
LAB_10a93a738:
      uVar18 = *puVar6;
      if (uVar11 <= uVar18) goto LAB_10a93b038;
      uVar2 = puVar6[-1];
      if (uVar11 <= uVar2) goto LAB_10a93b038;
      fVar23 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      fVar22 = *(float *)(lVar14 + (ulong)uVar2 * 4);
      uVar3 = *puVar15;
      uVar13 = (ulong)uVar3;
      if (fVar23 <= fVar22) {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        fVar24 = *(float *)(lVar14 + uVar13 * 4);
        if (fVar23 < fVar24) {
          *puVar6 = uVar3;
          puVar6[1] = uVar18;
          puVar15 = puVar6;
          uVar18 = uVar3;
          uVar17 = uVar2;
          if (fVar22 < fVar24) goto LAB_10a93a7bc;
        }
      }
      else {
        if (uVar11 <= uVar13) goto LAB_10a93b038;
        fVar24 = *(float *)(lVar14 + uVar13 * 4);
        uVar17 = uVar18;
        if (fVar24 <= fVar23) {
          puVar6[-1] = uVar18;
          *puVar6 = uVar2;
          puVar7 = puVar6;
          uVar18 = uVar2;
          uVar17 = uVar3;
          if (fVar24 <= fVar22) goto LAB_10a93a7c4;
        }
LAB_10a93a7bc:
        *puVar7 = uVar3;
        *puVar15 = uVar2;
        uVar18 = uVar17;
      }
LAB_10a93a7c4:
      uVar2 = *puVar21;
      *puVar21 = uVar18;
      *puVar6 = uVar2;
    }
LAB_10a93a7d0:
    param_4 = param_4 + -1;
    uVar18 = *puVar21;
    uVar13 = (ulong)uVar18;
    if ((param_5 & 1) == 0) {
      if ((uVar11 <= puVar21[-1]) || (uVar11 <= uVar13)) goto LAB_10a93b038;
      fVar22 = *(float *)(lVar14 + uVar13 * 4);
      if (*(float *)(lVar14 + (ulong)puVar21[-1] * 4) <= fVar22) {
        if (uVar11 <= param_2[-1]) goto LAB_10a93b038;
        puVar6 = puVar21 + 1;
        if (fVar22 <= *(float *)(lVar14 + (ulong)param_2[-1] * 4)) {
          do {
            param_1 = puVar6;
            if (param_2 <= param_1) break;
            if (uVar11 <= *param_1) goto LAB_10a93b038;
            puVar6 = param_1 + 1;
          } while (fVar22 <= *(float *)(lVar14 + (ulong)*param_1 * 4));
        }
        else {
          do {
            param_1 = puVar6;
            if (param_1 == param_2) goto LAB_10a93b038;
            if (uVar11 <= *param_1) goto LAB_10a93b038;
            puVar6 = param_1 + 1;
          } while (fVar22 <= *(float *)(lVar14 + (ulong)*param_1 * 4));
        }
        puVar6 = param_2;
        if (param_1 < param_2) {
          do {
            if (puVar6 == puVar21) goto LAB_10a93b038;
            puVar6 = puVar6 + -1;
            if (uVar11 <= *puVar6) goto LAB_10a93b038;
          } while (*(float *)(lVar14 + (ulong)*puVar6 * 4) < fVar22);
        }
        if (param_1 < puVar6) {
          uVar13 = (ulong)*param_1;
          uVar19 = (ulong)*puVar6;
          do {
            *param_1 = (uint)uVar19;
            *puVar6 = (uint)uVar13;
            do {
              param_1 = param_1 + 1;
              if ((param_1 == param_2) || (uVar13 = (ulong)*param_1, uVar11 <= uVar13))
              goto LAB_10a93b038;
            } while (fVar22 <= *(float *)(lVar14 + uVar13 * 4));
            do {
              if (puVar6 == puVar21) goto LAB_10a93b038;
              puVar6 = puVar6 + -1;
              uVar19 = (ulong)*puVar6;
              if (uVar11 <= uVar19) goto LAB_10a93b038;
            } while (*(float *)(lVar14 + uVar19 * 4) < fVar22);
          } while (param_1 < puVar6);
        }
        puVar6 = param_1 + -1;
        if (puVar6 != puVar21) {
          *puVar21 = *puVar6;
        }
        param_5 = 0;
        *puVar6 = uVar18;
        goto LAB_10a93a3c8;
      }
    }
    lVar14 = 0;
    lVar16 = *param_3;
    uVar11 = param_3[1];
    do {
      puVar6 = (uint *)((long)puVar21 + lVar14 + 4);
      if (((puVar6 == param_2) || (uVar19 = (ulong)*puVar6, uVar11 <= uVar19)) || (uVar11 <= uVar13)
         ) goto LAB_10a93b038;
      fVar22 = *(float *)(lVar16 + uVar13 * 4);
      lVar14 = lVar14 + 4;
    } while (fVar22 < *(float *)(lVar16 + uVar19 * 4));
    puVar6 = (uint *)((long)puVar21 + lVar14);
    puVar7 = param_2;
    if (lVar14 == 4) {
      do {
        if (puVar7 <= puVar6) break;
        puVar7 = puVar7 + -1;
        if (uVar11 <= *puVar7) goto LAB_10a93b038;
      } while (*(float *)(lVar16 + (ulong)*puVar7 * 4) <= fVar22);
    }
    else {
      do {
        if (puVar7 == puVar21) goto LAB_10a93b038;
        puVar7 = puVar7 + -1;
        if (uVar11 <= *puVar7) goto LAB_10a93b038;
      } while (*(float *)(lVar16 + (ulong)*puVar7 * 4) <= fVar22);
    }
    param_1 = puVar6;
    if (puVar6 < puVar7) {
      uVar13 = (ulong)*puVar7;
      puVar15 = puVar7;
      do {
        *param_1 = (uint)uVar13;
        *puVar15 = (uint)uVar19;
        do {
          param_1 = param_1 + 1;
          if ((param_1 == param_2) || (uVar19 = (ulong)*param_1, uVar11 <= uVar19))
          goto LAB_10a93b038;
        } while (fVar22 < *(float *)(lVar16 + uVar19 * 4));
        do {
          if (puVar15 == puVar21) goto LAB_10a93b038;
          puVar15 = puVar15 + -1;
          uVar13 = (ulong)*puVar15;
          if (uVar11 <= uVar13) goto LAB_10a93b038;
        } while (*(float *)(lVar16 + uVar13 * 4) <= fVar22);
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar21) {
      *puVar21 = *puVar15;
    }
    *puVar15 = uVar18;
    if (puVar6 < puVar7) {
LAB_10a93a960:
      FUN_10a93a398(puVar21,puVar15,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      puVar6 = puVar21;
      FUN_10a93b1a8(puVar21,puVar15,param_3);
      puVar7 = param_1;
      FUN_10a93b1a8(param_1,param_2,param_3);
      if ((int)puVar7 == 0) {
        if (((ulong)puVar6 & 1) == 0) goto LAB_10a93a960;
      }
      else {
        param_1 = puVar21;
        param_2 = puVar15;
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
  do {
    if ((long)uVar19 <= (long)uVar12) {
      uVar10 = uVar19 << 1 | 1;
      puVar6 = puVar21 + uVar10;
      uVar9 = uVar19 * 2 + 2;
      if ((long)uVar9 < (long)uVar13) {
        if ((uVar11 <= *puVar6) || (uVar8 = (ulong)puVar6[1], uVar11 <= uVar8)) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar8 * 4) < *(float *)(lVar14 + (ulong)*puVar6 * 4)) {
          uVar10 = uVar9;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = (ulong)*puVar6;
      if (uVar11 <= uVar9) goto LAB_10a93b038;
      uVar18 = puVar21[uVar19];
      if (uVar11 <= uVar18) goto LAB_10a93b038;
      fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
      puVar7 = puVar21 + uVar19;
      if (*(float *)(lVar14 + uVar9 * 4) <= fVar22) {
        do {
          puVar15 = puVar6;
          *puVar7 = (uint)uVar9;
          if ((long)uVar12 < (long)uVar10) break;
          uVar8 = uVar10 << 1 | 1;
          puVar6 = puVar21 + uVar8;
          uVar9 = uVar10 * 2 + 2;
          uVar10 = uVar8;
          if ((long)uVar9 < (long)uVar13) {
            if ((uVar11 <= *puVar6) || (uVar8 = (ulong)puVar6[1], uVar11 <= uVar8))
            goto LAB_10a93b038;
            if (*(float *)(lVar14 + uVar8 * 4) < *(float *)(lVar14 + (ulong)*puVar6 * 4)) {
              uVar10 = uVar9;
              puVar6 = puVar6 + 1;
            }
          }
          uVar9 = (ulong)*puVar6;
          if (uVar11 <= uVar9) goto LAB_10a93b038;
          puVar7 = puVar15;
        } while (*(float *)(lVar14 + uVar9 * 4) <= fVar22);
        *puVar15 = uVar18;
      }
    }
    bVar1 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar1);
  do {
    uVar18 = *puVar21;
    lVar14 = *param_3;
    uVar11 = param_3[1];
    puVar6 = puVar21;
    uVar19 = 0;
    do {
      puVar7 = puVar6 + uVar19 + 1;
      uVar9 = uVar19 << 1 | 1;
      uVar12 = uVar19 * 2 + 2;
      if ((long)uVar12 < (long)uVar13) {
        if (uVar11 <= *puVar7) goto LAB_10a93b038;
        uVar10 = (ulong)puVar6[uVar19 + 2];
        if (uVar11 <= uVar10) goto LAB_10a93b038;
        if (*(float *)(lVar14 + uVar10 * 4) < *(float *)(lVar14 + (ulong)*puVar7 * 4)) {
          puVar7 = puVar6 + uVar19 + 2;
          uVar9 = uVar12;
        }
      }
      *puVar6 = *puVar7;
      puVar6 = puVar7;
      uVar19 = uVar9;
    } while ((long)uVar9 <= (long)(uVar13 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar7 == param_2) {
      *puVar7 = uVar18;
    }
    else {
      *puVar7 = *param_2;
      *param_2 = uVar18;
      lVar16 = (long)puVar7 + (4 - (long)puVar21) >> 2;
      if (1 < lVar16) {
        uVar19 = lVar16 - 2U >> 1;
        uVar12 = (ulong)puVar21[uVar19];
        if (uVar11 <= uVar12) {
LAB_10a93b038:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a93b03c);
          (*pcVar5)();
        }
        uVar18 = *puVar7;
        if (uVar11 <= uVar18) goto LAB_10a93b038;
        fVar22 = *(float *)(lVar14 + (ulong)uVar18 * 4);
        puVar6 = puVar21 + uVar19;
        if (fVar22 < *(float *)(lVar14 + uVar12 * 4)) {
          do {
            puVar15 = puVar6;
            *puVar7 = (uint)uVar12;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1 >> 1;
            uVar12 = (ulong)puVar21[uVar19];
            if (uVar11 <= uVar12) goto LAB_10a93b038;
            puVar7 = puVar15;
            puVar6 = puVar21 + uVar19;
          } while (fVar22 < *(float *)(lVar14 + uVar12 * 4));
          *puVar15 = uVar18;
        }
      }
    }
    bVar1 = (long)uVar13 < 3;
    uVar13 = uVar13 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
}



/* Entry: 10a93b03c; end: 10a93b1a7;  */

void FUN_10a93b03c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  if (param_6 <= uVar5) goto LAB_10a93b1a4;
  uVar2 = *param_1;
  uVar6 = (ulong)uVar2;
  if (param_6 <= uVar6) goto LAB_10a93b1a4;
  fVar9 = *(float *)(param_5 + uVar5 * 4);
  fVar8 = *(float *)(param_5 + uVar6 * 4);
  uVar3 = *param_3;
  uVar7 = (ulong)uVar3;
  if (fVar9 <= fVar8) {
    if (param_6 <= uVar7) goto LAB_10a93b1a4;
    if (fVar9 < *(float *)(param_5 + uVar7 * 4)) {
      *param_2 = uVar3;
      *param_3 = uVar1;
      uVar1 = *param_2;
      if (param_6 <= uVar1) goto LAB_10a93b1a4;
      uVar2 = *param_1;
      if (param_6 <= uVar2) goto LAB_10a93b1a4;
      uVar7 = uVar5;
      if (*(float *)(param_5 + (ulong)uVar2 * 4) < *(float *)(param_5 + (ulong)uVar1 * 4)) {
        *param_1 = uVar1;
        *param_2 = uVar2;
        uVar7 = (ulong)*param_3;
      }
    }
  }
  else {
    if (param_6 <= uVar7) goto LAB_10a93b1a4;
    if (*(float *)(param_5 + uVar7 * 4) <= fVar9) {
      *param_1 = uVar1;
      *param_2 = uVar2;
      uVar7 = (ulong)*param_3;
      if (param_6 <= uVar7) goto LAB_10a93b1a4;
      if (*(float *)(param_5 + uVar7 * 4) <= fVar8) goto LAB_10a93b110;
      *param_2 = *param_3;
    }
    else {
      *param_1 = uVar3;
    }
    *param_3 = uVar2;
    uVar7 = uVar6;
  }
LAB_10a93b110:
  uVar1 = *param_4;
  if ((uVar1 < param_6) && (uVar7 < param_6)) {
    if (*(float *)(param_5 + (ulong)uVar1 * 4) <= *(float *)(param_5 + uVar7 * 4)) {
      return;
    }
    *param_3 = uVar1;
    *param_4 = (uint)uVar7;
    uVar1 = *param_3;
    if (uVar1 < param_6) {
      uVar2 = *param_2;
      if (uVar2 < param_6) {
        if (*(float *)(param_5 + (ulong)uVar1 * 4) <= *(float *)(param_5 + (ulong)uVar2 * 4)) {
          return;
        }
        *param_2 = uVar1;
        *param_3 = uVar2;
        uVar1 = *param_2;
        if (uVar1 < param_6) {
          uVar2 = *param_1;
          if (uVar2 < param_6) {
            if (*(float *)(param_5 + (ulong)uVar1 * 4) <= *(float *)(param_5 + (ulong)uVar2 * 4)) {
              return;
            }
            *param_1 = uVar1;
            *param_2 = uVar2;
            return;
          }
        }
      }
    }
  }
LAB_10a93b1a4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93b1a8);
  (*pcVar4)();
}



/* Entry: 10a93b1a8; end: 10a93b523;  */

bool FUN_10a93b1a8(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar5 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      uVar7 = param_2[-1];
      if ((ulong)uVar7 < (ulong)param_3[1]) {
        uVar1 = *param_1;
        if ((ulong)uVar1 < (ulong)param_3[1]) {
          if (*(float *)(*param_3 + (ulong)uVar1 * 4) < *(float *)(*param_3 + (ulong)uVar7 * 4)) {
            *param_1 = uVar7;
            param_2[-1] = uVar1;
            return true;
          }
          return true;
        }
      }
      goto LAB_10a93b520;
    }
  }
  else {
    if (uVar5 == 3) {
      uVar7 = param_1[1];
      uVar5 = param_3[1];
      if (uVar7 < uVar5) {
        uVar1 = *param_1;
        if (uVar1 < uVar5) {
          lVar6 = *param_3;
          fVar17 = *(float *)(lVar6 + (ulong)uVar7 * 4);
          fVar16 = *(float *)(lVar6 + (ulong)uVar1 * 4);
          uVar2 = param_2[-1];
          uVar12 = (ulong)uVar2;
          if (fVar16 < fVar17) {
            if (uVar12 < uVar5) {
              if (*(float *)(lVar6 + uVar12 * 4) <= fVar17) {
                *param_1 = uVar7;
                param_1[1] = uVar1;
                uVar7 = param_2[-1];
                if (uVar5 <= uVar7) goto LAB_10a93b520;
                if (*(float *)(lVar6 + (ulong)uVar7 * 4) <= fVar16) {
                  return true;
                }
                param_1[1] = uVar7;
              }
              else {
                *param_1 = uVar2;
              }
              param_2[-1] = uVar1;
              return true;
            }
          }
          else if (uVar12 < uVar5) {
            if (*(float *)(lVar6 + uVar12 * 4) <= fVar17) {
              return true;
            }
            param_1[1] = uVar2;
            param_2[-1] = uVar7;
            uVar7 = param_1[1];
            if ((uVar7 < uVar5) && (uVar12 = (ulong)*param_1, uVar12 < uVar5)) {
              fVar16 = *(float *)(lVar6 + (ulong)uVar7 * 4);
LAB_10a93b3f0:
              if (*(float *)(lVar6 + uVar12 * 4) < fVar16) {
                *param_1 = uVar7;
                param_1[1] = (uint)uVar12;
                return true;
              }
              return true;
            }
          }
        }
      }
      goto LAB_10a93b520;
    }
    if (uVar5 == 4) {
      FUN_10a93b03c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,*param_3,param_3[1]);
      return true;
    }
    if (uVar5 == 5) {
      FUN_10a93b03c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,*param_3,param_3[1]);
      uVar7 = param_2[-1];
      uVar5 = param_3[1];
      if (uVar7 < uVar5) {
        uVar1 = param_1[3];
        if (uVar1 < uVar5) {
          lVar6 = *param_3;
          if (*(float *)(lVar6 + (ulong)uVar7 * 4) <= *(float *)(lVar6 + (ulong)uVar1 * 4)) {
            return true;
          }
          param_1[3] = uVar7;
          param_2[-1] = uVar1;
          uVar7 = param_1[3];
          if (uVar7 < uVar5) {
            uVar1 = param_1[2];
            if (uVar1 < uVar5) {
              fVar16 = *(float *)(lVar6 + (ulong)uVar7 * 4);
              if (fVar16 <= *(float *)(lVar6 + (ulong)uVar1 * 4)) {
                return true;
              }
              param_1[2] = uVar7;
              param_1[3] = uVar1;
              uVar1 = param_1[1];
              if (uVar1 < uVar5) {
                if (fVar16 <= *(float *)(lVar6 + (ulong)uVar1 * 4)) {
                  return true;
                }
                param_1[1] = uVar7;
                param_1[2] = uVar1;
                uVar12 = (ulong)*param_1;
                if (uVar12 < uVar5) goto LAB_10a93b3f0;
              }
            }
          }
        }
      }
      goto LAB_10a93b520;
    }
  }
  puVar10 = param_1 + 1;
  uVar7 = *puVar10;
  uVar5 = param_3[1];
  if (uVar5 <= uVar7) {
LAB_10a93b520:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93b524);
    (*pcVar4)();
  }
  puVar9 = param_1 + 2;
  uVar1 = *param_1;
  if (uVar5 <= uVar1) goto LAB_10a93b520;
  lVar6 = *param_3;
  fVar17 = *(float *)(lVar6 + (ulong)uVar7 * 4);
  fVar16 = *(float *)(lVar6 + (ulong)uVar1 * 4);
  uVar2 = *puVar9;
  uVar12 = (ulong)uVar2;
  puVar13 = param_1;
  if (fVar17 <= fVar16) {
    if (uVar5 <= uVar12) goto LAB_10a93b520;
    fVar18 = *(float *)(lVar6 + uVar12 * 4);
    if (fVar18 <= fVar17) goto LAB_10a93b438;
    *puVar10 = uVar2;
    *puVar9 = uVar7;
    puVar14 = puVar10;
joined_r0x00010a93b42c:
    if (fVar18 <= fVar16) goto LAB_10a93b438;
  }
  else {
    if (uVar5 <= uVar12) goto LAB_10a93b520;
    fVar18 = *(float *)(lVar6 + uVar12 * 4);
    puVar14 = puVar9;
    if (fVar18 <= fVar17) {
      *param_1 = uVar7;
      param_1[1] = uVar1;
      puVar13 = puVar10;
      goto joined_r0x00010a93b42c;
    }
  }
  *puVar13 = uVar2;
  *puVar14 = uVar1;
LAB_10a93b438:
  if (param_1 + 3 != param_2) {
    iVar8 = 0;
    lVar11 = 0xc;
    puVar10 = param_1 + 3;
    do {
      puVar13 = puVar10;
      uVar7 = *puVar13;
      if ((uVar5 <= uVar7) || (uVar12 = (ulong)*puVar9, uVar5 <= uVar12)) goto LAB_10a93b520;
      fVar16 = *(float *)(lVar6 + (ulong)uVar7 * 4);
      lVar15 = lVar11;
      if (*(float *)(lVar6 + uVar12 * 4) < fVar16) {
        do {
          *(int *)((long)param_1 + lVar15) = (int)uVar12;
          lVar3 = lVar15 + -4;
          puVar10 = param_1;
          if (lVar3 == 0) goto LAB_10a93b4b0;
          uVar12 = (ulong)*(uint *)((long)param_1 + lVar15 + -8);
          if (uVar5 <= uVar12) goto LAB_10a93b520;
          lVar15 = lVar3;
        } while (*(float *)(lVar6 + uVar12 * 4) < fVar16);
        puVar10 = (uint *)((long)param_1 + lVar3);
LAB_10a93b4b0:
        *puVar10 = uVar7;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar13 + 1 == param_2;
        }
      }
      lVar11 = lVar11 + 4;
      puVar10 = puVar13 + 1;
      puVar9 = puVar13;
    } while (puVar13 + 1 != param_2);
  }
  return true;
}



/* Entry: 10a93b524; end: 10a93bfb3;  */

void FUN_10a93b524(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
LAB_10a93b554:
  do {
    puVar22 = param_1;
    uVar12 = (long)param_2 - (long)puVar22 >> 2;
    if (uVar12 - 2 != 0 && 1 < (long)uVar12) {
      if (uVar12 == 3) {
        uVar18 = *puVar22;
        uVar3 = puVar22[1];
        lVar10 = *(long *)(*param_3 + 8);
        fVar24 = *(float *)(lVar10 + (ulong)uVar3 * 4);
        fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4);
        uVar4 = param_2[-1];
        fVar25 = *(float *)(lVar10 + (ulong)uVar4 * 4);
        if (fVar24 <= fVar23) {
          if (fVar25 <= fVar24) {
            return;
          }
          puVar22[1] = uVar4;
          param_2[-1] = uVar3;
          uVar18 = *puVar22;
          if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)puVar22[1] * 4)) {
            *puVar22 = puVar22[1];
            puVar22[1] = uVar18;
            return;
          }
          return;
        }
        if (fVar25 <= fVar24) {
          *puVar22 = uVar3;
          puVar22[1] = uVar18;
          if (*(float *)(lVar10 + (ulong)param_2[-1] * 4) <= fVar23) {
            return;
          }
          puVar22[1] = param_2[-1];
        }
        else {
          *puVar22 = uVar4;
        }
        goto LAB_10a93bf18;
      }
      if (uVar12 != 4) {
        if (uVar12 == 5) {
          lVar10 = *(long *)(*param_3 + 8);
          puVar7 = puVar22 + 1;
          puVar8 = puVar22 + 2;
          puVar16 = puVar22 + 3;
          uVar18 = *puVar7;
          uVar3 = *puVar22;
          fVar24 = *(float *)(lVar10 + (ulong)uVar18 * 4);
          fVar23 = *(float *)(lVar10 + (ulong)uVar3 * 4);
          uVar4 = *puVar8;
          fVar25 = *(float *)(lVar10 + (ulong)uVar4 * 4);
          if (fVar24 <= fVar23) {
            uVar12 = (ulong)uVar4;
            if (fVar24 < fVar25) {
              *puVar7 = uVar4;
              *puVar8 = uVar18;
              uVar3 = *puVar22;
              uVar12 = (ulong)uVar18;
              if (*(float *)(lVar10 + (ulong)uVar3 * 4) < *(float *)(lVar10 + (ulong)*puVar7 * 4)) {
                *puVar22 = *puVar7;
                *puVar7 = uVar3;
                uVar12 = (ulong)*puVar8;
              }
            }
          }
          else {
            if (fVar25 <= fVar24) {
              *puVar22 = uVar18;
              *puVar7 = uVar3;
              uVar18 = *puVar8;
              uVar12 = (ulong)uVar18;
              if (*(float *)(lVar10 + (ulong)uVar18 * 4) <= fVar23) goto LAB_10a93c05c;
              *puVar7 = uVar18;
            }
            else {
              *puVar22 = uVar4;
            }
            *puVar8 = uVar3;
            uVar12 = (ulong)uVar3;
          }
LAB_10a93c05c:
          if (*(float *)(lVar10 + uVar12 * 4) < *(float *)(lVar10 + (ulong)*puVar16 * 4)) {
            *puVar8 = *puVar16;
            *puVar16 = (uint)uVar12;
            uVar18 = *puVar7;
            if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar8 * 4)) {
              *puVar7 = *puVar8;
              *puVar8 = uVar18;
              uVar18 = *puVar22;
              if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar7 * 4))
              {
                *puVar22 = *puVar7;
                *puVar7 = uVar18;
              }
            }
          }
          uVar18 = param_2[-1];
          uVar3 = *puVar16;
          if (*(float *)(lVar10 + (ulong)uVar3 * 4) < *(float *)(lVar10 + (ulong)uVar18 * 4)) {
            *puVar16 = uVar18;
            param_2[-1] = uVar3;
            uVar18 = *puVar8;
            if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar16 * 4)) {
              *puVar8 = *puVar16;
              *puVar16 = uVar18;
              uVar18 = *puVar7;
              if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar8 * 4))
              {
                *puVar7 = *puVar8;
                *puVar8 = uVar18;
                uVar18 = *puVar22;
                if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar7 * 4)
                   ) {
                  *puVar22 = *puVar7;
                  *puVar7 = uVar18;
                }
              }
            }
          }
          return;
        }
        goto LAB_10a93b590;
      }
      puVar8 = puVar22 + 1;
      uVar3 = *puVar8;
      uVar11 = (ulong)uVar3;
      puVar16 = puVar22 + 2;
      uVar4 = *puVar16;
      uVar12 = (ulong)uVar4;
      uVar18 = *puVar22;
      uVar20 = (ulong)uVar18;
      lVar10 = *(long *)(*param_3 + 8);
      fVar25 = *(float *)(lVar10 + uVar11 * 4);
      fVar23 = *(float *)(lVar10 + uVar20 * 4);
      fVar24 = *(float *)(lVar10 + uVar12 * 4);
      puVar7 = puVar22;
      if (fVar25 <= fVar23) {
        uVar15 = uVar4;
        if (fVar24 <= fVar25) goto LAB_10a93bf50;
        *puVar8 = uVar4;
        *puVar16 = uVar3;
        puVar21 = puVar8;
        uVar14 = uVar3;
        uVar12 = uVar11;
        uVar20 = uVar11;
joined_r0x00010a93be78:
        uVar15 = uVar3;
        if (fVar24 <= fVar23) goto LAB_10a93bf50;
      }
      else {
        puVar21 = puVar16;
        uVar14 = uVar18;
        if (fVar24 <= fVar25) {
          *puVar22 = uVar3;
          puVar22[1] = uVar18;
          uVar3 = uVar4;
          puVar7 = puVar8;
          goto joined_r0x00010a93be78;
        }
      }
      *puVar7 = uVar4;
      *puVar21 = uVar18;
      uVar12 = uVar20;
      uVar15 = uVar14;
LAB_10a93bf50:
      if (*(float *)(lVar10 + (ulong)param_2[-1] * 4) <= *(float *)(lVar10 + uVar12 * 4)) {
        return;
      }
      *puVar16 = param_2[-1];
      param_2[-1] = uVar15;
      uVar18 = *puVar16;
      uVar3 = *puVar8;
      fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4);
      if (*(float *)(lVar10 + (ulong)uVar3 * 4) < fVar23) {
        puVar22[1] = uVar18;
        puVar22[2] = uVar3;
        uVar3 = *puVar22;
        if (*(float *)(lVar10 + (ulong)uVar3 * 4) < fVar23) {
          *puVar22 = uVar18;
          puVar22[1] = uVar3;
          return;
        }
        return;
      }
      return;
    }
    if (uVar12 < 2) {
      return;
    }
    if (uVar12 == 2) {
      uVar18 = *puVar22;
      if (*(float *)(*(long *)(*param_3 + 8) + (ulong)param_2[-1] * 4) <=
          *(float *)(*(long *)(*param_3 + 8) + (ulong)uVar18 * 4)) {
        return;
      }
      *puVar22 = param_2[-1];
LAB_10a93bf18:
      param_2[-1] = uVar18;
      return;
    }
LAB_10a93b590:
    if ((long)uVar12 < 0x18) {
      if ((param_5 & 1) != 0) {
        if (puVar22 == param_2) {
          return;
        }
        if (puVar22 + 1 == param_2) {
          return;
        }
        lVar17 = *(long *)(*param_3 + 8);
        lVar10 = 4;
        puVar7 = puVar22;
        puVar8 = puVar22 + 1;
        do {
          uVar12 = (ulong)*puVar7;
          uVar18 = puVar7[1];
          fVar23 = *(float *)(lVar17 + (ulong)uVar18 * 4);
          lVar13 = lVar10;
          if (*(float *)(lVar17 + uVar12 * 4) < fVar23) {
            do {
              *(int *)((long)puVar22 + lVar13) = (int)uVar12;
              lVar5 = lVar13 + -4;
              puVar7 = puVar22;
              if (lVar5 == 0) goto LAB_10a93bc08;
              uVar12 = (ulong)*(uint *)((long)puVar22 + lVar13 + -8);
              lVar13 = lVar5;
            } while (*(float *)(lVar17 + uVar12 * 4) < fVar23);
            puVar7 = (uint *)((long)puVar22 + lVar5);
LAB_10a93bc08:
            *puVar7 = uVar18;
          }
          puVar16 = puVar8 + 1;
          lVar10 = lVar10 + 4;
          puVar7 = puVar8;
          puVar8 = puVar16;
          if (puVar16 == param_2) {
            return;
          }
        } while( true );
      }
      if (puVar22 == param_2) {
        return;
      }
      puVar7 = puVar22 + 1;
      if (puVar7 == param_2) {
        return;
      }
      lVar13 = *(long *)(*param_3 + 8);
      lVar10 = 0;
      lVar17 = 4;
      do {
        uVar12 = (ulong)*(uint *)((long)puVar22 + lVar10);
        uVar18 = *puVar7;
        fVar23 = *(float *)(lVar13 + (ulong)uVar18 * 4);
        if (*(float *)(lVar13 + uVar12 * 4) < fVar23) {
          lVar10 = 0;
          do {
            *(undefined4 *)((long)puVar7 + lVar10) = (int)uVar12;
            if (lVar17 + lVar10 == 0) goto LAB_10a93befc;
            uVar12 = (ulong)(uint)((undefined4 *)((long)puVar7 + lVar10))[-2];
            lVar10 = lVar10 + -4;
          } while (*(float *)(lVar13 + uVar12 * 4) < fVar23);
          *(uint *)((long)puVar7 + lVar10) = uVar18;
        }
        puVar7 = puVar7 + 1;
        lVar10 = lVar17;
        lVar17 = lVar17 + 4;
        if (puVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar22 == param_2) {
        return;
      }
      uVar11 = uVar12 - 2 >> 1;
      lVar10 = *param_3;
      uVar20 = uVar11;
      do {
        if ((long)uVar20 <= (long)uVar11) {
          uVar19 = uVar20 << 1 | 1;
          puVar7 = puVar22 + uVar19;
          uVar9 = uVar20 * 2 + 2;
          if ((long)uVar9 < (long)uVar12) {
            lVar17 = *(long *)(lVar10 + 8);
            if (*(float *)(lVar17 + (ulong)puVar7[1] * 4) < *(float *)(lVar17 + (ulong)*puVar7 * 4))
            {
              uVar19 = uVar9;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            lVar17 = *(long *)(lVar10 + 8);
          }
          uVar9 = (ulong)*puVar7;
          uVar18 = puVar22[uVar20];
          fVar23 = *(float *)(lVar17 + (ulong)uVar18 * 4);
          puVar8 = puVar22 + uVar20;
          if (*(float *)(lVar17 + uVar9 * 4) <= fVar23) {
            do {
              puVar16 = puVar7;
              *puVar8 = (uint)uVar9;
              if ((long)uVar11 < (long)uVar19) break;
              uVar1 = uVar19 << 1 | 1;
              puVar7 = puVar22 + uVar1;
              uVar9 = uVar19 * 2 + 2;
              uVar19 = uVar1;
              if (((long)uVar9 < (long)uVar12) &&
                 (*(float *)(lVar17 + (ulong)puVar7[1] * 4) <
                  *(float *)(lVar17 + (ulong)*puVar7 * 4))) {
                uVar19 = uVar9;
                puVar7 = puVar7 + 1;
              }
              uVar9 = (ulong)*puVar7;
              puVar8 = puVar16;
            } while (*(float *)(lVar17 + uVar9 * 4) <= fVar23);
            *puVar16 = uVar18;
          }
        }
        bVar2 = uVar20 != 0;
        uVar20 = uVar20 - 1;
      } while (bVar2);
      do {
        uVar18 = *puVar22;
        lVar10 = *param_3;
        puVar7 = puVar22;
        uVar20 = 0;
        do {
          uVar9 = uVar20 << 1 | 1;
          uVar11 = uVar20 * 2 + 2;
          puVar8 = puVar7 + uVar20 + 1;
          if (((long)uVar11 < (long)uVar12) &&
             (lVar17 = *(long *)(lVar10 + 8),
             *(float *)(lVar17 + (ulong)puVar7[uVar20 + 2] * 4) <
             *(float *)(lVar17 + (ulong)puVar7[uVar20 + 1] * 4))) {
            puVar8 = puVar7 + uVar20 + 2;
            uVar9 = uVar11;
          }
          *puVar7 = *puVar8;
          puVar7 = puVar8;
          uVar20 = uVar9;
        } while ((long)uVar9 <= (long)(uVar12 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar8 == param_2) {
          *puVar8 = uVar18;
        }
        else {
          *puVar8 = *param_2;
          *param_2 = uVar18;
          lVar17 = (long)puVar8 + (4 - (long)puVar22) >> 2;
          if (1 < lVar17) {
            uVar20 = lVar17 - 2U >> 1;
            uVar11 = (ulong)puVar22[uVar20];
            uVar18 = *puVar8;
            lVar10 = *(long *)(lVar10 + 8);
            fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4);
            puVar7 = puVar22 + uVar20;
            if (fVar23 < *(float *)(lVar10 + uVar11 * 4)) {
              do {
                puVar16 = puVar7;
                *puVar8 = (uint)uVar11;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1 >> 1;
                uVar11 = (ulong)puVar22[uVar20];
                puVar8 = puVar16;
                puVar7 = puVar22 + uVar20;
              } while (fVar23 < *(float *)(lVar10 + uVar11 * 4));
              *puVar16 = uVar18;
            }
          }
        }
        bVar2 = (long)uVar12 < 3;
        uVar12 = uVar12 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar7 = puVar22 + (uVar12 >> 1);
    lVar10 = *(long *)(*param_3 + 8);
    uVar18 = param_2[-1];
    fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4);
    if (uVar12 < 0x81) {
      uVar3 = *puVar22;
      uVar4 = *puVar7;
      fVar25 = *(float *)(lVar10 + (ulong)uVar3 * 4);
      fVar24 = *(float *)(lVar10 + (ulong)uVar4 * 4);
      if (fVar25 <= fVar24) {
        if (fVar25 < fVar23) {
          *puVar22 = uVar18;
          param_2[-1] = uVar3;
          uVar18 = *puVar7;
          if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar22 * 4)) {
            *puVar7 = *puVar22;
            *puVar22 = uVar18;
          }
        }
      }
      else {
        if (fVar23 <= fVar25) {
          *puVar7 = uVar3;
          *puVar22 = uVar4;
          if (*(float *)(lVar10 + (ulong)param_2[-1] * 4) <= fVar24) goto LAB_10a93b838;
          *puVar22 = param_2[-1];
        }
        else {
          *puVar7 = uVar18;
        }
        param_2[-1] = uVar4;
      }
    }
    else {
      uVar3 = *puVar7;
      uVar4 = *puVar22;
      fVar25 = *(float *)(lVar10 + (ulong)uVar3 * 4);
      fVar24 = *(float *)(lVar10 + (ulong)uVar4 * 4);
      if (fVar25 <= fVar24) {
        if (fVar25 < fVar23) {
          *puVar7 = uVar18;
          param_2[-1] = uVar3;
          uVar18 = *puVar22;
          if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar7 * 4)) {
            *puVar22 = *puVar7;
            *puVar7 = uVar18;
          }
        }
      }
      else {
        if (fVar23 <= fVar25) {
          *puVar22 = uVar3;
          *puVar7 = uVar4;
          if (*(float *)(lVar10 + (ulong)param_2[-1] * 4) <= fVar24) goto LAB_10a93b694;
          *puVar7 = param_2[-1];
        }
        else {
          *puVar22 = uVar18;
        }
        param_2[-1] = uVar4;
      }
LAB_10a93b694:
      puVar8 = puVar7 + -1;
      uVar4 = *puVar8;
      uVar18 = puVar22[1];
      fVar24 = *(float *)(lVar10 + (ulong)uVar4 * 4);
      fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4);
      uVar3 = param_2[-2];
      fVar25 = *(float *)(lVar10 + (ulong)uVar3 * 4);
      if (fVar24 <= fVar23) {
        if (fVar24 < fVar25) {
          *puVar8 = uVar3;
          param_2[-2] = uVar4;
          uVar18 = puVar22[1];
          if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar8 * 4)) {
            puVar22[1] = *puVar8;
            *puVar8 = uVar18;
          }
        }
      }
      else {
        if (fVar25 <= fVar24) {
          puVar22[1] = uVar4;
          *puVar8 = uVar18;
          if (*(float *)(lVar10 + (ulong)param_2[-2] * 4) <= fVar23) goto LAB_10a93b740;
          *puVar8 = param_2[-2];
        }
        else {
          puVar22[1] = uVar3;
        }
        param_2[-2] = uVar18;
      }
LAB_10a93b740:
      puVar16 = puVar7 + 1;
      uVar4 = *puVar16;
      uVar18 = puVar22[2];
      fVar24 = *(float *)(lVar10 + (ulong)uVar4 * 4);
      fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4);
      uVar3 = param_2[-3];
      fVar25 = *(float *)(lVar10 + (ulong)uVar3 * 4);
      if (fVar24 <= fVar23) {
        if (fVar24 < fVar25) {
          *puVar16 = uVar3;
          param_2[-3] = uVar4;
          uVar18 = puVar22[2];
          if (*(float *)(lVar10 + (ulong)uVar18 * 4) < *(float *)(lVar10 + (ulong)*puVar16 * 4)) {
            puVar22[2] = *puVar16;
            *puVar16 = uVar18;
          }
        }
      }
      else {
        if (fVar25 <= fVar24) {
          puVar22[2] = uVar4;
          *puVar16 = uVar18;
          if (*(float *)(lVar10 + (ulong)param_2[-3] * 4) <= fVar23) goto LAB_10a93b7c8;
          *puVar16 = param_2[-3];
        }
        else {
          puVar22[2] = uVar3;
        }
        param_2[-3] = uVar18;
      }
LAB_10a93b7c8:
      uVar18 = *puVar7;
      uVar3 = puVar7[1];
      fVar25 = *(float *)(lVar10 + (ulong)uVar18 * 4);
      uVar4 = puVar7[-1];
      fVar23 = *(float *)(lVar10 + (ulong)uVar4 * 4);
      fVar24 = *(float *)(lVar10 + (ulong)uVar3 * 4);
      if (fVar25 <= fVar23) {
        if (fVar25 < fVar24) {
          *puVar7 = uVar3;
          puVar7[1] = uVar18;
          puVar16 = puVar7;
          uVar18 = uVar3;
          uVar15 = uVar4;
          if (fVar23 < fVar24) goto LAB_10a93b824;
        }
      }
      else {
        uVar15 = uVar18;
        if (fVar24 <= fVar25) {
          puVar7[-1] = uVar18;
          *puVar7 = uVar4;
          puVar8 = puVar7;
          uVar18 = uVar4;
          uVar15 = uVar3;
          if (fVar24 <= fVar23) goto LAB_10a93b82c;
        }
LAB_10a93b824:
        *puVar8 = uVar3;
        *puVar16 = uVar4;
        uVar18 = uVar15;
      }
LAB_10a93b82c:
      uVar3 = *puVar22;
      *puVar22 = uVar18;
      *puVar7 = uVar3;
    }
LAB_10a93b838:
    param_4 = param_4 + -1;
    uVar18 = *puVar22;
    if (((param_5 & 1) != 0) ||
       (fVar23 = *(float *)(lVar10 + (ulong)uVar18 * 4),
       fVar23 < *(float *)(lVar10 + (ulong)puVar22[-1] * 4))) {
      lVar10 = 0;
      do {
        puVar7 = (uint *)((long)puVar22 + lVar10 + 4);
        if (puVar7 == param_2) goto LAB_10a93befc;
        uVar12 = (ulong)*puVar7;
        lVar17 = *(long *)(*param_3 + 8);
        fVar23 = *(float *)(lVar17 + (ulong)uVar18 * 4);
        lVar10 = lVar10 + 4;
      } while (fVar23 < *(float *)(lVar17 + uVar12 * 4));
      puVar7 = (uint *)((long)puVar22 + lVar10);
      puVar8 = param_2;
      if (lVar10 == 4) {
        do {
          if (puVar8 <= puVar7) break;
          puVar8 = puVar8 + -1;
        } while (*(float *)(lVar17 + (ulong)*puVar8 * 4) <= fVar23);
      }
      else {
        do {
          if (puVar8 == puVar22) {
LAB_10a93befc:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a93bf00);
            (*pcVar6)();
          }
          puVar8 = puVar8 + -1;
        } while (*(float *)(lVar17 + (ulong)*puVar8 * 4) <= fVar23);
      }
      param_1 = puVar7;
      if (puVar7 < puVar8) {
        uVar20 = (ulong)*puVar8;
        puVar16 = puVar8;
        do {
          *param_1 = (uint)uVar20;
          *puVar16 = (uint)uVar12;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a93befc;
            uVar12 = (ulong)*param_1;
          } while (fVar23 < *(float *)(lVar17 + uVar12 * 4));
          do {
            if (puVar16 == puVar22) goto LAB_10a93befc;
            puVar16 = puVar16 + -1;
            uVar20 = (ulong)*puVar16;
          } while (*(float *)(lVar17 + uVar20 * 4) <= fVar23);
        } while (param_1 < puVar16);
      }
      puVar16 = param_1 + -1;
      if (puVar16 != puVar22) {
        *puVar22 = *puVar16;
      }
      *puVar16 = uVar18;
      if (puVar7 < puVar8) {
LAB_10a93b98c:
        FUN_10a93b524(puVar22,puVar16,param_3,param_4,param_5 & 1);
        param_5 = 0;
      }
      else {
        puVar7 = puVar22;
        FUN_10a93c13c(puVar22,puVar16,*param_3);
        puVar8 = param_1;
        FUN_10a93c13c(param_1,param_2,*param_3);
        if ((int)puVar8 == 0) {
          if (((ulong)puVar7 & 1) == 0) goto LAB_10a93b98c;
        }
        else {
          param_1 = puVar22;
          param_2 = puVar16;
          if (((ulong)puVar7 & 1) != 0) {
            return;
          }
        }
      }
      goto LAB_10a93b554;
    }
    puVar7 = puVar22 + 1;
    if (fVar23 <= *(float *)(lVar10 + (ulong)param_2[-1] * 4)) {
      do {
        param_1 = puVar7;
        if (param_2 <= param_1) break;
        puVar7 = param_1 + 1;
      } while (fVar23 <= *(float *)(lVar10 + (ulong)*param_1 * 4));
    }
    else {
      do {
        param_1 = puVar7;
        if (param_1 == param_2) goto LAB_10a93befc;
        puVar7 = param_1 + 1;
      } while (fVar23 <= *(float *)(lVar10 + (ulong)*param_1 * 4));
    }
    puVar7 = param_2;
    if (param_1 < param_2) {
      do {
        if (puVar7 == puVar22) goto LAB_10a93befc;
        puVar7 = puVar7 + -1;
      } while (*(float *)(lVar10 + (ulong)*puVar7 * 4) < fVar23);
    }
    if (param_1 < puVar7) {
      uVar12 = (ulong)*param_1;
      uVar20 = (ulong)*puVar7;
      do {
        *param_1 = (uint)uVar20;
        *puVar7 = (uint)uVar12;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a93befc;
          uVar12 = (ulong)*param_1;
        } while (fVar23 <= *(float *)(lVar10 + uVar12 * 4));
        do {
          if (puVar7 == puVar22) goto LAB_10a93befc;
          puVar7 = puVar7 + -1;
          uVar20 = (ulong)*puVar7;
        } while (*(float *)(lVar10 + uVar20 * 4) < fVar23);
      } while (param_1 < puVar7);
    }
    puVar7 = param_1 + -1;
    if (puVar7 != puVar22) {
      *puVar22 = *puVar7;
    }
    param_5 = 0;
    *puVar7 = uVar18;
  } while( true );
}



/* Entry: 10a93bfb4; end: 10a93c13b;  */

void FUN_10a93bfb4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  fVar6 = *(float *)(param_6 + (ulong)uVar1 * 4);
  fVar5 = *(float *)(param_6 + (ulong)uVar2 * 4);
  uVar3 = *param_3;
  fVar7 = *(float *)(param_6 + (ulong)uVar3 * 4);
  if (fVar6 <= fVar5) {
    uVar4 = (ulong)uVar3;
    if (fVar6 < fVar7) {
      *param_2 = uVar3;
      *param_3 = uVar1;
      uVar2 = *param_1;
      uVar4 = (ulong)uVar1;
      if (*(float *)(param_6 + (ulong)uVar2 * 4) < *(float *)(param_6 + (ulong)*param_2 * 4)) {
        *param_1 = *param_2;
        *param_2 = uVar2;
        uVar4 = (ulong)*param_3;
      }
    }
  }
  else {
    if (fVar7 <= fVar6) {
      *param_1 = uVar1;
      *param_2 = uVar2;
      uVar1 = *param_3;
      uVar4 = (ulong)uVar1;
      if (*(float *)(param_6 + (ulong)uVar1 * 4) <= fVar5) goto LAB_10a93c05c;
      *param_2 = uVar1;
    }
    else {
      *param_1 = uVar3;
    }
    *param_3 = uVar2;
    uVar4 = (ulong)uVar2;
  }
LAB_10a93c05c:
  if (*(float *)(param_6 + uVar4 * 4) < *(float *)(param_6 + (ulong)*param_4 * 4)) {
    *param_3 = *param_4;
    *param_4 = (uint)uVar4;
    uVar1 = *param_2;
    if (*(float *)(param_6 + (ulong)uVar1 * 4) < *(float *)(param_6 + (ulong)*param_3 * 4)) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*(float *)(param_6 + (ulong)uVar1 * 4) < *(float *)(param_6 + (ulong)*param_2 * 4)) {
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  uVar1 = *param_4;
  if (*(float *)(param_6 + (ulong)uVar1 * 4) < *(float *)(param_6 + (ulong)*param_5 * 4)) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (*(float *)(param_6 + (ulong)uVar1 * 4) < *(float *)(param_6 + (ulong)*param_4 * 4)) {
      *param_3 = *param_4;
      *param_4 = uVar1;
      uVar1 = *param_2;
      if (*(float *)(param_6 + (ulong)uVar1 * 4) < *(float *)(param_6 + (ulong)*param_3 * 4)) {
        *param_2 = *param_3;
        *param_3 = uVar1;
        uVar1 = *param_1;
        if (*(float *)(param_6 + (ulong)uVar1 * 4) < *(float *)(param_6 + (ulong)*param_2 * 4)) {
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a93c13c; end: 10a93c447;  */

bool FUN_10a93c13c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = (long)param_2 - (long)param_1 >> 2;
  if (2 < (long)uVar4) {
    if (uVar4 == 3) {
      uVar6 = *param_1;
      uVar1 = param_1[1];
      lVar5 = *(long *)(param_3 + 8);
      fVar19 = *(float *)(lVar5 + (ulong)uVar1 * 4);
      fVar18 = *(float *)(lVar5 + (ulong)uVar6 * 4);
      uVar2 = param_2[-1];
      fVar20 = *(float *)(lVar5 + (ulong)uVar2 * 4);
      if (fVar19 <= fVar18) {
        if (fVar20 <= fVar19) {
          return true;
        }
        param_1[1] = uVar2;
        param_2[-1] = uVar1;
        uVar6 = *param_1;
        if (*(float *)(lVar5 + (ulong)uVar6 * 4) < *(float *)(lVar5 + (ulong)param_1[1] * 4)) {
          *param_1 = param_1[1];
          param_1[1] = uVar6;
          return true;
        }
        return true;
      }
      if (fVar20 <= fVar19) {
        *param_1 = uVar1;
        param_1[1] = uVar6;
        if (*(float *)(lVar5 + (ulong)param_2[-1] * 4) <= fVar18) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      else {
        *param_1 = uVar2;
      }
      goto LAB_10a93c3a8;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        FUN_10a93bfb4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,
                      *(undefined8 *)(param_3 + 8));
        return true;
      }
      goto LAB_10a93c1e8;
    }
    puVar11 = param_1 + 1;
    uVar1 = *puVar11;
    uVar10 = (ulong)uVar1;
    puVar13 = param_1 + 2;
    uVar2 = *puVar13;
    uVar4 = (ulong)uVar2;
    uVar6 = *param_1;
    uVar14 = (ulong)uVar6;
    lVar5 = *(long *)(param_3 + 8);
    fVar20 = *(float *)(lVar5 + uVar10 * 4);
    fVar18 = *(float *)(lVar5 + uVar14 * 4);
    fVar19 = *(float *)(lVar5 + uVar4 * 4);
    puVar12 = param_1;
    if (fVar20 <= fVar18) {
      uVar9 = uVar2;
      if (fVar19 <= fVar20) goto LAB_10a93c3e0;
      *puVar11 = uVar2;
      *puVar13 = uVar1;
      puVar16 = puVar11;
      uVar8 = uVar1;
      uVar4 = uVar10;
      uVar14 = uVar10;
joined_r0x00010a93c388:
      uVar9 = uVar1;
      if (fVar19 <= fVar18) goto LAB_10a93c3e0;
    }
    else {
      puVar16 = puVar13;
      uVar8 = uVar6;
      if (fVar19 <= fVar20) {
        *param_1 = uVar1;
        param_1[1] = uVar6;
        uVar1 = uVar2;
        puVar12 = puVar11;
        goto joined_r0x00010a93c388;
      }
    }
    *puVar12 = uVar2;
    *puVar16 = uVar6;
    uVar4 = uVar14;
    uVar9 = uVar8;
LAB_10a93c3e0:
    if (*(float *)(lVar5 + (ulong)param_2[-1] * 4) <= *(float *)(lVar5 + uVar4 * 4)) {
      return true;
    }
    *puVar13 = param_2[-1];
    param_2[-1] = uVar9;
    uVar6 = *puVar13;
    uVar1 = *puVar11;
    fVar18 = *(float *)(lVar5 + (ulong)uVar6 * 4);
    if (*(float *)(lVar5 + (ulong)uVar1 * 4) < fVar18) {
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      uVar1 = *param_1;
      if (*(float *)(lVar5 + (ulong)uVar1 * 4) < fVar18) {
        *param_1 = uVar6;
        param_1[1] = uVar1;
        return true;
      }
      return true;
    }
    return true;
  }
  if (uVar4 < 2) {
    return true;
  }
  if (uVar4 == 2) {
    uVar6 = *param_1;
    if (*(float *)(*(long *)(param_3 + 8) + (ulong)param_2[-1] * 4) <=
        *(float *)(*(long *)(param_3 + 8) + (ulong)uVar6 * 4)) {
      return true;
    }
    *param_1 = param_2[-1];
LAB_10a93c3a8:
    param_2[-1] = uVar6;
    return true;
  }
LAB_10a93c1e8:
  puVar11 = param_1 + 2;
  uVar1 = *puVar11;
  puVar13 = param_1 + 1;
  uVar2 = *puVar13;
  lVar5 = *(long *)(param_3 + 8);
  fVar20 = *(float *)(lVar5 + (ulong)uVar2 * 4);
  uVar6 = *param_1;
  fVar18 = *(float *)(lVar5 + (ulong)uVar6 * 4);
  fVar19 = *(float *)(lVar5 + (ulong)uVar1 * 4);
  puVar12 = param_1;
  if (fVar20 <= fVar18) {
    if (fVar19 <= fVar20) goto LAB_10a93c2dc;
    *puVar13 = uVar1;
    *puVar11 = uVar2;
    puVar16 = puVar13;
joined_r0x00010a93c2d0:
    if (fVar19 <= fVar18) goto LAB_10a93c2dc;
  }
  else {
    puVar16 = puVar11;
    if (fVar19 <= fVar20) {
      *param_1 = uVar2;
      param_1[1] = uVar6;
      puVar12 = puVar13;
      goto joined_r0x00010a93c2d0;
    }
  }
  *puVar12 = uVar1;
  *puVar16 = uVar6;
LAB_10a93c2dc:
  if (param_1 + 3 != param_2) {
    iVar7 = 0;
    lVar15 = 0xc;
    puVar12 = param_1 + 3;
    do {
      puVar13 = puVar12;
      uVar6 = *puVar13;
      uVar4 = (ulong)*puVar11;
      fVar18 = *(float *)(lVar5 + (ulong)uVar6 * 4);
      lVar17 = lVar15;
      if (*(float *)(lVar5 + uVar4 * 4) < fVar18) {
        do {
          *(int *)((long)param_1 + lVar17) = (int)uVar4;
          lVar3 = lVar17 + -4;
          puVar12 = param_1;
          if (lVar3 == 0) goto LAB_10a93c33c;
          uVar4 = (ulong)*(uint *)((long)param_1 + lVar17 + -8);
          lVar17 = lVar3;
        } while (*(float *)(lVar5 + uVar4 * 4) < fVar18);
        puVar12 = (uint *)((long)param_1 + lVar3);
LAB_10a93c33c:
        *puVar12 = uVar6;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return puVar13 + 1 == param_2;
        }
      }
      lVar15 = lVar15 + 4;
      puVar12 = puVar13 + 1;
      puVar11 = puVar13;
    } while (puVar13 + 1 != param_2);
  }
  return true;
}



/* Entry: 10a93c448; end: 10a93c4a3;  */

void FUN_10a93c448(long *param_1)

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



/* Entry: 10a93c4a4; end: 10a93c59f;  */

undefined1  [16] FUN_10a93c4a4(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2ef78;
  puVar1 = &UNK_10f682e30;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c2ef78;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c2c758;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a93c5a0; end: 10a93c5f7;  */

ulong FUN_10a93c5a0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a93c5f8,FUN_10a93c6b0);
  }
  return param_1;
}



/* Entry: 10a93c5f8; end: 10a93c6af;  */

void FUN_10a93c5f8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a93c7cc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3b5728(param_1,param_2,plVar4 + 0x53);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a93c6b0; end: 10a93c7cb;  */

void FUN_10a93c6b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  func_0x00010a93c834(param_2,param_3);
  FUN_10a3b58a4(param_5);
  FUN_10a20fcc4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a91bc00(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a93c7cc; end: 10a93c8f3;  */

undefined ** FUN_10a93c7cc(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (ppuVar1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar1 != (undefined **)0x0) {
        return ppuVar1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a052828(ppuVar1,*param_2,FUN_10a93c8f4,FUN_10a93c9b0);
  }
  return ppuVar1;
}



/* Entry: 10a93c8f4; end: 10a93c9af;  */

void FUN_10a93c8f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a93c7cc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x55);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a93c9b0; end: 10a93ca9f;  */

void FUN_10a93c9b0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a93c834(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a93ca8c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x55) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10a93caa0; end: 10a93cb5b;  */

void FUN_10a93caa0(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f683a14,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a93cb5c);
  (*pcVar4)();
}



/* Entry: 10a93cb5c; end: 10a93cdcf;  */

void FUN_10a93cb5c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  uint *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_b0;
  long lStack_a8;
  uint auStack_98 [2];
  undefined8 *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) != 0) {
    auStack_98[0] = 0;
    puVar1 = auStack_98;
    if (param_5 != 0) {
      puVar1 = param_4;
    }
    FUN_10a36c9b0(&lStack_b0,param_2,puVar1);
    puVar1 = auStack_98;
    if (1 < param_5) {
      puVar1 = param_4 + 4;
    }
    if (*puVar1 < 2) {
      uVar7 = 0;
    }
    else {
      plVar8 = param_2;
      func_0x00010a068bd8();
      uVar7 = SUB81(plVar8,0);
    }
    puVar4 = (undefined8 *)0x58;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110c2f6d8;
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    uVar9 = *(undefined8 *)(*ppuVar5 + 0x870);
    ppuStack_88 = &PTR_FUN_110c2efa0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10a0ea4a0(&uStack_70,lStack_b0,lStack_a8,lStack_a8 - lStack_b0 >> 2);
    uStack_58 = uVar7;
    FUN_10a91d5dc(puVar4 + 3,uVar9,&ppuStack_88);
    FUN_10a924520(&ppuStack_88);
    plVar8 = (long *)plVar3[4];
    if (plVar8 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plVar8 = (long *)plVar3[4];
    }
    plVar3[4] = *plVar8;
    *plVar8 = (long)&PTR_DAT_110b17478;
    plVar8[1] = (long)(puVar4 + 3);
    plVar8[2] = (long)puVar4;
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
    if ((3 < (int)auStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
      (**(code **)*puStack_90)();
    }
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2);
    (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar8,plVar6,&UNK_10989ba24,param_3);
    *param_1 = 7;
    func_0x00010988c170(plVar3 + 0x4b);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a93cd64);
  (*pcVar2)();
}



/* Entry: 10a93cdd0; end: 10a93cddf;  */

void FUN_10a93cdd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f6d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a93cde0; end: 10a93cdff;  */

void FUN_10a93cde0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f6d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a93ce00; end: 10a93ce0f;  */

void FUN_10a93ce00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a93ce08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a93ce10; end: 10a93cf3b;  */

void FUN_10a93ce10(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a071ffc(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*plVar5 + 0x30))(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a93cf3c; end: 10a93d003;  */

void FUN_10a93cf3c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a93d004(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[6];
  (**(code **)(*plVar4 + 0x10))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)plVar4 & 0xffffffff);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}


