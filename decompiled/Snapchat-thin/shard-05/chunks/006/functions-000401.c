/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f7b4b4; end: 103f7b57f; -[SCPlusSyncProductSubscriptionPeriod encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4f5f5245424d554e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f5245424d554e,0xef5354494e555f46);
  func_0x000107c42740(param_3);
  _objc_release(uVar1);
  uVar1 = 0x54494e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54494e55,0xe400000000000000);
  func_0x000107c42740(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f7b580; end: 103f7b5af;  */

void FUN_103f7b580(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f7b5b0(param_1);
  return;
}



/* Entry: 103f7b5b0; end: 103f7b6a7;  */

undefined8 FUN_103f7b5b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar1 = 0x4f5f5245424d554e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f5245424d554e,0xef5354494e555f46);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar2 = 0x54494e55;
  uVar3 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54494e55);
  uVar1 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  func_0x000103f72060(uVar1);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    func_0x000107c47b40();
    _objc_release(param_1);
  }
  return unaff_x20;
}



/* Entry: 103f7b6a8; end: 103f7b6cf; -[SCPlusSyncProductSubscriptionPeriod initWithCoder:] */

void FUN_103f7b6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f7b5b0();
  return;
}



/* Entry: 103f7b6d0; end: 103f7b6eb; -[SCPlusSyncProductSubscriptionPeriod description] */

void FUN_103f7b6d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7b6ec; end: 103f7b767; -[SCPlusSyncProductSubscriptionPeriod init] */

void FUN_103f7b6ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncProductSubscriptionPeriodWrapper.swift",0x41,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7b734);
  (*pcVar1)();
}



/* Entry: 103f7b768; end: 103f7b76b; -[SCPlusSyncProductSubscriptionPeriod .cxx_destruct] */

void FUN_103f7b768(void)

{
  return;
}



/* Entry: 103f7b76c; end: 103f7b78b;  */

void FUN_103f7b76c(void)

{
  _objc_opt_self(&PTR_PTR_11296e0b8);
  return;
}



/* Entry: 103f7b78c; end: 103f7b78f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b78c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036a58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113036a60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7b790; end: 103f7b85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f7b790(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113036a90) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113036a98) = (byte)((uint)param_1 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113036aa0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036aa8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_bridgeObjectRetain(param_2);
  func_0x00010006c00c(param_3,param_4);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006c090(param_3,param_4);
  return puVar2;
}



/* Entry: 103f7b85c; end: 103f7b86b; -[SCPlusSyncProfileConfig hasMyProfileCampaign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f7b85c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036a90);
}



/* Entry: 103f7b86c; end: 103f7b87b; -[SCPlusSyncProfileConfig hasGlobalFriendProfileCampaign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f7b86c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036a98);
}



/* Entry: 103f7b87c; end: 103f7b8cb; -[SCPlusSyncProfileConfig targetedFriendProfileCampaignUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b87c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113036aa0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f7b8cc; end: 103f7b927; -[SCPlusSyncProfileConfig profilePageConfigData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b8cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113036aa8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113036aa8))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f7b928; end: 103f7b9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b928(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113036a90) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113036a98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113036aa0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036aa8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7b9bc; end: 103f7ba97; -[SCPlusSyncProfileConfig initWithHasMyProfileCampaign:hasGlobalFriendProfileCampaign:targetedFriendProfileCampaignUserIds:profilePageConfigData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b9bc(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar4 = PTR___sSSN_11034da80;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = param_6;
  _objc_retain(param_6);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_113036a90) = param_3;
  *(undefined1 *)(param_1 + _DAT_113036a98) = param_4;
  *(undefined8 *)(param_1 + _DAT_113036aa0) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_113036aa8);
  *puVar1 = param_6;
  puVar1[1] = puVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7ba98; end: 103f7bb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f7ba98(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  _swift_getObjectType();
  *(byte *)(unaff_x20 + _DAT_113036a90) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113036a98) = (byte)((uint)param_1 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113036aa0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036aa8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_bridgeObjectRetain(param_2);
  func_0x00010006c00c(param_3,param_4);
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006c090(param_3,param_4);
  return puVar2;
}



/* Entry: 103f7bb64; end: 103f7bb67; -[SCPlusSyncProfileConfig copyWithZone:] */

