/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b96f94c; end: 10b96f97b;  */

void FUN_10b96f94c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b96f97c; end: 10b96fa93;  */

void FUN_10b96f97c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *aplStack_70 [3];
  char cStack_58;
  undefined1 auStack_50 [16];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c252ee0(param_2);
  uVar2 = param_2;
  func_0x00010bfe02c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b980484(auStack_50);
  uVar3 = param_2;
  func_0x00010bf1e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b96ef44(aplStack_70);
  FUN_10b96fa94(param_1,uVar1,auStack_50,aplStack_70);
  if ((cStack_58 == '\x01') && (aplStack_70[0] != (long *)0x0)) {
    (**(code **)(*aplStack_70[0] + 0x18))();
  }
  _objc_release(uVar3);
  FUN_10b9a8d98(auStack_50);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10b96fa94; end: 10b96fadf;  */

undefined4 *
FUN_10b96fa94(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  func_0x00010b9a8fa8(param_1 + 2,param_3);
  FUN_10b9360d4(param_1 + 6,param_4);
  return param_1;
}



/* Entry: 10b96fae0; end: 10b96fba7; -[SCNValdiCoreHTTPResponse initWithStatusCode:headers:body:] */

undefined1 *
FUN_10b96fae0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270c0d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b96fba8; end: 10b96fbaf; -[SCNValdiCoreHTTPResponse statusCode] */

undefined4 FUN_10b96fba8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b96fbb0; end: 10b96fbb7; -[SCNValdiCoreHTTPResponse headers] */

undefined8 FUN_10b96fbb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b96fbb8; end: 10b96fbbf; -[SCNValdiCoreHTTPResponse body] */

undefined8 FUN_10b96fbb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b96fbc0; end: 10b96fbef; -[SCNValdiCoreHTTPResponse .cxx_destruct] */

void FUN_10b96fbc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b96fbf0; end: 10b96fc67; -[SCNValdiCoreJSRuntime initWithCpp:] */

undefined1 * FUN_10b96fbf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270c0d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b970348();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001080d32dc(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b96fc68; end: 10b96fd17; -[SCNValdiCoreJSRuntime pushModuleToMarshaller:path:marshallerHandle:] */

long * FUN_10b96fc68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b9704a0(auStack_40,param_3);
  func_0x000107c30f2c(auStack_48,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40,auStack_48,param_5);
  func_0x00010b97039c();
  FUN_10b8f9a70(auStack_40);
  func_0x00010b970358();
  return plVar1;
}



/* Entry: 10b96fd18; end: 10b96fdbf; -[SCNValdiCoreJSRuntime addModuleUnloadObserver:observer:] */

void FUN_10b96fd18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c30f2c(auStack_38,param_3);
  FUN_10b980484(auStack_48,param_4);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_38,auStack_48);
  FUN_10b9a8d98(auStack_48);
  func_0x00010b970394();
  func_0x00010b970358();
  return;
}



/* Entry: 10b96fdc0; end: 10b96fe13; -[SCNValdiCoreJSRuntime preloadModule:maxDepth:] */

void FUN_10b96fdc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c30f2c(auStack_28,param_3);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_28,param_4);
  func_0x00010b97039c();
  return;
}



/* Entry: 10b96fe14; end: 10b96ffaf; -[SCNValdiCoreJSRuntime preloadModules:maxDepth:] */

