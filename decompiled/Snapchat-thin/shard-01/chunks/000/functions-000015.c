/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c1c4ec; end: 100c1c50f;  */

void FUN_100c1c4ec(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c1c510; end: 100c1c51f;  */

void FUN_100c1c510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c1c520; end: 100c1c5d7;  */

void FUN_100c1c520(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c606cc(0,lVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = unaff_x20 + uVar5;
  func_0x000107c614c4(lVar3,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x20 + uVar5));
  }
  else {
    (**(code **)(*(long *)(lVar4 + -8) + 8))(unaff_x20 + uVar5,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c1c5d8; end: 100c1c5fb;  */

void FUN_100c1c5d8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c1c5fc; end: 100c1c66f; -[SCBareboneNavigationController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1c5fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c3e74c(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 100c1c670; end: 100c1c6ff; -[SCBareboneNavigationController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1c670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c5df30(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  *(undefined1 *)(param_1 + _DAT_11278e300) = 0;
  lVar1 = (long)_DAT_11278e2ec;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x000107c3cb58(param_1);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 100c1c700; end: 100c1c7d3; -[SCBareboneNavigationController _updateAdditionalSafeAreaInsetsForCustomStatusBarIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1c700(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c515a0();
  dVar2 = param_1;
  func_0x000107c61170(lVar1);
  func_0x000107c3d994(param_2);
  dVar3 = 40.0;
  if (*(char *)(param_2 + _DAT_11278e2f4) == '\0') {
    dVar3 = param_1 - dVar2;
  }
  if (*(char *)(param_2 + _DAT_11278e2f8) == '\x01') {
    lVar1 = (long)_DAT_11278e2f0;
    if (*(double *)(param_2 + lVar1) <= param_1) {
      return;
    }
    func_0x000107c3d994(param_2);
    dVar3 = *(double *)(param_2 + lVar1);
  }
  else {
    if (param_1 <= dVar3) {
      return;
    }
    func_0x000107c3d994(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c165b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3 - (param_1 - dVar2),param_2,PTR_s_setAdditionalSafeAreaInsets__1126370e0);
  return;
}



/* Entry: 100c1c7d4; end: 100c1c81b; -[SCBareboneNavigationController viewSafeAreaInsetsDidChange] */

void FUN_100c1c7d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706260;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  func_0x000107c3cb58(param_1);
  return;
}



/* Entry: 100c1c81c; end: 100c1c86b; -[SCMainAppDelegate application:supportedInterfaceOrientationsForWindow:] */

undefined8 FUN_100c1c81c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar2);
  uVar1 = 0x1a;
  if (puVar3 != (undefined *)0x1) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 100c1c86c; end: 100c1c8fb; -[SCBareboneNavigationController supportedInterfaceOrientations] */

undefined1 * FUN_100c1c86c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x000107c5de94();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4aa28();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_112706260;
    puStack_40 = param_1;
    func_0x000107c61154(&puStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x000107c5c44c(puVar2);
  }
  func_0x000107c61170(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 100c1c8fc; end: 100c1c98b; -[SIGLegacyContainerViewController supportedInterfaceOrientations] */

undefined1 * FUN_100c1c8fc(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4aa28();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_1126eef30;
    puStack_40 = param_1;
    func_0x000107c61154(&puStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x000107c5c44c(puVar2);
  }
  func_0x000107c61170(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 100c1c98c; end: 100c1ca1b; -[SCSwipeViewContainerViewController supportedInterfaceOrientations] */

undefined1 * FUN_100c1c98c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_1126fce80;
    puStack_40 = param_1;
    func_0x000107c61154(&puStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x000107c5c44c(puVar2);
  }
  func_0x000107c61170(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 100c1ca1c; end: 100c1caab; -[SCMainCameraScreenRootViewController supportedInterfaceOrientations] */

undefined1 * FUN_100c1ca1c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_1126f06c8;
    puStack_40 = param_1;
    func_0x000107c61154(&puStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x000107c5c44c(puVar2);
  }
  func_0x000107c61170(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 100c1caac; end: 100c1cadf; -[SCMainCameraViewController supportedInterfaceOrientations] */

void FUN_100c1caac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8338;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_supportedInterfaceOrientations_112676698);
  return;
}



/* Entry: 100c1cae0; end: 100c1cb27; -[SCCameraViewController supportedInterfaceOrientations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c1cae0(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_1[_DAT_112762560] != '\x01') {
    return 2;
  }
  if (param_1[_DAT_112762564] == '\x01') {
    uVar5 = 0x1e;
    puVar2 = param_1;
    _objc_retain();
    iVar1 = (int)puVar2;
    if (lRam00000001137fbfe8 != -1) {
      iVar1 = 0x137fbfe8;
      func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
    }
    if ((bRam00000001137fbfd2 & 1) == 0) {
      uVar5 = 2;
    }
    else {
      func_0x000107c30aa4();
      if (iVar1 != 0) {
        puVar2 = param_1;
        func_0x00010c29d0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2a72c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if (puVar4 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x00010c22b720();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c252de0();
          _objc_release(puVar2);
        }
        else {
          puVar3 = puVar4;
          func_0x00010c0690e0();
        }
        if (puVar3 + -1 < (undefined *)0x4) {
          uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar3 + -1) * 8);
        }
        _objc_release(puVar4);
      }
    }
    _objc_release(param_1);
    return uVar5;
  }
  return 0x1e;
}



/* Entry: 100c1cb28; end: 100c1cb7b;  */

void FUN_100c1cb28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c1cb7c; end: 100c1cb83; -[SCPlusInternalCustomAppThemeServices customAppThemeProvider] */

undefined8 FUN_100c1cb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c1cb84; end: 100c1cd03; -[SCPlusCustomAppThemeProviderImpl applyInitialThemeIfNecessary] */

/* WARNING: Possible PIC construction at 0x000100c1cbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1cbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1cc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1cc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1ccd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1cce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1cc94) */
/* WARNING: Removing unreachable block (ram,0x000100c1cca0) */
/* WARNING: Removing unreachable block (ram,0x000100c1cc4c) */
/* WARNING: Removing unreachable block (ram,0x000100c1cbf0) */
/* WARNING: Removing unreachable block (ram,0x000100c1cc20) */
/* WARNING: Removing unreachable block (ram,0x000100c1cbf8) */
/* WARNING: Removing unreachable block (ram,0x000100c1ccec) */
/* WARNING: Removing unreachable block (ram,0x000100c1cbe0) */
/* WARNING: Removing unreachable block (ram,0x000100c1ccdc) */
/* WARNING: Removing unreachable block (ram,0x000100c1cce4) */

void FUN_100c1cb84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5d068();
  func_0x000107c61180();
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c5bcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c1cd04; end: 100c1cfbb; -[SCPlusCustomAppThemeProviderImpl syncLegacyAppAppearancePref] */

void FUN_100c1cd04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4ea40();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000100529264();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d1a68;
    func_0x000107c61160();
    puVar3 = PTR_PTR_1126d1a90;
    func_0x000107c61160(PTR_PTR_1126d1a90);
    func_0x000107c54ef0(puVar1,param_2,puVar3);
    func_0x000107c61170(puVar3);
  }
  puVar3 = puVar1;
  func_0x000107c4442c();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c4adac();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar1;
    if (puRam00000001138466f0 == (undefined *)0x2) {
      func_0x000107c4442c(puVar1);
      func_0x000107c61180();
    }
    else {
      if (puRam00000001138466f0 != (undefined *)0x1) goto LAB_100c1cf5c;
      func_0x000107c4442c(puVar1);
      func_0x000107c61180();
    }
    func_0x000107c56954();
    func_0x000107c61170(puVar3);
    puVar3 = puVar1;
    func_0x000107c41214(puVar1);
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c3e680();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar7);
    func_0x000107c61180();
    func_0x000107c57554();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
  }
  else {
    puVar3 = puVar4;
    func_0x000107c49d0c(puVar4,param_2,&PTR____CFConstantStringClassReference_110dceb38);
    if ((((ulong)puVar3 & 1) != 0) ||
       (puVar3 = puVar4,
       func_0x000107c49d0c(puVar4,param_2,&PTR____CFConstantStringClassReference_110dceb58),
       (int)puVar3 != 0)) {
      puVar3 = puVar4;
      FUN_100c1cfbc();
      func_0x000107c61180();
      puVar6 = puVar3;
      func_0x000107c3dd68();
      func_0x000107c61170(puVar3);
      if (puRam00000001138466f0 != puVar6) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x000107c4ec80(uVar5);
        func_0x000107c61180();
        uVar7 = uVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
        func_0x000107c61180();
        func_0x000107c56bcc(uVar7,param_2,puVar3,&PTR____CFConstantStringClassReference_110db02d8);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar5);
        func_0x00010099c218(puVar6);
      }
    }
  }
LAB_100c1cf5c:
  puVar3 = puVar1;
  func_0x000107c4442c(puVar1);
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c1cfbc; end: 100c1d02b;  */

void FUN_100c1cfbc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam00000001137fbfa0;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1137fbfa0,&PTR___NSConcreteGlobalBlock_110d66238);
  }
  uVar2 = uRam00000001137fbf98;
  func_0x000107c4d9e8(uRam00000001137fbf98);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c1d02c; end: 100c1d177;  */

long FUN_100c1d02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  lVar2 = (long)puRam00000001137fbf98;
  puRam00000001137fbf98 = puVar1;
  func_0x000107c61170();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x00010057be1c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4080c();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          func_0x000107c61128(lVar2);
        }
        puVar1 = puRam00000001137fbf98;
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar4 = uVar5;
        func_0x000107c5c8c0(uVar5);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar1,param_2,uVar5,uVar4);
        func_0x000107c61170(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  func_0x000107c60e78();
  return *(long *)(lVar2 + 0x10);
}



/* Entry: 100c1d178; end: 100c1d17f; -[AppTheme themeId] */

undefined8 FUN_100c1d178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c1d180; end: 100c1d2ff; -[SCPlusCustomAppThemeProviderImpl _applyTheme:skipComposer:] */

void FUN_100c1d180(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  FUN_100c1cfbc();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c3dd68();
    lVar6 = lVar1;
    func_0x000107c5d9c8();
    if (2 < lVar5) goto LAB_100c1d264;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4ec80(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
LAB_100c1d264:
  func_0x00010099c218(lVar5);
  if ((param_4 & 1) == 0) {
    func_0x000107c3cbbc(param_1);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc0000000;
  pcStack_80 = FUN_100c1d308;
  puStack_78 = &UNK_11096b7c8;
  lStack_70 = lVar5;
  lStack_68 = lVar6;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c1d300; end: 100c1d307; -[AppTheme userInterfaceStyle] */

undefined8 FUN_100c1d300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c1d308; end: 100c1d4e3;  */

/* WARNING: Possible PIC construction at 0x000100c1d358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1d390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1d3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1d394) */
/* WARNING: Removing unreachable block (ram,0x000100c1d35c) */
/* WARNING: Removing unreachable block (ram,0x000100c1d3c8) */

void FUN_100c1d308(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c61180();
  func_0x000107c5e408();
  func_0x000107c61180();
  func_0x000107c43638();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c1d4e4; end: 100c1d4e7;  */

void FUN_100c1d4e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c1d4e8; end: 100c1d50f; -[SCAppLaunchSignaler signalScopeGraphSetupEnd] */

void FUN_100c1d4e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c1d510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c1d510; end: 100c1d70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1d510(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  uint uStack_70;
  
  if (*(char *)(unaff_x20 + _DAT_11307c858) != '\x01') {
    return;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11307c860);
  puVar14 = &uStack_c8;
  puVar12 = puVar1;
  func_0x000107c61428(puVar1,puVar14,0x21,0);
  if (puVar1[7] == 0) goto LAB_100c1d618;
  func_0x000107c6106c();
  uVar15 = puVar1[8];
  if (*(long *)(uVar15 + 0x10) == 0) {
LAB_100c1d590:
    func_0x000107c61558(uVar15);
    uStack_128 = puVar1[8];
    puVar14 = (ulong *)0x0;
    func_0x000100086a54(puVar12,0x36,uVar15);
    puVar1[8] = uStack_128;
    puVar13 = puVar12;
  }
  else {
    puVar13 = (ulong *)0x36;
    func_0x000100086a50();
    if (((ulong)puVar14 & 1) == 0) {
      uVar15 = puVar1[8];
      goto LAB_100c1d590;
    }
  }
  if (puVar1[7] != 0) {
    func_0x0001000aa068();
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100c1d710);
      (*pcVar11)();
    }
    uVar15 = puVar1[7];
    if (*(long *)(uVar15 + 0x10) != 0) {
      func_0x000100086a50(0x36);
      if (((ulong)puVar14 & 1) != 0) goto LAB_100c1d618;
      uVar15 = puVar1[7];
    }
    func_0x000107c61558(uVar15);
    uStack_128 = puVar1[7];
    func_0x000100086a54(puVar13,0x36,uVar15);
    puVar1[7] = uStack_128;
  }
LAB_100c1d618:
  func_0x000107c614a8(&uStack_c8);
  uVar15 = puVar1[7];
  if (uVar15 != 0) {
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    uVar3 = puVar1[2];
    uVar7 = puVar1[3];
    uVar4 = puVar1[4];
    uVar8 = puVar1[5];
    uVar17 = puVar1[6];
    uVar5 = puVar1[8];
    uVar9 = puVar1[9];
    uVar16 = puVar1[10];
    uVar10 = puVar1[0xb];
    uStack_c8 = uVar2;
    uStack_c0 = uVar6;
    uStack_b8 = uVar3;
    uStack_b0 = uVar7;
    uStack_a8 = uVar4;
    uStack_a0 = uVar8;
    uStack_98 = uVar17;
    uStack_90 = uVar15;
    uStack_88 = uVar5;
    uStack_80 = uVar9;
    uStack_78 = uVar16;
    uStack_70 = (uint)uVar10;
    func_0x00010008718c(&uStack_c8,&uStack_128);
    if (lRam000000011307c830 != -1) {
      func_0x000107c61568(0x11307c830,&UNK_100087328);
    }
    uStack_128 = uVar2 & 0x701;
    uStack_f8 = uVar17 & 1;
    uStack_d0 = (uint)uVar10 & 0x1010101 | 0x40000000;
    uStack_120 = uVar6;
    uStack_118 = uVar3;
    uStack_110 = uVar7;
    uStack_108 = uVar4;
    uStack_100 = uVar8;
    uStack_f0 = uVar15;
    uStack_e8 = uVar5;
    uStack_e0 = uVar9;
    uStack_d8 = uVar16;
    func_0x000100087c34(&uStack_128);
    func_0x0001000880fc(&uStack_128);
  }
  return;
}



/* Entry: 100c1d710; end: 100c1d98f;  */

/* WARNING: Possible PIC construction at 0x000100c1d830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1d924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1d978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1d834) */
/* WARNING: Removing unreachable block (ram,0x000100c1d97c) */

void FUN_100c1d710(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  uVar6 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (uVar6 == 0) {
    return;
  }
  uVar7 = uVar6;
  func_0x0001002a6ed0();
  iVar5 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    func_0x0001000d26fc();
    uStack_110 = param_1;
    if (iVar5 != 0) {
      func_0x0001000c74f0(alStack_c0);
      uStack_a8 = *(undefined8 *)(alStack_c0[0] + 0x18);
      uStack_b0 = *(undefined8 *)(alStack_c0[0] + 0x10);
      uStack_98 = *(undefined8 *)(alStack_c0[0] + 0x28);
      uStack_a0 = *(undefined8 *)(alStack_c0[0] + 0x20);
      uStack_88 = *(undefined8 *)(alStack_c0[0] + 0x38);
      uStack_90 = *(undefined8 *)(alStack_c0[0] + 0x30);
      uStack_78 = *(undefined8 *)(alStack_c0[0] + 0x48);
      uStack_80 = *(undefined8 *)(alStack_c0[0] + 0x40);
      uStack_70 = *(undefined8 *)(alStack_c0[0] + 0x50);
      uStack_68 = (undefined4)*(undefined8 *)(alStack_c0[0] + 0x58);
      uStack_5c = *(undefined8 *)(alStack_c0[0] + 100);
      uStack_64 = (undefined4)*(undefined8 *)(alStack_c0[0] + 0x5c);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(alStack_c0[0] + 0x5c) >> 0x20);
      func_0x00010008718c(&uStack_b0,&uStack_120);
      func_0x000107c61574(alStack_c0[0]);
      puVar8 = &uStack_b0;
      func_0x0001040b7f6c(puVar8,param_1);
      func_0x000100087254(&uStack_b0);
      if (((ulong)puVar8 & 1) != 0) {
        *(undefined8 *)(unaff_x20 + 0x10) = 0;
        uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        bVar9 = *(byte *)(*(long *)(unaff_x20 + 0x38) + 0x20);
        uStack_108 = 0;
        if (bVar9 < 2) {
          uStack_108 = uVar11;
        }
        uVar2 = 0x12;
        if (bVar9 < 2) {
          uVar2 = uVar11;
        }
        uStack_100 = CONCAT71(uStack_100._1_7_,1 < bVar9);
        func_0x000100075034(&UNK_1000c7468,&uStack_120,PTR___sytN_11034f1b0 + 8);
        uVar7 = unaff_x20 + 0x40;
        func_0x000107c61618();
        if (uVar7 == 0) {
          lVar14 = *(long *)(unaff_x20 + 0x28);
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          lVar13 = *(long *)(lVar14 + 0x30);
          lVar10 = *(long *)(lVar13 + 0x10);
          uStack_120 = uVar2;
          if (lVar10 != 0) {
            pcVar12 = (char *)(lVar13 + 0x20);
            uVar11 = *(undefined8 *)(lVar14 + 0x10);
            bVar9 = *(byte *)(lVar14 + 0x18);
            do {
              cVar3 = *pcVar12;
              if (bVar9 < 2) {
                if (bVar9 == 0) {
                  bVar4 = cVar3 == '\x01';
                }
                else {
                  bVar4 = cVar3 == '\0';
                }
              }
              else if (bVar9 == 2) {
                bVar4 = cVar3 == '\x02';
              }
              else {
                bVar4 = cVar3 == '\x03';
              }
              if (bVar4 && pcVar12[1] == '\0') {
                pcVar1 = *(code **)(pcVar12 + 8);
                uVar2 = *(undefined8 *)(pcVar12 + 0x10);
                func_0x000107c61434(lVar13);
                func_0x000107c6157c(uVar2);
                (*pcVar1)(uVar11,bVar9,&uStack_120);
                *(undefined8 *)(lVar14 + 0x10) = uVar11;
                *(byte *)(lVar14 + 0x18) = bVar9;
                break;
              }
              pcVar12 = pcVar12 + 0x18;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        else {
          func_0x0001000c74f0(&uStack_120);
          func_0x0001040b569c(uStack_120);
          uVar6 = uVar7;
        }
        goto code_r0x000107c615e8;
      }
    }
    func_0x000100075034(0x100c1da24,&uStack_120,PTR___sytN_11034f1b0 + 8);
    func_0x0001000c74f0(&uStack_120);
    uVar11 = uStack_120;
    func_0x000107c59828(*(undefined8 *)(uVar6 + 0x78));
    func_0x000107c61574(uVar11);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
  return;
}



/* Entry: 100c1d990; end: 100c1da0f;  */

void FUN_100c1d990(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  lVar2 = *param_1;
  uStack_78 = *(undefined8 *)(lVar2 + 0x18);
  uStack_80 = *(undefined8 *)(lVar2 + 0x10);
  uStack_68 = *(undefined8 *)(lVar2 + 0x28);
  uStack_70 = *(undefined8 *)(lVar2 + 0x20);
  uStack_58 = *(undefined8 *)(lVar2 + 0x38);
  uStack_60 = *(undefined8 *)(lVar2 + 0x30);
  uStack_48 = *(undefined8 *)(lVar2 + 0x48);
  uStack_50 = *(undefined8 *)(lVar2 + 0x40);
  uStack_40 = *(undefined8 *)(lVar2 + 0x50);
  uStack_38 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
  uStack_2c = *(undefined8 *)(lVar2 + 100);
  uStack_34 = (undefined4)*(undefined8 *)(lVar2 + 0x5c);
  uStack_30 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x5c) >> 0x20);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar5 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  *(undefined8 *)(lVar2 + 0x18) = puVar1[1];
  *(undefined8 *)(lVar2 + 0x10) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar4 = puVar1[5];
  uVar3 = puVar1[4];
  uVar6 = puVar1[7];
  uVar5 = puVar1[6];
  uVar8 = puVar1[9];
  uVar7 = puVar1[8];
  uVar9 = *(undefined8 *)((long)puVar1 + 0x4c);
  *(undefined8 *)(lVar2 + 100) = *(undefined8 *)((long)puVar1 + 0x54);
  *(undefined8 *)(lVar2 + 0x5c) = uVar9;
  *(undefined8 *)(lVar2 + 0x48) = uVar6;
  *(undefined8 *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(lVar2 + 0x58) = uVar8;
  *(undefined8 *)(lVar2 + 0x50) = uVar7;
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  func_0x00010008718c(puVar1,auStack_e0);
  func_0x000100087254(&uStack_80);
  return;
}



/* Entry: 100c1da10; end: 100c1da37;  */

void FUN_100c1da10(void)

{
  FUN_100c1d990();
  return;
}



/* Entry: 100c1da38; end: 100c1db33; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor setStartupLaunchSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1da38(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11307cde0);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c1db34);
      (*pcVar1)();
    }
    func_0x000107c61174(param_1);
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar5);
      }
      else {
        uVar5 = uVar4;
        func_0x0001044745d4(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      func_0x000107c59828(uVar5);
      func_0x000107c615e8(uVar5);
    } while (uVar3 != uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c1db34; end: 100c1db63; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor setStartupLaunchSource:] */

void FUN_100c1db34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_100c1db64(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c1db64; end: 100c1dc97;  */

/* WARNING: Possible PIC construction at 0x000100c1dc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1dc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1dc64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1dc58) */
/* WARNING: Removing unreachable block (ram,0x000100c1dc44) */
/* WARNING: Removing unreachable block (ram,0x000100c1dc68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1db64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103b68d8;
  func_0x000107c613fc(&UNK_1103b68d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar3 != 0) {
    puVar2 = &UNK_1103b6900;
    func_0x000107c613fc(&UNK_1103b6900,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x100c1dd70;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(long *)(puVar2 + 0x20) = lVar3;
    pcStack_50 = FUN_100c1dd6c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1103b6918;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61580(lVar3,2);
    func_0x000107c6157c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100c1dc98; end: 100c1dc9b;  */

void FUN_100c1dc98(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100c1dc9c; end: 100c1dc9f; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl setStartupLaunchSource:] */

void FUN_100c1dc9c(void)

{
  return;
}



/* Entry: 100c1dca0; end: 100c1dd6b;  */

void FUN_100c1dca0(void)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  long unaff_x20;
  byte abStack_57 [46];
  undefined1 uStack_29;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011381e9d8 & 1) == 0) {
    bRam000000011381e9d8 = 1;
    puVar1 = &UNK_10f3f4992;
    func_0x000107c61138();
    if (puVar1 != (undefined *)0x0) {
      lVar3 = 0;
      uStack_29 = 0;
      do {
        abStack_57[lVar3] = (&UNK_10de1e480)[lVar3] ^ 0xaa;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x2e);
      pbVar2 = abStack_57;
      func_0x000107c612e4(pbVar2);
      func_0x000107c60ef4(puVar1,pbVar2);
      if (puVar1 != (undefined *)0x0) {
        func_0x000107c610d8();
        puRam000000011381e9e0 = puVar1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100c1dd6c; end: 100c1dd87;  */

void FUN_100c1dd6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100c1dd88; end: 100c1ddf3; -[SCApplicationState appDidFinishLaunching] */

void FUN_100c1dd88(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_18 = *(long *)(param_1 + 0x10) == 2;
  uStack_20 = 1;
  if ((bool)uStack_18) {
    uStack_20 = 2;
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100c1ddf4;
  puStack_30 = &UNK_110861e68;
  lStack_28 = param_1;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 100c1ddf4; end: 100c1de1f;  */

void FUN_100c1ddf4(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar1 != 2) {
    lVar1 = 0;
  }
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = lVar1;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = *(undefined1 *)(param_1 + 0x30);
  return;
}



/* Entry: 100c1de20; end: 100c1de23; -[SCApplicationLifecycleEventsImpl didFinishLaunchingPublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1de20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091dc8));
  return;
}



/* Entry: 100c1de24; end: 100c1de4f;  */

void FUN_100c1de24(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b8e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c1de50; end: 100c1de57; -[SCAppUserLifecycleEventHandlerV2 _handleAppDidFinishLaunching] */

void FUN_100c1de50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppDidFinishLaunching_112616408);
  return;
}



/* Entry: 100c1de58; end: 100c1de5b; -[SCFriendsFeedReadyLogger onAppDidFinishLaunching] */

void FUN_100c1de58(void)

{
  return;
}



/* Entry: 100c1de5c; end: 100c1de5f; -[SCFeedAppUserLifecycleObserver onAppDidFinishLaunching] */

void FUN_100c1de5c(void)

{
  return;
}



/* Entry: 100c1de60; end: 100c1deab;  */

void FUN_100c1de60(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c1deac; end: 100c1decb;  */

void FUN_100c1deac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    puVar2 = &UNK_1105933d8;
    func_0x000107c613fc(&UNK_1105933d8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    pcStack_68 = FUN_100c1e228;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110593468;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100c1decc; end: 100c1dfaf;  */

void FUN_100c1decc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puVar1 = &UNK_1105933d8;
    func_0x000107c613fc(&UNK_1105933d8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar2 = &puStack_88;
    uStack_70 = param_4;
    uStack_68 = param_3;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100c1dfb0; end: 100c1dfe7;  */

void FUN_100c1dfb0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100c1dfe8; end: 100c1e0cb;  */

void FUN_100c1dfe8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    puVar1 = &UNK_1105936a8;
    func_0x000107c613fc(&UNK_1105936a8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar2 = &puStack_88;
    uStack_70 = param_4;
    uStack_68 = param_3;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100c1e0cc; end: 100c1e0e3;  */

void FUN_100c1e0cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100c1e0e4; end: 100c1e0eb; -[SCStoriesAppUserLifecycleObserver onAppDidFinishLaunching] */

void FUN_100c1e0e4(void)

{
  return;
}



/* Entry: 100c1e0ec; end: 100c1e15b;  */

void FUN_100c1e0ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c3dfc0(*(undefined8 *)(param_2 + 0x28));
    func_0x000107c3de6c(*(undefined8 *)(param_2 + 0x10));
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100c1e15c; end: 100c1e173;  */

void FUN_100c1e15c(void)

{
  FUN_100c1e0ec();
  return;
}



/* Entry: 100c1e174; end: 100c1e227;  */

void FUN_100c1e174(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105e9af8;
    func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    func_0x0001001ca524(5,0,0x58,1,0,0,&UNK_10db65098,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100c1e228; end: 100c1e233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1e228(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  byte *pbVar18;
  long unaff_x20;
  undefined *puVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar6 != 0) {
      uVar7 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0e6490);
      lVar16 = lVar6;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar7);
      puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar15 = puVar19;
      if (lVar16 != 0) {
        uVar7 = 0x112d373e8;
        alStack_90[0] = lVar16;
        func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
        uVar8 = 0x112ee8aa0;
        func_0x0001000285a8(0x112ee8aa0,&UNK_10db15c98);
        ppuVar9 = &puStack_98;
        func_0x000107c6147c(ppuVar9,alStack_90,uVar7,uVar8,6);
        puVar15 = puStack_98;
        if ((int)ppuVar9 == 0) {
          puVar15 = puVar19;
        }
      }
    }
    puVar19 = &UNK_110593428;
    func_0x000107c613fc(&UNK_110593428,0x18,7);
    plVar20 = (long *)(puVar19 + 0x10);
    *plVar20 = (long)puVar17;
    puVar12 = puVar19;
    func_0x000107c60f34();
    func_0x000107c60f38();
    uVar7 = 0;
    func_0x000107c5f9c4(0);
    func_0x000107c5f9c0();
    puVar17 = &UNK_110593450;
    func_0x000107c613fc(&UNK_110593450,0x28,7);
    *(undefined **)(puVar17 + 0x10) = puVar12;
    *(long *)(puVar17 + 0x18) = lVar5;
    *(undefined **)(puVar17 + 0x20) = puVar19;
    func_0x000107c61174(puVar12);
    func_0x000107c6157c(lVar5);
    func_0x000107c6157c(puVar19);
    func_0x000107c5f9bc(FUN_100c27634,puVar17);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar17);
    func_0x000107c5ffb4();
    func_0x000107c61170(puVar12);
    func_0x000107c61428(plVar20,alStack_90,0,0);
    lVar6 = *plVar20;
    func_0x000107c61434(lVar6);
    func_0x000107c61574(puVar19);
    puVar17 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((ulong)puVar15 >> 0x3e == 0) {
      puVar19 = *(undefined **)(puVar17 + 0x10);
    }
    else {
      puVar19 = puVar17;
      if ((undefined *)0x7fffffffffffffff < puVar15) {
        puVar19 = puVar15;
      }
      func_0x000107c60480();
    }
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar19 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar15 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar17 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c1eafc);
              (*pcVar4)();
            }
            puVar10 = *(undefined **)(puVar15 + (long)puVar11 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar10 = puVar11;
            func_0x000102ab1a5c(puVar11,puVar15);
          }
          if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c1eaf8);
            (*pcVar4)();
          }
          puVar21 = puVar11 + 1;
          lVar16 = *(long *)(puVar10 + _DAT_112ee8890);
          if (2 < lVar16) break;
          if (lVar16 == 0) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar7 = 0;
            uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
            bVar25 = 0x80;
          }
          else if (lVar16 == 1) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar7 = 0;
            uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
            bVar25 = 0xa0;
          }
          else {
            if (lVar16 != 2) goto LAB_100c1e450;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar7 = 0;
            bVar25 = 0;
            uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
          }
LAB_100c1e72c:
          func_0x000107c61170();
          puVar11 = puVar12;
          func_0x000107c61558();
          puVar10 = puVar12;
          if (((ulong)puVar11 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x000102ab193c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          }
          uVar23 = *(ulong *)(puVar10 + 0x10);
          puVar12 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar23) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x000102ab193c(puVar12,uVar23 + 1,1,puVar10);
          }
          *(ulong *)(puVar12 + 0x10) = uVar23 + 1;
          *(undefined8 *)(puVar12 + uVar23 * 0x38 + 0x20) = uStack_c0;
          *(undefined8 *)(puVar12 + uVar23 * 0x38 + 0x28) = uStack_d0;
          *(undefined8 *)(puVar12 + uVar23 * 0x38 + 0x30) = uStack_b0;
          *(undefined8 *)(puVar12 + uVar23 * 0x38 + 0x38) = uStack_b8;
          *(undefined8 *)(puVar12 + uVar23 * 0x38 + 0x40) = uStack_c8;
          *(undefined8 *)(puVar12 + uVar23 * 0x38 + 0x48) = uVar7;
          puVar12[uVar23 * 0x38 + 0x50] = bVar25;
          puVar11 = puVar21;
          if (puVar21 == puVar19) goto LAB_100c1e7c4;
        }
        if (4 < lVar16) {
          if (lVar16 == 5) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar7 = 0;
            uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
            bVar25 = 0x60;
          }
          else {
            if (lVar16 != 6) goto LAB_100c1e450;
            uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
            uStack_b0 = *(undefined8 *)(puVar10 + _DAT_112ee88a0);
            uStack_b8 = *(undefined8 *)((long)(puVar10 + _DAT_112ee88a0) + 8);
            uStack_c8 = *(undefined8 *)(puVar10 + _DAT_112ee88a8);
            uVar7 = *(undefined8 *)((long)(puVar10 + _DAT_112ee88a8) + 8);
            func_0x000107c61434(uVar7);
            func_0x000107c61434(uStack_b8);
            bVar25 = 0xc0;
          }
          goto LAB_100c1e72c;
        }
        if (lVar16 == 3) {
          uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
          uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
          uStack_b0 = *(undefined8 *)(puVar10 + _DAT_112ee88a0);
          uStack_b8 = *(undefined8 *)((long)(puVar10 + _DAT_112ee88a0) + 8);
          uStack_c8 = *(undefined8 *)(puVar10 + _DAT_112ee88a8);
          uVar7 = *(undefined8 *)((long)(puVar10 + _DAT_112ee88a8) + 8);
          bVar25 = puVar10[_DAT_112ee88b0] | 0x20;
          func_0x000107c61434(uVar7);
          func_0x000107c61434(uStack_b8);
          goto LAB_100c1e72c;
        }
        if (lVar16 == 4) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uVar7 = 0;
          uStack_c0 = *(undefined8 *)(puVar10 + _DAT_112ee8888);
          uStack_d0 = *(undefined8 *)(puVar10 + _DAT_112ee8898);
          bVar25 = 0x40;
          goto LAB_100c1e72c;
        }
