/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024a6e88; end: 1024a6eb7;  */

void FUN_1024a6e88(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024a6eb8; end: 1024a6ec7; -[SCMassSnapIconViewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a6eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e9ea68));
  return;
}



/* Entry: 1024a6ec8; end: 1024a709b;  */

undefined * FUN_1024a6ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c54b80(0,0,0x4041000000000000,0x4041000000000000,puVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c3fa94(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar3,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c54b80(0,0,0x4041000000000000,0x4041000000000000,puVar3);
  func_0x000107c59ba8(puVar3,param_2,100);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8a0(0x4031000000000000,0x4031000000000000,0x4031000000000000,0,0x401921fb54442d18)
  ;
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x000107c453e4();
  puVar5 = puVar2;
  func_0x000107c3ab30(puVar2);
  func_0x000107c61180();
  func_0x000107c57274(puVar4,param_2,puVar5);
  func_0x000107c61170(puVar5);
  puVar5 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c562f4(puVar5,param_2,puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c3d89c(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1024a709c; end: 1024a7213;  */

/* WARNING: Possible PIC construction at 0x0001024a713c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a7150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a71cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a71e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a7160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a71d0) */
/* WARNING: Removing unreachable block (ram,0x0001024a7154) */
/* WARNING: Removing unreachable block (ram,0x0001024a7140) */
/* WARNING: Removing unreachable block (ram,0x0001024a71e4) */

void FUN_1024a709c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = param_1;
  func_0x000107c5df3c(param_1,param_2,100);
  func_0x000107c61180();
  if (lVar2 == 0) {
    FUN_1024a6ec8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5df3c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c60bd0(param_4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7214);
      (*pcVar1)();
    }
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c61490(lVar3,puVar4,0,0,0);
    func_0x000107c61174(lVar3);
    (**(code **)(param_4 + 0x10))(param_4,lVar2);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    lVar3 = lVar2;
    func_0x000107c6148c(lVar2,puVar4);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      func_0x000107c55258(lVar3);
      func_0x000107c4aba4(lVar3);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1024a7214; end: 1024a723b;  */

void FUN_1024a7214(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  puVar6 = &UNK_110512b20;
  func_0x000107c613fc(&UNK_110512b20,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  puVar7 = &UNK_110512b48;
  func_0x000107c613fc(&UNK_110512b48,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1024a7268;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1024a7274;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x1024a72b8;
  puStack_78 = &UNK_110512b60;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar11);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar4);
  pcStack_70 = FUN_1024a6e00;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar3;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_110512b88;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x51,0x7b,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1024a6b64);
    (*pcVar5)();
  }
  uVar10 = 0;
  func_0x000107c61544(0,"",0x51,0x84,0x19,1);
  if ((uVar10 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1024a6b68);
  (*pcVar5)();
}



/* Entry: 1024a723c; end: 1024a7267;  */

void FUN_1024a723c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024a7268; end: 1024a7273;  */

void FUN_1024a7268(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = "_loadImage(into:properties:)";
  func_0x0001000c10c0("_loadImage(into:properties:)");
  func_0x000107c61180();
  puVar3 = &UNK_110512aa8;
  func_0x000107c613fc(&UNK_110512aa8,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_110512bc0;
  func_0x000107c613fc(&UNK_110512bc0,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  pcStack_68 = FUN_1024a7294;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110512bd8;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_60;
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1024a7274; end: 1024a7293;  */

void FUN_1024a7274(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024a7294; end: 1024a72bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a7294(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  puVar8 = auStack_68;
  func_0x000107c61428(lVar6 + 0x10,puVar8,0,0);
  uVar4 = lVar6 + 0x10;
  func_0x000107c61618();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      if ((uVar5 == uVar2) && (puVar8 == puVar1)) {
        func_0x000107c6142c(puVar8);
      }
      else {
        func_0x000107c605b8(uVar5,puVar8,uVar2,puVar1,0);
        func_0x000107c6142c(puVar8);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      if (lVar6 != 0) {
        uVar7 = 0;
        if (lVar3 != 0) {
          uVar7 = *(undefined8 *)(lVar3 + _DAT_11307d350);
          func_0x000107c61174(uVar7);
        }
        func_0x000107c55258(lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(uVar7);
      }
    }
  }
  return;
}



/* Entry: 1024a72bc; end: 1024a7333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a72bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112e9eac0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9eac8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ead0) = 0;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024a7334; end: 1024a7353;  */

void FUN_1024a7334(void)

{
  func_0x000107c61168(&PTR_PTR_112846760);
  return;
}



/* Entry: 1024a7354; end: 1024a73cb; -[SCImpalaMassSnapManagementPlugin initWithImpalaLegacyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a7354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1 + _DAT_112e9eac0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(param_1 + _DAT_112e9eac8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e9ead0) = 0;
  FUN_1024a7334();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1024a73cc; end: 1024a7467;  */

undefined8 FUN_1024a73cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x0001024a7d20(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return uVar1;
}



/* Entry: 1024a7468; end: 1024a74c7; -[SCImpalaMassSnapManagementPlugin initWithImpalaLegacyServices:imageFetchingService:] */

undefined8
FUN_1024a7468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_3;
  func_0x0001024a7d20(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 1024a74c8; end: 1024a74db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a74c8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_112e9eac0,param_1);
  return;
}



/* Entry: 1024a74dc; end: 1024a7513; -[SCImpalaMassSnapManagementPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a74dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9eac0,param_3);
  return;
}



/* Entry: 1024a7514; end: 1024a753f; -[SCImpalaMassSnapManagementPlugin type] */

void FUN_1024a7514(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0a3690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024a7540; end: 1024a7547;  */

void FUN_1024a7540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1024a7548; end: 1024a754f; -[SCImpalaMassSnapManagementPlugin extraPropertiesProvider] */

void FUN_1024a7548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1024a7550; end: 1024a7567; -[SCImpalaMassSnapManagementPlugin setOperaControlling:] */

void FUN_1024a7550(void)

{
  return;
}



/* Entry: 1024a7568; end: 1024a7583; -[SCImpalaMassSnapManagementPlugin teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a7568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9eac0,0);
  return;
}



/* Entry: 1024a7584; end: 1024a758f; -[SCImpalaMassSnapManagementPlugin playlistDataSource] */

void FUN_1024a7584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1024a7590; end: 1024a7593; -[SCImpalaMassSnapManagementPlugin addEventListenersWithEventAnnouncing:] */

void FUN_1024a7590(void)

{
  return;
}



/* Entry: 1024a7594; end: 1024a7727;  */

/* WARNING: Removing unreachable block (ram,0x0001024a75f8) */

void FUN_1024a7594(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_2,param_3);
  uVar2 = param_2;
  func_0x0001010282b0(param_2,param_3);
  func_0x00010006c090(param_2,param_3);
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c44bb8();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar2;
      func_0x000107c5ca90();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a771c);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c5b184();
      func_0x000107c61170(uVar4);
      uVar4 = uVar2;
      func_0x000107c5ca90();
      func_0x000107c61180();
      if (uVar5 == 0) {
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7724);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c4c944();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) goto LAB_1024a770c;
        uVar4 = uVar2;
        func_0x000107c5ca90();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7728);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c4c944();
      }
      else {
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7720);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c5b184(uVar4);
      }
      func_0x000107c61170(uVar4);
      func_0x000107c5ee88(param_1,(double)uVar5 / 1000.0);
      func_0x000107c61170(uVar2);
      uVar6 = 0;
      goto LAB_1024a7604;
    }
LAB_1024a770c:
    func_0x000107c61170(uVar2);
  }
  uVar6 = 1;
LAB_1024a7604:
  lVar3 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001024a7638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,uVar6,1,lVar3);
  return;
}



/* Entry: 1024a7728; end: 1024a7733;  */

