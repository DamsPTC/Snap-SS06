/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2023f8; end: 10a202447;  */

void FUN_10a2023f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a202448; end: 10a20248b;  */

void FUN_10a202448(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a20248c; end: 10a202533;  */

undefined *** FUN_10a20248c(undefined ***param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined8 *puStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined ***pppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 **ppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 auStack_178 [2];
  char cStack_161;
  code *pcStack_160;
  undefined8 *apuStack_158 [7];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a2029bc;
  ppuStack_60 = &PTR_FUN_110bb2db0;
  ppcVar8 = &pcStack_68;
  uVar10 = 0;
  uStack_58 = param_3;
  FUN_10a202534();
  pppuVar11 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  pcStack_78 = FUN_10a202534;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_160 = *ppcVar8;
  puStack_80 = &stack0xfffffffffffffff0;
  (**(code **)(ppcVar8[1] + 0x10))(apuStack_158,ppcVar8 + 1);
  FUN_109ffe064(&uStack_120,*param_2,param_2[1]);
  pcStack_108 = FUN_10a202700;
  ppuStack_100 = &PTR_FUN_110bb2d98;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = pcStack_160;
  (*(code *)apuStack_158[0][2])(puVar4 + 1,apuStack_158);
  puVar4[9] = uStack_118;
  puVar4[8] = uStack_120;
  puVar4[10] = lStack_110;
  uStack_118 = 0;
  lStack_110 = 0;
  uStack_120 = 0;
  puStack_f8 = puVar4;
  func_0x000107c2b054(auStack_178,&UNK_10f643dac);
  puVar4 = param_2;
  (*(code *)(*pppuVar11)[0x4a])(pppuVar11,param_2,&pcStack_108,uVar10,auStack_178);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  ppuVar5 = apuStack_158;
  (*(code *)*apuStack_158[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  (*(code *)*apuStack_158[0])(apuStack_158);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_188 = FUN_10a202700;
  pppuVar11 = (undefined ***)puVar4[2];
  pppuStack_1b8 = (undefined ***)ppuVar6[1];
  puStack_1c0 = *ppuVar6;
  puStack_1a0 = param_2;
  ppuStack_198 = ppuVar5;
  ppuStack_190 = &puStack_80;
  *ppuVar6 = (undefined8 *)0x0;
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar9 = (undefined **)(long)*(char *)((long)pppuVar11 + 0x57);
  if ((long)ppuVar9 < 0) {
    pppuVar7 = (undefined ***)pppuVar11[8];
    ppuVar9 = pppuVar11[9];
  }
  else {
    pppuVar7 = pppuVar11 + 8;
  }
  FUN_10a20287c(auStack_1b0,&puStack_1c0,pppuVar7,ppuVar9);
  FUN_10a2027f0(pppuVar11,auStack_1b0);
  if (pppuStack_1a8 != (undefined ***)0x0) {
    pppuVar7 = pppuStack_1a8 + 1;
    do {
      ppuVar9 = *pppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar3) {
        *pppuVar7 = (undefined **)((long)ppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1a8)[2])(pppuStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_1a8);
      pppuVar11 = pppuStack_1a8;
    }
  }
  pppuVar7 = pppuStack_1b8;
  if (pppuStack_1b8 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_1b8 + 1;
    do {
      ppuVar9 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1b8)[2])(pppuStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
      pppuVar11 = pppuVar7;
    }
  }
  return pppuVar11;
}



/* Entry: 10a202534; end: 10a2026ff;  */

long * FUN_10a202534(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined1 auStack_140 [8];
  long *plStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a202700;
  ppuStack_90 = &PTR_FUN_110bb2d98;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar4 + 1,apuStack_e8);
  puVar4[9] = uStack_a8;
  puVar4[8] = uStack_b0;
  puVar4[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar4;
  func_0x000107c2b054(auStack_108,&UNK_10f643dac);
  puVar4 = param_2;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar5 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_10a202700;
  plVar9 = (long *)puVar4[2];
  plStack_148 = ppuVar6[1];
  puStack_150 = *ppuVar6;
  puStack_130 = param_2;
  ppuStack_128 = ppuVar5;
  puStack_120 = &stack0xfffffffffffffff0;
  *ppuVar6 = (undefined8 *)0x0;
  ppuVar6[1] = (undefined8 *)0x0;
  lVar8 = (long)*(char *)((long)plVar9 + 0x57);
  if (lVar8 < 0) {
    plVar7 = (long *)plVar9[8];
    lVar8 = plVar9[9];
  }
  else {
    plVar7 = plVar9 + 8;
  }
  FUN_10a20287c(auStack_140,&puStack_150,plVar7,lVar8);
  FUN_10a2027f0(plVar9,auStack_140);
  if (plStack_138 != (long *)0x0) {
    plVar7 = plStack_138 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
      plVar9 = plStack_138;
    }
  }
  plVar7 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar1 = plStack_148 + 1;
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
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      plVar9 = plVar7;
    }
  }
  return plVar9;
}



/* Entry: 10a202700; end: 10a2027ef;  */

void FUN_10a202700(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar7 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = (long)*(char *)(lVar7 + 0x57);
  if (lVar6 < 0) {
    lVar5 = *(long *)(lVar7 + 0x40);
    lVar6 = *(long *)(lVar7 + 0x48);
  }
  else {
    lVar5 = lVar7 + 0x40;
  }
  FUN_10a20287c(auStack_30,&uStack_40,lVar5,lVar6);
  FUN_10a2027f0(lVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2027f0; end: 10a20287b;  */

void FUN_10a2027f0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a20287c; end: 10a202953;  */

void FUN_10a20287c(long *param_1,long *param_2,undefined *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c4f048,0);
    if (lVar5 != 0) {
      lVar6 = param_2[1];
      *param_1 = lVar5;
      param_1[1] = lVar6;
      if (lVar6 == 0) {
        return;
      }
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010a2021cc(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f643dac;
      if (param_4 != 0) {
        puVar2 = param_3;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f645e9d,0x34,&UNK_10f63498b,in_x6,in_x7,param_4,
                          puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a202954; end: 10a2029a3;  */

void FUN_10a202954(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2029a4; end: 10a2029bb;  */

void FUN_10a2029a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2029bc; end: 10a202a8f;  */

void FUN_10a2029bc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010a202a2c(*(undefined8 *)(param_2 + 0x10),&uStack_30);
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



/* Entry: 10a202a90; end: 10a202aab;  */

void FUN_10a202a90(void)

{
  return;
}



/* Entry: 10a202aac; end: 10a202b53;  */

void FUN_10a202aac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
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
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a202b54; end: 10a202b83;  */

void FUN_10a202b54(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  code **ppcStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined4 uStack_58;
  long lStack_38;
  
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010a202b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**param_1)(*(undefined4 *)param_2);
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar9 = (code **)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_80 = *(undefined4 *)param_2;
      ppcVar5 = &pcStack_78;
      pcStack_78 = FUN_10a202e9c;
      ppuStack_70 = &PTR_DAT_110bb2d80;
      uStack_90 = 0;
      uStack_88 = 0;
      ppcVar9 = &pcStack_78;
      uStack_58 = uStack_80;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a202ccc(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    ppcVar9 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_90);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_98 = FUN_10a202ccc;
  ppcStack_b0 = ppcVar5;
  pppuStack_a8 = pppuVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_c0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_b8,&puStack_c0,*pppuVar7);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_c0);
  FUN_10a202db8(*pppuVar7,&puStack_c0,&puStack_b8,ppcVar9);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a202b84; end: 10a202ccb;  */

void FUN_10a202b84(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  code **ppcStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined4 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar9 = (code **)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_80 = *(undefined4 *)param_2;
      ppcVar5 = &pcStack_78;
      pcStack_78 = FUN_10a202e9c;
      ppuStack_70 = &PTR_DAT_110bb2d80;
      uStack_90 = 0;
      uStack_88 = 0;
      ppcVar9 = &pcStack_78;
      uStack_58 = uStack_80;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a202ccc(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    ppcVar9 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_90);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_98 = FUN_10a202ccc;
  ppcStack_b0 = ppcVar5;
  pppuStack_a8 = pppuVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_c0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_b8,&puStack_c0,*pppuVar7);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_c0);
  FUN_10a202db8(*pppuVar7,&puStack_c0,&puStack_b8,ppcVar9);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a202ccc; end: 10a202db7;  */

void FUN_10a202ccc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a202db8(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a202db8; end: 10a202e9b;  */

void FUN_10a202db8(long *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puStack_68 = (undefined8 *)(double)*param_4;
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*param_1 + 0x58))();
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a202e9c; end: 10a202ee7;  */

void FUN_10a202e9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a202db8(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a202ee8; end: 10a202f07;  */

void FUN_10a202ee8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb3748;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a202f08; end: 10a202f17;  */

void FUN_10a202f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a202f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a202f18; end: 10a20301f;  */

long FUN_10a202f18(long param_1)

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



/* Entry: 10a203020; end: 10a20319f;  */

long * FUN_10a203020(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a20308c;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a20308c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a2031a0; end: 10a2031f7;  */

ulong FUN_10a2031a0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a2031f8,FUN_10a203300);
  }
  return param_1;
}



/* Entry: 10a2031f8; end: 10a2032ff;  */

void FUN_10a2031f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar6 = param_2[0x5e];
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(int)lVar6;
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
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2032ec);
  (*pcVar1)();
}



/* Entry: 10a203300; end: 10a203413;  */

void FUN_10a203300(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a076f00(param_5);
      func_0x000109898518(param_2,param_4);
      FUN_10a1e4124(plVar5,param_2);
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
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a203400);
  (*pcVar1)();
}



/* Entry: 10a203414; end: 10a2034cf;  */

void FUN_10a203414(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f645968,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2034d0);
  (*pcVar4)();
}



/* Entry: 10a2034d0; end: 10a203537;  */

void FUN_10a2034d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a203538();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
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
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a203538; end: 10a203583;  */

