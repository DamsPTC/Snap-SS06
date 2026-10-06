/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049ff010; end: 1049ff047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049ff010(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4220);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4220) + 8))
  ;
  return auVar1;
}



/* Entry: 1049ff048; end: 1049ff093;  */

void FUN_1049ff048(undefined8 param_1)

{
  func_0x000104a009e4();
  _objc_allocWithZone();
  _objc_msgSend();
  uRam00000001130a4218 = param_1;
  return;
}



/* Entry: 1049ff094; end: 1049ff0d3;  */

void FUN_1049ff094(void)

{
  if (lRam000000011309ffa8 != -1) {
    _swift_once(0x11309ffa8,FUN_1049ff048);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a4218);
  return;
}



/* Entry: 1049ff0d4; end: 1049ff113; +[FBSDKFeatureManager shared] */

void FUN_1049ff0d4(void)

{
  if (lRam000000011309ffa8 != -1) {
    _swift_once(0x11309ffa8,FUN_1049ff048);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130a4218);
  return;
}



/* Entry: 1049ff114; end: 1049ff37b;  */

/* WARNING: Removing unreachable block (ram,0x0001049ff178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049ff114(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  uint uVar8;
  long unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _swift_getObjectType();
  if ((param_1 | 0x1000000) == 0x1000000) {
    uVar8 = 1;
    goto LAB_1049ff184;
  }
  ppuVar6 = &PTR_DAT_1130a4228;
  FUN_1049b1a14(&uStack_78);
  uVar2 = uStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130a4220);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_1130a4220))[1];
  uVar3 = param_1;
  FUN_104a00348(param_1);
  uStack_78 = uVar4;
  uStack_70 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(uVar3,ppuVar6);
  _swift_bridgeObjectRelease(ppuVar6);
  uVar3 = uStack_70;
  uVar4 = uStack_78;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_78,uStack_70);
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = uStack_68;
  puVar9 = PTR_s_fb_stringForKey__1125c5f98;
  _objc_msgSend(uStack_68,PTR_s_fb_stringForKey__1125c5f98,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar3 == 0) {
    uVar10 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar10 = uVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar3);
  }
  uVar3 = uVar2;
  puVar7 = PTR_s_sdkVersion_112632650;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar3);
  if (puVar9 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar7);
LAB_1049ff300:
    if ((param_1 & 0xff) == 0) {
      if ((param_1 & 0xff00) == 0) {
        uVar3 = 0;
        if ((param_1 & 0xff0000) != 0) {
          uVar3 = param_1 & 0xff000000;
        }
      }
      else {
        uVar3 = param_1 & 0xffff0000;
      }
    }
    else {
      uVar3 = param_1 & 0xffffff00;
    }
    if ((uVar3 == param_1) || (FUN_1049ff114(), (uVar3 & 1) != 0)) {
      FUN_1049ff414(param_1);
      uVar8 = (uint)param_1;
      _swift_unknownObjectRelease(uStack_68);
      _swift_unknownObjectRelease(uVar2);
      goto LAB_1049ff184;
    }
LAB_1049ff368:
    _swift_unknownObjectRelease(uStack_68);
    _swift_unknownObjectRelease(uVar2);
  }
  else {
    if ((uVar10 != uVar5) || (puVar9 != puVar7)) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar10,puVar9,uVar5,puVar7,0);
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puVar7);
      if ((uVar10 & 1) == 0) goto LAB_1049ff300;
      goto LAB_1049ff368;
    }
    _swift_unknownObjectRelease(uStack_68);
    _swift_unknownObjectRelease(uVar2);
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar7);
  }
  uVar8 = 0;
LAB_1049ff184:
  return uVar8 & 1;
}



/* Entry: 1049ff37c; end: 1049ff3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049ff37c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4220) + 8);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4220);
  FUN_104a00348();
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return auVar2;
}



/* Entry: 1049ff3e8; end: 1049ff413;  */

