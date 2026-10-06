/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10446679c; end: 104466903;  */

int FUN_10446679c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104466818;
        goto LAB_1044667fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044667fc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104466818:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104466904; end: 104466943;  */

void FUN_104466904(void)

{
  undefined *puVar1;
  
  if (puRam000000011307bcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03718;
  _swift_getWitnessTable(&UNK_10dd03718,&UNK_110773528);
  puRam000000011307bcb8 = puVar1;
  return;
}



/* Entry: 104466944; end: 104466967;  */

void FUN_104466944(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104466954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 104466968; end: 104466a3b;  */

void FUN_104466968(void)

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



/* Entry: 104466a3c; end: 104466a5b;  */

void FUN_104466a3c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104466a5c; end: 104466a97; -[SCCallIntent description] */

void FUN_104466a5c(void)

{
  undefined8 uVar1;
  
  FUN_104466a98();
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104466a98; end: 104466b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104466a98(void)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307bcc0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(unaff_x20 + _DAT_11307bcc8) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104466b34);
        (*pcVar2)();
      }
      if (*(char *)(unaff_x20 + _DAT_11307bcd0) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104466adc);
        (*pcVar2)();
      }
    }
    else {
      if (*(long *)(unaff_x20 + _DAT_11307bcd8 + 8) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104466b38);
        (*pcVar2)();
      }
      if (*(long *)(unaff_x20 + _DAT_11307bce0 + 8) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104466b3c);
        (*pcVar2)();
      }
    }
  }
  else if ((bVar1 == 2) && (*(char *)(unaff_x20 + _DAT_11307bce8) == '\x02')) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104466afc);
    (*pcVar2)();
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104466b3c; end: 104466b83; -[SCCallIntent init] */

void FUN_104466b3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"TalkAPI/SCCallIntentWrapper.swift",0x21,2,
             0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104466b84);
  (*pcVar1)();
}



/* Entry: 104466b84; end: 104466bb7; -[SCCallIntent hash] */

undefined8 FUN_104466b84(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104466bb8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104466bb8; end: 104466f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104466bb8(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11307bcc0));
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307bcc8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307bcd0);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11307bcd8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bcd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11307bce0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307bce0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307bce8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104466f80; end: 104466fff; -[SCCallIntent isEqual:] */

uint FUN_104466f80(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104466d2c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104467000; end: 104467003; -[SCCallIntent copyWithZone:] */

void FUN_104467000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104467004; end: 10446701f; +[SCCallIntent outgoingWithVideo:isHangout:] */

void FUN_104467004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_104467334(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104467020; end: 10446708b; +[SCCallIntent incomingWithPayload:senderUserId:] */

void FUN_104467020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_1044673d8(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10446708c; end: 1044670a3; +[SCCallIntent joinWithVideo:] */

void FUN_10446708c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1044674a4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044670a4; end: 10446723b; +[SCCallIntent resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044670a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307bcc0) = 3;
  *(undefined1 *)(lVar2 + _DAT_11307bcc8) = 2;
  *(undefined1 *)(lVar2 + _DAT_11307bcd0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bcd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11307bce8) = 2;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446723c; end: 1044672af; -[SCCallIntent matchOutgoing:incoming:join:resume:] */

void FUN_10446723c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010446713c(FUN_104467704,auStack_40,0x104467720,auStack_60,0x104467728,auStack_80,
                      0x10446773c,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1044672b0; end: 1044672e3;  */

void FUN_1044672b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044672e4; end: 104467323; -[SCCallIntent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044672e4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bcd8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307bce0 + 8))
  ;
  return;
}



/* Entry: 104467324; end: 104467333;  */

ulong FUN_104467324(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104467334; end: 1044673d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467334(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_10446753c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11307bcc0) = 0;
  *(char *)(lVar3 + _DAT_11307bcc8) = (char)param_1;
  *(undefined1 *)(lVar3 + _DAT_11307bcd0) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307bcd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar3 + _DAT_11307bce8) = 2;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044673d8; end: 1044674a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044673d8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_10446753c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307bcc0) = 1;
  *(undefined1 *)(lVar5 + _DAT_11307bcc8) = 2;
  *(undefined1 *)(lVar5 + _DAT_11307bcd0) = 2;
  plVar1 = (long *)(lVar5 + _DAT_11307bcd8);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307bce0);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  *(undefined1 *)(lVar5 + _DAT_11307bce8) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1044674a4; end: 10446753b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044674a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10446753c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11307bcc0) = 2;
  *(undefined1 *)(lVar3 + _DAT_11307bcc8) = 2;
  *(undefined1 *)(lVar3 + _DAT_11307bcd0) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307bcd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(char *)(lVar3 + _DAT_11307bce8) = (char)param_1;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446753c; end: 10446755b;  */

