/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103274f70; end: 103274faf;  */

void FUN_103274f70(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_103274b38(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103274fb0; end: 10327525f;  */

void FUN_103274fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062f380;
  func_0x000107c613fc(&UNK_11062f380,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103275260,puVar1);
  return;
}



/* Entry: 103275260; end: 10327527f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103275260(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar10 = &lStack_80;
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar3 = uStack_58;
  uVar2 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  func_0x00010017da58(uVar3,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170();
  func_0x000100083b20(&uStack_58);
  func_0x00010451338c();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1033939d0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000103393490();
  lVar6 = 0;
  FUN_103274838();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112f4fa90) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f4fa98) = uStack_60;
  *(undefined8 *)(lVar7 + _DAT_112f4faa0) = uStack_68;
  *(undefined8 *)(lVar7 + _DAT_112f4faa8) = uStack_70;
  *(undefined **)(lVar7 + _DAT_112f4fab0) = puVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_80 = lVar7;
  lStack_78 = lVar6;
  func_0x000107c61174(uVar3);
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(puVar5);
  func_0x000107c61154(&lStack_80,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  *param_1 = plVar10;
  return;
}



/* Entry: 103275280; end: 1032752df; -[_TtC33MutualFriendsUpsellDeepLinkPlugin36MutualFriendsUpsellDeepLinkProcessor init] */

void FUN_103275280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsUpsellDeepLinkPlugin.MutualFriendsUpsellDeepLinkProcessor",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032752ac);
  (*pcVar1)();
}



/* Entry: 1032752e0; end: 103275357; -[_TtC33MutualFriendsUpsellDeepLinkPlugin36MutualFriendsUpsellDeepLinkProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032752fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327531c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327533c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103275320) */
/* WARNING: Removing unreachable block (ram,0x000103275300) */
/* WARNING: Removing unreachable block (ram,0x000103275340) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032752e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fb10));
  return;
}



/* Entry: 103275358; end: 103275377;  */

void FUN_103275358(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4688);
  return;
}



/* Entry: 103275378; end: 1032753e7;  */

