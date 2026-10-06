/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048db670; end: 1048db777;  */

void FUN_1048db670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x11309c318;
  func_0x0001048db7d0(0x11309c318,FUN_1048db924,&UNK_10dd46f00);
  uVar2 = 0x11309c348;
  func_0x0001048db7d0(0x11309c348,FUN_1048db924,&UNK_10dd46e74);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1048db778; end: 1048db83b;  */

void FUN_1048db778(void)

{
  func_0x0001048db7d0(0x11309c2f0,FUN_1048db43c,&UNK_10dd46ca0);
  return;
}



/* Entry: 1048db83c; end: 1048db8b3;  */

undefined8 FUN_1048db83c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 1048db8b4; end: 1048db923;  */

undefined1 * FUN_1048db8b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,param_1);
  puVar2 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Entry: 1048db924; end: 1048dba13;  */

void FUN_1048db924(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107b6318;
  if (lRam000000011309c328 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011309c328 = param_1;
  }
  return;
}



/* Entry: 1048dba14; end: 1048dba77;  */

void FUN_1048dba14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1048dba78; end: 1048dbb7b;  */

undefined1  [16] FUN_1048dba78(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1048dbb7c; end: 1048dbcc7;  */

undefined * FUN_1048dbb7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126add08;
  _swift_getInitializedObjCClass();
  puVar2 = (undefined *)0x6d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d,0xe100000000000000);
  uVar3 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f219cd0);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100214a84();
  _swift_release(puVar5);
  puVar5 = puVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar4);
  uStack_50 = 0;
  _objc_msgSend(puVar1,PTR_s_unversionedFacebookURLWithHostPr_11267e558,puVar2,uVar3,puVar5,
                &uStack_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar5);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(param_1,puVar1);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_1048dbcc8;
  puStack_80 = puVar1;
  uStack_78 = uVar3;
  puStack_70 = puVar2;
  uStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _swift_allocObject(puVar2,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = 0xd00000000000001b;
  *(undefined8 *)(puVar2 + 0x18) = 0x800000010f219d00;
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000019;
  *(undefined8 *)(puVar2 + 0x28) = 0x800000010f219d20;
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar6 = (undefined8 *)(puVar2 + 0x30);
  *puVar6 = puVar4;
  _swift_beginAccess(puVar6,auStack_98,1,0);
  *puVar6 = puVar5;
  _objc_release(puVar4);
  return puVar2;
}



/* Entry: 1048dbcc8; end: 1048dbdbb;  */

long FUN_1048dbcc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined1 auStack_48 [24];
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd00000000000001b;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010f219d00;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f219d20;
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar3 = puVar2;
  _swift_beginAccess(puVar3,auStack_48,1,0);
  *puVar3 = param_1;
  _objc_release(puVar2);
  return unaff_x20;
}



/* Entry: 1048dbdbc; end: 1048dc5df;  */

void FUN_1048dbdbc(undefined *param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  
  lVar6 = 0;
  __sSS10FoundationE8EncodingVMa();
  lStack_d0 = *(long *)(lVar6 + -8);
  puStack_e0 = auStack_110 + -(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_88 = 0x2e;
      uStack_80 = 0xe100000000000000;
      lStack_a0 = lVar6;
      puStack_78 = param_1;
      uStack_70 = param_2;
      func_0x000100e8b654();
      puVar7 = &uStack_88;
      lStack_a8 = lVar6;
      __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
                (puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar6,lVar6);
      if (puVar7[2] == 3) {
        puStack_b0 = (undefined *)puVar7[4];
        uVar1 = puVar7[5];
        lVar6 = puVar7[6];
        uVar2 = puVar7[7];
        uStack_f0 = puVar7[8];
        uVar12 = puVar7[9];
        uStack_e8 = param_6;
        uStack_c8 = param_8;
        _swift_bridgeObjectRetain(uVar1);
        _swift_bridgeObjectRetain_n(uVar2,2);
        uStack_c0 = uVar12;
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRelease(puVar7);
        FUN_1049ab534(0);
        _swift_bridgeObjectRetain(param_4);
        lStack_d8 = lVar6;
        FUN_1049a8eb0(lVar6,uVar2,param_3,param_4);
        func_0x0001048ddc94(0);
        _swift_allocObject();
        _swift_bridgeObjectRetain(uVar1);
        puVar8 = puStack_b0;
        FUN_1048dd748(puStack_b0,uVar1);
        uVar15 = uStack_c8;
        uVar12 = uVar2;
        uVar16 = uVar1;
        uVar17 = uStack_c0;
        lStack_b8 = lVar6;
        if ((lVar6 == 0) ||
           (uVar12 = uStack_c0, uVar16 = uVar2, uVar17 = uVar1, uStack_100 = uVar1,
           uStack_f8 = uVar2, puVar8 == (undefined *)0x0)) {
          _swift_bridgeObjectRelease(uVar12);
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar17);
          (*param_7)(0);
        }
        else {
          uStack_108 = *(undefined8 *)(puVar8 + 0x10);
          uVar3 = *(undefined8 *)(puVar8 + 0x18);
          puVar9 = &UNK_1107b63f8;
          _swift_allocObject(&UNK_1107b63f8,0x50,7);
          uVar4 = uStack_e8;
          *(undefined **)(puVar9 + 0x10) = param_1;
          *(ulong *)(puVar9 + 0x18) = param_2;
          *(ulong *)(puVar9 + 0x20) = param_3;
          *(ulong *)(puVar9 + 0x28) = param_4;
          *(undefined8 *)(puVar9 + 0x30) = param_5;
          *(undefined8 *)(puVar9 + 0x38) = uStack_e8;
          *(code **)(puVar9 + 0x40) = param_7;
          *(undefined8 *)(puVar9 + 0x48) = uVar15;
          puVar10 = PTR_PTR_1126add10;
          _swift_getInitializedObjCClass();
          _swift_bridgeObjectRetain(param_4);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(param_2);
          _swift_bridgeObjectRetain(uVar4);
          _swift_retain(uVar15);
          _swift_retain(puVar8);
          uVar1 = uStack_c0;
          uVar15 = uStack_f0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f0,uStack_c0);
          _swift_bridgeObjectRelease(uVar1);
          puVar11 = puVar10;
          puVar18 = PTR_s_base64FromBase64Url__1125250d8;
          _objc_msgSend(puVar10,PTR_s_base64FromBase64Url__1125250d8,uVar15);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          if (puVar11 == (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(puVar18);
          }
          puVar18 = PTR_s_decodeAsData__1125b74b8;
          _objc_msgSend(puVar10,PTR_s_decodeAsData__1125b74b8,puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          lVar6 = lStack_d0;
          if (puVar10 == (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            puVar18 = (undefined *)0xf000000000000000;
          }
          else {
            puVar11 = puVar10;
            __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
            _objc_release(puVar10);
          }
          puStack_78 = puStack_b0;
          uStack_70 = uStack_100;
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          uVar1 = uStack_f8;
          __sSS6appendyySSF(lStack_d8,uStack_f8);
          _swift_bridgeObjectRelease(uVar1);
          uVar1 = uStack_70;
          puVar5 = puStack_e0;
          __sSS10FoundationE8EncodingV5asciiACvgZ(puStack_e0);
          uVar15 = 0;
          puVar13 = puVar5;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (puVar5,0,PTR___sSSN_11034da80,lStack_a8);
          (**(code **)(lVar6 + 8))(puVar5,lStack_a0);
          _swift_bridgeObjectRelease(uVar1);
          puVar10 = &UNK_1107b6420;
          _swift_allocObject(&UNK_1107b6420,0x40,7);
          *(undefined **)(puVar10 + 0x10) = puVar11;
          *(undefined **)(puVar10 + 0x18) = puVar18;
          *(undefined1 **)(puVar10 + 0x20) = puVar13;
          *(undefined8 *)(puVar10 + 0x28) = uVar15;
          *(code **)(puVar10 + 0x30) = FUN_1048dd540;
          *(undefined **)(puVar10 + 0x38) = puVar9;
          puVar14 = &UNK_1107b6448;
          _swift_allocObject(&UNK_1107b6448,0x20,7);
          *(code **)(puVar14 + 0x10) = FUN_1048dd570;
          *(undefined **)(puVar14 + 0x18) = puVar10;
          func_0x000100de78a0(puVar11,puVar18);
          func_0x000100de78a0(puVar13,uVar15);
          _swift_retain(puVar9);
          _swift_retain(puVar10);
          FUN_1048dcae4(uStack_108,uVar3,0x1048dd574,puVar14);
          _swift_release(puVar10);
          _swift_release(puVar14);
          func_0x0001000b44c0(puVar13,uVar15);
          func_0x0001000b44c0(puVar11,puVar18);
          _swift_release_n(puVar8,2);
          _swift_bridgeObjectRelease(uVar3);
          puVar8 = puVar9;
        }
        _swift_release(puVar8);
        _objc_release(lStack_b8);
        return;
      }
      _swift_bridgeObjectRelease();
    }
  }
  (*param_7)(0);
  return;
}



