/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00073370; end: 00073433; -[SCUserTwoFAVerifiedDevice description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00073370(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = 0;
  FUN_000712b8();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae8c40);
  uVar6 = puVar1[1];
  uVar8 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + _DAT_00ae8c48);
  uVar7 = puVar2[1];
  uVar10 = puVar2[1];
  uVar9 = *puVar2;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = puVar1[1];
  *puVar5 = uVar8;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar10;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = uVar9;
  FUN_000138a4(param_1 + _DAT_00b64828,(undefined1 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x18)));
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar6);
  FUN_00073330(puVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00073434; end: 000734af; -[SCUserTwoFAVerifiedDevice init] */

void FUN_00073434(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAVerifiedDeviceWrapper.swift",0x36,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7347c);
  (*pcVar1)();
}



/* Entry: 000734b0; end: 000734ff; -[SCUserTwoFAVerifiedDevice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000734b0(long param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8c40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8c48 + 8));
  param_1 = param_1 + _DAT_00b64828;
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 00073500; end: 00073507;  */

void FUN_00073500(void)

{
  if (lRam0000000000ae8c78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0083fde8);
  return;
}



/* Entry: 00073508; end: 0007353f;  */

void FUN_00073508(undefined8 param_1)

{
  if (lRam0000000000ae8c78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083fde8);
  return;
}



/* Entry: 00073540; end: 000735b7;  */

void FUN_00073540(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_007d18b0;
  puStack_30 = &UNK_007d18b0;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 000735b8; end: 00073a63;  */

undefined *
__s21SnapchatWidgetsShared12AppGroupDataO13doesFileExist8filename11isDirectorySbSS_SbtFZ
          (undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  uint uStack_64;
  
  lVar1 = 0;
  lVar6 = param_2;
  uStack_64 = param_3;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar7 - extraout_x12_01;
  FUN_00074054();
  if (lVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    uStack_78 = param_1;
    lStack_70 = param_2;
    _objc_opt_self();
    puStack_80 = puVar3;
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar2,lVar6);
    _swift_bridgeObjectRelease(lVar6);
    puVar4 = puVar3;
    func_0x00780ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    if (puVar4 != (undefined *)0x0) {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar7,puVar4);
      _objc_release(puVar4);
      (**(code **)(lVar12 + 0x20))(lVar9,lVar7,lVar1);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_00a20e40);
      __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(lVar11);
      _swift_bridgeObjectRelease(lVar7);
      __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                (lVar8,uStack_78,lStack_70,uStack_64 & 1);
      pcVar10 = *(code **)(lVar12 + 8);
      lVar2 = lVar1;
      (*pcVar10)(lVar11,lVar1);
      puVar3 = puStack_80;
      func_0x00781c40(puStack_80);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(lVar2);
      puVar5 = puVar3;
      func_0x007833a0(puVar3);
      _objc_release(puVar3);
      _objc_release(puVar4);
      (*pcVar10)(lVar8,lVar1);
      (*pcVar10)(lVar9,lVar1);
      return puVar5;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 00073a64; end: 00073b7b;  */

undefined *
__s21SnapchatWidgetsShared12AppGroupDataO04fileF06userId13directoryName8filenameSo6NSDataCSgSS_S2StFZ
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  _objc_allocWithZone();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  func_0x00784ac0();
  _objc_release(param_1);
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    puVar2 = puVar1;
    func_0x00791560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_5);
    puVar3 = puVar2;
    func_0x0078aee0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  return puVar3;
}



/* Entry: 00073b7c; end: 00073b7f;  */

void __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
  _objc_allocWithZone();
  func_0x00785c80();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_00ac3028;
    _objc_allocWithZone();
    func_0x00785580();
    puVar3 = puVar2;
    func_0x00792060();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  return;
}



/* Entry: 00073b80; end: 00073e93;  */

/* WARNING: Removing unreachable block (ram,0x00073cf0) */

long __s21SnapchatWidgetsShared12AppGroupDataO25loadSnapchatterRepository6userIdSo011SCExtensionhI0CSgSS_tFZ
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
  _objc_allocWithZone();
  _objc_retain(&PTR____CFConstantStringClassReference_00a29b20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x00784ae0();
  _objc_release(param_1);
  _objc_release(&PTR____CFConstantStringClassReference_00a29b20);
  if (puVar2 == (undefined *)0x0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x80000000008b7320);
    goto LAB_00073d74;
  }
  puVar3 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_00ac3028;
  _objc_allocWithZone();
  func_0x00785580();
  puVar4 = puVar3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90);
    _swift_unknownObjectRelease(puVar4);
  }
  puVar4 = PTR___sypN_0099b8d8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_00027748(&uStack_70);
LAB_00073d3c:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x80000000008b7370);
  }
  else {
    plVar5 = &lStack_a0;
    _swift_dynamicCast(plVar5,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___s10Foundation4DataVN_0099c3c0
                       ,6);
    lVar1 = lStack_a0;
    if (((ulong)plVar5 & 1) == 0) goto LAB_00073d3c;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8);
    func_0x00023304(lVar1,uStack_98);
    lVar6 = lVar1;
    FUN_00026a54(lVar1,uStack_98);
    FUN_00023358(lVar1,uStack_98);
    if (lVar6 == 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x80000000008b73b0);
      _objc_release();
      FUN_00023358(lVar1,uStack_98);
      _objc_release(puVar2);
      goto LAB_00073d74;
    }
    func_0x0078ff20(lVar6);
    lVar7 = lVar6;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 == 0) {
      FUN_00027748(&uStack_70);
    }
    else {
      uVar8 = 0;
      FUN_0007427c(0);
      plVar5 = &lStack_a0;
      _swift_dynamicCast(plVar5,&uStack_70,puVar4 + 8,uVar8,6);
      if (((ulong)plVar5 & 1) != 0) {
        _objc_release(puVar2);
        FUN_00023358(lVar1,uStack_98);
        _objc_release(puVar3);
        _objc_release(lVar6);
        return lStack_a0;
      }
    }
    puVar4 = (undefined *)0xd000000000000040;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000040,0x80000000008b73f0);
    _objc_release(puVar2);
    FUN_00023358(lVar1,uStack_98);
    puVar2 = puVar4;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
LAB_00073d74:
  _objc_release();
  return 0;
}



/* Entry: 00073e94; end: 00073ecf;  */

uint FUN_00073e94(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_00a21400);
  FUN_00073ed0();
  _swift_bridgeObjectRelease(param_2);
  return uVar1 & 1;
}



/* Entry: 00073ed0; end: 00074053;  */

undefined * FUN_00073ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = 0;
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_opt_self();
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b7440);
  puVar3 = puVar1;
  func_0x00789e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,puVar3);
    _swift_unknownObjectRelease(puVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_00027748(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    if ((uVar4 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
      _objc_allocWithZone();
      uVar2 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x007869e0();
      _objc_release(uVar2);
      if (puVar1 != (undefined *)0x0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        puVar3 = puVar1;
        func_0x0077fba0(puVar1);
        _objc_release(puVar1);
        _objc_release(param_1);
        return puVar3;
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 00074054; end: 000741b3;  */

undefined1  [16] FUN_00074054(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  iVar1 = (int)&uStack_80;
  puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_opt_self();
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR___sypN_0099b8d8;
  if (puVar3 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    puVar4 = puVar3;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar3,PTR___sSSN_0099b040,PTR___sypN_0099b8d8 + 8,PTR___sSSSHsWP_0099b050);
    _objc_release(puVar3);
    if (*(long *)(puVar4 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar4);
      uVar6 = 0;
      lVar5 = -0x2fffffffffffffef;
      FUN_000202c0(0xd000000000000011);
      if ((uVar6 & 1) != 0) {
        FUN_000232c8(*(long *)(puVar4 + 0x38) + lVar5 * 0x20,&uStack_70);
        _swift_bridgeObjectRelease_n(puVar4,2);
        if (lStack_58 != 0) {
          FUN_000252c8(&uStack_70,auStack_50);
          FUN_000252c8(auStack_50,&uStack_70);
          _swift_dynamicCast(&uStack_80,&uStack_70,puVar2 + 8,PTR___sSSN_0099b040,6);
          if (iVar1 == 0) {
            uStack_80 = 0;
            uStack_78 = 0;
          }
          goto LAB_000741a0;
        }
        goto LAB_00074190;
      }
      _swift_bridgeObjectRelease(puVar4);
    }
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
LAB_00074190:
  FUN_00027748(&uStack_70);
  uStack_80 = 0;
  uStack_78 = 0;
LAB_000741a0:
  auVar7._8_8_ = uStack_78;
  auVar7._0_8_ = uStack_80;
  return auVar7;
}



/* Entry: 000741b4; end: 0007427b;  */

void FUN_000741b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
  _objc_allocWithZone();
  func_0x00785c80();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_00ac3028;
    _objc_allocWithZone();
    func_0x00785580();
    puVar3 = puVar2;
    func_0x00792060();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  return;
}



/* Entry: 0007427c; end: 000742bf;  */

void FUN_0007427c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_00ac28f0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae8c88 = puVar1;
  return;
}



/* Entry: 000742c0; end: 000742cf;  */

undefined1  [16] FUN_000742c0(void)

{
  return ZEXT816(0x9a24a0);
}



/* Entry: 000742d0; end: 00074a8f;  */

void __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng4ChatD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7,byte param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  uVar6 = param_3;
  FUN_000755b0();
  puVar5 = puVar4;
  func_0x0007c5d4();
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  _swift_bridgeObjectRetain(uVar2);
  __ss11_StringGutsV4growyySiF(0x1e);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(0xd000000000000014,0x80000000008b7460);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x26,0xe100000000000000);
  __sSS6appendyySSF(0x72656665725f6373,0xeb00000000726572);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  if (param_7 != 0) {
    __sSS6appendyySSF(param_6,param_7);
    __sSS6appendyySSF(0x3d657061687326,0xe700000000000000);
    _swift_bridgeObjectRelease(0xe700000000000000);
  }
  if (param_8 != 2) {
    bVar3 = (param_8 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar3) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar3) {
      uVar2 = 0xe500000000000000;
    }
    __sSS6appendyySSF(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(0x49646567676f6c26,0xea00000000003d6e);
    _swift_bridgeObjectRelease(0xea00000000003d6e);
  }
  __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,puVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar6);
  return;
}



/* Entry: 00074a90; end: 00074c7b;  */

void __s21SnapchatWidgetsShared16DeeplinkBuildersO23buildNoBirthdayDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = param_2;
  FUN_000755b0();
  puVar6 = puVar5;
  func_0x0007c5e0();
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  bVar4 = ((ulong)param_2 & 1) == 0;
  puVar7 = (undefined *)0x534559;
  if (bVar4) {
    puVar7 = &UNK_00004f4e;
  }
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  uVar1 = 0xe300000000000000;
  if (bVar4) {
    uVar1 = 0xe200000000000000;
  }
  _swift_bridgeObjectRetain(uVar3);
  __ss11_StringGutsV4growyySiF(0x37);
  __sSS6appendyySSF(puVar5,param_3);
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0xd000000000000024,0x80000000008b74e0);
  __sSS6appendyySSF(0x72656665725f6373,0xeb00000000726572);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x26,0xe100000000000000);
  __sSS6appendyySSF(0x6570616873,0xe500000000000000);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  uStack_61 = 2;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_61,&uStack_60,&UNK_009a2aa8,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  __sSS6appendyySSF(0x26,0xe100000000000000);
  __sSS6appendyySSF(0x6e49646567676f6c,0xe800000000000000);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(puVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = uStack_58;
  __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,uStack_60,uStack_58);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00074c7c; end: 00074e57;  */

void __s21SnapchatWidgetsShared16DeeplinkBuildersO19buildCameraDeepLink10isLoggedIn11widgetShape10Foundation3URLVSgSb_SStFZ
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar5 = param_2;
  uVar7 = param_3;
  FUN_000755b0();
  puVar6 = puVar5;
  func_0x0007c5c8();
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  bVar4 = ((ulong)param_2 & 1) == 0;
  puVar8 = (undefined *)0x534559;
  if (bVar4) {
    puVar8 = &UNK_00004f4e;
  }
  uVar1 = 0xe300000000000000;
  if (bVar4) {
    uVar1 = 0xe200000000000000;
  }
  _swift_bridgeObjectRetain(uVar3);
  __ss11_StringGutsV4growyySiF(0x37);
  __sSS6appendyySSF(puVar5,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0xd000000000000024,0x80000000008b74e0);
  __sSS6appendyySSF(0x72656665725f6373,0xeb00000000726572);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x26,0xe100000000000000);
  __sSS6appendyySSF(0x6570616873,0xe500000000000000);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0x26,0xe100000000000000);
  __sSS6appendyySSF(0x6e49646567676f6c,0xe800000000000000);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(puVar8,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(0xe000000000000000);
  return;
}



/* Entry: 00074e58; end: 00074f7b;  */

void __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  FUN_000755b0();
  if ((param_2 & 1) == 0) {
    __ss11_StringGutsV4growyySiF(0x27);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar1 = "://profile/logout?";
    uVar3 = 0xd000000000000012;
  }
  else {
    __ss11_StringGutsV4growyySiF(0x32);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar1 = "://profile/loginWithSnapcode?";
    uVar3 = 0xd00000000000001d;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x72656665725f6373,0xeb00000000726572);
  __sSS6appendyySSF(0xd000000000000011,0x80000000008b7530);
  __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_3);
  return;
}



/* Entry: 00074f7c; end: 00075427;  */

void __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
               (undefined8 param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = param_2;
  lVar5 = param_3;
  FUN_000755b0();
  puVar4 = puVar3;
  func_0x0007c5ec();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar6 = 0xee0079726f74732d;
  if ((param_4 & 1) == 0) {
    uVar6 = 0xe800000000000000;
  }
  _swift_bridgeObjectRetain(uVar2);
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(0x726f6d656d2f2f3a,0xec0000003f736569);
  __sSS6appendyySSF(0x72656665725f6373,0xeb00000000726572);
  __sSS6appendyySSF(0x3d,0xe100000000000000);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  if (param_3 == 0) {
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    uVar1 = 0x6465727574616566;
    if ((param_4 & 1) == 0) {
      uVar1 = 0x6261742d70616e73;
    }
    __ss11_StringGutsV4growyySiF(0x19);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_2,param_3);
    __sSS6appendyySSF(0x61636f4c62617426,0xed00003d6e6f6974);
    __sSS6appendyySSF(uVar1,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    __sSS6appendyySSF(0x3d644970616e7326,0xe800000000000000);
    _swift_bridgeObjectRelease(0xe800000000000000);
  }
  __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,puVar3,lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar5);
  return;
}



/* Entry: 00075428; end: 000755af;  */

void __s21SnapchatWidgetsShared16DeeplinkBuildersO29buildNoFriendLocationDeepLink3for10Foundation3URLVSgSSSg_tFZ
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    puVar3 = param_2;
    lVar5 = param_3;
    FUN_000755b0();
    puVar4 = puVar3;
    func_0x0007c5f8();
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    _swift_bridgeObjectRetain(uVar2);
    __ss11_StringGutsV4growyySiF(0x10);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar6 = 0xe300000000000000;
    __sSS6appendyySSF(0x2f2f3a,0xe300000000000000);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_00a29a20);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    __sSS6appendyySSF(0x2f,0xe100000000000000);
    __sSS6appendyySSF(param_2,param_3);
    __sSS6appendyySSF(0x3f,0xe100000000000000);
    __sSS6appendyySSF(0x72656665725f6373,0xeb00000000726572);
    __sSS6appendyySSF(0x3d,0xe100000000000000);
    __sSS6appendyySSF(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,puVar3,lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar5);
    return;
  }
  lVar5 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000755ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,1,1,lVar5);
  return;
}



/* Entry: 000755b0; end: 00075713;  */

undefined1  [16] FUN_000755b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = 0;
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_opt_self();
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR___sypN_0099b8d8;
  if (puVar2 == (undefined *)0x0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_000756cc:
    FUN_00027748(&uStack_50);
  }
  else {
    puVar3 = puVar2;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar2,PTR___sSSN_0099b040,PTR___sypN_0099b8d8 + 8,PTR___sSSSHsWP_0099b050);
    _objc_release(puVar2);
    if (*(long *)(puVar3 + 0x10) == 0) {
LAB_000756bc:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      _swift_bridgeObjectRelease(puVar3);
      goto LAB_000756cc;
    }
    _swift_bridgeObjectRetain(puVar3);
    uVar6 = 0;
    lVar4 = -0x2ffffffffffffff0;
    FUN_000202c0(0xd000000000000010);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar3);
      goto LAB_000756bc;
    }
    FUN_000232c8(*(long *)(puVar3 + 0x38) + lVar4 * 0x20,&uStack_50);
    _swift_bridgeObjectRelease_n(puVar3,2);
    if (lStack_38 == 0) goto LAB_000756cc;
    _swift_dynamicCast(&uStack_60,&uStack_50,puVar1 + 8,PTR___sSSN_0099b040,6);
    if ((uVar5 & 1) != 0) goto LAB_000756e8;
  }
  uStack_60 = 0x7461686370616e73;
  uStack_58 = 0xe800000000000000;
LAB_000756e8:
  auVar7._8_8_ = uStack_58;
  auVar7._0_8_ = uStack_60;
  return auVar7;
}



/* Entry: 00075714; end: 00075727;  */

