/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100522f88; end: 100522fc7; +[SIGIcons preloadIconFontOnBackgroundThread] */

void FUN_100522f88(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c60f2c(0,0);
  func_0x000107c61180();
  FUN_10007380c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100522fc8; end: 100522fd3; -[_TtC47LegacyNavigationControllerServiceImplementation47LegacyNavigationControllerServiceImplementation navigationController] */

void FUN_100522fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100522fd4; end: 100523013; -[_TtC50LegacyContainerViewControllerServiceImplementation50LegacyContainerViewControllerServiceImplementation containerViewController] */

void FUN_100522fd4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  FUN_100083b20(&uStack_28);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 100523014; end: 100523023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100523014(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long alStack_90 [2];
  undefined *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48,
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c41570();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ab810;
  func_0x000107c610f8(PTR_PTR_1126ab810);
  func_0x000107c47ae4();
  func_0x000107c61170(puVar2);
  FUN_100083b20(alStack_90);
  lVar6 = alStack_90[0];
  uVar4 = *(undefined8 *)(alStack_90[0] + _DAT_11305c950);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lVar6);
  uVar7 = uVar4;
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  FUN_100083b20(alStack_90);
  lVar6 = alStack_90[0];
  lVar5 = alStack_90[0];
  func_0x000107c4e288();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar5 != 0) {
    FUN_100083b20(&uStack_68);
    FUN_100083b20(&uStack_70);
    func_0x000107c3e660(uStack_70);
    func_0x000107c615e8(uStack_70);
    puVar2 = PTR_PTR_1126ab818;
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c47558();
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uStack_68);
    FUN_100083b20(alStack_90);
    lVar6 = alStack_90[0];
    func_0x000107c4d508(alStack_90[0]);
    func_0x000107c61180();
    func_0x000107c615e8(alStack_90[0]);
    func_0x000107c4f6f4(lVar6);
    func_0x000107c61170(lVar6);
    uVar7 = 0;
    func_0x000100029930(0);
    func_0x000100579dc0();
    puStack_80 = puVar2;
    FUN_1000b0da8(0xd000000000000026,0x800000010f0c9610,FUN_100579e2c,alStack_90);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar3);
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10052325c);
  (*pcVar1)();
}



/* Entry: 100523024; end: 10052325b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100523024(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long alStack_90 [2];
  undefined *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ab810;
  func_0x000107c610f8(PTR_PTR_1126ab810);
  func_0x000107c47ae4();
  func_0x000107c61170(puVar2);
  FUN_100083b20(alStack_90);
  lVar6 = alStack_90[0];
  uVar4 = *(undefined8 *)(alStack_90[0] + _DAT_11305c950);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lVar6);
  uVar7 = uVar4;
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  FUN_100083b20(alStack_90);
  lVar6 = alStack_90[0];
  lVar5 = alStack_90[0];
  func_0x000107c4e288();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar5 != 0) {
    FUN_100083b20(&uStack_68);
    FUN_100083b20(&uStack_70);
    func_0x000107c3e660(uStack_70);
    func_0x000107c615e8(uStack_70);
    puVar2 = PTR_PTR_1126ab818;
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c47558();
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uStack_68);
    FUN_100083b20(alStack_90);
    lVar6 = alStack_90[0];
    func_0x000107c4d508(alStack_90[0]);
    func_0x000107c61180();
    func_0x000107c615e8(alStack_90[0]);
    func_0x000107c4f6f4(lVar6);
    func_0x000107c61170(lVar6);
    uVar7 = 0;
    func_0x000100029930(0);
    func_0x000100579dc0();
    puStack_80 = puVar2;
    FUN_1000b0da8(0xd000000000000026,0x800000010f0c9610,FUN_100579e2c,alStack_90);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar3);
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10052325c);
  (*pcVar1)();
}



/* Entry: 10052325c; end: 100523307; -[SCInAppNotificationLegacyContainerPresentationObserver initWithNotificationCenter:] */

undefined1 * FUN_10052325c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eef28;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100523308; end: 100523413; -[SCNavigationLoggingServiceProvider _navigationLoggingObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100523308(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112752588;
    func_0x000107c61148(lVar5);
  }
  lVar1 = lVar5;
  func_0x000107c40fb0(lVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11275258c;
    func_0x000107c61148(lVar5);
  }
  lVar2 = lVar5;
  func_0x000107c4e2a4(lVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112752594;
    func_0x000107c61148(lVar5);
  }
  lVar3 = lVar5;
  func_0x000107c3fa04(lVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puVar4 = PTR_PTR_1126ce920;
  func_0x000107c610f4(PTR_PTR_1126ce920);
  func_0x000107c462ac();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100523414; end: 10052341b; -[SCPagePageViewReporterServices pagePageViewReporter] */

undefined8 FUN_100523414(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10052341c; end: 10052350b; -[SCNavigationLoggingObserver initWithCurrentPageTracker:pagePageViewReporter:circumstanceEngine:] */

undefined1 *
FUN_10052341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f39c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0xffffffffffffffff;
    puVar3 = PTR_PTR_1126ce928;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10052350c; end: 100523583; -[SCNavigationSignPostLogger init] */

undefined1 * FUN_10052350c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f39d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = &UNK_10f39e4e6;
    func_0x000107c611d0(&UNK_10f39e4e6,&UNK_10f39e4fe);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c611e4();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100523584; end: 10052358f;  */

void FUN_100523584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0c40,PTR_s__loadIconFont_112570f78);
  return;
}



/* Entry: 100523590; end: 1005235fb; +[SIGIcons _loadIconFont] */

void FUN_100523590(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_100523604;
  puStack_20 = &UNK_110848088;
  if (lRam00000001137fbe68 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1137fbe68,&puStack_38);
  }
  return;
}



/* Entry: 1005235fc; end: 100523603; -[SCPageLoadMetricServices pageLoadMetricManager] */

undefined8 FUN_1005235fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100523604; end: 10052371b;  */

