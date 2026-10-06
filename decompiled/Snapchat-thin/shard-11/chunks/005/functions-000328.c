/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10862a23c; end: 10862a253;  */

long FUN_10862a23c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5d860;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862a254; end: 10862a30b;  */

void FUN_10862a254(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5d958;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10862a30c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10862a64c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10862a30c; end: 10862a407;  */

void FUN_10862a30c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5d998;
  puVar4[3] = &PTR_DAT_1107e83e0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010862a684();
  puVar4[3] = &PTR_FUN_110a5d9e8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10862a64c(&uStack_50);
  return;
}



/* Entry: 10862a408; end: 10862a40b;  */

void FUN_10862a408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5d998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862a40c; end: 10862a41f;  */

void FUN_10862a40c(void)

{
  FUN_10862a63c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862a420; end: 10862a42b;  */

long FUN_10862a420(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5d958;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862a42c; end: 10862a46b;  */

void FUN_10862a42c(void)

{
  FUN_10862a678();
  return;
}



/* Entry: 10862a46c; end: 10862a567;  */

void FUN_10862a46c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    lVar4 = lVar6;
    FUN_108646224(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c0e6c80(uVar5);
  func_0x00010862a684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10862a568; end: 10862a5a7;  */

void FUN_10862a568(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862a5a8; end: 10862a63b;  */

long FUN_10862a5a8(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5d958;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10862a63c; end: 10862a64b;  */

void FUN_10862a63c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5d998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862a64c; end: 10862a677;  */

long FUN_10862a64c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10862a678; end: 10862a68b;  */

long FUN_10862a678(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5d958;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862a68c; end: 10862a743;  */

void FUN_10862a68c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5da60;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10862a744);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10862aa80(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10862a744; end: 10862a83b;  */

void FUN_10862a744(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5daa0;
  puVar4[3] = &PTR_DAT_110a5db20;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010862aab8();
  puVar4[3] = &PTR_FUN_110a5daf0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10862aa80(&uStack_50);
  return;
}



/* Entry: 10862a83c; end: 10862a83f;  */

void FUN_10862a83c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5daa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862a840; end: 10862a853;  */

void FUN_10862a840(void)

{
  FUN_10862aa70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862a854; end: 10862a85f;  */

long FUN_10862a854(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5da60;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862a860; end: 10862a89f;  */

void FUN_10862a860(void)

{
  FUN_10862aaac();
  return;
}



/* Entry: 10862a8a0; end: 10862a99b;  */

void FUN_10862a8a0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x4d0) {
    lVar4 = lVar6;
    FUN_10863f4c0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c0e6c80(uVar5);
  func_0x00010862aab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10862a99c; end: 10862a9db;  */

void FUN_10862a99c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862a9dc; end: 10862aa6f;  */

long FUN_10862a9dc(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5da60;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10862aa70; end: 10862aa7f;  */

void FUN_10862aa70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5daa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862aa80; end: 10862aaab;  */

long FUN_10862aa80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10862aaac; end: 10862aabf;  */

long FUN_10862aaac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5da60;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862aac0; end: 10862ac37;  */

void FUN_10862aac0(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_1f8 [216];
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
  puVar2 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x00010528aebc(param_1,puVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x00010862ae00();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_110;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(undefined8 *)(lStack_118 + (long)puVar10 * 8);
        _objc_retain(uVar8);
        FUN_108650aa8(auStack_1f8,uVar8);
        func_0x00010528b41c(param_1,auStack_1f8);
        puVar3 = auStack_1f8;
        func_0x000104be4bb0();
        func_0x00010862ae14();
        puVar10 = puVar10 + 1;
      } while (puVar10 < puVar2);
      func_0x00010862ae00();
      puVar2 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  lVar9 = 0;
  func_0x00010862adf8();
  func_0x00010862adf8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010862adf8();
    func_0x000104be4b28(param_1);
    func_0x00010862adf8();
    __Unwind_Resume();
    puVar4 = PTR_PTR_1126daa58;
    _objc_alloc(PTR_PTR_1126daa58);
    func_0x0001006a7d84(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9 + 0x18;
    func_0x0001006a7df8(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(lVar9 + 0x40);
    for (lVar11 = *(long *)(lVar9 + 0x38); lVar11 != lVar1; lVar11 = lVar11 + 0xd8) {
      lVar7 = lVar11;
      FUN_108650c90(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(lVar7);
    }
    func_0x00010bf51e00(puVar6);
    func_0x00010862ae1c();
    func_0x000107c28138(lVar9 + 0x58);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001006a9154();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018ee0(puVar4);
    func_0x00010862ae14();
    func_0x00010862ae1c();
    _objc_release(puVar6);
    _objc_release(lVar5);
    func_0x00010862adf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10862ac38; end: 10862adf7;  */

void FUN_10862ac38(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126daa58;
  _objc_alloc(PTR_PTR_1126daa58);
  lVar4 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x18;
  func_0x0001006a7df8(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) / 0xd8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x40);
  for (lVar8 = *(long *)(param_1 + 0x38); lVar8 != lVar1; lVar8 = lVar8 + 0xd8) {
    lVar7 = lVar8;
    FUN_108650c90(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,lVar7);
    _objc_release(lVar7);
  }
  func_0x00010bf51e00(puVar6);
  func_0x00010862ae1c();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar8 = param_1 + 0x58;
  func_0x000107c28138(lVar8);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = *(int *)(param_1 + 0x68);
  param_1 = param_1 + 0x70;
  func_0x0001006a9154();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018ee0(puVar3,param_2,lVar4,lVar5,puVar6,uVar9,lVar8,(long)iVar2,param_1);
  func_0x00010862ae14();
  func_0x00010862ae1c();
  _objc_release(puVar6);
  _objc_release(lVar5);
  func_0x00010862adf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10862adf8; end: 10862ae23;  */

void FUN_10862adf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862ae24; end: 10862ae97;  */

void FUN_10862ae24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126daa60;
  _objc_alloc(PTR_PTR_1126daa60);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b420(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_10862ae98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862ae98; end: 10862ae9f;  */

void FUN_10862ae98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862aea0; end: 10862af3b;  */

void FUN_10862aea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126daa68;
  _objc_alloc(PTR_PTR_1126daa68);
  lVar2 = param_1;
  func_0x0001006cef8c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x428;
  func_0x0001006a7d84(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0057c0(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + 0x440));
  FUN_10862af8c();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10862af3c; end: 10862af8b;  */

void FUN_10862af3c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001006b7234();
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x430) = param_3[1];
  *(undefined8 *)(param_1 + 0x428) = uVar1;
  *(undefined8 *)(param_1 + 0x438) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(param_1 + 0x440) = param_4;
  return;
}



/* Entry: 10862af8c; end: 10862af97;  */

void FUN_10862af8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862af98; end: 10862b093;  */

void FUN_10862af98(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126daa70;
  _objc_alloc(PTR_PTR_1126daa70);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x70) {
    lVar4 = lVar5;
    FUN_10863e318(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  FUN_10862b710();
  func_0x00010c034380(puVar2,param_2,puVar3,(int)param_1[3]);
  func_0x00010862b73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10862b094; end: 10862b103;  */

undefined8 FUN_10862b094(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010862b0c8(&uStack_28);
  return param_1;
}



/* Entry: 10862b104; end: 10862b10b;  */

void FUN_10862b104(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x70;
    func_0x00010862b144();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10862b10c; end: 10862b17b;  */

void FUN_10862b10c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x70;
    func_0x00010862b144();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10862b17c; end: 10862b207;  */

void FUN_10862b17c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x70) < param_2) {
    if ((undefined8 *)0x249249249249249 < param_2) {
      FUN_10862b208();
      func_0x00010862b728();
      func_0x00010862b744();
      plVar1 = (long *)&UNK_10f4ad48a;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x70) * 0x70;
      FUN_10862b348(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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
    FUN_10862b2a8(auStack_48,param_2,(param_1[1] - *param_1) / 0x70);
    func_0x00010862b730();
    func_0x00010862b728();
  }
  return;
}



/* Entry: 10862b208; end: 10862b21b;  */

void FUN_10862b208(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f4ad48a;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x70) * 0x70;
  FUN_10862b348(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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



/* Entry: 10862b21c; end: 10862b2a7;  */

void FUN_10862b21c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_10862b348(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10862b2a8; end: 10862b317;  */

long * FUN_10862b2a8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010862b2f4();
  }
  lVar1 = param_4 + param_3 * 0x70;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x70;
  return param_1;
}



/* Entry: 10862b318; end: 10862b347;  */

void FUN_10862b318(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x24924924924924a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x70);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x70) {
    FUN_10862b41c(param_4,uVar1);
    param_4 = lStack_48 + 0x70;
  }
  uStack_58 = 1;
  FUN_10862b3ec(param_1,param_2,param_3);
  FUN_10862b4c8(&uStack_70);
  return;
}



/* Entry: 10862b348; end: 10862b3eb;  */

void FUN_10862b348(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x70) {
    FUN_10862b41c(param_4,lVar1);
    param_4 = lStack_38 + 0x70;
  }
  uStack_48 = 1;
  FUN_10862b3ec(param_1,param_2,param_3);
  FUN_10862b4c8(&uStack_60);
  return;
}



/* Entry: 10862b3ec; end: 10862b41b;  */

void FUN_10862b3ec(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    func_0x00010862b144();
  }
  return;
}



/* Entry: 10862b41c; end: 10862b4c7;  */

void FUN_10862b41c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_2 + 9) == '\x01') {
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[10] = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



/* Entry: 10862b4c8; end: 10862b4f7;  */

long FUN_10862b4c8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10862b4f8(param_1);
  }
  return param_1;
}



/* Entry: 10862b4f8; end: 10862b517;  */

void FUN_10862b4f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x70;
    func_0x00010862b144();
  }
  return;
}



/* Entry: 10862b518; end: 10862b573;  */

void FUN_10862b518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x70;
    func_0x00010862b144();
  }
  return;
}



/* Entry: 10862b574; end: 10862b57b;  */

void FUN_10862b574(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x70;
    func_0x00010862b144();
  }
  return;
}



/* Entry: 10862b57c; end: 10862b617;  */

void FUN_10862b57c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x70;
    func_0x00010862b144();
  }
  return;
}



