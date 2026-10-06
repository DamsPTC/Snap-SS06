/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcc0f64; end: 10bcc0f73;  */

void FUN_10bcc0f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc0f74; end: 10bcc0fe7;  */

void FUN_10bcc0f74(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d990e8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c3a348();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10bcc0fe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc1094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc0fe8; end: 10bcc1057;  */

void FUN_10bcc0fe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e3038;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c3a348();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27e70(&uStack_30);
  return;
}



/* Entry: 10bcc1058; end: 10bcc10b7;  */

void FUN_10bcc1058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10bcc10b8; end: 10bcc11b3;  */

void FUN_10bcc10b8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e3040;
    _objc_opt_class(PTR_PTR_1126e3040);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110d99140;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10bcc11b4);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10bcc13dc(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          func_0x000107c3a364();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10bcc11b4; end: 10bcc12a7;  */

void FUN_10bcc11b4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110d99180;
  puVar1[3] = &PTR_DAT_110d991f8;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x000107c3a364();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110d991d0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10bcc13dc(&uStack_50);
  return;
}



/* Entry: 10bcc12a8; end: 10bcc12ab;  */

void FUN_10bcc12a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc12ac; end: 10bcc12bf;  */

void FUN_10bcc12ac(void)

{
  FUN_10bcc13cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc12c0; end: 10bcc12cb;  */

long FUN_10bcc12c0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d99140;
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



/* Entry: 10bcc12cc; end: 10bcc1337;  */

void FUN_10bcc12cc(void)

{
  func_0x00010bcc140c();
  return;
}



/* Entry: 10bcc1338; end: 10bcc13cb;  */

long FUN_10bcc1338(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d99140;
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



/* Entry: 10bcc13cc; end: 10bcc13db;  */

void FUN_10bcc13cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc13dc; end: 10bcc1403;  */

long FUN_10bcc13dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcc1404; end: 10bcc1417;  */

void FUN_10bcc1404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10bcc1418; end: 10bcc1467; -[SCNShimsDjinniAsyncTaskQueueCppProxy initWithCpp:] */

undefined1 * FUN_10bcc1418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bcc1600((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc1468; end: 10bcc1533; -[SCNShimsDjinniAsyncTaskQueueCppProxy submit:delayMs:] */

void FUN_10bcc1468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10bcc1764(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40,param_4);
  func_0x00010bcc1654(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcc1534; end: 10bcc158f; -[SCNShimsDjinniAsyncTaskQueueCppProxy .cxx_destruct] */

void FUN_10bcc1534(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d99220;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010bcc15d8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc1590; end: 10bcc167b; -[SCNShimsDjinniAsyncTaskQueueCppProxy .cxx_construct] */

undefined8 * FUN_10bcc1590(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc167c; end: 10bcc168f;  */

void FUN_10bcc167c(void)

{
  return;
}



/* Entry: 10bcc1690; end: 10bcc1707; -[SCNShimsDjinniTaskCppProxy initWithCpp:] */

undefined1 * FUN_10bcc1690(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e688;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10bcc1b44();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010bcc1654(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc1708; end: 10bcc1763; -[SCNShimsDjinniTaskCppProxy run] */

void FUN_10bcc1708(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10bcc1764; end: 10bcc185f;  */

void FUN_10bcc1764(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e3048;
    _objc_opt_class(PTR_PTR_1126e3048);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110d99288;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10bcc18f4);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10bcc1b1c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10bcc1b44();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10bcc1860; end: 10bcc18b3; -[SCNShimsDjinniTaskCppProxy .cxx_destruct] */

void FUN_10bcc1860(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d99358;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010bcc1654((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc18b4; end: 10bcc18f3; -[SCNShimsDjinniTaskCppProxy .cxx_construct] */

undefined8 * FUN_10bcc18b4(undefined8 *param_1)

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
      FUN_10bcc1b44();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc18f4; end: 10bcc19e7;  */

void FUN_10bcc18f4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110d992c8;
  puVar1[3] = &PTR_DAT_110d99340;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10bcc1b44();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110d99318;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10bcc1b1c(&uStack_50);
  return;
}



/* Entry: 10bcc19e8; end: 10bcc19eb;  */

void FUN_10bcc19e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d992c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc19ec; end: 10bcc19ff;  */

void FUN_10bcc19ec(void)

{
  FUN_10bcc1b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc1a00; end: 10bcc1a0b;  */

long FUN_10bcc1a00(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d99288;
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



/* Entry: 10bcc1a0c; end: 10bcc1a77;  */

void FUN_10bcc1a0c(void)

{
  func_0x00010bcc1b70();
  return;
}



/* Entry: 10bcc1a78; end: 10bcc1b0b;  */

long FUN_10bcc1a78(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d99288;
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



/* Entry: 10bcc1b0c; end: 10bcc1b1b;  */

void FUN_10bcc1b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d992c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc1b1c; end: 10bcc1b43;  */

long FUN_10bcc1b1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcc1b44; end: 10bcc1b7b;  */

void FUN_10bcc1b44(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10bcc1b7c; end: 10bcc1ca7;  */

void FUN_10bcc1b7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  func_0x00010bf98a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_58);
  uVar2 = param_2;
  func_0x00010bf98940();
  func_0x00010bf98a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_78);
  uVar1 = uStack_48;
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (cStack_60 == '\x01') {
    param_1[5] = uStack_70;
    param_1[4] = uStack_78;
    param_1[6] = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  func_0x000107c279a4(&uStack_78);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  func_0x00010bcc1d50();
  func_0x00010bcc1d48();
  return;
}



/* Entry: 10bcc1ca8; end: 10bcc1d47;  */

void FUN_10bcc1ca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7fb0;
  _objc_alloc(PTR_PTR_1126b7fb0);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_1 = param_1 + 0x20;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010880(puVar1,param_2,lVar2,uVar3,param_1);
  func_0x00010bcc1d50();
  func_0x00010bcc1d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcc1d48; end: 10bcc1d57;  */

void FUN_10bcc1d48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc1d58; end: 10bcc1e0f;  */

void FUN_10bcc1d58(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d8300;
  _objc_alloc(PTR_PTR_1126d8300);
  iVar1 = *param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  piVar3 = param_1 + 4;
  func_0x000107c27f28(piVar3);
  _objc_retainAutoreleasedReturnValue();
  piVar4 = param_1 + 10;
  func_0x000107c27f28(piVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcf40(puVar2,param_2,(long)iVar1,uVar5,piVar3,piVar4,*(undefined8 *)(param_1 + 0x10)
                      ,(char)param_1[0x12]);
  FUN_10bcc1e10();
  _objc_release(piVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bcc1e10; end: 10bcc1e1b;  */

void FUN_10bcc1e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc1e1c; end: 10bcc1e93; -[SCNShimsLoggerCppProxy initWithCpp:] */

undefined1 * FUN_10bcc1e1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c3a370();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c3131c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc1e94; end: 10bcc1f8b; -[SCNShimsLoggerCppProxy logTimedEvent:interval:params:] */

void FUN_10bcc1e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_48,param_3);
  func_0x000107c281c8(auStack_70,param_5);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,param_4,auStack_70);
  func_0x000107c278e0(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  FUN_10bcc24b4();
  func_0x000107c3a374();
  return;
}



/* Entry: 10bcc1f8c; end: 10bcc2093; -[SCNShimsLoggerCppProxy log:context:tag:message:] */

void FUN_10bcc1f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_58,param_5);
  func_0x000107c27f20(auStack_70,param_6);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_3,param_4,auStack_58,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  FUN_10bcc24b4();
  func_0x000107c3a374();
  return;
}



/* Entry: 10bcc2094; end: 10bcc2103;  */

void FUN_10bcc2094(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110d99368,&PTR_DAT_110d99378,0);
    if (lVar1 == 0) {
      FUN_10bcc23d0(param_1);
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



/* Entry: 10bcc2104; end: 10bcc2157; -[SCNShimsLoggerCppProxy .cxx_destruct] */

void FUN_10bcc2104(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d994a0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c3131c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc2158; end: 10bcc2197; -[SCNShimsLoggerCppProxy .cxx_construct] */

undefined8 * FUN_10bcc2158(undefined8 *param_1)

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
      func_0x000107c3a370();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc2198; end: 10bcc219b;  */

void FUN_10bcc2198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99400;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc219c; end: 10bcc21af;  */

void FUN_10bcc219c(void)

{
  FUN_10bcc23c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc21b0; end: 10bcc21bb;  */

long FUN_10bcc21b0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d993c0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010bcc2504();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10bcc21bc; end: 10bcc21f7;  */

void FUN_10bcc21bc(void)

{
  func_0x00010bcc24ec();
  return;
}



/* Entry: 10bcc21f8; end: 10bcc228f;  */

void FUN_10bcc21f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001056329cc(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1aa0(uVar2);
  func_0x000107c3a378();
  func_0x000107c3a374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10bcc2290; end: 10bcc232f;  */

void FUN_10bcc2290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0140(uVar2);
  func_0x00010bcc2504();
  func_0x000107c3a374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10bcc2330; end: 10bcc23bf;  */

long FUN_10bcc2330(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d993c0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010bcc2504();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10bcc23c0; end: 10bcc23cf;  */

void FUN_10bcc23c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99400;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc23d0; end: 10bcc2443;  */

void FUN_10bcc23d0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d994a0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c3a370();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10bcc2444);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc24f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc2444; end: 10bcc24b3;  */

void FUN_10bcc2444(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e3050;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c3a370();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c3131c(&uStack_30);
  return;
}



/* Entry: 10bcc24b4; end: 10bcc2513;  */

void FUN_10bcc24b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc2514; end: 10bcc2587; -[SCNShimsLoggerScope initWithCpp:] */

undefined1 * FUN_10bcc2514(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e698;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10bcc29cc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010bcc29f0();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc2588; end: 10bcc2667; +[SCNShimsLoggerScope produce:] */

void FUN_10bcc2588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  func_0x000107c31318(auStack_50,param_3);
  FUN_10bcc479c(auStack_40,auStack_50);
  func_0x000107c3131c(auStack_50);
  puVar1 = auStack_40;
  FUN_10bcc27fc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc29f0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcc2668; end: 10bcc2713; -[SCNShimsLoggerScope dispose] */

void FUN_10bcc2668(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b1056ec(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc29dc();
  func_0x00010b1059a4();
  func_0x00010b1059a4(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc2714; end: 10bcc27ab; -[SCNShimsLoggerScope getLogger] */

void FUN_10bcc2714(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_10bcc2094(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc29dc();
  func_0x000107c3131c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc27ac; end: 10bcc27fb;  */

void FUN_10bcc27ac(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_10bcc29cc();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bcc27fc; end: 10bcc2827;  */

void FUN_10bcc27fc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10bcc28c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc2828; end: 10bcc287b; -[SCNShimsLoggerScope .cxx_destruct] */

void FUN_10bcc2828(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d994b0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10bcc29a0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc287c; end: 10bcc28bf; -[SCNShimsLoggerScope .cxx_construct] */

undefined8 * FUN_10bcc287c(undefined8 *param_1)

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
      FUN_10bcc29cc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc28c0; end: 10bcc2933;  */

void FUN_10bcc28c0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d994b0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10bcc29cc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10bcc2934);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc29dc();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc2934; end: 10bcc299f;  */

void FUN_10bcc2934(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e3058;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10bcc29cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10bcc29a0(&uStack_30);
  return;
}



/* Entry: 10bcc29a0; end: 10bcc29cb;  */

long FUN_10bcc29a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcc29cc; end: 10bcc2a13;  */

void FUN_10bcc29cc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10bcc2a14; end: 10bcc2a27;  */

void FUN_10bcc2a14(void)

{
  FUN_10bcc2b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc2a28; end: 10bcc2a33;  */

long FUN_10bcc2a28(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d99518;
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



/* Entry: 10bcc2a34; end: 10bcc2a73;  */

void FUN_10bcc2a34(void)

{
  func_0x00010bcc2b8c();
  return;
}



/* Entry: 10bcc2a74; end: 10bcc2ae7;  */

void FUN_10bcc2a74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10bcc1d58(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132ce0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10bcc2ae8; end: 10bcc2b7b;  */

long FUN_10bcc2ae8(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d99518;
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



/* Entry: 10bcc2b7c; end: 10bcc2b97;  */

void FUN_10bcc2b7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99558;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc2b98; end: 10bcc2c0f; -[SCNShimsPlatform initWithCpp:] */

undefined1 * FUN_10bcc2b98(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e6a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010bcc3264();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10bcc3210(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc2c10; end: 10bcc2c87; -[SCNShimsPlatform setErrorReporter:] */

void FUN_10bcc2c10(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010bcc3274();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c3a394();
  func_0x00010bcc3284(*(undefined8 *)(*plVar1 + 0x10));
  func_0x000107c3a3a4();
  func_0x000107c3a390();
  return;
}



/* Entry: 10bcc2c88; end: 10bcc2cff; -[SCNShimsPlatform setNonFatalReporter:] */

void FUN_10bcc2c88(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010bcc3274();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c3a394();
  func_0x00010bcc3284(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000107c3a3a4();
  func_0x000107c3a390();
  return;
}



/* Entry: 10bcc2d00; end: 10bcc2d6f; +[SCNShimsPlatform setThreadPoolSchedulerPriorityMapping:] */

void FUN_10bcc2d00(void)

{
  undefined1 auStack_5c [60];
  
  func_0x000107c3a398();
  FUN_10bcc330c(auStack_5c);
  FUN_10bcce7b8(auStack_5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc2d70; end: 10bcc2d7b; +[SCNShimsPlatform setThreadPoolSchedulerMaxThreads:] */

void FUN_10bcc2d70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uRam0000000113404418 = param_3;
  return;
}



/* Entry: 10bcc2d7c; end: 10bcc2deb; +[SCNShimsPlatform installNonFatalReporter:] */

void FUN_10bcc2d7c(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c3a398();
  func_0x000107c3a394();
  func_0x000107c31334(auStack_40);
  func_0x000107c3a3a4();
  func_0x000107c3a390();
  return;
}



/* Entry: 10bcc2dec; end: 10bcc2eff; +[SCNShimsPlatform getStaticBuildIdentifiers] */

void FUN_10bcc2dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  FUN_10bcc45b8(&lStack_48);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (lStack_40 - lStack_48) / 0x30);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_48 != lStack_40; lStack_48 = lStack_48 + 0x30) {
    lVar2 = lStack_48;
    FUN_10bcbfe1c(lStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010bf51e00(puVar1);
  func_0x000107c3a390();
  func_0x00010bcc3044(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcc2f00; end: 10bcc2f7b; +[SCNShimsPlatform setThreadAffinity:exclusiveCoreIds:] */

undefined8 FUN_10bcc2f00(void)

{
  undefined8 in_x3;
  undefined1 auStack_38 [24];
  
  _objc_retain(in_x3);
  func_0x000108619534(auStack_38,in_x3);
  func_0x000107c27a18(auStack_38);
  func_0x000107c3a390();
  return 0xffffffff;
}



/* Entry: 10bcc2f7c; end: 10bcc2f83; +[SCNShimsPlatform lockThreadCurrentCore:] */

undefined8 FUN_10bcc2f7c(void)

{
  return 0xffffffff;
}



/* Entry: 10bcc2f84; end: 10bcc2faf;  */

void FUN_10bcc2f84(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10bcc3124();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc2fb0; end: 10bcc3003; -[SCNShimsPlatform .cxx_destruct] */

void FUN_10bcc2fb0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d995e8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10bcc3210((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc3004; end: 10bcc30b7; -[SCNShimsPlatform .cxx_construct] */

undefined8 * FUN_10bcc3004(undefined8 *param_1)

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
      func_0x00010bcc3264();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc30b8; end: 10bcc30bf;  */

void FUN_10bcc30b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010bcc30fc();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10bcc30c0; end: 10bcc3123;  */

void FUN_10bcc30c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010bcc30fc();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10bcc3124; end: 10bcc319b;  */

void FUN_10bcc3124(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d995e8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010bcc3264();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10bcc319c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc3290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc319c; end: 10bcc320f;  */

void FUN_10bcc319c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126ba560;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010bcc3264();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10bcc3210(&uStack_30);
  return;
}



/* Entry: 10bcc3210; end: 10bcc3237;  */

long FUN_10bcc3210(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcc3238; end: 10bcc32a7;  */

void FUN_10bcc3238(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10bcc32a8; end: 10bcc330b;  */

ulong FUN_10bcc32a8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf6a740(param_1);
  uVar2 = param_1;
  func_0x00010c0da3c0(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 10bcc330c; end: 10bcc34bb;  */

void FUN_10bcc330c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c068ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bcc34bc();
  uVar3 = param_2;
  uVar11 = param_3;
  func_0x00010bfb5340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_10bcc34bc();
  uVar5 = param_2;
  uVar12 = uVar11;
  func_0x00010bfa0ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_10bcc34bc();
  uVar7 = param_2;
  uVar13 = uVar12;
  func_0x00010bf13c20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_10bcc34bc();
  uVar9 = param_2;
  uVar14 = uVar13;
  func_0x00010bfe62c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  FUN_10bcc34bc();
  *param_1 = uVar2;
  *(uint *)(param_1 + 1) = param_3 & 0xff;
  *(undefined8 *)((long)param_1 + 0xc) = uVar4;
  *(uint *)((long)param_1 + 0x14) = uVar11 & 0xff;
  param_1[3] = uVar6;
  *(uint *)(param_1 + 4) = uVar12 & 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = uVar8;
  *(uint *)((long)param_1 + 0x2c) = uVar13 & 0xff;
  param_1[6] = uVar10;
  *(uint *)(param_1 + 7) = uVar14 & 0xff;
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bcc34bc; end: 10bcc3527;  */

undefined1  [16] FUN_10bcc34bc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    FUN_10bcc32a8(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  FUN_10bcc3528();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10bcc3528; end: 10bcc352f;  */

void FUN_10bcc3528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc3530; end: 10bcc35a7; -[SCNShimsSystemScope initWithCpp:] */

undefined1 * FUN_10bcc3530(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e6a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10bcc3a94();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b105a34(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc35a8; end: 10bcc36df; +[SCNShimsSystemScope produce:platformParameters:mapping:threadCount:] */

void FUN_10bcc35a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_a4 [60];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_10bcc27ac(auStack_60,param_3);
  uVar1 = param_4;
  func_0x000107c31324();
  uStack_68 = uVar1;
  FUN_10bcc330c(auStack_a4,param_5);
  FUN_10bcc4d80(auStack_50,auStack_60,&uStack_68,auStack_a4,param_6);
  FUN_10bcc29a0(auStack_60);
  FUN_10bcc38f0(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc3ab8();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 10bcc36e0; end: 10bcc3787; -[SCNShimsSystemScope dispose] */

void FUN_10bcc36e0(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b1056ec(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc3aa4();
  func_0x00010b1059a4();
  func_0x00010b1059a4(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc3788; end: 10bcc3813; -[SCNShimsSystemScope getLoggerScope] */

void FUN_10bcc3788(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_10bcc27fc(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc3aa4();
  FUN_10bcc29a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc3814; end: 10bcc389f; -[SCNShimsSystemScope getPlatform] */

void FUN_10bcc3814(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_30);
  FUN_10bcc2f84(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc3aa4();
  FUN_10bcc3210();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


