/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f2669c; end: 102f26703; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder subtitleIcon:] */

void FUN_102f2669c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f2802c(param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102f26704; end: 102f2676b; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder avatarThumbnail:] */

void FUN_102f26704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102f280c8(param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102f2676c; end: 102f267b3;  */

/* WARNING: Possible PIC construction at 0x000102f26788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f2678c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2676c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f28f80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f267b4; end: 102f26823; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder avatarThumbnailWithAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102f267b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f28f80);
  *(undefined8 *)(param_1 + _DAT_112f28f80) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + _DAT_112f28f90) = 1;
  return param_1;
}



/* Entry: 102f26824; end: 102f2686f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26824(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f28f88);
  *(undefined **)(unaff_x20 + _DAT_112f28f88) = puVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f26870; end: 102f268db; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder avatarThumbnailCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26870(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c466c0(param_1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f28f88);
  *(undefined **)(param_2 + _DAT_112f28f88) = puVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 102f268dc; end: 102f268e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f268dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28ff8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100b64c10();
  func_0x000100d2bdb8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f268e8; end: 102f26997; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder onDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f268e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_1105e9710;
    func_0x000107c613fc(&UNK_1105e9710,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102f28250;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f28ff8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100b64c10(uVar5,puVar4);
  func_0x000100d2bdb8(uVar2,uVar3);
  func_0x000100d2bdb8(uVar5,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102f26998; end: 102f269a7; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder animateAvatar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26998(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f28f98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f269a8; end: 102f269cb; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder emphasisOnSecondaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f269a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f28fa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f269cc; end: 102f269e7; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder smallSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f269cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f28fa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f269e8; end: 102f26a2b;  */

void FUN_102f269e8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100b64c10();
  func_0x000100d2bdb8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f26a2c; end: 102f26adb; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26a2c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar5 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105e96e8;
    func_0x000107c613fc(&UNK_1105e96e8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102f2823c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f28ff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100b64c10(pcVar5,puVar4);
  func_0x000100d2bdb8(uVar2,uVar3);
  func_0x000100d2bdb8(pcVar5,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102f26adc; end: 102f26aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26adc(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f28fb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f26af0; end: 102f26b13; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder swipeToDismissDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26af0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f28fb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f26b14; end: 102f26b37; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder contentUpdatable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26b14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f28fb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f26b38; end: 102f26b47; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder presentationDurationSecs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26b38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112f28fe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102f26b48; end: 102f27d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102f26b48(undefined8 param_1,undefined8 param_2,undefined1 param_3,uint param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  long lStack_80;
  long lStack_78;
  
  lVar8 = 0;
  FUN_102f25f94();
  lVar9 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f28ec8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f28eb0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(lVar9 + _DAT_112f28ed0);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar6 = _DAT_112f28ed8;
  *(undefined8 *)(lVar9 + _DAT_112f28ed8) = 0;
  *(undefined8 *)(lVar9 + _DAT_112f28e90) = 0;
  *(undefined8 *)(lVar9 + _DAT_112f28e98) = 0;
  puVar4 = (undefined8 *)(lVar9 + _DAT_112f28e88);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar9 + _DAT_112f28eb8);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 *)(lVar9 + _DAT_112f28ef0) = 0x3fc999999999999a;
  *(undefined8 *)(lVar9 + _DAT_112f28ef8) = 0x4030000000000000;
  *(undefined1 *)(lVar9 + _DAT_112f28f00) = 0;
  *(undefined1 *)(lVar9 + _DAT_112f28e80) = 0;
  *(undefined1 *)(lVar9 + _DAT_112f28f08) = 0;
  *(undefined8 *)(lVar9 + _DAT_112f28f10) = 0;
  lVar7 = _DAT_112f28f18;
  pcVar10 = "SIGComposerNotificationPresenter";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar9 + lVar7) = pcVar10;
  puVar4 = (undefined8 *)(lVar9 + _DAT_112f28ec0);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar9 + _DAT_112f28f20);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar9 + _DAT_112f28ea8);
  *puVar4 = 0;
  puVar4[1] = 0xe000000000000000;
  uVar11 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar11);
  uVar11 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar11);
  uVar11 = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  func_0x000107c6142c(uVar11);
  uVar11 = *(undefined8 *)(lVar9 + lVar6);
  *(undefined8 *)(lVar9 + lVar6) = 0;
  func_0x000107c61170(uVar11);
  *(undefined8 *)(lVar9 + _DAT_112f28e78) = param_2;
  *(undefined1 *)(lVar9 + _DAT_112f28ee0) = param_3;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f28ea0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar9 + _DAT_112f28ee8) = param_1;
  func_0x000107c61174(param_2);
  func_0x000100b64c10(param_5,param_6);
  plVar12 = &lStack_80;
  lStack_80 = lVar9;
  lStack_78 = lVar8;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  puVar1 = (undefined8 *)((long)plVar12 + _DAT_112f28f20);
  uVar11 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000100b64c10();
  func_0x000100d2bdb8(uVar11,uVar5);
  if ((param_4 & 1) != 0) {
    *(undefined1 *)((long)plVar12 + _DAT_112f28f08) = 1;
  }
  return plVar12;
}



