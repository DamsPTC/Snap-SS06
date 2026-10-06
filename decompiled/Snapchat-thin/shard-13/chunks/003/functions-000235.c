/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a47332c; end: 10a4733b7;  */

void FUN_10a47332c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
    if ((undefined8 *)puVar2[1] != puVar3) {
      puVar1 = (undefined8 *)puVar2[1] + -7;
      do {
        puVar4 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar4 != puVar3);
      puVar1 = *(undefined8 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a4733b8; end: 10a4733cb;  */

ulong FUN_10a4733b8(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uStack_41;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a473454);
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    func_0x00010a473454(&uStack_41,param_3,*(undefined8 *)(puVar2 + 8),param_2);
    for (uVar3 = *(ulong *)(puVar2 + 8); uVar3 != param_3; uVar3 = uVar3 - 0x10) {
      if (*(long *)(uVar3 - 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(ulong *)(puVar2 + 8) = param_3;
  }
  return param_2;
}



/* Entry: 10a4733cc; end: 10a4734bb;  */

ulong FUN_10a4733cc(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uStack_31;
  
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a473454);
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    func_0x00010a473454(&uStack_31,param_3,*(undefined8 *)(param_1 + 8),param_2);
    for (uVar2 = *(ulong *)(param_1 + 8); uVar2 != param_3; uVar2 = uVar2 - 0x10) {
      if (*(long *)(uVar2 - 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(ulong *)(param_1 + 8) = param_3;
  }
  return param_2;
}



/* Entry: 10a4734bc; end: 10a4734cf;  */

ulong FUN_10a4734bc(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uStack_41;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a473558);
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    func_0x00010a473558(&uStack_41,param_3,*(undefined8 *)(puVar2 + 8),param_2);
    for (uVar3 = *(ulong *)(puVar2 + 8); uVar3 != param_3; uVar3 = uVar3 - 0x10) {
      if (*(long *)(uVar3 - 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(ulong *)(puVar2 + 8) = param_3;
  }
  return param_2;
}



/* Entry: 10a4734d0; end: 10a4735bf;  */

ulong FUN_10a4734d0(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uStack_31;
  
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a473558);
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    func_0x00010a473558(&uStack_31,param_3,*(undefined8 *)(param_1 + 8),param_2);
    for (uVar2 = *(ulong *)(param_1 + 8); uVar2 != param_3; uVar2 = uVar2 - 0x10) {
      if (*(long *)(uVar2 - 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(ulong *)(param_1 + 8) = param_3;
  }
  return param_2;
}



/* Entry: 10a4735c0; end: 10a4736a3;  */

void FUN_10a4735c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar4 = puVar5;
  puVar6 = puVar1;
  if (puVar2 != puVar5) {
    do {
      *puVar6 = *puVar4;
      (**(code **)(puVar4[1] + 0x10))(puVar6 + 1,puVar4 + 1);
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar2);
    puVar5 = puVar5 + 1;
    do {
      puVar4 = puVar5 + 7;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 8;
    } while (puVar4 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  param_2[1] = puVar5;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a4736a4; end: 10a4736b7;  */

undefined1  [16] FUN_10a4736a4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3a == 0) {
    lVar2 = param_2 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar1[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a4736b8; end: 10a47376f;  */

undefined1  [16] FUN_10a4736b8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a473770; end: 10a4738bf;  */

void FUN_10a473770(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    lVar6 = param_1[3];
    param_1[3] = 0;
    lVar7 = *param_1;
    lStack_38 = lVar6;
    __ZNSt3__115recursive_mutex4lockEv(lVar7 + 0x70);
    lVar5 = *(long *)(*(long *)(lVar7 + 0x68) + 0xb8);
    if ((*(byte *)(lVar5 + 0x1e0) & 1) != 0) {
      plVar4 = *(long **)(lVar5 + 0x50);
      if ((plVar4 != (long *)0x0) &&
         ((**(code **)*plVar4)(plVar4,&UNK_10e4b7050), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0xd8))();
      }
      __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x70);
      plVar4 = (long *)(lVar6 + 0x10);
      do {
        lVar5 = *plVar4;
        if (lVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = 2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            FUN_109d1b4dc(lVar6 + 0x18);
            goto LAB_10a47382c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a47382c:
          if ((char)param_1[2] == '\x01') {
            *(undefined1 *)(param_1 + 2) = 0;
          }
          lStack_38 = 0;
          if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_38,lVar6), lStack_38 != 0)) {
            func_0x0001092b4274(&lStack_38);
          }
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a473878);
  (*pcVar3)();
}



/* Entry: 10a4738c0; end: 10a473a07;  */

undefined8 * FUN_10a4738c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdc1b8;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a473a08; end: 10a473a1b;  */

void FUN_10a473a08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0x666666666666667) {
    __Znwm((long)puVar1 * 0x28);
    return;
  }
  func_0x000109ffded8();
  FUN_10a3b8e74(puVar1 + 3);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 10a473a1c; end: 10a473b93;  */

void FUN_10a473a1c(undefined8 *param_1)

{
  if (param_1 < (undefined8 *)0x666666666666667) {
    __Znwm((long)param_1 * 0x28);
    return;
  }
  func_0x000109ffded8();
  FUN_10a3b8e74(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a473b94; end: 10a473ba3;  */

undefined1  [16] FUN_10a473b94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10e4b88d7;
  return auVar1;
}



/* Entry: 10a473ba4; end: 10a473c67;  */

void FUN_10a473ba4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    lStack_38 = *(long *)(param_2 + 0x48);
    lStack_40 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_40);
    puVar2 = (undefined8 *)((ulong)&lStack_40 | 8);
    plVar1 = &lStack_40;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      plVar1 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar6 = *plVar1;
  }
  FUN_10a49387c(&lStack_40,lVar6,param_3);
  lVar6 = lStack_40;
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x58) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x58) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = *(long *)(lStack_40 + 0x58);
  *(undefined8 *)(lStack_40 + 0x58) = uVar8;
  *(undefined8 *)(lStack_40 + 0x50) = uVar7;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = lVar6;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10a473c68; end: 10a473c97;  */

void FUN_10a473c68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3b95d8(aiStack_30,*param_3,param_1 + 0x50);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a473c98; end: 10a473d2b;  */

undefined8 * FUN_10a473c98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdc2f0;
  param_1[5] = &PTR_FUN_110bdc348;
  param_1[-2] = &PTR_DAT_110bdc268;
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a473d2c; end: 10a473d3b;  */

undefined1  [16] FUN_10a473d2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10e4b88d7;
  return auVar1;
}



/* Entry: 10a473d3c; end: 10a473dcf;  */

undefined8 * FUN_10a473d3c(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_110bdc2f0;
  *param_1 = &PTR_FUN_110bdc348;
  param_1[-7] = &PTR_DAT_110bdc268;
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a473dd0; end: 10a473edb;  */

long * FUN_10a473dd0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar4 >> 4) < param_2) {
    lVar8 = (long)puVar4 - *param_1;
    uVar1 = param_2 + (lVar8 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_10a369fac();
      *param_1 = (long)&PTR_FUN_110bdc388;
      param_1[2] = (long)&PTR_FUN_110bdc410;
      param_1[7] = (long)&PTR_FUN_110bdc468;
      FUN_10a493e78(param_1 + 10);
      if (param_1[6] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      param_1[2] = (long)&PTR_DAT_110b17898;
      func_0x00010a004dac(param_1 + 3);
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a369fc0();
    }
    puVar4 = (undefined8 *)((long)plVar2 + lVar8);
    lVar8 = param_2 << 4;
    puVar5 = puVar4;
    do {
      puVar5[1] = 0x3f80000000000000;
      *puVar5 = 0x3f800000;
      lVar8 = lVar8 + -0x10;
      puVar5 = puVar5 + 2;
    } while (lVar8 != 0);
    lVar8 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)(puVar4 + param_2 * 2);
    param_1[2] = (long)(plVar2 + uVar7 * 2);
    param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    puVar5 = puVar4;
    if (param_2 != 0) {
      puVar5 = puVar4 + param_2 * 2;
      lVar8 = param_2 << 4;
      do {
        puVar4[1] = 0x3f80000000000000;
        *puVar4 = 0x3f800000;
        lVar8 = lVar8 + -0x10;
        puVar4 = puVar4 + 2;
      } while (lVar8 != 0);
    }
    param_1[1] = (long)puVar5;
  }
  return param_1;
}