undefined1  [16] FUN_1049ff3e8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((param_1 & 0xff0000) != 0) {
    uVar1 = param_1 & 0xff000000;
  }
  if ((param_1 & 0xff00) != 0) {
    uVar1 = param_1 & 0xffff0000;
  }
  if ((param_1 & 0xff) != 0) {
    uVar1 = param_1 & 0xffffff00;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1049ff414; end: 1049ff593;  */

/* WARNING: Removing unreachable block (ram,0x0001049ff454) */

undefined8 FUN_1049ff414(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  ppuVar4 = &PTR_DAT_1130a4228;
  FUN_1049b1a14(&uStack_58);
  uVar2 = uStack_58;
  _swift_unknownObjectRelease(uStack_50);
  _swift_unknownObjectRelease(uStack_48);
  FUN_104a00348(param_1);
  uStack_58 = 0x6165464b44534246;
  uStack_50 = 0xec00000065727574;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(ppuVar4);
  uVar1 = uStack_50;
  uVar3 = uStack_58;
  uVar5 = 1;
  if (param_1 < 0x1010100) {
    if (((param_1 == 0) || (param_1 == 0x1000000)) || (param_1 == 0x1010000)) goto LAB_1049ff530;
  }
  else if (param_1 < 0x3000000) {
    if ((param_1 == 0x1010100) || (param_1 == 0x2000000)) goto LAB_1049ff530;
  }
  else if ((param_1 == 0x3000000) || (param_1 == 0x4000000)) goto LAB_1049ff530;
  uVar5 = 0;
LAB_1049ff530:
  _swift_getObjCClassFromMetadata(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  _objc_msgSend(uVar2,PTR_s_boolForKey_defaultValue__1125a5678,uVar3,uVar5);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1049ff594; end: 1049ff5cf; -[FBSDKFeatureManager isEnabled:] */

uint FUN_1049ff594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049ff114(param_3);
  _objc_release(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1049ff5d0; end: 1049ff86f;  */

/* WARNING: Removing unreachable block (ram,0x0001049ff624) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ff5d0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  _swift_getObjectType();
  ppuVar8 = &PTR_DAT_1130a4228;
  FUN_1049b1a14(&puStack_98);
  puVar3 = puStack_88;
  puVar2 = puStack_90;
  puVar7 = puStack_98;
  puVar5 = *(undefined **)(unaff_x20 + _DAT_1130a4220);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_1130a4220))[1];
  uVar4 = param_1;
  FUN_104a00348(param_1);
  puStack_98 = puVar5;
  puStack_90 = (undefined *)uVar1;
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(uVar4,ppuVar8);
  _swift_bridgeObjectRelease(ppuVar8);
  puVar5 = puStack_90;
  puVar11 = puStack_98;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_98,puStack_90);
  _swift_bridgeObjectRelease(puVar5);
  puVar5 = puVar3;
  puVar10 = PTR_s_fb_stringForKey__1125c5f98;
  _objc_msgSend(puVar3,PTR_s_fb_stringForKey__1125c5f98,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  if (puVar5 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar11 = puVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar5);
  }
  puVar5 = puVar2;
  puVar9 = PTR_s_sdkVersion_112632650;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(puVar5);
  if (puVar10 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar9);
LAB_1049ff79c:
    _swift_getObjCClassFromMetadata(puVar7);
    puVar5 = &UNK_1107bd9f0;
    _swift_allocObject(&UNK_1107bd9f0,0x30,7);
    *(code **)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x28) = param_1;
    pcStack_78 = FUN_104a00960;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = (undefined *)0x42000000;
    puStack_88 = &UNK_100ff4e10;
    puStack_80 = &UNK_1107bda08;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar5;
    __Block_copy(ppuVar8);
    puVar5 = puStack_70;
    _swift_retain(param_3);
    _objc_retain();
    _swift_release(puVar5);
    _objc_msgSend(puVar7,PTR_s_loadGateKeepers__112604788,ppuVar8);
    __Block_release(ppuVar8);
  }
  else {
    if ((puVar11 == puVar6) && (puVar10 == puVar9)) {
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar9);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar11,puVar10,puVar6,puVar9,0);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar9);
      if (((ulong)puVar11 & 1) == 0) goto LAB_1049ff79c;
    }
    (*param_2)(0);
  }
  _swift_unknownObjectRelease(puVar3);
  _swift_unknownObjectRelease(puVar2);
  return;
}



/* Entry: 1049ff870; end: 1049ff8eb; -[FBSDKFeatureManager checkFeature:completionBlock:] */

void FUN_1049ff870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  __Block_copy();
  puVar1 = &UNK_1107bdad0;
  _swift_allocObject(&UNK_1107bdad0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  _objc_retain(param_1);
  FUN_1049ff5d0(param_3,FUN_104a00ba8,puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1049ff8ec; end: 1049ffa1b;  */

/* WARNING: Removing unreachable block (ram,0x0001049ff934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ff8ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  FUN_1049b1a14(&uStack_68);
  uVar2 = uStack_60;
  _swift_unknownObjectRetain(uStack_58);
  puVar5 = PTR_s_sdkVersion_112632650;
  _objc_msgSend(uStack_60,PTR_s_sdkVersion_112632650);
  uVar3 = uStack_60;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a4220);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_1130a4220))[1];
  FUN_104a00348(param_1);
  uStack_68 = uVar1;
  uStack_60 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(param_1,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  uVar1 = uStack_60;
  uVar4 = uStack_68;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_68,uStack_60);
  _swift_bridgeObjectRelease(uVar1);
  _objc_msgSend(uStack_58,PTR_s_fb_setObject_forKey__1125c5f88,uVar3,uVar4);
  _swift_unknownObjectRelease(uVar2);
  _swift_unknownObjectRelease_n(uStack_58,2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



/* Entry: 1049ffa1c; end: 1049ffa4b; -[FBSDKFeatureManager disableFeature:] */

void FUN_1049ffa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049ff8ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049ffa4c; end: 1049ffa4f;  */

undefined1  [16] FUN_1049ffa4c(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar3 = 0xe400000000000000;
  uVar4 = 0x454e4f4e;
  uVar11 = uVar4;
  if ((long)param_1 < 0x1010601) {
    if ((long)param_1 < 0x1010403) {
      if (0x10102ff < (long)param_1) {
        if (0x1010400 < (long)param_1) {
          uVar5 = 0x401;
          uVar8 = 0x6574736567677553;
          uVar11 = 0xef73746e65764564;
          uVar10 = 0x402;
          pcVar7 = "IntelligentIntegrity";
          goto LAB_104a007c8;
        }
        if (param_1 == 0x1010300) {
          auVar17._8_8_ = 0xe300000000000000;
          auVar17._0_8_ = 0x4d4141;
          return auVar17;
        }
        uVar6 = 0x1010400;
        pcVar7 = "PrivacyProtection";
LAB_104a00588:
        uVar8 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
        uVar9 = 0xd000000000000011;
        goto LAB_104a008ec;
      }
      if (0x10100ff < (long)param_1) {
        if (param_1 == 0x1010100) {
          auVar18._8_8_ = 0xee0073746e657645;
          auVar18._0_8_ = 0x7373656c65646f43;
          return auVar18;
        }
        uVar6 = 0x1010200;
        uVar8 = 0x800000010f229a80;
        uVar9 = 0xd000000000000018;
        goto LAB_104a008ec;
      }
      uVar6 = 0x1000000;
      uVar8 = 0xe700000000000000;
      uVar9 = 0x74694b65726f43;
      bVar2 = param_1 == 0x1010000;
      uVar3 = 0xe900000000000073;
      uVar11 = 0x746e657645707041;
    }
    else {
      if (0x1010406 < (long)param_1) {
        if (0x10104ff < (long)param_1) {
          uVar6 = 0x1010500;
          uVar8 = 0x800000010f229a20;
          uVar9 = 0xd000000000000011;
          uVar3 = 0xeb000000006b726f;
          uVar11 = 0x7774654e64414b53;
          if (param_1 != 0x1010600) {
            uVar3 = 0xe400000000000000;
            uVar11 = uVar4;
          }
          goto LAB_104a008ec;
        }
        uVar5 = 0x407;
        uVar8 = 0xd000000000000014;
        uVar11 = 0x800000010f229900;
        uVar3 = 0x800000010f2298e0;
        bVar2 = param_1 == 0x1010408;
        uVar9 = 0xd000000000000015;
        if (!bVar2) {
          uVar9 = uVar4;
        }
LAB_104a0087c:
        if (!bVar2) {
          uVar3 = 0xe400000000000000;
        }
LAB_104a00880:
        if (param_1 != (uVar5 | 0x1010000)) {
          uVar11 = uVar3;
          uVar8 = uVar9;
        }
        auVar14._8_8_ = uVar11;
        auVar14._0_8_ = uVar8;
        return auVar14;
      }
      if ((long)param_1 < 0x1010405) {
        uVar6 = 0x1010403;
        uVar8 = 0xec00000074736575;
        uVar9 = 0x7165526c65646f4d;
        bVar2 = param_1 == 0x1010404;
        uVar3 = 0xed000065646f4d64;
        uVar11 = 0x65746365746f7250;
      }
      else {
        uVar6 = 0x1010405;
        uVar8 = 0x800000010f229920;
        uVar9 = 0xd000000000000010;
        bVar2 = param_1 == 0x1010406;
        uVar3 = 0xef73746e65764574;
        uVar11 = 0x73696c6b636f6c42;
      }
    }
  }
  else {
    if (0x1010804 < (long)param_1) {
      if ((long)param_1 < 0x1020101) {
        if ((long)param_1 < 0x1020000) {
          uVar5 = 0x805;
          uVar8 = 0xd000000000000014;
          uVar11 = 0x800000010f229980;
          uVar10 = 0x900;
          pcVar7 = "AppEventsCloudbridge";
LAB_104a007c8:
          uVar3 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
          uVar9 = 0xd000000000000014;
          if (param_1 != (uVar10 | 0x1010000)) {
            uVar3 = 0xe400000000000000;
            uVar9 = uVar4;
          }
          goto LAB_104a00880;
        }
        uVar6 = 0x1020000;
        uVar8 = 0xea0000000000746e;
        uVar9 = 0x656d757274736e49;
        uVar5 = 0x1020100;
        uVar11 = 0x526873617243;
      }
      else {
        if (0x1ffffff < (long)param_1) {
          if (param_1 == 0x2000000) {
            auVar19._8_8_ = 0xe800000000000000;
            auVar19._0_8_ = 0x74694b6e69676f4c;
            return auVar19;
          }
          if (param_1 == 0x3000000) {
            auVar16._8_8_ = 0xe800000000000000;
            auVar16._0_8_ = 0x74694b6572616853;
            return auVar16;
          }
          uVar6 = 0x4000000;
          pcVar7 = "GamingServicesKit";
          goto LAB_104a00588;
        }
        uVar6 = 0x1020101;
        uVar8 = 0xeb00000000646c65;
        uVar9 = 0x6968536873617243;
        uVar5 = 0x1020200;
        uVar11 = 0x52726f727245;
      }
      uVar3 = 0xeb0000000074726f;
      uVar11 = uVar11 | 0x7065000000000000;
      if (param_1 != uVar5) {
        uVar3 = 0xe400000000000000;
        uVar11 = uVar4;
      }
      goto LAB_104a008ec;
    }
    if ((long)param_1 < 0x1010801) {
      if (0x10106ff < (long)param_1) {
        uVar5 = 0x700;
        uVar8 = 0x6967676f4c455441;
        uVar11 = 0xea0000000000676e;
        bVar2 = param_1 == 0x1010800;
        uVar3 = 0xe300000000000000;
        uVar9 = 0x4d4541;
        if (!bVar2) {
          uVar9 = uVar4;
        }
        goto LAB_104a0087c;
      }
      uVar6 = 0x1010601;
      uVar8 = 0x800000010f229a00;
      uVar9 = 0xd00000000000001a;
      bVar2 = param_1 == 0x1010602;
      uVar3 = 0xed000034566b726f;
      uVar11 = 0x7774654e64414b53;
    }
    else {
      if ((long)param_1 < 0x1010803) {
        uVar12 = 0x800000010f2299c0;
        uVar3 = 0xd000000000000012;
        if (param_1 != 0x1010802) {
          uVar12 = 0xe400000000000000;
          uVar3 = uVar4;
        }
        uVar1 = 0x800000010f2299e0;
        uVar11 = 0xd000000000000016;
        if (param_1 != 0x1010801) {
          uVar1 = uVar12;
          uVar11 = uVar3;
        }
        auVar13._8_8_ = uVar1;
        auVar13._0_8_ = uVar11;
        return auVar13;
      }
      uVar6 = 0x1010803;
      uVar8 = 0x800000010f2299a0;
      uVar9 = 0xd00000000000001e;
      bVar2 = param_1 == 0x1010804;
      uVar3 = 0xef70557465536f74;
      uVar11 = 0x75416d6541707041;
    }
  }
  if (!bVar2) {
    uVar3 = 0xe400000000000000;
    uVar11 = uVar4;
  }
LAB_104a008ec:
  if (param_1 != uVar6) {
    uVar8 = uVar3;
    uVar9 = uVar11;
  }
  auVar15._8_8_ = uVar8;
  auVar15._0_8_ = uVar9;
  return auVar15;
}



/* Entry: 1049ffa50; end: 1049ffad7; -[FBSDKFeatureManager storageKeyFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ffa50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4220);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a4220))[1];
  FUN_104a00348(param_3);
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049ffad8; end: 1049ffb5b;  */

undefined8 FUN_1049ffad8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x1010100) {
    if (param_1 == 0) {
      return uVar1;
    }
    if (param_1 == 0x1000000) {
      return uVar1;
    }
    if (param_1 == 0x1010000) {
      return uVar1;
    }
  }
  else if (param_1 < 0x3000000) {
    if ((param_1 == 0x1010100) || (param_1 == 0x2000000)) {
      return uVar1;
    }
  }
  else {
    if (param_1 == 0x3000000) {
      return uVar1;
    }
    if (param_1 == 0x4000000) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1049ffb5c; end: 1049ffb97; -[FBSDKFeatureManager checkGateKeeperFor:] */

uint FUN_1049ffb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049ff414(param_3);
  _objc_release(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1049ffb98; end: 1049ffc17; -[FBSDKFeatureManager defaultStatusFor:] */

undefined8 FUN_1049ffb98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 < 0x1010100) {
    if (param_3 == 0) {
      return uVar1;
    }
    if (param_3 == 0x1000000) {
      return uVar1;
    }
    if (param_3 == 0x1010000) {
      return uVar1;
    }
  }
  else if (param_3 < 0x3000000) {
    if ((param_3 == 0x1010100) || (param_3 == 0x2000000)) {
      return uVar1;
    }
  }
  else {
    if (param_3 == 0x3000000) {
      return uVar1;
    }
    if (param_3 == 0x4000000) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1049ffc18; end: 1049ffc4f; -[FBSDKFeatureManager featureNameFor:] */

void FUN_1049ffc18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104a00348(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1049ffc50; end: 1049ffcab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ffc50(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4220);
  *puVar1 = 0xd000000000000031;
  puVar1[1] = 0x800000010f229830;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049ffcac; end: 1049ffd0f; -[FBSDKFeatureManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ffcac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4220);
  *puVar1 = 0xd000000000000031;
  puVar1[1] = 0x800000010f229830;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049ffd10; end: 1049ffd43;  */

void FUN_1049ffd10(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049ffd44; end: 1049ffdff; -[FBSDKFeatureManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ffd44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a4220 + 8))
  ;
  return;
}



/* Entry: 1049ffe00; end: 1049ffe53;  */

undefined8 FUN_1049ffe00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjectType(param_2);
  _swift_getObjectType(param_3);
  return param_1;
}



/* Entry: 1049ffe54; end: 1049fff6b;  */

undefined8 FUN_1049ffe54(void)

{
  return 0x113815a30;
}



/* Entry: 1049fff6c; end: 104a0000b;  */

void FUN_1049fff6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_104a00bb0();
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uVar3 = uRam00000001130a3c58;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _swift_getInitializedObjCClass();
  _objc_retain();
  _objc_msgSend(puVar2,PTR_s_standardUserDefaults_112671060);
  _objc_retainAutoreleasedReturnValue();
  uRam0000000113815a48 = uVar1;
  uRam0000000113815a50 = uVar3;
  puRam0000000113815a58 = puVar2;
  return;
}



/* Entry: 104a0000c; end: 104a001d7;  */

undefined8 FUN_104a0000c(void)

{
  if (lRam000000011309ffb0 != -1) {
    _swift_once(0x11309ffb0,FUN_1049fff6c);
  }
  return 0x113815a48;
}



/* Entry: 104a001d8; end: 104a00347;  */

void FUN_104a001d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815a30,auStack_38,0,0);
  uVar2 = uRam0000000113815a40;
  uVar1 = uRam0000000113815a38;
  *param_1 = uRam0000000113815a30;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000104a009b4();
  return;
}



/* Entry: 104a00348; end: 104a0095f;  */

void FUN_104a00348(void)

{
  return;
}



/* Entry: 104a00960; end: 104a0099b;  */

void FUN_104a00960(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1049ff114(*(undefined8 *)(unaff_x20 + 0x20),uVar2);
  (*pcVar1)((uint)uVar2 & 1);
  return;
}



/* Entry: 104a0099c; end: 104a00ba7;  */

void FUN_104a0099c(long param_1,long param_2)

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



/* Entry: 104a00ba8; end: 104a00baf;  */

void FUN_104a00ba8(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 104a00bb0; end: 104a00c03;  */

void FUN_104a00bb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3160 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126adec8;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  puRam00000001130a3160 = puVar1;
  return;
}



/* Entry: 104a00c04; end: 104a00c23;  */

void FUN_104a00c04(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a00c24; end: 104a00c27;  */

undefined8 FUN_104a00c24(double param_1,double param_2,undefined8 param_3)

{
  undefined1 auStack_90 [48];
  
  _CGAffineTransformMakeScale(auStack_90,param_1 / 158.783,param_2 / 158.783);
  _CGPathCreateMutable();
  __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x4063d90e56041893,0x4063d90e56041893,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405a66d916872b02,0x405d547ae147ae14,0x40638c7ae147ae14,0x40606e1cac083127,
             0x40621d2f1a9fbe77,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4059c0d4fdf3b646,0x405ade9930be0ded,0x4059f3e76c8b4396,0x405c7c395810624e,
             0x4059d645a1cac083,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x40591bc6a7ef9db2,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405a80624dd2f1aa,0x4052ce00d1b71759,0x40584f1f8a0902de,0x4054b1495182a993,
             0x40592ae147ae147b,0x4059656872b020c5,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405b3e24dd2f1aa0,0x4050a4c154c985f0,0x405afcbc6a7ef9db,0x405312f0068db8bb,
             0x405b1126e978d4fe,0x4051af780346dc5d,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405ac8e560418937,0x404d743fe5c91d15,0x405b6b126e978d50,0x404f341205bc01a3,
             0x405bb74bc6a7ef9e,0x404d743fe5c91d15,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x40595570a3d70a3d,0x40374ea4a8c154ca,0x405afc28f5c28f5c,0x404561f212d77319,
             0x405b9322d0e56042,0x403f628240b78034,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4057c31758e21965,0x4023350cbca6e4dc,0x4057185f06f69446,0x402e79c23b7952d2,
             0x4055f7ef9db22d0e,0x402f0c06e19b90eb,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404cb96f0068db8c,0x40374ea4a8c154ca,0x4056ced77318fc50,0x4021c9049235f80a,
             0x40518d07c84b5dcc,0x402809873ffac1d3,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4049d27ef9db22d1,0x404d743fe5c91d15,0x404834bfb15b573f,0x403f4de00d1b7176,
             0x40496bfe5c91d14e,0x404561f212d77319,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4048e810624dd2f2,0x4050a4c154c985f0,0x4047f5aee631f8a1,0x404d743fe5c91d15,
             0x40488e2eb1c432ca,0x404f341205bc01a3,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404a638ef34d6a16,0x4052ce00d1b71759,0x404941ff2e48e8a7,0x4051af780346dc5d,
             0x40496ade00d1b717,0x405312f0068db8bb,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404d2cd013a92a30,0x405ab1f06f694467,0x404d0e90ff972474,0x405b874395810625,
             0x404ec61e4f765fd9,0x4054b1495182a993,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x404be29fbe76c8b4,0x405ade9930be0ded,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404a969e1b089a02,0x405d547ae147ae14,0x404bb7be76c8b439,0x405b39604189374c,
             0x404b7c710cb295ea,0x405c7c395810624e,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0,0x4063d90e56041893,0x402bbe00d1b71759,0x40611ed916872b02,0x400327ef9db22d0e,
             0x40606e1cac083127,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x4063d90e56041893,0x4063d90e56041893,auStack_90);
  return param_3;
}



/* Entry: 104a00c28; end: 104a00c6f; -[FBSDKHumanSilhouetteIcon pathWith:] */

void FUN_104a00c28(void)

{
  FUN_104a00ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a00c70; end: 104a00cab; -[FBSDKHumanSilhouetteIcon init] */

void FUN_104a00c70(undefined8 param_1)

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



/* Entry: 104a00cac; end: 104a00cdf;  */

void FUN_104a00cac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a00ce0; end: 104a01087;  */

undefined8 FUN_104a00ce0(double param_1,double param_2,undefined8 param_3)

{
  undefined1 auStack_90 [48];
  
  _CGAffineTransformMakeScale(auStack_90,param_1 / 158.783,param_2 / 158.783);
  _CGPathCreateMutable();
  __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x4063d90e56041893,0x4063d90e56041893,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405a66d916872b02,0x405d547ae147ae14,0x40638c7ae147ae14,0x40606e1cac083127,
             0x40621d2f1a9fbe77,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4059c0d4fdf3b646,0x405ade9930be0ded,0x4059f3e76c8b4396,0x405c7c395810624e,
             0x4059d645a1cac083,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x40591bc6a7ef9db2,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405a80624dd2f1aa,0x4052ce00d1b71759,0x40584f1f8a0902de,0x4054b1495182a993,
             0x40592ae147ae147b,0x4059656872b020c5,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405b3e24dd2f1aa0,0x4050a4c154c985f0,0x405afcbc6a7ef9db,0x405312f0068db8bb,
             0x405b1126e978d4fe,0x4051af780346dc5d,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x405ac8e560418937,0x404d743fe5c91d15,0x405b6b126e978d50,0x404f341205bc01a3,
             0x405bb74bc6a7ef9e,0x404d743fe5c91d15,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x40595570a3d70a3d,0x40374ea4a8c154ca,0x405afc28f5c28f5c,0x404561f212d77319,
             0x405b9322d0e56042,0x403f628240b78034,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4057c31758e21965,0x4023350cbca6e4dc,0x4057185f06f69446,0x402e79c23b7952d2,
             0x4055f7ef9db22d0e,0x402f0c06e19b90eb,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404cb96f0068db8c,0x40374ea4a8c154ca,0x4056ced77318fc50,0x4021c9049235f80a,
             0x40518d07c84b5dcc,0x402809873ffac1d3,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4049d27ef9db22d1,0x404d743fe5c91d15,0x404834bfb15b573f,0x403f4de00d1b7176,
             0x40496bfe5c91d14e,0x404561f212d77319,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x4048e810624dd2f2,0x4050a4c154c985f0,0x4047f5aee631f8a1,0x404d743fe5c91d15,
             0x40488e2eb1c432ca,0x404f341205bc01a3,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404a638ef34d6a16,0x4052ce00d1b71759,0x404941ff2e48e8a7,0x4051af780346dc5d,
             0x40496ade00d1b717,0x405312f0068db8bb,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404d2cd013a92a30,0x405ab1f06f694467,0x404d0e90ff972474,0x405b874395810625,
             0x404ec61e4f765fd9,0x4054b1495182a993,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x404be29fbe76c8b4,0x405ade9930be0ded,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0x404a969e1b089a02,0x405d547ae147ae14,0x404bb7be76c8b439,0x405b39604189374c,
             0x404b7c710cb295ea,0x405c7c395810624e,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE8addCurve2to8control18control29transformySo7CGPointV_A2JSo17CGAffineTransformVtF
            (0,0x4063d90e56041893,0x402bbe00d1b71759,0x40611ed916872b02,0x400327ef9db22d0e,
             0x40606e1cac083127,auStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (0x4063d90e56041893,0x4063d90e56041893,auStack_90);
  return param_3;
}



/* Entry: 104a01088; end: 104a010a7;  */

void FUN_104a01088(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9558);
  return;
}



/* Entry: 104a010a8; end: 104a010c7;  */

void FUN_104a010a8(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a010c8; end: 104a0126f;  */

void FUN_104a010c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x20) = 0x616e5f746e657665;
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x28) = 0xea0000000000656d;
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  *(undefined **)(lVar3 + 0x48) = puVar1;
  *(undefined8 *)(lVar3 + 0x50) = 0x72615f746e657665;
  *(undefined8 *)(lVar3 + 0x58) = 0xea00000000007367;
  uVar4 = 0x11309c420;
  func_0x0001048db364();
  *(undefined8 *)(lVar3 + 0x78) = uVar4;
  *(undefined8 *)(lVar3 + 0x60) = param_3;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  _swift_setDeallocating(lVar3);
  uVar4 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy((undefined8 *)(lVar3 + 0x20),2,uVar4);
  lVar3 = lVar5;
  func_0x00010018cc3c(lVar5);
  _swift_bridgeObjectRelease(lVar5);
  lVar5 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
             PTR___ss11AnyHashableVSHsWP_11034e450);
  _swift_bridgeObjectRelease(lVar3);
  _objc_msgSend(puVar2,PTR_s_postNotificationName_object_user_11261ec88,
                &PTR____CFConstantStringClassReference_110da4f58);
  _objc_release(puVar2);
  _objc_release(lVar5);
  return;
}



/* Entry: 104a01270; end: 104a012ff; -[FBSDKMeasurementEvent postNotificationForEventName:args:] */

void FUN_104a01270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_retain(param_1);
  FUN_104a010c8(param_3,param_2,param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 104a01300; end: 104a01333;  */

void FUN_104a01300(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a01334; end: 104a0136f; -[FBSDKMeasurementEvent init] */

void FUN_104a01334(undefined8 param_1)

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



/* Entry: 104a01370; end: 104a013a3;  */

void FUN_104a01370(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a013a4; end: 104a013c3;  */

void FUN_104a013a4(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9630);
  return;
}



/* Entry: 104a013c4; end: 104a01433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a013c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130a42d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a42e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a42e8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a01434; end: 104a01523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a01434(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a42d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a42d8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 104a01524; end: 104a01593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a01524(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_1130a42d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a42e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a42e8) = param_2;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a01594; end: 104a01697; -[FBSDKPaymentObserver initWithPaymentQueue:paymentProductRequestorFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a01594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_1130a42d8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130a42e0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130a42e8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104a01698; end: 104a01723; -[FBSDKPaymentObserver startObservingTransactions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a01698(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = _DAT_1130a42d8;
  _swift_beginAccess(param_1 + _DAT_1130a42d8,auStack_48,1,0);
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    _objc_msgSend(*(undefined8 *)(param_1 + _DAT_1130a42e0),PTR_s_addTransactionObserver__11259cb28,
                  param_1);
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 104a01724; end: 104a0179b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a01724(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _objc_sync_enter();
  lVar1 = _DAT_1130a42d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a42d8,auStack_38,1,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    _objc_msgSend(*(undefined8 *)(unaff_x20 + _DAT_1130a42e0),
                  PTR_s_removeTransactionObserver__112629548);
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  _objc_sync_exit();
  return;
}



/* Entry: 104a0179c; end: 104a0181f; -[FBSDKPaymentObserver stopObservingTransactions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0179c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = _DAT_1130a42d8;
  _swift_beginAccess(param_1 + _DAT_1130a42d8,auStack_38,1,0);
  if (*(char *)(param_1 + lVar1) == '\x01') {
    _objc_msgSend(*(undefined8 *)(param_1 + _DAT_1130a42e0),
                  PTR_s_removeTransactionObserver__112629548,param_1);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 104a01820; end: 104a0186b;  */

void FUN_104a01820(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a0186c; end: 104a018cb; -[FBSDKPaymentObserver init] */

void FUN_104a0186c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit._PaymentObserver",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a01898);
  (*pcVar1)();
}



/* Entry: 104a018cc; end: 104a01903; -[FBSDKPaymentObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a018cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a42e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130a42e8));
  return;
}



/* Entry: 104a01904; end: 104a0190b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a01904(undefined8 param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xfffffffffffff8) + 0x10);
    lVar1 = _DAT_1130a42e8;
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar6 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar1 = _DAT_1130a42e8;
  }
  _DAT_1130a42e8 = lVar1;
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a01ae4);
      (*pcVar2)();
    }
    uVar7 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_2 + uVar7 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar3 = uVar7;
        FUN_104999cd8(uVar7,param_2);
      }
      uVar4 = uVar3;
      _objc_msgSend();
      uVar5 = uVar3;
      if (uVar4 < 4) {
        uVar5 = *(ulong *)(unaff_x20 + lVar1);
        _objc_msgSend(uVar5,PTR_s_createRequestorWithTransaction__112525598,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend();
        _objc_release(uVar3);
      }
      uVar7 = uVar7 + 1;
      _objc_release(uVar5);
    } while (uVar6 != uVar7);
  }
  return;
}



/* Entry: 104a0190c; end: 104a0195b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0190c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a42e8);
  _objc_msgSend(uVar1,PTR_s_createRequestorWithTransaction__112525598,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a0195c; end: 104a019d3; -[FBSDKPaymentObserver paymentQueue:updatedTransactions:] */

void FUN_104a0195c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_104a01b18(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a019d4(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 104a019d4; end: 104a01ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a019d4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
    lVar1 = _DAT_1130a42e8;
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar6 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar1 = _DAT_1130a42e8;
  }
  _DAT_1130a42e8 = lVar1;
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a01ae4);
      (*pcVar2)();
    }
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar3 = uVar7;
        FUN_104999cd8(uVar7,param_1);
      }
      uVar4 = uVar3;
      _objc_msgSend();
      uVar5 = uVar3;
      if (uVar4 < 4) {
        uVar5 = *(ulong *)(unaff_x20 + lVar1);
        _objc_msgSend(uVar5,PTR_s_createRequestorWithTransaction__112525598,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend();
        _objc_release(uVar3);
      }
      uVar7 = uVar7 + 1;
      _objc_release(uVar5);
    } while (uVar6 != uVar7);
  }
  return;
}



