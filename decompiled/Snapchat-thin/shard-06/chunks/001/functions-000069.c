/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10446d2ac; end: 10446d2b3; +[SCTalkUIChatEvent chatMediaDidCloseFullscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d2ac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = 8;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d2b4; end: 10446d3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d2b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0b8) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c0c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d3f8; end: 10446d4d7; -[SCTalkUIChatEvent matchDidSwipeOut:didSwipeIn:willResignActive:didFullyDisappear:didFullyAppear:didBecomeActive:didAppearAtPercentage:chatMediaWillEnterFullscreen:chatMediaDidCloseFullscreen:] */

void FUN_10446d3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010446d31c(0x10446d6e4,auStack_40,0x10446d6f8,auStack_60,0x10446d6fc,auStack_80,
                      0x10446d700,auStack_a0,0x10446d704,auStack_c0,0x10446d708,auStack_e0,
                      0x10446d6ec,auStack_100,0x10446d70c,auStack_120,0x10446d710,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 10446d4d8; end: 10446d52b;  */

void FUN_10446d4d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446d52c; end: 10446d693;  */

int FUN_10446d52c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10446d5a8;
        goto LAB_10446d58c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10446d58c:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10446d5a8:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10446d694; end: 10446d6d3;  */

void FUN_10446d694(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03dd8;
  _swift_getWitnessTable(&UNK_10dd03dd8,&UNK_110773e98);
  puRam000000011307c0f0 = puVar1;
  return;
}



/* Entry: 10446d6d4; end: 10446d713;  */

ulong FUN_10446d6d4(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 10446d714; end: 10446d7bf;  */

void FUN_10446d714(void)

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



/* Entry: 10446d7c0; end: 10446d7ff;  */

void FUN_10446d7c0(undefined1 *param_1,long *param_2)

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



/* Entry: 10446d800; end: 10446d847; -[SCTalkUIConversationMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446d800(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11307c0f8) == '\x01') &&
     (*(long *)(param_1 + _DAT_11307c100 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10446d848);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446d848; end: 10446d88f; -[SCTalkUIConversationMetadata init] */

void FUN_10446d848(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCTalkUIScope/SCTalkUIConversationMetadataWrapper.swift",0x37,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446d890);
  (*pcVar1)();
}



/* Entry: 10446d890; end: 10446d94f; -[SCTalkUIConversationMetadata hash] */

undefined8 FUN_10446d890(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010446d8c4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10446d950; end: 10446da8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10446d950(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_11307c0f8) == *(char *)(lStack_58 + _DAT_11307c0f8)) {
        if (*(char *)(unaff_x20 + _DAT_11307c0f8) != '\x01') {
LAB_10446da54:
          _objc_release();
          uVar5 = 1;
          goto LAB_10446da3c;
        }
        lVar2 = ((long *)(unaff_x20 + _DAT_11307c100))[1];
        lVar6 = ((long *)(lStack_58 + _DAT_11307c100))[1];
        if (lVar2 != 0) {
          uVar5 = 0;
          if (lVar6 != 0) {
            lVar4 = *(long *)(unaff_x20 + _DAT_11307c100);
            lVar3 = *(long *)(lStack_58 + _DAT_11307c100);
            if (lVar4 == lVar3 && lVar2 == lVar6) goto LAB_10446da54;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (lVar4,lVar2,lVar3,lVar6,0);
            uVar5 = (uint)lVar4;
          }
          _objc_release(lStack_58);
          goto LAB_10446da3c;
        }
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_58);
        if (lVar6 == 0) {
          uVar5 = 1;
          goto LAB_10446da3c;
        }
        _swift_bridgeObjectRelease(lVar6);
      }
      else {
        _objc_release();
      }
    }
  }
  uVar5 = 0;
LAB_10446da3c:
  return uVar5 & 1;
}



/* Entry: 10446da8c; end: 10446db0b; -[SCTalkUIConversationMetadata isEqual:] */

