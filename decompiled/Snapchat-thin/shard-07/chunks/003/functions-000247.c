/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105483784; end: 10548379b; -[SCBitmojiFlatlandCOFConfigProvider previewEngineType] */

void FUN_105483784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110de0e98,0,0);
  return;
}



/* Entry: 10548379c; end: 1054838cb; -[SCBitmojiFlatlandCOFConfigProvider backgroundIdentifiers] */

void FUN_10548379c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be909a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  lVar1 = param_1;
  func_0x00010bf87460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054838cc; end: 10548392f;  */

void FUN_1054838cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be26360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105483930; end: 10548397f;  */

void FUN_105483930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0a15c0(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105483980; end: 105483987;  */

void FUN_105483980(void)

{
  return;
}



/* Entry: 105483988; end: 105483ab7; -[SCBitmojiFlatlandCOFConfigProvider sceneIdentifiers] */

void FUN_105483988(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be909a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  lVar1 = param_1;
  func_0x00010bf87460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105483ab8; end: 105483b1b;  */

void FUN_105483ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be2f980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105483b1c; end: 105483b6b;  */

void FUN_105483b1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0aebe0(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105483b6c; end: 105483b73;  */

void FUN_105483b6c(void)

{
  return;
}



/* Entry: 105483b74; end: 105483bf7; -[SCBitmojiFlatlandCOFConfigProvider defaultBackgroundIdentifier] */

void FUN_105483b74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf68de0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105483bf8; end: 105483d87; -[SCBitmojiFlatlandCOFConfigProvider defaultBackgroundIdentifierForUserId:] */

void FUN_105483bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010beffe40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar3);
  lVar2 = lVar1;
  func_0x00010bf87460(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105483d88; end: 105483def;  */

void FUN_105483d88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be36c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105483df0; end: 105483ec3;  */

void FUN_105483df0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105483ec4; end: 105483ed3;  */

void FUN_105483ec4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logDefaultBackground__112606cf8,param_2);
  return;
}



/* Entry: 105483ed4; end: 10548402b; -[SCBitmojiFlatlandCOFConfigProvider allDefaultBackgroundIdentifiers] */

void FUN_105483ed4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010be909a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  lVar1 = param_1;
  func_0x00010bf87460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10548402c; end: 10548408f;  */

void FUN_10548402c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be26340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105484090; end: 1054840df;  */

void FUN_105484090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0a4bc0(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054840e0; end: 1054840e7;  */

void FUN_1054840e0(void)

{
  return;
}



/* Entry: 1054840e8; end: 1054841e3;  */

void FUN_1054840e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1054841e4;
  uStack_30 = 0x1054841f4;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054841e4; end: 1054841fb;  */

void FUN_1054841e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054841fc; end: 10548426b;  */

void FUN_1054841fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfe5fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10548426c; end: 1054842b3;  */

void FUN_10548426c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054842b4; end: 105484337; -[SCBitmojiFlatlandCOFConfigProvider defaultSceneIdentifier] */

void FUN_1054842b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a200(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105484338; end: 1054844c7; -[SCBitmojiFlatlandCOFConfigProvider defaultSceneIdentifierForUserId:] */

void FUN_105484338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010beffe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar3);
  lVar2 = lVar1;
  func_0x00010bf87460(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1054844c8; end: 10548452f;  */

void FUN_1054844c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be36c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105484530; end: 105484603;  */

void FUN_105484530(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105484604; end: 105484613;  */

void FUN_105484604(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logDefaultScene__112606d10,param_2);
  return;
}



/* Entry: 105484614; end: 10548476b; -[SCBitmojiFlatlandCOFConfigProvider allDefaultSceneIdentifiers] */

void FUN_105484614(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010be909a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  lVar1 = param_1;
  func_0x00010bf87460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10548476c; end: 1054847cf;  */

void FUN_10548476c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be2f960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054847d0; end: 10548481f;  */

void FUN_1054847d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0a4c20(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105484820; end: 105484827;  */

void FUN_105484820(void)

{
  return;
}



/* Entry: 105484828; end: 105484923;  */

void FUN_105484828(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1054841e4;
  uStack_30 = 0x1054841f4;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105484924; end: 105484993;  */

void FUN_105484924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfe5fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105484994; end: 1054849db;  */

void FUN_105484994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054849dc; end: 105484abf; -[SCBitmojiFlatlandCOFConfigProvider newContentAlertsConfig] */

undefined8 FUN_1054849dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be909a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf87460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return uVar1;
}



/* Entry: 105484ac0; end: 105484b23;  */

void FUN_105484ac0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be2cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105484b24; end: 105484b43;  */

void FUN_105484b24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_failure__11260dc18,&PTR___NSConcreteGlobalBlock_11088c720,
             &PTR___NSConcreteGlobalBlock_11088c740);
  return;
}



/* Entry: 105484b44; end: 105484d43; -[SCBitmojiFlatlandCOFConfigProvider cacheVersionForAvatarID:friendAvatarID:sceneID:] */

/* WARNING: Removing unreachable block (ram,0x000105484c68) */

ulong FUN_105484b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  if (lRam00000001136bbfa8 != -1) {
    func_0x00010002a2fc(0x1136bbfa8,&PTR___NSConcreteGlobalBlock_11088c850);
  }
  puVar1 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar2 = puRam00000001136bbfa0;
  func_0x00010bf63640(puRam00000001136bbfa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar1);
  _objc_release(puVar2);
  lVar3 = lVar5;
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puRam00000001136bbfa0;
  if (lVar3 == 0) {
    _objc_retain(puRam00000001136bbfa0);
  }
  else {
    puVar2 = PTR_PTR_1126afd68;
    _objc_alloc(PTR_PTR_1126afd68);
    lVar4 = lVar3;
    func_0x00010c296d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar2);
    _objc_retain(0);
    _objc_release(lVar4);
    _objc_retain(puVar2);
    _objc_release(0);
    _objc_release(puVar2);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lVar5);
  puVar1 = puVar2;
  func_0x00010bf5e2e0(puVar2);
  uVar6 = (ulong)puVar1 & 0xffffffff;
  puVar1 = puVar2;
  func_0x00010c0d98e0(puVar2);
  func_0x00010c0d9900(puVar2);
  func_0x0001064c9b24(uVar6,(ulong)puVar1 & 0xffffffff,param_3,param_4,param_5);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105484d44; end: 105484df7; -[SCBitmojiFlatlandCOFConfigProvider clientRendererLensIdForAvatarId:friendAvatarId:featureAttribution:renderStyle:] */

undefined8
FUN_105484d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfc3b60(lVar1,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000109006644(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfc6f60(uVar2,param_2,param_5,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 105484df8; end: 105484f0b; -[SCBitmojiFlatlandCOFConfigProvider _requestCOFProtoForKey:transform:] */

void FUN_105484df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105484f0c; end: 105484f73;  */

void FUN_105484f0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105484f74; end: 105485123; -[SCBitmojiFlatlandCOFConfigProvider _createCOFProtoDisposableObserverForKey:observer:transform:] */

void FUN_105484f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdf9620(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1195c0(uVar2);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105485124; end: 1054851ff;  */

void FUN_105485124(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0) {
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar4 = 1;
      FUN_1054821a8(1,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x30);
      (**(code **)(puVar3 + 0x10))(puVar3,param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105485200; end: 105485213;  */

void FUN_105485200(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105485214; end: 10548548b; -[SCBitmojiFlatlandCOFConfigProvider _handleBackgroundIdentifiersResponse:] */

void FUN_105485214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126b95b0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_68 = 0;
  func_0x00010c008360(puVar2,param_2,uVar3,&lStack_68);
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = puVar2;
    func_0x00010bf140a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bec54c0(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = puVar2;
    func_0x00010c0d84e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10548548c;
    puStack_80 = &UNK_1108803c8;
    _objc_retain(puVar5);
    puStack_78 = puVar5;
    uStack_70 = param_1;
    func_0x00010bf980c0(puVar7,param_2,&puStack_98);
    _objc_release(puVar7);
    puVar7 = puVar2;
    func_0x00010bf13e80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar4;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1054854cc;
    puStack_b8 = &UNK_11088c7c0;
    uStack_b0 = param_1;
    puStack_a8 = puVar5;
    puStack_a0 = puVar6;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    func_0x00010bf97ce0(puVar7,param_2,&puStack_d0);
    _objc_release(puVar7);
    puVar4 = PTR_PTR_1126b95b8;
    _objc_alloc(PTR_PTR_1126b95b8);
    puVar7 = puVar2;
    func_0x00010c298be0(puVar2);
    func_0x00010c060a00(puVar4,param_2,(long)(int)puVar7,uVar3,puVar5,puVar6);
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puStack_a0);
    _objc_release(puStack_a8);
    _objc_release(puStack_78);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
  }
  else {
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10548548c; end: 1054854cb;  */

void FUN_10548548c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bec5740(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054854cc; end: 105485553;  */

void FUN_1054854cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec5740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0788e0();
  if ((int)uVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  uVar2 = param_3;
  func_0x00010c07a5a0();
  if ((int)uVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105485554; end: 10548575f; -[SCBitmojiFlatlandCOFConfigProvider _handleSceneIdentifiersResponse:] */

void FUN_105485554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126b95c0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_58 = 0;
  func_0x00010c008360(puVar2,param_2,uVar3,&lStack_58);
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = puVar2;
    func_0x00010c14fac0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bec54c0(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c0d8fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bec54c0(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c2a4ac0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bec54c0(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b95c8;
    _objc_alloc(PTR_PTR_1126b95c8);
    puVar7 = puVar2;
    func_0x00010c298be0(puVar2);
    func_0x00010bde2140(param_1,param_2,uVar3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0609e0(puVar4,param_2,(long)(int)puVar7,param_1,uVar5);
    _objc_release(param_1);
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  else {
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105485760; end: 1054858bf; -[SCBitmojiFlatlandCOFConfigProvider _handleBackgroundDefaultsResponse:] */

void FUN_105485760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b95d0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_48 = 0;
  func_0x00010c008360(puVar2,param_2,uVar3,&lStack_48);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = puVar2;
    func_0x00010bf140a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec54c0(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b95d8;
    _objc_alloc(PTR_PTR_1126b95d8);
    puVar5 = puVar2;
    func_0x00010c298be0(puVar2);
    func_0x00010c0609c0(puVar4,param_2,(long)(int)puVar5,param_1);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  else {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054858c0; end: 105485a1f; -[SCBitmojiFlatlandCOFConfigProvider _handleSceneDefaultsResponse:] */

void FUN_1054858c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b95e0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_48 = 0;
  func_0x00010c008360(puVar2,param_2,uVar3,&lStack_48);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = puVar2;
    func_0x00010c14fac0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec54c0(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b95e8;
    _objc_alloc(PTR_PTR_1126b95e8);
    puVar5 = puVar2;
    func_0x00010c298be0(puVar2);
    func_0x00010c0609c0(puVar4,param_2,(long)(int)puVar5,param_1);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  else {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105485a20; end: 105485b5b; -[SCBitmojiFlatlandCOFConfigProvider _handleNewContentAlertsConfigResponse:] */

void FUN_105485a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b95f0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_48 = 0;
  func_0x00010c008360(puVar2,param_2,uVar3,&lStack_48);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b95f8;
    _objc_alloc(PTR_PTR_1126b95f8);
    puVar5 = puVar2;
    func_0x00010bf92180(puVar2);
    puVar6 = puVar2;
    func_0x00010bf91aa0(puVar2);
    puVar7 = puVar2;
    func_0x00010bf8fb80(puVar2);
    func_0x00010c00f900(puVar4,param_2,puVar5,puVar6,puVar7);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105485b5c; end: 105485b8b; -[SCBitmojiFlatlandCOFConfigProvider _stringFromInt:] */

void FUN_105485b5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  return;
}



/* Entry: 105485b8c; end: 105485c53; -[SCBitmojiFlatlandCOFConfigProvider _stringArrayFromProtoIntArray:] */

void FUN_105485b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105485c54;
  puStack_48 = &UNK_1108803c8;
  puStack_40 = puVar2;
  uStack_38 = param_1;
  _objc_retain();
  func_0x00010bf980c0(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_40);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105485c54; end: 105485c93;  */

void FUN_105485c54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bec5740(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105485c94; end: 105485dd7; -[SCBitmojiFlatlandCOFConfigProvider _identifierResultFromListResult:userId:] */

void FUN_105485c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1054841e4;
  uStack_60 = 0x1054841f4;
  uStack_58 = 0;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105485dd8; end: 105485e7f;  */

void FUN_105485dd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  func_0x00010bf529e0(param_2);
  func_0x00010bfdeca0(uVar4);
  uVar4 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105485e80; end: 105485ec7;  */

void FUN_105485e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105485ec8; end: 105485fd3; -[SCBitmojiFlatlandCOFConfigProvider _combineSceneIdentifiers:withWheelChairIdentifiers:] */

void FUN_105485ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010bf0a0c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110de0eb8);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105485fd4;
  puStack_48 = &UNK_11088c820;
  puStack_40 = puVar2;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010bf97e80(param_4,param_2,&puStack_60);
  _objc_release(param_4);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105485fd4; end: 105486017;  */

void FUN_105485fd4(long param_1,undefined8 param_2)

{
  func_0x00010c25ce40(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105486018; end: 1054861bf; -[SCBitmojiFlatlandCOFConfigProvider _defaultProtoForConfigKey:] */

void FUN_105486018(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      puVar4 = *(undefined **)(param_1 + 0x38);
      _objc_retain(puVar4);
      goto LAB_105486184;
    }
    puVar4 = PTR_PTR_1126b95e0;
    _objc_alloc_init(PTR_PTR_1126b95e0);
    func_0x00010c220e20();
    puVar2 = PTR_PTR_1126b7828;
    _objc_alloc(PTR_PTR_1126b7828);
    func_0x00010c060580();
    func_0x00010c1f66e0(puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126b95d0;
    _objc_alloc_init(PTR_PTR_1126b95d0);
    func_0x00010c220e20();
    puVar2 = PTR_PTR_1126b7828;
    _objc_alloc(PTR_PTR_1126b7828);
    func_0x00010c060580();
    func_0x00010c16e6e0(puVar4);
  }
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126af7d0;
  _objc_opt_new();
  func_0x00010c220160();
  _objc_release(puVar2);
LAB_105486184:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_destroyWeak(param_3 + 0x28);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1054861c0; end: 105486297; -[SCBitmojiFlatlandCOFConfigProvider .cxx_destruct] */

void FUN_1054861c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105486298; end: 10548642b;  */

void FUN_105486298(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af5d0;
    puVar3 = PTR_PTR_1126ae6b8;
    if (puVar5 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfa7840();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10548642c; end: 1054864df;  */

void FUN_10548642c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126af5d0;
  if (param_2 < puVar1) {
    puVar2 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054864e0; end: 1054865ab; -[SCBitmojiFlatlandCombinedContentFetcher initWithContentManager:contentFetcher:petImageFetcher:] */

undefined1 *
FUN_1054864e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8680;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054865ac; end: 1054867cb; -[SCBitmojiFlatlandCombinedContentFetcher fetchSceneImage:withBackgroundImage:petImageURL:friendPetImageURL:] */

void FUN_1054865ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_105486298(uVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_105486298(uVar3,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa5260();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  puVar6 = PTR_PTR_1126ae6b8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar1;
  uStack_80 = uVar4;
  uStack_78 = uVar2;
  uStack_70 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_90;
  _objc_copyWeak(auStack_98,puVar11);
  func_0x00010bf41860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume(param_3);
    _objc_retain(puVar11);
    puVar7 = puVar11;
    FUN_10548642c(puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    FUN_10548642c(puVar11,1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    FUN_10548642c(puVar11,2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    FUN_10548642c(puVar11,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar5 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bde2160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054867cc; end: 1054868c3;  */

void FUN_1054867cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_10548642c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_10548642c(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10548642c(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_10548642c(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bde2160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1054868c4; end: 105486aef; -[SCBitmojiFlatlandCombinedContentFetcher fetchSceneImage:withGenerativeBackgroundURL:petImageURL:friendPetImageURL:] */

void FUN_1054868c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_105486298(uVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_105486298(uVar3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1820(param_3);
  lVar4 = param_1;
  func_0x00010be0fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  puVar6 = PTR_PTR_1126ae6b8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar1;
  lStack_80 = lVar4;
  uStack_78 = uVar2;
  uStack_70 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_90;
  _objc_copyWeak(auStack_98,puVar11);
  func_0x00010bf41860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume(param_3);
    _objc_retain(puVar11);
    puVar7 = puVar11;
    FUN_10548642c(puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    FUN_10548642c(puVar11,1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    FUN_10548642c(puVar11,2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    FUN_10548642c(puVar11,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar5 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bde2160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105486af0; end: 105486be7;  */

void FUN_105486af0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_10548642c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_10548642c(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10548642c(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_10548642c(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bde2160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105486be8; end: 105486c97; -[SCBitmojiFlatlandCombinedContentFetcher _fetchBackgroundForUrl:feature:] */

void FUN_105486be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bdc3460(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5e60(uVar3,param_2,puVar1,param_3,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_11088c8a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105486c98; end: 105486d93;  */

void FUN_105486c98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105486d94;
  uStack_30 = 0x105486da4;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105486d94; end: 105486dab;  */

void FUN_105486d94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105486dac; end: 105486e1b;  */

void FUN_105486dac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105486e1c; end: 105486e63;  */

void FUN_105486e1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105486e64; end: 105487317; -[SCBitmojiFlatlandCombinedContentFetcher _combineSceneImageResult:backgroundImageResult:petImageResult:friendPetImageResult:] */

void FUN_105486e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uVar4 = 0x3032000000;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105486d94;
  uStack_a0 = 0x105486da4;
  uStack_98 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_105486d94;
  uStack_d0 = 0x105486da4;
  uStack_c8 = 0;
  puStack_118 = &uStack_120;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_105486d94;
  uStack_100 = 0x105486da4;
  uStack_f8 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  pcStack_138 = FUN_105486d94;
  uStack_130 = 0x105486da4;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_105486d94;
  uStack_160 = 0x105486da4;
  uStack_158 = 0;
  func_0x00010c0c0800(param_5);
  if (puStack_178[5] == 0) {
    func_0x00010c0c0800(param_6);
    if (puStack_178[5] == 0) {
      if (param_7 != 0) {
        func_0x00010c0c0800(param_7);
      }
      if (param_8 != 0) {
        func_0x00010c0c0800(param_8);
      }
      func_0x00010c23d0a0(puStack_b8[5]);
      func_0x00010c23d0a0(puStack_e8[5]);
      func_0x00010c23d0a0(puStack_e8[5]);
      func_0x00010c23d0a0(puStack_e8[5]);
      func_0x00010c23d0a0(puStack_b8[5]);
      func_0x00010c23d0a0(puStack_b8[5]);
      puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x00010c0469e0(uVar4,param_2);
      puVar2 = puVar1;
      func_0x00010bfe91c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105487318; end: 10548742f;  */

void FUN_105487318(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105487430; end: 105487433;  */

void FUN_105487430(void)

{
  return;
}



/* Entry: 105487434; end: 10548746b;  */

void FUN_105487434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10548746c; end: 10548746f;  */

void FUN_10548746c(void)

{
  return;
}



/* Entry: 105487470; end: 105487643;  */

void FUN_105487470(long param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_2);
  func_0x00010bf89920(0,0,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  dVar1 = *(double *)(param_1 + 0x58);
  dVar2 = *(double *)(param_1 + 0x78);
  dVar5 = dVar1 + dVar2 * 0.92;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    func_0x00010bdc1000(param_2);
    _CGContextSaveGState();
    func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    if ((dVar1 <= 0.0) || (dVar2 <= 0.0)) {
      dVar3 = *(double *)PTR__CGSizeZero_110347620;
      dVar4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      dVar4 = *(double *)(param_1 + 0x80) / dVar1;
      dVar3 = *(double *)(param_1 + 0x88) / dVar2;
      if (dVar3 <= dVar4) {
        dVar4 = dVar3;
      }
      dVar3 = dVar1 * dVar4;
      dVar4 = dVar2 * dVar4;
    }
    dVar1 = *(double *)(param_1 + 0x40) * 0.1;
    dVar2 = dVar5 - dVar4;
    func_0x00010bdc1000(param_2);
    _CGContextTranslateCTM(dVar3 + dVar1 * 2.0,0);
    func_0x00010bdc1000(param_2);
    _CGContextScaleCTM(0xbff0000000000000,0x3ff0000000000000);
    func_0x00010bf89920(dVar1,dVar2,dVar3,dVar4,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    func_0x00010bdc1000(param_2);
    _CGContextRestoreGState();
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
    func_0x00010c23d0a0();
    if ((dVar1 <= 0.0) || (dVar2 <= 0.0)) {
      dVar1 = *(double *)PTR__CGSizeZero_110347620;
      dVar2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      dVar4 = *(double *)(param_1 + 0x80) / dVar1;
      dVar3 = *(double *)(param_1 + 0x88) / dVar2;
      if (dVar3 <= dVar4) {
        dVar4 = dVar3;
      }
      dVar1 = dVar1 * dVar4;
      dVar2 = dVar2 * dVar4;
    }
    func_0x00010bf89920(*(double *)(param_1 + 0x40) * 0.9 - dVar1,dVar5 - dVar2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105487644; end: 10548767f; -[SCBitmojiFlatlandCombinedContentFetcher .cxx_destruct] */

void FUN_105487644(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105487680; end: 105487783; -[SCBitmojiFlatlandContentFetcher initWithContentManager:configProvider:opsMetricsLogger:randomFloat:renderConfigProvider:] */

undefined1 *
FUN_105487680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8688;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105487784; end: 1054878cb; -[SCBitmojiFlatlandContentFetcher fetchBackgroundForRequest:] */

void FUN_105487784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  func_0x00010be0fde0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_1;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf87460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054878cc; end: 1054879d3;  */

void FUN_1054878cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50700(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
  uVar2 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010c0c0800(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1054879d4; end: 1054879db;  */

void FUN_1054879d4(void)

{
  return;
}



/* Entry: 1054879dc; end: 105487af7;  */

void FUN_1054879dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105487af8;
  uStack_40 = 0x105487b08;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105487af8; end: 105487b0f;  */

void FUN_105487af8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105487b10; end: 105487b7f;  */

void FUN_105487b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105487b80; end: 105487bc7;  */

void FUN_105487b80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105487bc8; end: 105487c1b; -[SCBitmojiFlatlandContentFetcher fetchSceneForRequest:] */

void FUN_105487bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be8dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13b20(param_1,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105487c1c; end: 105487c6f; -[SCBitmojiFlatlandContentFetcher fetchSceneImageDataForRequest:] */

void FUN_105487c1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be8dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13b00(param_1,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105487c70; end: 105487cf7; -[SCBitmojiFlatlandContentFetcher fetchSelfieForRequest:] */

void FUN_105487c70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c14fb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  uVar1 = 1;
  if (lVar3 == 1) {
    uVar1 = 2;
  }
  func_0x00010be13b20(param_1,param_2,lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105487cf8; end: 105487cff; -[SCBitmojiFlatlandContentFetcher fetchStickerForRequest:] */

void FUN_105487cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be13b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchSceneImageForRequest_scene_112562868,param_3,3);
  return;
}



/* Entry: 105487d00; end: 105487d87; -[SCBitmojiFlatlandContentFetcher fetchSelfieImageDataForRequest:] */

void FUN_105487d00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c14fb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  uVar1 = 1;
  if (lVar3 == 1) {
    uVar1 = 2;
  }
  func_0x00010be13b00(param_1,param_2,lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105487d88; end: 105487e73; -[SCBitmojiFlatlandContentFetcher _fetchSceneImageForRequest:sceneType:] */

void FUN_105487d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  func_0x00010be13ae0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105487e74;
  puStack_50 = &UNK_11088ca30;
  uStack_48 = uVar2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  lVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105487e74; end: 105488073;  */

void FUN_105487e74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105487af8;
  uStack_80 = 0x105487b08;
  uStack_78 = 0;
  uVar1 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c14fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfda7c0();
  uVar3 = param_2;
  func_0x00010bf267e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe89c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar4 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105488074; end: 1054880e3;  */

void FUN_105488074(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054880e4; end: 1054881ab;  */

void FUN_1054880e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054881ac; end: 1054881f7; -[SCBitmojiFlatlandContentFetcher _fetchSceneImageDataForRequest:sceneType:] */

void FUN_1054881ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be13ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054881f8; end: 105488313;  */

void FUN_1054881f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105487af8;
  uStack_40 = 0x105487b08;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105488314; end: 105488383;  */

void FUN_105488314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