void FUN_10446753c(void)

{
  _objc_opt_self(&PTR_PTR_1129b9c28);
  return;
}



/* Entry: 10446755c; end: 1044676c3;  */

int FUN_10446755c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044675d8;
        goto LAB_1044675bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044675bc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1044675d8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044676c4; end: 104467703;  */

void FUN_1044676c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307bd18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd037e4;
  _swift_getWitnessTable(&UNK_10dd037e4,&UNK_110773610);
  puRam000000011307bd18 = puVar1;
  return;
}



/* Entry: 104467704; end: 104467747;  */

void FUN_104467704(uint param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010446771c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2 & 1);
  return;
}



/* Entry: 104467748; end: 1044677a3; -[SCSharedLensRemoteParticipantInfo videoSinkId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467748(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bd20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bd20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044677a4; end: 1044677bb; -[SCSharedLensRemoteParticipantInfo isPublishingSelfStream] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044677a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307bd28);
}



/* Entry: 1044677bc; end: 104467917; -[SCSharedLensRemoteParticipantInfo initWithVideoSinkId:isPublishingSelfStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044677bc(long param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307bd20);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11307bd28) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104467918; end: 10446794b; -[SCSharedLensRemoteParticipantInfo hash] */

undefined8 FUN_104467918(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10446794c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10446794c; end: 104467aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446794c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11307bd20))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307bd20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307bd28));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104467aec; end: 104467b6b; -[SCSharedLensRemoteParticipantInfo isEqual:] */

uint FUN_104467aec(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001044679e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104467b6c; end: 104467b6f; -[SCSharedLensRemoteParticipantInfo copyWithZone:] */

void FUN_104467b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104467b70; end: 104467b8b; -[SCSharedLensRemoteParticipantInfo description] */

void FUN_104467b70(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104467b8c; end: 104467c07; -[SCSharedLensRemoteParticipantInfo init] */

void FUN_104467b8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "TalkAPI/SCSharedLensRemoteParticipantInfoWrapper.swift",0x36,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104467bd4);
  (*pcVar1)();
}



/* Entry: 104467c08; end: 104467c1b; -[SCSharedLensRemoteParticipantInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307bd20 + 8))
  ;
  return;
}



/* Entry: 104467c1c; end: 104467c3b;  */

void FUN_104467c1c(void)

{
  _objc_opt_self(&PTR_PTR_1129b9d10);
  return;
}



