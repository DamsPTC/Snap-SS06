/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049a2174; end: 1049a2237; -[FBSDKApplicationDelegate init] */

undefined8 FUN_1049a2174(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (lRam000000011309fed0 != -1) {
    _swift_once(0x11309fed0,FUN_1049adc74);
  }
  uVar3 = uRam00000001138158a0;
  lVar2 = 0;
  FUN_1049b0ed4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  _objc_allocWithZone(uVar1);
  _swift_retain_n(uVar3,2);
  FUN_1049a7eb0();
  uVar1 = param_1;
  _swift_getObjectType(param_1);
  _swift_deallocPartialClassInstance(param_1,uVar1,0x50,7);
  return uVar3;
}



/* Entry: 1049a2238; end: 1049a2507;  */

undefined8 FUN_1049a2238(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001000c6518(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1049a8108(param_1,lVar1);
  FUN_1049a8308(param_2);
  return param_1;
}



/* Entry: 1049a2508; end: 1049a26bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a2508(undefined8 param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_80;
  if ((*(byte *)(unaff_x20 + _DAT_1130a2c20) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_1130a2c20) = 1;
    lVar6 = unaff_x20 + _DAT_1130a2c08;
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    lVar10 = *(long *)(lVar6 + 0x20);
    func_0x0001049a83e4(lVar6,uVar8);
    (**(code **)(lVar10 + 8))(uVar8,lVar10);
    iVar2 = 2;
    func_0x000100029b9c(2,0xe,5,0);
    if (iVar2 == 0) {
      lVar6 = 0x1130a2c70;
      uStack_b0 = param_3;
      func_0x0001048db364();
      lVar10 = (long)&uStack_b0 -
               (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar11 = *(long *)(unaff_x20 + _DAT_1130a2c00);
      _objc_msgSend(*(undefined8 *)(lVar11 + 0x208),PTR_s_logWarnings_1125252d8);
      _objc_msgSend(*(undefined8 *)(lVar11 + 0x208),PTR_s_logIfSDKSettingsChanged_1125252e0);
      _objc_msgSend(*(undefined8 *)(lVar11 + 0x208),PTR_s_recordInstall_1125252e8);
      FUN_1049a2c0c();
      _objc_msgSend(*(undefined8 *)(lVar11 + 0x40),PTR_s_startObservingApplicationLifecyc_1125252f0)
      ;
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      _swift_getInitializedObjCClass();
      puVar4 = puVar3;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = _DAT_1130a2c10;
      _swift_beginAccess(unaff_x20 + _DAT_1130a2c10,&uStack_78,0,0);
      if (((*(byte *)(unaff_x20 + lVar6) & 1) == 0) &&
         (*(char *)(unaff_x20 + _DAT_1130a2c20) != '\x01')) {
        puVar5 = &UNK_1107ba8e0;
        _swift_allocObject(&UNK_1107ba8e0,0x28,7);
        *(long *)(puVar5 + 0x10) = unaff_x20;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        *(undefined8 *)(puVar5 + 0x20) = param_1;
        _swift_bridgeObjectRetain(param_1);
        _objc_retain(unaff_x20);
        _objc_retain(puVar4);
        FUN_1049a2508(param_1,0x1049a8584,puVar5);
        _swift_release(puVar5);
      }
      _objc_release(puVar4);
      puVar4 = puVar3;
      _objc_msgSend(puVar3,PTR_s_sharedApplication_1126687f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _objc_msgSend();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) {
        lVar6 = 0;
        __s10Foundation12NotificationVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar10,1,1,lVar6);
        FUN_1049a35ac(lVar10);
        func_0x0001049a83a8(lVar10,0x1130a2c70);
      }
      uVar8 = *(undefined8 *)(lVar11 + 0x138);
      pcStack_88 = FUN_1049a3700;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100ab47f8;
      puStack_90 = &UNK_1107ba8f8;
      ppuVar7 = &puStack_a8;
      __Block_copy(ppuVar7);
      _swift_unknownObjectRetain(uVar8);
      _objc_msgSend();
      __Block_release(ppuVar7);
      _swift_unknownObjectRelease(uVar8);
      func_0x0001049a8480(lVar11 + 0xa8,&puStack_a8);
      pcVar1 = pcStack_88;
      puVar4 = puStack_90;
      func_0x0001049a83e4(&puStack_a8,puStack_90);
      _objc_msgSend(puVar3,PTR_s_sharedApplication_1126687f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      _objc_msgSend();
      _objc_release(puVar3);
      (**(code **)(pcVar1 + 8))(puVar5,puVar4,pcVar1);
      FUN_1049a8308(&puStack_a8);
      uVar8 = 0;
      func_0x0001049a84c4(0,0x1130a2c88,&PTR_PTR_1126ae010);
      uVar9 = *(undefined8 *)(lVar11 + 0x40);
      _swift_getObjCClassFromMetadata();
      _swift_unknownObjectRetain(uVar9);
      _objc_allocWithZone(uVar8);
      _objc_msgSend();
      _swift_unknownObjectRelease(uVar9);
      _objc_msgSend(uVar8,PTR_s_registerForAppLinkMeasurementEve_112525300);
      _objc_release(uVar8);
      func_0x0001049a3244();
      FUN_1049a2de4();
      func_0x0001049a2fc4(param_1);
      if (param_2 != (code *)0x0) {
        (*param_2)();
      }
      return;
    }
    puVar3 = &UNK_1107ba760;
    _swift_allocObject(&UNK_1107ba760,0x30,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(code **)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    puVar4 = PTR_PTR_1126add50;
    _swift_getInitializedObjCClass(PTR_PTR_1126add50);
    _swift_bridgeObjectRetain(param_1);
    _objc_retain();
    func_0x000100b64c10(param_2,param_3);
    _objc_msgSend(puVar4,PTR_s_sharedInstance_1126688c8);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_1107ba778;
    __Block_copy(&puStack_80);
    _swift_retain(puVar3);
    _swift_release(puVar3);
    _objc_msgSend(puVar4,PTR_s_loadDomainConfigurationWithCompl_112604708,ppuVar7);
    __Block_release(ppuVar7);
    _swift_release(puVar3);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 1049a26c0; end: 1049a27b3; -[FBSDKApplicationDelegate initializeSDK] */

void FUN_1049a26c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x0001028ee74c();
  _swift_release(puVar1);
  FUN_1049a2508(puVar2,0,0);
  _swift_bridgeObjectRelease(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049a27b4; end: 1049a2b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a27b4(undefined8 param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0x1130a2c70;
  uStack_b0 = param_3;
  func_0x0001048db364();
  lVar9 = (long)&uStack_b0 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + _DAT_1130a2c00);
  _objc_msgSend(*(undefined8 *)(lVar10 + 0x208),PTR_s_logWarnings_1125252d8);
  _objc_msgSend(*(undefined8 *)(lVar10 + 0x208),PTR_s_logIfSDKSettingsChanged_1125252e0);
  _objc_msgSend(*(undefined8 *)(lVar10 + 0x208),PTR_s_recordInstall_1125252e8);
  FUN_1049a2c0c();
  _objc_msgSend(*(undefined8 *)(lVar10 + 0x40),PTR_s_startObservingApplicationLifecyc_1125252f0);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _swift_getInitializedObjCClass();
  puVar3 = puVar2;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = _DAT_1130a2c10;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c10,auStack_78,0,0);
  if (((*(byte *)(unaff_x20 + lVar5) & 1) == 0) && (*(char *)(unaff_x20 + _DAT_1130a2c20) != '\x01')
     ) {
    puVar4 = &UNK_1107ba8e0;
    _swift_allocObject(&UNK_1107ba8e0,0x28,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    _swift_bridgeObjectRetain(param_1);
    _objc_retain();
    _objc_retain(puVar3);
    FUN_1049a2508(param_1,0x1049a8584,puVar4);
    _swift_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  _objc_msgSend(puVar2,PTR_s_sharedApplication_1126687f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_msgSend();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    lVar5 = 0;
    __s10Foundation12NotificationVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar9,1,1,lVar5);
    FUN_1049a35ac(lVar9);
    FUN_1049a83a8(lVar9,0x1130a2c70);
  }
  uVar7 = *(undefined8 *)(lVar10 + 0x138);
  pcStack_88 = FUN_1049a3700;
  uStack_80 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100ab47f8;
  puStack_90 = &UNK_1107ba8f8;
  ppuVar6 = &puStack_a8;
  __Block_copy(ppuVar6);
  _swift_unknownObjectRetain(uVar7);
  _objc_msgSend();
  __Block_release(ppuVar6);
  _swift_unknownObjectRelease(uVar7);
  func_0x0001049a8480(lVar10 + 0xa8,&puStack_a8);
  pcVar1 = pcStack_88;
  puVar3 = puStack_90;
  func_0x0001049a83e4(&puStack_a8,puStack_90);
  _objc_msgSend(puVar2,PTR_s_sharedApplication_1126687f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_msgSend();
  _objc_release(puVar2);
  (**(code **)(pcVar1 + 8))(puVar4,puVar3,pcVar1);
  FUN_1049a8308(&puStack_a8);
  uVar7 = 0;
  func_0x0001049a84c4(0,0x1130a2c88,&PTR_PTR_1126ae010);
  uVar8 = *(undefined8 *)(lVar10 + 0x40);
  _swift_getObjCClassFromMetadata();
  _swift_unknownObjectRetain(uVar8);
  _objc_allocWithZone(uVar7);
  _objc_msgSend();
  _swift_unknownObjectRelease(uVar8);
  _objc_msgSend(uVar7,PTR_s_registerForAppLinkMeasurementEve_112525300);
  _objc_release(uVar7);
  func_0x0001049a3244();
  FUN_1049a2de4();
  func_0x0001049a2fc4(param_1);
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1049a2b1c; end: 1049a2c0b; -[FBSDKApplicationDelegate initializeSDKWithLaunchOptions:completionBlock:] */

void FUN_1049a2b1c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000100a149e4(0);
    uVar3 = 0x112d7f1d8;
    func_0x0001049a8504(0x112d7f1d8,&SUB_100a149e4,&UNK_10d93d430);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,uVar1,PTR___sypN_11034f1a8 + 8,uVar3);
  }
  if (param_4 == 0) {
    uVar3 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1107ba8b8;
    _swift_allocObject(&UNK_1107ba8b8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar3 = 0x1049a839c;
  }
  _objc_retain(param_1);
  FUN_1049a2508(param_3,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1049a2c0c; end: 1049a2de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a2c0c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_1130a2c00);
  _objc_msgSend(*(undefined8 *)(lVar2 + 0x1c0),PTR_s_fb_addObserver_selector_name_obj_112525328);
  _objc_msgSend(*(undefined8 *)(lVar2 + 0x1c0),PTR_s_fb_addObserver_selector_name_obj_112525328);
  _objc_msgSend(*(undefined8 *)(lVar2 + 0x1c0),PTR_s_fb_addObserver_selector_name_obj_112525328);
  if (lRam000000011309ff90 != -1) {
    _swift_once(0x11309ff90,FUN_1049f1974);
  }
  uVar1 = uRam00000001130a3f78;
  lVar2 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_48,0,0);
  _objc_msgSend(*(undefined8 *)(unaff_x20 + lVar2),PTR_s_addObject__11259c1f0,uVar1);
  return;
}