/* Entry: 1048dc5e0; end: 1048dc6df;  */

void FUN_1048dc5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_1107b6548;
  _swift_allocObject(&UNK_1107b6548,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  uStack_60 = 0x1048dd6ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1107b6560;
  puStack_58 = puVar1;
  __Block_copy(&puStack_80);
  puVar1 = puStack_58;
  _objc_retain(param_1);
  func_0x000100de78a0(param_2,param_3);
  func_0x000100de78a0(param_4,param_5);
  _swift_retain(param_7);
  _swift_release(puVar1);
  func_0x000104938910(ppuVar2);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 1048dc6e0; end: 1048dc8bf;  */

void FUN_1048dc6e0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  code *param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_68;
  
  if (((param_1 != 0) && (param_3 >> 0x3c < 0xf)) && (param_5 >> 0x3c < 0xf)) {
    _objc_retain();
    func_0x000100de78a0(param_2,param_3);
    func_0x000100de78a0(param_4,param_5);
    lVar1 = param_1;
    _SecKeyGetBlockSize(param_1);
    lVar2 = 0x20;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x20,PTR___ss5UInt8VN_11034eef8);
    *(undefined8 *)(lVar2 + 0x10) = 0x20;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    lStack_68 = lVar2;
    func_0x000100de78a0(param_4,param_5);
    FUN_1048dd32c(param_4,param_5,param_4,param_5,&lStack_68);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x00010006c00c(param_2,param_3);
    uVar6 = param_2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
    _objc_msgSend(puVar3,PTR_s_initWithData__1125dfa60,uVar6);
    _objc_release(uVar6);
    func_0x0001000b44c0(param_2,param_3);
    lVar2 = lStack_68;
    uVar6 = *(undefined8 *)(lStack_68 + 0x10);
    puVar4 = puVar3;
    _objc_retainAutorelease(puVar3);
    _objc_msgSend();
    lVar5 = param_1;
    _SecKeyRawVerify(param_1,0x8004,lVar2 + 0x20,uVar6,puVar4,lVar1);
    (*param_6)((int)lVar5 == 0);
    _objc_release(param_1);
    func_0x0001000b44c0(param_2,param_3);
    func_0x0001000b44c0(param_4,param_5);
    _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  (*param_6)(0);
  return;
}



/* Entry: 1048dc8c0; end: 1048dc993;  */

void FUN_1048dc8c0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar7 = param_4 >> 0x30 & 0xff;
      goto LAB_1048dc934;
    }
    iVar6 = (int)((ulong)param_3 >> 0x20);
    if (SBORROW4(iVar6,(int)param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dc994);
      (*pcVar2)();
    }
    uVar7 = (ulong)(iVar6 - (int)param_3);
  }
  else {
    if (uVar5 != 2) {
      uVar7 = 0;
      goto LAB_1048dc934;
    }
    uVar7 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dc910);
      (*pcVar2)();
    }
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dc990);
    (*pcVar2)();
  }
  if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dc930);
    (*pcVar2)();
  }
LAB_1048dc934:
  uVar8 = *param_5;
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_5 = uVar8;
  uVar4 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    func_0x0001014d97ac(0,*(undefined8 *)(uVar8 + 0x10),0,uVar8);
  }
  *param_5 = uVar4;
  _CC_SHA256(param_1,uVar7,uVar4 + 0x20);
  return;
}



/* Entry: 1048dc994; end: 1048dcae3;  */

