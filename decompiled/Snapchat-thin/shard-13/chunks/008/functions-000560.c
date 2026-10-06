/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adc699c; end: 10adc69b7; -[LSATrackingComponent isTrackingRequirementSupported:] */

undefined8 FUN_10adc699c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0x200) && (param_3 != 8)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0708f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isDeviceSupported_1125f9c48);
  return param_1;
}



/* Entry: 10adc69b8; end: 10adc6a8f; -[LSATrackingComponent didRecognizeExpression:] */

void FUN_10adc69b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adc6a90;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adc6a90; end: 10adc6aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784570),
             PTR_s_trackingComponent_didRecognizeEx_11267bd80,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10adc6aa4; end: 10adc6b37; -[LSATrackingComponent didRecognizeFaces:] */

void FUN_10adc6aa4(undefined8 param_1)

{
  func_0x00010bf047a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adc6b38; end: 10adc6b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784570),
             PTR_s_trackingComponent_didRecognizeFa_11267bd88,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10adc6b4c; end: 10adc6bdb; -[LSATrackingComponent requestFinishTrackingProcessingIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6b4c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c278de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10adc6bdc; end: 10adc6c43; -[LSATrackingComponent addARAnchors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bef6900(*(undefined8 *)(param_1 + _DAT_11278457c),param_2,param_3);
  func_0x00010bef6900(*(undefined8 *)(param_1 + _DAT_112784580),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adc6c44; end: 10adc6cbf; -[LSATrackingComponent removeARAnchors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c12a940(*(undefined8 *)(param_1 + _DAT_112784578),param_2,param_3);
  func_0x00010c12a940(*(undefined8 *)(param_1 + _DAT_11278457c),param_2,param_3);
  func_0x00010c12a940(*(undefined8 *)(param_1 + _DAT_112784580),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adc6cc0; end: 10adc6d3b; -[LSATrackingComponent updateARAnchors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c283280(*(undefined8 *)(param_1 + _DAT_112784578),param_2,param_3);
  func_0x00010c283280(*(undefined8 *)(param_1 + _DAT_11278457c),param_2,param_3);
  func_0x00010c283280(*(undefined8 *)(param_1 + _DAT_112784580),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adc6d3c; end: 10adc6dcf; -[LSATrackingComponent getWorldTrackingCapabilities] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10adc6d3c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfcc480();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 10adc6dd0; end: 10adc6e5f; -[LSATrackingComponent didRequestResetWorldMeshes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6dd0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf79f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10adc6e60; end: 10adc6ecb; -[LSATrackingComponent createTrackedPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112784578);
  param_1 = param_1 + _DAT_112784598;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf59ac0(uVar1,param_2,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10adc6ecc; end: 10adc6f37; -[LSATrackingComponent deleteTrackedPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112784578);
  param_1 = param_1 + _DAT_112784598;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6cd20(uVar1,param_2,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10adc6f38; end: 10adc7003; -[LSATrackingComponent raycastARScene:allowingTarget:alignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc6f38(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112784598;
  uVar1 = param_3 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_3 = param_3 + lVar3;
    _objc_loadWeakRetained(param_3);
    lVar3 = param_3;
    func_0x00010c120500(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10adc7004; end: 10adc7023; -[LSATrackingComponent delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc7004(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112784598);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adc7024; end: 10adc7037; -[LSATrackingComponent setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc7024(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112784598,param_3);
  return;
}



/* Entry: 10adc7038; end: 10adc7143; -[LSATrackingComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc7038(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_destroyWeak(param_1 + _DAT_112784598);
  _objc_storeStrong(param_1 + _DAT_112784584,0);
  _objc_storeStrong(param_1 + _DAT_112784580,0);
  _objc_storeStrong(param_1 + _DAT_11278457c,0);
  _objc_storeStrong(param_1 + _DAT_112784578,0);
  _objc_storeStrong(param_1 + _DAT_112784594,0);
  _objc_storeStrong(param_1 + _DAT_112784590,0);
  _objc_storeStrong(param_1 + _DAT_112784574,0);
  _objc_storeStrong(param_1 + _DAT_112784570,0);
  FUN_10adc7198(param_1 + _DAT_11278458c);
  plVar5 = *(long **)(param_1 + _DAT_112784588 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127845a0,0);
  return;
}



/* Entry: 10adc7144; end: 10adc7167; -[LSATrackingComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc7144(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112784588;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_11278458c;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adc7168; end: 10adc7197;  */

long FUN_10adc7168(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long in_x3;
  long lVar4;
  long *plVar5;
  
  func_0x000105277f8c(in_x3);
  func_0x000105277f8c(in_x3);
  func_0x000105277f8c();
  plVar5 = *(long **)(in_x3 + 8);
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
  return in_x3;
}



/* Entry: 10adc7198; end: 10adc71ef;  */

long FUN_10adc7198(long param_1)

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



/* Entry: 10adc71f0; end: 10adc71ff;  */

void FUN_10adc71f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74708;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adc7200; end: 10adc721f;  */

void FUN_10adc7200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74708;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adc7220; end: 10adc723f;  */

void FUN_10adc7220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adc7228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adc7240; end: 10adc725f;  */

void FUN_10adc7240(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c74758;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adc7260; end: 10adc726f;  */

void FUN_10adc7260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adc7268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adc7270; end: 10adc7337;  */

undefined8 * FUN_10adc7270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c747a8;
  (**(code **)param_1[0x13])();
  (**(code **)param_1[0xb])();
  FUN_10adc7198(param_1 + 6);
  _objc_destroyWeak(param_1 + 5);
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adc7338; end: 10adc7673;  */

/* WARNING: Removing unreachable block (ram,0x00010adc75d4) */
/* WARNING: Removing unreachable block (ram,0x00010adc75d8) */
/* WARNING: Removing unreachable block (ram,0x00010adc75e0) */
/* WARNING: Removing unreachable block (ram,0x00010adc75e8) */
/* WARNING: Removing unreachable block (ram,0x00010adc75ec) */

void FUN_10adc7338(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar6 = (undefined8 *)0x1f0;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar6 = &PTR_DAT_110c747e8;
  func_0x0001098bae4c(puVar6,&UNK_10e514363,0x13,param_3,lVar7,puVar6 + 0x19,puVar6 + 0x34,in_x7,0,0
                      ,&uStack_60);
  plVar1 = plStack_58;
  lVar7 = param_2 + 0x28;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar6[0x1c] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1f] = 0;
  *puVar6 = &PTR_DAT_110c747e8;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  puVar6[0x19] = &PTR_FUN_110c74838;
  puVar6[0x21] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x27) = 0x40000000;
  puVar6[0x24] = &PTR_DAT_110c748f0;
  puVar6[0x25] = &UNK_110c748c0;
  *(undefined1 *)((long)puVar6 + 0x13c) = 0;
  *(undefined1 *)((long)puVar6 + 0x142) = 0;
  puVar6[0x2b] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x2c) = 0x40000000;
  puVar6[0x29] = &PTR_DAT_110c748f0;
  puVar6[0x2a] = &UNK_110c748c0;
  *(undefined1 *)((long)puVar6 + 0x164) = 0;
  *(undefined1 *)((long)puVar6 + 0x16a) = 0;
  *(undefined1 *)(puVar6 + 0x2e) = 0;
  *(undefined1 *)(puVar6 + 0x33) = 0;
  lVar9 = puVar6[0xc];
  if (lVar9 == 0) {
    bVar5 = false;
    lVar8 = lVar7;
  }
  else {
    bVar5 = lVar9 != puVar6[0xb];
    lVar8 = 0;
    if (!bVar5) {
      lVar8 = lVar7;
    }
  }
  *(undefined2 *)(puVar6 + 0x35) = 0;
  puVar6[0x38] = 0x10adc803c;
  puVar6[0x39] = &UNK_110c74950;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  puVar6[0x3c] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x34] = &PTR_DAT_110c74930;
  if ((!bVar5) && (*(char *)(*(long *)(lVar8 + 0x30) + 8) == '\x01')) {
    puVar6[0x3d] = lVar8 + 0x28;
  }
  if ((lVar9 == 0) || (lVar9 == puVar6[0xb])) {
    _objc_loadWeakRetained(lVar7);
    lVar9 = lVar7;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    plVar1 = *(long **)(param_2 + 0x38);
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = **(long **)(param_2 + 0x40);
    *(undefined1 *)(puVar6 + 0x2e) = 0;
    _objc_initWeak(puVar6 + 0x2f,lVar9);
    puVar6[0x30] = lVar8 + 0x408;
    puVar6[0x31] = uVar3;
    puVar6[0x32] = plVar1;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    _objc_release(lVar9);
    _objc_release(lVar7);
    *(undefined1 *)(puVar6 + 0x33) = 1;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10adc7674; end: 10adc7783;  */

undefined8 * FUN_10adc7674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74838;
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  *param_1 = &PTR____cxa_pure_virtual_110b17e28;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10adc7784; end: 10adc7787;  */

void FUN_10adc7784(void)

{
  return;
}



/* Entry: 10adc7788; end: 10adc78db;  */

bool FUN_10adc7788(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined6 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uStack_40;
  ushort uStack_3c;
  uint uStack_38;
  ushort uStack_34;
  
  lVar7 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x148;
  if (lVar7 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  if (*(char *)(lVar1 + 0x22) == '\x01') {
    *(undefined1 *)(lVar1 + 0x22) = 0;
    puVar2 = *(uint **)(param_1 + 0x108);
    lVar3 = *(long *)(param_1 + 0x110);
    uStack_38 = *puVar2;
    uStack_34 = (ushort)puVar2[1];
    if (lVar3 - (long)puVar2 != 6) {
      lVar6 = (long)puVar2 + 6;
      uStack_40 = uStack_38;
      uStack_3c = uStack_34;
      do {
        func_0x00010ad58448(&uStack_40,lVar6);
        lVar6 = lVar6 + 6;
        uStack_34 = uStack_3c;
        uStack_38 = uStack_40;
      } while (lVar6 != lVar3);
    }
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x108);
    lVar3 = *(long *)(param_1 + 0x110);
    uStack_38 = *puVar2;
    uStack_34 = (ushort)puVar2[1];
    if (lVar3 - (long)puVar2 != 6) {
      lVar6 = (long)puVar2 + 6;
      do {
        func_0x00010ad58448(&uStack_38,lVar6);
        lVar6 = lVar6 + 6;
      } while (lVar6 != lVar3);
    }
  }
  uVar4 = CONCAT24(uStack_34,uStack_38);
  bVar5 = true;
  *(undefined1 *)(lVar1 + 0x22) = 1;
  *(uint *)(lVar1 + 0x1c) = uStack_38;
  *(ushort *)(lVar1 + 0x20) = uStack_34;
  if ((((lVar7 != 0) && ((uint)*(byte *)(lVar7 + 0x1c) == (uStack_38 & 0xff))) &&
      ((uint)*(byte *)(lVar7 + 0x1d) == ((uint)((uint6)uVar4 >> 8) & 0xff))) &&
     ((((uint)*(byte *)(lVar7 + 0x1e) == ((uint)((uint6)uVar4 >> 0x10) & 0xff) &&
       ((uint3)*(byte *)(lVar7 + 0x1f) == ((uint3)((uint6)uVar4 >> 0x18) & 0xff))) &&
      ((ushort)*(byte *)(lVar7 + 0x20) == (uStack_34 & 0xff))))) {
    bVar5 = (ushort)*(byte *)(lVar7 + 0x21) != uStack_34 >> 8;
  }
  return bVar5;
}



/* Entry: 10adc78dc; end: 10adc7a4b;  */

/* WARNING: Removing unreachable block (ram,0x00010adc79c4) */
/* WARNING: Removing unreachable block (ram,0x00010adc79c8) */
/* WARNING: Removing unreachable block (ram,0x00010adc79d0) */
/* WARNING: Removing unreachable block (ram,0x00010adc79d8) */
/* WARNING: Removing unreachable block (ram,0x00010adc79e4) */
/* WARNING: Removing unreachable block (ram,0x00010adc79ec) */
/* WARNING: Removing unreachable block (ram,0x00010adc79f4) */
/* WARNING: Removing unreachable block (ram,0x00010adc79f8) */

void FUN_10adc78dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_48;
  
  lVar6 = *(long *)(param_2 + 0x70);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  FUN_10adbd3d0(param_2 + 0x170,param_2,lVar6 + 0x10,lVar6 + 0x1c);
  plVar1 = puVar4 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar5);
        goto LAB_10adc79a4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10adc79a4:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adc7a4c; end: 10adc7b27;  */

void FUN_10adc7a4c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110c74878;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 1) * -0x5555555555555555;
    if (0x2aaaaaaaaaaaaaaa < uVar4) {
      FUN_10adc7e48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10adc7b04);
      (*pcVar2)();
    }
    FUN_10adc7e5c();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_3 * 6;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10adc7b28; end: 10adc7c1b;  */

void FUN_10adc7b28(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = *(undefined4 **)(param_1 + 0x48);
  if (puVar4 < *(undefined4 **)(param_1 + 0x50)) {
    uVar1 = *param_2;
    *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(param_2 + 1);
    *puVar4 = uVar1;
    lVar8 = (long)puVar4 + 6;
  }
  else {
    lVar8 = (long)puVar4 - *(long *)(param_1 + 0x40);
    uVar5 = (lVar8 >> 1) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaaa < uVar5) {
      FUN_10adc7e48();
      lVar8 = *(long *)(param_1 + 0x48);
      if ((long)(int)param_2 + 1 != (lVar8 - *(long *)(param_1 + 0x40) >> 1) * -0x5555555555555555)
      {
        puVar4 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)(int)param_2 * 6);
        uVar1 = *(undefined4 *)(lVar8 + -6);
        *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(lVar8 + -2);
        *puVar4 = uVar1;
        lVar8 = *(long *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = lVar8 + -6;
      return;
    }
    lVar3 = (long)*(undefined4 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40) >> 1;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x1555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar6 = 0x2aaaaaaaaaaaaaaa;
    }
    puVar2 = param_2;
    FUN_10adc7e5c();
    puVar4 = (undefined4 *)(uVar6 + lVar8);
    uVar1 = *param_2;
    *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(param_2 + 1);
    *puVar4 = uVar1;
    lVar8 = (long)puVar4 + 6;
    lVar7 = (long)puVar4 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar7);
    lVar3 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar7;
    *(long *)(param_1 + 0x48) = lVar8;
    *(ulong *)(param_1 + 0x50) = uVar6 + (long)puVar2 * 6;
    if (lVar3 != 0) {
      __ZdlPv();
    }
  }
  *(long *)(param_1 + 0x48) = lVar8;
  return;
}



/* Entry: 10adc7c1c; end: 10adc7c6b;  */

void FUN_10adc7c1c(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if ((long)param_2 + 1 != (lVar2 - *(long *)(param_1 + 0x40) >> 1) * -0x5555555555555555) {
    puVar3 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)param_2 * 6);
    uVar1 = *(undefined4 *)(lVar2 + -6);
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(lVar2 + -2);
    *puVar3 = uVar1;
    lVar2 = *(long *)(param_1 + 0x48);
  }
  *(long *)(param_1 + 0x48) = lVar2 + -6;
  return;
}



/* Entry: 10adc7c6c; end: 10adc7ce3;  */

undefined8 * FUN_10adc7c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74878;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10adc7ce4; end: 10adc7e47;  */

void FUN_10adc7ce4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001098bb7cc(&lStack_a0,
                      (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 1) *
                      -0x5555555555555555);
  lVar2 = lStack_98 - lStack_a0;
  if (lVar2 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e514038,0x1b,*(long *)(param_1 + 8) + lVar4,2,1);
      *(int *)(lStack_a0 + lVar5 * 4) = (int)plVar1;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 6;
    } while (lVar2 >> 2 != lVar5);
  }
  pcStack_88 = FUN_10adc7e9c;
  appuStack_80[0] = &PTR_DAT_110c748a8;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar2 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar3 < (undefined *)0x2aaaaaaaaaaaaaab) {
    __Znwm((long)puVar3 * 6);
    return;
  }
  func_0x000104c4f740();
  return;
}



/* Entry: 10adc7e48; end: 10adc7e5b;  */

void FUN_10adc7e48(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined *)0x2aaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 6);
    return;
  }
  func_0x000104c4f740();
  return;
}