/* Entry: 104a01ae4; end: 104a01b0f;  */

void FUN_104a01ae4(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e96e0);
  return;
}



/* Entry: 104a01b10; end: 104a01b17;  */

void FUN_104a01b10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104a01b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Entry: 104a01b18; end: 104a01b5b;  */

void FUN_104a01b18(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a2908 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  puRam00000001130a2908 = puVar1;
  return;
}



/* Entry: 104a01b5c; end: 104a01c4b;  */

void FUN_104a01b5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_2;
  _swift_getObjectType();
  uVar2 = param_3;
  _swift_getObjectType();
  uVar3 = param_5;
  _swift_getObjectType();
  uVar4 = param_6;
  _swift_getObjectType();
  uVar5 = param_7;
  _swift_getObjectType();
  uVar6 = param_8;
  _swift_getObjectType();
  FUN_104a026b8(&uStack_98,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1,uVar4,uVar6
                ,uVar2,uVar3,uVar5);
  param_1[1] = uStack_90;
  *param_1 = uStack_98;
  param_1[3] = uStack_80;
  param_1[2] = uStack_88;
  param_1[5] = uStack_70;
  param_1[4] = uStack_78;
  param_1[6] = uStack_68;
  return;
}



/* Entry: 104a01c4c; end: 104a01c6b;  */

