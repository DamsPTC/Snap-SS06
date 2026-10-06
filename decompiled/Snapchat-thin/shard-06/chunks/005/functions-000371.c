/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a3fd08; end: 104a3fd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fd08(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a5298;
  _swift_beginAccess(unaff_x20 + _DAT_1130a5298,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104a3fd14; end: 104a3fdef;  */

void FUN_104a3fd14(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104a3fdf0; end: 104a3fdf3;  */

void FUN_104a3fdf0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  _swift_unknownObjectWeakAssign(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    _swift_endAccess(lVar1);
    _swift_unknownObjectRelease(uVar2);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_endAccess(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 104a3fdf4; end: 104a3fe5f;  */

void FUN_104a3fdf4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  _swift_unknownObjectWeakAssign(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    _swift_endAccess(lVar1);
    _swift_unknownObjectRelease(uVar2);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_endAccess(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 104a3fe60; end: 104a3ff03;  */

undefined8 FUN_104a3fe60(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104a3ff04; end: 104a3ff1f; -[GTMAuthSession initWithAuthState:] */

void FUN_104a3ff04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)
            (param_1,PTR_s_initWithAuthState_serviceProvide_112525640,param_3,0,0,0,0);
  return;
}



/* Entry: 104a3ff20; end: 104a3ffc7;  */

undefined8
FUN_104a3ff20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104a43020(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a3ffc8; end: 104a40007;  */

undefined8 FUN_104a3ffc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104a43020();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a40008; end: 104a4012f; -[GTMAuthSession initWithAuthState:serviceProvider:userID:userEmail:userEmailIsVerified:] */

undefined8
FUN_104a40008(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    uVar5 = param_2;
  }
  _objc_retain(param_3);
  lVar3 = param_7;
  _objc_retain();
  if (lVar3 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    _objc_release(lVar3);
  }
  uVar4 = param_3;
  FUN_104a43020(param_3,param_4,uVar2,param_5,uVar1,param_6,uVar5,param_7,param_2);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 104a40130; end: 104a40137;  */

undefined8 FUN_104a40130(void)

{
  return 1;
}



/* Entry: 104a40138; end: 104a4013f; +[GTMAuthSession supportsSecureCoding] */

undefined8 FUN_104a40138(void)

{
  return 1;
}



/* Entry: 104a40140; end: 104a40367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a40140(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a5260);
  uVar1 = 0x7461745368747561;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7461745368747561,0xe900000000000065);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a5268))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a5268);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5065636976726573;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5065636976726573,0xef72656469766f72);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar1,uVar2);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a5270))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a5270);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x444972657375;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444972657375,0xe600000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar1,uVar2);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a5278))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a5278);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x69616d4572657375;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69616d4572657375,0xe90000000000006c);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar1,uVar2);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a5280))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a5280);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f22d570);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar1,uVar2);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104a40368; end: 104a403b7; -[GTMAuthSession encodeWithCoder:] */

void FUN_104a40368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a40140(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a403b8; end: 104a4073b;  */

undefined8 FUN_104a403b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  lVar1 = 0;
  func_0x000104a4488c(0,0x1130a52a0,&PTR_PTR_1126ae388);
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  if (lVar1 == 0) {
    _objc_release(param_1);
    uVar5 = unaff_x20;
    _swift_getObjectType(unaff_x20);
    _swift_deallocPartialClassInstance(unaff_x20,uVar5,0x78,7);
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000104a4488c(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar2;
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
    uVar3 = uVar2;
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
              (uVar2,0x444972657375,0xe600000000000000,uVar2);
    uVar4 = uVar2;
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
              (uVar2,0x69616d4572657375,0xe90000000000006c,uVar2);
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
              (uVar2,0xd000000000000013,0x800000010f22d570,uVar2);
    _objc_msgSend(unaff_x20,PTR_s_initWithAuthState_serviceProvide_112525640,lVar1,uVar5,uVar3,uVar4
                  ,uVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  return unaff_x20;
}



/* Entry: 104a4073c; end: 104a407b7; -[GTMAuthSession initWithCoder:] */

void FUN_104a4073c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000104a40580();
  return;
}



/* Entry: 104a407b8; end: 104a40a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a407b8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_d0;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_1130a52a8);
  func_0x000104a44714(param_1,&puStack_a0);
  puVar4 = &UNK_1107bf9a8;
  _swift_allocObject(&UNK_1107bf9a8,0x58,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x20) = uStack_98;
  *(undefined **)(puVar4 + 0x18) = puStack_a0;
  *(undefined **)(puVar4 + 0x30) = puStack_88;
  *(code **)(puVar4 + 0x28) = pcStack_90;
  *(undefined **)(puVar4 + 0x40) = puStack_78;
  *(undefined8 *)(puVar4 + 0x38) = uStack_80;
  *(undefined8 *)(puVar4 + 0x50) = uStack_68;
  *(undefined8 *)(puVar4 + 0x48) = uStack_70;
  puVar5 = &UNK_1107bf9d0;
  _swift_allocObject(&UNK_1107bf9d0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_104a44748;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x104a449b8;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_10006eb60;
  puStack_b8 = &UNK_1107bf9e8;
  puStack_a8 = puVar5;
  __Block_copy(&puStack_d0);
  puVar7 = puStack_a8;
  _objc_retain();
  _swift_retain(puVar5);
  _swift_release(puVar7);
  func_0x00010006eaa4(uVar10,ppuVar6);
  __Block_release(ppuVar6);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x52,0xe1,0x1e,1);
  _swift_release(puVar5);
  lVar2 = _DAT_1130a5290;
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a40a94);
    (*pcVar3)();
  }
  _swift_beginAccess(unaff_x20 + _DAT_1130a5290,&puStack_d0,0,0);
  uVar9 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar9 != 0) {
    uVar8 = uVar9;
    _objc_msgSend();
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar9;
      _objc_msgSend(uVar9,PTR_s_additionalTokenRefreshParameters_112525638,unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      if (uVar8 != 0) {
        uVar11 = uVar8;
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
        _swift_unknownObjectRelease(uVar9);
        _objc_release(uVar8);
        goto LAB_104a4098c;
      }
    }
    _swift_unknownObjectRelease(uVar9);
  }
  uVar11 = 0;
LAB_104a4098c:
  puVar5 = &UNK_1107bfa20;
  _swift_allocObject(&UNK_1107bfa20,0x18,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_1130a5260);
  uStack_80 = 0x104a44754;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_104a41880;
  puStack_88 = &UNK_1107bfa38;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  __Block_copy(ppuVar6);
  puVar1 = puStack_78;
  _objc_retain(unaff_x20);
  _swift_retain(puVar5);
  _swift_release(puVar1);
  if (uVar11 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar11;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar11);
  }
  _objc_msgSend(uVar10,PTR_s_performActionWithFreshTokens_add_11261ba78,ppuVar6,uVar9);
  _objc_release(uVar9);
  __Block_release(ppuVar6);
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}



/* Entry: 104a40a94; end: 104a40bdb; -[GTMAuthSession authorizeRequest:completionHandler:] */

void FUN_104a40a94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  __Block_copy();
  puVar1 = &UNK_1107bf980;
  _swift_allocObject(&UNK_1107bf980,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  if (param_3 != 0) {
    uStack_40 = 0;
    pcStack_68 = FUN_104a446c4;
    uStack_38 = 0;
    lStack_70 = param_3;
    puStack_60 = puVar1;
    _objc_retain(param_3);
    _objc_retain();
    _objc_retain(param_1);
    _swift_retain(puVar1);
    FUN_104a407b8(&lStack_70);
    _objc_release(param_3);
    _swift_release(puVar1);
    _objc_release(param_1);
    FUN_104a43628(&lStack_70);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 104a40bdc; end: 104a40caf; -[GTMAuthSession authorizeRequest:delegate:didFinishSelector:] */

void FUN_104a40bdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  _objc_retain();
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_4);
  _swift_unknownObjectRelease(param_4);
  if (param_3 == 0) {
    _objc_release(param_1);
  }
  else {
    func_0x0001000bb420(auStack_50,auStack_88);
    uStack_60 = 1;
    uStack_58 = 0;
    lStack_90 = param_3;
    uStack_68 = param_5;
    _objc_retain(param_3);
    FUN_104a407b8(&lStack_90);
    _objc_release(param_3);
    _objc_release(param_1);
    FUN_104a43628(&lStack_90);
  }
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104a40cb0; end: 104a40d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a40cb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000104a44714(param_2,&uStack_80);
  lVar2 = _DAT_1130a52c8;
  _swift_beginAccess(param_1 + _DAT_1130a52c8,auStack_98,0x21,0);
  uVar5 = *(ulong *)(param_1 + lVar2);
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_1 + lVar2) = uVar5;
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_104a45268(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(param_1 + lVar2) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_104a45268(uVar5,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  lVar1 = uVar5 + uVar3 * 0x40;
  *(undefined8 *)(lVar1 + 0x48) = uStack_58;
  *(undefined8 *)(lVar1 + 0x40) = uStack_60;
  *(undefined8 *)(lVar1 + 0x58) = uStack_48;
  *(undefined8 *)(lVar1 + 0x50) = uStack_50;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x20) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_68;
  *(undefined8 *)(lVar1 + 0x30) = uStack_70;
  *(ulong *)(param_1 + lVar2) = uVar5;
  _swift_endAccess(auStack_98);
  return;
}



/* Entry: 104a40d9c; end: 104a40f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a40d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar6 = *(undefined8 *)(param_6 + _DAT_1130a52a8);
  puVar2 = &UNK_1107bfa70;
  _swift_allocObject(&UNK_1107bfa70,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_6);
  puVar3 = &UNK_1107bfa98;
  _swift_allocObject(&UNK_1107bfa98,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  puVar2 = &UNK_1107bfac0;
  _swift_allocObject(&UNK_1107bfac0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x104a4475c;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uStack_60 = 0x104a449bc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10006eb60;
  puStack_68 = &UNK_1107bfad8;
  puStack_58 = puVar2;
  __Block_copy(&puStack_80);
  puVar5 = puStack_58;
  _swift_errorRetain(param_5);
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(puVar2);
  _swift_release(puVar5);
  func_0x00010006eaa4(uVar6,ppuVar4);
  __Block_release(ppuVar4);
  puVar5 = puVar2;
  _swift_isEscapingClosureAtFileLocation(puVar2,"",0x52,0xe9,0x25,1);
  _swift_release(puVar3);
  _swift_release(puVar2);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a40f10);
  (*pcVar1)();
}



/* Entry: 104a40f10; end: 104a4187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a40f10(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [56];
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1130a52c8;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_1130a52c8,auStack_90,1,0);
    lVar3 = *(long *)(param_1 + lVar1);
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      lVar4 = lVar3 + 0x20;
      _swift_bridgeObjectRetain(lVar3);
      do {
        func_0x000104a44714(lVar4,auStack_d0);
        lVar2 = lStack_98;
        if (param_2 != 0) {
          _swift_errorRetain(param_2);
          _swift_errorRelease(lVar2);
          lStack_98 = param_2;
        }
        func_0x000104a41034(auStack_d0,param_3,param_4);
        FUN_104a43628(auStack_d0);
        lVar4 = lVar4 + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease(lVar3);
      lVar3 = *(long *)(param_1 + lVar1);
    }
    *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 104a41880; end: 104a4193f;  */

void FUN_104a41880(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar5 = 0;
    lVar3 = 0;
  }
  else {
    lVar5 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_2);
    lVar3 = param_2;
    param_2 = lVar5;
  }
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _swift_retain(uVar2);
  uVar4 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(lVar3,lVar5,param_3,param_2,param_4);
  _swift_release(uVar2);
  _objc_release(uVar4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 104a41940; end: 104a41b43;  */

void FUN_104a41940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1107bfbb0;
  _swift_allocObject(&UNK_1107bfbb0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  uStack_70 = 0x104a44804;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107bfbc8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  _swift_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  func_0x000104a448cc(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar8 = 0x112d4af98;
  func_0x000104a4490c(0x112d4af98,0x11309c6f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar10,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,puVar10,ppuVar5);
  __Block_release(ppuVar5);
  (**(code **)(lStack_a8 + 8))(puVar10,lVar2);
  (**(code **)(lVar9 + 8))(lVar11,lVar3);
  _swift_release(puStack_68);
  return;
}



/* Entry: 104a41b44; end: 104a41ceb;  */

void FUN_104a41b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code **ppcVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  code *pcStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [32];
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  func_0x000104a44858(param_1 + 0x18,&pcStack_98);
  if ((bStack_70 & 1) == 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    _swift_errorRetain(uVar1);
    (*pcStack_98)(uVar1);
    _swift_errorRelease(uVar1);
    _swift_release(uStack_90);
  }
  else {
    func_0x000100102924(&pcStack_98,auStack_b8);
    _swift_beginAccess(param_1 + 0x10,auStack_d0,0,0);
    lVar4 = *(long *)(param_1 + 0x48);
    func_0x0001000bb420(auStack_b8,auStack_f0);
    _swift_errorRetain(lVar4);
    uVar1 = 0;
    func_0x000104a4488c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    ppcVar2 = &pcStack_f8;
    _swift_dynamicCast(ppcVar2,auStack_f0,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if ((int)ppcVar2 != 0) {
      pcVar3 = pcStack_f8;
      _objc_msgSend(pcStack_f8,PTR_s_respondsToSelector__11262c7e0,uStack_78);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = pcStack_f8;
        _objc_msgSend(pcStack_f8,PTR_s_methodForSelector__112610c70,uStack_78);
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar4;
          __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar4);
        }
        (*pcVar3)(pcStack_f8,uStack_78,param_2,param_3,lVar5);
        _objc_release(lVar5);
      }
      _objc_release(pcStack_f8);
    }
    _swift_errorRelease(lVar4);
    func_0x000100183ab8(auStack_b8);
  }
  return;
}



/* Entry: 104a41cec; end: 104a41e9f;  */

void FUN_104a41cec(long param_1,long param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  if (param_1 == 0) {
    _swift_errorRetain(param_3);
    lVar2 = param_3;
  }
  _swift_beginAccess(param_2 + 0x10,auStack_58,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(long *)(param_2 + 0x48) = lVar2;
  _swift_errorRetain(param_1);
  _swift_errorRelease(uVar1);
  (*param_4)();
  return;
}



/* Entry: 104a41ea0; end: 104a41fdf; -[GTMAuthSession stopAuthorization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a41ea0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *(undefined8 *)(param_1 + _DAT_1130a52a8);
  puVar2 = &UNK_1107bf908;
  _swift_allocObject(&UNK_1107bf908,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  puVar3 = &UNK_1107bf930;
  _swift_allocObject(&UNK_1107bf930,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x104a449a8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uStack_50 = 0x104a449b4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_1107bf948;
  puStack_48 = puVar3;
  __Block_copy(&puStack_70);
  puVar5 = puStack_48;
  _objc_retain(param_1);
  _objc_retain();
  _swift_retain(puVar3);
  _swift_release(puVar5);
  func_0x00010006eaa4(uVar6,ppuVar4);
  __Block_release(ppuVar4);
  puVar5 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x52,0x165,0x1e,1);
  _objc_release(param_1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a41fe0);
  (*pcVar1)();
}



/* Entry: 104a41fe0; end: 104a42183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a41fe0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_80 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_1130a52a8);
  (**(code **)(lVar11 + 0x10))(lVar10,param_1,lVar2);
  uVar7 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1107bf698;
  _swift_allocObject(&UNK_1107bf698,uVar12 + lVar9,uVar7 | 7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  (**(code **)(lVar11 + 0x20))(puVar3 + uVar12,lVar10,lVar2);
  puVar4 = &UNK_1107bf6c0;
  _swift_allocObject(&UNK_1107bf6c0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_104a43690;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_60 = 0x104a449ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10006eb60;
  puStack_68 = &UNK_1107bf6d8;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  __Block_copy(ppuVar5);
  puVar6 = puStack_58;
  _objc_retain();
  _swift_retain(puVar4);
  _swift_release(puVar6);
  func_0x00010006eaa4(uVar8,ppuVar5);
  __Block_release(ppuVar5);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x52,0x16c,0x1e,1);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a42184);
  (*pcVar1)();
}



/* Entry: 104a42184; end: 104a42283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a42184(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_1130a52c8;
  _swift_beginAccess(param_1 + _DAT_1130a52c8,auStack_78,0,0);
  lVar4 = *(long *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(lVar4);
  lVar7 = *(long *)(lVar4 + 0x10);
  if (lVar7 == 0) {
    lVar5 = 0;
    uVar3 = 1;
  }
  else {
    lVar5 = 0;
    uVar6 = lVar4 + 0x20;
    do {
      uVar2 = uVar6;
      FUN_104a42604(uVar6,param_2);
      if ((uVar2 & 1) != 0) goto LAB_104a42210;
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 + 0x40;
    } while (lVar7 != lVar5);
    lVar5 = 0;
LAB_104a42210:
    uVar3 = (uint)uVar2 ^ 1;
  }
  _swift_bridgeObjectRelease(lVar4);
  if ((uVar3 & 1) == 0) {
    _swift_beginAccess(param_1 + lVar1,auStack_d8,0x21,0);
    FUN_104a449ec(auStack_c0,lVar5);
    _swift_endAccess(auStack_d8);
    FUN_104a43628(auStack_c0);
  }
  return;
}



/* Entry: 104a42284; end: 104a42327; -[GTMAuthSession stopAuthorizationForRequest:] */

void FUN_104a42284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_104a41fe0(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 104a42328; end: 104a4251b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104a42328(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)&puStack_d0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_1130a52a8);
  (**(code **)(lVar12 + 0x10))(lVar11,param_1,lVar3);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1107bf710;
  _swift_allocObject(&UNK_1107bf710,uVar13 + lVar10,uVar8 | 7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_90;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  (**(code **)(lVar12 + 0x20))(puVar4 + uVar13,lVar11,lVar3);
  puVar5 = &UNK_1107bf738;
  _swift_allocObject(&UNK_1107bf738,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x104a436c0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_b0 = 0x104a449b0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_10006eb60;
  puStack_b8 = &UNK_1107bf750;
  ppuVar6 = &puStack_d0;
  puStack_a8 = puVar5;
  __Block_copy(ppuVar6);
  puVar7 = puStack_a8;
  _objc_retain();
  _swift_retain(puVar5);
  _swift_release(puVar7);
  func_0x00010006eaa4(uVar9,ppuVar6);
  __Block_release(ppuVar6);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x52,0x17a,0x1e,1);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_104a44768(&uStack_90,&puStack_d0,0x1130a52b0);
    bVar2 = puStack_d0 != (undefined *)0x0;
    func_0x000104a4494c(&puStack_d0,0x1130a52b0);
    func_0x000104a4494c(&uStack_90,0x1130a52b0);
    _swift_release(puVar4);
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a4251c);
  (*pcVar1)();
}



/* Entry: 104a4251c; end: 104a42603;  */

/* WARNING: Removing unreachable block (ram,0x000104a425bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a4251c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_d8 [24];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = _DAT_1130a52c8;
  _swift_beginAccess(param_2 + _DAT_1130a52c8,auStack_d8,0,0);
  lVar2 = *(long *)(param_2 + lVar4);
  _swift_bridgeObjectRetain(lVar2);
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    lVar3 = lVar2 + 0x20;
    do {
      func_0x000104a44714(lVar3,&uStack_80);
      puVar1 = &uStack_80;
      FUN_104a42604(puVar1,param_3);
      if (((ulong)puVar1 & 1) != 0) {
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        uStack_a8 = uStack_68;
        uStack_b0 = uStack_70;
        uStack_98 = uStack_58;
        uStack_a0 = uStack_60;
        uStack_88 = uStack_48;
        uStack_90 = uStack_50;
        goto LAB_104a425d8;
      }
      FUN_104a43628(&uStack_80);
      lVar3 = lVar3 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
LAB_104a425d8:
  _swift_bridgeObjectRelease(lVar2);
  func_0x000104a446cc(&uStack_c0,param_1);
  return;
}



/* Entry: 104a42604; end: 104a426a7;  */

uint FUN_104a42604(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
            (puVar3,*param_1);
  puVar2 = puVar3;
  __s10Foundation10URLRequestV2eeoiySbAC_ACtFZ(puVar3,param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 104a426a8; end: 104a42753; -[GTMAuthSession isAuthorizingRequest:] */

uint FUN_104a426a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
            (puVar3,param_3);
  _objc_retain(param_1);
  puVar2 = puVar3;
  FUN_104a42328(puVar3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 104a42754; end: 104a427c7;  */

bool FUN_104a42754(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x7a69726f68747541;
  uVar3 = 0xed00006e6f697461;
  __s10Foundation10URLRequestV5value18forHTTPHeaderFieldSSSgSS_tF(0x7a69726f68747541);
  if (uVar3 == 0) {
    bVar1 = false;
  }
  else {
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    bVar1 = uVar2 != 0;
  }
  return bVar1;
}



/* Entry: 104a427c8; end: 104a428a7; -[GTMAuthSession isAuthorizedRequest:] */

bool FUN_104a427c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  uVar3 = 0x7a69726f68747541;
  uVar4 = 0xed00006e6f697461;
  __s10Foundation10URLRequestV5value18forHTTPHeaderFieldSSSgSS_tF(0x7a69726f68747541);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (uVar4 == 0) {
    bVar1 = false;
  }
  else {
    _swift_bridgeObjectRelease(uVar4);
    uVar3 = uVar3 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar3 = uVar4 >> 0x38 & 0xf;
    }
    bVar1 = uVar3 != 0;
  }
  return bVar1;
}



/* Entry: 104a428a8; end: 104a428bf; -[GTMAuthSession canAuthorize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a428a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)
            (*(undefined8 *)(param_1 + _DAT_1130a5260),PTR_s_isAuthorized_1125f8cc0);
  return;
}



/* Entry: 104a428c0; end: 104a428e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a428c0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(undefined8 *)(unaff_x20 + _DAT_1130a5260),PTR_s_isAuthorized_1125f8cc0);
  return;
}



/* Entry: 104a428e8; end: 104a4294f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104a428e8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_1130a5260);
  lVar1 = lVar2;
  _objc_msgSend(lVar2,PTR_s_refreshToken_112626fb0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_msgSend(lVar2,PTR_s_setNeedsTokenRefresh_112525648);
  }
  else {
    _objc_release(lVar1);
  }
  return lVar1 == 0;
}



/* Entry: 104a42950; end: 104a429d7; -[GTMAuthSession primeForRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104a42950(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1130a5260);
  _objc_retain();
  lVar1 = lVar2;
  _objc_msgSend(lVar2,PTR_s_refreshToken_112626fb0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_msgSend(lVar2,PTR_s_setNeedsTokenRefresh_112525648);
  }
  else {
    _objc_release(param_1);
    param_1 = lVar1;
  }
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 104a429d8; end: 104a429db;  */

undefined * FUN_104a429d8(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar7 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar9,0xd00000000000002c,0x800000010f22d7a0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar1 = lVar9;
  (*pcVar10)(lVar9,1,lVar2);
  if ((int)lVar1 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x104a438e0);
    (*pcVar10)();
  }
  pcVar12 = *(code **)(lVar11 + 0x20);
  (*pcVar12)(lVar8 - extraout_x12_00,lVar9,lVar2);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar7,0xd00000000000002a,0x800000010f22d7d0);
  puVar3 = puVar7;
  (*pcVar10)(puVar7,1,lVar2);
  if ((int)puVar3 != 1) {
    (*pcVar12)(lVar8,puVar7,lVar2);
    puVar4 = PTR_PTR_1126ae348;
    _objc_allocWithZone(PTR_PTR_1126ae348);
    puVar5 = puVar4;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar6 = puVar5;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    _objc_msgSend(puVar4,PTR_s_initWithAuthorizationEndpoint_to_1125db060,puVar5,puVar6);
    _objc_release(puVar5);
    _objc_release(puVar6);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(lVar8,lVar2);
    (*pcVar10)(lVar8 - extraout_x12_00,lVar2);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x104a438e4);
  (*pcVar10)();
}



/* Entry: 104a429dc; end: 104a42a3b; +[GTMAuthSession configurationForGoogle] */

void FUN_104a429dc(void)

{
  FUN_104a436f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a42a3c; end: 104a42a9b; -[GTMAuthSession init] */

void FUN_104a42a3c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("GTMAppAuth.AuthSession",0x16,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a42a68);
  (*pcVar1)();
}



/* Entry: 104a42a9c; end: 104a42b53; -[GTMAuthSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a42a9c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a5260));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a5268 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a5270 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a5278 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a5280 + 8));
  func_0x000100dcfeec(param_1 + _DAT_1130a5290);
  func_0x000100dcfeec(param_1 + _DAT_1130a5298);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a52a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a52c8));
  return;
}



/* Entry: 104a42b54; end: 104a42bfb;  */

undefined1  [16] FUN_104a42b54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000065;
  auVar1._0_8_ = 0x7461745368747561;
  return auVar1;
}



/* Entry: 104a42bfc; end: 104a42d73;  */

long FUN_104a42bfc(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_e0 [160];
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_104a438e4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104a4391c();
  _swift_getEnumCaseMultiPayload(lVar4,lVar2);
  (**(code **)(lVar5 + 0x20))(puVar3,lVar4,lVar1);
  lVar2 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x74736575716572;
  *(undefined8 *)(lVar2 + 0x28) = 0xe700000000000000;
  *(long *)(lVar2 + 0x48) = lVar1;
  func_0x0001000a9d90(lVar2 + 0x30);
  (**(code **)(lVar5 + 0x10))();
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000104a4494c((undefined8 *)(lVar2 + 0x20),0x11309c418);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  return lVar4;
}



/* Entry: 104a42d74; end: 104a42dfb;  */

bool FUN_104a42d74(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_104a438e4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_104a4391c();
  puVar2 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,lVar1);
  func_0x000104a43960(puVar3);
  return (int)puVar2 == 1;
}



/* Entry: 104a42dfc; end: 104a42e03;  */

void FUN_104a42dfc(void)

{
  return;
}



/* Entry: 104a42e04; end: 104a42e83;  */

void FUN_104a42e04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a53a0;
  func_0x000104a448cc(0x1130a53a0,FUN_104a438e4,&UNK_10dd4d858);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 104a42e84; end: 104a42eab;  */

void FUN_104a42e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 104a42eac; end: 104a42f23;  */

bool FUN_104a42eac(long param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_104a4391c();
  puVar1 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,param_1);
  func_0x000104a43960(puVar2);
  return (int)puVar1 == 1;
}



/* Entry: 104a42f24; end: 104a42f4b;  */

long FUN_104a42f24(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_e0 [160];
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_104a438e4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104a4391c();
  _swift_getEnumCaseMultiPayload(lVar4,lVar2);
  (**(code **)(lVar5 + 0x20))(puVar3,lVar4,lVar1);
  lVar2 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x74736575716572;
  *(undefined8 *)(lVar2 + 0x28) = 0xe700000000000000;
  *(long *)(lVar2 + 0x48) = lVar1;
  func_0x0001000a9d90(lVar2 + 0x30);
  (**(code **)(lVar5 + 0x10))();
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000104a4494c((undefined8 *)(lVar2 + 0x20),0x11309c418);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  return lVar4;
}



/* Entry: 104a42f4c; end: 104a42ff7;  */

void FUN_104a42f4c(void)

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



/* Entry: 104a42ff8; end: 104a4301f;  */

void FUN_104a42ff8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104a43020; end: 104a43627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a43020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
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
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uStack_c0 = param_9;
  uStack_118 = param_8;
  lStack_f8 = param_1;
  uStack_f0 = param_2;
  uStack_e8 = param_3;
  uStack_e0 = param_5;
  uStack_d8 = param_4;
  uStack_d0 = param_7;
  uStack_c8 = param_6;
  _swift_getObjectType();
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lStack_108 = *(long *)(lVar1 + -8);
  lStack_100 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  puVar12 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar9 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _DAT_1130a5288) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130a5290,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130a5298,0);
  lStack_110 = _DAT_1130a52a8;
  func_0x000104a4488c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  func_0x000104a448cc(0x112d4ac68,puVar9,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar3 = 0x11309d9b0;
  func_0x0001048db364(0x11309d9b0);
  uVar4 = 0x112d4ac78;
  func_0x000104a4490c(0x112d4ac78,0x11309d9b0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar13,&puStack_a0,uVar3,uVar4,lVar1,uVar5);
  (**(code **)(lStack_108 + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_100);
  uVar5 = 0xd000000000000015;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000015,0x800000010f22d830,lVar2,lVar13,puVar12,0);
  *(undefined8 *)(unaff_x20 + lStack_110) = uVar5;
  *(undefined **)(unaff_x20 + _DAT_1130a52c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(unaff_x20 + _DAT_1130a5260) = lStack_f8;
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130a5268);
  *puVar8 = uStack_f0;
  puVar8[1] = uStack_e8;
  lVar1 = lStack_f8;
  _objc_retain();
  lVar2 = lVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_104a432c8:
    _objc_msgSend(lVar1,PTR_s_lastAuthorizationResponse_1125ffae8);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1;
    puVar9 = PTR_s_idToken_1125d7148;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = uStack_d8;
    if (lVar13 != 0) goto LAB_104a43308;
  }
  else {
    lVar13 = lVar2;
    puVar9 = PTR_s_idToken_1125d7148;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar13 == 0) goto LAB_104a432c8;
LAB_104a43308:
    uVar5 = uStack_d8;
    lVar1 = lVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar13);
    _objc_release(lVar13);
    puVar6 = PTR_PTR_1126ae3c8;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar1,puVar9);
    _swift_bridgeObjectRelease(puVar9);
    _objc_msgSend(puVar6,PTR_s_initWithIDTokenString__1125e4560,lVar1);
    _objc_release(lVar1);
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      _objc_msgSend(puVar6,PTR_s_claims_1125ac090);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar9 = PTR___sypN_11034f1a8;
      puVar6 = puVar7;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (puVar7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                 PTR___ss11AnyHashableVSHsWP_11034e450);
      _objc_release(puVar7);
      puVar7 = puVar6;
      func_0x0001012254e8();
      _swift_bridgeObjectRelease(puVar6);
      if (puVar7 != (undefined *)0x0) {
        uVar3 = uStack_e0;
        if (*(long *)(puVar7 + 0x10) != 0) {
          _swift_bridgeObjectRetain(puVar7);
          lVar1 = 0x627573;
          uVar10 = 0;
          func_0x000100029284(0x627573);
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar7);
            uVar3 = uStack_e0;
          }
          else {
            func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar1 * 0x20,&puStack_a0);
            _swift_bridgeObjectRelease(puVar7);
            puVar8 = &uStack_b0;
            _swift_dynamicCast(puVar8,&puStack_a0,puVar9 + 8,PTR___sSSN_11034da80,6);
            uVar11 = uStack_a8;
            uVar4 = uStack_b0;
            uVar3 = uStack_e0;
            if (((ulong)puVar8 & 1) != 0) {
              _swift_bridgeObjectRelease(uStack_e0);
              uVar3 = uVar11;
              uVar5 = uVar4;
            }
          }
        }
        uVar11 = uStack_c8;
        uVar4 = uStack_d0;
        puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130a5270);
        *puVar8 = uVar5;
        puVar8[1] = uVar3;
        if (*(long *)(puVar7 + 0x10) != 0) {
          _swift_bridgeObjectRetain(puVar7);
          lVar1 = 0x6c69616d65;
          uVar10 = 0;
          func_0x000100029284(0x6c69616d65);
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar7);
          }
          else {
            func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar1 * 0x20,&puStack_a0);
            _swift_bridgeObjectRelease(puVar7);
            puVar8 = &uStack_b0;
            _swift_dynamicCast(puVar8,&puStack_a0,puVar9 + 8,PTR___sSSN_11034da80,6);
            uVar3 = uStack_a8;
            uVar5 = uStack_b0;
            if (((ulong)puVar8 & 1) != 0) {
              _swift_bridgeObjectRelease(uVar4);
              uVar11 = uVar5;
              uVar4 = uVar3;
            }
          }
        }
        puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130a5278);
        *puVar8 = uVar11;
        puVar8[1] = uVar4;
        if (*(long *)(puVar7 + 0x10) == 0) {
LAB_104a435cc:
          uStack_98 = 0;
          puStack_a0 = (undefined *)0x0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          _swift_bridgeObjectRetain(puVar7);
          lVar1 = 0x65765f6c69616d65;
          uVar10 = 0;
          func_0x000100029284(0x65765f6c69616d65);
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar7);
            goto LAB_104a435cc;
          }
          func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar1 * 0x20,&puStack_a0);
          _swift_bridgeObjectRelease(puVar7);
        }
        _swift_bridgeObjectRelease(puVar7);
        if (lStack_88 == 0) {
          func_0x000104a4494c(&puStack_a0,0x11309c428);
          uVar5 = uStack_c0;
          uVar3 = uStack_118;
        }
        else {
          puVar8 = &uStack_b0;
          _swift_dynamicCast(puVar8,&puStack_a0,puVar9 + 8,PTR___sSSN_11034da80,6);
          uVar5 = uStack_c0;
          uVar3 = uStack_118;
          if (((ulong)puVar8 & 1) != 0) {
            _swift_bridgeObjectRelease(uStack_c0);
            uVar5 = uStack_a8;
            uVar3 = uStack_b0;
          }
        }
        goto LAB_104a4347c;
      }
    }
  }
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130a5270);
  *puVar8 = uVar5;
  puVar8[1] = uStack_e0;
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130a5278);
  *puVar8 = uStack_c8;
  puVar8[1] = uStack_d0;
  uVar5 = uStack_c0;
  uVar3 = uStack_118;