/* WARNING: Possible PIC construction at 0x0001024a886c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a88e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a89d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a92e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a93a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a95d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a95fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a962c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a963c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a91cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a90b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a90c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a90f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a89fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a8a00) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a0c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b1c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b2c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b30) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b40) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bd4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bdc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b50) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b58) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b70) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bb0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b88) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8afc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8d6c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8d5c) */
/* WARNING: Removing unreachable block (ram,0x0001024a90f4) */
/* WARNING: Removing unreachable block (ram,0x0001024a90c8) */
/* WARNING: Removing unreachable block (ram,0x0001024a90b4) */
/* WARNING: Removing unreachable block (ram,0x0001024a91d0) */
/* WARNING: Removing unreachable block (ram,0x0001024a9334) */
/* WARNING: Removing unreachable block (ram,0x0001024a9508) */
/* WARNING: Removing unreachable block (ram,0x0001024a9684) */
/* WARNING: Removing unreachable block (ram,0x0001024a9674) */
/* WARNING: Removing unreachable block (ram,0x0001024a9698) */
/* WARNING: Removing unreachable block (ram,0x0001024a9654) */
/* WARNING: Removing unreachable block (ram,0x0001024a9690) */
/* WARNING: Removing unreachable block (ram,0x0001024a9640) */
/* WARNING: Removing unreachable block (ram,0x0001024a9630) */
/* WARNING: Removing unreachable block (ram,0x0001024a9600) */
/* WARNING: Removing unreachable block (ram,0x0001024a95d4) */
/* WARNING: Removing unreachable block (ram,0x0001024a95dc) */
/* WARNING: Removing unreachable block (ram,0x0001024a95ec) */
/* WARNING: Removing unreachable block (ram,0x0001024a9584) */
/* WARNING: Removing unreachable block (ram,0x0001024a9664) */
/* WARNING: Removing unreachable block (ram,0x0001024a95a0) */
/* WARNING: Removing unreachable block (ram,0x0001024a956c) */
/* WARNING: Removing unreachable block (ram,0x0001024a9404) */
/* WARNING: Removing unreachable block (ram,0x0001024a9474) */
/* WARNING: Removing unreachable block (ram,0x0001024a9510) */
/* WARNING: Removing unreachable block (ram,0x0001024a94a0) */
/* WARNING: Removing unreachable block (ram,0x0001024a9454) */
/* WARNING: Removing unreachable block (ram,0x0001024a9520) */
/* WARNING: Removing unreachable block (ram,0x0001024a93ac) */
/* WARNING: Removing unreachable block (ram,0x0001024a92ec) */
/* WARNING: Removing unreachable block (ram,0x0001024a906c) */
/* WARNING: Removing unreachable block (ram,0x0001024a91e0) */
/* WARNING: Removing unreachable block (ram,0x0001024a92f8) */
/* WARNING: Removing unreachable block (ram,0x0001024a92a8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fa4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8eb8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8f24) */
/* WARNING: Removing unreachable block (ram,0x0001024a8f34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fc8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fd8) */
/* WARNING: Removing unreachable block (ram,0x0001024a9350) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fe0) */
/* WARNING: Removing unreachable block (ram,0x0001024a9118) */
/* WARNING: Removing unreachable block (ram,0x0001024a92e8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8ff4) */
/* WARNING: Removing unreachable block (ram,0x0001024a9180) */
/* WARNING: Removing unreachable block (ram,0x0001024a9020) */
/* WARNING: Removing unreachable block (ram,0x0001024a8f3c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8de8) */
/* WARNING: Removing unreachable block (ram,0x0001024a9078) */
/* WARNING: Removing unreachable block (ram,0x0001024a90d8) */
/* WARNING: Removing unreachable block (ram,0x0001024a90f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a907c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8e34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8da0) */
/* WARNING: Removing unreachable block (ram,0x0001024a89d4) */
/* WARNING: Removing unreachable block (ram,0x0001024a88e4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c78) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c7c) */
/* WARNING: Removing unreachable block (ram,0x0001024a88f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c8c) */
/* WARNING: Removing unreachable block (ram,0x0001024a88f8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8918) */
/* WARNING: Removing unreachable block (ram,0x0001024a8934) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a1c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8938) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c74) */
/* WARNING: Removing unreachable block (ram,0x0001024a8944) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c70) */
/* WARNING: Removing unreachable block (ram,0x0001024a895c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8920) */
/* WARNING: Removing unreachable block (ram,0x0001024a8928) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c54) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c98) */
/* WARNING: Removing unreachable block (ram,0x0001024a8974) */
/* WARNING: Removing unreachable block (ram,0x0001024a89f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8990) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a04) */
/* WARNING: Removing unreachable block (ram,0x0001024a89ac) */
/* WARNING: Removing unreachable block (ram,0x0001024a89c4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a38) */
/* WARNING: Removing unreachable block (ram,0x0001024a8aac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a50) */
/* WARNING: Removing unreachable block (ram,0x0001024a8abc) */
/* WARNING: Removing unreachable block (ram,0x0001024a89cc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8870) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c48) */
/* WARNING: Removing unreachable block (ram,0x0001024a8888) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c60) */
/* WARNING: Removing unreachable block (ram,0x0001024a8ca0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cd0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cb4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cdc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cc0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8d74) */
/* WARNING: Removing unreachable block (ram,0x0001024a889c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a7728(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_150 [32];
  long lStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_b8;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lStack_130 = (long)(auStack_150 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    uVar3 = 0;
    FUN_102db02e4(0);
    lVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (lVar4 != 0) {
      uStack_b8 = ((ulong *)(lVar4 + _DAT_112f17a28))[1];
      if (uStack_b8 != 0) {
        uStack_f8 = *(ulong *)(lVar4 + _DAT_112f17a28);
        uVar1 = uStack_f8 & 0xffffffffffff;
        if ((uStack_b8 & 0x2000000000000000) != 0) {
          uVar1 = uStack_b8 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          uVar7 = *(undefined8 *)(lVar4 + _DAT_112f17a20);
          uVar3 = uVar7;
          puStack_128 = auStack_150 + -extraout_x8;
          lStack_120 = lVar8;
          lStack_118 = lVar2;
          uStack_110 = param_5;
          lStack_f0 = lVar4;
          func_0x000107c61174(uVar7);
          func_0x000107c61174();
          lStack_e8 = param_1;
          func_0x000107c61434(uStack_b8);
          func_0x000107c5ee30(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar3);
          return;
        }
      }
    }
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 != (code *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100dfa3f0(puVar6);
    (*param_4)(puVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
    return;
  }
  return;
}



/* Entry: 1024a7734; end: 1024a7817; -[SCImpalaMassSnapManagementPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x0001024a77e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a77f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a77ec) */
/* WARNING: Removing unreachable block (ram,0x0001024a77fc) */

void FUN_1024a7734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110512c10;
    func_0x000107c613fc(&UNK_110512c10,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x1024a96d0;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1024a8708(param_3,uVar3,puVar2);
  FUN_1024a96c0(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024a7818; end: 1024a7873; -[SCImpalaMassSnapManagementPlugin init] */

void FUN_1024a7818(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaMassSnapManagement.SCImpalaMassSnapManagementPlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7844);
  (*pcVar1)();
}



/* Entry: 1024a7874; end: 1024a7a5f; -[SCImpalaMassSnapManagementPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024a7874(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9eac8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9ead0));
  param_1 = param_1 + _DAT_112e9eac0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024a7a60; end: 1024a7b87;  */

ulong FUN_1024a7a60(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7b88);
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
  FUN_1024a7b88(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a7b84);
      (*pcVar1)();
    }
    FUN_1024a7c08(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1024a7b88; end: 1024a7c07;  */

undefined * FUN_1024a7b88(undefined *param_1,undefined *param_2)

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
    func_0x00010248db18();
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



/* Entry: 1024a7c08; end: 1024a7df7;  */

long FUN_1024a7c08(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a7d1c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a7d20);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001024a9718(0,0x112e9de08,&PTR_PTR_1126b0ed0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001024a9718(0,0x112e9de08,&PTR_PTR_1126b0ed0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a7d18);
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



/* Entry: 1024a7df8; end: 1024a7ea7;  */

undefined1  [16] FUN_1024a7df8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5ee70();
  func_0x000107c43870();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    uVar1 = (ulong)puVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_1024a7e98;
    func_0x000107c6142c(param_2);
  }
  puVar3 = (undefined *)0x0;
  param_2 = 0;
LAB_1024a7e98:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar3;
  return auVar4;
}



/* Entry: 1024a7ea8; end: 1024a848f;  */

/* WARNING: Removing unreachable block (ram,0x0001024a7f10) */