void FUN_10b96fe14(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [16];
  long *plStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
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
  plVar3 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_140 = 0;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x0001080d10c8(&uStack_140,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar1 = param_3;
  _objc_retain();
  func_0x00010b970374();
  if (uVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      uVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(ulong *)(lStack_118 + uVar6 * 8);
        _objc_retain(uVar4);
        func_0x000107c30f2c(auStack_128,uVar4);
        func_0x000104bdd2f0(&uStack_140,auStack_128);
        func_0x00010b970394();
        _objc_release();
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
      func_0x00010b970374();
      uVar1 = uVar4;
    } while (uVar4 != 0);
  }
  func_0x00010b970358();
  func_0x00010b970358();
  (**(code **)(*plVar3 + 0x28))(plVar3,&uStack_140,param_4);
  func_0x00010b9703bc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = plVar3;
  func_0x00010b9703bc();
  func_0x00010b9703c4();
  pcStack_148 = FUN_10b96ffb0;
  plVar2 = (long *)plVar2[3];
  plStack_160 = plVar3;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000107c27f20(auStack_188,param_4);
  (**(code **)(*plVar2 + 0x30))(auStack_170,plVar2,auStack_188);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
  FUN_10b9704f0(auStack_170);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9703b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10b96ffb0; end: 10b970037; -[SCNValdiCoreJSRuntime createNativeObjectsManager:] */

void FUN_10b96ffb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x30))(auStack_30,plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  FUN_10b9704f0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9703b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b970038; end: 10b97007f; -[SCNValdiCoreJSRuntime destroyNativeObjectsManager:] */

void FUN_10b970038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b9704a0(auStack_30,param_3);
  func_0x00010b9703a4(*(undefined8 *)(*plVar1 + 0x38));
  FUN_10b8f9a70(auStack_30);
  return;
}



/* Entry: 10b970080; end: 10b9700d3; -[SCNValdiCoreJSRuntime createWorker] */

void FUN_10b970080(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))(auStack_30);
  FUN_10b97016c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b970368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9700d4; end: 10b97011b; -[SCNValdiCoreJSRuntime runOnJsThread:] */

void FUN_10b9700d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b980484(auStack_30,param_3);
  func_0x00010b9703a4(*(undefined8 *)(*plVar1 + 0x48));
  FUN_10b9a8d98(auStack_30);
  return;
}



/* Entry: 10b97011c; end: 10b97016b;  */

void FUN_10b97011c(undefined8 *param_1,long param_2)

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
        func_0x00010b970348();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b97016c; end: 10b970197;  */

void FUN_10b97016c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b970258();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b970198; end: 10b970213; -[SCNValdiCoreJSRuntime .cxx_destruct] */

void FUN_10b970198(long param_1)

{
  undefined **ppuStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_38 = &PTR_DAT_110d7b0b0;
    func_0x000107c31708(param_1 + 8,&ppuStack_38);
  }
  func_0x0001080d32dc((long *)(param_1 + 0x18));
  func_0x000107c30e34(param_1 + 8);
  return;
}



/* Entry: 10b970214; end: 10b970257; -[SCNValdiCoreJSRuntime .cxx_construct] */

undefined8 * FUN_10b970214(undefined8 *param_1)

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
      func_0x00010b970348();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b970258; end: 10b9702d3;  */

void FUN_10b970258(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d7b0b0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b970348();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b9702d4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b970388();
  func_0x000107c30e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9702d4; end: 10b97033b;  */

void FUN_10b9702d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e1b88;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b970348();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001080d32dc(&uStack_30);
  return;
}



/* Entry: 10b97033c; end: 10b9703cb;  */

void FUN_10b97033c(void)

{
  return;
}



/* Entry: 10b9703cc; end: 10b970443; -[SCNValdiCoreJSRuntimeNativeObjectsManager initWithCpp:] */

undefined1 * FUN_10b9703cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270c0e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b9706cc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b8f9a70(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b970444; end: 10b97049f; -[SCNValdiCoreJSRuntimeNativeObjectsManager getReachableObjectsDescription] */

void FUN_10b970444(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_30);
  FUN_10b980ac4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9706dc();
  FUN_10b9a8d98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9704a0; end: 10b9704ef;  */

void FUN_10b9704a0(undefined8 *param_1,long param_2)

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
        FUN_10b9706cc();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b9704f0; end: 10b97051b;  */

void FUN_10b9704f0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b9705dc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b97051c; end: 10b970597; -[SCNValdiCoreJSRuntimeNativeObjectsManager .cxx_destruct] */

void FUN_10b97051c(long param_1)

{
  undefined **ppuStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_38 = &PTR_DAT_110d7b0c0;
    func_0x000107c31708(param_1 + 8,&ppuStack_38);
  }
  FUN_10b8f9a70((long *)(param_1 + 0x18));
  func_0x000107c30e34(param_1 + 8);
  return;
}



/* Entry: 10b970598; end: 10b9705db; -[SCNValdiCoreJSRuntimeNativeObjectsManager .cxx_construct] */

