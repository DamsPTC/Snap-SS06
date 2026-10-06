/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106085cc8; end: 106085cd3; -[SCCameraSnapCreationLogger .cxx_destruct] */

void FUN_106085cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106085cd4; end: 106085d93; -[SCCameraUserActionMetadata initWithTouchStartLocation:isActivatingMode:] */

undefined1 *
FUN_106085cd4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5
             )

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ef748;
  dVar4 = param_1;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_1 = param_1 * dVar4;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_2 = param_2 * dVar4;
    *(double *)((long)puVar1 + 0x18) = param_1;
    *(double *)((long)puVar1 + 0x20) = param_2;
    _objc_release(puVar3);
    _objc_release(puVar2);
    _CACurrentMediaTime();
    *(double *)((long)puVar1 + 0x10) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106085d94; end: 106085d9b; -[SCCameraUserActionMetadata touchStartLocation] */

undefined1  [16] FUN_106085d94(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 106085d9c; end: 106085da3; -[SCCameraUserActionMetadata touchStartTimestamp] */

undefined8 FUN_106085d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106085da4; end: 106085dab; -[SCCameraUserActionMetadata isActivatingMode] */

undefined1 FUN_106085da4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106085dac; end: 106085f2b; -[SCCameraUserActionLogger initWithBlizzardLogger:cameraHardwareResources:captureDeviceManager:] */

undefined1 *
FUN_106085dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_48 = PTR_PTR_1126ef750;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5740();
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106085f2c; end: 106085f33; -[SCCameraUserActionLogger cameraUserActionDidStartWithItem:] */

void FUN_106085f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cameraUserActionDidStartWithItem_1125a87b0,param_3,0);
  return;
}



/* Entry: 106085f34; end: 106086003; -[SCCameraUserActionLogger cameraUserActionDidStartWithItem:isActivatingMode:] */

void FUN_106085f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c7788;
  _objc_alloc(PTR_PTR_1126c7788);
  func_0x00010c054a40(0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106086004; end: 10608600b; -[SCCameraUserActionLogger cameraUserActionDidStart:touchLocation:] */

void FUN_106086004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cameraUserActionDidStart_touchLo_1125a87a0,param_3,0);
  return;
}



/* Entry: 10608600c; end: 1060860f7; -[SCCameraUserActionLogger cameraUserActionDidStart:touchLocation:isActivatingMode:] */

void FUN_10608600c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf2b580(param_5);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c7788;
  _objc_alloc(PTR_PTR_1126c7788);
  func_0x00010c054a40(param_1,param_2);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3,param_4,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1060860f8; end: 106086153; -[SCCameraUserActionLogger cameraUserActionDidEnd:] */

void FUN_1060860f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf2b580(param_3);
  uVar2 = param_3;
  func_0x00010beef1e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf2b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cameraUserActionDidEndWithItem_a_1125a8780,uVar1,uVar2);
  return;
}



/* Entry: 106086154; end: 1060862fb; -[SCCameraUserActionLogger cameraUserActionDidEndWithItem:action:cameraStateTransitions:] */

void FUN_106086154(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_6);
  lVar2 = *(long *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3);
    _objc_release(puVar1);
    _CACurrentMediaTime();
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    _objc_initWeak(auStack_68,param_2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_retain(lVar2);
    uStack_90 = param_1;
    _objc_retain(param_6);
    uStack_88 = uVar4;
    uStack_80 = uVar5;
    uStack_78 = param_5;
    uStack_70 = param_4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_6);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 1060862fc; end: 1060864bb;  */