LAB_104a4347c:
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_1130a5280);
  *puVar8 = uVar3;
  puVar8[1] = uVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a43628; end: 104a43653;  */

undefined8 FUN_104a43628(undefined8 param_1)

{
  FUN_104a440c0(param_1,&UNK_1107bf848);
  return param_1;
}



/* Entry: 104a43654; end: 104a43657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a43654(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a52c8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + _DAT_1130a52c8,auStack_38,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined **)(lVar3 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a43658; end: 104a43677;  */

void FUN_104a43658(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 104a43678; end: 104a4368f;  */

void FUN_104a43678(long param_1,long param_2)

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



/* Entry: 104a43690; end: 104a436ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a43690(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar1 = _DAT_1130a52c8;
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + _DAT_1130a52c8,auStack_78,0,0);
  lVar6 = *(long *)(lVar3 + lVar1);
  _swift_bridgeObjectRetain(lVar6);
  lVar9 = *(long *)(lVar6 + 0x10);
  if (lVar9 == 0) {
    lVar7 = 0;
    uVar4 = 1;
  }
  else {
    lVar7 = 0;
    uVar8 = lVar6 + 0x20;
    do {
      uVar2 = uVar8;
      FUN_104a42604(uVar8,unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff)));
      if ((uVar2 & 1) != 0) goto LAB_104a42210;
      lVar7 = lVar7 + 1;
      uVar8 = uVar8 + 0x40;
    } while (lVar9 != lVar7);
    lVar7 = 0;
LAB_104a42210:
    uVar4 = (uint)uVar2 ^ 1;
  }
  _swift_bridgeObjectRelease(lVar6);
  if ((uVar4 & 1) == 0) {
    _swift_beginAccess(lVar3 + lVar1,auStack_d8,0x21,0);
    FUN_104a449ec(auStack_c0,lVar7);
    _swift_endAccess(auStack_d8);
    FUN_104a43628(auStack_c0);
  }
  return;
}



/* Entry: 104a436f0; end: 104a438e3;  */

undefined * FUN_104a436f0(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar7 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar9,0xd00000000000002c,0x800000010f22d7a0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar1 = lVar9;
  (*pcVar10)(lVar9,1,lVar2);
  if ((int)lVar1 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x104a438e0);
    (*pcVar10)();
  }
  pcVar12 = *(code **)(lVar11 + 0x20);
  (*pcVar12)(lVar8 - extraout_x12_00,lVar9,lVar2);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar7,0xd00000000000002a,0x800000010f22d7d0);
  puVar3 = puVar7;
  (*pcVar10)(puVar7,1,lVar2);
  if ((int)puVar3 != 1) {
    (*pcVar12)(lVar8,puVar7,lVar2);
    puVar4 = PTR_PTR_1126ae348;
    _objc_allocWithZone(PTR_PTR_1126ae348);
    puVar5 = puVar4;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar6 = puVar5;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    _objc_msgSend(puVar4,PTR_s_initWithAuthorizationEndpoint_to_1125db060,puVar5,puVar6);
    _objc_release(puVar5);
    _objc_release(puVar6);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(lVar8,lVar2);
    (*pcVar10)(lVar8 - extraout_x12_00,lVar2);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x104a438e4);
  (*pcVar10)();
}



