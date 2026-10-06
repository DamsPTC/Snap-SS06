/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10084227c; end: 10084228b; -[SCMainCameraScreenRouterImpl _createLensCarouselLayoutGuideWithContainerView:] */

void FUN_10084227c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_110916568);
  return;
}



/* Entry: 10084228c; end: 100842593; -[SCMainCameraPresentationWorkflow beginWithUIContainers:viewControllerLifecycleEvents:] */

void FUN_10084228c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_78,param_1);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  uVar2 = param_3;
  func_0x000107c4df6c(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4a210();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_100843530;
  puStack_d0 = &UNK_110915248;
  puStack_c8 = &uStack_98;
  func_0x000107c6111c(auStack_c0,auStack_78);
  uVar5 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_3;
  func_0x000107c3f23c(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4a210();
  func_0x000107c61180();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1008436f0;
  puStack_f8 = &UNK_1108bc298;
  puStack_f0 = &uStack_b8;
  uVar5 = uVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_4;
  func_0x000107c5de90(param_4);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_118,auStack_78);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_118);
  func_0x000107c61120(auStack_c0);
  func_0x000107c60bcc(&uStack_b8,8);
  func_0x000107c60bcc(&uStack_98,8);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100842594; end: 10084259b; -[SCMainCameraScreenRouterImpl operaUIContainer] */

undefined8 FUN_100842594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10084259c; end: 1008426cb;  */