void FUN_1060862fc(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7790;
    _objc_alloc_init(PTR_PTR_1126c7790);
    func_0x00010c277460(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c21de00(puVar2,param_4,(long)(param_1 * 1000.0));
    func_0x00010c19d540(puVar2,param_4,(long)(*(double *)(param_3 + 0x40) * 1000.0));
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c06b6e0(uVar3);
    func_0x00010bdd94c0(uVar4,param_4,uVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177260(puVar2,param_4,uVar4);
    func_0x00010c1f75c0(puVar2,param_4,(long)*(double *)(param_3 + 0x48));
    dVar6 = *(double *)(param_3 + 0x50);
    func_0x00010c1f7160(puVar2,param_4,(long)dVar6);
    func_0x00010c277440(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c227500(puVar2,param_4,(long)dVar6);
    func_0x00010c277440(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c2276e0(puVar2,param_4,(long)param_2);
    func_0x00010c161620(puVar2,param_4,*(undefined8 *)(param_3 + 0x58));
    func_0x00010c2121a0(puVar2,param_4,*(undefined8 *)(param_3 + 0x60));
    func_0x00010c220e20(puVar2,param_4,&PTR____CFConstantStringClassReference_110e3c418);
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db760();
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c227be0((double)(long)(dVar6 * 100.0) / 100.0,puVar2);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060864bc; end: 1060864c3; -[SCCameraUserActionLogger cameraUserActionDidEndWithItem:action:] */

void FUN_1060864bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cameraUserActionDidEndWithItem_a_1125a8788,param_3,param_4,0);
  return;
}



/* Entry: 1060864c4; end: 106086583; -[SCCameraUserActionLogger cameraUserActionDidNotComplete:] */

void FUN_1060864c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf2b580(param_3);
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106086584; end: 106086663; -[SCCameraUserActionLogger _cameraStateTransitionsJSONStringForTransitions:isActivatingMode:] */

void FUN_106086584(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_3);
  }
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106086664; end: 1060866b7; -[SCCameraUserActionLogger .cxx_destruct] */

void FUN_106086664(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060866b8; end: 106086983; -[SCCoreCameraLogger initWithCameraLoggingServices:lazyLensLogger:cameraUserLoggingServices:startupInfoService:userLocationServices:] */

undefined1 *
FUN_1060866b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ef758;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_7;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b7008;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106086984; end: 106086993; -[SCCoreCameraLogger ccdStartDate] */

void FUN_106086984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110e3c458);
  return;
}



/* Entry: 106086994; end: 106086c07; -[SCCoreCameraLogger logCameraCreationDelayEventStartWithCaptureSessionId:filterLensId:underLowLightCondition:lightingCondition:isNightModeActive:isBackCamera:isMainCamera:isFlashEnabled:exposureBias:deviceType:activeCameraModes:captureRingStyle:cameraType:flashMode:] */

void FUN_106086994(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x60);
    func_0x00010c0720c0();
    if ((uVar1 & 1) != 0) goto LAB_106086b9c;
  }
  _CACurrentMediaTime();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = param_4;
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_85 = param_10;
  uStack_b0 = param_7;
  uStack_88 = param_6;
  uStack_87 = param_8;
  uStack_86 = param_9;
  _objc_retain(param_12);
  _objc_retain(param_13);
  uStack_a8 = param_1;
  _objc_retain(puVar2);
  _objc_retain(param_14);
  uStack_a0 = param_15;
  uStack_98 = param_16;
  uStack_90 = param_17;
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_14);
  _objc_release(puVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
LAB_106086b9c:
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106086c08; end: 106086c7b;  */

void FUN_106086c08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51080(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106086c7c; end: 10608711f; -[SCCoreCameraLogger _logCameraCreationDelayEventStartWithCaptureSessionId:filterLensId:underLowLightCondition:lightingCondition:isNightModeActive:isBackCamera:isMainCamera:isFlashEnabled:exposureBias:deviceType:startTime:startDate:activeCameraModes:captureRingStyle:cameraType:flashMode:] */

void FUN_106086c7c(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c12adc0(uVar4);
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x38));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110e15918);
  _objc_release(puVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,param_14,
                      &PTR____CFConstantStringClassReference_110e3c458);
  _objc_release(param_14);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,ppuVar1,
                      &PTR____CFConstantStringClassReference_110ea05f8);
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,ppuVar1,
                      &PTR____CFConstantStringClassReference_110eb5d58);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4b918);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4b938);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b618;
  if (param_9 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3c518;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,ppuVar1,
                      &PTR____CFConstantStringClassReference_110f4b998);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3c538;
  if ((char)param_10 == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3c558;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,ppuVar1,
                      &PTR____CFConstantStringClassReference_110f4b9b8);
  ppuVar3 = *(undefined ***)(param_2 + 0x80);
  func_0x00010c2523e0();
  func_0x0001005a8a60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,ppuVar1,
                      &PTR____CFConstantStringClassReference_110f4b9f8);
  _objc_release(ppuVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_10._1_1_);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110e42df8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bc58);
  _objc_release(puVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,param_12,
                      &PTR____CFConstantStringClassReference_110f4bc78);
  _objc_release(param_12);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_13;
  func_0x00010038f6c8(param_13);
  _objc_release(param_13);
  func_0x00010c0df780(puVar2,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bcd8);
  _objc_release(puVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,param_15,
                      &PTR____CFConstantStringClassReference_110f4bcf8);
  _objc_release(param_15);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bd18);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bd58);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bd78);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106087120; end: 1060871e7; -[SCCoreCameraLogger logCameraCreationDelayNormalizedMotionValue:isConsideredInMotion:] */

