/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108649f08; end: 108649f7b;  */

void FUN_108649f08(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5fb98;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10864a018();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108649f7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864a028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108649f7c; end: 108649feb;  */

void FUN_108649f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dacf8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10864a018();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108649fec(&uStack_30);
  return;
}



/* Entry: 108649fec; end: 10864a017;  */

long FUN_108649fec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10864a018; end: 10864a047;  */

void FUN_10864a018(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10864a048; end: 10864a0bf; -[SCNE2eeGetKeysForUsersCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10864a048(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010864ab3c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10864a618(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10864a0c0; end: 10864a17b; -[SCNE2eeGetKeysForUsersCallbackCppProxy onSuccess:] */

void FUN_10864a0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10864a17c(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  func_0x00010864a454(auStack_48);
  func_0x00010864ab4c();
  return;
}



/* Entry: 10864a17c; end: 10864a2f7;  */

void FUN_10864a17c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_160 [64];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  FUN_10864a640(param_1,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar1 = param_2;
  _objc_retain();
  func_0x00010864ab5c();
  if (uVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      uVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = *(ulong *)(lStack_118 + uVar4 * 8);
        _objc_retain(uVar2);
        FUN_10864cdbc(auStack_160,uVar2);
        func_0x00010864a9fc(param_1,auStack_160);
        func_0x00010864a504(auStack_160);
        _objc_release();
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      func_0x00010864ab5c();
      uVar1 = uVar2;
    } while (uVar2 != 0);
  }
  lVar3 = 0;
  func_0x00010864ab4c();
  func_0x00010864ab4c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010864ab4c();
  func_0x00010864a454(param_1);
  func_0x00010864ab4c();
  __Unwind_Resume();
  (**(code **)(**(long **)(lVar3 + 0x18) + 0x18))();
  return;
}



/* Entry: 10864a2f8; end: 10864a34f; -[SCNE2eeGetKeysForUsersCallbackCppProxy onError] */

void FUN_10864a2f8(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10864a350; end: 10864a3bf;  */

void FUN_10864a350(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110a5fba8,&PTR_DAT_110a5fbb8,0);
    if (lVar1 == 0) {
      FUN_10864a534(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10864a3c0; end: 10864a413; -[SCNE2eeGetKeysForUsersCallbackCppProxy .cxx_destruct] */

void FUN_10864a3c0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5fc30;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10864a618((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10864a414; end: 10864a4c3; -[SCNE2eeGetKeysForUsersCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10864a414(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010864ab3c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10864a4c4; end: 10864a4cb;  */

void FUN_10864a4c4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010864a504();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10864a4cc; end: 10864a52b;  */

void FUN_10864a4cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010864a504();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10864a52c; end: 10864a533;  */

void FUN_10864a52c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10864a530);
  (*pcVar1)();
}



/* Entry: 10864a534; end: 10864a5a7;  */

void FUN_10864a534(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5fc30;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010864ab3c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10864a5a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864ab84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864a5a8; end: 10864a617;  */

void FUN_10864a5a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dad00;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010864ab3c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10864a618(&uStack_30);
  return;
}



/* Entry: 10864a618; end: 10864a63f;  */

long FUN_10864a618(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10864a640; end: 10864a6af;  */

void FUN_10864a640(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 6) < param_2) {
    if ((ulong)param_2 >> 0x3a != 0) {
      FUN_10864a6b0();
      func_0x00010864ab70();
      func_0x00010864ab54();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
      FUN_10864a7cc(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_10864a744(auStack_48,param_2,param_1[1] - *param_1 >> 6);
    func_0x00010864ab78();
    func_0x00010864ab70();
  }
  return;
}



/* Entry: 10864a6b0; end: 10864a6c3;  */

void FUN_10864a6b0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
  FUN_10864a7cc(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10864a6c4; end: 10864a743;  */

void FUN_10864a6c4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10864a7cc(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10864a744; end: 10864a7af;  */

long * FUN_10864a744(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010864a78c();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 10864a7b0; end: 10864a7cb;  */

void FUN_10864a7b0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x40) {
    func_0x00010864a8a0(param_4,uVar1);
    param_4 = lStack_48 + 0x40;
  }
  uStack_58 = 1;
  func_0x00010864a870(param_1,param_2,param_3);
  FUN_10864a910(&uStack_70);
  return;
}



/* Entry: 10864a7cc; end: 10864a86f;  */

void FUN_10864a7cc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x40) {
    func_0x00010864a8a0(param_4,lVar1);
    param_4 = lStack_38 + 0x40;
  }
  uStack_48 = 1;
  func_0x00010864a870(param_1,param_2,param_3);
  FUN_10864a910(&uStack_60);
  return;
}



/* Entry: 10864a870; end: 10864a90f;  */

void FUN_10864a870(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    func_0x00010864a504();
  }
  return;
}



/* Entry: 10864a910; end: 10864a93f;  */

long FUN_10864a910(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10864a940(param_1);
  }
  return param_1;
}



/* Entry: 10864a940; end: 10864a95f;  */

void FUN_10864a940(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010864a504();
  }
  return;
}



/* Entry: 10864a960; end: 10864a9bb;  */

void FUN_10864a960(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x40;
    func_0x00010864a504();
  }
  return;
}



/* Entry: 10864a9bc; end: 10864a9c3;  */

void FUN_10864a9bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x40;
    func_0x00010864a504();
  }
  return;
}



/* Entry: 10864a9c4; end: 10864aa5f;  */

void FUN_10864a9c4(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x40;
    func_0x00010864a504();
  }
  return;
}



/* Entry: 10864aa60; end: 10864aaeb;  */

long FUN_10864aa60(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  FUN_10864aaec(param_1,(param_1[1] - *param_1 >> 6) + 1);
  FUN_10864a744(auStack_48,plVar1,param_1[1] - *param_1 >> 6,param_1 + 2);
  func_0x00010864a8a0(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x40;
  func_0x00010864ab78();
  lVar2 = param_1[1];
  func_0x00010864ab70();
  return lVar2;
}



/* Entry: 10864aaec; end: 10864ab2b;  */

long * FUN_10864aaec(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 5);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3ffffffffffffff;
    }
    return plVar1;
  }
  FUN_10864a6b0();
  return param_1;
}



