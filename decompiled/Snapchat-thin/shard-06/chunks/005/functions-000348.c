/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049cb324; end: 1049cb43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cb324(long *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_1130a3788) + 0x10);
  if (lVar6 != 0) {
    puVar7 = (ulong *)(*(long *)(unaff_x20 + _DAT_1130a3788) + 0x28);
    do {
      uVar3 = puVar7[-1];
      uVar1 = *puVar7;
      lVar5 = *param_1;
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(lVar5);
      uVar4 = uVar1;
      func_0x000100029284();
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease(uVar1);
      if ((uVar4 & 1) == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        iVar2 = (int)*param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        lVar5 = *param_1;
        if (iVar2 == 0) {
          func_0x0001010fc388();
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar3 * 0x10 + 8));
        func_0x000100102924(*(long *)(lVar5 + 0x38) + uVar3 * 0x20,&uStack_70);
        func_0x0001010f6278(uVar3,lVar5);
        *param_1 = lVar5;
      }
      func_0x0001049cd4dc(&uStack_70,0x11309c428);
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 1049cb440; end: 1049cb637; -[FBSDKMACARuleMatchingManager processParameters:event:] */

void FUN_1049cb440(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001049caad8(param_3,param_4,param_2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1049cb638; end: 1049cb657; -[FBSDKMACARuleMatchingManager init] */

void FUN_1049cb638(void)

{
  func_0x0001049cb4dc();
  return;
}



/* Entry: 1049cb658; end: 1049cb68b;  */

void FUN_1049cb658(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049cb68c; end: 1049cb7bb; -[FBSDKMACARuleMatchingManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001049cb6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049cb6d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cb68c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3780));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3788));
  plVar1 = (long *)(param_1 + _DAT_1130a3768);
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  if (*plVar1 != 0) {
    _swift_unknownObjectRelease();
    _swift_unknownObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1049cb7bc; end: 1049cb7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cb7bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3768);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  func_0x0001049c978c();
  return;
}



/* Entry: 1049cb7c8; end: 1049cb833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cb7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [24];
  
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar5 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3768);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  puVar1[2] = uVar5;
  func_0x0001049c97d0(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1049cb834; end: 1049cb873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049cb834(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a3768;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3768,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049cd588;
  return auVar2;
}



/* Entry: 1049cb874; end: 1049cb87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cb874(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3770);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  func_0x0001049c978c();
  return;
}



/* Entry: 1049cb880; end: 1049cb8d3;  */

void FUN_1049cb880(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_4);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  func_0x0001049c978c();
  return;
}



/* Entry: 1049cb8d4; end: 1049cb8d7;  */

void FUN_1049cb8d4(void)

{
  return;
}



/* Entry: 1049cb8d8; end: 1049cb9eb;  */

undefined1  [16] FUN_1049cb8d8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  uVar1 = 0;
  uVar3 = 0;
  func_0x000100672b50(param_1,auStack_50);
  puVar5 = PTR___sypN_11034f1a8;
  if (lStack_38 == 0) {
    func_0x0001049cd4dc(auStack_50,0x11309c428);
  }
  else {
    _swift_dynamicCast(&uStack_60,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar1 & 1) != 0) goto LAB_1049cb9d8;
  }
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x0001049cd4dc(auStack_50,0x11309c428);
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    _swift_dynamicCast(&uStack_60,auStack_50,puVar5 + 8,uVar2,6);
    if ((uVar3 & 1) != 0) {
      uVar2 = uStack_60;
      puVar5 = PTR_s_stringValue_112674fe8;
      _objc_msgSend(uStack_60,PTR_s_stringValue_112674fe8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uStack_60);
      _objc_release(uVar2);
      uStack_60 = uVar4;
      puStack_58 = puVar5;
      goto LAB_1049cb9d8;
    }
  }
  uStack_60 = 0;
  puStack_58 = (undefined *)0x0;
LAB_1049cb9d8:
  auVar6._8_8_ = puStack_58;
  auVar6._0_8_ = uStack_60;
  return auVar6;
}



/* Entry: 1049cb9ec; end: 1049cbb0b;  */

undefined8 FUN_1049cb9ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100672b50(param_2,auStack_60);
  puVar1 = PTR___sypN_11034f1a8;
  if (lStack_48 == 0) {
    func_0x0001049cd4dc(auStack_60,0x11309c428);
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar3 = &uStack_70;
    _swift_dynamicCast(puVar3,auStack_60,puVar1 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_msgSend(uStack_70,PTR_s_doubleValue_1125bfb10);
      _objc_release(uStack_70);
      return param_1;
    }
  }
  func_0x000100672b50(param_2,auStack_60);
  if (lStack_48 == 0) {
    func_0x0001049cd4dc(auStack_60,0x11309c428);
  }
  else {
    puVar3 = &uStack_70;
    _swift_dynamicCast(puVar3,auStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar3 & 1) != 0) {
      auStack_60[0] = 0;
      uVar4 = uStack_70;
      FUN_1048e60ac(uStack_70,uStack_68,auStack_60);
      _swift_bridgeObjectRelease(uStack_68);
      if ((uVar4 & 1) != 0) {
        return auStack_60[0];
      }
    }
  }
  return 0;
}



/* Entry: 1049cbb0c; end: 1049cd2e7;  */

uint FUN_1049cbb0c(long param_1,ulong param_2,long param_3,ulong param_4)

{
  byte bVar1;
  double dVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 auStack_130 [16];
  long alStack_120 [2];
  undefined8 ****appppuStack_110 [2];
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [40];
  
  lVar6 = 0x1130a37f0;
  func_0x0001048db364();
  lVar6 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)appppuStack_110 + lVar6;
  bVar1 = *(byte *)(param_3 + 0x20);
  _swift_bridgeObjectRetain(param_3);
  uVar7 = param_3 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(uVar7,~(-1L << ((ulong)bVar1 & 0x3f)));
  uVar20 = (ulong)*(uint *)(param_3 + 0x24);
  bVar1 = *(byte *)(param_3 + 0x20);
  _swift_bridgeObjectRelease(param_3);
  if ((uVar7 != 1L << ((ulong)bVar1 & 0x3f)) &&
     (FUN_1049156f8(uVar7,uVar20,0,param_3), *(long *)(param_3 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(uVar20);
    uVar22 = uVar7;
    uVar17 = uVar20;
    func_0x000100029284(uVar7);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar20);
      _swift_bridgeObjectRelease(param_3);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + uVar22 * 0x20,auStack_b8);
      _swift_bridgeObjectRelease(param_3);
      func_0x000100102924(auStack_b8,auStack_98);
      if (((uVar7 == 0x737473697865) && (uVar20 == 0xe600000000000000)) ||
         (uVar22 = uVar7,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar7,uVar20,0x737473697865,0xe600000000000000,0), (uVar22 & 1) != 0)) {
        _swift_bridgeObjectRelease(uVar20);
        func_0x0001000bb420(auStack_98,auStack_b8);
        pppppuVar15 = &ppppuStack_e0;
        _swift_dynamicCast(pppppuVar15,auStack_b8,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if ((int)pppppuVar15 != 0) {
          if (*(long *)(param_4 + 0x10) == 0) {
            uVar16 = 0;
          }
          else {
            func_0x000100029284(param_1,param_2);
            uVar16 = (uint)param_2;
          }
          func_0x000100183ab8(auStack_98);
          uVar16 = (byte)ppppuStack_e0 ^ uVar16 ^ 1;
          goto LAB_1049cce98;
        }
      }
      else {
        lVar8 = param_1;
        uVar22 = param_2;
        __sSS10lowercasedSSyF(param_1);
        if (*(long *)(param_4 + 0x10) == 0) {
LAB_1049cbd3c:
          in_b0 = 0;
          in_register_00005001 = 0;
          in_register_00005002 = 0;
          in_register_00005003 = 0;
          in_register_00005004 = 0;
          in_register_00005005 = 0;
          in_register_00005006 = 0;
          in_register_00005007 = 0;
          ppppuStack_f8 = (undefined8 *****)0x0;
          ppppuStack_100 = (undefined8 *****)0x0;
          lStack_e8 = 0;
          uStack_f0 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_4);
          uVar17 = uVar22;
          func_0x000100029284(lVar8);
          if ((uVar17 & 1) == 0) {
            _swift_bridgeObjectRelease(param_4);
            goto LAB_1049cbd3c;
          }
          func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar8 * 0x20,&ppppuStack_100);
          _swift_bridgeObjectRelease(uVar22);
          uVar22 = param_4;
        }
        _swift_bridgeObjectRelease(uVar22);
        if (lStack_e8 == 0) {
          if (*(long *)(param_4 + 0x10) == 0) {
LAB_1049cbdac:
            in_b0 = 0;
            in_register_00005001 = 0;
            in_register_00005002 = 0;
            in_register_00005003 = 0;
            in_register_00005004 = 0;
            in_register_00005005 = 0;
            in_register_00005006 = 0;
            in_register_00005007 = 0;
            ppppuStack_d8 = (undefined8 *****)0x0;
            ppppuStack_e0 = (undefined8 *****)0x0;
            lStack_c8 = 0;
            uStack_d0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(param_4);
            func_0x000100029284(param_1);
            if ((param_2 & 1) == 0) {
              _swift_bridgeObjectRelease(param_4);
              goto LAB_1049cbdac;
            }
            func_0x0001000bb420(*(long *)(param_4 + 0x38) + param_1 * 0x20,&ppppuStack_e0);
            _swift_bridgeObjectRelease(param_4);
          }
          if (lStack_e8 != 0) {
            func_0x0001049cd4dc(&ppppuStack_100,0x11309c428);
          }
        }
        else {
          func_0x000100102924(&ppppuStack_100,&ppppuStack_e0);
        }
        if (lStack_c8 == 0) {
          func_0x000100183ab8(auStack_98);
          _swift_bridgeObjectRelease(uVar20);
          func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
          goto LAB_1049cce94;
        }
        uVar22 = 0x736e6961746e6f63;
        func_0x000100102924(&ppppuStack_e0,auStack_b8);
        func_0x0001000bb420(auStack_98,&ppppuStack_e0);
        puVar3 = PTR___sypN_11034f1a8;
        pppppuVar9 = &ppppuStack_100;
        _swift_dynamicCast(pppppuVar9,&ppppuStack_e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                          );
        pppppuVar13 = (undefined8 *****)ppppuStack_f8;
        pppppuVar15 = (undefined8 *****)ppppuStack_100;
        if ((int)pppppuVar9 == 0) {
          pppppuVar15 = (undefined8 *****)0x0;
          pppppuVar13 = (undefined8 *****)0x0;
        }
        func_0x0001000bb420(auStack_98,&ppppuStack_e0);
        uVar10 = 0x11309c618;
        func_0x0001048db364(0x11309c618);
        pppppuVar11 = &ppppuStack_100;
        _swift_dynamicCast(pppppuVar11,&ppppuStack_e0,puVar3 + 8,uVar10,6);
        pppppuVar9 = (undefined8 *****)ppppuStack_100;
        if ((int)pppppuVar11 == 0) {
          pppppuVar9 = (undefined8 *****)0x0;
        }
        pppppuVar11 = pppppuVar13;
        if (((uVar7 == 0x736e6961746e6f63) && (uVar20 == 0xe800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x736e6961746e6f63,0xe800000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(pppppuVar9);
          pppppuVar18 = &ppppuStack_e0;
          func_0x0001000bb420(auStack_b8);
          pppppuVar9 = &ppppuStack_e0;
          FUN_1049cb8d8();
          pppppuVar12 = &ppppuStack_e0;
          func_0x0001049cd4dc(pppppuVar12,0x11309c428);
          if ((pppppuVar18 == (undefined8 *****)0x0) ||
             (pppppuVar11 = pppppuVar18, pppppuVar13 == (undefined8 *****)0x0)) goto LAB_1049cce80;
          ppppuStack_100 = pppppuVar15;
          ppppuStack_f8 = pppppuVar13;
          ppppuStack_e0 = pppppuVar9;
          ppppuStack_d8 = pppppuVar18;
          func_0x000100e8b654();
          pppppuVar15 = &ppppuStack_100;
          __sSy10FoundationE8containsySbqd__SyRd__lF
                    (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar12,pppppuVar12);
          uVar16 = (uint)pppppuVar15;
          func_0x000100183ab8(auStack_b8);
          func_0x000100183ab8(auStack_98);
          _swift_bridgeObjectRelease(pppppuVar18);
LAB_1049cbf28:
          _swift_bridgeObjectRelease(pppppuVar13);
          goto LAB_1049cce98;
        }
        uVar22 = 0x6961746e6f635f69;
        pppppuVar12 = pppppuVar13;
        if (((uVar7 == 0x6961746e6f635f69) && (uVar20 == 0xea0000000000736e)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6961746e6f635f69,0xea0000000000736e,uVar7,uVar20,0), (uVar22 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(pppppuVar9);
          pppppuVar18 = &ppppuStack_e0;
          func_0x0001000bb420(auStack_b8);
          pppppuVar9 = &ppppuStack_e0;
          FUN_1049cb8d8();
          func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
          if ((pppppuVar18 == (undefined8 *****)0x0) ||
             (pppppuVar11 = pppppuVar18, pppppuVar13 == (undefined8 *****)0x0)) goto LAB_1049cce80;
          __sSS10lowercasedSSyF();
          _swift_bridgeObjectRelease(pppppuVar18);
          ppppuStack_e0 = pppppuVar9;
          ppppuStack_d8 = pppppuVar11;
          __sSS10lowercasedSSyF();
          _swift_bridgeObjectRelease(pppppuVar13);
          ppppuStack_100 = pppppuVar15;
          ppppuStack_f8 = pppppuVar12;
          func_0x000100e8b654();
          pppppuVar15 = &ppppuStack_100;
          __sSy10FoundationE8containsySbqd__SyRd__lF
                    (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar13,pppppuVar13);
          uVar16 = (uint)pppppuVar15;
          pppppuVar13 = pppppuVar11;
LAB_1049cc04c:
          _swift_bridgeObjectRelease(pppppuVar13);
LAB_1049cc054:
          _swift_bridgeObjectRelease(pppppuVar12);
LAB_1049cc058:
          func_0x000100183ab8(auStack_b8);
          func_0x000100183ab8(auStack_98);
          goto LAB_1049cce98;
        }
        uVar22 = 0;
        if (((uVar7 == 0x746e6f635f746f6e) && (uVar20 == 0xec000000736e6961)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x746e6f635f746f6e,0xec000000736e6961,uVar7,uVar20,0), (uVar22 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(pppppuVar9);
          pppppuVar18 = &ppppuStack_e0;
          func_0x0001000bb420(auStack_b8);
          pppppuVar9 = &ppppuStack_e0;
          FUN_1049cb8d8();
          pppppuVar12 = &ppppuStack_e0;
          func_0x0001049cd4dc(pppppuVar12,0x11309c428);
          if ((pppppuVar18 != (undefined8 *****)0x0) &&
             (pppppuVar11 = pppppuVar18, pppppuVar13 != (undefined8 *****)0x0)) {
            ppppuStack_100 = pppppuVar15;
            ppppuStack_f8 = pppppuVar13;
            ppppuStack_e0 = pppppuVar9;
            ppppuStack_d8 = pppppuVar18;
            func_0x000100e8b654();
            pppppuVar15 = &ppppuStack_100;
            __sSy10FoundationE8containsySbqd__SyRd__lF
                      (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar12,pppppuVar12
                      );
            uVar16 = (uint)pppppuVar15;
LAB_1049cc120:
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            _swift_bridgeObjectRelease(pppppuVar18);
LAB_1049cc138:
            _swift_bridgeObjectRelease(pppppuVar13);
            uVar16 = uVar16 ^ 1;
            goto LAB_1049cce98;
          }
LAB_1049cce80:
          _swift_bridgeObjectRelease(pppppuVar11);
        }
        else {
          uVar22 = 0x6f635f746f6e5f69;
          if (((uVar7 == 0x6f635f746f6e5f69) && (uVar20 == 0xee00736e6961746e)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6f635f746f6e5f69,0xee00736e6961746e,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar12);
              pppppuVar12 = pppppuVar13;
              ppppuStack_e0 = pppppuVar9;
              ppppuStack_d8 = pppppuVar11;
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar13);
              ppppuStack_100 = pppppuVar15;
              ppppuStack_f8 = pppppuVar12;
              func_0x000100e8b654();
              pppppuVar15 = &ppppuStack_100;
              __sSy10FoundationE8containsySbqd__SyRd__lF
                        (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar13,
                         pppppuVar13);
              _swift_bridgeObjectRelease(pppppuVar11);
              _swift_bridgeObjectRelease(pppppuVar12);
              func_0x000100183ab8(auStack_b8);
              func_0x000100183ab8(auStack_98);
              uVar16 = (uint)pppppuVar15 ^ 1;
              goto LAB_1049cce98;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x775f737472617473;
          if (((uVar7 == 0x775f737472617473) && (uVar20 == 0xeb00000000687469)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x775f737472617473,0xeb00000000687469,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8(pppppuVar9);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              FUN_1049c9d20(pppppuVar15,pppppuVar13,pppppuVar9,pppppuVar12);
              uVar16 = (uint)pppppuVar15;
              goto LAB_1049cc04c;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x7374726174735f69;
          if (((uVar7 == 0x7374726174735f69) && (uVar20 == 0xed0000687469775f)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x7374726174735f69,0xed0000687469775f,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar18 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8(pppppuVar9);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar18 == (undefined8 *****)0x0) ||
               (pppppuVar11 = pppppuVar18, pppppuVar13 == (undefined8 *****)0x0))
            goto LAB_1049cce80;
            __sSS10lowercasedSSyF(pppppuVar9,pppppuVar18);
            _swift_bridgeObjectRelease(pppppuVar18);
            __sSS10lowercasedSSyF(pppppuVar15,pppppuVar13);
            _swift_bridgeObjectRelease(pppppuVar13);
            FUN_1049c9d20(pppppuVar15,pppppuVar12,pppppuVar9,pppppuVar11);
            uVar16 = (uint)pppppuVar15;
            _swift_bridgeObjectRelease(pppppuVar11);
            goto LAB_1049cc054;
          }
          uVar22 = 0x71655f7274735f69;
          if (((uVar7 == 0x71655f7274735f69) && (uVar20 == 0xe800000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x71655f7274735f69,0xe800000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar18 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar18 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar18, pppppuVar13 != (undefined8 *****)0x0)) {
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar18);
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar13);
              if ((pppppuVar9 == pppppuVar15) && (pppppuVar11 == pppppuVar12)) {
                uVar16 = 1;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pppppuVar9,pppppuVar11,pppppuVar15,pppppuVar12,0);
                uVar16 = (uint)pppppuVar9;
              }
              _swift_bridgeObjectRelease(pppppuVar11);
              goto LAB_1049cc054;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x656e5f7274735f69;
          if (((uVar7 == 0x656e5f7274735f69) && (uVar20 == 0xe900000000000071)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x656e5f7274735f69,0xe900000000000071,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar12 == (undefined8 *****)0x0) ||
               (pppppuVar11 = pppppuVar12, pppppuVar13 == (undefined8 *****)0x0))
            goto LAB_1049cce80;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(pppppuVar12);
            pppppuVar12 = pppppuVar13;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(pppppuVar13);
            if ((pppppuVar9 == pppppuVar15) && (pppppuVar11 == pppppuVar12)) {
              _swift_bridgeObjectRelease(pppppuVar11);
              pppppuVar13 = pppppuVar12;
LAB_1049cc598:
              _swift_bridgeObjectRelease(pppppuVar13);
              uVar16 = 0;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (pppppuVar9,pppppuVar11,pppppuVar15,pppppuVar12,0);
              _swift_bridgeObjectRelease(pppppuVar11);
              _swift_bridgeObjectRelease(pppppuVar12);
              uVar16 = (uint)pppppuVar9 ^ 1;
            }
            goto LAB_1049cc058;
          }
          pppppuVar11 = pppppuVar9;
          if ((uVar7 == 0x6e69) && (uVar20 == 0xe200000000000000)) {
LAB_1049cc644:
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar13 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar13 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar13, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuStack_e0 = pppppuVar15;
              ppppuStack_d8 = pppppuVar13;
              *(undefined8 ******)((long)alStack_120 + lVar6) = &ppppuStack_e0;
              uVar16 = 0;
              FUN_1048ee2c4(FUN_1049cd594,auStack_130 + lVar6,pppppuVar9);
              _swift_bridgeObjectRelease(pppppuVar9);
              func_0x000100183ab8(auStack_b8);
              func_0x000100183ab8(auStack_98);
              goto LAB_1049cbf28;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x6e69;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6e69,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) ||
             (((uVar22 = 0x796e615f7369, uVar7 == 0x796e615f7369 && (uVar20 == 0xe600000000000000))
              || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x796e615f7369,0xe600000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0)))
             ) goto LAB_1049cc644;
          uVar22 = 0x6e695f7274735f69;
          if (((uVar7 == 0x6e695f7274735f69) && (uVar20 == 0xe800000000000000)) ||
             ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x6e695f7274735f69,0xe800000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0
              || (((uVar22 = 0x796e615f73695f69, uVar7 == 0x796e615f73695f69 &&
                   (uVar20 == 0xe800000000000000)) ||
                  (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x796e615f73695f69,0xe800000000000000,uVar7,uVar20,0),
                  (uVar22 & 1) != 0)))))) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            appppuStack_110[0] = pppppuVar15;
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            puVar3 = PTR___sSSN_11034da80;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuVar19 = pppppuVar9[2];
              ppppuVar23 = (undefined8 ****)0xffffffffffffffff;
              pppppuVar15 = pppppuVar9 + 5;
              do {
                bVar5 = (long)ppppuVar23 - (long)ppppuVar19 == -1;
                uVar16 = (uint)!bVar5;
                if (bVar5) break;
                ppppuVar23 = (undefined8 ****)((long)ppppuVar23 + 1);
                if (pppppuVar9[2] <= ppppuVar23) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1049ccb60);
                  (*pcVar4)();
                }
                ppppuStack_e0 = pppppuVar15[-1];
                pppppuVar13 = (undefined8 *****)*pppppuVar15;
                ppppuStack_100 = appppuStack_110[0];
                lVar14 = 0;
                ppppuStack_f8 = pppppuVar12;
                ppppuStack_d8 = pppppuVar13;
                __s10Foundation6LocaleVMa();
                lVar8 = lVar21;
                (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar21,1,1,lVar14);
                func_0x000100e8b654();
                _swift_bridgeObjectRetain(pppppuVar13);
                *(long *)((long)alStack_120 + lVar6) = lVar8;
                *(long *)((long)alStack_120 + lVar6 + 8) = lVar8;
                pppppuVar11 = &ppppuStack_100;
                __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                          (pppppuVar11,1,0,0,1,lVar21,puVar3,puVar3);
                func_0x0001049cd4dc(lVar21,0x1130a37f0);
                _swift_bridgeObjectRelease(pppppuVar13);
                pppppuVar15 = pppppuVar15 + 2;
              } while (pppppuVar11 != (undefined8 *****)0x0);
LAB_1049cc8a0:
              _swift_bridgeObjectRelease(pppppuVar9);
              goto LAB_1049cc054;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0;
          if (((uVar7 == 0x6e695f746f6e) && (uVar20 == 0xe600000000000000)) ||
             ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x6e695f746f6e,0xe600000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0 ||
              (((uVar22 = 0x615f746f6e5f7369, uVar7 == 0x615f746f6e5f7369 &&
                (uVar20 == 0xea0000000000796e)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x615f746f6e5f7369,0xea0000000000796e,uVar7,uVar20,0), (uVar22 & 1) != 0)
               ))))) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar13 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar13 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar13, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuStack_e0 = pppppuVar15;
              ppppuStack_d8 = pppppuVar13;
              *(undefined8 ******)((long)alStack_120 + lVar6) = &ppppuStack_e0;
              uVar16 = 0;
              FUN_1048ee2c4(FUN_1049cd518,auStack_130 + lVar6,pppppuVar9);
              _swift_bridgeObjectRelease(pppppuVar9);
              func_0x000100183ab8(auStack_b8);
              func_0x000100183ab8(auStack_98);
              goto LAB_1049cc138;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x6f6e5f7274735f69;
          if (((uVar7 == 0x6f6e5f7274735f69) && (uVar20 == 0xec0000006e695f74)) ||
             ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x6f6e5f7274735f69,0xec0000006e695f74,uVar7,uVar20,0), (uVar22 & 1) != 0
              || (((uVar22 = 0x746f6e5f73695f69, uVar7 == 0x746f6e5f73695f69 &&
                   (uVar20 == 0xec000000796e615f)) ||
                  (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x746f6e5f73695f69,0xec000000796e615f,uVar7,uVar20,0),
                  (uVar22 & 1) != 0)))))) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            appppuStack_110[0] = pppppuVar15;
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            puVar3 = PTR___sSSN_11034da80;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuVar19 = pppppuVar9[2];
              ppppuVar23 = (undefined8 ****)0xffffffffffffffff;
              pppppuVar15 = pppppuVar9 + 5;
              do {
                bVar5 = (long)ppppuVar23 - (long)ppppuVar19 == -1;
                uVar16 = (uint)bVar5;
                if (bVar5) break;
                ppppuVar23 = (undefined8 ****)((long)ppppuVar23 + 1);
                if (pppppuVar9[2] <= ppppuVar23) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1049ccd7c);
                  (*pcVar4)();
                }
                ppppuStack_e0 = pppppuVar15[-1];
                pppppuVar13 = (undefined8 *****)*pppppuVar15;
                ppppuStack_100 = appppuStack_110[0];
                lVar14 = 0;
                ppppuStack_f8 = pppppuVar12;
                ppppuStack_d8 = pppppuVar13;
                __s10Foundation6LocaleVMa();
                lVar8 = lVar21;
                (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar21,1,1,lVar14);
                func_0x000100e8b654();
                _swift_bridgeObjectRetain(pppppuVar13);
                *(long *)((long)alStack_120 + lVar6) = lVar8;
                *(long *)((long)alStack_120 + lVar6 + 8) = lVar8;
                pppppuVar11 = &ppppuStack_100;
                __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                          (pppppuVar11,1,0,0,1,lVar21,puVar3,puVar3);
                func_0x0001049cd4dc(lVar21,0x1130a37f0);
                _swift_bridgeObjectRelease(pppppuVar13);
                pppppuVar15 = pppppuVar15 + 2;
              } while (pppppuVar11 != (undefined8 *****)0x0);
              goto LAB_1049cc8a0;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0;
          _swift_bridgeObjectRelease(pppppuVar9);
          if (((uVar7 == 0x616d5f7865676572) && (uVar20 == 0xeb00000000686374)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x616d5f7865676572,0xeb00000000686374,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            pppppuVar18 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            pppppuVar11 = pppppuVar13;
            if ((pppppuVar18 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar18, pppppuVar13 != (undefined8 *****)0x0)) {
              lVar14 = 0;
              ppppuStack_100 = pppppuVar15;
              ppppuStack_f8 = pppppuVar13;
              ppppuStack_e0 = pppppuVar9;
              ppppuStack_d8 = pppppuVar18;
              __s10Foundation6LocaleVMa();
              lVar8 = lVar21;
              (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar21,1,1,lVar14);
              func_0x000100e8b654();
              *(long *)((long)alStack_120 + lVar6) = lVar8;
              *(long *)((long)alStack_120 + lVar6 + 8) = lVar8;
              uVar16 = 0;
              __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
                        (&ppppuStack_100,0x400,0,0,1,lVar21,PTR___sSSN_11034da80,
                         PTR___sSSN_11034da80);
              func_0x0001049cd4dc(lVar21,0x1130a37f0);
              goto LAB_1049cc120;
            }
            goto LAB_1049cce80;
          }
          if ((uVar7 == 0x7165) && (uVar20 == 0xe200000000000000)) {
LAB_1049ccd00:
            _swift_bridgeObjectRelease(uVar20);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            pppppuVar11 = pppppuVar13;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              if ((pppppuVar9 == pppppuVar15) && (pppppuVar12 == pppppuVar13)) {
                uVar16 = 1;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pppppuVar9,pppppuVar12,pppppuVar15,pppppuVar13,0);
                uVar16 = (uint)pppppuVar9;
              }
              goto LAB_1049cc04c;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x7165;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7165,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d && (uVar20 == 0xe100000000000000))))
          goto LAB_1049ccd00;
          uVar22 = 0x3d;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d,0xe100000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d3d && (uVar20 == 0xe200000000000000))))
          goto LAB_1049ccd00;
          uVar22 = 0x3d3d;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d3d,0xe200000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049ccd00;
          if ((uVar7 == 0x71656e) && (uVar20 == 0xe300000000000000)) {
LAB_1049cce20:
            _swift_bridgeObjectRelease(uVar20);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            pppppuVar11 = pppppuVar13;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              if ((pppppuVar9 == pppppuVar15) && (pppppuVar12 == pppppuVar13)) {
                _swift_bridgeObjectRelease(pppppuVar12);
                goto LAB_1049cc598;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (pppppuVar9,pppppuVar12,pppppuVar15,pppppuVar13,0);
              _swift_bridgeObjectRelease(pppppuVar12);
              _swift_bridgeObjectRelease(pppppuVar13);
              uVar16 = (uint)pppppuVar9 ^ 1;
              goto LAB_1049cc058;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x71656e,0xe300000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x656e && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cce20;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656e,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d21 && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cce20;
          uVar22 = 0x3d21;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d21,0xe200000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049cce20;
          _swift_bridgeObjectRelease(pppppuVar13);
          if ((uVar7 == 0x746c) && (uVar20 == 0xe200000000000000)) {
LAB_1049ccf68:
            _swift_bridgeObjectRelease(uVar20);
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)(dVar2 < (double)CONCAT17(in_register_00005007,
                                                     CONCAT16(in_register_00005006,
                                                              CONCAT15(in_register_00005005,
                                                                       CONCAT14(in_register_00005004
                                                                                ,CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                  ));
            goto LAB_1049cce98;
          }
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x746c,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3c && (uVar20 == 0xe100000000000000))))
          goto LAB_1049ccf68;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3c,0xe100000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049ccf68;
          uVar22 = 0;
          if ((((uVar7 == 0x65746c) && (uVar20 == 0xe300000000000000)) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x65746c,0xe300000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0)) ||
             ((uVar7 == 0x656c && (uVar20 == 0xe200000000000000)))) {
LAB_1049cd07c:
            _swift_bridgeObjectRelease(uVar20);
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)(dVar2 <= (double)CONCAT17(in_register_00005007,
                                                      CONCAT16(in_register_00005006,
                                                               CONCAT15(in_register_00005005,
                                                                        CONCAT14(
                                                  in_register_00005004,
                                                  CONCAT13(in_register_00005003,
                                                           CONCAT12(in_register_00005002,
                                                                    CONCAT11(in_register_00005001,
                                                                             in_b0))))))));
            goto LAB_1049cce98;
          }
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656c,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d3c && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cd07c;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d3c,0xe200000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049cd07c;
          if ((uVar7 == 0x7467) && (uVar20 == 0xe200000000000000)) {
LAB_1049cd154:
            _swift_bridgeObjectRelease(uVar20);
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)((double)CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ) < dVar2);
            goto LAB_1049cce98;
          }
          uVar22 = 0x7467;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7467,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3e && (uVar20 == 0xe100000000000000))))
          goto LAB_1049cd154;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3e,0xe100000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049cd154;
          if ((uVar7 == 0x657467) && (uVar20 == 0xe300000000000000)) {
LAB_1049cd248:
            _swift_bridgeObjectRelease(uVar20);
LAB_1049cd27c:
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)((double)CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ) <= dVar2);
            goto LAB_1049cce98;
          }
          uVar22 = 0x657467;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x657467,0xe300000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x6567 && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cd248;
          uVar22 = 0x6567;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6567,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d3e && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cd248;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d3e,0xe200000000000000,uVar7,uVar20,0);
          _swift_bridgeObjectRelease(uVar20);
          if ((uVar22 & 1) != 0) goto LAB_1049cd27c;
        }
        func_0x000100183ab8(auStack_b8);
      }
      func_0x000100183ab8(auStack_98);
    }
  }
LAB_1049cce94:
  uVar16 = 0;
LAB_1049cce98:
  return uVar16 & 1;
}



/* Entry: 1049cd2e8; end: 1049cd517;  */