undefined1  [16] FUN_00075714(void)

{
  return ZEXT816(0x9a24c0);
}



/* Entry: 00075728; end: 00075843;  */

void FUN_00075728(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x80000000008b75b0);
  _objc_release();
  uVar1 = 0xd000000000000056;
  lVar4 = -0x7fffffffff748a30;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000056);
  _objc_release();
  FUN_000741b4();
  if (lVar4 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000046,0x80000000008b7630);
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000050,0x80000000008b7680);
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___SCExtensionCrashManager_00ac2f10;
    _objc_opt_self(PTR__OBJC_CLASS___SCExtensionCrashManager_00ac2f10);
    puVar3 = puVar2;
    func_0x007915a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00791bc0();
    _objc_release(puVar3);
    func_0x007915a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    func_0x007910c0(puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 00075844; end: 0007587b;  */

void __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ(void)

{
  if (lRam0000000000ae8c90 == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_once_0099bb18)(0xae8c90,0x75724);
  return;
}



/* Entry: 0007587c; end: 000764a7;  */

void FUN_0007587c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 000764a8; end: 000765ab;  */

uint FUN_000764a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar2 = 0;
  __s7SwiftUI16RedactionReasonsVMa();
  puVar1 = PTR___s7SwiftUI16RedactionReasonsVMa_00999300;
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (**(code **)(param_2 + 0x30))((long)puVar6 - extraout_x12,param_1,param_2);
  __s7SwiftUI16RedactionReasonsV7privacyACvgZ(puVar6);
  uVar3 = 0xae8d78;
  FUN_000771ec(0xae8d78,puVar1,PTR___s7SwiftUI16RedactionReasonsVs10SetAlgebraAAMc_00999308);
  puVar4 = puVar6;
  __ss10SetAlgebraP10isSuperset2ofSbx_tFTj(puVar6,lVar2,uVar3);
  pcVar5 = *(code **)(lVar7 + 8);
  (*pcVar5)(puVar6,lVar2);
  (*pcVar5)((long)puVar6 - extraout_x12,lVar2);
  return (uint)puVar4 & 1;
}



/* Entry: 000765ac; end: 00076e03;  */

void __s21SnapchatWidgetsShared19SCTimelineEntryViewPAAE4bodyQrvg
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  undefined8 unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined1 auVar20 [16];
  long *aplStack_180 [2];
  long lStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  lVar4 = 0;
  puStack_160 = param_1;
  __s7SwiftUI16RoundedRectangleVMa();
  lStack_170 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)aplStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar15 = *(long *)(param_2 + -8);
  aplStack_180[1] = puVar9;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_168 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar18 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar18 - extraout_x12_01;
  lVar5 = 0;
  __s9WidgetKit0A6FamilyOMa();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  lStack_158 = param_2;
  (**(code **)(param_3 + 0x28))(lVar14,param_2,param_3);
  lVar6 = lVar14;
  (**(code **)(lVar16 + 0x58))(lVar14,lVar5);
  lVar4 = lStack_158;
  iVar3 = (int)lVar6;
  if ((PTR___s9WidgetKit0A6FamilyO17accessoryCircularyA2CmFWC_00999960 == (undefined *)0x0) ||
     (iVar3 != *(int *)PTR___s9WidgetKit0A6FamilyO17accessoryCircularyA2CmFWC_00999960)) {
    if ((PTR___s9WidgetKit0A6FamilyO20accessoryRectangularyA2CmFWC_00999968 == (undefined *)0x0) ||
       (iVar3 != *(int *)PTR___s9WidgetKit0A6FamilyO20accessoryRectangularyA2CmFWC_00999968)) {
      if ((PTR___s9WidgetKit0A6FamilyO15accessoryInlineyA2CmFWC_00999958 == (undefined *)0x0) ||
         (iVar3 != *(int *)PTR___s9WidgetKit0A6FamilyO15accessoryInlineyA2CmFWC_00999958)) {
        (**(code **)(lVar16 + 8))(lVar14,lVar5);
        pcVar19 = *(code **)(lVar15 + 0x10);
        lVar4 = lStack_158;
        goto LAB_00076c34;
      }
      pcVar19 = *(code **)(lVar15 + 0x10);
      (*pcVar19)(lVar18,unaff_x20,lStack_158);
      uVar10 = 0xae8d40;
      func_0x000115a8(0xae8d40,&UNK_007d19c8);
      puVar9 = &uStack_100;
      _swift_dynamicCast(puVar9,lVar18,lVar4,uVar10,6);
      if (((ulong)puVar9 & 1) == 0) {
        uVar10 = 0xae8d48;
        puVar11 = &UNK_007d19d0;
        goto LAB_00076c2c;
      }
      FUN_000770c8(&uStack_100,&lStack_d0);
      plVar7 = plStack_b0;
      puVar9 = puStack_b8;
      plVar8 = &lStack_d0;
      FUN_0001393c(plVar8,puStack_b8);
      FUN_00076e54(&lStack_128,puVar9,plVar7,&UNK_00840018,&UNK_00840030,&UNK_00840028,plVar8);
      FUN_0001393c(&lStack_128,lStack_110);
      lStack_e8 = lStack_110;
      puStack_e0 = *(undefined **)(lStack_108 + 8);
      func_0x00016cc8(&uStack_100);
      (**(code **)(*(long *)(lStack_110 + -8) + 0x10))();
    }
    else {
      pcVar19 = *(code **)(lVar15 + 0x10);
      (*pcVar19)(lVar12,unaff_x20,lStack_158);
      uVar10 = 0xae8d28;
      func_0x000115a8(0xae8d28,&UNK_007d19b0);
      puVar9 = &uStack_100;
      _swift_dynamicCast(puVar9,lVar12,lVar4,uVar10,6);
      if (((ulong)puVar9 & 1) == 0) {
        uVar10 = 0xae8d30;
        puVar11 = &UNK_007d19b8;
        goto LAB_00076c2c;
      }
      FUN_000770c8(&uStack_100,&lStack_d0);
      plVar7 = plStack_b0;
      puVar9 = puStack_b8;
      plVar8 = &lStack_d0;
      FUN_0001393c(plVar8,puStack_b8);
      FUN_00076e54(&lStack_128,puVar9,plVar7,&UNK_0084006c,&UNK_00840084,&UNK_0084007c,plVar8);
      plVar7 = &lStack_128;
      FUN_0001393c(plVar7,lStack_110);
      lVar6 = lStack_170;
      iVar3 = *(int *)(lStack_170 + 0x14);
      uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
      lVar4 = 0;
      aplStack_180[0] = plVar7;
      __s7SwiftUI18RoundedCornerStyleOMa();
      plVar7 = aplStack_180[1];
      (**(code **)(*(long *)(lVar4 + -8) + 0x68))((long)aplStack_180[1] + (long)iVar3,uVar1,lVar4);
      auVar20 = NEON_fmov(0x4020000000000000,8);
      plVar7[1] = auVar20._8_8_;
      *plVar7 = auVar20._0_8_;
      uVar10 = 0xae7928;
      FUN_00016c74(0xae7928,&UNK_007d19c0);
      lVar4 = 0;
      __s7SwiftUI15ModifiedContentVMa(0,lStack_110,uVar10);
      uVar17 = *(undefined8 *)(lStack_108 + 8);
      uVar10 = 0xae7920;
      lStack_e8 = lVar4;
      func_0x0007715c(0xae7920,0xae7928,&UNK_007d19c0);
      puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
      uStack_138 = uVar17;
      uStack_130 = uVar10;
      _swift_getWitnessTable
                (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,
                 lVar4,&uStack_138);
      puVar9 = &uStack_100;
      puStack_e0 = puVar11;
      func_0x00016cc8(puVar9);
      uVar10 = 0xae8d38;
      FUN_000771ec(0xae8d38,PTR___s7SwiftUI16RoundedRectangleVMa_00999318,
                   PTR___s7SwiftUI16RoundedRectangleVAA5ShapeAAMc_00999310);
      lVar4 = lStack_158;
      __s7SwiftUI4ViewPAAE9clipShape_5styleQrqd___AA9FillStyleVtAA0E0Rd__lF
                (puVar9,plVar7,0x100,lStack_110,lVar6,uVar17,uVar10);
      func_0x000770e0(plVar7);
    }
  }
  else {
    pcVar19 = *(code **)(lVar15 + 0x10);
    (*pcVar19)(lVar13,unaff_x20,lStack_158);
    uVar10 = 0xae8d50;
    func_0x000115a8(0xae8d50,&UNK_007d19d8);
    puVar9 = &uStack_100;
    _swift_dynamicCast(puVar9,lVar13,lVar4,uVar10,6);
    if (((ulong)puVar9 & 1) == 0) {
      uVar10 = 0xae8d58;
      puVar11 = &UNK_007d19e0;
LAB_00076c2c:
      puStack_e0 = (undefined *)0x0;
      lStack_e8 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      func_0x0007711c(&uStack_100,uVar10,puVar11);
      goto LAB_00076c34;
    }
    FUN_000770c8(&uStack_100,&lStack_d0);
    plVar7 = plStack_b0;
    puVar9 = puStack_b8;
    plVar8 = &lStack_d0;
    FUN_0001393c(plVar8,puStack_b8);
    FUN_00076e54(&lStack_128,puVar9,plVar7,&UNK_0083ffc4,&UNK_0083ffdc,&UNK_0083ffd4,plVar8);
    FUN_0001393c(&lStack_128,lStack_110);
    uVar10 = 0xae8d60;
    FUN_00016c74(0xae8d60,&UNK_007d19e8);
    lVar6 = 0;
    __s7SwiftUI15ModifiedContentVMa(0,lStack_110,uVar10);
    uVar17 = *(undefined8 *)(lStack_108 + 8);
    uVar10 = 0xae8d68;
    lStack_e8 = lVar6;
    func_0x0007715c(0xae8d68,0xae8d60,&UNK_007d19e8);
    puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_148 = uVar17;
    uStack_140 = uVar10;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,lVar6
               ,&uStack_148);
    puVar9 = &uStack_100;
    puStack_e0 = puVar11;
    func_0x00016cc8(puVar9);
    FUN_000771a0();
    __s7SwiftUI4ViewPAAE9clipShape_5styleQrqd___AA9FillStyleVtAA0E0Rd__lF(puVar9);
  }
  FUN_00077034(&uStack_100,&uStack_a0);
  FUN_00011670(&lStack_128);
  FUN_00011670(&lStack_d0);
LAB_00076c34:
  lVar6 = lStack_168;
  (*pcVar19)(lStack_168,unaff_x20,lVar4);
  uVar10 = 0xae8d18;
  func_0x000115a8(0xae8d18,&UNK_007d19a0);
  plVar7 = &lStack_d0;
  _swift_dynamicCast(plVar7,lVar6,lVar4,uVar10,6);
  if (((ulong)plVar7 & 1) != 0) {
    FUN_00011670(&lStack_d0);
    if (lStack_88 == 0) {
      plStack_b0 = (long *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      puStack_c8 = (undefined *)0x0;
      lStack_d0 = 0;
    }
    else {
      func_0x00077084(&uStack_a0,&uStack_100);
      puVar2 = puStack_e0;
      lVar4 = lStack_e8;
      FUN_0001393c(&uStack_100,lStack_e8);
      puVar11 = PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_009995c0;
      lStack_d0 = lVar4;
      puStack_c8 = puVar2;
      puVar9 = (undefined8 *)0x0;
      _swift_getOpaqueTypeMetadata
                (0,&lStack_d0,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_009995c0,0);
      lStack_128 = lVar4;
      puStack_120 = puVar2;
      plVar7 = &lStack_128;
      puStack_b8 = puVar9;
      _swift_getOpaqueTypeConformance(plVar7,puVar11,1);
      plVar8 = &lStack_d0;
      plStack_b0 = plVar7;
      func_0x00016cc8(plVar8);
      __s7SwiftUI4ViewPAAE10unredactedQryF(plVar8,lVar4,puVar2);
      FUN_00011670(&uStack_100);
    }
    FUN_00077034(&lStack_d0,&uStack_a0);
  }
  FUN_00076e04(&uStack_a0,&uStack_100);
  if (lStack_e8 == 0) {
    puVar9 = &uStack_100;
    func_0x0007711c(puVar9,0xae8d20,&UNK_007d19a8);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
  }
  else {
    FUN_000770c8(&uStack_100,&lStack_d0);
    plVar7 = plStack_b0;
    puVar9 = puStack_b8;
    plVar8 = &lStack_d0;
    FUN_0001393c(plVar8,puStack_b8);
    __s7SwiftUI4ViewP21SnapchatWidgetsSharedE010eraseToAnyC0AA0iC0VyF(puVar9,plVar7,plVar8);
    FUN_00011670(&lStack_d0);
  }
  *puStack_160 = puVar9;
  func_0x0007711c(&uStack_a0,0xae8d20,&UNK_007d19a8);
  return;
}



/* Entry: 00076e04; end: 00076e53;  */

undefined8 FUN_00076e04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae8d20;
  func_0x000115a8(0xae8d20,&UNK_007d19a8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00076e54; end: 00077033;  */

void FUN_00076e54(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  uVar1 = 0xff;
  lStack_68 = param_1;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,param_4,param_5);
  lVar2 = param_3;
  _swift_getAssociatedConformanceWitness(param_3,param_2,uVar1,param_4,param_6);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar2,uVar1,&UNK_00840198,&UNK_008401a8);
  lVar4 = 0;
  func_0x0007649c(0,uVar3);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar8 = *(long *)(param_3 + 8);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,lVar8,param_2,&UNK_0083ff2c,&UNK_0083ff44);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  _swift_checkMetadataState(0,uVar1);
  (**(code **)(lVar8 + 0x20))((long)puVar7 - extraout_x8_00,param_2,lVar8);
  lVar4 = lVar8;
  _swift_getAssociatedConformanceWitness(lVar8,param_2,lVar5,&UNK_0083ff2c,&UNK_0083ff3c);
  (**(code **)(lVar4 + 0x18))(puVar7,lVar5,lVar4);
  (**(code **)(lVar9 + 8))((long)puVar7 - extraout_x8_00,lVar5);
  FUN_000764a8(param_2,lVar8);
  pcVar6 = *(code **)(lVar2 + 0x28);
  *(undefined8 *)(lStack_68 + 0x18) = uVar3;
  *(long *)(lStack_68 + 0x20) = lVar2;
  lVar4 = lStack_68;
  func_0x00016cc8();
  (*pcVar6)(lVar4,puVar7,(uint)param_2 & 1,uVar3,lVar2);
  return;
}



/* Entry: 00077034; end: 000770c7;  */

undefined8 FUN_00077034(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae8d20;
  func_0x000115a8(0xae8d20,&UNK_007d19a8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 000770c8; end: 000770df;  */

undefined8 * FUN_000770c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000770e0; end: 0007719f;  */

undefined8 FUN_000770e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000771a0; end: 000771df;  */

void FUN_000771a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI6CircleVAA5ShapeAAMc_009996d8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI6CircleVAA5ShapeAAMc_009996d8,PTR___s7SwiftUI6CircleVN_009996e8);
  puRam0000000000ae8d70 = puVar1;
  return;
}



/* Entry: 000771e0; end: 000771eb;  */

undefined * FUN_000771e0(void)

{
  return PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730;
}



/* Entry: 000771ec; end: 00077267;  */

void FUN_000771ec(long *param_1,code *param_2,long param_3)

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



/* Entry: 00077268; end: 000773e7;  */

void __s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvg
               (undefined8 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,param_3,param_2,&UNK_00840198,&UNK_008401a8);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  func_0x0007649c(0,lVar2);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)(puVar5 + -extraout_x8_00);
  (**(code **)(param_3 + 0x18))(puVar8,param_2,param_3);
  puVar4 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar3);
  iVar1 = (int)puVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      (**(code **)(lVar9 + 0x20))(puVar5,puVar8,lVar2);
      puVar7 = puVar5;
      (**(code **)(param_3 + 0x38))(puVar5,param_2,param_3);
      (**(code **)(lVar9 + 8))(puVar5,lVar2);
      param_2 = puVar7;
    }
    else {
      puVar7 = (undefined1 *)*puVar8;
      puVar5 = puVar7;
      (**(code **)(param_3 + 0x48))(puVar7,param_2,param_3);
      _swift_errorRelease(puVar7);
      param_2 = puVar5;
    }
  }
  else {
    if (iVar1 == 2) {
      pcVar6 = *(code **)(param_3 + 0x40);
    }
    else {
      pcVar6 = *(code **)(param_3 + 0x30);
    }
    (*pcVar6)(param_2,param_3);
  }
  *param_1 = param_2;
  return;
}



/* Entry: 000773e8; end: 000773f3;  */

undefined * FUN_000773e8(void)

{
  return PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730;
}



/* Entry: 000773f4; end: 00077473;  */

double __s21SnapchatWidgetsShared16AspectFillOffsetO08verticalF09imageSize5frame15topCropFraction12CoreGraphics7CGFloatVSo6CGSizeV_AlJSgtFZ
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 char param_6)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (((0.0 < param_1) && (0.0 < param_2)) && (0.0 < param_3)) {
    param_2 = param_2 * (param_3 / param_1);
    param_4 = param_2 - param_4;
    dVar1 = 0.0;
    if (0.0 < param_4) {
      dVar1 = param_4;
    }
    if (param_6 != '\x01') {
      if (param_5 <= 0.0) {
        param_5 = 0.0;
      }
      param_2 = param_2 * param_5;
      if (param_2 <= dVar1) {
        dVar1 = param_2;
      }
      return dVar1;
    }
    dVar1 = dVar1 * 0.5;
  }
  return dVar1;
}



