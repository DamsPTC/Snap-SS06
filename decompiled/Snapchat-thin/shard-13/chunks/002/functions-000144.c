/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a213f30; end: 10a2143df;  */

void FUN_10a213f30(float *param_1,float *param_2,float *param_3,long param_4,long param_5,
                  float *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  
  do {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) {
      if (param_4 <= param_5) {
        if (param_2 == param_1) {
          return;
        }
        lVar20 = -(long)param_6;
        pfVar8 = param_6;
        pfVar15 = param_1;
        do {
          pfVar7 = pfVar15 + 2;
          pfVar18 = pfVar8 + 2;
          *(undefined8 *)pfVar8 = *(undefined8 *)pfVar15;
          lVar20 = lVar20 + -8;
          pfVar8 = pfVar18;
          pfVar15 = pfVar7;
        } while (pfVar7 != param_2);
        do {
          if (param_2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(param_1,param_6,-((long)param_6 + lVar20));
            return;
          }
          bVar3 = *param_6 <= *param_2;
          pfVar8 = param_2;
          if (bVar3) {
            pfVar8 = param_6;
          }
          lVar19 = 8;
          if (bVar3) {
            lVar19 = 0;
          }
          param_2 = (float *)((long)param_2 + lVar19);
          lVar19 = 0;
          if (bVar3) {
            lVar19 = 8;
          }
          param_6 = (float *)((long)param_6 + lVar19);
          *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
          param_1 = param_1 + 2;
        } while (pfVar18 != param_6);
        return;
      }
      if (param_2 != param_3) {
        lVar20 = 0;
        do {
          *(undefined8 *)((long)param_6 + lVar20) = *(undefined8 *)((long)param_2 + lVar20);
          lVar20 = lVar20 + 8;
        } while ((float *)((long)param_2 + lVar20) != param_3);
        pfVar8 = (float *)((long)param_6 + lVar20);
        do {
          if (param_2 == param_1) {
            if (pfVar8 == param_6) {
              return;
            }
            lVar20 = -8;
            do {
              pfVar8 = pfVar8 + -2;
              *(undefined8 *)((long)param_3 + lVar20) = *(undefined8 *)pfVar8;
              lVar20 = lVar20 + -8;
            } while (pfVar8 != param_6);
            return;
          }
          pfVar15 = pfVar8;
          pfVar7 = param_2 + -2;
          pfVar18 = param_2;
          if (param_2[-2] <= pfVar8[-2]) {
            pfVar15 = pfVar8 + -2;
            pfVar7 = param_2;
            pfVar18 = pfVar8;
          }
          param_2 = pfVar7;
          param_3 = param_3 + -2;
          *(undefined8 *)param_3 = *(undefined8 *)(pfVar18 + -2);
          pfVar8 = pfVar15;
        } while (pfVar15 != param_6);
        return;
      }
      return;
    }
    if (param_4 == 0) {
      return;
    }
    lVar20 = 0;
    lVar19 = -param_4;
    while (*(float *)((long)param_1 + lVar20) <= *param_2) {
      lVar20 = lVar20 + 8;
      bVar3 = lVar19 == -1;
      lVar19 = lVar19 + 1;
      if (bVar3) {
        return;
      }
    }
    if (-lVar19 < param_5) {
      lVar4 = param_5 / 2;
      pfVar8 = param_2 + lVar4 * 2;
      lVar1 = (long)param_2 + (-lVar20 - (long)param_1);
      pfVar15 = param_2;
      if (lVar1 != 0) {
        uVar5 = lVar1 >> 3;
        pfVar15 = (float *)((long)param_1 + lVar20);
        do {
          uVar9 = uVar5 >> 1;
          uVar12 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
          uVar5 = uVar9;
          if (pfVar15[uVar9 * 2] <= *pfVar8) {
            uVar5 = uVar12;
            pfVar15 = pfVar15 + uVar9 * 2 + 2;
          }
        } while (uVar5 != 0);
      }
      param_4 = (long)pfVar15 + (-lVar20 - (long)param_1) >> 3;
    }
    else {
      if (lVar19 == -1) {
        uVar6 = *(undefined8 *)((long)param_1 + lVar20);
        *(undefined8 *)((long)param_1 + lVar20) = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar6;
        return;
      }
      param_4 = -lVar19 / 2;
      pfVar8 = param_2;
      if (param_2 != param_3) {
        uVar5 = (long)param_3 - (long)param_2 >> 3;
        pfVar15 = param_2;
        do {
          uVar12 = uVar5 >> 1;
          pfVar8 = pfVar15 + uVar12 * 2 + 2;
          uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
          if (*(float *)((long)param_1 + lVar20 + param_4 * 8) <= pfVar15[uVar12 * 2]) {
            pfVar8 = pfVar15;
            uVar5 = uVar12;
          }
          pfVar15 = pfVar8;
        } while (uVar5 != 0);
      }
      lVar4 = (long)pfVar8 - (long)param_2 >> 3;
      pfVar15 = (float *)((long)param_1 + lVar20 + param_4 * 8);
    }
    lVar1 = (long)param_2 - (long)pfVar15;
    pfVar18 = pfVar8;
    if ((lVar1 != 0) && (lVar2 = (long)pfVar8 - (long)param_2, pfVar18 = pfVar15, lVar2 != 0)) {
      if (pfVar15 + 2 == param_2) {
        uVar6 = *(undefined8 *)pfVar15;
        _memmove(pfVar15,param_2,lVar2);
        *(undefined8 *)((long)pfVar15 + lVar2) = uVar6;
        pfVar18 = (float *)((long)pfVar15 + lVar2);
      }
      else if (param_2 + 2 == pfVar8) {
        pfVar7 = pfVar8 + -2;
        uVar6 = *(undefined8 *)pfVar7;
        pfVar18 = (float *)((long)pfVar8 - ((long)pfVar7 - (long)pfVar15));
        if ((long)pfVar7 - (long)pfVar15 != 0) {
          _memmove(pfVar18,pfVar15,(long)pfVar7 - (long)pfVar15);
        }
        *(undefined8 *)pfVar15 = uVar6;
      }
      else {
        lVar10 = lVar1 >> 3;
        lVar14 = lVar2 >> 3;
        lVar16 = lVar10;
        pfVar7 = pfVar15;
        pfVar17 = param_2;
        if (lVar10 == lVar2 >> 3) {
          do {
            pfVar11 = pfVar17 + 2;
            uVar6 = *(undefined8 *)pfVar7;
            *(undefined8 *)pfVar7 = *(undefined8 *)pfVar17;
            *(undefined8 *)pfVar17 = uVar6;
            pfVar18 = param_2;
            if (pfVar7 + 2 == param_2) break;
            pfVar7 = pfVar7 + 2;
            pfVar17 = pfVar11;
          } while (pfVar11 != pfVar8);
        }
        else {
          do {
            lVar13 = lVar14;
            lVar14 = 0;
            if (lVar13 != 0) {
              lVar14 = lVar16 / lVar13;
            }
            lVar14 = lVar16 - lVar14 * lVar13;
            lVar16 = lVar13;
          } while (lVar14 != 0);
          pfVar18 = pfVar15 + lVar13 * 2;
          do {
            pfVar18 = pfVar18 + -2;
            uVar6 = *(undefined8 *)pfVar18;
            pfVar7 = (float *)(lVar1 + (long)pfVar18);
            pfVar17 = pfVar18;
            do {
              pfVar11 = pfVar7;
              *(undefined8 *)pfVar17 = *(undefined8 *)pfVar11;
              lVar14 = (long)pfVar8 - (long)pfVar11 >> 3;
              pfVar7 = (float *)((long)pfVar11 + lVar1);
              if (lVar14 <= lVar10) {
                pfVar7 = pfVar15 + (lVar10 - lVar14) * 2;
              }
              pfVar17 = pfVar11;
            } while (pfVar7 != pfVar18);
            *(undefined8 *)pfVar11 = uVar6;
          } while (pfVar18 != pfVar15);
          pfVar18 = (float *)(lVar2 + (long)pfVar15);
        }
      }
    }
    if (param_4 + lVar4 < (param_5 - (param_4 + lVar4)) - lVar19) {
      FUN_10a213f30((long)param_1 + lVar20,pfVar15,pfVar18);
      param_5 = param_5 - lVar4;
      param_4 = -(param_4 + lVar19);
      param_2 = pfVar8;
      param_1 = pfVar18;
    }
    else {
      FUN_10a213f30(pfVar18,pfVar8,param_3,-(param_4 + lVar19),param_5 - lVar4);
      param_5 = lVar4;
      param_3 = pfVar18;
      param_2 = pfVar15;
      param_1 = (float *)((long)param_1 + lVar20);
    }
  } while( true );
}



/* Entry: 10a2143e0; end: 10a2143ef;  */

void FUN_10a2143e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2600;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2143f0; end: 10a21440f;  */

void FUN_10a2143f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2600;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a214410; end: 10a21441f;  */

void FUN_10a214410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a214418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a214420; end: 10a214653;  */

void FUN_10a214420(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  float *pfStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  FUN_10a1fba14(param_5);
  pfVar6 = param_2;
  func_0x00010a1fba38(param_2,param_4);
  fVar22 = *pfVar6;
  fVar21 = pfVar6[1];
  fVar20 = pfVar6[2];
  fVar19 = pfVar6[3];
  pfVar6 = (float *)0x78;
  __Znwm();
  pfVar6[2] = 0.0;
  pfVar6[3] = 0.0;
  pfVar6[4] = 0.0;
  pfVar6[5] = 0.0;
  *(undefined ***)pfVar6 = &PTR_FUN_110bb2650;
  pfStack_70 = pfVar6 + 6;
  *(undefined ***)pfStack_70 = &PTR_FUN_110bafe68;
  pfVar6[8] = 0.0;
  pfVar6[9] = 0.0;
  pfVar6[10] = 0.0;
  pfVar6[0xb] = 0.0;
  if (NAN(fVar22)) {
    uVar8 = 0;
  }
  else {
    fVar18 = 1.0;
    if (fVar22 <= 1.0) {
      fVar18 = fVar22;
    }
    fVar17 = 0.5;
    if (0.0 <= fVar22) {
      fVar17 = fVar18 * 255.0 + 0.5;
    }
    uVar8 = (undefined1)(int)fVar17;
  }
  *(undefined1 *)(pfVar6 + 0xc) = uVar8;
  if (NAN(fVar21)) {
    uVar8 = 0;
  }
  else {
    fVar22 = 1.0;
    if (fVar21 <= 1.0) {
      fVar22 = fVar21;
    }
    fVar18 = 0.5;
    if (0.0 <= fVar21) {
      fVar18 = fVar22 * 255.0 + 0.5;
    }
    uVar8 = (undefined1)(int)fVar18;
  }
  *(undefined1 *)((long)pfVar6 + 0x31) = uVar8;
  if (NAN(fVar20)) {
    uVar8 = 0;
  }
  else {
    fVar21 = 1.0;
    if (fVar20 <= 1.0) {
      fVar21 = fVar20;
    }
    fVar22 = 0.5;
    if (0.0 <= fVar20) {
      fVar22 = fVar21 * 255.0 + 0.5;
    }
    uVar8 = (undefined1)(int)fVar22;
  }
  *(undefined1 *)((long)pfVar6 + 0x32) = uVar8;
  if (NAN(fVar19)) {
    uVar8 = 0;
  }
  else {
    fVar20 = 1.0;
    if (fVar19 <= 1.0) {
      fVar20 = fVar19;
    }
    fVar21 = 0.5;
    if (0.0 <= fVar19) {
      fVar21 = fVar20 * 255.0 + 0.5;
    }
    uVar8 = (undefined1)(int)fVar21;
  }
  *(undefined1 *)((long)pfVar6 + 0x33) = uVar8;
  *(undefined1 *)(pfVar6 + 0xe) = 0;
  *(undefined1 *)(pfVar6 + 0x1c) = 0;
  pfStack_68 = pfVar6;
  FUN_10a214654(param_1,param_2,&pfStack_70);
  pfVar6 = pfStack_68;
  if (pfStack_68 != (float *)0x0) {
    pfVar14 = pfStack_68 + 2;
    do {
      lVar10 = *(long *)pfVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pfVar14,0x10);
      if (bVar2) {
        *(long *)pfVar14 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)pfStack_68 + 0x10))(pfStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar6);
    }
  }
  pfVar6 = pfVar5 + 0x96;
  uVar7 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar6 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar10 = *(long *)pfVar6;
  lVar13 = *(long *)(pfVar5 + 0x98);
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    pfVar14 = *(float **)(pfVar5 + 0x9a);
    if ((ulong)((long)pfVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = (long)pfVar14 - lVar10 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)pfVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *(long *)pfVar6 = lVar12;
          *(ulong *)(pfVar5 + 0x98) = lVar13 + uVar16 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          pfStack_70 = pfVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar13 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    *(long *)(pfVar5 + 0x98) = lVar10;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a214654; end: 10a2146e3;  */

void FUN_10a214654(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  ppuStack_38 = &PTR_DAT_110bb1ba0;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a2146e4; end: 10a214997;  */

void FUN_10a2146e4(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a214998(param_5);
  if (*param_4 == 1) {
    puStack_90 = (undefined8 *)0x0;
    plStack_88 = (long *)0x0;
    FUN_10a00946c(&UNK_10f64556c);
  }
  else {
    plVar6 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar6 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&puStack_80);
      ppuVar8 = &puStack_90;
      if ((puStack_80 != (undefined8 *)0x0) &&
         (___dynamic_cast(puStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110bb1b70,0), ppuVar8 = &puStack_90
         , puStack_80 != (undefined8 *)0x0)) {
        plStack_88 = (long *)CONCAT44(uStack_74,uStack_78);
        ppuVar8 = &puStack_80;
        puStack_90 = puStack_80;
      }
      *ppuVar8 = (undefined8 *)0x0;
      ppuVar8[1] = (undefined8 *)0x0;
      plVar6 = (long *)CONCAT44(uStack_74,uStack_78);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (puStack_90 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x78;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_110bb2650;
        puStack_80 = (undefined8 *)puStack_90[3];
        uStack_78 = (undefined4)puStack_90[4];
        uStack_6c = *(undefined8 *)((long)puStack_90 + 0x2c);
        uStack_74 = (undefined4)*(undefined8 *)((long)puStack_90 + 0x24);
        uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)puStack_90 + 0x24) >> 0x20);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
        FUN_10a1f6960(&uStack_60,puStack_90[7],puStack_90[8],
                      (long)(puStack_90[8] - puStack_90[7]) >> 3);
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar10 = puVar7 + 3;
        *puVar10 = &PTR_FUN_110bafe68;
        *(undefined4 *)(puVar7 + 6) = 0xff000000;
        puVar7[8] = CONCAT44(uStack_74,uStack_78);
        puVar7[7] = puStack_80;
        *(undefined8 *)((long)puVar7 + 0x4c) = uStack_6c;
        *(ulong *)((long)puVar7 + 0x44) = CONCAT44(uStack_70,uStack_74);
        puVar7[0xc] = uStack_58;
        puVar7[0xb] = uStack_60;
        puVar7[0xd] = uStack_50;
        *(undefined1 *)(puVar7 + 0xe) = 1;
        uStack_78 = SUB84(puVar7,0);
        uStack_74 = (undefined4)((ulong)puVar7 >> 0x20);
        puStack_80 = puVar10;
        if (plStack_88 != (long *)0x0) {
          plVar6 = plStack_88 + 1;
          do {
            lVar9 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
        FUN_10a214654(param_1,param_2,&puStack_80);
        plVar6 = (long *)CONCAT44(uStack_74,uStack_78);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        func_0x00010988c170(plVar5 + 0x4b);
        return;
      }
      func_0x00010988bd28(&UNK_10f58251f);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a21495c);
  (*pcVar4)();
}