/* Entry: 10864ab2c; end: 10864ab9b;  */

void FUN_10864ab2c(void)

{
  return;
}



/* Entry: 10864ab9c; end: 10864ac33;  */

void FUN_10864ab9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dad08;
  _objc_alloc(PTR_PTR_1126dad08);
  lVar2 = param_1;
  FUN_108646830(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x50;
  FUN_10864cf6c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bde0(puVar1,param_2,lVar2,param_1);
  FUN_10864ac34();
  func_0x00010864ac3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10864ac34; end: 10864ac43;  */

void FUN_10864ac34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864ac44; end: 10864acb3;  */

void FUN_10864ac44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000107c27914(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10864acb4; end: 10864ad13;  */

void FUN_10864acb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dad10;
  _objc_alloc(PTR_PTR_1126dad10);
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar1,param_2,param_1);
  FUN_10864ad14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10864ad14; end: 10864ad1f;  */

void FUN_10864ad14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864ad20; end: 10864adb7;  */

undefined1  [16] FUN_10864ad20(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c261740(param_1);
  uVar3 = param_1;
  func_0x00010bfb7820();
  uVar4 = param_1;
  func_0x00010c142f00(param_1);
  uVar5 = param_1;
  func_0x00010c086b40(param_1);
  _objc_release(param_1);
  uVar1 = 0x100;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  auVar6._8_8_ = uVar5 & 0xffffffff;
  auVar6._0_8_ = uVar1 | uVar4 << 0x20 | uVar2 & 0xffffffff;
  return auVar6;
}



/* Entry: 10864adb8; end: 10864ae2f; -[SCNE2eeKeyPersistentStorageDelegateCppProxy initWithCpp:] */

undefined1 * FUN_10864adb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10864bb44();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010864b524(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10864ae30; end: 10864b0db; -[SCNE2eeKeyPersistentStorageDelegateCppProxy storeUserWrappedIdentityKeys:] */

void FUN_10864ae30(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar7 = *(long **)(param_1 + 0x18);
  func_0x00010864bc18();
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  lStack_198 = 0;
  uVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    if (uVar2 >> 0x3b != 0) goto LAB_10864b040;
    FUN_10864b610(auStack_f0,uVar2,0,&puStack_188);
    FUN_10864b560(&lStack_198,auStack_f0);
    puVar3 = auStack_f0;
    FUN_10864b69c();
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x00010864bc18();
  func_0x00010864bba8();
  if (puVar3 != (undefined1 *)0x0) {
    lVar9 = *plStack_150;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_158 + (long)puVar10 * 8);
        _objc_retain(uVar8);
        FUN_10864e34c(auStack_180,uVar8);
        if (puStack_190 < puStack_188) {
          *puStack_190 = 0;
          puStack_190[1] = 0;
          puStack_190[2] = 0;
          func_0x00010864bb7c();
          puVar11 = (undefined8 *)(extraout_x8 + 0x20);
        }
        else {
          lVar5 = (long)puStack_190 - lStack_198 >> 5;
          uVar2 = lVar5 + 1;
          if (uVar2 >> 0x3b != 0) {
            FUN_10864b54c();
            goto LAB_10864b0ac;
          }
          uVar6 = (long)puStack_188 - lStack_198 >> 4;
          if (uVar6 <= uVar2) {
            uVar6 = uVar2;
          }
          if (0x7fffffffffffffdf < (ulong)((long)puStack_188 - lStack_198)) {
            uVar6 = 0x7ffffffffffffff;
          }
          FUN_10864b610(auStack_118,uVar6,lVar5,&puStack_188);
          puStack_108[1] = 0;
          puStack_108[2] = 0;
          *puStack_108 = 0;
          func_0x00010864bb7c();
          puStack_108 = (undefined8 *)(extraout_x8_00 + 0x20);
          FUN_10864b560(&lStack_198,auStack_118);
          puVar11 = puStack_190;
          FUN_10864b69c(auStack_118);
        }
        puVar4 = auStack_180;
        puStack_190 = puVar11;
        func_0x000107c27914();
        func_0x00010864bbc4();
        puVar10 = puVar10 + 1;
      } while (puVar10 < puVar3);
      func_0x00010864bba8();
      puVar3 = puVar4;
    } while (puVar4 != (undefined1 *)0x0);
  }
  func_0x00010864bb60();
  func_0x00010864bb60();
  (**(code **)(*plVar7 + 0x10))(plVar7,&lStack_198);
  func_0x00010864bbf8();
  func_0x00010864bb60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10864b040:
  FUN_10864b54c();