void FUN_103f7bb64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f7bb68; end: 103f7bbd7; -[SCPlusSyncProfileConfig description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7bb68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113036aa0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113036aa8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113036aa8))[1];
  _swift_bridgeObjectRetain(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  func_0x00010006c090(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7bbd8; end: 103f7bc53; -[SCPlusSyncProfileConfig init] */

void FUN_103f7bbd8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncProfileConfigWrapper.swift",0x35,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7bc20);
  (*pcVar1)();
}



/* Entry: 103f7bc54; end: 103f7bc8f; -[SCPlusSyncProfileConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7bc54(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113036aa0));
  uVar2 = *(ulong *)(param_1 + _DAT_113036aa8);
  uVar1 = ((ulong *)(param_1 + _DAT_113036aa8))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103f7bc90; end: 103f7bcaf;  */

void FUN_103f7bc90(void)

{
  _objc_opt_self(&PTR_PTR_11296e190);
  return;
}



/* Entry: 103f7bcb0; end: 103f7bcbf; -[SCPlusSyncUpsellInfo canUpsellAdFree] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f7bcb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036ad8);
}



/* Entry: 103f7bcc0; end: 103f7bccf; -[SCPlusSyncUpsellInfo canUpsellLensPlus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f7bcc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036ae0);
}



/* Entry: 103f7bcd0; end: 103f7bd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7bcd0(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113036ad8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113036ae0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7bd34; end: 103f7bd97; -[SCPlusSyncUpsellInfo initWithCanUpsellAdFree:canUpsellLensPlus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7bd34(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113036ad8) = param_3;
  *(undefined1 *)(param_1 + _DAT_113036ae0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7bd98; end: 103f7be57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7bd98(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113036ad8) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113036ae0) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7be58; end: 103f7be5b; -[SCPlusSyncUpsellInfo copyWithZone:] */

void FUN_103f7be58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f7be5c; end: 103f7be77; -[SCPlusSyncUpsellInfo description] */

void FUN_103f7be5c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7be78; end: 103f7bf13; -[SCPlusSyncUpsellInfo init] */

void FUN_103f7be78(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncUpsellInfoWrapper.swift",0x32,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7bec0);
  (*pcVar1)();
}



/* Entry: 103f7bf14; end: 103f7bf1b;  */

undefined8 FUN_103f7bf14(void)

{
  return 1;
}



/* Entry: 103f7bf1c; end: 103f7bf5b;  */

void FUN_103f7bf1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113036b10;
  func_0x0001000285a8(0x113036b10,&UNK_10dcb1ca0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103f7bf5c; end: 103f7bf63;  */

undefined8 FUN_103f7bf5c(void)

{
  return 1;
}



/* Entry: 103f7bf64; end: 103f7bfdf;  */

void FUN_103f7bf64(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f7bfe0; end: 103f7bfe3;  */

void FUN_103f7bfe0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1cb0;
  _swift_getWitnessTable(&UNK_10dcb1cb0,&UNK_1107280c8);
  puRam0000000113036b20 = puVar1;
  return;
}



/* Entry: 103f7bfe4; end: 103f7c04f;  */

void FUN_103f7bfe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1cb0;
  _swift_getWitnessTable(&UNK_10dcb1cb0,&UNK_1107280c8);
  puRam0000000113036b20 = puVar1;
  return;
}



/* Entry: 103f7c050; end: 103f7c053;  */

void FUN_103f7c050(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1d58;
  _swift_getWitnessTable(&UNK_10dcb1d58,&UNK_110728158);
  puRam0000000113036b38 = puVar1;
  return;
}



/* Entry: 103f7c054; end: 103f7c0bf;  */

void FUN_103f7c054(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1d58;
  _swift_getWitnessTable(&UNK_10dcb1d58,&UNK_110728158);
  puRam0000000113036b38 = puVar1;
  return;
}



/* Entry: 103f7c0c0; end: 103f7c143;  */

void FUN_103f7c0c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103f7c144; end: 103f7c147;  */

void FUN_103f7c144(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1dc8;
  _swift_getWitnessTable(&UNK_10dcb1dc8,&UNK_110728158);
  puRam0000000113036b50 = puVar1;
  return;
}



/* Entry: 103f7c148; end: 103f7c187;  */

void FUN_103f7c148(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1dc8;
  _swift_getWitnessTable(&UNK_10dcb1dc8,&UNK_110728158);
  puRam0000000113036b50 = puVar1;
  return;
}



/* Entry: 103f7c188; end: 103f7c18b;  */

void FUN_103f7c188(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1d80;
  _swift_getWitnessTable(&UNK_10dcb1d80,&UNK_110728158);
  puRam0000000113036b58 = puVar1;
  return;
}



/* Entry: 103f7c18c; end: 103f7c1cb;  */

void FUN_103f7c18c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1d80;
  _swift_getWitnessTable(&UNK_10dcb1d80,&UNK_110728158);
  puRam0000000113036b58 = puVar1;
  return;
}