/* Entry: 10a214998; end: 10a2149bb;  */

void FUN_10a214998(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb2650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2149bc; end: 10a2149cb;  */

void FUN_10a2149bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2149cc; end: 10a2149eb;  */

void FUN_10a2149cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2650;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2149ec; end: 10a2149fb;  */

void FUN_10a2149ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2149f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2149fc; end: 10a214acf;  */

void FUN_10a2149fc(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_3;
  FUN_10a214ad0(param_3,param_4);
  FUN_10a076f00(param_6);
  func_0x000109898518(param_3,param_5);
  func_0x00010a1f1f04(plVar4,param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
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



/* Entry: 10a214ad0; end: 10a214b37;  */

void FUN_10a214ad0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff90;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
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
  plVar6 = plVar4;
  FUN_10a214ad0(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a1f1f50(&stack0xffffffffffffff88,plVar6);
  FUN_10a07b090(extraout_x8,plVar4,in_stack_ffffffffffffff88,
                in_stack_ffffffffffffff90 - in_stack_ffffffffffffff88 >> 3);
  if (in_stack_ffffffffffffff88 != 0) {
    __ZdlPv();
  }
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a214b38; end: 10a214c33;  */

void FUN_10a214b38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10a214ad0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1f1f50(&stack0xffffffffffffffa8,plVar4);
  FUN_10a07b090(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 3);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv();
  }
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



/* Entry: 10a214c34; end: 10a214d17;  */

void FUN_10a214c34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  int *piVar8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a214ad0(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((int *)param_2[3] == (int *)param_2[4]) {
    dVar17 = 0.0;
  }
  else {
    uVar10 = 0;
    piVar7 = (int *)param_2[3];
    do {
      piVar8 = piVar7 + 7;
      if (*piVar7 == 0) {
        uVar10 = uVar10 + 1;
      }
      piVar7 = piVar8;
    } while (piVar8 != (int *)param_2[4]);
    dVar17 = (double)uVar10;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar17;
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
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar5;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar6) {
    uVar16 = uVar6 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar6 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar5 >> 3;
        if (uVar9 <= uVar6) {
          uVar9 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar5)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar5,lVar11);
          *plVar1 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar14;
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
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar13 != lVar5) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a214d18; end: 10a214de7;  */

void FUN_10a214d18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a214ad0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  lVar10 = param_2[4];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((int)((ulong)(lVar10 - lVar5) >> 2) * -0x49249249);
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



/* Entry: 10a214de8; end: 10a214eeb;  */

void FUN_10a214de8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a214ad0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1f1e48(&stack0xffffffffffffffb0,plVar6);
  func_0x00010a20fa88(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a214eec; end: 10a214fab;  */

void FUN_10a214eec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a214ad0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  lVar10 = param_2[4];
  *param_1 = 2;
  *(bool *)(param_1 + 2) = lVar5 == lVar10;
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



/* Entry: 10a214fac; end: 10a21506f;  */

void FUN_10a214fac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a214ad0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1f1a20(param_2);
  fVar14 = *(float *)((long)param_2 + 0x34);
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



/* Entry: 10a215070; end: 10a215127;  */

void FUN_10a215070(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a215128(param_1,param_2,FUN_10a1f258c,0,param_3,param_4,param_5);
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



/* Entry: 10a215128; end: 10a2151b3;  */

void FUN_10a215128(undefined4 *param_1,undefined4 *param_2,code *param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  FUN_10a2151b4(param_2,param_5);
  FUN_10a05a384(param_7);
  FUN_10a05a42c(param_2,param_6);
  plVar1 = (long *)((long)puVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(*param_2,param_2[1],plVar1);
  *param_1 = 0;
  return;
}



/* Entry: 10a2151b4; end: 10a21521b;  */

void FUN_10a2151b4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
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
      param_3 = &PTR_DAT_110bb1bd0;
      param_4 = 0;
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
  FUN_10a215128(extraout_x8,plVar4,FUN_10a1f2728,0,param_2,param_3,param_4);
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



/* Entry: 10a21521c; end: 10a2152d3;  */

void FUN_10a21521c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a215128(param_1,param_2,FUN_10a1f2728,0,param_3,param_4,param_5);
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



/* Entry: 10a2152d4; end: 10a2153cb;  */

void FUN_10a2152d4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
  FUN_10a2151b4(param_2,param_3);
  FUN_10a2153cc(param_5);
  plVar5 = param_2;
  FUN_10a05a42c(param_2,param_4);
  plVar6 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x10);
  FUN_10a05a42c(param_2,param_4 + 0x20);
  func_0x00010a1f27dc((int)*plVar5,*(undefined4 *)((long)plVar5 + 4),(int)*plVar6,
                      *(undefined4 *)((long)plVar6 + 4),(int)*param_2,
                      *(undefined4 *)((long)param_2 + 4),plVar4);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar7 = plVar3[0x59];
  uVar8 = lVar7 - 1;
  plVar3[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar3[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar3[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar3[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar3[0x4c] = lVar12 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar3[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar3[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar8;
  return;
}



/* Entry: 10a2153cc; end: 10a2153ef;  */

void FUN_10a2153cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar7 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a2151b4(plVar3,uVar7);
  FUN_10a213894(param_4);
  plVar6 = plVar3;
  FUN_10a05a42c(plVar3,param_1);
  FUN_10a05a42c(plVar3,param_1 + 0x10);
  func_0x00010a1f28ec((int)*plVar6,*(undefined4 *)((long)plVar6 + 4),(int)*plVar3,
                      *(undefined4 *)((long)plVar3 + 4),plVar5);
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar9 = lVar8 - 1;
  plVar4[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar3[lVar8 + 2];
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar3;
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar3 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar4[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar9;
  return;
}



/* Entry: 10a2153f0; end: 10a2154cb;  */

void FUN_10a2153f0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  FUN_10a2151b4(param_2,param_3);
  FUN_10a213894(param_5);
  plVar5 = param_2;
  FUN_10a05a42c(param_2,param_4);
  FUN_10a05a42c(param_2,param_4 + 0x10);
  func_0x00010a1f28ec((int)*plVar5,*(undefined4 *)((long)plVar5 + 4),(int)*param_2,
                      *(undefined4 *)((long)param_2 + 4),plVar4);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a2154cc; end: 10a21562b;  */

void FUN_10a2154cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a2151b4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1f29d0(&lStack_70,plVar7);
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a21562c; end: 10a21576b;  */

void FUN_10a21562c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x58;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bb26a0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[10] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110baff18;
  plVar5[6] = 0;
  plVar5[7] = 0;
  *(undefined1 *)(plVar5 + 9) = 0;
  plVar5[8] = 0;
  ppuStack_48 = &PTR_DAT_110bb1bd0;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a21576c; end: 10a21577b;  */

void FUN_10a21576c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb26a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a21577c; end: 10a21579b;  */

void FUN_10a21577c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb26a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a21579c; end: 10a2157bb;  */

void FUN_10a21579c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2157a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2157bc; end: 10a2157db;  */

void FUN_10a2157bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb26f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2157dc; end: 10a2157eb;  */

void FUN_10a2157dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2157e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2157ec; end: 10a215843;  */

long FUN_10a2157ec(long param_1)

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



/* Entry: 10a215844; end: 10a21593f;  */

undefined1  [16] FUN_10a215844(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1c40;
  puVar1 = &UNK_10f643dac;
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
    ppuStack_40 = &PTR_DAT_110bb1c40;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a215940; end: 10a21598f;  */

ulong FUN_10a215940(ulong param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x20),
                *(undefined4 *)(param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a215990,0,0);
  }
  return param_1;
}



/* Entry: 10a215990; end: 10a215acb;  */

void FUN_10a215990(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a215ab8);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bb2740;
  puVar4[3] = &PTR_DAT_110bb1bf8;
  puVar4[4] = 0;
  puVar4[5] = 0;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a215acc; end: 10a215adb;  */

void FUN_10a215acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2740;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a215adc; end: 10a215afb;  */

void FUN_10a215adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2740;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a215afc; end: 10a215b0b;  */

void FUN_10a215afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a215b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a215b0c; end: 10a215b6f;  */

ulong FUN_10a215b0c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a215b70);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a215b70,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a215b70; end: 10a21627f;  */

void FUN_10a215b70(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long **pplVar8;
  undefined *extraout_x8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar4 = param_1;
  func_0x000109898688(param_1,param_2);
  if (plVar4 == (long *)0x0) {
    puVar10 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_1;
    FUN_10a053854(param_1,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a216280(param_4);
      FUN_10a065cdc(auStack_a0,param_1,param_3);
      func_0x000109898610(&plStack_80,param_1,param_3 + 0x10);
      if (plStack_80 != (long *)0x0) {
        ___dynamic_cast(plStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110bb1b40,0x10);
        if (plStack_80 == (long *)0x0) {
          pplVar8 = &plStack_90;
        }
        else {
          plStack_88 = plStack_78;
          pplVar8 = &plStack_80;
          plStack_90 = plStack_80;
        }
        *pplVar8 = (long *)0x0;
        pplVar8[1] = (long *)0x0;
        plVar4 = plStack_88;
        if (plStack_90 == (long *)0x0) {
          func_0x00010988bd28(&UNK_10f685500);
          goto LAB_10a215ea0;
        }
        FUN_10a0533bc(&plStack_60,plStack_90);
        if (plStack_60 == (long *)0x0) {
          func_0x0001098849a4(&plStack_50,param_1,param_3 + 0x10);
          plVar5 = (long *)0x30;
          __Znwm();
          plVar5[1] = 0;
          plVar5[2] = 0;
          *plVar5 = (long)&PTR_DAT_110b174d8;
          plStack_70 = plVar5 + 3;
          if ((int)plStack_50 == 3) {
            plVar5[3] = (long)param_1;
            *(undefined4 *)(plVar5 + 4) = 3;
            plVar5[5] = (long)plStack_48;
          }
          else if ((int)plStack_50 == 2) {
            plVar5[3] = (long)param_1;
            *(undefined4 *)(plVar5 + 4) = 2;
            *(undefined1 *)(plVar5 + 5) = plStack_48._0_1_;
          }
          else if ((int)plStack_50 < 4) {
            plVar5[3] = (long)param_1;
            *(int *)(plVar5 + 4) = (int)plStack_50;
          }
          else {
            plVar5[3] = (long)param_1;
            *(int *)(plVar5 + 4) = (int)plStack_50;
            plVar5[5] = (long)plStack_48;
          }
          plStack_50 = plStack_90;
          plStack_48 = plVar4;
          if (plVar4 != (long *)0x0) {
            plVar6 = plVar4 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar2) {
                *plVar6 = *plVar6 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          plVar6 = (long *)0x90;
          plStack_68 = plVar5;
          __Znwm();
          plVar5 = plStack_58;
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = (long)&PTR_FUN_110b9fe30;
          plStack_60 = plVar6 + 3;
          *plStack_60 = (long)plStack_90;
          plStack_50 = (long *)0x0;
          plStack_48 = (long *)0x0;
          plVar6[4] = (long)plVar4;
          plVar6[5] = 0;
          plVar6[6] = 0;
          plVar6[7] = 0x32aaaba7;
          plVar6[9] = 0;
          plVar6[8] = 0;
          plVar6[0xb] = 0;
          plVar6[10] = 0;
          plVar6[0xd] = 0;
          plVar6[0xc] = 0;
          plVar6[0xf] = 0;
          plVar6[0xe] = 0;
          plVar6[0x11] = 0;
          plVar6[0x10] = 0;
          if (plStack_58 != (long *)0x0) {
            plVar4 = plStack_58 + 1;
            do {
              lVar9 = *plVar4;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              lVar9 = *plStack_58;
              plStack_58 = plVar6;
              (**(code **)(lVar9 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              plVar6 = plStack_58;
            }
          }
          plStack_58 = plVar6;
          plVar4 = plStack_48;
          if (plStack_48 != (long *)0x0) {
            plVar5 = plStack_48 + 1;
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_48 + 0x10))(plStack_48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
          func_0x00010a04a7fc(plStack_60 + 2,&plStack_70);
          if (plStack_58 == (long *)0x0) {
            plStack_48 = (long *)0x0;
          }
          else {
            plVar4 = plStack_58 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = *plVar4 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            plStack_48 = plStack_58;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = *plVar4 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          plStack_50 = plStack_90;
          func_0x00010a053e8c(plStack_60,&plStack_50);
          plVar4 = plStack_48;
          if (plStack_48 != (long *)0x0) {
            plVar5 = plStack_48 + 1;
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_48 + 0x10))(plStack_48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
          func_0x00010a053ee8(plStack_90,&plStack_60);
          ppuVar7 = &PTR___tlv_bootstrap_11340df48;
          (*(code *)PTR___tlv_bootstrap_11340df48)(plStack_90[10]);
          puVar10 = *ppuVar7;
          if (extraout_x8 != (undefined *)0x0) {
            puVar10 = extraout_x8;
          }
          FUN_10aa89b3c(*(undefined8 *)(puVar10 + 0x870),&plStack_60);
          plVar4 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar5 = plStack_68 + 1;
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
        }
        else {
          func_0x00010a053e40(&plStack_50);
        }
        plVar4 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar5 = plStack_58 + 1;
          do {
            lVar9 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar5 = plStack_88 + 1;
          do {
            lVar9 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      if (plStack_78 != (long *)0x0) {
        plVar4 = plStack_78 + 1;
        do {
          lVar9 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      if (*(int *)(param_3 + 0x20) == 1) {
        plStack_60 = (long *)0x0;
        plStack_58 = (long *)0x0;
      }
      else {
        func_0x000109898688(param_1,(int *)(param_3 + 0x20));
        if (param_1 == (long *)0x0) {
          func_0x00010988bd28(&UNK_10f68f52e);
          goto LAB_10a215ea0;
        }
        func_0x00010989879c(&plStack_50);
        if ((plStack_50 == (long *)0x0) ||
           (plVar4 = plStack_50, ___dynamic_cast(plStack_50,&PTR_DAT_110b178e0,&PTR_DAT_110bb1b10,0)
           , plVar4 == (long *)0x0)) {
          pplVar8 = &plStack_60;
        }
        else {
          plStack_58 = plStack_48;
          pplVar8 = &plStack_50;
          plStack_60 = plVar4;
        }
        *pplVar8 = (long *)0x0;
        pplVar8[1] = (long *)0x0;
        plVar4 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar5 = plStack_48 + 1;
          do {
            lVar9 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        if (plStack_60 == (long *)0x0) {
          func_0x00010988bd28(&UNK_10f58251f);
          goto LAB_10a215ea0;
        }
      }
      FUN_10a00946c(&UNK_10f645745);
      goto LAB_10a215ea0;
    }
    puVar10 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar10);
LAB_10a215ea0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a215ea4);
  (*pcVar3)();
}



/* Entry: 10a216280; end: 10a2162a3;  */

void FUN_10a216280(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  
  if ((int)param_1 == 3) {
    return;
  }
  uVar3 = 3;
  FUN_10a052ee0(3,0,param_1);
  *(undefined **)(uVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(uVar3 + 0x170);
  if (*(long *)(uVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(uVar3 + 0x170) = lVar1 + -0x68;
    uVar4 = uVar3;
    FUN_10a0051e8();
    if ((uVar4 & 1) == 0) {
      func_0x000109894f40(uVar3,0);
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f645736,0xe);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a216360);
  (*pcVar2)();
}



/* Entry: 10a2162a4; end: 10a2163b7;  */

void FUN_10a2162a4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f645736,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a216360);
  (*pcVar4)();
}



/* Entry: 10a2163b8; end: 10a216523;  */

ulong FUN_10a2163b8(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a216524(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2164dc);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a2163b8(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a216524; end: 10a216553;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10a216524(ulong *param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar5 = (ulong *)&UNK_10f6337b7;
    FUN_10a00946c();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645f9f;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    *(undefined1 *)((long)puVar5 + 0x1ac) = 1;
    FUN_10a0050a8(puVar5 + 0x2d,&puStack_98);
    puVar6 = puVar5;
    FUN_10a0051e8(puVar5,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                  uStack_78._4_4_);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x0001098946ac(puVar5,puStack_98);
    }
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645fb6;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820(puVar5,&puStack_98,0);
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645fc9;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &DAT_10f57d18f;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645fd5;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645fdb;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645ff3;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f645ffe;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &DAT_10f2f9bc2;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f646009;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &UNK_10f64601e;
    uStack_78 = 0xffffffffffffffff;
    uStack_80 = 0x100000019;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a216820();
    FUN_10a003ff4();
    return puVar5;
  }
  puVar5 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    uStack_38 = CONCAT44(0xffffffff,(undefined4)uStack_38);
    puVar6 = puVar5;
    ___cxa_demangle(puVar5,0,0,(long)&uStack_38 + 4);
    if (uStack_38._4_4_ == 0) {
      func_0x000107c2b054(param_1,puVar6);
      _free(puVar6);
      return puVar6;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar6 = puVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar6) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar6 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar6 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
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
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar6;
  }
  if (puVar6 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar6;
    puVar3 = param_1;
    if (puVar6 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar6 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar6 | 7) + 1);
    }
    puVar3 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar6);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar6) = 0;
  return param_1;
}



/* Entry: 10a216554; end: 10a21681f;  */

void FUN_10a216554(ulong param_1)

{
  ulong uVar1;
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
  puStack_88 = &UNK_10f645f9f;
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
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645fb6;
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
  FUN_10a216820(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645fc9;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f57d18f;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645fd5;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645fdb;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645ff3;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645ffe;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f2f9bc2;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646009;
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
  FUN_10a216820();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64601e;
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
  FUN_10a216820();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a216820; end: 10a2168c3;  */

undefined8 * FUN_10a216820(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2168c4);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a2168c4; end: 10a216a53;  */

void FUN_10a2168c4(undefined8 param_1)

{
  undefined4 uStack_8c;
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
  puStack_88 = &UNK_10f646033;
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
  func_0x00010a2169fc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f645ff3;
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
  uStack_8c = 5;
  FUN_10a216a54(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64601e;
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
  uStack_8c = 10;
  FUN_10a216a54(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646043;
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
  uStack_8c = 0xd;
  FUN_10a216a54(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a216a54; end: 10a216aab;  */

ulong FUN_10a216a54(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a232e8c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a216aac; end: 10a216baf;  */

void FUN_10a216aac(undefined8 param_1)

{
  undefined4 uStack_8c;
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
  puStack_88 = &UNK_10f64604b;
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
  func_0x00010a216b58(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646062;
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
  uStack_8c = 0;
  FUN_10a216bb0(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a216bb0; end: 10a216c07;  */

ulong FUN_10a216bb0(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a232f00(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a216c08; end: 10a216dbb;  */

void FUN_10a216c08(ulong param_1)

{
  ulong uVar1;
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
  puStack_88 = &UNK_10f646074;
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
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64608a;
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
  FUN_10a216dbc(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64609a;
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
  FUN_10a216dbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f49decf;
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
  FUN_10a216dbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f6460ab;
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
  FUN_10a216dbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f4bbebb;
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
  FUN_10a216dbc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a216dbc; end: 10a216e5f;  */

undefined8 * FUN_10a216dbc(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a216e60);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a216e60; end: 10a216fdb;  */

void FUN_10a216e60(ulong param_1)

{
  ulong uVar1;
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
  puStack_88 = &UNK_10f6460b0;
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
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f3401ca;
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
  FUN_10a216fdc(param_1,&puStack_88,2);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6460bf;
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
  FUN_10a216fdc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6460cc;
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
  FUN_10a216fdc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646043;
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
  FUN_10a216fdc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a216fdc; end: 10a21707f;  */

undefined8 * FUN_10a216fdc(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a217080);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a217080; end: 10a2170df;  */

void FUN_10a217080(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = (long *)(param_2 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_10a0b4ec0(param_1,plVar1 + 2);
  }
  return;
}



/* Entry: 10a2170e0; end: 10a2171d7;  */

void FUN_10a2170e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a217100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x10))(param_4,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a217110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_2,param_3);
  return;
}



/* Entry: 10a2171d8; end: 10a217263;  */

void FUN_10a2171d8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
  }
  (*pcVar1)(&uStack_40,param_1);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a217264; end: 10a217293;  */

void FUN_10a217264(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  code *pcVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a217284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x38))(param_4,param_1,param_2,param_3);
    return;
  }
  pcVar1 = (code *)*param_3;
  lStack_30 = 0;
  uStack_28 = 0;
  lStack_38 = 0;
  FUN_10a05151c(&lStack_38,*param_2,param_2[1],param_2[1] - *param_2);
  (*pcVar1)(&lStack_38,param_3);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a217294; end: 10a21730f;  */

void FUN_10a217294(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  pcVar1 = (code *)*param_1;
  lStack_30 = 0;
  uStack_28 = 0;
  lStack_38 = 0;
  FUN_10a05151c(&lStack_38,*param_2,param_2[1],param_2[1] - *param_2);
  (*pcVar1)(&lStack_38,param_1);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a217310; end: 10a2176cf;  */

void FUN_10a217310(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined4 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a2173a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_4)();
      return;
    }
LAB_10a217628:
    ___stack_chk_fail();
LAB_10a21762c:
    plStack_78 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    uStack_c8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_c0,param_4 + 1);
    uStack_88 = (undefined4)param_3;
    lStack_80 = param_1[1];
    plStack_78 = (long *)param_1[2];
    if (plStack_78 == (long *)0x0) goto LAB_10a21762c;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_78 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        uStack_70 = *param_2;
        lStack_60 = param_2[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        *(undefined4 *)(puVar5 + 8) = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = 0x10a233264;
        pcStack_e0 = FUN_10a2331b8;
        puStack_d8 = puVar5;
        puStack_d0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_e0);
      }
      else {
        lStack_e8 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_e8);
        if (lStack_e8 != 0) {
          func_0x0001092af97c(&lStack_e8);
          goto LAB_10a217634;
        }
        puVar5 = (undefined8 *)0x88;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        *(undefined4 *)(puVar5 + 8) = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = FUN_10a233214;
        puVar5[0x10] = plVar8;
        pcStack_e0 = FUN_10a233188;
        puStack_d8 = puVar5;
        puStack_d0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_e0);
        __ZNSt13exception_ptrD1Ev(&lStack_e8);
      }
      lStack_e8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_e8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      (*(code *)*apuStack_c0[0])(apuStack_c0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_10a217628;
    }
  }
  FUN_10a043ecc();
LAB_10a217634:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a217638);
  (*pcVar4)();
}



/* Entry: 10a2176d0; end: 10a217717;  */

long FUN_10a2176d0(long param_1)

{
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  FUN_10a09e870(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a217718; end: 10a217ad3;  */

void FUN_10a217718(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a2177b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_4)();
      return;
    }
LAB_10a217a2c:
    ___stack_chk_fail();
LAB_10a217a30:
    plStack_78 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    uStack_c8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_c0,param_4 + 1);
    lStack_80 = param_1[1];
    plStack_78 = (long *)param_1[2];
    uStack_88 = param_3;
    if (plStack_78 == (long *)0x0) goto LAB_10a217a30;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_78 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        uStack_70 = *param_2;
        lStack_60 = param_2[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        puVar5[8] = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = 0x10a233390;
        pcStack_e0 = FUN_10a2332e4;
        puStack_d8 = puVar5;
        puStack_d0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_e0);
      }
      else {
        lStack_e8 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_e8);
        if (lStack_e8 != 0) {
          func_0x0001092af97c(&lStack_e8);
          goto LAB_10a217a38;
        }
        puVar5 = (undefined8 *)0x88;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        puVar5[8] = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = FUN_10a233340;
        puVar5[0x10] = plVar8;
        pcStack_e0 = (code *)0x10a2332b4;
        puStack_d8 = puVar5;
        puStack_d0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_e0);
        __ZNSt13exception_ptrD1Ev(&lStack_e8);
      }
      lStack_e8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_e8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      (*(code *)*apuStack_c0[0])(apuStack_c0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_10a217a2c;
    }
  }
  FUN_10a043ecc();
LAB_10a217a38:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a217a3c);
  (*pcVar4)();
}



/* Entry: 10a217ad4; end: 10a217b1b;  */

long FUN_10a217ad4(long param_1)

{
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  FUN_10a09e870(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a217b1c; end: 10a217edb;  */

void FUN_10a217b1c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined1 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a217bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_4)();
      return;
    }
LAB_10a217e34:
    ___stack_chk_fail();
LAB_10a217e38:
    plStack_78 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    uStack_c8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_c0,param_4 + 1);
    uStack_88 = (undefined1)param_3;
    lStack_80 = param_1[1];
    plStack_78 = (long *)param_1[2];
    if (plStack_78 == (long *)0x0) goto LAB_10a217e38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_78 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        uStack_70 = *param_2;
        lStack_60 = param_2[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        *(undefined1 *)(puVar5 + 8) = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = 0x10a2334bc;
        pcStack_e0 = FUN_10a233410;
        puStack_d8 = puVar5;
        puStack_d0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_e0);
      }
      else {
        lStack_e8 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_e8);
        if (lStack_e8 != 0) {
          func_0x0001092af97c(&lStack_e8);
          goto LAB_10a217e40;
        }
        puVar5 = (undefined8 *)0x88;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        *(undefined1 *)(puVar5 + 8) = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = FUN_10a23346c;
        puVar5[0x10] = plVar8;
        pcStack_e0 = (code *)0x10a2333e0;
        puStack_d8 = puVar5;
        puStack_d0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_e0);
        __ZNSt13exception_ptrD1Ev(&lStack_e8);
      }
      lStack_e8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_e8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      (*(code *)*apuStack_c0[0])(apuStack_c0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_10a217e34;
    }
  }
  FUN_10a043ecc();
LAB_10a217e40:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a217e44);
  (*pcVar4)();
}



/* Entry: 10a217edc; end: 10a217f23;  */

long FUN_10a217edc(long param_1)

{
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  FUN_10a09e870(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a217f24; end: 10a2182ef;  */

void FUN_10a217f24(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_2[3] == '\x01') {
    (**(code **)(*param_2 + 0x58))(param_1,param_2,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010a217fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_4)(param_4);
      return;
    }
LAB_10a218248:
    ___stack_chk_fail();
LAB_10a21824c:
    plStack_88 = (long *)0x0;
  }
  else {
    plVar8 = param_2;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    uStack_d8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_d0,param_4 + 1);
    uStack_98 = (undefined4)param_1;
    lStack_90 = param_2[1];
    plStack_88 = (long *)param_2[2];
    if (plStack_88 == (long *)0x0) goto LAB_10a21824c;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_88 != (long *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_80,*param_3,param_3[1]);
      }
      else {
        uStack_78 = param_3[1];
        uStack_80 = *param_3;
        lStack_70 = param_3[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        *puVar5 = uStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar5 + 1,apuStack_d0);
        puVar5[10] = plStack_88;
        puVar5[9] = lStack_90;
        *(undefined4 *)(puVar5 + 8) = uStack_98;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_80,uStack_78);
        }
        else {
          puVar5[0xc] = uStack_78;
          puVar5[0xb] = uStack_80;
          puVar5[0xd] = lStack_70;
        }
        puVar5[0xf] = 0x10a2335e8;
        pcStack_f0 = FUN_10a23353c;
        puStack_e8 = puVar5;
        puStack_e0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_f0);
      }
      else {
        lStack_f8 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_f8);
        if (lStack_f8 != 0) {
          func_0x0001092af97c(&lStack_f8);
          goto LAB_10a218254;
        }
        puVar5 = (undefined8 *)0x88;
        __Znwm();
        *puVar5 = uStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar5 + 1,apuStack_d0);
        puVar5[10] = plStack_88;
        puVar5[9] = lStack_90;
        *(undefined4 *)(puVar5 + 8) = uStack_98;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_80,uStack_78);
        }
        else {
          puVar5[0xc] = uStack_78;
          puVar5[0xb] = uStack_80;
          puVar5[0xd] = lStack_70;
        }
        puVar5[0xf] = FUN_10a233598;
        puVar5[0x10] = plVar8;
        pcStack_f0 = (code *)0x10a23350c;
        puStack_e8 = puVar5;
        puStack_e0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_f0);
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
      }
      lStack_f8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_f8);
      if (lStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      (*(code *)*apuStack_d0[0])(apuStack_d0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_10a218248;
    }
  }
  FUN_10a043ecc();
