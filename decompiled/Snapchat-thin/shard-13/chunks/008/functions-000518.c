/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acb5368; end: 10acb5533;  */

undefined8 * FUN_10acb5368(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-6] = &PTR_DAT_110c6b0b0;
  param_1[-3] = &PTR_FUN_110c6b150;
  param_1[-2] = &PTR_FUN_110c6b190;
  *param_1 = &PTR_FUN_110c6b1d8;
  param_1[0x12] = &PTR_DAT_110c6b208;
  func_0x00010acb6aec(param_1[0x31]);
  func_0x00010acb6b2c(param_1[0x2e]);
  func_0x00010acd48c4(param_1 + 0x2b);
  if (param_1[0x2a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bd9f88;
  param_1[0x12] = &PTR_DAT_110bd9fb8;
  FUN_10a1c0a9c(param_1);
  param_1[-6] = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[-4];
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
  return param_1 + -5;
}



/* Entry: 10acb5534; end: 10acb55df;  */

void FUN_10acb5534(undefined8 *param_1)

{
  param_1[-0x18] = &PTR_DAT_110c6b0b0;
  param_1[-0x15] = &PTR_FUN_110c6b150;
  param_1[-0x14] = &PTR_FUN_110c6b190;
  param_1[-0x12] = &PTR_FUN_110c6b1d8;
  *param_1 = &PTR_DAT_110c6b208;
  func_0x00010acb6aec(param_1[0x1f]);
  func_0x00010acb6b2c(param_1[0x1c]);
  func_0x00010acd48c4(param_1 + 0x19);
  if (param_1[0x18] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x12] = &PTR_FUN_110bd9f88;
  *param_1 = &PTR_DAT_110bd9fb8;
  FUN_10a1c0a9c(param_1 + -0x12);
  param_1[-0x18] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -0x18);
  return;
}



/* Entry: 10acb55e0; end: 10acb563f;  */

undefined8 * FUN_10acb55e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb5640; end: 10acb5653;  */

long FUN_10acb5640(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10acb5654; end: 10acb5803;  */

void FUN_10acb5654(long param_1)

{
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10acb5804; end: 10acb5817;  */

undefined1  [16] FUN_10acb5804(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010aa006d4();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10acb5818; end: 10acb5897;  */

undefined1  [16] FUN_10acb5818(long *param_1,undefined8 param_2)

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
    func_0x00010aa006d4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10acb5898; end: 10acb5a6f;  */

undefined *** FUN_10acb5898(undefined ***param_1,undefined **param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  code *pcStack_178;
  undefined **appuStack_170 [7];
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined1 auStack_f0 [152];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = param_2;
  pppuVar1 = param_1;
  FUN_109d1a80c();
  ppuStack_1c0 = *pppuVar1;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puStack_200 = &UNK_1053a6a3c;
  ppuStack_1f8 = &PTR_DAT_110ae9180;
  pcStack_178 = FUN_10a062c68;
  appuStack_170[0] = &PTR_DAT_110b9f9f8;
  puStack_130 = &UNK_1053a6a3c;
  ppuStack_128 = &PTR_DAT_110ae9180;
  puStack_1b8 = &UNK_1053a6a3c;
  ppuStack_1b0 = &PTR_DAT_110ae9180;
  ppuStack_138 = ppuStack_1c0;
  FUN_10a102184();
  ppuStack_248 = *pppuVar1;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  ppuStack_280 = &PTR_DAT_110ae9180;
  puStack_240 = &UNK_1053a6a3c;
  ppuStack_238 = &PTR_DAT_110ae9180;
  FUN_10a1929fc(auStack_f0,&pcStack_178,&PTR_DAT_110c6b380,&UNK_10e50b4c8,&ppuStack_248);
  FUN_10a062f08(param_1 + 1,auStack_f0);
  FUN_10a062c88(auStack_f0);
  func_0x0001092ba41c(&ppuStack_248);
  (*(code *)*ppuStack_280)(&ppuStack_280);
  func_0x0001092ba41c(&ppuStack_138);
  (*(code *)*appuStack_170[0])(appuStack_170);
  func_0x0001092ba41c(&ppuStack_1c0);
  pppuVar1 = &ppuStack_1f8;
  (*(code *)*ppuStack_1f8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_f0);
  func_0x0001092ba41c(&ppuStack_248);
  (*(code *)*ppuStack_280)(&ppuStack_280);
  func_0x0001092ba41c(&ppuStack_138);
  (*(code *)*appuStack_170[0])(appuStack_170);
  func_0x0001092ba41c(&ppuStack_1c0);
  (*(code *)*ppuStack_1f8)(&ppuStack_1f8);
  __Unwind_Resume();
  pppuVar3 = pppuVar1;
  if (pppuVar1[2] != (undefined **)0x0) {
    pppuVar6 = (undefined ***)pppuVar1[1];
    puVar4 = (undefined8 *)(*pppuVar1)[1];
    ppuVar5 = *pppuVar6;
    ppuVar5[1] = (undefined *)puVar4;
    *puVar4 = ppuVar5;
    pppuVar1[2] = (undefined **)0x0;
    while (pppuVar2 = pppuVar6, pppuVar2 != pppuVar1) {
      pppuVar6 = (undefined ***)pppuVar2[1];
      FUN_10acb5adc(pppuVar2 + 2);
      __ZdlPv(pppuVar2);
      pppuVar3 = pppuVar2;
    }
  }
  return pppuVar3;
}



/* Entry: 10acb5a70; end: 10acb5adb;  */

void FUN_10acb5a70(long *param_1)

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
      FUN_10acb5adc(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10acb5adc; end: 10acb5b7b;  */

long FUN_10acb5adc(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a26ef68(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10acb5b7c; end: 10acb5eaf;  */

/* WARNING: Removing unreachable block (ram,0x00010acb5ccc) */
/* WARNING: Removing unreachable block (ram,0x00010acb5cf0) */

void FUN_10acb5b7c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  char cStack_69;
  char cStack_50;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10acb5dfc);
    (*pcVar5)();
  }
  lVar7 = param_1[5];
  param_1[5] = 0;
  cStack_69 = '\t';
  uStack_80 = 0x69622e6174656d2f;
  uStack_78 = 0x6e;
  uStack_77 = 0;
  lStack_a8 = lVar7;
  FUN_10a0b4df8(auStack_48,param_1,&uStack_80);
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  FUN_10a0f1b8c(&uStack_80,auStack_48,0);
  if (cStack_50 == '\x01') {
    FUN_10a0f1f4c(&lStack_a0,&uStack_80);
    lStack_d8 = lStack_98;
    lStack_e0 = lStack_a0;
    uStack_d0 = uStack_90;
    lStack_98 = 0;
    uStack_90 = 0;
    lStack_a0 = 0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_c8,*param_1,param_1[1]);
      if (lStack_a0 != 0) {
        lStack_98 = lStack_a0;
        __ZdlPv();
      }
    }
    else {
      uStack_c0 = param_1[1];
      uStack_c8 = *param_1;
      lStack_b8 = param_1[2];
    }
  }
  else {
    lStack_e0 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0;
    FUN_10a05151c(&lStack_e0,0,0,0);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_c8,*param_1,param_1[1]);
    }
    else {
      uStack_c0 = param_1[1];
      uStack_c8 = *param_1;
      lStack_b8 = param_1[2];
    }
  }
  if (cStack_50 == '\x01') {
    FUN_10a0f1ea0(&uStack_80);
  }
  plVar1 = (long *)(lVar7 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar7 + 200) == '\x01') {
          if (*(char *)(lVar7 + 199) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar7 + 0xb0));
          }
          if (*(long *)(lVar7 + 0x98) != 0) {
            *(long *)(lVar7 + 0xa0) = *(long *)(lVar7 + 0x98);
            __ZdlPv();
          }
        }
        uVar4 = uStack_c8;
        *(long *)(lVar7 + 0xa0) = lStack_d8;
        *(long *)(lVar7 + 0x98) = lStack_e0;
        *(undefined8 *)(lVar7 + 0xa8) = uStack_d0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        lStack_e0 = 0;
        lStack_d8 = 0;
        *(undefined8 *)(lVar7 + 0xb8) = uStack_c0;
        *(undefined8 *)(lVar7 + 0xb0) = uVar4;
        *(long *)(lVar7 + 0xc0) = lStack_b8;
        uStack_c0 = 0;
        lStack_b8 = 0;
        *(undefined1 *)(lVar7 + 200) = 1;
        *(undefined8 *)(lVar7 + 0x10) = 2;
        FUN_109d1b4dc(lVar7 + 0x18);
        goto LAB_10acb5d80;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10acb5d80:
      if (lStack_b8 < 0) {
        __ZdlPv(uStack_c8);
      }
      if (lStack_e0 != 0) {
        lStack_d8 = lStack_e0;
        __ZdlPv();
      }
      if (*(char *)(param_1 + 4) == '\x01') {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        *(undefined1 *)(param_1 + 4) = 0;
      }
      lStack_a8 = 0;
      if ((lVar7 != 0) && (func_0x0001092b4274(&lStack_a8,lVar7), lStack_a8 != 0)) {
        func_0x0001092b4274(&lStack_a8);
      }
      return;
    }
  } while( true );
}



/* Entry: 10acb5eb0; end: 10acb6197;  */

undefined8 * FUN_10acb5eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6b398;
  if (param_1[0x1f] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1e) == '\x01') && (*(char *)((long)param_1 + 0xe7) < '\0')) {
    __ZdlPv(param_1[0x1a]);
  }
  *param_1 = &PTR_DAT_110c6b3e8;
  func_0x00010acb6048(param_1 + 0x13);
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10acb6198; end: 10acb61eb;  */

void FUN_10acb6198(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -5;
    if (*plVar3 != 0) {
      plVar2[-4] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10acb61ec; end: 10acb61ff;  */

void FUN_10acb61ec(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((long *)0x666666666666666 < plVar1) {
    func_0x000109ffded8();
    plVar2 = plVar1;
    if (plVar1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        lVar3 = *plVar2;
        param_3[1] = plVar2[1];
        *param_3 = lVar3;
        param_3[2] = plVar2[2];
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
        lVar3 = plVar2[3];
        param_3[4] = plVar2[4];
        param_3[3] = lVar3;
        plVar2 = plVar2 + 5;
        param_3 = param_3 + 5;
      } while (plVar2 != param_2);
      do {
        if (*plVar1 != 0) {
          plVar1[1] = *plVar1;
          __ZdlPv();
        }
        plVar1 = plVar1 + 5;
      } while (plVar1 != param_2);
    }
    return;
  }
  __Znwm((long)plVar1 * 0x28);
  return;
}



/* Entry: 10acb6200; end: 10acb6323;  */

void FUN_10acb6200(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((long *)0x666666666666666 < param_1) {
    func_0x000109ffded8();
    plVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        lVar2 = *plVar1;
        param_3[1] = plVar1[1];
        *param_3 = lVar2;
        param_3[2] = plVar1[2];
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        lVar2 = plVar1[3];
        param_3[4] = plVar1[4];
        param_3[3] = lVar2;
        plVar1 = plVar1 + 5;
        param_3 = param_3 + 5;
      } while (plVar1 != param_2);
      do {
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        param_1 = param_1 + 5;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x28);
  return;
}



/* Entry: 10acb6324; end: 10acb6337;  */

void FUN_10acb6324(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar1 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)plVar1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*plVar1 != 0) {
    FUN_10acb6198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar1);
    return;
  }
  return;
}



/* Entry: 10acb6338; end: 10acb63ab;  */

void FUN_10acb6338(long *param_1)