/* Entry: 104467c3c; end: 104467c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467c3c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bd20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11307bd28) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104467c40; end: 104467c4f; -[SCCallLensInfo lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307bd58));
  return;
}



/* Entry: 104467c50; end: 104467c67; -[SCCallLensInfo isGamesLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104467c50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307bd60);
}



/* Entry: 104467c68; end: 104467d9f; -[SCCallLensInfo initWithLens:isGamesLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467c68(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307bd58) = param_3;
  *(undefined1 *)(param_1 + _DAT_11307bd60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104467da0; end: 104467e1f; -[SCCallLensInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104467da0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307bd58);
  _objc_retain();
  func_0x00010bfde980(uVar2);
  __ss6HasherV8_combineyySuF();
  uVar1 = (ulong)*(byte *)(param_1 + _DAT_11307bd60);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104467e20; end: 104467edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104467e20(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11307bd58);
      func_0x00010c071ae0(uVar5);
      bVar1 = *(byte *)(unaff_x20 + _DAT_11307bd60);
      bVar2 = *(byte *)(lStack_58 + _DAT_11307bd60);
      _objc_release(lStack_58);
      return (uint)uVar5 & ((bVar1 ^ bVar2) ^ 1);
    }
  }
  return 0;
}



/* Entry: 104467ee0; end: 104467f5f; -[SCCallLensInfo isEqual:] */

uint FUN_104467ee0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104467e20(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104467f60; end: 104467f63; -[SCCallLensInfo copyWithZone:] */

void FUN_104467f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104467f64; end: 104467f7f; -[SCCallLensInfo description] */

void FUN_104467f64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104467f80; end: 104467ffb; -[SCCallLensInfo init] */

void FUN_104467f80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"TalkAPI/SCCallLensInfoWrapper.swift",0x23,2,
             0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104467fc8);
  (*pcVar1)();
}



/* Entry: 104467ffc; end: 10446800b; -[SCCallLensInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104467ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307bd58));
  return;
}



/* Entry: 10446800c; end: 10446802b;  */

void FUN_10446800c(void)

{
  _objc_opt_self(&PTR_PTR_1129b9de0);
  return;
}



/* Entry: 10446802c; end: 10446802f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446802c(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307bd58) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307bd60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104468030; end: 104468f97;  */

long FUN_104468030(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104468f98; end: 104468fa3; -[SCContextSnapViewMetrics contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104468f98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bd98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bd98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104468fa4; end: 104468fb3; -[SCContextSnapViewMetrics hasEnoughFriendsToLogMentionCounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104468fa4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307bda0);
}



/* Entry: 104468fb4; end: 104468fc3; -[SCContextSnapViewMetrics bidirectionalFriendMentionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104468fb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bda8);
}



/* Entry: 104468fc4; end: 104468fd3; -[SCContextSnapViewMetrics unidirectionalFriendMentionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104468fc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bdb0);
}



/* Entry: 104468fd4; end: 104468fe3; -[SCContextSnapViewMetrics nonFriendMentionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104468fd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bdb8);
}



/* Entry: 104468fe4; end: 104468ff3; -[SCContextSnapViewMetrics isViewerMentioned] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104468fe4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307bdc0);
}



/* Entry: 104468ff4; end: 104468fff; -[SCContextSnapViewMetrics tildeSeparatedContextActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104468ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bdc8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bdc8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104469000; end: 10446900b; -[SCContextSnapViewMetrics tildeSeparatedAvailableContextTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469000(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bdd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bdd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446900c; end: 104469017; -[SCContextSnapViewMetrics tildeSeparatedAvailableContextCards] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446900c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bdd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bdd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104469018; end: 104469027; -[SCContextSnapViewMetrics numChatsSent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104469018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bde0);
}



/* Entry: 104469028; end: 104469037; -[SCContextSnapViewMetrics numSnapsSent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104469028(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bde8);
}



/* Entry: 104469038; end: 104469047; -[SCContextSnapViewMetrics CTAVisibleLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104469038(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307bdf0);
}



/* Entry: 104469048; end: 104469053; -[SCContextSnapViewMetrics groupInviteId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469048(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307bdf8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307bdf8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104469054; end: 10446905f; -[SCContextSnapViewMetrics storyInviteId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469054(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307be00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307be00);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104469060; end: 10446906f; -[SCContextSnapViewMetrics musicMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307be08));
  return;
}



/* Entry: 104469070; end: 10446907b; -[SCContextSnapViewMetrics remixSourceSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307be10))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307be10);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446907c; end: 104469087; -[SCContextSnapViewMetrics repostSourceSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446907c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307be18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307be18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104469088; end: 104469097; -[SCContextSnapViewMetrics lensMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307be20));
  return;
}



/* Entry: 104469098; end: 1044690a3; -[SCContextSnapViewMetrics reshareItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469098(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307be28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307be28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044690a4; end: 1044690fb;  */

void FUN_1044690a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044690fc; end: 10446910b; -[SCContextSnapViewMetrics isSubtitleVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044690fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307be30);
}