undefined * FUN_1024a7ea8(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  uVar3 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1);
  if (uVar3 == 0) {
    return (undefined *)0x0;
  }
  uVar4 = uVar3;
  func_0x000107c44bac();
  if ((uVar4 & 1) == 0) goto LAB_1024a81f4;
  uVar4 = uVar3;
  func_0x000107c5c910();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8444);
    (*pcVar2)();
  }
  uVar15 = uVar4;
  func_0x000107c44bb0();
  func_0x000107c61170(uVar4);
  if ((int)uVar15 == 0) goto LAB_1024a81f4;
  uVar4 = uVar3;
  func_0x000107c5c910();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a844c);
    (*pcVar2)();
  }
  uVar15 = uVar4;
  func_0x000107c5c954();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8450);
    (*pcVar2)();
  }
  uVar4 = uVar15;
  func_0x000107c3abfc();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8454);
    (*pcVar2)();
  }
  uVar15 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(param_2);
  uVar4 = uVar15 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) goto LAB_1024a81f4;
  uVar4 = uVar3;
  func_0x000107c5c910();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8458);
    (*pcVar2)();
  }
  uVar15 = uVar4;
  func_0x000107c5c954();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a845c);
    (*pcVar2)();
  }
  uVar4 = uVar15;
  func_0x000107c3abfc(uVar15);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  uVar15 = uVar3;
  func_0x000107c44a2c();
  if ((int)uVar15 != 0) {
    uVar15 = uVar3;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar15 == 0) {
      func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a846c);
      (*pcVar2)();
    }
    uVar5 = uVar15;
    func_0x000107c4e92c();
    func_0x000107c61170(uVar15);
    if (uVar5 != 0) {
      uVar15 = uVar3;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8478);
        (*pcVar2)();
      }
      uVar5 = uVar15;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(uVar15);
      if (uVar5 == 0) {
        func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8484);
        (*pcVar2)();
      }
      uVar15 = uVar5;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar15 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_b0,uVar15);
        func_0x000107c615e8(uVar15);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x0001024a96d8(&uStack_90,0x112d387f8,&UNK_10d902650);
        return (undefined *)0x0;
      }
      uVar6 = 0;
      func_0x0001024a9718(0,0x112d55598,&PTR_PTR_1126b25d0);
      puVar7 = &uStack_b8;
      puVar11 = &uStack_90;
      func_0x000107c6147c(puVar7,puVar11,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c61170(uVar4);
        goto LAB_1024a81f4;
      }
      uVar15 = uStack_b8;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar15 != 0) {
        func_0x000107c61170();
        uVar15 = uStack_b8;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar15 == 0) {
          func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8490);
          (*pcVar2)();
        }
        uVar5 = uVar15;
        func_0x000107c427cc();
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        if (uVar5 != 0) {
          uVar15 = uVar5;
          func_0x000107c4a8c4();
          func_0x000107c61180();
          if (uVar15 != 0) {
            uVar8 = uVar15;
            func_0x000107c5ee30();
            puVar12 = puVar11;
            func_0x000107c61170(uVar15);
            uVar1 = (uint)((ulong)puVar11 >> 0x20);
            uVar13 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar13 == 0) {
                uVar15 = (ulong)puVar11 >> 0x30 & 0xff;
              }
              else {
                iVar14 = (int)(uVar8 >> 0x20);
                if (SBORROW4(iVar14,(int)uVar8)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8448);
                  (*pcVar2)();
                }
                uVar15 = (ulong)(iVar14 - (int)uVar8);
              }
LAB_1024a826c:
              if (0 < (long)uVar15) {
                uVar15 = uVar5;
                func_0x000107c4a804();
                func_0x000107c61180();
                if (uVar15 == 0) {
                  func_0x000107c61170(uVar3);
                  func_0x000107c61170(uVar4);
                  func_0x00010006c090(uVar8,puVar11);
                  func_0x000107c61170(uStack_b8);
                  uVar3 = uVar5;
                  goto LAB_1024a81f4;
                }
                uVar9 = uVar15;
                func_0x000107c5ee30();
                func_0x000107c61170(uVar15);
                uVar1 = (uint)((ulong)puVar12 >> 0x20);
                uVar13 = uVar1 >> 0x1e;
                if (uVar1 >> 0x1e < 2) {
                  if (uVar13 == 0) {
                    uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
                  }
                  else {
                    iVar14 = (int)(uVar9 >> 0x20);
                    if (SBORROW4(iVar14,(int)uVar9)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8460);
                      (*pcVar2)();
                    }
                    uVar15 = (ulong)(iVar14 - (int)uVar9);
                  }
LAB_1024a8330:
                  if (0 < (long)uVar15) {
                    puVar10 = PTR_PTR_1126b63f8;
                    func_0x000107c610f8(PTR_PTR_1126b63f8);
                    func_0x000107c453e4();
                    func_0x000107c5a26c();
                    func_0x000107c61170(uVar4);
                    uVar6 = 0;
                    uVar4 = uVar8;
                    func_0x000107c5ee24(0,uVar8,puVar11);
                    func_0x000107c5fadc();
                    func_0x000107c6142c(uVar4);
                    func_0x000107c559a4(puVar10);
                    func_0x000107c61170(uVar6);
                    uVar6 = 0;
                    uVar4 = uVar9;
                    func_0x000107c5ee24(0,uVar9,puVar12);
                    func_0x000107c5fadc();
                    func_0x000107c6142c(uVar4);
                    func_0x000107c55938(puVar10);
                    func_0x000107c61170(uVar6);
                    func_0x00010006c090(uVar9,puVar12);
                    func_0x00010006c090(uVar8,puVar11);
                    func_0x000107c61170(uVar3);
                    func_0x000107c61170(uStack_b8);
                    func_0x000107c61170(uVar5);
                    return puVar10;
                  }
                }
                else if (uVar13 == 2) {
                  uVar15 = *(long *)(uVar9 + 0x18) - *(long *)(uVar9 + 0x10);
                  if (SBORROW8(*(long *)(uVar9 + 0x18),*(long *)(uVar9 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a8320);
                    (*pcVar2)();
                  }
                  goto LAB_1024a8330;
                }
                func_0x000107c61170(uVar5);
                func_0x000107c61170(uStack_b8);
                func_0x000107c61170(uVar3);
                func_0x000107c61170(uVar4);
                func_0x00010006c090(uVar9,puVar12);
                goto LAB_1024a8430;
              }
            }
            else if (uVar13 == 2) {
              uVar15 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
              if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a825c);
                (*pcVar2)();
              }
              goto LAB_1024a826c;
            }
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uStack_b8);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar4);
LAB_1024a8430:
            func_0x00010006c090(uVar8,puVar11);
            return (undefined *)0x0;
          }
          func_0x000107c61170(uStack_b8);
          uStack_b8 = uVar5;
        }
      }
      func_0x000107c61170(uStack_b8);
    }
  }
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
LAB_1024a81f4:
  func_0x000107c61170(uVar3);
  return (undefined *)0x0;
}



/* Entry: 1024a8490; end: 1024a8707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024a8490(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 auStack_90 [2];
  undefined8 auStack_80 [2];
  
  lVar2 = 0;
  uVar7 = param_2;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar10 = (double)*(long *)(param_3 + _DAT_112f17a00);
  lVar9 = *(long *)(param_3 + _DAT_112f17a10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  puVar5 = PTR_PTR_1126b0ec8;
  func_0x000107c610f8(PTR_PTR_1126b0ec8);
  *(undefined8 *)((long)auStack_90 + lVar1) = 0;
  *(undefined8 *)((long)auStack_90 + lVar1 + 8) = 0;
  *(undefined8 *)((long)auStack_80 + lVar1) = 0;
  func_0x000107c49544(dVar10,(double)lVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  if (param_4 != 0) {
    func_0x000107c5d7e8();
    func_0x000107c61180();
    if (param_4 != 0) {
      lVar9 = param_4;
      func_0x000107c5faec();
      func_0x000107c61170(param_4);
      goto LAB_1024a85f8;
    }
  }
  lVar9 = 0;
  uVar7 = 0xe000000000000000;
LAB_1024a85f8:
  func_0x000107c61174(puVar5);
  func_0x000107c5eea0(&stack0xffffffffffffff90 + lVar1);
  func_0x000107c5ee8c();
  (**(code **)(lVar8 + 8))(&stack0xffffffffffffff90 + lVar1,lVar2);
  puVar3 = PTR_PTR_1126b0ed0;
  func_0x000107c610f8(PTR_PTR_1126b0ed0);
  uVar6 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(lVar9,uVar7);
  func_0x000107c6142c(uVar7);
  *(undefined2 *)((long)auStack_80 + lVar1) = 0;
  func_0x000107c48794(dVar10 * 1000.0,puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c59d10(puVar3);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 1024a8708; end: 1024a96bf;  */

