/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c4fe50; end: 104c4fe5f;  */

void FUN_104c4fe50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c4fe60; end: 104c4fe7f;  */

void FUN_104c4fe60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec088;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c4fe80; end: 104c4fe93;  */

void FUN_104c4fe80(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  uVar1 = *puVar2 & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar1 + 8);
  }
  __ZdlPv(uVar1);
  *puVar2 = 0;
  return;
}



/* Entry: 104c4fe94; end: 104c4ffab;  */

long FUN_104c4fe94(long param_1)

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



/* Entry: 104c4ffac; end: 104c50043;  */

undefined8 * FUN_104c4ffac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec0d8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000100051010(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c50044; end: 104c500bb;  */

void FUN_104c50044(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec0d8;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000100051010(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c500bc; end: 104c5015b;  */

long FUN_104c500bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c500f8;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c500f8:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c5015c; end: 104c5019b;  */

long * FUN_104c5015c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uStack_14;
  
  uStack_14 = **(undefined4 **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14);
    return plVar1;
  }
  FUN_104c501e4();
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec138);
  plVar1 = plVar1 + 1;
  if ((int)param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 104c5019c; end: 104c501d7;  */

long FUN_104c5019c(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec138);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c501d8; end: 104c501e3;  */

undefined ** FUN_104c501d8(void)

{
  return &PTR_DAT_1107ec138;
}



/* Entry: 104c501e4; end: 104c50217;  */

undefined ** FUN_104c501e4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *apuStack_50 [3];
  long lStack_38;
  
  ppuVar1 = (undefined **)0x8;
  ___cxa_allocate_exception();
  *ppuVar1 = (undefined *)&PTR_FUN_1107e9838;
  ppuVar4 = &PTR_DAT_1107e9810;
  ___cxa_throw();
  ppuVar3 = apuStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar4;
  if (ppuVar4 != ppuVar1) {
    ppuVar2 = (undefined **)ppuVar1[3];
    ppuVar6 = (undefined **)ppuVar4[3];
    if (ppuVar2 == ppuVar1) {
      if (ppuVar6 == ppuVar4) {
        (**(code **)(*ppuVar2 + 0x18))(ppuVar2,apuStack_50);
        (**(code **)(*(long *)ppuVar1[3] + 0x20))();
        ppuVar1[3] = (undefined *)0x0;
        (**(code **)(*(long *)ppuVar4[3] + 0x18))(ppuVar4[3],ppuVar1);
        (**(code **)(*(long *)ppuVar4[3] + 0x20))();
        ppuVar4[3] = (undefined *)0x0;
        ppuVar1[3] = (undefined *)ppuVar1;
        (**(code **)(apuStack_50[0] + 0x18))(apuStack_50);
        (**(code **)(apuStack_50[0] + 0x20))();
      }
      else {
        (**(code **)(*ppuVar2 + 0x18))();
        ppuVar3 = (undefined **)ppuVar1[3];
        (**(code **)(*ppuVar3 + 0x20))();
        ppuVar1[3] = ppuVar4[3];
      }
      ppuVar4[3] = (undefined *)ppuVar4;
      ppuVar1 = ppuVar3;
    }
    else if (ppuVar6 == ppuVar4) {
      ppuVar5 = ppuVar1;
      (**(code **)(*ppuVar6 + 0x18))(ppuVar6);
      ppuVar3 = (undefined **)ppuVar4[3];
      (**(code **)(*ppuVar3 + 0x20))();
      ppuVar4[3] = ppuVar1[3];
      ppuVar1[3] = (undefined *)ppuVar1;
      ppuVar1 = ppuVar3;
    }
    else {
      ppuVar1[3] = (undefined *)ppuVar6;
      ppuVar4[3] = (undefined *)ppuVar2;
      ppuVar1 = ppuVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  if ((int)ppuVar5 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  ppuVar4 = (undefined **)ppuVar5[3];
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar1[3] = (undefined *)0x0;
  }
  else if (ppuVar4 == ppuVar5) {
    ppuVar1[3] = (undefined *)ppuVar1;
    (**(code **)(*(long *)ppuVar5[3] + 0x18))(ppuVar5[3],ppuVar1);
  }
  else {
    (**(code **)(*ppuVar4 + 0x10))();
    ppuVar1[3] = (undefined *)ppuVar4;
  }
  return ppuVar1;
}



/* Entry: 104c50218; end: 104c50383;  */

long * FUN_104c50218(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar4 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar4 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar4 == param_2) {
      plVar3 = param_1;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar4;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)plVar3 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  plVar2 = (long *)plVar3[3];
  if (plVar2 == (long *)0x0) {
    param_1[3] = 0;
  }
  else if (plVar2 == plVar3) {
    param_1[3] = (long)param_1;
    (**(code **)(*(long *)plVar3[3] + 0x18))((long *)plVar3[3],param_1);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[3] = (long)plVar2;
  }
  return param_1;
}



/* Entry: 104c50384; end: 104c503e7;  */

long FUN_104c50384(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 104c503e8; end: 104c50553;  */

void FUN_104c503e8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  *param_1 = (long)&PTR_FUN_1107ec158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c50554; end: 104c50563;  */

void FUN_104c50554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c50564; end: 104c50583;  */

void FUN_104c50564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec158;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c50584; end: 104c5058f;  */

long FUN_104c50584(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0cd38(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 104c50590; end: 104c5070b;  */

long FUN_104c50590(long param_1)

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



/* Entry: 104c5070c; end: 104c507a3;  */

undefined8 * FUN_104c5070c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec1a8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c505e8(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c507a4; end: 104c5081b;  */

void FUN_104c507a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec1a8;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c505e8(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c5081c; end: 104c508bb;  */

long FUN_104c5081c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c50858;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c50858:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c508bc; end: 104c50997;  */

void FUN_104c508bc(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  FUN_104c509e0(&lStack_40,(long)*(int *)(*(long *)(param_1 + 8) + 0x18));
  FUN_104c50a84(auStack_58,(long)*(int *)(*(long *)(param_1 + 8) + 0x18));
  FUN_104c57840(&lStack_40,auStack_58,*(long *)(param_1 + 8) + 0x10);
  lStack_68 = lStack_40;
  uStack_60 = (undefined4)((ulong)(lStack_38 - lStack_40) >> 6);
  uStack_24 = **(undefined4 **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_24,&lStack_68);
    FUN_104c50b20(auStack_58);
    if (lStack_40 != 0) {
      __ZdlPv(lStack_40);
    }
    return;
  }
  FUN_104c501e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c5096c);
  (*pcVar1)();
}



/* Entry: 104c50998; end: 104c509d3;  */

long FUN_104c50998(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec208);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c509d4; end: 104c509df;  */

undefined ** FUN_104c509d4(void)

{
  return &PTR_DAT_1107ec208;
}



/* Entry: 104c509e0; end: 104c50a6f;  */

long * FUN_104c509e0(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3a != 0) {
      FUN_104c50a70();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c50a54);
      (*pcVar1)();
    }
    lVar2 = param_2 * 0x40;
    __Znwm();
    *param_1 = lVar2;
    param_1[2] = lVar2 + param_2 * 0x40;
    _bzero();
    param_1[1] = lVar2 + param_2 * 0x40;
  }
  return param_1;
}



/* Entry: 104c50a70; end: 104c50a83;  */

long * FUN_104c50a70(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_104c4f6cc();
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
      FUN_104c50b0c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c50af8);
      (*pcVar1)();
    }
    lVar3 = param_2 * 0x10;
    __Znwm();
    *plVar2 = lVar3;
    plVar2[2] = lVar3 + param_2 * 0x10;
    _bzero();
    plVar2[1] = lVar3 + param_2 * 0x10;
  }
  return plVar2;
}



/* Entry: 104c50a84; end: 104c50b0b;  */

long * FUN_104c50a84(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
      FUN_104c50b0c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c50af8);
      (*pcVar1)();
    }
    lVar2 = param_2 * 0x10;
    __Znwm();
    *param_1 = lVar2;
    param_1[2] = lVar2 + param_2 * 0x10;
    _bzero();
    param_1[1] = lVar2 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 104c50b0c; end: 104c50b1f;  */

void FUN_104c50b0c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_104c4f6cc();
  lVar7 = *plVar4;
  if (lVar7 != 0) {
    lVar8 = plVar4[1];
    lVar5 = lVar7;
    if (lVar8 != lVar7) {
      do {
        plVar6 = *(long **)(lVar8 + -8);
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
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != lVar7);
      lVar5 = *plVar4;
    }
    plVar4[1] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5);
    return;
  }
  return;
}



/* Entry: 104c50b20; end: 104c50bb7;  */

void FUN_104c50b20(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar7 = param_1[1];
    lVar4 = lVar6;
    if (lVar7 != lVar6) {
      do {
        plVar5 = *(long **)(lVar7 + -8);
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
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != lVar6);
      lVar4 = *param_1;
    }
    param_1[1] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 104c50bb8; end: 104c50bc7;  */

void FUN_104c50bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec228;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c50bc8; end: 104c50be7;  */

void FUN_104c50bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec228;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c50be8; end: 104c50bfb;  */

void FUN_104c50be8(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)(param_1 + 0x20);
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  uVar1 = *puVar2 & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar1 + 8);
  }
  __ZdlPv(uVar1);
  *puVar2 = 0;
  return;
}



/* Entry: 104c50bfc; end: 104c50d13;  */

long FUN_104c50bfc(long param_1)

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



/* Entry: 104c50d14; end: 104c50dab;  */

