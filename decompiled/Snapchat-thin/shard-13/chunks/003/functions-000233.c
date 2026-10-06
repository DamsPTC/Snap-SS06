/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a46ae58; end: 10a46aeaf;  */

undefined1  [16] FUN_10a46ae58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b883f;
  return auVar1;
}



/* Entry: 10a46aeb0; end: 10a46afa3;  */

void FUN_10a46aeb0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    lVar4 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = *(undefined8 **)(param_2 + 0x48);
    puStack_40 = *(undefined8 **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar3 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar2 = &puStack_40;
    if (param_4 != 0) {
      puVar3 = (undefined8 *)(param_4 + 0x28);
      ppuVar2 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar3;
    lVar4 = (long)*ppuVar2;
  }
  puVar3 = (undefined8 *)0x78;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110bddd68;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[0xc] = param_3;
  puVar3[0xd] = 0;
  *(undefined4 *)(puVar3 + 0xe) = 0;
  puStack_40 = puVar3 + 3;
  *puStack_40 = &PTR_FUN_110bda468;
  puVar3[5] = &PTR_FUN_110bda4f0;
  puVar3[10] = &PTR_DAT_110bda548;
  puVar3[0xb] = lVar4;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puStack_38 = puVar3;
  FUN_10a49448c(&puStack_40);
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  puStack_40[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(puStack_40 + 0xb) = uVar1;
  *param_1 = puStack_40;
  param_1[1] = puStack_38;
  return;
}



/* Entry: 10a46afa4; end: 10a46b0cf;  */

void FUN_10a46afa4(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)*param_3;
  plVar2 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[4];
    if (plStack_50 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_50 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_50;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_110b9fbb0;
    lVar3 = *(long *)(param_1 + 0x50);
    *(undefined4 *)(plStack_50 + 2) = *(undefined4 *)(param_1 + 0x58);
    plStack_50[1] = lVar3;
    plStack_48 = plVar2;
    FUN_10a065450(aiStack_60,plVar4,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46b0a0);
  (*pcVar1)();
}



/* Entry: 10a46b0d0; end: 10a46b0e7;  */

void FUN_10a46b0d0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a0881b8(aiStack_30,*param_1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46b0e8; end: 10a46b15f;  */

void FUN_10a46b0e8(undefined8 param_1,undefined8 param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbd50,0);
  return;
}



/* Entry: 10a46b160; end: 10a46b167;  */

undefined8 * FUN_10a46b160(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46b168; end: 10a46b17f;  */

void FUN_10a46b168(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b180; end: 10a46b19f;  */

bool FUN_10a46b180(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x65562e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156336365)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46b1a0; end: 10a46b1b7;  */

void FUN_10a46b1a0(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b1b8; end: 10a46b1bb;  */

long FUN_10a46b1b8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46b1bc; end: 10a46b1cf;  */

void FUN_10a46b1bc(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b1d0; end: 10a46b227;  */

undefined1  [16] FUN_10a46b1d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b884f;
  return auVar1;
}



/* Entry: 10a46b228; end: 10a46b367;  */

void FUN_10a46b228(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    plVar4 = (long *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      plVar4 = (long *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *plVar4;
    lVar6 = *plVar5;
  }
  plVar4 = (long *)0x78;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bdddb8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bda568;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  plVar4[5] = (long)&PTR_FUN_110bda5f0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[10] = (long)&PTR_DAT_110bda648;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  lVar6 = *(long *)(param_2 + 0x50);
  plVar4[0xe] = *(long *)(param_2 + 0x58);
  plVar4[0xd] = lVar6;
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a46b368; end: 10a46b48b;  */

void FUN_10a46b368(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[4];
    if (plStack_50 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_50 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_50;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_110bb3c30;
    lVar4 = *(long *)(param_1 + 0x50);
    plStack_50[2] = *(long *)(param_1 + 0x58);
    plStack_50[1] = lVar4;
    plStack_48 = plVar2;
    FUN_10a1fb904(aiStack_60,plVar3,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46b45c);
  (*pcVar1)();
}



/* Entry: 10a46b48c; end: 10a46b4a3;  */

void FUN_10a46b48c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a1fbd9c(aiStack_30,*param_1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46b4a4; end: 10a46b52b;  */

void FUN_10a46b4a4(undefined8 param_1,undefined8 param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbd80,0);
  return;
}



/* Entry: 10a46b52c; end: 10a46b533;  */

undefined8 * FUN_10a46b52c(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46b534; end: 10a46b54b;  */

void FUN_10a46b534(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b54c; end: 10a46b56b;  */

bool FUN_10a46b54c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x65562e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156346365)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46b56c; end: 10a46b583;  */

void FUN_10a46b56c(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b584; end: 10a46b587;  */

long FUN_10a46b584(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46b588; end: 10a46b59b;  */

void FUN_10a46b588(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b59c; end: 10a46b5f3;  */

undefined1  [16] FUN_10a46b59c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b8881;
  return auVar1;
}



/* Entry: 10a46b5f4; end: 10a46b703;  */

void FUN_10a46b5f4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = *(undefined8 **)(param_2 + 0x48);
    puStack_40 = *(undefined8 **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar2 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar1 = &puStack_40;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      ppuVar1 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar3 = (long)*ppuVar1;
  }
  puVar2 = (undefined8 *)0xa8;
  __Znwm();
  puVar2[0xe] = 0;
  puVar2[0xd] = 0x3f800000;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0x3f80000000000000;
  puVar2[0x12] = 0x3f800000;
  puVar2[0x11] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bdde08;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[0x14] = 0x3f80000000000000;
  puVar2[0x13] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xb] = lVar3;
  puVar2[0xc] = param_3;
  puStack_40 = puVar2 + 3;
  *puStack_40 = &PTR_FUN_110bda668;
  puVar2[5] = &PTR_FUN_110bda6f0;
  puVar2[10] = &PTR_DAT_110bda748;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puStack_38 = puVar2;
  FUN_10a4945bc(&puStack_40);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  puStack_40[0xb] = *(undefined8 *)(param_2 + 0x58);
  puStack_40[10] = uVar10;
  puStack_40[0xd] = uVar9;
  puStack_40[0xc] = uVar8;
  puStack_40[0xf] = uVar5;
  puStack_40[0xe] = uVar4;
  puStack_40[0x11] = uVar7;
  puStack_40[0x10] = uVar6;
  *param_1 = puStack_40;
  param_1[1] = puStack_38;
  return;
}



/* Entry: 10a46b704; end: 10a46b847;  */

void FUN_10a46b704(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[9];
    if (plStack_50 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plStack_50 = (long *)plVar2[9];
    }
    plVar2[9] = *plStack_50;
    plStack_50[8] = 0;
    plStack_50[7] = 0;
    plStack_50[6] = 0;
    plStack_50[5] = 0;
    plStack_50[4] = 0;
    plStack_50[3] = 0;
    plStack_50[2] = 0;
    plStack_50[1] = 0;
    *plStack_50 = (long)&PTR_FUN_110ba79f8;
    lVar5 = *(long *)(param_1 + 0x58);
    lVar4 = *(long *)(param_1 + 0x50);
    lVar7 = *(long *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x60);
    lVar9 = *(long *)(param_1 + 0x78);
    lVar8 = *(long *)(param_1 + 0x70);
    lVar10 = *(long *)(param_1 + 0x80);
    plStack_50[8] = *(long *)(param_1 + 0x88);
    plStack_50[7] = lVar10;
    plStack_50[6] = lVar9;
    plStack_50[5] = lVar8;
    plStack_50[4] = lVar7;
    plStack_50[3] = lVar6;
    plStack_50[2] = lVar5;
    plStack_50[1] = lVar4;
    plStack_48 = plVar2;
    FUN_10a1406a0(aiStack_60,plVar3,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46b818);
  (*pcVar1)();
}



/* Entry: 10a46b848; end: 10a46b85f;  */

void FUN_10a46b848(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a368650(aiStack_30,*param_1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46b860; end: 10a46b9a7;  */

void FUN_10a46b860(undefined8 param_1,undefined8 param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbdb0,0);
  return;
}



/* Entry: 10a46b9a8; end: 10a46b9af;  */

undefined8 * FUN_10a46b9a8(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46b9b0; end: 10a46b9c7;  */

void FUN_10a46b9b0(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46b9c8; end: 10a46b9e7;  */

bool FUN_10a46b9c8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x614d2e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156347461)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46b9e8; end: 10a46b9ff;  */

void FUN_10a46b9e8(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46ba00; end: 10a46ba03;  */

long FUN_10a46ba00(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46ba04; end: 10a46ba17;  */

void FUN_10a46ba04(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46ba18; end: 10a46ba6f;  */

undefined1  [16] FUN_10a46ba18(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b885f;
  return auVar1;
}



/* Entry: 10a46ba70; end: 10a46bbb3;  */

void FUN_10a46ba70(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    plVar4 = (long *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      plVar4 = (long *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *plVar4;
    lVar6 = *plVar5;
  }
  plVar4 = (long *)0x78;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bdde58;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bda768;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  plVar4[5] = (long)&PTR_FUN_110bda7f0;
  plVar4[0xe] = 0x3f80000000000000;
  plVar4[0xd] = 0;
  plVar4[10] = (long)&PTR_DAT_110bda848;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  lVar6 = *(long *)(param_2 + 0x50);
  plVar4[0xe] = *(long *)(param_2 + 0x58);
  plVar4[0xd] = lVar6;
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a46bbb4; end: 10a46bcd7;  */

void FUN_10a46bbb4(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[4];
    if (plStack_50 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_50 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_50;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_110b9fbe8;
    lVar4 = *(long *)(param_1 + 0x50);
    plStack_50[2] = *(long *)(param_1 + 0x58);
    plStack_50[1] = lVar4;
    plStack_48 = plVar2;
    FUN_10a07a40c(aiStack_60,plVar3,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46bca8);
  (*pcVar1)();
}



/* Entry: 10a46bcd8; end: 10a46bdcb;  */

void FUN_10a46bcd8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a07a354(aiStack_30,uVar1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46bdcc; end: 10a46bdd3;  */

undefined8 * FUN_10a46bdcc(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46bdd4; end: 10a46bdeb;  */

void FUN_10a46bdd4(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46bdec; end: 10a46be0b;  */

bool FUN_10a46bdec(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x75512e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156746175)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46be0c; end: 10a46be23;  */

void FUN_10a46be0c(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46be24; end: 10a46bebf;  */

undefined8 * FUN_10a46be24(undefined8 *param_1)

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



/* Entry: 10a46bec0; end: 10a46bf1f;  */

undefined1  [16] FUN_10a46bec0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10e4b886f;
  return auVar1;
}



/* Entry: 10a46bf20; end: 10a46c027;  */

void FUN_10a46bf20(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = *(undefined8 **)(param_2 + 0x48);
    puStack_40 = *(undefined8 **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar2 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar1 = &puStack_40;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      ppuVar1 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar3 = (long)*ppuVar1;
  }
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bcfa70;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xc] = param_3;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puStack_40 = puVar2 + 3;
  *puStack_40 = &PTR_FUN_110bda868;
  puVar2[5] = &PTR_DAT_110bda8f0;
  puVar2[10] = &PTR_FUN_110bda948;
  puVar2[0xb] = lVar3;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puStack_38 = puVar2;
  FUN_10a3b97c0(&puStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_40 + 10,param_2 + 0x50);
  param_1[1] = puStack_38;
  *param_1 = puStack_40;
  return;
}



/* Entry: 10a46c028; end: 10a46c0eb;  */

void FUN_10a46c028(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  plVar2 = (long *)*(long *)(param_1 + 0x50);
  if (-1 < (char)*(byte *)(param_1 + 0x67)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x67);
    plVar2 = (long *)(param_1 + 0x50);
  }
  (**(code **)(*(long *)*param_3 + 0x128))(&puStack_28,(long *)*param_3,plVar2,uVar1);
  aiStack_30[0] = 6;
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46c0ec; end: 10a46c14b;  */

void FUN_10a46c0ec(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a4946ac(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a46c14c; end: 10a46c287;  */

void FUN_10a46c14c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbe10,0);
  if (param_2 != 0) {
    bVar5 = *(byte *)(param_1 + 0x67);
    uVar1 = *(ulong *)(param_1 + 0x58);
    if (-1 < (char)bVar5) {
      uVar1 = (ulong)bVar5;
    }
    bVar6 = *(byte *)(param_2 + 0x67);
    uVar2 = *(ulong *)(param_2 + 0x58);
    if (-1 < (char)bVar6) {
      uVar2 = (ulong)bVar6;
    }
    if (uVar1 == uVar2) {
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      if (-1 < (char)bVar5) {
        puVar3 = (undefined8 *)(param_1 + 0x50);
      }
      plVar4 = (long *)*(long *)(param_2 + 0x50);
      if (-1 < (char)bVar6) {
        plVar4 = (long *)(param_2 + 0x50);
      }
      _memcmp(puVar3,plVar4);
    }
  }
  return;
}



/* Entry: 10a46c288; end: 10a46c29f;  */

bool FUN_10a46c288(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x11) &&
     ((*param_2 == 0x74532e65756c6156 && param_2[1] == 0x756c6156676e6972) &&
      (char)param_2[2] == 'e')) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46c2a0; end: 10a46c33b;  */

undefined8 * FUN_10a46c2a0(undefined8 *param_1)

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



/* Entry: 10a46c33c; end: 10a46c33f;  */

long FUN_10a46c33c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46c340; end: 10a46c353;  */

void FUN_10a46c340(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46c354; end: 10a46c3ab;  */

undefined1  [16] FUN_10a46c354(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b8891;
  return auVar1;
}



/* Entry: 10a46c3ac; end: 10a46c4ef;  */

void FUN_10a46c3ac(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    plVar4 = (long *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      plVar4 = (long *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *plVar4;
    lVar6 = *plVar5;
  }
  plVar4 = (long *)0x78;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bddea8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bda968;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  plVar4[5] = (long)&PTR_FUN_110bda9f0;
  plVar4[0xe] = 0x3f80000000000000;
  plVar4[0xd] = 0x3f800000;
  plVar4[10] = (long)&PTR_DAT_110bdaa48;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  lVar6 = *(long *)(param_2 + 0x50);
  plVar4[0xe] = *(long *)(param_2 + 0x58);
  plVar4[0xd] = lVar6;
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a46c4f0; end: 10a46c613;  */

void FUN_10a46c4f0(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[4];
    if (plStack_50 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_50 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_50;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_110bc7bb8;
    lVar4 = *(long *)(param_1 + 0x50);
    plStack_50[2] = *(long *)(param_1 + 0x58);
    plStack_50[1] = lVar4;
    plStack_48 = plVar2;
    FUN_10a3683b4(aiStack_60,plVar3,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46c5e4);
  (*pcVar1)();
}



/* Entry: 10a46c614; end: 10a46c62b;  */

void FUN_10a46c614(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a3682fc(aiStack_30,*param_1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46c62c; end: 10a46c69f;  */

bool FUN_10a46c62c(long param_1,long param_2)

{
  bool bVar1;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbe40,0);
  if (param_2 != 0) {
    bVar1 = false;
    if ((*(float *)(param_1 + 0x50) == *(float *)(param_2 + 0x50)) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x54)) && !NAN(*(float *)(param_2 + 0x54)))) {
      bVar1 = *(float *)(param_1 + 0x54) == *(float *)(param_2 + 0x54);
    }
    if (bVar1) {
      if (*(float *)(param_1 + 0x5c) != *(float *)(param_2 + 0x5c)) {
        return false;
      }
      if (NAN(*(float *)(param_1 + 0x58)) || NAN(*(float *)(param_2 + 0x58))) {
        return false;
      }
      return *(float *)(param_1 + 0x58) == *(float *)(param_2 + 0x58);
    }
  }
  return false;
}



/* Entry: 10a46c6a0; end: 10a46c6a7;  */

undefined8 * FUN_10a46c6a0(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46c6a8; end: 10a46c6bf;  */

void FUN_10a46c6a8(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46c6c0; end: 10a46c6df;  */

bool FUN_10a46c6c0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x614d2e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156327461)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46c6e0; end: 10a46c6f7;  */

void FUN_10a46c6e0(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46c6f8; end: 10a46c6fb;  */

long FUN_10a46c6f8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46c6fc; end: 10a46c70f;  */

void FUN_10a46c6fc(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46c710; end: 10a46c767;  */

undefined1  [16] FUN_10a46c710(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b88a1;
  return auVar1;
}



/* Entry: 10a46c768; end: 10a46c8c3;  */

void FUN_10a46c768(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    plVar4 = (long *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      plVar4 = (long *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *plVar4;
    lVar6 = *plVar5;
  }
  plVar4 = (long *)0x90;
  __Znwm();
  plVar4[0xe] = 0;
  plVar4[0xd] = 0x3f800000;
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110bddef8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bdaa68;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined4 *)(plVar4 + 0x11) = 0x3f800000;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0x3f800000;
  plVar4[5] = (long)&PTR_FUN_110bdaaf0;
  plVar4[10] = (long)&PTR_DAT_110bdab48;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  lVar6 = *(long *)(param_2 + 0x50);
  lVar9 = *(long *)(param_2 + 0x68);
  lVar8 = *(long *)(param_2 + 0x60);
  plVar4[0xe] = *(long *)(param_2 + 0x58);
  plVar4[0xd] = lVar6;
  plVar4[0x10] = lVar9;
  plVar4[0xf] = lVar8;
  *(undefined4 *)(plVar4 + 0x11) = *(undefined4 *)(param_2 + 0x70);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a46c8c4; end: 10a46ca03;  */

void FUN_10a46c8c4(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[9];
    if (plStack_50 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plStack_50 = (long *)plVar2[9];
    }
    plVar2[9] = *plStack_50;
    plStack_50[8] = 0;
    plStack_50[7] = 0;
    plStack_50[6] = 0;
    plStack_50[5] = 0;
    plStack_50[4] = 0;
    plStack_50[3] = 0;
    plStack_50[2] = 0;
    plStack_50[1] = 0;
    *plStack_50 = (long)&PTR_FUN_110bb3c68;
    lVar5 = *(long *)(param_1 + 0x58);
    lVar4 = *(long *)(param_1 + 0x50);
    lVar7 = *(long *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x60);
    *(undefined4 *)(plStack_50 + 5) = *(undefined4 *)(param_1 + 0x70);
    plStack_50[4] = lVar7;
    plStack_50[3] = lVar6;
    plStack_50[2] = lVar5;
    plStack_50[1] = lVar4;
    plStack_48 = plVar2;
    FUN_10a1f8534(aiStack_60,plVar3,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46c9d4);
  (*pcVar1)();
}



/* Entry: 10a46ca04; end: 10a46ca1b;  */

void FUN_10a46ca04(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a368520(aiStack_30,*param_1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46ca1c; end: 10a46caf3;  */

void FUN_10a46ca1c(undefined8 param_1,undefined8 param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbe70,0);
  return;
}



/* Entry: 10a46caf4; end: 10a46cafb;  */

undefined8 * FUN_10a46caf4(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46cafc; end: 10a46cb13;  */

void FUN_10a46cafc(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46cb14; end: 10a46cb33;  */

bool FUN_10a46cb14(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x614d2e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156337461)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46cb34; end: 10a46cb4b;  */

void FUN_10a46cb34(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46cb4c; end: 10a46cc2f;  */

undefined8 * FUN_10a46cb4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdab68;
  param_1[2] = &PTR_DAT_110bdabf0;
  param_1[7] = &PTR_FUN_110bdac48;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  *param_1 = &PTR_DAT_110bdc588;
  param_1[2] = &PTR_FUN_110bdc610;
  param_1[7] = &PTR_FUN_110bdc668;
  FUN_10a4740f0(param_1 + 10);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a46cc30; end: 10a46cc9b;  */

undefined1  [16] FUN_10a46cc30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10e4b88c1;
  return auVar1;
}



/* Entry: 10a46cc9c; end: 10a46cd33;  */

void FUN_10a46cc9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a4947f0(aiStack_30,*param_3,param_1 + 0x50);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46cd34; end: 10a46cee3;  */

void FUN_10a46cd34(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a4947f0(aiStack_30,uVar1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46cee4; end: 10a46cefb;  */

bool FUN_10a46cee4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x15) &&
     ((*param_2 == 0x75432e65756c6156 && param_2[1] == 0x657079546d6f7473) &&
      *(long *)((long)param_2 + 0xd) == 0x65756c6156657079)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46cefc; end: 10a46d067;  */

undefined8 * FUN_10a46cefc(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110bdab68;
  param_1[-5] = &PTR_DAT_110bdabf0;
  *param_1 = &PTR_FUN_110bdac48;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
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



/* Entry: 10a46d068; end: 10a46d0d3;  */

undefined1  [16] FUN_10a46d068(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10e4b88d7;
  return auVar1;
}



/* Entry: 10a46d0d4; end: 10a46d1df;  */

bool FUN_10a46d0d4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bde3f8,0);
  bVar4 = false;
  if (param_2 != 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 == (long *)0x0) {
      lVar7 = 0;
      plVar5 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar5 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x50);
      }
    }
    plVar6 = *(long **)(param_2 + 0x58);
    if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0)
       ) {
      bVar4 = lVar7 == 0;
    }
    else {
      bVar4 = lVar7 == *(long *)(param_2 + 0x50);
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a46d1e0; end: 10a46d2e3;  */

undefined8 * FUN_10a46d1e0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110bdb0e8;
  *param_1 = &PTR_FUN_110bdb170;
  param_1[5] = &PTR_FUN_110bdb1c8;
  func_0x00010a052384(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  param_1[-2] = &PTR_DAT_110bdc268;
  *param_1 = &PTR_FUN_110bdc2f0;
  param_1[5] = &PTR_FUN_110bdc348;
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



/* Entry: 10a46d2e4; end: 10a46d2fb;  */

bool FUN_10a46d2e4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x65532e65756c6156 && param_2[1] == 0x62617a696c616972) &&
      *(long *)((long)param_2 + 0xf) == 0x65756c6156656c62)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46d2fc; end: 10a46d493;  */

undefined8 * FUN_10a46d2fc(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110bdb0e8;
  param_1[-5] = &PTR_FUN_110bdb170;
  *param_1 = &PTR_FUN_110bdb1c8;
  func_0x00010a052384(param_1 + 8);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  param_1[-7] = &PTR_DAT_110bdc268;
  param_1[-5] = &PTR_FUN_110bdc2f0;
  *param_1 = &PTR_FUN_110bdc348;
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



/* Entry: 10a46d494; end: 10a46d4ff;  */

undefined1  [16] FUN_10a46d494(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10e4b8904;
  return auVar1;
}



/* Entry: 10a46d500; end: 10a46d66b;  */

void FUN_10a46d500(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar7 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    plStack_50 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_50);
    plVar7 = (long *)((ulong)&plStack_50 | 8);
    pplVar3 = &plStack_50;
    if (param_4 != 0) {
      plVar7 = (long *)(param_4 + 0x28);
      pplVar3 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar7;
    plVar7 = *pplVar3;
  }
  plVar4 = (long *)0x80;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bddf48;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_DAT_110bdace8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[5] = (long)&PTR_DAT_110bdad70;
  plVar4[10] = (long)&PTR_FUN_110bdadc8;
  plVar4[0xb] = (long)plVar7;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar7 = plVar4 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4[8] = (long)plStack_50;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_48 = plVar4;
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar7 = plStack_50;
  if (plStack_50 != param_2) {
    func_0x00010a14ddc8(plStack_50 + 10,param_2[10],param_2[0xb],param_2[0xb] - param_2[10] >> 2);
  }
  *param_1 = plVar7;
  param_1[1] = plStack_48;
  return;
}



/* Entry: 10a46d66c; end: 10a46d707;  */

void FUN_10a46d66c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a2a90b0(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46d708; end: 10a46d767;  */

void FUN_10a46d708(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a3694cc(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a46d768; end: 10a46d8ab;  */

uint FUN_10a46d768(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint extraout_w10;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbee8,0);
  uVar4 = extraout_w10;
  if (param_2 != 0) {
    pfVar1 = *(float **)(param_1 + 0x50);
    pfVar2 = *(float **)(param_1 + 0x58);
    pfVar3 = *(float **)(param_2 + 0x50);
    if ((long)pfVar2 - (long)pfVar1 == *(long *)(param_2 + 0x58) - (long)pfVar3) {
      if (pfVar1 == pfVar2) {
        uVar4 = 1;
      }
      else {
        do {
          pfVar5 = pfVar1 + 1;
          fVar6 = *pfVar3;
          fVar7 = *pfVar1;
          uVar4 = (uint)(fVar7 == fVar6);
          pfVar3 = pfVar3 + 1;
          pfVar1 = pfVar5;
        } while (fVar7 == fVar6 && pfVar5 != pfVar2);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return param_2 != 0 & uVar4;
}



/* Entry: 10a46d8ac; end: 10a46d8c3;  */

bool FUN_10a46d8ac(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x15) &&
     ((*param_2 == 0x6c462e65756c6156 && param_2[1] == 0x796172724174616f) &&
      *(long *)((long)param_2 + 0xd) == 0x65756c6156796172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46d8c4; end: 10a46da03;  */

undefined8 * FUN_10a46d8c4(undefined8 *param_1)

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



/* Entry: 10a46da04; end: 10a46da6f;  */

undefined1  [16] FUN_10a46da04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10e4b891a;
  return auVar1;
}



/* Entry: 10a46da70; end: 10a46db8b;  */

void FUN_10a46da70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    puVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = (undefined8 *)param_2[9];
    puStack_40 = (undefined8 *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar3 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar1 = &puStack_40;
    if (param_4 != 0) {
      puVar3 = (undefined8 *)(param_4 + 0x28);
      ppuVar1 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar3;
    puVar3 = *ppuVar1;
  }
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bddf98;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xc] = param_3;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puStack_40 = puVar2 + 3;
  *puStack_40 = &PTR_DAT_110bdade8;
  puVar2[5] = &PTR_DAT_110bdae70;
  puVar2[10] = &PTR_FUN_110bdaec8;
  puVar2[0xb] = puVar3;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puStack_38 = puVar2;
  FUN_10a494be0(&puStack_40);
  if (puStack_40 != param_2) {
    FUN_10a0ea4a0(puStack_40 + 10,param_2[10],param_2[0xb],(long)(param_2[0xb] - param_2[10]) >> 2);
  }
  *param_1 = puStack_40;
  param_1[1] = puStack_38;
  return;
}



/* Entry: 10a46db8c; end: 10a46dc27;  */

void FUN_10a46db8c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a2e43f8(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46dc28; end: 10a46dc87;  */

void FUN_10a46dc28(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a3695f0(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a46dc88; end: 10a46dd9b;  */

void FUN_10a46dc88(long param_1,long param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbf18,0);
  if ((param_2 != 0) &&
     (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) ==
      *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50))) {
    _memcmp();
  }
  return;
}



/* Entry: 10a46dd9c; end: 10a46ddb3;  */

bool FUN_10a46dd9c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x13) &&
     ((*param_2 == 0x6e492e65756c6156 && param_2[1] == 0x6156796172724174) &&
      *(long *)((long)param_2 + 0xb) == 0x65756c6156796172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46ddb4; end: 10a46deeb;  */

undefined8 * FUN_10a46ddb4(undefined8 *param_1)

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



/* Entry: 10a46deec; end: 10a46df4f;  */

undefined1  [16] FUN_10a46deec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b88ef;
  return auVar1;
}



/* Entry: 10a46df50; end: 10a46e057;  */

void FUN_10a46df50(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = *(undefined8 **)(param_2 + 0x48);
    puStack_40 = *(undefined8 **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar2 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar1 = &puStack_40;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      ppuVar1 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar3 = (long)*ppuVar1;
  }
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bddfe8;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xc] = param_3;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puStack_40 = puVar2 + 3;
  *puStack_40 = &PTR_DAT_110bdaee8;
  puVar2[5] = &PTR_DAT_110bdaf70;
  puVar2[10] = &PTR_FUN_110bdafc8;
  puVar2[0xb] = lVar3;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puStack_38 = puVar2;
  FUN_10a494d28(&puStack_40);
  func_0x000108b0402c(puStack_40 + 10,param_2 + 0x50);
  param_1[1] = puStack_38;
  *param_1 = puStack_40;
  return;
}



/* Entry: 10a46e058; end: 10a46e0ef;  */

void FUN_10a46e058(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  func_0x00010989a300(aiStack_30,*param_3,param_1 + 0x50);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46e0f0; end: 10a46e14f;  */

void FUN_10a46e0f0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a369704(param_1,param_2 + 0x50);
  return;
}