void FUN_106087120(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1060871e8; end: 10608721f;  */

void FUN_1060871e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be510e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106087220; end: 1060872b3; -[SCCoreCameraLogger _logCameraCreationDelayNormalizedMotionValue:isConsideredInMotion:] */

void FUN_106087220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110f4bc98);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110f4bcb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060872b4; end: 1060873b3; -[SCCoreCameraLogger logCameraModeUsageOnCameraRecordingDelayEventWithTimerModeActive:batchCaptureModeActive:timelineModeActive:musicModeActive:speedModeActive:speedModeRecordingSpeed:directorModeActive:] */

void FUN_1060872b4(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  uStack_70 = param_4;
  uStack_6f = param_5;
  uStack_6e = param_6;
  uStack_6d = param_7;
  uStack_6c = param_8;
  uStack_6b = param_9;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1060873b4; end: 1060873ff;  */

void FUN_1060873b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51280(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106087400; end: 1060875f7; -[SCCoreCameraLogger _logCameraModeUsageOnCameraRecordingDelayEventWithTimerModeActive:batchCaptureModeActive:timelineModeActive:musicModeActive:speedModeActive:speedModeRecordingSpeed:directorModeActive:] */

void FUN_106087400(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = 1;
    func_0x00010baee46c(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar1);
    _objc_release(uVar1);
  }
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = 3;
    func_0x00010baee46c(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar1);
    _objc_release(uVar1);
  }
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = 5;
    func_0x00010baee46c(5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar1);
    _objc_release(uVar1);
  }
  if (param_6 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = 6;
    func_0x00010baee46c(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar1);
    _objc_release(uVar1);
  }
  if (param_7 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = 0xe;
    func_0x00010baee46c(0xe);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c013ce0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,
                        &PTR____CFConstantStringClassReference_110e43818);
    _objc_release(puVar2);
  }
  if (param_8 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = 0xb;
    func_0x00010baee46c(0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1060875f8; end: 1060876b3; -[SCCoreCameraLogger logCameraCreationDelaySplitPointRecordingGestureFinished] */

void FUN_1060875f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1060876b4; end: 1060876e7;  */

void FUN_1060876b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51180(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060876e8; end: 1060877db; -[SCCoreCameraLogger _logCameraCreationDelaySplitPointRecordingGestureFinishedAtTime:] */

void FUN_1060876e8(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  dVar4 = param_1;
  func_0x00010c0e00e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110e15918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar5 = dVar4;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4be18);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bf885a0(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar5 / 1000.0 - (param_1 - dVar4),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar3,
                        &PTR____CFConstantStringClassReference_110f4b8f8);
    _objc_release(puVar3);
  }
  func_0x00010bdc85e0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110f4bd98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060877dc; end: 106087893; -[SCCoreCameraLogger updatedCameraCreationDelayWithContentDuration:] */

void FUN_1060877dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106087894; end: 1060878c7;  */

void FUN_106087894(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee51a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060878c8; end: 106087927; -[SCCoreCameraLogger _updatedCameraCreationDelayWithContentDuration:] */

void FUN_1060878c8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110f4b9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106087928; end: 1060879ff; -[SCCoreCameraLogger updatedCameraCreationDelayWithBufferedFrameCount:] */

void FUN_106087928(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106087a00; end: 106087a33;  */

void FUN_106087a00(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106087a34; end: 106087a47; -[SCCoreCameraLogger _updatedCameraCreationDelayWithBufferedFrameCount:] */

void FUN_106087a34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110f4bd38);
  return;
}



/* Entry: 106087a48; end: 106087b1f; -[SCCoreCameraLogger logCameraCreationDelayBracketCaptureSettings:] */

void FUN_106087a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106087b20; end: 106087b53;  */

void FUN_106087b20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106087b54; end: 106087c2f; -[SCCoreCameraLogger _logCameraCreationDelayBracketCaptureSettings:] */

void FUN_106087b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0768a0(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bb58);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bf20e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  func_0x00010c0df840(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110f4ba78);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106087c30; end: 106087d1b; -[SCCoreCameraLogger logCameraCreationDelaySplitPointStartImageCaptureWithSettings:] */

void FUN_106087c30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106087d1c; end: 106087d53;  */

void FUN_106087d1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be511a0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106087d54; end: 106087e3f; -[SCCoreCameraLogger _logCameraCreationDelaySplitPointStartImageCaptureWithSettings:time:] */

void FUN_106087d54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bdc85e0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110f4bf58);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_4;
  func_0x00010c074d20(param_4);
  func_0x00010c0df6e0(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4ba58);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_4;
  func_0x00010c0fb6a0(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110f4bb78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106087e40; end: 106087f2b; -[SCCoreCameraLogger logCameraCreationDelaySplitPointDidCapturePhotoWithResolvedSettings:] */

void FUN_106087e40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106087f2c; end: 106087f63;  */

void FUN_106087f2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51120(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106087f64; end: 10608801f; -[SCCoreCameraLogger logCaptureResultResolution:] */

void FUN_106087f64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106088020; end: 106088053;  */

void FUN_106088020(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be515e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106088054; end: 1060880ef; -[SCCoreCameraLogger _logCaptureResultResolution:] */

void FUN_106088054(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20),param_4,puVar1,
                      &PTR____CFConstantStringClassReference_110db1238);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20),param_4,puVar1,
                      &PTR____CFConstantStringClassReference_110db1258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060880f0; end: 106088197; -[SCCoreCameraLogger logCameraCreationDelayFingerDownCapture] */

void FUN_1060880f0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106088198; end: 1060881c3;  */

void FUN_106088198(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be510a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060881c4; end: 1060881df; -[SCCoreCameraLogger _logCameraCreationDelayFingerDownCapture] */

void FUN_1060881c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__112651bb8,
             PTR____kCFBooleanTrue_11034ab68,&PTR____CFConstantStringClassReference_110f4c018);
  return;
}



/* Entry: 1060881e0; end: 10608861b; -[SCCoreCameraLogger _logCameraCreationDelaySplitPointDidCapturePhotoWithResolvedSettings:time:] */

void FUN_1060881e0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bdc85e0(param_1,param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0731e0(param_4);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb460(param_4);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb460(param_4);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c110ae0(param_4);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c110ae0(param_4);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07fb20(param_4);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  uVar2 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_isDualCameraFusionEnabled_1125f9de0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar2 & 1) != 0) {
    func_0x00010c070f40(param_4);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
    _objc_release(puVar1);
  }
  uVar2 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_isRedEyeReductionEnabled_1125fca08);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar2 & 1) != 0) {
    func_0x00010c07bfe0(param_4);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
    _objc_release(puVar1);
  }
  uVar2 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_isVirtualDeviceFusionEnabled_1125fe810);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar2 & 1) != 0) {
    func_0x00010c083800(param_4);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c0fb640(&uStack_70,param_4);
  }
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_80 = uStack_60;
  _CMTimeGetSeconds(&uStack_90);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c0fb640(&uStack_70,param_4);
  }
  _CMTimeRangeGetEnd(&uStack_90,&uStack_70);
  _CMTimeGetSeconds(&uStack_90);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
  _objc_release(puVar1);
  uVar2 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_isContentAwareDistortionCorrecti_1125f9700);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar2 & 1) != 0) {
    func_0x00010c06f3c0(param_4);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18));
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10608861c; end: 1060886e7; -[SCCoreCameraLogger logCameraCreationDelaySplitPointPreviewPresentationComplete:] */