/* Entry: 1049a2de4; end: 1049a2fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a2de4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  byte bStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_1130a2c00);
    lVar6 = *(long *)(lVar7 + 0x180);
    _swift_unknownObjectRetain(lVar6);
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f226640);
    lVar3 = lVar6;
    _objc_msgSend(lVar6,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _swift_unknownObjectRelease(lVar6);
    if (lVar3 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    lStack_48 = lStack_68;
    uStack_50 = uStack_70;
    if (lStack_68 == 0) {
      FUN_1049a83a8(&uStack_60,0x11309c428);
    }
    else {
      pbVar4 = &bStack_81;
      _swift_dynamicCast(pbVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((((ulong)pbVar4 & 1) != 0) && ((bStack_81 & 1) == 0)) {
        uVar5 = *(undefined8 *)(lVar7 + 0x268);
        _swift_unknownObjectRetain(uVar5);
        uVar2 = 0x665f746e65696c63;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x665f746e65696c63,0xeb0000000067616c)
        ;
        _objc_msgSend(uVar5,PTR_s_logAutoSetupStatus_source__112605f48,0,uVar2);
        _swift_unknownObjectRelease(uVar5);
        _objc_release(uVar2);
        return;
      }
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x138);
    _objc_msgSend(uVar2,PTR_s_isEnabled__1125fa018,0x1010804);
    if ((int)uVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar7 + 0x268);
      uVar2 = *(undefined8 *)(lVar7 + 0x138);
      _swift_unknownObjectRetain(uVar5);
      _objc_msgSend(uVar2,PTR_s_isEnabled__1125fa018,0x1010805);
      _objc_msgSend(uVar5,PTR_s_enableAutoSetup__112525310,uVar2);
      _swift_unknownObjectRelease(uVar5);
    }
  }
  return;
}



/* Entry: 1049a2fc4; end: 1049a35ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a2fc4(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [32];
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  lVar1 = (long)&uStack_80 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + _DAT_1130a2c00);
  uVar4 = *(undefined8 *)(lVar7 + 0x40);
  if (param_1 == 0) {
    _swift_unknownObjectRetain(uVar4);
    uVar6 = 0;
LAB_1049a31b0:
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar1,1,1,lVar5);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      _swift_unknownObjectRetain(uVar4);
LAB_1049a30dc:
      uVar6 = 0;
      lVar5 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar5 = *(long *)PTR__UIApplicationLaunchOptionsSourceApplicationKey_110345a58;
      _swift_unknownObjectRetain(uVar4);
      _swift_bridgeObjectRetain(param_1);
      func_0x0001028ee5d4(lVar5);
      if (((ulong)param_2 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_1049a30dc;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,auStack_70);
      _swift_bridgeObjectRelease(param_1);
      puVar2 = &uStack_80;
      param_2 = auStack_70;
      _swift_dynamicCast(puVar2,param_2,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar2 & 1) == 0) goto LAB_1049a30dc;
      uVar6 = uStack_80;
      param_2 = puStack_78;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80);
      _swift_bridgeObjectRelease(puStack_78);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    if (lVar5 == 0) goto LAB_1049a31b0;
    lVar5 = *(long *)PTR__UIApplicationLaunchOptionsURLKey_110345a60;
    _swift_bridgeObjectRetain(param_1);
    func_0x0001028ee5d4(lVar5);
    if (((ulong)param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_1049a31b0;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,auStack_70);
    _swift_bridgeObjectRelease(param_1);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar5 = lVar1;
    _swift_dynamicCast(lVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar3,6);
    lVar8 = *(long *)(lVar3 + -8);
    (**(code **)(lVar8 + 0x38))(lVar1,(uint)lVar5 ^ 1,1,lVar3);
    lVar5 = lVar1;
    (**(code **)(lVar8 + 0x30))(lVar1,1,lVar3);
    if ((int)lVar5 != 1) {
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      (**(code **)(lVar8 + 8))(lVar1,lVar3);
      goto LAB_1049a31d8;
    }
  }
  lVar5 = 0;
LAB_1049a31d8:
  _objc_msgSend(uVar4,PTR_s_setSourceApplication_openURL__11265f578,uVar6,lVar5);
  _swift_unknownObjectRelease(uVar4);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_msgSend(*(undefined8 *)(lVar7 + 0x40),PTR_s_registerAutoResetSourceApplicati_112627190);
  _objc_msgSend(*(undefined8 *)(lVar7 + 400),PTR_s_validateFacebookReservedURLSchem_112525308);
  return;
}



/* Entry: 1049a35ac; end: 1049a36ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a35ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = _DAT_1130a2c18;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c18,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  lVar4 = *(long *)(unaff_x20 + _DAT_1130a2c00);
  _objc_msgSend(*(undefined8 *)(lVar4 + 0x40),PTR_s_setApplicationState__112638080,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x208);
  _objc_msgSend(uVar1,PTR_s_isAutoLogAppEventsEnabled_1125f8d30);
  if ((int)uVar1 != 0) {
    _objc_msgSend(*(undefined8 *)(lVar4 + 0x40),PTR_s_activateApp_1125252a8);
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x138);
  _objc_msgSend(uVar1,PTR_s_isEnabled__1125fa018,0x1010602);
  if ((int)uVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x210);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x218);
  }
  if (lVar4 != 0) {
    _objc_msgSend(lVar4,PTR_s_checkAndRevokeTimer_1125252a0);
  }
  lVar4 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_60,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
  _objc_msgSend(uVar2,PTR_s_allObjects_11259db00);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x1130a2c28;
  func_0x0001048db364(0x1130a2c28);
  uVar3 = uVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar1);
  _objc_release(uVar2);
  uStack_80 = param_1;
  FUN_1049a4430(FUN_1049a820c,auStack_90,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1049a3700; end: 1049a377f;  */

void FUN_1049a3700(ulong param_1)

{
  undefined *puVar1;
  
  if ((param_1 & 1) != 0) {
    puVar1 = PTR_PTR_1126ae018;
    _swift_getInitializedObjCClass(PTR_PTR_1126ae018);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1049a3780; end: 1049a3d03;  */

uint FUN_1049a3780(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = &stack0xffffffffffffffa0 + -uVar5;
  lVar7 = (long)puVar8 - uVar5;
  uVar5 = param_2;
  puVar4 = PTR_s_activityType_11259a008;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar3 = puVar4;
  _objc_release(uVar5);
  uVar5 = *(ulong *)PTR__NSUserActivityTypeBrowsingWeb_110345670;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar2 == uVar5 && puVar4 == puVar3) {
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(puVar3);
LAB_1049a386c:
    _objc_msgSend(param_2,PTR_s_webpageURL_112686bc8);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar8);
      _objc_release(param_2);
      (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar1);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x00010499c19c();
      _swift_release(puVar4);
      func_0x0001049a3928(param_1,lVar7,puVar3);
      uVar6 = (uint)param_1;
      _swift_bridgeObjectRelease(puVar3);
      (**(code **)(lVar9 + 8))(lVar7,lVar1);
      goto LAB_1049a3904;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,puVar4,uVar5,puVar3,0);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(puVar3);
    if ((uVar2 & 1) != 0) goto LAB_1049a386c;
  }
  uVar6 = 0;
LAB_1049a3904:
  return uVar6 & 1;
}



/* Entry: 1049a3d04; end: 1049a3d7b; -[FBSDKApplicationDelegate application:continueUserActivity:] */

uint FUN_1049a3d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1049a3780(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049a3d7c; end: 1049a404b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1049a3d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_100 [16];
  long alStack_f0 [6];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_91;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  uStack_b0 = param_1;
  uStack_a8 = param_5;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  lVar1 = -(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(unaff_x20 + _DAT_1130a2c00);
  uVar12 = *(undefined8 *)(lVar11 + 0x40);
  lStack_c0 = param_4;
  uStack_b8 = param_3;
  if (param_4 == 0) {
    uVar8 = uVar12;
    _swift_unknownObjectRetain(uVar12);
    param_3 = 0;
  }
  else {
    _swift_unknownObjectRetain(uVar12);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar8 = param_3;
  }
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  _objc_msgSend(uVar12,PTR_s_setSourceApplication_openURL__11265f578,param_3,uVar8);
  _swift_unknownObjectRelease(uVar12);
  _objc_release(param_3);
  _objc_release(uVar8);
  uVar12 = *(undefined8 *)(lVar11 + 0x138);
  (**(code **)(lVar10 + 0x10))((long)&lStack_c0 + lVar1,param_2,lVar3);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar13 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1107ba828;
  _swift_allocObject(&UNK_1107ba828,uVar13 + lVar9,uVar7 | 7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar13,(long)&lStack_c0 + lVar1,lVar3);
  pcStack_70 = FUN_1049a8568;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_1107ba840;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puVar4 = puStack_68;
  _swift_unknownObjectRetain(uVar12);
  _objc_retain();
  _swift_release(puVar4);
  _objc_msgSend(uVar12,PTR_s_checkFeature_completionBlock__1125ab940,0x1010800,ppuVar5);
  __Block_release(ppuVar5);
  _swift_unknownObjectRelease(uVar12);
  lVar3 = _DAT_1130a2bf8;
  bStack_91 = 0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,&puStack_90,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  _objc_msgSend(uVar6,PTR_s_allObjects_11259db00);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x1130a2c28;
  func_0x0001048db364(0x1130a2c28);
  uVar8 = uVar6;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar6,uVar12);
  _objc_release(uVar6);
  uVar12 = uStack_b8;
  *(undefined8 *)((long)alStack_f0 + lVar1) = uStack_b0;
  *(undefined8 *)((long)alStack_f0 + lVar1 + 8) = param_2;
  lVar3 = lStack_c0;
  *(undefined8 *)((long)alStack_f0 + lVar1 + 0x10) = uVar12;
  *(long *)((long)alStack_f0 + lVar1 + 0x18) = lVar3;
  *(undefined8 *)((long)alStack_f0 + lVar1 + 0x20) = uStack_a8;
  *(byte **)((long)alStack_f0 + lVar1 + 0x28) = &bStack_91;
  FUN_1049a4430(FUN_1049a856c,auStack_100 + lVar1,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = *(undefined8 *)(lVar11 + 0x68);
  uVar12 = uVar8;
  _swift_unknownObjectRetain(uVar8);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  _objc_msgSend(uVar8,PTR_s_saveCampaignIDs__112630298,uVar12);
  _swift_unknownObjectRelease(uVar8);
  _objc_release(uVar12);
  bVar2 = bStack_91;
  if ((bStack_91 & 1) == 0) {
    FUN_1049a453c(param_2);
  }
  return bVar2;
}



/* Entry: 1049a404c; end: 1049a4163; -[FBSDKApplicationDelegate application:openURL:options:] */

uint FUN_1049a404c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_4);
  uVar2 = 0;
  func_0x000101428080(0);
  uVar3 = 0x112d7ec18;
  func_0x0001049a8504(0x112d7ec18,&SUB_101428080,&UNK_10d93cc64);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar3 = param_3;
  func_0x0001049a3928(param_3,puVar4,param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_5);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  return (uint)uVar3 & 1;
}



/* Entry: 1049a4164; end: 1049a4293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a4164(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar2 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + _DAT_1130a2c00) + 0x138);
    func_0x000104934940(0);
    _swift_unknownObjectRetain(uVar3);
    _objc_msgSend();
    FUN_104934e00();
    _objc_msgSend(uVar3,PTR_s_isEnabled__1125fa018,0x1010801);
    FUN_104934e00();
    _objc_msgSend(uVar3,PTR_s_isEnabled__1125fa018,0x1010803);
    func_0x000104934e08();
    FUN_10492a020();
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar4 = *(long *)(lVar1 + -8);
    (**(code **)(lVar4 + 0x10))(puVar2,param_3,lVar1);
    (**(code **)(lVar4 + 0x38))(puVar2,0,1,lVar1);
    FUN_10492a0a0(puVar2);
    _swift_unknownObjectRelease(uVar3);
    FUN_1049a83a8(puVar2,0x11309c5e0);
  }
  return;
}



/* Entry: 1049a4294; end: 1049a442f;  */

void FUN_1049a4294(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  _objc_msgSend(uVar3,PTR_s_respondsToSelector__11262c7e0,
                PTR_s_application_openURL_sourceApplic_11259f738);
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar3;
    _swift_unknownObjectRetain(uVar3);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    uVar5 = 0;
    if (param_5 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
      uVar5 = param_4;
    }
    func_0x0001049a8408(param_6,auStack_80,0x11309c428);
    if (lStack_68 == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = auStack_80;
      func_0x0001049a83e4(puVar6,lStack_68);
      lVar4 = *(long *)(lStack_68 + -8);
      puVar7 = auStack_90 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puStack_88 = auStack_90;
      (**(code **)(lVar4 + 0x10))(puVar7,puVar6,lStack_68);
      puVar6 = puVar7;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar7,lStack_68);
      (**(code **)(lVar4 + 8))(puVar7,lStack_68);
      FUN_1049a8308(auStack_80);
    }
    uVar2 = uVar3;
    _objc_msgSend(uVar3,PTR_s_application_openURL_sourceApplic_11259f738,param_2,uVar1,uVar5,puVar6)
    ;
    _swift_unknownObjectRelease(uVar3);
    _swift_unknownObjectRelease(puVar6);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((int)uVar2 != 0) {
      *param_7 = 1;
    }
  }
  return;
}



/* Entry: 1049a4430; end: 1049a453b;  */

void FUN_1049a4430(code *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long unaff_x21;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_58;
  
  if (param_3 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar3 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1049a44fc);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(param_3 + uVar4 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar5);
      }
      else {
        uVar5 = uVar4;
        func_0x000104999b34(uVar4,param_3);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1049a44f8);
        (*pcVar1)();
      }
      uVar2 = uVar4 + 1;
      uStack_58 = uVar5;
      (*param_1)(&uStack_58);
      _swift_unknownObjectRelease(uVar5);
    } while ((unaff_x21 == 0) && (uVar4 = uVar4 + 1, uVar2 != uVar3));
  }
  return;
}



