/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104408d84; end: 104408db7;  */

void FUN_104408d84(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104408db8; end: 104408e27; -[SCValdiHeliosButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104408db8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077518));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113077530));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077538 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077520));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077548 + 8))
  ;
  return;
}



/* Entry: 104408e28; end: 104408e47;  */

void FUN_104408e28(void)

{
  _objc_opt_self(&PTR_PTR_1129af850);
  return;
}



/* Entry: 104408e48; end: 104408f23;  */

void FUN_104408e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  if (param_7 < 2) {
    if (param_7 != 0) {
      param_5 = param_6;
      if (param_7 != 1) {
        return;
      }
LAB_104408ea4:
      _swift_bridgeObjectRetain(param_5);
      _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(param_3);
      return;
    }
    _swift_bridgeObjectRetain(param_4);
  }
  else {
    if (param_7 != 2) {
      if (param_7 == 3) goto LAB_104408ea4;
      if (param_7 != 4) {
        return;
      }
    }
    _objc_retain();
    param_2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 104408f24; end: 104408f9b;  */

undefined8 * FUN_104408f24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *(undefined1 *)(param_1 + 6);
  FUN_104408e48(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_2 = uVar1;
  param_2[1] = uVar4;
  param_2[2] = uVar2;
  param_2[3] = uVar5;
  param_2[4] = uVar3;
  param_2[5] = uVar6;
  *(undefined1 *)(param_2 + 6) = uVar7;
  return param_2;
}



/* Entry: 104408f9c; end: 10440902b;  */

void FUN_104408f9c(long param_1,long param_2)

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



/* Entry: 10440902c; end: 104409207;  */

long FUN_10440902c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104409208; end: 10440921b;  */

bool FUN_104409208(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10440921c; end: 1044092f3;  */

void FUN_10440921c(void)

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



/* Entry: 1044092f4; end: 104409313;  */

void FUN_1044092f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104409314; end: 104409353;  */

void FUN_104409314(void)

{
  undefined *puVar1;
  
  if (puRam00000001130775a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf970c;
  _swift_getWitnessTable(&UNK_10dcf970c,&UNK_110769520);
  puRam00000001130775a8 = puVar1;
  return;
}



/* Entry: 104409354; end: 104409377;  */

undefined1  [16] FUN_104409354(void)

{
  return ZEXT816(0x110769520);
}



/* Entry: 104409378; end: 10440944f;  */

void FUN_104409378(void)

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



/* Entry: 104409450; end: 10440946f;  */

void FUN_104409450(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104409470; end: 1044094af;  */

void FUN_104409470(void)

{
  undefined *puVar1;
  
  if (puRam00000001130775b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf97c0;
  _swift_getWitnessTable(&UNK_10dcf97c0,&UNK_110769598);
  puRam00000001130775b0 = puVar1;
  return;
}



/* Entry: 1044094b0; end: 1044094bf;  */

undefined1  [16] FUN_1044094b0(void)

{
  return ZEXT816(0x110769598);
}



/* Entry: 1044094c0; end: 10440951b; -[SCTopicModel hashtag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044094c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130775b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130775b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440951c; end: 10440952b; -[SCTopicModel suggestedReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10440951c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130775c0);
}



/* Entry: 10440952c; end: 10440953b; -[SCTopicModel source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10440952c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130775c8);
}



/* Entry: 10440953c; end: 10440954b; -[SCTopicModel suggestedFromServer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10440953c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130775d0);
}



/* Entry: 10440954c; end: 1044095df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440954c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130775b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130775c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130775c8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_1130775d0) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044095e0; end: 10440968b; -[SCTopicModel initWithHashtag:suggestedReason:source:suggestedFromServer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044095e0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130775b8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130775c0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130775c8) = param_5;
  *(undefined1 *)(param_1 + _DAT_1130775d0) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10440968c; end: 104409783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440968c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130775b8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_1130775c0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_1130775c8) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_1130775d0) = *(undefined1 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104409784; end: 104409787; -[SCTopicModel copyWithZone:] */

void FUN_104409784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104409788; end: 10440992b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409788(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  if (((undefined8 *)(unaff_x20 + _DAT_1130775b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130775b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x47415448534148;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x47415448534148,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uStack_48 = *(undefined8 *)(unaff_x20 + _DAT_1130775c0);
  puVar3 = &uStack_48;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar3,&UNK_110769598);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1fc060);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar3);
  _objc_release(uVar1);
  uStack_48 = *(undefined8 *)(unaff_x20 + _DAT_1130775c8);
  puVar3 = &uStack_48;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar3,&UNK_110769520);
  uVar1 = 0x454352554f53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fc080);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10440992c; end: 10440997b; -[SCTopicModel encodeWithCoder:] */

void FUN_10440992c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104409788(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10440997c; end: 1044099ab;  */

void FUN_10440997c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044099ac(param_1);
  return;
}



/* Entry: 1044099ac; end: 104409caf;  */

undefined8 FUN_1044099ac(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_x20;
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
  
  iVar2 = (int)&uStack_b0;
  uVar7 = 0;
  uVar8 = 0;
  uVar3 = 0x47415448534148;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x47415448534148,0xe700000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar4 = 0;
    uVar3 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_a8;
    uVar3 = uStack_b0;
    if (iVar2 == 0) {
      uVar3 = 0;
      lVar4 = 0;
    }
  }
  uVar5 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1fc060);
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
LAB_104409c0c:
    uStack_80 = uStack_a0;
    uStack_78 = uStack_98;
    uStack_70 = uStack_90;
    lStack_68 = lStack_88;
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar4);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,&UNK_110769598,6);
    if ((uVar7 & 1) != 0) {
      uVar5 = 0x454352554f53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
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
      if (lStack_88 == 0) goto LAB_104409c0c;
      _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,&UNK_110769520,6);
      if ((uVar8 & 1) != 0) {
        uVar5 = 0xd000000000000015;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fc080)
        ;
        func_0x00010bf66ce0(param_1);
        _objc_release(uVar5);
        if (lVar4 == 0) {
          uVar3 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar4);
          _swift_bridgeObjectRelease(lVar4);
        }
        func_0x00010c019f00();
        _objc_release(uVar3);
        _objc_release(param_1);
        return unaff_x20;
      }
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104409cb0; end: 104409cd7; -[SCTopicModel initWithCoder:] */

void FUN_104409cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1044099ac();
  return;
}



/* Entry: 104409cd8; end: 104409cf3; -[SCTopicModel description] */

void FUN_104409cd8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104409cf4; end: 104409d6f; -[SCTopicModel init] */

void FUN_104409cf4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCTopicServices/SCTopicModelWrapper.swift",
             0x29,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104409d3c);
  (*pcVar1)();
}