void FUN_1048dc994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107b64c0;
  _swift_allocObject(&UNK_1107b64c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _swift_retain(param_4);
  FUN_1048dcae4(param_1,param_2,0x1048dd6d0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1048dcae4; end: 1048dd117;  */

void FUN_1048dcae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  puVar7 = auStack_b0 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar6 = (long)puVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1048dbb7c(puVar7);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (lVar6,0x404e000000000000,puVar7,0);
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = uVar8;
  _swift_unknownObjectRetain(uVar8);
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  puVar3 = &UNK_1107b64e8;
  _swift_allocObject(&UNK_1107b64e8,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(long *)(puVar3 + 0x30) = unaff_x20;
  pcStack_88 = FUN_1048dd634;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1048dd118;
  puStack_90 = &UNK_1107b6500;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar3;
  __Block_copy(ppuVar4);
  puVar3 = puStack_80;
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_2);
  _swift_retain();
  _swift_release(puVar3);
  uVar5 = uVar8;
  _objc_msgSend(uVar8,PTR_s_fb_dataTaskWithRequest_completio_1125c5f28,uVar2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(uVar8);
  __Block_release(ppuVar4);
  _objc_release(uVar2);
  _objc_msgSend(uVar5,PTR_s_fb_resume_1125c5f78);
  _swift_unknownObjectRelease(uVar5);
  (**(code **)(lVar9 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 1048dd118; end: 1048dd1df;  */

void FUN_1048dd118(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    _swift_retain(uVar2);
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar6 = param_2;
    _swift_retain(uVar2);
    lVar3 = param_2;
    _objc_retain(param_2);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    _objc_release(lVar3);
  }
  uVar4 = param_3;
  _objc_retain(param_3);
  uVar5 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,lVar6,param_3,param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x0001000b44c0(param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1048dd1e0; end: 1048dd227;  */

void FUN_1048dd1e0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1048dd228; end: 1048dd25b;  */

undefined8 FUN_1048dd228(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1048dd25c();
  return unaff_x20;
}



/* Entry: 1048dd25c; end: 1048dd30b;  */

void FUN_1048dd25c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd00000000000001b;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010f219d00;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f219d20;
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  return;
}



/* Entry: 1048dd30c; end: 1048dd32b;  */

void FUN_1048dd30c(void)

{
  FUN_1048dbdbc();
  return;
}



/* Entry: 1048dd32c; end: 1048dd53f;  */

void FUN_1048dd32c(undefined8 param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)(param_3 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar7 = (long)(int)param_2;
      puVar5 = (undefined1 *)(((long)param_2 >> 0x20) - lVar7);
      if ((long)param_2 >> 0x20 < lVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dd530);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar4 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar7,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dd53c);
          (*pcVar3)();
        }
        param_2 = param_2 + (lVar7 - (long)puVar4);
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)puVar5 <= (long)puVar4) {
        puVar4 = puVar5;
      }
LAB_1048dd49c:
      puVar5 = (undefined1 *)0x0;
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = puVar4 + (long)param_2;
      }
      goto LAB_1048dd4dc;
    }
    auStack_78[0] = SUB81(param_2,0);
    auStack_78[1] = (undefined1)((ulong)param_2 >> 8);
    auStack_78[2] = (undefined1)((ulong)param_2 >> 0x10);
    auStack_78[3] = (undefined1)((ulong)param_2 >> 0x18);
    auStack_78[4] = (undefined1)((ulong)param_2 >> 0x20);
    auStack_78[5] = (undefined1)((ulong)param_2 >> 0x28);
    auStack_78[6] = (undefined1)((ulong)param_2 >> 0x30);
    auStack_78[7] = (undefined1)((ulong)param_2 >> 0x38);
    auStack_78[8] = (undefined1)param_3;
    auStack_78[9] = (undefined1)(param_3 >> 8);
    auStack_78[10] = (undefined1)(param_3 >> 0x10);
    auStack_78[0xb] = (undefined1)(param_3 >> 0x18);
    auStack_78[0xc] = (undefined1)(param_3 >> 0x20);
    auStack_78[0xd] = (undefined1)(param_3 >> 0x28);
    puVar5 = auStack_78 + (param_3 >> 0x30 & 0xff);
  }
  else {
    if (uVar6 == 2) {
      lVar7 = *(long *)(param_2 + 0x10);
      lVar1 = *(long *)(param_2 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar4 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar7,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dd538);
          (*pcVar3)();
        }
        param_2 = param_2 + (lVar7 - (long)puVar4);
      }
      puVar5 = (undefined1 *)(lVar1 - lVar7);
      if (SBORROW8(lVar1,lVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dd534);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)puVar5 <= (long)puVar4) {
        puVar4 = puVar5;
      }
      goto LAB_1048dd49c;
    }
    auStack_78[8] = 0;
    auStack_78[9] = 0;
    auStack_78[10] = 0;
    auStack_78[0xb] = 0;
    auStack_78[0xc] = 0;
    auStack_78[0xd] = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[4] = 0;
    auStack_78[5] = 0;
    auStack_78[6] = 0;
    auStack_78[7] = 0;
    puVar5 = auStack_78;
  }
  param_2 = auStack_78;
LAB_1048dd4dc:
  FUN_1048dc8c0(param_1,param_2,puVar5,param_4,param_5,param_6);
  func_0x00010006c090(param_4,param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001048dc25c();
    return;
  }
  return;
}



/* Entry: 1048dd540; end: 1048dd56f;  */

