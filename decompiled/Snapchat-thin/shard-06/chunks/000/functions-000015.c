/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043b19bc; end: 1043b1a43; -[SCStoriesTopicMusicTrackMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001043b1a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043b1a28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b19bc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130749c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130749d0 + 8));
  func_0x0001043b1698(param_1 + _DAT_113813568,0x112d36580,&UNK_10d9016d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113813570))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_113813570));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1043b1a44; end: 1043b1a4b;  */

void FUN_1043b1a44(void)

{
  if (lRam0000000113074a00 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e801df0);
  return;
}



/* Entry: 1043b1a4c; end: 1043b1a83;  */

void FUN_1043b1a4c(undefined8 param_1)

{
  if (lRam0000000113074a00 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801df0);
  return;
}



/* Entry: 1043b1a84; end: 1043b1b23;  */

void FUN_1043b1a84(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10dcf4c58;
  puStack_48 = &UNK_10dcf4c58;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dcf4c70;
    puStack_28 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_30 = &UNK_10dcf4c70;
    _swift_updateClassMetadata2(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043b1b24; end: 1043b21e3;  */

void FUN_1043b1b24(long *param_1)

{
  if (*param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043b21e4; end: 1043b220f; +[SCSnapDocOperaBundleKeys shareDeepLinkTopSnap] */

void FUN_1043b21e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fa920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b2210; end: 1043b223b; +[SCSnapDocOperaBundleKeys shareTopSnap] */

void FUN_1043b2210(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fa950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b223c; end: 1043b2267; +[SCSnapDocOperaBundleKeys contentManagerContentResult] */

void FUN_1043b223c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1fa970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b2268; end: 1043b2297; +[SCSnapDocOperaBundleKeys snapDocKey] */

void FUN_1043b2268(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f636f6470616e73,0xeb0000000079656b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b2298; end: 1043b22c3; +[SCSnapDocOperaBundleKeys cameraShouldSelectOurStory] */

void FUN_1043b2298(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1fa9a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b22c4; end: 1043b230f; +[SCSnapDocOperaBundleKeys cameraShouldSelectSpotlight] */

void FUN_1043b22c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1fa9c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b2310; end: 1043b234b; -[SCSnapDocOperaBundleKeys init] */

void FUN_1043b2310(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001043b22f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b234c; end: 1043b237b;  */

void FUN_1043b234c(void)

{
  func_0x0001043b22f0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b237c; end: 1043b237f; -[SCSnapDocOperaBundleKeys .cxx_destruct] */

void FUN_1043b237c(void)

{
  return;
}



/* Entry: 1043b2380; end: 1043b2393; -[SCSnapDocDataModel snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074a38));
  return;
}



/* Entry: 1043b2394; end: 1043b2437; -[SCSnapDocDataModel initWithSnapDoc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113074a38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043b2438; end: 1043b243b; -[SCSnapDocDataModel copyWithZone:] */

void FUN_1043b2438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b243c; end: 1043b24c3; -[SCSnapDocDataModel encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b243c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x434f445f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434f445f50414e53,0xe800000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1043b24c4; end: 1043b2503;  */

undefined8 FUN_1043b24c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043b25e8(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b2504; end: 1043b253f; -[SCSnapDocDataModel initWithCoder:] */

undefined8 FUN_1043b2504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1043b25e8();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1043b2540; end: 1043b255b; -[SCSnapDocDataModel description] */

void FUN_1043b2540(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b255c; end: 1043b25d7; -[SCSnapDocDataModel init] */

void FUN_1043b255c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapDocServicesDataModel/SCSnapDocDataModelWrapper.swift",0x3a,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b25a4);
  (*pcVar1)();
}



/* Entry: 1043b25d8; end: 1043b25e7; -[SCSnapDocDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b25d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074a38));
  return;
}



/* Entry: 1043b25e8; end: 1043b26e3;  */

undefined8 FUN_1043b25e8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0x434f445f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434f445f50414e53,0xe800000000000000);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000100fa1670(0);
    puVar2 = &uStack_78;
    _swift_dynamicCast(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_78;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010c0473c0();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1043b26e4; end: 1043b2703;  */

void FUN_1043b26e4(void)

{
  _objc_opt_self(&PTR_PTR_1129a9df8);
  return;
}



/* Entry: 1043b2704; end: 1043b2707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2704(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074a38) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b2708; end: 1043b2717; -[SCFullSnapDocDataModel snapDocDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074a68));
  return;
}



/* Entry: 1043b2718; end: 1043b2727; -[SCFullSnapDocDataModel isFullSnapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043b2718(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074a70);
}



/* Entry: 1043b2728; end: 1043b278b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2728(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074a68) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113074a70) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b278c; end: 1043b27fb; -[SCFullSnapDocDataModel initWithSnapDocDataModel:isFullSnapDoc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b278c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113074a68) = param_3;
  *(undefined1 *)(param_1 + _DAT_113074a70) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1043b27fc; end: 1043b28cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043b27fc(long param_1,byte param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  
  plVar2 = &lStack_60;
  _objc_allocWithZone();
  if (param_1 == 1) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = 0;
    FUN_1043b26e4();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(long *)(lVar4 + _DAT_113074a38) = param_1;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    _objc_retain(param_1);
    _objc_msgSendSuper2(&lStack_60,puVar1);
  }
  *(long **)(unaff_x20 + _DAT_113074a68) = plVar2;
  *(byte *)(unaff_x20 + _DAT_113074a70) = param_2 & 1;
  puVar5 = auStack_50;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  FUN_1043b28cc(param_1);
  return puVar5;
}



/* Entry: 1043b28cc; end: 1043b28db;  */

void FUN_1043b28cc(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043b28dc; end: 1043b28df; -[SCFullSnapDocDataModel copyWithZone:] */

void FUN_1043b28dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b28e0; end: 1043b29b3; -[SCFullSnapDocDataModel encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b28e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1faa20);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1faa40);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043b29b4; end: 1043b29f3;  */

undefined8 FUN_1043b29b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043b2ad8(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b29f4; end: 1043b2a2f; -[SCFullSnapDocDataModel initWithCoder:] */

undefined8 FUN_1043b29f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1043b2ad8();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1043b2a30; end: 1043b2a4b; -[SCFullSnapDocDataModel description] */

void FUN_1043b2a30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b2a4c; end: 1043b2ac7; -[SCFullSnapDocDataModel init] */

void FUN_1043b2a4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapDocServicesDataModel/SCFullSnapDocDataModelWrapper.swift",0x3e,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b2a94);
  (*pcVar1)();
}



/* Entry: 1043b2ac8; end: 1043b2ad7; -[SCFullSnapDocDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074a68));
  return;
}



/* Entry: 1043b2ad8; end: 1043b2c17;  */

undefined8 FUN_1043b2ad8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1faa20);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043b26e4(0);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_78;
    if ((int)puVar3 == 0) {
      uVar1 = 0;
    }
  }
  uVar4 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1faa40);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  func_0x00010c047640();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1043b2c18; end: 1043b2c37;  */

void FUN_1043b2c18(void)

{
  _objc_opt_self(&PTR_PTR_1129a9ec8);
  return;
}



/* Entry: 1043b2c38; end: 1043b2c47; -[SCSnapDocLoadedStatus fullSnapDocDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074aa0));
  return;
}



/* Entry: 1043b2c48; end: 1043b2c57; -[SCSnapDocLoadedStatus mediaIsLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043b2c48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074aa8);
}



/* Entry: 1043b2c58; end: 1043b2c67; -[SCSnapDocLoadedStatus mediaIsLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043b2c58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074ab0);
}



/* Entry: 1043b2c68; end: 1043b2cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2c68(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074aa0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113074aa8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113074ab0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b2cdc; end: 1043b2d5b; -[SCSnapDocLoadedStatus initWithFullSnapDocDataModel:mediaIsLoaded:mediaIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113074aa0) = param_3;
  *(undefined1 *)(param_1 + _DAT_113074aa8) = param_4;
  *(undefined1 *)(param_1 + _DAT_113074ab0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1043b2d5c; end: 1043b2eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043b2d5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long *plVar7;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  
  plVar7 = &lStack_80;
  _objc_allocWithZone();
  if (param_1 == 2) {
    plVar7 = (long *)0x0;
  }
  else {
    lVar2 = 0;
    FUN_1043b2c18();
    lVar3 = lVar2;
    _objc_allocWithZone();
    puVar6 = (undefined1 *)0x0;
    if (param_1 != 1) {
      lVar4 = 0;
      FUN_1043b26e4();
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(long *)(lVar5 + _DAT_113074a38) = param_1;
      puVar1 = PTR_s_init_1125d9248;
      lStack_80 = lVar5;
      lStack_78 = lVar4;
      _objc_retain(param_1);
      _objc_retain();
      _objc_msgSendSuper2(&lStack_80,puVar1);
      puVar6 = (undefined1 *)plVar7;
    }
    *(undefined1 **)(lVar3 + _DAT_113074a68) = puVar6;
    *(byte *)(lVar3 + _DAT_113074a70) = (byte)param_2 & 1;
    plVar7 = &lStack_70;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
    func_0x0001043b312c(param_1,param_2);
  }
  *(long **)(unaff_x20 + _DAT_113074aa0) = plVar7;
  *(byte *)(unaff_x20 + _DAT_113074aa8) = (byte)((ulong)param_2 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_113074ab0) = (byte)((ulong)param_2 >> 0x10) & 1;
  puVar6 = auStack_60;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  func_0x0001043b312c(param_1,param_2);
  return puVar6;
}



/* Entry: 1043b2eb4; end: 1043b2eb7; -[SCSnapDocLoadedStatus copyWithZone:] */

void FUN_1043b2eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b2eb8; end: 1043b2faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b2eb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1faaa0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x53495f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53495f414944454d,0xef444544414f4c5f);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1faac0);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1043b2fb0; end: 1043b2fff; -[SCSnapDocLoadedStatus encodeWithCoder:] */

void FUN_1043b2fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1043b2eb8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043b3000; end: 1043b303f;  */

undefined8 FUN_1043b3000(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043b313c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b3040; end: 1043b307b; -[SCSnapDocLoadedStatus initWithCoder:] */

undefined8 FUN_1043b3040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1043b313c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1043b307c; end: 1043b309f; -[SCSnapDocLoadedStatus description] */

void FUN_1043b307c(void)

{
  FUN_1043b32c8();
  func_0x0001043b312c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b30a0; end: 1043b311b; -[SCSnapDocLoadedStatus init] */

void FUN_1043b30a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapDocServicesDataModel/SCSnapDocLoadedStatusWrapper.swift",0x3d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b30e8);
  (*pcVar1)();
}



/* Entry: 1043b311c; end: 1043b313b; -[SCSnapDocLoadedStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b311c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074aa0));
  return;
}



/* Entry: 1043b313c; end: 1043b32c7;  */

undefined8 FUN_1043b313c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1faaa0);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043b2c18(0);
    puVar3 = &uStack_88;
    _swift_dynamicCast(puVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_88;
    if ((int)puVar3 == 0) {
      uVar1 = 0;
    }
  }
  uVar4 = 0x53495f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53495f414944454d,0xef444544414f4c5f);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1faac0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  func_0x00010c0169e0();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1043b32c8; end: 1043b3387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043b32c8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(param_1 + _DAT_113074aa0);
  if (lVar5 == 0) {
    uVar1 = 0;
    uVar4 = 2;
  }
  else {
    if (*(long *)(lVar5 + _DAT_113074a68) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar5 + _DAT_113074a68) + _DAT_113074a38);
      _objc_retain(uVar4);
    }
    uVar1 = (uint)*(byte *)(lVar5 + _DAT_113074a70);
  }
  uVar2 = 0x100;
  if (*(char *)(param_1 + _DAT_113074aa8) == '\0') {
    uVar2 = 0;
  }
  uVar3 = 0x10000;
  if (*(char *)(param_1 + _DAT_113074ab0) == '\0') {
    uVar3 = 0;
  }
  auVar6._8_4_ = uVar2 | uVar1 | uVar3;
  auVar6._0_8_ = uVar4;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 1043b3388; end: 1043b33a7;  */

void FUN_1043b3388(void)

{
  _objc_opt_self(&PTR_PTR_1129a9fa0);
  return;
}



/* Entry: 1043b33a8; end: 1043b33c7; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b33a8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074ae0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b33c8; end: 1043b33d3; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope contentUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b33c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074ae8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074ae8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b33d4; end: 1043b33df; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b33d4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113074af0))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113074af0);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b33e0; end: 1043b33eb; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope iv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b33e0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113074af8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113074af8);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b33ec; end: 1043b345b;  */

void FUN_1043b33ec(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b345c; end: 1043b3467; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope dreamsPackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b345c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074b00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074b00);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b3468; end: 1043b3473; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope dreamId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3468(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074b08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074b08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b3474; end: 1043b347f; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope userIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3474(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113074b10);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b3480; end: 1043b348b; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope identityIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3480(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113074b18);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b348c; end: 1043b34db;  */

void FUN_1043b348c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b34dc; end: 1043b34e7; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b34dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074b20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074b20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b34e8; end: 1043b353f;  */

void FUN_1043b34e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b3540; end: 1043b354f; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074b28));
  return;
}



/* Entry: 1043b3550; end: 1043b355f; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope contentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b3550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074b30);
}



/* Entry: 1043b3560; end: 1043b35ef; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope reportCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3560(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074b38);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110764508;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043b35f0; end: 1043b36d3; -[_TtC21SCDreamsFeedbackScope21SCDreamsFeedbackScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b35f0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074ae0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074ae8 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113074af0),
                      ((undefined8 *)(param_1 + _DAT_113074af0))[1]);
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113074af8),
                      ((undefined8 *)(param_1 + _DAT_113074af8))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074b00 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074b08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074b10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074b18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074b20 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074b28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074b38 + 8));
  return;
}



/* Entry: 1043b36d4; end: 1043b373b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b36d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100340430();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113074b48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043b373c; end: 1043b3787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b373c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074b48) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b3788; end: 1043b3a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043b3788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    long param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *aplStack_88 [5];
  
  lVar2 = param_1;
  func_0x000100335644();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113074ae0) = param_1;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074ae8);
  *puVar5 = param_2;
  puVar5[1] = param_3;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074af0);
  *puVar5 = param_4;
  puVar5[1] = param_5;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074af8);
  *puVar5 = param_6;
  puVar5[1] = param_7;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074b00);
  *puVar5 = param_8;
  puVar5[1] = param_9;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074b08);
  *puVar5 = param_10;
  puVar5[1] = param_11;
  *(undefined8 *)(lVar3 + _DAT_113074b10) = param_12;
  *(undefined8 *)(lVar3 + _DAT_113074b18) = param_13;
  *(undefined8 *)(lVar3 + _DAT_113074b30) = param_14;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074b20);
  *puVar5 = param_15;
  puVar5[1] = param_16;
  if (param_17 == 0) {
    _swift_bridgeObjectRetain();
    _swift_unknownObjectRetain(param_1);
    func_0x000100de78a0(param_4,param_5);
    func_0x000100de78a0(param_6,param_7);
    _swift_bridgeObjectRetain(param_16);
    _swift_bridgeObjectRetain(param_9);
    _swift_bridgeObjectRetain(param_11);
    _swift_bridgeObjectRetain(param_12);
    _swift_bridgeObjectRetain(param_13);
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_unknownObjectRetain(param_1);
    func_0x000100de78a0(param_4,param_5);
    func_0x000100de78a0(param_6,param_7);
    _swift_bridgeObjectRetain(param_16);
    _swift_bridgeObjectRetain(param_9);
    _swift_bridgeObjectRetain(param_11);
    _swift_bridgeObjectRetain(param_12);
    _swift_bridgeObjectRetain(param_13);
    func_0x00010bf51e00(param_17);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(aplStack_88);
    _swift_unknownObjectRelease(param_17);
    uVar4 = 0;
    func_0x000100fa1670(0);
    puVar5 = &uStack_a0;
    _swift_dynamicCast(puVar5,aplStack_88,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar4 = uStack_a0;
    if ((int)puVar5 == 0) {
      uVar4 = 0;
    }
  }
  *(undefined8 *)(lVar3 + _DAT_113074b28) = uVar4;
  puVar5 = (undefined8 *)(lVar3 + _DAT_113074b38);
  *puVar5 = param_18;
  puVar5[1] = param_19;
  puVar1 = PTR_s_init_1125d9248;
  lStack_98 = lVar3;
  lStack_90 = lVar2;
  _swift_retain();
  plVar6 = &lStack_98;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_88[0] = plVar6;
  func_0x00010008a7c8(&uStack_a0,aplStack_88);
  func_0x000100083b20(aplStack_88);
  _swift_release(uStack_a0);
  _swift_unknownObjectRelease(aplStack_88[0]);
  return plVar6;
}



/* Entry: 1043b3a58; end: 1043b3d9f; -[_TtC21SCDreamsFeedbackScope29SCDreamsFeedbackScopeServices buildWithUiContainer:contentUrl:key:iv:dreamsPackId:dreamId:userIds:identityIds:contentType:lensId:snapDoc:reportCompletion:] */

void FUN_1043b3a58(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  undefined8 param_11,long param_12,undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_88;
  undefined *puStack_78;
  
  __Block_copy();
  if (param_4 == 0) {
    lStack_88 = 0;
    puStack_78 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = param_4;
    puStack_78 = param_2;
  }
  _swift_unknownObjectRetain(param_3);
  if (param_5 == 0) {
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_1);
    puStack_a0 = (undefined *)0xf000000000000000;
    lStack_98 = 0;
    puVar5 = param_2;
  }
  else {
    lVar8 = param_5;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_1);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar5 = param_2;
    _objc_release(lVar8);
    puStack_a0 = param_2;
    lStack_98 = param_5;
  }
  if (param_6 == 0) {
    puStack_b0 = (undefined *)0xf000000000000000;
    lStack_a8 = 0;
    puVar9 = puVar5;
    puVar5 = puStack_b0;
  }
  else {
    lStack_a8 = param_6;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar9 = puVar5;
    _objc_release(param_6);
  }
  if (param_7 == 0) {
    lStack_b8 = 0;
    puVar2 = (undefined *)0x0;
    puVar3 = puVar9;
  }
  else {
    lStack_b8 = param_7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar3 = puVar9;
    _objc_release(param_7);
    puVar2 = puVar9;
  }
  if (param_8 == 0) {
    lVar8 = 0;
    puVar1 = (undefined *)0x0;
    puVar9 = puVar3;
    puVar3 = PTR___sSSN_11034da80;
  }
  else {
    lVar8 = param_8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar9 = puVar3;
    _objc_release(param_8);
    puVar1 = puVar3;
    puVar3 = PTR___sSSN_11034da80;
  }
  if (param_9 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_9;
    PTR___sSSN_11034da80 = puVar3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_9);
    puVar9 = puVar3;
    puVar3 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar3;
  if (param_10 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_10);
    puVar9 = puVar3;
  }
  if (param_12 == 0) {
    lVar10 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar10 = param_12;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_12);
  }
  puVar3 = &UNK_1107644f0;
  _swift_allocObject(&UNK_1107644f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_14;
  uVar4 = param_3;
  FUN_1043b3788(param_3,lStack_88,puStack_78,lStack_98,puStack_a0,lStack_a8,puVar5,lStack_b8,puVar2,
                lVar8,puVar1,lVar6,lVar7,param_11,lVar10,puVar9,param_13,FUN_1043b3e48,puVar3);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(puVar2);
  func_0x0001000b44c0(lStack_a8,puVar5);
  func_0x0001000b44c0(lStack_98,puStack_a0);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_13);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(puStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1043b3da0; end: 1043b3da3;  */

void FUN_1043b3da0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b3da4; end: 1043b3dd7;  */

void FUN_1043b3da4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b3dd8; end: 1043b3df7; -[_TtC21SCDreamsFeedbackScope29SCDreamsFeedbackScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074b48));
  return;
}



