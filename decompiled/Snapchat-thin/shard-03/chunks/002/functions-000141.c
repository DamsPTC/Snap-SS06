/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025ddb88; end: 1025ddc47; -[_TtC26SCMapHomeWorkSettingsScope26SCMapHomeWorkSettingsScope initWithDelegate:uiContainer:showOnboarding:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ddb88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112eacab8;
  func_0x000107c61614(param_1 + _DAT_112eacab8,0);
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_112eacac0) = param_4;
  *(undefined1 *)(param_1 + _DAT_112eacac8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112eacad0) = param_6;
  FUN_1025ddcec();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1025ddc48; end: 1025ddca3; -[_TtC26SCMapHomeWorkSettingsScope26SCMapHomeWorkSettingsScope init] */

void FUN_1025ddc48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapHomeWorkSettingsScope.SCMapHomeWorkSettingsScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025ddc74);
  (*pcVar1)();
}



/* Entry: 1025ddca4; end: 1025ddcdb; -[_TtC26SCMapHomeWorkSettingsScope26SCMapHomeWorkSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ddca4(long param_1)

{
  FUN_1025ddd0c(param_1 + _DAT_112eacab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eacac0));
  return;
}



/* Entry: 1025ddcdc; end: 1025ddceb;  */

undefined1  [16] FUN_1025ddcdc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1025ddcec; end: 1025ddd0b;  */

void FUN_1025ddcec(void)

{
  func_0x000107c61168(&PTR_PTR_112852ab8);
  return;
}



/* Entry: 1025ddd0c; end: 1025ddd2f;  */

undefined8 FUN_1025ddd0c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1025ddd30; end: 1025ddd33;  */

void FUN_1025ddd30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac18f0;
  func_0x000107c61520(&UNK_10dac18f0,&UNK_1105274c8);
  puRam0000000112eacad8 = puVar1;
  return;
}



/* Entry: 1025ddd34; end: 1025ddd73;  */

void FUN_1025ddd34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac18f0;
  func_0x000107c61520(&UNK_10dac18f0,&UNK_1105274c8);
  puRam0000000112eacad8 = puVar1;
  return;
}



/* Entry: 1025ddd74; end: 1025ddd83;  */

undefined1  [16] FUN_1025ddd74(void)

{
  return ZEXT816(0x1105274c8);
}



/* Entry: 1025ddd84; end: 1025dde63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025ddd84(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112eacab8;
  func_0x000107c61614(unaff_x20 + _DAT_112eacab8,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112eacac0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112eacac8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eacad0) = param_4;
  uVar2 = 0;
  FUN_1025ddcec();
  puVar3 = auStack_68;
  uStack_60 = uVar2;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 1025dde64; end: 1025ddf37; -[_TtC26SCMapHomeWorkSettingsScope23SCMapHomeWorkSetupScope initWithDelegate:uiContainer:showOnboarding:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025dde64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112eacab8;
  func_0x000107c61614(param_1 + _DAT_112eacab8,0);
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_112eacac0) = param_4;
  *(undefined1 *)(param_1 + _DAT_112eacac8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112eacad0) = param_6;
  uVar3 = 0;
  FUN_1025ddcec();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  uStack_60 = uVar3;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1025ddf38; end: 1025ddf8b;  */

void FUN_1025ddf38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025ddf8c; end: 1025ddf9f;  */

bool FUN_1025ddf8c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1025ddfa0; end: 1025de04b;  */

void FUN_1025ddfa0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1025de04c; end: 1025de073;  */

void FUN_1025de04c(ulong *param_1,ulong *param_2)

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



/* Entry: 1025de074; end: 1025de093; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de074(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eacb30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025de094; end: 1025de0a3; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eacb38));
  return;
}



/* Entry: 1025de0a4; end: 1025de0b3; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope userInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eacb40));
  return;
}



/* Entry: 1025de0b4; end: 1025de0c3; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope trayType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1025de0b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eacb48);
}



/* Entry: 1025de0c4; end: 1025de14f; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de0c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eacb50;
  func_0x000107c61428(param_1 + _DAT_112eacb50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025de150; end: 1025de2f3; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eacb50;
  func_0x000107c61428(param_1 + _DAT_112eacb50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025de2f4; end: 1025de303; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope trayCloseSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eacb58));
  return;
}



/* Entry: 1025de304; end: 1025de313; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope sourceSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1025de304(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eacb60);
}



/* Entry: 1025de314; end: 1025de45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025de314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112eacb50;
  func_0x000107c61614(unaff_x20 + _DAT_112eacb50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eacb30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb48) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112eacb58) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb60) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 1025de45c; end: 1025de52f; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope initWithUIContainer:loggingContext:userInfo:delegate:trayType:trayCloseSubject:sourceSessionID:] */

undefined8
FUN_1025de45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_8);
  uVar2 = param_3;
  FUN_1025de5c8(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return uVar2;
}



/* Entry: 1025de530; end: 1025de55f;  */

void FUN_1025de530(void)

{
  FUN_1025de6d4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025de560; end: 1025de5c7; -[_TtC23PlusMapCarsAndPetsScope23PlusMapCarsAndPetsScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025de58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025de590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de560(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eacb30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eacb38));
  return;
}



/* Entry: 1025de5c8; end: 1025de6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112eacb50;
  func_0x000107c61614(unaff_x20 + _DAT_112eacb50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eacb30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb48) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112eacb58) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eacb60) = param_7;
  FUN_1025de6d4();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 1025de6d4; end: 1025de6f3;  */

void FUN_1025de6d4(void)

{
  func_0x000107c61168(&PTR_PTR_112852c98);
  return;
}



/* Entry: 1025de6f4; end: 1025de717;  */

undefined8 FUN_1025de6f4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1025de718; end: 1025de71b;  */

void FUN_1025de718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac19f0;
  func_0x000107c61520(&UNK_10dac19f0,&UNK_1105275d0);
  puRam0000000112eacb68 = puVar1;
  return;
}



/* Entry: 1025de71c; end: 1025de75b;  */

void FUN_1025de71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac19f0;
  func_0x000107c61520(&UNK_10dac19f0,&UNK_1105275d0);
  puRam0000000112eacb68 = puVar1;
  return;
}



/* Entry: 1025de75c; end: 1025de76b;  */

undefined1  [16] FUN_1025de75c(void)

{
  return ZEXT816(0x1105275d0);
}



/* Entry: 1025de76c; end: 1025de7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025de76c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eacb98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eacba0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eacba8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eacbb0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025de7dc; end: 1025de7ef;  */

bool FUN_1025de7dc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1025de7f0; end: 1025de9eb;  */

void FUN_1025de7f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1025de9ec; end: 1025deab7;  */

void FUN_1025de9ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1025deab8; end: 1025deaf7;  */

void FUN_1025deab8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112eacbb8;
  func_0x0001000285a8(0x112eacbb8,&UNK_10dac1ac0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1025deaf8; end: 1025deb0b; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl skipIntermediateTrackEvents] */