{
  if (param_1 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*param_1 != 0) {
    FUN_10acb6198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10acb63ac; end: 10acb63bf;  */

undefined8 * FUN_10acb63ac(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (param_2 != param_3) {
    lVar5 = 0;
    plVar7 = param_2;
    do {
      plVar6 = plVar7;
      plVar1 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar2 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar1;
          plVar1 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      lVar5 = lVar5 + 1;
    } while (plVar7 != param_3);
    FUN_10a0cf150(puVar3,lVar5);
    puVar4 = puVar3;
    FUN_10a6c92b8(puVar3,param_2,param_3,puVar3[1]);
    puVar3[1] = puVar4;
  }
  return puVar3;
}



/* Entry: 10acb63c0; end: 10acb6497;  */

undefined8 * FUN_10acb63c0(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    lVar4 = 0;
    plVar6 = param_2;
    do {
      plVar5 = plVar6;
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar2 = (long *)*plVar6 != plVar5;
          plVar5 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      lVar4 = lVar4 + 1;
    } while (plVar6 != param_3);
    FUN_10a0cf150(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a6c92b8(param_1,param_2,param_3,param_1[1]);
    param_1[1] = puVar3;
  }
  return param_1;
}



/* Entry: 10acb6498; end: 10acb65df;  */

void FUN_10acb6498(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  iVar3 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar3 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar3 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar4 = (long *)0x0;
    if (iVar3 == 0) {
      plVar4 = param_3;
    }
    lVar5 = 0;
    if (iVar3 == 0) {
      lVar5 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar4 = (long *)0x0;
    lVar5 = 0;
  }
  lVar1 = -0x188;
  if (cRam00000001137ec780 == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = *param_1 + lVar1;
  if (param_6 != 0) {
    lVar2 = 0;
    if (*param_1 != 0) {
      lVar2 = lVar1 + 0x20;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        func_0x00010a1bf190(*param_5 + 0xb0,lVar2);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar5 != 0) {
    lVar5 = lVar5 << 4;
    do {
      if (*plVar4 != 0) {
        func_0x00010a1bf34c(*plVar4 + 0xb0,lVar1 + 0x20);
      }
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10acb65e0; end: 10acb664f;  */

long * FUN_10acb65e0(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1]);
  return plVar4;
}



/* Entry: 10acb6650; end: 10acb6683;  */

long FUN_10acb6650(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10acb6684(param_1);
  }
  return param_1;
}



/* Entry: 10acb6684; end: 10acb685b;  */

void FUN_10acb6684(long *param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
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
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar4 = 0;
    lVar2 = -0x188;
    if (cRam00000001137ec780 == '\0') {
      lVar2 = -0xffff;
    }
    lVar2 = *param_1 + lVar2;
    puVar1 = (ushort *)(lVar2 + 0x109);
    if ((((*puVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar2 + 0xe0) != 0 || ((*puVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar2 + 0x100) != 0)))) || ((*(ushort *)(lVar2 + 0x50) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bd9f60;
        uVar4 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar4,&ppuStack_48);
        uVar3 = *(ushort *)(lVar2 + 0x50);
        if (((uVar3 & 0x7f) == 0) && ((*puVar1 & 0x7f) == 0)) {
          if ((uVar3 >> 8 & 1) == 0) {
            uVar4 = lVar2 + 0x20;
            FUN_10a1bfe94(uVar4,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar4 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar3 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar2 + 0x60) = uStack_a0;
            *(ushort *)(lVar2 + 0x50) = uVar3 | 0x80;
          }
          uVar4 = lVar2 + 0x60;
          FUN_10a1bd398(uVar4,&uStack_a0);
        }
        if (((*puVar1 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), uVar4 != 0)) {
          FUN_10a1bd648();
        }
        FUN_10a1c054c(lVar2 + 0xb0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*puVar1 >> 8 & 1) == 0) {
        *(long *)(lVar2 + 0xc0) = *(long *)(lVar2 + 0xc0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar2 + 0x110);
      ppuVar5 = *(undefined ***)(lVar2 + 0x58);
      if ((ppuVar6 != &PTR_DAT_110bd9f60 || ppuVar5 != &PTR_DAT_110bd9f60) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bd9f60) {
          FUN_10a1bd648(param_1,lVar2 + 0xb0,&PTR_DAT_110bd9f60);
          *(undefined ***)(lVar2 + 0x110) = &PTR_DAT_110bd9f60;
        }
        if (ppuVar5 != &PTR_DAT_110bd9f60) {
          FUN_10a1bd7d8(param_1,lVar2 + 0x20,&PTR_DAT_110bd9f60);
          *(undefined ***)(lVar2 + 0x58) = &PTR_DAT_110bd9f60;
        }
      }
    }
  }
  return;
}



/* Entry: 10acb685c; end: 10acb68cb;  */

long * FUN_10acb685c(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1]);
  return plVar4;
}



/* Entry: 10acb68cc; end: 10acb68df;  */