/* Entry: 104a438e4; end: 104a4391b;  */

void FUN_104a438e4(undefined8 param_1)

{
  if (lRam00000001130a5368 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8278d4);
  return;
}



/* Entry: 104a4391c; end: 104a4399b;  */

undefined8 FUN_104a4391c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104a438e4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104a4399c; end: 104a43bef;  */

uint FUN_104a4399c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  __s10Foundation10URLRequestVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  lVar2 = 0;
  FUN_104a438e4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_00;
  lVar3 = 0x1130a53a8;
  func_0x0001048db364();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar4 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)*(int *)(lVar3 + 0x30);
  FUN_104a4391c(param_1,lVar4);
  FUN_104a4391c(uStack_68,lVar4 + lVar11);
  lVar3 = lVar4;
  _swift_getEnumCaseMultiPayload(lVar4,lVar2);
  if ((int)lVar3 == 1) {
    FUN_104a4391c(lVar4,lVar9);
    lVar3 = lVar4 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar3,lVar2);
    if ((int)lVar3 != 1) {
LAB_104a43ba8:
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
      func_0x000104a4494c(lVar4,0x1130a53a8);
      uVar10 = 0;
      goto LAB_104a43bcc;
    }
    (**(code **)(lVar12 + 0x20))(puVar5,lVar4 + lVar11,lVar1);
    lVar3 = lVar9;
    __s10Foundation10URLRequestV2eeoiySbAC_ACtFZ(lVar9,puVar5);
    uVar10 = (uint)lVar3;
    pcVar7 = *(code **)(lVar12 + 8);
    (*pcVar7)(puVar5,lVar1);
    (*pcVar7)(lVar9,lVar1);
  }
  else {
    FUN_104a4391c(lVar4,lVar8);
    lVar3 = lVar4 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar3,lVar2);
    lVar9 = lVar8;
    if ((int)lVar3 == 1) goto LAB_104a43ba8;
    (**(code **)(lVar12 + 0x20))(lVar6,lVar4 + lVar11,lVar1);
    lVar3 = lVar8;
    __s10Foundation10URLRequestV2eeoiySbAC_ACtFZ(lVar8,lVar6);
    uVar10 = (uint)lVar3;
    pcVar7 = *(code **)(lVar12 + 8);
    (*pcVar7)(lVar6,lVar1);
    (*pcVar7)(lVar8,lVar1);
  }
  func_0x000104a43960(lVar4);