/* Entry: 1049a453c; end: 1049a50af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a453c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  undefined8 ***pppuVar11;
  ulong **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  undefined8 ***pppuVar16;
  ulong **ppuVar17;
  long unaff_x20;
  ulong uVar18;
  ulong **ppuVar19;
  ulong *unaff_x22;
  ulong **ppuVar20;
  ulong *puVar21;
  ulong *puStack_e0;
  long in_stack_ffffffffffffff28;
  undefined8 **ppuStack_c0;
  ulong *puStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_90;
  ulong **ppuStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 0x11309c5e0;
  func_0x0001048db364();
  pppuVar16 = (undefined8 ***)
              ((long)&puStack_e0 -
              (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  ppuVar3 = (ulong **)0x0;
  __s10Foundation3URLVMa();
  ppuVar17 = (ulong **)ppuVar3[-1];
  ppuVar20 = (ulong **)((long)pppuVar16 - ((long)ppuVar17[8] + 0xfU & 0xfffffffffffffff0));
  puVar4 = (ulong *)0x0;
  __sSS10FoundationE8EncodingVMa();
  ppuVar19 = (ulong **)puVar4[-1];
  puVar21 = (ulong *)((long)ppuVar20 - ((long)ppuVar19[8] + 0xfU & 0xfffffffffffffff0));
  puVar5 = puVar4;
  __s10Foundation3URLV5querySSSgvg();
  if (param_2 == 0) goto LAB_1049a49fc;
  puVar6 = PTR_PTR_1126add58;
  _swift_getInitializedObjCClass();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar5,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(puVar6,PTR_s_dictionaryWithQueryString__1125ba1d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = puVar6;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _objc_release(puVar6);
  if (*(long *)(puVar7 + 0x10) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_1049a507c;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
    return;
  }
  _swift_bridgeObjectRetain(puVar7);
  lVar8 = 0x696c7070615f6c61;
  uVar18 = 0;
  func_0x000100029284();
  in_stack_ffffffffffffff28 = unaff_x20;
  if ((uVar18 & 1) == 0) {
    _swift_bridgeObjectRelease_n(puVar7,2);
    unaff_x22 = puVar5;
    goto LAB_1049a49fc;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + lVar8 * 0x10);
  ppuVar10 = (ulong **)*puVar1;
  pppuVar11 = (undefined8 ***)puVar1[1];
  _swift_bridgeObjectRetain(pppuVar11);
  _swift_bridgeObjectRelease_n(puVar7,2);
  ppuStack_90 = ppuVar10;
  ppuStack_88 = (ulong **)pppuVar11;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar21);
  func_0x000100e8b654();
  puVar15 = (ulong *)0x0;
  puVar5 = puVar21;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar21,0,PTR___sSSN_11034da80,puVar7);
  (*(code *)ppuVar19[1])(puVar21,puVar4);
  _swift_bridgeObjectRelease(pppuVar11);
  unaff_x22 = puVar5;
  puVar4 = puVar15;
  if (0xe < (ulong)puVar15 >> 0x3c) goto LAB_1049a49fc;
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  puVar9 = puVar5;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar5,puVar15);
  ppuStack_90 = (ulong **)0x0;
  _objc_msgSend(puVar6,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar9,0,&ppuStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  ppuVar19 = ppuStack_90;
  if (puVar6 == (undefined *)0x0) {
    ppuVar17 = ppuStack_90;
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(ppuVar17);
    _swift_willThrow();
    func_0x0001000b44c0(puVar5,puVar15);
    _swift_errorRelease(ppuVar19);
    ppuVar17 = ppuVar19;
    goto LAB_1049a49fc;
  }
  _objc_retain();
  __ss018_bridgeAnyObjectToB0yypyXlSgF(&ppuStack_90,puVar6);
  _swift_unknownObjectRelease(puVar6);
  puVar21 = (ulong *)0x11309c420;
  func_0x0001048db364(0x11309c420);
  ppuVar19 = (ulong **)PTR___sypN_11034f1a8;
  ppuVar10 = &puStack_b0;
  _swift_dynamicCast(ppuVar10,&ppuStack_90,PTR___sypN_11034f1a8 + 8,puVar21,6);
  puVar4 = puStack_b0;
  if (((ulong)ppuVar10 & 1) == 0) {
    func_0x0001000b44c0(puVar5,puVar15);
    puVar4 = puVar15;
    goto LAB_1049a49fc;
  }
  ppuStack_c0 = (undefined8 **)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar18 = puStack_b0[2];
  puStack_e0 = puVar15;
  _swift_retain();
  if (uVar18 != 0) {
    _swift_bridgeObjectRetain(puVar4);
    lVar8 = 0x755f746567726174;
    uVar18 = 0;
    func_0x000100029284(0x755f746567726174);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(puVar4[7] + lVar8 * 0x20,&ppuStack_90);
      _swift_bridgeObjectRelease(puVar4);
      ppuVar10 = &puStack_b0;
      _swift_dynamicCast(ppuVar10,&ppuStack_90,(undefined *)((long)ppuVar19 + 8),
                         PTR___sSSN_11034da80,6);
      puVar15 = puStack_b0;
      if ((((ulong)ppuVar10 & 1) != 0) && (lStack_a8 != 0)) {
        _swift_bridgeObjectRetain(lStack_a8);
        __s10Foundation3URLV6stringACSgSSh_tcfC(pppuVar16,puVar15,lStack_a8);
        _swift_bridgeObjectRelease_n(lStack_a8,2);
        pppuVar11 = pppuVar16;
        (*(code *)ppuVar17[6])(pppuVar16,1,ppuVar3);
        if ((int)pppuVar11 != 1) {
          ppuVar10 = ppuVar20;
          (*(code *)ppuVar17[4])(ppuVar20,pppuVar16,ppuVar3);
          if (lRam000000011309fe40 != -1) goto LAB_1049a5080;
          goto LAB_1049a48d0;
        }
        goto LAB_1049a4aa4;
      }
    }
  }
  (*(code *)ppuVar17[7])(pppuVar16,1,1,ppuVar3);
LAB_1049a4aa4:
  func_0x0001049a83a8(pppuVar16,0x11309c5e0);
  ppuVar20 = (ulong **)PTR___sSSN_11034da80;
  if (puVar4[2] == 0) goto LAB_1049a4b20;
LAB_1049a4acc:
  ppuVar20 = (ulong **)PTR___sSSN_11034da80;
  _swift_bridgeObjectRetain(puVar4);
  lVar8 = 0x5f72657265666572;
  uVar18 = 0;
  func_0x000100029284(0x5f72657265666572);
  if ((uVar18 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar4);
    goto LAB_1049a4b20;
  }
  func_0x0001000bb420(puVar4[7] + lVar8 * 0x20,&ppuStack_90);
  _swift_bridgeObjectRelease(puVar4);
  do {
    _swift_bridgeObjectRelease(puVar4);
    if (ppuStack_78 == (ulong **)0x0) {
      lVar8 = -0x80;
LAB_1049a4dd8:
      pppuVar16 = (undefined8 ***)0x11309c428;
      ppuVar17 = (ulong **)(&stack0xfffffffffffffff0 + lVar8);
      func_0x0001049a83a8();
    }
    else {
      ppuVar17 = &puStack_b0;
      pppuVar16 = &ppuStack_90;
      _swift_dynamicCast(ppuVar17,pppuVar16,ppuVar19 + 1,puVar21,6);
      puVar4 = puStack_b0;
      if (((ulong)ppuVar17 & 1) != 0) {
        if (lRam000000011309fe50 != -1) {
          _swift_once(0x11309fe50,0x1049a65c0);
        }
        uVar14 = uRam00000001130a2b90;
        if (puVar4[2] == 0) {
LAB_1049a4c10:
          FUN_104908fd8(&ppuStack_90,uVar14);
          func_0x0001049a83a8(&ppuStack_90,0x11309c428);
        }
        else {
          _swift_bridgeObjectRetain(puVar4);
          lVar8 = 0x755f746567726174;
          uVar18 = 0;
          func_0x000100029284(0x755f746567726174);
          if ((uVar18 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar4);
            goto LAB_1049a4c10;
          }
          func_0x0001000bb420(puVar4[7] + lVar8 * 0x20,&ppuStack_90);
          _swift_bridgeObjectRelease(puVar4);
          func_0x000100102924(&ppuStack_90,&puStack_b0);
          ppuVar17 = ppuStack_c0;
          _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
          FUN_104902c18(&puStack_b0,uVar14,ppuVar17);
        }
        if (lRam000000011309fe58 != -1) {
          _swift_once(0x11309fe58,0x1049a65f4);
        }
        uVar14 = uRam00000001130a2b98;
        if (puVar4[2] == 0) {
LAB_1049a4ccc:
          FUN_104908fd8(&ppuStack_90,uVar14);
          func_0x0001049a83a8(&ppuStack_90,0x11309c428);
        }
        else {
          _swift_bridgeObjectRetain(puVar4);
          lVar8 = 0x6c7275;
          uVar18 = 0;
          func_0x000100029284(0x6c7275);
          if ((uVar18 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar4);
            goto LAB_1049a4ccc;
          }
          func_0x0001000bb420(puVar4[7] + lVar8 * 0x20,&ppuStack_90);
          _swift_bridgeObjectRelease(puVar4);
          func_0x000100102924(&ppuStack_90,&puStack_b0);
          ppuVar17 = ppuStack_c0;
          _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
          FUN_104902c18(&puStack_b0,uVar14,ppuVar17);
        }
        if (lRam000000011309fe60 != -1) {
          _swift_once(0x11309fe60,0x1049a662c);
        }
        pppuVar16 = pppuRam00000001130a2ba0;
        if (puVar4[2] == 0) {
LAB_1049a4d58:
          ppuStack_88 = (ulong **)0x0;
          ppuStack_90 = (ulong **)0x0;
          ppuStack_78 = (ulong **)0x0;
          uStack_80 = 0;
        }
        else {
          _swift_bridgeObjectRetain(puVar4);
          lVar8 = 0x656d616e5f707061;
          uVar18 = 0;
          func_0x000100029284(0x656d616e5f707061);
          if ((uVar18 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar4);
            goto LAB_1049a4d58;
          }
          func_0x0001000bb420(puVar4[7] + lVar8 * 0x20,&ppuStack_90);
          _swift_bridgeObjectRelease(puVar4);
        }
        _swift_bridgeObjectRelease(puVar4);
        if (ppuStack_78 == (ulong **)0x0) {
          func_0x0001049a83a8(&ppuStack_90,0x11309c428);
          FUN_104908fd8(&puStack_b0,pppuVar16);
          lVar8 = -0xa0;
          goto LAB_1049a4dd8;
        }
        func_0x000100102924(&ppuStack_90,&puStack_b0);
        ppuVar3 = ppuStack_c0;
        _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
        ppuVar17 = &puStack_b0;
        FUN_104902c18(ppuVar17,pppuVar16,ppuVar3);
      }
    }
    if (lRam000000011309fe68 != -1) {
      ppuVar17 = (ulong **)0x11309fe68;
      pppuVar16 = (undefined8 ***)0x1049a6668;
      _swift_once();
    }
    pppuVar11 = pppuRam00000001130a2ba8;
    __s10Foundation3URLV14absoluteStringSSvg();
    ppuStack_90 = ppuVar17;
    ppuStack_88 = (ulong **)pppuVar16;
    ppuStack_78 = ppuVar20;
    func_0x000100102924(&ppuStack_90,&puStack_b0);
    ppuVar17 = ppuStack_c0;
    _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
    FUN_104902c18(&puStack_b0,pppuVar11,ppuVar17);
    if (lRam000000011309fe70 != -1) {
      pppuVar11 = (undefined8 ***)0x1049a6698;
      _swift_once(0x11309fe70);
    }
    ppuVar17 = ppuRam00000001130a2bb0;
    _objc_retain();
    ppuVar3 = ppuVar17;
    __s10Foundation3URLV6schemeSSSgvg();
    if (pppuVar11 == (undefined8 ***)0x0) {
      FUN_104908fd8(&ppuStack_90,ppuVar17);
      _objc_release(ppuVar17);
      func_0x0001049a83a8(&ppuStack_90,0x11309c428);
    }
    else {
      ppuStack_90 = ppuVar3;
      ppuStack_88 = (ulong **)pppuVar11;
      ppuStack_78 = ppuVar20;
      func_0x000100102924(&ppuStack_90,&puStack_b0);
      ppuVar3 = ppuStack_c0;
      _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
      FUN_104902c18(&puStack_b0,ppuVar17,ppuVar3);
      _objc_release(ppuVar17);
    }
    lVar8 = lRam000000011309fe30;
    ppuVar17 = *(ulong ***)(*(long *)(unaff_x20 + _DAT_1130a2c00) + 0x40);
    _swift_unknownObjectRetain(ppuVar17);
    puVar4 = puStack_e0;
    if (lVar8 != -1) {
      _swift_once(0x11309fe30,FUN_1049a64d8);
    }
    uVar2 = uRam00000001130a2b70;
    uVar13 = 0;
    FUN_1048db924(0);
    uVar14 = 0x11309c318;
    func_0x0001049a8504(0x11309c318,FUN_1048db924,&UNK_10dd46f00);
    ppuVar3 = ppuStack_c0;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (ppuStack_c0,uVar13,ppuVar19 + 1,uVar14);
    _swift_bridgeObjectRelease(ppuStack_c0);
    _objc_msgSend(ppuVar17,PTR_s_logInternalEvent_parameters_isIm_112607d68,uVar2,ppuVar3,1);
    func_0x0001000b44c0(puVar5,puVar4);
    _swift_unknownObjectRelease(ppuVar17);
    _objc_release(ppuVar3);
    ppuVar19 = ppuStack_c0;
    unaff_x22 = puVar5;
    ppuVar3 = ppuStack_c0;
    in_stack_ffffffffffffff28 = unaff_x20;
LAB_1049a49fc:
    puVar5 = unaff_x22;
    unaff_x20 = in_stack_ffffffffffffff28;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
LAB_1049a507c:
    ___stack_chk_fail();
LAB_1049a5080:
    ppuVar10 = (ulong **)0x11309fe40;
    pppuVar16 = (undefined8 ***)0x1049a6550;
    _swift_once();
LAB_1049a48d0:
    pppuVar11 = pppuRam00000001130a2b80;
    __s10Foundation3URLV14absoluteStringSSvg();
    ppuStack_78 = (undefined8 **)PTR___sSSN_11034da80;
    ppuStack_90 = ppuVar10;
    ppuStack_88 = (ulong **)pppuVar16;
    func_0x000100102924(&ppuStack_90,&puStack_b0);
    ppuVar10 = ppuStack_c0;
    _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
    FUN_104902c18(&puStack_b0,pppuVar11,ppuVar10);
    if (lRam000000011309fe48 != -1) {
      pppuVar11 = (undefined8 ***)0x1049a6584;
      _swift_once(0x11309fe48);
    }
    ppuVar10 = ppuRam00000001130a2b88;
    _objc_retain();
    ppuVar12 = ppuVar10;
    __s10Foundation3URLV4hostSSSgvg();
    if (pppuVar11 == (undefined8 ***)0x0) {
      FUN_104908fd8(&ppuStack_90,ppuVar10);
      _objc_release(ppuVar10);
      func_0x0001049a83a8(&ppuStack_90,0x11309c428);
      (*(code *)ppuVar17[1])(ppuVar20,ppuVar3);
    }
    else {
      ppuStack_78 = (undefined8 **)PTR___sSSN_11034da80;
      ppuStack_90 = ppuVar12;
      ppuStack_88 = (ulong **)pppuVar11;
      func_0x000100102924(&ppuStack_90,&puStack_b0);
      ppuVar12 = ppuStack_c0;
      _swift_isUniquelyReferenced_nonNull_native(ppuStack_c0);
      FUN_104902c18(&puStack_b0,ppuVar10,ppuVar12);
      _objc_release(ppuVar10);
      (*(code *)ppuVar17[1])(ppuVar20,ppuVar3);
    }
    ppuVar20 = (ulong **)PTR___sSSN_11034da80;
    if (puVar4[2] != 0) goto LAB_1049a4acc;
LAB_1049a4b20:
    ppuStack_88 = (ulong **)0x0;
    ppuStack_90 = (ulong **)0x0;
    ppuStack_78 = (ulong **)0x0;
    uStack_80 = 0;
  } while( true );
}



/* Entry: 1049a50b0; end: 1049a51ef; -[FBSDKApplicationDelegate application:openURL:sourceApplication:annotation:] */