uint FUN_10446da8c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10446d950(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10446db0c; end: 10446db0f; -[SCTalkUIConversationMetadata copyWithZone:] */

void FUN_10446db0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10446db10; end: 10446db5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446db10(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307c0f8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c100);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446db60; end: 10446dbbb; +[SCTalkUIConversationMetadata groupConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446db60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c100);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446dbbc; end: 10446dc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446dbbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307c0f8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c100);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 10446dc34; end: 10446dcb3; +[SCTalkUIConversationMetadata directConversationWithRemoteUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446dc34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307c0f8) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307c100);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446dcb4; end: 10446dd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446dcb4(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11307c0f8) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_11307c100))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10446dd10);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11307c100));
  }
  else {
    (*param_1)();
  }
  return;
}



/* Entry: 10446dd10; end: 10446ddaf; -[SCTalkUIConversationMetadata matchGroupConversation:directConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446dd10(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_11307c0f8) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010446dda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  lVar2 = ((undefined8 *)(param_1 + _DAT_11307c100))[1];
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307c100);
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    (**(code **)(param_4 + 0x10))(param_4,uVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446ddb0);
  (*pcVar1)();
}



/* Entry: 10446ddb0; end: 10446dde3;  */

void FUN_10446ddb0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446dde4; end: 10446ddf7; -[SCTalkUIConversationMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446dde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307c100 + 8))
  ;
  return;
}



/* Entry: 10446ddf8; end: 10446de8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ddf8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar4 = alStack_50;
  lVar2 = param_1;
  FUN_10446de8c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  if (param_2 == 0) {
    *(undefined1 *)(lVar3 + _DAT_11307c0f8) = 0;
    puVar1 = (undefined8 *)(lVar3 + _DAT_11307c100);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    *(undefined1 *)(lVar3 + _DAT_11307c0f8) = 1;
    plVar4 = (long *)(lVar3 + _DAT_11307c100);
    *plVar4 = param_1;
    plVar4[1] = param_2;
    plVar4 = alStack_40;
  }
  *plVar4 = lVar3;
  plVar4[1] = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446de8c; end: 10446deab;  */

void FUN_10446de8c(void)

{
  _objc_opt_self(&PTR_PTR_1129ba7a0);
  return;
}



/* Entry: 10446deac; end: 10446e013;  */