/* Entry: 10adc7e5c; end: 10adc7e9b;  */

void FUN_10adc7e5c(ulong param_1)

{
  if (param_1 < 0x2aaaaaaaaaaaaaab) {
    __Znwm(param_1 * 6);
    return;
  }
  func_0x000104c4f740();
  return;
}



/* Entry: 10adc7e9c; end: 10adc7ef3;  */

void FUN_10adc7e9c(void)

{
  return;
}



/* Entry: 10adc7ef4; end: 10adc7fe3;  */

void FUN_10adc7ef4(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  uStack_38 = *(uint *)(param_2 + 0x1c);
  uStack_34 = *(undefined2 *)(param_2 + 0x20);
  func_0x00010ad58448(&uStack_38,param_3 + 0x1c);
  if (((((uStack_38 & 0xff) == (uint)*(byte *)(param_2 + 0x1c)) &&
       (uStack_38._1_1_ == *(char *)(param_2 + 0x1d))) &&
      (uStack_38._2_1_ == *(char *)(param_2 + 0x1e))) &&
     (((uStack_38._3_1_ == *(char *)(param_2 + 0x1f) &&
       ((char)uStack_34 == *(char *)(param_2 + 0x20))) &&
      (uStack_34._1_1_ == *(char *)(param_2 + 0x21))))) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_3c = *(undefined4 *)(param_2 + lVar1);
  }
  else {
    uStack_3c = 0x40000000;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_3c,&uStack_38,1);
  return;
}