void FUN_104a01c4c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a01c6c; end: 104a01db3;  */

/* WARNING: Removing unreachable block (ram,0x000104a01d60) */

undefined * FUN_104a01c6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  FUN_1049b1a14(&uStack_98);
  puVar1 = PTR_PTR_1126adf48;
  _objc_allocWithZone(PTR_PTR_1126adf48);
  _swift_getObjCClassFromMetadata(uStack_88);
  _objc_msgSend(puVar1,PTR_s_initWithTransaction_settings_eve_1125255a8,param_1,uStack_98,uStack_90,
                uStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  _swift_unknownObjectRelease(uStack_68);
  _swift_unknownObjectRelease(uStack_70);
  _swift_unknownObjectRelease(uStack_78);
  _swift_unknownObjectRelease(uStack_80);
  _swift_unknownObjectRelease(uStack_90);
  _swift_unknownObjectRelease(uStack_98);
  return puVar1;
}



/* Entry: 104a01db4; end: 104a01e0f; -[FBSDKPaymentProductRequestorFactory createRequestorWithTransaction:] */

void FUN_104a01db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104a01c6c(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a01e10; end: 104a01e43;  */

void FUN_104a01e10(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a01e44; end: 104a01e7f; -[FBSDKPaymentProductRequestorFactory init] */

void FUN_104a01e44(undefined8 param_1)

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



/* Entry: 104a01e80; end: 104a01eb3;  */

void FUN_104a01e80(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a01eb4; end: 104a021bf;  */

void FUN_104a01eb4(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*unaff_x20);
  return;
}



/* Entry: 104a021c0; end: 104a02307;  */

void FUN_104a021c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uVar2 = uRam00000001130a3c58;
  puVar1 = PTR_PTR_1126add60;
  _swift_getInitializedObjCClass();
  _objc_retain();
  _objc_msgSend(puVar1,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_104a00bb0();
  puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae038;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar6 = PTR_PTR_1126ae040;
  _objc_allocWithZone();
  _objc_msgSend();
  FUN_1049a8368(0);
  _swift_getObjCClassFromMetadata();
  puVar7 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uRam0000000113815a98 = uVar2;
  puRam0000000113815aa0 = puVar1;
  uRam0000000113815aa8 = uVar3;
  puRam0000000113815ab0 = puVar4;
  puRam0000000113815ab8 = puVar5;
  puRam0000000113815ac0 = puVar6;
  puRam0000000113815ac8 = puVar7;
  return;
}



/* Entry: 104a02308; end: 104a0250b;  */

undefined8 FUN_104a02308(void)

{
  if (lRam000000011309ffb8 != -1) {
    _swift_once(0x11309ffb8,FUN_104a021c0);
  }
  return 0x113815a98;
}



/* Entry: 104a0250c; end: 104a0256f;  */

void FUN_104a0250c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815a60,auStack_38,0,0);
  uVar6 = uRam0000000113815a90;
  uVar5 = uRam0000000113815a88;
  uVar4 = uRam0000000113815a80;
  uVar3 = uRam0000000113815a78;
  uVar2 = uRam0000000113815a70;
  uVar1 = uRam0000000113815a68;
  *param_1 = uRam0000000113815a60;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  FUN_104a026cc();
  return;
}



