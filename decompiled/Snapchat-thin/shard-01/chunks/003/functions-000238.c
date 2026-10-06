/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f1af64; end: 100f1afc3; -[_TtC22CreatorHubPageLauncher32CreatorHubPageLauncherEntryPoint init] */

void FUN_100f1af64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorHubPageLauncher.CreatorHubPageLauncherEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1af90);
  (*pcVar1)();
}



/* Entry: 100f1afc4; end: 100f1b03f; -[_TtC22CreatorHubPageLauncher32CreatorHubPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f1afe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1afe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1afc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4bbe8));
  return;
}



/* Entry: 100f1b040; end: 100f1b047;  */

undefined8 FUN_100f1b040(void)

{
  return 0;
}



/* Entry: 100f1b048; end: 100f1b063; -[_TtC22CreatorHubPageLauncher32CreatorHubPageLauncherEntryPoint composerNativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1b048(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d4bc30;
  lVar1 = param_1;
  FUN_100f1b11c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4bbf8);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d4bc30,&DAT_10d912660);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f1b064; end: 100f1b067; -[_TtC22CreatorHubPageLauncher32CreatorHubPageLauncherEntryPoint setComposerNativePayloadHandlers:] */

void FUN_100f1b064(void)

{
  return;
}



/* Entry: 100f1b068; end: 100f1b083; -[_TtC22CreatorHubPageLauncher32CreatorHubPageLauncherEntryPoint nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1b068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d4bc28;
  lVar1 = param_1;
  (*(code *)0x100f1b134)();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4bbf8);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f1b084; end: 100f1b11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1b084(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  (*param_3)();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4bbf8);
  func_0x000107c61174();
  func_0x0001000285a8(param_4,param_5);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,param_4);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100f1b11c; end: 100f1b147; -[_TtC22CreatorHubPageLauncher32CreatorHubPageLauncherEntryPoint setNativePayloadHandlers:] */

void FUN_100f1b11c(void)

{
  return;
}



/* Entry: 100f1b148; end: 100f1b167;  */

void FUN_100f1b148(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0e88);
  return;
}



/* Entry: 100f1b168; end: 100f1b303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f1b168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d4bc48;
  func_0x000107c61614(unaff_x20 + _DAT_112d4bc48,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc60) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc70) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc80) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc88) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc90) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bc98) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bca0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bca8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bcb0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bcb8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bcc0) = param_13;
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 100f1b304; end: 100f1b41b;  */