/* WARNING: Possible PIC construction at 0x0001024a886c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a88e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a89d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a92e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a93a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a95d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a95fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a962c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a963c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a9330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a91cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a90b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a90c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a90f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a89fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a8c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a8a00) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a0c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b1c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b2c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b30) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b40) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bd4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bdc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b50) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b58) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b70) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bb0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b88) */
/* WARNING: Removing unreachable block (ram,0x0001024a8bac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8afc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8d6c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8d5c) */
/* WARNING: Removing unreachable block (ram,0x0001024a90f4) */
/* WARNING: Removing unreachable block (ram,0x0001024a90c8) */
/* WARNING: Removing unreachable block (ram,0x0001024a90b4) */
/* WARNING: Removing unreachable block (ram,0x0001024a91d0) */
/* WARNING: Removing unreachable block (ram,0x0001024a9334) */
/* WARNING: Removing unreachable block (ram,0x0001024a9508) */
/* WARNING: Removing unreachable block (ram,0x0001024a9684) */
/* WARNING: Removing unreachable block (ram,0x0001024a9674) */
/* WARNING: Removing unreachable block (ram,0x0001024a9698) */
/* WARNING: Removing unreachable block (ram,0x0001024a9654) */
/* WARNING: Removing unreachable block (ram,0x0001024a9690) */
/* WARNING: Removing unreachable block (ram,0x0001024a9640) */
/* WARNING: Removing unreachable block (ram,0x0001024a9630) */
/* WARNING: Removing unreachable block (ram,0x0001024a9600) */
/* WARNING: Removing unreachable block (ram,0x0001024a95d4) */
/* WARNING: Removing unreachable block (ram,0x0001024a95dc) */
/* WARNING: Removing unreachable block (ram,0x0001024a95ec) */
/* WARNING: Removing unreachable block (ram,0x0001024a9584) */
/* WARNING: Removing unreachable block (ram,0x0001024a9664) */
/* WARNING: Removing unreachable block (ram,0x0001024a95a0) */
/* WARNING: Removing unreachable block (ram,0x0001024a956c) */
/* WARNING: Removing unreachable block (ram,0x0001024a9404) */
/* WARNING: Removing unreachable block (ram,0x0001024a9474) */
/* WARNING: Removing unreachable block (ram,0x0001024a9510) */
/* WARNING: Removing unreachable block (ram,0x0001024a94a0) */
/* WARNING: Removing unreachable block (ram,0x0001024a9454) */
/* WARNING: Removing unreachable block (ram,0x0001024a9520) */
/* WARNING: Removing unreachable block (ram,0x0001024a93ac) */
/* WARNING: Removing unreachable block (ram,0x0001024a92ec) */
/* WARNING: Removing unreachable block (ram,0x0001024a906c) */
/* WARNING: Removing unreachable block (ram,0x0001024a91e0) */
/* WARNING: Removing unreachable block (ram,0x0001024a92f8) */
/* WARNING: Removing unreachable block (ram,0x0001024a92a8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fa4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8eb8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8f24) */
/* WARNING: Removing unreachable block (ram,0x0001024a8f34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fc8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fd8) */
/* WARNING: Removing unreachable block (ram,0x0001024a9350) */
/* WARNING: Removing unreachable block (ram,0x0001024a8fe0) */
/* WARNING: Removing unreachable block (ram,0x0001024a9118) */
/* WARNING: Removing unreachable block (ram,0x0001024a92e8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8ff4) */
/* WARNING: Removing unreachable block (ram,0x0001024a9180) */
/* WARNING: Removing unreachable block (ram,0x0001024a9020) */
/* WARNING: Removing unreachable block (ram,0x0001024a8f3c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8de8) */
/* WARNING: Removing unreachable block (ram,0x0001024a9078) */
/* WARNING: Removing unreachable block (ram,0x0001024a90d8) */
/* WARNING: Removing unreachable block (ram,0x0001024a90f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a907c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8e34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8da0) */
/* WARNING: Removing unreachable block (ram,0x0001024a89d4) */
/* WARNING: Removing unreachable block (ram,0x0001024a88e4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c78) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c7c) */
/* WARNING: Removing unreachable block (ram,0x0001024a88f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c8c) */
/* WARNING: Removing unreachable block (ram,0x0001024a88f8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8918) */
/* WARNING: Removing unreachable block (ram,0x0001024a8934) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a1c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a34) */
/* WARNING: Removing unreachable block (ram,0x0001024a8938) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c74) */
/* WARNING: Removing unreachable block (ram,0x0001024a8944) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c70) */
/* WARNING: Removing unreachable block (ram,0x0001024a895c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8920) */
/* WARNING: Removing unreachable block (ram,0x0001024a8928) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c54) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c98) */
/* WARNING: Removing unreachable block (ram,0x0001024a8974) */
/* WARNING: Removing unreachable block (ram,0x0001024a89f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8990) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a04) */
/* WARNING: Removing unreachable block (ram,0x0001024a89ac) */
/* WARNING: Removing unreachable block (ram,0x0001024a89c4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a38) */
/* WARNING: Removing unreachable block (ram,0x0001024a8aac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8a50) */
/* WARNING: Removing unreachable block (ram,0x0001024a8abc) */
/* WARNING: Removing unreachable block (ram,0x0001024a89cc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8870) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c48) */
/* WARNING: Removing unreachable block (ram,0x0001024a8888) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c60) */
/* WARNING: Removing unreachable block (ram,0x0001024a8ca0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cac) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cd0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cb4) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cdc) */
/* WARNING: Removing unreachable block (ram,0x0001024a8cc0) */
/* WARNING: Removing unreachable block (ram,0x0001024a8d74) */
/* WARNING: Removing unreachable block (ram,0x0001024a889c) */
/* WARNING: Removing unreachable block (ram,0x0001024a8c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a8708(long param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_150 [32];
  long lStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_b8;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lStack_130 = (long)(auStack_150 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    uVar3 = 0;
    FUN_102db02e4(0);
    lVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (lVar4 != 0) {
      uStack_b8 = ((ulong *)(lVar4 + _DAT_112f17a28))[1];
      if (uStack_b8 != 0) {
        uStack_f8 = *(ulong *)(lVar4 + _DAT_112f17a28);
        uVar1 = uStack_f8 & 0xffffffffffff;
        if ((uStack_b8 & 0x2000000000000000) != 0) {
          uVar1 = uStack_b8 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          uVar7 = *(undefined8 *)(lVar4 + _DAT_112f17a20);
          uVar3 = uVar7;
          puStack_128 = auStack_150 + -extraout_x8;
          lStack_120 = lVar8;
          lStack_118 = lVar2;
          uStack_110 = param_3;
          lStack_f0 = lVar4;
          func_0x000107c61174(uVar7);
          func_0x000107c61174();
          lStack_e8 = param_1;
          func_0x000107c61434(uStack_b8);
          func_0x000107c5ee30(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar3);
          return;
        }
      }
    }
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (code *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100dfa3f0(puVar6);
    (*param_2)(puVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
    return;
  }
  return;
}



/* Entry: 1024a96c0; end: 1024a96d7;  */

void FUN_1024a96c0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1024a96d8; end: 1024a9757;  */

undefined8 FUN_1024a96d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1024a9758; end: 1024aa06b;  */

void FUN_1024a9758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eb08,&UNK_10daaeec0);
  puVar1 = &UNK_110512ce8;
  func_0x000107c613fc(&UNK_110512ce8,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x0001000823a8(0x1024a993c,puVar1);
  return;
}



/* Entry: 1024aa06c; end: 1024aa07b;  */

undefined1  [16] FUN_1024aa06c(void)

{
  return ZEXT816(0x110512d10);
}



/* Entry: 1024aa07c; end: 1024aa0fb;  */

void FUN_1024aa07c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eb10,&UNK_10daaef40);
  puVar1 = &UNK_110512dd8;
  func_0x000107c613fc(&UNK_110512dd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024aa0fc,puVar1);
  return;
}



/* Entry: 1024aa0fc; end: 1024aa243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024aa0fc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000100083b20(&puStack_98);
  puVar4 = puStack_98;
  func_0x000100083b20(&puStack_98);
  puVar5 = puStack_98;
  plVar1 = (long *)(puStack_98 + _DAT_112fb9908);
  func_0x000107c61428(plVar1,auStack_68,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  func_0x0001024aa254(lVar2,lVar3);
  puVar6 = puVar4;
  func_0x000107c4ac3c(puVar4);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  ppuVar8 = (undefined **)0x0;
  if (lVar2 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1024aa264;
    puStack_80 = &UNK_110512e10;
    ppuVar8 = &puStack_98;
    lStack_78 = lVar2;
    lStack_70 = lVar3;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(lStack_70);
  }
  puVar9 = PTR_PTR_1126ceeb0;
  func_0x000107c610f8();
  func_0x000107c465bc();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  *param_1 = puVar9;
  return;
}



/* Entry: 1024aa244; end: 1024aa263;  */