LAB_10864b0ac:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10864b0b0);
  (*pcVar1)();
}



/* Entry: 10864b0dc; end: 10864b37f; -[SCNE2eeKeyPersistentStorageDelegateCppProxy loadUserWrappedIdentityKeys] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10864b0dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  long lVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_78 [7];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(&uStack_d0);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864bc18();
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  FUN_10864b484(alStack_78 + 3,&uStack_e0,alStack_78 + 1);
  func_0x00010864bc00();
  func_0x00010864b45c(alStack_78 + 3);
  func_0x00010864bbd4();
  func_0x000107c27b48(alStack_78);
  func_0x000107c27b4c(alStack_78 + 3,alStack_78[0]);
  lVar6 = alStack_78[5];
  lStack_88 = alStack_78[0];
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_78[5] + 0x50;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  puStack_90 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = lVar6;
  func_0x00010864b6e4();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_88;
    puVar1 = puStack_90;
    *puVar4 = &PTR_FUN_110a5fc60;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(lVar6 + 0x98);
    *(undefined8 **)(lVar6 + 0x98) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    lVar6 = 0;
  }
  else {
    FUN_10864b4e4(&lStack_a0,alStack_78 + 5);
    lVar6 = lStack_a0;
  }
  func_0x000107c2798c(&lStack_b0);
  if (lVar6 != 0) {
    lStack_a8 = lStack_98;
    lStack_b0 = lVar6;
    if (lStack_98 != 0) {
      do {
        func_0x00010864bb44();
      } while (extraout_w10 != 0);
    }
    FUN_10864b730(&puStack_90,lVar6);
    func_0x00010864bbcc();
  }
  uStack_b8 = alStack_78[4];
  uStack_c0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  func_0x00010864b45c(&lStack_a0);
  func_0x00010864bb18(&puStack_90);
  func_0x000107c27b58(alStack_78 + 3);
  lVar6 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar6 != 0) {
    func_0x00010864bbe4();
  }
  func_0x00010864bbdc();
  func_0x000107c27b58(&uStack_c0);
  _objc_release(0);
  func_0x00010864bb60();
  func_0x00010864bbbc();
  func_0x00010864b45c(&uStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10864b380; end: 10864b3d3; -[SCNE2eeKeyPersistentStorageDelegateCppProxy .cxx_destruct] */