/* Entry: 10862b618; end: 10862b6af;  */

long FUN_10862b618(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10862b6b0(param_1,(param_1[1] - *param_1) / 0x70 + 1);
  FUN_10862b2a8(auStack_58,plVar1,(param_1[1] - *param_1) / 0x70,param_1 + 2);
  FUN_10862b41c(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x70;
  func_0x00010862b730();
  lVar2 = param_1[1];
  func_0x00010862b728();
  return lVar2;
}



/* Entry: 10862b6b0; end: 10862b70f;  */

ulong FUN_10862b6b0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x249249249249249 < param_2) {
    FUN_10862b208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x70;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x124924924924923 < uVar1) {
    uVar2 = 0x249249249249249;
  }
  return uVar2;
}



/* Entry: 10862b710; end: 10862b74b;  */

void FUN_10862b710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862b74c; end: 10862b80f;  */

void FUN_10862b74c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126daa78;
  _objc_alloc(PTR_PTR_1126daa78);
  lVar2 = param_1;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  FUN_10862af98(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x40;
  func_0x0001006aaca4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d420(puVar1,param_2,lVar2,lVar3,lVar4,(long)*(int *)(param_1 + 0x48));
  func_0x00010862b8bc();
  func_0x00010862b8b4();
  func_0x00010862b8c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862b810; end: 10862b887;  */

undefined8 *
FUN_10862b810(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  FUN_10862b888(param_1 + 4,param_3);
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 9) = param_5;
  return param_1;
}