/* Entry: 00077474; end: 00077683;  */

void FUN_00077474(undefined8 *param_1,undefined *param_2,undefined **param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if ((ulong)param_3 >> 0x3e == 0) {
    puVar4 = *(undefined1 **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
LAB_000774ac:
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        if (((ulong)param_3 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)param_3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x77670);
            (*pcVar1)();
          }
          puVar7 = *(undefined **)((long)param_3 + 0x20);
          _objc_retain();
        }
        else {
          puVar7 = (undefined *)0x0;
          FUN_00078ad0(0,param_3);
        }
        puStack_60 = puVar7;
        func_0x00078d04();
        param_3 = &puStack_60;
        puVar2 = &UNK_009a2648;
      }
      else {
        puVar2 = PTR___s7SwiftUI9EmptyViewVN_009997a8;
        puVar7 = PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_009997a0;
        if (puVar4 != (undefined1 *)0x0) {
          if (((ulong)param_3 & 0xc000000000000001) == 0) {
            uVar5 = *(ulong *)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x77678);
              (*pcVar1)();
            }
            if (uVar5 == 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x77680);
              (*pcVar1)();
            }
            if (uVar5 < 3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x77684);
              (*pcVar1)();
            }
            puVar2 = *(undefined **)((long)param_3 + 0x20);
            puVar3 = *(undefined **)((long)param_3 + 0x28);
            puVar7 = *(undefined **)((long)param_3 + 0x30);
            _objc_retain();
            _objc_retain();
            _objc_retain();
          }
          else {
            puVar2 = (undefined *)0x0;
            FUN_00078ad0(0,param_3);
            puVar3 = (undefined *)((long)&MACH_HEADER.magic + 1);
            FUN_00078ad0(1,param_3);
            puVar7 = (undefined *)((long)&MACH_HEADER.magic + 2);
            FUN_00078ad0(2,param_3);
          }
          puStack_60 = puVar2;
          puStack_58 = puVar3;
          puStack_50 = puVar7;
          puStack_48 = param_2;
          FUN_00078c84();
          param_3 = &puStack_60;
          puVar2 = &UNK_009a2750;
        }
      }
      goto LAB_000775e4;
    }
  }
  else {
    puVar4 = (undefined1 *)((ulong)param_3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_3) {
      puVar4 = (undefined1 *)param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) goto LAB_000774ac;
  }
  if (((ulong)param_3 & 0xc000000000000001) == 0) {
    lVar6 = *(long *)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x77674);
      (*pcVar1)();
    }
    if (lVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7767c);
      (*pcVar1)();
    }
    puVar2 = *(undefined **)((long)param_3 + 0x20);
    puVar7 = *(undefined **)((long)param_3 + 0x28);
    _objc_retain();
    _objc_retain();
  }
  else {
    puVar2 = (undefined *)0x0;
    FUN_00078ad0(0,param_3);
    puVar7 = (undefined *)((long)&MACH_HEADER.magic + 1);
    FUN_00078ad0(1,param_3);
  }
  puStack_60 = puVar2;
  puStack_58 = puVar7;
  puStack_50 = param_2;
  func_0x00078cc4();
  param_3 = &puStack_60;
  puVar2 = &UNK_009a26c8;
LAB_000775e4:
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(param_3,puVar2,puVar7);
  *param_1 = param_3;
  return;
}



/* Entry: 00077684; end: 0007768f;  */

void FUN_00077684(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar4 = (undefined **)*unaff_x20;
  puVar9 = (undefined *)unaff_x20[1];
  if ((ulong)ppuVar4 >> 0x3e == 0) {
    puVar5 = *(undefined1 **)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10);
    if (puVar5 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
LAB_000774ac:
      if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        if (((ulong)ppuVar4 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x77670);
            (*pcVar1)();
          }
          puVar8 = *(undefined **)((long)ppuVar4 + 0x20);
          _objc_retain();
        }
        else {
          puVar8 = (undefined *)0x0;
          FUN_00078ad0(0,ppuVar4);
        }
        puStack_60 = puVar8;
        func_0x00078d04();
        ppuVar4 = &puStack_60;
        puVar2 = &UNK_009a2648;
      }
      else {
        puVar2 = PTR___s7SwiftUI9EmptyViewVN_009997a8;
        puVar8 = PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_009997a0;
        if (puVar5 != (undefined1 *)0x0) {
          if (((ulong)ppuVar4 & 0xc000000000000001) == 0) {
            uVar6 = *(ulong *)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10);
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x77678);
              (*pcVar1)();
            }
            if (uVar6 == 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x77680);
              (*pcVar1)();
            }
            if (uVar6 < 3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x77684);
              (*pcVar1)();
            }
            puVar2 = *(undefined **)((long)ppuVar4 + 0x20);
            puVar3 = *(undefined **)((long)ppuVar4 + 0x28);
            puVar8 = *(undefined **)((long)ppuVar4 + 0x30);
            _objc_retain();
            _objc_retain();
            _objc_retain();
          }
          else {
            puVar2 = (undefined *)0x0;
            FUN_00078ad0(0,ppuVar4);
            puVar3 = (undefined *)((long)&MACH_HEADER.magic + 1);
            FUN_00078ad0(1,ppuVar4);
            puVar8 = (undefined *)((long)&MACH_HEADER.magic + 2);
            FUN_00078ad0(2,ppuVar4);
          }
          puStack_60 = puVar2;
          puStack_58 = puVar3;
          puStack_50 = puVar8;
          puStack_48 = puVar9;
          FUN_00078c84();
          ppuVar4 = &puStack_60;
          puVar2 = &UNK_009a2750;
        }
      }
      goto LAB_000775e4;
    }
  }
  else {
    puVar5 = (undefined1 *)((ulong)ppuVar4 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < ppuVar4) {
      puVar5 = (undefined1 *)ppuVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (puVar5 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) goto LAB_000774ac;
  }
  if (((ulong)ppuVar4 & 0xc000000000000001) == 0) {
    lVar7 = *(long *)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x77674);
      (*pcVar1)();
    }
    if (lVar7 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7767c);
      (*pcVar1)();
    }
    puVar2 = *(undefined **)((long)ppuVar4 + 0x20);
    puVar8 = *(undefined **)((long)ppuVar4 + 0x28);
    _objc_retain();
    _objc_retain();
  }
  else {
    puVar2 = (undefined *)0x0;
    FUN_00078ad0(0,ppuVar4);
    puVar8 = (undefined *)((long)&MACH_HEADER.magic + 1);
    FUN_00078ad0(1,ppuVar4);
  }
  puStack_60 = puVar2;
  puStack_58 = puVar8;
  puStack_50 = puVar9;
  func_0x00078cc4();
  ppuVar4 = &puStack_60;
  puVar2 = &UNK_009a26c8;
LAB_000775e4:
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppuVar4,puVar2,puVar8);
  *param_1 = ppuVar4;
  return;
}



/* Entry: 00077690; end: 0007785f;  */

void FUN_00077690(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_1d0 [64];
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain(param_2);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00999670,
             lVar1);
  uVar5 = 0;
  uVar6 = 0;
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_2);
  _swift_release(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  __s7SwiftUI9UnitPointV6centerACvgZ();
  uStack_148 = 0;
  uStack_140 = 1;
  auVar7 = NEON_fmov(0x3ff8000000000000,8);
  uStack_170 = auVar7._8_8_;
  uStack_178 = auVar7._0_8_;
  uStack_180 = CONCAT62(uStack_13e,1);
  uStack_188 = 0;
  uStack_110 = 0;
  uStack_108 = 1;
  puStack_190 = puVar2;
  uStack_168 = uVar5;
  uStack_160 = uVar6;
  puStack_150 = puVar2;
  uStack_138 = uStack_178;
  uStack_130 = uStack_170;
  uStack_128 = uVar5;
  uStack_120 = uVar6;
  puStack_118 = puVar2;
  uStack_100 = uStack_178;
  uStack_f8 = uStack_170;
  uStack_f0 = uVar5;
  uStack_e8 = uVar6;
  FUN_000792a4(&puStack_150,&puStack_a0,0xae8dd0,&UNK_007d1d78);
  func_0x000792ec(&puStack_118,0xae8dd0,&UNK_007d1d78);
  uStack_d8 = uStack_188;
  puStack_e0 = puStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_b0 = uStack_160;
  uStack_a8 = 0x4000000000000000;
  uStack_98 = uStack_188;
  puStack_a0 = puStack_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_78 = uStack_168;
  uStack_80 = uStack_170;
  uStack_70 = uStack_160;
  uStack_68 = 0x4000000000000000;
  FUN_000792a4(&puStack_e0,auStack_1d0,0xae8dd8,&UNK_007d1d80);
  func_0x000792ec(&puStack_a0,0xae8dd8,&UNK_007d1d80);
  param_1[1] = uStack_d8;
  *param_1 = puStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  return;
}



/* Entry: 00077860; end: 00077873;  */

void FUN_00077860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 00077874; end: 00077f6b;  */