undefined8 * FUN_104c50d14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec278;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000100051010(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c50dac; end: 104c50e23;  */

void FUN_104c50dac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec278;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000100051010(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c50e24; end: 104c50ec3;  */

long FUN_104c50e24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c50e60;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c50e60:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c50ec4; end: 104c50f03;  */

long * FUN_104c50ec4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uStack_14;
  
  uStack_14 = **(undefined4 **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14);
    return plVar1;
  }
  FUN_104c501e4();
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec2d8);
  plVar1 = plVar1 + 1;
  if ((int)param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 104c50f04; end: 104c50f3f;  */

long FUN_104c50f04(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec2d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c50f40; end: 104c50f5b;  */

undefined ** FUN_104c50f40(void)

{
  return &PTR_DAT_1107ec2d8;
}



/* Entry: 104c50f5c; end: 104c50f7b;  */

void FUN_104c50f5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec2f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c50f7c; end: 104c50f87;  */

long FUN_104c50f7c(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0ca80(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 104c50f88; end: 104c51103;  */

long FUN_104c50f88(long param_1)

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



/* Entry: 104c51104; end: 104c5119b;  */

undefined8 * FUN_104c51104(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec348;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c50fe0(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c5119c; end: 104c51213;  */

void FUN_104c5119c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec348;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c50fe0(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c51214; end: 104c512b3;  */

long FUN_104c51214(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c51250;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c51250:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c512b4; end: 104c5139b;  */

void FUN_104c512b4(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  FUN_104c509e0(&lStack_40,(long)*(int *)(*(long *)(param_1 + 8) + 0x18));
  FUN_104c50a84(auStack_58,(long)*(int *)(*(long *)(param_1 + 8) + 0x18));
  FUN_104c57840(&lStack_40,auStack_58,*(long *)(param_1 + 8) + 0x10);
  lStack_68 = lStack_40;
  uStack_60 = (undefined4)((ulong)(lStack_38 - lStack_40) >> 6);
  uStack_24 = **(undefined4 **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))
              (plVar2,&uStack_24,&lStack_68,
               *(ulong *)(*(long *)(param_1 + 8) + 0x28) & 0xfffffffffffffffc);
    FUN_104c50b20(auStack_58);
    if (lStack_40 != 0) {
      __ZdlPv(lStack_40);
    }
    return;
  }
  FUN_104c501e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c51370);
  (*pcVar1)();
}



/* Entry: 104c5139c; end: 104c513d7;  */

long FUN_104c5139c(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec3a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c513d8; end: 104c513f3;  */

undefined ** FUN_104c513d8(void)

{
  return &PTR_DAT_1107ec3a8;
}



/* Entry: 104c513f4; end: 104c51413;  */

void FUN_104c513f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec3c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c51414; end: 104c5141f;  */

long FUN_104c51414(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0b164(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 104c51420; end: 104c5159b;  */

long FUN_104c51420(long param_1)

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



/* Entry: 104c5159c; end: 104c51633;  */

undefined8 * FUN_104c5159c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec418;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c51478(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c51634; end: 104c516ab;  */

void FUN_104c51634(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec418;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c51478(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c516ac; end: 104c517f3;  */

long FUN_104c516ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c516e8;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c516e8:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c517f4; end: 104c517ff;  */

undefined ** FUN_104c517f4(void)

{
  return &PTR_DAT_1107ec478;
}



/* Entry: 104c51800; end: 104c51b4f;  */

undefined8 * FUN_104c51800(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  *param_1 = &PTR_FUN_1107ec510;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_b0 = 2;
  uStack_a8 = 0;
  lStack_a0 = 0;
  FUN_104c4f3d4(param_1 + 3,&uStack_b0);
  param_1[0x13] = 0;
  param_1[0x12] = param_1 + 0x13;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x16);
  func_0x00010002d4d8(&uStack_b0,PTR_DAT_11330a920);
  func_0x00010002d4d8(auStack_98,"");
  func_0x00010002d4d8(auStack_80,"");
  func_0x00010046d324(auStack_60,&uStack_b0);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  FUN_104ae386c(&uStack_b0,param_2,auStack_60);
  plVar4 = (long *)CONCAT44(uStack_a4,uStack_a8);
  uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
  uStack_d0 = uStack_b0;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
  func_0x00010ae90418(&uStack_b8,&uStack_d0,&uStack_d8);
  func_0x000104c52794(param_1 + 2,uStack_b8);
  uStack_b8 = 0;
  if (plVar4 != (long *)0x0) {
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
  plVar4 = (long *)CONCAT44(uStack_a4,uStack_a8);
  uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
  uStack_d0 = uStack_b0;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
  func_0x00010ae8cd80(&uStack_b8,&uStack_d0,&uStack_d8);
  func_0x000104c52758(param_1 + 1,uStack_b8);
  uStack_b8 = 0;
  if (plVar4 != (long *)0x0) {
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
  plVar4 = (long *)CONCAT44(uStack_a4,uStack_a8);
  if (plVar4 != (long *)0x0) {
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
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return param_1;
}



/* Entry: 104c51b50; end: 104c51b5f;  */

void FUN_104c51b50(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uStack_40;
  char cStack_31;
  
  lVar1 = param_1 + 0x18;
  uVar4 = 1;
  plVar2 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
  lVar3 = lVar1;
  func_0x000100491574(lVar1,&uStack_40,&cStack_31,plVar2,uVar4);
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0xb0);
  if ((int)lVar3 == 1) {
    do {
      if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
        if (cStack_31 == '\x01') {
          FUN_104c617e8(lVar1,uStack_40,1);
        }
        else {
          ppuVar5 = &PTR_PTR_1130a8c68;
          func_0x00010ae079a0(0,&PTR_PTR_1130a8c68);
          func_0x00010ae07cd4(ppuVar5,&PTR_PTR_1130a8c68);
        }
      }
      __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0xb0);
      uVar4 = 1;
      plVar2 = plRam0000000113815c70;
      (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
      lVar3 = lVar1;
      func_0x000100491574(lVar1,&uStack_40,&cStack_31,plVar2,uVar4);
      __ZNSt3__115recursive_mutex4lockEv(param_1 + 0xb0);
    } while ((int)lVar3 == 1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x98);
  func_0x000104c4f550(param_1 + 0x90,*puVar6);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 **)(param_1 + 0x90) = puVar6;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0xb0);
  return;
}



/* Entry: 104c51b60; end: 104c520b3;  */

undefined *****
FUN_104c51b60(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6,undefined1 param_7,undefined4 param_8,long *param_9,undefined8 param_10)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint *puVar9;
  undefined *****pppppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *****pppppuVar13;
  long lVar14;
  int iVar15;
  undefined ****ppppuVar16;
  long lVar17;
  long lVar18;
  undefined ****ppppuVar19;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined *puStack_170;
  undefined ****ppppuStack_168;
  undefined ****ppppuStack_160;
  undefined ****ppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined ****ppppuStack_120;
  undefined ****ppppuStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  uint *puStack_100;
  undefined *apuStack_f8 [3];
  undefined **ppuStack_e0;
  undefined ****ppppuStack_d0;
  undefined ****ppppuStack_c8;
  uint *puStack_c0;
  undefined *puStack_b8;
  undefined2 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  uStack_128 = param_3;
  FUN_104c520b4(param_1,param_2,1);
  pppppuVar10 = (undefined *****)0x50;
  __Znwm();
  pppppuVar13 = pppppuVar10 + 1;
  *pppppuVar13 = (undefined ****)0x0;
  pppppuVar10[2] = (undefined ****)0x0;
  ppppuStack_120 = (undefined ****)(pppppuVar10 + 3);
  *ppppuStack_120 = (undefined ***)&PTR_DAT_110c778e8;
  *pppppuVar10 = (undefined ****)&PTR_FUN_1107ec578;
  pppppuVar10[4] = (undefined ****)0x0;
  pppppuVar10[5] = (undefined ****)&DAT_11383d918;
  pppppuVar10[6] = (undefined ****)&DAT_11383d918;
  pppppuVar10[7] = (undefined ****)&DAT_11383d918;
  *(undefined4 *)(pppppuVar10 + 9) = 0;
  pppppuVar10[8] = (undefined ****)0x0;
  ppppuStack_118 = (undefined ****)pppppuVar10;
  if (param_9[3] == 0) goto LAB_104c51e24;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
    if (bVar8) {
      *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uStack_138 = param_4;
  uStack_12c = param_8;
  ppppuStack_110 = ppppuStack_120;
  ppppuStack_108 = (undefined ****)pppppuVar10;
  puStack_100 = puVar9;
  func_0x000104c52864(apuStack_f8,param_9);
  ppppuStack_c8 = ppppuStack_108;
  ppppuStack_d0 = ppppuStack_110;
  ppppuStack_110 = (undefined ****)0x0;
  ppppuStack_108 = (undefined ****)0x0;
  puStack_c0 = puStack_100;
  uStack_a0 = ppuStack_e0;
  if (ppuStack_e0 != (undefined **)0x0) {
    if (ppuStack_e0 == apuStack_f8) {
      uStack_a0 = &puStack_b8;
      (**(code **)(*ppuStack_e0 + 0x18))(ppuStack_e0,&puStack_b8);
    }
    else {
      ppuVar11 = ppuStack_e0;
      (**(code **)(*ppuStack_e0 + 0x10))();
      uStack_a0 = ppuVar11;
    }
  }
  param_9 = (long *)0x40;
  __Znwm();
  param_9[2] = (long)ppppuStack_c8;
  param_9[1] = (long)ppppuStack_d0;
  *param_9 = (long)&PTR_DAT_1107ec5c8;
  ppppuStack_d0 = (undefined ****)0x0;
  ppppuStack_c8 = (undefined ****)0x0;
  param_9[3] = (long)puStack_c0;
  ppuVar11 = uStack_a0;
  if (uStack_a0 == (undefined **)0x0) {
LAB_104c51cec:
    param_9[7] = (long)ppuVar11;
  }
  else {
    if (uStack_a0 != &puStack_b8) {
      (**(code **)(*uStack_a0 + 0x10))();
      goto LAB_104c51cec;
    }
    param_9[7] = (long)(param_9 + 4);
    (**(code **)(*uStack_a0 + 0x18))();
  }
  plStack_78 = param_9;
  FUN_104c50218(alStack_90,puVar9 + 0x80);
  if (plStack_78 == alStack_90) {
    lVar18 = 0x20;
LAB_104c51d38:
    (**(code **)(*plStack_78 + lVar18))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_104c51d38;
  }
  param_4 = uStack_138;
  if (uStack_a0 == &puStack_b8) {
    lVar18 = 0x20;
LAB_104c51d78:
    (**(code **)(*uStack_a0 + lVar18))();
  }
  else if (uStack_a0 != (undefined **)0x0) {
    lVar18 = 0x28;
    goto LAB_104c51d78;
  }
  ppppuVar16 = ppppuStack_c8;
  if (ppppuStack_c8 != (undefined ****)0x0) {
    plVar1 = (long *)(ppppuStack_c8 + 1);
    do {
      lVar18 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)((long)*ppppuStack_c8 + 0x10))(ppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar16);
    }
  }
  param_8 = uStack_12c;
  if (ppuStack_e0 == apuStack_f8) {
    lVar18 = 0x20;
LAB_104c51de0:
    (**(code **)(*ppuStack_e0 + lVar18))();
  }
  else if (ppuStack_e0 != (undefined **)0x0) {
    lVar18 = 0x28;
    goto LAB_104c51de0;
  }
  ppppuVar16 = ppppuStack_108;
  if (ppppuStack_108 != (undefined ****)0x0) {
    plVar1 = (long *)(ppppuStack_108 + 1);
    do {
      lVar18 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)((long)*ppppuStack_108 + 0x10))(ppppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar16);
    }
  }
LAB_104c51e24:
  func_0x000104c4de38(puVar9 + 0x88,param_10);
  ppppuStack_d0 = (undefined ****)&PTR_DAT_110c77938;
  ppppuStack_c8 = (undefined ****)0x0;
  puStack_c0 = (uint *)&DAT_11383d918;
  puStack_b8 = &DAT_11383d918;
  uStack_a0 = (undefined **)0x0;
  uStack_b0 = 0;
  func_0x0001001a53d4(&puStack_c0,uStack_128,0);
  ppppuVar16 = ppppuStack_c8;
  if (((ulong)ppppuStack_c8 & 1) != 0) {
    ppppuVar16 = *(undefined *****)((ulong)ppppuStack_c8 & 0xfffffffffffffffe);
  }
  func_0x0001001a53d4(&puStack_b8,param_4,ppppuVar16);
  uVar2 = *(ulong *)(param_6 + 8);
  if (-1 < (char)*(byte *)(param_6 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_6 + 0x17);
  }
  if (uVar2 == 0) {
    if (uStack_a0._4_4_ != 4) {
      if (uStack_a0._4_4_ - 3U < 2) {
        func_0x000100067de0(&puStack_a8);
      }
      uStack_a0 = (undefined **)CONCAT44(4,(undefined4)uStack_a0);
      puStack_a8 = &DAT_11383d918;
    }
    ppppuVar16 = ppppuStack_c8;
    if (((ulong)ppppuStack_c8 & 1) != 0) {
      ppppuVar16 = *(undefined *****)((ulong)ppppuStack_c8 & 0xfffffffffffffffe);
    }
  }
  else {
    if (uStack_a0._4_4_ != 3) {
      if (uStack_a0._4_4_ - 3U < 2) {
        func_0x000100067de0(&puStack_a8);
      }
      uStack_a0 = (undefined **)CONCAT44(3,(undefined4)uStack_a0);
      puStack_a8 = &DAT_11383d918;
    }
    ppppuVar16 = ppppuStack_c8;
    param_5 = param_6;
    if (((ulong)ppppuStack_c8 & 1) != 0) {
      ppppuVar16 = (undefined ****)*(ulong *)((ulong)ppppuStack_c8 & 0xfffffffffffffffe);
    }
  }
  func_0x0001001a53d4(&puStack_a8,param_5,ppppuVar16);
  uStack_b0 = CONCAT11((char)param_8,param_7);
  lVar12 = *(long *)(*(long *)(param_1 + 2) + 8);
  func_0x00010ae8d1c8(lVar12,param_1 + 6,*(long *)(param_1 + 2) + 0x48,puVar9 + 2,&ppppuStack_d0);
  *(undefined1 *)(lVar12 + 0x40) = 1;
  lVar14 = *(long *)(lVar12 + 8);
  lVar17 = *(long *)(lVar12 + 0x48);
  bVar4 = *(byte *)(lVar14 + 1);
  bVar5 = *(byte *)(lVar14 + 2);
  bVar6 = *(byte *)(lVar14 + 0x150);
  *(undefined1 *)(lVar17 + 0x20) = 0;
  *(undefined1 *)(lVar17 + 1) = 1;
  *(uint *)(lVar17 + 4) = (uint)bVar4 << 5 | (uint)bVar5 << 7 | (uint)bVar6 << 8;
  *(long *)(lVar17 + 0x10) = lVar14 + 0xb8;
  lVar18 = lVar12 + 0x10;
  puStack_140 = puVar9;
  func_0x000100612c04(lVar12 + 0x78,lVar14,lVar18,*(undefined1 *)(lVar12 + 0x41),lVar17,
                      lVar12 + 0x50,ppppuStack_120,puVar9 + 0x72);
  iVar15 = (int)lVar18;
  uVar3 = *puVar9;
  pppppuVar10 = &ppppuStack_d0;
  func_0x00010ae07e28();
  ppppuVar16 = ppppuStack_118;
  if ((undefined *****)ppppuStack_118 != (undefined *****)0x0) {
    pppppuVar13 = (undefined *****)(ppppuStack_118 + 1);
    do {
      ppppuVar19 = *pppppuVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar8) {
        *pppppuVar13 = (undefined ****)((long)ppppuVar19 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppuVar19 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_118)[2])(ppppuStack_118);
      pppppuVar10 = (undefined *****)ppppuVar16;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x000104c5280c(&ppppuStack_d0);
    __ZdlPv(param_9);
    FUN_104c521a8(&ppppuStack_d0);
    FUN_104c521a8(&ppppuStack_110);
    func_0x000104c5280c(&ppppuStack_120);
    pppppuVar13 = pppppuVar10;
    __Unwind_Resume(pppppuVar10);
    puStack_170 = &DAT_11383d918;
    ppppuStack_160 = ppppuVar16;
    pcStack_148 = FUN_104c520b4;
    pppppuVar13 = pppppuVar13 + 3;
    ppppuStack_168 = (undefined ****)&ppppuStack_d0;
    ppppuStack_158 = (undefined ****)pppppuVar10;
    puStack_150 = &stack0xfffffffffffffff0;
    FUN_104c61c28(pppppuVar13);
    if (iVar15 == 0) {
      func_0x00010002d4d8(auStack_188,"authorization");
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_1a0,"Bearer ",lVar14);
      func_0x0001004b5d48(pppppuVar13 + 1,auStack_188,auStack_1a0);
      if (cStack_189 < '\0') {
        __ZdlPv(auStack_1a0[0]);
      }
    }
    else {
      func_0x00010002d4d8(auStack_188,"x-snap-access-token");
      func_0x0001004b5d48(pppppuVar13 + 1,auStack_188,lVar14);
    }
    if (cStack_171 < '\0') {
      __ZdlPv(auStack_188[0]);
    }
    return pppppuVar13;
  }
  return (undefined *****)(ulong)uVar3;
}



/* Entry: 104c520b4; end: 104c521a7;  */

long FUN_104c520b4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1 = param_1 + 0x18;
  FUN_104c61c28(param_1);
  if (param_3 == 0) {
    func_0x00010002d4d8(auStack_48,"authorization");
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_60,"Bearer ",param_2);
    func_0x0001004b5d48(param_1 + 8,auStack_48,auStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  else {
    func_0x00010002d4d8(auStack_48,"x-snap-access-token");
    func_0x0001004b5d48(param_1 + 8,auStack_48,param_2);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 104c521a8; end: 104c521f3;  */

long FUN_104c521a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c5280c;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c5280c:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
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
  return param_1;
}



/* Entry: 104c521f4; end: 104c5266b;  */

undefined ******
FUN_104c521f4(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  undefined ******ppppppuVar2;
  undefined *****pppppuVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  uint *puVar10;
  undefined ******ppppppuVar11;
  undefined **ppuVar12;
  undefined ******ppppppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *****pppppuVar17;
  undefined ****ppppuVar18;
  long *unaff_x28;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  uint *puStack_100;
  undefined *apuStack_f8 [3];
  undefined **ppuStack_e0;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  uint *puStack_c0;
  undefined *puStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_ac;
  undefined **ppuStack_a0;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  FUN_104c520b4(param_1,param_2,0);
  ppppppuVar11 = (undefined ******)0x48;
  __Znwm();
  ppppppuVar13 = ppppppuVar11 + 1;
  *ppppppuVar13 = (undefined *****)0x0;
  ppppppuVar11[2] = (undefined *****)0x0;
  *ppppppuVar11 = (undefined *****)&PTR_DAT_1107ec648;
  pppppuStack_120 = (undefined *****)(ppppppuVar11 + 3);
  *pppppuStack_120 = (undefined ****)&PTR_DAT_110c77a48;
  ppppppuVar11[4] = (undefined *****)0x0;
  ppppppuVar11[5] = (undefined *****)&DAT_11383d918;
  *(undefined4 *)(ppppppuVar11 + 8) = 0;
  ppppppuVar11[6] = (undefined *****)&DAT_11383d918;
  ppppppuVar11[7] = (undefined *****)0x0;
  pppppuStack_118 = (undefined *****)ppppppuVar11;
  if (*(long *)(param_7 + 0x18) != 0) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
      if (bVar9) {
        *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    pppppuStack_110 = pppppuStack_120;
    pppppuStack_108 = (undefined *****)ppppppuVar11;
    puStack_100 = puVar10;
    func_0x000104c52864(apuStack_f8,param_7);
    pppppuStack_c8 = pppppuStack_108;
    pppppuStack_d0 = pppppuStack_110;
    pppppuStack_110 = (undefined *****)0x0;
    pppppuStack_108 = (undefined *****)0x0;
    puStack_c0 = puStack_100;
    ppuStack_a0 = ppuStack_e0;
    if (ppuStack_e0 != (undefined **)0x0) {
      if (ppuStack_e0 == apuStack_f8) {
        ppuStack_a0 = &puStack_b8;
        (**(code **)(*ppuStack_e0 + 0x18))(ppuStack_e0,&puStack_b8);
      }
      else {
        ppuVar12 = ppuStack_e0;
        (**(code **)(*ppuStack_e0 + 0x10))();
        ppuStack_a0 = ppuVar12;
      }
    }
    unaff_x28 = (long *)0x40;
    __Znwm();
    unaff_x28[2] = (long)pppppuStack_c8;
    unaff_x28[1] = (long)pppppuStack_d0;
    *unaff_x28 = (long)&PTR_DAT_1107ec698;
    pppppuStack_d0 = (undefined *****)0x0;
    pppppuStack_c8 = (undefined *****)0x0;
    unaff_x28[3] = (long)puStack_c0;
    ppuVar12 = ppuStack_a0;
    if (ppuStack_a0 == (undefined **)0x0) {
LAB_104c5236c:
      unaff_x28[7] = (long)ppuVar12;
    }
    else {
      if (ppuStack_a0 != &puStack_b8) {
        (**(code **)(*ppuStack_a0 + 0x10))();
        goto LAB_104c5236c;
      }
      unaff_x28[7] = (long)(unaff_x28 + 4);
      (**(code **)(*ppuStack_a0 + 0x18))();
    }
    plStack_78 = unaff_x28;
    FUN_104c50218(alStack_90,puVar10 + 0x80);
    if (plStack_78 == alStack_90) {
      lVar16 = 0x20;
LAB_104c523b8:
      (**(code **)(*plStack_78 + lVar16))();
    }
    else if (plStack_78 != (long *)0x0) {
      lVar16 = 0x28;
      goto LAB_104c523b8;
    }
    if (ppuStack_a0 == &puStack_b8) {
      lVar16 = 0x20;
LAB_104c523e0:
      (**(code **)(*ppuStack_a0 + lVar16))();
    }
    else if (ppuStack_a0 != (undefined **)0x0) {
      lVar16 = 0x28;
      goto LAB_104c523e0;
    }
    pppppuVar17 = pppppuStack_c8;
    if (pppppuStack_c8 != (undefined *****)0x0) {
      plVar1 = (long *)(pppppuStack_c8 + 1);
      do {
        lVar16 = *plVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar16 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar16 == 0) {
        (**(code **)((long)*pppppuStack_c8 + 0x10))(pppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
      }
    }
    if (ppuStack_e0 == apuStack_f8) {
      lVar16 = 0x20;
LAB_104c52448:
      (**(code **)(*ppuStack_e0 + lVar16))();
    }
    else if (ppuStack_e0 != (undefined **)0x0) {
      lVar16 = 0x28;
      goto LAB_104c52448;
    }
    pppppuVar17 = pppppuStack_108;
    if (pppppuStack_108 != (undefined *****)0x0) {
      plVar1 = (long *)(pppppuStack_108 + 1);
      do {
        lVar16 = *plVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar16 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar16 == 0) {
        (**(code **)((long)*pppppuStack_108 + 0x10))(pppppuStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
      }
    }
  }
  func_0x000104c4de38(puVar10 + 0x88,param_8);
  pppppuStack_d0 = (undefined *****)&PTR_DAT_110c77a98;
  pppppuStack_c8 = (undefined *****)0x0;
  puStack_c0 = (uint *)&DAT_11383d918;
  puStack_b8 = &DAT_11383d918;
  uStack_ac = 0;
  uStack_b0 = 0;
  func_0x0001001a53d4(&puStack_c0,param_3,0);
  pppppuVar17 = pppppuStack_c8;
  if (((ulong)pppppuStack_c8 & 1) != 0) {
    pppppuVar17 = *(undefined ******)((ulong)pppppuStack_c8 & 0xfffffffffffffffe);
  }
  func_0x0001001a53d4(&puStack_b8,param_4,pppppuVar17);
  uStack_b0 = CONCAT11(param_6,param_5);
  lVar16 = *(long *)(*(long *)(param_1 + 4) + 8);
  func_0x00010ae90688(lVar16,param_1 + 6,*(long *)(param_1 + 4) + 0x28,puVar10 + 2,&pppppuStack_d0);
  *(undefined1 *)(lVar16 + 0x40) = 1;
  lVar14 = *(long *)(lVar16 + 8);
  lVar15 = *(long *)(lVar16 + 0x48);
  bVar5 = *(byte *)(lVar14 + 1);
  bVar6 = *(byte *)(lVar14 + 2);
  bVar7 = *(byte *)(lVar14 + 0x150);
  *(undefined1 *)(lVar15 + 0x20) = 0;
  *(undefined1 *)(lVar15 + 1) = 1;
  *(uint *)(lVar15 + 4) = (uint)bVar5 << 5 | (uint)bVar6 << 7 | (uint)bVar7 << 8;
  *(long *)(lVar15 + 0x10) = lVar14 + 0xb8;
  func_0x000100612c04(lVar16 + 0x78,lVar14,lVar16 + 0x10,*(undefined1 *)(lVar16 + 0x41),lVar15,
                      lVar16 + 0x50,pppppuStack_120,puVar10 + 0x72,puVar10);
  uVar4 = *puVar10;
  ppppppuVar11 = &pppppuStack_d0;
  func_0x00010ae08868();
  ppppppuVar13 = (undefined ******)pppppuStack_118;
  if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
    ppppppuVar2 = (undefined ******)(pppppuStack_118 + 1);
    do {
      pppppuVar17 = *ppppppuVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
      if (bVar9) {
        *ppppppuVar2 = (undefined *****)((long)pppppuVar17 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (pppppuVar17 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_118)[2])(pppppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar11 = ppppppuVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined ******)(ulong)uVar4;
  }
  ___stack_chk_fail();
  FUN_104c52c54(&pppppuStack_d0);
  __ZdlPv(unaff_x28);
  FUN_104c5266c(&pppppuStack_d0);
  FUN_104c5266c(&pppppuStack_110);
  FUN_104c52c54(&pppppuStack_120);
  __Unwind_Resume();
  ppppppuVar13 = (undefined ******)ppppppuVar11[6];
  if (ppppppuVar13 == ppppppuVar11 + 3) {
    lVar16 = 0x20;
  }
  else {
    if (ppppppuVar13 == (undefined ******)0x0) goto LAB_104c526a8;
    lVar16 = 0x28;
  }
  (**(code **)((long)*ppppppuVar13 + lVar16))();
LAB_104c526a8:
  pppppuVar17 = ppppppuVar11[1];
  if (pppppuVar17 != (undefined *****)0x0) {
    pppppuVar3 = pppppuVar17 + 1;
    do {
      ppppuVar18 = *pppppuVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
      if (bVar9) {
        *pppppuVar3 = (undefined ****)((long)ppppuVar18 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppuVar18 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar17)[2])(pppppuVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar17);
    }
  }
  return ppppppuVar11;
}



/* Entry: 104c5266c; end: 104c527cf;  */

long FUN_104c5266c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c52c54;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c52c54:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
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
  return param_1;
}



/* Entry: 104c527d0; end: 104c527df;  */

void FUN_104c527d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c527e0; end: 104c527ff;  */

void FUN_104c527e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec578;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c52800; end: 104c5280b;  */

long FUN_104c52800(long param_1)

{
  func_0x00010ae087bc();
  func_0x00010ae08350(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 104c5280c; end: 104c52987;  */

long FUN_104c5280c(long param_1)

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



/* Entry: 104c52988; end: 104c52a1f;  */

undefined8 * FUN_104c52988(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec5c8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c52864(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c52a20; end: 104c52a97;  */

void FUN_104c52a20(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec5c8;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c52864(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c52a98; end: 104c52b37;  */

long FUN_104c52a98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c52ad4;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c52ad4:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c52b38; end: 104c52bcf;  */

long * FUN_104c52b38(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  undefined4 uStack_14;
  
  lVar2 = *(long *)(param_1 + 8);
  uStack_38 = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uStack_38 + 0x17) < '\0') {
    uStack_38 = *(ulong *)uStack_38;
  }
  uStack_28 = *(ulong *)(lVar2 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uStack_28 + 0x17) < '\0') {
    uStack_28 = *(ulong *)uStack_28;
  }
  uStack_20 = *(ulong *)(lVar2 + 0x20) & 0xfffffffffffffffc;
  if (*(char *)(uStack_20 + 0x17) < '\0') {
    uStack_20 = *(ulong *)uStack_20;
  }
  uStack_30 = *(undefined8 *)(lVar2 + 0x28);
  uStack_14 = **(undefined4 **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14,&uStack_38);
    return plVar1;
  }
  FUN_104c501e4();
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec628);
  plVar1 = plVar1 + 1;
  if ((int)param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 104c52bd0; end: 104c52c0b;  */

long FUN_104c52bd0(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec628);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c52c0c; end: 104c52c27;  */

undefined ** FUN_104c52c0c(void)

{
  return &PTR_DAT_1107ec628;
}



/* Entry: 104c52c28; end: 104c52c47;  */

void FUN_104c52c28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec648;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c52c48; end: 104c52c53;  */

long FUN_104c52c48(long param_1)

{
  func_0x000107c28090(param_1 + 0x20);
  func_0x00010ae08ba8(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 104c52c54; end: 104c52d6b;  */

long FUN_104c52c54(long param_1)

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



/* Entry: 104c52d6c; end: 104c52e03;  */

undefined8 * FUN_104c52d6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_DAT_1107ec698;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c52864(puVar4 + 4,param_1 + 0x20);
  return puVar4;
}



/* Entry: 104c52e04; end: 104c52e7b;  */

void FUN_104c52e04(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1107ec698;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x000104c52864(param_2 + 4,param_1 + 0x20);
  return;
}



/* Entry: 104c52e7c; end: 104c52f1b;  */

long FUN_104c52e7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104c52eb8;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_104c52eb8:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
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
  return param_1 + 8;
}



/* Entry: 104c52f1c; end: 104c52fa3;  */

long * FUN_104c52f1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  char *pcStack_20;
  undefined4 uStack_14;
  
  lVar2 = *(long *)(param_1 + 8);
  uStack_38 = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uStack_38 + 0x17) < '\0') {
    uStack_38 = *(ulong *)uStack_38;
  }
  uStack_28 = *(ulong *)(lVar2 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uStack_28 + 0x17) < '\0') {
    uStack_28 = *(ulong *)uStack_28;
  }
  pcStack_20 = "";
  uStack_30 = *(undefined8 *)(lVar2 + 0x20);
  uStack_14 = **(undefined4 **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14,&uStack_38);
    return plVar1;
  }
  FUN_104c501e4();
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec6f8);
  plVar1 = plVar1 + 1;
  if ((int)param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 104c52fa4; end: 104c52fdf;  */

long FUN_104c52fa4(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_1107ec6f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104c52fe0; end: 104c52feb;  */

undefined ** FUN_104c52fe0(void)

{
  return &PTR_DAT_1107ec6f8;
}



/* Entry: 104c52fec; end: 104c533e7;  */

undefined8 *
FUN_104c52fec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             long *param_5,long param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_1107ec718;
  func_0x0001004a5a8c(puVar1);
  uStack_90 = 2;
  uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
  lStack_80 = 0;
  FUN_104c4f3d4(param_1 + 0x39,&uStack_90);
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = &PTR_DAT_110c7a6e0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0x32aaaba7;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((long)param_1 + 0x2f2) = 0;
  *(undefined8 *)((long)param_1 + 0x2ea) = 0;
  param_1[0x60] = 0x32aaaba7;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((long)param_1 + 0x369) = 0;
  *(undefined8 *)((long)param_1 + 0x361) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 0x6f,*param_2,param_2[1]);
  }
  else {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[0x71] = param_2[2];
    param_1[0x70] = uVar4;
    param_1[0x6f] = uVar3;
  }
  uVar3 = *param_8;
  param_1[0x73] = param_8[1];
  param_1[0x72] = uVar3;
  *param_8 = 0;
  param_8[1] = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_70 = 0x3f800000;
  FUN_104c5dc28(&uStack_90,param_7,param_3);
  FUN_104c5e030(&uStack_90,param_7);
  for (plVar2 = (long *)lStack_80; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    func_0x0001004b5d48(puVar1,plVar2 + 2,plVar2 + 5);
  }
  func_0x000104c4f944(&uStack_90);
  func_0x00010002d4d8(&uStack_90,"x-snap-games-lens-id");
  func_0x0001004b5d48(puVar1,&uStack_90,param_4);
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (param_6 != 0) {
    func_0x00010002d4d8(&uStack_90,"x-snap-games-stream-role");
    func_0x00010002d4d8(auStack_a8,param_6);
    func_0x0001004b5d48(puVar1,&uStack_90,auStack_a8);
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
  }
  func_0x00010002d4d8(&uStack_90,"origin");
  func_0x00010002d4d8(auStack_a8,"https://localhost:8080");
  func_0x0001004b5d48(puVar1,&uStack_90,auStack_a8);
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if ((*param_5 != 0) && ((int)param_5[1] != 0)) {
    func_0x00010002d4d8(&uStack_90,"x-snap-games-username");
    FUN_104c58f08(auStack_a8,*param_5,(int)param_5[1]);
    func_0x0001004b5d48(puVar1,&uStack_90,auStack_a8);
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
  }
  if (param_5[2] != 0) {
    func_0x00010002d4d8(&uStack_90,"x-snap-games-bitmoji-id");
    func_0x00010002d4d8(auStack_a8,param_5[2]);
    func_0x0001004b5d48(puVar1,&uStack_90,auStack_a8);
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
  }
  return param_1;
}



/* Entry: 104c533e8; end: 104c5355f;  */

void FUN_104c533e8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  func_0x00010002d4d8(auStack_88,PTR_DAT_11330a920);
  func_0x00010002d4d8(auStack_70,"");
  func_0x00010002d4d8(auStack_58,"");
  func_0x00010046d324(auStack_40,auStack_88);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  func_0x000100468be4(auStack_88);
  FUN_104ae3e74(auStack_88,0x2000000);
  func_0x00010055ceb0(auStack_88,0x2000000);
  FUN_104ae38d8(param_1,param_2,auStack_40,auStack_88);
  func_0x00010046a1bc(auStack_88);
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
  return;
}



/* Entry: 104c53560; end: 104c53793;  */

long * FUN_104c53560(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
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
  long *in_stack_ffffffffffffffb8;
  long *in_stack_ffffffffffffffc8;
  
  if (*(int *)(param_1 + 0x2b0) == 0) {
    *(int *)(param_1 + 0x2b0) = 1;
    if (*(long *)(param_1 + 0x390) == 0) {
      FUN_104c533e8(&stack0xffffffffffffffc0,param_1 + 0x378);
    }
    else {
      in_stack_ffffffffffffffc8 = *(long **)(param_1 + 0x398);
      if (in_stack_ffffffffffffffc8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffc8 + 1;
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
    if (in_stack_ffffffffffffffc8 != (long *)0x0) {
      plVar6 = in_stack_ffffffffffffffc8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010ae91440(&stack0xffffffffffffffb8,&stack0xffffffffffffffa8,&stack0xffffffffffffffa0);
    if (in_stack_ffffffffffffffc8 != (long *)0x0) {
      plVar6 = in_stack_ffffffffffffffc8 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffc8);
      }
    }
    lVar10 = in_stack_ffffffffffffffb8[1];
    func_0x00010ae91a1c(lVar10,param_1 + 0x1c8,in_stack_ffffffffffffffb8 + 5,param_1 + 8,1,0);
    if (lVar10 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)0x20;
      __Znwm();
      *plVar6 = (long)&PTR_FUN_1107ec770;
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[3] = lVar10;
    }
    *(long *)(param_1 + 0x2a0) = lVar10;
    plVar11 = *(long **)(param_1 + 0x2a8);
    *(long **)(param_1 + 0x2a8) = plVar6;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
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
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        plVar6 = plVar11;
      }
    }
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      func_0x000104c4fdf8(in_stack_ffffffffffffffb8 + 1);
      __ZdlPv(in_stack_ffffffffffffffb8);
      plVar6 = in_stack_ffffffffffffffb8;
    }
    if (in_stack_ffffffffffffffc8 != (long *)0x0) {
      plVar11 = in_stack_ffffffffffffffc8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffc8);
        plVar6 = in_stack_ffffffffffffffc8;
      }
    }
    return plVar6;
  }
  ppuVar9 = &PTR_PTR_1130a8718;
  ppuVar8 = ppuVar9;
  func_0x00010ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    func_0x00010ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar8[0x13],ppuVar8[0xf],
                        ppuVar8 + 0x14,0x400);
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
    puVar13 = ppuVar8[0x12];
    puVar12 = ppuVar8[0xb];
    uVar4 = 0;
    _clock_gettime_nsec_np();
    uVar5 = uVar4;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar8 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar8 + 0xe);
    uStack_8c0 = uVar5 & 0xffffffff;
    ppuStack_8b0 = ppuVar8 + 0x10;
    plVar6 = (long *)*ppuVar8;
    ppuVar9 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar12;
    puStack_8d8 = puVar13;
    uStack_8d0 = (ulong)(puVar13 != (undefined *)0x0);
    uStack_8c8 = uVar4;
    func_0x00010ae0784c(plVar6,ppuVar9,&puStack_900,&puStack_918);
  }
  iVar7 = (int)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar7 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0();
    func_0x00010ae087bc();
    func_0x00010ae07e54(plVar6);
    return plVar6;
  }
  return plVar6;
}