/* Entry: 104409d70; end: 104409d83; -[SCTopicModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130775b8 + 8))
  ;
  return;
}



/* Entry: 104409d84; end: 104409da3;  */

void FUN_104409d84(void)

{
  _objc_opt_self(&PTR_PTR_1129af958);
  return;
}



/* Entry: 104409da4; end: 104409daf; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo creatorDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409da4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077600);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077600))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409db0; end: 104409dbb; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo creatorProfileLogoUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409db0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077608);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077608))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409dbc; end: 104409dc7; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo creatorBitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409dbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113077610))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113077610);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409dc8; end: 104409dd3; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo creatorBitmojiSelfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409dc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113077618))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113077618);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409dd4; end: 104409e2b;  */

void FUN_104409dd4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104409e2c; end: 104409e3b; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo shouldShowCreatorBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104409e2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077620);
}



/* Entry: 104409e3c; end: 104409e47; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo additionalText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409e3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077628);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077628))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409e48; end: 104409e53; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo storyEncryptionKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409e48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077630);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077630))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409e54; end: 104409e5f; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo storyEncryptionIV] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409e54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077638);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077638))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409e60; end: 104409e6b; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo storyMediaClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409e60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077640);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077640))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104409e6c; end: 104409eb3;  */

void FUN_104409e6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104409eb4; end: 104409ec3; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104409eb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077648);
}



/* Entry: 104409ec4; end: 104409ed3; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo targetDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104409ec4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077650);
}



/* Entry: 104409ed4; end: 10440a1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104409ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077600);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077608);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077610);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077618);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113077620) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077628);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077630);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077638);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077640);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_113077648) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_113077650) = param_20;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10440a1dc; end: 10440a303; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo initWithCreatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalText:storyEncryptionKey:storyEncryptionIV:storyMediaClientId:lensId:targetDurationMs:] */

void FUN_10440a1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = uVar1;
  if (param_5 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b0 = uVar2;
    uStack_a8 = param_5;
  }
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  func_0x00010440a058(param_3,param_2,param_4,uVar1,uStack_a8,uStack_b0,param_6,uVar2,param_7);
  return;
}



/* Entry: 10440a304; end: 10440a323;  */

void FUN_10440a304(void)

{
  _objc_opt_self(&PTR_PTR_1129afa40);
  return;
}



/* Entry: 10440a324; end: 10440a40b; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo toData] */

/* WARNING: Removing unreachable block (ram,0x00010440a3a0) */

void FUN_10440a324(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  _objc_retain();
  uVar2 = param_1;
  __s10Foundation11JSONEncoderCACycfc();
  uVar3 = 0x112f27e38;
  uStack_38 = param_1;
  FUN_10440a40c(0x112f27e38,&UNK_10dcf98d8);
  puVar4 = &uStack_38;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar4,uVar1,uVar3);
  _objc_release(param_1);
  _swift_release(uVar2);
  puVar5 = puVar4;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar4,uVar1);
  func_0x00010006c090(puVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10440a40c; end: 10440a447;  */

void FUN_10440a40c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_10440a304();
    _swift_getWitnessTable(param_2,lVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10440a448; end: 10440a533; +[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo fromData:] */

/* WARNING: Removing unreachable block (ram,0x00010440a4e4) */

void FUN_10440a448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar1);
  uVar2 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar1 = 0x112fe8b50;
  FUN_10440a40c(0x112fe8b50,&UNK_10dcf98b0);
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&uStack_38,param_1,param_3,param_2,param_1,uVar1);
  func_0x00010006c090(param_3,param_2);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 10440a534; end: 10440a55f; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo init] */

void FUN_10440a534(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SpotlightCrossPostToStoryInfoAPI.CrossPostToStoryInfo",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440a560);
  (*pcVar1)();
}