uint FUN_1049a50b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = (long)&uStack_70 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_6 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    _objc_retain(param_3);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_3);
    _swift_unknownObjectRetain(param_6);
    _objc_retain(param_1);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_6);
    _swift_unknownObjectRelease(param_6);
  }
  uVar2 = param_3;
  FUN_1049a3d7c(param_3,lVar3,param_5,param_2,&uStack_70);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_1049a83a8(&uStack_70,0x11309c428);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 1049a51f0; end: 1049a52db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a51f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_1130a2c10;
  _swift_beginAccess(param_1 + _DAT_1130a2c10,auStack_58,1,0);
  *(undefined1 *)(param_1 + lVar3) = 1;
  FUN_1049a52dc();
  lVar3 = *(long *)(param_1 + _DAT_1130a2c00);
  _objc_msgSend(*(undefined8 *)(lVar3 + 0x1f8),PTR_s_loadServerConfigurationWithCompl_112604a70,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x208);
  _objc_msgSend(uVar1,PTR_s_isAutoLogAppEventsEnabled_1125f8d30);
  if ((int)uVar1 != 0) {
    FUN_1049a5370();
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x1e0);
  _swift_getObjCClassFromMetadata(uVar2);
  uVar1 = uVar2;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,PTR_s_setCurrentProfile__11263f878,uVar1);
  _objc_release(uVar1);
  FUN_1049a5a84();
  FUN_1049a5b30(param_2,param_3);
  return;
}



/* Entry: 1049a52dc; end: 1049a536f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a52dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_1130a2c00) + 0x18);
  _swift_getObjCClassFromMetadata();
  lVar2 = lVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar2);
  }
  _objc_msgSend(lVar1,PTR_s_setCurrentAccessToken__11263f5e0,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1049a5370; end: 1049a5a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a5370(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x20;
  long lVar20;
  ulong uVar21;
  ulong uStack_1b0;
  undefined1 auStack_1a0 [32];
  undefined8 auStack_180 [3];
  undefined *puStack_168;
  
  lVar20 = 0x1130a2c30;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar20 + 0x18) = 0xc;
  *(undefined8 *)(lVar20 + 0x10) = 6;
  *(undefined8 *)(lVar20 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(lVar20 + 0x28) = 0x800000010f21b4f0;
  if (lRam000000011309fe80 != -1) {
    _swift_once(0x11309fe80,0x1049a6708);
  }
  *(undefined8 *)(lVar20 + 0x30) = uRam00000001130a2bc0;
  *(undefined8 *)(lVar20 + 0x38) = 0x7475414b44534246;
  *(undefined8 *)(lVar20 + 0x40) = 0xec000000676f4c6f;
  lVar5 = lRam000000011309fe88;
  _objc_retain();
  if (lVar5 != -1) {
    _swift_once(0x11309fe88,0x1049a673c);
  }
  *(undefined8 *)(lVar20 + 0x48) = uRam00000001130a2bc8;
  *(undefined8 *)(lVar20 + 0x50) = 0xd000000000000014;
  *(undefined8 *)(lVar20 + 0x58) = 0x800000010f2263f0;
  lVar5 = lRam000000011309fe90;
  _objc_retain();
  if (lVar5 != -1) {
    _swift_once(0x11309fe90,0x1049a6770);
  }
  *(undefined8 *)(lVar20 + 0x60) = uRam00000001130a2bd0;
  *(undefined8 *)(lVar20 + 0x68) = 0xd000000000000012;
  *(undefined8 *)(lVar20 + 0x70) = 0x800000010f226410;
  lVar5 = lRam000000011309fe98;
  _objc_retain();
  if (lVar5 != -1) {
    _swift_once(0x11309fe98,0x1049a67a4);
  }
  *(undefined8 *)(lVar20 + 0x78) = uRam00000001130a2bd8;
  *(undefined8 *)(lVar20 + 0x80) = 0xd000000000000010;
  *(undefined8 *)(lVar20 + 0x88) = 0x800000010f226430;
  lVar5 = lRam000000011309fea0;
  _objc_retain();
  if (lVar5 != -1) {
    _swift_once(0x11309fea0,0x1049a67d8);
  }
  *(undefined8 *)(lVar20 + 0x90) = uRam00000001130a2be0;
  *(undefined8 *)(lVar20 + 0x98) = 0xd000000000000017;
  *(undefined8 *)(lVar20 + 0xa0) = 0x800000010f226450;
  lVar5 = lRam000000011309fea8;
  _objc_retain();
  if (lVar5 != -1) {
    _swift_once(0x11309fea8,0x1049a680c);
  }
  *(undefined8 *)(lVar20 + 0xa8) = uRam00000001130a2be8;
  _objc_retain();
  lVar5 = lVar20;
  FUN_10499c1b0();
  _swift_setDeallocating(lVar20);
  uVar11 = 0x1130a2c38;
  func_0x0001048db364(0x1130a2c38);
  _swift_arrayDestroy((undefined8 *)(lVar20 + 0x20),6,uVar11);
  uVar21 = 0x1130a2c40;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(uVar21 + 0x18) = 2;
  *(undefined8 *)(uVar21 + 0x10) = 1;
  if (lRam000000011309fe78 != -1) {
    _swift_once(0x11309fe78,0x1049a66d4);
  }
  uVar11 = uRam00000001130a2bb8;
  *(undefined **)(uVar21 + 0x40) = PTR___sSiN_11034deb0;
  *(undefined8 *)(uVar21 + 0x20) = uVar11;
  *(undefined8 *)(uVar21 + 0x28) = 1;
  _objc_retain();
  uVar6 = uVar21;
  FUN_10499c188();
  _swift_setDeallocating(uVar21);
  FUN_1049a83a8(uVar21 + 0x20,0x1130a2938);
  uVar15 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar21 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar21 = uVar21 & *(ulong *)(lVar5 + 0x40);
  _swift_bridgeObjectRetain(lVar5);
  lVar20 = 0;
  uVar17 = 0;
  uStack_1b0 = 0;
  do {
    while (uVar21 == 0) {
      bVar4 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a59c0);
        (*pcVar3)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar20) {
        _swift_release(lVar5);
        _swift_bridgeObjectRelease(lVar5);
        lVar20 = *(long *)(unaff_x20 + _DAT_1130a2c00);
        uVar15 = *(ulong *)(lVar20 + 0xf8);
        _swift_unknownObjectRetain(uVar15);
        uVar11 = 0xd00000000000001d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f226470)
        ;
        uVar21 = uVar15;
        _objc_msgSend(uVar15,PTR_s_fb_integerForKey__1125252b0,uVar11);
        _swift_unknownObjectRelease(uVar15);
        _objc_release(uVar11);
        if (uVar21 == uStack_1b0) {
          _swift_bridgeObjectRelease(uVar6);
        }
        else {
          uVar18 = *(undefined8 *)(lVar20 + 0xf8);
          _swift_unknownObjectRetain(uVar18);
          uVar11 = 0xd00000000000001d;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd00000000000001d,0x800000010f226470);
          _objc_msgSend(uVar18,PTR_s_fb_setInteger_forKey__1125252b8,uStack_1b0,uVar11);
          _swift_unknownObjectRelease(uVar18);
          _objc_release(uVar11);
          uVar19 = *(undefined8 *)(lVar20 + 0x40);
          uVar18 = 0;
          FUN_1048db924(0);
          uVar11 = 0x11309c318;
          func_0x0001049a8504(0x11309c318,FUN_1048db924,&UNK_10dd46f00);
          _swift_unknownObjectRetain(uVar19);
          uVar21 = uVar6;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (uVar6,uVar18,PTR___sypN_11034f1a8 + 8,uVar11);
          _objc_msgSend(uVar19,PTR_s_logInternalEvent_parameters_isIm_112607d68,
                        &PTR____CFConstantStringClassReference_110da0d98,uVar21,0);
          _swift_bridgeObjectRelease(uVar6);
          _swift_unknownObjectRelease(uVar19);
          _objc_release(uVar21);
        }
        return;
      }
      uVar21 = ((ulong *)(lVar5 + 0x40))[lVar20];
    }
    uVar14 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar20 << 6;
    plVar1 = (long *)(*(long *)(lVar5 + 0x30) + uVar14 * 0x10);
    lVar7 = *plVar1;
    lVar2 = plVar1[1];
    uVar14 = *(ulong *)(*(long *)(lVar5 + 0x38) + uVar14 * 8);
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar7,lVar2);
    _swift_bridgeObjectRetain(lVar2);
    _objc_retain();
    lVar8 = lVar7 + 0x20;
    _objc_lookUpClass();
    _swift_release(lVar7);
    if (lVar8 == 0) {
      _objc_release(uVar14);
      _swift_bridgeObjectRelease(lVar2);
    }
    else {
      puStack_168 = PTR___sSiN_11034deb0;
      auStack_180[0] = 1;
      uVar13 = 0;
      func_0x000100102924(auStack_180);
      _objc_retain();
      uVar9 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar10 = uVar14;
      FUN_1048ddcc8();
      uVar16 = (ulong)~(uint)uVar13 & 1;
      lVar8 = *(long *)(uVar6 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(uVar6 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a59c8);
        (*pcVar3)();
      }
      if (*(long *)(uVar6 + 0x18) < lVar8) {
        FUN_1049a7bec(lVar8,uVar9,0x11309cb88);
        uVar12 = (uint)uVar9;
        uVar10 = uVar14;
        FUN_1048ddcc8();
        if (((uint)uVar13 & 1) != (uVar12 & 1)) {
          FUN_1048db924(0);
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a5a84);
          (*pcVar3)();
        }
LAB_1049a574c:
        if ((uVar13 & 1) == 0) goto LAB_1049a57ac;
LAB_1049a5754:
        lVar8 = *(long *)(uVar6 + 0x38) + uVar10 * 0x20;
        FUN_1049a8308(lVar8);
        func_0x000100102924(auStack_1a0,lVar8);
        _swift_bridgeObjectRelease(lVar2);
        _objc_release(uVar14);
        _objc_release(uVar14);
      }
      else {
        if ((uVar9 & 1) != 0) goto LAB_1049a574c;
        FUN_1049a6ee4(0x11309cb88);
        if ((uVar13 & 1) != 0) goto LAB_1049a5754;
LAB_1049a57ac:
        lVar8 = uVar6 + (uVar10 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar10 & 0x3f);
        *(ulong *)(*(long *)(uVar6 + 0x30) + uVar10 * 8) = uVar14;
        func_0x000100102924(auStack_1a0,*(long *)(uVar6 + 0x38) + uVar10 * 0x20);
        if (SCARRY8(*(long *)(uVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a59cc);
          (*pcVar3)();
        }
        *(long *)(uVar6 + 0x10) = *(long *)(uVar6 + 0x10) + 1;
        _objc_release(uVar14);
        _swift_bridgeObjectRelease(lVar2);
      }
      uVar14 = 1L << (uVar17 & 0x3f);
      if (0x3f < uVar17) {
        uVar14 = 0;
      }
      uVar13 = 0;
      if (0xffffffffffffff7e < uVar17 - 0x41) {
        uVar13 = uVar14;
      }
      uStack_1b0 = uVar13 | uStack_1b0;
    }
    uVar21 = uVar21 - 1 & uVar21;
    bVar4 = SCARRY8(uVar17,1);
    uVar17 = uVar17 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a59c4);
      (*pcVar3)();
    }
  } while( true );
}



/* Entry: 1049a5a84; end: 1049a5b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a5a84(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_1130a2c00) + 0xa0);
  _swift_getObjCClassFromMetadata();
  lVar2 = lVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar2);
  }
  _objc_msgSend(lVar1,PTR_s_setCurrentAuthenticationToken__11263f618,lVar3);
  _objc_release(lVar3);
  _swift_getInitializedObjCClass(PTR_PTR_1126ae008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049a5b30; end: 1049a5d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049a5b30(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  lVar12 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_78,0,0);
  uVar2 = *(ulong *)(unaff_x20 + lVar12);
  _objc_msgSend(uVar2,PTR_s_allObjects_11259db00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x1130a2c28;
  func_0x0001048db364(0x1130a2c28);
  uVar4 = uVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar2 + 0x10);
  }
  else {
    uVar9 = uVar2;
    if ((long)uVar4 < 0) {
      uVar9 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar2 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1049a5d0c);
            (*pcVar1)();
          }
          uVar11 = *(ulong *)(uVar4 + uVar7 * 8 + 0x20);
          _swift_unknownObjectRetain(uVar11);
        }
        else {
          uVar11 = uVar7;
          func_0x000104999b34(uVar7,uVar4);
        }
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1049a5d08);
          (*pcVar1)();
        }
        uVar10 = uVar7 + 1;
        uVar5 = uVar11;
        _objc_msgSend(uVar11,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_application_didFinishLaunchingWi_11259f720);
        if ((uVar5 & 1) == 0) break;
        if (param_2 == 0) {
          _swift_unknownObjectRetain(uVar11);
          lVar12 = 0;
        }
        else {
          uVar6 = 0;
          func_0x000100a149e4();
          uVar3 = 0x112d7f1d8;
          func_0x0001049a8504(0x112d7f1d8,&SUB_100a149e4,&UNK_10d93d430);
          _swift_unknownObjectRetain(uVar11);
          lVar12 = param_2;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (param_2,uVar6,PTR___sypN_11034f1a8 + 8,uVar3);
        }
        uVar7 = uVar11;
        _objc_msgSend(uVar11,PTR_s_application_didFinishLaunchingWi_11259f720,param_1,lVar12);
        _swift_unknownObjectRelease_n(uVar11,2);
        _objc_release(lVar12);
        uVar8 = (uint)uVar7 | uVar8;
        uVar7 = uVar10;
        if (uVar10 == uVar9) goto LAB_1049a5d24;
      }
      _swift_unknownObjectRelease(uVar11);
      uVar7 = uVar7 + 1;
    } while (uVar10 != uVar9);
  }
LAB_1049a5d24:
  _swift_bridgeObjectRelease(uVar4);
  return uVar8 & 1;
}



/* Entry: 1049a5d50; end: 1049a5e0b; -[FBSDKApplicationDelegate application:didFinishLaunchingWithOptions:] */