void FUN_1048dd540(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001048dc25c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1048dd570; end: 1048dd57b;  */

void FUN_1048dd570(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar8 = &puStack_80;
  puVar7 = &UNK_1107b6548;
  _swift_allocObject(&UNK_1107b6548,0x48,7);
  *(undefined8 *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  *(undefined8 *)(puVar7 + 0x38) = uVar3;
  *(undefined8 *)(puVar7 + 0x40) = uVar6;
  uStack_60 = 0x1048dd6ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1107b6560;
  puStack_58 = puVar7;
  __Block_copy(&puStack_80);
  puVar7 = puStack_58;
  _objc_retain(param_1);
  func_0x000100de78a0(uVar1,uVar4);
  func_0x000100de78a0(uVar2,uVar5);
  _swift_retain(uVar6);
  _swift_release(puVar7);
  func_0x000104938910(ppuVar8);
  __Block_release(ppuVar8);
  return;
}



/* Entry: 1048dd57c; end: 1048dd5cf;  */

void FUN_1048dd57c(void)

{
  long unaff_x20;
  
  if (*(ulong *)(unaff_x20 + 0x18) >> 0x3c < 0xf) {
    func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10));
  }
  if (*(ulong *)(unaff_x20 + 0x28) >> 0x3c < 0xf) {
    func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1048dd5d0; end: 1048dd5df;  */

void FUN_1048dd5d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar8 = &puStack_80;
  puVar7 = &UNK_1107b6548;
  _swift_allocObject(&UNK_1107b6548,0x48,7);
  *(undefined8 *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  *(undefined8 *)(puVar7 + 0x38) = uVar3;
  *(undefined8 *)(puVar7 + 0x40) = uVar6;
  uStack_60 = 0x1048dd6ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1107b6560;
  puStack_58 = puVar7;
  __Block_copy(&puStack_80);
  puVar7 = puStack_58;
  _objc_retain(param_1);
  func_0x000100de78a0(uVar1,uVar4);
  func_0x000100de78a0(uVar2,uVar5);
  _swift_retain(uVar6);
  _swift_release(puVar7);
  func_0x000104938910(ppuVar8);
  __Block_release(ppuVar8);
  return;
}



/* Entry: 1048dd5e0; end: 1048dd633;  */

void FUN_1048dd5e0(code *param_1,code *param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001048dd630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1048dd634; end: 1048dd65f;  */

void FUN_1048dd634(void)

{
  func_0x0001048dccb8();
  return;
}



/* Entry: 1048dd660; end: 1048dd6a3;  */

void FUN_1048dd660(long param_1,long param_2)

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



/* Entry: 1048dd6a4; end: 1048dd6bf;  */

void FUN_1048dd6a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048dd6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Entry: 1048dd6c0; end: 1048dd6c7;  */

void FUN_1048dd6c0(long param_1,long param_2)

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



/* Entry: 1048dd6c8; end: 1048dd6d3;  */

void FUN_1048dd6c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar8 = &puStack_80;
  puVar7 = &UNK_1107b6548;
  _swift_allocObject(&UNK_1107b6548,0x48,7);
  *(undefined8 *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  *(undefined8 *)(puVar7 + 0x38) = uVar3;
  *(undefined8 *)(puVar7 + 0x40) = uVar6;
  uStack_60 = 0x1048dd6ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1107b6560;
  puStack_58 = puVar7;
  __Block_copy(&puStack_80);
  puVar7 = puStack_58;
  _objc_retain(param_1);
  func_0x000100de78a0(uVar1,uVar4);
  func_0x000100de78a0(uVar2,uVar5);
  _swift_retain(uVar6);
  _swift_release(puVar7);
  func_0x000104938910(ppuVar8);
  __Block_release(ppuVar8);
  return;
}



/* Entry: 1048dd6d4; end: 1048dd71b;  */

void FUN_1048dd6d4(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_1048dd748(param_1,param_2);
  return;
}



/* Entry: 1048dd71c; end: 1048dd747;  */

undefined1  [16] FUN_1048dd71c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1048dd748; end: 1048ddc53;  */

undefined * FUN_1048dd748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *unaff_x20;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126add10;
  _swift_getInitializedObjCClass();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  puVar4 = puVar3;
  puVar11 = PTR_s_base64FromBase64Url__1125250d8;
  _objc_msgSend(puVar3,PTR_s_base64FromBase64Url__1125250d8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar11);
  }
  puVar11 = PTR_s_decodeAsData__1125b74b8;
  _objc_msgSend(puVar3,PTR_s_decodeAsData__1125b74b8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar3;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    _swift_getInitializedObjCClass();
    puVar4 = puVar5;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar5,puVar11);
    puStack_90 = (undefined *)0x0;
    _objc_msgSend(puVar3,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar4,1,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puStack_90;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = puStack_90;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar3);
      _swift_willThrow();
      func_0x00010006c090(puVar5,puVar11);
      _swift_errorRelease(puVar4);
    }
    else {
      _objc_retain();
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_90,puVar3);
      _swift_unknownObjectRelease(puVar3);
      uVar6 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      puVar1 = PTR___sypN_11034f1a8;
      ppuVar7 = &puStack_a8;
      _swift_dynamicCast(ppuVar7,&puStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
      puVar4 = puStack_a8;
      if (((ulong)ppuVar7 & 1) == 0) {
LAB_1048ddbf0:
        func_0x00010006c090(puVar5,puVar11);
        puVar4 = puVar3;
      }
      else {
        if (*(long *)(puStack_a8 + 0x10) == 0) {
LAB_1048dda30:
          func_0x00010006c090(puVar5,puVar11);
        }
        else {
          _swift_bridgeObjectRetain(puStack_a8);
          lVar8 = 0x676c61;
          uVar12 = 0;
          func_0x000100029284(0x676c61);
          if ((uVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar4);
            goto LAB_1048dda30;
          }
          func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar8 * 0x20,&puStack_90);
          _swift_bridgeObjectRelease(puVar4);
          ppuVar7 = &puStack_a8;
          _swift_dynamicCast(ppuVar7,&puStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          puVar2 = puStack_a0;
          puVar3 = puStack_a8;
          if (((ulong)ppuVar7 & 1) == 0) goto LAB_1048dda30;
          if (*(long *)(puVar4 + 0x10) == 0) {
LAB_1048dda50:
            func_0x00010006c090(puVar5,puVar11);
            puVar9 = puVar4;
LAB_1048dda60:
            _swift_bridgeObjectRelease(puVar9);
            _swift_bridgeObjectRelease(puVar2);
            goto LAB_1048ddbfc;
          }
          _swift_bridgeObjectRetain(puVar4);
          lVar8 = 0x707974;
          uVar12 = 0;
          func_0x000100029284(0x707974);
          if ((uVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar4);
            goto LAB_1048dda50;
          }
          func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar8 * 0x20,&puStack_90);
          _swift_bridgeObjectRelease(puVar4);
          ppuVar7 = &puStack_a8;
          _swift_dynamicCast(ppuVar7,&puStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          puVar9 = puStack_a0;
          puVar10 = puStack_a8;
          if (((ulong)ppuVar7 & 1) != 0) {
            if (*(long *)(puVar4 + 0x10) == 0) {
LAB_1048dda90:
              uStack_88 = 0;
              puStack_90 = (undefined *)0x0;
              lStack_78 = 0;
              uStack_80 = 0;
            }
            else {
              _swift_bridgeObjectRetain(puVar4);
              lVar8 = 0x64696b;
              uVar12 = 0;
              func_0x000100029284(0x64696b);
              if ((uVar12 & 1) == 0) {
                _swift_bridgeObjectRelease(puVar4);
                goto LAB_1048dda90;
              }
              func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar8 * 0x20,&puStack_90);
              _swift_bridgeObjectRelease(puVar4);
            }
            _swift_bridgeObjectRelease(puVar4);
            if (lStack_78 == 0) {
              func_0x00010006c090(puVar5,puVar11);
              _swift_bridgeObjectRelease(puVar9);
              _swift_bridgeObjectRelease(puVar2);
              func_0x00010006e7f4(&puStack_90);
              goto LAB_1048ddbfc;
            }
            ppuVar7 = &puStack_a8;
            _swift_dynamicCast(ppuVar7,&puStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            if (((ulong)ppuVar7 & 1) != 0) {
              if ((puVar3 == (undefined *)0x3635325352) &&
                 (puVar2 == (undefined *)0xe500000000000000)) {
                _swift_bridgeObjectRelease(0xe500000000000000);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (puVar3,puVar2,0x3635325352,0xe500000000000000,0);
                _swift_bridgeObjectRelease(puVar2);
                if (((ulong)puVar3 & 1) == 0) {
                  _swift_bridgeObjectRelease(puVar9);
                  _swift_bridgeObjectRelease(puStack_a0);
                  puVar3 = puStack_a0;
                  goto LAB_1048ddbf0;
                }
              }
              puVar4 = puStack_a0;
              if ((puVar10 == (undefined *)0x54574a) && (puVar9 == (undefined *)0xe300000000000000))
              {
                func_0x00010006c090(puVar5,puVar11);
                _swift_bridgeObjectRelease(0xe300000000000000);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (puVar10,puVar9,0x54574a,0xe300000000000000,0);
                func_0x00010006c090(puVar5,puVar11);
                _swift_bridgeObjectRelease(puVar9);
                if (((ulong)puVar10 & 1) == 0) goto LAB_1048dda3c;
              }
              uVar12 = (ulong)puStack_a8 & 0xffffffffffff;
              if (((ulong)puStack_a0 & 0x2000000000000000) != 0) {
                uVar12 = (ulong)puStack_a0 >> 0x38 & 0xf;
              }
              if (uVar12 != 0) {
                *(undefined **)(unaff_x20 + 0x10) = puStack_a8;
                *(undefined **)(unaff_x20 + 0x18) = puStack_a0;
                goto LAB_1048ddc14;
              }
              goto LAB_1048dda3c;
            }
            func_0x00010006c090(puVar5,puVar11);
            goto LAB_1048dda60;
          }
          func_0x00010006c090(puVar5,puVar11);
          _swift_bridgeObjectRelease(puVar2);
        }
LAB_1048dda3c:
        _swift_bridgeObjectRelease(puVar4);
      }
    }
  }
LAB_1048ddbfc:
  _swift_deallocPartialClassInstance();
  unaff_x20 = (undefined *)0x0;
LAB_1048ddc14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  _swift_bridgeObjectRelease(*(undefined8 *)(puVar4 + 0x18));
  return puVar4;
}



/* Entry: 1048ddc54; end: 1048ddcbf;  */

void FUN_1048ddc54(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1048ddcc0; end: 1048ddcc7;  */

void FUN_1048ddcc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048ddcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Entry: 1048ddcc8; end: 1048ddd47;  */

undefined1  [16] FUN_1048ddcc8(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar8);
  puVar1 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar1,uVar6,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 3 & 0xfffffffffffff8)) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar3 = param_1;
      puVar4 = puVar1;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      _swift_bridgeObjectRelease(puVar1);
      _swift_bridgeObjectRelease(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 3 & 0xfffffffffffff8)) >> (uVar7 & 0x3f) & 1) == 0
         )) goto LAB_1048dde28;
    }
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(puVar4);
    uVar9 = 1;
  }
LAB_1048dde28:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 1048ddd48; end: 1048dde47;  */

