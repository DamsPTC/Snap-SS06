/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10174e0e0; end: 10174e13f; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker init] */

void FUN_10174e0e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComplianceRestrictedAppExperienceServiceImpl.ComplianceRestrictedAppExperienceChecker"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174e10c);
  (*pcVar1)();
}



/* Entry: 10174e140; end: 10174e14f;  */

undefined1  [16] FUN_10174e140(void)

{
  return ZEXT816(0x110402760);
}



/* Entry: 10174e150; end: 10174e18b; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174e150(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc6440));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dc6448 + 8))
  ;
  return;
}



/* Entry: 10174e18c; end: 10174e19b;  */

undefined1  [16] FUN_10174e18c(void)

{
  return ZEXT816(0x110402780);
}



/* Entry: 10174e19c; end: 10174e267;  */

long FUN_10174e19c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  func_0x000107c5fb78();
  uVar1 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010efba1a0);
  func_0x000107c6142c(0x800000010efba1a0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar3 = unaff_x20;
    func_0x000107c6148c(unaff_x20,puVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c3ebcc();
    }
    func_0x000107c615e8(unaff_x20);
  }
  return lVar3;
}



/* Entry: 10174e268; end: 10174e31f;  */

/* WARNING: Possible PIC construction at 0x00010174e300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010174e304) */

void FUN_10174e268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fadc(0xd000000000000032,0x800000010efba1a0);
  func_0x000107c6142c(0x800000010efba1a0);
  func_0x000107c56bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10174e320; end: 10174e51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174e320(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar2 = PTR_PTR_1126a7aa8;
  func_0x000107c610f8();
  func_0x000107c46bb4();
  func_0x000107c61170(puStack_80);
  puVar3 = puStack_80;
  func_0x0001000ad7c4();
  lVar4 = *(long *)(puVar1 + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar5 = PTR_PTR_1126a7ab0;
  func_0x000107c610f8(PTR_PTR_1126a7ab0);
  func_0x000107c492c0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar4);
  puVar6 = PTR_PTR_1126b85d0;
  func_0x000107c61168();
  func_0x000107c3abd0();
  func_0x000107c61180();
  func_0x000107c52a34();
  func_0x000107c5a414(puVar6);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_113091ae0);
  puVar3 = &UNK_1104028e8;
  func_0x000107c613fc(&UNK_1104028e8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_60 = FUN_10174e644;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e2e93c;
  puStack_68 = &UNK_110402900;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4c638(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  *param_1 = puVar6;
  return;
}



/* Entry: 10174e51c; end: 10174e537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174e51c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar7 = &puStack_80;
  func_0x000100083b20(&puStack_80,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                      *(undefined8 *)(unaff_x20 + 0x20));
  puVar1 = puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar2 = PTR_PTR_1126a7aa8;
  func_0x000107c610f8();
  func_0x000107c46bb4();
  func_0x000107c61170(puStack_80);
  puVar3 = puStack_80;
  func_0x0001000ad7c4();
  lVar4 = *(long *)(puVar1 + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  puVar5 = PTR_PTR_1126a7ab0;
  func_0x000107c610f8(PTR_PTR_1126a7ab0);
  func_0x000107c492c0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar4);
  puVar6 = PTR_PTR_1126b85d0;
  func_0x000107c61168();
  func_0x000107c3abd0();
  func_0x000107c61180();
  func_0x000107c52a34();
  func_0x000107c5a414(puVar6);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_113091ae0);
  puVar3 = &UNK_1104028e8;
  func_0x000107c613fc(&UNK_1104028e8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_60 = FUN_10174e644;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e2e93c;
  puStack_68 = &UNK_110402900;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4c638(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  *param_1 = puVar6;
  return;
}



/* Entry: 10174e538; end: 10174e643;  */

void FUN_10174e538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010efba220);
    param_1 = -0x2fffffffffffffe5;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010d9862e0);
    func_0x000107c4ba28(param_4);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c51bcc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10174e640);
      (*pcVar1)();
    }
    func_0x000107c5d0e8();
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c51bcc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10174e644);
      (*pcVar1)();
    }
    func_0x000107c5d0e4();
    func_0x000107c61170(lVar2);
    func_0x000107c56110(param_3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c14b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_saveState_112630650);
  return;
}



/* Entry: 10174e644; end: 10174e667;  */

void FUN_10174e644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    uVar5 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010efba220);
    param_1 = -0x2fffffffffffffe5;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010d9862e0);
    func_0x000107c4ba28(uVar2);
    func_0x000107c61170(uVar5);
  }
  else {
    func_0x000107c61174();
    lVar4 = param_1;
    func_0x000107c51bcc();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10174e640);
      (*pcVar3)();
    }
    func_0x000107c5d0e8();
    func_0x000107c61170(lVar4);
    lVar4 = param_1;
    func_0x000107c51bcc();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10174e644);
      (*pcVar3)();
    }
    func_0x000107c5d0e4();
    func_0x000107c61170(lVar4);
    func_0x000107c56110(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c14b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_saveState_112630650);
  return;
}



/* Entry: 10174e668; end: 10174e757;  */

void FUN_10174e668(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001000285a8(0x112dc6498,&UNK_10d9c25f0);
  pcVar1 = FUN_10174e764;
  func_0x0001000823a8(FUN_10174e764,0);
  pcVar2 = pcVar1;
  func_0x0001000ad7c4();
  func_0x000107c61574(pcVar1);
  func_0x000100083b20(&uStack_58);
  puVar3 = PTR_PTR_1126a7ab8;
  func_0x000107c610f8();
  func_0x000107c48ea0();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(pcVar2);
  func_0x000107c61170(uStack_58);
  *param_1 = puVar3;
  return;
}



/* Entry: 10174e758; end: 10174e763;  */

void FUN_10174e758(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x0001000285a8(0x112dc6498,&UNK_10d9c25f0);
  pcVar1 = FUN_10174e764;
  func_0x0001000823a8(FUN_10174e764,0);
  pcVar2 = pcVar1;
  func_0x0001000ad7c4();
  func_0x000107c61574(pcVar1);
  func_0x000100083b20(&uStack_58);
  puVar3 = PTR_PTR_1126a7ab8;
  func_0x000107c610f8();
  func_0x000107c48ea0();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(pcVar2);
  func_0x000107c61170(uStack_58);
  *param_1 = puVar3;
  return;
}



/* Entry: 10174e764; end: 10174e7cb;  */

void FUN_10174e764(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af568;
  func_0x000107c61168();
  func_0x000107c5a9bc();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 10174e7cc; end: 10174e7eb;  */

undefined1  [16] FUN_10174e7cc(void)

{
  return ZEXT816(0x110402960);
}



/* Entry: 10174e7ec; end: 10174e893;  */

void FUN_10174e7ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  puVar1 = PTR_PTR_1126a7ac0;
  func_0x000107c610f8();
  func_0x000107c48ea4();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = puVar1;
  return;
}



/* Entry: 10174e894; end: 10174e8af;  */

void FUN_10174e894(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  puVar1 = PTR_PTR_1126a7ac0;
  func_0x000107c610f8();
  func_0x000107c48ea4();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = puVar1;
  return;
}



