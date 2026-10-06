/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e4db44; end: 106e4db4f;  */

void FUN_106e4db44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4db50; end: 106e4dbd7;  */

void FUN_106e4db50(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2da0;
  _objc_alloc(PTR_PTR_1126d2da0);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  param_1 = param_1 + 2;
  func_0x0001006d1308(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d7c0(uVar3,puVar1,param_2,uVar2,param_1);
  FUN_106e4dbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e4dbd8; end: 106e4dbdf;  */

void FUN_106e4dbd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4dbe0; end: 106e4dc4f;  */

void FUN_106e4dbe0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_38);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106e4dc50; end: 106e4dcaf;  */

void FUN_106e4dc50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2da8;
  _objc_alloc(PTR_PTR_1126d2da8);
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b2e0(puVar1,param_2,param_1);
  FUN_106e4dcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e4dcb0; end: 106e4dcbb;  */

void FUN_106e4dcb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4dcbc; end: 106e4dd33; -[SCNCslSearchIndex initWithCpp:] */

undefined1 * FUN_106e4dcbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f73c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_106e4e2e8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_106e4e2bc(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e4dd34; end: 106e4de97; -[SCNCslSearchIndex search:] */

void FUN_106e4dd34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  char cStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_106e4f100(auStack_68,param_3);
  (**(code **)(*plVar2 + 0x10))(auStack_50,plVar2,auStack_68);
  func_0x000106e4e024(auStack_68);
  puVar1 = PTR_PTR_1126b9638;
  if (cStack_38 == '\x01') {
    FUN_106e4f7dc(auStack_50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106e4dc50(auStack_50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106e4e300();
  FUN_106e4e0f4(auStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e4de98; end: 106e4df0f; -[SCNCslSearchIndex stats] */

void FUN_106e4de98(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x18))();
  plStack_30 = plVar1;
  uStack_28 = param_2;
  FUN_106e4da38(&plStack_30);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e4df10; end: 106e4df5f;  */

void FUN_106e4df10(undefined8 *param_1,long param_2)

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
        FUN_106e4e2e8();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e4df60; end: 106e4df8b;  */

void FUN_106e4df60(long *param_1)

{
  if (*param_1 != 0) {
    FUN_106e4e1d8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e4df8c; end: 106e4dfdf; -[SCNCslSearchIndex .cxx_destruct] */

void FUN_106e4df8c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11097fc60;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_106e4e2bc((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 106e4dfe0; end: 106e4e08b; -[SCNCslSearchIndex .cxx_construct] */

undefined8 * FUN_106e4dfe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_106e4e2e8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106e4e08c; end: 106e4e093;  */

void FUN_106e4e08c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000106e4e0cc();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 106e4e094; end: 106e4e0f3;  */

void FUN_106e4e094(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x38;
    func_0x000106e4e0cc();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 106e4e0f4; end: 106e4e11b;  */

void FUN_106e4e0f4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_106e4e11c();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 106e4e11c; end: 106e4e183;  */

undefined8 FUN_106e4e11c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000106e4e148(&uStack_28);
  return param_1;
}



/* Entry: 106e4e184; end: 106e4e18b;  */

void FUN_106e4e184(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    func_0x0001002a2294(lVar2 + -0x20);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 106e4e18c; end: 106e4e1d7;  */

void FUN_106e4e18c(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x30) {
    func_0x0001002a2294(lVar1 + -0x20);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 106e4e1d8; end: 106e4e24b;  */

void FUN_106e4e1d8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_11097fc60;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_106e4e2e8();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_106e4e24c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e4e30c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e4e24c; end: 106e4e2bb;  */

void FUN_106e4e24c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d2db0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_106e4e2e8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_106e4e2bc(&uStack_30);
  return;
}



/* Entry: 106e4e2bc; end: 106e4e2e7;  */

long FUN_106e4e2bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 106e4e2e8; end: 106e4e337;  */

void FUN_106e4e2e8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 106e4e338; end: 106e4e3af; -[SCNCslSearchIndexCallbackCppProxy initWithCpp:] */

undefined1 * FUN_106e4e338(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f73d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_106e4e9ec();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000106e4e9c4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e4e3b0; end: 106e4e523; -[SCNCslSearchIndexCallbackCppProxy done:] */

void FUN_106e4e3b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e4dbe0(&uStack_68);
    uStack_80 = uStack_58;
    uStack_88 = uStack_60;
    uStack_90 = uStack_68;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
    func_0x000106e4ea04();
  }
  else {
    FUN_106e4df10(&uStack_50,lVar1);
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_78 = 1;
    FUN_106e4e2bc(&uStack_50);
  }
  func_0x000106e4ea0c();
  func_0x000106e4e9fc();
  (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_90);
  FUN_106e4e6b4(&uStack_90);
  func_0x000106e4e9fc();
  return;
}



/* Entry: 106e4e524; end: 106e4e617;  */

void FUN_106e4e524(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126d2db8;
    _objc_opt_class(PTR_PTR_1126d2db8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_11097fcc8;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_106e4e6dc);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_106e4e99c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_106e4e9ec();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000106e4e9fc();
  return;
}



/* Entry: 106e4e618; end: 106e4e673; -[SCNCslSearchIndexCallbackCppProxy .cxx_destruct] */

void FUN_106e4e618(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11097fd98;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000106e4e9c4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 106e4e674; end: 106e4e6b3; -[SCNCslSearchIndexCallbackCppProxy .cxx_construct] */

undefined8 * FUN_106e4e674(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_106e4e9ec();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106e4e6b4; end: 106e4e6db;  */

void FUN_106e4e6b4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_106e4e2bc();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 106e4e6dc; end: 106e4e7cb;  */

void FUN_106e4e6dc(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_11097fd08;
  puVar1[3] = &PTR_DAT_11097fd80;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_106e4e9ec();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x000106e4ea04();
  puVar1[3] = &PTR_FUN_11097fd58;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_106e4e99c(&uStack_50);
  return;
}



/* Entry: 106e4e7cc; end: 106e4e7cf;  */

void FUN_106e4e7cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097fd08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e4e7d0; end: 106e4e7e3;  */

void FUN_106e4e7d0(void)

{
  FUN_106e4e98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e4e7e4; end: 106e4e7ef;  */

long FUN_106e4e7e4(long param_1)

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
    ppuStack_38 = &PTR_DAT_11097fcc8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000106e4ea0c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 106e4e7f0; end: 106e4e82b;  */

void FUN_106e4e7f0(void)

{
  func_0x000106e4ea28();
  return;
}



/* Entry: 106e4e82c; end: 106e4e8fb;  */

void FUN_106e4e82c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x21;
  
  func_0x000106e4ea1c();
  _objc_autoreleasePoolPush();
  puVar1 = PTR_PTR_1126b9638;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
    FUN_106e4df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1,param_2,unaff_x21);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106e4dc50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1,param_2,unaff_x21);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106e4ea0c();
  func_0x00010bf88100(uVar2,param_2,puVar1);
  func_0x000106e4ea04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 106e4e8fc; end: 106e4e98b;  */

long FUN_106e4e8fc(long param_1)

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
    ppuStack_38 = &PTR_DAT_11097fcc8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000106e4ea0c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 106e4e98c; end: 106e4e99b;  */

void FUN_106e4e98c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097fd08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e4e99c; end: 106e4e9eb;  */

long FUN_106e4e99c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 106e4e9ec; end: 106e4ea33;  */

void FUN_106e4e9ec(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 106e4ea34; end: 106e4eaab; -[SCNCslSearchIndexFactory initWithCpp:] */

undefined1 * FUN_106e4ea34(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f73d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_106e4ee0c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_106e4ede4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e4eaac; end: 106e4eb83; +[SCNCslSearchIndexFactory get] */

void FUN_106e4eaac(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  FUN_106e50a04(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_11097fda8;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_106e4ee0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,FUN_106e4ed70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106e4ee30();
  }
  FUN_106e4ede4(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106e4eb84; end: 106e4ec8f; -[SCNCslSearchIndexFactory build:callback:] */

void FUN_106e4eb84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [112];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_106e4ee3c(auStack_a0,param_3);
  FUN_106e4e524(auStack_b0,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_a0,auStack_b0);
  func_0x000106e4e9c4(auStack_b0);
  func_0x000106e4ed24(auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e4ec90; end: 106e4ece3; -[SCNCslSearchIndexFactory .cxx_destruct] */

void FUN_106e4ec90(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11097fda8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_106e4ede4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 106e4ece4; end: 106e4ed4f; -[SCNCslSearchIndexFactory .cxx_construct] */

undefined8 * FUN_106e4ece4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_106e4ee0c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106e4ed50; end: 106e4ed6f;  */

void FUN_106e4ed50(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 106e4ed70; end: 106e4ede3;  */

void FUN_106e4ed70(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d2cf0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_106e4ee0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_106e4ede4(&uStack_30);
  return;
}



/* Entry: 106e4ede4; end: 106e4ee0b;  */

long FUN_106e4ede4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 106e4ee0c; end: 106e4ee3b;  */

void FUN_106e4ee0c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 106e4ee3c; end: 106e4ef6b;  */

void FUN_106e4ee3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28ff20(param_2);
  uVar2 = param_2;
  func_0x00010bfe5d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_58);
  uVar3 = param_2;
  func_0x00010c27bbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106e4ef6c(auStack_80);
  func_0x00010c2544e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106e4efd0(auStack_a8);
  FUN_106e4f054(param_1,uVar1,auStack_58,auStack_80,auStack_a8);
  FUN_106e4ed50(auStack_a8);
  _objc_release(param_2);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(uVar2);
  func_0x000106e4f0ec();
  return;
}



/* Entry: 106e4ef6c; end: 106e4efcf;  */

void FUN_106e4ef6c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000106e4f0f4();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 4) = 0;
  }
  else {
    FUN_106e4fe4c(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[3] = uStack_28;
    unaff_x20[2] = uStack_30;
    *(undefined1 *)(unaff_x20 + 4) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4efd0; end: 106e4f053;  */

void FUN_106e4efd0(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x000106e4f0f4();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 4) = 0;
  }
  else {
    FUN_106e4fd10(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined4 *)(unaff_x20 + 3) = uStack_28;
    *(undefined1 *)(unaff_x20 + 4) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  }
  func_0x000106e4f0ec();
  return;
}



/* Entry: 106e4f054; end: 106e4f0ab;  */

undefined4 *
FUN_106e4f054(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  *(undefined8 *)(param_1 + 0x10) = param_4[4];
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  FUN_106e4f0ac(param_1 + 0x12,param_5);
  return param_1;
}



/* Entry: 106e4f0ac; end: 106e4f0ff;  */

void FUN_106e4f0ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



/* Entry: 106e4f100; end: 106e4f16f;  */

void FUN_106e4f100(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bfac7e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_106e4f170(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000106e4e024(&uStack_40);
  FUN_106e4f7a4();
  return;
}



/* Entry: 106e4f170; end: 106e4f2eb;  */

void FUN_106e4f170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_1a8 [40];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 auStack_158 [7];
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
  puVar1 = param_2;
  func_0x00010bf529e0();
  FUN_106e4f2ec(param_1);
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
  func_0x000106e4f7ac();
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        puVar4 = *(undefined8 **)(lStack_118 + (long)puVar6 * 8);
        _objc_retain(puVar4);
        FUN_106e4d760(auStack_158,puVar4);
        puVar1 = auStack_158;
        func_0x000106e4f640(param_1);
        func_0x000106e4e0cc(auStack_158);
        _objc_release();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      } while (puVar6 < puVar2);
      func_0x000106e4f7ac();
      puVar2 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  plVar3 = (long *)0x0;
  func_0x000106e4f7a4();
  func_0x000106e4f7a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000106e4f7a4();
    func_0x000106e4e024(param_1);
    func_0x000106e4f7a4();
    __Unwind_Resume();
    pcStack_168 = FUN_106e4f2ec;
    if ((undefined8 *)((plVar3[2] - *plVar3) / 0x38) < puVar1) {
      puStack_180 = param_1;
      puStack_178 = param_2;
      puStack_170 = &stack0xfffffffffffffff0;
      if ((undefined8 *)0x492492492492492 < puVar1) {
        FUN_106e4f37c();
        func_0x000106e4f7c8();
        __Unwind_Resume(plVar3);
        plVar3 = (long *)&UNK_10f3dbe02;
        func_0x000104bd47e8();
        lVar5 = puVar1[1] + ((plVar3[1] - *plVar3) / -0x38) * 0x38;
        FUN_106e4f4bc(plVar3 + 2,*plVar3,plVar3[1],lVar5);
        puVar1[1] = lVar5;
        lVar5 = *plVar3;
        plVar3[1] = lVar5;
        *plVar3 = puVar1[1];
        puVar1[1] = lVar5;
        lVar5 = plVar3[1];
        plVar3[1] = puVar1[2];
        puVar1[2] = lVar5;
        lVar5 = plVar3[2];
        plVar3[2] = puVar1[3];
        puVar1[3] = lVar5;
        *puVar1 = puVar1[1];
        return;
      }
      FUN_106e4f41c(auStack_1a8);
      func_0x000106e4f7d0();
      func_0x000106e4f7c8();
    }
    return;
  }
  return;
}



/* Entry: 106e4f2ec; end: 106e4f37b;  */

void FUN_106e4f2ec(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x38) < param_2) {
    if ((undefined8 *)0x492492492492492 < param_2) {
      FUN_106e4f37c();
      func_0x000106e4f7c8();
      __Unwind_Resume(param_1);
      plVar1 = (long *)&UNK_10f3dbe02;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x38) * 0x38;
      FUN_106e4f4bc(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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
    FUN_106e4f41c(auStack_48,param_2,(param_1[1] - *param_1) / 0x38);
    func_0x000106e4f7d0();
    func_0x000106e4f7c8();
  }
  return;
}



/* Entry: 106e4f37c; end: 106e4f38f;  */

void FUN_106e4f37c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f3dbe02;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x38) * 0x38;
  FUN_106e4f4bc(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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



/* Entry: 106e4f390; end: 106e4f41b;  */

void FUN_106e4f390(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_106e4f4bc(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 106e4f41c; end: 106e4f48b;  */

long * FUN_106e4f41c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000106e4f468();
  }
  lVar1 = param_4 + param_3 * 0x38;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x38;
  return param_1;
}



/* Entry: 106e4f48c; end: 106e4f4bb;  */

void FUN_106e4f48c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x38) {
    FUN_106e4f554(param_4,uVar1);
    param_4 = lStack_48 + 0x38;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000106e4e0cc(param_2);
  }
  func_0x000106e4f58c(&uStack_70);
  return;
}



/* Entry: 106e4f4bc; end: 106e4f553;  */

void FUN_106e4f4bc(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x38) {
    FUN_106e4f554(param_4,lVar1);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000106e4e0cc(param_2);
  }
  func_0x000106e4f58c(&uStack_60);
  return;
}



/* Entry: 106e4f554; end: 106e4f5fb;  */

undefined8 * FUN_106e4f554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_106e4d904(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 106e4f5fc; end: 106e4f603;  */

void FUN_106e4f5fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x38;
    func_0x000106e4e0cc();
  }
  return;
}



/* Entry: 106e4f604; end: 106e4f6a7;  */

void FUN_106e4f604(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x38;
    func_0x000106e4e0cc();
  }
  return;
}



/* Entry: 106e4f6a8; end: 106e4f743;  */

long FUN_106e4f6a8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_106e4f744(param_1,(param_1[1] - *param_1) / 0x38 + 1);
  FUN_106e4f41c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x38,param_1 + 2);
  FUN_106e4f554(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x38;
  func_0x000106e4f7d0();
  lVar2 = param_1[1];
  func_0x000106e4f7c8();
  return lVar2;
}



/* Entry: 106e4f744; end: 106e4f7a3;  */

ulong FUN_106e4f744(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x492492492492492 < param_2) {
    FUN_106e4f37c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    uVar2 = 0x492492492492492;
  }
  return uVar2;
}



/* Entry: 106e4f7a4; end: 106e4f7db;  */

void FUN_106e4f7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4f7dc; end: 106e4f8df;  */

void FUN_106e4f7dc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126d2dc0;
  _objc_alloc(PTR_PTR_1126d2dc0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x30);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    lVar4 = lVar6;
    FUN_106e4db50(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c00e220(puVar2,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e4f8e0; end: 106e4f97b;  */

void FUN_106e4f8e0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x30) < param_2) {
    if ((undefined8 *)0x555555555555555 < param_2) {
      FUN_106e4f97c();
      func_0x000106e4fc40(auStack_48);
      __Unwind_Resume(param_1);
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x30) * 0x30;
      FUN_106e4fab8(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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
    FUN_106e4fa1c(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
    FUN_106e4f990(param_1,auStack_48);
    func_0x000106e4fc40(auStack_48);
  }
  return;
}



/* Entry: 106e4f97c; end: 106e4f98f;  */

void FUN_106e4f97c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x30) * 0x30;
  FUN_106e4fab8(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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



/* Entry: 106e4f990; end: 106e4fa1b;  */

void FUN_106e4f990(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_106e4fab8(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 106e4fa1c; end: 106e4fa8b;  */

long * FUN_106e4fa1c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000106e4fa68();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 106e4fa8c; end: 106e4fab7;  */

void FUN_106e4fa8c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x30) {
    func_0x000106e4fb94(param_4,uVar1);
    param_4 = lStack_48 + 0x30;
  }
  uStack_58 = 1;
  func_0x000106e4fb60(param_1,param_2,param_3);
  FUN_106e4fbbc(&uStack_70);
  return;
}



/* Entry: 106e4fab8; end: 106e4fb5f;  */

void FUN_106e4fab8(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x30) {
    func_0x000106e4fb94(param_4,lVar1);
    param_4 = lStack_38 + 0x30;
  }
  uStack_48 = 1;
  func_0x000106e4fb60(param_1,param_2,param_3);
  FUN_106e4fbbc(&uStack_60);
  return;
}



/* Entry: 106e4fb60; end: 106e4fbbb;  */

void FUN_106e4fb60(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x0001002a2294(param_2 + 0x10);
  }
  return;
}



/* Entry: 106e4fbbc; end: 106e4fbeb;  */

long FUN_106e4fbbc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_106e4fbec(param_1);
  }
  return param_1;
}