void FUN_10864b380(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5fc40;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010864b524((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10864b3d4; end: 10864b483; -[SCNE2eeKeyPersistentStorageDelegateCppProxy .cxx_construct] */

undefined8 * FUN_10864b3d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10864bb44();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10864b484; end: 10864b4e3;  */

void FUN_10864b484(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 10864b4e4; end: 10864b54b;  */

undefined8 * FUN_10864b4e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010864bbbc();
  return param_1;
}



/* Entry: 10864b54c; end: 10864b55f;  */

void FUN_10864b54c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar6 = *plVar3;
  lVar2 = plVar3[1];
  lVar1 = param_2[1] + (lVar6 - lVar2);
  lVar4 = lVar1;
  for (lVar5 = lVar6; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    FUN_10864b674(lVar4,lVar5);
    lVar4 = lVar4 + 0x20;
  }
  for (; lVar6 != lVar2; lVar6 = lVar6 + 0x20) {
    func_0x000107c27914(lVar6);
  }
  param_2[1] = lVar1;
  lVar5 = *plVar3;
  *plVar3 = lVar1;
  plVar3[1] = lVar5;
  param_2[1] = lVar5;
  lVar5 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10864b560; end: 10864b60f;  */

void FUN_10864b560(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_2[1] + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_10864b674(lVar3,lVar4);
    lVar3 = lVar3 + 0x20;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    func_0x000107c27914(lVar5);
  }
  param_2[1] = lVar1;
  lVar4 = *param_1;
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10864b610; end: 10864b673;  */

long * FUN_10864b610(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3b != 0) {
      func_0x000104bd35f4();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar2;
      lVar2 = param_2[3];
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_1[3] = lVar2;
      return param_1;
    }
    lVar2 = (long)param_2 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + (long)param_2 * 0x20;
  return param_1;
}



/* Entry: 10864b674; end: 10864b69b;  */

void FUN_10864b674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10864b69c; end: 10864b72f;  */

long * FUN_10864b69c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    func_0x000107c27914();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10864b730; end: 10864ba7f;  */

void FUN_10864b730(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10864bb44();
    } while (extraout_w10 != 0);
    do {
      FUN_10864bb44();
    } while (extraout_w10_00 != 0);
  }
  uVar5 = *param_1;
  plStack_50 = (long *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  FUN_10864b484(&plStack_60,&uStack_b0,&uStack_70);
  func_0x00010864bc00();
  func_0x00010864b45c(&plStack_60);
  func_0x00010864bbd4();
  plVar1 = plStack_50;
  plStack_60 = plStack_50 + 10;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  plStack_80 = plVar1;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_10864bb44();
    } while (extraout_w10_01 != 0);
  }
  while (plVar3 = plVar1, func_0x00010864b6e4(), ((ulong)plVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(plVar1 + 4,&plStack_60);
  }
  func_0x00010864b45c(&plStack_80);
  if (plVar1[0x12] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10864b8e8);
    (*pcVar2)();
  }
  lVar6 = *plVar1;
  lStack_90 = plVar1[2];
  lVar7 = plVar1[1];
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
  lStack_a0 = lVar6;
  lStack_98 = lVar7;
  func_0x000107c2798c(&plStack_60);
  func_0x00010864bbdc();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
    FUN_10864e420(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    func_0x00010864bba0();
  }
  func_0x00010bf51e00(puVar4);
  func_0x00010864bbc4();
  func_0x00010c220160(uVar5);
  _objc_release(puVar4);
  func_0x00010864b414(&lStack_a0);
  func_0x00010864bbcc();
  func_0x00010864b45c(&uStack_c0);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10864ba80; end: 10864ba83;  */