int FUN_10446deac(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10446df28;
        goto LAB_10446df0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10446df0c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10446df28:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10446e014; end: 10446e053;  */

void FUN_10446e014(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03ec4;
  _swift_getWitnessTable(&UNK_10dd03ec4,&UNK_110773f80);
  puRam000000011307c130 = puVar1;
  return;
}



/* Entry: 10446e054; end: 10446e09f; -[SCTalkUIIntent conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e054(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307c138);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307c138))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446e0a0; end: 10446e0af; -[SCTalkUIIntent metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c140));
  return;
}



/* Entry: 10446e0b0; end: 10446e0bf; -[SCTalkUIIntent presenceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10446e0b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307c148);
}



/* Entry: 10446e0c0; end: 10446e0cf; -[SCTalkUIIntent startCallMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446e0c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307c150);
}



/* Entry: 10446e0d0; end: 10446e0df; -[SCTalkUIIntent isHangout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10446e0d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307c158);
}



/* Entry: 10446e0e0; end: 10446e18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307c138);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307c140) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307c148) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307c150) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11307c158) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446e18c; end: 10446e24b; -[SCTalkUIIntent initWithConversationId:metadata:presenceEnabled:startCallMedia:isHangout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e18c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307c138);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307c140) = param_4;
  *(undefined1 *)(param_1 + _DAT_11307c148) = param_5;
  *(undefined8 *)(param_1 + _DAT_11307c150) = param_6;
  *(undefined1 *)(param_1 + _DAT_11307c158) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 10446e24c; end: 10446e31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e24c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307c138);
  puVar2[1] = uStack_48;
  *puVar2 = uStack_50;
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  func_0x000100402194(&uStack_50,auStack_60);
  _swift_bridgeObjectRetain(uVar1);
  FUN_10446ddf8(uVar3,uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_11307c140) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_11307c148) = *(undefined1 *)(param_1 + 4);
  *(undefined8 *)(unaff_x20 + _DAT_11307c150) = param_1[5];
  func_0x00010446e75c(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11307c158) = *(undefined1 *)(param_1 + 6);
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446e31c; end: 10446e34f; -[SCTalkUIIntent hash] */

undefined8 FUN_10446e31c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10446e350();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10446e350; end: 10446e477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e350(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11307c138);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,((undefined8 *)(unaff_x20 + _DAT_11307c138))[1]);
  uVar2 = uVar4;
  func_0x00010bfde980();
  _objc_release(uVar4);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11307c140);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(lVar3 + _DAT_11307c0f8));
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307c100);
  if (puVar1[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *puVar1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307c148));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11307c150));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307c158));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10446e478; end: 10446e5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10446e478(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar5 & 1) != 0) {
      uVar8 = *(ulong *)(unaff_x20 + _DAT_11307c138);
      if (uVar8 == *(ulong *)(lStack_88 + _DAT_11307c138) &&
          ((ulong *)(unaff_x20 + _DAT_11307c138))[1] == ((ulong *)(lStack_88 + _DAT_11307c138))[1])
      {
        uVar8 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      uVar9 = *(undefined8 *)(lStack_88 + _DAT_11307c140);
      uVar6 = 0;
      FUN_10446de8c();
      auStack_80[0] = uVar9;
      lStack_68 = uVar6;
      _objc_retain(uVar9);
      uVar7 = 0;
      FUN_10446d950();
      func_0x00010006e7f4(auStack_80);
      bVar1 = *(byte *)(unaff_x20 + _DAT_11307c148);
      bVar2 = *(byte *)(lStack_88 + _DAT_11307c148);
      lVar10 = *(long *)(unaff_x20 + _DAT_11307c150);
      lVar11 = *(long *)(lStack_88 + _DAT_11307c150);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11307c158);
      bVar4 = *(byte *)(lStack_88 + _DAT_11307c158);
      _objc_release(lStack_88);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (((bVar1 ^ bVar2) & 1) != 0) {
        return 0;
      }
      return lVar10 == lVar11 & (bVar3 ^ bVar4 ^ 1);
    }
  }
  return 0;
}



/* Entry: 10446e5ec; end: 10446e66b; -[SCTalkUIIntent isEqual:] */

uint FUN_10446e5ec(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10446e478(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10446e66c; end: 10446e66f; -[SCTalkUIIntent copyWithZone:] */

void FUN_10446e66c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10446e670; end: 10446e6a3; -[SCTalkUIIntent description] */

void FUN_10446e670(void)

{
  undefined1 auStack_48 [56];
  
  FUN_10446e790(auStack_48);
  func_0x00010446e75c(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446e6a4; end: 10446e71f; -[SCTalkUIIntent init] */

void FUN_10446e6a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCTalkUIScope/SCTalkUIIntentWrapper.swift",
             0x29,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446e6ec);
  (*pcVar1)();
}



/* Entry: 10446e720; end: 10446e78f; -[SCTalkUIIntent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e720(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c138 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307c140));
  return;
}



/* Entry: 10446e790; end: 10446e857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e790(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_11307c138);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307c138))[1];
  if (*(char *)(*(long *)(param_2 + _DAT_11307c140) + _DAT_11307c0f8) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_11307c140) + _DAT_11307c100);
    lVar7 = puVar1[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10446e858);
      (*pcVar6)();
    }
    uVar9 = *puVar1;
    _swift_bridgeObjectRetain();
  }
  else {
    uVar9 = 0;
    lVar7 = 0;
  }
  uVar4 = *(undefined1 *)(param_2 + _DAT_11307c148);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307c150);
  uVar5 = *(undefined1 *)(param_2 + _DAT_11307c158);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar9;
  param_1[3] = lVar7;
  *(undefined1 *)(param_1 + 4) = uVar4;
  param_1[5] = uVar8;
  *(undefined1 *)(param_1 + 6) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar3);
  return;
}



/* Entry: 10446e858; end: 10446e877;  */

void FUN_10446e858(void)

{
  _objc_opt_self(&PTR_PTR_1129ba868);
  return;
}



/* Entry: 10446e878; end: 10446e88b;  */

bool FUN_10446e878(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10446e88c; end: 10446e937;  */

void FUN_10446e88c(void)

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



/* Entry: 10446e938; end: 10446e95f;  */

void FUN_10446e938(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10446e960; end: 10446e97f; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e960(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c188));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446e980; end: 10446e98f; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c190));
  return;
}