/* Entry: 10adc7fe4; end: 10adc8057;  */

void FUN_10adc7fe4(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110c748f0;
  param_1[1] = &UNK_110c748c0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  return;
}



/* Entry: 10adc8058; end: 10adc810f;  */

void FUN_10adc8058(long param_1,long *param_2,ulong param_3,undefined4 *param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lStack_40;
  long *plStack_38;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  plStack_38 = param_2;
  func_0x0001098af634(&lStack_40,*param_4);
  if ((char)plVar3[3] != '\x01') {
    return;
  }
  uVar1 = (int)param_3 >> 0x1d;
  if (uVar1 == 1) {
    lVar4 = param_2[3];
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      param_2 = param_2 + 6;
      goto LAB_10adc80cc;
    }
    lVar4 = *param_2;
  }
  param_2 = (long *)(lVar4 + (param_3 & 0x1fffffff) * 8);
LAB_10adc80cc:
  puVar2 = (undefined8 *)0x1137ed210;
  if (*param_2 != -1) {
    puVar2 = (undefined8 *)(param_1 + *param_2);
  }
  puVar5 = *(undefined8 **)(*plVar3 + *(long *)(param_6 + 0x10) * 8);
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = *puVar5;
  }
  *puVar2 = uVar6;
  return;
}