void FUN_1025deaf8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_112eacb98;
  func_0x000107c61174();
  FUN_1025df4f0(&DAT_112eacb98,FUN_1025deb18);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1025deb0c; end: 1025deb17; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl setSkipIntermediateTrackEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025deb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eacb98);
  *(undefined8 *)(param_1 + _DAT_112eacb98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1025deb18; end: 1025dee2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025deb18(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long alStack_a0 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  alStack_a0[2] = *(long *)(lVar3 + -8);
  alStack_a0[3] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_a0[2] + 0x40));
  lVar14 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  *puVar13 = 0;
  puVar4 = puVar13;
  func_0x000107c6159c();
  func_0x0001042dd02c();
  FUN_1025dfdd4(puVar13);
  func_0x0001000d224c(&lStack_70);
  if (lStack_70 == 0) {
    puVar9 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(undefined8 **)(puVar9 + 0x20) = puVar4;
    *(long *)(puVar9 + 0x28) = lVar3;
  }
  else {
    uVar5 = 0xd000000000000035;
    func_0x000107c5fadc(0xd000000000000035,0x800000010f0b29b0);
    lVar10 = lVar3;
    func_0x000107c5fadc(puVar4);
    func_0x000107c6142c(lVar3);
    alStack_a0[0] = lStack_70;
    func_0x000107c5c1dc();
    lVar3 = lStack_70;
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    lVar6 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
    uStack_80 = 0x2c;
    uStack_78 = 0xe100000000000000;
    lStack_70 = lVar6;
    lStack_68 = lVar10;
    func_0x000100e8b654();
    puVar4 = &uStack_80;
    alStack_a0[1] = lVar3;
    func_0x000107c601dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar3,lVar3);
    func_0x000107c6142c(lVar10);
    uVar16 = puVar4[2];
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      uVar15 = 0;
      plVar12 = puVar4 + 5;
      do {
        if ((ulong)puVar4[2] <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1025dee2c);
          (*pcVar2)();
        }
        lStack_70 = plVar12[-1];
        lVar3 = *plVar12;
        lStack_68 = lVar3;
        func_0x000107c61434(lVar3);
        func_0x000107c5eb68(lVar14);
        lVar6 = lVar14;
        puVar11 = PTR___sSSN_11034da80;
        func_0x000107c601f0(lVar14,PTR___sSSN_11034da80,alStack_a0[1]);
        (**(code **)(alStack_a0[2] + 8))(lVar14,alStack_a0[3]);
        func_0x000107c6142c(lVar3);
        puVar7 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1025df984(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,
                        PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1025df984(puVar9,uVar1 + 1,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar15 = uVar15 + 1;
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar6;
        *(undefined **)(puVar9 + uVar1 * 0x10 + 0x28) = puVar11;
        plVar12 = plVar12 + 2;
      } while (uVar16 != uVar15);
    }
    func_0x000107c615e8(alStack_a0[0]);
    func_0x000107c6142c(puVar4);
  }
  return puVar9;
}



/* Entry: 1025dee2c; end: 1025def07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025dee2c(void)

{
  undefined8 uVar1;
  long lVar2;
  long alStack_48 [3];
  
  func_0x0001000d224c(alStack_48);
  if (alStack_48[0] != 0) {
    func_0x000107c61428(0x112eacbc0,alStack_48,0,0);
    if (cRam0000000112eacbc0 != '\0') {
      if (cRam0000000112eacbc0 == '\x01') {
        func_0x000107c615e8(alStack_48[0]);
        return 1;
      }
      uVar1 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0b2880);
      lVar2 = alStack_48[0];
      func_0x000107c3ebd4(alStack_48[0]);
      func_0x000107c615e8(alStack_48[0]);
      func_0x000107c61170(uVar1);
      return lVar2;
    }
    func_0x000107c615e8(alStack_48[0]);
  }
  return 0;
}



/* Entry: 1025def08; end: 1025def3b; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl isEnabled] */

uint FUN_1025def08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1025dee2c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1025def3c; end: 1025def77; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl reportingThrottleTime] */

undefined8 FUN_1025def3c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1025def78();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1025def78; end: 1025df057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1025def78(void)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  long alStack_58 [3];
  
  func_0x0001000d224c(alStack_58);
  if (alStack_58[0] == 0) {
    dVar3 = 0.0;
  }
  else {
    func_0x000107c61428(0x112eacc40,alStack_58,0,0);
    dVar3 = dRam0000000112eaccc0;
    if (cRam0000000112eacc40 == '\x01') {
      func_0x000107c615e8(alStack_58[0]);
    }
    else {
      uVar1 = 0xd00000000000002c;
      func_0x000107c5fadc(0xd00000000000002c,0x800000010f0b28b0);
      lVar2 = alStack_58[0];
      func_0x000107c4c0d0(alStack_58[0]);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(alStack_58[0]);
      dVar3 = (double)lVar2;
    }
  }
  return dVar3;
}



/* Entry: 1025df058; end: 1025df08b; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl reportingFlushLength] */

undefined8 FUN_1025df058(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1025df08c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1025df08c; end: 1025df163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025df08c(void)

{
  undefined8 uVar1;
  long lVar2;
  long alStack_48 [3];
  
  func_0x0001000d224c(alStack_48);
  if (alStack_48[0] == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61428(0x112eacc00,alStack_48,0,0);
    lVar2 = lRam0000000112eacd00;
    if (cRam0000000112eacc00 == '\x01') {
      func_0x000107c615e8(alStack_48[0]);
    }
    else {
      uVar1 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f0b28e0);
      lVar2 = alStack_48[0];
      func_0x000107c4980c(alStack_48[0]);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(alStack_48[0]);
      lVar2 = (long)(int)lVar2;
    }
  }
  return lVar2;
}



/* Entry: 1025df164; end: 1025df1ab; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl disableReportNoFills] */

bool FUN_1025df164(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eacc80,auStack_38,0,0);
  return cRam0000000112eacc80 == '\x01';
}



/* Entry: 1025df1ac; end: 1025df1bf; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl skipFinalTrackInvisibleReasons] */

void FUN_1025df1ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_112eacba0;
  func_0x000107c61174();
  FUN_1025df4f0(&DAT_112eacba0,FUN_1025df234);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1025df1c0; end: 1025df227;  */