void FUN_00077874(undefined8 *param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  undefined1 *puVar9;
  double dVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auStack_8a0 [8];
  code *pcStack_898;
  code *pcStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined1 auStack_870 [208];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  double dStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  double dStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  double dStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  double dStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined2 uStack_5d0;
  undefined2 uStack_5c8;
  undefined6 uStack_5c6;
  undefined2 uStack_5c0;
  undefined6 uStack_5be;
  undefined2 uStack_5b8;
  undefined6 uStack_5b6;
  undefined2 uStack_5b0;
  undefined6 uStack_5ae;
  undefined2 uStack_5a8;
  undefined6 uStack_5a6;
  undefined2 uStack_5a0;
  undefined6 uStack_59e;
  undefined1 *puStack_598;
  undefined8 uStack_590;
  undefined2 uStack_588;
  undefined8 uStack_586;
  undefined8 uStack_57e;
  undefined8 uStack_576;
  undefined8 uStack_56e;
  undefined8 uStack_566;
  undefined6 uStack_55e;
  undefined2 uStack_558;
  undefined6 uStack_556;
  undefined1 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  double dStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  double dStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  double dStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  double dStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  double dStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 *puStack_300;
  undefined8 uStack_2f8;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  double dStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  double dStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined2 uStack_250;
  double dStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined6 uStack_230;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined6 uStack_220;
  undefined2 uStack_21a;
  undefined6 uStack_218;
  undefined2 uStack_212;
  undefined6 uStack_210;
  undefined2 uStack_20a;
  undefined6 uStack_208;
  undefined2 uStack_202;
  undefined6 uStack_200;
  undefined2 uStack_1fa;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  double dStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
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
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar3 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_8a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x007918a0(param_4);
  dVar13 = param_2 / param_3;
  dVar10 = (double)func_0x007918a0(param_4);
  dVar13 = dVar13 * dVar10;
  func_0x007918a0(param_5);
  dVar10 = (double)func_0x007918a0(param_5);
  dVar14 = (param_2 / param_3) * dVar10 * 0.85;
  uVar4 = param_4;
  uVar11 = param_5;
  dVar10 = (double)FUN_00077f6c();
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  uStack_880 = uVar11;
  uStack_878 = uVar4;
  _objc_retain(param_5);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uVar1 = *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00999670;
  pcStack_890 = *(code **)(lVar8 + 0x68);
  (*pcStack_890)(puVar9,uVar1,lVar3);
  puVar5 = puVar9;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar9,param_5);
  _swift_release(param_5);
  pcStack_898 = *(code **)(lVar8 + 8);
  puVar6 = puVar9;
  lVar8 = lVar3;
  (*pcStack_898)(puVar9,lVar3);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_610,dVar14,0,param_2 * 0.85,0,puVar6,lVar8);
  uStack_212 = (undefined2)uStack_5f8;
  uStack_210 = (undefined6)((ulong)uStack_5f8 >> 0x10);
  uStack_21a = (undefined2)uStack_600;
  uStack_218 = (undefined6)((ulong)uStack_600 >> 0x10);
  uStack_222 = (undefined2)uStack_608;
  uStack_220 = (undefined6)((ulong)uStack_608 >> 0x10);
  uStack_22a = (undefined2)uStack_610;
  uStack_228 = (undefined6)((ulong)uStack_610 >> 0x10);
  uStack_202 = (undefined2)uStack_5e8;
  uStack_200 = (undefined6)((ulong)uStack_5e8 >> 0x10);
  uStack_20a = (undefined2)uStack_5f0;
  uStack_208 = (undefined6)((ulong)uStack_5f0 >> 0x10);
  dVar14 = dVar14 * -0.33;
  uStack_5d8 = 0;
  uStack_5d0 = 1;
  uStack_56e = CONCAT26(uStack_212,uStack_218);
  uStack_576 = CONCAT26(uStack_21a,uStack_220);
  uStack_5b6 = uStack_218;
  uStack_5b0 = uStack_212;
  uStack_5be = uStack_220;
  uStack_5b8 = uStack_21a;
  uStack_57e = CONCAT26(uStack_222,uStack_228);
  uStack_586 = CONCAT26(uStack_22a,uStack_230);
  uStack_5c6 = uStack_228;
  uStack_5c0 = uStack_222;
  uStack_5c8 = uStack_22a;
  uStack_566 = CONCAT26(uStack_20a,uStack_210);
  uStack_5a6 = uStack_208;
  uStack_5ae = uStack_210;
  uStack_5a8 = uStack_20a;
  uStack_6c0 = uStack_608;
  uStack_6b8 = uStack_600;
  uStack_6a8 = uStack_5f0;
  uStack_6b0 = uStack_5f8;
  uStack_6c8 = uStack_610;
  uStack_6d0 = CONCAT62(uStack_230,1);
  uStack_6d8 = 0;
  uStack_6a0 = uStack_5e8;
  uStack_590 = 0;
  uStack_588 = 1;
  uStack_55e = uStack_208;
  uStack_558 = uStack_202;
  puStack_6e0 = puVar5;
  puStack_5e0 = puVar5;
  uStack_5a0 = uStack_202;
  uStack_59e = uStack_200;
  puStack_598 = puVar5;
  uStack_556 = uStack_200;
  FUN_000792a4(&puStack_5e0,&uStack_160,0xae78b8,&UNK_007ce9d0);
  func_0x000792ec(&puStack_598,0xae78b8,&UNK_007ce9d0);
  uStack_510 = uStack_6a0;
  uStack_528 = uStack_6b8;
  uStack_530 = uStack_6c0;
  uStack_518 = uStack_6a8;
  uStack_520 = uStack_6b0;
  uStack_1f8 = uStack_6a8;
  uStack_200 = (undefined6)uStack_6b0;
  uStack_1fa = (undefined2)((ulong)uStack_6b0 >> 0x30);
  uStack_208 = (undefined6)uStack_6b8;
  uStack_202 = (undefined2)((ulong)uStack_6b8 >> 0x30);
  uStack_210 = (undefined6)uStack_6c0;
  uStack_20a = (undefined2)((ulong)uStack_6c0 >> 0x30);
  uStack_548 = uStack_6d8;
  puStack_550 = puStack_6e0;
  uStack_538 = uStack_6c8;
  uStack_540 = uStack_6d0;
  uStack_228 = (undefined6)uStack_6d8;
  uStack_222 = (undefined2)((ulong)uStack_6d8 >> 0x30);
  uStack_230 = SUB86(puStack_6e0,0);
  uStack_22a = (undefined2)((ulong)puStack_6e0 >> 0x30);
  uStack_218 = (undefined6)uStack_6c8;
  uStack_212 = (undefined2)((ulong)uStack_6c8 >> 0x30);
  uStack_220 = (undefined6)uStack_6d0;
  uStack_21a = (undefined2)((ulong)uStack_6d0 >> 0x30);
  uStack_1f0 = uStack_6a0;
  uStack_500 = 0;
  uStack_1e0 = 0;
  uStack_4b0 = uStack_6a0;
  uStack_4c8 = uStack_6b8;
  uStack_4d0 = uStack_6c0;
  uStack_4b8 = uStack_6a8;
  uStack_4c0 = uStack_6b0;
  uStack_4e8 = uStack_6d8;
  puStack_4f0 = puStack_6e0;
  uStack_4d8 = uStack_6c8;
  uStack_4e0 = uStack_6d0;
  uStack_4a0 = 0;
  dStack_508 = dVar14;
  dStack_4a8 = dVar14;
  dStack_1e8 = dVar14;
  FUN_000792a4(&puStack_550,&uStack_160,0xae8db0,&UNK_007d1d58);
  func_0x000792ec(&puStack_4f0,0xae8db0,&UNK_007d1d58);
  uStack_470 = CONCAT26(uStack_20a,uStack_210);
  uStack_468 = CONCAT26(uStack_202,uStack_208);
  uStack_460 = CONCAT26(uStack_1fa,uStack_200);
  uStack_458 = uStack_1f8;
  dStack_448 = dStack_1e8;
  uStack_450 = uStack_1f0;
  uStack_488 = CONCAT26(uStack_222,uStack_228);
  uStack_490 = CONCAT26(uStack_22a,uStack_230);
  uStack_478 = CONCAT26(uStack_212,uStack_218);
  uStack_480 = CONCAT26(uStack_21a,uStack_220);
  uStack_440 = uStack_1e0;
  uStack_438 = 0x4000000000000000;
  uStack_3f8 = uStack_1f8;
  dStack_3e8 = dStack_1e8;
  uStack_3f0 = uStack_1f0;
  uStack_3e0 = uStack_1e0;
  uStack_3d8 = 0x4000000000000000;
  uVar4 = 0xae8db8;
  uStack_430 = uStack_490;
  uStack_428 = uStack_488;
  uStack_420 = uStack_480;
  uStack_418 = uStack_478;
  uStack_410 = uStack_470;
  uStack_408 = uStack_468;
  uStack_400 = uStack_460;
  FUN_000792a4(&uStack_490,&uStack_160,0xae8db8,&UNK_007d1d60);
  func_0x000792ec(&uStack_430,0xae8db8,&UNK_007d1d60);
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (*pcStack_890)(puVar9,uVar1,lVar3);
  puVar5 = puVar9;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar9,param_4);
  _swift_release(param_4);
  (*pcStack_898)(puVar9,lVar3);
  dVar14 = dVar13 * 0.15;
  uStack_778 = uStack_468;
  uStack_780 = uStack_470;
  uStack_768 = uStack_458;
  uStack_770 = uStack_460;
  dStack_758 = dStack_448;
  uStack_760 = uStack_450;
  uStack_748 = uStack_438;
  uStack_750 = uStack_440;
  uStack_3a8 = uStack_468;
  uStack_3b0 = uStack_470;
  uStack_398 = uStack_458;
  uStack_3a0 = uStack_460;
  dStack_388 = dStack_448;
  uStack_390 = uStack_450;
  uStack_378 = uStack_438;
  uStack_380 = uStack_440;
  uStack_798 = uStack_488;
  uStack_7a0 = uStack_490;
  uStack_788 = uStack_478;
  uStack_790 = uStack_480;
  uStack_3c8 = uStack_488;
  uStack_3d0 = uStack_490;
  uStack_3b8 = uStack_478;
  uStack_3c0 = uStack_480;
  uStack_738 = uStack_488;
  uStack_740 = uStack_490;
  uStack_728 = uStack_478;
  uStack_730 = uStack_480;
  dStack_6f8 = dStack_448;
  uStack_700 = uStack_450;
  uStack_6e8 = uStack_438;
  uStack_6f0 = uStack_440;
  uStack_718 = uStack_468;
  uStack_720 = uStack_470;
  uStack_708 = uStack_458;
  uStack_710 = uStack_460;
  FUN_000792a4(&uStack_3d0,&uStack_160,0xae8db8,&UNK_007d1d60);
  puVar7 = &uStack_7a0;
  func_0x000792ec(puVar7,0xae8db8,&UNK_007d1d60);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar2 = uStack_878;
  uVar11 = uStack_880;
  uStack_370 = uStack_878;
  uStack_368 = uStack_880;
  uStack_338 = uStack_718;
  uStack_340 = uStack_720;
  uStack_328 = uStack_708;
  uStack_330 = uStack_710;
  dStack_318 = dStack_6f8;
  uStack_320 = uStack_700;
  uStack_308 = uStack_6e8;
  uStack_310 = uStack_6f0;
  uStack_358 = uStack_738;
  uStack_360 = uStack_740;
  uStack_348 = uStack_728;
  uStack_350 = uStack_730;
  uStack_2f8 = 0;
  uStack_2f0 = 1;
  uStack_888 = 0x4000000000000000;
  pcStack_890 = (code *)0x0;
  uStack_2d8 = 0x4000000000000000;
  uStack_2e0 = 0;
  puStack_300 = puVar5;
  dStack_2e8 = dVar14;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_640,dVar13 + dVar10,0,0,1,puVar7,uVar4);
  uStack_678 = uStack_308;
  uStack_680 = uStack_310;
  uStack_668 = uStack_2f8;
  puStack_670 = puStack_300;
  uStack_660 = CONCAT62(uStack_2ee,uStack_2f0);
  dStack_658 = dStack_2e8;
  uStack_648 = uStack_2d8;
  uStack_650 = uStack_2e0;
  uStack_6b8 = uStack_348;
  uStack_6c0 = uStack_350;
  uStack_6a8 = uStack_338;
  uStack_6b0 = uStack_340;
  uStack_698 = uStack_328;
  uStack_6a0 = uStack_330;
  dStack_688 = dStack_318;
  uStack_690 = uStack_320;
  uStack_6d8 = uStack_368;
  puStack_6e0 = (undefined1 *)uStack_370;
  uStack_6c8 = uStack_358;
  uStack_6d0 = uStack_360;
  uStack_2d0 = uVar2;
  uStack_2c8 = uVar11;
  uStack_298 = uStack_718;
  uStack_2a0 = uStack_720;
  uStack_288 = uStack_708;
  uStack_290 = uStack_710;
  dStack_278 = dStack_6f8;
  uStack_280 = uStack_700;
  uStack_268 = uStack_6e8;
  uStack_270 = uStack_6f0;
  uStack_2b8 = uStack_738;
  uStack_2c0 = uStack_740;
  uStack_2a8 = uStack_728;
  uStack_2b0 = uStack_730;
  uStack_258 = 0;
  uStack_250 = 1;
  uStack_238 = uStack_888;
  uStack_240 = pcStack_890;
  uVar4 = uStack_730;
  puStack_260 = puVar5;
  dStack_248 = dVar14;
  FUN_000792a4(&uStack_370,&uStack_160,0xae8dc0,&UNK_007d1d68);
  func_0x000792ec(&uStack_2d0,0xae8dc0,&UNK_007d1d68);
  uVar11 = __s7SwiftUI9UnitPointV6centerACvgZ();
  uStack_188 = uStack_638;
  uStack_190 = uStack_640;
  uStack_178 = uStack_628;
  uStack_180 = uStack_630;
  uStack_168 = uStack_618;
  uStack_170 = uStack_620;
  uStack_1c8 = uStack_678;
  uStack_1d0 = uStack_680;
  uStack_1b8 = uStack_668;
  puStack_1c0 = puStack_670;
  uStack_198 = uStack_648;
  uStack_1a0 = uStack_650;
  dStack_1a8 = dStack_658;
  uStack_1b0 = uStack_660;
  uStack_208 = (undefined6)uStack_6b8;
  uStack_202 = (undefined2)((ulong)uStack_6b8 >> 0x30);
  uStack_210 = (undefined6)uStack_6c0;
  uStack_20a = (undefined2)((ulong)uStack_6c0 >> 0x30);
  uStack_1f8 = uStack_6a8;
  uStack_200 = (undefined6)uStack_6b0;
  uStack_1fa = (undefined2)((ulong)uStack_6b0 >> 0x30);
  dStack_1d8 = dStack_688;
  uStack_1e0 = uStack_690;
  dStack_1e8 = (double)uStack_698;
  uStack_1f0 = uStack_6a0;
  uStack_218 = (undefined6)uStack_6c8;
  uStack_212 = (undefined2)((ulong)uStack_6c8 >> 0x30);
  uStack_220 = (undefined6)uStack_6d0;
  uStack_21a = (undefined2)((ulong)uStack_6d0 >> 0x30);
  uStack_228 = (undefined6)uStack_6d8;
  uStack_222 = (undefined2)((ulong)uStack_6d8 >> 0x30);
  uStack_230 = SUB86(puStack_6e0,0);
  uStack_22a = (undefined2)((ulong)puStack_6e0 >> 0x30);
  param_1[0x1c] = uVar11;
  param_1[0x1d] = uVar4;
  param_1[0x15] = uStack_638;
  param_1[0x14] = uStack_640;
  param_1[0x17] = uStack_628;
  param_1[0x16] = uStack_630;
  auVar12 = NEON_fmov(0x3ff8000000000000,8);
  param_1[0x19] = uStack_618;
  param_1[0x18] = uStack_620;
  param_1[0x1b] = auVar12._8_8_;
  param_1[0x1a] = auVar12._0_8_;
  param_1[0xd] = uStack_678;
  param_1[0xc] = uStack_680;
  param_1[0xf] = uStack_668;
  param_1[0xe] = puStack_670;
  param_1[0x11] = dStack_658;
  param_1[0x10] = uStack_660;
  param_1[0x13] = uStack_648;
  param_1[0x12] = uStack_650;
  param_1[5] = uStack_6b8;
  param_1[4] = uStack_6c0;
  param_1[7] = uStack_6a8;
  param_1[6] = uStack_6b0;
  param_1[9] = uStack_698;
  param_1[8] = uStack_6a0;
  param_1[0xb] = dStack_688;
  param_1[10] = uStack_690;
  param_1[1] = uStack_6d8;
  *param_1 = puStack_6e0;
  param_1[3] = uStack_6c8;
  param_1[2] = uStack_6d0;
  uStack_b8 = uStack_638;
  uStack_c0 = uStack_640;
  uStack_a8 = uStack_628;
  uStack_b0 = uStack_630;
  uStack_98 = uStack_618;
  uStack_a0 = uStack_620;
  uStack_f8 = uStack_678;
  uStack_100 = uStack_680;
  uStack_e8 = uStack_668;
  puStack_f0 = puStack_670;
  uStack_c8 = uStack_648;
  uStack_d0 = uStack_650;
  dStack_d8 = dStack_658;
  uStack_e0 = uStack_660;
  uStack_138 = uStack_6b8;
  uStack_140 = uStack_6c0;
  uStack_128 = uStack_6a8;
  uStack_130 = uStack_6b0;
  dStack_108 = dStack_688;
  uStack_110 = uStack_690;
  uStack_118 = uStack_698;
  uStack_120 = uStack_6a0;
  uStack_148 = uStack_6c8;
  uStack_150 = uStack_6d0;
  uStack_158 = uStack_6d8;
  uStack_160 = puStack_6e0;
  FUN_000792a4(&uStack_230,auStack_870,0xae8dc8,&UNK_007d1d70);
  func_0x000792ec(&uStack_160,0xae8dc8,&UNK_007d1d70);
  return;
}



/* Entry: 00077f6c; end: 00078007;  */

double FUN_00077f6c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x007918a0();
  dVar3 = param_1 / dVar2;
  func_0x007918a0(param_3);
  dVar3 = dVar3 * dVar1;
  func_0x007918a0(param_4);
  func_0x007918a0(param_4);
  dVar1 = (param_1 / dVar2) * dVar1 * 0.85;
  dVar3 = (dVar1 + param_2 * dVar1 + ABS(dVar1 - dVar3) * 0.5) - dVar3;
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  return dVar3;
}



/* Entry: 00078008; end: 00078013;  */