/* Entry: 10adc8110; end: 10adc8133;  */

void FUN_10adc8110(void)

{
  return;
}



/* Entry: 10adc8134; end: 10adc818b;  */

char * FUN_10adc8134(char *param_1)

{
  long *plVar1;
  
  if (*param_1 == '\x01') {
    plVar1 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,0x200);
    *param_1 = (char)plVar1;
  }
  FUN_10adc7198(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 8);
  return param_1;
}



/* Entry: 10adc818c; end: 10adc8243;  */

undefined8 * FUN_10adc818c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74998;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  _objc_destroyWeak(param_1 + 5);
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adc8244; end: 10adc8537;  */

/* WARNING: Removing unreachable block (ram,0x00010adc8484) */
/* WARNING: Removing unreachable block (ram,0x00010adc8488) */
/* WARNING: Removing unreachable block (ram,0x00010adc8490) */
/* WARNING: Removing unreachable block (ram,0x00010adc8498) */
/* WARNING: Removing unreachable block (ram,0x00010adc849c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc8244(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x200;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110c749d8;
  func_0x0001098bae4c(puVar5,&UNK_10e51453c,0x20,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x36,in_x7,0,0
                      ,&uStack_60);
  plVar1 = plStack_58;
  param_2 = param_2 + 0x28;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110c749d8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110c74a28;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110c74ae0;
  puVar5[0x25] = &UNK_110c74ab0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110c74ae0;
  puVar5[0x2b] = &UNK_110c74ab0;
  *(undefined1 *)(puVar5 + 0x35) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    lVar7 = param_2;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    lVar7 = 0;
    if (!bVar4) {
      lVar7 = param_2;
    }
  }
  *(undefined2 *)(puVar5 + 0x37) = 0;
  puVar5[0x3a] = 0x10adc917c;
  puVar5[0x3b] = &UNK_110c74b40;
  puVar5[0x3c] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x36] = &PTR_DAT_110c74b20;
  if ((!bVar4) && (*(char *)(*(long *)(lVar7 + 0x18) + 8) == '\x01')) {
    puVar5[0x3f] = lVar7 + 0x10;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_2 + _DAT_112784578);
    lVar6 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    puVar5[0x30] = uVar8;
    _objc_initWeak(puVar5 + 0x31,lVar6);
    puVar5[0x33] = 0;
    puVar5[0x34] = 0;
    puVar5[0x32] = puVar5 + 0x33;
    _objc_release(lVar6);
    _objc_release(param_2);
    *(undefined1 *)(puVar5 + 0x35) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10adc8538; end: 10adc8603;  */