void FUN_103275378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1032753e8(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1032753e8; end: 103275aef;  */

/* WARNING: Possible PIC construction at 0x0001032755e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327567c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032758d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032758f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327590c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103275928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327593c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327594c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103275940) */
/* WARNING: Removing unreachable block (ram,0x00010327592c) */
/* WARNING: Removing unreachable block (ram,0x000103275910) */
/* WARNING: Removing unreachable block (ram,0x0001032758fc) */
/* WARNING: Removing unreachable block (ram,0x0001032758d8) */
/* WARNING: Removing unreachable block (ram,0x000103275958) */
/* WARNING: Removing unreachable block (ram,0x000103275ae0) */
/* WARNING: Removing unreachable block (ram,0x000103275ad0) */
/* WARNING: Removing unreachable block (ram,0x000103275abc) */
/* WARNING: Removing unreachable block (ram,0x000103275aa0) */
/* WARNING: Removing unreachable block (ram,0x000103275984) */
/* WARNING: Removing unreachable block (ram,0x000103275680) */
/* WARNING: Removing unreachable block (ram,0x0001032755e8) */
/* WARNING: Removing unreachable block (ram,0x000103275978) */
/* WARNING: Removing unreachable block (ram,0x00010327566c) */
/* WARNING: Removing unreachable block (ram,0x000103275950) */
/* WARNING: Removing unreachable block (ram,0x000103275954) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032753e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong in_stack_fffffffffffffe90;
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [88];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f4fb28) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000103e6de98();
    func_0x000107c610f8();
    lVar2 = 0;
    func_0x000103e6ddd8(0,0,0,0,0,0,0,0,in_stack_fffffffffffffe90 & 0xffffffffff000000);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4415c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  if (*(char *)(lVar2 + _DAT_113021bc0) == '\x01') {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f4fb10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c61150();
      if ((uVar4 & 1) != 0) {
        func_0x000107c5cc6c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar3);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4fb18);
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f4fb20);
        puVar5 = PTR_PTR_1126b3530;
        func_0x000107c610f8(PTR_PTR_1126b3530);
        func_0x000107c61174();
        func_0x000107c61174(uVar10);
        func_0x000107c4807c(puVar5);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f4fb30);
        FUN_103393194(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar9);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x0001033920cc(uVar8,uVar10,puVar5,0,0,0,0,uVar9,lVar2,param_1);
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f4fb38);
        *(undefined8 *)(unaff_x20 + _DAT_112f4fb38) = uVar8;
        func_0x000107c61174();
        goto code_r0x000107c61170;
      }
      func_0x000107c615e8(uVar3);
    }
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_108;
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar10 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar1 + 0x20) = uVar10;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar1 + 0x28) = puVar7;
    *(undefined8 *)(lVar1 + 0x30) = 0xd000000000000024;
    *(undefined8 *)(lVar1 + 0x38) = 0x800000010f1335c0;
    lVar2 = lVar1;
    func_0x000100214a84(lVar1);
    func_0x000107c61588(lVar1);
    FUN_103275e8c((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar10 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010dba3e20);
    func_0x000107c5f9dc(lVar2,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar2);
  }
  else {
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_b8;
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar10 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar1 + 0x20) = uVar10;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar1 + 0x28) = puVar7;
    *(undefined8 *)(lVar1 + 0x30) = 0xd00000000000001f;
    *(undefined8 *)(lVar1 + 0x38) = 0x800000010f1335a0;
    lVar2 = lVar1;
    func_0x000100214a84(lVar1);
    func_0x000107c61588(lVar1);
    FUN_103275e8c((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar10 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010dba3e20);
    func_0x000107c5f9dc(lVar2,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c466bc(puVar6);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 103275af0; end: 103275b8b; -[_TtC33MutualFriendsUpsellDeepLinkPlugin36MutualFriendsUpsellDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_103275af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_103275d34(param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 103275b8c; end: 103275b93; -[_TtC33MutualFriendsUpsellDeepLinkPlugin36MutualFriendsUpsellDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_103275b8c(void)

{
  return 0;
}



/* Entry: 103275b94; end: 103275b97; -[_TtC33MutualFriendsUpsellDeepLinkPlugin36MutualFriendsUpsellDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_103275b94(void)

{
  return;
}



/* Entry: 103275b98; end: 103275d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103275b98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f4fb38);
    *(undefined8 *)(param_1 + _DAT_112f4fb38) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c42804(param_2);
  return;
}



/* Entry: 103275d34; end: 103275e5b;  */

void FUN_103275d34(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000103275c04();
  func_0x000107c61180();
  pcVar1 = "processDeepLinkURL(_:additionalInfo:delegate:)";
  func_0x0001000c10c0("processDeepLinkURL(_:additionalInfo:delegate:)");
  func_0x000107c61180();
  puVar2 = &UNK_11062f3c8;
  func_0x000107c613fc(&UNK_11062f3c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11062f3f0;
  func_0x000107c613fc(&UNK_11062f3f0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_103275e5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11062f408;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 103275e5c; end: 103275e8b;  */

void FUN_103275e5c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1032753e8(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103275e8c; end: 103275ecb;  */

undefined8 FUN_103275e8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103275ecc; end: 103275edb; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin identifier] */

void FUN_103275ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110e21338);
  return;
}



/* Entry: 103275edc; end: 103275ee3; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin priority] */

undefined8 FUN_103275edc(void)

{
  return 0;
}



/* Entry: 103275ee4; end: 103275f6b; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin canProvideProcessorForFeature:] */

uint FUN_103275ee4(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e21338;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 103275f6c; end: 103275fc7; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin isValidDeepLink:] */

uint FUN_103275f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1032769ec(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103275fc8; end: 103275fcb; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_103275fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103275fcc; end: 10327637b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103275fcc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  code **ppcVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar13 = param_1;
  func_0x000103276ab4();
  if ((uVar13 & 1) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f4fb78) + _DAT_1130366d0);
    func_0x000107c6157c(uVar12);
    func_0x0001000d224c(&puStack_90);
    func_0x000107c61574(uVar12);
    puVar1 = puStack_90;
    func_0x000107c49900();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_90);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174();
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar2 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar2 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar2 = puVar9;
      }
      func_0x000107c60480(puVar2);
    }
    uVar3 = 0;
    FUN_103276720(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar13 = uVar3 & 0xffffffffffffff8;
    uVar7 = *(ulong *)(uVar13 + 0x10);
    uVar11 = uVar3;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar7) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_103276720(uVar11,uVar7 + 1,1,uVar3);
      uVar13 = uVar11 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar7 + 1;
    *(undefined **)(uVar13 + uVar7 * 8 + 0x20) = puVar1;
    func_0x000107c61170(puVar1);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f4fb70);
    func_0x000107c5d9ac();
    func_0x000107c61180();
    lVar8 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar8 != 0) {
      lVar4 = lVar8;
      func_0x000107c4381c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      if (lVar4 != 0) {
        func_0x000107c61174();
        uVar7 = uVar11;
        if (uVar11 >> 0x3e != 0) {
          if (0x7fffffffffffffff < uVar11) {
            uVar13 = uVar11;
          }
          func_0x000107c60480(uVar13);
          uVar7 = 0;
          FUN_103276720(0,uVar13 + 1,1,uVar11);
          uVar13 = uVar7 & 0xffffffffffffff8;
        }
        uVar3 = *(ulong *)(uVar13 + 0x10);
        uVar11 = uVar7;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar3) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_103276720(uVar11,uVar3 + 1,1,uVar7);
          uVar13 = uVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar3 + 1;
        *(long *)(uVar13 + uVar3 * 8 + 0x20) = lVar4;
        func_0x000107c61170();
      }
    }
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar12 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
    uVar13 = uVar11;
    func_0x000107c5fc48(uVar11,uVar12);
    func_0x000107c3db10(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    puVar9 = &UNK_11062f4f0;
    func_0x000107c613fc(&UNK_11062f4f0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    puVar1 = &UNK_11062f518;
    func_0x000107c613fc(&UNK_11062f518,0x30,7);
    *(undefined **)(puVar1 + 0x10) = puVar9;
    *(ulong *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    pcStack_70 = FUN_103276c74;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1011b0640;
    puStack_78 = &UNK_11062f530;
    puStack_68 = puVar1;
    func_0x000107c60bc4(&puStack_90);
    puVar9 = puStack_68;
    func_0x000107c615f0(param_1);
    func_0x000107c61434(param_2);
    func_0x000107c615f0(param_3);
    func_0x000107c61574(puVar9);
    pcVar6 = "processDeepLinkURL(_:additionalInfo:delegate:)";
    func_0x0001000c10c0("processDeepLinkURL(_:additionalInfo:delegate:)");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar2);
    func_0x000107c615e8(pcVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c6142c(uVar11);
    func_0x000107c61170(puVar2);
    return;
  }
  ppcVar10 = &pcStack_70;
  lVar8 = *(long *)(unaff_x20 + _DAT_112f4fb68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    puVar9 = &UNK_11062f568;
    func_0x000107c613fc(&UNK_11062f568,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_3);
    pcStack_70 = (code *)PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = (undefined *)0x42000000;
    func_0x000107c60bc4(&pcStack_70);
    func_0x000107c61574(puVar9);
    func_0x000107c4ef8c(lVar8);
    func_0x000107c60bd0(ppcVar10);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(param_2);
  }
  func_0x000107c4bb48(param_3);
  return;
}



/* Entry: 10327637c; end: 1032763f3;  */

void FUN_10327637c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1032763f4(param_4,param_5,param_6);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1032763f4; end: 103276523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032763f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f4fb68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    puVar2 = &UNK_11062f568;
    func_0x000107c613fc(&UNK_11062f568,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_3);
    uStack_50 = 0x103276c9c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11062f580;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4ef8c(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c4bb48(param_3);
  return;
}



/* Entry: 103276524; end: 1032765c3; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_103276524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_103275fcc(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1032765c4; end: 1032765cb; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin shouldForceNavigation] */

undefined8 FUN_1032765c4(void)

{
  return 0;
}



/* Entry: 1032765cc; end: 1032765cf; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1032765cc(void)

{
  return;
}



/* Entry: 1032765d0; end: 103276657;  */

void FUN_1032765d0(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4bb60();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42804();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 103276658; end: 1032766b7; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin init] */

void FUN_103276658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusDeeplinkProcessorPluginProvider.PlusDeeplinkProcessorPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103276684);
  (*pcVar1)();
}



/* Entry: 1032766b8; end: 1032766ff; -[_TtC37SCPlusDeeplinkProcessorPluginProvider27PlusDeeplinkProcessorPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032766d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032766d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032766b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fb68));
  return;
}



/* Entry: 103276700; end: 10327671f;  */

void FUN_103276700(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4770);
  return;
}



/* Entry: 103276720; end: 103276847;  */

ulong FUN_103276720(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103276848);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103276848(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103276844);
      (*pcVar1)();
    }
    FUN_1032768c8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103276848; end: 1032768c7;  */

undefined * FUN_103276848(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101385150();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1032768c8; end: 1032769eb;  */

long FUN_1032768c8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032769e8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032769ec);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d74dc8;
        func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d74dc8;
      func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032769e4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1032769ec; end: 103276c73;  */

uint FUN_1032769ec(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e21338);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e21338;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_103276a98;
    }
  }
  uVar1 = 0;
LAB_103276a98:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 103276c74; end: 103276cab;  */

void FUN_103276c74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1032763f4(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 103276cac; end: 103276e0b;  */

void FUN_103276cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062f5b8;
  func_0x000107c613fc(&UNK_11062f5b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_103276e0c,puVar1);
  return;
}