void FUN_100523604(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  
  puVar1 = &UNK_10f7bcd4e;
  FUN_1000ba800(&UNK_10f7bcd4e);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c3b9a4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4adac();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c43474();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c60a7c();
    if (((ulong)puVar5 & 1) == 0) {
      uVar6 = uStack_48;
      func_0x000107c42210();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c49d0c();
      if ((int)uVar7 != 0) {
        func_0x000107c3fcb0(uStack_48);
      }
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uStack_48);
    }
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 10052371c; end: 100523723; -[_TtC50LegacyContainerViewControllerServiceImplementation39NavigationBarStyleServiceImplementation barStyle] */

undefined8 FUN_10052371c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100523724; end: 100523997; -[SIGLegacyContainerViewController initWithLoggingObserver:presentationObserver:pageLoadMetricManager:appThemeServices:barStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100523724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if (param_6 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_6;
    func_0x000107c41090(param_6);
    func_0x000107c61180();
    lVar9 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar1 = lVar9;
    func_0x000107c4d4bc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
    lVar10 = lVar2;
    func_0x000107c4c280(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c3f538(PTR_PTR_1126b9aa0);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126c6e88;
  func_0x000107c610f4(PTR_PTR_1126c6e88);
  func_0x000107c46464();
  puVar5 = PTR_PTR_1126c6e90;
  func_0x000107c610f4(PTR_PTR_1126c6e90);
  func_0x000107c46988();
  puStack_68 = PTR_PTR_1126eef30;
  puVar6 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar6,PTR_s_initWithLoggingObserver_contentV_1125e7810,param_3,puVar5,param_5
                     );
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = PTR_PTR_1126b0ea0;
    func_0x000107c610fc();
    lVar9 = (long)_DAT_11273c8f8;
    uVar8 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined **)((long)puVar6 + lVar9) = puVar7;
    func_0x000107c61170(uVar8);
    func_0x000107c41c10(*(undefined8 *)((long)puVar6 + lVar9));
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)((long)puVar6 + (long)_DAT_11273c8fc);
    *(undefined **)((long)puVar6 + (long)_DAT_11273c8fc) = puVar7;
    func_0x000107c61170(uVar8);
    lVar9 = (long)_DAT_11273c900;
    func_0x000107c61174(param_4);
    uVar8 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined8 *)((long)puVar6 + lVar9) = param_4;
    func_0x000107c61170(uVar8);
    func_0x000107c53dec(puVar6);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 100523998; end: 10052399f; -[SCPlusCustomAppThemeServices customAppThemeProvider] */

undefined8 FUN_100523998(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005239a0; end: 1005239e7;  */

void FUN_1005239a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b3f0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005239e8; end: 100523b77; -[SCPlusServicesEntryPoint _customAppThemeProviderWithFeatureGating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005239e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126d19b0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11275b410;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + _DAT_11275b414;
  func_0x000107c61148();
  lVar4 = param_1 + _DAT_11275b3f4;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_11275b3fc;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_11275b418;
  func_0x000107c61148(lVar8);
  lVar9 = lVar8;
  func_0x000107c40430();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11275b3ec;
  func_0x000107c61148();
  lVar10 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c47f84(puVar1,param_2,param_3,lVar2,lVar3,lVar5,lVar7,lVar9,lVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100523b78; end: 100523fa7; -[SCPlusCustomAppThemeProviderImpl initWithPlusFeatureGating:appStorageServices:composerServices:featureSettingsService:performerProvider:contentDelivery:circumstanceEngine:] */

undefined8 *
FUN_100523b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_80 = PTR_PTR_1126f5f08;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar5 = puVar1[7];
    puVar1[7] = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    uVar2 = puVar1[6];
    uVar3 = puVar1[7];
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_3);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[8];
    puVar1[8] = puVar4;
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    uVar6 = puVar1[8];
    func_0x000107c61174(param_8);
    func_0x000107c61174(uVar6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[9];
    puVar1[9] = puVar4;
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[10];
    puVar1[10] = puVar4;
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    uVar7 = puVar1[0xb];
    func_0x000107c61174(puVar1);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(uVar7);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_8);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_8);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100523fa8; end: 1005240a3; +[SIGIcons _iconFontFilePath] */

void FUN_100523fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x100524030;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fbeb8 != -1) {
    FUN_10002a2fc(0x1137fbeb8,&puStack_48);
  }
  uVar1 = uRam00000001137fbeb0;
  func_0x000107c61174(uRam00000001137fbeb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005240a4; end: 1005240ab; -[SCPlusCustomAppThemeProviderImpl navigationBar] */

void FUN_1005240a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_target_112678178);
  return;
}



/* Entry: 1005240ac; end: 1005241ef;  */

void FUN_1005240ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100529abc;
  puStack_68 = &UNK_1108a4ad0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar6);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = uVar2;
  uStack_60 = uVar6;
  func_0x000107c5c51c(uVar2,param_2,&puStack_80);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puStack_a8 = puVar4;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10052a6b8;
  puStack_90 = &UNK_11096b698;
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_a8);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126d1a78;
  func_0x000107c610f4(PTR_PTR_1126d1a78);
  func_0x000107c47b60();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1005241f0; end: 1005244c3;  */

void FUN_1005241f0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_100528ed8;
  puStack_b0 = &UNK_11096b548;
  lVar13 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar13);
  uStack_a0 = *(undefined8 *)(param_1 + 0x28);
  ppuVar1 = &puStack_c8;
  lStack_a8 = lVar13;
  func_0x000107c61184();
  puVar11 = PTR_PTR_1126ae6b8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar14 = uVar2;
  func_0x000107c4108c();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c3f588();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5d068();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar9;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,3);
  func_0x000107c61180();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_100528e10;
  puStack_d8 = &UNK_11096b578;
  ppuStack_d0 = ppuVar1;
  func_0x000107c3fe00(puVar11,param_2,puVar10,&puStack_f0);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  puVar10 = PTR_PTR_1126ae720;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_106c4faf0;
  puStack_108 = &UNK_11096b5a8;
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  ppuStack_f8 = ppuVar1;
  func_0x000107c61174(uVar14);
  uStack_100 = uVar14;
  func_0x000107c3e4fc(puVar10,param_2,&puStack_120);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126d1a78;
  func_0x000107c610f4();
  func_0x000107c47b60();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uStack_100);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(ppuVar1);
  lVar13 = lStack_a8;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    puVar11 = (undefined *)(lVar13 + 0x28);
    func_0x000107c61148(puVar11);
    puVar12 = puVar11;
    func_0x000107c3b248();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1005244c4; end: 10052450b;  */

