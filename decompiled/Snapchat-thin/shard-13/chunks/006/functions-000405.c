/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a924520; end: 10a9245bf;  */

undefined8 * FUN_10a924520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2efa0;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9245c0; end: 10a92461b;  */

void FUN_10a9245c0(void)

{
  return;
}



/* Entry: 10a92461c; end: 10a92463b;  */

void FUN_10a92461c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c2f8a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a92463c; end: 10a924647;  */

long FUN_10a92463c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10a924648; end: 10a924803;  */

undefined1  [16] FUN_10a924648(ulong *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  puStack_40 = (undefined8 *)(double)param_3;
  plStack_48 = (long *)CONCAT44(plStack_48._4_4_,3);
  (**(code **)(*param_2 + 0x2b0))(aiStack_58,param_2,plVar1,&plStack_48,1);
  if ((3 < (int)plStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  FUN_10a12c3a8(param_1 + 2,&plStack_48,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  pplVar4 = &plStack_48;
  plStack_48 = plVar1;
  FUN_10a924804();
  plVar1 = plStack_48;
  pplVar5 = pplVar4;
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)pplVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar6._8_8_ = pplVar5;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  ___stack_chk_fail();
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  FUN_10a12c460(param_1 + 2);
  plVar2 = plVar1;
  __Unwind_Resume();
  pcStack_68 = FUN_10a924804;
  plVar3 = plVar2;
  plStack_80 = plVar1;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar2 + 0x98))();
  plVar1 = plVar2;
  plStack_88 = plVar3;
  (**(code **)(*plVar2 + 0x360))(plVar2,&plStack_88);
  (**(code **)(*plVar2 + 0x350))(plVar2,&plStack_88);
  if (plStack_88 != (long *)0x0) {
    (**(code **)*plStack_88)();
  }
  auVar7._8_8_ = (ulong)plVar2 >> 2;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10a924804; end: 10a9248ab;  */

undefined1  [16] FUN_10a924804(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = (ulong)param_1 >> 2;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 10a9248ac; end: 10a924a27;  */

undefined8 *
FUN_10a9248ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = param_5[1];
  if (*(char *)(lVar5 + 8) == '\x01') {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    *puVar4 = *param_5;
    (**(code **)(lVar5 + 0x10))(puVar4 + 1,param_5 + 1);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_10a924a28(aiStack_88,param_2,param_3,param_4 << 2,FUN_10a924c40,puVar4);
  FUN_10a12c3a8(auStack_78,&uStack_61,aiStack_88);
  FUN_10a12c8c0(param_1 + 2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
    (**(code **)*puStack_80)();
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



/* Entry: 10a924a28; end: 10a924c3f;  */

void FUN_10a924a28(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  int aiStack_68 [2];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  func_0x000109899ccc();
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110ba7960;
  plVar5[4] = param_3;
  plVar5[5] = param_4;
  plVar5[6] = param_5;
  plVar5[7] = param_6;
  plStack_80 = plVar5 + 3;
  *plStack_80 = (long)&PTR_FUN_110ba79b0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_78 = plVar5;
  FUN_10a12c924(&plStack_70,param_2,&plStack_80);
  aiStack_68[0] = 7;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,plStack_70);
  plStack_60 = plVar5;
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,plVar4,aiStack_68,1);
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  FUN_10a12ca94(&plStack_80);
  func_0x00010a12caec(&uStack_90);
  __Unwind_Resume();
  if (plVar5 != (long *)0x0) {
    (*(code *)*plVar5)(plVar4,plVar5);
    (**(code **)plVar5[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a924c40; end: 10a924cb3;  */

void FUN_10a924c40(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a924cb4; end: 10a924cdb;  */

void FUN_10a924cb4(void)

{
  return;
}



/* Entry: 10a924cdc; end: 10a925ae7;  */

void FUN_10a924cdc(float *param_1,float *param_2,long *param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  float *pfVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
LAB_10a924d40:
  pfVar7 = param_2 + -2;
  pfVar8 = param_1;
LAB_10a924d58:
  do {
    param_1 = pfVar8;
    uVar15 = (long)param_2 - (long)param_1 >> 3;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        fVar19 = *param_1;
        fVar23 = *(float *)*param_3;
        fVar25 = ((float *)*param_3)[1];
        fVar24 = param_2[-1] - fVar25;
        fVar25 = param_1[1] - fVar25;
        _atan2f(fVar24,param_2[-2] - fVar23);
        _atan2f(fVar25,fVar19 - fVar23);
        uVar15 = CONCAT44(fVar25,fVar24) ^
                 (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
        if ((float)uVar15 <= (float)(uVar15 >> 0x20)) {
          return;
        }
        uVar6 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar6;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        pfVar8 = param_1 + 2;
        fVar24 = *param_1;
        fVar26 = *(float *)*param_3;
        fVar23 = ((float *)*param_3)[1];
        fVar25 = param_1[3] - fVar23;
        fVar19 = param_1[1] - fVar23;
        _atan2f(fVar25,*pfVar8 - fVar26);
        _atan2f(fVar19,fVar24 - fVar26);
        fVar24 = fVar19 + 6.2831855;
        if (0.0 <= fVar19) {
          fVar24 = fVar19;
        }
        fVar23 = param_2[-1] - fVar23;
        _atan2f(fVar23,*pfVar7 - fVar26);
        uVar15 = CONCAT44(fVar25,fVar23) ^
                 (CONCAT44(fVar25,fVar23) ^ CONCAT44(fVar25 + 6.2831855,fVar23 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar23 < 0.0));
        fVar19 = (float)(uVar15 >> 0x20);
        fVar25 = (float)uVar15;
        if (fVar19 <= fVar24) {
          if (fVar19 < fVar25) {
            uVar6 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
            *(undefined8 *)pfVar7 = uVar6;
            fVar19 = *param_1;
            fVar23 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            fVar24 = param_1[3] - fVar25;
            fVar25 = param_1[1] - fVar25;
            _atan2f(fVar24,*pfVar8 - fVar23);
            _atan2f(fVar25,fVar19 - fVar23);
            uVar15 = CONCAT44(fVar25,fVar24) ^
                     (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
            if ((float)(uVar15 >> 0x20) < (float)uVar15) {
              uVar6 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
              *(undefined8 *)pfVar8 = uVar6;
            }
          }
        }
        else {
          uVar6 = *(undefined8 *)param_1;
          if (fVar25 <= fVar19) {
            *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar6;
            fVar19 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            fVar24 = param_2[-1] - fVar25;
            fVar25 = (float)((ulong)uVar6 >> 0x20) - fVar25;
            _atan2f(fVar24,*pfVar7 - fVar19);
            _atan2f(fVar25,(float)uVar6 - fVar19);
            uVar15 = CONCAT44(fVar25,fVar24) ^
                     (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
            if ((float)uVar15 <= (float)(uVar15 >> 0x20)) {
              return;
            }
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
          }
          else {
            *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
          }
          *(undefined8 *)pfVar7 = uVar6;
        }
        return;
      }
      if (uVar15 == 4) {
        pfVar8 = param_1 + 2;
        pfVar14 = param_1 + 4;
        FUN_10a925ae8();
        fVar19 = *pfVar14;
        fVar23 = *(float *)*param_3;
        fVar25 = ((float *)*param_3)[1];
        fVar24 = param_2[-1] - fVar25;
        fVar25 = param_1[5] - fVar25;
        _atan2f(fVar24,*pfVar7 - fVar23);
        _atan2f(fVar25,fVar19 - fVar23);
        uVar15 = CONCAT44(fVar25,fVar24) ^
                 (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
        if ((float)(uVar15 >> 0x20) < (float)uVar15) {
          uVar6 = *(undefined8 *)pfVar14;
          *(undefined8 *)pfVar14 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar6;
          fVar19 = *pfVar8;
          fVar23 = *(float *)*param_3;
          fVar25 = ((float *)*param_3)[1];
          fVar24 = param_1[5] - fVar25;
          fVar25 = param_1[3] - fVar25;
          _atan2f(fVar24,*pfVar14 - fVar23);
          _atan2f(fVar25,fVar19 - fVar23);
          uVar15 = CONCAT44(fVar25,fVar24) ^
                   (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                   CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
          if ((float)(uVar15 >> 0x20) < (float)uVar15) {
            uVar6 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar14;
            *(undefined8 *)pfVar14 = uVar6;
            fVar19 = *param_1;
            fVar23 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            fVar24 = param_1[3] - fVar25;
            fVar25 = param_1[1] - fVar25;
            _atan2f(fVar24,*pfVar8 - fVar23);
            _atan2f(fVar25,fVar19 - fVar23);
            uVar15 = CONCAT44(fVar25,fVar24) ^
                     (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
            if ((float)(uVar15 >> 0x20) < (float)uVar15) {
              uVar6 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
              *(undefined8 *)pfVar8 = uVar6;
            }
          }
        }
        return;
      }
      if (uVar15 == 5) {
        pfVar8 = param_1 + 2;
        pfVar14 = param_1 + 4;
        pfVar5 = param_1 + 6;
        FUN_10a925d10();
        fVar19 = *pfVar5;
        fVar23 = *(float *)*param_3;
        fVar25 = ((float *)*param_3)[1];
        fVar24 = param_2[-1] - fVar25;
        fVar25 = param_1[7] - fVar25;
        _atan2f(fVar24,*pfVar7 - fVar23);
        _atan2f(fVar25,fVar19 - fVar23);
        uVar15 = CONCAT44(fVar25,fVar24) ^
                 (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
        if ((float)(uVar15 >> 0x20) < (float)uVar15) {
          uVar6 = *(undefined8 *)pfVar5;
          *(undefined8 *)pfVar5 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar6;
          fVar19 = *pfVar14;
          fVar23 = *(float *)*param_3;
          fVar25 = ((float *)*param_3)[1];
          fVar24 = param_1[7] - fVar25;
          fVar25 = param_1[5] - fVar25;
          _atan2f(fVar24,*pfVar5 - fVar23);
          _atan2f(fVar25,fVar19 - fVar23);
          uVar15 = CONCAT44(fVar25,fVar24) ^
                   (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                   CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
          if ((float)(uVar15 >> 0x20) < (float)uVar15) {
            uVar6 = *(undefined8 *)pfVar14;
            *(undefined8 *)pfVar14 = *(undefined8 *)pfVar5;
            *(undefined8 *)pfVar5 = uVar6;
            fVar19 = *pfVar8;
            fVar23 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            fVar24 = param_1[5] - fVar25;
            fVar25 = param_1[3] - fVar25;
            _atan2f(fVar24,*pfVar14 - fVar23);
            _atan2f(fVar25,fVar19 - fVar23);
            uVar15 = CONCAT44(fVar25,fVar24) ^
                     (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
            if ((float)(uVar15 >> 0x20) < (float)uVar15) {
              uVar6 = *(undefined8 *)pfVar8;
              *(undefined8 *)pfVar8 = *(undefined8 *)pfVar14;
              *(undefined8 *)pfVar14 = uVar6;
              fVar19 = *param_1;
              fVar23 = *(float *)*param_3;
              fVar25 = ((float *)*param_3)[1];
              fVar24 = param_1[3] - fVar25;
              fVar25 = param_1[1] - fVar25;
              _atan2f(fVar24,*pfVar8 - fVar23);
              _atan2f(fVar25,fVar19 - fVar23);
              uVar15 = CONCAT44(fVar25,fVar24) ^
                       (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                       CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
              if ((float)(uVar15 >> 0x20) < (float)uVar15) {
                uVar6 = *(undefined8 *)param_1;
                *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
                *(undefined8 *)pfVar8 = uVar6;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar15 < 0x18) {
      pfVar8 = param_1 + 2;
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || pfVar8 == param_2) {
          return;
        }
        pfVar14 = (float *)*param_3;
        lVar17 = 8;
        pfVar7 = param_1;
        do {
          fVar26 = *pfVar8;
          fVar27 = pfVar7[3];
          fVar19 = *pfVar7;
          fVar23 = *pfVar14;
          fVar24 = fVar27 - pfVar14[1];
          fVar25 = pfVar7[1] - pfVar14[1];
          _atan2f(fVar24,fVar26 - fVar23);
          _atan2f(fVar25,fVar19 - fVar23);
          uVar15 = CONCAT44(fVar25,fVar24) ^
                   (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                   CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
          if ((float)(uVar15 >> 0x20) < (float)uVar15) {
            lVar3 = 0;
            do {
              lVar13 = lVar3;
              puVar1 = (undefined8 *)((long)pfVar7 + lVar13);
              puVar1[1] = *puVar1;
              if (lVar17 + lVar13 == 0) {
LAB_10a925ae4:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a925ae8);
                (*pcVar4)();
              }
              fVar19 = *(float *)(puVar1 + -1);
              pfVar14 = (float *)*param_3;
              fVar23 = *pfVar14;
              fVar24 = fVar27 - pfVar14[1];
              fVar25 = *(float *)((long)puVar1 + -4) - pfVar14[1];
              _atan2f(fVar24,fVar26 - fVar23);
              _atan2f(fVar25,fVar19 - fVar23);
              uVar15 = CONCAT44(fVar25,fVar24) ^
                       (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                       CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
              lVar3 = lVar13 + -8;
            } while ((float)(uVar15 >> 0x20) < (float)uVar15);
            *(float *)((long)pfVar7 + lVar13) = fVar26;
            *(float *)((long)pfVar7 + lVar13 + 4) = fVar27;
          }
          pfVar7 = pfVar7 + 2;
          lVar17 = lVar17 + 8;
          pfVar8 = (float *)((long)param_1 + lVar17);
          if (pfVar8 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || pfVar8 == param_2) {
        return;
      }
      lVar17 = 0;
      pfVar7 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar18 = uVar15 - 2 >> 1;
      uVar11 = uVar18;
      goto LAB_10a92553c;
    }
    pfVar8 = param_1 + (uVar15 & 0xfffffffffffffffe);
    if (uVar15 < 0x81) {
      FUN_10a925ae8(pfVar8,param_1,pfVar7,param_3);
    }
    else {
      FUN_10a925ae8(param_1,pfVar8,pfVar7,param_3);
      FUN_10a925ae8(param_1 + 2,pfVar8 + -2,param_2 + -4,param_3);
      FUN_10a925ae8(param_1 + 4,pfVar8 + 2,param_2 + -6,param_3);
      FUN_10a925ae8(pfVar8 + -2,pfVar8,pfVar8 + 2,param_3);
      uVar6 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar6;
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) != 0) {
      pfVar8 = (float *)*param_3;
      fVar25 = *param_1;
      fVar24 = param_1[1];
LAB_10a924ea4:
      lVar17 = 0;
      do {
        pfVar14 = (float *)((long)param_1 + lVar17 + 8);
        if (pfVar14 == param_2) goto LAB_10a925ae4;
        fVar26 = *pfVar8;
        fVar27 = pfVar8[1];
        fVar19 = *(float *)((long)param_1 + lVar17 + 0xc) - fVar27;
        fVar23 = fVar24 - fVar27;
        _atan2f(fVar19,*pfVar14 - fVar26);
        _atan2f(fVar23,fVar25 - fVar26);
        uVar15 = CONCAT44(fVar23,fVar19) ^
                 (CONCAT44(fVar23,fVar19) ^ CONCAT44(fVar23 + 6.2831855,fVar19 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar23 < 0.0),-(uint)(fVar19 < 0.0));
        fVar19 = (float)(uVar15 >> 0x20);
        lVar17 = lVar17 + 8;
      } while (fVar19 < (float)uVar15);
      pfVar14 = (float *)((long)param_1 + lVar17);
      pfVar8 = param_2;
      if (lVar17 == 8) {
        do {
          pfVar5 = pfVar8;
          if (pfVar8 <= pfVar14) break;
          pfVar5 = pfVar8 + -2;
          fVar20 = pfVar8[-1] - fVar27;
          _atan2f(fVar20,*pfVar5 - fVar26);
          fVar23 = fVar20 + 6.2831855;
          if (0.0 <= fVar20) {
            fVar23 = fVar20;
          }
          pfVar8 = pfVar5;
        } while (fVar23 <= fVar19);
      }
      else {
        do {
          if (pfVar8 == param_1) goto LAB_10a925ae4;
          pfVar5 = pfVar8 + -2;
          fVar20 = pfVar8[-1] - fVar27;
          _atan2f(fVar20,*pfVar5 - fVar26);
          fVar23 = fVar20 + 6.2831855;
          if (0.0 <= fVar20) {
            fVar23 = fVar20;
          }
          pfVar8 = pfVar5;
        } while (fVar23 <= fVar19);
      }
      pfVar16 = pfVar5;
      pfVar8 = pfVar14;
      pfVar9 = pfVar14;
      if (pfVar14 < pfVar5) {
        do {
          uVar6 = *(undefined8 *)pfVar9;
          *(undefined8 *)pfVar9 = *(undefined8 *)pfVar16;
          *(undefined8 *)pfVar16 = uVar6;
          pfVar12 = (float *)*param_3;
          do {
            pfVar8 = pfVar9 + 2;
            if (pfVar8 == param_2) goto LAB_10a925ae4;
            fVar26 = *pfVar12;
            fVar27 = pfVar12[1];
            fVar19 = pfVar9[3] - fVar27;
            fVar23 = fVar24 - fVar27;
            _atan2f(fVar19,*pfVar8 - fVar26);
            _atan2f(fVar23,fVar25 - fVar26);
            uVar15 = CONCAT44(fVar23,fVar19) ^
                     (CONCAT44(fVar23,fVar19) ^ CONCAT44(fVar23 + 6.2831855,fVar19 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar23 < 0.0),-(uint)(fVar19 < 0.0));
            fVar19 = (float)(uVar15 >> 0x20);
            pfVar9 = pfVar8;
          } while (fVar19 < (float)uVar15);
          do {
            if (pfVar16 == param_1) goto LAB_10a925ae4;
            pfVar12 = pfVar16 + -2;
            fVar20 = pfVar16[-1] - fVar27;
            _atan2f(fVar20,*pfVar12 - fVar26);
            fVar23 = fVar20 + 6.2831855;
            if (0.0 <= fVar20) {
              fVar23 = fVar20;
            }
            pfVar16 = pfVar12;
          } while (fVar23 <= fVar19);
        } while (pfVar8 < pfVar12);
      }
      pfVar16 = pfVar8 + -2;
      if (pfVar16 != param_1) {
        *(undefined8 *)param_1 = *(undefined8 *)pfVar16;
      }
      pfVar8[-2] = fVar25;
      pfVar8[-1] = fVar24;
      if (pfVar5 <= pfVar14) {
        pfVar14 = param_1;
        FUN_10a92611c(param_1,pfVar16,param_3);
        pfVar5 = pfVar8;
        FUN_10a92611c(pfVar8,param_2,param_3);
        if ((int)pfVar5 != 0) goto LAB_10a9252a8;
        if (((ulong)pfVar14 & 1) != 0) goto LAB_10a924d58;
      }
      FUN_10a924cdc(param_1,pfVar16,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_10a924d58;
    }
    fVar25 = *param_1;
    fVar24 = param_1[1];
    pfVar8 = (float *)*param_3;
    fVar26 = *pfVar8;
    fVar27 = pfVar8[1];
    fVar19 = param_1[-1] - fVar27;
    fVar23 = fVar24 - fVar27;
    _atan2f(fVar19,param_1[-2] - fVar26);
    _atan2f(fVar23,fVar25 - fVar26);
    uVar15 = CONCAT44(fVar23,fVar19) ^
             (CONCAT44(fVar23,fVar19) ^ CONCAT44(fVar23 + 6.2831855,fVar19 + 6.2831855)) &
             CONCAT44(-(uint)(fVar23 < 0.0),-(uint)(fVar19 < 0.0));
    fVar19 = (float)(uVar15 >> 0x20);
    if (fVar19 < (float)uVar15) goto LAB_10a924ea4;
    fVar20 = param_2[-1] - fVar27;
    _atan2f(fVar20,param_2[-2] - fVar26);
    fVar23 = fVar20 + 6.2831855;
    if (0.0 <= fVar20) {
      fVar23 = fVar20;
    }
    pfVar14 = param_1;
    if (fVar19 <= fVar23) {
      do {
        pfVar8 = pfVar14 + 2;
        if (param_2 <= pfVar8) break;
        fVar20 = pfVar14[3] - fVar27;
        _atan2f(fVar20,*pfVar8 - fVar26);
        fVar23 = fVar20 + 6.2831855;
        if (0.0 <= fVar20) {
          fVar23 = fVar20;
        }
        pfVar14 = pfVar8;
      } while (fVar19 <= fVar23);
    }
    else {
      do {
        pfVar8 = pfVar14 + 2;
        if (pfVar8 == param_2) goto LAB_10a925ae4;
        fVar20 = pfVar14[3] - fVar27;
        _atan2f(fVar20,*pfVar8 - fVar26);
        fVar23 = fVar20 + 6.2831855;
        if (0.0 <= fVar20) {
          fVar23 = fVar20;
        }
        pfVar14 = pfVar8;
      } while (fVar19 <= fVar23);
    }
    pfVar14 = param_2;
    pfVar5 = param_2;
    if (pfVar8 < param_2) {
      do {
        if (pfVar5 == param_1) goto LAB_10a925ae4;
        pfVar14 = pfVar5 + -2;
        fVar20 = pfVar5[-1] - fVar27;
        _atan2f(fVar20,*pfVar14 - fVar26);
        fVar23 = fVar20 + 6.2831855;
        if (0.0 <= fVar20) {
          fVar23 = fVar20;
        }
        pfVar5 = pfVar14;
      } while (fVar23 < fVar19);
    }
    while (pfVar8 < pfVar14) {
      uVar6 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = *(undefined8 *)pfVar14;
      *(undefined8 *)pfVar14 = uVar6;
      pfVar16 = (float *)*param_3;
      pfVar5 = pfVar8;
      do {
        pfVar8 = pfVar5 + 2;
        if (pfVar8 == param_2) goto LAB_10a925ae4;
        fVar26 = *pfVar8;
        fVar27 = *pfVar16;
        fVar20 = pfVar16[1];
        fVar19 = fVar24 - fVar20;
        fVar23 = pfVar5[3] - fVar20;
        _atan2f(fVar19,fVar25 - fVar27);
        _atan2f(fVar23,fVar26 - fVar27);
        uVar15 = CONCAT44(fVar23 + 6.2831855,fVar19 + 6.2831855) ^
                 (CONCAT44(fVar23 + 6.2831855,fVar19 + 6.2831855) ^ CONCAT44(fVar23,fVar19)) &
                 ~CONCAT44(-(uint)(fVar23 < 0.0),-(uint)(fVar19 < 0.0));
        fVar19 = (float)uVar15;
        pfVar9 = pfVar14;
        pfVar5 = pfVar8;
      } while (fVar19 <= (float)(uVar15 >> 0x20));
      do {
        if (pfVar9 == param_1) goto LAB_10a925ae4;
        pfVar14 = pfVar9 + -2;
        fVar26 = pfVar9[-1] - fVar20;
        _atan2f(fVar26,*pfVar14 - fVar27);
        fVar23 = fVar26 + 6.2831855;
        if (0.0 <= fVar26) {
          fVar23 = fVar26;
        }
        pfVar9 = pfVar14;
      } while (fVar23 < fVar19);
    }
    if (pfVar8 + -2 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)(pfVar8 + -2);
    }
    param_5 = 0;
    pfVar8[-2] = fVar25;
    pfVar8[-1] = fVar24;
  } while( true );
LAB_10a92541c:
  pfVar14 = pfVar8;
  fVar26 = pfVar7[2];
  fVar27 = pfVar7[3];
  fVar19 = *pfVar7;
  fVar23 = *(float *)*param_3;
  fVar25 = ((float *)*param_3)[1];
  fVar24 = fVar27 - fVar25;
  fVar25 = pfVar7[1] - fVar25;
  _atan2f(fVar24,fVar26 - fVar23);
  _atan2f(fVar25,fVar19 - fVar23);
  uVar15 = CONCAT44(fVar25,fVar24) ^
           (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
           CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
  lVar3 = lVar17;
  if ((float)(uVar15 >> 0x20) < (float)uVar15) {
    do {
      lVar13 = lVar3;
      puVar1 = (undefined8 *)((long)param_1 + lVar13);
      puVar1[1] = *puVar1;
      pfVar8 = param_1;
      if (lVar13 == 0) goto LAB_10a925514;
      fVar19 = *(float *)(puVar1 + -1);
      fVar23 = *(float *)*param_3;
      fVar25 = ((float *)*param_3)[1];
      fVar24 = fVar27 - fVar25;
      fVar25 = *(float *)((long)puVar1 + -4) - fVar25;
      _atan2f(fVar24,fVar26 - fVar23);
      _atan2f(fVar25,fVar19 - fVar23);
      uVar15 = CONCAT44(fVar25,fVar24) ^
               (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
               CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
      lVar3 = lVar13 + -8;
    } while ((float)(uVar15 >> 0x20) < (float)uVar15);
    pfVar8 = (float *)((long)param_1 + lVar13);
LAB_10a925514:
    *pfVar8 = fVar26;
    pfVar8[1] = fVar27;
  }
  pfVar8 = pfVar14 + 2;
  lVar17 = lVar17 + 8;
  pfVar7 = pfVar14;
  if (pfVar8 == param_2) {
    return;
  }
  goto LAB_10a92541c;
LAB_10a92553c:
  do {
    if ((long)uVar11 <= (long)uVar18) {
      uVar22 = uVar11 << 1 | 1;
      pfVar8 = param_1 + uVar22 * 2;
      uVar10 = uVar11 * 2 + 2;
      pfVar7 = (float *)*param_3;
      fVar24 = *pfVar7;
      if ((long)uVar10 < (long)uVar15) {
        fVar26 = pfVar8[2];
        fVar25 = pfVar7[1];
        fVar19 = pfVar8[1] - fVar25;
        fVar23 = pfVar8[3] - fVar25;
        _atan2f(fVar19,*pfVar8 - fVar24);
        _atan2f(fVar23,fVar26 - fVar24);
        uVar21 = CONCAT44(fVar23,fVar19) ^
                 (CONCAT44(fVar23,fVar19) ^ CONCAT44(fVar23 + 6.2831855,fVar19 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar23 < 0.0),-(uint)(fVar19 < 0.0));
        pfVar7 = pfVar8 + 2;
        if ((float)uVar21 <= (float)(uVar21 >> 0x20)) {
          uVar10 = uVar22;
          pfVar7 = pfVar8;
        }
      }
      else {
        fVar25 = pfVar7[1];
        uVar10 = uVar22;
        pfVar7 = pfVar8;
      }
      uVar6 = *(undefined8 *)(param_1 + uVar11 * 2);
      fVar19 = pfVar7[1] - fVar25;
      fVar23 = (float)((ulong)uVar6 >> 0x20);
      fVar25 = fVar23 - fVar25;
      _atan2f(fVar19,*pfVar7 - fVar24);
      _atan2f(fVar25,(float)uVar6 - fVar24);
      uVar22 = CONCAT44(fVar25,fVar19) ^
               (CONCAT44(fVar25,fVar19) ^ CONCAT44(fVar25 + 6.2831855,fVar19 + 6.2831855)) &
               CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar19 < 0.0));
      pfVar8 = param_1 + uVar11 * 2;
      if ((float)uVar22 <= (float)(uVar22 >> 0x20)) {
        do {
          pfVar14 = pfVar7;
          *(undefined8 *)pfVar8 = *(undefined8 *)pfVar14;
          if ((long)uVar18 < (long)uVar10) break;
          uVar22 = uVar10 << 1 | 1;
          pfVar8 = param_1 + uVar22 * 2;
          uVar10 = uVar10 * 2 + 2;
          pfVar7 = (float *)*param_3;
          fVar24 = *pfVar7;
          if ((long)uVar10 < (long)uVar15) {
            fVar27 = pfVar8[2];
            fVar25 = pfVar7[1];
            fVar19 = pfVar8[1] - fVar25;
            fVar26 = pfVar8[3] - fVar25;
            _atan2f(fVar19,*pfVar8 - fVar24);
            _atan2f(fVar26,fVar27 - fVar24);
            uVar21 = CONCAT44(fVar26,fVar19) ^
                     (CONCAT44(fVar26,fVar19) ^ CONCAT44(fVar26 + 6.2831855,fVar19 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar26 < 0.0),-(uint)(fVar19 < 0.0));
            pfVar7 = pfVar8 + 2;
            if ((float)uVar21 <= (float)(uVar21 >> 0x20)) {
              uVar10 = uVar22;
              pfVar7 = pfVar8;
            }
          }
          else {
            fVar25 = pfVar7[1];
            uVar10 = uVar22;
            pfVar7 = pfVar8;
          }
          fVar19 = pfVar7[1] - fVar25;
          fVar25 = fVar23 - fVar25;
          _atan2f(fVar19,*pfVar7 - fVar24);
          _atan2f(fVar25,(float)uVar6 - fVar24);
          uVar22 = CONCAT44(fVar25,fVar19) ^
                   (CONCAT44(fVar25,fVar19) ^ CONCAT44(fVar25 + 6.2831855,fVar19 + 6.2831855)) &
                   CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar19 < 0.0));
          pfVar8 = pfVar14;
        } while ((float)uVar22 <= (float)(uVar22 >> 0x20));
        *(undefined8 *)pfVar14 = uVar6;
      }
    }
    bVar2 = uVar11 != 0;
    uVar11 = uVar11 - 1;
  } while (bVar2);
  do {
    uVar6 = *(undefined8 *)param_1;
    uVar11 = 0;
    pfVar8 = param_1;
    do {
      uVar10 = uVar11 << 1 | 1;
      uVar18 = uVar11 * 2 + 2;
      uVar22 = uVar10;
      pfVar7 = pfVar8 + uVar11 * 2 + 2;
      if ((long)uVar18 < (long)uVar15) {
        fVar19 = pfVar8[uVar11 * 2 + 4];
        fVar23 = *(float *)*param_3;
        fVar25 = ((float *)*param_3)[1];
        fVar24 = pfVar8[uVar11 * 2 + 3] - fVar25;
        fVar25 = pfVar8[uVar11 * 2 + 5] - fVar25;
        _atan2f(fVar24,pfVar8[uVar11 * 2 + 2] - fVar23);
        _atan2f(fVar25,fVar19 - fVar23);
        uVar21 = CONCAT44(fVar25,fVar24) ^
                 (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
        uVar22 = uVar18;
        pfVar7 = pfVar8 + uVar11 * 2 + 4;
        if ((float)uVar21 <= (float)(uVar21 >> 0x20)) {
          uVar22 = uVar10;
          pfVar7 = pfVar8 + uVar11 * 2 + 2;
        }
      }
      *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
      uVar11 = uVar22;
      pfVar8 = pfVar7;
    } while ((long)uVar22 <= (long)(uVar15 - 2 >> 1));
    param_2 = param_2 + -2;
    if (pfVar7 == param_2) {
      *(undefined8 *)pfVar7 = uVar6;
    }
    else {
      *(undefined8 *)pfVar7 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar6;
      lVar17 = (long)pfVar7 + (8 - (long)param_1) >> 3;
      if (1 < lVar17) {
        uVar11 = lVar17 - 2U >> 1;
        pfVar8 = param_1 + uVar11 * 2;
        fVar23 = *pfVar7;
        fVar26 = pfVar7[1];
        fVar19 = *(float *)*param_3;
        fVar25 = ((float *)*param_3)[1];
        fVar24 = pfVar8[1] - fVar25;
        fVar25 = fVar26 - fVar25;
        _atan2f(fVar24,*pfVar8 - fVar19);
        _atan2f(fVar25,fVar23 - fVar19);
        uVar18 = CONCAT44(fVar25,fVar24) ^
                 (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                 CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
        if ((float)(uVar18 >> 0x20) < (float)uVar18) {
          do {
            pfVar14 = pfVar8;
            *(undefined8 *)pfVar7 = *(undefined8 *)pfVar14;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            pfVar8 = param_1 + uVar11 * 2;
            fVar19 = *(float *)*param_3;
            fVar25 = ((float *)*param_3)[1];
            fVar24 = pfVar8[1] - fVar25;
            fVar25 = fVar26 - fVar25;
            _atan2f(fVar24,*pfVar8 - fVar19);
            _atan2f(fVar25,fVar23 - fVar19);
            uVar18 = CONCAT44(fVar25,fVar24) ^
                     (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar25 + 6.2831855,fVar24 + 6.2831855)) &
                     CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
            pfVar7 = pfVar14;
          } while ((float)(uVar18 >> 0x20) < (float)uVar18);
          *pfVar14 = fVar23;
          pfVar14[1] = fVar26;
        }
      }
    }
    bVar2 = (long)uVar15 < 3;
    uVar15 = uVar15 - 1;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_10a9252a8:
  param_2 = pfVar16;
  if (((ulong)pfVar14 & 1) != 0) {
    return;
  }
  goto LAB_10a924d40;
}



/* Entry: 10a925ae8; end: 10a925d0f;  */

void FUN_10a925ae8(float *param_1,float *param_2,float *param_3,long *param_4)

{
  undefined8 uVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_1;
  fVar6 = *(float *)*param_4;
  fVar7 = ((float *)*param_4)[1];
  fVar2 = param_2[1] - fVar7;
  fVar5 = param_1[1] - fVar7;
  _atan2f(fVar2,*param_2 - fVar6);
  _atan2f(fVar5,fVar4 - fVar6);
  fVar4 = fVar5 + 6.2831855;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar7 = param_3[1] - fVar7;
  _atan2f(fVar7,*param_3 - fVar6);
  uVar3 = CONCAT44(fVar2,fVar7) ^
          (CONCAT44(fVar2,fVar7) ^ CONCAT44(fVar2 + 6.2831855,fVar7 + 6.2831855)) &
          CONCAT44(-(uint)(fVar2 < 0.0),-(uint)(fVar7 < 0.0));
  fVar5 = (float)(uVar3 >> 0x20);
  fVar2 = (float)uVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 < fVar2) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      fVar5 = *param_1;
      fVar7 = *(float *)*param_4;
      fVar2 = ((float *)*param_4)[1];
      fVar4 = param_2[1] - fVar2;
      fVar2 = param_1[1] - fVar2;
      _atan2f(fVar4,*param_2 - fVar7);
      _atan2f(fVar2,fVar5 - fVar7);
      uVar3 = CONCAT44(fVar2,fVar4) ^
              (CONCAT44(fVar2,fVar4) ^ CONCAT44(fVar2 + 6.2831855,fVar4 + 6.2831855)) &
              CONCAT44(-(uint)(fVar2 < 0.0),-(uint)(fVar4 < 0.0));
      if ((float)(uVar3 >> 0x20) < (float)uVar3) {
        uVar1 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar1;
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    if (fVar2 <= fVar5) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar1;
      fVar5 = *(float *)*param_4;
      fVar2 = ((float *)*param_4)[1];
      fVar4 = param_3[1] - fVar2;
      fVar2 = (float)((ulong)uVar1 >> 0x20) - fVar2;
      _atan2f(fVar4,*param_3 - fVar5);
      _atan2f(fVar2,(float)uVar1 - fVar5);
      uVar3 = CONCAT44(fVar2,fVar4) ^
              (CONCAT44(fVar2,fVar4) ^ CONCAT44(fVar2 + 6.2831855,fVar4 + 6.2831855)) &
              CONCAT44(-(uint)(fVar2 < 0.0),-(uint)(fVar4 < 0.0));
      if ((float)uVar3 <= (float)(uVar3 >> 0x20)) {
        return;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar1;
  }
  return;
}



/* Entry: 10a925d10; end: 10a92611b;  */

void FUN_10a925d10(float *param_1,float *param_2,float *param_3,float *param_4,long *param_5)

{
  undefined8 uVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_10a925ae8();
  fVar4 = *param_3;
  fVar5 = *(float *)*param_5;
  fVar6 = ((float *)*param_5)[1];
  fVar2 = param_4[1] - fVar6;
  fVar6 = param_3[1] - fVar6;
  _atan2f(fVar2,*param_4 - fVar5);
  _atan2f(fVar6,fVar4 - fVar5);
  uVar3 = CONCAT44(fVar6,fVar2) ^
          (CONCAT44(fVar6,fVar2) ^ CONCAT44(fVar6 + 6.2831855,fVar2 + 6.2831855)) &
          CONCAT44(-(uint)(fVar6 < 0.0),-(uint)(fVar2 < 0.0));
  if ((float)(uVar3 >> 0x20) < (float)uVar3) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar1;
    fVar4 = *param_2;
    fVar5 = *(float *)*param_5;
    fVar6 = ((float *)*param_5)[1];
    fVar2 = param_3[1] - fVar6;
    fVar6 = param_2[1] - fVar6;
    _atan2f(fVar2,*param_3 - fVar5);
    _atan2f(fVar6,fVar4 - fVar5);
    uVar3 = CONCAT44(fVar6,fVar2) ^
            (CONCAT44(fVar6,fVar2) ^ CONCAT44(fVar6 + 6.2831855,fVar2 + 6.2831855)) &
            CONCAT44(-(uint)(fVar6 < 0.0),-(uint)(fVar2 < 0.0));
    if ((float)(uVar3 >> 0x20) < (float)uVar3) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      fVar4 = *param_1;
      fVar5 = *(float *)*param_5;
      fVar6 = ((float *)*param_5)[1];
      fVar2 = param_2[1] - fVar6;
      fVar6 = param_1[1] - fVar6;
      _atan2f(fVar2,*param_2 - fVar5);
      _atan2f(fVar6,fVar4 - fVar5);
      uVar3 = CONCAT44(fVar6,fVar2) ^
              (CONCAT44(fVar6,fVar2) ^ CONCAT44(fVar6 + 6.2831855,fVar2 + 6.2831855)) &
              CONCAT44(-(uint)(fVar6 < 0.0),-(uint)(fVar2 < 0.0));
      if ((float)(uVar3 >> 0x20) < (float)uVar3) {
        uVar1 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar1;
      }
    }
  }
  return;
}



/* Entry: 10a92611c; end: 10a9263f7;  */

bool FUN_10a92611c(float *param_1,float *param_2,long *param_3)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      fVar11 = *param_1;
      fVar12 = *(float *)*param_3;
      fVar13 = ((float *)*param_3)[1];
      fVar10 = param_2[-1] - fVar13;
      fVar13 = param_1[1] - fVar13;
      _atan2f(fVar10,param_2[-2] - fVar12);
      _atan2f(fVar13,fVar11 - fVar12);
      uVar3 = CONCAT44(fVar13,fVar10) ^
              (CONCAT44(fVar13,fVar10) ^ CONCAT44(fVar13 + 6.2831855,fVar10 + 6.2831855)) &
              CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar10 < 0.0));
      if ((float)uVar3 <= (float)(uVar3 >> 0x20)) {
        return true;
      }
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar4;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      FUN_10a925ae8(param_1,param_1 + 2,param_2 + -2,param_3);
      return true;
    }
    if (uVar3 == 4) {
      func_0x00010a925d10(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar3 == 5) {
      func_0x00010a925ed8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_10a925ae8(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    pfVar5 = param_1 + 4;
    pfVar7 = param_1 + 6;
    do {
      fVar14 = *pfVar7;
      fVar15 = pfVar7[1];
      fVar11 = *pfVar5;
      fVar12 = *(float *)*param_3;
      fVar13 = ((float *)*param_3)[1];
      fVar10 = fVar15 - fVar13;
      fVar13 = pfVar5[1] - fVar13;
      _atan2f(fVar10,fVar14 - fVar12);
      _atan2f(fVar13,fVar11 - fVar12);
      uVar3 = CONCAT44(fVar13,fVar10) ^
              (CONCAT44(fVar13,fVar10) ^ CONCAT44(fVar13 + 6.2831855,fVar10 + 6.2831855)) &
              CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar10 < 0.0));
      lVar2 = lVar8;
      if ((float)(uVar3 >> 0x20) < (float)uVar3) {
        do {
          lVar6 = lVar2;
          *(undefined8 *)((long)param_1 + lVar6 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x10);
          pfVar5 = param_1;
          if (lVar6 == -0x10) goto LAB_10a926380;
          fVar11 = *(float *)((long)param_1 + lVar6 + 8);
          fVar12 = *(float *)*param_3;
          fVar13 = ((float *)*param_3)[1];
          fVar10 = fVar15 - fVar13;
          fVar13 = *(float *)((long)param_1 + lVar6 + 0xc) - fVar13;
          _atan2f(fVar10,fVar14 - fVar12);
          _atan2f(fVar13,fVar11 - fVar12);
          uVar3 = CONCAT44(fVar13,fVar10) ^
                  (CONCAT44(fVar13,fVar10) ^ CONCAT44(fVar13 + 6.2831855,fVar10 + 6.2831855)) &
                  CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar10 < 0.0));
          lVar2 = lVar6 + -8;
        } while ((float)(uVar3 >> 0x20) < (float)uVar3);
        pfVar5 = (float *)((long)param_1 + lVar6 + 0x10);
LAB_10a926380:
        *pfVar5 = fVar14;
        pfVar5[1] = fVar15;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return pfVar7 + 2 == param_2;
        }
      }
      pfVar1 = pfVar7 + 2;
      lVar8 = lVar8 + 8;
      pfVar5 = pfVar7;
      pfVar7 = pfVar1;
    } while (pfVar1 != param_2);
  }
  return true;
}



/* Entry: 10a9263f8; end: 10a9272e3;  */

void FUN_10a9263f8(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plStack_78;
  
LAB_10a926430:
  plStack_78 = param_2 + -1;
  plVar8 = param_1;
LAB_10a926448:
  do {
    param_1 = plVar8;
    uVar18 = (long)param_2 - (long)param_1;
    uVar16 = ((long)uVar18 >> 3) * -0x5555555555555555;
    if (uVar16 - 2 == 0 || (long)uVar16 < 2) {
      if (uVar16 < 2) {
        return;
      }
      if (uVar16 == 2) {
        lVar10 = *param_1;
        if ((ulong)(param_2[-2] - param_2[-3]) <= (ulong)(param_1[1] - lVar10)) {
          return;
        }
        *param_1 = param_2[-3];
        param_2[-3] = lVar10;
        lVar10 = param_1[1];
        param_1[1] = param_2[-2];
        param_2[-2] = lVar10;
        lVar10 = param_1[2];
        param_1[2] = param_2[-1];
        param_2[-1] = lVar10;
        return;
      }
    }
    else {
      if (uVar16 == 3) {
        lVar10 = param_1[3];
        uVar18 = param_1[4] - lVar10;
        lVar11 = *param_1;
        lVar19 = param_1[1];
        uVar16 = lVar19 - lVar11;
        lVar13 = param_2[-3];
        if (uVar16 < uVar18) {
          if (uVar18 < (ulong)(param_2[-2] - lVar13)) {
            plVar8 = param_1 + 2;
            *param_1 = lVar13;
            param_2[-3] = lVar11;
            lVar10 = param_1[1];
            param_1[1] = param_2[-2];
          }
          else {
            *param_1 = lVar10;
            param_1[1] = param_1[4];
            param_1[3] = lVar11;
            param_1[4] = lVar19;
            plVar8 = param_1 + 5;
            lVar10 = param_1[2];
            param_1[2] = *plVar8;
            *plVar8 = lVar10;
            if ((ulong)(param_2[-2] - param_2[-3]) <= uVar16) {
              return;
            }
            param_1[3] = param_2[-3];
            param_2[-3] = lVar11;
            lVar10 = param_1[4];
            param_1[4] = param_2[-2];
          }
          param_2[-2] = lVar10;
        }
        else {
          if ((ulong)(param_2[-2] - lVar13) <= uVar18) {
            return;
          }
          param_1[3] = lVar13;
          param_2[-3] = lVar10;
          lVar10 = param_1[4];
          param_1[4] = param_2[-2];
          param_2[-2] = lVar10;
          plStack_78 = param_1 + 5;
          lVar10 = *plStack_78;
          *plStack_78 = param_2[-1];
          param_2[-1] = lVar10;
          lVar10 = *param_1;
          lVar11 = param_1[1];
          if ((ulong)(param_1[4] - param_1[3]) <= (ulong)(lVar11 - lVar10)) {
            return;
          }
          *param_1 = param_1[3];
          param_1[1] = param_1[4];
          plVar8 = param_1 + 2;
          param_1[3] = lVar10;
          param_1[4] = lVar11;
        }
        lVar10 = *plVar8;
        *plVar8 = *plStack_78;
        *plStack_78 = lVar10;
        return;
      }
      if (uVar16 == 4) {
        plVar8 = param_1 + 3;
        plVar6 = param_1 + 6;
        lVar10 = *plVar8;
        uVar16 = param_1[4] - lVar10;
        lVar11 = *param_1;
        lVar13 = *plVar6;
        if ((ulong)(param_1[1] - lVar11) < uVar16) {
          if (uVar16 < (ulong)(param_1[7] - lVar13)) {
            plVar9 = param_1 + 2;
            *param_1 = lVar13;
            *plVar6 = lVar11;
            lVar10 = param_1[1];
            param_1[1] = param_1[7];
          }
          else {
            *param_1 = lVar10;
            *plVar8 = lVar11;
            lVar10 = param_1[1];
            param_1[1] = param_1[4];
            param_1[4] = lVar10;
            plVar9 = param_1 + 5;
            lVar10 = param_1[2];
            param_1[2] = *plVar9;
            *plVar9 = lVar10;
            lVar10 = *plVar8;
            if ((ulong)(param_1[7] - *plVar6) <= (ulong)(param_1[4] - lVar10)) goto LAB_10a927404;
            *plVar8 = *plVar6;
            *plVar6 = lVar10;
            lVar10 = param_1[4];
            param_1[4] = param_1[7];
          }
          param_1[7] = lVar10;
          plVar7 = param_1 + 8;
        }
        else {
          if ((ulong)(param_1[7] - lVar13) <= uVar16) goto LAB_10a927404;
          *plVar8 = lVar13;
          *plVar6 = lVar10;
          lVar10 = param_1[4];
          param_1[4] = param_1[7];
          param_1[7] = lVar10;
          plVar7 = param_1 + 5;
          lVar10 = *plVar7;
          *plVar7 = param_1[8];
          param_1[8] = lVar10;
          lVar10 = *param_1;
          if ((ulong)(param_1[4] - *plVar8) <= (ulong)(param_1[1] - lVar10)) goto LAB_10a927404;
          *param_1 = *plVar8;
          *plVar8 = lVar10;
          lVar10 = param_1[1];
          param_1[1] = param_1[4];
          param_1[4] = lVar10;
          plVar9 = param_1 + 2;
        }
        lVar10 = *plVar9;
        *plVar9 = *plVar7;
        *plVar7 = lVar10;
LAB_10a927404:
        lVar10 = param_2[-3];
        lVar11 = *plVar6;
        if ((ulong)(param_1[7] - lVar11) < (ulong)(param_2[-2] - lVar10)) {
          *plVar6 = lVar10;
          param_2[-3] = lVar11;
          lVar10 = param_1[7];
          param_1[7] = param_2[-2];
          param_2[-2] = lVar10;
          lVar10 = param_1[8];
          param_1[8] = param_2[-1];
          param_2[-1] = lVar10;
          lVar10 = *plVar8;
          if ((ulong)(param_1[4] - lVar10) < (ulong)(param_1[7] - *plVar6)) {
            *plVar8 = *plVar6;
            *plVar6 = lVar10;
            lVar10 = param_1[4];
            param_1[4] = param_1[7];
            param_1[7] = lVar10;
            lVar10 = param_1[5];
            param_1[5] = param_1[8];
            param_1[8] = lVar10;
            lVar10 = *param_1;
            if ((ulong)(param_1[1] - lVar10) < (ulong)(param_1[4] - *plVar8)) {
              *param_1 = *plVar8;
              *plVar8 = lVar10;
              lVar10 = param_1[1];
              param_1[1] = param_1[4];
              param_1[4] = lVar10;
              lVar10 = param_1[2];
              param_1[2] = param_1[5];
              param_1[5] = lVar10;
            }
          }
        }
        return;
      }
      if (uVar16 == 5) {
        plVar8 = param_1 + 3;
        plVar6 = param_1 + 6;
        plVar7 = param_1 + 9;
        FUN_10a9272e4();
        lVar10 = param_2[-3];
        lVar11 = *plVar7;
        if ((ulong)(param_1[10] - lVar11) < (ulong)(param_2[-2] - lVar10)) {
          *plVar7 = lVar10;
          param_2[-3] = lVar11;
          lVar10 = param_1[10];
          param_1[10] = param_2[-2];
          param_2[-2] = lVar10;
          lVar10 = param_1[0xb];
          param_1[0xb] = param_2[-1];
          param_2[-1] = lVar10;
          lVar10 = *plVar6;
          if ((ulong)(param_1[7] - lVar10) < (ulong)(param_1[10] - *plVar7)) {
            *plVar6 = *plVar7;
            *plVar7 = lVar10;
            lVar10 = param_1[7];
            param_1[7] = param_1[10];
            param_1[10] = lVar10;
            lVar10 = param_1[8];
            param_1[8] = param_1[0xb];
            param_1[0xb] = lVar10;
            lVar10 = *plVar8;
            if ((ulong)(param_1[4] - lVar10) < (ulong)(param_1[7] - *plVar6)) {
              *plVar8 = *plVar6;
              *plVar6 = lVar10;
              lVar10 = param_1[4];
              param_1[4] = param_1[7];
              param_1[7] = lVar10;
              lVar10 = param_1[5];
              param_1[5] = param_1[8];
              param_1[8] = lVar10;
              lVar10 = *param_1;
              if ((ulong)(param_1[1] - lVar10) < (ulong)(param_1[4] - *plVar8)) {
                *param_1 = *plVar8;
                *plVar8 = lVar10;
                lVar10 = param_1[1];
                param_1[1] = param_1[4];
                param_1[4] = lVar10;
                lVar10 = param_1[2];
                param_1[2] = param_1[5];
                param_1[5] = lVar10;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar18 < 0x240) {
      plVar8 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || plVar8 == param_2) {
          return;
        }
        lVar10 = 0x18;
        do {
          lVar11 = param_1[4];
          lVar13 = *plVar8;
          uVar16 = lVar11 - lVar13;
          if ((ulong)(param_1[1] - *param_1) < uVar16) {
            lVar12 = param_1[5];
            *plVar8 = 0;
            plVar8[1] = 0;
            plVar8[2] = 0;
            lVar19 = 0;
            do {
              lVar21 = lVar19;
              lVar3 = (long)plVar8 + lVar21;
              FUN_10a927984(lVar3,(long)param_1 + lVar21);
              if (lVar10 + lVar21 == 0) {
LAB_10a927268:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a92726c);
                (*pcVar5)();
              }
              lVar19 = lVar21 + -0x18;
            } while ((ulong)(*(long *)(lVar3 + -0x28) - *(long *)(lVar3 + -0x30)) < uVar16);
            if (*(long *)((long)plVar8 + lVar19) != 0) {
              *(long *)((long)plVar8 + lVar21 + -0x10) = *(long *)((long)plVar8 + lVar19);
              __ZdlPv();
            }
            plVar6 = (long *)((long)plVar8 + lVar19);
            *plVar6 = lVar13;
            plVar6[1] = lVar11;
            plVar6[2] = lVar12;
          }
          param_1 = param_1 + 3;
          lVar10 = lVar10 + 0x18;
          plVar8 = plVar8 + 3;
          if (plVar8 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || plVar8 == param_2) {
        return;
      }
      lVar10 = 0;
      plVar6 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar17 = uVar16 - 2 >> 1;
      uVar15 = uVar17;
      goto LAB_10a926ea4;
    }
    plVar8 = param_1 + (uVar16 >> 1) * 3;
    lVar10 = param_2[-3];
    uVar16 = param_2[-2] - lVar10;
    if (uVar18 < 0xc01) {
      lVar11 = *param_1;
      lVar19 = param_1[1];
      uVar15 = lVar19 - lVar11;
      lVar13 = *plVar8;
      lVar12 = plVar8[1];
      uVar18 = lVar12 - lVar13;
      if (uVar18 < uVar15) {
        plVar6 = plStack_78;
        if (uVar15 < uVar16) {
          plVar7 = plVar8 + 2;
          *plVar8 = lVar10;
          param_2[-3] = lVar13;
          lVar10 = plVar8[1];
          plVar8[1] = param_2[-2];
          param_2[-2] = lVar10;
        }
        else {
          *plVar8 = lVar11;
          *param_1 = lVar13;
          plVar8[1] = lVar19;
          plVar7 = param_1 + 2;
          param_1[1] = lVar12;
          lVar10 = plVar8[2];
          plVar8[2] = *plVar7;
          *plVar7 = lVar10;
          if ((ulong)(param_2[-2] - param_2[-3]) <= uVar18) goto LAB_10a9269cc;
          *param_1 = param_2[-3];
          param_2[-3] = lVar13;
          lVar10 = param_1[1];
          param_1[1] = param_2[-2];
          param_2[-2] = lVar10;
        }
        goto LAB_10a9269bc;
      }
      if (uVar15 < uVar16) {
        *param_1 = lVar10;
        param_2[-3] = lVar11;
        lVar10 = param_1[1];
        param_1[1] = param_2[-2];
        param_2[-2] = lVar10;
        plVar6 = param_1 + 2;
        lVar10 = *plVar6;
        *plVar6 = param_2[-1];
        param_2[-1] = lVar10;
        lVar11 = param_1[1];
        lVar10 = *plVar8;
        lVar13 = plVar8[1];
        if ((ulong)(lVar13 - lVar10) < (ulong)(lVar11 - *param_1)) {
          *plVar8 = *param_1;
          *param_1 = lVar10;
          plVar8[1] = lVar11;
          plVar7 = plVar8 + 2;
          param_1[1] = lVar13;
          goto LAB_10a9269bc;
        }
      }
    }
    else {
      lVar11 = *plVar8;
      lVar19 = plVar8[1];
      uVar15 = lVar19 - lVar11;
      lVar13 = *param_1;
      lVar12 = param_1[1];
      uVar18 = lVar12 - lVar13;
      if (uVar18 < uVar15) {
        if (uVar15 < uVar16) {
          plVar7 = param_1 + 2;
          *param_1 = lVar10;
          param_2[-3] = lVar13;
          lVar10 = param_1[1];
          param_1[1] = param_2[-2];
        }
        else {
          *param_1 = lVar11;
          *plVar8 = lVar13;
          param_1[1] = lVar19;
          plVar7 = plVar8 + 2;
          plVar8[1] = lVar12;
          lVar10 = param_1[2];
          param_1[2] = *plVar7;
          *plVar7 = lVar10;
          if ((ulong)(param_2[-2] - param_2[-3]) <= uVar18) goto LAB_10a926654;
          *plVar8 = param_2[-3];
          param_2[-3] = lVar13;
          lVar10 = plVar8[1];
          plVar8[1] = param_2[-2];
        }
        param_2[-2] = lVar10;
        plVar6 = plStack_78;
LAB_10a926644:
        lVar10 = *plVar7;
        *plVar7 = *plVar6;
        *plVar6 = lVar10;
      }
      else if (uVar15 < uVar16) {
        *plVar8 = lVar10;
        param_2[-3] = lVar11;
        lVar10 = plVar8[1];
        plVar8[1] = param_2[-2];
        param_2[-2] = lVar10;
        plVar6 = plVar8 + 2;
        lVar10 = *plVar6;
        *plVar6 = param_2[-1];
        param_2[-1] = lVar10;
        lVar11 = plVar8[1];
        lVar10 = *param_1;
        lVar13 = param_1[1];
        if ((ulong)(lVar13 - lVar10) < (ulong)(lVar11 - *plVar8)) {
          *param_1 = *plVar8;
          *plVar8 = lVar10;
          param_1[1] = lVar11;
          plVar7 = param_1 + 2;
          plVar8[1] = lVar13;
          goto LAB_10a926644;
        }
      }
LAB_10a926654:
      lVar10 = plVar8[-3];
      uVar16 = plVar8[-2] - lVar10;
      lVar11 = param_1[3];
      lVar13 = param_2[-6];
      if ((ulong)(param_1[4] - lVar11) < uVar16) {
        if (uVar16 < (ulong)(param_2[-5] - lVar13)) {
          plVar7 = param_1 + 5;
          param_1[3] = lVar13;
          param_2[-6] = lVar11;
          lVar10 = param_1[4];
          param_1[4] = param_2[-5];
        }
        else {
          param_1[3] = lVar10;
          plVar8[-3] = lVar11;
          lVar10 = param_1[4];
          param_1[4] = plVar8[-2];
          plVar8[-2] = lVar10;
          plVar7 = plVar8 + -1;
          lVar10 = param_1[5];
          param_1[5] = *plVar7;
          *plVar7 = lVar10;
          lVar10 = plVar8[-3];
          if ((ulong)(param_2[-5] - param_2[-6]) <= (ulong)(plVar8[-2] - lVar10))
          goto LAB_10a9267c8;
          plVar8[-3] = param_2[-6];
          param_2[-6] = lVar10;
          lVar10 = plVar8[-2];
          plVar8[-2] = param_2[-5];
        }
        param_2[-5] = lVar10;
        plVar6 = param_2 + -4;
LAB_10a9267b8:
        lVar10 = *plVar7;
        *plVar7 = *plVar6;
        *plVar6 = lVar10;
      }
      else if (uVar16 < (ulong)(param_2[-5] - lVar13)) {
        plVar8[-3] = lVar13;
        param_2[-6] = lVar10;
        lVar10 = plVar8[-2];
        plVar8[-2] = param_2[-5];
        param_2[-5] = lVar10;
        plVar6 = plVar8 + -1;
        lVar10 = *plVar6;
        *plVar6 = param_2[-4];
        param_2[-4] = lVar10;
        lVar10 = param_1[3];
        if ((ulong)(param_1[4] - lVar10) < (ulong)(plVar8[-2] - plVar8[-3])) {
          param_1[3] = plVar8[-3];
          plVar8[-3] = lVar10;
          lVar10 = param_1[4];
          param_1[4] = plVar8[-2];
          plVar8[-2] = lVar10;
          plVar7 = param_1 + 5;
          goto LAB_10a9267b8;
        }
      }
LAB_10a9267c8:
      lVar13 = plVar8[3];
      lVar19 = plVar8[4];
      uVar16 = lVar19 - lVar13;
      lVar10 = param_1[6];
      lVar11 = param_2[-9];
      if ((ulong)(param_1[7] - lVar10) < uVar16) {
        if (uVar16 < (ulong)(param_2[-8] - lVar11)) {
          plVar7 = param_1 + 8;
          param_1[6] = lVar11;
          param_2[-9] = lVar10;
          lVar10 = param_1[7];
          param_1[7] = param_2[-8];
        }
        else {
          param_1[6] = lVar13;
          plVar8[3] = lVar10;
          lVar10 = param_1[7];
          param_1[7] = plVar8[4];
          plVar8[4] = lVar10;
          plVar7 = plVar8 + 5;
          lVar10 = param_1[8];
          param_1[8] = *plVar7;
          *plVar7 = lVar10;
          lVar13 = plVar8[3];
          lVar19 = plVar8[4];
          uVar16 = lVar19 - lVar13;
          if ((ulong)(param_2[-8] - param_2[-9]) <= uVar16) goto LAB_10a9268f0;
          plVar8[3] = param_2[-9];
          param_2[-9] = lVar13;
          lVar10 = plVar8[4];
          plVar8[4] = param_2[-8];
        }
        param_2[-8] = lVar10;
        plVar6 = param_2 + -7;
LAB_10a9268d8:
        lVar10 = *plVar7;
        *plVar7 = *plVar6;
        *plVar6 = lVar10;
        lVar13 = plVar8[3];
        lVar19 = plVar8[4];
        uVar16 = lVar19 - lVar13;
      }
      else if (uVar16 < (ulong)(param_2[-8] - lVar11)) {
        plVar8[3] = lVar11;
        param_2[-9] = lVar13;
        lVar10 = plVar8[4];
        plVar8[4] = param_2[-8];
        param_2[-8] = lVar10;
        plVar6 = plVar8 + 5;
        lVar10 = *plVar6;
        *plVar6 = param_2[-7];
        param_2[-7] = lVar10;
        lVar13 = plVar8[3];
        lVar19 = plVar8[4];
        uVar16 = lVar19 - lVar13;
        lVar10 = param_1[6];
        if ((ulong)(param_1[7] - lVar10) < uVar16) {
          param_1[6] = lVar13;
          plVar8[3] = lVar10;
          lVar10 = param_1[7];
          param_1[7] = plVar8[4];
          plVar8[4] = lVar10;
          plVar7 = param_1 + 8;
          goto LAB_10a9268d8;
        }
      }
LAB_10a9268f0:
      lVar10 = *plVar8;
      lVar12 = plVar8[1];
      uVar15 = lVar12 - lVar10;
      lVar11 = plVar8[-3];
      lVar3 = plVar8[-2];
      uVar18 = lVar3 - lVar11;
      if (uVar18 < uVar15) {
        if (uVar15 < uVar16) {
          plVar7 = plVar8 + -1;
          plVar8[-3] = lVar13;
          plVar8[-2] = lVar19;
        }
        else {
          plVar8[-3] = lVar10;
          plVar8[-2] = lVar12;
          plVar7 = plVar8 + 2;
          *plVar8 = lVar11;
          plVar8[1] = lVar3;
          lVar10 = plVar8[-1];
          plVar8[-1] = *plVar7;
          *plVar7 = lVar10;
          lVar12 = lVar3;
          lVar10 = lVar11;
          if (uVar16 <= uVar18) goto LAB_10a92699c;
          *plVar8 = lVar13;
          plVar8[1] = lVar19;
        }
        plVar6 = plVar8 + 5;
        plVar8[3] = lVar11;
        plVar8[4] = lVar3;
LAB_10a926988:
        lVar10 = *plVar7;
        *plVar7 = *plVar6;
        *plVar6 = lVar10;
        lVar12 = plVar8[1];
        lVar10 = *plVar8;
      }
      else if (uVar15 < uVar16) {
        *plVar8 = lVar13;
        plVar8[1] = lVar19;
        plVar8[3] = lVar10;
        plVar8[4] = lVar12;
        plVar6 = plVar8 + 2;
        lVar10 = *plVar6;
        *plVar6 = plVar8[5];
        plVar8[5] = lVar10;
        lVar12 = lVar19;
        lVar10 = lVar13;
        if (uVar18 < uVar16) {
          plVar8[-3] = lVar13;
          plVar8[-2] = lVar19;
          plVar7 = plVar8 + -1;
          *plVar8 = lVar11;
          plVar8[1] = lVar3;
          goto LAB_10a926988;
        }
      }
LAB_10a92699c:
      lVar11 = *param_1;
      *param_1 = lVar10;
      *plVar8 = lVar11;
      lVar10 = param_1[1];
      param_1[1] = lVar12;
      plVar8[1] = lVar10;
      plVar7 = param_1 + 2;
      plVar6 = plVar8 + 2;
LAB_10a9269bc:
      lVar10 = *plVar7;
      *plVar7 = *plVar6;
      *plVar6 = lVar10;
    }
LAB_10a9269cc:
    param_3 = param_3 + -1;
    lVar10 = *param_1;
    if ((param_4 & 1) != 0) {
      lVar11 = param_1[1];
      uVar16 = lVar11 - lVar10;
LAB_10a926a00:
      lVar13 = 0;
      lVar19 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      do {
        plVar8 = (long *)((long)param_1 + lVar13 + 0x18);
        if (plVar8 == param_2) goto LAB_10a927268;
        lVar3 = lVar13 + 0x20;
        lVar12 = *plVar8;
        lVar13 = lVar13 + 0x18;
      } while (uVar16 < (ulong)(*(long *)((long)param_1 + lVar3) - lVar12));
      plVar6 = (long *)((long)param_1 + lVar13);
      plVar8 = param_2;
      if (lVar13 == 0x18) {
        do {
          plVar7 = plVar8;
          if (plVar8 <= plVar6) break;
          plVar7 = plVar8 + -3;
          plVar9 = plVar8 + -2;
          plVar8 = plVar7;
        } while ((ulong)(*plVar9 - *plVar7) <= uVar16);
      }
      else {
        do {
          if (plVar8 == param_1) goto LAB_10a927268;
          plVar7 = plVar8 + -3;
          plVar9 = plVar8 + -2;
          plVar8 = plVar7;
        } while ((ulong)(*plVar9 - *plVar7) <= uVar16);
      }
      plVar8 = plVar6;
      if (plVar6 < plVar7) {
        lVar13 = *plVar7;
        plVar9 = plVar7;
        do {
          *plVar8 = lVar13;
          *plVar9 = lVar12;
          lVar13 = plVar8[1];
          plVar8[1] = plVar9[1];
          plVar9[1] = lVar13;
          lVar13 = plVar8[2];
          plVar8[2] = plVar9[2];
          plVar9[2] = lVar13;
          plVar4 = plVar8;
          do {
            plVar8 = plVar4 + 3;
            if (plVar8 == param_2) goto LAB_10a927268;
            lVar12 = *plVar8;
            plVar14 = plVar4 + 4;
            plVar4 = plVar8;
          } while (uVar16 < (ulong)(*plVar14 - lVar12));
          do {
            if (plVar9 == param_1) goto LAB_10a927268;
            plVar14 = plVar9 + -3;
            lVar13 = *plVar14;
            plVar4 = plVar9 + -2;
            plVar9 = plVar14;
          } while ((ulong)(*plVar4 - lVar13) <= uVar16);
        } while (plVar8 < plVar14);
      }
      plVar9 = plVar8 + -3;
      if (plVar9 != param_1) {
        FUN_10a927984(param_1,plVar9);
      }
      if (*plVar9 != 0) {
        plVar8[-2] = *plVar9;
        __ZdlPv();
      }
      plVar8[-3] = lVar10;
      plVar8[-2] = lVar11;
      plVar8[-1] = lVar19;
      if (plVar7 <= plVar6) {
        plVar6 = param_1;
        FUN_10a927608(param_1,plVar9);
        plVar7 = plVar8;
        FUN_10a927608(plVar8,param_2);
        if ((int)plVar7 != 0) goto LAB_10a926cdc;
        if (((ulong)plVar6 & 1) != 0) goto LAB_10a926448;
      }
      FUN_10a9263f8(param_1,plVar9,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_10a926448;
    }
    lVar11 = param_1[1];
    uVar16 = lVar11 - lVar10;
    if (uVar16 < (ulong)(param_1[-2] - param_1[-3])) goto LAB_10a926a00;
    lVar13 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar6 = param_1;
    if ((ulong)(param_2[-2] - param_2[-3]) < uVar16) {
      do {
        plVar8 = plVar6 + 3;
        if (plVar8 == param_2) goto LAB_10a927268;
        plVar7 = plVar6 + 4;
        plVar6 = plVar8;
      } while (uVar16 <= (ulong)(*plVar7 - *plVar8));
    }
    else {
      do {
        plVar8 = plVar6 + 3;
        if (param_2 <= plVar8) break;
        plVar7 = plVar6 + 4;
        plVar6 = plVar8;
      } while (uVar16 <= (ulong)(*plVar7 - *plVar8));
    }
    plVar6 = param_2;
    plVar7 = param_2;
    if (plVar8 < param_2) {
      do {
        if (plVar7 == param_1) goto LAB_10a927268;
        plVar6 = plVar7 + -3;
        plVar9 = plVar7 + -2;
        plVar7 = plVar6;
      } while ((ulong)(*plVar9 - *plVar6) < uVar16);
    }
    if (plVar8 < plVar6) {
      lVar19 = *plVar8;
      lVar12 = *plVar6;
      do {
        *plVar8 = lVar12;
        *plVar6 = lVar19;
        lVar19 = plVar8[1];
        plVar8[1] = plVar6[1];
        plVar6[1] = lVar19;
        lVar19 = plVar8[2];
        plVar8[2] = plVar6[2];
        plVar6[2] = lVar19;
        plVar7 = plVar8;
        do {
          plVar8 = plVar7 + 3;
          if (plVar8 == param_2) goto LAB_10a927268;
          lVar19 = *plVar8;
          plVar9 = plVar7 + 4;
          plVar7 = plVar8;
        } while (uVar16 <= (ulong)(*plVar9 - lVar19));
        do {
          if (plVar6 == param_1) goto LAB_10a927268;
          plVar9 = plVar6 + -3;
          lVar12 = *plVar9;
          plVar7 = plVar6 + -2;
          plVar6 = plVar9;
        } while ((ulong)(*plVar7 - lVar12) < uVar16);
      } while (plVar8 < plVar9);
    }
    plVar6 = plVar8 + -3;
    if (plVar6 != param_1) {
      FUN_10a927984(param_1,plVar6);
    }
    if (*plVar6 != 0) {
      plVar8[-2] = *plVar6;
      __ZdlPv();
    }
    param_4 = 0;
    plVar8[-3] = lVar10;
    plVar8[-2] = lVar11;
    plVar8[-1] = lVar13;
  } while( true );
LAB_10a926df8:
  lVar11 = plVar6[4];
  lVar13 = *plVar8;
  uVar16 = lVar11 - lVar13;
  if ((ulong)(plVar6[1] - *plVar6) < uVar16) {
    lVar12 = plVar6[5];
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    lVar19 = lVar10;
    do {
      lVar21 = lVar19;
      lVar3 = (long)param_1 + lVar21;
      FUN_10a927984(lVar3 + 0x18,lVar3);
      plVar6 = param_1;
      if (lVar21 == 0) goto LAB_10a926e60;
      lVar19 = lVar21 + -0x18;
    } while ((ulong)(*(long *)(lVar3 + -0x10) - *(long *)(lVar3 + -0x18)) < uVar16);
    plVar6 = (long *)((long)param_1 + lVar21);
LAB_10a926e60:
    if (*plVar6 != 0) {
      plVar6[1] = *plVar6;
      __ZdlPv();
    }
    *plVar6 = lVar13;
    plVar6[1] = lVar11;
    plVar6[2] = lVar12;
  }
  plVar7 = plVar8 + 3;
  lVar10 = lVar10 + 0x18;
  plVar6 = plVar8;
  plVar8 = plVar7;
  if (plVar7 == param_2) {
    return;
  }
  goto LAB_10a926df8;
LAB_10a926ea4:
  do {
    if ((long)uVar15 <= (long)uVar17) {
      uVar22 = uVar15 << 1 | 1;
      plVar8 = param_1 + uVar22 * 3;
      uVar20 = uVar15 * 2 + 2;
      if ((long)uVar20 < (long)uVar16) {
        lVar10 = plVar8[3];
        plVar6 = plVar8 + 3;
        if ((ulong)(plVar8[1] - *plVar8) <= (ulong)(plVar8[4] - lVar10)) {
          plVar6 = plVar8;
          lVar10 = *plVar8;
          uVar20 = uVar22;
        }
      }
      else {
        plVar6 = plVar8;
        lVar10 = *plVar8;
        uVar20 = uVar22;
      }
      plVar8 = param_1 + uVar15 * 3;
      lVar11 = *plVar8;
      lVar13 = plVar8[1];
      uVar22 = lVar13 - lVar11;
      if ((ulong)(plVar6[1] - lVar10) <= uVar22) {
        lVar10 = plVar8[2];
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        do {
          plVar7 = plVar6;
          FUN_10a927984(plVar8,plVar7);
          if ((long)uVar17 < (long)uVar20) break;
          uVar1 = uVar20 << 1 | 1;
          plVar8 = param_1 + uVar1 * 3;
          uVar20 = uVar20 * 2 + 2;
          if ((long)uVar20 < (long)uVar16) {
            lVar19 = plVar8[3];
            plVar6 = plVar8 + 3;
            if ((ulong)(plVar8[1] - *plVar8) <= (ulong)(plVar8[4] - lVar19)) {
              plVar6 = plVar8;
              lVar19 = *plVar8;
              uVar20 = uVar1;
            }
          }
          else {
            plVar6 = plVar8;
            lVar19 = *plVar8;
            uVar20 = uVar1;
          }
          plVar8 = plVar7;
        } while ((ulong)(plVar6[1] - lVar19) <= uVar22);
        if (*plVar7 != 0) {
          plVar7[1] = *plVar7;
          __ZdlPv();
        }
        *plVar7 = lVar11;
        plVar7[1] = lVar13;
        plVar7[2] = lVar10;
      }
    }
    bVar2 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar2);
  lVar10 = (uVar18 >> 3) * -0x5555555555555555;
  do {
    lVar12 = param_1[1];
    lVar19 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar8 = param_1;
    uVar16 = 0;
    do {
      uVar15 = uVar16 << 1 | 1;
      uVar18 = uVar16 * 2 + 2;
      plVar6 = plVar8 + uVar16 * 3 + 3;
      uVar17 = uVar15;
      if (((long)uVar18 < lVar10) &&
         (plVar6 = plVar8 + uVar16 * 3 + 6, uVar17 = uVar18,
         (ulong)(plVar8[uVar16 * 3 + 4] - plVar8[uVar16 * 3 + 3]) <=
         (ulong)(plVar8[uVar16 * 3 + 7] - plVar8[uVar16 * 3 + 6]))) {
        plVar6 = plVar8 + uVar16 * 3 + 3;
        uVar17 = uVar15;
      }
      FUN_10a927984(plVar8,plVar6);
      plVar8 = plVar6;
      uVar16 = uVar17;
    } while ((long)uVar17 <= (long)(lVar10 - 2U >> 1));
    plVar8 = param_2 + -3;
    if (plVar6 == plVar8) {
      if (*plVar6 != 0) {
        plVar6[1] = *plVar6;
        __ZdlPv();
        plVar6[1] = 0;
        plVar6[2] = 0;
      }
      *plVar6 = lVar19;
LAB_10a927154:
      plVar6[1] = lVar11;
      plVar6[2] = lVar13;
    }
    else {
      FUN_10a927984(plVar6,plVar8);
      if (*plVar8 != 0) {
        param_2[-2] = *plVar8;
        __ZdlPv();
      }
      param_2[-2] = lVar12;
      param_2[-3] = lVar19;
      param_2[-1] = lVar13;
      uVar16 = (long)plVar6 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar16) {
        uVar18 = (uVar16 >> 3) * -0x5555555555555555 - 2 >> 1;
        plVar7 = param_1 + uVar18 * 3;
        lVar19 = *plVar6;
        lVar11 = plVar6[1];
        uVar16 = lVar11 - lVar19;
        if (uVar16 < (ulong)(plVar7[1] - *plVar7)) {
          lVar13 = plVar6[2];
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
          plVar9 = plVar6;
          do {
            plVar6 = plVar7;
            FUN_10a927984(plVar9,plVar6);
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            plVar7 = param_1 + uVar18 * 3;
            plVar9 = plVar6;
          } while (uVar16 < (ulong)(plVar7[1] - *plVar7));
          if (*plVar6 != 0) {
            plVar6[1] = *plVar6;
            __ZdlPv();
            plVar6[1] = 0;
            plVar6[2] = 0;
          }
          *plVar6 = lVar19;
          goto LAB_10a927154;
        }
      }
    }
    bVar2 = lVar10 < 3;
    lVar10 = lVar10 + -1;
    param_2 = plVar8;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_10a926cdc:
  param_2 = plVar9;
  if (((ulong)plVar6 & 1) != 0) {
    return;
  }
  goto LAB_10a926430;
}



/* Entry: 10a9272e4; end: 10a9274c7;  */

void FUN_10a9272e4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar4 = *param_2;
  uVar6 = param_2[1] - lVar4;
  lVar1 = *param_1;
  lVar2 = *param_3;
  if ((ulong)(param_1[1] - lVar1) < uVar6) {
    if (uVar6 < (ulong)(param_3[1] - lVar2)) {
      plVar3 = param_1 + 2;
      *param_1 = lVar2;
      *param_3 = lVar1;
      lVar4 = param_1[1];
      param_1[1] = param_3[1];
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar1;
      lVar4 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar4;
      plVar3 = param_2 + 2;
      lVar4 = param_1[2];
      param_1[2] = *plVar3;
      *plVar3 = lVar4;
      lVar4 = *param_2;
      if ((ulong)(param_3[1] - *param_3) <= (ulong)(param_2[1] - lVar4)) goto LAB_10a927404;
      *param_2 = *param_3;
      *param_3 = lVar4;
      lVar4 = param_2[1];
      param_2[1] = param_3[1];
    }
    param_3[1] = lVar4;
    plVar5 = param_3 + 2;
  }
  else {
    if ((ulong)(param_3[1] - lVar2) <= uVar6) goto LAB_10a927404;
    *param_2 = lVar2;
    *param_3 = lVar4;
    lVar4 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar4;
    plVar5 = param_2 + 2;
    lVar4 = *plVar5;
    *plVar5 = param_3[2];
    param_3[2] = lVar4;
    lVar4 = *param_1;
    if ((ulong)(param_2[1] - *param_2) <= (ulong)(param_1[1] - lVar4)) goto LAB_10a927404;
    *param_1 = *param_2;
    *param_2 = lVar4;
    lVar4 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar4;
    plVar3 = param_1 + 2;
  }
  lVar4 = *plVar3;
  *plVar3 = *plVar5;
  *plVar5 = lVar4;
LAB_10a927404:
  lVar4 = *param_3;
  if ((ulong)(param_3[1] - lVar4) < (ulong)(param_4[1] - *param_4)) {
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = lVar4;
    lVar4 = param_3[2];
    param_3[2] = param_4[2];
    param_4[2] = lVar4;
    lVar4 = *param_2;
    if ((ulong)(param_2[1] - lVar4) < (ulong)(param_3[1] - *param_3)) {
      *param_2 = *param_3;
      *param_3 = lVar4;
      lVar4 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = lVar4;
      lVar4 = param_2[2];
      param_2[2] = param_3[2];
      param_3[2] = lVar4;
      lVar4 = *param_1;
      if ((ulong)(param_1[1] - lVar4) < (ulong)(param_2[1] - *param_2)) {
        *param_1 = *param_2;
        *param_2 = lVar4;
        lVar4 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = lVar4;
        lVar4 = param_1[2];
        param_1[2] = param_2[2];
        param_2[2] = lVar4;
      }
    }
  }
  return;
}



/* Entry: 10a9274c8; end: 10a927607;  */

void FUN_10a9274c8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  
  FUN_10a9272e4();
  lVar1 = *param_4;
  if ((ulong)(param_4[1] - lVar1) < (ulong)(param_5[1] - *param_5)) {
    *param_4 = *param_5;
    *param_5 = lVar1;
    lVar1 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = lVar1;
    lVar1 = param_4[2];
    param_4[2] = param_5[2];
    param_5[2] = lVar1;
    lVar1 = *param_3;
    if ((ulong)(param_3[1] - lVar1) < (ulong)(param_4[1] - *param_4)) {
      *param_3 = *param_4;
      *param_4 = lVar1;
      lVar1 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = lVar1;
      lVar1 = param_3[2];
      param_3[2] = param_4[2];
      param_4[2] = lVar1;
      lVar1 = *param_2;
      if ((ulong)(param_2[1] - lVar1) < (ulong)(param_3[1] - *param_3)) {
        *param_2 = *param_3;
        *param_3 = lVar1;
        lVar1 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = lVar1;
        lVar1 = param_2[2];
        param_2[2] = param_3[2];
        param_3[2] = lVar1;
        lVar1 = *param_1;
        if ((ulong)(param_1[1] - lVar1) < (ulong)(param_2[1] - *param_2)) {
          *param_1 = *param_2;
          *param_2 = lVar1;
          lVar1 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = lVar1;
          lVar1 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = lVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a927608; end: 10a927983;  */

bool FUN_10a927608(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      lVar7 = *param_1;
      if ((ulong)(param_2[-2] - param_2[-3]) <= (ulong)(param_1[1] - lVar7)) {
        return true;
      }
      *param_1 = param_2[-3];
      param_2[-3] = lVar7;
      lVar7 = param_1[1];
      param_1[1] = param_2[-2];
      param_2[-2] = lVar7;
      lVar7 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = lVar7;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      lVar7 = param_1[3];
      uVar12 = param_1[4] - lVar7;
      lVar2 = *param_1;
      lVar4 = param_1[1];
      uVar6 = lVar4 - lVar2;
      lVar3 = param_2[-3];
      if (uVar6 < uVar12) {
        if (uVar12 < (ulong)(param_2[-2] - lVar3)) {
          plVar8 = param_1 + 2;
          *param_1 = lVar3;
          param_2[-3] = lVar2;
          lVar7 = param_1[1];
          param_1[1] = param_2[-2];
        }
        else {
          *param_1 = lVar7;
          param_1[1] = param_1[4];
          param_1[3] = lVar2;
          param_1[4] = lVar4;
          plVar8 = param_1 + 5;
          lVar7 = param_1[2];
          param_1[2] = *plVar8;
          *plVar8 = lVar7;
          if ((ulong)(param_2[-2] - param_2[-3]) <= uVar6) {
            return true;
          }
          param_1[3] = param_2[-3];
          param_2[-3] = lVar2;
          lVar7 = param_1[4];
          param_1[4] = param_2[-2];
        }
        param_2[-2] = lVar7;
        plVar9 = param_2 + -1;
      }
      else {
        if ((ulong)(param_2[-2] - lVar3) <= uVar12) {
          return true;
        }
        param_1[3] = lVar3;
        param_2[-3] = lVar7;
        lVar7 = param_1[4];
        param_1[4] = param_2[-2];
        param_2[-2] = lVar7;
        plVar9 = param_1 + 5;
        lVar7 = *plVar9;
        *plVar9 = param_2[-1];
        param_2[-1] = lVar7;
        lVar7 = *param_1;
        lVar2 = param_1[1];
        if ((ulong)(param_1[4] - param_1[3]) <= (ulong)(lVar2 - lVar7)) {
          return true;
        }
        *param_1 = param_1[3];
        param_1[1] = param_1[4];
        plVar8 = param_1 + 2;
        param_1[3] = lVar7;
        param_1[4] = lVar2;
      }
      lVar7 = *plVar8;
      *plVar8 = *plVar9;
      *plVar9 = lVar7;
      return true;
    }
    if (uVar6 == 4) {
      FUN_10a9272e4(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar6 == 5) {
      FUN_10a9274c8(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
      return true;
    }
  }
  lVar10 = param_1[6];
  lVar7 = param_1[3];
  lVar3 = param_1[4];
  uVar6 = lVar3 - lVar7;
  lVar2 = *param_1;
  lVar4 = param_1[1];
  uVar12 = lVar4 - lVar2;
  lVar11 = param_1[7];
  uVar13 = lVar11 - lVar10;
  if (uVar12 < uVar6) {
    if (uVar6 < uVar13) {
      plVar8 = param_1 + 2;
      *param_1 = lVar10;
      param_1[1] = lVar11;
    }
    else {
      *param_1 = lVar7;
      param_1[1] = lVar3;
      plVar8 = param_1 + 5;
      param_1[3] = lVar2;
      param_1[4] = lVar4;
      lVar7 = param_1[2];
      param_1[2] = *plVar8;
      *plVar8 = lVar7;
      if (uVar13 <= uVar12) goto LAB_10a927898;
      param_1[3] = lVar10;
      param_1[4] = lVar11;
    }
    plVar9 = param_1 + 8;
    param_1[6] = lVar2;
    param_1[7] = lVar4;
  }
  else {
    if (uVar13 <= uVar6) goto LAB_10a927898;
    plVar9 = param_1 + 5;
    lVar5 = *plVar9;
    param_1[3] = lVar10;
    param_1[4] = lVar11;
    *plVar9 = param_1[8];
    param_1[6] = lVar7;
    param_1[7] = lVar3;
    param_1[8] = lVar5;
    if (uVar13 <= uVar12) goto LAB_10a927898;
    *param_1 = lVar10;
    param_1[1] = lVar11;
    plVar8 = param_1 + 2;
    param_1[3] = lVar2;
    param_1[4] = lVar4;
  }
  lVar7 = *plVar8;
  *plVar8 = *plVar9;
  *plVar9 = lVar7;
LAB_10a927898:
  if (param_1 + 9 != param_2) {
    lVar7 = 0;
    iVar14 = 0;
    plVar9 = param_1 + 6;
    plVar8 = param_1 + 9;
    do {
      lVar2 = *plVar8;
      lVar3 = plVar8[1];
      uVar6 = lVar3 - lVar2;
      if ((ulong)(plVar9[1] - *plVar9) < uVar6) {
        lVar10 = plVar8[2];
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        lVar4 = lVar7;
        do {
          lVar11 = lVar4;
          FUN_10a927984((long)param_1 + lVar11 + 0x48,(long)param_1 + lVar11 + 0x30);
          plVar9 = param_1;
          if (lVar11 == -0x30) goto LAB_10a927914;
          lVar4 = lVar11 + -0x18;
        } while ((ulong)(*(long *)((long)param_1 + lVar11 + 0x20) -
                        *(long *)((long)param_1 + lVar11 + 0x18)) < uVar6);
        plVar9 = (long *)((long)param_1 + lVar11 + 0x30);
LAB_10a927914:
        if (*plVar9 != 0) {
          plVar9[1] = *plVar9;
          __ZdlPv();
        }
        *plVar9 = lVar2;
        plVar9[1] = lVar3;
        plVar9[2] = lVar10;
        iVar14 = iVar14 + 1;
        if (iVar14 == 8) {
          return plVar8 + 3 == param_2;
        }
      }
      plVar1 = plVar8 + 3;
      lVar7 = lVar7 + 0x18;
      plVar9 = plVar8;
      plVar8 = plVar1;
    } while (plVar1 != param_2);
  }
  return true;
}



/* Entry: 10a927984; end: 10a9279d3;  */

void FUN_10a927984(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a9279d4; end: 10a9279e3;  */

void FUN_10a9279d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f1a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9279e4; end: 10a927a03;  */

void FUN_10a9279e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f1a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a927a04; end: 10a927a13;  */

void FUN_10a927a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a927a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a927a14; end: 10a927a6b;  */

long FUN_10a927a14(long param_1)

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



/* Entry: 10a927a6c; end: 10a927e67;  */

void FUN_10a927a6c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  float *pfStack_f8;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  float *pfStack_a8;
  float *pfStack_a0;
  long lStack_98;
  float *pfStack_90;
  undefined8 uStack_88;
  float *pfStack_80;
  float *pfStack_78;
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
  FUN_10a8e1a70(param_5);
  FUN_10a1f7d54(&puStack_b8,param_2,param_4);
  plVar6 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_c8,param_2,param_4 + 0x20);
  FUN_10a927e68(&pfStack_a8,*puStack_b8,puStack_b8[1],plVar6);
  pfVar19 = pfStack_a0;
  pfVar1 = pfStack_a8;
  if ((ulong)plStack_c8[1] < (ulong)((long)pfStack_a0 * (long)pfStack_a8 * lStack_98)) {
    FUN_10a00946c(&UNK_10f683bcc);
LAB_10a927e14:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a927e18);
    (*pcVar4)();
  }
  pfVar20 = (float *)*plStack_c8;
  pfStack_80 = (float *)CONCAT44(pfStack_80._4_4_,0x800000);
  FUN_10a14e0c0(&pfStack_a8,lStack_98,&pfStack_80);
  uStack_88 = (float *)((ulong)uStack_88 & 0xffffffff);
  FUN_10a14e0c0(&pfStack_80,lStack_98,(long)&uStack_88 + 4);
  if (pfVar1 != (float *)0x0) {
    pfVar8 = (float *)0x0;
    lVar11 = (long)pfVar19 * lStack_98;
    pfVar13 = pfStack_90;
    do {
      if (pfVar19 != (float *)0x0) {
        pfVar14 = (float *)0x0;
        lVar15 = (long)pfStack_a0 - (long)pfStack_a8 >> 2;
        lVar9 = lVar15;
        pfVar12 = pfVar13;
        pfVar26 = pfStack_a8;
        lVar17 = lStack_98;
        pfVar16 = pfVar13;
        do {
          for (; lVar17 != 0; lVar17 = lVar17 + -1) {
            if (lVar9 == 0) goto LAB_10a927e14;
            fVar28 = *pfVar12;
            if (*pfVar12 <= *pfVar26) {
              fVar28 = *pfVar26;
            }
            *pfVar26 = fVar28;
            lVar9 = lVar9 + -1;
            pfVar12 = pfVar12 + 1;
            pfVar26 = pfVar26 + 1;
          }
          pfVar14 = (float *)((long)pfVar14 + 1);
          pfVar12 = pfVar16 + lStack_98;
          lVar9 = lVar15;
          pfVar26 = pfStack_a8;
          lVar17 = lStack_98;
          pfVar16 = pfVar12;
        } while (pfVar14 != pfVar19);
      }
      pfVar8 = (float *)((long)pfVar8 + 1);
      pfVar13 = pfVar13 + lVar11;
    } while (pfVar8 != pfVar1);
    pfVar8 = (float *)0x0;
    pfVar13 = pfStack_90;
    pfStack_f8 = pfVar20;
    do {
      pfVar14 = pfStack_a8;
      if (pfVar19 != (float *)0x0) {
        pfVar12 = (float *)0x0;
        lVar9 = (long)pfStack_a0 - (long)pfStack_a8;
        pfVar16 = pfVar13;
        pfVar26 = pfStack_f8;
        do {
          if (lStack_98 != 0) {
            lVar18 = (long)pfStack_78 - (long)pfStack_80 >> 2;
            lVar17 = lStack_98;
            pfVar21 = pfVar14;
            pfVar22 = pfVar26;
            pfVar24 = pfStack_80;
            lVar15 = lVar9 >> 2;
            pfVar27 = pfVar16;
            do {
              if (lVar15 == 0) goto LAB_10a927e14;
              fVar28 = *pfVar27 - *pfVar21;
              _expf();
              *pfVar22 = fVar28;
              if (lVar18 == 0) goto LAB_10a927e14;
              *pfVar24 = fVar28 + *pfVar24;
              lVar18 = lVar18 + -1;
              lVar15 = lVar15 + -1;
              lVar17 = lVar17 + -1;
              pfVar21 = pfVar21 + 1;
              pfVar22 = pfVar22 + 1;
              pfVar24 = pfVar24 + 1;
              pfVar27 = pfVar27 + 1;
            } while (lVar17 != 0);
          }
          pfVar12 = (float *)((long)pfVar12 + 1);
          pfVar26 = pfVar26 + lStack_98;
          pfVar16 = pfVar16 + lStack_98;
        } while (pfVar12 != pfVar19);
      }
      pfVar8 = (float *)((long)pfVar8 + 1);
      pfStack_f8 = pfStack_f8 + lVar11;
      pfVar13 = pfVar13 + lVar11;
    } while (pfVar8 != pfVar1);
    pfVar8 = (float *)0x0;
    do {
      if (pfVar19 != (float *)0x0) {
        pfVar13 = (float *)0x0;
        lVar15 = (long)pfStack_78 - (long)pfStack_80 >> 2;
        lVar9 = lVar15;
        pfVar14 = pfVar20;
        lVar17 = lStack_98;
        pfVar12 = pfStack_80;
        pfVar26 = pfVar20;
        do {
          for (; lVar17 != 0; lVar17 = lVar17 + -1) {
            if (lVar9 == 0) goto LAB_10a927e14;
            *pfVar14 = *pfVar14 / *pfVar12;
            lVar9 = lVar9 + -1;
            pfVar14 = pfVar14 + 1;
            pfVar12 = pfVar12 + 1;
          }
          pfVar13 = (float *)((long)pfVar13 + 1);
          pfVar14 = pfVar26 + lStack_98;
          lVar9 = lVar15;
          lVar17 = lStack_98;
          pfVar12 = pfStack_80;
          pfVar26 = pfVar14;
        } while (pfVar13 != pfVar19);
      }
      pfVar8 = (float *)((long)pfVar8 + 1);
      pfVar20 = pfVar20 + lVar11;
    } while (pfVar8 != pfVar1);
  }
  if (pfStack_80 != (float *)0x0) {
    pfStack_78 = pfStack_80;
    __ZdlPv();
  }
  if (pfStack_a8 != (float *)0x0) {
    pfStack_a0 = pfStack_a8;
    __ZdlPv();
  }
  if (plStack_c0 != (long *)0x0) {
    plVar6 = plStack_c0 + 1;
    do {
      lVar11 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  if (plStack_b0 != (long *)0x0) {
    plVar6 = plStack_b0 + 1;
    do {
      lVar11 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar7 = lVar11 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar11 + 2];
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
  pfVar1 = (float *)*plVar6;
  pfVar19 = (float *)plVar5[0x4c];
  lVar11 = (long)pfVar19 - (long)pfVar1;
  uVar23 = lVar11 >> 4;
  if (uVar23 < uVar7) {
    uVar25 = uVar7 - uVar23;
    lVar9 = plVar5[0x4d];
    if ((ulong)(lVar9 - (long)pfVar19 >> 4) < uVar25) {
      if (uVar7 >> 0x3c == 0) {
        uVar10 = lVar9 - (long)pfVar1 >> 3;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar9 - (long)pfVar1)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar15 = uVar10 << 4;
          __Znwm();
          lVar17 = lVar15 + lVar11;
          _bzero(lVar17,uVar25 * 0x10);
          lVar18 = lVar17 + uVar23 * -0x10;
          _memcpy(lVar18,pfVar1,lVar11);
          *plVar6 = lVar18;
          plVar5[0x4c] = lVar17 + uVar25 * 0x10;
          plVar5[0x4d] = lVar15 + uVar10 * 0x10;
          uStack_88 = pfVar1;
          pfStack_80 = pfVar1;
          pfStack_78 = pfVar1;
          lStack_70 = lVar9;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(pfVar19,uVar25 * 0x10);
    plVar5[0x4c] = (long)(pfVar19 + uVar25 * 4);
  }
  else if (uVar7 < uVar23) {
    while (pfVar19 != pfVar1 + uVar7 * 4) {
      pfVar19 = pfVar19 + -4;
      func_0x00010988c204(pfVar19);
    }
    plVar5[0x4c] = (long)(pfVar1 + uVar7 * 4);
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a927e68; end: 10a927ed3;  */

undefined * FUN_10a927e68(long *param_1,long param_2,ulong param_3,undefined *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_10a8bcad0(&lStack_48,param_4);
  if ((ulong)(lStack_48 * lStack_40 * lStack_38) <= param_3) {
    *param_1 = lStack_40;
    param_1[1] = lStack_48;
    param_1[2] = lStack_38;
    param_1[3] = param_2;
    return param_4;
  }
  puVar4 = &UNK_10f683bcc;
  FUN_10a00946c();
  plVar6 = *(long **)(puVar4 + 0x10);
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
  return puVar4 + 8;
}



/* Entry: 10a927ed4; end: 10a927f0f;  */

long FUN_10a927ed4(long param_1)

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



/* Entry: 10a927f10; end: 10a928457;  */

void FUN_10a927f10(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  float fVar23;
  float *pfStack_108;
  float *pfStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  float *pfStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  float *pfStack_a0;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float *pfStack_88;
  float *pfStack_80;
  float *pfStack_78;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a928458(param_5);
  FUN_10a1f7d54(&puStack_c8,param_2,param_4);
  plVar6 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_d8,param_2,param_4 + 0x20);
  func_0x00010989847c(param_2,param_4 + 0x30);
  FUN_10a927e68(&pfStack_b8,*puStack_c8,puStack_c8[1],plVar6);
  uVar11 = uStack_b0;
  pfVar1 = pfStack_b8;
  if ((ulong)plStack_d8[1] < (ulong)(lStack_a8 << 1)) {
    FUN_10a00946c(&UNK_10f683bcc);
LAB_10a928404:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a928408);
    (*pcVar4)();
  }
  lVar18 = *plStack_d8;
  if ((int)param_2 == 0) {
    uStack_90 = 0x800000;
    FUN_10a14e0c0(&pfStack_b8,lStack_a8,&uStack_90);
    uStack_94 = 0;
    FUN_10a14e0c0(&uStack_90,lStack_a8,&uStack_94);
    if (lStack_a8 != 0) {
      _bzero(lVar18,lStack_a8 << 3);
    }
    if (pfVar1 != (float *)0x0) {
      pfVar12 = (float *)0x0;
      pfVar14 = pfStack_a0;
      do {
        if (uVar11 != 0) {
          uVar15 = 0;
          lVar19 = (long)(uStack_b0 - (long)pfStack_b8) >> 2;
          lVar7 = lVar19;
          pfVar17 = pfVar14;
          pfVar8 = pfStack_b8;
          lVar9 = lStack_a8;
          pfVar16 = pfVar14;
          do {
            for (; lVar9 != 0; lVar9 = lVar9 + -1) {
              if (lVar7 == 0) goto LAB_10a928404;
              fVar23 = *pfVar17;
              if (*pfVar17 <= *pfVar8) {
                fVar23 = *pfVar8;
              }
              *pfVar8 = fVar23;
              lVar7 = lVar7 + -1;
              pfVar17 = pfVar17 + 1;
              pfVar8 = pfVar8 + 1;
            }
            uVar15 = uVar15 + 1;
            pfVar17 = pfVar16 + lStack_a8;
            lVar7 = lVar19;
            pfVar8 = pfStack_b8;
            lVar9 = lStack_a8;
            pfVar16 = pfVar17;
          } while (uVar15 != uVar11);
        }
        pfVar12 = (float *)((long)pfVar12 + 1);
        pfVar14 = pfVar14 + uVar11 * lStack_a8;
      } while (pfVar12 != pfVar1);
      pfStack_108 = (float *)0x0;
      pfVar12 = pfStack_a0;
      do {
        pfVar14 = pfStack_b8;
        if (uVar11 != 0) {
          uVar15 = 0;
          lVar7 = uStack_b0 - (long)pfStack_b8;
          pfStack_e0 = pfVar12;
          do {
            if (lStack_a8 != 0) {
              lVar20 = (long)pfStack_88 - (long)CONCAT44(uStack_8c,uStack_90) >> 2;
              lVar9 = lVar7 >> 2;
              pfVar17 = (float *)(lVar18 + 4);
              lVar19 = lStack_a8;
              pfVar8 = (float *)CONCAT44(uStack_8c,uStack_90);
              pfVar16 = pfStack_e0;
              pfVar22 = pfVar14;
              do {
                if (lVar9 == 0) goto LAB_10a928404;
                fVar23 = *pfVar16 - *pfVar22;
                _expf();
                pfVar17[-1] = pfVar17[-1] + fVar23 * (float)uVar15;
                *pfVar17 = *pfVar17 + fVar23 * (float)pfStack_108;
                if (lVar20 == 0) goto LAB_10a928404;
                *pfVar8 = fVar23 + *pfVar8;
                lVar20 = lVar20 + -1;
                pfVar17 = pfVar17 + 2;
                lVar9 = lVar9 + -1;
                lVar19 = lVar19 + -1;
                pfVar8 = pfVar8 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar22 = pfVar22 + 1;
              } while (lVar19 != 0);
            }
            uVar15 = uVar15 + 1;
            pfStack_e0 = pfStack_e0 + lStack_a8;
          } while (uVar15 != uVar11);
        }
        pfStack_108 = (float *)((long)pfStack_108 + 1);
        pfVar12 = pfVar12 + uVar11 * lStack_a8;
      } while (pfStack_108 != pfVar1);
    }
    pfVar1 = (float *)CONCAT44(uStack_8c,uStack_90);
    if (lStack_a8 == 0) {
      if (pfVar1 == (float *)0x0) goto LAB_10a928344;
    }
    else {
      lVar7 = (long)pfStack_88 - (long)pfVar1 >> 2;
      pfVar12 = (float *)(lVar18 + 4);
      pfVar14 = pfVar1;
      do {
        if (lVar7 == 0) goto LAB_10a928404;
        pfVar12[-1] = pfVar12[-1] / *pfVar14;
        *pfVar12 = *pfVar12 / *pfVar14;
        lVar7 = lVar7 + -1;
        lStack_a8 = lStack_a8 + -1;
        pfVar12 = pfVar12 + 2;
        pfVar14 = pfVar14 + 1;
      } while (lStack_a8 != 0);
    }
    pfStack_88 = pfVar1;
    __ZdlPv();
LAB_10a928344:
    if (pfStack_b8 != (float *)0x0) goto LAB_10a928348;
  }
  else {
    uStack_90 = 0;
    FUN_10a14e0c0(&pfStack_b8,lStack_a8,&uStack_90);
    if (lStack_a8 != 0) {
      _bzero(lVar18,lStack_a8 << 3);
    }
    if (pfVar1 != (float *)0x0) {
      pfVar12 = (float *)0x0;
      do {
        if (uVar11 != 0) {
          uVar15 = 0;
          pfVar14 = pfStack_a0;
          do {
            if (lStack_a8 != 0) {
              lVar7 = (long)(uStack_b0 - (long)pfStack_b8) >> 2;
              pfVar8 = pfStack_b8;
              lVar9 = lStack_a8;
              pfVar16 = pfVar14;
              pfVar17 = (float *)(lVar18 + 4);
              do {
                fVar23 = *pfVar16;
                pfVar17[-1] = pfVar17[-1] + fVar23 * (float)uVar15;
                *pfVar17 = *pfVar17 + fVar23 * (float)pfVar12;
                if (lVar7 == 0) goto LAB_10a928404;
                *pfVar8 = fVar23 + *pfVar8;
                lVar7 = lVar7 + -1;
                pfVar17 = pfVar17 + 2;
                lVar9 = lVar9 + -1;
                pfVar8 = pfVar8 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar9 != 0);
            }
            uVar15 = uVar15 + 1;
            pfVar14 = pfVar14 + lStack_a8;
          } while (uVar15 != uVar11);
        }
        pfVar12 = (float *)((long)pfVar12 + 1);
        pfStack_a0 = pfStack_a0 + uVar11 * lStack_a8;
      } while (pfVar12 != pfVar1);
    }
    if (lStack_a8 == 0) goto LAB_10a928344;
    lVar7 = (long)(uStack_b0 - (long)pfStack_b8) >> 2;
    pfVar12 = (float *)(lVar18 + 4);
    do {
      if (lVar7 == 0) goto LAB_10a928404;
      if (*pfStack_b8 == 0.0) {
        pfVar12[-1] = (float)((double)(uVar11 - 1) / 2.0);
        *pfVar12 = (float)((double)((long)pfVar1 - 1) / 2.0);
      }
      else {
        pfVar12[-1] = pfVar12[-1] / *pfStack_b8;
        *pfVar12 = *pfVar12 / *pfStack_b8;
      }
      pfVar12 = pfVar12 + 2;
      pfStack_b8 = pfStack_b8 + 1;
      lVar7 = lVar7 + -1;
      lStack_a8 = lStack_a8 + -1;
    } while (lStack_a8 != 0);
LAB_10a928348:
    __ZdlPv();
  }
  if (plStack_d0 != (long *)0x0) {
    plVar6 = plStack_d0 + 1;
    do {
      lVar18 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if (plStack_c0 != (long *)0x0) {
    plVar6 = plStack_c0 + 1;
    do {
      lVar18 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar18 = plVar5[0x59];
  uVar11 = lVar18 - 1;
  plVar5[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar18 + 2];
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  pfVar1 = (float *)*plVar6;
  pfVar12 = (float *)plVar5[0x4c];
  lVar18 = (long)pfVar12 - (long)pfVar1;
  uVar15 = lVar18 >> 4;
  if (uVar15 < uVar11) {
    uVar21 = uVar11 - uVar15;
    if ((ulong)(plVar5[0x4d] - (long)pfVar12 >> 4) < uVar21) {
      if (uVar11 >> 0x3c == 0) {
        uVar10 = plVar5[0x4d] - (long)pfVar1;
        uVar13 = (long)uVar10 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar13 = 0xfffffffffffffff;
        }
        if (uVar13 >> 0x3c == 0) {
          lVar9 = uVar13 << 4;
          __Znwm();
          lVar7 = lVar9 + lVar18;
          _bzero(lVar7,uVar21 * 0x10);
          lVar19 = lVar7 + uVar15 * -0x10;
          _memcpy(lVar19,pfVar1,lVar18);
          *plVar6 = lVar19;
          plVar5[0x4c] = lVar7 + uVar21 * 0x10;
          plVar5[0x4d] = lVar9 + uVar13 * 0x10;
          pfStack_88 = pfVar1;
          pfStack_80 = pfVar1;
          pfStack_78 = pfVar1;
          func_0x00010988c1b8(&pfStack_88);
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
    _bzero(pfVar12,uVar21 * 0x10);
    plVar5[0x4c] = (long)(pfVar12 + uVar21 * 4);
  }
  else if (uVar11 < uVar15) {
    while (pfVar12 != pfVar1 + uVar11 * 4) {
      pfVar12 = pfVar12 + -4;
      func_0x00010988c204(pfVar12);
    }
    plVar5[0x4c] = (long)(pfVar1 + uVar11 * 4);
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar11;
  return;
}



/* Entry: 10a928458; end: 10a92847b;  */

long FUN_10a928458(long param_1)

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



/* Entry: 10a92847c; end: 10a9284b7;  */

long FUN_10a92847c(long param_1)

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



/* Entry: 10a9284b8; end: 10a928653;  */

void FUN_10a9284b8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  long *plStack_80;
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
  FUN_10a928654(param_5);
  FUN_10a1f7d54(&puStack_90,param_2,param_4);
  plVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a928678(&puStack_a0,param_2,param_4 + 0x20);
  FUN_10a927e68(&plStack_80,*puStack_90,puStack_90[1],plVar8);
  FUN_10a924180(&stack0xffffffffffffffa0,*puStack_a0,puStack_a0[1]);
  if (plStack_98 != (long *)0x0) {
    plVar8 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar8[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  plVar2 = (long *)*plVar8;
  plVar13 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar13 - (long)plVar2;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)plVar2 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)plVar2)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,plVar2,lVar11);
          *plVar8 = lVar12;
          plVar7[0x4c] = lVar1 + uVar16 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          plStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          lStack_70 = lVar14;
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
    _bzero(plVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (plVar13 != plVar2 + uVar9 * 2) {
      plVar13 = plVar13 + -2;
      func_0x00010988c204(plVar13);
    }
    plVar7[0x4c] = (long)(plVar2 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a928654; end: 10a928677;  */

void FUN_10a928654(undefined8 param_1)

{
  undefined8 *puVar1;
  long *extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((int)param_1 == 3) {
    return;
  }
  FUN_10a052ee0(3,0,param_1);
  FUN_10a9286e8(&uStack_50);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bc84c8;
  puVar1[4] = uStack_48;
  puVar1[3] = uStack_50;
  puVar1[6] = uStack_38;
  puVar1[5] = uStack_40;
  *extraout_x8 = (long)(puVar1 + 3);
  extraout_x8[1] = (long)puVar1;
  return;
}



/* Entry: 10a928678; end: 10a9286e7;  */

void FUN_10a928678(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a9286e8(&uStack_40);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bc84c8;
  puVar1[4] = uStack_38;
  puVar1[3] = uStack_40;
  puVar1[6] = uStack_28;
  puVar1[5] = uStack_30;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a9286e8; end: 10a92877b;  */

void FUN_10a9286e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  func_0x0001098849a4(aiStack_30,param_2,param_3);
  FUN_10a92877c(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a92877c; end: 10a928a1f;  */

ulong * FUN_10a92877c(ulong *param_1,long *param_2,int *param_3)

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
      FUN_10a353e8c();
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
  puStack_c8 = &DAT_10f582599;
  uStack_c0 = 0xb;
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a928954);
  (*pcVar3)();
}



/* Entry: 10a928a20; end: 10a928a5b;  */

long FUN_10a928a20(long param_1)

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



/* Entry: 10a928a5c; end: 10a928d57;  */

void FUN_10a928a5c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  undefined4 *puStack_110;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined4 *apuStack_a8 [2];
  long lStack_98;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
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
  FUN_10a928d58(param_5);
  FUN_10a1f7d54(&puStack_e8,param_2,param_4);
  plVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10a928678(&puStack_f8,param_2,param_4 + 0x30);
  FUN_10a927e68(&lStack_d8,*puStack_e8,puStack_e8[1],plVar8);
  lVar6 = lStack_c0;
  lVar1 = lStack_c8;
  lVar21 = lStack_d0;
  lVar14 = lStack_d8;
  uVar15 = lStack_c8 * lStack_d0 * lStack_d8;
  if ((ulong)puStack_f8[1] < uVar15) {
    puVar10 = &UNK_10f683bcc;
LAB_10a928d14:
    FUN_10a00946c(puVar10);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a928d1c);
    (*pcVar5)();
  }
  puVar24 = (undefined4 *)*puStack_f8;
  iVar18 = (int)plVar9;
  lVar19 = lStack_d0;
  lVar22 = lStack_c8;
  if (iVar18 != 0) {
    if (iVar18 == 2) {
      lVar22 = 1;
      lVar19 = lStack_c8;
    }
    else {
      lVar19 = lStack_d8;
      lVar22 = lStack_c8 * lStack_d0;
      if (iVar18 != 1) {
        puVar10 = &UNK_10f6839ad;
        goto LAB_10a928d14;
      }
    }
  }
  if (uVar15 != 0) {
    uVar20 = 0;
    lVar2 = 0;
    if (lVar19 != 0) {
      lVar2 = LZCOUNT(lVar19) * -2 + 0x7e;
    }
    puStack_110 = puVar24;
    do {
      if (lVar22 != 0) {
        lVar17 = 0;
        puVar16 = puStack_110;
        do {
          if (lVar19 != 0) {
            lVar11 = 0;
            puVar13 = puVar16;
            do {
              *puVar13 = (int)lVar11;
              lVar11 = lVar11 + 1;
              puVar13 = puVar13 + lVar22;
            } while (lVar19 != lVar11);
          }
          lStack_d8 = lVar17 + uVar20;
          apuStack_a8[0] = puVar24 + lStack_d8;
          lStack_c8 = lVar14;
          lStack_c0 = lVar21;
          lStack_b8 = lVar1;
          lStack_b0 = lVar6;
          lStack_70 = 0;
          lStack_d0 = lVar22;
          lStack_98 = lVar22 * 4;
          puStack_88 = apuStack_a8[0];
          puStack_78 = (undefined4 *)(lVar22 * 4);
          FUN_10a937bf0(&puStack_88,apuStack_a8,&lStack_d8,lVar2,1);
          lVar17 = lVar17 + 1;
          puVar16 = puVar16 + 1;
        } while (lVar17 != lVar22);
      }
      uVar20 = uVar20 + lVar22 * lVar19;
      puStack_110 = puStack_110 + lVar22 * lVar19;
    } while (uVar20 < uVar15);
  }
  if (plStack_f0 != (long *)0x0) {
    plVar8 = plStack_f0 + 1;
    do {
      lVar14 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  if (plStack_e0 != (long *)0x0) {
    plVar8 = plStack_e0 + 1;
    do {
      lVar14 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar14 = plVar7[0x59];
  uVar15 = lVar14 - 1;
  plVar7[0x59] = uVar15;
  if (uVar15 < 8) {
    uVar15 = plVar8[lVar14 + 2];
    if (plVar7[0x5a] == uVar15) {
      return;
    }
  }
  else {
    uVar15 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar15) {
      return;
    }
  }
  puVar24 = (undefined4 *)*plVar8;
  puVar16 = (undefined4 *)plVar7[0x4c];
  lVar14 = (long)puVar16 - (long)puVar24;
  uVar20 = lVar14 >> 4;
  if (uVar20 < uVar15) {
    uVar23 = uVar15 - uVar20;
    lVar21 = plVar7[0x4d];
    if ((ulong)(lVar21 - (long)puVar16 >> 4) < uVar23) {
      if (uVar15 >> 0x3c == 0) {
        uVar12 = lVar21 - (long)puVar24 >> 3;
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)puVar24)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar14;
          _bzero(lVar1,uVar23 * 0x10);
          lVar19 = lVar1 + uVar20 * -0x10;
          _memcpy(lVar19,puVar24,lVar14);
          *plVar8 = lVar19;
          plVar7[0x4c] = lVar1 + uVar23 * 0x10;
          plVar7[0x4d] = lVar6 + uVar12 * 0x10;
          puStack_88 = puVar24;
          puStack_80 = puVar24;
          puStack_78 = puVar24;
          lStack_70 = lVar21;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar16,uVar23 * 0x10);
    plVar7[0x4c] = (long)(puVar16 + uVar23 * 4);
  }
  else if (uVar15 < uVar20) {
    while (puVar16 != puVar24 + uVar15 * 4) {
      puVar16 = puVar16 + -4;
      func_0x00010988c204(puVar16);
    }
    plVar7[0x4c] = (long)(puVar24 + uVar15 * 4);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar15;
  return;
}



/* Entry: 10a928d58; end: 10a928d7b;  */

long FUN_10a928d58(long param_1)

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



/* Entry: 10a928d7c; end: 10a928db7;  */

long FUN_10a928d7c(long param_1)

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



/* Entry: 10a928db8; end: 10a929983;  */

/* WARNING: Removing unreachable block (ram,0x00010a929734) */
/* WARNING: Removing unreachable block (ram,0x00010a929704) */
/* WARNING: Removing unreachable block (ram,0x00010a929530) */
/* WARNING: Removing unreachable block (ram,0x00010a9294f0) */
/* WARNING: Removing unreachable block (ram,0x00010a929520) */
/* WARNING: Removing unreachable block (ram,0x00010a929550) */
/* WARNING: Removing unreachable block (ram,0x00010a92934c) */
/* WARNING: Removing unreachable block (ram,0x00010a92931c) */
/* WARNING: Removing unreachable block (ram,0x00010a9292fc) */
/* WARNING: Removing unreachable block (ram,0x00010a9292ec) */
/* WARNING: Removing unreachable block (ram,0x00010a92932c) */
/* WARNING: Removing unreachable block (ram,0x00010a929168) */
/* WARNING: Removing unreachable block (ram,0x00010a9296f4) */
/* WARNING: Removing unreachable block (ram,0x00010a929724) */
/* WARNING: Removing unreachable block (ram,0x00010a929754) */
/* WARNING: Removing unreachable block (ram,0x00010a929500) */

void FUN_10a928db8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 ***pppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  FUN_10a929984(param_5);
  FUN_10a1f7d54(&puStack_1b0,param_2,param_4);
  plVar7 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_1c0,param_2,param_4 + 0x20);
  plVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  plVar9 = param_2;
  func_0x000109898518(param_2,param_4 + 0x40);
  FUN_10a1f7d54(&plStack_1d0,param_2,param_4 + 0x50);
  FUN_10a927e68(&lStack_1a0,*puStack_1b0,puStack_1b0[1],plVar7);
  lVar20 = lStack_190;
  lVar17 = lStack_198;
  lVar19 = lStack_1a0;
  FUN_10a927e68(&lStack_180,*puStack_1c0,puStack_1c0[1],plVar8);
  lVar13 = *plStack_1d0;
  uVar11 = plStack_1d0[1];
  iVar14 = (int)plVar9;
  if (iVar14 == 2) {
    if ((lVar19 != lStack_180) || (lVar17 != lStack_178)) {
      __ZNSt3__19to_stringEm(auStack_118,lVar19);
      FUN_109feb280(auStack_100,&UNK_10f683881,auStack_118);
      FUN_10a012db0(auStack_e8,auStack_100,&UNK_10f6837c7);
      __ZNSt3__19to_stringEm(&pppuStack_130,lStack_180);
      ppppuVar3 = (undefined8 ****)pppuStack_130;
      if (-1 < (char)bStack_119) {
        uStack_128 = (ulong)bStack_119;
        ppppuVar3 = &pppuStack_130;
      }
      puVar10 = auStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar10,ppppuVar3,uStack_128);
      uStack_c8 = puVar10[1];
      uStack_d0 = *puVar10;
      uStack_c0 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_10a012db0(auStack_b8,&uStack_d0,&UNK_10f6838e3);
      __ZNSt3__19to_stringEm(&pppuStack_148,lVar17);
      ppppuVar3 = (undefined8 ****)pppuStack_148;
      if (-1 < (char)bStack_131) {
        uStack_140 = (ulong)bStack_131;
        ppppuVar3 = &pppuStack_148;
      }
      puVar10 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar10,ppppuVar3,uStack_140);
      uStack_98 = puVar10[1];
      uStack_a0 = *puVar10;
      uStack_90 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_10a012db0(&lStack_80,&uStack_a0,&UNK_10f68386c);
      __ZNSt3__19to_stringEm(&pppuStack_160,lStack_178);
      ppppuVar3 = (undefined8 ****)pppuStack_160;
      if (-1 < (char)bStack_149) {
        uStack_158 = (ulong)bStack_149;
        ppppuVar3 = &pppuStack_160;
      }
      plVar6 = &lStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar6,ppppuVar3,uStack_158);
      lStack_198 = plVar6[1];
      lStack_1a0 = *plVar6;
      lStack_190 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      FUN_10a012db0(&lStack_180,&lStack_1a0,&DAT_10f62a9de);
      if (lStack_190 < 0) {
        __ZdlPv(lStack_1a0);
      }
      if ((char)bStack_149 < '\0') {
        __ZdlPv(pppuStack_160);
      }
      if ((char)bStack_131 < '\0') {
        __ZdlPv(pppuStack_148);
      }
      if ((char)bStack_119 < '\0') {
        __ZdlPv(pppuStack_130);
      }
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
      FUN_10a1084cc(&lStack_180);
      goto LAB_10a929784;
    }
    lVar17 = lVar17 * lVar19;
    if (uVar11 < (ulong)((lStack_170 + lVar20) * lVar17)) {
LAB_10a92910c:
      FUN_10a00946c(&UNK_10f683bcc);
LAB_10a929784:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a929788);
      (*pcVar4)();
    }
    if (lVar17 != 0) {
      lVar18 = lVar20 * 4;
      lVar5 = lStack_188;
      lVar19 = lStack_168;
      do {
        _memcpy(lVar13,lVar5,lVar18);
        _memcpy(lVar13 + lVar18,lVar19,lStack_170 * 4);
        lVar13 = lVar13 + (lStack_170 + lVar20) * 4;
        lVar19 = lVar19 + lStack_170 * 4;
        lVar5 = lVar5 + lVar18;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  else if (iVar14 == 1) {
    if ((lVar17 != lStack_178) || (lVar20 != lStack_170)) {
      __ZNSt3__19to_stringEm(auStack_118,lVar17);
      FUN_109feb280(auStack_100,&UNK_10f68380b,auStack_118);
      FUN_10a012db0(auStack_e8,auStack_100,&UNK_10f68386c);
      __ZNSt3__19to_stringEm(&pppuStack_130,lStack_178);
      ppppuVar3 = (undefined8 ****)pppuStack_130;
      if (-1 < (char)bStack_119) {
        uStack_128 = (ulong)bStack_119;
        ppppuVar3 = &pppuStack_130;
      }
      puVar10 = auStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar10,ppppuVar3,uStack_128);
      uStack_c8 = puVar10[1];
      uStack_d0 = *puVar10;
      uStack_c0 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_10a012db0(auStack_b8,&uStack_d0,&UNK_10f6837dd);
      __ZNSt3__19to_stringEm(&pppuStack_148,lVar20);
      ppppuVar3 = (undefined8 ****)pppuStack_148;
      if (-1 < (char)bStack_131) {
        uStack_140 = (ulong)bStack_131;
        ppppuVar3 = &pppuStack_148;
      }
      puVar10 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar10,ppppuVar3,uStack_140);
      uStack_98 = puVar10[1];
      uStack_a0 = *puVar10;
      uStack_90 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_10a012db0(&lStack_80,&uStack_a0,&UNK_10f6837f4);
      __ZNSt3__19to_stringEm(&pppuStack_160,lStack_170);
      ppppuVar3 = (undefined8 ****)pppuStack_160;
      if (-1 < (char)bStack_149) {
        uStack_158 = (ulong)bStack_149;
        ppppuVar3 = &pppuStack_160;
      }
      plVar6 = &lStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar6,ppppuVar3,uStack_158);
      lStack_198 = plVar6[1];
      lStack_1a0 = *plVar6;
      lStack_190 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      FUN_10a012db0(&lStack_180,&lStack_1a0,&DAT_10f62a9de);
      if (lStack_190 < 0) {
        __ZdlPv(lStack_1a0);
      }
      if ((char)bStack_149 < '\0') {
        __ZdlPv(pppuStack_160);
      }
      if ((char)bStack_131 < '\0') {
        __ZdlPv(pppuStack_148);
      }
      if ((char)bStack_119 < '\0') {
        __ZdlPv(pppuStack_130);
      }
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
      FUN_10a1084cc(&lStack_180);
      goto LAB_10a929784;
    }
    lVar20 = lVar20 * lVar17;
    if (uVar11 < (ulong)((lStack_180 + lVar19) * lVar20)) goto LAB_10a92910c;
    _memcpy(lVar13,lStack_188,lVar20 * lVar19 * 4);
    _memcpy(lVar13 + lVar20 * lVar19 * 4,lStack_168,lVar20 * lStack_180 * 4);
  }
  else {
    if (iVar14 != 0) {
      __ZNSt3__19to_stringEi(&lStack_80,plVar9);
      FUN_109feb280(&lStack_1a0,&UNK_10f6838f8,&lStack_80);
      FUN_10a012db0(&lStack_180,&lStack_1a0,&UNK_10f68393f);
      if (lStack_190 < 0) {
        __ZdlPv(lStack_1a0);
      }
      FUN_10a1084cc(&lStack_180);
      goto LAB_10a929784;
    }
    if ((lVar19 != lStack_180) || (lVar20 != lStack_170)) {
      __ZNSt3__19to_stringEm(auStack_118,lVar19);
      FUN_109feb280(auStack_100,&UNK_10f683765,auStack_118);
      FUN_10a012db0(auStack_e8,auStack_100,&UNK_10f6837c7);
      __ZNSt3__19to_stringEm(&pppuStack_130,lStack_180);
      ppppuVar3 = (undefined8 ****)pppuStack_130;
      if (-1 < (char)bStack_119) {
        uStack_128 = (ulong)bStack_119;
        ppppuVar3 = &pppuStack_130;
      }
      puVar10 = auStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar10,ppppuVar3,uStack_128);
      uStack_c8 = puVar10[1];
      uStack_d0 = *puVar10;
      uStack_c0 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_10a012db0(auStack_b8,&uStack_d0,&UNK_10f6837dd);
      __ZNSt3__19to_stringEm(&pppuStack_148,lVar20);
      ppppuVar3 = (undefined8 ****)pppuStack_148;
      if (-1 < (char)bStack_131) {
        uStack_140 = (ulong)bStack_131;
        ppppuVar3 = &pppuStack_148;
      }
      puVar10 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar10,ppppuVar3,uStack_140);
      uStack_98 = puVar10[1];
      uStack_a0 = *puVar10;
      uStack_90 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      FUN_10a012db0(&lStack_80,&uStack_a0,&UNK_10f6837f4);
      __ZNSt3__19to_stringEm(&pppuStack_160,lStack_170);
      ppppuVar3 = (undefined8 ****)pppuStack_160;
      if (-1 < (char)bStack_149) {
        uStack_158 = (ulong)bStack_149;
        ppppuVar3 = &pppuStack_160;
      }
      plVar6 = &lStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar6,ppppuVar3,uStack_158);
      lStack_198 = plVar6[1];
      lStack_1a0 = *plVar6;
      lStack_190 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      FUN_10a012db0(&lStack_180,&lStack_1a0,&DAT_10f62a9de);
      if (lStack_190 < 0) {
        __ZdlPv(lStack_1a0);
      }
      if ((char)bStack_149 < '\0') {
        __ZdlPv(pppuStack_160);
      }
      if ((char)bStack_131 < '\0') {
        __ZdlPv(pppuStack_148);
      }
      if ((char)bStack_119 < '\0') {
        __ZdlPv(pppuStack_130);
      }
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
      FUN_10a1084cc(&lStack_180);
      goto LAB_10a929784;
    }
    if (uVar11 < (ulong)(lVar20 * lVar19 * (lStack_178 + lVar17))) goto LAB_10a92910c;
    if (lVar19 != 0) {
      lVar15 = lVar20 * lVar17 * 4;
      lVar16 = lStack_178 * lVar20 * 4;
      lVar18 = lStack_188;
      lVar5 = lStack_168;
      do {
        _memcpy(lVar13,lVar18,lVar15);
        _memcpy(lVar13 + lVar15,lVar5,lVar16);
        lVar13 = lVar13 + lVar20 * (lStack_178 + lVar17) * 4;
        lVar5 = lVar5 + lVar16;
        lVar18 = lVar18 + lVar15;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  if (plStack_1c8 != (long *)0x0) {
    plVar7 = plStack_1c8 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
    }
  }
  if (plStack_1b8 != (long *)0x0) {
    plVar7 = plStack_1b8 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
    }
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar7 = plStack_1a8 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar13 = plVar6[0x59];
  uVar11 = lVar13 - 1;
  plVar6[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar13 + 2];
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  lVar13 = *plVar7;
  lVar19 = plVar6[0x4c];
  lVar17 = lVar19 - lVar13;
  uVar21 = lVar17 >> 4;
  if (uVar21 < uVar11) {
    uVar22 = uVar11 - uVar21;
    lVar20 = plVar6[0x4d];
    if ((ulong)(lVar20 - lVar19 >> 4) < uVar22) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar20 - lVar13 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - lVar13)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar19 = lVar5 + lVar17;
          _bzero(lVar19,uVar22 * 0x10);
          lVar18 = lVar19 + uVar21 * -0x10;
          _memcpy(lVar18,lVar13,lVar17);
          *plVar7 = lVar18;
          plVar6[0x4c] = lVar19 + uVar22 * 0x10;
          plVar6[0x4d] = lVar5 + uVar12 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar20;
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
    _bzero(lVar19,uVar22 * 0x10);
    plVar6[0x4c] = lVar19 + uVar22 * 0x10;
  }
  else if (uVar11 < uVar21) {
    lVar13 = lVar13 + uVar11 * 0x10;
    while (lVar19 != lVar13) {
      lVar19 = lVar19 + -0x10;
      func_0x00010988c204(lVar19);
    }
    plVar6[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar11;
  return;
}



/* Entry: 10a929984; end: 10a9299a7;  */

long FUN_10a929984(long param_1)

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



/* Entry: 10a9299a8; end: 10a9299e3;  */

long FUN_10a9299a8(long param_1)

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



/* Entry: 10a9299e4; end: 10a92a0ef;  */

/* WARNING: Possible PIC construction at 0x00010a92a0dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a92a0e0) */
/* WARNING: Removing unreachable block (ram,0x00010a929f10) */
/* WARNING: Removing unreachable block (ram,0x00010a929fb4) */
/* WARNING: Removing unreachable block (ram,0x00010a929f30) */

void FUN_10a9299e4(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  bool bVar10;
  undefined8 ****ppppuVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  undefined4 *puVar29;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar30;
  long *unaff_x22;
  long lVar31;
  long lVar32;
  long *unaff_x23;
  long lVar33;
  ulong unaff_x24;
  long *unaff_x25;
  ulong uVar34;
  long *unaff_x26;
  long unaff_x27;
  undefined4 *unaff_x28;
  undefined4 *puVar35;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar36;
  float fVar37;
  undefined1 auStack_1b0 [8];
  undefined4 *puStack_1a8;
  float *pfStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  undefined8 ***pppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 auStack_c8 [3];
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  int iStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar17 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar17 + 0xb2) < 8) {
    *(long *)(pfVar17 + *(ulong *)(pfVar17 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar17 + 0xb4);
    *(long *)(pfVar17 + 0xb2) = *(long *)(pfVar17 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar17 + 0x96);
  }
  pfStack_1a0 = pfVar17;
  FUN_10a92a0f0(param_5);
  FUN_10a1f7d54(&puStack_188,param_2,param_4);
  pfVar17 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar18 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  puStack_1a8 = param_1;
  FUN_10a1f7d54(&plStack_198,param_2,param_4 + 0x30);
  FUN_10a927e68(&plStack_178,*puStack_188,puStack_188[1],pfVar17);
  plVar14 = plStack_168;
  plVar13 = plStack_170;
  plVar27 = plStack_178;
  fVar37 = *pfVar18;
  fVar36 = pfVar18[1];
  iVar20 = 0;
  if (fVar36 != 1.0) {
    iVar20 = (int)fVar36;
  }
  puVar35 = (undefined4 *)*plStack_198;
  uVar25 = plStack_198[1];
  iVar2 = 1;
  if (fVar36 != 0.0) {
    iVar2 = iVar20;
  }
  uVar4 = 0;
  if (fVar37 != 1.0) {
    uVar4 = (int)fVar37;
  }
  uVar3 = 1;
  if (fVar37 != 0.0) {
    uVar3 = uVar4;
  }
  fVar36 = pfVar18[2];
  uVar4 = 0;
  if (fVar36 != 1.0) {
    uVar4 = (int)fVar36;
  }
  uVar5 = 1;
  if (fVar36 != 0.0) {
    uVar5 = uVar4;
  }
  uStack_88 = (int *)CONCAT44(uStack_88._4_4_,uVar5);
  plStack_170 = (long *)0x0;
  plStack_168 = (long *)0x0;
  plStack_178 = (long *)0x0;
  iStack_90 = iVar2;
  uStack_8c = uVar3;
  FUN_10a14d944(&plStack_178,&iStack_90,(long)&uStack_88 + 4,3);
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(plStack_178,plStack_170,&iStack_90);
  if (plStack_170 == plStack_178) goto LAB_10a929fa0;
  if ((int)*plStack_178 == 0) {
    if ((ulong)((long)plStack_170 - (long)plStack_178) < 5) goto LAB_10a929fa0;
    if (*(int *)((long)plStack_178 + 4) == 1) {
      if ((long)plStack_170 - (long)plStack_178 == 8) goto LAB_10a929fa0;
      if ((int)plStack_178[1] == 2) {
        puStack_b0 = (undefined4 *)((ulong)puStack_b0 & 0xffffffff00000000);
        FUN_10a4094c0(&iStack_90,3,&puStack_b0);
        lVar26 = CONCAT44(uStack_8c,iStack_90);
        uVar24 = (long)uStack_88 - lVar26 >> 2;
        if ((((ulong)(long)iVar2 < uVar24) &&
            (*(undefined4 *)(lVar26 + (long)iVar2 * 4) = 0, (ulong)(long)(int)uVar3 < uVar24)) &&
           (*(undefined4 *)(lVar26 + (long)(int)uVar3 * 4) = 1, (ulong)(long)(int)uVar5 < uVar24)) {
          *(undefined4 *)(lVar26 + (long)(int)uVar5 * 4) = 2;
          plVar8 = plVar27;
          if (pfVar18[1] != 1.0) {
            plVar8 = plVar14;
          }
          plVar6 = plVar13;
          if (pfVar18[1] != 0.0) {
            plVar6 = plVar8;
          }
          plVar8 = plVar27;
          if (*pfVar18 != 1.0) {
            plVar8 = plVar14;
          }
          plVar7 = plVar13;
          if (*pfVar18 != 0.0) {
            plVar7 = plVar8;
          }
          if (pfVar18[2] != 1.0) {
            plVar27 = plVar14;
          }
          plVar8 = plVar13;
          if (pfVar18[2] != 0.0) {
            plVar8 = plVar27;
          }
          if (uVar25 < (ulong)((long)plVar7 * (long)plVar6 * (long)plVar8)) {
            FUN_10a00946c(&UNK_10f683bcc);
          }
          else {
            auStack_c8[0]._0_4_ = 0;
            FUN_10a4094c0(&puStack_b0,3,auStack_c8);
            lVar26 = (long)puStack_a8 - (long)puStack_b0;
            if (lVar26 != 0) {
              *puStack_b0 = 0;
              if (plVar6 != (long *)0x0) {
                uVar25 = lVar26 >> 2;
                if (uVar25 < 2) goto LAB_10a929fa0;
                plVar27 = (long *)0x0;
                do {
                  puStack_b0[1] = 0;
                  if (plVar7 != (long *)0x0) {
                    if (lVar26 == 8) goto LAB_10a929fa0;
                    plVar28 = (long *)0x0;
                    piVar12 = (int *)CONCAT44(uStack_8c,iStack_90);
                    puVar29 = puVar35;
                    do {
                      puStack_b0[2] = 0;
                      if (plVar8 != (long *)0x0) {
                        if (uStack_88 == piVar12) goto LAB_10a929fa0;
                        iVar20 = 1;
                        puVar21 = puVar29;
                        plVar22 = plVar8;
                        do {
                          if (((uVar25 <= (ulong)(long)*piVar12) ||
                              ((ulong)((long)uStack_88 - (long)piVar12) < 5)) ||
                             ((uVar25 <= (ulong)(long)piVar12[1] ||
                              (((long)uStack_88 - (long)piVar12 == 8 ||
                               (uVar25 <= (ulong)(long)piVar12[2])))))) goto LAB_10a929fa0;
                          *puVar21 = *(undefined4 *)
                                      (lStack_160 +
                                       ((ulong)(uint)puStack_b0[piVar12[1]] +
                                       (long)plVar13 * (ulong)(uint)puStack_b0[*piVar12]) *
                                       (long)plVar14 * 4 + (ulong)(uint)puStack_b0[piVar12[2]] * 4);
                          puStack_b0[2] = iVar20;
                          iVar20 = iVar20 + 1;
                          plVar22 = (long *)((long)plVar22 + -1);
                          puVar21 = puVar21 + 1;
                        } while (plVar22 != (long *)0x0);
                      }
                      plVar28 = (long *)((long)plVar28 + 1);
                      puStack_b0[1] = (int)plVar28;
                      puVar29 = puVar29 + (long)plVar8;
                    } while (plVar28 != plVar7);
                  }
                  plVar27 = (long *)((long)plVar27 + 1);
                  *puStack_b0 = (int)plVar27;
                  puVar35 = puVar35 + (long)plVar7 * (long)plVar8;
                } while (plVar27 != plVar6);
              }
              puStack_a8 = puStack_b0;
              __ZdlPv();
              if ((int *)CONCAT44(uStack_8c,iStack_90) != (int *)0x0) {
                uStack_88 = (int *)CONCAT44(uStack_8c,iStack_90);
                __ZdlPv();
              }
              pfVar17 = pfStack_1a0;
              puVar29 = puStack_1a8;
              plVar27 = plStack_178;
              if (plStack_178 != (long *)0x0) {
                plStack_170 = plStack_178;
                __ZdlPv();
              }
              if (plStack_190 != (long *)0x0) {
                plVar6 = plStack_190 + 1;
                do {
                  lVar26 = *plVar6;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar10) {
                    *plVar6 = lVar26 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plStack_190 + 0x10))(plStack_190);
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  plVar27 = plStack_190;
                }
              }
              if (plStack_180 != (long *)0x0) {
                plVar6 = plStack_180 + 1;
                do {
                  lVar26 = *plVar6;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar10) {
                    *plVar6 = lVar26 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plStack_180 + 0x10))(plStack_180);
                  plVar27 = plStack_180;
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
              }
              *puVar29 = 0;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
                ___stack_chk_fail();
                if (plStack_178 != (long *)0x0) {
                  plStack_170 = plStack_178;
                  __ZdlPv();
                }
                func_0x00010a140010(&plStack_198);
                func_0x00010a140010(&puStack_188);
                unaff_x30 = 0x10a92a0e0;
                register0x00000008 = (BADSPACEBASE *)auStack_1b0;
                unaff_x19 = pfVar17;
                unaff_x20 = plVar27;
                unaff_x21 = plStack_180;
                unaff_x22 = plVar8;
                unaff_x23 = plVar7;
                unaff_x24 = (ulong)uVar3;
                unaff_x25 = plVar13;
                unaff_x26 = plVar14;
                unaff_x27 = lStack_160;
                unaff_x28 = puVar35;
                unaff_x29 = puVar1;
                pfVar17 = pfStack_1a0;
              }
              pfVar18 = pfVar17 + 0x96;
              uVar25 = *(long *)(pfVar17 + 0xb2) - 1;
              *(ulong *)(pfVar17 + 0xb2) = uVar25;
              if (uVar25 < 8) {
                uVar25 = *(ulong *)(pfVar18 + uVar25 * 2 + 6);
                if (*(ulong *)(pfVar17 + 0xb4) == uVar25) {
                  return;
                }
              }
              else {
                uVar25 = *(ulong *)(*(long *)(pfVar17 + 0xae) + -8);
                *(ulong **)(pfVar17 + 0xae) = (ulong *)(*(long *)(pfVar17 + 0xae) + -8);
                if (*(ulong *)(pfVar17 + 0xb4) == uVar25) {
                  return;
                }
              }
              *(undefined4 **)((long)register0x00000008 + -0x60) = unaff_x28;
              *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
              *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
              *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
              *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
              *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
              *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
              lVar26 = *(long *)pfVar18;
              lVar32 = *(long *)(pfVar17 + 0x98);
              lVar30 = lVar32 - lVar26;
              uVar24 = lVar30 >> 4;
              if (uVar24 < uVar25) {
                uVar34 = uVar25 - uVar24;
                lVar33 = *(long *)(pfVar17 + 0x9a);
                if ((ulong)(lVar33 - lVar32 >> 4) < uVar34) {
                  if (uVar25 >> 0x3c == 0) {
                    uVar23 = lVar33 - lVar26 >> 3;
                    if (uVar23 <= uVar25) {
                      uVar23 = uVar25;
                    }
                    if (0x7fffffffffffffef < (ulong)(lVar33 - lVar26)) {
                      uVar23 = 0xfffffffffffffff;
                    }
                    *(float **)((long)register0x00000008 + -0x68) = pfVar18;
                    if (uVar23 >> 0x3c == 0) {
                      lVar16 = uVar23 << 4;
                      __Znwm();
                      lVar32 = lVar16 + lVar30;
                      _bzero(lVar32,uVar34 * 0x10);
                      lVar31 = lVar32 + uVar24 * -0x10;
                      _memcpy(lVar31,lVar26,lVar30);
                      *(long *)pfVar18 = lVar31;
                      *(ulong *)(pfVar17 + 0x98) = lVar32 + uVar34 * 0x10;
                      *(ulong *)(pfVar17 + 0x9a) = lVar16 + uVar23 * 0x10;
                      *(long *)((long)register0x00000008 + -0x78) = lVar26;
                      *(long *)((long)register0x00000008 + -0x70) = lVar33;
                      *(long *)((long)register0x00000008 + -0x88) = lVar26;
                      *(long *)((long)register0x00000008 + -0x80) = lVar26;
                      func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                      goto code_r0x00010988c138;
                    }
                    func_0x000104c4f740();
                  }
                  else {
                    func_0x00010988c1a4();
                  }
                    /* WARNING: Does not return */
                  pcVar15 = (code *)SoftwareBreakpoint(1,0x10988c16c);
                  (*pcVar15)();
                }
                _bzero(lVar32,uVar34 * 0x10);
                *(ulong *)(pfVar17 + 0x98) = lVar32 + uVar34 * 0x10;
              }
              else if (uVar25 < uVar24) {
                lVar26 = lVar26 + uVar25 * 0x10;
                while (lVar32 != lVar26) {
                  lVar32 = lVar32 + -0x10;
                  func_0x00010988c204(lVar32);
                }
                *(long *)(pfVar17 + 0x98) = lVar26;
              }
code_r0x00010988c138:
              *(ulong *)(pfVar17 + 0xb4) = uVar25;
              return;
            }
          }
        }
        goto LAB_10a929fa0;
      }
    }
  }
  __ZNSt3__19to_stringEi(auStack_128,(ulong)uVar3);
  FUN_109feb280(auStack_110,&UNK_10f683947,auStack_128);
  FUN_10a012db0(auStack_f8,auStack_110,&UNK_10f48d65e);
  __ZNSt3__19to_stringEi(&pppuStack_140,iVar2);
  ppppuVar11 = (undefined8 ****)pppuStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    ppppuVar11 = &pppuStack_140;
  }
  puVar19 = auStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar19,ppppuVar11,uStack_138);
  uStack_d8 = puVar19[1];
  uStack_e0 = *puVar19;
  lStack_d0 = puVar19[2];
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = 0;
  FUN_10a012db0(auStack_c8,&uStack_e0,&UNK_10f48d65e);
  __ZNSt3__19to_stringEi(&pppuStack_158,uVar5);
  ppppuVar11 = (undefined8 ****)pppuStack_158;
  if (-1 < (char)bStack_141) {
    uStack_150 = (ulong)bStack_141;
    ppppuVar11 = &pppuStack_158;
  }
  puVar19 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar19,ppppuVar11,uStack_150);
  puStack_a8 = (undefined4 *)puVar19[1];
  puStack_b0 = (undefined4 *)*puVar19;
  uStack_a0 = puVar19[2];
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = 0;
  FUN_10a012db0(&iStack_90,&puStack_b0,&UNK_10f68393f);
  if ((char)bStack_141 < '\0') {
    __ZdlPv(pppuStack_158);
  }
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  if ((char)bStack_129 < '\0') {
    __ZdlPv(pppuStack_140);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  FUN_10a1084cc(&iStack_90);
LAB_10a929fa0:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10a929fa4);
  (*pcVar15)();
}



/* Entry: 10a92a0f0; end: 10a92a113;  */

long FUN_10a92a0f0(long param_1)

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



/* Entry: 10a92a114; end: 10a92a14f;  */

long FUN_10a92a114(long param_1)

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



/* Entry: 10a92a150; end: 10a92a453;  */

void FUN_10a92a150(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plStack_f0;
  long *plStack_e8;
  ulong *puStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  plVar20 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar20[0x59] < 8) {
    plVar20[plVar20[0x59] + 0x4e] = plVar20[0x5a];
    plVar20[0x59] = plVar20[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar20 + 0x4b);
  }
  FUN_10a92a0f0(param_5);
  FUN_10a1f7d54(&puStack_e0,param_2,param_4);
  plVar21 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  plVar22 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_f0,param_2,param_4 + 0x30);
  uVar23 = *puStack_e0;
  uVar3 = puStack_e0[1];
  FUN_10a8bcad0(&uStack_d0,plVar21);
  uVar25 = uStack_c0;
  uVar15 = uStack_c8;
  uVar35 = uStack_d0;
  FUN_10a8bcad0(&uStack_d0,plVar22);
  uVar17 = uStack_c0;
  uVar16 = uStack_c8;
  uVar26 = uStack_d0;
  lVar28 = *plStack_f0;
  uVar34 = plStack_f0[1];
  uStack_c0 = uVar15;
  uStack_b8 = uVar35;
  uStack_b0 = uVar25;
  uStack_a8 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_98 = uVar17;
  uStack_d0 = uVar23;
  uStack_c8 = uVar3;
  lStack_90 = lVar28;
  uStack_88 = uVar34;
  FUN_10a91ea54(uVar3,&uStack_c0);
  uVar31 = 0;
  if ((uVar15 != 0) && (uVar16 != 0)) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar15;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar16;
    if (SUB168(auVar9 * auVar12,8) != 0) goto LAB_10a92a408;
    uVar31 = uVar15 * uVar16;
  }
  uVar36 = 0;
  if ((uVar35 != 0) && (uVar26 != 0)) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar35;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar26;
    if (SUB168(auVar10 * auVar13,8) != 0) goto LAB_10a92a408;
    uVar36 = uVar35 * uVar26;
  }
  uVar24 = 0;
  if ((uVar25 != 0) && (uVar17 != 0)) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar25;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar17;
    if (SUB168(auVar11 * auVar14,8) != 0) {
LAB_10a92a408:
      FUN_10a00946c(&UNK_10f6818f4);
LAB_10a92a414:
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10a92a418);
      (*pcVar18)();
    }
    uVar24 = uVar25 * uVar17;
  }
  uStack_80 = uVar31;
  uStack_78 = uVar36;
  uStack_70 = uVar24;
  FUN_10a91ead0(uVar34,&uStack_80);
  if (uVar24 != 0) {
    uVar25 = 0;
    uVar27 = 0;
    do {
      if (uVar31 != 0) {
        uVar29 = 0;
        uVar6 = 0;
        if (uVar17 != 0) {
          uVar6 = uVar27 / uVar17;
        }
        do {
          if (uVar36 != 0) {
            uVar30 = 0;
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar29 / uVar16;
            }
            uVar2 = 0;
            if (uVar25 <= uVar34) {
              uVar2 = uVar34 - uVar25;
            }
            do {
              uVar8 = 0;
              if (uVar26 != 0) {
                uVar8 = uVar30 / uVar26;
              }
              uVar8 = uVar8 + (uVar7 + uVar6 * uVar15) * uVar35;
              if ((uVar3 <= uVar8) || (uVar2 == uVar30)) goto LAB_10a92a414;
              *(undefined4 *)(lVar28 + uVar25 * 4) = *(undefined4 *)(uVar23 + uVar8 * 4);
              uVar30 = uVar30 + 1;
              uVar25 = uVar25 + 1;
            } while (uVar36 != uVar30);
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar31);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar24);
  }
  if (plStack_e8 != (long *)0x0) {
    plVar21 = plStack_e8 + 1;
    do {
      lVar28 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar21 = plStack_d8 + 1;
    do {
      lVar28 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar28 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  *param_1 = 0;
  puVar1 = (ulong *)(plVar20 + 0x4b);
  lVar28 = plVar20[0x59];
  uVar23 = lVar28 - 1;
  plVar20[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = puVar1[lVar28 + 2];
    if (plVar20[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar20[0x57] + -8);
    plVar20[0x57] = plVar20[0x57] + -8;
    if (plVar20[0x5a] == uVar23) {
      return;
    }
  }
  uVar3 = *puVar1;
  lVar28 = plVar20[0x4c];
  lVar32 = lVar28 - uVar3;
  uVar34 = lVar32 >> 4;
  if (uVar34 < uVar23) {
    uVar35 = uVar23 - uVar34;
    lVar33 = plVar20[0x4d];
    if ((ulong)(lVar33 - lVar28 >> 4) < uVar35) {
      if (uVar23 >> 0x3c == 0) {
        uVar26 = (long)(lVar33 - uVar3) >> 3;
        if (uVar26 <= uVar23) {
          uVar26 = uVar23;
        }
        if (0x7fffffffffffffef < lVar33 - uVar3) {
          uVar26 = 0xfffffffffffffff;
        }
        puStack_68 = puVar1;
        if (uVar26 >> 0x3c == 0) {
          lVar19 = uVar26 << 4;
          __Znwm();
          lVar28 = lVar19 + lVar32;
          _bzero(lVar28,uVar35 * 0x10);
          uVar34 = lVar28 + uVar34 * -0x10;
          _memcpy(uVar34,uVar3,lVar32);
          *puVar1 = uVar34;
          plVar20[0x4c] = lVar28 + uVar35 * 0x10;
          plVar20[0x4d] = lVar19 + uVar26 * 0x10;
          uStack_88 = uVar3;
          uStack_80 = uVar3;
          uStack_78 = uVar3;
          uStack_70 = lVar33;
          func_0x00010988c1b8(&uStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar18)();
    }
    _bzero(lVar28,uVar35 * 0x10);
    plVar20[0x4c] = lVar28 + uVar35 * 0x10;
  }
  else if (uVar23 < uVar34) {
    lVar32 = uVar3 + uVar23 * 0x10;
    while (lVar28 != lVar32) {
      lVar28 = lVar28 + -0x10;
      func_0x00010988c204(lVar28);
    }
    plVar20[0x4c] = lVar32;
  }
code_r0x00010988c138:
  plVar20[0x5a] = uVar23;
  return;
}



/* Entry: 10a92a454; end: 10a92a48f;  */

long FUN_10a92a454(long param_1)

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



/* Entry: 10a92a490; end: 10a92a817;  */

/* WARNING: Possible PIC construction at 0x00010a92a80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a92a810) */
/* WARNING: Removing unreachable block (ram,0x00010a92a824) */
/* WARNING: Removing unreachable block (ram,0x00010a927a14) */
/* WARNING: Removing unreachable block (ram,0x00010a927a2c) */
/* WARNING: Removing unreachable block (ram,0x00010a927a30) */
/* WARNING: Removing unreachable block (ram,0x00010a927a38) */
/* WARNING: Removing unreachable block (ram,0x00010a927a40) */
/* WARNING: Removing unreachable block (ram,0x00010a927a44) */
/* WARNING: Removing unreachable block (ram,0x00010a927a5c) */
/* WARNING: Removing unreachable block (ram,0x00010a92a820) */

void FUN_10a92a490(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long ****pppplVar17;
  ulong uVar18;
  long ***ppplVar19;
  uint *puVar20;
  long ****pppplVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long *unaff_x19;
  long ****unaff_x20;
  long ****unaff_x21;
  long lVar26;
  long ****unaff_x22;
  long lVar27;
  long lVar28;
  undefined8 *unaff_x23;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  long ****unaff_x24;
  long ****unaff_x25;
  long ****pppplVar32;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_c0 [8];
  undefined8 *puStack_b8;
  long ***ppplStack_b0;
  undefined8 *puStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar13[0x59] < 8) {
    plVar13[plVar13[0x59] + 0x4e] = plVar13[0x5a];
    plVar13[0x59] = plVar13[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar13 + 0x4b);
  }
  FUN_10a92a818(param_5);
  FUN_10a1f7d54(&puStack_a8,param_2,param_4);
  plVar14 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_b8,param_2,param_4 + 0x20);
  func_0x000109898518(param_2,param_4 + 0x30);
  pppplVar21 = &ppplStack_98;
  FUN_10a927e68(pppplVar21,*puStack_a8,puStack_a8[1],plVar14);
  ppplVar10 = ppplStack_88;
  ppplVar19 = ppplStack_90;
  ppplVar9 = ppplStack_98;
  if ((ulong)puStack_b8[1] < (ulong)((long)ppplStack_88 << 1)) {
    FUN_10a00946c(&UNK_10f683bcc);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10a92a7c4);
    (*pcVar11)();
  }
  puVar29 = (undefined8 *)*puStack_b8;
  pppplVar32 = unaff_x25;
  if (((long ****)ppplStack_98 == (long ****)0x0) ||
     (pppplVar32 = (long ****)ppplStack_90, (long ****)ppplStack_90 == (long ****)0x0)) {
    lVar15 = unaff_x26;
    if ((long ****)ppplStack_88 != (long ****)0x0) {
      pppplVar17 = (long ****)0x1;
      puVar30 = puVar29;
      do {
        puVar29 = puVar30 + 1;
        *puVar30 = 0;
        bVar8 = pppplVar17 < ppplStack_88;
        pppplVar17 = (long ****)(ulong)((int)pppplVar17 + 1);
        puVar30 = puVar29;
      } while (bVar8);
    }
  }
  else {
    uStack_78 = (long ****)((ulong)uStack_78 & 0xffffffffffffff00);
    ppplStack_98 = ppplStack_88;
    FUN_10a937b7c(&ppplStack_90,(long)ppplStack_88 << 1,&uStack_78);
    uStack_78 = (long ****)ppplVar9;
    uStack_70 = (long ****)ppplVar19;
    ppplStack_68 = ppplVar10;
    lStack_60 = lStack_80;
    FUN_10a924180(&uStack_78,ppplStack_90,(long)ppplStack_98 << 1);
    if ((long ****)ppplVar10 != (long ****)0x0) {
      pppplVar21 = (long ****)0x0;
      uVar2 = (uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU);
      do {
        uVar4 = *(uint *)(ppplStack_90 + (long)pppplVar21);
        uVar5 = *(uint *)((long)(ppplStack_90 + (long)pppplVar21) + 4);
        uStack_78 = (long ****)CONCAT44(uVar4,uVar2);
        uStack_70 = (long ****)CONCAT44(~uVar4 + (int)ppplVar19,uVar5);
        ppplStack_68 = (long ***)CONCAT44(ppplStack_68._4_4_,~uVar5 + (int)ppplVar9);
        lVar15 = 4;
        puVar20 = (uint *)&uStack_78;
        uVar22 = uVar2;
        do {
          uVar6 = *(uint *)((long)&uStack_78 + lVar15);
          puVar3 = (uint *)((long)&uStack_78 + lVar15);
          if (uVar22 <= uVar6) {
            puVar3 = puVar20;
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          lVar15 = lVar15 + 4;
          puVar20 = puVar3;
        } while (lVar15 != 0x14);
        uVar24 = 0;
        uVar22 = *puVar3;
        uVar25 = (ulong)(uVar22 << 1 | 1);
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        do {
          uVar16 = 0;
          iVar23 = (int)uVar24;
          uVar24 = uVar24 + 1;
          do {
            fVar36 = *(float *)(lStack_80 + (long)pppplVar21 * 4 +
                               ((long)ppplVar19 * (ulong)((uVar5 - uVar22) + iVar23) +
                               (ulong)((uVar4 - uVar22) + (int)uVar16)) * (long)ppplVar10 * 4);
            fVar33 = fVar33 + fVar36;
            uVar16 = uVar16 + 1;
            fVar35 = fVar35 + fVar36 * (float)(uVar16 & 0xffffffff);
            fVar34 = fVar34 + fVar36 * (float)(uVar24 & 0xffffffff);
          } while (uVar25 != uVar16);
        } while (uVar24 != uVar25);
        *(float *)(puVar29 + (long)pppplVar21) = fVar35 / fVar33 + -1.0 + (float)(uVar4 - uVar22);
        *(float *)((long)(puVar29 + (long)pppplVar21) + 4) =
             fVar34 / fVar33 + -1.0 + (float)(uVar5 - uVar22);
        pppplVar21 = (long ****)(ulong)((int)pppplVar21 + 1);
      } while (pppplVar21 < ppplVar10);
    }
    pppplVar21 = (long ****)ppplStack_90;
    pppplVar32 = (long ****)ppplVar19;
    lVar15 = lStack_80;
    if ((long ****)ppplStack_90 != (long ****)0x0) {
      ppplStack_88 = ppplStack_90;
      __ZdlPv();
    }
  }
  if ((long ****)ppplStack_b0 != (long ****)0x0) {
    pppplVar17 = (long ****)(ppplStack_b0 + 1);
    do {
      ppplVar19 = *pppplVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
      if (bVar8) {
        *pppplVar17 = (long ***)((long)ppplVar19 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppplVar19 == (long ***)0x0) {
      (*(code *)(*ppplStack_b0)[2])(ppplStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppplVar21 = (long ****)ppplStack_b0;
    }
  }
  if ((long ****)ppplStack_a0 != (long ****)0x0) {
    pppplVar17 = (long ****)(ppplStack_a0 + 1);
    do {
      ppplVar19 = *pppplVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
      if (bVar8) {
        *pppplVar17 = (long ***)((long)ppplVar19 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppplVar19 == (long ***)0x0) {
      (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
      pppplVar21 = (long ****)ppplStack_a0;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((long ****)ppplStack_90 != (long ****)0x0) {
      ppplStack_88 = ppplStack_90;
      __ZdlPv();
    }
    func_0x00010a140010(&puStack_b8);
    func_0x00010a140010(&puStack_a8);
    unaff_x30 = 0x10a92a810;
    register0x00000008 = (BADSPACEBASE *)auStack_c0;
    unaff_x19 = plVar13;
    unaff_x20 = pppplVar21;
    unaff_x21 = (long ****)ppplStack_a0;
    unaff_x22 = (long ****)ppplVar10;
    unaff_x23 = puVar29;
    unaff_x24 = (long ****)ppplVar9;
    unaff_x25 = pppplVar32;
    unaff_x26 = lVar15;
    unaff_x29 = puVar1;
  }
  plVar14 = plVar13 + 0x4b;
  lVar15 = plVar13[0x59];
  uVar24 = lVar15 - 1;
  plVar13[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar14[lVar15 + 2];
    if (plVar13[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(plVar13[0x57] + -8);
    plVar13[0x57] = plVar13[0x57] + -8;
    if (plVar13[0x5a] == uVar24) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *****)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar15 = *plVar14;
  lVar28 = plVar13[0x4c];
  lVar26 = lVar28 - lVar15;
  uVar25 = lVar26 >> 4;
  if (uVar25 < uVar24) {
    uVar16 = uVar24 - uVar25;
    lVar31 = plVar13[0x4d];
    if ((ulong)(lVar31 - lVar28 >> 4) < uVar16) {
      if (uVar24 >> 0x3c == 0) {
        uVar18 = lVar31 - lVar15 >> 3;
        if (uVar18 <= uVar24) {
          uVar18 = uVar24;
        }
        if (0x7fffffffffffffef < (ulong)(lVar31 - lVar15)) {
          uVar18 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar14;
        if (uVar18 >> 0x3c == 0) {
          lVar12 = uVar18 << 4;
          __Znwm();
          lVar28 = lVar12 + lVar26;
          _bzero(lVar28,uVar16 * 0x10);
          lVar27 = lVar28 + uVar25 * -0x10;
          _memcpy(lVar27,lVar15,lVar26);
          *plVar14 = lVar27;
          plVar13[0x4c] = lVar28 + uVar16 * 0x10;
          plVar13[0x4d] = lVar12 + uVar18 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar15;
          *(long *)((long)register0x00000008 + -0x70) = lVar31;
          *(long *)((long)register0x00000008 + -0x88) = lVar15;
          *(long *)((long)register0x00000008 + -0x80) = lVar15;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(lVar28,uVar16 * 0x10);
    plVar13[0x4c] = lVar28 + uVar16 * 0x10;
  }
  else if (uVar24 < uVar25) {
    lVar15 = lVar15 + uVar24 * 0x10;
    while (lVar28 != lVar15) {
      lVar28 = lVar28 + -0x10;
      func_0x00010988c204(lVar28);
    }
    plVar13[0x4c] = lVar15;
  }
code_r0x00010988c138:
  plVar13[0x5a] = uVar24;
  return;
}



/* Entry: 10a92a818; end: 10a92a83b;  */

long FUN_10a92a818(long param_1)

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



/* Entry: 10a92a83c; end: 10a92a877;  */

long FUN_10a92a83c(long param_1)

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



/* Entry: 10a92a878; end: 10a92b177;  */

void FUN_10a92a878(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  undefined1 uVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined4 auStack_250 [2];
  double *pdStack_248;
  undefined8 uStack_240;
  undefined4 auStack_238 [2];
  double *pdStack_230;
  undefined8 uStack_228;
  undefined4 auStack_220 [2];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 auStack_208 [2];
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined4 auStack_1f0 [2];
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 auStack_1d8 [2];
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  double adStack_1c0 [6];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int aiStack_c0 [2];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int *piStack_88;
  int **ppiStack_80;
  int *piStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a92b178(param_5);
  FUN_10a1f7d54(&plStack_260,param_2,param_4);
  FUN_10a1f7d54(&plStack_270,param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  plVar10 = param_2;
  func_0x00010a1f8668(param_2,param_4 + 0x30);
  plVar11 = param_2;
  func_0x000109898518(param_2,param_4 + 0x40);
  FUN_10a1f7d54(&plStack_280,param_2,param_4 + 0x50);
  if ((ulong)plStack_260[1] < (ulong)((long)*(float *)((long)plVar9 + 4) * 3)) {
    FUN_10a0ee900(&uStack_c8,&UNK_10f683b16,0x23);
    FUN_10a0029c0(&uStack_c8);
LAB_10a92b084:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a92b088);
    (*pcVar5)();
  }
  FUN_10a91e4d4(plStack_270[1],plVar9);
  FUN_10a91e59c(plVar9,2,0,1);
  if ((ulong)plStack_280[1] < 6) {
    FUN_10a0ee900(&uStack_c8,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&uStack_c8);
    goto LAB_10a92b084;
  }
  if ((bRam00000001137ebe50 & 1) == 0) {
    iVar6 = 0x137ebe50;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001137ebe60 = 0x42ff0000;
      uRam00000001137ebe6c = 0;
      uRam00000001137ebe64 = 0;
      uRam00000001137ebe7c = 0;
      uRam00000001137ebe74 = 0;
      uRam00000001137ebe8c = 0;
      uRam00000001137ebe84 = 0;
      uRam00000001137ebe98 = 0;
      uRam00000001137ebe90 = 0;
      uRam00000001137ebe94 = 0;
      uRam00000001137ebeb0 = 0;
      uRam00000001137ebea0 = 0x1137ebe68;
      uRam00000001137ebea8 = 0x1137ebeb0;
      uRam00000001137ebeb8 = 0;
      ___cxa_guard_release(0x1137ebe50);
    }
  }
  aiStack_c0[0] = (int)*(float *)((long)plVar9 + 4);
  lStack_b8 = *plStack_260;
  uStack_c8 = 0x242ff0015;
  piStack_88 = aiStack_c0;
  aiStack_c0[1] = 1;
  lStack_a0 = 0;
  lStack_a8 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  piStack_78 = (int *)0x0;
  lStack_70 = 0;
  lStack_b0 = lStack_b8;
  ppiStack_80 = &piStack_78;
  if ((aiStack_c0[0] != 0) && (lStack_b8 == 0)) {
    puVar12 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_128 = puVar12 + 1;
    uStack_120 = 0x1c;
    *(undefined1 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&uStack_128,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_10a92b084;
  }
  uStack_c8 = 0x242ff4015;
  lStack_70 = 0xc;
  piStack_78 = (int *)0xc;
  lStack_a8 = lStack_b8 + (long)aiStack_c0[0] * 0xc;
  lStack_118 = *plStack_270;
  uStack_128 = (undefined4 *)0x242ff000d;
  puStack_e8 = &uStack_120;
  uStack_120 = CONCAT44(1,aiStack_c0[0]);
  lStack_100 = 0;
  lStack_108 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_110 = lStack_118;
  puStack_e0 = &uStack_d8;
  lStack_a0 = lStack_a8;
  if ((aiStack_c0[0] != 0) && (lStack_118 == 0)) {
    puVar12 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_190 = puVar12 + 1;
    uStack_188 = 0x1c;
    *(undefined1 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&uStack_190,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_10a92b084;
  }
  lVar15 = 0;
  uStack_128 = (undefined4 *)0x242ff400d;
  uStack_d0 = 8;
  uStack_d8 = 8;
  lStack_108 = lStack_118 + (long)aiStack_c0[0] * 8;
  uStack_150 = (ulong)&uStack_190 | 8;
  uStack_160 = 0;
  lStack_158 = 0;
  uStack_188 = 0x300000003;
  uStack_190 = (undefined4 *)0x242ff4005;
  uStack_138 = 4;
  uStack_140 = 0xc;
  lStack_170 = (long)plVar10 + 0x24;
  pfVar17 = (float *)*plStack_280;
  adStack_1c0[3] = 0.0;
  adStack_1c0[4] = 0.0;
  adStack_1c0[5] = 0.0;
  adStack_1c0[0] = 0.0;
  adStack_1c0[1] = 0.0;
  adStack_1c0[2] = 0.0;
  pfVar16 = pfVar17;
  do {
    *(double *)((long)adStack_1c0 + lVar15 + 0x18) = (double)*pfVar16;
    *(double *)((long)adStack_1c0 + lVar15) = (double)pfVar16[3];
    lVar15 = lVar15 + 8;
    pfVar16 = pfVar16 + 1;
  } while (lVar15 != 0x18);
  plStack_180 = plVar10;
  plStack_178 = plVar10;
  lStack_168 = lStack_170;
  puStack_148 = &uStack_140;
  lStack_100 = lStack_108;
  if ((((adStack_1c0[3] == 0.0) && (adStack_1c0[4] == 0.0)) && (adStack_1c0[5] == 0.0)) ||
     (((adStack_1c0[0] == 0.0 && (adStack_1c0[1] == 0.0)) && (adStack_1c0[2] == 0.0)))) {
    uStack_1c8 = 0;
    auStack_1d8[0] = 0x1010000;
    puStack_1d0 = &uStack_c8;
    uStack_1e0 = 0;
    auStack_1f0[0] = 0x1010000;
    puStack_1e8 = &uStack_128;
    uStack_1f8 = 0;
    auStack_208[0] = 0x1010000;
    puStack_200 = &uStack_190;
    uStack_210 = 0;
    auStack_220[0] = 0x1010000;
    uStack_218 = 0x1137ebe60;
    auStack_238[0] = 0xc2020006;
    pdStack_230 = adStack_1c0 + 3;
    uStack_228 = 0x300000001;
    auStack_250[0] = 0xc2020006;
    pdStack_248 = adStack_1c0;
    uStack_240 = 0x300000001;
    puVar12 = auStack_1d8;
    func_0x000109ba43b4(puVar12,auStack_1f0,auStack_208,auStack_220,auStack_238,auStack_250,0,1);
    if ((int)puVar12 != 0) goto LAB_10a92ac04;
LAB_10a92ac9c:
    uVar18 = 0;
    adStack_1c0[3] = 0.0;
    adStack_1c0[4] = 0.0;
    adStack_1c0[5] = 0.0;
    adStack_1c0[1] = 0.0;
    adStack_1c0[2] = 0.0;
    adStack_1c0[0] = 0.0;
  }
  else {
LAB_10a92ac04:
    uStack_1c8 = 0;
    auStack_1d8[0] = 0x1010000;
    puStack_1d0 = &uStack_c8;
    uStack_1e0 = 0;
    auStack_1f0[0] = 0x1010000;
    puStack_1e8 = &uStack_128;
    uStack_1f8 = 0;
    auStack_208[0] = 0x1010000;
    puStack_200 = &uStack_190;
    uStack_210 = 0;
    auStack_220[0] = 0x1010000;
    uStack_218 = 0x1137ebe60;
    auStack_238[0] = 0xc2020006;
    pdStack_230 = adStack_1c0 + 3;
    uStack_228 = 0x300000001;
    auStack_250[0] = 0xc2020006;
    pdStack_248 = adStack_1c0;
    uStack_240 = 0x300000001;
    puVar12 = auStack_1d8;
    func_0x000109ba43b4(puVar12,auStack_1f0,auStack_208,auStack_220,auStack_238,auStack_250,1,
                        plVar11);
    if (((ulong)puVar12 & 1) == 0) goto LAB_10a92ac9c;
    uVar18 = 1;
  }
  lVar15 = 0;
  do {
    *pfVar17 = (float)*(double *)((long)adStack_1c0 + lVar15 + 0x18);
    pfVar17[3] = (float)*(double *)((long)adStack_1c0 + lVar15);
    lVar15 = lVar15 + 8;
    pfVar17 = pfVar17 + 1;
  } while (lVar15 != 0x18);
  if (lStack_158 != 0) {
    piVar1 = (int *)(lStack_158 + 0x14);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000109a848d4(&uStack_190);
    }
  }
  lStack_158 = 0;
  plStack_178 = (long *)0x0;
  plStack_180 = (long *)0x0;
  lStack_168 = 0;
  lStack_170 = 0;
  if (0 < uStack_190._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(uStack_150 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_190._4_4_);
  }
  if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
    _free(puStack_148[-1]);
  }
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000109a848d4(&uStack_128);
    }
  }
  lStack_f0 = 0;
  lStack_110 = 0;
  lStack_118 = 0;
  lStack_100 = 0;
  lStack_108 = 0;
  if (0 < uStack_128._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)((long)puStack_e8 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_128._4_4_);
  }
  if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
    _free(puStack_e0[-1]);
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  if (0 < uStack_c8._4_4_) {
    lVar15 = 0;
    do {
      piStack_88[lVar15] = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_c8._4_4_);
  }
  if (ppiStack_80 != &piStack_78 && ppiStack_80 != (int **)0x0) {
    _free(ppiStack_80[-1]);
  }
  if (plStack_278 != (long *)0x0) {
    plVar9 = plStack_278 + 1;
    do {
      lVar15 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
    }
  }
  if (plStack_268 != (long *)0x0) {
    plVar9 = plStack_268 + 1;
    do {
      lVar15 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
    }
  }
  if (plStack_258 != (long *)0x0) {
    plVar9 = plStack_258 + 1;
    do {
      lVar15 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_258 + 0x10))(plStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar18;
  plVar9 = plVar8 + 0x4b;
  lVar15 = plVar8[0x59];
  uVar13 = lVar15 - 1;
  plVar8[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar9[lVar15 + 2];
    if (plVar8[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar13) {
      return;
    }
  }
  piVar1 = (int *)*plVar9;
  piVar20 = (int *)plVar8[0x4c];
  lVar15 = (long)piVar20 - (long)piVar1;
  uVar22 = lVar15 >> 4;
  if (uVar22 < uVar13) {
    uVar23 = uVar13 - uVar22;
    lVar21 = plVar8[0x4d];
    if ((ulong)(lVar21 - (long)piVar20 >> 4) < uVar23) {
      if (uVar13 >> 0x3c == 0) {
        uVar14 = lVar21 - (long)piVar1 >> 3;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)piVar1)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar14 >> 0x3c == 0) {
          lVar7 = uVar14 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar15;
          _bzero(lVar2,uVar23 * 0x10);
          lVar19 = lVar2 + uVar22 * -0x10;
          _memcpy(lVar19,piVar1,lVar15);
          *plVar9 = lVar19;
          plVar8[0x4c] = lVar2 + uVar23 * 0x10;
          plVar8[0x4d] = lVar7 + uVar14 * 0x10;
          piStack_88 = piVar1;
          ppiStack_80 = (int **)piVar1;
          piStack_78 = piVar1;
          lStack_70 = lVar21;
          func_0x00010988c1b8(&piStack_88);
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
    _bzero(piVar20,uVar23 * 0x10);
    plVar8[0x4c] = (long)(piVar20 + uVar23 * 4);
  }
  else if (uVar13 < uVar22) {
    while (piVar20 != piVar1 + uVar13 * 4) {
      piVar20 = piVar20 + -4;
      func_0x00010988c204(piVar20);
    }
    plVar8[0x4c] = (long)(piVar1 + uVar13 * 4);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar13;
  return;
}



/* Entry: 10a92b178; end: 10a92b19b;  */

long FUN_10a92b178(long param_1)

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



/* Entry: 10a92b19c; end: 10a92b1d7;  */

long FUN_10a92b19c(long param_1)

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



/* Entry: 10a92b1d8; end: 10a92bc0f;  */

void FUN_10a92b1d8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  undefined8 **ppuVar21;
  long lVar22;
  float *pfVar23;
  ulong uVar24;
  ulong uVar25;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined4 auStack_2f8 [2];
  undefined4 **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined4 auStack_2e0 [2];
  double *pdStack_2d8;
  undefined8 uStack_2d0;
  undefined4 auStack_2c8 [2];
  undefined4 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 auStack_2b0 [2];
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined4 auStack_298 [2];
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined4 auStack_280 [2];
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined4 *apuStack_268 [3];
  double dStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int aiStack_1e8 [6];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  int *piStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int aiStack_c8 [2];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  int *piStack_90;
  undefined8 **ppuStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a92bc10(param_5);
  FUN_10a1f7d54(&plStack_308,param_2,param_4);
  FUN_10a1f7d54(&plStack_318,param_2,param_4 + 0x10);
  plVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  plVar10 = param_2;
  func_0x00010a1f8668(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_328,param_2,param_4 + 0x40);
  plVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x50);
  plVar12 = param_2;
  func_0x00010989847c(param_2,param_4 + 0x60);
  plVar13 = param_2;
  func_0x000109898518(param_2,param_4 + 0x70);
  FUN_10a1f7d54(&plStack_338,param_2,param_4 + 0x80);
  if ((ulong)plStack_308[1] < (ulong)((long)*(float *)((long)plVar9 + 4) * 3)) {
    FUN_10a0ee900(&uStack_d0,&UNK_10f683b16,0x23);
    FUN_10a0029c0(&uStack_d0);
  }
  else {
    FUN_10a91e4d4(plStack_318[1],plVar9);
    FUN_10a91e59c(plVar9,2,0,1);
    if ((ulong)plStack_338[1] < 6) {
      FUN_10a0ee900(&uStack_d0,&UNK_10f683b6e,0x5d);
      FUN_10a0029c0(&uStack_d0);
    }
    else {
      if ((plStack_328 == (long *)0x0) || (plStack_328[1] == 0)) {
        bVar5 = false;
      }
      else {
        FUN_10a91e4d4(plStack_328[1],plVar11);
        bVar5 = true;
        FUN_10a91e59c(plVar11,1,0,1);
      }
      aiStack_c8[0] = (int)*(float *)((long)plVar9 + 4);
      lStack_c0 = *plStack_308;
      uStack_d0 = 0x242ff0015;
      piStack_90 = aiStack_c8;
      aiStack_c8[1] = 1;
      lStack_a8 = 0;
      lStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      lStack_b8 = lStack_c0;
      ppuStack_88 = &plStack_80;
      if ((aiStack_c8[0] == 0) || (lStack_c0 != 0)) {
        uStack_d0 = 0x242ff4015;
        plStack_78 = (long *)0xc;
        plStack_80 = (long *)0xc;
        lStack_b0 = lStack_c0 + (long)aiStack_c8[0] * 0xc;
        lStack_120 = *plStack_318;
        uStack_130 = (undefined4 *)0x242ff000d;
        puStack_f0 = &uStack_128;
        uStack_128 = CONCAT44(1,aiStack_c8[0]);
        lStack_108 = 0;
        lStack_110 = 0;
        lStack_f8 = 0;
        uStack_100 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_118 = lStack_120;
        puStack_e8 = &uStack_e0;
        lStack_a8 = lStack_b0;
        if ((aiStack_c8[0] == 0) || (lStack_120 != 0)) {
          uStack_130 = (undefined4 *)0x242ff400d;
          uStack_d8 = 8;
          uStack_e0 = 8;
          lStack_110 = lStack_120 + (long)aiStack_c8[0] * 8;
          uStack_150 = (ulong)&uStack_190 | 8;
          lStack_158 = 0;
          uStack_188 = 0x300000003;
          uStack_190 = (undefined4 *)0x242ff4005;
          uStack_138 = 4;
          uStack_140 = 0xc;
          lStack_170 = (long)plVar10 + 0x24;
          uStack_160 = 0;
          uStack_1f0 = 0x42ff0000;
          piStack_1b0 = aiStack_1e8;
          aiStack_1e8[1] = 0;
          aiStack_1e8[2] = 0;
          iStack_1ec = 0;
          aiStack_1e8[0] = 0;
          aiStack_1e8[5] = 0;
          uStack_1d0._0_4_ = 0;
          aiStack_1e8[3] = 0;
          aiStack_1e8[4] = 0;
          uStack_1c8._4_4_ = 0;
          uStack_1d0._4_4_ = 0;
          uStack_1c8._0_4_ = 0;
          uStack_1d0 = 0;
          lStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          puStack_1a8 = &uStack_1a0;
          plStack_180 = plVar10;
          plStack_178 = plVar10;
          lStack_168 = lStack_170;
          puStack_148 = &uStack_140;
          lStack_108 = lStack_110;
          if (bVar5) {
            iVar17 = (int)*(float *)((long)plVar11 + 4);
            lStack_240 = *plStack_328;
            dStack_250 = 4.7993252912314e-314;
            puStack_210 = &uStack_248;
            uStack_248 = CONCAT44(1,iVar17);
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            puStack_208 = &uStack_200;
            uStack_200 = 0;
            uStack_1f8 = 0;
            lStack_238 = lStack_240;
            if ((iVar17 != 0) && (lStack_240 == 0)) {
              puVar14 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar14 = 1;
              apuStack_268[0] = puVar14 + 1;
              apuStack_268[1] = (undefined4 *)0x1c;
              *(undefined1 *)(puVar14 + 8) = 0;
              *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
              func_0x000109ac3188(0xffffff29,apuStack_268,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_10a92bad0;
            }
            uStack_1d0 = lStack_240 + (long)iVar17 * 4;
            uStack_1f0 = 0x42ff4005;
            iStack_1ec = 2;
            aiStack_1e8[1] = 1;
            aiStack_1e8[2] = (int)lStack_240;
            aiStack_1e8[3] = (int)((ulong)lStack_240 >> 0x20);
            uStack_198 = 4;
            uStack_1a0 = 4;
            aiStack_1e8[0] = iVar17;
            aiStack_1e8[4] = aiStack_1e8[2];
            aiStack_1e8[5] = aiStack_1e8[3];
          }
          lStack_1b8 = 0;
          uStack_1bc = 0;
          uStack_1c0 = 0;
          lVar16 = 0;
          pfVar23 = (float *)*plStack_338;
          dStack_250 = 0.0;
          uStack_248 = 0;
          lStack_240 = 0;
          apuStack_268[0] = (undefined4 *)0x0;
          apuStack_268[1] = (undefined4 *)0x0;
          apuStack_268[2] = (undefined4 *)0x0;
          pfVar19 = pfVar23;
          do {
            *(double *)((long)&dStack_250 + lVar16) = (double)*pfVar19;
            *(double *)((long)apuStack_268 + lVar16) = (double)pfVar19[3];
            lVar16 = lVar16 + 8;
            pfVar19 = pfVar19 + 1;
          } while (lVar16 != 0x18);
          uStack_270 = 0;
          auStack_280[0] = 0x1010000;
          puStack_278 = &uStack_d0;
          uStack_288 = 0;
          auStack_298[0] = 0x1010000;
          puStack_290 = &uStack_130;
          uStack_2a0 = 0;
          auStack_2b0[0] = 0x1010000;
          puStack_2a8 = &uStack_190;
          uStack_2b8 = 0;
          auStack_2c8[0] = 0x1010000;
          puStack_2c0 = &uStack_1f0;
          auStack_2e0[0] = 0xc2020006;
          pdStack_2d8 = &dStack_250;
          uStack_2d0 = 0x300000001;
          auStack_2f8[0] = 0xc2020006;
          ppuStack_2f0 = apuStack_268;
          uStack_2e8 = 0x300000001;
          puVar14 = auStack_280;
          aiStack_1e8[2] = aiStack_1e8[4];
          aiStack_1e8[3] = aiStack_1e8[5];
          uStack_1c8 = uStack_1d0;
          func_0x000109ba43b4(puVar14,auStack_298,auStack_2b0,auStack_2c8,auStack_2e0,auStack_2f8,
                              plVar12,plVar13);
          if ((int)puVar14 == 0) {
            dStack_250 = 0.0;
            uStack_248 = 0;
            lStack_240 = 0;
            apuStack_268[1] = (undefined4 *)0x0;
            apuStack_268[2] = (undefined4 *)0x0;
            apuStack_268[0] = (undefined4 *)0x0;
          }
          lVar16 = 0;
          do {
            *pfVar23 = (float)*(double *)((long)&dStack_250 + lVar16);
            pfVar23[3] = (float)*(double *)((long)apuStack_268 + lVar16);
            lVar16 = lVar16 + 8;
            pfVar23 = pfVar23 + 1;
          } while (lVar16 != 0x18);
          if (lStack_1b8 != 0) {
            piVar1 = (int *)(lStack_1b8 + 0x14);
            do {
              iVar17 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar17 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&uStack_1f0);
            }
          }
          lStack_1b8 = 0;
          aiStack_1e8[4] = 0;
          aiStack_1e8[5] = 0;
          aiStack_1e8[2] = 0;
          aiStack_1e8[3] = 0;
          uStack_1c8._0_4_ = 0;
          uStack_1c8._4_4_ = 0;
          uStack_1d0._0_4_ = 0;
          uStack_1d0._4_4_ = 0;
          if (0 < iStack_1ec) {
            lVar16 = 0;
            do {
              piStack_1b0[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_1ec);
          }
          if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
            _free(puStack_1a8[-1]);
          }
          if (lStack_158 != 0) {
            piVar1 = (int *)(lStack_158 + 0x14);
            do {
              iVar17 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar17 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&uStack_190);
            }
          }
          lStack_158 = 0;
          plStack_178 = (long *)0x0;
          plStack_180 = (long *)0x0;
          lStack_168 = 0;
          lStack_170 = 0;
          if (0 < uStack_190._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)(uStack_150 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_190._4_4_);
          }
          if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
            _free(puStack_148[-1]);
          }
          if (lStack_f8 != 0) {
            piVar1 = (int *)(lStack_f8 + 0x14);
            do {
              iVar17 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar17 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&uStack_130);
            }
          }
          lStack_f8 = 0;
          lStack_118 = 0;
          lStack_120 = 0;
          lStack_108 = 0;
          lStack_110 = 0;
          if (0 < uStack_130._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)((long)puStack_f0 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_130._4_4_);
          }
          if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
            _free(puStack_e8[-1]);
          }
          if (lStack_98 != 0) {
            piVar1 = (int *)(lStack_98 + 0x14);
            do {
              iVar17 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar17 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&uStack_d0);
            }
          }
          lStack_98 = 0;
          lStack_b8 = 0;
          lStack_c0 = 0;
          lStack_a8 = 0;
          lStack_b0 = 0;
          if (0 < uStack_d0._4_4_) {
            lVar16 = 0;
            do {
              piStack_90[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_d0._4_4_);
          }
          if (ppuStack_88 != &plStack_80 && ppuStack_88 != (long **)0x0) {
            _free(ppuStack_88[-1]);
          }
          if (plStack_330 != (long *)0x0) {
            plVar9 = plStack_330 + 1;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_330 + 0x10))(plStack_330);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_330);
            }
          }
          if (plStack_320 != (long *)0x0) {
            plVar9 = plStack_320 + 1;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_320 + 0x10))(plStack_320);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_320);
            }
          }
          if (plStack_310 != (long *)0x0) {
            plVar9 = plStack_310 + 1;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_310 + 0x10))(plStack_310);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_310);
            }
          }
          if (plStack_300 != (long *)0x0) {
            plVar9 = plStack_300 + 1;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_300 + 0x10))(plStack_300);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_300);
            }
          }
          *param_1 = 2;
          *(char *)(param_1 + 2) = (char)puVar14;
          plVar9 = plVar8 + 0x4b;
          lVar16 = plVar8[0x59];
          uVar15 = lVar16 - 1;
          plVar8[0x59] = uVar15;
          if (uVar15 < 8) {
            uVar15 = plVar9[lVar16 + 2];
            if (plVar8[0x5a] == uVar15) {
              return;
            }
          }
          else {
            uVar15 = *(ulong *)(plVar8[0x57] + -8);
            plVar8[0x57] = plVar8[0x57] + -8;
            if (plVar8[0x5a] == uVar15) {
              return;
            }
          }
          ppuVar3 = (undefined8 **)*plVar9;
          ppuVar21 = (undefined8 **)plVar8[0x4c];
          lVar16 = (long)ppuVar21 - (long)ppuVar3;
          uVar24 = lVar16 >> 4;
          if (uVar24 < uVar15) {
            uVar25 = uVar15 - uVar24;
            lVar22 = plVar8[0x4d];
            if ((ulong)(lVar22 - (long)ppuVar21 >> 4) < uVar25) {
              if (uVar15 >> 0x3c == 0) {
                uVar18 = lVar22 - (long)ppuVar3 >> 3;
                if (uVar18 <= uVar15) {
                  uVar18 = uVar15;
                }
                if (0x7fffffffffffffef < (ulong)(lVar22 - (long)ppuVar3)) {
                  uVar18 = 0xfffffffffffffff;
                }
                plStack_68 = plVar9;
                if (uVar18 >> 0x3c == 0) {
                  lVar7 = uVar18 << 4;
                  __Znwm();
                  lVar2 = lVar7 + lVar16;
                  _bzero(lVar2,uVar25 * 0x10);
                  lVar20 = lVar2 + uVar24 * -0x10;
                  _memcpy(lVar20,ppuVar3,lVar16);
                  *plVar9 = lVar20;
                  plVar8[0x4c] = lVar2 + uVar25 * 0x10;
                  plVar8[0x4d] = lVar7 + uVar18 * 0x10;
                  ppuStack_88 = ppuVar3;
                  plStack_80 = (long *)ppuVar3;
                  plStack_78 = (long *)ppuVar3;
                  lStack_70 = lVar22;
                  func_0x00010988c1b8(&ppuStack_88);
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
            _bzero(ppuVar21,uVar25 * 0x10);
            plVar8[0x4c] = (long)(ppuVar21 + uVar25 * 2);
          }
          else if (uVar15 < uVar24) {
            while (ppuVar21 != ppuVar3 + uVar15 * 2) {
              ppuVar21 = ppuVar21 + -2;
              func_0x00010988c204(ppuVar21);
            }
            plVar8[0x4c] = (long)(ppuVar3 + uVar15 * 2);
          }
code_r0x00010988c138:
          plVar8[0x5a] = uVar15;
          return;
        }
        puVar14 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        uStack_190 = puVar14 + 1;
        uStack_188 = 0x1c;
        *(undefined1 *)(puVar14 + 8) = 0;
        *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_190,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        puVar14 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        uStack_130 = puVar14 + 1;
        uStack_128 = 0x1c;
        *(undefined1 *)(puVar14 + 8) = 0;
        *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_130,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
    }
  }
LAB_10a92bad0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a92bad4);
  (*pcVar6)();
}



/* Entry: 10a92bc10; end: 10a92bc33;  */

long FUN_10a92bc10(long param_1)

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



/* Entry: 10a92bc34; end: 10a92bc6f;  */

long FUN_10a92bc34(long param_1)

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



/* Entry: 10a92bc70; end: 10a92c8df;  */

void FUN_10a92bc70(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined4 auStack_338 [2];
  int **ppiStack_330;
  undefined8 uStack_328;
  undefined4 auStack_320 [2];
  undefined4 **ppuStack_318;
  undefined8 uStack_310;
  undefined4 auStack_308 [2];
  double *pdStack_300;
  undefined8 uStack_2f8;
  undefined4 auStack_2f0 [2];
  undefined4 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined4 auStack_2d8 [2];
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined4 auStack_2c0 [2];
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined4 auStack_2a8 [2];
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined4 *apuStack_290 [3];
  double dStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  int iStack_214;
  int aiStack_210 [6];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  long lStack_1e0;
  int *piStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int *piStack_1b8;
  int *piStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int aiStack_d8 [2];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  int *piStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a92c8e0(param_5);
  FUN_10a1f7d54(&plStack_348,param_2,param_4);
  FUN_10a1f7d54(&plStack_358,param_2,param_4 + 0x10);
  plVar7 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  plVar8 = param_2;
  func_0x00010a1f8668(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_368,param_2,param_4 + 0x40);
  plVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x50);
  plVar10 = param_2;
  func_0x00010989847c(param_2,param_4 + 0x60);
  plVar11 = param_2;
  func_0x000109898518(param_2,param_4 + 0x70);
  if (*(int *)(param_4 + 0x80) == 3) {
    fVar3 = (float)*(double *)(param_4 + 0x88);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x88))) {
      fVar3 = 0.0;
    }
    if (*(int *)(param_4 + 0x90) == 3) {
      uVar26 = *(ulong *)(param_4 + 0x98);
      if (0x7fefffffffffffff < (uVar26 & 0x7fffffffffffffff)) {
        uVar26 = 0;
      }
      plVar12 = param_2;
      func_0x000109898518(param_2,param_4 + 0xa0);
      FUN_10a13a07c(&plStack_378,param_2,param_4 + 0xb0);
      FUN_10a1f7d54(&plStack_388,param_2,param_4 + 0xc0);
      if ((ulong)plStack_348[1] < (ulong)((long)*(float *)((long)plVar7 + 4) * 3)) {
        FUN_10a0ee900(&uStack_e0,&UNK_10f683b16,0x23);
        FUN_10a0029c0(&uStack_e0);
      }
      else {
        FUN_10a91e4d4(plStack_358[1],plVar7);
        FUN_10a91e59c(plVar7,2,0,1);
        if ((ulong)plStack_388[1] < 6) {
          FUN_10a0ee900(&uStack_e0,&UNK_10f683b6e,0x5d);
          FUN_10a0029c0(&uStack_e0);
        }
        else if ((ulong)plStack_378[1] < (ulong)(long)*(float *)((long)plVar7 + 4)) {
          FUN_10a0ee900(&uStack_e0,&UNK_10f683b16,0x23);
          FUN_10a0029c0(&uStack_e0);
        }
        else {
          if ((plStack_368 == (long *)0x0) || (plStack_368[1] == 0)) {
            bVar2 = false;
          }
          else {
            FUN_10a91e4d4(plStack_368[1],plVar9);
            bVar2 = true;
            FUN_10a91e59c(plVar9,1,0,1);
          }
          if ((bRam00000001137ebe58 & 1) == 0) {
            iVar17 = 0x137ebe58;
            ___cxa_guard_acquire();
            if (iVar17 != 0) {
              uRam00000001137ebec0 = 0x42ff0000;
              uRam00000001137ebecc = 0;
              uRam00000001137ebec4 = 0;
              uRam00000001137ebedc = 0;
              uRam00000001137ebed4 = 0;
              uRam00000001137ebeec = 0;
              uRam00000001137ebee4 = 0;
              uRam00000001137ebef8 = 0;
              uRam00000001137ebef0 = 0;
              uRam00000001137ebef4 = 0;
              uRam00000001137ebf10 = 0;
              uRam00000001137ebf00 = 0x1137ebec8;
              uRam00000001137ebf08 = 0x1137ebf10;
              uRam00000001137ebf18 = 0;
              ___cxa_guard_release(0x1137ebe58);
            }
          }
          aiStack_d8[0] = (int)*(float *)((long)plVar7 + 4);
          lStack_d0 = *plStack_348;
          uStack_e0 = 0x242ff0015;
          piStack_a0 = aiStack_d8;
          aiStack_d8[1] = 1;
          lStack_b8 = 0;
          lStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
          uStack_90 = 0;
          lStack_88 = 0;
          lStack_c8 = lStack_d0;
          puStack_98 = &uStack_90;
          if ((aiStack_d8[0] == 0) || (lStack_d0 != 0)) {
            lVar25 = (long)aiStack_d8[0];
            uStack_e0 = 0x242ff4015;
            lStack_88 = 0xc;
            uStack_90 = 0xc;
            lStack_c0 = lStack_d0 + (long)aiStack_d8[0] * 0xc;
            lStack_130 = *plStack_358;
            uStack_140 = (undefined4 *)0x242ff000d;
            puStack_100 = &uStack_138;
            uStack_138 = CONCAT44(1,aiStack_d8[0]);
            lStack_118 = 0;
            lStack_120 = 0;
            lStack_108 = 0;
            uStack_110 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            lStack_128 = lStack_130;
            puStack_f8 = &uStack_f0;
            lStack_b8 = lStack_c0;
            if ((aiStack_d8[0] == 0) || (lStack_130 != 0)) {
              uStack_140 = (undefined4 *)0x242ff400d;
              uStack_e8 = 8;
              uStack_f0 = 8;
              lStack_120 = lStack_130 + lVar25 * 8;
              uStack_160 = (ulong)&uStack_1a0 | 8;
              lStack_168 = 0;
              uStack_170 = 0;
              uStack_198 = 0x300000003;
              uStack_1a0 = (undefined4 *)0x242ff4005;
              uStack_148 = 4;
              uStack_150 = 0xc;
              lStack_180 = (long)plVar8 + 0x24;
              piStack_1b8 = (int *)0x0;
              piStack_1b0 = (int *)0x0;
              uStack_1a8 = 0;
              uStack_218 = 0x42ff0000;
              piStack_1d8 = aiStack_210;
              aiStack_210[1] = 0;
              aiStack_210[2] = 0;
              iStack_214 = 0;
              aiStack_210[0] = 0;
              aiStack_210[5] = 0;
              uStack_1f8._0_4_ = 0;
              aiStack_210[3] = 0;
              aiStack_210[4] = 0;
              uStack_1f0._4_4_ = 0;
              uStack_1f8._4_4_ = 0;
              uStack_1f0._0_4_ = 0;
              uStack_1f8 = 0;
              lStack_1e0 = 0;
              uStack_1e8 = 0;
              uStack_1e4 = 0;
              uStack_1c8 = 0;
              uStack_1c0 = 0;
              puStack_1d0 = &uStack_1c8;
              plStack_190 = plVar8;
              plStack_188 = plVar8;
              lStack_178 = lStack_180;
              puStack_158 = &uStack_150;
              lStack_118 = lStack_120;
              if (bVar2) {
                iVar17 = (int)*(float *)((long)plVar9 + 4);
                lStack_268 = *plStack_368;
                dStack_278 = 4.7993252912314e-314;
                puStack_238 = &uStack_270;
                uStack_270 = CONCAT44(1,iVar17);
                uStack_250 = 0;
                uStack_258 = 0;
                uStack_240 = 0;
                uStack_248 = 0;
                puStack_230 = &uStack_228;
                uStack_228 = 0;
                uStack_220 = 0;
                lStack_260 = lStack_268;
                if ((iVar17 != 0) && (lStack_268 == 0)) {
                  puVar13 = (undefined4 *)0x24;
                  func_0x000107c2ae8c();
                  *puVar13 = 1;
                  apuStack_290[0] = puVar13 + 1;
                  apuStack_290[1] = (undefined4 *)0x1c;
                  *(undefined1 *)(puVar13 + 8) = 0;
                  *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
                  *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
                  *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
                  *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
                  func_0x000109ac3188(0xffffff29,apuStack_290,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                  goto LAB_10a92c778;
                }
                uStack_1f8 = lStack_268 + (long)iVar17 * 4;
                uStack_218 = 0x42ff4005;
                iStack_214 = 2;
                aiStack_210[1] = 1;
                aiStack_210[2] = (int)lStack_268;
                aiStack_210[3] = (int)((ulong)lStack_268 >> 0x20);
                uStack_1c0 = 4;
                uStack_1c8 = 4;
                aiStack_210[0] = iVar17;
                aiStack_210[4] = aiStack_210[2];
                aiStack_210[5] = aiStack_210[3];
              }
              lStack_1e0 = 0;
              uStack_1e4 = 0;
              uStack_1e8 = 0;
              lVar15 = 0;
              pfVar21 = (float *)*plStack_388;
              dStack_278 = 0.0;
              uStack_270 = 0;
              lStack_268 = 0;
              apuStack_290[0] = (undefined4 *)0x0;
              apuStack_290[1] = (undefined4 *)0x0;
              apuStack_290[2] = (undefined4 *)0x0;
              pfVar19 = pfVar21;
              do {
                *(double *)((long)&dStack_278 + lVar15) = (double)*pfVar19;
                *(double *)((long)apuStack_290 + lVar15) = (double)pfVar19[3];
                lVar15 = lVar15 + 8;
                pfVar19 = pfVar19 + 1;
              } while (lVar15 != 0x18);
              uStack_298 = 0;
              auStack_2a8[0] = 0x1010000;
              puStack_2a0 = &uStack_e0;
              uStack_2b0 = 0;
              auStack_2c0[0] = 0x1010000;
              puStack_2b8 = &uStack_140;
              uStack_2c8 = 0;
              auStack_2d8[0] = 0x1010000;
              puStack_2d0 = &uStack_1a0;
              uStack_2e0 = 0;
              auStack_2f0[0] = 0x1010000;
              puStack_2e8 = &uStack_218;
              auStack_308[0] = 0xc2020006;
              pdStack_300 = &dStack_278;
              uStack_2f8 = 0x300000001;
              auStack_320[0] = 0xc2020006;
              ppuStack_318 = apuStack_290;
              uStack_310 = 0x300000001;
              auStack_338[0] = 0x82030004;
              ppiStack_330 = &piStack_1b8;
              uStack_328 = 0;
              puVar13 = auStack_2a8;
              aiStack_210[2] = aiStack_210[4];
              aiStack_210[3] = aiStack_210[5];
              uStack_1f0 = uStack_1f8;
              func_0x000109ba5c60(fVar3,uVar26,puVar13,auStack_2c0,auStack_2d8,auStack_2f0,
                                  auStack_308,auStack_320,plVar10,plVar11,auStack_338,(int)plVar12);
              if ((int)puVar13 == 0) {
                dStack_278 = 0.0;
                uStack_270 = 0;
                lStack_268 = 0;
                apuStack_290[1] = (undefined4 *)0x0;
                apuStack_290[2] = (undefined4 *)0x0;
                apuStack_290[0] = (undefined4 *)0x0;
              }
              lVar15 = 0;
              do {
                *pfVar21 = (float)*(double *)((long)&dStack_278 + lVar15);
                pfVar21[3] = (float)*(double *)((long)apuStack_290 + lVar15);
                lVar15 = lVar15 + 8;
                pfVar21 = pfVar21 + 1;
              } while (lVar15 != 0x18);
              lVar15 = *plStack_378;
              _bzero(lVar15,lVar25);
              for (piVar16 = piStack_1b8; piVar16 != piStack_1b0; piVar16 = piVar16 + 1) {
                *(undefined1 *)(lVar15 + *piVar16) = 1;
              }
              if (lStack_1e0 != 0) {
                piVar16 = (int *)(lStack_1e0 + 0x14);
                do {
                  iVar17 = *piVar16;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar2) {
                    *piVar16 = iVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar17 + -1 == 0) {
                  func_0x000109a848d4(&uStack_218);
                }
              }
              lStack_1e0 = 0;
              aiStack_210[4] = 0;
              aiStack_210[5] = 0;
              aiStack_210[2] = 0;
              aiStack_210[3] = 0;
              uStack_1f0._0_4_ = 0;
              uStack_1f0._4_4_ = 0;
              uStack_1f8._0_4_ = 0;
              uStack_1f8._4_4_ = 0;
              if (0 < iStack_214) {
                lVar25 = 0;
                do {
                  piStack_1d8[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < iStack_214);
              }
              if (puStack_1d0 != &uStack_1c8 && puStack_1d0 != (undefined8 *)0x0) {
                _free(puStack_1d0[-1]);
              }
              if (piStack_1b8 != (int *)0x0) {
                piStack_1b0 = piStack_1b8;
                __ZdlPv();
              }
              if (lStack_168 != 0) {
                piVar16 = (int *)(lStack_168 + 0x14);
                do {
                  iVar17 = *piVar16;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar2) {
                    *piVar16 = iVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar17 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1a0);
                }
              }
              lStack_168 = 0;
              plStack_188 = (long *)0x0;
              plStack_190 = (long *)0x0;
              lStack_178 = 0;
              lStack_180 = 0;
              if (0 < uStack_1a0._4_4_) {
                lVar25 = 0;
                do {
                  *(undefined4 *)(uStack_160 + lVar25 * 4) = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_1a0._4_4_);
              }
              if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
                _free(puStack_158[-1]);
              }
              if (lStack_108 != 0) {
                piVar16 = (int *)(lStack_108 + 0x14);
                do {
                  iVar17 = *piVar16;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar2) {
                    *piVar16 = iVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar17 + -1 == 0) {
                  func_0x000109a848d4(&uStack_140);
                }
              }
              lStack_108 = 0;
              lStack_128 = 0;
              lStack_130 = 0;
              lStack_118 = 0;
              lStack_120 = 0;
              if (0 < uStack_140._4_4_) {
                lVar25 = 0;
                do {
                  *(undefined4 *)((long)puStack_100 + lVar25 * 4) = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_140._4_4_);
              }
              if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
                _free(puStack_f8[-1]);
              }
              if (lStack_a8 != 0) {
                piVar16 = (int *)(lStack_a8 + 0x14);
                do {
                  iVar17 = *piVar16;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar2) {
                    *piVar16 = iVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar17 + -1 == 0) {
                  func_0x000109a848d4(&uStack_e0);
                }
              }
              lStack_a8 = 0;
              lStack_c8 = 0;
              lStack_d0 = 0;
              lStack_b8 = 0;
              lStack_c0 = 0;
              if (0 < uStack_e0._4_4_) {
                lVar25 = 0;
                do {
                  piStack_a0[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_e0._4_4_);
              }
              if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
                _free(puStack_98[-1]);
              }
              if (plStack_380 != (long *)0x0) {
                plVar7 = plStack_380 + 1;
                do {
                  lVar25 = *plVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = lVar25 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar25 == 0) {
                  (**(code **)(*plStack_380 + 0x10))(plStack_380);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_380);
                }
              }
              if (plStack_370 != (long *)0x0) {
                plVar7 = plStack_370 + 1;
                do {
                  lVar25 = *plVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = lVar25 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar25 == 0) {
                  (**(code **)(*plStack_370 + 0x10))(plStack_370);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_370);
                }
              }
              if (plStack_360 != (long *)0x0) {
                plVar7 = plStack_360 + 1;
                do {
                  lVar25 = *plVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = lVar25 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar25 == 0) {
                  (**(code **)(*plStack_360 + 0x10))(plStack_360);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_360);
                }
              }
              if (plStack_350 != (long *)0x0) {
                plVar7 = plStack_350 + 1;
                do {
                  lVar25 = *plVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = lVar25 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar25 == 0) {
                  (**(code **)(*plStack_350 + 0x10))(plStack_350);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_350);
                }
              }
              if (plStack_340 != (long *)0x0) {
                plVar7 = plStack_340 + 1;
                do {
                  lVar25 = *plVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = lVar25 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar25 == 0) {
                  (**(code **)(*plStack_340 + 0x10))(plStack_340);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_340);
                }
              }
              *param_1 = 2;
              *(char *)(param_1 + 2) = (char)puVar13;
              plVar7 = plVar6 + 0x4b;
              lVar25 = plVar6[0x59];
              uVar26 = lVar25 - 1;
              plVar6[0x59] = uVar26;
              if (uVar26 < 8) {
                uVar26 = plVar7[lVar25 + 2];
                if (plVar6[0x5a] == uVar26) {
                  return;
                }
              }
              else {
                uVar26 = *(ulong *)(plVar6[0x57] + -8);
                plVar6[0x57] = plVar6[0x57] + -8;
                if (plVar6[0x5a] == uVar26) {
                  return;
                }
              }
              lVar25 = *plVar7;
              lVar15 = plVar6[0x4c];
              lVar20 = lVar15 - lVar25;
              uVar23 = lVar20 >> 4;
              if (uVar23 < uVar26) {
                uVar24 = uVar26 - uVar23;
                if ((ulong)(plVar6[0x4d] - lVar15 >> 4) < uVar24) {
                  if (uVar26 >> 0x3c == 0) {
                    uVar14 = plVar6[0x4d] - lVar25;
                    uVar18 = (long)uVar14 >> 3;
                    if (uVar18 <= uVar26) {
                      uVar18 = uVar26;
                    }
                    if (0x7fffffffffffffef < uVar14) {
                      uVar18 = 0xfffffffffffffff;
                    }
                    if (uVar18 >> 0x3c == 0) {
                      lVar5 = uVar18 << 4;
                      __Znwm();
                      lVar15 = lVar5 + lVar20;
                      _bzero(lVar15,uVar24 * 0x10);
                      lVar22 = lVar15 + uVar23 * -0x10;
                      _memcpy(lVar22,lVar25,lVar20);
                      *plVar7 = lVar22;
                      plVar6[0x4c] = lVar15 + uVar24 * 0x10;
                      plVar6[0x4d] = lVar5 + uVar18 * 0x10;
                      lStack_88 = lVar25;
                      lStack_80 = lVar25;
                      lStack_78 = lVar25;
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
                _bzero(lVar15,uVar24 * 0x10);
                plVar6[0x4c] = lVar15 + uVar24 * 0x10;
              }
              else if (uVar26 < uVar23) {
                lVar25 = lVar25 + uVar26 * 0x10;
                while (lVar15 != lVar25) {
                  lVar15 = lVar15 + -0x10;
                  func_0x00010988c204(lVar15);
                }
                plVar6[0x4c] = lVar25;
              }
code_r0x00010988c138:
              plVar6[0x5a] = uVar26;
              return;
            }
            puVar13 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar13 = 1;
            uStack_1a0 = puVar13 + 1;
            uStack_198 = 0x1c;
            *(undefined1 *)(puVar13 + 8) = 0;
            *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_1a0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
          }
          else {
            puVar13 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar13 = 1;
            uStack_140 = puVar13 + 1;
            uStack_138 = 0x1c;
            *(undefined1 *)(puVar13 + 8) = 0;
            *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&uStack_140,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
          }
        }
      }
      goto LAB_10a92c778;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10a92c778:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a92c77c);
  (*pcVar4)();
}



