/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103dbfba0; end: 103dbfba3;  */

void FUN_103dbfba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 103dbfba4; end: 103dbfc23;  */

void FUN_103dbfba4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 103dbfc24; end: 103dbfc2f;  */

void FUN_103dbfc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7c2e44);
  return;
}



/* Entry: 103dbfc30; end: 103dbfd47;  */

void FUN_103dbfc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _objc_release();
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 103dbfd48; end: 103dbfd83;  */

void FUN_103dbfd48(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dbfd84; end: 103dbff6b;  */

void FUN_103dbfd84(void)

{
  func_0x0001008f5a84();
  return;
}



/* Entry: 103dbff6c; end: 103dbffef;  */

void FUN_103dbff6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _objc_release();
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 103dbfff0; end: 103dc00f7;  */

void FUN_103dbfff0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  pcStack_60 = FUN_103dc00f8;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100a47ee4;
  puStack_68 = &UNK_110710fa0;
  __Block_copy(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar3 = &UNK_110710fd8;
  _swift_allocObject(&UNK_110710fd8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_60 = FUN_103dc0240;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ba5314;
  puStack_68 = &UNK_110710ff0;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c42c14(uVar5);
  __Block_release(ppuVar4);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 103dc00f8; end: 103dc013f;  */

void FUN_103dc00f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ada78;
  _objc_allocWithZone();
  func_0x000107c47f70();
  uVar2 = 0;
  func_0x000103dc03a8();
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 103dc0140; end: 103dc015b;  */

void FUN_103dc0140(long param_1,long param_2)

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



/* Entry: 103dc015c; end: 103dc023f;  */

void FUN_103dc015c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x28) = param_1;
      _swift_bridgeObjectRelease(uVar1);
      lVar3 = *(long *)(param_2 + 0x10);
      _swift_bridgeObjectRetain(param_1);
      func_0x000107c3ffac();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x000107c5c734();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar2 != 0) {
        __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
                  (param_1,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c4fc30(lVar2);
        func_0x000107c615e8(lVar2);
        _objc_release(param_1);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103dc0240; end: 103dc0247;  */

void FUN_103dc0240(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x20) & 1) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = param_1;
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = *(long *)(lVar1 + 0x10);
      _swift_bridgeObjectRetain(param_1);
      func_0x000107c3ffac();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x000107c5c734();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar3 != 0) {
        __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
                  (param_1,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c4fc30(lVar3);
        func_0x000107c615e8(lVar3);
        _objc_release(param_1);
      }
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103dc0248; end: 103dc030f;  */

undefined8 FUN_103dc0248(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(lVar3);
    func_0x000107c3ffac();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar1 == 0) {
      _swift_bridgeObjectRelease(lVar3);
    }
    else {
      lVar4 = lVar3;
      __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
                (lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450);
      _swift_bridgeObjectRelease(lVar3);
      func_0x000107c5d358(lVar1);
      func_0x000107c615e8(lVar1);
      _objc_release(lVar4);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return 0;
}



/* Entry: 103dc0310; end: 103dc0343;  */

void FUN_103dc0310(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dc0344; end: 103dc0387;  */

void FUN_103dc0344(void)

{
  FUN_103dbfff0();
  return;
}



/* Entry: 103dc0388; end: 103dc03eb;  */

void FUN_103dc0388(void)

{
  _objc_opt_self(&PTR_PTR_11300b508);
  return;
}



/* Entry: 103dc03ec; end: 103dc03f3;  */

void FUN_103dc03ec(long param_1,long param_2)

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



/* Entry: 103dc03f4; end: 103dc04f7;  */

void FUN_103dc03f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _objc_release();
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103dc04f8; end: 103dc052b;  */

void FUN_103dc04f8(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dc052c; end: 103dc0633;  */

void FUN_103dc052c(void)

{
  func_0x0001009d4298();
  return;
}



/* Entry: 103dc0634; end: 103dc0637;  */

void FUN_103dc0634(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93a50;
  _swift_getWitnessTable(&UNK_10dc93a50,&UNK_1107111d0);
  puRam000000011300b6c0 = puVar1;
  return;
}



/* Entry: 103dc0638; end: 103dc06a3;  */

void FUN_103dc0638(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93a50;
  _swift_getWitnessTable(&UNK_10dc93a50,&UNK_1107111d0);
  puRam000000011300b6c0 = puVar1;
  return;
}



/* Entry: 103dc06a4; end: 103dc06a7;  */

void FUN_103dc06a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93af8;
  _swift_getWitnessTable(&UNK_10dc93af8,&UNK_110711260);
  puRam000000011300b6d8 = puVar1;
  return;
}



/* Entry: 103dc06a8; end: 103dc0713;  */

void FUN_103dc06a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93af8;
  _swift_getWitnessTable(&UNK_10dc93af8,&UNK_110711260);
  puRam000000011300b6d8 = puVar1;
  return;
}



/* Entry: 103dc0714; end: 103dc0797;  */

void FUN_103dc0714(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103dc0798; end: 103dc079b;  */

void FUN_103dc0798(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93b68;
  _swift_getWitnessTable(&UNK_10dc93b68,&UNK_110711260);
  puRam000000011300b6f0 = puVar1;
  return;
}



/* Entry: 103dc079c; end: 103dc07db;  */

void FUN_103dc079c(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93b68;
  _swift_getWitnessTable(&UNK_10dc93b68,&UNK_110711260);
  puRam000000011300b6f0 = puVar1;
  return;
}



/* Entry: 103dc07dc; end: 103dc07df;  */

void FUN_103dc07dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93b20;
  _swift_getWitnessTable(&UNK_10dc93b20,&UNK_110711260);
  puRam000000011300b6f8 = puVar1;
  return;
}



/* Entry: 103dc07e0; end: 103dc081f;  */

void FUN_103dc07e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93b20;
  _swift_getWitnessTable(&UNK_10dc93b20,&UNK_110711260);
  puRam000000011300b6f8 = puVar1;
  return;
}



/* Entry: 103dc0820; end: 103dc09b7;  */

void FUN_103dc0820(void)

{
  return;
}



/* Entry: 103dc09b8; end: 103dc0a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc09b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11300b730) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dc0a04; end: 103dc0a63; -[_TtC53SCComposerActiveUserSessionImageLoadersPluginRegistry57SCComposerActiveUserSessionImageLoadersPluginSaberService buildSaberPlugins] */

void FUN_103dc0a04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100be871c();
  _objc_release(param_1);
  uVar2 = 0x112df9008;
  func_0x0001000285a8(0x112df9008,&UNK_10dc93ca0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103dc0a64; end: 103dc0ac3; -[_TtC53SCComposerActiveUserSessionImageLoadersPluginRegistry57SCComposerActiveUserSessionImageLoadersPluginSaberService init] */

void FUN_103dc0a64(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCComposerActiveUserSessionImageLoadersPluginRegistry.SCComposerActiveUserSessionImageLoadersPluginSaberService"
             ,0x6f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc0a90);
  (*pcVar1)();
}



/* Entry: 103dc0ac4; end: 103dc0ae3; -[_TtC53SCComposerActiveUserSessionImageLoadersPluginRegistry57SCComposerActiveUserSessionImageLoadersPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc0ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300b730));
  return;
}



/* Entry: 103dc0ae4; end: 103dc0b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc0ae4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103dc0ed8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11300b768) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103dc0b50; end: 103dc0bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc0b50(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11300b768) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dc0bbc; end: 103dc0c1b; -[_TtC58BitmojiCameraPermissionRequestScopedFactoryServiceProvider46SCBitmojiCameraPermissionRequestScopedServices init] */

void FUN_103dc0bbc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BitmojiCameraPermissionRequestScopedFactoryServiceProvider.SCBitmojiCameraPermissionRequestScopedServices"
             ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc0be8);
  (*pcVar1)();
}