uint FUN_1049a5d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    func_0x000100a149e4(0);
    uVar2 = 0x112d7f1d8;
    func_0x0001049a8504(0x112d7f1d8,&SUB_100a149e4,&UNK_10d93d430);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  }
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x0001049a2d1c(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  return (uint)uVar2 & 1;
}



/* Entry: 1049a5e0c; end: 1049a5e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a5e0c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130a2c18;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c18,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = 2;
  _objc_msgSend(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_1130a2c00) + 0x40),
                PTR_s_setApplicationState__112638080,2);
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_70,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_msgSend(uVar2,PTR_s_allObjects_11259db00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x1130a2c28;
  func_0x0001048db364(0x1130a2c28);
  uVar4 = uVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  _objc_release(uVar2);
  uStack_80 = param_1;
  FUN_1049a4430(FUN_1049a8328,auStack_90,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Entry: 1049a5e1c; end: 1049a5e27; -[FBSDKApplicationDelegate applicationDidEnterBackground:] */

void FUN_1049a5e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_1049a5e0c(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1049a5e28; end: 1049a5fb3;  */

void FUN_1049a5e28(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0x1130a2c70;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *param_1;
  uVar1 = uVar7;
  _objc_msgSend(uVar7,PTR_s_respondsToSelector__11262c7e0,
                PTR_s_applicationDidBecomeActive__11259f788);
  if ((uVar1 & 1) == 0) {
    return;
  }
  func_0x0001049a8408(param_2,puVar6,0x1130a2c70);
  lVar2 = 0;
  __s10Foundation12NotificationVMa();
  lVar8 = *(long *)(lVar2 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar2);
  _swift_unknownObjectRetain(uVar7);
  if ((int)puVar3 == 1) {
    func_0x0001049a83a8(puVar6,0x1130a2c70);
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    __s10Foundation12NotificationV6objectypSgvg(&uStack_60);
    (**(code **)(lVar8 + 8))(puVar6,lVar2);
    if (lStack_48 != 0) {
      uVar4 = 0;
      func_0x0001049a84c4(0,0x112e33560,&PTR__OBJC_CLASS___UIApplication_1126ae590);
      puVar5 = &uStack_68;
      _swift_dynamicCast(puVar5,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if ((int)puVar5 == 0) {
        uStack_68 = 0;
      }
      goto LAB_1049a5f78;
    }
  }
  func_0x0001049a83a8(&uStack_60,0x11309c428);
  uStack_68 = 0;
LAB_1049a5f78:
  _objc_msgSend(uVar7,PTR_s_applicationDidBecomeActive__11259f788,uStack_68);
  _objc_release(uStack_68);
  _swift_unknownObjectRelease(uVar7);
  return;
}



/* Entry: 1049a5fb4; end: 1049a607b; -[FBSDKApplicationDelegate applicationDidBecomeActive:] */

void FUN_1049a5fb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = 0x1130a2c70;
  func_0x0001048db364();
  puVar2 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation12NotificationVMa();
  }
  else {
    __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
              (puVar2,param_3);
    lVar1 = 0;
    __s10Foundation12NotificationVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3 == 0,1);
  _objc_retain(param_1);
  FUN_1049a35ac(puVar2);
  _objc_release(param_1);
  FUN_1049a83a8(puVar2,0x1130a2c70);
  return;
}



/* Entry: 1049a607c; end: 1049a608b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a607c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130a2c18;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c18,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_msgSend(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_1130a2c00) + 0x40),
                PTR_s_setApplicationState__112638080,0);
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_70,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_msgSend(uVar2,PTR_s_allObjects_11259db00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x1130a2c28;
  func_0x0001048db364(0x1130a2c28);
  uVar4 = uVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  _objc_release(uVar2);
  uStack_80 = param_1;
  FUN_1049a4430(0x1049a8348,auStack_90,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Entry: 1049a608c; end: 1049a6183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a608c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_1130a2c18;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c18,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_2;
  _objc_msgSend(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_1130a2c00) + 0x40),
                PTR_s_setApplicationState__112638080,param_2);
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_70,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_msgSend(uVar2,PTR_s_allObjects_11259db00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x1130a2c28;
  func_0x0001048db364(0x1130a2c28);
  uVar4 = uVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  _objc_release(uVar2);
  uStack_80 = param_1;
  FUN_1049a4430(param_3,auStack_90,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Entry: 1049a6184; end: 1049a626b;  */

void FUN_1049a6184(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  _objc_msgSend(uVar4,PTR_s_respondsToSelector__11262c7e0,*param_3);
  if ((uVar1 & 1) != 0) {
    _swift_unknownObjectRetain(uVar4);
    __s10Foundation12NotificationV6objectypSgvg(auStack_50);
    if (lStack_38 == 0) {
      func_0x0001049a83a8(auStack_50,0x11309c428);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001049a84c4(0,0x112e33560,&PTR__OBJC_CLASS___UIApplication_1126ae590);
      puVar3 = &uStack_58;
      _swift_dynamicCast(puVar3,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
      uVar2 = uStack_58;
      if ((int)puVar3 == 0) {
        uVar2 = 0;
      }
    }
    _objc_msgSend(uVar4,*param_3,uVar2);
    _objc_release(uVar2);
    _swift_unknownObjectRelease(uVar4);
  }
  return;
}



/* Entry: 1049a626c; end: 1049a6277; -[FBSDKApplicationDelegate applicationWillResignActive:] */

void FUN_1049a626c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_1049a607c(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1049a6278; end: 1049a630f;  */

void FUN_1049a6278(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  (*param_4)(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1049a6310; end: 1049a63cf; -[FBSDKApplicationDelegate addObserver:] */

void FUN_1049a6310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_1049a80a8(param_3,param_1,uVar1);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049a63d0; end: 1049a642f; -[FBSDKApplicationDelegate removeObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a63d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(param_1 + _DAT_1130a2bf8,auStack_48,0,0);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar1),PTR_s_removeObject__112628ef8,param_3);
  return;
}



/* Entry: 1049a6430; end: 1049a6457; -[FBSDKApplicationDelegate logSDKInitialize] */

void FUN_1049a6430(undefined8 param_1)

{
  _objc_retain();
  FUN_1049a5370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049a6458; end: 1049a648b;  */

void FUN_1049a6458(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049a648c; end: 1049a64d7; -[FBSDKApplicationDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a648c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a2bf8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130a2c00));
  FUN_1049a8308(param_1 + _DAT_1130a2c08);
  return;
}



/* Entry: 1049a64d8; end: 1049a6883;  */

void FUN_1049a64d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6e695f6c615f6266;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e695f6c615f6266,0xed0000646e756f62);
  uRam00000001130a2b70 = uVar1;
  return;
}



/* Entry: 1049a6884; end: 1049a6a77;  */

void FUN_1049a6884(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  ulong uStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  func_0x0001048db364(0x1130a2960);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar10 + 0x10) == 0) {
    _swift_release(lVar10);
LAB_1049a6a50:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar10 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar4 != lVar10 || lVar1 + uVar7 * 8 <= lVar4 + 0x40U) {
    _memmove(lVar4 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
  uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uStack_68 = ~(-1L << (uVar7 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar10 + 0x40);
  if (uStack_68 == 0) goto LAB_1049a699c;
  do {
    uVar8 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar8 = LZCOUNT(uVar8) | lVar12 << 6;
      lVar9 = *(long *)(lVar5 + 0x48) * uVar8;
      (**(code **)(lVar5 + 0x10))
                (auStack_a0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),*(long *)(lVar10 + 0x30) + lVar9,
                 lVar3);
      uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
      (**(code **)(lVar5 + 0x20))
                (*(long *)(lVar4 + 0x30) + lVar9,auStack_a0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),
                 lVar3);
      *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar11;
      _objc_retain(uVar11);
      if (uStack_68 != 0) break;
LAB_1049a699c:
      do {
        lVar9 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1049a6a78);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          _swift_release(lVar10);
          goto LAB_1049a6a50;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar9 * 8);
        lVar12 = lVar12 + 1;
      } while (uStack_68 == 0);
      uVar8 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar12 = lVar9;
    }
  } while( true );
}



/* Entry: 1049a6a78; end: 1049a6bd3;  */

void FUN_1049a6a78(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001048db364(0x1130a2930);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1049a6b48;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x10);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        *(undefined1 *)(*(long *)(lVar7 + 0x30) + uVar10) =
             *(undefined1 *)(*(long *)(lVar11 + 0x30) + uVar10);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x10);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_1049a6b48:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1049a6bd4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1049a6bac;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1049a6bac:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1049a6bd4; end: 1049a6d73;  */

void FUN_1049a6bd4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001048db364(0x11309d668);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) == 0) {
    _swift_release(lVar11);
LAB_1049a6d4c:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
    _memmove(lVar6 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_1049a6cb0;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      func_0x0001049a8408(*(long *)(lVar11 + 0x38) + lVar10,&uStack_80,0x11309c428);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
      puVar2[1] = uStack_78;
      *puVar2 = uStack_80;
      puVar2[3] = uStack_68;
      puVar2[2] = uStack_70;
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_1049a6cb0:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1049a6d74);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(lVar11);
          goto LAB_1049a6d4c;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 1049a6d74; end: 1049a6ed7;  */

void FUN_1049a6d74(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001048db364(0x1130a2c80);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1049a6e44;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _objc_retain(uVar12);
        if (uVar8 != 0) break;
LAB_1049a6e44:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1049a6ed8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1049a6eb0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1049a6eb0:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1049a6ed8; end: 1049a6ee3;  */

void FUN_1049a6ed8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001048db364(0x1130a2c78);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1049a6fb4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        _objc_retain(uVar9);
        if (uVar5 != 0) break;
LAB_1049a6fb4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a7054);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1049a7024;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1049a7024:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1049a6ee4; end: 1049a7bdf;  */

void FUN_1049a6ee4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001048db364();
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1049a6fb4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        _objc_retain(uVar9);
        if (uVar5 != 0) break;
LAB_1049a6fb4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a7054);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1049a7024;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1049a7024:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1049a7be0; end: 1049a7beb;  */

void FUN_1049a7be0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  uVar18 = 0x1130a2c78;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001048db364(0x1130a2c78);
  lVar4 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar18);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1049a7e7c:
    _swift_release(lVar17);
LAB_1049a7e84:
    *unaff_x20 = lVar4;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar4 + 0x40;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a7eac);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar17);
            goto LAB_1049a7e84;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          if ((long)uVar15 < 0x40) {
            *puVar16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar15 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_1049a7e7c;
        }
        uVar15 = puVar16[lVar19];
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar19 << 6;
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x30) + uVar8 * 8);
    lVar9 = *(long *)(lVar17 + 0x38) + uVar8 * 0x20;
    if ((param_2 & 1) == 0) {
      puVar7 = auStack_80;
      func_0x0001000bb420(lVar9,puVar7);
      _objc_retain(uVar18);
    }
    else {
      puVar7 = auStack_80;
      func_0x000100102924(lVar9,puVar7);
    }
    uVar14 = *(undefined8 *)(lVar4 + 0x28);
    uVar5 = uVar18;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar18);
    __ss6HasherV5_seedABSi_tcfC(auStack_c8,uVar14);
    puVar6 = auStack_c8;
    __sSS4hash4intoys6HasherVz_tF(puVar6,uVar5,puVar7);
    __ss6HasherV9_finalizeSiyF();
    _swift_bridgeObjectRelease(puVar7);
    uVar13 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar6 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a7eb0);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar12 != uVar8) {
          uVar10 = uVar12;
        }
        bVar2 = (bool)(uVar12 == uVar8 | bVar2);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar10 * 0x40;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) = uVar18;
    func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar8 * 0x20);
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar9 = lVar19;
  } while( true );
}



/* Entry: 1049a7bec; end: 1049a7eaf;  */