/* Entry: 10440a560; end: 10440a6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10440a560(ulong param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte in_ZR;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  char *pcVar11;
  long extraout_x8;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **unaff_x23;
  long unaff_x24;
  undefined *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 *puVar12;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined **in_stack_00000000;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [72];
  
code_r0x00010440a560:
  puVar9 = (undefined *)0xee00747865546c61;
  ppuVar4 = (undefined **)0x6e6f697469646461;
  ppuVar10 = (undefined **)(param_1 & 0xff);
  ppuVar6 = ppuVar4;
  ppuVar8 = unaff_x20;
  puVar12 = unaff_x29;
  switch(ppuVar10) {
  default:
    ppuVar4 = (undefined **)0x12;
  case (undefined **)0x30:
  case (undefined **)0x3e:
  case (undefined **)0x48:
  case (undefined **)0x58:
  case (undefined **)0x66:
  case (undefined **)0xd0:
  case (undefined **)0xde:
  case (undefined **)0xf8:
    ppuVar4 = (undefined **)((ulong)ppuVar4 & 0xffffffffffff | 0xd000000000000000);
  case (undefined **)0x23:
  case (undefined **)0x37:
  case (undefined **)0x4b:
  case (undefined **)0x5f:
  case (undefined **)0xc3:
  case (undefined **)0xd7:
  case (undefined **)0xeb:
  case (undefined **)0xff:
    ppuVar10 = (undefined **)0x10f19c000;
  case (undefined **)0x2e:
  case (undefined **)0x56:
  case (undefined **)0xce:
  case (undefined **)0xf6:
    pcVar11 = (char *)(ppuVar10 + 0x14e);
code_r0x00010440a684:
    auVar18._8_8_ = (ulong)((long)pcVar11 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = ppuVar4;
    return auVar18;
  case (undefined **)0x1:
    puVar9 = (undefined *)0x800000010f1fc110;
    ppuVar10 = (undefined **)0x12;
  case (undefined **)0x45:
  case (undefined **)0x6d:
  case (undefined **)0xe5:
    auVar16._8_8_ = puVar9;
    auVar16._0_8_ = ((ulong)ppuVar10 | 0xd000000000000000) + 3;
    return auVar16;
  case (undefined **)0x2:
  case (undefined **)0x34:
    ppuVar10 = (undefined **)"fillsAvailableWidth";
  case (undefined **)0xd9:
    pcVar11 = (char *)(ppuVar10 + 0x2a);
    break;
  case (undefined **)0x3:
    pcVar11 = "creatorBitmojiSelfieId";
    break;
  case (undefined **)0x4:
  case (undefined **)0x47:
  case (undefined **)0x6f:
  case (undefined **)0xe7:
    pcVar11 = "shouldShowCreatorBadge";
    break;
  case (undefined **)0x6:
    ppuVar4 = (undefined **)0xd000000000000012;
    pcVar11 = "storyEncryptionKey";
    goto code_r0x00010440a684;
  case (undefined **)0x7:
  case (undefined **)0x39:
  case (undefined **)0x61:
    ppuVar10 = (undefined **)"fillsAvailableWidth";
  case (undefined **)0x20:
    auVar15._8_8_ = (ulong)(ppuVar10 + 0x32) | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000011;
    return auVar15;
  case (undefined **)0x8:
    ppuVar4 = (undefined **)0xd000000000000012;
    pcVar11 = "storyMediaClientId";
    goto code_r0x00010440a684;
  case (undefined **)0x9:
  case (undefined **)0xc4:
    puVar9 = (undefined *)0xe600000000000000;
    ppuVar4 = (undefined **)0x6449736e656c;
  case (undefined **)0x14:
  case (undefined **)0x1c:
    auVar13._8_8_ = puVar9;
    auVar13._0_8_ = ppuVar4;
    return auVar13;
  case (undefined **)0xa:
    puVar9 = (undefined *)0x800000010f1fc1d0;
    ppuVar4 = (undefined **)0xd000000000000010;
  case (undefined **)0x5:
  case (undefined **)0x4c:
    auVar17._8_8_ = puVar9;
    auVar17._0_8_ = ppuVar4;
    return auVar17;
  case (undefined **)0x11:
  case (undefined **)0x19:
    auVar19._1_7_ = 0;
    auVar19[0] = in_ZR;
    auVar19._8_8_ = 0xee00747865546c61;
    return auVar19;
  case (undefined **)0x12:
  case (undefined **)0x1a:
  case (undefined **)0x38:
    puVar12 = &stack0x00000040;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x24 = unaff_x21;
    in_stack_00000040 = unaff_x29;
    in_stack_00000048 = unaff_x30;
  case (undefined **)0x6c:
    ppuVar6 = (undefined **)0x113077658;
    func_0x0001000285a8(0x113077658,&UNK_10dcf98a0);
    unaff_x19 = ppuVar6;
    ppuVar8 = ppuVar4;
    unaff_x23 = unaff_x20;
  case (undefined **)0xe4:
    unaff_x27 = ppuVar6[-1];
    ppuVar10 = (undefined **)(*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  case (undefined **)0xec:
    (*(code *)PTR____chkstk_darwin_11034bd40)(ppuVar10);
    unaff_x22 = (long)register0x00000008 - extraout_x8;
    puVar9 = ppuVar8[3];
    puVar1 = ppuVar8[4];
    func_0x0001000a8868(ppuVar8,puVar9);
    FUN_10440ab9c();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (unaff_x22,&UNK_1107696b8,&UNK_1107696b8,ppuVar8,puVar9,puVar1);
  case (undefined **)0x60:
    ppuVar10 = (undefined **)0x113077000;
  case (undefined **)0x5c:
    ppuVar10 = (undefined **)ppuVar10[0xc0];
  case (undefined **)0x3b:
  case (undefined **)0x63:
  case (undefined **)0xdb:
    unaff_x21 = unaff_x24;
    param_4 = unaff_x19;
    ppuVar4 = *(undefined ***)((long)unaff_x23 + (long)ppuVar10);
    puVar9 = *(undefined **)((byte *)((long)unaff_x23 + (long)ppuVar10) + 8);
    *(undefined1 *)((long)puVar12 + -0x41) = 0;
    param_3 = (long)puVar12 + -0x41;
    unaff_x19 = param_4;
  case (undefined **)0x5d:
  case (undefined **)0xc1:
  case (undefined **)0xd5:
  case (undefined **)0xe9:
  case (undefined **)0xfd:
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(ppuVar4,puVar9,param_3,param_4);
  case (undefined **)0x21:
  case (undefined **)0x35:
  case (undefined **)0x49:
    if (unaff_x21 == 0) {
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077608);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077608) + 8);
      *(undefined1 *)((long)puVar12 + -0x42) = 1;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar7,uVar2,(long)puVar12 + -0x42,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077610);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077610) + 8);
      *(undefined1 *)((long)puVar12 + -0x43) = 2;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar7,uVar2,(long)puVar12 + -0x43,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077618);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077618) + 8);
      *(undefined1 *)((long)puVar12 + -0x44) = 3;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar7,uVar2,(long)puVar12 + -0x44,unaff_x19);
      bVar3 = *(byte *)((long)unaff_x23 + _DAT_113077620);
      *(undefined1 *)((long)puVar12 + -0x45) = 4;
      __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(bVar3,(long)puVar12 + -0x45,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077628);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077628) + 8);
      *(undefined1 *)((long)puVar12 + -0x46) = 5;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar7,uVar2,(long)puVar12 + -0x46,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077630);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077630) + 8);
      *(undefined1 *)((long)puVar12 + -0x47) = 6;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar7,uVar2,(long)puVar12 + -0x47,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077638);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077638) + 8);
      *(undefined1 *)(puVar12 + -9) = 7;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar7,uVar2,puVar12 + -9,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077640);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077640) + 8);
      *(undefined1 *)((long)puVar12 + -0x49) = 8;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar7,uVar2,(long)puVar12 + -0x49,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077648);
      *(undefined1 *)((long)puVar12 + -0x4a) = 9;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
                (uVar7,(long)puVar12 + -0x4a,unaff_x19);
      uVar7 = *(undefined8 *)((long)unaff_x23 + _DAT_113077650);
      *(undefined1 *)((long)puVar12 + -0x4b) = 10;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
                (uVar7,(long)puVar12 + -0x4b,unaff_x19);
      (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
    }
    else {
      (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
    }
    auVar27._8_8_ = unaff_x19;
    auVar27._0_8_ = unaff_x22;
    return auVar27;
  case (undefined **)0x18:
    ppuVar6 = *(undefined ***)(_DAT_113077600 + 0x6e6f697469646469);
    unaff_x19 = ppuVar4;
  case (undefined **)0x22:
  case (undefined **)0x36:
  case (undefined **)0x4a:
  case (undefined **)0x5e:
  case (undefined **)0xc2:
  case (undefined **)0xd6:
  case (undefined **)0xea:
  case (undefined **)0xfe:
    _swift_bridgeObjectRelease(ppuVar6);
    ppuVar10 = (undefined **)((long)unaff_x19 + _DAT_113077608);
  case (undefined **)0xed:
    ppuVar4 = (undefined **)ppuVar10[1];
  case (undefined **)0x25:
  case (undefined **)0x4d:
  case (undefined **)0xc5:
    _swift_bridgeObjectRelease(ppuVar4);
    ppuVar4 = *(undefined ***)((long)unaff_x19 + _DAT_113077610 + 8);
  case (undefined **)0x26:
  case (undefined **)0x4e:
  case (undefined **)0xc6:
  case (undefined **)0xee:
    _swift_bridgeObjectRelease(ppuVar4);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077618 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077628 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077630 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077638 + 8));
    uVar7 = *(undefined8 *)((long)unaff_x19 + _DAT_113077640 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    auVar30._8_8_ = puVar9;
    auVar30._0_8_ = uVar7;
    return auVar30;
  case (undefined **)0x24:
    bVar3 = *(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68);
    unaff_x19 = (undefined **)(ulong)bVar3;
  case (undefined **)0xb7:
    ppuVar4 = unaff_x19;
  case (undefined **)0xbc:
    __ss6HasherV8_combineyySuF(ppuVar4);
  case (undefined **)0x8b:
  case (undefined **)0xb2:
  case (undefined **)0x76:
  case (undefined **)0xba:
    __ss6HasherV9_finalizeSiyF();
  case (undefined **)0x77:
  case (undefined **)0x75:
  case (undefined **)0xb8:
    auVar22._8_8_ = puVar9;
    auVar22._0_8_ = ppuVar4;
    return auVar22;
  case (undefined **)0x44:
    auVar25._8_8_ = 0xee00747865546c61;
    auVar25._0_8_ = 0x6e6f697469646461;
    return auVar25;
  case (undefined **)0x46:
  case (undefined **)0x6e:
  case (undefined **)0xe6:
    _swift_getObjectType();
    ppuVar10 = &PTR_s_handleTrackingGesture__112525000;
    in_stack_00000000 = unaff_x20;
  case (undefined **)0x10:
    puVar9 = ppuVar10[0x164];
  case (undefined **)0xc0:
    _objc_msgSendSuper2();
    auVar26._8_8_ = puVar9;
    auVar26._0_8_ = register0x00000008;
    return auVar26;
  case (undefined **)0x70:
  case (undefined **)0x84:
  case (undefined **)0xab:
  case (undefined **)0x82:
  case (undefined **)0xa9:
  case (undefined **)0xd8:
    uVar5 = (ulong)*(byte *)unaff_x20;
    __ss6HasherV8_combineyySuF(0x6e6f697469646461,uVar5);
    auVar21._8_8_ = puVar9;
    auVar21._0_8_ = uVar5;
    return auVar21;
  case (undefined **)0x74:
    goto FUN_10440a750;
  case (undefined **)0x88:
  case (undefined **)0xaf:
  case (undefined **)0xbd:
    auVar24._8_8_ = 0xee00747865546c61;
    auVar24._0_8_ = 0x6e6f697469646461;
    return auVar24;
  case (undefined **)0x8a:
  case (undefined **)0xb1:
  case (undefined **)0xb9:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined **)0x72:
  case (undefined **)0x7b:
  case (undefined **)0x7f:
  case (undefined **)0x83:
  case (undefined **)0x86:
  case (undefined **)0x8c:
  case (undefined **)0xa2:
  case (undefined **)0xa6:
  case (undefined **)0xaa:
  case (undefined **)0xad:
  case (undefined **)0xb3:
  case (undefined **)0xb6:
    *(undefined8 **)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (undefined **)0x71:
  case (undefined **)0x3a:
  case (undefined **)0x62:
  case (undefined **)0xda:
    unaff_x19 = ppuVar10;
  case (undefined **)0x7a:
  case (undefined **)0x87:
  case (undefined **)0xa1:
  case (undefined **)0xae:
    FUN_10440b434();
  case (undefined **)0x7c:
  case (undefined **)0x7d:
  case (undefined **)0x80:
  case (undefined **)0xa3:
  case (undefined **)0xa4:
  case (undefined **)0xa7:
  case (undefined **)0xbe:
    *(byte *)unaff_x19 = (byte)ppuVar4;
  case (undefined **)0x73:
  case (undefined **)0x78:
  case (undefined **)0x81:
  case (undefined **)0x85:
  case (undefined **)0xa8:
  case (undefined **)0xac:
  case (undefined **)0xfc:
    auVar23._8_8_ = puVar9;
    auVar23._0_8_ = ppuVar4;
    return auVar23;
  case (undefined **)0x8d:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (undefined **)0x79:
  case (undefined **)0xa0:
  case (undefined **)0xb5:
    *(undefined8 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    bVar3 = *(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0);
    unaff_x19 = (undefined **)(ulong)bVar3;
  case (undefined **)0x89:
  case (undefined **)0x8f:
  case (undefined **)0xb0:
    ppuVar4 = unaff_x19;
  case (undefined **)0xbb:
    __ss6HasherV8_combineyySuF(ppuVar4);
    __ss6HasherV9_finalizeSiyF();
  case (undefined **)0x7e:
  case (undefined **)0x8e:
  case (undefined **)0xa5:
    auVar20._8_8_ = puVar9;
    auVar20._0_8_ = ppuVar4;
    return auVar20;
  case (undefined **)0xd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)();
    auVar28._8_8_ = puVar9;
    auVar28._0_8_ = unaff_x19;
    return auVar28;
  case (undefined **)0xe8:
    FUN_10440ab9c(0x6e6f697469646461,0xee00747865546c61);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)();
    auVar29._8_8_ = ppuVar4;
    auVar29._0_8_ = unaff_x19;
    return auVar29;
  }
  auVar14._8_8_ = (ulong)((long)pcVar11 + -0x20) | 0x8000000000000000;
  auVar14._0_8_ = 0xd000000000000016;
  return auVar14;
FUN_10440a750:
  param_1 = (ulong)*(byte *)unaff_x20;
  goto code_r0x00010440a560;
}



/* Entry: 10440a6a4; end: 10440a74f;  */