/* Entry: 10446910c; end: 10446911b; -[SCContextSnapViewMetrics snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446910c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307be38);
}



/* Entry: 10446911c; end: 104469603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446911c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined1 param_29,undefined4 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bd98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307bda0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307bda8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307bdb0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307bdb8) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11307bdc0) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bdc8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bdd0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bdd8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11307bde0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11307bde8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11307bdf0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307bdf8);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307be00);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_11307be08) = param_21;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307be10);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307be18);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_11307be20) = param_26;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307be28);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  *(undefined1 *)(unaff_x20 + _DAT_11307be30) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_11307be38) = param_31;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104469604; end: 104469887; -[SCContextSnapViewMetrics initWithContextSessionId:hasEnoughFriendsToLogMentionCounts:bidirectionalFriendMentionCount:unidirectionalFriendMentionCount:nonFriendMentionCount:isViewerMentioned:tildeSeparatedContextActions:tildeSeparatedAvailableContextTypes:tildeSeparatedAvailableContextCards:numChatsSent:numSnapsSent:CTAVisibleLatency:groupInviteId:storyInviteId:musicMetrics:remixSourceSnapId:repostSourceSnapId:lensMetrics:reshareItemId:isSubtitleVisible:snapSource:] */

void FUN_104469604(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,long param_10,long param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,long param_15,long param_16,undefined8 param_17,long param_18,
                  long param_19,undefined8 param_20,long param_21,undefined1 param_22)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  if (param_4 == 0) {
    uStack_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c8 = param_3;
    uStack_c0 = param_4;
  }
  if (param_10 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_d8 = param_3;
    uStack_d0 = param_10;
  }
  if (param_11 == 0) {
    uStack_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_e8 = param_3;
    uStack_e0 = param_11;
  }
  lVar2 = param_12;
  _objc_retain();
  lVar3 = param_15;
  _objc_retain();
  lVar4 = param_16;
  _objc_retain();
  _objc_retain();
  lVar5 = param_18;
  _objc_retain();
  lVar6 = param_19;
  _objc_retain();
  _objc_retain();
  lVar7 = param_21;
  _objc_retain();
  if (lVar2 == 0) {
    uStack_108 = 0;
    uStack_100 = 0;
    uVar8 = param_3;
    param_3 = uStack_108;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = param_3;
    _objc_release(lVar2);
    uStack_100 = param_12;
  }
  if (lVar3 == 0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uVar9 = uVar8;
    uVar8 = uStack_120;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar9 = uVar8;
    _objc_release(lVar3);
    uStack_118 = param_15;
  }
  if (lVar4 == 0) {
    uStack_130 = 0;
    uStack_128 = 0;
    uVar11 = uVar9;
    uVar9 = uStack_130;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar11 = uVar9;
    _objc_release(lVar4);
    uStack_128 = param_16;
  }
  if (lVar5 == 0) {
    uStack_138 = 0;
    uVar1 = 0;
    uVar10 = uVar11;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar10 = uVar11;
    _objc_release(lVar5);
    uVar1 = uVar11;
    uStack_138 = param_18;
  }
  if (lVar6 == 0) {
    param_19 = 0;
    uVar12 = 0;
    uVar11 = uVar10;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar11 = uVar10;
    _objc_release(lVar6);
    uVar12 = uVar10;
  }
  if (lVar7 == 0) {
    param_21 = 0;
    uVar11 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar7);
  }
  func_0x000104469394(param_1,uStack_c0,uStack_c8,param_5,param_6,param_7,param_8,param_9,uStack_d0,
                      uStack_d8,uStack_e0,uStack_e8,uStack_100,param_3,param_13,param_14,uStack_118,
                      uVar8,uStack_128,uVar9,param_17,uStack_138,uVar1,param_19,uVar12,param_20,
                      param_21,uVar11,param_22);
  return;
}