/* Entry: 10446e990; end: 10446e99f; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446e990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307c198);
}



/* Entry: 10446e9a0; end: 10446e9fb; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e9a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307c1a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307c1a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446e9fc; end: 10446ea43; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446e9fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307c1a8;
  _swift_beginAccess(param_1 + _DAT_11307c1a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446ea44; end: 10446ea9b; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ea44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307c1a8;
  _swift_beginAccess(param_1 + _DAT_11307c1a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10446ea9c; end: 10446eb1b; -[_TtC22SCProgressOverlayScope22SCProgressOverlayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10446ea9c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c188));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c190));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c1a0 + 8));
  param_1 = param_1 + _DAT_11307c1a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10446eb1c; end: 10446eb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446eb1c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002b1d38();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307c1b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10446eb84; end: 10446ebcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446eb84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c1b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446ebd0; end: 10446ed0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10446ebd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x0001002a7a78();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11307c1a8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307c1a8,0);
  *(long *)(lVar5 + _DAT_11307c188) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11307c190) = param_2;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_11307c198) = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307c1a0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_6);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10446ed10; end: 10446edeb; -[_TtC22SCProgressOverlayScope30SCProgressOverlayScopeServices buildWithUIContainer:progressObservable:delegate:style:title:] */

void FUN_10446ed10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10446ebd0(param_3,param_4,param_5,param_6,param_7,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10446edec; end: 10446edef;  */

void FUN_10446edec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446edf0; end: 10446ee23;  */

void FUN_10446edf0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446ee24; end: 10446ee37; -[_TtC22SCProgressOverlayScope30SCProgressOverlayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ee24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307c1b8));
  return;
}



/* Entry: 10446ee38; end: 10446ee77;  */

void FUN_10446ee38(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c1c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03f98;
  _swift_getWitnessTable(&UNK_10dd03f98,&UNK_110774080);
  puRam000000011307c1c0 = puVar1;
  return;
}



/* Entry: 10446ee78; end: 10446ee9b;  */

undefined1  [16] FUN_10446ee78(void)

{
  return ZEXT816(0x110774080);
}



/* Entry: 10446ee9c; end: 10446eebb; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ee9c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446eebc; end: 10446eedb; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446eebc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c220));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446eedc; end: 10446ef23; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446eedc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307c228;
  _swift_beginAccess(param_1 + _DAT_11307c228,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446ef24; end: 10446ef7b; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ef24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307c228;
  _swift_beginAccess(param_1 + _DAT_11307c228,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10446ef7c; end: 10446ef8b; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope onboardingEducationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446ef7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307c230);
}



/* Entry: 10446ef8c; end: 10446ef9b; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope onboardingEducationEventEntryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446ef8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307c238);
}



/* Entry: 10446ef9c; end: 10446f007; -[_TtC24SCUserEducationTrayScope24SCUserEducationTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10446ef9c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c218));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c220));
  param_1 = param_1 + _DAT_11307c228;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10446f008; end: 10446f06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f008(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003438b0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307c248) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10446f070; end: 10446f0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f070(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c248) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446f0bc; end: 10446f1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10446f0bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_78 [2];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x0001003379d0();
  lVar3 = lVar2;
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(lVar3 + _DAT_11307c228,0);
  *(long *)(lVar3 + _DAT_11307c218) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11307c220) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11307c230) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11307c238) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  plVar4 = &lStack_60;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_78[0] = plVar4;
  func_0x00010008a7c8(&uStack_68,aplStack_78);
  func_0x000100083b20(aplStack_78);
  _swift_release(uStack_68);
  _swift_unknownObjectRelease(aplStack_78[0]);
  return plVar4;
}



/* Entry: 10446f1c0; end: 10446f24f; -[_TtC24SCUserEducationTrayScope32SCUserEducationTrayScopeServices buildWithUIContainer:dataSource:onboardingEducationType:onboardingEducationEventEntryType:] */