/* Entry: 10174e8b0; end: 10174e8df;  */

void FUN_10174e8b0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10174e8e0; end: 10174e903;  */

void FUN_10174e8e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10174e904; end: 10174e94b;  */

undefined1  [16] FUN_10174e904(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c3fa5c(uStack_28);
  func_0x000107c61170(uStack_28);
  return ZEXT816(0);
}



/* Entry: 10174e94c; end: 10174e987;  */

undefined ** FUN_10174e94c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10174e988; end: 10174e9ab;  */

void FUN_10174e988(undefined8 param_1)

{
  FUN_10174f240();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uRam0000000113803408 = param_1;
  return;
}



/* Entry: 10174e9ac; end: 10174eb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174e9ac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_90;
  long lStack_88;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar6 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = _DAT_112dc6590;
  uVar3 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5f808(lVar2);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar4 = uVar5;
  func_0x00010002964c();
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar4,lVar1,uVar3);
  (**(code **)(lVar6 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_88);
  uVar5 = 0xd000000000000019;
  func_0x000107c5ffec(0xd000000000000019,0x800000010efba240,lVar2,lVar8,lVar7,0);
  *(undefined8 *)(unaff_x20 + lStack_90) = uVar5;
  *(undefined **)(unaff_x20 + _DAT_112dc65a0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112dc65a8) = 0;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10174eb98; end: 10174ebb7; -[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl init] */

void FUN_10174eb98(void)

{
  FUN_10174e9ac();
  return;
}



/* Entry: 10174ebb8; end: 10174ec43; +[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl register] */

