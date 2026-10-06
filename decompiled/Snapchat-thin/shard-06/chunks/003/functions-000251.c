/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104814fc8; end: 104814fcb; -[SCAdStoreContextValue copyWithZone:] */

void FUN_104814fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104814fcc; end: 1048150ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814fcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090b60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090b60))[1]);
  uVar1 = 0x44495f45524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f45524f5453,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090b68))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090b68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x59524f4745544143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59524f4745544143,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1048150ac; end: 1048150fb; -[SCAdStoreContextValue encodeWithCoder:] */

void FUN_1048150ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104814fcc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048150fc; end: 10481512b;  */

void FUN_1048150fc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10481512c(param_1);
  return;
}



/* Entry: 10481512c; end: 10481535f;  */

undefined8 FUN_10481512c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar5 = 0;
  iVar2 = (int)&uStack_a0;
  uVar3 = 0x44495f45524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f45524f5453,0xe800000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
LAB_104815264:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar4 = lStack_98;
  uVar3 = uStack_a0;
  if ((uVar5 & 1) == 0) {
    _objc_release(param_1);
    goto LAB_104815264;
  }
  uVar6 = 0x59524f4745544143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59524f4745544143,0xeb0000000044495f);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_98;
    uVar6 = uStack_a0;
    if (iVar2 != 0) goto LAB_1048152d8;
  }
  lVar7 = 0;
  uVar6 = 0;
LAB_1048152d8:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar4);
  _swift_bridgeObjectRelease(lVar4);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c04cc20();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104815360; end: 104815387; -[SCAdStoreContextValue initWithCoder:] */

void FUN_104815360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10481512c();
  return;
}



/* Entry: 104815388; end: 1048153a3; -[SCAdStoreContextValue description] */

void FUN_104815388(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048153a4; end: 10481541f; -[SCAdStoreContextValue init] */

void FUN_1048153a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdStoreContextValueWrapper.swift"
             ,0x2c,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048153ec);
  (*pcVar1)();
}



/* Entry: 104815420; end: 10481545f; -[SCAdStoreContextValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815420(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090b60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090b68 + 8))
  ;
  return;
}



/* Entry: 104815460; end: 10481547f;  */

void FUN_104815460(void)

{
  _objc_opt_self(&PTR_PTR_1129d8f20);
  return;
}



/* Entry: 104815480; end: 104815483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104815484; end: 10481548f; -[SCAdMediaAdToCall phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815484(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090b98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090b98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104815490; end: 10481549b; -[SCAdMediaAdToCall phoneNumberAlias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090ba0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090ba0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481549c; end: 1048154f3;  */

void FUN_10481549c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1048154f4; end: 1048154f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048154f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ba0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048154f8; end: 10481561f; -[SCAdMediaAdToCall initWithPhoneNumber:phoneNumberAlias:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048154f8(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113090b98);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113090ba0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104815620; end: 104815653; -[SCAdMediaAdToCall hash] */

undefined8 FUN_104815620(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104815654();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104815654; end: 104815883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815654(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113090b98))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090b98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ba0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ba0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104815884; end: 104815903; -[SCAdMediaAdToCall isEqual:] */

uint FUN_104815884(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104815718(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104815904; end: 104815907; -[SCAdMediaAdToCall copyWithZone:] */

void FUN_104815904(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104815908; end: 1048159fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090b98))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090b98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090ba0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090ba0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2102b0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1048159fc; end: 104815a4b; -[SCAdMediaAdToCall encodeWithCoder:] */

void FUN_1048159fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104815908(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104815a4c; end: 104815a7b;  */

void FUN_104815a4c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104815a7c(param_1);
  return;
}



/* Entry: 104815a7c; end: 104815ca3;  */

undefined8 FUN_104815a7c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2102b0);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c0359c0();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104815ca4; end: 104815ccb; -[SCAdMediaAdToCall initWithCoder:] */

void FUN_104815ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104815a7c();
  return;
}



/* Entry: 104815ccc; end: 104815ce7; -[SCAdMediaAdToCall description] */