/* Entry: 10862b888; end: 10862b8cb;  */

void FUN_10862b888(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 10862b8cc; end: 10862ba0f;  */

void FUN_10862b8cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126daa80;
  _objc_alloc(PTR_PTR_1126daa80);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001006a7df8(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x38;
  func_0x000107c285c4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar5 = param_1 + 0x50;
    FUN_10862bc0c(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = 0;
  }
  param_1 = param_1 + 0x70;
  func_0x0001006a9154(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018ec0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,param_1);
  func_0x00010862bc00();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862ba10; end: 10862baa7;  */

long FUN_10862ba10(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_10862bbdc();
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[2];
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_10862baa8(param_1 + 0x50,param_5);
  func_0x00010066de60(param_1 + 0x70,param_6);
  return param_1;
}



/* Entry: 10862baa8; end: 10862bad7;  */

undefined1 * FUN_10862baa8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10862bad8();
  return param_1;
}



/* Entry: 10862bad8; end: 10862bb03;  */

void FUN_10862bad8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10862bbdc();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10862bb04; end: 10862bb23;  */

void FUN_10862bb04(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10862bb24();
  }
  return;
}



/* Entry: 10862bb24; end: 10862bb97;  */

undefined8 FUN_10862bb24(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010862bb58(&uStack_28);
  return param_1;
}