/* Entry: 104a02570; end: 104a025eb;  */

void FUN_104a02570(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_48 [24];
  
  uVar10 = param_1[5];
  uVar9 = param_1[4];
  uVar8 = param_1[6];
  _swift_beginAccess(0x113815a60,auStack_48,1,0);
  uVar7 = uRam0000000113815a90;
  uVar6 = uRam0000000113815a88;
  uVar5 = uRam0000000113815a80;
  uVar4 = uRam0000000113815a78;
  uVar3 = uRam0000000113815a70;
  uVar2 = uRam0000000113815a68;
  uVar1 = uRam0000000113815a60;
  uRam0000000113815a68 = param_1[1];
  uRam0000000113815a60 = *param_1;
  uRam0000000113815a78 = param_1[3];
  uRam0000000113815a70 = param_1[2];
  uRam0000000113815a80 = uVar9;
  uRam0000000113815a88 = uVar10;
  uRam0000000113815a90 = uVar8;
  FUN_1049afbd0(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Entry: 104a025ec; end: 104a026b7;  */

undefined1  [16] FUN_104a025ec(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815a60,param_1,0x21,0);
  auVar1._8_8_ = 0x113815a60;
  auVar1._0_8_ = 0x104a02a38;
  return auVar1;
}



/* Entry: 104a026b8; end: 104a026cb;  */

void FUN_104a026b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  return;
}



