/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104495270; end: 1044952af;  */

undefined8 FUN_104495270(void)

{
  if (lRam000000011307e758 != -1) {
    _swift_once(0x11307e758,FUN_1044950b8);
  }
  return 0x113813b00;
}



/* Entry: 1044952b0; end: 1044952c7;  */

undefined * FUN_1044952b0(void)

{
  return &UNK_10dd08b30;
}



/* Entry: 1044952c8; end: 1044952eb; +[SCGenerativeAILensRemoteApiConstants asyncTaskStatusKey] */

void FUN_1044952c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x737574617473,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044952ec; end: 104495317; +[SCGenerativeAILensRemoteApiConstants didFinishProcessingEndpoint] */

void FUN_1044952ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f2026d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104495318; end: 104495353; -[SCGenerativeAILensRemoteApiConstants init] */

void FUN_104495318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104495354; end: 104495387;  */

void FUN_104495354(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104495388; end: 10449539b; -[SCGenerativeAILensRemoteApiConstants .cxx_destruct] */

void FUN_104495388(void)

{
  return;
}



/* Entry: 10449539c; end: 1044953bb;  */

void FUN_10449539c(void)

{
  _objc_opt_self(&PTR_PTR_1129bead0);
  return;
}



/* Entry: 1044953bc; end: 1044953cf;  */

bool FUN_1044953bc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044953d0; end: 10449547b;  */

void FUN_1044953d0(void)

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



/* Entry: 10449547c; end: 1044954ab;  */

void FUN_10449547c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1044954ac; end: 1044954eb;  */

void FUN_1044954ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08bd0;
  _swift_getWitnessTable(&UNK_10dd08bd0,&UNK_110779630);
  puRam000000011307e788 = puVar1;
  return;
}



/* Entry: 1044954ec; end: 10449564f;  */

int FUN_1044954ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104495568;
        goto LAB_10449554c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10449554c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104495568:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104495650; end: 1044956e7;  */

long FUN_104495650(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044956e8; end: 10449575b;  */

undefined8 * FUN_1044956e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10449575c; end: 1044957a7;  */

undefined8 * FUN_10449575c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1044957a8; end: 104495843;  */

int FUN_1044957a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104495844; end: 104496167;  */

long FUN_104495844(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104496168; end: 1044961b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496168(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e790) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044961b4; end: 104496213; -[_TtC33GenerativeAILensRemoteApiServices33GenerativeAILensRemoteApiServices init] */

void FUN_1044961b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GenerativeAILensRemoteApiServices.GenerativeAILensRemoteApiServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044961e0);
  (*pcVar1)();
}



/* Entry: 104496214; end: 104496223; -[_TtC33GenerativeAILensRemoteApiServices33GenerativeAILensRemoteApiServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e790));
  return;
}



/* Entry: 104496224; end: 10449622f; -[SCGenerativeAILensMetaData lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496224(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e7c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e7c0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104496230; end: 10449623b; -[SCGenerativeAILensMetaData mlModelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e7c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e7c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10449623c; end: 104496247; -[SCGenerativeAILensMetaData templateId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449623c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e7d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e7d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104496248; end: 10449628f;  */