/* Entry: 103276e0c; end: 103276e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103276e0c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  lVar2 = 0;
  FUN_103276700();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f4fb68) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112f4fb70) = uStack_50;
  *(undefined8 *)(lVar3 + _DAT_112f4fb78) = uStack_58;
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 103276e28; end: 1032770ff;  */

/* WARNING: Possible PIC construction at 0x000103276e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103276f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103276f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103276f14) */
/* WARNING: Removing unreachable block (ram,0x000103276e7c) */
/* WARNING: Removing unreachable block (ram,0x000103276e80) */
/* WARNING: Removing unreachable block (ram,0x000103276f40) */
/* WARNING: Removing unreachable block (ram,0x000103276f48) */
/* WARNING: Removing unreachable block (ram,0x000103276e8c) */
/* WARNING: Removing unreachable block (ram,0x000103276f88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103276e28(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4fbb8);
  func_0x000107c42e5c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103277100; end: 10327740b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103277100(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_4 & 1) == 0) {
      func_0x00010439b5f4(0);
      func_0x000107c610f8();
      uVar9 = 0xed;
      func_0x00010439b428(0xed,0x4f);
      uVar10 = 0;
      func_0x000103b676f0();
      func_0x000107c610f8();
      func_0x000107c61434(param_2);
      func_0x000107c61434(param_6);
      func_0x000107c61174(uVar9);
      func_0x000103b67508(param_1,param_2,param_5,param_6,uVar9);
      bVar1 = *(byte *)(param_3 + _DAT_112f4fbe8);
      puStack_a8 = param_1;
      puStack_90 = (undefined *)uVar10;
      func_0x000107c61174();
      FUN_103278798(&puStack_a8,param_8,(bVar1 ^ 0xff) & 1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(param_3);
      func_0x000100183ab8(&puStack_a8);
    }
    else {
      lVar3 = *(long *)(param_3 + _DAT_112f4fba8);
      func_0x000107c5b484();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10327740c);
        (*pcVar2)();
      }
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined **)(lVar3 + 0x20) = param_1;
        *(undefined8 *)(lVar3 + 0x28) = param_2;
        func_0x000107c61434(param_2);
        lVar5 = lVar3;
        func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
        func_0x000107c61574(lVar3);
        lVar3 = 0;
        FUN_103279aa4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar6 = &UNK_11062f710;
        func_0x000107c613fc(&UNK_11062f710,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,param_3);
        puVar7 = &UNK_11062f968;
        func_0x000107c613fc(&UNK_11062f968,0x48,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined **)(puVar7 + 0x18) = param_1;
        *(undefined8 *)(puVar7 + 0x20) = param_2;
        *(undefined8 *)(puVar7 + 0x28) = param_5;
        *(undefined8 *)(puVar7 + 0x30) = param_6;
        *(undefined8 *)(puVar7 + 0x38) = param_8;
        *(undefined8 *)(puVar7 + 0x40) = param_7;
        pcStack_88 = FUN_103279a74;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f6151c;
        puStack_90 = &UNK_11062f980;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar6 = puStack_80;
        func_0x000107c61434(param_2);
        func_0x000107c61434(param_6);
        func_0x000107c615f0(param_8);
        func_0x000107c615f0(param_7);
        func_0x000107c61574(puVar6);
        func_0x000107c4b7e8(lVar4);
        func_0x000107c61170(param_3);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar5);
        param_3 = lVar3;
      }
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 10327740c; end: 1032775ab;  */

/* WARNING: Possible PIC construction at 0x000103277520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103277580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103277524) */
/* WARNING: Removing unreachable block (ram,0x000103277584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327740c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f4fbb0) + _DAT_112fc6478);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11062f710;
    func_0x000107c613fc(&UNK_11062f710,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11062f800;
    func_0x000107c613fc(&UNK_11062f800,0x48,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(long *)(puVar3 + 0x28) = lVar1;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    *(undefined8 *)(puVar3 + 0x38) = param_5;
    *(undefined8 *)(puVar3 + 0x40) = param_3;
    func_0x000107c61434(param_2);
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(param_5);
    func_0x000107c615f0(param_3);
    func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10dba3f68,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  uVar4 = 1;
  func_0x0001032793c0(1,0xd000000000000024,0x800000010f133780);
  func_0x000107c5ed2c();
  func_0x000107c4bb48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1032775ac; end: 1032775cf;  */

void FUN_1032775ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032775d0,0,0);
  return;
}



/* Entry: 1032775d0; end: 1032776b3;  */

void FUN_1032775d0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x103277660;
    lVar1 = *(long *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    plVar2[0xf] = *(long *)(unaff_x22 + 0x40);
    plVar2[0x10] = lVar4;
    plVar2[0xd] = lVar3;
    plVar2[0xe] = lVar1;
    func_0x000107c614f0();
    plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1032777bc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010327765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1032776b4; end: 103277773;  */

void FUN_1032776b4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c61174(uVar2);
    func_0x000107c5ed2c();
    func_0x000107c4bb48(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c42804(uVar4);
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    pcVar1 = *(code **)(unaff_x22 + 0x48);
    func_0x000107c61434(uVar4);
    (*pcVar1)(uVar2,uVar4);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_1032799e0(uVar2,uVar4,uVar3);
  FUN_1032799e0(uVar2,uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103277770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103277774; end: 1032777bb;  */

void FUN_103277774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032777bc,0,0);
  return;
}



/* Entry: 1032777bc; end: 103277837;  */

void FUN_1032777bc(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103277838;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_103277888();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103277838; end: 103277877;  */

void FUN_103277838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103277878,0,0);
  return;
}



/* Entry: 103277878; end: 103277887;  */