/* Entry: 10862bb98; end: 10862bb9f;  */

void FUN_10862bb98(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10862bba0; end: 10862bbdb;  */

void FUN_10862bba0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10862bbdc; end: 10862bc0b;  */

void FUN_10862bbdc(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 10862bc0c; end: 10862bcfb;  */

void FUN_10862bc0c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126daa88;
  _objc_alloc(PTR_PTR_1126daa88);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_1[1] - *param_1 >> 5)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x20) {
    lVar4 = lVar5;
    FUN_10862ae24(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    func_0x00010862c050();
  }
  func_0x00010bf51e00(puVar3);
  func_0x00010862c048();
  func_0x00010c0191a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10862bcfc; end: 10862bd0f;  */

void FUN_10862bcfc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
  FUN_10862be18(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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



/* Entry: 10862bd10; end: 10862bd8f;  */

void FUN_10862bd10(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10862be18(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10862bd90; end: 10862bdfb;  */

long * FUN_10862bd90(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010862bdd8();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10862bdfc; end: 10862be17;  */

void FUN_10862bdfc(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x20) {
    FUN_10862bef0(param_4,uVar1);
    param_4 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  FUN_10862bec0(param_1,param_2,param_3);
  FUN_10862bf1c(&uStack_70);
  return;
}



/* Entry: 10862be18; end: 10862bebf;  */

void FUN_10862be18(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_10862bef0(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_10862bec0(param_1,param_2,param_3);
  FUN_10862bf1c(&uStack_60);
  return;
}



/* Entry: 10862bec0; end: 10862beef;  */

void FUN_10862bec0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10862bef0; end: 10862bf1b;  */

void FUN_10862bef0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 10862bf1c; end: 10862bf4b;  */

long FUN_10862bf1c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10862bf4c(param_1);
  }
  return param_1;
}



/* Entry: 10862bf4c; end: 10862bf6b;  */

void FUN_10862bf4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10862bf6c; end: 10862bfc7;  */

void FUN_10862bf6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10862bfc8; end: 10862bfcf;  */

void FUN_10862bfc8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10862bfd0; end: 10862c007;  */

void FUN_10862bfd0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10862c008; end: 10862c047;  */

ulong FUN_10862c008(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    uVar1 = param_1[2] - *param_1 >> 4;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x7ffffffffffffff;
    }
    return uVar1;
  }
  FUN_10862bcfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x19;
}



/* Entry: 10862c048; end: 10862c067;  */

void FUN_10862c048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862c068; end: 10862c0df; -[SCNMessagingGroupsManager initWithCpp:] */

undefined1 * FUN_10862c068(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd2a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10862d528();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000104be51f4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10862c0e0; end: 10862c31f; -[SCNMessagingGroupsManager fetchGroups:] */

void FUN_10862c0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_d0,*(long **)(param_1 + 0x18),param_3);
  func_0x00010862d6b4();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862d5f4();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000104be4db4(auStack_60,auStack_e0,&uStack_70);
  func_0x000104be4ddc(&uStack_50,auStack_60);
  func_0x000104be4f5c(auStack_60);
  func_0x000104be4f5c(&uStack_70);
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010862d6dc();
  lStack_b0 = extraout_x8 + 0x58;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  func_0x000104be4e00();
  if ((int)uVar1 == 0) {
    func_0x00010862d70c();
    func_0x00010862d6c4(&PTR_FUN_110a5db60);
    lVar3 = *(long *)(extraout_x9 + 0xa0);
    *(undefined8 *)(extraout_x9 + 0xa0) = uVar1;
    if (lVar3 != 0) {
      func_0x00010862d5a0();
    }
  }
  else {
    func_0x000104be4ddc(&lStack_a0,&uStack_50);
  }
  func_0x00010862d66c();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010862d528();
      } while (extraout_w10 != 0);
    }
    FUN_10862cab8(auStack_90);
    func_0x000104be4f5c(&lStack_b0);
  }
  func_0x00010862d758();
  func_0x000104be4f5c();
  puVar2 = auStack_90;
  FUN_10862cdf4();
  func_0x00010862d6a4();
  func_0x00010862d76c();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010862d560();
  }
  func_0x000104be4f5c(&uStack_50);
  func_0x000107c27b58(auStack_c0);
  func_0x00010862d748();
  func_0x00010862d5dc();
  func_0x00010862d69c();
  func_0x00010862d694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862c320; end: 10862c547; -[SCNMessagingGroupsManager fetchGroupCount] */