void FUN_1005244c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b248();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10052450c; end: 100524697; -[SCPlusServicesEntryPoint _createFeatureGating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052450c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126d1980;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11275b3ec;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11275b3f0;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_11275b3f4;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_11275b3f8;
  func_0x000107c61148(lVar8);
  lVar9 = lVar8;
  func_0x000107c5bebc();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11275b3fc;
  func_0x000107c61148(param_1);
  lVar10 = param_1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c48b40(puVar1,param_2,param_3,lVar3,lVar5,lVar7,lVar9,lVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100524698; end: 1005246a7; -[MemoriesMonetizationServices storageQuotaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100524698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e8c0));
  return;
}



/* Entry: 1005246a8; end: 100525a8b; -[SCPlusFeatureGatingImpl initWithSubscriptionInfoProvider:circumstanceEngine:appStartExperimentReader:featureSettingsService:storageQuotaManager:performerProvider:] */

undefined8 *
FUN_1005246a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_490 [8];
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  code *pcStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_80 = PTR_PTR_1126f5ed8;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61144(auStack_90,puVar2);
    func_0x000107c61174(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x100812988;
    puStack_a0 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_106c4b7fc;
    puStack_c8 = &UNK_110841f20;
    uStack_98 = param_6;
    func_0x000107c61174(param_6);
    uStack_c0 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_106c4b838;
    puStack_f0 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    puStack_120 = &UNK_106c4b878;
    puStack_118 = &UNK_110841f20;
    uStack_e8 = param_6;
    func_0x000107c61174(param_6);
    uStack_110 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[8];
    puVar2[8] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    puStack_148 = &UNK_106c4b8b4;
    puStack_140 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_180 = puVar1;
    uStack_178 = 0xc2000000;
    puStack_170 = &UNK_106c4b8f4;
    puStack_168 = &UNK_110841f20;
    uStack_138 = param_6;
    func_0x000107c61174(param_6);
    uStack_160 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[9];
    puVar2[9] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    puStack_198 = &UNK_106c4b930;
    puStack_190 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_1d0 = puVar1;
    uStack_1c8 = 0xc2000000;
    puStack_1c0 = &UNK_106c4b970;
    puStack_1b8 = &UNK_110841f20;
    uStack_188 = param_6;
    func_0x000107c61174(param_6);
    uStack_1b0 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[10];
    puVar2[10] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_1f8 = puVar1;
    uStack_1f0 = 0xc2000000;
    puStack_1e8 = &UNK_106c4b9ac;
    puStack_1e0 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    puStack_210 = &UNK_106c4b9ec;
    puStack_208 = &UNK_110841f20;
    uStack_1d8 = param_6;
    func_0x000107c61174(param_6);
    uStack_200 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0xb];
    puVar2[0xb] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_248 = puVar1;
    uStack_240 = 0xc2000000;
    puStack_238 = &UNK_106c4ba28;
    puStack_230 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_270 = puVar1;
    uStack_268 = 0xc2000000;
    puStack_260 = &UNK_106c4ba68;
    puStack_258 = &UNK_110841f20;
    uStack_228 = param_6;
    func_0x000107c61174(param_6);
    uStack_250 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_298 = puVar1;
    uStack_290 = 0xc2000000;
    puStack_288 = &UNK_106c4baa4;
    puStack_280 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_2c0 = puVar1;
    uStack_2b8 = 0xc2000000;
    puStack_2b0 = &UNK_106c4bae4;
    puStack_2a8 = &UNK_110841f20;
    uStack_278 = param_6;
    func_0x000107c61174(param_6);
    uStack_2a0 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0xd];
    puVar2[0xd] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_2e8 = puVar1;
    uStack_2e0 = 0xc2000000;
    puStack_2d8 = &UNK_106c4bb20;
    puStack_2d0 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_310 = puVar1;
    uStack_308 = 0xc2000000;
    puStack_300 = &UNK_106c4bb60;
    puStack_2f8 = &UNK_110841f20;
    uStack_2c8 = param_6;
    func_0x000107c61174(param_6);
    uStack_2f0 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_338 = puVar1;
    uStack_330 = 0xc2000000;
    puStack_328 = &UNK_106c4bb9c;
    puStack_320 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_360 = puVar1;
    uStack_358 = 0xc2000000;
    puStack_350 = &UNK_106c4bbdc;
    puStack_348 = &UNK_110841f20;
    uStack_318 = param_6;
    func_0x000107c61174(param_6);
    uStack_340 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_388 = puVar1;
    uStack_380 = 0xc2000000;
    puStack_378 = &UNK_106c4bc18;
    puStack_370 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_3b0 = puVar1;
    uStack_3a8 = 0xc2000000;
    puStack_3a0 = &UNK_106c4bc58;
    puStack_398 = &UNK_110841f20;
    uStack_368 = param_6;
    func_0x000107c61174(param_6);
    uStack_390 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d1a18;
    func_0x000107c610f4();
    puStack_3d8 = puVar1;
    uStack_3d0 = 0xc2000000;
    puStack_3c8 = &UNK_106c4bc94;
    puStack_3c0 = &UNK_110848868;
    func_0x000107c61174(param_6);
    puStack_400 = puVar1;
    uStack_3f8 = 0xc2000000;
    puStack_3f0 = &UNK_106c4bcd4;
    puStack_3e8 = &UNK_110841f20;
    uStack_3b8 = param_6;
    func_0x000107c61174(param_6);
    uStack_3e0 = param_6;
    func_0x000107c46b58();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126bad10;
    func_0x000107c61160();
    uStack_430 = 0;
    uStack_420 = 0x3032000000;
    pcStack_418 = FUN_100525c90;
    puStack_410 = &UNK_106c4bd10;
    uStack_408 = 0;
    puVar5 = puVar2;
    puStack_428 = &uStack_430;
    func_0x000107c61158();
    puStack_460 = puVar1;
    uStack_458 = 0xc2000000;
    puStack_450 = &UNK_106c4bd18;
    puStack_448 = &UNK_11096b268;
    puStack_440 = puVar4;
    puStack_438 = &uStack_430;
    func_0x000107c3b7bc();
    func_0x000107c61180();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x13];
    puVar2[0x13] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x14];
    puVar2[0x14] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x15];
    puVar2[0x15] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x16];
    puVar2[0x16] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x17];
    puVar2[0x17] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x18];
    puVar2[0x18] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x19];
    puVar2[0x19] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x20];
    puVar2[0x20] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7bc();
    func_0x000107c61180();
    uVar3 = puVar2[0x21];
    puVar2[0x21] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x22];
    puVar2[0x22] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x23];
    puVar2[0x23] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x24];
    puVar2[0x24] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x25];
    puVar2[0x25] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x26];
    puVar2[0x26] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x27];
    puVar2[0x27] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    puStack_488 = puVar1;
    uStack_480 = 0xc2000000;
    puStack_478 = &UNK_106c4bf78;
    puStack_470 = &UNK_11096b2d8;
    func_0x000107c61174(param_3);
    uStack_468 = param_3;
    func_0x000107c3b7bc();
    func_0x000107c61180();
    uVar3 = puVar2[0x28];
    puVar2[0x28] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x29];
    puVar2[0x29] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x2c];
    puVar2[0x2c] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x2d];
    puVar2[0x2d] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x2e];
    puVar2[0x2e] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x2f];
    puVar2[0x2f] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c6111c(auStack_490,auStack_90);
    func_0x000107c3b7bc();
    func_0x000107c61180();
    uVar3 = puVar2[0x30];
    puVar2[0x30] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x31];
    puVar2[0x31] = puVar5;
    func_0x000107c61170(uVar3);
    FUN_100029b9c(2,0x10,0,0);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3bcc0();
    func_0x000107c61180();
    uVar3 = puVar2[0x32];
    puVar2[0x32] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x33];
    puVar2[0x33] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x34];
    puVar2[0x34] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x35];
    puVar2[0x35] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x36];
    puVar2[0x36] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x37];
    puVar2[0x37] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x38];
    puVar2[0x38] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x39];
    puVar2[0x39] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x3a];
    puVar2[0x3a] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x3b];
    puVar2[0x3b] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x3c];
    puVar2[0x3c] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x3d];
    puVar2[0x3d] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x3e];
    puVar2[0x3e] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x3f];
    puVar2[0x3f] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x40];
    puVar2[0x40] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x41];
    puVar2[0x41] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x42];
    puVar2[0x42] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x43];
    puVar2[0x43] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c61174(param_3);
    func_0x000107c3b7bc();
    func_0x000107c61180();
    uVar3 = puVar2[0x44];
    puVar2[0x44] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7c0();
    func_0x000107c61180();
    uVar3 = puVar2[0x45];
    puVar2[0x45] = puVar5;
    func_0x000107c61170(uVar3);
    uVar6 = puVar2[5];
    func_0x000107c61174(uVar6);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c61174(uVar6);
    func_0x000107c3b7bc();
    func_0x000107c61180();
    uVar3 = puVar2[0x46];
    puVar2[0x46] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3bcbc();
    func_0x000107c61180();
    uVar3 = puVar2[0x47];
    puVar2[0x47] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3b7b4();
    func_0x000107c61180();
    uVar3 = puVar2[0x48];
    puVar2[0x48] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3bcbc();
    func_0x000107c61180();
    uVar3 = puVar2[0x49];
    puVar2[0x49] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = puVar2;
    func_0x000107c61158();
    func_0x000107c3bcbc();
    func_0x000107c61180();
    uVar3 = puVar2[0x4a];
    puVar2[0x4a] = puVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_490);
    func_0x000107c61170(uStack_468);
    func_0x000107c60bcc(&uStack_430,8);
    func_0x000107c61170(uStack_408);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_3e0);
    func_0x000107c61170(uStack_3b8);
    func_0x000107c61170(uStack_390);
    func_0x000107c61170(uStack_368);
    func_0x000107c61170(uStack_340);
    func_0x000107c61170(uStack_318);
    func_0x000107c61170(uStack_2f0);
    func_0x000107c61170(uStack_2c8);
    func_0x000107c61170(uStack_2a0);
    func_0x000107c61170(uStack_278);
    func_0x000107c61170(uStack_250);
    func_0x000107c61170(uStack_228);
    func_0x000107c61170(uStack_200);
    func_0x000107c61170(uStack_1d8);
    func_0x000107c61170(uStack_1b0);
    func_0x000107c61170(uStack_188);
    func_0x000107c61170(uStack_160);
    func_0x000107c61170(uStack_138);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(uStack_e8);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100525a8c; end: 100525b3b; -[SCPlusFeatureSettingEnabledProvider initWithGetter:setter:] */