undefined8 * FUN_10a203538(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  FUN_10a1db5e8(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a203584; end: 10a20365f;  */

undefined8 * FUN_10a203584(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a203660; end: 10a20389b;  */

undefined1  [16] FUN_10a203660(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a203868;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10a20389c(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10a203858;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10a203858:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a203868:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a20389c; end: 10a20396b;  */

long * FUN_10a20389c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (param_2 <= plVar9) {
    if (param_2 < plVar9) {
      plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar3) {
        plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar9) goto LAB_10a2038e4;
    }
    return plVar3;
  }
LAB_10a2038e4:
  if (param_2 == (long *)0x0) {
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
      plVar3 = (long *)param_1[2];
      while (plVar3 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
        __ZdlPv();
      }
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
  }
  return plVar3;
}



/* Entry: 10a20396c; end: 10a203aef;  */

long * FUN_10a20396c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar3 = (long *)param_1[2];
      while (plVar3 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
        __ZdlPv();
      }
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
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
  return plVar3;
}



/* Entry: 10a203af0; end: 10a203b63;  */

undefined8 * FUN_10a203af0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  FUN_10a203b64(param_1,param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10a203b64; end: 10a203bfb;  */

void FUN_10a203b64(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  for (lVar1 = *param_1; lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_10a203bfc(param_2,param_3);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return;
}



/* Entry: 10a203bfc; end: 10a203c53;  */

void FUN_10a203bfc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return;
}



/* Entry: 10a203c54; end: 10a203d93;  */

long * FUN_10a203c54(long *param_1,long param_2)

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
    uVar3 = *(ulong *)(param_2 + 0x18);
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
          if (plVar6[5] == uVar3) {
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



/* Entry: 10a203d94; end: 10a203deb;  */

long FUN_10a203d94(long param_1)

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



/* Entry: 10a203dec; end: 10a203e5b;  */

void FUN_10a203dec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_3;
  puVar1[4] = param_3[1];
  puVar1[3] = uVar2;
  *puVar1 = &PTR_FUN_110bb2848;
  puVar1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_10a203ec4(puVar1 + 6,param_3 + 3);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a203e5c; end: 10a203e6b;  */

void FUN_10a203e5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a203e6c; end: 10a203e8b;  */

void FUN_10a203e6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2848;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a203e8c; end: 10a203ec3;  */

void FUN_10a203e8c(long param_1)

{
  long lStack_28;
  
  func_0x00010787ad88(param_1 + 0x30);
  lStack_28 = param_1 + 0x18;
  FUN_10a1f4560(&lStack_28);
  return;
}



/* Entry: 10a203ec4; end: 10a203f33;  */

void FUN_10a203ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a203f34; end: 10a20402f;  */

undefined1  [16] FUN_10a203f34(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1568;
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
    ppuStack_40 = &PTR_DAT_110bb1568;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c67cb0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a204030; end: 10a2040eb;  */

void FUN_10a204030(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6459b5,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2040ec);
  (*pcVar4)();
}



/* Entry: 10a2040ec; end: 10a20419b;  */

void FUN_10a2040ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a204254(param_1,param_2,0x10a1ea658,0,param_3,param_5);
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



/* Entry: 10a20419c; end: 10a204253;  */

void FUN_10a20419c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20439c(param_1,param_2,0x10a1ea688,0,param_3,param_4,param_5);
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



/* Entry: 10a204254; end: 10a204333;  */

void FUN_10a204254(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10a204334(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar2 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_60);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a204334; end: 10a20439b;  */

void FUN_10a204334(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bb27b8;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = param_2;
  FUN_10a20445c(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_88,param_2,param_6);
  plVar1 = (long *)((long)ppuVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*(code *)param_3)(plVar1,auStack_88);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *puVar3 = 0;
  return;
}



/* Entry: 10a20439c; end: 10a20445b;  */

void FUN_10a20439c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a20445c(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a20445c; end: 10a2044c3;  */

void FUN_10a20445c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a204254(extraout_x8,plVar4,0x10a1ea690,0,param_2,param_4);
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



/* Entry: 10a2044c4; end: 10a204573;  */

void FUN_10a2044c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a204254(param_1,param_2,0x10a1ea690,0,param_3,param_5);
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



/* Entry: 10a204574; end: 10a20462b;  */

void FUN_10a204574(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20439c(param_1,param_2,FUN_10a1ea6a0,0,param_3,param_4,param_5);
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



/* Entry: 10a20462c; end: 10a204747;  */

void FUN_10a20462c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar16;
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
  plVar6 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[99];
  if (plVar6[99] != 0) {
    plVar6 = (long *)(plVar6[99] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a204898(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
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



/* Entry: 10a204748; end: 10a204897;  */

/* WARNING: Removing unreachable block (ram,0x00010a204828) */
/* WARNING: Removing unreachable block (ram,0x00010a20482c) */
/* WARNING: Removing unreachable block (ram,0x00010a204834) */
/* WARNING: Removing unreachable block (ram,0x00010a20483c) */
/* WARNING: Removing unreachable block (ram,0x00010a204840) */

void FUN_10a204748(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa8;
  
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a20491c(param_5);
  FUN_10a204940(&stack0xffffffffffffffa0,param_2,param_4);
  func_0x00010a1ea71c(plVar6 + 0x62,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
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



/* Entry: 10a204898; end: 10a20491b;  */

void FUN_10a204898(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
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
  FUN_10a052f68(param_1,&uStack_30);
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



/* Entry: 10a20491c; end: 10a20493f;  */

void FUN_10a20491c(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long *plVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar5 = 1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898610(&lStack_50);
  if (lStack_50 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_50,&PTR_DAT_110b178e0,&PTR_DAT_110c48e80,0x10);
    if (lStack_50 == 0) {
      plVar7 = &lStack_60;
    }
    else {
      plStack_58 = plStack_48;
      plVar7 = &lStack_50;
      lStack_60 = lStack_50;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    if (lStack_60 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a204a5c);
      (*pcVar4)();
    }
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    FUN_10a204a7c(extraout_x8,&lStack_60,&uStack_70);
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a204940; end: 10a204a7b;  */

void FUN_10a204940(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c48e80,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a204a5c);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a204a7c(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a204a7c; end: 10a204dff;  */

void FUN_10a204a7c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
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
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a204e00; end: 10a204ebb;  */

void FUN_10a204e00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf((ulong)*(uint *)((long)param_2 + 0x2cc));
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a204ebc; end: 10a204f93;  */

void FUN_10a204ebc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a142e2c(param_5);
  func_0x00010a137904(param_2,param_4);
  uVar2 = (uint)param_2;
  if (uVar2 < 3) {
    uVar2 = 2;
  }
  if (799 < uVar2) {
    uVar2 = 800;
  }
  *(uint *)((long)plVar5 + 0x2cc) = uVar2;
  *param_1 = 0;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
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



/* Entry: 10a204f94; end: 10a205063;  */

void FUN_10a204f94(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x2dc);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x2d4);
  FUN_10a1fb84c(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a205064; end: 10a20512b;  */

void FUN_10a205064(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a1fbe54(param_5);
  func_0x00010a1fba38(param_2,param_4);
  lVar5 = *param_2;
  *(long *)((long)plVar4 + 0x2dc) = param_2[1];
  *(long *)((long)plVar4 + 0x2d4) = lVar5;
  *param_1 = 0;
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



/* Entry: 10a20512c; end: 10a2051e7;  */

void FUN_10a20512c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x59);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 & 1;
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



/* Entry: 10a2051e8; end: 10a2052b3;  */

void FUN_10a2051e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(byte *)(plVar4 + 0x59) = *(byte *)(plVar4 + 0x59) & 0xfe | (byte)param_2;
  *param_1 = 0;
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



/* Entry: 10a2052b4; end: 10a205397;  */

void FUN_10a2052b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar2 + 0x2cc));
  uStack_48 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar2 + 0x304) >> 0x20) * fVar3 * 0.25,
                       (float)*(undefined8 *)((long)plVar2 + 0x304) * fVar3 * 0.25);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a205398; end: 10a205477;  */

void FUN_10a205398(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar4 + 0x2cc));
  *(ulong *)((long)plVar4 + 0x304) =
       CONCAT44((float)((ulong)*param_2 >> 0x20) / (fVar14 * 0.25),(float)*param_2 / (fVar14 * 0.25)
               );
  *param_1 = 0;
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



/* Entry: 10a205478; end: 10a205547;  */

void FUN_10a205478(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x2f4);
  uStack_44 = (undefined4)plVar2[0x60];
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a205548; end: 10a205617;  */

void FUN_10a205548(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 uVar14;
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  uVar14 = (undefined4)*param_2;
  *(long *)((long)plVar4 + 0x2fc) = *param_2;
  *(ulong *)((long)plVar4 + 0x2f4) = CONCAT44(uVar14,uVar14);
  *param_1 = 0;
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



/* Entry: 10a205618; end: 10a2056e7;  */

void FUN_10a205618(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x304);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a2056e8; end: 10a2057af;  */

void FUN_10a2056e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *(long *)((long)plVar4 + 0x304) = *param_2;
  *param_1 = 0;
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



/* Entry: 10a2057b0; end: 10a20587f;  */

void FUN_10a2057b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x2fc);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x2f4);
  FUN_10a1fb84c(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a205880; end: 10a205947;  */

void FUN_10a205880(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a1fbe54(param_5);
  func_0x00010a1fba38(param_2,param_4);
  lVar5 = *param_2;
  *(long *)((long)plVar4 + 0x2fc) = param_2[1];
  *(long *)((long)plVar4 + 0x2f4) = lVar5;
  *param_1 = 0;
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



/* Entry: 10a205948; end: 10a205a03;  */

void FUN_10a205948(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x59);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 1 & 1;
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



/* Entry: 10a205a04; end: 10a205adb;  */

void FUN_10a205a04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 2;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 0x59) = *(byte *)(plVar4 + 0x59) & 0xfd | bVar7;
  *param_1 = 0;
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
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
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
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a205adc; end: 10a205b97;  */

void FUN_10a205adc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x5a);
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



/* Entry: 10a205b98; end: 10a205c9b;  */

void FUN_10a205b98(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  float fVar15;
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a205c88);
    (*pcVar2)();
  }
  fVar15 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar15 = 0.0;
  }
  fVar14 = 0.0;
  if (0.0 <= fVar15) {
    fVar14 = fVar15;
  }
  fVar15 = 1.0;
  if (fVar14 <= 1.0) {
    fVar15 = fVar14;
  }
  *(float *)(param_2 + 0x5a) = fVar15;
  *param_1 = 0;
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



/* Entry: 10a205c9c; end: 10a205d6b;  */

void FUN_10a205c9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x2ec);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x2e4);
  FUN_10a1fb84c(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a205d6c; end: 10a205e33;  */

void FUN_10a205d6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a1fbe54(param_5);
  func_0x00010a1fba38(param_2,param_4);
  lVar5 = *param_2;
  *(long *)((long)plVar4 + 0x2ec) = param_2[1];
  *(long *)((long)plVar4 + 0x2e4) = lVar5;
  *param_1 = 0;
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



/* Entry: 10a205e34; end: 10a205ee7;  */

void FUN_10a205e34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a204334(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 1;
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



/* Entry: 10a205ee8; end: 10a205f9f;  */

void FUN_10a205ee8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a20445c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *param_1 = 0;
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



/* Entry: 10a205fa0; end: 10a2060e7;  */

long FUN_10a205fa0(long param_1)

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



/* Entry: 10a2060e8; end: 10a206103;  */

void FUN_10a2060e8(void)

{
  return;
}



/* Entry: 10a206104; end: 10a20635f;  */

undefined1  [16]
FUN_10a206104(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  uVar7 = param_2;
  FUN_10a2063e0();
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      unaff_x27 = uVar10 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x27 = uVar7 - uVar5 * uVar9;
      }
    }
    puVar4 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar4; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar5 = plVar8[1];
        if (uVar5 == uVar7) {
          if (plVar8[6] == *(long *)(param_2 + 0x20)) {
            plVar2 = plVar8 + 2;
            FUN_10a2064c0(plVar2,param_2);
            if (((ulong)plVar2 & 1) != 0) {
              uVar3 = 0;
              goto LAB_10a20631c;
            }
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar5 = uVar5 & uVar10;
          }
          else if (uVar9 <= uVar5) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar5 / uVar9;
            }
            uVar5 = uVar5 - uVar1 * uVar9;
          }
          if (uVar5 != unaff_x27) break;
        }
      }
    }
  }
  FUN_10a206360(aplStack_78,param_1,uVar7,param_3,param_4,param_5);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar9) {
      uVar10 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar10 = uVar10 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_10a20661c(param_1,uVar10);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x27 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar9 <= uVar7) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar7 / uVar9;
        }
        unaff_x27 = uVar7 - uVar10 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
    *(long **)(lVar6 + unaff_x27 * 8) = plVar8;
    if (*aplStack_78[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar10 * uVar9;
      }
      *(long **)(*param_1 + uVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar8 = aplStack_78[0];
LAB_10a20631c:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a206360; end: 10a2063df;  */

void FUN_10a206360(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uStack_38 = *param_5;
  FUN_10a206588(puVar1 + 2,&uStack_38,&uStack_39);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a2063e0; end: 10a206477;  */

ulong FUN_10a2063e0(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = ((ulong)(uint)((int)uVar1 << 3) + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  uVar2 = (uVar1 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  uVar1 = (ulong)*param_1 + 0x9e3779b9;
  uVar1 = (ulong)param_1[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  FUN_10a206478(uVar1,param_1 + 2);
  uVar2 = (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297 + 0x9e3779b9;
  return uVar1 + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
}



/* Entry: 10a206478; end: 10a2064bf;  */

ulong FUN_10a206478(ulong param_1,long *param_2)

{
  float *pfVar1;
  
  for (pfVar1 = (float *)*param_2; pfVar1 != (float *)param_2[1]; pfVar1 = pfVar1 + 1) {
    param_1 = param_1 + 0x9e3779b9;
    param_1 = param_1 * 0x40 + 0x9e3779b9 + (param_1 >> 2) + (long)(int)(*pfVar1 / 0.001) ^ param_1;
  }
  return param_1;
}



/* Entry: 10a2064c0; end: 10a20651b;  */

int * FUN_10a2064c0(int *param_1,int *param_2)

{
  undefined *puStack_18;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    puStack_18 = &UNK_10e49e72c;
    param_1 = param_1 + 2;
    FUN_10a20651c(param_1,param_2 + 2,&puStack_18);
    return param_1;
  }
  return (int *)0x0;
}



/* Entry: 10a20651c; end: 10a206587;  */

bool FUN_10a20651c(long *param_1,long *param_2,undefined8 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar3 = (float *)*param_1;
  pfVar1 = (float *)param_1[1];
  pfVar5 = (float *)*param_2;
  pfVar2 = (float *)param_2[1];
  if ((long)pfVar1 - (long)pfVar3 != (long)pfVar2 - (long)pfVar5) {
    return false;
  }
  if (pfVar3 != pfVar1 && pfVar5 != pfVar2) {
    pfVar4 = pfVar3;
    pfVar6 = pfVar5;
    do {
      pfVar3 = pfVar4 + 1;
      pfVar5 = pfVar6 + 1;
      if (*(float *)*param_3 < ABS(*pfVar4 - *pfVar6)) {
        return false;
      }
    } while ((pfVar3 != pfVar1) && (pfVar4 = pfVar3, pfVar6 = pfVar5, pfVar5 != pfVar2));
  }
  return pfVar3 == pfVar1 && pfVar5 == pfVar2;
}



/* Entry: 10a206588; end: 10a20661b;  */

undefined8 * FUN_10a206588(undefined8 *param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_10a0ca588();
  param_1[4] = param_2[4];
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x3f800000;
  return param_1;
}



/* Entry: 10a20661c; end: 10a2066eb;  */

void FUN_10a20661c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a206664:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a1f4e38(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a206664;
  }
  return;
}



/* Entry: 10a2066ec; end: 10a20686f;  */

void FUN_10a2066ec(ulong *param_1,ulong param_2)

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
          func_0x00010a1f4e38(uVar1 + 0x10);
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



/* Entry: 10a206870; end: 10a20699b;  */

void FUN_10a206870(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined2 param_12)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x48;
  __Znwm();
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(long *)lVar1 = lVar1;
  *(long *)(lVar1 + 8) = lVar1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f800000;
  *(undefined8 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined8 *)(lVar1 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *param_1 = lVar1;
  FUN_10a207074(param_2);
  if (param_6 == 0) {
    FUN_10a207910(param_3,lVar1,param_4,param_7,param_8,param_12,param_9,param_10);
  }
  else {
    FUN_10a24d7e0(param_3,lVar1,param_4);
  }
  for (lVar2 = *(long *)(lVar1 + 8); lVar2 != lVar1; lVar2 = *(long *)(lVar2 + 8)) {
    FUN_10a24e958(lVar2 + 0x10,param_11);
  }
  return;
}



/* Entry: 10a20699c; end: 10a206a93;  */

void FUN_10a20699c(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int7 iVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  long *extraout_x8;
  ulong uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  undefined8 ***pppuVar25;
  long lVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_99 [9];
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    uVar29 = param_2[1];
    uVar28 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar29;
    *puVar4 = uVar28;
    puVar4 = puVar4 + 3;
LAB_10a206a7c:
    param_1[1] = (long)puVar4;
    return;
  }
  lVar26 = (long)puVar4 - *param_1;
  uVar14 = (lVar26 >> 3) * -0x5555555555555555 + 1;
  if (uVar14 < 0xaaaaaaaaaaaaaab) {
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar17 = lVar11 * 0x5555555555555556;
    if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
      uVar17 = uVar14;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar17 = 0xaaaaaaaaaaaaaaa;
    }
    plVar3 = param_1;
    FUN_10a20c6b0();
    puVar8 = (undefined8 *)((long)plVar3 + lVar26);
    uVar29 = param_2[1];
    uVar28 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar29;
    *puVar8 = uVar28;
    puVar4 = puVar8 + 3;
    lVar11 = (long)puVar8 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar26 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar4;
    param_1[2] = (long)(plVar3 + uVar17 * 3);
    if (lVar26 != 0) {
      __ZdlPv();
    }
    goto LAB_10a206a7c;
  }
  FUN_10a20c69c();
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined8 *)((long)puVar4 + 0x8c) = 0;
  *(undefined8 *)((long)puVar4 + 0x84) = 0;
  *(undefined8 *)((long)puVar4 + 0x1c) = 0;
  *(undefined8 *)((long)puVar4 + 0x14) = 0;
  *(undefined8 *)((long)puVar4 + 0x2c) = 0;
  *(undefined8 *)((long)puVar4 + 0x24) = 0;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x44) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0;
  *(undefined8 *)((long)puVar4 + 0x74) = 0;
  *(undefined4 *)(puVar4 + 0x12) = 0x3f800000;
  *(undefined4 *)((long)puVar4 + 0x94) = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  *extraout_x8 = (long)puVar4;
  uVar28 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar28;
  lVar26 = *param_1;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar26 + 0x18);
  FUN_10a20ca4c(&pppuStack_120,lVar26,param_3);
  FUN_10a20d2c0(puVar4 + 3);
  puVar4[4] = uStack_118;
  puVar4[3] = pppuStack_120;
  puVar4[5] = lStack_110;
  uStack_118 = 0;
  lStack_110 = 0;
  pppuStack_120 = (undefined8 ***)0x0;
  pppuStack_d0 = &pppuStack_120;
  FUN_10a20c8a8(&pppuStack_d0);
  FUN_10a20d328(puVar4 + 0xe,*param_1 + 0x20);
  FUN_10a20cd70(&pppuStack_120,*param_1);
  FUN_10a20d9b0(puVar4 + 0x13);
  puVar4[0x14] = uStack_118;
  puVar4[0x13] = pppuStack_120;
  puVar4[0x15] = lStack_110;
  uStack_118 = 0;
  lStack_110 = 0;
  pppuStack_120 = (undefined8 ****)0x0;
  pppuStack_d0 = &pppuStack_120;
  FUN_10a208bbc(&pppuStack_d0);
  uStack_c8 = 0;
  pppuStack_d0 = (undefined8 ***)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3f800000;
  func_0x00010a20da18(&pppuStack_d0,(long)(float)*(ulong *)(*param_1 + 0x10));
  pfVar9 = (float *)puVar4[3];
  pfVar13 = (float *)puVar4[4];
  if (pfVar13 != pfVar9) {
    pppuVar25 = (undefined8 ***)0x0;
    lVar26 = 0x40;
    do {
      pppuStack_d8 = *(undefined8 ****)((long)pfVar9 + lVar26);
      ppppuVar5 = &pppuStack_d0;
      FUN_10a20dc24(ppppuVar5,&pppuStack_d8);
      if (ppppuVar5 == (undefined8 ****)0x0) {
        ppppuVar5 = &pppuStack_d0;
        pppuStack_120 = &pppuStack_d8;
        FUN_10a20dcc4(ppppuVar5,&pppuStack_d8,&UNK_10dd5b8f9,&pppuStack_120,auStack_99);
        ppppuVar5[3] = pppuVar25;
      }
      pppuVar25 = (undefined8 ***)((long)pppuVar25 + 1);
      ppppuVar5[4] = pppuVar25;
      pfVar9 = (float *)puVar4[3];
      pfVar13 = (float *)puVar4[4];
      lVar26 = lVar26 + 0x70;
    } while (pppuVar25 < (undefined8 ***)(((long)pfVar13 - (long)pfVar9 >> 4) * 0x6db6db6db6db6db7))
    ;
  }
  pppuStack_d8 = (undefined8 ****)0x0;
  lVar26 = *param_1;
  lVar11 = *(long *)(lVar26 + 8);
  if (lVar11 != lVar26) {
    do {
      lVar26 = *(long *)(lVar11 + 8);
      FUN_10a20ded0(puVar4 + 8,puVar4[9],*(long *)(lVar11 + 0x58),*(long *)(lVar11 + 0x60),
                    (*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58) >> 3) * -0x5555555555555555
                   );
      uVar14 = lVar11 + 0x10;
      FUN_10a24d004();
      if (uVar14 != 0) {
        uVar17 = 0;
        do {
          uStack_f0 = 0;
          uStack_f8 = 0;
          ppuStack_100 = (undefined8 ***)0x0;
          ppuStack_108 = (undefined8 ***)0x0;
          lStack_110 = 0;
          uStack_118 = 0;
          uVar7 = 0;
          if (*(long *)(lVar11 + 0x20) != 0) {
            uVar7 = (ulong)*(byte *)(*(long *)(lVar11 + 0x18) + 0x70);
          }
          uStack_e8 = (uVar7 & 1) << 0x30;
          uVar7 = (*(long *)(lVar11 + 0x130) - *(long *)(lVar11 + 0x128) >> 2) * -0x5555555555555555
          ;
          pppuStack_120 = pppuStack_d8;
          if (uVar7 < uVar17 || uVar7 - uVar17 == 0) {
LAB_10a207018:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a20701c);
            (*pcVar2)();
          }
          puVar8 = (undefined8 *)(*(long *)(lVar11 + 0x128) + uVar17 * 0xc);
          uStack_f8 = *puVar8;
          uStack_f0 = (ulong)*(uint *)(puVar8 + 1);
          ppppuVar5 = &pppuStack_d0;
          FUN_10a20dc24(ppppuVar5,&pppuStack_d8);
          if (ppppuVar5 == (undefined8 ****)0x0) {
            ppuStack_108 = (undefined8 **)
                           (((long)(puVar4[4] - puVar4[3]) >> 4) * 0x6db6db6db6db6db7);
            ppuStack_100 = ppuStack_108;
          }
          else {
            ppuStack_108 = ppppuVar5[3];
            ppuStack_100 = ppppuVar5[4];
          }
          lVar16 = *(long *)(lVar11 + 0x70);
          if (uVar17 == 0) {
            uVar7 = 0;
            uVar15 = *(long *)(lVar11 + 0x78) - lVar16 >> 3;
          }
          else {
            uVar15 = *(long *)(lVar11 + 0x78) - lVar16 >> 3;
            if (uVar15 <= uVar17 - 1) goto LAB_10a207018;
            uVar7 = *(long *)(lVar16 + (uVar17 - 1) * 8) + 1;
          }
          if (uVar17 < uVar15) {
            uVar15 = *(ulong *)(lVar16 + uVar17 * 8);
            lVar16 = *(long *)(lVar11 + 0x40);
            lVar12 = *(long *)(lVar11 + 0x48);
          }
          else {
            lVar16 = *(long *)(lVar11 + 0x40);
            lVar12 = *(long *)(lVar11 + 0x48);
            uVar15 = (lVar12 - lVar16 >> 3) * -0x70a3d70a3d70a3d7 - 1;
          }
          uStack_118 = 0xffffffffffffffff;
          if ((lVar16 == lVar12) ||
             (uVar20 = (lVar12 - lVar16 >> 3) * -0x70a3d70a3d70a3d7,
             uVar20 <= uVar7 || uVar15 < uVar7)) {
LAB_10a206e68:
            uVar18 = *(ulong *)(lVar11 + 0xc0);
            uStack_118 = uVar18;
          }
          else {
            uVar18 = 0;
            piVar23 = (int *)(lVar16 + uVar7 * 200 + 0xb0);
            uVar21 = 0xffffffffffffffff;
            do {
              uVar22 = uVar21;
              if ((char)piVar23[-0x20] == '\x01') {
                uVar24 = *(ulong *)(piVar23 + -0x22);
                uVar22 = uVar24;
                if (uVar21 <= uVar24) {
                  uVar22 = uVar21;
                }
                uStack_118 = uVar22;
                if (uVar18 <= uVar24 + (long)*piVar23) {
                  uVar18 = uVar24 + (long)*piVar23;
                }
              }
              if (uVar15 <= uVar7) break;
              uVar7 = uVar7 + 1;
              piVar23 = piVar23 + 0x32;
              uVar21 = uVar22;
            } while (uVar7 < uVar20);
            if (uVar22 == 0xffffffffffffffff) goto LAB_10a206e68;
          }
          bVar6 = false;
          uStack_e8._0_7_ = (uint7)CONCAT31(uStack_e8._5_3_,lVar16 == lVar12) << 0x20;
          iVar1 = (int7)uStack_e8;
          uStack_e8 = CONCAT17(*(undefined1 *)(lVar11 + 0x120),(int7)uStack_e8);
          if (uVar17 == uVar14 - 1) {
            iVar10 = 0;
            if (lVar26 != *param_1) {
              iVar10 = *(int *)(lVar26 + 200);
              bVar6 = 0 < iVar10;
            }
          }
          else {
            iVar10 = 0;
          }
          uStack_e8._0_6_ = CONCAT15(bVar6,(int5)iVar1);
          uStack_e8 = CONCAT44(uStack_e8._4_4_,iVar10);
          lStack_110 = uVar18 + (long)iVar10;
          FUN_10a20ce00(puVar4 + 0xb,&pppuStack_120);
          pppuStack_d8 = (undefined8 ***)((long)pppuStack_d8 + 1);
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar14);
      }
      lVar11 = *(long *)(lVar11 + 8);
      lVar26 = *param_1;
    } while (lVar11 != lVar26);
    pfVar9 = (float *)puVar4[3];
    pfVar13 = (float *)puVar4[4];
  }
  if (*(int *)(param_4 + 0x18) < 0x15c) {
    if (pfVar9 != pfVar13) {
      fVar27 = *pfVar9;
      *(float *)(puVar4 + 6) = fVar27;
      fVar30 = pfVar9[2];
      *(float *)(puVar4 + 7) = fVar30;
      pfVar19 = pfVar9;
      do {
        fVar31 = *pfVar19;
        if (fVar31 < fVar27) {
          *(float *)(puVar4 + 6) = fVar31;
          fVar27 = fVar31;
        }
        fVar31 = pfVar19[2];
        if (fVar30 < fVar31) {
          *(float *)(puVar4 + 7) = fVar31;
          fVar30 = fVar31;
        }
        pfVar19 = pfVar19 + 0x1c;
      } while (pfVar19 != pfVar13);
      goto LAB_10a206fd0;
    }
  }
  else if (pfVar9 != pfVar13) {
    fVar27 = *pfVar9 + pfVar9[8];
    *(float *)(puVar4 + 6) = fVar27;
    fVar30 = pfVar9[2] - pfVar9[8];
    *(float *)(puVar4 + 7) = fVar30;
    pfVar19 = pfVar9;
    do {
      fVar31 = pfVar19[8];
      fVar32 = *pfVar19 + fVar31;
      if (fVar32 < fVar27) {
        *(float *)(puVar4 + 6) = fVar32;
        fVar31 = pfVar19[8];
        fVar27 = fVar32;
      }
      fVar31 = pfVar19[2] - fVar31;
      if (fVar30 < fVar31) {
        *(float *)(puVar4 + 7) = fVar31;
        fVar30 = fVar31;
      }
      pfVar19 = pfVar19 + 0x1c;
    } while (pfVar19 != pfVar13);
LAB_10a206fd0:
    if (pfVar9 != pfVar13) goto LAB_10a206ff0;
  }
  if (*(long *)(lVar26 + 0x10) != 0) {
    *(undefined4 *)(puVar4 + 6) = *(undefined4 *)param_2;
    *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_2 + 1);
  }