LAB_104a43bcc:
  return uVar10 & 1;
}



/* Entry: 104a43bf0; end: 104a43c1b;  */

void FUN_104a43bf0(void)

{
  func_0x000104a448cc(0x1130a52b8,FUN_104a438e4,&UNK_10dd4d7f0);
  return;
}



/* Entry: 104a43c1c; end: 104a43c1f;  */

void FUN_104a43c1c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a52c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d898;
  _swift_getWitnessTable(&UNK_10dd4d898,&UNK_1107bf7d0);
  puRam00000001130a52c0 = puVar1;
  return;
}



/* Entry: 104a43c20; end: 104a43c5f;  */

void FUN_104a43c20(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a52c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d898;
  _swift_getWitnessTable(&UNK_10dd4d898,&UNK_1107bf7d0);
  puRam00000001130a52c0 = puVar1;
  return;
}



/* Entry: 104a43c60; end: 104a43d07;  */

void FUN_104a43c60(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  lVar2 = *param_5;
  _swift_beginAccess(lVar1 + lVar2,auStack_48,0,0);
  lVar1 = lVar1 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  *param_1 = lVar1;
  return;
}



/* Entry: 104a43d08; end: 104a43d27;  */

void FUN_104a43d08(void)

{
  _objc_opt_self(&PTR_PTR_1129ecdf8);
  return;
}