void FUN_00078008(undefined8 *param_1,undefined8 param_2,double param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auStack_8a0 [8];
  code *pcStack_898;
  code *pcStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined1 auStack_870 [208];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  double dStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  double dStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  double dStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  double dStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined2 uStack_5d0;
  undefined2 uStack_5c8;
  undefined6 uStack_5c6;
  undefined2 uStack_5c0;
  undefined6 uStack_5be;
  undefined2 uStack_5b8;
  undefined6 uStack_5b6;
  undefined2 uStack_5b0;
  undefined6 uStack_5ae;
  undefined2 uStack_5a8;
  undefined6 uStack_5a6;
  undefined2 uStack_5a0;
  undefined6 uStack_59e;
  undefined1 *puStack_598;
  undefined8 uStack_590;
  undefined2 uStack_588;
  undefined8 uStack_586;
  undefined8 uStack_57e;
  undefined8 uStack_576;
  undefined8 uStack_56e;
  undefined8 uStack_566;
  undefined6 uStack_55e;
  undefined2 uStack_558;
  undefined6 uStack_556;
  undefined1 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  double dStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  double dStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  double dStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  double dStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  double dStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 *puStack_300;
  undefined8 uStack_2f8;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  double dStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  double dStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined2 uStack_250;
  double dStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined6 uStack_230;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined6 uStack_220;
  undefined2 uStack_21a;
  undefined6 uStack_218;
  undefined2 uStack_212;
  undefined6 uStack_210;
  undefined2 uStack_20a;
  undefined6 uStack_208;
  undefined2 uStack_202;
  undefined6 uStack_200;
  undefined2 uStack_1fa;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  double dStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
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
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar12 = *unaff_x20;
  uVar4 = unaff_x20[1];
  dVar13 = (double)unaff_x20[2];
  lVar2 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_8a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x007918a0(uVar12);
  dVar15 = dVar13 / param_3;
  dVar11 = (double)func_0x007918a0(uVar12);
  dVar15 = dVar15 * dVar11;
  func_0x007918a0(uVar4);
  dVar11 = (double)func_0x007918a0(uVar4);
  dVar16 = (dVar13 / param_3) * dVar11 * 0.85;
  uVar3 = uVar12;
  uVar8 = uVar4;
  dVar11 = (double)FUN_00077f6c(dVar13,0x3fd51eb851eb851f);
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  uStack_880 = uVar8;
  uStack_878 = uVar3;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uVar1 = *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00999670;
  pcStack_890 = *(code **)(lVar9 + 0x68);
  (*pcStack_890)(puVar10,uVar1,lVar2);
  puVar5 = puVar10;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar10,uVar4);
  _swift_release(uVar4);
  pcStack_898 = *(code **)(lVar9 + 8);
  puVar6 = puVar10;
  lVar9 = lVar2;
  (*pcStack_898)(puVar10,lVar2);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_610,dVar16,0,dVar13 * 0.85,0,puVar6,lVar9);
  uStack_212 = (undefined2)uStack_5f8;
  uStack_210 = (undefined6)((ulong)uStack_5f8 >> 0x10);
  uStack_21a = (undefined2)uStack_600;
  uStack_218 = (undefined6)((ulong)uStack_600 >> 0x10);
  uStack_222 = (undefined2)uStack_608;
  uStack_220 = (undefined6)((ulong)uStack_608 >> 0x10);
  uStack_22a = (undefined2)uStack_610;
  uStack_228 = (undefined6)((ulong)uStack_610 >> 0x10);
  uStack_202 = (undefined2)uStack_5e8;
  uStack_200 = (undefined6)((ulong)uStack_5e8 >> 0x10);
  uStack_20a = (undefined2)uStack_5f0;
  uStack_208 = (undefined6)((ulong)uStack_5f0 >> 0x10);
  dVar16 = dVar16 * -0.33;
  uStack_5d8 = 0;
  uStack_5d0 = 1;
  uStack_56e = CONCAT26(uStack_212,uStack_218);
  uStack_576 = CONCAT26(uStack_21a,uStack_220);
  uStack_5b6 = uStack_218;
  uStack_5b0 = uStack_212;
  uStack_5be = uStack_220;
  uStack_5b8 = uStack_21a;
  uStack_57e = CONCAT26(uStack_222,uStack_228);
  uStack_586 = CONCAT26(uStack_22a,uStack_230);
  uStack_5c6 = uStack_228;
  uStack_5c0 = uStack_222;
  uStack_5c8 = uStack_22a;
  uStack_566 = CONCAT26(uStack_20a,uStack_210);
  uStack_5a6 = uStack_208;
  uStack_5ae = uStack_210;
  uStack_5a8 = uStack_20a;
  uStack_6c0 = uStack_608;
  uStack_6b8 = uStack_600;
  uStack_6a8 = uStack_5f0;
  uStack_6b0 = uStack_5f8;
  uStack_6c8 = uStack_610;
  uStack_6d0 = CONCAT62(uStack_230,1);
  uStack_6d8 = 0;
  uStack_6a0 = uStack_5e8;
  uStack_590 = 0;
  uStack_588 = 1;
  uStack_55e = uStack_208;
  uStack_558 = uStack_202;
  puStack_6e0 = puVar5;
  puStack_5e0 = puVar5;
  uStack_5a0 = uStack_202;
  uStack_59e = uStack_200;
  puStack_598 = puVar5;
  uStack_556 = uStack_200;
  FUN_000792a4(&puStack_5e0,&uStack_160,0xae78b8,&UNK_007ce9d0);
  func_0x000792ec(&puStack_598,0xae78b8,&UNK_007ce9d0);
  uStack_510 = uStack_6a0;
  uStack_528 = uStack_6b8;
  uStack_530 = uStack_6c0;
  uStack_518 = uStack_6a8;
  uStack_520 = uStack_6b0;
  uStack_1f8 = uStack_6a8;
  uStack_200 = (undefined6)uStack_6b0;
  uStack_1fa = (undefined2)((ulong)uStack_6b0 >> 0x30);
  uStack_208 = (undefined6)uStack_6b8;
  uStack_202 = (undefined2)((ulong)uStack_6b8 >> 0x30);
  uStack_210 = (undefined6)uStack_6c0;
  uStack_20a = (undefined2)((ulong)uStack_6c0 >> 0x30);
  uStack_548 = uStack_6d8;
  puStack_550 = puStack_6e0;
  uStack_538 = uStack_6c8;
  uStack_540 = uStack_6d0;
  uStack_228 = (undefined6)uStack_6d8;
  uStack_222 = (undefined2)((ulong)uStack_6d8 >> 0x30);
  uStack_230 = SUB86(puStack_6e0,0);
  uStack_22a = (undefined2)((ulong)puStack_6e0 >> 0x30);
  uStack_218 = (undefined6)uStack_6c8;
  uStack_212 = (undefined2)((ulong)uStack_6c8 >> 0x30);
  uStack_220 = (undefined6)uStack_6d0;
  uStack_21a = (undefined2)((ulong)uStack_6d0 >> 0x30);
  uStack_1f0 = uStack_6a0;
  uStack_500 = 0;
  uStack_1e0 = 0;
  uStack_4b0 = uStack_6a0;
  uStack_4c8 = uStack_6b8;
  uStack_4d0 = uStack_6c0;
  uStack_4b8 = uStack_6a8;
  uStack_4c0 = uStack_6b0;
  uStack_4e8 = uStack_6d8;
  puStack_4f0 = puStack_6e0;
  uStack_4d8 = uStack_6c8;
  uStack_4e0 = uStack_6d0;
  uStack_4a0 = 0;
  dStack_508 = dVar16;
  dStack_4a8 = dVar16;
  dStack_1e8 = dVar16;
  FUN_000792a4(&puStack_550,&uStack_160,0xae8db0,&UNK_007d1d58);
  func_0x000792ec(&puStack_4f0,0xae8db0,&UNK_007d1d58);
  uStack_470 = CONCAT26(uStack_20a,uStack_210);
  uStack_468 = CONCAT26(uStack_202,uStack_208);
  uStack_460 = CONCAT26(uStack_1fa,uStack_200);
  uStack_458 = uStack_1f8;
  dStack_448 = dStack_1e8;
  uStack_450 = uStack_1f0;
  uStack_488 = CONCAT26(uStack_222,uStack_228);
  uStack_490 = CONCAT26(uStack_22a,uStack_230);
  uStack_478 = CONCAT26(uStack_212,uStack_218);
  uStack_480 = CONCAT26(uStack_21a,uStack_220);
  uStack_440 = uStack_1e0;
  uStack_438 = 0x4000000000000000;
  uStack_3f8 = uStack_1f8;
  dStack_3e8 = dStack_1e8;
  uStack_3f0 = uStack_1f0;
  uStack_3e0 = uStack_1e0;
  uStack_3d8 = 0x4000000000000000;
  uVar4 = 0xae8db8;
  uStack_430 = uStack_490;
  uStack_428 = uStack_488;
  uStack_420 = uStack_480;
  uStack_418 = uStack_478;
  uStack_410 = uStack_470;
  uStack_408 = uStack_468;
  uStack_400 = uStack_460;
  FUN_000792a4(&uStack_490,&uStack_160,0xae8db8,&UNK_007d1d60);
  func_0x000792ec(&uStack_430,0xae8db8,&UNK_007d1d60);
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (*pcStack_890)(puVar10,uVar1,lVar2);
  puVar5 = puVar10;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar10,uVar12);
  _swift_release(uVar12);
  (*pcStack_898)(puVar10,lVar2);
  dVar13 = dVar15 * 0.15;
  uStack_778 = uStack_468;
  uStack_780 = uStack_470;
  uStack_768 = uStack_458;
  uStack_770 = uStack_460;
  dStack_758 = dStack_448;
  uStack_760 = uStack_450;
  uStack_748 = uStack_438;
  uStack_750 = uStack_440;
  uStack_3a8 = uStack_468;
  uStack_3b0 = uStack_470;
  uStack_398 = uStack_458;
  uStack_3a0 = uStack_460;
  dStack_388 = dStack_448;
  uStack_390 = uStack_450;
  uStack_378 = uStack_438;
  uStack_380 = uStack_440;
  uStack_798 = uStack_488;
  uStack_7a0 = uStack_490;
  uStack_788 = uStack_478;
  uStack_790 = uStack_480;
  uStack_3c8 = uStack_488;
  uStack_3d0 = uStack_490;
  uStack_3b8 = uStack_478;
  uStack_3c0 = uStack_480;
  uStack_738 = uStack_488;
  uStack_740 = uStack_490;
  uStack_728 = uStack_478;
  uStack_730 = uStack_480;
  dStack_6f8 = dStack_448;
  uStack_700 = uStack_450;
  uStack_6e8 = uStack_438;
  uStack_6f0 = uStack_440;
  uStack_718 = uStack_468;
  uStack_720 = uStack_470;
  uStack_708 = uStack_458;
  uStack_710 = uStack_460;
  FUN_000792a4(&uStack_3d0,&uStack_160,0xae8db8,&UNK_007d1d60);
  puVar7 = &uStack_7a0;
  func_0x000792ec(puVar7,0xae8db8,&UNK_007d1d60);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar3 = uStack_878;
  uVar12 = uStack_880;
  uStack_370 = uStack_878;
  uStack_368 = uStack_880;
  uStack_338 = uStack_718;
  uStack_340 = uStack_720;
  uStack_328 = uStack_708;
  uStack_330 = uStack_710;
  dStack_318 = dStack_6f8;
  uStack_320 = uStack_700;
  uStack_308 = uStack_6e8;
  uStack_310 = uStack_6f0;
  uStack_358 = uStack_738;
  uStack_360 = uStack_740;
  uStack_348 = uStack_728;
  uStack_350 = uStack_730;
  uStack_2f8 = 0;
  uStack_2f0 = 1;
  uStack_888 = 0x4000000000000000;
  pcStack_890 = (code *)0x0;
  uStack_2d8 = 0x4000000000000000;
  uStack_2e0 = 0;
  puStack_300 = puVar5;
  dStack_2e8 = dVar13;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_640,dVar15 + dVar11,0,0,1,puVar7,uVar4);
  uStack_678 = uStack_308;
  uStack_680 = uStack_310;
  uStack_668 = uStack_2f8;
  puStack_670 = puStack_300;
  uStack_660 = CONCAT62(uStack_2ee,uStack_2f0);
  dStack_658 = dStack_2e8;
  uStack_648 = uStack_2d8;
  uStack_650 = uStack_2e0;
  uStack_6b8 = uStack_348;
  uStack_6c0 = uStack_350;
  uStack_6a8 = uStack_338;
  uStack_6b0 = uStack_340;
  uStack_698 = uStack_328;
  uStack_6a0 = uStack_330;
  dStack_688 = dStack_318;
  uStack_690 = uStack_320;
  uStack_6d8 = uStack_368;
  puStack_6e0 = (undefined1 *)uStack_370;
  uStack_6c8 = uStack_358;
  uStack_6d0 = uStack_360;
  uStack_2d0 = uVar3;
  uStack_2c8 = uVar12;
  uStack_298 = uStack_718;
  uStack_2a0 = uStack_720;
  uStack_288 = uStack_708;
  uStack_290 = uStack_710;
  dStack_278 = dStack_6f8;
  uStack_280 = uStack_700;
  uStack_268 = uStack_6e8;
  uStack_270 = uStack_6f0;
  uStack_2b8 = uStack_738;
  uStack_2c0 = uStack_740;
  uStack_2a8 = uStack_728;
  uStack_2b0 = uStack_730;
  uStack_258 = 0;
  uStack_250 = 1;
  uStack_238 = uStack_888;
  uStack_240 = pcStack_890;
  uVar4 = uStack_730;
  puStack_260 = puVar5;
  dStack_248 = dVar13;
  FUN_000792a4(&uStack_370,&uStack_160,0xae8dc0,&UNK_007d1d68);
  func_0x000792ec(&uStack_2d0,0xae8dc0,&UNK_007d1d68);
  uVar12 = __s7SwiftUI9UnitPointV6centerACvgZ();
  uStack_188 = uStack_638;
  uStack_190 = uStack_640;
  uStack_178 = uStack_628;
  uStack_180 = uStack_630;
  uStack_168 = uStack_618;
  uStack_170 = uStack_620;
  uStack_1c8 = uStack_678;
  uStack_1d0 = uStack_680;
  uStack_1b8 = uStack_668;
  puStack_1c0 = puStack_670;
  uStack_198 = uStack_648;
  uStack_1a0 = uStack_650;
  dStack_1a8 = dStack_658;
  uStack_1b0 = uStack_660;
  uStack_208 = (undefined6)uStack_6b8;
  uStack_202 = (undefined2)((ulong)uStack_6b8 >> 0x30);
  uStack_210 = (undefined6)uStack_6c0;
  uStack_20a = (undefined2)((ulong)uStack_6c0 >> 0x30);
  uStack_1f8 = uStack_6a8;
  uStack_200 = (undefined6)uStack_6b0;
  uStack_1fa = (undefined2)((ulong)uStack_6b0 >> 0x30);
  dStack_1d8 = dStack_688;
  uStack_1e0 = uStack_690;
  dStack_1e8 = (double)uStack_698;
  uStack_1f0 = uStack_6a0;
  uStack_218 = (undefined6)uStack_6c8;
  uStack_212 = (undefined2)((ulong)uStack_6c8 >> 0x30);
  uStack_220 = (undefined6)uStack_6d0;
  uStack_21a = (undefined2)((ulong)uStack_6d0 >> 0x30);
  uStack_228 = (undefined6)uStack_6d8;
  uStack_222 = (undefined2)((ulong)uStack_6d8 >> 0x30);
  uStack_230 = SUB86(puStack_6e0,0);
  uStack_22a = (undefined2)((ulong)puStack_6e0 >> 0x30);
  param_1[0x1c] = uVar12;
  param_1[0x1d] = uVar4;
  param_1[0x15] = uStack_638;
  param_1[0x14] = uStack_640;
  param_1[0x17] = uStack_628;
  param_1[0x16] = uStack_630;
  auVar14 = NEON_fmov(0x3ff8000000000000,8);
  param_1[0x19] = uStack_618;
  param_1[0x18] = uStack_620;
  param_1[0x1b] = auVar14._8_8_;
  param_1[0x1a] = auVar14._0_8_;
  param_1[0xd] = uStack_678;
  param_1[0xc] = uStack_680;
  param_1[0xf] = uStack_668;
  param_1[0xe] = puStack_670;
  param_1[0x11] = dStack_658;
  param_1[0x10] = uStack_660;
  param_1[0x13] = uStack_648;
  param_1[0x12] = uStack_650;
  param_1[5] = uStack_6b8;
  param_1[4] = uStack_6c0;
  param_1[7] = uStack_6a8;
  param_1[6] = uStack_6b0;
  param_1[9] = uStack_698;
  param_1[8] = uStack_6a0;
  param_1[0xb] = dStack_688;
  param_1[10] = uStack_690;
  param_1[1] = uStack_6d8;
  *param_1 = puStack_6e0;
  param_1[3] = uStack_6c8;
  param_1[2] = uStack_6d0;
  uStack_b8 = uStack_638;
  uStack_c0 = uStack_640;
  uStack_a8 = uStack_628;
  uStack_b0 = uStack_630;
  uStack_98 = uStack_618;
  uStack_a0 = uStack_620;
  uStack_f8 = uStack_678;
  uStack_100 = uStack_680;
  uStack_e8 = uStack_668;
  puStack_f0 = puStack_670;
  uStack_c8 = uStack_648;
  uStack_d0 = uStack_650;
  dStack_d8 = dStack_658;
  uStack_e0 = uStack_660;
  uStack_138 = uStack_6b8;
  uStack_140 = uStack_6c0;
  uStack_128 = uStack_6a8;
  uStack_130 = uStack_6b0;
  dStack_108 = dStack_688;
  uStack_110 = uStack_690;
  uStack_118 = uStack_698;
  uStack_120 = uStack_6a0;
  uStack_148 = uStack_6c8;
  uStack_150 = uStack_6d0;
  uStack_158 = uStack_6d8;
  uStack_160 = puStack_6e0;
  FUN_000792a4(&uStack_230,auStack_870,0xae8dc8,&UNK_007d1d70);
  func_0x000792ec(&uStack_160,0xae8dc8,&UNK_007d1d70);
  return;
}



/* Entry: 00078014; end: 000784d7;  */

void FUN_00078014(long param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_7f8 [264];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined2 uStack_620;
  undefined1 auStack_618 [56];
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined2 uStack_520;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined2 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined2 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
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
  undefined2 uStack_c8;
  
  dVar5 = param_2;
  func_0x007918a0();
  dVar8 = param_2 / param_3;
  func_0x007918a0(param_4);
  dVar8 = dVar8 * dVar5;
  func_0x007918a0(param_5);
  dVar9 = param_2 / param_3;
  func_0x007918a0(param_5);
  dVar9 = dVar9 * dVar5;
  dVar10 = dVar9 * 0.85;
  func_0x007918a0(param_6);
  func_0x007918a0(param_6);
  dVar5 = param_2;
  FUN_00077f6c(param_2,0x3fd6666666666666,param_4,param_5);
  uVar1 = param_4;
  uVar3 = param_6;
  dVar6 = param_2;
  FUN_00077f6c(param_2,0x3fd6666666666666);
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  FUN_000784d8(&uStack_188,param_2,dVar10,param_2 * 0.85,(param_2 / param_3) * dVar9 * 0.85,param_4,
               param_5,param_6);
  uStack_538 = uStack_e0;
  uStack_540 = uStack_e8;
  uStack_528 = uStack_d0;
  uStack_530 = uStack_d8;
  uStack_578 = uStack_120;
  uStack_580 = uStack_128;
  uStack_568 = uStack_110;
  uStack_570 = uStack_118;
  uStack_558 = uStack_100;
  uStack_560 = uStack_108;
  uStack_548 = uStack_f0;
  uStack_550 = uStack_f8;
  uStack_5b8 = uStack_160;
  uStack_5c0 = uStack_168;
  uStack_5a8 = uStack_150;
  uStack_5b0 = uStack_158;
  uStack_598 = uStack_140;
  uStack_5a0 = uStack_148;
  uStack_588 = uStack_130;
  uStack_590 = uStack_138;
  uStack_5d8 = uStack_180;
  uStack_5e0 = uStack_188;
  uStack_5c8 = uStack_170;
  uStack_5d0 = uStack_178;
  uStack_468 = uStack_e0;
  uStack_470 = uStack_e8;
  uStack_458 = uStack_d0;
  uStack_460 = uStack_d8;
  uStack_4a8 = uStack_120;
  uStack_4b0 = uStack_128;
  uStack_498 = uStack_110;
  uStack_4a0 = uStack_118;
  uStack_488 = uStack_100;
  uStack_490 = uStack_108;
  uStack_478 = uStack_f0;
  uStack_480 = uStack_f8;
  uStack_4e8 = uStack_160;
  uStack_4f0 = uStack_168;
  uStack_4d8 = uStack_150;
  uStack_4e0 = uStack_158;
  uStack_4c8 = uStack_140;
  uStack_4d0 = uStack_148;
  uStack_4b8 = uStack_130;
  uStack_4c0 = uStack_138;
  uStack_520 = uStack_c8;
  uStack_450 = uStack_c8;
  uStack_508 = uStack_180;
  uStack_510 = uStack_188;
  uStack_4f8 = uStack_170;
  uStack_500 = uStack_178;
  uVar4 = 0xae8d98;
  FUN_000792a4(&uStack_5e0,&uStack_290,0xae8d98,&UNK_007d1d38);
  puVar2 = &uStack_510;
  func_0x000792ec(puVar2,0xae8d98,&UNK_007d1d38);
  uStack_1f8 = uStack_548;
  uStack_200 = uStack_550;
  uStack_1e8 = uStack_538;
  uStack_1f0 = uStack_540;
  uStack_1d8 = uStack_528;
  uStack_1e0 = uStack_530;
  uStack_238 = uStack_588;
  uStack_240 = uStack_590;
  uStack_228 = uStack_578;
  uStack_230 = uStack_580;
  uStack_218 = uStack_568;
  uStack_220 = uStack_570;
  uStack_208 = uStack_558;
  uStack_210 = uStack_560;
  uStack_278 = uStack_5c8;
  uStack_280 = uStack_5d0;
  uStack_268 = uStack_5b8;
  uStack_270 = uStack_5c0;
  uStack_258 = uStack_5a8;
  uStack_260 = uStack_5b0;
  uStack_248 = uStack_598;
  uStack_250 = uStack_5a0;
  uStack_1d0 = uStack_520;
  uStack_288 = uStack_5d8;
  uStack_290 = uStack_5e0;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_388 = uStack_1e8;
  uStack_390 = uStack_1f0;
  uStack_378 = uStack_1d8;
  uStack_380 = uStack_1e0;
  uStack_370 = uStack_1d0;
  uStack_3c8 = uStack_228;
  uStack_3d0 = uStack_230;
  uStack_3b8 = uStack_218;
  uStack_3c0 = uStack_220;
  uStack_3a8 = uStack_208;
  uStack_3b0 = uStack_210;
  uStack_398 = uStack_1f8;
  uStack_3a0 = uStack_200;
  uStack_408 = uStack_268;
  uStack_410 = uStack_270;
  uStack_3f8 = uStack_258;
  uStack_400 = uStack_260;
  uStack_3e8 = uStack_248;
  uStack_3f0 = uStack_250;
  uStack_3d8 = uStack_238;
  uStack_3e0 = uStack_240;
  uStack_428 = uStack_288;
  uStack_430 = uStack_290;
  uStack_418 = uStack_278;
  uStack_420 = uStack_280;
  uStack_440 = uVar1;
  uStack_438 = uVar3;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_618,dVar8 + dVar5 + dVar6,0,0,1,puVar2,uVar4);
  uStack_648 = uStack_398;
  uStack_650 = uStack_3a0;
  uStack_638 = uStack_388;
  uStack_640 = uStack_390;
  uStack_628 = uStack_378;
  uStack_630 = uStack_380;
  uStack_620 = uStack_370;
  uStack_688 = uStack_3d8;
  uStack_690 = uStack_3e0;
  uStack_678 = uStack_3c8;
  uStack_680 = uStack_3d0;
  uStack_668 = uStack_3b8;
  uStack_670 = uStack_3c0;
  uStack_658 = uStack_3a8;
  uStack_660 = uStack_3b0;
  uStack_6c8 = uStack_418;
  uStack_6d0 = uStack_420;
  uStack_6b8 = uStack_408;
  uStack_6c0 = uStack_410;
  uStack_6a8 = uStack_3f8;
  uStack_6b0 = uStack_400;
  uStack_698 = uStack_3e8;
  uStack_6a0 = uStack_3f0;
  uStack_6e8 = uStack_438;
  uStack_6f0 = uStack_440;
  uStack_6d8 = uStack_428;
  uStack_6e0 = uStack_430;
  uStack_2b0 = uStack_1e8;
  uStack_2b8 = uStack_1f0;
  uStack_2a0 = uStack_1d8;
  uStack_2a8 = uStack_1e0;
  uStack_298 = uStack_1d0;
  uStack_2f0 = uStack_228;
  uStack_2f8 = uStack_230;
  uStack_2e0 = uStack_218;
  uStack_2e8 = uStack_220;
  uStack_2c0 = uStack_1f8;
  uStack_2c8 = uStack_200;
  uStack_2d0 = uStack_208;
  uStack_2d8 = uStack_210;
  uStack_330 = uStack_268;
  uStack_338 = uStack_270;
  uStack_320 = uStack_258;
  uStack_328 = uStack_260;
  uStack_300 = uStack_238;
  uStack_308 = uStack_240;
  uStack_310 = uStack_248;
  uStack_318 = uStack_250;
  uStack_340 = uStack_278;
  uStack_348 = uStack_280;
  uStack_350 = uStack_288;
  uStack_358 = uStack_290;
  uVar4 = uStack_280;
  uVar7 = uStack_290;
  uStack_368 = uVar1;
  uStack_360 = uVar3;
  FUN_000792a4(&uStack_440,&uStack_188,0xae8da0,&UNK_007d1d40);
  func_0x000792ec(&uStack_368,0xae8da0,&UNK_007d1d40);
  __s7SwiftUI9UnitPointV6centerACvgZ();
  _memcpy(&uStack_290,&uStack_6f0,0x108);
  *(undefined8 *)(param_1 + 0x108) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x110) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x120) = uVar7;
  _memcpy(param_1,&uStack_6f0,0x108);
  _memcpy(&uStack_188,&uStack_6f0,0x108);
  FUN_000792a4(&uStack_290,auStack_7f8,0xae8da8,&UNK_007d1d48);
  func_0x000792ec(&uStack_188,0xae8da8,&UNK_007d1d48);
  return;
}