undefined1  [16] FUN_1048ddd48(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar2 = param_1;
      uVar3 = param_2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0
         )) goto LAB_1048dde28;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(uVar3);
    uVar7 = 1;
  }
LAB_1048dde28:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1048dde48; end: 1048dde93; -[FBSDKCodeVerifier value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dde48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c4d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309c4d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048dde94; end: 1048ddecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048dde94(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309c4d0);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309c4d0) + 8))
  ;
  return auVar1;
}



/* Entry: 1048ddecc; end: 1048ddf23; -[FBSDKCodeVerifier challenge] */

void FUN_1048ddecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048ddf24();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048ddf24; end: 1048de1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048ddf24(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_d0 [4];
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_b0 + lVar1;
  puStack_70 = *(undefined8 **)(unaff_x20 + _DAT_11309c4d0);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_11309c4d0))[1];
  uVar4 = uVar8;
  puStack_68 = (undefined8 *)uVar8;
  _swift_bridgeObjectRetain();
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar7);
  func_0x000100e8b654();
  puVar2 = PTR___sSSN_11034da80;
  uVar9 = 0;
  lVar5 = lVar7;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar7,0,PTR___sSSN_11034da80,uVar4);
  (**(code **)(lVar13 + 8))(lVar7,lVar3);
  _swift_bridgeObjectRelease(uVar8);
  puVar12 = (undefined8 *)0xe000000000000000;
  if (uVar9 >> 0x3c < 0xf) {
    lVar3 = 0x20;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x20,PTR___ss5UInt8VN_11034eef8);
    *(undefined8 *)(lVar3 + 0x10) = 0x20;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    lStack_78 = lVar3;
    func_0x000100de78a0(lVar5,uVar9);
    uVar10 = uVar9;
    FUN_1048deaa0(lVar5,uVar9,lVar5,uVar9,&lStack_78);
    lVar3 = lStack_78;
    lVar7 = lStack_78;
    _swift_bridgeObjectRetain();
    FUN_1048de294();
    uVar8 = 0;
    uStack_b0 = uVar10;
    lStack_a8 = lVar7;
    __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
              (0,lVar7,uVar10);
    uStack_90 = 0x2b;
    uStack_88 = 0xe100000000000000;
    uStack_a0 = 0x2d;
    uStack_98 = 0xe100000000000000;
    puStack_70 = (undefined8 *)uVar8;
    puStack_68 = (undefined8 *)lVar7;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = uVar4;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 0x18) = uVar4;
    puVar12 = &uStack_90;
    puVar6 = &uStack_a0;
    *(undefined **)((long)auStack_d0 + lVar1) = puVar2;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uVar4;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar12,puVar6,0,0,0,1,puVar2,puVar2);
    _swift_bridgeObjectRelease(lVar7);
    uStack_90 = 0x2f;
    uStack_88 = 0xe100000000000000;
    uStack_a0 = 0x5f;
    uStack_98 = 0xe100000000000000;
    puStack_70 = puVar12;
    puStack_68 = puVar6;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = uVar4;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 0x18) = uVar4;
    puVar12 = &uStack_90;
    puVar11 = &uStack_a0;
    *(undefined **)((long)auStack_d0 + lVar1) = puVar2;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uVar4;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar12,puVar11,0,0,0,1,puVar2,puVar2);
    _swift_bridgeObjectRelease(puVar6);
    uStack_90 = 0x3d;
    uStack_88 = 0xe100000000000000;
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    puStack_70 = puVar12;
    puStack_68 = puVar11;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = uVar4;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 0x18) = uVar4;
    puVar6 = &uStack_90;
    puVar12 = &uStack_a0;
    *(undefined **)((long)auStack_d0 + lVar1) = puVar2;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uVar4;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar6,puVar12,0,0,0,1,puVar2,puVar2);
    func_0x00010006c090(lStack_a8,uStack_b0);
    func_0x0001000b44c0(lVar5,uVar9);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(puVar11);
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  auVar14._8_8_ = puVar12;
  auVar14._0_8_ = puVar6;
  return auVar14;
}



/* Entry: 1048de1c0; end: 1048de293;  */

void FUN_1048de1c0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar7 = param_4 >> 0x30 & 0xff;
      goto LAB_1048de234;
    }
    iVar6 = (int)((ulong)param_3 >> 0x20);
    if (SBORROW4(iVar6,(int)param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1048de294);
      (*pcVar2)();
    }
    uVar7 = (ulong)(iVar6 - (int)param_3);
  }
  else {
    if (uVar5 != 2) {
      uVar7 = 0;
      goto LAB_1048de234;
    }
    uVar7 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1048de210);
      (*pcVar2)();
    }
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1048de290);
    (*pcVar2)();
  }
  if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1048de230);
    (*pcVar2)();
  }
LAB_1048de234:
  uVar8 = *param_5;
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_5 = uVar8;
  uVar4 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    func_0x0001014d97ac(0,*(undefined8 *)(uVar8 + 0x10),0,uVar8);
  }
  *param_5 = uVar4;
  _CC_SHA256(param_1,uVar7,uVar4 + 0x20);
  return;
}



/* Entry: 1048de294; end: 1048de39b;  */

undefined1  [16] FUN_1048de294(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = 0x11309c508;
  func_0x0001048db364();
  uVar1 = uVar3;
  uStack_40 = uVar3;
  func_0x000100449760();
  plVar2 = alStack_58;
  alStack_58[0] = param_1;
  uStack_38 = uVar1;
  func_0x0001000a8868(plVar2,uVar3);
  uVar5 = *(ulong *)(*plVar2 + 0x10);
  if (uVar5 == 0) {
    uVar7 = 0;
    uVar6 = 0xc000000000000000;
  }
  else {
    uVar7 = *plVar2 + 0x20;
    if (uVar5 < 0xf) {
      uVar5 = uVar7 + uVar5;
      func_0x000100e36f4c(uVar7,uVar5);
      uVar6 = uVar5 & 0xffffffffffffff;
    }
    else {
      uVar3 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(uVar7,uVar5,uVar3);
      if (uVar5 < 0x7fffffff) {
        uVar6 = uVar7 | 0x4000000000000000;
        uVar7 = uVar5 << 0x20;
      }
      else {
        uVar4 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar4 + 0x10) = 0;
        *(ulong *)(uVar4 + 0x18) = uVar5;
        uVar6 = uVar7 | 0x8000000000000000;
        uVar7 = uVar4;
      }
    }
  }
  func_0x0001000834e4(alStack_58);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1048de39c; end: 1048de763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1048de39c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar9 = *(long *)(lVar2 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = auStack_80 + -uVar5;
  lVar6 = (long)puVar4 - uVar5;
  lVar8 = lVar6 - uVar5;
  lVar7 = lVar8 - uVar5;
  lVar3 = unaff_x20;
  _objc_allocWithZone();
  uVar5 = param_1;
  __sSS5countSivg(param_1,param_2);
  if ((0x2a < (long)uVar5) && (uVar5 < 0x81)) {
    __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(lVar6,0x7e5f2e2d,0xe400000000000000);
    __s10Foundation12CharacterSetV13alphanumericsACvgZ(puVar4);
    __s10Foundation12CharacterSetV5unionyA2CF(lVar8,puVar4);
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(puVar4,lVar2);
    (*pcVar10)(lVar6,lVar2);
    __s10Foundation12CharacterSetV8invertedACvg(lVar7);
    (*pcVar10)(lVar8,lVar2);
    func_0x000100e8b654();
    uVar5 = 0;
    __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
              (lVar7,0,0,0,1,PTR___sSSN_11034da80,lVar8);
    if ((uVar5 & 1) != 0) {
      _objc_allocWithZone();
      puVar1 = (ulong *)(unaff_x20 + _DAT_11309c4d0);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar4 = auStack_80;
      _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
      (*pcVar10)(lVar7,lVar2);
      lVar2 = lVar3;
      _swift_getObjectType(lVar3);
      _swift_deallocPartialClassInstance(lVar3,lVar2,0x18,7);
      return puVar4;
    }
    (*pcVar10)(lVar7,lVar2);
  }
  _swift_bridgeObjectRelease(param_2);
  lVar2 = lVar3;
  _swift_getObjectType(lVar3);
  _swift_deallocPartialClassInstance(lVar3,lVar2,0x18,7);
  return (undefined1 *)0x0;
}