undefined8 * FUN_10b970598(undefined8 *param_1)

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
      FUN_10b9706cc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b9705dc; end: 10b970657;  */

void FUN_10b9705dc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d7b0c0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b9706cc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b970658);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9706dc();
  func_0x000107c30e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b970658; end: 10b9706cb;  */

void FUN_10b970658(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e1b90;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b9706cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b8f9a70(&uStack_30);
  return;
}



/* Entry: 10b9706cc; end: 10b9706ef;  */

void FUN_10b9706cc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b9706f0; end: 10b970807; -[SCNValdiCoreModuleFactoriesProviderCppProxy createModuleFactories:] */

void FUN_10b9706f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  code *extraout_x9;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_40;
  
  FUN_10b980484(auStack_58,param_3);
  func_0x000107c39f74(&lStack_48);
  (*extraout_x9)();
  FUN_10b9a8d98(auStack_58);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lStack_40 - lStack_48 >> 4)
  ;
  _objc_retainAutoreleasedReturnValue();
  for (lVar3 = lStack_48; lVar3 != lStack_40; lVar3 = lVar3 + 0x10) {
    lVar2 = lVar3;
    FUN_10b970e0c(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010bf51e00(puVar1);
  func_0x000107c39f5c();
  func_0x00010b9470a0(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b970808; end: 10b97080b;  */

void FUN_10b970808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b97080c; end: 10b97081f;  */

void FUN_10b97080c(void)

{
  FUN_10b970bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b970820; end: 10b97082b;  */

long FUN_10b970820(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c39f74();
    func_0x000107c316fc();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b97082c; end: 10b970867;  */

void FUN_10b97082c(void)

{
  func_0x00010b970c0c();
  return;
}



/* Entry: 10b970868; end: 10b970a73;  */

void FUN_10b970868(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  FUN_10b980ac4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b970c00();
  func_0x000107c39f64();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = param_3;
  func_0x00010bf529e0();
  puVar4 = (undefined1 *)0x0;
  if (uVar3 != 0) {
    if (uVar3 >> 0x3c != 0) goto LAB_10b9709f8;
    func_0x000104bd4a70(auStack_d8,uVar3,0,param_1 + 2);
    func_0x000104bd49e8(param_1,auStack_d8);
    puVar4 = auStack_d8;
    func_0x000104bd4af8();
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000107c39f64();
  func_0x00010b970be4();
  if (puVar4 != (undefined1 *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = *(undefined1 **)(lStack_118 + (long)puVar8 * 8);
        _objc_retain(puVar6);
        FUN_10b970d10(auStack_130,puVar6);
        FUN_10b970af8(param_1,auStack_130);
        func_0x0001080d5cb8(auStack_130);
        _objc_release();
        puVar8 = puVar8 + 1;
      } while (puVar8 < puVar4);
      func_0x00010b970be4();
      puVar4 = puVar6;
    } while (puVar6 != (undefined1 *)0x0);
  }
  func_0x000107c39f5c();
  func_0x000107c39f5c();
  func_0x000107c39f5c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
    return;
  }
  ___stack_chk_fail();
LAB_10b9709f8:
  func_0x000108101490();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b970a00);
  (*pcVar1)();
}



/* Entry: 10b970a74; end: 10b970af7;  */

long FUN_10b970a74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c39f74();
    func_0x000107c316fc();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_10b96e14c(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b970af8; end: 10b970b3f;  */

undefined8 * FUN_10b970af8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2 = puVar1 + 2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_10b970b40();
  }
  param_1[1] = puVar2;
  return puVar2 + -2;
}



/* Entry: 10b970b40; end: 10b970bd3;  */

long FUN_10b970b40(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10b947264(param_1,(param_1[1] - *param_1 >> 4) + 1);
  func_0x000104bd4a70(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  func_0x000107c39f74();
  func_0x000104bd49e8();
  lVar2 = param_1[1];
  func_0x000104bd4af8(auStack_48);
  return lVar2;
}



/* Entry: 10b970bd4; end: 10b970c1f;  */

void FUN_10b970bd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b970c20; end: 10b970c6f; -[SCNValdiCoreModuleFactoryCppProxy initWithCpp:] */

undefined1 * FUN_10b970c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270c0f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b9472e0((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b970c70; end: 10b970cbb; -[SCNValdiCoreModuleFactoryCppProxy getModulePath] */

void FUN_10b970c70(long param_1)

{
  undefined1 auStack_28 [8];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_28);
  FUN_10b98101c(auStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b971330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b970cbc; end: 10b970d0f; -[SCNValdiCoreModuleFactoryCppProxy loadModule] */

void FUN_10b970cbc(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_10b980ac4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9712f8();
  FUN_10b9a8d98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b970d10; end: 10b970e0b;  */

void FUN_10b970d10(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126e1ba0;
    _objc_opt_class(PTR_PTR_1126e1ba0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110d7b240;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10b970f38);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c30e30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10b9711c0(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10b9712d8();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b970e0c; end: 10b970e7b;  */

void FUN_10b970e0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1107e3610,&PTR_DAT_110d7b1f8,0);
    if (lVar1 == 0) {
      FUN_10b9711e8(param_1);
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



/* Entry: 10b970e7c; end: 10b970ef7; -[SCNValdiCoreModuleFactoryCppProxy .cxx_destruct] */

void FUN_10b970e7c(long param_1)

{
  undefined **ppuStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_38 = &PTR_DAT_110d7b320;
    func_0x000107c31708(param_1 + 8,&ppuStack_38);
  }
  func_0x0001080d5cb8((long *)(param_1 + 0x18));
  func_0x000107c30e34(param_1 + 8);
  return;
}



/* Entry: 10b970ef8; end: 10b970f37; -[SCNValdiCoreModuleFactoryCppProxy .cxx_construct] */

undefined8 * FUN_10b970ef8(undefined8 *param_1)

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
      FUN_10b9712d8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b970f38; end: 10b97102b;  */

void FUN_10b970f38(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110d7b280;
  puVar1[3] = &PTR_DAT_110d7b300;
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
      FUN_10b9712d8();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110d7b2d0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b9711c0(&uStack_50);
  return;
}



/* Entry: 10b97102c; end: 10b97102f;  */

void FUN_10b97102c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b971030; end: 10b971043;  */

void FUN_10b971030(void)

{
  FUN_10b9711b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b971044; end: 10b97104f;  */

long FUN_10b971044(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7b240;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b971050; end: 10b97108b;  */

void FUN_10b971050(void)

{
  func_0x00010b97133c();
  return;
}



/* Entry: 10b97108c; end: 10b9710db;  */

void FUN_10b97108c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010b971348();
  func_0x00010bfc7a80(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30f2c();
  func_0x00010b9712f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b9710dc; end: 10b97112b;  */

void FUN_10b9710dc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010b971348();
  func_0x00010c09bb60(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  FUN_10b980484();
  func_0x00010b9712f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b97112c; end: 10b9711af;  */

long FUN_10b97112c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7b240;
    func_0x000107c316fc(param_1,&ppuStack_28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_10b96e14c(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b9711b0; end: 10b9711bf;  */

void FUN_10b9711b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9711c0; end: 10b9711e7;  */

long FUN_10b9711c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b9711e8; end: 10b971263;  */

void FUN_10b9711e8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d7b320;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b9712d8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b971264);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9712f8();
  func_0x000107c30e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b971264; end: 10b9712d7;  */

void FUN_10b971264(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e1ba0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b9712d8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001080d5cb8(&uStack_30);
  return;
}



/* Entry: 10b9712d8; end: 10b971353;  */

void FUN_10b9712d8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b971354; end: 10b9713cf;  */

undefined8 * FUN_10b971354(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7da50;
  param_1[1] = 0;
  FUN_10b9803f0(param_1 + 3);
  *param_1 = &PTR_FUN_110d7b340;
  param_1[3] = &PTR_DAT_110d7b390;
  param_1[5] = &PTR_DAT_110d7b3c8;
  return param_1;
}



/* Entry: 10b9713d0; end: 10b9713e3;  */

long FUN_10b9713d0(long param_1)

{
  FUN_10b980378(param_1 + 0x18);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b9713e4; end: 10b9713f7;  */

void FUN_10b9713e4(void)

{
  func_0x00010b9713a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9713f8; end: 10b971407;  */

void FUN_10b9713f8(long param_1)

{
  func_0x00010b9713a4(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b971408; end: 10b971467;  */

undefined8 FUN_10b971408(void)

{
  int iVar1;
  
  if ((bRam00000001137fd2b8 & 1) == 0) {
    iVar1 = 0x137fd2b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd2b0,&UNK_10f7cfe6b);
      ___cxa_guard_release(0x1137fd2b8);
    }
  }
  return 0x1137fd2b0;
}



/* Entry: 10b971468; end: 10b97152f;  */

void FUN_10b971468(undefined8 param_1)

{
  int extraout_w10;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uStack_28 = param_1;
  FUN_10b971530(&lStack_48,&uStack_28);
  FUN_10b9719c8(&lStack_38,lStack_48);
  func_0x00010b971ae4(lStack_48);
  lStack_48 = 0;
  if (lStack_38 != 0) {
    lStack_48 = lStack_38 + 0x18;
  }
  lStack_40 = lStack_30;
  if (lStack_30 != 0) {
    do {
      func_0x00010b971af8();
    } while (extraout_w10 != 0);
  }
  FUN_10b96e46c(&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b971bb4();
  func_0x00010b971568(&lStack_38);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b971530; end: 10b97158f;  */

long FUN_10b971530(long param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [3];
  
  func_0x00010b971b70();
  FUN_10b971590(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x00010b971b58();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b971590; end: 10b9715b3;  */

void FUN_10b971590(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b9715b4(&uStack_11,param_1);
  return;
}



/* Entry: 10b9715b4; end: 10b97162b;  */

void FUN_10b9715b4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar5 = auStack_40;
  func_0x00010b971b70();
  FUN_10b971648(auStack_40,1);
  FUN_10b97168c(lStack_30,param_2);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_10b97162c(lVar6 + 0x18);
  func_0x00010b971ad4(auStack_40);
  func_0x00010b971b58();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b971ad4();
  func_0x00010b971b88();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b97162c;
    lStack_58 = extraout_x8[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_60);
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b97162c; end: 10b971647;  */

void FUN_10b97162c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b971648; end: 10b97166f;  */

long FUN_10b971648(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b971670();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b971670; end: 10b97168b;  */

undefined8 * FUN_10b971670(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3a == 0) {
    puVar1 = (undefined8 *)(param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7b428;
  func_0x00010b9716f8(param_1 + 3);
  return param_1;
}



/* Entry: 10b97168c; end: 10b9716cf;  */

undefined8 * FUN_10b97168c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7b428;
  func_0x00010b9716f8(param_1 + 3);
  return param_1;
}



/* Entry: 10b9716d0; end: 10b9716d3;  */

void FUN_10b9716d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b428;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9716d4; end: 10b9716e7;  */

void FUN_10b9716d4(void)

{
  FUN_10b971a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9716e8; end: 10b9716ff;  */

void FUN_10b9716e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9716f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b971700; end: 10b97173f;  */

undefined8 * FUN_10b971700(undefined8 *param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  *param_1 = &PTR_FUN_110d7b478;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d7b510;
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b971740; end: 10b971743;  */

undefined8 * FUN_10b971740(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110d7b478;
  uVar1 = param_1[4];
  param_1[3] = &PTR_DAT_110d7b510;
  param_1[4] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[4]);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b971744; end: 10b971757;  */

void FUN_10b971744(void)

{
  FUN_10b971964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b971758; end: 10b9717af;  */

void FUN_10b971758(undefined8 param_1)

{
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  uStack_48 = 0;
  FUN_10b9a8bb4(auStack_40,&uStack_48);
  uStack_28 = 1;
  FUN_10b9719ac(param_1,auStack_40);
  FUN_10b9a8cb4(auStack_40);
  func_0x000107c278f8(uStack_48);
  return;
}



/* Entry: 10b9717b0; end: 10b9717bf;  */

undefined8 FUN_10b9717b0(void)

{
  return 1;
}



/* Entry: 10b9717c0; end: 10b9717db;  */

undefined8 FUN_10b9717c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  return param_2;
}



/* Entry: 10b9717dc; end: 10b9717df;  */

void FUN_10b9717dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = &UNK_10f7cfe7a;
  puVar1 = puVar2;
  func_0x0001003a8364();
  puStack_40 = &UNK_10f7cfe7a;
  func_0x000107c613d0();
  puStack_38 = puVar2;
  func_0x0001003a8458(param_1,puVar1,&puStack_40);
  return;
}



/* Entry: 10b9717e0; end: 10b971937;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b9717e0(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  int extraout_w10;
  long *plVar2;
  long alStack_60 [2];
  undefined2 uStack_50;
  long lStack_28;
  
  if (param_3 == 1) {
    func_0x0001080cb310(&lStack_28,param_1 + 0x20);
    plVar2 = (long *)*param_2;
    func_0x00010b971b90();
    func_0x00010b971b24();
    lVar1 = lStack_28;
    if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
      do {
        func_0x00010b971af8();
      } while (extraout_w10 != 0);
    }
    alStack_60[0] = lVar1;
    func_0x00010b9a8f78(alStack_60 + 1,alStack_60);
    func_0x00010b971b08(*(undefined8 *)(*plVar2 + 0x10));
    func_0x00010b971b1c();
    func_0x00010b971b40();
    func_0x000104bddf04(lVar1);
    func_0x00010b971b50();
    func_0x00010b971b48();
    func_0x0001080cb578(lStack_28);
  }
  else {
    plVar2 = (long *)*param_2;
    func_0x00010b971b90();
    func_0x00010b971b24();
    uStack_50 = 0;
    alStack_60[1] = 0;
    func_0x000107c31088(&lStack_28,&UNK_10f7cfe85);
    lStack_28 = 0;
    func_0x00010b971b08(*(undefined8 *)(*plVar2 + 0x10));
    func_0x00010b971b1c();
    func_0x000107c278f8(lStack_28);
    func_0x00010b971b40();
    func_0x00010b971b50();
    func_0x00010b971b48();
  }
  return;
}



/* Entry: 10b971938; end: 10b971963;  */

void FUN_10b971938(void)

{
  return;
}



/* Entry: 10b971964; end: 10b9719ab;  */

undefined8 * FUN_10b971964(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110d7b478;
  uVar1 = param_1[4];
  param_1[3] = &PTR_DAT_110d7b510;
  param_1[4] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[4]);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9719ac; end: 10b9719c7;  */

void FUN_10b9719ac(long param_1)

{
  FUN_10b929644();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b9719c8; end: 10b971a57;  */

void FUN_10b9719c8(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b971af8();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b971af8();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 10b971a58; end: 10b971a67;  */

void FUN_10b971a58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b428;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b971a68; end: 10b971ad3;  */

void FUN_10b971a68(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b971ad4; end: 10b971bbf;  */

void FUN_10b971ad4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b971bc0; end: 10b971c3b;  */

undefined8 * FUN_10b971bc0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7da50;
  param_1[1] = 0;
  FUN_10b9803f0(param_1 + 3);
  *param_1 = &PTR_FUN_110d7b578;
  param_1[3] = &PTR_DAT_110d7b5c8;
  param_1[5] = &PTR_DAT_110d7b600;
  return param_1;
}



/* Entry: 10b971c3c; end: 10b971c4f;  */

long FUN_10b971c3c(long param_1)

{
  FUN_10b980378(param_1 + 0x18);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b971c50; end: 10b971c63;  */

void FUN_10b971c50(void)

{
  func_0x00010b971c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b971c64; end: 10b971c73;  */

void FUN_10b971c64(long param_1)

{
  func_0x00010b971c10(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b971c74; end: 10b971cd3;  */

undefined8 FUN_10b971c74(void)

{
  int iVar1;
  
  if ((bRam00000001137fd2c8 & 1) == 0) {
    iVar1 = 0x137fd2c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd2c0,&UNK_10f7cfe9d);
      ___cxa_guard_release(0x1137fd2c8);
    }
  }
  return 0x1137fd2c0;
}



/* Entry: 10b971cd4; end: 10b971cdb;  */

void FUN_10b971cd4(void)

{
  return;
}