/* Entry: 104469888; end: 1044698b7;  */

void FUN_104469888(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044698b8(param_1);
  return;
}



/* Entry: 1044698b8; end: 104469e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044698b8(undefined8 *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  
  _swift_getObjectType();
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307bd98);
  puVar6[1] = uStack_d8;
  *puVar6 = uStack_e0;
  *(undefined1 *)(unaff_x20 + _DAT_11307bda0) = *(undefined1 *)(param_1 + 2);
  uVar10 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11307bda8) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307bdb0) = uVar10;
  *(undefined8 *)(unaff_x20 + _DAT_11307bdb8) = param_1[5];
  *(undefined1 *)(unaff_x20 + _DAT_11307bdc0) = *(undefined1 *)(param_1 + 6);
  uVar10 = param_1[7];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307bdc8);
  puVar6[1] = param_1[8];
  *puVar6 = uVar10;
  uVar10 = param_1[9];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307bdd0);
  puVar6[1] = param_1[10];
  *puVar6 = uVar10;
  uVar10 = param_1[0xb];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307bdd8);
  puVar6[1] = param_1[0xc];
  *puVar6 = uVar10;
  uVar10 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_11307bde0) = param_1[0xd];
  uStack_e8 = param_1[8];
  uStack_f0 = param_1[7];
  uStack_f8 = param_1[10];
  uStack_100 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11307bde8) = uVar10;
  uStack_108 = param_1[0xc];
  uStack_110 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11307bdf0) = param_1[0xf];
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uVar7 = param_1[0x10];
  uVar11 = param_1[0x13];
  uVar10 = param_1[0x12];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307bdf8);
  puVar6[1] = param_1[0x11];
  *puVar6 = uVar7;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307be00);
  puVar6[1] = uVar11;
  *puVar6 = uVar10;
  lVar8 = param_1[0x17];
  if (lVar8 == 1) {
    func_0x00010446a018(&uStack_e0,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_f0,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_100,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_110,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_120,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_130,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    plVar2 = (long *)0x0;
  }
  else {
    uVar10 = param_1[0x14];
    uVar11 = param_1[0x15];
    uVar9 = param_1[0x16];
    uVar7 = param_1[0x18];
    cVar1 = *(char *)(param_1 + 0x19);
    lVar3 = 0;
    FUN_10446a7f0();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(undefined8 *)(lVar4 + _DAT_11307be68) = uVar10;
    *(byte *)(lVar4 + _DAT_11307be70) = (byte)uVar11 & 1;
    puVar6 = (undefined8 *)(lVar4 + _DAT_11307be78);
    *puVar6 = uVar9;
    puVar6[1] = lVar8;
    if (cVar1 == '\x01') {
      func_0x00010446a018(&uStack_e0,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_f0,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_100,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_110,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_120,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_130,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      FUN_10446a060(uVar10,uVar11,uVar9,lVar8,uVar7,1);
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      func_0x00010446a018(&uStack_e0,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_f0,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_100,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_110,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_120,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010446a018(&uStack_130,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
      FUN_10446a060(uVar10,uVar11,uVar9,lVar8,uVar7,cVar1);
      func_0x00010c059520();
    }
    *(undefined **)(lVar4 + _DAT_11307be80) = puVar5;
    plVar2 = &lStack_240;
    lStack_240 = lVar4;
    lStack_238 = lVar3;
    _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11307be08) = plVar2;
  uStack_138 = param_1[0x1b];
  uStack_140 = param_1[0x1a];
  uStack_148 = param_1[0x1d];
  uStack_150 = param_1[0x1c];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307be10);
  puVar6[1] = uStack_138;
  *puVar6 = uStack_140;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307be18);
  puVar6[1] = uStack_148;
  *puVar6 = uStack_150;
  uStack_188 = param_1[0x23];
  uStack_190 = param_1[0x22];
  uStack_178 = param_1[0x25];
  uStack_180 = param_1[0x24];
  uStack_168 = param_1[0x27];
  uStack_170 = param_1[0x26];
  uStack_158 = param_1[0x29];
  uStack_160 = param_1[0x28];
  lStack_1a8 = param_1[0x1f];
  uStack_1b0 = param_1[0x1e];
  uStack_198 = param_1[0x21];
  uStack_1a0 = param_1[0x20];
  if (lStack_1a8 == 1) {
    func_0x00010446a018(&uStack_140,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_150,&uStack_d0,0x112d35ff8,&UNK_10d900cd0);
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uStack_a8 = param_1[0x23];
    uStack_b0 = param_1[0x22];
    uStack_98 = param_1[0x25];
    uStack_a0 = param_1[0x24];
    uStack_88 = param_1[0x27];
    uStack_90 = param_1[0x26];
    uStack_78 = param_1[0x29];
    uStack_80 = param_1[0x28];
    uStack_c8 = param_1[0x1f];
    uStack_d0 = param_1[0x1e];
    uStack_b8 = param_1[0x21];
    uStack_c0 = param_1[0x20];
    FUN_10446afbc(0);
    _objc_allocWithZone();
    func_0x00010446a018(&uStack_140,&uStack_230,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_150,&uStack_230,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010446a018(&uStack_1b0,&uStack_230,0x11307bd90,&UNK_10dd03938);
    puVar6 = &uStack_d0;
    FUN_10446abb8();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307be20) = puVar6;
  uStack_228 = param_1[0x2b];
  uStack_230 = param_1[0x2a];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307be28);
  puVar6[1] = uStack_228;
  *puVar6 = uStack_230;
  *(undefined1 *)(unaff_x20 + _DAT_11307be30) = *(undefined1 *)(param_1 + 0x2c);
  func_0x00010446a018(&uStack_230,auStack_1c0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000104469fe4(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11307be38) = param_1[0x2d];
  _objc_msgSendSuper2(&stack0xfffffffffffffe30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104469e2c; end: 104469e2f; -[SCContextSnapViewMetrics copyWithZone:] */