/* Entry: 1048de764; end: 1048de78b; -[FBSDKCodeVerifier initWithString:] */

void FUN_1048de764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x0001048de580();
  return;
}



/* Entry: 1048de78c; end: 1048de7ab;  */

void FUN_1048de78c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048de7ac; end: 1048dea37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1048de7ac(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 *puVar12;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  _swift_getObjectType();
  lVar4 = 0x48;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x48,PTR___ss4Int8VN_11034edc0);
  *(undefined8 *)(lVar4 + 0x10) = 0x48;
  puVar12 = (undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *puVar12 = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  uVar5 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  _SecRandomCopyBytes(uVar5,0x48,puVar12);
  if ((int)uVar5 == 0) {
    lVar9 = (long)puVar12 + *(long *)(lVar4 + 0x10);
    func_0x000100e37074(puVar12,lVar9);
    _swift_bridgeObjectRelease(lVar4);
    uVar5 = 0;
    puVar7 = puVar12;
    __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
              (0,puVar12,lVar9);
    uStack_80 = 0x2b;
    uStack_78 = 0xe100000000000000;
    uStack_90 = 0x2d;
    uStack_88 = 0xe100000000000000;
    puStack_70 = (undefined8 *)uVar5;
    puStack_68 = puVar7;
    func_0x000100e8b654();
    puVar2 = PTR___sSSN_11034da80;
    puVar6 = &uStack_80;
    puVar10 = &uStack_90;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar6,puVar10,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSN_11034da80
               ,uVar5,uVar5,uVar5);
    _swift_bridgeObjectRelease(puVar7);
    uStack_80 = 0x2f;
    uStack_78 = 0xe100000000000000;
    uStack_90 = 0x5f;
    uStack_88 = 0xe100000000000000;
    puVar7 = &uStack_80;
    puVar11 = &uStack_90;
    puStack_70 = puVar6;
    puStack_68 = puVar10;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar7,puVar11,0,0,0,1,puVar2,puVar2,puVar2,uVar5,uVar5,uVar5);
    _swift_bridgeObjectRelease(puVar10);
    uStack_80 = 0x3d;
    uStack_78 = 0xe100000000000000;
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    puVar6 = &uStack_80;
    puVar10 = &uStack_90;
    puStack_70 = puVar7;
    puStack_68 = puVar11;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar6,puVar10,0,0,0,1,puVar2,puVar2,puVar2,uVar5,uVar5,uVar5);
    func_0x00010006c090(puVar12,lVar9);
    _swift_bridgeObjectRelease(puVar11);
    _objc_allocWithZone();
    plVar1 = (long *)(unaff_x20 + _DAT_11309c4d0);
    *plVar1 = (long)puVar6;
    plVar1[1] = (long)puVar10;
    puVar8 = auStack_a0;
    _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return puVar8;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000034,0x800000010f219e50,
             "FBSDKLoginKit/CodeVerifier.swift",0x20,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dea38);
  (*pcVar3)();
}



/* Entry: 1048dea38; end: 1048dea57; -[FBSDKCodeVerifier init] */

void FUN_1048dea38(void)

{
  FUN_1048de7ac();
  return;
}



/* Entry: 1048dea58; end: 1048dea8b;  */

void FUN_1048dea58(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048dea8c; end: 1048dea9f; -[FBSDKCodeVerifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dea8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309c4d0 + 8))
  ;
  return;
}



/* Entry: 1048deaa0; end: 1048decb3;  */

ulong FUN_1048deaa0(undefined8 param_1,undefined1 *param_2,ulong param_3,ulong param_4,ulong param_5
                   ,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)(param_3 >> 0x20);
  uVar8 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar8 != 0) {
      lVar11 = (long)(int)param_2;
      puVar6 = (undefined1 *)(((long)param_2 >> 0x20) - lVar11);
      if ((long)param_2 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048deca4);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar4 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar11,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1048decb0);
          (*pcVar3)();
        }
        param_2 = param_2 + (lVar11 - (long)puVar4);
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)puVar6 <= (long)puVar4) {
        puVar4 = puVar6;
      }
LAB_1048dec10:
      puVar6 = (undefined1 *)0x0;
      if (param_2 != (undefined1 *)0x0) {
        puVar6 = puVar4 + (long)param_2;
      }
      goto LAB_1048dec50;
    }
    auStack_78[0] = SUB81(param_2,0);
    auStack_78[1] = (undefined1)((ulong)param_2 >> 8);
    auStack_78[2] = (undefined1)((ulong)param_2 >> 0x10);
    auStack_78[3] = (undefined1)((ulong)param_2 >> 0x18);
    auStack_78[4] = (undefined1)((ulong)param_2 >> 0x20);
    auStack_78[5] = (undefined1)((ulong)param_2 >> 0x28);
    auStack_78[6] = (undefined1)((ulong)param_2 >> 0x30);
    auStack_78[7] = (undefined1)((ulong)param_2 >> 0x38);
    auStack_78[8] = (undefined1)param_3;
    auStack_78[9] = (undefined1)(param_3 >> 8);
    auStack_78[10] = (undefined1)(param_3 >> 0x10);
    auStack_78[0xb] = (undefined1)(param_3 >> 0x18);
    auStack_78[0xc] = (undefined1)(param_3 >> 0x20);
    auStack_78[0xd] = (undefined1)(param_3 >> 0x28);
    puVar6 = auStack_78 + (param_3 >> 0x30 & 0xff);
  }
  else {
    if (uVar8 == 2) {
      lVar11 = *(long *)(param_2 + 0x10);
      lVar1 = *(long *)(param_2 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar4 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar11,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1048decac);
          (*pcVar3)();
        }
        param_2 = param_2 + (lVar11 - (long)puVar4);
      }
      puVar6 = (undefined1 *)(lVar1 - lVar11);
      if (SBORROW8(lVar1,lVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048deca8);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)puVar6 <= (long)puVar4) {
        puVar4 = puVar6;
      }
      goto LAB_1048dec10;
    }
    auStack_78[8] = 0;
    auStack_78[9] = 0;
    auStack_78[10] = 0;
    auStack_78[0xb] = 0;
    auStack_78[0xc] = 0;
    auStack_78[0xd] = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[4] = 0;
    auStack_78[5] = 0;
    auStack_78[6] = 0;
    auStack_78[7] = 0;
    puVar6 = auStack_78;
  }
  param_2 = auStack_78;