void FUN_10440a6a4(void)

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



/* Entry: 10440a750; end: 10440a757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10440a750(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte in_ZR;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  char *pcVar11;
  long extraout_x8;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **unaff_x23;
  long unaff_x24;
  undefined *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 *puVar12;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined **in_stack_00000000;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [72];
  
code_r0x00010440a750:
  ppuVar6 = (undefined **)(ulong)*(byte *)unaff_x20;
  puVar10 = (undefined *)0xee00747865546c61;
  ppuVar4 = (undefined **)0x6e6f697469646461;
  ppuVar7 = ppuVar4;
  ppuVar9 = unaff_x20;
  puVar12 = unaff_x29;
  switch(*(byte *)unaff_x20) {
  default:
    ppuVar4 = (undefined **)0x12;
  case 0x30:
  case 0x3e:
  case 0x48:
  case 0x58:
  case 0x66:
  case 0xd0:
  case 0xde:
  case 0xf8:
    ppuVar4 = (undefined **)((ulong)ppuVar4 & 0xffffffffffff | 0xd000000000000000);
  case 0x23:
  case 0x37:
  case 0x4b:
  case 0x5f:
  case 0xc3:
  case 0xd7:
  case 0xeb:
  case 0xff:
    ppuVar6 = (undefined **)0x10f19c000;
  case 0x2e:
  case 0x56:
  case 0xce:
  case 0xf6:
    pcVar11 = (char *)(ppuVar6 + 0x14e);
    break;
  case 1:
    puVar10 = (undefined *)0x800000010f1fc110;
    ppuVar6 = (undefined **)0x12;
  case 0x45:
  case 0x6d:
  case 0xe5:
    auVar16._8_8_ = puVar10;
    auVar16._0_8_ = ((ulong)ppuVar6 | 0xd000000000000000) + 3;
    return auVar16;
  case 2:
  case 0x34:
    ppuVar6 = (undefined **)"fillsAvailableWidth";
  case 0xd9:
    pcVar11 = (char *)(ppuVar6 + 0x2a);
code_r0x00010440a5e8:
    auVar14._8_8_ = (ulong)((long)pcVar11 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = 0xd000000000000016;
    return auVar14;
  case 3:
    pcVar11 = "creatorBitmojiSelfieId";
    goto code_r0x00010440a5e8;
  case 4:
  case 0x47:
  case 0x6f:
  case 0xe7:
    pcVar11 = "shouldShowCreatorBadge";
    goto code_r0x00010440a5e8;
  case 6:
    ppuVar4 = (undefined **)0xd000000000000012;
    pcVar11 = "storyEncryptionKey";
    break;
  case 7:
  case 0x39:
  case 0x61:
    ppuVar6 = (undefined **)"fillsAvailableWidth";
  case 0x20:
    auVar15._8_8_ = (ulong)(ppuVar6 + 0x32) | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000011;
    return auVar15;
  case 8:
    ppuVar4 = (undefined **)0xd000000000000012;
    pcVar11 = "storyMediaClientId";
    break;
  case 9:
  case 0xc4:
    puVar10 = (undefined *)0xe600000000000000;
    ppuVar4 = (undefined **)0x6449736e656c;
  case 0x14:
  case 0x1c:
    auVar13._8_8_ = puVar10;
    auVar13._0_8_ = ppuVar4;
    return auVar13;
  case 10:
    puVar10 = (undefined *)0x800000010f1fc1d0;
    ppuVar4 = (undefined **)0xd000000000000010;
  case 5:
  case 0x4c:
    auVar17._8_8_ = puVar10;
    auVar17._0_8_ = ppuVar4;
    return auVar17;
  case 0x11:
  case 0x19:
    auVar19._1_7_ = 0;
    auVar19[0] = in_ZR;
    auVar19._8_8_ = 0xee00747865546c61;
    return auVar19;
  case 0x12:
  case 0x1a:
  case 0x38:
    puVar12 = &stack0x00000040;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x24 = unaff_x21;
    in_stack_00000040 = unaff_x29;
    in_stack_00000048 = unaff_x30;
  case 0x6c:
    ppuVar7 = (undefined **)0x113077658;
    func_0x0001000285a8(0x113077658,&UNK_10dcf98a0);
    unaff_x19 = ppuVar7;
    ppuVar9 = ppuVar4;
    unaff_x23 = unaff_x20;
  case 0xe4:
    unaff_x27 = ppuVar7[-1];
    ppuVar6 = (undefined **)(*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  case 0xec:
    (*(code *)PTR____chkstk_darwin_11034bd40)(ppuVar6);
    unaff_x22 = (long)register0x00000008 - extraout_x8;
    puVar10 = ppuVar9[3];
    puVar1 = ppuVar9[4];
    func_0x0001000a8868(ppuVar9,puVar10);
    FUN_10440ab9c();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (unaff_x22,&UNK_1107696b8,&UNK_1107696b8,ppuVar9,puVar10,puVar1);
  case 0x60:
    ppuVar6 = (undefined **)0x113077000;
  case 0x5c:
    ppuVar6 = (undefined **)ppuVar6[0xc0];
  case 0x3b:
  case 99:
  case 0xdb:
    unaff_x21 = unaff_x24;
    param_4 = unaff_x19;
    ppuVar4 = *(undefined ***)((long)unaff_x23 + (long)ppuVar6);
    puVar10 = *(undefined **)((byte *)((long)unaff_x23 + (long)ppuVar6) + 8);
    *(undefined1 *)((long)puVar12 + -0x41) = 0;
    param_3 = (long)puVar12 + -0x41;
    unaff_x19 = param_4;
  case 0x5d:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xfd:
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(ppuVar4,puVar10,param_3,param_4);
  case 0x21:
  case 0x35:
  case 0x49:
    if (unaff_x21 == 0) {
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077608);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077608) + 8);
      *(undefined1 *)((long)puVar12 + -0x42) = 1;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar8,uVar2,(long)puVar12 + -0x42,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077610);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077610) + 8);
      *(undefined1 *)((long)puVar12 + -0x43) = 2;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar8,uVar2,(long)puVar12 + -0x43,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077618);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077618) + 8);
      *(undefined1 *)((long)puVar12 + -0x44) = 3;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar8,uVar2,(long)puVar12 + -0x44,unaff_x19);
      bVar3 = *(byte *)((long)unaff_x23 + _DAT_113077620);
      *(undefined1 *)((long)puVar12 + -0x45) = 4;
      __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(bVar3,(long)puVar12 + -0x45,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077628);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077628) + 8);
      *(undefined1 *)((long)puVar12 + -0x46) = 5;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar8,uVar2,(long)puVar12 + -0x46,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077630);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077630) + 8);
      *(undefined1 *)((long)puVar12 + -0x47) = 6;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar8,uVar2,(long)puVar12 + -0x47,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077638);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077638) + 8);
      *(undefined1 *)(puVar12 + -9) = 7;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar8,uVar2,puVar12 + -9,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077640);
      uVar2 = *(undefined8 *)((byte *)((long)unaff_x23 + _DAT_113077640) + 8);
      *(undefined1 *)((long)puVar12 + -0x49) = 8;
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                (uVar8,uVar2,(long)puVar12 + -0x49,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077648);
      *(undefined1 *)((long)puVar12 + -0x4a) = 9;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
                (uVar8,(long)puVar12 + -0x4a,unaff_x19);
      uVar8 = *(undefined8 *)((long)unaff_x23 + _DAT_113077650);
      *(undefined1 *)((long)puVar12 + -0x4b) = 10;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
                (uVar8,(long)puVar12 + -0x4b,unaff_x19);
      (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
    }
    else {
      (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
    }
    auVar27._8_8_ = unaff_x19;
    auVar27._0_8_ = unaff_x22;
    return auVar27;
  case 0x18:
    ppuVar7 = *(undefined ***)(_DAT_113077600 + 0x6e6f697469646469);
    unaff_x19 = ppuVar4;
  case 0x22:
  case 0x36:
  case 0x4a:
  case 0x5e:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xfe:
    _swift_bridgeObjectRelease(ppuVar7);
    ppuVar6 = (undefined **)((long)unaff_x19 + _DAT_113077608);
  case 0xed:
    ppuVar4 = (undefined **)ppuVar6[1];
  case 0x25:
  case 0x4d:
  case 0xc5:
    _swift_bridgeObjectRelease(ppuVar4);
    ppuVar4 = *(undefined ***)((long)unaff_x19 + _DAT_113077610 + 8);
  case 0x26:
  case 0x4e:
  case 0xc6:
  case 0xee:
    _swift_bridgeObjectRelease(ppuVar4);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077618 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077628 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077630 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x19 + _DAT_113077638 + 8));
    uVar8 = *(undefined8 *)((long)unaff_x19 + _DAT_113077640 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
    auVar30._8_8_ = puVar10;
    auVar30._0_8_ = uVar8;
    return auVar30;
  case 0x24:
    bVar3 = *(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68);
    unaff_x19 = (undefined **)(ulong)bVar3;
  case 0xb7:
    ppuVar4 = unaff_x19;
  case 0xbc:
    __ss6HasherV8_combineyySuF(ppuVar4);
  case 0x8b:
  case 0xb2:
  case 0x76:
  case 0xba:
    __ss6HasherV9_finalizeSiyF();
  case 0x77:
  case 0x75:
  case 0xb8:
    auVar22._8_8_ = puVar10;
    auVar22._0_8_ = ppuVar4;
    return auVar22;
  case 0x44:
    auVar25._8_8_ = 0xee00747865546c61;
    auVar25._0_8_ = 0x6e6f697469646461;
    return auVar25;
  case 0x46:
  case 0x6e:
  case 0xe6:
    _swift_getObjectType();
    ppuVar6 = &PTR_s_handleTrackingGesture__112525000;
    in_stack_00000000 = unaff_x20;
  case 0x10:
    puVar10 = ppuVar6[0x164];
  case 0xc0:
    _objc_msgSendSuper2();
    auVar26._8_8_ = puVar10;
    auVar26._0_8_ = register0x00000008;
    return auVar26;
  case 0x70:
  case 0x84:
  case 0xab:
  case 0x82:
  case 0xa9:
  case 0xd8:
    uVar5 = (ulong)*(byte *)unaff_x20;
    __ss6HasherV8_combineyySuF(0x6e6f697469646461,uVar5);
    auVar21._8_8_ = puVar10;
    auVar21._0_8_ = uVar5;
    return auVar21;
  case 0x74:
    goto code_r0x00010440a750;
  case 0x88:
  case 0xaf:
  case 0xbd:
    auVar24._8_8_ = 0xee00747865546c61;
    auVar24._0_8_ = 0x6e6f697469646461;
    return auVar24;
  case 0x8a:
  case 0xb1:
  case 0xb9:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case 0x72:
  case 0x7b:
  case 0x7f:
  case 0x83:
  case 0x86:
  case 0x8c:
  case 0xa2:
  case 0xa6:
  case 0xaa:
  case 0xad:
  case 0xb3:
  case 0xb6:
    *(undefined8 **)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case 0x71:
  case 0x3a:
  case 0x62:
  case 0xda:
    unaff_x19 = ppuVar6;
  case 0x7a:
  case 0x87:
  case 0xa1:
  case 0xae:
    FUN_10440b434();
  case 0x7c:
  case 0x7d:
  case 0x80:
  case 0xa3:
  case 0xa4:
  case 0xa7:
  case 0xbe:
    *(byte *)unaff_x19 = (byte)ppuVar4;
  case 0x73:
  case 0x78:
  case 0x81:
  case 0x85:
  case 0xa8:
  case 0xac:
  case 0xfc:
    auVar23._8_8_ = puVar10;
    auVar23._0_8_ = ppuVar4;
    return auVar23;
  case 0x8d:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0x79:
  case 0xa0:
  case 0xb5:
    *(undefined8 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    bVar3 = *(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0);
    unaff_x19 = (undefined **)(ulong)bVar3;
  case 0x89:
  case 0x8f:
  case 0xb0:
    ppuVar4 = unaff_x19;
  case 0xbb:
    __ss6HasherV8_combineyySuF(ppuVar4);
    __ss6HasherV9_finalizeSiyF();
  case 0x7e:
  case 0x8e:
  case 0xa5:
    auVar20._8_8_ = puVar10;
    auVar20._0_8_ = ppuVar4;
    return auVar20;
  case 0xd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)();
    auVar28._8_8_ = puVar10;
    auVar28._0_8_ = unaff_x19;
    return auVar28;
  case 0xe8:
    FUN_10440ab9c(0x6e6f697469646461,0xee00747865546c61);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)();
    auVar29._8_8_ = ppuVar4;
    auVar29._0_8_ = unaff_x19;
    return auVar29;
  }
  auVar18._8_8_ = (ulong)((long)pcVar11 + -0x20) | 0x8000000000000000;
  auVar18._0_8_ = ppuVar4;
  return auVar18;
}



/* Entry: 10440a758; end: 10440a77b;  */