void FUN_1049a7bec(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001048db364(param_3);
  lVar4 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1049a7e7c:
    _swift_release(lVar17);
LAB_1049a7e84:
    *unaff_x20 = lVar4;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar4 + 0x40;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a7eac);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar17);
            goto LAB_1049a7e84;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          if ((long)uVar15 < 0x40) {
            *puVar16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar15 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_1049a7e7c;
        }
        uVar15 = puVar16[lVar19];
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar19 << 6;
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x30) + uVar8 * 8);
    lVar9 = *(long *)(lVar17 + 0x38) + uVar8 * 0x20;
    if ((param_2 & 1) == 0) {
      puVar7 = auStack_80;
      func_0x0001000bb420(lVar9,puVar7);
      _objc_retain(uVar18);
    }
    else {
      puVar7 = auStack_80;
      func_0x000100102924(lVar9,puVar7);
    }
    uVar14 = *(undefined8 *)(lVar4 + 0x28);
    uVar5 = uVar18;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar18);
    __ss6HasherV5_seedABSi_tcfC(auStack_c8,uVar14);
    puVar6 = auStack_c8;
    __sSS4hash4intoys6HasherVz_tF(puVar6,uVar5,puVar7);
    __ss6HasherV9_finalizeSiyF();
    _swift_bridgeObjectRelease(puVar7);
    uVar13 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar6 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a7eb0);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar12 != uVar8) {
          uVar10 = uVar12;
        }
        bVar2 = (bool)(uVar12 == uVar8 | bVar2);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar10 * 0x40;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) = uVar18;
    func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar8 * 0x20);
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar9 = lVar19;
  } while( true );
}



/* Entry: 1049a7eb0; end: 1049a7f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1049a7eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = param_3;
  _swift_getObjectType();
  uVar3 = 0;
  FUN_1049b0ed4();
  lVar1 = _DAT_1130a2bf8;
  ppuStack_38 = &PTR_DAT_1107bac18;
  puVar4 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  auStack_58[0] = param_2;
  uStack_40 = uVar3;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_3 + lVar1) = puVar4;
  *(undefined1 *)(param_3 + _DAT_1130a2c10) = 0;
  *(undefined1 *)(param_3 + _DAT_1130a2c20) = 0;
  *(undefined8 *)(param_3 + _DAT_1130a2c18) = 0;
  *(undefined8 *)(param_3 + _DAT_1130a2c00) = param_1;
  func_0x0001049a8480(auStack_58,param_3 + _DAT_1130a2c08);
  plVar5 = &lStack_68;
  lStack_68 = param_3;
  lStack_60 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  FUN_1049a8308(auStack_58);
  return plVar5;
}



/* Entry: 1049a7fa0; end: 1049a80a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1049a7fa0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                    undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_3;
  _swift_getObjectType();
  lStack_50 = param_4;
  uStack_48 = param_5;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  lVar1 = _DAT_1130a2bf8;
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_3 + lVar1) = puVar3;
  *(undefined1 *)(param_3 + _DAT_1130a2c10) = 0;
  *(undefined1 *)(param_3 + _DAT_1130a2c20) = 0;
  *(undefined8 *)(param_3 + _DAT_1130a2c18) = 0;
  *(undefined8 *)(param_3 + _DAT_1130a2c00) = param_1;
  func_0x0001049a8480(auStack_68,param_3 + _DAT_1130a2c08);
  plVar4 = &lStack_78;
  lStack_78 = param_3;
  lStack_70 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  FUN_1049a8308(auStack_68);
  return plVar4;
}



/* Entry: 1049a80a8; end: 1049a8107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a80a8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(param_2 + _DAT_1130a2bf8,auStack_48,0,0);
  _objc_msgSend(*(undefined8 *)(param_2 + lVar1),PTR_s_addObject__11259c1f0,param_1);
  return;
}



/* Entry: 1049a8108; end: 1049a819f;  */

void FUN_1049a8108(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  _objc_allocWithZone(param_3);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
  FUN_1049a7fa0(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,
                param_4,param_5);
  return;
}



/* Entry: 1049a81a0; end: 1049a81ab;  */

void FUN_1049a81a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_getInitializedObjCClass(PTR_PTR_1126adf08);
  _objc_msgSend();
  FUN_1049a27b4(uVar2,uVar1,uVar3);
  puVar4 = PTR_PTR_1126adee8;
  _swift_getInitializedObjCClass(PTR_PTR_1126adee8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1049a81ac; end: 1049a81ff;  */

void FUN_1049a81ac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049a8200; end: 1049a820b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a8200(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_1130a2c10;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar6 + _DAT_1130a2c10,auStack_58,1,0);
  *(undefined1 *)(lVar6 + lVar2) = 1;
  FUN_1049a52dc();
  lVar6 = *(long *)(lVar6 + _DAT_1130a2c00);
  _objc_msgSend(*(undefined8 *)(lVar6 + 0x1f8),PTR_s_loadServerConfigurationWithCompl_112604a70,0);
  uVar3 = *(undefined8 *)(lVar6 + 0x208);
  _objc_msgSend(uVar3,PTR_s_isAutoLogAppEventsEnabled_1125f8d30);
  if ((int)uVar3 != 0) {
    FUN_1049a5370();
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x1e0);
  _swift_getObjCClassFromMetadata(uVar4);
  uVar3 = uVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,PTR_s_setCurrentProfile__11263f878,uVar3);
  _objc_release(uVar3);
  FUN_1049a5a84();
  FUN_1049a5b30(uVar1,uVar5);
  return;
}



/* Entry: 1049a820c; end: 1049a8223;  */

void FUN_1049a820c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1049a5e28(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1049a8224; end: 1049a8227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a8224(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + _DAT_1130a2c00) + 0x138);
    func_0x000104934940(0);
    _swift_unknownObjectRetain(uVar5);
    _objc_msgSend();
    FUN_104934e00();
    _objc_msgSend(uVar5,PTR_s_isEnabled__1125fa018,0x1010801);
    FUN_104934e00();
    _objc_msgSend(uVar5,PTR_s_isEnabled__1125fa018,0x1010803);
    func_0x000104934e08();
    FUN_10492a020();
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar2 = *(long *)(lVar1 + -8);
    (**(code **)(lVar2 + 0x10))
              (puVar4,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
    (**(code **)(lVar2 + 0x38))(puVar4,0,1,lVar1);
    FUN_10492a0a0(puVar4);
    _swift_unknownObjectRelease(uVar5);
    FUN_1049a83a8(puVar4,0x11309c5e0);
  }
  return;
}



/* Entry: 1049a8228; end: 1049a823b;  */

void FUN_1049a8228(void)

{
  FUN_1049a82e8();
  return;
}



/* Entry: 1049a823c; end: 1049a82a7;  */

void FUN_1049a823c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1049a82a8; end: 1049a82e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a82a8(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + _DAT_1130a2c00) + 0x138);
    func_0x000104934940(0);
    _swift_unknownObjectRetain(uVar5);
    _objc_msgSend();
    FUN_104934e00();
    _objc_msgSend(uVar5,PTR_s_isEnabled__1125fa018,0x1010801);
    FUN_104934e00();
    _objc_msgSend(uVar5,PTR_s_isEnabled__1125fa018,0x1010803);
    func_0x000104934e08();
    FUN_10492a020();
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar2 = *(long *)(lVar1 + -8);
    (**(code **)(lVar2 + 0x10))
              (puVar4,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
    (**(code **)(lVar2 + 0x38))(puVar4,0,1,lVar1);
    FUN_10492a0a0(puVar4);
    _swift_unknownObjectRelease(uVar5);
    FUN_1049a83a8(puVar4,0x11309c5e0);
  }
  return;
}



/* Entry: 1049a82e8; end: 1049a8307;  */