/* Entry: 104c53794; end: 104c544cb;  */

void FUN_104c53794(long *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  long *****ppppplVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long ******pppppplVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long *****ppppplVar19;
  long lVar20;
  long *****ppppplVar21;
  long *plVar22;
  long ******pppppplVar23;
  ulong uVar24;
  ulong uVar25;
  long ******pppppplVar26;
  long *****ppppplStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  undefined1 uStack_98;
  undefined6 uStack_97;
  char cStack_91;
  long lStack_80;
  undefined8 uStack_78;
  char cStack_69;
  int aiStack_68 [2];
  
  if ((int)param_1[0x56] == 1) {
    cStack_69 = '\0';
    uVar6 = 1;
    plVar3 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
    plVar4 = param_1 + 0x39;
    func_0x000100491574(plVar4,aiStack_68,&cStack_69,plVar3,uVar6);
    if ((int)plVar4 == 1) {
      do {
        ppuVar8 = &PTR_PTR_1130a8810;
        __ZNSt3__15mutex4lockEv(param_1 + 0x57);
        if (cStack_69 == '\x01') {
          if (aiStack_68[0] < 2) {
            if (aiStack_68[0] == 0) {
              *(undefined4 *)(param_1 + 0x56) = 2;
              if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
                (**(code **)(*param_1 + 0x20))(param_1);
                goto LAB_104c539e0;
              }
            }
            else if (aiStack_68[0] == 1) {
              if ((char)param_1[0x5f] == '\x01') {
                if ((int)param_1[0x56] != 3) {
                  FUN_104c54564(param_1[0x54],3);
                }
              }
              else {
                plVar4 = param_1 + 0x60;
                __ZNSt3__15mutex4lockEv();
                __ZNSt3__16chrono12steady_clock3nowEv();
                lVar15 = param_1[0x6d];
                lVar20 = param_1[0x69];
                uVar25 = param_1[0x6c];
                plVar3 = (long *)(lVar20 + (uVar25 / 0x49) * 8);
                lVar9 = param_1[0x6a];
                lVar13 = lVar15;
                if (lVar9 == lVar20) {
                  pppppplVar23 = (long ******)0x0;
                  pppppplVar12 = (long ******)0x0;
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar25 + lVar15;
                  plVar4 = (long *)(lVar20 + (SUB168(auVar2 * ZEXT816(0x70381c0e070381c1),8) >> 2 &
                                             0x1ffffffffffffff8));
                  lVar9 = lVar20;
                }
                else {
                  pppppplVar18 = *(long *******)(lVar20 + (uVar25 / 0x49) * 8);
                  pppppplVar12 = pppppplVar18 + (uVar25 % 0x49) * 7;
                  uVar24 = uVar25 + lVar15;
                  uVar16 = uVar24 / 0x49;
                  pppppplVar23 = (long ******)
                                 (*(long *)(lVar20 + uVar16 * 8) + (uVar24 % 0x49) * 0x38);
                  if (pppppplVar12 == pppppplVar23) {
LAB_104c53b64:
                    plVar22 = plVar3;
                    pppppplVar26 = pppppplVar12;
                    if (pppppplVar12 != pppppplVar23) {
                      while( true ) {
                        pppppplVar12 = pppppplVar12 + 7;
                        if ((long)pppppplVar12 - (long)pppppplVar18 == 0xff8) {
                          plVar3 = plVar3 + 1;
                          pppppplVar12 = (long ******)*plVar3;
                        }
                        if (pppppplVar12 == pppppplVar23) break;
                        if ((long)plVar4 <= (long)pppppplVar12[6]) {
                          if (pppppplVar26 != pppppplVar12) {
                            ppppplVar21 = pppppplVar26[1];
                            ppppplVar5 = ppppplVar21;
                            if (((ulong)ppppplVar21 & 1) != 0) {
                              ppppplVar5 = *(long ******)((ulong)ppppplVar21 & 0xfffffffffffffffe);
                            }
                            ppppplVar17 = pppppplVar12[1];
                            ppppplVar19 = ppppplVar17;
                            if (((ulong)ppppplVar17 & 1) != 0) {
                              ppppplVar19 = *(long ******)((ulong)ppppplVar17 & 0xfffffffffffffffe);
                            }
                            if (ppppplVar5 == ppppplVar19) {
                              pppppplVar26[1] = ppppplVar17;
                              pppppplVar12[1] = ppppplVar21;
                              ppppplVar5 = pppppplVar26[2];
                              pppppplVar26[2] = pppppplVar12[2];
                              pppppplVar12[2] = ppppplVar5;
                              ppppplVar5 = pppppplVar26[3];
                              pppppplVar26[3] = pppppplVar12[3];
                              pppppplVar12[3] = ppppplVar5;
                              uVar1 = *(undefined4 *)((long)pppppplVar26 + 0x24);
                              *(undefined4 *)((long)pppppplVar26 + 0x24) =
                                   *(undefined4 *)((long)pppppplVar12 + 0x24);
                              *(undefined4 *)((long)pppppplVar12 + 0x24) = uVar1;
                            }
                            else {
                              func_0x00010ae19c8c(pppppplVar26);
                              func_0x00010ae19f9c(pppppplVar26,pppppplVar12);
                            }
                          }
                          ppppplVar5 = pppppplVar12[5];
                          pppppplVar26[6] = pppppplVar12[6];
                          pppppplVar26[5] = ppppplVar5;
                          pppppplVar26 = pppppplVar26 + 7;
                          if ((long)pppppplVar26 - *plVar22 == 0xff8) {
                            plVar22 = plVar22 + 1;
                            pppppplVar26 = (long ******)*plVar22;
                          }
                        }
                        pppppplVar18 = (long ******)*plVar3;
                      }
                      uVar25 = param_1[0x6c];
                      lVar20 = param_1[0x69];
                      lVar9 = param_1[0x6a];
                      uVar24 = uVar25 + param_1[0x6d];
                      uVar16 = uVar24 / 0x49;
                      plVar3 = plVar22;
                      lVar13 = param_1[0x6d];
                      pppppplVar23 = pppppplVar26;
                    }
                  }
                  else {
                    do {
                      if ((long)pppppplVar12[6] < (long)plVar4) goto LAB_104c53b64;
                      pppppplVar12 = pppppplVar12 + 7;
                      if ((long)pppppplVar12 - (long)pppppplVar18 == 0xff8) {
                        plVar3 = plVar3 + 1;
                        pppppplVar18 = (long ******)*plVar3;
                        pppppplVar12 = pppppplVar18;
                      }
                    } while (pppppplVar12 != pppppplVar23);
                  }
                  plVar4 = (long *)(lVar20 + uVar16 * 8);
                  if (lVar9 == lVar20) {
                    pppppplVar12 = (long ******)0x0;
                  }
                  else {
                    pppppplVar12 = (long ******)(*plVar4 + (uVar24 % 0x49) * 0x38);
                  }
                }
                if (pppppplVar12 == pppppplVar23) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = ((long)plVar4 - (long)plVar3 >> 3) * 0x49 +
                           ((long)pppppplVar12 - *plVar4 >> 3) * 0x6db6db6db6db6db7 +
                           ((long)pppppplVar23 - *plVar3 >> 3) * -0x6db6db6db6db6db7;
                }
                pppppplVar12 = (long ******)(lVar20 + (uVar25 / 0x49) * 8);
                if (lVar9 == lVar20) {
                  pppppplVar18 = (long ******)0x0;
                }
                else {
                  pppppplVar18 = (long ******)(*pppppplVar12 + (uVar25 % 0x49) * 7);
                }
                if (pppppplVar18 == pppppplVar23) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = ((long)plVar3 - (long)pppppplVar12 >> 3) * 0x49 +
                           ((long)pppppplVar23 - *plVar3 >> 3) * 0x6db6db6db6db6db7 +
                           ((long)pppppplVar18 - (long)*pppppplVar12 >> 3) * -0x6db6db6db6db6db7;
                }
                ppppplStack_a8 = (long *****)pppppplVar12;
                ppppplStack_a0 = (long *****)pppppplVar18;
                FUN_104c564d8(&ppppplStack_a8,uVar24);
                ppppplVar5 = ppppplStack_a0;
                pppppplVar23 = (long ******)ppppplStack_a8;
                if (0 < lVar10) {
                  if ((ulong)(lVar13 - lVar10) >> 1 < uVar24) {
                    FUN_104c564d8(&ppppplStack_a8);
                    pppppplVar18 = (long ******)ppppplStack_a8;
                    pppppplVar12 = (long ******)(lVar20 + ((uVar25 + lVar13) / 0x49) * 8);
                    if (lVar9 == lVar20) {
                      ppppplVar21 = (long *****)0x0;
                    }
                    else {
                      ppppplVar21 = *pppppplVar12 + ((uVar25 + lVar13) % 0x49) * 7;
                    }
                    if ((long ******)ppppplStack_a8 == pppppplVar12) {
                      FUN_104c56730(&ppppplStack_a8,ppppplStack_a0,ppppplVar21,pppppplVar23,
                                    ppppplVar5);
                      ppppplVar5 = (long *****)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    else {
                      FUN_104c56730(&ppppplStack_a8,ppppplStack_a0,*ppppplStack_a8 + 0x1ff,
                                    pppppplVar23,ppppplVar5);
                      uVar6 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      while (pppppplVar18 = pppppplVar18 + 1, pppppplVar18 != pppppplVar12) {
                        FUN_104c56730(&ppppplStack_a8,*pppppplVar18,*pppppplVar18 + 0x1ff,
                                      ppppplStack_a0,uVar6);
                        uVar6 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      }
                      FUN_104c56730(&ppppplStack_a8,*pppppplVar18,ppppplVar21,ppppplStack_a0,uVar6);
                      ppppplVar5 = (long *****)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    lVar13 = param_1[0x69];
                    lVar9 = param_1[0x6a];
                    if (lVar9 == lVar13) {
                      ppppplVar21 = (long *****)0x0;
                    }
                    else {
                      ppppplVar21 = (long *****)
                                    (*(long *)(lVar13 + ((ulong)(param_1[0x6d] + param_1[0x6c]) /
                                                        0x49) * 8) +
                                    ((ulong)(param_1[0x6d] + param_1[0x6c]) % 0x49) * 0x38);
                    }
                    pppppplVar23 = (long ******)ppppplStack_a0;
                    if (ppppplVar21 != ppppplVar5) {
                      do {
                        func_0x00010ae19c2c();
                        ppppplVar5 = ppppplVar5 + 7;
                        if ((long)ppppplVar5 - (long)*pppppplVar23 == 0xff8) {
                          pppppplVar23 = pppppplVar23 + 1;
                          ppppplVar5 = *pppppplVar23;
                        }
                      } while (ppppplVar5 != ppppplVar21);
                      lVar9 = param_1[0x6a];
                      lVar13 = param_1[0x69];
                    }
                    lVar20 = 0;
                    if (lVar9 - lVar13 != 0) {
                      lVar20 = (lVar9 - lVar13 >> 3) * 0x49 + -1;
                    }
                    lVar13 = param_1[0x6d] - lVar10;
                    param_1[0x6d] = lVar13;
                    uVar25 = lVar20 - (param_1[0x6c] + lVar13);
                    while (0x91 < uVar25) {
                      __ZdlPv(*(undefined8 *)(lVar9 + -8));
                      lVar9 = param_1[0x6a] + -8;
                      param_1[0x6a] = lVar9;
                      lVar20 = 0;
                      if (lVar9 - param_1[0x69] != 0) {
                        lVar20 = (lVar9 - param_1[0x69] >> 3) * 0x49 + -1;
                      }
                      lVar13 = param_1[0x6d];
                      uVar25 = lVar20 - (lVar13 + param_1[0x6c]);
                    }
                  }
                  else {
                    FUN_104c564d8(&ppppplStack_a8);
                    if (pppppplVar23 == pppppplVar12) {
                      FUN_104c5658c(&ppppplStack_a8,pppppplVar18,ppppplVar5,ppppplStack_a8,
                                    ppppplStack_a0);
                      pppppplVar23 = (long ******)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    else {
                      FUN_104c5658c(&ppppplStack_a8,*pppppplVar23,ppppplVar5,ppppplStack_a8,
                                    ppppplStack_a0);
                      uVar6 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      while (pppppplVar23 = pppppplVar23 + -1, pppppplVar23 != pppppplVar12) {
                        FUN_104c5658c(&ppppplStack_a8,*pppppplVar23,*pppppplVar23 + 0x1ff,
                                      ppppplStack_a0,uVar6);
                        uVar6 = CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                      }
                      FUN_104c5658c(&ppppplStack_a8,pppppplVar18,*pppppplVar23 + 0x1ff,
                                    ppppplStack_a0,uVar6);
                      pppppplVar23 = (long ******)CONCAT17(cStack_91,CONCAT61(uStack_97,uStack_98));
                    }
                    while (pppppplVar18 != pppppplVar23) {
                      func_0x00010ae19c2c(pppppplVar18);
                      pppppplVar18 = pppppplVar18 + 7;
                      if ((long)pppppplVar18 - (long)*pppppplVar12 == 0xff8) {
                        pppppplVar12 = pppppplVar12 + 1;
                        pppppplVar18 = (long ******)*pppppplVar12;
                      }
                    }
                    lVar13 = param_1[0x6d] - lVar10;
                    param_1[0x6d] = lVar13;
                    lVar9 = param_1[0x6c];
                    param_1[0x6c] = lVar9 + lVar10;
                    if (0x91 < (ulong)(lVar9 + lVar10)) {
                      puVar11 = (undefined8 *)param_1[0x69];
                      do {
                        __ZdlPv(*puVar11);
                        puVar11 = (undefined8 *)(param_1[0x69] + 8);
                        param_1[0x69] = (long)puVar11;
                        lVar13 = param_1[0x6c];
                        param_1[0x6c] = lVar13 - 0x49U;
                      } while (0x91 < lVar13 - 0x49U);
                      lVar13 = param_1[0x6d];
                    }
                  }
                }
                if (lVar15 - lVar13 != 0) {
                  func_0x00010ae02f70(0,lVar15 - lVar13);
                  func_0x00010ae02f70();
                  ppuVar8 = &PTR_PTR_1130a88d8;
                  func_0x00010ae079a0();
                  func_0x00010ae02f80();
                  func_0x00010ae02f80();
                  func_0x00010ae07cd4(ppuVar8,&PTR_PTR_1130a88d8);
                  lVar15 = param_1[0x6d];
                }
                if (lVar15 == 0) {
                  *(undefined1 *)(param_1 + 0x6e) = 0;
                }
                else if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
                  lVar13 = *(long *)(param_1[0x69] + ((ulong)param_1[0x6c] / 0x49) * 8) +
                           ((ulong)param_1[0x6c] % 0x49) * 0x38;
                  func_0x00010ae19a28(&ppppplStack_a8,0,lVar13);
                  uStack_78 = *(undefined8 *)(lVar13 + 0x30);
                  lStack_80 = *(long *)(lVar13 + 0x28);
                  func_0x00010ae19c2c(*(long *)(param_1[0x69] + ((ulong)param_1[0x6c] / 0x49) * 8) +
                                      ((ulong)param_1[0x6c] % 0x49) * 0x38);
                  lVar13 = param_1[0x6c];
                  param_1[0x6d] = param_1[0x6d] + -1;
                  param_1[0x6c] = lVar13 + 1U;
                  if (0x91 < lVar13 + 1U) {
                    __ZdlPv(*(undefined8 *)param_1[0x69]);
                    param_1[0x69] = param_1[0x69] + 8;
                    param_1[0x6c] = param_1[0x6c] + -0x49;
                  }
                  lVar13 = param_1[0x54];
                  FUN_104c545dc(lVar13,&ppppplStack_a8,1);
                  __ZNSt3__16chrono12steady_clock3nowEv();
                  func_0x00010ae02ef0(0,(lVar13 - lStack_80) / 1000000);
                  ppuVar8 = &PTR_PTR_1130a87e0;
                  func_0x00010ae079a0();
                  func_0x00010ae02f00();
                  func_0x00010ae07cd4(ppuVar8,&PTR_PTR_1130a87e0);
                  func_0x00010ae19c2c(&ppppplStack_a8);
                }
                else {
                  func_0x00010ae02f70(0);
                  ppuVar8 = &PTR_PTR_1130a8848;
                  func_0x00010ae079a0();
                  func_0x00010ae02f80();
                  func_0x00010ae07cd4(ppuVar8,&PTR_PTR_1130a8848);
                  puVar11 = (undefined8 *)param_1[0x69];
                  puVar14 = puVar11;
                  if ((undefined8 *)param_1[0x6a] != puVar11) {
                    uVar25 = param_1[0x6c];
                    plVar4 = puVar11 + uVar25 / 0x49;
                    lVar13 = *plVar4 + (uVar25 % 0x49) * 0x38;
                    lVar9 = puVar11[(param_1[0x6d] + uVar25) / 0x49] +
                            ((param_1[0x6d] + uVar25) % 0x49) * 0x38;
                    puVar14 = (undefined8 *)param_1[0x6a];
                    if (lVar13 != lVar9) {
                      do {
                        func_0x00010ae19c2c();
                        lVar13 = lVar13 + 0x38;
                        if (lVar13 - *plVar4 == 0xff8) {
                          plVar4 = plVar4 + 1;
                          lVar13 = *plVar4;
                        }
                      } while (lVar13 != lVar9);
                      puVar11 = (undefined8 *)param_1[0x69];
                      puVar14 = (undefined8 *)param_1[0x6a];
                    }
                  }
                  param_1[0x6d] = 0;
                  lVar13 = (long)puVar14 - (long)puVar11;
                  while (uVar25 = lVar13 >> 3, 2 < uVar25) {
                    __ZdlPv(*puVar11);
                    puVar11 = (undefined8 *)(param_1[0x69] + 8);
                    param_1[0x69] = (long)puVar11;
                    lVar13 = param_1[0x6a] - (long)puVar11;
                  }
                  if (uVar25 == 1) {
                    lVar13 = 0x24;
                  }
                  else {
                    if (uVar25 != 2) goto LAB_104c54420;
                    lVar13 = 0x49;
                  }
                  param_1[0x6c] = lVar13;
                }
LAB_104c54420:
                __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
              }
            }
          }
          else if (aiStack_68[0] == 2) {
            (**(code **)(*param_1 + 0x18))(param_1,param_1 + 0x4f);
LAB_104c539e0:
            if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
              FUN_104c544cc(param_1[0x54],param_1 + 0x4f,2);
            }
          }
          else {
            if (aiStack_68[0] == 3) goto LAB_104c53a30;
            if (aiStack_68[0] == 4) {
              ppppplStack_a0 = (long *****)0x0;
              uStack_98 = 0;
              ppppplStack_a8 = (long *****)CONCAT62(ppppplStack_a8._2_6_,(short)(int)param_1[0x48]);
              if (*(char *)((long)param_1 + 0x277) < '\0') {
                func_0x000100033dac(&ppppplStack_c0,param_1[0x4c],param_1[0x4d]);
              }
              else {
                lStack_b8 = param_1[0x4d];
                ppppplStack_c0 = (long *****)param_1[0x4c];
                lStack_b0 = param_1[0x4e];
              }
              ppppplStack_a0 = ppppplStack_c0;
              if (-1 < lStack_b0) {
                ppppplStack_a0 = (long *****)&ppppplStack_c0;
              }
              (**(code **)(*param_1 + 0x28))(param_1,&ppppplStack_a8);
              FUN_104ae3ee8(param_1 + 0x39);
              pppppplVar23 = (long ******)ppppplStack_c0;
              if (lStack_b0 < 0) goto LAB_104c53b5c;
            }
          }
        }
        else {
          if (aiStack_68[0] < 2) {
            if (aiStack_68[0] != 0) {
              if (aiStack_68[0] == 1) {
                func_0x00010002d4d8(&ppppplStack_a8,"Error sending message");
                (**(code **)(*param_1 + 0x30))(param_1,&ppppplStack_a8);
                pppppplVar23 = (long ******)ppppplStack_a8;
                if (cStack_91 < '\0') {
LAB_104c53b5c:
                  __ZdlPv(pppppplVar23);
                }
              }
              goto LAB_104c53a38;
            }
            func_0x00010002d4d8(&ppppplStack_a8,"Error connecting to gRPC server");
            (**(code **)(*param_1 + 0x30))(param_1,&ppppplStack_a8);
            if (cStack_91 < '\0') {
              __ZdlPv(ppppplStack_a8);
            }
          }
          else {
            if (aiStack_68[0] == 2) {
              ppuVar8 = &PTR_PTR_1130a8890;
            }
            else if (aiStack_68[0] != 3) {
              if (aiStack_68[0] == 4) {
                func_0x00010002d4d8(&ppppplStack_a8,"Error finishing stream");
                (**(code **)(*param_1 + 0x30))(param_1,&ppppplStack_a8);
                if (cStack_91 < '\0') {
                  __ZdlPv(ppppplStack_a8);
                }
                FUN_104ae3ee8(param_1 + 0x39);
              }
              goto LAB_104c53a38;
            }
            ppuVar7 = ppuVar8;
            func_0x00010ae079a0(0,ppuVar8);
            func_0x00010ae07cd4(ppuVar7,ppuVar8);
          }
LAB_104c53a30:
          FUN_104c546d0(param_1);
        }
LAB_104c53a38:
        __ZNSt3__15mutex6unlockEv(param_1 + 0x57);
        uVar6 = 1;
        plVar3 = plRam0000000113815c70;
        (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
        plVar4 = param_1 + 0x39;
        func_0x000100491574(plVar4,aiStack_68,&cStack_69,plVar3,uVar6);
      } while ((int)plVar4 == 1);
    }
  }
  return;
}



