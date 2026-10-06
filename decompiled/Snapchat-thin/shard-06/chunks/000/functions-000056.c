/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104448d08; end: 104448de7; -[SCOperaMediaItemDescriptor initWithMediaItemIdentifier:mediaType:encKey:encIv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448d08(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113079f80) = param_3;
  *(undefined8 *)(param_1 + _DAT_113079f88) = param_4;
  plVar1 = (long *)(param_1 + _DAT_113079f90);
  *plVar1 = param_5;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113079f98);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 104448de8; end: 104448e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448de8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113079f80) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079f88) = uVar2;
  uVar2 = param_1[2];
  uVar4 = param_1[5];
  uVar3 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079f90);
  puVar1[1] = param_1[3];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079f98);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104448e60; end: 104448e63; -[SCOperaMediaItemDescriptor copyWithZone:] */

void FUN_104448e60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104448e64; end: 104448e7f; -[SCOperaMediaItemDescriptor description] */

void FUN_104448e64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104448e80; end: 104448efb; -[SCOperaMediaItemDescriptor init] */

void FUN_104448e80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaMediaItemDescriptorWrapper.swift",0x3a,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104448ec8);
  (*pcVar1)();
}



/* Entry: 104448efc; end: 104448f4b; -[SCOperaMediaItemDescriptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448efc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113079f80));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113079f90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079f98 + 8))
  ;
  return;
}



/* Entry: 104448f4c; end: 104448f6b;  */

void FUN_104448f4c(void)

{
  _objc_opt_self(&PTR_PTR_1129b5208);
  return;
}



/* Entry: 104448f6c; end: 104449033; -[SCOperaMediaBundleMetadata expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104448f6c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113813628,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104449034; end: 104449043; -[SCOperaMediaBundleMetadata mediaDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104449034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813630);
}



/* Entry: 104449044; end: 104449153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104449044(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  func_0x0001009f0578(param_2,unaff_x20 + _DAT_113813628);
  *(undefined8 *)(unaff_x20 + _DAT_113813630) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_2);
  return puVar1;
}



/* Entry: 104449154; end: 10444925f; -[SCOperaMediaBundleMetadata initWithExpirationDate:mediaDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104449154(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_50 - extraout_x8;
  if (param_4 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_4);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_4 == 0,1);
  func_0x0001009f0578(lVar2,param_2 + _DAT_113813628);
  *(undefined8 *)(param_2 + _DAT_113813630) = param_1;
  plVar4 = &lStack_50;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(lVar2);
  return plVar4;
}



/* Entry: 104449260; end: 1044492eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104449260(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  func_0x0001009f0578(param_1,unaff_x20 + _DAT_113813628);
  lVar1 = 0;
  FUN_10443b3b4();
  *(undefined8 *)(unaff_x20 + _DAT_113813630) = *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14));
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_1044492ec(param_1);
  return puVar2;
}



/* Entry: 1044492ec; end: 104449327;  */

undefined8 FUN_1044492ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10443b3b4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104449328; end: 10444932b; -[SCOperaMediaBundleMetadata copyWithZone:] */