undefined8 * FUN_10adc8538(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c749d8;
  FUN_10adc9274(param_1 + 0x30);
  func_0x0001092bc814(param_1 + 0x2e);
  func_0x0001092bc814(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110c74a28;
  func_0x00010adc8fb4(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10adc8604; end: 10adc8607;  */

void FUN_10adc8604(void)

{
  return;
}



/* Entry: 10adc8608; end: 10adc872f;  */

undefined8 FUN_10adc8608(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puStack_40;
  long *plStack_38;
  
  lVar6 = param_1 + 0x150;
  if (*(long *)(param_1 + 0x70) != param_1 + 0x120) {
    lVar6 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar6;
  func_0x00010967fe08(lVar6 + 0x20);
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10adc8e84();
  plVar5 = (long *)0x20;
  puStack_40 = puVar4;
  __Znwm();
  *plVar5 = (long)&PTR_FUN_110c74b88;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = (long)puVar4;
  plStack_38 = plVar5;
  func_0x00010967fda4(lVar6 + 0x20,&puStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return 1;
}



/* Entry: 10adc8730; end: 10adc88a3;  */

/* WARNING: Removing unreachable block (ram,0x00010adc881c) */
/* WARNING: Removing unreachable block (ram,0x00010adc8820) */
/* WARNING: Removing unreachable block (ram,0x00010adc8828) */
/* WARNING: Removing unreachable block (ram,0x00010adc8830) */
/* WARNING: Removing unreachable block (ram,0x00010adc883c) */
/* WARNING: Removing unreachable block (ram,0x00010adc8844) */
/* WARNING: Removing unreachable block (ram,0x00010adc884c) */
/* WARNING: Removing unreachable block (ram,0x00010adc8850) */

void FUN_10adc8730(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_48;
  
  lVar7 = *(long *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  FUN_10adc17f8(param_2 + 0x180,param_2,lVar7 + 0x10,uVar6);
  plVar1 = puVar4 + 2;
  do {
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar5);
        goto LAB_10adc87fc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10adc87fc:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adc88a4; end: 10adc89ff;  */

void FUN_10adc88a4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_110c74a68;
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar6 = *(long **)(param_2 + 0x40);
  plVar1 = *(long **)(param_2 + 0x48);
  lVar2 = (long)plVar1 - (long)plVar6;
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)((lVar2 >> 3) * -0x5555555555555555);
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar5) {
      FUN_10adc8e2c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adc89d0);
      (*pcVar3)();
    }
    FUN_10adc8e40();
    puVar4[1] = puVar5;
    puVar4[2] = puVar5;
    puVar4[3] = puVar5 + param_3 * 3;
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    uStack_68 = 0;
    puStack_80 = puVar4 + 1;
    puStack_60 = puVar5;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      plVar7 = plVar6 + 3;
      puStack_58 = puVar5;
      FUN_10adc8e84(puVar5,*plVar6,plVar6[1],(plVar6[1] - *plVar6 >> 3) * -0x71c71c71c71c71c7);
      puVar5 = puStack_58 + 3;
      plVar6 = plVar7;
    } while (plVar7 != plVar1);
    uStack_68 = 1;
    puStack_58 = puVar5;
    FUN_10adc8f50(&puStack_80);
    puVar4[2] = puVar5;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10adc8a00; end: 10adc8bc3;  */

void FUN_10adc8a00(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  puVar9 = *(undefined8 **)(param_1 + 0x48);
  if (puVar9 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    uVar13 = *param_2;
    puVar9[1] = param_2[1];
    *puVar9 = uVar13;
    puVar9[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar9 = puVar9 + 3;
  }
  else {
    plVar11 = (long *)(param_1 + 0x40);
    lVar10 = (long)puVar9 - *plVar11;
    uVar5 = (lVar10 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar5) {
      FUN_10adc8e2c();
      lVar10 = *(long *)(param_1 + 0x48);
      if ((long)(int)param_2 + 1 != (lVar10 - *(long *)(param_1 + 0x40) >> 3) * -0x5555555555555555)
      {
        plVar11 = (long *)(*(long *)(param_1 + 0x40) + (long)(int)param_2 * 0x18);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        lVar7 = *(long *)(lVar10 + -0x18);
        plVar11[1] = *(long *)(lVar10 + -0x10);
        *plVar11 = lVar7;
        plVar11[2] = *(long *)(lVar10 + -8);
        *(undefined8 *)(lVar10 + -0x18) = 0;
        *(undefined8 *)(lVar10 + -0x10) = 0;
        *(undefined8 *)(lVar10 + -8) = 0;
        lVar10 = *(long *)(param_1 + 0x48);
      }
      lVar7 = *(long *)(lVar10 + -0x18);
      if (lVar7 != 0) {
        *(long *)(lVar10 + -0x10) = lVar7;
        __ZdlPv();
      }
      *(long **)(param_1 + 0x48) = (long *)(lVar10 + -0x18);
      return;
    }
    lVar7 = (long)*(undefined8 **)(param_1 + 0x50) - *plVar11 >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = param_2;
      FUN_10adc8e40();
    }
    puVar1 = (undefined8 *)(uVar8 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar13 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar9 = puVar1 + 3;
    plVar12 = *(long **)(param_1 + 0x40);
    plVar3 = *(long **)(param_1 + 0x48);
    plVar2 = (long *)((long)puVar1 + ((long)plVar12 - (long)plVar3));
    pplStack_78 = &plStack_60;
    pplStack_70 = &plStack_58;
    plStack_58 = plVar2;
    plVar6 = plVar12;
    plStack_80 = plVar11;
    plStack_60 = plVar2;
    if (plVar3 == plVar12) {
      uStack_68 = 1;
    }
    else {
      do {
        *plStack_58 = 0;
        plStack_58[1] = 0;
        plStack_58[2] = 0;
        lVar10 = *plVar6;
        plStack_58[1] = plVar6[1];
        *plStack_58 = lVar10;
        plStack_58[2] = plVar6[2];
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar6 = plVar6 + 3;
        plStack_58 = plStack_58 + 3;
      } while (plVar6 != plVar3);
      uStack_68 = 1;
      do {
        if (*plVar12 != 0) {
          plVar12[1] = *plVar12;
          __ZdlPv();
        }
        plVar12 = plVar12 + 3;
      } while (plVar12 != plVar3);
    }
    FUN_10adc8f50(&plStack_80);
    lVar10 = *(long *)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = plVar2;
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    *(ulong *)(param_1 + 0x50) = uVar8 + (long)puVar4 * 0x18;
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  *(undefined8 **)(param_1 + 0x48) = puVar9;
  return;
}



/* Entry: 10adc8bc4; end: 10adc8c67;  */

void FUN_10adc8bc4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if ((long)param_2 + 1 != (lVar2 - *(long *)(param_1 + 0x40) >> 3) * -0x5555555555555555) {
    plVar3 = (long *)(*(long *)(param_1 + 0x40) + (long)param_2 * 0x18);
    if (*plVar3 != 0) {
      plVar3[1] = *plVar3;
      __ZdlPv();
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
    }
    lVar1 = *(long *)(lVar2 + -0x18);
    plVar3[1] = *(long *)(lVar2 + -0x10);
    *plVar3 = lVar1;
    plVar3[2] = *(long *)(lVar2 + -8);
    *(undefined8 *)(lVar2 + -0x18) = 0;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    *(undefined8 *)(lVar2 + -8) = 0;
    lVar2 = *(long *)(param_1 + 0x48);
  }
  lVar1 = *(long *)(lVar2 + -0x18);
  if (lVar1 != 0) {
    *(long *)(lVar2 + -0x10) = lVar1;
    __ZdlPv();
  }
  *(long **)(param_1 + 0x48) = (long *)(lVar2 + -0x18);
  return;
}



/* Entry: 10adc8c68; end: 10adc8cc7;  */

undefined8 * FUN_10adc8c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74a68;
  func_0x00010adc8fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10adc8cc8; end: 10adc8e2b;  */

void FUN_10adc8cc8(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  code **ppcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  plVar5 = &lStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001098bb7cc(&lStack_a0,
                      (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) *
                      -0x5555555555555555);
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      param_4 = *(long *)(param_1 + 8) + lVar6;
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4a308c,0x22,param_4,2,1);
      *(int *)(lStack_a0 + lVar7 * 4) = (int)plVar2;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar3 >> 2 != lVar7);
  }
  pcStack_88 = FUN_10adc9028;
  appuStack_80[0] = &PTR_DAT_110c74a98;
  ppcVar4 = &pcStack_88;
  func_0x0001098bb6d0(*param_2 + 0x18);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (plVar2 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)plVar2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    if (0x38e38e38e38e38e < param_4) {
      FUN_10adc8f3c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10adc8f20);
      (*pcVar1)();
    }
    lVar7 = param_4 * 0x48;
    __Znwm();
    *plVar2 = lVar7;
    plVar2[1] = lVar7;
    plVar2[2] = lVar7 + param_4 * 0x48;
    lVar3 = (long)plVar5 - (long)ppcVar4;
    if (lVar3 != 0) {
      _memcpy(lVar7,ppcVar4,lVar3);
    }
    plVar2[1] = lVar7 + lVar3;
  }
  return;
}