void FUN_1049cd2e8(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e8600);
  return;
}



/* Entry: 1049cd518; end: 1049cd52f;  */

uint FUN_1049cd518(uint param_1)

{
  FUN_1049cd530();
  return param_1 & 1;
}



/* Entry: 1049cd530; end: 1049cd583;  */

uint FUN_1049cd530(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1049cd584; end: 1049cd593;  */

void FUN_1049cd584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1049cd594; end: 1049cd5ab;  */

uint FUN_1049cd594(uint param_1)

{
  FUN_1049cd518();
  return param_1 & 1;
}



/* Entry: 1049cd5ac; end: 1049cd5af;  */

void FUN_1049cd5ac(void)

{
  return;
}



/* Entry: 1049cd5b0; end: 1049cd65f;  */

undefined1  [16] FUN_1049cd5b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x49);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010f21c070);
  uVar1 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0xd000000000000028,0x800000010f21c090);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1049cd660; end: 1049cd677;  */

void FUN_1049cd660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1049cd678; end: 1049cd70f;  */

void FUN_1049cd678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1049cd710; end: 1049cd7fb;  */

void FUN_1049cd710(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_bridgeObjectRetain(param_3);
  uVar1 = param_2;
  func_0x0001049ce198(param_2,param_3);
  if (((uint)uVar1 & 0xff) != 0x25) {
    _swift_bridgeObjectRelease(param_3);
    FUN_1049cd7fc(&uStack_40,uVar1);
    param_3 = uStack_38;
    param_2 = uStack_40;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1049cd7fc; end: 1049cdeab;  */

undefined1  [16] FUN_1049cd7fc(char *param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  bool in_CY;
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 in_register_00005008;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  pcVar1 = (char *)((ulong)param_3 & 0xff);
  puVar2 = &UNK_10dd4aff0;
  uVar3 = (ulong)(byte)pcVar1[0x10dd4aff0] * 4 + 0x1049cd818;
  switch(pcVar1) {
  default:
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  case (char *)0x96:
  case (char *)0x97:
  case (char *)0x9f:
  case (char *)0xa5:
  case (char *)0xa9:
  case (char *)0xab:
  case (char *)0xf2:
    auVar5._8_8_ = param_4;
    auVar5._0_8_ = param_3;
    return auVar5;
  case (char *)0x1:
  case (char *)0x67:
    pcVar1 = &UNK_10dd6b000;
  case (char *)0x78:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0x668);
    param_2 = *(undefined8 *)(pcVar1 + 0x660);
  case (char *)0x64:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar23._8_8_ = param_4;
    auVar23._0_8_ = param_3;
    return auVar23;
  case (char *)0x2:
  case (char *)0x54:
    pcVar1 = "ManagerE";
  case (char *)0xb2:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0x178);
    param_2 = *(undefined8 *)(pcVar1 + 0x170);
  case (char *)0x52:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0x46:
    auVar19._8_8_ = param_4;
    auVar19._0_8_ = param_3;
    return auVar19;
  case (char *)0x3:
  case (char *)0x60:
    pcVar1 = "U";
  case (char *)0x86:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0x978);
    param_2 = *(undefined8 *)(pcVar1 + 0x970);
  case (char *)0x5d:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0x30:
    auVar21._8_8_ = param_4;
    auVar21._0_8_ = param_3;
    return auVar21;
  case (char *)0x4:
  case (char *)0x51:
    in_register_00005008 = 4;
    param_2 = 0;
  case (char *)0x4b:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar14._8_8_ = param_4;
    auVar14._0_8_ = param_3;
    return auVar14;
  case (char *)0x5:
    pcVar1 = "8perfetto12protos_small19TracePacketDefaultsE";
  case (char *)0x82:
    uVar4 = *(undefined8 *)(pcVar1 + 0xa20);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0xa28);
    *(undefined8 *)param_1 = uVar4;
    auVar27._8_8_ = param_4;
    auVar27._0_8_ = param_3;
    return auVar27;
  case (char *)0x6:
    pcVar1 = "8perfetto12protos_small19TracePacketDefaultsE";
  case (char *)0x3d:
    uVar4 = *(undefined8 *)(pcVar1 + 0x9e0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0x9e8);
    *(undefined8 *)param_1 = uVar4;
  case (char *)0xfc:
    auVar30._8_8_ = param_4;
    auVar30._0_8_ = param_3;
    return auVar30;
  case (char *)0x7:
  case (char *)0x61:
  case (char *)0xf9:
    in_register_00005008 = 7;
    param_2 = 0;
  case (char *)0x66:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar22._8_8_ = param_4;
    auVar22._0_8_ = param_3;
    return auVar22;
  case (char *)0x8:
    pcVar1 = "RKNS1_5ValueEEXtlZNS1_25isEmptyCompoundExpressionEvE3$_0EEvEE";
  case (char *)0x74:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0x438);
    param_2 = *(undefined8 *)(pcVar1 + 0x430);
  case (char *)0x34:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0xd0:
  case (char *)0xd8:
  case (char *)0xe0:
  case (char *)0xe8:
    auVar33._8_8_ = param_4;
    auVar33._0_8_ = param_3;
    return auVar33;
  case (char *)0x9:
  case (char *)0x5e:
    in_register_00005008 = 9;
    param_2 = 0;
  case (char *)0x4f:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar16._8_8_ = param_4;
    auVar16._0_8_ = param_3;
    return auVar16;
  case (char *)0xa:
    pcVar1 = "\x05";
  case (char *)0x27:
    uVar4 = *(undefined8 *)(pcVar1 + 0x9c0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0x9c8);
    *(undefined8 *)param_1 = uVar4;
    auVar32._8_8_ = param_4;
    auVar32._0_8_ = param_3;
    return auVar32;
  case (char *)0xb:
  case (char *)0x59:
    pcVar1 = "8perfetto12protos_small19TracePacketDefaultsE";
  case (char *)0xb4:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0x9f8);
    param_2 = *(undefined8 *)(pcVar1 + 0x9f0);
  case (char *)0x4d:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0x47:
  case (char *)0xa4:
    auVar13._8_8_ = param_4;
    auVar13._0_8_ = param_3;
    return auVar13;
  case (char *)0xc:
  case (char *)0x69:
    pcVar1 = "@\x01";
  case (char *)0x35:
  case (char *)0x90:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0x1e8);
    param_2 = *(undefined8 *)(pcVar1 + 0x1e0);
  case (char *)0x5b:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar15._8_8_ = param_4;
    auVar15._0_8_ = param_3;
    return auVar15;
  case (char *)0xd:
    pcVar1 = "";
  case (char *)0xa2:
    uVar4 = *(undefined8 *)(pcVar1 + 0x5e0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0x5e8);
    *(undefined8 *)param_1 = uVar4;
    auVar29._8_8_ = param_4;
    auVar29._0_8_ = param_3;
    return auVar29;
  case (char *)0xe:
  case (char *)0x53:
    pcVar1 = "8perfetto12protos_small19TracePacketDefaultsE";
  case (char *)0x25:
  case (char *)0xa6:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0xa08);
    param_2 = *(undefined8 *)(pcVar1 + 0xa00);
  case (char *)0x40:
  case (char *)0x63:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0xaa:
    auVar11._8_8_ = param_4;
    auVar11._0_8_ = param_3;
    return auVar11;
  case (char *)0xf:
  case (char *)0x68:
    in_register_00005008 = 0xf;
    param_2 = 0;
  case (char *)0x6a:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar20._8_8_ = param_4;
    auVar20._0_8_ = param_3;
    return auVar20;
  case (char *)0x10:
  case (char *)0x4e:
    in_register_00005008 = 0x10;
    param_2 = 0;
  case (char *)0x56:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar10._8_8_ = param_4;
    auVar10._0_8_ = param_3;
    return auVar10;
  case (char *)0x11:
    pcVar1 = &UNK_10dbb2000;
  case (char *)0x31:
  case (char *)0x88:
    uVar4 = *(undefined8 *)(pcVar1 + 0xe10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0xe18);
    *(undefined8 *)param_1 = uVar4;
    auVar25._8_8_ = param_4;
    auVar25._0_8_ = param_3;
    return auVar25;
  case (char *)0x12:
    pcVar1 = "";
  case (char *)0xa0:
    uVar4 = *(undefined8 *)(pcVar1 + 0x5f0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0x5f8);
    *(undefined8 *)param_1 = uVar4;
    auVar31._8_8_ = param_4;
    auVar31._0_8_ = param_3;
    return auVar31;
  case (char *)0x13:
    pcVar1 = "8perfetto12protos_small19TracePacketDefaultsE";
  case (char *)0x76:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0xa18);
    param_2 = *(undefined8 *)(pcVar1 + 0xa10);
  case (char *)0x2c:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar37._8_8_ = param_4;
    auVar37._0_8_ = param_3;
    return auVar37;
  case (char *)0x14:
  case (char *)0x2e:
    param_1[8] = '\x14';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    auVar26._8_8_ = param_4;
    auVar26._0_8_ = param_3;
    return auVar26;
  case (char *)0x15:
    pcVar1 = "";
  case (char *)0x3e:
    uVar4 = *(undefined8 *)(pcVar1 + 0xfe0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0xfe8);
    *(undefined8 *)param_1 = uVar4;
    auVar28._8_8_ = param_4;
    auVar28._0_8_ = param_3;
    return auVar28;
  case (char *)0x16:
    param_1[8] = '\x16';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  case (char *)0xbc:
    auVar36._8_8_ = param_4;
    auVar36._0_8_ = param_3;
    return auVar36;
  case (char *)0x17:
    pcVar1 = &UNK_10dbb2000;
  case (char *)0x44:
    uVar4 = *(undefined8 *)(pcVar1 + 0xe70);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0xe78);
    *(undefined8 *)param_1 = uVar4;
    auVar38._8_8_ = param_4;
    auVar38._0_8_ = param_3;
    return auVar38;
  case (char *)0x18:
  case (char *)0x50:
    in_register_00005008 = 0x18;
    param_2 = 0;
  case (char *)0x5c:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar18._8_8_ = param_4;
    auVar18._0_8_ = param_3;
    return auVar18;
  case (char *)0x19:
  case (char *)0x5f:
    pcVar1 = "";
  case (char *)0x8c:
  case (char *)0xdd:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0xfc8);
    param_2 = *(undefined8 *)(pcVar1 + 0xfc0);
  case (char *)0x33:
  case (char *)0x57:
  case (char *)0xe5:
  case (char *)0xed:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar17._8_8_ = param_4;
    auVar17._0_8_ = param_3;
    return auVar17;
  case (char *)0x1a:
    pcVar1 = "";
  case (char *)0x39:
  case (char *)0x72:
    uVar4 = *(undefined8 *)(pcVar1 + 0xfb0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0xfb8);
    *(undefined8 *)param_1 = uVar4;
    auVar41._8_8_ = param_4;
    auVar41._0_8_ = param_3;
    return auVar41;
  case (char *)0x1b:
  case (char *)0x5a:
    in_register_00005008 = 0x1b;
    param_2 = 0;
  case (char *)0x58:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar8._8_8_ = param_4;
    auVar8._0_8_ = param_3;
    return auVar8;
  case (char *)0x1c:
    pcVar1 = "";
  case (char *)0x7e:
    uVar4 = *(undefined8 *)(pcVar1 + 0xf90);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0xf98);
    *(undefined8 *)param_1 = uVar4;
    auVar39._8_8_ = param_4;
    auVar39._0_8_ = param_3;
    return auVar39;
  case (char *)0x1d:
    in_register_00005008 = 0x1d;
    param_2 = 0;
  case (char *)0x36:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar40._8_8_ = param_4;
    auVar40._0_8_ = param_3;
    return auVar40;
  case (char *)0x1e:
    param_1[8] = '\x1e';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    auVar34._8_8_ = param_4;
    auVar34._0_8_ = param_3;
    return auVar34;
  case (char *)0x1f:
  case (char *)0x29:
    param_1[8] = '\x1f';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    auVar24._8_8_ = param_4;
    auVar24._0_8_ = param_3;
    return auVar24;
  case (char *)0x20:
    pcVar1 = "8perfetto12protos_small19TracePacketDefaultsE";
  case (char *)0x28:
  case (char *)0x8e:
    uVar4 = *(undefined8 *)(pcVar1 + 0x1e0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar1 + 0x1e8);
    *(undefined8 *)param_1 = uVar4;
    auVar35._8_8_ = param_4;
    auVar35._0_8_ = param_3;
    return auVar35;
  case (char *)0x21:
  case (char *)0x62:
    in_register_00005008 = 0x21;
    param_2 = 0;
  case (char *)0x4c:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
    auVar12._8_8_ = param_4;
    auVar12._0_8_ = param_3;
    return auVar12;
  case (char *)0x22:
  case (char *)0x6b:
    pcVar1 = "";
  case (char *)0x49:
  case (char *)0xb8:
  case (char *)0xbd:
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xe1:
  case (char *)0xe9:
  case (char *)0xfd:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0xf58);
    param_2 = *(undefined8 *)(pcVar1 + 0xf50);
  case (char *)0x55:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0xa8:
    auVar9._8_8_ = param_4;
    auVar9._0_8_ = param_3;
    return auVar9;
  case (char *)0x23:
  case (char *)0x6d:
  case (char *)0xbf:
  case (char *)0xd3:
  case (char *)0xdb:
  case (char *)0xe3:
  case (char *)0xeb:
  case (char *)0xff:
    pcVar1 = "";
  case (char *)0xca:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0xf48);
    param_2 = *(undefined8 *)(pcVar1 + 0xf40);
  case (char *)0x6e:
  case (char *)0xcc:
  case (char *)0xec:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0xfb:
    auVar6._8_8_ = param_4;
    auVar6._0_8_ = param_3;
    return auVar6;
  case (char *)0x24:
  case (char *)0x65:
    pcVar1 = "";
  case (char *)0xb6:
    in_register_00005008 = *(undefined8 *)(pcVar1 + 0xf38);
    param_2 = *(undefined8 *)(pcVar1 + 0xf30);
  case (char *)0x48:
  case (char *)0x6c:
  case (char *)0xe4:
    *(undefined8 *)(param_1 + 8) = in_register_00005008;
    *(undefined8 *)param_1 = param_2;
  case (char *)0x9e:
    auVar7._8_8_ = param_4;
    auVar7._0_8_ = param_3;
    return auVar7;
  case (char *)0x2a:
    pcVar1 = (char *)0x25;
  case (char *)0xfa:
    if (in_CY) {
      param_1 = pcVar1;
    }
    auVar42._8_8_ = param_4;
    auVar42._0_8_ = param_1;
    return auVar42;
  case (char *)0x2b:
  case (char *)0xbe:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
  case (char *)0xea:
  case (char *)0xfe:
    param_4 = 0x73646e65;
  case (char *)0x98:
    param_4 = param_4 & 0xffffffffffff | 0xec00000000000000;
    param_3 = (char *)0x72657375;
  case (char *)0x37:
    param_3 = (char *)((ulong)param_3 & 0xffff0000ffffffff | 0x665f00000000);
  case (char *)0xc2:
    auVar44._0_8_ = (ulong)param_3 & 0xffffffffffff | 0x6972000000000000;
    auVar44._8_8_ = param_4;
    return auVar44;
  case (char *)0x2d:
    param_4 = param_4 & 0xffff0000ffffffff | 0x656700000000;
  case (char *)0x9a:
    param_4 = param_4 & 0xffffffffffff | 0xee00000000000000;
    param_3 = (char *)0x72657375;
  case (char *)0xc1:
    param_3 = (char *)((ulong)param_3 & 0xffff0000ffffffff | 0x615f00000000);
  case (char *)0x43:
    auVar46._0_8_ = (ulong)param_3 & 0xffffffffffff | 0x6567000000000000;
    auVar46._8_8_ = param_4;
    return auVar46;
  case (char *)0x3a:
    param_4 = 0x6f72;
    param_1 = param_3;
  case (char *)0xae:
    param_4 = param_4 & 0xffff | 0xee00656c69660000;
    param_3 = (char *)0x63696c627570;
  case (char *)0x32:
    param_3 = (char *)((ulong)param_3 & 0xffffffffffff | 0x705f000000000000);
    param_1 = (char *)((ulong)param_1 & 0xff);
  case (char *)0x92:
    puVar2 = (undefined *)0x1049cdab4;
    uVar3 = (ulong)(byte)param_1[0x10dd4b015];
  case (char *)0xd5:
                    /* WARNING: Could not recover jumptable at 0x0001049cdab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(puVar2 + uVar3 * 4))(param_3,param_4);
    auVar43._8_8_ = param_4;
    auVar43._0_8_ = param_3;
    return auVar43;
  case (char *)0x7a:
    param_3 = (char *)0x6c5f72657375;
  case (char *)0xc0:
    param_3 = (char *)((ulong)param_3 & 0xffffffffffff | 0x6e69000000000000);
  case (char *)0x2f:
    auVar45._8_8_ = param_4;
    auVar45._0_8_ = param_3;
    return auVar45;
  case (char *)0x80:
    param_4 = (ulong)(param_1 + 0x7f0) | 0x8000000000000000;
  case (char *)0x41:
    auVar51._8_8_ = param_4;
    auVar51._0_8_ = 0xd00000000000001d;
    return auVar51;
  case (char *)0x84:
    param_4 = param_4 & 0xffffffff | 0xed00006e00000000;
    param_3 = (char *)0x72657375;
  case (char *)0x3c:
    auVar50._0_8_ = (ulong)param_3 & 0xffffffff | 0x6d6f685f00000000;
    auVar50._8_8_ = param_4;
    return auVar50;
  case (char *)0x8a:
    param_4 = (ulong)(param_1 + -0x20) | 0x8000000000000000;
    param_1 = (char *)0x5;
    pcVar1 = (char *)0x12;
  case (char *)0x45:
    auVar47._0_8_ = (ulong)pcVar1 | 0xd000000000000000 | (ulong)param_1;
    auVar47._8_8_ = param_4;
    return auVar47;
  case (char *)0x94:
    param_4 = param_4 & 0xffffffffffff | 0xed00000000000000;
    param_3 = (char *)0x6c5f72657375;
  case (char *)0x38:
  case (char *)0xd4:
    auVar49._0_8_ = (ulong)param_3 & 0xffffffffffff | 0x636f000000000000;
    auVar49._8_8_ = param_4;
    return auVar49;
  case (char *)0x9c:
    auVar53._8_8_ = 0xed00007961646874;
    auVar53._0_8_ = 0x7269625f72657375;
    return auVar53;
  case (char *)0xac:
    param_4 = ((ulong)param_1 & 0xffff0000ffff | 0xeb00000000730000) + 0x509;
    param_3 = (char *)0x7375;
  case (char *)0x42:
    auVar52._0_8_ = (ulong)param_3 & 0xffff | 0x6576655f72650000;
    auVar52._8_8_ = param_4;
    return auVar52;
  case (char *)0xb0:
    param_3 = (char *)0xd000000000000012;
    param_1 = "user_actions.books";
  case (char *)0x3f:
    auVar55._8_8_ = (ulong)(param_1 + -0x20) | 0x8000000000000000;
    auVar55._0_8_ = param_3;
    return auVar55;
  case (char *)0xdc:
  case (char *)0xde:
  case (char *)0xe6:
  case (char *)0xee:
  case (char *)0xf8:
    param_4 = 0xe800000000000000;
  case (char *)0x7c:
    param_3 = (char *)0x65725f736461;
  case (char *)0xd6:
    param_3 = (char *)((ulong)param_3 & 0xffffffffffff | 0x6461000000000000);
  case (char *)0x3b:
    auVar48._8_8_ = param_4;
    auVar48._0_8_ = param_3;
    return auVar48;
  case (char *)0xdf:
  case (char *)0xe7:
  case (char *)0xef:
    auVar54._8_8_ = 0x800000010f222630;
    auVar54._0_8_ = 0xd000000000000013;
    return auVar54;
  }
}



/* Entry: 1049cdeac; end: 1049ce04b;  */

void FUN_1049cdeac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  switch(uVar1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 6;
    break;
  case 7:
    uVar1 = 7;
    break;
  case 8:
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = 10;
    break;
  case 0xb:
    uVar1 = 0xb;
    break;
  case 0xc:
    uVar1 = 0xc;
    break;
  case 0xd:
    uVar1 = 0xd;
    break;
  case 0xe:
    uVar1 = 0xe;
    break;
  case 0xf:
    uVar1 = 0xf;
    break;
  case 0x10:
    uVar1 = 0x10;
    break;
  case 0x11:
    uVar1 = 0x11;
    break;
  case 0x12:
    uVar1 = 0x12;
    break;
  case 0x13:
    uVar1 = 0x13;
    break;
  case 0x14:
    uVar1 = 0x14;
    break;
  case 0x15:
    uVar1 = 0x15;
    break;
  case 0x16:
    uVar1 = 0x16;
    break;
  case 0x17:
    uVar1 = 0x17;
    break;
  case 0x18:
    uVar1 = 0x18;
    break;
  case 0x19:
    uVar1 = 0x19;
    break;
  case 0x1a:
    uVar1 = 0x1a;
    break;
  case 0x1b:
    uVar1 = 0x1b;
    break;
  case 0x1c:
    uVar1 = 0x1c;
    break;
  case 0x1d:
    uVar1 = 0x1d;
    break;
  case 0x1e:
    uVar1 = 0x1e;
    break;
  case 0x1f:
    uVar1 = 0x1f;
    break;
  case 0x20:
    uVar1 = 0x20;
    break;
  case 0x21:
    uVar1 = 0x21;
    break;
  case 0x22:
    uVar1 = 0x22;
    break;
  case 0x23:
    uVar1 = 0x23;
    break;
  case 0x24:
    uVar1 = 0x24;
    break;
  default:
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyySuF(0x25);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,uVar1);
    return;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 1049ce04c; end: 1049ce0db;  */

