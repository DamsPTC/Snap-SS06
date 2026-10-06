/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102af7820; end: 102af78f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af7820(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102af334c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eedc20) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102af78f8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eedc28);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eee0b8);
    *(long **)(unaff_x20 + _DAT_112eee0b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102af78f8; end: 102af791f; -[SCSCChatCameraScopedServicesSaberEntryPoint begin] */

void FUN_102af78f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102af7820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102af7920; end: 102af7a97;  */

/* WARNING: Possible PIC construction at 0x000102af7988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af7a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af798c) */
/* WARNING: Removing unreachable block (ram,0x000102af7a24) */
/* WARNING: Removing unreachable block (ram,0x000102af7a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af7920(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eee0b8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102af7a98; end: 102af7a9f;  */

void FUN_102af7a98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102af7aa0; end: 102af7ad3; -[SCSCChatCameraScopedServicesSaberEntryPoint end] */

void FUN_102af7aa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102af7920();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102af7ad4; end: 102af7bf3;  */

void FUN_102af7ad4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ChatCameraScopeGraphBridge/SCSCChatCameraScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x33,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102af7bf4);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102af7bf4; end: 102af7c9f; -[SCSCChatCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102af7bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102af7ad4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102af7ca0; end: 102af7cff; -[SCSCChatCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af7ca0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eee0b0,0);
  *(undefined8 *)(param_1 + _DAT_112eee0b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102af7d00; end: 102af7d33;  */

void FUN_102af7d00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102af7d34; end: 102af7d6b; -[SCSCChatCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af7d34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eee0b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee0b8));
  return;
}



/* Entry: 102af7d6c; end: 102af7d8b;  */

void FUN_102af7d6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128882e8);
  return;
}



/* Entry: 102af7d8c; end: 102af8153;  */

void FUN_102af7d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_15;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  return;
}



/* Entry: 102af8154; end: 102af818b;  */

void FUN_102af8154(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102af818c; end: 102af822f;  */

void FUN_102af818c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102af8230; end: 102af824f;  */

void FUN_102af8230(void)

{
  func_0x000102af7ee8();
  return;
}



/* Entry: 102af8250; end: 102af8257;  */

undefined8 FUN_102af8250(void)

{
  return 0;
}



/* Entry: 102af8258; end: 102af840f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102af8258(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083f78);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11305c950);
  func_0x000107c61174(uVar3);
  func_0x000107c5c734(uVar11);
  func_0x000107c61180();
  func_0x000107c42eac(uVar4);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(lVar1 + _DAT_113083868);
  func_0x000107c61174(uVar5);
  func_0x000107c4cd6c();
  func_0x000107c61180();
  func_0x000107c4cba8();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(lVar2 + _DAT_112fbbb68);
  func_0x000107c61174();
  func_0x000107c4fd08();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126aff00;
  func_0x000107c610f8(PTR_PTR_1126aff00);
  func_0x000107c49370();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar11);
  func_0x000107c61170(uVar3);
  return puVar10;
}



/* Entry: 102af8410; end: 102af842b;  */

void FUN_102af8410(long param_1,long param_2)

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



/* Entry: 102af842c; end: 102af844b;  */

void FUN_102af842c(void)

{
  func_0x000107c61168(&PTR_PTR_112eee128);
  return;
}



/* Entry: 102af844c; end: 102af84b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af844c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102af8840();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eee1f8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102af84b8; end: 102af8523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af84b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eee1f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102af8524; end: 102af8583; -[_TtC40DirectorModeScopedFactoryServiceProvider28SCDirectorModeScopedServices init] */

void FUN_102af8524(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DirectorModeScopedFactoryServiceProvider.SCDirectorModeScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af8550);
  (*pcVar1)();
}



/* Entry: 102af8584; end: 102af8593; -[_TtC40DirectorModeScopedFactoryServiceProvider28SCDirectorModeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af8584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eee1f8));
  return;
}



/* Entry: 102af8594; end: 102af85ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af8594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110599c90;
  func_0x000107c613fc(&UNK_110599c90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102af891c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102af8600; end: 102af869b;  */

void FUN_102af8600(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110599ba0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110599ba0;
  return;
}



/* Entry: 102af869c; end: 102af86d3;  */

void FUN_102af869c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102af86d4; end: 102af86db;  */

undefined8 FUN_102af86d4(void)

{
  return 0x1b;
}



/* Entry: 102af86dc; end: 102af880f;  */