/* Entry: 000784d8; end: 00078abf;  */

void FUN_000784d8(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_650 [8];
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  code *pcStack_630;
  undefined4 uStack_624;
  code *pcStack_620;
  undefined1 auStack_618 [88];
  undefined1 *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  double dStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  double dStack_520;
  undefined8 uStack_518;
  undefined1 *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  double dStack_4c8;
  undefined8 uStack_4c0;
  undefined1 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  double dStack_468;
  undefined8 uStack_460;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  undefined2 uStack_3d8;
  undefined6 uStack_3d6;
  undefined2 uStack_3d0;
  undefined6 uStack_3ce;
  undefined2 uStack_3c8;
  undefined6 uStack_3c6;
  undefined2 uStack_3c0;
  undefined6 uStack_3be;
  undefined2 uStack_3b8;
  undefined6 uStack_3b6;
  undefined2 uStack_3b0;
  undefined6 uStack_3ae;
  undefined1 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined2 uStack_398;
  undefined8 uStack_396;
  undefined8 uStack_38e;
  undefined8 uStack_386;
  undefined8 uStack_37e;
  undefined8 uStack_376;
  undefined6 uStack_36e;
  undefined2 uStack_368;
  undefined6 uStack_366;
  undefined1 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  double dStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  double dStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined2 uStack_288;
  undefined6 uStack_286;
  undefined2 uStack_280;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined2 uStack_248;
  undefined8 uStack_246;
  undefined8 uStack_23e;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined6 uStack_1b0;
  undefined2 uStack_1aa;
  undefined6 uStack_1a8;
  undefined2 uStack_1a2;
  undefined6 uStack_1a0;
  undefined2 uStack_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined2 uStack_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  
  lVar1 = 0;
  puStack_648 = param_1;
  uStack_640 = param_8;
  uStack_638 = param_6;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_650 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain(param_7);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uStack_624 = *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00999670;
  pcStack_620 = *(code **)(lVar5 + 0x68);
  (*pcStack_620)(puVar6,uStack_624,lVar1);
  puVar2 = puVar6;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar6,param_7);
  _swift_release(param_7);
  pcStack_630 = *(code **)(lVar5 + 8);
  puVar3 = puVar6;
  lVar5 = lVar1;
  (*pcStack_630)(puVar6,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_450,param_3,0,param_4,0,puVar3,lVar5);
  uStack_192 = (undefined2)uStack_438;
  uStack_190 = (undefined6)((ulong)uStack_438 >> 0x10);
  uStack_19a = (undefined2)uStack_440;
  uStack_198 = (undefined6)((ulong)uStack_440 >> 0x10);
  uStack_1a2 = (undefined2)uStack_448;
  uStack_1a0 = (undefined6)((ulong)uStack_448 >> 0x10);
  uStack_1aa = (undefined2)lStack_450;
  uStack_1a8 = (undefined6)((ulong)lStack_450 >> 0x10);
  uStack_182 = (undefined2)uStack_428;
  uStack_180 = (undefined6)((ulong)uStack_428 >> 0x10);
  uStack_18a = (undefined2)uStack_430;
  uStack_188 = (undefined6)((ulong)uStack_430 >> 0x10);
  uStack_3e8 = 0;
  uStack_3e0 = 1;
  uStack_38e = CONCAT26(uStack_1a2,uStack_1a8);
  uStack_396 = CONCAT26(uStack_1aa,uStack_1b0);
  uStack_3c6 = uStack_198;
  uStack_3c0 = uStack_192;
  uStack_3ce = uStack_1a0;
  uStack_3c8 = uStack_19a;
  uStack_37e = CONCAT26(uStack_192,uStack_198);
  uStack_386 = CONCAT26(uStack_19a,uStack_1a0);
  uStack_3d6 = uStack_1a8;
  uStack_3d0 = uStack_1a2;
  uStack_3d8 = uStack_1aa;
  uStack_3b6 = uStack_188;
  uStack_3be = uStack_190;
  uStack_3b8 = uStack_18a;
  uStack_110 = uStack_428;
  uStack_128 = uStack_440;
  uStack_130 = uStack_448;
  uStack_118 = uStack_430;
  uStack_120 = uStack_438;
  lStack_138 = lStack_450;
  uStack_140 = CONCAT62(uStack_1b0,1);
  uStack_148 = 0;
  uStack_3a0 = 0;
  uStack_398 = 1;
  uStack_376 = CONCAT26(uStack_18a,uStack_190);
  uStack_36e = uStack_188;
  uStack_368 = uStack_182;
  puStack_3f0 = puVar2;
  uStack_3b0 = uStack_182;
  uStack_3ae = uStack_180;
  puStack_3a8 = puVar2;
  uStack_366 = uStack_180;
  puStack_150 = puVar2;
  FUN_000792a4(&puStack_3f0,&puStack_f0,0xae78b8,&UNK_007ce9d0);
  func_0x000792ec(&puStack_3a8,0xae78b8,&UNK_007ce9d0);
  uStack_338 = uStack_128;
  uStack_340 = uStack_130;
  uStack_328 = uStack_118;
  uStack_330 = uStack_120;
  uStack_320 = uStack_110;
  uStack_358 = uStack_148;
  puStack_360 = puStack_150;
  lStack_348 = lStack_138;
  uStack_350 = uStack_140;
  uStack_310 = 0;
  uStack_2c0 = uStack_110;
  uStack_2d8 = uStack_128;
  uStack_2e0 = uStack_130;
  uStack_2c8 = uStack_118;
  uStack_2d0 = uStack_120;
  uStack_2f8 = uStack_148;
  puStack_300 = puStack_150;
  lStack_2e8 = lStack_138;
  uStack_2f0 = uStack_140;
  uStack_2b0 = 0;
  dStack_318 = param_3 * -0.35;
  dStack_2b8 = param_3 * -0.35;
  FUN_000792a4(&puStack_360,&puStack_f0,0xae8db0,&UNK_007d1d58);
  func_0x000792ec(&puStack_300,0xae8db0,&UNK_007d1d58);
  uVar4 = uStack_640;
  _objc_retain(uStack_640);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (*pcStack_620)(puVar6,uStack_624,lVar1);
  puVar2 = puVar6;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar6,uVar4);
  _swift_release(uVar4);
  puVar3 = puVar6;
  lVar5 = lVar1;
  (*pcStack_630)(puVar6,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_420,param_5,0,param_4,0,puVar3,lVar5);
  uStack_192 = (undefined2)uStack_408;
  uStack_190 = (undefined6)((ulong)uStack_408 >> 0x10);
  uStack_19a = (undefined2)uStack_410;
  uStack_198 = (undefined6)((ulong)uStack_410 >> 0x10);
  uStack_1a2 = (undefined2)uStack_418;
  uStack_1a0 = (undefined6)((ulong)uStack_418 >> 0x10);
  uStack_1aa = (undefined2)lStack_420;
  uStack_1a8 = (undefined6)((ulong)lStack_420 >> 0x10);
  uStack_182 = (undefined2)uStack_3f8;
  uStack_180 = (undefined6)((ulong)uStack_3f8 >> 0x10);
  uStack_18a = (undefined2)uStack_400;
  uStack_188 = (undefined6)((ulong)uStack_400 >> 0x10);
  uStack_298 = 0;
  uStack_290 = 1;
  uStack_23e = CONCAT26(uStack_1a2,uStack_1a8);
  uStack_246 = CONCAT26(uStack_1aa,uStack_1b0);
  uStack_276 = uStack_198;
  uStack_270 = uStack_192;
  uStack_27e = uStack_1a0;
  uStack_278 = uStack_19a;
  uStack_22e = CONCAT26(uStack_192,uStack_198);
  uStack_236 = CONCAT26(uStack_19a,uStack_1a0);
  uStack_286 = uStack_1a8;
  uStack_280 = uStack_1a2;
  uStack_288 = uStack_1aa;
  uStack_266 = uStack_188;
  uStack_26e = uStack_190;
  uStack_268 = uStack_18a;
  uStack_110 = uStack_3f8;
  uStack_128 = uStack_410;
  uStack_130 = uStack_418;
  uStack_118 = uStack_400;
  uStack_120 = uStack_408;
  lStack_138 = lStack_420;
  uStack_140 = CONCAT62(uStack_1b0,1);
  uStack_148 = 0;
  uStack_250 = 0;
  uStack_248 = 1;
  uStack_226 = CONCAT26(uStack_18a,uStack_190);
  uStack_21e = uStack_188;
  uStack_218 = uStack_182;
  puStack_2a0 = puVar2;
  uStack_260 = uStack_182;
  uStack_25e = uStack_180;
  puStack_258 = puVar2;
  uStack_216 = uStack_180;
  puStack_150 = puVar2;
  FUN_000792a4(&puStack_2a0,&puStack_f0,0xae78b8,&UNK_007ce9d0);
  func_0x000792ec(&puStack_258,0xae78b8,&UNK_007ce9d0);
  uStack_1e8 = uStack_128;
  uStack_1f0 = uStack_130;
  uStack_1d8 = uStack_118;
  uStack_1e0 = uStack_120;
  uStack_1d0 = uStack_110;
  uStack_208 = uStack_148;
  puStack_210 = puStack_150;
  lStack_1f8 = lStack_138;
  uStack_200 = uStack_140;
  uStack_1c0 = 0;
  uStack_170 = uStack_110;
  uStack_188 = (undefined6)uStack_128;
  uStack_182 = (undefined2)((ulong)uStack_128 >> 0x30);
  uStack_190 = (undefined6)uStack_130;
  uStack_18a = (undefined2)((ulong)uStack_130 >> 0x30);
  uStack_178 = uStack_118;
  uStack_180 = (undefined6)uStack_120;
  uStack_17a = (undefined2)((ulong)uStack_120 >> 0x30);
  uStack_1a8 = (undefined6)uStack_148;
  uStack_1a2 = (undefined2)((ulong)uStack_148 >> 0x30);
  uStack_1b0 = SUB86(puStack_150,0);
  uStack_1aa = (undefined2)((ulong)puStack_150 >> 0x30);
  uStack_198 = (undefined6)lStack_138;
  uStack_192 = (undefined2)((ulong)lStack_138 >> 0x30);
  uStack_1a0 = (undefined6)uStack_140;
  uStack_19a = (undefined2)((ulong)uStack_140 >> 0x30);
  uStack_160 = 0;
  dStack_1c8 = param_5 * 0.35;
  dStack_168 = param_5 * 0.35;
  FUN_000792a4(&puStack_210,&puStack_f0,0xae8db0,&UNK_007d1d58);
  func_0x000792ec(&uStack_1b0,0xae8db0,&UNK_007d1d58);
  uVar4 = uStack_638;
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (*pcStack_620)(puVar6,uStack_624,lVar1);
  puVar2 = puVar6;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar6,uVar4);
  _swift_release(uVar4);
  (*pcStack_630)(puVar6,lVar1);
  uStack_488 = uStack_338;
  uStack_490 = uStack_340;
  uStack_478 = uStack_328;
  uStack_480 = uStack_330;
  dStack_468 = dStack_318;
  uStack_470 = uStack_320;
  uStack_4a8 = uStack_358;
  puStack_4b0 = puStack_360;
  lStack_498 = lStack_348;
  uStack_4a0 = uStack_350;
  uStack_4e8 = uStack_1e8;
  uStack_4f0 = uStack_1f0;
  uStack_4d8 = uStack_1d8;
  uStack_4e0 = uStack_1e0;
  dStack_4c8 = dStack_1c8;
  uStack_4d0 = uStack_1d0;
  uStack_508 = uStack_208;
  puStack_510 = puStack_210;
  lStack_4f8 = lStack_1f8;
  uStack_500 = uStack_200;
  uStack_148 = uStack_358;
  puStack_150 = puStack_360;
  lStack_138 = lStack_348;
  uStack_140 = uStack_350;
  uStack_118 = uStack_328;
  uStack_120 = uStack_330;
  dStack_108 = dStack_318;
  uStack_110 = uStack_320;
  uStack_128 = uStack_338;
  uStack_130 = uStack_340;
  uStack_460 = uStack_310;
  uStack_4c0 = uStack_1c0;
  uStack_100 = uStack_310;
  uStack_5b8 = uStack_358;
  puStack_5c0 = puStack_360;
  lStack_5a8 = lStack_348;
  uStack_5b0 = uStack_350;
  uStack_588 = uStack_328;
  uStack_590 = uStack_330;
  dStack_578 = dStack_318;
  uStack_580 = uStack_320;
  uStack_598 = uStack_338;
  uStack_5a0 = uStack_340;
  uStack_e8 = uStack_208;
  puStack_f0 = puStack_210;
  lStack_d8 = lStack_1f8;
  uStack_e0 = uStack_200;
  uStack_a0 = uStack_1c0;
  uStack_b8 = uStack_1d8;
  uStack_c0 = uStack_1e0;
  dStack_a8 = dStack_1c8;
  uStack_b0 = uStack_1d0;
  uStack_c8 = uStack_1e8;
  uStack_d0 = uStack_1f0;
  lStack_550 = lStack_1f8;
  uStack_558 = uStack_200;
  uStack_560 = uStack_208;
  puStack_568 = puStack_210;
  uStack_570 = uStack_310;
  uStack_518 = uStack_1c0;
  dStack_520 = dStack_1c8;
  uStack_528 = uStack_1d0;
  uStack_530 = uStack_1d8;
  uStack_538 = uStack_1e0;
  uStack_540 = uStack_1e8;
  uStack_548 = uStack_1f0;
  puStack_648[1] = uStack_358;
  *puStack_648 = puStack_360;
  puStack_648[3] = lStack_348;
  puStack_648[2] = uStack_350;
  puStack_648[9] = dStack_318;
  puStack_648[8] = uStack_320;
  puStack_648[0xb] = puStack_210;
  puStack_648[10] = uStack_310;
  puStack_648[5] = uStack_338;
  puStack_648[4] = uStack_340;
  puStack_648[7] = uStack_328;
  puStack_648[6] = uStack_330;
  puStack_648[0x13] = uStack_1d0;
  puStack_648[0x12] = uStack_1d8;
  puStack_648[0x15] = uStack_1c0;
  puStack_648[0x14] = dStack_1c8;
  puStack_648[0xf] = uStack_1f0;
  puStack_648[0xe] = lStack_1f8;
  puStack_648[0x11] = uStack_1e0;
  puStack_648[0x10] = uStack_1e8;
  puStack_648[0xd] = uStack_200;
  puStack_648[0xc] = uStack_208;
  puStack_648[0x16] = puVar2;
  puStack_648[0x17] = 0;
  *(undefined2 *)(puStack_648 + 0x18) = 1;
  FUN_000792a4(&puStack_150,auStack_618,0xae8db0,&UNK_007d1d58);
  FUN_000792a4(&puStack_f0,auStack_618,0xae8db0,&UNK_007d1d58);
  func_0x000792ec(&puStack_510,0xae8db0,&UNK_007d1d58);
  func_0x000792ec(&puStack_4b0,0xae8db0,&UNK_007d1d58);
  return;
}