void FUN_104815ccc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104815ce8; end: 104815d63; -[SCAdMediaAdToCall init] */

void FUN_104815ce8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaAdToCallWrapper.swift",
             0x28,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104815d30);
  (*pcVar1)();
}



/* Entry: 104815d64; end: 104815da3; -[SCAdMediaAdToCall .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815d64(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090b98 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090ba0 + 8))
  ;
  return;
}



/* Entry: 104815da4; end: 104815dc3;  */

void FUN_104815da4(void)

{
  _objc_opt_self(&PTR_PTR_1129d8ff8);
  return;
}



/* Entry: 104815dc4; end: 104815dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090ba0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104815dc8; end: 104815dd3; -[SCAdMediaAdToMessage phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815dc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090bd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090bd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104815dd4; end: 104815ddf; -[SCAdMediaAdToMessage phoneNumberAlias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815dd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090bd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090bd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104815de0; end: 104815deb; -[SCAdMediaAdToMessage messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815de0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090be0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090be0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104815dec; end: 104815df7; -[SCAdMediaAdToMessage messageText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815dec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090be8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090be8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104815df8; end: 104815e4f;  */

void FUN_104815df8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104815e50; end: 104815f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090bd0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090bd8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090be0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090be8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104815f0c; end: 10481604b; -[SCAdMediaAdToMessage initWithPhoneNumber:phoneNumberAlias:messageId:messageText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104815f0c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    lVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = param_2;
  }
  lVar5 = param_6;
  _objc_retain();
  if (lVar5 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
  }
  plVar1 = (long *)(param_1 + _DAT_113090bd0);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113090bd8);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113090be0);
  *plVar1 = param_5;
  plVar1[1] = lVar6;
  plVar1 = (long *)(param_1 + _DAT_113090be8);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481604c; end: 10481615b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481604c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090bd0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090bd8);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090be0);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090be8);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  FUN_10481652c(&uStack_50,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_10481652c(&uStack_60,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_10481652c(&uStack_70,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_10481652c(&uStack_80,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001017b6810(param_1);
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481615c; end: 10481618f; -[SCAdMediaAdToMessage hash] */

undefined8 FUN_10481615c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104816190();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104816190; end: 1048162db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816190(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113090bd0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090bd0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090bd8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090bd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090be0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090be0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090be8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090be8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048162dc; end: 10481652b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048162dc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  FUN_10481652c(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar3 = ((long *)(unaff_x20 + _DAT_113090bd0))[1];
      lVar4 = ((long *)(lStack_68 + _DAT_113090bd0))[1];
      uVar6 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113090bd0);
        if (lVar2 == *(long *)(lStack_68 + _DAT_113090bd0) && lVar3 == lVar4) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_113090bd8))[1];
      lVar4 = ((long *)(lStack_68 + _DAT_113090bd8))[1];
      uVar8 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113090bd8);
        if (lVar2 == *(long *)(lStack_68 + _DAT_113090bd8) && lVar3 == lVar4) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_113090be0))[1];
      lVar4 = ((long *)(lStack_68 + _DAT_113090be0))[1];
      uVar5 = (uint)(lVar3 == 0 && lVar4 == 0);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113090be0);
        if ((lVar2 == *(long *)(lStack_68 + _DAT_113090be0)) && (lVar3 == lVar4)) {
          uVar5 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar5 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_113090be8))[1];
      lVar4 = ((long *)(lStack_68 + _DAT_113090be8))[1];
      if (lVar3 == 0) {
        _swift_bridgeObjectRetain(lVar4);
        _objc_release(lStack_68);
        if (lVar4 == 0) {
LAB_1048164f4:
          uVar7 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar4);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
        if (lVar4 != 0) {
          lVar2 = *(long *)(unaff_x20 + _DAT_113090be8);
          if ((lVar2 == *(long *)(lStack_68 + _DAT_113090be8)) && (lVar3 == lVar4)) {
            _objc_release(lStack_68);
            goto LAB_1048164f4;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar2;
        }
        _objc_release(lStack_68);
      }
      if ((uVar6 & uVar8 & 1) != 0) {
        uVar5 = uVar5 & uVar7;
        goto LAB_1048163b4;
      }
    }
  }
  uVar5 = 0;