void FUN_10608861c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1060886e8; end: 10608871f;  */

void FUN_1060886e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51160(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106088720; end: 1060887ab; -[SCCoreCameraLogger _logCameraCreationDelaySplitPointPreviewPresentationComplete:time:] */

void FUN_106088720(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bdc85e0(param_2,param_3,&PTR____CFConstantStringClassReference_110f4c078);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,PTR_s__completeLogCameraCreationDelayE_112556528,param_4);
    return;
  }
  return;
}



/* Entry: 1060887ac; end: 106088877; -[SCCoreCameraLogger logCameraCreationDelaySplitPointPreviewFirstFramePlayed:] */

void FUN_1060887ac(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106088878; end: 1060888af;  */

void FUN_106088878(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51140(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060888b0; end: 10608893b; -[SCCoreCameraLogger _logCameraCreationDelaySplitPointPreviewFirstFramePlayed:time:] */

void FUN_1060888b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bdc85e0(param_2,param_3,&PTR____CFConstantStringClassReference_110f4bdb8);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,PTR_s__completeLogCameraCreationDelayE_112556528,param_4);
    return;
  }
  return;
}



/* Entry: 10608893c; end: 106088a27; -[SCCoreCameraLogger logCameraCreationDelaySplitPoint:] */

void FUN_10608893c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106088a28; end: 106088a5f;  */