/* Entry: 104c544cc; end: 104c54563;  */

void FUN_104c544cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  byte *pbVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"started_",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/async_stream.h"
               ,0x227);
  }
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
  pbVar2 = *(byte **)(param_1 + 0x18);
  if ((*pbVar2 & 1) == 0) {
    *pbVar2 = 1;
    *(byte **)(param_1 + 0x1b0) = pbVar2 + 0xd0;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000104c54530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x1a0,(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c54564; end: 104c545db;  */

void FUN_104c54564(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"started_",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/async_stream.h"
               ,0x245);
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x388) = param_2;
  *(undefined1 *)(param_1 + 0x379) = 1;
                    /* WARNING: Could not recover jumptable at 0x000104c545a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x308,(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c545dc; end: 104c546cf;  */

void FUN_104c545dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int aiStack_68 [2];
  undefined8 uStack_60;
  char cStack_49;
  undefined8 uStack_48;
  char cStack_31;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"started_",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/async_stream.h"
               ,0x231);
  }
  *(undefined8 *)(param_1 + 0x388) = param_3;
  FUN_104c55b2c(aiStack_68,param_1 + 0x338,param_2,0);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  if (aiStack_68[0] != 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"write_ops_.SendMessage(msg).ok()",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/async_stream.h"
               ,0x234);
  }
  plVar1 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x308,(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c546d0; end: 104c54743;  */

void FUN_104c546d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  byte *pbVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar4 = &PTR_PTR_1130a8798;
  func_0x00010ae079a0(0,&PTR_PTR_1130a8798);
  func_0x00010ae07cd4(ppuVar4,&PTR_PTR_1130a8798);
  if (*(int *)(param_1 + 0x2b0) == 3) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(int *)(param_1 + 0x2b0) = 3;
  lVar2 = *(long *)(param_1 + 0x2a0);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"started_",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/async_stream.h"
               ,0x250);
  }
  *(undefined8 *)(lVar2 + 0x520) = 4;
  pbVar5 = *(byte **)(lVar2 + 0x18);
  if ((*pbVar5 & 1) == 0) {
    *pbVar5 = 1;
    *(byte **)(lVar2 + 0x4c0) = pbVar5 + 0xd0;
  }
  *(byte **)(lVar2 + 0x4d0) = pbVar5;
  *(byte **)(lVar2 + 0x4d8) = pbVar5 + 0x108;
  *(long *)(lVar2 + 0x4e0) = param_1 + 0x240;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&uStack_58);
  *(undefined8 *)(lVar2 + 0x500) = uStack_50;
  *(undefined8 *)(lVar2 + 0x4f8) = uStack_58;
  *(undefined8 *)(lVar2 + 0x510) = uStack_40;
  *(undefined8 *)(lVar2 + 0x508) = uStack_48;
  plVar3 = *(long **)(lVar2 + 0x20);
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar2 + 0x4b0,(undefined8 *)(lVar2 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c54ad8);
  (*pcVar1)();
}