/* Entry: 103f7c1cc; end: 103f7c2ef;  */

undefined8 FUN_103f7c1cc(void)

{
  return 0;
}



/* Entry: 103f7c2f0; end: 103f7c33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7c2f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036bf0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7c33c; end: 103f7c39b; -[_TtC55SCLensScheduleNamespaceRequestFeatureInfoPluginRegistry59SCLensScheduleNamespaceRequestFeatureInfoPluginSaberService init] */

void FUN_103f7c33c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensScheduleNamespaceRequestFeatureInfoPluginRegistry.SCLensScheduleNamespaceRequestFeatureInfoPluginSaberService"
             ,0x73,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7c368);
  (*pcVar1)();
}



/* Entry: 103f7c39c; end: 103f7c3c7; -[_TtC55SCLensScheduleNamespaceRequestFeatureInfoPluginRegistry59SCLensScheduleNamespaceRequestFeatureInfoPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7c39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113036bf0));
  return;
}



/* Entry: 103f7c3c8; end: 103f7c3f3; +[SCLensCustomNamespace arBarName] */

void FUN_103f7c3c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1d3740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7c3f4; end: 103f7c43f; +[SCLensCustomNamespace cameraModesAndPostcapture] */

void FUN_103f7c3f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1d3770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7c440; end: 103f7c47b; -[SCLensCustomNamespace init] */

void FUN_103f7c440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000103f7c420();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7c47c; end: 103f7c4ab;  */

void FUN_103f7c47c(void)

{
  func_0x000103f7c420();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f7c4ac; end: 103f7c4af; -[SCLensCustomNamespace .cxx_destruct] */

void FUN_103f7c4ac(void)

{
  return;
}



/* Entry: 103f7c4b0; end: 103f7c54f; -[SCLens isFromMixer] */

uint FUN_103f7c4b0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x000107c4d420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(param_1);
    uVar1 = 0;
  }
  else {
    if (lRam0000000113036c30 != -1) {
      _swift_once(0x113036c30,&UNK_100745454);
    }
    uVar3 = uRam00000001138127c8;
    func_0x00010bf4b900(uRam00000001138127c8);
    _objc_release(param_1);
    _objc_release(lVar2);
    uVar1 = (uint)uVar3 ^ 1;
  }
  return uVar1;
}



/* Entry: 103f7c550; end: 103f7c57b; +[_TtC22SCLensNetworkConstants22SCLensNetworkConstants lensCoreVersionHeaderKey] */

void FUN_103f7c550(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1d3790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7c57c; end: 103f7c5ab; +[_TtC22SCLensNetworkConstants22SCLensNetworkConstants apiVersionHeaderKey] */

void FUN_103f7c57c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x737265762d697061,0xeb000000006e6f69);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7c5ac; end: 103f7c5ff; +[_TtC22SCLensNetworkConstants22SCLensNetworkConstants lensCoreVersionHeaderValue:] */

void FUN_103f7c5ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___ss5Int32VN_11034ee20;
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103f7c600; end: 103f7c63b; -[_TtC22SCLensNetworkConstants22SCLensNetworkConstants init] */

void FUN_103f7c600(undefined8 param_1)

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



/* Entry: 103f7c63c; end: 103f7c66f;  */

void FUN_103f7c63c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f7c670; end: 103f7c673; -[_TtC22SCLensNetworkConstants22SCLensNetworkConstants .cxx_destruct] */

void FUN_103f7c670(void)

{
  return;
}



/* Entry: 103f7c674; end: 103f7c693;  */