void FUN_102af86dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110599cb8;
  func_0x000107c613fc(&UNK_110599cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102af88f4;
  func_0x00010058fa64(FUN_102af88f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102af8810; end: 102af883f;  */

undefined ** FUN_102af8810(void)

{
  return &PTR_DAT_112fef750;
}



/* Entry: 102af8840; end: 102af885f;  */

void FUN_102af8840(void)

{
  func_0x000107c61168(&PTR_PTR_1128883a8);
  return;
}



/* Entry: 102af8860; end: 102af88af;  */

undefined1  [16] FUN_102af8860(void)

{
  return ZEXT816(0x110599bf0);
}



/* Entry: 102af88b0; end: 102af88f3;  */

void FUN_102af88b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eee260 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abf28;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eee260 = puVar1;
  return;
}



/* Entry: 102af88f4; end: 102af891b;  */

void FUN_102af88f4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102af891c; end: 102af892f;  */

void FUN_102af891c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102af8930; end: 102af8d53;  */

void FUN_102af8930(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112eee278,&UNK_10db1cea8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102afa860();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  func_0x000102afa8ec();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102af869c;
  func_0x0001000823a8(FUN_102af869c,0);
  func_0x000100082720("SCDirectorModeScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112eee280,&UNK_10db1cec0);
  puVar5 = &UNK_110599d68;
  func_0x000107c613fc(&UNK_110599d68,0x58,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 *)(puVar5 + 0x48) = param_9;
  *(undefined8 **)(puVar5 + 0x50) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(puVar3);
  pcVar6 = FUN_102af8d68;
  func_0x0001000823a8(FUN_102af8d68,puVar5);
  func_0x000100082720("SCDirectorModeEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112eee288,&UNK_10db1ceb0);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_102af8d9c;
  func_0x0001000823a8(FUN_102af8d9c,pcVar6);
  func_0x000100082720("SCDirectorModeWorkflowServicesServiceProvider",0x2d,2);
  puVar8 = puVar2;
  FUN_102afa6b4(puVar2,pcVar7);
  func_0x000100082720("DirectorModeScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112eee290,&UNK_10db1ceb8);
  puVar5 = &UNK_110599d90;
  func_0x000107c613fc(&UNK_110599d90,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 **)(puVar5 + 0x18) = puVar8;
  *(code **)(puVar5 + 0x20) = pcVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar4);
  uVar11 = 0x102af8da4;
  func_0x0001000823a8(0x102af8da4,puVar5);
  func_0x000100082720("SCDirectorModeScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112eee200,&UNK_10db1cc70);
  func_0x000107c6157c(uVar11);
  uVar9 = 0x102af8db0;
  func_0x0001000823a8(0x102af8db0,uVar11);
  func_0x000100082720("SCDirectorModeScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112eee1f0,&UNK_10db1cc60);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102af8db8;
  func_0x0001000823a8(0x102af8db8,uVar9);
  func_0x000100082720("SCDirectorModeScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110599db8;
  func_0x000107c613fc(&UNK_110599db8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x102af8dc0;
  func_0x0001000823a8(0x102af8dc0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCDirectorModeScopeEntryPointProvider",0x25,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 102af8d54; end: 102af8d67;  */

void FUN_102af8d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *param_2;
  func_0x0001000285a8(0x112eee278,&UNK_10db1cea8);
  puVar4 = &uStack_68;
  uStack_68 = uVar16;
  func_0x0001000838ec();
  puVar5 = puVar4;
  func_0x000102afa860();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar6 = puVar5;
  func_0x000102afa8ec();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_102af869c;
  func_0x0001000823a8(FUN_102af869c,0);
  func_0x000100082720("SCDirectorModeScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112eee280,&UNK_10db1cec0);
  puVar8 = &UNK_110599d68;
  func_0x000107c613fc(&UNK_110599d68,0x58,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar4;
  *(undefined8 *)(puVar8 + 0x18) = uVar12;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  *(undefined8 *)(puVar8 + 0x28) = uVar13;
  *(undefined8 *)(puVar8 + 0x30) = uVar2;
  *(undefined8 *)(puVar8 + 0x38) = uVar14;
  *(undefined8 *)(puVar8 + 0x40) = uVar3;
  *(undefined8 *)(puVar8 + 0x48) = uVar15;
  *(undefined8 **)(puVar8 + 0x50) = puVar6;
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(puVar6);
  pcVar9 = FUN_102af8d68;
  func_0x0001000823a8(FUN_102af8d68,puVar8);
  func_0x000100082720("SCDirectorModeEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112eee288,&UNK_10db1ceb0);
  func_0x000107c6157c(pcVar9);
  pcVar10 = FUN_102af8d9c;
  func_0x0001000823a8(FUN_102af8d9c,pcVar9);
  func_0x000100082720("SCDirectorModeWorkflowServicesServiceProvider",0x2d,2);
  puVar11 = puVar5;
  FUN_102afa6b4(puVar5,pcVar10);
  func_0x000100082720("DirectorModeScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112eee290,&UNK_10db1ceb8);
  puVar8 = &UNK_110599d90;
  func_0x000107c613fc(&UNK_110599d90,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar4;
  *(undefined8 **)(puVar8 + 0x18) = puVar11;
  *(code **)(puVar8 + 0x20) = pcVar9;
  *(code **)(puVar8 + 0x28) = pcVar7;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(pcVar7);
  uVar12 = 0x102af8da4;
  func_0x0001000823a8(0x102af8da4,puVar8);
  func_0x000100082720("SCDirectorModeScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112eee200,&UNK_10db1cc70);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x102af8db0;
  func_0x0001000823a8(0x102af8db0,uVar12);
  func_0x000100082720("SCDirectorModeScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112eee1f0,&UNK_10db1cc60);
  func_0x000107c6157c(uVar13);
  uVar14 = 0x102af8db8;
  func_0x0001000823a8(0x102af8db8,uVar13);
  func_0x000100082720("SCDirectorModeScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_110599db8;
  func_0x000107c613fc(&UNK_110599db8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar14;
  *(code **)(puVar8 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar14 = 0x102af8dc0;
  func_0x0001000823a8(0x102af8dc0,puVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000100082720("SCDirectorModeScopeEntryPointProvider",0x25,2);
  *param_1 = uVar14;
  return;
}



/* Entry: 102af8d68; end: 102af8d9b;  */

void FUN_102af8d68(void)

{
  long unaff_x20;
  
  FUN_102af8dc8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102af8d9c; end: 102af8dc7;  */

void FUN_102af8d9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102af8dc8; end: 102af99b7;  */

void FUN_102af8dc8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_102af9ba4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar11 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar9;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar9;
  puVar9 = PTR_PTR_1126abf30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0ebdc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0714b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03efe0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar14);
  uVar11 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f088f10);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef383e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0ebde0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0714d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(uStack_a8);
    *(long *)(param_2 + 0x60) = lVar13;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af9408);
  (*pcVar1)();
}



/* Entry: 102af99b8; end: 102af9a43;  */

void FUN_102af99b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102af9a44; end: 102af9a97;  */

void FUN_102af9a44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102af9a98; end: 102af9a9f;  */

undefined8 FUN_102af9a98(void)

{
  return 0x1b;
}



/* Entry: 102af9aa0; end: 102af9b23;  */

void FUN_102af9aa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102af9bf4,param_2,FUN_102af9bf8,param_2,FUN_102af9c20,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102af9b24; end: 102af9b73;  */

undefined8 FUN_102af9b24(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102af9b74; end: 102af9ba3;  */

undefined ** FUN_102af9b74(void)

{
  return &PTR_DAT_112fef750;
}



/* Entry: 102af9ba4; end: 102af9bc3;  */

void FUN_102af9ba4(void)

{
  func_0x000107c61168(&PTR_PTR_112eee300);
  return;
}



/* Entry: 102af9bc4; end: 102af9bf7;  */

undefined1  [16] FUN_102af9bc4(void)

{
  return ZEXT816(0x110599e10);
}



/* Entry: 102af9bf8; end: 102af9c1f;  */

void FUN_102af9bf8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102af9c20; end: 102af9c27;  */

undefined8 FUN_102af9c20(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102af9c28; end: 102af9c63;  */

void FUN_102af9c28(undefined8 *param_1,undefined8 param_2)

{
  FUN_102af9c64();
  func_0x0001000a7f38("SCDirectorModeScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102af9c64; end: 102af9e4f;  */

void FUN_102af9c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d91a0;
  ppuVar4 = &PTR_DAT_112fef750;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110599e80;
  func_0x000107c613fc(&UNK_110599e80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112eee3b0;
  func_0x0001000285a8(0x112eee3b0,&UNK_10db1d058);
  func_0x0001000a6ee8(&UNK_11059a118,"DirectorModeScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_102af9e50,puVar2,uVar3,&UNK_11059a118,&PTR_DAT_112eee488);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110599e30,"SCDirectorModeEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_102af9f04,param_3,uVar3,&UNK_110599e30,&PTR_DAT_112eee298);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110599ea8;
  func_0x000107c613fc(&UNK_110599ea8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110599c30,"SCDirectorModeScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_102af9fb4,puVar2,uVar3,&UNK_110599c30,&PTR_DAT_112eee208);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112eee3b8;
  func_0x0001000285a8(0x112eee3b8,&UNK_10db1d060);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102af9e50; end: 102af9e8f;  */

void FUN_102af9e50(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102afa974(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DirectorModeScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102af9e90; end: 102af9f03;  */

void FUN_102af9e90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102af9ff0;
  func_0x0001000823a8(0x102af9ff0,param_3);
  func_0x000100082720("SCDirectorModeEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102af9f04; end: 102af9f0b;  */

void FUN_102af9f04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102af9ff0;
  func_0x0001000823a8();
  func_0x000100082720("SCDirectorModeEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102af9f0c; end: 102af9fb3;  */

void FUN_102af9f0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110599ed0;
  func_0x000107c613fc(&UNK_110599ed0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102af9fe8;
  func_0x0001000823a8(FUN_102af9fe8,puVar1);
  func_0x000100082720("SCDirectorModeScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102af9fb4; end: 102af9fbb;  */

void FUN_102af9fb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110599ed0;
  func_0x000107c613fc(&UNK_110599ed0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102af9fe8;
  func_0x0001000823a8(FUN_102af9fe8,puVar3);
  func_0x000100082720("SCDirectorModeScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102af9fbc; end: 102af9fe7;  */

void FUN_102af9fbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102af9fe8; end: 102af9ff7;  */

void FUN_102af9fe8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110599cb8;
  func_0x000107c613fc(&UNK_110599cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102af88f4;
  func_0x00010058fa64(FUN_102af88f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102af9ff8; end: 102afa0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102af9ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102afa5c4();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112eee3c0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112eee3c8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afa0d4);
  (*pcVar1)();
}



/* Entry: 102afa0d4; end: 102afa133; -[_TtC28DirectorModeScopeGraphBridge43DirectorModeScopeGraphBridgeSaberEntryPoint init] */

void FUN_102afa0d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DirectorModeScopeGraphBridge.DirectorModeScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afa100);
  (*pcVar1)();
}



/* Entry: 102afa134; end: 102afa16b; -[_TtC28DirectorModeScopeGraphBridge43DirectorModeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102afa150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afa154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee3c0));
  return;
}



/* Entry: 102afa16c; end: 102afa193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa16c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112eee3c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112eee3c0));
  return;
}



/* Entry: 102afa194; end: 102afa1b3;  */

void FUN_102afa194(void)

{
  func_0x000107c61168(&PTR_PTR_112888468);
  return;
}



/* Entry: 102afa1b4; end: 102afa24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102afa1b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eee480);
  *(undefined8 *)(unaff_x20 + _DAT_112eee3f8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eee400) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102afa250; end: 102afa2af; -[_TtC28DirectorModeScopeGraphBridge45SCDirectorModeWorkflowServicesSaberEntryPoint init] */

void FUN_102afa250(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DirectorModeScopeGraphBridge.SCDirectorModeWorkflowServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afa27c);
  (*pcVar1)();
}



/* Entry: 102afa2b0; end: 102afa343; -[_TtC28DirectorModeScopeGraphBridge45SCDirectorModeWorkflowServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa2b0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eee3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee400));
  return;
}



/* Entry: 102afa344; end: 102afa34b;  */

undefined8 FUN_102afa344(void)

{
  return 0;
}



/* Entry: 102afa34c; end: 102afa36b;  */

void FUN_102afa34c(void)

{
  func_0x000107c61168(&PTR_PTR_112888530);
  return;
}



/* Entry: 102afa36c; end: 102afa3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102afa36c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eee430) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eee438);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102afa3f4);
  (*pcVar2)();
}



/* Entry: 102afa3f4; end: 102afa4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102afa3f4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eee430);
  *(undefined **)(unaff_x20 + _DAT_112eee430) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eee438);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eee438))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11059a010;
  func_0x000107c613fc(&UNK_11059a010,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102afa4e0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102afa4dc; end: 102afa4e7;  */

void FUN_102afa4dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102afa4e8; end: 102afa547; -[_TtC28DirectorModeScopeGraphBridge43SCDirectorModeScopedServicesSaberEntryPoint init] */

void FUN_102afa4e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DirectorModeScopeGraphBridge.SCDirectorModeScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afa514);
  (*pcVar1)();
}



/* Entry: 102afa548; end: 102afa57f; -[_TtC28DirectorModeScopeGraphBridge43SCDirectorModeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa548(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eee438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee430));
  return;
}



/* Entry: 102afa580; end: 102afa583;  */

void FUN_102afa580(void)

{
  return;
}



/* Entry: 102afa584; end: 102afa5a3;  */

void FUN_102afa584(void)

{
  FUN_102afa3f4();
  return;
}



/* Entry: 102afa5a4; end: 102afa5c3;  */

void FUN_102afa5a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128885f8);
  return;
}



/* Entry: 102afa5c4; end: 102afa693;  */

undefined8 FUN_102afa5c4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112eee468,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102afa694();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102afa694; end: 102afa6b3;  */

void FUN_102afa694(void)

{
  func_0x000107c61168(&PTR_PTR_1128886c0);
  return;
}



/* Entry: 102afa6b4; end: 102afa6d7;  */

void FUN_102afa6b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11059a058;
  func_0x0001000285a8(0x112eee470,&UNK_10db1d158);
  func_0x000107c613fc(&UNK_11059a058,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102afa75c,puVar1);
  return;
}



/* Entry: 102afa6d8; end: 102afa75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa6d8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102afa694();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112eee478) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112eee480) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102afa75c; end: 102afa763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa75c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_102afa694();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112eee478) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112eee480) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102afa764; end: 102afa7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa764(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eee478) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eee480) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102afa7c8; end: 102afa827; -[_TtC28DirectorModeScopeGraphBridge36DirectorModeScopeGraphBridgeServices init] */

void FUN_102afa7c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DirectorModeScopeGraphBridge.DirectorModeScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afa7f4);
  (*pcVar1)();
}



/* Entry: 102afa828; end: 102afa96b; -[_TtC28DirectorModeScopeGraphBridge36DirectorModeScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102afa844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afa848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afa828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eee480));
  return;
}



/* Entry: 102afa96c; end: 102afa997;  */

undefined8 FUN_102afa96c(void)

{
  return 0x1b;
}



/* Entry: 102afa998; end: 102afaa17;  */

void FUN_102afa998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102afaa18; end: 102afab0f;  */

void FUN_102afaa18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112eee468,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eee468,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11059a158;
  func_0x000107c613fc(&UNK_11059a158,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102afac10;
  func_0x00010058fa64(0x102afac10,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102afab10; end: 102afab3b;  */

void FUN_102afab10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102afab3c; end: 102afab43;  */

void FUN_102afab3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112eee468,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eee468,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11059a158;
  func_0x000107c613fc(&UNK_11059a158,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102afac10;
  func_0x00010058fa64(0x102afac10,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102afab44; end: 102afab9f;  */

void FUN_102afab44(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eee468,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112eee468,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102afaba0; end: 102afac17;  */

undefined ** FUN_102afaba0(void)

{
  return &PTR_DAT_112fef750;
}



/* Entry: 102afac18; end: 102afac5f; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afac18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee4d8;
  func_0x000107c61428(param_1 + _DAT_112eee4d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102afac60; end: 102afacb7; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afac60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee4d8;
  func_0x000107c61428(param_1 + _DAT_112eee4d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102afacb8; end: 102afacff; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afacb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee4e0;
  func_0x000107c61428(param_1 + _DAT_112eee4e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102afad00; end: 102afad0b; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afad00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee4e0;
  func_0x000107c61428(param_1 + _DAT_112eee4e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102afad0c; end: 102afad53; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint directorModeScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afad0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee4e8;
  func_0x000107c61428(param_1 + _DAT_112eee4e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102afad54; end: 102afad5f; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint setDirectorModeScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afad54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee4e8;
  func_0x000107c61428(param_1 + _DAT_112eee4e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102afad60; end: 102afadbf;  */

void FUN_102afad60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102afadc0; end: 102afaf7b;  */

/* WARNING: Possible PIC construction at 0x000102afaed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102afaefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102afaf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102afaf50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afaf10) */
/* WARNING: Removing unreachable block (ram,0x000102afaf00) */
/* WARNING: Removing unreachable block (ram,0x000102afaedc) */
/* WARNING: Removing unreachable block (ram,0x000102afaf54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afadc0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c41e88();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102afa194();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102afa5c4();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102afaf7c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112eee3c0) = lVar5;
      *(long *)(lVar3 + _DAT_112eee3c8) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102afaf7c; end: 102afafa3; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102afaf7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102afadc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