undefined1  [16] FUN_1024aa244(void)

{
  return ZEXT816(0x110512e00);
}



/* Entry: 1024aa264; end: 1024aa2b3;  */

void FUN_1024aa264(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1024aa2b4; end: 1024aa2cf;  */

void FUN_1024aa2b4(long param_1,long param_2)

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



/* Entry: 1024aa2d0; end: 1024aa373;  */

void FUN_1024aa2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eb18,&UNK_10daaefa0);
  puVar1 = &UNK_110512ef0;
  func_0x000107c613fc(&UNK_110512ef0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1024aa618,puVar1);
  return;
}



/* Entry: 1024aa374; end: 1024aa617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024aa374(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  
  lVar5 = 0x112d373d8;
  puStack_a8 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_b0 + -extraout_x8;
  func_0x000100083b20(alStack_78);
  lVar1 = alStack_78[0];
  func_0x000100083b20(alStack_78);
  lVar2 = alStack_78[0];
  func_0x000100083b20(alStack_78);
  lVar3 = alStack_78[0];
  func_0x000100083b20(alStack_78);
  lVar5 = _DAT_112fb98a0;
  func_0x000107c61428(alStack_78[0] + _DAT_112fb98a0,alStack_78,0,0);
  lVar6 = _DAT_112fb98d8;
  uStack_98 = *(undefined8 *)(alStack_78[0] + lVar5);
  func_0x000107c61428(alStack_78[0] + _DAT_112fb98d8,auStack_90,0,0);
  uStack_a0 = *(undefined8 *)(alStack_78[0] + lVar6);
  lVar5 = lVar2;
  func_0x000107c4fd08();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar6;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c3cf28();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        func_0x000107c5ee94(puVar12,lVar6);
        func_0x000107c61170(lVar6);
        uVar10 = 0;
        goto LAB_1024aa500;
      }
    }
  }
  uVar10 = 1;
LAB_1024aa500:
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar7 + -8);
  (**(code **)(lVar13 + 0x38))(puVar12,uVar10,1,lVar7);
  lVar5 = lVar3;
  func_0x000107c444a4(lVar3);
  func_0x000107c61180();
  lVar6 = lVar1;
  func_0x000107c3fa04(lVar1);
  func_0x000107c61180();
  puVar8 = puVar12;
  (**(code **)(lVar13 + 0x30))(puVar12,1,lVar7);
  puVar11 = (undefined1 *)0x0;
  if ((int)puVar8 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar13 + 8))(puVar12,lVar7);
    puVar11 = puVar8;
  }
  puVar9 = PTR_PTR_1126cc590;
  func_0x000107c610f8();
  func_0x000107c479e0();
  func_0x000107c61170(lVar5);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar11);
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c61170(alStack_78[0]);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    *puStack_a8 = puVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1024aa618);
  (*pcVar4)();
}



/* Entry: 1024aa618; end: 1024aa633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024aa618(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  
  lVar5 = 0x112d373d8;
  puStack_a8 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_b0 + -extraout_x8;
  func_0x000100083b20(alStack_78);
  lVar1 = alStack_78[0];
  func_0x000100083b20(alStack_78);
  lVar2 = alStack_78[0];
  func_0x000100083b20(alStack_78);
  lVar3 = alStack_78[0];
  func_0x000100083b20(alStack_78);
  lVar5 = _DAT_112fb98a0;
  func_0x000107c61428(alStack_78[0] + _DAT_112fb98a0,alStack_78,0,0);
  lVar6 = _DAT_112fb98d8;
  uStack_98 = *(undefined8 *)(alStack_78[0] + lVar5);
  func_0x000107c61428(alStack_78[0] + _DAT_112fb98d8,auStack_90,0,0);
  uStack_a0 = *(undefined8 *)(alStack_78[0] + lVar6);
  lVar5 = lVar2;
  func_0x000107c4fd08();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar6;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c3cf28();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        func_0x000107c5ee94(puVar12,lVar6);
        func_0x000107c61170(lVar6);
        uVar10 = 0;
        goto LAB_1024aa500;
      }
    }
  }
  uVar10 = 1;
LAB_1024aa500:
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar7 + -8);
  (**(code **)(lVar13 + 0x38))(puVar12,uVar10,1,lVar7);
  lVar5 = lVar3;
  func_0x000107c444a4(lVar3);
  func_0x000107c61180();
  lVar6 = lVar1;
  func_0x000107c3fa04(lVar1);
  func_0x000107c61180();
  puVar8 = puVar12;
  (**(code **)(lVar13 + 0x30))(puVar12,1,lVar7);
  puVar11 = (undefined1 *)0x0;
  if ((int)puVar8 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar13 + 8))(puVar12,lVar7);
    puVar11 = puVar8;
  }
  puVar9 = PTR_PTR_1126cc590;
  func_0x000107c610f8();
  func_0x000107c479e0();
  func_0x000107c61170(lVar5);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar11);
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c61170(alStack_78[0]);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    *puStack_a8 = puVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1024aa618);
  (*pcVar4)();
}



/* Entry: 1024aa634; end: 1024aac23;  */

void FUN_1024aa634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eb20,&UNK_10daaf020);
  puVar1 = &UNK_110512fe0;
  func_0x000107c613fc(&UNK_110512fe0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x1024aa738,puVar1);
  return;
}



/* Entry: 1024aac24; end: 1024aac33;  */

undefined1  [16] FUN_1024aac24(void)

{
  return ZEXT816(0x110513008);
}



/* Entry: 1024aac34; end: 1024aaf2f;  */

undefined * FUN_1024aac34(long param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar10 = 0x112d37798;
    func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar8,uVar10);
    puVar11 = puVar8;
  }
  uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar11);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar13 << 6;
      func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar9 * 0x28,auStack_98);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar10;
      func_0x0001007bbd18(auStack_98,&uStack_178);
      uStack_180 = uVar10;
      func_0x000107c615f4(uVar10,2);
      func_0x000107c6147c(auStack_150,&uStack_180,PTR___syXlN_11034f1a0 + 8,PTR___sypN_11034f1a8 + 8
                          ,7);
      FUN_1024aaf30(auStack_98,0x112e9eb28,&UNK_10daaf0a0);
      if (lStack_160 == 0) {
        func_0x000107c61574(param_1);
        FUN_1024aaf30(&uStack_178,0x112d55e70,&UNK_10d92d170);
        func_0x000107c61574(puVar11);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024aaf30);
        (*pcVar1)();
      }
      uStack_128 = uStack_170;
      uStack_130 = uStack_178;
      lStack_118 = lStack_160;
      uStack_120 = uStack_168;
      uStack_110 = uStack_158;
      func_0x000100102924(auStack_150,auStack_108);
      uStack_b8 = uStack_128;
      uStack_c0 = uStack_130;
      lStack_a8 = lStack_118;
      uStack_b0 = uStack_120;
      uStack_a0 = uStack_110;
      func_0x000100102924(auStack_108,auStack_e0);
      uVar3 = *(ulong *)(puVar11 + 0x28);
      func_0x000107c602c4();
      uVar7 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
      uVar4 = uVar3 >> 6;
      uVar9 = -1L << (uVar3 & 0x3f) & (*(ulong *)(puVar11 + uVar4 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar9 == 0) {
        bVar2 = false;
        uVar9 = 0x3f - uVar7 >> 6;
        do {
          uVar3 = uVar4 + 1;
          if ((uVar3 == uVar9) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1024aaf04);
            (*pcVar1)();
          }
          uVar4 = 0;
          if (uVar3 != uVar9) {
            uVar4 = uVar3;
          }
          bVar2 = (bool)(uVar3 == uVar9 | bVar2);
        } while (*(ulong *)(puVar11 + uVar4 * 8 + 0x40) == 0xffffffffffffffff);
        uVar9 = ~*(ulong *)(puVar11 + uVar4 * 8 + 0x40);
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar4 << 6;
      }
      else {
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar3 & 0x7fffffffffffffc0;
      }
      uVar4 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar11 + uVar4 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar11 + uVar4 + 0x40)
      ;
      puVar6 = (undefined8 *)(*(long *)(puVar11 + 0x30) + uVar9 * 0x28);
      puVar6[1] = uStack_b8;
      *puVar6 = uStack_c0;
      puVar6[3] = lStack_a8;
      puVar6[2] = uStack_b0;
      puVar6[4] = uStack_a0;
      func_0x000100102924(auStack_e0,*(long *)(puVar11 + 0x38) + uVar9 * 0x20);
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024aaf00);
      (*pcVar1)();
    }
    if ((long)(uVar5 + 0x3f >> 6) <= lVar13) break;
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(puVar11);
  func_0x000107c61574(param_1);
  return puVar11;
}