/* Entry: 104c54744; end: 104c547d7;  */

void FUN_104c54744(long param_1)

{
  FUN_104c56028(param_1 + 0x2b8,param_1 + 0x300);
  *(undefined1 *)(param_1 + 0x2f9) = 1;
  if (((*(byte *)(param_1 + 0x2f8) & 1) == 0) &&
     (*(undefined1 *)(param_1 + 0x2f8) = 1, (*(byte *)(param_1 + 0x370) & 1) == 0)) {
    if (*(int *)(param_1 + 0x2b0) == 2) {
      FUN_104c54564(*(undefined8 *)(param_1 + 0x2a0),3);
    }
    else {
      FUN_104ae33d8(param_1 + 8);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x300);
  return;
}



/* Entry: 104c547d8; end: 104c5490f;  */

void FUN_104c547d8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_68 [40];
  long lStack_40;
  long lStack_38;
  
  if (*(int *)(param_1 + 0x2b0) == 2) {
    lVar2 = param_1 + 0x300;
    __ZNSt3__15mutex4lockEv();
    if (*(int *)(param_1 + 0x2b0) == 2) {
      if (*(char *)(param_1 + 0x370) == '\x01') {
        __ZNSt3__16chrono12steady_clock3nowEv();
        lVar1 = (ulong)param_3 * 1000000;
        if ((int)param_3 < 1) {
          lVar1 = 0x7009d32da30000;
        }
        FUN_104c54ae4(auStack_68,0,param_2);
        lStack_40 = lVar2;
        lStack_38 = lVar2 + lVar1;
        FUN_104c54910(param_1 + 0x340,auStack_68);
        func_0x00010ae19c2c(auStack_68);
        func_0x00010ae02f70(0,*(undefined8 *)(param_1 + 0x368));
        ppuVar3 = &PTR_PTR_1130a8750;
        func_0x00010ae079a0();
        func_0x00010ae02f80();
        func_0x00010ae07cd4(ppuVar3,&PTR_PTR_1130a8750);
      }
      else {
        FUN_104c545dc(*(undefined8 *)(param_1 + 0x2a0),param_2,1);
        *(undefined1 *)(param_1 + 0x370) = 1;
      }
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x300);
  }
  return;
}