void FUN_1049ce04c(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = unaff_x20[1];
  uStack_30 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_1049cdeac(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049ce0dc; end: 1049ce0df;  */

void FUN_1049ce0dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  switch(uVar1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 6;
    break;
  case 7:
    uVar1 = 7;
    break;
  case 8:
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = 10;
    break;
  case 0xb:
    uVar1 = 0xb;
    break;
  case 0xc:
    uVar1 = 0xc;
    break;
  case 0xd:
    uVar1 = 0xd;
    break;
  case 0xe:
    uVar1 = 0xe;
    break;
  case 0xf:
    uVar1 = 0xf;
    break;
  case 0x10:
    uVar1 = 0x10;
    break;
  case 0x11:
    uVar1 = 0x11;
    break;
  case 0x12:
    uVar1 = 0x12;
    break;
  case 0x13:
    uVar1 = 0x13;
    break;
  case 0x14:
    uVar1 = 0x14;
    break;
  case 0x15:
    uVar1 = 0x15;
    break;
  case 0x16:
    uVar1 = 0x16;
    break;
  case 0x17:
    uVar1 = 0x17;
    break;
  case 0x18:
    uVar1 = 0x18;
    break;
  case 0x19:
    uVar1 = 0x19;
    break;
  case 0x1a:
    uVar1 = 0x1a;
    break;
  case 0x1b:
    uVar1 = 0x1b;
    break;
  case 0x1c:
    uVar1 = 0x1c;
    break;
  case 0x1d:
    uVar1 = 0x1d;
    break;
  case 0x1e:
    uVar1 = 0x1e;
    break;
  case 0x1f:
    uVar1 = 0x1f;
    break;
  case 0x20:
    uVar1 = 0x20;
    break;
  case 0x21:
    uVar1 = 0x21;
    break;
  case 0x22:
    uVar1 = 0x22;
    break;
  case 0x23:
    uVar1 = 0x23;
    break;
  case 0x24:
    uVar1 = 0x24;
    break;
  default:
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyySuF(0x25);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,uVar1);
    return;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 1049ce0e0; end: 1049ce123;  */

void FUN_1049ce0e0(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = unaff_x20[1];
  uStack_30 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_1049cdeac(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049ce124; end: 1049ce127;  */

uint FUN_1049ce124(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *param_1;
  uVar5 = param_1[1];
  lVar4 = *param_2;
  uVar2 = param_2[1];
  switch(uVar5) {
  case 0:
    if (uVar2 == 0) {
      func_0x000104994548(lVar1,0);
      uVar5 = 0;
code_r0x0001049ce7b8:
      func_0x000104994548(lVar4,uVar5);
      return 1;
    }
    break;
  case 1:
    if (uVar2 == 1) {
      func_0x000104994548(lVar1,1);
      func_0x000104994548(lVar4,1);
      return 1;
    }
    break;
  case 2:
    if (uVar2 == 2) {
      func_0x000104994548(lVar1,2);
      uVar5 = 2;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 3:
    if (uVar2 == 3) {
      func_0x000104994548(lVar1,3);
      uVar5 = 3;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 4:
    if (uVar2 == 4) {
      func_0x000104994548(lVar1,4);
      uVar5 = 4;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 5:
    if (uVar2 == 5) {
      func_0x000104994548(lVar1,5);
      uVar5 = 5;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 6:
    if (uVar2 == 6) {
      func_0x000104994548(lVar1,6);
      uVar5 = 6;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 7:
    if (uVar2 == 7) {
      func_0x000104994548(lVar1,7);
      uVar5 = 7;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 8:
    if (uVar2 == 8) {
      func_0x000104994548(lVar1,8);
      uVar5 = 8;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 9:
    if (uVar2 == 9) {
      func_0x000104994548(lVar1,9);
      uVar5 = 9;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 10:
    if (uVar2 == 10) {
      func_0x000104994548(lVar1,10);
      uVar5 = 10;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xb:
    if (uVar2 == 0xb) {
      func_0x000104994548(lVar1,0xb);
      uVar5 = 0xb;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xc:
    if (uVar2 == 0xc) {
      func_0x000104994548(lVar1,0xc);
      uVar5 = 0xc;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xd:
    if (uVar2 == 0xd) {
      func_0x000104994548(lVar1,0xd);
      uVar5 = 0xd;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xe:
    if (uVar2 == 0xe) {
      func_0x000104994548(lVar1,0xe);
      uVar5 = 0xe;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xf:
    if (uVar2 == 0xf) {
      func_0x000104994548(lVar1,0xf);
      uVar5 = 0xf;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x10:
    if (uVar2 == 0x10) {
      func_0x000104994548(lVar1,0x10);
      uVar5 = 0x10;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x11:
    if (uVar2 == 0x11) {
      func_0x000104994548(lVar1,0x11);
      uVar5 = 0x11;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x12:
    if (uVar2 == 0x12) {
      func_0x000104994548(lVar1,0x12);
      uVar5 = 0x12;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x13:
    if (uVar2 == 0x13) {
      func_0x000104994548(lVar1,0x13);
      uVar5 = 0x13;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x14:
    if (uVar2 == 0x14) {
      func_0x000104994548(lVar1,0x14);
      uVar5 = 0x14;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x15:
    if (uVar2 == 0x15) {
      func_0x000104994548(lVar1,0x15);
      uVar5 = 0x15;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x16:
    if (uVar2 == 0x16) {
      func_0x000104994548(lVar1,0x16);
      uVar5 = 0x16;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x17:
    if (uVar2 == 0x17) {
      func_0x000104994548(lVar1,0x17);
      uVar5 = 0x17;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x18:
    if (uVar2 == 0x18) {
      func_0x000104994548(lVar1,0x18);
      uVar5 = 0x18;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x19:
    if (uVar2 == 0x19) {
      func_0x000104994548(lVar1,0x19);
      uVar5 = 0x19;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1a:
    if (uVar2 == 0x1a) {
      func_0x000104994548(lVar1,0x1a);
      uVar5 = 0x1a;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1b:
    if (uVar2 == 0x1b) {
      func_0x000104994548(lVar1,0x1b);
      uVar5 = 0x1b;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1c:
    if (uVar2 == 0x1c) {
      func_0x000104994548(lVar1,0x1c);
      uVar5 = 0x1c;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1d:
    if (uVar2 == 0x1d) {
      func_0x000104994548(lVar1,0x1d);
      uVar5 = 0x1d;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1e:
    if (uVar2 == 0x1e) {
      func_0x000104994548(lVar1,0x1e);
      uVar5 = 0x1e;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1f:
    if (uVar2 == 0x1f) {
      func_0x000104994548(lVar1,0x1f);
      uVar5 = 0x1f;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x20:
    if (uVar2 == 0x20) {
      func_0x000104994548(lVar1,0x20);
      uVar5 = 0x20;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x21:
    if (uVar2 == 0x21) {
      func_0x000104994548(lVar1,0x21);
      uVar5 = 0x21;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x22:
    if (uVar2 == 0x22) {
      func_0x000104994548(lVar1,0x22);
      uVar5 = 0x22;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x23:
    if (uVar2 == 0x23) {
      func_0x000104994548(lVar1,0x23);
      uVar5 = 0x23;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x24:
    if (uVar2 == 0x24) {
      func_0x000104994548(lVar1,0x24);
      uVar5 = 0x24;
      goto code_r0x0001049ce7b8;
    }
    break;
  default:
    if (0x24 < uVar2) {
      if (lVar1 != lVar4 || uVar5 != uVar2) {
        lVar3 = lVar1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar1,uVar5,lVar4,uVar2,0);
        func_0x000104994534(lVar4,uVar2);
        func_0x000104994534(lVar1,uVar5);
        func_0x000104994548(lVar1,uVar5);
        func_0x000104994548(lVar4,uVar2);
        return (uint)lVar3 & 1;
      }
      func_0x000104994534(lVar1,uVar5);
      func_0x000104994534(lVar1,uVar5);
      func_0x000104994548(lVar1,uVar5);
      lVar4 = lVar1;
      goto code_r0x0001049ce7b8;
    }
  }
  func_0x000104994534(lVar4,uVar2);
  func_0x000104994534(lVar1,uVar5);
  func_0x000104994548(lVar1,uVar5);
  func_0x000104994548(lVar4,uVar2);
  return 0;
}



/* Entry: 1049ce128; end: 1049ce213;  */

void FUN_1049ce128(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  uVar1 = uVar3;
  func_0x0001049ce198(uVar3,uVar2);
  if (((uint)uVar1 & 0xff) != 0x25) {
    _swift_bridgeObjectRelease(uVar2);
    FUN_1049cd7fc(&uStack_40,uVar1);
    uVar2 = uStack_38;
    uVar3 = uStack_40;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1049ce214; end: 1049ce7d7;  */

uint FUN_1049ce214(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *param_1;
  uVar5 = param_1[1];
  lVar4 = *param_2;
  uVar2 = param_2[1];
  switch(uVar5) {
  case 0:
    if (uVar2 == 0) {
      func_0x000104994548(lVar1,0);
      uVar5 = 0;
code_r0x0001049ce7b8:
      func_0x000104994548(lVar4,uVar5);
      return 1;
    }
    break;
  case 1:
    if (uVar2 == 1) {
      func_0x000104994548(lVar1,1);
      func_0x000104994548(lVar4,1);
      return 1;
    }
    break;
  case 2:
    if (uVar2 == 2) {
      func_0x000104994548(lVar1,2);
      uVar5 = 2;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 3:
    if (uVar2 == 3) {
      func_0x000104994548(lVar1,3);
      uVar5 = 3;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 4:
    if (uVar2 == 4) {
      func_0x000104994548(lVar1,4);
      uVar5 = 4;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 5:
    if (uVar2 == 5) {
      func_0x000104994548(lVar1,5);
      uVar5 = 5;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 6:
    if (uVar2 == 6) {
      func_0x000104994548(lVar1,6);
      uVar5 = 6;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 7:
    if (uVar2 == 7) {
      func_0x000104994548(lVar1,7);
      uVar5 = 7;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 8:
    if (uVar2 == 8) {
      func_0x000104994548(lVar1,8);
      uVar5 = 8;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 9:
    if (uVar2 == 9) {
      func_0x000104994548(lVar1,9);
      uVar5 = 9;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 10:
    if (uVar2 == 10) {
      func_0x000104994548(lVar1,10);
      uVar5 = 10;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xb:
    if (uVar2 == 0xb) {
      func_0x000104994548(lVar1,0xb);
      uVar5 = 0xb;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xc:
    if (uVar2 == 0xc) {
      func_0x000104994548(lVar1,0xc);
      uVar5 = 0xc;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xd:
    if (uVar2 == 0xd) {
      func_0x000104994548(lVar1,0xd);
      uVar5 = 0xd;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xe:
    if (uVar2 == 0xe) {
      func_0x000104994548(lVar1,0xe);
      uVar5 = 0xe;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0xf:
    if (uVar2 == 0xf) {
      func_0x000104994548(lVar1,0xf);
      uVar5 = 0xf;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x10:
    if (uVar2 == 0x10) {
      func_0x000104994548(lVar1,0x10);
      uVar5 = 0x10;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x11:
    if (uVar2 == 0x11) {
      func_0x000104994548(lVar1,0x11);
      uVar5 = 0x11;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x12:
    if (uVar2 == 0x12) {
      func_0x000104994548(lVar1,0x12);
      uVar5 = 0x12;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x13:
    if (uVar2 == 0x13) {
      func_0x000104994548(lVar1,0x13);
      uVar5 = 0x13;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x14:
    if (uVar2 == 0x14) {
      func_0x000104994548(lVar1,0x14);
      uVar5 = 0x14;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x15:
    if (uVar2 == 0x15) {
      func_0x000104994548(lVar1,0x15);
      uVar5 = 0x15;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x16:
    if (uVar2 == 0x16) {
      func_0x000104994548(lVar1,0x16);
      uVar5 = 0x16;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x17:
    if (uVar2 == 0x17) {
      func_0x000104994548(lVar1,0x17);
      uVar5 = 0x17;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x18:
    if (uVar2 == 0x18) {
      func_0x000104994548(lVar1,0x18);
      uVar5 = 0x18;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x19:
    if (uVar2 == 0x19) {
      func_0x000104994548(lVar1,0x19);
      uVar5 = 0x19;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1a:
    if (uVar2 == 0x1a) {
      func_0x000104994548(lVar1,0x1a);
      uVar5 = 0x1a;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1b:
    if (uVar2 == 0x1b) {
      func_0x000104994548(lVar1,0x1b);
      uVar5 = 0x1b;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1c:
    if (uVar2 == 0x1c) {
      func_0x000104994548(lVar1,0x1c);
      uVar5 = 0x1c;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1d:
    if (uVar2 == 0x1d) {
      func_0x000104994548(lVar1,0x1d);
      uVar5 = 0x1d;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1e:
    if (uVar2 == 0x1e) {
      func_0x000104994548(lVar1,0x1e);
      uVar5 = 0x1e;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x1f:
    if (uVar2 == 0x1f) {
      func_0x000104994548(lVar1,0x1f);
      uVar5 = 0x1f;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x20:
    if (uVar2 == 0x20) {
      func_0x000104994548(lVar1,0x20);
      uVar5 = 0x20;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x21:
    if (uVar2 == 0x21) {
      func_0x000104994548(lVar1,0x21);
      uVar5 = 0x21;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x22:
    if (uVar2 == 0x22) {
      func_0x000104994548(lVar1,0x22);
      uVar5 = 0x22;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x23:
    if (uVar2 == 0x23) {
      func_0x000104994548(lVar1,0x23);
      uVar5 = 0x23;
      goto code_r0x0001049ce7b8;
    }
    break;
  case 0x24:
    if (uVar2 == 0x24) {
      func_0x000104994548(lVar1,0x24);
      uVar5 = 0x24;
      goto code_r0x0001049ce7b8;
    }
    break;
  default:
    if (0x24 < uVar2) {
      if (lVar1 != lVar4 || uVar5 != uVar2) {
        lVar3 = lVar1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar1,uVar5,lVar4,uVar2,0);
        func_0x000104994534(lVar4,uVar2);
        func_0x000104994534(lVar1,uVar5);
        func_0x000104994548(lVar1,uVar5);
        func_0x000104994548(lVar4,uVar2);
        return (uint)lVar3 & 1;
      }
      func_0x000104994534(lVar1,uVar5);
      func_0x000104994534(lVar1,uVar5);
      func_0x000104994548(lVar1,uVar5);
      lVar4 = lVar1;
      goto code_r0x0001049ce7b8;
    }
  }
  func_0x000104994534(lVar4,uVar2);
  func_0x000104994534(lVar1,uVar5);
  func_0x000104994548(lVar1,uVar5);
  func_0x000104994548(lVar4,uVar2);
  return 0;
}



/* Entry: 1049ce7d8; end: 1049ceb37;  */

void FUN_1049ce7d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309cba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4b12c;
  _swift_getWitnessTable(&UNK_10dd4b12c,&UNK_1107bc018);
  puRam000000011309cba8 = puVar1;
  return;
}



/* Entry: 1049ceb38; end: 1049ceb43;  */

void FUN_1049ceb38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  uVar1 = uVar3;
  func_0x0001049ce198(uVar3,uVar2);
  if (((uint)uVar1 & 0xff) != 0x25) {
    _swift_bridgeObjectRelease(uVar2);
    FUN_1049cd7fc(&uStack_40,uVar1);
    uVar2 = uStack_38;
    uVar3 = uStack_40;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1049ceb44; end: 1049ceb4b;  */

undefined8 * FUN_1049ceb44(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1049ceb4c; end: 1049cec6f;  */

uint FUN_1049ceb4c(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar5 = -0x13ffffff919a9491;
  if (param_1 < 2) {
    lVar4 = 0x745f737365636361;
    lVar6 = lVar5;
    if (param_1 != 0) {
      lVar6 = -0x1c00000000000000;
      lVar4 = 0x65707974;
    }
  }
  else {
    lVar4 = 0x6874646977;
    if (param_1 != 2) {
      lVar4 = 0x746867696568;
    }
    lVar6 = -0x1b00000000000000;
    if (param_1 != 2) {
      lVar6 = -0x1a00000000000000;
    }
  }
  lVar1 = 0x6874646977;
  if (param_2 != 2) {
    lVar1 = 0x746867696568;
  }
  lVar2 = -0x1b00000000000000;
  if (param_2 != 2) {
    lVar2 = -0x1a00000000000000;
  }
  lVar3 = 0x745f737365636361;
  if (param_2 != 0) {
    lVar5 = -0x1c00000000000000;
    lVar3 = 0x65707974;
  }
  if (param_2 < 2) {
    lVar2 = lVar5;
    lVar1 = lVar3;
  }
  if ((lVar4 == lVar1) && (lVar6 == lVar2)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar4,lVar6,lVar1,lVar2,0);
    uVar7 = (uint)lVar4;
  }
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar2);
  return uVar7 & 1;
}



/* Entry: 1049cec70; end: 1049cecdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cec70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  FUN_1049cece0(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + _DAT_1130a3940),
                ((undefined8 *)(unaff_x20 + _DAT_1130a3940))[1],param_4,lVar1);
  return;
}



/* Entry: 1049cece0; end: 1049cf74f;  */

/* WARNING: Removing unreachable block (ram,0x0001049ced48) */

void FUN_1049cece0(undefined8 param_1,double param_2,double param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1049b1a14(&puStack_b0);
  lVar14 = lStack_98;
  uVar5 = uStack_a0;
  uVar4 = uStack_a8;
  puVar10 = puStack_b0;
  puVar8 = (undefined *)0x1130a3888;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 6;
  *(undefined8 *)(puVar8 + 0x10) = 3;
  puVar8[0x20] = 1;
  if ((long)param_6 < 2) {
    if (param_6 == (undefined *)0x0) {
      uVar17 = 0xe600000000000000;
      uVar20 = 0x657261757173;
    }
    else {
      if (param_6 != (undefined *)0x1) {
LAB_1049cf72c:
        puStack_b0 = param_6;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_1107bc0e0,&puStack_b0,&UNK_1107bc0e0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf750);
        (*pcVar6)();
      }
      uVar17 = 0xe600000000000000;
      uVar20 = 0x6c616d726f6e;
    }
  }
  else if (param_6 == (undefined *)0x2) {
    uVar17 = 0xe500000000000000;
    uVar20 = 0x6d75626c61;
  }
  else if (param_6 == (undefined *)0x3) {
    uVar17 = 0xe500000000000000;
    uVar20 = 0x6c6c616d73;
  }
  else {
    if (param_6 != (undefined *)0x4) goto LAB_1049cf72c;
    uVar17 = 0xe500000000000000;
    uVar20 = 0x656772616c;
  }
  *(undefined8 *)(puVar8 + 0x28) = uVar20;
  *(undefined8 *)(puVar8 + 0x30) = uVar17;
  puVar8[0x38] = 2;
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf704);
    (*pcVar6)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf708);
    (*pcVar6)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf70c);
    (*pcVar6)();
  }
  puStack_b0 = (undefined *)(long)param_2;
  puVar9 = PTR___sSiN_11034deb0;
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar8 + 0x40) = puVar9;
  *(undefined **)(puVar8 + 0x48) = puVar11;
  puVar8[0x50] = 3;
  if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf710);
    (*pcVar6)();
  }
  if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf714);
    (*pcVar6)();
  }
  if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf718);
    (*pcVar6)();
  }
  puStack_b0 = (undefined *)(long)param_3;
  puVar9 = PTR___sSiN_11034deb0;
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar8 + 0x58) = puVar9;
  *(undefined **)(puVar8 + 0x60) = puVar11;
  puVar9 = puVar8;
  func_0x00010499c2b4();
  _swift_setDeallocating(puVar8);
  uVar17 = 0x1130a3890;
  func_0x0001048db364(0x1130a3890);
  _swift_arrayDestroy(puVar8 + 0x20,3,uVar17);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined *)0x0) {
    lVar18 = lStack_90;
    puVar8 = PTR_s_clientToken_1125acf18;
    _objc_msgSend(lStack_90,PTR_s_clientToken_1125acf18);
    _objc_retainAutoreleasedReturnValue();
    if (lVar18 == 0) {
      lVar18 = 0x11309d598;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(lVar18 + 0x18) = 2;
      *(undefined8 *)(lVar18 + 0x10) = 1;
      *(undefined **)(lVar18 + 0x38) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar18 + 0x20) = 0xd0000000000000fd;
      *(undefined8 *)(lVar18 + 0x28) = 0x800000010f227a70;
      __ss5print_9separator10terminatoryypd_S2StF();
      _swift_bridgeObjectRelease(lVar18);
    }
    else {
      lVar13 = lVar18;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar18);
      puVar10 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native(puVar9);
      puStack_b0 = puVar9;
      func_0x00010499b60c(lVar13,puVar8,0,puVar10);
      puVar9 = puStack_b0;
    }
  }
  else {
    puVar8 = puVar10;
    puVar16 = PTR_s_tokenString_11267a6c8;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar8);
    puVar8 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native(puVar9);
    puStack_b0 = puVar9;
    func_0x00010499b60c(puVar11,puVar16,0,puVar8);
    _objc_release(puVar10);
    puVar9 = puStack_b0;
  }
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar21 = 1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
  uVar25 = 0xffffffffffffffff;
  if ((long)uVar21 < 0x40) {
    uVar25 = ~(-1L << (uVar21 & 0x3f));
  }
  uVar25 = uVar25 & *(ulong *)(puVar9 + 0x40);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(puVar9);
  lVar18 = 0;
  while( true ) {
    while (uVar25 != 0) {
      uVar19 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar25 = uVar25 - 1 & uVar25;
      uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar18 << 6;
      bVar3 = *(byte *)(*(long *)(puVar9 + 0x30) + uVar19);
      puVar15 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar19 * 0x10);
      uVar17 = *puVar15;
      uVar20 = puVar15[1];
      uVar19 = 0x6874646977;
      if (bVar3 != 2) {
        uVar19 = 0x746867696568;
      }
      uVar2 = 0xe500000000000000;
      if (bVar3 != 2) {
        uVar2 = 0xe600000000000000;
      }
      uVar12 = 0x745f737365636361;
      if (bVar3 != 0) {
        uVar12 = 0x65707974;
      }
      uVar23 = 0xec0000006e656b6f;
      if (bVar3 != 0) {
        uVar23 = 0xe400000000000000;
      }
      if (bVar3 < 2) {
        uVar2 = uVar23;
        uVar19 = uVar12;
      }
      _swift_bridgeObjectRetain_n(uVar20,2);
      puVar10 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = uVar19;
      uVar23 = uVar2;
      puStack_b0 = puVar8;
      func_0x000100029284();
      uVar22 = (ulong)~(uint)uVar23 & 1;
      lVar13 = *(long *)(puVar8 + 0x10) + uVar22;
      if (SCARRY8(*(long *)(puVar8 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf6fc);
        (*pcVar6)();
      }
      if (*(long *)(puVar8 + 0x18) < lVar13) {
        func_0x0001001833c8(lVar13,puVar10);
        uVar12 = uVar19;
        uVar22 = uVar2;
        func_0x000100029284();
        puVar8 = puStack_b0;
        if (((uint)uVar23 & 1) != ((uint)uVar22 & 1)) goto LAB_1049cf71c;
      }
      else {
        puVar8 = puStack_b0;
        if (((ulong)puVar10 & 1) == 0) {
          func_0x000100184498();
          puVar8 = puStack_b0;
        }
      }
      puStack_b0 = puVar8;
      if ((uVar23 & 1) == 0) {
        *(ulong *)(puVar8 + (uVar12 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar8 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar19;
        puVar1[1] = uVar2;
        puVar15 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar12 * 0x10);
        *puVar15 = uVar17;
        puVar15[1] = uVar20;
        _swift_bridgeObjectRelease(uVar20);
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf700);
          (*pcVar6)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar2);
        puVar8 = puStack_b0;
        puVar15 = (undefined8 *)(*(long *)(puStack_b0 + 0x38) + uVar12 * 0x10);
        uVar24 = puVar15[1];
        *puVar15 = uVar17;
        puVar15[1] = uVar20;
        _swift_bridgeObjectRelease(uVar20);
        _swift_bridgeObjectRelease(uVar24);
      }
    }
    bVar7 = SCARRY8(lVar18,1);
    lVar18 = lVar18 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf6f8);
      (*pcVar6)();
    }
    if ((long)(uVar21 + 0x3f >> 6) <= lVar18) break;
    uVar25 = *(ulong *)((long)(puVar9 + 0x40) + lVar18 * 8);
  }
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(puVar9);
  puVar10 = PTR_PTR_1126add50;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  _objc_msgSend();
  _objc_release(puVar10);
  if ((int)puVar9 == 0) {
    uVar20 = 0xe500000000000000;
    uVar17 = 0x6870617267;
    goto LAB_1049cf4b8;
  }
  puVar10 = PTR_PTR_1126ade78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar9;
  _objc_msgSend(puVar9,PTR_s_domainInfo_1125bf938);
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined *)0x0) {
LAB_1049cf490:
    uStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
LAB_1049cf49c:
    func_0x00010006e7f4(&puStack_b0);
  }
  else {
    uVar17 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar11 = puVar10;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar10,PTR___sSSN_11034da80,uVar17,PTR___sSSSHsWP_11034da90);
    _objc_release(puVar10);
    if (*(long *)(puVar11 + 0x10) == 0) {
LAB_1049cf488:
      _swift_bridgeObjectRelease(puVar11);
      goto LAB_1049cf490;
    }
    _swift_bridgeObjectRetain(puVar11);
    lVar18 = 0x5f746c7561666564;
    uVar25 = 0xee006769666e6f63;
    func_0x000100029284();
    if ((uVar25 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar11);
      goto LAB_1049cf488;
    }
    lVar18 = *(long *)(*(long *)(puVar11 + 0x38) + lVar18 * 8);
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRelease_n(puVar11,2);
    if (*(long *)(lVar18 + 0x10) == 0) {
LAB_1049cf6a0:
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar18);
      uVar25 = 0;
      lVar13 = -0x2fffffffffffffdf;
      func_0x000100029284(0xd000000000000021);
      if ((uVar25 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar18);
        goto LAB_1049cf6a0;
      }
      func_0x0001000bb420(*(long *)(lVar18 + 0x38) + lVar13 * 0x20,&puStack_b0);
      _swift_bridgeObjectRelease(lVar18);
    }
    _swift_bridgeObjectRelease(lVar18);
    if (lStack_98 == 0) goto LAB_1049cf49c;
    puVar15 = &uStack_130;
    _swift_dynamicCast(puVar15,&puStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar15 & 1) != 0) {
      _objc_release(puVar9);
      uVar17 = uStack_130;
      uVar20 = uStack_128;
      goto LAB_1049cf4b8;
    }
  }
  _objc_release(puVar9);
  uVar20 = 0xe300000000000000;
  uVar17 = 0x317065;
LAB_1049cf4b8:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar17,uVar20);
  _swift_bridgeObjectRelease(uVar20);
  puStack_b0 = param_4;
  uStack_a8 = param_5;
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(0x2f,0xe100000000000000);
  __sSS6appendyySSF(0x65727574636970,0xe700000000000000);
  uVar20 = uStack_a8;
  puVar10 = puStack_b0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_b0,uStack_a8);
  _swift_bridgeObjectRelease(uVar20);
  puVar9 = puVar8;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar8);
  puStack_b0 = (undefined *)0x0;
  lVar18 = lStack_88;
  _objc_msgSend(lStack_88,PTR_s_facebookURLWithHostPrefix_path_q_1125c5690,uVar17,puVar10,puVar9,
                &puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar8 = puStack_b0;
  if (lVar18 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(param_1,lVar18);
    _objc_retain(puVar8);
    _swift_unknownObjectRelease(lStack_88);
    _swift_unknownObjectRelease(lStack_90);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(uVar5);
    _swift_unknownObjectRelease(uVar4);
    _objc_release(lVar18);
  }
  else {
    puVar10 = puStack_b0;
    _objc_retain(puStack_b0);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar8);
    _objc_release(puVar10);
    _swift_willThrow();
    _swift_errorRelease(puVar8);
    _swift_unknownObjectRelease(lStack_88);
    _swift_unknownObjectRelease(lStack_90);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(uVar5);
    _swift_unknownObjectRelease(uVar4);
  }
  lVar14 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1,lVar18 == 0,1,lVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_1049cf71c:
  __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1049cf72c);
  (*pcVar6)();
}



/* Entry: 1049cf750; end: 1049cf767;  */

void FUN_1049cf750(void)

{
  func_0x0001049cfd30();
  return;
}



/* Entry: 1049cf768; end: 1049cf76b;  */

void FUN_1049cf768(void)

{
  return;
}



/* Entry: 1049cf76c; end: 1049cf77f;  */

bool FUN_1049cf76c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1049cf780; end: 1049cf85b;  */

void FUN_1049cf780(void)

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



/* Entry: 1049cf85c; end: 1049cf867;  */

void FUN_1049cf85c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1049cf868; end: 1049cf977; -[FBSDKProfile imageURLForPictureMode:size:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049cf868(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  _swift_getObjectType();
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  puVar5 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1130a3940);
  uVar1 = ((undefined8 *)(param_3 + _DAT_1130a3940))[1];
  _objc_retain(param_3);
  FUN_1049cece0(puVar5,param_1,param_2,uVar4,uVar1,param_5);
  _objc_release(param_3);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
  uVar4 = 0;
  if ((int)puVar3 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1049cf978; end: 1049cfa7f; +[FBSDKProfile getImageURLWithProfileID:pictureMode:size:] */

void FUN_1049cf978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _swift_getObjCClassMetadata(param_3);
  FUN_1049cece0(puVar4,param_1,param_2,param_5,param_4,param_6,param_3);
  _swift_bridgeObjectRelease(param_4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049cfa80; end: 1049cfa8b;  */

uint FUN_1049cfa80(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  bVar3 = *param_2;
  bVar4 = *param_1;
  lVar7 = -0x13ffffff919a9491;
  if (bVar4 < 2) {
    lVar6 = 0x745f737365636361;
    lVar8 = lVar7;
    if (bVar4 != 0) {
      lVar8 = -0x1c00000000000000;
      lVar6 = 0x65707974;
    }
  }
  else {
    lVar6 = 0x6874646977;
    if (bVar4 != 2) {
      lVar6 = 0x746867696568;
    }
    lVar8 = -0x1b00000000000000;
    if (bVar4 != 2) {
      lVar8 = -0x1a00000000000000;
    }
  }
  lVar1 = 0x6874646977;
  if (bVar3 != 2) {
    lVar1 = 0x746867696568;
  }
  lVar2 = -0x1b00000000000000;
  if (bVar3 != 2) {
    lVar2 = -0x1a00000000000000;
  }
  lVar5 = 0x745f737365636361;
  if (bVar3 != 0) {
    lVar7 = -0x1c00000000000000;
    lVar5 = 0x65707974;
  }
  if (bVar3 < 2) {
    lVar2 = lVar7;
    lVar1 = lVar5;
  }
  if ((lVar6 == lVar1) && (lVar8 == lVar2)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar6,lVar8,lVar1,lVar2,0);
    uVar9 = (uint)lVar6;
  }
  _swift_bridgeObjectRelease(lVar8);
  _swift_bridgeObjectRelease(lVar2);
  return uVar9 & 1;
}



/* Entry: 1049cfa8c; end: 1049cfcb7;  */

void FUN_1049cfa8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xec0000006e656b6f;
  uVar1 = 0x6874646977;
  if (bVar3 != 2) {
    uVar1 = 0x746867696568;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar4 = 0x745f737365636361;
  if (bVar3 != 0) {
    uVar5 = 0xe400000000000000;
    uVar4 = 0x65707974;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049cfcb8; end: 1049cfd3f;  */

void FUN_1049cfcb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xec0000006e656b6f;
  uVar1 = 0x6874646977;
  if (bVar3 != 2) {
    uVar1 = 0x746867696568;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar4 = 0x745f737365636361;
  if (bVar3 != 0) {
    uVar5 = 0xe400000000000000;
    uVar4 = 0x65707974;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1049cfd40; end: 1049cff4b;  */

void FUN_1049cfd40(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4b274;
  _swift_getWitnessTable(&UNK_10dd4b274,&UNK_1107bc0e0);
  puRam00000001130a3898 = puVar1;
  return;
}



/* Entry: 1049cff4c; end: 1049cffbf;  */

ulong FUN_1049cff4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar2) {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 1049cffc0; end: 1049d0037;  */

void FUN_1049cffc0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_allocWithZone();
  _objc_msgSend();
  uVar2 = 0x79792f64642f4d4d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79792f64642f4d4d,0xea00000000007979);
  _objc_msgSend(puVar1,PTR_s_setDateFormat__1126400f8,uVar2);
  _objc_release(uVar2);
  puRam00000001130a38a8 = puVar1;
  return;
}



/* Entry: 1049d0038; end: 1049d0043; -[FBSDKProfile profileToData] */

void FUN_1049d0038(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049d0044();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d0044; end: 1049d0f03;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d0044(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long extraout_x12;
  undefined *puVar19;
  undefined **ppuVar20;
  long unaff_x20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined1 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined **appuStack_160 [2];
  undefined **appuStack_150 [2];
  long lStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long alStack_e8 [2];
  undefined *apuStack_d8 [4];
  undefined *puStack_b8;
  undefined **appuStack_b0 [4];
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_78;
  long lStack_70;
  
  puVar27 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar4 + -8);
  ppuVar12 = (undefined **)
             ((long)appuStack_160 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar11 = 0x11309c628;
  appuStack_160[1] = ppuVar12;
  lStack_108 = lVar4;
  func_0x0001048db364();
  lVar11 = (long)ppuVar12 - (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_140 = lVar11;
  __s10Foundation4DateVMa();
  ppuVar22 = *(undefined ***)(lVar4 + -8);
  ppuVar12 = (undefined **)(lVar11 - ((ulong)(ppuVar22[8] + 0xf) & 0xfffffffffffffff0));
  lVar11 = 0x11309c5e0;
  appuStack_160[0] = ppuVar12;
  lStack_130 = lVar4;
  func_0x0001048db364();
  uVar13 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_120 = (long)ppuVar12 - uVar13;
  lVar11 = lStack_120 - uVar13;
  ppuVar12 = (undefined **)0x11309d990;
  ppuStack_110 = (undefined **)lVar11;
  func_0x0001048db364();
  _swift_allocObject();
  ppuVar26 = ppuStack_110;
  ppuVar12[3] = (undefined *)0x14;
  ppuVar12[2] = (undefined *)0xa;
  appuStack_150[1] = ppuVar12 + 4;
  *appuStack_150[1] = (undefined *)0x6469;
  puVar24 = PTR___sSSN_11034da80;
  puVar19 = *(undefined **)(unaff_x20 + _DAT_1130a3940);
  appuStack_150[0] = (undefined **)((undefined8 *)(unaff_x20 + _DAT_1130a3940))[1];
  ppuVar12[5] = (undefined *)0xe200000000000000;
  ppuVar12[6] = puVar19;
  ppuVar12[7] = (undefined *)appuStack_150[0];
  ppuVar12[9] = puVar24;
  ppuVar12[10] = (undefined *)0x616e5f7473726966;
  ppuVar12[0xb] = (undefined *)0xea0000000000656d;
  puVar19 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_1130a3948))[1];
  if (puVar19 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    puVar24 = (undefined *)0x0;
    ppuVar12[0xe] = (undefined *)0x0;
  }
  else {
    puVar14 = *(undefined **)(unaff_x20 + _DAT_1130a3948);
    puVar25 = puVar19;
  }
  ppuVar12[0xc] = puVar14;
  ppuVar12[0xd] = puVar25;
  ppuVar12[0xf] = puVar24;
  ppuVar12[0x10] = (undefined *)0x6e5f656c6464696d;
  ppuVar12[0x11] = (undefined *)0xeb00000000656d61;
  puVar24 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_1130a3950))[1];
  if (puVar24 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    ppuVar12[0x14] = (undefined *)0x0;
  }
  else {
    puVar15 = *(undefined **)(unaff_x20 + _DAT_1130a3950);
    puVar25 = PTR___sSSN_11034da80;
    puVar14 = puVar24;
  }
  ppuVar12[0x12] = puVar15;
  ppuVar12[0x13] = puVar14;
  ppuVar12[0x15] = puVar25;
  ppuVar12[0x16] = (undefined *)0x6d616e5f7473616c;
  ppuVar12[0x17] = (undefined *)0xe900000000000065;
  puVar25 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_1130a3958))[1];
  if (puVar25 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    ppuVar12[0x1a] = (undefined *)0x0;
  }
  else {
    puVar16 = *(undefined **)(unaff_x20 + _DAT_1130a3958);
    puVar14 = PTR___sSSN_11034da80;
    puVar15 = puVar25;
  }
  ppuVar12[0x18] = puVar16;
  ppuVar12[0x19] = puVar15;
  ppuVar12[0x1b] = puVar14;
  ppuVar12[0x1c] = (undefined *)0x656d616e;
  ppuVar12[0x1d] = (undefined *)0xe400000000000000;
  puVar14 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_1130a3960))[1];
  if (puVar14 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    ppuVar12[0x20] = (undefined *)0x0;
  }
  else {
    puVar17 = *(undefined **)(unaff_x20 + _DAT_1130a3960);
    puVar15 = PTR___sSSN_11034da80;
    puVar16 = puVar14;
  }
  ppuVar12[0x1e] = puVar17;
  ppuVar12[0x1f] = puVar16;
  ppuVar12[0x21] = puVar15;
  ppuVar12[0x22] = (undefined *)0x6b6e696c;
  ppuVar12[0x23] = (undefined *)0xe400000000000000;
  ppuStack_138 = ppuVar22;
  func_0x0001049d4834(unaff_x20 + _DAT_1130a3968,ppuStack_110,0x11309c5e0);
  lVar4 = lStack_108;
  pcStack_128 = *(code **)(lVar21 + 0x30);
  puVar15 = (undefined *)0x1;
  (*pcStack_128)(ppuVar26,1,lStack_108);
  _swift_bridgeObjectRetain(puVar14);
  _swift_bridgeObjectRetain(appuStack_150[0]);
  _swift_bridgeObjectRetain(puVar19);
  _swift_bridgeObjectRetain(puVar24);
  _swift_bridgeObjectRetain();
  ppuVar22 = ppuStack_110;
  lStack_118 = lVar21;
  if ((int)ppuVar26 == 1) {
    func_0x0001049d47f8(ppuStack_110,0x11309c5e0);
    ppuVar12[0x25] = (undefined *)0x0;
    ppuVar12[0x24] = (undefined *)0x0;
    ppuVar12[0x27] = (undefined *)0x0;
    ppuVar12[0x26] = (undefined *)0x0;
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    ppuVar12[0x27] = PTR___sSSN_11034da80;
    ppuVar12[0x24] = puVar25;
    ppuVar12[0x25] = puVar15;
    (**(code **)(lVar21 + 8))(ppuVar22,lVar4);
  }
  ppuVar26 = ppuStack_138;
  ppuVar12[0x28] = (undefined *)0x6c69616d65;
  ppuVar12[0x29] = (undefined *)0xe500000000000000;
  puVar19 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_1130a3980))[1];
  if (puVar19 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    puVar24 = (undefined *)0x0;
    ppuVar12[0x2c] = (undefined *)0x0;
  }
  else {
    puVar14 = *(undefined **)(unaff_x20 + _DAT_1130a3980);
    puVar24 = PTR___sSSN_11034da80;
    puVar25 = puVar19;
  }
  ppuVar12[0x2a] = puVar14;
  ppuVar12[0x2b] = puVar25;
  ppuVar12[0x2d] = puVar24;
  ppuVar12[0x2e] = (undefined *)0x73646e65697266;
  ppuVar12[0x2f] = (undefined *)0xe700000000000000;
  puVar24 = *(undefined **)(unaff_x20 + _DAT_1130a3988);
  if (puVar24 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    ppuVar12[0x31] = (undefined *)0x0;
    ppuVar12[0x32] = (undefined *)0x0;
  }
  else {
    puVar25 = (undefined *)0x11309c618;
    func_0x0001048db364();
    puVar14 = puVar24;
  }
  ppuVar12[0x30] = puVar14;
  ppuVar12[0x33] = puVar25;
  ppuVar12[0x34] = (undefined *)0x6e776f74656d6f68;
  ppuVar12[0x35] = (undefined *)0xe800000000000000;
  ppuVar22 = *(undefined ***)(unaff_x20 + _DAT_1130a39a0);
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar18 = (undefined **)0x0;
    puVar25 = (undefined *)0x0;
    ppuVar12[0x37] = (undefined *)0x0;
    ppuVar12[0x38] = (undefined *)0x0;
  }
  else {
    puVar25 = (undefined *)0x0;
    func_0x0001049d455c(0,0x1130a38c8,&PTR_PTR_1126add70);
    ppuVar18 = ppuVar22;
  }
  ppuVar12[0x36] = (undefined *)ppuVar18;
  ppuVar12[0x39] = puVar25;
  ppuVar12[0x3a] = (undefined *)0x7265646e6567;
  ppuVar12[0x3b] = (undefined *)0xe600000000000000;
  puVar25 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_1130a39b0))[1];
  if (puVar25 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    ppuVar12[0x3e] = (undefined *)0x0;
  }
  else {
    puVar15 = *(undefined **)(unaff_x20 + _DAT_1130a39b0);
    puVar14 = PTR___sSSN_11034da80;
  }
  ppuVar12[0x3c] = puVar15;
  ppuVar12[0x3d] = puVar25;
  ppuVar12[0x3f] = puVar14;
  _swift_bridgeObjectRetain(puVar24);
  _swift_bridgeObjectRetain(puVar25);
  ppuVar18 = ppuVar22;
  _objc_retain();
  _objc_retain();
  ppuStack_110 = ppuVar18;
  _swift_bridgeObjectRetain(puVar19);
  ppuVar18 = ppuVar12;
  func_0x000102bcb3b0();
  _swift_setDeallocating(ppuVar12);
  uVar5 = 0x11309d670;
  func_0x0001048db364(0x11309d670);
  _swift_arrayDestroy(appuStack_150[1],10,uVar5);
  _swift_deallocClassInstance(ppuVar12,0x20,7);
  lVar4 = lStack_140;
  func_0x0001049d4834(unaff_x20 + _DAT_1130a3990,lStack_140,0x11309c628);
  lVar21 = lStack_130;
  lVar6 = lVar4;
  (*(code *)ppuVar26[6])(lVar4,1,lStack_130);
  ppuVar12 = appuStack_160[0];
  if ((int)lVar6 == 1) {
    func_0x0001049d47f8(lVar4,0x11309c628);
  }
  else {
    ppuVar7 = appuStack_160[0];
    (*(code *)ppuVar26[4])(appuStack_160[0],lVar4,lVar21);
    if (lRam000000011309ff10 != -1) {
      ppuVar7 = (undefined **)0x11309ff10;
      _swift_once(0x11309ff10,FUN_1049cffc0);
    }
    ppuVar23 = ppuRam00000001130a38a8;
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    puVar19 = PTR_s_stringFromDate__112674f28;
    _objc_msgSend(ppuVar23,PTR_s_stringFromDate__112674f28,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar23;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar23);
    puStack_78 = PTR___sSSN_11034da80;
    ppuVar23 = ppuVar18;
    ppuStack_90 = ppuVar7;
    puStack_88 = puVar19;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar18);
    appuStack_b0[0] = ppuVar18;
    func_0x00010499b758(&ppuStack_90,0x7961646874726962,0xe800000000000000,ppuVar23);
    (*(code *)ppuVar26[1])(ppuVar12,lVar21);
    ppuVar18 = appuStack_b0[0];
  }
  puVar19 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  ppuVar7 = *(undefined ***)(unaff_x20 + _DAT_1130a39a8);
  ppuVar12 = &PTR_s_moveTo_animationOptions__112612000;
  if (ppuVar7 != (undefined **)0x0) {
    _objc_retain();
    _swift_retain(puVar19);
    ppuVar12 = ppuVar7;
    puVar25 = PTR_s_id_1125d7128;
    _objc_msgSend(ppuVar7,PTR_s_id_1125d7128);
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar12;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar12);
    puVar24 = puVar19;
    _swift_isUniquelyReferenced_nonNull_native(puVar19);
    ppuStack_90 = (undefined **)puVar19;
    func_0x00010018433c(ppuVar26,puVar25,0x6469,0xe200000000000000,puVar24);
    ppuVar23 = ppuStack_90;
    ppuVar26 = ppuVar7;
    ppuVar12 = (undefined **)PTR_s_name_112612df0;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar26;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar26);
    ppuVar20 = ppuVar23;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar23);
    ppuStack_90 = ppuVar23;
    func_0x00010018433c(ppuVar10,ppuVar12,0x656d616e,0xe400000000000000,ppuVar20);
    ppuVar23 = ppuStack_90;
    puVar24 = (undefined *)0x11309c408;
    func_0x0001048db364();
    ppuVar10 = ppuVar18;
    ppuStack_90 = ppuVar23;
    puStack_78 = puVar24;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar18);
    appuStack_b0[0] = ppuVar18;
    func_0x00010499b758(&ppuStack_90,0x6e6f697461636f6c,0xe800000000000000,ppuVar10);
    _objc_release(ppuVar7);
    ppuVar18 = appuStack_b0[0];
  }
  lVar4 = lStack_118;
  if (ppuVar22 != (undefined **)0x0) {
    _swift_retain(puVar19);
    ppuVar12 = ppuStack_110;
    ppuVar26 = ppuStack_110;
    puVar25 = PTR_s_id_1125d7128;
    _objc_msgSend(ppuStack_110,PTR_s_id_1125d7128);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar26;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar26);
    puVar24 = puVar19;
    _swift_isUniquelyReferenced_nonNull_native(puVar19);
    ppuStack_90 = (undefined **)puVar19;
    func_0x00010018433c(ppuVar22,puVar25,0x6469,0xe200000000000000,puVar24);
    ppuVar22 = ppuStack_90;
    ppuVar7 = ppuVar12;
    ppuVar26 = (undefined **)PTR_s_name_112612df0;
    _objc_msgSend(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar22;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar22);
    ppuStack_90 = ppuVar22;
    func_0x00010018433c(ppuVar23,ppuVar26,0x656d616e,0xe400000000000000,ppuVar7);
    ppuVar22 = ppuStack_90;
    puVar24 = (undefined *)0x11309c408;
    func_0x0001048db364();
    ppuVar7 = ppuVar18;
    ppuStack_90 = ppuVar22;
    puStack_78 = puVar24;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar18);
    appuStack_b0[0] = ppuVar18;
    func_0x00010499b758(&ppuStack_90,0x6e776f74656d6f68,0xe800000000000000,ppuVar7);
    _objc_release(ppuVar12);
    ppuVar18 = appuStack_b0[0];
  }
  puVar24 = PTR___sSiN_11034deb0;
  ppuVar22 = *(undefined ***)(unaff_x20 + _DAT_1130a3998);
  if (ppuVar22 != (undefined **)0x0) {
    ppuStack_f8 = (undefined **)puVar19;
    _swift_retain(puVar19);
    _objc_retain();
    ppuVar7 = ppuVar22;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = &PTR_s_inputBufferIds_1125f7000;
    if (ppuVar7 == (undefined **)0x0) {
      func_0x000100216878(&ppuStack_90,0x6e696d,0xe300000000000000);
      func_0x0001049d47f8(&ppuStack_90,0x11309c428);
    }
    else {
      ppuVar23 = ppuVar7;
      _objc_msgSend();
      _objc_release(ppuVar7);
      puStack_78 = puVar24;
      ppuStack_90 = ppuVar23;
      func_0x000100102924(&ppuStack_90,appuStack_b0);
      puVar25 = puVar19;
      _swift_isUniquelyReferenced_nonNull_native(puVar19);
      ppuStack_100 = (undefined **)puVar19;
      func_0x0001001029e8(appuStack_b0,0x6e696d,0xe300000000000000,puVar25);
      ppuStack_f8 = ppuStack_100;
    }
    ppuVar7 = ppuVar22;
    _objc_msgSend(ppuVar22,PTR_s_max_11260e150);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      func_0x000100216878(&ppuStack_90,0x78616d,0xe300000000000000);
      func_0x0001049d47f8(&ppuStack_90,0x11309c428);
    }
    else {
      ppuVar23 = ppuVar7;
      _objc_msgSend();
      _objc_release(ppuVar7);
      puStack_78 = puVar24;
      ppuStack_90 = ppuVar23;
      func_0x000100102924(&ppuStack_90,appuStack_b0);
      ppuVar7 = ppuStack_f8;
      ppuVar23 = ppuStack_f8;
      _swift_isUniquelyReferenced_nonNull_native(ppuStack_f8);
      ppuStack_100 = ppuVar7;
      func_0x0001001029e8(appuStack_b0,0x78616d,0xe300000000000000,ppuVar23);
      ppuStack_f8 = ppuStack_100;
    }
    ppuVar7 = ppuStack_f8;
    puVar25 = (undefined *)0x11309c420;
    func_0x0001048db364();
    ppuVar23 = ppuVar18;
    ppuStack_90 = ppuVar7;
    puStack_78 = puVar25;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar18);
    appuStack_b0[0] = ppuVar18;
    func_0x00010499b758(&ppuStack_90,0x676e61725f656761,0xe900000000000065,ppuVar23);
    _objc_release(ppuVar22);
    ppuVar18 = appuStack_b0[0];
  }
  lVar21 = lStack_120;
  func_0x0001049d4834(unaff_x20 + _DAT_1130a3978,lStack_120,0x11309c5e0);
  lVar6 = lStack_108;
  lVar8 = lVar21;
  (*pcStack_128)(lVar21,1,lStack_108);
  ppuVar22 = appuStack_160[1];
  if ((int)lVar8 == 1) {
    func_0x0001049d47f8(lVar21,0x11309c5e0);
    ppuVar22 = ppuVar26;
  }
  else {
    (**(code **)(lVar4 + 0x20))(appuStack_160[1],lVar21,lVar6);
    puStack_78 = puVar24;
    ppuStack_90 = (undefined **)0x64;
    func_0x000100102924(&ppuStack_90,appuStack_b0);
    puVar25 = puVar19;
    _swift_retain(puVar19);
    _swift_isUniquelyReferenced_nonNull_native();
    ppuStack_f8 = (undefined **)puVar19;
    func_0x0001001029e8(appuStack_b0,0x746867696568,0xe600000000000000,puVar25);
    ppuVar26 = ppuStack_f8;
    puStack_78 = puVar24;
    ppuStack_90 = (undefined **)0x64;
    func_0x000100102924(&ppuStack_90,appuStack_b0);
    ppuVar7 = ppuVar26;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar26);
    ppuStack_f8 = ppuVar26;
    func_0x0001001029e8(appuStack_b0,0x6874646977,0xe500000000000000,ppuVar7);
    ppuVar7 = ppuStack_f8;
    puStack_78 = PTR___sSbN_11034dd40;
    ppuStack_90 = (undefined **)((ulong)ppuStack_90 & 0xffffffffffffff00);
    func_0x000100102924(&ppuStack_90,appuStack_b0);
    ppuVar23 = ppuVar7;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar7);
    puVar25 = (undefined *)0x6f686c69735f7369;
    ppuVar26 = (undefined **)appuStack_b0;
    ppuStack_f8 = ppuVar7;
    func_0x0001001029e8(ppuVar26,0x6f686c69735f7369,0xed00006574746575,ppuVar23);
    ppuVar7 = ppuStack_f8;
    __s10Foundation3URLV14absoluteStringSSvg();
    puStack_78 = PTR___sSSN_11034da80;
    ppuStack_90 = ppuVar26;
    puStack_88 = puVar25;
    func_0x000100102924(&ppuStack_90,appuStack_b0);
    ppuVar26 = ppuVar7;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar7);
    ppuStack_f8 = ppuVar7;
    func_0x0001001029e8(appuStack_b0,0x6c7275,0xe300000000000000,ppuVar26);
    ppuVar7 = ppuStack_f8;
    ppuVar26 = (undefined **)0x1130a38b8;
    func_0x0001048db364();
    _swift_initStackObject();
    ppuVar26[3] = (undefined *)0x2;
    ppuVar26[2] = (undefined *)0x1;
    ppuVar26[4] = (undefined *)0x61746164;
    ppuVar26[5] = (undefined *)0xe400000000000000;
    ppuVar26[6] = (undefined *)ppuVar7;
    ppuVar7 = ppuVar26;
    func_0x000102762c70();
    _swift_setDeallocating(ppuVar26);
    func_0x0001049d47f8(ppuVar26 + 4,0x1130a38c0);
    puVar25 = (undefined *)0x11309d898;
    func_0x0001048db364();
    ppuVar26 = ppuVar18;
    ppuStack_90 = ppuVar7;
    puStack_78 = puVar25;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar18);
    appuStack_b0[0] = ppuVar18;
    func_0x00010499b758(&ppuStack_90,0x65727574636970,0xe700000000000000,ppuVar26);
    (**(code **)(lVar4 + 8))(ppuVar22,lVar6);
    ppuVar18 = appuStack_b0[0];
  }
  ppuVar26 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  ppuVar7 = ppuVar18;
  FUN_1049d1078();
  _swift_bridgeObjectRelease(ppuVar18);
  ppuVar23 = ppuVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (ppuVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(ppuVar7);
  ppuStack_90 = (undefined **)0x0;
  puVar25 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  ppuVar10 = ppuVar23;
  _objc_msgSend(ppuVar26,PTR_s_dataWithJSONObject_options_error_1125b6c80,ppuVar23,0,&ppuStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar23);
  ppuVar7 = ppuStack_90;
  _objc_retain();
  if (ppuVar26 == (undefined **)0x0) {
    ppuVar26 = ppuVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(ppuVar7);
    _swift_willThrow();
    ppuVar7 = ppuVar26;
    _swift_errorRelease();
    ppuVar20 = (undefined **)0x0;
    puVar25 = (undefined *)0xf000000000000000;
  }
  else {
    ppuVar20 = ppuVar26;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    ppuVar7 = ppuVar26;
    _objc_release();
  }
  uVar3 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70;
  if ((bool)uVar3) {
    auVar28._8_8_ = puVar25;
    auVar28._0_8_ = ppuVar20;
    return auVar28;
  }
  ___stack_chk_fail();
  uVar13 = 0xe200000000000000;
  ppuVar9 = (undefined **)0x6469;
  ppuVar7 = (undefined **)((ulong)ppuVar7 & 0xff);
  puVar14 = &UNK_10dd4b3dc;
  puVar17 = (undefined *)(ulong)*(byte *)((long)ppuVar7 + 0x10dd4b3dc);
  puVar16 = (undefined *)((long)puVar17 * 4 + 0x1049d0f2c);
  puVar15 = puVar14;
  lVar21 = extraout_x12;
  switch(ppuVar7) {
  default:
    uVar13 = 0x656d;
  case (undefined **)0x5a:
  case (undefined **)0x9a:
  case (undefined **)0xa4:
  case (undefined **)0xb4:
  case (undefined **)0xc2:
  case (undefined **)0xff:
    uVar13 = uVar13 & 0xffffffffffff | 0xea00000000000000;
  case (undefined **)0x2f:
  case (undefined **)0x43:
  case (undefined **)0x4b:
  case (undefined **)0x53:
  case (undefined **)0x67:
  case (undefined **)0x7b:
  case (undefined **)0x83:
  case (undefined **)0x8b:
  case (undefined **)0x93:
  case (undefined **)0xa7:
  case (undefined **)0xbb:
    ppuVar9 = (undefined **)0x6966;
  case (undefined **)0x3a:
  case (undefined **)0x3c:
  case (undefined **)0x72:
  case (undefined **)0xb2:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x73720000);
  case (undefined **)0x1d:
  case (undefined **)0x74:
  case (undefined **)0xf8:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x5f7400000000);
  case (undefined **)0x63:
  case (undefined **)0xa3:
  case (undefined **)0xcb:
  case (undefined **)0xe7:
    auVar29._0_8_ = (ulong)ppuVar9 | 0x616e000000000000;
    auVar29._8_8_ = uVar13;
    return auVar29;
  case (undefined **)0x2:
  case (undefined **)0x1c:
    uVar13 = 0xeb00000000656d61;
  case (undefined **)0x15:
    ppuVar9 = (undefined **)0x696d;
  case (undefined **)0x40:
  case (undefined **)0x48:
  case (undefined **)0x50:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x64640000);
  case (undefined **)0xd5:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x656c00000000);
  case (undefined **)0x19:
    auVar34._0_8_ = (ulong)ppuVar9 | 0x6e5f000000000000;
    auVar34._8_8_ = uVar13;
    return auVar34;
  case (undefined **)0x3:
    ppuVar9 = (undefined **)0x616c;
  case (undefined **)0x17:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x74730000);
  case (undefined **)0xf0:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x6e5f00000000);
  case (undefined **)0xf:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x6d61000000000000);
    break;
  case (undefined **)0x4:
  case (undefined **)0x11:
    uVar13 = 0xe400000000000000;
  case (undefined **)0x54:
  case (undefined **)0x8c:
    ppuVar9 = (undefined **)0x656d616e;
  case (undefined **)0x12:
  case (undefined **)0xd7:
    auVar32._8_8_ = uVar13;
    auVar32._0_8_ = ppuVar9;
    return auVar32;
  case (undefined **)0x5:
    uVar13 = 0xe400000000000000;
    ppuVar9 = (undefined **)0x6b6e696c;
  case (undefined **)0xcf:
    auVar37._8_8_ = uVar13;
    auVar37._0_8_ = ppuVar9;
    return auVar37;
  case (undefined **)0x6:
    uVar13 = 0xe500000000000000;
    ppuVar9 = (undefined **)0x6d65;
  case (undefined **)0x61:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x69610000);
  case (undefined **)0xa1:
  case (undefined **)0xc9:
  case (undefined **)0xd1:
  case (undefined **)0xe5:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x6c00000000);
  case (undefined **)0x24:
    auVar39._8_8_ = uVar13;
    auVar39._0_8_ = ppuVar9;
    return auVar39;
  case (undefined **)0x7:
    uVar13 = 0xe700000000000000;
  case (undefined **)0x2c:
    ppuVar9 = (undefined **)0x646e65697266;
  case (undefined **)0xa0:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x73000000000000);
  case (undefined **)0xdb:
    auVar36._8_8_ = uVar13;
    auVar36._0_8_ = ppuVar9;
    return auVar36;
  case (undefined **)0x8:
    uVar13 = 0xe800000000000000;
    ppuVar9 = (undefined **)0x646874726962;
  case (undefined **)0xd2:
    auVar41._0_8_ = (ulong)ppuVar9 | 0x7961000000000000;
    auVar41._8_8_ = uVar13;
    return auVar41;
  case (undefined **)0x9:
  case (undefined **)0xd0:
    ppuVar9 = (undefined **)0x6761;
  case (undefined **)0x14:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x676e61725f650000);
  case (undefined **)0xd8:
    break;
  case (undefined **)0xa:
  case (undefined **)0x7c:
    uVar13 = 0xe800000000000000;
    ppuVar9 = (undefined **)0x6f74656d6f68;
  case (undefined **)0xd9:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x6e77000000000000);
  case (undefined **)0x94:
    auVar40._8_8_ = uVar13;
    auVar40._0_8_ = ppuVar9;
    return auVar40;
  case (undefined **)0xb:
  case (undefined **)0x78:
  case (undefined **)0x80:
  case (undefined **)0x88:
  case (undefined **)0x90:
    uVar13 = 0xe800000000000000;
  case (undefined **)0x1b:
  case (undefined **)0xb9:
    ppuVar9 = (undefined **)0x6f6c;
  case (undefined **)0x2d:
  case (undefined **)0x41:
  case (undefined **)0x49:
  case (undefined **)0x51:
  case (undefined **)0x65:
  case (undefined **)0x79:
  case (undefined **)0x81:
  case (undefined **)0x89:
  case (undefined **)0x91:
  case (undefined **)0xa5:
  case (undefined **)0xcc:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x61630000);
  case (undefined **)0xda:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x697400000000);
  case (undefined **)0x18:
    auVar31._0_8_ = (ulong)ppuVar9 | 0x6e6f000000000000;
    auVar31._8_8_ = uVar13;
    return auVar31;
  case (undefined **)0xc:
    uVar13 = 0xe600000000000000;
    ppuVar9 = (undefined **)0x6567;
  case (undefined **)0x64:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x646e0000);
  case (undefined **)0x16:
    auVar33._0_8_ = (ulong)ppuVar9 | 0x726500000000;
    auVar33._8_8_ = uVar13;
    return auVar33;
  case (undefined **)0xd:
    uVar13 = 0xeb00000000736e6f;
    ppuVar9 = (undefined **)0x6d726570;
  case (undefined **)0xd3:
    auVar38._0_8_ = (ulong)ppuVar9 | 0x6973736900000000;
    auVar38._8_8_ = uVar13;
    return auVar38;
  case (undefined **)0xe:
  case (undefined **)0x1a:
    uVar13 = 0xe700000000000000;
  case (undefined **)0xdc:
  case (undefined **)0xfc:
    ppuVar9 = (undefined **)0x74636970;
  case (undefined **)0x13:
    ppuVar9 = (undefined **)((ulong)ppuVar9 | 0x65727500000000);
  case (undefined **)0x0:
    auVar30._8_8_ = uVar13;
    auVar30._0_8_ = ppuVar9;
    return auVar30;
  case (undefined **)0x2e:
  case (undefined **)0x42:
  case (undefined **)0x4a:
  case (undefined **)0x52:
  case (undefined **)0x66:
  case (undefined **)0x7a:
  case (undefined **)0x82:
  case (undefined **)0x8a:
  case (undefined **)0x92:
  case (undefined **)0xa6:
  case (undefined **)0xba:
    goto code_r0x0001049d11c8;
  case (undefined **)0x30:
    goto code_r0x0001049d128c;
  case (undefined **)0x31:
  case (undefined **)0x69:
  case (undefined **)0xa9:
    goto code_r0x0001049d1210;
  case (undefined **)0x32:
  case (undefined **)0x6a:
  case (undefined **)0xaa:
    goto code_r0x0001049d11e0;
  case (undefined **)0x44:
    goto code_r0x0001049d1140;
  case (undefined **)0x45:
    goto code_r0x0001049d129c;
  case (undefined **)0x46:
    goto code_r0x0001049d1248;
  case (undefined **)0x4c:
  case (undefined **)0xe4:
    goto code_r0x0001049d12ec;
  case (undefined **)0x4d:
  case (undefined **)0x8d:
  case (undefined **)0x95:
    goto code_r0x0001049d1148;
  case (undefined **)0x4e:
  case (undefined **)0x56:
  case (undefined **)0x86:
  case (undefined **)0x8e:
  case (undefined **)0x96:
  case (undefined **)0xbe:
    goto code_r0x0001049d124c;
  case (undefined **)0x55:
    goto LAB_1049d114c;
  case (undefined **)0x60:
    goto code_r0x0001049d12fc;
  case (undefined **)0x62:
  case (undefined **)0xa2:
  case (undefined **)0xca:
  case (undefined **)0xe6:
    goto code_r0x0001049d1180;
  case (undefined **)0x68:
    goto code_r0x0001049d11ac;
  case (undefined **)0x7d:
    goto code_r0x0001049d11b8;
  case (undefined **)0x7e:
  case (undefined **)0xee:
  case (undefined **)0xf2:
    goto code_r0x0001049d125c;
  case (undefined **)0x84:
    goto code_r0x0001049d121c;
  case (undefined **)0x85:
  case (undefined **)0xbd:
    goto code_r0x0001049d1144;
  case (undefined **)0xb8:
LAB_1049d1300:
    ppuVar9 = ppuVar23;
  case (undefined **)0x4f:
  case (undefined **)0x57:
  case (undefined **)0x87:
  case (undefined **)0x8f:
  case (undefined **)0x97:
  case (undefined **)0xbf:
    _swift_release(ppuVar9);
    auVar42._8_8_ = uVar13;
    auVar42._0_8_ = puVar24;
    return auVar42;
  case (undefined **)0xc8:
    goto code_r0x0001049d115c;
  case (undefined **)0xce:
    goto code_r0x0001049d0fe4;
  case (undefined **)0xd6:
    *(undefined1 **)(lVar11 + 0x150) = puVar27;
    *(code **)(lVar11 + 0x158) = FUN_1049d0f04;
    puVar27 = (undefined1 *)(lVar11 + 0x150);
    *(undefined ***)(lVar11 + 8) = ppuVar26;
    ppuVar23 = (undefined **)0x6469;
    *(undefined **)(lVar11 + 0x108) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar24 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  case (undefined **)0xa8:
  case (undefined **)0xd4:
    ppuVar12 = (undefined **)0x64a9;
    puVar14 = (undefined *)(ulong)bRam0000000000006489;
    puVar16 = (undefined *)0x1;
    ppuVar7 = ppuRam00000000000064a9;
  case (undefined **)0x28:
    puVar14 = (undefined *)((long)puVar16 << ((ulong)puVar14 & 0x3f));
  case (undefined **)0x26:
    puVar16 = (undefined *)0xffffffffffffffff;
    if ((long)puVar14 < 0x40) {
      puVar16 = (undefined *)~(-1L << ((ulong)puVar14 & 0x3f));
    }
  case (undefined **)0x25:
    puVar19 = (undefined *)((ulong)puVar16 & (ulong)ppuVar7);
    ppuVar20 = (undefined **)((ulong)(puVar14 + 0x3f) >> 6);
  case (undefined **)0x27:
    _swift_retain(puVar24);
    _swift_bridgeObjectRetain(ppuVar23);
    ppuVar18 = (undefined **)0x0;
    lVar4 = 0x11309c428;
    do {
      if (puVar19 == (undefined *)0x0) {
LAB_1049d112c:
        do {
          ppuVar7 = (undefined **)((long)ppuVar18 + 1);
          if (SCARRY8((long)ppuVar18,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1049d1334);
            (*pcVar2)();
          }
          if ((long)ppuVar20 <= (long)ppuVar7) goto LAB_1049d1300;
          puVar19 = ppuVar12[(long)ppuVar7];
code_r0x0001049d1140:
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
code_r0x0001049d1144:
        } while (puVar19 == (undefined *)0x0);
code_r0x0001049d1148:
        ppuVar18 = ppuVar7;
      }
LAB_1049d114c:
      uVar13 = ((ulong)puVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)puVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      ppuVar7 = (undefined **)(LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | (long)ppuVar18 << 6);
      puVar14 = ppuVar23[6];
      puVar16 = ppuVar23[7];
code_r0x0001049d115c:
      puVar25 = *(undefined **)((long)(puVar14 + (long)ppuVar7 * 0x10) + 8);
      *(undefined8 *)(puVar27 + -0x88) = *(undefined8 *)(puVar14 + (long)ppuVar7 * 0x10);
      *(undefined **)(puVar27 + -0x80) = puVar25;
      func_0x0001049d4834(puVar16 + (long)ppuVar7 * 0x20,puVar27 + -0x78,lVar4);
      ppuVar9 = (undefined **)(puVar27 + -0x78);
code_r0x0001049d1180:
      func_0x0001049d4834(ppuVar9,lVar11 + 0x10,lVar4);
      ppuVar7 = *(undefined ***)(lVar11 + 0x28);
code_r0x0001049d1190:
      if (ppuVar7 == (undefined **)0x0) {
        _swift_bridgeObjectRetain(puVar25);
        ppuVar9 = (undefined **)(lVar11 + 0x10);
      }
      else {
        func_0x000100102924(lVar11 + 0x10,lVar11 + 0xa8);
        ppuVar9 = (undefined **)(puVar27 + -0x88);
        uVar13 = lVar11 + 0x78;
        ppuVar10 = (undefined **)0x11309d000;
code_r0x0001049d11ac:
        func_0x0001049d4834(ppuVar9,uVar13,ppuVar10 + 0x133);
code_r0x0001049d11b4:
        ppuVar9 = (undefined **)(lVar11 + 0xa8);
code_r0x0001049d11b8:
        func_0x000100102924(ppuVar9,lVar11 + 0x58);
        ppuVar22 = *(undefined ***)(lVar11 + 0x78);
        lVar4 = *(long *)(lVar11 + 0x80);
        ppuVar26 = *(undefined ***)(puVar24 + 0x10);
        ppuVar7 = *(undefined ***)(puVar24 + 0x18);
code_r0x0001049d11c8:
        if (ppuVar26 < ppuVar7) {
          _swift_bridgeObjectRetain(puVar25);
        }
        else {
          _swift_bridgeObjectRetain(puVar25);
code_r0x0001049d11e0:
          func_0x000100102b0c((undefined *)((long)ppuVar26 + 1),1);
          puVar24 = *(undefined **)(puVar27 + -0x48);
        }
        __ss6HasherV5_seedABSi_tcfC(lVar11 + 0x10,*(undefined8 *)(puVar24 + 0x28));
        ppuVar9 = (undefined **)(lVar11 + 0x10);
        __sSS4hash4intoys6HasherVz_tF(ppuVar9,ppuVar22,lVar4);
code_r0x0001049d1210:
        __ss6HasherV9_finalizeSiyF();
        ppuVar7 = (undefined **)(puVar24 + 0x40);
code_r0x0001049d121c:
        puVar17 = (undefined *)(-1L << ((ulong)(byte)puVar24[0x20] & 0x3f));
        puVar16 = (undefined *)((ulong)ppuVar9 & ((ulong)puVar17 ^ 0xffffffffffffffff));
        puVar14 = (undefined *)((ulong)puVar16 >> 6);
        uVar13 = -1L << ((ulong)puVar16 & 0x3f) &
                 ((ulong)ppuVar7[(long)puVar14] ^ 0xffffffffffffffff);
        if (uVar13 == 0) {
          lVar21 = 0x3f;
code_r0x0001049d125c:
          puVar16 = (undefined *)0x0;
          puVar17 = (undefined *)((ulong)(lVar21 - (long)puVar17) >> 6);
          do {
            puVar15 = puVar14 + 1;
            uVar3 = puVar15 == puVar17;
code_r0x0001049d128c:
            if (((bool)uVar3) && (((ulong)puVar16 & 1) != 0)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1049d1338);
              (*pcVar2)();
            }
            puVar14 = (undefined *)0x0;
            if (puVar15 != puVar17) {
              puVar14 = puVar15;
            }
            puVar16 = (undefined *)(ulong)((uint)(puVar15 == puVar17) | (uint)puVar16);
          } while (ppuVar7[(long)puVar14] == (undefined *)0xffffffffffffffff);
          puVar16 = (undefined *)~(ulong)ppuVar7[(long)puVar14];
code_r0x0001049d129c:
          uVar13 = ((ulong)puVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((ulong)puVar16 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          puVar14 = (undefined *)(LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + (long)puVar14 * 0x40);
        }
        else {
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          puVar14 = (undefined *)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20);
code_r0x0001049d1248:
          puVar16 = (undefined *)((ulong)puVar16 & 0x7fffffffffffffc0);
code_r0x0001049d124c:
          puVar14 = (undefined *)((ulong)puVar14 | (ulong)puVar16);
        }
LAB_1049d12a8:
        uVar13 = (ulong)puVar14 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)ppuVar7 + uVar13) =
             1L << ((ulong)puVar14 & 0x3f) | *(ulong *)((long)ppuVar7 + uVar13);
        puVar1 = (undefined8 *)(*(long *)(puVar24 + 0x30) + (long)puVar14 * 0x10);
        *puVar1 = ppuVar22;
        puVar1[1] = lVar4;
        func_0x000100102924(lVar11 + 0x58,*(long *)(puVar24 + 0x38) + (long)puVar14 * 0x20);
        *(long *)(puVar24 + 0x10) = *(long *)(puVar24 + 0x10) + 1;
code_r0x0001049d12ec:
        ppuVar9 = (undefined **)(lVar11 + 0x88);
        lVar4 = 0x11309c428;
code_r0x0001049d12fc:
      }
      func_0x0001049d47f8(ppuVar9,lVar4);
      puVar19 = (undefined *)((ulong)(puVar19 + -1) & (ulong)puVar19);
      uVar13 = 0x11309d998;
      func_0x0001049d47f8(puVar27 + -0x88,0x11309d998);
    } while( true );
  case (undefined **)0xec:
    goto LAB_1049d12a8;
  case (undefined **)0xed:
    goto code_r0x0001049d11b4;
  case (undefined **)0xf1:
    goto code_r0x0001049d1190;
  case (undefined **)0xfb:
  case (undefined **)0xfe:
    goto LAB_1049d112c;
  }
  uVar13 = 0x65;
code_r0x0001049d0fe4:
  auVar35._8_8_ = uVar13 & 0xffffffffffff | 0xe900000000000000;
  auVar35._0_8_ = ppuVar9;
  return auVar35;
}



/* Entry: 1049d0f04; end: 1049d1077;  */

undefined1  [16] FUN_1049d0f04(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long in_x12;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar10;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  undefined *in_stack_00000028;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined *in_stack_00000108;
  undefined8 *in_stack_00000150;
  undefined8 in_stack_00000158;
  
  puVar4 = (undefined8 *)0xe200000000000000;
  puVar3 = (undefined8 *)0x6469;
  puVar5 = (undefined *)(param_1 & 0xff);
  puVar6 = &UNK_10dd4b3dc;
  puVar9 = (undefined *)(ulong)(byte)puVar5[0x10dd4b3dc];
  uVar8 = (long)puVar9 * 4 + 0x1049d0f2c;
  puVar7 = puVar6;
  puVar10 = unaff_x29;
  switch(puVar5) {
  default:
    puVar4 = (undefined8 *)0x656d;
  case (undefined *)0x5a:
  case (undefined *)0x9a:
  case (undefined *)0xa4:
  case (undefined *)0xb4:
  case (undefined *)0xc2:
  case (undefined *)0xff:
    puVar4 = (undefined8 *)((ulong)puVar4 & 0xffffffffffff | 0xea00000000000000);
  case (undefined *)0x2f:
  case (undefined *)0x43:
  case (undefined *)0x4b:
  case (undefined *)0x53:
  case (undefined *)0x67:
  case (undefined *)0x7b:
  case (undefined *)0x83:
  case (undefined *)0x8b:
  case (undefined *)0x93:
  case (undefined *)0xa7:
  case (undefined *)0xbb:
    puVar3 = (undefined8 *)0x6966;
  case (undefined *)0x3a:
  case (undefined *)0x3c:
  case (undefined *)0x72:
  case (undefined *)0xb2:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x73720000);
  case (undefined *)0x1d:
  case (undefined *)0x74:
  case (undefined *)0xf8:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x5f7400000000);
  case (undefined *)0x63:
  case (undefined *)0xa3:
  case (undefined *)0xcb:
  case (undefined *)0xe7:
    auVar11._0_8_ = (ulong)puVar3 | 0x616e000000000000;
    auVar11._8_8_ = puVar4;
    return auVar11;
  case (undefined *)0x2:
  case (undefined *)0x1c:
    puVar4 = (undefined8 *)0xeb00000000656d61;
  case (undefined *)0x15:
    puVar3 = (undefined8 *)0x696d;
  case (undefined *)0x40:
  case (undefined *)0x48:
  case (undefined *)0x50:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x64640000);
  case (undefined *)0xd5:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x656c00000000);
  case (undefined *)0x19:
    auVar16._0_8_ = (ulong)puVar3 | 0x6e5f000000000000;
    auVar16._8_8_ = puVar4;
    return auVar16;
  case (undefined *)0x3:
    puVar3 = (undefined8 *)0x616c;
  case (undefined *)0x17:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x74730000);
  case (undefined *)0xf0:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x6e5f00000000);
  case (undefined *)0xf:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x6d61000000000000);
    break;
  case (undefined *)0x4:
  case (undefined *)0x11:
    puVar4 = (undefined8 *)0xe400000000000000;
  case (undefined *)0x54:
  case (undefined *)0x8c:
    puVar3 = (undefined8 *)0x656d616e;
  case (undefined *)0x12:
  case (undefined *)0xd7:
    auVar14._8_8_ = puVar4;
    auVar14._0_8_ = puVar3;
    return auVar14;
  case (undefined *)0x5:
    puVar4 = (undefined8 *)0xe400000000000000;
    puVar3 = (undefined8 *)0x6b6e696c;
  case (undefined *)0xcf:
    auVar19._8_8_ = puVar4;
    auVar19._0_8_ = puVar3;
    return auVar19;
  case (undefined *)0x6:
    puVar4 = (undefined8 *)0xe500000000000000;
    puVar3 = (undefined8 *)0x6d65;
  case (undefined *)0x61:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x69610000);
  case (undefined *)0xa1:
  case (undefined *)0xc9:
  case (undefined *)0xd1:
  case (undefined *)0xe5:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x6c00000000);
  case (undefined *)0x24:
    auVar21._8_8_ = puVar4;
    auVar21._0_8_ = puVar3;
    return auVar21;
  case (undefined *)0x7:
    puVar4 = (undefined8 *)0xe700000000000000;
  case (undefined *)0x2c:
    puVar3 = (undefined8 *)0x646e65697266;
  case (undefined *)0xa0:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x73000000000000);
  case (undefined *)0xdb:
    auVar18._8_8_ = puVar4;
    auVar18._0_8_ = puVar3;
    return auVar18;
  case (undefined *)0x8:
    puVar4 = (undefined8 *)0xe800000000000000;
    puVar3 = (undefined8 *)0x646874726962;
  case (undefined *)0xd2:
    auVar23._0_8_ = (ulong)puVar3 | 0x7961000000000000;
    auVar23._8_8_ = puVar4;
    return auVar23;
  case (undefined *)0x9:
  case (undefined *)0xd0:
    puVar3 = (undefined8 *)0x6761;
  case (undefined *)0x14:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x676e61725f650000);
  case (undefined *)0xd8:
    break;
  case (undefined *)0xa:
  case (undefined *)0x7c:
    puVar4 = (undefined8 *)0xe800000000000000;
    puVar3 = (undefined8 *)0x6f74656d6f68;
  case (undefined *)0xd9:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x6e77000000000000);
  case (undefined *)0x94:
    auVar22._8_8_ = puVar4;
    auVar22._0_8_ = puVar3;
    return auVar22;
  case (undefined *)0xb:
  case (undefined *)0x78:
  case (undefined *)0x80:
  case (undefined *)0x88:
  case (undefined *)0x90:
    puVar4 = (undefined8 *)0xe800000000000000;
  case (undefined *)0x1b:
  case (undefined *)0xb9:
    puVar3 = (undefined8 *)0x6f6c;
  case (undefined *)0x2d:
  case (undefined *)0x41:
  case (undefined *)0x49:
  case (undefined *)0x51:
  case (undefined *)0x65:
  case (undefined *)0x79:
  case (undefined *)0x81:
  case (undefined *)0x89:
  case (undefined *)0x91:
  case (undefined *)0xa5:
  case (undefined *)0xcc:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x61630000);
  case (undefined *)0xda:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x697400000000);
  case (undefined *)0x18:
    auVar13._0_8_ = (ulong)puVar3 | 0x6e6f000000000000;
    auVar13._8_8_ = puVar4;
    return auVar13;
  case (undefined *)0xc:
    puVar4 = (undefined8 *)0xe600000000000000;
    puVar3 = (undefined8 *)0x6567;
  case (undefined *)0x64:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x646e0000);
  case (undefined *)0x16:
    auVar15._0_8_ = (ulong)puVar3 | 0x726500000000;
    auVar15._8_8_ = puVar4;
    return auVar15;
  case (undefined *)0xd:
    puVar4 = (undefined8 *)0xeb00000000736e6f;
    puVar3 = (undefined8 *)0x6d726570;
  case (undefined *)0xd3:
    auVar20._0_8_ = (ulong)puVar3 | 0x6973736900000000;
    auVar20._8_8_ = puVar4;
    return auVar20;
  case (undefined *)0xe:
  case (undefined *)0x1a:
    puVar4 = (undefined8 *)0xe700000000000000;
  case (undefined *)0xdc:
  case (undefined *)0xfc:
    puVar3 = (undefined8 *)0x74636970;
  case (undefined *)0x13:
    puVar3 = (undefined8 *)((ulong)puVar3 | 0x65727500000000);
  case (undefined *)0x0:
    auVar12._8_8_ = puVar4;
    auVar12._0_8_ = puVar3;
    return auVar12;
  case (undefined *)0x2e:
  case (undefined *)0x42:
  case (undefined *)0x4a:
  case (undefined *)0x52:
  case (undefined *)0x66:
  case (undefined *)0x7a:
  case (undefined *)0x82:
  case (undefined *)0x8a:
  case (undefined *)0x92:
  case (undefined *)0xa6:
  case (undefined *)0xba:
    goto code_r0x0001049d11c8;
  case (undefined *)0x30:
    goto code_r0x0001049d128c;
  case (undefined *)0x31:
  case (undefined *)0x69:
  case (undefined *)0xa9:
    goto code_r0x0001049d1210;
  case (undefined *)0x32:
  case (undefined *)0x6a:
  case (undefined *)0xaa:
    goto code_r0x0001049d11e0;
  case (undefined *)0x44:
    goto code_r0x0001049d1140;
  case (undefined *)0x45:
    goto code_r0x0001049d129c;
  case (undefined *)0x46:
    goto code_r0x0001049d1248;
  case (undefined *)0x4c:
  case (undefined *)0xe4:
    goto code_r0x0001049d12ec;
  case (undefined *)0x4d:
  case (undefined *)0x8d:
  case (undefined *)0x95:
    goto code_r0x0001049d1148;
  case (undefined *)0x4e:
  case (undefined *)0x56:
  case (undefined *)0x86:
  case (undefined *)0x8e:
  case (undefined *)0x96:
  case (undefined *)0xbe:
    goto code_r0x0001049d124c;
  case (undefined *)0x55:
    goto LAB_1049d114c;
  case (undefined *)0x60:
    goto code_r0x0001049d12fc;
  case (undefined *)0x62:
  case (undefined *)0xa2:
  case (undefined *)0xca:
  case (undefined *)0xe6:
    goto code_r0x0001049d1180;
  case (undefined *)0x68:
    goto code_r0x0001049d11ac;
  case (undefined *)0x7d:
    goto code_r0x0001049d11b8;
  case (undefined *)0x7e:
  case (undefined *)0xee:
  case (undefined *)0xf2:
    goto code_r0x0001049d125c;
  case (undefined *)0x84:
    goto code_r0x0001049d121c;
  case (undefined *)0x85:
  case (undefined *)0xbd:
    goto code_r0x0001049d1144;
  case (undefined *)0xb8:
LAB_1049d1300:
    puVar3 = unaff_x22;
  case (undefined *)0x4f:
  case (undefined *)0x57:
  case (undefined *)0x87:
  case (undefined *)0x8f:
  case (undefined *)0x97:
  case (undefined *)0xbf:
    _swift_release(puVar3);
    auVar24._8_8_ = puVar4;
    auVar24._0_8_ = unaff_x23;
    return auVar24;
  case (undefined *)0xc8:
    goto code_r0x0001049d115c;
  case (undefined *)0xce:
    goto code_r0x0001049d0fe4;
  case (undefined *)0xd6:
    puVar10 = &stack0x00000150;
    unaff_x22 = (undefined8 *)0x6469;
    in_stack_00000108 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    unaff_x23 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    in_stack_00000150 = unaff_x29;
    in_stack_00000158 = unaff_x30;
  case (undefined *)0xa8:
  case (undefined *)0xd4:
    unaff_x28 = 0x64a9;
    puVar6 = (undefined *)(ulong)bRam0000000000006489;
    uVar8 = 1;
    puVar5 = puRam00000000000064a9;
  case (undefined *)0x28:
    puVar6 = (undefined *)(uVar8 << ((ulong)puVar6 & 0x3f));
  case (undefined *)0x26:
    uVar8 = 0xffffffffffffffff;
    if ((long)puVar6 < 0x40) {
      uVar8 = ~(-1L << ((ulong)puVar6 & 0x3f));
    }
  case (undefined *)0x25:
    unaff_x25 = uVar8 & (ulong)puVar5;
    unaff_x19 = (ulong)(puVar6 + 0x3f) >> 6;
  case (undefined *)0x27:
    _swift_retain(unaff_x23);
    _swift_bridgeObjectRetain(unaff_x22);
    unaff_x24 = (undefined *)0x0;
    unaff_x27 = 0x11309c428;
    do {
      if (unaff_x25 == 0) {
LAB_1049d112c:
        do {
          puVar5 = unaff_x24 + 1;
          if (SCARRY8((long)unaff_x24,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1049d1334);
            (*pcVar2)();
          }
          if ((long)unaff_x19 <= (long)puVar5) goto LAB_1049d1300;
          unaff_x25 = *(ulong *)(unaff_x28 + (long)puVar5 * 8);
code_r0x0001049d1140:
          unaff_x24 = unaff_x24 + 1;
code_r0x0001049d1144:
        } while (unaff_x25 == 0);
code_r0x0001049d1148:
        unaff_x24 = puVar5;
      }
LAB_1049d114c:
      uVar8 = (unaff_x25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x25 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      puVar5 = (undefined *)(LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | (long)unaff_x24 << 6);
      puVar6 = (undefined *)unaff_x22[6];
      uVar8 = unaff_x22[7];
code_r0x0001049d115c:
      unaff_x20 = *(undefined8 *)((long)(puVar6 + (long)puVar5 * 0x10) + 8);
      puVar10[-0x11] = *(undefined8 *)(puVar6 + (long)puVar5 * 0x10);
      puVar10[-0x10] = unaff_x20;
      func_0x0001049d4834(uVar8 + (long)puVar5 * 0x20,puVar10 + -0xf,unaff_x27);
      puVar3 = puVar10 + -0xf;
code_r0x0001049d1180:
      func_0x0001049d4834(puVar3,&stack0x00000010,unaff_x27);
      puVar5 = in_stack_00000028;
code_r0x0001049d1190:
      if (puVar5 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(unaff_x20);
        puVar3 = (undefined8 *)&stack0x00000010;
      }
      else {
        func_0x000100102924(&stack0x00000010,&stack0x000000a8);
        puVar3 = puVar10 + -0x11;
        puVar4 = &stack0x00000078;
        param_3 = 0x11309d000;
code_r0x0001049d11ac:
        func_0x0001049d4834(puVar3,puVar4,param_3 + 0x998);
code_r0x0001049d11b4:
        puVar3 = (undefined8 *)&stack0x000000a8;
code_r0x0001049d11b8:
        func_0x000100102924(puVar3,&stack0x00000058);
        unaff_x21 = *(undefined **)(unaff_x23 + 0x10);
        puVar5 = *(undefined **)(unaff_x23 + 0x18);
        unaff_x26 = in_stack_00000078;
        unaff_x27 = in_stack_00000080;
code_r0x0001049d11c8:
        if (unaff_x21 < puVar5) {
          _swift_bridgeObjectRetain(unaff_x20);
        }
        else {
          _swift_bridgeObjectRetain(unaff_x20);
code_r0x0001049d11e0:
          func_0x000100102b0c(unaff_x21 + 1,1);
          unaff_x23 = (undefined *)puVar10[-9];
        }
        __ss6HasherV5_seedABSi_tcfC(&stack0x00000010,*(undefined8 *)(unaff_x23 + 0x28));
        puVar3 = (undefined8 *)&stack0x00000010;
        __sSS4hash4intoys6HasherVz_tF(puVar3,unaff_x26,unaff_x27);
code_r0x0001049d1210:
        __ss6HasherV9_finalizeSiyF();
        puVar5 = unaff_x23 + 0x40;
code_r0x0001049d121c:
        puVar9 = (undefined *)(-1L << ((ulong)(byte)unaff_x23[0x20] & 0x3f));
        uVar8 = (ulong)puVar3 & ((ulong)puVar9 ^ 0xffffffffffffffff);
        puVar6 = (undefined *)(uVar8 >> 6);
        uVar1 = -1L << (uVar8 & 0x3f) & (*(ulong *)(puVar5 + (long)puVar6 * 8) ^ 0xffffffffffffffff)
        ;
        if (uVar1 == 0) {
          in_x12 = 0x3f;
code_r0x0001049d125c:
          uVar8 = 0;
          puVar9 = (undefined *)((ulong)(in_x12 - (long)puVar9) >> 6);
          do {
            puVar7 = puVar6 + 1;
            in_ZR = puVar7 == puVar9;
code_r0x0001049d128c:
            if (((bool)in_ZR) && ((uVar8 & 1) != 0)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1049d1338);
              (*pcVar2)();
            }
            puVar6 = (undefined *)0x0;
            if (puVar7 != puVar9) {
              puVar6 = puVar7;
            }
            uVar8 = (ulong)((uint)(puVar7 == puVar9) | (uint)uVar8);
          } while (*(ulong *)(puVar5 + (long)puVar6 * 8) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar5 + (long)puVar6 * 8);
code_r0x0001049d129c:
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          puVar6 = (undefined *)(LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + (long)puVar6 * 0x40);
        }
        else {
          uVar1 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          puVar6 = (undefined *)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
code_r0x0001049d1248:
          uVar8 = uVar8 & 0x7fffffffffffffc0;
code_r0x0001049d124c:
          puVar6 = (undefined *)((ulong)puVar6 | uVar8);
        }
LAB_1049d12a8:
        uVar8 = (ulong)puVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8) = 1L << ((ulong)puVar6 & 0x3f) | *(ulong *)(puVar5 + uVar8);
        puVar3 = (undefined8 *)(*(long *)(unaff_x23 + 0x30) + (long)puVar6 * 0x10);
        *puVar3 = unaff_x26;
        puVar3[1] = unaff_x27;
        func_0x000100102924(&stack0x00000058,*(long *)(unaff_x23 + 0x38) + (long)puVar6 * 0x20);
        *(long *)(unaff_x23 + 0x10) = *(long *)(unaff_x23 + 0x10) + 1;
code_r0x0001049d12ec:
        puVar3 = (undefined8 *)&stack0x00000088;
        unaff_x27 = 0x11309c428;
code_r0x0001049d12fc:
      }
      func_0x0001049d47f8(puVar3,unaff_x27);
      unaff_x25 = unaff_x25 - 1 & unaff_x25;
      puVar4 = (undefined8 *)0x11309d998;
      func_0x0001049d47f8(puVar10 + -0x11,0x11309d998);
    } while( true );
  case (undefined *)0xec:
    goto LAB_1049d12a8;
  case (undefined *)0xed:
    goto code_r0x0001049d11b4;
  case (undefined *)0xf1:
    goto code_r0x0001049d1190;
  case (undefined *)0xfb:
  case (undefined *)0xfe:
    goto LAB_1049d112c;
  }
  puVar4 = (undefined8 *)0x65;