undefined8 * FUN_10864ba80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fc60;
  func_0x00010864bb18(param_1 + 1);
  return param_1;
}



/* Entry: 10864ba84; end: 10864ba97;  */

void FUN_10864ba84(void)

{
  FUN_10864baec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864ba98; end: 10864baeb;  */

void FUN_10864ba98(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10864bb44();
    } while (extraout_w10 != 0);
  }
  FUN_10864b730(param_1 + 8);
  func_0x00010864bbbc();
  return;
}



/* Entry: 10864baec; end: 10864bb43;  */

undefined8 * FUN_10864baec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fc60;
  func_0x00010864bb18(param_1 + 1);
  return param_1;
}



/* Entry: 10864bb44; end: 10864bc23;  */

void FUN_10864bb44(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10864bc24; end: 10864bc37;  */

void FUN_10864bc24(void)

{
  func_0x00010864c1f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864bc38; end: 10864bc43;  */

long FUN_10864bc38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5fcf8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010864c210();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10864bc44; end: 10864bc83;  */

void FUN_10864bc44(void)

{
  func_0x00010864c25c();
  return;
}



/* Entry: 10864bc84; end: 10864bd03;  */

void FUN_10864bc84(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x00010864c230();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10864e2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6b00(uVar1,param_2,unaff_x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864c210();
  FUN_108648dc0(uVar1);
  func_0x000107c31be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10864bd04; end: 10864bd77;  */

void FUN_10864bd04(undefined8 param_1)

{
  func_0x00010864c240();
  FUN_10864e2e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_108649e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864c268();
  func_0x00010bfc6b20();
  func_0x00010864c210();
  func_0x000107c31be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10864bd78; end: 10864bdf7;  */

void FUN_10864bd78(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x00010864c230();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10864c0f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6b40(uVar1,param_2,unaff_x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864c210();
  FUN_10864a17c(uVar1);
  func_0x000107c31be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10864bdf8; end: 10864be9b;  */

void FUN_10864bdf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10864c0f4(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10864a350(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6b60(uVar2);
  func_0x000107c31be8();
  func_0x000107c31be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10864be9c; end: 10864bf3f;  */

void FUN_10864be9c(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [56];
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  lVar2 = *(long *)(param_2 + 0x18);
  func_0x00010bfc6aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    FUN_108646914(auStack_68,lVar2);
    FUN_10864c1a8(param_1,auStack_68);
    param_1[0x38] = 1;
    func_0x000108649af0(auStack_68);
  }
  func_0x00010864c218();
  func_0x00010864c218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10864bf40; end: 10864bf97;  */

void FUN_10864bf40(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010864c250();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1086499e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6ac0(uVar1,param_2,unaff_x20);
  func_0x00010864c218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10864bf98; end: 10864c00b;  */

void FUN_10864bf98(undefined8 param_1)

{
  func_0x00010864c240();
  FUN_10864c0f4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10864c638();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864c268();
  func_0x00010c2660c0();
  func_0x00010864c210();
  func_0x000107c31be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10864c00c; end: 10864c063;  */

void FUN_10864c00c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010864c250();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1086499e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf966c0(uVar1,param_2,unaff_x20);
  func_0x00010864c218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10864c064; end: 10864c0f3;  */

long FUN_10864c064(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5fcf8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010864c210();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10864c0f4; end: 10864c1a7;  */

void FUN_10864c0f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x18);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    lVar3 = lVar4;
    FUN_10864e2e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x00010864c210();
  }
  func_0x00010bf51e00(puVar2);
  func_0x000107c31be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10864c1a8; end: 10864c27b;  */

void FUN_10864c1a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return;
}



/* Entry: 10864c27c; end: 10864c2f3; -[SCNE2eeKeyProviderSyncCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10864c27c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010864cc14();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10864c904(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10864c2f4; end: 10864c3a3; -[SCNE2eeKeyProviderSyncCallbackCppProxy onError:] */

void FUN_10864c2f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010864cc40();
    uVar1 = param_3;
    func_0x00010c067fc0(param_3);
    func_0x00010864cc0c();
    uVar1 = uVar1 & 0xffffffff | 0x100000000;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10864c3a4; end: 10864c637; -[SCNE2eeKeyProviderSyncCallbackCppProxy onSuccess:] */

void FUN_10864c3a4(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 auStack_190 [64];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar5 = *(long **)(param_1 + 0x18);
  func_0x00010864cc40();
  uStack_1a0 = 0;
  uStack_198 = 0;
  lStack_1a8 = 0;
  uVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    if (uVar2 >> 0x3a != 0) goto LAB_10864c598;
    FUN_10864ca34(auStack_e8,uVar2,0,&uStack_198);
    FUN_10864c940(&lStack_1a8,auStack_e8);
    puVar3 = auStack_e8;
    func_0x00010864cb84();
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  func_0x00010864cc40();
  func_0x00010864cc2c();
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = *plStack_140;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = *(undefined1 **)(lStack_148 + (long)puVar8 * 8);
        _objc_retain(puVar6);
        FUN_10864cc7c(auStack_190,puVar6);
        if (uStack_1a0 < uStack_198) {
          FUN_10864cabc(uStack_1a0,auStack_190);
          uVar2 = uStack_1a0 + 0x40;
        }
        else {
          plVar4 = &lStack_1a8;
          FUN_10864cbcc(plVar4,((long)(uStack_1a0 - lStack_1a8) >> 6) + 1);
          FUN_10864ca34(auStack_110,plVar4,(long)(uStack_1a0 - lStack_1a8) >> 6,&uStack_198);
          FUN_10864cabc(lStack_100,auStack_190);
          lStack_100 = lStack_100 + 0x40;
          FUN_10864c940(&lStack_1a8,auStack_110);
          uVar2 = uStack_1a0;
          func_0x00010864cb84(auStack_110);
        }
        uStack_1a0 = uVar2;
        func_0x00010864c7e8(auStack_190);
        _objc_release();
        puVar8 = puVar8 + 1;
      } while (puVar8 < puVar3);
      func_0x00010864cc2c();
      puVar3 = puVar6;
    } while (puVar6 != (undefined1 *)0x0);
  }
  func_0x00010864cc0c();
  func_0x00010864cc0c();
  (**(code **)(*plVar5 + 0x18))(plVar5,&lStack_1a8);
  func_0x00010864cc6c();
  func_0x00010864cc0c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10864c598:
  FUN_10864c92c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10864c60c);
  (*pcVar1)();
}



/* Entry: 10864c638; end: 10864c6a3;  */

void FUN_10864c638(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110a5fe38,&PTR_DAT_110a5fe48,0);
    if (lVar1 == 0) {
      FUN_10864c818(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      func_0x00010864cc40();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10864c6a4; end: 10864c6f7; -[SCNE2eeKeyProviderSyncCallbackCppProxy .cxx_destruct] */

void FUN_10864c6a4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5fec0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10864c904((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10864c6f8; end: 10864c7a7; -[SCNE2eeKeyProviderSyncCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10864c6f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010864cc14();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10864c7a8; end: 10864c7af;  */

void FUN_10864c7a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010864c7e8();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10864c7b0; end: 10864c80f;  */

void FUN_10864c7b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010864c7e8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10864c810; end: 10864c817;  */

void FUN_10864c810(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10864c814);
  (*pcVar1)();
}



/* Entry: 10864c818; end: 10864c88f;  */

void FUN_10864c818(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5fec0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010864cc14();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10864c890);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864c890; end: 10864c903;  */

void FUN_10864c890(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dad20;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010864cc14();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10864c904(&uStack_30);
  return;
}



/* Entry: 10864c904; end: 10864c92b;  */

long FUN_10864c904(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10864c92c; end: 10864c93f;  */

void FUN_10864c92c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = *plVar3;
  lVar2 = plVar3[1];
  lVar1 = param_2[1] + (lVar5 - lVar2);
  plStack_80 = plVar3 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  lStack_58 = lVar1;
  lStack_60 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x40) {
    FUN_10864cabc(lStack_58,lVar4);
    lStack_58 = lStack_58 + 0x40;
  }
  uStack_68 = 1;
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x40) {
    func_0x00010864c7e8(lVar5);
  }
  FUN_10864cb04(&plStack_80);
  param_2[1] = lVar1;
  lVar4 = *plVar3;
  plVar3[1] = lVar4;
  *plVar3 = param_2[1];
  param_2[1] = lVar4;
  lVar4 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10864c940; end: 10864ca33;  */

void FUN_10864c940(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_2[1] + (lVar4 - lVar2);
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar1;
  lStack_50 = lVar1;
  for (lVar3 = lVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_10864cabc(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x40;
  }
  uStack_58 = 1;
  for (; lVar4 != lVar2; lVar4 = lVar4 + 0x40) {
    func_0x00010864c7e8(lVar4);
  }
  FUN_10864cb04(&plStack_70);
  param_2[1] = lVar1;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10864ca34; end: 10864ca9f;  */

long * FUN_10864ca34(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010864ca7c();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 10864caa0; end: 10864cabb;  */

undefined8 * FUN_10864caa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    param_2 = (undefined8 *)((long)param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  func_0x000104bd35f4();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010864a8e8(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10864cabc; end: 10864cb03;  */

undefined8 * FUN_10864cabc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010864a8e8(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10864cb04; end: 10864cb33;  */

long FUN_10864cb04(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10864cb34(param_1);
  }
  return param_1;
}



/* Entry: 10864cb34; end: 10864cb53;  */

void FUN_10864cb34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x40;
    func_0x00010864c7e8();
  }
  return;
}



/* Entry: 10864cb54; end: 10864cbcb;  */

void FUN_10864cb54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x40;
    func_0x00010864c7e8();
  }
  return;
}



/* Entry: 10864cbcc; end: 10864cc0b;  */

ulong FUN_10864cbcc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3a == 0) {
    uVar1 = param_1[2] - *param_1 >> 5;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x3ffffffffffffff;
    }
    return uVar1;
  }
  FUN_10864c92c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x19;
}



/* Entry: 10864cc0c; end: 10864cc7b;  */

void FUN_10864cc0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864cc7c; end: 10864cd5f;  */

void FUN_10864cc7c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10864e270(auStack_58);
  func_0x00010c292b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108648dc0(auStack_80);
  FUN_10864cd60(param_1,auStack_58,auStack_80);
  FUN_108648f24(auStack_78);
  _objc_release(param_2);
  func_0x000107c27914(auStack_58);
  func_0x00010864cdb4();
  func_0x00010864cdac();
  return;
}



/* Entry: 10864cd60; end: 10864cdab;  */

undefined8 * FUN_10864cd60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010864a8e8(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10864cdac; end: 10864cdbb;  */

void FUN_10864cdac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864cdbc; end: 10864ce9f;  */

void FUN_10864cdbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10864e270(auStack_58);
  func_0x00010bfb82e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108648dc0(auStack_80);
  FUN_10864cea0(param_1,auStack_58,auStack_80);
  FUN_108648f24(auStack_78);
  _objc_release(param_2);
  func_0x000107c27914(auStack_58);
  func_0x00010864cef4();
  func_0x00010864ceec();
  return;
}



/* Entry: 10864cea0; end: 10864ceeb;  */

undefined8 * FUN_10864cea0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010864a8e8(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10864ceec; end: 10864cefb;  */

void FUN_10864ceec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864cefc; end: 10864cf6b;  */

void FUN_10864cefc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000107c27914(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10864cf6c; end: 10864cfcb;  */

void FUN_10864cf6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dad28;
  _objc_alloc(PTR_PTR_1126dad28);
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar1,param_2,param_1);
  FUN_10864cfcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