long FUN_100f1b304(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  if (param_1 == '\0') {
    uVar5 = 0xd000000000000017;
    puVar4 = auStack_130;
    pcVar6 = "Missing required dependencies.";
  }
  else {
    uVar5 = 0xd00000000000001e;
    puVar4 = auStack_e0;
    pcVar6 = "JSRuntime unavailable.";
    if (param_1 != '\x01') {
      uVar5 = 0xd000000000000016;
      puVar4 = auStack_90;
      pcVar6 = "bPageLauncherHandler";
    }
  }
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(ulong *)(lVar1 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f1d180((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  return lVar3;
}



/* Entry: 100f1b41c; end: 100f1b42f;  */

bool FUN_100f1b41c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f1b430; end: 100f1b4db;  */

void FUN_100f1b430(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f1b4dc; end: 100f1b4ff;  */

void FUN_100f1b4dc(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100f1b500; end: 100f1b533;  */

undefined1  [16] FUN_100f1b500(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = PTR_DAT_112d4bd20;
  auVar1._0_8_ = uRam0000000112d4bd18;
  func_0x000107c61434(PTR_DAT_112d4bd20);
  return auVar1;
}



/* Entry: 100f1b534; end: 100f1b543;  */

undefined1 FUN_100f1b534(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f1b544; end: 100f1b56b;  */

void FUN_100f1b544(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f1bd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 100f1b56c; end: 100f1b5b3;  */

void FUN_100f1b56c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000100f1bd20();
  uVar2 = uVar1;
  func_0x000100f1bd60();
  uVar3 = uVar2;
  FUN_100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f1b5b4; end: 100f1b5bb;  */

void FUN_100f1b5b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 100f1b5bc; end: 100f1b61b; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler init] */

void FUN_100f1b5bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorHubPageLauncher.CreatorHubPageLauncherHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1b5e8);
  (*pcVar1)();
}



/* Entry: 100f1b61c; end: 100f1b733; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f1b708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1b70c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1b61c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4bc48);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4bc68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bc70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bc78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bc80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bc88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bc90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bc98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bca0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bca8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bcb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bcb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bcc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d4bc50));
  return;
}



/* Entry: 100f1b734; end: 100f1b737; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler setPayloadClass:] */

void FUN_100f1b734(void)

{
  return;
}



/* Entry: 100f1b738; end: 100f1b73b; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler setComposerPayloadClass:] */

void FUN_100f1b738(void)

{
  return;
}



/* Entry: 100f1b73c; end: 100f1b743; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler payloadType] */

undefined8 FUN_100f1b73c(void)

{
  return 3;
}



/* Entry: 100f1b744; end: 100f1b877;  */

void FUN_100f1b744(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100f1d1c0(param_1,&uStack_50,0x112d387f8,&UNK_10d902650);
  if (lStack_38 == 0) {
    puVar2 = &uStack_50;
    func_0x000100f1d180(puVar2,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0;
    FUN_100f1d364(0,0x112d4bcc8,&PTR_PTR_1126a5f28);
    puVar2 = &uStack_58;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_100f1b8b8(uStack_58,param_2,param_3);
      func_0x000107c61170(uStack_58);
      return;
    }
  }
  if (param_2 != (code *)0x0) {
    FUN_100f1b878();
    puVar3 = &UNK_1103695c8;
    func_0x000107c613f8(&UNK_1103695c8,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    (*param_2)(puVar4,&uStack_50);
    func_0x000107c61170(puVar4);
    func_0x000100f1d180(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f1b878; end: 100f1b8b7;  */

void FUN_100f1b878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4bcd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d912788;
  func_0x000107c61520(&UNK_10d912788,&UNK_1103695c8);
  puRam0000000112d4bcd0 = puVar1;
  return;
}



/* Entry: 100f1b8b8; end: 100f1ba73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1b8b8(long param_1,code *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = *(undefined1 **)(unaff_x20 + _DAT_112d4bc70);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 != (undefined1 *)0x0) {
    FUN_100f1bec0();
    if (param_1 != 0) {
      puVar4 = &UNK_110369610;
      func_0x000107c613fc(&UNK_110369610,0x30,7);
      *(code **)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = param_3;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(long *)(puVar4 + 0x28) = param_1;
      uStack_60 = 0x100f1d220;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_100f1c768;
      puStack_68 = &UNK_110369628;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000100f1d248(param_2,param_3);
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c440d8(puVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c615e8();
    puVar1 = puVar2;
  }
  if (param_2 != (code *)0x0) {
    FUN_100f1b878();
    puVar4 = &UNK_1103695c8;
    func_0x000107c613f8(&UNK_1103695c8,puVar1,0,0);
    *puVar1 = 1;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    pcStack_70 = (code *)0x0;
    (*param_2)(puVar5,&puStack_80);
    func_0x000107c61170(puVar5);
    FUN_100f1d180(&puStack_80,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f1ba74; end: 100f1ba93;  */

void FUN_100f1ba74(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0f50);
  return;
}



/* Entry: 100f1ba94; end: 100f1bb73; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler launchWithPayload:completion:] */

void FUN_100f1ba94(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1103695e8;
    func_0x000107c613fc(&UNK_1103695e8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x100f1d218;
  }
  FUN_100f1b744(&uStack_50,uVar1,puVar2);
  FUN_100f1d208(uVar1,puVar2);
  func_0x000107c61170(param_1);
  FUN_100f1d180(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 100f1bb74; end: 100f1bcdf;  */

int FUN_100f1bb74(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f1bbf0;
        goto LAB_100f1bbd4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f1bbd4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f1bbf0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f1bce0; end: 100f1bd9f;  */

void FUN_100f1bce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4bd00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d912760;
  func_0x000107c61520(&UNK_10d912760,&UNK_1103695c8);
  puRam0000000112d4bd00 = puVar1;
  return;
}



/* Entry: 100f1bda0; end: 100f1bebf;  */

void FUN_100f1bda0(long param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar3 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_58);
    (**(code **)(lVar3 + 8))(puVar2,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar1);
  return;
}



/* Entry: 100f1bec0; end: 100f1c5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f1bec0(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x20;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4bc90);
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d4bcb8);
    func_0x000107c4d814();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c4c1dc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar5 = *(long *)(unaff_x20 + _DAT_112d4bc98);
      func_0x000107c3f1dc();
      func_0x000107c61180();
      lVar2 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar2 == 0) {
        func_0x000107c615e8(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = *(long *)(unaff_x20 + _DAT_112d4bc78);
        func_0x000107c4d604();
        func_0x000107c61180();
        lVar5 = lVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170();
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          lVar3 = lVar2;
        }
        else {
          FUN_100f1c7b0();
          if (lVar6 == 0) {
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar2);
            lVar3 = lVar5;
          }
          else {
            uVar7 = *(ulong *)(unaff_x20 + _DAT_112d4bc80);
            func_0x000107c4f3e4();
            func_0x000107c61180();
            uVar8 = uVar7;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(uVar7);
            if (uVar8 != 0) {
              uVar7 = uVar8;
              func_0x000107c4f378();
              func_0x000107c61180();
              func_0x000107c615e8(uVar8);
              uVar8 = 0x112d4bd28;
              func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
              uVar9 = uVar7;
              func_0x000107c5fc54();
              func_0x000107c61170(uVar7);
              if (uVar9 >> 0x3e == 0) {
                uVar7 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar7 = uVar9 & 0xffffffffffffff8;
                if (0x7fffffffffffffff < uVar9) {
                  uVar7 = uVar9;
                }
                func_0x000107c60480();
              }
              if (uVar7 != 0) {
                uVar29 = 0;
                do {
                  if ((uVar9 & 0xc000000000000001) == 0) {
                    if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1c59c);
                      (*pcVar1)();
                    }
                    uVar28 = *(ulong *)(uVar9 + uVar29 * 8 + 0x20);
                    func_0x000107c615f0(uVar28);
                  }
                  else {
                    uVar28 = uVar29;
                    uVar8 = uVar9;
                    FUN_100f1cdf4();
                  }
                  if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1c1dc);
                    (*pcVar1)();
                  }
                  uVar24 = uVar29 + 1;
                  uVar25 = uVar28;
                  func_0x000107c3ee4c();
                  func_0x000107c61180();
                  uVar27 = uVar25;
                  func_0x000107c44fd8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar25);
                  if (uVar27 == 0) {
                    uVar25 = 0;
                    uVar27 = 0;
                    uVar23 = uVar8;
                  }
                  else {
                    uVar25 = uVar27;
                    func_0x000107c5faec();
                    uVar23 = uVar8;
                    func_0x000107c61170(uVar27);
                    uVar27 = uVar8;
                  }
                  uVar10 = param_1;
                  func_0x000107c4f38c();
                  func_0x000107c61180();
                  uVar11 = uVar10;
                  func_0x000107c5faec();
                  uVar8 = uVar23;
                  func_0x000107c61170(uVar10);
                  if (uVar27 != 0) {
                    if ((uVar25 == uVar11) && (uVar27 == uVar23)) {
                      func_0x000107c6142c(uVar9);
                      func_0x000107c6142c(uVar27);
                      uVar9 = uVar23;
                    }
                    else {
                      uVar8 = uVar27;
                      func_0x000107c605b8(uVar25,uVar27,uVar11,uVar23,0);
                      func_0x000107c6142c(uVar27);
                      func_0x000107c6142c(uVar23);
                      if ((uVar25 & 1) == 0) goto LAB_100f1c0b4;
                    }
                    func_0x000107c6142c(uVar9);
                    uVar7 = uVar28;
                    func_0x000107c3ee50();
                    func_0x000107c61180();
                    func_0x000107c615e8(uVar28);
                    uVar9 = uVar7;
                    func_0x000107c41214();
                    func_0x000107c61180();
                    func_0x000107c61170(uVar7);
                    if (uVar9 == 0) {
                      func_0x000107c615e8(lVar6);
                      func_0x000107c615e8(lVar5);
                      func_0x000107c615e8(lVar4);
                      func_0x000107c615e8(lVar2);
                    }
                    else {
                      uVar7 = uVar9;
                      func_0x000107c5ee30(uVar9);
                      func_0x000107c61170();
                      FUN_100f1d258();
                      if (uVar9 != 0) {
                        uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112d4bc58);
                        *(ulong *)(unaff_x20 + _DAT_112d4bc58) = uVar9;
                        func_0x000107c615f0();
                        func_0x000107c615e8(uVar26);
                        uVar12 = 0;
                        func_0x000100f365b0();
                        uVar26 = uVar12;
                        func_0x000107c610f8();
                        func_0x000107c453e4();
                        puVar13 = PTR_PTR_1126b0fb8;
                        func_0x000107c610f8();
                        func_0x000107c463e8();
                        if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1c5ec);
                          (*pcVar1)();
                        }
                        lVar14 = lVar2;
                        func_0x000107c4c1b0();
                        func_0x000107c61180();
                        func_0x000107c61170();
                        func_0x000100f1c98c();
                        uVar15 = 0;
                        FUN_100f1d364(0,0x112d4bd30,&PTR_PTR_1126a5f30);
                        puVar16 = &UNK_110369660;
                        func_0x000107c613fc(&UNK_110369660,0x18,7);
                        *(long *)(puVar16 + 0x10) = unaff_x20;
                        func_0x000107c615f0(lVar6);
                        func_0x000107c61174();
                        func_0x00010006c00c(uVar7,uVar8);
                        uVar29 = param_1;
                        func_0x000107c5b634();
                        func_0x000107c61180();
                        lVar17 = lVar5;
                        func_0x000107c615f0();
                        FUN_100f1cae4();
                        puVar18 = &UNK_110369688;
                        func_0x000107c613fc(&UNK_110369688,0x18,7);
                        *(long *)(puVar18 + 0x10) = unaff_x20;
                        lVar19 = lVar3;
                        func_0x000107c614f0();
                        uVar20 = 0;
                        func_0x000103bda44c();
                        func_0x000107c615f0(uVar9);
                        func_0x000107c61174(unaff_x20);
                        func_0x000107c61174();
                        func_0x000107c615f0(lVar3);
                        func_0x000107c615f0(lVar4);
                        func_0x000107c615f0(lVar14);
                        puVar21 = puVar13;
                        func_0x000107c615f0();
                        lVar22 = lVar6;
                        FUN_100f1cf98(lVar6,FUN_100f1d3a4,puVar16,uVar7,uVar8,uVar29,lVar5,lVar17,
                                      0x100f1d3ac,puVar18,uVar26,lVar3,lVar4,lVar14,puVar21,uVar9,
                                      uVar15,uVar12,lVar19,uVar20);
                        func_0x000107c41524(param_1);
                        func_0x000107c61180();
                        func_0x000107c53f34(lVar22);
                        func_0x000107c615e8(uVar9);
                        func_0x000107c61170(uVar26);
                        func_0x000107c615e8(lVar14);
                        func_0x000107c615e8(puVar13);
                        func_0x000107c61170(param_1);
                        func_0x00010006c090(uVar7,uVar8);
                        func_0x000107c615e8(lVar3);
                        func_0x000107c615e8(lVar4);
                        func_0x000107c615e8(lVar2);
                        func_0x000107c615e8(lVar5);
                        func_0x000107c615e8(lVar6);
                        return lVar22;
                      }
                      func_0x00010006c090(uVar7,uVar8);
                      func_0x000107c615e8(lVar3);
                      func_0x000107c615e8(lVar4);
                      func_0x000107c615e8(lVar2);
                      func_0x000107c615e8(lVar5);
                      lVar3 = lVar6;
                    }
                    goto LAB_100f1c248;
                  }
                  func_0x000107c6142c(uVar23);
LAB_100f1c0b4:
                  func_0x000107c615e8(uVar28);
                  uVar29 = uVar29 + 1;
                } while (uVar24 != uVar7);
              }
              func_0x000107c615e8(lVar6);
              func_0x000107c615e8(lVar5);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar2);
              func_0x000107c615e8(lVar3);
              func_0x000107c6142c(uVar9);
              return 0;
            }
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar5);
            lVar3 = lVar6;
          }
        }
      }
    }
LAB_100f1c248:
    func_0x000107c615e8(lVar3);
  }
  return 0;
}



/* Entry: 100f1c5ec; end: 100f1c767;  */

/* WARNING: Possible PIC construction at 0x000100f1c684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1c6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1c748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1c6b0) */
/* WARNING: Removing unreachable block (ram,0x000100f1c688) */
/* WARNING: Removing unreachable block (ram,0x000100f1c744) */
/* WARNING: Removing unreachable block (ram,0x000100f1c694) */
/* WARNING: Removing unreachable block (ram,0x000100f1c74c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1c5ec(undefined1 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = PTR_PTR_1126deec0;
    func_0x000107c61168();
    func_0x000107c615f0(param_1);
    func_0x000107c43be4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c409a4();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    uVar3 = *(undefined8 *)(param_4 + _DAT_112d4bc60);
    *(undefined **)(param_4 + _DAT_112d4bc60) = puVar2;
    func_0x000107c615f0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  if (param_2 != (code *)0x0) {
    FUN_100f1b878();
    puVar1 = &UNK_1103695c8;
    func_0x000107c613f8(&UNK_1103695c8,param_1,0,0);
    *param_1 = 2;
    puVar2 = puVar1;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar1);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    (*param_2)(puVar2,&uStack_60);
    func_0x000107c61170(puVar2);
    FUN_100f1d180(&uStack_60,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f1c768; end: 100f1c7af;  */

void FUN_100f1c768(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100f1c7b0; end: 100f1ca8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f1c7b0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    uVar3 = unaff_x20 + _DAT_112d4bc48;
    func_0x000107c61618();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar4 != 0) {
        uVar3 = uVar4;
        func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_topmostViewController_11267b0f0);
        if ((uVar3 & 1) == 0) {
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(uVar4);
          return 0;
        }
        uVar3 = uVar4;
        func_0x000107c5cc6c(uVar4);
        func_0x000107c61180();
        func_0x000107c615e8(uVar4);
        lVar2 = lVar1;
        func_0x000107c409cc();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(uVar3);
          return 0;
        }
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4bc70);
        func_0x000107c5dbd4(uVar5);
        func_0x000107c61180();
        lVar6 = lVar2;
        func_0x000107c40978();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar3);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4bc50);
        *(long *)(unaff_x20 + _DAT_112d4bc50) = lVar6;
        func_0x000107c615f0(lVar6);
        func_0x000107c615e8(uVar5);
        return lVar6;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return 0;
}



/* Entry: 100f1ca90; end: 100f1cae3;  */

/* WARNING: Possible PIC construction at 0x000100f1cab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1cab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ca90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4bc60);
  *(undefined8 *)(param_1 + _DAT_112d4bc60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100f1cae4; end: 100f1cd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_100f1cae4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 auStack_a0 [7];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12_00;
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar10 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar10)(lVar9,1,1,lVar1);
  (*pcVar10)(lVar8,1,1,lVar1);
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,1,1,lVar1);
  *(undefined1 *)(lVar6 + -8) = 0;
  *(undefined8 *)(lVar6 + -0x10) = 0;
  *(undefined8 *)(lVar6 + -0x18) = 0;
  *(undefined8 *)(lVar6 + -0x20) = 0;
  *(undefined8 *)(lVar6 + -0x28) = 0;
  *(undefined8 *)(lVar6 + -0x30) = 0;
  *(undefined8 *)(lVar6 + -0x38) = 0;
  *(undefined1 **)(lVar6 + -0x40) = puVar4;
  func_0x000104638e24(lVar6,0x19,lVar9,0,lVar8,0,0,0,0);
  func_0x000103bda44c(0);
  puVar5 = *(ulong **)(unaff_x20 + _DAT_112d4bc88);
  FUN_100e39298(lVar6,lVar7);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000104651d90(lVar7);
  func_0x000103bda584(puVar5,0,lVar7);
  func_0x000100083b20(&uStack_58);
  uVar2 = uStack_58;
  func_0x000107c4141c(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  uVar3 = uVar2;
  func_0x000107c3ff98(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x98))(uVar3);
  func_0x000100e392dc(lVar6);
  return puVar5;
}



/* Entry: 100f1cd94; end: 100f1cdf3;  */

uint FUN_100f1cd94(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
  return (uint)param_2 & 1;
}



/* Entry: 100f1cdf4; end: 100f1cf97;  */

ulong FUN_100f1cdf4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f1cecc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f1ced0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010ef1a510);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f1cf98);
  (*pcVar2)();
}