void FUN_10862c320(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_d0);
  func_0x00010862d6b4();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862d5f4();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10862ce14(auStack_60,auStack_e0,&uStack_70);
  FUN_10862ce70(&uStack_50,auStack_60);
  func_0x00010862d724();
  func_0x00010862c9b0(&uStack_70);
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010862d6dc();
  lStack_b0 = extraout_x8 + 0x40;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  func_0x00010862ceb0();
  if ((int)uVar1 == 0) {
    func_0x00010862d70c();
    func_0x00010862d6c4(&PTR_FUN_110a5dba0);
    lVar3 = *(long *)(extraout_x9 + 0x88);
    *(undefined8 *)(extraout_x9 + 0x88) = uVar1;
    if (lVar3 != 0) {
      func_0x00010862d5a0();
    }
  }
  else {
    FUN_10862ce70(&lStack_a0,&uStack_50);
  }
  func_0x00010862d66c();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010862d528();
      } while (extraout_w10 != 0);
    }
    FUN_10862cef8(auStack_90);
    func_0x00010862d67c();
  }
  func_0x00010862d758();
  func_0x00010862c9b0();
  puVar2 = auStack_90;
  func_0x00010862d234();
  func_0x00010862d6a4();
  func_0x00010862d76c();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010862d560();
  }
  func_0x00010862d740();
  func_0x000107c27b58(auStack_c0);
  func_0x00010862d748();
  func_0x00010862d5dc();
  func_0x00010862d650();
  func_0x00010862d684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862c548; end: 10862c5db; -[SCNMessagingGroupsManager getTrendingPublicGroups] */

void FUN_10862c548(long param_1)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_30);
  func_0x00010862d6b4();
  FUN_10862c5dc(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862d628();
  func_0x00010862d68c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862c5dc; end: 10862c7fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10862c5dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [5];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862d5f4();
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  func_0x000104be5630(alStack_68 + 3,param_1,alStack_68 + 1);
  func_0x000104be5658(&puStack_40,alStack_68 + 3);
  func_0x000104be55fc(alStack_68 + 3);
  func_0x000104be55fc(alStack_68 + 1);
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  puStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  puStack_a0 = puStack_40 + 10;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar1;
  __ZNSt3__15mutex4lockEv();
  puVar2 = puStack_40;
  func_0x000104bf37a0();
  if ((int)puVar2 == 0) {
    func_0x00010862d70c();
    lVar3 = lStack_78;
    puVar1 = puStack_80;
    *puVar2 = &PTR_FUN_110a5dbf0;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar2[2] = lVar3;
    puVar2[1] = puVar1;
    lVar3 = puStack_40[0x13];
    puStack_40[0x13] = puVar2;
    if (lVar3 != 0) {
      func_0x00010862d5a0();
    }
  }
  else {
    func_0x000104be5658(&puStack_90,&puStack_40);
  }
  func_0x000107c2798c(&puStack_a0);
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_a0 = puStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010862d528();
      } while (extraout_w10 != 0);
    }
    FUN_10862d254(&puStack_80);
    func_0x00010862d68c();
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x000104be55fc(&puStack_90);
  func_0x00010862d508(&puStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x00010862d560();
  }
  func_0x000104be55fc(&puStack_40);
  func_0x000107c27b58(&uStack_b0);
  func_0x00010862d748();
  func_0x00010862d5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862c7fc; end: 10862c8ef; -[SCNMessagingGroupsManager getTopPublicGroupsForUser:] */