LAB_100c1e450:
        func_0x000107c61170();
        puVar11 = puVar11 + 1;
      } while (puVar21 != puVar19);
    }
LAB_100c1e7c4:
    func_0x000107c6142c(puVar15);
    FUN_100c27948(puVar12,lVar6);
    func_0x000107c6142c(puVar12);
    lVar16 = *(long *)(lVar6 + 0x10);
    if (lVar16 == 0) {
      func_0x000107c6142c(lVar6);
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102ab6a04(0,lVar16,0);
      puVar17 = puStack_98;
      uVar7 = 0x112ee88f8;
      func_0x0001000285a8(0x112ee88f8,&UNK_10db15a68);
      func_0x000107c61538();
      pbVar18 = (byte *)(lVar6 + 0x50);
      do {
        uVar8 = *(undefined8 *)(pbVar18 + -0x30);
        uVar2 = *(undefined8 *)(pbVar18 + -0x28);
        uVar27 = *(undefined8 *)(pbVar18 + -0x20);
        uVar26 = *(undefined8 *)(pbVar18 + -0x18);
        uVar22 = *(undefined8 *)(pbVar18 + -0x10);
        uVar24 = *(undefined8 *)(pbVar18 + -8);
        bVar25 = *pbVar18;
        bVar3 = bVar25 >> 5;
        uVar23 = (ulong)bVar3;
        if (bVar3 < 3) {
          if (bVar3 == 0) {
            uVar23 = 2;
            uVar22 = 0;
            uVar24 = 0;
            uVar26 = 0;
            uVar27 = 0;
          }
          else {
            if (bVar3 == 1) {
              uVar23 = 3;
              goto LAB_100c1e8bc;
            }
            uVar26 = 0;
            uVar27 = 0;
            uVar22 = 0;
            uVar24 = 0;
            uVar23 = 4;
          }
        }
        else if (bVar3 < 5) {
          if (bVar3 == 3) {
            uVar26 = 0;
            uVar27 = 0;
            uVar22 = 0;
            uVar24 = 0;
            uVar23 = 5;
          }
          else {
            uVar23 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar22 = 0;
            uVar24 = 0;
          }
        }
        else if (bVar3 == 5) {
          uVar26 = 0;
          uVar27 = 0;
          uVar22 = 0;
          uVar24 = 0;
          uVar23 = 1;
        }
        else {
LAB_100c1e8bc:
          func_0x000107c61434(uVar24);
          func_0x000107c61434(uVar26);
        }
        lVar13 = 0;
        FUN_100c1f008();
        lVar14 = lVar13;
        func_0x000107c610f8();
        *(undefined8 *)(lVar14 + _DAT_112ee88b8) = uVar7;
        *(undefined8 *)(lVar14 + _DAT_112ee8888) = uVar8;
        *(ulong *)(lVar14 + _DAT_112ee8890) = uVar23;
        *(undefined8 *)(lVar14 + _DAT_112ee8898) = uVar2;
        puVar1 = (undefined8 *)(lVar14 + _DAT_112ee88a0);
        *puVar1 = uVar27;
        puVar1[1] = uVar26;
        puVar1 = (undefined8 *)(lVar14 + _DAT_112ee88a8);
        *puVar1 = uVar22;
        puVar1[1] = uVar24;
        *(byte *)(lVar14 + _DAT_112ee88b0) = bVar3 == 1 & bVar25;
        plVar20 = &lStack_a8;
        lStack_a8 = lVar14;
        lStack_a0 = lVar13;
        func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
        uVar23 = *(ulong *)(puVar17 + 0x10);
        puStack_98 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar23) {
          func_0x000102ab6a04(1 < *(ulong *)(puVar17 + 0x18),uVar23 + 1,1);
        }
        puVar17 = puStack_98;
        pbVar18 = pbVar18 + 0x38;
        *(ulong *)(puStack_98 + 0x10) = uVar23 + 1;
        *(long **)(puStack_98 + uVar23 * 8 + 0x20) = plVar20;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      func_0x000107c6142c(lVar6);
    }
    lVar6 = *(long *)(lVar5 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c6142c(puVar17);
    }
    else {
      uVar7 = 0;
      FUN_100c1f008(0);
      puVar15 = puVar17;
      func_0x000107c5fc48(puVar17,uVar7);
      func_0x000107c6142c(puVar17);
      uVar7 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0e6490);
      func_0x000107c56bcc(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(uVar7);
    }
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 100c1e234; end: 100c1eb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1e234(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  byte *pbVar17;
  undefined *puVar18;
  long *plVar19;
  undefined *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  byte bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar5 != 0) {
      uVar6 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0e6490);
      lVar15 = lVar5;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar6);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar14 = puVar18;
      if (lVar15 != 0) {
        uVar6 = 0x112d373e8;
        alStack_90[0] = lVar15;
        func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
        uVar7 = 0x112ee8aa0;
        func_0x0001000285a8(0x112ee8aa0,&UNK_10db15c98);
        ppuVar8 = &puStack_98;
        func_0x000107c6147c(ppuVar8,alStack_90,uVar6,uVar7,6);
        puVar14 = puStack_98;
        if ((int)ppuVar8 == 0) {
          puVar14 = puVar18;
        }
      }
    }
    puVar18 = &UNK_110593428;
    func_0x000107c613fc(&UNK_110593428,0x18,7);
    plVar19 = (long *)(puVar18 + 0x10);
    *plVar19 = (long)puVar16;
    puVar11 = puVar18;
    func_0x000107c60f34();
    func_0x000107c60f38();
    uVar6 = 0;
    func_0x000107c5f9c4(0);
    func_0x000107c5f9c0();
    puVar16 = &UNK_110593450;
    func_0x000107c613fc(&UNK_110593450,0x28,7);
    *(undefined **)(puVar16 + 0x10) = puVar11;
    *(long *)(puVar16 + 0x18) = param_1;
    *(undefined **)(puVar16 + 0x20) = puVar18;
    func_0x000107c61174(puVar11);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar18);
    func_0x000107c5f9bc(FUN_100c27634,puVar16);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar16);
    func_0x000107c5ffb4();
    func_0x000107c61170(puVar11);
    func_0x000107c61428(plVar19,alStack_90,0,0);
    lVar5 = *plVar19;
    func_0x000107c61434(lVar5);
    func_0x000107c61574(puVar18);
    puVar16 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((ulong)puVar14 >> 0x3e == 0) {
      puVar18 = *(undefined **)(puVar16 + 0x10);
    }
    else {
      puVar18 = puVar16;
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar18 = puVar14;
      }
      func_0x000107c60480();
    }
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar18 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar16 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c1eafc);
              (*pcVar4)();
            }
            puVar9 = *(undefined **)(puVar14 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar9 = puVar10;
            func_0x000102ab1a5c(puVar10,puVar14);
          }
          if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c1eaf8);
            (*pcVar4)();
          }
          puVar20 = puVar10 + 1;
          lVar15 = *(long *)(puVar9 + _DAT_112ee8890);
          if (2 < lVar15) break;
          if (lVar15 == 0) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar6 = 0;
            uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
            bVar24 = 0x80;
          }
          else if (lVar15 == 1) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar6 = 0;
            uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
            bVar24 = 0xa0;
          }
          else {
            if (lVar15 != 2) goto LAB_100c1e450;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar6 = 0;
            bVar24 = 0;
            uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
          }