LAB_1048163b4:
  return uVar5 & 1;
}



/* Entry: 10481652c; end: 104816573;  */

undefined8 FUN_10481652c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104816574; end: 1048165f3; -[SCAdMediaAdToMessage isEqual:] */

uint FUN_104816574(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048162dc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048165f4; end: 1048165f7; -[SCAdMediaAdToMessage copyWithZone:] */

void FUN_1048165f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048165f8; end: 1048167bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048165f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090bd0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090bd0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090bd8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090bd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2102b0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090be0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090be0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0x5f4547415353454d;
  uVar2 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4547415353454d,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090be8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090be8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4547415353454d,0xec00000054584554);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1048167c0; end: 10481680f; -[SCAdMediaAdToMessage encodeWithCoder:] */

void FUN_1048167c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048165f8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104816810; end: 10481683f;  */

void FUN_104816810(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104816840(param_1);
  return;
}



/* Entry: 104816840; end: 104816c37;  */

undefined8 FUN_104816840(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_a8;
    uVar2 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
      lVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2102b0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uVar5 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
      lVar6 = 0;
    }
  }
  uVar10 = 0x5f4547415353454d;
  uVar9 = uVar10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4547415353454d,0xea00000000004449);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar7 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar7 = 0;
    uVar9 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_a8;
    uVar9 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
      lVar7 = 0;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4547415353454d,0xec00000054584554);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar10 = 0;
    lVar8 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_b0;
    lVar8 = lStack_a8;
    if ((int)puVar4 == 0) {
      uVar10 = 0;
      lVar8 = 0;
    }
  }
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  func_0x00010c0359e0(unaff_x20);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104816c38; end: 104816c5f; -[SCAdMediaAdToMessage initWithCoder:] */

void FUN_104816c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104816840();
  return;
}



/* Entry: 104816c60; end: 104816c7b; -[SCAdMediaAdToMessage description] */

void FUN_104816c60(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104816c7c; end: 104816cf7; -[SCAdMediaAdToMessage init] */

void FUN_104816c7c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaAdToMessageWrapper.swift",
             0x2b,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104816cc4);
  (*pcVar1)();
}



/* Entry: 104816cf8; end: 104816d5f; -[SCAdMediaAdToMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816cf8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090bd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090bd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090be0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090be8 + 8))
  ;
  return;
}



/* Entry: 104816d60; end: 104816d7f;  */

void FUN_104816d60(void)

{
  _objc_opt_self(&PTR_PTR_1129d90d0);
  return;
}



/* Entry: 104816d80; end: 104816d8b; -[SCAdPromoCodeImpression discount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816d80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090c18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090c18))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104816d8c; end: 104816d97; -[SCAdPromoCodeImpression code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816d8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090c20);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090c20))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104816d98; end: 104816ddf;  */

void FUN_104816d98(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104816de0; end: 104816def; -[SCAdPromoCodeImpression location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104816de0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090c28);
}



/* Entry: 104816df0; end: 104816e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c20);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113090c28) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104816e7c; end: 104816f1b; -[SCAdPromoCodeImpression initWithDiscount:code:location:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113090c18);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113090c20);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_113090c28) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104816f1c; end: 104816ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104816f1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c18);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c20);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113090c28) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104816ff4; end: 104817027; -[SCAdPromoCodeImpression hash] */