void FUN_10174ebb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000102f1d1e8();
  if (lRam0000000113478bf0 != -1) {
    func_0x000107c61568(0x113478bf0,FUN_10174e988);
  }
  uVar1 = uRam0000000113803408;
  func_0x000107c61428(param_1,auStack_48,1,0);
  uVar2 = *param_1;
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10174ec44; end: 10174eca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174ec44(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  *(byte *)(param_1 + _DAT_112dc65a8) = param_2;
  lVar1 = _DAT_112dc65a0;
  if ((param_2 & 1) != 0) {
    func_0x000107c61428(param_1 + _DAT_112dc65a0,auStack_38,1,0);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10174eca8; end: 10174ecb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174eca8(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  *(byte *)(lVar4 + _DAT_112dc65a8) = bVar1;
  lVar2 = _DAT_112dc65a0;
  if ((bVar1 & 1) != 0) {
    func_0x000107c61428(lVar4 + _DAT_112dc65a0,auStack_38,1,0);
    uVar3 = *(undefined8 *)(lVar4 + lVar2);
    *(undefined **)(lVar4 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 10174ecb4; end: 10174ecd3;  */

void FUN_10174ecb4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10174ecd4; end: 10174ecef;  */

void FUN_10174ecd4(long param_1,long param_2)

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



/* Entry: 10174ecf0; end: 10174ee37; -[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174ecf0(long param_1,undefined8 param_2,undefined1 param_3)

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
  uVar6 = *(undefined8 *)(param_1 + _DAT_112dc6590);
  puVar2 = &UNK_110402b68;
  func_0x000107c613fc(&UNK_110402b68,0x19,7);
  *(long *)(puVar2 + 0x10) = param_1;
  puVar2[0x18] = param_3;
  puVar3 = &UNK_110402b90;
  func_0x000107c613fc(&UNK_110402b90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x10174f33c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uStack_50 = 0x10174f340;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_110402ba8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x00010006eaa4(uVar6,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x69,0x22,0x14,1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174ee38);
  (*pcVar1)();
}



/* Entry: 10174ee38; end: 10174f083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174ee38(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dc6590);
  puVar2 = &UNK_110402af0;
  func_0x000107c613fc(&UNK_110402af0,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar3 = &UNK_110402b18;
  func_0x000107c613fc(&UNK_110402b18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x10174ef88;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uStack_60 = 0x10174f338;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10006eb60;
  puStack_68 = &UNK_110402b30;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174();
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x00010006eaa4(uVar6,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x69,0x2b,0x14,1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174ef88);
  (*pcVar1)();
}



/* Entry: 10174f084; end: 10174f0f7; -[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl record:] */

/* WARNING: Possible PIC construction at 0x00010174f0c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010174f0cc) */

void FUN_10174f084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10174f0f8; end: 10174f10b;  */

void FUN_10174f0f8(void)

{
  FUN_10174f2c0();
  return;
}



/* Entry: 10174f10c; end: 10174f117; -[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl drain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174f10c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112dc6598;
  func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
  func_0x000107c5ffe4(&uStack_38,0x10174f358,auStack_50,uVar1);
  func_0x000107c61170(param_1);
  uVar1 = uStack_38;
  func_0x000107c5fc48(uStack_38,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10174f118; end: 10174f12b;  */

void FUN_10174f118(void)

{
  FUN_10174f260();
  return;
}



/* Entry: 10174f12c; end: 10174f137; -[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl peek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174f12c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112dc6598;
  func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
  func_0x000107c5ffe4(&uStack_38,FUN_10174f344,auStack_50,uVar1);
  func_0x000107c61170(param_1);
  uVar1 = uStack_38;
  func_0x000107c5fc48(uStack_38,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10174f138; end: 10174f1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174f138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112dc6598;
  func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
  func_0x000107c5ffe4(&uStack_38,param_3,auStack_50,uVar1);
  func_0x000107c61170(param_1);
  uVar1 = uStack_38;
  func_0x000107c5fc48(uStack_38,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10174f1d4; end: 10174f207;  */

void FUN_10174f1d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10174f208; end: 10174f23f; -[_TtC27SnapDocSendCaptureStoreImpl27SnapDocSendCaptureStoreImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174f208(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc6590));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dc65a0));
  return;
}



/* Entry: 10174f240; end: 10174f25f;  */

void FUN_10174f240(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8b88);
  return;
}



/* Entry: 10174f260; end: 10174f2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174f260(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc65a0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112dc65a0,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c61434();
  return;
}



/* Entry: 10174f2c0; end: 10174f327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174f2c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc65a0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112dc65a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined **)(lVar3 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = uVar2;
  return;
}



/* Entry: 10174f328; end: 10174f343;  */

void FUN_10174f328(long param_1,long param_2)

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



/* Entry: 10174f344; end: 10174f36b;  */

void FUN_10174f344(void)

{
  FUN_10174f118();
  return;
}



/* Entry: 10174f36c; end: 10174f3d3;  */

void FUN_10174f36c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 auStack_48 [3];
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  FUN_101750520();
  uVar2 = uVar1;
  func_0x000107c613fc();
  ppuStack_28 = &PTR_DAT_110402d88;
  auStack_48[0] = uVar2;
  uStack_30 = uVar1;
  func_0x0001001d49c8(0);
  func_0x000107c610f8();
  puVar3 = auStack_48;
  func_0x000103fe5490();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 10174f3d4; end: 10174f3e3;  */

undefined1  [16] FUN_10174f3d4(void)

{
  return ZEXT816(0x110402c88);
}



/* Entry: 10174f3e4; end: 10174f6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10174f3e4(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  int iVar8;
  undefined8 uVar9;
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174f69c);
    (*pcVar1)();
  }
  if (-2147483649.0 < param_1) {
    if (param_1 < 2147483648.0) {
      iVar8 = (int)param_1;
      func_0x000107c31104();
      if (iVar8 == 0) {
        func_0x0001000285a8(0x112dc6610,&UNK_10d986580);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar7 = 0xd00000000000002b;
        func_0x000107c5fadc(0xd00000000000002b,0x800000010efba2a0);
        func_0x000107c466bc(puVar4);
        func_0x000107c61170(uVar7);
        puVar6 = puVar4;
        func_0x00010488904c(puVar4);
        func_0x000107c61170(puVar4);
      }
      else {
        puVar2 = PTR_PTR_1126b3080;
        func_0x000107c61168(PTR_PTR_1126b3080);
        func_0x000107c5ee20(param_2,param_3);
        func_0x000107c412fc(puVar2);
        func_0x000107c61180();
        func_0x000107c61170(param_2);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dc65e0);
        uVar7 = uVar9;
        func_0x000107c3d764(uVar9);
        func_0x000107c61180();
        func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
        uVar5 = uVar7;
        func_0x000100759c94(uVar7,0);
        puVar4 = &UNK_110402d48;
        func_0x000107c613fc(&UNK_110402d48,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = uVar9;
        puVar6 = &UNK_110402d70;
        func_0x000107c613fc(&UNK_110402d70,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = 0x10175050c;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        uVar3 = 0;
        func_0x0001017504a0(0,0x112d512f8,&PTR_PTR_1126b25d8);
        func_0x000107c615f0(uVar9);
        uVar9 = 0;
        func_0x0001048898b8(0,1,0x1017504f4,puVar6,uVar3);
        func_0x000107c61574(uVar5);
        func_0x000107c61574(puVar6);
        puVar4 = (undefined *)0x0;
        func_0x0001048898b8(0,1,FUN_101750340,0,PTR___s10Foundation4DataVN_110350ae0);
        func_0x000107c61574(uVar9);
        uVar5 = 0;
        func_0x0001017504a0(0,0x112dc6620,&PTR_PTR_1126a7ac8);
        puVar6 = (undefined *)0x0;
        func_0x000100775264(0,1,FUN_101750368,0,uVar5);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(uVar7);
        func_0x000107c61574(puVar4);
      }
      func_0x000103edf0bc();
      func_0x000107c61574(puVar6);
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174f6a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174f6a0);
  (*pcVar1)();
}



/* Entry: 10174f6a4; end: 10174f733; -[_TtC29SnapEditorHostServiceProvider22SnapEditorMediaManager addDataBlobMediaReferenceWithData:mediaType:] */

void FUN_10174f6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  FUN_10174f3e4(param_1,param_4,param_3);
  func_0x00010006c090(param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10174f734; end: 10174fb8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10174f734(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174fb84);
    (*pcVar1)();
  }
  if (-2147483649.0 < param_1) {
    if (param_1 < 2147483648.0) {
      iVar11 = (int)param_1;
      func_0x000107c31104();
      if (iVar11 == 0) {
        func_0x0001000285a8(0x112dc6610,&UNK_10d986580);
        puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar4 = 0xd00000000000002b;
        func_0x000107c5fadc(0xd00000000000002b,0x800000010efba2a0);
        func_0x000107c466bc(puVar8);
        func_0x000107c61170(uVar4);
        puVar5 = puVar8;
        func_0x00010488904c(puVar8);
        func_0x000107c61170(puVar8);
        func_0x000103edf0bc();
        func_0x000107c61574(puVar5);
      }
      else {
        lVar2 = 0;
        func_0x000107c5ede0();
        lVar13 = *(long *)(lVar2 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
        lVar10 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        iVar11 = 2;
        func_0x000100029b9c(2,0x10,0,0);
        if (iVar11 == 0) {
          func_0x000107c5ed7c(lVar10,param_2,param_3,0);
        }
        else {
          lVar3 = 0;
          func_0x000107c5ed68();
          lStack_70 = lVar10;
          lStack_68 = lVar2;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
          lVar3 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(extraout_x12 + 0x68))
                    (lVar3,*(undefined4 *)
                            PTR___s10Foundation3URLV13DirectoryHintO03notC0yA2EmFWC_110345360);
          lVar2 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar13 + 0x38))(lVar3 - extraout_x8_01,1,1,lStack_68);
          func_0x000107c61434(param_3);
          func_0x000107c5edd4(lVar10,param_2,param_3,lVar3,lVar3 - extraout_x8_01);
          lVar2 = lStack_68;
        }
        puVar6 = PTR_PTR_1126b3080;
        func_0x000107c61168(PTR_PTR_1126b3080);
        puVar8 = puVar6;
        func_0x000107c5ed90();
        func_0x000107c43480(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112dc65e0);
        uVar4 = uVar12;
        func_0x000107c3d764(uVar12);
        func_0x000107c61180();
        func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
        uVar9 = uVar4;
        func_0x000100759c94(uVar4,0);
        puVar8 = &UNK_110402cf8;
        func_0x000107c613fc(&UNK_110402cf8,0x18,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar12;
        puVar5 = &UNK_110402d20;
        func_0x000107c613fc(&UNK_110402d20,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_101750508;
        *(undefined **)(puVar5 + 0x18) = puVar8;
        uVar7 = 0;
        func_0x0001017504a0(0,0x112d512f8,&PTR_PTR_1126b25d8);
        func_0x000107c615f0(uVar12);
        uVar12 = 0;
        func_0x0001048898b8(0,1,FUN_1017504e0,puVar5,uVar7);
        func_0x000107c61574(uVar9);
        func_0x000107c61574(puVar5);
        puVar8 = (undefined *)0x0;
        func_0x0001048898b8(0,1,FUN_101750340,0,PTR___s10Foundation4DataVN_110350ae0);
        func_0x000107c61574(uVar12);
        uVar9 = 0;
        func_0x0001017504a0(0,0x112dc6620,&PTR_PTR_1126a7ac8);
        uVar7 = 0;
        func_0x000100775264(0,1,FUN_101750368,0,uVar9);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar4);
        func_0x000107c61574(puVar8);
        func_0x000103edf0bc();
        func_0x000107c61574(uVar7);
        (**(code **)(lVar13 + 8))(lVar10,lVar2);
      }
      return puVar8;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174fb8c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174fb88);
  (*pcVar1)();
}



/* Entry: 10174fb8c; end: 10174fb97; -[_TtC29SnapEditorHostServiceProvider22SnapEditorMediaManager addFileURLMediaReferenceWithFileURL:mediaType:] */