void FUN_10440a758(undefined1 *param_1,undefined1 param_2)

{
  FUN_10440b434();
  *param_1 = param_2;
  return;
}



/* Entry: 10440a77c; end: 10440a793;  */

undefined1  [16] FUN_10440a77c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10440a794; end: 10440a7e3;  */

void FUN_10440a794(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10440ab9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10440a7e4; end: 10440a817;  */

void FUN_10440a7e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440a818; end: 10440a8cf; -[_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440a818(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077600 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077608 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077610 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077618 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077628 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077630 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077638 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077640 + 8))
  ;
  return;
}



/* Entry: 10440a8d0; end: 10440ab9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440a8d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [5];
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113077658;
  func_0x0001000285a8(0x113077658,&UNK_10dcf98a0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_10440ab9c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_1107696b8,&UNK_1107696b8,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
            (*(undefined8 *)(unaff_x20 + _DAT_113077600),
             ((undefined8 *)(unaff_x20 + _DAT_113077600))[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077608),
               ((undefined8 *)(unaff_x20 + _DAT_113077608))[1],&uStack_52,lVar3);
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077610),
               ((undefined8 *)(unaff_x20 + _DAT_113077610))[1],&uStack_53,lVar3);
    uStack_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077618),
               ((undefined8 *)(unaff_x20 + _DAT_113077618))[1],&uStack_54,lVar3);
    uStack_55 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + _DAT_113077620),&uStack_55,lVar3);
    uStack_56 = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077628),
               ((undefined8 *)(unaff_x20 + _DAT_113077628))[1],&uStack_56,lVar3);
    uStack_57 = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077630),
               ((undefined8 *)(unaff_x20 + _DAT_113077630))[1],&uStack_57,lVar3);
    uStack_58 = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077638),
               ((undefined8 *)(unaff_x20 + _DAT_113077638))[1],&uStack_58,lVar3);
    uStack_59 = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077640),
               ((undefined8 *)(unaff_x20 + _DAT_113077640))[1],&uStack_59,lVar3);
    uStack_5a = 9;
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077648),&uStack_5a,lVar3);
    uStack_5b = 10;
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113077650),&uStack_5b,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 10440ab9c; end: 10440abdb;  */