void FUN_103f7c674(void)

{
  _objc_opt_self(&PTR_PTR_11296e4b0);
  return;
}



/* Entry: 103f7c694; end: 103f7c77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f7c694(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_113036c90;
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  __s10Foundation9IndexPathV5UIKitE4itemSivg();
  (**(code **)(lVar3 + 0x20))();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_113036c88);
    func_0x000107c4abc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(lVar1 + _DAT_1130390a8);
    _objc_retain();
    _objc_release(lVar1);
    lVar3 = *(long *)(lVar2 + _DAT_113039158);
    _objc_retain(lVar3);
    _objc_release(lVar2);
  }
  else {
    lVar3 = lVar1;
    func_0x000107c4abc0();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
  }
  return lVar3;
}



/* Entry: 103f7c780; end: 103f7c917; -[_TtC21LensCarouselPresenter44LensCarouselCollectionItemLayoutProviderImpl itemLayoutModelAt:] */

void FUN_103f7c780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar3,param_3);
  _objc_retain(param_1);
  puVar2 = puVar3;
  FUN_103f7c694(puVar3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103f7c918; end: 103f7c9c3; -[_TtC21LensCarouselPresenter44LensCarouselCollectionItemLayoutProviderImpl shouldAdjustOriginalItemAt:] */

uint FUN_103f7c918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar3,param_3);
  _objc_retain(param_1);
  puVar2 = puVar3;
  func_0x000103f7c82c(puVar3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 103f7c9c4; end: 103f7ca23; -[_TtC21LensCarouselPresenter44LensCarouselCollectionItemLayoutProviderImpl init] */

void FUN_103f7c9c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCarouselCollectionItemLayoutProviderImpl",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7c9f0);
  (*pcVar1)();
}



/* Entry: 103f7ca24; end: 103f7ca5b; -[_TtC21LensCarouselPresenter44LensCarouselCollectionItemLayoutProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ca24(long param_1)

{
  long lVar1;
  
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113036c88));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_113036c90))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113036c90));
  return;
}



/* Entry: 103f7ca5c; end: 103f7ca7b;  */

void FUN_103f7ca5c(void)

{
  _objc_opt_self(&PTR_PTR_11296e560);
  return;
}



/* Entry: 103f7ca7c; end: 103f7ca8f;  */

void FUN_103f7ca7c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110728320;
  if (lRam0000000113036cc0 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113036cc0 = param_1;
  }
  return;
}



/* Entry: 103f7ca90; end: 103f7cad3;  */

void FUN_103f7ca90(long param_1,long *param_2,long param_3)

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



/* Entry: 103f7cad4; end: 103f7caeb;  */

void FUN_103f7cad4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103f7caec; end: 103f7cbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f7caec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_290;
  long lStack_288;
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [288];
  
  plVar4 = &lStack_290;
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  FUN_103f9beec(auStack_160);
  lVar2 = 0;
  FUN_103f7d404();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_113036cd0) = 0;
  _swift_unknownObjectWeakInit(lVar3 + _DAT_113036cc8,0);
  _memcpy(lVar3 + _DAT_113036cd8,auStack_160,0x120);
  *(undefined8 *)(lVar3 + _DAT_113036ce0) = param_1;
  FUN_103f7ced8(auStack_160,auStack_280);
  puVar1 = PTR_s_init_1125d9248;
  lStack_290 = lVar3;
  lStack_288 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_290,puVar1);
  FUN_103f7cbdc();
  func_0x000100870a64(auStack_160);
  return (undefined1 *)plVar4;
}



/* Entry: 103f7cbdc; end: 103f7ccbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7cbdc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c58cd0(param_1,param_2,1);
  lVar1 = unaff_x20;
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_113039090);
  _objc_release();
  func_0x000107c566f4(uVar2,param_1);
  lVar1 = unaff_x20;
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_113039090);
  _objc_release();
  func_0x000107c566fc(uVar2,param_1);
  lVar1 = unaff_x20;
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_113039088);
  _objc_release();
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113039098);
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010c1b6270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,uVar3,param_1,PTR_s_setItemSize__11264b2c0);
  return;
}



/* Entry: 103f7ccbc; end: 103f7cd5f;  */