LAB_10a218254:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a218258);
  (*pcVar4)();
}



/* Entry: 10a2182f0; end: 10a218337;  */

long FUN_10a2182f0(long param_1)

{
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  FUN_10a09e870(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a218338; end: 10a21879f;  */

void FUN_10a218338(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_108;
  code *pcStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  char cStack_d1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x60))(&uStack_e8,param_1,param_2,param_3);
    FUN_10a2187a0(param_4,&uStack_e8);
    if (cStack_d1 < '\0') {
      __ZdlPv(uStack_e8);
    }
LAB_10a21865c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
LAB_10a2186a4:
    plStack_88 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    uStack_e8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(&puStack_e0,param_4 + 1);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_a8,*param_3,param_3[1]);
    }
    else {
      uStack_a0 = param_3[1];
      uStack_a8 = *param_3;
      lStack_98 = param_3[2];
    }
    lStack_90 = param_1[1];
    lVar6 = param_1[2];
    if (lVar6 == 0) goto LAB_10a2186a4;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_88 = (long *)lVar6;
    if (lVar6 != 0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_80,*param_2,param_2[1]);
      }
      else {
        uStack_78 = param_2[1];
        uStack_80 = *param_2;
        lStack_70 = param_2[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x90;
        __Znwm();
        *puVar5 = uStack_e8;
        (*(code *)puStack_e0[2])(puVar5 + 1,&puStack_e0);
        puVar5[0xc] = plStack_88;
        puVar5[0xb] = lStack_90;
        puVar5[9] = uStack_a0;
        puVar5[8] = uStack_a8;
        puVar5[10] = lStack_98;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xd,uStack_80,uStack_78);
        }
        else {
          puVar5[0xe] = uStack_78;
          puVar5[0xd] = uStack_80;
          puVar5[0xf] = lStack_70;
        }
        puVar5[0x11] = 0x10a233760;
        pcStack_100 = FUN_10a233668;
        puStack_f8 = puVar5;
        puStack_f0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_100);
      }
      else {
        lStack_108 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_108);
        if (lStack_108 != 0) {
          func_0x0001092af97c(&lStack_108);
          goto LAB_10a2186ac;
        }
        puVar5 = (undefined8 *)0x98;
        __Znwm();
        *puVar5 = uStack_e8;
        (*(code *)puStack_e0[2])(puVar5 + 1,&puStack_e0);
        puVar5[0xc] = plStack_88;
        puVar5[0xb] = lStack_90;
        puVar5[9] = uStack_a0;
        puVar5[8] = uStack_a8;
        puVar5[10] = lStack_98;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xd,uStack_80,uStack_78);
        }
        else {
          puVar5[0xe] = uStack_78;
          puVar5[0xd] = uStack_80;
          puVar5[0xf] = lStack_70;
        }
        puVar5[0x11] = FUN_10a233700;
        puVar5[0x12] = plVar8;
        pcStack_100 = (code *)0x10a233638;
        puStack_f8 = puVar5;
        puStack_f0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_100);
        __ZNSt13exception_ptrD1Ev(&lStack_108);
      }
      lStack_108 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_108);
      if (lStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_98 < 0) {
        __ZdlPv(uStack_a8);
      }
      (*(code *)*puStack_e0)(&puStack_e0);
      goto LAB_10a21865c;
    }
  }
  FUN_10a043ecc();