void FUN_104449328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10444932c; end: 1044493c7; -[SCOperaMediaBundleMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444932c(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_10443b3b4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001009f0578(param_1 + _DAT_113813628,puVar2);
  *(undefined8 *)(puVar2 + *(int *)(lVar1 + 0x14)) = *(undefined8 *)(param_1 + _DAT_113813630);
  FUN_1044492ec(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044493c8; end: 10444940f; -[SCOperaMediaBundleMetadata init] */

void FUN_1044493c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaMediaBundleMetadataWrapper.swift",0x3a,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104449410);
  (*pcVar1)();
}



/* Entry: 104449410; end: 10444942b; +[SCOperaMediaBundleMetadataBuilder operaMediaBundleMetadata] */

void FUN_104449410(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444942c; end: 10444946b; +[SCOperaMediaBundleMetadataBuilder operaMediaBundleMetadataWithExistingOperaMediaBundleMetadata:] */

void FUN_10444942c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104449864(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10444946c; end: 104449567; -[SCOperaMediaBundleMetadataBuilder withExpirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444946c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_113079fc8;
  _swift_beginAccess(param_1 + _DAT_113079fc8,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9c6c(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  func_0x0001000d1dcc(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104449568; end: 10444957f; -[SCOperaMediaBundleMetadataBuilder withMediaDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449568(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113079fd0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104449580; end: 10444963f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449580(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079fd0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar5 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  lVar2 = _DAT_113079fc8;
  _swift_beginAccess(unaff_x20 + _DAT_113079fc8,auStack_58,0,0);
  lVar3 = 0;
  FUN_10444993c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  func_0x0001009f0578(unaff_x20 + lVar2,lVar4 + _DAT_113813628);
  *(undefined8 *)(lVar4 + _DAT_113813630) = uVar5;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _objc_msgSendSuper2(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104449640; end: 104449707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449640(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079fd0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar5 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  lVar2 = _DAT_113079fc8;
  _swift_beginAccess(unaff_x20 + _DAT_113079fc8,auStack_58,0,0);
  lVar3 = 0;
  FUN_10444993c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  func_0x0001009f0578(unaff_x20 + lVar2,lVar4 + _DAT_113813628);
  *(undefined8 *)(lVar4 + _DAT_113813630) = uVar5;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _objc_msgSendSuper2(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104449708; end: 10444973b; -[SCOperaMediaBundleMetadataBuilder build] */

void FUN_104449708(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104449580();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10444973c; end: 10444977f; -[SCOperaMediaBundleMetadataBuilder safeBuildAndReturnError:] */

void FUN_10444973c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104449640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104449780; end: 10444980b; -[SCOperaMediaBundleMetadataBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449780(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113079fc8;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1 + lVar2,1,1,lVar4);
  puVar1 = (undefined8 *)(param_1 + _DAT_113079fd0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444980c; end: 10444980f;  */

void FUN_10444980c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104449810; end: 10444981f; -[SCOperaMediaBundleMetadataBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104449810(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113079fc8;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104449820; end: 104449853;  */

void FUN_104449820(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104449854; end: 104449863; -[SCOperaMediaBundleMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104449854(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113813628;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104449864; end: 10444993b;  */

/* WARNING: Possible PIC construction at 0x0001044498a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044498a4) */

void FUN_104449864(long param_1)

{
  if (param_1 == 0) {
    func_0x000104449970();
    _objc_allocWithZone();
  }
  else {
    func_0x000104449970(0);
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10444993c; end: 104449983;  */

void FUN_10444993c(undefined8 param_1)

{
  if (lRam000000011307a000 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e807248);
  return;
}



/* Entry: 104449984; end: 1044499b3;  */

void FUN_104449984(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 1044499b4; end: 1044499bf;  */

void FUN_1044499b4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd00140;
    _swift_updateClassMetadata2(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1044499c0; end: 104449a2f;  */

void FUN_1044499c0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uStack_28 = param_4;
    _swift_updateClassMetadata2(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 104449a30; end: 104449a33;  */

void FUN_104449a30(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104449a34; end: 104449a7f; -[SCOperaMediaVariantPrefetchInfo variantName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449a34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307a048);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307a048))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104449a80; end: 104449a93; -[SCOperaMediaVariantPrefetchInfo prefetchState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104449a80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a050);
}



/* Entry: 104449a94; end: 104449b73; -[SCOperaMediaVariantPrefetchInfo initWithVariantName:prefetchState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307a048);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307a050) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104449b74; end: 104449b77; -[SCOperaMediaVariantPrefetchInfo copyWithZone:] */

void FUN_104449b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104449b78; end: 104449b93; -[SCOperaMediaVariantPrefetchInfo description] */

void FUN_104449b78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104449b94; end: 104449c0f; -[SCOperaMediaVariantPrefetchInfo init] */

void FUN_104449b94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaMediaVariantPrefetchInfoWrapper.swift",0x3f,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104449bdc);
  (*pcVar1)();
}



/* Entry: 104449c10; end: 104449c23; -[SCOperaMediaVariantPrefetchInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307a048 + 8))
  ;
  return;
}



/* Entry: 104449c24; end: 104449c43;  */

void FUN_104449c24(void)

{
  _objc_opt_self(&PTR_PTR_1129b5488);
  return;
}



/* Entry: 104449c44; end: 104449c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a048);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307a050) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104449c48; end: 104449c93; -[SCOperaMediaBundle mediaBundleIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449c48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307a080);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307a080))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104449c94; end: 104449ca3; -[SCOperaMediaBundle media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a088));
  return;
}



/* Entry: 104449ca4; end: 104449cb3; -[SCOperaMediaBundle loadingFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a090));
  return;
}



/* Entry: 104449cb4; end: 104449cc3; -[SCOperaMediaBundle overlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a098));
  return;
}



/* Entry: 104449cc4; end: 104449cd3; -[SCOperaMediaBundle subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a0a0));
  return;
}



/* Entry: 104449cd4; end: 104449ce3; -[SCOperaMediaBundle metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a0a8));
  return;
}



/* Entry: 104449ce4; end: 104449cf3; -[SCOperaMediaBundle attribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a0b0));
  return;
}



/* Entry: 104449cf4; end: 104449d03; -[SCOperaMediaBundle eligibleForSingleSnapPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104449cf4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a0b8);
}



/* Entry: 104449d04; end: 104449d13; -[SCOperaMediaBundle disableClientGeneratedFirstFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104449d04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a0c0);
}



/* Entry: 104449d14; end: 104449d23; -[SCOperaMediaBundle isMediaZipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104449d14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a0c8);
}



/* Entry: 104449d24; end: 104449f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104449d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a080);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307a088) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307a090) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307a098) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307a0a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307a0a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11307a0b0) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11307a0b8) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11307a0c0) = param_9._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11307a0c8) = param_9._2_1_;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104449f44; end: 10444a02f; -[SCOperaMediaBundle initWithMediaBundleIdentifier:media:loadingFrame:overlay:subtitle:metadata:attribution:eligibleForSingleSnapPlayer:disableClientGeneratedFirstFrame:isMediaZipped:] */

void FUN_104449f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x000104449e34(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 10444a030; end: 10444a05f;  */

void FUN_10444a030(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10444a060(param_1);
  return;
}



/* Entry: 10444a060; end: 10444a4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10444a060(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  uVar4 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a080);
  *puVar1 = *param_1;
  puVar1[1] = uVar4;
  uVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar3 = param_1[4];
  uVar5 = param_1[5];
  uVar16 = param_1[6];
  uVar6 = param_1[7];
  lVar8 = 0;
  FUN_104448f4c();
  lVar15 = lVar8;
  _objc_allocWithZone();
  *(undefined8 *)(lVar15 + _DAT_113079f80) = uVar2;
  *(undefined8 *)(lVar15 + _DAT_113079f88) = uVar14;
  puVar1 = (undefined8 *)(lVar15 + _DAT_113079f90);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar15 + _DAT_113079f98);
  *puVar1 = uVar16;
  puVar1[1] = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar15;
  lStack_68 = lVar8;
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  plVar9 = &lStack_70;
  _objc_msgSendSuper2(plVar9,puVar7);
  *(long **)(unaff_x20 + _DAT_11307a088) = plVar9;
  lVar15 = param_1[8];
  if (lVar15 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar2 = param_1[0xc];
    uVar16 = param_1[0xd];
    uVar3 = param_1[10];
    uVar4 = param_1[0xb];
    uVar14 = param_1[9];
    lVar10 = lVar8;
    _objc_allocWithZone();
    *(long *)(lVar10 + _DAT_113079f80) = lVar15;
    *(undefined8 *)(lVar10 + _DAT_113079f88) = uVar14;
    puVar1 = (undefined8 *)(lVar10 + _DAT_113079f90);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)(lVar10 + _DAT_113079f98);
    *puVar1 = uVar2;
    puVar1[1] = uVar16;
    puVar7 = PTR_s_init_1125d9248;
    lStack_d0 = lVar10;
    lStack_c8 = lVar8;
    _objc_retain(lVar15);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar16);
    plVar9 = &lStack_d0;
    _objc_msgSendSuper2(plVar9,puVar7);
  }
  *(long **)(unaff_x20 + _DAT_11307a090) = plVar9;
  lVar15 = param_1[0xe];
  if (lVar15 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar2 = param_1[0x12];
    uVar16 = param_1[0x13];
    uVar3 = param_1[0x10];
    uVar4 = param_1[0x11];
    uVar14 = param_1[0xf];
    lVar10 = lVar8;
    _objc_allocWithZone();
    *(long *)(lVar10 + _DAT_113079f80) = lVar15;
    *(undefined8 *)(lVar10 + _DAT_113079f88) = uVar14;
    puVar1 = (undefined8 *)(lVar10 + _DAT_113079f90);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)(lVar10 + _DAT_113079f98);
    *puVar1 = uVar2;
    puVar1[1] = uVar16;
    puVar7 = PTR_s_init_1125d9248;
    lStack_c0 = lVar10;
    lStack_b8 = lVar8;
    _objc_retain(lVar15);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar16);
    plVar9 = &lStack_c0;
    _objc_msgSendSuper2(plVar9,puVar7);
  }
  *(long **)(unaff_x20 + _DAT_11307a098) = plVar9;
  lVar15 = param_1[0x14];
  if (lVar15 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar2 = param_1[0x18];
    uVar16 = param_1[0x19];
    uVar3 = param_1[0x16];
    uVar4 = param_1[0x17];
    uVar14 = param_1[0x15];
    lVar10 = lVar8;
    _objc_allocWithZone();
    *(long *)(lVar10 + _DAT_113079f80) = lVar15;
    *(undefined8 *)(lVar10 + _DAT_113079f88) = uVar14;
    puVar1 = (undefined8 *)(lVar10 + _DAT_113079f90);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)(lVar10 + _DAT_113079f98);
    *puVar1 = uVar2;
    puVar1[1] = uVar16;
    puVar7 = PTR_s_init_1125d9248;
    lStack_b0 = lVar10;
    lStack_a8 = lVar8;
    _objc_retain(lVar15);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar16);
    plVar9 = &lStack_b0;
    _objc_msgSendSuper2(plVar9,puVar7);
  }
  *(long **)(unaff_x20 + _DAT_11307a0a0) = plVar9;
  lVar10 = 0;
  FUN_10443a298();
  lVar15 = (long)param_1 + (long)*(int *)(lVar10 + 0x24);
  lVar11 = 0;
  FUN_10444993c();
  lVar8 = lVar11;
  _objc_allocWithZone();
  func_0x0001009f0578(lVar15,lVar8 + _DAT_113813628);
  lVar12 = 0;
  FUN_10443b3b4();
  *(undefined8 *)(lVar8 + _DAT_113813630) = *(undefined8 *)(lVar15 + *(int *)(lVar12 + 0x14));
  plVar9 = &lStack_80;
  lStack_80 = lVar8;
  lStack_78 = lVar11;
  _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11307a0a8) = plVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar16 = puVar1[2];
  lVar8 = 0;
  FUN_104448b0c();
  lVar15 = lVar8;
  _objc_allocWithZone();
  *(undefined8 *)(lVar15 + _DAT_113079f40) = uVar2;
  *(undefined8 *)(lVar15 + _DAT_113079f48) = uVar3;
  *(undefined8 *)(lVar15 + _DAT_113079f50) = uVar16;
  puVar7 = PTR_s_init_1125d9248;
  lStack_90 = lVar15;
  lStack_88 = lVar8;
  _objc_retain(uVar16);
  plVar9 = &lStack_90;
  _objc_msgSendSuper2(plVar9,puVar7);
  *(long **)(unaff_x20 + _DAT_11307a0b0) = plVar9;
  *(undefined1 *)(unaff_x20 + _DAT_11307a0b8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
  *(undefined1 *)(unaff_x20 + _DAT_11307a0c0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
  *(undefined1 *)(unaff_x20 + _DAT_11307a0c8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34));
  puVar13 = &stack0xffffffffffffff60;
  _objc_msgSendSuper2(puVar13,PTR_s_init_1125d9248);
  FUN_10444a4b8(param_1);
  return puVar13;
}



/* Entry: 10444a4b8; end: 10444a4f3;  */

undefined8 FUN_10444a4b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10443a298();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10444a4f4; end: 10444a4f7; -[SCOperaMediaBundle copyWithZone:] */

void FUN_10444a4f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10444a4f8; end: 10444a56f; -[SCOperaMediaBundle description] */

void FUN_10444a4f8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10443a298();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_10444a570(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10444a4b8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444a570; end: 10444a893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444a570(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307a080))[1];
  lVar7 = *(long *)(param_2 + _DAT_11307a088);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11307a080);
  param_1[1] = uVar3;
  lVar5 = _DAT_113079f98;
  lVar14 = _DAT_113079f90;
  lVar6 = _DAT_113079f88;
  lVar8 = _DAT_113079f80;
  uVar13 = *(undefined8 *)(lVar7 + _DAT_113079f80);
  uVar9 = *(undefined8 *)(lVar7 + _DAT_113079f88);
  puVar1 = (undefined8 *)(lVar7 + _DAT_113079f90);
  puVar2 = (undefined8 *)(lVar7 + _DAT_113079f98);
  uVar12 = puVar1[1];
  uVar17 = puVar1[1];
  uVar11 = *puVar1;
  uVar10 = puVar2[1];
  uVar15 = puVar2[1];
  uVar18 = *puVar2;
  param_1[2] = uVar13;
  param_1[3] = uVar9;
  param_1[5] = uVar17;
  param_1[4] = uVar11;
  param_1[7] = uVar15;
  param_1[6] = uVar18;
  lVar7 = *(long *)(param_2 + _DAT_11307a090);
  if (lVar7 == 0) {
    uVar16 = 0;
    uVar15 = 0;
    uVar9 = 0;
    uVar17 = 0;
    uVar11 = 0;
    uVar18 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar7 + lVar8);
    uVar15 = *(undefined8 *)(lVar7 + lVar6);
    uVar9 = *(undefined8 *)(lVar7 + lVar14);
    uVar17 = ((undefined8 *)(lVar7 + lVar14))[1];
    uVar11 = *(undefined8 *)(lVar7 + lVar5);
    uVar18 = ((undefined8 *)(lVar7 + lVar5))[1];
    _swift_bridgeObjectRetain(uVar18);
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(uVar17);
  }
  param_1[8] = uVar16;
  param_1[9] = uVar15;
  param_1[10] = uVar9;
  param_1[0xb] = uVar17;
  param_1[0xc] = uVar11;
  param_1[0xd] = uVar18;
  lVar7 = *(long *)(param_2 + _DAT_11307a098);
  if (lVar7 == 0) {
    uVar16 = 0;
    uVar15 = 0;
    uVar9 = 0;
    uVar17 = 0;
    uVar11 = 0;
    uVar18 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar7 + lVar8);
    uVar15 = *(undefined8 *)(lVar7 + lVar6);
    uVar9 = *(undefined8 *)(lVar7 + lVar14);
    uVar17 = ((undefined8 *)(lVar7 + lVar14))[1];
    uVar11 = *(undefined8 *)(lVar7 + lVar5);
    uVar18 = ((undefined8 *)(lVar7 + lVar5))[1];
    _swift_bridgeObjectRetain(uVar18);
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(uVar17);
  }
  param_1[0xe] = uVar16;
  param_1[0xf] = uVar15;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar17;
  param_1[0x12] = uVar11;
  param_1[0x13] = uVar18;
  lVar7 = *(long *)(param_2 + _DAT_11307a0a0);
  if (lVar7 == 0) {
    uVar16 = 0;
    uVar15 = 0;
    uVar9 = 0;
    uVar17 = 0;
    uVar11 = 0;
    uVar18 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar7 + lVar8);
    uVar15 = *(undefined8 *)(lVar7 + lVar6);
    uVar9 = *(undefined8 *)(lVar7 + lVar14);
    uVar17 = ((undefined8 *)(lVar7 + lVar14))[1];
    uVar11 = *(undefined8 *)(lVar7 + lVar5);
    uVar18 = ((undefined8 *)(lVar7 + lVar5))[1];
    _swift_bridgeObjectRetain(uVar18);
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(uVar17);
  }
  param_1[0x14] = uVar16;
  param_1[0x15] = uVar15;
  param_1[0x16] = uVar9;
  param_1[0x17] = uVar17;
  param_1[0x18] = uVar11;
  param_1[0x19] = uVar18;
  lVar14 = *(long *)(param_2 + _DAT_11307a0a8);
  lVar6 = 0;
  FUN_10443a298();
  lVar8 = (long)param_1 + (long)*(int *)(lVar6 + 0x24);
  func_0x0001009f0578(lVar14 + _DAT_113813628,lVar8);
  uVar9 = *(undefined8 *)(lVar14 + _DAT_113813630);
  lVar14 = 0;
  FUN_10443b3b4();
  *(undefined8 *)(lVar8 + *(int *)(lVar14 + 0x14)) = uVar9;
  lVar8 = *(long *)(param_2 + _DAT_11307a0b0);
  uVar11 = *(undefined8 *)(lVar8 + _DAT_113079f48);
  uVar9 = *(undefined8 *)(lVar8 + _DAT_113079f50);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  *puVar1 = *(undefined8 *)(lVar8 + _DAT_113079f40);
  puVar1[1] = uVar11;
  puVar1[2] = uVar9;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c)) =
       *(undefined1 *)(param_2 + _DAT_11307a0b8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30)) =
       *(undefined1 *)(param_2 + _DAT_11307a0c0);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11307a0c8);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar13);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar10);
  _objc_release(param_2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) = uVar4;
  return;
}



/* Entry: 10444a894; end: 10444a90f; -[SCOperaMediaBundle init] */

void FUN_10444a894(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaMediaBundleWrapper.swift",0x32,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444a8dc);
  (*pcVar1)();
}



/* Entry: 10444a910; end: 10444a99b; -[SCOperaMediaBundle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444a910(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307a080 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307a088));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307a090));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307a098));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307a0a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307a0a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307a0b0));
  return;
}



/* Entry: 10444a99c; end: 10444a9bb;  */

void FUN_10444a99c(void)

{
  _objc_opt_self(&PTR_PTR_1129b5558);
  return;
}



/* Entry: 10444a9bc; end: 10444a9cb; -[SCOperaPlaybackInfo currentPlayerTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444a9bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a0f8);
}



/* Entry: 10444a9cc; end: 10444a9db; -[SCOperaPlaybackInfo wasSeekingManually] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10444a9cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a100);
}



/* Entry: 10444a9dc; end: 10444a9eb; -[SCOperaPlaybackInfo controlsViewSeekType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444a9dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a108);
}



/* Entry: 10444a9ec; end: 10444a9fb; -[SCOperaPlaybackInfo startSeekingTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444a9ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a110);
}



/* Entry: 10444a9fc; end: 10444aa0b; -[SCOperaPlaybackInfo endSeekingTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444a9fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a118);
}



/* Entry: 10444aa0c; end: 10444aa67; -[SCOperaPlaybackInfo eventTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444aa0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307a120))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307a120);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10444aa68; end: 10444ab2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444aa68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307a0f8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307a100) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307a108) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307a110) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307a118) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a120);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444ab2c; end: 10444ac07; -[SCOperaPlaybackInfo initWithCurrentPlayerTimestamp:wasSeekingManually:controlsViewSeekType:startSeekingTimestamp:endSeekingTimestamp:eventTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444ab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined1 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_4;
  _swift_getObjectType();
  if (param_8 == 0) {
    param_8 = 0;
    param_5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_4 + _DAT_11307a0f8) = param_1;
  *(undefined1 *)(param_4 + _DAT_11307a100) = param_6;
  *(undefined8 *)(param_4 + _DAT_11307a108) = param_7;
  *(undefined8 *)(param_4 + _DAT_11307a110) = param_2;
  *(undefined8 *)(param_4 + _DAT_11307a118) = param_3;
  plVar1 = (long *)(param_4 + _DAT_11307a120);
  *plVar1 = param_8;
  plVar1[1] = param_5;
  lStack_70 = param_4;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444ac08; end: 10444aca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444ac08(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307a0f8) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307a100) = *(undefined1 *)(param_1 + 1);
  *(undefined8 *)(unaff_x20 + _DAT_11307a108) = param_1[2];
  uVar2 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11307a110) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307a118) = uVar2;
  uVar2 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307a120);
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444aca4; end: 10444acd7; -[SCOperaPlaybackInfo hash] */

undefined8 FUN_10444aca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10444acd8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10444acd8; end: 10444ade3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444acd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11307a0f8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11307a0f8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307a100));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11307a108));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11307a110) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11307a110);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11307a118) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11307a118);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11307a120))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307a120);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10444ade4; end: 10444af8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10444ade4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
    return 0;
  }
  plVar7 = &lStack_98;
  _swift_dynamicCast(plVar7,auStack_90,PTR___sypN_11034f1a8 + 8,lVar9,6);
  if (((ulong)plVar7 & 1) == 0) {
    return 0;
  }
  dVar12 = *(double *)(unaff_x20 + _DAT_11307a0f8);
  dVar13 = *(double *)(lStack_98 + _DAT_11307a0f8);
  bVar5 = *(byte *)(unaff_x20 + _DAT_11307a100);
  bVar6 = *(byte *)(lStack_98 + _DAT_11307a100);
  iVar3 = *(int *)(unaff_x20 + _DAT_11307a108);
  iVar4 = *(int *)(lStack_98 + _DAT_11307a108);
  dVar14 = *(double *)(unaff_x20 + _DAT_11307a110);
  dVar15 = *(double *)(lStack_98 + _DAT_11307a110);
  dVar16 = *(double *)(unaff_x20 + _DAT_11307a118);
  dVar17 = *(double *)(lStack_98 + _DAT_11307a118);
  lVar9 = ((long *)(unaff_x20 + _DAT_11307a120))[1];
  lVar11 = ((long *)(lStack_98 + _DAT_11307a120))[1];
  if (lVar9 == 0) {
    _swift_bridgeObjectRetain(lVar11);
    _objc_release(lStack_98);
    if (lVar11 != 0) {
      _swift_bridgeObjectRelease(lVar11);
      uVar10 = 0;
      goto LAB_10444af3c;
    }
LAB_10444af1c:
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
    if (lVar11 != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_11307a120);
      if ((lVar8 == *(long *)(lStack_98 + _DAT_11307a120)) && (lVar9 == lVar11)) {
        _objc_release(lStack_98);
        goto LAB_10444af1c;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar10 = (uint)lVar8;
    }
    _objc_release(lStack_98);
  }
LAB_10444af3c:
  uVar2 = 0;
  if (iVar3 == iVar4) {
    uVar2 = (uint)(dVar12 == dVar13) & ((bVar5 ^ bVar6) ^ 0xffffffff);
  }
  uVar1 = 0;
  if (dVar14 == dVar15) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (dVar16 == dVar17) {
    uVar2 = uVar1;
  }
  return uVar2 & uVar10;
}



/* Entry: 10444af8c; end: 10444b00b; -[SCOperaPlaybackInfo isEqual:] */

uint FUN_10444af8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10444ade4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10444b00c; end: 10444b00f; -[SCOperaPlaybackInfo copyWithZone:] */

void FUN_10444b00c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10444b010; end: 10444b043; -[SCOperaPlaybackInfo description] */

void FUN_10444b010(void)

{
  undefined1 auStack_48 [56];
  
  func_0x00010444b0d4(auStack_48);
  FUN_10444b13c(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444b044; end: 10444b0bf; -[SCOperaPlaybackInfo init] */

void FUN_10444b044(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPlaybackInfoWrapper.swift",0x33,2,0x50,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444b08c);
  (*pcVar1)();
}



/* Entry: 10444b0c0; end: 10444b13b; -[SCOperaPlaybackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307a120 + 8))
  ;
  return;
}



/* Entry: 10444b13c; end: 10444b16f;  */

undefined8 FUN_10444b13c(undefined8 param_1)

{
  FUN_104439ff0();
  return param_1;
}



/* Entry: 10444b170; end: 10444b18f;  */

void FUN_10444b170(void)

{
  _objc_opt_self(&PTR_PTR_1129b5668);
  return;
}



/* Entry: 10444b190; end: 10444b19f; -[SCPlayerConfiguration autoManageForwardBufferDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10444b190(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a150);
}



/* Entry: 10444b1a0; end: 10444b1af; -[SCPlayerConfiguration preferredForwardBufferDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444b1a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a158);
}



/* Entry: 10444b1b0; end: 10444b1bf; -[SCPlayerConfiguration preferredPeakBitRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10444b1b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307a160);
}



/* Entry: 10444b1c0; end: 10444b1d3; -[SCPlayerConfiguration startOnFirstEligibleVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10444b1c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307a168);
}



/* Entry: 10444b1d4; end: 10444b2eb; -[SCPlayerConfiguration initWithAutoManageForwardBufferDuration:preferredForwardBufferDurationMs:preferredPeakBitRate:startOnFirstEligibleVariant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b1d4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11307a150) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307a158) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307a160) = param_5;
  *(undefined1 *)(param_1 + _DAT_11307a168) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444b2ec; end: 10444b38f; -[SCPlayerConfiguration hash] */

void FUN_10444b2ec(void)

{
  func_0x00010444b30c();
  return;
}



/* Entry: 10444b390; end: 10444b48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10444b390(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar6 = &lStack_78;
    _swift_dynamicCast(plVar6,auStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar6 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_11307a150);
      bVar3 = *(byte *)(lStack_78 + _DAT_11307a150);
      lVar7 = *(long *)(unaff_x20 + _DAT_11307a158);
      lVar8 = *(long *)(lStack_78 + _DAT_11307a158);
      lVar9 = *(long *)(unaff_x20 + _DAT_11307a160);
      lVar10 = *(long *)(lStack_78 + _DAT_11307a160);
      bVar4 = *(byte *)(unaff_x20 + _DAT_11307a168);
      bVar5 = *(byte *)(lStack_78 + _DAT_11307a168);
      _objc_release();
      bVar1 = 0;
      if (lVar9 == lVar10) {
        bVar1 = lVar7 == lVar8 & (bVar2 ^ bVar3 ^ 0xff);
      }
      return bVar1 & (bVar4 ^ bVar5 ^ 1);
    }
  }
  return 0;
}



/* Entry: 10444b48c; end: 10444b50b; -[SCPlayerConfiguration isEqual:] */

uint FUN_10444b48c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10444b390(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10444b50c; end: 10444b50f; -[SCPlayerConfiguration copyWithZone:] */

void FUN_10444b50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10444b510; end: 10444b52b; -[SCPlayerConfiguration description] */

void FUN_10444b510(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444b52c; end: 10444b5c7; -[SCPlayerConfiguration init] */

void FUN_10444b52c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/PlayerConfigurationWrapper.swift",0x35,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10444b574);
  (*pcVar1)();
}



/* Entry: 10444b5c8; end: 10444b5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b5c8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307a150) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307a158) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307a160) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307a168) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444b5cc; end: 10444b5eb; -[SCOperaDependencies contextTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b5cc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307a198));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444b5ec; end: 10444b60b; -[SCOperaDependencies gifProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b5ec(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307a1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444b60c; end: 10444b62b; -[SCOperaDependencies glCommandsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b60c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307a1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10444b62c; end: 10444b64b; -[SCOperaDependencies deviceMotionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444b62c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307a1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