/* Entry: 1024aaf30; end: 1024aaf6f;  */

undefined8 FUN_1024aaf30(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1024aaf70; end: 1024aafef;  */

void FUN_1024aaf70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eb30,&UNK_10daaf0b0);
  puVar1 = &UNK_1105130d0;
  func_0x000107c613fc(&UNK_1105130d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024aaff0,puVar1);
  return;
}



/* Entry: 1024aaff0; end: 1024ab097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024aaff0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000100083b20(&uStack_48);
  puVar2 = PTR_PTR_1126aa918;
  func_0x000107c610f8();
  func_0x000107c46a94();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 1024ab098; end: 1024ab0a7;  */

undefined1  [16] FUN_1024ab098(void)

{
  return ZEXT816(0x1105130f8);
}



/* Entry: 1024ab0a8; end: 1024ab0db;  */

void FUN_1024ab0a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0a3890);
  uRam0000000113804718 = uVar1;
  return;
}



/* Entry: 1024ab0dc; end: 1024ab1f7;  */

void FUN_1024ab0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eb38,&UNK_10daaf110);
  puVar1 = &UNK_1105131c0;
  func_0x000107c613fc(&UNK_1105131c0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1024ab174,puVar1);
  return;
}



/* Entry: 1024ab1f8; end: 1024ab23f;  */

void FUN_1024ab1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1024ac430(param_1,param_2,param_3);
  return;
}



/* Entry: 1024ab240; end: 1024ab253; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ab240(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9eb58,param_3);
  return;
}



/* Entry: 1024ab254; end: 1024ab27f; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin type] */

void FUN_1024ab254(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024ab280; end: 1024ab283; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin extraPropertiesProvider] */

void FUN_1024ab280(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1024ab284; end: 1024ab297; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ab284(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9eb60,param_3);
  return;
}



/* Entry: 1024ab298; end: 1024ab333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ab298(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61604(unaff_x20 + _DAT_112e9eb58,0);
  func_0x000107c61604(unaff_x20 + _DAT_112e9eb60,0);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e9eb68);
  func_0x000107c4b940(uVar3);
  lVar1 = _DAT_112e9eb70;
  func_0x000107c61428(unaff_x20 + _DAT_112e9eb70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar2);
  func_0x000107c5d278(uVar3);
  return;
}



/* Entry: 1024ab334; end: 1024ab35b; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin teardown] */

void FUN_1024ab334(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024ab298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024ab35c; end: 1024ab363; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin playlistDataSource] */

void FUN_1024ab35c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1024ab364; end: 1024ab41f; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin addEventListenersWithEventAnnouncing:] */

/* WARNING: Possible PIC construction at 0x0001024ab400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ab404) */

void FUN_1024ab364(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000103bb4b7c();
  uVar1 = param_1[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_1;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  func_0x000107c3d744(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1024ab420; end: 1024ab4d7; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x0001024ab4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ab4c0) */

void FUN_1024ab420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1024ac6e8(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024ab4d8; end: 1024ab54b;  */

void FUN_1024ab4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024ab54c,uVar1,uVar2);
  return;
}



/* Entry: 1024ab54c; end: 1024ab6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ab54c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar5 = 0xf1;
    func_0x00010439b428(0xf1,0xf8);
    func_0x0001003604c8(0);
    func_0x000107c610f8();
    puVar6 = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    func_0x000107c61174(uVar5);
    lVar7 = lVar8;
    func_0x000107c61174();
    func_0x000103b67ad8(puVar4,uVar1,uVar3,uVar9,uVar2,0,0,uVar5,lVar8);
    puVar10 = (undefined8 *)(unaff_x22 + 0x30);
    *puVar10 = puVar4;
    func_0x00010008a7c8(unaff_x22 + 0x28,puVar10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000100083b20(puVar10);
    func_0x000107c61574(uVar9);
    uVar9 = *puVar10;
    func_0x000107c3e2c0(puVar6);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001024ab6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024ab6fc; end: 1024ab737;  */

void FUN_1024ab6fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001024ab734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1024ab738; end: 1024ab73b; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin didDismissFanPassSubscriptionScopeWithError:] */

void FUN_1024ab738(void)

{
  return;
}



/* Entry: 1024ab73c; end: 1024ab8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ab73c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112e9eb78))[1];
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e9eb78);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61434(lVar4);
    func_0x000107c41570(puVar2);
    func_0x000107c61180();
    if (lRam00000001134bb130 != -1) {
      func_0x000107c61568(0x1134bb130,FUN_1024ab0a8);
    }
    lVar3 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar1 = PTR___sSSN_11034da80;
    uStack_b8 = 0xd000000000000025;
    uStack_b0 = 0x800000010f0a3770;
    func_0x000107c602d4(lVar3 + 0x20,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    *(undefined **)(lVar3 + 0x60) = puVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar5;
    *(long *)(lVar3 + 0x50) = lVar4;
    lVar4 = lVar3;
    func_0x000100dfa3f0(lVar3);
    func_0x000107c61588(lVar3);
    FUN_1024aca90(lVar3 + 0x20,0x112d377a0,&UNK_10d9016e0);
    lVar3 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    func_0x000107c4eb8c(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1024ab8d0; end: 1024ab8f7; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin fanPassSubscriptionScopeDidSubscribe] */

void FUN_1024ab8d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024ab73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024ab8f8; end: 1024ac343;  */