LAB_100c1e72c:
          func_0x000107c61170();
          puVar10 = puVar11;
          func_0x000107c61558();
          puVar9 = puVar11;
          if (((ulong)puVar10 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            func_0x000102ab193c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          }
          uVar22 = *(ulong *)(puVar9 + 0x10);
          puVar11 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar22) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            func_0x000102ab193c(puVar11,uVar22 + 1,1,puVar9);
          }
          *(ulong *)(puVar11 + 0x10) = uVar22 + 1;
          *(undefined8 *)(puVar11 + uVar22 * 0x38 + 0x20) = uStack_c0;
          *(undefined8 *)(puVar11 + uVar22 * 0x38 + 0x28) = uStack_d0;
          *(undefined8 *)(puVar11 + uVar22 * 0x38 + 0x30) = uStack_b0;
          *(undefined8 *)(puVar11 + uVar22 * 0x38 + 0x38) = uStack_b8;
          *(undefined8 *)(puVar11 + uVar22 * 0x38 + 0x40) = uStack_c8;
          *(undefined8 *)(puVar11 + uVar22 * 0x38 + 0x48) = uVar6;
          puVar11[uVar22 * 0x38 + 0x50] = bVar24;
          puVar10 = puVar20;
          if (puVar20 == puVar18) goto LAB_100c1e7c4;
        }
        if (4 < lVar15) {
          if (lVar15 == 5) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uVar6 = 0;
            uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
            bVar24 = 0x60;
          }
          else {
            if (lVar15 != 6) goto LAB_100c1e450;
            uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
            uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
            uStack_b0 = *(undefined8 *)(puVar9 + _DAT_112ee88a0);
            uStack_b8 = *(undefined8 *)((long)(puVar9 + _DAT_112ee88a0) + 8);
            uStack_c8 = *(undefined8 *)(puVar9 + _DAT_112ee88a8);
            uVar6 = *(undefined8 *)((long)(puVar9 + _DAT_112ee88a8) + 8);
            func_0x000107c61434(uVar6);
            func_0x000107c61434(uStack_b8);
            bVar24 = 0xc0;
          }
          goto LAB_100c1e72c;
        }
        if (lVar15 == 3) {
          uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
          uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
          uStack_b0 = *(undefined8 *)(puVar9 + _DAT_112ee88a0);
          uStack_b8 = *(undefined8 *)((long)(puVar9 + _DAT_112ee88a0) + 8);
          uStack_c8 = *(undefined8 *)(puVar9 + _DAT_112ee88a8);
          uVar6 = *(undefined8 *)((long)(puVar9 + _DAT_112ee88a8) + 8);
          bVar24 = puVar9[_DAT_112ee88b0] | 0x20;
          func_0x000107c61434(uVar6);
          func_0x000107c61434(uStack_b8);
          goto LAB_100c1e72c;
        }
        if (lVar15 == 4) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uVar6 = 0;
          uStack_c0 = *(undefined8 *)(puVar9 + _DAT_112ee8888);
          uStack_d0 = *(undefined8 *)(puVar9 + _DAT_112ee8898);
          bVar24 = 0x40;
          goto LAB_100c1e72c;
        }