void FUN_103277878(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103277884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined1 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 103277888; end: 103277b07;  */

void FUN_103277888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_d0 = param_3;
  uStack_c8 = param_1;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_103279aa4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar11 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar2 = lVar12;
  func_0x000107c5fff0(lVar12);
  (**(code **)(lVar11 + 8))(lVar12,lVar3);
  puVar4 = &UNK_11062f828;
  func_0x000107c613fc(&UNK_11062f828,0x40,7);
  uVar6 = uStack_c0;
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x30) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x38) = uStack_b8;
  uStack_70 = 0x1032799f8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11062f840;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c615f0(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61174(uVar6);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar7;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar1,uVar6);
  func_0x000107c5ffe8(0,lVar10,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 103277b08; end: 103277d2b;  */

void FUN_103277b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar2 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  puVar3 = &UNK_11062f878;
  func_0x000107c613fc(&UNK_11062f878,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x103279a08;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101341328;
  puStack_88 = &UNK_11062f890;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  puVar3 = &UNK_11062f710;
  puVar5 = puVar3;
  func_0x000107c613fc(&UNK_11062f710,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_5);
  puVar6 = &UNK_11062f8c8;
  func_0x000107c613fc(&UNK_11062f8c8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  pcStack_80 = (code *)0x103279a10;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11062f8e0;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_78;
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar6);
  func_0x000107c613fc(&UNK_11062f710,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_5);
  puVar6 = &UNK_11062f918;
  func_0x000107c613fc(&UNK_11062f918,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined **)(puVar6 + 0x28) = puVar3;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  pcStack_80 = FUN_103279a64;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10125bb68;
  puStack_88 = &UNK_11062f930;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  puVar3 = puStack_78;
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c44380(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103277d2c; end: 103278403;  */

void FUN_103277d2c(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  long extraout_x8;
  ulong *puVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  byte bVar18;
  byte extraout_w13;
  byte bVar19;
  byte extraout_w14;
  byte bVar20;
  byte *pbVar21;
  long lVar22;
  long lVar23;
  byte abStack_60 [16];
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar22 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar17 = (uint)(param_2 >> 0x20);
  bVar20 = extraout_w14;
  bVar19 = extraout_w13;
  if (uVar17 >> 0x1e < 2) {
    if (uVar17 >> 0x1e == 0) {
      uVar6 = param_1 >> 8;
      uVar7 = param_1 >> 0x10;
      uVar8 = param_1 >> 0x18;
      uVar9 = param_1 >> 0x20;
      uVar10 = param_1 >> 0x28;
      uVar11 = param_1 >> 0x30;
      uVar12 = param_1 >> 0x38;
      bVar13 = (byte)(param_2 >> 8);
      bVar15 = (byte)(param_2 >> 0x10);
      bVar16 = (byte)(param_2 >> 0x18);
      bVar18 = (byte)(param_2 >> 0x28);
      goto LAB_103277ec4;
    }
    lVar23 = (long)(int)param_1;
    if ((long)param_1 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103277f60);
      (*pcVar2)();
    }
    func_0x000107c5ec30();
    if (lVar4 == 0) {
      func_0x000107c5ec38();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103277f80);
      (*pcVar2)();
    }
    lVar5 = lVar4;
    func_0x000107c5ec3c();
    if (SBORROW8(lVar23,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103277f68);
      (*pcVar2)();
    }
    pbVar21 = (byte *)((lVar23 - lVar5) + lVar4);
    func_0x000107c5ec38();
    if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103277f84);
      (*pcVar2)();
    }
  }
  else {
    if (uVar17 >> 0x1e != 2) {
      param_1 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      param_2 = 0;
      bVar13 = 0;
      bVar15 = 0;
      bVar16 = 0;
      uVar17 = 0;
      bVar18 = 0;
      goto LAB_103277ec4;
    }
    lVar23 = *(long *)(param_1 + 0x10);
    func_0x000107c5ec30();
    if (lVar4 == 0) {
      func_0x000107c5ec38();
LAB_103277f70:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103277f74);
      (*pcVar2)();
    }
    lVar5 = lVar4;
    func_0x000107c5ec3c();
    if (SBORROW8(lVar23,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103277f64);
      (*pcVar2)();
    }
    pbVar21 = (byte *)((lVar23 - lVar5) + lVar4);
    func_0x000107c5ec38();
    if (pbVar21 == (byte *)0x0) goto LAB_103277f70;
  }
  param_1 = (ulong)*pbVar21;
  uVar6 = (ulong)pbVar21[1];
  uVar7 = (ulong)pbVar21[2];
  uVar8 = (ulong)pbVar21[3];
  uVar9 = (ulong)pbVar21[4];
  uVar10 = (ulong)pbVar21[5];
  uVar11 = (ulong)pbVar21[6];
  uVar12 = (ulong)pbVar21[7];
  param_2 = (ulong)pbVar21[8];
  bVar13 = pbVar21[9];
  bVar15 = pbVar21[10];
  bVar16 = pbVar21[0xb];
  uVar17 = (uint)pbVar21[0xc];
  bVar18 = pbVar21[0xd];
  bVar19 = pbVar21[0xe];
  bVar20 = pbVar21[0xf];
LAB_103277ec4:
  abStack_60[lVar1 + 7] = bVar20;
  abStack_60[lVar1 + 6] = bVar19;
  abStack_60[lVar1 + 5] = bVar18;
  abStack_60[lVar1 + 4] = (byte)uVar17;
  abStack_60[lVar1 + 3] = bVar16;
  abStack_60[lVar1 + 2] = bVar15;
  abStack_60[lVar1 + 1] = bVar13;
  abStack_60[lVar1] = (char)param_2;
  func_0x000107c5eebc(&stack0xffffffffffffffb0 + lVar1,param_1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                      ,uVar12);
  func_0x000107c5eeac();
  uVar7 = uVar6;
  func_0x000107c5fb1c();
  func_0x000107c6142c(uVar6);
  puVar14 = *(ulong **)(*(long *)(param_3 + 0x40) + 0x28);
  *puVar14 = param_1;
  puVar14[1] = uVar7;
  *(undefined1 *)(puVar14 + 2) = 0;
  func_0x000107c6144c(param_3);
  (**(code **)(lVar22 + 8))(&stack0xffffffffffffffb0 + lVar1,lVar3);
  return;
}



/* Entry: 103278404; end: 103278797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103278404(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar4 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (param_1 != 0) {
      uVar12 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uVar5 = param_1;
        if (-1 < (long)param_1) {
          uVar5 = uVar12;
        }
        func_0x000107c60480();
      }
      if (uVar5 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103278798);
            (*pcVar3)();
          }
          lVar6 = *(long *)(param_1 + 0x20);
          func_0x000107c61174();
        }
        else {
          lVar6 = 0;
          func_0x00010103193c(0,param_1);
        }
        *(undefined1 *)(lVar4 + _DAT_112f4fbe8) = 1;
        uStack_b8 = param_4;
        uStack_b0 = param_5;
        uStack_a8 = param_6;
        uStack_a0 = param_7;
        func_0x000107c61614(auStack_98,param_8);
        lVar10 = _DAT_112f4fbe0;
        func_0x000107c61428(lVar4 + _DAT_112f4fbe0,auStack_90,0x21,0);
        func_0x000107c61434(param_5);
        func_0x000107c61434(param_7);
        lVar10 = lVar4 + lVar10;
        func_0x0001032797fc(&uStack_b8,lVar10);
        func_0x000107c614a8(auStack_90);
        lVar7 = lVar6;
        func_0x000107c5b37c();
        func_0x000107c61180();
        if (lVar7 == 0) {
          lVar11 = 0;
          lVar10 = 0;
        }
        else {
          lVar11 = lVar7;
          func_0x000107c5faec();
          func_0x000107c61170(lVar7);
        }
        func_0x000104316d84(0);
        uVar8 = 0xef;
        func_0x000104316bcc(0xef,0,0,0xc);
        func_0x000104318244(0);
        func_0x000107c610f8();
        func_0x000107c61434(lVar10);
        func_0x0001043179f8(lVar11,lVar10,uVar8,0,0,0,0,0,0,0);
        puVar1 = (undefined8 *)(lVar11 + _DAT_11306de60);
        func_0x000107c61428(puVar1,&uStack_b8,1,0);
        uVar8 = puVar1[1];
        *puVar1 = param_4;
        puVar1[1] = param_5;
        func_0x000107c6142c(uVar8);
        func_0x000107c61434(param_5);
        func_0x000107c6142c(lVar10);
        func_0x000104317408(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar11);
        func_0x000107c61174();
        func_0x000107c615f0(param_9);
        func_0x000104317114();
        func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112f4fbc0));
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(param_9);
        return;
      }
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar9 = 0x1b;
    func_0x00010439b428(0x1b,0x4f);
    uVar8 = 0;
    func_0x000103b676f0();
    func_0x000107c610f8();
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61174(uVar9);
    func_0x000103b67508(param_4,param_5,param_6,param_7,uVar9);
    bVar2 = *(byte *)(param_3 + _DAT_112f4fbe8);
    uStack_b8 = param_4;
    uStack_a0 = uVar8;
    func_0x000107c61174();
    FUN_103278798(&uStack_b8,param_8,(bVar2 ^ 0xff) & 1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(param_3);
    func_0x000100183ab8(&uStack_b8);
  }
  return;
}



/* Entry: 103278798; end: 103278a5b;  */