/* Entry: 100f1cf98; end: 100f1d17f;  */

undefined8
FUN_100f1cf98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1103696a0;
  ppuVar2 = &puStack_a8;
  uStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000107c60bc4();
  uVar3 = param_4;
  func_0x000107c5ee20(param_4,param_5);
  uStack_b8 = param_9;
  uStack_b0 = param_10;
  puStack_d8 = puVar1;
  uStack_d0 = 0x42000000;
  pcStack_c8 = FUN_100f1cd94;
  puStack_c0 = &UNK_1103696c8;
  ppuVar4 = &puStack_d8;
  func_0x000107c60bc4();
  func_0x000107c46424();
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x00010006c090(param_4,param_5);
  func_0x000107c615e8(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c615e8(param_15);
  func_0x000107c615e8(param_16);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uStack_80);
  return param_17;
}



/* Entry: 100f1d180; end: 100f1d207;  */

undefined8 FUN_100f1d180(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100f1d208; end: 100f1d257;  */

void FUN_100f1d208(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100f1d258; end: 100f1d363;  */

undefined * FUN_100f1d258(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef1a4e0);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar2);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar4 = PTR_PTR_1126b0fa8;
  func_0x000107c610f8(PTR_PTR_1126b0fa8);
  func_0x000107c47de8();
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 100f1d364; end: 100f1d3a3;  */

void FUN_100f1d364(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f1d3a4; end: 100f1d3af;  */

/* WARNING: Possible PIC construction at 0x000100f1cab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1cab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d3a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4bc60);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4bc60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100f1d3b0; end: 100f1d4bb;  */

undefined8 FUN_100f1d3b0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c43d80();
  func_0x000107c61180();
  puVar3 = param_1;
  lVar5 = param_2;
  func_0x000107c5fadc(param_1);
  func_0x000107c59a00(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c43d80();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c158();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
LAB_100f1d494:
    uVar4 = 0;
  }
  else {
    puVar1 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    if (puVar1 == param_1 && lVar5 == param_2) {
      func_0x000107c6142c(lVar5);
    }
    else {
      func_0x000107c605b8(puVar1,lVar5,param_1,param_2,0);
      func_0x000107c6142c(lVar5);
      if (((ulong)puVar1 & 1) == 0) goto LAB_100f1d494;
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 100f1d4bc; end: 100f1d4cb;  */

void FUN_100f1d4bc(long param_1,long param_2)

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



/* Entry: 100f1d4cc; end: 100f1d4cf; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler composerPayloadClass] */

void FUN_100f1d4cc(void)

{
  FUN_100f1d364(0,0x112d4bcc8,&PTR_PTR_1126a5f28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f1d4d0; end: 100f1d4d3; -[_TtC22CreatorHubPageLauncher29CreatorHubPageLauncherHandler payloadClass] */

void FUN_100f1d4d0(void)

{
  FUN_100f1d364(0,0x112d4bcc8,&PTR_PTR_1126a5f28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f1d4d4; end: 100f1d4df; -[SCCreatorHubPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d4d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd38;
  func_0x000107c61428(param_1 + _DAT_112d4bd38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d4e0; end: 100f1d4eb; -[SCCreatorHubPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd38;
  func_0x000107c61428(param_1 + _DAT_112d4bd38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d4ec; end: 100f1d4f7; -[SCCreatorHubPageLauncherEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d4ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd40;
  func_0x000107c61428(param_1 + _DAT_112d4bd40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d4f8; end: 100f1d503; -[SCCreatorHubPageLauncherEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd40;
  func_0x000107c61428(param_1 + _DAT_112d4bd40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d504; end: 100f1d50f; -[SCCreatorHubPageLauncherEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd48;
  func_0x000107c61428(param_1 + _DAT_112d4bd48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d510; end: 100f1d51b; -[SCCreatorHubPageLauncherEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd48;
  func_0x000107c61428(param_1 + _DAT_112d4bd48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d51c; end: 100f1d527; -[SCCreatorHubPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d51c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd50;
  func_0x000107c61428(param_1 + _DAT_112d4bd50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d528; end: 100f1d533; -[SCCreatorHubPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd50;
  func_0x000107c61428(param_1 + _DAT_112d4bd50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d534; end: 100f1d53f; -[SCCreatorHubPageLauncherEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d534(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd58;
  func_0x000107c61428(param_1 + _DAT_112d4bd58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d540; end: 100f1d54b; -[SCCreatorHubPageLauncherEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd58;
  func_0x000107c61428(param_1 + _DAT_112d4bd58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d54c; end: 100f1d557; -[SCCreatorHubPageLauncherEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d54c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd60;
  func_0x000107c61428(param_1 + _DAT_112d4bd60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d558; end: 100f1d563; -[SCCreatorHubPageLauncherEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d558(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd60;
  func_0x000107c61428(param_1 + _DAT_112d4bd60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d564; end: 100f1d56f; -[SCCreatorHubPageLauncherEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d564(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd68;
  func_0x000107c61428(param_1 + _DAT_112d4bd68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d570; end: 100f1d57b; -[SCCreatorHubPageLauncherEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d570(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd68;
  func_0x000107c61428(param_1 + _DAT_112d4bd68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d57c; end: 100f1d587; -[SCCreatorHubPageLauncherEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d57c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd70;
  func_0x000107c61428(param_1 + _DAT_112d4bd70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d588; end: 100f1d593; -[SCCreatorHubPageLauncherEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd70;
  func_0x000107c61428(param_1 + _DAT_112d4bd70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d594; end: 100f1d59f; -[SCCreatorHubPageLauncherEntryPoint composerMediaCameraRollServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd78;
  func_0x000107c61428(param_1 + _DAT_112d4bd78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d5a0; end: 100f1d5ab; -[SCCreatorHubPageLauncherEntryPoint setComposerMediaCameraRollServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd78;
  func_0x000107c61428(param_1 + _DAT_112d4bd78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d5ac; end: 100f1d5b7; -[SCCreatorHubPageLauncherEntryPoint memoriesSnapTranscodingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd80;
  func_0x000107c61428(param_1 + _DAT_112d4bd80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d5b8; end: 100f1d5c3; -[SCCreatorHubPageLauncherEntryPoint setMemoriesSnapTranscodingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd80;
  func_0x000107c61428(param_1 + _DAT_112d4bd80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d5c4; end: 100f1d5cf; -[SCCreatorHubPageLauncherEntryPoint memoriesAPIDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd88;
  func_0x000107c61428(param_1 + _DAT_112d4bd88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d5d0; end: 100f1d5db; -[SCCreatorHubPageLauncherEntryPoint setMemoriesAPIDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd88;
  func_0x000107c61428(param_1 + _DAT_112d4bd88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d5dc; end: 100f1d5e7; -[SCCreatorHubPageLauncherEntryPoint composerMediaBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd90;
  func_0x000107c61428(param_1 + _DAT_112d4bd90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d5e8; end: 100f1d5f3; -[SCCreatorHubPageLauncherEntryPoint setComposerMediaBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd90;
  func_0x000107c61428(param_1 + _DAT_112d4bd90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d5f4; end: 100f1d5ff; -[SCCreatorHubPageLauncherEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d5f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bd98;
  func_0x000107c61428(param_1 + _DAT_112d4bd98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d600; end: 100f1d60b; -[SCCreatorHubPageLauncherEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bd98;
  func_0x000107c61428(param_1 + _DAT_112d4bd98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d60c; end: 100f1d617; -[SCCreatorHubPageLauncherEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d60c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bda0;
  func_0x000107c61428(param_1 + _DAT_112d4bda0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d618; end: 100f1d65b;  */

void FUN_100f1d618(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1d65c; end: 100f1d667; -[SCCreatorHubPageLauncherEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bda0;
  func_0x000107c61428(param_1 + _DAT_112d4bda0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d668; end: 100f1d6bb;  */

void FUN_100f1d668(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1d6bc; end: 100f1d703; -[SCCreatorHubPageLauncherEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d6bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bda8;
  func_0x000107c61428(param_1 + _DAT_112d4bda8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f1d704; end: 100f1d767; -[SCCreatorHubPageLauncherEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bda8;
  func_0x000107c61428(param_1 + _DAT_112d4bda8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f1d768; end: 100f1e0bb;  */

/* WARNING: Possible PIC construction at 0x000100f1dbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dcc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dcd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dcf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dd08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dfcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1e01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1df5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1decc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1deec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1defc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1deac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1de2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1ddec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1ddac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1ddbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dd8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1dd7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1dda0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dd90) */
/* WARNING: Removing unreachable block (ram,0x000100f1ddc0) */
/* WARNING: Removing unreachable block (ram,0x000100f1ddb0) */
/* WARNING: Removing unreachable block (ram,0x000100f1ddf0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dde0) */
/* WARNING: Removing unreachable block (ram,0x000100f1de30) */
/* WARNING: Removing unreachable block (ram,0x000100f1de20) */
/* WARNING: Removing unreachable block (ram,0x000100f1de10) */
/* WARNING: Removing unreachable block (ram,0x000100f1de70) */
/* WARNING: Removing unreachable block (ram,0x000100f1de60) */
/* WARNING: Removing unreachable block (ram,0x000100f1de50) */
/* WARNING: Removing unreachable block (ram,0x000100f1de40) */
/* WARNING: Removing unreachable block (ram,0x000100f1deb0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dea0) */
/* WARNING: Removing unreachable block (ram,0x000100f1de90) */
/* WARNING: Removing unreachable block (ram,0x000100f1de80) */
/* WARNING: Removing unreachable block (ram,0x000100f1df00) */
/* WARNING: Removing unreachable block (ram,0x000100f1def0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dee0) */
/* WARNING: Removing unreachable block (ram,0x000100f1ded0) */
/* WARNING: Removing unreachable block (ram,0x000100f1df60) */
/* WARNING: Removing unreachable block (ram,0x000100f1df50) */
/* WARNING: Removing unreachable block (ram,0x000100f1df40) */
/* WARNING: Removing unreachable block (ram,0x000100f1df30) */
/* WARNING: Removing unreachable block (ram,0x000100f1df20) */
/* WARNING: Removing unreachable block (ram,0x000100f1dfc0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dfb0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dfa0) */
/* WARNING: Removing unreachable block (ram,0x000100f1df90) */
/* WARNING: Removing unreachable block (ram,0x000100f1df80) */
/* WARNING: Removing unreachable block (ram,0x000100f1df70) */
/* WARNING: Removing unreachable block (ram,0x000100f1e020) */
/* WARNING: Removing unreachable block (ram,0x000100f1e010) */
/* WARNING: Removing unreachable block (ram,0x000100f1e000) */
/* WARNING: Removing unreachable block (ram,0x000100f1dff0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dfe0) */
/* WARNING: Removing unreachable block (ram,0x000100f1dfd0) */
/* WARNING: Removing unreachable block (ram,0x000100f1e090) */
/* WARNING: Removing unreachable block (ram,0x000100f1e080) */
/* WARNING: Removing unreachable block (ram,0x000100f1e070) */
/* WARNING: Removing unreachable block (ram,0x000100f1e060) */
/* WARNING: Removing unreachable block (ram,0x000100f1e050) */
/* WARNING: Removing unreachable block (ram,0x000100f1e040) */
/* WARNING: Removing unreachable block (ram,0x000100f1dd1c) */
/* WARNING: Removing unreachable block (ram,0x000100f1dd0c) */
/* WARNING: Removing unreachable block (ram,0x000100f1dcfc) */
/* WARNING: Removing unreachable block (ram,0x000100f1dcec) */
/* WARNING: Removing unreachable block (ram,0x000100f1dcdc) */
/* WARNING: Removing unreachable block (ram,0x000100f1dccc) */
/* WARNING: Removing unreachable block (ram,0x000100f1dcbc) */
/* WARNING: Removing unreachable block (ram,0x000100f1dcac) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc80) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc68) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc54) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc40) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc2c) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc1c) */
/* WARNING: Removing unreachable block (ram,0x000100f1dc0c) */
/* WARNING: Removing unreachable block (ram,0x000100f1dbfc) */
/* WARNING: Removing unreachable block (ram,0x000100f1dbc8) */
/* WARNING: Removing unreachable block (ram,0x000100f1dd80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1d768(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar13 = unaff_x20;
    func_0x000107c41420();
    func_0x000107c61180();
    if (lVar13 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5c634();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar13;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4d52c();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar13;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c40014();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar4 = unaff_x20;
            func_0x000107c3ffd0();
            func_0x000107c61180();
            if (lVar4 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c5b398();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c61170(lVar2);
                lVar2 = lVar13;
              }
              else {
                lVar6 = unaff_x20;
                func_0x000107c5e1d0();
                func_0x000107c61180();
                if (lVar6 == 0) {
                  func_0x000107c61170(lVar2);
                  lVar2 = lVar13;
                }
                else {
                  lVar7 = unaff_x20;
                  func_0x000107c4e270();
                  func_0x000107c61180();
                  if (lVar7 != 0) {
                    lVar8 = unaff_x20;
                    func_0x000107c3ffbc();
                    func_0x000107c61180();
                    if (lVar8 != 0) {
                      lVar9 = unaff_x20;
                      func_0x000107c4ccbc();
                      func_0x000107c61180();
                      if (lVar9 == 0) {
                        func_0x000107c61170(lVar2);
                        lVar2 = lVar13;
                      }
                      else {
                        lVar10 = unaff_x20;
                        func_0x000107c4cb10();
                        func_0x000107c61180();
                        if (lVar10 == 0) {
                          func_0x000107c61170(lVar2);
                          lVar2 = lVar13;
                        }
                        else {
                          lVar11 = unaff_x20;
                          func_0x000107c3ffb8();
                          func_0x000107c61180();
                          if (lVar11 != 0) {
                            lVar12 = unaff_x20;
                            func_0x000107c3ff88();
                            func_0x000107c61180();
                            if (lVar12 != 0) {
                              func_0x000107c3e274();
                              func_0x000107c61180();
                              if (unaff_x20 == 0) {
                                func_0x000107c61170(lVar2);
                                lVar2 = lVar13;
                              }
                              else {
                                lVar13 = 0;
                                FUN_100f1b148();
                                func_0x000107c610f8();
                                *(long *)(lVar13 + _DAT_112d4bbe8) = lVar2;
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                lVar2 = unaff_x20;
                                func_0x00010451338c();
                                func_0x0001000285a8(0x112d4bbf0,&UNK_10d9125f0);
                                puVar14 = auStack_70;
                                func_0x0001000838ec();
                                lVar15 = 0;
                                FUN_100f1ba74();
                                lVar16 = lVar15;
                                func_0x000107c610f8();
                                lVar13 = _DAT_112d4bc48;
                                func_0x000107c61614(lVar16 + _DAT_112d4bc48,0);
                                *(undefined8 *)(lVar16 + _DAT_112d4bc50) = 0;
                                *(undefined8 *)(lVar16 + _DAT_112d4bc58) = 0;
                                *(undefined8 *)(lVar16 + _DAT_112d4bc60) = 0;
                                func_0x000107c61604(lVar16 + lVar13,lVar2);
                                *(undefined1 **)(lVar16 + _DAT_112d4bc68) = puVar14;
                                *(long *)(lVar16 + _DAT_112d4bc70) = lVar3;
                                *(long *)(lVar16 + _DAT_112d4bc78) = lVar4;
                                *(long *)(lVar16 + _DAT_112d4bc80) = lVar5;
                                *(long *)(lVar16 + _DAT_112d4bc88) = lVar6;
                                *(long *)(lVar16 + _DAT_112d4bc90) = lVar7;
                                *(long *)(lVar16 + _DAT_112d4bc98) = lVar8;
                                *(long *)(lVar16 + _DAT_112d4bca0) = lVar9;
                                *(long *)(lVar16 + _DAT_112d4bca8) = lVar10;
                                *(long *)(lVar16 + _DAT_112d4bcb0) = lVar11;
                                *(long *)(lVar16 + _DAT_112d4bcb8) = lVar12;
                                *(long *)(lVar16 + _DAT_112d4bcc0) = unaff_x20;
                                puVar1 = PTR_s_init_1125d9248;
                                lStack_80 = lVar16;
                                lStack_78 = lVar15;
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174(lVar6);
                                func_0x000107c61174();
                                func_0x000107c61174(lVar8);
                                func_0x000107c61174(lVar9);
                                func_0x000107c61174(lVar10);
                                func_0x000107c61174(lVar11);
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61154(&lStack_80,puVar1);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100f1e0bc; end: 100f1e0e3; -[SCCreatorHubPageLauncherEntryPoint begin] */

void FUN_100f1e0bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f1d768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f1e0e4; end: 100f1e127; -[SCCreatorHubPageLauncherEntryPoint end] */

void FUN_100f1e0e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1e128; end: 100f1e863;  */

void FUN_100f1e128(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x767265536b636564) && (param_3 == -0x13ffffff8c9a9c97)) ||
       (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53e98();
    }
    else {
      uVar2 = 0x63536d6574737973;
      if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
         (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59b6c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
               (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c536e0();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
                 (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c536a8();
              }
              else {
                uVar2 = 0x536f725070616e73;
                if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
                   (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5943c();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10e5ad0)) ||
                     (func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c571c8();
                  }
                  else {
                    uVar2 = 0xd00000000000001f;
                    if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef10e5ab0)) ||
                       (func_0x000107c605b8(0xd00000000000001f,0x800000010ef1a550,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53694();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10e5a90)) {
                        uVar2 = 0xd00000000000001f;
                        func_0x000107c605b8(0xd00000000000001f,0x800000010ef1a570,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0xd000000000000017;
                          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e5a70))
                             || (func_0x000107c605b8(0xd000000000000017,0x800000010ef1a590,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c56500();
                          }
                          else {
                            uVar2 = 0xd00000000000001b;
                            if (((param_2 == -0x2fffffffffffffe5) &&
                                (param_3 == -0x7ffffffef10e5a50)) ||
                               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1a5b0,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c53690();
                            }
                            else {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffea) &&
                                  (param_3 == -0x7ffffffef10e63d0)) ||
                                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c53680();
                              }
                              else {
                                if ((param_2 != -0x2fffffffffffffee) ||
                                   (param_3 != -0x7ffffffef10ed650)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,
                                                      param_3,0);
                                  if ((uVar2 & 1) == 0) {
                                    if ((param_2 != -0x2fffffffffffffe9) ||
                                       (param_3 != -0x7ffffffef10ed990)) {
                                      uVar2 = 0xd000000000000017;
                                      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,
                                                          param_2,param_3,0);
                                      if ((uVar2 & 1) == 0) {
                                        func_0x000107c602fc(0x15);
                                        func_0x000107c6142c(0xe000000000000000);
                                        func_0x000107c5fb78(param_2,param_3);
                                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                            0x800000010ef0fc20,
                                                                                                                        
                                                  "CreatorHubPageLauncher/SCCreatorHubPageLauncherEntryPoint.swift"
                                                  ,0x3f,2,0x67,0);
                    /* WARNING: Does not return */
                                        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1e864);
                                        (*pcVar1)();
                                      }
                                    }
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c5a68c();
                                    goto LAB_100f1e1b4;
                                  }
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c52954();
                              }
                            }
                          }
                          goto LAB_100f1e1b4;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c565e4();
                    }
                  }
                }
              }
            }
            goto LAB_100f1e1b4;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
      }
    }
  }
LAB_100f1e1b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f1e864; end: 100f1e90f; -[SCCreatorHubPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_100f1e864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f1e128(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f1e910; end: 100f1ea7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1e910(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bd98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4bda0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4bda8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4bdb0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f1ea80; end: 100f1ea9f; -[SCCreatorHubPageLauncherEntryPoint init] */

void FUN_100f1ea80(void)

{
  FUN_100f1e910();
  return;
}



/* Entry: 100f1eaa0; end: 100f1ead3;  */

void FUN_100f1eaa0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f1ead4; end: 100f1ebeb; -[SCCreatorHubPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f1ebd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1ebd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ead4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4bd38);
  func_0x000107c61610(param_1 + _DAT_112d4bd40);
  func_0x000107c61610(param_1 + _DAT_112d4bd48);
  func_0x000107c61610(param_1 + _DAT_112d4bd50);
  func_0x000107c61610(param_1 + _DAT_112d4bd58);
  func_0x000107c61610(param_1 + _DAT_112d4bd60);
  func_0x000107c61610(param_1 + _DAT_112d4bd68);
  func_0x000107c61610(param_1 + _DAT_112d4bd70);
  func_0x000107c61610(param_1 + _DAT_112d4bd78);
  func_0x000107c61610(param_1 + _DAT_112d4bd80);
  func_0x000107c61610(param_1 + _DAT_112d4bd88);
  func_0x000107c61610(param_1 + _DAT_112d4bd90);
  func_0x000107c61610(param_1 + _DAT_112d4bd98);
  func_0x000107c61610(param_1 + _DAT_112d4bda0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4bda8));
  return;
}



/* Entry: 100f1ebec; end: 100f1ec0b;  */

void FUN_100f1ebec(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1088);
  return;
}



/* Entry: 100f1ec0c; end: 100f1ed6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f1ec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_80 [8];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4bde0) = param_1;
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x00010451338c();
  lVar3 = 0;
  FUN_100f1faec();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112d4be18;
  func_0x000107c61614(lVar4 + _DAT_112d4be18,0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = uVar2;
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c61604(lVar4 + lVar1,uVar5);
  func_0x000107c615e8(uVar5);
  *(undefined8 *)(lVar4 + _DAT_112d4be20) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112d4be28) = param_4;
  plVar6 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar2);
  *(long **)(unaff_x20 + _DAT_112d4bde8) = plVar6;
  puVar7 = auStack_80;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar7;
}



/* Entry: 100f1ed70; end: 100f1edcf; -[_TtC24ChatDeeplinkPageLauncher34ChatDeeplinkPageLauncherEntryPoint init] */

void FUN_100f1ed70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatDeeplinkPageLauncher.ChatDeeplinkPageLauncherEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1ed9c);
  (*pcVar1)();
}



/* Entry: 100f1edd0; end: 100f1ee4b; -[_TtC24ChatDeeplinkPageLauncher34ChatDeeplinkPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f1edec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1edf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1edd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4bde0));
  return;
}



/* Entry: 100f1ee4c; end: 100f1ee53;  */

undefined8 FUN_100f1ee4c(void)

{
  return 0;
}



/* Entry: 100f1ee54; end: 100f1ee6f; -[_TtC24ChatDeeplinkPageLauncher34ChatDeeplinkPageLauncherEntryPoint composerNativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ee54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d4bc30;
  lVar1 = param_1;
  FUN_100f1b11c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4bde8);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d4bc30,&DAT_10d912660);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f1ee70; end: 100f1ee73; -[_TtC24ChatDeeplinkPageLauncher34ChatDeeplinkPageLauncherEntryPoint setComposerNativePayloadHandlers:] */

void FUN_100f1ee70(void)

{
  return;
}



/* Entry: 100f1ee74; end: 100f1ee8f; -[_TtC24ChatDeeplinkPageLauncher34ChatDeeplinkPageLauncherEntryPoint nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ee74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d4bc28;
  lVar1 = param_1;
  (*(code *)0x100f1b134)();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4bde8);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f1ee90; end: 100f1ef27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ee90(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  (*param_3)();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4bde8);
  func_0x000107c61174();
  func_0x0001000285a8(param_4,param_5);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,param_4);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