/* Entry: 00078ac0; end: 00078acf;  */

void FUN_00078ac0(long param_1,undefined8 param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_7f8 [264];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined2 uStack_620;
  undefined1 auStack_618 [56];
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined2 uStack_520;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined2 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined2 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
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
  undefined2 uStack_c8;
  
  uVar4 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  dVar8 = (double)unaff_x20[3];
  dVar6 = dVar8;
  func_0x007918a0();
  dVar10 = dVar8 / param_3;
  func_0x007918a0(uVar4);
  dVar10 = dVar10 * dVar6;
  func_0x007918a0(uVar9);
  dVar11 = dVar8 / param_3;
  func_0x007918a0(uVar9);
  dVar11 = dVar11 * dVar6;
  dVar12 = dVar11 * 0.85;
  func_0x007918a0(uVar5);
  func_0x007918a0(uVar5);
  dVar6 = dVar8;
  FUN_00077f6c(dVar8,0x3fd6666666666666,uVar4,uVar9);
  uVar1 = uVar4;
  uVar3 = uVar5;
  dVar7 = dVar8;
  FUN_00077f6c(dVar8,0x3fd6666666666666);
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  FUN_000784d8(&uStack_188,dVar8,dVar12,dVar8 * 0.85,(dVar8 / param_3) * dVar11 * 0.85,uVar4,uVar9,
               uVar5);
  uStack_538 = uStack_e0;
  uStack_540 = uStack_e8;
  uStack_528 = uStack_d0;
  uStack_530 = uStack_d8;
  uStack_578 = uStack_120;
  uStack_580 = uStack_128;
  uStack_568 = uStack_110;
  uStack_570 = uStack_118;
  uStack_558 = uStack_100;
  uStack_560 = uStack_108;
  uStack_548 = uStack_f0;
  uStack_550 = uStack_f8;
  uStack_5b8 = uStack_160;
  uStack_5c0 = uStack_168;
  uStack_5a8 = uStack_150;
  uStack_5b0 = uStack_158;
  uStack_598 = uStack_140;
  uStack_5a0 = uStack_148;
  uStack_588 = uStack_130;
  uStack_590 = uStack_138;
  uStack_5d8 = uStack_180;
  uStack_5e0 = uStack_188;
  uStack_5c8 = uStack_170;
  uStack_5d0 = uStack_178;
  uStack_468 = uStack_e0;
  uStack_470 = uStack_e8;
  uStack_458 = uStack_d0;
  uStack_460 = uStack_d8;
  uStack_4a8 = uStack_120;
  uStack_4b0 = uStack_128;
  uStack_498 = uStack_110;
  uStack_4a0 = uStack_118;
  uStack_488 = uStack_100;
  uStack_490 = uStack_108;
  uStack_478 = uStack_f0;
  uStack_480 = uStack_f8;
  uStack_4e8 = uStack_160;
  uStack_4f0 = uStack_168;
  uStack_4d8 = uStack_150;
  uStack_4e0 = uStack_158;
  uStack_4c8 = uStack_140;
  uStack_4d0 = uStack_148;
  uStack_4b8 = uStack_130;
  uStack_4c0 = uStack_138;
  uStack_520 = uStack_c8;
  uStack_450 = uStack_c8;
  uStack_508 = uStack_180;
  uStack_510 = uStack_188;
  uStack_4f8 = uStack_170;
  uStack_500 = uStack_178;
  uVar4 = 0xae8d98;
  FUN_000792a4(&uStack_5e0,&uStack_290,0xae8d98,&UNK_007d1d38);
  puVar2 = &uStack_510;
  func_0x000792ec(puVar2,0xae8d98,&UNK_007d1d38);
  uStack_1f8 = uStack_548;
  uStack_200 = uStack_550;
  uStack_1e8 = uStack_538;
  uStack_1f0 = uStack_540;
  uStack_1d8 = uStack_528;
  uStack_1e0 = uStack_530;
  uStack_238 = uStack_588;
  uStack_240 = uStack_590;
  uStack_228 = uStack_578;
  uStack_230 = uStack_580;
  uStack_218 = uStack_568;
  uStack_220 = uStack_570;
  uStack_208 = uStack_558;
  uStack_210 = uStack_560;
  uStack_278 = uStack_5c8;
  uStack_280 = uStack_5d0;
  uStack_268 = uStack_5b8;
  uStack_270 = uStack_5c0;
  uStack_258 = uStack_5a8;
  uStack_260 = uStack_5b0;
  uStack_248 = uStack_598;
  uStack_250 = uStack_5a0;
  uStack_1d0 = uStack_520;
  uStack_288 = uStack_5d8;
  uStack_290 = uStack_5e0;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_388 = uStack_1e8;
  uStack_390 = uStack_1f0;
  uStack_378 = uStack_1d8;
  uStack_380 = uStack_1e0;
  uStack_370 = uStack_1d0;
  uStack_3c8 = uStack_228;
  uStack_3d0 = uStack_230;
  uStack_3b8 = uStack_218;
  uStack_3c0 = uStack_220;
  uStack_3a8 = uStack_208;
  uStack_3b0 = uStack_210;
  uStack_398 = uStack_1f8;
  uStack_3a0 = uStack_200;
  uStack_408 = uStack_268;
  uStack_410 = uStack_270;
  uStack_3f8 = uStack_258;
  uStack_400 = uStack_260;
  uStack_3e8 = uStack_248;
  uStack_3f0 = uStack_250;
  uStack_3d8 = uStack_238;
  uStack_3e0 = uStack_240;
  uStack_428 = uStack_288;
  uStack_430 = uStack_290;
  uStack_418 = uStack_278;
  uStack_420 = uStack_280;
  uStack_440 = uVar1;
  uStack_438 = uVar3;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_618,dVar10 + dVar6 + dVar7,0,0,1,puVar2,uVar4);
  uStack_648 = uStack_398;
  uStack_650 = uStack_3a0;
  uStack_638 = uStack_388;
  uStack_640 = uStack_390;
  uStack_628 = uStack_378;
  uStack_630 = uStack_380;
  uStack_620 = uStack_370;
  uStack_688 = uStack_3d8;
  uStack_690 = uStack_3e0;
  uStack_678 = uStack_3c8;
  uStack_680 = uStack_3d0;
  uStack_668 = uStack_3b8;
  uStack_670 = uStack_3c0;
  uStack_658 = uStack_3a8;
  uStack_660 = uStack_3b0;
  uStack_6c8 = uStack_418;
  uStack_6d0 = uStack_420;
  uStack_6b8 = uStack_408;
  uStack_6c0 = uStack_410;
  uStack_6a8 = uStack_3f8;
  uStack_6b0 = uStack_400;
  uStack_698 = uStack_3e8;
  uStack_6a0 = uStack_3f0;
  uStack_6e8 = uStack_438;
  uStack_6f0 = uStack_440;
  uStack_6d8 = uStack_428;
  uStack_6e0 = uStack_430;
  uStack_2b0 = uStack_1e8;
  uStack_2b8 = uStack_1f0;
  uStack_2a0 = uStack_1d8;
  uStack_2a8 = uStack_1e0;
  uStack_298 = uStack_1d0;
  uStack_2f0 = uStack_228;
  uStack_2f8 = uStack_230;
  uStack_2e0 = uStack_218;
  uStack_2e8 = uStack_220;
  uStack_2c0 = uStack_1f8;
  uStack_2c8 = uStack_200;
  uStack_2d0 = uStack_208;
  uStack_2d8 = uStack_210;
  uStack_330 = uStack_268;
  uStack_338 = uStack_270;
  uStack_320 = uStack_258;
  uStack_328 = uStack_260;
  uStack_300 = uStack_238;
  uStack_308 = uStack_240;
  uStack_310 = uStack_248;
  uStack_318 = uStack_250;
  uStack_340 = uStack_278;
  uStack_348 = uStack_280;
  uStack_350 = uStack_288;
  uStack_358 = uStack_290;
  uVar4 = uStack_280;
  uVar9 = uStack_290;
  uStack_368 = uVar1;
  uStack_360 = uVar3;
  FUN_000792a4(&uStack_440,&uStack_188,0xae8da0,&UNK_007d1d40);
  func_0x000792ec(&uStack_368,0xae8da0,&UNK_007d1d40);
  __s7SwiftUI9UnitPointV6centerACvgZ();
  _memcpy(&uStack_290,&uStack_6f0,0x108);
  *(undefined8 *)(param_1 + 0x108) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x110) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x120) = uVar9;
  _memcpy(param_1,&uStack_6f0,0x108);
  _memcpy(&uStack_188,&uStack_6f0,0x108);
  FUN_000792a4(&uStack_290,auStack_7f8,0xae8da8,&UNK_007d1d48);
  func_0x000792ec(&uStack_188,0xae8da8,&UNK_007d1d48);
  return;
}



/* Entry: 00078ad0; end: 00078c83;  */

ulong FUN_00078ad0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x78bb4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x78bb8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_opt_self(PTR__OBJC_CLASS___UIImage_00ac2a88);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_opt_self(PTR__OBJC_CLASS___UIImage_00ac2a88);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_0007932c(0);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x78c84);
  (*pcVar2)();
}



/* Entry: 00078c84; end: 00078d43;  */

void FUN_00078c84(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d1ce8;
  _swift_getWitnessTable(&UNK_007d1ce8,&UNK_009a2750);
  puRam0000000000ae8d80 = puVar1;
  return;
}



/* Entry: 00078d44; end: 00078d53;  */

void FUN_00078d44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00840278,1);
  return;
}



/* Entry: 00078d54; end: 00078d7f;  */

undefined8 * FUN_00078d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00078d80; end: 00078d87;  */

void FUN_00078d80(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*param_1);
  return;
}



/* Entry: 00078d88; end: 00078dd3;  */

undefined8 * FUN_00078d88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 00078dd4; end: 00078e0f;  */

undefined8 * FUN_00078dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 00078e10; end: 00078ebf;  */

int FUN_00078e10(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00078ec0; end: 00078f23;  */

undefined8 * FUN_00078ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_retain(uVar1);
  return param_1;
}



/* Entry: 00078f24; end: 00078f87;  */

undefined8 * FUN_00078f24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 00078f88; end: 00078fcb;  */

undefined8 * FUN_00078f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 00078fcc; end: 00079063;  */

int FUN_00078fcc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00079064; end: 000790bf;  */

long FUN_00079064(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000790c0; end: 00079187;  */

undefined8 * FUN_000790c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  _objc_retain();
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  return param_1;
}



/* Entry: 00079188; end: 000791db;  */

undefined8 * FUN_00079188(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_release(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 000791dc; end: 000792a3;  */

int FUN_000791dc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000792a4; end: 0007932b;  */

undefined8 FUN_000792a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 0007932c; end: 000793a3;  */

void FUN_0007932c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_00ac2a88;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae8de0 = puVar1;
  return;
}



/* Entry: 000793a4; end: 00079433;  */

void FUN_000793a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae8df8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8da8;
  FUN_00016c74(0xae8da8,&UNK_007d1d48);
  uVar2 = 0xae8e00;
  func_0x00079568(0xae8e00,0xae8da0,&UNK_007d1d40);
  puStack_28 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_009991c0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8df8 = puVar3;
  return;
}



/* Entry: 00079434; end: 00079467;  */

void FUN_00079434(void)

{
  FUN_00079468(0xae8e08,0xae8e10,&UNK_007d1d90,FUN_000794d8);
  return;
}



/* Entry: 00079468; end: 000794d7;  */

void FUN_00079468(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI12_ScaleEffectVAA12ViewModifierAAWP_009991d0;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 000794d8; end: 000795ab;  */

void FUN_000794d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae8e18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8dc8;
  FUN_00016c74(0xae8dc8,&UNK_007d1d70);
  uVar2 = 0xae8e20;
  func_0x00079568(0xae8e20,0xae8dc0,&UNK_007d1d68);
  puStack_28 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_009991c0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8e18 = puVar3;
  return;
}



/* Entry: 000795ac; end: 000795af;  */

void FUN_000795ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae8e28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8dd8;
  FUN_00016c74(0xae8dd8,&UNK_007d1d80);
  uVar2 = uVar1;
  func_0x00079628();
  puStack_28 = PTR___s7SwiftUI15_ContrastEffectVAA12ViewModifierAAWP_009992e0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8e28 = puVar3;
  return;
}



/* Entry: 000795b0; end: 0007969f;  */

void FUN_000795b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae8e28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8dd8;
  FUN_00016c74(0xae8dd8,&UNK_007d1d80);
  uVar2 = uVar1;
  func_0x00079628();
  puStack_28 = PTR___s7SwiftUI15_ContrastEffectVAA12ViewModifierAAWP_009992e0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8e28 = puVar3;
  return;
}



/* Entry: 000796a0; end: 0007970f;  */

void FUN_000796a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000000ae8e38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8e40;
  FUN_00016c74(0xae8e40,&UNK_007d1d98);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688;
  puStack_18 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_009993c0;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &puStack_20);
  puRam0000000000ae8e38 = puVar2;
  return;
}



/* Entry: 00079710; end: 0007974f;  */

void FUN_00079710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 00079750; end: 0007976b;  */

void FUN_00079750(undefined8 param_1)

{
  __s7SwiftUI5ColorV5blackACvgZ();
  uRam0000000000b64830 = param_1;
  return;
}



/* Entry: 0007976c; end: 00079787;  */

void FUN_0007976c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_008403a0,1);
  return;
}



/* Entry: 00079788; end: 0007984b;  */

void FUN_00079788(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *unaff_x20;
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  uVar1 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  puVar2 = &uStack_38;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_0099b698;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (puVar2,&uStack_30,uVar1,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  uVar4 = SUB81(puVar2,0);
  FUN_00033a8c();
  puVar2 = &uStack_30;
  puVar3 = PTR___sSSN_0099b040;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  *(undefined1 *)(param_1 + 2) = uVar4;
  param_1[3] = (long)puVar5;
  return;
}



/* Entry: 0007984c; end: 00079853;  */

void FUN_0007984c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_0099b9d8)(*param_1);
  return;
}



/* Entry: 00079854; end: 000798bb;  */

undefined8 * FUN_00079854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  _swift_errorRetain(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Entry: 000798bc; end: 0007996f;  */

int FUN_000798bc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00079970; end: 000799b7;  */

undefined8 FUN_00079970(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae8e58;
  func_0x000115a8(0xae8e58,&UNK_007d1e18);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000799b8; end: 000799c3;  */

void __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF
               (undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar1 = PTR___s9WidgetKit0A21AccentedRenderingModeV11desaturatedACvgZ_00999938;
  iVar2 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar2 == 0) {
    uStack_58 = param_1;
    _swift_retain(param_1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
              (&uStack_58,PTR___s7SwiftUI5ImageVN_00999698,
               PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688);
  }
  else {
    lVar3 = 0xae8e50;
    func_0x000115a8(0xae8e50,&UNK_007d1e10);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = auStack_60 + -extraout_x8;
    lVar4 = 0xae8e58;
    func_0x000115a8(0xae8e58,&UNK_007d1e18);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar6 = (long)puVar5 - extraout_x8_00;
    (*(code *)puVar1)(lVar6);
    lVar4 = 0;
    __s9WidgetKit0A21AccentedRenderingModeVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,0,1,lVar4);
    __s7SwiftUI5ImageV9WidgetKitE27widgetAccentedRenderingModeyQrAD0dghI0VSgF(puVar5,lVar6,param_1);
    FUN_00079970(lVar6);
    _swift_getOpaqueTypeConformance();
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(puVar5,lVar3,lVar6);
  }
  return;
}



/* Entry: 000799c4; end: 00079b33;  */

void FUN_000799c4(undefined8 param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 == 0) {
    uStack_58 = param_1;
    _swift_retain(param_1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
              (&uStack_58,PTR___s7SwiftUI5ImageVN_00999698,
               PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688);
  }
  else {
    lVar2 = 0xae8e50;
    func_0x000115a8(0xae8e50,&UNK_007d1e10);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar4 = auStack_60 + -extraout_x8;
    lVar3 = 0xae8e58;
    func_0x000115a8(0xae8e58,&UNK_007d1e18);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar5 = (long)puVar4 - extraout_x8_00;
    (*param_2)(lVar5);
    lVar3 = 0;
    __s9WidgetKit0A21AccentedRenderingModeVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,0,1,lVar3);
    __s7SwiftUI5ImageV9WidgetKitE27widgetAccentedRenderingModeyQrAD0dghI0VSgF(puVar4,lVar5,param_1);
    FUN_00079970(lVar5);
    _swift_getOpaqueTypeConformance();
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(puVar4,lVar2,lVar5);
  }
  return;
}



/* Entry: 00079b34; end: 00079bcf;  */

void FUN_00079b34(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_opt_self(PTR__OBJC_CLASS___NSBundle_00ac2c38);
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x6e695f676f6c;
  uVar3 = 0xe600000000000000;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0x6e695f676f6c,0xe600000000000000,0,0,puVar1,0,0xe000000000000000,0x6e6920676f4c,
             0xe600000000000000);
  _objc_release(puVar1);
  uRam0000000000ae8ed8 = uVar2;
  uRam0000000000ae8ee0 = uVar3;
  return;
}