/* Entry: 104a026cc; end: 104a02a3b;  */

void FUN_104a026cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(param_4);
    _swift_unknownObjectRetain(param_5);
    _swift_unknownObjectRetain(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_7);
    return;
  }
  return;
}



/* Entry: 104a02a3c; end: 104a02a87; -[FBSDKRestrictiveEventFilter eventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4378);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a4378))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a02a88; end: 104a02abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a02a88(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4378);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4378) + 8))
  ;
  return auVar1;
}



/* Entry: 104a02ac0; end: 104a02b1b; -[FBSDKRestrictiveEventFilter restrictiveParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4380);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a02b1c; end: 104a02b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02b1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a4380));
  return;
}



/* Entry: 104a02b2c; end: 104a02c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4378);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130a4380) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a02c04; end: 104a02cab; -[FBSDKRestrictiveEventFilter initWithEventName:restrictiveParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02c04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4378);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130a4380) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a02cac; end: 104a02cf7;  */

void FUN_104a02cac(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a02cf8; end: 104a02d57; -[FBSDKRestrictiveEventFilter init] */

void FUN_104a02cf8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKCoreKit._RestrictiveEventFilter",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a02d24);
  (*pcVar1)();
}



/* Entry: 104a02d58; end: 104a02dbf; -[FBSDKRestrictiveEventFilter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02d58(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4378 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a4380));
  return;
}



/* Entry: 104a02dc0; end: 104a02dc7;  */