/* WARNING: Possible PIC construction at 0x000103278800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103278a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103278804) */
/* WARNING: Removing unreachable block (ram,0x0001032789e4) */
/* WARNING: Removing unreachable block (ram,0x0001032789e8) */
/* WARNING: Removing unreachable block (ram,0x000103278808) */
/* WARNING: Removing unreachable block (ram,0x000103278a30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103278798(undefined8 param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [32];
  undefined *puVar2;
  
  ppuVar6 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c4a02c();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f4fbd0);
    func_0x000107c4e26c(uVar3);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  pcVar4 = "launchPage(_:delegate:endScopeOnLaunch:)";
  func_0x0001000c10c0("launchPage(_:delegate:endScopeOnLaunch:)");
  func_0x000107c61180();
  puVar2 = &UNK_11062f710;
  func_0x000107c613fc(&UNK_11062f710,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x0001000bb420(param_1,auStack_60);
  puVar5 = &UNK_11062f738;
  func_0x000107c613fc(&UNK_11062f738,0x41,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  func_0x000100102924(auStack_60,puVar5 + 0x18);
  *(undefined8 *)(puVar5 + 0x38) = param_2;
  puVar5[0x40] = param_3 & 1;
  pcStack_70 = FUN_10327984c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11062f750;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 103278a5c; end: 103278b9f;  */

void FUN_103278a5c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103278798(param_2,param_3,param_4 & 1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103278ba0; end: 103278bff; -[_TtC35SubscriptionsDeeplinkImplementation28SubscriptionsDeeplinkHandler init] */

void FUN_103278ba0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SubscriptionsDeeplinkImplementation.SubscriptionsDeeplinkHandler",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103278bcc);
  (*pcVar1)();
}



/* Entry: 103278c00; end: 103278cab; -[_TtC35SubscriptionsDeeplinkImplementation28SubscriptionsDeeplinkHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103278c00(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fba8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fbb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fbb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fbc0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4fbc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4fbd0));
  func_0x000100f21b00(param_1 + _DAT_112f4fbd8);
  FUN_103279888(param_1 + _DAT_112f4fbe0,0x112f4fc18,&UNK_10dba3f58);
  return;
}



/* Entry: 103278cac; end: 103278d0f; -[_TtC35SubscriptionsDeeplinkImplementation28SubscriptionsDeeplinkHandler unifiedPublicProfileScopeWasExposed:withViewController:] */

/* WARNING: Possible PIC construction at 0x000103278cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103278cf4) */

void FUN_103278cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103279538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103278d10; end: 103278d13; -[_TtC35SubscriptionsDeeplinkImplementation28SubscriptionsDeeplinkHandler unifiedPublicProfileShouldPresentProfileWithId:withLoggingInfo:isPublisherProfile:onViewController:userId:] */

void FUN_103278d10(void)

{
  return;
}



/* Entry: 103278d14; end: 103278d5f; -[_TtC35SubscriptionsDeeplinkImplementation28SubscriptionsDeeplinkHandler unifiedPublicProfileDidComplete:] */

/* WARNING: Possible PIC construction at 0x000103278d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103278d4c) */

void FUN_103278d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1032796fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103278d60; end: 103278d7f;  */

void FUN_103278d60(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4840);
  return;
}



/* Entry: 103278d80; end: 103278ddb;  */

long FUN_103278d80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103278ddc; end: 103278ea7;  */

undefined8 * FUN_103278ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c6160c(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 103278ea8; end: 103278f23;  */

undefined8 * FUN_103278ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000107c61620(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 103278f24; end: 103278fc3;  */

int FUN_103278f24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103278fc4; end: 103279537;  */

undefined8 FUN_103278fc4(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == (undefined **)0x0) {
    return 0;
  }
  ppuVar2 = param_1;
  func_0x000107c615f0();
  func_0x000107c4e434();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e50738);
    lVar3 = param_2;
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x000107c5faec();
    lVar3 = param_2;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e50738;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar1 == ppuVar2 && param_2 == lVar3) {
        lVar4 = lVar3;
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar3);
      }
      else {
        lVar4 = param_2;
        func_0x000107c605b8();
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar3);
        if (((ulong)ppuVar1 & 1) == 0) goto LAB_10327908c;
      }
      ppuVar2 = param_1;
      func_0x000107c4e434();
      func_0x000107c61180();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2;
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar2);
        if (((ppuVar1 == (undefined **)0x6567616e616d) && (lVar4 == -0x1a00000000000000)) ||
           (ppuVar2 = ppuVar1, lVar3 = lVar4,
           func_0x000107c605b8(ppuVar1,lVar4,0x6567616e616d,0xe600000000000000,0),
           ((ulong)ppuVar2 & 1) != 0)) {
          func_0x000107c615e8(param_1);
          func_0x000107c6142c(lVar4);
          return 1;
        }
        if (((ppuVar1 != (undefined **)0xd000000000000012) || (lVar4 != -0x7ffffffef0ecc7d0)) &&
           (ppuVar2 = ppuVar1, lVar3 = lVar4,
           func_0x000107c605b8(ppuVar1,lVar4,0xd000000000000012,0x800000010f133830,0),
           ((ulong)ppuVar2 & 1) == 0)) {
          if ((ppuVar1 == (undefined **)0x73726f7461657263) && (lVar4 == -0x1800000000000000)) {
            func_0x000107c6142c(0xe800000000000000);
          }
          else {
            lVar3 = lVar4;
            func_0x000107c605b8();
            func_0x000107c6142c(lVar4);
            if (((ulong)ppuVar1 & 1) == 0) {
              func_0x000107c615e8(param_1);
              return 1;
            }
          }
          ppuVar2 = param_1;
          func_0x000107c4e434();
          func_0x000107c61180();
          if (ppuVar2 != (undefined **)0x0) {
            func_0x000107c5faec();
            func_0x000107c61170(ppuVar2);
          }
          ppuVar2 = param_1;
          func_0x000107c4e434();
          func_0x000107c61180();
          if (ppuVar2 == (undefined **)0x0) {
            func_0x000107c615e8(param_1);
            return 2;
          }
          ppuVar1 = ppuVar2;
          func_0x000107c5faec();
          func_0x000107c61170(ppuVar2);
          if ((ppuVar1 == (undefined **)0x6269726373627573) && (lVar3 == -0x16ffffffffffff9b)) {
            func_0x000107c6142c(0xe900000000000065);
            func_0x000107c615e8(param_1);
          }
          else {
            func_0x000107c605b8(ppuVar1,lVar3,0x6269726373627573,0xe900000000000065,0);
            func_0x000107c6142c(lVar3);
            func_0x000107c615e8(param_1);
            if (((ulong)ppuVar1 & 1) == 0) {
              return 2;
            }
          }
          return 3;
        }
        func_0x000107c6142c(lVar4);
        ppuVar2 = param_1;
        func_0x000107c4e434();
        func_0x000107c61180();
        if (ppuVar2 == (undefined **)0x0) {
          func_0x000107c615e8(param_1);
          return 4;
        }
        ppuVar1 = ppuVar2;
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar2);
        if ((ppuVar1 == (undefined **)0x74696465) && (lVar3 == -0x1c00000000000000)) {
          func_0x000107c6142c(0xe400000000000000);
          func_0x000107c615e8(param_1);
        }
        else {
          func_0x000107c605b8(ppuVar1,lVar3,0x74696465,0xe400000000000000,0);
          func_0x000107c6142c(lVar3);
          func_0x000107c615e8(param_1);
          if (((ulong)ppuVar1 & 1) == 0) {
            return 4;
          }
        }
        return 5;
      }
      goto LAB_10327908c;
    }
  }
  func_0x000107c6142c(lVar3);