code_r0x0001049d0fe4:
  auVar17._8_8_ = (ulong)puVar4 & 0xffffffffffff | 0xe900000000000000;
  auVar17._0_8_ = puVar3;
  return auVar17;
}



/* Entry: 1049d1078; end: 1049d1337;  */

undefined * FUN_1049d1078(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_150 [24];
  long lStack_138;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      func_0x0001049d4834(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_88,0x11309c428);
      func_0x0001049d4834(auStack_88,auStack_150,0x11309c428);
      if (lStack_138 == 0) {
        _swift_bridgeObjectRetain(uVar2);
        puVar8 = auStack_150;
      }
      else {
        func_0x000100102924(auStack_150,auStack_b8);
        func_0x0001049d4834(&uStack_98,&uStack_e8,0x11309d998);
        func_0x000100102924(auStack_b8,auStack_108);
        uVar5 = uStack_e0;
        uVar4 = uStack_e8;
        uVar9 = *(ulong *)(puVar3 + 0x10);
        if (uVar9 < *(ulong *)(puVar3 + 0x18)) {
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          func_0x000100102b0c(uVar9 + 1,1);
        }
        __ss6HasherV5_seedABSi_tcfC(auStack_150,*(undefined8 *)(puVar3 + 0x28));
        puVar8 = auStack_150;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar4,uVar5);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar12 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar11 = uVar12 >> 6;
        uVar9 = -1L << (uVar12 & 0x3f) &
                (*(ulong *)(puVar3 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar7 = false;
          uVar9 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar11 + 1;
            if ((uVar12 == uVar9) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1049d1338);
              (*pcVar6)();
            }
            uVar11 = 0;
            if (uVar12 != uVar9) {
              uVar11 = uVar12;
            }
            bVar7 = (bool)(uVar12 == uVar9 | bVar7);
          } while (*(ulong *)(puVar3 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar3 + uVar11 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar11 * 0x40;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar11 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar3 + uVar11 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        func_0x000100102924(auStack_108,*(long *)(puVar3 + 0x38) + uVar9 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        puVar8 = auStack_d8;
      }
      func_0x0001049d47f8(puVar8,0x11309c428);
      func_0x0001049d47f8(&uStack_98,0x11309d998);
    }
    bVar7 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049d1334);
      (*pcVar6)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar14) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(param_1);
  return puVar3;
}



/* Entry: 1049d1338; end: 1049d1343; -[FBSDKProfile userFriendsData] */

void FUN_1049d1338(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049d1344();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d1344; end: 1049d166f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d1344(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(unaff_x20 + _DAT_1130a3988);
  if ((lVar12 == 0) || (lVar14 = *(long *)(lVar12 + 0x10), lVar14 == 0)) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x0001048db364();
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar15 = (undefined8 *)(lVar12 + 0x28);
    do {
      uVar7 = puVar15[-1];
      uVar3 = *puVar15;
      uStack_d0 = 0x6469;
      uStack_c8 = 0xe200000000000000;
      lVar12 = 1;
      uStack_c0 = uVar7;
      uStack_b8 = uVar3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_retain(lVar12);
      func_0x0001049d47f8(&uStack_d0,0x1130a2978);
      uVar5 = 0x6469;
      uVar9 = 0;
      func_0x000100029284();
      _swift_release(lVar12);
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049d1668);
        (*pcVar4)();
      }
      lVar1 = lVar12 + (uVar5 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
      *puVar2 = 0x6469;
      puVar2[1] = 0xe200000000000000;
      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 0x10);
      *puVar2 = uVar7;
      puVar2[1] = uVar3;
      if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049d166c);
        (*pcVar4)();
      }
      *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      puVar11 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar8;
      if (((ulong)puVar11 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10499fb78(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar9 = *(ulong *)(puVar6 + 0x10);
      puVar8 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10499fb78(puVar8,uVar9 + 1,1,puVar6);
      }
      *(ulong *)(puVar8 + 0x10) = uVar9 + 1;
      *(long *)(puVar8 + uVar9 * 8 + 0x20) = lVar12;
      puVar15 = puVar15 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar7 = 0x1130a29a0;
  func_0x0001048db364();
  apuStack_90[0] = puVar8;
  uStack_78 = uVar7;
  func_0x000100102924(apuStack_90,auStack_b0);
  puVar8 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native(puVar11);
  func_0x0001001029e8(auStack_b0,0x61746164,0xe400000000000000,puVar8);
  puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  puVar6 = puVar11;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_release(puVar11);
  apuStack_90[0] = (undefined *)0x0;
  puVar10 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  _objc_msgSend(puVar8,PTR_s_dataWithJSONObject_options_error_1125b6c80,puVar6,0,apuStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar11 = apuStack_90[0];
  _objc_retain();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar11;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar11);
    _swift_willThrow();
    _swift_errorRelease(puVar8);
    puVar11 = (undefined *)0x0;
    puVar13 = (undefined *)0xf000000000000000;
    puVar6 = puVar10;
  }
  else {
    puVar11 = puVar8;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar6 = puVar10;
    _objc_release(puVar8);
    puVar13 = puVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    puVar11 = puVar8;
    FUN_1049d16f4();
    puVar10 = puVar6;
    _objc_release(puVar8);
    if ((ulong)puVar6 >> 0x3c < 0xf) {
      puVar8 = puVar11;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar11,puVar6);
      func_0x0001000b44c0(puVar11,puVar6);
    }
    else {
      puVar8 = (undefined *)0x0;
      puVar6 = puVar10;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    auVar17._8_8_ = puVar6;
    auVar17._0_8_ = puVar8;
    return auVar17;
  }
  auVar16._8_8_ = puVar13;
  auVar16._0_8_ = puVar11;
  return auVar16;
}



/* Entry: 1049d1670; end: 1049d167b; -[FBSDKProfile pictureData] */