LAB_1048dec50:
  uVar10 = param_4;
  uVar7 = param_5;
  FUN_1048de1c0(param_1,param_2,puVar6,param_4,param_5,param_6);
  func_0x00010006c090();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  if (uVar7 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar5 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar5 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if ((((uVar10 & 1) != 0) && ((long)uVar5 < (long)param_5)) &&
     ((long)(uVar5 + 0x4000000000000000) < 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dede4);
    (*pcVar3)();
  }
  if (uVar7 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar7 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar10 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar5 = uVar10;
  func_0x0001049010b0();
  if ((param_4 & 1) == 0) {
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048dede0);
      (*pcVar3)();
    }
    func_0x0001048dede4(0,uVar10,uVar5 + 0x20,uVar7);
  }
  else {
    uVar9 = uVar7 & 0xffffffffffffff8;
    if ((uVar5 != uVar9) || (uVar9 + 0x20 + uVar10 * 8 <= uVar5 + 0x20)) {
      _memmove(uVar5 + 0x20,uVar9 + 0x20,uVar10 << 3);
    }
    *(undefined8 *)(uVar9 + 0x10) = 0;
    _swift_bridgeObjectRelease(uVar7);
  }
  return uVar5;
}



/* Entry: 1048decb4; end: 1048deedb;  */

ulong FUN_1048decb4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048dede4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001049010b0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048dede0);
      (*pcVar1)();
    }
    func_0x0001048dede4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 1048deedc; end: 1048def1b;  */

void FUN_1048deedc(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e3d78);
  return;
}



/* Entry: 1048def1c; end: 1048def2f;  */

bool FUN_1048def1c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048def30; end: 1048def73;  */

void FUN_1048def30(void)

{
  undefined *puVar1;
  
  if (puRam000000011309c510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd47048;
  _swift_getWitnessTable(&UNK_10dd47048,&UNK_1107b65a8);
  puRam000000011309c510 = puVar1;
  return;
}



/* Entry: 1048def74; end: 1048df01f;  */

void FUN_1048def74(void)

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



/* Entry: 1048df020; end: 1048df047;  */

void FUN_1048df020(ulong *param_1,ulong *param_2)

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



/* Entry: 1048df048; end: 1048df057;  */

undefined1  [16] FUN_1048df048(void)

{
  return ZEXT816(0x1107b65a8);
}



/* Entry: 1048df058; end: 1048df123;  */

void FUN_1048df058(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8251a4,&UNK_10e8251ac);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  puVar3 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(puVar3,param_1,lVar1);
  (**(code **)(lVar2 + 0x38))(puVar3,0,1,lVar1);
  (**(code **)(param_3 + 0x18))(puVar3,param_2,param_3);
  return;
}



/* Entry: 1048df124; end: 1048df2ff;  */

void FUN_1048df124(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  lVar1 = 0xff;
  uStack_70 = param_1;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8251a4,&UNK_10e8251ac);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&uStack_70 - uVar7;
  lVar11 = lVar12 - uVar7;
  (**(code **)(param_3 + 0x10))(lVar12,param_2,param_3);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x28))(lVar11,param_2,param_3);
    lVar3 = lVar12;
    (*pcVar10)(lVar12,1,lVar1);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar11,lVar12,lVar1);
    (**(code **)(lVar8 + 0x38))(lVar11,0,1,lVar1);
  }
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
    uVar4 = param_2;
    func_0x0001049118c8(param_2,param_2);
    uVar5 = 0;
    func_0x000104911a20(0,param_2);
    puVar6 = (undefined8 *)&UNK_10dd480f0;
    _swift_getWitnessTable(&UNK_10dd480f0,uVar5);
    _swift_allocError(uVar5,puVar6,0,0);
    *puVar6 = uVar4;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(uStack_70,lVar11,lVar1);
  }
  return;
}



/* Entry: 1048df300; end: 1048df3e3;  */

/* WARNING: Removing unreachable block (ram,0x0001048df370) */

void FUN_1048df300(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR___ss7KeyPathCMo_11034f0c8;
  lVar4 = *param_2;
  lVar2 = *(long *)(lVar4 + *(long *)PTR___ss7KeyPathCMo_11034f0c8);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1048df124(puVar3,param_3,param_4);
  _swift_getAtKeyPath(param_1,puVar3,param_2);
  (**(code **)(lVar5 + 8))(puVar3,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar4 + *(long *)puVar1 + 8) + -8) + 0x38))(param_1,0,1);
  return;
}



/* Entry: 1048df3e4; end: 1048df40b;  */

void FUN_1048df3e4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001048df3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1048df40c; end: 1048df4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048df40c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  func_0x0001048df510(param_1,auStack_68);
  lVar1 = _DAT_11309c5f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5f0,auStack_80,0x21,0);
  func_0x0001048df54c(auStack_68,unaff_x20 + lVar1,0x11309c520);
  _swift_endAccess(auStack_80);
  return;
}



/* Entry: 1048df4d4; end: 1048df58f;  */

undefined8 FUN_1048df4d4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x104905004)(param_2,param_1);
  return param_2;
}



/* Entry: 1048df590; end: 1048df65b;  */

void FUN_1048df590(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8251ec,&UNK_10e8251f4);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  puVar3 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(puVar3,param_1,lVar1);
  (**(code **)(lVar2 + 0x38))(puVar3,0,1,lVar1);
  (**(code **)(param_3 + 0x18))(puVar3,param_2,param_3);
  return;
}



/* Entry: 1048df65c; end: 1048df837;  */

void FUN_1048df65c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  lVar1 = 0xff;
  uStack_70 = param_1;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8251ec,&UNK_10e8251f4);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&uStack_70 - uVar7;
  lVar11 = lVar12 - uVar7;
  (**(code **)(param_3 + 0x10))(lVar12,param_2,param_3);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x28))(lVar11,param_2,param_3);
    lVar3 = lVar12;
    (*pcVar10)(lVar12,1,lVar1);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar11,lVar12,lVar1);
    (**(code **)(lVar8 + 0x38))(lVar11,0,1,lVar1);
  }
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
    uVar4 = param_2;
    func_0x0001049118c8(param_2,param_2);
    uVar5 = 0;
    func_0x000104911a20(0,param_2);
    puVar6 = (undefined8 *)&UNK_10dd480f0;
    _swift_getWitnessTable(&UNK_10dd480f0,uVar5);
    _swift_allocError(uVar5,puVar6,0,0);
    *puVar6 = uVar4;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(uStack_70,lVar11,lVar1);
  }
  return;
}



/* Entry: 1048df838; end: 1048df91b;  */

/* WARNING: Removing unreachable block (ram,0x0001048df8a8) */

void FUN_1048df838(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR___ss7KeyPathCMo_11034f0c8;
  lVar4 = *param_2;
  lVar2 = *(long *)(lVar4 + *(long *)PTR___ss7KeyPathCMo_11034f0c8);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1048df65c(puVar3,param_3,param_4);
  _swift_getAtKeyPath(param_1,puVar3,param_2);
  (**(code **)(lVar5 + 8))(puVar3,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar4 + *(long *)puVar1 + 8) + -8) + 0x38))(param_1,0,1);
  return;
}



/* Entry: 1048df91c; end: 1048df943;  */

void FUN_1048df91c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001048df920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1048df944; end: 1048dfb0b;  */