LAB_10a206ff0:
  func_0x00010a20e170(&pppuStack_d0);
  return;
}



/* Entry: 10a206a94; end: 10a207073;  */

void FUN_10a206a94(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  int7 iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 ***pppuVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 ***pppuStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_69 [9];
  
  puVar3 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined8 *)((long)puVar3 + 0x8c) = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0;
  *(undefined8 *)((long)puVar3 + 0x1c) = 0;
  *(undefined8 *)((long)puVar3 + 0x14) = 0;
  *(undefined8 *)((long)puVar3 + 0x2c) = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0;
  *(undefined8 *)((long)puVar3 + 0x3c) = 0;
  *(undefined8 *)((long)puVar3 + 0x34) = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 0x54) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined4 *)(puVar3 + 0x12) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x94) = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  *param_1 = (long)puVar3;
  uVar27 = *param_3;
  puVar3[1] = param_3[1];
  *puVar3 = uVar27;
  lVar4 = *param_2;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(lVar4 + 0x18);
  FUN_10a20ca4c(&pppuStack_f0,lVar4,param_4);
  FUN_10a20d2c0(puVar3 + 3);
  puVar3[4] = uStack_e8;
  puVar3[3] = pppuStack_f0;
  puVar3[5] = lStack_e0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  pppuStack_f0 = (undefined8 ***)0x0;
  pppuStack_a0 = &pppuStack_f0;
  FUN_10a20c8a8(&pppuStack_a0);
  FUN_10a20d328(puVar3 + 0xe,*param_2 + 0x20);
  FUN_10a20cd70(&pppuStack_f0,*param_2);
  FUN_10a20d9b0(puVar3 + 0x13);
  puVar3[0x14] = uStack_e8;
  puVar3[0x13] = pppuStack_f0;
  puVar3[0x15] = lStack_e0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  pppuStack_f0 = (undefined8 ****)0x0;
  pppuStack_a0 = &pppuStack_f0;
  FUN_10a208bbc(&pppuStack_a0);
  uStack_98 = 0;
  pppuStack_a0 = (undefined8 ***)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0x3f800000;
  func_0x00010a20da18(&pppuStack_a0,(long)(float)*(ulong *)(*param_2 + 0x10));
  pfVar10 = (float *)puVar3[3];
  pfVar13 = (float *)puVar3[4];
  if (pfVar13 != pfVar10) {
    pppuVar23 = (undefined8 ***)0x0;
    lVar4 = 0x40;
    do {
      pppuStack_a8 = *(undefined8 ****)((long)pfVar10 + lVar4);
      ppppuVar5 = &pppuStack_a0;
      FUN_10a20dc24(ppppuVar5,&pppuStack_a8);
      if (ppppuVar5 == (undefined8 ****)0x0) {
        ppppuVar5 = &pppuStack_a0;
        pppuStack_f0 = &pppuStack_a8;
        FUN_10a20dcc4(ppppuVar5,&pppuStack_a8,&UNK_10dd5b8f9,&pppuStack_f0,auStack_69);
        ppppuVar5[3] = pppuVar23;
      }
      pppuVar23 = (undefined8 ***)((long)pppuVar23 + 1);
      ppppuVar5[4] = pppuVar23;
      pfVar10 = (float *)puVar3[3];
      pfVar13 = (float *)puVar3[4];
      lVar4 = lVar4 + 0x70;
    } while (pppuVar23 < (undefined8 ***)(((long)pfVar13 - (long)pfVar10 >> 4) * 0x6db6db6db6db6db7)
            );
  }
  pppuStack_a8 = (undefined8 ****)0x0;
  lVar4 = *param_2;
  lVar25 = *(long *)(lVar4 + 8);
  if (lVar25 != lVar4) {
    do {
      lVar4 = *(long *)(lVar25 + 8);
      FUN_10a20ded0(puVar3 + 8,puVar3[9],*(long *)(lVar25 + 0x58),*(long *)(lVar25 + 0x60),
                    (*(long *)(lVar25 + 0x60) - *(long *)(lVar25 + 0x58) >> 3) * -0x5555555555555555
                   );
      uVar6 = lVar25 + 0x10;
      FUN_10a24d004();
      if (uVar6 != 0) {
        uVar24 = 0;
        do {
          uStack_c0 = 0;
          uStack_c8 = 0;
          ppuStack_d0 = (undefined8 ***)0x0;
          ppuStack_d8 = (undefined8 ***)0x0;
          lStack_e0 = 0;
          uStack_e8 = 0;
          uVar8 = 0;
          if (*(long *)(lVar25 + 0x20) != 0) {
            uVar8 = (ulong)*(byte *)(*(long *)(lVar25 + 0x18) + 0x70);
          }
          uStack_b8 = (uVar8 & 1) << 0x30;
          uVar8 = (*(long *)(lVar25 + 0x130) - *(long *)(lVar25 + 0x128) >> 2) * -0x5555555555555555
          ;
          pppuStack_f0 = pppuStack_a8;
          if (uVar8 < uVar24 || uVar8 - uVar24 == 0) {
LAB_10a207018:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a20701c);
            (*pcVar2)();
          }
          puVar9 = (undefined8 *)(*(long *)(lVar25 + 0x128) + uVar24 * 0xc);
          uStack_c8 = *puVar9;
          uStack_c0 = (ulong)*(uint *)(puVar9 + 1);
          ppppuVar5 = &pppuStack_a0;
          FUN_10a20dc24(ppppuVar5,&pppuStack_a8);
          if (ppppuVar5 == (undefined8 ****)0x0) {
            ppuStack_d8 = (undefined8 **)(((long)(puVar3[4] - puVar3[3]) >> 4) * 0x6db6db6db6db6db7)
            ;
            ppuStack_d0 = ppuStack_d8;
          }
          else {
            ppuStack_d8 = ppppuVar5[3];
            ppuStack_d0 = ppppuVar5[4];
          }
          lVar15 = *(long *)(lVar25 + 0x70);
          if (uVar24 == 0) {
            uVar8 = 0;
            uVar14 = *(long *)(lVar25 + 0x78) - lVar15 >> 3;
          }
          else {
            uVar14 = *(long *)(lVar25 + 0x78) - lVar15 >> 3;
            if (uVar14 <= uVar24 - 1) goto LAB_10a207018;
            uVar8 = *(long *)(lVar15 + (uVar24 - 1) * 8) + 1;
          }
          if (uVar24 < uVar14) {
            uVar14 = *(ulong *)(lVar15 + uVar24 * 8);
            lVar15 = *(long *)(lVar25 + 0x40);
            lVar12 = *(long *)(lVar25 + 0x48);
          }
          else {
            lVar15 = *(long *)(lVar25 + 0x40);
            lVar12 = *(long *)(lVar25 + 0x48);
            uVar14 = (lVar12 - lVar15 >> 3) * -0x70a3d70a3d70a3d7 - 1;
          }
          uStack_e8 = 0xffffffffffffffff;
          if ((lVar15 == lVar12) ||
             (uVar18 = (lVar12 - lVar15 >> 3) * -0x70a3d70a3d70a3d7,
             uVar18 <= uVar8 || uVar14 < uVar8)) {
LAB_10a206e68:
            uVar16 = *(ulong *)(lVar25 + 0xc0);
            uStack_e8 = uVar16;
          }
          else {
            uVar16 = 0;
            piVar21 = (int *)(lVar15 + uVar8 * 200 + 0xb0);
            uVar19 = 0xffffffffffffffff;
            do {
              uVar20 = uVar19;
              if ((char)piVar21[-0x20] == '\x01') {
                uVar22 = *(ulong *)(piVar21 + -0x22);
                uVar20 = uVar22;
                if (uVar19 <= uVar22) {
                  uVar20 = uVar19;
                }
                uStack_e8 = uVar20;
                if (uVar16 <= uVar22 + (long)*piVar21) {
                  uVar16 = uVar22 + (long)*piVar21;
                }
              }
              if (uVar14 <= uVar8) break;
              uVar8 = uVar8 + 1;
              piVar21 = piVar21 + 0x32;
              uVar19 = uVar20;
            } while (uVar8 < uVar18);
            if (uVar20 == 0xffffffffffffffff) goto LAB_10a206e68;
          }
          bVar7 = false;
          uStack_b8._0_7_ = (uint7)CONCAT31(uStack_b8._5_3_,lVar15 == lVar12) << 0x20;
          iVar1 = (int7)uStack_b8;
          uStack_b8 = CONCAT17(*(undefined1 *)(lVar25 + 0x120),(int7)uStack_b8);
          if (uVar24 == uVar6 - 1) {
            iVar11 = 0;
            if (lVar4 != *param_2) {
              iVar11 = *(int *)(lVar4 + 200);
              bVar7 = 0 < iVar11;
            }
          }
          else {
            iVar11 = 0;
          }
          uStack_b8._0_6_ = CONCAT15(bVar7,(int5)iVar1);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar11);
          lStack_e0 = uVar16 + (long)iVar11;
          FUN_10a20ce00(puVar3 + 0xb,&pppuStack_f0);
          pppuStack_a8 = (undefined8 ***)((long)pppuStack_a8 + 1);
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar6);
      }
      lVar25 = *(long *)(lVar25 + 8);
      lVar4 = *param_2;
    } while (lVar25 != lVar4);
    pfVar10 = (float *)puVar3[3];
    pfVar13 = (float *)puVar3[4];
  }
  if (*(int *)(param_5 + 0x18) < 0x15c) {
    if (pfVar10 != pfVar13) {
      fVar26 = *pfVar10;
      *(float *)(puVar3 + 6) = fVar26;
      fVar28 = pfVar10[2];
      *(float *)(puVar3 + 7) = fVar28;
      pfVar17 = pfVar10;
      do {
        fVar29 = *pfVar17;
        if (fVar29 < fVar26) {
          *(float *)(puVar3 + 6) = fVar29;
          fVar26 = fVar29;
        }
        fVar29 = pfVar17[2];
        if (fVar28 < fVar29) {
          *(float *)(puVar3 + 7) = fVar29;
          fVar28 = fVar29;
        }
        pfVar17 = pfVar17 + 0x1c;
      } while (pfVar17 != pfVar13);
      goto LAB_10a206fd0;
    }
  }
  else if (pfVar10 != pfVar13) {
    fVar26 = *pfVar10 + pfVar10[8];
    *(float *)(puVar3 + 6) = fVar26;
    fVar28 = pfVar10[2] - pfVar10[8];
    *(float *)(puVar3 + 7) = fVar28;
    pfVar17 = pfVar10;
    do {
      fVar29 = pfVar17[8];
      fVar30 = *pfVar17 + fVar29;
      if (fVar30 < fVar26) {
        *(float *)(puVar3 + 6) = fVar30;
        fVar29 = pfVar17[8];
        fVar26 = fVar30;
      }
      fVar29 = pfVar17[2] - fVar29;
      if (fVar28 < fVar29) {
        *(float *)(puVar3 + 7) = fVar29;
        fVar28 = fVar29;
      }
      pfVar17 = pfVar17 + 0x1c;
    } while (pfVar17 != pfVar13);
LAB_10a206fd0:
    if (pfVar10 != pfVar13) goto LAB_10a206ff0;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)param_3;
    *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_3 + 1);
  }