/* Entry: 104a43d28; end: 104a43d4b;  */

void FUN_104a43d28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_lookUpClassMethod_11034f490)(param_1,param_2,&DAT_10e827890);
  return;
}



/* Entry: 104a43d4c; end: 104a43df7;  */

long * FUN_104a43d4c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(param_1,param_3,(int)plVar2 == 1);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104a43df8; end: 104a43e2b;  */

void FUN_104a43df8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
                    /* WARNING: Could not recover jumptable at 0x000104a43e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 104a43e2c; end: 104a4401b;  */

undefined8 FUN_104a43e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  _swift_storeEnumTagMultiPayload(param_1,param_3,(int)uVar1 == 1);
  return param_1;
}



/* Entry: 104a4401c; end: 104a4404b;  */

void FUN_104a4401c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104a44024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 104a4404c; end: 104a440af;  */

void FUN_104a4404c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation10URLRequestVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&lStack_30);
  }
  return;
}



/* Entry: 104a440b0; end: 104a440bf;  */

undefined1  [16] FUN_104a440b0(void)

{
  return ZEXT816(0x1107bf7d0);
}



/* Entry: 104a440c0; end: 104a44103;  */

void FUN_104a440c0(undefined8 *param_1)

{
  _objc_release(*param_1);
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    _swift_release(param_1[2]);
  }
  else {
    func_0x000100183ab8(param_1 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1[7]);
  return;
}