undefined1 * FUN_103f7ccbc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [288];
  
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  FUN_103f9beec(auStack_160);
  FUN_103f7ee18(0);
  _objc_allocWithZone();
  FUN_103f7ced8(auStack_160,auStack_280);
  _swift_unknownObjectRetain(param_1);
  puVar1 = auStack_160;
  func_0x000103f7da00(puVar1,param_1);
  FUN_103f7cbdc();
  func_0x000100870a64(auStack_160);
  return puVar1;
}



/* Entry: 103f7cd60; end: 103f7ced7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103f7cd60(double param_1,double param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  bVar2 = false;
  bVar3 = true;
  if (0.0 <= param_2) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_2)) {
      bVar2 = param_2 == 1.0;
      bVar3 = 1.0 <= param_2;
    }
  }
  if (!bVar3 || bVar2) {
    lVar4 = unaff_x20;
    func_0x000107c4abc0();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = *(double *)(lVar4 + _DAT_113039088);
    _objc_release();
    dVar6 = *(double *)(param_3 + _DAT_1130391a0);
    if (dVar8 * dVar6 <= param_1) {
      func_0x000107c4abc0();
      _objc_retainAutoreleasedReturnValue();
      dVar9 = *(double *)(unaff_x20 + _DAT_113039090);
      _objc_release();
      dVar6 = ((param_1 - dVar8) * 0.5 - dVar8 * (dVar6 + -1.0)) - dVar9;
      if (dVar6 <= 0.0) {
        return 1;
      }
      dVar9 = dVar8 + dVar9;
      dVar7 = dVar6 / dVar9;
      if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7cec8);
        (*pcVar1)();
      }
      if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7cecc);
        (*pcVar1)();
      }
      if (dVar7 < 9.223372036854776e+18) {
        uVar5 = (ulong)(param_2 <= (dVar6 - dVar9 * (double)(long)dVar7) / dVar8);
        lVar4 = (long)dVar7 + uVar5;
        if (SCARRY8((long)dVar7,uVar5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ced4);
          (*pcVar1)();
        }
        if (-1 < lVar4 + 0x4000000000000000) {
          return lVar4 * 2 | 1;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ced8);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ced0);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Entry: 103f7ced8; end: 103f7cf13;  */

undefined8 FUN_103f7ced8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103f9a29c)(param_2,param_1);
  return param_2;
}



/* Entry: 103f7cf14; end: 103f7d02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f7cf14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_298 [288];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [288];
  
  lVar1 = _DAT_113036cd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_113036cd0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    _memcpy(auStack_160,unaff_x20 + _DAT_113036cd8,0x120);
    lVar2 = _DAT_113036cc8;
    _swift_beginAccess(unaff_x20 + _DAT_113036cc8,auStack_178,0,0);
    lVar2 = unaff_x20 + lVar2;
    _swift_unknownObjectWeakLoadStrong(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113036ce0);
    lVar3 = 0;
    func_0x000103f7f894();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x138,0);
    _memcpy(lVar3 + 0x10,auStack_160,0x120);
    _swift_unknownObjectWeakAssign(lVar3 + 0x138,lVar2);
    FUN_103f7ced8(auStack_160,auStack_298);
    _swift_unknownObjectRetain(uVar4);
    _swift_unknownObjectRelease(lVar2);
    *(undefined8 *)(lVar3 + 0x130) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_retain(lVar3);
    _swift_release(uVar4);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}



/* Entry: 103f7d02c; end: 103f7d0b7; -[SCLensCarouselStraightCollectionLayout delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7d02c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113036cc8;
  _swift_beginAccess(param_1 + _DAT_113036cc8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7d0b8; end: 103f7d16b; -[SCLensCarouselStraightCollectionLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7d0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_113036cc8;
  _swift_beginAccess(param_1 + _DAT_113036cc8,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  _swift_unknownObjectRetain(param_3);
  lVar2 = param_1;
  _objc_retain(param_1);
  lVar3 = lVar2;
  FUN_103f7cf14();
  param_1 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong(param_1);
  _swift_unknownObjectRelease(param_3);
  _objc_release(lVar2);
  _swift_unknownObjectWeakAssign(lVar3 + 0x138,param_1);
  _swift_release(lVar3);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 103f7d16c; end: 103f7d27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7d16c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_113036cc8;
  _swift_beginAccess(unaff_x20 + _DAT_113036cc8,auStack_48,1,0);
  lVar1 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  FUN_103f7cf14();
  lVar2 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong(lVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectWeakAssign(lVar1 + 0x138,lVar2);
  _swift_release(lVar1);
  _swift_unknownObjectRelease(lVar2);
  return;
}



/* Entry: 103f7d27c; end: 103f7d323;  */