void FUN_10446f1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10446f0bc(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10446f250; end: 10446f253;  */

void FUN_10446f250(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446f254; end: 10446f287;  */

void FUN_10446f254(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446f288; end: 10446f2cf; -[_TtC24SCUserEducationTrayScope32SCUserEducationTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307c248));
  return;
}



/* Entry: 10446f2d0; end: 10446f313;  */

void FUN_10446f2d0(long param_1,long *param_2,long param_3)

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



/* Entry: 10446f314; end: 10446f317;  */

void FUN_10446f314(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446f318; end: 10446f327; -[_TtC42WebBrowsingThirdPartyLoginSaberPluginScope42WebBrowsingThirdPartyLoginSaberPluginScope thirdPartyLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446f318(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307c2b0);
}



/* Entry: 10446f328; end: 10446f3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f328(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c2b0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446f3c0; end: 10446f3f3;  */

void FUN_10446f3c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446f3f4; end: 10446f5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10446f3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11307c2f0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307c2f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307c2e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307c2e8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11307c2f8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 10446f5c4; end: 10446f5f7;  */

void FUN_10446f5c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446f5f8; end: 10446f63f; -[_TtC38WebViewInjectionScriptSaberPluginScope38WebViewInjectionScriptSaberPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f5f8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c2e0));
  func_0x000101424b1c(param_1 + _DAT_11307c2f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307c2f8));
  return;
}



/* Entry: 10446f640; end: 10446f8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10446f640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_a0;
  _objc_allocWithZone();
  lVar2 = _DAT_11307c338;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307c338,0);
  lVar3 = _DAT_11307c340;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307c340,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307c328) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307c330) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_11307c348) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_a0,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  return puVar4;
}



/* Entry: 10446f8a8; end: 10446f8db;  */

void FUN_10446f8a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10446f8dc; end: 10446f933; -[_TtC33WebViewNavigationSaberPluginScope33WebViewNavigationSaberPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f8dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c328));
  func_0x000100db8cd4(param_1 + _DAT_11307c338);
  func_0x000100db8cd4(param_1 + _DAT_11307c340);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307c348));
  return;
}



/* Entry: 10446f934; end: 10446f943; -[WebViewNavigationPluginScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c378));
  return;
}



/* Entry: 10446f944; end: 10446f953; -[WebViewNavigationPluginScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446f944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307c380);
}



/* Entry: 10446f954; end: 10446f963; -[WebViewNavigationPluginScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c388));
  return;
}



/* Entry: 10446f964; end: 10446f9ab; -[WebViewNavigationPluginScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f964(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307c390;
  _swift_beginAccess(param_1 + _DAT_11307c390,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446f9ac; end: 10446fa03; -[WebViewNavigationPluginScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446f9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307c390;
  _swift_beginAccess(param_1 + _DAT_11307c390,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10446fa04; end: 10446fa23; -[WebViewNavigationPluginScope viewControllerPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446fa04(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c398));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446fa24; end: 10446fa43; -[WebViewNavigationPluginScope webBrowserLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446fa24(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307c3a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446fa44; end: 10446fb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10446fa44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11307c390;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307c390,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307c388) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307c378) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307c380) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_11307c398) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307c3a0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_88;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10446fb68; end: 10446fbb7;  */

undefined8
FUN_10446fb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10446fd38();
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10446fbb8; end: 10446fc6f; -[WebViewNavigationPluginScope initWithPlugInRegistry:config:source:delegate:viewControllerPresenter:webBrowserLogger:] */

undefined8
FUN_10446fbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  uVar2 = param_3;
  FUN_10446fd38(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  return uVar2;
}



/* Entry: 10446fc70; end: 10446fccf; -[WebViewNavigationPluginScope init] */

void FUN_10446fc70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebViewNavigationPluginScope.WebViewNavigationPluginScope",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446fc9c);
  (*pcVar1)();
}