/* Entry: 102f27d80; end: 102f27db3; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder build] */

void FUN_102f27d80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f26dc0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f27db4; end: 102f27e13; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder init] */

void FUN_102f27db4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SIGComposerNotification.SIGComposerNotificationPresenterBuilder",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f27de0);
  (*pcVar1)();
}



/* Entry: 102f27e14; end: 102f27f5f; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f27e14(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f29000 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28f50 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28f58 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28f60 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28f68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28f70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28f78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28f80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28f88));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28fc0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28fc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28fd0));
  func_0x000100d2bdb8(*(undefined8 *)(param_1 + _DAT_112f28fd8),
                      ((undefined8 *)(param_1 + _DAT_112f28fd8))[1]);
  func_0x000100d2bdb8(*(undefined8 *)(param_1 + _DAT_112f28fe0),
                      ((undefined8 *)(param_1 + _DAT_112f28fe0))[1]);
  func_0x000100d2bdb8(*(undefined8 *)(param_1 + _DAT_112f28ff0),
                      ((undefined8 *)(param_1 + _DAT_112f28ff0))[1]);
  func_0x000100d2bdb8(*(undefined8 *)(param_1 + _DAT_112f28ff8),
                      ((undefined8 *)(param_1 + _DAT_112f28ff8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f29010));
  return;
}



/* Entry: 102f27f60; end: 102f2802b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f27f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28fc0);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f28fc8);
  *(undefined8 *)(unaff_x20 + _DAT_112f28fc8) = param_3;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f28fd0);
  *(undefined8 *)(unaff_x20 + _DAT_112f28fd0) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28fd8);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000100d2bdb8(uVar3,uVar2);
  func_0x000107c6157c(param_6);
  return;
}



/* Entry: 102f2802c; end: 102f2817b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2802c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c61174(param_1);
    func_0x000107c45160(puVar1,param_2,param_1);
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107c30e3c();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(param_1);
      param_1 = *(long *)(unaff_x20 + _DAT_112f28f78);
      *(undefined **)(unaff_x20 + _DAT_112f28f78) = puVar2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f2817c; end: 102f281ff;  */

void FUN_102f2817c(void)