void FUN_10174fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10174f734(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10174fb98; end: 10174ffef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10174fb98(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffff90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174ffe8);
    (*pcVar1)();
  }
  if (-2147483649.0 < param_1) {
    if (param_1 < 2147483648.0) {
      iVar12 = (int)param_1;
      func_0x000107c31104();
      if (iVar12 == 0) {
        func_0x0001000285a8(0x112dc6610,&UNK_10d986580);
        puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar4 = 0xd00000000000002b;
        func_0x000107c5fadc(0xd00000000000002b,0x800000010efba2a0);
        func_0x000107c466bc(puVar8);
        func_0x000107c61170(uVar4);
        puVar5 = puVar8;
        func_0x00010488904c(puVar8);
        func_0x000107c61170(puVar8);
        func_0x000103edf0bc();
        func_0x000107c61574(puVar5);
      }
      else {
        func_0x000107c5edd0(puVar11,param_2,param_3);
        puVar3 = puVar11;
        (**(code **)(lVar14 + 0x30))(puVar11,1,lVar2);
        if ((int)puVar3 == 1) {
          func_0x0001000293e4(puVar11);
          func_0x0001000285a8(0x112dc6610,&UNK_10d986580);
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
          uVar4 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010efba2d0);
          func_0x000107c466bc(puVar8);
          func_0x000107c61170(uVar4);
          puVar5 = puVar8;
          func_0x00010488904c(puVar8);
          func_0x000107c61170(puVar8);
          func_0x000103edf0bc();
          func_0x000107c61574(puVar5);
        }
        else {
          (**(code **)(lVar14 + 0x20))(lVar10,puVar11,lVar2);
          puVar6 = PTR_PTR_1126b3080;
          func_0x000107c61168(PTR_PTR_1126b3080);
          puVar8 = puVar6;
          func_0x000107c5ed90();
          func_0x000107c42c94(puVar6);
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112dc65e0);
          uVar4 = uVar13;
          func_0x000107c3d764(uVar13);
          func_0x000107c61180();
          func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
          uVar9 = uVar4;
          func_0x000100759c94(uVar4,0);
          puVar8 = &UNK_110402ca8;
          func_0x000107c613fc(&UNK_110402ca8,0x18,7);
          *(undefined8 *)(puVar8 + 0x10) = uVar13;
          puVar5 = &UNK_110402cd0;
          func_0x000107c613fc(&UNK_110402cd0,0x20,7);
          *(code **)(puVar5 + 0x10) = FUN_10175046c;
          *(undefined **)(puVar5 + 0x18) = puVar8;
          uVar7 = 0;
          func_0x0001017504a0(0,0x112d512f8,&PTR_PTR_1126b25d8);
          func_0x000107c615f0(uVar13);
          uVar13 = 0;
          func_0x0001048898b8(0,1,0x101750474,puVar5,uVar7);
          func_0x000107c61574(uVar9);
          func_0x000107c61574(puVar5);
          puVar8 = (undefined *)0x0;
          func_0x0001048898b8(0,1,FUN_101750340,0,PTR___s10Foundation4DataVN_110350ae0);
          func_0x000107c61574(uVar13);
          uVar9 = 0;
          func_0x0001017504a0(0,0x112dc6620,&PTR_PTR_1126a7ac8);
          uVar7 = 0;
          func_0x000100775264(0,1,FUN_101750368,0,uVar9);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar4);
          func_0x000107c61574(puVar8);
          func_0x000103edf0bc();
          func_0x000107c61574(uVar7);
          (**(code **)(lVar14 + 8))(lVar10,lVar2);
        }
      }
      return puVar8;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174fff0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174ffec);
  (*pcVar1)();
}



/* Entry: 10174fff0; end: 10174fffb; -[_TtC29SnapEditorHostServiceProvider22SnapEditorMediaManager addExternalURLMediaReferenceWithExternalURL:mediaType:] */

void FUN_10174fff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10174fb98(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10174fffc; end: 101750073;  */

void FUN_10174fffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  (*param_5)(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101750074; end: 10175033f;  */

undefined8 *** FUN_101750074(undefined8 ***param_1,undefined8 ***param_2)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_38;
  
  if (param_1 == (undefined8 ***)0x0) {
    param_2 = (undefined8 ***)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efba330);
    func_0x000107c466bc(param_2);
    func_0x000107c61170(uVar1);
    func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
    func_0x000107c61174(param_2);
    pppuVar2 = param_2;
    func_0x00010488904c();
    pppuVar3 = param_2;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4ca08();
    func_0x000107c61180();
    if (param_2 == (undefined8 ***)0x0) {
      pppuVar3 = (undefined8 ***)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar1 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010efba360);
      func_0x000107c466bc(pppuVar3);
      func_0x000107c61170(uVar1);
      func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
      func_0x000107c61174(pppuVar3);
      pppuVar2 = pppuVar3;
      func_0x00010488904c();
      func_0x000107c61170(param_1);
      func_0x000107c61170(pppuVar3);
      goto LAB_101750208;
    }
    func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
    pppuVar2 = &ppuStack_38;
    ppuStack_38 = param_2;
    func_0x000104888f7c(pppuVar2);
    pppuVar3 = param_1;
  }
  func_0x000107c61170(param_2);
LAB_101750208:
  func_0x000107c61170(pppuVar3);
  return pppuVar2;
}



/* Entry: 101750340; end: 101750367;  */

void FUN_101750340(undefined8 *param_1)

{
  func_0x000101750224(*param_1);
  return;
}



/* Entry: 101750368; end: 1017503db;  */

void FUN_101750368(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  puVar2 = PTR_PTR_1126a7ac8;
  func_0x000107c610f8();
  func_0x000107c5ee20(uVar3,uVar1);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 1017503dc; end: 10175043b; -[_TtC29SnapEditorHostServiceProvider22SnapEditorMediaManager init] */

void FUN_1017503dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorHostServiceProvider.SnapEditorMediaManager",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101750408);
  (*pcVar1)();
}



/* Entry: 10175043c; end: 10175044b; -[_TtC29SnapEditorHostServiceProvider22SnapEditorMediaManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175043c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dc65e0));
  return;
}



/* Entry: 10175044c; end: 10175046b;  */

void FUN_10175044c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8c50);
  return;
}



/* Entry: 10175046c; end: 101750473;  */

undefined8 *** FUN_10175046c(undefined8 ***param_1)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long unaff_x20;
  undefined8 **ppuStack_38;
  
  pppuVar4 = *(undefined8 ****)(unaff_x20 + 0x10);
  if (param_1 == (undefined8 ***)0x0) {
    pppuVar4 = (undefined8 ***)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efba330);
    func_0x000107c466bc(pppuVar4);
    func_0x000107c61170(uVar1);
    func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
    func_0x000107c61174(pppuVar4);
    pppuVar2 = pppuVar4;
    func_0x00010488904c();
    pppuVar3 = pppuVar4;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4ca08();
    func_0x000107c61180();
    if (pppuVar4 == (undefined8 ***)0x0) {
      pppuVar3 = (undefined8 ***)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar1 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010efba360);
      func_0x000107c466bc(pppuVar3);
      func_0x000107c61170(uVar1);
      func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
      func_0x000107c61174(pppuVar3);
      pppuVar2 = pppuVar3;
      func_0x00010488904c();
      func_0x000107c61170(param_1);
      func_0x000107c61170(pppuVar3);
      goto LAB_101750208;
    }
    func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
    pppuVar2 = &ppuStack_38;
    ppuStack_38 = pppuVar4;
    func_0x000104888f7c(pppuVar2);
    pppuVar3 = param_1;
  }
  func_0x000107c61170(pppuVar4);