void FUN_103f7d27c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar4 = *(long *)(lVar3 + 0x18);
  _swift_unknownObjectWeakAssign(*(long *)(lVar3 + 0x20) + *(long *)(lVar3 + 0x28),lVar4);
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    _swift_endAccess(lVar3);
    _swift_unknownObjectRelease(lVar4);
    FUN_103f7cf14();
    lVar2 = lVar2 + lVar1;
    _swift_unknownObjectWeakLoadStrong(lVar2);
    _swift_unknownObjectWeakAssign(lVar4 + 0x138,lVar2);
    _swift_unknownObjectRelease(lVar2);
    _swift_release(lVar4);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)(lVar3 + 0x18));
    _swift_endAccess(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 103f7d324; end: 103f7d403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f7d324(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_288;
  long lStack_280;
  undefined1 auStack_278 [288];
  undefined1 auStack_158 [296];
  
  _objc_retain();
  lVar1 = param_1;
  FUN_103f9beec(auStack_158);
  FUN_103f7d404();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113036cd0) = 0;
  _swift_unknownObjectWeakInit(lVar2 + _DAT_113036cc8,0);
  _memcpy(lVar2 + _DAT_113036cd8,auStack_158,0x120);
  *(undefined8 *)(lVar2 + _DAT_113036ce0) = 0;
  FUN_103f7ced8(auStack_158,auStack_278);
  plVar3 = &lStack_288;
  lStack_288 = lVar2;
  lStack_280 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  _objc_release(param_1);
  func_0x000100870a64(auStack_158);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return plVar3;
}



/* Entry: 103f7d404; end: 103f7d423;  */

void FUN_103f7d404(void)

{
  _objc_opt_self(&PTR_PTR_11296e628);
  return;
}



/* Entry: 103f7d424; end: 103f7d44b; -[SCLensCarouselStraightCollectionLayout initWithLayoutConfigObjc:] */

void FUN_103f7d424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f7d324();
  return;
}



/* Entry: 103f7d44c; end: 103f7d4c3; -[SCLensCarouselStraightCollectionLayout initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7d44c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_113036cd0) = 0;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113036cc8,0);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "LensCarouselPresenter/LensCarouselStraightCollectionLayout.swift",0x40,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7d4c4);
  (*pcVar1)();
}



/* Entry: 103f7d4c4; end: 103f7d4db; +[SCLensCarouselStraightCollectionLayout layoutAttributesClass] */

void FUN_103f7d4c4(void)