/* Entry: 103dc0c1c; end: 103dc0c2b; -[_TtC58BitmojiCameraPermissionRequestScopedFactoryServiceProvider46SCBitmojiCameraPermissionRequestScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc0c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300b768));
  return;
}



/* Entry: 103dc0c2c; end: 103dc0c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc0c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107114b8;
  _swift_allocObject(&UNK_1107114b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_retain(param_2);
  FUN_103dc513c(FUN_103dc0f70,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103dc0c98; end: 103dc0d33;  */

void FUN_103dc0c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  _swift_beginAccess(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1107113c8;
  uVar1 = auStack_60[0];
  _objc_retain();
  _swift_release(lStack_48);
  _swift_unknownObjectRelease(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1107113c8;
  return;
}



/* Entry: 103dc0d34; end: 103dc0d6b;  */

void FUN_103dc0d34(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103dc0d6c; end: 103dc0d73;  */

undefined8 FUN_103dc0d6c(void)

{
  return 0x1b;
}



/* Entry: 103dc0d74; end: 103dc0ea7;  */

void FUN_103dc0d74(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  _objc_retain();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  _objc_release(uVar2);
  puVar1 = &UNK_1107114e0;
  _swift_allocObject(&UNK_1107114e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  _swift_allocObject();
  pcVar3 = FUN_103dc0f48;
  func_0x00010058fa64(FUN_103dc0f48,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103dc0ea8; end: 103dc0ed7;  */

undefined ** FUN_103dc0ea8(void)

{
  return &PTR_DAT_1130667d8;
}



/* Entry: 103dc0ed8; end: 103dc0ef7;  */

void FUN_103dc0ed8(void)

{
  _objc_opt_self(&PTR_PTR_11294b4f8);
  return;
}



/* Entry: 103dc0ef8; end: 103dc0f47;  */

undefined1  [16] FUN_103dc0ef8(void)

{
  return ZEXT816(0x110711418);
}



/* Entry: 103dc0f48; end: 103dc0f6f;  */

void FUN_103dc0f48(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103dc0f70; end: 103dc0f73;  */

void FUN_103dc0f70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103dc0f74; end: 103dc123f;  */

void FUN_103dc0f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x11300b7d0,&UNK_10dc93f30);
  puVar1 = &UNK_110711520;
  _swift_allocObject(&UNK_110711520,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_11;
  *(undefined8 *)(puVar1 + 0x28) = param_14;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_13;
  *(undefined8 *)(puVar1 + 0x48) = param_12;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_1;
  *(undefined8 *)(puVar1 + 0x68) = param_2;
  *(undefined8 *)(puVar1 + 0x70) = param_3;
  *(undefined8 *)(puVar1 + 0x78) = param_6;
  _swift_retain(param_4);
  _swift_retain(param_5);
  _swift_retain(param_11);
  _swift_retain(param_14);
  _swift_retain(param_9);
  _swift_retain(param_10);
  _swift_retain(param_13);
  _swift_retain(param_12);
  _swift_retain(param_7);
  _swift_retain(param_8);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_6);
  func_0x0001000823a8(FUN_103dc1240,puVar1);
  return;
}



/* Entry: 103dc1240; end: 103dc127b;  */

void FUN_103dc1240(void)

{
  long unaff_x20;
  
  func_0x000103dc10c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103dc127c; end: 103dc128b;  */

undefined1  [16] FUN_103dc127c(void)

{
  return ZEXT816(0x110711548);
}



/* Entry: 103dc128c; end: 103dc16e3;  */

void FUN_103dc128c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x11300b7e0,&UNK_10dc93f88);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103dc6228();
  func_0x000100082720("SCCameraBIPAScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_103dc62b4();
  func_0x000100082720("SCCameraBIPAScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103dc0d34;
  func_0x0001000823a8(FUN_103dc0d34,0);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopedServicesCleanupRelayServiceProvider",
                      0x49,2);
  puVar5 = puVar2;
  FUN_103dc60dc();
  func_0x000100082720("BitmojiCameraPermissionRequestScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x11300b7e8,&UNK_10dc93fa0);
  puVar6 = &UNK_110711590;
  _swift_allocObject(&UNK_110711590,0x90,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_14;
  *(undefined8 *)(puVar6 + 0x78) = param_15;
  *(undefined8 *)(puVar6 + 0x80) = param_16;
  *(undefined8 **)(puVar6 + 0x88) = puVar3;
  _swift_retain(puVar1);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(param_5);
  _swift_retain(param_6);
  _swift_retain(param_7);
  _swift_retain(param_8);
  _swift_retain(param_9);
  _swift_retain(param_10);
  _swift_retain(param_11);
  _swift_retain(param_12);
  _swift_retain(param_13);
  _swift_retain(param_14);
  _swift_retain(param_15);
  _swift_retain(param_16);
  _swift_retain(puVar3);
  uVar10 = 0x103dc17b8;
  func_0x0001000823a8(0x103dc17b8,puVar6);
  func_0x000100082720("SCBitmojiCameraPermissionRequestEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x11300b7f0,&UNK_10dc93f90);
  puVar6 = &UNK_1107115b8;
  _swift_allocObject(&UNK_1107115b8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  _swift_retain(puVar1);
  _swift_retain(puVar5);
  _swift_retain(uVar10);
  _swift_retain(pcVar4);
  pcVar7 = FUN_103dc17fc;
  func_0x0001000823a8(FUN_103dc17fc,puVar6);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x11300b770,&UNK_10dc93cc0);
  _swift_retain(pcVar7);
  uVar8 = 0x103dc1808;
  func_0x0001000823a8(0x103dc1808,pcVar7);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopeInitializationServiceProvider",0x42,2);
  func_0x0001000285a8(0x11300b760,&UNK_10dc93cb0);
  _swift_retain(uVar8);
  uVar9 = 0x103dc1810;
  func_0x0001000823a8(0x103dc1810,uVar8);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopedServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1107115e0;
  _swift_allocObject(&UNK_1107115e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  _swift_retain(pcVar4);
  uVar9 = 0x103dc1818;
  func_0x0001000823a8(0x103dc1818,puVar6);
  _swift_release(puVar1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release(pcVar4);
  _swift_release(puVar5);
  _swift_release(uVar10);
  _swift_release(pcVar7);
  _swift_release(uVar8);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopeEntryPointProvider",0x37,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103dc16e4; end: 103dc17fb;  */

void FUN_103dc16e4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103dc17fc; end: 103dc181f;  */

void FUN_103dc17fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103dc2cec(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCBitmojiCameraPermissionRequestScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dc1820; end: 103dc2a7b;  */

void FUN_103dc1820(long *param_1,long param_2)

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
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  FUN_103dc2c3c();
  _swift_allocObject();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  func_0x0001000285a8(0x112ea2ce8,&UNK_10db185d0);
  _objc_allocWithZone();
  uVar1 = uStack_78;
  _objc_retain();
  uVar2 = uStack_80;
  _objc_retain();
  uVar3 = uStack_88;
  _objc_retain();
  uVar4 = uStack_90;
  _objc_retain();
  uVar5 = uStack_98;
  _objc_retain();
  uVar6 = uStack_a0;
  _objc_retain();
  uVar7 = uStack_a8;
  _objc_retain();
  uVar8 = uStack_b0;
  _objc_retain();
  uVar9 = uStack_b8;
  _objc_retain();
  uVar10 = uStack_c0;
  _objc_retain();
  uVar11 = uStack_c8;
  _objc_retain();
  uVar12 = uStack_d0;
  _objc_retain(uStack_d0);
  uVar13 = uStack_d8;
  _objc_retain(uStack_d8);
  uVar14 = uStack_e0;
  _objc_retain();
  uVar17 = uStack_e8;
  _swift_retain(uStack_e8);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  _objc_allocWithZone();
  func_0x000107c4907c();
  _objc_release(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar15;
  puVar15 = PTR_PTR_1126ada88;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  _objc_retain();
  uVar16 = auStack_70[0];
  _objc_retain();
  uVar17 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1b90d0);
  func_0x000107c5a49c(puVar15);
  _objc_release(puVar15);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain(puVar15);
  uVar17 = 0xd00000000000002f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010effcdc0);
  func_0x000107c5a49c(puVar15);
  _objc_release(puVar15);
  _objc_release(uVar1);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar15);
  _objc_release(puVar15);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(puVar15);
  _objc_release(puVar15);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0x6553726567676f6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar15);
  _objc_release(puVar15);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010ef3dae0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010ef3dba0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010efbb3d0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar10);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_retain();
  _objc_retain();
  uVar17 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010ef851d0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_retain(uVar13);
  _objc_retain(uVar19);
  uVar17 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010ef1a2d0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar13);
  _objc_release(uVar17);
  _objc_retain(uVar14);
  _objc_retain(uVar19);
  uVar17 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f0e84c0);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar14);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain();
  _objc_retain();
  uVar18 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f0e8560);
  func_0x000107c5a49c(uVar19);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar18);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  _objc_release(uVar16);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _swift_release(uStack_e8);
  *param_1 = param_2;
  return;
}



/* Entry: 103dc2a7c; end: 103dc2b2f;  */

void FUN_103dc2a7c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x30));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x40));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x48));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x58));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x60));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x68));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x70));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x78));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x80));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 103dc2b30; end: 103dc2b37;  */