/* Entry: 00079bd0; end: 00079e47;  */

void FUN_00079bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_3b8 [152];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b0 [48];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined6 uStack_24e;
  undefined2 uStack_248;
  undefined6 uStack_246;
  undefined2 uStack_240;
  undefined6 uStack_23e;
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined6 uStack_22e;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined8 uStack_1e6;
  undefined8 uStack_1de;
  undefined8 uStack_1d6;
  undefined8 uStack_1ce;
  undefined8 uStack_1c6;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined6 uStack_1b0;
  undefined2 uStack_1aa;
  undefined6 uStack_1a8;
  undefined2 uStack_1a2;
  undefined6 uStack_1a0;
  undefined2 uStack_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined2 uStack_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
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
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  uVar2 = 0x4030000000000000;
  uVar3 = 1;
  func_0x0007a4c0(&uStack_110,0x4030000000000000,1);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_2b0,param_2,0,0,1,uVar2,uVar3);
  uVar1 = (undefined1)param_2;
  uStack_1a2 = (undefined2)auStack_2b0._8_8_;
  uStack_1a0 = SUB86(auStack_2b0._8_8_,2);
  uStack_1aa = (undefined2)auStack_2b0._0_8_;
  uStack_1a8 = SUB86(auStack_2b0._0_8_,2);
  uStack_192 = (undefined2)auStack_2b0._24_8_;
  uStack_190 = SUB86(auStack_2b0._24_8_,2);
  uStack_19a = (undefined2)auStack_2b0._16_8_;
  uStack_198 = SUB86(auStack_2b0._16_8_,2);
  uStack_182 = (undefined2)auStack_2b0._40_8_;
  uStack_180 = SUB86(auStack_2b0._40_8_,2);
  uStack_18a = (undefined2)auStack_2b0._32_8_;
  uStack_188 = SUB86(auStack_2b0._32_8_,2);
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = uStack_110;
  uStack_260 = uStack_108;
  uStack_258 = uStack_100;
  uStack_250 = (undefined1)uStack_f8;
  uStack_24f = uStack_f8._1_1_;
  uStack_226 = uStack_188;
  uStack_220 = uStack_182;
  uStack_22e = uStack_190;
  uStack_228 = uStack_18a;
  uStack_236 = uStack_198;
  uStack_230 = uStack_192;
  uStack_23e = uStack_1a0;
  uStack_238 = uStack_19a;
  uStack_246 = uStack_1a8;
  uStack_240 = uStack_1a2;
  uStack_24e = uStack_1b0;
  uStack_248 = uStack_1aa;
  uStack_280 = param_3;
  uStack_21e = uStack_180;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_2d8 = CONCAT62(uStack_236,uStack_238);
  uStack_2e0 = CONCAT62(uStack_23e,uStack_240);
  uStack_2c8 = CONCAT62(uStack_226,uStack_228);
  uStack_2d0 = CONCAT62(uStack_22e,uStack_230);
  uStack_2c0 = CONCAT62(uStack_21e,uStack_220);
  uStack_310 = CONCAT71(uStack_26f,uStack_270);
  uStack_318 = uStack_278;
  uStack_320 = uStack_280;
  uStack_308 = uStack_268;
  uStack_2e8 = CONCAT62(uStack_246,uStack_248);
  uStack_2f0 = CONCAT62(uStack_24e,CONCAT11(uStack_24f,uStack_250));
  uStack_2f8 = uStack_258;
  uStack_300 = uStack_260;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = uStack_110;
  uStack_1f8 = uStack_108;
  uStack_1f0 = uStack_100;
  uStack_1e8 = (undefined1)uStack_f8;
  uStack_1e7 = uStack_f8._1_1_;
  uStack_1de = CONCAT26(uStack_1a2,uStack_1a8);
  uStack_1e6 = CONCAT26(uStack_1aa,uStack_1b0);
  uStack_1ce = CONCAT26(uStack_192,uStack_198);
  uStack_1d6 = CONCAT26(uStack_19a,uStack_1a0);
  uStack_1c6 = CONCAT26(uStack_18a,uStack_190);
  uStack_1be = uStack_188;
  uStack_1b8 = uStack_182;
  uStack_1b6 = uStack_180;
  uStack_218 = param_3;
  func_0x0007a7f0(&uStack_280,&uStack_110,0xae8ef0,&UNK_007d1fd8);
  func_0x0007a838(&uStack_218,0xae8ef0,&UNK_007d1fd8);
  uStack_150 = uStack_2c0;
  uStack_178 = uStack_2e8;
  uStack_180 = (undefined6)uStack_2f0;
  uStack_17a = (undefined2)((ulong)uStack_2f0 >> 0x30);
  uStack_168 = uStack_2d8;
  uStack_170 = uStack_2e0;
  uStack_158 = uStack_2c8;
  uStack_160 = uStack_2d0;
  uStack_1a8 = (undefined6)uStack_318;
  uStack_1a2 = (undefined2)((ulong)uStack_318 >> 0x30);
  uStack_1b0 = (undefined6)uStack_320;
  uStack_1aa = (undefined2)((ulong)uStack_320 >> 0x30);
  uStack_198 = (undefined6)uStack_308;
  uStack_192 = (undefined2)((ulong)uStack_308 >> 0x30);
  uStack_1a0 = (undefined6)uStack_310;
  uStack_19a = (undefined2)((ulong)uStack_310 >> 0x30);
  uStack_188 = (undefined6)uStack_2f8;
  uStack_182 = (undefined2)((ulong)uStack_2f8 >> 0x30);
  uStack_190 = (undefined6)uStack_300;
  uStack_18a = (undefined2)((ulong)uStack_300 >> 0x30);
  uStack_c8 = uStack_2d8;
  uStack_d0 = uStack_2e0;
  uStack_b8 = uStack_2c8;
  uStack_c0 = uStack_2d0;
  uStack_138 = 0;
  uStack_140 = 0x4028000000000000;
  uStack_108 = uStack_318;
  uStack_110 = uStack_320;
  uStack_f8 = uStack_308;
  uStack_100 = uStack_310;
  uStack_128 = 0;
  uStack_130 = 0x4010000000000000;
  uStack_120 = 0;
  uStack_b0 = uStack_2c0;
  uStack_e8 = uStack_2f8;
  uStack_f0 = uStack_300;
  uStack_d8 = uStack_2e8;
  uStack_e0 = uStack_2f0;
  uStack_98 = 0;
  uStack_a0 = 0x4028000000000000;
  uStack_88 = 0;
  uStack_90 = 0x4010000000000000;
  uStack_80 = 0;
  uStack_148 = uVar1;
  uStack_a8 = uVar1;
  func_0x0007a7f0(&uStack_1b0,auStack_3b8,0xae8ef8,&UNK_007d1fe0);
  func_0x0007a838(&uStack_110,0xae8ef8,&UNK_007d1fe0);
  param_1[0xd] = CONCAT71(uStack_147,uStack_148);
  param_1[0xc] = uStack_150;
  param_1[0xf] = uStack_138;
  param_1[0xe] = uStack_140;
  param_1[0x11] = uStack_128;
  param_1[0x10] = uStack_130;
  *(undefined1 *)(param_1 + 0x12) = uStack_120;
  param_1[5] = CONCAT26(uStack_182,uStack_188);
  param_1[4] = CONCAT26(uStack_18a,uStack_190);
  param_1[7] = uStack_178;
  param_1[6] = CONCAT26(uStack_17a,uStack_180);
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[1] = CONCAT26(uStack_1a2,uStack_1a8);
  *param_1 = CONCAT26(uStack_1aa,uStack_1b0);
  param_1[3] = CONCAT26(uStack_192,uStack_198);
  param_1[2] = CONCAT26(uStack_19a,uStack_1a0);
  return;
}



/* Entry: 00079e48; end: 00079eff;  */

void FUN_00079e48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae8e68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8e60;
  FUN_00016c74(0xae8e60,&UNK_007d1e40);
  uVar2 = 0xae8e70;
  func_0x0007a7ac(0xae8e70,0xae8e78,&UNK_007d1e48,
                  PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_00999260);
  uVar3 = 0xae7910;
  func_0x0007a7ac(0xae7910,0xae7918,&UNK_007cea00,
                  PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_009994a8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8e68 = puVar4;
  return;
}



/* Entry: 00079f00; end: 00079f0b;  */

void FUN_00079f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 00079f0c; end: 00079faf;  */

void FUN_00079f0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000000ae8e48 != -1) {
    _swift_once(0xae8e48,FUN_00079750);
  }
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uVar1 = 0xae8e60;
  func_0x000115a8(0xae8e60,&UNK_007d1e40);
  uVar2 = uVar1;
  FUN_00079e48();
  __s7SwiftUI4ViewPAAE10unredactedQryF(param_1,uVar1,uVar2);
  return;
}



/* Entry: 00079fb0; end: 0007a0d7;  */

void FUN_00079fb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 auStack_198 [104];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined6 uStack_fe;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  uStack_f8 = 0;
  func_0x0007a4c0(&uStack_c8,0x4032000000000000,1);
  uVar2 = uStack_c0;
  uVar1 = CONCAT71(uStack_b7,uStack_b8);
  uVar3 = (undefined1)uStack_b0;
  uVar4 = uStack_b0._1_1_;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_128 = 0x4028000000000000;
  uStack_120 = 0;
  uStack_118 = uStack_c8;
  uStack_110 = uStack_c0;
  uStack_100 = (undefined1)uStack_b0;
  uStack_ff = uStack_b0._1_1_;
  uStack_e8 = 0x4028000000000000;
  uStack_f0 = 0x4010000000000000;
  uStack_d8 = 0;
  uStack_e0 = 0x4010000000000000;
  uStack_d0 = 0;
  uStack_c0 = 0x4028000000000000;
  uStack_b8 = 0;
  uStack_b0 = uStack_c8;
  uStack_a8 = uVar2;
  uStack_98 = uVar3;
  uStack_97 = uVar4;
  uStack_80 = 0x4028000000000000;
  uStack_88 = 0x4010000000000000;
  uStack_70 = 0;
  uStack_78 = 0x4010000000000000;
  uStack_68 = 0;
  uStack_130 = param_2;
  uStack_108 = uVar1;
  uStack_c8 = param_2;
  uStack_90 = uStack_f8;
  func_0x0007a7f0(&uStack_130,auStack_198,0xae8ee8,&UNK_007d1fd0);
  func_0x0007a838(&uStack_c8,0xae8ee8,&UNK_007d1fd0);
  param_1[9] = uStack_e8;
  param_1[8] = uStack_f0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  *(undefined1 *)(param_1 + 0xc) = uStack_d0;
  param_1[1] = uStack_128;
  *param_1 = uStack_130;
  param_1[3] = uStack_118;
  param_1[2] = CONCAT71(uStack_11f,uStack_120);
  param_1[5] = uStack_108;
  param_1[4] = uStack_110;
  param_1[7] = CONCAT71(uStack_f7,uStack_f8);
  param_1[6] = CONCAT62(uStack_fe,CONCAT11(uStack_ff,uStack_100));
  return;
}



/* Entry: 0007a0d8; end: 0007a227;  */

void FUN_0007a0d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae8e88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8e80;
  FUN_00016c74(0xae8e80,&UNK_007d1e58);
  uVar2 = uVar1;
  func_0x0007a170();
  uVar3 = 0xae7920;
  func_0x0007a7ac(0xae7920,0xae7928,&UNK_007d19c0,
                  PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_00999198);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8e88 = puVar4;
  return;
}



/* Entry: 0007a228; end: 0007a603;  */

void FUN_0007a228(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  lVar6 = 0xae8e80;
  func_0x000115a8(0xae8e80,&UNK_007d1e58);
  lVar7 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = (undefined1)lVar7;
  lVar7 = -extraout_x8;
  puVar9 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar7);
  if (lRam0000000000ae8e48 != -1) {
    uVar5 = 0x48;
    _swift_once(0xae8e48,FUN_00079750);
  }
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uVar4 = uRam0000000000b64830;
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x24));
  lVar8 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar8 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar8 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar8);
  auVar10 = NEON_fmov(0x4022000000000000,8);
  puVar1[1] = auVar10._8_8_;
  *puVar1 = auVar10._0_8_;
  lVar8 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24)) = 0x100;
  *puVar9 = FUN_00079fb0;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar7) = 0;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar7) = uVar4;
  (&stack0xffffffffffffffc8)[lVar7] = uVar5;
  FUN_0007a0d8();
  _swift_retain(uVar4);
  __s7SwiftUI4ViewPAAE10unredactedQryF(param_1,lVar6,lVar8);
  func_0x0007a838(puVar9,0xae8e80,&UNK_007d1e58);
  return;
}



/* Entry: 0007a604; end: 0007a69f;  */

void FUN_0007a604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_0084041c,1);
  return;
}



/* Entry: 0007a6a0; end: 0007a6ef;  */

void FUN_0007a6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_00016c74(param_2,param_3);
  uVar1 = param_2;
  (*param_4)();
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_009995c0,1);
  return;
}



/* Entry: 0007a6f0; end: 0007a6f3;  */

void FUN_0007a6f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae8eb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8eb0;
  FUN_00016c74(0xae8eb0,&UNK_007d1e78);
  uVar2 = 0xae8ec0;
  func_0x0007a7ac(0xae8ec0,0xae8ec8,&UNK_007d1fc8,PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_009996f8);
  uVar3 = 0xae7910;
  func_0x0007a7ac(0xae7910,0xae7918,&UNK_007cea00,
                  PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_009994a8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8eb8 = puVar4;
  return;
}



/* Entry: 0007a6f4; end: 0007a877;  */

void FUN_0007a6f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae8eb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8eb0;
  FUN_00016c74(0xae8eb0,&UNK_007d1e78);
  uVar2 = 0xae8ec0;
  func_0x0007a7ac(0xae8ec0,0xae8ec8,&UNK_007d1fc8,PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_009996f8);
  uVar3 = 0xae7910;
  func_0x0007a7ac(0xae7910,0xae7918,&UNK_007cea00,
                  PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_009994a8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae8eb8 = puVar4;
  return;
}



/* Entry: 0007a878; end: 0007a89b;  */

void FUN_0007a878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 0007a89c; end: 0007ab1b;  */

void __s7SwiftUI4TextV21SnapchatWidgetsSharedE02scC0_4withQrSS_AD11SCTextStyleOtFZ
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  
  uVar11 = (uint)param_6;
  puStack_b8 = param_1;
  lStack_90 = param_3;
  plStack_88 = (long *)param_4;
  FUN_00033a8c();
  _swift_bridgeObjectRetain(param_4);
  plVar3 = &lStack_90;
  puVar8 = PTR___sSSN_0099b040;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  if ((uVar11 & 0xff) == 1) {
    __s7SwiftUI4FontV6WeightV8semiboldAEvgZ();
  }
  else {
    __s7SwiftUI4FontV6WeightV7regularAEvgZ();
  }
  lVar4 = 0;
  __s7SwiftUI4FontV6DesignOMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x68))
            (lVar13,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7roundedyA2EmFWC_00999538,lVar4);
  lVar5 = lVar13;
  __s7SwiftUI4FontV6system4size6weight6designAC12CoreGraphics7CGFloatV_AC6WeightVAC6DesignOtFZ
            (param_5,param_2);
  (**(code **)(lVar12 + 8))(lVar13,lVar4);
  lVar4 = lVar5;
  plVar9 = plVar3;
  puVar10 = puVar8;
  lVar12 = param_3;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(lVar5);
  FUN_0004c384(plVar3,puVar8,param_3);
  _swift_bridgeObjectRelease(param_6);
  iVar2 = 2;
  lStack_90 = lVar4;
  plStack_88 = plVar9;
  uStack_80 = (char)puVar10;
  lStack_78 = lVar12;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar7 = auStack_c0 + 0x10;
    puStack_b0 = (undefined *)lVar4;
    plStack_a8 = plVar9;
    uStack_a0 = (char)puVar10;
    lStack_98 = lVar12;
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
              (puVar7,PTR___s7SwiftUI4TextVN_00999590,PTR___s7SwiftUI4TextVAA4ViewAAWP_00999580);
  }
  else {
    lVar5 = 0xae8f00;
    func_0x000115a8(0xae8f00,&UNK_007d1ff0);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar1 = PTR___s7SwiftUI4TextVN_00999590;
    puVar8 = PTR___s7SwiftUI4TextVAA4ViewAAWP_00999580;
    puVar7 = auStack_c0 + -extraout_x8_00;
    __s7SwiftUI4ViewP9WidgetKitE16widgetAccentableyQrSbF
              (puVar7,1,PTR___s7SwiftUI4TextVN_00999590,PTR___s7SwiftUI4TextVAA4ViewAAWP_00999580);
    puStack_b0 = puVar1;
    plStack_a8 = (long *)puVar8;
    puVar6 = auStack_c0 + 0x10;
    _swift_getOpaqueTypeConformance
              (puVar6,PTR___s7SwiftUI4ViewP9WidgetKitE16widgetAccentableyQrSbFQOMQ_00999900,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(puVar7,lVar5,puVar6);
    FUN_0004c384(lVar4,plVar9,puVar10);
    _swift_bridgeObjectRelease(lVar12);
  }
  *puStack_b8 = puVar7;
  return;
}



/* Entry: 0007ab1c; end: 0007abcb;  */

int FUN_0007ab1c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