/* Entry: 106e4fbec; end: 106e4fc0b;  */

void FUN_106e4fbec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
    func_0x0001002a2294(lVar1 + -0x20);
  }
  return;
}



/* Entry: 106e4fc0c; end: 106e4fc6b;  */

void FUN_106e4fc0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x30) {
    func_0x0001002a2294(param_3 + -0x20);
  }
  return;
}



/* Entry: 106e4fc6c; end: 106e4fc73;  */

void FUN_106e4fc6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar2 = *(long *)(param_1 + 0x10), lVar1 != lVar2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x30;
    func_0x0001002a2294(lVar2 + -0x20);
  }
  return;
}



/* Entry: 106e4fc74; end: 106e4fcaf;  */

void FUN_106e4fc74(long param_1,long param_2)

{
  long lVar1;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x30;
    func_0x0001002a2294(lVar1 + -0x20);
  }
  return;
}



/* Entry: 106e4fcb0; end: 106e4fcff;  */

long * FUN_106e4fcb0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x555555555555555 < param_2) {
    FUN_106e4f97c();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    plVar2 = (long *)0x555555555555555;
  }
  return plVar2;
}



/* Entry: 106e4fd00; end: 106e4fd0f;  */

void FUN_106e4fd00(void)

{
  return;
}