undefined1 *
FUN_100525a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f5e80;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100525b3c; end: 100525b77; -[sc_lock_box init] */

void FUN_100525b3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270e738;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 100525b78; end: 100525c8f; +[SCPlusFeatureGatingImpl _gatingStateValueProviderForConfigValueProvider:subscriptionInfoProvider:circumstanceEngine:featureSettingEnabledProvider:] */

void FUN_100525b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100526414;
  puStack_68 = &UNK_11096b088;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_3;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_80);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100525c90; end: 100525c9f;  */

void FUN_100525c90(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100525ca0; end: 100525d63; +[SCPlusFeatureGatingImpl _gatingStateValueProviderForSubscriptionInfoProvider:featureSettingEnabledProvider:] */

void FUN_100525ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100526160;
  puStack_48 = &UNK_11096af58;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100525d64; end: 100525e7b; +[SCPlusFeatureGatingImpl _gatingStateValueProviderForConfigKey:defaultValue:subscriptionInfoProvider:circumstanceEngine:featureSettingEnabledProvider:] */

void FUN_100525d64(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = param_3;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c3e17c(puVar1,param_2,&uStack_60,1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar2 = param_1;
  puVar3 = puVar1;
  uVar4 = param_5;
  uVar5 = param_6;
  uVar6 = param_7;
  func_0x000107c3b7b8();
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    pcStack_68 = FUN_100525e7c;
    puStack_a0 = param_1;
    uStack_98 = param_3;
    uStack_90 = param_6;
    uStack_88 = param_7;
    puStack_80 = puVar2;
    uStack_78 = param_5;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x000107c61174(puVar3);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_106c4cd04;
    puStack_b8 = &UNK_11096b3c8;
    puStack_b0 = puVar3;
    uStack_a8 = param_4;
    func_0x000107c61174(puVar3);
    func_0x000107c3b7bc(puVar1,param_2,&puStack_d0,uVar4,uVar5,uVar6);
    func_0x000107c61180();
    func_0x000107c61170(puStack_b0);
    func_0x000107c61170(puVar3);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100525e7c; end: 100525f3f; +[SCPlusFeatureGatingImpl _gatingStateValueProviderForConfigKeys:defaultValue:subscriptionInfoProvider:circumstanceEngine:featureSettingEnabledProvider:] */

void FUN_100525e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_106c4cd04;
  puStack_58 = &UNK_11096b3c8;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c3b7bc(param_1,param_2,&puStack_70,param_5,param_6,param_7);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100525f40; end: 100525f47; +[SCPlusFeatureGatingImpl _lensPlusGatingStateProviderForSubscriptionInfoProvider:enabledProvider:] */

void FUN_100525f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__lensPlusGatingStateProviderForS_1125707a8,param_3,param_4,0);
  return;
}



/* Entry: 100525f48; end: 100526033; +[SCPlusFeatureGatingImpl _lensPlusGatingStateProviderForSubscriptionInfoProvider:enabledProvider:tierBypassProvider:] */

void FUN_100525f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_106c4cfec;
  puStack_50 = &UNK_11096b4e8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100526034; end: 100526077;  */

/* WARNING: Possible PIC construction at 0x00010052605c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100526060) */

void FUN_100526034(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 100526078; end: 100526157; +[SCPlusFeatureGatingImpl _lensPlusGatingStateProviderForConfigKey:defaultValue:subscriptionInfoProvider:circumstanceEngine:tierBypassProvider:] */

void FUN_100526078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_106c4cfd8;
  puStack_60 = &UNK_11096b488;
  uStack_58 = param_6;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c3bcc4(param_1,param_2,param_5,&puStack_78,param_7);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100526158; end: 10052615f; -[SCPlusFeatureGatingImpl customAppTheme] */

void FUN_100526158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x100),PTR_s_target_112678178);
  return;
}