void FUN_106088a28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc85e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106088a60; end: 106088b47; -[SCCoreCameraLogger logCameraCreationDelaySplitPoint:atTime:] */

void FUN_106088a60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106088b48; end: 106088b7f;  */

void FUN_106088b48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc85e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106088b80; end: 106088c6b; -[SCCoreCameraLogger startSegmentation:] */

void FUN_106088b80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106088c6c; end: 106088ca3;  */

void FUN_106088c6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec17e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106088ca4; end: 106088d5b; -[SCCoreCameraLogger _startSegmentation:time:] */

void FUN_106088ca4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_2 + 0x20);
  func_0x00010c0e00e0(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_106088d14;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x48),param_3,puVar1,param_4);
  }
  _objc_release(puVar1);
LAB_106088d14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106088d5c; end: 106088e47; -[SCCoreCameraLogger endSegmentation:] */

void FUN_106088d5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106088e48; end: 106088e7f;  */

void FUN_106088e48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be09ce0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106088e80; end: 106088f73; -[SCCoreCameraLogger _endSegmentation:time:] */

void FUN_106088e80(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x48);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                          (long)((param_1 - dVar4) * 1000.0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20),param_3,puVar3,param_4);
      _objc_release(puVar3);
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x48),param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106088f74; end: 10608901b; -[SCCoreCameraLogger cancelCameraCreationDelayEvent] */