LAB_100c1e450:
        func_0x000107c61170();
        puVar10 = puVar10 + 1;
      } while (puVar20 != puVar18);
    }
LAB_100c1e7c4:
    func_0x000107c6142c(puVar14);
    FUN_100c27948(puVar11,lVar5);
    func_0x000107c6142c(puVar11);
    lVar15 = *(long *)(lVar5 + 0x10);
    if (lVar15 == 0) {
      func_0x000107c6142c(lVar5);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102ab6a04(0,lVar15,0);
      puVar16 = puStack_98;
      uVar6 = 0x112ee88f8;
      func_0x0001000285a8(0x112ee88f8,&UNK_10db15a68);
      func_0x000107c61538();
      pbVar17 = (byte *)(lVar5 + 0x50);
      do {
        uVar7 = *(undefined8 *)(pbVar17 + -0x30);
        uVar2 = *(undefined8 *)(pbVar17 + -0x28);
        uVar26 = *(undefined8 *)(pbVar17 + -0x20);
        uVar25 = *(undefined8 *)(pbVar17 + -0x18);
        uVar21 = *(undefined8 *)(pbVar17 + -0x10);
        uVar23 = *(undefined8 *)(pbVar17 + -8);
        bVar24 = *pbVar17;
        bVar3 = bVar24 >> 5;
        uVar22 = (ulong)bVar3;
        if (bVar3 < 3) {
          if (bVar3 == 0) {
            uVar22 = 2;
            uVar21 = 0;
            uVar23 = 0;
            uVar25 = 0;
            uVar26 = 0;
          }
          else {
            if (bVar3 == 1) {
              uVar22 = 3;
              goto LAB_100c1e8bc;
            }
            uVar25 = 0;
            uVar26 = 0;
            uVar21 = 0;
            uVar23 = 0;
            uVar22 = 4;
          }
        }
        else if (bVar3 < 5) {
          if (bVar3 == 3) {
            uVar25 = 0;
            uVar26 = 0;
            uVar21 = 0;
            uVar23 = 0;
            uVar22 = 5;
          }
          else {
            uVar22 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar21 = 0;
            uVar23 = 0;
          }
        }
        else if (bVar3 == 5) {
          uVar25 = 0;
          uVar26 = 0;
          uVar21 = 0;
          uVar23 = 0;
          uVar22 = 1;
        }
        else {
LAB_100c1e8bc:
          func_0x000107c61434(uVar23);
          func_0x000107c61434(uVar25);
        }
        lVar12 = 0;
        FUN_100c1f008();
        lVar13 = lVar12;
        func_0x000107c610f8();
        *(undefined8 *)(lVar13 + _DAT_112ee88b8) = uVar6;
        *(undefined8 *)(lVar13 + _DAT_112ee8888) = uVar7;
        *(ulong *)(lVar13 + _DAT_112ee8890) = uVar22;
        *(undefined8 *)(lVar13 + _DAT_112ee8898) = uVar2;
        puVar1 = (undefined8 *)(lVar13 + _DAT_112ee88a0);
        *puVar1 = uVar26;
        puVar1[1] = uVar25;
        puVar1 = (undefined8 *)(lVar13 + _DAT_112ee88a8);
        *puVar1 = uVar21;
        puVar1[1] = uVar23;
        *(byte *)(lVar13 + _DAT_112ee88b0) = bVar3 == 1 & bVar24;
        plVar19 = &lStack_a8;
        lStack_a8 = lVar13;
        lStack_a0 = lVar12;
        func_0x000107c61154(plVar19,PTR_s_init_1125d9248);
        uVar22 = *(ulong *)(puVar16 + 0x10);
        puStack_98 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar22) {
          func_0x000102ab6a04(1 < *(ulong *)(puVar16 + 0x18),uVar22 + 1,1);
        }
        puVar16 = puStack_98;
        pbVar17 = pbVar17 + 0x38;
        *(ulong *)(puStack_98 + 0x10) = uVar22 + 1;
        *(long **)(puStack_98 + uVar22 * 8 + 0x20) = plVar19;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      func_0x000107c6142c(lVar5);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c6142c(puVar16);
    }
    else {
      uVar6 = 0;
      FUN_100c1f008(0);
      puVar14 = puVar16;
      func_0x000107c5fc48(puVar16,uVar6);
      func_0x000107c6142c(puVar16);
      uVar6 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0e6490);
      func_0x000107c56bcc(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100c1eb10; end: 100c1eb13; -[SCNotificationAppUserLifecycleObserver onAppDidFinishLaunching] */

void FUN_100c1eb10(void)

{
  return;
}



/* Entry: 100c1eb14; end: 100c1eb17; -[_TtC25SCBlizzardGeoSignalFeeder42SCBlizzardGeoSignalFeederLifecycleObserver onAppDidFinishLaunching] */

void FUN_100c1eb14(void)

{
  return;
}



/* Entry: 100c1eb18; end: 100c1eb1b; -[SCApplicationLoggerWithUserLifecycleObserver onAppDidFinishLaunching] */

void FUN_100c1eb18(void)

{
  return;
}



/* Entry: 100c1eb1c; end: 100c1eb1f; -[SCTIVAppUserLifecycleObserver onAppDidFinishLaunching] */

void FUN_100c1eb1c(void)

{
  return;
}



/* Entry: 100c1eb20; end: 100c1eb47; -[SCAppLaunchSignaler appDidFinishLaunchingEnd] */

void FUN_100c1eb20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c1eb48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c1eb48; end: 100c1eff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1eb48(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  uint uStack_70;
  
  if (*(char *)(unaff_x20 + _DAT_11307c858) != '\x01') {
    return;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11307c860);
  puVar13 = &uStack_c8;
  func_0x000107c61428(puVar1,puVar13,0x21,0);
  uVar12 = uRam00000001138136c8;
  if (puVar1[7] == 0) goto LAB_100c1ef04;
  uVar14 = puVar1[8];
  if (*(long *)(uVar14 + 0x10) == 0) {
LAB_100c1ebc8:
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[8];
    puVar13 = (ulong *)0x0;
    func_0x000100086a54(uVar12,0x44,uVar14);
    puVar1[8] = uStack_128;
  }
  else {
    func_0x000100086a50(0x44);
    if (((ulong)puVar13 & 1) == 0) {
      uVar14 = puVar1[8];
      goto LAB_100c1ebc8;
    }
  }
  uVar12 = uRam00000001138136d0;
  uVar14 = puVar1[7];
  if (uVar14 == 0) goto LAB_100c1ef04;
  if (*(long *)(uVar14 + 0x10) == 0) {
LAB_100c1ec28:
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[7];
    puVar13 = (ulong *)0x0;
    func_0x000100086a54(uVar12,0x44,uVar14);
    puVar1[7] = uStack_128;
    uVar12 = uRam00000001138136d8;
    uVar14 = uStack_128;
  }
  else {
    func_0x000100086a50(0x44);
    if (((ulong)puVar13 & 1) == 0) {
      uVar14 = puVar1[7];
      goto LAB_100c1ec28;
    }
    uVar14 = puVar1[7];
    uVar12 = uRam00000001138136d8;
  }
  uRam00000001138136d8 = uVar12;
  if (uVar14 != 0) {
    uVar14 = puVar1[8];
    if (*(long *)(uVar14 + 0x10) != 0) {
      func_0x000100086a50(0x45);
      if (((ulong)puVar13 & 1) != 0) goto LAB_100c1eca8;
      uVar14 = puVar1[8];
    }
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[8];
    puVar13 = (ulong *)0x45;
    func_0x000100086a54(uVar12,0x45,uVar14);
    puVar1[8] = uStack_128;
  }
LAB_100c1eca8:
  uVar12 = uRam00000001138136e0;
  uVar14 = puVar1[7];
  if (uVar14 == 0) goto LAB_100c1ef04;
  if (*(long *)(uVar14 + 0x10) == 0) {
LAB_100c1ecd8:
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[7];
    puVar13 = (ulong *)0x45;
    func_0x000100086a54(uVar12,0x45,uVar14);
    puVar1[7] = uStack_128;
    uVar14 = uStack_128;
  }
  else {
    func_0x000100086a50(0x45);
    if (((ulong)puVar13 & 1) == 0) {
      uVar14 = puVar1[7];
      goto LAB_100c1ecd8;
    }
    uVar14 = puVar1[7];
  }
  uVar12 = uRam00000001138136e8;
  if (uVar14 != 0) {
    uVar14 = puVar1[8];
    if (*(long *)(uVar14 + 0x10) != 0) {
      func_0x000100086a50(0x46);
      if (((ulong)puVar13 & 1) != 0) goto LAB_100c1ed58;
      uVar14 = puVar1[8];
    }
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[8];
    puVar13 = (ulong *)0x0;
    func_0x000100086a54(uVar12,0x46,uVar14);
    puVar1[8] = uStack_128;
  }
LAB_100c1ed58:
  uVar12 = uRam00000001138136f0;
  uVar14 = puVar1[7];
  if (uVar14 == 0) goto LAB_100c1ef04;
  if (*(long *)(uVar14 + 0x10) == 0) {
LAB_100c1ed88:
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[7];
    puVar13 = (ulong *)0x0;
    func_0x000100086a54(uVar12,0x46,uVar14);
    puVar1[7] = uStack_128;
    uVar14 = uStack_128;
  }
  else {
    func_0x000100086a50(0x46);
    if (((ulong)puVar13 & 1) == 0) {
      uVar14 = puVar1[7];
      goto LAB_100c1ed88;
    }
    uVar14 = puVar1[7];
  }
  uVar12 = uRam00000001138136f8;
  if (uVar14 != 0) {
    uVar14 = puVar1[8];
    if (*(long *)(uVar14 + 0x10) != 0) {
      func_0x000100086a50(0x47);
      if (((ulong)puVar13 & 1) != 0) goto LAB_100c1ee08;
      uVar14 = puVar1[8];
    }
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[8];
    puVar13 = (ulong *)0x47;
    func_0x000100086a54(uVar12,0x47,uVar14);
    puVar1[8] = uStack_128;
  }
LAB_100c1ee08:
  uVar12 = uRam0000000113813700;
  uVar14 = puVar1[7];
  if (uVar14 == 0) goto LAB_100c1ef04;
  if (*(long *)(uVar14 + 0x10) == 0) {
LAB_100c1ee38:
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[7];
    puVar13 = (ulong *)0x47;
    func_0x000100086a54(uVar12,0x47,uVar14);
    puVar1[7] = uStack_128;
    uVar14 = uStack_128;
  }
  else {
    uVar11 = 0x47;
    func_0x000100086a50(0x47);
    if (((ulong)puVar13 & 1) == 0) {
      uVar14 = puVar1[7];
      goto LAB_100c1ee38;
    }
    uVar12 = uVar11;
    uVar14 = puVar1[7];
  }
  if (uVar14 != 0) {
    func_0x000107c6106c();
    uVar14 = puVar1[8];
    if (*(long *)(uVar14 + 0x10) != 0) {
      func_0x000100086a50(0x39);
      if (((ulong)puVar13 & 1) != 0) goto LAB_100c1eeb8;
      uVar14 = puVar1[8];
    }
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[8];
    puVar13 = (ulong *)0x39;
    func_0x000100086a54(uVar12,0x39,uVar14);
    puVar1[8] = uStack_128;
  }
LAB_100c1eeb8:
  uVar14 = puVar1[7];
  if (uVar14 != 0) {
    if (*(long *)(uVar14 + 0x10) != 0) {
      func_0x000100086a50(0x39);
      if (((ulong)puVar13 & 1) != 0) goto LAB_100c1ef04;
      uVar14 = puVar1[7];
    }
    func_0x000107c61558(uVar14);
    uStack_128 = puVar1[7];
    func_0x000100086a54(0,0x39,uVar14);
    puVar1[7] = uStack_128;
  }
LAB_100c1ef04:
  func_0x000107c614a8(&uStack_c8);
  uVar14 = puVar1[7];
  if (uVar14 != 0) {
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    uVar3 = puVar1[2];
    uVar7 = puVar1[3];
    uVar4 = puVar1[4];
    uVar8 = puVar1[5];
    uVar16 = puVar1[6];
    uVar5 = puVar1[8];
    uVar9 = puVar1[9];
    uVar15 = puVar1[10];
    uVar10 = puVar1[0xb];
    uStack_c8 = uVar2;
    uStack_c0 = uVar6;
    uStack_b8 = uVar3;
    uStack_b0 = uVar7;
    uStack_a8 = uVar4;
    uStack_a0 = uVar8;
    uStack_98 = uVar16;
    uStack_90 = uVar14;
    uStack_88 = uVar5;
    uStack_80 = uVar9;
    uStack_78 = uVar15;
    uStack_70 = (uint)uVar10;
    func_0x00010008718c(&uStack_c8,&uStack_128);
    if (lRam000000011307c830 != -1) {
      func_0x000107c61568(0x11307c830,&UNK_100087328);
    }
    uStack_128 = uVar2 & 0x701;
    uStack_f8 = uVar16 & 1;
    uStack_d0 = (uint)uVar10 & 0x1010101 | 0x40000000;
    uStack_120 = uVar6;
    uStack_118 = uVar3;
    uStack_110 = uVar7;
    uStack_108 = uVar4;
    uStack_100 = uVar8;
    uStack_f0 = uVar14;
    uStack_e8 = uVar5;
    uStack_e0 = uVar9;
    uStack_d8 = uVar15;
    func_0x000100087c34(&uStack_128);
    func_0x0001000880fc(&uStack_128);
  }
  return;
}



/* Entry: 100c1eff8; end: 100c1f007; -[SCMainAppDelegate window] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1eff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127208e4),PTR_s_window_1126876a0);
  return;
}



/* Entry: 100c1f008; end: 100c1f027;  */

void FUN_100c1f008(void)

{
  func_0x000107c61168(&PTR_PTR_112884330);
  return;
}



/* Entry: 100c1f028; end: 100c1f067; -[SCMainAppSceneDelegate setWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1f028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720920;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c1f068; end: 100c1f077; -[SCMainAppSceneDelegate window] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c1f068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720920);
}



/* Entry: 100c1f078; end: 100c1f3d7;  */

/* WARNING: Possible PIC construction at 0x000100c1f280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1f448) */
/* WARNING: Removing unreachable block (ram,0x000100c1f450) */
/* WARNING: Removing unreachable block (ram,0x000100c1f414) */
/* WARNING: Removing unreachable block (ram,0x000100c1f464) */
/* WARNING: Removing unreachable block (ram,0x000100c1f454) */
/* WARNING: Removing unreachable block (ram,0x000100c1f46c) */
/* WARNING: Removing unreachable block (ram,0x000100c1f418) */
/* WARNING: Removing unreachable block (ram,0x000100c1f438) */
/* WARNING: Removing unreachable block (ram,0x000100c1f43c) */
/* WARNING: Removing unreachable block (ram,0x000100c1f38c) */
/* WARNING: Removing unreachable block (ram,0x000100c1f3d4) */
/* WARNING: Removing unreachable block (ram,0x000100c1f3ac) */
/* WARNING: Removing unreachable block (ram,0x000100c1f37c) */
/* WARNING: Removing unreachable block (ram,0x000100c1f318) */
/* WARNING: Removing unreachable block (ram,0x000100c1f284) */
/* WARNING: Removing unreachable block (ram,0x000100c1f4ac) */

void FUN_100c1f078(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_4 == 0) {
LAB_100c1f354:
    (*pcRam000000011381e9e0)(param_1,param_2,param_3,param_4,param_5);
    param_4 = param_5;
  }
  else {
    func_0x000107c61174(param_4);
    lVar2 = param_4;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_4);
        }
        lVar9 = *(long *)(lVar8 * 8);
        lVar3 = lVar9;
        func_0x000107c611b8();
        lVar7 = 0;
        do {
          lVar4 = lVar3;
          func_0x000107c613e4(lVar3,*(undefined8 *)((long)&PTR_DAT_1109878d0 + lVar7));
          if (lVar4 != 0) {
            uRam000000011383a310 = 0;
            goto LAB_100c1f334;
          }
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        lVar7 = param_4;
        func_0x000107c40808();
        if ((lVar7 == 1) && (func_0x000107c613e4(lVar3,&DAT_10f3f49ba), lVar3 != 0)) {
          func_0x000107c61174(lVar9);
          pcVar5 = "info";
          func_0x000107c612e4("info");
          lVar7 = lVar9;
          func_0x000107c61158();
          func_0x000107c60ef4();
          if (lVar7 != 0) {
            func_0x000107c61150(lVar9,pcVar5);
            func_0x000107c61180();
            param_4 = lVar9;
            if (lVar9 == 0) goto code_r0x000107c61170;
            puVar6 = &UNK_10f3f49c5;
            func_0x000107c612e4(&UNK_10f3f49c5);
            lVar2 = lVar9;
            func_0x000107c61158();
            func_0x000107c60ef4();
            if (lVar2 == 0) goto code_r0x000107c61170;
            func_0x000107c61150(lVar9,puVar6,1);
            func_0x000107c61180();
            if (param_4 != 0) {
              pcVar5 = "title";
              func_0x000107c612e4("title");
              lVar2 = param_4;
              func_0x000107c61158();
              func_0x000107c60ef4();
              if (lVar2 != 0) {
                func_0x000107c61150(param_4,pcVar5);
                func_0x000107c61180();
                func_0x000107c61178();
                func_0x000107c3ac4c();
                goto code_r0x000107c61170;
              }
            }
            func_0x000107c61170();
            param_4 = lVar9;
            goto code_r0x000107c61170;
          }
          pcVar5 = "";
          func_0x000107c61170(lVar9);
          func_0x000107c613e4("",&UNK_10f3f49d7);
          if (pcVar5 != (char *)0x0) {
            uRam000000011383a310 = 1;
LAB_100c1f334:
            func_0x000107c61170(param_4);
            uRam000000011383a308 = 2;
            goto LAB_100c1f354;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar2);
      lVar2 = param_4;
      func_0x000107c4080c();
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c1f3d8; end: 100c1f4bf; -[SCMainAppSceneDelegate sceneWillEnterForeground:] */

/* WARNING: Possible PIC construction at 0x000100c1f410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1f448) */
/* WARNING: Removing unreachable block (ram,0x000100c1f450) */
/* WARNING: Removing unreachable block (ram,0x000100c1f414) */
/* WARNING: Removing unreachable block (ram,0x000100c1f464) */
/* WARNING: Removing unreachable block (ram,0x000100c1f454) */
/* WARNING: Removing unreachable block (ram,0x000100c1f46c) */
/* WARNING: Removing unreachable block (ram,0x000100c1f418) */
/* WARNING: Removing unreachable block (ram,0x000100c1f438) */
/* WARNING: Removing unreachable block (ram,0x000100c1f43c) */
/* WARNING: Removing unreachable block (ram,0x000100c1f4ac) */

void FUN_100c1f3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000100288f58();
  func_0x000107c3d0e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c1f4c0; end: 100c1f4f3; -[SCNQEAppStateChangeNotifier sc_appWillEnterForeground] */

void FUN_100c1f4c0(undefined8 param_1)

{
  func_0x000107c4b6a4();
  func_0x000107c61180();
  func_0x000107c4db4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c1f4f4; end: 100c1f507; -[SCNQEAppStateChangeNotifier listener] */

void FUN_100c1f4f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 100c1f508; end: 100c1f567; -[SCNNetworkTypesAppStateChangeListener onAppStateChanged:] */

void FUN_100c1f508(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 100c1f568; end: 100c1f5e7; -[SIGNavigationBarButtonBadgeView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c1f58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1f5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1f5b0) */
/* WARNING: Removing unreachable block (ram,0x000100c1f590) */
/* WARNING: Removing unreachable block (ram,0x000100c1f5d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1f568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794fb0,0);
  return;
}



/* Entry: 100c1f5e8; end: 100c1f6af;  */

void FUN_100c1f5e8(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_100c1f740();
      iVar2 = iVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_100c1f808(*(undefined8 *)(param_1 + 0x20));
      func_0x000100c1f828();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107c3059c(*(undefined8 *)(param_1 + 0x28));
      func_0x000100c1f828();
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x34) * 2 + (uint)*(byte *)(param_1 + 0x35) * 2 +
          (uint)*(byte *)(param_1 + 0x36) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000107c39e1c();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 100c1f6b0; end: 100c1f73f;  */

long FUN_100c1f6b0(long param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  FUN_100c1f758();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001001a5744();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x24) == 3) {
    func_0x000107c39e7c(*(undefined8 *)(unaff_x19 + 0x18));
    param_1 = (extraout_x8_00 >> 6 & 0x3ffffff) + param_1;
  }
  else if (*(int *)(unaff_x19 + 0x24) == 2) {
    func_0x000100c1f76c(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x000100c1f774();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107c39eac();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 100c1f740; end: 100c1f757;  */

void FUN_100c1f740(void)

{
  FUN_100c1f6b0();
  func_0x000100c1f788();
  return;
}



/* Entry: 100c1f758; end: 100c1f7a3;  */

void FUN_100c1f758(void)

{
  return;
}



/* Entry: 100c1f7a4; end: 100c1f807;  */

void FUN_100c1f7a4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_100c1f7dc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_100c1f7dc:
    iVar1 = 0;
    goto LAB_100c1f7e0;
  }
  func_0x0001006016cc();
  iVar1 = (int)uVar2 + 1;
LAB_100c1f7e0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000107c39e1c();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 100c1f808; end: 100c1f81f;  */

void FUN_100c1f808(void)

{
  FUN_100c1f7a4();
  func_0x000100c1f788();
  return;
}



/* Entry: 100c1f820; end: 100c1f843;  */

void FUN_100c1f820(void)

{
  return;
}



/* Entry: 100c1f844; end: 100c1f973;  */

long * FUN_100c1f844(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  func_0x000100c1f834();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    FUN_100c1f974();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    func_0x000100c1fac4();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    FUN_100c1fb3c();
    plVar2 = (long *)0x18;
    func_0x0001001a59d0(0x18,param_1);
    func_0x000100c1fb48();
    param_4 = plVar2;
  }
  plVar5 = plVar2;
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    FUN_100c1fb3c();
    plVar5 = (long *)(ulong)*(uint *)(unaff_x20 + 0x30);
    uVar3 = 0x20;
    func_0x0001001a59d0(0x20,plVar2);
    func_0x0001001a59fc(plVar5,uVar3);
    param_4 = plVar5;
  }
  plVar2 = plVar5;
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    FUN_100c1fb3c();
    plVar2 = (long *)0x28;
    func_0x0001001a59d0(0x28,plVar5);
    func_0x000100c1fb48();
    param_4 = plVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    plVar2 = (long *)0x6;
    func_0x000107c39df4();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x36) == '\x01') {
    FUN_100c1fb3c();
    param_4 = (long *)0x38;
    func_0x0001001a59d0(0x38,plVar2);
    func_0x000100c1fb48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c39e08();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 100c1f974; end: 100c1f97f;  */

void FUN_100c1f974(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = 10;
  func_0x0001001a59d0(10,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 100c1f980; end: 100c1fa6f;  */

long * FUN_100c1f980(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  FUN_100c1fa70();
  func_0x000100c1fa80(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_100c1f9d0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_100c1f9d0;
  param_4 = (long *)&UNK_10f77b6b9;
  func_0x000100c1fa8c();
  func_0x000100c1fa94();
  func_0x000100c1faa4();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_100c1f9d0:
  func_0x000100c1faac();
  if ((bool)in_ZR) {
    func_0x000107c39e58();
    func_0x000100c1faac();
    func_0x000107c39ea0();
    func_0x000107c39e5c();
    unaff_x21 = param_1;
  }
  else if (extraout_w8 == 2) {
    func_0x000100c1fa80(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = (long *)&UNK_10f77b6df;
    func_0x000100c1fa8c();
    func_0x000100c1fab8();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107c39e80();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107c39ea8();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar2 = (int)param_3;
    param_3 = (ulong)(uint)(iVar2 - iVar3);
    if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar3);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar2);
}



/* Entry: 100c1fa70; end: 100c1facf;  */

void FUN_100c1fa70(void)

{
  return;
}



/* Entry: 100c1fad0; end: 100c1fb3b;  */

long * FUN_100c1fad0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000100c1f834();
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    func_0x0001001a5a30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c39e08();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 100c1fb3c; end: 100c1fbd3;  */

ulong * FUN_100c1fb3c(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 100c1fbd4; end: 100c1fd23;  */

void FUN_100c1fbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 auStack_210 [24];
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [200];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [184];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  
  func_0x000100c1fbbc();
  func_0x000100601ee0(auStack_48,param_5);
  uStack_110 = param_1;
  uStack_108 = param_2;
  func_0x000100601f8c(auStack_100,param_5);
  FUN_100c1fd24(auStack_1d8,&uStack_110);
  func_0x00010002b838(auStack_1f0,param_2);
  if (*(char *)(param_5 + 0xb0) == '\x01') {
    func_0x00010028af84(auStack_210,param_5 + 0x68);
  }
  else {
    auStack_210[0] = 0;
    uStack_1f8 = 0;
  }
  FUN_100c1fd4c(param_1,auStack_1d8,param_3,param_4,auStack_1f0,auStack_210,param_6,auStack_48[0],
                uStack_44);
  func_0x0001001148fc(auStack_210);
  func_0x000100c21f78();
  func_0x000100c20780();
  func_0x000100609698(auStack_100);
  func_0x00010061dc40(auStack_48);
  return;
}



/* Entry: 100c1fd24; end: 100c1fd4b;  */

undefined8 * FUN_100c1fd24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000100601f8c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 100c1fd4c; end: 100c1febf;  */

void FUN_100c1fd4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 auStack_2f0 [200];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [56];
  undefined1 auStack_1d8 [256];
  undefined1 auStack_d8 [184];
  undefined1 auStack_20 [32];
  
  func_0x000100c1fbbc();
  func_0x0001004ba7c4(auStack_20,param_1 + 0x1e0,param_5);
  func_0x00010060215c(auStack_1d8,param_1,auStack_20,param_1 + 0x88,in_stack_00000068,param_4,1,
                      param_8,in_stack_00000060,param_6,in_stack_00000070,in_stack_00000078);
  if (*(char *)(param_1 + 200) == '\x01') {
    uVar1 = *param_7;
    func_0x00010002b838(auStack_228,"Abort requests in Guest Mode");
    func_0x000105394120(auStack_210,10,auStack_228);
    func_0x0001053adbd8();
    func_0x0001053adadc(uVar1,auStack_1d8,auStack_210);
    func_0x000100601c8c(auStack_210);
    func_0x000107c60ca0(auStack_228);
  }
  else {
    FUN_100c1fec0(auStack_2f0);
    FUN_100c1fec8(param_1,auStack_2f0,param_3,auStack_1d8,auStack_d8,param_7);
    func_0x000100c21fa0();
  }
  func_0x00010061dc18(auStack_1d8);
  func_0x000107c60ca0(auStack_20);
  return;
}



/* Entry: 100c1fec0; end: 100c1fec7;  */

undefined8 * FUN_100c1fec0(undefined8 *param_1)

{
  undefined8 *unaff_x22;
  undefined8 uVar1;
  
  uVar1 = *unaff_x22;
  param_1[1] = unaff_x22[1];
  *param_1 = uVar1;
  func_0x000100601f8c(param_1 + 2,unaff_x22 + 2);
  return param_1;
}



/* Entry: 100c1fec8; end: 100c20053;  */

void FUN_100c1fec8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [200];
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [184];
  undefined1 auStack_158 [200];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100603bac(auStack_210,param_5);
  FUN_100c1fec0(auStack_158);
  func_0x000107c60c94(auStack_90,param_4 + 0xa0);
  func_0x000100608b3c(auStack_78,param_3);
  uStack_68 = param_6[1];
  uStack_70 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10_00 != 0);
  }
  FUN_100c20100(&lStack_220,param_1 + 0xd0,param_6,auStack_210,param_5);
  FUN_100c1fec0(auStack_2e8);
  if (lStack_220 == 0) {
    lStack_2f8 = 0;
    lStack_2f0 = 0;
  }
  else {
    lStack_2f8 = lStack_220;
    lStack_2f0 = lStack_218;
    if (lStack_218 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10_01 != 0);
    }
  }
  FUN_100c20540(param_1,auStack_2e8,param_3,param_4,&lStack_2f8);
  func_0x000100c21f98();
  func_0x000100c21fa0();
  FUN_100c21fa8(&lStack_220);
  func_0x000100c21fcc(auStack_210);
  return;
}



