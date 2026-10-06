/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093adbf0; end: 1093adc67;  */

undefined8 * FUN_1093adbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af55d0;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093adc68; end: 1093adc97;  */

long FUN_1093adc68(long param_1)

{
  return *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
}



/* Entry: 1093adc98; end: 1093add4b;  */

void FUN_1093adc98(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110af5580;
  puVar1[3] = &PTR_FUN_110af55d0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  if (puVar1 + 5 != (undefined8 *)(param_2 + 0x10)) {
    FUN_1093add4c();
  }
  puVar1[4] = *(undefined8 *)(param_2 + 8);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1093add4c; end: 1093aded7;  */

undefined8 *
FUN_1093add4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  
  lVar6 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  if ((ulong)((lVar6 - (long)puVar5 >> 2) * -0x5555555555555555) < param_4) {
    if (puVar5 != (undefined8 *)0x0) {
      param_1[1] = puVar5;
      __ZdlPv();
      lVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x1555555555555555 < param_4) {
      func_0x0001093aa314();
      plVar11 = (long *)puVar5[1];
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
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
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      return puVar5;
    }
    uVar10 = (lVar6 >> 2) * 0x5555555555555556;
    if (uVar10 < param_4 || uVar10 - param_4 == 0) {
      uVar10 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar6 >> 2) * -0x5555555555555555)) {
      uVar10 = 0x1555555555555555;
    }
    puVar5 = param_1;
    FUN_1093ab9dc(param_1,uVar10);
    puVar7 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar8 = *param_2;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar7 = uVar8;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    }
  }
  else {
    puVar9 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)(((long)puVar9 - (long)puVar5 >> 2) * -0x5555555555555555)) {
      for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
        *puVar5 = *param_2;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
      }
      param_1[1] = puVar5;
      return puVar5;
    }
    puVar2 = (undefined8 *)((long)param_2 + ((long)puVar9 - (long)puVar5));
    puVar7 = puVar9;
    if (puVar9 != puVar5) {
      do {
        *puVar5 = *param_2;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
        param_2 = (undefined8 *)((long)param_2 + 0xc);
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
      } while (param_2 != puVar2);
      puVar9 = (undefined8 *)param_1[1];
      puVar7 = puVar9;
    }
    for (; puVar2 != param_3; puVar2 = (undefined8 *)((long)puVar2 + 0xc)) {
      uVar8 = *puVar2;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar2 + 1);
      *puVar9 = uVar8;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    }
  }
  param_1[1] = puVar7;
  return puVar5;
}



/* Entry: 1093aded8; end: 1093adf2f;  */

long FUN_1093aded8(long param_1)

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



/* Entry: 1093adf30; end: 1093ae063;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1093adf30(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar6 = param_1;
  auStack_40._0_4_ = param_2;
  FUN_1093acd78(param_1,auStack_40);
  if (lVar6 == 0) {
    plVar7 = (long *)0x40;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110af5628;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plStack_50 = plVar7 + 3;
    *plStack_50 = (long)&PTR_FUN_110af5678;
    lVar6 = param_1;
    plStack_48 = plVar7;
    plStack_38 = (long *)auStack_40;
    FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_38,auStack_40 + 7);
    FUN_1093ae064(lVar6 + 0x18,&plStack_50);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plStack_50 = (long *)auStack_40;
  FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_50,&plStack_38);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  ppuVar5 = &PTR_DAT_110af53f8;
  ___dynamic_cast(puVar4,&PTR_DAT_110af53f8,&PTR_DAT_110af5600,0);
  if (puVar4 != (undefined8 *)0x0) {
    return puVar4;
  }
  ___cxa_bad_cast();
  FUN_1093ae244(&plStack_50);
  __Unwind_Resume();
  puVar9 = ppuVar5[1];
  puVar8 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  plVar7 = (long *)puVar4[1];
  puVar4[1] = puVar9;
  *puVar4 = puVar8;
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
  return puVar4;
}



/* Entry: 1093ae064; end: 1093ae0c7;  */

undefined8 * FUN_1093ae064(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1093ae0c8; end: 1093ae0d7;  */

void FUN_1093ae0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5628;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1093ae0d8; end: 1093ae0f7;  */

void FUN_1093ae0d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5628;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093ae0f8; end: 1093ae107;  */

void FUN_1093ae0f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001093ae100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1093ae108; end: 1093ae17f;  */

undefined8 * FUN_1093ae108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5678;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093ae180; end: 1093ae19f;  */

long FUN_1093ae180(long param_1)

{
  return *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
}



/* Entry: 1093ae1a0; end: 1093ae243;  */

void FUN_1093ae1a0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110af5628;
  puVar1[3] = &PTR_FUN_110af5678;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  if (puVar1 + 5 != (undefined8 *)(param_2 + 0x10)) {
    FUN_1092df320();
  }
  puVar1[4] = *(undefined8 *)(param_2 + 8);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1093ae244; end: 1093ae29b;  */

long FUN_1093ae244(long param_1)

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



/* Entry: 1093ae29c; end: 1093ae36f;  */

void FUN_1093ae29c(ulong *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar9 = puVar1 + 1;
    *puVar1 = (char)*param_2;
  }
  else {
    uVar6 = *param_1;
    lVar7 = (long)puVar1 - uVar6;
    uVar8 = lVar7 + 1;
    if ((long)uVar8 < 0) {
      func_0x000104c591bc();
      lVar7 = param_3 + 0x48;
      FUN_1093acbe0(lVar7,*(undefined4 *)(param_3 + 0x70));
      lVar3 = param_2[1];
      for (lVar2 = *param_2; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
        func_0x0001093ae3c8(lVar7 + 0x10,lVar2 + 0x18);
      }
      return;
    }
    uVar4 = (long)param_1[2] - uVar6;
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      uVar5 = uVar8;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar5;
      __Znwm();
    }
    puVar9 = (undefined1 *)(uVar8 + lVar7) + 1;
    *(undefined1 *)(uVar8 + lVar7) = (char)*param_2;
    _memcpy(uVar8,uVar6,lVar7);
    *param_1 = uVar8;
    param_1[1] = (ulong)puVar9;
    param_1[2] = uVar8 + uVar5;
    if (uVar6 != 0) {
      __ZdlPv(uVar6);
    }
  }
  param_1[1] = (ulong)puVar9;
  return;
}



/* Entry: 1093ae370; end: 1093ae4d7;  */

void FUN_1093ae370(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_3 + 0x48;
  FUN_1093acbe0(lVar3,*(undefined4 *)(param_3 + 0x70));
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    func_0x0001093ae3c8(lVar3 + 0x10,lVar1 + 0x18);
  }
  return;
}



/* Entry: 1093ae4d8; end: 1093ae53b;  */

void FUN_1093ae4d8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  
  if (param_2 < (long)((float)(ulong)param_1[1] / 0.9) + 1U) {
    param_2 = (long)((float)(ulong)param_1[1] / 0.9) + 1;
  }
  if (param_2 != 0) {
    lVar4 = 0;
    param_2 = param_2 - 1;
    do {
      param_2 = param_2 >> ((ulong)(uint)(1 << (ulong)((uint)lVar4 & 0x1f)) & 0x3f) | param_2;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    param_2 = param_2 + 1;
    if ((ulong)param_1[2] < param_2) {
      lVar5 = *param_1;
      lVar6 = param_1[2];
      param_1[1] = 0;
      param_1[2] = param_2;
      param_1[3] = (long)((float)param_2 * 0.9);
      lStack_38 = 0;
      plVar2 = &lStack_38;
      _posix_memalign(plVar2,8,param_2 * 0x38);
      lVar4 = lStack_38;
      if ((int)plVar2 != 0) {
        lVar4 = 0;
      }
      *param_1 = lVar4;
      if ((lVar4 != 0) && (param_1[2] != 0)) {
        lVar4 = 0;
        uVar3 = 0;
        do {
          puVar1 = (undefined8 *)(*param_1 + lVar4);
          uVar3 = uVar3 + 1;
          puVar1[6] = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          puVar1[5] = 0;
          puVar1[4] = 0;
          puVar1[1] = 0;
          *puVar1 = 0;
          lVar4 = lVar4 + 0x38;
        } while (uVar3 < (ulong)param_1[2]);
      }
      if (lVar5 != 0) {
        if (lVar6 != 0) {
          lVar4 = lVar5 + 0x10;
          do {
            if (0 < *(int *)(lVar4 + -0x10)) {
              FUN_1093a5b34(param_1,lVar4 + -0xc,lVar4);
            }
            lVar4 = lVar4 + 0x38;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        _free(lVar5);
      }
      return;
    }
  }
  return;
}



/* Entry: 1093ae53c; end: 1093ae5cf;  */

long FUN_1093ae53c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  puVar3 = param_2;
  FUN_1093aeaac();
  if (lVar1 == 0) {
    uStack_60 = *param_2;
    uStack_58 = *(undefined4 *)(param_2 + 1);
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    lVar1 = param_1;
    FUN_1093aeb84(param_1,&uStack_60,&uStack_50);
  }
  else {
    lVar1 = lVar1 + 0x10;
    puVar4 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_68 = FUN_1093ae5d0;
  lVar2 = lVar1;
  puStack_80 = param_2;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_1093aec28();
  if (lVar2 == 0) {
    uStack_90 = *puVar4;
    uStack_98 = 0;
    uStack_88 = *(undefined4 *)(puVar4 + 1);
    lStack_a8 = 0;
    lStack_a0 = 0;
    FUN_1093aed00(lVar1,&uStack_90,&lStack_a8);
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
  }
  else {
    lVar1 = lVar2 + 0x10;
  }
  return lVar1;
}



/* Entry: 1093ae5d0; end: 1093ae65f;  */

long FUN_1093ae5d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = param_1;
  FUN_1093aec28();
  if (lVar1 == 0) {
    uStack_30 = *param_2;
    uStack_38 = 0;
    uStack_28 = *(undefined4 *)(param_2 + 1);
    lStack_48 = 0;
    lStack_40 = 0;
    FUN_1093aed00(param_1,&uStack_30,&lStack_48);
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  else {
    param_1 = lVar1 + 0x10;
  }
  return param_1;
}



/* Entry: 1093ae660; end: 1093ae82f;  */

void FUN_1093ae660(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_68;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar9 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    lVar8 = (long)puVar1 - *param_1;
    uVar5 = (lVar8 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
      FUN_1093aeda4();
      lVar6 = *param_1;
      lVar7 = param_1[2];
      param_1[1] = 0;
      param_1[2] = (long)param_2;
      param_1[3] = (long)((float)param_2 * 0.9);
      lStack_68 = 0;
      plVar2 = &lStack_68;
      _posix_memalign(plVar2,8,(long)param_2 * 0x28);
      lVar8 = lStack_68;
      if ((int)plVar2 != 0) {
        lVar8 = 0;
      }
      *param_1 = lVar8;
      if ((lVar8 != 0) && (param_1[2] != 0)) {
        lVar8 = 0;
        uVar5 = 0;
        do {
          puVar1 = (undefined8 *)(*param_1 + lVar8);
          uVar5 = uVar5 + 1;
          puVar1[4] = 0;
          puVar1[1] = 0;
          *puVar1 = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          lVar8 = lVar8 + 0x28;
        } while (uVar5 < (ulong)param_1[2]);
      }
      if (lVar6 != 0) {
        if (lVar7 != 0) {
          plVar2 = (long *)(lVar6 + 0x10);
          do {
            if (0 < (int)plVar2[-2]) {
              FUN_1093ae830(param_1,(long)plVar2 + -0xc,plVar2);
              if ((0 < (int)plVar2[-2]) && (*plVar2 != 0)) {
                plVar2[1] = *plVar2;
                __ZdlPv();
              }
            }
            plVar2 = plVar2 + 5;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        _free(lVar6);
      }
      return;
    }
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_1093aedb8();
    puVar1 = (undefined8 *)((long)plVar2 + lVar8);
    puVar9 = puVar1 + 1;
    *puVar1 = *param_2;
    lVar7 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar2 + uVar4);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 1093ae830; end: 1093aeaab;  */

/* WARNING: Possible PIC construction at 0x0001093aea20: Changing call to branch */

long FUN_1093ae830(uint *param_1,uint *param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_4 = param_4 & 0xffffffff;
  lVar8 = *(long *)(param_1 + 4);
  uVar4 = (int)lVar8 - 1 & param_4;
  lVar10 = *(long *)param_1;
  puVar6 = (uint *)(lVar10 + uVar4 * 0x28);
  uVar1 = *puVar6;
  puVar2 = param_1;
  uVar5 = uVar4;
  if (uVar1 != 0) {
    uVar12 = 0;
    uVar16 = 0xffffffffffffffff;
    do {
      uVar9 = (ulong)uVar1;
      if ((((uVar9 == param_4) && (puVar6[1] == *param_2)) && (puVar6[2] == param_2[1])) &&
         (puVar6[3] == param_2[2])) {
        puVar2 = puVar6 + 4;
        goto SUB_1093aea5c;
      }
      lVar14 = *(long *)(param_1 + 4);
      puVar2 = (uint *)(lVar14 + -1);
      uVar15 = (lVar14 + uVar4) - (lVar14 + 0xffffffffU & uVar9) & (ulong)puVar2;
      if (uVar15 < uVar12) {
        uVar5 = uVar4;
        if (uVar16 != 0xffffffffffffffff) {
          uVar5 = uVar16;
        }
        puVar11 = puVar6 + 1;
        *puVar6 = (uint)param_4;
        if ((int)uVar1 < 0) {
          uVar7 = *(undefined8 *)param_2;
          puVar6[3] = param_2[2];
          *(undefined8 *)puVar11 = uVar7;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          uVar7 = *(undefined8 *)param_3;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_3 + 2);
          *(undefined8 *)(puVar6 + 4) = uVar7;
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_3 + 4);
          param_3[0] = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[5] = 0;
          *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + 1;
          goto LAB_1093aea24;
        }
        uVar1 = param_2[2];
        uVar7 = *(undefined8 *)param_2;
        uVar13 = *(undefined8 *)puVar11;
        puVar2 = (uint *)(ulong)puVar6[3];
        param_2[2] = puVar6[3];
        *(undefined8 *)param_2 = uVar13;
        puVar6[3] = uVar1;
        *(undefined8 *)puVar11 = uVar7;
        lVar10 = *(long *)param_1 + uVar4 * 0x28;
        uVar7 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = *(undefined8 *)(lVar10 + 0x10);
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
        uVar7 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar10 + 0x18);
        *(undefined8 *)(lVar10 + 0x18) = uVar7;
        uVar7 = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(lVar10 + 0x20) = uVar7;
        lVar10 = *(long *)param_1;
        param_4 = uVar9;
        uVar12 = uVar15;
        uVar16 = uVar5;
      }
      uVar12 = uVar12 + 1;
      uVar4 = uVar4 + 1 & lVar8 - 1U;
      puVar6 = (uint *)(lVar10 + uVar4 * 0x28);
      uVar1 = *puVar6;
    } while (uVar1 != 0);
    uVar5 = uVar4;
    if (uVar16 != 0xffffffffffffffff) {
      uVar5 = uVar16;
    }
  }
  *puVar6 = (uint)param_4;
  uVar7 = *(undefined8 *)param_2;
  puVar6[3] = param_2[2];
  *(undefined8 *)(puVar6 + 1) = uVar7;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar7 = *(undefined8 *)param_3;
  *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar6 + 4) = uVar7;
  *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_3 + 4);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + 1;
LAB_1093aea24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return *(long *)param_1 + uVar5 * 0x28;
  }
  ___stack_chk_fail();
  param_3 = param_2;
SUB_1093aea5c:
  lVar3 = *(long *)puVar2;
  if (lVar3 != 0) {
    *(long *)(puVar2 + 2) = lVar3;
    __ZdlPv();
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  uVar7 = *(undefined8 *)param_3;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)puVar2 = uVar7;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_3 + 4);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  return lVar3;
}



/* Entry: 1093aeaac; end: 1093aeb83;  */

uint * FUN_1093aeaac(long *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = param_1[2];
  uVar3 = param_2[1] * 0x12740a5 ^ *param_2 * 0x466f45d ^ param_2[2] * 0x4f9ffb7;
  uVar1 = uVar3 & 0x7fffffff;
  if ((uVar3 & 0x7ffffffe) == 0) {
    uVar1 = 1;
  }
  uVar5 = lVar4 + 0xffffffffU & (ulong)uVar1;
  puVar2 = (uint *)(*param_1 + uVar5 * 0x38);
  uVar3 = *puVar2;
  if (uVar3 != 0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
      if (((uVar5 + lVar4) - (lVar4 + 0xffffffffU & (ulong)uVar3) & lVar4 - 1U) < uVar6) {
        return (uint *)0x0;
      }
      if ((((uVar3 == uVar1) && (puVar2[1] == *param_2)) && (puVar2[2] == param_2[1])) &&
         (puVar2[3] == param_2[2])) {
        return puVar2;
      }
      uVar5 = uVar5 + 1 & lVar4 - 1U;
      puVar2 = (uint *)(*param_1 + uVar5 * 0x38);
      uVar3 = *puVar2;
    } while (uVar3 != 0);
  }
  return (uint *)0x0;
}



/* Entry: 1093aeb84; end: 1093aec27;  */

long FUN_1093aeb84(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(ulong *)(param_1 + 0x18) <= *(long *)(param_1 + 8) + 1U) {
    FUN_1093a5a40(param_1,*(long *)(param_1 + 0x10) << 1);
  }
  uVar2 = param_2[1] * 0x12740a5 ^ *param_2 * 0x466f45d ^ param_2[2] * 0x4f9ffb7;
  uVar1 = uVar2 & 0x7fffffff;
  if ((uVar2 & 0x7ffffffe) == 0) {
    uVar1 = 1;
  }
  FUN_1093a5b34(param_1,param_2,param_3,uVar1);
  return param_1 + 0x10;
}



/* Entry: 1093aec28; end: 1093aecff;  */

uint * FUN_1093aec28(long *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = param_1[2];
  uVar3 = param_2[1] * 0x12740a5 ^ *param_2 * 0x466f45d ^ param_2[2] * 0x4f9ffb7;
  uVar1 = uVar3 & 0x7fffffff;
  if ((uVar3 & 0x7ffffffe) == 0) {
    uVar1 = 1;
  }
  uVar5 = lVar4 + 0xffffffffU & (ulong)uVar1;
  puVar2 = (uint *)(*param_1 + uVar5 * 0x28);
  uVar3 = *puVar2;
  if (uVar3 != 0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
      if (((uVar5 + lVar4) - (lVar4 + 0xffffffffU & (ulong)uVar3) & lVar4 - 1U) < uVar6) {
        return (uint *)0x0;
      }
      if ((((uVar3 == uVar1) && (puVar2[1] == *param_2)) && (puVar2[2] == param_2[1])) &&
         (puVar2[3] == param_2[2])) {
        return puVar2;
      }
      uVar5 = uVar5 + 1 & lVar4 - 1U;
      puVar2 = (uint *)(*param_1 + uVar5 * 0x28);
      uVar3 = *puVar2;
    } while (uVar3 != 0);
  }
  return (uint *)0x0;
}



/* Entry: 1093aed00; end: 1093aeda3;  */

long FUN_1093aed00(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(ulong *)(param_1 + 0x18) <= *(long *)(param_1 + 8) + 1U) {
    func_0x0001093ae724(param_1,*(long *)(param_1 + 0x10) << 1);
  }
  uVar2 = param_2[1] * 0x12740a5 ^ *param_2 * 0x466f45d ^ param_2[2] * 0x4f9ffb7;
  uVar1 = uVar2 & 0x7fffffff;
  if ((uVar2 & 0x7ffffffe) == 0) {
    uVar1 = 1;
  }
  FUN_1093ae830(param_1,param_2,param_3,uVar1);
  return param_1 + 0x10;
}



/* Entry: 1093aeda4; end: 1093aedb7;  */

undefined1  [16] FUN_1093aeda4(undefined8 param_1,short *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  plVar8 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000104c4f740();
  uVar4 = plVar8[1];
  if (uVar4 != 0) {
    uVar5 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
            (long)(int)param_2[2] * 0x4f9ffb7;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*plVar8 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar5 == uVar9) {
          if (((*(short *)(plVar8 + 2) == *param_2) &&
              (*(short *)((long)plVar8 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar8 + 0x14) == param_2[2])) break;
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) goto LAB_1093aeed4;
        }
      }
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = plVar8;
      return auVar11;
    }
  }
LAB_1093aeed4:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 1093aedb8; end: 1093aedeb;  */

undefined1  [16] FUN_1093aedb8(long *param_1,short *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000104c4f740();
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
            (long)(int)param_2[2] * 0x4f9ffb7;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar5 == uVar9) {
          if (((*(short *)(plVar8 + 2) == *param_2) &&
              (*(short *)((long)plVar8 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar8 + 0x14) == param_2[2])) break;
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) goto LAB_1093aeed4;
        }
      }
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = plVar8;
      return auVar11;
    }
  }
LAB_1093aeed4:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 1093aedec; end: 1093aefcb;  */

long * FUN_1093aedec(long *param_1,short *param_2)

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
    uVar3 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
            (long)(int)param_2[2] * 0x4f9ffb7;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
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
          if (((*(short *)(plVar6 + 2) == *param_2) &&
              (*(short *)((long)plVar6 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar6 + 0x14) == param_2[2])) {
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



/* Entry: 1093aefcc; end: 1093af047;  */

void FUN_1093aefcc(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (0 < *(int *)(*param_1 + lVar4)) {
        lVar1 = *param_1 + lVar4;
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 != 0) {
          *(long *)(lVar1 + 0x18) = lVar2;
          __ZdlPv();
          uVar3 = param_1[2];
        }
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x28;
    } while (uVar5 < uVar3);
  }
  _free(*param_1);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1093af048; end: 1093af15b;  */

void FUN_1093af048(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1093a6e78(param_1,&uStack_14);
  if ((param_1 != 0) && (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  }
  return;
}



/* Entry: 1093af15c; end: 1093af49f;  */

long * FUN_1093af15c(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                    long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    puVar7 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)puVar7 >> 2) * -0x5555555555555555 < param_5) {
      lVar11 = *param_1;
      uVar5 = param_5 + ((long)puVar7 - lVar11 >> 2) * -0x5555555555555555;
      if (0x1555555555555555 < uVar5) {
        func_0x0001093aa314();
        if (lStack_58 - (long)puStack_60 != 0) {
          lStack_58 = lStack_58 + (((lStack_58 - (long)puStack_60) - 0xcU) / 0xc) * -0xc + -0xc;
        }
        if (plStack_68 != (long *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        puVar8 = (undefined8 *)param_1[1];
        plVar3 = (long *)param_2[1];
        puVar13 = (undefined8 *)param_2[2];
        plVar4 = plVar3;
        puVar7 = param_3;
        if (puVar8 != param_3) {
          do {
            uVar10 = *puVar7;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar7 + 1);
            *puVar13 = uVar10;
            puVar7 = (undefined8 *)((long)puVar7 + 0xc);
            puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          } while (puVar7 != puVar8);
          plVar3 = (long *)param_2[1];
          puVar13 = (undefined8 *)param_2[2];
          puVar7 = (undefined8 *)param_1[1];
        }
        param_2[2] = (long)puVar13 + ((long)puVar7 - (long)param_3);
        param_1[1] = (long)param_3;
        puVar7 = (undefined8 *)*param_1;
        puVar13 = (undefined8 *)((long)plVar3 + ((long)puVar7 - (long)param_3));
        puVar8 = puVar13;
        if ((long)puVar7 - (long)param_3 != 0) {
          do {
            uVar10 = *puVar7;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
            *puVar8 = uVar10;
            puVar7 = (undefined8 *)((long)puVar7 + 0xc);
            puVar8 = (undefined8 *)((long)puVar8 + 0xc);
          } while (puVar7 != param_3);
          puVar7 = (undefined8 *)*param_1;
        }
        param_2[1] = (long)puVar13;
        *param_1 = (long)puVar13;
        param_1[1] = (long)puVar7;
        param_2[1] = (long)puVar7;
        lVar11 = param_1[1];
        param_1[1] = param_2[2];
        param_2[2] = lVar11;
        lVar11 = param_1[2];
        param_1[2] = param_2[3];
        param_2[3] = lVar11;
        *param_2 = param_2[1];
        return plVar4;
      }
      lVar6 = param_1[2] - lVar11 >> 2;
      uVar9 = lVar6 * 0x5555555555555556;
      if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
        uVar9 = uVar5;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar9 = 0x1555555555555555;
      }
      plStack_48 = param_1;
      if (uVar9 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_1093aa328();
      }
      puStack_60 = (undefined8 *)((long)plVar3 + ((long)param_2 - lVar11));
      lStack_50 = (long)plVar3 + uVar9 * 0xc;
      lStack_58 = (long)puStack_60 + param_5 * 0xc;
      param_5 = param_5 * 0xc;
      puVar7 = puStack_60;
      do {
        uVar10 = *param_3;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_3 + 1);
        *puVar7 = uVar10;
        param_3 = (undefined8 *)((long)param_3 + 0xc);
        param_5 = param_5 + -0xc;
        puVar7 = (undefined8 *)((long)puVar7 + 0xc);
      } while (param_5 != 0);
      plStack_68 = plVar3;
      FUN_1093af4a0(param_1,&plStack_68,param_2);
      if (lStack_58 - (long)puStack_60 != 0) {
        lStack_58 = lStack_58 + (((lStack_58 - (long)puStack_60) - 0xcU) / 0xc) * -0xc + -0xc;
      }
      param_2 = param_1;
      if (plStack_68 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      lVar11 = (long)puVar7 - (long)param_2;
      if ((lVar11 >> 2) * -0x5555555555555555 < param_5) {
        puVar12 = (undefined8 *)(lVar11 + (long)param_3);
        puVar2 = puVar7;
        puVar8 = puVar7;
        for (puVar13 = puVar12; puVar13 != param_4; puVar13 = (undefined8 *)((long)puVar13 + 0xc)) {
          uVar10 = *puVar13;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar13 + 1);
          *puVar2 = uVar10;
          puVar8 = (undefined8 *)((long)puVar8 + 0xc);
          puVar2 = (undefined8 *)((long)puVar2 + 0xc);
        }
        param_1[1] = (long)puVar8;
        if (0 < lVar11) {
          puVar1 = (undefined8 *)((long)param_2 + param_5 * 0xc);
          puVar14 = puVar8;
          for (puVar13 = (undefined8 *)((long)puVar8 + param_5 * -0xc); puVar13 < puVar7;
              puVar13 = (undefined8 *)((long)puVar13 + 0xc)) {
            uVar10 = *puVar13;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar13 + 1);
            *puVar14 = uVar10;
            puVar14 = (undefined8 *)((long)puVar14 + 0xc);
          }
          param_1[1] = (long)puVar14;
          if (puVar2 != puVar1) {
            lVar11 = (long)puVar1 - (long)puVar8;
            puVar13 = (undefined8 *)((long)((long)puVar8 - 0xcU) + param_5 * -0xc);
            puVar7 = (undefined8 *)((long)puVar8 - 0xcU);
            do {
              uVar10 = *puVar13;
              *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar13 + 1);
              *puVar7 = uVar10;
              puVar13 = (undefined8 *)((long)puVar13 + -0xc);
              lVar11 = lVar11 + 0xc;
              puVar7 = (undefined8 *)((long)puVar7 + -0xc);
            } while (lVar11 != 0);
          }
          lVar11 = 0;
          do {
            *(undefined8 *)(lVar11 + (long)param_2) = *param_3;
            *(undefined4 *)((undefined8 *)(lVar11 + (long)param_2) + 1) =
                 *(undefined4 *)(param_3 + 1);
            param_3 = (undefined8 *)((long)param_3 + 0xc);
            lVar11 = lVar11 + 0xc;
          } while (param_3 != puVar12);
        }
      }
      else {
        puVar8 = (undefined8 *)((long)param_2 + param_5 * 0xc);
        puVar12 = puVar7;
        for (puVar13 = (undefined8 *)((long)puVar7 + param_5 * -0xc); puVar13 < puVar7;
            puVar13 = (undefined8 *)((long)puVar13 + 0xc)) {
          uVar10 = *puVar13;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
          *puVar12 = uVar10;
          puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        }
        param_1[1] = (long)puVar12;
        if (puVar7 != puVar8) {
          lVar11 = (long)puVar8 - (long)puVar7;
          puVar13 = (undefined8 *)((long)((long)puVar7 - 0xcU) + param_5 * -0xc);
          puVar7 = (undefined8 *)((long)puVar7 - 0xcU);
          do {
            uVar10 = *puVar13;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar13 + 1);
            *puVar7 = uVar10;
            puVar13 = (undefined8 *)((long)puVar13 + -0xc);
            lVar11 = lVar11 + 0xc;
            puVar7 = (undefined8 *)((long)puVar7 + -0xc);
          } while (lVar11 != 0);
        }
        lVar11 = 0;
        puVar7 = (undefined8 *)((long)param_3 + param_5 * 0xc);
        do {
          *(undefined8 *)(lVar11 + (long)param_2) = *param_3;
          *(undefined4 *)((undefined8 *)(lVar11 + (long)param_2) + 1) = *(undefined4 *)(param_3 + 1)
          ;
          param_3 = (undefined8 *)((long)param_3 + 0xc);
          lVar11 = lVar11 + 0xc;
        } while (param_3 != puVar7);
      }
    }
  }
  return param_2;
}



/* Entry: 1093af4a0; end: 1093af563;  */

void FUN_1093af4a0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  lVar3 = param_2[1];
  puVar1 = (undefined8 *)param_2[2];
  puVar2 = param_3;
  if (puVar4 != param_3) {
    do {
      uVar5 = *puVar2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
      *puVar1 = uVar5;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    } while (puVar2 != puVar4);
    lVar3 = param_2[1];
    puVar1 = (undefined8 *)param_2[2];
    puVar2 = (undefined8 *)param_1[1];
  }
  param_2[2] = (long)puVar1 + ((long)puVar2 - (long)param_3);
  param_1[1] = (long)param_3;
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)(lVar3 + ((long)puVar2 - (long)param_3));
  puVar4 = puVar1;
  if ((long)puVar2 - (long)param_3 != 0) {
    do {
      uVar5 = *puVar2;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
      *puVar4 = uVar5;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    } while (puVar2 != param_3);
    puVar2 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_2[1] = puVar2;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1093af564; end: 1093af76b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093af564(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  
  if (param_5 < 1) {
    return param_2;
  }
  puVar2 = (undefined1 *)param_1[1];
  if (param_5 <= param_1[2] - (long)puVar2) {
    lVar12 = (long)puVar2 - (long)param_2;
    if (lVar12 < param_5) {
      plVar6 = (long *)(lVar12 + (long)param_3);
      puVar4 = puVar2;
      puVar13 = puVar2;
      if (plVar6 != param_4) {
        puVar14 = puVar2;
        plVar8 = plVar6;
        do {
          plVar5 = (long *)((long)plVar8 + 1);
          *puVar14 = (char)*plVar8;
          puVar4 = (undefined1 *)((long)param_4 + (long)puVar2) + -(long)plVar6;
          puVar13 = puVar14 + 1;
          puVar14 = puVar14 + 1;
          plVar8 = plVar5;
        } while (plVar5 != param_4);
      }
      param_1[1] = (long)puVar4;
      if (lVar12 < 1) {
        return param_2;
      }
      puVar14 = puVar4 + -param_5;
      puVar10 = puVar4;
      if (puVar4 + -param_5 < puVar2) {
        do {
          puVar17 = puVar14 + 1;
          puVar4 = puVar10 + 1;
          *puVar10 = *puVar14;
          puVar14 = puVar17;
          puVar10 = puVar4;
        } while (puVar17 != puVar2);
      }
      param_1[1] = (long)puVar4;
      if (puVar13 != (undefined1 *)((long)param_2 + param_5)) {
        _memmove((undefined1 *)((long)param_2 + param_5),param_2);
      }
    }
    else {
      puVar4 = puVar2 + -param_5;
      puVar13 = puVar2;
      puVar14 = puVar2;
      if (puVar2 + -param_5 < puVar2) {
        do {
          puVar10 = puVar4 + 1;
          puVar14 = puVar13 + 1;
          *puVar13 = *puVar4;
          puVar4 = puVar10;
          puVar13 = puVar14;
        } while (puVar10 != puVar2);
      }
      param_1[1] = (long)puVar14;
      lVar12 = param_5;
      if (puVar2 != (undefined1 *)((long)param_2 + param_5)) {
        _memmove((undefined1 *)((long)param_2 + param_5),param_2);
      }
    }
    _memmove(param_2,param_3,lVar12);
    return param_2;
  }
  lVar12 = *param_1;
  puVar4 = puVar2 + (param_5 - lVar12);
  if (-1 < (long)puVar4) {
    uVar7 = param_1[2] - lVar12;
    puVar13 = (undefined1 *)(uVar7 * 2);
    if (puVar13 < puVar4 || (long)puVar13 - (long)puVar4 == 0) {
      puVar13 = puVar4;
    }
    if (0x3ffffffffffffffe < uVar7) {
      puVar13 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar13 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = puVar13;
      __Znwm();
    }
    plVar6 = (long *)((long)param_2 + ((long)puVar4 - lVar12));
    puVar14 = (undefined1 *)((long)plVar6 + param_5);
    plVar8 = plVar6;
    do {
      *(char *)plVar8 = (char)*param_3;
      param_5 = param_5 + -1;
      plVar8 = (long *)((long)plVar8 + 1);
      param_3 = (long *)((long)param_3 + 1);
    } while (param_5 != 0);
    _memcpy(puVar14,param_2,(long)puVar2 - (long)param_2);
    param_1[1] = (long)param_2;
    lVar12 = *param_1;
    puVar10 = (undefined1 *)((long)plVar6 + (lVar12 - (long)param_2));
    _memcpy(puVar10,lVar12,(long)param_2 - lVar12);
    *param_1 = (long)puVar10;
    param_1[1] = (long)(puVar14 + ((long)puVar2 - (long)param_2));
    param_1[2] = (long)(puVar4 + (long)puVar13);
    if (lVar12 == 0) {
      return plVar6;
    }
    __ZdlPv(lVar12);
    return plVar6;
  }
  func_0x000104c591bc();
  plVar6 = param_1;
  if (param_1 <= param_2) {
    plVar6 = param_2;
  }
  plVar8 = param_1;
  if (param_2 <= param_1) {
    plVar8 = param_2;
  }
  plVar22 = param_4 + 1;
  plVar15 = (long *)*plVar22;
  plVar5 = plVar22;
  plVar18 = plVar15;
  if (plVar15 == (long *)0x0) {
    plVar18 = (long *)((param_3[1] - *param_3 >> 2) * -0x5555555555555555);
  }
  else {
    do {
      uVar7 = 0xff;
      if (plVar6 <= (long *)plVar18[4]) {
        uVar7 = 0;
      }
      if ((long *)plVar18[4] == plVar6) {
        uVar20 = 0xff;
        if (plVar8 <= (long *)plVar18[5]) {
          uVar20 = 0;
        }
        uVar7 = 0;
        if ((long *)plVar18[5] != plVar8) {
          uVar7 = uVar20;
        }
      }
      plVar1 = plVar18;
      if ((uVar7 & 0x80) != 0) {
        plVar1 = plVar5;
      }
      plVar18 = *(long **)((long)plVar18 + ((uVar7 & 0x80) >> 4));
      plVar5 = plVar1;
    } while (plVar18 != (long *)0x0);
    if (plVar22 != plVar1) {
      bVar3 = plVar6 < (long *)plVar1[4];
      if (plVar6 == (long *)plVar1[4]) {
        bVar3 = plVar8 != (long *)plVar1[5] && plVar8 < (long *)plVar1[5];
      }
      if (!bVar3) {
        return (long *)plVar1[6];
      }
    }
    puVar11 = (undefined8 *)param_3[1];
    lVar12 = *param_3;
    plVar18 = (long *)(((long)puVar11 - lVar12 >> 2) * -0x5555555555555555);
    do {
      while( true ) {
        plVar22 = plVar15;
        plVar15 = (long *)plVar22[4];
        plVar5 = param_1;
        if (plVar6 == plVar15) break;
        if (plVar6 < plVar15) goto LAB_1093af88c;
        if (plVar6 <= plVar15) goto LAB_1093af950;
LAB_1093af8a4:
        plVar15 = (long *)plVar22[1];
        if ((long *)plVar22[1] == (long *)0x0) {
          plVar5 = plVar22 + 1;
          goto LAB_1093af8f4;
        }
      }
      plVar15 = (long *)plVar22[5];
      if (plVar15 <= plVar8) {
        if (plVar15 != plVar8 && plVar15 < plVar8) goto LAB_1093af8a4;
        goto LAB_1093af950;
      }
LAB_1093af88c:
      plVar15 = (long *)*plVar22;
      plVar5 = plVar22;
    } while ((long *)*plVar22 != (long *)0x0);
  }
LAB_1093af8f4:
  plVar15 = (long *)0x38;
  __Znwm();
  plVar15[4] = (long)plVar6;
  plVar15[5] = (long)plVar8;
  plVar15[6] = 0;
  *plVar15 = 0;
  plVar15[1] = 0;
  plVar15[2] = (long)plVar22;
  *plVar5 = (long)plVar15;
  plVar6 = plVar15;
  if (*(long *)*param_4 != 0) {
    *param_4 = *(long *)*param_4;
    plVar6 = (long *)*plVar5;
  }
  plVar5 = (long *)param_4[1];
  func_0x000107c27d40(plVar5,plVar6);
  param_4[2] = param_4[2] + 1;
  lVar12 = *param_3;
  puVar11 = (undefined8 *)param_3[1];
  plVar22 = plVar15;
LAB_1093af950:
  plVar22[6] = (long)plVar18;
  puVar19 = (undefined8 *)(lVar12 + (long)param_1 * 0xc);
  puVar16 = (undefined8 *)(lVar12 + (long)param_2 * 0xc);
  uVar23 = *puVar19;
  uVar24 = *puVar16;
  uVar23 = CONCAT44(((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar24 >> 0x20)) * 0.5,
                    ((float)uVar23 + (float)uVar24) * 0.5);
  fVar25 = (*(float *)(puVar19 + 1) + *(float *)(puVar16 + 1)) * 0.5;
  if (puVar11 < (undefined8 *)param_3[2]) {
    *puVar11 = uVar23;
    *(float *)(puVar11 + 1) = fVar25;
    lVar12 = (long)puVar11 + 0xc;
  }
  else {
    uVar7 = ((long)puVar11 - lVar12 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar7) {
      func_0x0001093aa314();
      if (plVar5 != (long *)0x0) {
        FUN_1093afa88(*plVar5);
        FUN_1093afa88(plVar5[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar5);
        return plVar5;
      }
      return (long *)0x0;
    }
    lVar9 = param_3[2] - lVar12 >> 2;
    uVar20 = lVar9 * 0x5555555555555556;
    if (uVar20 < uVar7 || uVar20 - uVar7 == 0) {
      uVar20 = uVar7;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar20 = 0x1555555555555555;
    }
    plVar6 = param_3;
    FUN_1093aa328();
    puVar16 = (undefined8 *)((long)plVar6 + ((long)puVar11 - lVar12));
    *puVar16 = uVar23;
    *(float *)(puVar16 + 1) = fVar25;
    lVar12 = (long)puVar16 + 0xc;
    puVar11 = (undefined8 *)*param_3;
    puVar19 = (undefined8 *)param_3[1];
    lVar9 = (long)puVar11 - (long)puVar19;
    puVar16 = (undefined8 *)((long)puVar16 + lVar9);
    puVar21 = puVar16;
    if (lVar9 != 0) {
      do {
        uVar23 = *puVar11;
        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar11 + 1);
        *puVar21 = uVar23;
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
        puVar21 = (undefined8 *)((long)puVar21 + 0xc);
      } while (puVar11 != puVar19);
      puVar11 = (undefined8 *)*param_3;
    }
    *param_3 = (long)puVar16;
    param_3[1] = lVar12;
    param_3[2] = (long)plVar6 + uVar20 * 0xc;
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_3[1] = lVar12;
  return plVar18;
}



/* Entry: 1093af76c; end: 1093afa87;  */

undefined8 * FUN_1093af76c(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  
  puVar11 = param_1;
  if (param_1 <= param_2) {
    puVar11 = param_2;
  }
  puVar13 = param_1;
  if (param_2 <= param_1) {
    puVar13 = param_2;
  }
  plVar16 = param_4 + 1;
  plVar9 = (long *)*plVar16;
  plVar4 = plVar16;
  plVar12 = plVar9;
  if (plVar9 == (long *)0x0) {
    puVar15 = (undefined8 *)((param_3[1] - *param_3 >> 2) * -0x5555555555555555);
  }
  else {
    do {
      uVar8 = 0xff;
      if (puVar11 <= (undefined8 *)plVar12[4]) {
        uVar8 = 0;
      }
      if ((undefined8 *)plVar12[4] == puVar11) {
        uVar14 = 0xff;
        if (puVar13 <= (undefined8 *)plVar12[5]) {
          uVar14 = 0;
        }
        uVar8 = 0;
        if ((undefined8 *)plVar12[5] != puVar13) {
          uVar8 = uVar14;
        }
      }
      plVar1 = plVar12;
      if ((uVar8 & 0x80) != 0) {
        plVar1 = plVar4;
      }
      plVar12 = *(long **)((long)plVar12 + ((uVar8 & 0x80) >> 4));
      plVar4 = plVar1;
    } while (plVar12 != (long *)0x0);
    if (plVar16 != plVar1) {
      bVar2 = puVar11 < (undefined8 *)plVar1[4];
      if (puVar11 == (undefined8 *)plVar1[4]) {
        bVar2 = puVar13 != (undefined8 *)plVar1[5] && puVar13 < (undefined8 *)plVar1[5];
      }
      if (!bVar2) {
        return (undefined8 *)plVar1[6];
      }
    }
    puVar7 = (undefined8 *)param_3[1];
    lVar5 = *param_3;
    puVar15 = (undefined8 *)(((long)puVar7 - lVar5 >> 2) * -0x5555555555555555);
    do {
      while( true ) {
        plVar16 = plVar9;
        puVar10 = (undefined8 *)plVar16[4];
        puVar3 = param_1;
        if (puVar11 == puVar10) break;
        if (puVar11 < puVar10) goto LAB_1093af88c;
        if (puVar11 <= puVar10) goto LAB_1093af950;
LAB_1093af8a4:
        plVar9 = (long *)plVar16[1];
        if ((long *)plVar16[1] == (long *)0x0) {
          plVar4 = plVar16 + 1;
          goto LAB_1093af8f4;
        }
      }
      puVar10 = (undefined8 *)plVar16[5];
      if (puVar10 <= puVar13) {
        if (puVar10 != puVar13 && puVar10 < puVar13) goto LAB_1093af8a4;
        goto LAB_1093af950;
      }
LAB_1093af88c:
      plVar9 = (long *)*plVar16;
      plVar4 = plVar16;
    } while ((long *)*plVar16 != (long *)0x0);
  }
LAB_1093af8f4:
  plVar12 = (long *)0x38;
  __Znwm();
  plVar12[4] = (long)puVar11;
  plVar12[5] = (long)puVar13;
  plVar12[6] = 0;
  *plVar12 = 0;
  plVar12[1] = 0;
  plVar12[2] = (long)plVar16;
  *plVar4 = (long)plVar12;
  plVar9 = plVar12;
  if (*(long *)*param_4 != 0) {
    *param_4 = *(long *)*param_4;
    plVar9 = (long *)*plVar4;
  }
  puVar3 = (undefined8 *)param_4[1];
  func_0x000107c27d40(puVar3,plVar9);
  param_4[2] = param_4[2] + 1;
  lVar5 = *param_3;
  puVar7 = (undefined8 *)param_3[1];
  plVar16 = plVar12;
LAB_1093af950:
  plVar16[6] = (long)puVar15;
  puVar13 = (undefined8 *)(lVar5 + (long)param_1 * 0xc);
  puVar11 = (undefined8 *)(lVar5 + (long)param_2 * 0xc);
  uVar17 = *puVar13;
  uVar18 = *puVar11;
  uVar17 = CONCAT44(((float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar18 >> 0x20)) * 0.5,
                    ((float)uVar17 + (float)uVar18) * 0.5);
  fVar19 = (*(float *)(puVar13 + 1) + *(float *)(puVar11 + 1)) * 0.5;
  if (puVar7 < (undefined8 *)param_3[2]) {
    *puVar7 = uVar17;
    *(float *)(puVar7 + 1) = fVar19;
    lVar5 = (long)puVar7 + 0xc;
  }
  else {
    uVar8 = ((long)puVar7 - lVar5 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar8) {
      func_0x0001093aa314();
      if (puVar3 != (undefined8 *)0x0) {
        FUN_1093afa88(*puVar3);
        FUN_1093afa88(puVar3[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar3);
        return puVar3;
      }
      return (undefined8 *)0x0;
    }
    lVar6 = param_3[2] - lVar5 >> 2;
    uVar14 = lVar6 * 0x5555555555555556;
    if (uVar14 < uVar8 || uVar14 - uVar8 == 0) {
      uVar14 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar14 = 0x1555555555555555;
    }
    plVar4 = param_3;
    FUN_1093aa328();
    puVar13 = (undefined8 *)((long)plVar4 + ((long)puVar7 - lVar5));
    *puVar13 = uVar17;
    *(float *)(puVar13 + 1) = fVar19;
    lVar5 = (long)puVar13 + 0xc;
    puVar11 = (undefined8 *)*param_3;
    puVar7 = (undefined8 *)param_3[1];
    lVar6 = (long)puVar11 - (long)puVar7;
    puVar13 = (undefined8 *)((long)puVar13 + lVar6);
    puVar3 = puVar13;
    if (lVar6 != 0) {
      do {
        uVar17 = *puVar11;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar11 + 1);
        *puVar3 = uVar17;
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
      } while (puVar11 != puVar7);
      puVar11 = (undefined8 *)*param_3;
    }
    *param_3 = (long)puVar13;
    param_3[1] = lVar5;
    param_3[2] = (long)plVar4 + uVar14 * 0xc;
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_3[1] = lVar5;
  return puVar15;
}



/* Entry: 1093afa88; end: 1093afabf;  */

void FUN_1093afa88(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1093afa88(*param_1);
    FUN_1093afa88(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1093afac0; end: 1093afad3;  */

void FUN_1093afac0(void)

{
  FUN_1093a38f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093afad4; end: 1093afc57;  */

void FUN_1093afad4(long param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined2 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  
  iVar7 = *(int *)(param_1 + 0x1450);
  if (0 < iVar7) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      fVar10 = *(float *)(*param_2 + lVar9 * 4);
      fVar12 = -*(float *)(param_1 + 0x144c);
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if (fVar10 < *(float *)(param_1 + 0x144c)) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar10) && !NAN(fVar12)) {
          bVar2 = fVar10 < fVar12;
          bVar3 = fVar10 == fVar12;
          bVar4 = false;
        }
      }
      if (!bVar3 && bVar2 == bVar4) {
        pbVar1 = (byte *)(*(long *)(param_1 + 0x1458) + lVar8);
        fVar13 = (float)NEON_ucvtf((uint)*pbVar1);
        fVar10 = (float)NEON_ucvtf((uint)pbVar1[1]);
        fVar14 = (float)NEON_ucvtf((uint)pbVar1[2]);
        fVar12 = *(float *)(param_1 + 0x3c);
        uStack_66 = (undefined2)(int)(fVar13 * fVar12);
        uStack_64 = (undefined2)(int)(fVar10 * fVar12);
        uStack_62 = (undefined2)(int)(fVar12 * fVar14);
        lVar5 = param_1 + 0x18;
        FUN_1093a6378(lVar5,&uStack_66);
        uVar11 = NEON_smin(CONCAT44((int)(float)(int)(fVar10 - (float)((ulong)*(undefined8 *)
                                                                               (lVar5 + 0x1800) >>
                                                                      0x20)),
                                    (int)(float)(int)(fVar13 - (float)*(undefined8 *)
                                                                       (lVar5 + 0x1800))),
                           0x700000007,4);
        iVar7 = (int)(fVar14 - *(float *)(lVar5 + 0x1808));
        if (6 < iVar7) {
          iVar7 = 7;
        }
        fVar12 = -*(float *)(*param_2 + lVar9 * 4);
        fVar13 = *(float *)(param_1 + 0x1448);
        fVar10 = fVar13;
        if (fVar12 <= fVar13) {
          fVar10 = fVar12;
        }
        fVar12 = -fVar13;
        if (-fVar13 <= fVar10) {
          fVar12 = fVar10;
        }
        puVar6 = (undefined2 *)
                 (lVar5 + (long)(int)uVar11 * 0xc + (long)((int)((ulong)uVar11 >> 0x20) << 3) * 0xc
                 + (long)(iVar7 << 6) * 0xc);
        *puVar6 = (short)(int)((fVar12 / fVar13) * 4096.0);
        puVar6[1] = 1;
        func_0x0001093a647c(param_3,&uStack_66);
        iVar7 = *(int *)(param_1 + 0x1450);
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 3;
    } while (lVar9 < iVar7);
  }
  return;
}



/* Entry: 1093afc58; end: 1093b0577;  */

void FUN_1093afc58(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  undefined **ppuVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined2 uStack_20c;
  undefined2 uStack_20a;
  undefined8 uStack_208;
  undefined7 uStack_200;
  char cStack_1f9;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1c8 [296];
  undefined **ppuStack_a0;
  
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x4000;
  uVar24 = *(ulong *)(param_3 + 0x120);
  if (uVar24 == 0) {
    uVar24 = *(ulong *)(param_3 + 8);
    if ((uVar24 & 1) != 0) {
      uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
    }
    func_0x000109312090();
    *(ulong *)(param_3 + 0x120) = uVar24;
  }
  ppuVar7 = &PTR_PTR_1132d70f0;
  if (*(undefined ***)(param_3 + 0x128) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_3 + 0x128);
  }
  FUN_109335b18(auStack_1c8,0,ppuVar7);
  ppuVar7 = &PTR_PTR_1132d6de0;
  if (*(undefined ***)(param_3 + 0xd0) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_3 + 0xd0);
  }
  if (0 < *(int *)(param_3 + 0x38)) {
    func_0x0001053936e4(param_3 + 0x30);
  }
  FUN_1093a6e30(param_2,0);
  if (param_2 != 0) {
    ppuVar12 = &PTR_PTR_1132d6d90;
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuVar12 = ppuStack_a0;
    }
    if (*(int *)(ppuVar12 + 5) < 1) {
      puStack_270 = (undefined8 *)0x0;
      puStack_268 = (undefined8 *)0x0;
      puVar27 = (undefined8 *)0x0;
      puVar29 = (undefined8 *)0x0;
    }
    else {
      puStack_270 = (undefined8 *)0x0;
      puStack_268 = (undefined8 *)0x0;
      puVar27 = (undefined8 *)0x0;
      puVar22 = (undefined8 *)0x0;
      puVar29 = (undefined8 *)0x0;
      puVar28 = (undefined8 *)0x0;
      uVar23 = 0;
      do {
        uVar19 = uVar23;
        FUN_1093c96d0(&uStack_210,auStack_1c8);
        if (puVar27 < puVar22) {
          puVar27[5] = uStack_1e8;
          puVar27[4] = uStack_1f0;
          puVar27[7] = uStack_1d8;
          puVar27[6] = uStack_1e0;
          puVar27[1] = uStack_208;
          *puVar27 = CONCAT26(uStack_20a,CONCAT24(uStack_20c,CONCAT22(uStack_20e,uStack_210)));
          puVar27[3] = uStack_1f8;
          puVar27[2] = CONCAT17(cStack_1f9,uStack_200);
          puVar2 = puVar27;
        }
        else {
          lVar21 = (long)puVar27 - (long)puStack_268 >> 6;
          uVar18 = lVar21 + 1;
          if (uVar18 >> 0x3a != 0) {
            FUN_1093b0d14();
            goto LAB_1093b04cc;
          }
          uVar17 = (long)puVar22 - (long)puStack_268 >> 5;
          if (uVar17 <= uVar18) {
            uVar17 = uVar18;
          }
          if (0x7fffffffffffffbf < (ulong)((long)puVar22 - (long)puStack_268)) {
            uVar17 = 0x3ffffffffffffff;
          }
          FUN_1093b0d28();
          puVar2 = (undefined8 *)(uVar17 + ((long)puVar27 - (long)puStack_268));
          puVar2[5] = uStack_1e8;
          puVar2[4] = uStack_1f0;
          puVar2[7] = uStack_1d8;
          puVar2[6] = uStack_1e0;
          puVar2[1] = uStack_208;
          *puVar2 = CONCAT26(uStack_20a,CONCAT24(uStack_20c,CONCAT22(uStack_20e,uStack_210)));
          puVar2[3] = uStack_1f8;
          puVar2[2] = CONCAT17(cStack_1f9,uStack_200);
          puVar25 = puVar2 + lVar21 * -8;
          puVar8 = puVar25;
          for (puVar22 = puStack_268; puVar22 != puVar27; puVar22 = puVar22 + 8) {
            uVar33 = puVar22[1];
            uVar44 = *puVar22;
            uVar34 = puVar22[3];
            uVar31 = puVar22[2];
            uVar35 = puVar22[4];
            uVar40 = puVar22[7];
            uVar39 = puVar22[6];
            puVar8[5] = puVar22[5];
            puVar8[4] = uVar35;
            puVar8[7] = uVar40;
            puVar8[6] = uVar39;
            puVar8[1] = uVar33;
            *puVar8 = uVar44;
            puVar8[3] = uVar34;
            puVar8[2] = uVar31;
            puVar8 = puVar8 + 8;
          }
          puVar22 = (undefined8 *)(uVar17 + uVar19 * 0x40);
          bVar5 = puStack_268 != (undefined8 *)0x0;
          puStack_268 = puVar25;
          if (bVar5) {
            __ZdlPv();
          }
        }
        puVar27 = puVar2 + 8;
        ppuVar12 = ppuVar7;
        FUN_1093c93e0(&uStack_210,auStack_1c8,ppuVar7,uVar23);
        if (puVar29 < puVar28) {
          puVar29[5] = uStack_1e8;
          puVar29[4] = uStack_1f0;
          puVar29[7] = uStack_1d8;
          puVar29[6] = uStack_1e0;
          puVar29[1] = uStack_208;
          *puVar29 = CONCAT26(uStack_20a,CONCAT24(uStack_20c,CONCAT22(uStack_20e,uStack_210)));
          puVar29[3] = uStack_1f8;
          puVar29[2] = CONCAT17(cStack_1f9,uStack_200);
          puVar2 = puVar29;
        }
        else {
          lVar21 = (long)puVar29 - (long)puStack_270 >> 6;
          uVar19 = lVar21 + 1;
          if (uVar19 >> 0x3a != 0) {
            FUN_1093b0d14();
LAB_1093b04cc:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1093b04d0);
            (*pcVar9)();
          }
          uVar18 = (long)puVar28 - (long)puStack_270 >> 5;
          if (uVar18 <= uVar19) {
            uVar18 = uVar19;
          }
          if (0x7fffffffffffffbf < (ulong)((long)puVar28 - (long)puStack_270)) {
            uVar18 = 0x3ffffffffffffff;
          }
          FUN_1093b0d28();
          puVar2 = (undefined8 *)(uVar18 + ((long)puVar29 - (long)puStack_270));
          puVar2[5] = uStack_1e8;
          puVar2[4] = uStack_1f0;
          puVar2[7] = uStack_1d8;
          puVar2[6] = uStack_1e0;
          puVar2[1] = uStack_208;
          *puVar2 = CONCAT26(uStack_20a,CONCAT24(uStack_20c,CONCAT22(uStack_20e,uStack_210)));
          puVar2[3] = uStack_1f8;
          puVar2[2] = CONCAT17(cStack_1f9,uStack_200);
          puVar25 = puVar2 + lVar21 * -8;
          puVar8 = puVar25;
          for (puVar28 = puStack_270; puVar28 != puVar29; puVar28 = puVar28 + 8) {
            uVar33 = puVar28[1];
            uVar44 = *puVar28;
            uVar34 = puVar28[3];
            uVar31 = puVar28[2];
            uVar35 = puVar28[4];
            uVar40 = puVar28[7];
            uVar39 = puVar28[6];
            puVar8[5] = puVar28[5];
            puVar8[4] = uVar35;
            puVar8[7] = uVar40;
            puVar8[6] = uVar39;
            puVar8[1] = uVar33;
            *puVar8 = uVar44;
            puVar8[3] = uVar34;
            puVar8[2] = uVar31;
            puVar8 = puVar8 + 8;
          }
          puVar28 = (undefined8 *)(uVar18 + (long)ppuVar12 * 0x40);
          bVar5 = puStack_270 != (undefined8 *)0x0;
          puStack_270 = puVar25;
          if (bVar5) {
            __ZdlPv();
          }
        }
        puVar29 = puVar2 + 8;
        uVar1 = (int)uVar23 + 1;
        uVar23 = (ulong)uVar1;
        ppuVar12 = &PTR_PTR_1132d6d90;
        if (ppuStack_a0 != (undefined **)0x0) {
          ppuVar12 = ppuStack_a0;
        }
      } while ((int)uVar1 < *(int *)(ppuVar12 + 5));
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x8000;
    uVar23 = *(ulong *)(param_3 + 0x128);
    if (uVar23 == 0) {
      uVar23 = *(ulong *)(param_3 + 8);
      if ((uVar23 & 1) != 0) {
        uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
      }
      func_0x00010933b824();
      *(ulong *)(param_3 + 0x128) = uVar23;
    }
    if (0 < *(int *)(uVar23 + 0xf8)) {
      func_0x0001053936e4(uVar23 + 0xf0);
    }
    if (0 < *(int *)(uVar23 + 0xe0)) {
      func_0x0001053936e4(uVar23 + 0xd8);
    }
    puVar28 = *(undefined8 **)(param_2 + 0x18);
    for (puVar22 = *(undefined8 **)(param_2 + 0x10); puVar22 != puVar28;
        puVar22 = (undefined8 *)((long)puVar22 + 0xc)) {
      fVar36 = (float)*puVar22 + -0.5;
      fVar37 = (float)((ulong)*puVar22 >> 0x20) + -0.5;
      fVar38 = *(float *)(puVar22 + 1) + -0.5;
      fVar30 = *(float *)(param_1 + 0x1554);
      uStack_210 = (undefined2)(int)(fVar36 * fVar30);
      uStack_20e = (undefined2)(int)(fVar37 * fVar30);
      uStack_20c = (undefined2)(int)(fVar38 * fVar30);
      lVar21 = param_1 + 0x1510;
      FUN_1093b0d5c(lVar21,&uStack_210);
      uVar44 = *(undefined8 *)(lVar21 + 0x4000);
      iVar13 = (int)(fVar38 - *(float *)(lVar21 + 0x4008));
      if (6 < iVar13) {
        iVar13 = 7;
      }
      uVar41 = *(undefined8 *)(param_1 + 0x1498);
      uVar39 = *(undefined8 *)(param_1 + 0x1490);
      uVar34 = *(undefined8 *)(param_1 + 0x14a8);
      uVar33 = *(undefined8 *)(param_1 + 0x14a0);
      uVar42 = *(undefined8 *)(param_1 + 0x14b8);
      uVar40 = *(undefined8 *)(param_1 + 0x14b0);
      uVar35 = *(undefined8 *)(param_1 + 0x14c8);
      uVar31 = *(undefined8 *)(param_1 + 0x14c0);
      lVar14 = uVar23 + 0xf0;
      func_0x000107c303b0(lVar14,0x109341730);
      fVar30 = (float)uVar31 +
               (float)uVar39 * fVar36 + (float)uVar33 * fVar37 + (float)uVar40 * fVar38;
      fVar32 = (float)((ulong)uVar31 >> 0x20) +
               (float)((ulong)uVar39 >> 0x20) * fVar36 + (float)((ulong)uVar33 >> 0x20) * fVar37 +
               (float)((ulong)uVar40 >> 0x20) * fVar38;
      fVar38 = (float)uVar35 +
               (float)uVar41 * fVar36 + (float)uVar34 * fVar37 + (float)uVar42 * fVar38;
      *(float *)(lVar14 + 0x20) = fVar38;
      *(ulong *)(lVar14 + 0x18) = CONCAT44(fVar32,fVar30);
      *(uint *)(lVar14 + 0x10) = *(uint *)(lVar14 + 0x10) | 7;
      iVar15 = *(int *)(uVar24 + 0x20);
      iVar11 = *(int *)(uVar24 + 0x24);
      if (iVar15 == iVar11) {
        FUN_109311970(uVar24 + 0x20,iVar11,iVar11 + 1);
        iVar15 = *(int *)(uVar24 + 0x20);
        iVar11 = *(int *)(uVar24 + 0x24);
      }
      lVar14 = *(long *)(uVar24 + 0x28);
      iVar16 = iVar15 + 1;
      *(int *)(uVar24 + 0x20) = iVar16;
      *(float *)(lVar14 + (long)iVar15 * 4) = fVar30;
      if (iVar16 == iVar11) {
        FUN_109311970(uVar24 + 0x20,iVar11,iVar11 + 1);
        lVar14 = *(long *)(uVar24 + 0x28);
        iVar16 = *(int *)(uVar24 + 0x20);
        iVar11 = *(int *)(uVar24 + 0x24);
      }
      iVar15 = iVar16 + 1;
      *(int *)(uVar24 + 0x20) = iVar15;
      *(float *)(lVar14 + (long)iVar16 * 4) = fVar32;
      if (iVar15 == iVar11) {
        FUN_109311970(uVar24 + 0x20,iVar11,iVar11 + 1);
        iVar15 = *(int *)(uVar24 + 0x20);
        lVar14 = *(long *)(uVar24 + 0x28);
      }
      uVar44 = NEON_smin(CONCAT44((int)(float)(int)(fVar37 - (float)((ulong)uVar44 >> 0x20)),
                                  (int)(float)(int)(fVar36 - (float)uVar44)),0x700000007,4);
      iVar11 = iVar15 + 1;
      *(int *)(uVar24 + 0x20) = iVar11;
      *(float *)(lVar14 + (long)iVar15 * 4) = fVar38;
      iVar15 = 3;
      do {
        iVar16 = iVar11;
        if (iVar11 == *(int *)(uVar24 + 0x24)) {
          FUN_109311970(uVar24 + 0x20,iVar11,iVar11 + 1);
          iVar16 = *(int *)(uVar24 + 0x20);
          lVar14 = *(long *)(uVar24 + 0x28);
        }
        iVar11 = iVar16 + 1;
        *(int *)(uVar24 + 0x20) = iVar11;
        *(undefined4 *)(lVar14 + (long)iVar16 * 4) = 0;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      lVar14 = uVar23 + 0xd8;
      func_0x000107c303b0(lVar14,0x10933b778);
      lVar26 = 0;
      lVar3 = (long)(int)uVar44 * 0x20 + (long)(iVar13 << 6) * 0x20 +
              (long)((int)((ulong)uVar44 >> 0x20) << 3) * 0x20;
      do {
        lVar4 = lVar21 + lVar3 + lVar26 * 4;
        if (0.0 < *(float *)(lVar4 + 0x10)) {
          lVar10 = lVar14 + 0x10;
          func_0x000107c303b0(lVar10,0x10933b554);
          *(uint *)(lVar10 + 0x18) = (uint)*(ushort *)(lVar21 + lVar3 + lVar26 * 2 + 4);
          *(undefined4 *)(lVar10 + 0x1c) = *(undefined4 *)(lVar4 + 0x10);
          *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 3;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 != 4);
      lVar14 = 0;
      iVar13 = *(int *)(uVar24 + 0x20);
      do {
        uVar43 = *(undefined4 *)(lVar21 + lVar3 + 0x10 + lVar14);
        iVar15 = iVar13;
        if (iVar13 == *(int *)(uVar24 + 0x24)) {
          FUN_109311970(uVar24 + 0x20,iVar13,iVar13 + 1);
          iVar15 = *(int *)(uVar24 + 0x20);
        }
        iVar13 = iVar15 + 1;
        *(int *)(uVar24 + 0x20) = iVar13;
        *(undefined4 *)(*(long *)(uVar24 + 0x28) + (long)iVar15 * 4) = uVar43;
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0x10);
      lVar14 = 0;
      lVar21 = lVar21 + lVar3 + 4;
      do {
        iVar15 = *(int *)(*(long *)(param_1 + 0x1470) + (ulong)*(ushort *)(lVar21 + lVar14) * 4);
        if (iVar15 == -1) {
          FUN_10937e740(&uStack_210,&UNK_10f568fdb);
          FUN_109388c6c(1,&UNK_10f568f53,&UNK_10f568fcf,0x1c3,&uStack_210);
          if (cStack_1f9 < '\0') {
            __ZdlPv(CONCAT26(uStack_20a,CONCAT24(uStack_20c,CONCAT22(uStack_20e,uStack_210))));
          }
          iVar15 = *(int *)(*(long *)(param_1 + 0x1470) + (ulong)*(ushort *)(lVar21 + lVar14) * 4);
          iVar13 = *(int *)(uVar24 + 0x20);
        }
        iVar11 = iVar13;
        if (iVar13 == *(int *)(uVar24 + 0x24)) {
          FUN_109311970(uVar24 + 0x20,iVar13,iVar13 + 1);
          iVar11 = *(int *)(uVar24 + 0x20);
        }
        iVar13 = iVar11 + 1;
        *(int *)(uVar24 + 0x20) = iVar13;
        *(float *)(*(long *)(uVar24 + 0x28) + (long)iVar11 * 4) = (float)iVar15;
        lVar14 = lVar14 + 2;
      } while (lVar14 != 8);
    }
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_218 = 0;
    FUN_1093b137c(&lStack_228,puStack_268,puVar27,(long)puVar27 - (long)puStack_268 >> 6);
    ppuVar7 = &PTR_PTR_1132d70f0;
    if (*(undefined ***)(param_3 + 0x128) != (undefined **)0x0) {
      ppuVar7 = *(undefined ***)(param_3 + 0x128);
    }
    FUN_1093c9afc(&lStack_228,ppuVar7,0,param_3);
    if (lStack_228 != 0) {
      lStack_220 = lStack_228;
      __ZdlPv();
    }
    uVar23 = (ulong)*(uint *)(param_3 + 0x38);
    if (0 < (int)*(uint *)(param_3 + 0x38)) {
      uVar19 = *(ulong *)(param_3 + 0x30);
      puVar20 = (ulong *)(uVar19 + 7);
      puVar28 = *(undefined8 **)(uVar24 + 0x28);
      lVar21 = 0x200000000;
      puVar22 = puVar28;
      do {
        puVar6 = (ulong *)(param_3 + 0x30);
        if ((uVar19 & 1) != 0) {
          puVar6 = puVar20;
        }
        uVar43 = *(undefined4 *)(*puVar6 + 0x20);
        *puVar22 = *(undefined8 *)(*puVar6 + 0x18);
        *(undefined4 *)((long)puVar28 + (lVar21 >> 0x1e)) = uVar43;
        lVar21 = lVar21 + 0xe00000000;
        puVar20 = puVar20 + 1;
        uVar23 = uVar23 - 1;
        puVar22 = puVar22 + 7;
      } while (uVar23 != 0);
    }
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0;
    FUN_1093b137c(&lStack_240,puStack_270,puVar29,(long)puVar29 - (long)puStack_270 >> 6);
    ppuVar7 = &PTR_PTR_1132d70f0;
    if (*(undefined ***)(param_3 + 0x128) != (undefined **)0x0) {
      ppuVar7 = *(undefined ***)(param_3 + 0x128);
    }
    FUN_1093c9afc(&lStack_240,ppuVar7,0,param_3);
    if (lStack_240 != 0) {
      lStack_238 = lStack_240;
      __ZdlPv();
    }
    *(undefined4 *)(param_3 + 0x15c) = 4;
    *(undefined4 *)(param_3 + 0x168) = 4;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x48000000;
    if (puStack_270 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    if (puStack_268 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  FUN_109335e08(auStack_1c8);
  return;
}



/* Entry: 1093b0578; end: 1093b05e3;  */

long FUN_1093b0578(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  FUN_1093b0a78(param_1);
  return param_1;
}



/* Entry: 1093b05e4; end: 1093b069f;  */

void FUN_1093b05e4(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1093b08d0();
      pcStack_68 = FUN_1093b06a0;
      lVar4 = *param_1;
      plVar10 = (long *)param_1[1];
      lVar3 = (long)plVar10 - lVar4;
      bVar2 = param_2 < (ulong)((lVar3 >> 3) * -0x5555555555555555);
      uVar5 = param_2 + (lVar3 >> 3) * 0x5555555555555555;
      puStack_70 = &stack0xfffffffffffffff0;
      if (bVar2 || uVar5 == 0) {
        if (bVar2) {
          plVar9 = (long *)(lVar4 + param_2 * 0x18);
          while (plVar1 = plVar10, plVar1 != plVar9) {
            plVar10 = plVar1 + -3;
            if (*plVar10 != 0) {
              plVar1[-2] = *plVar10;
              __ZdlPv();
            }
          }
          param_1[1] = (long)plVar9;
        }
      }
      else if ((ulong)((param_1[2] - (long)plVar10 >> 3) * -0x5555555555555555) < uVar5) {
        if (0xaaaaaaaaaaaaaaa < param_2) {
          plVar9 = param_1;
          FUN_1093b08d0();
          lVar4 = *plVar9;
          if ((ulong)((plVar9[2] - lVar4 >> 5) * -0x7fc01ff007fc01ff) < 0x1000) {
            pcStack_d8 = FUN_1093b0838;
            lVar6 = plVar9[1];
            lVar8 = 0x4020000;
            plStack_108 = plVar9;
            lStack_100 = lVar3;
            uStack_f8 = uVar5;
            plStack_f0 = plVar10;
            plStack_e8 = param_1;
            ppuStack_e0 = &puStack_70;
            __Znwm();
            lStack_120 = lVar8 + (lVar6 - lVar4);
            lStack_110 = lVar8 + 0x4020000;
            lStack_128 = lVar8;
            lStack_118 = lStack_120;
            FUN_1093b099c(plVar9,&lStack_128);
            if (lStack_128 != 0) {
              __ZdlPv();
            }
          }
          return;
        }
        lVar4 = param_1[2] - lVar4 >> 3;
        uVar7 = lVar4 * 0x5555555555555556;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
          uVar7 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_a8 = param_1;
        FUN_1093b08e4();
        lVar3 = uVar7 + lVar3;
        lVar8 = ((uVar5 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar3,lVar8);
        lVar4 = lVar3 - (param_1[1] - *param_1);
        _memcpy(lVar4);
        lStack_c8 = *param_1;
        *param_1 = lVar4;
        param_1[1] = lVar3 + lVar8;
        lStack_b0 = param_1[2];
        param_1[2] = uVar7 + param_2 * 0x18;
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x0001093b0928(&lStack_c8);
      }
      else {
        uVar5 = (uVar5 * 0x18 - 0x18) / 0x18;
        _bzero(plVar10,uVar5 * 0x18 + 0x18);
        param_1[1] = (long)(plVar10 + uVar5 * 3 + 3);
      }
      return;
    }
    lVar4 = param_1[1];
    uVar5 = param_2;
    plStack_38 = param_1;
    FUN_1093b08e4();
    lVar3 = param_2 + (lVar4 - lVar3);
    lVar4 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lStack_58 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar5 * 0x18;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x0001093b0928(&lStack_58);
  }
  return;
}



/* Entry: 1093b06a0; end: 1093b0837;  */

void FUN_1093b06a0(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar3 = *param_1;
  plVar10 = (long *)param_1[1];
  lVar9 = (long)plVar10 - lVar3;
  bVar2 = param_2 < (ulong)((lVar9 >> 3) * -0x5555555555555555);
  uVar4 = param_2 + (lVar9 >> 3) * 0x5555555555555555;
  if (bVar2 || uVar4 == 0) {
    if (bVar2) {
      plVar8 = (long *)(lVar3 + param_2 * 0x18);
      while (plVar1 = plVar10, plVar1 != plVar8) {
        plVar10 = plVar1 + -3;
        if (*plVar10 != 0) {
          plVar1[-2] = *plVar10;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar8;
    }
  }
  else if ((ulong)((param_1[2] - (long)plVar10 >> 3) * -0x5555555555555555) < uVar4) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      plVar8 = param_1;
      FUN_1093b08d0();
      lVar3 = *plVar8;
      if ((ulong)((plVar8[2] - lVar3 >> 5) * -0x7fc01ff007fc01ff) < 0x1000) {
        pcStack_78 = FUN_1093b0838;
        lVar5 = plVar8[1];
        lVar7 = 0x4020000;
        plStack_a8 = plVar8;
        lStack_a0 = lVar9;
        uStack_98 = uVar4;
        plStack_90 = plVar10;
        plStack_88 = param_1;
        puStack_80 = &stack0xfffffffffffffff0;
        __Znwm();
        lStack_c0 = lVar7 + (lVar5 - lVar3);
        lStack_b0 = lVar7 + 0x4020000;
        lStack_c8 = lVar7;
        lStack_b8 = lStack_c0;
        FUN_1093b099c(plVar8,&lStack_c8);
        if (lStack_c8 != 0) {
          __ZdlPv();
        }
      }
      return;
    }
    lVar3 = param_1[2] - lVar3 >> 3;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar6 < param_2 || uVar6 - param_2 == 0) {
      uVar6 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    FUN_1093b08e4();
    lVar9 = uVar6 + lVar9;
    lVar7 = ((uVar4 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar9,lVar7);
    lVar3 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_68 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar9 + lVar7;
    lStack_50 = param_1[2];
    param_1[2] = uVar6 + param_2 * 0x18;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x0001093b0928(&lStack_68);
  }
  else {
    uVar4 = (uVar4 * 0x18 - 0x18) / 0x18;
    _bzero(plVar10,uVar4 * 0x18 + 0x18);
    param_1[1] = (long)(plVar10 + uVar4 * 3 + 3);
  }
  return;
}



/* Entry: 1093b0838; end: 1093b08cf;  */

void FUN_1093b0838(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 5) * -0x7fc01ff007fc01ff) < 0x1000) {
    lVar3 = param_1[1];
    lVar1 = 0x4020000;
    plStack_38 = param_1;
    __Znwm();
    lStack_50 = lVar1 + (lVar3 - lVar2);
    lStack_40 = lVar1 + 0x4020000;
    lStack_58 = lVar1;
    lStack_48 = lStack_50;
    FUN_1093b099c(param_1,&lStack_58);
    if (lStack_58 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1093b08d0; end: 1093b08e3;  */

undefined1  [16] FUN_1093b08d0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar2) {
    func_0x000104c4f740();
    plVar1 = (long *)plVar2[1];
    plVar5 = (long *)plVar2[2];
    while (plVar4 = plVar5, plVar4 != plVar1) {
      plVar5 = plVar4 + -3;
      lVar3 = *plVar5;
      plVar2[2] = (long)plVar5;
      if (lVar3 != 0) {
        plVar4[-2] = lVar3;
        __ZdlPv();
        plVar5 = (long *)plVar2[2];
      }
    }
    if (*plVar2 != 0) {
      __ZdlPv();
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar2;
    return auVar7;
  }
  lVar3 = (long)plVar2 * 0x18;
  __Znwm(lVar3);
  auVar6._8_8_ = plVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1093b08e4; end: 1093b0987;  */

undefined1  [16] FUN_1093b08e4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000104c4f740();
    plVar1 = (long *)param_1[1];
    plVar4 = (long *)param_1[2];
    while (plVar3 = plVar4, plVar3 != plVar1) {
      plVar4 = plVar3 + -3;
      lVar2 = *plVar4;
      param_1[2] = (long)plVar4;
      if (lVar2 != 0) {
        plVar3[-2] = lVar2;
        __ZdlPv();
        plVar4 = (long *)param_1[2];
      }
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  lVar2 = (long)param_1 * 0x18;
  __Znwm(lVar2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 1093b0988; end: 1093b099b;  */

void FUN_1093b0988(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar6 = *plVar5;
  lVar3 = plVar5[1];
  lVar7 = param_2[1] + (lVar6 - lVar3);
  lVar8 = lVar7;
  if (lVar3 != lVar6) {
    do {
      lVar9 = 0;
      do {
        puVar1 = (undefined4 *)(lVar8 + lVar9);
        puVar2 = (undefined4 *)(lVar6 + lVar9);
        *puVar1 = *puVar2;
        *(undefined8 *)(puVar1 + 1) = *(undefined8 *)(puVar2 + 1);
        uVar10 = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(puVar1 + 4) = uVar10;
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != 0x4000);
      uVar10 = *(undefined8 *)(lVar6 + 0x4000);
      *(undefined4 *)(lVar8 + 0x4008) = *(undefined4 *)(lVar6 + 0x4008);
      *(undefined8 *)(lVar8 + 0x4000) = uVar10;
      uVar4 = *(undefined4 *)(lVar6 + 0x400c);
      *(undefined2 *)(lVar8 + 0x4010) = *(undefined2 *)(lVar6 + 0x4010);
      *(undefined4 *)(lVar8 + 0x400c) = uVar4;
      *(undefined8 *)(lVar8 + 0x4014) = *(undefined8 *)(lVar6 + 0x4014);
      lVar6 = lVar6 + 0x4020;
      lVar8 = lVar8 + 0x4020;
    } while (lVar6 != lVar3);
    lVar6 = *plVar5;
  }
  param_2[1] = lVar7;
  *plVar5 = lVar7;
  plVar5[1] = lVar6;
  param_2[1] = lVar6;
  lVar7 = plVar5[1];
  plVar5[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = plVar5[2];
  plVar5[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1093b099c; end: 1093b0a77;  */

void FUN_1093b099c(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar6 = param_2[1] + (lVar5 - lVar3);
  lVar7 = lVar6;
  if (lVar3 != lVar5) {
    do {
      lVar8 = 0;
      do {
        puVar1 = (undefined4 *)(lVar7 + lVar8);
        puVar2 = (undefined4 *)(lVar5 + lVar8);
        *puVar1 = *puVar2;
        *(undefined8 *)(puVar1 + 1) = *(undefined8 *)(puVar2 + 1);
        uVar9 = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(puVar1 + 4) = uVar9;
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != 0x4000);
      uVar9 = *(undefined8 *)(lVar5 + 0x4000);
      *(undefined4 *)(lVar7 + 0x4008) = *(undefined4 *)(lVar5 + 0x4008);
      *(undefined8 *)(lVar7 + 0x4000) = uVar9;
      uVar4 = *(undefined4 *)(lVar5 + 0x400c);
      *(undefined2 *)(lVar7 + 0x4010) = *(undefined2 *)(lVar5 + 0x4010);
      *(undefined4 *)(lVar7 + 0x400c) = uVar4;
      *(undefined8 *)(lVar7 + 0x4014) = *(undefined8 *)(lVar5 + 0x4014);
      lVar5 = lVar5 + 0x4020;
      lVar7 = lVar7 + 0x4020;
    } while (lVar5 != lVar3);
    lVar5 = *param_1;
  }
  param_2[1] = lVar6;
  *param_1 = lVar6;
  param_1[1] = lVar5;
  param_2[1] = lVar5;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1093b0a78; end: 1093b0aa7;  */

void FUN_1093b0a78(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1093b0aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 1093b0aa8; end: 1093b0ccb;  */

void FUN_1093b0aa8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1093b0ccc; end: 1093b0d13;  */

long * FUN_1093b0ccc(long *param_1)

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



/* Entry: 1093b0d14; end: 1093b0d27;  */

undefined1  [16] FUN_1093b0d14(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong unaff_x24;
  float fVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lStack_e0;
  undefined4 *puStack_d8;
  undefined4 *puStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar5 >> 0x3a == 0) {
    lVar6 = (long)plVar5 << 6;
    __Znwm(lVar6);
    auVar26._8_8_ = plVar5;
    auVar26._0_8_ = lVar6;
    return auVar26;
  }
  func_0x000104c4f740();
  plVar7 = &lStack_e0;
  uVar20 = (long)(int)(short)*param_2 * 0x466f45d +
           (long)(int)*(short *)((long)param_2 + 2) * 0x12740a5 +
           (long)(int)*(short *)((long)param_2 + 4) * 0x4f9ffb7;
  uVar18 = plVar5[0xf];
  plVar9 = param_2;
  if (uVar18 != 0) {
    uVar8 = uVar18 - 1;
    if ((uVar18 & uVar8) == 0) {
      unaff_x24 = uVar20 & uVar8;
    }
    else {
      unaff_x24 = uVar20;
      if (uVar18 <= uVar20) {
        uVar16 = 0;
        if (uVar18 != 0) {
          uVar16 = uVar20 / uVar18;
        }
        unaff_x24 = uVar20 - uVar16 * uVar18;
      }
    }
    puVar15 = *(undefined8 **)(plVar5[0xe] + unaff_x24 * 8);
    if (puVar15 != (undefined8 *)0x0) {
      for (plVar17 = (long *)*puVar15; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        uVar16 = plVar17[1];
        if (uVar16 == uVar20) {
          if ((((short)plVar17[2] == (short)*param_2) &&
              (*(short *)((long)plVar17 + 0x12) == *(short *)((long)param_2 + 2))) &&
             (plVar14 = plVar5, *(short *)((long)plVar17 + 0x14) == *(short *)((long)param_2 + 4)))
          goto LAB_1093b0f8c;
        }
        else {
          if ((uVar18 & uVar8) == 0) {
            uVar16 = uVar16 & uVar8;
          }
          else if (uVar18 <= uVar16) {
            uVar3 = 0;
            if (uVar18 != 0) {
              uVar3 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar3 * uVar18;
          }
          if (uVar16 != unaff_x24) break;
        }
      }
    }
  }
  plVar17 = (long *)0x20;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = uVar20;
  *(int *)(plVar17 + 2) = (int)*param_2;
  *(short *)((long)plVar17 + 0x14) = *(short *)((long)param_2 + 4);
  plVar17[3] = 0;
  if ((uVar18 == 0) ||
     (plVar14 = plVar17, *(float *)(plVar5 + 0x12) * (float)uVar18 < (float)(plVar5[0x11] + 1))) {
    uVar8 = 1;
    if (2 < uVar18) {
      uVar8 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    plVar9 = (long *)(uVar8 | uVar18 << 1);
    plVar14 = (long *)(long)((float)(plVar5[0x11] + 1) / *(float *)(plVar5 + 0x12));
    if (plVar9 <= plVar14) {
      plVar9 = plVar14;
    }
    plVar14 = plVar5 + 0xe;
    func_0x0001093b0afc();
    uVar18 = plVar5[0xf];
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x24 = uVar18 - 1 & uVar20;
    }
    else {
      unaff_x24 = uVar20;
      if (uVar18 <= uVar20) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar20 / uVar18;
        }
        unaff_x24 = uVar20 - uVar8 * uVar18;
      }
    }
  }
  lVar6 = plVar5[0xe];
  plVar10 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar5 + 0x10;
    *plVar17 = *plVar10;
    *plVar10 = (long)plVar17;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar10;
    if (*plVar17 != 0) {
      uVar20 = *(ulong *)(*plVar17 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar20 = uVar20 & uVar18 - 1;
      }
      else if (uVar18 <= uVar20) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar20 / uVar18;
        }
        uVar20 = uVar20 - uVar8 * uVar18;
      }
      plVar10 = (long *)(plVar5[0xe] + uVar20 * 8);
      goto LAB_1093b0f7c;
    }
  }
  else {
    *plVar17 = *plVar10;
LAB_1093b0f7c:
    *plVar10 = (long)plVar17;
  }
  plVar5[0x11] = plVar5[0x11] + 1;
LAB_1093b0f8c:
  if (plVar17[3] == 0) {
    if (plVar5[0x17] == plVar5[0x16]) {
      lVar6 = plVar5[0x14];
      puVar19 = *(undefined4 **)(lVar6 + -0x10);
      puVar11 = *(undefined4 **)(lVar6 + -8);
      if (puVar19 == puVar11) {
        if (lVar6 == plVar5[0x15]) {
          lStack_e0 = 0;
          uStack_88 = 0;
          lStack_c8 = 0;
          puStack_d0 = (undefined4 *)0x0;
          uStack_b8 = 0;
          plStack_c0 = (long *)0x0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_90 = 0;
          param_4 = (long *)0x2;
          FUN_1099a9f0c(&lStack_e0,&UNK_10f568e28,0x70,2,FUN_1099aa768,0);
          param_3 = (long *)0x46;
          FUN_1092b4db8(puStack_d8 + 0x1d50,&UNK_10f568ef0);
          FUN_1099ab3b0(&lStack_e0);
          FUN_1093b05e4(plVar5 + 0x13,(plVar5[0x15] - plVar5[0x13] >> 3) * 0x5555555555555556);
          lVar6 = plVar5[0x14];
        }
        plVar9 = (long *)((lVar6 - plVar5[0x13] >> 3) * -0x5555555555555555 + 1);
        FUN_1093b06a0(plVar5 + 0x13);
        plVar14 = (long *)(plVar5[0x14] + -0x18);
        FUN_1093b0838();
        lVar6 = plVar5[0x14];
        puVar19 = *(undefined4 **)(lVar6 + -0x10);
        puVar11 = *(undefined4 **)(lVar6 + -8);
      }
      if (puVar19 < puVar11) {
        plVar7 = (long *)0x4020;
        _bzero(puVar19,0x4020);
        lVar12 = 0x4000;
        puVar11 = puVar19;
        do {
          *puVar11 = 0x1001;
          *(undefined8 *)(puVar11 + 1) = 0;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          puVar11 = puVar11 + 8;
          lVar12 = lVar12 + -0x20;
        } while (lVar12 != 0);
        *(undefined8 *)(puVar19 + 0x1005) = 0x4e6e6b2800000000;
        puVar19 = puVar19 + 0x1008;
      }
      else {
        plVar10 = (long *)(lVar6 + -0x18);
        lVar12 = (long)puVar19 - *plVar10;
        uVar18 = (lVar12 >> 5) * -0x7fc01ff007fc01ff + 1;
        if (0x3fe00ff803fe0 < uVar18) {
          FUN_1093b0988();
LAB_1093b1354:
          func_0x000104c4f740();
          FUN_1099ab3b0(&lStack_e0);
          __Unwind_Resume();
          plVar5 = plVar14;
          plVar7 = plVar9;
          if (param_4 != (long *)0x0) {
            if ((ulong)param_4 >> 0x3a != 0) {
              FUN_1093b0d14();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b1400);
              (*pcVar4)();
            }
            FUN_1093b0d28();
            *plVar14 = (long)param_4;
            plVar14[1] = (long)param_4;
            plVar14[2] = (long)(param_4 + (long)plVar7 * 8);
            plVar5 = param_4;
            for (; plVar9 != param_3; plVar9 = plVar9 + 8) {
              lVar12 = plVar9[1];
              lVar6 = *plVar9;
              lVar22 = plVar9[3];
              lVar13 = plVar9[2];
              lVar23 = plVar9[4];
              lVar25 = plVar9[7];
              lVar24 = plVar9[6];
              param_4[5] = plVar9[5];
              param_4[4] = lVar23;
              param_4[7] = lVar25;
              param_4[6] = lVar24;
              param_4[1] = lVar12;
              *param_4 = lVar6;
              param_4[3] = lVar22;
              param_4[2] = lVar13;
              plVar5 = plVar5 + 8;
              param_4 = param_4 + 8;
            }
            plVar14[1] = (long)plVar5;
          }
          auVar28._8_8_ = plVar7;
          auVar28._0_8_ = plVar5;
          return auVar28;
        }
        lVar13 = (long)puVar11 - *plVar10 >> 5;
        uVar20 = lVar13 * 0x7fc01ff007fc02;
        if (uVar20 < uVar18 || uVar20 - uVar18 == 0) {
          uVar20 = uVar18;
        }
        if (0x1ff007fc01fef < (ulong)(lVar13 * -0x7fc01ff007fc01ff)) {
          uVar20 = 0x3fe00ff803fe0;
        }
        plStack_c0 = plVar10;
        if (uVar20 == 0) {
          lVar13 = 0;
        }
        else {
          if (0x3fe00ff803fe0 < uVar20) goto LAB_1093b1354;
          lVar13 = uVar20 * 0x4020;
          __Znwm();
        }
        puVar11 = (undefined4 *)(lVar13 + lVar12);
        lStack_c8 = lVar13 + uVar20 * 0x4020;
        lStack_e0 = lVar13;
        puStack_d8 = puVar11;
        _bzero(puVar11,0x4020);
        lVar12 = 0x4000;
        puVar19 = puVar11;
        do {
          *puVar19 = 0x1001;
          *(undefined8 *)(puVar19 + 1) = 0;
          *(undefined8 *)(puVar19 + 4) = 0;
          *(undefined8 *)(puVar19 + 6) = 0;
          puVar19 = puVar19 + 8;
          lVar12 = lVar12 + -0x20;
        } while (lVar12 != 0);
        *(undefined8 *)(puVar11 + 0x1005) = 0x4e6e6b2800000000;
        puStack_d0 = puVar11 + 0x1008;
        FUN_1093b099c(plVar10,&lStack_e0);
        puVar19 = *(undefined4 **)(lVar6 + -0x10);
        if (lStack_e0 != 0) {
          __ZdlPv();
        }
      }
      *(undefined4 **)(lVar6 + -0x10) = puVar19;
      plVar5[0x19] = plVar5[0x19] + 1;
      puVar19 = puVar19 + -0x1008;
    }
    else {
      puVar15 = (undefined8 *)(plVar5[0x17] + -8);
      puVar19 = (undefined4 *)*puVar15;
      plVar5[0x17] = (long)puVar15;
      plVar7 = (long *)0x4020;
      _bzero(puVar19,0x4020);
      lVar6 = 0;
      do {
        puVar11 = (undefined4 *)((long)puVar19 + lVar6);
        *puVar11 = 0x1001;
        *(undefined8 *)(puVar11 + 1) = 0;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 0;
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != 0x4000);
      *(undefined8 *)(puVar19 + 0x1005) = 0x4e6e6b2800000000;
      plVar5[0x19] = plVar5[0x19] + 1;
    }
    plVar17[3] = (long)puVar19;
    fVar21 = *(float *)(plVar5 + 8);
    lVar12 = *param_2;
    sVar1 = *(short *)((long)param_2 + 2);
    lVar6 = 0x200;
    sVar2 = *(short *)((long)param_2 + 4);
    puVar11 = puVar19;
    do {
      *puVar11 = (int)plVar5[4];
      *(undefined8 *)(puVar11 + 1) = *(undefined8 *)((long)plVar5 + 0x24);
      lVar13 = plVar5[6];
      *(long *)(puVar11 + 6) = plVar5[7];
      *(long *)(puVar11 + 4) = lVar13;
      puVar11 = puVar11 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(ulong *)(puVar19 + 0x1000) =
         CONCAT44(fVar21 * (float)(int)sVar1,fVar21 * (float)(int)(short)lVar12);
    puVar19[0x1002] = fVar21 * (float)(int)sVar2;
    *(short *)(puVar19 + 0x1003) = (short)*param_2;
    *(short *)((long)puVar19 + 0x400e) = *(short *)((long)param_2 + 2);
    *(short *)(puVar19 + 0x1004) = *(short *)((long)param_2 + 4);
    plVar9 = plVar7;
    if ((char)plVar5[2] == '\x01') {
      lVar6 = (plVar5[0x14] - plVar5[0x13] >> 3) * -0x5555555555555555 + -1;
      plVar9 = (long *)(plVar5[0x13] + lVar6 * 0x18);
      FUN_1093a6810(plVar5 + 9,param_2,
                    (int)((ulong)(plVar9[1] - *plVar9) >> 5) * -0x7fc01ff + (int)lVar6 * 0x1000 + -1
                   );
      plVar9 = param_2;
    }
  }
  auVar27._0_8_ = plVar17[3];
  auVar27._8_8_ = plVar9;
  return auVar27;
}



/* Entry: 1093b0d28; end: 1093b0d5b;  */

undefined1  [16] FUN_1093b0d28(long *param_1,long *param_2,long *param_3,long *param_4)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong unaff_x24;
  float fVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  if ((ulong)param_1 >> 0x3a == 0) {
    lVar5 = (long)param_1 << 6;
    __Znwm(lVar5);
    auVar25._8_8_ = param_1;
    auVar25._0_8_ = lVar5;
    return auVar25;
  }
  func_0x000104c4f740();
  plVar6 = &lStack_d0;
  uVar19 = (long)(int)(short)*param_2 * 0x466f45d +
           (long)(int)*(short *)((long)param_2 + 2) * 0x12740a5 +
           (long)(int)*(short *)((long)param_2 + 4) * 0x4f9ffb7;
  uVar17 = param_1[0xf];
  plVar8 = param_2;
  if (uVar17 != 0) {
    uVar7 = uVar17 - 1;
    if ((uVar17 & uVar7) == 0) {
      unaff_x24 = uVar19 & uVar7;
    }
    else {
      unaff_x24 = uVar19;
      if (uVar17 <= uVar19) {
        uVar15 = 0;
        if (uVar17 != 0) {
          uVar15 = uVar19 / uVar17;
        }
        unaff_x24 = uVar19 - uVar15 * uVar17;
      }
    }
    puVar14 = *(undefined8 **)(param_1[0xe] + unaff_x24 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar14; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar15 = plVar16[1];
        if (uVar15 == uVar19) {
          if ((((short)plVar16[2] == (short)*param_2) &&
              (*(short *)((long)plVar16 + 0x12) == *(short *)((long)param_2 + 2))) &&
             (plVar13 = param_1, *(short *)((long)plVar16 + 0x14) == *(short *)((long)param_2 + 4)))
          goto LAB_1093b0f8c;
        }
        else {
          if ((uVar17 & uVar7) == 0) {
            uVar15 = uVar15 & uVar7;
          }
          else if (uVar17 <= uVar15) {
            uVar3 = 0;
            if (uVar17 != 0) {
              uVar3 = uVar15 / uVar17;
            }
            uVar15 = uVar15 - uVar3 * uVar17;
          }
          if (uVar15 != unaff_x24) break;
        }
      }
    }
  }
  plVar16 = (long *)0x20;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = uVar19;
  *(int *)(plVar16 + 2) = (int)*param_2;
  *(short *)((long)plVar16 + 0x14) = *(short *)((long)param_2 + 4);
  plVar16[3] = 0;
  if ((uVar17 == 0) ||
     (plVar13 = plVar16, *(float *)(param_1 + 0x12) * (float)uVar17 < (float)(param_1[0x11] + 1))) {
    uVar7 = 1;
    if (2 < uVar17) {
      uVar7 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    plVar8 = (long *)(uVar7 | uVar17 << 1);
    plVar13 = (long *)(long)((float)(param_1[0x11] + 1) / *(float *)(param_1 + 0x12));
    if (plVar8 <= plVar13) {
      plVar8 = plVar13;
    }
    plVar13 = param_1 + 0xe;
    func_0x0001093b0afc();
    uVar17 = param_1[0xf];
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x24 = uVar17 - 1 & uVar19;
    }
    else {
      unaff_x24 = uVar19;
      if (uVar17 <= uVar19) {
        uVar7 = 0;
        if (uVar17 != 0) {
          uVar7 = uVar19 / uVar17;
        }
        unaff_x24 = uVar19 - uVar7 * uVar17;
      }
    }
  }
  lVar5 = param_1[0xe];
  plVar9 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 0x10;
    *plVar16 = *plVar9;
    *plVar9 = (long)plVar16;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar9;
    if (*plVar16 != 0) {
      uVar19 = *(ulong *)(*plVar16 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar19 = uVar19 & uVar17 - 1;
      }
      else if (uVar17 <= uVar19) {
        uVar7 = 0;
        if (uVar17 != 0) {
          uVar7 = uVar19 / uVar17;
        }
        uVar19 = uVar19 - uVar7 * uVar17;
      }
      plVar9 = (long *)(param_1[0xe] + uVar19 * 8);
      goto LAB_1093b0f7c;
    }
  }
  else {
    *plVar16 = *plVar9;
LAB_1093b0f7c:
    *plVar9 = (long)plVar16;
  }
  param_1[0x11] = param_1[0x11] + 1;
LAB_1093b0f8c:
  if (plVar16[3] == 0) {
    if (param_1[0x17] == param_1[0x16]) {
      lVar5 = param_1[0x14];
      puVar18 = *(undefined4 **)(lVar5 + -0x10);
      puVar10 = *(undefined4 **)(lVar5 + -8);
      if (puVar18 == puVar10) {
        if (lVar5 == param_1[0x15]) {
          lStack_d0 = 0;
          uStack_78 = 0;
          lStack_b8 = 0;
          puStack_c0 = (undefined4 *)0x0;
          uStack_a8 = 0;
          plStack_b0 = (long *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_80 = 0;
          param_4 = (long *)0x2;
          FUN_1099a9f0c(&lStack_d0,&UNK_10f568e28,0x70,2,FUN_1099aa768,0);
          param_3 = (long *)0x46;
          FUN_1092b4db8(puStack_c8 + 0x1d50,&UNK_10f568ef0);
          FUN_1099ab3b0(&lStack_d0);
          FUN_1093b05e4(param_1 + 0x13,(param_1[0x15] - param_1[0x13] >> 3) * 0x5555555555555556);
          lVar5 = param_1[0x14];
        }
        plVar8 = (long *)((lVar5 - param_1[0x13] >> 3) * -0x5555555555555555 + 1);
        FUN_1093b06a0(param_1 + 0x13);
        plVar13 = (long *)(param_1[0x14] + -0x18);
        FUN_1093b0838();
        lVar5 = param_1[0x14];
        puVar18 = *(undefined4 **)(lVar5 + -0x10);
        puVar10 = *(undefined4 **)(lVar5 + -8);
      }
      if (puVar18 < puVar10) {
        plVar6 = (long *)0x4020;
        _bzero(puVar18,0x4020);
        lVar11 = 0x4000;
        puVar10 = puVar18;
        do {
          *puVar10 = 0x1001;
          *(undefined8 *)(puVar10 + 1) = 0;
          *(undefined8 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 6) = 0;
          puVar10 = puVar10 + 8;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != 0);
        *(undefined8 *)(puVar18 + 0x1005) = 0x4e6e6b2800000000;
        puVar18 = puVar18 + 0x1008;
      }
      else {
        plVar9 = (long *)(lVar5 + -0x18);
        lVar11 = (long)puVar18 - *plVar9;
        uVar17 = (lVar11 >> 5) * -0x7fc01ff007fc01ff + 1;
        if (0x3fe00ff803fe0 < uVar17) {
          FUN_1093b0988();
LAB_1093b1354:
          func_0x000104c4f740();
          FUN_1099ab3b0(&lStack_d0);
          __Unwind_Resume();
          plVar6 = plVar13;
          plVar16 = plVar8;
          if (param_4 != (long *)0x0) {
            if ((ulong)param_4 >> 0x3a != 0) {
              FUN_1093b0d14();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b1400);
              (*pcVar4)();
            }
            FUN_1093b0d28();
            *plVar13 = (long)param_4;
            plVar13[1] = (long)param_4;
            plVar13[2] = (long)(param_4 + (long)plVar16 * 8);
            plVar6 = param_4;
            for (; plVar8 != param_3; plVar8 = plVar8 + 8) {
              lVar11 = plVar8[1];
              lVar5 = *plVar8;
              lVar21 = plVar8[3];
              lVar12 = plVar8[2];
              lVar22 = plVar8[4];
              lVar24 = plVar8[7];
              lVar23 = plVar8[6];
              param_4[5] = plVar8[5];
              param_4[4] = lVar22;
              param_4[7] = lVar24;
              param_4[6] = lVar23;
              param_4[1] = lVar11;
              *param_4 = lVar5;
              param_4[3] = lVar21;
              param_4[2] = lVar12;
              plVar6 = plVar6 + 8;
              param_4 = param_4 + 8;
            }
            plVar13[1] = (long)plVar6;
          }
          auVar27._8_8_ = plVar16;
          auVar27._0_8_ = plVar6;
          return auVar27;
        }
        lVar12 = (long)puVar10 - *plVar9 >> 5;
        uVar19 = lVar12 * 0x7fc01ff007fc02;
        if (uVar19 < uVar17 || uVar19 - uVar17 == 0) {
          uVar19 = uVar17;
        }
        if (0x1ff007fc01fef < (ulong)(lVar12 * -0x7fc01ff007fc01ff)) {
          uVar19 = 0x3fe00ff803fe0;
        }
        plStack_b0 = plVar9;
        if (uVar19 == 0) {
          lVar12 = 0;
        }
        else {
          if (0x3fe00ff803fe0 < uVar19) goto LAB_1093b1354;
          lVar12 = uVar19 * 0x4020;
          __Znwm();
        }
        puVar10 = (undefined4 *)(lVar12 + lVar11);
        lStack_b8 = lVar12 + uVar19 * 0x4020;
        lStack_d0 = lVar12;
        puStack_c8 = puVar10;
        _bzero(puVar10,0x4020);
        lVar11 = 0x4000;
        puVar18 = puVar10;
        do {
          *puVar18 = 0x1001;
          *(undefined8 *)(puVar18 + 1) = 0;
          *(undefined8 *)(puVar18 + 4) = 0;
          *(undefined8 *)(puVar18 + 6) = 0;
          puVar18 = puVar18 + 8;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != 0);
        *(undefined8 *)(puVar10 + 0x1005) = 0x4e6e6b2800000000;
        puStack_c0 = puVar10 + 0x1008;
        FUN_1093b099c(plVar9,&lStack_d0);
        puVar18 = *(undefined4 **)(lVar5 + -0x10);
        if (lStack_d0 != 0) {
          __ZdlPv();
        }
      }
      *(undefined4 **)(lVar5 + -0x10) = puVar18;
      param_1[0x19] = param_1[0x19] + 1;
      puVar18 = puVar18 + -0x1008;
    }
    else {
      puVar14 = (undefined8 *)(param_1[0x17] + -8);
      puVar18 = (undefined4 *)*puVar14;
      param_1[0x17] = (long)puVar14;
      plVar6 = (long *)0x4020;
      _bzero(puVar18,0x4020);
      lVar5 = 0;
      do {
        puVar10 = (undefined4 *)((long)puVar18 + lVar5);
        *puVar10 = 0x1001;
        *(undefined8 *)(puVar10 + 1) = 0;
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 6) = 0;
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != 0x4000);
      *(undefined8 *)(puVar18 + 0x1005) = 0x4e6e6b2800000000;
      param_1[0x19] = param_1[0x19] + 1;
    }
    plVar16[3] = (long)puVar18;
    fVar20 = *(float *)(param_1 + 8);
    lVar11 = *param_2;
    sVar1 = *(short *)((long)param_2 + 2);
    lVar5 = 0x200;
    sVar2 = *(short *)((long)param_2 + 4);
    puVar10 = puVar18;
    do {
      *puVar10 = (int)param_1[4];
      *(undefined8 *)(puVar10 + 1) = *(undefined8 *)((long)param_1 + 0x24);
      lVar12 = param_1[6];
      *(long *)(puVar10 + 6) = param_1[7];
      *(long *)(puVar10 + 4) = lVar12;
      puVar10 = puVar10 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(ulong *)(puVar18 + 0x1000) =
         CONCAT44(fVar20 * (float)(int)sVar1,fVar20 * (float)(int)(short)lVar11);
    puVar18[0x1002] = fVar20 * (float)(int)sVar2;
    *(short *)(puVar18 + 0x1003) = (short)*param_2;
    *(short *)((long)puVar18 + 0x400e) = *(short *)((long)param_2 + 2);
    *(short *)(puVar18 + 0x1004) = *(short *)((long)param_2 + 4);
    plVar8 = plVar6;
    if ((char)param_1[2] == '\x01') {
      lVar5 = (param_1[0x14] - param_1[0x13] >> 3) * -0x5555555555555555 + -1;
      plVar8 = (long *)(param_1[0x13] + lVar5 * 0x18);
      FUN_1093a6810(param_1 + 9,param_2,
                    (int)((ulong)(plVar8[1] - *plVar8) >> 5) * -0x7fc01ff + (int)lVar5 * 0x1000 + -1
                   );
      plVar8 = param_2;
    }
  }
  auVar26._0_8_ = plVar16[3];
  auVar26._8_8_ = plVar8;
  return auVar26;
}



/* Entry: 1093b0d5c; end: 1093b137b;  */

long * FUN_1093b0d5c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong unaff_x24;
  float fVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  uVar18 = (long)(int)(short)*param_2 * 0x466f45d +
           (long)(int)*(short *)((long)param_2 + 2) * 0x12740a5 +
           (long)(int)*(short *)((long)param_2 + 4) * 0x4f9ffb7;
  uVar16 = param_1[0xf];
  plVar6 = param_2;
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = uVar18 & uVar5;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar16 <= uVar18) {
        uVar14 = 0;
        if (uVar16 != 0) {
          uVar14 = uVar18 / uVar16;
        }
        unaff_x24 = uVar18 - uVar14 * uVar16;
      }
    }
    puVar13 = *(undefined8 **)(param_1[0xe] + unaff_x24 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar13; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar14 = plVar15[1];
        if (uVar14 == uVar18) {
          if ((((short)plVar15[2] == (short)*param_2) &&
              (*(short *)((long)plVar15 + 0x12) == *(short *)((long)param_2 + 2))) &&
             (plVar11 = param_1, *(short *)((long)plVar15 + 0x14) == *(short *)((long)param_2 + 4)))
          goto LAB_1093b0f8c;
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar14 = uVar14 & uVar5;
          }
          else if (uVar16 <= uVar14) {
            uVar3 = 0;
            if (uVar16 != 0) {
              uVar3 = uVar14 / uVar16;
            }
            uVar14 = uVar14 - uVar3 * uVar16;
          }
          if (uVar14 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar18;
  *(int *)(plVar15 + 2) = (int)*param_2;
  *(short *)((long)plVar15 + 0x14) = *(short *)((long)param_2 + 4);
  plVar15[3] = 0;
  if ((uVar16 == 0) ||
     (plVar11 = plVar15, *(float *)(param_1 + 0x12) * (float)uVar16 < (float)(param_1[0x11] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    plVar6 = (long *)(uVar5 | uVar16 << 1);
    plVar11 = (long *)(long)((float)(param_1[0x11] + 1) / *(float *)(param_1 + 0x12));
    if (plVar6 <= plVar11) {
      plVar6 = plVar11;
    }
    plVar11 = param_1 + 0xe;
    func_0x0001093b0afc();
    uVar16 = param_1[0xf];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar18;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar16 <= uVar18) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar18 / uVar16;
        }
        unaff_x24 = uVar18 - uVar5 * uVar16;
      }
    }
  }
  lVar12 = param_1[0xe];
  plVar7 = *(long **)(lVar12 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 0x10;
    *plVar15 = *plVar7;
    *plVar7 = (long)plVar15;
    *(long **)(lVar12 + unaff_x24 * 8) = plVar7;
    if (*plVar15 != 0) {
      uVar18 = *(ulong *)(*plVar15 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar18 = uVar18 & uVar16 - 1;
      }
      else if (uVar16 <= uVar18) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar18 / uVar16;
        }
        uVar18 = uVar18 - uVar5 * uVar16;
      }
      plVar7 = (long *)(param_1[0xe] + uVar18 * 8);
      goto LAB_1093b0f7c;
    }
  }
  else {
    *plVar15 = *plVar7;
LAB_1093b0f7c:
    *plVar7 = (long)plVar15;
  }
  param_1[0x11] = param_1[0x11] + 1;
LAB_1093b0f8c:
  if (plVar15[3] == 0) {
    if (param_1[0x17] == param_1[0x16]) {
      lVar12 = param_1[0x14];
      puVar17 = *(undefined4 **)(lVar12 + -0x10);
      puVar8 = *(undefined4 **)(lVar12 + -8);
      if (puVar17 == puVar8) {
        if (lVar12 == param_1[0x15]) {
          lStack_b0 = 0;
          uStack_58 = 0;
          lStack_98 = 0;
          puStack_a0 = (undefined4 *)0x0;
          uStack_88 = 0;
          plStack_90 = (long *)0x0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_60 = 0;
          param_4 = (long *)0x2;
          FUN_1099a9f0c(&lStack_b0,&UNK_10f568e28,0x70,2,FUN_1099aa768,0);
          param_3 = (long *)0x46;
          FUN_1092b4db8(puStack_a8 + 0x1d50,&UNK_10f568ef0);
          FUN_1099ab3b0(&lStack_b0);
          FUN_1093b05e4(param_1 + 0x13,(param_1[0x15] - param_1[0x13] >> 3) * 0x5555555555555556);
          lVar12 = param_1[0x14];
        }
        plVar6 = (long *)((lVar12 - param_1[0x13] >> 3) * -0x5555555555555555 + 1);
        FUN_1093b06a0(param_1 + 0x13);
        plVar11 = (long *)(param_1[0x14] + -0x18);
        FUN_1093b0838();
        lVar12 = param_1[0x14];
        puVar17 = *(undefined4 **)(lVar12 + -0x10);
        puVar8 = *(undefined4 **)(lVar12 + -8);
      }
      if (puVar17 < puVar8) {
        _bzero(puVar17,0x4020);
        lVar9 = 0x4000;
        puVar8 = puVar17;
        do {
          *puVar8 = 0x1001;
          *(undefined8 *)(puVar8 + 1) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          puVar8 = puVar8 + 8;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
        *(undefined8 *)(puVar17 + 0x1005) = 0x4e6e6b2800000000;
        puVar17 = puVar17 + 0x1008;
      }
      else {
        plVar7 = (long *)(lVar12 + -0x18);
        lVar9 = (long)puVar17 - *plVar7;
        uVar16 = (lVar9 >> 5) * -0x7fc01ff007fc01ff + 1;
        if (0x3fe00ff803fe0 < uVar16) {
          FUN_1093b0988();
LAB_1093b1354:
          func_0x000104c4f740();
          FUN_1099ab3b0(&lStack_b0);
          __Unwind_Resume();
          plVar15 = plVar11;
          if (param_4 != (long *)0x0) {
            if ((ulong)param_4 >> 0x3a != 0) {
              FUN_1093b0d14();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b1400);
              (*pcVar4)();
            }
            plVar15 = plVar6;
            FUN_1093b0d28();
            *plVar11 = (long)param_4;
            plVar11[1] = (long)param_4;
            plVar11[2] = (long)(param_4 + (long)plVar15 * 8);
            plVar15 = param_4;
            for (; plVar6 != param_3; plVar6 = plVar6 + 8) {
              lVar9 = plVar6[1];
              lVar12 = *plVar6;
              lVar20 = plVar6[3];
              lVar10 = plVar6[2];
              lVar21 = plVar6[4];
              lVar23 = plVar6[7];
              lVar22 = plVar6[6];
              param_4[5] = plVar6[5];
              param_4[4] = lVar21;
              param_4[7] = lVar23;
              param_4[6] = lVar22;
              param_4[1] = lVar9;
              *param_4 = lVar12;
              param_4[3] = lVar20;
              param_4[2] = lVar10;
              plVar15 = plVar15 + 8;
              param_4 = param_4 + 8;
            }
            plVar11[1] = (long)plVar15;
          }
          return plVar15;
        }
        lVar10 = (long)puVar8 - *plVar7 >> 5;
        uVar18 = lVar10 * 0x7fc01ff007fc02;
        if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
          uVar18 = uVar16;
        }
        if (0x1ff007fc01fef < (ulong)(lVar10 * -0x7fc01ff007fc01ff)) {
          uVar18 = 0x3fe00ff803fe0;
        }
        plStack_90 = plVar7;
        if (uVar18 == 0) {
          lVar10 = 0;
        }
        else {
          if (0x3fe00ff803fe0 < uVar18) goto LAB_1093b1354;
          lVar10 = uVar18 * 0x4020;
          __Znwm();
        }
        puVar8 = (undefined4 *)(lVar10 + lVar9);
        lStack_98 = lVar10 + uVar18 * 0x4020;
        lStack_b0 = lVar10;
        puStack_a8 = puVar8;
        _bzero(puVar8,0x4020);
        lVar9 = 0x4000;
        puVar17 = puVar8;
        do {
          *puVar17 = 0x1001;
          *(undefined8 *)(puVar17 + 1) = 0;
          *(undefined8 *)(puVar17 + 4) = 0;
          *(undefined8 *)(puVar17 + 6) = 0;
          puVar17 = puVar17 + 8;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
        *(undefined8 *)(puVar8 + 0x1005) = 0x4e6e6b2800000000;
        puStack_a0 = puVar8 + 0x1008;
        FUN_1093b099c(plVar7,&lStack_b0);
        puVar17 = *(undefined4 **)(lVar12 + -0x10);
        if (lStack_b0 != 0) {
          __ZdlPv();
        }
      }
      *(undefined4 **)(lVar12 + -0x10) = puVar17;
      param_1[0x19] = param_1[0x19] + 1;
      puVar17 = puVar17 + -0x1008;
    }
    else {
      puVar13 = (undefined8 *)(param_1[0x17] + -8);
      puVar17 = (undefined4 *)*puVar13;
      param_1[0x17] = (long)puVar13;
      _bzero(puVar17,0x4020);
      lVar12 = 0;
      do {
        puVar8 = (undefined4 *)((long)puVar17 + lVar12);
        *puVar8 = 0x1001;
        *(undefined8 *)(puVar8 + 1) = 0;
        *(undefined8 *)(puVar8 + 4) = 0;
        *(undefined8 *)(puVar8 + 6) = 0;
        lVar12 = lVar12 + 0x20;
      } while (lVar12 != 0x4000);
      *(undefined8 *)(puVar17 + 0x1005) = 0x4e6e6b2800000000;
      param_1[0x19] = param_1[0x19] + 1;
    }
    plVar15[3] = (long)puVar17;
    fVar19 = *(float *)(param_1 + 8);
    lVar9 = *param_2;
    sVar1 = *(short *)((long)param_2 + 2);
    lVar12 = 0x200;
    sVar2 = *(short *)((long)param_2 + 4);
    puVar8 = puVar17;
    do {
      *puVar8 = (int)param_1[4];
      *(undefined8 *)(puVar8 + 1) = *(undefined8 *)((long)param_1 + 0x24);
      lVar10 = param_1[6];
      *(long *)(puVar8 + 6) = param_1[7];
      *(long *)(puVar8 + 4) = lVar10;
      puVar8 = puVar8 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(ulong *)(puVar17 + 0x1000) =
         CONCAT44(fVar19 * (float)(int)sVar1,fVar19 * (float)(int)(short)lVar9);
    puVar17[0x1002] = fVar19 * (float)(int)sVar2;
    *(short *)(puVar17 + 0x1003) = (short)*param_2;
    *(short *)((long)puVar17 + 0x400e) = *(short *)((long)param_2 + 2);
    *(short *)(puVar17 + 0x1004) = *(short *)((long)param_2 + 4);
    if ((char)param_1[2] == '\x01') {
      lVar12 = (param_1[0x14] - param_1[0x13] >> 3) * -0x5555555555555555 + -1;
      plVar6 = (long *)(param_1[0x13] + lVar12 * 0x18);
      FUN_1093a6810(param_1 + 9,param_2,
                    (int)((ulong)(plVar6[1] - *plVar6) >> 5) * -0x7fc01ff + (int)lVar12 * 0x1000 +
                    -1);
    }
  }
  return (long *)plVar15[3];
}



/* Entry: 1093b137c; end: 1093b141b;  */

void FUN_1093b137c(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3a != 0) {
      FUN_1093b0d14();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1093b1400);
      (*pcVar1)();
    }
    puVar2 = param_2;
    FUN_1093b0d28();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar2 * 8);
    puVar2 = param_4;
    for (; param_2 != param_3; param_2 = param_2 + 8) {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      uVar7 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      puVar2[5] = param_2[5];
      puVar2[4] = uVar7;
      puVar2[7] = uVar9;
      puVar2[6] = uVar8;
      puVar2[1] = uVar4;
      *puVar2 = uVar3;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      param_4 = param_4 + 8;
      puVar2 = puVar2 + 8;
    }
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 1093b141c; end: 1093b1917;  */

void FUN_1093b141c(long param_1,long param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 **ppuVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 *apuStack_d0 [2];
  char cStack_b9;
  undefined8 uStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  FUN_1093e96e8(&uStack_b8,param_3,ppuVar1);
  if (-1 < (char)bStack_a1) {
    uStack_b0 = (ulong)bStack_a1;
  }
  if (uStack_b0 == 0) {
    FUN_10937e740(apuStack_d0,&UNK_10f569100);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5690e5,0x1be,apuStack_d0);
  }
  else {
    FUN_1093c7e44(param_3,&uStack_b8);
    if (param_3 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1093b18c4);
      (*pcVar3)();
    }
    if ((int)*(undefined8 *)(param_3 + 0x28) == 1 &&
        (*(ulong *)(param_3 + 0x30) & 0xffffffff00000000) == 0x100000000) {
      iVar17 = (int)*(ulong *)(param_3 + 0x30);
      iVar6 = (int)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20) + -1;
      if (*(int *)(param_1 + 0x18) * (iVar17 + -1) + 1 == *(int *)(param_4 + 0xa8) &&
          *(int *)(param_1 + 0x18) * iVar6 + 1 == *(int *)(param_4 + 0xac)) {
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
        uVar13 = *(ulong *)(param_4 + 0x78);
        if (uVar13 == 0) {
          uVar13 = *(ulong *)(param_4 + 8);
          if ((uVar13 & 1) != 0) {
            uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
          }
          func_0x000109312438();
          *(ulong *)(param_4 + 0x78) = uVar13;
        }
        *(uint *)(uVar13 + 0x10) = *(uint *)(uVar13 + 0x10) | 8;
        uVar11 = *(ulong *)(uVar13 + 200);
        if (uVar11 == 0) {
          uVar11 = *(ulong *)(uVar13 + 8);
          if ((uVar11 & 1) != 0) {
            uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
          }
          func_0x000109311fd0();
          *(ulong *)(uVar13 + 200) = uVar11;
        }
        *(undefined4 *)(uVar11 + 0x30) = *(undefined4 *)(param_4 + 0xa8);
        uVar12 = *(uint *)(uVar11 + 0x10);
        *(uint *)(uVar11 + 0x10) = uVar12 | 2;
        uVar2 = *(undefined4 *)(param_4 + 0xac);
        piVar14 = (int *)(uVar11 + 0x18);
        *piVar14 = 0;
        *(undefined4 *)(uVar11 + 0x34) = uVar2;
        *(uint *)(uVar11 + 0x10) = uVar12 | 6;
        if (*(int *)(uVar11 + 0x1c) < 6) {
          FUN_109311970(piVar14,0,6);
          lVar7 = (long)*piVar14;
        }
        else {
          lVar7 = 0;
        }
        lVar5 = 0;
        lVar9 = *(long *)(uVar11 + 0x20);
        *(undefined4 *)(uVar11 + 0x18) = 6;
        do {
          *(undefined4 *)(lVar9 + lVar7 * 4 + lVar5) = *(undefined4 *)(&UNK_10dfc8fc8 + lVar5);
          lVar5 = lVar5 + 4;
        } while (lVar5 != 0x18);
        iVar29 = *(int *)(param_1 + 0x18);
        func_0x000104c59120(apuStack_d0,
                            (long)*(int *)(param_4 + 0xa8) * (long)*(int *)(param_4 + 0xac),0);
        iVar4 = *(int *)(param_4 + 0xac);
        if (0 < iVar4) {
          uVar12 = 0;
          fVar30 = (float)iVar6;
          fVar31 = (float)(iVar17 + -1);
          ppuVar16 = (undefined1 **)apuStack_d0[0];
          if (-1 < cStack_b9) {
            ppuVar16 = apuStack_d0;
          }
          iVar6 = *(int *)(param_4 + 0xa8);
          fVar32 = 1.0 / (float)iVar29;
          do {
            if (0 < iVar6) {
              uVar18 = 0;
              fVar19 = fVar32 * (float)uVar12;
              fVar20 = fVar30;
              if (fVar19 <= fVar30) {
                fVar20 = fVar19;
              }
              iVar4 = iVar17;
              if (fVar20 == (float)(int)fVar20) {
                iVar4 = 0;
              }
              fVar19 = (float)((int)fVar20 + 1) - fVar20;
              puVar15 = (undefined1 *)ppuVar16;
              do {
                fVar21 = fVar32 * (float)uVar18;
                fVar22 = fVar31;
                if (fVar21 <= fVar31) {
                  fVar22 = fVar21;
                }
                iVar6 = (int)fVar20 * iVar17 + (int)fVar22;
                lVar5 = (long)iVar6;
                lVar7 = lVar5;
                if (fVar22 != (float)(int)fVar22) {
                  lVar7 = lVar5 + 1;
                }
                lVar8 = (long)(iVar6 + iVar4);
                lVar9 = lVar8;
                if (fVar22 != (float)(int)fVar22) {
                  lVar9 = lVar8 + 1;
                }
                fVar22 = (float)((int)fVar22 + 1) - fVar22;
                fVar23 = (1.0 - fVar19) * fVar22;
                fVar24 = fVar19 * (1.0 - fVar22);
                fVar21 = (1.0 - fVar19) * (1.0 - fVar22);
                if (*(int *)(param_3 + 0x38) == 1) {
                  lVar10 = *(long *)(param_3 + 0x40);
                  fVar26 = fVar24 * *(float *)(lVar10 + (long)(int)lVar7 * 4) +
                           *(float *)(lVar10 + lVar5 * 4) * fVar19 * fVar22 +
                           *(float *)(lVar10 + lVar8 * 4) * fVar23 +
                           *(float *)(lVar10 + (long)(int)lVar9 * 4) * fVar21;
                }
                else {
                  fVar26 = 0.0;
                  if (*(int *)(param_3 + 0x38) == 3) {
                    lVar10 = *(long *)(param_3 + 0x40);
                    fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + lVar5));
                    fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + lVar7));
                    fVar25 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + lVar8));
                    fVar26 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + lVar9));
                    fVar26 = *(float *)(param_3 + 0x48) *
                             ((fVar24 * fVar28 + fVar27 * fVar19 * fVar22 + fVar25 * fVar23 +
                              fVar26 * fVar21) - (float)*(int *)(param_3 + 0x4c));
                  }
                }
                fVar26 = -fVar26;
                _expf();
                ppuVar16 = (undefined1 **)(puVar15 + 1);
                *puVar15 = (char)(long)((1.0 / (fVar26 + 1.0)) * 255.0);
                uVar18 = uVar18 + 1;
                iVar6 = *(int *)(param_4 + 0xa8);
                puVar15 = (undefined1 *)ppuVar16;
              } while ((int)uVar18 < iVar6);
              iVar4 = *(int *)(param_4 + 0xac);
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < iVar4);
        }
        *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) | 1;
        uVar13 = *(ulong *)(uVar11 + 8);
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar11 + 0x28,apuStack_d0,uVar13);
      }
      else {
        FUN_10937e740(apuStack_d0,&UNK_10f56915a);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5690e5,0x1cc,apuStack_d0);
      }
    }
    else {
      FUN_10937e740(apuStack_d0,&UNK_10f56913a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5690e5,0x1c6,apuStack_d0);
    }
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(apuStack_d0[0]);
  }
  if ((char)bStack_a1 < '\0') {
    __ZdlPv(uStack_b8);
  }
  return;
}



/* Entry: 1093b1918; end: 1093b193f;  */

ulong FUN_1093b1918(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  FUN_1093c7e44();
  if (param_1 != 0) {
    return param_1 + 0x28;
  }
  puVar1 = &UNK_10f56ae8d;
  FUN_109262df8();
  *(uint *)(puVar1 + 0x10) = *(uint *)(puVar1 + 0x10) | 4;
  uVar2 = *(ulong *)(puVar1 + 0x78);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(puVar1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109312438();
    *(ulong *)(puVar1 + 0x78) = uVar2;
  }
  return uVar2;
}



/* Entry: 1093b1940; end: 1093b198b;  */

void FUN_1093b1940(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109312438();
    *(ulong *)(param_1 + 0x78) = uVar1;
  }
  return;
}



/* Entry: 1093b198c; end: 1093b1a17;  */

void FUN_1093b198c(float param_1,float param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1 + param_4 * (int)param_2;
  iVar3 = iVar2 * param_5;
  *param_3 = param_5;
  param_3[1] = iVar3;
  iVar1 = param_5;
  if (param_1 == (float)(int)param_1) {
    iVar1 = 0;
  }
  if (param_2 == (float)(int)param_2) {
    param_4 = 0;
  }
  param_5 = (param_4 + iVar2) * param_5;
  param_3[2] = iVar3 + iVar1;
  param_3[3] = param_5;
  param_3[4] = param_5 + iVar1;
  param_1 = (float)((int)param_1 + 1) - param_1;
  param_2 = (float)((int)param_2 + 1) - param_2;
  param_3[5] = (int)(param_1 * param_2);
  param_3[6] = (int)((1.0 - param_1) * param_2);
  param_3[7] = (int)(param_1 * (1.0 - param_2));
  param_3[8] = (int)((1.0 - param_1) * (1.0 - param_2));
  return;
}



/* Entry: 1093b1a18; end: 1093b217f;  */

void FUN_1093b1a18(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  undefined4 uStack_13c;
  float *pfStack_138;
  float *pfStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 ***apppuStack_f0 [2];
  char cStack_d9;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 uStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x18);
  }
  FUN_1093e96e8(&uStack_c0,param_2,ppuVar1);
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  FUN_1093e96e8(&uStack_d8,param_2,ppuVar1);
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
  }
  if (uStack_b8 == 0) {
LAB_1093b1f54:
    FUN_10937e740(&uStack_120,&UNK_10f569191);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56917d,0x1ec,&uStack_120);
LAB_1093b2020:
    apppuStack_f0[0] = uStack_120;
    if (-1 < lStack_110) goto LAB_1093b2030;
  }
  else {
    if (-1 < (char)bStack_c1) {
      uStack_d0 = (ulong)bStack_c1;
    }
    if (uStack_d0 == 0) goto LAB_1093b1f54;
    lVar6 = param_2;
    FUN_1093c7e44(param_2,&uStack_c0);
    if (lVar6 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b20d8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1093b20dc);
      (*pcVar5)();
    }
    FUN_1093c7e44(param_2,&uStack_d8);
    if (param_2 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b20d8;
    }
    uVar7 = *(ulong *)(lVar6 + 0x28);
    if (((int)uVar7 != 1) ||
       (uVar19 = *(ulong *)(lVar6 + 0x30), (uVar19 & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(&uStack_120,&UNK_10f5691ca);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56917d,0x1f5,&uStack_120);
      goto LAB_1093b2020;
    }
    iVar18 = (int)uVar19;
    if (*(int *)(param_1 + 0x28) * (iVar18 + -1) + 1 != *(int *)(param_3 + 0xa8)) {
LAB_1093b1fbc:
      FUN_10937e740(&uStack_120,&UNK_10f5691e9);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56917d,0x1fb,&uStack_120);
      goto LAB_1093b2020;
    }
    iVar14 = (int)(uVar7 >> 0x20) + -1;
    if (*(int *)(param_1 + 0x28) * iVar14 + 1 != *(int *)(param_3 + 0xac)) goto LAB_1093b1fbc;
    if (((((int)*(ulong *)(param_2 + 0x28) != 1) ||
         (*(ulong *)(param_2 + 0x28) >> 0x20 != uVar7 >> 0x20)) ||
        ((int)*(ulong *)(param_2 + 0x30) != iVar18)) ||
       ((*(ulong *)(param_2 + 0x30) & 0xffffffff00000000) != 0x300000000)) {
      FUN_10937e740(&uStack_120,&UNK_10f56920b);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56917d,0x200,&uStack_120);
      goto LAB_1093b2020;
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    uVar7 = *(ulong *)(param_3 + 0x78);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(ulong *)(param_3 + 0x78) = uVar7;
    }
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 0x100;
    uVar21 = *(ulong *)(uVar7 + 0xf0);
    if (uVar21 == 0) {
      uVar21 = *(ulong *)(uVar7 + 8);
      if ((uVar21 & 1) != 0) {
        uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
      }
      func_0x000109311f78();
      *(ulong *)(uVar7 + 0xf0) = uVar21;
    }
    *(undefined4 *)(uVar21 + 0x30) = *(undefined4 *)(param_3 + 0xa8);
    uVar16 = *(uint *)(uVar21 + 0x10);
    *(uint *)(uVar21 + 0x10) = uVar16 | 2;
    uVar2 = *(undefined4 *)(param_3 + 0xac);
    piVar20 = (int *)(uVar21 + 0x18);
    *piVar20 = 0;
    *(undefined4 *)(uVar21 + 0x34) = uVar2;
    *(uint *)(uVar21 + 0x10) = uVar16 | 6;
    if (*(int *)(uVar21 + 0x1c) < 6) {
      FUN_109311970(piVar20,0,6);
      lVar12 = (long)*piVar20;
    }
    else {
      lVar12 = 0;
    }
    lVar8 = 0;
    lVar15 = *(long *)(uVar21 + 0x20);
    *(undefined4 *)(uVar21 + 0x18) = 6;
    do {
      *(undefined4 *)(lVar15 + lVar12 * 4 + lVar8) = *(undefined4 *)(&UNK_10dfc8fc8 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x18);
    iVar32 = *(int *)(param_1 + 0x28);
    func_0x000104c59120(apppuStack_f0,
                        (long)(*(int *)(param_3 + 0xac) * *(int *)(param_3 + 0xa8) * 4),0);
    cVar4 = cStack_d9;
    ppppuVar10 = (undefined8 ****)apppuStack_f0[0];
    fStack_100 = 0.0;
    uStack_118 = 0;
    uStack_120 = (undefined8 ****)0x0;
    uStack_108 = 0;
    lStack_110 = 0;
    uStack_13c = 0;
    FUN_1092ef208(&pfStack_138,3,&uStack_13c);
    iVar11 = *(int *)(param_3 + 0xac);
    if (0 < iVar11) {
      uVar16 = 0;
      if (-1 < cVar4) {
        ppppuVar10 = apppuStack_f0;
      }
      fVar27 = (float)iVar14;
      fVar33 = (float)(iVar18 + -1);
      iVar14 = *(int *)(param_3 + 0xa8);
      fVar34 = 1.0 / (float)iVar32;
      do {
        fVar23 = fVar34 * (float)uVar16;
        fVar3 = fVar27;
        if (fVar23 <= fVar27) {
          fVar3 = fVar23;
        }
        if (0 < iVar14) {
          uVar22 = 0;
          iVar11 = iVar18;
          if (fVar3 == (float)(int)fVar3) {
            iVar11 = 0;
          }
          fVar23 = (float)((int)fVar3 + 1) - fVar3;
          ppppuVar9 = ppppuVar10;
          do {
            fVar24 = fVar34 * (float)uVar22;
            fVar26 = fVar33;
            if (fVar24 <= fVar33) {
              fVar26 = fVar24;
            }
            FUN_1093b198c(fVar26,fVar3,&uStack_120,uVar19,3);
            FUN_1093e3a78(param_2 + 0x28,&uStack_120,pfStack_138);
            lVar12 = 0;
            fVar24 = 0.0;
            do {
              fVar24 = fVar24 + *(float *)((long)pfStack_138 + lVar12) *
                                *(float *)((long)pfStack_138 + lVar12);
              lVar12 = lVar12 + 4;
            } while (lVar12 != 0xc);
            fVar25 = 0.0;
            if (0.0 < fVar24) {
              fVar25 = 1.0 / SQRT(fVar24);
            }
            lVar12 = 0;
            do {
              *(float *)((long)pfStack_138 + lVar12) =
                   fVar25 * *(float *)((long)pfStack_138 + lVar12);
              lVar12 = lVar12 + 4;
            } while (lVar12 != 0xc);
            *(char *)ppppuVar9 = (char)(long)((*pfStack_138 + 1.0) * 127.5);
            *(char *)((long)ppppuVar9 + 1) = (char)(long)((pfStack_138[1] + 1.0) * 127.5);
            *(char *)((long)ppppuVar9 + 2) = (char)(long)((pfStack_138[2] + 1.0) * 127.5);
            iVar14 = (int)fVar3 * iVar18 + (int)fVar26;
            uStack_120 = (undefined8 ****)CONCAT44(iVar14,1);
            lVar8 = (long)iVar14;
            lVar12 = lVar8;
            if (fVar26 != (float)(int)fVar26) {
              lVar12 = lVar8 + 1;
            }
            uStack_118 = CONCAT44(iVar14 + iVar11,(int)lVar12);
            lVar13 = (long)(iVar14 + iVar11);
            lVar15 = lVar13;
            if (fVar26 != (float)(int)fVar26) {
              lVar15 = lVar13 + 1;
            }
            fVar26 = (float)((int)fVar26 + 1) - fVar26;
            fVar25 = fVar23 * fVar26;
            fVar24 = (1.0 - fVar23) * fVar26;
            fVar28 = fVar23 * (1.0 - fVar26);
            lStack_110 = CONCAT44(fVar25,(int)lVar15);
            fStack_100 = (1.0 - fVar23) * (1.0 - fVar26);
            uStack_108 = CONCAT44(fVar24,fVar28);
            if (*(int *)(lVar6 + 0x38) == 1) {
              lVar17 = *(long *)(lVar6 + 0x40);
              fVar26 = fVar28 * *(float *)(lVar17 + (long)(int)lVar12 * 4) +
                       *(float *)(lVar17 + lVar8 * 4) * fVar25 +
                       *(float *)(lVar17 + lVar13 * 4) * fVar24 +
                       *(float *)(lVar17 + (long)(int)lVar15 * 4) * fStack_100;
            }
            else {
              fVar26 = 0.0;
              if (*(int *)(lVar6 + 0x38) == 3) {
                lVar17 = *(long *)(lVar6 + 0x40);
                fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + lVar8));
                fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + lVar12));
                fVar29 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + lVar13));
                fVar26 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + lVar15));
                fVar26 = *(float *)(lVar6 + 0x48) *
                         ((fVar28 * fVar31 + fVar30 * fVar25 + fVar29 * fVar24 + fVar26 * fStack_100
                          ) - (float)*(int *)(lVar6 + 0x4c));
              }
            }
            fVar26 = -fVar26;
            _expf();
            ppppuVar10 = (undefined8 ****)((long)ppppuVar9 + 4);
            *(char *)((long)ppppuVar9 + 3) = (char)(long)((1.0 / (fVar26 + 1.0)) * 255.0);
            uVar22 = uVar22 + 1;
            iVar14 = *(int *)(param_3 + 0xa8);
            ppppuVar9 = ppppuVar10;
          } while ((int)uVar22 < iVar14);
          iVar11 = *(int *)(param_3 + 0xac);
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar11);
    }
    *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 1;
    uVar7 = *(ulong *)(uVar21 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(uVar21 + 0x28,apppuStack_f0,uVar7);
    if (pfStack_138 != (float *)0x0) {
      pfStack_130 = pfStack_138;
      __ZdlPv();
    }
    if (-1 < cStack_d9) goto LAB_1093b2030;
  }
  __ZdlPv(apppuStack_f0[0]);
LAB_1093b2030:
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(uStack_d8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(uStack_c0);
  }
  return;
}



/* Entry: 1093b2180; end: 1093b28c3;  */

void FUN_1093b2180(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  float fVar19;
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
  float fVar32;
  float *apfStack_130 [2];
  char cStack_119;
  float *pfStack_100;
  float *pfStack_f8;
  float *apfStack_e8 [3];
  undefined8 uStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 uStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  
  ppuVar3 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x18);
  }
  FUN_1093e96e8(&uStack_b8,param_2,ppuVar3);
  ppuVar3 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
  }
  FUN_1093e96e8(&uStack_d0,param_2,ppuVar3);
  if (-1 < (char)bStack_a1) {
    uStack_b0 = (ulong)bStack_a1;
  }
  if (uStack_b0 == 0) {
LAB_1093b22b8:
    FUN_10937e740(apfStack_130,&UNK_10f56923b);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569228,0x229,apfStack_130);
LAB_1093b231c:
    if (-1 < cStack_119) goto LAB_1093b232c;
  }
  else {
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
    }
    if (uStack_c8 == 0) goto LAB_1093b22b8;
    lVar13 = param_2;
    FUN_1093c7e44(param_2,&uStack_d0);
    if (lVar13 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b2814:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b2818);
      (*pcVar4)();
    }
    uVar7 = *(ulong *)(lVar13 + 0x28);
    if (((int)uVar7 != 1) || ((*(ulong *)(lVar13 + 0x30) & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(apfStack_130,&UNK_10f56926e);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569228,0x230,apfStack_130);
      goto LAB_1093b231c;
    }
    iVar17 = (int)*(ulong *)(lVar13 + 0x30);
    iVar18 = (int)(uVar7 >> 0x20);
    iVar10 = iVar18 + -1;
    if (*(int *)(param_1 + 0x28) * (iVar17 + -1) + 1 != *(int *)(param_3 + 0xa8) ||
        *(int *)(param_1 + 0x28) * iVar10 + 1 != *(int *)(param_3 + 0xac)) {
      FUN_10937e740(apfStack_130,&UNK_10f56928a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569228,0x236,apfStack_130);
      goto LAB_1093b231c;
    }
    FUN_1093c7e44(param_2,&uStack_b8);
    if (param_2 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b2814;
    }
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((((int)uVar8 != 1) || (uVar8 >> 0x20 != uVar7 >> 0x20)) ||
        ((int)*(ulong *)(param_2 + 0x30) != iVar17)) ||
       ((*(ulong *)(param_2 + 0x30) & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(apfStack_130,&UNK_10f5692a9);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569228,0x23d,apfStack_130);
      goto LAB_1093b231c;
    }
    if (2 < *(uint *)(param_1 + 0x2c)) {
      FUN_10937e740(apfStack_130,&UNK_10f5692c7);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569228,0x243,apfStack_130);
      goto LAB_1093b231c;
    }
    FUN_1093e3918(apfStack_e8,(ulong *)(lVar13 + 0x28));
    FUN_1093e3918(&pfStack_100,(ulong *)(param_2 + 0x28));
    uVar15 = iVar18 * iVar17;
    fVar19 = *apfStack_e8[0];
    fVar32 = fVar19;
    if (1 < (int)uVar15) {
      bVar5 = 0.0 <= *pfStack_100;
      lVar13 = (ulong)uVar15 - 1;
      pfVar9 = pfStack_100;
      pfVar11 = apfStack_e8[0];
      do {
        pfVar11 = pfVar11 + 1;
        pfVar9 = pfVar9 + 1;
        if ((bVar5) || (*pfVar9 < 0.0)) {
          if ((bool)(bVar5 & *pfVar9 < 0.0)) {
            bVar5 = true;
            fVar26 = fVar32;
          }
          else {
            fVar24 = *pfVar11;
            fVar26 = fVar24;
            if ((fVar32 <= fVar24) && (fVar26 = fVar32, fVar19 < fVar24)) {
              fVar19 = fVar24;
            }
          }
        }
        else {
          bVar5 = true;
          fVar26 = *pfVar11;
          fVar19 = *pfVar11;
        }
        fVar32 = fVar26;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    fVar26 = (fVar32 + fVar19 + -1.0) * 0.5;
    fVar24 = fVar26 + 1.0;
    if (1.0 <= fVar19 - fVar32) {
      fVar24 = fVar19;
      fVar26 = fVar32;
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    uVar7 = *(ulong *)(param_3 + 0x78);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(ulong *)(param_3 + 0x78) = uVar7;
    }
    if (*(long *)(uVar7 + 0xf8) != 0) {
      func_0x00010933ea00();
    }
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) & 0xfffffdff;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    uVar7 = *(ulong *)(param_3 + 0x78);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(ulong *)(param_3 + 0x78) = uVar7;
    }
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 0x200;
    uVar8 = *(ulong *)(uVar7 + 0xf8);
    if (uVar8 == 0) {
      uVar8 = *(ulong *)(uVar7 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x00010933f64c();
      *(ulong *)(uVar7 + 0xf8) = uVar8;
    }
    piVar16 = (int *)(uVar8 + 0x18);
    iVar6 = *piVar16;
    *(undefined4 *)(uVar8 + 0x50) = *(undefined4 *)(param_3 + 0xa8);
    uVar15 = *(uint *)(uVar8 + 0x10);
    *(uint *)(uVar8 + 0x10) = uVar15 | 8;
    *(undefined4 *)(uVar8 + 0x54) = *(undefined4 *)(param_3 + 0xac);
    *(uint *)(uVar8 + 0x10) = uVar15 | 0x18;
    iVar18 = iVar6 + 6;
    if (*(int *)(uVar8 + 0x1c) < iVar18) {
      FUN_109311970(piVar16);
      iVar6 = *piVar16;
    }
    lVar13 = 0;
    lVar12 = *(long *)(uVar8 + 0x20);
    *(int *)(uVar8 + 0x18) = iVar18;
    do {
      *(undefined4 *)(lVar12 + (long)iVar6 * 4 + lVar13) = *(undefined4 *)(&UNK_10dfc8fc8 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x18);
    *(float *)(uVar8 + 0x58) = fVar26;
    *(float *)(uVar8 + 0x5c) = fVar24;
    *(undefined4 *)(uVar8 + 0x60) = 7;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 0xe0;
    FUN_1093b2910(apfStack_130,*(undefined4 *)(param_1 + 0x2c),uVar8);
    iVar18 = *(int *)(param_3 + 0xac);
    if (0 < iVar18) {
      uVar15 = 0;
      fVar32 = (float)iVar10;
      fVar19 = (float)(iVar17 + -1);
      iVar10 = *(int *)(param_3 + 0xa8);
      fVar26 = 1.0 / (float)*(int *)(param_1 + 0x28);
      do {
        if (0 < iVar10) {
          uVar14 = 0;
          fVar20 = fVar26 * (float)uVar15;
          fVar24 = fVar32;
          if (fVar20 <= fVar32) {
            fVar24 = fVar20;
          }
          iVar18 = iVar17;
          if (fVar24 == (float)(int)fVar24) {
            iVar18 = 0;
          }
          fVar20 = (float)((int)fVar24 + 1) - fVar24;
          do {
            fVar21 = fVar26 * (float)uVar14;
            fVar22 = fVar19;
            if (fVar21 <= fVar19) {
              fVar22 = fVar21;
            }
            iVar10 = (int)fVar24 * iVar17 + (int)fVar22;
            iVar6 = iVar10;
            if (fVar22 != (float)(int)fVar22) {
              iVar6 = iVar10 + 1;
            }
            iVar1 = iVar10 + iVar18;
            iVar2 = iVar1;
            if (fVar22 != (float)(int)fVar22) {
              iVar2 = iVar1 + 1;
            }
            fVar22 = (float)((int)fVar22 + 1) - fVar22;
            fVar25 = (1.0 - fVar20) * fVar22;
            fVar27 = fVar20 * (1.0 - fVar22);
            fVar28 = apfStack_e8[0][iVar10];
            fVar21 = (1.0 - fVar20) * (1.0 - fVar22);
            fVar29 = apfStack_e8[0][iVar6];
            fVar31 = apfStack_e8[0][iVar1];
            fVar30 = apfStack_e8[0][iVar2];
            fVar23 = -(fVar21 * pfStack_100[iVar2]) -
                     (pfStack_100[iVar6] * fVar27 + pfStack_100[iVar10] * fVar20 * fVar22 +
                     pfStack_100[iVar1] * fVar25);
            _expf(fVar23);
            FUN_1093b2b84(fVar29 * fVar27 + fVar28 * fVar20 * fVar22 + fVar31 * fVar25 +
                          fVar30 * fVar21,apfStack_130,uVar14,uVar15,
                          (uint)(long)((1.0 / (fVar23 + 1.0)) * 255.0) & 0xff);
            uVar14 = uVar14 + 1;
            iVar10 = *(int *)(param_3 + 0xa8);
          } while ((int)uVar14 < iVar10);
          iVar18 = *(int *)(param_3 + 0xac);
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar18);
    }
    if (pfStack_100 != (float *)0x0) {
      pfStack_f8 = pfStack_100;
      __ZdlPv();
    }
    apfStack_130[0] = apfStack_e8[0];
    if (apfStack_e8[0] == (float *)0x0) goto LAB_1093b232c;
  }
  __ZdlPv(apfStack_130[0]);
LAB_1093b232c:
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(uStack_d0);
  }
  if ((char)bStack_a1 < '\0') {
    __ZdlPv(uStack_b8);
  }
  return;
}



/* Entry: 1093b28c4; end: 1093b290f;  */

void FUN_1093b28c4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010933f64c();
    *(ulong *)(param_1 + 0xf8) = uVar1;
  }
  return;
}



/* Entry: 1093b2910; end: 1093b2b83;  */

undefined8 * FUN_1093b2910(undefined8 *param_1,int param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 0x50) * *(int *)(param_3 + 0x54);
  if (param_2 == 2) {
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    puVar2 = *(undefined8 **)(param_3 + 8);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = *(undefined8 **)((ulong)puVar2 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(param_3 + 0x48) >> 1 & 1) == 0) {
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x18;
        __Znwm();
        uVar5 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar5 = 3;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(ulong *)(param_3 + 0x48) = uVar5 | (ulong)puVar2;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        piVar7 = (int *)(param_3 + 0x28);
        iVar3 = *piVar7;
        if (iVar3 < iVar1) {
          uVar8 = *(undefined4 *)(param_3 + 0x58);
          if (*(int *)(param_3 + 0x2c) < iVar1) {
            FUN_109311970(piVar7,iVar3,iVar1);
            iVar3 = *piVar7;
          }
          *(int *)(param_3 + 0x28) = iVar1;
          if (iVar3 != iVar1) {
            lVar6 = (long)iVar1 * 4 + (long)iVar3 * -4;
            puVar4 = (undefined4 *)(*(long *)(param_3 + 0x30) + (long)iVar3 * 4);
            do {
              *puVar4 = uVar8;
              lVar6 = lVar6 + -4;
              puVar4 = puVar4 + 1;
            } while (lVar6 != 0);
          }
        }
        else if (iVar1 < iVar3) {
          *piVar7 = iVar1;
        }
      }
      else {
        FUN_10937e740(auStack_58,&UNK_10f56ac86);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56ac7a,0x7f,auStack_58);
        if (cStack_41 < '\0') {
          __ZdlPv(auStack_58[0]);
        }
      }
      goto LAB_1093b2ac0;
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
    puVar2 = *(undefined8 **)(param_3 + 8);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = *(undefined8 **)((ulong)puVar2 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(param_3 + 0x40) >> 1 & 1) == 0) {
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x18;
        __Znwm();
        uVar5 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar5 = 3;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(ulong *)(param_3 + 0x40) = uVar5 | (ulong)puVar2;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
LAB_1093b2ac0:
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  puVar2 = *(undefined8 **)(param_3 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(undefined8 **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  if (((uint)*(undefined8 *)(param_3 + 0x38) >> 1 & 1) == 0) {
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x18;
      __Znwm();
      uVar5 = 2;
    }
    else {
      func_0x00010b4d80a4();
      uVar5 = 3;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(ulong *)(param_3 + 0x38) = uVar5 | (ulong)puVar2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
  FUN_1093c373c(param_1,param_3);
  return param_1;
}



/* Entry: 1093b2b84; end: 1093b2c27;  */

void FUN_1093b2b84(float param_1,float *param_2,int param_3,int param_4,undefined1 param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_2[2] + param_1 * *param_2;
  uVar1 = (long)param_3 + (long)(int)param_2[3] * (long)param_4;
  if (*(long *)(param_2 + 4) == 0) {
    if (*(long *)(param_2 + 6) == 0) {
      if (*(long *)(param_2 + 8) != 0) {
        fVar4 = 65535.0;
        if (fVar2 <= 65535.0) {
          fVar4 = fVar2;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
          fVar3 = fVar4;
        }
        *(char *)(*(long *)(param_2 + 8) +
                 (-(uVar1 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar1 & 0xffffffff) << 1)) =
             (char)((ulong)(long)fVar3 >> 8);
        *(char *)(*(long *)(param_2 + 8) + (long)(int)uVar1 * 2 + 1) = (char)(long)fVar3;
      }
    }
    else {
      fVar4 = 255.0;
      if (fVar2 <= 255.0) {
        fVar4 = fVar2;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar4;
      }
      *(char *)(*(long *)(param_2 + 6) + uVar1) = (char)(long)fVar3;
    }
  }
  else {
    *(float *)(*(long *)(param_2 + 4) + (long)(int)uVar1 * 4) = fVar2;
  }
  *(undefined1 *)(*(long *)(param_2 + 10) + uVar1) = param_5;
  return;
}



/* Entry: 1093b2c28; end: 1093b3503;  */

void FUN_1093b2c28(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined *puVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  int iVar22;
  ulong *puVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined *puVar29;
  long lVar30;
  uint *puVar31;
  undefined **ppuVar32;
  ulong uVar33;
  float *pfVar34;
  int *piVar35;
  undefined8 *puVar36;
  ulong uVar37;
  int iVar38;
  undefined8 *puVar39;
  uint uVar40;
  long lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  long lStack_2a0;
  long alStack_290 [2];
  char cStack_279;
  undefined8 uStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 uStack_260;
  ulong uStack_258;
  byte bStack_249;
  float *pfStack_168;
  float *pfStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  float *pfStack_120;
  int iStack_114;
  char cStack_109;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar32 = *(undefined ***)(param_2 + 0x78);
  ppuVar7 = &PTR_PTR_1132cfaf0;
  if (ppuVar32 != (undefined **)0x0) {
    ppuVar7 = ppuVar32;
  }
  if ((*(byte *)((long)ppuVar7 + 0x11) >> 1 & 1) == 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    if (ppuVar32 == (undefined **)0x0) {
      ppuVar32 = *(undefined ***)(param_2 + 8);
      if (((ulong)ppuVar32 & 1) != 0) {
        ppuVar32 = *(undefined ***)((ulong)ppuVar32 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(undefined ***)(param_2 + 0x78) = ppuVar32;
    }
    *(uint *)(ppuVar32 + 2) = *(uint *)(ppuVar32 + 2) | 0x200;
    puVar29 = ppuVar32[0x1f];
    if (puVar29 == (undefined *)0x0) {
      puVar29 = ppuVar32[1];
      if (((ulong)puVar29 & 1) != 0) {
        puVar29 = *(undefined **)((ulong)puVar29 & 0xfffffffffffffffe);
      }
      func_0x00010933f64c();
      ppuVar32[0x1f] = puVar29;
    }
    *(int *)(puVar29 + 0x50) =
         (int)(long)(*(float *)(param_1 + 0x18) * (float)*(int *)(param_2 + 0xa0));
    uVar25 = *(uint *)(puVar29 + 0x10);
    *(uint *)(puVar29 + 0x10) = uVar25 | 8;
    *(int *)(puVar29 + 0x54) =
         (int)(long)(*(float *)(param_1 + 0x18) * (float)*(int *)(param_2 + 0xa4));
    *(undefined4 *)(puVar29 + 0x60) = 8;
    uVar40 = uVar25 | 0x98;
    *(uint *)(puVar29 + 0x10) = uVar40;
    if (2 < *(uint *)(param_1 + 0x2c)) {
      FUN_10937e740(&pfStack_120,&UNK_10f569346);
      puVar15 = &UNK_10f56906e;
      plVar16 = (long *)&UNK_10f5692fe;
      pfVar19 = (float *)0x1;
      FUN_109388c6c();
      goto LAB_1093b32c8;
    }
    if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 6) == 0) {
      *(undefined4 *)(puVar29 + 0x58) = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(puVar29 + 0x10) = uVar25 | 0xb8;
      *(undefined4 *)(puVar29 + 0x5c) = *(undefined4 *)(param_1 + 0x20);
      uVar25 = uVar25 | 0xf8;
LAB_1093b2d64:
      *(uint *)(puVar29 + 0x10) = uVar25;
    }
    else {
      if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x18) != 0) {
        FUN_10937e740(&pfStack_120,&UNK_10f56937c);
        puVar15 = &UNK_10f56906e;
        plVar16 = (long *)&UNK_10f5692fe;
        pfVar19 = (float *)0x1;
        FUN_109388c6c();
        goto LAB_1093b32c8;
      }
      uVar18 = *(ulong *)(param_2 + 0x18);
      puVar23 = (ulong *)(param_2 + 0x18);
      if ((uVar18 & 1) != 0) {
        puVar23 = (ulong *)(uVar18 + 7);
      }
      if (*(int *)(param_2 + 0x20) != 0) {
        lVar30 = (long)*(int *)(param_2 + 0x20) << 3;
        do {
          uVar18 = *puVar23;
          if (((*(byte *)(uVar18 + 0x11) >> 1 & 1) != 0) && (*(char *)(uVar18 + 0x13c) == '\x01')) {
            lVar24 = *(long *)(uVar18 + 0xf8);
            if ((uVar40 >> 5 & 1) == 0) {
              fVar42 = *(float *)(lVar24 + 0x58);
LAB_1093b333c:
              *(float *)(puVar29 + 0x58) = fVar42;
              uVar40 = uVar40 | 0x20;
              *(uint *)(puVar29 + 0x10) = uVar40;
            }
            else {
              fVar42 = *(float *)(lVar24 + 0x58);
              if (fVar42 < *(float *)(puVar29 + 0x58)) goto LAB_1093b333c;
            }
            if ((uVar40 >> 6 & 1) == 0) {
              fVar42 = *(float *)(lVar24 + 0x5c);
            }
            else {
              fVar42 = *(float *)(lVar24 + 0x5c);
              if (fVar42 <= *(float *)(puVar29 + 0x5c)) goto LAB_1093b3370;
            }
            *(float *)(puVar29 + 0x5c) = fVar42;
            uVar40 = uVar40 | 0x40;
            *(uint *)(puVar29 + 0x10) = uVar40;
          }
LAB_1093b3370:
          puVar23 = puVar23 + 1;
          lVar30 = lVar30 + -8;
        } while (lVar30 != 0);
      }
      if ((uVar40 >> 5 & 1) == 0) {
        *(undefined4 *)(puVar29 + 0x58) = *(undefined4 *)(param_1 + 0x24);
        uVar40 = uVar40 | 0x20;
        *(uint *)(puVar29 + 0x10) = uVar40;
      }
      if ((uVar40 >> 6 & 1) == 0) {
        *(undefined4 *)(puVar29 + 0x5c) = *(undefined4 *)(param_1 + 0x28);
        uVar25 = uVar40 | 0x40;
        goto LAB_1093b2d64;
      }
    }
    FUN_1093b2910(&pfStack_120,*(undefined4 *)(param_1 + 0x2c),puVar29);
    fStack_130 = 0.0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    FUN_109367d10(&pfStack_168,6);
    uVar18 = *(ulong *)(param_2 + 0x18);
    puVar23 = (ulong *)(param_2 + 0x18);
    if ((uVar18 & 1) != 0) {
      puVar23 = (ulong *)(uVar18 + 7);
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      puVar3 = puVar23 + *(int *)(param_2 + 0x20);
      do {
        uVar18 = *puVar23;
        if (((*(byte *)(uVar18 + 0x11) >> 1 & 1) != 0) && (*(char *)(uVar18 + 0x13c) == '\x01')) {
          lVar30 = *(long *)(uVar18 + 0xf8);
          if ((*(int *)(lVar30 + 0x60) != 8) || (*(int *)(lVar30 + 0x18) != 6)) {
            FUN_10937e740(&uStack_f0,&UNK_10f5693b6);
            puVar15 = &UNK_10f56906e;
            plVar16 = (long *)&UNK_10f5692fe;
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5692fe,0x299,&uStack_f0);
            if ((long)uStack_e0 < 0) {
              __ZdlPv(uStack_f0);
            }
            goto LAB_1093b3418;
          }
          lStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          lStack_d0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          FUN_1093c373c(&uStack_f0,lVar30);
          lVar9 = lStack_c8;
          lVar8 = lStack_d0;
          lVar24 = lStack_d8;
          uVar21 = uStack_e0;
          pfVar19 = *(float **)(lVar30 + 0x20);
          fVar42 = 1.0 / (-(pfVar19[1] * pfVar19[3]) + pfVar19[4] * *pfVar19);
          fVar44 = pfVar19[4] * fVar42;
          *pfStack_168 = fVar44;
          fVar45 = pfVar19[1];
          pfStack_168[1] = -(fVar42 * fVar45);
          fVar46 = fVar42 * (-(pfVar19[2] * pfVar19[4]) + pfVar19[5] * pfVar19[1]);
          pfStack_168[2] = fVar46;
          fVar48 = pfVar19[3];
          pfStack_168[3] = -(fVar42 * fVar48);
          fVar49 = *pfVar19;
          pfStack_168[4] = fVar42 * fVar49;
          fVar43 = fVar42 * (-(*pfVar19 * pfVar19[5]) + pfVar19[3] * pfVar19[2]);
          pfStack_168[5] = fVar43;
          fVar50 = 1.0 / *(float *)(param_1 + 0x18);
          *pfStack_168 = fVar44 * fVar50;
          pfStack_168[1] = -(fVar42 * fVar45) * fVar50;
          pfStack_168[2] = fVar46;
          pfStack_168[3] = -(fVar42 * fVar48) * fVar50;
          pfStack_168[4] = fVar42 * fVar49 * fVar50;
          pfStack_168[5] = fVar43;
          iVar22 = *(int *)(puVar29 + 0x54);
          if (0 < iVar22) {
            uVar33 = 0;
            iVar17 = uStack_e8._4_4_;
            fVar42 = uStack_f0._4_4_;
            fVar43 = (float)uStack_e8;
            iVar38 = *(int *)(puVar29 + 0x50);
            lVar41 = lStack_f8;
            do {
              if (0 < iVar38) {
                uVar37 = 0;
                fVar44 = (float)(uVar33 & 0xffffffff) + 0.5;
                do {
                  fVar46 = (float)(uVar37 & 0xffffffff) + 0.5;
                  fVar45 = pfStack_168[2] + fVar44 * pfStack_168[1] + fVar46 * *pfStack_168 + -0.5;
                  if ((((0.0 <= fVar45) && (fVar45 <= (float)(*(int *)(lVar30 + 0x50) + -1))) &&
                      (fVar46 = pfStack_168[5] + fVar44 * pfStack_168[4] + fVar46 * pfStack_168[3] +
                                -0.5, 0.0 <= fVar46)) &&
                     (fVar46 <= (float)(*(int *)(lVar30 + 0x54) + -1))) {
                    iVar22 = iVar17;
                    if (fVar46 == (float)(int)fVar46) {
                      iVar22 = 0;
                    }
                    iVar14 = (int)fVar45 + iVar17 * (int)fVar46;
                    uStack_150 = CONCAT44(iVar14,1);
                    lVar27 = (long)iVar14;
                    lVar5 = lVar27;
                    if (fVar45 != (float)(int)fVar45) {
                      lVar5 = lVar27 + 1;
                    }
                    iVar22 = iVar22 + iVar14;
                    uStack_148 = CONCAT44(iVar22,(int)lVar5);
                    lVar26 = (long)iVar22;
                    lVar6 = lVar26;
                    if (fVar45 != (float)(int)fVar45) {
                      lVar6 = lVar26 + 1;
                    }
                    fVar45 = (float)((int)fVar45 + 1) - fVar45;
                    fVar46 = (float)((int)fVar46 + 1) - fVar46;
                    fVar49 = fVar45 * fVar46;
                    fVar48 = fVar45 * (1.0 - fVar46);
                    fVar50 = (1.0 - fVar45) * fVar46;
                    uStack_140 = CONCAT44(fVar49,(int)lVar6);
                    fStack_130 = (1.0 - fVar45) * (1.0 - fVar46);
                    uStack_138 = CONCAT44(fVar48,fVar50);
                    fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + iVar14));
                    fVar46 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + lVar5));
                    fVar52 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + iVar22));
                    fVar53 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + lVar6));
                    fVar46 = fVar50 * fVar46 + fVar45 * fVar49 + fVar52 * fVar48 +
                             fVar53 * fStack_130;
                    fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar41 + uVar37));
                    if (fVar45 < fVar46) {
                      if (uVar21 == 0) {
                        if (lVar24 != 0) {
                          fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar24 + lVar27));
                          fVar52 = (float)NEON_ucvtf((uint)*(byte *)(lVar24 + lVar5));
                          fVar53 = (float)NEON_ucvtf((uint)*(byte *)(lVar24 + lVar26));
                          fVar45 = fVar50 * fVar52 + fVar45 * fVar49 + fVar53 * fVar48;
                          fVar52 = (float)NEON_ucvtf((uint)*(byte *)(lVar24 + lVar6));
                          goto LAB_1093b30b0;
                        }
                        if (lVar8 == 0) {
                          fVar45 = 0.0;
                        }
                        else {
                          FUN_1093b198c(&uStack_150,iVar17,2);
                          fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + uStack_150._4_4_));
                          fVar50 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (int)uStack_148));
                          fVar52 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + uStack_148._4_4_));
                          fVar53 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (int)uStack_140));
                          fVar47 = (float)NEON_ucvtf((uint)((byte *)(lVar8 + uStack_150._4_4_))[1]);
                          fVar51 = (float)NEON_ucvtf((uint)((byte *)(lVar8 + (int)uStack_148))[1]);
                          fVar48 = (float)NEON_ucvtf((uint)((byte *)(lVar8 + uStack_148._4_4_))[1]);
                          fVar49 = (float)NEON_ucvtf((uint)((byte *)(lVar8 + (int)uStack_140))[1]);
                          fVar45 = (float)uStack_138 * fVar51 + fVar47 * uStack_140._4_4_ +
                                   fVar48 * uStack_138._4_4_ + fVar49 * fStack_130 +
                                   ((float)uStack_138 * fVar50 + fVar45 * uStack_140._4_4_ +
                                    fVar52 * uStack_138._4_4_ + fVar53 * fStack_130) * 255.0;
                        }
                      }
                      else {
                        fVar45 = fVar50 * *(float *)(uVar21 + lVar5 * 4) +
                                 *(float *)(uVar21 + lVar27 * 4) * fVar49 +
                                 *(float *)(uVar21 + lVar26 * 4) * fVar48;
                        fVar52 = *(float *)(uVar21 + lVar6 * 4);
LAB_1093b30b0:
                        uStack_138 = CONCAT44(fVar48,fVar50);
                        uStack_140 = CONCAT44(fVar49,(int)lVar6);
                        uStack_148 = CONCAT44(iVar22,(int)lVar5);
                        fVar45 = fVar45 + fVar52 * fStack_130;
                      }
                      FUN_1093b2b84(fVar42 * (fVar45 - fVar43),&pfStack_120,uVar37,uVar33,
                                    (int)fVar46);
                      iVar38 = *(int *)(puVar29 + 0x50);
                    }
                  }
                  uVar37 = uVar37 + 1;
                } while ((long)uVar37 < (long)iVar38);
                iVar22 = *(int *)(puVar29 + 0x54);
              }
              uVar33 = uVar33 + 1;
              lVar41 = lVar41 + iStack_114;
            } while ((long)uVar33 < (long)iVar22);
          }
          if (*(char *)(param_1 + 0x30) == '\x01') {
            if (*(long *)(uVar18 + 0xf8) != 0) {
              func_0x00010933ea00();
            }
            *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) & 0xfffffdff;
          }
        }
        puVar23 = puVar23 + 1;
      } while (puVar23 != puVar3);
    }
    fVar42 = 1.0 / *(float *)(param_1 + 0x18);
    uStack_e8 = 0;
    uStack_f0 = (ulong)(uint)fVar42;
    uStack_e0 = (ulong)(uint)fVar42;
    plVar16 = &lStack_d8;
    FUN_1093c3a1c(&pfStack_168,&uStack_f0,plVar16,6);
    pfVar10 = pfStack_160;
    pfVar19 = pfStack_168;
    puVar31 = (uint *)(puVar29 + 0x18);
    uVar40 = *puVar31;
    uVar25 = uVar40 + (int)((ulong)((long)pfStack_160 - (long)pfStack_168) >> 2);
    plVar28 = (long *)(ulong)uVar25;
    if (*(int *)(puVar29 + 0x1c) < (int)uVar25) {
      FUN_109311970(puVar31);
      uVar40 = *puVar31;
      plVar16 = plVar28;
    }
    puVar15 = (undefined *)(ulong)uVar40;
    *(uint *)(puVar29 + 0x18) = uVar25;
    if (pfVar19 != pfVar10) {
      pfVar20 = (float *)(*(long *)(puVar29 + 0x20) + (long)(int)uVar40 * 4);
      do {
        pfVar34 = pfVar19 + 1;
        *pfVar20 = *pfVar19;
        pfVar20 = pfVar20 + 1;
        pfVar19 = pfVar34;
      } while (pfVar34 != pfVar10);
    }
LAB_1093b3418:
    pfVar19 = pfStack_168;
    if (pfStack_168 != (float *)0x0) {
      pfStack_160 = pfStack_168;
      pfVar10 = pfStack_168;
      goto LAB_1093b3424;
    }
  }
  else {
    FUN_10937e740(&pfStack_120,&UNK_10f569310);
    puVar15 = &UNK_10f56906e;
    plVar16 = (long *)&UNK_10f5692fe;
    pfVar19 = (float *)0x1;
    FUN_109388c6c();
LAB_1093b32c8:
    pfVar10 = pfStack_120;
    if (cStack_109 < '\0') {
LAB_1093b3424:
      pfVar19 = pfVar10;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (pfStack_168 != (float *)0x0) {
    pfStack_160 = pfStack_168;
    __ZdlPv();
  }
  __Unwind_Resume();
  ppuVar7 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(pfVar19 + 0xe) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(pfVar19 + 0xe);
  }
  FUN_1093e96e8(&uStack_260,puVar15,ppuVar7);
  ppuVar7 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(pfVar19 + 0x10) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(pfVar19 + 0x10);
  }
  FUN_1093e96e8(&uStack_278,puVar15,ppuVar7);
  if (-1 < (char)bStack_249) {
    uStack_258 = (ulong)bStack_249;
  }
  if (uStack_258 == 0) {
LAB_1093b363c:
    FUN_10937e740(alStack_290,&UNK_10f569403);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2c4,alStack_290);
LAB_1093b36a0:
    if (-1 < cStack_279) goto LAB_1093b36b0;
  }
  else {
    if (-1 < (char)bStack_261) {
      uStack_270 = (ulong)bStack_261;
    }
    if (uStack_270 == 0) goto LAB_1093b363c;
    puVar29 = puVar15;
    FUN_1093c7e44(puVar15,&uStack_260);
    if (puVar29 == (undefined *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b3d24:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1093b3d28);
      (*pcVar11)();
    }
    uVar18 = *(ulong *)(puVar29 + 0x28);
    if (((int)uVar18 != 1) || ((*(ulong *)(puVar29 + 0x30) & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(alStack_290,&UNK_10f569434);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2cb,alStack_290);
      goto LAB_1093b36a0;
    }
    iVar38 = (int)*(ulong *)(puVar29 + 0x30);
    iVar22 = (int)(uVar18 >> 0x20) + -1;
    if ((int)pfVar19[0x12] * (iVar38 + -1) + 1 != (int)plVar16[0x15] ||
        (int)pfVar19[0x12] * iVar22 + 1 != *(int *)((long)plVar16 + 0xac)) {
      FUN_10937e740(alStack_290,&UNK_10f569456);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2d1,alStack_290);
      goto LAB_1093b36a0;
    }
    FUN_1093c7e44(puVar15,&uStack_278);
    if (puVar15 == (undefined *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b3d24;
    }
    uVar21 = *(ulong *)(puVar15 + 0x28);
    if ((((int)uVar21 != 1) || (uVar21 >> 0x20 != uVar18 >> 0x20)) ||
       (((int)*(ulong *)(puVar15 + 0x30) != iVar38 ||
        ((*(ulong *)(puVar15 + 0x30) & 0xffffffff00000000) != 0x100000000)))) {
      FUN_10937e740(alStack_290,&UNK_10f56947b);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2d8,alStack_290);
      goto LAB_1093b36a0;
    }
    fVar42 = pfVar19[6];
    if (((int)fVar42 < 1) || (pfVar19[10] != fVar42)) {
      FUN_10937e740(alStack_290,&UNK_10f56949c);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2de,alStack_290);
      goto LAB_1093b36a0;
    }
    FUN_1093e3918(alStack_290,puVar29 + 0x28);
    FUN_1093e3918(&lStack_2a8,puVar15 + 0x28);
    *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 4;
    uVar18 = plVar16[0xf];
    if (uVar18 == 0) {
      uVar18 = plVar16[1];
      if ((uVar18 & 1) != 0) {
        uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      plVar16[0xf] = uVar18;
    }
    if (*(long *)(uVar18 + 0x100) != 0) {
      func_0x000109309fb0();
    }
    *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) & 0xfffffbff;
    *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 4;
    uVar18 = plVar16[0xf];
    if (uVar18 == 0) {
      uVar18 = plVar16[1];
      if ((uVar18 & 1) != 0) {
        uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      plVar16[0xf] = uVar18;
    }
    *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 0x400;
    uVar21 = *(ulong *)(uVar18 + 0x100);
    if (uVar21 == 0) {
      uVar21 = *(ulong *)(uVar18 + 8);
      if ((uVar21 & 1) != 0) {
        uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
      }
      func_0x000109312198();
      *(ulong *)(uVar18 + 0x100) = uVar21;
    }
    piVar35 = (int *)(uVar21 + 0x18);
    iVar14 = *piVar35;
    *(int *)(uVar21 + 0x38) = (int)plVar16[0x15];
    uVar25 = *(uint *)(uVar21 + 0x10);
    *(uint *)(uVar21 + 0x10) = uVar25 | 4;
    *(undefined4 *)(uVar21 + 0x3c) = *(undefined4 *)((long)plVar16 + 0xac);
    *(uint *)(uVar21 + 0x10) = uVar25 | 0xc;
    iVar17 = iVar14 + 6;
    if (*(int *)(uVar21 + 0x1c) < iVar17) {
      FUN_109311970(piVar35,iVar14,iVar17);
      iVar14 = *piVar35;
    }
    lVar30 = 0;
    lVar24 = *(long *)(uVar21 + 0x20);
    *(int *)(uVar21 + 0x18) = iVar17;
    do {
      *(undefined4 *)(lVar24 + (long)iVar14 * 4 + lVar30) = *(undefined4 *)(&UNK_10dfc8fc8 + lVar30)
      ;
      lVar30 = lVar30 + 4;
    } while (lVar30 != 0x18);
    *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 1;
    puVar12 = *(undefined8 **)(uVar21 + 8);
    if (((ulong)puVar12 & 1) != 0) {
      puVar12 = *(undefined8 **)((ulong)puVar12 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(uVar21 + 0x28) >> 1 & 1) == 0) {
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x18;
        __Znwm();
        uVar18 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar18 = 3;
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(ulong *)(uVar21 + 0x28) = uVar18 | (ulong)puVar12;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
    *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 2;
    puVar12 = *(undefined8 **)(uVar21 + 8);
    if (((ulong)puVar12 & 1) != 0) {
      puVar12 = *(undefined8 **)((ulong)puVar12 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(uVar21 + 0x30) >> 1 & 1) == 0) {
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x18;
        __Znwm();
        uVar18 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar18 = 3;
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(ulong *)(uVar21 + 0x30) = uVar18 | (ulong)puVar12;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
    *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 1;
    puVar12 = *(undefined8 **)(uVar21 + 8);
    if (((ulong)puVar12 & 1) != 0) {
      puVar12 = *(undefined8 **)((ulong)puVar12 & 0xfffffffffffffffe);
    }
    if (((uint)*(ulong *)(uVar21 + 0x28) >> 1 & 1) == 0) {
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x18;
        __Znwm();
        uVar18 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar18 = 3;
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(ulong *)(uVar21 + 0x28) = uVar18 | (ulong)puVar12;
    }
    else {
      puVar12 = (undefined8 *)(*(ulong *)(uVar21 + 0x28) & 0xfffffffffffffffc);
    }
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      puVar12 = (undefined8 *)*puVar12;
    }
    *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 2;
    puVar13 = *(undefined8 **)(uVar21 + 8);
    if (((ulong)puVar13 & 1) != 0) {
      puVar13 = *(undefined8 **)((ulong)puVar13 & 0xfffffffffffffffe);
    }
    if (((uint)*(ulong *)(uVar21 + 0x30) >> 1 & 1) == 0) {
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x18;
        __Znwm();
        uVar18 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar18 = 3;
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *(ulong *)(uVar21 + 0x30) = uVar18 | (ulong)puVar13;
    }
    else {
      puVar13 = (undefined8 *)(*(ulong *)(uVar21 + 0x30) & 0xfffffffffffffffc);
    }
    if (*(char *)((long)puVar13 + 0x17) < '\0') {
      puVar13 = (undefined8 *)*puVar13;
    }
    iVar17 = *(int *)((long)plVar16 + 0xac);
    if (0 < iVar17) {
      uVar25 = 0;
      fVar43 = pfVar19[0x12];
      fVar44 = (float)iVar22;
      fVar45 = (float)(iVar38 + -1);
      iVar22 = (int)plVar16[0x15];
      do {
        if (0 < iVar22) {
          uVar40 = 0;
          fVar48 = (1.0 / (float)(int)fVar43) * (float)uVar25;
          fVar46 = fVar44;
          if (fVar48 <= fVar44) {
            fVar46 = fVar48;
          }
          iVar17 = iVar38;
          if (fVar46 == (float)(int)fVar46) {
            iVar17 = 0;
          }
          fVar48 = (float)((int)fVar46 + 1) - fVar46;
          puVar36 = puVar13;
          puVar39 = puVar12;
          do {
            fVar50 = (1.0 / (float)(int)fVar43) * (float)uVar40;
            fVar49 = fVar45;
            if (fVar50 <= fVar45) {
              fVar49 = fVar50;
            }
            uVar1 = (int)(long)fVar49 + (int)(long)fVar46 * iVar38;
            uVar18 = (ulong)*(float *)(lStack_2a8 +
                                      (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar1 << 2));
            if ((uint)fVar42 <= (uint)(float)uVar18) {
              FUN_10937e740(auStack_2c0,&UNK_10f5694d7);
              FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2fc,auStack_2c0);
              if (cStack_2a9 < '\0') {
                __ZdlPv(auStack_2c0[0]);
              }
              goto LAB_1093b3c80;
            }
            lVar30 = (uVar18 & 0xffffffff) * 4;
            fVar52 = *(float *)(*(long *)(pfVar19 + 8) + lVar30) * 255.0;
            fVar50 = 255.0;
            if (fVar52 <= 255.0) {
              fVar50 = fVar52;
            }
            fVar53 = 0.0;
            if (0.0 <= fVar52) {
              fVar53 = fVar50;
            }
            *(char *)puVar39 = (char)(long)fVar53;
            fVar52 = *(float *)(*(long *)(pfVar19 + 0xc) + lVar30) * 255.0;
            fVar50 = 255.0;
            if (fVar52 <= 255.0) {
              fVar50 = fVar52;
            }
            fVar53 = 0.0;
            if (0.0 <= fVar52) {
              fVar53 = fVar50;
            }
            puVar12 = (undefined8 *)((long)puVar39 + 2);
            *(char *)((long)puVar39 + 1) = (char)(long)fVar53;
            iVar22 = (int)fVar46 * iVar38 + (int)fVar49;
            iVar14 = iVar22;
            if (fVar49 != (float)(int)fVar49) {
              iVar14 = iVar22 + 1;
            }
            iVar2 = iVar22 + iVar17;
            iVar4 = iVar2;
            if (fVar49 != (float)(int)fVar49) {
              iVar4 = iVar2 + 1;
            }
            fVar49 = (float)((int)fVar49 + 1) - fVar49;
            fVar49 = -((1.0 - fVar48) * (1.0 - fVar49) *
                      *(float *)(alStack_290[0] + (long)iVar4 * 4)) -
                     (fVar48 * (1.0 - fVar49) * *(float *)(alStack_290[0] + (long)iVar14 * 4) +
                      *(float *)(alStack_290[0] + (long)iVar22 * 4) * fVar48 * fVar49 +
                     *(float *)(alStack_290[0] + (long)iVar2 * 4) * (1.0 - fVar48) * fVar49);
            _expf();
            puVar13 = (undefined8 *)((long)puVar36 + 1);
            *(char *)puVar36 = (char)(long)((1.0 / (fVar49 + 1.0)) * 255.0);
            uVar40 = uVar40 + 1;
            iVar22 = (int)plVar16[0x15];
            puVar36 = puVar13;
            puVar39 = puVar12;
          } while ((int)uVar40 < iVar22);
          iVar17 = *(int *)((long)plVar16 + 0xac);
        }
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < iVar17);
    }
LAB_1093b3c80:
    if (lStack_2a8 != 0) {
      lStack_2a0 = lStack_2a8;
      __ZdlPv();
    }
    if (alStack_290[0] == 0) goto LAB_1093b36b0;
  }
  __ZdlPv(alStack_290[0]);
LAB_1093b36b0:
  if ((char)bStack_261 < '\0') {
    __ZdlPv(uStack_278);
  }
  if ((char)bStack_249 < '\0') {
    __ZdlPv(uStack_260);
  }
  return;
}



/* Entry: 1093b3504; end: 1093b3df7;  */

void FUN_1093b3504(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  long lStack_100;
  long alStack_f0 [2];
  char cStack_d9;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 uStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  
  ppuVar4 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x38) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_1 + 0x38);
  }
  FUN_1093e96e8(&uStack_c0,param_2,ppuVar4);
  ppuVar4 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x40) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_1 + 0x40);
  }
  FUN_1093e96e8(&uStack_d8,param_2,ppuVar4);
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
  }
  if (uStack_b8 == 0) {
LAB_1093b363c:
    FUN_10937e740(alStack_f0,&UNK_10f569403);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2c4,alStack_f0);
LAB_1093b36a0:
    if (-1 < cStack_d9) goto LAB_1093b36b0;
  }
  else {
    if (-1 < (char)bStack_c1) {
      uStack_d0 = (ulong)bStack_c1;
    }
    if (uStack_d0 == 0) goto LAB_1093b363c;
    lVar13 = param_2;
    FUN_1093c7e44(param_2,&uStack_c0);
    if (lVar13 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b3d24:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1093b3d28);
      (*pcVar6)();
    }
    uVar11 = *(ulong *)(lVar13 + 0x28);
    if (((int)uVar11 != 1) || ((*(ulong *)(lVar13 + 0x30) & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(alStack_f0,&UNK_10f569434);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2cb,alStack_f0);
      goto LAB_1093b36a0;
    }
    iVar19 = (int)*(ulong *)(lVar13 + 0x30);
    iVar14 = (int)(uVar11 >> 0x20) + -1;
    if (*(int *)(param_1 + 0x48) * (iVar19 + -1) + 1 != *(int *)(param_3 + 0xa8) ||
        *(int *)(param_1 + 0x48) * iVar14 + 1 != *(int *)(param_3 + 0xac)) {
      FUN_10937e740(alStack_f0,&UNK_10f569456);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2d1,alStack_f0);
      goto LAB_1093b36a0;
    }
    FUN_1093c7e44(param_2,&uStack_d8);
    if (param_2 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b3d24;
    }
    uVar12 = *(ulong *)(param_2 + 0x28);
    if (((((int)uVar12 != 1) || (uVar12 >> 0x20 != uVar11 >> 0x20)) ||
        ((int)*(ulong *)(param_2 + 0x30) != iVar19)) ||
       ((*(ulong *)(param_2 + 0x30) & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(alStack_f0,&UNK_10f56947b);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2d8,alStack_f0);
      goto LAB_1093b36a0;
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    if (((int)uVar5 < 1) || (*(uint *)(param_1 + 0x28) != uVar5)) {
      FUN_10937e740(alStack_f0,&UNK_10f56949c);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2de,alStack_f0);
      goto LAB_1093b36a0;
    }
    FUN_1093e3918(alStack_f0,(ulong *)(lVar13 + 0x28));
    FUN_1093e3918(&lStack_108,(ulong *)(param_2 + 0x28));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    uVar11 = *(ulong *)(param_3 + 0x78);
    if (uVar11 == 0) {
      uVar11 = *(ulong *)(param_3 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(ulong *)(param_3 + 0x78) = uVar11;
    }
    if (*(long *)(uVar11 + 0x100) != 0) {
      func_0x000109309fb0();
    }
    *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) & 0xfffffbff;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    uVar11 = *(ulong *)(param_3 + 0x78);
    if (uVar11 == 0) {
      uVar11 = *(ulong *)(param_3 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(ulong *)(param_3 + 0x78) = uVar11;
    }
    *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) | 0x400;
    uVar12 = *(ulong *)(uVar11 + 0x100);
    if (uVar12 == 0) {
      uVar12 = *(ulong *)(uVar11 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      func_0x000109312198();
      *(ulong *)(uVar11 + 0x100) = uVar12;
    }
    piVar17 = (int *)(uVar12 + 0x18);
    iVar9 = *piVar17;
    *(undefined4 *)(uVar12 + 0x38) = *(undefined4 *)(param_3 + 0xa8);
    uVar16 = *(uint *)(uVar12 + 0x10);
    *(uint *)(uVar12 + 0x10) = uVar16 | 4;
    *(undefined4 *)(uVar12 + 0x3c) = *(undefined4 *)(param_3 + 0xac);
    *(uint *)(uVar12 + 0x10) = uVar16 | 0xc;
    iVar10 = iVar9 + 6;
    if (*(int *)(uVar12 + 0x1c) < iVar10) {
      FUN_109311970(piVar17,iVar9,iVar10);
      iVar9 = *piVar17;
    }
    lVar13 = 0;
    lVar15 = *(long *)(uVar12 + 0x20);
    *(int *)(uVar12 + 0x18) = iVar10;
    do {
      *(undefined4 *)(lVar15 + (long)iVar9 * 4 + lVar13) = *(undefined4 *)(&UNK_10dfc8fc8 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x18);
    *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 1;
    puVar7 = *(undefined8 **)(uVar12 + 8);
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = *(undefined8 **)((ulong)puVar7 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(uVar12 + 0x28) >> 1 & 1) == 0) {
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x18;
        __Znwm();
        uVar11 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar11 = 3;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(ulong *)(uVar12 + 0x28) = uVar11 | (ulong)puVar7;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
    *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 2;
    puVar7 = *(undefined8 **)(uVar12 + 8);
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = *(undefined8 **)((ulong)puVar7 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(uVar12 + 0x30) >> 1 & 1) == 0) {
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x18;
        __Znwm();
        uVar11 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar11 = 3;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(ulong *)(uVar12 + 0x30) = uVar11 | (ulong)puVar7;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
    *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 1;
    puVar7 = *(undefined8 **)(uVar12 + 8);
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = *(undefined8 **)((ulong)puVar7 & 0xfffffffffffffffe);
    }
    if (((uint)*(ulong *)(uVar12 + 0x28) >> 1 & 1) == 0) {
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x18;
        __Znwm();
        uVar11 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar11 = 3;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(ulong *)(uVar12 + 0x28) = uVar11 | (ulong)puVar7;
    }
    else {
      puVar7 = (undefined8 *)(*(ulong *)(uVar12 + 0x28) & 0xfffffffffffffffc);
    }
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      puVar7 = (undefined8 *)*puVar7;
    }
    *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 2;
    puVar8 = *(undefined8 **)(uVar12 + 8);
    if (((ulong)puVar8 & 1) != 0) {
      puVar8 = *(undefined8 **)((ulong)puVar8 & 0xfffffffffffffffe);
    }
    if (((uint)*(ulong *)(uVar12 + 0x30) >> 1 & 1) == 0) {
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x18;
        __Znwm();
        uVar11 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar11 = 3;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(ulong *)(uVar12 + 0x30) = uVar11 | (ulong)puVar8;
    }
    else {
      puVar8 = (undefined8 *)(*(ulong *)(uVar12 + 0x30) & 0xfffffffffffffffc);
    }
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      puVar8 = (undefined8 *)*puVar8;
    }
    iVar10 = *(int *)(param_3 + 0xac);
    if (0 < iVar10) {
      uVar16 = 0;
      fVar26 = (float)iVar14;
      fVar29 = (float)(iVar19 + -1);
      iVar14 = *(int *)(param_3 + 0xa8);
      fVar30 = 1.0 / (float)*(int *)(param_1 + 0x48);
      do {
        if (0 < iVar14) {
          uVar21 = 0;
          fVar22 = fVar30 * (float)uVar16;
          fVar23 = fVar26;
          if (fVar22 <= fVar26) {
            fVar23 = fVar22;
          }
          iVar10 = iVar19;
          if (fVar23 == (float)(int)fVar23) {
            iVar10 = 0;
          }
          fVar22 = (float)((int)fVar23 + 1) - fVar23;
          puVar18 = puVar8;
          puVar20 = puVar7;
          do {
            fVar24 = fVar30 * (float)uVar21;
            fVar25 = fVar29;
            if (fVar24 <= fVar29) {
              fVar25 = fVar24;
            }
            uVar1 = (int)(long)fVar25 + (int)(long)fVar23 * iVar19;
            uVar11 = (ulong)*(float *)(lStack_108 +
                                      (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar1 << 2));
            if (uVar5 <= (uint)uVar11) {
              FUN_10937e740(auStack_120,&UNK_10f5694d7);
              FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5693f3,0x2fc,auStack_120);
              if (cStack_109 < '\0') {
                __ZdlPv(auStack_120[0]);
              }
              goto LAB_1093b3c80;
            }
            lVar13 = (uVar11 & 0xffffffff) * 4;
            fVar27 = *(float *)(*(long *)(param_1 + 0x20) + lVar13) * 255.0;
            fVar24 = 255.0;
            if (fVar27 <= 255.0) {
              fVar24 = fVar27;
            }
            fVar28 = 0.0;
            if (0.0 <= fVar27) {
              fVar28 = fVar24;
            }
            *(char *)puVar20 = (char)(long)fVar28;
            fVar27 = *(float *)(*(long *)(param_1 + 0x30) + lVar13) * 255.0;
            fVar24 = 255.0;
            if (fVar27 <= 255.0) {
              fVar24 = fVar27;
            }
            fVar28 = 0.0;
            if (0.0 <= fVar27) {
              fVar28 = fVar24;
            }
            puVar7 = (undefined8 *)((long)puVar20 + 2);
            *(char *)((long)puVar20 + 1) = (char)(long)fVar28;
            iVar14 = (int)fVar23 * iVar19 + (int)fVar25;
            iVar9 = iVar14;
            if (fVar25 != (float)(int)fVar25) {
              iVar9 = iVar14 + 1;
            }
            iVar2 = iVar14 + iVar10;
            iVar3 = iVar2;
            if (fVar25 != (float)(int)fVar25) {
              iVar3 = iVar2 + 1;
            }
            fVar25 = (float)((int)fVar25 + 1) - fVar25;
            fVar25 = -((1.0 - fVar22) * (1.0 - fVar25) * *(float *)(alStack_f0[0] + (long)iVar3 * 4)
                      ) - (fVar22 * (1.0 - fVar25) * *(float *)(alStack_f0[0] + (long)iVar9 * 4) +
                           *(float *)(alStack_f0[0] + (long)iVar14 * 4) * fVar22 * fVar25 +
                          *(float *)(alStack_f0[0] + (long)iVar2 * 4) * (1.0 - fVar22) * fVar25);
            _expf();
            puVar8 = (undefined8 *)((long)puVar18 + 1);
            *(char *)puVar18 = (char)(long)((1.0 / (fVar25 + 1.0)) * 255.0);
            uVar21 = uVar21 + 1;
            iVar14 = *(int *)(param_3 + 0xa8);
            puVar18 = puVar8;
            puVar20 = puVar7;
          } while ((int)uVar21 < iVar14);
          iVar10 = *(int *)(param_3 + 0xac);
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar10);
    }
LAB_1093b3c80:
    if (lStack_108 != 0) {
      lStack_100 = lStack_108;
      __ZdlPv();
    }
    if (alStack_f0[0] == 0) goto LAB_1093b36b0;
  }
  __ZdlPv(alStack_f0[0]);
LAB_1093b36b0:
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(uStack_d8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(uStack_c0);
  }
  return;
}



/* Entry: 1093b3df8; end: 1093b3fd3;  */

void FUN_1093b3df8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x18);
  }
  FUN_1093e96e8(&uStack_58,param_3,ppuVar1);
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
  }
  if (uStack_50 == 0) {
    FUN_10937e740(auStack_70,&UNK_10f56951d);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569508,0x310,auStack_70);
  }
  else {
    FUN_1093c7e44(param_3,&uStack_58);
    if (param_3 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b3f90);
      (*pcVar4)();
    }
    iVar2 = *(int *)(param_4 + 0xa8);
    iVar3 = *(int *)(param_4 + 0xac);
    if ((*(int *)(param_3 + 0x30) + -1) * *(int *)(param_1 + 0x20) + 1 == iVar2 &&
        (*(int *)(param_3 + 0x2c) + -1) * *(int *)(param_1 + 0x20) + 1 == iVar3) {
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
      uVar5 = *(ulong *)(param_4 + 0x78);
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(param_4 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109312438();
        *(ulong *)(param_4 + 0x78) = uVar5;
      }
      FUN_1093a2534(param_3 + 0x28,param_2,iVar2,iVar3,uVar5);
      goto LAB_1093b3f4c;
    }
    FUN_10937e740(auStack_70,&UNK_10f569553);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569508,0x318,auStack_70);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
LAB_1093b3f4c:
  if ((char)bStack_41 < '\0') {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 1093b3fd4; end: 1093b412f;  */

void FUN_1093b3fd4(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 uStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x28);
  }
  FUN_1093e96e8(&uStack_48,param_2,ppuVar1);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  if (uStack_40 == 0) {
    FUN_10937e740(auStack_60,&UNK_10f569588);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56956a,0x328,auStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  else {
    FUN_1093c7e44(param_2,&uStack_48);
    if (param_2 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1093b40f8);
      (*pcVar2)();
    }
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    uVar3 = *(ulong *)(param_3 + 0x78);
    if (uVar3 == 0) {
      uVar3 = *(ulong *)(param_3 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000109312438();
      *(ulong *)(param_3 + 0x78) = uVar3;
    }
    FUN_1093a2fc8(param_2 + 0x28,param_1,uVar3);
  }
  if ((char)bStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 1093b4130; end: 1093b443f;  */

/* WARNING: Removing unreachable block (ram,0x0001093b438c) */

void FUN_1093b4130(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  long lStack_50;
  long lStack_48;
  char cStack_39;
  undefined1 auStack_38 [8];
  ulong uStack_30;
  byte bStack_21;
  
  ppuVar2 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_1 + 0x18);
  }
  FUN_1093e96e8(auStack_38,param_2,ppuVar2);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 == 0) {
    FUN_10937e740(&lStack_50,&UNK_10f5695e6);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5695c7,0x337,&lStack_50);
    if (-1 < cStack_39) {
      return;
    }
  }
  else {
    FUN_1093c7e44(param_2,auStack_38);
    if (param_2 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b43cc);
      (*pcVar4)();
    }
    FUN_1093e3918(&lStack_50,param_2 + 0x28);
    ppuVar11 = *(undefined ***)(param_3 + 0x78);
    ppuVar2 = &PTR_PTR_1132cfaf0;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar2 = ppuVar11;
    }
    if ((*(byte *)((long)ppuVar2 + 0x11) >> 6 & 1) == 0) {
      FUN_10937e740(auStack_68,&UNK_10f569626);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5695c7,0x33e,auStack_68);
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
    }
    else {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar11 = *(undefined ***)(param_3 + 8);
        if (((ulong)ppuVar11 & 1) != 0) {
          ppuVar11 = *(undefined ***)((ulong)ppuVar11 & 0xfffffffffffffffe);
        }
        func_0x000109312438();
        *(undefined ***)(param_3 + 0x78) = ppuVar11;
      }
      *(uint *)(ppuVar11 + 2) = *(uint *)(ppuVar11 + 2) | 0x4000;
      puVar10 = ppuVar11[0x24];
      if (puVar10 == (undefined *)0x0) {
        puVar10 = ppuVar11[1];
        if (((ulong)puVar10 & 1) != 0) {
          puVar10 = *(undefined **)((ulong)puVar10 & 0xfffffffffffffffe);
        }
        func_0x000109312090();
        ppuVar11[0x24] = puVar10;
      }
      if ((int)*(uint *)(puVar10 + 0x20) < 1) {
        iVar3 = *(int *)(puVar10 + 0x10);
        iVar1 = iVar3 + 7;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        uVar5 = iVar1 >> 3;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x20) / 0xe;
      }
      uStack_70 = (ulong)(int)uVar5;
      uStack_78 = (ulong)(lStack_48 - lStack_50 >> 2) / 3;
      uVar6 = uStack_70;
      if (uStack_78 < (ulong)(long)(int)uVar5) {
        FUN_1093b4440(auStack_68,&UNK_10f569647,&uStack_70,&uStack_78);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5695c7,0x345,auStack_68);
        uVar6 = uStack_78;
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
          uVar6 = uStack_78;
        }
      }
      uStack_78 = uVar6;
      if (uStack_78 != 0) {
        lVar7 = *(long *)(puVar10 + 0x28);
        uVar9 = 4;
        uVar6 = uStack_78;
        puVar8 = (undefined8 *)(lStack_50 + 4);
        do {
          uVar12 = *puVar8;
          *(undefined4 *)(lVar7 + (long)((int)uVar9 + -1) * 4) = *(undefined4 *)((long)puVar8 + -4);
          *(undefined8 *)(lVar7 + (-(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2)) = uVar12;
          uVar9 = (ulong)((int)uVar9 + 0xe);
          uVar6 = uVar6 - 1;
          puVar8 = (undefined8 *)((long)puVar8 + 0xc);
        } while (uVar6 != 0);
      }
    }
    if (lStack_50 == 0) {
      return;
    }
    lStack_48 = lStack_50;
  }
  __ZdlPv(lStack_50);
  return;
}



/* Entry: 1093b4440; end: 1093b455b;  */

void FUN_1093b4440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  undefined **appuStack_118 [19];
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  FUN_10926db08(&ppuStack_188);
  puStack_80 = &uStack_70;
  uStack_78 = 2;
  pcStack_68 = FUN_1093c7f28;
  pcStack_60 = FUN_1093c7f78;
  pcStack_50 = FUN_1093c7f28;
  pcStack_48 = FUN_1093c7f78;
  uStack_70 = param_3;
  uStack_58 = param_4;
  FUN_10937ad5c(&ppuStack_188,param_2,puStack_80,2);
  FUN_10926dc5c(param_1,&ppuStack_180,&puStack_80);
  appuStack_118[0] = &PTR_DAT_11088d708;
  ppuStack_188 = &PTR_SUB_11088d6e0;
  ppuStack_180 = &PTR_DAT_11088d7b0;
  if (cStack_129 < '\0') {
    __ZdlPv(uStack_140);
  }
  ppuStack_180 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_178);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_118);
  return;
}



/* Entry: 1093b455c; end: 1093b473b;  */

void FUN_1093b455c(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined4 uVar18;
  
  uVar9 = *(ulong *)(param_2 + 0x18);
  puVar11 = (ulong *)(param_2 + 0x18);
  if ((uVar9 & 1) != 0) {
    puVar11 = (ulong *)(uVar9 + 7);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar2 = puVar11 + *(int *)(param_2 + 0x20);
    do {
      uVar15 = *puVar11;
      *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 0x4000;
      uVar9 = *(ulong *)(uVar15 + 0x120);
      if (uVar9 == 0) {
        uVar9 = *(ulong *)(uVar15 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        func_0x000109312090();
        *(ulong *)(uVar15 + 0x120) = uVar9;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        FUN_1093a2208(0xff7fffff,*(undefined4 *)(param_1 + 0x18),uVar9);
      }
      uVar10 = *(ulong *)(uVar15 + 0x48);
      puVar14 = (ulong *)(uVar15 + 0x48);
      if ((uVar10 & 1) != 0) {
        puVar14 = (ulong *)(uVar10 + 7);
      }
      if (*(int *)(uVar15 + 0x50) != 0) {
        puVar3 = puVar14 + *(int *)(uVar15 + 0x50);
        do {
          if ((*(byte *)(*puVar14 + 0x11) >> 6 & 1) != 0) {
            lVar16 = *(long *)(*puVar14 + 0x120);
            iVar6 = *(int *)(uVar9 + 0x20);
            uVar15 = (ulong)iVar6;
            if (*(int *)(lVar16 + 0x20) != 0) {
              puVar13 = *(undefined4 **)(lVar16 + 0x28);
              lVar12 = (long)*(int *)(lVar16 + 0x20) << 2;
              do {
                uVar18 = *puVar13;
                if ((int)uVar15 == *(int *)(uVar9 + 0x24)) {
                  FUN_109311970(uVar9 + 0x20,uVar15,(int)uVar15 + 1);
                  uVar15 = (ulong)*(uint *)(uVar9 + 0x20);
                }
                *(undefined4 *)(*(long *)(uVar9 + 0x28) + (long)(int)uVar15 * 4) = uVar18;
                uVar1 = (int)uVar15 + 1;
                uVar15 = (ulong)uVar1;
                *(uint *)(uVar9 + 0x20) = uVar1;
                puVar13 = puVar13 + 1;
                lVar12 = lVar12 + -4;
              } while (lVar12 != 0);
            }
            if (*(int *)(lVar16 + 0x30) != 0) {
              piVar17 = *(int **)(lVar16 + 0x38);
              iVar4 = *(int *)(uVar9 + 0x30);
              iVar8 = *(int *)(uVar9 + 0x34);
              lVar16 = (long)*(int *)(lVar16 + 0x30) << 2;
              do {
                iVar5 = *piVar17;
                iVar7 = iVar4;
                if (iVar4 == iVar8) {
                  func_0x000107c282d8(uVar9 + 0x30,iVar4,iVar4 + 1);
                  iVar7 = *(int *)(uVar9 + 0x30);
                  iVar8 = *(int *)(uVar9 + 0x34);
                }
                iVar4 = iVar7 + 1;
                *(int *)(uVar9 + 0x30) = iVar4;
                *(int *)(*(long *)(uVar9 + 0x38) + (long)iVar7 * 4) = iVar5 + iVar6 / 0xe;
                piVar17 = piVar17 + 1;
                lVar16 = lVar16 + -4;
              } while (lVar16 != 0);
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar3);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar2);
  }
  return;
}



/* Entry: 1093b473c; end: 1093b488f;  */

void FUN_1093b473c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  byte bVar5;
  byte bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  uVar9 = *(ulong *)(param_4 + 0x18);
  puVar13 = (ulong *)(param_4 + 0x18);
  if ((uVar9 & 1) != 0) {
    puVar13 = (ulong *)(uVar9 + 7);
  }
  if (*(int *)(param_4 + 0x20) != 0) {
    puVar1 = puVar13 + *(int *)(param_4 + 0x20);
    do {
      uVar12 = *puVar13;
      uVar9 = *(ulong *)(uVar12 + 0x48);
      puVar14 = (ulong *)(uVar12 + 0x48);
      if ((uVar9 & 1) != 0) {
        puVar14 = (ulong *)(uVar9 + 7);
      }
      if (*(int *)(uVar12 + 0x50) != 0) {
        lVar11 = (long)*(int *)(uVar12 + 0x50) << 3;
        do {
          uVar9 = *puVar14;
          if ((*(ulong *)(uVar9 + 0xb0) & 3) == 0) {
            ppuVar8 = ppuRam00000001132d06b0;
            if (ppuRam00000001132d06b0 == (undefined **)0x0) {
              ppuVar8 = &PTR_DAT_1132d0698;
              func_0x00010b4befb0();
            }
          }
          else {
            ppuVar8 = (undefined **)(*(ulong *)(uVar9 + 0xb0) & 0xfffffffffffffffc);
          }
          puVar10 = (ulong *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
          bVar5 = *(byte *)((long)ppuVar8 + 0x17);
          puVar2 = ppuVar8[1];
          if (-1 < (char)bVar5) {
            puVar2 = (undefined *)(ulong)bVar5;
          }
          bVar6 = *(byte *)((long)puVar10 + 0x17);
          puVar3 = (undefined *)puVar10[1];
          if (-1 < (char)bVar6) {
            puVar3 = (undefined *)(ulong)bVar6;
          }
          if (puVar2 == puVar3) {
            ppuVar7 = (undefined **)*ppuVar8;
            if (-1 < (char)bVar5) {
              ppuVar7 = ppuVar8;
            }
            puVar4 = (ulong *)*puVar10;
            if (-1 < (char)bVar6) {
              puVar4 = puVar10;
            }
            _memcmp(ppuVar7,puVar4);
            if ((int)ppuVar7 == 0) {
              FUN_1093e0068(param_1,param_3,uVar9);
              FUN_1093d3444(param_2,*(undefined4 *)(param_1 + 0x28),uVar12,uVar9);
              break;
            }
          }
          puVar14 = puVar14 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1);
  }
  return;
}



/* Entry: 1093b4890; end: 1093b4f33;  */

void FUN_1093b4890(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 **appuStack_100 [3];
  undefined8 uStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 uStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined1 uStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x20);
  }
  FUN_1093e96e8(&uStack_d0,param_3,ppuVar2);
  ppuVar2 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x28);
  }
  FUN_1093e96e8(&uStack_e8,param_3,ppuVar2);
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
  }
  if (uStack_c8 == 0) {
LAB_1093b4cd4:
    FUN_10937e740(&uStack_160,&UNK_10f56968d);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569681,0x37f,&uStack_160);
LAB_1093b4d6c:
    appuStack_100[0] = (undefined8 **)uStack_160;
    if (lStack_150 < 0) {
LAB_1093b4d78:
      __ZdlPv(appuStack_100[0]);
    }
LAB_1093b4d7c:
    if ((char)bStack_d1 < '\0') {
      __ZdlPv(uStack_e8);
    }
    if ((char)bStack_b9 < '\0') {
      __ZdlPv(uStack_d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
    }
    if (uStack_e0 == 0) goto LAB_1093b4cd4;
    lVar8 = param_3;
    FUN_1093c7e44(param_3,&uStack_d0);
    if (lVar8 != 0) {
      FUN_1093c7e44(param_3,&uStack_e8);
      if (param_3 == 0) {
        FUN_109262df8(&UNK_10f56ae8d);
        goto LAB_1093b4e4c;
      }
      uVar7 = *(ulong *)(lVar8 + 0x28);
      if (((int)uVar7 != 1) ||
         (uVar9 = *(ulong *)(lVar8 + 0x30), (uVar9 & 0xffffffff00000000) != 0x100000000)) {
        FUN_10937e740(&uStack_160,&UNK_10f5696b7);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569681,0x388,&uStack_160);
        goto LAB_1093b4d6c;
      }
      if ((*(int *)(param_1 + 0x24) * ((int)uVar9 + -1) + 1 != *(int *)(param_4 + 0xa8)) ||
         (*(int *)(param_1 + 0x24) * ((int)(uVar7 >> 0x20) + -1) + 1 != *(int *)(param_4 + 0xac))) {
        FUN_10937e740(&uStack_160,&UNK_10f5696d6);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569681,0x38e,&uStack_160);
        goto LAB_1093b4d6c;
      }
      FUN_1093e3918(appuStack_100,lVar8 + 0x28);
      FUN_1093e3918(&lStack_118,param_3 + 0x28);
      puStack_b0 = (undefined8 *)0x0;
      puStack_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      uStack_160 = (undefined **)((ulong)uStack_160._4_4_ << 0x20);
      lStack_128 = 0;
      uStack_120 = 0;
      lStack_130 = 0;
      FUN_1092d1c20(&lStack_130,&uStack_160,(long)&uStack_160 + 4,1);
      FUN_1093e3dcc(*(undefined4 *)(param_1 + 0x1c),appuStack_100[0],lStack_118,uVar9,uVar7 >> 0x20,
                    1,0xffffffff,*(undefined4 *)(param_1 + 0x24),&lStack_130,&puStack_b0);
      fVar10 = *(float *)(param_1 + 0x20);
      uStack_160 = &PTR_FUN_110aefb40;
      uStack_158 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      lStack_150 = 0;
      uStack_138 = 0;
      if (puStack_b0 != puStack_a8) {
        plVar1 = (long *)(param_4 + 0x18);
        do {
          puVar4 = puStack_b0;
          if (*(int *)(param_1 + 0x18) <= *(int *)(param_4 + 0x20)) break;
          if (puStack_b0 != &uStack_160) {
            func_0x0001093412e4(&uStack_160);
            FUN_109341198(&uStack_160,puVar4);
          }
          FUN_1093c80c0(puStack_b0,puStack_a8,&uStack_b1,
                        ((long)puStack_a8 - (long)puStack_b0 >> 4) * -0x5555555555555555);
          puVar4 = puStack_a8;
          if ((*(byte *)(puStack_a8 + -5) & 1) != 0) {
            func_0x0001053936ac(puStack_a8 + -5);
          }
          puStack_a8 = puVar4 + -6;
          plVar6 = plVar1;
          if ((*(ulong *)(param_4 + 0x18) & 1) != 0) {
            plVar6 = (long *)(*(ulong *)(param_4 + 0x18) + 7);
          }
          if (*(int *)(param_4 + 0x20) != 0) {
            lVar8 = (long)*(int *)(param_4 + 0x20) << 3;
            do {
              ppuVar2 = &PTR_PTR_1132d8ba0;
              if (*(undefined ***)(*plVar6 + 0xb8) != (undefined **)0x0) {
                ppuVar2 = *(undefined ***)(*plVar6 + 0xb8);
              }
              if ((((uint)lStack_150 & 3) == 3) &&
                 (((*(uint *)(ppuVar2 + 2) ^ 0xffffffff) & 3) == 0)) {
                fVar11 = *(float *)((long)ppuVar2 + 0x1c) - uStack_148._4_4_;
                fVar11 = fVar11 * fVar11 +
                         (*(float *)(ppuVar2 + 3) - (float)uStack_148) *
                         (*(float *)(ppuVar2 + 3) - (float)uStack_148);
              }
              else {
                fVar11 = 3.4028235e+38;
              }
              if (fVar11 <= fVar10 * fVar10) goto LAB_1093b4c94;
              plVar6 = plVar6 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          plVar6 = plVar1;
          func_0x000107c303b0(plVar1,0x109312438);
          *(uint *)(plVar6 + 2) = *(uint *)(plVar6 + 2) | 1;
          uVar7 = plVar6[1];
          if ((uVar7 & 1) != 0) {
            uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
          }
          func_0x00010b4bf088(plVar6 + 0x16,&DAT_10f5262f1,6,uVar7);
          *(undefined4 *)((long)plVar6 + 0x164) = 0xffffffff;
          uVar3 = *(uint *)(plVar6 + 2);
          *(uint *)(plVar6 + 2) = uVar3 | 0x20000000;
          fVar11 = -uStack_140._4_4_;
          _expf();
          fVar11 = 1.0 / (fVar11 + 1.0);
          *(float *)((long)plVar6 + 0x134) = fVar11;
          *(undefined1 *)((long)plVar6 + 0x13c) = 1;
          *(uint *)(plVar6 + 2) = uVar3 | 0x200a0002;
          uVar7 = plVar6[0x17];
          if (uVar7 == 0) {
            uVar7 = plVar6[1];
            if ((uVar7 & 1) != 0) {
              uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
            }
            func_0x0001093416e0();
            plVar6[0x17] = uVar7;
          }
          *(float *)(uVar7 + 0x18) = (float)uStack_148;
          *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
          *(uint *)(plVar6 + 2) = *(uint *)(plVar6 + 2) | 2;
          uVar7 = plVar6[0x17];
          if (uVar7 == 0) {
            uVar7 = plVar6[1];
            if ((uVar7 & 1) != 0) {
              uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
            }
            func_0x0001093416e0();
            plVar6[0x17] = uVar7;
          }
          *(float *)(uVar7 + 0x1c) = uStack_148._4_4_;
          *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 2;
          *(uint *)(plVar6 + 2) = *(uint *)(plVar6 + 2) | 2;
          uVar7 = plVar6[0x17];
          if (uVar7 == 0) {
            uVar7 = plVar6[1];
            if ((uVar7 & 1) != 0) {
              uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
            }
            func_0x0001093416e0();
            plVar6[0x17] = uVar7;
          }
          *(float *)(uVar7 + 0x24) = fVar11;
          *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 8;
          *(undefined4 *)((long)plVar6 + 0x154) = 1;
          *(uint *)(plVar6 + 2) = *(uint *)(plVar6 + 2) | 0x2000000;
LAB_1093b4c94:
        } while (puStack_b0 != puStack_a8);
        if ((uStack_158 & 1) != 0) {
          func_0x0001053936ac(&uStack_158);
        }
      }
      if (lStack_130 != 0) {
        lStack_128 = lStack_130;
        __ZdlPv();
      }
      uStack_160 = (undefined **)&puStack_b0;
      FUN_1093c3b4c(&uStack_160);
      if (lStack_118 != 0) {
        lStack_110 = lStack_118;
        __ZdlPv();
      }
      if (appuStack_100[0] != (undefined8 **)0x0) goto LAB_1093b4d78;
      goto LAB_1093b4d7c;
    }
  }
  FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b4e4c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1093b4e50);
  (*pcVar5)();
}



/* Entry: 1093b4f34; end: 1093b4f97;  */

void FUN_1093b4f34(long *param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  FUN_1093c80c0(*param_1,param_1[1],&uStack_21,(param_1[1] - *param_1 >> 4) * -0x5555555555555555);
  lVar1 = param_1[1];
  if ((*(byte *)(lVar1 + -0x28) & 1) != 0) {
    func_0x0001053936ac();
  }
  param_1[1] = lVar1 + -0x30;
  return;
}



/* Entry: 1093b4f98; end: 1093b552b;  */

/* WARNING: Removing unreachable block (ram,0x0001093b546c) */

void FUN_1093b4f98(long param_1,long param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  ulong *puVar11;
  long lVar12;
  long alStack_100 [2];
  char cStack_e9;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  ulong auStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  byte bStack_69;
  
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x50);
  }
  FUN_1093e96e8(auStack_80,param_3,ppuVar1);
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
  }
  if (uStack_78 == 0) {
    FUN_10937e740(alStack_100,&UNK_10f569702);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5696f8,0x3c7,alStack_100);
  }
  else {
    FUN_1093c7e44(param_3,auStack_80);
    if (param_3 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1093b54a4);
      (*pcVar4)();
    }
    uVar2 = *(ulong *)(param_3 + 0x28);
    uVar3 = *(ulong *)(param_3 + 0x30);
    if ((int)uVar2 == 1 && (uVar3 & 0xffffffff00000000) == 0x800000000) {
      if (*(int *)(param_1 + 0x24) * ((int)uVar3 + -1) + 1 == *(int *)(param_4 + 0xa8) &&
          *(int *)(param_1 + 0x24) * ((int)(uVar2 >> 0x20) + -1) + 1 == *(int *)(param_4 + 0xac)) {
        FUN_1093e3918(&lStack_98);
        ppuStack_c8 = &PTR_FUN_110aefb90;
        auStack_c0[0] = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        auStack_c0[1] = 0;
        uStack_a0 = 0;
        uVar7 = *(ulong *)(param_4 + 0x18);
        puVar11 = (ulong *)(param_4 + 0x18);
        if ((uVar7 & 1) != 0) {
          puVar11 = (ulong *)(uVar7 + 7);
        }
        if (*(int *)(param_4 + 0x20) != 0) {
          lVar12 = (long)*(int *)(param_4 + 0x20) << 3;
          do {
            uVar7 = *puVar11;
            uVar6 = *(uint *)(uVar7 + 0x164);
            if (uVar6 == 0xffffffff) {
              if ((*(byte *)(uVar7 + 0x10) >> 1 & 1) != 0) {
                puVar8 = (ulong *)(uVar7 + 0xb8);
                goto LAB_1093b5188;
              }
            }
            else if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(uVar7 + 0x20))) {
              uVar9 = *(ulong *)(uVar7 + 0x18);
              puVar8 = (ulong *)(uVar7 + 0x18);
              if ((uVar9 & 1) != 0) {
                puVar8 = (ulong *)(uVar9 + (ulong)uVar6 * 8 + 7);
              }
LAB_1093b5188:
              pppuVar10 = (undefined ***)*puVar8;
              if (pppuVar10 != &ppuStack_c8) {
                func_0x000109340dd8(&ppuStack_c8);
                func_0x000109340c8c(&ppuStack_c8,pppuVar10);
              }
              FUN_1093e3fc0(alStack_100,(undefined4)uStack_b0,uStack_b0._4_4_,lStack_98,uVar3,
                            uVar2 >> 0x20,*(undefined4 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x24));
              *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 4;
              uVar9 = *(ulong *)(uVar7 + 0xc0);
              if (uVar9 == 0) {
                uVar9 = *(ulong *)(uVar7 + 8);
                if ((uVar9 & 1) != 0) {
                  uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
                }
                func_0x000109312344();
                *(ulong *)(uVar7 + 0xc0) = uVar9;
              }
              *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 1;
              uVar5 = *(ulong *)(uVar9 + 0x18);
              if (uVar5 == 0) {
                uVar5 = *(ulong *)(uVar9 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000109341730();
                *(ulong *)(uVar9 + 0x18) = uVar5;
              }
              ppuVar1 = &PTR_PTR_1132d8bd0;
              if (ppuStack_e8 != (undefined **)0x0) {
                ppuVar1 = ppuStack_e8;
              }
              *(undefined4 *)(uVar5 + 0x18) = *(undefined4 *)(ppuVar1 + 3);
              *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 1;
              *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 1;
              uVar5 = *(ulong *)(uVar9 + 0x18);
              if (uVar5 == 0) {
                uVar5 = *(ulong *)(uVar9 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000109341730();
                *(ulong *)(uVar9 + 0x18) = uVar5;
              }
              ppuVar1 = &PTR_PTR_1132d8bd0;
              if (ppuStack_e0 != (undefined **)0x0) {
                ppuVar1 = ppuStack_e0;
              }
              *(undefined4 *)(uVar5 + 0x1c) = *(undefined4 *)((long)ppuVar1 + 0x1c);
              *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 2;
              *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 2;
              uVar5 = *(ulong *)(uVar9 + 0x20);
              if (uVar5 == 0) {
                uVar5 = *(ulong *)(uVar9 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000109341730();
                *(ulong *)(uVar9 + 0x20) = uVar5;
              }
              ppuVar1 = &PTR_PTR_1132d8bd0;
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar1 = ppuStack_d8;
              }
              *(undefined4 *)(uVar5 + 0x18) = *(undefined4 *)(ppuVar1 + 3);
              *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 1;
              *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 2;
              uVar5 = *(ulong *)(uVar9 + 0x20);
              if (uVar5 == 0) {
                uVar5 = *(ulong *)(uVar9 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000109341730();
                *(ulong *)(uVar9 + 0x20) = uVar5;
              }
              ppuVar1 = &PTR_PTR_1132d8bd0;
              if (ppuStack_d0 != (undefined **)0x0) {
                ppuVar1 = ppuStack_d0;
              }
              *(undefined4 *)(uVar5 + 0x1c) = *(undefined4 *)((long)ppuVar1 + 0x1c);
              *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 2;
              *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 0x20;
              if (*(long *)(uVar7 + 0xd8) == 0) {
                uVar5 = *(ulong *)(uVar7 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x0001093121f0();
                *(ulong *)(uVar7 + 0xd8) = uVar5;
              }
              FUN_1093b55ac(uVar9);
              *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 0x800;
              uVar5 = *(ulong *)(uVar7 + 0x108);
              if (uVar5 == 0) {
                uVar5 = *(ulong *)(uVar7 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000109312344();
                *(ulong *)(uVar7 + 0x108) = uVar5;
              }
              if (uVar9 != uVar5) {
                FUN_109308454(uVar5);
                FUN_1093086e0(uVar5,uVar9);
              }
              uVar6 = *(uint *)(param_1 + 0x10);
              if ((uVar6 >> 1 & 1) != 0) {
                FUN_1093b573c(*(undefined4 *)(param_1 + 0x1c),uVar5);
                uVar6 = *(uint *)(param_1 + 0x10);
              }
              if ((uVar6 >> 2 & 1) != 0) {
                FUN_1093b58e4(*(undefined4 *)(param_1 + 0x20),uVar5);
              }
              *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 0x1000;
              if (*(long *)(uVar7 + 0x110) == 0) {
                uVar9 = *(ulong *)(uVar7 + 8);
                if ((uVar9 & 1) != 0) {
                  uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
                }
                func_0x0001093121f0();
                *(ulong *)(uVar7 + 0x110) = uVar9;
              }
              FUN_1093b55ac(uVar5);
              FUN_109308d50(alStack_100);
            }
            puVar11 = puVar11 + 1;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
          if ((auStack_c0[0] & 1) != 0) {
            func_0x0001053936ac(auStack_c0);
          }
        }
        if (lStack_98 == 0) {
          return;
        }
        lStack_90 = lStack_98;
        goto LAB_1093b5460;
      }
      FUN_10937e740(alStack_100,&UNK_10f56974a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5696f8,0x3d5,alStack_100);
    }
    else {
      FUN_10937e740(alStack_100,&UNK_10f56972a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5696f8,0x3cf,alStack_100);
    }
  }
  lStack_98 = alStack_100[0];
  if (-1 < cStack_e9) {
    return;
  }
LAB_1093b5460:
  __ZdlPv(lStack_98);
  return;
}



/* Entry: 1093b552c; end: 1093b55ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093b552c(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (param_2 == 0xffffffff) {
    if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
      return;
    }
    puVar3 = (ulong *)(param_1 + 0xb8);
  }
  else {
    if ((int)param_2 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x20) <= (int)param_2) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x18);
    puVar3 = (ulong *)(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + (ulong)param_2 * 8 + 7);
    }
  }
  uVar2 = *puVar3;
  if (uVar2 == param_3) {
    return;
  }
  func_0x000109340dd8(param_3);
  uVar1 = *(uint *)(uVar2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(uVar2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(uVar2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(uVar2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(uVar2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x28) = *(undefined1 *)(uVar2 + 0x28);
    }
  }
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | uVar1;
  if ((*(ulong *)(uVar2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_3 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093b55ac; end: 1093b573b;  */

void FUN_1093b55ac(long param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  ppuVar3 = *(undefined ***)(param_2 + 0x18);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 8);
    if (((ulong)ppuVar3 & 1) != 0) {
      ppuVar3 = *(undefined ***)((ulong)ppuVar3 & 0xfffffffffffffffe);
    }
    func_0x000109341730();
    *(undefined ***)(param_2 + 0x18) = ppuVar3;
  }
  ppuVar1 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x18);
  }
  if (ppuVar1 != ppuVar3) {
    func_0x0001093409d8(ppuVar3);
    FUN_1093408b0(ppuVar3,ppuVar1);
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  ppuVar3 = *(undefined ***)(param_2 + 0x20);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 8);
    if (((ulong)ppuVar3 & 1) != 0) {
      ppuVar3 = *(undefined ***)((ulong)ppuVar3 & 0xfffffffffffffffe);
    }
    func_0x000109341730();
    *(undefined ***)(param_2 + 0x20) = ppuVar3;
  }
  ppuVar1 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  if (ppuVar1 != ppuVar3) {
    func_0x0001093409d8(ppuVar3);
    FUN_1093408b0(ppuVar3,ppuVar1);
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109341730();
    *(ulong *)(param_2 + 0x28) = uVar2;
  }
  ppuVar3 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
  }
  *(undefined4 *)(uVar2 + 0x18) = *(undefined4 *)(ppuVar3 + 3);
  *(uint *)(uVar2 + 0x10) = *(uint *)(uVar2 + 0x10) | 1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109341730();
    *(ulong *)(param_2 + 0x28) = uVar2;
  }
  ppuVar3 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x18);
  }
  *(undefined4 *)(uVar2 + 0x1c) = *(undefined4 *)((long)ppuVar3 + 0x1c);
  *(uint *)(uVar2 + 0x10) = *(uint *)(uVar2 + 0x10) | 2;
  return;
}



/* Entry: 1093b573c; end: 1093b58e3;  */

void FUN_1093b573c(float param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (((*(uint *)(param_2 + 0x10) & 1) != 0) && ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0)) {
    lVar1 = *(long *)(param_2 + 0x18);
    fVar4 = *(float *)(lVar1 + 0x18);
    fVar5 = *(float *)(*(long *)(param_2 + 0x20) + 0x18);
    if (fVar4 < fVar5) {
      fVar6 = *(float *)(lVar1 + 0x1c);
      fVar7 = *(float *)(*(long *)(param_2 + 0x20) + 0x1c);
      if (fVar6 < fVar7) {
        fVar8 = fVar5 - fVar4;
        fVar9 = fVar7 - fVar6;
        fVar10 = ABS(fVar5 - fVar4);
        fVar11 = ABS(param_1 * fVar9);
        if (fVar11 <= fVar10) {
          if (fVar10 <= fVar11) {
            return;
          }
          if (0.0 <= fVar9) {
            fVar9 = fVar10 / param_1;
          }
          else {
            fVar9 = -fVar10 / param_1;
          }
        }
        else {
          bVar2 = fVar8 < 0.0;
          fVar8 = fVar11;
          if (bVar2) {
            fVar8 = -fVar11;
          }
        }
        fVar5 = (fVar4 + fVar5) * 0.5;
        fVar4 = (fVar6 + fVar7) * 0.5;
        *(float *)(lVar1 + 0x18) = fVar5 - fVar8 * 0.5;
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 1;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
        uVar3 = *(ulong *)(param_2 + 0x18);
        if (uVar3 == 0) {
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109341730();
          *(ulong *)(param_2 + 0x18) = uVar3;
        }
        *(float *)(uVar3 + 0x1c) = fVar4 - fVar9 * 0.5;
        *(uint *)(uVar3 + 0x10) = *(uint *)(uVar3 + 0x10) | 2;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
        uVar3 = *(ulong *)(param_2 + 0x20);
        if (uVar3 == 0) {
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109341730();
          *(ulong *)(param_2 + 0x20) = uVar3;
        }
        *(float *)(uVar3 + 0x18) = fVar5 + fVar8 * 0.5;
        *(uint *)(uVar3 + 0x10) = *(uint *)(uVar3 + 0x10) | 1;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
        uVar3 = *(ulong *)(param_2 + 0x20);
        if (uVar3 == 0) {
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109341730();
          *(ulong *)(param_2 + 0x20) = uVar3;
        }
        *(float *)(uVar3 + 0x1c) = fVar4 + fVar9 * 0.5;
        *(uint *)(uVar3 + 0x10) = *(uint *)(uVar3 + 0x10) | 2;
      }
    }
  }
  return;
}



/* Entry: 1093b58e4; end: 1093b5a73;  */

void FUN_1093b58e4(float param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  undefined **ppuVar5;
  float fVar6;
  float fVar7;
  ulong auStack_60 [2];
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  
  if (((param_1 != 1.0) && ((*(uint *)(param_2 + 0x10) & 1) != 0)) &&
     ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0)) {
    lVar2 = *(long *)(param_2 + 0x18);
    fVar6 = *(float *)(*(long *)(param_2 + 0x20) + 0x18);
    if (*(float *)(lVar2 + 0x18) < fVar6) {
      fVar7 = *(float *)(*(long *)(param_2 + 0x20) + 0x1c);
      if (*(float *)(lVar2 + 0x1c) < fVar7) {
        auStack_60[0] = 0;
        uStack_48 = 0;
        fStack_50 = fVar6 * 0.5 + *(float *)(lVar2 + 0x18) * 0.5;
        fStack_4c = fVar7 * 0.5 + *(float *)(lVar2 + 0x1c) * 0.5;
        auStack_60[1] = 3;
        fVar6 = 1.0 - param_1;
        *(float *)(lVar2 + 0x18) = param_1 * *(float *)(lVar2 + 0x18) + fStack_50 * fVar6;
        *(float *)(lVar2 + 0x1c) = param_1 * *(float *)(lVar2 + 0x1c) + fStack_4c * fVar6;
        *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 3;
        ppuVar5 = *(undefined ***)(param_2 + 0x20);
        ppuVar1 = &PTR_PTR_1132d8bd0;
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar1 = ppuVar5;
        }
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar5 = *(undefined ***)(param_2 + 8);
          if (((ulong)ppuVar5 & 1) != 0) {
            ppuVar5 = *(undefined ***)((ulong)ppuVar5 & 0xfffffffffffffffe);
          }
          func_0x000109341730();
          *(undefined ***)(param_2 + 0x20) = ppuVar5;
          bVar4 = (auStack_60[0] & 1) == 0;
        }
        else {
          bVar4 = true;
        }
        *(float *)(ppuVar5 + 3) = param_1 * *(float *)(ppuVar1 + 3) + fStack_50 * fVar6;
        uVar3 = *(uint *)(ppuVar5 + 2);
        *(uint *)(ppuVar5 + 2) = uVar3 | 1;
        *(float *)((long)ppuVar5 + 0x1c) =
             param_1 * *(float *)((long)ppuVar1 + 0x1c) + fStack_4c * fVar6;
        *(uint *)(ppuVar5 + 2) = uVar3 | 3;
        if (!bVar4) {
          func_0x0001053936ac(auStack_60);
        }
      }
    }
  }
  return;
}



/* Entry: 1093b5a74; end: 1093b628f;  */

void FUN_1093b5a74(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined ***pppuVar8;
  int iVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined ***pppuVar19;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack_13c;
  undefined **ppuStack_138;
  ulong auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined **ppuStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  
  if ((*(byte *)(param_3 + 0x10) >> 5 & 1) == 0) {
    FUN_10937e740(&ppuStack_108,&UNK_10f569781);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56976d,0x3fa,&ppuStack_108);
    ppuVar10 = ppuStack_108;
    if (-1 < lStack_f8) {
      return;
    }
    goto LAB_1093b61a4;
  }
  if ((*(byte *)(param_2 + 0x10) >> 5 & 1) == 0) {
    return;
  }
  ppuVar10 = *(undefined ***)(param_3 + 0x90);
  ppuVar13 = *(undefined ***)(param_2 + 0x90);
  pppuStack_88 = (undefined ***)0x0;
  pppuStack_80 = (undefined ***)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  if (0 < *(int *)(param_3 + 0x20)) {
    lVar21 = 0;
    puVar1 = (ulong *)(param_2 + 0x18);
LAB_1093b5b38:
    uVar11 = *(ulong *)(param_3 + 0x18);
    puVar12 = (ulong *)(param_3 + 0x18);
    if ((uVar11 & 1) != 0) {
      puVar12 = (ulong *)(uVar11 + lVar21 * 8 + 7);
    }
    uVar11 = *puVar12;
    if (((*(char *)(uVar11 + 0x13c) == '\x01') && ((*(uint *)(uVar11 + 0x10) >> 0x10 & 1) != 0)) &&
       (uVar14 = (ulong)*(uint *)(param_2 + 0x20), 0 < (int)*(uint *)(param_2 + 0x20))) {
      uVar17 = *puVar1;
      puVar12 = (ulong *)(uVar17 + 7);
      do {
        puVar3 = puVar1;
        if ((uVar17 & 1) != 0) {
          puVar3 = puVar12;
        }
        if (((*(byte *)(*puVar3 + 0x12) & 1) != 0) &&
           (*(int *)(*puVar3 + 0x130) == *(int *)(uVar11 + 0x130))) {
          puVar3 = puVar1;
          if ((uVar17 & 1) != 0) {
            puVar3 = puVar12;
          }
          if ((((*(uint *)(uVar11 + 0x10) >> 1 & 1) == 0) || (*(int *)(uVar11 + 0x20) == 0)) ||
             ((uVar14 = *puVar3, (*(byte *)(uVar14 + 0x10) >> 1 & 1) == 0 ||
              (*(int *)(uVar14 + 0x20) == 0)))) {
            FUN_10937e740(&ppuStack_108,&UNK_10f5697be);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56976d,0x41a,&ppuStack_108);
          }
          else if ((((*(int *)(uVar11 + 0x154) - 1U < 3) && (*(int *)(uVar11 + 0x158) - 1U < 3)) &&
                   (*(int *)(uVar14 + 0x154) - 1U < 3)) && (*(int *)(uVar14 + 0x158) - 1U < 3)) {
            if (*(int *)(uVar14 + 0x20) == *(int *)(uVar11 + 0x20)) {
              ppuStack_108 = &PTR_FUN_110aefb90;
              uStack_100 = 0;
              uStack_f0 = 0;
              uStack_e8 = 0;
              lStack_f8 = 0;
              bStack_e0 = 0;
              ppuStack_138 = &PTR_FUN_110aefb90;
              auStack_130[0] = 0;
              uStack_110 = 0;
              uStack_120 = 0;
              uStack_118 = 0;
              auStack_130[1] = 0;
              iVar9 = *(int *)(uVar11 + 0x20);
              if (iVar9 < 0) goto LAB_1093b5ea4;
              uVar20 = 0xffffffff;
              goto LAB_1093b5c6c;
            }
            FUN_10937e740(&ppuStack_108,&UNK_10f569841);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56976d,0x425,&ppuStack_108);
          }
          else {
            FUN_10937e740(&ppuStack_108,&UNK_10f5697f8);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56976d,0x421,&ppuStack_108);
          }
          if (lStack_f8 < 0) {
            __ZdlPv(ppuStack_108);
          }
          break;
        }
        puVar12 = puVar12 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    goto LAB_1093b5ef8;
  }
  goto LAB_1093b5f7c;
  while( true ) {
    if ((((((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) ||
          (*(float *)(param_1 + 0x38) <= uStack_e8._4_4_)) &&
         (((*(byte *)(param_1 + 0x3c) & 1) != 0 ||
          ((((byte)lStack_f8 >> 4 & 1) == 0 || ((bStack_e0 & 1) != 0)))))) &&
        (0.0 <= (float)uStack_f0)) &&
       (((0.0 <= uStack_f0._4_4_ &&
         (fVar22 = (float)(*(int *)(param_3 + 0xa8) + -1), (float)uStack_f0 <= fVar22)) &&
        (fVar24 = (float)(*(int *)(param_3 + 0xac) + -1), uStack_f0._4_4_ <= fVar24)))) {
      bVar6 = false;
      bVar7 = true;
      if (uStack_120._4_4_ <= fVar24) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN((float)uStack_120) && !NAN(fVar22)) {
          bVar6 = (float)uStack_120 == fVar22;
          bVar7 = fVar22 <= (float)uStack_120;
        }
      }
      if (((bVar7 && !bVar6) || ((float)uStack_120 < 0.0)) || (uStack_120._4_4_ < 0.0)) {
        FUN_109341160(&ppuStack_138,&ppuStack_108);
      }
      ppuVar10 = (undefined **)(lVar21 + ((ulong)uVar20 << 0x20));
      if (pppuStack_88 < pppuStack_80) {
        pppuVar19 = pppuStack_88 + 1;
        *pppuStack_88 = ppuVar10;
      }
      else {
        lVar18 = (long)pppuStack_88 - (long)ppuStack_90;
        uVar17 = (lVar18 >> 3) + 1;
        if (uVar17 >> 0x3d != 0) {
          FUN_1093c3bcc();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1093b61d4);
          (*pcVar5)();
        }
        uVar15 = (long)pppuStack_80 - (long)ppuStack_90 >> 2;
        if (uVar15 <= uVar17) {
          uVar15 = uVar17;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_80 - (long)ppuStack_90)) {
          uVar15 = 0x1fffffffffffffff;
        }
        pppuVar8 = &ppuStack_90;
        FUN_1093c3be0();
        plVar2 = (long *)((long)pppuVar8 + lVar18);
        pppuVar19 = (undefined ***)(plVar2 + 1);
        *plVar2 = (long)ppuVar10;
        ppuVar10 = (undefined **)((long)plVar2 - ((long)pppuStack_88 - (long)ppuStack_90));
        _memcpy();
        bVar6 = ppuStack_90 != (undefined **)0x0;
        ppuStack_90 = ppuVar10;
        pppuStack_80 = pppuVar8 + uVar15;
        if (bVar6) {
          pppuStack_88 = pppuVar19;
          __ZdlPv();
        }
      }
      pppuStack_88 = pppuVar19;
      FUN_1093b6290(&uStack_a8,&ppuStack_108);
      FUN_1093b6290(&lStack_c0,&ppuStack_138);
      uStack_13c = *(undefined4 *)(param_1 + 0x44);
      FUN_10939f5b4(&lStack_d8,&uStack_13c);
    }
    uVar20 = uVar20 + 1;
    iVar9 = *(int *)(uVar11 + 0x20);
    if (iVar9 <= (int)uVar20) break;
LAB_1093b5c6c:
    if (uVar20 == 0xffffffff) {
      puVar12 = (ulong *)(uVar14 + 0xb8);
      if ((*(byte *)(uVar14 + 0x10) >> 1 & 1) != 0) goto LAB_1093b5ca8;
LAB_1093b5ce8:
      puVar12 = (ulong *)(uVar11 + 0xb8);
      if ((*(byte *)(uVar11 + 0x10) >> 1 & 1) != 0) goto LAB_1093b5cf4;
    }
    else {
      if ((int)uVar20 < *(int *)(uVar14 + 0x20)) {
        uVar17 = *(ulong *)(uVar14 + 0x18);
        puVar12 = (ulong *)(uVar14 + 0x18);
        if ((uVar17 & 1) != 0) {
          puVar12 = (ulong *)(uVar17 + (ulong)uVar20 * 8 + 7);
        }
LAB_1093b5ca8:
        FUN_109341160(&ppuStack_108,*puVar12);
        if (uVar20 == 0xffffffff) goto LAB_1093b5ce8;
        iVar9 = *(int *)(uVar11 + 0x20);
      }
      if ((-1 < (int)uVar20) && ((int)uVar20 < iVar9)) {
        uVar17 = *(ulong *)(uVar11 + 0x18);
        puVar12 = (ulong *)(uVar11 + 0x18);
        if ((uVar17 & 1) != 0) {
          puVar12 = (ulong *)(uVar17 + (ulong)uVar20 * 8 + 7);
        }
LAB_1093b5cf4:
        FUN_109341160(&ppuStack_138,*puVar12);
      }
    }
  }
  if ((auStack_130[0] & 1) != 0) {
    func_0x0001053936ac(auStack_130);
  }
LAB_1093b5ea4:
  if ((uStack_100 & 1) != 0) {
    func_0x0001053936ac(&uStack_100);
  }
LAB_1093b5ef8:
  lVar21 = lVar21 + 1;
  if (*(int *)(param_3 + 0x20) <= lVar21) goto LAB_1093b5f74;
  goto LAB_1093b5b38;
LAB_1093b5f74:
  ppuVar13 = *(undefined ***)(param_2 + 0x90);
  ppuVar10 = *(undefined ***)(param_3 + 0x90);
LAB_1093b5f7c:
  ppuVar4 = &PTR_PTR_1132cf8e8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar4 = ppuVar13;
  }
  ppuVar13 = &PTR_PTR_1132cf8e8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  ppuVar10 = &PTR_PTR_1132d1598;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar10 = *(undefined ***)(param_1 + 0x30);
  }
  FUN_1093f3ebc(ppuVar4,ppuVar13,ppuVar10,&uStack_a8,&lStack_d8,&lStack_c0);
  if (lStack_b8 != lStack_c0) {
    lVar21 = 0;
    uVar11 = 0;
    fVar22 = *(float *)(param_1 + 0x40);
    lVar18 = lStack_c0;
    do {
      if (0.0 < *(float *)(lStack_d8 + uVar11 * 4)) {
        puVar16 = ppuStack_90[uVar11];
        uVar14 = *(ulong *)(param_3 + 0x18);
        puVar1 = (ulong *)(param_3 + 0x18);
        if ((uVar14 & 1) != 0) {
          puVar1 = (ulong *)(uVar14 + (long)(int)puVar16 * 8 + 7);
        }
        uVar14 = *puVar1;
        if (puVar16 < (undefined *)0xffffffff00000000) {
          uVar17 = *(ulong *)(uVar14 + 0x18);
          puVar1 = (ulong *)(uVar14 + 0x18);
          if ((uVar17 & 1) != 0) {
            puVar1 = (ulong *)(uVar17 + ((long)puVar16 >> 0x20) * 8 + 7);
          }
          uVar17 = *puVar1;
        }
        else {
          *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 2;
          uVar17 = *(ulong *)(uVar14 + 0xb8);
          if (uVar17 == 0) {
            uVar17 = *(ulong *)(uVar14 + 8);
            if ((uVar17 & 1) != 0) {
              uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
            }
            func_0x0001093416e0();
            *(ulong *)(uVar14 + 0xb8) = uVar17;
            lVar18 = lStack_c0;
          }
          fVar24 = *(float *)(lVar18 + lVar21 + 0x18);
          if (((fVar24 < 0.0) || (fVar23 = *(float *)(lVar18 + lVar21 + 0x1c), fVar23 < 0.0)) ||
             (((float)(*(int *)(param_3 + 0xa8) + -1) < fVar24 ||
              ((float)(*(int *)(param_3 + 0xac) + -1) < fVar23)))) goto LAB_1093b6148;
        }
        if ((((*(uint *)(lVar18 + lVar21 + 0x10) ^ 0xffffffff) & 3) == 0) &&
           (((*(uint *)(uVar17 + 0x10) ^ 0xffffffff) & 3) == 0)) {
          fVar24 = *(float *)(uVar17 + 0x18) - *(float *)(lVar18 + lVar21 + 0x18);
          fVar23 = *(float *)(uVar17 + 0x1c) - *(float *)(lVar18 + lVar21 + 0x1c);
          fVar24 = fVar23 * fVar23 + fVar24 * fVar24;
        }
        else {
          fVar24 = 3.4028235e+38;
        }
        if (fVar24 <= fVar22 * fVar22) {
          fVar24 = *(float *)(lStack_d8 + uVar11 * 4);
          *(float *)(uVar17 + 0x18) =
               (1.0 - fVar24) * *(float *)(uVar17 + 0x18) +
               *(float *)(lVar18 + lVar21 + 0x18) * fVar24;
          uVar20 = *(uint *)(uVar17 + 0x10);
          *(uint *)(uVar17 + 0x10) = uVar20 | 1;
          *(float *)(uVar17 + 0x1c) =
               (1.0 - fVar24) * *(float *)(uVar17 + 0x1c) +
               *(float *)(lVar18 + lVar21 + 0x1c) * fVar24;
          *(uint *)(uVar17 + 0x10) = uVar20 | 3;
        }
      }
LAB_1093b6148:
      uVar11 = uVar11 + 1;
      lVar21 = lVar21 + 0x30;
    } while (uVar11 < (ulong)((lStack_b8 - lVar18 >> 4) * -0x5555555555555555));
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  FUN_1093c3c84(&lStack_c0);
  FUN_1093c3c84(&uStack_a8);
  if (ppuStack_90 == (undefined **)0x0) {
    return;
  }
  pppuStack_88 = (undefined ***)ppuStack_90;
  ppuVar10 = ppuStack_90;
LAB_1093b61a4:
  __ZdlPv(ppuVar10);
  return;
}



/* Entry: 1093b6290; end: 1093b64c7;  */

void FUN_1093b6290(long *param_1,float *param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  long ******pppppplVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte *pbVar19;
  byte *pbVar20;
  long *******ppppppplVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  long lVar33;
  byte *pbVar34;
  ulong *puVar35;
  float **ppfVar36;
  byte *pbVar37;
  int *piVar38;
  long *******ppppppplVar39;
  long *******ppppppplVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int iStack_20c;
  int *piStack_208;
  undefined4 uStack_1d4;
  int *piStack_1d0;
  int *piStack_1c8;
  ulong uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float *pfStack_1a0;
  byte abStack_198 [8];
  uint uStack_190;
  char cStack_189;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  byte bStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long ******pppppplStack_128;
  long ******pppppplStack_120;
  long ******pppppplStack_118;
  float *pfStack_110;
  float *pfStack_108;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  long *plStack_58;
  
  uVar30 = param_1[1];
  if (uVar30 < (ulong)param_1[2]) {
    FUN_109340d10(uVar30,0,param_2);
    pbVar32 = (byte *)(uVar30 + 0x30);
    param_1[1] = (long)pbVar32;
  }
  else {
    lVar33 = uVar30 - *param_1;
    uVar30 = (lVar33 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar30) {
      FUN_1093c3c14();
LAB_1093b64a0:
      func_0x000104c4f740();
      FUN_1093c3c28(&pbStack_78);
      __Unwind_Resume();
      func_0x000104bd46a0();
      if ((*(byte *)(param_5 + 0x10) >> 5 & 1) == 0) {
        FUN_10937e740(&pfStack_1a0,&UNK_10f56989c);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x472,&pfStack_1a0);
        pfStack_110 = pfStack_1a0;
        if (-1 < cStack_189) {
          return;
        }
      }
      else {
        if ((*(byte *)(param_4 + 0x10) >> 5 & 1) == 0) {
          return;
        }
        FUN_109367d10(&pfStack_110,6);
        fVar41 = 1.0 / (-(param_2[1] * param_2[3]) + param_2[4] * *param_2);
        *pfStack_110 = param_2[4] * fVar41;
        pfStack_110[1] = -(fVar41 * param_2[1]);
        pfStack_110[2] = fVar41 * (-(param_2[2] * param_2[4]) + param_2[5] * param_2[1]);
        pfStack_110[3] = -(fVar41 * param_2[3]);
        pfStack_110[4] = fVar41 * *param_2;
        pfStack_110[5] = fVar41 * (-(*param_2 * param_2[5]) + param_2[3] * param_2[2]);
        pppppplStack_120 = (long ******)0x0;
        pppppplStack_118 = (long ******)0x0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        pppppplStack_128 = (long ******)0x0;
        lStack_158 = 0;
        lStack_150 = 0;
        uStack_148 = 0;
        lStack_170 = 0;
        lStack_168 = 0;
        uStack_160 = 0;
        if (0 < *(int *)(param_5 + 0x20)) {
          lVar33 = 0;
          iStack_20c = 0;
          piVar38 = (int *)0x0;
          piStack_208 = (int *)0x0;
          puVar1 = (ulong *)(param_4 + 0x18);
LAB_1093b6628:
          uVar30 = *(ulong *)(param_5 + 0x18);
          puVar35 = (ulong *)(param_5 + 0x18);
          if ((uVar30 & 1) != 0) {
            puVar35 = (ulong *)(uVar30 + lVar33 * 8 + 7);
          }
          uVar30 = *puVar35;
          if (((*(char *)(uVar30 + 0x13c) == '\x01') && ((*(byte *)(uVar30 + 0x12) & 1) != 0)) &&
             (uVar29 = (ulong)*(uint *)(param_4 + 0x20), 0 < (int)*(uint *)(param_4 + 0x20))) {
            uVar24 = *puVar1;
            puVar35 = (ulong *)(uVar24 + 7);
            do {
              puVar5 = puVar1;
              if ((uVar24 & 1) != 0) {
                puVar5 = puVar35;
              }
              if (((*(byte *)(*puVar5 + 0x12) & 1) != 0) &&
                 (*(int *)(*puVar5 + 0x130) == *(int *)(uVar30 + 0x130))) {
                puVar5 = puVar1;
                if ((uVar24 & 1) != 0) {
                  puVar5 = puVar35;
                }
                iVar10 = *(int *)(uVar30 + 0x38);
                if ((iVar10 == 0) || (uVar29 = *puVar5, *(int *)(uVar29 + 0x38) == 0)) {
                  FUN_10937e740(&pfStack_1a0,&UNK_10f5698d7);
                  FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x496,&pfStack_1a0);
                  goto LAB_1093b6ba8;
                }
                if (iVar10 == iStack_20c) goto LAB_1093b683c;
                piStack_1d0 = (int *)0x0;
                piStack_1c8 = (int *)0x0;
                uStack_1c0 = 0;
                if ((int)param_1[4] == 0) {
                  func_0x000108a5942c(&piStack_1d0,(long)iVar10);
                  if (piStack_1d0 != piStack_1c8) {
                    iVar28 = 0;
                    piVar22 = piStack_1d0;
                    do {
                      piVar25 = piVar22 + 1;
                      *piVar22 = iVar28;
                      iVar28 = iVar28 + 1;
                      piVar22 = piVar25;
                    } while (piVar25 != piStack_1c8);
                  }
                  goto LAB_1093b681c;
                }
                uVar24 = param_1[3];
                puVar35 = (ulong *)(param_1 + 3);
                if ((uVar24 & 1) != 0) {
                  puVar35 = (ulong *)(uVar24 + 7);
                }
                puVar5 = puVar35 + (int)param_1[4];
                goto LAB_1093b6700;
              }
              puVar35 = puVar35 + 1;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          goto LAB_1093b6bb8;
        }
        piVar38 = (int *)0x0;
LAB_1093b6c04:
        ppuVar6 = &PTR_PTR_1132cf8e8;
        if (*(undefined ***)(param_4 + 0x90) != (undefined **)0x0) {
          ppuVar6 = *(undefined ***)(param_4 + 0x90);
        }
        ppuVar7 = &PTR_PTR_1132cf8e8;
        if (*(undefined ***)(param_5 + 0x90) != (undefined **)0x0) {
          ppuVar7 = *(undefined ***)(param_5 + 0x90);
        }
        ppuVar8 = &PTR_PTR_1132d1598;
        if ((undefined **)param_1[6] != (undefined **)0x0) {
          ppuVar8 = (undefined **)param_1[6];
        }
        FUN_1093f3ebc(ppuVar6,ppuVar7,ppuVar8,&uStack_140,&lStack_170,&lStack_158);
        if (lStack_150 != lStack_158) {
          lVar33 = 0;
          uVar30 = 0;
          fVar41 = *(float *)(param_1 + 8);
          lVar23 = lStack_150;
          lVar27 = lStack_158;
          do {
            if (0.0 < *(float *)(lStack_170 + uVar30 * 4)) {
              uVar29 = *(ulong *)(param_5 + 0x18);
              puVar1 = (ulong *)(param_5 + 0x18);
              if ((uVar29 & 1) != 0) {
                puVar1 = (ulong *)(uVar29 + (long)(int)pppppplStack_128[uVar30] * 8 + 7);
              }
              puVar35 = (ulong *)(*puVar1 + 0x30);
              lVar23 = (long)pppppplStack_128[uVar30] >> 0x20;
              puVar1 = puVar35;
              if ((*puVar35 & 1) != 0) {
                puVar1 = (ulong *)(*puVar35 + lVar23 * 8 + 7);
              }
              FUN_109340d10(&pfStack_1a0,0,*puVar1);
              if (0.0 < fStack_180) {
                ppuVar6 = &PTR_PTR_1132d8bd0;
                if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
                  ppuVar6 = *(undefined ***)(param_3 + 0x18);
                }
                ppuVar7 = &PTR_PTR_1132d8bd0;
                if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
                  ppuVar7 = *(undefined ***)(param_3 + 0x20);
                }
                uStack_188 = CONCAT44(((float)((ulong)ppuVar6[3] >> 0x20) *
                                      (float)((ulong)uStack_188 >> 0x20)) / fStack_180 +
                                      (float)((ulong)ppuVar7[3] >> 0x20),
                                      (SUB84(ppuVar6[3],0) * (float)uStack_188) / fStack_180 +
                                      SUB84(ppuVar7[3],0));
                uStack_190 = uStack_190 | 3;
              }
              if (((uStack_190 ^ 0xffffffff) & 3) == 0) {
                fVar42 = pfStack_110[2] +
                         pfStack_110[1] * uStack_188._4_4_ + (float)uStack_188 * *pfStack_110;
                fVar43 = pfStack_110[5] +
                         uStack_188._4_4_ * pfStack_110[4] + (float)uStack_188 * pfStack_110[3];
                uStack_188 = CONCAT44(fVar43,fVar42);
                lVar27 = lStack_158 + uVar30 * 0x30;
                lVar4 = lStack_158 + lVar33;
                if (((*(uint *)(lVar4 + 0x10) ^ 0xffffffff) & 3) != 0) goto LAB_1093b6db0;
                fVar42 = fVar42 - *(float *)(lVar4 + 0x18);
                fVar43 = fVar43 - *(float *)(lVar4 + 0x1c);
                fVar42 = fVar43 * fVar43 + fVar42 * fVar42;
              }
              else {
                lVar27 = lStack_158 + lVar33;
LAB_1093b6db0:
                fVar42 = 3.4028235e+38;
              }
              if (fVar42 <= fVar41 * fVar41) {
                fVar42 = *(float *)(lStack_170 + uVar30 * 4);
                fVar45 = (1.0 - fVar42) * (float)uStack_188 + *(float *)(lVar27 + 0x18) * fVar42;
                fVar43 = (1.0 - fVar42) * uStack_188._4_4_ + *(float *)(lVar27 + 0x1c) * fVar42;
                fVar42 = param_2[2] + fVar43 * param_2[1] + fVar45 * *param_2;
                uStack_190 = uStack_190 | 3;
                fVar43 = param_2[5] + fVar43 * param_2[4] + fVar45 * param_2[3];
                uStack_188 = CONCAT44(fVar43,fVar42);
                if (0.0 < fStack_180) {
                  ppuVar6 = &PTR_PTR_1132d8bd0;
                  if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
                    ppuVar6 = *(undefined ***)(param_3 + 0x18);
                  }
                  ppuVar7 = &PTR_PTR_1132d8bd0;
                  if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
                    ppuVar7 = *(undefined ***)(param_3 + 0x20);
                  }
                  uStack_188 = CONCAT44((fStack_180 / *(float *)((long)ppuVar6 + 0x1c)) *
                                        (fVar43 - *(float *)((long)ppuVar7 + 0x1c)),
                                        (fStack_180 / *(float *)(ppuVar6 + 3)) *
                                        (fVar42 - *(float *)(ppuVar7 + 3)));
                }
                if ((*puVar35 & 1) != 0) {
                  puVar35 = (ulong *)(*puVar35 + lVar23 * 8 + 7);
                }
                ppfVar36 = (float **)*puVar35;
                if (&pfStack_1a0 != ppfVar36) {
                  func_0x000109340dd8(ppfVar36);
                  func_0x000109340c8c(ppfVar36,&pfStack_1a0);
                }
              }
              lVar23 = lStack_150;
              lVar27 = lStack_158;
              if ((abStack_198[0] & 1) != 0) {
                func_0x0001053936ac(abStack_198);
                lVar23 = lStack_150;
                lVar27 = lStack_158;
              }
            }
            uVar30 = uVar30 + 1;
            lVar33 = lVar33 + 0x30;
          } while (uVar30 < (ulong)((lVar23 - lVar27 >> 4) * -0x5555555555555555));
        }
        if (piVar38 != (int *)0x0) {
          __ZdlPv();
        }
        if (lStack_170 != 0) {
          lStack_168 = lStack_170;
          __ZdlPv();
        }
        FUN_1093c3c84(&lStack_158);
        FUN_1093c3c84(&uStack_140);
        if ((long *******)pppppplStack_128 != (long *******)0x0) {
          pppppplStack_120 = pppppplStack_128;
          __ZdlPv();
        }
        if (pfStack_110 == (float *)0x0) {
          return;
        }
        pfStack_108 = pfStack_110;
      }
      __ZdlPv(pfStack_110);
      return;
    }
    lVar23 = param_1[2] - *param_1 >> 4;
    uVar29 = lVar23 * 0x5555555555555556;
    if (uVar29 < uVar30 || uVar29 - uVar30 == 0) {
      uVar29 = uVar30;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar23 * -0x5555555555555555)) {
      uVar29 = 0x555555555555555;
    }
    plStack_58 = param_1;
    if (uVar29 == 0) {
      pbVar19 = (byte *)0x0;
    }
    else {
      if (0x555555555555555 < uVar29) goto LAB_1093b64a0;
      pbVar19 = (byte *)(uVar29 * 0x30);
      __Znwm();
    }
    pbVar20 = pbVar19 + lVar33;
    pbStack_78 = pbVar19;
    pbStack_70 = pbVar20;
    pbStack_68 = pbVar20;
    pbStack_60 = pbVar19 + uVar29 * 0x30;
    FUN_109340d10(pbVar20,0,param_2);
    pbStack_68 = pbVar20 + 0x30;
    pbVar37 = (byte *)*param_1;
    pbVar9 = (byte *)param_1[1];
    lVar33 = (long)pbVar37 - (long)pbVar9;
    pbVar32 = pbStack_68;
    pbVar31 = pbVar37;
    pbVar19 = pbVar19 + uVar29 * 0x30;
    pbVar34 = pbVar20 + lVar33;
    if (lVar33 != 0) {
      do {
        *(undefined ***)pbVar34 = &PTR_FUN_110aefb90;
        pbVar34[8] = 0;
        pbVar34[9] = 0;
        pbVar34[10] = 0;
        pbVar34[0xb] = 0;
        pbVar34[0xc] = 0;
        pbVar34[0xd] = 0;
        pbVar34[0xe] = 0;
        pbVar34[0xf] = 0;
        pbVar34[0x18] = 0;
        pbVar34[0x19] = 0;
        pbVar34[0x1a] = 0;
        pbVar34[0x1b] = 0;
        pbVar34[0x1c] = 0;
        pbVar34[0x1d] = 0;
        pbVar34[0x1e] = 0;
        pbVar34[0x1f] = 0;
        pbVar34[0x20] = 0;
        pbVar34[0x21] = 0;
        pbVar34[0x22] = 0;
        pbVar34[0x23] = 0;
        pbVar34[0x24] = 0;
        pbVar34[0x25] = 0;
        pbVar34[0x26] = 0;
        pbVar34[0x27] = 0;
        pbVar34[0x10] = 0;
        pbVar34[0x11] = 0;
        pbVar34[0x12] = 0;
        pbVar34[0x13] = 0;
        pbVar34[0x14] = 0;
        pbVar34[0x15] = 0;
        pbVar34[0x16] = 0;
        pbVar34[0x17] = 0;
        pbVar34[0x28] = 0;
        if (pbVar34 != pbVar31) {
          uVar29 = *(ulong *)(pbVar31 + 8);
          uVar30 = uVar29;
          if ((uVar29 & 1) != 0) {
            uVar30 = *(ulong *)(uVar29 & 0xfffffffffffffffe);
          }
          if (uVar30 == 0) {
            *(ulong *)(pbVar34 + 8) = uVar29;
            pbVar31[8] = 0;
            pbVar31[9] = 0;
            pbVar31[10] = 0;
            pbVar31[0xb] = 0;
            pbVar31[0xc] = 0;
            pbVar31[0xd] = 0;
            pbVar31[0xe] = 0;
            pbVar31[0xf] = 0;
            *(undefined4 *)(pbVar34 + 0x10) = *(undefined4 *)(pbVar31 + 0x10);
            pbVar31[0x10] = 0;
            pbVar31[0x11] = 0;
            pbVar31[0x12] = 0;
            pbVar31[0x13] = 0;
            lVar23 = 0;
            do {
              bVar12 = pbVar34[lVar23 + 0x18];
              pbVar34[lVar23 + 0x18] = pbVar31[lVar23 + 0x18];
              pbVar31[lVar23 + 0x18] = bVar12;
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0x11);
          }
          else {
            func_0x000109340dd8(pbVar34);
            func_0x000109340c8c(pbVar34,pbVar31);
          }
        }
        pbVar31 = pbVar31 + 0x30;
        pbVar34 = pbVar34 + 0x30;
      } while (pbVar31 != pbVar9);
      pbVar37 = pbVar37 + 8;
      do {
        if ((*pbVar37 & 1) != 0) {
          func_0x0001053936ac(pbVar37);
        }
        pbVar32 = pbVar37 + 0x28;
        pbVar37 = pbVar37 + 0x30;
      } while (pbVar32 != pbVar9);
      pbVar37 = (byte *)*param_1;
      pbVar32 = pbStack_68;
      pbVar19 = pbStack_60;
    }
    *param_1 = (long)(pbVar20 + lVar33);
    param_1[1] = (long)pbVar32;
    pbStack_60 = (byte *)param_1[2];
    param_1[2] = (long)pbVar19;
    pbStack_78 = pbVar37;
    pbStack_70 = pbVar37;
    pbStack_68 = pbVar37;
    FUN_1093c3c28(&pbStack_78);
  }
  param_1[1] = (long)pbVar32;
  return;
LAB_1093b6700:
  do {
    uVar24 = *puVar35;
    iVar28 = *(int *)(uVar24 + 0x18);
    if (iVar28 < 0) {
LAB_1093b6724:
      FUN_10937e740(&pfStack_1a0,&UNK_10f56ad23);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56ad0a,0x150,&pfStack_1a0);
      if (cStack_189 < '\0') {
        __ZdlPv(pfStack_1a0);
      }
    }
    else {
      iVar11 = *(int *)(uVar24 + 0x1c);
      uVar13 = iVar11 - iVar28;
      if ((uVar13 == 0 || iVar11 < iVar28) || iVar10 < iVar11) goto LAB_1093b6724;
      func_0x000108a5942c(&piStack_1d0,(ulong)uVar13 + ((long)piStack_1c8 - (long)piStack_1d0 >> 2))
      ;
      iVar28 = *(int *)(uVar24 + 0x18);
      piVar22 = piStack_1c8 + -(ulong)uVar13;
      do {
        piVar25 = piVar22 + 1;
        *piVar22 = iVar28;
        iVar28 = iVar28 + 1;
        piVar22 = piVar25;
      } while (piVar25 != piStack_1c8);
    }
    puVar35 = puVar35 + 1;
  } while (puVar35 != puVar5);
LAB_1093b681c:
  if (piVar38 != (int *)0x0) {
    __ZdlPv();
  }
  piStack_208 = piStack_1c8;
  piVar38 = piStack_1d0;
  iStack_20c = iVar10;
LAB_1093b683c:
  if ((*(int *)(uVar30 + 0x15c) == 4) && (*(int *)(uVar29 + 0x15c) == 4)) {
    if (*(int *)(uVar30 + 0x38) == *(int *)(uVar29 + 0x38)) {
      if (piVar38 != piStack_208) {
        piVar22 = piVar38;
        do {
          lVar23 = (long)*piVar22;
          uVar24 = *(ulong *)(uVar29 + 0x30);
          puVar35 = (ulong *)(uVar29 + 0x30);
          if ((uVar24 & 1) != 0) {
            puVar35 = (ulong *)(uVar24 + lVar23 * 8 + 7);
          }
          FUN_109340d10(&pfStack_1a0,0,*puVar35);
          uVar24 = *(ulong *)(uVar30 + 0x30);
          puVar35 = (ulong *)(uVar30 + 0x30);
          if ((uVar24 & 1) != 0) {
            puVar35 = (ulong *)(uVar24 + lVar23 * 8 + 7);
          }
          FUN_109340d10(&piStack_1d0,0,*puVar35);
          if (((((*(byte *)(param_1 + 2) >> 1 & 1) == 0) || (*(float *)(param_1 + 7) <= fStack_17c))
              && (((*(byte *)((long)param_1 + 0x3c) & 1) != 0 ||
                  ((((byte)uStack_190 >> 4 & 1) == 0 || ((bStack_178 & 1) != 0)))))) &&
             ((0.0 < fStack_180 && (0.0 < fStack_1b0)))) {
            ppuVar6 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
              ppuVar6 = *(undefined ***)(param_3 + 0x18);
            }
            ppuVar7 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
              ppuVar7 = *(undefined ***)(param_3 + 0x20);
            }
            fVar42 = (SUB84(ppuVar6[3],0) * (float)uStack_188) / fStack_180 + SUB84(ppuVar7[3],0);
            fVar43 = ((float)((ulong)ppuVar6[3] >> 0x20) * (float)((ulong)uStack_188 >> 0x20)) /
                     fStack_180 + (float)((ulong)ppuVar7[3] >> 0x20);
            uStack_190 = uStack_190 | 3;
            fVar41 = pfStack_110[2] + pfStack_110[1] * fVar43 + fVar42 * *pfStack_110;
            fVar42 = pfStack_110[5] + pfStack_110[4] * fVar43 + fVar42 * pfStack_110[3];
            uStack_188 = CONCAT44(fVar42,fVar41);
            fVar43 = SUB84(ppuVar7[3],0) + (SUB84(ppuVar6[3],0) * (float)_fStack_1b8) / fStack_1b0;
            fVar44 = (float)((ulong)ppuVar7[3] >> 0x20) +
                     ((float)((ulong)ppuVar6[3] >> 0x20) * (float)((ulong)_fStack_1b8 >> 0x20)) /
                     fStack_1b0;
            uStack_1c0 = uStack_1c0 | 3;
            fVar45 = pfStack_110[2] + pfStack_110[1] * fVar44 + fVar43 * *pfStack_110;
            fVar43 = pfStack_110[5] + pfStack_110[4] * fVar44 + fVar43 * pfStack_110[3];
            _fStack_1b8 = CONCAT44(fVar43,fVar45);
            if ((((0.0 <= fVar41) && (0.0 <= fVar42)) &&
                (fVar44 = (float)(*(int *)(param_5 + 0xa8) + -1), fVar41 <= fVar44)) &&
               (fVar41 = (float)(*(int *)(param_5 + 0xac) + -1), fVar42 <= fVar41)) {
              if (fVar45 < 0.0) {
LAB_1093b6a40:
                FUN_109341160(&piStack_1d0,&pfStack_1a0);
              }
              else {
                bVar15 = false;
                bVar17 = true;
                if (0.0 <= fVar43) {
                  bVar15 = false;
                  bVar17 = true;
                  if (!NAN(fVar45) && !NAN(fVar44)) {
                    bVar15 = fVar45 == fVar44;
                    bVar17 = fVar44 <= fVar45;
                  }
                }
                bVar16 = false;
                bVar18 = true;
                if (!bVar17 || bVar15) {
                  bVar16 = false;
                  bVar18 = true;
                  if (!NAN(fVar43) && !NAN(fVar41)) {
                    bVar16 = fVar43 == fVar41;
                    bVar18 = fVar41 <= fVar43;
                  }
                }
                if (bVar18 && !bVar16) goto LAB_1093b6a40;
              }
              pppppplVar2 = (long ******)(lVar33 + (lVar23 << 0x20));
              if (pppppplStack_120 < pppppplStack_118) {
                ppppppplVar39 = (long *******)(pppppplStack_120 + 1);
                *pppppplStack_120 = (long *****)pppppplVar2;
              }
              else {
                lVar23 = (long)pppppplStack_120 - (long)pppppplStack_128;
                uVar24 = (lVar23 >> 3) + 1;
                if (uVar24 >> 0x3d != 0) {
                  FUN_1093c3bcc();
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x1093b6f4c);
                  (*pcVar14)();
                }
                uVar26 = (long)pppppplStack_118 - (long)pppppplStack_128 >> 2;
                if (uVar26 <= uVar24) {
                  uVar26 = uVar24;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)pppppplStack_118 - (long)pppppplStack_128)) {
                  uVar26 = 0x1fffffffffffffff;
                }
                ppppppplVar21 = &pppppplStack_128;
                FUN_1093c3be0();
                plVar3 = (long *)((long)ppppppplVar21 + lVar23);
                ppppppplVar39 = (long *******)(plVar3 + 1);
                *plVar3 = (long)pppppplVar2;
                ppppppplVar40 =
                     (long *******)
                     ((long)plVar3 - ((long)pppppplStack_120 - (long)pppppplStack_128));
                _memcpy(ppppppplVar40);
                bVar15 = (long *******)pppppplStack_128 != (long *******)0x0;
                pppppplStack_128 = (long ******)ppppppplVar40;
                pppppplStack_118 = (long ******)(ppppppplVar21 + uVar26);
                if (bVar15) {
                  pppppplStack_120 = (long ******)ppppppplVar39;
                  __ZdlPv();
                }
              }
              pppppplStack_120 = (long ******)ppppppplVar39;
              FUN_1093b6290(&uStack_140,&pfStack_1a0);
              FUN_1093b6290(&lStack_158,&piStack_1d0);
              uStack_1d4 = *(undefined4 *)((long)param_1 + 0x44);
              FUN_10939f5b4(&lStack_170,&uStack_1d4);
            }
          }
          if (((ulong)piStack_1c8 & 1) != 0) {
            func_0x0001053936ac(&piStack_1c8);
          }
          if ((abStack_198[0] & 1) != 0) {
            func_0x0001053936ac(abStack_198);
          }
          piVar22 = piVar22 + 1;
        } while (piVar22 != piStack_208);
      }
      goto LAB_1093b6bb8;
    }
    FUN_10937e740(&pfStack_1a0,&UNK_10f56993f);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x4a3,&pfStack_1a0);
  }
  else {
    FUN_10937e740(&pfStack_1a0,&UNK_10f569903);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x49f,&pfStack_1a0);
  }
LAB_1093b6ba8:
  if (cStack_189 < '\0') {
    __ZdlPv(pfStack_1a0);
  }
LAB_1093b6bb8:
  lVar33 = lVar33 + 1;
  if (*(int *)(param_5 + 0x20) <= lVar33) goto LAB_1093b6c04;
  goto LAB_1093b6628;
}



/* Entry: 1093b64c8; end: 1093b709b;  */

void FUN_1093b64c8(long param_1,float *param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  long *****ppppplVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  long ******pppppplVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  ulong *puVar26;
  float **ppfVar27;
  int *piVar28;
  long ******pppppplVar29;
  long ******pppppplVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iStack_18c;
  int *piStack_188;
  undefined4 uStack_154;
  int *piStack_150;
  int *piStack_148;
  ulong uStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float *pfStack_120;
  byte abStack_118 [8];
  uint uStack_110;
  char cStack_109;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  byte bStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  float *pfStack_90;
  float *pfStack_88;
  
  if ((*(byte *)(param_5 + 0x10) >> 5 & 1) == 0) {
    FUN_10937e740(&pfStack_120,&UNK_10f56989c);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x472,&pfStack_120);
    pfStack_90 = pfStack_120;
    if (-1 < cStack_109) {
      return;
    }
  }
  else {
    if ((*(byte *)(param_4 + 0x10) >> 5 & 1) == 0) {
      return;
    }
    FUN_109367d10(&pfStack_90,6);
    fVar33 = 1.0 / (-(param_2[1] * param_2[3]) + param_2[4] * *param_2);
    *pfStack_90 = param_2[4] * fVar33;
    pfStack_90[1] = -(fVar33 * param_2[1]);
    pfStack_90[2] = fVar33 * (-(param_2[2] * param_2[4]) + param_2[5] * param_2[1]);
    pfStack_90[3] = -(fVar33 * param_2[3]);
    pfStack_90[4] = fVar33 * *param_2;
    pfStack_90[5] = fVar33 * (-(*param_2 * param_2[5]) + param_2[3] * param_2[2]);
    ppppplStack_a0 = (long *****)0x0;
    ppppplStack_98 = (long *****)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppppplStack_a8 = (long *****)0x0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    if (0 < *(int *)(param_5 + 0x20)) {
      lVar31 = 0;
      iStack_18c = 0;
      piVar28 = (int *)0x0;
      piStack_188 = (int *)0x0;
      puVar1 = (ulong *)(param_4 + 0x18);
LAB_1093b6628:
      uVar18 = *(ulong *)(param_5 + 0x18);
      puVar26 = (ulong *)(param_5 + 0x18);
      if ((uVar18 & 1) != 0) {
        puVar26 = (ulong *)(uVar18 + lVar31 * 8 + 7);
      }
      uVar18 = *puVar26;
      if (((*(char *)(uVar18 + 0x13c) == '\x01') && ((*(byte *)(uVar18 + 0x12) & 1) != 0)) &&
         (uVar19 = (ulong)*(uint *)(param_4 + 0x20), 0 < (int)*(uint *)(param_4 + 0x20))) {
        uVar21 = *puVar1;
        puVar26 = (ulong *)(uVar21 + 7);
        do {
          puVar5 = puVar1;
          if ((uVar21 & 1) != 0) {
            puVar5 = puVar26;
          }
          if (((*(byte *)(*puVar5 + 0x12) & 1) != 0) &&
             (*(int *)(*puVar5 + 0x130) == *(int *)(uVar18 + 0x130))) {
            puVar5 = puVar1;
            if ((uVar21 & 1) != 0) {
              puVar5 = puVar26;
            }
            iVar9 = *(int *)(uVar18 + 0x38);
            if ((iVar9 == 0) || (uVar19 = *puVar5, *(int *)(uVar19 + 0x38) == 0)) {
              FUN_10937e740(&pfStack_120,&UNK_10f5698d7);
              FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x496,&pfStack_120);
              goto LAB_1093b6ba8;
            }
            if (iVar9 == iStack_18c) goto LAB_1093b683c;
            piStack_150 = (int *)0x0;
            piStack_148 = (int *)0x0;
            uStack_140 = 0;
            if (*(int *)(param_1 + 0x20) == 0) {
              func_0x000108a5942c(&piStack_150,(long)iVar9);
              if (piStack_150 != piStack_148) {
                iVar25 = 0;
                piVar20 = piStack_150;
                do {
                  piVar22 = piVar20 + 1;
                  *piVar20 = iVar25;
                  iVar25 = iVar25 + 1;
                  piVar20 = piVar22;
                } while (piVar22 != piStack_148);
              }
              goto LAB_1093b681c;
            }
            uVar21 = *(ulong *)(param_1 + 0x18);
            puVar26 = (ulong *)(param_1 + 0x18);
            if ((uVar21 & 1) != 0) {
              puVar26 = (ulong *)(uVar21 + 7);
            }
            puVar5 = puVar26 + *(int *)(param_1 + 0x20);
            goto LAB_1093b6700;
          }
          puVar26 = puVar26 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      goto LAB_1093b6bb8;
    }
    piVar28 = (int *)0x0;
LAB_1093b6c04:
    ppuVar6 = &PTR_PTR_1132cf8e8;
    if (*(undefined ***)(param_4 + 0x90) != (undefined **)0x0) {
      ppuVar6 = *(undefined ***)(param_4 + 0x90);
    }
    ppuVar7 = &PTR_PTR_1132cf8e8;
    if (*(undefined ***)(param_5 + 0x90) != (undefined **)0x0) {
      ppuVar7 = *(undefined ***)(param_5 + 0x90);
    }
    ppuVar8 = &PTR_PTR_1132d1598;
    if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
      ppuVar8 = *(undefined ***)(param_1 + 0x30);
    }
    FUN_1093f3ebc(ppuVar6,ppuVar7,ppuVar8,&uStack_c0,&lStack_f0,&lStack_d8);
    if (lStack_d0 != lStack_d8) {
      lVar31 = 0;
      uVar18 = 0;
      fVar33 = *(float *)(param_1 + 0x40);
      lVar32 = lStack_d0;
      lVar24 = lStack_d8;
      do {
        if (0.0 < *(float *)(lStack_f0 + uVar18 * 4)) {
          uVar19 = *(ulong *)(param_5 + 0x18);
          puVar1 = (ulong *)(param_5 + 0x18);
          if ((uVar19 & 1) != 0) {
            puVar1 = (ulong *)(uVar19 + (long)(int)ppppplStack_a8[uVar18] * 8 + 7);
          }
          puVar26 = (ulong *)(*puVar1 + 0x30);
          lVar32 = (long)ppppplStack_a8[uVar18] >> 0x20;
          puVar1 = puVar26;
          if ((*puVar26 & 1) != 0) {
            puVar1 = (ulong *)(*puVar26 + lVar32 * 8 + 7);
          }
          FUN_109340d10(&pfStack_120,0,*puVar1);
          if (0.0 < fStack_100) {
            ppuVar6 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
              ppuVar6 = *(undefined ***)(param_3 + 0x18);
            }
            ppuVar7 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
              ppuVar7 = *(undefined ***)(param_3 + 0x20);
            }
            uStack_108 = CONCAT44(((float)((ulong)ppuVar6[3] >> 0x20) *
                                  (float)((ulong)uStack_108 >> 0x20)) / fStack_100 +
                                  (float)((ulong)ppuVar7[3] >> 0x20),
                                  (SUB84(ppuVar6[3],0) * (float)uStack_108) / fStack_100 +
                                  SUB84(ppuVar7[3],0));
            uStack_110 = uStack_110 | 3;
          }
          if (((uStack_110 ^ 0xffffffff) & 3) == 0) {
            fVar34 = pfStack_90[2] +
                     pfStack_90[1] * uStack_108._4_4_ + (float)uStack_108 * *pfStack_90;
            fVar35 = pfStack_90[5] +
                     uStack_108._4_4_ * pfStack_90[4] + (float)uStack_108 * pfStack_90[3];
            uStack_108 = CONCAT44(fVar35,fVar34);
            lVar24 = lStack_d8 + uVar18 * 0x30;
            lVar4 = lStack_d8 + lVar31;
            if (((*(uint *)(lVar4 + 0x10) ^ 0xffffffff) & 3) != 0) goto LAB_1093b6db0;
            fVar34 = fVar34 - *(float *)(lVar4 + 0x18);
            fVar35 = fVar35 - *(float *)(lVar4 + 0x1c);
            fVar34 = fVar35 * fVar35 + fVar34 * fVar34;
          }
          else {
            lVar24 = lStack_d8 + lVar31;
LAB_1093b6db0:
            fVar34 = 3.4028235e+38;
          }
          if (fVar34 <= fVar33 * fVar33) {
            fVar34 = *(float *)(lStack_f0 + uVar18 * 4);
            fVar37 = (1.0 - fVar34) * (float)uStack_108 + *(float *)(lVar24 + 0x18) * fVar34;
            fVar35 = (1.0 - fVar34) * uStack_108._4_4_ + *(float *)(lVar24 + 0x1c) * fVar34;
            fVar34 = param_2[2] + fVar35 * param_2[1] + fVar37 * *param_2;
            uStack_110 = uStack_110 | 3;
            fVar35 = param_2[5] + fVar35 * param_2[4] + fVar37 * param_2[3];
            uStack_108 = CONCAT44(fVar35,fVar34);
            if (0.0 < fStack_100) {
              ppuVar6 = &PTR_PTR_1132d8bd0;
              if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
                ppuVar6 = *(undefined ***)(param_3 + 0x18);
              }
              ppuVar7 = &PTR_PTR_1132d8bd0;
              if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
                ppuVar7 = *(undefined ***)(param_3 + 0x20);
              }
              uStack_108 = CONCAT44((fStack_100 / *(float *)((long)ppuVar6 + 0x1c)) *
                                    (fVar35 - *(float *)((long)ppuVar7 + 0x1c)),
                                    (fStack_100 / *(float *)(ppuVar6 + 3)) *
                                    (fVar34 - *(float *)(ppuVar7 + 3)));
            }
            if ((*puVar26 & 1) != 0) {
              puVar26 = (ulong *)(*puVar26 + lVar32 * 8 + 7);
            }
            ppfVar27 = (float **)*puVar26;
            if (&pfStack_120 != ppfVar27) {
              func_0x000109340dd8(ppfVar27);
              func_0x000109340c8c(ppfVar27,&pfStack_120);
            }
          }
          lVar32 = lStack_d0;
          lVar24 = lStack_d8;
          if ((abStack_118[0] & 1) != 0) {
            func_0x0001053936ac(abStack_118);
            lVar32 = lStack_d0;
            lVar24 = lStack_d8;
          }
        }
        uVar18 = uVar18 + 1;
        lVar31 = lVar31 + 0x30;
      } while (uVar18 < (ulong)((lVar32 - lVar24 >> 4) * -0x5555555555555555));
    }
    if (piVar28 != (int *)0x0) {
      __ZdlPv();
    }
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      __ZdlPv();
    }
    FUN_1093c3c84(&lStack_d8);
    FUN_1093c3c84(&uStack_c0);
    if ((long ******)ppppplStack_a8 != (long ******)0x0) {
      ppppplStack_a0 = ppppplStack_a8;
      __ZdlPv();
    }
    if (pfStack_90 == (float *)0x0) {
      return;
    }
    pfStack_88 = pfStack_90;
  }
  __ZdlPv(pfStack_90);
  return;
LAB_1093b6700:
  do {
    uVar21 = *puVar26;
    iVar25 = *(int *)(uVar21 + 0x18);
    if (iVar25 < 0) {
LAB_1093b6724:
      FUN_10937e740(&pfStack_120,&UNK_10f56ad23);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56ad0a,0x150,&pfStack_120);
      if (cStack_109 < '\0') {
        __ZdlPv(pfStack_120);
      }
    }
    else {
      iVar10 = *(int *)(uVar21 + 0x1c);
      uVar11 = iVar10 - iVar25;
      if ((uVar11 == 0 || iVar10 < iVar25) || iVar9 < iVar10) goto LAB_1093b6724;
      func_0x000108a5942c(&piStack_150,(ulong)uVar11 + ((long)piStack_148 - (long)piStack_150 >> 2))
      ;
      iVar25 = *(int *)(uVar21 + 0x18);
      piVar20 = piStack_148 + -(ulong)uVar11;
      do {
        piVar22 = piVar20 + 1;
        *piVar20 = iVar25;
        iVar25 = iVar25 + 1;
        piVar20 = piVar22;
      } while (piVar22 != piStack_148);
    }
    puVar26 = puVar26 + 1;
  } while (puVar26 != puVar5);
LAB_1093b681c:
  if (piVar28 != (int *)0x0) {
    __ZdlPv();
  }
  piStack_188 = piStack_148;
  piVar28 = piStack_150;
  iStack_18c = iVar9;
LAB_1093b683c:
  if ((*(int *)(uVar18 + 0x15c) == 4) && (*(int *)(uVar19 + 0x15c) == 4)) {
    if (*(int *)(uVar18 + 0x38) == *(int *)(uVar19 + 0x38)) {
      if (piVar28 != piStack_188) {
        piVar20 = piVar28;
        do {
          lVar32 = (long)*piVar20;
          uVar21 = *(ulong *)(uVar19 + 0x30);
          puVar26 = (ulong *)(uVar19 + 0x30);
          if ((uVar21 & 1) != 0) {
            puVar26 = (ulong *)(uVar21 + lVar32 * 8 + 7);
          }
          FUN_109340d10(&pfStack_120,0,*puVar26);
          uVar21 = *(ulong *)(uVar18 + 0x30);
          puVar26 = (ulong *)(uVar18 + 0x30);
          if ((uVar21 & 1) != 0) {
            puVar26 = (ulong *)(uVar21 + lVar32 * 8 + 7);
          }
          FUN_109340d10(&piStack_150,0,*puVar26);
          if (((((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) ||
               (*(float *)(param_1 + 0x38) <= fStack_fc)) &&
              (((*(byte *)(param_1 + 0x3c) & 1) != 0 ||
               ((((byte)uStack_110 >> 4 & 1) == 0 || ((bStack_f8 & 1) != 0)))))) &&
             ((0.0 < fStack_100 && (0.0 < fStack_130)))) {
            ppuVar6 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
              ppuVar6 = *(undefined ***)(param_3 + 0x18);
            }
            ppuVar7 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
              ppuVar7 = *(undefined ***)(param_3 + 0x20);
            }
            fVar34 = (SUB84(ppuVar6[3],0) * (float)uStack_108) / fStack_100 + SUB84(ppuVar7[3],0);
            fVar35 = ((float)((ulong)ppuVar6[3] >> 0x20) * (float)((ulong)uStack_108 >> 0x20)) /
                     fStack_100 + (float)((ulong)ppuVar7[3] >> 0x20);
            uStack_110 = uStack_110 | 3;
            fVar33 = pfStack_90[2] + pfStack_90[1] * fVar35 + fVar34 * *pfStack_90;
            fVar34 = pfStack_90[5] + pfStack_90[4] * fVar35 + fVar34 * pfStack_90[3];
            uStack_108 = CONCAT44(fVar34,fVar33);
            fVar35 = SUB84(ppuVar7[3],0) + (SUB84(ppuVar6[3],0) * (float)_fStack_138) / fStack_130;
            fVar36 = (float)((ulong)ppuVar7[3] >> 0x20) +
                     ((float)((ulong)ppuVar6[3] >> 0x20) * (float)((ulong)_fStack_138 >> 0x20)) /
                     fStack_130;
            uStack_140 = uStack_140 | 3;
            fVar37 = pfStack_90[2] + pfStack_90[1] * fVar36 + fVar35 * *pfStack_90;
            fVar35 = pfStack_90[5] + pfStack_90[4] * fVar36 + fVar35 * pfStack_90[3];
            _fStack_138 = CONCAT44(fVar35,fVar37);
            if ((((0.0 <= fVar33) && (0.0 <= fVar34)) &&
                (fVar36 = (float)(*(int *)(param_5 + 0xa8) + -1), fVar33 <= fVar36)) &&
               (fVar33 = (float)(*(int *)(param_5 + 0xac) + -1), fVar34 <= fVar33)) {
              if (fVar37 < 0.0) {
LAB_1093b6a40:
                FUN_109341160(&piStack_150,&pfStack_120);
              }
              else {
                bVar13 = false;
                bVar15 = true;
                if (0.0 <= fVar35) {
                  bVar13 = false;
                  bVar15 = true;
                  if (!NAN(fVar37) && !NAN(fVar36)) {
                    bVar13 = fVar37 == fVar36;
                    bVar15 = fVar36 <= fVar37;
                  }
                }
                bVar14 = false;
                bVar16 = true;
                if (!bVar15 || bVar13) {
                  bVar14 = false;
                  bVar16 = true;
                  if (!NAN(fVar35) && !NAN(fVar33)) {
                    bVar14 = fVar35 == fVar33;
                    bVar16 = fVar33 <= fVar35;
                  }
                }
                if (bVar16 && !bVar14) goto LAB_1093b6a40;
              }
              ppppplVar2 = (long *****)(lVar31 + (lVar32 << 0x20));
              if (ppppplStack_a0 < ppppplStack_98) {
                pppppplVar29 = (long ******)(ppppplStack_a0 + 1);
                *ppppplStack_a0 = (long ****)ppppplVar2;
              }
              else {
                lVar32 = (long)ppppplStack_a0 - (long)ppppplStack_a8;
                uVar21 = (lVar32 >> 3) + 1;
                if (uVar21 >> 0x3d != 0) {
                  FUN_1093c3bcc();
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1093b6f4c);
                  (*pcVar12)();
                }
                uVar23 = (long)ppppplStack_98 - (long)ppppplStack_a8 >> 2;
                if (uVar23 <= uVar21) {
                  uVar23 = uVar21;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)ppppplStack_98 - (long)ppppplStack_a8)) {
                  uVar23 = 0x1fffffffffffffff;
                }
                pppppplVar17 = &ppppplStack_a8;
                FUN_1093c3be0();
                plVar3 = (long *)((long)pppppplVar17 + lVar32);
                pppppplVar29 = (long ******)(plVar3 + 1);
                *plVar3 = (long)ppppplVar2;
                pppppplVar30 = (long ******)
                               ((long)plVar3 - ((long)ppppplStack_a0 - (long)ppppplStack_a8));
                _memcpy(pppppplVar30);
                bVar13 = (long ******)ppppplStack_a8 != (long ******)0x0;
                ppppplStack_a8 = (long *****)pppppplVar30;
                ppppplStack_98 = (long *****)(pppppplVar17 + uVar23);
                if (bVar13) {
                  ppppplStack_a0 = (long *****)pppppplVar29;
                  __ZdlPv();
                }
              }
              ppppplStack_a0 = (long *****)pppppplVar29;
              FUN_1093b6290(&uStack_c0,&pfStack_120);
              FUN_1093b6290(&lStack_d8,&piStack_150);
              uStack_154 = *(undefined4 *)(param_1 + 0x44);
              FUN_10939f5b4(&lStack_f0,&uStack_154);
            }
          }
          if (((ulong)piStack_148 & 1) != 0) {
            func_0x0001053936ac(&piStack_148);
          }
          if ((abStack_118[0] & 1) != 0) {
            func_0x0001053936ac(abStack_118);
          }
          piVar20 = piVar20 + 1;
        } while (piVar20 != piStack_188);
      }
      goto LAB_1093b6bb8;
    }
    FUN_10937e740(&pfStack_120,&UNK_10f56993f);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x4a3,&pfStack_120);
  }
  else {
    FUN_10937e740(&pfStack_120,&UNK_10f569903);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56988a,0x49f,&pfStack_120);
  }
LAB_1093b6ba8:
  if (cStack_109 < '\0') {
    __ZdlPv(pfStack_120);
  }
LAB_1093b6bb8:
  lVar31 = lVar31 + 1;
  if (*(int *)(param_5 + 0x20) <= lVar31) goto LAB_1093b6c04;
  goto LAB_1093b6628;
}



/* Entry: 1093b709c; end: 1093b722f;  */

void FUN_1093b709c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x10) >> 3 & 1) == 0) {
      fVar10 = *(float *)(param_5 + 0xb4);
      fVar11 = 0.5;
      if (fVar10 < 0.5) {
        fVar11 = fVar10;
      }
      fVar11 = 1.0 / fVar11;
      if (fVar10 <= 0.008333334) {
        fVar11 = 119.99999;
      }
    }
    else {
      fVar11 = *(float *)(param_1 + 0x24);
    }
    ppuVar3 = &PTR_PTR_1132d8098;
    if (*(undefined ***)(param_3 + 0x98) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(param_3 + 0x98);
    }
    FUN_1093e9dfc(auStack_a0,ppuVar3);
    ppuVar3 = &PTR_PTR_1132d8098;
    if (*(undefined ***)(param_5 + 0x98) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(param_5 + 0x98);
    }
    FUN_1093e9dfc(auStack_e0,ppuVar3);
    uVar5 = *(ulong *)(param_5 + 0x18);
    puVar9 = (ulong *)(param_5 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar9 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(param_5 + 0x20) != 0) {
      puVar2 = puVar9 + *(int *)(param_5 + 0x20);
      puVar1 = (ulong *)(param_3 + 0x18);
      do {
        uVar5 = *puVar9;
        if (((*(byte *)(uVar5 + 0x12) & 1) != 0) &&
           (uVar6 = (ulong)*(uint *)(param_3 + 0x20), 0 < (int)*(uint *)(param_3 + 0x20))) {
          uVar7 = *puVar1;
          puVar8 = (ulong *)(uVar7 + 7);
          do {
            puVar4 = puVar1;
            if ((uVar7 & 1) != 0) {
              puVar4 = puVar8;
            }
            if (((*(byte *)(*puVar4 + 0x12) & 1) != 0) &&
               (*(int *)(*puVar4 + 0x130) == *(int *)(uVar5 + 0x130))) {
              if (*(int *)(uVar5 + 0x14c) < 1) {
                puVar4 = puVar1;
                if ((uVar7 & 1) != 0) {
                  puVar4 = puVar8;
                }
                if (*(int *)(*puVar4 + 0x14c) < 1) {
                  FUN_1093e7ee4(fVar11,param_1,param_2,*(undefined4 *)(param_5 + 0xa8),
                                *(undefined4 *)(param_5 + 0xac),*puVar4,auStack_a0,auStack_e0,
                                param_4,uVar5);
                }
              }
              break;
            }
            puVar8 = puVar8 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar2);
    }
  }
  return;
}



/* Entry: 1093b7230; end: 1093b74b3;  */

void FUN_1093b7230(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  ulong *puVar13;
  float fVar14;
  float fVar15;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x10) >> 3 & 1) == 0) {
      fVar14 = *(float *)(param_4 + 0xb4);
      fVar15 = 0.5;
      if (fVar14 < 0.5) {
        fVar15 = fVar14;
      }
      fVar15 = 1.0 / fVar15;
      if (fVar14 <= 0.008333334) {
        fVar15 = 119.99999;
      }
    }
    else {
      fVar15 = *(float *)(param_1 + 0x24);
    }
    uVar6 = *(ulong *)(param_4 + 0x18);
    puVar13 = (ulong *)(param_4 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar13 = (ulong *)(uVar6 + 7);
    }
    if (*(int *)(param_4 + 0x20) != 0) {
      puVar2 = puVar13 + *(int *)(param_4 + 0x20);
      puVar1 = (ulong *)(param_3 + 0x18);
      do {
        uVar6 = *puVar13;
        if (((*(uint *)(uVar6 + 0x10) ^ 0xffffffff) & 0x10010) == 0) {
          lVar11 = *(long *)(uVar6 + 0xd0);
          iVar12 = *(int *)(lVar11 + 0x28);
          piVar4 = (int *)(lVar11 + 0xb8);
          iVar5 = *piVar4;
          if (iVar5 < 3) {
            if (*(int *)(lVar11 + 0xbc) < 3) {
              FUN_109311970(piVar4,iVar5,3);
              iVar5 = *(int *)(lVar11 + 0xb8);
              lVar7 = *(long *)(lVar11 + 0xc0);
              *(undefined4 *)(lVar11 + 0xb8) = 3;
              if (iVar5 == 3) goto LAB_1093b739c;
            }
            else {
              lVar7 = *(long *)(lVar11 + 0xc0);
              *(undefined4 *)(lVar11 + 0xb8) = 3;
            }
            _bzero(lVar7 + (long)iVar5 * 4,(long)iVar5 * -4 + 0xc);
          }
          else if (iVar5 != 3) {
            *piVar4 = 3;
          }
LAB_1093b739c:
          piVar4 = (int *)(lVar11 + 0xa8);
          iVar5 = *piVar4;
          lVar7 = (long)iVar12 * 3;
          iVar12 = (int)lVar7;
          if (iVar5 < iVar12) {
            if (*(int *)(lVar11 + 0xac) < iVar12) {
              FUN_109311970(piVar4,iVar5,lVar7);
              iVar5 = *piVar4;
            }
            *(int *)(lVar11 + 0xa8) = iVar12;
            if (iVar5 != iVar12) {
              _bzero(*(long *)(lVar11 + 0xb0) + (long)iVar5 * 4,(lVar7 - iVar5) * 4);
            }
          }
          else if (iVar12 < iVar5) {
            *piVar4 = iVar12;
          }
          uVar8 = (ulong)*(uint *)(param_3 + 0x20);
          if (0 < (int)*(uint *)(param_3 + 0x20)) {
            uVar9 = *puVar1;
            puVar10 = (ulong *)(uVar9 + 7);
            do {
              puVar3 = puVar1;
              if ((uVar9 & 1) != 0) {
                puVar3 = puVar10;
              }
              if (((*(byte *)(*puVar3 + 0x12) & 1) != 0) &&
                 (*(int *)(*puVar3 + 0x130) == *(int *)(uVar6 + 0x130))) {
                puVar3 = puVar1;
                if ((uVar9 & 1) != 0) {
                  puVar3 = puVar10;
                }
                if ((*(byte *)(*puVar3 + 0x10) >> 4 & 1) != 0) {
                  FUN_1093cfa20(fVar15,param_1,param_2,*(undefined8 *)(*puVar3 + 0xd0),lVar11);
                }
                break;
              }
              puVar10 = puVar10 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else {
          FUN_10937e740(auStack_88,&UNK_10f569996);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569985,0x520,auStack_88);
          if (cStack_71 < '\0') {
            __ZdlPv(auStack_88[0]);
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar2);
    }
  }
  return;
}



/* Entry: 1093b74b4; end: 1093b75c3;  */

void FUN_1093b74b4(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  float fVar8;
  float fVar9;
  
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
    fVar8 = *(float *)(param_3 + 0xb4);
    fVar9 = 0.5;
    if (fVar8 < 0.5) {
      fVar9 = fVar8;
    }
    fVar9 = 1.0 / fVar9;
    if (fVar8 <= 0.008333334) {
      fVar9 = 119.99999;
    }
  }
  else {
    fVar9 = *(float *)(param_1 + 0x40);
  }
  uVar4 = *(ulong *)(param_3 + 0x18);
  puVar7 = (ulong *)(param_3 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar7 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar2 = puVar7 + *(int *)(param_3 + 0x20);
    puVar1 = (ulong *)(param_2 + 0x18);
    do {
      if (((*(byte *)(*puVar7 + 0x12) & 1) != 0) &&
         (uVar4 = (ulong)*(uint *)(param_2 + 0x20), 0 < (int)*(uint *)(param_2 + 0x20))) {
        uVar5 = *puVar1;
        puVar6 = (ulong *)(uVar5 + 7);
        do {
          puVar3 = puVar1;
          if ((uVar5 & 1) != 0) {
            puVar3 = puVar6;
          }
          if (((*(byte *)(*puVar3 + 0x12) & 1) != 0) &&
             (*(int *)(*puVar3 + 0x130) == *(int *)(*puVar7 + 0x130))) {
            puVar3 = puVar1;
            if ((uVar5 & 1) != 0) {
              puVar3 = puVar6;
            }
            FUN_1093e82e0(fVar9,param_1,*puVar3);
            break;
          }
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar2);
  }
  return;
}



/* Entry: 1093b75c4; end: 1093b76c7;  */

void FUN_1093b75c4(undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  puVar8 = (ulong *)(param_3 + 0x18);
  puVar9 = puVar8;
  if ((*puVar8 & 1) != 0) {
    puVar9 = (ulong *)(*puVar8 + 7);
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar2 = puVar9 + *(int *)(param_3 + 0x20);
    puVar1 = (ulong *)(param_2 + 0x18);
    do {
      if (((*(byte *)(*puVar9 + 0x12) & 1) != 0) &&
         (uVar4 = (ulong)*(uint *)(param_2 + 0x20), 0 < (int)*(uint *)(param_2 + 0x20))) {
        uVar5 = *puVar1;
        puVar6 = (ulong *)(uVar5 + 7);
        do {
          puVar3 = puVar1;
          if ((uVar5 & 1) != 0) {
            puVar3 = puVar6;
          }
          if (((*(byte *)(*puVar3 + 0x12) & 1) != 0) &&
             (*(int *)(*puVar3 + 0x130) == *(int *)(*puVar9 + 0x130))) {
            puVar3 = puVar1;
            if ((uVar5 & 1) != 0) {
              puVar3 = puVar6;
            }
            FUN_1093e8770(param_1,*puVar3);
            break;
          }
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
    if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
      puVar8 = (ulong *)(*(ulong *)(param_3 + 0x18) + 7);
    }
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = (long)*(int *)(param_3 + 0x20) << 3;
      do {
        FUN_1093e8c18(param_1,*puVar8);
        lVar7 = lVar7 + -8;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
  }
  return;
}



/* Entry: 1093b76c8; end: 1093b774f;  */

void FUN_1093b76c8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x18) != 0.0) {
    uVar2 = *(ulong *)(param_2 + 0x18);
    puVar3 = (ulong *)(param_2 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar4 = (long)*(int *)(param_2 + 0x20) << 3;
      do {
        uVar2 = *puVar3;
        uVar1 = *(uint *)(uVar2 + 0x10);
        if (((uVar1 >> 0x12 & 1) != 0) && (*(float *)(uVar2 + 0x138) < *(float *)(param_1 + 0x18)))
        {
          *(undefined1 *)(uVar2 + 0x13c) = 0;
          *(uint *)(uVar2 + 0x10) = uVar1 | 0x80000;
          if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
            fVar5 = *(float *)(param_1 + 0x1c);
            if (*(float *)(uVar2 + 0x134) <= *(float *)(param_1 + 0x1c)) {
              fVar5 = *(float *)(uVar2 + 0x134);
            }
            *(float *)(uVar2 + 0x134) = fVar5;
            *(uint *)(uVar2 + 0x10) = uVar1 | 0xa0000;
          }
        }
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return;
}



/* Entry: 1093b7750; end: 1093b790f;  */

void FUN_1093b7750(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  float fVar14;
  
  uVar8 = *(ulong *)(param_4 + 0x18);
  puVar13 = (ulong *)(param_4 + 0x18);
  if ((uVar8 & 1) != 0) {
    puVar13 = (ulong *)(uVar8 + 7);
  }
  if (*(int *)(param_4 + 0x20) != 0) {
    puVar2 = puVar13 + *(int *)(param_4 + 0x20);
    puVar1 = (ulong *)(param_3 + 0x18);
    do {
      uVar8 = *puVar13;
      if (((*(byte *)(uVar8 + 0x10) >> 4 & 1) != 0) &&
         (lVar6 = param_1, FUN_1093d4288(param_1,*(undefined8 *)(uVar8 + 0xd0)), (int)lVar6 != 0)) {
        uVar7 = *(uint *)(uVar8 + 0x10);
        if (((uVar7 >> 0x10 & 1) != 0) &&
           (uVar9 = (ulong)*(uint *)(param_3 + 0x20), 0 < (int)*(uint *)(param_3 + 0x20))) {
          uVar10 = *puVar1;
          puVar11 = (ulong *)(uVar10 + 7);
          do {
            puVar3 = puVar1;
            if ((uVar10 & 1) != 0) {
              puVar3 = puVar11;
            }
            if (((*(byte *)(*puVar3 + 0x12) & 1) != 0) &&
               (*(int *)(*puVar3 + 0x130) == *(int *)(uVar8 + 0x130))) {
              puVar3 = puVar1;
              if ((uVar10 & 1) != 0) {
                puVar3 = puVar11;
              }
              uVar9 = *puVar3;
              if (((*(byte *)(uVar9 + 0x10) >> 4 & 1) != 0) && (*(char *)(uVar9 + 0x13c) == '\x01'))
              {
                uVar12 = *(undefined8 *)(uVar9 + 0xd0);
                if ((*(int *)(param_1 + 0x38) == -1) ||
                   (*(int *)(uVar9 + 0x140) < *(int *)(param_1 + 0x38))) {
                  uVar5 = *(undefined1 *)(param_1 + 0x3c);
                  uVar4 = *(undefined4 *)(param_2 + 0x20);
                  *(uint *)(uVar8 + 0x10) = uVar7 | 0x10;
                  uVar10 = *(ulong *)(uVar8 + 0xd0);
                  if (uVar10 == 0) {
                    uVar10 = *(ulong *)(uVar8 + 8);
                    if ((uVar10 & 1) != 0) {
                      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
                    }
                    func_0x00010933b59c();
                    *(ulong *)(uVar8 + 0xd0) = uVar10;
                  }
                  FUN_1093d0918(param_2,uVar5,0,uVar4,uVar12,uVar10);
                  *(int *)(uVar8 + 0x140) = *(int *)(uVar9 + 0x140) + 1;
                  uVar7 = *(uint *)(uVar8 + 0x10) | 0x100000;
                  goto LAB_1093b78d0;
                }
              }
              break;
            }
            puVar11 = puVar11 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        *(undefined1 *)(uVar8 + 0x13c) = 0;
        *(uint *)(uVar8 + 0x10) = uVar7 | 0x80000;
        if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
          fVar14 = *(float *)(param_1 + 0x34);
          if (*(float *)(uVar8 + 0x134) <= *(float *)(param_1 + 0x34)) {
            fVar14 = *(float *)(uVar8 + 0x134);
          }
          *(float *)(uVar8 + 0x134) = fVar14;
          uVar7 = uVar7 | 0xa0000;
LAB_1093b78d0:
          *(uint *)(uVar8 + 0x10) = uVar7;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
  }
  return;
}



/* Entry: 1093b7910; end: 1093b7e43;  */

/* WARNING: Removing unreachable block (ram,0x0001093b7d14) */

void FUN_1093b7910(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong *puVar17;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long alStack_b0 [2];
  char cStack_99;
  undefined8 uStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  byte bStack_69;
  
  ppuVar2 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x18);
  }
  FUN_1093e96e8(auStack_80,param_3,ppuVar2);
  ppuVar2 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x48);
  }
  FUN_1093e96e8(&uStack_98,param_3,ppuVar2);
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
  }
  if (uStack_78 == 0) {
LAB_1093b7bec:
    FUN_10937e740(alStack_b0,&UNK_10f5699e2);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5699c7,0x58b,alStack_b0);
LAB_1093b7cec:
    if (-1 < cStack_99) goto LAB_1093b7cfc;
  }
  else {
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
    }
    if (uStack_90 == 0) goto LAB_1093b7bec;
    lVar10 = param_3;
    FUN_1093c7e44(param_3,auStack_80);
    if (lVar10 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b7d88:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1093b7d8c);
      (*pcVar6)();
    }
    FUN_1093c7e44(param_3,&uStack_98);
    if (param_3 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b7d88;
    }
    uVar8 = *(ulong *)(lVar10 + 0x28);
    if (((int)uVar8 != 1) ||
       (uVar13 = *(ulong *)(lVar10 + 0x30), (uVar13 & 0xffffffff00000000) != 0x100000000)) {
      FUN_10937e740(alStack_b0,&UNK_10f56913a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5699c7,0x594,alStack_b0);
      goto LAB_1093b7cec;
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 * ((int)uVar13 + -1) + 1 != *(int *)(param_4 + 0xa8)) {
LAB_1093b7c54:
      FUN_10937e740(alStack_b0,&UNK_10f56915a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5699c7,0x59b,alStack_b0);
      goto LAB_1093b7cec;
    }
    if (iVar3 * ((int)(uVar8 >> 0x20) + -1) + 1 != *(int *)(param_4 + 0xac)) goto LAB_1093b7c54;
    uVar12 = *(ulong *)(param_3 + 0x28);
    if (((int)uVar12 != 1) ||
       (uVar14 = *(ulong *)(param_3 + 0x30), (uVar14 & 0xffffffff00000000) != 0x200000000)) {
      FUN_10937e740(alStack_b0,&UNK_10f569a1b);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5699c7,0x5a2,alStack_b0);
      goto LAB_1093b7cec;
    }
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    if ((iVar3 * ((int)uVar14 + -1) + 1 != *(int *)(param_4 + 0xa8)) ||
       (iVar3 * ((int)(uVar12 >> 0x20) + -1) + 1 != *(int *)(param_4 + 0xac))) {
      FUN_10937e740(alStack_b0,&UNK_10f569a39);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f5699c7,0x5a9,alStack_b0);
      goto LAB_1093b7cec;
    }
    FUN_1093e3918(alStack_b0,lVar10 + 0x28);
    FUN_1093e3918(&lStack_c8,param_3 + 0x28);
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    uVar9 = *(ulong *)(param_4 + 0x18);
    puVar17 = (ulong *)(param_4 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar17 = (ulong *)(uVar9 + 7);
    }
    if (*(int *)(param_4 + 0x20) != 0) {
      puVar1 = puVar17 + *(int *)(param_4 + 0x20);
      do {
        uVar15 = *puVar17;
        uVar9 = uVar15;
        FUN_1093e4484(uVar15,alStack_b0[0],uVar13,uVar8 >> 0x20,lStack_c8,uVar14,uVar12 >> 0x20,
                      *(undefined4 *)(param_4 + 0xa8),*(undefined4 *)(param_4 + 0xac));
        if ((int)uVar9 != 0) {
          *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 8;
          uVar9 = *(ulong *)(uVar15 + 200);
          if (uVar9 == 0) {
            uVar9 = *(ulong *)(uVar15 + 8);
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            func_0x000109311fd0();
            *(ulong *)(uVar15 + 200) = uVar9;
          }
          *(undefined4 *)(uVar9 + 0x30) = *(undefined4 *)(param_4 + 0xa8);
          uVar4 = *(uint *)(uVar9 + 0x10);
          *(uint *)(uVar9 + 0x10) = uVar4 | 2;
          uVar5 = *(undefined4 *)(param_4 + 0xac);
          piVar16 = (int *)(uVar9 + 0x18);
          *piVar16 = 0;
          *(undefined4 *)(uVar9 + 0x34) = uVar5;
          *(uint *)(uVar9 + 0x10) = uVar4 | 6;
          if (*(int *)(uVar9 + 0x1c) < 6) {
            FUN_109311970(piVar16,0,6);
            lVar10 = (long)*piVar16;
          }
          else {
            lVar10 = 0;
          }
          lVar7 = 0;
          lVar11 = *(long *)(uVar9 + 0x20);
          *(undefined4 *)(uVar9 + 0x18) = 6;
          do {
            *(undefined4 *)(lVar11 + lVar10 * 4 + lVar7) = *(undefined4 *)(&UNK_10dfc8fc8 + lVar7);
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0x18);
          *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 1;
          uVar15 = *(ulong *)(uVar9 + 8);
          if ((uVar15 & 1) != 0) {
            uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(uVar9 + 0x28,&uStack_e0,uVar15);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar1);
      if (lStack_d0 < 0) {
        __ZdlPv(uStack_e0);
      }
    }
    if (lStack_c8 != 0) {
      lStack_c0 = lStack_c8;
      __ZdlPv();
    }
    if (alStack_b0[0] == 0) goto LAB_1093b7cfc;
  }
  __ZdlPv(alStack_b0[0]);
LAB_1093b7cfc:
  if ((char)bStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  return;
}



/* Entry: 1093b7e44; end: 1093b8727;  */

/* WARNING: Removing unreachable block (ram,0x0001093b80d0) */
/* WARNING: Removing unreachable block (ram,0x0001093b7f6c) */
/* WARNING: Removing unreachable block (ram,0x0001093b80c0) */
/* WARNING: Removing unreachable block (ram,0x0001093b80e0) */

void FUN_1093b7e44(long param_1,long param_2,long param_3,ulong *param_4,long param_5)

{
  undefined **ppuVar1;
  int iVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  undefined **ppuVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined **ppuStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined **ppuStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  undefined **appuStack_100 [3];
  undefined8 uStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  byte bStack_99;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte bStack_81;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (0xfffffffd < iVar2 - 3U && *(int *)(param_1 + 0x54) != 3) {
    FUN_10937e740(&ppuStack_160,&UNK_10f569a70);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5cf,&ppuStack_160);
    if (-1 < uStack_150._7_1_) {
      return;
    }
    __ZdlPv(ppuStack_160);
    return;
  }
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x30);
  }
  FUN_1093e96e8(auStack_98,param_4,ppuVar1);
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x38);
  }
  FUN_1093e96e8(auStack_b0,param_4,ppuVar1);
  func_0x000107c31940(&ppuStack_d0,"");
  if (*(int *)(param_1 + 0x40) == 1) {
    ppuVar1 = &PTR_PTR_1132d15f8;
    if (*(undefined ***)(param_2 + 0xa0) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0xa0);
    }
    FUN_1093e96e8(&ppuStack_160,param_4,ppuVar1);
LAB_1093b7f64:
    uStack_c8 = uStack_158;
    ppuStack_d0 = ppuStack_160;
    uStack_c0 = uStack_150;
  }
  else if (*(int *)(param_1 + 0x40) == 0) {
    ppuVar1 = &PTR_PTR_1132d15f8;
    if (*(undefined ***)(param_2 + 0x40) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x40);
    }
    FUN_1093e96e8(&ppuStack_160,param_4,ppuVar1);
    goto LAB_1093b7f64;
  }
  if (iVar2 == 1) {
    if ((*(byte *)(param_2 + 0x12) >> 2 & 1) == 0) {
      FUN_10937e740(&ppuStack_160,&UNK_10f569aa0);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5de,&ppuStack_160);
      if ((long)uStack_150 < 0) {
        __ZdlPv(ppuStack_160);
      }
    }
    ppuVar1 = &PTR_PTR_1132d15f8;
    if (*(undefined ***)(param_2 + 0xa8) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0xa8);
    }
    FUN_1093e96e8(&uStack_e8,param_4,ppuVar1);
  }
  else {
    func_0x000107c31940(&uStack_e8,"");
  }
  if (-1 < (char)bStack_81) {
    uStack_90 = (ulong)bStack_81;
  }
  if (uStack_90 == 0) {
LAB_1093b8068:
    FUN_10937e740(&ppuStack_160,&UNK_10f569ad4);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5e3,&ppuStack_160);
LAB_1093b8098:
    appuStack_100[0] = ppuStack_160;
    if (-1 < (long)uStack_150) goto LAB_1093b80a8;
  }
  else {
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
    }
    if (uStack_a8 == 0) goto LAB_1093b8068;
    uVar8 = uStack_c8;
    if (-1 < (long)uStack_c0) {
      uVar8 = uStack_c0 >> 0x38;
    }
    if (uVar8 == 0) goto LAB_1093b8068;
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
    }
    if ((iVar2 == 1) && (uStack_e0 == 0)) goto LAB_1093b8068;
    puVar4 = param_4;
    FUN_1093c7e44(param_4,auStack_98);
    if (puVar4 == (ulong *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b8598:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1093b859c);
      (*pcVar3)();
    }
    puVar5 = param_4;
    FUN_1093c7e44(param_4,auStack_b0);
    if (puVar5 == (ulong *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b8598;
    }
    puVar6 = param_4;
    FUN_1093c7e44(param_4,&ppuStack_d0);
    if (puVar6 == (ulong *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b8598;
    }
    uVar8 = puVar4[5];
    if ((int)uVar8 != 1) {
LAB_1093b8254:
      FUN_10937e740(&ppuStack_160,&UNK_10f569b08);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5ed,&ppuStack_160);
      goto LAB_1093b8098;
    }
    uVar12 = puVar4[6];
    iVar7 = (int)(uVar12 >> 0x20);
    if (*(int *)(param_1 + 0x38) != iVar7) goto LAB_1093b8254;
    iVar11 = (int)uVar12;
    if (*(int *)(param_1 + 0x50) * (iVar11 + -1) + 1 != *(int *)(param_5 + 0xa8)) {
LAB_1093b8288:
      FUN_10937e740(&ppuStack_160,&UNK_10f569b27);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5f3,&ppuStack_160);
      goto LAB_1093b8098;
    }
    uVar15 = uVar8 >> 0x20;
    iVar14 = (int)(uVar8 >> 0x20);
    if (*(int *)(param_1 + 0x50) * (iVar14 + -1) + 1 != *(int *)(param_5 + 0xac))
    goto LAB_1093b8288;
    if (((((int)puVar5[5] != 1) || (puVar5[5] >> 0x20 != uVar15)) || ((int)puVar5[6] != iVar11)) ||
       ((int)(puVar5[6] >> 0x20) != iVar7 * 2)) {
      FUN_10937e740(&ppuStack_160,&UNK_10f569b49);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5f9,&ppuStack_160);
      goto LAB_1093b8098;
    }
    if ((((int)puVar6[5] != 1) || (puVar6[5] >> 0x20 != uVar15)) ||
       (((int)puVar6[6] != iVar11 ||
        (*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x54) != (int)(puVar6[6] >> 0x20))))) {
      FUN_10937e740(&ppuStack_160,&UNK_10f569b6d);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x5ff,&ppuStack_160);
      goto LAB_1093b8098;
    }
    FUN_1093e3918(appuStack_100,puVar4 + 5);
    FUN_1093e3918(&lStack_118,puVar5 + 5);
    FUN_1093e3918(&lStack_130,puVar6 + 5);
    ppuVar1 = &PTR_PTR_1132d8bd0;
    if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    uVar16 = *(undefined4 *)(ppuVar1 + 3);
    if (iVar2 == 1) {
      FUN_1093b1918(param_4,&uStack_e8);
      if ((((int)*param_4 == 1) && (*param_4 >> 0x20 == uVar15)) &&
         (((int)param_4[1] == iVar11 && ((param_4[1] & 0xffffffff00000000) == 0x100000000)))) {
        FUN_1093e3918(&ppuStack_160);
        ppuStack_180 = ppuStack_160;
        goto LAB_1093b8374;
      }
      FUN_10937e740(&ppuStack_160,&UNK_10f569b9a);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x60e,&ppuStack_160);
      ppuStack_180 = ppuStack_160;
      if ((long)uStack_150 < 0) goto LAB_1093b8538;
    }
    else {
      ppuStack_180 = (undefined **)0x0;
LAB_1093b8374:
      uVar8 = *(ulong *)(param_5 + 0x18);
      puVar4 = (ulong *)(param_5 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar4 = (ulong *)(uVar8 + 7);
      }
      if (*(int *)(param_5 + 0x20) != 0) {
        lVar13 = (long)*(int *)(param_5 + 0x20) << 3;
        do {
          ppuVar9 = *(undefined ***)(*puVar4 + 0xb8);
          ppuVar1 = &PTR_PTR_1132d8ba0;
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar1 = ppuVar9;
          }
          ppuStack_160 = &PTR_FUN_110aefb40;
          uStack_158 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          puStack_148 = ppuVar1[3];
          uStack_150 = 3;
          if (*(char *)(param_1 + 0x4a) == '\x01') {
            if (*(int *)(*puVar4 + 0x154) == 3) {
              if ((*(byte *)(ppuVar1 + 2) >> 2 & 1) != 0) {
                uStack_140 = (ulong)*(uint *)(ppuVar1 + 4);
                uVar10 = 0x1f;
                goto LAB_1093b840c;
              }
              FUN_10937e740(auStack_178,&UNK_10f569be9);
              FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x620,auStack_178);
            }
            else {
              FUN_10937e740(auStack_178,&UNK_10f569bb8);
              FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569a5a,0x61c,auStack_178);
            }
            if (cStack_161 < '\0') {
              __ZdlPv(auStack_178[0]);
            }
            if ((uStack_158 & 1) != 0) {
              func_0x0001053936ac(&uStack_158);
            }
            break;
          }
          uVar10 = 0x1b;
LAB_1093b840c:
          uStack_140 = CONCAT44(*(undefined4 *)((long)ppuVar1 + 0x24),(undefined4)uStack_140);
          uStack_138 = 0xffffffff;
          uStack_150 = (ulong)uVar10;
          FUN_1093e4800(uVar16,&ppuStack_160,0,0,appuStack_100[0],lStack_118,lStack_130,ppuStack_180
                        ,uVar12,iVar14);
          if ((uStack_158 & 1) != 0) {
            func_0x0001053936ac(&uStack_158);
          }
          puVar4 = puVar4 + 1;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
      }
      if (ppuStack_180 != (undefined **)0x0) {
LAB_1093b8538:
        __ZdlPv(ppuStack_180);
      }
    }
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    if (lStack_118 != 0) {
      lStack_110 = lStack_118;
      __ZdlPv();
    }
    if (appuStack_100[0] == (undefined **)0x0) goto LAB_1093b80a8;
  }
  __ZdlPv(appuStack_100[0]);
LAB_1093b80a8:
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(uStack_e8);
  }
  return;
}



/* Entry: 1093b8728; end: 1093b9957;  */

/* WARNING: Removing unreachable block (ram,0x0001093b8afc) */
/* WARNING: Removing unreachable block (ram,0x0001093b8adc) */
/* WARNING: Removing unreachable block (ram,0x0001093b8aec) */
/* WARNING: Removing unreachable block (ram,0x0001093b8b0c) */

void FUN_1093b8728(long param_1,long param_2,long param_3,ulong *param_4,long param_5)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  bool bVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  int *piVar22;
  undefined **ppuVar23;
  long *plVar24;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  undefined ***pppuVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
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
  undefined4 uStack_300;
  undefined8 uStack_2fc;
  undefined4 uStack_2f4;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  ulong auStack_2d8 [15];
  undefined4 uStack_25c;
  undefined1 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined8 uStack_244;
  undefined8 uStack_23c;
  undefined8 uStack_234;
  undefined8 uStack_22c;
  undefined **ppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined **ppuStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined **appuStack_160 [3];
  undefined8 uStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  byte bStack_f9;
  undefined1 auStack_f8 [8];
  ulong uStack_f0;
  byte bStack_e1;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  byte bStack_c9;
  undefined1 auStack_c8 [8];
  ulong uStack_c0;
  byte bStack_b1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR_PTR_1132d1518;
  if (*(undefined ***)(param_1 + 0x40) != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x40);
  }
  ppuVar6 = &PTR_PTR_1132d1ad0;
  if (*(undefined ***)(param_1 + 0x48) != (undefined **)0x0) {
    ppuVar6 = *(undefined ***)(param_1 + 0x48);
  }
  if (*(int *)((long)ppuVar5 + 0x24) == *(int *)(ppuVar6 + 10)) {
    iVar8 = *(int *)((long)ppuVar6 + 0x44);
    if ((iVar8 - 1U < 2) && (*(int *)((long)ppuVar6 + 0x54) != 3)) {
      FUN_10937e740(&ppuStack_390,&UNK_10f569c5d);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x645,&ppuStack_390);
      goto LAB_1093b8838;
    }
    uVar4 = *(uint *)(param_2 + 0x10) & 6;
    if (uVar4 == 6) {
      FUN_1093e96e8(auStack_c8,param_4,*(undefined8 *)(param_2 + 0x20));
      ppuVar20 = &PTR_PTR_1132d15f8;
      if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
        ppuVar20 = *(undefined ***)(param_2 + 0x28);
      }
      FUN_1093e96e8(auStack_e0,param_4,ppuVar20);
    }
    else {
      func_0x000107c31940(auStack_c8,"");
      func_0x000107c31940(auStack_e0,"");
    }
    ppuVar20 = &PTR_PTR_1132d15f8;
    if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
      ppuVar20 = *(undefined ***)(param_2 + 0x30);
    }
    FUN_1093e96e8(auStack_f8,param_4,ppuVar20);
    ppuVar20 = &PTR_PTR_1132d15f8;
    if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
      ppuVar20 = *(undefined ***)(param_2 + 0x38);
    }
    FUN_1093e96e8(auStack_110,param_4,ppuVar20);
    func_0x000107c31940(&ppuStack_130,"");
    if (0 < *(int *)(ppuVar6 + 4)) {
      if (*(int *)(ppuVar6 + 8) == 1) {
        ppuVar20 = &PTR_PTR_1132d15f8;
        if (*(undefined ***)(param_2 + 0xa0) != (undefined **)0x0) {
          ppuVar20 = *(undefined ***)(param_2 + 0xa0);
        }
        FUN_1093e96e8(&ppuStack_390,param_4,ppuVar20);
      }
      else {
        if (*(int *)(ppuVar6 + 8) != 0) goto LAB_1093b894c;
        ppuVar20 = &PTR_PTR_1132d15f8;
        if (*(undefined ***)(param_2 + 0x40) != (undefined **)0x0) {
          ppuVar20 = *(undefined ***)(param_2 + 0x40);
        }
        FUN_1093e96e8(&ppuStack_390,param_4,ppuVar20);
      }
      if (uStack_120._7_1_ < '\0') {
        __ZdlPv(ppuStack_130);
      }
      ppuStack_128 = ppuStack_388;
      ppuStack_130 = ppuStack_390;
      uStack_120 = uStack_380;
    }
LAB_1093b894c:
    if (iVar8 == 1) {
      if ((*(byte *)(param_2 + 0x12) >> 2 & 1) == 0) {
        FUN_10937e740(&ppuStack_390,&UNK_10f569aa0);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x65a,&ppuStack_390);
        if ((long)uStack_380 < 0) {
          __ZdlPv(ppuStack_390);
        }
      }
      ppuVar20 = &PTR_PTR_1132d15f8;
      if (*(undefined ***)(param_2 + 0xa8) != (undefined **)0x0) {
        ppuVar20 = *(undefined ***)(param_2 + 0xa8);
      }
      FUN_1093e96e8(&uStack_148,param_4,ppuVar20);
    }
    else {
      func_0x000107c31940(&uStack_148,"");
    }
    if (uVar4 == 6) {
      if (-1 < (char)bStack_b1) {
        uStack_c0 = (ulong)bStack_b1;
      }
      if (uStack_c0 != 0) {
        if (-1 < (char)bStack_c9) {
          uStack_d8 = (ulong)bStack_c9;
        }
        if (uStack_d8 != 0) goto LAB_1093b8a00;
      }
LAB_1093b8a74:
      FUN_10937e740(&ppuStack_390,&UNK_10f569c92);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x661,&ppuStack_390);
LAB_1093b8aa4:
      appuStack_160[0] = ppuStack_390;
      if ((long)uStack_380 < 0) {
LAB_1093b8ab0:
        __ZdlPv(appuStack_160[0]);
      }
LAB_1093b8ab4:
      if ((char)bStack_131 < '\0') {
        __ZdlPv(uStack_148);
      }
      if ((long)uStack_120 < 0) {
        __ZdlPv(ppuStack_130);
      }
      goto LAB_1093b8b14;
    }
LAB_1093b8a00:
    if (-1 < (char)bStack_e1) {
      uStack_f0 = (ulong)bStack_e1;
    }
    if (uStack_f0 == 0) goto LAB_1093b8a74;
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
    }
    if (uStack_108 == 0) goto LAB_1093b8a74;
    if (0 < *(int *)(ppuVar6 + 4)) {
      ppuVar20 = ppuStack_128;
      if (-1 < (long)uStack_120) {
        ppuVar20 = (undefined **)(uStack_120 >> 0x38);
      }
      if (ppuVar20 == (undefined **)0x0) goto LAB_1093b8a74;
    }
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
    }
    if ((iVar8 == 1) && (uStack_140 == 0)) goto LAB_1093b8a74;
    puVar15 = param_4;
    FUN_1093c7e44(param_4,auStack_f8);
    if (puVar15 != (ulong *)0x0) {
      puVar11 = param_4;
      FUN_1093c7e44(param_4,auStack_110);
      if (puVar11 == (ulong *)0x0) {
        FUN_109262df8(&UNK_10f56ae8d);
        goto LAB_1093b968c;
      }
      uVar16 = puVar15[5];
      if ((int)uVar16 != 1) {
LAB_1093b8ce0:
        FUN_10937e740(&ppuStack_390,&UNK_10f569b08);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x66a,&ppuStack_390);
        goto LAB_1093b8aa4;
      }
      uVar13 = puVar15[6];
      iVar12 = (int)(uVar13 >> 0x20);
      if (*(int *)(ppuVar6 + 7) != iVar12) goto LAB_1093b8ce0;
      if (((int)puVar11[5] != 1) || (uVar18 = uVar16 >> 0x20, puVar11[5] >> 0x20 != uVar18)) {
LAB_1093b8d14:
        FUN_10937e740(&ppuStack_390,&UNK_10f569b49);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x672,&ppuStack_390);
        goto LAB_1093b8aa4;
      }
      iVar17 = (int)uVar13;
      if (((int)puVar11[6] != iVar17) || ((int)(puVar11[6] >> 0x20) != iVar12 * 2))
      goto LAB_1093b8d14;
      if ((*(int *)((long)ppuVar5 + 0x24) * (iVar17 + -1) + 1 != *(int *)(param_5 + 0xa8)) ||
         (iVar12 = (int)(uVar16 >> 0x20),
         *(int *)((long)ppuVar5 + 0x24) * (iVar12 + -1) + 1 != *(int *)(param_5 + 0xac))) {
        FUN_10937e740(&ppuStack_390,&UNK_10f569ccb);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x677,&ppuStack_390);
        goto LAB_1093b8aa4;
      }
      FUN_1093e3918(appuStack_160,puVar15 + 5);
      FUN_1093e3918(&lStack_178,puVar11 + 5);
      if (uVar4 == 6) {
        puVar15 = param_4;
        FUN_1093b1918(param_4,auStack_c8);
        if (((((int)*puVar15 == 1) && (*puVar15 >> 0x20 == uVar18)) && ((int)puVar15[1] == iVar17))
           && ((puVar15[1] & 0xffffffff00000000) == 0x100000000)) {
          FUN_1093e3918(&ppuStack_390);
          ppuVar20 = ppuStack_390;
          puVar15 = param_4;
          FUN_1093b1918(param_4,auStack_e0);
          if ((((int)*puVar15 == 1) && (*puVar15 >> 0x20 == uVar18)) &&
             (((int)puVar15[1] == iVar17 && ((puVar15[1] & 0xffffffff00000000) == 0x200000000)))) {
            FUN_1093e3918(&ppuStack_390);
            ppuVar21 = ppuStack_390;
            goto LAB_1093b8d84;
          }
          FUN_10937e740(&ppuStack_390,&UNK_10f569cf8);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x68f,&ppuStack_390);
          ppuVar21 = ppuStack_390;
          if ((long)uStack_380 < 0) goto LAB_1093b963c;
          goto LAB_1093b9640;
        }
        FUN_10937e740(&ppuStack_390,&UNK_10f5696b7);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x686,&ppuStack_390);
        ppuVar20 = ppuStack_390;
        if ((long)uStack_380 < 0) goto LAB_1093b9648;
      }
      else {
        ppuVar21 = (undefined **)0x0;
        ppuVar20 = (undefined **)0x0;
LAB_1093b8d84:
        if (*(int *)(ppuVar6 + 4) < 1) {
          ppuVar23 = (undefined **)0x0;
LAB_1093b8e74:
          ppuVar25 = &PTR_PTR_1132d8bd0;
          if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
            ppuVar25 = *(undefined ***)(param_3 + 0x18);
          }
          uVar30 = *(undefined4 *)(ppuVar25 + 3);
          if (iVar8 == 1) {
            FUN_1093b1918(param_4,&uStack_148);
            if (((((int)*param_4 == 1) && (*param_4 >> 0x20 == uVar18)) &&
                ((int)param_4[1] == iVar17)) && ((param_4[1] & 0xffffffff00000000) == 0x100000000))
            {
              FUN_1093e3918(&ppuStack_390);
              ppuVar25 = ppuStack_390;
              goto LAB_1093b8ef8;
            }
            FUN_10937e740(&ppuStack_390,&UNK_10f569b9a);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x6ab,&ppuStack_390);
            if ((long)uStack_380 < 0) {
              __ZdlPv(ppuStack_390);
            }
          }
          else {
            ppuVar25 = (undefined **)0x0;
LAB_1093b8ef8:
            lStack_188 = 0;
            lStack_190 = 0;
            uStack_180 = 0;
            if (*(int *)(param_1 + 0x18) == 0) {
              puStack_b0 = (undefined *)0x0;
              puStack_a8 = (undefined *)0x0;
              uStack_a0 = 0;
            }
            else {
              bVar19 = false;
              piVar22 = *(int **)(param_1 + 0x20);
              piVar2 = piVar22 + *(int *)(param_1 + 0x18);
              do {
                while( true ) {
                  ppuStack_390 = (undefined **)CONCAT44(ppuStack_390._4_4_,*piVar22);
                  if (*piVar22 == -1) break;
                  FUN_10923b3a0(&lStack_190,&ppuStack_390);
                  piVar22 = piVar22 + 1;
                  if (piVar22 == piVar2) {
                    puStack_b0 = (undefined *)0x0;
                    puStack_a8 = (undefined *)0x0;
                    uStack_a0 = 0;
                    if (!bVar19) goto LAB_1093b9020;
                    goto LAB_1093b8f70;
                  }
                }
                piVar22 = piVar22 + 1;
                bVar19 = true;
              } while (piVar22 != piVar2);
LAB_1093b8f70:
              uStack_a0 = 0;
              puStack_a8 = (undefined *)0x0;
              puStack_b0 = (undefined *)0x0;
              uStack_1c0 = (undefined **)((ulong)uStack_1c0 & 0xffffffff00000000);
              ppuStack_388 = (undefined **)0x0;
              uStack_380 = 0;
              ppuStack_390 = (undefined **)0x0;
              FUN_1092d1c20(&ppuStack_390,&uStack_1c0,(long)&uStack_1c0 + 4,1);
              FUN_1093e3dcc(*(undefined4 *)((long)ppuVar5 + 0x1c),ppuVar20,ppuVar21,uVar13,uVar18,1,
                            0xffffffff,*(undefined4 *)((long)ppuVar5 + 0x24),&ppuStack_390,
                            &puStack_b0);
              if (ppuStack_390 != (undefined **)0x0) {
                ppuStack_388 = ppuStack_390;
                __ZdlPv();
              }
            }
LAB_1093b9020:
            if (lStack_190 != lStack_188) {
              FUN_1093e3dcc(*(undefined4 *)((long)ppuVar5 + 0x1c),appuStack_160[0],lStack_178,uVar13
                            ,uVar18,*(undefined4 *)(ppuVar6 + 7),0,*(undefined4 *)(ppuVar6 + 10),
                            &lStack_190,&puStack_b0);
            }
            uStack_1b8 = 0;
            uStack_1c0 = &PTR_FUN_110aefb40;
            uStack_1a0 = 0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            iStack_198 = 0;
            uStack_1e8 = 0;
            ppuStack_1f0 = &PTR_FUN_110aefb90;
            uStack_1d0 = 0;
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            uStack_1c8 = 0;
            uStack_218 = 0;
            ppuStack_220 = &PTR_FUN_110aefb90;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_210 = 0;
            uStack_208 = 0;
            if (puStack_b0 != puStack_a8) {
              iVar8 = *(int *)(param_5 + 0x20);
              iVar17 = *(int *)(ppuVar5 + 3);
              ppuVar6 = &PTR_PTR_1132d8120;
              if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
                ppuVar6 = *(undefined ***)(param_1 + 0x50);
              }
              fVar31 = *(float *)(ppuVar5 + 4) * *(float *)(ppuVar5 + 4);
              plVar1 = (long *)(param_5 + 0x18);
              ppuVar6 = ppuVar6 + 2;
              do {
                if (iVar17 + iVar8 <= *(int *)(param_5 + 0x20)) break;
                FUN_109341640(&uStack_1c0);
                fVar29 = -uStack_1a0._4_4_;
                _expf();
                uStack_1a0 = CONCAT44(1.0 / (fVar29 + 1.0),(undefined4)uStack_1a0);
                uStack_1b0 = uStack_1b0 | 8;
                FUN_1093b4f34(&puStack_b0);
                plVar24 = plVar1;
                if ((*(ulong *)(param_5 + 0x18) & 1) != 0) {
                  plVar24 = (long *)(*(ulong *)(param_5 + 0x18) + 7);
                }
                if (*(int *)(param_5 + 0x20) != 0) {
                  plVar3 = plVar24 + *(int *)(param_5 + 0x20);
                  lVar14 = (long)iStack_198;
                  do {
                    ppuVar7 = ppuVar6;
                    if (((ulong)*ppuVar6 & 1) != 0) {
                      ppuVar7 = (undefined **)(*ppuVar6 + (lVar14 + 1) * 8 + 7);
                    }
                    puVar15 = (ulong *)(*ppuVar7 + 0x10);
                    uVar16 = *puVar15;
                    if ((uVar16 & 1) != 0) {
                      puVar15 = (ulong *)(uVar16 + 7);
                    }
                    iVar9 = *(int *)(*ppuVar7 + 0x18);
                    if (iVar9 != 0) {
                      lVar27 = *plVar24;
                      lVar26 = (long)iVar9 << 3;
                      do {
                        uVar4 = *(uint *)(*puVar15 + 0x18);
                        if (uVar4 == 0xffffffff) {
                          puVar11 = (ulong *)(lVar27 + 0xb8);
                          if ((*(byte *)(lVar27 + 0x10) >> 1 & 1) != 0) goto LAB_1093b9234;
                        }
                        else if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar27 + 0x20))) {
                          uVar16 = *(ulong *)(lVar27 + 0x18);
                          puVar11 = (ulong *)(lVar27 + 0x18);
                          if ((uVar16 & 1) != 0) {
                            puVar11 = (ulong *)(uVar16 + (ulong)uVar4 * 8 + 7);
                          }
LAB_1093b9234:
                          pppuVar28 = (undefined ***)*puVar11;
                          if (pppuVar28 != &ppuStack_1f0) {
                            func_0x000109340dd8(&ppuStack_1f0);
                            func_0x000109340c8c(&ppuStack_1f0,pppuVar28);
                          }
                          if (((((uint)uStack_1b0 ^ 0xffffffff) & 3) == 0) &&
                             ((((uint)uStack_1e0 ^ 0xffffffff) & 3) == 0)) {
                            fVar29 = (uStack_1d8._4_4_ - uStack_1a8._4_4_) *
                                     (uStack_1d8._4_4_ - uStack_1a8._4_4_) +
                                     ((float)uStack_1d8 - (float)uStack_1a8) *
                                     ((float)uStack_1d8 - (float)uStack_1a8);
                          }
                          else {
                            fVar29 = 3.4028235e+38;
                          }
                          if (fVar29 <= fVar31) goto LAB_1093b955c;
                        }
                        puVar15 = puVar15 + 1;
                        lVar26 = lVar26 + -8;
                      } while (lVar26 != 0);
                    }
                    plVar24 = plVar24 + 1;
                  } while (plVar24 != plVar3);
                }
                ppuStack_390 = &PTR_FUN_110aeb798;
                ppuStack_388 = (undefined **)0x0;
                uStack_378 = 0;
                uStack_368 = 0;
                uStack_370 = 0;
                uStack_358 = 0;
                uStack_360 = 0;
                uStack_348 = 0;
                uStack_350 = 0;
                uStack_338 = 0;
                uStack_340 = 0;
                uStack_328 = 0;
                uStack_330 = 0;
                uStack_318 = 0;
                uStack_320 = 0;
                uStack_308 = 0;
                uStack_310 = 0;
                uStack_300 = 0;
                uStack_2fc = 1;
                uStack_2f4 = 1;
                puStack_2f0 = &DAT_10e5b4a18;
                uStack_2e8 = 0;
                puStack_2e0 = &DAT_11383d918;
                uStack_234 = 0x200000002;
                uStack_23c = 0x100000001;
                uStack_22c = 0x2ffffffff;
                uStack_244 = 0;
                uStack_248 = 0;
                uStack_25c = 0;
                auStack_2d8[0xe] = 0;
                uStack_250 = 0;
                uStack_24c = 0;
                uStack_254 = 0;
                auStack_2d8[0xb] = 0;
                auStack_2d8[10] = 0;
                auStack_2d8[0xd] = 0;
                auStack_2d8[0xc] = 0;
                auStack_2d8[7] = 0;
                auStack_2d8[6] = 0;
                auStack_2d8[9] = 0;
                auStack_2d8[8] = 0;
                auStack_2d8[3] = 0;
                auStack_2d8[2] = 0;
                auStack_2d8[5] = 0;
                auStack_2d8[4] = 0;
                auStack_2d8[1] = 0;
                auStack_2d8[0] = 0;
                uStack_380._0_4_ = 1;
                uStack_380._4_4_ = 0;
                func_0x00010b4bf088(&puStack_2e0,&DAT_10f5262f1,6,0);
                uStack_22c = CONCAT44(uStack_22c._4_4_,iStack_198);
                uStack_25c = uStack_1a0._4_4_;
                uStack_254 = 1;
                uStack_380 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380) | 0x200a0000;
                FUN_1093e4800(uVar30,&uStack_1c0,ppuVar20,ppuVar21,appuStack_160[0],lStack_178,
                              ppuVar23,ppuVar25,uVar13,iVar12);
                plVar24 = plVar1;
                if ((*(ulong *)(param_5 + 0x18) & 1) != 0) {
                  plVar24 = (long *)(*(ulong *)(param_5 + 0x18) + 7);
                }
                if (*(int *)(param_5 + 0x20) != 0) {
                  plVar3 = plVar24 + *(int *)(param_5 + 0x20);
                  do {
                    lVar14 = *plVar24;
                    iVar9 = *(int *)(lVar14 + 0x164);
                    FUN_1093b552c(lVar14,iVar9,&ppuStack_1f0);
                    ppuVar7 = ppuVar6;
                    if (((ulong)*ppuVar6 & 1) != 0) {
                      ppuVar7 = (undefined **)(*ppuVar6 + (long)iVar9 * 8 + 0xf);
                    }
                    puVar15 = (ulong *)(*ppuVar7 + 0x10);
                    uVar16 = *puVar15;
                    if ((uVar16 & 1) != 0) {
                      puVar15 = (ulong *)(uVar16 + 7);
                    }
                    iVar9 = *(int *)(*ppuVar7 + 0x18);
                    if (iVar9 != 0) {
                      lVar26 = (long)iVar9 << 3;
                      do {
                        uVar4 = *(uint *)(*puVar15 + 0x18);
                        if (uVar4 == 0xffffffff) {
                          puVar11 = auStack_2d8;
                          if (((byte)uStack_380 >> 1 & 1) != 0) goto LAB_1093b9488;
                        }
                        else if ((-1 < (int)uVar4) && ((int)uVar4 < (int)uStack_370)) {
                          puVar11 = &uStack_378;
                          if ((uStack_378 & 1) != 0) {
                            puVar11 = (ulong *)(uStack_378 + (ulong)uVar4 * 8 + 7);
                          }
LAB_1093b9488:
                          pppuVar28 = (undefined ***)*puVar11;
                          if (pppuVar28 != &ppuStack_220) {
                            func_0x000109340dd8(&ppuStack_220);
                            func_0x000109340c8c(&ppuStack_220,pppuVar28);
                          }
                          if (((((uint)uStack_210 ^ 0xffffffff) & 3) == 0) &&
                             ((((uint)uStack_1e0 ^ 0xffffffff) & 3) == 0)) {
                            fVar29 = (uStack_1d8._4_4_ - uStack_208._4_4_) *
                                     (uStack_1d8._4_4_ - uStack_208._4_4_) +
                                     ((float)uStack_1d8 - (float)uStack_208) *
                                     ((float)uStack_1d8 - (float)uStack_208);
                          }
                          else {
                            fVar29 = 3.4028235e+38;
                          }
                          if (fVar29 <= fVar31) {
                            fVar29 = *(float *)(ppuVar5 + 4);
                            FUN_1093b9958(lVar14,&ppuStack_390);
                            if (fVar29 < 0.0) {
                              FUN_10930e47c(lVar14,&ppuStack_390);
                            }
                            goto LAB_1093b9554;
                          }
                        }
                        puVar15 = puVar15 + 1;
                        lVar26 = lVar26 + -8;
                      } while (lVar26 != 0);
                    }
                    plVar24 = plVar24 + 1;
                  } while (plVar24 != plVar3);
                }
                func_0x000107c303b0(plVar1,0x109312438);
                FUN_10930e47c();
LAB_1093b9554:
                FUN_10930c5bc(&ppuStack_390);
LAB_1093b955c:
              } while (puStack_b0 != puStack_a8);
              if ((uStack_218 & 1) != 0) {
                func_0x0001053936ac(&uStack_218);
              }
            }
            if ((uStack_1e8 & 1) != 0) {
              func_0x0001053936ac(&uStack_1e8);
            }
            if ((uStack_1b8 & 1) != 0) {
              func_0x0001053936ac(&uStack_1b8);
            }
            ppuStack_390 = &puStack_b0;
            FUN_1093c3b4c(&ppuStack_390);
            if (lStack_190 != 0) {
              lStack_188 = lStack_190;
              __ZdlPv();
            }
            if (ppuVar25 != (undefined **)0x0) {
              __ZdlPv(ppuVar25);
            }
          }
          if (ppuVar23 != (undefined **)0x0) {
LAB_1093b9630:
            __ZdlPv(ppuVar23);
          }
        }
        else {
          puVar15 = param_4;
          FUN_1093b1918(param_4,&ppuStack_130);
          if ((((int)*puVar15 == 1) && (*puVar15 >> 0x20 == uVar18)) &&
             (((int)puVar15[1] == iVar17 &&
              (*(int *)(ppuVar6 + 4) * *(int *)((long)ppuVar6 + 0x54) == (int)(puVar15[1] >> 0x20)))
             )) {
            FUN_1093e3918(&ppuStack_390);
            ppuVar23 = ppuStack_390;
            goto LAB_1093b8e74;
          }
          FUN_10937e740(&ppuStack_390,&UNK_10f569b6d);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x69d,&ppuStack_390);
          ppuVar23 = ppuStack_390;
          if ((long)uStack_380 < 0) goto LAB_1093b9630;
        }
        if (ppuVar21 != (undefined **)0x0) {
LAB_1093b963c:
          __ZdlPv(ppuVar21);
        }
LAB_1093b9640:
        if (ppuVar20 != (undefined **)0x0) {
LAB_1093b9648:
          __ZdlPv(ppuVar20);
        }
      }
      if (lStack_178 != 0) {
        lStack_170 = lStack_178;
        __ZdlPv();
      }
      if (appuStack_160[0] != (undefined **)0x0) goto LAB_1093b8ab0;
      goto LAB_1093b8ab4;
    }
  }
  else {
    FUN_10937e740(&ppuStack_390,&UNK_10f569c28);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569c0d,0x63e,&ppuStack_390);
LAB_1093b8838:
    if ((long)uStack_380 < 0) {
      __ZdlPv(ppuStack_390);
    }
LAB_1093b8b14:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b968c:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1093b9690);
  (*pcVar10)();
}



/* Entry: 1093b9958; end: 1093b9ba7;  */

float FUN_1093b9958(float param_1,long param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  ppuStack_a0 = &PTR_FUN_110aefb90;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  ppuStack_d0 = &PTR_FUN_110aefb90;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  if ((int)uVar1 < 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 0.0;
    uVar7 = 0xffffffff;
    do {
      if (uVar7 == 0xffffffff) {
        puVar4 = (ulong *)(param_2 + 0xb8);
        if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) goto LAB_1093b9a10;
        bVar2 = false;
LAB_1093b9a40:
        puVar4 = (ulong *)(param_3 + 0xb8);
        if ((*(byte *)(param_3 + 0x10) >> 1 & 1) == 0) goto LAB_1093b9ad8;
LAB_1093b9a78:
        puVar6 = (undefined1 *)*puVar4;
        if ((undefined ***)puVar6 != &ppuStack_d0) {
          func_0x000109340dd8(&ppuStack_d0);
          func_0x000109340c8c(&ppuStack_d0,puVar6);
        }
        if (bVar2) {
          if (((((uint)uStack_90 ^ 0xffffffff) & 3) == 0) &&
             ((((uint)uStack_c0 ^ 0xffffffff) & 3) == 0)) {
            fVar8 = (uStack_b8._4_4_ - uStack_88._4_4_) * (uStack_b8._4_4_ - uStack_88._4_4_) +
                    ((float)uStack_b8 - (float)uStack_88) * ((float)uStack_b8 - (float)uStack_88);
          }
          else {
            fVar8 = 3.4028235e+38;
          }
          if (fVar8 <= param_1 * param_1) goto LAB_1093b9b10;
        }
        fVar8 = fVar9 + uStack_80._4_4_;
        if (!bVar2) {
          fVar8 = fVar9;
        }
        fVar9 = fVar8 - uStack_b0._4_4_;
      }
      else {
        if ((int)uVar7 < *(int *)(param_2 + 0x20)) {
          uVar3 = *(ulong *)(param_2 + 0x18);
          puVar4 = (ulong *)(param_2 + 0x18);
          if ((uVar3 & 1) != 0) {
            puVar4 = (ulong *)(uVar3 + (ulong)uVar7 * 8 + 7);
          }
LAB_1093b9a10:
          pppuVar5 = (undefined ***)*puVar4;
          if (pppuVar5 != &ppuStack_a0) {
            func_0x000109340dd8(&ppuStack_a0);
            func_0x000109340c8c(&ppuStack_a0,pppuVar5);
          }
          bVar2 = true;
          if (uVar7 == 0xffffffff) goto LAB_1093b9a40;
        }
        else {
          bVar2 = false;
        }
        if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_3 + 0x20))) {
          uVar3 = *(ulong *)(param_3 + 0x18);
          puVar4 = (ulong *)(param_3 + 0x18);
          if ((uVar3 & 1) != 0) {
            puVar4 = (ulong *)(uVar3 + (ulong)uVar7 * 8 + 7);
          }
          goto LAB_1093b9a78;
        }
LAB_1093b9ad8:
        if (bVar2) {
          fVar9 = fVar9 + uStack_80._4_4_;
        }
      }
LAB_1093b9b10:
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
    if ((uStack_c8 & 1) != 0) {
      func_0x0001053936ac(&uStack_c8);
    }
  }
  if ((uStack_98 & 1) != 0) {
    func_0x0001053936ac(&uStack_98);
  }
  return fVar9;
}



/* Entry: 1093b9ba8; end: 1093b9ec3;  */

void FUN_1093b9ba8(long param_1,long param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  char cStack_71;
  undefined8 uStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x58);
  }
  FUN_1093e96e8(&uStack_58,param_3,ppuVar1);
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x60);
  }
  FUN_1093e96e8(&uStack_70,param_3,ppuVar1);
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
  }
  if (uStack_50 == 0) {
LAB_1093b9d30:
    FUN_10937e740(&lStack_88,&UNK_10f569d2b);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d1c,0x72f,&lStack_88);
LAB_1093b9d94:
    if (-1 < cStack_71) goto LAB_1093b9da4;
  }
  else {
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
    }
    if (uStack_68 == 0) goto LAB_1093b9d30;
    lVar5 = param_3;
    FUN_1093c7e44(param_3,&uStack_58);
    if (lVar5 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
LAB_1093b9e2c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1093b9e30);
      (*pcVar2)();
    }
    FUN_1093c7e44(param_3,&uStack_70);
    if (param_3 == 0) {
      FUN_109262df8(&UNK_10f56ae8d);
      goto LAB_1093b9e2c;
    }
    uVar3 = *(ulong *)(lVar5 + 0x28);
    if (((int)uVar3 != 1) ||
       (uVar6 = *(undefined8 *)(lVar5 + 0x30),
       *(int *)(param_1 + 0x18) * 3 != (int)((ulong)uVar6 >> 0x20))) {
      FUN_10937e740(&lStack_88,&UNK_10f569d58);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d1c,0x738,&lStack_88);
      goto LAB_1093b9d94;
    }
    if ((*(int *)(param_1 + 0x1c) * ((int)uVar6 + -1) + 1 != *(int *)(param_4 + 0xa8)) ||
       (*(int *)(param_1 + 0x1c) * ((int)(uVar3 >> 0x20) + -1) + 1 != *(int *)(param_4 + 0xac))) {
      FUN_10937e740(&lStack_88,&UNK_10f569d76);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d1c,0x73e,&lStack_88);
      goto LAB_1093b9d94;
    }
    FUN_1093e3918(&lStack_88,lVar5 + 0x28);
    FUN_1093e3918(&lStack_a0,param_3 + 0x28);
    uVar4 = *(ulong *)(param_4 + 0x18);
    puVar7 = (ulong *)(param_4 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)(uVar4 + 7);
    }
    if (*(int *)(param_4 + 0x20) != 0) {
      lVar5 = (long)*(int *)(param_4 + 0x20) << 3;
      do {
        FUN_1093e56f8(lStack_88,lStack_a0,uVar6,uVar3 >> 0x20,param_1,*puVar7);
        lVar5 = lVar5 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar5 != 0);
    }
    if (lStack_a0 != 0) {
      lStack_98 = lStack_a0;
      __ZdlPv();
    }
    if (lStack_88 == 0) goto LAB_1093b9da4;
    lStack_80 = lStack_88;
  }
  __ZdlPv(lStack_88);
LAB_1093b9da4:
  if ((char)bStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 1093b9ec4; end: 1093ba257;  */

void FUN_1093b9ec4(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 4 || iVar2 == 2) {
    if (*(int *)(param_1 + 0x34) != 3) {
      FUN_10937e740(&uStack_68,&UNK_10f569dec);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x75a,&uStack_68);
      goto LAB_1093ba144;
    }
  }
  else {
    if (iVar2 != 1) {
      FUN_10937e740(&uStack_68,&UNK_10f569e27);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x75f,&uStack_68);
      goto LAB_1093ba144;
    }
    if (*(int *)(param_1 + 0x34) != 2) {
      FUN_10937e740(&uStack_68,&UNK_10f569db1);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x754,&uStack_68);
      goto LAB_1093ba144;
    }
  }
  if ((iVar2 == 4) || ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    ppuVar1 = &PTR_PTR_1132d15f8;
    if (*(undefined ***)(param_2 + 0xb8) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0xb8);
    }
    FUN_1093e96e8(&uStack_68,param_4,ppuVar1);
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 == 0) {
      FUN_10937e740(auStack_80,&UNK_10f569ec8);
      FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x76c,auStack_80);
    }
    else {
      FUN_1093c7e44(param_4,&uStack_68);
      if (param_4 == 0) {
        FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1093ba1f8);
        (*pcVar3)();
      }
      uVar4 = *(ulong *)(param_4 + 0x28);
      if (((int)uVar4 == 1) &&
         (uVar6 = *(undefined8 *)(param_4 + 0x30),
         *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) == (int)((ulong)uVar6 >> 0x20))) {
        if (*(int *)(param_1 + 0x40) * ((int)uVar6 + -1) + 1 == *(int *)(param_5 + 0xa8) &&
            *(int *)(param_1 + 0x40) * ((int)(uVar4 >> 0x20) + -1) + 1 == *(int *)(param_5 + 0xac))
        {
          if (*(char *)(param_1 + 0x38) == '\x01') {
            FUN_1093ba258(param_3,param_5);
          }
          uVar5 = *(ulong *)(param_5 + 0x18);
          puVar7 = (ulong *)(param_5 + 0x18);
          if ((uVar5 & 1) != 0) {
            puVar7 = (ulong *)(uVar5 + 7);
          }
          if (*(int *)(param_5 + 0x20) != 0) {
            lVar8 = (long)*(int *)(param_5 + 0x20) << 3;
            do {
              FUN_1093e5a34((ulong *)(param_4 + 0x28),uVar6,uVar4 >> 0x20,param_3,param_1,*puVar7);
              lVar8 = lVar8 + -8;
              puVar7 = puVar7 + 1;
            } while (lVar8 != 0);
          }
          if (*(char *)(param_1 + 0x38) == '\x01') {
            FUN_1093ba344(param_3,param_5);
          }
          goto LAB_1093ba144;
        }
        FUN_10937e740(auStack_80,&UNK_10f569f2e);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x77a,auStack_80);
      }
      else {
        FUN_10937e740(auStack_80,&UNK_10f569f04);
        FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x774,auStack_80);
      }
    }
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
  }
  else {
    FUN_10937e740(&uStack_68,&UNK_10f569e64);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569d97,0x766,&uStack_68);
  }
LAB_1093ba144:
  if ((char)bStack_51 < '\0') {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 1093ba258; end: 1093ba343;  */

/* WARNING: Possible PIC construction at 0x0001093ba2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001093c0890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093ba2a8) */
/* WARNING: Removing unreachable block (ram,0x0001093c0894) */

void FUN_1093ba258(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar11;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar5 = param_1;
  FUN_1093c02dc();
  if ((uVar5 & 1) == 0) {
    FUN_10937e740(auStack_48,&UNK_10f56ab91);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56ab78,0xaae,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    return;
  }
  uVar5 = *(ulong *)(param_2 + 0x18);
  puVar8 = (ulong *)(param_2 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)(uVar5 + 7);
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)(param_2 + 0x78);
    puVar3 = (undefined1 *)register0x00000008;
  }
  else {
    unaff_x22 = (long)*(int *)(param_2 + 0x20) << 3;
    unaff_x21 = puVar8 + 1;
    uVar5 = *puVar8;
    unaff_x30 = 0x1093ba2a8;
    puVar3 = auStack_50;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = &stack0xfffffffffffffff0;
  }
  while( true ) {
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(ulong **)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    uVar4 = *(uint *)(uVar5 + 0x10);
    if (((uVar4 >> 1 & 1) != 0) && (*(int *)(uVar5 + 0x154) == 3)) {
      lVar6 = *(long *)(uVar5 + 0xb8);
      fVar11 = *(float *)(lVar6 + 0x20);
      if (0.0 < fVar11) {
        ppuVar1 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(param_1 + 0x18);
        }
        ppuVar2 = &PTR_PTR_1132d8bd0;
        if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(param_1 + 0x20);
        }
        *(ulong *)(lVar6 + 0x18) =
             CONCAT44((fVar11 / (float)((ulong)ppuVar1[3] >> 0x20)) *
                      ((float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) -
                      (float)((ulong)ppuVar2[3] >> 0x20)),
                      (fVar11 / SUB84(ppuVar1[3],0)) *
                      ((float)*(undefined8 *)(lVar6 + 0x18) - SUB84(ppuVar2[3],0)));
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 3;
        uVar4 = *(uint *)(uVar5 + 0x10);
      }
      *(undefined4 *)(uVar5 + 0x154) = 4;
      uVar4 = uVar4 | 0x2000000;
      *(uint *)(uVar5 + 0x10) = uVar4;
    }
    if (*(int *)(uVar5 + 0x158) == 3) {
      uVar7 = *(ulong *)(uVar5 + 0x18);
      puVar8 = (ulong *)(uVar5 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar8 = (ulong *)(uVar7 + 7);
      }
      if (*(int *)(uVar5 + 0x20) != 0) {
        lVar6 = (long)*(int *)(uVar5 + 0x20) << 3;
        do {
          uVar7 = *puVar8;
          fVar11 = *(float *)(uVar7 + 0x20);
          if (0.0 < fVar11) {
            ppuVar1 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_1 + 0x18);
            }
            ppuVar2 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(param_1 + 0x20);
            }
            *(ulong *)(uVar7 + 0x18) =
                 CONCAT44((fVar11 / (float)((ulong)ppuVar1[3] >> 0x20)) *
                          ((float)((ulong)*(undefined8 *)(uVar7 + 0x18) >> 0x20) -
                          (float)((ulong)ppuVar2[3] >> 0x20)),
                          (fVar11 / SUB84(ppuVar1[3],0)) *
                          ((float)*(undefined8 *)(uVar7 + 0x18) - SUB84(ppuVar2[3],0)));
            *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 3;
          }
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        uVar4 = *(uint *)(uVar5 + 0x10);
      }
      *(undefined4 *)(uVar5 + 0x158) = 4;
      uVar4 = uVar4 | 0x4000000;
      *(uint *)(uVar5 + 0x10) = uVar4;
    }
    if (*(int *)(uVar5 + 0x15c) == 3) {
      uVar7 = *(ulong *)(uVar5 + 0x30);
      puVar8 = (ulong *)(uVar5 + 0x30);
      if ((uVar7 & 1) != 0) {
        puVar8 = (ulong *)(uVar7 + 7);
      }
      if (*(int *)(uVar5 + 0x38) != 0) {
        lVar6 = (long)*(int *)(uVar5 + 0x38) << 3;
        do {
          uVar7 = *puVar8;
          fVar11 = *(float *)(uVar7 + 0x20);
          if (0.0 < fVar11) {
            ppuVar1 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_1 + 0x18);
            }
            ppuVar2 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(param_1 + 0x20);
            }
            *(ulong *)(uVar7 + 0x18) =
                 CONCAT44((fVar11 / (float)((ulong)ppuVar1[3] >> 0x20)) *
                          ((float)((ulong)*(undefined8 *)(uVar7 + 0x18) >> 0x20) -
                          (float)((ulong)ppuVar2[3] >> 0x20)),
                          (fVar11 / SUB84(ppuVar1[3],0)) *
                          ((float)*(undefined8 *)(uVar7 + 0x18) - SUB84(ppuVar2[3],0)));
            *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 3;
          }
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        uVar4 = *(uint *)(uVar5 + 0x10);
      }
      *(undefined4 *)(uVar5 + 0x15c) = 4;
      uVar4 = uVar4 | 0x8000000;
      *(uint *)(uVar5 + 0x10) = uVar4;
    }
    if (*(int *)(uVar5 + 0x168) == 3) {
      *(uint *)(uVar5 + 0x10) = uVar4 | 0x4000;
      uVar7 = *(ulong *)(uVar5 + 0x120);
      if (uVar7 == 0) {
        uVar7 = *(ulong *)(uVar5 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000109312090();
        *(ulong *)(uVar5 + 0x120) = uVar7;
      }
      uVar4 = *(uint *)(uVar7 + 0x10);
      if (0 < (int)uVar4) {
        uVar9 = 0;
        puVar10 = *(undefined8 **)(uVar7 + 0x18);
        do {
          fVar11 = *(float *)(puVar10 + 1);
          if (0.0 < fVar11) {
            ppuVar1 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_1 + 0x18);
            }
            ppuVar2 = &PTR_PTR_1132d8bd0;
            if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(param_1 + 0x20);
            }
            *puVar10 = CONCAT44((fVar11 / (float)((ulong)ppuVar1[3] >> 0x20)) *
                                ((float)((ulong)*puVar10 >> 0x20) -
                                (float)((ulong)ppuVar2[3] >> 0x20)),
                                (fVar11 / SUB84(ppuVar1[3],0)) *
                                ((float)*puVar10 - SUB84(ppuVar2[3],0)));
          }
          uVar9 = uVar9 + 8;
          puVar10 = puVar10 + 4;
        } while (uVar9 < uVar4);
      }
      *(undefined4 *)(uVar5 + 0x168) = 4;
      *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 0x40000000;
    }
    uVar7 = *(ulong *)(uVar5 + 0x48);
    puVar8 = (ulong *)(uVar5 + 0x48);
    if ((uVar7 & 1) != 0) {
      puVar8 = (ulong *)(uVar7 + 7);
    }
    if (*(int *)(uVar5 + 0x50) == 0) break;
    unaff_x20 = (long)*(int *)(uVar5 + 0x50) << 3;
    unaff_x21 = puVar8 + 1;
    uVar5 = *puVar8;
    unaff_x30 = 0x1093c0894;
    puVar3 = puVar3 + -0x30;
    unaff_x19 = param_1;
  }
  return;
}



/* Entry: 1093ba344; end: 1093ba42f;  */

void FUN_1093ba344(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  float fVar8;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar4 = param_1;
  FUN_1093c02dc();
  if ((uVar4 & 1) == 0) {
    FUN_10937e740(auStack_48,&UNK_10f56ab40);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56ab28,0xaa1,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x18);
    puVar6 = (ulong *)(param_2 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar6 = (ulong *)(uVar4 + 7);
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar7 = (long)*(int *)(param_2 + 0x20) << 3;
      do {
        FUN_1093c03c4(param_1,*puVar6);
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
    if ((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0) {
      lVar7 = *(long *)(param_2 + 0x78);
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (((uVar3 >> 1 & 1) != 0) && (*(int *)(lVar7 + 0x154) == 4)) {
        lVar5 = *(long *)(lVar7 + 0xb8);
        fVar8 = *(float *)(lVar5 + 0x20);
        if (0.0 < fVar8) {
          ppuVar1 = &PTR_PTR_1132d8bd0;
          if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(param_1 + 0x18);
          }
          ppuVar2 = &PTR_PTR_1132d8bd0;
          if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
            ppuVar2 = *(undefined ***)(param_1 + 0x20);
          }
          *(ulong *)(lVar5 + 0x18) =
               CONCAT44(((float)((ulong)ppuVar1[3] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20)) / fVar8 +
                        (float)((ulong)ppuVar2[3] >> 0x20),
                        (SUB84(ppuVar1[3],0) * (float)*(undefined8 *)(lVar5 + 0x18)) / fVar8 +
                        SUB84(ppuVar2[3],0));
          *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 3;
          uVar3 = *(uint *)(lVar7 + 0x10);
        }
        *(undefined4 *)(lVar7 + 0x154) = 3;
        uVar3 = uVar3 | 0x2000000;
        *(uint *)(lVar7 + 0x10) = uVar3;
      }
      if (*(int *)(lVar7 + 0x158) == 4) {
        uVar4 = *(ulong *)(lVar7 + 0x18);
        puVar6 = (ulong *)(lVar7 + 0x18);
        if ((uVar4 & 1) != 0) {
          puVar6 = (ulong *)(uVar4 + 7);
        }
        if (*(int *)(lVar7 + 0x20) != 0) {
          lVar5 = (long)*(int *)(lVar7 + 0x20) << 3;
          do {
            uVar4 = *puVar6;
            fVar8 = *(float *)(uVar4 + 0x20);
            if (0.0 < fVar8) {
              ppuVar1 = &PTR_PTR_1132d8bd0;
              if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
                ppuVar1 = *(undefined ***)(param_1 + 0x18);
              }
              ppuVar2 = &PTR_PTR_1132d8bd0;
              if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
                ppuVar2 = *(undefined ***)(param_1 + 0x20);
              }
              *(ulong *)(uVar4 + 0x18) =
                   CONCAT44(((float)((ulong)ppuVar1[3] >> 0x20) *
                            (float)((ulong)*(undefined8 *)(uVar4 + 0x18) >> 0x20)) / fVar8 +
                            (float)((ulong)ppuVar2[3] >> 0x20),
                            (SUB84(ppuVar1[3],0) * (float)*(undefined8 *)(uVar4 + 0x18)) / fVar8 +
                            SUB84(ppuVar2[3],0));
              *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 3;
            }
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
          uVar3 = *(uint *)(lVar7 + 0x10);
        }
        *(undefined4 *)(lVar7 + 0x158) = 3;
        uVar3 = uVar3 | 0x4000000;
        *(uint *)(lVar7 + 0x10) = uVar3;
      }
      if (*(int *)(lVar7 + 0x15c) == 4) {
        uVar4 = *(ulong *)(lVar7 + 0x30);
        puVar6 = (ulong *)(lVar7 + 0x30);
        if ((uVar4 & 1) != 0) {
          puVar6 = (ulong *)(uVar4 + 7);
        }
        if (*(int *)(lVar7 + 0x38) != 0) {
          lVar5 = (long)*(int *)(lVar7 + 0x38) << 3;
          do {
            uVar4 = *puVar6;
            fVar8 = *(float *)(uVar4 + 0x20);
            if (0.0 < fVar8) {
              ppuVar1 = &PTR_PTR_1132d8bd0;
              if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
                ppuVar1 = *(undefined ***)(param_1 + 0x18);
              }
              ppuVar2 = &PTR_PTR_1132d8bd0;
              if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
                ppuVar2 = *(undefined ***)(param_1 + 0x20);
              }
              *(ulong *)(uVar4 + 0x18) =
                   CONCAT44(((float)((ulong)ppuVar1[3] >> 0x20) *
                            (float)((ulong)*(undefined8 *)(uVar4 + 0x18) >> 0x20)) / fVar8 +
                            (float)((ulong)ppuVar2[3] >> 0x20),
                            (SUB84(ppuVar1[3],0) * (float)*(undefined8 *)(uVar4 + 0x18)) / fVar8 +
                            SUB84(ppuVar2[3],0));
              *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 3;
            }
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
          uVar3 = *(uint *)(lVar7 + 0x10);
        }
        *(undefined4 *)(lVar7 + 0x15c) = 3;
        *(uint *)(lVar7 + 0x10) = uVar3 | 0x8000000;
      }
      uVar4 = *(ulong *)(lVar7 + 0x48);
      puVar6 = (ulong *)(lVar7 + 0x48);
      if ((uVar4 & 1) != 0) {
        puVar6 = (ulong *)(uVar4 + 7);
      }
      if (*(int *)(lVar7 + 0x50) != 0) {
        lVar7 = (long)*(int *)(lVar7 + 0x50) << 3;
        do {
          FUN_1093c03c4(param_1,*puVar6);
          lVar7 = lVar7 + -8;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      return;
    }
  }
  return;
}



/* Entry: 1093ba430; end: 1093ba82f;  */

/* WARNING: Removing unreachable block (ram,0x0001093ba748) */

void FUN_1093ba430(long param_1,long param_2,long *param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long alStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_61;
  long lStack_60;
  long lStack_58;
  char cStack_49;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  byte bStack_31;
  
  if ((*(uint *)(param_1 + 0x34) & 0xfffffffe) != 2) {
    FUN_10937e740(auStack_48,&UNK_10f569f6e);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569f5b,0x78f,auStack_48);
    return;
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    FUN_10937e740(auStack_48,&UNK_10f569fa2);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569f5b,0x793,auStack_48);
    return;
  }
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0xb0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xb0);
  }
  FUN_1093e96e8(auStack_48,param_3,ppuVar1);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  if (uStack_40 == 0) {
    FUN_10937e740(&lStack_60,&UNK_10f569fce);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569f5b,0x799,&lStack_60);
  }
  else {
    plVar4 = param_3;
    FUN_1093c7e44(param_3,auStack_48);
    if (plVar4 == (long *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1093ba780);
      (*pcVar3)();
    }
    if (((plVar4[5] == 0x100000001) && ((plVar4[6] & 0xffffffffU) == 1)) &&
       (*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) == (int)((ulong)plVar4[6] >> 0x20))) {
      FUN_1093e3918(&lStack_60);
      if ((*(byte *)(param_2 + 0x13) >> 1 & 1) == 0) {
        lVar6 = 0;
LAB_1093ba6e4:
        lVar2 = lStack_60;
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
        uVar5 = *(ulong *)(param_4 + 0x78);
        if (uVar5 == 0) {
          uVar5 = *(ulong *)(param_4 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000109312438();
          *(ulong *)(param_4 + 0x78) = uVar5;
        }
        FUN_1093e6188(lVar2,lVar6,0,param_1,uVar5);
      }
      else {
        FUN_1093e96e8(&uStack_78,param_3,*(undefined8 *)(param_2 + 0xe0));
        if (-1 < (char)bStack_61) {
          uStack_70 = (ulong)bStack_61;
        }
        if (uStack_70 == 0) {
          FUN_10937e740(alStack_90,&UNK_10f56a026);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569f5b,0x7aa,alStack_90);
LAB_1093ba6b8:
          if (cStack_79 < '\0') {
            __ZdlPv(alStack_90[0]);
          }
          lVar6 = 0;
          bVar7 = false;
        }
        else {
          FUN_1093b1918(param_3,&uStack_78);
          if (((*param_3 != 0x100000001) || ((param_3[1] & 0xffffffffU) != 1)) ||
             (*(int *)(param_1 + 0x30) != (int)((ulong)param_3[1] >> 0x20))) {
            FUN_10937e740(alStack_90,&UNK_10f56a05f);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569f5b,0x7b1,alStack_90);
            goto LAB_1093ba6b8;
          }
          FUN_1093e3918(alStack_90);
          bVar7 = true;
          lVar6 = alStack_90[0];
        }
        if ((char)bStack_61 < '\0') {
          __ZdlPv(uStack_78);
        }
        if (bVar7) goto LAB_1093ba6e4;
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
      if (lStack_60 == 0) {
        return;
      }
      lStack_58 = lStack_60;
      goto LAB_1093ba73c;
    }
    FUN_10937e740(&lStack_60,&UNK_10f56a003);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f569f5b,0x7a0,&lStack_60);
  }
  if (-1 < cStack_49) {
    return;
  }
LAB_1093ba73c:
  __ZdlPv(lStack_60);
  return;
}



/* Entry: 1093ba830; end: 1093bac2f;  */

/* WARNING: Removing unreachable block (ram,0x0001093bab48) */

void FUN_1093ba830(long param_1,long param_2,long *param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long alStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_61;
  long lStack_60;
  long lStack_58;
  char cStack_49;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  byte bStack_31;
  
  if ((*(uint *)(param_1 + 0x34) & 0xfffffffe) != 2) {
    FUN_10937e740(auStack_48,&UNK_10f56a09a);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a086,0x7c4,auStack_48);
    return;
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    FUN_10937e740(auStack_48,&UNK_10f56a0cf);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a086,0x7c8,auStack_48);
    return;
  }
  ppuVar1 = &PTR_PTR_1132d15f8;
  if (*(undefined ***)(param_2 + 0xe8) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xe8);
  }
  FUN_1093e96e8(auStack_48,param_3,ppuVar1);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  if (uStack_40 == 0) {
    FUN_10937e740(&lStack_60,&UNK_10f56a0fc);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a086,0x7ce,&lStack_60);
  }
  else {
    plVar4 = param_3;
    FUN_1093c7e44(param_3,auStack_48);
    if (plVar4 == (long *)0x0) {
      FUN_109262df8(&UNK_10f56ae8d);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1093bab80);
      (*pcVar3)();
    }
    if (((plVar4[5] == 0x100000001) && ((plVar4[6] & 0xffffffffU) == 1)) &&
       (*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) == (int)((ulong)plVar4[6] >> 0x20))) {
      FUN_1093e3918(&lStack_60);
      if ((*(byte *)(param_2 + 0x13) >> 3 & 1) == 0) {
        lVar6 = 0;
LAB_1093baae4:
        lVar2 = lStack_60;
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
        uVar5 = *(ulong *)(param_4 + 0x78);
        if (uVar5 == 0) {
          uVar5 = *(ulong *)(param_4 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000109312438();
          *(ulong *)(param_4 + 0x78) = uVar5;
        }
        FUN_1093e6188(lVar2,lVar6,1,param_1,uVar5);
      }
      else {
        FUN_1093e96e8(&uStack_78,param_3,*(undefined8 *)(param_2 + 0xf0));
        if (-1 < (char)bStack_61) {
          uStack_70 = (ulong)bStack_61;
        }
        if (uStack_70 == 0) {
          FUN_10937e740(alStack_90,&UNK_10f56a157);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a086,0x7df,alStack_90);
LAB_1093baab8:
          if (cStack_79 < '\0') {
            __ZdlPv(alStack_90[0]);
          }
          lVar6 = 0;
          bVar7 = false;
        }
        else {
          FUN_1093b1918(param_3,&uStack_78);
          if (((*param_3 != 0x100000001) || ((param_3[1] & 0xffffffffU) != 1)) ||
             (*(int *)(param_1 + 0x30) != (int)((ulong)param_3[1] >> 0x20))) {
            FUN_10937e740(alStack_90,&UNK_10f56a192);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a086,0x7e6,alStack_90);
            goto LAB_1093baab8;
          }
          FUN_1093e3918(alStack_90);
          bVar7 = true;
          lVar6 = alStack_90[0];
        }
        if ((char)bStack_61 < '\0') {
          __ZdlPv(uStack_78);
        }
        if (bVar7) goto LAB_1093baae4;
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
      if (lStack_60 == 0) {
        return;
      }
      lStack_58 = lStack_60;
      goto LAB_1093bab3c;
    }
    FUN_10937e740(&lStack_60,&UNK_10f56a132);
    FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a086,0x7d5,&lStack_60);
  }
  if (-1 < cStack_49) {
    return;
  }
LAB_1093bab3c:
  __ZdlPv(lStack_60);
  return;
}



/* Entry: 1093bac30; end: 1093bb12f;  */

void FUN_1093bac30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  ulong *puVar1;
  undefined **ppuVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long alStack_a8 [2];
  char cStack_91;
  long lStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  puVar14 = (ulong *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    puVar14 = (ulong *)(uVar6 + 7);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar6 = 0;
    uVar11 = 0;
    puVar1 = puVar14 + *(int *)(param_1 + 0x18);
    do {
      uVar12 = *puVar14;
      if (*(char *)(uVar12 + 0x6c) == '\x01') {
        ppuVar2 = &PTR_PTR_1132d15f8;
        if (*(undefined ***)(uVar12 + 0x58) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar12 + 0x58);
        }
        FUN_1093e96e8(&uStack_78,param_4,ppuVar2);
        uVar8 = uStack_70;
        if (-1 < (char)bStack_61) {
          uVar8 = (ulong)bStack_61;
        }
        if (uVar8 == 0) {
          FUN_10937e740(&lStack_90,&UNK_10f56a1c9);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a1bb,0x804,&lStack_90);
          goto LAB_1093bade0;
        }
        lVar13 = param_4;
        FUN_1093c7e44(param_4,&uStack_78);
        if (lVar13 == 0) {
          FUN_109262df8(&UNK_10f56ae8d);
LAB_1093bb058:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1093bb05c);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(lVar13 + 0x28);
        if (((int)uVar7 == 1) &&
           (uVar8 = *(ulong *)(lVar13 + 0x30), (uVar8 & 0xffffffff00000000) == 0x400000000)) {
          uVar6 = uVar7 >> 0x20;
          if (*(int *)(uVar12 + 0x7c) * ((int)uVar8 + -1) + 1 != *(int *)(param_5 + 0xa8) ||
              *(int *)(uVar12 + 0x7c) * ((int)(uVar7 >> 0x20) + -1) + 1 != *(int *)(param_5 + 0xac))
          {
            FUN_10937e740(&lStack_90,&UNK_10f56a217);
            FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a1bb,0x814,&lStack_90);
            uVar11 = uVar8;
            goto LAB_1093bade0;
          }
          FUN_1093e3918(&lStack_90);
          lVar15 = lStack_90;
          if ((*(byte *)(uVar12 + 0x10) >> 1 & 1) == 0) {
            lVar13 = 0;
            bVar3 = true;
          }
          else {
            FUN_1093e96e8(&lStack_90,param_4,*(undefined8 *)(uVar12 + 0x50));
            uVar11 = uStack_88;
            if (-1 < (char)bStack_79) {
              uVar11 = (ulong)bStack_79;
            }
            if (uVar11 == 0) {
              FUN_10937e740(alStack_a8,&UNK_10f56a238);
              FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a1bb,0x81d,alStack_a8);
LAB_1093baff0:
              if (cStack_91 < '\0') {
                __ZdlPv(alStack_a8[0]);
              }
              lVar13 = 0;
              bVar3 = false;
            }
            else {
              lVar13 = param_4;
              FUN_1093c7e44(param_4,&lStack_90);
              if (lVar13 == 0) {
                FUN_109262df8(&UNK_10f56ae8d);
                goto LAB_1093bb058;
              }
              if (((((int)*(ulong *)(lVar13 + 0x28) != 1) ||
                   (*(ulong *)(lVar13 + 0x28) >> 0x20 != uVar6)) ||
                  ((int)*(ulong *)(lVar13 + 0x30) != (int)uVar8)) ||
                 ((*(ulong *)(lVar13 + 0x30) & 0xffffffff00000000) != 0x400000000)) {
                FUN_10937e740(alStack_a8,&UNK_10f56a26c);
                FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a1bb,0x823,alStack_a8);
                goto LAB_1093baff0;
              }
              FUN_1093e3918(alStack_a8);
              bVar3 = true;
              lVar13 = alStack_a8[0];
            }
            if ((char)bStack_79 < '\0') {
              __ZdlPv(lStack_90);
            }
          }
        }
        else {
          FUN_10937e740(&lStack_90,&UNK_10f56a1f9);
          FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a1bb,0x80a,&lStack_90);
LAB_1093bade0:
          if ((char)bStack_79 < '\0') {
            __ZdlPv(lStack_90);
          }
          lVar13 = 0;
          lVar15 = 0;
          bVar3 = false;
          uVar8 = uVar11;
        }
        if ((char)bStack_61 < '\0') {
          __ZdlPv(uStack_78);
        }
        if (bVar3) goto LAB_1093bae0c;
        bVar4 = true;
        bVar3 = true;
        uVar11 = uVar8;
      }
      else {
        lVar15 = 0;
        lVar13 = 0;
        uVar8 = uVar11;
LAB_1093bae0c:
        puVar10 = (undefined8 *)(param_5 + 0x18);
        if ((*(ulong *)(param_5 + 0x18) & 1) != 0) {
          puVar10 = (undefined8 *)(*(ulong *)(param_5 + 0x18) + 7);
        }
        if (*(int *)(param_5 + 0x20) != 0) {
          lVar9 = (long)*(int *)(param_5 + 0x20) << 3;
          do {
            FUN_1093e6548(lVar13,lVar15,uVar8,uVar6,param_3,uVar12,param_2,*puVar10);
            lVar9 = lVar9 + -8;
            puVar10 = puVar10 + 1;
          } while (lVar9 != 0);
        }
        if ((*(byte *)(param_5 + 0x10) >> 2 & 1) != 0) {
          FUN_1093e6548(lVar13,lVar15,uVar8,uVar6,param_3,uVar12,param_2,
                        *(undefined8 *)(param_5 + 0x78));
        }
        bVar4 = false;
        bVar3 = false;
        uVar11 = uVar8;
      }
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
        bVar3 = bVar4;
      }
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      puVar14 = puVar14 + 1;
      if (puVar14 == puVar1) {
        bVar3 = true;
      }
    } while (!bVar3);
  }
  return;
}



/* Entry: 1093bb130; end: 1093bd083;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093bb130(long param_1,long *param_2,undefined **param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,long param_10,long param_11)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  int *piVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined4 **ppuVar18;
  undefined ***pppuVar19;
  undefined *puVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  ulong *puVar24;
  undefined **ppuVar25;
  undefined4 *puVar26;
  ulong *puVar27;
  int *piVar28;
  ulong uVar29;
  ulong *puVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined8 *puVar37;
  long lVar38;
  long lVar39;
  undefined **ppuVar40;
  undefined8 *puVar41;
  long lVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 *puStack_360;
  long lStack_358;
  char cStack_349;
  ulong *puStack_348;
  ulong *puStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [8];
  undefined **ppuStack_328;
  uint uStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 auStack_2bc [8];
  undefined8 uStack_2b4;
  undefined4 uStack_2ac;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int *piStack_248;
  int *piStack_240;
  undefined8 *puStack_230;
  long lStack_228;
  undefined4 *puStack_220;
  undefined8 uStack_218;
  undefined4 *puStack_210;
  undefined4 *puStack_208;
  undefined4 *puStack_200;
  undefined1 auStack_1f4 [4];
  undefined **ppuStack_1f0;
  undefined4 *puStack_1e8;
  undefined4 *puStack_1e0;
  undefined ***pppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  ulong *puStack_1c0;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined ***pppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong *puStack_180;
  undefined4 *puStack_170;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined **ppuStack_150;
  ulong *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  ulong uStack_120;
  long lStack_118;
  undefined4 *puStack_110;
  long lStack_108;
  undefined4 *puStack_100;
  long lStack_f8;
  undefined4 *puStack_f0;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined2 uStack_d8;
  undefined **ppuStack_c8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 != param_2[1]) {
    FUN_1093bd084(&piStack_248,param_11,1);
    if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
       ((long)*(int *)(param_1 + 0x30) < (long)piStack_240 - (long)piStack_248 >> 2)) {
      func_0x000108a5942c(&piStack_248);
    }
    if (((*(byte *)(param_9 + 0x10) >> 6 & 1) != 0) &&
       ((long)*(int *)(param_9 + 0x68) < (long)piStack_240 - (long)piStack_248 >> 2)) {
      func_0x000108a5942c(&piStack_248);
    }
    if (piStack_248 != piStack_240) {
      piVar13 = piStack_248;
      do {
        iVar10 = *piVar13;
        uVar22 = *(ulong *)(param_11 + 0x18);
        puVar24 = (ulong *)(param_11 + 0x18);
        if ((uVar22 & 1) != 0) {
          puVar24 = (ulong *)(uVar22 + (long)iVar10 * 8 + 7);
        }
        plVar33 = (long *)(param_1 + 0x18);
        if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
          plVar33 = (long *)(*(ulong *)(param_1 + 0x18) + 7);
        }
        if (*(int *)(param_1 + 0x20) != 0) {
          ppuVar40 = (undefined **)*puVar24;
          plVar2 = plVar33 + *(int *)(param_1 + 0x20);
          ppuVar1 = ppuVar40 + 9;
LAB_1093bb2d0:
          lVar42 = *plVar33;
          if ((*(byte *)(lVar42 + 0x32) & 1) == 0) {
            uVar22 = *(ulong *)(lVar42 + 0x20) & 0xfffffffffffffffc;
            cVar9 = *(char *)(uVar22 + 0x17);
            if (cVar9 < '\0') {
              if (*(long *)(uVar22 + 8) != 0) goto LAB_1093bb2fc;
            }
            else if (cVar9 != '\0') {
LAB_1093bb2fc:
              puVar41 = (undefined8 *)(param_9 + 0x18);
              if ((*(ulong *)(param_9 + 0x18) & 1) != 0) {
                puVar41 = (undefined8 *)(*(ulong *)(param_9 + 0x18) + 7);
              }
              puVar37 = (undefined8 *)(*(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffc);
              bVar6 = *(byte *)((long)puVar37 + 0x17);
              uVar22 = (ulong)bVar6;
              if (*(int *)(param_9 + 0x20) != 0) {
                lVar39 = 0;
                lVar32 = (long)*(int *)(param_9 + 0x20) << 3;
                uVar29 = puVar37[1];
                puVar3 = (undefined8 *)*puVar37;
                if (-1 < (char)bVar6) {
                  uVar29 = uVar22;
                  puVar3 = puVar37;
                }
                do {
                  plVar23 = (long *)*puVar41;
                  bVar7 = *(byte *)((long)plVar23 + 0x17);
                  uVar5 = plVar23[1];
                  if (-1 < (char)bVar7) {
                    uVar5 = (ulong)bVar7;
                  }
                  if (uVar5 == uVar29) {
                    plVar14 = (long *)*plVar23;
                    if (-1 < (char)bVar7) {
                      plVar14 = plVar23;
                    }
                    _memcmp(plVar14,puVar3,uVar29);
                    if ((int)plVar14 == 0) {
                      lVar39 = lVar39 + 1;
                    }
                  }
                  puVar41 = puVar41 + 1;
                  lVar32 = lVar32 + -8;
                } while (lVar32 != 0);
                if (0 < lVar39) goto LAB_1093bb5e8;
              }
              if ((char)bVar6 < '\0') {
                uVar22 = puVar37[1];
              }
              ppuVar25 = ppuVar40;
              if (uVar22 == 0) {
LAB_1093bb498:
                if ((*(byte *)((long)ppuVar25 + 0x11) >> 4 & 1) == 0) {
                  FUN_10937e740(&ppuStack_300,&UNK_10f56a2a2);
                  FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a289,0x881,&ppuStack_300);
                }
                else {
                  lVar39 = *param_2;
                  lVar32 = param_2[1];
                  uVar22 = *(ulong *)(lVar42 + 0x20);
                  if (lVar32 - lVar39 != 0) {
                    lVar38 = 0;
                    lVar31 = 0;
                    puVar41 = (undefined8 *)(uVar22 & 0xfffffffffffffffc);
                    bVar6 = *(byte *)((long)puVar41 + 0x17);
                    uVar29 = puVar41[1];
                    if (-1 < (char)bVar6) {
                      uVar29 = (ulong)bVar6;
                    }
                    do {
                      puVar24 = (ulong *)(*(ulong *)(*(long *)(lVar39 + lVar31 * 8) + 0x48) &
                                         0xfffffffffffffffc);
                      bVar7 = *(byte *)((long)puVar24 + 0x17);
                      uVar5 = puVar24[1];
                      if (-1 < (char)bVar7) {
                        uVar5 = (ulong)bVar7;
                      }
                      if (uVar5 == uVar29) {
                        puVar27 = (ulong *)*puVar24;
                        if (-1 < (char)bVar7) {
                          puVar27 = puVar24;
                        }
                        puVar37 = (undefined8 *)*puVar41;
                        if (-1 < (char)bVar6) {
                          puVar37 = puVar41;
                        }
                        _memcmp(puVar27,puVar37,uVar29);
                        if ((int)puVar27 == 0) {
                          if ((int)lVar31 != -1) {
                            ppuStack_300 = &PTR_FUN_110aeb838;
                            uStack_2f8 = 0;
                            auStack_2bc = (undefined1  [8])0x0;
                            uStack_2c0 = 0;
                            uStack_2d8 = 0;
                            uStack_2e0 = 0;
                            uStack_2c8 = 0;
                            uStack_2c4 = 0;
                            uStack_2d0 = 0;
                            puStack_2e8 = (undefined *)0x0;
                            lStack_2f0 = 0;
                            uStack_2b4 = 1;
                            uStack_2ac = 1;
                            puStack_2a8 = &DAT_10e5b4a18;
                            uStack_2a0 = 0;
                            puStack_298 = &DAT_11383d918;
                            ppuStack_288 = (undefined **)0x0;
                            ppuStack_290 = (undefined **)0x0;
                            uStack_278 = 0;
                            ppuStack_280 = (undefined **)0x0;
                            uStack_268 = 0;
                            uStack_270 = 0;
                            uStack_258 = 0;
                            uStack_260 = 0;
                            uStack_250 = 0;
                            if (*(char *)(lVar42 + 0x33) == '\x01') {
                              if (*(char *)(lVar42 + 0x35) == '\x01') {
                                ppuVar34 = &puStack_2e8;
                                func_0x000107c303b0(&puStack_2e8,0x109312438);
                              }
                              else {
                                lStack_2f0 = 4;
                                ppuVar34 = (undefined **)0x0;
                                func_0x000109312438();
                                ppuStack_288 = ppuVar34;
                              }
                              if (ppuVar25 != ppuVar34) {
                                FUN_10930c794(ppuVar34);
                                FUN_10930dfb8(ppuVar34,ppuVar25);
                              }
                            }
                            if ((int)*(uint *)(param_10 + 0x20) < 1) goto LAB_1093bb718;
                            uVar22 = 0;
                            uVar29 = *(ulong *)(param_10 + 0x18);
                            puVar24 = (ulong *)(uVar29 + 7);
                            goto LAB_1093bb6e8;
                          }
                          break;
                        }
                      }
                      lVar31 = lVar31 + 1;
                      lVar38 = lVar38 + 0x100000000;
                    } while (lVar32 - lVar39 >> 3 != lVar31);
                  }
                  ppuStack_150 = (undefined **)(uVar22 & 0xfffffffffffffffc);
                  if (*(char *)((long)ppuStack_150 + 0x17) < '\0') {
                    ppuStack_150 = (undefined **)*ppuStack_150;
                  }
                  FUN_1093780e0(&ppuStack_300,&UNK_10f56a2de,&ppuStack_150);
                  FUN_109388c6c(1,&UNK_10f56906e,&UNK_10f56a289,0x88e,&ppuStack_300);
                }
                if (lStack_2f0 < 0) {
                  __ZdlPv(ppuStack_300);
                }
              }
              else if (0 < *(int *)(ppuVar40 + 10)) {
                lVar39 = 0;
                lVar32 = 8;
                do {
                  uVar22 = *(ulong *)(lVar42 + 0x18);
                  ppuVar25 = ppuVar1;
                  if (((ulong)*ppuVar1 & 1) != 0) {
                    ppuVar25 = (undefined **)(*ppuVar1 + lVar32 + -1);
                  }
                  if ((*(ulong *)(*ppuVar25 + 0xb0) & 3) == 0) {
                    ppuVar25 = ppuRam00000001132d06b0;
                    if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                      ppuVar25 = &PTR_DAT_1132d0698;
                      func_0x00010b4befb0();
                    }
                  }
                  else {
                    ppuVar25 = (undefined **)(*(ulong *)(*ppuVar25 + 0xb0) & 0xfffffffffffffffc);
                  }
                  puVar24 = (ulong *)(uVar22 & 0xfffffffffffffffc);
                  bVar6 = *(byte *)((long)puVar24 + 0x17);
                  puVar20 = (undefined *)puVar24[1];
                  if (-1 < (char)bVar6) {
                    puVar20 = (undefined *)(ulong)bVar6;
                  }
                  bVar7 = *(byte *)((long)ppuVar25 + 0x17);
                  puVar4 = ppuVar25[1];
                  if (-1 < (char)bVar7) {
                    puVar4 = (undefined *)(ulong)bVar7;
                  }
                  if (puVar20 == puVar4) {
                    puVar27 = (ulong *)*puVar24;
                    if (-1 < (char)bVar6) {
                      puVar27 = puVar24;
                    }
                    ppuVar34 = (undefined **)*ppuVar25;
                    if (-1 < (char)bVar7) {
                      ppuVar34 = ppuVar25;
                    }
                    _memcmp(puVar27,ppuVar34);
                    if ((int)puVar27 == 0) {
                      ppuVar25 = ppuVar1;
                      if (((ulong)*ppuVar1 & 1) != 0) {
                        ppuVar25 = (undefined **)(*ppuVar1 + lVar32 + -1);
                      }
                      ppuVar25 = (undefined **)*ppuVar25;
                      if (ppuVar25 != (undefined **)0x0) goto LAB_1093bb498;
                      break;
                    }
                  }
                  lVar39 = lVar39 + 1;
                  lVar32 = lVar32 + 8;
                } while (lVar39 < *(int *)(ppuVar40 + 10));
              }
            }
          }
          goto LAB_1093bb5e8;
        }
LAB_1093bcca4:
        piVar13 = piVar13 + 1;
      } while (piVar13 != piStack_240);
    }
    if (piStack_248 != (int *)0x0) {
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
LAB_1093bcd38:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1093bce30:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1093bce34);
  (*pcVar11)();
  while( true ) {
    uVar22 = uVar22 + 1;
    puVar24 = puVar24 + 1;
    if (*(uint *)(param_10 + 0x20) == uVar22) break;
LAB_1093bb6e8:
    puVar27 = (ulong *)(param_10 + 0x18);
    if ((uVar29 & 1) != 0) {
      puVar27 = puVar24;
    }
    if (((*(byte *)(*puVar27 + 0x12) & 1) != 0) &&
       (*(int *)(*puVar27 + 0x130) == *(int *)(ppuVar40 + 0x26))) goto LAB_1093bb71c;
  }
LAB_1093bb718:
  uVar22 = 0xffffffff;
LAB_1093bb71c:
  uVar29 = *(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffc;
  FUN_1093bd394(uVar29,uVar22,param_10);
  if (uVar29 != 0) {
    puVar37 = (undefined8 *)(*(ulong *)(lVar42 + 0x20) & 0xfffffffffffffffc);
    lVar32 = (long)*(char *)((long)puVar37 + 0x17);
    puVar41 = puVar37;
    if (lVar32 < 0) {
      puVar41 = (undefined8 *)*puVar37;
      lVar32 = puVar37[1];
    }
    lVar31 = uVar29 + 0x90;
    func_0x000107c27d5c(lVar31,puVar41,lVar32,0);
    if (lVar31 == 0) {
      puStack_148 = (ulong *)0x0;
      ppuStack_150 = &PTR_FUN_110aeb6f8;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
    }
    else {
      func_0x00010930afec(&ppuStack_150,0,lVar31 + 0x20);
    }
    FUN_109312ec8(&ppuStack_1b0,auStack_2bc + 4,*(ulong *)(lVar42 + 0x20) & 0xfffffffffffffffc);
    pppuVar19 = (undefined ***)(ppuStack_1b0 + 4);
    if (pppuVar19 != &ppuStack_150) {
      puVar27 = (ulong *)ppuStack_1b0[5];
      puVar24 = puVar27;
      if (((ulong)puVar27 & 1) != 0) {
        puVar24 = *(ulong **)((ulong)puVar27 & 0xfffffffffffffffe);
      }
      puVar30 = puStack_148;
      if (((ulong)puStack_148 & 1) != 0) {
        puVar30 = *(ulong **)((ulong)puStack_148 & 0xfffffffffffffffe);
      }
      if (puVar24 == puVar30) {
        lVar32 = 0;
        ppuStack_1b0[5] = (undefined *)puStack_148;
        uVar60 = *(undefined4 *)(ppuStack_1b0 + 6);
        *(undefined4 *)(ppuStack_1b0 + 6) = (undefined4)uStack_140;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar60);
        do {
          uVar8 = *(undefined1 *)((long)ppuStack_1b0 + lVar32 + 0x38);
          *(undefined1 *)((long)ppuStack_1b0 + lVar32 + 0x38) =
               *(undefined1 *)((long)&uStack_138 + lVar32);
          *(undefined1 *)((long)&uStack_138 + lVar32) = uVar8;
          lVar32 = lVar32 + 1;
          puStack_148 = puVar27;
        } while (lVar32 != 0x1c);
      }
      else {
        FUN_10930b0d4(pppuVar19);
        FUN_10930b470(pppuVar19,&ppuStack_150);
      }
    }
    FUN_10930b074(&ppuStack_150);
  }
  ppuVar34 = &PTR_PTR_1132cf958;
  if ((undefined **)ppuVar25[0x22] != (undefined **)0x0) {
    ppuVar34 = (undefined **)ppuVar25[0x22];
  }
  FUN_1093087ec(auStack_330,0,ppuVar34);
  uVar21 = *(uint *)(lVar42 + 0x10);
  if ((((((uVar21 >> 9 & 1) != 0) && ((uStack_320 & 1) != 0)) && ((uStack_320 >> 1 & 1) != 0)) &&
      (((uStack_320 >> 2 & 1) != 0 && (((*(uint *)(ppuStack_318 + 2) ^ 0xffffffff) & 3) == 0)))) &&
     (((*(uint *)(ppuStack_310 + 2) ^ 0xffffffff) & 3) == 0)) {
    fVar45 = *(float *)((long)ppuStack_310 + 0x1c) - *(float *)((long)ppuStack_318 + 0x1c);
    fVar45 = fVar45 * fVar45 +
             (*(float *)(ppuStack_310 + 3) - *(float *)(ppuStack_318 + 3)) *
             (*(float *)(ppuStack_310 + 3) - *(float *)(ppuStack_318 + 3));
    bVar12 = true;
    if ((fVar45 != 0.0) && (bVar12 = false, !NAN(fVar45))) {
      bVar12 = fVar45 == 3.4028235e+38;
    }
    if (!bVar12) {
      fVar45 = *(float *)(lVar42 + 0x38);
      ppuStack_1a8 = (undefined **)0x0;
      ppuStack_1b0 = &PTR_FUN_110aefbe0;
      uStack_190 = uStack_190 & 0xffffffff00000000;
      fVar46 = SUB84(ppuStack_308[3],0) - SUB84(ppuStack_318[3],0);
      fVar48 = (float)((ulong)ppuStack_308[3] >> 0x20) - (float)((ulong)ppuStack_318[3] >> 0x20);
      pppuStack_198 = (undefined ***)CONCAT44(fVar48,fVar46);
      ppuStack_1a0 = (undefined **)0x3;
      puStack_1e8 = (undefined4 *)0x0;
      ppuStack_1f0 = &PTR_FUN_110aefbe0;
      ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffff00000000);
      fVar49 = SUB84(ppuStack_310[3],0) - SUB84(ppuStack_308[3],0);
      fVar50 = (float)((ulong)ppuStack_310[3] >> 0x20) - (float)((ulong)ppuStack_308[3] >> 0x20);
      pppuStack_1d8 = (undefined ***)CONCAT44(fVar50,fVar49);
      puStack_1e0 = (undefined4 *)0x3;
      fVar51 = SQRT(fVar48 * fVar48 + fVar46 * fVar46);
      fVar56 = fVar45 * SQRT(fVar50 * fVar50 + fVar49 * fVar49);
      if (fVar51 != fVar56) {
        if (-(fVar48 * fVar49) + fVar50 * fVar46 <= 0.0) {
          fVar45 = -fVar45;
        }
        puStack_148 = (ulong *)0x0;
        ppuStack_150 = &PTR_FUN_110aefb90;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_128 = uStack_128 & 0xffffff00;
        if (fVar56 <= fVar51) {
          fVar51 = (1.0 / fVar45) * -fVar48 - fVar49;
          fVar50 = (1.0 / fVar45) * fVar46 - fVar50;
          uStack_138 = CONCAT44(fVar50,fVar51);
          *(float *)(ppuStack_308 + 3) = *(float *)(ppuStack_308 + 3) - fVar51 * 0.5;
          uVar21 = *(uint *)(ppuStack_308 + 2);
          *(uint *)(ppuStack_308 + 2) = uVar21 | 1;
          fVar45 = *(float *)((long)ppuStack_308 + 0x1c) - fVar50 * 0.5;
        }
        else {
          fVar51 = fVar45 * fVar50 - fVar46;
          fVar45 = -fVar48 - fVar49 * fVar45;
          uStack_138 = CONCAT44(fVar45,fVar51);
          *(float *)(ppuStack_308 + 3) = fVar51 * 0.5 + *(float *)(ppuStack_308 + 3);
          uVar21 = *(uint *)(ppuStack_308 + 2);
          *(uint *)(ppuStack_308 + 2) = uVar21 | 1;
          fVar45 = fVar45 * 0.5 + *(float *)((long)ppuStack_308 + 0x1c);
        }
        uStack_140 = 3;
        *(float *)((long)ppuStack_308 + 0x1c) = fVar45;
        *(uint *)(ppuStack_308 + 2) = uVar21 | 3;
        ppuVar34 = &PTR_PTR_1132d8bd0;
        if (ppuStack_318 != (undefined **)0x0) {
          ppuVar34 = ppuStack_318;
        }
        uStack_320 = uStack_320 | 1;
        if (ppuStack_318 == (undefined **)0x0) {
          ppuVar35 = ppuStack_328;
          if (((ulong)ppuStack_328 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuStack_328 & 0xfffffffffffffffe);
          }
          func_0x000109341730();
          fVar51 = (float)uStack_138;
          ppuStack_318 = ppuVar35;
        }
        *(float *)(ppuStack_318 + 3) = *(float *)(ppuVar34 + 3) - fVar51 * 0.5;
        uVar21 = *(uint *)(ppuStack_318 + 2);
        *(uint *)(ppuStack_318 + 2) = uVar21 | 1;
        *(float *)((long)ppuStack_318 + 0x1c) =
             *(float *)((long)ppuVar34 + 0x1c) - uStack_138._4_4_ * 0.5;
        *(uint *)(ppuStack_318 + 2) = uVar21 | 3;
        ppuVar34 = &PTR_PTR_1132d8bd0;
        if (ppuStack_310 != (undefined **)0x0) {
          ppuVar34 = ppuStack_310;
        }
        uStack_320 = uStack_320 | 2;
        if (ppuStack_310 == (undefined **)0x0) {
          ppuVar35 = ppuStack_328;
          if (((ulong)ppuStack_328 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuStack_328 & 0xfffffffffffffffe);
          }
          func_0x000109341730();
          ppuStack_310 = ppuVar35;
        }
        *(float *)(ppuStack_310 + 3) = *(float *)(ppuVar34 + 3) + (float)uStack_138 * 0.5;
        uVar21 = *(uint *)(ppuStack_310 + 2);
        *(uint *)(ppuStack_310 + 2) = uVar21 | 1;
        *(float *)((long)ppuStack_310 + 0x1c) =
             *(float *)((long)ppuVar34 + 0x1c) + uStack_138._4_4_ * 0.5;
        *(uint *)(ppuStack_310 + 2) = uVar21 | 3;
        if (((ulong)puStack_148 & 1) != 0) {
          func_0x0001053936ac(&puStack_148);
        }
        if (((ulong)puStack_1e8 & 1) != 0) {
          func_0x0001053936ac(&puStack_1e8);
        }
      }
      if (((ulong)ppuStack_1a8 & 1) != 0) {
        func_0x0001053936ac(&ppuStack_1a8);
      }
      uVar21 = *(uint *)(lVar42 + 0x10);
    }
  }
  if (((((uVar21 >> 10 & 1) != 0) && (fVar45 = *(float *)(lVar42 + 0x3c), fVar45 != 1.0)) &&
      ((uStack_320 & 1) != 0)) &&
     ((((uStack_320 >> 1 & 1) != 0 && ((uStack_320 >> 2 & 1) != 0)) &&
      ((((*(uint *)(ppuStack_318 + 2) ^ 0xffffffff) & 3) == 0 &&
       (((*(uint *)(ppuStack_310 + 2) ^ 0xffffffff) & 3) == 0)))))) {
    fVar46 = SUB84(ppuStack_310[3],0);
    fVar48 = SUB84(ppuStack_318[3],0);
    fVar51 = fVar46 - fVar48;
    fVar50 = (float)((ulong)ppuStack_310[3] >> 0x20);
    fVar49 = (float)((ulong)ppuStack_318[3] >> 0x20);
    fVar56 = fVar50 - fVar49;
    fVar51 = fVar56 * fVar56 + fVar51 * fVar51;
    bVar12 = true;
    if ((fVar51 != 0.0) && (bVar12 = false, !NAN(fVar51))) {
      bVar12 = fVar51 == 3.4028235e+38;
    }
    if (!bVar12) {
      puStack_148 = (ulong *)0x0;
      ppuStack_150 = &PTR_FUN_110aefbe0;
      uStack_130 = 0;
      uStack_140 = 3;
      fVar51 = 1.0 - fVar45;
      fVar46 = fVar46 * 0.5 + fVar48 * 0.5;
      fVar50 = fVar50 * 0.5 + fVar49 * 0.5;
      uVar22 = CONCAT44(fVar50,fVar46);
      ppuStack_318[3] =
           (undefined *)
           CONCAT44((float)((ulong)ppuStack_318[3] >> 0x20) * fVar45 + fVar50 * fVar51,
                    SUB84(ppuStack_318[3],0) * fVar45 + fVar46 * fVar51);
      *(uint *)(ppuStack_318 + 2) = *(uint *)(ppuStack_318 + 2) | 3;
      ppuVar34 = &PTR_PTR_1132d8bd0;
      if (ppuStack_310 != (undefined **)0x0) {
        ppuVar34 = ppuStack_310;
      }
      uStack_320 = uStack_320 | 2;
      uStack_138 = uVar22;
      if (ppuStack_310 == (undefined **)0x0) {
        ppuVar35 = ppuStack_328;
        if (((ulong)ppuStack_328 & 1) != 0) {
          ppuVar35 = *(undefined ***)((ulong)ppuStack_328 & 0xfffffffffffffffe);
        }
        func_0x000109341730();
        uVar22 = uStack_138 & 0xffffffff;
        ppuStack_310 = ppuVar35;
      }
      *(float *)(ppuStack_310 + 3) = fVar45 * *(float *)(ppuVar34 + 3) + (float)uVar22 * fVar51;
      uVar21 = *(uint *)(ppuStack_310 + 2);
      *(uint *)(ppuStack_310 + 2) = uVar21 | 1;
      *(float *)((long)ppuStack_310 + 0x1c) =
           fVar45 * *(float *)((long)ppuVar34 + 0x1c) + uStack_138._4_4_ * fVar51;
      *(uint *)(ppuStack_310 + 2) = uVar21 | 3;
      ppuVar34 = &PTR_PTR_1132d8bd0;
      if (ppuStack_308 != (undefined **)0x0) {
        ppuVar34 = ppuStack_308;
      }
      uStack_320 = uStack_320 | 4;
      if (ppuStack_308 == (undefined **)0x0) {
        ppuVar35 = ppuStack_328;
        if (((ulong)ppuStack_328 & 1) != 0) {
          ppuVar35 = *(undefined ***)((ulong)ppuStack_328 & 0xfffffffffffffffe);
        }
        func_0x000109341730();
        ppuStack_308 = ppuVar35;
      }
      *(float *)(ppuStack_308 + 3) = fVar45 * *(float *)(ppuVar34 + 3) + (float)uStack_138 * fVar51;
      uVar21 = *(uint *)(ppuStack_308 + 2);
      *(uint *)(ppuStack_308 + 2) = uVar21 | 1;
      *(float *)((long)ppuStack_308 + 0x1c) =
           fVar45 * *(float *)((long)ppuVar34 + 0x1c) + uStack_138._4_4_ * fVar51;
      *(uint *)(ppuStack_308 + 2) = uVar21 | 3;
      if (((ulong)puStack_148 & 1) != 0) {
        func_0x0001053936ac(&puStack_148);
      }
    }
  }
  ppuVar34 = &PTR_PTR_1132d8bd0;
  if (ppuStack_318 != (undefined **)0x0) {
    ppuVar34 = ppuStack_318;
  }
  uVar61 = *(undefined4 *)(ppuVar34 + 3);
  uVar60 = *(undefined4 *)((long)ppuVar34 + 0x1c);
  ppuVar34 = &PTR_PTR_1132d8bd0;
  if (ppuStack_310 != (undefined **)0x0) {
    ppuVar34 = ppuStack_310;
  }
  uVar58 = *(undefined4 *)(ppuVar34 + 3);
  uVar62 = *(undefined4 *)((long)ppuVar34 + 0x1c);
  ppuVar34 = &PTR_PTR_1132d8bd0;
  if (ppuStack_308 != (undefined **)0x0) {
    ppuVar34 = ppuStack_308;
  }
  uVar57 = *(undefined4 *)(ppuVar34 + 3);
  uVar59 = *(undefined4 *)((long)ppuVar34 + 0x1c);
  puStack_170 = (undefined4 *)0x0;
  puStack_168 = (undefined4 *)
                NEON_scvtf(*(undefined8 *)(*(long *)(lVar39 + (lVar38 >> 0x1d)) + 0x84),4);
  puStack_160 = (undefined4 *)((ulong)puStack_168 & 0xffffffff);
  if (*(char *)(lVar42 + 0x30) == '\x01') {
    puStack_170 = (undefined4 *)((ulong)puStack_168 & 0xffffffff);
    puStack_168 = (undefined4 *)((ulong)puStack_168 & 0xffffffff00000000);
    puStack_160 = (undefined4 *)0x0;
  }
  puStack_208 = (undefined4 *)0x0;
  puStack_210 = (undefined4 *)0x0;
  puStack_200 = (undefined4 *)0x0;
  FUN_1093c3d54(&puStack_210,0x24,6,6);
  if ((puStack_208 == (undefined4 *)0x6) && (puStack_200 == (undefined4 *)0x6)) {
    lVar32 = 0x24;
    puVar26 = (undefined4 *)0x6;
LAB_1093bbe0c:
    _bzero(puStack_210,lVar32 << 2);
  }
  else {
    FUN_1093c3d54(&puStack_210,0x24,6,6);
    lVar32 = (long)puStack_200 * (long)puStack_208;
    puVar26 = puStack_208;
    if (0 < lVar32) goto LAB_1093bbe0c;
  }
  lVar32 = 0;
  puVar15 = (undefined4 *)((ulong)&puStack_170 | 4);
  do {
    uVar43 = puVar15[-1];
    uVar47 = *puVar15;
    *(undefined4 *)((long)puStack_210 + lVar32) = uVar43;
    *(undefined4 *)((long)puStack_210 + lVar32 + (long)puVar26 * 4) = uVar47;
    *(undefined4 *)((long)puStack_210 + lVar32 + (long)puVar26 * 8) = 0x3f800000;
    *(undefined4 *)((long)puStack_210 + lVar32 + (long)puVar26 * 0xc + 0xc) = uVar43;
    *(undefined4 *)((long)puStack_210 + lVar32 + (long)puVar26 * 0x10 + 0xc) = uVar47;
    *(undefined4 *)((long)puStack_210 + lVar32 + (long)puVar26 * 0x14 + 0xc) = 0x3f800000;
    lVar32 = lVar32 + 4;
    puVar15 = puVar15 + 2;
  } while (lVar32 != 0xc);
  puVar15 = (undefined4 *)0x18;
  _malloc();
  if (puVar15 == (undefined4 *)0x0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_1093bce30;
  }
  uStack_218 = 6;
  *puVar15 = uVar61;
  puVar15[1] = uVar58;
  puVar15[2] = uVar57;
  puVar15[3] = uVar60;
  puVar15[4] = uVar62;
  puVar15[5] = uVar59;
  uStack_140 = 0;
  ppuStack_150 = (undefined **)0x0;
  puStack_148 = (ulong *)0x0;
  puStack_220 = puVar15;
  if ((puVar26 != (undefined4 *)0x0) && (puStack_200 != (undefined4 *)0x0)) {
    lVar32 = 0;
    if (puStack_200 != (undefined4 *)0x0) {
      lVar32 = 0x7fffffffffffffff / (long)puStack_200;
    }
    if (lVar32 < (long)puVar26) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1093bce30;
    }
  }
  FUN_1093c3d54(&ppuStack_150,(long)puStack_200 * (long)puVar26,puVar26);
  puVar15 = puStack_200;
  uStack_138 = 0;
  uStack_12c = 0;
  uStack_130 = 0;
  puVar26 = puStack_200;
  if ((long)puStack_208 <= (long)puStack_200) {
    puVar26 = puStack_208;
  }
  uVar22 = uStack_138;
  if (puVar26 != (undefined4 *)0x0) {
    if ((long)puVar26 < 1) {
      uVar22 = 0;
    }
    else {
      if ((ulong)puVar26 >> 0x3e != 0) goto LAB_1093bcd38;
      uVar22 = (long)puVar26 << 2;
      _malloc();
      if (uVar22 == 0) goto LAB_1093bcd38;
    }
  }
  uStack_138 = uVar22;
  uStack_130 = SUB84(puVar26,0);
  uStack_12c = (undefined4)((ulong)puVar26 >> 0x20);
  uVar22 = (ulong)(int)puVar15;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  if (((ulong)puVar15 & 0xffffffff) != 0) {
    if ((long)uVar22 < 1) {
      lVar32 = 0;
    }
    else {
      lVar32 = ((ulong)puVar15 & 0xffffffff) << 2;
      _malloc();
      if (lVar32 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_1093bce30;
      }
    }
    uStack_128 = (uint)lVar32;
    uStack_124 = (undefined4)((ulong)lVar32 >> 0x20);
  }
  lStack_118 = 0;
  puStack_110 = (undefined4 *)0x0;
  uStack_120 = uVar22;
  if (puVar15 == (undefined4 *)0x0) {
    lStack_f8 = 0;
    puStack_100 = (undefined4 *)0x0;
    lStack_e8 = 0;
    puStack_f0 = (undefined4 *)0x0;
    lStack_108 = 0;
    puStack_110 = (undefined4 *)0x0;
    lVar32 = lStack_e8;
  }
  else {
    if (0 < (long)puVar15) {
      if ((ulong)puVar15 >> 0x3d == 0) {
        lVar31 = (long)puVar15 << 3;
        _malloc();
        if (lVar31 != 0) {
          puStack_110 = puVar15;
          lVar32 = (long)puVar15 << 2;
          lStack_108 = 0;
          puStack_100 = (undefined4 *)0x0;
          lVar16 = lVar32;
          lStack_118 = lVar31;
          _malloc();
          if (lVar16 == 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_1093bce30;
          }
          puStack_100 = puVar15;
          lStack_f8 = 0;
          puStack_f0 = (undefined4 *)0x0;
          lVar31 = lVar32;
          lStack_108 = lVar16;
          _malloc();
          if (lVar31 == 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_1093bce30;
          }
          puStack_f0 = puVar15;
          lStack_e8 = 0;
          puStack_e0 = (undefined4 *)0x0;
          lStack_f8 = lVar31;
          _malloc();
          if (lVar32 == 0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_1093bce30;
          }
          goto LAB_1093bbff8;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1093bce30;
    }
    puStack_110 = puVar15;
    lStack_108 = 0;
    puStack_100 = puVar15;
    lStack_f8 = 0;
    puStack_f0 = puVar15;
    lVar32 = 0;
  }
LAB_1093bbff8:
  lStack_e8 = lVar32;
  puStack_e0 = puVar15;
  uStack_d8 = 0;
  func_0x0001093c3e60(&ppuStack_150,&puStack_210);
  lStack_228 = 0;
  puStack_230 = (undefined8 *)0x0;
  FUN_1093c61bc(&puStack_230,uStack_140,1);
  if (lStack_228 != uStack_140) {
    FUN_1093c61bc(&puStack_230,uStack_140,1);
  }
  ppuVar34 = ppuStack_c8;
  if (ppuStack_c8 == (undefined **)0x0) {
    if (0 < lStack_228) {
      _bzero(puStack_230,lStack_228 << 2);
    }
  }
  else {
    func_0x0001093c625c(&puStack_360,&puStack_220);
    if (0 < (long)ppuVar34) {
      lVar32 = 0;
      lVar31 = -1;
      ppuVar35 = (undefined **)0x0;
      do {
        puStack_1e8 = (undefined4 *)(lVar31 + (long)puStack_148);
        ppuStack_1a8 = (undefined **)((long)puStack_1e8 + 1);
        uStack_190 = (long)ppuVar35 + (lStack_358 - (long)puStack_148);
        ppuStack_1b0 = (undefined **)(puStack_360 + uStack_190);
        ppuStack_1a0 = (undefined **)0x1;
        pppuStack_198 = (undefined ***)&puStack_360;
        uStack_188 = 0;
        puStack_180 = (ulong *)lStack_358;
        ppuVar17 = (undefined **)((long)ppuVar35 + 1);
        ppuStack_1f0 = (undefined **)((long)ppuStack_150 + lVar32 + (long)puStack_148 * lVar32 + 4);
        puStack_1c0 = puStack_148;
        pppuStack_1d8 = &ppuStack_150;
        ppuStack_1d0 = ppuVar17;
        ppuStack_1c8 = ppuVar35;
        FUN_1093c62e0(&ppuStack_1b0,&ppuStack_1f0,uStack_138 + lVar32,auStack_1f4);
        lVar32 = lVar32 + 4;
        lVar31 = lVar31 + -1;
        ppuVar35 = ppuVar17;
      } while (ppuVar34 != ppuVar17);
    }
    uStack_190 = 0;
    uStack_188 = 0;
    ppuStack_1b0 = ppuStack_150;
    ppuStack_1a8 = ppuVar34;
    ppuStack_1a0 = ppuVar34;
    pppuStack_198 = &ppuStack_150;
    puStack_180 = puStack_148;
    FUN_1093c6af4(&ppuStack_1b0,puStack_360,ppuVar34);
    if (0 < (long)ppuVar34) {
      puVar26 = puStack_360;
      piVar28 = (int *)CONCAT44(uStack_124,uStack_128);
      ppuVar35 = ppuVar34;
      do {
        *(undefined4 *)((long)puStack_230 + (long)*piVar28 * 4) = *puVar26;
        ppuVar35 = (undefined **)((long)ppuVar35 + -1);
        puVar26 = puVar26 + 1;
        piVar28 = piVar28 + 1;
      } while (ppuVar35 != (undefined **)0x0);
    }
    lVar32 = uStack_140 - (long)ppuVar34;
    if (lVar32 != 0 && (long)ppuVar34 <= uStack_140) {
      piVar28 = (int *)(CONCAT44(uStack_124,uStack_128) + (long)ppuVar34 * 4);
      do {
        *(undefined4 *)((long)puStack_230 + (long)*piVar28 * 4) = 0;
        lVar32 = lVar32 + -1;
        piVar28 = piVar28 + 1;
      } while (lVar32 != 0);
    }
    _free(puStack_360);
  }
  _free(lStack_e8);
  _free(lStack_f8);
  _free(lStack_108);
  _free(lStack_118);
  _free(CONCAT44(uStack_124,uStack_128));
  _free(uStack_138);
  _free(ppuStack_150);
  puStack_148 = (ulong *)puStack_230[1];
  ppuStack_150 = (undefined **)*puStack_230;
  uStack_140 = puStack_230[2];
  puStack_340 = (ulong *)0x0;
  uStack_338 = 0;
  puStack_348 = (ulong *)0x0;
  FUN_1093c71a0(&puStack_348,&ppuStack_150,&uStack_138,6);
  uVar22 = *puStack_348;
  fVar46 = (float)(uVar22 >> 0x20);
  uVar29 = *(ulong *)((long)puStack_348 + 0xc);
  fVar48 = (float)uVar29;
  fVar45 = (float)uVar22;
  fVar49 = (float)(uVar29 >> 0x20);
  fVar50 = SQRT(ABS(-fVar46 * fVar48 + fVar45 * fVar49));
  fVar51 = fVar50 * 1e-05;
  fVar50 = -(fVar50 * 1e-05);
  iVar52 = -(uint)(fVar45 < fVar50);
  iVar53 = -(uint)(fVar46 < fVar50);
  iVar54 = -(uint)(fVar51 < fVar45);
  iVar55 = -(uint)(fVar51 < fVar46);
  *puStack_348 = CONCAT17((byte)((uint)iVar53 >> 0x18) | (byte)((uint)iVar55 >> 0x18),
                          CONCAT16((byte)((uint)iVar53 >> 0x10) | (byte)((uint)iVar55 >> 0x10),
                                   CONCAT15((byte)((uint)iVar53 >> 8) | (byte)((uint)iVar55 >> 8),
                                            CONCAT14((byte)iVar53 | (byte)iVar55,
                                                     CONCAT13((byte)((uint)iVar52 >> 0x18) |
                                                              (byte)((uint)iVar54 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar52 >> 0x10)
                                                                       | (byte)((uint)iVar54 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((uint)iVar52
                                                                                      >> 8) |
                                                                                (byte)((uint)iVar54
                                                                                      >> 8),
                                                                                (byte)iVar52 |
                                                                                (byte)iVar54)))))))
                 & uVar22;
  iVar52 = -(uint)(fVar48 < fVar50);
  iVar53 = -(uint)(fVar49 < fVar50);
  iVar54 = -(uint)(fVar51 < fVar48);
  iVar55 = -(uint)(fVar51 < fVar49);
  *(ulong *)((long)puStack_348 + 0xc) =
       CONCAT17((byte)((uint)iVar53 >> 0x18) | (byte)((uint)iVar55 >> 0x18),
                CONCAT16((byte)((uint)iVar53 >> 0x10) | (byte)((uint)iVar55 >> 0x10),
                         CONCAT15((byte)((uint)iVar53 >> 8) | (byte)((uint)iVar55 >> 8),
                                  CONCAT14((byte)iVar53 | (byte)iVar55,
                                           CONCAT13((byte)((uint)iVar52 >> 0x18) |
                                                    (byte)((uint)iVar54 >> 0x18),
                                                    CONCAT12((byte)((uint)iVar52 >> 0x10) |
                                                             (byte)((uint)iVar54 >> 0x10),
                                                             CONCAT11((byte)((uint)iVar52 >> 8) |
                                                                      (byte)((uint)iVar54 >> 8),
                                                                      (byte)iVar52 | (byte)iVar54)))
                                          )))) & uVar29;
  _free(puStack_230);
  _free(puStack_220);
  _free(puStack_210);
  puStack_148 = puStack_348;
  uStack_140 = CONCAT44(param_5,param_4);
  uStack_138 = CONCAT44(param_7,param_6);
  lVar39 = *(long *)(lVar39 + (lVar38 >> 0x1d));
  uVar44 = *(undefined8 *)(lVar39 + 0x84);
  uStack_12c = (undefined4)uVar44;
  uStack_128 = (uint)((ulong)uVar44 >> 0x20);
  ppuStack_150 = param_3;
  uStack_130 = param_8;
  FUN_10939fe04(lVar39,&ppuStack_150,param_9,&ppuStack_300);
  if ((int)uStack_250 == 2) {
    if ((*(char *)(lVar42 + 0x35) == '\x01') && (0 < (int)uStack_2e0)) {
      ppuVar34 = &puStack_2e8;
      if (((ulong)puStack_2e8 & 1) != 0) {
        ppuVar34 = (undefined **)(puStack_2e8 + 7);
      }
      ppuVar34 = (undefined **)*ppuVar34;
    }
    else {
      ppuVar34 = &PTR_PTR_1132cfaf0;
      if (ppuStack_288 != (undefined **)0x0) {
        ppuVar34 = ppuStack_288;
      }
    }
    if (*(char *)(lVar42 + 0x34) == '\x01') {
      if (ppuVar34 != ppuVar25) {
        FUN_10930c794(ppuVar25);
        FUN_10930dfb8(ppuVar25,ppuVar34);
      }
    }
    else if ((*(byte *)(lVar42 + 0x10) >> 2 & 1) == 0) {
      uVar21 = *(uint *)(ppuVar34 + 2);
      if ((uVar21 >> 3 & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 8;
        ppuVar35 = (undefined **)ppuVar25[0x19];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x000109311fd0();
          ppuVar25[0x19] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132cf7b0;
        if ((undefined **)ppuVar34[0x19] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x19];
        }
        if (ppuVar17 != ppuVar35) {
          func_0x000109309328(ppuVar35);
          FUN_1093097dc(ppuVar35,ppuVar17);
        }
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 8 & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x100;
        ppuVar35 = (undefined **)ppuVar25[0x1e];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x000109311f78();
          ppuVar25[0x1e] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132cf778;
        if ((undefined **)ppuVar34[0x1e] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x1e];
        }
        if (ppuVar17 != ppuVar35) {
          func_0x000109309968(ppuVar35);
          FUN_109309e1c(ppuVar35,ppuVar17);
        }
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 9 & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x200;
        ppuVar35 = (undefined **)ppuVar25[0x1f];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x00010933f64c();
          ppuVar25[0x1f] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132d7f38;
        if ((undefined **)ppuVar34[0x1f] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x1f];
        }
        if (ppuVar17 != ppuVar35) {
          func_0x00010933ea00(ppuVar35);
          FUN_10933f360(ppuVar35,ppuVar17);
        }
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 10 & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x400;
        ppuVar35 = (undefined **)ppuVar25[0x20];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x000109312198();
          ppuVar25[0x20] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132cf918;
        if ((undefined **)ppuVar34[0x20] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x20];
        }
        if (ppuVar17 != ppuVar35) {
          func_0x000109309fb0(ppuVar35);
          FUN_10930a4f4(ppuVar35,ppuVar17);
        }
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 0xe & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x4000;
        ppuVar35 = (undefined **)ppuVar25[0x24];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x000109312090();
          ppuVar25[0x24] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132cf878;
        if ((undefined **)ppuVar34[0x24] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x24];
        }
        if (ppuVar17 != ppuVar35) {
          func_0x00010930a6e8(ppuVar35);
          func_0x00010930ae8c(ppuVar35,ppuVar17);
        }
        uVar21 = *(uint *)(ppuVar34 + 2);
        if ((uVar21 >> 0x1e & 1) != 0) {
          *(undefined4 *)(ppuVar25 + 0x2d) = *(undefined4 *)(ppuVar34 + 0x2d);
          *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x40000000;
          uVar21 = *(uint *)(ppuVar34 + 2);
        }
      }
      if ((uVar21 >> 0xf & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x8000;
        ppuVar35 = (undefined **)ppuVar25[0x25];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x00010933b824();
          ppuVar25[0x25] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132d70f0;
        if ((undefined **)ppuVar34[0x25] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x25];
        }
        if (ppuVar17 != ppuVar35) {
          FUN_109335ed0(ppuVar35);
          FUN_109336d7c(ppuVar35,ppuVar17);
        }
      }
      if (0 < *(int *)(ppuVar34 + 4)) {
        if (0 < *(int *)(ppuVar25 + 4)) {
          func_0x0001053936e4(ppuVar25 + 3);
        }
        if (0 < *(int *)(ppuVar25 + 0xd)) {
          func_0x0001053936e4(ppuVar25 + 0xc);
        }
        puVar20 = ppuVar34[3];
        ppuVar35 = ppuVar34 + 3;
        if (((ulong)puVar20 & 1) != 0) {
          ppuVar35 = (undefined **)(puVar20 + 7);
        }
        if (*(int *)(ppuVar34 + 4) != 0) {
          lVar39 = (long)*(int *)(ppuVar34 + 4) << 3;
          do {
            ppuVar36 = (undefined **)*ppuVar35;
            ppuVar17 = ppuVar25 + 3;
            func_0x000107c303b0(ppuVar17,0x1093416e0);
            if (ppuVar36 != ppuVar17) {
              func_0x000109340dd8(ppuVar17);
              func_0x000109340c8c(ppuVar17,ppuVar36);
            }
            ppuVar35 = ppuVar35 + 1;
            lVar39 = lVar39 + -8;
          } while (lVar39 != 0);
        }
        if ((*(byte *)((long)ppuVar34 + 0x13) >> 2 & 1) != 0) {
          *(undefined4 *)(ppuVar25 + 0x2b) = *(undefined4 *)(ppuVar34 + 0x2b);
          *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x4000000;
        }
      }
      if (0 < *(int *)(ppuVar34 + 7)) {
        if (0 < *(int *)(ppuVar25 + 7)) {
          func_0x0001053936e4(ppuVar25 + 6);
        }
        if (0 < *(int *)(ppuVar25 + 0x10)) {
          func_0x0001053936e4(ppuVar25 + 0xf);
        }
        puVar20 = ppuVar34[6];
        ppuVar35 = ppuVar34 + 6;
        if (((ulong)puVar20 & 1) != 0) {
          ppuVar35 = (undefined **)(puVar20 + 7);
        }
        if (*(int *)(ppuVar34 + 7) != 0) {
          lVar39 = (long)*(int *)(ppuVar34 + 7) << 3;
          do {
            ppuVar36 = (undefined **)*ppuVar35;
            ppuVar17 = ppuVar25 + 6;
            func_0x000107c303b0(ppuVar17,0x1093416e0);
            if (ppuVar36 != ppuVar17) {
              func_0x000109340dd8(ppuVar17);
              func_0x000109340c8c(ppuVar17,ppuVar36);
            }
            ppuVar35 = ppuVar35 + 1;
            lVar39 = lVar39 + -8;
          } while (lVar39 != 0);
        }
        if ((*(byte *)((long)ppuVar34 + 0x13) >> 3 & 1) != 0) {
          *(undefined4 *)((long)ppuVar25 + 0x15c) = *(undefined4 *)((long)ppuVar34 + 0x15c);
          *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x8000000;
        }
      }
      uVar21 = *(uint *)(ppuVar34 + 2);
      if ((uVar21 >> 4 & 1) != 0) {
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x10;
        ppuVar35 = (undefined **)ppuVar25[0x1a];
        if (ppuVar35 == (undefined **)0x0) {
          ppuVar35 = (undefined **)ppuVar25[1];
          if (((ulong)ppuVar35 & 1) != 0) {
            ppuVar35 = *(undefined ***)((ulong)ppuVar35 & 0xfffffffffffffffe);
          }
          func_0x00010933b59c();
          ppuVar25[0x1a] = (undefined *)ppuVar35;
        }
        ppuVar17 = &PTR_PTR_1132d6de0;
        if ((undefined **)ppuVar34[0x1a] != (undefined **)0x0) {
          ppuVar17 = (undefined **)ppuVar34[0x1a];
        }
        if (ppuVar17 != ppuVar35) {
          func_0x000109338834(ppuVar35);
          FUN_10933aa98(ppuVar35,ppuVar17);
        }
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 0x1c & 1) != 0) {
        *(undefined4 *)(ppuVar25 + 0x2c) = *(undefined4 *)(ppuVar34 + 0x2c);
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x10000000;
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 0x11 & 1) != 0) {
        *(undefined4 *)((long)ppuVar25 + 0x134) = *(undefined4 *)((long)ppuVar34 + 0x134);
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x20000;
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 0x13 & 1) != 0) {
        *(undefined1 *)((long)ppuVar25 + 0x13c) = *(undefined1 *)((long)ppuVar34 + 0x13c);
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x80000;
        uVar21 = *(uint *)(ppuVar34 + 2);
      }
      if ((uVar21 >> 0x12 & 1) != 0) {
        *(undefined4 *)(ppuVar25 + 0x27) = *(undefined4 *)(ppuVar34 + 0x27);
        *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x40000;
      }
    }
    else {
      FUN_1093eb350(*(undefined8 *)(lVar42 + 0x28),ppuVar34,ppuVar25,0);
    }
    puVar37 = (undefined8 *)(*(ulong *)(lVar42 + 0x20) & 0xfffffffffffffffc);
    puVar41 = (undefined8 *)*puVar37;
    uVar22 = puVar37[1];
    if (-1 < (char)*(byte *)((long)puVar37 + 0x17)) {
      puVar41 = puVar37;
      uVar22 = (ulong)*(byte *)((long)puVar37 + 0x17);
    }
    ppuVar34 = (undefined **)(auStack_2bc + 4);
    func_0x000107c27d5c(ppuVar34,puVar41,uVar22,0);
    if ((ppuVar34 != (undefined **)0x0) &&
       (FUN_109312ec8(&ppuStack_1b0,ppuVar25 + 0x12,*(ulong *)(lVar42 + 0x20) & 0xfffffffffffffffc),
       ppuVar35 = ppuStack_1b0, ppuStack_1b0 != ppuVar34)) {
      FUN_10930b0d4(ppuStack_1b0 + 4);
      FUN_10930b470(ppuVar35 + 4,ppuVar34 + 4);
    }
    if (((uint)lStack_2f0 >> 3 & 1) != 0) {
      *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 0x40;
      ppuVar34 = (undefined **)ppuVar25[0x1c];
      if (ppuVar34 == (undefined **)0x0) {
        ppuVar34 = (undefined **)ppuVar25[1];
        if (((ulong)ppuVar34 & 1) != 0) {
          ppuVar34 = *(undefined ***)((ulong)ppuVar34 & 0xfffffffffffffffe);
        }
        func_0x000109312140();
        ppuVar25[0x1c] = (undefined *)ppuVar34;
      }
      ppuVar35 = &PTR_PTR_1132cf8e8;
      if (ppuStack_280 != (undefined **)0x0) {
        ppuVar35 = ppuStack_280;
      }
      if (ppuVar35 != ppuVar34) {
        func_0x000109308014(ppuVar34);
        FUN_1093082f8(ppuVar34,ppuVar35);
      }
    }
    if (((uint)lStack_2f0 >> 1 & 1) != 0) {
      *(uint *)(param_11 + 0x10) = *(uint *)(param_11 + 0x10) | 2;
      uVar22 = *(ulong *)(param_11 + 0x70);
      if (uVar22 == 0) {
        uVar22 = *(ulong *)(param_11 + 8);
        if ((uVar22 & 1) != 0) {
          uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
        }
        func_0x000109312028();
        *(ulong *)(param_11 + 0x70) = uVar22;
      }
      ppuVar34 = (undefined **)(uVar22 + 0x18);
      func_0x000107c303b0(ppuVar34,0x109312028);
      ppuVar35 = &PTR_PTR_1132cf7e8;
      if (ppuStack_290 != (undefined **)0x0) {
        ppuVar35 = ppuStack_290;
      }
      if (ppuVar35 != ppuVar34) {
        FUN_10930e51c(ppuVar34);
        FUN_10930ec1c(ppuVar34,ppuVar35);
      }
      __ZNSt3__19to_stringEi(&puStack_360,(long)iVar10);
      ppuVar18 = &puStack_360;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar18,":",1);
      puStack_168 = ppuVar18[1];
      puStack_170 = *ppuVar18;
      puStack_160 = ppuVar18[2];
      ppuVar18[1] = (undefined4 *)0x0;
      ppuVar18[2] = (undefined4 *)0x0;
      *ppuVar18 = (undefined4 *)0x0;
      puVar37 = (undefined8 *)(*(ulong *)(lVar42 + 0x20) & 0xfffffffffffffffc);
      uVar22 = puVar37[1];
      puVar41 = (undefined8 *)*puVar37;
      if (-1 < (char)*(byte *)((long)puVar37 + 0x17)) {
        uVar22 = (ulong)*(byte *)((long)puVar37 + 0x17);
        puVar41 = puVar37;
      }
      ppuVar18 = &puStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar18,puVar41,uVar22);
      puStack_208 = ppuVar18[1];
      puStack_210 = *ppuVar18;
      puStack_200 = ppuVar18[2];
      ppuVar18[1] = (undefined4 *)0x0;
      ppuVar18[2] = (undefined4 *)0x0;
      *ppuVar18 = (undefined4 *)0x0;
      ppuVar18 = &puStack_210;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar18,":",1);
      puStack_1e8 = ppuVar18[1];
      ppuStack_1f0 = (undefined **)*ppuVar18;
      puStack_1e0 = ppuVar18[2];
      ppuVar18[1] = (undefined4 *)0x0;
      ppuVar18[2] = (undefined4 *)0x0;
      *ppuVar18 = (undefined4 *)0x0;
      puVar37 = (undefined8 *)(*(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffc);
      uVar22 = puVar37[1];
      puVar41 = (undefined8 *)*puVar37;
      if (-1 < (char)*(byte *)((long)puVar37 + 0x17)) {
        uVar22 = (ulong)*(byte *)((long)puVar37 + 0x17);
        puVar41 = puVar37;
      }
      pppuVar19 = &ppuStack_1f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar19,puVar41,uVar22);
      ppuStack_1a8 = pppuVar19[1];
      ppuStack_1b0 = *pppuVar19;
      ppuStack_1a0 = pppuVar19[2];
      pppuVar19[1] = (undefined **)0x0;
      pppuVar19[2] = (undefined **)0x0;
      *pppuVar19 = (undefined **)0x0;
      *(uint *)(ppuVar34 + 2) = *(uint *)(ppuVar34 + 2) | 1;
      puVar20 = ppuVar34[1];
      if (((ulong)puVar20 & 1) != 0) {
        puVar20 = *(undefined **)((ulong)puVar20 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(ppuVar34 + 9,&ppuStack_1b0,puVar20);
      if ((long)ppuStack_1a0 < 0) {
        __ZdlPv(ppuStack_1b0);
      }
      if ((long)puStack_1e0 < 0) {
        __ZdlPv(ppuStack_1f0);
      }
      if ((long)puStack_200 < 0) {
        __ZdlPv(puStack_210);
      }
      if ((long)puStack_160 < 0) {
        __ZdlPv(puStack_170);
      }
      if (cStack_349 < '\0') {
        __ZdlPv(puStack_360);
      }
    }
    if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
      ppuVar34 = &PTR_PTR_1132d80c0;
      if (*(undefined ***)(param_9 + 0x40) != (undefined **)0x0) {
        ppuVar34 = *(undefined ***)(param_9 + 0x40);
      }
      iVar52 = 3;
      if (1 < *(int *)((long)ppuVar25 + 0x154) - 1U) {
        iVar52 = *(int *)((long)ppuVar25 + 0x154);
      }
      FUN_1093e3288(ppuVar34,iVar52);
    }
  }
  if (puStack_348 != (ulong *)0x0) {
    puStack_340 = puStack_348;
    __ZdlPv();
  }
  FUN_10930889c(auStack_330);
  FUN_10930ef1c(&ppuStack_300);
LAB_1093bb5e8:
  plVar33 = plVar33 + 1;
  if (plVar33 == plVar2) goto LAB_1093bcca4;
  goto LAB_1093bb2d0;
}



/* Entry: 1093bd084; end: 1093bd393;  */

void FUN_1093bd084(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  int iStack_64;
  
  puVar13 = (ulong *)(param_2 + 0x18);
  puVar15 = puVar13;
  if ((*puVar13 & 1) != 0) {
    puVar15 = (ulong *)(*puVar13 + 7);
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    plVar5 = (long *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar16 = 0;
    plVar12 = (long *)0x0;
    plVar14 = (long *)0x0;
    lVar11 = (long)*(int *)(param_2 + 0x20) << 3;
    iVar10 = -1;
    plVar6 = (long *)0x0;
    do {
      uVar7 = *puVar15;
      plVar5 = plVar6;
      if (((*(byte *)(uVar7 + 0x12) & 1) != 0) && (*(int *)(uVar7 + 0x14c) == 0)) {
        lVar1 = lVar16 + (ulong)*(uint *)(uVar7 + 0x130);
        if (plVar12 < plVar14) {
          *plVar12 = lVar1;
        }
        else {
          uVar7 = ((long)plVar12 - (long)plVar6 >> 3) + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_1093c8760();
LAB_1093bd34c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1093bd350);
            (*pcVar4)();
          }
          uVar8 = (long)plVar14 - (long)plVar6 >> 2;
          if (uVar8 <= uVar7) {
            uVar8 = uVar7;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar14 - (long)plVar6)) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1093bd34c;
          }
          plVar5 = (long *)(uVar8 << 3);
          __Znwm();
          plVar12 = (long *)((long)plVar5 + ((long)plVar12 - (long)plVar6));
          plVar14 = plVar5 + uVar8;
          *plVar12 = lVar1;
          _memcpy();
          if (plVar6 != (long *)0x0) {
            __ZdlPv(plVar6);
          }
        }
        plVar12 = plVar12 + 1;
        FUN_1093c8774(plVar5,plVar12,(long)plVar12 - (long)plVar5 >> 3);
      }
      puVar15 = puVar15 + 1;
      lVar16 = lVar16 + 0x100000000;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + -8;
      plVar6 = plVar5;
    } while (lVar11 != 0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    iStack_64 = iVar10;
    for (; plVar5 != plVar12; plVar12 = plVar12 + -1) {
      FUN_10923b3a0(param_1,(long)plVar5 + 4);
      lVar16 = (long)plVar12 - (long)plVar5 >> 3;
      if (1 < lVar16) {
        lVar11 = *plVar5;
        plVar14 = plVar5;
        uVar7 = 0;
        do {
          plVar6 = plVar14 + uVar7 + 1;
          uVar2 = uVar7 << 1 | 1;
          uVar8 = uVar7 * 2 + 2;
          uVar9 = uVar2;
          if ((long)uVar8 < lVar16) {
            lVar3 = *plVar6;
            lVar1 = 8;
            if ((int)lVar3 <= (int)plVar14[uVar7 + 2]) {
              lVar1 = 0;
            }
            plVar6 = (long *)((long)plVar6 + lVar1);
            uVar9 = uVar8;
            if ((int)lVar3 <= (int)plVar14[uVar7 + 2]) {
              uVar9 = uVar2;
            }
          }
          *plVar14 = *plVar6;
          plVar14 = plVar6;
          uVar7 = uVar9;
        } while ((long)uVar9 <= (long)(lVar16 - 2U >> 1));
        plVar14 = plVar12 + -1;
        if (plVar6 == plVar14) {
          *plVar6 = lVar11;
        }
        else {
          *plVar6 = *plVar14;
          *plVar14 = lVar11;
          FUN_1093c8774(plVar5,plVar6 + 1,(long)(plVar6 + 1) - (long)plVar5 >> 3);
        }
      }
    }
  }
  if (param_3 != 0) {
    iStack_64 = -1;
    if ((*(ulong *)(param_2 + 0x18) & 1) != 0) {
      puVar13 = (ulong *)(*(ulong *)(param_2 + 0x18) + 7);
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar16 = (long)*(int *)(param_2 + 0x20) << 3;
      do {
        iStack_64 = iStack_64 + 1;
        if ((*(byte *)(*puVar13 + 0x12) & 1) == 0) {
          FUN_10923b3a0(param_1,&iStack_64);
        }
        puVar13 = puVar13 + 1;
        lVar16 = lVar16 + -8;
      } while (lVar16 != 0);
    }
  }
  if (plVar5 != (long *)0x0) {
    __ZdlPv(plVar5);
  }
  return;
}



/* Entry: 1093bd394; end: 1093bd52f;  */

ulong FUN_1093bd394(long *param_1,uint param_2,long param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar11 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_3 + 0x20))) {
    puVar10 = (ulong *)(param_3 + 0x18);
    uVar9 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    puVar1 = puVar10;
    if ((*puVar10 & 1) != 0) {
      puVar1 = (ulong *)(*puVar10 + (ulong)param_2 * 8 + 7);
    }
    uVar11 = *puVar1;
    if (uVar9 != 0) {
      if (0 < *(int *)(uVar11 + 0x50)) {
        lVar13 = 0;
        lVar12 = 8;
        do {
          uVar9 = *(ulong *)(uVar11 + 0x48);
          puVar1 = (ulong *)(uVar11 + 0x48);
          if ((uVar9 & 1) != 0) {
            puVar1 = (ulong *)(uVar9 + lVar12 + -1);
          }
          if ((*(byte *)(*puVar1 + 0x10) & 1) != 0) {
            uVar9 = *(ulong *)(*puVar1 + 0xb0);
            if ((uVar9 & 3) == 0) {
              ppuVar8 = ppuRam00000001132d06b0;
              if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                ppuVar8 = &PTR_DAT_1132d0698;
                func_0x00010b4befb0();
              }
            }
            else {
              ppuVar8 = (undefined **)(uVar9 & 0xfffffffffffffffc);
            }
            bVar5 = *(byte *)((long)ppuVar8 + 0x17);
            puVar2 = ppuVar8[1];
            if (-1 < (char)bVar5) {
              puVar2 = (undefined *)(ulong)bVar5;
            }
            bVar6 = *(byte *)((long)param_1 + 0x17);
            puVar3 = (undefined *)param_1[1];
            if (-1 < (char)bVar6) {
              puVar3 = (undefined *)(ulong)bVar6;
            }
            if (puVar2 == puVar3) {
              ppuVar7 = (undefined **)*ppuVar8;
              if (-1 < (char)bVar5) {
                ppuVar7 = ppuVar8;
              }
              plVar4 = (long *)*param_1;
              if (-1 < (char)bVar6) {
                plVar4 = param_1;
              }
              _memcmp(ppuVar7,plVar4);
              if ((int)ppuVar7 == 0) {
                if ((*puVar10 & 1) != 0) {
                  puVar10 = (ulong *)(*puVar10 + (ulong)param_2 * 8 + 7);
                }
                uVar11 = *(ulong *)(*puVar10 + 0x48);
                puVar10 = (ulong *)(*puVar10 + 0x48);
                if ((uVar11 & 1) != 0) {
                  puVar10 = (ulong *)(uVar11 + lVar12 + -1);
                }
                return *puVar10;
              }
            }
          }
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 8;
        } while (lVar13 < *(int *)(uVar11 + 0x50));
      }
      uVar11 = 0;
    }
  }
  return uVar11;
}