void FUN_104496248(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104496290; end: 10449629b; -[SCGenerativeAILensMetaData friendUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496290(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307e7d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307e7d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10449629c; end: 1044962eb; -[SCGenerativeAILensMetaData inputMediaDataArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449629c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e7e0);
  FUN_10449781c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044962ec; end: 1044962fb; -[SCGenerativeAILensMetaData outputMediaData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044962ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e7e8));
  return;
}



/* Entry: 1044962fc; end: 104496307; -[SCGenerativeAILensMetaData prompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044962fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307e7f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307e7f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104496308; end: 10449635f;  */

void FUN_104496308(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104496360; end: 10449645f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e7c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e7c8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e7d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e7d8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11307e7e0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11307e7e8) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e7f0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104496460; end: 1044965cf; -[SCGenerativeAILensMetaData initWithLensId:mlModelId:templateId:friendUserId:inputMediaDataArray:outputMediaData:prompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496460(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar6 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar7 = lVar6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    param_6 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = lVar7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar5 = 0;
  FUN_10449781c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (param_9 == 0) {
    param_9 = 0;
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e7c0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e7c8);
  *puVar1 = param_4;
  puVar1[1] = lVar6;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e7d0);
  *puVar1 = param_5;
  puVar1[1] = lVar7;
  plVar2 = (long *)(param_1 + _DAT_11307e7d8);
  *plVar2 = param_6;
  plVar2[1] = lVar8;
  *(undefined8 *)(param_1 + _DAT_11307e7e0) = param_7;
  *(undefined8 *)(param_1 + _DAT_11307e7e8) = param_8;
  plVar2 = (long *)(param_1 + _DAT_11307e7f0);
  *plVar2 = param_9;
  plVar2[1] = lVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1044965d0; end: 10449663f;  */

undefined8 FUN_1044965d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104496c40(param_1);
  func_0x000102aba200(param_1);
  return uVar1;
}



/* Entry: 104496640; end: 104496643; -[SCGenerativeAILensMetaData copyWithZone:] */

void FUN_104496640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104496644; end: 10449668f; -[SCGenerativeAILensMetaData description] */

void FUN_104496644(undefined8 param_1)

{
  undefined1 auStack_a8 [136];
  
  _objc_retain();
  func_0x000104496fac(auStack_a8);
  _objc_release(param_1);
  func_0x000102aba200(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104496690; end: 10449670b; -[SCGenerativeAILensMetaData init] */

void FUN_104496690(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "GenerativeAILensRemoteApiServices/GenerativeAILensMetaDataWrapper.swift",0x47,2,0x43,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044966d8);
  (*pcVar1)();
}



/* Entry: 10449670c; end: 1044967a7; -[SCGenerativeAILensMetaData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449670c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e7c0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e7c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e7d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e7d8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e7e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307e7e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307e7f0 + 8))
  ;
  return;
}



/* Entry: 1044967a8; end: 104496813;  */

void FUN_1044967a8(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 104496814; end: 1044969af;  */

ulong FUN_104496814(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044968e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044968e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_10449781c(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_10449781c(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001d,0x800000010f202790);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044969b0);
  (*pcVar2)();
}



/* Entry: 1044969b0; end: 1044969e7;  */

void FUN_1044969b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1044969e8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1044969e8; end: 104496b23;  */

code * FUN_1044969e8(ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104496b24);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = FUN_10449781c;
    FUN_1044967a8(FUN_10449781c,0x11307e820,&UNK_10dd08d38);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_10449781c(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 104496b24; end: 104496c3f;  */

undefined * FUN_104496b24(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104496c40);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ee9030;
    func_0x0001000285a8(0x112ee9030,&UNK_10dd08d30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110779788);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104496c40; end: 1044972cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104496c40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_11307e7c0);
  puVar13[1] = uStack_78;
  *puVar13 = uStack_80;
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_11307e7c8);
  puVar13[1] = uStack_88;
  *puVar13 = uStack_90;
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_11307e7d0);
  puVar13[1] = uStack_98;
  *puVar13 = uStack_a0;
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_11307e7d8);
  puVar13[1] = uStack_a8;
  *puVar13 = uStack_b0;
  lVar12 = param_1[8];
  lVar14 = *(long *)(lVar12 + 0x10);
  if (lVar14 == 0) {
    func_0x000100402194(&uStack_80,&puStack_c0);
    func_0x000100402194(&uStack_90,&puStack_c0);
    func_0x000100402194(&uStack_a0,&puStack_c0);
    FUN_1044972ec(&uStack_b0,&puStack_c0,0x112d35ff8,&UNK_10d900cd0);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100402194(&uStack_80,&puStack_c0);
    func_0x000100402194(&uStack_90,&puStack_c0);
    func_0x000100402194(&uStack_a0,&puStack_c0);
    FUN_1044972ec(&uStack_b0,&puStack_c0,0x112d35ff8,&UNK_10d900cd0);
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1044969b0(0,lVar14,0);
    puVar11 = puStack_c0;
    lVar9 = 0;
    FUN_10449781c();
    puVar13 = (undefined8 *)(lVar12 + 0x48);
    do {
      uVar2 = puVar13[-5];
      uVar6 = puVar13[-4];
      uVar3 = puVar13[-3];
      uVar7 = puVar13[-2];
      uVar4 = puVar13[-1];
      uVar8 = *puVar13;
      lVar12 = lVar9;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar12 + _DAT_11307e828);
      *puVar1 = uVar2;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(lVar12 + _DAT_11307e830);
      *puVar1 = uVar3;
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(lVar12 + _DAT_11307e838);
      *puVar1 = uVar4;
      puVar1[1] = uVar8;
      _swift_bridgeObjectRetain(uVar6);
      func_0x000100de78a0(uVar3,uVar7);
      func_0x000100de78a0(uVar4,uVar8);
      plVar10 = &lStack_100;
      lStack_100 = lVar12;
      lStack_f8 = lVar9;
      _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
      uVar5 = *(ulong *)(puVar11 + 0x10);
      puStack_c0 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar5) {
        FUN_1044969b0(1 < *(ulong *)(puVar11 + 0x18),uVar5 + 1,1);
      }
      puVar13 = puVar13 + 6;
      *(ulong *)(puStack_c0 + 0x10) = uVar5 + 1;
      *(long **)(puStack_c0 + uVar5 * 8 + 0x20) = plVar10;
      lVar14 = lVar14 + -1;
      puVar11 = puStack_c0;
    } while (lVar14 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_11307e7e0) = puVar11;
  lVar12 = 0;
  FUN_10449781c();
  lVar14 = lVar12;
  _objc_allocWithZone();
  uStack_b8 = param_1[10];
  puStack_c0 = (undefined *)param_1[9];
  puVar13 = (undefined8 *)(lVar14 + _DAT_11307e828);
  puVar13[1] = uStack_b8;
  *puVar13 = puStack_c0;
  uStack_c8 = param_1[0xc];
  uStack_d0 = param_1[0xb];
  puVar13 = (undefined8 *)(lVar14 + _DAT_11307e830);
  puVar13[1] = uStack_c8;
  *puVar13 = uStack_d0;
  uStack_d8 = param_1[0xe];
  uStack_e0 = param_1[0xd];
  puVar13 = (undefined8 *)(lVar14 + _DAT_11307e838);
  puVar13[1] = uStack_d8;
  *puVar13 = uStack_e0;
  func_0x000100402194(&puStack_c0,&uStack_f0);
  FUN_1044972ec(&uStack_d0,&uStack_f0,0x112d56fe0,&UNK_10d91dda0);
  FUN_1044972ec(&uStack_e0,&uStack_f0,0x112d56fe0,&UNK_10d91dda0);
  plVar10 = &lStack_110;
  lStack_110 = lVar14;
  lStack_108 = lVar12;
  _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11307e7e8) = plVar10;
  uStack_e8 = param_1[0x10];
  uStack_f0 = param_1[0xf];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_11307e7f0);
  puVar13[1] = uStack_e8;
  *puVar13 = uStack_f0;
  FUN_1044972ec(&uStack_f0,auStack_120,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(auStack_130,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044972cc; end: 1044972eb;  */

void FUN_1044972cc(void)

{
  _objc_opt_self(&PTR_PTR_1129bec40);
  return;
}



/* Entry: 1044972ec; end: 104497333;  */

undefined8 FUN_1044972ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104497334; end: 1044973ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104497334(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_80;
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e828);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e830);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e838);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x00010105aabc(&uStack_50,auStack_70);
  func_0x00010105aabc(&uStack_60,auStack_70);
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  FUN_104497670(param_1);
  return puVar2;
}