LAB_10327908c:
  func_0x000107c615e8(param_1);
  return 0;
}



/* Entry: 103279538; end: 1032796fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103279538(void)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar2 = _DAT_112f4fbe0;
  func_0x000107c61428(unaff_x20 + _DAT_112f4fbe0,auStack_a0,0,0);
  func_0x0001032798c8(unaff_x20 + lVar2,&uStack_d0,0x112f4fc18,&UNK_10dba3f58);
  if (lStack_c8 == 0) {
    func_0x000103279888(&uStack_d0,0x112f4fc18,&UNK_10dba3f58);
  }
  else {
    FUN_103279790(&uStack_d0,&uStack_88);
    puVar3 = auStack_68;
    func_0x000107c61618(puVar3);
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar4 = 0x1b;
    func_0x00010439b428(0x1b,0x4f);
    uVar5 = 0;
    func_0x000103b676f0();
    func_0x000107c610f8();
    func_0x000107c61434(uStack_80);
    func_0x000107c61434(uStack_70);
    func_0x000107c61174(uVar4);
    func_0x000103b67508(uStack_88,uStack_80,uStack_78,uStack_70,uVar4);
    bVar1 = *(byte *)(unaff_x20 + _DAT_112f4fbe8);
    uVar6 = uStack_88;
    uStack_b8 = uVar5;
    func_0x000107c61174();
    FUN_103278798(&uStack_d0,puVar3,(bVar1 ^ 0xff) & 1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(puVar3);
    func_0x000100183ab8(&uStack_d0);
    func_0x0001032797d0(&uStack_88);
    uStack_b0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x000107c61428(unaff_x20 + lVar2,auStack_e8,0x21,0);
    func_0x0001032797fc(&uStack_d0,unaff_x20 + lVar2);
    func_0x000107c614a8(auStack_e8);
  }
  return;
}



/* Entry: 1032796fc; end: 10327978f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032796fc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4fbc0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = _DAT_112f4fbe8;
  if (*(char *)(unaff_x20 + _DAT_112f4fbe8) == '\x01') {
    lVar2 = unaff_x20 + _DAT_112f4fbd8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c42804();
      func_0x000107c615e8(lVar2);
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 103279790; end: 10327984b;  */

undefined8 * FUN_103279790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  uVar1 = param_1[2];
  param_2[3] = param_1[3];
  param_2[2] = uVar1;
  func_0x000107c61620(param_2 + 4,param_1 + 4);
  return param_2;
}



/* Entry: 10327984c; end: 103279887;  */

void FUN_10327984c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar1 = *(byte *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_103278798(unaff_x20 + 0x18,uVar3,bVar1 & 1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103279888; end: 10327990f;  */

undefined8 FUN_103279888(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103279910; end: 1032799a3;  */

void FUN_103279910(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1032799a4;
  plVar7[10] = lVar6;
  plVar7[0xb] = lVar8;
  plVar7[8] = lVar5;
  plVar7[9] = lVar3;
  plVar7[6] = lVar4;
  plVar7[7] = lVar2;
  plVar7[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032775d0,0,0);
  return;
}



/* Entry: 1032799a4; end: 1032799df;  */

void FUN_1032799a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001032799dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1032799e0; end: 103279a1b;  */

void FUN_1032799e0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103279a1c; end: 103279a63;  */

void FUN_103279a1c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103279a64; end: 103279a73;  */

void FUN_103279a64(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined1 auStack_c8 [80];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0,lVar4,*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_c8;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined1 **)(lVar4 + 0x28) = puVar9;
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd000000000000023;
    uStack_70 = 0x800000010f1337b0;
    func_0x000107c5fb78(uVar8,uVar2);
    puVar3 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar4 + 0x30) = uStack_78;
    *(undefined8 *)(lVar4 + 0x38) = uStack_70;
    lVar7 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    FUN_103279888((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar8 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010dba3f00);
    lVar4 = lVar7;
    func_0x000107c5f9dc(lVar7,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar7);
    func_0x000107c466bc();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar4);
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd000000000000023;
    uStack_70 = 0x800000010f1337b0;
    func_0x000107c5fb78(uVar8,uVar2);
    uVar8 = uStack_70;
    puVar5 = (undefined *)0x2;
    func_0x0001032793c0(2,uStack_78,uStack_70);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(uVar8);
  }
  puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28);
  *puVar10 = puVar5;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 1;
  func_0x000107c6144c(lVar1);
  return;
}



/* Entry: 103279a74; end: 103279aa3;  */

void FUN_103279a74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103278404(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103279aa4; end: 103279ae3;  */

void FUN_103279aa4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103279ae4; end: 103279b13;  */

void FUN_103279ae4(long param_1,long param_2)

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



/* Entry: 103279b14; end: 103279d13;  */

void FUN_103279b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062f9b8;
  func_0x000107c613fc(&UNK_11062f9b8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_103279d14,puVar1);
  return;
}