/* Entry: 10adc8e2c; end: 10adc8e3f;  */

void FUN_10adc8e2c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (plVar2 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)plVar2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    if (0x38e38e38e38e38e < param_4) {
      FUN_10adc8f3c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10adc8f20);
      (*pcVar1)();
    }
    lVar3 = param_4 * 0x48;
    __Znwm();
    *plVar2 = lVar3;
    plVar2[1] = lVar3;
    plVar2[2] = lVar3 + param_4 * 0x48;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar3,param_2,param_3);
    }
    plVar2[1] = lVar3 + param_3;
  }
  return;
}



/* Entry: 10adc8e40; end: 10adc8e83;  */

void FUN_10adc8e40(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    if (0x38e38e38e38e38e < param_4) {
      FUN_10adc8f3c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10adc8f20);
      (*pcVar1)();
    }
    lVar2 = param_4 * 0x48;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 0x48;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 10adc8e84; end: 10adc8f3b;  */

void FUN_10adc8e84(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (0x38e38e38e38e38e < param_4) {
      FUN_10adc8f3c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10adc8f20);
      (*pcVar1)();
    }
    lVar2 = param_4 * 0x48;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 0x48;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 10adc8f3c; end: 10adc8f4f;  */

undefined * FUN_10adc8f3c(void)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((puVar2[0x18] & 1) == 0) {
    plVar3 = (long *)**(undefined8 **)(puVar2 + 8);
    plVar4 = (long *)**(long **)(puVar2 + 0x10);
    while (plVar1 = plVar4, plVar1 != plVar3) {
      plVar4 = plVar1 + -3;
      if (*plVar4 != 0) {
        plVar1[-2] = *plVar4;
        __ZdlPv();
      }
    }
  }
  return puVar2;
}



/* Entry: 10adc8f50; end: 10adc9027;  */

long FUN_10adc8f50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10adc9028; end: 10adc9093;  */

void FUN_10adc9028(void)

{
  return;
}



/* Entry: 10adc9094; end: 10adc911f;  */

void FUN_10adc9094(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = **(long **)(param_2 + 0x20);
  lVar2 = (*(long **)(param_2 + 0x20))[1];
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10adc8e84(&uStack_38,lVar1,lVar2,(lVar2 - lVar1 >> 3) * -0x71c71c71c71c71c7);
  if (uStack_38 != 0) {
    __ZdlPv();
  }
  uStack_38 = CONCAT44(uStack_38._4_4_,0x40000000);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_38,(long)&uStack_38 + 4,1);
  return;
}



/* Entry: 10adc9120; end: 10adc9197;  */

void FUN_10adc9120(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110c74ae0;
  param_1[1] = &UNK_110c74ab0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10adc9198; end: 10adc924f;  */

void FUN_10adc9198(long param_1,long *param_2,ulong param_3,undefined4 *param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lStack_40;
  long *plStack_38;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  plStack_38 = param_2;
  func_0x0001098af634(&lStack_40,*param_4);
  if ((char)plVar3[3] != '\x01') {
    return;
  }
  uVar1 = (int)param_3 >> 0x1d;
  if (uVar1 == 1) {
    lVar4 = param_2[3];
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      param_2 = param_2 + 6;
      goto LAB_10adc920c;
    }
    lVar4 = *param_2;
  }
  param_2 = (long *)(lVar4 + (param_3 & 0x1fffffff) * 8);
LAB_10adc920c:
  puVar2 = (undefined8 *)0x1137ed218;
  if (*param_2 != -1) {
    puVar2 = (undefined8 *)(param_1 + *param_2);
  }
  puVar5 = *(undefined8 **)(*plVar3 + *(long *)(param_6 + 0x10) * 8);
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = *puVar5;
  }
  *puVar2 = uVar6;
  return;
}



/* Entry: 10adc9250; end: 10adc9273;  */

void FUN_10adc9250(void)

{
  return;
}



/* Entry: 10adc9274; end: 10adc92f3;  */

undefined8 * FUN_10adc9274(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    func_0x000107c28478(param_1 + 2,param_1[3]);
    _objc_destroyWeak(param_1 + 1);
    _objc_release(*param_1);
  }
  return param_1;
}



/* Entry: 10adc92f4; end: 10adc92f7;  */

void FUN_10adc92f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adc92f8; end: 10adc930b;  */

void FUN_10adc92f8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adc930c; end: 10adc9313;  */

void FUN_10adc930c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10adc9314; end: 10adc934b;  */