/* Entry: 1044973f0; end: 10449743b; -[SCGenerativeAILensMediaData boltUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044973f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e828);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e828))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10449743c; end: 104497447; -[SCGenerativeAILensMediaData encryptionKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449743c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11307e830))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307e830);
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



/* Entry: 104497448; end: 104497453; -[SCGenerativeAILensMediaData encryptionIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497448(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11307e838))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307e838);
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



/* Entry: 104497454; end: 1044974c3;  */

void FUN_104497454(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044974c4; end: 10449755f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044974c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e828);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e830);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e838);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104497560; end: 10449766f; -[SCGenerativeAILensMediaData initWithBoltUrl:encryptionKey:encryptionIv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497560(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    lVar6 = param_2;
    _objc_retain(param_5);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_2;
    _objc_retain(param_5);
    lVar5 = param_4;
    _objc_retain(param_4);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar6 = lVar4;
    _objc_release(lVar5);
  }
  if (param_5 == 0) {
    lVar5 = 0;
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar5 = param_5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_5);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e828);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_11307e830);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  plVar2 = (long *)(param_1 + _DAT_11307e838);
  *plVar2 = lVar5;
  plVar2[1] = lVar6;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104497670; end: 1044976a3;  */

undefined8 FUN_104497670(undefined8 param_1)