/* Entry: 100526160; end: 100526273;  */

void FUN_100526160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126d1978;
  func_0x000107c610f4(PTR_PTR_1126d1978);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1005273a0;
  puStack_58 = &UNK_11096b398;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar4;
  func_0x000107c61174(uVar5);
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_100526ed8;
  puStack_80 = &UNK_11089afa0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar5;
  func_0x000107c61174(uVar4);
  uStack_78 = uVar4;
  func_0x000107c3e4fc(puVar3,param_2,&puStack_98);
  func_0x000107c61180();
  func_0x000107c46310(puVar2,param_2,&puStack_70,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100526274; end: 1005263d3; -[SCPlusValueProviderImpl initWithCurrentValueProvider:currentValueChangedObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100526274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f60c0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x000107c61184();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ba30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ba30) = uVar5;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ba34);
    *(undefined **)((long)puVar1 + (long)_DAT_11275ba34) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c41654();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ba38);
    *(undefined **)((long)puVar1 + (long)_DAT_11275ba38) = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005263d4; end: 100526403; -[SCPlusValueProviderImpl updates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005263d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ba38);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100526404; end: 10052640b; -[SCPlusFeatureGatingImpl captureColor] */

void FUN_100526404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xd0),PTR_s_target_112678178);
  return;
}



/* Entry: 10052640c; end: 100526413; -[SCPlusFeatureGatingImpl trueAppThemes] */

void FUN_10052640c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x108),PTR_s_target_112678178);
  return;
}



/* Entry: 100526414; end: 100526557;  */