void FUN_104469e2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104469e30; end: 104469e7b; -[SCContextSnapViewMetrics description] */

void FUN_104469e30(undefined8 param_1)

{
  undefined1 auStack_190 [368];
  
  _objc_retain();
  FUN_10446a074(auStack_190);
  _objc_release(param_1);
  func_0x000104469fe4(auStack_190);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104469e7c; end: 104469ef7; -[SCContextSnapViewMetrics init] */

void FUN_104469e7c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextV2MetricsModels/SCContextSnapViewMetricsWrapper.swift",0x3e,2,0x88,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104469ec4);
  (*pcVar1)();
}



/* Entry: 104469ef8; end: 10446a05f; -[SCContextSnapViewMetrics .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104469ef8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bd98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bdc8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bdd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bdd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307bdf8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307be00 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307be08));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307be10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307be18 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307be20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307be28 + 8))
  ;
  return;
}



/* Entry: 10446a060; end: 10446a073;  */

void FUN_10446a060(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x3);
  return;
}



/* Entry: 10446a074; end: 10446a45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a074(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint uStack_18c;
  undefined8 uStack_188;
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
  
  uVar5 = *(undefined1 *)(param_2 + _DAT_11307bda0);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11307bda8);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11307bdb0);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11307bdb8);
  uVar6 = *(undefined1 *)(param_2 + _DAT_11307bdc0);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307bd98);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307bd98))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_11307bdc8);
  puVar2 = (undefined8 *)(param_2 + _DAT_11307bdd0);
  uVar27 = puVar1[1];
  uVar23 = *puVar1;
  uVar19 = puVar1[1];
  uVar28 = puVar2[1];
  uVar24 = *puVar2;
  uVar18 = puVar2[1];
  uVar26 = *(undefined8 *)(param_2 + _DAT_11307bdd8);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11307bdd8))[1];
  uVar9 = *(undefined8 *)(param_2 + _DAT_11307bde0);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11307bde8);
  uVar33 = *(undefined8 *)(param_2 + _DAT_11307bdf0);
  puVar1 = (undefined8 *)(param_2 + _DAT_11307bdf8);
  puVar2 = (undefined8 *)(param_2 + _DAT_11307be00);
  uVar31 = puVar1[1];
  uVar30 = *puVar1;
  uVar17 = puVar1[1];
  uVar29 = puVar2[1];
  uVar25 = *puVar2;
  uVar22 = puVar2[1];
  lVar11 = *(long *)(param_2 + _DAT_11307be08);
  if (lVar11 == 0) {
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar17);
    uVar15 = 0;
    uStack_188 = 0;
    lVar11 = 0;
    bVar21 = false;
    uStack_18c = 0;
    uVar16 = 1;
  }
  else {
    uVar15 = *(undefined8 *)(lVar11 + _DAT_11307be68);
    uStack_18c = (uint)*(byte *)(lVar11 + _DAT_11307be70);
    uStack_188 = *(undefined8 *)(lVar11 + _DAT_11307be78);
    uVar16 = ((undefined8 *)(lVar11 + _DAT_11307be78))[1];
    lVar11 = *(long *)(lVar11 + _DAT_11307be80);
    bVar21 = lVar11 == 0;
    if (bVar21) {
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar22);
      lVar11 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar22);
      func_0x00010c282800();
    }
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_11307be10);
  puVar2 = (undefined8 *)(param_2 + _DAT_11307be18);
  uVar32 = puVar1[1];
  uVar22 = *puVar1;
  uVar17 = puVar1[1];
  uVar19 = puVar2[1];
  uVar18 = *puVar2;
  lVar20 = *(long *)(param_2 + _DAT_11307be20);
  if (lVar20 == 0) {
    _swift_bridgeObjectRetain(puVar2[1]);
    _swift_bridgeObjectRetain(uVar17);
    uStack_d8 = 1;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar2[1]);
    _objc_retain(lVar20);
    _swift_bridgeObjectRetain(uVar17);
    FUN_10446ae98(&uStack_e0,lVar20);
    _objc_release(lVar20);
  }
  uVar7 = *(undefined1 *)(param_2 + _DAT_11307be30);
  puVar1 = (undefined8 *)(param_2 + _DAT_11307be28);
  uVar17 = *(undefined8 *)(param_2 + _DAT_11307be38);
  *param_1 = uVar8;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar5;
  param_1[3] = uVar14;
  param_1[4] = uVar13;
  param_1[5] = uVar12;
  *(undefined1 *)(param_1 + 6) = uVar6;
  param_1[10] = uVar28;
  param_1[9] = uVar24;
  param_1[8] = uVar27;
  param_1[7] = uVar23;
  param_1[0xb] = uVar26;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar9;
  param_1[0xe] = uVar10;
  param_1[0xf] = uVar33;
  param_1[0x11] = uVar31;
  param_1[0x10] = uVar30;
  param_1[0x13] = uVar29;
  param_1[0x12] = uVar25;
  param_1[0x14] = uVar15;
  param_1[0x15] = (ulong)uStack_18c;
  param_1[0x16] = uStack_188;
  param_1[0x17] = uVar16;
  param_1[0x18] = lVar11;
  *(bool *)(param_1 + 0x19) = bVar21;
  param_1[0x1b] = uVar32;
  param_1[0x1a] = uVar22;
  param_1[0x1d] = uVar19;
  param_1[0x1c] = uVar18;
  param_1[0x1f] = uStack_d8;
  param_1[0x1e] = uStack_e0;
  param_1[0x21] = uStack_c8;
  param_1[0x20] = uStack_d0;
  param_1[0x23] = uStack_b8;
  param_1[0x22] = uStack_c0;
  param_1[0x25] = uStack_a8;
  param_1[0x24] = uStack_b0;
  param_1[0x27] = uStack_98;
  param_1[0x26] = uStack_a0;
  param_1[0x29] = uStack_88;
  param_1[0x28] = uStack_90;
  uVar8 = puVar1[1];
  uVar26 = *puVar1;
  param_1[0x2b] = puVar1[1];
  param_1[0x2a] = uVar26;
  *(undefined1 *)(param_1 + 0x2c) = uVar7;
  param_1[0x2d] = uVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar8);
  return;
}



/* Entry: 10446a45c; end: 10446a47b;  */