/* Entry: 103279d14; end: 103279d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103279d14(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_10327a9bc();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112f4fc20) = 0;
  *(long *)(lVar9 + _DAT_112f4fc28) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112f4fc30) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f4fc38) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112f4fc40) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f4fc48) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f4fc50) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f4fc58) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 103279d28; end: 103279df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103279d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc38) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc40) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc48) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc50) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f4fc58) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103279df8; end: 103279e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103279df8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4fc20;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4fc20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103279e5c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 103279e5c; end: 10327a037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103279e5c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x0001000285a8(0x112f4fc88,&UNK_10dba3fe8);
  func_0x000107c610f8();
  func_0x00010017da58(lVar4);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar7 = lStack_58;
  uVar8 = *(undefined8 *)(lStack_58 + _DAT_113041e50);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_58);
  lVar6 = 0;
  FUN_103278d60();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x000107c61614(lVar7 + _DAT_112f4fbd8,0);
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f4fbe0);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(lVar7 + _DAT_112f4fbe8) = 0;
  *(long *)(lVar7 + _DAT_112f4fba8) = lVar4;
  *(long *)(lVar7 + _DAT_112f4fbb0) = lVar2;
  *(long *)(lVar7 + _DAT_112f4fbb8) = lVar3;
  *(undefined **)(lVar7 + _DAT_112f4fbc0) = puVar5;
  *(undefined8 *)(lVar7 + _DAT_112f4fbc8) = uVar8;
  *(long *)(lVar7 + _DAT_112f4fbd0) = lStack_58;
  lStack_68 = lVar7;
  lStack_60 = lVar6;
  func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10327a038; end: 10327a097; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin init] */

void FUN_10327a038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SubscriptionsDeeplinkImplementation.SubscriptionsDeeplinkProcessorPlugin",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327a064);
  (*pcVar1)();
}



/* Entry: 10327a098; end: 10327a12f; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327a098(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc40));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4fc58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fc20));
  return;
}



/* Entry: 10327a130; end: 10327a13f; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin identifier] */

void FUN_10327a130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110e50738);
  return;
}



/* Entry: 10327a140; end: 10327a147; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin priority] */

undefined8 FUN_10327a140(void)

{
  return 0;
}



/* Entry: 10327a148; end: 10327a1cf; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin canProvideProcessorForFeature:] */

uint FUN_10327a148(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e50738;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 10327a1d0; end: 10327a22b; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin isValidDeepLink:] */

uint FUN_10327a1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10327a5a0(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10327a22c; end: 10327a22f; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_10327a22c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10327a230; end: 10327a297; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10327a230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_10327a668(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327a298; end: 10327a29f; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin shouldForceNavigation] */

undefined8 FUN_10327a298(void)

{
  return 0;
}



/* Entry: 10327a2a0; end: 10327a2a3; -[_TtC35SubscriptionsDeeplinkImplementation36SubscriptionsDeeplinkProcessorPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10327a2a0(void)

{
  return;
}



/* Entry: 10327a2a4; end: 10327a59f;  */

/* WARNING: Possible PIC construction at 0x00010327a314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327a33c) */
/* WARNING: Removing unreachable block (ram,0x00010327a398) */
/* WARNING: Removing unreachable block (ram,0x00010327a54c) */
/* WARNING: Removing unreachable block (ram,0x00010327a318) */
/* WARNING: Removing unreachable block (ram,0x00010327a57c) */
/* WARNING: Removing unreachable block (ram,0x00010327a584) */
/* WARNING: Removing unreachable block (ram,0x00010327a588) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327a2a4(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  
  uVar6 = param_3;
  uVar7 = param_3;
  func_0x000107c61604(param_4 + _DAT_112f4fbd8);
  *(undefined1 *)(param_4 + _DAT_112f4fbe8) = 0;
  FUN_103278fc4();
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 3) {
    if ((param_1 & 0xff) == 0) {
      func_0x000107c6142c(uVar7);
      uVar5 = 0;
      func_0x0001032793c0(0,0x2064696c61766e69,0xed00006574756f72);
      func_0x000107c5ed2c();
      func_0x000107c4bb48(param_3);
      goto code_r0x000107c61170;
    }
    if (uVar1 == 1) goto code_r0x000107c6142c;
    if (uVar7 != 0) {
      uVar2 = uVar6 & 0xffffffffffff;
      if ((uVar7 & 0x2000000000000000) != 0) {
        uVar2 = uVar7 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        puVar3 = &UNK_11062fa00;
        func_0x000107c613fc(&UNK_11062fa00,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_4);
        puVar4 = &UNK_11062fa50;
        func_0x000107c613fc(&UNK_11062fa50,0x40,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        puVar4[0x18] = 0;
        *(ulong *)(puVar4 + 0x20) = uVar6;
        *(ulong *)(puVar4 + 0x28) = uVar7;
        *(undefined8 *)(puVar4 + 0x30) = param_2;
        *(ulong *)(puVar4 + 0x38) = param_3;
        func_0x000107c6157c(puVar3);
        func_0x000107c61434(uVar7);
        func_0x000107c61174(param_2);
        func_0x000107c615f0(param_3);
        pcVar8 = (code *)0x10327aa30;
        goto LAB_10327a4e4;
      }
    }
  }
  else {
    if (uVar1 != 3) goto code_r0x000107c6142c;
    if (uVar7 != 0) {
      uVar2 = uVar6 & 0xffffffffffff;
      if ((uVar7 & 0x2000000000000000) != 0) {
        uVar2 = uVar7 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        puVar3 = &UNK_11062fa00;
        func_0x000107c613fc(&UNK_11062fa00,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_4);
        puVar4 = &UNK_11062fa28;
        func_0x000107c613fc(&UNK_11062fa28,0x40,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        puVar4[0x18] = 1;
        *(ulong *)(puVar4 + 0x20) = uVar6;
        *(ulong *)(puVar4 + 0x28) = uVar7;
        *(undefined8 *)(puVar4 + 0x30) = param_2;
        *(ulong *)(puVar4 + 0x38) = param_3;
        func_0x000107c61434(uVar7);
        func_0x000107c61174(param_2);
        func_0x000107c615f0(param_3);
        func_0x000107c6157c(puVar3);
        pcVar8 = FUN_10327a9dc;
LAB_10327a4e4:
        FUN_10327740c(uVar6,uVar7,param_3,pcVar8,puVar4);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar4);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
        return;
      }
    }
  }
  uVar5 = 0;
  func_0x0001032793c0(0,0xd000000000000010,0x800000010f1338c0);
  func_0x000107c5ed2c();
  func_0x000107c4bb48(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10327a5a0; end: 10327a667;  */

uint FUN_10327a5a0(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e50738);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e50738;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_10327a64c;
    }
  }
  uVar1 = 0;
LAB_10327a64c:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 10327a668; end: 10327a9ab;  */

/* WARNING: Possible PIC construction at 0x00010327a6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327a744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327a928) */
/* WARNING: Removing unreachable block (ram,0x00010327a6fc) */
/* WARNING: Removing unreachable block (ram,0x00010327a708) */
/* WARNING: Removing unreachable block (ram,0x00010327a748) */
/* WARNING: Removing unreachable block (ram,0x00010327a750) */
/* WARNING: Removing unreachable block (ram,0x00010327a79c) */
/* WARNING: Removing unreachable block (ram,0x00010327a83c) */
/* WARNING: Removing unreachable block (ram,0x00010327a844) */
/* WARNING: Removing unreachable block (ram,0x00010327a7b8) */
/* WARNING: Removing unreachable block (ram,0x00010327a98c) */
/* WARNING: Removing unreachable block (ram,0x00010327a990) */