LAB_10a2186ac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2186b0);
  (*pcVar4)();
}



/* Entry: 10a2187a0; end: 10a218817;  */

void FUN_10a2187a0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  lStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  (*pcVar1)(&uStack_40,param_1);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a218818; end: 10a21886f;  */

long FUN_10a218818(long param_1)

{
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  FUN_10a09e870(param_1 + 0x58);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a218870; end: 10a218cb3;  */

void FUN_10a218870(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *apuStack_d0 [7];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x68))(&puStack_d8,param_1,param_2,param_3);
    FUN_10a218cb4(param_4,&puStack_d8);
    if (puStack_d8 != (undefined8 *)0x0) {
      apuStack_d0[0] = puStack_d8;
      __ZdlPv();
    }
LAB_10a218b74:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
LAB_10a218bb8:
    plStack_78 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    puStack_d8 = (undefined8 *)*param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_d0,param_4 + 1);
    lStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    FUN_10a05151c(&lStack_98,*param_3,param_3[1],param_3[1] - *param_3);
    lStack_80 = param_1[1];
    plStack_78 = (long *)param_1[2];
    if (plStack_78 == (long *)0x0) goto LAB_10a218bb8;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_78 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        uStack_70 = *param_2;
        lStack_60 = param_2[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x90;
        __Znwm();
        *puVar5 = puStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar5 + 1,apuStack_d0);
        puVar5[0xc] = plStack_78;
        puVar5[0xb] = lStack_80;
        puVar5[9] = lStack_90;
        puVar5[8] = lStack_98;
        puVar5[10] = uStack_88;
        lStack_98 = 0;
        lStack_90 = 0;
        uStack_88 = 0;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xd,uStack_70,uStack_68);
        }
        else {
          puVar5[0xe] = uStack_68;
          puVar5[0xd] = uStack_70;
          puVar5[0xf] = lStack_60;
        }
        puVar5[0x11] = 0x10a2338e8;
        pcStack_f0 = FUN_10a2337f0;
        puStack_e8 = puVar5;
        puStack_e0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_f0);
      }
      else {
        lStack_f8 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_f8);
        if (lStack_f8 != 0) {
          func_0x0001092af97c(&lStack_f8);
          goto LAB_10a218bc0;
        }
        puVar5 = (undefined8 *)0x98;
        __Znwm();
        *puVar5 = puStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar5 + 1,apuStack_d0);
        puVar5[0xc] = plStack_78;
        puVar5[0xb] = lStack_80;
        puVar5[9] = lStack_90;
        puVar5[8] = lStack_98;
        puVar5[10] = uStack_88;
        lStack_98 = 0;
        lStack_90 = 0;
        uStack_88 = 0;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xd,uStack_70,uStack_68);
        }
        else {
          puVar5[0xe] = uStack_68;
          puVar5[0xd] = uStack_70;
          puVar5[0xf] = lStack_60;
        }
        puVar5[0x11] = FUN_10a233888;
        puVar5[0x12] = plVar8;
        pcStack_f0 = (code *)0x10a2337c0;
        puStack_e8 = puVar5;
        puStack_e0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_f0);
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
      }
      lStack_f8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_f8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      (*(code *)*apuStack_d0[0])(apuStack_d0);
      goto LAB_10a218b74;
    }
  }
  FUN_10a043ecc();
LAB_10a218bc0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a218bc4);
  (*pcVar4)();
}



/* Entry: 10a218cb4; end: 10a218d2b;  */

void FUN_10a218cb4(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  lStack_38 = param_2[1];
  lStack_40 = *param_2;
  lStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  (*pcVar1)(&lStack_40,param_1);
  if (lStack_40 != 0) {
    lStack_38 = lStack_40;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a218d2c; end: 10a218e63;  */

long FUN_10a218d2c(long param_1)

{
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  FUN_10a09e870(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a218e64; end: 10a218f2b;  */

void FUN_10a218e64(long *param_1,long param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  char cStack_28;
  
  (**(code **)(*param_1 + 0x60))(&uStack_58,param_1,param_2,param_2 + 0x18);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  lStack_30 = lStack_48;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  cStack_28 = '\x01';
  FUN_10a09f1ec(param_2,&uStack_40);
  if ((cStack_28 == '\x01') && (lStack_30 < 0)) {
    __ZdlPv(uStack_40);
  }
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 10a218f2c; end: 10a218ff3;  */

void FUN_10a218f2c(long *param_1,long param_2)

{
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  (**(code **)(*param_1 + 0x68))(&lStack_60,param_1,param_2,param_2 + 0x18);
  lStack_38 = lStack_58;
  lStack_40 = lStack_60;
  uStack_30 = uStack_50;
  lStack_58 = 0;
  uStack_50 = 0;
  lStack_60 = 0;
  cStack_28 = '\x01';
  FUN_10a09f354(param_2,&lStack_40);
  if ((cStack_28 == '\x01') && (lStack_40 != 0)) {
    lStack_38 = lStack_40;
    __ZdlPv();
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a218ff4; end: 10a2190c3;  */

void FUN_10a218ff4(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f590(param_2);
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(code **)(param_2 + 0x80) = FUN_10a233948;
  puVar5 = (undefined8 *)(param_2 + 0x88);
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4350;
  puVar5 = (undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0x98) = 1;
  *(undefined8 *)(param_2 + 0x90) = 0x40;
  *(code **)(param_2 + 0xc0) = FUN_10a233a3c;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4368;
  *(code **)(param_2 + 0xd0) = FUN_10a2170e0;
  return;
}



/* Entry: 10a2190c4; end: 10a219193;  */

void FUN_10a2190c4(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f740(param_2);
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(code **)(param_2 + 0x88) = FUN_10a233ba4;
  puVar5 = (undefined8 *)(param_2 + 0x90);
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4388;
  puVar5 = (undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xa0) = 1;
  *(undefined8 *)(param_2 + 0x98) = 0x48;
  *(code **)(param_2 + 200) = FUN_10a233c98;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb43a0;
  *(undefined8 *)(param_2 + 0xd8) = 0x10a217114;
  return;
}



/* Entry: 10a219194; end: 10a219263;  */

void FUN_10a219194(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09f8ec(param_2);
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(code **)(param_2 + 0x78) = FUN_10a233e00;
  puVar5 = (undefined8 *)(param_2 + 0x80);
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb43c0;
  puVar5 = (undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0x90) = 1;
  *(undefined8 *)(param_2 + 0x88) = 0x50;
  *(code **)(param_2 + 0xb8) = FUN_10a233ef4;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb43d8;
  *(undefined8 *)(param_2 + 200) = 0x10a217148;
  return;
}



/* Entry: 10a219264; end: 10a219333;  */

void FUN_10a219264(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_2 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fa98(param_2);
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(code **)(param_2 + 0x80) = FUN_10a23405c;
  puVar5 = (undefined8 *)(param_2 + 0x88);
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb43f8;
  puVar5 = (undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0x98) = 1;
  *(undefined8 *)(param_2 + 0x90) = 0x58;
  *(code **)(param_2 + 0xc0) = FUN_10a234150;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4410;
  *(undefined8 *)(param_2 + 0xd0) = 0x10a21717c;
  return;
}



/* Entry: 10a219334; end: 10a219403;  */

void FUN_10a219334(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_2 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fcc4(param_2);
  *(undefined1 *)(param_2 + 0x70) = 0;
  *(code **)(param_2 + 0xa8) = FUN_10a2342c0;
  puVar5 = (undefined8 *)(param_2 + 0xb0);
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4430;
  puVar5 = (undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xc0) = 1;
  *(undefined8 *)(param_2 + 0xb8) = 0x60;
  *(code **)(param_2 + 0xe8) = FUN_10a234404;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4448;
  *(undefined8 *)(param_2 + 0xf8) = 0x10a2171a8;
  return;
}



/* Entry: 10a219404; end: 10a2194d3;  */

void FUN_10a219404(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_2 + 0x70);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a09fedc(param_2);
  *(undefined1 *)(param_2 + 0x70) = 0;
  *(code **)(param_2 + 0xa8) = FUN_10a23456c;
  puVar5 = (undefined8 *)(param_2 + 0xb0);
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4468;
  puVar5 = (undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xc0) = 1;
  *(undefined8 *)(param_2 + 0xb8) = 0x68;
  *(code **)(param_2 + 0xe8) = FUN_10a2346b0;
  (**(code **)*puVar5)(puVar5);
  *puVar5 = &PTR_FUN_110bb4480;
  *(code **)(param_2 + 0xf8) = FUN_10a217264;
  return;
}



/* Entry: 10a2194d4; end: 10a219573;  */

void FUN_10a2194d4(undefined8 param_1,long *param_2)

{
  undefined1 uStack_40;
  undefined7 uStack_3f;
  char cStack_29;
  char cStack_28;
  
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a219508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x90))(param_2,param_1);
    return;
  }
  uStack_40 = 0;
  cStack_28 = '\0';
  FUN_10a09f1ec(param_1,&uStack_40);
  if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
    __ZdlPv(CONCAT71(uStack_3f,uStack_40));
  }
  return;
}



/* Entry: 10a219574; end: 10a2196fb;  */

void FUN_10a219574(undefined1 *param_1,char *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  puVar4 = (undefined8 *)(param_1 + 8);
  *(undefined2 *)puVar4 = 0x30;
  param_1[0x1f] = 1;
  *param_1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar4,param_2);
  uVar1 = *(ulong *)(param_2 + 8);
  pcVar3 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar1 = (ulong)(byte)param_2[0x17];
    pcVar3 = param_2;
  }
  if (uVar1 != 0) {
    if (*pcVar3 == '#') {
      pcVar3 = pcVar3 + 1;
      *param_1 = 1;
    }
    func_0x000107c2b054(&uStack_48,pcVar3);
    puVar2 = &uStack_48;
    __ZNSt3__14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar2,0,10);
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    if (puVar2 != (undefined8 *)0x0) {
      __ZNSt3__19to_stringEy(&uStack_48,puVar2);
      if ((char)param_1[0x1f] < '\0') {
        __ZdlPv(*puVar4);
      }
      *(undefined8 *)(param_1 + 0x10) = uStack_40;
      *puVar4 = uStack_48;
      *(ulong *)(param_1 + 0x18) = CONCAT17(cStack_31,uStack_38);
      return;
    }
  }
  if ((char)param_1[0x1f] < '\0') {
    __ZdlPv(*puVar4);
  }
  *(undefined8 *)(param_1 + 8) = 0x30;
  param_1[0x1f] = 1;
  return;
}



/* Entry: 10a2196fc; end: 10a2199bb;  */