void FUN_10440ab9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9a08;
  _swift_getWitnessTable(&UNK_10dcf9a08,&UNK_1107696b8);
  puRam0000000113077660 = puVar1;
  return;
}



/* Entry: 10440abdc; end: 10440ac1b;  */

void FUN_10440abdc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10440ac1c(param_1);
  return;
}



/* Entry: 10440ac1c; end: 10440b197;  */

/* WARNING: Removing unreachable block (ram,0x00010440b128) */
/* WARNING: Removing unreachable block (ram,0x00010440b12c) */
/* WARNING: Removing unreachable block (ram,0x00010440afc8) */
/* WARNING: Removing unreachable block (ram,0x00010440ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010440ae20) */
/* WARNING: Removing unreachable block (ram,0x00010440ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010440add0) */
/* WARNING: Removing unreachable block (ram,0x00010440af74) */
/* WARNING: Removing unreachable block (ram,0x00010440aebc) */
/* WARNING: Removing unreachable block (ram,0x00010440aefc) */
/* WARNING: Removing unreachable block (ram,0x00010440aed8) */
/* WARNING: Removing unreachable block (ram,0x00010440aedc) */
/* WARNING: Removing unreachable block (ram,0x00010440af14) */
/* WARNING: Removing unreachable block (ram,0x00010440af18) */
/* WARNING: Removing unreachable block (ram,0x00010440aef4) */
/* WARNING: Removing unreachable block (ram,0x00010440aef8) */
/* WARNING: Removing unreachable block (ram,0x00010440af30) */
/* WARNING: Removing unreachable block (ram,0x00010440b018) */
/* WARNING: Removing unreachable block (ram,0x00010440b094) */
/* WARNING: Removing unreachable block (ram,0x00010440b0a8) */
/* WARNING: Removing unreachable block (ram,0x00010440b130) */
/* WARNING: Removing unreachable block (ram,0x00010440b148) */
/* WARNING: Removing unreachable block (ram,0x00010440af38) */
/* WARNING: Removing unreachable block (ram,0x00010440acf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10440ac1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_80 [16];
  undefined1 uStack_51;
  
  _swift_getObjectType();
  lVar4 = 0x113077668;
  func_0x0001000285a8(0x113077668,&UNK_10dcf98a8);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_1;
  func_0x0001000a8868(param_1,uVar2);
  FUN_10440ab9c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_1107696b8,&UNK_1107696b8,lVar5,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077600);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 1;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077608);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 2;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077610);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 3;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077618);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 4;
    puVar6 = &uStack_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar6,lVar4);
    unaff_x20[_DAT_113077620] = (byte)puVar6 & 1;
    uStack_51 = 5;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077628);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 6;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077630);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 7;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077638);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 8;
    puVar6 = &uStack_51;
    lVar5 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077640);
    *puVar1 = puVar6;
    puVar1[1] = lVar5;
    uStack_51 = 9;
    puVar6 = &uStack_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar6,lVar4);
    *(undefined1 **)(unaff_x20 + _DAT_113077648) = puVar6;
    uStack_51 = 10;
    puVar6 = &uStack_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar6,lVar4);
    *(undefined1 **)(unaff_x20 + _DAT_113077650) = puVar6;
    unaff_x20 = &stack0xffffffffffffff90;
    _objc_msgSendSuper2(unaff_x20,PTR_s_init_1125d9248);
    (**(code **)(lVar7 + 8))(auStack_80 + -extraout_x8,lVar4);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    _swift_deallocPartialClassInstance();
  }
  return unaff_x20;
}



/* Entry: 10440b198; end: 10440b1e3;  */