undefined8 FUN_104816ff4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104817028();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104817028; end: 1048170df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817028(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090c18))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090c20))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090c28));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048170e0; end: 104817207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048170e0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar5 = *(ulong *)(unaff_x20 + _DAT_113090c18);
      if (uVar5 == *(ulong *)(lStack_68 + _DAT_113090c18) &&
          ((ulong *)(unaff_x20 + _DAT_113090c18))[1] == ((ulong *)(lStack_68 + _DAT_113090c18))[1])
      {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113090c20);
      if (lVar2 == *(long *)(lStack_68 + _DAT_113090c20) &&
          ((long *)(unaff_x20 + _DAT_113090c20))[1] == ((long *)(lStack_68 + _DAT_113090c20))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar2;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113090c28);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_113090c28);
      _objc_release(lStack_68);
      if ((uVar5 & 1) != 0) {
        return uVar1 & (int)uVar4 == (int)uVar6;
      }
    }
  }
  return 0;
}



/* Entry: 104817208; end: 104817287; -[SCAdPromoCodeImpression isEqual:] */

uint FUN_104817208(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048170e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104817288; end: 10481728b; -[SCAdPromoCodeImpression copyWithZone:] */

void FUN_104817288(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10481728c; end: 10481738b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481728c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090c18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090c18))[1]);
  uVar1 = 0x544e554f43534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e554f43534944,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090c20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090c20))[1]);
  uVar1 = 0x45444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444f43,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4e4f495441434f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441434f4c,0xe800000000000000);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10481738c; end: 1048173db; -[SCAdPromoCodeImpression encodeWithCoder:] */

void FUN_10481738c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10481728c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048173dc; end: 10481740b;  */

void FUN_1048173dc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10481740c(param_1);
  return;
}



/* Entry: 10481740c; end: 104817697;  */

undefined8 FUN_10481740c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x544e554f43534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e554f43534944,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
LAB_1048175d4:
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_98;
    uVar2 = uStack_a0;
    if ((uVar4 & 1) != 0) {
      uVar5 = 0x45444f43;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444f43,0xe400000000000000);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar7);
        goto LAB_1048175d4;
      }
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) == 0) {
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar7);
        goto LAB_1048175dc;
      }
      uVar5 = 0x4e4f495441434f4c;
      uVar8 = 0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495441434f4c);
      lVar3 = param_1;
      func_0x00010bf66f40(param_1);
      _objc_release(uVar5);
      FUN_1046adfac(lVar3);
      if ((uVar8 & 0xff) != 1) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar7);
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = uStack_a0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c00cc00();
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(param_1);
        return unaff_x20;
      }
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uStack_98);
    }
    _objc_release(param_1);
  }
LAB_1048175dc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104817698; end: 1048176bf; -[SCAdPromoCodeImpression initWithCoder:] */

void FUN_104817698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10481740c();
  return;
}



/* Entry: 1048176c0; end: 1048176db; -[SCAdPromoCodeImpression description] */

void FUN_1048176c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048176dc; end: 104817757; -[SCAdPromoCodeImpression init] */

void FUN_1048176dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdPromoCodeImpressionWrapper.swift",0x2e,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104817724);
  (*pcVar1)();
}



/* Entry: 104817758; end: 104817797; -[SCAdPromoCodeImpression .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817758(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090c18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090c20 + 8))
  ;
  return;
}



/* Entry: 104817798; end: 1048177b7;  */

void FUN_104817798(void)

{
  _objc_opt_self(&PTR_PTR_1129d91b8);
  return;
}