/* Entry: 1043b3df8; end: 1043b3e47;  */

void FUN_1043b3df8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000113074ba0 != 0) {
    return;
  }
  puVar1 = &UNK_1107644d0;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000113074ba0 = param_1;
  return;
}



/* Entry: 1043b3e48; end: 1043b3e73;  */

void FUN_1043b3e48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001043b3e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1043b3e74; end: 1043b3ebb; -[_TtC27SCGenAIDreamsCrossSellScope27SCGenAIDreamsCrossSellScope crossSellDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3e74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074ba8;
  _swift_beginAccess(param_1 + _DAT_113074ba8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b3ebc; end: 1043b3f13; -[_TtC27SCGenAIDreamsCrossSellScope27SCGenAIDreamsCrossSellScope setCrossSellDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074ba8;
  _swift_beginAccess(param_1 + _DAT_113074ba8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b3f14; end: 1043b3f3f; -[_TtC27SCGenAIDreamsCrossSellScope27SCGenAIDreamsCrossSellScope init] */

void FUN_1043b3f14(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenAIDreamsCrossSellScope.SCGenAIDreamsCrossSellScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b3f40);
  (*pcVar1)();
}



/* Entry: 1043b3f40; end: 1043b3f4f; -[_TtC27SCGenAIDreamsCrossSellScope27SCGenAIDreamsCrossSellScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043b3f40(long param_1)

{
  param_1 = param_1 + _DAT_113074ba8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043b3f50; end: 1043b3f73;  */

undefined8 FUN_1043b3f50(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043b3f74; end: 1043b3fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3f74(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100381760();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113074bb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043b3fe0; end: 1043b3fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3fe0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100381760();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074bb8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043b3fe8; end: 1043b4033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b3fe8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074bb8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b4034; end: 1043b40ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043b4034(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  func_0x00010038076c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  lVar1 = _DAT_113074ba8;
  _swift_unknownObjectWeakInit(lVar3 + _DAT_113074ba8,0);
  _swift_beginAccess(lVar3 + lVar1,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar3 + lVar1,param_1);
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  aplStack_80[0] = plVar4;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar4;
}



/* Entry: 1043b4100; end: 1043b415b; -[_TtC27SCGenAIDreamsCrossSellScope35SCGenAIDreamsCrossSellScopeServices buildWithDelegate:] */

void FUN_1043b4100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043b4034(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b415c; end: 1043b4187; -[_TtC27SCGenAIDreamsCrossSellScope35SCGenAIDreamsCrossSellScopeServices init] */

void FUN_1043b415c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenAIDreamsCrossSellScope.SCGenAIDreamsCrossSellScopeServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b4188);
  (*pcVar1)();
}



/* Entry: 1043b4188; end: 1043b418b;  */

void FUN_1043b4188(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b418c; end: 1043b41bf;  */

void FUN_1043b418c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b41c0; end: 1043b41e3; -[_TtC27SCGenAIDreamsCrossSellScope35SCGenAIDreamsCrossSellScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b41c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074bb8));
  return;
}



/* Entry: 1043b41e4; end: 1043b4203; -[_TtC28SCGenAIDreamsOnboardingScope28SCGenAIDreamsOnboardingScope uiContaner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b41e4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b4204; end: 1043b4223; -[_TtC28SCGenAIDreamsOnboardingScope28SCGenAIDreamsOnboardingScope oneShotUIContaner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4204(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074c18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b4224; end: 1043b426b; -[_TtC28SCGenAIDreamsOnboardingScope28SCGenAIDreamsOnboardingScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4224(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074c20;
  _swift_beginAccess(param_1 + _DAT_113074c20,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