{
  long unaff_x20;
  
  func_0x000102f27a10(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102f28200; end: 102f2821b;  */

void FUN_102f28200(long param_1,long param_2)

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



/* Entry: 102f2821c; end: 102f2823b;  */

void FUN_102f2821c(void)

{
  func_0x000107c61168(&PTR_PTR_1128abf80);
  return;
}



/* Entry: 102f2823c; end: 102f2825b;  */

void FUN_102f2823c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102f28244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102f2825c; end: 102f2845b;  */

void FUN_102f2825c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "openOSNotificationSettings()";
  func_0x0001000c10c0("openOSNotificationSettings()");
  func_0x000107c61180();
  puVar2 = &UNK_1105e9860;
  func_0x000107c613fc(&UNK_1105e9860,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x102f287e4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105e9878;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102f2845c; end: 102f28483; -[_TtC22NotificationSettingsV222NotificationOSSettings openOSNotificationSettings] */

void FUN_102f2845c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102f2825c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f28484; end: 102f285eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f28484(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f29040);
  if (lVar6 == 0) {
    puVar4 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    func_0x0001002ed07c(0);
    uVar5 = 1;
    func_0x000107c6010c(1);
    func_0x000107c5061c(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
  }
  else {
    puVar4 = PTR_PTR_1126b1588;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar6);
    func_0x000107c453e4();
    lVar1 = lVar6;
    func_0x000107c507d0(lVar6);
    func_0x000107c61180();
    puVar2 = &UNK_1105e9810;
    func_0x000107c613fc(&UNK_1105e9810,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puVar4;
    pcStack_50 = FUN_102f287c0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1014b8460;
    puStack_58 = &UNK_1105e9828;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c5dc64(lVar1);
    func_0x000107c615e8(lVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return puVar4;
}



/* Entry: 102f285ec; end: 102f286c3;  */

/* WARNING: Possible PIC construction at 0x000102f28698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f28650: Changing call to branch */

void FUN_102f285ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    func_0x0001002ed07c(0);
    param_1 = 1;
    func_0x000107c6010c(1);
    func_0x000107c43b74(param_3,param_2,param_1);
  }
  else {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c3e488();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x000107c3e488();
      if (lVar1 == 1) {
        lVar1 = param_1;
        func_0x000107c3dae8();
        if ((lVar1 == 2) || (lVar1 = param_1, func_0x000107c4214c(), lVar1 == 2)) {
          uVar2 = 1;
        }
        else {
          lVar1 = param_1;
          func_0x000107c42100(param_1);
          uVar2 = (ulong)(lVar1 == 2);
        }
      }
      else {
        uVar2 = 0;
      }
      func_0x000107c5fca0(uVar2);
      func_0x000107c43b74(param_3,param_2,uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f286c4; end: 102f286f7; -[_TtC22NotificationSettingsV222NotificationOSSettings osNotificationsEnabled] */

void FUN_102f286c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102f28484();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f286f8; end: 102f28757; -[_TtC22NotificationSettingsV222NotificationOSSettings init] */

void FUN_102f286f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationSettingsV2.NotificationOSSettings",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f28724);
  (*pcVar1)();
}



/* Entry: 102f28758; end: 102f2879f; -[_TtC22NotificationSettingsV222NotificationOSSettings .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f28774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f28778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f28758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f29040));
  return;
}



/* Entry: 102f287a0; end: 102f287bf;  */

void FUN_102f287a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ac100);
  return;
}



/* Entry: 102f287c0; end: 102f287eb;  */

/* WARNING: Possible PIC construction at 0x000102f28698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f28650: Changing call to branch */

void FUN_102f287c0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    func_0x0001002ed07c(0);
    param_1 = 1;
    func_0x000107c6010c(1);
    func_0x000107c43b74(uVar3,param_2,param_1);
  }
  else {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c3e488();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x000107c3e488();
      if (lVar1 == 1) {
        lVar1 = param_1;
        func_0x000107c3dae8();
        if ((lVar1 == 2) || (lVar1 = param_1, func_0x000107c4214c(), lVar1 == 2)) {
          uVar2 = 1;
        }
        else {
          lVar1 = param_1;
          func_0x000107c42100(param_1);
          uVar2 = (ulong)(lVar1 == 2);
        }
      }
      else {
        uVar2 = 0;
      }
      func_0x000107c5fca0(uVar2);
      func_0x000107c43b74(uVar3,param_2,uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f287ec; end: 102f2883b;  */

void FUN_102f287ec(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f29080 != 0) {
    return;
  }
  puVar1 = &UNK_1105e98b0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f29080 = param_1;
  return;
}



/* Entry: 102f2883c; end: 102f28843;  */

void FUN_102f2883c(long param_1,long param_2)

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



/* Entry: 102f28844; end: 102f28927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102f28844(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f29088);
  if (lVar1 != 0) {
    func_0x000107c3ea3c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        puVar3 = PTR_PTR_1126ce100;
        func_0x000107c61168(PTR_PTR_1126ce100);
        func_0x000107c41f38();
        func_0x000107c61180();
        FUN_102f28d88(0,0x112f290c0,&PTR_PTR_1126ce100);
        lVar2 = lVar1;
        func_0x000107c60118(lVar1,puVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(puVar3);
        uVar4 = (uint)lVar2 ^ 1;
        goto LAB_102f28914;
      }
    }
  }
  uVar4 = 1;
LAB_102f28914:
  return uVar4 & 1;
}



/* Entry: 102f28928; end: 102f2895b; -[_TtC22NotificationSettingsV226NotificationPreferenceHost getBitmojiEnabled] */

uint FUN_102f28928(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102f28844();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102f2895c; end: 102f28a73;  */

/* WARNING: Possible PIC construction at 0x000102f289d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f28a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f289d8) */
/* WARNING: Removing unreachable block (ram,0x000102f28a5c) */
/* WARNING: Removing unreachable block (ram,0x000102f289dc) */
/* WARNING: Removing unreachable block (ram,0x000102f28a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2895c(ulong param_1)

{
  long unaff_x20;
  
  func_0x000107c61168(PTR_PTR_1126ce100);
  if ((param_1 & 1) == 0) {
    func_0x000107c41f38();
  }
  else {
    func_0x000107c426e0();
  }
  func_0x000107c61180();
  if (*(long *)(unaff_x20 + _DAT_112f29088) != 0) {
    func_0x000107c3ea38(*(long *)(unaff_x20 + _DAT_112f29088));
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102f28a74; end: 102f28a77;  */

void FUN_102f28a74(void)

{
  return;
}



/* Entry: 102f28a78; end: 102f28ac7;  */

void FUN_102f28a78(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102f28ac8; end: 102f28af7; -[_TtC22NotificationSettingsV226NotificationPreferenceHost setBitmojiEnabledWithEnabled:] */

void FUN_102f28ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102f2895c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f28af8; end: 102f28c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f28af8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f29090);
  if (lVar5 == 0) {
    puVar3 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    FUN_102f28d88(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = 0;
    func_0x000107c6010c(0);
    func_0x000107c5061c(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
  }
  else {
    puVar3 = PTR_PTR_1126b1588;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar5);
    func_0x000107c453e4();
    puVar1 = &UNK_1105e98d0;
    func_0x000107c613fc(&UNK_1105e98d0,0x18,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    pcStack_40 = FUN_102f28d38;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f3aa0;
    puStack_48 = &UNK_1105e98e8;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c3f970(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c60bd0(ppuVar2);
  }
  return puVar3;
}



/* Entry: 102f28c4c; end: 102f28c7f; -[_TtC22NotificationSettingsV226NotificationPreferenceHost isFamilyCenterEnrolled] */

void FUN_102f28c4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102f28af8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f28c80; end: 102f28cdf; -[_TtC22NotificationSettingsV226NotificationPreferenceHost init] */

void FUN_102f28c80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationSettingsV2.NotificationPreferenceHost",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f28cac);
  (*pcVar1)();
}



/* Entry: 102f28ce0; end: 102f28d17; -[_TtC22NotificationSettingsV226NotificationPreferenceHost .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f28ce0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29088));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f29090));
  return;
}



/* Entry: 102f28d18; end: 102f28d37;  */

void FUN_102f28d18(void)

{
  func_0x000107c61168(&PTR_PTR_1128ac1d0);
  return;
}



/* Entry: 102f28d38; end: 102f28d6b;  */

void FUN_102f28d38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fca0();
  func_0x000107c43b74(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f28d6c; end: 102f28d87;  */

void FUN_102f28d6c(long param_1,long param_2)

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



/* Entry: 102f28d88; end: 102f28dc7;  */

void FUN_102f28d88(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102f28dc8; end: 102f28dcf;  */

void FUN_102f28dc8(long param_1,long param_2)

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



/* Entry: 102f28dd0; end: 102f2908f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102f28dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f290c8;
  func_0x000107c61614(unaff_x20 + _DAT_112f290c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f290d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f290d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f290e0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f290e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f290f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f290f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f29100) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f29108) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f29110) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f29118) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f29120) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f29128) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f29130) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f29138) = param_14;
  func_0x000107c61604(unaff_x20 + lVar2,param_15);
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1,0,0);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c61170(param_15);
  return puVar3;
}



/* Entry: 102f29090; end: 102f29287; -[SCNotificationSettingsV2ViewController initWithRuntime:composerSUPServices:notificationDataServices:discoverFeedNotificationServices:creatorNotificationServices:familyCenterEligibilityChecker:logger:pageViewContext:valdiWebLauncherServices:deckService:composerServices:notificationOSSettingsRetriever:permissionRequestService:notificationsPermissionRequester:navigationController:] */

undefined8
FUN_102f29090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  uVar1 = param_5;
  func_0x000107c61174();
  uVar2 = param_6;
  func_0x000107c61174();
  uVar3 = param_7;
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  func_0x000107c61174();
  func_0x000107c615f0(param_14);
  func_0x000107c615f0(param_15);
  func_0x000107c615f0(param_16);
  uVar4 = param_17;
  func_0x000107c61174();
  uVar5 = param_3;
  FUN_102f2a3bc(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14,param_15,param_16,param_17);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c615e8(param_15);
  func_0x000107c615e8(param_16);
  func_0x000107c61170(uVar4);
  return uVar5;
}



/* Entry: 102f29288; end: 102f292f3; -[SCNotificationSettingsV2ViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f29288(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112f290c8,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "NotificationSettingsV2/NotificationSettingsV2ViewController.swift",0x41,2,
                      0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f292f4);
  (*pcVar1)();
}



/* Entry: 102f292f4; end: 102f29c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f292f4(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long alStack_130 [7];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x000107c614f0();
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar17 = ((long)&puStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_112f290d8) + _DAT_11303f600);
  if (lVar12 == 0) {
    pcVar9 = "viewDidLoad()";
    func_0x0001000c10c0("viewDidLoad()");
    func_0x000107c61180();
    puVar10 = &UNK_1105e9948;
    func_0x000107c613fc(&UNK_1105e9948,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    pcStack_90 = FUN_102f2a5b4;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1105e9960;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_88);
    func_0x000107c4e524(pcVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(pcVar9);
  }
  else {
    func_0x000107c6157c(lVar12);
    func_0x0001000d224c(&puStack_b0);
    func_0x000107c61574(lVar12);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f290d0);
    puVar10 = PTR_PTR_1126afe50;
    lStack_e0 = (long)&puStack_f0 - extraout_x8;
    func_0x000107c610f8();
    uStack_d8 = uVar13;
    func_0x000107c4842c();
    puVar3 = PTR_PTR_1126ac820;
    func_0x000107c610f8(PTR_PTR_1126ac820);
    func_0x000107c453e4();
    puStack_f0 = puVar10;
    func_0x000107c569fc();
    puStack_e8 = puStack_b0;
    func_0x000107c59ac8(puVar3);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f290e8);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f29100);
    lVar4 = 0;
    FUN_102f28d18();
    lVar12 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112f29088) = uVar13;
    *(undefined8 *)(lVar12 + _DAT_112f29090) = uVar14;
    puVar10 = PTR_s_init_1125d9248;
    lStack_c0 = lVar12;
    lStack_b8 = lVar4;
    func_0x000107c61174(uVar13);
    func_0x000107c615f0(uVar14);
    plVar5 = &lStack_c0;
    func_0x000107c61154(plVar5,puVar10);
    func_0x000107c57670(puVar3);
    func_0x000107c61170(plVar5);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f29128);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f29130);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f29138);
    lVar4 = 0;
    FUN_102f287a0();
    lVar12 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112f29040) = uVar13;
    *(undefined8 *)(lVar12 + _DAT_112f29048) = uVar14;
    *(undefined8 *)(lVar12 + _DAT_112f29050) = uVar15;
    puVar10 = PTR_s_init_1125d9248;
    lStack_d0 = lVar12;
    lStack_c8 = lVar4;
    func_0x000107c615f0(uVar13);
    func_0x000107c615f0(uVar14);
    func_0x000107c615f0(uVar15);
    plVar5 = &lStack_d0;
    func_0x000107c61154(plVar5,puVar10);
    func_0x000107c56b10(puVar3);
    func_0x000107c61170(plVar5);
    puVar10 = &UNK_1105e9948;
    puVar6 = puVar10;
    func_0x000107c613fc(&UNK_1105e9948,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = (code *)0x102f2a5d8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1105e9988;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_88);
    func_0x000107c56d0c(puVar3);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c613fc(&UNK_1105e9948,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    pcStack_90 = (code *)0x102f2a5e0;
    puStack_b0 = puVar7;
    uStack_a8 = 0x42000000;
    puStack_a0 = (undefined *)0x102f2a170;
    puStack_98 = &UNK_1105e99b0;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_88);
    func_0x000107c56fb0(puVar3);
    func_0x000107c60bd0(ppuVar11);
    func_0x00010092450c(*(long *)(unaff_x20 + _DAT_112f29118) + _DAT_112ffbfa0,&puStack_b0);
    pcVar1 = pcStack_90;
    func_0x0001000a8868(&puStack_b0,puStack_98);
    lVar12 = 0;
    func_0x000107c5ede0();
    pcVar16 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
    (*pcVar16)(lVar18,1,1,lVar12);
    (*pcVar16)(lVar17,1,1,lVar12);
    lVar4 = 0;
    func_0x0001046305a8();
    lVar12 = lStack_e0;
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lStack_e0,1,1,lVar4);
    *(undefined1 *)(lVar2 + -8) = 0;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    *(undefined8 *)(lVar2 + -0x18) = 0;
    *(undefined8 *)(lVar2 + -0x20) = 0;
    *(undefined8 *)(lVar2 + -0x28) = 0;
    *(undefined8 *)(lVar2 + -0x30) = 0;
    *(undefined8 *)(lVar2 + -0x38) = 0;
    *(long *)(lVar2 + -0x40) = lVar12;
    func_0x000104638e24(lVar2,0xf,lVar18,0,lVar17,0,0,0,0);
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar2);
    lVar12 = lVar2;
    (**(code **)((long)pcVar1 + 8))();
    func_0x000107c61170(lVar2);
    func_0x000107c5a6a4(puVar3);
    func_0x000107c615e8(lVar12);
    func_0x0001000834e4(&puStack_b0);
    lVar12 = *(long *)(unaff_x20 + _DAT_112f29120);
    func_0x000107c41414();
    func_0x000107c61180();
    lVar2 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar2 != 0) {
      lVar12 = lVar2;
      func_0x000107c409cc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar12 != 0) {
        lVar2 = lVar12;
        func_0x000107c508d0(lVar12);
        func_0x000107c61180();
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f290e0);
        func_0x000107c5dbd4(uVar13);
        func_0x000107c61180();
        lVar17 = lVar2;
        func_0x000107c40974(lVar2);
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar13);
        lVar2 = lVar17;
        func_0x000107c41408(lVar17);
        func_0x000107c61180();
        func_0x000107c615e8(lVar17);
        func_0x000107c53e8c(puVar3);
        func_0x000107c615e8(lVar12);
        func_0x000107c615e8(lVar2);
      }
    }
    puVar10 = PTR_PTR_1126ac828;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f29c78);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 9;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    puVar7 = puVar10;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f29c7c);
      (*pcVar1)();
    }
    lVar17 = lVar12;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar6 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar17);
    *(undefined **)(lVar2 + 0x20) = puVar6;
    puVar7 = puVar10;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f29c80);
      (*pcVar1)();
    }
    lVar17 = lVar12;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar6 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar17);
    *(undefined **)(lVar2 + 0x28) = puVar6;
    puVar7 = puVar10;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f29c84);
      (*pcVar1)();
    }
    lVar17 = lVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar6 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar17);
    *(undefined **)(lVar2 + 0x30) = puVar6;
    puVar7 = puVar10;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f29c88);
      (*pcVar1)();
    }
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar12 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar8 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar12);
    *(undefined **)(lVar2 + 0x38) = puVar8;
    uVar13 = 0;
    func_0x000100847984(0);
    lVar12 = lVar2;
    func_0x000107c5fc48(lVar2,uVar13);
    func_0x000107c61574(lVar2);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar12);
    puVar7 = puStack_f0;
    func_0x000107c561c0(puStack_f0);
    func_0x000107c615e8(puStack_e8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar10);
  }
  return;
}



/* Entry: 102f29c88; end: 102f29fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f29c88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = param_1 + _DAT_112f290c8;
    func_0x000107c61618();
    lVar2 = param_1;
    if (lVar1 == 0) goto LAB_102f29d14;
  }
  lVar2 = lVar1;
  func_0x000107c4eb48();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
LAB_102f29d14:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102f29fc0; end: 102f2a01b;  */

void FUN_102f29fc0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102f2a01c(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f2a01c; end: 102f2a1ab;  */

/* WARNING: Possible PIC construction at 0x000102f2a140: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2a01c(int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  if (param_1 == 1) {
    if (*(long *)(unaff_x20 + _DAT_112f290f8) == 0) {
      return;
    }
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f290f8) + _DAT_112fc5ea8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      return;
    }
    lVar2 = lVar1;
    func_0x000107c40b84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c61174(lVar2);
    func_0x000107c4d508();
    func_0x000107c61180();
  }
  else {
    if ((param_1 != 0) || (*(long *)(unaff_x20 + _DAT_112f290f0) == 0)) {
      return;
    }
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f290f0) + _DAT_11302ce28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      return;
    }
    lVar2 = lVar1;
    func_0x000107c40b84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61174(lVar2);
    func_0x000107c4d508();
    func_0x000107c61180();
  }
  if (lVar3 == 0) {
    lVar3 = unaff_x20 + _DAT_112f290c8;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c4f6f4();
  lVar2 = lVar3;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102f2a1ac; end: 102f2a1d3; -[SCNotificationSettingsV2ViewController viewDidLoad] */

void FUN_102f2a1ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102f292f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f2a1d4; end: 102f2a253; -[SCNotificationSettingsV2ViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2a1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c4bd50(*(undefined8 *)(param_1 + _DAT_112f29108));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102f2a254; end: 102f2a2b3; -[SCNotificationSettingsV2ViewController initWithNibName:bundle:] */

void FUN_102f2a254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationSettingsV2.NotificationSettingsV2ViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f2a280);
  (*pcVar1)();
}



/* Entry: 102f2a2b4; end: 102f2a3bb; -[SCNotificationSettingsV2ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2a2b4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f290d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f290d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f290e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f290e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f290f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f290f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29100));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29108));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29110));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29118));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29120));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29128));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29130));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f290c8);
  return;
}



/* Entry: 102f2a3bc; end: 102f2a5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2a3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f290c8;
  func_0x000107c61614(unaff_x20 + _DAT_112f290c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f290d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f290d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f290e0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f290e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f290f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f290f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f29100) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f29108) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f29110) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f29118) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f29120) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f29128) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f29130) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f29138) = param_14;
  func_0x000107c61604(unaff_x20 + lVar2,param_15);
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar1,0,0);
  return;
}



/* Entry: 102f2a5b4; end: 102f2a5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2a5b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = lVar1 + _DAT_112f290c8;
    func_0x000107c61618();
    lVar3 = lVar1;
    if (lVar2 == 0) goto LAB_102f29d14;
  }
  lVar3 = lVar2;
  func_0x000107c4eb48();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
LAB_102f29d14:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102f2a5e8; end: 102f2a607;  */

void FUN_102f2a5e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ac298);
  return;
}



/* Entry: 102f2a608; end: 102f2a63b;  */

void FUN_102f2a608(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102f2a01c(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102f2a63c; end: 102f2a63f; -[SCNotificationSettingsV2ViewController defaultProjectNameV3] */

void FUN_102f2a63c(void)

{
  func_0x000107c5fadc(0x6163696669746f4e,0xed0000736e6f6974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f2a640; end: 102f2a643; -[SCNotificationSettingsV2ViewController defaultProjectNameV2] */

void FUN_102f2a640(void)

{
  func_0x000107c5fadc(0x6163696669746f4e,0xed0000736e6f6974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f2a644; end: 102f2a79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102f2a644(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_51;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x44) = 1;
  uStack_51 = 1;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar2 = &uStack_51;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + 0x48) = puVar2;
  lVar3 = param_3;
  func_0x000107c4d484();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_2 + _DAT_113091b70);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  func_0x000107c615f0();
  uVar4 = param_4;
  func_0x000107c4141c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  uVar4 = param_5;
  func_0x000107c4d7f4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  if (lVar3 != 0) {
    func_0x000107c61174(param_6);
    func_0x000100905dd4();
    func_0x000100906074();
    func_0x000107c61170(param_6);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 102f2a7a0; end: 102f2a877;  */

/* WARNING: Possible PIC construction at 0x000102f2a85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f2a860) */

void FUN_102f2a7a0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (param_1 == 1) {
    puVar2 = &UNK_10db65070;
  }
  else {
    if ((param_1 != 6) || (*(char *)(unaff_x20 + 0x44) != '\x01')) {
      return;
    }
    *(undefined1 *)(unaff_x20 + 0x44) = 0;
    puVar2 = &UNK_10db65060;
  }
  puVar1 = &UNK_1105e9af8;
  func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001001ca524(5,0,0x58,1,0,0,puVar2,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102f2a878; end: 102f2a883;  */

void FUN_102f2a878(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 102f2a884; end: 102f2a8cf;  */

void FUN_102f2a884(long param_1,undefined8 param_2)

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



/* Entry: 102f2a8d0; end: 102f2a8e7;  */

void FUN_102f2a8d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2a8e8,0,0);
  return;
}



/* Entry: 102f2a8e8; end: 102f2a9f3;  */

void FUN_102f2a8e8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x40,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c507d0(uVar2);
    func_0x000107c61180();
    puVar1 = &UNK_1105e9af8;
    func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,lVar3);
    puVar4 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)(unaff_x22 + 0x30) = FUN_102f2b154;
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1014b8460;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1105e9b38;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c5dc64(uVar2);
    func_0x000107c60bd0(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f2a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f2a9f4; end: 102f2aa0b;  */

void FUN_102f2a9f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2aa0c,0,0);
  return;
}



/* Entry: 102f2aa0c; end: 102f2ab6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2aa0c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x38,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x30);
    func_0x000107c61174();
    func_0x000107c61574(lVar3);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112f29250);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(unaff_x22 + 0x10);
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
    (**(code **)(lVar3 + 0x10))(uVar4,lVar3);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102f2ab6c;
                    /* WARNING: Could not recover jumptable at 0x000102f2ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_101b5668c)();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x50,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4fb28();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x000102f2ab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f2ab6c; end: 102f2abbf;  */

void FUN_102f2ab6c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x91) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2abc0,0,0);
  return;
}



/* Entry: 102f2abc0; end: 102f2acf7;  */

void FUN_102f2abc0(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0x91) == '\x01') {
    *(ulong *)(unaff_x22 + 0x68) = uVar4;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x68,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000101b56b9c(uVar5,1);
    func_0x0001000834e4(unaff_x22 + 0x10);
    bVar1 = false;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x0001000834e4(unaff_x22 + 0x10);
    bVar1 = (uVar4 & 0xff) == 0;
  }
  lVar3 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x50,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) goto LAB_102f2ace4;
  if (bVar1) {
    uVar5 = *(undefined8 *)(lVar3 + 0x48);
    func_0x000107c6157c(uVar5);
    func_0x0001000c74f0(unaff_x22 + 0x90);
    func_0x000107c61574(uVar5);
    if ((*(byte *)(unaff_x22 + 0x90) & 1) == 0) goto LAB_102f2acbc;
  }
  else {
LAB_102f2acbc:
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4fb28();
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61574();
LAB_102f2ace4:
                    /* WARNING: Could not recover jumptable at 0x000102f2acf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f2acf8; end: 102f2ad0f;  */

void FUN_102f2acf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2ad10,0,0);
  return;
}