{
  (*(code *)(undefined *)0x104495870)();
  return param_1;
}



/* Entry: 1044976a4; end: 1044976a7; -[SCGenerativeAILensMediaData copyWithZone:] */

void FUN_1044976a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044976a8; end: 10449774b; -[SCGenerativeAILensMediaData description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044976a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11307e828 + 8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307e830);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11307e830))[1];
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e838);
  uVar4 = ((undefined8 *)(param_1 + _DAT_11307e838))[1];
  _swift_bridgeObjectRetain(uVar5);
  func_0x000100de78a0(uVar1,uVar3);
  func_0x000100de78a0(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar5);
  func_0x0001000b44c0(uVar1,uVar3);
  func_0x0001000b44c0(uVar2,uVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10449774c; end: 1044977c7; -[SCGenerativeAILensMediaData init] */

void FUN_10449774c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "GenerativeAILensRemoteApiServices/GenerativeAILensMediaDataWrapper.swift",0x48,2,0x2d,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104497794);
  (*pcVar1)();
}



/* Entry: 1044977c8; end: 10449781b; -[SCGenerativeAILensMediaData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001044977fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104497800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044977c8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e828 + 8));
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e830))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11307e830));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10449781c; end: 10449783b;  */

void FUN_10449781c(void)

{
  _objc_opt_self(&PTR_PTR_1129bed38);
  return;
}



/* Entry: 10449783c; end: 1044978e7;  */

void FUN_10449783c(void)

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



/* Entry: 1044978e8; end: 104497927;  */

void FUN_1044978e8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104497928; end: 10449796f; -[SCAIModeSessionStatus init] */

void FUN_104497928(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "GenerativeAILensRemoteApiServices/AIModeSessionWrapper.swift",0x3c,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104497970);
  (*pcVar1)();
}



/* Entry: 104497970; end: 104497977; +[SCAIModeSessionStatus editing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497970(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307e868) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104497978; end: 10449797f; +[SCAIModeSessionStatus applied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497978(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307e868) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104497980; end: 1044979cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497980(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307e868) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044979d0; end: 1044979eb; -[SCAIModeSessionStatus matchEditing:applied:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044979d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11307e868) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001044979e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1044979ec; end: 1044979f7; -[SCAIModeSession lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044979ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e870);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e870))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044979f8; end: 104497a03; -[SCAIModeSession sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044979f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e878);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e878))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104497a04; end: 104497a4b;  */

void FUN_104497a04(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104497a4c; end: 104497a5b; -[SCAIModeSession status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e880));
  return;
}



/* Entry: 104497a5c; end: 104497ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e870);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e878);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307e880) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104497ae8; end: 104497b93; -[SCAIModeSession initWithLensId:sessionId:status:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e870);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e878);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_11307e880) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104497b94; end: 104497bc3;  */

void FUN_104497b94(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104497bc4(param_1);
  return;
}



/* Entry: 104497bc4; end: 104497c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497bc4(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long alStack_60 [2];
  long alStack_40 [2];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  uVar6 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307e870);
  puVar2[1] = param_1[1];
  *puVar2 = uVar6;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307e878);
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  cVar1 = *(char *)(param_1 + 4);
  FUN_104497c78();
  lVar4 = lVar3;
  _objc_allocWithZone();
  plVar5 = alStack_40;
  if (cVar1 != '\x01') {
    plVar5 = alStack_60;
  }
  *(bool *)(lVar4 + _DAT_11307e868) = cVar1 == '\x01';
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11307e880) = plVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104497c78; end: 104497c97;  */