void FUN_1049d1670(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049d16f4();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d167c; end: 1049d16f3;  */

void FUN_1049d167c(undefined8 param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  (*param_3)();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d16f4; end: 1049d1a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d16f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long unaff_x20;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_188 [9];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  long alStack_110 [12];
  undefined1 auStack_b0 [16];
  code *pcStack_a0;
  undefined1 auStack_98 [32];
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0x11309c5e0;
  func_0x0001048db364();
  pcVar19 = (code *)(auStack_b0 +
                    -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar20 = *(long *)(lVar6 + -8);
  lVar18 = (long)pcVar19 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001049d4834(unaff_x20 + _DAT_1130a3978,pcVar19,0x11309c5e0);
  pcVar7 = pcVar19;
  (**(code **)(lVar20 + 0x30))(pcVar19,1,lVar6);
  puVar14 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if ((int)pcVar7 == 1) {
    _swift_retain_n(PTR___swiftEmptyDictionarySingleton_11034f1d0,2);
    func_0x0001049d47f8(pcVar19,0x11309c5e0);
    pcVar7 = (code *)puVar14;
  }
  else {
    (**(code **)(lVar20 + 0x20))(lVar18,pcVar19,lVar6);
    puVar9 = PTR___sSiN_11034deb0;
    unaff_x25 = 100;
    puStack_60 = PTR___sSiN_11034deb0;
    pcStack_78 = (code *)0x64;
    func_0x000100102924(&pcStack_78,auStack_98);
    puVar17 = puVar14;
    _swift_retain_n(puVar14,2);
    _swift_isUniquelyReferenced_nonNull_native();
    pcStack_a0 = (code *)puVar14;
    func_0x0001001029e8(auStack_98,0x746867696568,0xe600000000000000,puVar17);
    pcVar19 = pcStack_a0;
    puStack_60 = puVar9;
    pcStack_78 = (code *)0x64;
    func_0x000100102924(&pcStack_78,auStack_98);
    pcVar7 = pcVar19;
    _swift_isUniquelyReferenced_nonNull_native(pcVar19);
    pcStack_a0 = pcVar19;
    func_0x0001001029e8(auStack_98,0x6874646977,0xe500000000000000,pcVar7);
    pcVar19 = pcStack_a0;
    puStack_60 = PTR___sSbN_11034dd40;
    pcStack_78 = (code *)((ulong)pcStack_78 & 0xffffffffffffff00);
    func_0x000100102924(&pcStack_78,auStack_98);
    pcVar7 = pcVar19;
    _swift_isUniquelyReferenced_nonNull_native(pcVar19);
    uVar13 = 0x6f686c69735f7369;
    pcVar8 = (code *)auStack_98;
    pcStack_a0 = pcVar19;
    func_0x0001001029e8(pcVar8,0x6f686c69735f7369,0xed00006574746575,pcVar7);
    pcVar19 = pcStack_a0;
    __s10Foundation3URLV14absoluteStringSSvg();
    puStack_60 = PTR___sSSN_11034da80;
    pcStack_78 = pcVar8;
    uStack_70 = uVar13;
    func_0x000100102924(&pcStack_78,auStack_98);
    pcVar7 = pcVar19;
    _swift_isUniquelyReferenced_nonNull_native(pcVar19);
    pcStack_a0 = pcVar19;
    func_0x0001001029e8(auStack_98,0x6c7275,0xe300000000000000,pcVar7);
    (**(code **)(lVar20 + 8))(lVar18,lVar6);
    pcVar7 = pcStack_a0;
  }
  uVar13 = 0x11309c420;
  func_0x0001048db364();
  pcStack_78 = pcVar7;
  puStack_60 = (undefined *)uVar13;
  func_0x000100102924(&pcStack_78,auStack_98);
  puVar9 = puVar14;
  _swift_isUniquelyReferenced_nonNull_native(puVar14);
  pcStack_a0 = (code *)puVar14;
  func_0x0001001029e8(auStack_98,0x61746164,0xe400000000000000,puVar9);
  pcVar7 = pcStack_a0;
  pcVar8 = (code *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  pcVar10 = pcVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (pcVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_release(pcVar7);
  pcStack_78 = (code *)0x0;
  puVar14 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  _objc_msgSend(pcVar8,PTR_s_dataWithJSONObject_options_error_1125b6c80,pcVar10,0,&pcStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar10);
  pcVar7 = pcStack_78;
  _objc_retain();
  if (pcVar8 == (code *)0x0) {
    pcVar8 = pcVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(pcVar7);
    _swift_willThrow();
    pcVar7 = pcVar8;
    _swift_errorRelease();
    pcVar16 = (code *)0x0;
    puVar17 = (undefined *)0xf000000000000000;
    puVar9 = puVar14;
  }
  else {
    pcVar16 = pcVar8;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    pcVar7 = pcVar8;
    puVar9 = puVar14;
    _objc_release();
    puVar17 = puVar14;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar21._8_8_ = puVar17;
    auVar21._0_8_ = pcVar16;
    return auVar21;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar18 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar18 + -0x58) = unaff_x27;
  *(undefined8 *)(lVar18 + -0x50) = unaff_x26;
  *(undefined8 *)(lVar18 + -0x48) = unaff_x25;
  *(long *)(lVar18 + -0x40) = lVar20;
  *(code **)(lVar18 + -0x38) = pcVar19;
  *(code **)(lVar18 + -0x30) = pcVar10;
  *(code **)(lVar18 + -0x28) = pcVar8;
  *(undefined **)(lVar18 + -0x20) = puVar17;
  *(code **)(lVar18 + -0x18) = pcVar16;
  *(undefined1 **)(lVar18 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar18 + -8) = FUN_1049d1a9c;
  *(undefined **)(lVar18 + -0xa0) = puVar17;
  _swift_beginAccess(0x1138158e0,lVar18 + -0x78,0,0);
  uVar4 = uRam0000000113815908;
  uVar3 = uRam0000000113815900;
  uVar2 = uRam00000001138158f8;
  uVar1 = uRam00000001138158f0;
  uVar13 = uRam00000001138158e8;
  lVar6 = lRam00000001138158e0;
  if (lRam00000001138158e0 == 0) {
    _swift_beginAccess(0x113815910,lVar18 + -0x90,0,0);
    uVar5 = uRam0000000113815928;
    uVar11 = uRam0000000113815920;
    lVar20 = lRam0000000113815910;
    if (lRam0000000113815910 == 0) {
      puVar12 = (undefined8 *)0x1130a38d0;
      func_0x0001048db364(0x1130a38d0);
      puVar15 = (undefined8 *)0x1130a38d8;
      func_0x0001049d47b8(0x1130a38d8,0x1049d3c6c,&UNK_10dd4ae70);
      _swift_allocError(puVar12,puVar15,0,0);
      *puVar15 = *(undefined8 *)(lVar18 + -0xa0);
      _swift_willThrow();
      if (pcVar7 != (code *)0x0) {
        _swift_errorRetain(puVar12);
        puVar15 = puVar12;
        (*pcVar7)(0,puVar12);
        _swift_errorRelease(puVar12);
      }
      _swift_errorRelease(puVar12);
      goto LAB_1049d1c00;
    }
    *(code **)(lVar18 + -200) = pcVar7;
    *(undefined8 *)(lVar18 + -0xd8) = uRam0000000113815938;
    *(undefined **)(lVar18 + -0xb0) = puVar9;
    *(undefined8 *)(lVar18 + -0xa8) = uRam0000000113815930;
    *(undefined8 *)(lVar18 + -0xb8) = uRam0000000113815918;
    _swift_unknownObjectRetain();
    *(undefined8 *)(lVar18 + -0xc0) = uVar11;
    _swift_unknownObjectRetain(uVar11);
    *(undefined8 *)(lVar18 + -0xd0) = uVar5;
    _swift_unknownObjectRetain(uVar5);
    _swift_unknownObjectRetain(*(undefined8 *)(lVar18 + -0xa8));
    uVar11 = *(undefined8 *)(lVar18 + -0xd8);
    _swift_unknownObjectRetain();
  }
  else {
    *(undefined8 *)(lVar18 + -0xd0) = uRam00000001138158f8;
    *(code **)(lVar18 + -200) = pcVar7;
    *(undefined **)(lVar18 + -0xb0) = puVar9;
    *(undefined8 *)(lVar18 + -0xa8) = uRam0000000113815900;
    *(undefined8 *)(lVar18 + -0xc0) = uRam00000001138158f0;
    *(undefined8 *)(lVar18 + -0xb8) = uRam00000001138158e8;
    lVar20 = lRam00000001138158e0;
    uVar11 = uRam0000000113815908;
  }
  _swift_getObjCClassFromMetadata(lVar20);
  func_0x0001049d3cc0(lVar6,uVar13,uVar1,uVar2,uVar3,uVar4);
  _objc_msgSend(lVar20,PTR_s_currentAccessToken_1125b5168);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = *(undefined8 **)(lVar18 + -200);
  FUN_1049d1ca8();
  _objc_release(lVar20);
  _swift_unknownObjectRelease(uVar11);
  _swift_unknownObjectRelease(*(undefined8 *)(lVar18 + -0xa8));
  _swift_unknownObjectRelease(*(undefined8 *)(lVar18 + -0xd0));
  _swift_unknownObjectRelease(*(undefined8 *)(lVar18 + -0xc0));
  puVar12 = *(undefined8 **)(lVar18 + -0xb8);
  _swift_unknownObjectRelease(puVar12);
LAB_1049d1c00:
  auVar22._8_8_ = puVar15;
  auVar22._0_8_ = puVar12;
  return auVar22;
}



/* Entry: 1049d1a9c; end: 1049d1ca7;  */

void FUN_1049d1a9c(code *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x1138158e0,auStack_78,0,0);
  uVar5 = uRam0000000113815908;
  uVar4 = uRam0000000113815900;
  uVar3 = uRam00000001138158f8;
  uVar2 = uRam00000001138158f0;
  uVar8 = uRam00000001138158e8;
  lVar1 = lRam00000001138158e0;
  if (lRam00000001138158e0 == 0) {
    _swift_beginAccess(0x113815910,auStack_90,0,0);
    uVar10 = uRam0000000113815938;
    uVar6 = uRam0000000113815930;
    uStack_d0 = uRam0000000113815928;
    uStack_c0 = uRam0000000113815920;
    lVar7 = lRam0000000113815910;
    if (lRam0000000113815910 == 0) {
      uVar8 = 0x1130a38d0;
      func_0x0001048db364(0x1130a38d0);
      puVar9 = (undefined8 *)0x1130a38d8;
      FUN_1049d47b8(0x1130a38d8,0x1049d3c6c,&UNK_10dd4ae70);
      _swift_allocError(uVar8,puVar9,0,0);
      *puVar9 = unaff_x20;
      _swift_willThrow();
      if (param_1 != (code *)0x0) {
        _swift_errorRetain(uVar8);
        (*param_1)(0,uVar8);
        _swift_errorRelease(uVar8);
      }
      _swift_errorRelease(uVar8);
      return;
    }
    uStack_a8 = uRam0000000113815930;
    uStack_b8 = uRam0000000113815918;
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(uStack_c0);
    _swift_unknownObjectRetain(uStack_d0);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain();
  }
  else {
    uStack_d0 = uRam00000001138158f8;
    uStack_a8 = uRam0000000113815900;
    uStack_c0 = uRam00000001138158f0;
    uStack_b8 = uRam00000001138158e8;
    lVar7 = lRam00000001138158e0;
    uVar10 = uRam0000000113815908;
  }
  _swift_getObjCClassFromMetadata(lVar7);
  func_0x0001049d3cc0(lVar1,uVar8,uVar2,uVar3,uVar4,uVar5);
  _objc_msgSend(lVar7,PTR_s_currentAccessToken_1125b5168);
  _objc_retainAutoreleasedReturnValue();
  FUN_1049d1ca8();
  _objc_release(lVar7);
  _swift_unknownObjectRelease(uVar10);
  _swift_unknownObjectRelease(uStack_a8);
  _swift_unknownObjectRelease(uStack_d0);
  _swift_unknownObjectRelease(uStack_c0);
  _swift_unknownObjectRelease(uStack_b8);
  return;
}



/* Entry: 1049d1ca8; end: 1049d22ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d1ca8(double param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 unaff_x20;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_150;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar17 = *(long *)(lVar3 + -8);
  lVar13 = (long)&uStack_150 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(0x1138158e0,auStack_90,0,0);
  uVar2 = uRam0000000113815908;
  uVar1 = uRam0000000113815900;
  uVar4 = uRam00000001138158f8;
  lVar11 = lRam00000001138158f0;
  lVar7 = lRam00000001138158e8;
  lVar6 = lRam00000001138158e0;
  if (lRam00000001138158e0 == 0) {
    _swift_beginAccess(0x113815910,auStack_a8,0,0);
    uStack_128 = uRam0000000113815938;
    uStack_120 = uRam0000000113815928;
    lVar15 = lRam0000000113815920;
    if (lRam0000000113815910 == 0) {
      uVar4 = 0x1130a38d0;
      func_0x0001048db364(0x1130a38d0);
      puVar9 = (undefined8 *)0x1130a38d8;
      FUN_1049d47b8(0x1130a38d8,0x1049d3c6c,&UNK_10dd4ae70);
      _swift_allocError(uVar4,puVar9,0,0);
      *puVar9 = unaff_x20;
      _swift_willThrow();
      if (param_3 != (code *)0x0) {
        _swift_errorRetain(uVar4);
        (*param_3)(0,uVar4);
        _swift_errorRelease(uVar4);
      }
      _swift_errorRelease(uVar4);
      return;
    }
    uStack_150 = uRam0000000113815930;
    lStack_110 = lRam0000000113815918;
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(lVar15);
    uVar18 = uStack_150;
    _swift_unknownObjectRetain(uStack_120);
    _swift_unknownObjectRetain(uVar18);
    _swift_unknownObjectRetain(uStack_128);
  }
  else {
    uStack_128 = uRam0000000113815908;
    uStack_120 = uRam00000001138158f8;
    lStack_110 = lRam00000001138158e8;
    lVar15 = lRam00000001138158f0;
    uVar18 = uRam0000000113815900;
  }
  _swift_unknownObjectRetain(lVar15);
  func_0x0001049d3cc0(lVar6,lVar7,lVar11,uVar4,uVar1,uVar2);
  uVar4 = 0x656d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d,0xe200000000000000);
  uVar16 = param_2;
  func_0x0001049d40ac(param_2);
  uVar5 = uVar16;
  func_0x000100215634();
  _swift_bridgeObjectRelease(uVar16);
  uVar16 = uVar5;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar5);
  lVar6 = lVar15;
  _objc_msgSend(lVar15,PTR_s_createGraphRequestWithGraphPath__112525138,uVar4,uVar16,0xc);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _swift_beginAccess(0x1138158c0,auStack_c8,0,0);
  if (lRam00000001138158c0 == 0) {
    if (param_2 != 0) {
LAB_1049d1fac:
      uVar16 = 0;
      puVar14 = (undefined *)0x0;
LAB_1049d1fb4:
      _objc_retain();
      uVar5 = param_2;
      puVar12 = PTR_s_userID_112682300;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar5);
      if (puVar14 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(puVar12);
      }
      else {
        if ((uVar16 == uVar8) && (puVar14 == puVar12)) {
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar12);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar16,puVar14,uVar8,puVar12,0);
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar12);
          if ((uVar16 & 1) == 0) goto LAB_1049d2100;
        }
        if ((lRam00000001138158c0 == 0) ||
           ((*(byte *)(lRam00000001138158c0 + _DAT_1130a39c0) & 1) == 0)) {
          _objc_release(param_2);
          goto LAB_1049d2258;
        }
      }
LAB_1049d2100:
      lVar11 = lRam00000001138158c0;
      lVar7 = lRam00000001130a38b0;
      lVar3 = lRam00000001138158c0;
      if (lRam00000001130a38b0 == 0) {
        _objc_retain(lRam00000001138158c0);
      }
      else {
        _objc_retain(lRam00000001138158c0);
        _objc_msgSend(lVar7,PTR_s_cancel_1125a9090);
      }
      puVar14 = &UNK_1107bc210;
      _swift_allocObject(&UNK_1107bc210,0x30,7);
      *(long *)(puVar14 + 0x10) = lVar11;
      *(undefined8 *)(puVar14 + 0x18) = unaff_x20;
      *(code **)(puVar14 + 0x20) = param_3;
      *(undefined8 *)(puVar14 + 0x28) = param_4;
      pcStack_d8 = FUN_1049d44cc;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0x42000000;
      pcStack_e8 = FUN_1048e305c;
      puStack_e0 = &UNK_1107bc228;
      ppuVar10 = &puStack_f8;
      puStack_d0 = puVar14;
      __Block_copy(ppuVar10);
      puVar14 = puStack_d0;
      _objc_retain(lVar3);
      func_0x0001049d44f0(param_3,param_4);
      _swift_release(puVar14);
      lVar11 = lVar6;
      _objc_msgSend(lVar6,PTR_s_startWithCompletion__1126720c8,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      __Block_release(ppuVar10);
      lVar7 = lRam00000001130a38b0;
      lRam00000001130a38b0 = lVar11;
      _swift_unknownObjectRelease(lVar6);
      _objc_release(lVar3);
      _objc_release(param_2);
      _swift_unknownObjectRelease(uStack_128);
      _swift_unknownObjectRelease(uVar18);
      _swift_unknownObjectRelease(uStack_120);
      _swift_unknownObjectRelease(lVar15);
      _swift_unknownObjectRelease(lStack_110);
      lStack_110 = lVar7;
      goto LAB_1049d22c8;
    }
  }
  else {
    lVar7 = lRam00000001138158c0;
    _objc_retain();
    __s10Foundation4DateVACycfC(lVar13);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar7 + _DAT_1130a3970);
    _objc_release(lVar7);
    (**(code **)(lVar17 + 8))(lVar13,lVar3);
    if (param_2 != 0) {
      if (param_1 <= 86400.0) {
        if (lRam00000001138158c0 == 0) goto LAB_1049d1fac;
        uVar16 = *(ulong *)(lRam00000001138158c0 + _DAT_1130a3940);
        puVar14 = (undefined *)((ulong *)(lRam00000001138158c0 + _DAT_1130a3940))[1];
        _swift_bridgeObjectRetain(puVar14);
        goto LAB_1049d1fb4;
      }
      _objc_retain(param_2);
      goto LAB_1049d2100;
    }
  }
LAB_1049d2258:
  lVar7 = lRam00000001138158c0;
  if (param_3 == (code *)0x0) {
    _swift_unknownObjectRelease(lVar6);
  }
  else {
    lVar11 = lRam00000001138158c0;
    _objc_retain(lRam00000001138158c0);
    (*param_3)(lVar7,0);
    _swift_unknownObjectRelease(lVar6);
    _objc_release(lVar11);
  }
  _swift_unknownObjectRelease(uStack_128);
  _swift_unknownObjectRelease(uVar18);
  _swift_unknownObjectRelease(uStack_120);
  _swift_unknownObjectRelease(lVar15);
LAB_1049d22c8:
  _swift_unknownObjectRelease(lStack_110);
  return;
}



/* Entry: 1049d22f0; end: 1049d23cb; +[FBSDKProfile loadCurrentProfileWithCompletion:] */

void FUN_1049d22f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1107bc288;
    _swift_allocObject(&UNK_1107bc288,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1049d4a94;
  }
  _swift_getObjCClassMetadata(param_1);
  FUN_1049d1a9c(pcVar2,puVar1);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1049d23cc; end: 1049d23cf;  */

undefined1  [16] FUN_1049d23cc(undefined8 ******param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 uVar8;
  undefined8 ******ppppppuVar9;
  code *pcVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******unaff_x22;
  long lVar22;
  undefined8 ****ppppuVar23;
  undefined8 *****unaff_x25;
  undefined8 ******ppppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 *****pppppuVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****appppuStack_90 [5];
  undefined8 *****pppppuStack_68;
  
  FUN_1049d3d1c();
  ppppppuVar20 = (undefined8 ******)param_1[2];
  if (ppppppuVar20 == (undefined8 ******)0x0) {
    _swift_bridgeObjectRelease();
    ppppppuVar9 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    pppppuStack_68 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100403514(0,ppppppuVar20,0);
    lVar22 = 0x20;
    ppppppuVar15 = (undefined8 ******)0x616e5f7473726966;
    ppppppuVar16 = (undefined8 ******)0x6e5f656c6464696d;
    ppppppuVar17 = (undefined8 ******)0x6d616e5f7473616c;
    ppppppuVar18 = (undefined8 ******)0x73646e65697266;
    ppppppuVar12 = (undefined8 ******)0x7265646e6567;
    ppppppuVar13 = (undefined8 ******)0x697373696d726570;
    ppppppuVar9 = (undefined8 ******)pppppuStack_68;
    do {
      ppppppuVar6 = (undefined8 ******)0x6e776f74656d6f68;
      pcVar10 = (code *)0x676e61725f656761;
      ppppppuVar11 = (undefined8 ******)0x6e6f697461636f6c;
      ppppppuVar21 = &pppppuStack_68;
      pppppuVar14 = (undefined8 *****)(ulong)(byte)*(code *)((long)param_1 + lVar22);
      pppppuVar26 = (undefined8 *****)0xe200000000000000;
      ppppppuVar24 = (undefined8 ******)0x6469;
      ppppppuVar7 = param_1;
      switch(*(code *)((long)param_1 + lVar22)) {
      case (code)0x0:
        break;
      default:
        pppppuVar26 = (undefined8 *****)0x656d;
      case (code)0x4b:
      case (code)0x8b:
      case (code)0x95:
      case (code)0xa5:
      case (code)0xb3:
      case (code)0xf0:
        pppppuVar26 = (undefined8 *****)((ulong)pppppuVar26 & 0xffffffffffff | 0xea00000000000000);
code_r0x0001049d420c:
        ppppppuVar24 = ppppppuVar15;
code_r0x0001049d4210:
        break;
      case (code)0x2:
        ppppppuVar24 = ppppppuVar16;
      case (code)0x45:
      case (code)0x7d:
        pppppuVar26 = (undefined8 *****)0xeb00000000656d61;
        break;
      case (code)0x3:
      case (code)0xc8:
        pcVar10 = (code *)ppppppuVar17;
        goto code_r0x0001049d4260;
      case (code)0x4:
        pppppuVar26 = (undefined8 *****)0xe400000000000000;
        ppppppuVar24 = (undefined8 ******)0x656d616e;
      case (code)0x69:
      case (code)0x71:
      case (code)0x79:
      case (code)0x81:
        break;
      case (code)0x5:
        pppppuVar26 = (undefined8 *****)0xe400000000000000;
        ppppppuVar24 = (undefined8 ******)0x6b6e696c;
      case (code)0xc9:
      case (code)0xf5:
        break;
      case (code)0x6:
        pppppuVar26 = (undefined8 *****)0xe500000000000000;
      case (code)0x31:
      case (code)0x39:
      case (code)0x41:
        ppppppuVar24 = (undefined8 ******)0x6c69616d65;
code_r0x0001049d429c:
        break;
      case (code)0x7:
        pppppuVar26 = (undefined8 *****)0xe700000000000000;
        ppppppuVar24 = ppppppuVar18;
      case (code)0xc1:
        break;
      case (code)0x8:
        pppppuVar26 = (undefined8 *****)0xe800000000000000;
      case (code)0xe1:
        ppppppuVar24 = (undefined8 ******)0x7961646874726962;
        break;
      case (code)0x9:
code_r0x0001049d4260:
        pppppuVar26 = (undefined8 *****)0xe900000000000065;
        ppppppuVar24 = (undefined8 ******)pcVar10;
code_r0x0001049d4268:
        break;
      case (code)0xa:
        pppppuVar26 = (undefined8 *****)0xe800000000000000;
        ppppppuVar24 = (undefined8 ******)0x6e776f74656d6f68;
        break;
      case (code)0xb:
        pppppuVar26 = (undefined8 *****)0xe800000000000000;
      case (code)0xcd:
      case (code)0xed:
        ppppppuVar24 = ppppppuVar11;
        break;
      case (code)0xc:
      case (code)0xaa:
        pppppuVar26 = (undefined8 *****)0xe600000000000000;
      case (code)0x1e:
      case (code)0x32:
      case (code)0x3a:
      case (code)0x42:
      case (code)0x56:
      case (code)0x6a:
      case (code)0x72:
      case (code)0x7a:
      case (code)0x82:
      case (code)0x96:
      case (code)0xbd:
      case (code)0xf2:
        ppppppuVar24 = ppppppuVar12;
code_r0x0001049d4244:
        break;
      case (code)0xd:
        ppppppuVar24 = ppppppuVar13;
        pppppuVar26 = (undefined8 *****)0xeb00000000736e6f;
        break;
      case (code)0xe:
      case (code)0x65:
      case (code)0xe9:
        pppppuVar26 = (undefined8 *****)0xe700000000000000;
      case (code)0x54:
      case (code)0x94:
      case (code)0xbc:
      case (code)0xd8:
        ppppppuVar24 = (undefined8 ******)0x65727574636970;
        break;
      case (code)0x15:
        goto code_r0x0001049d431c;
      case (code)0x16:
        goto code_r0x0001049d43a8;
      case (code)0x17:
      case (code)0xf1:
        goto code_r0x0001049d4398;
      case (code)0x18:
        goto code_r0x0001049d43b4;
      case (code)0x19:
        goto code_r0x0001049d4394;
      case (code)0x1d:
        goto code_r0x0001049d42c8;
      case (code)0x1f:
      case (code)0x33:
      case (code)0x3b:
      case (code)0x43:
      case (code)0x57:
      case (code)0x6b:
      case (code)0x73:
      case (code)0x7b:
      case (code)0x83:
      case (code)0x97:
      case (code)0xab:
      case (code)0xf3:
        goto code_r0x0001049d44a0;
      case (code)0x20:
      case (code)0x34:
      case (code)0x3c:
      case (code)0x44:
      case (code)0x58:
      case (code)0x6c:
      case (code)0x74:
      case (code)0x7c:
      case (code)0x84:
      case (code)0x98:
      case (code)0xac:
      case (code)0xf4:
        goto code_r0x0001049d420c;
      case (code)0x21:
        auVar29._8_8_ = 0;
        auVar29._0_8_ = param_1;
        return auVar29;
      case (code)0x22:
      case (code)0x5a:
      case (code)0x9a:
      case (code)0xf6:
        pppppuVar14 = param_1[5];
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(pppppuVar14);
        auVar32._8_8_ = pcVar10;
        auVar32._0_8_ = pppppuVar14;
        return auVar32;
      case (code)0x23:
      case (code)0x5b:
      case (code)0x9b:
      case (code)0xf7:
        goto code_r0x0001049d44b8;
      case (code)0x2b:
      case (code)0x2d:
      case (code)0x63:
      case (code)0xa3:
      case (code)0xff:
        goto code_r0x0001049d4210;
      case (code)0x35:
        goto code_r0x0001049d4418;
      case (code)0x36:
        param_1 = ppppppuRam6e776f74656d6f68;
        ppppppuVar9 = (undefined8 ******)pcVar10;
      case (code)0xdd:
        _swift_getInitializedObjCClass();
        _swift_getObjCClassMetadata();
        *ppppppuVar9 = param_1;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = param_1;
        return auVar30;
      case (code)0x37:
      case (code)0x3f:
      case (code)0x47:
      case (code)0x77:
      case (code)0x7f:
      case (code)0x87:
      case (code)0xaf:
        func_0x0001048db364();
        ppppppuVar7 = ppppppuVar6;
        ppppppuVar9 = (undefined8 ******)pcVar10;
        ppppppuVar21 = param_1;
code_r0x0001049d4534:
        (*(code *)ppppppuVar7[-1][4])(ppppppuVar9,ppppppuVar21,ppppppuVar7);
        auVar28._8_8_ = ppppppuVar21;
        auVar28._0_8_ = ppppppuVar9;
        return auVar28;
      case (code)0x3d:
      case (code)0xd5:
        _swift_bridgeObjectRetain();
        ppppppuVar7 = (undefined8 ******)0x61746164;
        ppppppuVar21 = param_1;
      case (code)0x51:
        pcVar10 = (code *)0xe400000000000000;
        param_1 = ppppppuVar7;
code_r0x0001049d45d8:
        func_0x000100029284(param_1);
code_r0x0001049d45dc:
        if (((ulong)pcVar10 & 1) == 0) goto LAB_1049d4770;
        func_0x0001000bb420(ppppppuVar21[7] + (long)param_1 * 4,appppuStack_90);
        _swift_bridgeObjectRelease(ppppppuVar21);
        uVar8 = 0x11309d5b0;
        func_0x0001048db364(0x11309d5b0);
        puVar2 = PTR___sypN_11034f1a8;
        pppppuVar14 = &ppppuStack_a0;
        pcVar10 = (code *)appppuStack_90;
        _swift_dynamicCast(pppppuVar14,pcVar10,PTR___sypN_11034f1a8 + 8,uVar8,6);
        ppppuVar3 = ppppuStack_a0;
        ppppppuVar21 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
        if (((ulong)pppppuVar14 & 1) == 0) goto LAB_1049d4774;
        ppppuVar23 = (undefined8 ****)ppppuStack_a0[2];
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar1 = PTR___sSSN_11034da80;
        if (ppppuVar23 == (undefined8 ****)0x0) goto LAB_1049d479c;
        ppppuVar25 = (undefined8 ****)0x0;
        goto LAB_1049d4674;
      case (code)0x3e:
      case (code)0x7e:
      case (code)0x86:
        goto code_r0x0001049d4420;
      case (code)0x40:
      case (code)0x48:
      case (code)0x78:
      case (code)0x80:
      case (code)0x88:
      case (code)0xb0:
        goto code_r0x0001049d45dc;
      case (code)0x46:
        goto code_r0x0001049d4424;
      case (code)0x52:
        goto code_r0x0001049d4314;
      case (code)0x53:
      case (code)0x93:
      case (code)0xbb:
      case (code)0xd7:
        goto code_r0x0001049d4458;
      case (code)0x55:
        goto code_r0x0001049d4268;
      case (code)0x59:
        goto code_r0x0001049d4484;
      case (code)0x6d:
        goto code_r0x0001049d4320;
      case (code)0x6e:
        goto code_r0x0001049d4490;
      case (code)0x6f:
      case (code)0xdf:
      case (code)0xe3:
        goto code_r0x0001049d4534;
      case (code)0x75:
        ppppppuVar20 = (undefined8 ******)pcVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_retain_11034f4d0)(0x676e61725f656761);
        auVar33._8_8_ = ppppppuVar20;
        auVar33._0_8_ = pcVar10;
        return auVar33;
      case (code)0x76:
      case (code)0xae:
        goto code_r0x0001049d441c;
      case (code)0x85:
        goto code_r0x0001049d4334;
      case (code)0x91:
        goto code_r0x0001049d42d4;
      case (code)0x92:
      case (code)0xba:
      case (code)0xc2:
      case (code)0xd6:
        goto code_r0x0001049d4318;
      case (code)0x99:
      case (code)0xc5:
        goto code_r0x0001049d4384;
      case (code)0xa9:
        goto code_r0x0001049d45d8;
      case (code)0xb9:
        goto code_r0x0001049d4434;
      case (code)0xbf:
        goto code_r0x0001049d42bc;
      case (code)0xc0:
        goto code_r0x0001049d42e8;
      case (code)0xc3:
        goto code_r0x0001049d4348;
      case (code)0xc4:
        goto code_r0x0001049d4300;
      case (code)0xc6:
        goto code_r0x0001049d429c;
      case (code)0xc7:
        goto code_r0x0001049d4368;
      case (code)0xca:
        goto code_r0x0001049d4330;
      case (code)0xcb:
        goto code_r0x0001049d4244;
      case (code)0xcc:
        goto code_r0x0001049d42d8;
      case (code)0xde:
        goto code_r0x0001049d448c;
      case (code)0xe2:
        goto code_r0x0001049d4468;
      case (code)0xec:
      case (code)0xef:
        goto code_r0x0001049d4404;
      }
      unaff_x25 = ppppppuVar9[2];
      pppppuVar14 = ppppppuVar9[3];
      pppppuStack_68 = ppppppuVar9;
code_r0x0001049d42bc:
      unaff_x22 = (undefined8 ******)((long)unaff_x25 + 1);
      if ((undefined8 *****)((ulong)pppppuVar14 >> 1) <= unaff_x25) {
        in_CY = pppppuVar14 != (undefined8 *****)0x0;
        in_ZR = pppppuVar14 == (undefined8 *****)0x1;
code_r0x0001049d42e8:
        func_0x000100403514((bool)in_CY && !(bool)in_ZR,unaff_x22,1);
        ppppppuVar9 = ppppppuVar15;
code_r0x0001049d4300:
        ppppppuVar13 = (undefined8 ******)0x6570;
code_r0x0001049d4314:
        ppppppuVar13 = (undefined8 ******)((ulong)ppppppuVar13 & 0xffffffff0000ffff | 0x6d720000);
code_r0x0001049d4318:
        ppppppuVar13 = (undefined8 ******)
                       ((ulong)ppppppuVar13 & 0xffff0000ffffffff | 0x736900000000);
code_r0x0001049d431c:
        ppppppuVar13 = (undefined8 ******)
                       ((ulong)ppppppuVar13 & 0xffffffffffff | 0x6973000000000000);
code_r0x0001049d4320:
        ppppppuVar12 = (undefined8 ******)0x6567;
code_r0x0001049d4330:
        ppppppuVar12 = (undefined8 ******)((ulong)ppppppuVar12 & 0xffffffff0000ffff | 0x646e0000);
code_r0x0001049d4334:
        ppppppuVar12 = (undefined8 ******)
                       ((ulong)ppppppuVar12 & 0xffff0000ffffffff | 0x726500000000);
code_r0x0001049d4348:
code_r0x0001049d4368:
        ppppppuVar18 = (undefined8 ******)0x646e65697266;
code_r0x0001049d4384:
        ppppppuVar18 = (undefined8 ******)((ulong)ppppppuVar18 & 0xffffffffffff | 0x73000000000000);
code_r0x0001049d4394:
        ppppppuVar17 = (undefined8 ******)0x616c;
code_r0x0001049d4398:
        ppppppuVar17 = (undefined8 ******)((ulong)ppppppuVar17 & 0xffff | 0x6d616e5f74730000);
        ppppppuVar16 = (undefined8 ******)0x696d;
code_r0x0001049d43a8:
        ppppppuVar16 = (undefined8 ******)((ulong)ppppppuVar16 & 0xffff | 0x6e5f656c64640000);
code_r0x0001049d43b4:
        ppppppuVar15 = ppppppuVar9;
        ppppppuVar9 = (undefined8 ******)pppppuStack_68;
      }
code_r0x0001049d42c8:
      ppppppuVar9[2] = unaff_x22;
      ppppppuVar9[(long)unaff_x25 * 2 + 4] = ppppppuVar24;
      ppppppuVar9[(long)unaff_x25 * 2 + 5] = pppppuVar26;
code_r0x0001049d42d4:
      lVar22 = lVar22 + 1;
code_r0x0001049d42d8:
      in_CY = ppppppuVar20 != (undefined8 ******)0x0;
      ppppppuVar20 = (undefined8 ******)((long)ppppppuVar20 + -1);
      in_ZR = ppppppuVar20 == (undefined8 ******)0x0;
    } while (!(bool)in_ZR);
    _swift_bridgeObjectRelease();
  }
  ppppppuVar20 = (undefined8 ******)0x11309c618;
  pppppuStack_68 = ppppppuVar9;
  func_0x0001048db364(0x11309c618);
  param_1 = (undefined8 ******)&DAT_112d38000;
code_r0x0001049d4404:
  param_1 = param_1 + 0x4f;
  pcVar10 = FUN_1048e5f1c;
  ppppppuVar6 = (undefined8 ******)PTR___sSayxGSKsMc_11034dcf0;
  goto code_r0x0001049d4418;
LAB_1049d4674:
  if (ppppuVar3[2] <= ppppuVar25) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1049d47b8);
    (*pcVar10)();
  }
  ppppuVar19 = (undefined8 ****)ppppuVar3[(long)ppppuVar25 + 4];
  if (ppppuVar19[2] == (undefined8 ***)0x0) {
LAB_1049d4668:
    ppppuVar25 = (undefined8 ****)((long)ppppuVar25 + 1);
    if (ppppuVar23 == ppppuVar25) goto LAB_1049d479c;
    goto LAB_1049d4674;
  }
  _swift_bridgeObjectRetain(ppppuVar19);
  lVar22 = 0x6469;
  pcVar10 = (code *)0xe200000000000000;
  func_0x000100029284(0x6469);
  if (((ulong)pcVar10 & 1) == 0) {
    _swift_bridgeObjectRelease(ppppuVar19);
    goto LAB_1049d4668;
  }
  func_0x0001000bb420(ppppuVar19[7] + lVar22 * 4,appppuStack_90);
  _swift_bridgeObjectRelease(ppppuVar19);
  pppppuVar14 = &ppppuStack_a0;
  pcVar10 = (code *)appppuStack_90;
  _swift_dynamicCast(pppppuVar14,pcVar10,puVar2 + 8,puVar1,6);
  ppppuVar4 = ppppuStack_98;
  ppppuVar19 = ppppuStack_a0;
  if ((((ulong)pppppuVar14 & 1) == 0) || ((undefined8 *****)ppppuStack_98 == (undefined8 *****)0x0))
  goto LAB_1049d4668;
  ppppppuVar20 = ppppppuVar21;
  _swift_isUniquelyReferenced_nonNull_native();
  ppppppuVar9 = ppppppuVar21;
  if (((ulong)ppppppuVar20 & 1) == 0) {
    pcVar10 = (code *)((long)ppppppuVar21[2] + 1);
    ppppppuVar9 = (undefined8 ******)0x0;
    func_0x0001000d182c(0,pcVar10,1,ppppppuVar21);
  }
  pppppuVar14 = ppppppuVar9[2];
  ppppppuVar20 = (undefined8 ******)((long)pppppuVar14 + 1);
  ppppppuVar21 = ppppppuVar9;
  if ((undefined8 *****)((ulong)ppppppuVar9[3] >> 1) <= pppppuVar14) {
    ppppppuVar21 = (undefined8 ******)(ulong)((undefined8 *****)0x1 < ppppppuVar9[3]);
    pcVar10 = (code *)ppppppuVar20;
    func_0x0001000d182c(ppppppuVar21,ppppppuVar20,1,ppppppuVar9);
  }
  ppppppuVar21[2] = ppppppuVar20;
  ppppppuVar21[(long)pppppuVar14 * 2 + 4] = (undefined8 *****)ppppuVar19;
  ppppppuVar21[(long)pppppuVar14 * 2 + 5] = (undefined8 *****)ppppuVar4;
  bVar5 = (undefined8 ****)((long)ppppuVar23 + -1) == ppppuVar25;
  ppppuVar25 = (undefined8 ****)((long)ppppuVar25 + 1);
  if (bVar5) {
LAB_1049d479c:
    _swift_bridgeObjectRelease(ppppuVar3);
    if (ppppppuVar21[2] == (undefined8 *****)0x0) {
LAB_1049d4770:
      _swift_bridgeObjectRelease(ppppppuVar21);
LAB_1049d4774:
      ppppppuVar21 = (undefined8 ******)0x0;
    }
    auVar31._8_8_ = pcVar10;
    auVar31._0_8_ = ppppppuVar21;
    return auVar31;
  }
  goto LAB_1049d4674;
code_r0x0001049d4418:
  FUN_1049d47b8(param_1,pcVar10,ppppppuVar6);
code_r0x0001049d441c:
  ppppppuVar11 = param_1;
code_r0x0001049d4420:
code_r0x0001049d4424:
  param_1 = (undefined8 ******)0x2c;
  pcVar10 = (code *)0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,ppppppuVar20,ppppppuVar11);
code_r0x0001049d4434:
  _swift_bridgeObjectRelease(ppppppuVar9);
  ppppppuVar7 = (undefined8 ******)0x1130a2970;
  func_0x0001048db364();
  _swift_initStackObject();
  ppppppuVar21 = param_1;
  ppppppuVar20 = (undefined8 ******)pcVar10;
code_r0x0001049d4458:
  ppppppuVar7[3] = (undefined8 *****)0x2;
  ppppppuVar7[2] = (undefined8 *****)0x1;
  ppppppuVar9 = ppppppuVar7;
code_r0x0001049d4468:
  unaff_x22 = ppppppuVar7 + 4;
  *unaff_x22 = (undefined8 *****)0x73646c656966;
  ppppppuVar7[5] = (undefined8 *****)0xe600000000000000;
  ppppppuVar7[6] = ppppppuVar21;
code_r0x0001049d4484:
  ppppppuVar7[7] = ppppppuVar20;
  func_0x0001001830b8();
code_r0x0001049d448c:
  ppppppuVar21 = ppppppuVar7;
code_r0x0001049d4490:
  _swift_setDeallocating(ppppppuVar9);
  pcVar10 = (code *)0x1130a2978;
code_r0x0001049d44a0:
  param_1 = ppppppuVar21;
  func_0x0001049d47f8(unaff_x22,pcVar10);
code_r0x0001049d44b8:
  auVar27._8_8_ = pcVar10;
  auVar27._0_8_ = param_1;
  return auVar27;
}



/* Entry: 1049d23d0; end: 1049d251b;  */

void FUN_1049d23d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_68,0,0);
  if (param_4 == 0) {
    if (lRam00000001138158c0 == 0) goto LAB_1049d2434;
  }
  else if (lRam00000001138158c0 != 0 && lRam00000001138158c0 == param_4) {
LAB_1049d2434:
    func_0x0001049d4834(param_2,auStack_a8,0x11309c428);
    if (lStack_90 == 0) {
      func_0x0001049d47f8(auStack_a8,0x11309c428);
    }
    else {
      func_0x000100102924(auStack_a8,auStack_88);
      puVar1 = auStack_88;
      if (param_3 == 0) {
        FUN_1049d251c(puVar1);
        puVar2 = puVar1;
        _objc_retain();
        FUN_1049d4da4(puVar1);
        if (param_6 != (code *)0x0) {
          (*param_6)(puVar1,0);
          _objc_release(puVar2);
          func_0x000100183ab8(auStack_88);
          return;
        }
        func_0x000100183ab8(auStack_88);
        _objc_release(puVar2);
        return;
      }
      func_0x000100183ab8();
    }
    FUN_1049d4da4(0);
    if (param_6 == (code *)0x0) {
      return;
    }
    goto LAB_1049d24a4;
  }
  if (param_6 == (code *)0x0) {
    return;
  }
  param_3 = 0;
LAB_1049d24a4:
  (*param_6)(0,param_3);
  return;
}