/* WARNING: Possible PIC construction at 0x0001024aba34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024ac190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024ac130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abc04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024abb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ac134) */
/* WARNING: Removing unreachable block (ram,0x0001024abc78) */
/* WARNING: Removing unreachable block (ram,0x0001024abd38) */
/* WARNING: Removing unreachable block (ram,0x0001024abd3c) */
/* WARNING: Removing unreachable block (ram,0x0001024ac194) */
/* WARNING: Removing unreachable block (ram,0x0001024ac198) */
/* WARNING: Removing unreachable block (ram,0x0001024aba38) */
/* WARNING: Removing unreachable block (ram,0x0001024aba48) */
/* WARNING: Removing unreachable block (ram,0x0001024aba74) */
/* WARNING: Removing unreachable block (ram,0x0001024aba90) */
/* WARNING: Removing unreachable block (ram,0x0001024aba94) */
/* WARNING: Removing unreachable block (ram,0x0001024abaac) */
/* WARNING: Removing unreachable block (ram,0x0001024abac0) */
/* WARNING: Removing unreachable block (ram,0x0001024abad4) */
/* WARNING: Removing unreachable block (ram,0x0001024abaec) */
/* WARNING: Removing unreachable block (ram,0x0001024abafc) */
/* WARNING: Removing unreachable block (ram,0x0001024abc30) */
/* WARNING: Removing unreachable block (ram,0x0001024abc34) */
/* WARNING: Removing unreachable block (ram,0x0001024abb04) */
/* WARNING: Removing unreachable block (ram,0x0001024abc8c) */
/* WARNING: Removing unreachable block (ram,0x0001024abd64) */
/* WARNING: Removing unreachable block (ram,0x0001024abc40) */
/* WARNING: Removing unreachable block (ram,0x0001024abd70) */
/* WARNING: Removing unreachable block (ram,0x0001024abc80) */
/* WARNING: Removing unreachable block (ram,0x0001024abca4) */
/* WARNING: Removing unreachable block (ram,0x0001024abb20) */
/* WARNING: Removing unreachable block (ram,0x0001024abcc0) */
/* WARNING: Removing unreachable block (ram,0x0001024abcd0) */
/* WARNING: Removing unreachable block (ram,0x0001024abd20) */
/* WARNING: Removing unreachable block (ram,0x0001024abd30) */
/* WARNING: Removing unreachable block (ram,0x0001024abcd8) */
/* WARNING: Removing unreachable block (ram,0x0001024abd40) */
/* WARNING: Removing unreachable block (ram,0x0001024abd74) */
/* WARNING: Removing unreachable block (ram,0x0001024abd58) */
/* WARNING: Removing unreachable block (ram,0x0001024abd8c) */
/* WARNING: Removing unreachable block (ram,0x0001024abcdc) */
/* WARNING: Removing unreachable block (ram,0x0001024abdac) */
/* WARNING: Removing unreachable block (ram,0x0001024abddc) */
/* WARNING: Removing unreachable block (ram,0x0001024abdf8) */
/* WARNING: Removing unreachable block (ram,0x0001024abe28) */
/* WARNING: Removing unreachable block (ram,0x0001024abe44) */
/* WARNING: Removing unreachable block (ram,0x0001024abeb0) */
/* WARNING: Removing unreachable block (ram,0x0001024abfe8) */
/* WARNING: Removing unreachable block (ram,0x0001024abfd0) */
/* WARNING: Removing unreachable block (ram,0x0001024abfec) */
/* WARNING: Removing unreachable block (ram,0x0001024ac0a8) */
/* WARNING: Removing unreachable block (ram,0x0001024ac060) */
/* WARNING: Removing unreachable block (ram,0x0001024ac0f8) */
/* WARNING: Removing unreachable block (ram,0x0001024ac150) */
/* WARNING: Removing unreachable block (ram,0x0001024abc08) */
/* WARNING: Removing unreachable block (ram,0x0001024ac0fc) */
/* WARNING: Removing unreachable block (ram,0x0001024abe48) */
/* WARNING: Removing unreachable block (ram,0x0001024abe58) */
/* WARNING: Removing unreachable block (ram,0x0001024abea8) */
/* WARNING: Removing unreachable block (ram,0x0001024abe60) */
/* WARNING: Removing unreachable block (ram,0x0001024ac168) */
/* WARNING: Removing unreachable block (ram,0x0001024abe90) */
/* WARNING: Removing unreachable block (ram,0x0001024ac16c) */
/* WARNING: Removing unreachable block (ram,0x0001024abb6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ab8f8(undefined8 param_1,undefined *param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e9eb50);
  lVar1 = lVar5;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar2);
    if ((int)lVar1 != 0) {
      func_0x000107c42e5c();
      func_0x000107c61180();
      lVar1 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c42de8();
        func_0x000107c615e8(lVar1);
        if (0 < lVar2) {
          if (param_3 == 0) {
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            puVar6 = *(undefined **)(param_3 + _DAT_11307abc8);
            ppuVar3 = &PTR____CFConstantStringClassReference_110f0de98;
            func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0de98);
            if (*(long *)(puVar6 + 0x10) != 0) {
              func_0x000107c61434(puVar6);
              puVar4 = param_2;
              func_0x000100029284(ppuVar3);
              if (((ulong)puVar4 & 1) != 0) {
                func_0x0001000bb420(*(long *)(puVar6 + 0x38) + (long)ppuVar3 * 0x20,&uStack_80);
                puVar6 = param_2;
              }
              goto code_r0x000107c6142c;
            }
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            func_0x000107c6142c(param_2);
          }
          FUN_1024aca90(&uStack_80,0x112d387f8,&UNK_10d902650);
          puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (param_4 == (code *)0x0) {
            return;
          }
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
          func_0x000100dfa3f0(puVar4);
          (*param_4)(puVar6,puVar4);
          goto code_r0x000107c6142c;
        }
      }
    }
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 == (code *)0x0) {
    return;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100dfa3f0(puVar4);
  (*param_4)(puVar6,puVar4);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
  return;
}



/* Entry: 1024ac344; end: 1024ac42f; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x0001024ac400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024ac410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ac404) */
/* WARNING: Removing unreachable block (ram,0x0001024ac414) */

void FUN_1024ac344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110513208;
    func_0x000107c613fc(&UNK_110513208,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_1024acb00;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1024ab8f8(param_3,param_4,param_5,pcVar3,puVar2);
  FUN_1024a96c0(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024ac430; end: 1024ac51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ac430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e9eb58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e9eb60,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9eb78);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112e9eb68;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112e9eb70;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1024ac5ec();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9eb40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9eb48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9eb50) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024ac51c; end: 1024ac54f;  */

void FUN_1024ac51c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024ac550; end: 1024ac5eb; -[_TtC35SCFanPassSubscribeButtonOperaPlugin35SCFanPassSubscribeButtonOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024ac5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ac5c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ac550(long param_1)

{
  func_0x000100cf4fd0(param_1 + _DAT_112e9eb58);
  func_0x000100cf4fd0(param_1 + _DAT_112e9eb60);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9eb40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9eb48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9eb50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e9eb78 + 8))
  ;
  return;
}



/* Entry: 1024ac5ec; end: 1024ac6e7;  */

undefined * FUN_1024ac5ec(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5a4b0,&UNK_10d9212e0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ac6e4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ac6e8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1024ac6e8; end: 1024aca8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ac6e8(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar2 = param_1;
  func_0x000103bb4b7c();
  if ((param_1 != (long *)*plVar2 || param_2 != plVar2[1]) &&
     (func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0), ((ulong)param_1 & 1) == 0))
  {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar10 = *(long *)(param_3 + _DAT_11307abc8);
  if (*(long *)(lVar10 + 0x10) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    func_0x000107c61174(param_3);
LAB_1024ac81c:
    FUN_1024aca90(&uStack_80,0x112d387f8,&UNK_10d902650);
    uVar13 = 0;
    lVar11 = 0;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_1024ac7ec;
LAB_1024ac844:
    func_0x000107c61434(lVar10);
    uVar9 = 0;
    lVar4 = -0x2fffffffffffffdd;
    func_0x000100029284(0xd000000000000023);
    if ((uVar9 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar10 + 0x38) + lVar4 * 0x20,&uStack_80);
    }
    func_0x000107c6142c(lVar10);
    if (lStack_68 != 0) {
      puVar3 = &uStack_90;
      func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar10 = lStack_88;
      uVar1 = uStack_90;
      if ((int)puVar3 == 0) {
        uVar1 = 0;
        lVar10 = 0;
      }
      lVar4 = lVar10;
      if ((lVar11 != 0) && (lVar10 != 0)) {
        lVar5 = unaff_x20 + _DAT_112e9eb60;
        func_0x000107c61618();
        lVar4 = lStack_88;
        if (lVar5 != 0) {
          func_0x000107c61434(lVar11);
          func_0x000107c61434(lVar10);
          lVar6 = lVar5;
          func_0x000107c5d1b8();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
          if (lVar6 == 0) {
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(lVar11);
          }
          else {
            lVar5 = lVar6;
            func_0x000107c5d1b4();
            func_0x000107c61180();
            func_0x000107c615e8(lVar6);
            puVar3 = (undefined8 *)(unaff_x20 + _DAT_112e9eb78);
            uVar12 = puVar3[1];
            *puVar3 = uVar13;
            puVar3[1] = lVar11;
            func_0x000107c61434(lVar11);
            func_0x000107c6142c(uVar12);
            puVar7 = &UNK_110513230;
            func_0x000107c613fc(&UNK_110513230,0x18,7);
            func_0x000107c61614(puVar7 + 0x10);
            puVar8 = &UNK_110513258;
            func_0x000107c613fc(&UNK_110513258,0x40,7);
            *(undefined **)(puVar8 + 0x10) = puVar7;
            *(long *)(puVar8 + 0x18) = lVar5;
            *(undefined8 *)(puVar8 + 0x20) = uVar13;
            *(long *)(puVar8 + 0x28) = lVar11;
            *(undefined8 *)(puVar8 + 0x30) = uVar1;
            *(long *)(puVar8 + 0x38) = lVar10;
            puVar7 = &UNK_110513280;
            func_0x000107c613fc(&UNK_110513280,0x20,7);
            *(undefined **)(puVar7 + 0x10) = &UNK_10daaf198;
            *(undefined **)(puVar7 + 0x18) = puVar8;
            func_0x000107c61174(lVar5);
            func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daaf1a8,puVar7,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574();
            func_0x000107c61574(puVar7);
            func_0x000107c61170(lVar5);
          }
        }
      }
      goto LAB_1024aca58;
    }
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61434(lVar10);
    lVar11 = -0x2fffffffffffffdb;
    uVar9 = 0;
    func_0x000100029284(0xd000000000000025);
    if ((uVar9 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c6142c(lVar10);
      goto LAB_1024ac81c;
    }
    func_0x0001000bb420(*(long *)(lVar10 + 0x38) + lVar11 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar10);
    if (lStack_68 == 0) goto LAB_1024ac81c;
    puVar3 = &uStack_90;
    func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_88;
    uVar13 = uStack_90;
    if ((int)puVar3 == 0) {
      uVar13 = 0;
      lVar11 = 0;
    }
    if (*(long *)(lVar10 + 0x10) != 0) goto LAB_1024ac844;
LAB_1024ac7ec:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  FUN_1024aca90(&uStack_80,0x112d387f8,&UNK_10d902650);
  lVar4 = 0;
LAB_1024aca58:
  func_0x000107c61170(param_3);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar11);
  return;
}



/* Entry: 1024aca90; end: 1024acacf;  */

undefined8 FUN_1024aca90(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1024acad0; end: 1024acadf;  */

undefined1  [16] FUN_1024acad0(void)

{
  return ZEXT816(0x1105131e8);
}



/* Entry: 1024acae0; end: 1024acaff;  */

void FUN_1024acae0(void)

{
  func_0x000107c61168(&PTR_PTR_1128468b8);
  return;
}



/* Entry: 1024acb00; end: 1024acb07;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_1024acb00(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024acb08; end: 1024acb7f;  */

void FUN_1024acb08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1024acb80;
  plVar7[0xb] = lVar1;
  plVar7[0xc] = lVar4;
  plVar7[9] = lVar5;
  plVar7[10] = lVar3;
  plVar7[7] = lVar6;
  plVar7[8] = lVar2;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xd] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024ab54c,lVar5,lVar6);
  return;
}