void FUN_100526414(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126d1978;
  func_0x000107c610f4(PTR_PTR_1126d1978);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100528ce4;
  puStack_68 = &UNK_11096b3f8;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar4;
  func_0x000107c61174(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar5;
  func_0x000107c61174(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar4;
  func_0x000107c61174(uVar5);
  puVar3 = PTR_PTR_1126ae720;
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x100528c9c;
  puStack_90 = &UNK_11089afa0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar5;
  func_0x000107c61174(uVar4);
  uStack_88 = uVar4;
  func_0x000107c3e4fc(puVar3,param_2,&puStack_a8);
  func_0x000107c61180();
  func_0x000107c46310(puVar2,param_2,&puStack_80,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100526558; end: 1005265c3; +[SCObservable combineLatest:combiner:] */

void FUN_100526558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e58;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47b80();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005265c4; end: 100526683; -[SCLatestCombinedMultiObservable initWithObservables:combiner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1005265c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e438;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112796644;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796648);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796648) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100526684; end: 1005268ff; -[SCPlusThemeValueProvider initWithObservable:initialValue:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100526684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_80 = PTR_PTR_1126f5f10;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b6ec);
    *(undefined **)((long)puVar1 + (long)_DAT_11275b6ec) = puVar2;
    func_0x000107c61170(uVar5);
    lVar6 = (long)_DAT_11275b6f0;
    func_0x000107c61174(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    func_0x000107c61170(uVar5);
    func_0x000107c61144(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_100529674;
    puStack_a8 = &UNK_11096b8a8;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c61174(param_4);
    uStack_a0 = param_4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b6f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11275b6f4) = puVar3;
    func_0x000107c61170(uVar5);
    uVar5 = param_3;
    func_0x000107c4da88(param_3);
    func_0x000107c61180();
    puStack_e8 = puVar2;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_100529454;
    puStack_d0 = &UNK_1108485e8;
    func_0x000107c6111c(auStack_c8,auStack_90);
    func_0x000107c6111c(auStack_f0,auStack_90);
    uVar4 = uVar5;
    func_0x000107c5c324(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100526900; end: 10052696b; -[SCLatestCombinedMultiObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100526900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e48;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47b84();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10052696c; end: 10052699b; -[SCLatestCombinedMultiObserver .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052696c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112796820);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10052699c; end: 100526d4b; -[SCLatestCombinedMultiObserver initWithObservables:combiner:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10052699c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_108 = PTR_PTR_11270e5d0;
  puVar6 = &uStack_110;
  uStack_110 = param_1;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  if (puVar6 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11279680c;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)((long)puVar6 + lVar8);
    *(long *)((long)puVar6 + lVar8) = param_3;
    func_0x000107c61170(uVar1);
    uVar1 = param_4;
    func_0x000107c40794();
    uVar7 = *(undefined8 *)((long)puVar6 + (long)_DAT_112796810);
    *(undefined8 *)((long)puVar6 + (long)_DAT_112796810) = uVar1;
    func_0x000107c61170(uVar7);
    lVar10 = (long)_DAT_112796814;
    func_0x000107c61174(param_5);
    uVar1 = *(undefined8 *)((long)puVar6 + lVar10);
    *(undefined8 *)((long)puVar6 + lVar10) = param_5;
    func_0x000107c61170(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5c210();
    func_0x000107c61180();
    uVar1 = *(undefined8 *)((long)puVar6 + (long)_DAT_112796818);
    *(undefined **)((long)puVar6 + (long)_DAT_112796818) = puVar2;
    func_0x000107c61170(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar1 = *(undefined8 *)((long)puVar6 + (long)_DAT_11279681c);
    *(undefined **)((long)puVar6 + (long)_DAT_11279681c) = puVar2;
    func_0x000107c61170(uVar1);
    func_0x000107c61144(auStack_118,puVar6);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    func_0x000107c61174(param_3);
    lVar8 = param_3;
    func_0x000107c4080c();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar8 != 0) {
      lVar11 = *plStack_150;
      do {
        lVar9 = 0;
        do {
          if (*plStack_150 != lVar11) {
            func_0x000107c61128(param_3);
          }
          uVar1 = *(undefined8 *)(lStack_158 + lVar9 * 8);
          puStack_190 = puVar2;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_100528524;
          puStack_178 = &UNK_110d98c28;
          func_0x000107c6111c(auStack_168,auStack_118);
          uStack_170 = uVar1;
          func_0x000107c6111c(auStack_198,auStack_118);
          func_0x000107c5c324();
          func_0x000107c61180();
          func_0x000107c3e924();
          func_0x000107c61170(uVar1);
          func_0x000107c61120(auStack_198);
          func_0x000107c61120(auStack_168);
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
        lVar8 = param_3;
        func_0x000107c4080c();
      } while (lVar8 != 0);
    }
    func_0x000107c61170(param_3);
    lVar8 = param_3;
    func_0x000107c40808();
    if (lVar8 == 0) {
      func_0x000107c3fedc(*(undefined8 *)((long)puVar6 + lVar10));
    }
    func_0x000107c61120(auStack_118);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  lVar8 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_118);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar6);
    func_0x000107c60bd8();
    puVar6 = (undefined8 *)PTR_PTR_1126ae6b8;
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *(undefined8 *)(lVar8 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c4cd50();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x000107c61180();
    puVar3 = puVar6;
    func_0x000107c5bc40();
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(lVar8 + 0x30);
    func_0x000107c61174(uVar1);
    puVar4 = puVar3;
    func_0x000107c4c280();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      func_0x000107c60e78();
      puVar6 = (undefined8 *)puVar6[4];
      func_0x000107c5c734(puVar6);
      func_0x000107c61180();
      puVar5 = puVar6;
      func_0x000107c5d6fc();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  return puVar6;
}



/* Entry: 100526d4c; end: 100526ed7;  */

void FUN_100526d4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = PTR_PTR_1126ae6b8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar6;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,2);
  func_0x000107c61180();
  func_0x000107c4cd50(puVar5,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000107c5bc40(puVar5,param_2,puVar1);
  func_0x000107c61180();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1005272e4;
  puStack_68 = &UNK_1109319a8;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar6);
  puVar3 = puVar2;
  uStack_60 = uVar6;
  func_0x000107c4c280(puVar2,param_2,&puStack_80);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    puVar5 = *(undefined **)(puVar5 + 0x20);
    func_0x000107c5c734(puVar5);
    func_0x000107c61180();
    puVar4 = puVar5;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100526ed8; end: 100526f5f;  */

void FUN_100526ed8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100526f60; end: 1005270a3; -[SCPlusServicesEntryPoint _createSubscriptionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100526f60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_11275b3e4;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4eab4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_11275b3e8;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar3 = lVar1;
  FUN_1005270ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126d1978;
  func_0x000107c610f4(PTR_PTR_1126d1978);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1005274a4;
  puStack_48 = &UNK_11096ae50;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100528950;
  puStack_70 = &UNK_11089afa0;
  puVar5 = PTR_PTR_1126ae720;
  lStack_68 = lVar2;
  lStack_40 = lVar2;
  lStack_38 = lVar3;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_88);
  func_0x000107c61180();
  func_0x000107c46310(puVar4,param_2,&puStack_60,puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1005270a4; end: 1005270ab; -[SCUserInfoServices plusSubscriptionInfoProvider] */

undefined8 FUN_1005270a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1005270ac; end: 1005271b7;  */

void FUN_1005270ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_d0;
  func_0x000107c61174();
  puVar1 = PTR_PTR_1126bad10;
  func_0x000107c61160();
  puStack_a0 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_100527204;
  puStack_40 = &UNK_106c43978;
  uStack_38 = 0;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_100527204;
  puStack_70 = &UNK_106c43978;
  uStack_68 = 0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_100527994;
  puStack_b8 = &UNK_11096aee0;
  puStack_b0 = puVar1;
  uStack_a8 = param_1;
  puStack_88 = puStack_98;
  puStack_58 = puStack_a0;
  func_0x000107c61174(param_1);
  func_0x000107c61184(&puStack_d0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c60bcc(&uStack_90,8);
  func_0x000107c61170(uStack_68);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1005271b8; end: 100527203;  */

/* WARNING: Possible PIC construction at 0x0001005271e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005271ec) */

void FUN_1005271b8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 100527204; end: 100527213;  */

void FUN_100527204(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100527214; end: 10052725f; +[SCObservable merge:] */

void FUN_100527214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f08;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47b7c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100527260; end: 10052743f; -[SCMergedObservable initWithObservables:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100527260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e4b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127966c8;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100527440; end: 1005274a3; -[SCPlusValueProviderImpl currentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100527440(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11275ba30);
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1005274a4; end: 100527567;  */

void FUN_1005274a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    unaff_x22 = *(long *)(param_1 + 0x20);
    func_0x000107c5c734(unaff_x22);
    func_0x000107c61180();
    lVar2 = unaff_x22;
    func_0x000107c41050();
    func_0x000107c61180();
  }
  (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(unaff_x22);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100527568; end: 1005275a7;  */

void FUN_100527568(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c134();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005275a8; end: 1005276b3; -[SCUserInfoServicesEntryPoint _plusSubscriptionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005275a8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7a0;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7a0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  func_0x000107c407c8(uVar4,param_2,0x10,ppuVar1,puVar2,0,&PTR___NSConcreteGlobalBlock_1108857c8);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  func_0x000107c610f4(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148(param_1);
  lVar3 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c46bcc(puVar2,param_2,lVar3,0x10,uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005276b4; end: 100527767;  */

void FUN_1005276b4(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b89c0;
  func_0x000107c610f4(PTR_PTR_1126b89c0);
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (((ushort *)((long)param_1 - (long)*param_1))[2] == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c45ae4();
  }
  func_0x000107c49470(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100527768; end: 1005277df; -[SCUserInfoDataProperty initWithValue:] */

undefined1 * FUN_100527768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8348;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005277e0; end: 10052784b; +[SCUserInfoProperty dataPropertyWithDataProperty:] */

void FUN_1005277e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b8998;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10052784c; end: 100527853;  */

void FUN_10052784c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1053f5648;
  puStack_30 = &UNK_1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_2);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100527854; end: 10052793f;  */

void FUN_100527854(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1053f5648;
  puStack_30 = &UNK_1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_1);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100527940; end: 10052797f;  */

void FUN_100527940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5dc0c();
  func_0x000107c61180();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100527980; end: 100527987; -[SCUserInfoDataProperty value] */

undefined8 FUN_100527980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100527988; end: 100527993; -[SCUserInfoDataProperty .cxx_destruct] */

void FUN_100527988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100527994; end: 100527fb3;  */

void FUN_100527994(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61178();
  func_0x000107c3cb4c();
  func_0x000107c611ec();
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28);
  func_0x000107c61174(lVar8);
  func_0x000107c61174(param_3);
  if (lVar8 == param_3) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar8);
LAB_100527a48:
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
    if (lVar8 != 0) goto LAB_100527f5c;
  }
  else if (param_3 == 0) {
    func_0x000107c61170(lVar8);
  }
  else {
    lVar2 = lVar8;
    func_0x000107c49cec();
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar8);
    if ((int)lVar2 != 0) goto LAB_100527a48;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  func_0x000107c61174(param_3);
  uVar3 = *(undefined8 *)(lVar8 + 0x28);
  *(long *)(lVar8 + 0x28) = param_3;
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar6 = PTR_PTR_1126d19c0;
    func_0x000107c610f4();
    dVar11 = 0.0;
    func_0x000107c46f94(0,0,0);
  }
  else {
    puVar4 = PTR_PTR_1126d19c8;
    func_0x000107c610f4();
    func_0x000107c4636c();
    if (puVar4 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126d19c0;
      func_0x000107c610f4();
      dVar11 = 0.0;
      func_0x000107c46f94(0,0,0);
    }
    else {
      puVar6 = puVar4;
      func_0x000107c3d1bc();
      func_0x000107c3d1bc();
      func_0x000107c3dc24();
      func_0x000107c5bd00();
      if ((int)puVar6 == 0) {
        dVar11 = 0.0;
        dVar12 = 0.0;
      }
      else {
        puVar6 = puVar4;
        func_0x000107c4e0c0(puVar4);
        puVar5 = puVar4;
        func_0x000107c42bd0(puVar4);
        dVar11 = (double)((ulong)puVar6 / 1000);
        dVar12 = (double)((ulong)puVar5 / 1000);
      }
      func_0x000107c42db8();
      func_0x000107c3d1bc();
      puVar6 = PTR_PTR_1126d19c0;
      func_0x000107c610f4();
      func_0x000107c5bd00(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c4d8a0(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      func_0x000107c4f598(puVar4);
      func_0x000107c3dc24();
      func_0x000107c46f94(dVar11,dVar12,param_1);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_3);
  puVar9 = *(undefined **)(param_2 + 0x28);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar9);
  puVar4 = puVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5ce3c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined *)0x0) {
LAB_100527dbc:
    puVar4 = PTR_PTR_1126d19d0;
    func_0x000107c610f4(PTR_PTR_1126d19d0);
    func_0x000107c5bd00(puVar6);
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    func_0x000107c489d0(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    puVar5 = puVar9;
    func_0x000107c5c734(puVar9);
    func_0x000107c61180();
    func_0x000107c5a004();
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
  }
  else {
    puVar4 = puVar5;
    func_0x000107c5bd00();
    puVar7 = puVar6;
    func_0x000107c5bd00();
    if (puVar4 != puVar7) goto LAB_100527dbc;
  }
  puVar4 = PTR_PTR_1126d19c0;
  func_0x000107c610f4();
  func_0x000107c4a564();
  func_0x000107c4a568();
  func_0x000107c4a56c(puVar6);
  func_0x000107c44878(puVar6);
  func_0x000107c5c36c(puVar6);
  dVar12 = dVar11;
  func_0x000107c5c35c(puVar6);
  dVar10 = dVar12;
  func_0x000107c5bd00(puVar6);
  func_0x000107c5bd40(puVar5);
  func_0x000107c4f598(puVar6);
  func_0x000107c3dc24();
  func_0x000107c42db8();
  func_0x000107c5c370();
  func_0x000107c49fac();
  func_0x000107c46f94(dVar11,dVar12,dVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar6);
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
LAB_100527f5c:
  func_0x000107c61174(lVar8);
  func_0x000107c611f0(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 100527fb4; end: 100527fbb; -[sc_lock_box _unsafe_private_reference] */

long FUN_100527fb4(long param_1)

{
  return param_1 + 8;
}



/* Entry: 100527fbc; end: 100528213; +[PlusSubscriptionInfo descriptor] */

void FUN_100527fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b277c0,
                        &PTR____CFConstantStringClassReference_110e7e298,&PTR_DAT_11317a948,
                        &PTR_DAT_11317a960,7,0x30,0x1c);
    puRam00000001136c6fd8 = puVar1;
  }
  return;
}



/* Entry: 100528214; end: 10052829f;  */

bool FUN_100528214(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1005282a0; end: 10052835f; -[SCPlusSubscriptionInfo initWithIsSubscribed:isSubscribedAdFree:isSubscribedStorage:hasEverBeenSubscribed:subscriptionStartTime:subscriptionExpireTime:status:statusUpdatedAt:provider:allowedMemoriesStorageGb:familyPlanRole:subscriptionTier:isLensPlusOrAbove:] */

void FUN_1005282a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_112705e68;
  uStack_70 = param_4;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    *(undefined8 *)((long)puVar1 + 0x40) = param_12;
    *(undefined4 *)((long)puVar1 + 0x10) = param_13;
    *(undefined8 *)((long)puVar1 + 0x48) = param_15;
    *(undefined1 *)((long)puVar1 + 0xc) = param_16;
  }
  return;
}



/* Entry: 100528360; end: 1005283c3; -[SCPreferences trackedSubscriptionInfoChanges] */

void FUN_100528360(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e7b018);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d19d0;
  func_0x000107c61158(PTR_PTR_1126d19d0);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005283c4; end: 10052844b; -[SCPlusSubscriptionInfoTrackedChanges initWithCoder:] */

undefined1 *
FUN_1005283c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_4);
  puStack_28 = PTR_PTR_1126f5ef0;
  uStack_30 = param_2;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c41470();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c41460(param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10052844c; end: 10052846b; -[FCNSDecoder decodeDoubleForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052844c(long param_1)

{
  func_0x000107c4d9e8(*(undefined8 *)(param_1 + _DAT_11279628c));
                    /* WARNING: Could not recover jumptable at 0x00010bf885b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10052846c; end: 100528473; -[SCPlusSubscriptionInfoTrackedChanges status] */

undefined8 FUN_10052846c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100528474; end: 10052847b; -[SCPlusSubscriptionInfo status] */

undefined8 FUN_100528474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10052847c; end: 100528483; -[SCPlusSubscriptionInfo isSubscribed] */

undefined1 FUN_10052847c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100528484; end: 10052848b; -[SCPlusSubscriptionInfo isSubscribedAdFree] */

undefined1 FUN_100528484(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10052848c; end: 100528493; -[SCPlusSubscriptionInfo isSubscribedStorage] */

undefined1 FUN_10052848c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100528494; end: 10052849b; -[SCPlusSubscriptionInfo hasEverBeenSubscribed] */

undefined1 FUN_100528494(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10052849c; end: 1005284a3; -[SCPlusSubscriptionInfo subscriptionStartTime] */

undefined8 FUN_10052849c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005284a4; end: 1005284ab; -[SCPlusSubscriptionInfo subscriptionExpireTime] */

undefined8 FUN_1005284a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1005284ac; end: 1005284b3; -[SCPlusSubscriptionInfoTrackedChanges statusTimestamp] */

undefined8 FUN_1005284ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005284b4; end: 1005284bb; -[SCPlusSubscriptionInfo provider] */

undefined8 FUN_1005284b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1005284bc; end: 1005284c3; -[SCPlusSubscriptionInfo allowedMemoriesStorageGb] */

undefined8 FUN_1005284bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1005284c4; end: 1005284cb; -[SCPlusSubscriptionInfo familyPlanRole] */

undefined4 FUN_1005284c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1005284cc; end: 1005284d3; -[SCPlusSubscriptionInfo subscriptionTier] */

undefined8 FUN_1005284cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1005284d4; end: 1005284db; -[SCPlusSubscriptionInfo isLensPlusOrAbove] */

undefined1 FUN_1005284d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1005284dc; end: 100528523; -[SCPlusGatingStateValue initWithState:] */

void FUN_1005284dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705e60;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100528524; end: 1005285c3;  */

/* WARNING: Possible PIC construction at 0x000100528590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100528594) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100528524(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_112796820;
    func_0x000107c60d88(param_1 + lVar1);
    func_0x000107c56bcc(*(undefined8 *)(param_1 + _DAT_112796818));
    func_0x000107c424d4(param_1);
    func_0x000107c60d8c(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1005285c4; end: 1005286e7; -[SCLatestCombinedMultiObserver emitNext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005285c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_112796818);
  func_0x000107c40808();
  lVar3 = (long)_DAT_11279680c;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x000107c40808();
  if (lVar1 == lVar2) {
    lVar2 = *(long *)(param_1 + lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_100528de0;
    puStack_40 = &UNK_110d98c58;
    lStack_38 = param_1;
    FUN_100504554(lVar2,&puStack_58);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112796814);
    lVar3 = *(long *)(param_1 + _DAT_112796810);
    lVar1 = lVar2;
    if (lVar3 != 0) {
      lVar1 = lVar3;
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
      func_0x000107c61180();
    }
    func_0x000107c4d664(uVar4);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1005286e8; end: 1005288ab; -[SCMergedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005286e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126e2ef8;
  func_0x000107c610f4(PTR_PTR_1126e2ef8);
  lVar6 = (long)_DAT_1127966c8;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c40808(uVar2);
  func_0x000107c47b78(puVar1,param_2,uVar2,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c40808(uVar2);
  func_0x000107c3e170(puVar3,param_2,uVar2);
  func_0x000107c61180();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = *(long *)(param_1 + lVar6);
  func_0x000107c61174(lVar5);
  lVar6 = lVar5;
  func_0x000107c4080c(lVar5,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar6 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          func_0x000107c61128(lVar5);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x000107c5c310(uVar2,param_2,puVar1);
        func_0x000107c61180();
        func_0x000107c3d798(puVar3,param_2,uVar2);
        func_0x000107c61170(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar5;
      func_0x000107c4080c(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar6 != 0);
  }
  func_0x000107c61170(lVar5);
  puVar4 = PTR_PTR_1126e2f00;
  func_0x000107c610f4(PTR_PTR_1126e2f00);
  func_0x000107c46608();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 1005288ac; end: 1005288b3; -[SCMergedObserver .cxx_construct] */

void FUN_1005288ac(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