/* Entry: 1049d251c; end: 1049d398b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1049d251c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 unaff_x20;
  long lVar20;
  long lVar21;
  ulong uVar22;
  code *pcVar23;
  code *pcVar24;
  ulong uVar25;
  long lVar26;
  undefined1 auStack_1a0 [8];
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x0001000bb420(param_1,&uStack_90);
  uVar13 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar1 = PTR___sypN_11034f1a8;
  puVar9 = &uStack_a0;
  _swift_dynamicCast(puVar9,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar13,6);
  uVar25 = uStack_a0;
  if (((ulong)puVar9 & 1) == 0) {
    return 0;
  }
  if (*(long *)(uStack_a0 + 0x10) == 0) {
LAB_1049d2670:
    _swift_bridgeObjectRelease(uVar25);
    return 0;
  }
  _swift_bridgeObjectRetain(uStack_a0);
  lVar10 = 0x6469;
  uVar17 = 0;
  func_0x000100029284(0x6469);
  if ((uVar17 & 1) == 0) {
    _swift_bridgeObjectRelease(uVar25);
    goto LAB_1049d2670;
  }
  func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar10 * 0x20,&uStack_90);
  _swift_bridgeObjectRelease(uVar25);
  puVar9 = &uStack_a0;
  _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)puVar9 & 1) == 0) goto LAB_1049d2670;
  uVar17 = uStack_a0 & 0xffffffffffff;
  if ((uStack_98 & 0x2000000000000000) != 0) {
    uVar17 = uStack_98 >> 0x38 & 0xf;
  }
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease(uVar25);
    uVar25 = uStack_98;
    goto LAB_1049d2670;
  }
  uStack_f8 = uStack_a0;
  uStack_f0 = uStack_98;
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d26b0:
    uStack_a8 = 0;
    uVar17 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar10 = 0x6b6e696c;
    uVar17 = 0;
    func_0x000100029284(0x6b6e696c);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d26b0;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar10 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar17 = uStack_98;
    uStack_a8 = uStack_a0;
    if ((int)puVar9 == 0) {
      uStack_a8 = 0;
      uVar17 = 0;
    }
  }
  lVar10 = 0x11309c5e0;
  func_0x0001048db364();
  uStack_b8 = *(long *)(*(long *)(lVar10 + -8) + 0x40);
  uVar19 = uStack_b8 + 0xf & 0xfffffffffffffff0;
  puVar7 = auStack_1a0 + -uVar19;
  lVar10 = (long)puVar7 - uVar19;
  puStack_e8 = auStack_1a0;
  puStack_b0 = puVar7;
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d27d0:
    lVar11 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar10,1,1,lVar11);
LAB_1049d27f4:
    if (uVar17 == 0) {
      lVar11 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(puStack_b0,1,1,lVar11);
    }
    else {
      _swift_bridgeObjectRetain(uVar17);
      __s10Foundation3URLV6stringACSgSSh_tcfC(puStack_b0,uStack_a8,uVar17);
      _swift_bridgeObjectRelease(uVar17);
    }
    lVar12 = 0;
    __s10Foundation3URLVMa();
    lVar11 = lVar10;
    (**(code **)(*(long *)(lVar12 + -8) + 0x30))(lVar10,1,lVar12);
    if ((int)lVar11 != 1) {
      func_0x0001049d47f8(lVar10,0x11309c5e0);
    }
  }
  else {
    puStack_e8 = auStack_1a0;
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x6b6e696c;
    uVar19 = 0;
    func_0x000100029284(0x6b6e696c);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d27d0;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    lVar12 = 0;
    __s10Foundation3URLVMa();
    lVar11 = lVar10;
    _swift_dynamicCast(lVar10,&uStack_90,puVar1 + 8,lVar12,6);
    lVar26 = *(long *)(lVar12 + -8);
    pcVar24 = *(code **)(lVar26 + 0x38);
    (*pcVar24)(lVar10,(uint)lVar11 ^ 1,1,lVar12);
    lVar11 = lVar10;
    (**(code **)(lVar26 + 0x30))(lVar10,1,lVar12);
    puVar6 = puStack_b0;
    if ((int)lVar11 == 1) goto LAB_1049d27f4;
    (**(code **)(lVar26 + 0x20))(puStack_b0,lVar10,lVar12);
    (*pcVar24)(puVar6,0,1,lVar12);
  }
  iVar8 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar8 == 0) {
    _swift_bridgeObjectRelease(uVar17);
  }
  else {
    uVar19 = uStack_b8 + 0xf & 0xfffffffffffffff0;
    lVar10 = (long)puVar7 - uVar19;
    lVar11 = lVar10 - uVar19;
    lStack_c8 = lVar10;
    puStack_c0 = puVar7;
    if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d29b4:
      lVar12 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar11,1,1,lVar12);
LAB_1049d29d8:
      if (uVar17 == 0) {
        func_0x0001049d47f8(puStack_b0,0x11309c5e0);
        lVar12 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar10,1,1,lVar12);
      }
      else {
        __s10Foundation3URLV6string25encodingInvalidCharactersACSgSSh_SbtcfC
                  (lVar10,uStack_a8,uVar17,0);
        _swift_bridgeObjectRelease(uVar17);
        func_0x0001049d47f8(puStack_b0,0x11309c5e0);
      }
      lVar26 = 0;
      __s10Foundation3URLVMa();
      lVar12 = lVar11;
      (**(code **)(*(long *)(lVar26 + -8) + 0x30))(lVar11,1,lVar26);
      if ((int)lVar12 != 1) {
        func_0x0001049d47f8(lVar11,0x11309c5e0);
      }
    }
    else {
      _swift_bridgeObjectRetain(uVar25);
      lVar12 = 0x6b6e696c;
      uVar19 = 0;
      func_0x000100029284(0x6b6e696c);
      if ((uVar19 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar25);
        goto LAB_1049d29b4;
      }
      func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar12 * 0x20,&uStack_90);
      _swift_bridgeObjectRelease(uVar25);
      lVar26 = 0;
      __s10Foundation3URLVMa();
      lVar12 = lVar11;
      _swift_dynamicCast(lVar11,&uStack_90,puVar1 + 8,lVar26,6);
      lVar21 = *(long *)(lVar26 + -8);
      pcVar24 = *(code **)(lVar21 + 0x38);
      (*pcVar24)(lVar11,(uint)lVar12 ^ 1,1,lVar26);
      lVar12 = lVar11;
      (**(code **)(lVar21 + 0x30))(lVar11,1,lVar26);
      if ((int)lVar12 == 1) goto LAB_1049d29d8;
      func_0x0001049d47f8(puStack_b0,0x11309c5e0);
      _swift_bridgeObjectRelease(uVar17);
      (**(code **)(lVar21 + 0x20))(lVar10,lVar11,lVar26);
      (*pcVar24)(lVar10,0,1,lVar26);
    }
    FUN_1049d4518(lVar10,puStack_b0,0x11309c5e0);
    puVar7 = puStack_c0;
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d2b28:
    uStack_100 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar10 = 0x73646e65697266;
    uVar17 = 0;
    func_0x000100029284(0x73646e65697266);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d2b28;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar10 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,uVar13,6);
    uVar17 = uStack_a0;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049d2b28;
    uVar19 = uStack_a0;
    _swift_bridgeObjectRetain();
    FUN_1049d459c();
    uStack_100 = uVar19;
    _swift_bridgeObjectRelease_n(uVar17,2);
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d2c1c:
    puStack_108 = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar10 = 0x676e61725f656761;
    uVar17 = 0xe900000000000065;
    func_0x000100029284(0x676e61725f656761);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d2c1c;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar10 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    uVar13 = 0x1130a2d38;
    func_0x0001048db364(0x1130a2d38);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,uVar13,6);
    uVar17 = uStack_a0;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049d2c1c;
    uVar13 = 0;
    func_0x0001049d455c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar19 = uVar17;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar17,PTR___sSSN_11034da80,uVar13,PTR___sSSSHsWP_11034da90);
    puVar14 = PTR_PTR_1126add68;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar14;
    _swift_bridgeObjectRelease(uVar17);
    _objc_release(uVar19);
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d2c94:
    uVar17 = 0;
    uVar19 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar10 = 0x7961646874726962;
    uVar17 = 0;
    func_0x000100029284(0x7961646874726962);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d2c94;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar10 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar17 = uStack_98;
    uVar19 = uStack_a0;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049d2c94;
  }
  lVar10 = 0x11309c628;
  func_0x0001048db364();
  lVar11 = lRam000000011309ff10;
  uStack_a8 = *(long *)(*(long *)(lVar10 + -8) + 0x40);
  lVar10 = (long)puVar7 - (uStack_a8 + 0xf & 0xfffffffffffffff0);
  puStack_110 = puVar7;
  if (uVar17 == 0) {
    lVar11 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar10,1,1,lVar11);
  }
  else {
    _swift_bridgeObjectRetain(uVar17);
    if (lVar11 != -1) {
      _swift_once(0x11309ff10,FUN_1049cffc0);
    }
    lVar11 = lRam00000001130a38a8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar19,uVar17);
    _objc_msgSend(lVar11,PTR_s_dateFromString__1125b6e00,uVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    lVar12 = lVar10 - (uStack_a8 + 0xf & 0xfffffffffffffff0);
    if (lVar11 != 0) {
      __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar12,lVar11);
      _objc_release(lVar11);
    }
    lVar26 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar26 + -8) + 0x38))(lVar12,lVar11 == 0,1,lVar26);
    FUN_1049d4518(lVar12,lVar10,0x11309c628);
    _swift_bridgeObjectRelease_n(uVar17,2);
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d2eb4:
    puStack_120 = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x6e776f74656d6f68;
    uVar17 = 0;
    func_0x000100029284(0x6e776f74656d6f68);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d2eb4;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    uVar13 = 0x11309c408;
    func_0x0001048db364(0x11309c408);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,uVar13,6);
    uVar17 = uStack_a0;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049d2eb4;
    uVar19 = uStack_a0;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uStack_a0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar14 = PTR_PTR_1126add70;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar14;
    _swift_bridgeObjectRelease(uVar17);
    _objc_release(uVar19);
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d2f94:
    puStack_128 = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x6e6f697461636f6c;
    uVar17 = 0;
    func_0x000100029284(0x6e6f697461636f6c);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d2f94;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    uVar13 = 0x11309c408;
    func_0x0001048db364(0x11309c408);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,uVar13,6);
    uVar17 = uStack_a0;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049d2f94;
    uVar19 = uStack_a0;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uStack_a0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar14 = PTR_PTR_1126add70;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar14;
    _swift_bridgeObjectRelease(uVar17);
    _objc_release(uVar19);
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d3024:
    uStack_180 = 0;
    uStack_130 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x7265646e6567;
    uVar17 = 0;
    func_0x000100029284(0x7265646e6567);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d3024;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uStack_180 = uStack_a0;
    uStack_130 = uStack_98;
    if ((int)puVar9 == 0) {
      uStack_180 = 0;
      uStack_130 = 0;
    }
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d30c4:
    uStack_170 = 0;
    uStack_158 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x616e5f7473726966;
    uVar17 = 0xea0000000000656d;
    func_0x000100029284(0x616e5f7473726966);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d30c4;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uStack_170 = uStack_a0;
    uStack_158 = uStack_98;
    if ((int)puVar9 == 0) {
      uStack_170 = 0;
      uStack_158 = 0;
    }
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d3168:
    uStack_178 = 0;
    uStack_168 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x6e5f656c6464696d;
    uVar17 = 0xeb00000000656d61;
    func_0x000100029284(0x6e5f656c6464696d);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d3168;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uStack_178 = uStack_a0;
    uStack_168 = uStack_98;
    if ((int)puVar9 == 0) {
      uStack_178 = 0;
      uStack_168 = 0;
    }
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d3200:
    uStack_188 = 0;
    uVar17 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x6d616e5f7473616c;
    uVar17 = 0xe900000000000065;
    func_0x000100029284(0x6d616e5f7473616c);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d3200;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar17 = uStack_98;
    uStack_188 = uStack_a0;
    if ((int)puVar9 == 0) {
      uStack_188 = 0;
      uVar17 = 0;
    }
  }
  if (*(long *)(uVar25 + 0x10) == 0) {
LAB_1049d3288:
    uStack_198 = 0;
    uVar19 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar25);
    lVar11 = 0x656d616e;
    uVar19 = 0;
    func_0x000100029284(0x656d616e);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d3288;
    }
    func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar11 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar25);
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar19 = uStack_98;
    uStack_198 = uStack_a0;
    if ((int)puVar9 == 0) {
      uStack_198 = 0;
      uVar19 = 0;
    }
  }
  uVar22 = uStack_b8 + 0xf & 0xfffffffffffffff0;
  lVar11 = lVar10 - uVar22;
  lStack_138 = lVar10;
  puStack_c0 = (undefined1 *)lVar11;
  func_0x0001049d4834(puStack_b0,lVar11,0x11309c5e0);
  lVar26 = lVar11 - (uStack_a8 + 0xf & 0xfffffffffffffff0);
  lStack_140 = lVar11;
  __s10Foundation4DateVACycfC(lVar26);
  lVar11 = 0;
  __s10Foundation4DateVMa();
  lStack_e0 = *(long *)(lVar11 + -8);
  lStack_c8 = lVar26;
  (**(code **)(lStack_e0 + 0x38))(lVar26,0,1,lVar11);
  lVar21 = lVar26 - uVar22;
  lVar12 = 0;
  lStack_148 = lVar26;
  __s10Foundation3URLVMa();
  lVar26 = *(long *)(lVar12 + -8);
  lStack_d0 = lVar21;
  (**(code **)(lVar26 + 0x38))(lVar21,1,1,lVar12);
  if (*(long *)(uVar25 + 0x10) != 0) {
    _swift_bridgeObjectRetain(uVar25);
    lVar15 = 0x6c69616d65;
    uVar22 = 0;
    func_0x000100029284(0x6c69616d65);
    if ((uVar22 & 1) != 0) {
      func_0x0001000bb420(*(long *)(uVar25 + 0x38) + lVar15 * 0x20,&uStack_90);
      _swift_bridgeObjectRelease(uVar25);
      goto LAB_1049d33bc;
    }
    _swift_bridgeObjectRelease(uVar25);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_1049d33bc:
  _swift_bridgeObjectRelease(uVar25);
  if (lStack_78 == 0) {
    func_0x0001049d47f8(&uStack_90,0x11309c428);
    uStack_190 = 0;
    uVar25 = 0;
  }
  else {
    puVar9 = &uStack_a0;
    _swift_dynamicCast(puVar9,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar25 = uStack_98;
    uStack_190 = uStack_a0;
    if ((int)puVar9 == 0) {
      uStack_190 = 0;
      uVar25 = 0;
    }
  }
  lVar15 = lStack_e0;
  lVar18 = lVar21 - (uStack_a8 + 0xf & 0xfffffffffffffff0);
  lStack_150 = lVar21;
  lStack_d8 = lVar18;
  func_0x0001049d4834(lVar10,lVar18,0x11309c628);
  _objc_allocWithZone();
  uVar22 = uStack_f0;
  lStack_160 = unaff_x20;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f8,uStack_f0);
  _swift_bridgeObjectRelease(uVar22);
  uVar22 = uStack_158;
  if (uStack_158 == 0) {
    uStack_f0 = 0;
  }
  else {
    uVar16 = uStack_170;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_170,uStack_158);
    uStack_f0 = uVar16;
    _swift_bridgeObjectRelease(uVar22);
  }
  uVar22 = uStack_168;
  if (uStack_168 == 0) {
    uStack_158 = 0;
    uVar22 = uStack_188;
  }
  else {
    uVar16 = uStack_178;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_178,uStack_168);
    uStack_158 = uVar16;
    _swift_bridgeObjectRelease(uVar22);
    uVar22 = uStack_188;
  }
  uStack_188 = uVar22;
  if (uVar17 == 0) {
    uStack_168 = 0;
    uVar17 = uStack_198;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar22,uVar17);
    uStack_168 = uVar22;
    _swift_bridgeObjectRelease(uVar17);
    uVar17 = uStack_198;
  }
  uStack_198 = uVar17;
  if (uVar19 == 0) {
    uStack_170 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar17,uVar19);
    uStack_170 = uVar17;
    _swift_bridgeObjectRelease(uVar19);
  }
  lVar20 = lVar18 - (uStack_b8 + 0xf & 0xfffffffffffffff0);
  func_0x0001049d4834(puStack_c0,lVar20,0x11309c5e0);
  pcVar24 = *(code **)(lVar26 + 0x30);
  lVar21 = lVar20;
  (*pcVar24)(lVar20,1,lVar12);
  lStack_118 = lVar10;
  if ((int)lVar21 == 1) {
    uStack_178 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    uStack_178 = lVar21;
    (**(code **)(lVar26 + 8))(lVar20,lVar12);
  }
  lVar21 = lVar18 - (uStack_a8 + 0xf & 0xfffffffffffffff0);
  func_0x0001049d4834(lStack_c8,lVar21,0x11309c628);
  pcVar23 = *(code **)(lVar15 + 0x30);
  lVar10 = lVar21;
  (*pcVar23)(lVar21,1,lVar11);
  if ((int)lVar10 == 1) {
    lVar10 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar15 + 8))(lVar21,lVar11);
  }
  lVar15 = lVar18 - (uStack_b8 + 0xf & 0xfffffffffffffff0);
  func_0x0001049d4834(lStack_d0,lVar15,0x11309c5e0);
  lVar21 = lVar15;
  (*pcVar24)(lVar15,1,lVar12);
  if ((int)lVar21 == 1) {
    lVar21 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar26 + 8))(lVar15,lVar12);
  }
  uVar17 = uStack_100;
  if (uVar25 == 0) {
    uVar19 = 0;
    lVar12 = lStack_e0;
  }
  else {
    uVar19 = uStack_190;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_190,uVar25);
    _swift_bridgeObjectRelease(uVar25);
    lVar12 = lStack_e0;
  }
  lStack_e0 = lVar12;
  if (uVar17 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = uVar17;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar17,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(uVar17);
  }
  lVar15 = lVar18 - (uStack_a8 + 0xf & 0xfffffffffffffff0);
  func_0x0001049d4834(lStack_d8,lVar15,0x11309c628);
  lVar26 = lVar15;
  (*pcVar23)(lVar15,1,lVar11);
  if ((int)lVar26 == 1) {
    lVar26 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar12 + 8))(lVar15,lVar11);
  }
  uVar17 = uStack_130;
  if (uStack_130 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = uStack_180;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_180,uStack_130);
    _swift_bridgeObjectRelease(uVar17);
  }
  uStack_b8 = uVar22;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  *(undefined1 *)(lVar18 + -0x18) = 0;
  *(ulong *)(lVar18 + -0x20) = uVar22;
  puVar1 = puStack_128;
  *(undefined **)(lVar18 + -0x28) = puStack_128;
  puVar14 = puStack_120;
  *(undefined **)(lVar18 + -0x30) = puStack_120;
  puVar3 = puStack_108;
  *(long *)(lVar18 + -0x40) = lVar26;
  *(undefined **)(lVar18 + -0x38) = puVar3;
  *(ulong *)(lVar18 + -0x50) = uVar19;
  *(ulong *)(lVar18 + -0x48) = uVar25;
  *(long *)(lVar18 + -0x60) = lVar10;
  *(long *)(lVar18 + -0x58) = lVar21;
  uVar5 = uStack_f0;
  uVar4 = uStack_f8;
  uVar2 = uStack_158;
  lVar11 = lStack_160;
  uVar16 = uStack_168;
  uVar22 = uStack_170;
  uVar17 = uStack_178;
  lStack_160 = lVar21;
  uStack_130 = uVar19;
  uStack_100 = uVar25;
  lStack_e0 = lVar26;
  _objc_msgSend(lVar11,PTR_s_initWithUserID_firstName_middleN_1125254a8,uStack_f8,uStack_f0,
                uStack_158,uStack_168,uStack_170,uStack_178);
  uStack_a8 = lVar11;
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar16);
  _objc_release(uVar22);
  _objc_release(uVar17);
  _objc_release(lVar10);
  _objc_release(lStack_160);
  _objc_release(uStack_130);
  _objc_release(uStack_100);
  _objc_release(lStack_e0);
  _objc_release(uStack_b8);
  func_0x0001049d47f8(lStack_d8,0x11309c628);
  func_0x0001049d47f8(lStack_d0,0x11309c5e0);
  func_0x0001049d47f8(lStack_c8,0x11309c628);
  func_0x0001049d47f8(puStack_c0,0x11309c5e0);
  func_0x0001049d47f8(lStack_118,0x11309c628);
  func_0x0001049d47f8(puStack_b0,0x11309c5e0);
  return uStack_a8;
}



/* Entry: 1049d398c; end: 1049d3a2f; +[FBSDKProfile loadProfileWithAccessToken:completion:] */

void FUN_1049d398c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1107bc260;
    _swift_allocObject(&UNK_1107bc260,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar3 = FUN_1049d4510;
  }
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1049d1ca8(param_3,pcVar3,puVar2);
  func_0x0001049d4500(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1049d3a30; end: 1049d3a97; +[FBSDKProfile makeGraphRequestParametersWithToken:] */

void FUN_1049d3a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001049d40ac(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049d3a98; end: 1049d3b1b;  */

uint FUN_1049d3a98(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049d0f04();
  pbVar3 = param_2;
  FUN_1049d0f04();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049d3b1c; end: 1049d3c6b;  */

void FUN_1049d3b1c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1049d0f04(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049d3c6c; end: 1049d3d1b;  */

void FUN_1049d3c6c(long param_1)

{
  long lVar1;
  
  if (lRam00000001130a38e0 == 0) {
    lVar1 = 0xff;
    FUN_1049db25c();
    func_0x0001049cd704();
    if (lVar1 == 0) {
      lRam00000001130a38e0 = param_1;
    }
  }
  return;
}



/* Entry: 1049d3d1c; end: 1049d44cb;  */

undefined8 FUN_1049d3d1c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puStack_110;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = 0x1130a2a10;
  func_0x0001048db364();
  _swift_initStaticObject();
  if (param_1 == 0) {
    _swift_retain(uVar6);
  }
  else {
    lVar17 = 0x1130a38e8;
    func_0x0001048db364();
    _swift_initStaticObject();
    _swift_retain(uVar6);
    _swift_retain(lVar17);
    _objc_retain();
    lVar7 = lVar17;
    func_0x00010499c7d4();
    _swift_release(lVar17);
    uVar8 = 0x1130a38f0;
    func_0x0001048db364(0x1130a38f0);
    _swift_arrayDestroy(lVar17 + 0x20,8,uVar8);
    puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if ((long)uVar14 < 0x40) {
      uVar15 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(lVar7 + 0x40);
    _swift_retain();
    _swift_bridgeObjectRetain(lVar7);
    lVar17 = 0;
joined_r0x0001049d3e24:
    if (uVar15 != 0) {
      uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar17 << 6;
      puVar11 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
      uVar8 = *puVar11;
      uVar2 = puVar11[1];
      uVar3 = *(undefined1 *)(*(long *)(lVar7 + 0x38) + uVar13);
      func_0x000104994534(uVar8,uVar2);
      lVar9 = param_1;
      _objc_msgSend(param_1,PTR_s_permissions_11261c190);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
      _objc_release(lVar9);
      lVar9 = lVar10;
      func_0x000104994570();
      _swift_bridgeObjectRelease(lVar10);
      lVar10 = lVar9;
      FUN_1048ee3f4();
      _swift_bridgeObjectRelease(lVar9);
      uStack_80 = uVar8;
      uStack_78 = uVar2;
      if (*(long *)(lVar10 + 0x10) != 0) {
        uStack_90 = uVar8;
        uStack_88 = uVar2;
        __ss6HasherV5_seedABSi_tcfC(&uStack_e0,*(undefined8 *)(lVar10 + 0x28));
        puVar11 = &uStack_e0;
        FUN_1049cdeac();
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
        uVar16 = (ulong)puVar11 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar10 + 0x38 + (uVar16 >> 3 & 0xfffffffffffff8)) >> (uVar16 & 0x3f) & 1) !=
            0) {
          do {
            puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar16 * 0x10);
            uStack_d8 = puVar11[1];
            uStack_e0 = *puVar11;
            func_0x000104994534(uStack_e0,uStack_d8);
            puVar11 = &uStack_e0;
            FUN_1049ce214(puVar11,&uStack_80);
            func_0x000104994548(uStack_e0,uStack_d8);
            if (((ulong)puVar11 & 1) != 0) {
              _swift_bridgeObjectRelease(lVar10);
              func_0x000104994548(uVar8,uVar2);
              puVar12 = puStack_110;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar12 & 1) == 0) {
                plVar1 = (long *)(puStack_110 + 0x10);
                puStack_110 = (undefined *)0x0;
                FUN_10499fdd4(0,*plVar1 + 1,1);
              }
              uVar13 = *(ulong *)(puStack_110 + 0x10);
              if (*(ulong *)(puStack_110 + 0x18) >> 1 <= uVar13) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_110 + 0x18));
                FUN_10499fdd4(puVar12,uVar13 + 1,1,puStack_110);
                puStack_110 = puVar12;
              }
              *(ulong *)(puStack_110 + 0x10) = uVar13 + 1;
              puStack_110[uVar13 + 0x20] = uVar3;
              goto joined_r0x0001049d3e24;
            }
            uVar16 = uVar16 + 1 & ~uVar13;
          } while ((*(ulong *)(lVar10 + 0x38 + (uVar16 >> 3 & 0xfffffffffffff8)) >> (uVar16 & 0x3f)
                   & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(lVar10);
      func_0x000104994548(uVar8,uVar2);
      goto joined_r0x0001049d3e24;
    }
    bVar5 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1049d40ac);
      (*pcVar4)();
    }
    if (lVar17 < (long)(uVar14 + 0x3f >> 6)) {
      uVar15 = ((ulong *)(lVar7 + 0x40))[lVar17];
      goto joined_r0x0001049d3e24;
    }
    _swift_bridgeObjectRelease(lVar7);
    _swift_release(lVar7);
    uStack_e0 = uVar6;
    FUN_10499f130(puStack_110);
    _objc_release(param_1);
    uVar6 = uStack_e0;
  }
  return uVar6;
}



/* Entry: 1049d44cc; end: 1049d44d7;  */

void FUN_1049d44cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  _swift_beginAccess(0x1138158c0,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x18),pcVar2,
                     *(undefined8 *)(unaff_x20 + 0x28));
  if (lVar1 == 0) {
    if (lRam00000001138158c0 == 0) goto LAB_1049d2434;
  }
  else if (lRam00000001138158c0 != 0 && lRam00000001138158c0 == lVar1) {
LAB_1049d2434:
    func_0x0001049d4834(param_2,auStack_a8,0x11309c428);
    if (lStack_90 == 0) {
      func_0x0001049d47f8(auStack_a8,0x11309c428);
    }
    else {
      func_0x000100102924(auStack_a8,auStack_88);
      puVar3 = auStack_88;
      if (param_3 == 0) {
        FUN_1049d251c(puVar3);
        puVar4 = puVar3;
        _objc_retain();
        FUN_1049d4da4(puVar3);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(puVar3,0);
          _objc_release(puVar4);
          func_0x000100183ab8(auStack_88);
          return;
        }
        func_0x000100183ab8(auStack_88);
        _objc_release(puVar4);
        return;
      }
      func_0x000100183ab8();
    }
    FUN_1049d4da4(0);
    if (pcVar2 == (code *)0x0) {
      return;
    }
    goto LAB_1049d24a4;
  }
  if (pcVar2 == (code *)0x0) {
    return;
  }
  param_3 = 0;
LAB_1049d24a4:
  (*pcVar2)(0,param_3);
  return;
}



/* Entry: 1049d44d8; end: 1049d450f;  */

void FUN_1049d44d8(long param_1,long param_2)

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



/* Entry: 1049d4510; end: 1049d4517;  */

void FUN_1049d4510(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049d4518; end: 1049d459b;  */

undefined8 FUN_1049d4518(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1049d459c; end: 1049d47b7;  */

undefined * FUN_1049d459c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain();
    lVar5 = 0x61746164;
    uVar13 = 0;
    func_0x000100029284(0x61746164);
    if ((uVar13 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(param_1);
      uVar6 = 0x11309d5b0;
      func_0x0001048db364(0x11309d5b0);
      puVar2 = PTR___sypN_11034f1a8;
      plVar7 = &lStack_90;
      _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,uVar6,6);
      lVar5 = lStack_90;
      param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((ulong)plVar7 & 1) == 0) {
        return (undefined *)0x0;
      }
      uVar13 = *(ulong *)(lStack_90 + 0x10);
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar1 = PTR___sSSN_11034da80;
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          while( true ) {
            if (*(ulong *)(lVar5 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1049d47b8);
              (*pcVar3)();
            }
            lVar12 = *(long *)(lVar5 + 0x20 + uVar14 * 8);
            if (*(long *)(lVar12 + 0x10) != 0) break;
LAB_1049d4668:
            uVar14 = uVar14 + 1;
            if (uVar13 == uVar14) goto LAB_1049d479c;
          }
          _swift_bridgeObjectRetain(lVar12);
          lVar8 = 0x6469;
          uVar11 = 0;
          func_0x000100029284(0x6469);
          if ((uVar11 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar12);
            goto LAB_1049d4668;
          }
          func_0x0001000bb420(*(long *)(lVar12 + 0x38) + lVar8 * 0x20,auStack_80);
          _swift_bridgeObjectRelease(lVar12);
          plVar7 = &lStack_90;
          _swift_dynamicCast(plVar7,auStack_80,puVar2 + 8,puVar1,6);
          lVar8 = lStack_88;
          lVar12 = lStack_90;
          if ((((ulong)plVar7 & 1) == 0) || (lStack_88 == 0)) goto LAB_1049d4668;
          puVar9 = param_1;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar10 = param_1;
          if (((ulong)puVar9 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(param_1 + 0x10) + 1,1,param_1);
          }
          uVar11 = *(ulong *)(puVar10 + 0x10);
          param_1 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
            param_1 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x0001000d182c(param_1,uVar11 + 1,1,puVar10);
          }
          *(ulong *)(param_1 + 0x10) = uVar11 + 1;
          *(long *)(param_1 + uVar11 * 0x10 + 0x20) = lVar12;
          *(long *)(param_1 + uVar11 * 0x10 + 0x28) = lVar8;
          bVar4 = uVar13 - 1 != uVar14;
          uVar14 = uVar14 + 1;
        } while (bVar4);
      }
LAB_1049d479c:
      _swift_bridgeObjectRelease(lVar5);
      if (*(long *)(param_1 + 0x10) != 0) {
        return param_1;
      }
    }
    _swift_bridgeObjectRelease(param_1);
  }
  return (undefined *)0x0;
}



/* Entry: 1049d47b8; end: 1049d4a1f;  */

void FUN_1049d47b8(long *param_1,code *param_2,long param_3)

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



/* Entry: 1049d4a20; end: 1049d4a93;  */

ulong FUN_1049d4a20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (0xe < uVar2) {
    uVar2 = 0xf;
  }
  return uVar2;
}



/* Entry: 1049d4a94; end: 1049d4a97;  */

void FUN_1049d4a94(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049d4a98; end: 1049d4ae3;  */

undefined8 FUN_1049d4a98(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_38,0,0);
  uVar1 = uRam00000001138158c0;
  _objc_retain(uRam00000001138158c0);
  return uVar1;
}



/* Entry: 1049d4ae4; end: 1049d4da3;  */