void FUN_1048df944(undefined8 param_1)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [40];
  
  func_0x0001048dfb84(param_1,auStack_48);
  if (lRam000000011309c260 != -1) {
    _swift_once(0x11309c260,FUN_104908c5c);
  }
  _swift_beginAccess(0x1138155b0,auStack_60,0x21,0);
  func_0x0001048dfbc0(auStack_48,0x1138155b0,0x11309c538);
  _swift_endAccess(auStack_60);
  func_0x0001048dfc04(auStack_48,0x11309c538);
  return;
}



/* Entry: 1048dfb0c; end: 1048dfc3f;  */

undefined8 FUN_1048dfb0c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x104910cbc)(param_2,param_1);
  return param_2;
}



/* Entry: 1048dfc40; end: 1048dfc4b; -[FBSDKDeviceLoginCodeInfo identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dfc40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c540);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309c540))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048dfc4c; end: 1048dfc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048dfc4c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309c540);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309c540) + 8))
  ;
  return auVar1;
}



/* Entry: 1048dfc84; end: 1048dfc8f; -[FBSDKDeviceLoginCodeInfo loginCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dfc84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c548);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309c548))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048dfc90; end: 1048dfcd7;  */

void FUN_1048dfc90(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1048dfcd8; end: 1048dfd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048dfcd8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309c548);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309c548) + 8))
  ;
  return auVar1;
}



/* Entry: 1048dfd10; end: 1048dfd3f; -[FBSDKDeviceLoginCodeInfo verificationURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dfd10(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  puVar1 = PTR___s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF_110350908;
  lVar2 = 0;
  (*(code *)PTR___s10Foundation3URLVMa_110350988)();
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffc0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1 + _DAT_11309c550,lVar2);
  (*(code *)puVar1)();
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1048dfd40; end: 1048dfd5b; -[FBSDKDeviceLoginCodeInfo expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dfd40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  puVar1 = PTR___s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF_110350b50;
  lVar2 = 0;
  (*(code *)PTR___s10Foundation4DateVMa_110350bb8)();
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffc0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1 + _DAT_11309c558,lVar2);
  (*(code *)puVar1)();
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1048dfd5c; end: 1048dfdf3;  */

void FUN_1048dfd5c(long param_1,undefined8 param_2,code *param_3,long *param_4,code *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  (*param_3)();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + *param_4,lVar1);
  (*param_5)();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1048dfdf4; end: 1048dfe07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048dfdf4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_11309c558;
  lVar2 = 0;
  (*(code *)PTR___s10Foundation4DateVMa_110350bb8)();
                    /* WARNING: Could not recover jumptable at 0x0001048dfe48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,lVar2);
  return;
}



/* Entry: 1048dfe08; end: 1048dfe4b;  */

void FUN_1048dfe08(undefined8 param_1,long *param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = 0;
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x0001048dfe48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 1048dfe4c; end: 1048dfe5b; -[FBSDKDeviceLoginCodeInfo pollingInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048dfe4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11309c560);
}



/* Entry: 1048dfe5c; end: 1048dfe6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048dfe5c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _DAT_11309c560);
}



/* Entry: 1048dfe6c; end: 1048e00db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1048dfe6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  
  puVar5 = auStack_70;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c540);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c548);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lVar2 = _DAT_11309c550;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (**(code **)(lVar6 + 0x10))(unaff_x20 + lVar2,param_5,lVar3);
  lVar2 = _DAT_11309c558;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar4 + -8);
  (**(code **)(lVar7 + 0x10))(unaff_x20 + lVar2,param_6,lVar4);
  if (param_7 < 6) {
    param_7 = 5;
  }
  *(ulong *)(unaff_x20 + _DAT_11309c560) = param_7;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar7 + 8))(param_6,lVar4);
  (**(code **)(lVar6 + 8))(param_5,lVar3);
  return puVar5;
}



/* Entry: 1048e00dc; end: 1048e0277; -[FBSDKDeviceLoginCodeInfo initWithIdentifier:loginCode:verificationURL:expirationDate:pollingInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1048e00dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_78 = param_7;
  _swift_getObjectType();
  lVar4 = 0;
  lStack_80 = lVar3;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar4 + -8);
  puVar8 = auStack_a0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_88 = lVar4;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar5 + -8);
  lVar9 = (long)puVar8 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar7 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar9,uStack_98);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar8,uStack_90);
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c540);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c548);
  *puVar1 = param_4;
  puVar1[1] = uVar7;
  (**(code **)(lVar4 + 0x10))(param_1 + _DAT_11309c550,lVar9,lVar5);
  lVar3 = lStack_88;
  (**(code **)(lVar10 + 0x10))(param_1 + _DAT_11309c558,puVar8,lStack_88);
  uVar2 = uStack_78;
  if (uStack_78 < 6) {
    uVar2 = 5;
  }
  *(ulong *)(param_1 + _DAT_11309c560) = uVar2;
  lStack_68 = lStack_80;
  plVar6 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  (**(code **)(lVar10 + 8))(puVar8,lVar3);
  (**(code **)(lVar4 + 8))(lVar9,lVar5);
  return plVar6;
}



/* Entry: 1048e0278; end: 1048e02c3;  */

void FUN_1048e0278(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048e02c4; end: 1048e0323; -[FBSDKDeviceLoginCodeInfo init] */

void FUN_1048e02c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.DeviceLoginCodeInfo",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e02f0);
  (*pcVar1)();
}



/* Entry: 1048e0324; end: 1048e03ab; -[FBSDKDeviceLoginCodeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e0324(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c540 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c548 + 8));
  lVar1 = _DAT_11309c550;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  lVar1 = _DAT_11309c558;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001048e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1048e03ac; end: 1048e03b3;  */

void FUN_1048e03ac(void)

{
  if (lRam000000011309c590 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e825224);
  return;
}



/* Entry: 1048e03b4; end: 1048e0497;  */

void FUN_1048e03b4(undefined8 param_1)

{
  if (lRam000000011309c590 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e825224);
  return;
}



/* Entry: 1048e0498; end: 1048e049f;  */

void FUN_1048e0498(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048e049c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x78))();
  return;
}



/* Entry: 1048e04a0; end: 1048e04d7;  */

undefined8 FUN_1048e04a0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1048e04d8; end: 1048e056b;  */

void FUN_1048e04d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  _objc_retain();
  uVar1 = param_2;
  _objc_msgSend();
  param_1[1] = uVar1;
  uVar1 = param_2;
  _objc_msgSend(param_2,PTR_s_userInfo_112682430);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(param_2);
  _objc_release(uVar1);
  param_1[2] = uVar2;
  return;
}



/* Entry: 1048e056c; end: 1048e063b;  */

void FUN_1048e056c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}



/* Entry: 1048e063c; end: 1048e0703;  */

void FUN_1048e063c(undefined8 param_1)

{
  long unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Entry: 1048e0704; end: 1048e0713;  */

undefined8 FUN_1048e0704(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 8);
}



/* Entry: 1048e0714; end: 1048e080f;  */

void FUN_1048e0714(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048e0810; end: 1048e084b;  */

void FUN_1048e0810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 1048e084c; end: 1048e0863;  */

void FUN_1048e084c(void)

{
  func_0x0001048e0960();
  return;
}



/* Entry: 1048e0864; end: 1048e093f;  */

void FUN_1048e0864(void)

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