/* Entry: 10a92c8e0; end: 10a92c903;  */

long FUN_10a92c8e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 0xd) {
    return param_1;
  }
  lVar4 = 0xd;
  FUN_10a052ee0(0xd,0,param_1);
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



/* Entry: 10a92c904; end: 10a92c93f;  */

long FUN_10a92c904(long param_1)

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



/* Entry: 10a92c940; end: 10a92d41f;  */

void FUN_10a92c940(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
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
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 ****ppppuVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  int iVar28;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  float fVar32;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined8 *puStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined4 auStack_270 [2];
  long *plStack_268;
  undefined8 uStack_260;
  undefined4 auStack_258 [2];
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined4 auStack_240 [2];
  undefined8 ***pppuStack_238;
  undefined8 uStack_230;
  undefined4 auStack_228 [2];
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined4 auStack_210 [2];
  undefined4 *puStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  long *plStack_150;
  long alStack_148 [2];
  undefined4 uStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long lStack_100;
  int *piStack_f8;
  long *plStack_f0;
  long alStack_e8 [2];
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  pfVar8 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar8 + 0xb2) < 8) {
    *(long *)(pfVar8 + *(ulong *)(pfVar8 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar8 + 0xb4);
    *(long *)(pfVar8 + 0xb2) = *(long *)(pfVar8 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar8 + 0x96);
  }
  FUN_10a92d420(param_5);
  FUN_10a13a07c(&plStack_288,param_2,param_4);
  FUN_10a13a07c(&puStack_298,param_2,param_4 + 0x10);
  pfVar9 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_2a8,param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_2b8,param_2,param_4 + 0x40);
  pfVar10 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x50);
  pfVar11 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x60);
  pfVar12 = param_2;
  func_0x000109898518(param_2,param_4 + 0x70);
  func_0x000109898518(param_2,param_4 + 0x80);
  if (*(int *)(param_4 + 0x90) == 3) {
    dVar31 = *(double *)(param_4 + 0x98);
    fVar32 = pfVar10[1];
    FUN_10a91e4d4(plStack_288[1],pfVar9);
    FUN_10a91e4d4(puStack_298[1],pfVar9);
    FUN_10a91e59c(pfVar9,0,0,1);
    uVar23 = (uint)fVar32;
    if ((ulong)plStack_2a8[1] < (ulong)(long)(int)(uVar23 << 1)) {
      FUN_10a0ee900(&uStack_d8,&UNK_10f683b16,0x23);
      FUN_10a0029c0(&uStack_d8);
    }
    else {
      FUN_10a91e59c(pfVar10,2,0,1);
      if ((ulong)plStack_2b8[1] < (ulong)(long)(int)(uVar23 << 1)) {
        FUN_10a0ee900(&uStack_d8,&UNK_10f683b6e,0x5d);
        FUN_10a0029c0(&uStack_d8);
      }
      else {
        lVar16 = *plStack_288;
        puVar26 = (undefined8 *)*puStack_298;
        iVar28 = (int)*pfVar9;
        iVar20 = (int)pfVar9[1];
        uStack_138 = 0x42ff0000;
        iStack_134 = 2;
        piStack_f8 = &iStack_130;
        uStack_128 = (undefined4)lVar16;
        uStack_124 = (undefined4)((ulong)lVar16 >> 0x20);
        uStack_110._0_4_ = 0;
        uStack_110._4_4_ = 0;
        uStack_118._0_4_ = 0;
        uStack_118._4_4_ = 0;
        lStack_100 = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        alStack_e8[1] = 0;
        alStack_e8[0] = 0;
        lVar27 = (long)iVar20 * (long)iVar28;
        iStack_130 = iVar20;
        iStack_12c = iVar28;
        uStack_120 = uStack_128;
        uStack_11c = uStack_124;
        plStack_f0 = alStack_e8;
        if ((lVar16 == 0) && (lVar27 != 0)) {
          puVar14 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar14 = 1;
          uStack_198 = (undefined8 *)(puVar14 + 1);
          uStack_190 = (undefined8 *)0x1c;
          *(undefined1 *)(puVar14 + 8) = 0;
          *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,&uStack_198,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        }
        else {
          uStack_138 = 0x42ff4000;
          alStack_e8[1] = 1;
          uStack_118 = lVar16 + lVar27;
          lStack_98 = (long)&uStack_d4 + 4;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_d4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_ac = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          lStack_a0 = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          lStack_88 = 0;
          lStack_80 = 0;
          uStack_d8 = 0x42ff0000;
          alStack_e8[0] = (long)iVar28;
          plStack_90 = &lStack_88;
          uStack_110 = uStack_118;
          func_0x0001093910bc(&uStack_d8,&uStack_138);
          if (lStack_100 != 0) {
            piVar1 = (int *)(lStack_100 + 0x14);
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
              func_0x000109a848d4(&uStack_138);
            }
          }
          lStack_100 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_110._0_4_ = 0;
          uStack_110._4_4_ = 0;
          uStack_118._0_4_ = 0;
          uStack_118._4_4_ = 0;
          if (0 < iStack_134) {
            lVar16 = 0;
            do {
              piStack_f8[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_134);
          }
          if (plStack_f0 != alStack_e8 && plStack_f0 != (long *)0x0) {
            _free(plStack_f0[-1]);
          }
          uStack_198 = (undefined8 *)0x242ff0000;
          puStack_158 = &uStack_190;
          uStack_190 = (undefined8 *)CONCAT44(iVar28,iVar20);
          puStack_170 = (undefined8 *)0x0;
          puStack_178 = (undefined8 *)0x0;
          lStack_160 = 0;
          uStack_168 = 0;
          alStack_148[0] = 0;
          alStack_148[1] = 0;
          puStack_188 = puVar26;
          puStack_180 = puVar26;
          plStack_150 = alStack_148;
          if ((puVar26 != (undefined8 *)0x0) || (lVar27 == 0)) {
            uStack_198 = (undefined8 *)0x242ff4000;
            alStack_148[1] = 1;
            puStack_178 = (undefined8 *)((long)puVar26 + lVar27);
            piStack_f8 = &iStack_130;
            iStack_12c = 0;
            uStack_128 = 0;
            iStack_134 = 0;
            iStack_130 = 0;
            uStack_11c = 0;
            uStack_118._0_4_ = 0;
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_110._4_4_ = 0;
            uStack_118._4_4_ = 0;
            uStack_110._0_4_ = 0;
            lStack_100 = 0;
            uStack_108 = 0;
            uStack_104 = 0;
            alStack_e8[1] = 0;
            alStack_e8[0] = 0;
            uStack_138 = 0x42ff0000;
            puStack_170 = puStack_178;
            alStack_148[0] = (long)iVar28;
            plStack_f0 = alStack_e8;
            func_0x0001093910bc(&uStack_138,&uStack_198);
            if (lStack_160 != 0) {
              piVar1 = (int *)(lStack_160 + 0x14);
              do {
                iVar20 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar20 + -1 == 0) {
                func_0x000109a848d4(&uStack_198);
              }
            }
            lStack_160 = 0;
            puStack_180 = (undefined8 *)0x0;
            puStack_188 = (undefined8 *)0x0;
            puStack_170 = (undefined8 *)0x0;
            puStack_178 = (undefined8 *)0x0;
            if (0 < uStack_198._4_4_) {
              lVar16 = 0;
              do {
                *(undefined4 *)((long)puStack_158 + lVar16 * 4) = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < uStack_198._4_4_);
            }
            if (plStack_150 != alStack_148 && plStack_150 != (long *)0x0) {
              _free(plStack_150[-1]);
            }
            uStack_198 = (undefined8 *)0x0;
            uStack_190 = (undefined8 *)0x0;
            puStack_188 = (undefined8 *)0x0;
            pppuStack_1b0 = (undefined8 ****)0x0;
            pppuStack_1a8 = (undefined8 ****)0x0;
            pppuStack_1a0 = (undefined8 ****)0x0;
            lVar16 = *plStack_2b8;
            if (0 < (int)uVar23) {
              puVar14 = (undefined4 *)(lVar16 + 4);
              puVar19 = (undefined4 *)(*plStack_2a8 + 4);
              uVar17 = (ulong)uVar23;
              do {
                uVar30 = *puVar19;
                uStack_1c8 = CONCAT44(uVar30,puVar19[-1]);
                if (uStack_190 < puStack_188) {
                  puVar26 = uStack_190 + 1;
                  *(undefined4 *)uStack_190 = puVar19[-1];
                  *(undefined4 *)((long)uStack_190 + 4) = uVar30;
                }
                else {
                  puVar26 = &uStack_198;
                  func_0x0001092de294(puVar26,&uStack_1c8);
                }
                uVar30 = *puVar14;
                uStack_1c8 = CONCAT44(uVar30,puVar14[-1]);
                uStack_190 = puVar26;
                if (pppuStack_1a8 < pppuStack_1a0) {
                  ppppuVar13 = (undefined8 ****)(pppuStack_1a8 + 1);
                  *(undefined4 *)pppuStack_1a8 = puVar14[-1];
                  *(undefined4 *)((long)pppuStack_1a8 + 4) = uVar30;
                }
                else {
                  ppppuVar13 = &pppuStack_1b0;
                  func_0x0001092de294(ppppuVar13,&uStack_1c8);
                }
                puVar19 = puVar19 + 2;
                puVar14 = puVar14 + 2;
                uVar17 = uVar17 - 1;
                pppuStack_1a8 = ppppuVar13;
              } while (uVar17 != 0);
            }
            uStack_1c8 = 0;
            lStack_1c0 = 0;
            uStack_1b8 = 0;
            lStack_1e0 = 0;
            lStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1e8 = 0;
            auStack_1f8[0] = 0x81010000;
            puStack_1f0 = &uStack_d8;
            uStack_200 = 0;
            auStack_210[0] = 0x81010000;
            puStack_208 = &uStack_138;
            uStack_218 = 0;
            auStack_228[0] = 0x8103000d;
            puStack_220 = &uStack_198;
            auStack_240[0] = 0x8303000d;
            pppuStack_238 = &pppuStack_1b0;
            uStack_230 = 0;
            auStack_258[0] = 0x82030000;
            puStack_250 = &uStack_1c8;
            uStack_248 = 0;
            auStack_270[0] = 0x82030005;
            plStack_268 = &lStack_1e0;
            dVar29 = (double)(float)dVar31;
            if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
              dVar29 = 0.0;
            }
            uStack_260 = 0;
            uStack_278 = CONCAT44((int)(float)((ulong)*(long *)pfVar11 >> 0x20),
                                  (int)(float)*(long *)pfVar11);
            func_0x000109a25464(0x3f1a36e2eb1c432d,auStack_1f8,auStack_210,auStack_228,auStack_240,
                                auStack_258,auStack_270,&uStack_278,(int)pfVar12,
                                (long)param_2 << 0x20 | 3,dVar29,0);
            if (0 < (int)uVar23) {
              uVar17 = 0;
              puVar14 = (undefined4 *)(lVar16 + 4);
              puVar19 = (undefined4 *)((long)pppuStack_1b0 + 4);
              do {
                if (lStack_1c0 - uStack_1c8 == uVar17) goto LAB_10a92d2a8;
                if (*(char *)(uStack_1c8 + uVar17) != '\0') {
                  if ((ulong)((long)pppuStack_1a8 - (long)pppuStack_1b0 >> 3) <= uVar17)
                  goto LAB_10a92d2a8;
                  puVar14[-1] = puVar19[-1];
                  *puVar14 = *puVar19;
                }
                uVar17 = uVar17 + 1;
                puVar14 = puVar14 + 2;
                puVar19 = puVar19 + 2;
              } while (uVar23 != uVar17);
            }
            if (lStack_1e0 != 0) {
              lStack_1d8 = lStack_1e0;
              __ZdlPv();
            }
            if (uStack_1c8 != 0) {
              lStack_1c0 = uStack_1c8;
              __ZdlPv();
            }
            if ((undefined8 ****)pppuStack_1b0 != (undefined8 ****)0x0) {
              pppuStack_1a8 = pppuStack_1b0;
              __ZdlPv();
            }
            if (uStack_198 != (undefined8 *)0x0) {
              uStack_190 = uStack_198;
              __ZdlPv();
            }
            if (lStack_100 != 0) {
              piVar1 = (int *)(lStack_100 + 0x14);
              do {
                iVar20 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar20 + -1 == 0) {
                func_0x000109a848d4(&uStack_138);
              }
            }
            lStack_100 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            uStack_110._0_4_ = 0;
            uStack_110._4_4_ = 0;
            uStack_118._0_4_ = 0;
            uStack_118._4_4_ = 0;
            if (0 < iStack_134) {
              lVar16 = 0;
              do {
                piStack_f8[lVar16] = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < iStack_134);
            }
            if (plStack_f0 != alStack_e8 && plStack_f0 != (long *)0x0) {
              _free(plStack_f0[-1]);
            }
            if (lStack_a0 != 0) {
              piVar1 = (int *)(lStack_a0 + 0x14);
              do {
                iVar20 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar20 + -1 == 0) {
                func_0x000109a848d4(&uStack_d8);
              }
            }
            lStack_a0 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            if (0 < (int)uStack_d4) {
              lVar16 = 0;
              do {
                *(undefined4 *)(lStack_98 + lVar16 * 4) = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)uStack_d4);
            }
            if (plStack_90 != &lStack_88 && plStack_90 != (long *)0x0) {
              _free(plStack_90[-1]);
            }
            if (plStack_2b0 != (long *)0x0) {
              plVar2 = plStack_2b0 + 1;
              do {
                lVar16 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b0);
              }
            }
            if (plStack_2a0 != (long *)0x0) {
              plVar2 = plStack_2a0 + 1;
              do {
                lVar16 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2a0);
              }
            }
            if (plStack_290 != (long *)0x0) {
              plVar2 = plStack_290 + 1;
              do {
                lVar16 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_290 + 0x10))(plStack_290);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
              }
            }
            if (plStack_280 != (long *)0x0) {
              plVar2 = plStack_280 + 1;
              do {
                lVar16 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_280 + 0x10))(plStack_280);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_280);
              }
            }
            *param_1 = 0;
            pfVar9 = pfVar8 + 0x96;
            uVar17 = *(long *)(pfVar8 + 0xb2) - 1;
            *(ulong *)(pfVar8 + 0xb2) = uVar17;
            if (uVar17 < 8) {
              uVar17 = *(ulong *)(pfVar9 + uVar17 * 2 + 6);
              if (*(ulong *)(pfVar8 + 0xb4) == uVar17) {
                return;
              }
            }
            else {
              uVar17 = *(ulong *)(*(long *)(pfVar8 + 0xae) + -8);
              *(ulong **)(pfVar8 + 0xae) = (ulong *)(*(long *)(pfVar8 + 0xae) + -8);
              if (*(ulong *)(pfVar8 + 0xb4) == uVar17) {
                return;
              }
            }
            lVar16 = *(long *)pfVar9;
            lVar27 = *(long *)(pfVar8 + 0x98);
            lVar21 = lVar27 - lVar16;
            uVar24 = lVar21 >> 4;
            if (uVar24 < uVar17) {
              uVar25 = uVar17 - uVar24;
              if ((ulong)(*(long *)(pfVar8 + 0x9a) - lVar27 >> 4) < uVar25) {
                if (uVar17 >> 0x3c == 0) {
                  uVar15 = *(long *)(pfVar8 + 0x9a) - lVar16;
                  uVar18 = (long)uVar15 >> 3;
                  if (uVar18 <= uVar17) {
                    uVar18 = uVar17;
                  }
                  if (0x7fffffffffffffef < uVar15) {
                    uVar18 = 0xfffffffffffffff;
                  }
                  if (uVar18 >> 0x3c == 0) {
                    lVar7 = uVar18 << 4;
                    __Znwm();
                    lVar27 = lVar7 + lVar21;
                    _bzero(lVar27,uVar25 * 0x10);
                    lVar22 = lVar27 + uVar24 * -0x10;
                    _memcpy(lVar22,lVar16,lVar21);
                    *(long *)pfVar9 = lVar22;
                    *(ulong *)(pfVar8 + 0x98) = lVar27 + uVar25 * 0x10;
                    *(ulong *)(pfVar8 + 0x9a) = lVar7 + uVar18 * 0x10;
                    lStack_88 = lVar16;
                    lStack_80 = lVar16;
                    lStack_78 = lVar16;
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
              _bzero(lVar27,uVar25 * 0x10);
              *(ulong *)(pfVar8 + 0x98) = lVar27 + uVar25 * 0x10;
            }
            else if (uVar17 < uVar24) {
              lVar16 = lVar16 + uVar17 * 0x10;
              while (lVar27 != lVar16) {
                lVar27 = lVar27 + -0x10;
                func_0x00010988c204(lVar27);
              }
              *(long *)(pfVar8 + 0x98) = lVar16;
            }
code_r0x00010988c138:
            *(ulong *)(pfVar8 + 0xb4) = uVar17;
            return;
          }
          puVar14 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar14 = 1;
          pppuStack_1b0 = (undefined8 ***)(puVar14 + 1);
          pppuStack_1a8 = (undefined8 ****)0x1c;
          *(undefined1 *)(puVar14 + 8) = 0;
          *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,&pppuStack_1b0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        }
      }
    }
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
LAB_10a92d2a8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a92d2ac);
  (*pcVar6)();
}