long FUN_10a2196fc(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xd0))();
  (*(code *)**(undefined8 **)(param_1 + 0x90))((undefined8 *)(param_1 + 0x90));
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(char *)(param_1 + 0x77) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(param_1 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10a2199bc; end: 10a219ac7;  */

void FUN_10a2199bc(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6462f7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64630a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a219ac8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64630b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64630a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10a219b20(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f646318;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64630a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10a219b20(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a219ac8; end: 10a219b1f;  */

ulong FUN_10a219ac8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a219b20; end: 10a219b77;  */

ulong FUN_10a219b20(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a234ed0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a219b78; end: 10a219cff;  */

undefined *** FUN_10a219b78(long param_1,undefined8 **param_2,undefined *param_3)

{
  undefined ***pppuVar1;
  byte *pbVar2;
  code *pcVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = (code *)&UNK_1053a6a3c;
  appuStack_80[0] = &PTR_DAT_110ae9180;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    *(undefined1 *)(param_1 + 200) = 1;
    pcVar3 = *(code **)(param_1 + 0x88);
    plVar4 = (long *)(param_1 + 0x90);
    (**(code **)(*plVar4 + 0x10))(apuStack_c0,plVar4);
    *(undefined **)(param_1 + 0x88) = &UNK_1053a6a3c;
    (**(code **)*plVar4)(plVar4);
    *plVar4 = (long)&PTR_DAT_110ae9180;
    pcStack_88 = pcVar3;
    (*(code *)*appuStack_80[0])(appuStack_80);
    param_2 = apuStack_c0;
    (*(code *)apuStack_c0[0][2])(appuStack_80);
    (*(code *)*apuStack_c0[0])(apuStack_c0);
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x78) = 0;
    __ZNSt3__15mutex6unlockEv(param_1);
    ppuVar6 = appuStack_80[0];
    if (*(char *)(appuStack_80[0] + 1) == '\x01') {
      (*pcStack_88)(&pcStack_88);
      ppuVar6 = appuStack_80[0];
    }
  }
  else {
    __ZNSt3__15mutex6unlockEv(param_1);
    ppuVar6 = &PTR_DAT_110ae9180;
  }
  pppuVar1 = appuStack_80;
  (*(code *)*ppuVar6)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  __Unwind_Resume();
  ppuVar6 = (undefined **)*param_2;
  pppuVar1[1] = (undefined **)param_2[1];
  *pppuVar1 = ppuVar6;
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  if (*pppuVar1 == (undefined **)0x0) {
    pppuVar1[0xb] = (undefined **)0x0;
    pppuVar1[10] = (undefined **)0x0;
    pppuVar1[0xd] = (undefined **)0x0;
    pppuVar1[0xc] = (undefined **)0x0;
    pppuVar1[7] = (undefined **)0x0;
    pppuVar1[6] = (undefined **)0x0;
    pppuVar1[9] = (undefined **)0x0;
    pppuVar1[8] = (undefined **)0x0;
    pppuVar1[3] = (undefined **)0x0;
    pppuVar1[2] = (undefined **)0x0;
    pppuVar1[5] = (undefined **)0x0;
    pppuVar1[4] = (undefined **)0x0;
  }
  else {
    FUN_10a08f044(pppuVar1 + 2);
  }
  pppuVar5 = pppuVar1 + 0xf;
  *(undefined2 *)pppuVar5 = 0;
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  pppuVar1[0xe] = (undefined **)*ppuVar6;
  *ppuVar6 = param_3;
  pbVar2 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar2 >> 5 & 1) != 0) {
    FUN_10a22af88(pppuVar5);
    FUN_10a08d37c(pppuVar5);
    *(undefined1 *)((long)pppuVar1 + 0x79) = 1;
  }
  return pppuVar1;
}



/* Entry: 10a219d00; end: 10a219de7;  */

long * FUN_10a219d00(long *param_1,long *param_2,undefined *param_3)

{
  undefined **ppuVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar4;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 == 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  else {
    FUN_10a08f044(param_1 + 2);
  }
  plVar3 = param_1 + 0xf;
  *(undefined2 *)plVar3 = 0;
  ppuVar1 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  param_1[0xe] = (long)*ppuVar1;
  *ppuVar1 = param_3;
  pbVar2 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar2 >> 5 & 1) != 0) {
    FUN_10a22af88(plVar3);
    FUN_10a08d37c(plVar3);
    *(undefined1 *)((long)param_1 + 0x79) = 1;
  }
  return param_1;
}



/* Entry: 10a219de8; end: 10a219e8f;  */

undefined8 FUN_10a219de8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = *(long **)(param_2 + 0x18);
  uStack_30 = *(undefined8 *)(param_2 + 0x10);
  if (*(long *)(param_2 + 0x18) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x18) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a219d00(param_1,&uStack_30,*(undefined8 *)(param_2 + 0x830));
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
  return param_1;
}



/* Entry: 10a219e90; end: 10a21b9af;  */