LAB_101750208:
  func_0x000107c61170(pppuVar3);
  return pppuVar2;
}



/* Entry: 101750474; end: 1017504df;  */

void FUN_101750474(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 1017504e0; end: 101750507;  */

void FUN_1017504e0(void)

{
  FUN_101750474();
  return;
}



/* Entry: 101750508; end: 10175051f;  */

undefined8 *** FUN_101750508(undefined8 ***param_1)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long unaff_x20;
  undefined8 **ppuStack_38;
  
  pppuVar4 = *(undefined8 ****)(unaff_x20 + 0x10);
  if (param_1 == (undefined8 ***)0x0) {
    pppuVar4 = (undefined8 ***)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efba330);
    func_0x000107c466bc(pppuVar4);
    func_0x000107c61170(uVar1);
    func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
    func_0x000107c61174(pppuVar4);
    pppuVar2 = pppuVar4;
    func_0x00010488904c();
    pppuVar3 = pppuVar4;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4ca08();
    func_0x000107c61180();
    if (pppuVar4 == (undefined8 ***)0x0) {
      pppuVar3 = (undefined8 ***)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar1 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010efba360);
      func_0x000107c466bc(pppuVar3);
      func_0x000107c61170(uVar1);
      func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
      func_0x000107c61174(pppuVar3);
      pppuVar2 = pppuVar3;
      func_0x00010488904c();
      func_0x000107c61170(param_1);
      func_0x000107c61170(pppuVar3);
      goto LAB_101750208;
    }
    func_0x0001000285a8(0x112dc6630,&UNK_10d986598);
    pppuVar2 = &ppuStack_38;
    ppuStack_38 = pppuVar4;
    func_0x000104888f7c(pppuVar2);
    pppuVar3 = param_1;
  }
  func_0x000107c61170(pppuVar4);
LAB_101750208:
  func_0x000107c61170(pppuVar3);
  return pppuVar2;
}



/* Entry: 101750520; end: 10175053f;  */

void FUN_101750520(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6678);
  return;
}



/* Entry: 101750540; end: 1017505a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101750540(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_10175044c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dc65e0) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1017505a4; end: 1017505e3;  */

undefined1  [16] FUN_1017505a4(void)

{
  return ZEXT816(0x110402e58);
}



/* Entry: 1017505e4; end: 10175086b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1017505e4(long param_1,long param_2,ulong param_3,ulong param_4,byte param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  byte bVar8;
  long alStack_90 [2];
  long lStack_80;
  ulong uStack_78;
  byte bStack_70;
  
  lVar1 = _DAT_112dc66f0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dc66f0);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(alStack_90);
  func_0x000107c61574(uVar7);
  lVar3 = alStack_90[0];
  if (*(long *)(alStack_90[0] + 0x10) == 0) {
    func_0x000107c6142c(alStack_90[0]);
    if (param_1 != 1) goto LAB_10175067c;
LAB_101750724:
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    lStack_80 = param_2;
    uStack_78 = param_3;
    func_0x000107c6157c(uVar7);
    pcVar2 = (code *)0x1017528d4;
  }
  else {
    func_0x000107c61434(alStack_90[0]);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    func_0x000107c61430(lVar3,2);
    if ((uVar6 & 1) != 0) goto LAB_1017507e8;
    if (param_1 == 1) goto LAB_101750724;
LAB_10175067c:
    if (param_1 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if ((param_4 & 1) == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10175086c);
          (*pcVar2)();
        }
        lVar4 = param_2;
        func_0x000107c5fadc(param_2,param_3);
        lVar5 = lVar3;
        func_0x000107c3ebd4();
        bVar8 = (byte)lVar5;
        func_0x000107c615e8(lVar3);
LAB_1017507a0:
        func_0x000107c61170(lVar4);
      }
      else {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101750868);
          (*pcVar2)();
        }
        lVar4 = param_2;
        func_0x000107c5fadc(param_2,param_3);
        lVar5 = lVar3;
        func_0x000107c4c270();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar4);
        bVar8 = param_5;
        if (lVar5 != 0) {
          lVar4 = lVar5;
          func_0x000107c5dc0c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
          lVar3 = lVar4;
          func_0x000107c3ebcc();
          bVar8 = (byte)lVar3;
          goto LAB_1017507a0;
        }
      }
      uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
      bStack_70 = bVar8 & 1;
      lStack_80 = param_2;
      uStack_78 = param_3;
      func_0x000107c6157c(uVar7);
      pcVar2 = (code *)0x1017528ec;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
      lStack_80 = param_2;
      uStack_78 = param_3;
      func_0x000107c6157c(uVar7);
      pcVar2 = FUN_1017528bc;
    }
  }
  func_0x000100075034(pcVar2,alStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
LAB_1017507e8:
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(alStack_90);
  func_0x000107c61574(uVar7);
  if (*(long *)(alStack_90[0] + 0x10) != 0) {
    func_0x000107c61434(alStack_90[0]);
    func_0x000100029284();
    if ((param_3 & 1) != 0) {
      param_5 = *(byte *)(*(long *)(alStack_90[0] + 0x38) + param_2);
    }
    func_0x000107c6142c(alStack_90[0]);
  }
  func_0x000107c6142c(alStack_90[0]);
  return param_5 & 1;
}



/* Entry: 10175086c; end: 1017508e3; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorForMainCameraVideoEnabled] */

uint FUN_10175086c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168(PTR_PTR_1126a7ad0);
  func_0x000107c61174(param_1);
  func_0x000107c5b260(puVar2);
  uVar1 = (uint)puVar2;
  FUN_1017505e4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 1017508e4; end: 101750993;  */

/* WARNING: Possible PIC construction at 0x000101750954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101750958) */
/* WARNING: Removing unreachable block (ram,0x000101750980) */
/* WARNING: Removing unreachable block (ram,0x000101750964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017508e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(0xd000000000000025,0x800000010efba730);
    func_0x000107c4c270(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101750994);
  (*pcVar1)();
}



/* Entry: 101750994; end: 101750a0b; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorForMainCameraImageEnabled] */

uint FUN_101750994(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168(PTR_PTR_1126a7ad0);
  func_0x000107c61174(param_1);
  func_0x000107c5b258(puVar2);
  uVar1 = (uint)puVar2;
  FUN_1017505e4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101750a0c; end: 101750abb;  */

/* WARNING: Possible PIC construction at 0x000101750a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101750a80) */
/* WARNING: Removing unreachable block (ram,0x000101750aa8) */
/* WARNING: Removing unreachable block (ram,0x000101750a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101750a0c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(0xd000000000000025,0x800000010efba700);
    func_0x000107c4c270(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101750abc);
  (*pcVar1)();
}



/* Entry: 101750abc; end: 101750ac3; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorForContinuousCaptureEnabled] */

undefined8 FUN_101750abc(void)

{
  return 1;
}



/* Entry: 101750ac4; end: 101750b3b; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl imageTimelineEditorEnabled] */

uint FUN_101750ac4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168(PTR_PTR_1126a7ad0);
  func_0x000107c61174(param_1);
  func_0x000107c5b25c(puVar2);
  uVar1 = (uint)puVar2;
  FUN_1017505e4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101750b3c; end: 101750d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101750b3c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168();
  func_0x000107c5b298();
  lVar5 = _DAT_112dc66f0;
  uVar7 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dc66f0);
  func_0x000107c6157c(uVar9);
  func_0x0001000c74f0(alStack_80);
  func_0x000107c61574(uVar9);
  lVar3 = alStack_80[0];
  if (*(long *)(alStack_80[0] + 0x10) == 0) {
    func_0x000107c6142c(alStack_80[0]);
    if (puVar2 != (undefined *)0x0) goto LAB_101750be8;
LAB_101750c20:
    lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101750d6c);
      (*pcVar1)();
    }
    uVar9 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efba7a0);
    lVar4 = lVar3;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar9);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
    uStack_70 = 0xd00000000000001d;
    uStack_68 = 0x800000010efba7a0;
    uStack_60 = (undefined1)lVar4;
    func_0x000107c6157c(uVar10);
    uVar9 = 0x101752f98;
  }
  else {
    func_0x000107c61434(alStack_80[0]);
    uVar6 = uVar7;
    func_0x000100029284(0xd00000000000001d);
    func_0x000107c61430(lVar3,2);
    if ((uVar6 & 1) != 0) goto LAB_101750cdc;
    if (puVar2 == (undefined *)0x0) goto LAB_101750c20;
LAB_101750be8:
    if (puVar2 == (undefined *)0x1) {
      uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
      uStack_70 = 0xd00000000000001d;
      uStack_68 = 0x800000010efba7a0;
      func_0x000107c6157c(uVar10);
      uVar9 = 0x101752f84;
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
      uStack_70 = 0xd00000000000001d;
      uStack_68 = 0x800000010efba7a0;
      func_0x000107c6157c(uVar10);
      uVar9 = 0x101752f70;
    }
  }
  func_0x000100075034(uVar9,alStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar10);
LAB_101750cdc:
  uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c6157c(uVar9);
  func_0x0001000c74f0(alStack_80);
  func_0x000107c61574(uVar9);
  if (*(long *)(alStack_80[0] + 0x10) == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c61434(alStack_80[0]);
    lVar5 = -0x2fffffffffffffe3;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined1 *)(*(long *)(alStack_80[0] + 0x38) + lVar5);
    }
    func_0x000107c6142c(alStack_80[0]);
  }
  func_0x000107c6142c(alStack_80[0]);
  return uVar8;
}



/* Entry: 101750d6c; end: 101750d9f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorTemplatesEnabled] */

uint FUN_101750d6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101750b3c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101750da0; end: 101750dbb; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl batchCaptureDrawingToolEnabled] */

void FUN_101750da0(void)