void FUN_1025df1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_1025df4f0(param_3,param_4);
  func_0x000107c61170(param_1);
  uVar1 = param_3;
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1025df228; end: 1025df233; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl setSkipFinalTrackInvisibleReasons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025df228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eacba0);
  *(undefined8 *)(param_1 + _DAT_112eacba0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1025df234; end: 1025df4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025df234(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lStack_90 = *(long *)(lVar3 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar3 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_70);
  if (lStack_70 == 0) {
    puVar11 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
  }
  else {
    uVar4 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f0b2980);
    uVar5 = 0x7465736e75;
    uVar12 = 0xe500000000000000;
    func_0x000107c5fadc(0x7465736e75);
    lStack_a0 = lStack_70;
    func_0x000107c5c1dc();
    lVar6 = lStack_70;
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170();
    uStack_80 = 0x2c;
    uStack_78 = 0xe100000000000000;
    lStack_70 = lVar7;
    uStack_68 = uVar12;
    func_0x000100e8b654();
    puVar8 = &uStack_80;
    lStack_98 = lVar6;
    func_0x000107c601dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar6,lVar6);
    func_0x000107c6142c(uVar12);
    uVar16 = puVar8[2];
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      uVar15 = 0;
      puVar14 = puVar8 + 5;
      do {
        if ((ulong)puVar8[2] <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1025df4dc);
          (*pcVar2)();
        }
        lStack_70 = puVar14[-1];
        uVar4 = *puVar14;
        uStack_68 = uVar4;
        func_0x000107c61434(uVar4);
        func_0x000107c5eb68(lVar3);
        lVar6 = lVar3;
        puVar13 = PTR___sSSN_11034da80;
        func_0x000107c601f0(lVar3,PTR___sSSN_11034da80,lStack_98);
        (**(code **)(lStack_90 + 8))(lVar3,lStack_88);
        func_0x000107c6142c(uVar4);
        puVar9 = puVar11;
        func_0x000107c61558();
        puVar10 = puVar11;
        if (((ulong)puVar9 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_1025df984(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11,
                        PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        puVar11 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_1025df984(puVar11,uVar1 + 1,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar15 = uVar15 + 1;
        *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
        *(long *)(puVar11 + uVar1 * 0x10 + 0x20) = lVar6;
        *(undefined **)(puVar11 + uVar1 * 0x10 + 0x28) = puVar13;
        puVar14 = puVar14 + 2;
      } while (uVar16 != uVar15);
    }
    func_0x000107c615e8(lStack_a0);
    func_0x000107c6142c(puVar8);
  }
  return puVar11;
}



/* Entry: 1025df4dc; end: 1025df4ef; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl finalTrackEvents] */

void FUN_1025df4dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_112eacba8;
  func_0x000107c61174();
  FUN_1025df4f0(&DAT_112eacba8,FUN_1025df59c);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1025df4f0; end: 1025df54f;  */

long FUN_1025df4f0(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 1025df550; end: 1025df55b; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl setFinalTrackEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025df550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eacba8);
  *(undefined8 *)(param_1 + _DAT_112eacba8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1025df55c; end: 1025df59b;  */

void FUN_1025df55c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1025df59c; end: 1025df8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025df59c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  func_0x000107c5eb9c();
  lStack_90 = *(long *)(lVar5 + -8);
  lStack_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar5 = (long)&ppuStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_70);
  puVar18 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar6 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0b2950);
  uVar7 = 0;
  puVar11 = (undefined *)0xe000000000000000;
  func_0x000107c5fadc(0);
  func_0x000107c5c1dc();
  puVar8 = puStack_70;
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  puVar16 = puVar8;
  func_0x000107c5faec();
  func_0x000107c61170(puVar8);
  puStack_80 = (undefined *)0x2c;
  uStack_78 = 0xe100000000000000;
  puStack_70 = puVar16;
  puStack_68 = puVar11;
  func_0x000100e8b654();
  ppuVar9 = &puStack_80;
  func_0x000107c601dc(ppuVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar8,puVar8);
  func_0x000107c6142c(puVar11);
  puVar16 = ppuVar9[2];
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c6142c(ppuVar9);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_98 = puVar18;
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,puVar16,0);
    ppuVar17 = ppuVar9 + 5;
    ppuStack_a0 = ppuVar9;
    do {
      puVar11 = puStack_80;
      puStack_70 = ppuVar17[-1];
      puVar18 = *ppuVar17;
      puStack_68 = puVar18;
      func_0x000107c61434(puVar18);
      func_0x000107c5eb68(lVar5);
      lVar10 = lVar5;
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar5,PTR___sSSN_11034da80,puVar8);
      (**(code **)(lStack_90 + 8))(lVar5,lStack_88);
      func_0x000107c6142c(puVar18);
      uVar14 = *(ulong *)(puVar11 + 0x10);
      puStack_80 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar11 + 0x18),uVar14 + 1,1);
      }
      puVar11 = puStack_80;
      ppuVar17 = ppuVar17 + 2;
      *(ulong *)(puStack_80 + 0x10) = uVar14 + 1;
      *(long *)(puStack_80 + uVar14 * 0x10 + 0x20) = lVar10;
      *(undefined **)(puStack_80 + uVar14 * 0x10 + 0x28) = puVar12;
      puVar16 = puVar16 + -1;
    } while (puVar16 != (undefined *)0x0);
    func_0x000107c6142c(ppuStack_a0);
    puVar18 = puStack_98;
  }
  uVar14 = 0;
  uVar15 = *(ulong *)(puVar11 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar13 = (ulong *)(puVar11 + uVar14 * 0x10 + 0x28);
    do {
      if (uVar15 == uVar14) {
        func_0x000107c615e8(puVar18);
        func_0x000107c6142c(puVar11);
        return puVar16;
      }
      if (*(ulong *)(puVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1025df8cc);
        (*pcVar4)();
      }
      uVar1 = puVar13[-1];
      uVar3 = *puVar13;
      puVar13 = puVar13 + 2;
      uVar14 = uVar14 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar3);
    puVar8 = puVar16;
    func_0x000107c61558();
    puStack_70 = puVar16;
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar16 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_70 + 0x10);
    if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar16 = puStack_70;
  } while( true );
}



/* Entry: 1025df8cc; end: 1025df92b; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl init] */

void FUN_1025df8cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsStudyConfigurationImpl.MapAdsStudyConfigurationImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025df8f8);
  (*pcVar1)();
}



/* Entry: 1025df92c; end: 1025df983; -[_TtC28MapAdsStudyConfigurationImpl28MapAdsStudyConfigurationImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025df958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025df95c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025df92c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eacbb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eacb98));
  return;
}



/* Entry: 1025df984; end: 1025dfa97;  */

undefined *
FUN_1025df984(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025dfa98);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1025dfa98; end: 1025dfafb;  */

ulong FUN_1025dfa98(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1025dfafc; end: 1025dfaff;  */

void FUN_1025dfafc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac1ad0;
  func_0x000107c61520(&UNK_10dac1ad0,&UNK_110527780);
  puRam0000000112eacd40 = puVar1;
  return;
}



/* Entry: 1025dfb00; end: 1025dfb3f;  */

void FUN_1025dfb00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac1ad0;
  func_0x000107c61520(&UNK_10dac1ad0,&UNK_110527780);
  puRam0000000112eacd40 = puVar1;
  return;
}



/* Entry: 1025dfb40; end: 1025dfb6b;  */

void FUN_1025dfb40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1025dfb6c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001025dfbac();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1025dfb6c; end: 1025dfbeb;  */

void FUN_1025dfb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eacd48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac1b98;
  func_0x000107c61520(&UNK_10dac1b98,&UNK_110527780);
  puRam0000000112eacd48 = puVar1;
  return;
}



/* Entry: 1025dfbec; end: 1025dfbef;  */

void FUN_1025dfbec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eacd58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eacd60;
  func_0x00010002969c(0x112eacd60,&UNK_10dac1b90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eacd58 = puVar2;
  return;
}



/* Entry: 1025dfbf0; end: 1025dfc5f;  */

void FUN_1025dfbf0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eacd58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eacd60;
  func_0x00010002969c(0x112eacd60,&UNK_10dac1b90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eacd58 = puVar2;
  return;
}



/* Entry: 1025dfc60; end: 1025dfdd3;  */

undefined1  [16] FUN_1025dfc60(void)

{
  return ZEXT816(0x1105276f0);
}



/* Entry: 1025dfdd4; end: 1025dfe6b;  */

undefined8 FUN_1025dfdd4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001042dddf8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1025dfe6c; end: 1025e0023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1025dfe6c(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  puVar1 = &UNK_110527820;
  func_0x000107c613fc(&UNK_110527820,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112dcef88,&UNK_10d997110);
  func_0x000107c613fc();
  pcVar2 = FUN_1025e0024;
  func_0x0001000bdd8c(FUN_1025e0024,puVar1);
  lVar3 = 0;
  func_0x0001025dfc40();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112eacb98) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eacba0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eacba8) = 0;
  *(code **)(lVar4 + _DAT_112eacbb0) = pcVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61154(&lStack_40,puVar1);
  FUN_1025f5678(0);
  func_0x000107c610f8();
  func_0x000107c61174(plVar5);
  puVar6 = (undefined1 *)plVar5;
  func_0x0001025f55bc();
  func_0x000107c61170(plVar5);
  func_0x000107c61574(pcVar2);
  return puVar6;
}



/* Entry: 1025e0024; end: 1025e0033;  */