/* Entry: 106e4fd10; end: 106e4fdc7;  */

void FUN_106e4fd10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c247520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_48);
  func_0x00010bf64880();
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar1);
  FUN_106e4fdc8();
  return;
}



/* Entry: 106e4fdc8; end: 106e4fdcf;  */

void FUN_106e4fdc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4fdd0; end: 106e4fe3f;  */

void FUN_106e4fdd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c268480();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbed0(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x0001000e30f4(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106e4fe40; end: 106e4fe4b;  */

void FUN_106e4fe40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106e4fe4c; end: 106e4fee3;  */

void FUN_106e4fe4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  func_0x00010bf9a6c0(param_3);
  uVar3 = param_2;
  func_0x00010c0f4960(param_3);
  uVar4 = uVar3;
  func_0x00010c0c13c0(param_3);
  uVar1 = param_3;
  func_0x00010c0c2780();
  uVar2 = param_3;
  func_0x00010c0c2fa0();
  *param_1 = param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  *(int *)(param_1 + 3) = (int)uVar1;
  *(int *)((long)param_1 + 0x1c) = (int)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e4fee4; end: 106e4ffb7; -[SCNCslFieldQuery initWithFieldName:tagQuery:] */

undefined1 *
FUN_106e4fee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f73e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e4ffb8; end: 106e4ffbf; -[SCNCslFieldQuery fieldName] */

undefined8 FUN_106e4ffb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e4ffc0; end: 106e4ffc7; -[SCNCslFieldQuery tagQuery] */

undefined8 FUN_106e4ffc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e4ffc8; end: 106e4fff7; -[SCNCslFieldQuery .cxx_destruct] */

void FUN_106e4ffc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e4fff8; end: 106e5008f; -[SCNCslIndexStats initWithNumDocs:lastBuildTimestamp:] */

undefined1 *
FUN_106e4fff8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f73e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e50090; end: 106e50097; -[SCNCslIndexStats numDocs] */

undefined4 FUN_106e50090(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106e50098; end: 106e5009f; -[SCNCslIndexStats lastBuildTimestamp] */

undefined8 FUN_106e50098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e500a0; end: 106e500ab; -[SCNCslIndexStats .cxx_destruct] */

void FUN_106e500a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e500ac; end: 106e5015f; -[SCNCslResultDoc initWithDocId:score:docValues:] */

undefined1 *
FUN_106e500ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f73f0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  func_0x000106e50418();
  return (undefined1 *)puVar1;
}



/* Entry: 106e50160; end: 106e50347; -[SCNCslResultDoc isEqual:] */

ulong FUN_106e50160(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x21;
  ulong uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d2da0;
  _objc_opt_class(PTR_PTR_1126d2da0);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    goto LAB_106e502b8;
  }
  _objc_retain(param_4);
  uVar4 = param_2;
  func_0x00010bf87640();
  uVar2 = param_4;
  func_0x00010bf87640();
  if (uVar4 == uVar2) {
    func_0x00010c150c20(param_2);
    dVar5 = param_1;
    func_0x00010c150c20(param_4);
    if (param_1 != dVar5) goto LAB_106e50290;
    uVar2 = param_2;
    func_0x00010bf87820();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      unaff_x21 = param_4;
      func_0x00010bf87820();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x21 != 0) goto LAB_106e50218;
      uVar4 = 1;
LAB_106e502a8:
      _objc_release(unaff_x21);
    }
    else {
LAB_106e50218:
      uVar3 = param_2;
      func_0x00010bf87820();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        func_0x00010bf87820(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf87820(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010c071ae0(param_2);
        _objc_release(param_4);
        _objc_release(param_2);
        _objc_release(uVar3);
      }
      if (uVar2 == 0) goto LAB_106e502a8;
    }
    func_0x000106e50420();
  }
  else {
LAB_106e50290:
    uVar4 = 0;
  }
  func_0x000106e50418();
LAB_106e502b8:
  func_0x000106e50418();
  return uVar4;
}



/* Entry: 106e50348; end: 106e503f3; -[SCNCslResultDoc hash] */

ulong FUN_106e50348(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_2;
  func_0x00010bf87640(param_2);
  func_0x00010c150c20(param_2);
  func_0x00010bf87820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x000106e50420();
  func_0x000106e50418();
  return uVar2 ^ uVar1 ^ param_2 ^ (long)param_1;
}



/* Entry: 106e503f4; end: 106e503fb; -[SCNCslResultDoc docId] */

undefined8 FUN_106e503f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e503fc; end: 106e50403; -[SCNCslResultDoc score] */

undefined8 FUN_106e503fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