LAB_10a206ff0:
  func_0x00010a20e170(&pppuStack_a0);
  return;
}



/* Entry: 10a207074; end: 10a20790f;  */

void FUN_10a207074(float param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong unaff_x24;
  long lVar15;
  undefined1 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong in_stack_fffffffffffffde0;
  undefined4 uStack_214;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  long lStack_1a8;
  long lStack_1a0;
  long *plStack_188;
  ulong uStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined8 uStack_d0;
  long *plStack_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  uStack_d8 = 0xffffffff;
  uStack_d4 = 1;
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_bc = 0;
  fStack_b8 = 0.0;
  uStack_ac = 0;
  uStack_a8 = 0;
  fStack_b4 = 0.0;
  uStack_b0 = 0;
  fStack_c0 = 1.0;
  uStack_a4 = 0;
  plStack_108 = (long *)0x0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_f0 = 0x3f800000;
  uStack_e8 = 0;
  uStack_1e0 = 0;
  plVar14 = param_3 + 0xb;
  FUN_10a208574(plVar14,&uStack_1e0);
  if (plVar14 != (long *)0x0) {
    FUN_10a24d058(param_2,plVar14 + 3);
  }
  lVar15 = *param_3;
  if (param_3[1] == lVar15) {
    uVar9 = 0;
  }
  else {
    uVar13 = 0;
    uVar16 = 0;
    bVar5 = false;
    plVar14 = (long *)0x0;
    fVar18 = 0.0;
    do {
      plVar11 = param_3 + 3;
      FUN_10a20cf48(plVar11,lVar15 + uVar13 * 0x28);
      if (plVar11 == (long *)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
LAB_10a207860:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a207864);
        (*pcVar7)();
      }
      lVar15 = param_3[8];
      uVar9 = (param_3[9] - lVar15 >> 2) * -0x5555555555555555;
      if (uVar9 < uVar13 || uVar9 - uVar13 == 0) goto LAB_10a207860;
      plVar10 = param_3 + 0xb;
      uStack_1e0 = uVar13;
      FUN_10a208574(plVar10,&uStack_1e0);
      if ((uVar13 != 0) && (plVar10 != (long *)0x0)) {
        if (bVar5) {
          *(undefined1 *)((long)plVar14 + 0x72) = 0;
        }
        FUN_10a24d058(param_2,plVar10 + 3);
        bVar5 = false;
      }
      plVar10 = param_3 + 0x10;
      uStack_1e0 = uVar13;
      func_0x00010a208614(plVar10,&uStack_1e0);
      if (plVar10 != (long *)0x0) {
        if (bVar5) {
          *(undefined1 *)((long)plVar14 + 0x72) = uVar16;
        }
        plVar14 = param_2;
        FUN_10a24d330(param_2,(int)plVar10[3] == 1);
        uStack_d8 = (undefined4)plVar10[3];
        uStack_d4 = *(undefined2 *)((long)plVar10 + 0x1c);
        FUN_10a2086b4(&uStack_d0,plVar10 + 4);
        uStack_a8 = (undefined4)plVar10[9];
        uStack_a4 = (undefined4)((ulong)plVar10[9] >> 0x20);
        uStack_b0 = (undefined4)plVar10[8];
        uStack_ac = (undefined4)((ulong)plVar10[8] >> 0x20);
        fStack_b8 = (float)plVar10[7];
        fStack_b4 = (float)((ulong)plVar10[7] >> 0x20);
        fStack_c0 = (float)plVar10[6];
        uStack_bc = (undefined4)((ulong)plVar10[6] >> 0x20);
        plStack_1d8 = (long *)0x0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        plStack_1d0 = (long *)0x0;
        fStack_1c0 = 1.0;
        fStack_1bc = 0.0;
        fStack_1b8 = 0.0;
        uStack_1b4 = 0;
        FUN_10a2086b4(&uStack_1e0,&uStack_d0);
        plVar10 = plStack_108;
        plStack_108 = plStack_1d8;
        uStack_110 = uStack_1e0;
        uStack_1c8 = CONCAT44(uStack_a4,uStack_a8);
        plStack_1d0 = (long *)CONCAT44(uStack_ac,uStack_b0);
        fStack_1c0 = fStack_c0;
        fStack_1bc = fStack_b8;
        fStack_1b8 = fStack_b4;
        uStack_1b4 = uStack_bc;
        uStack_1e0 = 0;
        plStack_1d8 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 1;
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
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_1d8;
        uStack_e8 = CONCAT44(uStack_1b4,fStack_1b8);
        uStack_f0 = CONCAT44(fStack_1bc,fStack_1c0);
        uStack_f8 = uStack_1c8;
        plStack_100 = plStack_1d0;
        if (plStack_1d8 != (long *)0x0) {
          plVar1 = plStack_1d8 + 1;
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
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        *(float *)((long)plVar14 + 0x7c) = fStack_c0;
        *(float *)(plVar14 + 0x10) = fStack_b8;
        *(float *)((long)plVar14 + 0x84) = fStack_b4;
        fVar18 = 0.0;
        if ((char)uStack_d4 == '\x01') {
          *(float *)(plVar14 + 0xf) = fStack_c0 * param_1 * (fStack_b8 + fStack_b4);
        }
        bVar5 = true;
      }
      lVar15 = lVar15 + uVar13 * 0xc;
      if (((int)plVar11[0xe] < 1) || (*(int *)((long)plVar11 + 0x74) < 1)) {
        if (!bVar5) goto LAB_10a207860;
        FUN_10a24d4f4(plVar14 + 2);
        lVar12 = *param_3;
        uVar9 = (param_3[1] - lVar12 >> 3) * -0x3333333333333333;
        if ((uVar9 < uVar13 || uVar9 - uVar13 == 0) ||
           (uVar9 = (param_3[0x19] - param_3[0x18] >> 3) * -0x5555555555555555,
           uVar9 < uVar13 || uVar9 - uVar13 == 0)) goto LAB_10a207860;
        uVar19 = *(undefined4 *)((long)plVar11 + 0x7c);
        lVar6 = plVar11[0xd];
        uVar20 = *(undefined4 *)((long)plVar11 + 0x6c);
        plVar10 = (long *)(param_3[0x18] + uVar13 * 0x18);
        lStack_210 = 0;
        lStack_208 = 0;
        uStack_200 = 0;
        lVar2 = *plVar10;
        lVar3 = plVar10[1];
        FUN_10a0e9a40(&lStack_210,lVar2,lVar3,lVar3 - lVar2 >> 2);
        if (((ulong)(param_3[0x16] - param_3[0x15] >> 2) <= uVar13) ||
           ((ulong)(param_3[0x1c] - param_3[0x1b] >> 2) <= uVar13)) goto LAB_10a207860;
        unaff_x24 = unaff_x24 & 0xffffffffffffff00 | 1;
        FUN_10a208044(&uStack_1e0,fVar18,0,uVar19,(int)lVar6,uVar20,lVar15,plVar11 + 7,
                      lVar12 + uVar13 * 0x28,&lStack_210,(long)*(int *)(param_3[0x15] + uVar13 * 4),
                      unaff_x24,1,*(undefined4 *)(param_3[0x1b] + uVar13 * 4),&uStack_110);
        FUN_10a208000(plVar14 + 2,&uStack_1e0);
        plVar10 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar1 = plStack_188 + 1;
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
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (lStack_1a8 != 0) {
          lStack_1a0 = lStack_1a8;
          __ZdlPv();
        }
        if (plStack_1d8 != (long *)0x0) {
          plStack_1d0 = plStack_1d8;
          __ZdlPv();
        }
        if (lStack_210 != 0) {
          lStack_208 = lStack_210;
          __ZdlPv();
        }
LAB_10a207608:
        uVar16 = 1;
      }
      else {
        if (((!bVar5) ||
            (lVar12 = *param_3, uVar9 = (param_3[1] - lVar12 >> 3) * -0x3333333333333333,
            uVar9 < uVar13 || uVar9 - uVar13 == 0)) ||
           (uVar9 = (param_3[0x19] - param_3[0x18] >> 3) * -0x5555555555555555,
           uVar9 < uVar13 || uVar9 - uVar13 == 0)) goto LAB_10a207860;
        uVar19 = *(undefined4 *)((long)plVar11 + 0x7c);
        lVar6 = plVar11[0xd];
        uVar20 = *(undefined4 *)((long)plVar11 + 0x6c);
        plVar10 = (long *)(param_3[0x18] + uVar13 * 0x18);
        lStack_1f8 = 0;
        lStack_1f0 = 0;
        uStack_1e8 = 0;
        lVar2 = *plVar10;
        lVar3 = plVar10[1];
        FUN_10a0e9a40(&lStack_1f8,lVar2,lVar3,lVar3 - lVar2 >> 2);
        if (((ulong)(param_3[0x16] - param_3[0x15] >> 2) <= uVar13) ||
           ((ulong)(param_3[0x1c] - param_3[0x1b] >> 2) <= uVar13)) goto LAB_10a207860;
        in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00 | 1;
        FUN_10a208044(&uStack_1e0,fVar18,0,uVar19,(int)lVar6,uVar20,lVar15,plVar11 + 7,
                      lVar12 + uVar13 * 0x28,&lStack_1f8,(long)*(int *)(param_3[0x15] + uVar13 * 4),
                      in_stack_fffffffffffffde0,0,*(undefined4 *)(param_3[0x1b] + uVar13 * 4),
                      &uStack_110,param_4,in_stack_fffffffffffffde0);
        FUN_10a208000(plVar14 + 2,&uStack_1e0);
        plVar10 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar1 = plStack_188 + 1;
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
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (lStack_1a8 != 0) {
          lStack_1a0 = lStack_1a8;
          __ZdlPv();
        }
        if (plStack_1d8 != (long *)0x0) {
          plStack_1d0 = plStack_1d8;
          __ZdlPv();
        }
        if (lStack_1f8 != 0) {
          lStack_1f0 = lStack_1f8;
          __ZdlPv();
        }
        if (uStack_d4._1_1_ == '\x01') {
          FUN_10a24d4f4(plVar14 + 2);
          goto LAB_10a207608;
        }
        uVar16 = 0;
      }
      fVar17 = *(float *)((long)plVar11 + 0x7c) * (float)*(int *)(lVar15 + 8) * (float)uStack_f0;
      if ((char)uStack_d4 == '\x01') {
        fVar17 = fVar17 + *(float *)(plVar14 + 0xf);
      }
      fVar18 = fVar18 + fVar17;
      uVar13 = uVar13 + 1;
      lVar15 = *param_3;
      uVar9 = (param_3[1] - lVar15 >> 3) * -0x3333333333333333;
      bVar5 = true;
    } while (uVar13 <= uVar9 && uVar9 - uVar13 != 0);
    *(undefined1 *)((long)plVar14 + 0x72) = 0;
  }
  param_3 = param_3 + 0xb;
  uStack_1e0 = uVar9;
  FUN_10a208574(param_3,&uStack_1e0);
  if ((param_3 != (long *)0x0) && (uStack_1e0 != 0)) {
    FUN_10a24d058(param_2,param_3 + 3);
  }
  plVar14 = (long *)param_2[1];
  if (plVar14 != param_2) {
    bVar8 = 0;
    do {
      plVar11 = (long *)plVar14[6];
      while (plVar11 != plVar14 + 5) {
        if ((bVar8 & 1) != 0) {
          uStack_214 = 0xffffffff;
          func_0x0001078db2bc((undefined8 *)(plVar11[2] + 0x28),*(undefined8 *)(plVar11[2] + 0x28),
                              &uStack_214);
        }
        lVar15 = 0x71;
        if (*(char *)(plVar11[2] + 0x70) == '\0') {
          lVar15 = 0x72;
        }
        bVar8 = *(byte *)(plVar11[2] + lVar15);
        plVar11 = (long *)plVar11[1];
      }
      plVar14 = (long *)plVar14[1];
    } while (plVar14 != param_2);
  }
  FUN_10a2082e0(param_2);
  if (*(int *)(param_4 + 0x18) < 0x152) {
    while ((param_2[2] != 0 && (*(long *)(param_2[1] + 0x20) == 0))) {
      FUN_10a208380(param_2);
    }
    while ((param_2[2] != 0 && (*(long *)(*param_2 + 0x20) == 0))) {
      func_0x00010a2083c8(param_2);
    }
    for (plVar14 = (long *)param_2[1]; plVar14 != param_2; plVar14 = (long *)plVar14[1]) {
      if (plVar14[4] != 0) {
        lVar15 = plVar14[3];
        plVar11 = (long *)(lVar15 + 0x10);
        if ((*plVar11 != *(long *)(lVar15 + 0x18)) &&
           (plVar10 = (long *)(plVar14[2] + 0x10), *plVar10 != *(long *)(plVar14[2] + 0x18))) {
          plVar1 = plVar10;
          if (*(char *)(lVar15 + 0x70) == '\0') {
            plVar1 = plVar11;
            plVar11 = plVar10;
          }
          FUN_10a208410(plVar1,plVar11);
        }
      }
    }
  }
  plVar14 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar11 = plStack_c8 + 1;
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  return;
}