/* Entry: 10a92d420; end: 10a92d443;  */

long FUN_10a92d420(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 10) {
    return param_1;
  }
  lVar4 = 10;
  FUN_10a052ee0(10,0,param_1);
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



/* Entry: 10a92d444; end: 10a92d47f;  */

long FUN_10a92d444(long param_1)

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



/* Entry: 10a92d480; end: 10a92d64f;  */

void FUN_10a92d480(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
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
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a92d650(param_5);
  FUN_10a065cdc(&plStack_68,param_2,param_4);
  FUN_10a13a07c(&lStack_78,param_2,param_4 + 0x10);
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  FUN_10a91e4d4(*(undefined8 *)(lStack_78 + 8),param_2);
  FUN_10a91e59c(param_2,0,0,1);
  FUN_10a2421c8(0);
  FUN_10a244d68();
  FUN_10a2421c8(0);
  FUN_10a244cf4();
  FUN_10aba0b70();
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  *param_1 = 0;
  plVar1 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar7 = lVar9 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar9 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar1;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar1 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          plStack_70 = (long *)lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a92d650; end: 10a92d673;  */

long FUN_10a92d650(long param_1)

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



/* Entry: 10a92d674; end: 10a92d6af;  */

long FUN_10a92d674(long param_1)

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



/* Entry: 10a92d6b0; end: 10a92d8df;  */

void FUN_10a92d6b0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  float *in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a8e1a70(param_5);
  FUN_10a1f7d54(&plStack_80,param_2,param_4);
  plVar7 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_90,param_2,param_4 + 0x20);
  FUN_10a927e68(&lStack_70,*plStack_80,plStack_80[1],plVar7);
  plVar7 = plStack_68;
  if (((lStack_70 != 0) && (plStack_68 != (long *)0x0)) && (in_stack_ffffffffffffffa0 != 0)) {
    if ((ulong)plStack_90[1] < in_stack_ffffffffffffffa0) {
      FUN_10a00946c(&UNK_10f683bcc);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a92d8a8);
      (*pcVar4)();
    }
    pfVar15 = (float *)*plStack_90;
    _memcpy(pfVar15,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffa0 * 4);
    lVar9 = 0;
    do {
      plVar11 = (long *)0x0;
      pfVar13 = pfVar15;
      pfVar14 = in_stack_ffffffffffffffa8;
      uVar8 = in_stack_ffffffffffffffa0;
      pfVar12 = in_stack_ffffffffffffffa8;
      do {
        do {
          fVar21 = *pfVar13;
          if (*pfVar13 <= *pfVar14) {
            fVar21 = *pfVar14;
          }
          *pfVar13 = fVar21;
          uVar8 = uVar8 - 1;
          pfVar13 = pfVar13 + 1;
          pfVar14 = pfVar14 + 1;
        } while (uVar8 != 0);
        plVar11 = (long *)((long)plVar11 + 1);
        pfVar14 = pfVar12 + in_stack_ffffffffffffffa0;
        pfVar13 = pfVar15;
        uVar8 = in_stack_ffffffffffffffa0;
        pfVar12 = pfVar14;
      } while (plVar11 != plVar7);
      lVar9 = lVar9 + 1;
      in_stack_ffffffffffffffa8 =
           in_stack_ffffffffffffffa8 + (long)plVar7 * in_stack_ffffffffffffffa0;
    } while (lVar9 != lStack_70);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar8 = lVar9 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar9 + 2];
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
  plVar11 = (long *)*plVar7;
  plVar17 = (long *)plVar6[0x4c];
  lVar9 = (long)plVar17 - (long)plVar11;
  uVar19 = lVar9 >> 4;
  if (uVar19 < uVar8) {
    uVar20 = uVar8 - uVar19;
    lVar18 = plVar6[0x4d];
    if ((ulong)(lVar18 - (long)plVar17 >> 4) < uVar20) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar18 - (long)plVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar9;
          _bzero(lVar1,uVar20 * 0x10);
          lVar16 = lVar1 + uVar19 * -0x10;
          _memcpy(lVar16,plVar11,lVar9);
          *plVar7 = lVar16;
          plVar6[0x4c] = lVar1 + uVar20 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          plStack_88 = plVar11;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
          lStack_70 = lVar18;
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
    _bzero(plVar17,uVar20 * 0x10);
    plVar6[0x4c] = (long)(plVar17 + uVar20 * 2);
  }
  else if (uVar8 < uVar19) {
    while (plVar17 != plVar11 + uVar8 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar6[0x4c] = (long)(plVar11 + uVar8 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a92d8e0; end: 10a92d91b;  */

long FUN_10a92d8e0(long param_1)

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



/* Entry: 10a92d91c; end: 10a92db4b;  */

void FUN_10a92d91c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 uVar21;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  undefined4 *in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a8e1a70(param_5);
  FUN_10a1f7d54(&plStack_80,param_2,param_4);
  plVar7 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&plStack_90,param_2,param_4 + 0x20);
  FUN_10a927e68(&lStack_70,*plStack_80,plStack_80[1],plVar7);
  plVar7 = plStack_68;
  if (((lStack_70 != 0) && (plStack_68 != (long *)0x0)) && (in_stack_ffffffffffffffa0 != 0)) {
    if ((ulong)plStack_90[1] < in_stack_ffffffffffffffa0) {
      FUN_10a00946c(&UNK_10f683bcc);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a92db14);
      (*pcVar4)();
    }
    puVar15 = (undefined4 *)*plStack_90;
    _memcpy(puVar15,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffa0 * 4);
    lVar9 = 0;
    do {
      plVar11 = (long *)0x0;
      puVar13 = puVar15;
      puVar14 = in_stack_ffffffffffffffa8;
      uVar8 = in_stack_ffffffffffffffa0;
      puVar12 = in_stack_ffffffffffffffa8;
      do {
        do {
          uVar21 = NEON_fminnm(*puVar13,*puVar14);
          *puVar13 = uVar21;
          uVar8 = uVar8 - 1;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar8 != 0);
        plVar11 = (long *)((long)plVar11 + 1);
        puVar14 = puVar12 + in_stack_ffffffffffffffa0;
        puVar13 = puVar15;
        uVar8 = in_stack_ffffffffffffffa0;
        puVar12 = puVar14;
      } while (plVar11 != plVar7);
      lVar9 = lVar9 + 1;
      in_stack_ffffffffffffffa8 =
           in_stack_ffffffffffffffa8 + (long)plVar7 * in_stack_ffffffffffffffa0;
    } while (lVar9 != lStack_70);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar8 = lVar9 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar9 + 2];
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
  plVar11 = (long *)*plVar7;
  plVar17 = (long *)plVar6[0x4c];
  lVar9 = (long)plVar17 - (long)plVar11;
  uVar19 = lVar9 >> 4;
  if (uVar19 < uVar8) {
    uVar20 = uVar8 - uVar19;
    lVar18 = plVar6[0x4d];
    if ((ulong)(lVar18 - (long)plVar17 >> 4) < uVar20) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar18 - (long)plVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar9;
          _bzero(lVar1,uVar20 * 0x10);
          lVar16 = lVar1 + uVar19 * -0x10;
          _memcpy(lVar16,plVar11,lVar9);
          *plVar7 = lVar16;
          plVar6[0x4c] = lVar1 + uVar20 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          plStack_88 = plVar11;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
          lStack_70 = lVar18;
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
    _bzero(plVar17,uVar20 * 0x10);
    plVar6[0x4c] = (long)(plVar17 + uVar20 * 2);
  }
  else if (uVar8 < uVar19) {
    while (plVar17 != plVar11 + uVar8 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar6[0x4c] = (long)(plVar11 + uVar8 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a92db4c; end: 10a92db87;  */

long FUN_10a92db4c(long param_1)

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



/* Entry: 10a92db88; end: 10a92dd93;  */

void FUN_10a92db88(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 uVar20;
  double dVar21;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a92dd94(param_5);
  FUN_10a1f7d54(&plStack_78,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    dVar21 = *(double *)(param_4 + 0x18);
    FUN_10a1f7d54(&plStack_88,param_2,param_4 + 0x20);
    fVar6 = (float)dVar21;
    if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
      fVar6 = 0.0;
    }
    uVar12 = plStack_78[1];
    if (uVar12 <= (ulong)plStack_88[1]) {
      if (uVar12 != 0) {
        puVar13 = (undefined4 *)*plStack_78;
        puVar16 = (undefined4 *)*plStack_88;
        do {
          uVar20 = *puVar13;
          _powf(uVar20,fVar6);
          *puVar16 = uVar20;
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar12 != 0);
      }
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
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
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
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
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      *param_1 = 0;
      plVar1 = plVar9 + 0x4b;
      lVar11 = plVar9[0x59];
      uVar12 = lVar11 - 1;
      plVar9[0x59] = uVar12;
      if (uVar12 < 8) {
        uVar12 = plVar1[lVar11 + 2];
        if (plVar9[0x5a] == uVar12) {
          return;
        }
      }
      else {
        uVar12 = *(ulong *)(plVar9[0x57] + -8);
        plVar9[0x57] = plVar9[0x57] + -8;
        if (plVar9[0x5a] == uVar12) {
          return;
        }
      }
      plVar3 = (long *)*plVar1;
      plVar15 = (long *)plVar9[0x4c];
      lVar11 = (long)plVar15 - (long)plVar3;
      uVar18 = lVar11 >> 4;
      if (uVar18 < uVar12) {
        uVar19 = uVar12 - uVar18;
        lVar17 = plVar9[0x4d];
        if ((ulong)(lVar17 - (long)plVar15 >> 4) < uVar19) {
          if (uVar12 >> 0x3c == 0) {
            uVar10 = lVar17 - (long)plVar3 >> 3;
            if (uVar10 <= uVar12) {
              uVar10 = uVar12;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - (long)plVar3)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar10 >> 0x3c == 0) {
              lVar8 = uVar10 << 4;
              __Znwm();
              lVar2 = lVar8 + lVar11;
              _bzero(lVar2,uVar19 * 0x10);
              lVar14 = lVar2 + uVar18 * -0x10;
              _memcpy(lVar14,plVar3,lVar11);
              *plVar1 = lVar14;
              plVar9[0x4c] = lVar2 + uVar19 * 0x10;
              plVar9[0x4d] = lVar8 + uVar10 * 0x10;
              plStack_88 = plVar3;
              plStack_80 = plVar3;
              plStack_78 = plVar3;
              plStack_70 = (long *)lVar17;
              func_0x00010988c1b8(&plStack_88);
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
        _bzero(plVar15,uVar19 * 0x10);
        plVar9[0x4c] = (long)(plVar15 + uVar19 * 2);
      }
      else if (uVar12 < uVar18) {
        while (plVar15 != plVar3 + uVar12 * 2) {
          plVar15 = plVar15 + -2;
          func_0x00010988c204(plVar15);
        }
        plVar9[0x4c] = (long)(plVar3 + uVar12 * 2);
      }
code_r0x00010988c138:
      plVar9[0x5a] = uVar12;
      return;
    }
    FUN_10a0ee900(&plStack_68,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&plStack_68);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a92dd4c);
  (*pcVar7)();
}



/* Entry: 10a92dd94; end: 10a92ddb7;  */

long FUN_10a92dd94(long param_1)

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



/* Entry: 10a92ddb8; end: 10a92ddf3;  */

long FUN_10a92ddb8(long param_1)

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



/* Entry: 10a92ddf4; end: 10a92e03f;  */

void FUN_10a92ddf4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
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
  double dVar23;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a92e040(param_5);
  FUN_10a1f7d54(&plStack_78,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    fVar6 = (float)*(double *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
      fVar6 = 0.0;
    }
    if (*(int *)(param_4 + 0x20) == 3) {
      dVar23 = *(double *)(param_4 + 0x28);
      FUN_10a1f7d54(&plStack_88,param_2,param_4 + 0x30);
      fVar20 = (float)dVar23;
      if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
        fVar20 = 0.0;
      }
      uVar10 = plStack_78[1];
      if (uVar10 <= (ulong)plStack_88[1]) {
        if (uVar10 != 0) {
          pfVar12 = (float *)*plStack_78;
          pfVar14 = (float *)*plStack_88;
          do {
            fVar21 = *pfVar12;
            fVar22 = fVar6;
            if ((fVar6 <= fVar21) && (fVar22 = fVar20, fVar21 <= fVar20)) {
              fVar22 = fVar21;
            }
            *pfVar14 = fVar22;
            uVar10 = uVar10 - 1;
            pfVar12 = pfVar12 + 1;
            pfVar14 = pfVar14 + 1;
          } while (uVar10 != 0);
        }
        if (plStack_80 != (long *)0x0) {
          plVar1 = plStack_80 + 1;
          do {
            lVar13 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
          }
        }
        if (plStack_70 != (long *)0x0) {
          plVar1 = plStack_70 + 1;
          do {
            lVar13 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
          }
        }
        *param_1 = 0;
        plVar1 = plVar9 + 0x4b;
        lVar13 = plVar9[0x59];
        uVar10 = lVar13 - 1;
        plVar9[0x59] = uVar10;
        if (uVar10 < 8) {
          uVar10 = plVar1[lVar13 + 2];
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
        plVar3 = (long *)*plVar1;
        plVar16 = (long *)plVar9[0x4c];
        lVar13 = (long)plVar16 - (long)plVar3;
        uVar18 = lVar13 >> 4;
        if (uVar18 < uVar10) {
          uVar19 = uVar10 - uVar18;
          lVar17 = plVar9[0x4d];
          if ((ulong)(lVar17 - (long)plVar16 >> 4) < uVar19) {
            if (uVar10 >> 0x3c == 0) {
              uVar11 = lVar17 - (long)plVar3 >> 3;
              if (uVar11 <= uVar10) {
                uVar11 = uVar10;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - (long)plVar3)) {
                uVar11 = 0xfffffffffffffff;
              }
              plStack_68 = plVar1;
              if (uVar11 >> 0x3c == 0) {
                lVar8 = uVar11 << 4;
                __Znwm();
                lVar2 = lVar8 + lVar13;
                _bzero(lVar2,uVar19 * 0x10);
                lVar15 = lVar2 + uVar18 * -0x10;
                _memcpy(lVar15,plVar3,lVar13);
                *plVar1 = lVar15;
                plVar9[0x4c] = lVar2 + uVar19 * 0x10;
                plVar9[0x4d] = lVar8 + uVar11 * 0x10;
                plStack_88 = plVar3;
                plStack_80 = plVar3;
                plStack_78 = plVar3;
                plStack_70 = (long *)lVar17;
                func_0x00010988c1b8(&plStack_88);
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
          _bzero(plVar16,uVar19 * 0x10);
          plVar9[0x4c] = (long)(plVar16 + uVar19 * 2);
        }
        else if (uVar10 < uVar18) {
          while (plVar16 != plVar3 + uVar10 * 2) {
            plVar16 = plVar16 + -2;
            func_0x00010988c204(plVar16);
          }
          plVar9[0x4c] = (long)(plVar3 + uVar10 * 2);
        }
code_r0x00010988c138:
        plVar9[0x5a] = uVar10;
        return;
      }
      FUN_10a0ee900(&plStack_68,&UNK_10f683b6e,0x5d);
      FUN_10a0029c0(&plStack_68);
      goto LAB_10a92dff4;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10a92dff4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a92dff8);
  (*pcVar7)();
}



/* Entry: 10a92e040; end: 10a92e063;  */

long FUN_10a92e040(long param_1)

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



/* Entry: 10a92e064; end: 10a92e09f;  */

long FUN_10a92e064(long param_1)

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



/* Entry: 10a92e0a0; end: 10a92e2a7;  */

void FUN_10a92e0a0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a92dd94(param_5);
  FUN_10a1f7d54(&plStack_78,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    dVar20 = *(double *)(param_4 + 0x18);
    FUN_10a1f7d54(&plStack_88,param_2,param_4 + 0x20);
    fVar19 = (float)dVar20;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
      fVar19 = 0.0;
    }
    uVar9 = plStack_78[1];
    if (uVar9 <= (ulong)plStack_88[1]) {
      if (uVar9 != 0) {
        pfVar11 = (float *)*plStack_78;
        pfVar13 = (float *)*plStack_88;
        do {
          *pfVar13 = fVar19 * *pfVar11;
          uVar9 = uVar9 - 1;
          pfVar11 = pfVar11 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar9 != 0);
      }
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
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
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
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
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      *param_1 = 0;
      plVar1 = plVar8 + 0x4b;
      lVar12 = plVar8[0x59];
      uVar9 = lVar12 - 1;
      plVar8[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar1[lVar12 + 2];
        if (plVar8[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar9) {
          return;
        }
      }
      plVar3 = (long *)*plVar1;
      plVar15 = (long *)plVar8[0x4c];
      lVar12 = (long)plVar15 - (long)plVar3;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar9) {
        uVar18 = uVar9 - uVar17;
        lVar16 = plVar8[0x4d];
        if ((ulong)(lVar16 - (long)plVar15 >> 4) < uVar18) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar16 - (long)plVar3 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar3)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar10 >> 0x3c == 0) {
              lVar7 = uVar10 << 4;
              __Znwm();
              lVar2 = lVar7 + lVar12;
              _bzero(lVar2,uVar18 * 0x10);
              lVar14 = lVar2 + uVar17 * -0x10;
              _memcpy(lVar14,plVar3,lVar12);
              *plVar1 = lVar14;
              plVar8[0x4c] = lVar2 + uVar18 * 0x10;
              plVar8[0x4d] = lVar7 + uVar10 * 0x10;
              plStack_88 = plVar3;
              plStack_80 = plVar3;
              plStack_78 = plVar3;
              plStack_70 = (long *)lVar16;
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
        _bzero(plVar15,uVar18 * 0x10);
        plVar8[0x4c] = (long)(plVar15 + uVar18 * 2);
      }
      else if (uVar9 < uVar17) {
        while (plVar15 != plVar3 + uVar9 * 2) {
          plVar15 = plVar15 + -2;
          func_0x00010988c204(plVar15);
        }
        plVar8[0x4c] = (long)(plVar3 + uVar9 * 2);
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar9;
      return;
    }
    FUN_10a0ee900(&plStack_68,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&plStack_68);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a92e260);
  (*pcVar6)();
}



/* Entry: 10a92e2a8; end: 10a92e2e3;  */

long FUN_10a92e2a8(long param_1)

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



/* Entry: 10a92e2e4; end: 10a92e4eb;  */

void FUN_10a92e2e4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a92dd94(param_5);
  FUN_10a1f7d54(&plStack_78,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    dVar20 = *(double *)(param_4 + 0x18);
    FUN_10a1f7d54(&plStack_88,param_2,param_4 + 0x20);
    fVar19 = (float)dVar20;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
      fVar19 = 0.0;
    }
    uVar9 = plStack_78[1];
    if (uVar9 <= (ulong)plStack_88[1]) {
      if (uVar9 != 0) {
        pfVar11 = (float *)*plStack_78;
        pfVar13 = (float *)*plStack_88;
        do {
          *pfVar13 = fVar19 + *pfVar11;
          uVar9 = uVar9 - 1;
          pfVar11 = pfVar11 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar9 != 0);
      }
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
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
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
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
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      *param_1 = 0;
      plVar1 = plVar8 + 0x4b;
      lVar12 = plVar8[0x59];
      uVar9 = lVar12 - 1;
      plVar8[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar1[lVar12 + 2];
        if (plVar8[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar9) {
          return;
        }
      }
      plVar3 = (long *)*plVar1;
      plVar15 = (long *)plVar8[0x4c];
      lVar12 = (long)plVar15 - (long)plVar3;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar9) {
        uVar18 = uVar9 - uVar17;
        lVar16 = plVar8[0x4d];
        if ((ulong)(lVar16 - (long)plVar15 >> 4) < uVar18) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar16 - (long)plVar3 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar3)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar10 >> 0x3c == 0) {
              lVar7 = uVar10 << 4;
              __Znwm();
              lVar2 = lVar7 + lVar12;
              _bzero(lVar2,uVar18 * 0x10);
              lVar14 = lVar2 + uVar17 * -0x10;
              _memcpy(lVar14,plVar3,lVar12);
              *plVar1 = lVar14;
              plVar8[0x4c] = lVar2 + uVar18 * 0x10;
              plVar8[0x4d] = lVar7 + uVar10 * 0x10;
              plStack_88 = plVar3;
              plStack_80 = plVar3;
              plStack_78 = plVar3;
              plStack_70 = (long *)lVar16;
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
        _bzero(plVar15,uVar18 * 0x10);
        plVar8[0x4c] = (long)(plVar15 + uVar18 * 2);
      }
      else if (uVar9 < uVar17) {
        while (plVar15 != plVar3 + uVar9 * 2) {
          plVar15 = plVar15 + -2;
          func_0x00010988c204(plVar15);
        }
        plVar8[0x4c] = (long)(plVar3 + uVar9 * 2);
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar9;
      return;
    }
    FUN_10a0ee900(&plStack_68,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&plStack_68);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a92e4a4);
  (*pcVar6)();
}



/* Entry: 10a92e4ec; end: 10a92e527;  */

long FUN_10a92e4ec(long param_1)

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



/* Entry: 10a92e528; end: 10a92e85f;  */

void FUN_10a92e528(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  float *pfStack_98;
  float *pfStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar6 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar6 + 0xb2) < 8) {
    *(long *)(pfVar6 + *(ulong *)(pfVar6 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar6 + 0xb4);
    *(long *)(pfVar6 + 0xb2) = *(long *)(pfVar6 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar6 + 0x96);
  }
  FUN_10a92a0f0(param_5);
  FUN_10a1f7d54(&plStack_d0,param_2,param_4);
  pfVar7 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar8 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x20);
  FUN_10a1f7d54(&plStack_e0,param_2,param_4 + 0x30);
  lVar16 = *plStack_d0;
  uVar13 = plStack_d0[1];
  FUN_10a8bcad0(&lStack_c0,pfVar7);
  uVar26 = uStack_b0;
  uVar25 = uStack_b8;
  lVar22 = lStack_c0;
  pfVar7 = (float *)*plStack_e0;
  uVar2 = plStack_e0[1];
  uStack_b0 = uStack_b8;
  lStack_a8 = lStack_c0;
  lStack_a0 = uVar26;
  lStack_c0 = lVar16;
  uStack_b8 = uVar13;
  pfStack_98 = pfVar8;
  pfStack_90 = pfVar7;
  uStack_88 = uVar2;
  FUN_10a91ea54(uVar13,&uStack_b0);
  uVar21 = (ulong)*pfVar8;
  if (((1 < uVar21) || (uVar20 = (ulong)pfVar8[1], 1 < uVar20)) ||
     (uVar24 = (ulong)pfVar8[2], 1 < uVar24)) {
    FUN_10a00946c(&UNK_10f683990);
LAB_10a92e820:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a92e824);
    (*pcVar5)();
  }
  uVar18 = uVar25;
  if (uVar20 == 0) {
    uVar18 = 1;
  }
  lVar23 = lVar22;
  if (uVar21 == 0) {
    lVar23 = 1;
  }
  lStack_70 = uVar26;
  if (uVar24 == 0) {
    lStack_70 = 1;
  }
  uStack_80 = uVar18;
  uStack_78 = lVar23;
  FUN_10a91ead0(uVar2,&uStack_80);
  if (0 < (long)uVar2) {
    _bzero(pfVar7,uVar2 << 2);
  }
  if (uVar26 != 0) {
    uVar17 = 0;
    uVar14 = 0;
    lVar15 = uVar18 * lVar23 * uVar24;
    uVar24 = -uVar21;
    do {
      if (uVar25 != 0) {
        uVar18 = 0;
        pfVar8 = pfVar7;
        uVar19 = uVar24;
        do {
          if (lVar22 != 0) {
            lVar9 = 0;
            uVar10 = uVar19;
            lVar11 = lVar22;
            pfVar12 = pfVar8;
            if (uVar17 <= uVar13) {
              lVar9 = uVar13 - uVar17;
            }
            do {
              if ((lVar9 == 0) || (uVar10 = uVar10 + uVar21, uVar2 <= uVar10)) goto LAB_10a92e820;
              lVar9 = lVar9 + -1;
              *pfVar12 = *(float *)(lVar16 + uVar17 * 4) + *pfVar12;
              pfVar12 = pfVar12 + uVar21;
              uVar17 = uVar17 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          uVar18 = uVar18 + 1;
          pfVar8 = pfVar8 + lVar23 * uVar20;
          uVar19 = uVar19 + lVar23 * uVar20;
        } while (uVar18 != uVar25);
      }
      uVar14 = uVar14 + 1;
      pfVar7 = pfVar7 + lVar15;
      uVar24 = uVar24 + lVar15;
    } while (uVar14 != uVar26);
  }
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar16 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar16 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  *param_1 = 0;
  pfVar7 = pfVar6 + 0x96;
  uVar13 = *(long *)(pfVar6 + 0xb2) - 1;
  *(ulong *)(pfVar6 + 0xb2) = uVar13;
  if (uVar13 < 8) {
    uVar13 = *(ulong *)(pfVar7 + uVar13 * 2 + 6);
    if (*(ulong *)(pfVar6 + 0xb4) == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(*(long *)(pfVar6 + 0xae) + -8);
    *(ulong **)(pfVar6 + 0xae) = (ulong *)(*(long *)(pfVar6 + 0xae) + -8);
    if (*(ulong *)(pfVar6 + 0xb4) == uVar13) {
      return;
    }
  }
  uVar2 = *(ulong *)pfVar7;
  lVar16 = *(long *)(pfVar6 + 0x98);
  lVar22 = lVar16 - uVar2;
  uVar25 = lVar22 >> 4;
  if (uVar25 < uVar13) {
    uVar26 = uVar13 - uVar25;
    lVar23 = *(long *)(pfVar6 + 0x9a);
    if ((ulong)(lVar23 - lVar16 >> 4) < uVar26) {
      if (uVar13 >> 0x3c == 0) {
        uVar21 = (long)(lVar23 - uVar2) >> 3;
        if (uVar21 <= uVar13) {
          uVar21 = uVar13;
        }
        if (0x7fffffffffffffef < lVar23 - uVar2) {
          uVar21 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar7;
        if (uVar21 >> 0x3c == 0) {
          lVar15 = uVar21 << 4;
          __Znwm();
          lVar16 = lVar15 + lVar22;
          _bzero(lVar16,uVar26 * 0x10);
          lVar9 = lVar16 + uVar25 * -0x10;
          _memcpy(lVar9,uVar2,lVar22);
          *(long *)pfVar7 = lVar9;
          *(ulong *)(pfVar6 + 0x98) = lVar16 + uVar26 * 0x10;
          *(ulong *)(pfVar6 + 0x9a) = lVar15 + uVar21 * 0x10;
          uStack_88 = uVar2;
          uStack_80 = uVar2;
          uStack_78 = uVar2;
          lStack_70 = lVar23;
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
    _bzero(lVar16,uVar26 * 0x10);
    *(ulong *)(pfVar6 + 0x98) = lVar16 + uVar26 * 0x10;
  }
  else if (uVar13 < uVar25) {
    lVar22 = uVar2 + uVar13 * 0x10;
    while (lVar16 != lVar22) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    *(long *)(pfVar6 + 0x98) = lVar22;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar6 + 0xb4) = uVar13;
  return;
}



/* Entry: 10a92e860; end: 10a92e89b;  */

long FUN_10a92e860(long param_1)

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



/* Entry: 10a92e89c; end: 10a92ea5b;  */

void FUN_10a92e89c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 *in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a92dd94(param_5);
  FUN_10a1f7d54(&stack0xffffffffffffffa0,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a92ea24);
    (*pcVar5)();
  }
  dVar18 = *(double *)(param_4 + 0x18);
  FUN_10a1f7d54(&puStack_70,param_2,param_4 + 0x20);
  fVar17 = (float)dVar18;
  if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
    fVar17 = 0.0;
  }
  FUN_10a91e918(0x3f800000,fVar17,0x2b8cbccc,*in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa0[1]
                ,0,*puStack_70,puStack_70[1]);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar2 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar2 = plVar7 + 0x4b;
  lVar10 = plVar7[0x59];
  uVar8 = lVar10 - 1;
  plVar7[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar2[lVar10 + 2];
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar2;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    puVar14 = (undefined8 *)plVar7[0x4d];
    if ((ulong)((long)puVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = (long)puVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar9 >> 0x3c == 0) {
          lVar6 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar6 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar2 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar6 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          puStack_70 = puVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar8;
  return;
}



/* Entry: 10a92ea5c; end: 10a92ea97;  */

long FUN_10a92ea5c(long param_1)

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



/* Entry: 10a92ea98; end: 10a92ecbb;  */

void FUN_10a92ea98(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  double dVar21;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  FUN_10a92ecbc(param_5);
  FUN_10a1f7d54(&puStack_70,param_2,param_4);
  plVar11 = param_2;
  func_0x00010989847c(param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 3) {
    fVar6 = (float)*(double *)(param_4 + 0x28);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x28))) {
      fVar6 = 0.0;
    }
    if (*(int *)(param_4 + 0x30) == 3) {
      fVar7 = (float)*(double *)(param_4 + 0x38);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x38))) {
        fVar7 = 0.0;
      }
      if (*(int *)(param_4 + 0x40) == 3) {
        dVar21 = *(double *)(param_4 + 0x48);
        FUN_10a1f7d54(&puStack_80,param_2,param_4 + 0x50);
        fVar20 = (float)dVar21;
        if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
          fVar20 = 0.0;
        }
        FUN_10a91e918(fVar6,fVar7,fVar20,*puStack_70,puStack_70[1],plVar11,*puStack_80,puStack_80[1]
                     );
        if (plStack_78 != (long *)0x0) {
          plVar11 = plStack_78 + 1;
          do {
            lVar14 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
          }
        }
        plVar11 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar14 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        *param_1 = 0;
        plVar11 = plVar10 + 0x4b;
        lVar14 = plVar10[0x59];
        uVar12 = lVar14 - 1;
        plVar10[0x59] = uVar12;
        if (uVar12 < 8) {
          uVar12 = plVar11[lVar14 + 2];
          if (plVar10[0x5a] == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(plVar10[0x57] + -8);
          plVar10[0x57] = plVar10[0x57] + -8;
          if (plVar10[0x5a] == uVar12) {
            return;
          }
        }
        puVar3 = (undefined8 *)*plVar11;
        puVar16 = (undefined8 *)plVar10[0x4c];
        lVar14 = (long)puVar16 - (long)puVar3;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          puVar17 = (undefined8 *)plVar10[0x4d];
          if ((ulong)((long)puVar17 - (long)puVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar13 = (long)puVar17 - (long)puVar3 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)((long)puVar17 - (long)puVar3)) {
                uVar13 = 0xfffffffffffffff;
              }
              plStack_68 = plVar11;
              if (uVar13 >> 0x3c == 0) {
                lVar9 = uVar13 << 4;
                __Znwm();
                lVar2 = lVar9 + lVar14;
                _bzero(lVar2,uVar19 * 0x10);
                lVar15 = lVar2 + uVar18 * -0x10;
                _memcpy(lVar15,puVar3,lVar14);
                *plVar11 = lVar15;
                plVar10[0x4c] = lVar2 + uVar19 * 0x10;
                plVar10[0x4d] = lVar9 + uVar13 * 0x10;
                puStack_88 = puVar3;
                puStack_80 = puVar3;
                plStack_78 = puVar3;
                puStack_70 = puVar17;
                func_0x00010988c1b8(&puStack_88);
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
          _bzero(puVar16,uVar19 * 0x10);
          plVar10[0x4c] = (long)(puVar16 + uVar19 * 2);
        }
        else if (uVar12 < uVar18) {
          while (puVar16 != puVar3 + uVar12 * 2) {
            puVar16 = puVar16 + -2;
            func_0x00010988c204(puVar16);
          }
          plVar10[0x4c] = (long)(puVar3 + uVar12 * 2);
        }
code_r0x00010988c138:
        plVar10[0x5a] = uVar12;
        return;
      }
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a92ec84);
  (*pcVar8)();
}



/* Entry: 10a92ecbc; end: 10a92ecdf;  */

long FUN_10a92ecbc(long param_1)

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



/* Entry: 10a92ece0; end: 10a92ed1b;  */

long FUN_10a92ece0(long param_1)

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



/* Entry: 10a92ed1c; end: 10a92eefb;  */

void FUN_10a92ed1c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  long *plVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a6ce8c0(param_5);
  FUN_10a1f7d54(&plStack_78,param_2,param_4);
  FUN_10a1f7d54(&plStack_88,param_2,param_4 + 0x10);
  uVar11 = plStack_78[1];
  if ((ulong)plStack_88[1] < uVar11) {
    FUN_10a0ee900(&plStack_68,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(&plStack_68);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a92eeb8);
    (*pcVar6)();
  }
  if (uVar11 != 0) {
    pfVar12 = (float *)*plStack_78;
    pfVar15 = (float *)*plStack_88;
    do {
      fVar19 = ABS(*pfVar12);
      if (ABS(*pfVar12) <= 1e-12) {
        fVar19 = 1e-12;
      }
      _log10f();
      *pfVar15 = fVar19 * 20.0;
      uVar11 = uVar11 - 1;
      pfVar12 = pfVar12 + 1;
      pfVar15 = pfVar15 + 1;
    } while (uVar11 != 0);
  }
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  *param_1 = 0;
  plVar1 = plVar8 + 0x4b;
  lVar10 = plVar8[0x59];
  uVar11 = lVar10 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar1[lVar10 + 2];
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
  plVar3 = (long *)*plVar1;
  plVar14 = (long *)plVar8[0x4c];
  lVar10 = (long)plVar14 - (long)plVar3;
  uVar17 = lVar10 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - (long)plVar14 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar9 = lVar16 - (long)plVar3 >> 3;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar3)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar7 = uVar9 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar10;
          _bzero(lVar2,uVar18 * 0x10);
          lVar13 = lVar2 + uVar17 * -0x10;
          _memcpy(lVar13,plVar3,lVar10);
          *plVar1 = lVar13;
          plVar8[0x4c] = lVar2 + uVar18 * 0x10;
          plVar8[0x4d] = lVar7 + uVar9 * 0x10;
          plStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          plStack_70 = (long *)lVar16;
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
    _bzero(plVar14,uVar18 * 0x10);
    plVar8[0x4c] = (long)(plVar14 + uVar18 * 2);
  }
  else if (uVar11 < uVar17) {
    while (plVar14 != plVar3 + uVar11 * 2) {
      plVar14 = plVar14 + -2;
      func_0x00010988c204(plVar14);
    }
    plVar8[0x4c] = (long)(plVar3 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar11;
  return;
}



/* Entry: 10a92eefc; end: 10a92ef37;  */

long FUN_10a92eefc(long param_1)

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



/* Entry: 10a92ef38; end: 10a92f347;  */

void FUN_10a92ef38(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a92f348(param_5);
  FUN_10a1f7d54(&puStack_a0,param_2,param_4);
  plVar10 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_b0,param_2,param_4 + 0x20);
  plVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_c0,param_2,param_4 + 0x40);
  FUN_10a927e68(&uStack_90,*puStack_a0,puStack_a0[1],plVar10);
  FUN_10a927e68(&uStack_70,*puStack_b0,puStack_b0[1],plVar11);
  lVar22 = *plStack_c0;
  uVar20 = uStack_90;
  if (uStack_90 <= uStack_70) {
    uVar20 = uStack_70;
  }
  plVar10 = plStack_88;
  if (plStack_88 <= plStack_68) {
    plVar10 = plStack_68;
  }
  plVar11 = plStack_80;
  if (plStack_80 <= in_stack_ffffffffffffffa0) {
    plVar11 = (long *)in_stack_ffffffffffffffa0;
  }
  if (((uVar20 != 0) && (plVar10 != (long *)0x0)) &&
     ((auVar4._8_8_ = 0, auVar4._0_8_ = uVar20, auVar6._8_8_ = 0, auVar6._0_8_ = plVar10,
      SUB168(auVar4 * auVar6,8) != 0 ||
      (((plVar11 != (long *)0x0 && (uVar20 * (long)plVar10 != 0)) &&
       (auVar5._8_8_ = 0, auVar5._0_8_ = uVar20 * (long)plVar10, auVar7._8_8_ = 0,
       auVar7._0_8_ = plVar11, SUB168(auVar5 * auVar7,8) != 0)))))) {
    puVar14 = &UNK_10f6818f4;
LAB_10a92f2dc:
    FUN_10a00946c(puVar14);
LAB_10a92f2e0:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a92f2e4);
    (*pcVar8)();
  }
  lVar23 = (long)plStack_80 * (long)plStack_88;
  if ((lVar23 * uStack_90 != 0) &&
     (lVar12 = in_stack_ffffffffffffffa0 * (long)plStack_68, lVar12 * uStack_70 != 0)) {
    if ((((uStack_70 != 1) && ((uStack_90 != 1 && (uStack_90 != uStack_70)))) ||
        ((plStack_68 != (long *)0x1 && ((plStack_88 != (long *)0x1 && (plStack_88 != plStack_68)))))
        ) || ((in_stack_ffffffffffffffa0 != 1 &&
              ((plStack_80 != (long *)0x1 && (plStack_80 != (long *)in_stack_ffffffffffffffa0))))))
    {
      FUN_10a0ee900(&uStack_70,&UNK_10f683bff,0x4a);
      FUN_10a0029c0(&uStack_70);
      goto LAB_10a92f2e0;
    }
    if ((ulong)plStack_c0[1] < (long)plVar10 * uVar20 * (long)plVar11) {
      puVar14 = &UNK_10f683bcc;
      goto LAB_10a92f2dc;
    }
    if (uStack_90 != 1) {
      lVar23 = 0;
    }
    plVar25 = plStack_80;
    if (plStack_88 != (long *)0x1) {
      plVar25 = (long *)0x0;
    }
    if (uStack_70 != 1) {
      lVar12 = 0;
    }
    uVar27 = in_stack_ffffffffffffffa0;
    if (plStack_68 != (long *)0x1) {
      uVar27 = 0;
    }
    if (uVar20 != 0) {
      uVar13 = 0;
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar18 = 0;
        if (uVar13 != 0) {
          lVar18 = lVar23;
        }
        lVar1 = 0;
        if (uVar13 != 0) {
          lVar1 = lVar12;
        }
        lVar16 = lVar16 - lVar18;
        lVar15 = lVar15 - lVar1;
        if (plVar10 != (long *)0x0) {
          plVar17 = (long *)0x0;
          lVar18 = lVar22;
          do {
            uVar19 = 0;
            if (plVar17 != (long *)0x0) {
              uVar19 = (ulong)plVar25;
            }
            uVar21 = 0;
            if (plVar17 != (long *)0x0) {
              uVar21 = uVar27;
            }
            lVar16 = lVar16 - uVar19;
            lVar15 = lVar15 - uVar21;
            if (plVar11 != (long *)0x0) {
              uVar19 = 0;
              do {
                uVar26 = 0;
                if (uVar19 != 0) {
                  uVar26 = (uint)(plStack_80 == (long *)0x1);
                }
                uVar24 = 0;
                if (uVar19 != 0) {
                  uVar24 = (uint)(in_stack_ffffffffffffffa0 == 1);
                }
                *(float *)(lVar18 + uVar19 * 4) =
                     *(float *)((long)plStack_78 + (lVar16 - (ulong)uVar26) * 4) +
                     *(float *)(in_stack_ffffffffffffffa8 + (lVar15 - (ulong)uVar24) * 4);
                uVar19 = uVar19 + 1;
                lVar16 = (lVar16 - (ulong)uVar26) + 1;
                lVar15 = (lVar15 - (ulong)uVar24) + 1;
              } while (plVar11 != (long *)uVar19);
            }
            plVar17 = (long *)((long)plVar17 + 1);
            lVar18 = lVar18 + (long)plVar11 * 4;
          } while (plVar17 != plVar10);
        }
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + (long)plVar10 * (long)plVar11 * 4;
      } while (uVar13 != uVar20);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar10 = plStack_a8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar22 = plVar9[0x59];
  uVar20 = lVar22 - 1;
  plVar9[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar10[lVar22 + 2];
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  plVar11 = (long *)*plVar10;
  plVar25 = (long *)plVar9[0x4c];
  lVar22 = (long)plVar25 - (long)plVar11;
  uVar27 = lVar22 >> 4;
  if (uVar27 < uVar20) {
    uVar19 = uVar20 - uVar27;
    uVar13 = plVar9[0x4d];
    if ((ulong)((long)(uVar13 - (long)plVar25) >> 4) < uVar19) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = (long)(uVar13 - (long)plVar11) >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < uVar13 - (long)plVar11) {
          uVar21 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar21 >> 0x3c == 0) {
          lVar12 = uVar21 << 4;
          __Znwm();
          lVar23 = lVar12 + lVar22;
          _bzero(lVar23,uVar19 * 0x10);
          lVar16 = lVar23 + uVar27 * -0x10;
          _memcpy(lVar16,plVar11,lVar22);
          *plVar10 = lVar16;
          plVar9[0x4c] = lVar23 + uVar19 * 0x10;
          plVar9[0x4d] = lVar12 + uVar21 * 0x10;
          plStack_88 = plVar11;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
          uStack_70 = uVar13;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar25,uVar19 * 0x10);
    plVar9[0x4c] = (long)(plVar25 + uVar19 * 2);
  }
  else if (uVar20 < uVar27) {
    while (plVar25 != plVar11 + uVar20 * 2) {
      plVar25 = plVar25 + -2;
      func_0x00010988c204(plVar25);
    }
    plVar9[0x4c] = (long)(plVar11 + uVar20 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar20;
  return;
}



/* Entry: 10a92f348; end: 10a92f36b;  */

long FUN_10a92f348(long param_1)

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



/* Entry: 10a92f36c; end: 10a92f3a7;  */

long FUN_10a92f36c(long param_1)

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



/* Entry: 10a92f3a8; end: 10a92f7b7;  */

void FUN_10a92f3a8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a92f348(param_5);
  FUN_10a1f7d54(&puStack_a0,param_2,param_4);
  plVar10 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_b0,param_2,param_4 + 0x20);
  plVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_c0,param_2,param_4 + 0x40);
  FUN_10a927e68(&uStack_90,*puStack_a0,puStack_a0[1],plVar10);
  FUN_10a927e68(&uStack_70,*puStack_b0,puStack_b0[1],plVar11);
  lVar22 = *plStack_c0;
  uVar20 = uStack_90;
  if (uStack_90 <= uStack_70) {
    uVar20 = uStack_70;
  }
  plVar10 = plStack_88;
  if (plStack_88 <= plStack_68) {
    plVar10 = plStack_68;
  }
  plVar11 = plStack_80;
  if (plStack_80 <= in_stack_ffffffffffffffa0) {
    plVar11 = (long *)in_stack_ffffffffffffffa0;
  }
  if (((uVar20 != 0) && (plVar10 != (long *)0x0)) &&
     ((auVar4._8_8_ = 0, auVar4._0_8_ = uVar20, auVar6._8_8_ = 0, auVar6._0_8_ = plVar10,
      SUB168(auVar4 * auVar6,8) != 0 ||
      (((plVar11 != (long *)0x0 && (uVar20 * (long)plVar10 != 0)) &&
       (auVar5._8_8_ = 0, auVar5._0_8_ = uVar20 * (long)plVar10, auVar7._8_8_ = 0,
       auVar7._0_8_ = plVar11, SUB168(auVar5 * auVar7,8) != 0)))))) {
    puVar14 = &UNK_10f6818f4;
LAB_10a92f74c:
    FUN_10a00946c(puVar14);
LAB_10a92f750:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a92f754);
    (*pcVar8)();
  }
  lVar23 = (long)plStack_80 * (long)plStack_88;
  if ((lVar23 * uStack_90 != 0) &&
     (lVar12 = in_stack_ffffffffffffffa0 * (long)plStack_68, lVar12 * uStack_70 != 0)) {
    if ((((uStack_70 != 1) && ((uStack_90 != 1 && (uStack_90 != uStack_70)))) ||
        ((plStack_68 != (long *)0x1 && ((plStack_88 != (long *)0x1 && (plStack_88 != plStack_68)))))
        ) || ((in_stack_ffffffffffffffa0 != 1 &&
              ((plStack_80 != (long *)0x1 && (plStack_80 != (long *)in_stack_ffffffffffffffa0))))))
    {
      FUN_10a0ee900(&uStack_70,&UNK_10f683bff,0x4a);
      FUN_10a0029c0(&uStack_70);
      goto LAB_10a92f750;
    }
    if ((ulong)plStack_c0[1] < (long)plVar10 * uVar20 * (long)plVar11) {
      puVar14 = &UNK_10f683bcc;
      goto LAB_10a92f74c;
    }
    if (uStack_90 != 1) {
      lVar23 = 0;
    }
    plVar25 = plStack_80;
    if (plStack_88 != (long *)0x1) {
      plVar25 = (long *)0x0;
    }
    if (uStack_70 != 1) {
      lVar12 = 0;
    }
    uVar27 = in_stack_ffffffffffffffa0;
    if (plStack_68 != (long *)0x1) {
      uVar27 = 0;
    }
    if (uVar20 != 0) {
      uVar13 = 0;
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar18 = 0;
        if (uVar13 != 0) {
          lVar18 = lVar23;
        }
        lVar1 = 0;
        if (uVar13 != 0) {
          lVar1 = lVar12;
        }
        lVar16 = lVar16 - lVar18;
        lVar15 = lVar15 - lVar1;
        if (plVar10 != (long *)0x0) {
          plVar17 = (long *)0x0;
          lVar18 = lVar22;
          do {
            uVar19 = 0;
            if (plVar17 != (long *)0x0) {
              uVar19 = (ulong)plVar25;
            }
            uVar21 = 0;
            if (plVar17 != (long *)0x0) {
              uVar21 = uVar27;
            }
            lVar16 = lVar16 - uVar19;
            lVar15 = lVar15 - uVar21;
            if (plVar11 != (long *)0x0) {
              uVar19 = 0;
              do {
                uVar26 = 0;
                if (uVar19 != 0) {
                  uVar26 = (uint)(plStack_80 == (long *)0x1);
                }
                uVar24 = 0;
                if (uVar19 != 0) {
                  uVar24 = (uint)(in_stack_ffffffffffffffa0 == 1);
                }
                *(float *)(lVar18 + uVar19 * 4) =
                     *(float *)((long)plStack_78 + (lVar16 - (ulong)uVar26) * 4) -
                     *(float *)(in_stack_ffffffffffffffa8 + (lVar15 - (ulong)uVar24) * 4);
                uVar19 = uVar19 + 1;
                lVar16 = (lVar16 - (ulong)uVar26) + 1;
                lVar15 = (lVar15 - (ulong)uVar24) + 1;
              } while (plVar11 != (long *)uVar19);
            }
            plVar17 = (long *)((long)plVar17 + 1);
            lVar18 = lVar18 + (long)plVar11 * 4;
          } while (plVar17 != plVar10);
        }
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + (long)plVar10 * (long)plVar11 * 4;
      } while (uVar13 != uVar20);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar10 = plStack_a8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar22 = plVar9[0x59];
  uVar20 = lVar22 - 1;
  plVar9[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar10[lVar22 + 2];
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  plVar11 = (long *)*plVar10;
  plVar25 = (long *)plVar9[0x4c];
  lVar22 = (long)plVar25 - (long)plVar11;
  uVar27 = lVar22 >> 4;
  if (uVar27 < uVar20) {
    uVar19 = uVar20 - uVar27;
    uVar13 = plVar9[0x4d];
    if ((ulong)((long)(uVar13 - (long)plVar25) >> 4) < uVar19) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = (long)(uVar13 - (long)plVar11) >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < uVar13 - (long)plVar11) {
          uVar21 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar21 >> 0x3c == 0) {
          lVar12 = uVar21 << 4;
          __Znwm();
          lVar23 = lVar12 + lVar22;
          _bzero(lVar23,uVar19 * 0x10);
          lVar16 = lVar23 + uVar27 * -0x10;
          _memcpy(lVar16,plVar11,lVar22);
          *plVar10 = lVar16;
          plVar9[0x4c] = lVar23 + uVar19 * 0x10;
          plVar9[0x4d] = lVar12 + uVar21 * 0x10;
          plStack_88 = plVar11;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
          uStack_70 = uVar13;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar25,uVar19 * 0x10);
    plVar9[0x4c] = (long)(plVar25 + uVar19 * 2);
  }
  else if (uVar20 < uVar27) {
    while (plVar25 != plVar11 + uVar20 * 2) {
      plVar25 = plVar25 + -2;
      func_0x00010988c204(plVar25);
    }
    plVar9[0x4c] = (long)(plVar11 + uVar20 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar20;
  return;
}



/* Entry: 10a92f7b8; end: 10a92f7f3;  */

long FUN_10a92f7b8(long param_1)

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



/* Entry: 10a92f7f4; end: 10a92fc03;  */

void FUN_10a92f7f4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a92f348(param_5);
  FUN_10a1f7d54(&puStack_a0,param_2,param_4);
  plVar10 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_b0,param_2,param_4 + 0x20);
  plVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_c0,param_2,param_4 + 0x40);
  FUN_10a927e68(&uStack_90,*puStack_a0,puStack_a0[1],plVar10);
  FUN_10a927e68(&uStack_70,*puStack_b0,puStack_b0[1],plVar11);
  lVar22 = *plStack_c0;
  uVar20 = uStack_90;
  if (uStack_90 <= uStack_70) {
    uVar20 = uStack_70;
  }
  plVar10 = plStack_88;
  if (plStack_88 <= plStack_68) {
    plVar10 = plStack_68;
  }
  plVar11 = plStack_80;
  if (plStack_80 <= in_stack_ffffffffffffffa0) {
    plVar11 = (long *)in_stack_ffffffffffffffa0;
  }
  if (((uVar20 != 0) && (plVar10 != (long *)0x0)) &&
     ((auVar4._8_8_ = 0, auVar4._0_8_ = uVar20, auVar6._8_8_ = 0, auVar6._0_8_ = plVar10,
      SUB168(auVar4 * auVar6,8) != 0 ||
      (((plVar11 != (long *)0x0 && (uVar20 * (long)plVar10 != 0)) &&
       (auVar5._8_8_ = 0, auVar5._0_8_ = uVar20 * (long)plVar10, auVar7._8_8_ = 0,
       auVar7._0_8_ = plVar11, SUB168(auVar5 * auVar7,8) != 0)))))) {
    puVar14 = &UNK_10f6818f4;
LAB_10a92fb98:
    FUN_10a00946c(puVar14);
LAB_10a92fb9c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a92fba0);
    (*pcVar8)();
  }
  lVar23 = (long)plStack_80 * (long)plStack_88;
  if ((lVar23 * uStack_90 != 0) &&
     (lVar12 = in_stack_ffffffffffffffa0 * (long)plStack_68, lVar12 * uStack_70 != 0)) {
    if ((((uStack_70 != 1) && ((uStack_90 != 1 && (uStack_90 != uStack_70)))) ||
        ((plStack_68 != (long *)0x1 && ((plStack_88 != (long *)0x1 && (plStack_88 != plStack_68)))))
        ) || ((in_stack_ffffffffffffffa0 != 1 &&
              ((plStack_80 != (long *)0x1 && (plStack_80 != (long *)in_stack_ffffffffffffffa0))))))
    {
      FUN_10a0ee900(&uStack_70,&UNK_10f683bff,0x4a);
      FUN_10a0029c0(&uStack_70);
      goto LAB_10a92fb9c;
    }
    if ((ulong)plStack_c0[1] < (long)plVar10 * uVar20 * (long)plVar11) {
      puVar14 = &UNK_10f683bcc;
      goto LAB_10a92fb98;
    }
    if (uStack_90 != 1) {
      lVar23 = 0;
    }
    plVar25 = plStack_80;
    if (plStack_88 != (long *)0x1) {
      plVar25 = (long *)0x0;
    }
    if (uStack_70 != 1) {
      lVar12 = 0;
    }
    uVar27 = in_stack_ffffffffffffffa0;
    if (plStack_68 != (long *)0x1) {
      uVar27 = 0;
    }
    if (uVar20 != 0) {
      uVar13 = 0;
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar18 = 0;
        if (uVar13 != 0) {
          lVar18 = lVar23;
        }
        lVar1 = 0;
        if (uVar13 != 0) {
          lVar1 = lVar12;
        }
        lVar16 = lVar16 - lVar18;
        lVar15 = lVar15 - lVar1;
        if (plVar10 != (long *)0x0) {
          plVar17 = (long *)0x0;
          lVar18 = lVar22;
          do {
            uVar19 = 0;
            if (plVar17 != (long *)0x0) {
              uVar19 = (ulong)plVar25;
            }
            uVar21 = 0;
            if (plVar17 != (long *)0x0) {
              uVar21 = uVar27;
            }
            lVar16 = lVar16 - uVar19;
            lVar15 = lVar15 - uVar21;
            if (plVar11 != (long *)0x0) {
              uVar19 = 0;
              do {
                uVar26 = 0;
                if (uVar19 != 0) {
                  uVar26 = (uint)(plStack_80 == (long *)0x1);
                }
                uVar24 = 0;
                if (uVar19 != 0) {
                  uVar24 = (uint)(in_stack_ffffffffffffffa0 == 1);
                }
                *(float *)(lVar18 + uVar19 * 4) =
                     *(float *)((long)plStack_78 + (lVar16 - (ulong)uVar26) * 4) *
                     *(float *)(in_stack_ffffffffffffffa8 + (lVar15 - (ulong)uVar24) * 4);
                uVar19 = uVar19 + 1;
                lVar16 = (lVar16 - (ulong)uVar26) + 1;
                lVar15 = (lVar15 - (ulong)uVar24) + 1;
              } while (plVar11 != (long *)uVar19);
            }
            plVar17 = (long *)((long)plVar17 + 1);
            lVar18 = lVar18 + (long)plVar11 * 4;
          } while (plVar17 != plVar10);
        }
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + (long)plVar10 * (long)plVar11 * 4;
      } while (uVar13 != uVar20);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar10 = plStack_a8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar22 = plVar9[0x59];
  uVar20 = lVar22 - 1;
  plVar9[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar10[lVar22 + 2];
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  plVar11 = (long *)*plVar10;
  plVar25 = (long *)plVar9[0x4c];
  lVar22 = (long)plVar25 - (long)plVar11;
  uVar27 = lVar22 >> 4;
  if (uVar27 < uVar20) {
    uVar19 = uVar20 - uVar27;
    uVar13 = plVar9[0x4d];
    if ((ulong)((long)(uVar13 - (long)plVar25) >> 4) < uVar19) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = (long)(uVar13 - (long)plVar11) >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < uVar13 - (long)plVar11) {
          uVar21 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar21 >> 0x3c == 0) {
          lVar12 = uVar21 << 4;
          __Znwm();
          lVar23 = lVar12 + lVar22;
          _bzero(lVar23,uVar19 * 0x10);
          lVar16 = lVar23 + uVar27 * -0x10;
          _memcpy(lVar16,plVar11,lVar22);
          *plVar10 = lVar16;
          plVar9[0x4c] = lVar23 + uVar19 * 0x10;
          plVar9[0x4d] = lVar12 + uVar21 * 0x10;
          plStack_88 = plVar11;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
          uStack_70 = uVar13;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar25,uVar19 * 0x10);
    plVar9[0x4c] = (long)(plVar25 + uVar19 * 2);
  }
  else if (uVar20 < uVar27) {
    while (plVar25 != plVar11 + uVar20 * 2) {
      plVar25 = plVar25 + -2;
      func_0x00010988c204(plVar25);
    }
    plVar9[0x4c] = (long)(plVar11 + uVar20 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar20;
  return;
}



/* Entry: 10a92fc04; end: 10a92fc3f;  */

long FUN_10a92fc04(long param_1)

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



/* Entry: 10a92fc40; end: 10a93004f;  */

void FUN_10a92fc40(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a92f348(param_5);
  FUN_10a1f7d54(&puStack_a0,param_2,param_4);
  plVar10 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a1f7d54(&puStack_b0,param_2,param_4 + 0x20);
  plVar11 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x30);
  FUN_10a1f7d54(&plStack_c0,param_2,param_4 + 0x40);
  FUN_10a927e68(&uStack_90,*puStack_a0,puStack_a0[1],plVar10);
  FUN_10a927e68(&uStack_70,*puStack_b0,puStack_b0[1],plVar11);
  lVar22 = *plStack_c0;
  uVar20 = uStack_90;
  if (uStack_90 <= uStack_70) {
    uVar20 = uStack_70;
  }
  plVar10 = plStack_88;
  if (plStack_88 <= plStack_68) {
    plVar10 = plStack_68;
  }
  plVar11 = plStack_80;
  if (plStack_80 <= in_stack_ffffffffffffffa0) {
    plVar11 = (long *)in_stack_ffffffffffffffa0;
  }
  if (((uVar20 != 0) && (plVar10 != (long *)0x0)) &&
     ((auVar4._8_8_ = 0, auVar4._0_8_ = uVar20, auVar6._8_8_ = 0, auVar6._0_8_ = plVar10,
      SUB168(auVar4 * auVar6,8) != 0 ||
      (((plVar11 != (long *)0x0 && (uVar20 * (long)plVar10 != 0)) &&
       (auVar5._8_8_ = 0, auVar5._0_8_ = uVar20 * (long)plVar10, auVar7._8_8_ = 0,
       auVar7._0_8_ = plVar11, SUB168(auVar5 * auVar7,8) != 0)))))) {
    puVar14 = &UNK_10f6818f4;
LAB_10a92ffe4:
    FUN_10a00946c(puVar14);
LAB_10a92ffe8:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a92ffec);
    (*pcVar8)();
  }
  lVar23 = (long)plStack_80 * (long)plStack_88;
  if ((lVar23 * uStack_90 != 0) &&
     (lVar12 = in_stack_ffffffffffffffa0 * (long)plStack_68, lVar12 * uStack_70 != 0)) {
    if ((((uStack_70 != 1) && ((uStack_90 != 1 && (uStack_90 != uStack_70)))) ||
        ((plStack_68 != (long *)0x1 && ((plStack_88 != (long *)0x1 && (plStack_88 != plStack_68)))))
        ) || ((in_stack_ffffffffffffffa0 != 1 &&
              ((plStack_80 != (long *)0x1 && (plStack_80 != (long *)in_stack_ffffffffffffffa0))))))
    {
      FUN_10a0ee900(&uStack_70,&UNK_10f683bff,0x4a);
      FUN_10a0029c0(&uStack_70);
      goto LAB_10a92ffe8;
    }
    if ((ulong)plStack_c0[1] < (long)plVar10 * uVar20 * (long)plVar11) {
      puVar14 = &UNK_10f683bcc;
      goto LAB_10a92ffe4;
    }
    if (uStack_90 != 1) {
      lVar23 = 0;
    }
    plVar25 = plStack_80;
    if (plStack_88 != (long *)0x1) {
      plVar25 = (long *)0x0;
    }
    if (uStack_70 != 1) {
      lVar12 = 0;
    }
    uVar27 = in_stack_ffffffffffffffa0;
    if (plStack_68 != (long *)0x1) {
      uVar27 = 0;
    }
    if (uVar20 != 0) {
      uVar13 = 0;
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar18 = 0;
        if (uVar13 != 0) {
          lVar18 = lVar23;
        }
        lVar1 = 0;
        if (uVar13 != 0) {
          lVar1 = lVar12;
        }
        lVar16 = lVar16 - lVar18;
        lVar15 = lVar15 - lVar1;
        if (plVar10 != (long *)0x0) {
          plVar17 = (long *)0x0;
          lVar18 = lVar22;
          do {
            uVar19 = 0;
            if (plVar17 != (long *)0x0) {
              uVar19 = (ulong)plVar25;
            }
            uVar21 = 0;
            if (plVar17 != (long *)0x0) {
              uVar21 = uVar27;
            }
            lVar16 = lVar16 - uVar19;
            lVar15 = lVar15 - uVar21;
            if (plVar11 != (long *)0x0) {
              uVar19 = 0;
              do {
                uVar26 = 0;
                if (uVar19 != 0) {
                  uVar26 = (uint)(plStack_80 == (long *)0x1);
                }
                uVar24 = 0;
                if (uVar19 != 0) {
                  uVar24 = (uint)(in_stack_ffffffffffffffa0 == 1);
                }
                *(float *)(lVar18 + uVar19 * 4) =
                     *(float *)((long)plStack_78 + (lVar16 - (ulong)uVar26) * 4) /
                     *(float *)(in_stack_ffffffffffffffa8 + (lVar15 - (ulong)uVar24) * 4);
                uVar19 = uVar19 + 1;
                lVar16 = (lVar16 - (ulong)uVar26) + 1;
                lVar15 = (lVar15 - (ulong)uVar24) + 1;
              } while (plVar11 != (long *)uVar19);
            }
            plVar17 = (long *)((long)plVar17 + 1);
            lVar18 = lVar18 + (long)plVar11 * 4;
          } while (plVar17 != plVar10);
        }
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + (long)plVar10 * (long)plVar11 * 4;
      } while (uVar13 != uVar20);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar10 = plStack_a8 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar22 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar22 = plVar9[0x59];
  uVar20 = lVar22 - 1;
  plVar9[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar10[lVar22 + 2];
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar20) {
      return;
    }
  }
  plVar11 = (long *)*plVar10;
  plVar25 = (long *)plVar9[0x4c];
  lVar22 = (long)plVar25 - (long)plVar11;
  uVar27 = lVar22 >> 4;
  if (uVar27 < uVar20) {
    uVar19 = uVar20 - uVar27;
    uVar13 = plVar9[0x4d];
    if ((ulong)((long)(uVar13 - (long)plVar25) >> 4) < uVar19) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = (long)(uVar13 - (long)plVar11) >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < uVar13 - (long)plVar11) {
          uVar21 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar21 >> 0x3c == 0) {
          lVar12 = uVar21 << 4;
          __Znwm();
          lVar23 = lVar12 + lVar22;
          _bzero(lVar23,uVar19 * 0x10);
          lVar16 = lVar23 + uVar27 * -0x10;
          _memcpy(lVar16,plVar11,lVar22);
          *plVar10 = lVar16;
          plVar9[0x4c] = lVar23 + uVar19 * 0x10;
          plVar9[0x4d] = lVar12 + uVar21 * 0x10;
          plStack_88 = plVar11;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
          uStack_70 = uVar13;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar25,uVar19 * 0x10);
    plVar9[0x4c] = (long)(plVar25 + uVar19 * 2);
  }
  else if (uVar20 < uVar27) {
    while (plVar25 != plVar11 + uVar20 * 2) {
      plVar25 = plVar25 + -2;
      func_0x00010988c204(plVar25);
    }
    plVar9[0x4c] = (long)(plVar11 + uVar20 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar20;
  return;
}



/* Entry: 10a930050; end: 10a93008b;  */

long FUN_10a930050(long param_1)

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



/* Entry: 10a93008c; end: 10a9303cb;  */

void FUN_10a93008c(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  ulong uVar33;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  float *pfStack_68;
  
  pfVar9 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar9 + 0xb2) < 8) {
    *(long *)(pfVar9 + *(ulong *)(pfVar9 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar9 + 0xb4);
    *(long *)(pfVar9 + 0xb2) = *(long *)(pfVar9 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar9 + 0x96);
  }
  FUN_10a9303cc(param_5);
  FUN_10a1f7d54(&plStack_70,param_2,param_4);
  pfVar10 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  pfVar11 = param_2;
  func_0x000109898518(param_2,param_4 + 0x20);
  pfVar12 = param_2;
  func_0x000109898518(param_2,param_4 + 0x30);
  pfVar13 = param_2;
  func_0x000109898518(param_2,param_4 + 0x40);
  FUN_10a1f7d54(&plStack_80,param_2,param_4 + 0x50);
  FUN_10a91e4d4(plStack_70[1],pfVar10);
  FUN_10a91e59c(pfVar10,0,0,1);
  uVar23 = plStack_80[1];
  if (uVar23 < 2) {
LAB_10a9302e0:
    iVar28 = 0;
  }
  else {
    uVar19 = (uint)pfVar10[1];
    if ((int)uVar19 < 1) goto LAB_10a9302e0;
    uVar20 = 0;
    iVar21 = 0;
    iVar28 = 0;
    lVar22 = *plStack_80;
    uVar24 = (uint)*pfVar10;
    lVar25 = *plStack_70;
    iVar27 = (int)pfVar12;
    uVar26 = -iVar27;
    do {
      if (0 < (int)uVar24) {
        uVar14 = 0;
        uVar15 = (ulong)(uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU));
        uVar6 = (int)uVar20 - iVar27;
        uVar1 = iVar27 + (int)uVar20;
        if ((int)uVar19 <= (int)uVar1) {
          uVar1 = uVar19;
        }
        lVar16 = (long)iVar21;
        iVar21 = iVar21 + uVar24;
        uVar17 = -iVar27;
        do {
          if (((int)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) < (int)uVar1) &&
             ((float)(int)pfVar11 <= *(float *)(lVar25 + lVar16 * 4))) {
            iVar18 = 0;
            uVar7 = (int)uVar14 - iVar27;
            uVar2 = iVar27 + (int)uVar14;
            if ((int)uVar24 <= (int)uVar2) {
              uVar2 = uVar24;
            }
            lVar29 = lVar25 + (ulong)uVar24 * 4 * uVar15;
            uVar32 = uVar15;
            do {
              uVar33 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
              if ((int)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) < (int)uVar2) {
                do {
                  if ((uVar20 != uVar32) || (uVar14 != uVar33)) {
                    if (*(float *)(lVar29 + uVar33 * 4) < (float)(int)pfVar11) {
                      iVar18 = iVar18 + 1;
                    }
                    if ((int)pfVar13 < iVar18) break;
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar2);
              }
              uVar32 = uVar32 + 1;
              lVar29 = lVar29 + (ulong)uVar24 * 4;
            } while (uVar32 < uVar1);
            if ((0 < iVar18) && (iVar18 <= (int)pfVar13)) {
              pfVar10 = (float *)(lVar22 + (long)(iVar28 << 1) * 4);
              *pfVar10 = (float)(uVar20 & 0xffffffff);
              pfVar10[1] = (float)(uVar14 & 0xffffffff);
              iVar28 = iVar28 + 1;
              if (uVar23 >> 1 == (long)iVar28) goto LAB_10a9302e4;
            }
          }
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar14 != uVar24);
      }
      uVar20 = uVar20 + 1;
      uVar26 = uVar26 + 1;
    } while (uVar20 != uVar19);
  }