undefined8 FUN_103dc2b30(void)

{
  return 0x1b;
}



/* Entry: 103dc2b38; end: 103dc2bbb;  */

void FUN_103dc2b38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  _swift_allocObject();
  _swift_retain_n(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103dc2c7c,param_2,FUN_103dc2c80,param_2,FUN_103dc2ca8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103dc2bbc; end: 103dc2c0b;  */

undefined8 FUN_103dc2bbc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _swift_release(lStack_28);
  return uVar1;
}



/* Entry: 103dc2c0c; end: 103dc2c3b;  */

undefined ** FUN_103dc2c0c(void)

{
  return &PTR_DAT_1130667d8;
}



/* Entry: 103dc2c3c; end: 103dc2c5b;  */

void FUN_103dc2c3c(void)

{
  _objc_opt_self(&PTR_PTR_11300b860);
  return;
}



/* Entry: 103dc2c5c; end: 103dc2c7f;  */

undefined1  [16] FUN_103dc2c5c(void)

{
  return ZEXT816(0x110711638);
}



/* Entry: 103dc2c80; end: 103dc2ca7;  */

void FUN_103dc2c80(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  _swift_release(uStack_18);
  return;
}



/* Entry: 103dc2ca8; end: 103dc2caf;  */

undefined8 FUN_103dc2ca8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _swift_release(lStack_28);
  return uVar1;
}



/* Entry: 103dc2cb0; end: 103dc2ceb;  */

void FUN_103dc2cb0(undefined8 *param_1,undefined8 param_2)