void FUN_104a02dc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104a02dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 104a02dc8; end: 104a02e23; -[FBSDKSKAdNetworkEvent eventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02dc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a43b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a43b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a02e24; end: 104a02e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a02e24(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a43b0);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a43b0) + 8))
  ;
  return auVar1;
}



/* Entry: 104a02e5c; end: 104a02edf; -[FBSDKSKAdNetworkEvent values] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02e5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a43b8;
  _swift_beginAccess(param_1 + _DAT_1130a43b8,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104a02ee0; end: 104a02f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02ee0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a43b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a43b8,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 104a02f24; end: 104a02fab; -[FBSDKSKAdNetworkEvent setValues:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02f24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sSdN_11034dd90,PTR___sSSSHsWP_11034da90);
  }
  lVar1 = _DAT_1130a43b8;
  _swift_beginAccess(param_1 + _DAT_1130a43b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a02fac; end: 104a03043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a02fac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a43b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a43b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a03044; end: 104a03073;  */

void FUN_104a03044(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104a03074(param_1);
  return;
}



/* Entry: 104a03074; end: 104a0353b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a03074(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _swift_getObjectType();
  lVar2 = _DAT_1130a43b8;
  *(undefined8 *)(unaff_x20 + _DAT_1130a43b8) = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_104a03188:
    _swift_bridgeObjectRelease(param_1);
LAB_104a03190:
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar2));
    _swift_deallocPartialClassInstance();
    return;
  }
  _swift_bridgeObjectRetain(param_1);
  lVar4 = 0x616e5f746e657665;
  uVar11 = 0xea0000000000656d;
  func_0x000100029284(0x616e5f746e657665);
  if ((uVar11 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
    goto LAB_104a03188;
  }
  func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,&puStack_90);
  _swift_bridgeObjectRelease(param_1);
  puVar1 = PTR___sypN_11034f1a8;
  puVar5 = &uStack_a0;
  _swift_dynamicCast(puVar5,&puStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)puVar5 & 1) == 0) goto LAB_104a03188;
  puVar5 = (ulong *)(unaff_x20 + _DAT_1130a43b0);
  *puVar5 = uStack_a0;
  puVar5[1] = (ulong)puStack_98;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar4 = 0x7365756c6176;
    uVar11 = 0;
    func_0x000100029284(0x7365756c6176);
    if ((uVar11 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,&puStack_90);
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104a031e4;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  uStack_88 = 0;
  puStack_90 = (undefined *)0x0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_104a031e4:
  _swift_bridgeObjectRelease(param_1);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&puStack_90);
  }
  else {
    uVar9 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    puVar6 = &uStack_a0;
    _swift_dynamicCast(puVar6,&puStack_90,puVar1 + 8,uVar9,6);
    uVar11 = uStack_a0;
    puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if (((ulong)puVar6 & 1) != 0) {
      uVar16 = *(ulong *)(uStack_a0 + 0x10);
      _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
      if (uVar16 != 0) {
        uVar18 = 0;
        do {
          if (*(ulong *)(uVar11 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a03524);
            (*pcVar3)();
          }
          puVar17 = *(undefined **)(uVar11 + uVar18 * 8 + 0x20);
          if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104a03500:
            _swift_bridgeObjectRelease(puVar10);
            _swift_bridgeObjectRelease(uVar11);
LAB_104a0350c:
            _swift_bridgeObjectRelease(puVar5[1]);
            goto LAB_104a03190;
          }
          _swift_bridgeObjectRetain_n(puVar17,2);
          lVar4 = 0x79636e6572727563;
          uVar7 = 0;
          func_0x000100029284(0x79636e6572727563);
          if ((uVar7 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar10);
            _swift_bridgeObjectRelease(uVar11);
            _swift_bridgeObjectRelease_n(puVar17,2);
            goto LAB_104a0350c;
          }
          func_0x0001000bb420(*(long *)(puVar17 + 0x38) + lVar4 * 0x20,&puStack_90);
          _swift_bridgeObjectRelease(puVar17);
          puVar6 = &uStack_a0;
          _swift_dynamicCast(puVar6,&puStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          puVar14 = puStack_98;
          uVar7 = uStack_a0;
          if (((ulong)puVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar10);
            puVar10 = puVar17;
            goto LAB_104a03500;
          }
          if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104a034ac:
            _swift_bridgeObjectRelease(puVar10);
            puVar10 = puVar17;
LAB_104a034f8:
            _swift_bridgeObjectRelease(puVar10);
            puVar10 = puVar14;
            goto LAB_104a03500;
          }
          lVar4 = 0x746e756f6d61;
          uVar12 = 0;
          func_0x000100029284(0x746e756f6d61);
          if ((uVar12 & 1) == 0) goto LAB_104a034ac;
          func_0x0001000bb420(*(long *)(puVar17 + 0x38) + lVar4 * 0x20,&puStack_90);
          _swift_bridgeObjectRelease(puVar17);
          puVar6 = &uStack_a0;
          _swift_dynamicCast(puVar6,&puStack_90,puVar1 + 8,PTR___sSdN_11034dd90,6);
          uVar12 = uStack_a0;
          if (((ulong)puVar6 & 1) == 0) goto LAB_104a034f8;
          puVar13 = puVar14;
          __sSS10uppercasedSSyF();
          _swift_bridgeObjectRelease(puVar14);
          puVar17 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar8 = uVar7;
          puVar14 = puVar13;
          puStack_90 = puVar10;
          func_0x000100029284();
          uVar15 = (ulong)~(uint)puVar14 & 1;
          lVar4 = *(long *)(puVar10 + 0x10) + uVar15;
          if (SCARRY8(*(long *)(puVar10 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a03528);
            (*pcVar3)();
          }
          if (*(long *)(puVar10 + 0x18) < lVar4) {
            func_0x000101432e00(lVar4,puVar17);
            uVar8 = uVar7;
            puVar10 = puVar13;
            func_0x000100029284();
            if (((uint)puVar14 & 1) != ((uint)puVar10 & 1)) {
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a0353c);
              (*pcVar3)();
            }
LAB_104a033f8:
            if (((ulong)puVar14 & 1) == 0) goto LAB_104a033fc;
LAB_104a03250:
            _swift_bridgeObjectRelease(puVar13);
            *(ulong *)(*(long *)(puStack_90 + 0x38) + uVar8 * 8) = uVar12;
          }
          else {
            if (((ulong)puVar17 & 1) != 0) goto LAB_104a033f8;
            func_0x000101432c98();
            if (((ulong)puVar14 & 1) != 0) goto LAB_104a03250;
LAB_104a033fc:
            *(ulong *)(puStack_90 + (uVar8 >> 6) * 8 + 0x40) =
                 *(ulong *)(puStack_90 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
            puVar6 = (ulong *)(*(long *)(puStack_90 + 0x30) + uVar8 * 0x10);
            *puVar6 = uVar7;
            puVar6[1] = (ulong)puVar13;
            *(ulong *)(*(long *)(puStack_90 + 0x38) + uVar8 * 8) = uVar12;
            if (SCARRY8(*(long *)(puStack_90 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a0352c);
              (*pcVar3)();
            }
            *(long *)(puStack_90 + 0x10) = *(long *)(puStack_90 + 0x10) + 1;
          }
          uVar18 = uVar18 + 1;
          puVar10 = puStack_90;
        } while (uVar16 != uVar18);
      }
      _swift_bridgeObjectRelease(uVar11);
      _swift_beginAccess(unaff_x20 + lVar2,&puStack_90,1,0);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined **)(unaff_x20 + lVar2) = puVar10;
      _swift_bridgeObjectRelease(uVar9);
    }
  }
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a0353c; end: 104a03583; -[FBSDKSKAdNetworkEvent initWithJSON:] */

void FUN_104a0353c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  FUN_104a03074();
  return;
}



/* Entry: 104a03584; end: 104a035cf;  */

void FUN_104a03584(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a035d0; end: 104a0362f; -[FBSDKSKAdNetworkEvent init] */

void FUN_104a035d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit._SKAdNetworkEvent",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a035fc);
  (*pcVar1)();
}