/* Entry: 1048177b8; end: 104817827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048177b8(undefined4 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113090c58) = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c60);
  puVar1[1] = *(undefined8 *)(param_1 + 4);
  *puVar1 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 6);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c68);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104817828; end: 1048178ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817828(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_113090c58));
  if (((undefined8 *)(unaff_x20 + _DAT_113090c60))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090c68))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104817900; end: 104817a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104817900(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113090c58);
      iVar2 = *(int *)(lStack_68 + _DAT_113090c58);
      lVar5 = ((long *)(unaff_x20 + _DAT_113090c60))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113090c60))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113090c60);
        if (lVar4 == *(long *)(lStack_68 + _DAT_113090c60) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_113090c68))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113090c68))[1];
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 == 0) {
LAB_104817a84:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar6);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar6 != 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_113090c68);
          if (lVar4 == *(long *)(lStack_68 + _DAT_113090c68) && lVar5 == lVar6) {
            _objc_release(lStack_68);
            goto LAB_104817a84;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar4;
        }
        _objc_release(lStack_68);
      }
      if (iVar1 == iVar2) {
        uVar7 = uVar7 & uVar8;
        goto LAB_1048179d8;
      }
    }
  }
  uVar7 = 0;
LAB_1048179d8:
  return uVar7 & 1;
}



/* Entry: 104817a98; end: 104817aa7; -[SCPromotePublisherStoryInfo corpus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104817a98(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113090c58);
}



/* Entry: 104817aa8; end: 104817ab3; -[SCPromotePublisherStoryInfo publisherId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817aa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090c60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090c60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104817ab4; end: 104817abf; -[SCPromotePublisherStoryInfo storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817ab4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090c68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090c68);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104817ac0; end: 104817b17;  */

void FUN_104817ac0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104817b18; end: 104817ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817b18(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113090c58) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c60);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104817ba4; end: 104817c5f; -[SCPromotePublisherStoryInfo initWithCorpus:publisherId:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817ba4(long param_1,long param_2,undefined4 param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined4 *)(param_1 + _DAT_113090c58) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113090c60);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113090c68);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104817c60; end: 104817c93; -[SCPromotePublisherStoryInfo hash] */

undefined8 FUN_104817c60(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104817828();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104817c94; end: 104817d13; -[SCPromotePublisherStoryInfo isEqual:] */

uint FUN_104817c94(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104817900(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104817d14; end: 104817d17; -[SCPromotePublisherStoryInfo copyWithZone:] */

void FUN_104817d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104817d18; end: 104817e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104817d18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x535550524f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535550524f43,0xe600000000000000);
  func_0x00010bf92f80(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090c60))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454853494c425550;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454853494c425550,0xec00000044495f52);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113090c68))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f59524f5453,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104817e44; end: 104817e93; -[SCPromotePublisherStoryInfo encodeWithCoder:] */

void FUN_104817e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104817d18(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104817e94; end: 104817ec3;  */

void FUN_104817e94(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104817ec4(param_1);
  return;
}



/* Entry: 104817ec4; end: 10481811b;  */

undefined8 FUN_104817ec4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x535550524f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535550524f43,0xe600000000000000);
  func_0x00010bf66ee0(param_1);
  _objc_release(uVar4);
  uVar4 = 0x454853494c425550;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454853494c425550,0xec00000044495f52);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x44495f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f59524f5453,0xe800000000000000);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c005fc0();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10481811c; end: 104818143; -[SCPromotePublisherStoryInfo initWithCoder:] */

void FUN_10481811c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104817ec4();
  return;
}



/* Entry: 104818144; end: 10481815f; -[SCPromotePublisherStoryInfo description] */

void FUN_104818144(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104818160; end: 1048181db; -[SCPromotePublisherStoryInfo init] */

void FUN_104818160(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/PromotePublisherStoryInfoWrapper.swift",0x32,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048181a8);
  (*pcVar1)();
}



/* Entry: 1048181dc; end: 10481821b; -[SCPromotePublisherStoryInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048181dc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090c60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090c68 + 8))
  ;
  return;
}



/* Entry: 10481821c; end: 10481823b;  */

void FUN_10481821c(void)

{
  _objc_opt_self(&PTR_PTR_1129d9298);
  return;
}



/* Entry: 10481823c; end: 104818297; -[SCAdMediaReminderCountdown name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481823c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090c98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090c98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104818298; end: 1048182a7; -[SCAdMediaReminderCountdown startTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104818298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090ca0);
}



/* Entry: 1048182a8; end: 1048182b7; -[SCAdMediaReminderCountdown itemAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048182a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090ca8));
  return;
}



/* Entry: 1048182b8; end: 104818313; -[SCAdMediaReminderCountdown bottomSnapProto] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048182b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090cb0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113090cb0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104818314; end: 1048183b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104818314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090ca0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090ca8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090cb0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}