/* Entry: 100c20054; end: 100c20063;  */

void FUN_100c20054(void)

{
  return;
}



/* Entry: 100c20064; end: 100c200ff;  */

void FUN_100c20064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100c20054();
  uStack_48 = extraout_x8;
  FUN_100c2012c(auStack_60,1);
  FUN_100c20240(uStack_50,param_2,param_3,param_4,param_5);
  func_0x000100c20510();
  func_0x000100c20528();
  func_0x000100c204fc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053adb70();
  func_0x000100c20528();
  func_0x0001053ad9f8();
  pcStack_68 = FUN_100c20100;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_100c20064(&uStack_71,uStack_50,param_2,param_3,param_4);
  return;
}



/* Entry: 100c20100; end: 100c2012b;  */

void FUN_100c20100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_100c20064(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100c2012c; end: 100c20153;  */

long FUN_100c2012c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100c20154();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100c20154; end: 100c20183;  */

void FUN_100c20154(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xd79435e50d7944) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x130);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 100c20184; end: 100c20197;  */

void FUN_100c20184(void)

{
  return;
}



/* Entry: 100c20198; end: 100c2023f;  */

undefined8 * FUN_100c20198(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 in_x3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *unaff_x19;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [5];
  undefined8 uStack_48;
  
  FUN_100c20184();
  uStack_48 = extraout_x8;
  FUN_100c2028c(auStack_78,in_x3);
  FUN_100c203e8();
  func_0x000100c204d0();
  (*extraout_x8_00)();
  FUN_100c204fc(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  func_0x000107c60e78();
  func_0x000100c204d0();
  puVar1 = auStack_70;
  (*extraout_x8_01)();
  func_0x0001053ad9f8();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110881248;
  puVar1[1] = 0;
  FUN_100c20198(puVar1 + 3);
  return puVar1;
}



/* Entry: 100c20240; end: 100c2027b;  */

undefined8 * FUN_100c20240(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110881248;
  param_1[1] = 0;
  FUN_100c20198(param_1 + 3);
  return param_1;
}



/* Entry: 100c2027c; end: 100c2028b;  */

void FUN_100c2027c(undefined8 param_1,undefined8 param_2)

{
  FUN_100c202b8(param_1,&PTR_FUN_110881288,param_2);
  func_0x000107c60e20(0x1c0);
  FUN_100c20310();
  FUN_100c203d0();
  return;
}