void FUN_10446a45c(void)

{
  _objc_opt_self(&PTR_PTR_1129b9eb0);
  return;
}



/* Entry: 10446a47c; end: 10446a52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a47c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307be68) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307be70) = *(undefined1 *)(param_1 + 1);
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307be78);
  puVar1[1] = param_1[3];
  *puVar1 = uVar3;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059520();
  }
  *(undefined **)(unaff_x20 + _DAT_11307be80) = puVar2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446a530; end: 10446a53f; -[SCContextSnapMusicMetrics trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10446a530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307be68);
}



/* Entry: 10446a540; end: 10446a54f; -[SCContextSnapMusicMetrics isBlocked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10446a540(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307be70);
}



/* Entry: 10446a550; end: 10446a5ab; -[SCContextSnapMusicMetrics musicLyricsStickerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307be78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307be78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446a5ac; end: 10446a5bb; -[SCContextSnapMusicMetrics matchedTrackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307be80));
  return;
}



/* Entry: 10446a5bc; end: 10446a64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a5bc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307be68) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307be70) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307be78);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307be80) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446a650; end: 10446a707; -[SCContextSnapMusicMetrics initWithTrackId:isBlocked:musicLyricsStickerType:matchedTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a650(long param_1,long param_2,undefined8 param_3,undefined1 param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11307be68) = param_3;
  *(undefined1 *)(param_1 + _DAT_11307be70) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11307be78);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307be80) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 10446a708; end: 10446a70b; -[SCContextSnapMusicMetrics copyWithZone:] */

void FUN_10446a708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10446a70c; end: 10446a737; -[SCContextSnapMusicMetrics description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a70c(long param_1)

{
  func_0x00010c282800(*(undefined8 *)(param_1 + _DAT_11307be80));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446a738; end: 10446a7b3; -[SCContextSnapMusicMetrics init] */

void FUN_10446a738(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextV2MetricsModels/SCContextSnapMusicMetricsWrapper.swift",0x3f,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446a780);
  (*pcVar1)();
}



/* Entry: 10446a7b4; end: 10446a7ef; -[SCContextSnapMusicMetrics .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a7b4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307be78 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307be80));
  return;
}



/* Entry: 10446a7f0; end: 10446a80f;  */

void FUN_10446a7f0(void)

{
  _objc_opt_self(&PTR_PTR_1129ba018);
  return;
}



/* Entry: 10446a810; end: 10446a83f;  */

void FUN_10446a810(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10446abb8(param_1);
  return;
}



/* Entry: 10446a840; end: 10446a84b; -[SCContextSnapLensMetrics lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a840(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307beb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307beb0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10446a84c; end: 10446a857; -[SCContextSnapLensMetrics promptId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446a84c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307beb8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307beb8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