/* Entry: 104c54910; end: 104c549cf;  */

void FUN_104c54910(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar4 != lVar3) {
    lVar2 = (lVar4 - lVar3 >> 3) * 0x49 + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_104c56098(param_1);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 == lVar3) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar3 + (uVar1 / 0x49) * 8) + (uVar1 % 0x49) * 0x38;
  }
  FUN_104c54ae4(lVar2,0,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 104c549d0; end: 104c54ad3;  */

void FUN_104c549d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  byte *pbVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"started_",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/async_stream.h"
               ,0x250);
  }
  *(undefined8 *)(param_1 + 0x520) = param_3;
  pbVar3 = *(byte **)(param_1 + 0x18);
  if ((*pbVar3 & 1) == 0) {
    *pbVar3 = 1;
    *(byte **)(param_1 + 0x4c0) = pbVar3 + 0xd0;
  }
  *(byte **)(param_1 + 0x4d0) = pbVar3;
  *(byte **)(param_1 + 0x4d8) = pbVar3 + 0x108;
  *(undefined8 *)(param_1 + 0x4e0) = param_2;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&uStack_58);
  *(undefined8 *)(param_1 + 0x500) = uStack_50;
  *(undefined8 *)(param_1 + 0x4f8) = uStack_58;
  *(undefined8 *)(param_1 + 0x510) = uStack_40;
  *(undefined8 *)(param_1 + 0x508) = uStack_48;
  plVar2 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x4b0,(undefined8 *)(param_1 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c54ad8);
  (*pcVar1)();
}