/* Entry: 104a44104; end: 104a4418f;  */

undefined8 * FUN_104a44104(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  bVar1 = *(byte *)(param_2 + 6);
  _objc_retain();
  if ((bVar1 & 1) == 0) {
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    _swift_retain();
  }
  else {
    lVar2 = param_2[4];
    param_1[4] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 1,param_2 + 1);
    param_1[5] = param_2[5];
  }
  *(byte *)(param_1 + 6) = bVar1;
  uVar3 = param_2[7];
  _swift_errorRetain(uVar3);
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 104a44190; end: 104a44257;  */

undefined8 * FUN_104a44190(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar3);
  if (param_1 != param_2) {
    FUN_104a44258(param_1 + 1);
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      uVar3 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = uVar3;
      *(undefined1 *)(param_1 + 6) = 0;
      _swift_retain();
    }
    else {
      lVar1 = param_2[4];
      param_1[4] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 1,param_2 + 1);
      param_1[5] = param_2[5];
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  uVar2 = param_1[7];
  uVar3 = param_2[7];
  _swift_errorRetain(uVar3);
  param_1[7] = uVar3;
  _swift_errorRelease(uVar2);
  return param_1;
}



/* Entry: 104a44258; end: 104a442ef;  */

undefined8 FUN_104a44258(undefined8 param_1)

{
  func_0x000104a44398(param_1,&UNK_1107bf8e8);
  return param_1;
}



/* Entry: 104a442f0; end: 104a443bf;  */

int FUN_104a442f0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104a443c0; end: 104a4458f;  */

undefined8 * FUN_104a443c0(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_2 + 10);
  if (1 < *(byte *)(param_2 + 10)) {
    uVar3 = *param_2 + 2;
  }
  if (uVar3 != 1) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar1;
    _swift_retain();
  }
  else {
    lVar2 = *(long *)(param_2 + 6);
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
    param_1[4] = *(undefined8 *)(param_2 + 8);
  }
  *(bool *)(param_1 + 5) = uVar3 == 1;
  return param_1;
}



/* Entry: 104a44590; end: 104a4466f;  */