void FUN_104497c78(void)

{
  _objc_opt_self(&PTR_PTR_1129bee10);
  return;
}



/* Entry: 104497c98; end: 104497cdf; -[SCAIModeSession init] */

void FUN_104497c98(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "GenerativeAILensRemoteApiServices/AIModeSessionWrapper.swift",0x3c,2,0x7d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104497ce0);
  (*pcVar1)();
}



/* Entry: 104497ce0; end: 104497ce3;  */

void FUN_104497ce0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104497ce4; end: 104497d17;  */

void FUN_104497ce4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104497d18; end: 104497d67; -[SCAIModeSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104497d18(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e870 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e878 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e880));
  return;
}



/* Entry: 104497d68; end: 104497ecf;  */

int FUN_104497d68(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104497de4;
        goto LAB_104497dc8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104497dc8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104497de4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104497ed0; end: 104497f0f;  */

void FUN_104497ed0(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08dbc;
  _swift_getWitnessTable(&UNK_10dd08dbc,&UNK_1107798c0);
  puRam000000011307e8d8 = puVar1;
  return;
}



/* Entry: 104497f10; end: 104497f13; -[SCAIModeSessionStatus description] */

void FUN_104497f10(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104497f14; end: 104497f17; -[SCAIModeSession description] */

void FUN_104497f14(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104497f18; end: 104497f1b; -[SCAIModeSessionStatus copyWithZone:] */

void FUN_104497f18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104497f1c; end: 104497f37; -[SCAIModeSession copyWithZone:] */

void FUN_104497f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104497f38; end: 10449800f;  */

void FUN_104497f38(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104498010; end: 10449801f;  */

void FUN_104498010(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104498020; end: 10449805f;  */

void FUN_104498020(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08e68;
  _swift_getWitnessTable(&UNK_10dd08e68,&UNK_1107799c0);
  puRam000000011307e8e8 = puVar1;
  return;
}



/* Entry: 104498060; end: 104498097;  */

undefined1  [16] FUN_104498060(void)

{
  return ZEXT816(0x1107799c0);
}



/* Entry: 104498098; end: 1044980db;  */

void FUN_104498098(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1044980dc; end: 1044980f7; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationUsesMixedFeedFeedType:] */

uint FUN_1044980dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1044981a0(param_3);
  return (uint)param_3 & 1;
}



/* Entry: 1044980f8; end: 104498103; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationMixedFeedSwipeToProfileEnabled:] */

bool FUN_1044980f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x62;
}



/* Entry: 104498104; end: 10449811f; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationUsesBottomProgressBarForSpotlightContext:] */

uint FUN_104498104(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(param_3 - 0x56U < 0x10) & 0x9001U >> (ulong)((uint)(param_3 - 0x56U) & 0x1f);
}



/* Entry: 104498120; end: 10449812f; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationEnablesHorizontalActionBar:] */

bool FUN_104498120(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 0x2bU < 3;
}



/* Entry: 104498130; end: 10449816b; -[SCBroadcastViewLocationMixedFeedHelpers init] */

void FUN_104498130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10449816c; end: 10449819f;  */

void FUN_10449816c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044981a0; end: 1044981b3;  */

bool FUN_1044981a0(int param_1)

{
  return param_1 == 0x62 || param_1 == 0x65;
}



/* Entry: 1044981b4; end: 1044981d3;  */

void FUN_1044981b4(void)

{
  _objc_opt_self(&PTR_PTR_1129befa8);
  return;
}



/* Entry: 1044981d4; end: 1044981d7; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationUseScopeForBusinessProfilePresentation:] */

bool FUN_1044981d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x62 || param_3 == 0x65;
}



/* Entry: 1044981d8; end: 1044981db; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationAllowsSquareCTAStyle:] */

bool FUN_1044981d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x62 || param_3 == 0x65;
}



/* Entry: 1044981dc; end: 1044981df; +[SCBroadcastViewLocationMixedFeedHelpers viewLocationEnablesScrubber:] */

bool FUN_1044981dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x62 || param_3 == 0x65;
}