{
  FUN_103dc2cec();
  func_0x0001000a7f38("SCBitmojiCameraPermissionRequestScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103dc2cec; end: 103dc2ed7;  */

void FUN_103dc2cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cf88;
  ppuVar4 = &PTR_DAT_1130667d8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110711688;
  _swift_allocObject(&UNK_110711688,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_retain(param_1);
  _swift_retain(param_2);
  uVar3 = 0x11300b938;
  func_0x0001000285a8(0x11300b938,&UNK_10dc94188);
  func_0x0001000a6ee8(&UNK_110711e70,
                      "BitmojiCameraPermissionRequestScopeGraphBridgeScopeInitializationPluginKey",
                      0x4a,2,FUN_103dc2ed8,puVar2,uVar3,&UNK_110711e70,&PTR_DAT_11300bde8);
  _swift_release(puVar2);
  _swift_retain(param_3);
  func_0x0001000a6ee8(&UNK_110711638,
                      "SCBitmojiCameraPermissionRequestEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_103dc2f8c,param_3,uVar3,&UNK_110711638,&PTR_DAT_11300b7f8);
  _swift_release(param_3);
  puVar2 = &UNK_1107116b0;
  _swift_allocObject(&UNK_1107116b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _swift_retain(param_1);
  _swift_retain(param_4);
  func_0x0001000a6ee8(&UNK_110711458,
                      "SCBitmojiCameraPermissionRequestScopedServicesScopeInitializationPluginKey",
                      0x4a,2,FUN_103dc303c,puVar2,uVar3,&UNK_110711458,&PTR_DAT_11300b778);
  _swift_release(puVar2);
  uVar3 = 0x11300b940;
  func_0x0001000285a8(0x11300b940,&UNK_10dc94190);
  _swift_allocObject();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103dc2ed8; end: 103dc2f17;  */

void FUN_103dc2ed8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103dc635c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiCameraPermissionRequestScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dc2f18; end: 103dc2f8b;  */

void FUN_103dc2f18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  _swift_retain(param_3);
  uVar1 = 0x103dc3078;
  func_0x0001000823a8(0x103dc3078,param_3);
  func_0x000100082720("SCBitmojiCameraPermissionRequestEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dc2f8c; end: 103dc2f93;  */

void FUN_103dc2f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  _swift_retain();
  uVar1 = 0x103dc3078;
  func_0x0001000823a8();
  func_0x000100082720("SCBitmojiCameraPermissionRequestEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dc2f94; end: 103dc303b;  */

void FUN_103dc2f94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107116d8;
  _swift_allocObject(&UNK_1107116d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _swift_retain(param_3);
  _swift_retain(param_4);
  pcVar2 = FUN_103dc3070;
  func_0x0001000823a8(FUN_103dc3070,puVar1);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103dc303c; end: 103dc3043;  */

void FUN_103dc303c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1107116d8;
  _swift_allocObject(&UNK_1107116d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  pcVar4 = FUN_103dc3070;
  func_0x0001000823a8(FUN_103dc3070,puVar3);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103dc3044; end: 103dc306f;  */

void FUN_103dc3044(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103dc3070; end: 103dc307f;  */

void FUN_103dc3070(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  _objc_retain();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  _objc_release(uVar2);
  puVar1 = &UNK_1107114e0;
  _swift_allocObject(&UNK_1107114e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  _swift_allocObject();
  pcVar3 = FUN_103dc0f48;
  func_0x00010058fa64(FUN_103dc0f48,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103dc3080; end: 103dc30cf;  */

void FUN_103dc3080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 103dc30d0; end: 103dc311b;  */

void FUN_103dc30d0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dc311c; end: 103dc32c7;  */

void FUN_103dc311c(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar4 = 0;
  func_0x0001000a2bc4();
  uVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_initStaticObject();
  uVar6 = 0;
  func_0x000100243b1c();
  uVar7 = 0;
  func_0x0001002d8860();
  uVar12 = 0;
  func_0x0001000285a8(0x11300ba68);
  lVar8 = 3;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar9 = uVar4;
  func_0x0001000a7158();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc32b4);
    (*pcVar3)();
  }
  lVar1 = lVar8 + 0x40;
  uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar9 & 0x3f);
  *(ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 8) = uVar4;
  *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 8) = uVar5;
  lVar11 = *(long *)(lVar8 + 0x10);
  if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc32b8);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = lVar11 + 1;
  uVar9 = uVar6;
  func_0x0001000a7158();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc32bc);
    (*pcVar3)();
  }
  uVar4 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar4) = *(ulong *)(lVar1 + uVar4) | 1L << (uVar9 & 0x3f);
  *(ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 8) = uVar6;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(*(long *)(lVar8 + 0x38) + uVar9 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (!SCARRY8(lVar11 + 1,1)) {
    *(long *)(lVar8 + 0x10) = lVar11 + 2;
    uVar9 = uVar7;
    func_0x0001000a7158();
    if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc32c4);
      (*pcVar3)();
    }
    uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = *(ulong *)(lVar1 + uVar12) | 1L << (uVar9 & 0x3f);
    *(ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 8) = uVar7;
    *(undefined **)(*(long *)(lVar8 + 0x38) + uVar9 * 8) = puVar2;
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(puVar2);
    _swift_release(uVar5);
    if (!SCARRY8(*(long *)(lVar8 + 0x10),1)) {
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
      lRam0000000113812108 = lVar8;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc32c8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc32c0);
  (*pcVar3)();
}



/* Entry: 103dc32c8; end: 103dc32d7;  */

undefined1  [16] FUN_103dc32c8(void)

{
  return ZEXT816(0x110711780);
}



/* Entry: 103dc32d8; end: 103dc33ff;  */

void FUN_103dc32d8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = PTR_PTR_1126a6e20;
  _objc_allocWithZone();
  func_0x000107c453e4();
  lVar3 = 0;
  func_0x000103dc4bbc();
  _swift_allocObject();
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar4 = PTR_PTR_1126ae790;
  _objc_allocWithZone();
  uVar5 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1b9310);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x000107c470d0();
  _objc_release(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(lVar3 + 0x10) = puVar2;
  *(undefined **)(lVar3 + 0x18) = puVar4;
  *param_1 = lVar3;
  return;
}



/* Entry: 103dc3400; end: 103dc347b;  */

undefined8
FUN_103dc3400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_103dc347c(param_1,param_2,param_3,param_4,param_5,param_6);
  return unaff_x20;
}



/* Entry: 103dc347c; end: 103dc3d4f;  */

long FUN_103dc347c(double param_1,undefined *param_2,undefined8 param_3,undefined8 *param_4,
                  code *param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined1 auStack_160 [8];
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar5 = 0;
  uStack_108 = param_3;
  puStack_100 = param_2;
  pcStack_f0 = param_5;
  uStack_e8 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_128 = *(long *)(lVar5 + -8);
  lStack_120 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_128 + 0x40));
  lVar5 = 0;
  puStack_130 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A4TimeVMa();
  lStack_150 = *(long *)(lVar5 + -8);
  lStack_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_150 + 0x40));
  lVar14 = (long)(auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_158 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar5 = 0;
  lStack_138 = lVar14;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar16 = *(long *)(lVar5 + -8);
  lStack_110 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar12 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar19 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_148 = *(long *)(lVar6 + -8);
  lStack_140 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_148 + 0x40));
  lVar6 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  func_0x0001000295c4();
  uStack_118 = uVar7;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6);
  puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4ac68;
  FUN_103dc47dc(0x112d4ac68,puVar12,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar8 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar9 = 0x112d4ac78;
  func_0x000103dc481c(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar19,&puStack_c0,uVar8,uVar9,lVar5,uVar7);
  (**(code **)(lVar16 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_110);
  uVar7 = 0xd00000000000001c;
  lStack_110 = lVar6;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001c,0x800000010f1b92f0,lVar6,lVar19,lVar14,0);
  puVar20 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar20 = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined2 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x4a) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x0001000285a8(0x11300b948,&UNK_10dc94210);
  _swift_allocObject();
  pcVar4 = FUN_103dc32d8;
  func_0x0001000bdd8c(FUN_103dc32d8,0);
  *(code **)(unaff_x20 + 0x50) = pcVar4;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 **)(unaff_x20 + 0x18) = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRelease(uVar7);
  if (param_1 < 0.0) {
    param_1 = 86400.0;
  }
  *(double *)(unaff_x20 + 0x20) = param_1;
  uVar7 = *puVar20;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar20 = pcStack_f0;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_e8;
  _swift_retain();
  FUN_103dc47a8(uVar7,uVar8);
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_108;
  puStack_c0 = puStack_100;
  uVar7 = 0x11300ba70;
  func_0x0001000285a8(0x11300ba70,&UNK_10dc94320);
  ppuVar10 = &puStack_c0;
  __sSS10describingSSx_tclufC();
  *(undefined ***)(unaff_x20 + 0x58) = ppuVar10;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar7;
  if ((ulong)param_4 >> 0x3e == 0) {
    puVar15 = (undefined8 *)((undefined8 *)((ulong)param_4 & 0xffffffffffffff8))[2];
  }
  else {
    puVar15 = (undefined8 *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      puVar15 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined8 *)0x0) {
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,(ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103dc3d4c);
      (*pcVar4)();
    }
    if (((ulong)param_4 & 0xc000000000000001) == 0) {
      puVar12 = puStack_c0;
      plVar17 = param_4 + 4;
      do {
        lVar5 = *plVar17;
        _swift_beginAccess(lVar5 + 0x10,auStack_90,0,0);
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
        uVar8 = *(undefined8 *)(lVar5 + 0x18);
        uVar1 = *(ulong *)(puVar12 + 0x10);
        uVar2 = *(ulong *)(puVar12 + 0x18);
        puStack_c0 = puVar12;
        _swift_bridgeObjectRetain(uVar8);
        if (uVar2 >> 1 <= uVar1) {
          func_0x000100403514(1 < uVar2,uVar1 + 1,1);
          puVar12 = puStack_c0;
        }
        *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar12 + uVar1 * 0x10 + 0x20) = uVar7;
        *(undefined8 *)(puVar12 + uVar1 * 0x10 + 0x28) = uVar8;
        puVar15 = (undefined8 *)((long)puVar15 + -1);
        plVar17 = plVar17 + 1;
      } while (puVar15 != (undefined8 *)0x0);
    }
    else {
      puVar18 = (undefined8 *)0x0;
      do {
        puVar12 = puStack_c0;
        puVar21 = puVar18;
        FUN_103dc45e8(puVar18,param_4);
        _swift_beginAccess(puVar21 + 2,auStack_90,0,0);
        uVar7 = puVar21[2];
        uVar8 = puVar21[3];
        _swift_bridgeObjectRetain(uVar8);
        _swift_unknownObjectRelease(puVar21);
        uVar1 = *(ulong *)(puVar12 + 0x10);
        puStack_c0 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
        }
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        *(ulong *)(puStack_c0 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_c0 + uVar1 * 0x10 + 0x20) = uVar7;
        *(undefined8 *)(puStack_c0 + uVar1 * 0x10 + 0x28) = uVar8;
        puVar12 = puStack_c0;
      } while (puVar15 != puVar18);
    }
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = puVar12;
  func_0x000100403a6c();
  _swift_bridgeObjectRelease(puVar12);
  *(undefined **)(unaff_x20 + 0x40) = puVar11;
  if ((ulong)param_4 >> 0x3e == 0) {
    puVar15 = (undefined8 *)((undefined8 *)((ulong)param_4 & 0xffffffffffffff8))[2];
    lVar5 = lStack_158;
  }
  else {
    puVar15 = (undefined8 *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      puVar15 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar5 = lStack_158;
  }
  lStack_158 = lVar5;
  if (puVar15 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(param_4);
    uVar7 = uStack_e8;
    (*pcStack_f0)(PTR___swiftEmptyArrayStorage_11034f1c8);
    _swift_release(uVar7);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    _swift_bridgeObjectRelease(uVar7);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    *puVar20 = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    FUN_103dc47a8(uVar7,uVar8);
  }
  else {
    puStack_100 = *(undefined **)(unaff_x20 + 0x10);
    __s8Dispatch0A4TimeV3nowACyFZ(lVar5);
    lVar6 = lStack_138;
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lStack_138,param_1,lVar5);
    pcStack_f0 = *(code **)(lStack_150 + 8);
    (*pcStack_f0)(lVar5,lStack_f8);
    puVar12 = &UNK_1107117a0;
    _swift_allocObject(&UNK_1107117a0,0x18,7);
    _swift_weakInit(puVar12 + 0x10,unaff_x20);
    uStack_a0 = 0x103dc47b8;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uVar22 = 0x42000000;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    puStack_a8 = &UNK_1107117b8;
    ppuVar10 = &puStack_c0;
    puStack_98 = puVar12;
    __Block_copy(ppuVar10);
    _swift_retain(unaff_x20);
    _swift_retain(puVar12);
    lVar14 = lStack_110;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_110);
    puStack_d0 = puVar13;
    uVar7 = 0x112d4af88;
    FUN_103dc47dc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = 0x112d4af98;
    func_0x000103dc481c(0x112d4af98,0x112d4af90,&UNK_10d914100);
    lVar5 = lStack_120;
    puVar3 = puStack_130;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puStack_130,&puStack_d0,uVar8,uVar9,lStack_120,uVar7);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar6,lVar14,puVar3,ppuVar10);
    __Block_release(ppuVar10);
    (**(code **)(lStack_128 + 8))(puVar3,lVar5);
    (**(code **)(lStack_148 + 8))(lVar14,lStack_140);
    (*pcStack_f0)(lVar6,lStack_f8);
    puVar13 = puStack_98;
    _swift_release(puVar12);
    _swift_release(puVar13);
    if ((long)puVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103dc3d50);
      (*pcVar4)();
    }
    puVar20 = (undefined8 *)0x0;
    do {
      if (((ulong)param_4 & 0xc000000000000001) == 0) {
        puVar21 = (undefined8 *)param_4[(long)puVar20 + 4];
        puVar18 = puVar21;
        _swift_retain();
        uVar7 = uVar22;
      }
      else {
        puVar18 = puVar20;
        FUN_103dc45e8();
        puVar21 = puVar18;
        uVar7 = uVar22;
      }
      puVar20 = (undefined8 *)((long)puVar20 + 1);
      func_0x0001000298f0();
      _swift_beginAccess();
      uVar22 = *puVar18;
      uVar8 = puVar21[2];
      uVar9 = puVar21[3];
      puStack_d0 = (undefined *)0xd000000000000010;
      uStack_c8 = 0x800000010f1b9340;
      _objc_retain(uVar22);
      __sSS6appendyySSF(uVar8,uVar9);
      uVar8 = uStack_c8;
      puVar11 = puStack_d0;
      func_0x000100029b28(puStack_d0,uStack_c8);
      _objc_release(uVar22);
      _swift_bridgeObjectRelease(uVar8);
      _CACurrentMediaTime();
      pcVar4 = (code *)puVar21[4];
      uVar8 = puVar21[5];
      puVar12 = &UNK_1107117a0;
      uVar22 = uVar7;
      _swift_allocObject(&UNK_1107117a0,0x18,7);
      _swift_weakInit(puVar12 + 0x10,unaff_x20);
      puVar13 = &UNK_1107117f0;
      _swift_allocObject(&UNK_1107117f0,0x30,7);
      *(undefined8 *)(puVar13 + 0x10) = uVar7;
      *(undefined **)(puVar13 + 0x18) = puVar11;
      *(undefined **)(puVar13 + 0x20) = puVar12;
      *(undefined8 **)(puVar13 + 0x28) = puVar21;
      _swift_retain(uVar8);
      _swift_retain(puVar12);
      _swift_retain(puVar21);
      (*pcVar4)(FUN_103dc4860,puVar13);
      _swift_release(puVar21);
      _swift_release(puVar12);
      _swift_release(uVar8);
      _swift_release(puVar13);
    } while (puVar15 != puVar20);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(uStack_e8);
    _swift_release(unaff_x20);
  }
  return unaff_x20;
}