{
  FUN_103f97adc(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103f7d4dc; end: 103f7d4e3; -[SCLensCarouselStraightCollectionLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8 FUN_103f7d4dc(void)

{
  return 1;
}



/* Entry: 103f7d4e4; end: 103f7d5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f7d4e4(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  puVar1 = &stack0xffffffffffffff90;
  FUN_103f7d404();
  dVar4 = param_2;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = unaff_x20;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x000107c51b7c();
    dVar3 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar3 = (dVar3 - *(double *)(unaff_x20 + _DAT_113036cd8)) * 0.5;
    if (dVar4 != dVar3) {
      func_0x00010bf4cdc0(lVar2);
      func_0x00010bf4cde0(puVar1);
      func_0x000107c53850(dVar3 - param_1,puVar1);
    }
    _objc_release(lVar2);
  }
  return puVar1;
}



/* Entry: 103f7d5ec; end: 103f7d64f; -[SCLensCarouselStraightCollectionLayout invalidationContextForBoundsChange:] */

void FUN_103f7d5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_5;
  FUN_103f7d4e4(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f7d650; end: 103f7d6ff; -[SCLensCarouselStraightCollectionLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7d650(double param_1,long param_2)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_2;
  FUN_103f7d404();
  puVar2 = PTR_s_prepareLayout_112620088;
  lStack_30 = param_2;
  lStack_28 = lVar3;
  _objc_retain();
  _objc_msgSendSuper2(&lStack_30,puVar2);
  lVar3 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bf20c00();
    _CGRectGetWidth();
    pdVar1 = (double *)(param_2 + _DAT_113036cd8);
    dVar4 = (param_1 - *pdVar1) * 0.5;
    func_0x000107c58d84(pdVar1[3],dVar4,pdVar1[5],dVar4,param_2);
    _objc_release(param_2);
    param_2 = lVar3;
  }
  _objc_release(param_2);
  return;
}



/* Entry: 103f7d700; end: 103f7d83f; -[SCLensCarouselStraightCollectionLayout layoutAttributesForElementsInRect:] */

void FUN_103f7d700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  lVar2 = param_5;
  FUN_103f7d404();
  puVar1 = PTR_s_layoutAttributesForElementsInRec_112600c60;
  lStack_70 = param_5;
  lStack_68 = lVar2;
  _objc_retain();
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_70,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (plVar3 == (long *)0x0) {
    _objc_release(param_5);
    puVar7 = (undefined1 *)0x0;
  }
  else {
    uVar4 = 0;
    func_0x000101005d6c(0);
    puVar5 = (undefined1 *)plVar3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(plVar3,uVar4);
    _objc_release(plVar3);
    lVar2 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(param_5);
    }
    else {
      lVar6 = lVar2;
      FUN_103f7cf14();
      FUN_103f7f2dc(puVar5,lVar2);
      _objc_release(param_5);
      _objc_release(lVar2);
      _swift_release(lVar6);
    }
    puVar7 = puVar5;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar5,uVar4);
    _swift_bridgeObjectRelease(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 103f7d840; end: 103f7d89b; -[SCLensCarouselStraightCollectionLayout init] */

void FUN_103f7d840(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCarouselStraightCollectionLayout",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7d86c);
  (*pcVar1)();
}



/* Entry: 103f7d89c; end: 103f7d917; -[SCLensCarouselStraightCollectionLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f7d89c(long param_1)

{
  func_0x000100870a64(param_1 + _DAT_113036cd8);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113036ce0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036cd0));
  param_1 = param_1 + _DAT_113036cc8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f7d918; end: 103f7daef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f7d918(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [288];
  
  lVar1 = _DAT_113036d38;
  lVar2 = *(long *)(unaff_x20 + _DAT_113036d38);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    _memcpy(auStack_160,unaff_x20 + _DAT_113036d10,0x120);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113036d18);
    lVar3 = 0;
    func_0x000103f7f894();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar3 + 0x138,0);
    _memcpy(lVar3 + 0x10,auStack_160,0x120);
    _swift_unknownObjectWeakAssign(lVar3 + 0x138,0);
    *(undefined8 *)(lVar3 + 0x130) = uVar4;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    FUN_103f7ced8(auStack_160,auStack_280);
    _swift_unknownObjectRetain(uVar4);
    _swift_retain(lVar3);
    _swift_release(uVar5);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}



/* Entry: 103f7daf0; end: 103f7db17; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout initWithCoder:] */

void FUN_103f7daf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f7f208();
  return;
}



/* Entry: 103f7db18; end: 103f7db2f; +[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout layoutAttributesClass] */

void FUN_103f7db18(void)

{
  FUN_103f97adc(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103f7db30; end: 103f7db37; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8 FUN_103f7db30(void)

{
  return 1;
}



/* Entry: 103f7db38; end: 103f7dc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f7db38(double param_1,double param_2,double param_3,undefined8 param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  
  puVar2 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  _CGRectGetWidth();
  pdVar1 = (double *)(unaff_x20 + _DAT_113036d20);
  *pdVar1 = dVar3;
  *(undefined1 *)(pdVar1 + 1) = 0;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 != 0) {
    func_0x00010bf4d5e0();
    if ((dVar3 != 0.0) || (dVar4 != 0.0)) {
      func_0x00010bf20c00(unaff_x20);
      dVar3 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      if (dVar5 != dVar3) {
        FUN_103f7dc7c(param_1,param_2,param_3,param_4,unaff_x20);
        func_0x00010bf4cde0(puVar2);
        func_0x000107c53850(param_1,puVar2);
      }
    }
    _objc_release(unaff_x20);
  }
  return puVar2;
}



/* Entry: 103f7dc7c; end: 103f7dd47;  */

double FUN_103f7dc7c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_5;
  dVar2 = param_1;
  func_0x00010bf20c00();
  _CGRectGetWidth();
  if (dVar2 == 0.0) {
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    param_1 = param_1 * -0.5;
  }
  else {
    FUN_103f7dd48();
    if (lVar1 == 0) {
      param_1 = 0.0;
    }
    else {
      func_0x00010bf345e0();
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      param_1 = param_1 * -0.5;
      dVar2 = dVar2 + param_1;
      func_0x00010bf4cdc0(param_5);
      _objc_release(lVar1);
      param_1 = dVar2 - param_1;
    }
  }
  return param_1;
}



/* Entry: 103f7dd48; end: 103f7dfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103f7dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  
  uVar3 = unaff_x20;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    dVar10 = *(double *)(unaff_x20 + _DAT_113036d10);
    dVar13 = dVar10 + ((double *)(unaff_x20 + _DAT_113036d10))[1];
    func_0x00010bf4cdc0();
    dVar14 = dVar10;
    _objc_retain();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    uVar12 = 0x3fe0000000000000;
    dVar10 = dVar10 + dVar14 * 0.5;
    dVar11 = dVar13 * 0.5;
    dVar14 = dVar10 - dVar11;
    func_0x00010bf20c00(uVar3);
    uVar4 = uVar3;
    _objc_release();
    _CGRectGetMinY(dVar11,uVar12,param_3,param_4);
    FUN_103f7e36c(dVar14,dVar11,dVar13,dVar13);
    if (uVar4 == 0) {
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x20 != 0) {
        uVar9 = unaff_x20;
        FUN_103f7d918();
        FUN_103f7f2dc(uVar4,unaff_x20);
        _objc_release(unaff_x20);
        _swift_release(uVar9);
      }
      uVar9 = uVar4 & 0xffffffffffffff8;
      if (uVar4 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar9 + 0x10);
      }
      else {
        uVar7 = uVar4;
        if (-1 < (long)uVar4) {
          uVar7 = uVar9;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar7 != 0) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7dfc4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + 0x20);
          _objc_retain(uVar5);
        }
        else {
          uVar5 = 0;
          func_0x00010100fb8c(0,uVar4);
        }
        if (uVar7 != 1) {
          uVar8 = 1;
          do {
            while( true ) {
              if ((uVar4 & 0xc000000000000001) == 0) {
                if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7df54);
                  (*pcVar2)();
                }
                if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7df58);
                  (*pcVar2)();
                }
                uVar6 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
                _objc_retain(uVar6);
              }
              else {
                uVar6 = uVar8;
                func_0x00010100fb8c(uVar8,uVar4);
              }
              uVar1 = uVar8 + 1;
              if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7df50);
                (*pcVar2)();
              }
              func_0x00010bf345e0(uVar6);
              dVar11 = dVar14 - dVar10;
              func_0x00010bf345e0(uVar5);
              dVar14 = ABS(dVar14 - dVar10);
              if (ABS(dVar11) < dVar14) break;
              _objc_release(uVar6);
              uVar8 = uVar8 + 1;
              if (uVar1 == uVar7) goto LAB_103f7df38;
            }
            _objc_release(uVar5);
            uVar5 = uVar6;
            uVar8 = uVar1;
          } while (uVar1 != uVar7);
        }
LAB_103f7df38:
        _objc_release(uVar3);
        _swift_bridgeObjectRelease(uVar4);
        return uVar5;
      }
      _objc_release(uVar3);
      _swift_bridgeObjectRelease(uVar4);
    }
  }
  return 0;
}



/* Entry: 103f7dfc4; end: 103f7e027; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout invalidationContextForBoundsChange:] */

void FUN_103f7dfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_5;
  FUN_103f7db38(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f7e028; end: 103f7e0c3; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout invalidateLayoutWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7e028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain();
  _objc_retain();
  uVar2 = param_3;
  func_0x000107c49904();
  if ((int)uVar2 != 0) {
    uStack_41 = 0;
    func_0x0001007d6d78(&uStack_41);
  }
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_invalidateLayoutWithContext__1125f8230,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}