void FUN_10862c7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c2874c(auStack_58,param_3);
  (**(code **)(*plVar2 + 0x28))(&uStack_40,plVar2,auStack_58);
  func_0x000107c27914(auStack_58);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10862c5dc(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862d634();
  func_0x000104be55fc(&uStack_40);
  func_0x00010862d5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862c8f0; end: 10862c91b;  */

void FUN_10862c8f0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10862c9d8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862c91c; end: 10862c96f; -[SCNMessagingGroupsManager .cxx_destruct] */

void FUN_10862c91c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5db40;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000104be51f4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10862c970; end: 10862c9d7; -[SCNMessagingGroupsManager .cxx_construct] */

undefined8 * FUN_10862c970(undefined8 *param_1)

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
      FUN_10862d528();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10862c9d8; end: 10862ca4b;  */

void FUN_10862c9d8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5db40;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10862d528();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10862ca4c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862d63c();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862ca4c; end: 10862cab7;  */

void FUN_10862ca4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daa90;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10862d528();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000104be51f4(&uStack_30);
  return;
}



/* Entry: 10862cab8; end: 10862cd3b;  */

void FUN_10862cab8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  char cStack_58;
  
  if (param_3 != 0) {
    do {
      FUN_10862d528();
    } while (extraout_w10 != 0);
    do {
      FUN_10862d528();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = *param_1;
  uStack_80 = param_2;
  lStack_78 = param_3;
  func_0x000104be5034(&uStack_70,&uStack_80);
  puVar1 = PTR_PTR_1126b9638;
  if (cStack_58 == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    for (lVar5 = CONCAT44(uStack_6c,uStack_70); lVar5 != lStack_68; lVar5 = lVar5 + 200) {
      lVar3 = lVar5;
      FUN_10862ac38(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(lVar3);
    }
    func_0x00010bf51e00(puVar2);
    func_0x00010862d5b0();
    func_0x00010bfbaec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10862cdc4(uStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010862d5d4();
  func_0x00010c220160(uVar4);
  func_0x00010862d5b0();
  func_0x000104be51d4(&uStack_70);
  func_0x000104be4f5c(&uStack_80);
  func_0x00010862d694();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10862cd3c; end: 10862cd3f;  */

undefined8 * FUN_10862cd3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5db60;
  FUN_10862cdf4(param_1 + 1);
  return param_1;
}



/* Entry: 10862cd40; end: 10862cd53;  */

void FUN_10862cd40(void)

{
  FUN_10862cd98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862cd54; end: 10862cd97;  */

void FUN_10862cd54(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010862d600();
  if (param_3 != 0) {
    do {
      func_0x00010862d528();
    } while (extraout_w10 != 0);
  }
  FUN_10862cab8(param_1 + 8);
  func_0x00010862d69c();
  return;
}



/* Entry: 10862cd98; end: 10862cdc3;  */

undefined8 * FUN_10862cd98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5db60;
  FUN_10862cdf4(param_1 + 1);
  return param_1;
}



/* Entry: 10862cdc4; end: 10862cdf3;  */

void FUN_10862cdc4(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862cdf4; end: 10862ce13;  */

void FUN_10862cdf4(void)

{
  func_0x00010862d61c();
  func_0x00010862d750();
  return;
}



/* Entry: 10862ce14; end: 10862ce6f;  */

void FUN_10862ce14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
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



/* Entry: 10862ce70; end: 10862cef7;  */

undefined8 * FUN_10862ce70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010862d650();
  return param_1;
}