void FUN_1049a82e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1049a4294(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1049a8308; end: 1049a8327;  */

void FUN_1049a8308(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001049a831c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1049a8328; end: 1049a8367;  */

void FUN_1049a8328(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1049a6184(param_1,*(undefined8 *)(unaff_x20 + 0x10),
                &PTR_s_applicationDidEnterBackground__11259f7a8);
  return;
}



/* Entry: 1049a8368; end: 1049a8393;  */

void FUN_1049a8368(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e7e38);
  return;
}



/* Entry: 1049a8394; end: 1049a83a7;  */

void FUN_1049a8394(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049a8398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 1049a83a8; end: 1049a8567;  */

undefined8 FUN_1049a83a8(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1049a8568; end: 1049a856b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a8568(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + _DAT_1130a2c00) + 0x138);
    func_0x000104934940(0);
    _swift_unknownObjectRetain(uVar5);
    _objc_msgSend();
    FUN_104934e00();
    _objc_msgSend(uVar5,PTR_s_isEnabled__1125fa018,0x1010801);
    FUN_104934e00();
    _objc_msgSend(uVar5,PTR_s_isEnabled__1125fa018,0x1010803);
    func_0x000104934e08();
    FUN_10492a020();
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar2 = *(long *)(lVar1 + -8);
    (**(code **)(lVar2 + 0x10))
              (puVar4,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
    (**(code **)(lVar2 + 0x38))(puVar4,0,1,lVar1);
    FUN_10492a0a0(puVar4);
    _swift_unknownObjectRelease(uVar5);
    FUN_1049a83a8(puVar4,0x11309c5e0);
  }
  return;
}



/* Entry: 1049a856c; end: 1049a857f;  */

void FUN_1049a856c(void)

{
  FUN_1049a8228();
  return;
}



/* Entry: 1049a8580; end: 1049a8587;  */

void FUN_1049a8580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_getInitializedObjCClass(PTR_PTR_1126adf08);
  _objc_msgSend();
  FUN_1049a27b4(uVar2,uVar1,uVar3);
  puVar4 = PTR_PTR_1126adee8;
  _swift_getInitializedObjCClass(PTR_PTR_1126adee8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1049a8588; end: 1049a85fb;  */

void FUN_1049a8588(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  FUN_1049a8730(param_2,param_3,param_4,param_5,param_6);
  *param_1 = param_2;
  return;
}



/* Entry: 1049a85fc; end: 1049a861b;  */

void FUN_1049a85fc(void)

{
  undefined8 *unaff_x20;
  
  _objc_msgSend(*unaff_x20,PTR_s_start_112671080);
  return;
}



/* Entry: 1049a861c; end: 1049a862b;  */

void FUN_1049a861c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(*unaff_x20,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1049a862c; end: 1049a864f;  */

void FUN_1049a862c(void)

{
  undefined8 *unaff_x20;
  
  _objc_msgSend(*unaff_x20,PTR_s_presentationContextProvider_112525338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1049a8650; end: 1049a86ff;  */

void FUN_1049a8650(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _objc_msgSend(*unaff_x20,PTR_s_setPresentationContextProvider__112655ea8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1049a8700; end: 1049a872f;  */

void FUN_1049a8700(void)

{
  long in_x6;
  
                    /* WARNING: Could not recover jumptable at 0x0001049a8704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x6 + 8))();
  return;
}



/* Entry: 1049a8730; end: 1049a8847;  */

undefined8
FUN_1049a8730(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  uVar1 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100de9b20;
  puStack_68 = &UNK_1107ba958;
  uStack_60 = param_4;
  uStack_58 = param_5;
  __Block_copy(&puStack_80);
  _objc_msgSend();
  __Block_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  _swift_release(uStack_58);
  return unaff_x20;
}



/* Entry: 1049a8848; end: 1049a886f;  */

void FUN_1049a8848(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049a8870; end: 1049a88d7;  */

void FUN_1049a8870(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1049a88d8; end: 1049a88eb;  */

bool FUN_1049a88d8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1049a88ec; end: 1049a892f;  */

void FUN_1049a88ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a2c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd49900;
  _swift_getWitnessTable(&UNK_10dd49900,&UNK_1107baa00);
  puRam00000001130a2c90 = puVar1;
  return;
}



/* Entry: 1049a8930; end: 1049a89db;  */

void FUN_1049a8930(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049a89dc; end: 1049a8eaf;  */

int FUN_1049a89dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1049a8a58;
        goto LAB_1049a8a3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1049a8a3c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1049a8a58:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1049a8eb0; end: 1049a8f07;  */

void FUN_1049a8eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_1049a8f08(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1049a8f08; end: 1049aa8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a8f08(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  undefined *unaff_d9;
  undefined *unaff_d10;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e0 [24];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = param_4;
  _swift_getObjectType();
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  puVar12 = auStack_210 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lStack_118 = *(long *)(lVar2 + -8);
  lVar16 = *(long *)(lStack_118 + 0x40);
  puVar3 = (undefined *)0x0;
  puStack_120 = puVar12 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar2;
  __s10Foundation4DateVMa();
  puVar18 = *(undefined **)(puVar3 + -8);
  lVar2 = (long)(puVar12 + -(lVar16 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(puVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126add10;
  _swift_getInitializedObjCClass();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  puVar5 = puVar4;
  puVar10 = PTR_s_base64FromBase64Url__1125250d8;
  _objc_msgSend(puVar4,PTR_s_base64FromBase64Url__1125250d8,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar10);
  }
  puVar13 = PTR_s_decodeAsData__1125b74b8;
  _objc_msgSend(puVar4,PTR_s_decodeAsData__1125b74b8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar10 = param_5;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    goto LAB_1049a93e4;
  }
  puVar6 = puVar4;
  lStack_140 = unaff_x20;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  puVar5 = puVar6;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,puVar13);
  puStack_b0 = (undefined *)0x0;
  _objc_msgSend(puVar4,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar5,0,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puStack_b0;
  if (puVar4 == (undefined *)0x0) {
    puVar10 = puStack_b0;
    _objc_retain(puStack_b0);
    _swift_bridgeObjectRelease(param_5);
    puVar11 = puVar5;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar10);
    _swift_willThrow();
    func_0x00010006c090(puVar6,puVar13);
    _swift_errorRelease(puVar11);
    goto LAB_1049a93e8;
  }
  puStack_138 = puVar13;
  puStack_130 = puVar6;
  _objc_retain(puStack_b0);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_b0,puVar4);
  _swift_unknownObjectRelease(puVar4);
  uVar7 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar5 = PTR___sypN_11034f1a8;
  ppuVar8 = &puStack_c8;
  _swift_dynamicCast(ppuVar8,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar7,6);
  puVar13 = puStack_c8;
  if (((ulong)ppuVar8 & 1) == 0) {
    func_0x00010006c090(puStack_130,puStack_138);
    goto LAB_1049a93e4;
  }
  __s10Foundation4DateVACycfC(lVar2);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(puVar18 + 8))(lVar2,puVar3);
  puVar6 = puStack_130;
  puVar3 = puStack_138;
  puVar4 = puVar13;
  if (*(long *)(puVar13 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar13);
    lVar2 = 0x69746a;
    uVar14 = 0;
    func_0x000100029284(0x69746a);
    if ((uVar14 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar13 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_c8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puVar19 = puStack_c0;
      puVar10 = puStack_c8;
      puVar11 = param_5;
      if (((ulong)ppuVar8 & 1) == 0) {
        func_0x00010006c090(puVar6,puVar3);
      }
      else {
        uVar14 = (ulong)puStack_c8 & 0xffffffffffff;
        if (((ulong)puStack_c0 & 0x2000000000000000) != 0) {
          uVar14 = (ulong)puStack_c0 >> 0x38 & 0xf;
        }
        puVar18 = puVar19;
        if (uVar14 != 0) {
          if (*(long *)(puVar13 + 0x10) != 0) {
            _swift_bridgeObjectRetain(puVar13);
            lVar2 = 0x737369;
            uVar14 = 0;
            func_0x000100029284(0x737369);
            if ((uVar14 & 1) != 0) {
              func_0x0001000bb420(*(long *)(puVar13 + 0x38) + lVar2 * 0x20,&puStack_b0);
              _swift_bridgeObjectRelease(puVar13);
              ppuVar8 = &puStack_c8;
              _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
              if (((ulong)ppuVar8 & 1) == 0) {
                func_0x00010006c090(puVar6,puVar3);
                puStack_c0 = param_5;
              }
              else {
                puStack_148 = puVar10;
                puStack_150 = puStack_c8;
                __s10Foundation3URLV6stringACSgSSh_tcfC(puVar12,puStack_c8,puStack_c0);
                lVar16 = lStack_110;
                lVar2 = lStack_118;
                puVar9 = puVar12;
                (**(code **)(lStack_118 + 0x30))(puVar12,1,lStack_110);
                puVar10 = puStack_120;
                if ((int)puVar9 == 1) {
                  func_0x00010006c090(puStack_130,puVar3);
                  _swift_bridgeObjectRelease(param_5);
                  _swift_bridgeObjectRelease(puStack_c0);
                  _swift_bridgeObjectRelease(puVar19);
                  _swift_bridgeObjectRelease(puVar13);
                  FUN_1049ab4f4(puVar12,0x11309c5e0);
                  goto LAB_1049a93e8;
                }
                puVar3 = puStack_120;
                (**(code **)(lVar2 + 0x20))(puStack_120,puVar12,lVar16);
                __s10Foundation3URLV4hostSSSgvg();
                if (puVar12 == (undefined1 *)0x0) {
                  (**(code **)(lVar2 + 8))(puVar10,lVar16);
                  puVar3 = puStack_138;
LAB_1049a952c:
                  func_0x00010006c090(puStack_130,puVar3);
                }
                else {
                  if (((puVar3 == (undefined *)0x6b6f6f6265636166) &&
                      (puVar12 == (undefined1 *)0xec0000006d6f632e)) ||
                     (puVar4 = puVar3,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), ((ulong)puVar4 & 1) != 0)) {
                    _swift_bridgeObjectRelease(puVar12);
                  }
                  else {
                    uVar14 = 0;
                    __sSS9hasSuffixySbSSF(0x6f6f62656361662e,0xed00006d6f632e6b,puVar3,puVar12);
                    _swift_bridgeObjectRelease(puVar12);
                    puVar10 = puStack_138;
                    if ((uVar14 & 1) == 0) {
                      (**(code **)(lVar2 + 8))(puStack_120,lStack_110);
                      puVar3 = puVar10;
                      goto LAB_1049a952c;
                    }
                  }
                  puVar10 = puStack_138;
                  _swift_beginAccess(0x113815870,&puStack_c8,0,0);
                  puVar3 = puRam0000000113815870;
                  if (puRam0000000113815870 == (undefined *)0x0) {
                    if (lRam000000011309feb8 != -1) {
                      _swift_once(0x11309feb8,FUN_1049ab1d0);
                    }
                    _swift_beginAccess(0x113815878,auStack_e0,0,0);
                    if (puRam0000000113815878 == (undefined *)0x0) {
                      func_0x00010006c090(puStack_130,puVar10);
                      _swift_bridgeObjectRelease(puVar19);
                      _swift_bridgeObjectRelease(param_5);
                      _swift_bridgeObjectRelease(puStack_c0);
                      _swift_bridgeObjectRelease(puVar13);
                      pcVar17 = *(code **)(lVar2 + 8);
                      goto LAB_1049a9974;
                    }
                    puStack_158 = puRam0000000113815878;
                    _swift_unknownObjectRetain();
                  }
                  else {
                    puStack_158 = puRam0000000113815870;
                  }
                  lVar16 = *(long *)(puVar13 + 0x10);
                  _swift_unknownObjectRetain(puVar3);
                  puVar6 = puStack_120;
                  if (lVar16 != 0) {
                    _swift_bridgeObjectRetain(puVar13);
                    lVar16 = 0x647561;
                    uVar14 = 0;
                    func_0x000100029284(0x647561);
                    if ((uVar14 & 1) == 0) {
                      _swift_bridgeObjectRelease(puVar13);
                    }
                    else {
                      func_0x0001000bb420(*(long *)(puVar13 + 0x38) + lVar16 * 0x20,&puStack_b0);
                      _swift_bridgeObjectRelease(puVar13);
                      ppuVar8 = &puStack_f8;
                      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
                      puVar4 = puStack_f0;
                      puVar3 = puStack_f8;
                      if (((ulong)ppuVar8 & 1) != 0) {
                        puStack_168 = puStack_c0;
                        puStack_160 = puVar13;
                        puVar13 = puStack_158;
                        puVar6 = PTR_s_appID_11259ee40;
                        _objc_msgSend();
                        _objc_retainAutoreleasedReturnValue();
                        if (puVar13 == (undefined *)0x0) {
                          _swift_bridgeObjectRetain(puVar4);
                          func_0x00010006c090(puStack_130,puVar10);
                          _swift_bridgeObjectRelease(puVar19);
                          puVar18 = puVar4;
                          puVar19 = param_5;
LAB_1049a992c:
                          _swift_bridgeObjectRelease(puVar19);
                          _swift_bridgeObjectRelease(puVar18);
                          _swift_bridgeObjectRelease(puVar4);
                          _swift_unknownObjectRelease(puStack_158);
                          _swift_bridgeObjectRelease(puStack_168);
                          _swift_bridgeObjectRelease(puStack_160);
                          pcVar17 = *(code **)(lStack_118 + 8);
                          param_5 = puVar18;
                          puVar13 = puVar4;
LAB_1049a9974:
                          (*pcVar17)(puStack_120,lStack_110);
                          puVar11 = param_5;
                          puVar4 = puVar13;
                          puVar18 = puVar19;
                          puVar3 = puVar10;
                          goto LAB_1049a93e8;
                        }
                        puVar10 = puVar13;
                        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                  ();
                        _objc_release(puVar13);
                        if ((puVar3 == puVar10) && (puVar4 == puVar6)) {
                          _swift_bridgeObjectRelease(puVar6);
                        }
                        else {
                          puVar13 = puVar3;
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (puVar3,puVar4,puVar10,puVar6,0);
                          _swift_bridgeObjectRelease(puVar6);
                          if (((ulong)puVar13 & 1) == 0) {
                            func_0x00010006c090(puStack_130,puStack_138);
                            puVar18 = param_5;
                            puVar10 = puVar3;
                            goto LAB_1049a992c;
                          }
                        }
                        puVar10 = puStack_160;
                        if (*(long *)(puStack_160 + 0x10) != 0) {
                          _swift_bridgeObjectRetain(puStack_160);
                          lVar2 = 0x707865;
                          uVar14 = 0;
                          func_0x000100029284(0x707865);
                          puVar10 = puStack_160;
                          if ((uVar14 & 1) != 0) {
                            func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,
                                                &puStack_b0);
                            _swift_bridgeObjectRelease(puVar10);
                            ppuVar8 = &puStack_f8;
                            _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSdN_11034dd90,6
                                              );
                            puVar10 = puStack_f8;
                            if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9ac0;
                            if (param_1 < (double)puStack_f8) {
                              unaff_d9 = puVar10;
                              if (*(long *)(puStack_160 + 0x10) == 0) goto LAB_1049a9ac0;
                              _swift_bridgeObjectRetain(puStack_160);
                              lVar2 = 0x746169;
                              uVar14 = 0;
                              func_0x000100029284(0x746169);
                              puVar18 = puStack_160;
                              if ((uVar14 & 1) == 0) goto LAB_1049a9ab8;
                              func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,
                                                  &puStack_b0);
                              _swift_bridgeObjectRelease(puVar18);
                              ppuVar8 = &puStack_f8;
                              _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSdN_11034dd90
                                                 ,6);
                              if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9ac0;
                              unaff_d10 = puStack_f8;
                              if (param_1 + -600.0 <= (double)puStack_f8) goto LAB_1049a9a00;
                            }
                            (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
                            func_0x00010006c090(puStack_130,puStack_138);
                            puVar18 = puVar4;
                            goto LAB_1049a98dc;
                          }
                          _swift_bridgeObjectRelease(puStack_160);
                        }
                        (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
                        func_0x00010006c090(puStack_130,puStack_138);
                        _swift_bridgeObjectRelease(puVar4);
                        _swift_unknownObjectRelease(puStack_158);
                        _swift_bridgeObjectRelease(param_5);
                        _swift_bridgeObjectRelease(puStack_168);
                        _swift_bridgeObjectRelease(puVar19);
                        goto LAB_1049a93e4;
                      }
                    }
                  }
                  (**(code **)(lVar2 + 8))(puVar6,lStack_110);
                  func_0x00010006c090(puStack_130,puVar10);
                  _swift_unknownObjectRelease(puStack_158);
                }
                _swift_bridgeObjectRelease(param_5);
                puVar3 = puVar10;
              }
              _swift_bridgeObjectRelease(puStack_c0);
              puVar11 = puVar19;
              goto LAB_1049a93b0;
            }
            _swift_bridgeObjectRelease(puVar13);
          }
          func_0x00010006c090(puVar6,puVar3);
          _swift_bridgeObjectRelease(puVar13);
          _swift_bridgeObjectRelease(param_5);
          puVar10 = puVar19;
          goto LAB_1049a93e4;
        }
        func_0x00010006c090(puVar6,puVar3);
        _swift_bridgeObjectRelease(puStack_c0);
      }
LAB_1049a93b0:
      _swift_bridgeObjectRelease(puVar11);
      puVar10 = puVar13;
      puVar4 = puVar13;
      goto LAB_1049a93e4;
    }
    _swift_bridgeObjectRelease(puVar13);
  }
  func_0x00010006c090(puVar6,puVar3);
  _swift_bridgeObjectRelease(puVar13);
LAB_1049a93e4:
  _swift_bridgeObjectRelease(puVar10);
  puVar11 = param_5;
LAB_1049a93e8:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  puVar12 = (undefined1 *)0x0;
  puVar19 = puVar18;
  puVar10 = unaff_d9;
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return;
    }
    ___stack_chk_fail(puVar12);
LAB_1049a9a00:
    unaff_d9 = puVar10;
    if (*(long *)(puStack_160 + 0x10) == 0) goto LAB_1049a9ac0;
    _swift_bridgeObjectRetain(puStack_160);
    lVar2 = 0x65636e6f6e;
    uVar14 = 0;
    func_0x000100029284(0x65636e6f6e);
    puVar18 = puStack_160;
    param_5 = puVar11;
    if ((uVar14 & 1) == 0) break;
    func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
    _swift_bridgeObjectRelease(puVar18);
    ppuVar8 = &puStack_f8;
    _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
    param_5 = puStack_f0;
    puVar18 = puStack_f8;
    if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9ac0;
    uVar14 = (ulong)puStack_f8 & 0xffffffffffff;
    if (((ulong)puStack_f0 & 0x2000000000000000) != 0) {
      uVar14 = (ulong)puStack_f0 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) {
      (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
      func_0x00010006c090(puStack_130,puStack_138);
      _swift_bridgeObjectRelease(puVar11);
      puVar18 = puVar4;
LAB_1049a98dc:
      _swift_bridgeObjectRelease(param_5);
      puVar4 = puVar18;
      goto LAB_1049a98e4;
    }
    if ((puStack_f8 == puStack_128) && (puStack_f0 == puVar11)) {
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      puVar13 = puStack_f8;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puStack_f8,puStack_f0,puStack_128,puVar11,0);
      _swift_bridgeObjectRelease(puVar11);
      if (((ulong)puVar13 & 1) == 0) {
        (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
        func_0x00010006c090(puStack_130,puStack_138);
        _swift_bridgeObjectRelease(puVar4);
        puVar18 = param_5;
        goto LAB_1049a98e4;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049a9f50:
      (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
      func_0x00010006c090(puStack_130,puStack_138);
      _swift_bridgeObjectRelease(puVar4);
      _swift_unknownObjectRelease(puStack_158);
      goto LAB_1049a9b08;
    }
    _swift_bridgeObjectRetain(puStack_160);
    lVar2 = 0x627573;
    uVar14 = 0;
    func_0x000100029284(0x627573);
    puVar13 = puStack_160;
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(puStack_160);
      goto LAB_1049a9f50;
    }
    func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
    _swift_bridgeObjectRelease(puVar13);
    ppuVar8 = &puStack_f8;
    _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9f50;
    puStack_170 = puStack_f8;
    puStack_128 = puStack_f0;
    uVar14 = (ulong)puStack_f8 & 0xffffffffffff;
    if (((ulong)puStack_f0 & 0x2000000000000000) != 0) {
      uVar14 = (ulong)puStack_f0 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) goto LAB_1049a9f9c;
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049a9cfc:
      puStack_178 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6567615f72657375;
      uVar14 = 0xee0065676e61725f;
      func_0x000100029284(0x6567615f72657375);
      puVar13 = puStack_160;
      puVar12 = &stack0xffffffffffffffa0;
      if ((uVar14 & 1) == 0) {
LAB_1049a9cf4:
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar12 + -0x100));
        goto LAB_1049a9cfc;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      uVar7 = 0x1130a2d38;
      func_0x0001048db364(0x1130a2d38);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,uVar7,6);
      if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9cfc;
      puStack_178 = puStack_f8;
      if (*(long *)(puStack_f8 + 0x10) == 0) {
        puVar12 = &stack0xffffffffffffff88;
        goto LAB_1049a9cf4;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049a9db4:
      puStack_180 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6d6f685f72657375;
      uVar14 = 0xed00006e776f7465;
      func_0x000100029284(0x6d6f685f72657375);
      puVar13 = puStack_160;
      puVar12 = &stack0xffffffffffffffa0;
      if ((uVar14 & 1) == 0) {
LAB_1049a9dac:
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar12 + -0x100));
        goto LAB_1049a9db4;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      uVar7 = 0x11309c408;
      func_0x0001048db364(0x11309c408);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,uVar7,6);
      if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9db4;
      puStack_180 = puStack_f8;
      if (*(long *)(puStack_f8 + 0x10) == 0) {
        puVar12 = &stack0xffffffffffffff80;
        goto LAB_1049a9dac;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049a9e6c:
      puStack_188 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x636f6c5f72657375;
      uVar14 = 0xed00006e6f697461;
      func_0x000100029284(0x636f6c5f72657375);
      puVar13 = puStack_160;
      puVar12 = &stack0xffffffffffffffa0;
      if ((uVar14 & 1) == 0) {
LAB_1049a9e64:
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar12 + -0x100));
        goto LAB_1049a9e6c;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      uVar7 = 0x11309c408;
      func_0x0001048db364(0x11309c408);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,uVar7,6);
      if (((ulong)ppuVar8 & 1) == 0) goto LAB_1049a9e6c;
      puStack_188 = puStack_f8;
      if (*(long *)(puStack_f8 + 0x10) == 0) {
        puVar12 = auStack_88;
        goto LAB_1049a9e64;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049a9ff0:
      puStack_190 = (undefined *)0x0;
      puStack_198 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x656d616e;
      uVar14 = 0;
      func_0x000100029284(0x656d616e);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049a9ff0;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_198 = puStack_f0;
      puStack_190 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_190 = (undefined *)0x0;
        puStack_198 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa0a8:
      puStack_1a0 = (undefined *)0x0;
      puStack_1a8 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x616e5f6e65766967;
      uVar14 = 0xea0000000000656d;
      func_0x000100029284(0x616e5f6e65766967);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa0a8;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_1a8 = puStack_f0;
      puStack_1a0 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1a0 = (undefined *)0x0;
        puStack_1a8 = (undefined *)0x0;
      }
    }
    uVar14 = 0xeb00000000656d61;
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa168:
      puStack_1b0 = (undefined *)0x0;
      puStack_1b8 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6e5f656c6464696d;
      uVar15 = uVar14;
      func_0x000100029284(0x6e5f656c6464696d);
      puVar13 = puStack_160;
      if ((uVar15 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa168;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_1b8 = puStack_f0;
      puStack_1b0 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1b0 = (undefined *)0x0;
        puStack_1b8 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa21c:
      puStack_1c0 = (undefined *)0x0;
      puStack_1c8 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6e5f796c696d6166;
      func_0x000100029284(0x6e5f796c696d6166);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa21c;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_1c8 = puStack_f0;
      puStack_1c0 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1c0 = (undefined *)0x0;
        puStack_1c8 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa2cc:
      puStack_1d0 = (undefined *)0x0;
      puStack_1d8 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6c69616d65;
      uVar14 = 0;
      func_0x000100029284(0x6c69616d65);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa2cc;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_1d8 = puStack_f0;
      puStack_1d0 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1d0 = (undefined *)0x0;
        puStack_1d8 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa380:
      puStack_1e0 = (undefined *)0x0;
      puStack_1e8 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x65727574636970;
      uVar14 = 0;
      func_0x000100029284(0x65727574636970);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa380;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_1e8 = puStack_f0;
      puStack_1e0 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1e0 = (undefined *)0x0;
        puStack_1e8 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa438:
      puStack_1f0 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6972665f72657375;
      uVar14 = 0xec00000073646e65;
      func_0x000100029284(0x6972665f72657375);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa438;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      uVar7 = 0x11309c618;
      func_0x0001048db364(0x11309c618);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,uVar7,6);
      puStack_1f0 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1f0 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa4f0:
      puStack_1f8 = (undefined *)0x0;
      puStack_200 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x7269625f72657375;
      uVar14 = 0;
      func_0x000100029284(0x7269625f72657375);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa4f0;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puStack_200 = puStack_f0;
      puStack_1f8 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_1f8 = (undefined *)0x0;
        puStack_200 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa5a4:
      puStack_208 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6e65675f72657375;
      uVar14 = 0;
      func_0x000100029284(0x6e65675f72657375);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa5a4;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puVar11 = puStack_f0;
      puStack_208 = puStack_f8;
      if ((int)ppuVar8 == 0) {
        puStack_208 = (undefined *)0x0;
        puVar11 = (undefined *)0x0;
      }
    }
    if (*(long *)(puStack_160 + 0x10) == 0) {
LAB_1049aa61c:
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      _swift_bridgeObjectRetain(puStack_160);
      lVar2 = 0x6e696c5f72657375;
      uVar14 = 0xe90000000000006b;
      func_0x000100029284(0x6e696c5f72657375);
      puVar13 = puStack_160;
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(puStack_160);
        goto LAB_1049aa61c;
      }
      func_0x0001000bb420(*(long *)(puStack_160 + 0x38) + lVar2 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(puVar13);
    }
    _swift_bridgeObjectRelease(puStack_160);
    if (lStack_98 == 0) {
      FUN_1049ab4f4(&puStack_b0,0x11309c428);
      puVar13 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
    }
    else {
      ppuVar8 = &puStack_f8;
      _swift_dynamicCast(ppuVar8,&puStack_b0,puVar5 + 8,PTR___sSSN_11034da80,6);
      puVar13 = puStack_f8;
      puVar5 = puStack_f0;
      if ((int)ppuVar8 == 0) {
        puVar13 = (undefined *)0x0;
        puVar5 = (undefined *)0x0;
      }
    }
    lVar2 = lStack_140;
    lVar16 = lStack_140;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2c98);
    *puVar1 = puStack_148;
    puVar1[1] = puVar19;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2ca0);
    *puVar1 = puStack_150;
    puVar1[1] = puStack_168;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2ca8);
    *puVar1 = puVar3;
    puVar1[1] = puVar4;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2cb0);
    *puVar1 = puVar18;
    puVar1[1] = param_5;
    *(undefined **)(lVar16 + _DAT_1130a2cb8) = puVar10;
    *(undefined **)(lVar16 + _DAT_1130a2cc0) = unaff_d10;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2cc8);
    *puVar1 = puStack_170;
    puVar1[1] = puStack_128;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2cd0);
    *puVar1 = puStack_190;
    puVar1[1] = puStack_198;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2cd8);
    *puVar1 = puStack_1a0;
    puVar1[1] = puStack_1a8;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2ce0);
    *puVar1 = puStack_1b0;
    puVar1[1] = puStack_1b8;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2ce8);
    *puVar1 = puStack_1c0;
    puVar1[1] = puStack_1c8;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2cf0);
    *puVar1 = puStack_1d0;
    puVar1[1] = puStack_1d8;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2cf8);
    *puVar1 = puStack_1e0;
    puVar1[1] = puStack_1e8;
    *(undefined **)(lVar16 + _DAT_1130a2d00) = puStack_1f0;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2d08);
    *puVar1 = puStack_1f8;
    puVar1[1] = puStack_200;
    *(undefined **)(lVar16 + _DAT_1130a2d10) = puStack_178;
    *(undefined **)(lVar16 + _DAT_1130a2d18) = puStack_180;
    *(undefined **)(lVar16 + _DAT_1130a2d20) = puStack_188;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2d28);
    *puVar1 = puStack_208;
    puVar1[1] = puVar11;
    puVar1 = (undefined8 *)(lVar16 + _DAT_1130a2d30);
    *puVar1 = puVar13;
    puVar1[1] = puVar5;
    lStack_100 = lVar2;
    puVar12 = auStack_108;
    _objc_msgSendSuper2(puVar12,PTR_s_init_1125d9248);
    func_0x00010006c090(puStack_130,puStack_138);
    _swift_unknownObjectRelease(puStack_158);
    (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
  } while( true );