long ** FUN_10a219e90(long **param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                     undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long **pplVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined1 *puVar8;
  long *plVar9;
  long **pplVar10;
  long **pplVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auVar25 [16];
  long lStack_280;
  long *plStack_278;
  long lStack_270;
  long *plStack_268;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  long **pplStack_1b8;
  long **pplStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined **ppuStack_198;
  long *plStack_190;
  long lStack_188;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long *)0x0;
  func_0x00010ae02ecc(0,0x17d);
  ppuVar18 = &PTR_PTR_113300d40;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar18,&PTR_PTR_113300d40);
  FUN_10a1c5db8(param_4 + 2);
  FUN_10ad053f8(param_4 + 2);
  FUN_10a09efac(0x1138355a0,0);
  FUN_10aab7884(param_4 + 2);
  FUN_10ad06024(param_4 + 2);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    puVar8 = (undefined1 *)0x113836450;
    FUN_10a08f69c();
    func_0x00010ae06f08(1,4,&UNK_10f6460db,&UNK_10f646114,0x52,&UNK_10f646185,param_7,param_8,
                        *puVar8);
  }
  FUN_10ad05a2c(param_4 + 2);
  FUN_10a08f794(param_4 + 2);
  FUN_10a1c6450(param_4 + 2);
  FUN_10a1c5f28(param_4 + 2);
  FUN_10a1c62f4(param_4 + 2);
  FUN_10a1c6174(param_4 + 2);
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f0cc(0x1137eac78,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x1137eac78);
  }
  puVar8 = (undefined1 *)0x1137eac78;
  FUN_10a08f69c();
  func_0x00010ae02ecc(0,*puVar8);
  ppuVar18 = &PTR_PTR_113300de0;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar18,&PTR_PTR_113300de0);
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f0cc(0x113300b40,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x113300b40);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    puVar8 = (undefined1 *)0x113300b40;
    FUN_10a08f69c();
    func_0x00010ae06f08(1,4,&UNK_10f6460db,&UNK_10f646114,0x6b,&UNK_10f6461ae,param_7,param_8,
                        *puVar8);
  }
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f0cc(0x1138351d0,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x1138351d0);
  }
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x1138364b0;
    FUN_10a09f0cc(0x1138364b0,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x1138364b0);
  }
  FUN_10a8bb1fc();
  func_0x00010a8baeec(*plVar9,param_4 + 2);
  FUN_10a2194d4(0x1138347a0,param_4[2]);
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f0cc(0x1137eac18,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x1137eac18);
  }
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09efac(0x1138363e8,0);
  }
  else {
    (**(code **)(*plVar9 + 0x70))(plVar9,0x1138363e8);
  }
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f0cc(0x113835230,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x113835230);
  }
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f0cc(0x113835ee8,0);
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,0x113835ee8);
  }
  plVar9 = (long *)param_4[2];
  if (plVar9 == (long *)0x0) {
    FUN_10a09f844(0x1137eacd8,0);
  }
  else {
    (**(code **)(*plVar9 + 0xb0))(plVar9,0x1137eacd8);
  }
  lVar24 = param_4[2];
  do {
    bVar6 = bRam0000000113300ba8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x113300ba8,0x10);
    if (bVar5) {
      bRam0000000113300ba8 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar6 & 1) != 0) {
    do {
    } while ((bRam0000000113300ba8 & 1) != 0);
    do {
      bVar6 = bRam0000000113300ba8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x113300ba8,0x10);
      if (bVar5) {
        bRam0000000113300ba8 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (cRam0000000113300bd0 == '\x01') {
    if (cRam0000000113300bcf < '\0') {
      __ZdlPv(uRam0000000113300bb8);
    }
    cRam0000000113300bd0 = '\0';
  }
  FUN_10a2194d4(0x113300bd8,lVar24);
  bRam0000000113300ba8 = 0;
  func_0x00010a219794(param_4 + 2);
  pplVar10 = (long **)0x58;
  __Znwm();
  pplVar10[1] = (long *)0x0;
  pplVar10[2] = (long *)0x0;
  pplVar11 = pplVar10 + 3;
  *pplVar10 = (long *)&PTR_FUN_110bb44f8;
  FUN_10a0f3390();
  lStack_1c8 = *param_2;
  pplStack_1b8 = pplVar11;
  pplStack_1b0 = pplVar10;
  if (lStack_1c8 == 0) {
    plVar9 = (long *)0x180;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar15 = plVar9 + 3;
    *plVar9 = (long)&PTR_FUN_110bb5498;
    FUN_10a08e6b4(plVar15,0);
    plStack_160 = plVar15;
    plStack_158 = plVar9;
    FUN_10a21b9b0(param_2,&plStack_160);
    plVar9 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar15 = plStack_158 + 1;
      do {
        lVar24 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    lStack_1c8 = *param_2;
  }
  plStack_1c0 = (long *)param_2[1];
  if (plStack_1c0 != (long *)0x0) {
    plVar9 = plStack_1c0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a219d00(&plStack_160,&lStack_1c8,pplStack_1b8);
  plVar9 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    plVar15 = plStack_1c0 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = (long *)*param_2;
  if (plVar9 == (long *)0x0) {
    uVar19 = 0;
  }
  else {
    lVar24 = 0;
    if ((char)plVar9[0x2c] == '\0') {
      lVar24 = 8;
    }
    uVar19 = **(undefined8 **)(*plVar9 + lVar24);
  }
  FUN_10ad05ee0(param_4 + 2,uVar19);
  lVar12 = 0x9b0;
  __Znwm();
  _bzero();
  *(undefined8 *)(lVar12 + 0xb8) = 0;
  *(undefined8 *)(lVar12 + 0xb0) = 0;
  *(undefined4 *)(lVar12 + 0x40) = 0xffffffff;
  auVar25 = NEON_fmov(0xbf800000,4);
  *(long *)(lVar12 + 0x54) = auVar25._8_8_;
  *(long *)(lVar12 + 0x4c) = auVar25._0_8_;
  *(undefined8 *)(lVar12 + 0x5c) = 0x7fc000007fc00000;
  *(undefined4 *)(lVar12 + 100) = 0x3f800000;
  *(undefined8 *)(lVar12 + 0x68) = 0;
  *(undefined8 *)(lVar12 + 0x70) = 0;
  *(undefined4 *)(lVar12 + 0x78) = 0x3f800000;
  *(undefined8 *)(lVar12 + 0x84) = 0;
  *(undefined8 *)(lVar12 + 0x7c) = 0;
  *(undefined4 *)(lVar12 + 0x8c) = 0x3f800000;
  *(undefined8 *)(lVar12 + 0x90) = 0;
  *(undefined8 *)(lVar12 + 0x98) = 0;
  *(undefined4 *)(lVar12 + 0xa0) = 0x3f800000;
  *(undefined4 *)(lVar12 + 0xa8) = 0;
  *(undefined8 *)(lVar12 + 0xf0) = 0;
  *(undefined8 *)(lVar12 + 0xe8) = 0;
  *(undefined8 *)(lVar12 + 200) = 0;
  *(undefined8 *)(lVar12 + 0xc0) = 0;
  *(undefined8 *)(lVar12 + 0xd8) = 0;
  *(undefined8 *)(lVar12 + 0xd0) = 0;
  *(undefined8 *)(lVar12 + 0x100) = 0;
  *(undefined8 *)(lVar12 + 0xf8) = 0;
  *(undefined8 *)(lVar12 + 0x108) = 0;
  *(undefined4 *)(lVar12 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar12 + 0x118) = 0;
  *(undefined8 *)(lVar12 + 0x120) = 0;
  *(undefined8 *)(lVar12 + 0x138) = 0;
  *(undefined8 *)(lVar12 + 0x130) = 0;
  *(undefined8 *)(lVar12 + 0x148) = 0;
  *(undefined8 *)(lVar12 + 0x140) = 0;
  *(undefined8 *)(lVar12 + 0x158) = 0;
  *(undefined8 *)(lVar12 + 0x150) = 0;
  *(undefined8 *)(lVar12 + 0x168) = 0;
  *(undefined8 *)(lVar12 + 0x160) = 0;
  *(undefined2 *)(lVar12 + 0x170) = 0;
  FUN_10ad3e720(lVar12 + 0x178);
  *(undefined4 *)(lVar12 + 0x188) = 0xffffffff;
  *(undefined8 *)(lVar12 + 0x218) = 0;
  *(undefined8 *)(lVar12 + 0x228) = 0;
  *(undefined8 *)(lVar12 + 0x220) = 0;
  *(undefined8 *)(lVar12 + 0x194) = 0;
  *(undefined8 *)(lVar12 + 0x18c) = 0;
  *(undefined8 *)(lVar12 + 0x1a4) = 0;
  *(undefined8 *)(lVar12 + 0x19c) = 0;
  *(undefined8 *)(lVar12 + 0x1b4) = 0;
  *(undefined8 *)(lVar12 + 0x1ac) = 0;
  *(undefined8 *)(lVar12 + 0x1c4) = 0;
  *(undefined8 *)(lVar12 + 0x1bc) = 0;
  *(undefined8 *)(lVar12 + 0x1d4) = 0;
  *(undefined8 *)(lVar12 + 0x1cc) = 0;
  *(undefined8 *)(lVar12 + 0x1e4) = 0;
  *(undefined8 *)(lVar12 + 0x1dc) = 0;
  *(undefined8 *)(lVar12 + 0x1e9) = 0;
  *(undefined4 *)(lVar12 + 0x20c) = 0;
  *(undefined8 *)(lVar12 + 500) = 0;
  *(undefined8 *)(lVar12 + 0x204) = 0;
  *(undefined8 *)(lVar12 + 0x1fc) = 0;
  *(long *)(lVar12 + 0x210) = lVar12 + 0x218;
  lVar24 = lVar12 + 0x240;
  FUN_10a4ca448();
  *(undefined2 *)(lVar12 + 2000) = 0;
  *(undefined4 *)(lVar12 + 0x7d4) = 0;
  *(undefined2 *)(lVar12 + 0x7d8) = 1;
  *(undefined1 *)(lVar12 + 0x7da) = 0;
  *(undefined8 *)(lVar12 + 0x7e0) = 0x32aaaba7;
  *(undefined8 *)(lVar12 + 0x7f0) = 0;
  *(undefined8 *)(lVar12 + 0x7e8) = 0;
  *(undefined8 *)(lVar12 + 0x800) = 0;
  *(undefined8 *)(lVar12 + 0x7f8) = 0;
  *(undefined8 *)(lVar12 + 0x810) = 0;
  *(undefined8 *)(lVar12 + 0x808) = 0;
  *(undefined8 *)(lVar12 + 0x820) = 0;
  *(undefined8 *)(lVar12 + 0x818) = 0;
  *(undefined8 *)(lVar12 + 0x830) = 0;
  *(undefined8 *)(lVar12 + 0x828) = 0;
  *(undefined8 *)(lVar12 + 0x840) = 0;
  *(undefined8 *)(lVar12 + 0x838) = 0;
  *(undefined8 *)(lVar12 + 0x850) = 0;
  *(undefined8 *)(lVar12 + 0x848) = 0;
  *(undefined8 *)(lVar12 + 0x860) = 0;
  *(undefined8 *)(lVar12 + 0x858) = 0;
  *(undefined8 *)(lVar12 + 0x870) = 0;
  *(undefined8 *)(lVar12 + 0x868) = 0;
  *(undefined8 *)(lVar12 + 0x880) = 0;
  *(undefined8 *)(lVar12 + 0x878) = 0;
  *(undefined8 *)(lVar12 + 0x890) = 0;
  *(undefined8 *)(lVar12 + 0x888) = 0;
  *(undefined8 *)(lVar12 + 0x8a0) = 0;
  *(undefined8 *)(lVar12 + 0x898) = 0;
  *(undefined8 *)(lVar12 + 0x8b0) = 0;
  *(undefined8 *)(lVar12 + 0x8a8) = 0;
  *(undefined8 *)(lVar12 + 0x8c0) = 0;
  *(undefined8 *)(lVar12 + 0x8b8) = 0;
  *(undefined ***)(lVar12 + 0x8c8) = &PTR_FUN_110bb44c8;
  *(undefined8 *)(lVar12 + 0x8d8) = 0;
  *(undefined8 *)(lVar12 + 0x8d0) = 0;
  *(undefined8 *)(lVar12 + 0x8e8) = 0;
  *(undefined8 *)(lVar12 + 0x8e0) = 0;
  *(undefined8 *)(lVar12 + 0x8f8) = 0;
  *(undefined8 *)(lVar12 + 0x8f0) = 0;
  *(undefined8 *)(lVar12 + 0x900) = 0x32aaaba7;
  *(undefined8 *)(lVar12 + 0x910) = 0;
  *(undefined8 *)(lVar12 + 0x908) = 0;
  *(undefined8 *)(lVar12 + 0x920) = 0;
  *(undefined8 *)(lVar12 + 0x918) = 0;
  *(undefined8 *)(lVar12 + 0x930) = 0;
  *(undefined8 *)(lVar12 + 0x928) = 0;
  *(undefined8 *)(lVar12 + 0x938) = 0;
  *(undefined8 *)(lVar12 + 0x940) = 0x3cb0b1bb;
  *(undefined8 *)(lVar12 + 0x950) = 0;
  *(undefined8 *)(lVar12 + 0x948) = 0;
  *(undefined8 *)(lVar12 + 0x960) = 0;
  *(undefined8 *)(lVar12 + 0x958) = 0;
  *(undefined8 *)(lVar12 + 0x970) = 0;
  *(undefined8 *)(lVar12 + 0x968) = 0;
  *(undefined8 *)(lVar12 + 0x980) = 0;
  *(undefined8 *)(lVar12 + 0x978) = 0;
  *(undefined8 *)(lVar12 + 0x990) = 0;
  *(undefined8 *)(lVar12 + 0x988) = 0;
  *(undefined8 *)(lVar12 + 0x998) = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(lVar12 + 0x9a0) = lVar24;
  pplVar10 = param_1;
  func_0x00010a235084(param_1,lVar12);
  iVar7 = (int)pplVar10;
  FUN_10ad055a0();
  if (iVar7 == 0) {
    FUN_10ad008d8(&uStack_e0);
  }
  else {
    puVar13 = (undefined8 *)0x28;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_DAT_110bb4548;
    uStack_e0 = puVar13 + 3;
    *uStack_e0 = (long)&PTR_FUN_110c6dec0;
    puVar14 = (undefined8 *)0x90;
    __Znwm();
    puVar14[0xd] = 0;
    puVar14[0xc] = 0;
    puVar14[0xf] = 0;
    puVar14[0xe] = 0;
    puVar14[0x11] = 0;
    puVar14[0x10] = 0;
    *puVar14 = 0x32aaaba7;
    puVar14[2] = 0;
    puVar14[1] = 0;
    puVar14[4] = 0;
    puVar14[3] = 0;
    puVar14[6] = 0;
    puVar14[5] = 0;
    puVar14[8] = 0;
    puVar14[7] = 0;
    puVar14[10] = 0;
    puVar14[9] = 0;
    puVar14[0xb] = 0;
    *(undefined4 *)(puVar14 + 0xc) = 0x3f800000;
    puVar14[0xe] = 0;
    puVar14[0xd] = 0;
    puVar14[0x10] = 0;
    puVar14[0xf] = 0;
    *(undefined4 *)(puVar14 + 0x11) = 0x3f800000;
    puVar13[4] = puVar14;
    uStack_d8 = SUB84(puVar13,0);
    uStack_d4 = (undefined4)((ulong)puVar13 >> 0x20);
  }
  func_0x00010a21ba14(*param_1 + 6,&uStack_e0);
  plVar9 = (long *)CONCAT44(uStack_d4,uStack_d8);
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a21b9b0(*param_1 + 2,param_2);
  plVar9 = (long *)*param_3;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
    if (plVar9 == (long *)0x0) {
      lVar24 = *param_3;
      lVar12 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      uStack_e0._0_4_ = (int)lVar24;
      uStack_e0._4_4_ = (undefined4)((ulong)lVar24 >> 0x20);
      uStack_1f8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_d8 = 0x9896774;
      uStack_d4 = 1;
      uStack_d0 = 0x10b17068;
      uStack_cc = 1;
      uStack_c0 = (undefined4)lVar12;
      uStack_bc = (undefined4)((ulong)lVar12 >> 0x20);
      plVar15 = (long *)0xd0;
      uStack_c8._0_4_ = (int)uStack_e0;
      uStack_c8._4_4_ = uStack_e0._4_4_;
      __Znwm();
      plVar15[2] = 0;
      plVar9 = plVar15 + 3;
      *plVar15 = (long)&PTR_DAT_110ae90f0;
      plVar15[1] = 0;
      FUN_109d228cc(plVar9,&UNK_10f646322,0x14,1,&uStack_e0);
      plStack_1a8 = plVar9;
      plStack_1a0 = plVar15;
      func_0x00010a21ba78(*param_1,&plStack_1a8);
      plVar9 = plStack_1a0;
      if (plStack_1a0 != (long *)0x0) {
        plVar15 = plStack_1a0 + 1;
        do {
          lVar24 = *plVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x0001092ba41c(&uStack_e0);
      plVar9 = plStack_1f0;
      if (plStack_1f0 != (long *)0x0) {
        plVar15 = plStack_1f0 + 1;
        do {
          lVar24 = *plVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
      plStack_208 = (long *)plVar9[7];
      if (plStack_208 != (long *)0x0) {
        plVar9 = plStack_208 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_1a8 = (long *)*param_3;
      lStack_188 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      uStack_1e8 = 0;
      plStack_1e0 = (long *)0x0;
      plStack_1a0 = (long *)&UNK_109896774;
      ppuStack_198 = &PTR_DAT_110b17068;
      plVar9 = (long *)0xd0;
      plStack_190 = plStack_1a8;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_DAT_110ae90f0;
      puVar13 = (undefined8 *)0x158;
      __Znwm();
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar14 = puVar13 + 3;
      *puVar13 = &PTR_FUN_110b3f488;
      FUN_109d2079c(puVar14,1,&plStack_1a8);
      uStack_e0._0_4_ = (int)puVar14;
      uStack_e0._4_4_ = (undefined4)((ulong)puVar14 >> 0x20);
      uStack_d8 = 0x9896774;
      uStack_d4 = 1;
      uStack_d0 = 0x10b17068;
      uStack_cc = 1;
      uStack_c0 = SUB84(puVar13,0);
      uStack_bc = (undefined4)((ulong)puVar13 >> 0x20);
      uStack_c8._0_4_ = (int)uStack_e0;
      uStack_c8._4_4_ = uStack_e0._4_4_;
      func_0x000109d18e28(plVar9 + 3,&UNK_10f646322,0x14,&uStack_e0,&plStack_208);
      func_0x0001092ba41c(&uStack_e0);
      plStack_1d8 = plVar9 + 3;
      plStack_1d0 = plVar9;
      func_0x00010a21ba78(*param_1,&plStack_1d8);
      plVar9 = plStack_1d0;
      if (plStack_1d0 != (long *)0x0) {
        plVar15 = plStack_1d0 + 1;
        do {
          lVar24 = *plVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x0001092ba41c(&plStack_1a8);
      plVar9 = plStack_1e0;
      if (plStack_1e0 != (long *)0x0) {
        plVar15 = plStack_1e0 + 1;
        do {
          lVar24 = *plVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_208;
      if (plStack_208 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_208 + 1);
        do {
          uVar21 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar21 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar21 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          do {
            uVar21 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar21 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar21 - 1 == 0) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
    }
    plVar9 = *param_1;
    lVar24 = *plVar9;
    func_0x00010ad44ea4(plVar9[0x30] + 0x530,&UNK_10f6a6e63,lVar24);
    *(long *)(plVar9[0x30] + 0x5f0) = lVar24;
  }
  plVar9 = *param_1;
  plVar9[0x46] = *param_4;
  func_0x00010a0f3894(plVar9 + 0x10c,param_4 + 2);
  func_0x00010a21badc(*param_1 + 0x106,&pplStack_1b8);
  lVar24 = (*param_1)[0x106] + 0x10;
  func_0x00010a0f3894(lVar24,*param_1 + 0x10c);
  _qos_class_self();
  func_0x000109d1d5dc(&uStack_e0,&UNK_10f646337,lVar24,0xfffffff1);
  puVar13 = (undefined8 *)0x48;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &PTR_DAT_110b3f038;
  plVar16 = puVar13 + 3;
  *plVar16 = (long)&PTR_FUN_110b3ef60;
  puVar13[4] = plVar16;
  puVar13[5] = 0;
  lVar24 = CONCAT44(uStack_d4,uStack_d8);
  puVar13[6] = lVar24;
  puVar13[7] = uStack_e0;
  puVar13[8] = lVar24;
  plVar9 = plVar16;
  plVar15 = puVar13;
  if (lVar24 != 0) {
    _dispatch_retain(lVar24);
    plStack_1d8 = plVar16;
    plStack_1d0 = puVar13;
    _dispatch_release(lVar24);
    plVar9 = plStack_1d8;
    plVar15 = plStack_1d0;
  }
  plStack_1d0 = plVar15;
  plStack_1d8 = plVar9;
  plVar9 = (long *)0xd0;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_110ae90f0;
  plStack_1d8 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  uStack_d8 = 0x9896774;
  uStack_d4 = 1;
  uStack_d0 = 0x10b17068;
  uStack_cc = 1;
  uStack_c0 = SUB84(puVar13,0);
  uStack_bc = (undefined4)((ulong)puVar13 >> 0x20);
  uStack_e0 = plVar16;
  uStack_c8 = plVar16;
  func_0x000109d18d1c(plVar9 + 3,&UNK_10f646351,0x1a,&uStack_e0);
  func_0x0001092ba41c(&uStack_e0);
  plStack_1a8 = plVar9 + 3;
  plStack_1a0 = plVar9;
  func_0x00010a21ba78(*param_1 + 4,&plStack_1a8);
  plVar9 = plStack_1a0;
  if (plStack_1a0 != (long *)0x0) {
    plVar15 = plStack_1a0 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  lVar24 = (*param_1)[4];
  lVar12 = (*param_1)[5];
  if (lVar12 != 0) {
    plVar9 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_e0._0_4_ = (int)lVar24;
  uStack_e0._4_4_ = (undefined4)((ulong)lVar24 >> 0x20);
  uStack_d8 = 0x9896774;
  uStack_d4 = 1;
  uStack_d0 = 0x10b17068;
  uStack_cc = 1;
  uStack_c0 = (undefined4)lVar12;
  uStack_bc = (undefined4)((ulong)lVar12 >> 0x20);
  plVar15 = (long *)0xd0;
  uStack_c8._0_4_ = (int)uStack_e0;
  uStack_c8._4_4_ = uStack_e0._4_4_;
  __Znwm();
  plVar15[1] = 0;
  plVar15[2] = 0;
  plVar9 = plVar15 + 3;
  *plVar15 = (long)&PTR_DAT_110ae90f0;
  FUN_109d228cc(plVar9,&UNK_10f64636c,0xe,2,&uStack_e0);
  plStack_208 = plVar9;
  plStack_200 = plVar15;
  func_0x0001092ba41c(&uStack_e0);
  lVar24 = (*param_1)[4];
  lVar12 = (*param_1)[5];
  if (lVar12 != 0) {
    plVar16 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_e0._0_4_ = (int)lVar24;
  uStack_e0._4_4_ = (undefined4)((ulong)lVar24 >> 0x20);
  uStack_d8 = 0x9896774;
  uStack_d4 = 1;
  uStack_d0 = 0x10b17068;
  uStack_cc = 1;
  uStack_c0 = (undefined4)lVar12;
  uStack_bc = (undefined4)((ulong)lVar12 >> 0x20);
  plVar16 = (long *)0xd0;
  uStack_c8._0_4_ = (int)uStack_e0;
  uStack_c8._4_4_ = uStack_e0._4_4_;
  __Znwm();
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&PTR_DAT_110ae90f0;
  FUN_109d228cc(plVar16 + 3,&UNK_10f64637b,0xd,2,&uStack_e0);
  func_0x0001092ba41c(&uStack_e0);
  plStack_208 = (long *)0x0;
  plStack_200 = (long *)0x0;
  uStack_228 = 0;
  plStack_220 = (long *)0x0;
  plStack_258 = plVar16 + 3;
  plStack_250 = plVar16;
  plStack_248 = plVar9;
  plStack_240 = plVar15;
  FUN_10a0f3530((*param_1)[0x106],&plStack_248,&plStack_258);
  plVar9 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    plVar15 = plStack_250 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    plVar15 = plStack_240 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = *param_1;
  lStack_270 = plVar9[4];
  plStack_268 = (long *)plVar9[5];
  if (plVar9[5] != 0) {
    plVar15 = (long *)(plVar9[5] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10ad44f04(plVar9[0x30] + 0x520,&lStack_270);
  plVar9 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar15 = plStack_268 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = *param_1;
  lStack_280 = plVar9[6];
  plStack_278 = (long *)plVar9[7];
  if (plVar9[7] != 0) {
    plVar15 = (long *)(plVar9[7] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010a21ba14(plVar9[0x30] + 0x5f8,&lStack_280);
  plVar9 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    plVar15 = plStack_278 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uVar3 = (undefined4)param_4[1];
  if (*(char *)((long)param_4 + 0xc) == '\0') {
    uVar3 = 0;
  }
  func_0x00010ae02ecc(0,0);
  ppuVar18 = &PTR_PTR_113300d18;
  ppuVar20 = &PTR_PTR_113300d70;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar20,&PTR_PTR_113300d70);
  func_0x00010ae02ecc(0,uVar3);
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar18,&PTR_PTR_113300d18);
  plVar9 = (long *)0x68;
  __Znwm();
  plVar15 = *param_1;
  lVar12 = plVar15[5];
  lVar24 = plVar15[4];
  plVar9[1] = plVar15[5];
  *plVar9 = lVar24;
  if (lVar12 != 0) {
    plVar15 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a23545c(plVar9 + 2,&plStack_1a8);
  plVar9[4] = 0;
  plVar9[5] = 0;
  lVar12 = param_4[5];
  lVar24 = param_4[4];
  plVar9[7] = param_4[5];
  plVar9[6] = lVar24;
  if (lVar12 != 0) {
    plVar15 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined2 *)(plVar9 + 8) = 1;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar15 = *param_1;
  lVar12 = plVar15[7];
  lVar24 = plVar15[6];
  plVar9[0xc] = plVar15[7];
  plVar9[0xb] = lVar24;
  if (lVar12 != 0) {
    plVar15 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a235640(&uStack_e0,plVar9);
  plVar9 = *param_1;
  lVar24 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0);
  lVar12 = CONCAT44(uStack_d4,uStack_d8);
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  plVar15 = (long *)plVar9[0x40];
  plVar9[0x40] = lVar12;
  plVar9[0x3f] = lVar24;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      lVar24 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar9 = (long *)CONCAT44(uStack_d4,uStack_d8);
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = &PTR_DAT_110c70460;
  *puVar13 = &PTR_DAT_110c70410;
  lVar24 = (*param_1)[0x3f];
  plVar9 = *(long **)(lVar24 + 0x50);
  *(undefined8 **)(lVar24 + 0x48) = puVar13 + 3;
  *(undefined8 **)(lVar24 + 0x50) = puVar13;
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  lVar24 = 0xf0;
  __Znwm();
  FUN_10a4ecb90();
  plVar15 = *param_1;
  plVar9 = (long *)plVar15[0x41];
  plVar15[0x41] = lVar24;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    plVar15 = *param_1;
  }
  lVar24 = plVar15[0x3f];
  lVar12 = plVar15[0x40];
  if (lVar12 == 0) {
    lVar23 = plVar15[0x30];
  }
  else {
    plVar9 = (long *)(lVar12 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar23 = plVar15[0x30];
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(long *)(lVar23 + 0x608) = lVar24;
  lVar24 = *(long *)(lVar23 + 0x610);
  *(long *)(lVar23 + 0x610) = lVar12;
  if (lVar24 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar12 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
  }
  plVar9 = *param_1;
  if ((*(long **)(plVar9[0x41] + 0xb8) != (long *)0x0) &&
     (lVar24 = **(long **)(plVar9[0x41] + 0xb8), *(char *)(lVar24 + 0x650) == '\x01')) {
    *(long *)(plVar9[0x30] + 0x348) = *(long *)(lVar24 + 0x648) + 0x498;
    plVar9 = *param_1;
  }
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_e0._4_4_ = 0;
  uStack_d8 = 0;
  uStack_c8._4_4_ = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8._0_4_ = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_e0._0_4_ = 2;
  uStack_7c = 0;
  FUN_10a224acc(plVar9 + 0x31);
  *(int *)(plVar9 + 0x31) = (int)uStack_e0;
  if (0 < (int)uStack_e0) {
    lVar24 = 0;
    do {
      func_0x00010a22bb4c(plVar9 + lVar24 * 2 + 0x32,*(undefined8 *)(&uStack_d8 + lVar24 * 4),
                          *(undefined8 *)(&uStack_d0 + lVar24 * 4));
      plStack_1a8 = (long *)0x0;
      plStack_1a0 = (long *)0x0;
      FUN_10a08def8(&uStack_d8 + lVar24 * 4,&plStack_1a8);
      plVar15 = plStack_1a0;
      if (plStack_1a0 != (long *)0x0) {
        plVar16 = plStack_1a0 + 1;
        do {
          lVar12 = *plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)plVar9[0x31]);
  }
  lVar24 = 0x58;
  do {
    func_0x00010a09dab4((long)&uStack_e0 + lVar24);
    lVar24 = lVar24 + -0x10;
  } while (lVar24 != -8);
  uStack_d8 = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  FUN_10a21bb40(param_1,&uStack_e0);
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &PTR_FUN_110bb4598;
  puVar13[3] = &PTR_FUN_110c704b0;
  plVar9 = *param_1;
  plVar9[0x108] = (long)(puVar13 + 3);
  plVar15 = (long *)plVar9[0x109];
  plVar9[0x109] = (long)puVar13;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      lVar24 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar9 = *param_1;
  lVar23 = plVar9[0x109];
  lVar24 = plVar9[0x108];
  lVar12 = plVar9[0x109];
  if (lVar23 == 0) {
    lVar22 = plVar9[0x30];
  }
  else {
    plVar15 = (long *)(lVar23 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar22 = plVar9[0x30];
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar17 = *(long *)(lVar22 + 0x478);
  *(long *)(lVar22 + 0x478) = lVar12;
  *(long *)(lVar22 + 0x470) = lVar24;
  if (lVar17 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar23 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar23);
  }
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &PTR_DAT_110bb45e8;
  puVar13[3] = &PTR_FUN_110c70dd0;
  plVar9 = *param_1;
  plVar9[0x10a] = (long)(puVar13 + 3);
  plVar15 = (long *)plVar9[0x10b];
  plVar9[0x10b] = (long)puVar13;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      lVar24 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar9 = *param_1;
  lVar23 = plVar9[0x10b];
  lVar24 = plVar9[0x10a];
  lVar12 = plVar9[0x10b];
  if (lVar23 == 0) {
    lVar22 = plVar9[0x30];
  }
  else {
    plVar15 = (long *)(lVar23 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar22 = plVar9[0x30];
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar17 = *(long *)(lVar22 + 0x488);
  *(long *)(lVar22 + 0x488) = lVar12;
  *(long *)(lVar22 + 0x480) = lVar24;
  if (lVar17 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar23 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar23);
  }
  puVar13 = (undefined8 *)0xa0;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[4] = 0;
  *puVar13 = &PTR_DAT_110bb4638;
  puVar13[3] = puVar13 + 4;
  puVar13[8] = 0;
  puVar13[7] = 0;
  puVar13[5] = 0;
  puVar13[6] = puVar13 + 7;
  puVar13[10] = 0;
  puVar13[9] = 0;
  puVar13[0xc] = 0;
  puVar13[0xb] = 0;
  *(undefined4 *)(puVar13 + 0xd) = 0x3f800000;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0x100000000001;
  *(undefined4 *)(puVar13 + 0x11) = 0xac44;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar14 = (undefined8 *)0x58;
  __Znwm();
  puVar14[2] = 0;
  *puVar14 = &PTR_DAT_110b00d28;
  puVar14[1] = 0;
  puVar14[3] = 0x32aaaba7;
  puVar14[5] = 0;
  puVar14[4] = 0;
  puVar14[7] = 0;
  puVar14[6] = 0;
  puVar14[9] = 0;
  puVar14[8] = 0;
  puVar14[10] = 0;
  puVar13[0xe] = puVar14 + 3;
  puVar13[0xf] = puVar14;
  puVar14 = (undefined8 *)0x28;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_110bb4688;
  *(undefined4 *)(puVar14 + 4) = 0;
  puVar14[3] = 0;
  puVar13[0x12] = puVar14 + 3;
  puVar13[0x13] = puVar14;
  *(undefined4 *)(puVar13 + 0x11) = 0xac44;
  plVar9 = *param_1;
  plVar9[0x12e] = (long)(puVar13 + 3);
  plVar15 = (long *)plVar9[0x12f];
  plVar9[0x12f] = (long)puVar13;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      lVar24 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar9 = *param_1;
  lVar23 = plVar9[0x12f];
  lVar24 = plVar9[0x12e];
  lVar12 = plVar9[0x12f];
  if (lVar23 == 0) {
    lVar22 = plVar9[0x30];
  }
  else {
    plVar15 = (long *)(lVar23 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar22 = plVar9[0x30];
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar17 = *(long *)(lVar22 + 0x340);
  *(long *)(lVar22 + 0x340) = lVar12;
  *(long *)(lVar22 + 0x338) = lVar24;
  if (lVar17 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar23 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar23);
  }
  FUN_10a2194d4(0x113836008,param_4[2]);
  FUN_10a2194d4(0x1138360a0,param_4[2]);
  FUN_10a21bd20(&uStack_e0,(int)(*param_1)[0x118]);
  FUN_10a21bf90(*param_1 + 0x114,&uStack_e0);
  plVar9 = (long *)CONCAT44(uStack_d4,uStack_d8);
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a21bff4(&uStack_e0,*(undefined4 *)((long)*param_1 + 0x8c4),param_1);
  FUN_10a21c92c(*param_1 + 0x116,&uStack_e0);
  plVar9 = (long *)CONCAT44(uStack_d4,uStack_d8);
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  lVar24 = (*param_1)[4];
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar14 = puVar13 + 3;
  *puVar13 = &PTR_FUN_110bb46d8;
  func_0x00010a11281c(puVar14,lVar24);
  plVar9 = *param_1;
  plVar9[0x132] = (long)puVar14;
  plVar15 = (long *)plVar9[0x133];
  plVar9[0x133] = (long)puVar13;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    do {
      lVar24 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar9 = *param_1;
  lVar23 = plVar9[0x133];
  lVar24 = plVar9[0x132];
  lVar12 = plVar9[0x133];
  if (lVar23 == 0) {
    lVar22 = plVar9[0x30];
  }
  else {
    plVar15 = (long *)(lVar23 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar22 = plVar9[0x30];
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar17 = *(long *)(lVar22 + 0x518);
  *(long *)(lVar22 + 0x518) = lVar12;
  *(long *)(lVar22 + 0x510) = lVar24;
  if (lVar17 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar23 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar23);
  }
  ppuVar18 = &PTR_PTR_113300da8;
  FUN_10ae079a0(0,&PTR_PTR_113300da8);
  FUN_10ae07cd4(ppuVar18,&PTR_PTR_113300da8);
  plVar9 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    plVar15 = plStack_220 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    plVar15 = plStack_200 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    plVar15 = plStack_1d0 + 1;
    do {
      lVar24 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  pplVar10 = &plStack_160;
  FUN_10a22afb0();
  pplVar11 = pplStack_1b0;
  if (pplStack_1b0 != (long **)0x0) {
    pplVar2 = pplStack_1b0 + 1;
    do {
      plVar9 = *pplVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar5) {
        *pplVar2 = (long *)((long)plVar9 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar9 == (long *)0x0) {
      (*(code *)(*pplStack_1b0)[2])(pplStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar10 = pplVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x0001092ba41c(&uStack_e0);
    func_0x00010a06e274(&uStack_1f8);
    FUN_10a22afb0(&plStack_160);
    FUN_10a235330(&pplStack_1b8);
    puVar13 = (undefined8 *)0x0;
    func_0x00010a235084(param_1);
    __Unwind_Resume();
    plVar9 = (long *)*puVar13;
    plVar15 = (long *)puVar13[1];
    *puVar13 = 0;
    puVar13[1] = 0;
    plVar16 = pplVar10[1];
    pplVar10[1] = plVar15;
    *pplVar10 = plVar9;
    if (plVar16 != (long *)0x0) {
      plVar9 = plVar16 + 1;
      do {
        lVar24 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return pplVar10;
  }
  return param_1;
}



/* Entry: 10a21b9b0; end: 10a21bb3f;  */

undefined8 * FUN_10a21b9b0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a21bb40; end: 10a21bd1f;  */

void FUN_10a21bb40(long *param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_108;
  undefined4 uStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_c8,*param_1);
  lVar8 = *(long *)(*param_1 + 0x208);
  lStack_108 = *param_2;
  uStack_100 = (undefined4)param_2[1];
  if (*(long *)(lVar8 + 0xb8) != 0) {
    puVar5 = *(undefined8 **)(lVar8 + 0xb0);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_10a4ec46c(*(long *)(lVar8 + 0xb8),&lStack_108);
    }
    else {
      lStack_f8 = *param_2;
      uStack_f0 = (undefined4)param_2[1];
      plVar6 = (long *)puVar5[2];
      puStack_d0 = puVar5;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x28;
        __Znwm();
        lVar4 = *param_2;
        *plVar6 = lVar8;
        plVar6[1] = lVar4;
        *(int *)(plVar6 + 2) = (int)param_2[1];
        plVar6[4] = 0x10a237080;
        pcStack_e0 = FUN_10a23702c;
        plStack_d8 = plVar6;
        (**(code **)*puVar5)(puVar5,&pcStack_e0);
      }
      else {
        lStack_e8 = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&lStack_e8);
        if (lStack_e8 != 0) {
          func_0x0001092af97c(&lStack_e8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a21bcd8);
          (*pcVar1)();
        }
        plVar2 = (long *)0x30;
        __Znwm();
        *plVar2 = lVar8;
        plVar2[1] = lStack_f8;
        *(undefined4 *)(plVar2 + 2) = uStack_f0;
        plVar2[4] = (long)FUN_10a237074;
        plVar2[5] = (long)plVar6;
        pcStack_e0 = FUN_10a236ffc;
        plStack_d8 = plVar2;
        (**(code **)*puVar5)(puVar5,&pcStack_e0);
        __ZNSt13exception_ptrD1Ev(&lStack_e8);
      }
      lStack_e8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_e8);
    }
  }
  puVar3 = auStack_c8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(auStack_c8);
  __Unwind_Resume(puVar3);
  func_0x000104bd46a0();
  if ((int)puVar3 == 1) {
    puVar5 = (undefined8 *)0xd0;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110bb4f68;
    puVar7 = puVar5 + 3;
    *puVar7 = &PTR_DAT_110bb4100;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar5[0xc] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0x3f800000;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    *(undefined4 *)(puVar5 + 0x16) = 0x3f800000;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    plVar6 = (long *)0x88;
    puStack_170 = puVar7;
    puStack_168 = puVar5;
    __Znwm();
    *(undefined1 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR_FUN_110bb3dd8;
    plVar6[2] = 0;
    plVar6[3] = 0x32aaaba7;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    *(undefined1 *)(plVar6 + 0xc) = 0;
    plVar6[10] = 0;
    plVar6[0xb] = (long)&PTR_DAT_110ba5598;
    plVar6[0xd] = 0;
    *(undefined1 *)(plVar6 + 0xe) = 0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    lVar8 = 0x50;
    __Znwm();
    FUN_10a0f984c();
    plVar2 = (long *)plVar6[2];
    plVar6[2] = lVar8;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plStack_178 = plVar6;
    FUN_10a228c7c(puVar7,2,&plStack_178);
    if (plStack_178 != (long *)0x0) {
      (**(code **)(*plStack_178 + 8))();
    }
    plVar6 = (long *)0x38;
    __Znwm();
    *(undefined1 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR_FUN_110bb3d30;
    plVar6[3] = 0;
    plVar6[2] = 0;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[6] = 0;
    plStack_178 = plVar6;
    FUN_10a228c7c(puVar7,0,&plStack_178);
    if (plStack_178 != (long *)0x0) {
      (**(code **)(*plStack_178 + 8))();
    }
    *extraout_x8 = puVar7;
    extraout_x8[1] = puVar5;
  }
  else {
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110bb4fb8;
    puVar5[4] = 0;
    extraout_x8[1] = puVar5;
    puVar5[3] = &PTR_DAT_110bb5008;
    *extraout_x8 = puVar5 + 3;
  }
  return;
}



/* Entry: 10a21bd20; end: 10a21bf8f;  */

void FUN_10a21bd20(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)0xd0;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bb4f68;
    puVar5 = puVar1 + 3;
    *puVar5 = &PTR_DAT_110bb4100;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    plVar2 = (long *)0x88;
    puStack_60 = puVar5;
    puStack_58 = puVar1;
    __Znwm();
    *(undefined1 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR_FUN_110bb3dd8;
    plVar2[2] = 0;
    plVar2[3] = 0x32aaaba7;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    *(undefined1 *)(plVar2 + 0xc) = 0;
    plVar2[10] = 0;
    plVar2[0xb] = (long)&PTR_DAT_110ba5598;
    plVar2[0xd] = 0;
    *(undefined1 *)(plVar2 + 0xe) = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    lVar3 = 0x50;
    __Znwm();
    FUN_10a0f984c();
    plVar4 = (long *)plVar2[2];
    plVar2[2] = lVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plStack_68 = plVar2;
    FUN_10a228c7c(puVar5,2,&plStack_68);
    if (plStack_68 != (long *)0x0) {
      (**(code **)(*plStack_68 + 8))();
    }
    plVar2 = (long *)0x38;
    __Znwm();
    *(undefined1 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR_FUN_110bb3d30;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[6] = 0;
    plStack_68 = plVar2;
    FUN_10a228c7c(puVar5,0,&plStack_68);
    if (plStack_68 != (long *)0x0) {
      (**(code **)(*plStack_68 + 8))();
    }
    *param_1 = puVar5;
    param_1[1] = puVar1;
  }
  else {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bb4fb8;
    puVar1[4] = 0;
    param_1[1] = puVar1;
    puVar1[3] = &PTR_DAT_110bb5008;
    *param_1 = puVar1 + 3;
  }
  return;
}



/* Entry: 10a21bf90; end: 10a21bff3;  */

undefined8 * FUN_10a21bf90(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a21bff4; end: 10a21c92b;  */

void FUN_10a21bff4(undefined8 *param_1,int param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  code *pcStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  if (param_2 == 1) {
    puVar5 = (undefined8 *)0x98;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110bb5070;
    puVar11 = puVar5 + 3;
    *puVar11 = &PTR_FUN_110bb40b0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[0x12] = 0;
    puVar5[0x11] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xc] = 0;
    *(undefined4 *)(puVar5 + 0xd) = 0x3f800000;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0x3f800000;
    plVar6 = (long *)0x20;
    puStack_b0 = puVar11;
    puStack_a8 = puVar5;
    __Znwm();
    *plVar6 = (long)&PTR_FUN_110bb3da0;
    plVar6[1] = (long)param_3;
    plVar6[2] = 0;
    plVar6[3] = 0;
    puVar7 = (undefined8 *)0xc8;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_110bb52c8;
    puVar7[3] = &PTR_DAT_110bb4168;
    *(undefined4 *)(puVar7 + 4) = 1;
    puVar7[5] = 0;
    puVar7[6] = 0;
    __ZNSt3__115recursive_mutexC1Ev(puVar7 + 7);
    *(undefined1 *)(puVar7 + 0x12) = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = &PTR_DAT_110ba5598;
    puVar7[0x13] = 0;
    *(undefined1 *)(puVar7 + 0x14) = 0;
    puVar7[0x16] = 0;
    puVar7[0x15] = 0;
    puVar7[0x18] = 0;
    puVar7[0x17] = 0;
    plVar12 = (long *)plVar6[3];
    plVar6[2] = (long)(puVar7 + 3);
    plVar6[3] = (long)puVar7;
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 1;
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    lVar9 = *(long *)(*param_3 + 0x208);
    if (*(long *)(lVar9 + 0xb8) != 0) {
      puVar7 = *(undefined8 **)(lVar9 + 0xb0);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_10a23cae4(plVar6[2],plVar6[3]);
      }
      else {
        plVar12 = (long *)puVar7[2];
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0xc8;
          __Znwm();
          plVar12[2] = 0;
          plVar12[1] = 0x200000006;
          *(undefined2 *)(plVar12 + 3) = 4;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[7] = 0;
          plVar12[6] = 0;
          plVar12[9] = 0;
          plVar12[8] = 0;
          plVar12[0xb] = 0;
          plVar12[10] = 0;
          plVar12[0xd] = 0;
          plVar12[0xc] = 0;
          plVar12[0xf] = 0;
          plVar12[0xe] = 0;
          plVar12[0x10] = 0;
          plVar12[0x11] = (long)(plVar12 + 3);
          plVar12[0x12] = 0;
          *(undefined2 *)(plVar12 + 0x13) = 0;
          *plVar12 = (long)&PTR_DAT_110bb5350;
          plStack_98 = plVar12 + 0x14;
          *plStack_98 = lVar9;
          plVar12[0x15] = (long)plVar6;
          *(undefined1 *)(plVar12 + 0x17) = 1;
          plVar12[0x18] = 0;
          pcStack_80 = FUN_10a23cb88;
          plStack_90 = plVar12;
          plStack_88 = plVar12;
        }
        else {
          pcStack_78 = (code *)0x0;
          (**(code **)(*plVar12 + 0x28))(plVar12,0,&pcStack_78);
          if (pcStack_78 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_78);
            goto LAB_10a21c7b0;
          }
          plVar8 = (long *)0xd0;
          __Znwm();
          *(undefined2 *)(plVar8 + 3) = 4;
          plVar8[2] = 0;
          plVar8[1] = 0x200000006;
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
          *plVar8 = (long)&PTR_FUN_110bb5318;
          plVar8[0x14] = lVar9;
          plVar8[0x15] = (long)plVar6;
          *(undefined1 *)(plVar8 + 0x17) = 1;
          plVar8[0x18] = 0;
          plVar8[0x19] = (long)plVar12;
          if (plStack_90 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_90 + 1);
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar10 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plStack_90 + 8))();
              }
            }
          }
          plStack_90 = plVar8;
          if (plStack_88 != (long *)0x0) {
            func_0x0001092b4274(&plStack_88);
          }
          pcStack_80 = FUN_10a23cb58;
          plStack_98 = plVar8 + 0x14;
          plStack_88 = plVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_78);
        }
        plVar12 = plStack_98;
        if (plStack_98[4] != 0) {
          func_0x0001092b4274();
        }
        plVar12[4] = (long)plStack_88;
        plStack_88 = (long *)0x0;
        pcStack_78 = pcStack_80;
        plStack_70 = plStack_98;
        puStack_68 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_78);
        plStack_a0 = plStack_90;
        plStack_90 = (long *)0x0;
        if (plStack_88 != (long *)0x0) {
          func_0x0001092b4274(&plStack_88);
          if (plStack_90 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_90 + 1);
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar10 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plStack_90 + 8))();
              }
            }
          }
        }
        FUN_109d1a244(&plStack_a0);
        FUN_10a09b344(&plStack_a0);
        if (plStack_a0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_a0 + 1);
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plStack_a0 + 8))();
            }
          }
        }
      }
    }
    plStack_b8 = plVar6;
    FUN_10a228f20(puVar11,2,&plStack_b8);
    if (plStack_b8 != (long *)0x0) {
      (**(code **)(*plStack_b8 + 8))();
    }
    plVar6 = (long *)0x30;
    __Znwm();
    *plVar6 = (long)&PTR_FUN_110bb3cf8;
    plVar6[1] = (long)param_3;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[3] = 0;
    plVar6[2] = 0;
    puVar7 = (undefined8 *)0x40;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_110bb4d98;
    puVar7[3] = &PTR_DAT_110bb4de8;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    plVar6[4] = (long)(puVar7 + 3);
    plVar6[5] = (long)puVar7;
    lVar9 = *(long *)(*param_3 + 0x208);
    if (*(long *)(lVar9 + 0xb8) != 0) {
      puVar7 = *(undefined8 **)(lVar9 + 0xb0);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_10a23ab18();
      }
      else {
        plVar12 = (long *)puVar7[2];
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0xc8;
          __Znwm();
          plVar12[2] = 0;
          plVar12[1] = 0x200000006;
          *(undefined2 *)(plVar12 + 3) = 4;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[7] = 0;
          plVar12[6] = 0;
          plVar12[9] = 0;
          plVar12[8] = 0;
          plVar12[0xb] = 0;
          plVar12[10] = 0;
          plVar12[0xd] = 0;
          plVar12[0xc] = 0;
          plVar12[0xf] = 0;
          plVar12[0xe] = 0;
          plVar12[0x10] = 0;
          plVar12[0x11] = (long)(plVar12 + 3);
          plVar12[0x12] = 0;
          *(undefined2 *)(plVar12 + 0x13) = 0;
          *plVar12 = (long)&PTR_DAT_110bb4ec0;
          plStack_98 = plVar12 + 0x14;
          *plStack_98 = lVar9;
          plVar12[0x15] = (long)plVar6;
          *(undefined1 *)(plVar12 + 0x17) = 1;
          plVar12[0x18] = 0;
          pcStack_80 = FUN_10a23abbc;
          plStack_90 = plVar12;
          plStack_88 = plVar12;
        }
        else {
          pcStack_78 = (code *)0x0;
          (**(code **)(*plVar12 + 0x28))(plVar12,0,&pcStack_78);
          if (pcStack_78 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_78);
LAB_10a21c7b0:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a21c7b4);
            (*pcVar4)();
          }
          plVar8 = (long *)0xd0;
          __Znwm();
          *(undefined2 *)(plVar8 + 3) = 4;
          plVar8[2] = 0;
          plVar8[1] = 0x200000006;
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
          *plVar8 = (long)&PTR_FUN_110bb4e88;
          plVar8[0x14] = lVar9;
          plVar8[0x15] = (long)plVar6;
          *(undefined1 *)(plVar8 + 0x17) = 1;
          plVar8[0x18] = 0;
          plVar8[0x19] = (long)plVar12;
          if (plStack_90 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_90 + 1);
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar10 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plStack_90 + 8))();
              }
            }
          }
          plStack_90 = plVar8;
          if (plStack_88 != (long *)0x0) {
            func_0x0001092b4274(&plStack_88);
          }
          pcStack_80 = FUN_10a23ab8c;
          plStack_98 = plVar8 + 0x14;
          plStack_88 = plVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_78);
        }
        plVar12 = plStack_98;
        if (plStack_98[4] != 0) {
          func_0x0001092b4274();
        }
        plVar12[4] = (long)plStack_88;
        plStack_88 = (long *)0x0;
        pcStack_78 = pcStack_80;
        plStack_70 = plStack_98;
        puStack_68 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_78);
        plStack_a0 = plStack_90;
        plStack_90 = (long *)0x0;
        if (plStack_88 != (long *)0x0) {
          func_0x0001092b4274(&plStack_88);
          if (plStack_90 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_90 + 1);
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar10 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plStack_90 + 8))();
              }
            }
          }
        }
        FUN_109d1a244(&plStack_a0);
        FUN_10a09b344(&plStack_a0);
        if (plStack_a0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_a0 + 1);
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plStack_a0 + 8))();
            }
          }
        }
      }
    }
    plStack_b8 = plVar6;
    FUN_10a228f20(puVar11,0,&plStack_b8);
    if (plStack_b8 != (long *)0x0) {
      (**(code **)(*plStack_b8 + 8))();
    }
    *param_1 = puVar11;
    param_1[1] = puVar5;
  }
  else {
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110bb50c0;
    param_1[1] = puVar5;
    puVar5[3] = &PTR_DAT_110bb5110;
    *param_1 = puVar5 + 3;
  }
  return;
}