void FUN_10327a668(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e50738);
    lVar3 = param_2;
  }
  else {
    ppuVar1 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e50738;
    func_0x000107c5faec();
    lVar3 = lVar4;
    if ((param_2 != 0) && (lVar3 = param_2, ppuVar1 != ppuVar2 || param_2 != lVar4)) {
      func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar4,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 10327a9ac; end: 10327a9bb;  */

undefined1  [16] FUN_10327a9ac(void)

{
  return ZEXT816(0x11062f9e0);
}



/* Entry: 10327a9bc; end: 10327a9db;  */

void FUN_10327a9bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4940);
  return;
}



/* Entry: 10327a9dc; end: 10327a9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327a9dc(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  bVar4 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar14 + 0x10,auStack_78,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61618();
  if (lVar14 != 0) {
    if ((bVar4 & 1) == 0) {
      func_0x00010439b5f4(0);
      func_0x000107c610f8();
      uVar12 = 0xed;
      func_0x00010439b428(0xed,0x4f);
      uVar13 = 0;
      func_0x000103b676f0();
      func_0x000107c610f8();
      func_0x000107c61434(param_2);
      func_0x000107c61434(uVar2);
      func_0x000107c61174(uVar12);
      func_0x000103b67508(param_1,param_2,uVar1,uVar2,uVar12);
      bVar4 = *(byte *)(lVar14 + _DAT_112f4fbe8);
      puStack_a8 = param_1;
      puStack_90 = (undefined *)uVar13;
      func_0x000107c61174();
      FUN_103278798(&puStack_a8,uVar3,(bVar4 ^ 0xff) & 1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar14);
      func_0x000100183ab8(&puStack_a8);
    }
    else {
      lVar6 = *(long *)(lVar14 + _DAT_112f4fba8);
      func_0x000107c5b484();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10327740c);
        (*pcVar5)();
      }
      lVar7 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        lVar6 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x18) = 2;
        *(undefined8 *)(lVar6 + 0x10) = 1;
        *(undefined **)(lVar6 + 0x20) = param_1;
        *(undefined8 *)(lVar6 + 0x28) = param_2;
        func_0x000107c61434(param_2);
        lVar8 = lVar6;
        func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
        func_0x000107c61574(lVar6);
        lVar6 = 0;
        FUN_103279aa4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar9 = &UNK_11062f710;
        func_0x000107c613fc(&UNK_11062f710,0x18,7);
        func_0x000107c61614(puVar9 + 0x10,lVar14);
        puVar10 = &UNK_11062f968;
        func_0x000107c613fc(&UNK_11062f968,0x48,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        *(undefined **)(puVar10 + 0x18) = param_1;
        *(undefined8 *)(puVar10 + 0x20) = param_2;
        *(undefined8 *)(puVar10 + 0x28) = uVar1;
        *(undefined8 *)(puVar10 + 0x30) = uVar2;
        *(undefined8 *)(puVar10 + 0x38) = uVar3;
        *(undefined8 *)(puVar10 + 0x40) = uVar13;
        pcStack_88 = FUN_103279a74;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f6151c;
        puStack_90 = &UNK_11062f980;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar9 = puStack_80;
        func_0x000107c61434(param_2);
        func_0x000107c61434(uVar2);
        func_0x000107c615f0(uVar3);
        func_0x000107c615f0(uVar13);
        func_0x000107c61574(puVar9);
        func_0x000107c4b7e8(lVar7);
        func_0x000107c61170(lVar14);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(lVar8);
        lVar14 = lVar6;
      }
      func_0x000107c61170(lVar14);
    }
  }
  return;
}



/* Entry: 10327a9e0; end: 10327aa1b;  */

void FUN_10327a9e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10327aa1c; end: 10327aa33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327aa1c(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  bVar4 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar14 + 0x10,auStack_78,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61618();
  if (lVar14 != 0) {
    if ((bVar4 & 1) == 0) {
      func_0x00010439b5f4(0);
      func_0x000107c610f8();
      uVar12 = 0xed;
      func_0x00010439b428(0xed,0x4f);
      uVar13 = 0;
      func_0x000103b676f0();
      func_0x000107c610f8();
      func_0x000107c61434(param_2);
      func_0x000107c61434(uVar2);
      func_0x000107c61174(uVar12);
      func_0x000103b67508(param_1,param_2,uVar1,uVar2,uVar12);
      bVar4 = *(byte *)(lVar14 + _DAT_112f4fbe8);
      puStack_a8 = param_1;
      puStack_90 = (undefined *)uVar13;
      func_0x000107c61174();
      FUN_103278798(&puStack_a8,uVar3,(bVar4 ^ 0xff) & 1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar14);
      func_0x000100183ab8(&puStack_a8);
    }
    else {
      lVar6 = *(long *)(lVar14 + _DAT_112f4fba8);
      func_0x000107c5b484();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10327740c);
        (*pcVar5)();
      }
      lVar7 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        lVar6 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x18) = 2;
        *(undefined8 *)(lVar6 + 0x10) = 1;
        *(undefined **)(lVar6 + 0x20) = param_1;
        *(undefined8 *)(lVar6 + 0x28) = param_2;
        func_0x000107c61434(param_2);
        lVar8 = lVar6;
        func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
        func_0x000107c61574(lVar6);
        lVar6 = 0;
        FUN_103279aa4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar9 = &UNK_11062f710;
        func_0x000107c613fc(&UNK_11062f710,0x18,7);
        func_0x000107c61614(puVar9 + 0x10,lVar14);
        puVar10 = &UNK_11062f968;
        func_0x000107c613fc(&UNK_11062f968,0x48,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        *(undefined **)(puVar10 + 0x18) = param_1;
        *(undefined8 *)(puVar10 + 0x20) = param_2;
        *(undefined8 *)(puVar10 + 0x28) = uVar1;
        *(undefined8 *)(puVar10 + 0x30) = uVar2;
        *(undefined8 *)(puVar10 + 0x38) = uVar3;
        *(undefined8 *)(puVar10 + 0x40) = uVar13;
        pcStack_88 = FUN_103279a74;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f6151c;
        puStack_90 = &UNK_11062f980;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar9 = puStack_80;
        func_0x000107c61434(param_2);
        func_0x000107c61434(uVar2);
        func_0x000107c615f0(uVar3);
        func_0x000107c615f0(uVar13);
        func_0x000107c61574(puVar9);
        func_0x000107c4b7e8(lVar7);
        func_0x000107c61170(lVar14);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(lVar8);
        lVar14 = lVar6;
      }
      func_0x000107c61170(lVar14);
    }
  }
  return;
}