void FUN_1025e0024(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar3 = uVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1025e0034; end: 1025e00d3;  */

void FUN_1025e0034(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e00d4; end: 1025e00f7;  */

void FUN_1025e00d4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1025dfe6c();
  *param_1 = param_2;
  return;
}



/* Entry: 1025e00f8; end: 1025e15cf;  */

/* WARNING: Removing unreachable block (ram,0x0001025e01f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025e00f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long alStack_2b0 [17];
  undefined1 auStack_228 [8];
  long alStack_220 [6];
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  code *pcStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lVar11 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar12 = (long)&uStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_00;
  func_0x000107c610f8(PTR_PTR_1126b8de8);
  func_0x00010006c00c(param_1,param_2);
  lVar11 = param_1;
  FUN_1025e2378(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  if (lVar11 == 0) {
    func_0x0001000d224c(&lStack_c0);
    lVar11 = lStack_c0;
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4b9dc(lVar11);
    func_0x000107c615e8(lVar11);
    lVar11 = param_3;
    goto LAB_1025e03d0;
  }
  lStack_f0 = lVar11;
  func_0x000107c49924();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e10f8);
    (*pcVar7)();
  }
  lVar15 = lVar11;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar15 == 0) {
    uStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_e0,lVar15);
    func_0x000107c615e8(lVar15);
  }
  uStack_b8 = uStack_d8;
  lStack_c0 = lStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x0001025e24a8(&lStack_c0,0x112d387f8,&UNK_10d902650);
LAB_1025e0350:
    uStack_b8 = 0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
    lVar11 = 0;
LAB_1025e035c:
    func_0x0001025e24a8(&lStack_c0,0x112d387f8,&UNK_10d902650);
LAB_1025e0374:
    lVar15 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001025e24e8(0,0x112dcf1c0,&PTR_PTR_1126a7d20);
    puVar4 = PTR___sypN_11034f1a8;
    plVar3 = &lStack_e8;
    func_0x000107c6147c(plVar3,&lStack_c0,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if ((((ulong)plVar3 & 1) == 0) || (lStack_e8 == 0)) goto LAB_1025e0350;
    lStack_f8 = lStack_e8;
    func_0x000107c4a7d8();
    lVar11 = lStack_e8;
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e10fc);
      (*pcVar7)();
    }
    lVar15 = lVar11;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar15 == 0) {
      uStack_d8 = 0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x000107c60234(&lStack_e0,lVar15);
      func_0x000107c615e8(lVar15);
    }
    uStack_b8 = uStack_d8;
    lStack_c0 = lStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    lVar11 = lStack_f8;
    if (lStack_c8 == 0) goto LAB_1025e035c;
    uVar2 = 0;
    func_0x0001025e24e8(0,0x112dcf1b8,&PTR_PTR_1126e05f0);
    plVar3 = &lStack_e0;
    plVar6 = &lStack_c0;
    func_0x000107c6147c(plVar3,plVar6,puVar4 + 8,uVar2,6);
    lVar11 = lStack_f8;
    if (((ulong)plVar3 & 1) == 0) goto LAB_1025e0374;
    lVar15 = lStack_e0;
    func_0x000107c61174();
    lVar10 = lVar15;
    func_0x000107c3d3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    lVar11 = lStack_f8;
    if (lVar10 != 0) {
      lVar11 = lVar10;
      func_0x000107c5ee30();
      lStack_110 = lVar11;
      plStack_108 = plVar6;
      func_0x000107c61170(lVar10);
      lVar11 = lVar15;
      func_0x000107c3d358();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e1100);
        (*pcVar7)();
      }
      puVar4 = PTR_PTR_1126afec0;
      func_0x000107c61168();
      lVar10 = lVar11;
      func_0x000107c3d360(lVar11);
      func_0x000107c61170(lVar11);
      dVar16 = (double)lVar10;
      func_0x000107c51b38(dVar16,puVar4);
      lVar11 = lVar15;
      func_0x000107c3d358();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e1104);
        (*pcVar7)();
      }
      lVar10 = lVar11;
      func_0x000107c3d354();
      func_0x000107c61170(lVar11);
      dVar17 = (double)lVar10;
      func_0x000107c51b38(dVar17,puVar4);
      lVar11 = lStack_f0;
      dVar18 = dVar17;
      func_0x000107c427b0();
      func_0x000107c61180();
      if (lVar11 == 0) {
LAB_1025e0578:
        lStack_158 = 0;
        plStack_128 = (long *)0x0;
      }
      else {
        lVar10 = lVar11;
        func_0x000107c3e688();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        if (lVar10 == 0) goto LAB_1025e0578;
        lVar11 = lVar10;
        func_0x000107c5faec();
        lStack_158 = lVar11;
        plStack_128 = plVar6;
        func_0x000107c61170(lVar10);
      }
      lVar11 = lVar15;
      func_0x000107c4278c();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e1108);
        (*pcVar7)();
      }
      lVar10 = lVar11;
      func_0x000107c3e688();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      if (lVar10 == 0) {
        lStack_168 = 0;
        plStack_130 = (long *)0x0;
      }
      else {
        lVar11 = lVar10;
        func_0x000107c5faec();
        lStack_168 = lVar11;
        plStack_130 = plVar6;
        func_0x000107c61170(lVar10);
      }
      lVar11 = lVar15;
      puStack_160 = puVar4;
      func_0x000107c51f70();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar10 = lVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar11);
        lVar11 = lVar10;
        func_0x000107c5ee20(lVar10,plVar6);
        func_0x00010006c090(lVar10);
      }
      lVar10 = lVar11;
      func_0x000107c30944();
      func_0x000107c61180();
      lStack_118 = lVar10;
      func_0x000107c61170(lVar11);
      lVar11 = lStack_f8;
      func_0x000107c50374();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar10 = lVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar11);
        lVar11 = lVar10;
        func_0x000107c5ee20(lVar10,plVar6);
        func_0x00010006c090(lVar10);
      }
      lVar10 = lVar11;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      lVar11 = lVar15;
      func_0x000107c4e79c();
      func_0x000107c61180();
      lStack_100 = lVar10;
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar10 = lVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar11);
        lVar11 = lVar10;
        func_0x000107c5ee20(lVar10,plVar6);
        func_0x00010006c090(lVar10);
      }
      lVar10 = lVar11;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      if (lStack_118 == 0) {
        func_0x000107c6142c(plStack_130);
        func_0x000107c6142c(plStack_128);
        func_0x0001000d224c(&lStack_c0);
        lVar11 = lStack_c0;
        func_0x000107c5fadc(param_3,param_4);
        func_0x000107c4b9dc(lVar11);
        func_0x000107c61170(lVar15);
        func_0x000107c61170(lStack_f8);
        func_0x00010006c090(lStack_110,plStack_108);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lStack_f0);
      }
      else {
        lVar11 = lStack_118;
        lStack_138 = lVar10;
        func_0x000107c3ac54();
        func_0x000107c61180();
        lVar10 = lVar11;
        func_0x000107c5faec();
        plStack_178 = plVar6;
        lStack_170 = lVar10;
        func_0x000107c61170(lVar11);
        lVar11 = lVar15;
        func_0x0001025e1108();
        lStack_140 = lVar11;
        func_0x00010481c348(0);
        puVar4 = (undefined *)0x0;
        func_0x000104759828(0,0,0x22,0,0);
        puStack_180 = puVar4;
        func_0x0001000d224c(&lStack_c0);
        lVar11 = lStack_c0;
        pcVar7 = *(code **)(unaff_x20 + 0x20);
        lVar10 = lStack_c0;
        func_0x0001063fa808();
        func_0x000107c61180();
        func_0x000107c615e8(lVar11);
        lVar11 = lVar15;
        func_0x000107c44afc();
        lStack_120 = 0;
        lStack_188 = lVar10;
        if ((int)lVar11 != 0) {
          lVar11 = lVar15;
          func_0x000107c5b0ac();
          func_0x000107c61180();
          lVar9 = ((long *)(lVar10 + _DAT_113090f28))[1];
          lStack_148 = lVar11;
          if (lVar9 == 0) {
            pcStack_150 = (code *)0x0;
          }
          else {
            lVar11 = *(long *)(lVar10 + _DAT_113090f28);
            func_0x000107c61434(lVar9);
            func_0x000107c5fadc(lVar11,lVar9);
            pcStack_150 = (code *)lVar11;
            func_0x000107c6142c(lVar9);
          }
          lVar11 = ((long *)(lVar10 + _DAT_113090f30))[1];
          if (lVar11 == 0) {
            lStack_190 = 0;
          }
          else {
            lVar10 = *(long *)(lVar10 + _DAT_113090f30);
            func_0x000107c61434(lVar11);
            func_0x000107c5fadc(lVar10,lVar11);
            lStack_190 = lVar10;
            func_0x000107c6142c(lVar11);
          }
          lVar10 = lStack_148;
          pcVar1 = pcStack_150;
          lVar11 = lStack_190;
          lVar9 = lStack_148;
          pcVar7 = pcStack_150;
          func_0x0001084c1360(lStack_148,pcStack_150,lStack_190);
          func_0x000107c61180();
          lStack_120 = lVar9;
          func_0x000107c61170(lVar10);
          func_0x000107c61170(pcVar1);
          func_0x000107c61170(lVar11);
        }
        if (lStack_100 == 0) {
          lStack_1b8 = 0;
          lStack_1c0 = 0;
        }
        else {
          lVar11 = lStack_100;
          func_0x000107c3ac54();
          func_0x000107c61180();
          lVar10 = lVar11;
          func_0x000107c5faec();
          lStack_1c0 = (long)pcVar7;
          lStack_1b8 = lVar10;
          func_0x000107c61170(lVar11);
        }
        if (lStack_138 == 0) {
          lStack_1c8 = 0;
          lStack_1d0 = 0;
        }
        else {
          lVar11 = lStack_138;
          func_0x000107c3ac54();
          func_0x000107c61180();
          lVar10 = lVar11;
          func_0x000107c5faec();
          lStack_1d0 = (long)pcVar7;
          lStack_1c8 = lVar10;
          func_0x000107c61170(lVar11);
        }
        lVar11 = lVar15;
        func_0x000107c3d4d0();
        func_0x000107c61180();
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar10 = lVar11;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar11);
          lVar11 = lVar10;
          func_0x000107c5ee20(lVar10,pcVar7);
          func_0x00010006c090(lVar10,pcVar7);
        }
        lVar10 = lVar11;
        func_0x000107c30944();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        if (lVar10 != 0) {
          func_0x000107c5eeb8(lVar14,lVar10);
          func_0x000107c61170(lVar10);
        }
        uVar8 = (ulong)(lVar10 == 0);
        lVar11 = 0;
        func_0x000107c5eec8();
        pcStack_150 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
        lStack_148 = lVar11;
        (*pcStack_150)(lVar14,uVar8,1);
        lVar11 = lVar15;
        func_0x000107c3f33c();
        func_0x000107c61180();
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar10 = lVar11;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar11);
          lVar11 = lVar10;
          func_0x000107c5ee20(lVar10,uVar8);
          func_0x00010006c090(lVar10,uVar8);
        }
        lVar10 = lVar11;
        func_0x000107c30944();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        if (lVar10 != 0) {
          func_0x000107c5eeb8(lVar13,lVar10);
          func_0x000107c61170(lVar10);
        }
        uVar8 = (ulong)(lVar10 == 0);
        (*pcStack_150)(lVar13,uVar8,1,lStack_148);
        lVar11 = lVar15;
        func_0x000107c3d1f4();
        func_0x000107c61180();
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar10 = lVar11;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar11);
          lVar11 = lVar10;
          func_0x000107c5ee20(lVar10,uVar8);
          func_0x00010006c090(lVar10,uVar8);
        }
        lVar10 = lVar11;
        func_0x000107c30944();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        if (lVar10 != 0) {
          func_0x000107c5eeb8(lVar12,lVar10);
          func_0x000107c61170(lVar10);
        }
        uVar8 = (ulong)(lVar10 == 0);
        (*pcStack_150)(lVar12,uVar8,1,lStack_148);
        lVar11 = lStack_f8;
        func_0x000107c4f54c();
        func_0x000107c61180();
        if (lVar11 == 0) {
          lStack_1d8 = 0;
          uStack_1e0 = 0;
        }
        else {
          lVar10 = lVar11;
          func_0x000107c5faec();
          uStack_1e0 = uVar8;
          lStack_1d8 = lVar10;
          func_0x000107c61170(lVar11);
        }
        lVar11 = lVar15;
        func_0x000107c5df10();
        func_0x000107c61180();
        if (lVar11 == 0) {
          lStack_1e8 = 0;
          uStack_1f0 = 0xf000000000000000;
        }
        else {
          lVar10 = lVar11;
          func_0x000107c5ee30();
          uStack_1f0 = uVar8;
          lStack_1e8 = lVar10;
          func_0x000107c61170(lVar11);
        }
        lVar9 = lVar15;
        func_0x000107c51f78(lVar15);
        lVar11 = lVar15;
        func_0x000107c3d4e0();
        uStack_194 = (undefined4)lVar11;
        lVar11 = lStack_120;
        func_0x000107c61174();
        lStack_148 = lVar11;
        func_0x000107c4e078(lVar15);
        lVar11 = lStack_140;
        dVar19 = dVar18;
        func_0x000107c61174();
        lVar10 = lVar15;
        pcStack_150 = (code *)lVar11;
        func_0x000107c4dfc4();
        func_0x0001084c72b4();
        lVar11 = lVar15;
        lStack_1a8 = lVar10;
        func_0x000107c3ec7c();
        func_0x0001084c72c4();
        lStack_1b0 = lVar11;
        func_0x000107c41018(puStack_160);
        uVar2 = 0;
        func_0x000103de92d8();
        func_0x000107c610f8();
        uStack_1a0 = uVar2;
        func_0x00010006c00c(lStack_110,plStack_108);
        plVar3 = plStack_178;
        func_0x000107c61434(plStack_178);
        puVar4 = puStack_180;
        puVar5 = puStack_180;
        func_0x000107c61174();
        lVar11 = lStack_188;
        lVar10 = lStack_188;
        puStack_160 = puVar5;
        func_0x000107c61174();
        lStack_190 = lVar10;
        *(undefined8 *)(lVar14 + -0x20) = 0;
        *(undefined8 *)(lVar14 + -0x18) = 0;
        *(long *)(lVar14 + -8) = lStack_1b0;
        *(long *)(lVar14 + -0x10) = lStack_1a8;
        *(long *)(lVar14 + -0x28) = lStack_140;
        *(long *)(lVar14 + -0x30) = lStack_120;
        *(char *)(lVar14 + -0x38) = (char)uStack_194;
        *(undefined8 *)(lVar14 + -0x40) = 0;
        *(ulong *)(lVar14 + -0x48) = uStack_1f0;
        *(long *)(lVar14 + -0x50) = lStack_1e8;
        *(ulong *)(lVar14 + -0x58) = uStack_1e0;
        *(long *)(lVar14 + -0x60) = lStack_1d8;
        *(long **)(lVar14 + -0x68) = plStack_130;
        *(long *)(lVar14 + -0x70) = lStack_168;
        *(long **)(lVar14 + -0x78) = plStack_128;
        lVar10 = lStack_158;
        *(long *)(lVar14 + -0x88) = lVar11;
        *(long *)(lVar14 + -0x80) = lVar10;
        *(undefined8 *)(lVar14 + -0x98) = 0x17;
        *(undefined **)(lVar14 + -0x90) = puVar4;
        *(long *)(lVar14 + -0xa8) = lVar13;
        *(long *)(lVar14 + -0xa0) = lVar12;
        plVar6 = plStack_108;
        *(long *)(lVar14 + -0xb0) = lVar14;
        lVar11 = lStack_110;
        *(long *)(lVar14 + -0xb8) = lStack_1d0;
        *(long *)(lVar14 + -0xc0) = lStack_1c8;
        lVar13 = lVar11;
        func_0x000103de600c(dVar16,dVar16,dVar17,(double)lVar9,dVar18,dVar19,lVar11,plVar6,
                            lStack_170,plVar3,lStack_170,plVar3,lStack_1b8,lStack_1c0);
        func_0x000107c3d2c0();
        func_0x0001000d224c(&lStack_c0);
        lVar12 = lStack_c0;
        lVar14 = lStack_c0;
        func_0x000107c4e368();
        func_0x000107c61180();
        func_0x000107c615e8(lVar12);
        if (lVar14 != 0) {
          lVar10 = lVar14;
          func_0x000107c5e41c();
          func_0x000107c61180();
          func_0x000107c61170(lVar14);
          lVar14 = lVar10;
          func_0x000107c61174();
          func_0x0001000d224c(&lStack_c0);
          lVar12 = lStack_c0;
          func_0x000107c4b9e0(lStack_c0);
          func_0x000107c61170(lStack_118);
          func_0x000107c61170(lVar15);
          func_0x000107c61170(lStack_f8);
          func_0x00010006c090(lVar11,plVar6);
          func_0x000107c615e8(lVar12);
          func_0x000107c61170(lStack_190);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lStack_f0);
          func_0x000107c61170(lVar13);
          func_0x000107c61170(pcStack_150);
          func_0x000107c61170(lStack_148);
          func_0x000107c61170(puStack_160);
          func_0x000107c61170(lStack_138);
          func_0x000107c61170(lStack_100);
          return lVar10;
        }
        func_0x0001000d224c(&lStack_c0);
        lVar12 = lStack_c0;
        func_0x000107c5fadc(param_3,param_4);
        func_0x000107c4b9dc(lVar12);
        func_0x000107c61170(lStack_118);
        func_0x000107c61170(lVar15);
        func_0x000107c61170(lStack_f8);
        func_0x00010006c090(lVar11,plVar6);
        func_0x000107c615e8(lVar12);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lStack_190);
        func_0x000107c61170(lStack_f0);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(pcStack_150);
        func_0x000107c61170(lStack_148);
        func_0x000107c61170(puStack_160);
        lVar10 = lStack_138;
      }
      func_0x000107c61170(lVar10);
      lVar11 = lStack_100;
      goto LAB_1025e03d0;
    }
  }
  func_0x0001000d224c(&lStack_c0);
  lVar12 = lStack_c0;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4b9dc(lVar12);
  func_0x000107c615e8(lVar12);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lStack_f0);
  func_0x000107c61170(lVar15);
LAB_1025e03d0:
  func_0x000107c61170(lVar11);
  return 0;
}



/* Entry: 1025e15d0; end: 1025e1d5f;  */

/* WARNING: Removing unreachable block (ram,0x0001025e1688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1025e15d0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long alStack_190 [6];
  undefined1 auStack_160 [8];
  long lStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long alStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  
  lVar4 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = ((long *)(param_3 + _DAT_113815248))[1];
  if (0xe < uVar13 >> 0x3c) {
LAB_1025e169c:
    if (*(int *)(param_3 + _DAT_113815200) != 7) {
      func_0x0001000d224c(&uStack_a0);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4bd08(uStack_a0);
      func_0x000107c615e8(uStack_a0);
      func_0x000107c61170(param_1);
    }
    return 0;
  }
  lVar14 = *(long *)(param_3 + _DAT_113815248);
  func_0x000107c610f8(PTR_PTR_1126bd4d8);
  func_0x000100de78a0(lVar14,uVar13);
  lVar5 = lVar14;
  FUN_1025e2378(lVar14,uVar13);
  if (lVar5 == 0) {
    func_0x0001000b44c0(lVar14,uVar13);
    goto LAB_1025e169c;
  }
  lVar16 = lVar5;
  func_0x000107c3d4c0();
  if (lVar16 != 0) {
    lVar16 = lVar5;
    func_0x000107c3d4bc();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1025e1d58);
      (*pcVar3)();
    }
    lVar8 = lVar16;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    if (lVar8 == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x000107c60234(&uStack_f0,lVar8);
      func_0x000107c615e8(lVar8);
    }
    puStack_98 = (undefined8 *)uStack_e8;
    uStack_a0 = uStack_f0;
    lStack_88 = lStack_d8;
    lStack_90 = uStack_e0;
    if (lStack_d8 == 0) {
      func_0x0001025e24a8(&uStack_a0,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar6 = 0;
      func_0x0001025e24e8(0,0x112eacff8,&PTR_PTR_1126d9df0);
      puVar1 = PTR___sypN_11034f1a8;
      plVar7 = alStack_b0;
      puVar15 = &uStack_a0;
      func_0x000107c6147c(plVar7,puVar15,PTR___sypN_11034f1a8 + 8,uVar6,6);
      lVar16 = alStack_b0[0];
      if (((ulong)plVar7 & 1) != 0) {
        lVar8 = lVar5;
        func_0x000107c44970();
        if ((int)lVar8 == 0) {
          FUN_1025e1d60(param_1,param_2,param_3,5);
          func_0x000107c61170(lVar5);
          lVar5 = lVar16;
          goto LAB_1025e18b8;
        }
        lVar8 = lVar5;
        func_0x000107c44a54();
        lStack_f8 = lVar16;
        if ((int)lVar8 == 0) {
LAB_1025e1800:
          puVar15 = param_2;
          FUN_1025e1d60(param_1,param_2,param_3,6);
          lVar8 = 0;
          lVar16 = lStack_f8;
        }
        else {
          lVar8 = lVar5;
          func_0x000107c4f3b0();
          func_0x000107c61180();
          if (lVar8 == 0) goto LAB_1025e1800;
        }
        lStack_128 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
        lStack_100 = lVar8;
        if (lStack_128 == 0) {
          FUN_1025e1d60(param_1,param_2,param_3,7);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar16);
          lVar5 = lStack_100;
          goto LAB_1025e18b8;
        }
        uStack_130 = *(undefined8 *)(param_3 + _DAT_11308f138);
        func_0x000107c61434();
        lVar8 = lVar16;
        func_0x000107c3ec78();
        func_0x000107c61180();
        if (lVar8 == 0) {
          puStack_110 = (undefined8 *)0x0;
          puStack_108 = (undefined8 *)0x0;
        }
        else {
          lVar9 = lVar8;
          func_0x000107c5faec();
          lVar16 = lStack_f8;
          puStack_110 = puVar15;
          puStack_108 = (undefined8 *)lVar9;
          func_0x000107c61170(lVar8);
        }
        func_0x000107c3ec74();
        func_0x000107c61180();
        if (lVar16 == 0) {
          puStack_118 = (undefined8 *)0x0;
          puStack_120 = (undefined8 *)0x0;
        }
        else {
          lVar8 = lVar16;
          func_0x000107c5faec();
          puStack_120 = puVar15;
          puStack_118 = (undefined8 *)lVar8;
          func_0x000107c61170(lVar16);
        }
        if (lStack_100 == 0) {
          func_0x000107c61174(param_3);
          lStack_140 = 0;
          lStack_100 = 0;
          puStack_138 = (undefined8 *)0x0;
          uStack_148 = uStack_148 & 0xffffffff00000000;
          lVar16 = 0;
          puVar15 = (undefined8 *)0x0;
          goto LAB_1025e1ba4;
        }
        puVar15 = (undefined8 *)lStack_100;
        func_0x000107c4f388();
        func_0x000107c61180();
        if (puVar15 == (undefined8 *)0x0) {
LAB_1025e1b34:
          lStack_158 = 0;
          puStack_150 = (undefined8 *)0x0;
        }
        else {
          lVar16 = (long)puVar15;
          func_0x000107c4c9cc();
          if (lVar16 == 0) {
LAB_1025e1b08:
            func_0x000107c61170(puVar15);
            goto LAB_1025e1b34;
          }
          puStack_138 = puVar15;
          func_0x000107c4c9c8();
          func_0x000107c61180();
          if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1025e1d5c);
            (*pcVar3)();
          }
          lVar16 = (long)puVar15;
          func_0x000107c43638();
          func_0x000107c61180();
          func_0x000107c61170(puVar15);
          if (lVar16 == 0) {
            uStack_e8 = 0;
            uStack_f0 = 0;
            lStack_d8 = 0;
            uStack_e0 = 0;
          }
          else {
            func_0x000107c60234(&uStack_f0,lVar16);
            func_0x000107c615e8(lVar16);
          }
          puVar15 = puStack_138;
          puStack_98 = (undefined8 *)uStack_e8;
          uStack_a0 = uStack_f0;
          lStack_88 = lStack_d8;
          lStack_90 = uStack_e0;
          if (lStack_d8 == 0) {
            func_0x000107c61170(puStack_138);
            func_0x0001025e24a8(&uStack_a0,0x112d387f8,&UNK_10d902650);
            goto LAB_1025e1b34;
          }
          uVar6 = 0;
          func_0x0001025e24e8(0,0x112dd42b8,&PTR_PTR_1126e1528);
          plVar7 = alStack_b0;
          puVar12 = &uStack_a0;
          func_0x000107c6147c(plVar7,puVar12,puVar1 + 8,uVar6,6);
          if (((ulong)plVar7 & 1) == 0) goto LAB_1025e1b08;
          lStack_140 = alStack_b0[0];
          func_0x000107c4c9a4();
          lVar16 = alStack_b0[0];
          func_0x000107c61180();
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1025e1d60);
            (*pcVar3)();
          }
          lVar8 = lVar16;
          func_0x000107c5ee30();
          uStack_148 = lVar8;
          func_0x000107c61170(lVar16);
          func_0x000107c5fb04(auStack_160 + lVar4);
          uVar2 = uStack_148;
          uVar10 = uStack_148;
          puVar15 = puVar12;
          func_0x000107c5faf0(uStack_148,puVar12,auStack_160 + lVar4);
          lStack_158 = uVar10;
          puStack_150 = puVar15;
          func_0x000107c61170(lStack_140);
          func_0x000107c61170(puStack_138);
          func_0x00010006c090(uVar2,puVar12);
        }
        func_0x000107c61174(param_3);
        lVar16 = lStack_100;
        func_0x000107c61174();
        lVar8 = lVar16;
        uVar6 = param_1;
        puVar15 = param_2;
        FUN_1025e1dfc();
        uStack_148 = CONCAT44(uStack_148._4_4_,(int)puVar15);
        lStack_140 = lVar16;
        puStack_138 = (undefined8 *)uVar6;
        lStack_100 = lVar8;
        func_0x000107c61170(lVar16);
        puVar15 = puStack_150;
        lVar16 = lStack_158;
LAB_1025e1ba4:
        lVar8 = param_3;
        FUN_1025e2088(param_3,param_1,param_2);
        lStack_88 = lStack_100;
        uStack_80 = puStack_138;
        uStack_78 = (undefined1)uStack_148;
        lStack_100 = 0;
        if (puStack_110 != (undefined8 *)0x0) {
          lStack_100 = (long)puStack_108;
        }
        puStack_108 = (undefined8 *)0xe000000000000000;
        if (puStack_110 != (undefined8 *)0x0) {
          puStack_108 = puStack_110;
        }
        puStack_110 = (undefined8 *)0;
        if (puVar15 != (undefined8 *)0x0) {
          puStack_110 = (undefined8 *)lVar16;
        }
        puStack_138 = (undefined8 *)0xe000000000000000;
        if (puVar15 != (undefined8 *)0x0) {
          puStack_138 = puVar15;
        }
        puVar12 = (undefined8 *)0;
        if (puStack_120 != (undefined8 *)0x0) {
          puVar12 = puStack_118;
        }
        puStack_118 = (undefined8 *)0xe000000000000000;
        if (puStack_120 != (undefined8 *)0x0) {
          puStack_118 = puStack_120;
        }
        uStack_a0 = param_1;
        puStack_98 = param_2;
        lStack_90 = param_3;
        lStack_70 = lVar8;
        FUN_10268ba98(0);
        func_0x000107c610f8();
        func_0x000107c61174();
        puStack_120 = (undefined8 *)lVar8;
        func_0x000107c61434(puVar15);
        func_0x000107c61438(param_2,2);
        func_0x000107c61174(param_3);
        func_0x0001025e2438(&uStack_a0,&uStack_f0);
        puVar11 = &uStack_a0;
        func_0x00010268a528();
        FUN_10268d1e4(0);
        func_0x000107c610f8();
        func_0x000107c61434(param_2);
        *(long *)((long)alStack_190 + lVar4 + 0x20) = lStack_128;
        uVar6 = uStack_130;
        *(undefined8 **)((long)alStack_190 + lVar4 + 0x10) = puVar11;
        *(undefined8 *)((long)alStack_190 + lVar4 + 0x18) = uVar6;
        *(undefined8 *)((long)alStack_190 + lVar4) = param_1;
        *(undefined8 **)((long)alStack_190 + lVar4 + 8) = param_2;
        func_0x00010268bc98(param_1,param_2,lStack_100,puStack_108,puStack_110,puStack_138,puVar12,
                            puStack_118);
        func_0x000107c6142c(puVar15);
        func_0x0001000b44c0(lVar14,uVar13);
        func_0x000107c61170(puStack_120);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lStack_140);
        func_0x0001025e2474(&uStack_a0);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lStack_f8);
        return param_1;
      }
    }
  }
  FUN_1025e1d60(param_1,param_2,param_3,4);
LAB_1025e18b8:
  func_0x000107c61170(lVar5);
  func_0x0001000b44c0(lVar14,uVar13);
  return 0;
}



/* Entry: 1025e1d60; end: 1025e1dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e1d60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_48;
  
  if (*(int *)(param_3 + _DAT_113815200) != 7) {
    func_0x0001000d224c(&uStack_48);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4bd08(uStack_48);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1025e1dfc; end: 1025e2087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025e1dfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = 0x112d3bc20;
  puVar4 = &UNK_10d904ef0;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar6 - extraout_x12;
  lVar2 = param_1;
  func_0x000107c4f38c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5ee20(lVar3,puVar4);
    func_0x00010006c090(lVar3,puVar4);
  }
  lVar3 = lVar2;
  func_0x000107c30944();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
    func_0x000107c5eec8();
  }
  else {
    func_0x000107c5eeb8(puVar6,lVar3);
    func_0x000107c61170(lVar3);
    lVar2 = 0;
    func_0x000107c5eec8();
  }
  lVar7 = *(long *)(lVar2 + -8);
  (**(code **)(lVar7 + 0x38))(puVar6,lVar3 == 0,1,lVar2);
  func_0x0001018cb0e8(puVar6,lVar5);
  func_0x000107c5eec8(0);
  lVar3 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001025e24a8(lVar5,0x112d3bc20,&UNK_10d904ef0);
    if (*(int *)(param_4 + _DAT_113815200) != 7) {
      func_0x0001000d224c(&uStack_68);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c4bd08(uStack_68);
      func_0x000107c615e8(uStack_68);
      func_0x000107c61170(param_2);
    }
    lVar3 = 0;
  }
  else {
    func_0x000107c5eeac();
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
    lVar2 = param_1;
    func_0x000107c44900();
    if ((int)lVar2 != 0) {
      func_0x000107c4a2a8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e2088);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      func_0x000107c61170(param_1);
    }
  }
  return lVar3;
}



/* Entry: 1025e2088; end: 1025e22d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1025e2088(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  long lStack_58;
  
  uVar8 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar8 != 0) {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (uVar8 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar2 = uVar8;
      if (-1 < (long)uVar8) {
        uVar2 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e22d4);
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)(uVar8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = 0;
        func_0x000100e471e4(0,uVar8);
      }
      func_0x0001000d224c(&lStack_58);
      lVar5 = lStack_58;
      if (lStack_58 != 0) {
        func_0x0001000d224c(&lStack_58);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c5c734(uVar4);
        func_0x000107c61180();
        func_0x0001025e24e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(lVar5);
        uVar6 = 0;
        func_0x000107c60110(0);
        uVar7 = uVar3;
        func_0x000107c3e2ec(uVar3);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_58);
        func_0x000107c615e8(uVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar5);
        return uVar7;
      }
      if (*(int *)(param_1 + _DAT_113815200) != 7) {
        func_0x0001000d224c(&lStack_58);
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c4bd08(lStack_58);
        func_0x000107c615e8(lStack_58);
        func_0x000107c61170(param_2);
      }
      goto LAB_1025e2298;
    }
  }
  if (*(int *)(param_1 + _DAT_113815200) == 7) {
    return 0;
  }
  func_0x0001000d224c(&lStack_58);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4bd08(lStack_58);
  func_0x000107c615e8(lStack_58);
  uVar3 = param_2;
LAB_1025e2298:
  func_0x000107c61170(uVar3);
  return 0;
}



/* Entry: 1025e22d4; end: 1025e2317;  */

void FUN_1025e22d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e2318; end: 1025e2357;  */

void FUN_1025e2318(void)

{
  FUN_1025e00f8();
  return;
}



/* Entry: 1025e2358; end: 1025e2377;  */

void FUN_1025e2358(void)

{
  func_0x000107c61168(&PTR_PTR_112eacf78);
  return;
}



/* Entry: 1025e2378; end: 1025e2437;  */

long FUN_1025e2378(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  FUN_102688378(param_2,uVar1);
  return param_2;
}



/* Entry: 1025e2438; end: 1025e2527;  */

undefined8 FUN_1025e2438(undefined8 param_1,undefined8 param_2)

{
  FUN_102688378(param_2,param_1);
  return param_2;
}



/* Entry: 1025e2528; end: 1025e273b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025e2528(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  uVar1 = *(undefined8 *)(param_4 + _DAT_11304a480);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return unaff_x20;
}



/* Entry: 1025e273c; end: 1025e276f;  */

/* WARNING: Possible PIC construction at 0x0001025e2748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e2758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e274c) */
/* WARNING: Removing unreachable block (ram,0x0001025e275c) */

void FUN_1025e273c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1025e2770; end: 1025e27d3;  */

void FUN_1025e2770(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e27d4; end: 1025e2857;  */

void FUN_1025e27d4(undefined8 param_1)

{
  if (lRam0000000112ead028 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6e66d8);
  return;
}



/* Entry: 1025e2858; end: 1025e287b;  */

void FUN_1025e2858(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001025e261c();
  *param_1 = param_2;
  return;
}



/* Entry: 1025e287c; end: 1025e2b07;  */

void FUN_1025e287c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    puVar1 = PTR_PTR_1126aab98;
    func_0x000107c610f8(PTR_PTR_1126aab98);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c522e0(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c573f4(puVar1);
    func_0x000107c61170(param_3);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5662c(puVar1);
    func_0x000107c61170(param_5);
    func_0x000107c5fadc(param_7,param_8);
    func_0x000107c54714(puVar1);
    func_0x000107c61170(param_7);
    func_0x000107c54674(puVar1);
    func_0x000107c59024(puVar1);
    func_0x000107c4bfb0(lStack_68);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1025e2b08; end: 1025e2b2b;  */

void FUN_1025e2b08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e2b2c; end: 1025e2b6b;  */

void FUN_1025e2b2c(void)

{
  FUN_1025e287c();
  return;
}



/* Entry: 1025e2b6c; end: 1025e2b8b;  */

void FUN_1025e2b6c(void)

{
  func_0x000107c61168(&PTR_PTR_112ead130);
  return;
}



/* Entry: 1025e2b8c; end: 1025e2ca7;  */

/* WARNING: Possible PIC construction at 0x0001025e2c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e2c6c) */

void FUN_1025e2b8c(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0x53534543435553;
  if ((param_1 & 1) == 0) {
    uVar2 = 0x4552554c494146;
  }
  func_0x000107c5fadc(uVar2,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  if (param_2 == 0) {
    uVar5 = 0xec00000045544149;
    uVar3 = 0x44454d5245544e49;
  }
  else if (param_2 == 2) {
    uVar5 = 0xe500000000000000;
    uVar3 = 0x4853554c46;
  }
  else {
    if (param_2 != 1) {
      lStack_38 = param_2;
      func_0x000107c60614(&UNK_110528940,&lStack_38,&UNK_110528940,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e2ca8);
      (*pcVar1)();
    }
    uVar5 = 0xe500000000000000;
    uVar3 = 0x4c414e4946;
  }
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000105ed9684(uVar4,uVar2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1025e2ca8; end: 1025e2d13;  */

void FUN_1025e2ca8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x53534543435553;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x4552554c494146;
  }
  func_0x000107c5fadc(uVar1,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000105ed9510(uVar2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1025e2d14; end: 1025e314f;  */

void FUN_1025e2d14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  bVar2 = (param_3 & 1) == 0;
  uVar3 = 0x53534543435553;
  if (bVar2) {
    uVar3 = 0x455245564f434552;
  }
  uVar1 = 0xe700000000000000;
  if (bVar2) {
    uVar1 = 0xe900000000000044;
  }
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000105ed9ae4(uVar4,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1025e3150; end: 1025e3173;  */

void FUN_1025e3150(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e3174; end: 1025e3203;  */

void FUN_1025e3174(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar1 = 0x53534543435553;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x4552554c494146;
  }
  func_0x000107c5fadc(uVar1,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000105ed9510(uVar2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1025e3204; end: 1025e328b;  */

void FUN_1025e3204(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x10);
  bVar2 = (param_3 & 1) == 0;
  uVar3 = 0x53534543435553;
  if (bVar2) {
    uVar3 = 0x455245564f434552;
  }
  uVar1 = 0xe700000000000000;
  if (bVar2) {
    uVar1 = 0xe900000000000044;
  }
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000105ed9ae4(uVar4,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1025e328c; end: 1025e32ab;  */

void FUN_1025e328c(void)

{
  func_0x0001025e2d98();
  return;
}



/* Entry: 1025e32ac; end: 1025e32ff;  */

void FUN_1025e32ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  FUN_1025f57ec();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000105ed9c58(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