{
  func_0x000107c61168(PTR_PTR_1126a7ad0);
                    /* WARNING: Could not recover jumptable at 0x00010bf16990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101750dbc; end: 101750dd7; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl batchCaptureScissorToolEnabled] */

void FUN_101750dbc(void)

{
  func_0x000107c61168(PTR_PTR_1126a7ad0);
                    /* WARNING: Could not recover jumptable at 0x00010bf16b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101750dd8; end: 101750df3; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorToggleLensToolEnabled] */

void FUN_101750dd8(void)

{
  func_0x000107c61168(PTR_PTR_1126a7ad0);
                    /* WARNING: Could not recover jumptable at 0x00010c240dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101750df4; end: 101750e0f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorMagicEraserEnabled] */

void FUN_101750df4(void)

{
  func_0x000107c61168(PTR_PTR_1126a7ad0);
                    /* WARNING: Could not recover jumptable at 0x00010c240ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101750e10; end: 101750e17; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl batchCaptureFPS] */

undefined8 FUN_101750e10(void)

{
  return 0xf;
}



/* Entry: 101750e18; end: 101750f3b;  */

/* WARNING: Possible PIC construction at 0x000101750fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017510a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101750954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101750a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101750958) */
/* WARNING: Removing unreachable block (ram,0x000101750980) */
/* WARNING: Removing unreachable block (ram,0x000101750964) */
/* WARNING: Removing unreachable block (ram,0x0001017510a8) */
/* WARNING: Removing unreachable block (ram,0x0001017510d0) */
/* WARNING: Removing unreachable block (ram,0x0001017510b4) */
/* WARNING: Removing unreachable block (ram,0x000101750fc8) */
/* WARNING: Removing unreachable block (ram,0x000101750fd4) */
/* WARNING: Removing unreachable block (ram,0x00010175100c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000101750a80) */
/* WARNING: Removing unreachable block (ram,0x000101750aa8) */
/* WARNING: Removing unreachable block (ram,0x000101750a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101750e18(ulong param_1,long param_2,int param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  long unaff_x20;
  
  uVar2 = param_1;
  func_0x000107c3f5b8();
  if (((((int)uVar2 != 2) && (uVar2 = param_1, func_0x000107c3f5b8(), (int)uVar2 != 4)) &&
      (uVar2 = param_1, func_0x000107c4b82c(), 1 < uVar2)) ||
     ((uVar2 = param_1, func_0x000107c3f5b8(), (int)uVar2 == 4 ||
      (func_0x000107c3f5b8(), (int)param_1 == 2)))) {
    return;
  }
  if (param_3 == 0) {
    if ((int)param_2 == 1) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101750abc);
        (*pcVar1)();
      }
      func_0x000107c5fadc(0xd000000000000025,0x800000010efba700);
      func_0x000107c4c270(lVar3);
      func_0x000107c61180();
      goto code_r0x000107c615e8;
    }
    if ((int)param_2 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101750994);
        (*pcVar1)();
      }
      func_0x000107c5fadc(0xd000000000000025,0x800000010efba730);
      func_0x000107c4c270(lVar3);
      func_0x000107c61180();
      goto code_r0x000107c615e8;
    }
  }
  if (((param_4 < 10) && ((1L << (param_4 & 0x3f) & 0x242U) != 0)) && (param_3 - 1U < 2)) {
    if (param_2 == 1) {
      pcVar4 = "SNAP_EDITOR_REPLY_CAMERA_IMAGE";
    }
    else {
      if (param_2 != 0) {
        return;
      }
      pcVar4 = "SNAP_EDITOR_REPLY_CAMERA_VIDEO";
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101751034);
      (*pcVar1)();
    }
    func_0x000107c5fadc(0xd00000000000001e,(ulong)(pcVar4 + -0x20) | 0x8000000000000000);
    func_0x000107c4c270(lVar3);
    func_0x000107c61180();
  }
  else {
    if ((int)param_4 != 7) {
      return;
    }
    if (param_5 != 0xcb) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1017510e4);
      (*pcVar1)();
    }
    func_0x000107c5fadc(0xd000000000000027,0x800000010efba620);
    func_0x000107c4c270(lVar3);
    func_0x000107c61180();
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 101750f3c; end: 1017510e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101750f3c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long unaff_x20;
  
  if (param_1 == 1) {
    pcVar5 = "SNAP_EDITOR_REPLY_CAMERA_IMAGE";
  }
  else {
    if (param_1 != 0) {
      return;
    }
    pcVar5 = "SNAP_EDITOR_REPLY_CAMERA_VIDEO";
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,(ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    lVar4 = lVar2;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c5dc0c(lVar4);
      func_0x000107c61180();
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar2);
      func_0x000107c615f0(lVar4);
      func_0x000107c42c04();
      func_0x000107c615ec(lVar4,2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              ((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751034);
  (*pcVar1)();
}



/* Entry: 1017510e4; end: 10175115f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl exposeSnapEditorCOFsWith:mediaType:cameraViewType:scopedCameraType:sourcePageType:] */

void FUN_1017510e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101750e18(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101751160; end: 10175136f;  */

uint FUN_101751160(ulong param_1,uint param_2,int param_3,ulong param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar2 = param_1;
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4483c();
  func_0x000107c61170(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1;
    func_0x000108eb72a0();
    if ((int)uVar2 != 0) {
      puVar6 = PTR_PTR_1126a7ad0;
      func_0x000107c61168();
      iVar1 = (int)puVar6;
      func_0x000107c5b23c();
      if (iVar1 == 0) {
        uVar4 = 0;
        goto LAB_1017511b4;
      }
    }
    if (param_3 == 0) {
      puVar6 = PTR_PTR_1126a7ad0;
      if (param_2 == 1) {
        func_0x000107c61168();
        func_0x000107c5b258();
      }
      else {
        if (param_2 != 0) goto LAB_1017511f4;
        func_0x000107c61168();
        func_0x000107c5b260();
      }
      FUN_1017505e4();
      if (param_4 < 10) goto LAB_101751274;
LAB_1017512a8:
      if (((ulong)puVar6 & 1) != 0) goto LAB_1017511b0;
    }
    else {
LAB_1017511f4:
      puVar6 = (undefined *)0x0;
      if (9 < param_4) goto LAB_1017512a8;
LAB_101751274:
      if (((1L << (param_4 & 0x3f) & 0x242U) == 0) || (1 < param_3 - 1U)) goto LAB_1017512a8;
      FUN_101751370();
      if ((((uint)puVar6 | param_2) & 1) != 0) goto LAB_1017511b0;
    }
    uVar2 = param_1;
    func_0x000107c3f5b8();
    if ((int)uVar2 != 4) {
      uVar2 = param_1;
      func_0x000107c3f5b8();
      uVar5 = 0;
      if (((int)param_4 == 7) && (param_5 == 0xcb)) {
        puVar6 = PTR_PTR_1126a7ad0;
        func_0x000107c61168(PTR_PTR_1126a7ad0);
        uVar5 = (uint)puVar6;
        func_0x000107c5b234();
        FUN_1017505e4();
      }
      uVar3 = param_1;
      func_0x000107c3f5b8();
      if (((int)uVar3 == 2) || (uVar3 = param_1, func_0x000107c3f5b8(), (int)uVar3 == 4)) {
        if ((int)uVar2 == 2) goto LAB_1017511b0;
      }
      else {
        func_0x000107c4b82c();
        uVar4 = 1;
        if ((1 < param_1) || ((int)uVar2 == 2)) goto LAB_1017511b4;
      }
      uVar4 = param_3 == 0xb | uVar5;
      goto LAB_1017511b4;
    }
  }
LAB_1017511b0:
  uVar4 = 1;
LAB_1017511b4:
  return uVar4 & 1;
}



/* Entry: 101751370; end: 10175145f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101751370(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long unaff_x20;
  
  if (param_1 == 1) {
    pcVar5 = "SNAP_EDITOR_REPLY_CAMERA_IMAGE";
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    pcVar5 = "SNAP_EDITOR_REPLY_CAMERA_VIDEO";
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,(ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    func_0x000107c6142c((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    lVar4 = lVar2;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
      return 0;
    }
    lVar2 = lVar4;
    func_0x000107c5dc0c(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar2;
    func_0x000107c3ebcc(lVar2);
    func_0x000107c61170(lVar2);
    return lVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751460);
  (*pcVar1)();
}



/* Entry: 101751460; end: 1017514e7; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl cameraShouldOpenSnapEditorWithSnapDocEditor:mediaType:cameraViewType:scopedCameraType:sourcePageType:] */

uint FUN_101751460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101751160(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1017514e8; end: 1017516f7;  */

uint FUN_1017514e8(ulong param_1,int param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  
  uVar1 = param_1;
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4483c();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x000108eb72a0();
    uVar5 = 0;
    if ((int)uVar1 != 0) {
      puVar3 = PTR_PTR_1126a7ad0;
      func_0x000107c61168();
      uVar5 = (uint)puVar3;
      func_0x000107c5b23c();
      if (uVar5 == 0) {
        uVar5 = 0;
        goto LAB_101751538;
      }
    }
    if (param_2 == 0) {
      puVar3 = PTR_PTR_1126a7ad0;
      func_0x000107c61168();
      puVar4 = puVar3;
      func_0x000107c5b260();
      FUN_1017505e4();
      uVar5 = (uint)puVar4;
      puVar6 = (undefined *)0x1;
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c5b258();
        FUN_1017505e4();
        uVar5 = (uint)puVar3;
        puVar6 = puVar3;
      }
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    if (((param_3 < 10) && ((1L << (param_3 & 0x3f) & 0x242U) != 0)) && (param_2 - 1U < 2)) {
      FUN_1017516f8();
      if ((((uint)puVar6 | uVar5) & 1) == 0) {
LAB_10175162c:
        uVar1 = param_1;
        func_0x000107c3f5b8();
        if ((int)uVar1 != 4) {
          uVar1 = param_1;
          func_0x000107c3f5b8();
          uVar7 = 0;
          if (((int)param_3 == 7) && (param_4 == 0xcb)) {
            puVar3 = PTR_PTR_1126a7ad0;
            func_0x000107c61168(PTR_PTR_1126a7ad0);
            uVar7 = (uint)puVar3;
            func_0x000107c5b234();
            FUN_1017505e4();
          }
          uVar2 = param_1;
          func_0x000107c3f5b8();
          if (((int)uVar2 == 2) || (uVar2 = param_1, func_0x000107c3f5b8(), (int)uVar2 == 4)) {
            if ((int)uVar1 == 2) goto LAB_101751534;
          }
          else {
            func_0x000107c4b82c();
            uVar5 = 1;
            if ((1 < param_1) || ((int)uVar1 == 2)) goto LAB_101751538;
          }
          uVar5 = param_2 == 0xb | uVar7;
          goto LAB_101751538;
        }
      }
    }
    else if (((ulong)puVar6 & 1) == 0) goto LAB_10175162c;
  }
LAB_101751534:
  uVar5 = 1;
LAB_101751538:
  return uVar5 & 1;
}



/* Entry: 1017516f8; end: 101751873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1017516f8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112dc66e8);
  uVar4 = uVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101751870);
    (*pcVar1)();
  }
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efba760);
  uVar3 = uVar4;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar3);
    uVar3 = uVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar4);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010efba780);
    uVar4 = uVar5;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar2);
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar5 = uVar4;
      func_0x000107c5dc0c(uVar4);
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      uVar4 = uVar5;
      func_0x000107c3ebcc(uVar5);
      func_0x000107c61170(uVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751874);
  (*pcVar1)();
}



/* Entry: 101751874; end: 1017518f3; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl cameraMayOpenSnapEditorWithSnapDocEditor:cameraViewType:scopedCameraType:sourcePageType:] */

uint FUN_101751874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1017514e8(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1017518f4; end: 1017519ab;  */

/* WARNING: Removing unreachable block (ram,0x00010175076c) */
/* WARNING: Removing unreachable block (ram,0x000101750868) */
/* WARNING: Removing unreachable block (ram,0x000101750770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1017518f4(int param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar13;
  long unaff_x20;
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  
  func_0x000107c3f5b8();
  if ((param_1 == 2) || (param_2 == 9)) {
    return 1;
  }
  if (param_2 != 0) {
    return 0;
  }
  puVar6 = PTR_PTR_1126a7ad0;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c5b258();
  FUN_1017505e4();
  if (((ulong)puVar7 & 1) == 0) {
    return 0;
  }
  func_0x000107c5b260();
  lVar1 = _DAT_112dc66f0;
  uVar9 = 0;
  lVar10 = -0x2fffffffffffffdb;
  bVar11 = 0;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112dc66f0);
  func_0x000107c6157c(uVar13);
  func_0x0001000c74f0(alStack_90);
  func_0x000107c61574(uVar13);
  lVar3 = alStack_90[0];
  if (*(long *)(alStack_90[0] + 0x10) == 0) {
    func_0x000107c6142c(alStack_90[0]);
    if (puVar6 != (undefined *)0x1) goto LAB_10175067c;
LAB_101750724:
    uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
    uStack_80 = 0xd000000000000025;
    uStack_78 = 0x800000010efba730;
    func_0x000107c6157c(uVar13);
    pcVar2 = (code *)0x1017528d4;
  }
  else {
    func_0x000107c61434(alStack_90[0]);
    uVar8 = uVar9;
    func_0x000100029284(0xd000000000000025);
    func_0x000107c61430(lVar3,2);
    if ((uVar8 & 1) != 0) goto LAB_1017507e8;
    if (puVar6 == (undefined *)0x1) goto LAB_101750724;
LAB_10175067c:
    if (puVar6 == (undefined *)0x0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112dc66e8);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101750868);
        (*pcVar2)();
      }
      lVar4 = lVar10;
      func_0x000107c5fadc(0xd000000000000025,0x800000010efba730);
      lVar5 = lVar3;
      func_0x000107c4c270();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar4);
      bStack_70 = 0;
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x000107c5dc0c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
        lVar4 = lVar3;
        func_0x000107c3ebcc();
        bStack_70 = (byte)lVar4;
        func_0x000107c61170(lVar3);
      }
      uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
      uStack_80 = 0xd000000000000025;
      uStack_78 = 0x800000010efba730;
      bStack_70 = bStack_70 & 1;
      func_0x000107c6157c(uVar13);
      pcVar2 = (code *)0x1017528ec;
    }
    else {
      uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
      uStack_80 = 0xd000000000000025;
      uStack_78 = 0x800000010efba730;
      func_0x000107c6157c(uVar13);
      pcVar2 = FUN_1017528bc;
    }
  }
  func_0x000100075034(pcVar2,alStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar13);
LAB_1017507e8:
  uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar13);
  func_0x0001000c74f0(alStack_90);
  func_0x000107c61574(uVar13);
  bVar12 = 0;
  if (*(long *)(alStack_90[0] + 0x10) != 0) {
    func_0x000107c61434(alStack_90[0]);
    func_0x000100029284();
    if ((uVar9 & 1) != 0) {
      bVar11 = *(byte *)(*(long *)(alStack_90[0] + 0x38) + lVar10);
    }
    func_0x000107c6142c(alStack_90[0]);
    bVar12 = bVar11;
  }
  func_0x000107c6142c(alStack_90[0]);
  return bVar12 & 1;
}



/* Entry: 1017519ac; end: 101751a0f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl shouldDisablePreloadingWith:cameraViewType:] */

uint FUN_1017519ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1017518f4(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101751a10; end: 101751a87; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorImportMemoriesAsSnapDoc] */

uint FUN_101751a10(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168(PTR_PTR_1126a7ad0);
  func_0x000107c61174(param_1);
  func_0x000107c5b248(puVar2);
  uVar1 = (uint)puVar2;
  FUN_1017505e4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101751a88; end: 101751b37;  */

/* WARNING: Possible PIC construction at 0x000101751af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101751afc) */
/* WARNING: Removing unreachable block (ram,0x000101751b24) */
/* WARNING: Removing unreachable block (ram,0x000101751b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101751a88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(0xd000000000000026,0x800000010efba6d0);
    func_0x000107c4c270(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751b38);
  (*pcVar1)();
}



/* Entry: 101751b38; end: 101751b5f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl exposeSnapEditorImportMemoriesAsSnapDoc] */

void FUN_101751b38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101751a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101751b60; end: 101751c03; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorFromMusicCameraSpotlightDisableBugFix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101751b60(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000037;
    func_0x000107c5fadc(0xd000000000000037,0x800000010efba690);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751c04);
  (*pcVar1)();
}



/* Entry: 101751c04; end: 101751ca7; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl musicCameraSpotlightDisablePreselectionBugFix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101751c04(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dc66e8);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efba650);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751ca8);
  (*pcVar1)();
}



/* Entry: 101751ca8; end: 101751d1f; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl snapEditorFromMusicCameraSpotlight] */

uint FUN_101751ca8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7ad0;
  func_0x000107c61168(PTR_PTR_1126a7ad0);
  func_0x000107c61174(param_1);
  func_0x000107c5b234(puVar2);
  uVar1 = (uint)puVar2;
  FUN_1017505e4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101751d20; end: 101751def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101751d20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efba5f0);
    lVar4 = lVar2;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c5dc0c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar2 = lVar5;
      func_0x000107c3ebcc(lVar5);
      func_0x000107c61170(lVar5);
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751df0);
  (*pcVar1)();
}



/* Entry: 101751df0; end: 101751e23; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl legacyPreviewPostActionBarFromMusicCamera] */

uint FUN_101751df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101751d20();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101751e24; end: 101751ed3;  */

/* WARNING: Possible PIC construction at 0x000101751e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101751e98) */
/* WARNING: Removing unreachable block (ram,0x000101751ec0) */
/* WARNING: Removing unreachable block (ram,0x000101751ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101751e24(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc66e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efba5f0);
    func_0x000107c4c270(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101751ed4);
  (*pcVar1)();
}



/* Entry: 101751ed4; end: 101751efb; -[_TtC30SnapEditorTweakServiceProvider20SnapEditorTweaksImpl exposeLegacyPreviewPostActionBarFromMusicCamera] */

void FUN_101751ed4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101751e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