/* Entry: 102f2ad10; end: 102f2ae1b;  */

void FUN_102f2ad10(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x40,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c507d0(uVar2);
    func_0x000107c61180();
    puVar1 = &UNK_1105e9af8;
    func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,lVar3);
    puVar4 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)(unaff_x22 + 0x30) = FUN_102f2b488;
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1014b8460;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1105e9c00;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c5dc64(uVar2);
    func_0x000107c60bd0(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f2ae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f2ae1c; end: 102f2ae33;  */

void FUN_102f2ae1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2ae34,0,0);
  return;
}



/* Entry: 102f2ae34; end: 102f2af3f;  */

void FUN_102f2ae34(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x40,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c507d0(uVar2);
    func_0x000107c61180();
    puVar1 = &UNK_1105e9af8;
    func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,lVar3);
    puVar4 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)(unaff_x22 + 0x30) = FUN_102f2b2d8;
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1014b8460;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1105e9b60;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c5dc64(uVar2);
    func_0x000107c60bd0(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f2af3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f2af40; end: 102f2afab;  */

void FUN_102f2af40(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102f2afac; end: 102f2afb7;  */

void FUN_102f2afac(void)

{
  return;
}



/* Entry: 102f2afb8; end: 102f2b02f;  */

void FUN_102f2afb8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000100876f7c(0x102f2a880,0,0x102f2b038,lVar1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102f2b030; end: 102f2b087;  */

void FUN_102f2b030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102f2b088; end: 102f2b153;  */

void FUN_102f2b088(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102f2b0d0;
  plVar1[0xb] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2ae34,0,0);
  return;
}



/* Entry: 102f2b154; end: 102f2b23f;  */

void FUN_102f2b154(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000107c3e488();
      if (lVar2 == 2) {
        puVar3 = &UNK_1105e9af8;
        func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,lVar1);
        func_0x0001001ca524(5,0,0x58,1,0,0,&UNK_10db65080,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574();
        func_0x000107c61574(puVar3);
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102f2b240; end: 102f2b2c7;  */

void FUN_102f2b240(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102f2b5b0;
  plVar1[0xe] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2aa0c,0,0);
  return;
}



/* Entry: 102f2b2c8; end: 102f2b2d7;  */

void FUN_102f2b2c8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102f2b2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102f2b2d8; end: 102f2b43f;  */

void FUN_102f2b2d8(long param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000107c3e488();
      if ((lVar2 == 2) && (lVar2 = *(long *)(lVar1 + 0x10), lVar2 != 0)) {
        func_0x000107c615f0(lVar2);
        func_0x000107c3faf8();
        func_0x000107c61170(param_1);
        func_0x000107c61574(lVar1);
        func_0x000107c615e8(lVar2);
        return;
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102f2b440; end: 102f2b487;  */

void FUN_102f2b440(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102f2b5b4;
  plVar1[0xb] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2ad10,0,0);
  return;
}



/* Entry: 102f2b488; end: 102f2b53b;  */

void FUN_102f2b488(long param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000107c3e488();
      if ((lVar2 != 2) && (lVar2 = *(long *)(lVar1 + 0x10), lVar2 != 0)) {
        func_0x000107c615f0(lVar2);
        func_0x000107c3faf8();
        func_0x000107c61170(param_1);
        func_0x000107c61574(lVar1);
        func_0x000107c615e8(lVar2);
        return;
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102f2b53c; end: 102f2b583;  */

void FUN_102f2b53c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102f2b5b8;
  plVar1[0xb] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2ad10,0,0);
  return;
}



/* Entry: 102f2b584; end: 102f2b5cf;  */

void FUN_102f2b584(long param_1,long param_2)

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