int FUN_104a44590(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xff;
  }
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 104a44670; end: 104a446c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a44670(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a52c8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + _DAT_1130a52c8,auStack_38,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined **)(lVar3 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a446c4; end: 104a446cb;  */

void FUN_104a446c4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a446cc; end: 104a44747;  */

undefined8 FUN_104a446cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130a52b0;
  func_0x0001048db364();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104a44748; end: 104a44767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a44748(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000104a44714(unaff_x20 + 0x18,&uStack_80);
  lVar2 = _DAT_1130a52c8;
  _swift_beginAccess(lVar5 + _DAT_1130a52c8,auStack_98,0x21,0);
  uVar6 = *(ulong *)(lVar5 + lVar2);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar5 + lVar2) = uVar6;
  uVar4 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_104a45268(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(lVar5 + lVar2) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_104a45268(uVar6,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar1 = uVar6 + uVar3 * 0x40;
  *(undefined8 *)(lVar1 + 0x48) = uStack_58;
  *(undefined8 *)(lVar1 + 0x40) = uStack_60;
  *(undefined8 *)(lVar1 + 0x58) = uStack_48;
  *(undefined8 *)(lVar1 + 0x50) = uStack_50;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x20) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_68;
  *(undefined8 *)(lVar1 + 0x30) = uStack_70;
  *(ulong *)(lVar5 + lVar2) = uVar6;
  _swift_endAccess(auStack_98);
  return;
}



/* Entry: 104a44768; end: 104a447ab;  */

undefined8 FUN_104a44768(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104a447ac; end: 104a447b7;  */

void FUN_104a447ac(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1107bfbb0;
  _swift_allocObject(&UNK_1107bfbb0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  uStack_70 = 0x104a44804;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107bfbc8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  _swift_retain(uVar7);
  _objc_retain(uVar6);
  _objc_retain(uVar8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  func_0x000104a448cc(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar8 = 0x112d4af98;
  func_0x000104a4490c(0x112d4af98,0x11309c6f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar10,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,puVar10,ppuVar5);
  __Block_release(ppuVar5);
  (**(code **)(lStack_a8 + 8))(puVar10,lVar2);
  (**(code **)(lVar9 + 8))(lVar11,lVar3);
  _swift_release(puStack_68);
  return;
}



/* Entry: 104a447b8; end: 104a447f7;  */

void FUN_104a447b8(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104a447f8; end: 104a4480f;  */

void FUN_104a447f8(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  lVar5 = param_1;
  if (param_1 == 0) {
    _swift_errorRetain(lVar3);
    lVar5 = lVar3;
  }
  _swift_beginAccess(lVar1 + 0x10,auStack_58,1,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  *(long *)(lVar1 + 0x48) = lVar5;
  _swift_errorRetain(param_1);
  _swift_errorRelease(uVar4);
  (*pcVar2)();
  return;
}



/* Entry: 104a44810; end: 104a44987;  */

void FUN_104a44810(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    return;
  }
  lVar2 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState
            (0xff,(long)param_1 + (long)(int)lVar1,-(lVar1 >> 0x20),0,0);
  *param_1 = lVar2;
  return;
}



/* Entry: 104a44988; end: 104a449eb;  */

void FUN_104a44988(long param_1,long param_2)

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



/* Entry: 104a449ec; end: 104a44a7f;  */

void FUN_104a449ec(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_104a453e0();
  }
  if (param_2 < *(ulong *)(uVar4 + 0x10)) {
    lVar5 = *(ulong *)(uVar4 + 0x10) - 1;
    lVar1 = uVar4 + param_2 * 0x40;
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    param_1[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    param_1[5] = *(undefined8 *)(lVar1 + 0x48);
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    _memmove(lVar1 + 0x20,lVar1 + 0x60,(lVar5 - param_2) * 0x40);
    *(long *)(uVar4 + 0x10) = lVar5;
    *unaff_x20 = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a44a80);
  (*pcVar2)();
}



/* Entry: 104a44a80; end: 104a44abb; -[GTMOAuth2Compatibility init] */

void FUN_104a44a80(undefined8 param_1)

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



/* Entry: 104a44abc; end: 104a44abf;  */

/* WARNING: Removing unreachable block (ram,0x000104a46980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a44abc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long extraout_x8;
  undefined8 ****ppppuVar20;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 ***pppuVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 ***pppuVar28;
  long lVar29;
  undefined8 ****ppppuVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ***pppuStack_228;
  long lStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 ****ppppuStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  code *pcStack_1e0;
  undefined8 ***pppuStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  char *pcStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ****ppppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_1f0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1f0 + 0x40));
  lVar13 = (long)&uStack_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar22 = *(undefined8 ****)(param_1 + _DAT_1130a5260);
  pppuVar21 = pppuVar22;
  pppuVar14 = (undefined8 ***)PTR_s_refreshToken_112626fb0;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar21 == (undefined8 ***)0x0) {
    pppuVar28 = (undefined8 ***)0x0;
    pppuVar14 = (undefined8 ***)0x0;
  }
  else {
    pppuVar28 = pppuVar21;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(pppuVar21);
  }
  pppuVar21 = pppuVar22;
  _objc_msgSend(pppuVar22,PTR_s_lastTokenResponse_112600350);
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar29 - extraout_x12_00;
  lStack_1f8 = lVar13;
  lStack_1d0 = lVar29;
  lStack_1c8 = lVar5;
  if (pppuVar21 != (undefined8 ***)0x0) {
    pppuVar23 = pppuVar21;
    pppuVar25 = (undefined8 ***)PTR_s_accessToken_112598ce0;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar21);
    if (pppuVar23 != (undefined8 ***)0x0) {
      pppuVar21 = pppuVar23;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(pppuVar23);
      goto LAB_104a462c4;
    }
  }
  pppuVar21 = (undefined8 ***)0x0;
  pppuVar25 = (undefined8 ***)0x0;
LAB_104a462c4:
  ppppuVar30 = (undefined8 ****)0x11309caf0;
  func_0x0001048db364();
  _swift_initStackObject();
  ppppuVar30[3] = (undefined8 ***)0xe;
  ppppuVar30[2] = (undefined8 ***)0x7;
  ppppuVar30[4] = (undefined8 ***)0x5f68736572666572;
  ppppuVar30[5] = (undefined8 ***)0xed00006e656b6f74;
  ppppuVar30[6] = pppuVar28;
  ppppuVar30[7] = pppuVar14;
  ppppuVar30[8] = (undefined8 ***)0x745f737365636361;
  ppppuVar30[9] = (undefined8 ***)0xec0000006e656b6f;
  ppppuVar30[10] = pppuVar21;
  ppppuVar30[0xb] = pppuVar25;
  ppppuVar30[0xc] = (undefined8 ***)0x5065636976726573;
  ppppuVar30[0xd] = (undefined8 ***)0xef72656469766f72;
  pppuVar21 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5268))[1];
  ppppuVar30[0xe] = *(undefined8 ****)(param_1 + _DAT_1130a5268);
  ppppuVar30[0xf] = pppuVar21;
  ppppuVar30[0x10] = (undefined8 ***)0x444972657375;
  ppppuVar30[0x11] = (undefined8 ***)0xe600000000000000;
  pppuVar14 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5270))[1];
  ppppuVar30[0x12] = *(undefined8 ****)(param_1 + _DAT_1130a5270);
  ppppuVar30[0x13] = pppuVar14;
  ppppuVar30[0x14] = (undefined8 ***)0x69616d4572657375;
  ppppuVar30[0x15] = (undefined8 ***)0xe90000000000006c;
  pppuVar28 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5278))[1];
  ppppuVar30[0x16] = *(undefined8 ****)(param_1 + _DAT_1130a5278);
  ppppuVar30[0x17] = pppuVar28;
  ppppuVar30[0x18] = (undefined8 ***)0xd000000000000013;
  ppppuVar30[0x19] = (undefined8 ***)0x800000010f22d570;
  pppuVar23 = (undefined8 ***)((undefined8 *)(param_1 + _DAT_1130a5280))[1];
  ppppuVar30[0x1a] = *(undefined8 ****)(param_1 + _DAT_1130a5280);
  ppppuVar30[0x1b] = pppuVar23;
  ppppuVar30[0x1c] = (undefined8 ***)0x65706f6373;
  ppppuVar30[0x1d] = (undefined8 ***)0xe500000000000000;
  _swift_bridgeObjectRetain();
  pppuVar23 = (undefined8 ***)PTR_s_scope_112631b68;
  _swift_bridgeObjectRetain(pppuVar21);
  _swift_bridgeObjectRetain(pppuVar14);
  _swift_bridgeObjectRetain(pppuVar28);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar22 == (undefined8 ***)0x0) {
    pppuVar21 = (undefined8 ***)0x0;
    pppuVar23 = (undefined8 ***)0x0;
  }
  else {
    pppuVar21 = pppuVar22;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(pppuVar22);
  }
  ppppuVar30[0x1e] = pppuVar21;
  ppppuVar30[0x1f] = pppuVar23;
  ppppuVar6 = ppppuVar30;
  func_0x000101480964();
  _swift_setDeallocating(ppppuVar30);
  uVar7 = 0x11309caf8;
  func_0x0001048db364(0x11309caf8);
  _swift_arrayDestroy(ppppuVar30 + 4,7,uVar7);
  pppppuVar24 = (undefined8 *****)ppppuVar6[2];
  pppppuVar8 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar24 != (undefined8 *****)0x0) {
    pppppuVar8 = pppppuVar24;
    FUN_104a45368(pppppuVar24,0);
    pppppuVar9 = &ppppuStack_190;
    FUN_104a45eb0(pppppuVar9,pppppuVar8 + 4,pppppuVar24,ppppuVar6);
    pppuVar21 = pppuStack_188;
    _swift_bridgeObjectRetain(ppppuVar6);
    FUN_104a477b0(ppppuStack_190,pppuVar21,uStack_180,uStack_178,uStack_170);
    if (pppppuVar9 != pppppuVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a4651c);
      (*pcVar4)();
    }
  }
  ppppuStack_190 = pppppuVar8;
  FUN_104a453f4(&ppppuStack_190);
  ppppuVar30 = (undefined8 ****)ppppuStack_190[2];
  pppppuVar8 = (undefined8 *****)ppppuStack_190;
  ppppuVar15 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar30 == (undefined8 ****)0x0) {
LAB_104a468e0:
    _swift_bridgeObjectRelease(ppppuVar6);
    _swift_release(pppppuVar8);
    uVar7 = 0x11309c618;
    ppppuStack_190 = ppppuVar15;
    func_0x0001048db364(0x11309c618);
    uVar16 = uVar7;
    func_0x00010011d734();
    uVar17 = 0x26;
    uVar19 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,uVar7,uVar16);
    _swift_bridgeObjectRelease(ppppuVar15);
    uVar1 = uVar17 & 0xffffffffffff;
    if ((uVar19 & 0x2000000000000000) != 0) {
      uVar1 = uVar19 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(uVar19);
      uVar17 = 0;
      uVar19 = 0;
    }
    auVar31._8_8_ = uVar19;
    auVar31._0_8_ = uVar17;
    return auVar31;
  }
  ppppuVar20 = (undefined8 ****)0x0;
  ppppuStack_230 = ppppuStack_190 + 4;
  pppuStack_238 = (undefined8 ***)((long)ppppuVar30 + -1);
  uStack_248 = 4;
  uStack_250 = 2;
  ppppuStack_208 = ppppuStack_190;
  pcStack_1a8 = "@64@0:8@16@24@32@40@48^@56";
  pppuStack_218 = ppppuVar30;
  pppuStack_210 = ppppuVar6;
LAB_104a46584:
  pppppuVar24 = (undefined8 *****)(ppppuStack_230 + (long)ppppuVar20 * 4);
  pppppuVar8 = (undefined8 *****)ppppuStack_208;
  ppppuVar26 = ppppuVar20;
  pppuStack_228 = ppppuVar15;
  do {
    if (pppppuVar8[2] <= ppppuVar26) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a46980);
      (*pcVar4)();
    }
    if (ppppuVar6[2] != (undefined8 ***)0x0) {
      pppppuVar9 = (undefined8 *****)*pppppuVar24;
      ppppuVar15 = pppppuVar24[1];
      ppppuVar27 = pppppuVar24[3];
      _swift_bridgeObjectRetain(ppppuVar27);
      _swift_bridgeObjectRetain(ppppuVar6);
      _swift_bridgeObjectRetain(ppppuVar15);
      pppppuVar10 = pppppuVar9;
      ppppuVar20 = ppppuVar15;
      func_0x000100029284();
      if (((ulong)ppppuVar20 & 1) == 0) {
        _swift_bridgeObjectRelease(ppppuVar27);
        _swift_bridgeObjectRelease(ppppuVar15);
        ppppuVar15 = ppppuVar6;
      }
      else {
        ppppuStack_1b0 = (undefined8 ****)ppppuVar6[7][(long)pppppuVar10 * 2];
        ppppuVar20 = (undefined8 ****)(ppppuVar6[7] + (long)pppppuVar10 * 2)[1];
        pppuStack_1a0 = ppppuVar27;
        _swift_bridgeObjectRetain(ppppuVar20);
        _swift_bridgeObjectRelease(ppppuVar6);
        lVar5 = lStack_200;
        if (ppppuVar20 != (undefined8 ****)0x0) {
          pppuStack_1b8 = ppppuVar20;
          __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
                    (lStack_200,0xd000000000000013,(ulong)pcStack_1a8 | 0x8000000000000000);
          lVar13 = lStack_1f8;
          __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(lStack_1f8);
          lVar29 = lStack_1d0;
          __s10Foundation12CharacterSetV19symmetricDifferenceyA2CF(lStack_1d0,lVar5);
          lVar3 = lStack_1c8;
          pcVar4 = *(code **)(lStack_1f0 + 8);
          lVar11 = lVar13;
          (*pcVar4)(lVar13,lStack_1c8);
          pppuStack_1c0 = ppppuVar15;
          ppppuStack_190 = pppppuVar9;
          pppuStack_188 = ppppuVar15;
          func_0x000100e8b654();
          lVar12 = lVar29;
          ppppuVar30 = (undefined8 ****)PTR___sSSN_11034da80;
          lStack_1e8 = lVar11;
          __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF()
          ;
          lStack_220 = lVar12;
          (*pcVar4)(lVar29,lVar3);
          pcStack_1e0 = pcVar4;
          (*pcVar4)(lVar5,lVar3);
          pppuStack_1d8 = ppppuVar30;
          if (ppppuVar30 == (undefined8 ****)0x0) {
            _swift_bridgeObjectRelease(pppuStack_1a0);
            _swift_bridgeObjectRelease(pppuStack_1c0);
            ppppuVar30 = (undefined8 ****)pppuStack_1b8;
          }
          else {
            __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
                      (lVar5,0xd000000000000013,(ulong)pcStack_1a8 | 0x8000000000000000);
            __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(lVar13);
            lVar29 = lStack_1d0;
            __s10Foundation12CharacterSetV19symmetricDifferenceyA2CF(lStack_1d0,lVar5);
            lVar3 = lStack_1c8;
            pcVar4 = pcStack_1e0;
            (*pcStack_1e0)(lVar13,lStack_1c8);
            pppuVar21 = pppuStack_1b8;
            ppppuStack_190 = ppppuStack_1b0;
            pppuStack_188 = pppuStack_1b8;
            lVar13 = lVar29;
            puVar18 = PTR___sSSN_11034da80;
            __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                      (lVar29,PTR___sSSN_11034da80,lStack_1e8);
            (*pcVar4)(lVar29,lVar3);
            (*pcVar4)(lVar5,lVar3);
            _swift_bridgeObjectRelease(pppuVar21);
            if (puVar18 != (undefined *)0x0) break;
            _swift_bridgeObjectRelease(pppuStack_1a0);
            _swift_bridgeObjectRelease(pppuStack_1c0);
            ppppuVar30 = (undefined8 ****)pppuStack_1d8;
          }
          _swift_bridgeObjectRelease(ppppuVar30);
          pppppuVar8 = (undefined8 *****)ppppuStack_208;
          ppppuVar6 = (undefined8 ****)pppuStack_210;
          ppppuVar30 = (undefined8 ****)pppuStack_218;
          goto LAB_104a465ac;
        }
        _swift_bridgeObjectRelease(pppuStack_1a0);
      }
      _swift_bridgeObjectRelease(ppppuVar15);
    }
LAB_104a465ac:
    ppppuVar26 = (undefined8 ****)((long)ppppuVar26 + 1);
    pppppuVar24 = pppppuVar24 + 4;
    ppppuVar15 = (undefined8 ****)pppuStack_228;
    if (ppppuVar30 == ppppuVar26) goto LAB_104a468e0;
  } while( true );
  lVar5 = 0x11309c7e0;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x18) = uStack_248;
  *(undefined8 *)(lVar5 + 0x10) = uStack_250;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  lVar29 = lVar5;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x20) = lStack_220;
  *(undefined8 ****)(lVar5 + 0x28) = pppuStack_1d8;
  *(undefined **)(lVar5 + 0x60) = puVar2;
  *(long *)(lVar5 + 0x68) = lVar29;
  *(long *)(lVar5 + 0x40) = lVar29;
  *(long *)(lVar5 + 0x48) = lVar13;
  *(undefined **)(lVar5 + 0x50) = puVar18;
  pppuVar14 = (undefined8 ***)0x40253d4025;
  pppuVar22 = (undefined8 ***)0xe500000000000000;
  __sSS10FoundationE6format9argumentsS2Sh_Says7CVarArg_pGhtcfC
            (0x40253d4025,0xe500000000000000,lVar5);
  _swift_bridgeObjectRelease(pppuStack_1a0);
  _swift_bridgeObjectRelease(pppuStack_1c0);
  _swift_bridgeObjectRelease(lVar5);
  pppuVar21 = pppuStack_228;
  ppppuVar15 = (undefined8 ****)pppuStack_228;
  _swift_isUniquelyReferenced_nonNull_native();
  ppppuVar6 = (undefined8 ****)pppuStack_210;
  ppppuVar30 = (undefined8 ****)pppuStack_218;
  ppppuVar20 = (undefined8 ****)pppuVar21;
  if (((ulong)ppppuVar15 & 1) == 0) {
    ppppuVar20 = (undefined8 ****)0x0;
    func_0x0001000d182c(0,(long)pppuVar21[2] + 1,1,pppuVar21);
  }
  pppuVar21 = ppppuVar20[2];
  ppppuVar15 = ppppuVar20;
  if ((undefined8 ***)((ulong)ppppuVar20[3] >> 1) <= pppuVar21) {
    ppppuVar15 = (undefined8 ****)(ulong)((undefined8 ***)0x1 < ppppuVar20[3]);
    func_0x0001000d182c(ppppuVar15,(undefined8 ***)((long)pppuVar21 + 1U),1,ppppuVar20);
  }
  ppppuVar20 = (undefined8 ****)((long)ppppuVar26 + 1);
  ppppuVar15[2] = (undefined8 ***)((long)pppuVar21 + 1U);
  ppppuVar15[(long)pppuVar21 * 2 + 4] = pppuVar14;
  ppppuVar15[(long)pppuVar21 * 2 + 5] = pppuVar22;
  pppppuVar8 = (undefined8 *****)ppppuStack_208;
  if ((undefined8 ****)pppuStack_238 == ppppuVar26) goto LAB_104a468e0;
  goto LAB_104a46584;
}



/* Entry: 104a44ac0; end: 104a44c07; +[GTMOAuth2Compatibility persistenceResponseStringForAuthSession:] */

void FUN_104a44ac0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104a46168();
  _objc_release(param_3);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a44c08; end: 104a44c2b;  */

void FUN_104a44c08(void)

{
  FUN_104a46cd4();
  return;
}



/* Entry: 104a44c2c; end: 104a4506b;  */

undefined * FUN_104a44c2c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar14 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    uVar6 = 0x1130a53f0;
    func_0x0001048db364(0x1130a53f0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar13,uVar6);
    puVar14 = puVar13;
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar14);
  _swift_bridgeObjectRetain(param_1);
  lVar9 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar10 = lVar9 << 10 | LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) << 4;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar10);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar10);
      uVar10 = *puVar1;
      uVar3 = puVar1[1];
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar7);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      uVar8 = uVar10;
      uVar11 = uVar3;
      func_0x000100029284();
      if ((uVar11 & 1) == 0) {
        if (*(ulong *)(puVar14 + 0x18) <= *(ulong *)(puVar14 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a44e2c);
          (*pcVar4)();
        }
        uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar14 + uVar11 + 0x40) =
             *(ulong *)(puVar14 + uVar11 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar10;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 8) = uVar6;
        if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a44e30);
          (*pcVar4)();
        }
        *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x10);
        uVar11 = puVar1[1];
        *puVar1 = uVar10;
        puVar1[1] = uVar3;
        _swift_bridgeObjectRelease(uVar11);
        uVar7 = *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 8) = uVar6;
        _objc_release(uVar7);
      }
    }
    bVar5 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a44e28);
      (*pcVar4)();
    }
    if ((long)(uVar12 + 0x3f >> 6) <= lVar9) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar9];
  }
  _swift_release(puVar14);
  _swift_release(param_1);
  return puVar14;
}



/* Entry: 104a4506c; end: 104a4522f; +[GTMOAuth2Compatibility authSessionForPersistenceString:tokenURL:redirectURI:clientID:clientSecret:error:] */

/* WARNING: Removing unreachable block (ram,0x000104a45168) */
/* WARNING: Removing unreachable block (ram,0x000104a45204) */
/* WARNING: Removing unreachable block (ram,0x000104a451a0) */

void FUN_104a4506c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar1 = 0;
  uStack_78 = param_8;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + lVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar2 = param_2;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar5,param_4);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  if (param_7 == 0) {
    param_7 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  *(undefined8 *)((long)auStack_90 + lVar1) = uVar6;
  FUN_104a46cd4(param_3,param_2,puVar5,param_5,uVar2,param_6,uVar3,param_7);
  (**(code **)(lVar4 + 8))(puVar5,lStack_70);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104a45230; end: 104a45263;  */

void FUN_104a45230(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