/* Entry: 10a207910; end: 10a207fff;  */

void FUN_10a207910(undefined8 param_1,long *param_2,float *param_3,int param_4,int param_5,
                  uint param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  float *pfVar2;
  long *plVar3;
  code *pcVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfStack_270;
  float *pfStack_268;
  long lStack_258;
  long lStack_250;
  undefined1 auStack_240 [208];
  undefined1 auStack_170 [208];
  float *pfVar10;
  
  *(undefined4 *)(param_2 + 3) = 0x3f800000;
  if (((param_4 == 3) && (param_3[2] - *param_3 < 1.0)) ||
     ((param_5 == 2 && (param_3[3] - param_3[1] < 1.0)))) {
    if (param_2[2] != 0) {
      plVar15 = (long *)param_2[1];
      plVar6 = *(long **)(*param_2 + 8);
      lVar8 = *plVar15;
      *(long **)(lVar8 + 8) = plVar6;
      *plVar6 = lVar8;
      param_2[2] = 0;
      while (plVar15 != param_2) {
        plVar6 = (long *)plVar15[1];
        func_0x00010a208aac(plVar15 + 2);
        __ZdlPv(plVar15);
        plVar15 = plVar6;
      }
    }
    return;
  }
  if (param_5 == 2) {
    fVar21 = (param_3[2] - *param_3) * 0.975;
    if ((param_4 == 2) && (plVar15 = (long *)param_2[1], plVar15 != param_2)) {
      uVar13 = 1;
      do {
        plVar6 = plVar15 + 2;
        func_0x00010a24d95c(fVar21,(int)param_2[3],plVar6,1);
        uVar13 = uVar13 & (uint)plVar6;
        plVar15 = (long *)plVar15[1];
      } while (plVar15 != param_2);
    }
    else {
      uVar13 = 1;
    }
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a24d554(param_1,plVar15 + 2);
    }
    uVar19 = param_1;
    FUN_10a209054(param_2);
    if ((uVar13 == 0) && (plVar15 = (long *)param_2[1], plVar15 != param_2)) {
      fVar18 = 1.1754944e-38;
      do {
        pfVar5 = (float *)plVar15[0x14];
        fVar16 = 0.0;
        while (pfVar5 != (float *)plVar15[0x15]) {
          pfVar9 = pfVar5 + 2;
          fVar20 = *pfVar5;
          pfVar2 = pfVar5 + 1;
          pfVar5 = pfVar9;
          if (fVar16 <= *pfVar2 - fVar20) {
            fVar16 = *pfVar2 - fVar20;
          }
        }
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
        fVar18 = fVar16;
        plVar15 = (long *)plVar15[1];
      } while (plVar15 != param_2);
    }
    else {
      fVar18 = 1.1754944e-38;
    }
    fVar16 = (param_3[3] - param_3[1]) / (float)uVar19;
    if (fVar21 / fVar18 <= fVar16) {
      fVar16 = fVar21 / fVar18;
    }
    if (fVar16 < 1.0) {
      if (param_4 == 2) {
        iVar14 = 0;
        fVar22 = 1.0;
        fVar18 = fVar16;
        fVar20 = fVar16;
        fVar17 = (fVar16 + 1.0) * 0.5;
        do {
          fVar16 = fVar17;
          plVar15 = (long *)param_2[1];
          if (plVar15 != param_2) {
            do {
              plVar6 = plVar15 + 2;
              func_0x00010a24d95c(fVar21,fVar16,plVar6,1);
              if (((ulong)plVar6 & 1) == 0) goto LAB_10a207b80;
              plVar15 = (long *)plVar15[1];
            } while (plVar15 != param_2);
            plVar15 = (long *)param_2[1];
          }
          for (; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
            FUN_10a24d554(param_1,plVar15 + 2);
          }
          uVar19 = param_1;
          FUN_10a209054(param_2);
          fVar17 = fVar16 * (float)uVar19;
          if (fVar17 <= param_3[3] - param_3[1]) {
            fVar17 = (param_3[3] - param_3[1]) / fVar17;
            if (ABS(fVar17 + -1.0) < 1e-06) break;
            fVar17 = fVar16 * fVar17;
            fVar20 = fVar16;
            if ((fVar22 < fVar17) || (fVar18 = fVar16, ABS(fVar17 - fVar22) < 1e-06)) {
              fVar17 = (fVar16 + fVar22) * 0.5;
              fVar18 = fVar16;
            }
          }
          else {
LAB_10a207b80:
            fVar17 = (fVar20 + fVar16) * 0.5;
            fVar22 = fVar16;
          }
          fVar16 = fVar18;
          iVar14 = iVar14 + 1;
          fVar18 = fVar16;
        } while (iVar14 != 0x10);
      }
      *(float *)(param_2 + 3) = fVar16;
    }
  }
  if (param_4 < 4) {
    if (param_4 == 1) {
      for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
        FUN_10a24e354(auStack_170,param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_8);
        FUN_10a20a078(auStack_170);
      }
    }
    else if (param_4 == 2) {
      plVar15 = (long *)param_2[1];
      if (plVar15 != param_2) {
        uVar13 = 0;
        if ((param_6 & 0x100) != 0) {
          uVar13 = param_6;
        }
        do {
          func_0x00010a24d95c(param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,uVar13 & 0xff);
          plVar15 = (long *)plVar15[1];
        } while (plVar15 != param_2);
      }
    }
    else if (param_4 == 3) {
      for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
        FUN_10a24da00(plVar15 + 2);
        pfVar5 = (float *)plVar15[0x14];
        pfVar2 = (float *)plVar15[0x15];
        if (pfVar5 == pfVar2) {
          fVar21 = 0.0;
          fVar18 = param_3[2] - *param_3;
          if (fVar18 < *(float *)(param_2 + 3) * 0.0) goto LAB_10a207cac;
        }
        else {
          fVar21 = 0.0;
          pfVar9 = pfVar5;
          do {
            pfVar10 = pfVar9 + 2;
            if (fVar21 <= pfVar9[1] - *pfVar9) {
              fVar21 = pfVar9[1] - *pfVar9;
            }
            pfVar9 = pfVar10;
          } while (pfVar10 != pfVar2);
          fVar18 = param_3[2] - *param_3;
          if (fVar18 < fVar21 * *(float *)(param_2 + 3)) {
            fVar21 = 0.0;
            do {
              pfVar9 = pfVar5 + 2;
              if (fVar21 <= pfVar5[1] - *pfVar5) {
                fVar21 = pfVar5[1] - *pfVar5;
              }
              pfVar5 = pfVar9;
            } while (pfVar9 != pfVar2);
LAB_10a207cac:
            *(float *)(param_2 + 3) = fVar18 / fVar21;
          }
        }
      }
    }
  }
  else if (param_4 == 4) {
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a2090d8(param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_7,param_2 + 4,0,param_8)
      ;
    }
  }
  else if (param_4 == 6) {
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a24e644(auStack_240,param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_8);
      FUN_10a20a078(auStack_240);
    }
  }
  else if (param_4 == 5) {
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a2090d8(param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_7,param_2 + 4,1,param_8)
      ;
    }
  }
  for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
    FUN_10a24d554(param_1,plVar15 + 2);
  }
  if (param_5 == 1) {
    FUN_10a209d2c(&pfStack_270,param_2);
    uVar12 = 1;
    if ((pfStack_270 != pfStack_268) && (0.0 < param_3[3] - param_3[1])) {
      fVar21 = *(float *)(param_2 + 3);
      if ((fVar21 <= 0.0) || (uVar7 = (long)pfStack_268 - (long)pfStack_270 >> 2, uVar7 < 2)) {
        uVar12 = 1;
      }
      else {
        fVar16 = fVar21 * *pfStack_270;
        uVar11 = 1;
        fVar18 = *pfStack_270;
        do {
          pfVar5 = pfStack_270 + uVar11;
          fVar16 = fVar16 + fVar21 * (*pfVar5 + ((float)param_1 + -1.0) * fVar18);
          uVar12 = uVar11;
          if (param_3[3] - param_3[1] < fVar16) break;
          uVar11 = uVar11 + 1;
          uVar12 = uVar7;
          fVar18 = *pfVar5;
        } while (uVar7 != uVar11);
        uVar12 = uVar12 & 0xffffffff;
      }
    }
    plVar15 = (long *)param_2[1];
    if (plVar15 != param_2) {
      uVar7 = 0;
      do {
        plVar6 = plVar15 + 2;
        FUN_10a24d004();
        uVar7 = (long)plVar6 + uVar7;
        plVar3 = (long *)(uVar7 - uVar12);
        if (uVar12 <= uVar7 && plVar3 != (long *)0x0) {
          lVar8 = (long)plVar6 - (long)plVar3;
          if (plVar6 < plVar3 || lVar8 == 0) {
            func_0x00010a209e50(param_2,plVar15,param_2);
            break;
          }
          lVar1 = plVar15[0xe];
          uVar12 = lVar8 - 1;
          if (uVar12 < (ulong)(plVar15[0xf] - lVar1 >> 3)) {
            func_0x00010a209ec8(plVar15 + 8,*(long *)(lVar1 + uVar12 * 8) + 1);
            lVar1 = plVar15[0x11];
            if (uVar12 < (ulong)(plVar15[0x12] - lVar1 >> 3)) {
              FUN_10a209f54(plVar15 + 0xb,*(long *)(lVar1 + uVar12 * 8) + 1);
              func_0x000107380640(plVar15 + 0xe,uVar12);
              func_0x000107380640(plVar15 + 0x11,uVar12);
              func_0x00010a209f90(plVar15 + 0x25,lVar8);
              func_0x00010a209e50(param_2,plVar15[1],param_2);
              break;
            }
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a207fe4);
          (*pcVar4)();
        }
        plVar15 = (long *)plVar15[1];
      } while (plVar15 != param_2);
    }
    if (lStack_258 != 0) {
      lStack_250 = lStack_258;
      __ZdlPv();
    }
    if (pfStack_270 != (float *)0x0) {
      pfStack_268 = pfStack_270;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a208000; end: 10a208043;  */

void FUN_10a208000(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a2088c8(uVar1);
    lVar2 = uVar1 + 200;
  }
  else {
    lVar2 = param_1;
    FUN_10a208794();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a208044; end: 10a208297;  */

void FUN_10a208044(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,long param_8,undefined8 *param_9,undefined8 *param_10
                  ,undefined8 param_11,undefined1 param_12,int param_13,undefined4 param_14,
                  long param_15)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  fVar12 = *(float *)(param_15 + 0x20);
  param_4 = param_4 * fVar12;
  uVar3 = *(undefined8 *)(param_8 + 0x38);
  fVar8 = *(float *)(param_8 + 0x44);
  fVar10 = param_2 + param_4 * (*param_7 - param_5) + fVar12 * *(float *)(param_8 + 0x28) * fVar8;
  fVar11 = param_4 * (float)(int)uVar3 + fVar10;
  fVar5 = param_7[2];
  fVar7 = fVar11;
  if ((param_13 != 0) && (ABS(fVar11 - fVar10) < 1.1920929e-07)) {
    fVar7 = (fVar10 - (fVar10 - param_2)) + param_4 * (float)(int)fVar5;
  }
  fVar9 = param_7[1];
  fVar6 = *(float *)(param_8 + 0x2c);
  piVar1 = (int *)param_10[1];
  for (piVar2 = (int *)*param_10; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    *piVar2 = (int)(long)(param_4 * (float)*piVar2);
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3f800000;
  uStack_a8 = 0;
  FUN_10a2086b4(&uStack_d0,param_15);
  uStack_c0 = CONCAT44((float)((ulong)*(undefined8 *)(param_15 + 0x10) >> 0x20) * param_4,
                       (float)*(undefined8 *)(param_15 + 0x10) * param_4);
  uStack_b8 = CONCAT44((float)((ulong)*(undefined8 *)(param_15 + 0x18) >> 0x20) * param_4,
                       (float)*(undefined8 *)(param_15 + 0x18) * param_4);
  uStack_b0 = *(undefined8 *)(param_15 + 0x20);
  uStack_a8 = *(undefined8 *)(param_15 + 0x28);
  *param_1 = *param_9;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_10a0ca588();
  fVar4 = (float)(int)((ulong)uVar3 >> 0x20);
  param_1[4] = param_9[4];
  param_1[5] = param_11;
  *(undefined1 *)(param_1 + 6) = param_12;
  fVar8 = param_3 + param_4 * (param_6 + fVar9) + fVar12 * -((fVar4 - fVar6) * fVar8);
  fVar12 = param_4 * fVar4 + fVar8;
  uVar3 = *param_10;
  param_1[8] = param_10[1];
  param_1[7] = uVar3;
  param_1[9] = param_10[2];
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xd] = uStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  *(float *)(param_1 + 0x10) = fVar10;
  *(float *)((long)param_1 + 0x84) = fVar8;
  *(float *)(param_1 + 0x11) = fVar11;
  *(float *)((long)param_1 + 0x8c) = fVar12;
  *(float *)(param_1 + 0x12) = fVar10;
  *(float *)((long)param_1 + 0x94) = fVar8;
  *(float *)(param_1 + 0x13) = fVar7;
  *(float *)((long)param_1 + 0x9c) = fVar12;
  *(float *)(param_1 + 0x14) = param_5 * param_4;
  *(float *)((long)param_1 + 0xa4) = param_6 * param_4;
  *(float *)(param_1 + 0x15) = param_4 * (float)(int)fVar5;
  *(float *)((long)param_1 + 0xac) = fVar10 - param_2;
  *(undefined4 *)(param_1 + 0x16) = param_14;
  param_1[0x17] = 0;
  *(char *)(param_1 + 0x18) = (char)param_13;
  return;
}



/* Entry: 10a208298; end: 10a2082df;  */

long FUN_10a208298(long param_1)

{
  FUN_10a1d37cc(param_1 + 0x50);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a2082e0; end: 10a20837f;  */

void FUN_10a2082e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_1) {
    uVar2 = 0;
    do {
      lVar6 = *(long *)(lVar1 + 0x18);
      if (lVar6 == lVar1 + 0x10) {
LAB_10a208360:
        uVar4 = uVar2 + (long)*(int *)(lVar1 + 200);
        uVar3 = uVar4;
      }
      else {
        bVar7 = false;
        uVar3 = 0;
        uVar4 = 0xffffffffffffffff;
        do {
          for (lVar9 = *(long *)(lVar6 + 0x10); lVar9 != *(long *)(lVar6 + 0x18);
              lVar9 = lVar9 + 200) {
            uVar5 = uVar4;
            if (*(char *)(lVar9 + 0x30) == '\x01') {
              uVar8 = *(ulong *)(lVar9 + 0x28);
              uVar5 = uVar8;
              if (uVar4 <= uVar8) {
                uVar5 = uVar4;
              }
              uVar8 = uVar8 + (long)*(int *)(lVar9 + 0xb0);
              if (uVar3 <= uVar8) {
                uVar3 = uVar8;
              }
              bVar7 = true;
            }
            uVar4 = uVar5;
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while (lVar6 != lVar1 + 0x10);
        if (!bVar7) goto LAB_10a208360;
      }
      uVar2 = uVar3;
      *(ulong *)(lVar1 + 0xc0) = uVar4;
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1);
  }
  return;
}



/* Entry: 10a208380; end: 10a20840f;  */

void FUN_10a208380(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    lVar1 = *plVar5;
    plVar2 = (long *)plVar5[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *(long *)(param_1 + 0x10) = lVar4 + -1;
    func_0x00010a208aac(plVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2083c8);
  (*pcVar3)();
}