/* Entry: 10a473edc; end: 10a473f67;  */

undefined8 * FUN_10a473edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdc388;
  param_1[2] = &PTR_FUN_110bdc410;
  param_1[7] = &PTR_FUN_110bdc468;
  FUN_10a493e78(param_1 + 10);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a473f68; end: 10a473f77;  */

undefined1  [16] FUN_10a473f68(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10e4b8a10;
  return auVar1;
}



/* Entry: 10a473f78; end: 10a474003;  */

undefined8 * FUN_10a473f78(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110bdc388;
  *param_1 = &PTR_FUN_110bdc410;
  param_1[5] = &PTR_FUN_110bdc468;
  FUN_10a493e78(param_1 + 8);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a474004; end: 10a474013;  */

undefined1  [16] FUN_10a474004(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10e4b8a10;
  return auVar1;
}



/* Entry: 10a474014; end: 10a474097;  */

undefined8 * FUN_10a474014(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110bdc388;
  param_1[-5] = &PTR_FUN_110bdc410;
  *param_1 = &PTR_FUN_110bdc468;
  FUN_10a493e78(param_1 + 3);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a474098; end: 10a4740ab;  */

void FUN_10a474098(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar1 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)plVar1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar3 = plVar1[1];
    lVar2 = lVar4;
    if (lVar3 != lVar4) {
      do {
        lVar3 = lVar3 + -0x28;
        func_0x00010a473a60(lVar3);
      } while (lVar3 != lVar4);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a4740ac; end: 10a4740ef;  */

void FUN_10a4740ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010a473a60(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a4740f0; end: 10a474157;  */

void FUN_10a4740f0(long *param_1)

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
        lVar2 = lVar2 + -0x28;
        func_0x00010a473a60(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a474158; end: 10a4741b3;  */

void FUN_10a474158(long *param_1)

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
        FUN_10a3b8e74();
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



/* Entry: 10a4741b4; end: 10a4741c7;  */

undefined8 * FUN_10a4741b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110bdc488;
  puVar1[2] = &PTR_FUN_110bdc510;
  puVar1[7] = &PTR_FUN_110bdc568;
  if (*(char *)((long)puVar1 + 0x67) < '\0') {
    __ZdlPv(puVar1[10]);
  }
  if (puVar1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a4741c8; end: 10a474263;  */

undefined8 * FUN_10a4741c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdc488;
  param_1[2] = &PTR_FUN_110bdc510;
  param_1[7] = &PTR_FUN_110bdc568;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a474264; end: 10a474273;  */

undefined1  [16] FUN_10a474264(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10e4b886f;
  return auVar1;
}



/* Entry: 10a474274; end: 10a47430f;  */

undefined8 * FUN_10a474274(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110bdc488;
  *param_1 = &PTR_FUN_110bdc510;
  param_1[5] = &PTR_FUN_110bdc568;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a474310; end: 10a47431f;  */

undefined1  [16] FUN_10a474310(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10e4b886f;
  return auVar1;
}



/* Entry: 10a474320; end: 10a474447;  */

undefined8 * FUN_10a474320(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110bdc488;
  param_1[-5] = &PTR_FUN_110bdc510;
  *param_1 = &PTR_FUN_110bdc568;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a474448; end: 10a474457;  */

undefined1  [16] FUN_10a474448(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10e4b88c1;
  return auVar1;
}



/* Entry: 10a474458; end: 10a474527;  */

void FUN_10a474458(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    lStack_38 = *(long *)(param_2 + 0x48);
    lStack_40 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_40);
    puVar1 = (undefined8 *)((ulong)&lStack_40 | 8);
    plVar2 = &lStack_40;
    if (param_4 != 0) {
      puVar1 = (undefined8 *)(param_4 + 0x28);
      plVar2 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar1;
    lVar3 = *plVar2;
  }
  FUN_10a493620(&lStack_40,lVar3,param_3);
  lVar3 = lStack_40;
  if (lStack_40 != param_2) {
    FUN_10a474648(lStack_40 + 0x50,*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58),
                  (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) * -0x3333333333333333
                 );
  }
  *param_1 = lVar3;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10a474528; end: 10a4745b3;  */

undefined8 * FUN_10a474528(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bdc588;
  *param_1 = &PTR_FUN_110bdc610;
  param_1[5] = &PTR_FUN_110bdc668;
  FUN_10a4740f0(param_1 + 8);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a4745b4; end: 10a4745c3;  */

undefined1  [16] FUN_10a4745b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10e4b88c1;
  return auVar1;
}



/* Entry: 10a4745c4; end: 10a474647;  */

undefined8 * FUN_10a4745c4(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bdc588;
  param_1[-5] = &PTR_FUN_110bdc610;
  *param_1 = &PTR_FUN_110bdc668;
  FUN_10a4740f0(param_1 + 3);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a474648; end: 10a4747cb;  */

undefined8 *
FUN_10a474648(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if ((ulong)((lVar7 - (long)puVar9 >> 3) * -0x3333333333333333) < param_4) {
    puVar4 = param_1;
    puVar5 = param_2;
    puVar6 = param_3;
    if (puVar9 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)param_1[1];
      puVar4 = puVar9;
      if (puVar10 != puVar9) {
        do {
          puVar10 = puVar10 + -5;
          func_0x00010a473a60(puVar10);
        } while (puVar10 != puVar9);
        puVar4 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar9;
      __ZdlPv();
      lVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x666666666666666 < param_4) {
      FUN_10a473a08();
      param_1[1] = param_4;
      __Unwind_Resume();
      if (puVar5 < (undefined8 *)0x666666666666667) {
        puVar9 = puVar5;
        func_0x00010a473a1c();
        *puVar4 = puVar5;
        puVar4[1] = puVar5;
        puVar4[2] = puVar5 + (long)puVar9 * 5;
        return puVar5;
      }
      FUN_10a473a08();
      for (; puVar4 != puVar5; puVar4 = puVar4 + 5) {
        if (*(char *)((long)puVar4 + 0x17) < '\0') {
          func_0x000107c3192c(puVar6,*puVar4,puVar4[1]);
        }
        else {
          uVar12 = puVar4[1];
          uVar11 = *puVar4;
          puVar6[2] = puVar4[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
        }
        lVar7 = puVar4[4];
        uVar11 = puVar4[3];
        puVar6[4] = puVar4[4];
        puVar6[3] = uVar11;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar6 = puVar6 + 5;
      }
      return puVar6;
    }
    uVar8 = (lVar7 >> 3) * -0x6666666666666666;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x333333333333332 < (ulong)((lVar7 >> 3) * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    FUN_10a4747cc(param_1,uVar8);
    FUN_10a474818(param_2,param_3,param_1[1]);
  }
  else {
    lVar7 = param_1[1] - (long)puVar9;
    if (param_4 <= (ulong)((lVar7 >> 3) * -0x3333333333333333)) {
      FUN_10a4748f8(param_2,param_3,puVar9);
      puVar9 = (undefined8 *)param_1[1];
      puVar4 = param_2;
      while (puVar9 != param_2) {
        puVar9 = puVar9 + -5;
        puVar4 = puVar9;
        func_0x00010a473a60(puVar9);
      }
      param_1[1] = param_2;
      return puVar4;
    }
    FUN_10a4748f8(param_2,(long)param_2 + lVar7,puVar9);
    param_2 = (undefined8 *)((long)param_2 + lVar7);
    FUN_10a474818(param_2,param_3,param_1[1]);
  }
  param_1[1] = param_2;
  return param_2;
}



/* Entry: 10a4747cc; end: 10a474817;  */

undefined8 * FUN_10a4747cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    puVar4 = param_2;
    FUN_10a473a1c();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + (long)puVar4 * 5;
    return param_2;
  }
  FUN_10a473a08();
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(param_3,*param_1,param_1[1]);
    }
    else {
      uVar7 = param_1[1];
      uVar6 = *param_1;
      param_3[2] = param_1[2];
      param_3[1] = uVar7;
      *param_3 = uVar6;
    }
    lVar5 = param_1[4];
    uVar6 = param_1[3];
    param_3[4] = param_1[4];
    param_3[3] = uVar6;
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
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* Entry: 10a474818; end: 10a4748f7;  */

undefined8 * FUN_10a474818(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(param_3,*param_1,param_1[1]);
    }
    else {
      uVar6 = param_1[1];
      uVar5 = *param_1;
      param_3[2] = param_1[2];
      param_3[1] = uVar6;
      *param_3 = uVar5;
    }
    lVar4 = param_1[4];
    uVar5 = param_1[3];
    param_3[4] = param_1[4];
    param_3[3] = uVar5;
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
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* Entry: 10a4748f8; end: 10a4749a7;  */

long FUN_10a4748f8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 0x20) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = *(long **)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = uVar7;
    *(undefined8 *)(param_3 + 0x18) = uVar6;
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
    param_3 = param_3 + 0x28;
  }
  return param_3;
}



/* Entry: 10a4749a8; end: 10a474a43;  */

undefined8 * FUN_10a4749a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdc688;
  param_1[2] = &PTR_FUN_110bdc710;
  param_1[7] = &PTR_FUN_110bdc768;
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a474a44; end: 10a474a53;  */

undefined1  [16] FUN_10a474a44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10e4b8904;
  return auVar1;
}



/* Entry: 10a474a54; end: 10a474af7;  */

undefined8 * FUN_10a474a54(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_FUN_110bdc688;
  *param_1 = &PTR_FUN_110bdc710;
  param_1[5] = &PTR_FUN_110bdc768;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a474af8; end: 10a474b07;  */

undefined1  [16] FUN_10a474af8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10e4b8904;
  return auVar1;
}



/* Entry: 10a474b08; end: 10a474c47;  */

undefined8 * FUN_10a474b08(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_FUN_110bdc688;
  param_1[-5] = &PTR_FUN_110bdc710;
  *param_1 = &PTR_FUN_110bdc768;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a474c48; end: 10a474c57;  */

undefined1  [16] FUN_10a474c48(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10e4b891a;
  return auVar1;
}



/* Entry: 10a474c58; end: 10a474cfb;  */

undefined8 * FUN_10a474c58(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdc788;
  *param_1 = &PTR_FUN_110bdc810;
  param_1[5] = &PTR_FUN_110bdc868;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a474cfc; end: 10a474d0b;  */

undefined1  [16] FUN_10a474cfc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10e4b891a;
  return auVar1;
}



/* Entry: 10a474d0c; end: 10a474e43;  */

undefined8 * FUN_10a474d0c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdc788;
  param_1[-5] = &PTR_FUN_110bdc810;
  *param_1 = &PTR_FUN_110bdc868;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a474e44; end: 10a474e53;  */

undefined1  [16] FUN_10a474e44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b88ef;
  return auVar1;
}



/* Entry: 10a474e54; end: 10a474ee7;  */

undefined8 * FUN_10a474e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdc910;
  param_1[5] = &PTR_FUN_110bdc968;
  param_1[-2] = &PTR_DAT_110bdc888;
  if (param_1[8] != 0) {
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a474ee8; end: 10a474ef7;  */

undefined1  [16] FUN_10a474ee8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b88ef;
  return auVar1;
}



/* Entry: 10a474ef8; end: 10a475027;  */

undefined8 * FUN_10a474ef8(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_110bdc910;
  *param_1 = &PTR_FUN_110bdc968;
  param_1[-7] = &PTR_DAT_110bdc888;
  if (param_1[3] != 0) {
    __ZdlPv();
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a475028; end: 10a475037;  */

undefined1  [16] FUN_10a475028(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b892e;
  return auVar1;
}



/* Entry: 10a475038; end: 10a4750db;  */

undefined8 * FUN_10a475038(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdc988;
  *param_1 = &PTR_FUN_110bdca10;
  param_1[5] = &PTR_FUN_110bdca68;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a4750dc; end: 10a4750eb;  */

undefined1  [16] FUN_10a4750dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b892e;
  return auVar1;
}



/* Entry: 10a4750ec; end: 10a47522b;  */

undefined8 * FUN_10a4750ec(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdc988;
  param_1[-5] = &PTR_FUN_110bdca10;
  *param_1 = &PTR_FUN_110bdca68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a47522c; end: 10a47523b;  */

undefined1  [16] FUN_10a47522c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89a5;
  return auVar1;
}



/* Entry: 10a47523c; end: 10a4752df;  */

undefined8 * FUN_10a47523c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdca88;
  *param_1 = &PTR_FUN_110bdcb10;
  param_1[5] = &PTR_FUN_110bdcb68;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a4752e0; end: 10a4752ef;  */

undefined1  [16] FUN_10a4752e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89a5;
  return auVar1;
}



/* Entry: 10a4752f0; end: 10a475447;  */

undefined8 * FUN_10a4752f0(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdca88;
  param_1[-5] = &PTR_FUN_110bdcb10;
  *param_1 = &PTR_FUN_110bdcb68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a475448; end: 10a475457;  */

undefined1  [16] FUN_10a475448(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10e4b8943;
  return auVar1;
}



/* Entry: 10a475458; end: 10a47551f;  */

void FUN_10a475458(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    lStack_38 = *(long *)(param_2 + 0x48);
    lStack_40 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_40);
    puVar1 = (undefined8 *)((ulong)&lStack_40 | 8);
    plVar2 = &lStack_40;
    if (param_4 != 0) {
      puVar1 = (undefined8 *)(param_4 + 0x28);
      plVar2 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar1;
    lVar3 = *plVar2;
  }
  FUN_10a493b88(&lStack_40,lVar3,param_3);
  if (lStack_40 != param_2) {
    FUN_10a34d2ec(lStack_40 + 0x50,*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58),
                  *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 4);
  }
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10a475520; end: 10a475527;  */

undefined8 FUN_10a475520(void)

{
  return 0;
}



/* Entry: 10a475528; end: 10a4755db;  */

void FUN_10a475528(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bdcc10;
  param_1[5] = &PTR_FUN_110bdcc68;
  puStack_28 = param_1 + 8;
  param_1[-2] = &PTR_DAT_110bdcb88;
  FUN_10a34c804(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a4755dc; end: 10a4755eb;  */

undefined1  [16] FUN_10a4755dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10e4b8943;
  return auVar1;
}



/* Entry: 10a4755ec; end: 10a475753;  */

void FUN_10a4755ec(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-5] = &PTR_FUN_110bdcc10;
  *param_1 = &PTR_FUN_110bdcc68;
  puStack_28 = param_1 + 3;
  param_1[-7] = &PTR_DAT_110bdcb88;
  FUN_10a34c804(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a475754; end: 10a475763;  */

undefined1  [16] FUN_10a475754(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10e4b89f9;
  return auVar1;
}



/* Entry: 10a475764; end: 10a475817;  */

void FUN_10a475764(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bdcd10;
  param_1[5] = &PTR_FUN_110bdcd68;
  puStack_28 = param_1 + 8;
  param_1[-2] = &PTR_DAT_110bdcc88;
  FUN_10a0426d8(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a475818; end: 10a475827;  */

undefined1  [16] FUN_10a475818(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10e4b89f9;
  return auVar1;
}



/* Entry: 10a475828; end: 10a475977;  */

void FUN_10a475828(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-5] = &PTR_FUN_110bdcd10;
  *param_1 = &PTR_FUN_110bdcd68;
  puStack_28 = param_1 + 3;
  param_1[-7] = &PTR_DAT_110bdcc88;
  FUN_10a0426d8(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a475978; end: 10a475987;  */

undefined1  [16] FUN_10a475978(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b897b;
  return auVar1;
}



/* Entry: 10a475988; end: 10a475a2b;  */

undefined8 * FUN_10a475988(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdcd88;
  *param_1 = &PTR_FUN_110bdce10;
  param_1[5] = &PTR_FUN_110bdce68;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a475a2c; end: 10a475a3b;  */

undefined1  [16] FUN_10a475a2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b897b;
  return auVar1;
}



/* Entry: 10a475a3c; end: 10a475b7b;  */

undefined8 * FUN_10a475a3c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdcd88;
  param_1[-5] = &PTR_FUN_110bdce10;
  *param_1 = &PTR_FUN_110bdce68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a475b7c; end: 10a475b8b;  */

undefined1  [16] FUN_10a475b7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b8990;
  return auVar1;
}



/* Entry: 10a475b8c; end: 10a475c2f;  */

undefined8 * FUN_10a475b8c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdce88;
  *param_1 = &PTR_FUN_110bdcf10;
  param_1[5] = &PTR_FUN_110bdcf68;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a475c30; end: 10a475c3f;  */

undefined1  [16] FUN_10a475c30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b8990;
  return auVar1;
}



/* Entry: 10a475c40; end: 10a475d7f;  */

undefined8 * FUN_10a475c40(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdce88;
  param_1[-5] = &PTR_FUN_110bdcf10;
  *param_1 = &PTR_FUN_110bdcf68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a475d80; end: 10a475d8f;  */

undefined1  [16] FUN_10a475d80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89ba;
  return auVar1;
}



/* Entry: 10a475d90; end: 10a475e33;  */

undefined8 * FUN_10a475d90(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdcf88;
  *param_1 = &PTR_FUN_110bdd010;
  param_1[5] = &PTR_FUN_110bdd068;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a475e34; end: 10a475e43;  */

undefined1  [16] FUN_10a475e34(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89ba;
  return auVar1;
}



/* Entry: 10a475e44; end: 10a475f83;  */

undefined8 * FUN_10a475e44(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdcf88;
  param_1[-5] = &PTR_FUN_110bdd010;
  *param_1 = &PTR_FUN_110bdd068;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a475f84; end: 10a475f93;  */

undefined1  [16] FUN_10a475f84(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89cf;
  return auVar1;
}



/* Entry: 10a475f94; end: 10a476037;  */

undefined8 * FUN_10a475f94(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdd088;
  *param_1 = &PTR_FUN_110bdd110;
  param_1[5] = &PTR_FUN_110bdd168;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a476038; end: 10a476047;  */

undefined1  [16] FUN_10a476038(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89cf;
  return auVar1;
}



/* Entry: 10a476048; end: 10a476187;  */

undefined8 * FUN_10a476048(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdd088;
  param_1[-5] = &PTR_FUN_110bdd110;
  *param_1 = &PTR_FUN_110bdd168;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a476188; end: 10a476197;  */

undefined1  [16] FUN_10a476188(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89e4;
  return auVar1;
}



/* Entry: 10a476198; end: 10a47623b;  */

undefined8 * FUN_10a476198(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-2] = &PTR_DAT_110bdd188;
  *param_1 = &PTR_FUN_110bdd210;
  param_1[5] = &PTR_FUN_110bdd268;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    param_1[9] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a47623c; end: 10a47624b;  */

undefined1  [16] FUN_10a47623c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89e4;
  return auVar1;
}



/* Entry: 10a47624c; end: 10a47637b;  */

undefined8 * FUN_10a47624c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdd188;
  param_1[-5] = &PTR_FUN_110bdd210;
  *param_1 = &PTR_FUN_110bdd268;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a47637c; end: 10a47638b;  */

undefined1  [16] FUN_10a47637c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10e4b8960;
  return auVar1;
}



/* Entry: 10a47638c; end: 10a4765b7;  */

void FUN_10a47638c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lStack_60;
  long lStack_58;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    lStack_58 = *(long *)(param_2 + 0x48);
    lStack_60 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_60);
    puVar1 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar13 = &lStack_60;
    if (param_4 != 0) {
      puVar1 = (undefined8 *)(param_4 + 0x28);
      plVar13 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar1;
    lVar6 = *plVar13;
  }
  FUN_10a494068(&lStack_60,lVar6,param_3);
  lVar3 = lStack_60;
  if (lStack_60 != param_2) {
    plVar13 = (long *)(lStack_60 + 0x50);
    lVar10 = *plVar13;
    lVar5 = *(long *)(param_2 + 0x50);
    lVar2 = *(long *)(param_2 + 0x58);
    uVar8 = lVar2 - lVar5;
    lVar7 = *(long *)(lStack_60 + 0x60);
    if ((ulong)(lVar7 - lVar10) < uVar8) {
      uVar12 = ((long)uVar8 >> 3) * -0x5555555555555555;
      if (lVar10 != 0) {
        lVar11 = *(long *)(lStack_60 + 0x58);
        lVar7 = lVar10;
        if (lVar11 != lVar10) {
          do {
            lVar11 = lVar11 + -0x18;
            FUN_10a4740f0(lVar11);
          } while (lVar11 != lVar10);
          lVar7 = *plVar13;
        }
        *(long *)(lVar3 + 0x58) = lVar10;
        __ZdlPv(lVar7);
        lVar7 = 0;
        *plVar13 = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x60) = 0;
      }
      if (0xaaaaaaaaaaaaaaa < uVar12) {
LAB_10a47658c:
        FUN_10a474098();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a476594);
        (*pcVar4)();
      }
      uVar9 = (lVar7 >> 3) * 0x5555555555555556;
      if (uVar9 < uVar12 || uVar9 + ((long)uVar8 >> 3) * 0x5555555555555555 == 0) {
        uVar9 = uVar12;
      }
      if (0x555555555555554 < (ulong)((lVar7 >> 3) * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_10a47658c;
      FUN_10a4740ac();
      *(ulong *)(lVar3 + 0x50) = uVar9;
      *(ulong *)(lVar3 + 0x58) = uVar9;
      *(ulong *)(lVar3 + 0x60) = uVar9 + lVar6 * 0x18;
      FUN_10a476740(lVar5,lVar2,uVar9);
    }
    else {
      uVar12 = *(long *)(lStack_60 + 0x58) - lVar10;
      if (uVar8 <= uVar12) {
        FUN_10a476830(lVar5,lVar2,lVar10);
        lVar6 = *(long *)(lVar3 + 0x58);
        while (lVar6 != lVar5) {
          lVar6 = lVar6 + -0x18;
          FUN_10a4740f0(lVar6);
        }
        *(long *)(lVar3 + 0x58) = lVar5;
        goto LAB_10a476568;
      }
      FUN_10a476830(lVar5,lVar5 + uVar12,lVar10);
      lVar5 = lVar5 + uVar12;
      FUN_10a476740(lVar5,lVar2,*(undefined8 *)(lVar3 + 0x58));
    }
    *(long *)(lVar3 + 0x58) = lVar5;
  }
LAB_10a476568:
  *param_1 = lStack_60;
  param_1[1] = lStack_58;
  return;
}



/* Entry: 10a4765b8; end: 10a476643;  */

undefined8 * FUN_10a4765b8(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bdd288;
  *param_1 = &PTR_FUN_110bdd310;
  param_1[5] = &PTR_FUN_110bdd368;
  FUN_10a4766d8(param_1 + 8);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a476644; end: 10a476653;  */

undefined1  [16] FUN_10a476644(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10e4b8960;
  return auVar1;
}



/* Entry: 10a476654; end: 10a4766d7;  */

undefined8 * FUN_10a476654(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bdd288;
  param_1[-5] = &PTR_FUN_110bdd310;
  *param_1 = &PTR_FUN_110bdd368;
  FUN_10a4766d8(param_1 + 3);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a4766d8; end: 10a47673f;  */

void FUN_10a4766d8(long *param_1)

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
        lVar2 = lVar2 + -0x18;
        FUN_10a4740f0(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}