void FUN_10440b198(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  _objc_allocWithZone();
  FUN_10440ac1c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10440b1e4; end: 10440b203;  */

void FUN_10440b1e4(void)

{
  FUN_10440a8d0();
  return;
}



/* Entry: 10440b204; end: 10440b36b;  */

int FUN_10440b204(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10440b280;
        goto LAB_10440b264;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10440b264:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_10440b280:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10440b36c; end: 10440b3ab;  */

void FUN_10440b36c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf99e0;
  _swift_getWitnessTable(&UNK_10dcf99e0,&UNK_1107696b8);
  puRam0000000113077698 = puVar1;
  return;
}



/* Entry: 10440b3ac; end: 10440b3af;  */

void FUN_10440b3ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130776a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9978;
  _swift_getWitnessTable(&UNK_10dcf9978,&UNK_1107696b8);
  puRam00000001130776a0 = puVar1;
  return;
}



/* Entry: 10440b3b0; end: 10440b3ef;  */

void FUN_10440b3b0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130776a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9978;
  _swift_getWitnessTable(&UNK_10dcf9978,&UNK_1107696b8);
  puRam00000001130776a0 = puVar1;
  return;
}



/* Entry: 10440b3f0; end: 10440b3f3;  */

void FUN_10440b3f0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130776a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9950;
  _swift_getWitnessTable(&UNK_10dcf9950,&UNK_1107696b8);
  puRam00000001130776a8 = puVar1;
  return;
}



/* Entry: 10440b3f4; end: 10440b433;  */

void FUN_10440b3f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130776a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9950;
  _swift_getWitnessTable(&UNK_10dcf9950,&UNK_1107696b8);
  puRam00000001130776a8 = puVar1;
  return;
}



/* Entry: 10440b434; end: 10440b7ab;  */