void FUN_10084259c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x30;
  func_0x000107c61148(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c3b32c(lVar2,param_2,uVar1,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3b1f8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008426cc; end: 100842877; -[SCMainCameraScreenRootViewController initWithHeaderItem:cameraConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008426cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f06c8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61144(auStack_58,puVar1);
    lVar5 = (long)_DAT_1127433d4;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127433d8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127433d8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127433dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127433dc) = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = puVar1;
    func_0x000107c3c9f8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127433e0);
    *(undefined8 **)((long)puVar1 + (long)_DAT_1127433e0) = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100842878; end: 1008429c7; -[SCMainCameraScreenRootViewController _subscribeToObservables] */

void FUN_100842878(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160(PTR_PTR_1126ae810);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  uStack_48 = 0x1008429d8;
  puStack_40 = &UNK_106208820;
  uStack_38 = 0;
  func_0x000107c61144(auStack_68,param_1);
  func_0x000107c5de90(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar2 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008429c8; end: 1008429e7; -[SCMainCameraScreenRootViewController viewControllerLifecycleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008429c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127433dc);
}



/* Entry: 1008429e8; end: 1008429fb; -[SCMainCameraScreenRootViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008429e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127433e4,param_3);
  return;
}



/* Entry: 1008429fc; end: 100842bbb; -[SCMainCameraScreenRouterImpl _createRootUIContainer:rootViewController:] */

void FUN_1008429fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_4;
  func_0x000107c403a0();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_58,param_1);
  puVar4 = PTR_PTR_1126aeaf8;
  func_0x000107c610f4(PTR_PTR_1126aeaf8);
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  func_0x000107c47be0(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100842bbc; end: 100842bcb; -[SCMainCameraScreenRootViewController containerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100842bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127433d8);
}



/* Entry: 100842bcc; end: 100842c53;  */

void FUN_100842bcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c8de0;
    func_0x000107c610f4(PTR_PTR_1126c8de0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4008c(uVar2);
    func_0x000107c61180();
    func_0x000107c47da8(puVar3,param_2,lVar1,uVar2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100842c54; end: 100842d17; -[SCMainCameraScreenRootUIContainerProviderImpl initWithParentViewController:cameraConfig:] */

undefined1 *
FUN_100842c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f06b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c5a050(*(undefined8 *)((long)puVar1 + 0x18));
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100842d18; end: 100842d1f; -[SCMainCameraScreenRootUIContainerProviderImpl uiContainer] */

void FUN_100842d18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__uiContainer__112591cd8,1);
  return;
}



/* Entry: 100842d20; end: 100842f27; -[SCMainCameraScreenRootUIContainerProviderImpl _uiContainer:] */

void FUN_100842d20(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_e8 [8];
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b0870;
  func_0x000107c610f4();
  lVar2 = param_1 + 8;
  func_0x000107c61148(lVar2);
  func_0x000107c47da4();
  func_0x000107c61170(lVar2);
  func_0x000107c5726c(puVar1);
  func_0x000107c58e94(puVar1);
  func_0x000107c3ae18(param_1);
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_100843288;
  puStack_70 = &UNK_1062085cc;
  uStack_68 = 0;
  puStack_88 = &uStack_90;
  func_0x000107c61144(auStack_98,param_1);
  puVar3 = PTR_PTR_1126aeaf8;
  func_0x000107c610f4(PTR_PTR_1126aeaf8);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_100844094;
  puStack_c0 = &UNK_110916168;
  func_0x000107c6111c(auStack_a8,auStack_98);
  puStack_b0 = &uStack_90;
  func_0x000107c61174(puVar1);
  puStack_b8 = puVar1;
  uStack_a0 = param_3;
  func_0x000107c6111c(auStack_e8,auStack_98);
  func_0x000107c61174(puVar1);
  uStack_e0 = param_3;
  func_0x000107c47be0(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_98);
  func_0x000107c60bcc(&uStack_90,8);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100842f28; end: 100842f8f; -[SCSubviewUIContainer initWithParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100842f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_1 != 0) {
    func_0x000107c611a0(param_1 + _DAT_1127964c0,param_3);
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100842f90; end: 100842fd7; -[SCSubviewUIContainer initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100842f90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270e288;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127964b8) = 1;
  }
  return;
}



/* Entry: 100842fd8; end: 100842fe7; -[SCSubviewUIContainer setPassthroughTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100842fd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127964bc) = param_3;
  return;
}



/* Entry: 100842fe8; end: 100842ff7; -[SCSubviewUIContainer setSendAppearanceTransitions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100842fe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127964b8) = param_3;
  return;
}



/* Entry: 100842ff8; end: 100843247; -[SCMainCameraScreenRootUIContainerProviderImpl _attachSubview:] */

void FUN_100842ff8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c5a050(param_3);
  func_0x000107c3d89c(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar5 = param_3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3ec1c(uVar6);
  func_0x000107c61180();
  lVar7 = lVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar8 = param_3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4ace0(uVar9);
  func_0x000107c61180();
  lVar10 = lVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar11 = param_3;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c50890(uVar12);
  func_0x000107c61180();
  lVar13 = lVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(lVar2 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(lVar2 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 100843248; end: 100843287;  */

void FUN_100843248(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 100843288; end: 100843297;  */

void FUN_100843288(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100843298; end: 10084345b; -[SCMainCameraScreenRouterImpl _createChildUIContainer:rootUIContainer:] */

void FUN_100843298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000107c61174(param_4);
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_78 = &uStack_80;
  func_0x000107c61144(auStack_88,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  func_0x000107c610f4(PTR_PTR_1126aeaf8);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_100843f80;
  puStack_b0 = &UNK_1109164b8;
  func_0x000107c61174(param_4);
  uStack_a8 = param_4;
  puStack_a0 = &uStack_80;
  func_0x000107c6111c(auStack_98,auStack_88);
  uStack_90 = param_3;
  func_0x000107c6111c(auStack_d8,auStack_88);
  uStack_d0 = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c47be0(puVar1);
  puVar2 = PTR_PTR_1126c4f00;
  func_0x000107c610f4(PTR_PTR_1126c4f00);
  func_0x000107c48f0c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61120(auStack_88);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10084345c; end: 100843527; -[SCDelayedUIContainer initWithUIContainer:] */

undefined1 * FUN_10084345c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e228;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100843528; end: 10084352f; -[SCDelayedUIContainer isPresentedObservable] */

void FUN_100843528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 100843530; end: 100843587;  */

void FUN_100843530(long param_1,undefined1 param_2)

{
  func_0x000107c3ebcc();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3b12c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100843588; end: 100843637; -[SCMainCameraPresentationWorkflow _configureHeaderVisibility:] */

/* WARNING: Possible PIC construction at 0x0001008435cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010084361c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008435d0) */
/* WARNING: Removing unreachable block (ram,0x0001008435f4) */
/* WARNING: Removing unreachable block (ram,0x0001008435e0) */
/* WARNING: Removing unreachable block (ram,0x000100843620) */

void FUN_100843588(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c61148(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c44ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100843638; end: 10084363f; -[SIGHeaderItem hidden] */

undefined1 FUN_100843638(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 100843640; end: 100843647; -[SCMainCameraScreenRouterImpl cameraSwitcherContentUIContainer] */

undefined8 FUN_100843640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100843648; end: 1008436ef;  */

void FUN_100843648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x30;
  func_0x000107c61148(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c3b32c(lVar2,param_2,uVar1,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3b1f8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008436f0; end: 10084371f;  */

void FUN_1008436f0(long param_1,undefined1 param_2)

{
  func_0x000107c3ebcc();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 100843720; end: 100843727; -[SCMainCameraScreenRouterImpl viewControllerLifecycleObservable] */

undefined8 FUN_100843720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100843728; end: 10084376f;  */

void FUN_100843728(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5de90();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100843770; end: 100843777; -[SCMainCameraScreenRouterImpl mainCameraUIContainer] */

undefined8 FUN_100843770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100843778; end: 1008438bf;  */

void FUN_100843778(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3b32c(lVar1,param_2,uVar7,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c3b1f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126c8df0;
  func_0x000107c610f4(PTR_PTR_1126c8df0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar6);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c403a0();
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c5cf70();
  func_0x000107c61180();
  func_0x000107c48fa0(puVar5,param_2,lVar4,uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1008438c0; end: 1008438c7; -[SCMainCameraScreenRootUIContainerProviderImpl transitioningUIContainer] */

void FUN_1008438c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__uiContainer__112591cd8,0);
  return;
}



/* Entry: 1008438c8; end: 10084398f; -[SCMiniCarouselTransitioningUIContainer initWithUIContainer:transitioningUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1008438c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f06d8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithUIContainer__1125f3338,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274344c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112743450;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112743454) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100843990; end: 1008439f7; -[SCMiniCarouselTransitioningUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x0001008439d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008439d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100843990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743458);
  *(undefined8 *)(param_1 + _DAT_112743458) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008439f8; end: 100843a87; -[SCDelayedUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x000100843a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100843a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100843a2c) */
/* WARNING: Removing unreachable block (ram,0x000100843a74) */
/* WARNING: Removing unreachable block (ram,0x000100843a38) */

void FUN_1008439f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100843a88; end: 100843a8f; -[SCMainCameraPresentationServices mainCameraScreenRouter] */

undefined8 FUN_100843a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100843a90; end: 100843a97; -[SCMainCameraScreenRouterImpl displayCamera] */

void FUN_100843a90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayUIContainerWithContext__11255eda0,0);
  return;
}



/* Entry: 100843a98; end: 100843c43; -[SCMainCameraScreenRouterImpl _displayUIContainerWithContext:] */

/* WARNING: Possible PIC construction at 0x000100843b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100843bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100843bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100843c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100843bfc) */
/* WARNING: Removing unreachable block (ram,0x000100843bdc) */
/* WARNING: Removing unreachable block (ram,0x000100843b70) */
/* WARNING: Removing unreachable block (ram,0x000100843c0c) */
/* WARNING: Removing unreachable block (ram,0x000100843c40) */
/* WARNING: Removing unreachable block (ram,0x000100843ce4) */
/* WARNING: Removing unreachable block (ram,0x000100843cd8) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100843c24) */

void FUN_100843a98(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3caa4();
  func_0x000107c61180();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = param_1;
  func_0x000107c4080c();
  if (puVar1 != (undefined *)0x0) {
    lVar4 = *plStack_110;
    do {
      puVar5 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar4) {
          func_0x000107c61128(param_1);
        }
        lVar3 = *(long *)(lStack_118 + (long)puVar5 * 8);
        lVar2 = lVar3;
        func_0x000107c5d388();
        if (lVar2 != param_3) {
          func_0x000107c4d9e8(param_1,param_2,lVar3);
          func_0x000107c61180();
          func_0x000107c4500c();
          func_0x000107c61180();
          func_0x000107c41864();
          puVar1 = param_1;
          goto code_r0x000107c61170;
        }
        puVar5 = puVar5 + 1;
      } while (puVar1 != puVar5);
      puVar1 = param_1;
      func_0x000107c4080c(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar1 != (undefined *)0x0);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d9e8(param_1,param_2,puVar1);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100843c44; end: 100843ce7; -[SCMainCameraScreenRouterImpl _topLevelUIContainers] */

void FUN_100843c44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x58);
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5008;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5020;
  uStack_28 = *(undefined8 *)(param_1 + 0x68);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5038;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5050;
  uStack_20 = *(undefined8 *)(param_1 + 0x70);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_38,&ppuStack_58,4);
  func_0x000107c61180();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  func_0x000107c60e78();
  func_0x000107c41864(*(undefined8 *)(puVar1 + 8));
  uVar2 = *(undefined8 *)(puVar1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100843ce8; end: 100843d3b; -[SCDelayedUIContainer detachUI:] */

void FUN_100843ce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c41864(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100843d3c; end: 100843d4b; -[SCCustomUIContainer detachUI:] */

void FUN_100843d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100843d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 100843d4c; end: 100843dcb;  */

void FUN_100843d4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    func_0x000107c61174(param_2);
    lVar1 = param_1 + 0x30;
    func_0x000107c61148(lVar1);
    func_0x000107c3cdc8();
    func_0x000107c61170(lVar1);
    func_0x000107c41864(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61170(param_2);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 100843dcc; end: 100843e17; -[SCMiniCarouselTransitioningUIContainer presentUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100843dcc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c41860(param_1,param_2,0);
  lVar1 = param_1;
  func_0x000107c3cad8();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274344c),PTR_s_presentUI_112621510);
    return;
  }
  return;
}



/* Entry: 100843e18; end: 100843e9b; -[SCMiniCarouselTransitioningUIContainer detachTransitioningUI:] */

void FUN_100843e18(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c3cad8(param_1,param_2,2);
  if ((int)uVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_106209cb8;
    puStack_38 = &UNK_110845ce0;
    uStack_30 = param_1;
    uStack_28 = param_3;
    func_0x000107c4e5fc(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_50);
    func_0x000107c3cad8(param_1,param_2,0);
  }
  return;
}



/* Entry: 100843e9c; end: 100843f17; -[SCMiniCarouselTransitioningUIContainer _transitionIntoState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100843e9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112743454;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (*(long *)(param_1 + lVar1) != 0) {
        return 0;
      }
    }
    else if ((param_3 == 2) && (*(long *)(param_1 + lVar1) != 1)) {
      return 0;
    }
  }
  else if (param_3 == 3) {
    if (*(long *)(param_1 + lVar1) != 3 && *(long *)(param_1 + lVar1) != 0) {
      return 0;
    }
  }
  else if ((param_3 == 4) && (*(long *)(param_1 + lVar1) != 3)) {
    return 0;
  }
  *(long *)(param_1 + lVar1) = param_3;
  return 1;
}



/* Entry: 100843f18; end: 100843f6f; -[SCDelayedUIContainer presentUI] */

void FUN_100843f18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3e2c0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100843f70; end: 100843f7f; -[SCCustomUIContainer attachUI:] */

void FUN_100843f70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100843f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 100843f80; end: 100843fcf;  */

void FUN_100843f80(long param_1,undefined8 param_2)

{
  func_0x000107c3e2c0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  func_0x000107c3cdc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100843fd0; end: 100844093;  */

/* WARNING: Possible PIC construction at 0x000100844034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100844070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100844038) */
/* WARNING: Removing unreachable block (ram,0x000100844044) */
/* WARNING: Removing unreachable block (ram,0x00010084404c) */

void FUN_100843fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar1 == 0) {
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c3e2c0(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c5de64(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c61180();
    func_0x000107c5c42c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100844094; end: 1008441b7;  */

/* WARNING: Possible PIC construction at 0x000100844120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100844158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100844198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100844124) */
/* WARNING: Removing unreachable block (ram,0x000100844134) */
/* WARNING: Removing unreachable block (ram,0x000100844148) */
/* WARNING: Removing unreachable block (ram,0x00010084415c) */

void FUN_100844094(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 != 0) {
    if ((param_2 != 0) && (param_2 != *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28))) {
      param_2 = *(long *)(param_1 + 0x20);
      func_0x000107c5e3f8();
      func_0x000107c61180();
      func_0x000107c58e94(*(undefined8 *)(param_1 + 0x20));
      goto code_r0x000107c61170;
    }
    func_0x000107c3af40(lVar1);
  }
  func_0x000107c61170(lVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008441b8; end: 1008442e7; -[SCSubviewUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x0001008441fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100844230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100844290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008442b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008442c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100844294) */
/* WARNING: Removing unreachable block (ram,0x0001008442bc) */
/* WARNING: Removing unreachable block (ram,0x000100844298) */
/* WARNING: Removing unreachable block (ram,0x000100844234) */
/* WARNING: Removing unreachable block (ram,0x000100844200) */
/* WARNING: Removing unreachable block (ram,0x0001008442cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008441b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = (long)_DAT_1127964c4;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008442e8; end: 1008442fb; -[SCCameraViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008442e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),PTR_s_performLoadView__11261bca0,param_1);
  return;
}



/* Entry: 1008442fc; end: 100845aa7; -[SCCameraViewControllerStartupWorkflow performLoadView:] */

/* WARNING: Removing unreachable block (ram,0x0001008448f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1008442fc(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined *param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 uVar32;
  bool bVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_290;
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_7);
  puVar7 = param_7;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  puVar8 = param_7;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  puVar9 = param_7;
  func_0x000107c4d508(param_7);
  func_0x000107c61180();
  func_0x000107c569d0();
  func_0x000107c61170(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c469a4(puVar9);
  func_0x000107c5a568(param_7);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  puVar9 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  func_0x000107c52ab8();
  func_0x000107c61170(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c3ea80(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  puVar10 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  func_0x000107c520f8();
  func_0x000107c61170(puVar9);
  puVar9 = param_7;
  func_0x000107c3f284();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c42ef8();
  func_0x000107c61170(puVar9);
  puVar9 = param_7;
  func_0x000107c5abd4();
  puVar11 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c5d9bc();
  lVar3 = (long)_DAT_1127626dc;
  uVar2 = 0x1000000;
  if ((int)puVar9 == 0) {
    uVar2 = 0;
  }
  uVar2 = uVar2 | (((ulong)puVar10 & 0x20) >> 5) << 0x20;
  uVar1 = (ulong)*(byte *)(param_5 + _DAT_1127626d8) << 8;
  bVar4 = (section *)(uVar2 | uVar1) != &section_100000100;
  bVar5 = puVar12 == (undefined *)0x1;
  bVar6 = (undefined *)(uVar2 | (ulong)*(byte *)(param_5 + lVar3) << 0x10 | uVar1) != &UNK_100010100
  ;
  bVar33 = bVar5 && bVar6 || bVar4;
  func_0x000107c61170(puVar11);
  lVar31 = (long)_DAT_1127626e0;
  *(bool *)(param_5 + lVar31) = bVar5 && bVar6;
  puVar11 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  func_0x000107c3ec60();
  uVar32 = param_1;
  dVar37 = param_2;
  dVar35 = param_3;
  dVar36 = param_4;
  func_0x000107c61170(puVar11);
  if ((bVar33) && (puVar11 = PTR_PTR_1126b9e78, func_0x000107c49d70(), (int)puVar11 != 0)) {
    func_0x000107c4c858(PTR_PTR_1126b9e78);
    param_1 = uVar32;
    param_2 = dVar37;
    param_3 = dVar35;
    param_4 = dVar36;
  }
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  func_0x000107c53120(puVar7);
  func_0x000107c61170(puVar11);
  puVar11 = puVar7;
  func_0x000107c3f2cc(puVar7);
  func_0x000107c61180();
  func_0x000107c520f4();
  func_0x000107c61170(puVar11);
  puVar11 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c3f2cc(puVar7);
  func_0x000107c61180();
  func_0x000107c3d89c(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar12 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c469a4(puVar11);
  func_0x000107c53128(puVar7);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  puVar11 = puVar7;
  func_0x000107c3f2f0(puVar7);
  func_0x000107c61180();
  func_0x000107c52ab8();
  func_0x000107c61170(puVar11);
  puVar11 = puVar7;
  func_0x000107c3f2f0(puVar7);
  func_0x000107c61180();
  func_0x000107c520f4();
  func_0x000107c61170(puVar11);
  func_0x000100845b60();
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c3f2f0(puVar7);
  func_0x000107c61180();
  func_0x000107c520fc();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  puVar11 = param_7;
  func_0x000107c5de64(param_7);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c3f2f0(puVar7);
  func_0x000107c61180();
  func_0x000107c3d89c(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  puVar11 = puVar7;
  func_0x000107c3f2f0(puVar7);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c3f16c(puVar7);
  func_0x000107c61180();
  func_0x000107c3d89c(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c3d5e0(param_5);
  if (*(char *)(param_5 + lVar31) == '\x01') {
    puVar9 = param_7;
    func_0x000107c500f8(param_7);
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar11 = puVar10;
    func_0x000107c5df60();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c5a050(puVar11);
    puVar9 = PTR_PTR_1126d4078;
    func_0x000107c610f4();
    puVar10 = puVar7;
    func_0x000107c3f2cc(puVar7);
    func_0x000107c61180();
    puVar12 = param_7;
    func_0x000107c5de64(param_7);
    func_0x000107c61180();
    puVar16 = param_7;
    func_0x000107c3f16c(param_7);
    func_0x000107c61180();
    puVar17 = puVar16;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    func_0x000107c45c98();
    uVar32 = *(undefined8 *)(param_5 + _DAT_1127626e4);
    *(undefined **)(param_5 + _DAT_1127626e4) = puVar9;
    func_0x000107c61170(uVar32);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
LAB_10084510c:
    if (*(long *)(param_5 + _DAT_1127626c0) != 0) {
      puVar9 = PTR_PTR_1126d4080;
      func_0x000107c610f4();
      puVar10 = puVar7;
      func_0x000107c3f2cc(puVar7);
      func_0x000107c61180();
      puVar11 = param_7;
      func_0x000107c5de64(param_7);
      func_0x000107c61180();
      func_0x000107c45c94();
      uVar32 = *(undefined8 *)(param_5 + _DAT_1127626e8);
      *(undefined **)(param_5 + _DAT_1127626e8) = puVar9;
      func_0x000107c61170(uVar32);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
    }
  }
  else {
    if ((int)puVar9 == 0) {
      if (((ulong)puVar10 & 0x20) == 0) goto LAB_10084510c;
      puVar9 = puVar7;
      func_0x000107c3f2cc(puVar7);
      func_0x000107c61180();
      func_0x000107c5a050();
      func_0x000107c61170(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar10 = puVar7;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c4ace0();
      func_0x000107c61180();
      puVar12 = param_7;
      func_0x000107c5de64();
      func_0x000107c61180();
      puVar16 = puVar12;
      func_0x000107c4ace0();
      func_0x000107c61180();
      puVar17 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar18 = puVar17;
      func_0x000107c517b8(0x443b8000);
      func_0x000107c61180();
      puVar19 = puVar7;
      puStack_e8 = puVar18;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar20 = puVar19;
      func_0x000107c50890();
      func_0x000107c61180();
      puVar21 = param_7;
      func_0x000107c5de64();
      func_0x000107c61180();
      puVar22 = puVar21;
      func_0x000107c50890();
      func_0x000107c61180();
      puVar23 = puVar20;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar24 = puVar23;
      func_0x000107c517b8(0x443b8000);
      func_0x000107c61180();
      puVar25 = puVar7;
      puStack_e0 = puVar24;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar26 = puVar25;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar27 = param_7;
      func_0x000107c5de64(param_7);
      func_0x000107c61180();
      puVar28 = puVar27;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar29 = puVar26;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d8 = puVar29;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3e16c();
      func_0x000107c61180();
      func_0x000107c61170(puVar30);
      func_0x000107c61170(puVar29);
      func_0x000107c61170(puVar28);
      func_0x000107c61170(puVar27);
      func_0x000107c61170(puVar26);
      func_0x000107c61170(puVar25);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(puVar23);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      if (bVar33) {
        puVar10 = puVar7;
        func_0x000107c3f2cc();
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c44d9c();
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c40290(param_4);
        func_0x000107c61180();
        puVar16 = puVar12;
        func_0x000107c517b8(0x443b4000);
        func_0x000107c61180();
        puVar17 = puVar7;
        puStack_f8 = puVar16;
        func_0x000107c3f2cc();
        func_0x000107c61180();
        puVar18 = puVar17;
        func_0x000107c5e308();
        func_0x000107c61180();
        puVar19 = puVar7;
        func_0x000107c3f2cc(puVar7);
        func_0x000107c61180();
        puVar20 = puVar19;
        func_0x000107c44d9c();
        func_0x000107c61180();
        puVar21 = puVar18;
        func_0x000107c40288(param_3 / param_4);
        func_0x000107c61180();
        puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_f0 = puVar21;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c3d7a0(puVar9);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar19);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
      }
      if (*(char *)(param_5 + lVar3) == '\x01') {
        func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
LAB_10084505c:
        puVar10 = PTR_PTR_1126d4080;
        func_0x000107c610f4();
        puVar11 = puVar7;
        func_0x000107c3f2cc(puVar7);
        func_0x000107c61180();
        puVar12 = param_7;
        func_0x000107c5de64(param_7);
        func_0x000107c61180();
        func_0x000107c45c94();
        uVar32 = *(undefined8 *)(param_5 + _DAT_1127626e8);
        *(undefined **)(param_5 + _DAT_1127626e8) = puVar10;
        func_0x000107c61170(uVar32);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        bVar33 = true;
      }
      else {
        puVar10 = puVar7;
        func_0x000107c3f2cc(puVar7);
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        puVar12 = param_7;
        func_0x000107c5de64(param_7);
        func_0x000107c61180();
        puVar16 = puVar12;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
        puVar17 = puVar11;
        func_0x000107c40284(puVar11);
        func_0x000107c61180();
        puVar18 = puVar17;
        func_0x000107c517b8(0x443b8000);
        func_0x000107c61180();
        func_0x000107c3d798(puVar9);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        if ((!bVar5 || !bVar6) && !bVar4) goto LAB_10084505c;
        bVar33 = false;
      }
      func_0x000107c61170(puVar9);
    }
    else {
      puVar9 = puVar7;
      func_0x000107c3f2cc(puVar7);
      func_0x000107c61180();
      func_0x000107c5a050();
      func_0x000107c61170(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar10 = puVar7;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c4ace0();
      func_0x000107c61180();
      puVar12 = param_7;
      func_0x000107c5de64();
      func_0x000107c61180();
      puVar16 = puVar12;
      func_0x000107c4ace0();
      func_0x000107c61180();
      puVar17 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar18 = puVar7;
      puStack_d0 = puVar17;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar19 = puVar18;
      func_0x000107c50890();
      func_0x000107c61180();
      puVar20 = param_7;
      func_0x000107c5de64();
      func_0x000107c61180();
      puVar21 = puVar20;
      func_0x000107c50890();
      func_0x000107c61180();
      puVar22 = puVar19;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar23 = puVar7;
      puStack_c8 = puVar22;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar24 = puVar23;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar25 = param_7;
      func_0x000107c5de64();
      func_0x000107c61180();
      puVar26 = puVar25;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
      puVar27 = puVar24;
      func_0x000107c40284();
      func_0x000107c61180();
      puVar28 = puVar7;
      puStack_c0 = puVar27;
      func_0x000107c3f2cc();
      func_0x000107c61180();
      puVar29 = puVar28;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar30 = param_7;
      func_0x000107c5de64(param_7);
      func_0x000107c61180();
      puVar13 = puVar30;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar14 = puVar29;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar14;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3d048(puVar9);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar30);
      func_0x000107c61170(puVar29);
      func_0x000107c61170(puVar28);
      func_0x000107c61170(puVar27);
      func_0x000107c61170(puVar26);
      func_0x000107c61170(puVar25);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(puVar23);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      bVar33 = false;
    }
    if (!bVar33) goto LAB_10084510c;
  }
  puStack_290 = puVar7;
  puStack_2c0 = puVar7;
  puVar9 = puVar7;
  if (*(char *)(param_5 + lVar31) == '\x01') {
    puVar10 = puVar7;
    func_0x000107c3f2f0(puVar7);
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c61170(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puStack_2a8 = puStack_290;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puStack_2a0 = param_7;
    func_0x000107c5de64();
    func_0x000107c61180();
    puStack_2b0 = puStack_2a0;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puStack_2b8 = puStack_2a8;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_118 = puStack_2b8;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puStack_2d8 = puStack_2c0;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puStack_2c8 = param_7;
    func_0x000107c5de64();
    func_0x000107c61180();
    puStack_2d0 = puStack_2c8;
    func_0x000107c515ac();
    func_0x000107c61180();
    puStack_2e0 = puStack_2d0;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puStack_2e8 = puStack_2d8;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_2f0 = puVar7;
    puStack_110 = puStack_2e8;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puStack_300 = puStack_2f0;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puStack_2f8 = param_7;
    func_0x000107c5de64();
    func_0x000107c61180();
    puStack_308 = puStack_2f8;
    func_0x000107c515ac();
    func_0x000107c61180();
    puStack_310 = puStack_308;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar11 = puStack_300;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_108 = puVar11;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puVar12 = puVar9;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar16 = param_7;
    func_0x000107c5de64(param_7);
    func_0x000107c61180();
    puVar17 = puVar16;
    func_0x000107c515ac();
    func_0x000107c61180();
    puVar18 = puVar17;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar19 = puVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_100 = puVar19;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar10);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
  }
  else {
    puVar10 = param_7;
    func_0x000107c5abd4();
    if ((int)puVar10 == 0) goto LAB_1008456ec;
    puVar10 = puVar7;
    func_0x000107c3f2f0(puVar7);
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c61170(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puStack_2a8 = puStack_290;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puStack_2a0 = puVar7;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    puStack_2b0 = puStack_2a0;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puStack_2b8 = puStack_2a8;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_138 = puStack_2b8;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puStack_2d8 = puStack_2c0;
    func_0x000107c50890();
    func_0x000107c61180();
    puStack_2c8 = puVar7;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    puStack_2d0 = puStack_2c8;
    func_0x000107c50890();
    func_0x000107c61180();
    puStack_2e0 = puStack_2d8;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_2e8 = puVar7;
    puStack_130 = puStack_2e0;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puStack_2f0 = puStack_2e8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puStack_300 = puVar7;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    puStack_2f8 = puStack_300;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puStack_308 = puStack_2f0;
    func_0x000107c40280();
    func_0x000107c61180();
    puStack_310 = puVar7;
    puStack_128 = puStack_308;
    func_0x000107c3f2f0();
    func_0x000107c61180();
    puVar11 = puStack_310;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c3f2cc(puVar7);
    func_0x000107c61180();
    puVar12 = puVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar16 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar16;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar10);
  }
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_310);
  func_0x000107c61170(puStack_308);
  func_0x000107c61170(puStack_2f8);
  func_0x000107c61170(puStack_300);
  func_0x000107c61170(puStack_2f0);
  func_0x000107c61170(puStack_2e8);
  func_0x000107c61170(puStack_2e0);
  func_0x000107c61170(puStack_2d0);
  func_0x000107c61170(puStack_2c8);
  func_0x000107c61170(puStack_2d8);
  func_0x000107c61170(puStack_2c0);
  func_0x000107c61170(puStack_2b8);
  func_0x000107c61170(puStack_2b0);
  func_0x000107c61170(puStack_2a0);
  func_0x000107c61170(puStack_2a8);
  func_0x000107c61170(puStack_290);
LAB_1008456ec:
  puVar9 = param_7;
  func_0x000107c5ab34();
  dVar37 = param_2;
  if ((int)puVar9 == 0) {
    dVar37 = 0.0;
  }
  if (0.0 < dVar37) {
    puVar10 = PTR_PTR_1126b6cc8;
    func_0x000107c610f4(PTR_PTR_1126b6cc8);
    func_0x000107c48b10(0x402e000000000000);
    uVar32 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    uVar34 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    puVar11 = PTR__OBJC_CLASS___CAReplicatorLayer_1126d4088;
    func_0x000107c4aba4(PTR__OBJC_CLASS___CAReplicatorLayer_1126d4088);
    func_0x000107c61180();
    func_0x000107c55438();
    func_0x000107c60724(&uStack_1b8,0,-dVar37,0);
    uStack_1f8 = uStack_170;
    uStack_200 = uStack_178;
    uStack_1e8 = uStack_160;
    uStack_1f0 = uStack_168;
    uStack_1d8 = uStack_150;
    uStack_1e0 = uStack_158;
    uStack_1c8 = uStack_140;
    uStack_1d0 = uStack_148;
    uStack_238 = uStack_1b0;
    uStack_240 = uStack_1b8;
    uStack_228 = uStack_1a0;
    uStack_230 = uStack_1a8;
    uStack_218 = uStack_190;
    uStack_220 = uStack_198;
    uStack_208 = uStack_180;
    uStack_210 = uStack_188;
    func_0x000107c5543c(puVar11);
    puVar12 = PTR_PTR_1126d4090;
    func_0x000107c610f4(PTR_PTR_1126d4090);
    func_0x000107c469b8(0,0,uVar34,dVar37 + dVar37,0,dVar37,uVar32,dVar37);
    puVar9 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c3e8a8(0,0,param_1,dVar37,puVar9);
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c4aba4(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    func_0x000107c61180();
    func_0x000107c61178(puVar9);
    func_0x000107c3ab30(puVar9);
    func_0x000107c57274(puVar16);
    puVar17 = puVar12;
    func_0x000107c4aba4(puVar12);
    func_0x000107c61180();
    func_0x000107c562f4();
    func_0x000107c61170(puVar17);
    puVar17 = puVar7;
    func_0x000107c3f16c(puVar7);
    func_0x000107c61180();
    func_0x000107c3d89c();
    func_0x000107c61170(puVar17);
    func_0x000107c530dc(puVar7);
    puVar17 = puVar7;
    func_0x000107c3f16c(puVar7);
    func_0x000107c61180();
    func_0x000107c59ef4();
    func_0x000107c61170(puVar17);
    puVar17 = puVar7;
    func_0x000107c3f16c(puVar7);
    func_0x000107c61180();
    puVar18 = puVar17;
    func_0x000107c5cc08();
    func_0x000107c61180();
    func_0x000107c520f4();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61144(&uStack_240,param_5);
  func_0x000107c6111c(auStack_248,&uStack_240);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c42584(param_5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_7);
  func_0x000107c61120(auStack_248);
  func_0x000107c61120(&uStack_240);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    func_0x000107c60e78();
    func_0x000107c61120(auStack_248);
    func_0x000107c61120(&uStack_240);
    func_0x000107c60bd8(param_7);
    return (undefined *)0x1;
  }
  return param_7;
}



/* Entry: 100845aa8; end: 100845aaf; -[SCAFideliusIdentityInit getEventQoS] */

undefined8 FUN_100845aa8(void)

{
  return 1;
}



/* Entry: 100845ab0; end: 100845aef; -[SCCameraViewController shouldEnableAutoLayoutOnCameraView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100845ab0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112762524;
  func_0x000107c61148(uVar1);
  uVar2 = uVar1;
  func_0x000107c42ef8();
  func_0x000107c61170(uVar1);
  return uVar2 >> 4 & 1;
}



/* Entry: 100845af0; end: 100845b1f; -[SCCameraViewControllerInternalState setCameraView:] */

void FUN_100845af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100845b20; end: 100845b27; -[SCCameraViewControllerInternalState cameraView] */

undefined8 FUN_100845b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100845b28; end: 100845b57; -[SCCameraViewControllerInternalState setCameraViewHolder:] */

void FUN_100845b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100845b58; end: 100845b77; -[SCCameraViewControllerInternalState cameraViewHolder] */

undefined8 FUN_100845b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100845b78; end: 100845c5f; -[SCCameraOverlayView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100845b78(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f83c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToSuperview_1125bb968);
  lVar1 = param_1;
  func_0x000107c5c42c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    func_0x000107c40aa4(*(undefined8 *)(param_1 + _DAT_112762870));
    func_0x000107c611b0();
  }
  return;
}



/* Entry: 100845c60; end: 100845cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100845c60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c3b3bc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100845cdc; end: 100845ce7; -[SCCameraOverlayView _createViewContainer:superview:] */

void FUN_100845cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x437a0000,param_1,PTR_s__createViewContainer_superview_i_11255afb0);
  return;
}



/* Entry: 100845ce8; end: 100846077; -[SCCameraOverlayView _createViewContainer:superview:initialLayoutPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100845ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  float fVar11;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126b40c0;
  func_0x000107c610f4();
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5726c();
  func_0x000107c5a050(puVar1,param_3,0);
  func_0x000107c3d89c(param_5,param_3,puVar1);
  fVar11 = (float)param_1 + -10.0;
  func_0x000107c5381c(fVar11,puVar1,param_3,0);
  func_0x000107c5381c(fVar11,puVar1,param_3,1);
  puVar2 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar3 = param_5;
  func_0x000107c5cbe4(param_5);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c40280(puVar2,param_3,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c5784c(param_1,puVar4);
  puVar2 = puVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar3 = param_5;
  func_0x000107c3ec1c(param_5);
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c40280(puVar2,param_3,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c5784c(param_1,puVar5);
  puVar2 = puVar1;
  lVar3 = param_5;
  if (param_4 == 0) {
    puVar6 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar7 = param_5;
    func_0x000107c4acb0(param_5);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280(puVar6,param_3,lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c5784c(param_1,puVar8);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5ce8c(param_5);
    func_0x000107c61180();
  }
  else {
    puVar6 = puVar1;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar7 = param_5;
    func_0x000107c4ace0(param_5);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280(puVar6,param_3,lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c5784c(param_1,puVar8);
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c50890(param_5);
    func_0x000107c61180();
  }
  puVar6 = puVar2;
  func_0x000107c40280(puVar2,param_3,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c5784c(param_1,puVar6);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar4;
  puStack_90 = puVar5;
  puStack_88 = puVar6;
  puStack_80 = puVar8;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_98,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2,param_3,puVar9);
  func_0x000107c61170(puVar9);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar1;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_a0,1);
  func_0x000107c61180();
  puVar9 = puVar2;
  func_0x000107c3d594(param_2);
  uVar10 = SUB81(puVar9,0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  func_0x000107c60e78();
  *(undefined1 *)(param_5 + _DAT_1127964b0) = uVar10;
  return;
}



/* Entry: 100846078; end: 100846087; -[SCSingleViewContainer setPassthroughTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100846078(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127964b0) = param_3;
  return;
}



/* Entry: 100846088; end: 10084608f; -[SCAFideliusIdentityInit getPayloadIdentifier] */

undefined8 FUN_100846088(void)

{
  return 0x376;
}



/* Entry: 100846090; end: 10084609b; -[SCAFideliusIdentityInit toProtoWithAllowedFields:] */

void FUN_100846090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10084609c; end: 10084609f; -[SCCameraOverlayView addAccessibilityElements:] */

void FUN_10084609c(void)

{
  return;
}



/* Entry: 1008460a0; end: 1008460af; -[SCCameraOverlayView addSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008460a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762834),PTR_s_addSubview__11259c880);
  return;
}



/* Entry: 1008460b0; end: 10084629b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008460b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *extraout_x8;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3e2ac();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c40148();
  func_0x000107c61170(uVar1);
  lVar3 = param_1 + 0x30;
  func_0x000107c61148(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c3cef8();
  func_0x000107c61180();
  func_0x000107c3d594(lVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c44e58();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c4080c();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        func_0x000107c61128(lVar4);
      }
      lVar5 = param_1 + 0x30;
      func_0x000107c61148(lVar5);
      func_0x000107c3defc();
      func_0x000107c61170(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + _DAT_113082418);
  lVar3 = lVar6;
  if (lVar6 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + _DAT_113082430);
    FUN_100846338();
    func_0x000107c613fc();
    func_0x000107c6157c(uVar1);
    FUN_100846358(lVar3,uVar1);
    lVar6 = 0;
  }
  *extraout_x8 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar6);
  return;
}



/* Entry: 10084629c; end: 1008462a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084629c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113082418);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113082430);
    FUN_100846338();
    func_0x000107c613fc();
    func_0x000107c6157c(uVar1);
    FUN_100846358(lVar3,uVar1);
    lVar2 = 0;
  }
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar2);
  return;
}



/* Entry: 1008462a8; end: 100846337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008462a8(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_113082418);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_2 + _DAT_113082430);
    FUN_100846338();
    func_0x000107c613fc();
    func_0x000107c6157c(param_3);
    FUN_100846358(lVar2,param_3);
    lVar1 = 0;
  }
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar1);
  return;
}



/* Entry: 100846338; end: 100846357;  */

void FUN_100846338(void)

{
  func_0x000107c61168(&PTR_PTR_112ee2b18);
  return;
}



/* Entry: 100846358; end: 100846b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100846358(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined **ppuStack_78;
  
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  *(undefined **)(unaff_x20 + 0x68) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0xc047800000000000;
  if ((int)param_1 != 3) {
    uVar15 = 0x4014000000000000;
  }
  *(undefined8 *)(unaff_x20 + 0x60) = uVar15;
  lVar4 = 0;
  FUN_100846b64();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c5726c(lVar5);
  func_0x000107c61174();
  func_0x000107c3d72c();
  *(long *)(unaff_x20 + 0x48) = lVar5;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c5726c(lVar4);
  *(long *)(unaff_x20 + 0x50) = lVar4;
  func_0x000107c61174();
  func_0x000107c3e2c8(lVar5);
  lVar6 = lVar5;
  FUN_100846eac();
  *(long *)(unaff_x20 + 0x58) = lVar6;
  FUN_100847148(0);
  func_0x000107c61174();
  FUN_1000d224c(apuStack_98);
  puVar3 = apuStack_98[0];
  FUN_1008471c4();
  func_0x000107c615e8(apuStack_98[0]);
  if (puVar3 + -1 < (undefined *)0x2) {
    lVar7 = lVar5;
    FUN_1008471c8(0x437a0000,lVar5,0);
    lVar8 = lVar5;
    FUN_1008471c8(0x437a0000,lVar5,0);
    param_4 = lVar4;
    FUN_1008471c8(0x437a0000,lVar4,0);
    lVar14 = 0x112d360b0;
    FUN_100847090(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar14 + 0x18) = 7;
    *(undefined8 *)(lVar14 + 0x10) = 3;
    *(long *)(lVar14 + 0x20) = lVar7;
    *(long *)(lVar14 + 0x28) = lVar8;
    *(long *)(lVar14 + 0x30) = param_4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000102a32968(puVar3,param_4,lVar8);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    lVar11 = 0x112d360b8;
    FUN_100847090(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x18) = 0xf;
    *(undefined8 *)(lVar11 + 0x10) = 7;
    lVar12 = lVar8;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar13 = lVar5;
    func_0x000107c3f764(lVar5);
    func_0x000107c61180();
    lVar10 = lVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
    func_0x000107c5784c(0x4479c000,lVar10);
    *(long *)(lVar11 + 0x20) = lVar10;
    lVar12 = lVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar13 = lVar6;
    func_0x000107c50890(lVar6);
    func_0x000107c61180();
    lVar10 = lVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
    *(long *)(lVar11 + 0x28) = lVar10;
    lVar12 = lVar8;
    func_0x000107c5e308();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c40290(0x4044000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    *(long *)(lVar11 + 0x30) = lVar13;
    lVar12 = param_4;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar13 = lVar8;
    func_0x000107c3f75c(lVar8);
    func_0x000107c61180();
    lVar10 = lVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
    *(long *)(lVar11 + 0x38) = lVar10;
    *(undefined **)(lVar11 + 0x40) = puVar3;
    func_0x000107c61174(puVar3);
    lVar12 = param_4;
    func_0x000107c5e308();
    func_0x000107c61180();
    lVar13 = lVar8;
    func_0x000107c5e308(lVar8);
    func_0x000107c61180();
    lVar10 = lVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
    func_0x000107c5784c(0x443b8000,lVar10);
    *(long *)(lVar11 + 0x48) = lVar10;
    lVar12 = param_4;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar13 = param_4;
    func_0x000107c5e308(param_4);
    func_0x000107c61180();
    lVar10 = lVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
    *(long *)(lVar11 + 0x50) = lVar10;
    uVar15 = 0;
    FUN_100847108(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar12 = lVar11;
    func_0x000107c5fc48(lVar11,uVar15);
    func_0x000107c61574(lVar11);
    func_0x000107c3d048(puVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(param_4);
    puVar3 = &UNK_110588f40;
    ppuVar17 = &PTR_DAT_110589098;
    puVar9 = &UNK_110589078;
  }
  else {
    lVar11 = lVar5;
    func_0x000107c61174();
    lVar12 = lVar4;
    func_0x000107c61174();
    lVar13 = lVar6;
    func_0x000107c61174();
    lVar14 = lVar11;
    lVar7 = lVar12;
    lVar8 = lVar13;
    func_0x0001008474cc();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
    puVar3 = &UNK_110588ef0;
    ppuVar17 = &PTR_DAT_110588fe0;
    puVar9 = &UNK_110588fc0;
  }
  puStack_80 = puVar9;
  ppuStack_78 = ppuVar17;
  func_0x000107c613fc(puVar3,0x30,7);
  *(long *)(puVar3 + 0x10) = lVar14;
  *(long *)(puVar3 + 0x18) = lVar7;
  *(long *)(puVar3 + 0x20) = lVar8;
  *(long *)(puVar3 + 0x28) = param_4;
  apuStack_98[0] = puVar3;
  FUN_1000a8868(apuStack_98,puVar9);
  (*(code *)ppuVar17[1])(puVar9,ppuVar17);
  ppuVar17 = ppuStack_78;
  puVar3 = puStack_80;
  *(undefined **)(unaff_x20 + 0x20) = puVar9;
  FUN_1000a8868(apuStack_98,puStack_80);
  (*(code *)ppuVar17[2])(puVar3,ppuVar17);
  ppuVar17 = ppuStack_78;
  puVar9 = puStack_80;
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  FUN_1000a8868(apuStack_98,puStack_80);
  (*(code *)ppuVar17[3])(puVar9,ppuVar17);
  *(undefined **)(unaff_x20 + 0x18) = puVar9;
  FUN_100847a04(param_1,lVar5,lVar6);
  ppuVar17 = ppuStack_78;
  puVar3 = puStack_80;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1000a8868(apuStack_98,puStack_80);
  (*(code *)ppuVar17[4])(puVar3,ppuVar17);
  func_0x000100847d40();
  *(undefined **)(unaff_x20 + 0x30) = puVar9;
  lVar14 = 0x112d360b0;
  FUN_100847090(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar14 + 0x18) = 3;
  *(undefined8 *)(lVar14 + 0x10) = 1;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(lVar14 + 0x20) = uVar16;
  *(long *)(unaff_x20 + 0x38) = lVar14;
  puVar3 = &UNK_110588f18;
  func_0x000107c613fc(&UNK_110588f18,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ee2aa8);
  uVar15 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = &UNK_100c2c838;
  puVar1[1] = puVar3;
  func_0x000107c61174(lVar5);
  func_0x000107c61434(puVar9);
  func_0x000107c61174(uVar16);
  func_0x000107c6157c(puVar3);
  FUN_10058d438(uVar15,uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(lVar5);
  FUN_1008482d0();
  func_0x000107c6142c(puVar9);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61574(param_2);
  func_0x0001000834e4(apuStack_98);
  return;
}



/* Entry: 100846b3c; end: 100846b5f;  */

void FUN_100846b3c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100846b60; end: 100846b63;  */

void FUN_100846b60(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100846b64; end: 100846b83;  */

void FUN_100846b64(void)

{
  func_0x000107c61168(&PTR_PTR_1128818c8);
  return;
}



/* Entry: 100846b84; end: 100846bff; -[_TtC41CameraFeatureLayoutServicesImplementationP33_13ABE80AA61DF42884218A03B636293E28CameraFeatureLayoutContainer initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100846b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_5 + _DAT_112ee2aa8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 100846c00; end: 100846e83; -[SCSingleViewContainer attachView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100846c00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar15 = (long)_DAT_1127964ac;
  func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar15));
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  *(long *)(param_1 + lVar15) = param_3;
  func_0x000107c61170(uVar2);
  if (*(long *)(param_1 + lVar15) != 0) {
    func_0x000107c5a050();
    func_0x000107c3d89c(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar6 = param_1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar9 = param_1;
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    uVar10 = uVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar15 = param_1;
    func_0x000107c3ec1c(param_1);
    func_0x000107c61180();
    uVar12 = uVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c4abfc(param_1);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  func_0x000107c60e78();
  if (*(long *)(param_3 + _DAT_1127964ac) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_3 + _DAT_1127964ac),PTR_s_intrinsicContentSize_1125f8080);
    return;
  }
  return;
}



/* Entry: 100846e84; end: 100846eab; -[SCSingleViewContainer intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100846e84(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127964ac) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127964ac),PTR_s_intrinsicContentSize_1125f8080);
    return;
  }
  return;
}



/* Entry: 100846eac; end: 10084708f;  */

undefined * FUN_100846eac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3d72c(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = 0x112d360b8;
  FUN_100847090(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 7;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar3 + 0x28) = puVar5;
  puVar4 = puVar1;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c5ce8c(param_1);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  *(undefined **)(lVar3 + 0x30) = puVar5;
  uVar6 = 0;
  FUN_100847108(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar7);
  return puVar1;
}



/* Entry: 100847090; end: 100847107;  */

void FUN_100847090(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100847108(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100847108; end: 100847147;  */

void FUN_100847108(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100847148; end: 100847167;  */

void FUN_100847148(void)

{
  func_0x000107c61168(&PTR_PTR_11288bca8);
  return;
}



/* Entry: 100847168; end: 1008471c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100847168(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113092298;
  lVar2 = *param_2;
  func_0x000107c61428(lVar2 + _DAT_113092298,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c615f0();
  return;
}



/* Entry: 1008471c4; end: 1008471c7;  */

undefined8 FUN_1008471c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x000107c61428(0x112ef4368,auStack_48,0,0);
    if (bRam0000000112ef4368 < 2) {
      uVar1 = 1;
      if (bRam0000000112ef4368 != 0) {
        uVar1 = 2;
      }
    }
    else if (bRam0000000112ef4368 == 2) {
      uVar1 = 0;
    }
    else {
      func_0x000107c615f0(param_1);
      uVar1 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0f1820);
      lVar2 = param_1;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      uVar1 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f0f1850);
      lVar3 = param_1;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(param_1);
      uVar1 = 1;
      if ((int)lVar3 != 0) {
        uVar1 = 2;
      }
      if ((int)lVar2 == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* Entry: 1008471c8; end: 1008478a7;  */

undefined * FUN_1008471c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  float fVar11;
  
  puVar1 = PTR_PTR_1126b40c0;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5726c();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c(param_2);
  fVar11 = (float)param_1 + -1.0;
  func_0x000107c5381c(fVar11,puVar1);
  func_0x000107c5381c(fVar11,puVar1);
  uVar2 = param_2;
  uVar3 = param_2;
  puVar4 = puVar1;
  puVar5 = puVar1;
  if ((param_3 & 1) == 0) {
    func_0x000107c4acb0(param_2);
    func_0x000107c61180();
    func_0x000107c5ce8c(param_2);
    func_0x000107c61180();
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c5ce8c();
  }
  else {
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c50890(param_2);
    func_0x000107c61180();
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c50890();
  }
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar6;
  FUN_1008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  puVar8 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar10 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c5784c(param_1,puVar9);
  *(undefined **)(puVar7 + 0x20) = puVar9;
  puVar8 = puVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c3ec1c(param_2);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_2);
  func_0x000107c5784c(param_1,puVar9);
  *(undefined **)(puVar7 + 0x28) = puVar9;
  puVar8 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c5784c(param_1);
  *(undefined **)(puVar7 + 0x30) = puVar8;
  puVar8 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c5784c(param_1);
  *(undefined **)(puVar7 + 0x38) = puVar8;
  uVar10 = 0;
  FUN_100847984(0);
  puVar8 = puVar7;
  func_0x000107c5fc48(puVar7,uVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  return puVar1;
}



/* Entry: 1008478a8; end: 1008478cb;  */

void FUN_1008478a8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d36e78;
  plVar5 = (long *)&UNK_10d9011a0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100847944(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1008478cc; end: 100847943;  */

void FUN_1008478cc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100847944(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100847944; end: 100847983;  */

void FUN_100847944(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100847984; end: 1008479c7;  */

void FUN_100847984(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d360b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d360b8 = puVar1;
  return;
}



/* Entry: 1008479c8; end: 100847a03;  */

void FUN_1008479c8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d36e80;
  plVar5 = (long *)&UNK_10d904c70;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100847944(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100847a04; end: 100847c6f;  */

undefined8 FUN_100847a04(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_2;
  FUN_1008471c8(0x437a0000,param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = 0x112d360b8;
  FUN_100847090(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  func_0x000107c61174();
  uVar6 = uVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar4 = uVar6;
  if (param_1 == 0xb) {
    func_0x000107c5cbe4(param_2);
    func_0x000107c61180();
    func_0x000107c40284(0x4030000000000000);
  }
  else {
    param_2 = param_3;
    func_0x000107c5cbe4(param_3);
    func_0x000107c61180();
    func_0x000107c40280();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar6 = uVar1;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c4ace0(param_3);
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_3);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar6 = uVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar6 = uVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c5e308(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar6 = 0;
  FUN_100847108(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar7);
  return uVar1;
}



/* Entry: 100847c70; end: 100847c77;  */

void FUN_100847c70(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*unaff_x20);
  return;
}



/* Entry: 100847c78; end: 100847e2b;  */

void FUN_100847c78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_100847e2c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100847e2c; end: 100847f73;  */

ulong FUN_100847e2c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100847f74);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100847f74(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100847f70);
      (*pcVar1)();
    }
    FUN_100847ff4(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100847f74; end: 100847ff3;  */

undefined * FUN_100847f74(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100847ff4; end: 10084810f;  */

long FUN_100847ff4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10084810c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100848110);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100848110(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100848110(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100848108);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}