undefined * FUN_1049d4ae4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_150 [24];
  long lStack_138;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      func_0x0001049d79f0(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_88,0x11309c428);
      func_0x0001049d79f0(auStack_88,auStack_150,0x11309c428);
      if (lStack_138 == 0) {
        _swift_bridgeObjectRetain(uVar2);
        puVar8 = auStack_150;
      }
      else {
        func_0x000100102924(auStack_150,auStack_b8);
        func_0x0001049d79f0(&uStack_98,&uStack_e8,0x11309d998);
        func_0x000100102924(auStack_b8,auStack_108);
        uVar5 = uStack_e0;
        uVar4 = uStack_e8;
        uVar9 = *(ulong *)(puVar3 + 0x10);
        if (uVar9 < *(ulong *)(puVar3 + 0x18)) {
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          func_0x000100102b0c(uVar9 + 1,1);
        }
        __ss6HasherV5_seedABSi_tcfC(auStack_150,*(undefined8 *)(puVar3 + 0x28));
        puVar8 = auStack_150;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar4,uVar5);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar12 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar11 = uVar12 >> 6;
        uVar9 = -1L << (uVar12 & 0x3f) &
                (*(ulong *)(puVar3 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar7 = false;
          uVar9 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar11 + 1;
            if ((uVar12 == uVar9) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1049d4da4);
              (*pcVar6)();
            }
            uVar11 = 0;
            if (uVar12 != uVar9) {
              uVar11 = uVar12;
            }
            bVar7 = (bool)(uVar12 == uVar9 | bVar7);
          } while (*(ulong *)(puVar3 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar3 + uVar11 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar11 * 0x40;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar11 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar3 + uVar11 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        func_0x000100102924(auStack_108,*(long *)(puVar3 + 0x38) + uVar9 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        puVar8 = auStack_d8;
      }
      func_0x0001049d79b4(puVar8,0x11309c428);
      func_0x0001049d79b4(&uStack_98,0x11309d998);
    }
    bVar7 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049d4da0);
      (*pcVar6)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar14) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(param_1);
  return puVar3;
}



/* Entry: 1049d4da4; end: 1049d4edb;  */

void FUN_1049d4da4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    _swift_beginAccess(0x1138158c0,auStack_58,0,0);
    if (uRam00000001138158c0 == 0) {
      return;
    }
    _swift_beginAccess(0x1138158c0,auStack_70,1,0);
    uVar1 = uRam00000001138158c0;
    if (uRam00000001138158c0 == 0) {
      return;
    }
  }
  else {
    _swift_beginAccess(0x1138158c0,auStack_70,1,0);
    uVar2 = param_1;
    if (uRam00000001138158c0 == param_1) goto LAB_1049d4ebc;
    if (uRam00000001138158c0 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = uRam00000001138158c0;
      _objc_retain();
      _objc_retain(param_1);
      uVar3 = uVar1;
      FUN_1049d4f54();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = uRam00000001138158c0;
      if ((uVar3 & 1) != 0) goto LAB_1049d4ebc;
    }
  }
  uVar2 = param_1;
  uRam00000001138158c0 = param_1;
  _objc_retain(param_1);
  FUN_1049d729c(param_1);
  FUN_1049d591c(uVar1,param_1);
  _objc_release(uVar2);
  uVar2 = uVar1;
LAB_1049d4ebc:
  _objc_release(uVar2);
  return;
}



/* Entry: 1049d4edc; end: 1049d4f1f; +[FBSDKProfile currentProfile] */

void FUN_1049d4edc(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(uRam00000001138158c0);
  return;
}



/* Entry: 1049d4f20; end: 1049d4f53; +[FBSDKProfile setCurrentProfile:] */

void FUN_1049d4f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  FUN_1049d4da4(param_3);
  return;
}



/* Entry: 1049d4f54; end: 1049d591b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049d4f54(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  uint uVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_b0 [4];
  uint uStack_ac;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar8 = auStack_b0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x11309c628;
  func_0x0001048db364();
  uVar9 = (long)puVar8 - (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x1130a3928;
  func_0x0001048db364();
  lVar10 = uVar9 - (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar2 + -8);
  lVar22 = lVar10 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = 0x11309c5e0;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar16 = lVar22 - uVar11;
  lVar20 = uVar16 - uVar11;
  lVar19 = 0x1130a3930;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar23 = lVar20 - uVar11;
  lVar18 = lVar23 - uVar11;
  uVar11 = *(ulong *)(unaff_x20 + _DAT_1130a3940);
  if ((uVar11 == *(ulong *)(param_1 + _DAT_1130a3940) &&
       ((ulong *)(unaff_x20 + _DAT_1130a3940))[1] == ((ulong *)(param_1 + _DAT_1130a3940))[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar11 & 1) != 0)) {
    uVar11 = ((ulong *)(unaff_x20 + _DAT_1130a3948))[1];
    uVar6 = ((ulong *)(param_1 + _DAT_1130a3948))[1];
    if (uVar11 == 0) {
      if (uVar6 == 0) goto LAB_1049d5114;
    }
    else if ((uVar6 != 0) &&
            (((uVar3 = *(ulong *)(unaff_x20 + _DAT_1130a3948),
              uVar3 == *(ulong *)(param_1 + _DAT_1130a3948) && (uVar11 == uVar6)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) != 0)))) {
LAB_1049d5114:
      uVar11 = ((ulong *)(unaff_x20 + _DAT_1130a3950))[1];
      uVar6 = ((ulong *)(param_1 + _DAT_1130a3950))[1];
      if (uVar11 == 0) {
        if (uVar6 == 0) goto LAB_1049d5164;
      }
      else if ((uVar6 != 0) &&
              (((uVar3 = *(ulong *)(unaff_x20 + _DAT_1130a3950),
                uVar3 == *(ulong *)(param_1 + _DAT_1130a3950) && (uVar11 == uVar6)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar3 & 1) != 0)))) {
LAB_1049d5164:
        uVar11 = ((ulong *)(unaff_x20 + _DAT_1130a3958))[1];
        uVar6 = ((ulong *)(param_1 + _DAT_1130a3958))[1];
        if (uVar11 == 0) {
          if (uVar6 == 0) goto LAB_1049d51b4;
        }
        else if ((uVar6 != 0) &&
                (((uVar3 = *(ulong *)(unaff_x20 + _DAT_1130a3958),
                  uVar3 == *(ulong *)(param_1 + _DAT_1130a3958) && (uVar11 == uVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_1049d51b4:
          uVar11 = ((ulong *)(unaff_x20 + _DAT_1130a3960))[1];
          uVar6 = ((ulong *)(param_1 + _DAT_1130a3960))[1];
          if (uVar11 == 0) {
            if (uVar6 == 0) goto LAB_1049d5204;
          }
          else if ((uVar6 != 0) &&
                  (((uVar3 = *(ulong *)(unaff_x20 + _DAT_1130a3960),
                    uVar3 == *(ulong *)(param_1 + _DAT_1130a3960) && (uVar11 == uVar6)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar3 & 1) != 0)))) {
LAB_1049d5204:
            lVar4 = _DAT_1130a3968;
            lVar14 = (long)*(int *)(lVar19 + 0x30);
            func_0x0001049d79f0(unaff_x20 + _DAT_1130a3968,lVar18,0x11309c5e0);
            func_0x0001049d79f0(param_1 + lVar4,lVar18 + lVar14,0x11309c5e0);
            pcVar12 = *(code **)(lVar21 + 0x30);
            lVar4 = lVar18;
            (*pcVar12)(lVar18,1,lVar2);
            if ((int)lVar4 == 1) {
              lVar14 = lVar18 + lVar14;
              (*pcVar12)(lVar14,1,lVar2);
              if ((int)lVar14 == 1) {
                func_0x0001049d79b4(lVar18,0x11309c5e0);
LAB_1049d537c:
                uVar11 = unaff_x20 + _DAT_1130a3970;
                __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar11,param_1 + _DAT_1130a3970);
                lVar18 = _DAT_1130a3978;
                if ((uVar11 & 1) != 0) {
                  lVar19 = (long)*(int *)(lVar19 + 0x30);
                  func_0x0001049d79f0(unaff_x20 + _DAT_1130a3978,lVar23,0x11309c5e0);
                  func_0x0001049d79f0(param_1 + lVar18,lVar23 + lVar19,0x11309c5e0);
                  lVar18 = lVar23;
                  (*pcVar12)(lVar23,1,lVar2);
                  if ((int)lVar18 == 1) {
                    lVar19 = lVar23 + lVar19;
                    (*pcVar12)(lVar19,1,lVar2);
                    if ((int)lVar19 != 1) {
LAB_1049d5454:
                      uVar5 = 0x1130a3930;
                      lVar18 = lVar23;
                      goto LAB_1049d52e0;
                    }
                    func_0x0001049d79b4(lVar23,0x11309c5e0);
LAB_1049d54e8:
                    uVar11 = ((ulong *)(unaff_x20 + _DAT_1130a3980))[1];
                    uVar16 = ((ulong *)(param_1 + _DAT_1130a3980))[1];
                    if (uVar11 == 0) {
                      if (uVar16 == 0) goto LAB_1049d5538;
                    }
                    else if ((uVar16 != 0) &&
                            (((uVar6 = *(ulong *)(unaff_x20 + _DAT_1130a3980),
                              uVar6 == *(ulong *)(param_1 + _DAT_1130a3980) && (uVar11 == uVar16))
                             || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                           (), (uVar6 & 1) != 0)))) {
LAB_1049d5538:
                      uVar11 = *(ulong *)(unaff_x20 + _DAT_1130a3988);
                      if (uVar11 == 0) {
                        if (*(long *)(param_1 + _DAT_1130a3988) == 0) goto LAB_1049d5564;
                      }
                      else if ((*(long *)(param_1 + _DAT_1130a3988) != 0) &&
                              (func_0x00010142cfc4(), (uVar11 & 1) != 0)) {
LAB_1049d5564:
                        lVar19 = _DAT_1130a3990;
                        if (*(char *)(unaff_x20 + _DAT_1130a39c0) ==
                            *(char *)(param_1 + _DAT_1130a39c0)) {
                          lVar17 = (long)*(int *)(lVar17 + 0x30);
                          func_0x0001049d79f0(unaff_x20 + _DAT_1130a3990,lVar10,0x11309c628);
                          func_0x0001049d79f0(param_1 + lVar19,lVar10 + lVar17,0x11309c628);
                          pcVar12 = *(code **)(lVar7 + 0x30);
                          lVar19 = lVar10;
                          (*pcVar12)(lVar10,1,lVar1);
                          if ((int)lVar19 == 1) {
                            lVar17 = lVar10 + lVar17;
                            (*pcVar12)(lVar17,1,lVar1);
                            if ((int)lVar17 != 1) {
LAB_1049d5678:
                              uVar5 = 0x1130a3928;
                              lVar18 = lVar10;
                              goto LAB_1049d52e0;
                            }
                            func_0x0001049d79b4(lVar10,0x11309c628);
LAB_1049d570c:
                            uVar11 = *(ulong *)(unaff_x20 + _DAT_1130a3998);
                            lVar17 = *(long *)(param_1 + _DAT_1130a3998);
                            if (uVar11 == 0) {
                              if (lVar17 == 0) {
LAB_1049d5788:
                                uVar11 = *(ulong *)(unaff_x20 + _DAT_1130a39a0);
                                lVar17 = *(long *)(param_1 + _DAT_1130a39a0);
                                if (uVar11 == 0) {
                                  if (lVar17 == 0) {
LAB_1049d5804:
                                    uVar11 = *(ulong *)(unaff_x20 + _DAT_1130a39a8);
                                    lVar17 = *(long *)(param_1 + _DAT_1130a39a8);
                                    if (uVar11 == 0) {
                                      if (lVar17 == 0) {
LAB_1049d5880:
                                        uVar11 = ((ulong *)(unaff_x20 + _DAT_1130a39b0))[1];
                                        uVar9 = ((ulong *)(param_1 + _DAT_1130a39b0))[1];
                                        if (uVar11 == 0) {
                                          if (uVar9 == 0) goto LAB_1049d58d0;
                                        }
                                        else if ((uVar9 != 0) &&
                                                (((uVar16 = *(ulong *)(unaff_x20 + _DAT_1130a39b0),
                                                  uVar16 == *(ulong *)(param_1 + _DAT_1130a39b0) &&
                                                  (uVar11 == uVar9)) ||
                                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (), (uVar16 & 1) != 0)))) {
LAB_1049d58d0:
                                          lVar17 = *(long *)(unaff_x20 + _DAT_1130a39b8);
                                          lVar19 = *(long *)(param_1 + _DAT_1130a39b8);
                                          uVar15 = (uint)(lVar17 == 0 && lVar19 == 0);
                                          if ((lVar17 != 0) && (lVar19 != 0)) {
                                            _swift_bridgeObjectRetain(lVar19);
                                            func_0x000100c3fb0c(lVar17,lVar19);
                                            uVar15 = (uint)lVar17;
                                            _swift_bridgeObjectRelease(lVar19);
                                          }
                                          goto LAB_1049d5584;
                                        }
                                      }
                                    }
                                    else if (lVar17 != 0) {
                                      FUN_1049d7648(0,0x1130a38c8,&PTR_PTR_1126add70);
                                      _objc_retain(lVar17);
                                      _objc_retain();
                                      uVar9 = uVar11;
                                      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                                      _objc_release(lVar17);
                                      _objc_release(uVar11);
                                      if ((uVar9 & 1) != 0) goto LAB_1049d5880;
                                    }
                                  }
                                }
                                else if (lVar17 != 0) {
                                  FUN_1049d7648(0,0x1130a38c8,&PTR_PTR_1126add70);
                                  _objc_retain(lVar17);
                                  _objc_retain();
                                  uVar9 = uVar11;
                                  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                                  _objc_release(lVar17);
                                  _objc_release(uVar11);
                                  if ((uVar9 & 1) != 0) goto LAB_1049d5804;
                                }
                              }
                            }
                            else if (lVar17 != 0) {
                              FUN_1049d7648(0,0x1130a3900,&PTR_PTR_1126add68);
                              _objc_retain(lVar17);
                              _objc_retain();
                              uVar9 = uVar11;
                              __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                              _objc_release(lVar17);
                              _objc_release(uVar11);
                              if ((uVar9 & 1) != 0) goto LAB_1049d5788;
                            }
                          }
                          else {
                            func_0x0001049d79f0(lVar10,uVar9,0x11309c628);
                            lVar19 = lVar10 + lVar17;
                            (*pcVar12)(lVar19,1,lVar1);
                            if ((int)lVar19 == 1) {
                              (**(code **)(lVar7 + 8))(uVar9,lVar1);
                              goto LAB_1049d5678;
                            }
                            (**(code **)(lVar7 + 0x20))(puVar8,lVar10 + lVar17,lVar1);
                            uVar5 = 0x112d373e0;
                            func_0x0001049d7974(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                                                PTR___s10Foundation4DateVSQAAMc_110350be0);
                            uVar11 = uVar9;
                            __sSQ2eeoiySbx_xtFZTj(uVar9,puVar8,lVar1,uVar5);
                            pcVar12 = *(code **)(lVar7 + 8);
                            (*pcVar12)(puVar8,lVar1);
                            (*pcVar12)(uVar9,lVar1);
                            func_0x0001049d79b4(lVar10,0x11309c628);
                            if ((uVar11 & 1) != 0) goto LAB_1049d570c;
                          }
                        }
                      }
                    }
                  }
                  else {
                    func_0x0001049d79f0(lVar23,uVar16,0x11309c5e0);
                    lVar18 = lVar23 + lVar19;
                    (*pcVar12)(lVar18,1,lVar2);
                    if ((int)lVar18 == 1) {
                      (**(code **)(lVar21 + 8))(uVar16,lVar2);
                      goto LAB_1049d5454;
                    }
                    (**(code **)(lVar21 + 0x20))(lVar22,lVar23 + lVar19,lVar2);
                    uVar5 = 0x112d7e688;
                    func_0x0001049d7974(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                                        PTR___s10Foundation3URLVSQAAMc_1103509a8);
                    uVar11 = uVar16;
                    __sSQ2eeoiySbx_xtFZTj(uVar16,lVar22,lVar2,uVar5);
                    pcVar12 = *(code **)(lVar21 + 8);
                    (*pcVar12)(lVar22,lVar2);
                    (*pcVar12)(uVar16,lVar2);
                    func_0x0001049d79b4(lVar23,0x11309c5e0);
                    if ((uVar11 & 1) != 0) goto LAB_1049d54e8;
                  }
                }
              }
              else {
LAB_1049d52d4:
                uVar5 = 0x1130a3930;
LAB_1049d52e0:
                func_0x0001049d79b4(lVar18,uVar5);
              }
            }
            else {
              func_0x0001049d79f0(lVar18,lVar20,0x11309c5e0);
              lVar4 = lVar18 + lVar14;
              (*pcVar12)(lVar4,1,lVar2);
              if ((int)lVar4 == 1) {
                (**(code **)(lVar21 + 8))(lVar20,lVar2);
                goto LAB_1049d52d4;
              }
              (**(code **)(lVar21 + 0x20))(lVar22,lVar18 + lVar14,lVar2);
              uVar5 = 0x112d7e688;
              func_0x0001049d7974(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                                  PTR___s10Foundation3URLVSQAAMc_1103509a8);
              lVar14 = lVar20;
              __sSQ2eeoiySbx_xtFZTj(lVar20,lVar22,lVar2,uVar5);
              uStack_ac = (uint)lVar14;
              pcVar13 = *(code **)(lVar21 + 8);
              (*pcVar13)(lVar22,lVar2);
              (*pcVar13)(lVar20,lVar2);
              func_0x0001049d79b4(lVar18,0x11309c5e0);
              if ((uStack_ac & 1) != 0) goto LAB_1049d537c;
            }
          }
        }
      }
    }
  }
  uVar15 = 0;
LAB_1049d5584:
  return uVar15 & 1;
}



/* Entry: 1049d591c; end: 1049d5b0b;  */

void FUN_1049d591c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 unaff_x20;
  undefined1 auStack_e0 [128];
  long lStack_58;
  
  puVar1 = &UNK_10dd4b630;
  _swift_getKeyPath(&UNK_10dd4b630);
  FUN_1049b1930(&lStack_58);
  _swift_release(puVar1);
  if (lStack_58 != 0) {
    uVar2 = unaff_x20;
    _swift_getMetatypeMetadata();
    puVar3 = &stack0xffffffffffffffa0;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar3,uVar2);
    lVar4 = 0x11309d990;
    func_0x0001048db364();
    puVar7 = auStack_e0;
    _swift_initStackObject();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    ppuVar5 = &PTR____CFConstantStringClassReference_110da5718;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar4 + 0x20) = ppuVar5;
    *(undefined1 **)(lVar4 + 0x28) = puVar7;
    lVar6 = param_2;
    uVar2 = unaff_x20;
    if (param_2 == 0) {
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      lVar6 = 0;
      uVar2 = 0;
    }
    *(long *)(lVar4 + 0x30) = lVar6;
    *(undefined8 *)(lVar4 + 0x48) = uVar2;
    ppuVar5 = &PTR____CFConstantStringClassReference_110da56f8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined ***)(lVar4 + 0x50) = ppuVar5;
    *(undefined1 **)(lVar4 + 0x58) = puVar7;
    lVar6 = param_1;
    if (param_1 == 0) {
      unaff_x20 = 0;
      *(undefined8 *)(lVar4 + 0x68) = 0;
      *(undefined8 *)(lVar4 + 0x70) = 0;
      lVar6 = 0;
    }
    *(long *)(lVar4 + 0x60) = lVar6;
    *(undefined8 *)(lVar4 + 0x78) = unaff_x20;
    _objc_retain(param_2);
    _objc_retain(param_1);
    lVar6 = lVar4;
    func_0x000102bcb3b0(lVar4);
    _swift_setDeallocating(lVar4);
    uVar2 = 0x11309d670;
    func_0x0001048db364(0x11309d670);
    _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),2,uVar2);
    lVar4 = lVar6;
    FUN_1049d4ae4(lVar6);
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar4);
    _objc_msgSend(lStack_58,PTR_s_fb_postNotificationName_object_u_1125254b0,
                  &PTR____CFConstantStringClassReference_110da56d8,puVar3,lVar6);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(lVar6);
    _swift_unknownObjectRelease(lStack_58);
  }
  return;
}



/* Entry: 1049d5b0c; end: 1049d5b93;  */

undefined1  [16] FUN_1049d5b0c(long *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0xee0e);
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x20;
  _swift_beginAccess(0x1138158c0,lVar1,0,0);
  *(undefined8 *)(lVar1 + 0x18) = uRam00000001138158c0;
  _objc_retain();
  auVar2._8_8_ = (undefined8 *)(lVar1 + 0x18);
  auVar2._0_8_ = FUN_1049d5b94;
  return auVar2;
}



/* Entry: 1049d5b94; end: 1049d5bef;  */

void FUN_1049d5b94(long *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  puVar3 = (undefined8 *)(lVar1 + 0x18);
  uVar2 = *puVar3;
  if ((param_2 & 1) == 0) {
    FUN_1049d4da4(uVar2);
  }
  else {
    _objc_retain(uVar2);
    FUN_1049d4da4(uVar2);
    _objc_release(*puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1049d5bf0; end: 1049d5e1f;  */

long FUN_1049d5bf0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar6 = 0;
  puVar3 = &UNK_10dd4b4c0;
  _swift_getKeyPath(&UNK_10dd4b4c0);
  FUN_1049b1930(&lStack_68);
  _swift_release(puVar3);
  lVar2 = lStack_68;
  if (lStack_68 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    uVar4 = 0xd00000000000002c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f227c20);
    lVar5 = lVar2;
    _objc_msgSend(lVar2,PTR_s_fb_objectForKey__1125c5f60,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _swift_unknownObjectRelease(lVar2);
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
    puVar3 = PTR___sypN_11034f1a8;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    lStack_48 = lStack_78;
    uStack_50 = uStack_80;
    if (lStack_78 != 0) {
      _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,
                         PTR___s10Foundation4DataVN_110350ae0,6);
      uVar1 = uStack_88;
      uVar4 = uStack_90;
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      puVar7 = PTR_PTR_1126addf0;
      _swift_getInitializedObjCClass();
      uVar8 = uVar4;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar4,uVar1);
      _objc_msgSend(puVar7,PTR_s_createSecureUnarchiverFor__1125b3c80,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _swift_getObjCClassFromMetadata();
      puVar9 = puVar7;
      _objc_msgSend(puVar7,PTR_s_decodeObjectOfClass_forKey__1125b75b0,unaff_x20,
                    *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        func_0x00010006c090(uVar4,uVar1);
        _swift_unknownObjectRelease(puVar7);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90);
        func_0x00010006c090(uVar4,uVar1);
        _swift_unknownObjectRelease(puVar7);
        _swift_unknownObjectRelease(puVar9);
      }
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      lStack_48 = lStack_78;
      uStack_50 = uStack_80;
      if (lStack_78 != 0) {
        plVar10 = &lStack_68;
        _swift_dynamicCast(plVar10,&uStack_60,puVar3 + 8);
        if ((int)plVar10 == 0) {
          return 0;
        }
        return lStack_68;
      }
    }
  }
  func_0x0001049d79b4(&uStack_60,0x11309c428);
  return 0;
}



/* Entry: 1049d5e20; end: 1049d5e2b;  */

undefined * FUN_1049d5e20(void)

{
  return &UNK_1107bc390;
}



/* Entry: 1049d5e2c; end: 1049d5e4f; +[FBSDKProfile fetchCachedProfile] */

void FUN_1049d5e2c(void)

{
  _swift_getObjCClassMetadata();
  FUN_1049d5bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049d5e50; end: 1049d5e6b;  */

undefined1  [16] FUN_1049d5e50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f227c20;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 1049d5e6c; end: 1049d5e97; +[FBSDKProfile profileUserDefaultsKey] */

void FUN_1049d5e6c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f227c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049d5e98; end: 1049d5e9f; +[FBSDKProfile supportsSecureCoding] */

undefined8 FUN_1049d5e98(void)

{
  return 1;
}



/* Entry: 1049d5ea0; end: 1049d5ea7;  */

undefined8 FUN_1049d5ea0(void)

{
  return 1;
}



/* Entry: 1049d5ea8; end: 1049d5eeb;  */

undefined8 FUN_1049d5ea8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1049d5eec; end: 1049d6547;  */

undefined8 FUN_1049d5eec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 unaff_x20;
  undefined *puVar22;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_70;
  
  lVar1 = 0;
  FUN_1049d7648(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar2 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  if (lVar2 == 0) {
LAB_1049d6188:
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  __sSS10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo8NSStringC_SSSgztFZ();
  _objc_release(lVar2);
  lVar2 = lStack_80;
  uVar20 = uStack_88;
  if (lStack_80 == 0) goto LAB_1049d6188;
  lVar3 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar1,0x6d614e7473726966,0xe900000000000065,lVar1);
  lVar4 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar1,0x614e656c6464696d,0xea0000000000656d,lVar1);
  lVar5 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar1,0x656d614e7473616c,0xe800000000000000,lVar1);
  lVar6 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar1,0x656d616e,0xe400000000000000,lVar1);
  uVar7 = 0;
  FUN_1049d7648(0,0x112d72f98,&PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar8 = uVar7;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  uVar9 = 0;
  FUN_1049d7648(0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar10 = uVar9;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (uVar7,0x4c52556567616d69,0xe800000000000000,uVar7);
  lVar11 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar1,0x6c69616d65,0xe500000000000000,lVar1);
  lVar12 = 0x11309d6d8;
  func_0x0001048db364();
  lVar13 = lVar12;
  _swift_allocObject();
  *(undefined8 *)(lVar13 + 0x18) = 4;
  *(undefined8 *)(lVar13 + 0x10) = 2;
  uVar14 = 0;
  FUN_1049d7648(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  *(undefined8 *)(lVar13 + 0x20) = uVar14;
  *(long *)(lVar13 + 0x28) = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
            (&uStack_88,lVar13,0x4449646e65697266,0xe900000000000073);
  _swift_bridgeObjectRelease(lVar13);
  puVar21 = PTR___sypN_11034f1a8;
  if (lStack_70 == 0) {
    func_0x0001049d79b4(&uStack_88,0x11309c428);
    puVar21 = (undefined *)0x0;
  }
  else {
    uVar16 = 0x11309c618;
    func_0x0001048db364(0x11309c618);
    ppuVar15 = &puStack_90;
    _swift_dynamicCast(ppuVar15,&uStack_88,puVar21 + 8,uVar16,6);
    puVar21 = puStack_90;
    if ((int)ppuVar15 == 0) {
      puVar21 = (undefined *)0x0;
    }
  }
  uVar16 = 0x6574696d694c7369;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6574696d694c7369,0xe900000000000064);
  _objc_msgSend(param_1,PTR_s_decodeBoolForKey__1125b74e0,uVar16);
  _objc_release(uVar16);
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (uVar9,0x7961646874726962,0xe800000000000000,uVar9);
  uVar17 = 0;
  FUN_1049d7648(0,0x1130a3900,&PTR_PTR_1126add68);
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  uVar18 = 0;
  FUN_1049d7648(0,0x1130a38c8,&PTR_PTR_1126add70);
  uVar16 = uVar18;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (uVar18,0x6e6f697461636f6c,0xe800000000000000,uVar18);
  lVar13 = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar1,0x7265646e6567,0xe600000000000000,lVar1);
  _swift_allocObject(lVar12,0x30,7);
  *(undefined8 *)(lVar12 + 0x18) = 4;
  *(undefined8 *)(lVar12 + 0x10) = 2;
  *(undefined8 *)(lVar12 + 0x20) = uVar14;
  *(long *)(lVar12 + 0x28) = lVar1;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF(&uStack_88);
  _swift_bridgeObjectRelease(lVar12);
  if (lStack_70 == 0) {
    func_0x0001049d79b4(&uStack_88,0x11309c428);
  }
  else {
    uVar14 = 0x11309c618;
    func_0x0001048db364(0x11309c618);
    ppuVar15 = &puStack_90;
    _swift_dynamicCast(ppuVar15,&uStack_88,PTR___sypN_11034f1a8 + 8,uVar14,6);
    puVar22 = puStack_90;
    if (((ulong)ppuVar15 & 1) != 0) goto LAB_1049d63a4;
  }
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_1049d63a4:
  puVar19 = puVar22;
  func_0x000100403a6c();
  _swift_bridgeObjectRelease(puVar22);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar20,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  if (puVar21 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = puVar21;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar21,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(puVar21);
  }
  puVar21 = puVar19;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
            (puVar19,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar19);
  _objc_msgSend();
  _objc_release(uVar20);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(lVar11);
  _objc_release(puVar22);
  _objc_release(uVar9);
  _objc_release(lVar13);
  _objc_release(puVar21);
  _objc_release(param_1);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar18);
  return unaff_x20;
}



/* Entry: 1049d6548; end: 1049d656f; -[FBSDKProfile initWithCoder:] */

void FUN_1049d6548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1049d5eec();
  return;
}



/* Entry: 1049d6570; end: 1049d6d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d6570(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  lVar11 = 0x11309c628;
  func_0x0001048db364();
  puVar13 = &stack0xffffffffffffffa0 +
            -(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x11309c5e0;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)puVar13 - uVar10;
  lVar11 = lVar14 - uVar10;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3940);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_1130a3940))[1]);
  uVar2 = 0x444972657375;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444972657375,0xe600000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a3948))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3948);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
  }
  uVar2 = 0x6d614e7473726966;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d614e7473726966,0xe900000000000065);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a3950))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3950);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
  }
  uVar2 = 0x614e656c6464696d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x614e656c6464696d,0xea0000000000656d);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a3958))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3958);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
  }
  uVar2 = 0x656d614e7473616c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d614e7473616c,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a3960))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3960);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
  }
  uVar2 = 0x656d616e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d616e,0xe400000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  func_0x0001049d79f0(unaff_x20 + _DAT_1130a3968,lVar11,0x11309c5e0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  pcVar16 = *(code **)(lVar17 + 0x30);
  lVar5 = lVar11;
  (*pcVar16)(lVar11,1,lVar4);
  lVar15 = 0;
  if ((int)lVar5 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar17 + 8))(lVar11,lVar4);
    lVar15 = lVar5;
  }
  uVar3 = 0x4c52556b6e696c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52556b6e696c,0xe700000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar15,uVar3);
  _swift_unknownObjectRelease(lVar15);
  _objc_release(uVar3);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_DAT_1130a3970);
  uVar2 = 0x4468736572666572;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4468736572666572,0xeb00000000657461);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x0001049d79f0(unaff_x20 + _DAT_1130a3978,lVar14,0x11309c5e0);
  lVar11 = lVar14;
  (*pcVar16)(lVar14,1,lVar4);
  if ((int)lVar11 == 1) {
    lVar11 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar17 + 8))(lVar14,lVar4);
  }
  uVar3 = 0x4c52556567616d69;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52556567616d69,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar11,uVar3);
  _swift_unknownObjectRelease(lVar11);
  _objc_release(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a3980))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3980);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
  }
  uVar2 = 0x6c69616d65;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c69616d65,0xe500000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  lVar11 = *(long *)(unaff_x20 + _DAT_1130a3988);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar11,PTR___sSSN_11034da80);
  }
  uVar3 = 0x4449646e65697266;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4449646e65697266,0xe900000000000073);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar11,uVar3);
  _swift_unknownObjectRelease(lVar11);
  _objc_release(uVar3);
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_1130a39c0);
  uVar3 = 0x6574696d694c7369;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6574696d694c7369,0xe900000000000064);
  _objc_msgSend(param_1,PTR_s_encodeBool_forKey__1125c2510,uVar1,uVar3);
  _objc_release(uVar3);
  func_0x0001049d79f0(unaff_x20 + _DAT_1130a3990,puVar13,0x11309c628);
  lVar11 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar11 + -8);
  puVar6 = puVar13;
  (**(code **)(lVar14 + 0x30))(puVar13,1,lVar11);
  puVar12 = (undefined1 *)0x0;
  if ((int)puVar6 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar14 + 8))(puVar13,lVar11);
    puVar12 = puVar6;
  }
  uVar3 = 0x7961646874726962;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7961646874726962,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,puVar12,uVar3);
  _swift_unknownObjectRelease(puVar12);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a3998);
  uVar3 = 0x65676e6152656761;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65676e6152656761,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar3);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a39a0);
  uVar3 = 0x6e776f74656d6f68;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e776f74656d6f68,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar3);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a39a8);
  uVar3 = 0x6e6f697461636f6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f697461636f6c,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar3);
  _objc_release(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_1130a39b0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a39b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
  }
  uVar2 = 0x7265646e6567;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7265646e6567,0xe600000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar7 = *(undefined **)(unaff_x20 + _DAT_1130a39b8);
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
    puVar7 = (undefined *)0x0;
    puVar8 = puVar9;
  }
  _swift_bridgeObjectRetain(puVar7);
  func_0x0001048ffbe8(puVar8);
  puVar9 = puVar8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(puVar8);
  uVar3 = 0x697373696d726570;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x697373696d726570,0xeb00000000736e6f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,puVar9,uVar3);
  _objc_release(puVar9);
  _objc_release(uVar3);
  return;
}