void FUN_106088f74(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10608901c; end: 106089047;  */

void FUN_10608901c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106089048; end: 106089093; -[SCCoreCameraLogger _cancelCameraCreationDelayEvent] */

void FUN_106089048(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106089094; end: 1060890bb; -[SCCoreCameraLogger cameraCreationDelayCompletionTimeObservable] */

void FUN_106089094(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060890bc; end: 106089163; -[SCCoreCameraLogger logCameraRecordingDelay] */

void FUN_1060890bc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106089164; end: 10608918f;  */

void FUN_106089164(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be512c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106089190; end: 10608928f; -[SCCoreCameraLogger _logCameraRecordingDelay] */

void FUN_106089190(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_2 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7798;
    _objc_alloc_init(PTR_PTR_1126c7798);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110f4be18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar3);
    func_0x00010c1b92c0(puVar2,param_3,(long)param_1);
    lVar1 = param_2;
    func_0x00010bdd6aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fefc0(puVar2,param_3,lVar1);
    _objc_release(lVar1);
    func_0x00010c176a60(puVar2,param_3,*(undefined8 *)(param_2 + 0x40));
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010bf1cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106089290; end: 10608938f; -[SCCoreCameraLogger logCameraMLProcessingInfoWithFeatureIdentifier:info:] */

void FUN_106089290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106089390; end: 1060893c3;  */

void FUN_106089390(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060893c4; end: 10608941f; -[SCCoreCameraLogger _logCameraMLProcessingInfoWithFeatureIdentifier:info:] */

void FUN_1060893c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bf51e00(param_4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,param_4,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106089420; end: 10608944f; -[SCCoreCameraLogger cameraShortcutStartWithId:] */

void FUN_106089420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106089450; end: 10608945f; -[SCCoreCameraLogger cameraShortcutEnd] */

void FUN_106089450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106089460; end: 106089537; -[SCCoreCameraLogger logBatchCaptureCreationEventStartWithSnapSessionId:] */

void FUN_106089460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106089538; end: 10608956b;  */

void FUN_106089538(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be508a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608956c; end: 10608957f; -[SCCoreCameraLogger _logBatchCaptureCreationEventStartWithSnapSessionId:] */

void FUN_10608956c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e445d8);
  return;
}



/* Entry: 106089580; end: 10608963b; -[SCCoreCameraLogger logBatchCaptureCreationEventImageContentReady] */

void FUN_106089580(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10608963c; end: 10608966f;  */

void FUN_10608963c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50820(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106089670; end: 106089833; -[SCCoreCameraLogger _logBatchCaptureCreationEventImageContentReadyAtTime:] */

void FUN_106089670(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_2 + 0x28);
  uVar10 = param_1;
  func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110f4b818);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2827c0();
  _objc_release(lVar3);
  uVar1 = lVar4 + 1;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar5,
                      &PTR____CFConstantStringClassReference_110f4b818);
  _objc_release(puVar5);
  lVar3 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110f4b898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f4b898);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0e00e0(uVar6,param_3,&PTR____CFConstantStringClassReference_110e15918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = uVar10;
  func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b8f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  lVar3 = param_2;
  func_0x00010be47320(uVar10,param_1,uVar11,param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar8 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0(lVar8,param_3,&PTR____CFConstantStringClassReference_110f4b838);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0b4ca0();
  _objc_release(lVar8);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (ulong)(lVar3 + lVar9 * lVar4) / uVar1;
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar5,
                      &PTR____CFConstantStringClassReference_110f4b838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106089834; end: 1060898ef; -[SCCoreCameraLogger logBatchCaptureCreationEventVideoContentReady] */

void FUN_106089834(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1060898f0; end: 106089923;  */

void FUN_1060898f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be508c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106089924; end: 106089ae7; -[SCCoreCameraLogger _logBatchCaptureCreationEventVideoContentReadyAtTime:] */

void FUN_106089924(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_2 + 0x28);
  uVar10 = param_1;
  func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110e09f98);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2827c0();
  _objc_release(lVar3);
  uVar1 = lVar4 + 1;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar5,
                      &PTR____CFConstantStringClassReference_110e09f98);
  _objc_release(puVar5);
  lVar3 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110f4b898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,PTR____kCFBooleanFalse_11034ab60,
                        &PTR____CFConstantStringClassReference_110f4b898);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0e00e0(uVar6,param_3,&PTR____CFConstantStringClassReference_110e15918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = uVar10;
  func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b8f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  lVar3 = param_2;
  func_0x00010be47320(uVar10,param_1,uVar11,param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar8 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0(lVar8,param_3,&PTR____CFConstantStringClassReference_110f4b838);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0b4ca0();
  _objc_release(lVar8);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (ulong)(lVar3 + lVar9 * lVar4) / uVar1;
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar5,
                      &PTR____CFConstantStringClassReference_110f4b838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106089ae8; end: 106089ba3; -[SCCoreCameraLogger logBatchCaptureCreationEventStartPreview] */

void FUN_106089ae8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106089ba4; end: 106089bd7;  */

void FUN_106089ba4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50880(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106089bd8; end: 106089c27; -[SCCoreCameraLogger _logBatchCaptureCreationEventStartPreviewAtTime:] */

void FUN_106089bd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110f4b8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106089c28; end: 106089cdf; -[SCCoreCameraLogger logBatchCaptureCreationEventIsFromSnapRecovery:] */

void FUN_106089c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106089ce0; end: 106089d13;  */

void FUN_106089ce0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106089d14; end: 106089d63; -[SCCoreCameraLogger _logBatchCaptureCreationEventIsFromSnapRecovery:] */

void FUN_106089d14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110f4b8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106089d64; end: 106089e1f; -[SCCoreCameraLogger logBatchCaptureCreationEventPreviewFirstFrameRendered] */

void FUN_106089d64(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106089e20; end: 106089e53;  */

void FUN_106089e20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50860(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106089e54; end: 10608a17b; -[SCCoreCameraLogger _logBatchCaptureCreationEventPreviewFirstFrameRenderedAtTime:] */

void FUN_106089e54(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  dVar8 = param_1;
  func_0x00010c0e00e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110f4b8d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x28);
    func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110e445d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126c77a0;
      _objc_opt_new(PTR_PTR_1126c77a0);
      lVar3 = *(long *)(param_2 + 0x30);
      func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110f4b8b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010c0e00e0(uVar5,param_3,&PTR____CFConstantStringClassReference_110f4b8b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar5);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                            (long)((param_1 - dVar8) * 1000.0));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar6,
                            &PTR____CFConstantStringClassReference_110f4b878);
        _objc_release(puVar6);
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b878);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c0b4ca0();
        func_0x00010c1e1f60(puVar4,param_3,uVar5);
        _objc_release(uVar7);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar5,param_3,&PTR____CFConstantStringClassReference_110e445d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205660(puVar4,param_3,uVar5);
      _objc_release(uVar5);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b818);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0b4ca0();
      func_0x00010c1aa180(puVar4,param_3,uVar5);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110e09f98);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0b4ca0();
      func_0x00010c2214a0(puVar4,param_3,uVar5);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b838);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0b4ca0();
      func_0x00010c16df00(puVar4,param_3,uVar5);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b858);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0b4ca0();
      func_0x00010c16dfc0(puVar4,param_3,uVar5);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f4b898);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010bf1f3c0();
      func_0x00010c1b10e0(puVar4,param_3,uVar5);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + 0x58);
      func_0x00010bf1cf00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar5);
      _objc_release(uVar7);
      func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x28));
      func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 10608a17c; end: 10608a223; -[SCCoreCameraLogger cancelBatchCaptureCreationEvent] */

void FUN_10608a17c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10608a224; end: 10608a24f;  */

void FUN_10608a224(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