/* Entry: 10a21c92c; end: 10a21c98f;  */

undefined8 * FUN_10a21c92c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a21c990; end: 10a21ca77;  */

void FUN_10a21c990(undefined8 param_1,long *param_2,long *param_3,long *param_4,uint *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1f0 [24];
  undefined1 *puStack_1d8;
  long *plStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1b0 [8];
  long *plStack_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_199;
  undefined1 auStack_198 [128];
  long lStack_118;
  undefined8 uStack_110;
  uint *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long alStack_c8 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_c8,*param_2);
  puVar9 = param_5;
  FUN_10a21ca78(param_2,*(undefined8 *)(*param_3 + 0x18),param_6);
  plVar8 = param_3;
  FUN_10a19d4a0(param_1,*(undefined8 *)(*param_2 + 0xc0));
  plVar4 = alStack_c8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(plVar4);
  plVar5 = plVar4;
  func_0x000104bd46a0();
  pcStack_d8 = FUN_10a21ca78;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = param_6;
  puStack_108 = param_5;
  plStack_100 = param_2;
  uStack_f8 = param_1;
  plStack_f0 = param_3;
  plStack_e8 = plVar4;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(auStack_198,*plVar5);
  lVar10 = *(long *)(*plVar5 + 0xc0);
  if (lVar10 == 0) {
    uStack_1a0 = 0;
    FUN_10a239620(auStack_1b0,&uStack_199,&uStack_1a0);
    FUN_10a224ec4(*plVar5 + 0xc0,auStack_1b0);
    if (plStack_1a8 != (long *)0x0) {
      plVar4 = plStack_1a8 + 1;
      do {
        lVar10 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
      }
    }
    lVar10 = *(long *)(*plVar5 + 0xc0);
  }
  lVar11 = *(long *)(lVar10 + 8);
  if (lVar11 == 0) {
    *(uint *)(*(long *)(lVar10 + 0x10) + 0x5f0) = *puVar9 ^ 4;
  }
  else {
    *(uint *)(lVar11 + 0x34) = *puVar9 ^ 4;
  }
  if (((int)param_4 < 1) ||
     (plVar4 = (long *)((ulong)param_4 >> 0x20), (int)((ulong)param_4 >> 0x20) < 1)) {
    bVar3 = (*puVar9 & 1) != 0;
    param_4 = plVar8;
    if (bVar3) {
      param_4 = (long *)((ulong)plVar8 >> 0x20);
    }
    plVar4 = (long *)((ulong)plVar8 >> 0x20);
    if (bVar3) {
      plVar4 = (long *)((ulong)plVar8 & 0xffffffff);
    }
  }
  uVar1 = (ulong)param_4 & 0xffffffff | (long)plVar4 << 0x20;
  if (lVar11 == 0) {
    FUN_10a19d398(*(undefined8 *)(lVar10 + 0x10),uVar1);
  }
  else {
    *(ulong *)(lVar11 + 0x2c) = uVar1;
  }
  puVar6 = auStack_198;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    FUN_10a22afb0(auStack_198);
    puVar7 = puVar6;
    __Unwind_Resume(puVar6);
    pcStack_1b8 = FUN_10a21cc00;
    plStack_1d0 = plVar8;
    puStack_1c8 = puVar6;
    ppuStack_1c0 = &puStack_e0;
    FUN_10a22b034(auStack_1f0);
    FUN_10a21cc60(puVar7,auStack_1f0);
    puStack_1d8 = auStack_1f0;
    FUN_10a22b234(&puStack_1d8);
    return;
  }
  return;
}


