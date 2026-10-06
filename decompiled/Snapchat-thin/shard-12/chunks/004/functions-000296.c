/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109101988; end: 109101a23; -[SCNNeoPlayerMediaDataProviderCompletionCppProxy onLoadFailed:] */

void FUN_109101988(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_38 [8];
  
  func_0x000109102098();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c30f2c(auStack_38);
  func_0x0001091020d0(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000107c278f4(auStack_38);
  func_0x000109102080();
  return;
}



/* Entry: 109101a24; end: 109101a83; -[SCNNeoPlayerMediaDataProviderCompletionCppProxy onDataSizeResolved:] */

void FUN_109101a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 109101a84; end: 109101b73;  */

void FUN_109101a84(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126dd5e0;
    _objc_opt_class(PTR_PTR_1126dd5e0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adc130;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_109101c78);
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
      FUN_109101f58(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_109102064();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000109102080();
  return;
}



/* Entry: 109101b74; end: 109101be3;  */

void FUN_109101b74(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ad9fa8,&PTR_DAT_110adc0e8,0);
    if (lVar1 == 0) {
      FUN_109101f80(param_1);
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



/* Entry: 109101be4; end: 109101c37; -[SCNNeoPlayerMediaDataProviderCompletionCppProxy .cxx_destruct] */

void FUN_109101be4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc220;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1091017c8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109101c38; end: 109101c77; -[SCNNeoPlayerMediaDataProviderCompletionCppProxy .cxx_construct] */

undefined8 * FUN_109101c38(undefined8 *param_1)

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
      FUN_109102064();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109101c78; end: 109101d6b;  */

void FUN_109101c78(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110adc170;
  puVar1[3] = &PTR_DAT_110adc1f8;
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
      FUN_109102064();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110adc1c0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_109101f58(&uStack_50);
  return;
}



/* Entry: 109101d6c; end: 109101d6f;  */

void FUN_109101d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109101d70; end: 109101d83;  */

void FUN_109101d70(void)

{
  FUN_109101f48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109101d84; end: 109101d8f;  */

long FUN_109101d84(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc130;
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



/* Entry: 109101d90; end: 109101dcb;  */

void FUN_109101d90(void)

{
  func_0x0001091020dc();
  return;
}



/* Entry: 109101dcc; end: 109101e23;  */

void FUN_109101dcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001091020c4();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010b981730();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4e80(uVar1,param_2,unaff_x20);
  func_0x000109102090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 109101e24; end: 109101e7b;  */

void FUN_109101e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001091020c4();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010b98101c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4ec0(uVar1,param_2,unaff_x20);
  func_0x000109102090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 109101e7c; end: 109101eb3;  */

void FUN_109101e7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e34c0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109101eb4; end: 109101f47;  */

long FUN_109101eb4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc130;
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



/* Entry: 109101f48; end: 109101f57;  */

void FUN_109101f48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109101f58; end: 109101f7f;  */

long FUN_109101f58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109101f80; end: 109101ff3;  */

void FUN_109101f80(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc220;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_109102064();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109101ff4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001091020e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109101ff4; end: 109102063;  */

void FUN_109101ff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd5e0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_109102064();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1091017c8(&uStack_30);
  return;
}



/* Entry: 109102064; end: 1091020ff;  */

void FUN_109102064(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 109102100; end: 109102177; -[SCNNeoPlayerMediaDataProviderFactoryCppProxy initWithCpp:] */

undefined1 * FUN_109102100(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112700678;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1091027e0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_109095890(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109102178; end: 10910225b; -[SCNNeoPlayerMediaDataProviderFactoryCppProxy dataProviderWithURL:] */

void FUN_109102178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c30f2c(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(auStack_40,plVar1,auStack_48);
  func_0x000107c278f4(auStack_48);
  FUN_10910128c(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010910280c();
  func_0x0001091027f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10910225c; end: 10910234f;  */

void FUN_10910225c(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126dd5e8;
    _objc_opt_class(PTR_PTR_1126dd5e8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adc278;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_109102454);
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
      FUN_1091026d4(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1091027e0();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001091027f0();
  return;
}



/* Entry: 109102350; end: 1091023bf;  */

void FUN_109102350(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ada260,&PTR_DAT_110adc230,0);
    if (lVar1 == 0) {
      FUN_1091026fc(param_1);
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



/* Entry: 1091023c0; end: 109102413; -[SCNNeoPlayerMediaDataProviderFactoryCppProxy .cxx_destruct] */

void FUN_1091023c0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc348;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_109095890((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109102414; end: 109102453; -[SCNNeoPlayerMediaDataProviderFactoryCppProxy .cxx_construct] */

undefined8 * FUN_109102414(undefined8 *param_1)

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
      FUN_1091027e0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109102454; end: 10910253f;  */

void FUN_109102454(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110adc2b8;
  puVar1[3] = &PTR_DAT_110adc330;
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
      FUN_1091027e0();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x000109102820();
  puVar1[3] = &PTR_FUN_110adc308;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1091026d4(&uStack_50);
  return;
}



/* Entry: 109102540; end: 109102543;  */

void FUN_109102540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc2b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109102544; end: 109102557;  */

void FUN_109102544(void)

{
  FUN_1091026c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109102558; end: 109102563;  */

long FUN_109102558(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc278;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000109102818();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 109102564; end: 10910259f;  */

void FUN_109102564(void)

{
  func_0x000109102830();
  return;
}



/* Entry: 1091025a0; end: 109102633;  */

void FUN_1091025a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109102818();
  FUN_10910119c(param_1,uVar2);
  func_0x000109102820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109102634; end: 1091026c3;  */

long FUN_109102634(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc278;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x000109102818();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1091026c4; end: 1091026d3;  */

void FUN_1091026c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc2b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1091026d4; end: 1091026fb;  */

long FUN_1091026d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1091026fc; end: 10910276f;  */

void FUN_1091026fc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc348;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1091027e0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109102770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010910283c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109102770; end: 1091027df;  */

void FUN_109102770(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd5e8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1091027e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_109095890(&uStack_30);
  return;
}



/* Entry: 1091027e0; end: 109102847;  */

void FUN_1091027e0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 109102848; end: 1091028bf; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy initWithCpp:] */

undefined1 * FUN_109102848(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112700680;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000109102db8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1090971c4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091028c0; end: 109102913; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy beginTimingOperation:] */

void FUN_1091028c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000109102df0(param_1,param_3);
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 109102914; end: 109102963; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy endTimingOperation:] */

void FUN_109102914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000109102df0(param_1,param_3);
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 109102964; end: 1091029b3; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy cancelTimingOperation:] */

void FUN_109102964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000109102df0(param_1,param_3);
  (**(code **)(extraout_x8 + 0x20))();
  return;
}



/* Entry: 1091029b4; end: 109102a03; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy incrementOperationCount:] */

void FUN_1091029b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000109102df0(param_1,param_3);
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 109102a04; end: 109102aab; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy setVideoTrackInfo:] */

void FUN_109102a04(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  func_0x000109102dd0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10910505c(auStack_60);
  func_0x000109102e14(*(undefined8 *)(*plVar1 + 0x30));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000109102de8();
  return;
}



/* Entry: 109102aac; end: 109102b4b; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy loadPlaybackSummary:] */

void FUN_109102aac(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000109102dd0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_109103320(auStack_40);
  func_0x000109102e14(*(undefined8 *)(*plVar1 + 0x38));
  FUN_109102d84(auStack_40);
  func_0x000109102de8();
  return;
}



/* Entry: 109102b4c; end: 109102b97; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy reset] */

void FUN_109102b4c(void)

{
  long extraout_x8;
  
  func_0x000109102df0();
  (**(code **)(extraout_x8 + 0x40))();
  return;
}



/* Entry: 109102b98; end: 109102c07;  */

void FUN_109102b98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110adbe40,&PTR_DAT_110adc358,0);
    if (lVar1 == 0) {
      FUN_109102ca0(param_1);
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



/* Entry: 109102c08; end: 109102c5b; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy .cxx_destruct] */

void FUN_109102c08(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc3a0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1090971c4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109102c5c; end: 109102c9f; -[SCNPlayerAnalyticsPlaybackStatisticsTrackerCppProxy .cxx_construct] */

undefined8 * FUN_109102c5c(undefined8 *param_1)

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
      func_0x000109102db8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109102ca0; end: 109102d13;  */

void FUN_109102ca0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc3a0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000109102db8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109102d14);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109102e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109102d14; end: 109102d83;  */

void FUN_109102d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd5f0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000109102db8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1090971c4(&uStack_30);
  return;
}



/* Entry: 109102d84; end: 109102daf;  */

long FUN_109102d84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109102db0; end: 109102e37;  */

void FUN_109102db0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 109102e38; end: 10910309b;  */

void FUN_109102e38(undefined8 *param_1,undefined8 param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_80);
  uVar2 = param_2;
  func_0x00010c29b820();
  _objc_retainAutoreleasedReturnValue();
  FUN_10910505c(auStack_b0);
  uVar3 = param_2;
  func_0x00010bf135c0();
  uVar4 = param_2;
  func_0x00010bf135e0();
  uVar5 = param_2;
  func_0x00010bf13500();
  uVar6 = param_2;
  func_0x00010bf672e0();
  uVar7 = param_2;
  func_0x00010bf67300();
  uVar8 = param_2;
  func_0x00010bf6d800();
  uVar9 = param_2;
  func_0x00010bf13540();
  uVar10 = param_2;
  func_0x00010bf6d7e0();
  uVar11 = param_2;
  func_0x00010bf13520();
  uVar12 = param_2;
  func_0x00010bf13620();
  uVar13 = param_2;
  func_0x00010bf13600();
  uVar14 = param_2;
  func_0x00010bf96540();
  uVar15 = param_2;
  func_0x00010bf96520();
  uVar16 = param_2;
  func_0x00010c24d5c0();
  uVar17 = param_2;
  func_0x00010c276ce0();
  func_0x00010c29b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_109104130(&uStack_c4);
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[2] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  *(undefined4 *)(param_1 + 3) = auStack_b0[0];
  param_1[5] = uStack_a0;
  param_1[4] = uStack_a8;
  param_1[6] = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  param_1[8] = uStack_88;
  param_1[7] = uStack_90;
  *(int *)(param_1 + 9) = (int)uVar3;
  *(int *)((long)param_1 + 0x4c) = (int)uVar4;
  *(int *)(param_1 + 10) = (int)uVar5;
  *(int *)((long)param_1 + 0x54) = (int)uVar6;
  *(int *)(param_1 + 0xb) = (int)uVar7;
  *(int *)((long)param_1 + 0x5c) = (int)uVar8;
  *(int *)(param_1 + 0xc) = (int)uVar9;
  *(int *)((long)param_1 + 100) = (int)uVar10;
  *(int *)(param_1 + 0xd) = (int)uVar11;
  *(int *)((long)param_1 + 0x6c) = (int)uVar12;
  *(int *)(param_1 + 0xe) = (int)uVar13;
  *(int *)((long)param_1 + 0x74) = (int)uVar14;
  *(int *)(param_1 + 0xf) = (int)uVar15;
  *(int *)((long)param_1 + 0x7c) = (int)uVar16;
  *(int *)(param_1 + 0x10) = (int)uVar17;
  *(undefined4 *)((long)param_1 + 0x94) = uStack_b4;
  *(undefined8 *)((long)param_1 + 0x8c) = uStack_bc;
  *(undefined8 *)((long)param_1 + 0x84) = uStack_c4;
  func_0x0001091031e4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
  _objc_release(uVar1);
  func_0x0001091031d0();
  return;
}



/* Entry: 10910309c; end: 1091031cf;  */

void FUN_10910309c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  
  puVar16 = PTR_PTR_1126dd5f8;
  _objc_alloc();
  lVar17 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + 0x18;
  FUN_10910515c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar9 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar10 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar11 = *(undefined4 *)(param_1 + 100);
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  uVar12 = *(undefined4 *)(param_1 + 0x6c);
  uVar6 = *(undefined4 *)(param_1 + 0x70);
  uVar13 = *(undefined4 *)(param_1 + 0x74);
  uVar7 = *(undefined4 *)(param_1 + 0x78);
  uVar14 = *(undefined4 *)(param_1 + 0x7c);
  uVar15 = *(undefined4 *)(param_1 + 0x80);
  FUN_1091041c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bd20(puVar16,param_2,lVar17,lVar18,uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,
                      uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,uVar14,uVar15);
  func_0x0001091031d8();
  func_0x0001091031e4();
  func_0x0001091031d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 1091031d0; end: 1091031eb;  */

void FUN_1091031d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1091031ec; end: 109103263; -[SCNPlayerAnalyticsPlaybackSummaryCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1091031ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112700688;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_109103738();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_109102d84(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109103264; end: 10910331f; -[SCNPlayerAnalyticsPlaybackSummaryCallbackCppProxy onPlaybackSummary:] */

void FUN_109103264(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_c8 [152];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_109102e38(auStack_c8,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_c8);
  func_0x000109100984(auStack_c8);
  func_0x000109103748();
  return;
}



/* Entry: 109103320; end: 109103413;  */

void FUN_109103320(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126dd600;
    _objc_opt_class(PTR_PTR_1126dd600);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adc408;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_1091034a8);
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
      FUN_109103710(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_109103738();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000109103748();
  return;
}



/* Entry: 109103414; end: 109103467; -[SCNPlayerAnalyticsPlaybackSummaryCallbackCppProxy .cxx_destruct] */

void FUN_109103414(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc4d8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_109102d84((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109103468; end: 1091034a7; -[SCNPlayerAnalyticsPlaybackSummaryCallbackCppProxy .cxx_construct] */

undefined8 * FUN_109103468(undefined8 *param_1)

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
      FUN_109103738();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1091034a8; end: 10910359b;  */

void FUN_1091034a8(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110adc448;
  puVar1[3] = &PTR_DAT_110adc4c0;
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
      FUN_109103738();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110adc498;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_109103710(&uStack_50);
  return;
}



/* Entry: 10910359c; end: 10910359f;  */

void FUN_10910359c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1091035a0; end: 1091035b3;  */

void FUN_1091035a0(void)

{
  FUN_109103700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1091035b4; end: 1091035bf;  */

long FUN_1091035b4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc408;
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



/* Entry: 1091035c0; end: 1091035fb;  */

void FUN_1091035c0(void)

{
  func_0x000109103760();
  return;
}



/* Entry: 1091035fc; end: 10910366b;  */

void FUN_1091035fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10910309c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5960(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10910366c; end: 1091036ff;  */

long FUN_10910366c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc408;
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



/* Entry: 109103700; end: 10910370f;  */

void FUN_109103700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109103710; end: 109103737;  */

long FUN_109103710(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109103738; end: 109103777;  */

void FUN_109103738(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 109103778; end: 1091037ef; -[SCNPlayerAnalyticsTracerCppProxy initWithCpp:] */

undefined1 * FUN_109103778(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112700690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_109104060();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10909501c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091037f0; end: 10910388b; -[SCNPlayerAnalyticsTracerCppProxy beginAsyncTrace:name:] */

void FUN_1091037f0(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001091040ac();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000109104094();
  (**(code **)(*plVar1 + 0x10))(plVar1);
  func_0x000109104070();
  func_0x00010910407c();
  return;
}



/* Entry: 10910388c; end: 1091038eb; -[SCNPlayerAnalyticsTracerCppProxy endAsyncTrace:] */

void FUN_10910388c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 1091038ec; end: 10910397b; -[SCNPlayerAnalyticsTracerCppProxy asyncInstant:name:] */

void FUN_1091038ec(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001091040ac();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000109104094();
  (**(code **)(*plVar1 + 0x20))(plVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010910407c();
  return;
}



/* Entry: 10910397c; end: 109103a13; -[SCNPlayerAnalyticsTracerCppProxy asyncAnnotate:] */

void FUN_10910397c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000109104094();
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010910407c();
  return;
}



/* Entry: 109103a14; end: 109103b03;  */

void FUN_109103a14(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126dd608;
    _objc_opt_class(PTR_PTR_1126dd608);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adc530;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_109103c08);
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
      FUN_109103f54(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_109104060();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010910407c();
  return;
}



/* Entry: 109103b04; end: 109103b73;  */

void FUN_109103b04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110adbd18,&PTR_DAT_110adc4e8,0);
    if (lVar1 == 0) {
      FUN_109103f7c(param_1);
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



/* Entry: 109103b74; end: 109103bc7; -[SCNPlayerAnalyticsTracerCppProxy .cxx_destruct] */

void FUN_109103b74(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc630;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10909501c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109103bc8; end: 109103c07; -[SCNPlayerAnalyticsTracerCppProxy .cxx_construct] */

undefined8 * FUN_109103bc8(undefined8 *param_1)

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
      FUN_109104060();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109103c08; end: 109103cfb;  */

void FUN_109103c08(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110adc570;
  puVar1[3] = &PTR_DAT_110adc600;
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
      FUN_109104060();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110adc5c0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_109103f54(&uStack_50);
  return;
}



/* Entry: 109103cfc; end: 109103cff;  */

void FUN_109103cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109103d00; end: 109103d13;  */

void FUN_109103d00(void)

{
  FUN_109103f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109103d14; end: 109103d1f;  */

long FUN_109103d14(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc530;
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



/* Entry: 109103d20; end: 109103d5b;  */

void FUN_109103d20(void)

{
  func_0x0001091040f8();
  return;
}



/* Entry: 109103d5c; end: 109103dc3;  */

undefined8 FUN_109103d5c(void)

{
  undefined8 unaff_x22;
  
  func_0x0001091040c8();
  func_0x00010910411c();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  func_0x00010910408c();
  _objc_autoreleasePoolPop();
  return unaff_x22;
}



/* Entry: 109103dc4; end: 109103dfb;  */

void FUN_109103dc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf941e0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109103dfc; end: 109103e4f;  */

void FUN_109103dfc(void)

{
  func_0x0001091040c8();
  func_0x00010910411c();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c080();
  func_0x00010910408c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 109103e50; end: 109103eaf;  */

void FUN_109103e50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0bfe0(uVar2);
  func_0x00010910408c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109103eb0; end: 109103f43;  */

long FUN_109103eb0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110adc530;
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



/* Entry: 109103f44; end: 109103f53;  */

void FUN_109103f44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109103f54; end: 109103f7b;  */

long FUN_109103f54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109103f7c; end: 109103fef;  */

void FUN_109103f7c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc630;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_109104060();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109103ff0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109104104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109103ff0; end: 10910405f;  */

void FUN_109103ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd608;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_109104060();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10909501c(&uStack_30);
  return;
}



/* Entry: 109104060; end: 10910412f;  */

void FUN_109104060(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 109104130; end: 1091041bf;  */

void FUN_109104130(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf52780();
  uVar2 = param_2;
  func_0x00010bf8ab60();
  uVar3 = param_2;
  func_0x00010c2765a0();
  uVar4 = param_2;
  func_0x00010bf86980();
  uVar5 = param_2;
  func_0x00010c275ee0();
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar2;
  param_1[2] = (int)uVar3;
  param_1[3] = (int)uVar4;
  param_1[4] = (int)uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091041c0; end: 1091041f7;  */

void FUN_1091041c0(void)

{
  _objc_alloc(PTR_PTR_1126dd348);
  func_0x00010c006060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091041f8; end: 10910426f; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1091041f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112700698;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_109104898();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_109104870(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109104270; end: 109104303; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsCallbackCppProxy onVideoRendererPerformanceMetrics:] */

void FUN_109104270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_34 [20];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_109104130(auStack_34,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_34);
  func_0x0001091048b0();
  return;
}



/* Entry: 109104304; end: 1091043f7;  */

void FUN_109104304(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126dd610;
    _objc_opt_class(PTR_PTR_1126dd610);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adc688;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_1091044fc);
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
      FUN_109104764(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_109104898();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001091048b0();
  return;
}