/* Entry: 103dc3d50; end: 103dc3dab;  */

void FUN_103dc3d50(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    FUN_103dc41d0();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 103dc3dac; end: 103dc412f;  */

void FUN_103dc3dac(double param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  undefined1 auStack_110 [8];
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [56];
  
  lVar5 = 0;
  dVar17 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar6 = (undefined8 *)0x0;
  __s8Dispatch0A3QoSVMa();
  lVar16 = puVar6[-1];
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _CACurrentMediaTime();
  func_0x0001000298f0();
  _swift_beginAccess();
  uVar8 = *puVar7;
  _objc_retain(uVar8);
  func_0x000100069b5c(param_2);
  _objc_release(uVar8);
  _swift_beginAccess(param_3 + 0x10,auStack_a8,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    func_0x0001000d224c(&puStack_b0);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    uVar2 = *(undefined8 *)(param_3 + 0x60);
    uVar13 = *(undefined8 *)(puStack_b0 + 0x10);
    uVar3 = *(undefined8 *)(puStack_b0 + 0x18);
    puVar9 = &UNK_110711818;
    puStack_108 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_100 = lVar5;
    lStack_f8 = lVar14;
    lStack_f0 = lVar16;
    puStack_e8 = puVar6;
    _swift_allocObject(&UNK_110711818,0x40,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar13;
    *(undefined8 *)(puVar9 + 0x18) = uVar8;
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    *(undefined8 *)(puVar9 + 0x28) = uVar12;
    *(undefined8 *)(puVar9 + 0x30) = uVar2;
    *(double *)(puVar9 + 0x38) = dVar17 - param_1;
    pcStack_c0 = FUN_103dc4890;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000f6b44;
    puStack_c8 = &UNK_110711830;
    ppuVar10 = &puStack_e0;
    puStack_b8 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_b8;
    _swift_bridgeObjectRetain_n(uVar2,2);
    _objc_retain(uVar13);
    _swift_bridgeObjectRetain(uVar1);
    _swift_release(puVar9);
    func_0x000107c4e524(uVar3);
    __Block_release(ppuVar10);
    _swift_release(puStack_b0);
    _swift_bridgeObjectRelease(uVar2);
    puVar9 = &UNK_1107117a0;
    _swift_allocObject(&UNK_1107117a0,0x18,7);
    _swift_weakInit(puVar9 + 0x10,param_3);
    puVar11 = &UNK_110711868;
    _swift_allocObject(&UNK_110711868,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar9;
    *(long *)(puVar11 + 0x18) = param_4;
    pcStack_c0 = (code *)0x103dc48a4;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000b0c7c;
    puStack_c8 = &UNK_110711880;
    ppuVar10 = &puStack_e0;
    puStack_b8 = puVar11;
    __Block_copy(ppuVar10);
    _swift_retain(puVar9);
    _swift_retain(param_4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = 0x112d4af88;
    FUN_103dc47dc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar12 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar13 = 0x112d4af98;
    func_0x000103dc481c(0x112d4af98,0x112d4af90,&UNK_10d914100);
    lVar5 = lStack_100;
    puVar4 = puStack_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puStack_108,&puStack_b0,uVar12,uVar13,lStack_100,uVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar15,puVar4,ppuVar10);
    __Block_release(ppuVar10);
    (**(code **)(lStack_f8 + 8))(puVar4,lVar5);
    (**(code **)(lStack_f0 + 8))(lVar15,puStack_e8);
    _swift_release(param_3);
    puVar11 = puStack_b8;
    _swift_release(puVar9);
    _swift_release(puVar11);
  }
  return;
}



/* Entry: 103dc4130; end: 103dc41cf;  */

void FUN_103dc4130(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    _swift_beginAccess(param_1 + 0x40,auStack_60,0x21,0);
    func_0x0001010af1e4(uVar1,uVar2);
    _swift_endAccess(auStack_60);
    _swift_bridgeObjectRelease(uVar2);
    FUN_103dc41d0();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 103dc41d0; end: 103dc457b;  */

/* WARNING: Removing unreachable block (ram,0x000103dc4570) */
/* WARNING: Type propagation algorithm not settling */

void FUN_103dc41d0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  code *pcVar19;
  undefined8 *******pppppppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long alStack_98 [2];
  undefined1 auStack_88 [24];
  
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x40,auStack_88,0,0);
  pbVar16 = *(byte **)(unaff_x20 + 0x40);
  if (*(long *)(pbVar16 + 0x10) == 0) {
    pcVar19 = *(code **)(unaff_x20 + 0x30);
    if (pcVar19 != (code *)0x0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
      _swift_retain(uVar15);
      (*pcVar19)(PTR___swiftEmptyArrayStorage_11034f1c8);
      FUN_103dc47a8(pcVar19,uVar15);
    }
  }
  else {
    if (*(char *)(unaff_x20 + 0x49) != '\x01') {
      return;
    }
    if ((*(byte *)(unaff_x20 + 0x4a) & 1) == 0) {
      uVar13 = 1L << ((ulong)pbVar16[0x20] & 0x3f);
      uVar14 = 0xffffffffffffffff;
      if ((pbVar16[0x20] & 0x3f) < 6) {
        uVar14 = ~(-1L << (uVar13 & 0x3f));
      }
      uVar14 = uVar14 & *(ulong *)(pbVar16 + 0x38);
      _swift_bridgeObjectRetain(pbVar16);
      lVar17 = 0;
      while( true ) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
          uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          puVar1 = (undefined8 *)
                   (*(long *)(pbVar16 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 0x10 +
                   lVar17 * 0x400);
          uVar15 = *puVar1;
          uVar4 = puVar1[1];
          _swift_bridgeObjectRetain(uVar4);
          func_0x0001000d224c(alStack_98);
          lVar8 = alStack_98[0];
          uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
          uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
          uVar3 = *(undefined8 *)(alStack_98[0] + 0x10);
          uVar6 = *(undefined8 *)(alStack_98[0] + 0x18);
          puVar10 = &UNK_1107118b8;
          _swift_allocObject(&UNK_1107118b8,0x38,7);
          *(undefined8 *)(puVar10 + 0x10) = uVar3;
          *(undefined8 *)(puVar10 + 0x18) = uVar15;
          *(undefined8 *)(puVar10 + 0x20) = uVar4;
          *(undefined8 *)(puVar10 + 0x28) = uVar2;
          *(undefined8 *)(puVar10 + 0x30) = uVar5;
          pcStack_a8 = FUN_103dc48fc;
          pppppppuStack_c8 = (undefined8 *******)PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0x42000000;
          puStack_b8 = &UNK_1000f6b44;
          puStack_b0 = &UNK_1107118d0;
          pppppppuVar18 = &pppppppuStack_c8;
          puStack_a0 = puVar10;
          __Block_copy(pppppppuVar18);
          puVar10 = puStack_a0;
          _swift_bridgeObjectRetain_n(uVar5,2);
          _swift_bridgeObjectRetain(uVar4);
          _objc_retain(uVar3);
          _swift_release(puVar10);
          func_0x000107c4e524(uVar6);
          __Block_release(pppppppuVar18);
          _swift_bridgeObjectRelease(uVar4);
          _swift_release(lVar8);
          _swift_bridgeObjectRelease(uVar5);
        }
        bVar9 = SCARRY8(lVar17,1);
        lVar17 = lVar17 + 1;
        if (bVar9) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x103dc4570);
          (*pcVar19)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
        uVar14 = *(ulong *)((long)(pbVar16 + 0x38) + lVar17 * 8);
      }
      _swift_release();
      func_0x0001000ad07c();
      if (((*pbVar16 & 1) == 0) && (func_0x0001005e3364(), (*pbVar16 & 1) == 0)) {
        func_0x000100028eb0();
      }
      *(undefined1 *)(unaff_x20 + 0x4a) = 1;
      pbVar16 = *(byte **)(unaff_x20 + 0x40);
    }
    lVar17 = *(long *)(unaff_x20 + 0x28);
    _swift_bridgeObjectRetain(pbVar16);
    func_0x000101157854(lVar17,pbVar16);
    lVar17 = *(long *)(lVar17 + 0x10);
    _swift_release();
    if (lVar17 != 0) {
      return;
    }
    pcVar19 = *(code **)(unaff_x20 + 0x30);
    if (pcVar19 != (code *)0x0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar17 = *(long *)(unaff_x20 + 0x40);
      pppppppuVar18 = *(undefined8 ********)(lVar17 + 0x10);
      _swift_bridgeObjectRetain(lVar17);
      if (pppppppuVar18 == (undefined8 *******)0x0) {
        func_0x000103dc48ac(pcVar19,uVar15);
        pppppppuVar11 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        _swift_bridgeObjectRetain(lVar17);
        func_0x000103dc48ac(pcVar19,uVar15);
        pppppppuVar11 = pppppppuVar18;
        func_0x00010109b448(pppppppuVar18,0);
        pppppppuVar12 = &pppppppuStack_c8;
        func_0x00010109b930(pppppppuVar12,pppppppuVar11 + 4,pppppppuVar18,lVar17);
        func_0x00010109bac0(pppppppuStack_c8,uStack_c0,puStack_b8,puStack_b0,pcStack_a8);
        if (pppppppuVar12 != pppppppuVar18) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x103dc44d4);
          (*pcVar19)();
        }
      }
      pppppppuStack_c8 = pppppppuVar11;
      func_0x000101b7c750(&pppppppuStack_c8);
      _swift_bridgeObjectRelease(lVar17);
      pppppppuVar18 = pppppppuStack_c8;
      (*pcVar19)(pppppppuStack_c8);
      _swift_release(pppppppuVar18);
      FUN_103dc47a8(pcVar19,uVar15);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar15);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  FUN_103dc47a8(uVar15,uVar2);
  return;
}