void FUN_10acb68cc(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10acb68e0; end: 10acb6907;  */

void FUN_10acb68e0(void)

{
  return;
}



/* Entry: 10acb6908; end: 10acb6b6b;  */

undefined8 * FUN_10acb6908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6a310;
  param_1[3] = &PTR_FUN_110c6a378;
  FUN_10a0dd8cc(param_1 + 8);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb6b6c; end: 10acb6cc7;  */

void FUN_10acb6b6c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  func_0x00010ac985c0(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  func_0x00010acb6d30(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acb6cc8; end: 10acb6dbf;  */

void FUN_10acb6cc8(undefined **param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c6ad10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
  plStack_48 = (long *)param_3[1];
  puStack_50 = *param_3;
  *param_3 = (undefined *)0x0;
  param_3[1] = (undefined *)0x0;
  ppuStack_58 = &PTR_DAT_110c6ad10;
  func_0x000109899de4(puVar6,param_2,&puStack_50,&ppuStack_58,0,0);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10acb6dc0; end: 10acb6eff;  */

void FUN_10acb6dc0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x3f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[5],plVar5[6]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[6];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[5];
    in_stack_ffffffffffffffb0 = plVar5[7];
  }
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



/* Entry: 10acb6f00; end: 10acb6f67;  */

void FUN_10acb6f00(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
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
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10acb6f00(plVar6,param_2);
  FUN_10a052e3c(param_4);
  plVar18 = (long *)plVar8[9];
  if (plVar8[9] != 0) {
    plVar8 = (long *)(plVar8[9] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10aa9369c(extraout_x8,plVar6,&stack0xffffffffffffff90);
  if (plVar18 != (long *)0x0) {
    plVar6 = plVar18 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
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
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_a8 = lVar11;
          lStack_a0 = lVar11;
          lStack_98 = lVar11;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10acb6f68; end: 10acb7083;  */

void FUN_10acb6f68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[9];
  if (plVar6[9] != 0) {
    plVar6 = (long *)(plVar6[9] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10aa9369c(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10acb7084; end: 10acb71d3;  */

/* WARNING: Removing unreachable block (ram,0x00010acb7164) */
/* WARNING: Removing unreachable block (ram,0x00010acb7168) */
/* WARNING: Removing unreachable block (ram,0x00010acb7170) */
/* WARNING: Removing unreachable block (ram,0x00010acb7178) */
/* WARNING: Removing unreachable block (ram,0x00010acb717c) */

void FUN_10acb7084(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10acb71d4(param_5);
  FUN_10acb71f8(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10ac9855c(plVar6 + 8,&stack0xffffffffffffffb0);
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



/* Entry: 10acb71d4; end: 10acb71f7;  */

void FUN_10acb71d4(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined *extraout_x8;
  undefined *puVar11;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  lVar9 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar10 = &lStack_90;
  func_0x000109898610(&lStack_80,lVar9,param_1);
  if (lStack_80 == 0) {
    *plVar5 = 0;
    plVar5[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c42bf0,0x10);
    if (lStack_80 != 0) {
      plStack_88 = plStack_78;
      plVar10 = &lStack_80;
      lStack_90 = lStack_80;
    }
    *plVar10 = 0;
    lVar3 = lStack_90;
    plVar10[1] = 0;
    if (lStack_90 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10acb75e4);
      (*pcVar4)();
    }
    FUN_10a0533bc(&plStack_60,lStack_90);
    if (plStack_60 == (long *)0x0) {
      func_0x0001098849a4(&lStack_50,lVar9,param_1);
      plVar6 = (long *)0x30;
      __Znwm();
      plVar10 = plStack_88;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_DAT_110b174d8;
      plStack_70 = plVar6 + 3;
      if ((int)lStack_50 == 3) {
        plVar6[3] = lVar9;
        *(undefined4 *)(plVar6 + 4) = 3;
        plVar6[5] = (long)plStack_48;
      }
      else if ((int)lStack_50 == 2) {
        plVar6[3] = lVar9;
        *(undefined4 *)(plVar6 + 4) = 2;
        *(undefined1 *)(plVar6 + 5) = plStack_48._0_1_;
      }
      else if ((int)lStack_50 < 4) {
        plVar6[3] = lVar9;
        *(int *)(plVar6 + 4) = (int)lStack_50;
      }
      else {
        plVar6[3] = lVar9;
        *(int *)(plVar6 + 4) = (int)lStack_50;
        plVar6[5] = (long)plStack_48;
      }
      lStack_50 = lVar3;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar7 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7 = (long *)0x90;
      plStack_68 = plVar6;
      __Znwm();
      plVar6 = plStack_58;
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110b9fe30;
      plStack_60 = plVar7 + 3;
      *plStack_60 = lVar3;
      lStack_50 = 0;
      plStack_48 = (long *)0x0;
      plVar7[4] = (long)plVar10;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0x32aaaba7;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[0x11] = 0;
      plVar7[0x10] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar10 = plStack_58 + 1;
        do {
          lVar9 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          lVar9 = *plStack_58;
          plStack_58 = plVar7;
          (**(code **)(lVar9 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar7 = plStack_58;
        }
      }
      plStack_58 = plVar7;
      plVar10 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar6 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      func_0x00010a04a7fc(plStack_60 + 2,&plStack_70);
      *plVar5 = lStack_90;
      plVar5[1] = (long)plStack_58;
      if (plStack_58 == (long *)0x0) {
        plStack_48 = (long *)0x0;
      }
      else {
        plVar10 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_48 = plStack_58;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_50 = lStack_90;
      func_0x00010a053e8c(plStack_60,&lStack_50);
      plVar10 = plStack_48;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      func_0x00010a053ee8(lStack_90,&plStack_60);
      ppuVar8 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_90 + 0x50));
      puVar11 = *ppuVar8;
      if (extraout_x8 != (undefined *)0x0) {
        puVar11 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar11 + 0x870),&plStack_60);
      plVar10 = plStack_68;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_50);
      plVar5[1] = (long)plStack_48;
      *plVar5 = lStack_50;
    }
    plVar10 = plStack_58;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_88;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar10 = plStack_78 + 1;
    do {
      lVar9 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10acb71f8; end: 10acb7673;  */

void FUN_10acb71f8(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar7 = &lStack_80;
  func_0x000109898610(&lStack_70,param_2,param_3);
  if (lStack_70 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_70,&PTR_DAT_110b178e0,&PTR_DAT_110c42bf0,0x10);
    if (lStack_70 != 0) {
      plStack_78 = plStack_68;
      plVar7 = &lStack_70;
      lStack_80 = lStack_70;
    }
    *plVar7 = 0;
    lVar8 = lStack_80;
    plVar7[1] = 0;
    if (lStack_80 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb75e4);
      (*pcVar3)();
    }
    FUN_10a0533bc(&plStack_50,lStack_80);
    if (plStack_50 == (long *)0x0) {
      func_0x0001098849a4(&lStack_40,param_2,param_3);
      plVar4 = (long *)0x30;
      __Znwm();
      plVar7 = plStack_78;
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_DAT_110b174d8;
      plStack_60 = plVar4 + 3;
      if ((int)lStack_40 == 3) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 3;
        plVar4[5] = (long)plStack_38;
      }
      else if ((int)lStack_40 == 2) {
        plVar4[3] = param_2;
        *(undefined4 *)(plVar4 + 4) = 2;
        *(undefined1 *)(plVar4 + 5) = plStack_38._0_1_;
      }
      else if ((int)lStack_40 < 4) {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_40;
      }
      else {
        plVar4[3] = param_2;
        *(int *)(plVar4 + 4) = (int)lStack_40;
        plVar4[5] = (long)plStack_38;
      }
      lStack_40 = lVar8;
      plStack_38 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar5 = plStack_78 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)0x90;
      plStack_58 = plVar4;
      __Znwm();
      plVar4 = plStack_48;
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b9fe30;
      plStack_50 = plVar5 + 3;
      *plStack_50 = lVar8;
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
      plVar5[4] = (long)plVar7;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0x32aaaba7;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      if (plStack_48 != (long *)0x0) {
        plVar7 = plStack_48 + 1;
        do {
          lVar8 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          lVar8 = *plStack_48;
          plStack_48 = plVar5;
          (**(code **)(lVar8 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          plVar5 = plStack_48;
        }
      }
      plStack_48 = plVar5;
      plVar7 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
      *param_1 = lStack_80;
      param_1[1] = (long)plStack_48;
      if (plStack_48 == (long *)0x0) {
        plStack_38 = (long *)0x0;
      }
      else {
        plVar7 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_38 = plStack_48;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_40 = lStack_80;
      func_0x00010a053e8c(plStack_50,&lStack_40);
      plVar7 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x00010a053ee8(lStack_80,&plStack_50);
      ppuVar6 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(lStack_80 + 0x50));
      puVar9 = *ppuVar6;
      if (extraout_x8 != (undefined *)0x0) {
        puVar9 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
      plVar7 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    else {
      FUN_10a053e40(&lStack_40);
      param_1[1] = (long)plStack_38;
      *param_1 = lStack_40;
    }
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar7 = plStack_68 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10acb7674; end: 10acb772f;  */

void FUN_10acb7674(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 10);
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



/* Entry: 10acb7730; end: 10acb781f;  */

void FUN_10acb7730(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb780c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 10) = fVar2;
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



/* Entry: 10acb7820; end: 10acb78db;  */

void FUN_10acb7820(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x54);
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



/* Entry: 10acb78dc; end: 10acb79cb;  */

void FUN_10acb78dc(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb79b8);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x54) = fVar2;
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



/* Entry: 10acb79cc; end: 10acb7a87;  */

void FUN_10acb79cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 0xb));
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



/* Entry: 10acb7a88; end: 10acb7b47;  */

void FUN_10acb7a88(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10acb7b48(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)(plVar4 + 0xb) = (char)param_2;
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



/* Entry: 10acb7b48; end: 10acb7b6b;  */

void FUN_10acb7b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  float fVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acb6f00(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)((long)plVar3 + 0x5c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
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
  lVar6 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
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



/* Entry: 10acb7b6c; end: 10acb7c27;  */

void FUN_10acb7b6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x5c);
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



/* Entry: 10acb7c28; end: 10acb7d17;  */

void FUN_10acb7c28(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb7d04);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x5c) = fVar2;
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



/* Entry: 10acb7d18; end: 10acb7dd3;  */

void FUN_10acb7d18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0xc);
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



/* Entry: 10acb7dd4; end: 10acb7ec3;  */

void FUN_10acb7dd4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb7eb0);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0xc) = fVar2;
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



/* Entry: 10acb7ec4; end: 10acb7f7f;  */

void FUN_10acb7ec4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 100);
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



/* Entry: 10acb7f80; end: 10acb806f;  */

void FUN_10acb7f80(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb805c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 100) = fVar2;
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



/* Entry: 10acb8070; end: 10acb8127;  */

void FUN_10acb8070(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xd];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10acb8128; end: 10acb81e7;  */

void FUN_10acb8128(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0xd) = (char)param_2;
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



/* Entry: 10acb81e8; end: 10acb829f;  */

void FUN_10acb81e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x69);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10acb82a0; end: 10acb835f;  */

void FUN_10acb82a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0x69) = (char)param_2;
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



/* Entry: 10acb8360; end: 10acb841f;  */

void FUN_10acb8360(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar15 = *(float *)((long)param_2 + 0x5c);
  fVar14 = *(float *)(param_2 + 0xc);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(fVar14 - fVar15);
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



/* Entry: 10acb8420; end: 10acb84db;  */

void FUN_10acb8420(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xe];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10acb84dc; end: 10acb859b;  */

void FUN_10acb84dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10aa9ca3c(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0xe) = (int)param_2;
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



/* Entry: 10acb859c; end: 10acb8657;  */

void FUN_10acb859c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10acb6f00(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x74);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10acb8658; end: 10acb8717;  */

void FUN_10acb8658(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb6cc8(param_2,param_3);
  FUN_10aa9cbf4(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x74) = (int)param_2;
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



/* Entry: 10acb8718; end: 10acb886b;  */

void FUN_10acb8718(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined1 uStack_41;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&ppuStack_70,param_2,param_4);
  uStack_50 = uStack_68;
  ppuStack_58 = ppuStack_70;
  if (-1 < (char)bStack_59) {
    uStack_50 = (ulong)bStack_59;
    ppuStack_58 = &ppuStack_70;
  }
  FUN_10acb8c70(auStack_80,&uStack_41,&ppuStack_58);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  func_0x00010acb6d30(param_1,param_2,auStack_80);
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
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10acb886c; end: 10acb8a97;  */

void FUN_10acb886c(undefined8 param_1,float param_2,long *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  float fVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined1 uStack_61;
  
  plVar7 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10acb8a98(param_6);
  FUN_10a3f3f30(&ppppuStack_90,param_3,param_5);
  bVar4 = bStack_79;
  ppppuVar3 = ppppuStack_90;
  uVar10 = (ulong)bStack_79;
  FUN_10acb71f8(&lStack_a0,param_3,param_5 + 0x10);
  uStack_70 = uStack_88;
  ppppuStack_78 = ppppuVar3;
  if (-1 < (char)bVar4) {
    uStack_70 = uVar10;
    ppppuStack_78 = &ppppuStack_90;
  }
  if (lStack_a0 == 0) {
    FUN_10a00946c(&UNK_10f6a095d);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acb8a4c);
    (*pcVar6)();
  }
  FUN_10acb8c70(&lStack_b0,&uStack_61,&ppppuStack_78);
  func_0x00010a0dd924(lStack_b0 + 0x40,&lStack_a0);
  plVar9 = *(long **)(lStack_a0 + 0xf8);
  if (plVar9 == (long *)0x0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = 0.0;
    do {
      FUN_10aa71198(plVar9[6]);
      fVar5 = param_2;
      if (param_2 <= fVar11) {
        fVar5 = fVar11;
      }
      fVar11 = fVar5;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  *(float *)(lStack_b0 + 0x60) = fVar11;
  if (plStack_98 != (long *)0x0) {
    plVar9 = plStack_98 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if ((char)bStack_79 < '\0') {
    __ZdlPv(ppppuStack_90);
  }
  func_0x00010acb6d30(param_1,param_3,&lStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar9 = plStack_a8 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  func_0x00010988c170(plVar7 + 0x4b);
  return;
}



/* Entry: 10acb8a98; end: 10acb8abb;  */

void FUN_10acb8a98(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar8;
  long lVar9;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar6 = (long *)0x2;
  lVar7 = 0;
  FUN_10a052ee0(2,0,param_1);
  lStack_50 = *plVar6;
  plVar8 = (long *)plVar6[1];
  *plVar6 = 0;
  plVar6[1] = 0;
  lVar9 = (long)*(char *)(lVar7 + 0x2f);
  if (lVar9 < 0) {
    puVar1 = *(undefined **)(lVar7 + 0x18);
    lVar9 = *(long *)(lVar7 + 0x20);
  }
  else {
    puVar1 = (undefined *)(lVar7 + 0x18);
  }
  if (lStack_50 != 0) {
    ___dynamic_cast(lStack_50,&PTR_DAT_110bf32c0,&PTR_DAT_110c42bf0,0);
    if (lStack_50 != 0) {
      plStack_48 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar6 = plVar8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = *plVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      goto LAB_10acb8b8c;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar3 = &UNK_10f6a0902;
      if (lVar9 != 0) {
        puVar3 = puVar1;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f6a1b27,0x34,&UNK_10f63498b,in_x6,in_x7,lVar9,
                          puVar3);
    }
  }
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
LAB_10acb8b8c:
  FUN_10ac9855c(*(undefined8 *)(lVar7 + 0x10),&lStack_50);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar9 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10acb8abc; end: 10acb8c2f;  */

void FUN_10acb8abc(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar8;
  long lVar9;
  long lStack_40;
  long *plStack_38;
  
  lVar7 = *param_1;
  plVar8 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = (long)*(char *)(param_2 + 0x2f);
  if (lVar9 < 0) {
    puVar1 = *(undefined **)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    puVar1 = (undefined *)(param_2 + 0x18);
  }
  if (lVar7 != 0) {
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c42bf0,0);
    if (lVar7 != 0) {
      lStack_40 = lVar7;
      plStack_38 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      goto LAB_10acb8b8c;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar4 = &UNK_10f6a0902;
      if (lVar9 != 0) {
        puVar4 = puVar1;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f6a1b27,0x34,&UNK_10f63498b,in_x6,in_x7,lVar9,
                          puVar4);
    }
  }
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
LAB_10acb8b8c:
  FUN_10ac9855c(*(undefined8 *)(param_2 + 0x10),&lStack_40);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar9 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10acb8c30; end: 10acb8c6f;  */

void FUN_10acb8c30(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10acb8c70; end: 10acb8cc7;  */

void FUN_10acb8c70(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x90;
  __Znwm();
  FUN_10acb8cc8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10acb8cc8; end: 10acb8d17;  */

undefined8 * FUN_10acb8cc8(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba1ef8;
  FUN_10ac98d00(param_1 + 3,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 10acb8d18; end: 10acb8e1f;  */

void FUN_10acb8d18(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10aaa39d8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acb8e0c);
    (*pcVar2)();
  }
  fVar14 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar14 = 0.0;
  }
  (**(code **)*param_2)(param_2);
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



/* Entry: 10acb8e20; end: 10acb9047;  */

/* WARNING: Removing unreachable block (ram,0x00010acb8f98) */
/* WARNING: Removing unreachable block (ram,0x00010acb8f9c) */
/* WARNING: Removing unreachable block (ram,0x00010acb8fa4) */
/* WARNING: Removing unreachable block (ram,0x00010acb8fac) */
/* WARNING: Removing unreachable block (ram,0x00010acb8fb0) */

void FUN_10acb8e20(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10aaa39d8(param_2,param_3);
  FUN_10acb9048(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10acb9010:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10acb9014);
      (*pcVar4)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    puVar9 = (undefined8 *)&stack0xffffffffffffffa0;
    if ((in_stack_ffffffffffffffb0 != 0) &&
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c6c670,0),
       puVar9 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != 0)) {
      puVar9 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar1 = in_stack_ffffffffffffffb8 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10acb9010;
    }
  }
  FUN_10ac99870(plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar8 = lVar11 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar11 + 2];
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
  lVar11 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          lStack_70 = lVar15;
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar11 = lVar11 + uVar8 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10acb9048; end: 10acb906b;  */

void FUN_10acb9048(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aaa39d8(plVar4,uVar6);
  FUN_10a05ed04(param_4);
  if (*param_1 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acb914c);
    (*pcVar2)();
  }
  fVar1 = (float)*(double *)(param_1 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 2))) {
    fVar1 = 0.0;
  }
  FUN_10ac99f74(fVar1,plVar4);
  *extraout_x8 = 0;
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
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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



/* Entry: 10acb906c; end: 10acb915f;  */

void FUN_10acb906c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10aaa39d8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb914c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  FUN_10ac99f74(fVar2,param_2);
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



/* Entry: 10acb9160; end: 10acb9277;  */

void FUN_10acb9160(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
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
  FUN_10acb9278(param_2,param_3);
  FUN_10a076f00(param_5);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4);
  func_0x00010ac9a200(&stack0xffffffffffffffb0,plVar6,plVar7);
  func_0x00010acb92e0(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
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
  lVar10 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10acb9278; end: 10acb936f;  */

void FUN_10acb9278(undefined **param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c6c4c8;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
  plStack_48 = (long *)param_3[1];
  puStack_50 = *param_3;
  *param_3 = (undefined *)0x0;
  param_3[1] = (undefined *)0x0;
  ppuStack_58 = &PTR_DAT_110c6c670;
  func_0x000109899de4(puVar6,param_2,&puStack_50,&ppuStack_58,0,0);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10acb9370; end: 10acb9433;  */

void FUN_10acb9370(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acb9278(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x13];
  lVar10 = param_2[0x14];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)((ulong)(lVar10 - lVar5) >> 4);
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



/* Entry: 10acb9434; end: 10acb9567;  */

void FUN_10acb9434(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a052e3c(param_5);
  plVar7 = (long *)0x68;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c42c18;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[8] = 0x3ea8f5c33ea8f5c3;
  plVar7[7] = 0x3ea8f5c33ea8f5c3;
  plVar7[9] = 0x100000001;
  plVar7[3] = (long)&PTR_FUN_110c6c628;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[10] = 0;
  func_0x00010acb92e0(param_1,param_2,&stack0xffffffffffffffc0);
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



/* Entry: 10acb9568; end: 10acb9ac7;  */

void FUN_10acb9568(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,ulong param_5)

{
  undefined8 **ppuVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 uStack_100;
  long *plStack_f8;
  int aiStack_f0 [2];
  undefined8 *puStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10acb9ac8(param_5);
  aiStack_f0[0] = 0;
  piVar2 = aiStack_f0;
  if (param_5 != 0) {
    piVar2 = param_4;
  }
  if (*piVar2 == 3) {
    piVar2 = aiStack_f0;
    if (param_5 != 0) {
      piVar2 = param_4;
    }
    fVar13 = (float)*(double *)(piVar2 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(piVar2 + 2))) {
      fVar13 = 0.0;
    }
    piVar2 = aiStack_f0;
    if (1 < param_5) {
      piVar2 = param_4 + 4;
    }
    if (*piVar2 == 3) {
      ppuVar1 = &puStack_e8;
      if (1 < param_5) {
        ppuVar1 = (undefined8 **)(param_4 + 6);
      }
      fVar16 = (float)(double)*ppuVar1;
      if (0x7fefffffffffffff < ((ulong)*ppuVar1 & 0x7fffffffffffffff)) {
        fVar16 = 0.0;
      }
      piVar2 = aiStack_f0;
      if (2 < param_5) {
        piVar2 = param_4 + 8;
      }
      if (*piVar2 == 3) {
        ppuVar1 = &puStack_e8;
        if (2 < param_5) {
          ppuVar1 = (undefined8 **)(param_4 + 10);
        }
        fVar14 = (float)(double)*ppuVar1;
        if (0x7fefffffffffffff < ((ulong)*ppuVar1 & 0x7fffffffffffffff)) {
          fVar14 = 0.0;
        }
        piVar2 = aiStack_f0;
        if (3 < param_5) {
          piVar2 = param_4 + 0xc;
        }
        if (*piVar2 == 3) {
          ppuVar1 = &puStack_e8;
          if (3 < param_5) {
            ppuVar1 = (undefined8 **)(param_4 + 0xe);
          }
          fVar17 = (float)(double)*ppuVar1;
          if (0x7fefffffffffffff < ((ulong)*ppuVar1 & 0x7fffffffffffffff)) {
            fVar17 = 0.0;
          }
          piVar2 = aiStack_f0;
          if (4 < param_5) {
            piVar2 = param_4 + 0x10;
          }
          if (*piVar2 == 3) {
            ppuVar1 = &puStack_e8;
            if (4 < param_5) {
              ppuVar1 = (undefined8 **)(param_4 + 0x12);
            }
            fVar15 = (float)(double)*ppuVar1;
            if (0x7fefffffffffffff < ((ulong)*ppuVar1 & 0x7fffffffffffffff)) {
              fVar15 = 0.0;
            }
            piVar2 = aiStack_f0;
            if (5 < param_5) {
              piVar2 = param_4 + 0x14;
            }
            if (*piVar2 == 3) {
              ppuVar1 = &puStack_e8;
              if (5 < param_5) {
                ppuVar1 = (undefined8 **)(param_4 + 0x16);
              }
              puVar18 = *ppuVar1;
              piVar2 = aiStack_f0;
              if (6 < param_5) {
                piVar2 = param_4 + 0x18;
              }
              plVar7 = param_2;
              func_0x00010a479fa8(param_2,piVar2);
              fVar12 = (float)(double)puVar18;
              if (0x7fefffffffffffff < ((ulong)puVar18 & 0x7fffffffffffffff)) {
                fVar12 = 0.0;
              }
              fVar19 = 1.0;
              if (((ulong)plVar7 & 0x100000000) != 0) {
                fVar19 = SUB84(plVar7,0);
              }
              if (0.0 <= fVar19) {
                func_0x00010a493ed0(&uStack_100,&plStack_b0);
                plVar7 = (long *)0x68;
                __Znwm();
                plVar10 = plVar7 + 1;
                *plVar10 = 0;
                plVar7[2] = 0;
                *plVar7 = (long)&PTR_FUN_110c42c18;
                plVar11 = plVar7 + 3;
                *plVar11 = (long)&PTR_FUN_110c6c628;
                plVar7[7] = 0;
                plVar7[6] = 0;
                plVar7[9] = 0;
                plVar7[8] = 0;
                plVar7[8] = 0x3ea8f5c33ea8f5c3;
                plVar7[7] = 0x3ea8f5c33ea8f5c3;
                plVar7[9] = 0x100000001;
                plVar7[4] = 0;
                plVar7[5] = 0;
                plVar7[0xb] = 0;
                plVar7[0xc] = 0;
                plVar7[10] = 0;
                plVar8 = (long *)0x68;
                plStack_b0 = plVar11;
                plStack_a8 = plVar7;
                __Znwm();
                plVar8[1] = 0;
                plVar8[2] = 0;
                *plVar8 = (long)&PTR_FUN_110c42c18;
                plVar8[8] = 0x3ea8f5c33ea8f5c3;
                plVar8[9] = 0x100000001;
                plVar8[4] = 0;
                plVar8[5] = 0;
                plStack_c0 = plVar8 + 3;
                *plStack_c0 = (long)&PTR_FUN_110c6c628;
                plVar8[0xb] = 0;
                plVar8[0xc] = 0;
                plVar8[10] = 0;
                *(undefined4 *)(plVar7 + 6) = 0;
                *(float *)((long)plVar7 + 0x34) = fVar13;
                *(float *)(plVar7 + 8) = fVar14;
                *(float *)((long)plVar7 + 0x44) = fVar17;
                *(float *)(plVar8 + 6) = fVar19;
                *(float *)((long)plVar8 + 0x34) = fVar16;
                *(float *)(plVar8 + 7) = fVar15;
                *(float *)((long)plVar8 + 0x3c) = fVar12;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = *plVar10 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                plStack_d0 = plVar11;
                plStack_c8 = plVar7;
                plStack_b8 = plVar8;
                FUN_10ac99870(uStack_100,&plStack_d0);
                do {
                  lVar9 = *plVar10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = lVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar9 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
                plVar7 = plStack_b8;
                plStack_d8 = plStack_b8;
                plStack_e0 = plStack_c0;
                if (plStack_b8 != (long *)0x0) {
                  plVar8 = plStack_b8 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = *plVar8 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                FUN_10ac99870(uStack_100,&plStack_e0);
                if (plVar7 != (long *)0x0) {
                  plVar8 = plVar7 + 1;
                  do {
                    lVar9 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar9 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                  }
                }
                plVar7 = plStack_b8;
                if (plStack_b8 != (long *)0x0) {
                  plVar8 = plStack_b8 + 1;
                  do {
                    lVar9 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar9 == 0) {
                    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                  }
                }
                plVar7 = plStack_a8;
                if (plStack_a8 != (long *)0x0) {
                  plVar8 = plStack_a8 + 1;
                  do {
                    lVar9 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar9 == 0) {
                    (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                  }
                }
                if ((3 < aiStack_f0[0]) && (puStack_e8 != (undefined8 *)0x0)) {
                  (**(code **)*puStack_e8)();
                }
                FUN_10aa941d0(param_1,param_2,&uStack_100);
                if (plStack_f8 != (long *)0x0) {
                  plVar7 = plStack_f8 + 1;
                  do {
                    lVar9 = *plVar7;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar4) {
                      *plVar7 = lVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar9 == 0) {
                    (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
                  }
                }
                func_0x00010988c170(plVar6 + 0x4b);
                return;
              }
              FUN_10a00946c(&UNK_10f6a0a6c);
              goto LAB_10acb9a44;
            }
          }
        }
      }
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10acb9a44:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acb9a48);
  (*pcVar5)();
}



/* Entry: 10acb9ac8; end: 10acb9aef;  */

void FUN_10acb9ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined1 uStack_41;
  
  if (((uint)param_1 & 0xfffffffe) == 6) {
    return;
  }
  plVar3 = (long *)0x7;
  FUN_10a052ee0(7,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_4);
  func_0x00010a493ed0(auStack_58,&uStack_41);
  FUN_10aa941d0(extraout_x8,plVar3,auStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar3 = plStack_50 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10acb9af0; end: 10acb9bdb;  */

void FUN_10acb9af0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
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
  func_0x00010a493ed0(auStack_48,&uStack_31);
  FUN_10aa941d0(param_1,param_2,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10acb9bdc; end: 10acb9ebb;  */

void FUN_10acb9bdc(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  
  if (param_3 < (long *)0x2) {
    return;
  }
  if (param_3 == (long *)0x2) {
    lVar7 = *param_1;
    if (*(float *)(lVar7 + 0x18) <= *(float *)(param_2[-2] + 0x18)) {
      return;
    }
    *param_1 = param_2[-2];
    param_2[-2] = lVar7;
    lVar7 = param_1[1];
    param_1[1] = param_2[-1];
    param_2[-1] = lVar7;
    return;
  }
  if ((long)param_3 < 1) {
    if (param_1 == param_2) {
      return;
    }
    if (param_1 + 2 == param_2) {
      return;
    }
    lVar7 = 0;
    plVar8 = param_1 + 2;
    plVar4 = param_1;
    do {
      plVar17 = plVar8;
      lVar5 = *plVar17;
      if (*(float *)(lVar5 + 0x18) < *(float *)(*plVar4 + 0x18)) {
        plVar8 = (long *)plVar4[3];
        *plVar17 = 0;
        plVar17[1] = 0;
        lVar9 = lVar7;
        do {
          lVar13 = lVar9;
          lVar10 = (long)param_1 + lVar13;
          func_0x00010acb57a0(lVar10 + 0x10,lVar10);
          plVar4 = param_1;
          if (lVar13 == 0) goto LAB_10acb9d70;
          lVar9 = lVar13 + -0x10;
        } while (*(float *)(lVar5 + 0x18) < *(float *)(*(long *)(lVar10 + -0x10) + 0x18));
        plVar4 = (long *)((long)param_1 + lVar13);
LAB_10acb9d70:
        func_0x00010acb57a0(plVar4,&stack0xffffffffffffffa0);
        if (plVar8 != (long *)0x0) {
          plVar4 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      lVar7 = lVar7 + 0x10;
      plVar8 = plVar17 + 2;
      plVar4 = plVar17;
      if (plVar17 + 2 == param_2) {
        return;
      }
    } while( true );
  }
  uVar20 = (ulong)param_3 >> 1;
  plVar8 = param_1 + uVar20 * 2;
  lVar7 = (long)param_3 - ((ulong)param_3 >> 1);
  if (param_5 < (long)param_3) {
    FUN_10acb9bdc();
    FUN_10acb9bdc(plVar8,param_2,lVar7,param_4,param_5);
    while( true ) {
      if (lVar7 == 0) {
        return;
      }
      if (((long)uVar20 <= param_5) || (lVar7 <= param_5)) break;
      if (uVar20 == 0) {
        return;
      }
      lVar5 = 0;
      lVar10 = *plVar8;
      lVar9 = -uVar20;
      while (lVar13 = *(long *)((long)param_1 + lVar5),
            *(float *)(lVar13 + 0x18) <= *(float *)(lVar10 + 0x18)) {
        lVar5 = lVar5 + 0x10;
        bVar3 = lVar9 == -1;
        lVar9 = lVar9 + 1;
        if (bVar3) {
          return;
        }
      }
      if (-lVar9 < lVar7) {
        lVar13 = lVar7 / 2;
        plVar4 = plVar8 + lVar13 * 2;
        lVar14 = (long)plVar8 + (-lVar5 - (long)param_1);
        plVar17 = plVar8;
        if (lVar14 != 0) {
          uVar20 = lVar14 >> 4;
          plVar17 = (long *)((long)param_1 + lVar5);
          do {
            uVar15 = uVar20 >> 1;
            uVar16 = uVar20 + (uVar20 >> 1 ^ 0xffffffffffffffff);
            uVar20 = uVar15;
            if (*(float *)(plVar17[uVar15 * 2] + 0x18) <= *(float *)(*plVar4 + 0x18)) {
              uVar20 = uVar16;
              plVar17 = plVar17 + uVar15 * 2 + 2;
            }
          } while (uVar20 != 0);
        }
        uVar20 = (long)plVar17 + (-lVar5 - (long)param_1) >> 4;
      }
      else {
        if (lVar9 == -1) {
          param_1 = (long *)((long)param_1 + lVar5);
          *param_1 = lVar10;
          *plVar8 = lVar13;
          lVar7 = param_1[1];
          param_1[1] = plVar8[1];
          plVar8[1] = lVar7;
          return;
        }
        uVar20 = -lVar9 / 2;
        plVar4 = plVar8;
        if (plVar8 != param_2) {
          uVar16 = (long)param_2 - (long)plVar8 >> 4;
          plVar17 = plVar8;
          do {
            uVar15 = uVar16 >> 1;
            plVar4 = plVar17 + uVar15 * 2 + 2;
            uVar16 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
            if (*(float *)(*(long *)((long)param_1 + lVar5 + uVar20 * 0x10) + 0x18) <=
                *(float *)(plVar17[uVar15 * 2] + 0x18)) {
              plVar4 = plVar17;
              uVar16 = uVar15;
            }
            plVar17 = plVar4;
          } while (uVar16 != 0);
        }
        lVar13 = (long)plVar4 - (long)plVar8 >> 4;
        plVar17 = (long *)((long)param_1 + lVar5 + uVar20 * 0x10);
      }
      plVar6 = plVar4;
      if ((plVar17 != plVar8) && (plVar6 = plVar17, plVar8 != plVar4)) {
        lVar14 = *plVar17;
        *plVar17 = lVar10;
        *plVar8 = lVar14;
        lVar10 = plVar17[1];
        plVar17[1] = plVar8[1];
        plVar8[1] = lVar10;
        plVar12 = plVar8;
        plVar18 = plVar17;
        while( true ) {
          plVar6 = plVar18 + 2;
          plVar11 = plVar12 + 2;
          if (plVar11 == plVar4) break;
          plVar19 = plVar11;
          if (plVar6 != plVar8) {
            plVar19 = plVar8;
          }
          lVar10 = *plVar6;
          *plVar6 = *plVar11;
          *plVar11 = lVar10;
          lVar10 = plVar18[3];
          plVar18[3] = plVar12[3];
          plVar12[3] = lVar10;
          plVar8 = plVar19;
          plVar12 = plVar11;
          plVar18 = plVar6;
        }
        plVar12 = plVar6;
        plVar18 = plVar8;
        if (plVar6 != plVar8) {
          do {
            while( true ) {
              plVar11 = plVar18;
              lVar10 = *plVar12;
              *plVar12 = *plVar8;
              *plVar8 = lVar10;
              lVar10 = plVar12[1];
              plVar12[1] = plVar8[1];
              plVar8[1] = lVar10;
              plVar12 = plVar12 + 2;
              plVar8 = plVar8 + 2;
              if (plVar8 == plVar4) break;
              plVar18 = plVar8;
              if (plVar12 != plVar11) {
                plVar18 = plVar11;
              }
            }
            plVar8 = plVar11;
            plVar18 = plVar11;
          } while (plVar12 != plVar11);
        }
      }
      if ((long)(uVar20 + lVar13) < (long)((lVar7 - (uVar20 + lVar13)) - lVar9)) {
        FUN_10acba108((long)param_1 + lVar5,plVar17,plVar6,uVar20,lVar13,param_4);
        uVar20 = -(uVar20 + lVar9);
        plVar8 = plVar4;
        lVar7 = lVar7 - lVar13;
        param_1 = plVar6;
      }
      else {
        FUN_10acba108(plVar6,plVar4,param_2,-(uVar20 + lVar9),lVar7 - lVar13,param_4);
        plVar8 = plVar17;
        lVar7 = lVar13;
        param_2 = plVar6;
        param_1 = (long *)((long)param_1 + lVar5);
      }
    }
    plVar4 = param_4;
    if (lVar7 < (long)uVar20) {
      if (plVar8 == param_2) {
        return;
      }
      lVar7 = 0;
      plVar17 = (long *)0x0;
      do {
        puVar1 = (undefined8 *)((long)plVar8 + lVar7);
        uVar21 = *puVar1;
        ((undefined8 *)((long)param_4 + lVar7))[1] = puVar1[1];
        *(undefined8 *)((long)param_4 + lVar7) = uVar21;
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar17 = (long *)((long)plVar17 + 1);
        lVar7 = lVar7 + 0x10;
      } while ((long *)((long)plVar8 + lVar7) != param_2);
      plVar6 = (long *)((long)param_4 + lVar7);
      do {
        param_2 = param_2 + -2;
        if (plVar8 == param_1) goto LAB_10acba480;
        plVar11 = plVar6 + -2;
        plVar18 = plVar8 + -2;
        plVar12 = plVar18;
        if (*(float *)(*plVar18 + 0x18) <= *(float *)(*plVar11 + 0x18)) {
          plVar6 = plVar11;
          plVar18 = plVar8;
          plVar12 = plVar11;
        }
        plVar8 = plVar18;
        func_0x00010acb57a0(param_2,plVar12);
      } while (plVar6 != param_4);
    }
    else {
      if (plVar8 == param_1) {
        return;
      }
      plVar17 = (long *)0x0;
      plVar6 = param_1;
      plVar12 = param_4;
      do {
        plVar19 = plVar12;
        lVar7 = *plVar6;
        plVar19[1] = plVar6[1];
        *plVar19 = lVar7;
        plVar11 = plVar6 + 2;
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar17 = (long *)((long)plVar17 + 1);
        plVar6 = plVar11;
        plVar18 = param_4;
        plVar12 = plVar19 + 2;
      } while (plVar11 != plVar8);
      do {
        if (plVar8 == param_2) goto LAB_10acba518;
        if (*(float *)(*plVar18 + 0x18) <= *(float *)(*plVar8 + 0x18)) {
          func_0x00010acb57a0(param_1,plVar18);
          plVar18 = plVar18 + 2;
        }
        else {
          func_0x00010acb57a0(param_1,plVar8);
          plVar8 = plVar8 + 2;
        }
        param_1 = param_1 + 2;
      } while (plVar19 + 2 != plVar18);
    }
    goto joined_r0x00010acba534;
  }
  FUN_10acb9ebc(param_1,plVar8,uVar20);
  plVar17 = param_4 + uVar20 * 2;
  FUN_10acb9ebc(plVar8,param_2,lVar7,plVar17);
  plVar4 = plVar17;
  plVar8 = param_4;
  do {
    plVar6 = param_4;
    if (plVar4 == param_4 + (long)param_3 * 2) goto LAB_10acb9e54;
    if (*(float *)(*plVar8 + 0x18) <= *(float *)(*plVar4 + 0x18)) {
      func_0x00010acb57a0(param_1,plVar8);
      plVar8 = plVar8 + 2;
    }
    else {
      func_0x00010acb57a0(param_1,plVar4);
      plVar4 = plVar4 + 2;
    }
    param_1 = param_1 + 2;
  } while (plVar8 != plVar17);
  for (; plVar4 != param_4 + (long)param_3 * 2; plVar4 = plVar4 + 2) {
    func_0x00010acb57a0(param_1,plVar4);
    param_1 = param_1 + 2;
  }
joined_r0x00010acb9e7c:
  while (plVar6 != (long *)0x0) {
    func_0x00010aa006d4(param_4);
    param_4 = param_4 + 2;
    param_3 = (long *)((long)param_3 + -1);
    plVar6 = param_3;
  }
  return;
LAB_10acba518:
  do {
    func_0x00010acb57a0(param_1,plVar18);
    param_1 = param_1 + 2;
    bVar3 = plVar19 != plVar18;
    plVar18 = plVar18 + 2;
  } while (bVar3);
  goto joined_r0x00010acba534;
LAB_10acb9e54:
  for (; plVar8 != plVar17; plVar8 = plVar8 + 2) {
    func_0x00010acb57a0(param_1,plVar8);
    param_1 = param_1 + 2;
  }
  goto joined_r0x00010acb9e7c;
LAB_10acba480:
  while (plVar6 != param_4) {
    plVar6 = plVar6 + -2;
    func_0x00010acb57a0(param_2,plVar6);
    param_2 = param_2 + -2;
  }
joined_r0x00010acba534:
  while (plVar4 != (long *)0x0) {
    func_0x00010aa006d4(param_4);
    param_4 = param_4 + 2;
    plVar17 = (long *)((long)plVar17 + -1);
    plVar4 = plVar17;
  }
  return;
}



/* Entry: 10acb9ebc; end: 10acba107;  */

void FUN_10acb9ebc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 2) {
    plVar2 = param_2 + -2;
    plVar1 = param_4 + 3;
    if (*(float *)(*param_1 + 0x18) <= *(float *)(*plVar2 + 0x18)) {
      lVar5 = param_1[1];
      *param_4 = *param_1;
      param_4[1] = lVar5;
      *param_1 = 0;
      param_1[1] = 0;
      param_4[2] = param_2[-2];
      param_2 = param_2 + -1;
      goto LAB_10acba030;
    }
    lVar5 = param_2[-1];
    *param_4 = *plVar2;
    param_4[1] = lVar5;
    *plVar2 = 0;
    param_2[-1] = 0;
    param_4[2] = *param_1;
  }
  else {
    if (param_3 != 1) {
      if (8 < (long)param_3) {
        uVar6 = param_3 >> 1;
        plVar1 = param_1 + uVar6 * 2;
        FUN_10acb9bdc(param_1,plVar1,uVar6,param_4,uVar6);
        lVar5 = param_3 - (param_3 >> 1);
        FUN_10acb9bdc(plVar1,param_2,lVar5,param_4 + uVar6 * 2,lVar5);
        plVar2 = plVar1;
        do {
          if (plVar2 == param_2) {
            for (; param_1 != plVar1; param_1 = param_1 + 2) {
              lVar5 = *param_1;
              param_4[1] = param_1[1];
              *param_4 = lVar5;
              *param_1 = 0;
              param_1[1] = 0;
              param_4 = param_4 + 2;
            }
            return;
          }
          if (*(float *)(*param_1 + 0x18) <= *(float *)(*plVar2 + 0x18)) {
            lVar5 = param_1[1];
            *param_4 = *param_1;
            param_4[1] = lVar5;
            plVar4 = param_1 + 2;
            *param_1 = 0;
            param_1[1] = 0;
          }
          else {
            lVar5 = plVar2[1];
            *param_4 = *plVar2;
            param_4[1] = lVar5;
            *plVar2 = 0;
            plVar2[1] = 0;
            plVar2 = plVar2 + 2;
            plVar4 = param_1;
          }
          param_4 = param_4 + 2;
          param_1 = plVar4;
        } while (plVar4 != plVar1);
        for (; plVar2 != param_2; plVar2 = plVar2 + 2) {
          lVar5 = *plVar2;
          param_4[1] = plVar2[1];
          *param_4 = lVar5;
          *plVar2 = 0;
          plVar2[1] = 0;
          param_4 = param_4 + 2;
        }
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      lVar5 = *param_1;
      param_4[1] = param_1[1];
      *param_4 = lVar5;
      *param_1 = 0;
      param_1[1] = 0;
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar5 = 0;
      plVar1 = param_1 + 2;
      plVar2 = param_4;
      do {
        plVar4 = plVar1;
        if (*(float *)(*plVar2 + 0x18) <= *(float *)(*plVar4 + 0x18)) {
          lVar3 = param_1[3];
          plVar2[2] = *plVar4;
          plVar2[3] = lVar3;
          *plVar4 = 0;
          plVar4[1] = 0;
        }
        else {
          plVar2[2] = *plVar2;
          plVar2[3] = plVar2[1];
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar1 = param_4;
          lVar3 = lVar5;
          if (plVar2 != param_4) {
            do {
              plVar1 = (long *)((long)param_4 + lVar3);
              if (*(float *)(((long *)((long)param_4 + lVar3))[-2] + 0x18) <=
                  *(float *)(*plVar4 + 0x18)) break;
              func_0x00010acb57a0();
              lVar3 = lVar3 + -0x10;
              plVar1 = param_4;
            } while (lVar3 != 0);
          }
          func_0x00010acb57a0(plVar1,plVar4);
        }
        lVar5 = lVar5 + 0x10;
        plVar1 = plVar4 + 2;
        param_1 = plVar4;
        plVar2 = plVar2 + 2;
        if (plVar4 + 2 == param_2) {
          return;
        }
      } while( true );
    }
    plVar1 = param_4 + 1;
    *param_4 = *param_1;
  }
  param_2 = param_1 + 1;
  plVar2 = param_1;
LAB_10acba030:
  *plVar1 = *param_2;
  *plVar2 = 0;
  plVar2[1] = 0;
  return;
}



/* Entry: 10acba108; end: 10acba587;  */

void FUN_10acba108(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6
                  ,long param_7)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) break;
    if (param_4 == 0) {
      return;
    }
    lVar3 = 0;
    lVar6 = *param_2;
    lVar5 = -param_4;
    while (lVar9 = *(long *)((long)param_1 + lVar3),
          *(float *)(lVar9 + 0x18) <= *(float *)(lVar6 + 0x18)) {
      lVar3 = lVar3 + 0x10;
      bVar2 = lVar5 == -1;
      lVar5 = lVar5 + 1;
      if (bVar2) {
        return;
      }
    }
    if (-lVar5 < param_5) {
      lVar9 = param_5 / 2;
      plVar17 = param_2 + lVar9 * 2;
      lVar11 = (long)param_2 + (-lVar3 - (long)param_1);
      plVar14 = param_2;
      if (lVar11 != 0) {
        uVar10 = lVar11 >> 4;
        plVar14 = (long *)((long)param_1 + lVar3);
        do {
          uVar12 = uVar10 >> 1;
          uVar13 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
          uVar10 = uVar12;
          if (*(float *)(plVar14[uVar12 * 2] + 0x18) <= *(float *)(*plVar17 + 0x18)) {
            uVar10 = uVar13;
            plVar14 = plVar14 + uVar12 * 2 + 2;
          }
        } while (uVar10 != 0);
      }
      param_4 = (long)plVar14 + (-lVar3 - (long)param_1) >> 4;
    }
    else {
      if (lVar5 == -1) {
        param_1 = (long *)((long)param_1 + lVar3);
        *param_1 = lVar6;
        *param_2 = lVar9;
        lVar3 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = lVar3;
        return;
      }
      param_4 = -lVar5 / 2;
      plVar17 = param_2;
      if (param_2 != param_3) {
        uVar10 = (long)param_3 - (long)param_2 >> 4;
        plVar14 = param_2;
        do {
          uVar13 = uVar10 >> 1;
          plVar17 = plVar14 + uVar13 * 2 + 2;
          uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
          if (*(float *)(*(long *)((long)param_1 + lVar3 + param_4 * 0x10) + 0x18) <=
              *(float *)(plVar14[uVar13 * 2] + 0x18)) {
            plVar17 = plVar14;
            uVar10 = uVar13;
          }
          plVar14 = plVar17;
        } while (uVar10 != 0);
      }
      lVar9 = (long)plVar17 - (long)param_2 >> 4;
      plVar14 = (long *)((long)param_1 + lVar3 + param_4 * 0x10);
    }
    plVar4 = plVar17;
    if ((plVar14 != param_2) && (plVar4 = plVar14, param_2 != plVar17)) {
      lVar11 = *plVar14;
      *plVar14 = lVar6;
      *param_2 = lVar11;
      lVar6 = plVar14[1];
      plVar14[1] = param_2[1];
      param_2[1] = lVar6;
      plVar8 = param_2;
      plVar15 = plVar14;
      while( true ) {
        plVar4 = plVar15 + 2;
        plVar7 = plVar8 + 2;
        if (plVar7 == plVar17) break;
        plVar16 = plVar7;
        if (plVar4 != param_2) {
          plVar16 = param_2;
        }
        lVar6 = *plVar4;
        *plVar4 = *plVar7;
        *plVar7 = lVar6;
        lVar6 = plVar15[3];
        plVar15[3] = plVar8[3];
        plVar8[3] = lVar6;
        param_2 = plVar16;
        plVar8 = plVar7;
        plVar15 = plVar4;
      }
      plVar8 = plVar4;
      plVar15 = param_2;
      if (plVar4 != param_2) {
        do {
          while( true ) {
            plVar7 = plVar15;
            lVar6 = *plVar8;
            *plVar8 = *param_2;
            *param_2 = lVar6;
            lVar6 = plVar8[1];
            plVar8[1] = param_2[1];
            param_2[1] = lVar6;
            plVar8 = plVar8 + 2;
            param_2 = param_2 + 2;
            if (param_2 == plVar17) break;
            plVar15 = param_2;
            if (plVar8 != plVar7) {
              plVar15 = plVar7;
            }
          }
          param_2 = plVar7;
          plVar15 = plVar7;
        } while (plVar8 != plVar7);
      }
    }
    if (param_4 + lVar9 < (param_5 - (param_4 + lVar9)) - lVar5) {
      FUN_10acba108((long)param_1 + lVar3,plVar14,plVar4,param_4,lVar9,param_6);
      param_5 = param_5 - lVar9;
      param_4 = -(param_4 + lVar5);
      param_2 = plVar17;
      param_1 = plVar4;
    }
    else {
      FUN_10acba108(plVar4,plVar17,param_3,-(param_4 + lVar5),param_5 - lVar9,param_6);
      param_5 = lVar9;
      param_3 = plVar4;
      param_2 = plVar14;
      param_1 = (long *)((long)param_1 + lVar3);
    }
  }
  plVar17 = param_6;
  if (param_5 < param_4) {
    if (param_2 == param_3) {
      return;
    }
    lVar3 = 0;
    plVar14 = (long *)0x0;
    do {
      puVar1 = (undefined8 *)((long)param_2 + lVar3);
      uVar18 = *puVar1;
      ((undefined8 *)((long)param_6 + lVar3))[1] = puVar1[1];
      *(undefined8 *)((long)param_6 + lVar3) = uVar18;
      *puVar1 = 0;
      puVar1[1] = 0;
      plVar14 = (long *)((long)plVar14 + 1);
      lVar3 = lVar3 + 0x10;
    } while ((long *)((long)param_2 + lVar3) != param_3);
    plVar4 = (long *)((long)param_6 + lVar3);
    do {
      param_3 = param_3 + -2;
      if (param_2 == param_1) goto LAB_10acba480;
      plVar7 = plVar4 + -2;
      plVar15 = param_2 + -2;
      plVar8 = plVar15;
      if (*(float *)(*plVar15 + 0x18) <= *(float *)(*plVar7 + 0x18)) {
        plVar4 = plVar7;
        plVar15 = param_2;
        plVar8 = plVar7;
      }
      param_2 = plVar15;
      func_0x00010acb57a0(param_3,plVar8);
    } while (plVar4 != param_6);
  }
  else {
    if (param_2 == param_1) {
      return;
    }
    plVar14 = (long *)0x0;
    plVar4 = param_1;
    plVar8 = param_6;
    do {
      plVar16 = plVar8;
      lVar3 = *plVar4;
      plVar16[1] = plVar4[1];
      *plVar16 = lVar3;
      plVar7 = plVar4 + 2;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar14 = (long *)((long)plVar14 + 1);
      plVar4 = plVar7;
      plVar15 = param_6;
      plVar8 = plVar16 + 2;
    } while (plVar7 != param_2);
    do {
      if (param_2 == param_3) goto LAB_10acba518;
      if (*(float *)(*plVar15 + 0x18) <= *(float *)(*param_2 + 0x18)) {
        func_0x00010acb57a0(param_1,plVar15);
        plVar15 = plVar15 + 2;
      }
      else {
        func_0x00010acb57a0(param_1,param_2);
        param_2 = param_2 + 2;
      }
      param_1 = param_1 + 2;
    } while (plVar16 + 2 != plVar15);
  }
joined_r0x00010acba534:
  while (plVar17 != (long *)0x0) {
    func_0x00010aa006d4(param_6);
    param_6 = param_6 + 2;
    plVar14 = (long *)((long)plVar14 + -1);
    plVar17 = plVar14;
  }
  return;
LAB_10acba518:
  do {
    func_0x00010acb57a0(param_1,plVar15);
    param_1 = param_1 + 2;
    bVar2 = plVar16 != plVar15;
    plVar15 = plVar15 + 2;
  } while (bVar2);
  goto joined_r0x00010acba534;
LAB_10acba480:
  while (plVar4 != param_6) {
    plVar4 = plVar4 + -2;
    func_0x00010acb57a0(param_3,plVar4);
    param_3 = param_3 + -2;
  }
  goto joined_r0x00010acba534;
}



/* Entry: 10acba588; end: 10acba643;  */

void FUN_10acba588(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x1c);
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



/* Entry: 10acba644; end: 10acba73b;  */

void FUN_10acba644(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acba728);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x1c) = fVar2;
  FUN_10ac9a9d8(param_2);
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



/* Entry: 10acba73c; end: 10acba7a3;  */

void FUN_10acba73c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10acba73c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a07aef4(extraout_x8,plVar4,plVar6 + 4);
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



/* Entry: 10acba7a4; end: 10acba85b;  */

void FUN_10acba7a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07aef4(param_1,param_2,plVar4 + 4);
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



/* Entry: 10acba85c; end: 10acba927;  */

void FUN_10acba85c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  plVar4[4] = *param_2;
  FUN_10ac9a9d8(plVar4);
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



/* Entry: 10acba928; end: 10acba9df;  */

void FUN_10acba928(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07aef4(param_1,param_2,plVar4 + 5);
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



/* Entry: 10acba9e0; end: 10acbaaab;  */

void FUN_10acba9e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  plVar4[5] = *param_2;
  FUN_10ac9a9d8(plVar4);
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



/* Entry: 10acbaaac; end: 10acbab67;  */

void FUN_10acbaaac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x34);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10acbab68; end: 10acbac2f;  */

void FUN_10acbab68(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10acbac30(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x34) = (int)param_2;
  FUN_10ac9a9d8(plVar4);
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



/* Entry: 10acbac30; end: 10acbac53;  */

void FUN_10acbac30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acba73c(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[6];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)lVar6;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
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
  lVar6 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
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



/* Entry: 10acbac54; end: 10acbad0f;  */

void FUN_10acbac54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[6];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10acbad10; end: 10acbadd7;  */

void FUN_10acbad10(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10acbac30(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 6) = (int)param_2;
  FUN_10ac9a9d8(plVar4);
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



/* Entry: 10acbadd8; end: 10acbae93;  */

void FUN_10acbadd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[7];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10acbae94; end: 10acbaf5b;  */

void FUN_10acbae94(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10acbaf5c(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 7) = (int)param_2;
  FUN_10ac9a9d8(plVar4);
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



/* Entry: 10acbaf5c; end: 10acbaf7f;  */

void FUN_10acbaf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  float fVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acba73c(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)(plVar3 + 3);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
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
  lVar6 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
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



/* Entry: 10acbaf80; end: 10acbb03b;  */

void FUN_10acbaf80(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10acba73c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 3);
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



/* Entry: 10acbb03c; end: 10acbb14b;  */

void FUN_10acbb03c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  func_0x00010aaa2a0c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 == 3) {
    fVar2 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar2 = 0.0;
    }
    if (!NAN(fVar2)) {
      *(float *)(param_2 + 3) = fVar2;
      FUN_10ac9a9d8(param_2);
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
    FUN_10a00946c(&UNK_10f6a0b4d);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10acbb138);
  (*pcVar3)();
}



/* Entry: 10acbb14c; end: 10acbb637;  */

/* WARNING: Removing unreachable block (ram,0x00010acbb354) */
/* WARNING: Removing unreachable block (ram,0x00010acbb358) */
/* WARNING: Removing unreachable block (ram,0x00010acbb360) */
/* WARNING: Removing unreachable block (ram,0x00010acbb368) */
/* WARNING: Removing unreachable block (ram,0x00010acbb36c) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2b4) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2b8) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2c0) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2c8) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2cc) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2ec) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2f0) */
/* WARNING: Removing unreachable block (ram,0x00010acbb2f8) */
/* WARNING: Removing unreachable block (ram,0x00010acbb300) */
/* WARNING: Removing unreachable block (ram,0x00010acbb304) */

void FUN_10acbb14c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long ****pppplVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long ***ppplStack_b0;
  long *plStack_a8;
  long ***ppplStack_a0;
  long *plStack_98;
  long ***ppplStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  long ****pppplVar20;
  long *plVar21;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10acbb638(param_2,param_3);
  FUN_10acbb6a0(param_5);
  FUN_10a2e79e4(&ppplStack_b0,param_2,param_4);
  func_0x000109898570(&pppuStack_c8,param_2,param_4 + 0x10);
  plVar2 = plStack_a8;
  pppplVar20 = (long ****)ppplStack_b0;
  ppplStack_a0 = ppplStack_b0;
  plStack_98 = plStack_a8;
  ppplStack_b0 = (long ***)0x0;
  plStack_a8 = (long *)0x0;
  ppppuVar12 = &pppuStack_c8;
  FUN_10ac9b564(plVar10);
  if (pppplVar20 == (long ****)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a0bba,&UNK_10f6a0bfb,0x48,&UNK_10f6a0c75);
    }
    FUN_10acbc2ac();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acbb5b4);
    (*pcVar7)();
  }
  lVar17 = *(long *)plVar10[0x2c];
  ppplStack_70 = (long ***)pppplVar20;
  plStack_68 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar21 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = *plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pppplVar11 = pppplVar20;
  (*(code *)(*pppplVar20)[7])();
  if ((ppppuVar12 == (undefined8 ****)0x13) &&
     ((*pppplVar11 == (long ***)0x75522e7465737341 && pppplVar11[1] == (long ***)0x6e7542656d69746e)
      && *(long *)((long)pppplVar11 + 0xb) == 0x656c646e7542656d)) {
    if (plVar2 == (long *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      plVar21 = plVar2 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = *plVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = *plVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar17 = *plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *plVar21 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar21 = plVar2;
      if (lVar17 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  else {
    FUN_10a76dec8(&ppplStack_90,*(undefined8 *)(*(long *)(lVar17 + 0x888) + 0x40),pppplVar20);
    plVar21 = plStack_88;
    pppplVar20 = (long ****)ppplStack_90;
    plStack_88 = (long *)0x0;
    ppplStack_90 = (long ***)0x0;
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar17 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (pppplVar20 != (long ****)0x0) {
    FUN_10a349b54(&ppplStack_90);
    ppppuVar12 = (undefined8 ****)pppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uStack_c0 = (ulong)bStack_b1;
      ppppuVar12 = &pppuStack_c8;
    }
    FUN_10a53e510(plVar10,ppppuVar12,uStack_c0,&ppplStack_90);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      ppppuVar12 = (undefined8 ****)pppuStack_c8;
      if (-1 < (char)bStack_b1) {
        ppppuVar12 = &pppuStack_c8;
      }
      pppplVar20 = (long ****)ppplStack_90;
      if (-1 < (long)uStack_80) {
        pppplVar20 = &ppplStack_90;
      }
      func_0x00010ae06f08(1,8,&UNK_10f6a0bba,&UNK_10f6a0bfb,0x51,&UNK_10f6a0ca5,param_8,param_9,
                          ppppuVar12,pppplVar20);
    }
    if (uStack_80._7_1_ < '\0') {
      __ZdlPv(ppplStack_90);
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar10 = plVar21 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar10 = plVar2 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppuStack_c8);
  }
  plVar2 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar10 = plStack_a8 + 1;
    do {
      lVar17 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *param_1 = 0;
  plVar2 = plVar9 + 0x4b;
  lVar17 = plVar9[0x59];
  uVar13 = lVar17 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar2[lVar17 + 2];
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  plVar10 = (long *)*plVar2;
  plVar21 = (long *)plVar9[0x4c];
  lVar17 = (long)plVar21 - (long)plVar10;
  uVar18 = lVar17 >> 4;
  if (uVar18 < uVar13) {
    uVar19 = uVar13 - uVar18;
    lVar16 = plVar9[0x4d];
    if ((ulong)(lVar16 - (long)plVar21 >> 4) < uVar19) {
      if (uVar13 >> 0x3c == 0) {
        uVar14 = lVar16 - (long)plVar10 >> 3;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar10)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar14 >> 0x3c == 0) {
          lVar8 = uVar14 << 4;
          __Znwm();
          lVar3 = lVar8 + lVar17;
          _bzero(lVar3,uVar19 * 0x10);
          lVar15 = lVar3 + uVar18 * -0x10;
          _memcpy(lVar15,plVar10,lVar17);
          *plVar2 = lVar15;
          plVar9[0x4c] = lVar3 + uVar19 * 0x10;
          plVar9[0x4d] = lVar8 + uVar14 * 0x10;
          plStack_88 = plVar10;
          uStack_80 = plVar10;
          plStack_78 = plVar10;
          ppplStack_70 = (long ***)lVar16;
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
    _bzero(plVar21,uVar19 * 0x10);
    plVar9[0x4c] = (long)(plVar21 + uVar19 * 2);
  }
  else if (uVar13 < uVar18) {
    while (plVar21 != plVar10 + uVar13 * 2) {
      plVar21 = plVar21 + -2;
      func_0x00010988c204(plVar21);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar13 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar13;
  return;
}



/* Entry: 10acbb638; end: 10acbb69f;  */

void FUN_10acbb638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 in_stack_ffffffffffffff78;
  long in_stack_ffffffffffffff88;
  
  lVar9 = param_1;
  func_0x000109898688();
  if (lVar9 != 0) {
    FUN_10a053854(param_1,lVar9);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar8 = 0;
  FUN_10a052ee0(2,0,puVar3);
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
  func_0x000109898688(plVar4,uVar8);
  if (plVar6 == (long *)0x0) {
    puVar3 = &UNK_10f68f52e;
  }
  else {
    plVar7 = plVar4;
    FUN_10a052c2c(plVar4,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a0584c8(param_4);
      func_0x000109898570(&stack0xffffffffffffff78,plVar4,puVar3);
      FUN_10ac9b8e0(plVar7,&stack0xffffffffffffff78);
      if (in_stack_ffffffffffffff88 < 0) {
        __ZdlPv(in_stack_ffffffffffffff78);
      }
      *extraout_x8 = 2;
      *(char *)(extraout_x8 + 2) = (char)plVar7;
      plVar4 = plVar5 + 0x4b;
      lVar9 = plVar5[0x59];
      uVar10 = lVar9 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar4[lVar9 + 2];
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      lVar9 = *plVar4;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar9;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar10) {
        uVar17 = uVar10 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar15 - lVar9 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_98 = plVar4;
            if (uVar11 >> 0x3c == 0) {
              lVar2 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar2 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar9,lVar12);
              *plVar4 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar2 + uVar11 * 0x10;
              lStack_b8 = lVar9;
              lStack_b0 = lVar9;
              lStack_a8 = lVar9;
              lStack_a0 = lVar15;
              func_0x00010988c1b8(&lStack_b8);
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar10 < uVar16) {
        lVar9 = lVar9 + uVar10 * 0x10;
        while (lVar14 != lVar9) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
    puVar3 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbb7ec);
  (*pcVar1)();
}



/* Entry: 10acbb6a0; end: 10acbb6c3;  */

void FUN_10acbb6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar8 = 0;
  FUN_10a052ee0(2,0,param_1);
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
  func_0x000109898688(plVar3,uVar8);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = plVar3;
    FUN_10a052c2c(plVar3,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a0584c8(param_4);
      func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
      FUN_10ac9b8e0(plVar6,&stack0xffffffffffffff98);
      if (in_stack_ffffffffffffffa8 < 0) {
        __ZdlPv(in_stack_ffffffffffffff98);
      }
      *extraout_x8 = 2;
      *(char *)(extraout_x8 + 2) = (char)plVar6;
      plVar3 = plVar4 + 0x4b;
      lVar9 = plVar4[0x59];
      uVar10 = lVar9 - 1;
      plVar4[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar3[lVar9 + 2];
        if (plVar4[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar10) {
          return;
        }
      }
      lVar9 = *plVar3;
      lVar14 = plVar4[0x4c];
      lVar12 = lVar14 - lVar9;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar10) {
        uVar17 = uVar10 - uVar16;
        lVar15 = plVar4[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar15 - lVar9 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_78 = plVar3;
            if (uVar11 >> 0x3c == 0) {
              lVar2 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar2 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar9,lVar12);
              *plVar3 = lVar13;
              plVar4[0x4c] = lVar14 + uVar17 * 0x10;
              plVar4[0x4d] = lVar2 + uVar11 * 0x10;
              lStack_98 = lVar9;
              lStack_90 = lVar9;
              lStack_88 = lVar9;
              lStack_80 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar4[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar10 < uVar16) {
        lVar9 = lVar9 + uVar10 * 0x10;
        while (lVar14 != lVar9) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar4[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar10;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbb7ec);
  (*pcVar1)();
}



/* Entry: 10acbb6c4; end: 10acbb817;  */

void FUN_10acbb6c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a0584c8(param_5);
      func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
      FUN_10ac9b8e0(plVar5,&stack0xffffffffffffffa8);
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      *param_1 = 2;
      *(char *)(param_1 + 2) = (char)plVar5;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acbb7ec);
  (*pcVar1)();
}



/* Entry: 10acbb818; end: 10acbc043;  */

/* WARNING: Removing unreachable block (ram,0x00010acbba04) */
/* WARNING: Removing unreachable block (ram,0x00010acbba08) */
/* WARNING: Removing unreachable block (ram,0x00010acbba10) */
/* WARNING: Removing unreachable block (ram,0x00010acbba18) */
/* WARNING: Removing unreachable block (ram,0x00010acbba1c) */

void FUN_10acbb818(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 ******ppppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 *****pppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long lStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  char cStack_109;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10acbb638(param_2,param_3);
  FUN_10acbc044(param_5);
  func_0x000109898570(&pppppuStack_138,param_2,param_4);
  FUN_10a05da10(&lStack_148,param_2,param_4 + 0x10);
  FUN_10a2949d4(&lStack_158,param_2,param_4 + 0x20);
  ppppppuVar5 = (undefined8 ******)pppppuStack_138;
  if (-1 < (char)bStack_121) {
    uStack_130 = (ulong)bStack_121;
    ppppppuVar5 = &pppppuStack_138;
  }
  plVar20 = plVar9;
  FUN_10a53e714(plVar9,ppppppuVar5,uStack_130);
  bVar2 = *(byte *)((long)plVar20 + 0x17);
  uVar14 = plVar20[1];
  if (-1 < (char)bVar2) {
    uVar14 = (ulong)bVar2;
  }
  if ((uVar14 == 0) && (lStack_158 != 0)) {
    plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,400);
    func_0x000107c2b054(&lStack_100,&UNK_10f6a0e03);
    FUN_10a25f92c(lStack_158,&plStack_b0,&lStack_100);
    lVar12 = lStack_100;
    lVar18 = lStack_f0;
  }
  else {
    if ((char)bVar2 < '\0') {
      func_0x000107c3192c(&lStack_d0,*plVar20);
    }
    else {
      plStack_c8 = (long *)plVar20[1];
      lStack_d0 = *plVar20;
      uStack_c0 = plVar20[2];
    }
    plVar10 = &lStack_d0;
    FUN_10ad015f0(plVar10,0x8000);
    if ((int)plVar10 != 0) {
      uVar14 = plVar20[1];
      plVar10 = (long *)*plVar20;
      if (-1 < (char)*(byte *)((long)plVar20 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)plVar20 + 0x17);
        plVar10 = plVar20;
      }
      FUN_10a151324(&lStack_100,plVar10,uVar14);
      if (uStack_c0 < 0) {
        __ZdlPv(lStack_d0);
      }
      plStack_c8 = plStack_f8;
      lStack_d0 = lStack_100;
      uStack_c0 = lStack_f0;
    }
    plStack_e0 = (long *)0x0;
    plStack_e8 = (long *)0x0;
    lStack_f0 = 0;
    if (plStack_140 == (long *)0x0) {
      plStack_f8 = (long *)0x0;
    }
    else {
      plVar20 = plStack_140 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = *plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_f8 = plStack_140;
    }
    lStack_100 = lStack_148;
    FUN_10a9c5750(&lStack_f0,&lStack_158);
    puVar16 = *(undefined8 **)(plVar9[0x2c] + 8);
    if (uStack_c0 < 0) {
      func_0x000107c3192c(&lStack_120,lStack_d0,plStack_c8);
    }
    else {
      uStack_118 = SUB87(plStack_c8,0);
      uStack_111 = (undefined1)((ulong)plStack_c8 >> 0x38);
      lStack_120 = lStack_d0;
      uStack_110 = (undefined7)uStack_c0;
      cStack_109 = uStack_c0._7_1_;
    }
    cVar3 = cStack_109;
    lVar12 = lStack_120;
    plVar20 = (long *)puVar16[2];
    plStack_a8 = (long *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    if (plVar20 == (long *)0x0) {
      uStack_90 = uStack_118;
      uStack_89 = uStack_111;
      uStack_88 = uStack_110;
      uStack_118 = 0;
      uStack_111 = 0;
      uStack_110 = 0;
      cStack_109 = '\0';
      lStack_120 = 0;
      puVar11 = (undefined8 *)0x100;
      __Znwm();
      puVar11[2] = 0;
      puVar11[1] = 0x200000006;
      *(undefined2 *)(puVar11 + 3) = 4;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = puVar11 + 3;
      puVar11[0x12] = 0;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      *(undefined1 *)(puVar11 + 0x19) = 0;
      *puVar11 = &PTR_DAT_110c6b408;
      plStack_b0 = puVar11 + 0x1a;
      *plStack_b0 = lVar12;
      *(ulong *)((long)puVar11 + 0xdf) = CONCAT71(uStack_88,uStack_89);
      puVar11[0x1b] = CONCAT17(uStack_89,uStack_90);
      *(char *)((long)puVar11 + 0xe7) = cVar3;
      *(undefined1 *)(puVar11 + 0x1e) = 1;
      puVar11[0x1f] = 0;
      pcStack_98 = FUN_10acb5b7c;
      plStack_a8 = puVar11;
      puStack_a0 = puVar11;
    }
    else {
      lStack_b8 = 0;
      (**(code **)(*plVar20 + 0x28))(plVar20,0,&lStack_b8);
      cVar3 = cStack_109;
      lVar12 = lStack_120;
      if (lStack_b8 != 0) goto LAB_10acbbf6c;
      uStack_90 = uStack_118;
      uStack_89 = uStack_111;
      uStack_88 = uStack_110;
      uStack_118 = 0;
      uStack_111 = 0;
      uStack_110 = 0;
      cStack_109 = '\0';
      lStack_120 = 0;
      puVar11 = (undefined8 *)0x108;
      __Znwm();
      puVar11[2] = 0;
      puVar11[1] = 0x200000006;
      *(undefined2 *)(puVar11 + 3) = 4;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = puVar11 + 3;
      puVar11[0x12] = 0;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      *(undefined1 *)(puVar11 + 0x19) = 0;
      *puVar11 = &PTR_FUN_110c6b398;
      puVar11[0x1a] = lVar12;
      *(ulong *)((long)puVar11 + 0xdf) = CONCAT71(uStack_88,uStack_89);
      puVar11[0x1b] = CONCAT17(uStack_89,uStack_90);
      *(char *)((long)puVar11 + 0xe7) = cVar3;
      *(undefined1 *)(puVar11 + 0x1e) = 1;
      puVar11[0x1f] = 0;
      puVar11[0x20] = plVar20;
      if (plStack_a8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_a8 + 1);
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_a8 + 8))();
          }
        }
      }
      plStack_a8 = puVar11;
      if (puStack_a0 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_a0);
      }
      pcStack_98 = (code *)0x10acb5b4c;
      plStack_b0 = puVar11 + 0x1a;
      puStack_a0 = puVar11;
      __ZNSt13exception_ptrD1Ev(&lStack_b8);
    }
    plVar20 = plStack_b0;
    if (plStack_b0[5] != 0) {
      func_0x0001092b4274();
    }
    plVar20[5] = (long)puStack_a0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_90 = SUB87(pcStack_98,0);
    uStack_89 = (undefined1)((ulong)pcStack_98 >> 0x38);
    uStack_88 = SUB87(plStack_b0,0);
    uStack_81 = (undefined1)((ulong)plStack_b0 >> 0x38);
    puStack_80 = puVar16;
    (**(code **)*puVar16)(puVar16,&uStack_90);
    plVar20 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if ((puStack_a0 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_a0), plStack_a8 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_a8 + 1);
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_a8 + 8))();
        }
      }
    }
    if (plStack_e0 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_e0 + 1);
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_e0 + 8))();
        }
      }
    }
    plStack_e0 = plVar20;
    if (cStack_109 < '\0') {
      __ZdlPv(lStack_120);
    }
    plVar20 = (long *)0x38;
    __Znwm();
    plVar20[2] = lStack_100;
    plVar20[3] = (long)plStack_f8;
    lStack_100 = 0;
    plStack_f8 = (long *)0x0;
    plVar20[5] = (long)plStack_e8;
    plVar20[4] = lStack_f0;
    lStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    plVar20[6] = (long)plStack_e0;
    plStack_e0 = (long *)0x0;
    plVar20[1] = (long)(plVar9 + 0x2e);
    lVar12 = plVar9[0x2e];
    *plVar20 = lVar12;
    *(long **)(lVar12 + 8) = plVar20;
    plVar9[0x2e] = (long)plVar20;
    plVar9[0x30] = plVar9[0x30] + 1;
    FUN_10a5ae998(plVar9[0x29],&PTR_DAT_110b9f988,*(undefined8 *)plVar9[0x2c],plVar9 + 0x28);
    if (plStack_e0 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_e0 + 1);
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_e0 + 8))();
        }
      }
    }
    plVar9 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar20 = plStack_e8 + 1;
      do {
        lVar12 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_f8;
    lVar12 = lStack_d0;
    lVar18 = uStack_c0;
    if (plStack_f8 != (long *)0x0) {
      plVar20 = plStack_f8 + 1;
      do {
        lVar15 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        lVar12 = lStack_d0;
        lVar18 = uStack_c0;
      }
    }
  }
  if (lVar18 < 0) {
    __ZdlPv(lVar12);
  }
  if (plStack_150 != (long *)0x0) {
    plVar9 = plStack_150 + 1;
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
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
    }
  }
  if (plStack_140 != (long *)0x0) {
    plVar9 = plStack_140 + 1;
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
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  if ((char)bStack_121 < '\0') {
    __ZdlPv(pppppuStack_138);
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
LAB_10acbbf6c:
    func_0x0001092af97c(&lStack_b8);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acbbf78);
    (*pcVar6)();
  }
  plVar9 = plVar8 + 0x4b;
  lVar12 = plVar8[0x59];
  uVar14 = lVar12 - 1;
  plVar8[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar9[lVar12 + 2];
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  lVar12 = *plVar9;
  lVar18 = plVar8[0x4c];
  lVar15 = lVar18 - lVar12;
  uVar21 = lVar15 >> 4;
  if (uVar21 < uVar14) {
    uVar22 = uVar14 - uVar21;
    lVar19 = plVar8[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar22) {
      if (uVar14 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar12 >> 3;
        if (uVar13 <= uVar14) {
          uVar13 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar12)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar13 >> 0x3c == 0) {
          lVar7 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar7 + lVar15;
          _bzero(lVar18,uVar22 * 0x10);
          lVar17 = lVar18 + uVar21 * -0x10;
          _memcpy(lVar17,lVar12,lVar15);
          *plVar9 = lVar17;
          plVar8[0x4c] = lVar18 + uVar22 * 0x10;
          plVar8[0x4d] = lVar7 + uVar13 * 0x10;
          uStack_88 = (undefined7)lVar12;
          uStack_81 = (undefined1)((ulong)lVar12 >> 0x38);
          puStack_80 = (undefined8 *)lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar19;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(lVar18,uVar22 * 0x10);
    plVar8[0x4c] = lVar18 + uVar22 * 0x10;
  }
  else if (uVar14 < uVar21) {
    lVar12 = lVar12 + uVar14 * 0x10;
    while (lVar18 != lVar12) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar8[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar14;
  return;
}