LAB_1049a9ab8:
  _swift_bridgeObjectRelease(puStack_160);
  puVar11 = param_5;
  unaff_d9 = puVar10;
LAB_1049a9ac0:
  param_5 = puVar11;
  (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
  func_0x00010006c090(puStack_130,puStack_138);
  _swift_bridgeObjectRelease(puVar4);
  _swift_unknownObjectRelease(puStack_158);
  puVar11 = param_5;
LAB_1049a9b08:
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(puStack_168);
  _swift_bridgeObjectRelease(puVar19);
  puVar10 = puStack_160;
  param_5 = puVar11;
  puVar18 = puVar19;
  goto LAB_1049a93e4;
LAB_1049a9f9c:
  (**(code **)(lStack_118 + 8))(puStack_120,lStack_110);
  func_0x00010006c090(puStack_130,puStack_138);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(param_5);
  puVar18 = puStack_128;
LAB_1049a98e4:
  _swift_bridgeObjectRelease(puVar18);
  _swift_bridgeObjectRelease(puStack_168);
  _swift_bridgeObjectRelease(puVar19);
  _swift_bridgeObjectRelease(puStack_160);
  _swift_unknownObjectRelease(puStack_158);
  puVar18 = puVar19;
  unaff_d9 = puVar10;
  goto LAB_1049a93e8;
}



/* Entry: 1049aa8f0; end: 1049aa943; -[FBSDKAuthenticationTokenClaims initWithEncodedClaims:nonce:] */

void FUN_1049aa8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_1049a8f08(param_3,param_2,param_4,uVar1);
  return;
}



/* Entry: 1049aa944; end: 1049aae6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049aa944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2c98);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2ca0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2ca8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2cb0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2cb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2cc0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2cc8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2cd0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2cd8);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2ce0);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2ce8);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2cf0);
  *puVar1 = param_21;
  puVar1[1] = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2cf8);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2d00) = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2d08);
  *puVar1 = param_26;
  puVar1[1] = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2d10) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2d18) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2d20) = param_30;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2d28);
  *puVar1 = param_31;
  puVar1[1] = param_32;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2d30);
  *puVar1 = param_33;
  puVar1[1] = param_34;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049aae70; end: 1049aaebb;  */

void FUN_1049aae70(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049aaebc; end: 1049aaf1b; -[FBSDKAuthenticationTokenClaims init] */

void FUN_1049aaebc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKCoreKit.AuthenticationTokenClaims",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049aaee8);
  (*pcVar1)();
}



/* Entry: 1049aaf1c; end: 1049ab0cb; -[FBSDKAuthenticationTokenClaims .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049aaf1c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2c98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2ca0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2ca8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2cb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2cc8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2cd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2cd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2ce0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2ce8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2cf0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2cf8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2d00));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2d08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2d10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2d18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2d20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2d28 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a2d30 + 8))
  ;
  return;
}



/* Entry: 1049ab0cc; end: 1049ab0f3;  */

undefined1  [16] FUN_1049ab0cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _swift_getObjectType();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1049ab0f4; end: 1049ab1cf;  */

undefined8 FUN_1049ab0f4(void)

{
  return 0x113815870;
}



/* Entry: 1049ab1d0; end: 1049ab217;  */

void FUN_1049ab1d0(void)

{
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uRam0000000113815878 = uRam00000001130a3c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1049ab218; end: 1049ab3a7;  */

undefined8 FUN_1049ab218(void)

{
  if (lRam000000011309feb8 != -1) {
    _swift_once(0x11309feb8,FUN_1049ab1d0);
  }
  return 0x113815878;
}



/* Entry: 1049ab3a8; end: 1049ab4f3;  */

void FUN_1049ab3a8(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815870,auStack_38,0,0);
  *param_1 = uRam0000000113815870;
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049ab4f4; end: 1049ab52f;  */

undefined8 FUN_1049ab4f4(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1049ab530; end: 1049ab533;  */

void FUN_1049ab530(void)

{
  return;
}



/* Entry: 1049ab534; end: 1049ab55f;  */

void FUN_1049ab534(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e7f20);
  return;
}



/* Entry: 1049ab560; end: 1049ab5d7;  */

void FUN_1049ab560(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049ab5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0xf0))();
  return;
}



/* Entry: 1049ab5d8; end: 1049ab5ef;  */

undefined1  [16] FUN_1049ab5d8(void)

{
  return ZEXT816(0x1107baaf8);
}