/* Entry: 103dc457c; end: 103dc45e7;  */

void FUN_103dc457c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_103dc47a8(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 103dc45e8; end: 103dc478b;  */

ulong FUN_103dc45e8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dc46bc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dc46c0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103dc30fc(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    func_0x000103dc30fc(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x4970756e61656c43,0xeb000000006d6574);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dc478c);
  (*pcVar2)();
}



/* Entry: 103dc478c; end: 103dc47a7;  */

void FUN_103dc478c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103dc5a34();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103dc47a8; end: 103dc47db;  */

void FUN_103dc47a8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103dc47dc; end: 103dc485f;  */

void FUN_103dc47dc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103dc4860; end: 103dc486f;  */

void FUN_103dc4860(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_110 [8];
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [56];
  
  dVar20 = *(double *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar15 = *(long *)(unaff_x20 + 0x28);
  lVar5 = 0;
  dVar19 = dVar20;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar6 = (undefined8 *)0x0;
  __s8Dispatch0A3QoSVMa();
  lVar18 = puVar6[-1];
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _CACurrentMediaTime();
  func_0x0001000298f0();
  _swift_beginAccess();
  uVar8 = *puVar7;
  _objc_retain(uVar8);
  func_0x000100069b5c(uVar13);
  _objc_release(uVar8);
  _swift_beginAccess(lVar9 + 0x10,auStack_a8,0,0);
  lVar9 = lVar9 + 0x10;
  _swift_weakLoadStrong();
  if (lVar9 != 0) {
    func_0x0001000d224c(&puStack_b0);
    uVar13 = *(undefined8 *)(lVar15 + 0x10);
    uVar1 = *(undefined8 *)(lVar15 + 0x18);
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
    uVar2 = *(undefined8 *)(lVar9 + 0x60);
    uVar14 = *(undefined8 *)(puStack_b0 + 0x10);
    uVar3 = *(undefined8 *)(puStack_b0 + 0x18);
    puVar10 = &UNK_110711818;
    puStack_108 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_100 = lVar5;
    lStack_f8 = lVar16;
    lStack_f0 = lVar18;
    puStack_e8 = puVar6;
    _swift_allocObject(&UNK_110711818,0x40,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar14;
    *(undefined8 *)(puVar10 + 0x18) = uVar13;
    *(undefined8 *)(puVar10 + 0x20) = uVar1;
    *(undefined8 *)(puVar10 + 0x28) = uVar8;
    *(undefined8 *)(puVar10 + 0x30) = uVar2;
    *(double *)(puVar10 + 0x38) = dVar19 - dVar20;
    pcStack_c0 = FUN_103dc4890;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000f6b44;
    puStack_c8 = &UNK_110711830;
    ppuVar11 = &puStack_e0;
    puStack_b8 = puVar10;
    __Block_copy(ppuVar11);
    puVar10 = puStack_b8;
    _swift_bridgeObjectRetain_n(uVar2,2);
    _objc_retain(uVar14);
    _swift_bridgeObjectRetain(uVar1);
    _swift_release(puVar10);
    func_0x000107c4e524(uVar3);
    __Block_release(ppuVar11);
    _swift_release(puStack_b0);
    _swift_bridgeObjectRelease(uVar2);
    puVar10 = &UNK_1107117a0;
    _swift_allocObject(&UNK_1107117a0,0x18,7);
    _swift_weakInit(puVar10 + 0x10,lVar9);
    puVar12 = &UNK_110711868;
    _swift_allocObject(&UNK_110711868,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar10;
    *(long *)(puVar12 + 0x18) = lVar15;
    pcStack_c0 = (code *)0x103dc48a4;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000b0c7c;
    puStack_c8 = &UNK_110711880;
    ppuVar11 = &puStack_e0;
    puStack_b8 = puVar12;
    __Block_copy(ppuVar11);
    _swift_retain(puVar10);
    _swift_retain(lVar15);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar13 = 0x112d4af88;
    FUN_103dc47dc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar14 = 0x112d4af98;
    func_0x000103dc481c(0x112d4af98,0x112d4af90,&UNK_10d914100);
    lVar5 = lStack_100;
    puVar4 = puStack_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puStack_108,&puStack_b0,uVar8,uVar14,lStack_100,uVar13);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar17,puVar4,ppuVar11);
    __Block_release(ppuVar11);
    (**(code **)(lStack_f8 + 8))(puVar4,lVar5);
    (**(code **)(lStack_f0 + 8))(lVar17,puStack_e8);
    _swift_release(lVar9);
    puVar12 = puStack_b8;
    _swift_release(puVar10);
    _swift_release(puVar12);
  }
  return;
}



/* Entry: 103dc4870; end: 103dc488f;  */

void FUN_103dc4870(void)

{
  _objc_opt_self(&PTR_PTR_11300bab8);
  return;
}



/* Entry: 103dc4890; end: 103dc48bb;  */

void FUN_103dc4890(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar4);
  func_0x000108b9be68(uVar5,uVar1,uVar2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103dc48bc; end: 103dc48fb;  */

void FUN_103dc48bc(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103dc48fc; end: 103dc4923;  */

void FUN_103dc48fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar4);
  func_0x000108b9c2ac(uVar1,uVar2,uVar3,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103dc4924; end: 103dc495f;  */

undefined8 FUN_103dc4924(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_103dc4960(param_1);
  return unaff_x20;
}



/* Entry: 103dc4960; end: 103dc4a5f;  */

void FUN_103dc4960(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  _objc_allocWithZone();
  uVar3 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1b9310);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x000107c470d0();
  _objc_release(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  return;
}



/* Entry: 103dc4a60; end: 103dc4ad7;  */

void FUN_103dc4a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
  func_0x000108b9be68(param_1,param_2,param_3,param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 103dc4ad8; end: 103dc4b23;  */

void FUN_103dc4ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  func_0x000108b9c0f8(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103dc4b24; end: 103dc4b8f;  */

void FUN_103dc4b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  func_0x000108b9c2ac(param_1,param_2,param_4,1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103dc4b90; end: 103dc4bdb;  */

void FUN_103dc4b90(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