LAB_10a9302e4:
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar22 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  pfVar10 = pfStack_68;
  if (pfStack_68 != (float *)0x0) {
    pfVar11 = pfStack_68 + 2;
    do {
      lVar22 = *(long *)pfVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pfVar11,0x10);
      if (bVar5) {
        *(long *)pfVar11 = lVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*(long *)pfStack_68 + 0x10))(pfStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar10);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar28;
  pfVar10 = pfVar9 + 0x96;
  uVar23 = *(long *)(pfVar9 + 0xb2) - 1;
  *(ulong *)(pfVar9 + 0xb2) = uVar23;
  if (uVar23 < 8) {
    uVar23 = *(ulong *)(pfVar10 + uVar23 * 2 + 6);
    if (*(ulong *)(pfVar9 + 0xb4) == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(*(long *)(pfVar9 + 0xae) + -8);
    *(ulong **)(pfVar9 + 0xae) = (ulong *)(*(long *)(pfVar9 + 0xae) + -8);
    if (*(ulong *)(pfVar9 + 0xb4) == uVar23) {
      return;
    }
  }
  plVar3 = *(long **)pfVar10;
  plVar30 = *(long **)(pfVar9 + 0x98);
  lVar22 = (long)plVar30 - (long)plVar3;
  uVar20 = lVar22 >> 4;
  if (uVar20 < uVar23) {
    uVar14 = uVar23 - uVar20;
    plVar31 = *(long **)(pfVar9 + 0x9a);
    if ((ulong)((long)plVar31 - (long)plVar30 >> 4) < uVar14) {
      if (uVar23 >> 0x3c == 0) {
        uVar15 = (long)plVar31 - (long)plVar3 >> 3;
        if (uVar15 <= uVar23) {
          uVar15 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar31 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar16 = uVar15 << 4;
          __Znwm();
          lVar25 = lVar16 + lVar22;
          _bzero(lVar25,uVar14 * 0x10);
          lVar29 = lVar25 + uVar20 * -0x10;
          _memcpy(lVar29,plVar3,lVar22);
          *(long *)pfVar10 = lVar29;
          *(ulong *)(pfVar9 + 0x98) = lVar25 + uVar14 * 0x10;
          *(ulong *)(pfVar9 + 0x9a) = lVar16 + uVar15 * 0x10;
          plStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          plStack_70 = plVar31;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar30,uVar14 * 0x10);
    *(long **)(pfVar9 + 0x98) = plVar30 + uVar14 * 2;
  }
  else if (uVar23 < uVar20) {
    while (plVar30 != plVar3 + uVar23 * 2) {
      plVar30 = plVar30 + -2;
      func_0x00010988c204(plVar30);
    }
    *(long **)(pfVar9 + 0x98) = plVar3 + uVar23 * 2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar9 + 0xb4) = uVar23;
  return;
}



/* Entry: 10a9303cc; end: 10a9303ef;  */

long FUN_10a9303cc(long param_1)

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



/* Entry: 10a9303f0; end: 10a93042b;  */

long FUN_10a9303f0(long param_1)

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



/* Entry: 10a93042c; end: 10a9305a3;  */

void FUN_10a93042c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
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
  long *in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb0;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9305a4(param_5);
  FUN_10a1f7d54(&stack0xffffffffffffffa8,param_2,param_4);
  plVar6 = param_2;
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  FUN_10a05a42c(param_2,param_4 + 0x20);
  FUN_10a91e4d4(in_stack_ffffffffffffffa8[1],plVar6);
  FUN_10a91e59c(plVar6,2,0,1);
  lVar8 = (long)*(float *)((long)plVar6 + 4);
  lVar10 = 0;
  if (lVar8 != 0) {
    lVar10 = LZCOUNT(lVar8) * -2 + 0x7e;
  }
  FUN_10a924cdc(*in_stack_ffffffffffffffa8,*in_stack_ffffffffffffffa8 + lVar8 * 8,
                &stack0xffffffffffffffb8,lVar10,1);
  if (in_stack_ffffffffffffffb0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb0 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb0 + 0x10))(in_stack_ffffffffffffffb0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb0);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar7 = lVar10 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar10 + 2];
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
  lVar10 = *plVar6;
  lVar8 = plVar5[0x4c];
  lVar11 = lVar8 - lVar10;
  uVar14 = lVar11 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar8 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar10 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar8 = lVar4 + lVar11;
          _bzero(lVar8,uVar15 * 0x10);
          lVar12 = lVar8 + uVar14 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar8 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
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
    _bzero(lVar8,uVar15 * 0x10);
    plVar5[0x4c] = lVar8 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar8 != lVar10) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}