undefined4 FUN_10440b434(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e635b0)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000012,0x800000010f19ca50,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0xd000000000000015;
      if (((param_1 == -0x2fffffffffffffeb) && (param_2 == -0x7ffffffef0e03ef0)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000015,0x800000010f1fc110,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      uVar1 = 0;
      if (((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0e03ed0)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000016,0x800000010f1fc130,param_1,param_2,0), (uVar1 & 1) == 0)) {
        if ((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0e03eb0)) {
          uVar1 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000016,0x800000010f1fc150,param_1,param_2,0);
          if ((uVar1 & 1) == 0) {
            if ((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0e63590)) {
              uVar1 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000016,0x800000010f19ca70,param_1,param_2,0);
              if ((uVar1 & 1) == 0) {
                uVar1 = 0x6e6f697469646461;
                if (((param_1 == 0x6e6f697469646461) && (param_2 == -0x11ff8b879aab939f)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x6e6f697469646461,0xee00747865546c61,param_1,param_2,0),
                   (uVar1 & 1) != 0)) {
                  _swift_bridgeObjectRelease(param_2);
                  return 5;
                }
                if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e03e90)) {
                  uVar1 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000012,0x800000010f1fc170,param_1,param_2,0);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = 0xd000000000000011;
                    if (((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffef0e03e70)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000011,0x800000010f1fc190,param_1,param_2,0),
                       (uVar1 & 1) == 0)) {
                      if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e03e50)) {
                        uVar1 = 0;
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000012,0x800000010f1fc1b0,param_1,param_2,0);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = 0;
                          if (((param_1 != 0x6449736e656c) || (param_2 != -0x1a00000000000000)) &&
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0x6449736e656c,0xe600000000000000,param_1,param_2,0),
                             (uVar1 & 1) == 0)) {
                            uVar1 = 0;
                            if ((param_1 == -0x2ffffffffffffff0) && (param_2 == -0x7ffffffef0e03e30)
                               ) {
                              _swift_bridgeObjectRelease(0x800000010f1fc1d0);
                              return 10;
                            }
                            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (0xd000000000000010,0x800000010f1fc1d0,param_1,param_2,0);
                            _swift_bridgeObjectRelease(param_2);
                            if ((uVar1 & 1) != 0) {
                              return 10;
                            }
                            return 0xb;
                          }
                          _swift_bridgeObjectRelease(param_2);
                          return 9;
                        }
                      }
                      _swift_bridgeObjectRelease(param_2);
                      return 8;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 7;
                  }
                }
                _swift_bridgeObjectRelease(param_2);
                return 6;
              }
            }
            _swift_bridgeObjectRelease(param_2);
            return 4;
          }
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Entry: 10440b7ac; end: 10440b7bb; -[SCContextHeroContextMenuScope parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440b7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130776c8));
  return;
}



/* Entry: 10440b7bc; end: 10440b803; -[SCContextHeroContextMenuScope pendingAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440b7bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130776d0;
  _swift_beginAccess(param_1 + _DAT_1130776d0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10440b804; end: 10440b867; -[SCContextHeroContextMenuScope setPendingAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440b804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130776d0;
  _swift_beginAccess(param_1 + _DAT_1130776d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10440b868; end: 10440b91b; -[SCContextHeroContextMenuScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440b868(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130776b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130776b8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130776c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130776c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130776d0));
  return;
}



/* Entry: 10440b91c; end: 10440b983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440b91c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10440bc00();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130776e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10440b984; end: 10440b9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440b984(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130776e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10440b9d0; end: 10440bacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10440b9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  FUN_10440bb88();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_1130776d0) = 0;
  *(long *)(lVar3 + _DAT_1130776b0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_1130776b8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130776c8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130776c0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_68[0] = plVar4;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  _swift_release(uStack_58);
  _swift_unknownObjectRelease(aplStack_68[0]);
  return plVar4;
}



/* Entry: 10440bad0; end: 10440bb87; -[_TtC29SCContextHeroContextMenuScope37SCContextHeroContextMenuScopeServices buildWithContainer:contextActionParams:parentViewController:circumstanceEngine:] */

void FUN_10440bad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10440b9d0(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440bb88; end: 10440bba7;  */

void FUN_10440bb88(void)

{
  _objc_opt_self(&PTR_PTR_1129afb58);
  return;
}



/* Entry: 10440bba8; end: 10440bbab;  */

void FUN_10440bba8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440bbac; end: 10440bbdf;  */

void FUN_10440bbac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440bbe0; end: 10440bbff; -[_TtC29SCContextHeroContextMenuScope37SCContextHeroContextMenuScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bbe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130776e0));
  return;
}



/* Entry: 10440bc00; end: 10440bc1f;  */

void FUN_10440bc00(void)

{
  _objc_opt_self(&PTR_PTR_1129afc38);
  return;
}



/* Entry: 10440bc20; end: 10440bc23;  */

void FUN_10440bc20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440bc24; end: 10440bc43; -[SCContextPlanDynamicStickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bc24(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113077738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440bc44; end: 10440bc53; -[SCContextPlanDynamicStickerScope planTappableElement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077740));
  return;
}



/* Entry: 10440bc54; end: 10440bc5f; -[SCContextPlanDynamicStickerScope eventId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bc54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077748);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077748))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440bc60; end: 10440bc6b; -[SCContextPlanDynamicStickerScope viewerUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bc60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077750);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077750))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440bc6c; end: 10440bcb3;  */

void FUN_10440bc6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10440bcb4; end: 10440bcc3; -[SCContextPlanDynamicStickerScope viewerIsCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10440bcb4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077758);
}



/* Entry: 10440bcc4; end: 10440bd53; -[SCContextPlanDynamicStickerScope presentChatReplyKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bcc4(long param_1)

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
  puVar1 = (undefined8 *)(param_1 + _DAT_113077760);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110769a68;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10440bd54; end: 10440be13; -[SCContextPlanDynamicStickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440bd54(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113077738));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077740));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077748 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077750 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077760 + 8));
  return;
}



/* Entry: 10440be14; end: 10440bf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10440be14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_88 [2];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000100334fd4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(long *)(lVar4 + _DAT_113077738) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113077740) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113077748);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113077750);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(lVar4 + _DAT_113077758) = param_7;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113077760);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_retain(param_9);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  aplStack_88[0] = plVar5;
  func_0x00010008a7c8(&uStack_78,aplStack_88);
  func_0x000100083b20(aplStack_88);
  _swift_release(uStack_78);
  _swift_unknownObjectRelease(aplStack_88[0]);
  return plVar5;
}



/* Entry: 10440bf60; end: 10440c087; -[_TtC32SCContextPlanDynamicStickerScope40SCContextPlanDynamicStickerScopeServices buildWithUiContainer:planTappableElement:eventId:viewerUserId:viewerIsCreator:presentChatReplyKeyboard:] */

void FUN_10440bf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  puVar1 = &UNK_110769a50;
  _swift_allocObject(&UNK_110769a50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10440be14(param_3,param_4,param_5,param_2,param_6,uVar3,param_7,0x10440c0e0,puVar1);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440c088; end: 10440c08b;  */

void FUN_10440c088(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440c08c; end: 10440c0bf;  */

void FUN_10440c08c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