undefined8 FUN_10adc9314(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110c74bc8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10adc934c; end: 10adc934f;  */

void FUN_10adc934c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adc9350; end: 10adc9407;  */

undefined8 * FUN_10adc9350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74be8;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  _objc_destroyWeak(param_1 + 5);
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adc9408; end: 10adc9683;  */

/* WARNING: Removing unreachable block (ram,0x00010adc9618) */
/* WARNING: Removing unreachable block (ram,0x00010adc961c) */
/* WARNING: Removing unreachable block (ram,0x00010adc9624) */
/* WARNING: Removing unreachable block (ram,0x00010adc962c) */
/* WARNING: Removing unreachable block (ram,0x00010adc9630) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc9408(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110c74c28;
  func_0x0001098bae4c(puVar5,&UNK_10e514854,0x19,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x2e,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  param_2 = param_2 + 0x28;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110c74c28;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110be9a58;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110c74c98;
  puVar5[0x25] = &UNK_110c74c68;
  *(undefined1 *)((long)puVar5 + 0x13c) = 0;
  *(undefined1 *)((long)puVar5 + 0x13f) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110c74c98;
  puVar5[0x29] = &UNK_110c74c68;
  *(undefined1 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)((long)puVar5 + 0x15f) = 0;
  *(undefined1 *)(puVar5 + 0x2d) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    lVar7 = param_2;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    lVar7 = 0;
    if (!bVar4) {
      lVar7 = param_2;
    }
  }
  *(undefined2 *)(puVar5 + 0x2f) = 0;
  puVar5[0x32] = 0x10adc9a84;
  puVar5[0x33] = &UNK_110be9ae0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x2e] = &PTR_DAT_110c74cd8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar7 + 0x18) + 8) == '\x01')) {
    puVar5[0x37] = lVar7 + 0x10;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_2 + _DAT_11278457c);
    _objc_retain(uVar8);
    _objc_release(param_2);
    puVar5[0x2c] = uVar8;
    *(undefined1 *)(puVar5 + 0x2d) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10adc9684; end: 10adc9757;  */

undefined8 * FUN_10adc9684(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c74c28;
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    _objc_release(param_1[0x2c]);
  }
  param_1[0x19] = &PTR_FUN_110be9a58;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10adc9758; end: 10adc975b;  */

void FUN_10adc9758(void)

{
  return;
}



/* Entry: 10adc975c; end: 10adc97ef;  */

bool FUN_10adc975c(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x140;
  if (lVar5 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  if (*(char *)(lVar1 + 0x1f) == '\x01') {
    *(undefined1 *)(lVar1 + 0x1f) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010adc9aa0(uVar3,*(undefined8 *)(param_1 + 0x110));
  bVar2 = true;
  *(undefined1 *)(lVar1 + 0x1f) = 1;
  uVar4 = (uint)uVar3;
  *(short *)(lVar1 + 0x1c) = (short)uVar3;
  *(char *)(lVar1 + 0x1e) = (char)((ulong)uVar3 >> 0x10);
  if (((lVar5 != 0) && ((uint)*(byte *)(lVar5 + 0x1c) == (uVar4 & 0xff))) &&
     ((uint)*(byte *)(lVar5 + 0x1d) == (uVar4 >> 8 & 0xff))) {
    bVar2 = (uint)*(byte *)(lVar5 + 0x1e) != (uVar4 & 0xff0000) >> 0x10;
  }
  return bVar2;
}



/* Entry: 10adc97f0; end: 10adc995f;  */

/* WARNING: Removing unreachable block (ram,0x00010adc98d8) */
/* WARNING: Removing unreachable block (ram,0x00010adc98dc) */
/* WARNING: Removing unreachable block (ram,0x00010adc98e4) */
/* WARNING: Removing unreachable block (ram,0x00010adc98ec) */
/* WARNING: Removing unreachable block (ram,0x00010adc98f8) */
/* WARNING: Removing unreachable block (ram,0x00010adc9900) */
/* WARNING: Removing unreachable block (ram,0x00010adc9908) */
/* WARNING: Removing unreachable block (ram,0x00010adc990c) */

void FUN_10adc97f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_48;
  
  lVar6 = *(long *)(param_2 + 0x70);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  FUN_10adbfef0(param_2 + 0x160,param_2,lVar6 + 0x10,lVar6 + 0x1c);
  plVar1 = puVar4 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar5);
        goto LAB_10adc98b8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10adc98b8:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adc9960; end: 10adc9997;  */

void FUN_10adc9960(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110c74c98;
  *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10adc9998; end: 10adc9a2b;  */

void FUN_10adc9998(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1c) & (*(byte *)(param_2 + 0x1c) ^ 0xff)) == 0 &&
       (*(byte *)(param_3 + 0x1d) | *(byte *)(param_2 + 0x1d)) == *(byte *)(param_2 + 0x1d)) &&
     ((*(byte *)(param_3 + 0x1e) & (*(byte *)(param_2 + 0x1e) ^ 0xff)) == 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
  }
  else {
    uStack_14 = 0x40000000;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10adc9a2c; end: 10adc9aef;  */

void FUN_10adc9a2c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110c74c98;
  param_1[1] = &UNK_110c74c68;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  return;
}



/* Entry: 10adc9af0; end: 10adc9ba7;  */

undefined8 * FUN_10adc9af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74d08;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  _objc_destroyWeak(param_1 + 5);
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adc9ba8; end: 10adc9e1b;  */

/* WARNING: Removing unreachable block (ram,0x00010adc9db0) */
/* WARNING: Removing unreachable block (ram,0x00010adc9db4) */
/* WARNING: Removing unreachable block (ram,0x00010adc9dbc) */
/* WARNING: Removing unreachable block (ram,0x00010adc9dc4) */
/* WARNING: Removing unreachable block (ram,0x00010adc9dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adc9ba8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110c74d48;
  func_0x0001098bae4c(puVar5,&UNK_10e5149c0,0x19,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x2e,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  param_2 = param_2 + 0x28;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110c74d48;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110be9c88;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110c74db8;
  puVar5[0x25] = &UNK_110c74d88;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110c74db8;
  puVar5[0x29] = &UNK_110c74d88;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 0x2d) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    lVar7 = param_2;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    lVar7 = 0;
    if (!bVar4) {
      lVar7 = param_2;
    }
  }
  *(undefined2 *)(puVar5 + 0x2f) = 0;
  puVar5[0x32] = 0x10adca1d0;
  puVar5[0x33] = &UNK_110be9d10;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x2e] = &PTR_DAT_110c74df8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar7 + 0x18) + 8) == '\x01')) {
    puVar5[0x37] = lVar7 + 0x10;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_2 + _DAT_112784580);
    _objc_retain(uVar8);
    _objc_release(param_2);
    puVar5[0x2c] = uVar8;
    *(undefined1 *)(puVar5 + 0x2d) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10adc9e1c; end: 10adc9eef;  */

undefined8 * FUN_10adc9e1c(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c74d48;
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    _objc_release(param_1[0x2c]);
  }
  param_1[0x19] = &PTR_FUN_110be9c88;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10adc9ef0; end: 10adc9f67;  */

void FUN_10adc9ef0(void)

{
  return;
}



/* Entry: 10adc9f68; end: 10adca0d7;  */

/* WARNING: Removing unreachable block (ram,0x00010adca050) */
/* WARNING: Removing unreachable block (ram,0x00010adca054) */
/* WARNING: Removing unreachable block (ram,0x00010adca05c) */
/* WARNING: Removing unreachable block (ram,0x00010adca064) */
/* WARNING: Removing unreachable block (ram,0x00010adca070) */
/* WARNING: Removing unreachable block (ram,0x00010adca078) */
/* WARNING: Removing unreachable block (ram,0x00010adca080) */
/* WARNING: Removing unreachable block (ram,0x00010adca084) */

void FUN_10adc9f68(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_48;
  
  lVar6 = *(long *)(param_2 + 0x70);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  FUN_10adbe104(param_2 + 0x160,param_2,lVar6 + 0x10,lVar6 + 0x1c);
  plVar1 = puVar4 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar5);
        goto LAB_10adca030;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10adca030:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adca0d8; end: 10adca10f;  */

void FUN_10adca0d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110c74db8;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10adca110; end: 10adca17b;  */

void FUN_10adca110(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_14;
  
  if ((*(byte *)(param_3 + 0x1c) & (*(byte *)(param_2 + 0x1c) ^ 0xff) & 1) == 0) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
  }
  else {
    uStack_14 = 0x40000000;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10adca17c; end: 10adca1eb;  */

void FUN_10adca17c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110c74db8;
  param_1[1] = &UNK_110c74d88;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10adca1ec; end: 10adca2a3;  */

undefined8 * FUN_10adca1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74e28;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  _objc_destroyWeak(param_1 + 5);
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adca2a4; end: 10adca517;  */

/* WARNING: Removing unreachable block (ram,0x00010adca4ac) */
/* WARNING: Removing unreachable block (ram,0x00010adca4b0) */
/* WARNING: Removing unreachable block (ram,0x00010adca4b8) */
/* WARNING: Removing unreachable block (ram,0x00010adca4c0) */
/* WARNING: Removing unreachable block (ram,0x00010adca4c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adca2a4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110c74e68;
  func_0x0001098bae4c(puVar5,&UNK_10e514b2c,0x1d,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x2e,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  param_2 = param_2 + 0x28;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110c74e68;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110be9b48;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110c74ed8;
  puVar5[0x25] = &UNK_110c74ea8;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110c74ed8;
  puVar5[0x29] = &UNK_110c74ea8;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 0x2d) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    lVar7 = param_2;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    lVar7 = 0;
    if (!bVar4) {
      lVar7 = param_2;
    }
  }
  *(undefined2 *)(puVar5 + 0x2f) = 0;
  puVar5[0x32] = FUN_10adca87c;
  puVar5[0x33] = &UNK_110be9bd0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x2e] = &PTR_FUN_110c74f18;
  if ((!bVar4) && (*(char *)(*(long *)(lVar7 + 0x18) + 8) == '\x01')) {
    puVar5[0x37] = lVar7 + 0x10;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_2 + _DAT_112784584);
    _objc_retain(uVar8);
    _objc_release(param_2);
    puVar5[0x2c] = uVar8;
    *(undefined1 *)(puVar5 + 0x2d) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10adca518; end: 10adca5eb;  */

undefined8 * FUN_10adca518(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c74e68;
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    _objc_release(param_1[0x2c]);
  }
  param_1[0x19] = &PTR_FUN_110be9b48;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10adca5ec; end: 10adca61b;  */

void FUN_10adca5ec(void)

{
  return;
}



/* Entry: 10adca61c; end: 10adca78b;  */

/* WARNING: Removing unreachable block (ram,0x00010adca704) */
/* WARNING: Removing unreachable block (ram,0x00010adca708) */
/* WARNING: Removing unreachable block (ram,0x00010adca710) */
/* WARNING: Removing unreachable block (ram,0x00010adca718) */
/* WARNING: Removing unreachable block (ram,0x00010adca724) */
/* WARNING: Removing unreachable block (ram,0x00010adca72c) */
/* WARNING: Removing unreachable block (ram,0x00010adca734) */
/* WARNING: Removing unreachable block (ram,0x00010adca738) */

void FUN_10adca61c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  lVar6 = *(long *)(param_2 + 0x70);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_50 = puVar4;
  FUN_10adc2a90(param_2 + 0x160,param_2,lVar6 + 0x10,&uStack_41);
  plVar1 = puVar4 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar5);
        goto LAB_10adca6e4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10adca6e4:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_50,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adca78c; end: 10adca7c3;  */

void FUN_10adca78c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110c74ed8;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10adca7c4; end: 10adca813;  */

void FUN_10adca7c4(undefined8 *param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_14;
  
  lVar1 = 0x10;
  if (param_4 != 0) {
    lVar1 = 0x18;
  }
  uStack_14 = *(undefined4 *)(param_2 + lVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10adca814; end: 10adca843;  */

void FUN_10adca814(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110c74ed8;
  param_1[1] = &UNK_110c74ea8;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10adca844; end: 10adca87b;  */

void FUN_10adca844(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_11;
  
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 0x48))(param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11)
    ;
  }
  return;
}



/* Entry: 10adca87c; end: 10adca897;  */

void FUN_10adca87c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0x10a4fc47c;
  param_1[1] = &PTR_FUN_110be9bf0;
  param_1[2] = param_2;
  return;
}