/* Entry: 1024acb80; end: 1024acbbb;  */

void FUN_1024acb80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001024acbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1024acbbc; end: 1024acc2b;  */

void FUN_1024acbbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1024acc2c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1024acc2c; end: 1024acc2f;  */

void FUN_1024acc2c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001024acbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1024acc30; end: 1024acdc7;  */

void FUN_1024acc30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9eba8,&UNK_10daaf1b0);
  puVar1 = &UNK_110513350;
  func_0x000107c613fc(&UNK_110513350,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024accb0,puVar1);
  return;
}



/* Entry: 1024acdc8; end: 1024acde7;  */

undefined1  [16] FUN_1024acdc8(void)

{
  return ZEXT816(0x110513378);
}



/* Entry: 1024acde8; end: 1024adf13;  */

void FUN_1024acde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ebb0,&UNK_10daaf260);
  puVar1 = &UNK_110513468;
  func_0x000107c613fc(&UNK_110513468,0x148,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_34;
  *(undefined8 *)(puVar1 + 0xa8) = param_19;
  *(undefined8 *)(puVar1 + 0xb0) = param_20;
  *(undefined8 *)(puVar1 + 0xb8) = param_21;
  *(undefined8 *)(puVar1 + 0xc0) = param_22;
  *(undefined8 *)(puVar1 + 200) = param_23;
  *(undefined8 *)(puVar1 + 0xd0) = param_24;
  *(undefined8 *)(puVar1 + 0xd8) = param_25;
  *(undefined8 *)(puVar1 + 0xe0) = param_26;
  *(undefined8 *)(puVar1 + 0xe8) = param_27;
  *(undefined8 *)(puVar1 + 0xf0) = param_28;
  *(undefined8 *)(puVar1 + 0xf8) = param_29;
  *(undefined8 *)(puVar1 + 0x100) = param_30;
  *(undefined8 *)(puVar1 + 0x108) = param_31;
  *(undefined8 *)(puVar1 + 0x110) = param_32;
  *(undefined8 *)(puVar1 + 0x118) = param_33;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x0001000823a8(0x1024ad104,puVar1);
  return;
}



/* Entry: 1024adf14; end: 1024adf9b;  */

long FUN_1024adf14(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
                  long param_6)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_2,param_4 & 1,param_5 & 1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  return param_6;
}



/* Entry: 1024adf9c; end: 1024adfe3;  */

void FUN_1024adf9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  uVar1 = 0x112e9ebb8;
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(0x112e9ebb8,&UNK_10daafe70);
  func_0x000107c610f8();
  uVar2 = uStack_48;
  (*(code *)&SUB_1003b3b80)(uStack_48,uVar1);
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1024adfe4; end: 1024ae077;  */

void FUN_1024adfe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c610f8();
  uVar1 = uStack_48;
  (*param_4)(uStack_48,param_2);
  uVar2 = *param_5;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1024ae078; end: 1024ae0a7;  */

undefined1  [16] FUN_1024ae078(void)

{
  return ZEXT816(0x110513490);
}



/* Entry: 1024ae0a8; end: 1024ae153;  */

void FUN_1024ae0a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3,uVar4,param_4,param_5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1024ae154; end: 1024ae177;  */

void FUN_1024ae154(long param_1,long param_2)

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



/* Entry: 1024ae178; end: 1024af56b;  */

void FUN_1024ae178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ebc0,&UNK_10daaf360);
  puVar1 = &UNK_1105135f0;
  func_0x000107c613fc(&UNK_1105135f0,0x188,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_11;
  *(undefined8 *)(puVar1 + 0x58) = param_12;
  *(undefined8 *)(puVar1 + 0x60) = param_13;
  *(undefined8 *)(puVar1 + 0x68) = param_14;
  *(undefined8 *)(puVar1 + 0x70) = param_15;
  *(undefined8 *)(puVar1 + 0x78) = param_16;
  *(undefined8 *)(puVar1 + 0x80) = param_17;
  *(undefined8 *)(puVar1 + 0x88) = param_18;
  *(undefined8 *)(puVar1 + 0x90) = param_19;
  *(undefined8 *)(puVar1 + 0x98) = param_20;
  *(undefined8 *)(puVar1 + 0xa0) = param_21;
  *(undefined8 *)(puVar1 + 0xa8) = param_22;
  *(undefined8 *)(puVar1 + 0xb0) = param_23;
  *(undefined8 *)(puVar1 + 0xb8) = param_24;
  *(undefined8 *)(puVar1 + 0xc0) = param_25;
  *(undefined8 *)(puVar1 + 200) = param_26;
  *(undefined8 *)(puVar1 + 0xd0) = param_27;
  *(undefined8 *)(puVar1 + 0xd8) = param_28;
  *(undefined8 *)(puVar1 + 0xe0) = param_29;
  *(undefined8 *)(puVar1 + 0xe8) = param_30;
  *(undefined8 *)(puVar1 + 0xf0) = param_31;
  *(undefined8 *)(puVar1 + 0xf8) = param_33;
  *(undefined8 *)(puVar1 + 0x100) = param_34;
  *(undefined8 *)(puVar1 + 0x108) = param_35;
  *(undefined8 *)(puVar1 + 0x110) = param_36;
  *(undefined8 *)(puVar1 + 0x118) = param_37;
  *(undefined8 *)(puVar1 + 0x120) = param_39;
  *(undefined8 *)(puVar1 + 0x128) = param_40;
  *(undefined8 *)(puVar1 + 0x130) = param_41;
  *(undefined8 *)(puVar1 + 0x138) = param_42;
  *(undefined8 *)(puVar1 + 0x140) = param_43;
  *(undefined8 *)(puVar1 + 0x148) = param_5;
  *(undefined8 *)(puVar1 + 0x150) = param_10;
  *(undefined8 *)(puVar1 + 0x158) = param_32;
  *(undefined8 *)(puVar1 + 0x160) = param_38;
  *(undefined8 *)(puVar1 + 0x168) = param_46;
  *(undefined8 *)(puVar1 + 0x170) = param_44;
  *(undefined8 *)(puVar1 + 0x178) = param_45;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_47);
  func_0x0001000823a8(0x1024ae53c,puVar1);
  return;
}



/* Entry: 1024af56c; end: 1024af5f3;  */

void FUN_1024af56c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e50c28;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1024af5f4; end: 1024af613;  */

undefined1  [16] FUN_1024af5f4(void)

{
  return ZEXT816(0x110513618);
}



/* Entry: 1024af614; end: 1024b0a0f;  */

void FUN_1024af614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ebc8,&UNK_10daaf400);
  puVar1 = &UNK_110513708;
  func_0x000107c613fc(&UNK_110513708,0x140,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x0001000823a8(0x1024af920,puVar1);
  return;
}