/* Entry: 104c54ad4; end: 104c54ae3;  */

void FUN_104c54ad4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c54ad8);
  (*pcVar1)();
}



/* Entry: 104c54ae4; end: 104c54b9f;  */

undefined8 * FUN_104c54ae4(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = &PTR_DAT_110c7a6e0;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[2] = 0;
  if (param_1 != param_3) {
    uVar3 = param_2;
    if ((param_2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar4 = param_3[1];
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      uVar2 = param_3[2];
      param_1[1] = uVar4;
      param_1[2] = uVar2;
      param_3[1] = param_2;
      param_3[2] = 0;
      uVar2 = param_1[3];
      param_1[3] = param_3[3];
      param_3[3] = uVar2;
      uVar1 = *(undefined4 *)((long)param_1 + 0x24);
      *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_3 + 0x24);
      *(undefined4 *)((long)param_3 + 0x24) = uVar1;
    }
    else {
      func_0x00010ae19c8c(param_1);
      func_0x00010ae19f9c(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 104c54ba0; end: 104c54c8b;  */

/* WARNING: Possible PIC construction at 0x000104c54bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c54c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c54bc8) */
/* WARNING: Removing unreachable block (ram,0x000104c54bfc) */
/* WARNING: Removing unreachable block (ram,0x000104c54bec) */
/* WARNING: Removing unreachable block (ram,0x000104c54bf0) */
/* WARNING: Removing unreachable block (ram,0x000104c54c00) */
/* WARNING: Removing unreachable block (ram,0x000104c54c0c) */
/* WARNING: Removing unreachable block (ram,0x000104c54c28) */

long FUN_104c54ba0(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  if (param_1 != 0) {
    *(undefined ***)(param_1 + 0x4b0) = &PTR_FUN_1107ea658;
    lVar1 = param_1 + 0x560;
    func_0x000104c01b44(&UNK_1107e9f40);
    *unaff_x20 = extraout_x8;
    func_0x000100613080(lVar1 + 0x70);
    func_0x0001006393ec(unaff_x20 + 7);
    return param_1 + 0x560;
  }
  return 0;
}



/* Entry: 104c54c8c; end: 104c54d27;  */

ulong * FUN_104c54c8c(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong auStack_80 [3];
  long lStack_68;
  
  if (0x7ffffffffffffff7 < param_3) {
    FUN_104c4f6b8();
    puVar2 = auStack_80;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = param_2;
    if (param_2 != param_1) {
      puVar1 = (ulong *)param_1[3];
      puVar5 = (ulong *)param_2[3];
      if (puVar1 == param_1) {
        if (puVar5 == param_2) {
          (**(code **)(*puVar1 + 0x18))(puVar1,auStack_80);
          (**(code **)(*(long *)param_1[3] + 0x20))();
          param_1[3] = 0;
          (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
          (**(code **)(*(long *)param_2[3] + 0x20))();
          param_2[3] = 0;
          param_1[3] = (ulong)param_1;
          (**(code **)(auStack_80[0] + 0x18))(auStack_80);
          (**(code **)(auStack_80[0] + 0x20))();
        }
        else {
          (**(code **)(*puVar1 + 0x18))();
          puVar2 = (ulong *)param_1[3];
          (**(code **)(*puVar2 + 0x20))();
          param_1[3] = param_2[3];
        }
        param_2[3] = (ulong)param_2;
        param_1 = puVar2;
      }
      else if (puVar5 == param_2) {
        puVar4 = param_1;
        (**(code **)(*puVar5 + 0x18))(puVar5);
        puVar2 = (ulong *)param_2[3];
        (**(code **)(*puVar2 + 0x20))();
        param_2[3] = param_1[3];
        param_1[3] = (ulong)param_1;
        param_1 = puVar2;
      }
      else {
        param_1[3] = (ulong)puVar5;
        param_2[3] = (ulong)puVar1;
        param_1 = puVar1;
      }
    }
    iVar3 = (int)puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      if (iVar3 == 0) {
        __Unwind_Resume();
      }
      FUN_104bd46a0();
      *param_1 = (ulong)&PTR_DAT_1107ec7d0;
      func_0x000104c00298(param_1 + 0x10);
      func_0x000100601aa4(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return param_1;
    }
    return param_1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
    if (param_3 == 0) goto LAB_104c54d08;
  }
  else {
    puVar4 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar4 = (ulong *)((param_3 | 7) + 1);
    }
    puVar2 = puVar4;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar4 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,param_2,param_3);
LAB_104c54d08:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 104c54d28; end: 104c54e93;  */

void FUN_104c54d28(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  *param_1 = (long)&PTR_DAT_1107ec7d0;
  func_0x000104c00298(param_1 + 0x10);
  func_0x000100601aa4(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104c54e94; end: 104c54ed3;  */

void FUN_104c54e94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec7d0;
  func_0x000104c00298(param_1 + 0x10);
  func_0x000100601aa4(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104c54ed4; end: 104c54f97;  */

void FUN_104c54ed4(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x50);
    plVar1 = (long *)(lVar4 + 0x18);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plRam0000000113815c70 + 0x38))
                (plRam0000000113815c70,*(undefined8 *)(lVar4 + 0x10));
    }
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    *param_3 = *(undefined1 *)(param_1 + 0x160);
  }
  else {
    func_0x000104c55214(param_1 + 0x18,param_3);
    *(undefined1 *)(param_1 + 0x160) = *param_3;
    lVar4 = param_1;
    FUN_104c552fc();
    if ((int)lVar4 == 0) {
      return;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x40);
  }
  (**(code **)(*plRam0000000113815c70 + 0x128))
            (plRam0000000113815c70,*(undefined8 *)(param_1 + 0x58));
  return;
}