/* Entry: 10adca898; end: 10adca93f;  */

undefined8 * FUN_10adca898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74f48;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adca940; end: 10adcab93;  */

/* WARNING: Removing unreachable block (ram,0x00010adcab28) */
/* WARNING: Removing unreachable block (ram,0x00010adcab2c) */
/* WARNING: Removing unreachable block (ram,0x00010adcab34) */
/* WARNING: Removing unreachable block (ram,0x00010adcab3c) */
/* WARNING: Removing unreachable block (ram,0x00010adcab40) */

void FUN_10adca940(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110c74f88;
  func_0x0001098bae4c(puVar5,&UNK_10e514ca8,0x1d,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110c74f88;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110c74fd8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110c75090;
  puVar5[0x25] = &UNK_110c75060;
  *(undefined1 *)((long)puVar5 + 0x13c) = 0;
  *(undefined1 *)((long)puVar5 + 0x13e) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110c75090;
  puVar5[0x29] = &UNK_110c75060;
  *(undefined1 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)((long)puVar5 + 0x15e) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)((long)puVar5 + 0x164) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = 0x10adcb330;
  puVar5[0x32] = &UNK_110be9a10;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_DAT_110c750d0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined4 *)(puVar5 + 0x2c) = 0xffffffff;
    *(undefined1 *)((long)puVar5 + 0x164) = 1;
  }
  *param_1 = puVar5;
  return;
}


