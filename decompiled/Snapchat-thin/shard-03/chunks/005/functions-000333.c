/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102954204; end: 1029542e7;  */

void FUN_102954204(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1029542e8; end: 10295430f;  */

void FUN_1029542e8(void)

{
  func_0x00010295425c();
  return;
}



/* Entry: 102954310; end: 10295433f;  */

undefined1  [16] FUN_102954310(void)

{
  return ZEXT816(0x110571430);
}



/* Entry: 102954340; end: 1029544ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102954340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ecece8;
  func_0x000107c61614(unaff_x20 + _DAT_112ecece8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ececd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecece0) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102954500; end: 1029545bb; -[_TtC26SCPlusGiftingLinkTrayScope26SCPlusGiftingLinkTrayScope initWithUIContainer:loggingContext:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112ecece8;
  func_0x000107c61614(param_1 + _DAT_112ecece8,0);
  *(undefined8 *)(param_1 + _DAT_112ececd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ecece0) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1029545bc; end: 102954627; -[_TtC26SCPlusGiftingLinkTrayScope26SCPlusGiftingLinkTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029545bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ececd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecece0));
  param_1 = param_1 + _DAT_112ecece8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102954628; end: 10295468f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954628(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034f35c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ececf8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102954690; end: 10295472f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954690(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ececf8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102954730; end: 1029547b7; -[_TtC26SCPlusGiftingLinkTrayScope41SCPlusGiftingLinkTrayScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1029547b8; end: 1029547bb;  */

void FUN_1029547b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029547bc; end: 1029547ef;  */

void FUN_1029547bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029547f0; end: 1029547ff;  */

undefined1  [16] FUN_1029547f0(void)

{
  return ZEXT816(0x110571518);
}



/* Entry: 102954800; end: 102954813; -[_TtC26SCPlusGiftingLinkTrayScope41SCPlusGiftingLinkTrayScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ececf8));
  return;
}



/* Entry: 102954814; end: 102954833; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954814(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eced50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102954834; end: 102954843; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eced58));
  return;
}



/* Entry: 102954844; end: 10295489f; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope themeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954844(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112eced60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112eced60);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029548a0; end: 1029548e7; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029548a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eced68;
  func_0x000107c61428(param_1 + _DAT_112eced68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029548e8; end: 10295493f; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029548e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eced68;
  func_0x000107c61428(param_1 + _DAT_112eced68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102954940; end: 102954b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102954940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112eced68;
  func_0x000107c61614(unaff_x20 + _DAT_112eced68,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eced50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eced58) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eced60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  return puVar4;
}



/* Entry: 102954b48; end: 102954c3b; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope initWithUIContainer:loggingContext:themeId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954b48(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lVar3 = _DAT_112eced68;
  func_0x000107c61614(param_1 + _DAT_112eced68,0);
  *(undefined8 *)(param_1 + _DAT_112eced50) = param_3;
  *(undefined8 *)(param_1 + _DAT_112eced58) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112eced60);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  func_0x000107c61428(param_1 + lVar3,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_78,puVar2);
  return;
}



/* Entry: 102954c3c; end: 102954cbb; -[_TtC22PlusAppAppearanceScope22PlusAppAppearanceScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102954c3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eced50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eced58));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eced60 + 8));
  param_1 = param_1 + _DAT_112eced68;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102954cbc; end: 102954d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954cbc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034c60c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eced78) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102954d24; end: 102954dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954d24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eced78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102954dc4; end: 102954dc7;  */

void FUN_102954dc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102954dc8; end: 102954dfb;  */

void FUN_102954dc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102954dfc; end: 102954e0b;  */

undefined1  [16] FUN_102954dfc(void)

{
  return ZEXT816(0x1105715c8);
}



/* Entry: 102954e0c; end: 102954e1f; -[_TtC22PlusAppAppearanceScope37PlusAppAppearanceScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102954e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eced78));
  return;
}



/* Entry: 102954e20; end: 102954f5b;  */

/* WARNING: Possible PIC construction at 0x000102954eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102954efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102954f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102954f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102954f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102954f20) */
/* WARNING: Removing unreachable block (ram,0x000102954f10) */
/* WARNING: Removing unreachable block (ram,0x000102954f00) */
/* WARNING: Removing unreachable block (ram,0x000102954ef0) */
/* WARNING: Removing unreachable block (ram,0x000102954f30) */

void FUN_102954e20(undefined8 *param_1)

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
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar10 = &UNK_1105716e0;
  func_0x000107c613fc(&UNK_1105716e0,0x68,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar5;
  *(undefined8 *)(puVar10 + 0x20) = uVar11;
  *(undefined8 *)(puVar10 + 0x28) = uVar6;
  *(undefined8 *)(puVar10 + 0x30) = uVar2;
  *(undefined8 *)(puVar10 + 0x38) = uVar7;
  *(undefined8 *)(puVar10 + 0x40) = uVar3;
  *(undefined8 *)(puVar10 + 0x48) = uVar8;
  *(undefined8 *)(puVar10 + 0x50) = uVar4;
  *(undefined8 *)(puVar10 + 0x58) = uVar9;
  *(undefined8 *)(puVar10 + 0x60) = uVar13;
  uVar11 = 0x112ecedd8;
  func_0x0001000285a8(0x112ecedd8,&UNK_10daf50e8);
  func_0x000107c613fc();
  pcVar12 = FUN_102954fe0;
  func_0x0001000841fc(FUN_102954fe0,puVar10,uVar11);
  func_0x000100084214(&UNK_10daf50b0,0x32,2);
  *param_1 = pcVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102954f5c; end: 102954f6b;  */

undefined1  [16] FUN_102954f5c(void)

{
  return ZEXT816(0x1105716c0);
}



/* Entry: 102954f6c; end: 102954fdf;  */

void FUN_102954f6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102954fe0; end: 1029550eb;  */

void FUN_102954fe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ecede0,&UNK_10daf50f0);
  puVar9 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  FUN_10295c6ec(uVar10);
  func_0x000100082720("PlusUpsellNotificationScopedPlusSubscribeScopeExposerServiceProvider",0x44,2)
  ;
  FUN_102958f98(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar10,uVar7,uVar4,puVar9,uVar8,uVar13);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar9);
  func_0x000100082720("PlusUpsellNotificationImplEntryPointEntryPointProvider",0x36,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 1029550ec; end: 102955383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029550ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecedf0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ecedf0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102955384; end: 102955d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102955384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ecede8;
  puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecedf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecedf8) = 0;
  puVar6 = &DAT_112ecee00;
  *(undefined8 *)(unaff_x20 + _DAT_112ecee00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecee08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecee10) = 0;
  puVar7 = &stack0xffffffffffffff70;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar7,PTR_s_initWithFrame__1125e2948);
  puVar8 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar9 = puVar8;
  func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c450a4(0x4024000000000000,0x4024000000000000);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar7);
  func_0x000107c61170(puVar10);
  FUN_1029550ec();
  func_0x000107c3d89c(puVar7);
  func_0x000107c61170(puVar10);
  lVar1 = _DAT_112ecedf0;
  func_0x000107c5a050(*(undefined8 *)(puVar7 + _DAT_112ecedf0));
  uVar11 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c4aba4(uVar11);
  func_0x000107c61180();
  func_0x000107c539d4(0x4020000000000000);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c4aba4(uVar11);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c61174(uVar12);
  uVar11 = uVar12;
  func_0x000102955194();
  func_0x000107c3d89c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  lVar2 = _DAT_112ecedf8;
  func_0x000107c5a050(*(undefined8 *)(puVar7 + _DAT_112ecedf8));
  uVar11 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c61174(uVar11);
  func_0x00010295530c(&DAT_112ecee00);
  func_0x000107c3d89c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  lVar3 = _DAT_112ecee00;
  func_0x000107c5a050(*(undefined8 *)(puVar7 + _DAT_112ecee00));
  uVar11 = *(undefined8 *)(puVar7 + lVar3);
  func_0x000107c55258(uVar11);
  func_0x000102955238();
  func_0x000107c3d89c(puVar7);
  func_0x000107c61170(uVar11);
  lVar4 = _DAT_112ecee08;
  func_0x000107c5a050(*(undefined8 *)(puVar7 + _DAT_112ecee08));
  uVar11 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c61174(uVar11);
  puVar6 = &DAT_112ecee10;
  func_0x00010295530c(&DAT_112ecee10);
  func_0x000107c3d89c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  lVar5 = _DAT_112ecee10;
  func_0x000107c5a050(*(undefined8 *)(puVar7 + _DAT_112ecee10));
  func_0x000107c55258(*(undefined8 *)(puVar7 + lVar5));
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar10 = puVar6;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 0x2d;
  *(undefined8 *)(puVar10 + 0x10) = 0x16;
  puVar13 = puVar7;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  *(undefined1 **)(puVar10 + 0x20) = puVar14;
  puVar13 = puVar7;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar14 = puVar7;
  func_0x000107c5e308(puVar7);
  func_0x000107c61180();
  puVar15 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined1 **)(puVar10 + 0x28) = puVar15;
  uVar12 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar13 = puVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar10 + 0x30) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar13 = puVar7;
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar10 + 0x38) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0x40) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0x48) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c3f75c(uVar16);
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(puVar10 + 0x50) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(puVar7 + lVar1);
  func_0x000107c3f764(uVar16);
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(puVar10 + 0x58) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0x60) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0x68) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar3);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(puVar10 + 0x70) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar3);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(puVar7 + lVar2);
  func_0x000107c3f764(uVar16);
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(puVar10 + 0x78) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar3);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0x80) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar3);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0x88) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar13 = puVar7;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar10 + 0x90) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar13 = puVar7;
  func_0x000107c3ec1c(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar13);
  *(undefined8 *)(puVar10 + 0x98) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0xa0) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0xa8) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar5);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(puVar10 + 0xb0) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar5);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(puVar7 + lVar4);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(puVar10 + 0xb8) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar5);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 0xc0) = uVar11;
  uVar12 = *(undefined8 *)(puVar7 + lVar5);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar11 = uVar12;
  func_0x000107c40290(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar10 + 200) = uVar11;
  uVar11 = 0;
  func_0x000100847984(0);
  puVar17 = puVar10;
  func_0x000107c5fc48(puVar10,uVar11);
  func_0x000107c61574(puVar10);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar17);
  return puVar7;
}



/* Entry: 102955d20; end: 102955d3f; -[_TtC28SCPlusUpsellNotificationImpl41MemoriesPhotoOnPhotoNotificationImageView initWithFrame:] */

void FUN_102955d20(void)

{
  FUN_102955384();
  return;
}



/* Entry: 102955d40; end: 102955d57; -[_TtC28SCPlusUpsellNotificationImpl41MemoriesPhotoOnPhotoNotificationImageView init] */

void FUN_102955d40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0x4048000000000000,0x4048000000000000,param_1,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102955d58; end: 102955d7f; -[_TtC28SCPlusUpsellNotificationImpl41MemoriesPhotoOnPhotoNotificationImageView initWithCoder:] */

void FUN_102955d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102955f94();
  return;
}



/* Entry: 102955d80; end: 102955e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102955d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_layoutSubviews_112600e60);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecede8);
  func_0x000102955238();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000107c54b80(param_1,param_2,param_3,param_4,uVar4);
  func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112ecee08));
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8ac(param_1,param_2,param_3,param_4,0x403a000000000000,0x403a000000000000);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ab30();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c57274(uVar4);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102955ea0; end: 102955ec7; -[_TtC28SCPlusUpsellNotificationImpl41MemoriesPhotoOnPhotoNotificationImageView layoutSubviews] */

void FUN_102955ea0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102955d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102955ec8; end: 102955efb;  */

void FUN_102955ec8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102955efc; end: 102955f73; -[_TtC28SCPlusUpsellNotificationImpl41MemoriesPhotoOnPhotoNotificationImageView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102955f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102955f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102955f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102955f3c) */
/* WARNING: Removing unreachable block (ram,0x000102955f1c) */
/* WARNING: Removing unreachable block (ram,0x000102955f5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102955efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecede8));
  return;
}



/* Entry: 102955f74; end: 102955f93;  */

void FUN_102955f74(void)

{
  func_0x000107c61168(&PTR_PTR_1128726c0);
  return;
}



/* Entry: 102955f94; end: 102956047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102955f94(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ecede8;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecedf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecedf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecee00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecee08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecee10) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlusUpsellNotificationImpl/MemoriesPhotoOnPhotoNotificationImage.swift",
                      0x48,2,0x8a,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102956048);
  (*pcVar2)();
}



/* Entry: 102956048; end: 10295605b;  */

void FUN_102956048(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105717b0;
  if (lRam0000000112ecee40 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ecee40 = param_1;
  }
  return;
}



/* Entry: 10295605c; end: 10295609f;  */

void FUN_10295605c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1029560a0; end: 10295619f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029560a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_layoutSubviews_112600e60);
  lVar1 = _DAT_112ecee48;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecee48);
  if (lVar2 == 0) {
    lVar2 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c407dc();
    func_0x000107c61170(lVar2);
    puVar3 = PTR_PTR_1126cb8f8;
    func_0x000107c610f8();
    func_0x000107c45a54(0x3ff0000000000000,param_1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c3d894();
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c4f9f0(lVar2);
    unaff_x20 = lVar2;
  }
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 1029561a0; end: 1029561c7; -[_TtC28SCPlusUpsellNotificationImpl26PlusGoldBorderNotification layoutSubviews] */

void FUN_1029561a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029560a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029561c8; end: 1029561e3;  */

void FUN_1029561c8(long param_1,long param_2)

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



/* Entry: 1029561e4; end: 10295634f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1029561e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ecee48) = 0;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  if (param_7 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c6142c(param_7);
  }
  uStack_70 = param_9;
  uStack_68 = param_10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105717c0;
  ppuVar2 = &puStack_90;
  func_0x000107c60bc4();
  uVar1 = uStack_68;
  func_0x000107c6157c(param_10);
  func_0x000107c61574(uVar1);
  puVar3 = &stack0xffffffffffffff60;
  func_0x000107c61154(puVar3,PTR_s_initWithImage_primaryText_primar_1125e4a80,param_1,param_2,
                      param_4,param_5,param_6,param_8,ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_10);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_6);
  return puVar3;
}



/* Entry: 102956350; end: 10295643f; -[_TtC28SCPlusUpsellNotificationImpl26PlusGoldBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:] */

void FUN_102956350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_7);
  }
  puVar1 = &UNK_1105718e8;
  func_0x000107c613fc(&UNK_1105718e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_1029561e4(param_3,param_4,param_2,param_5,param_6,param_7,uVar2,param_8,0x102956c44,puVar1);
  return;
}



/* Entry: 102956440; end: 10295663f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102956440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9,
             undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uStack_e8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ecee48) = 0;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  if (param_7 == 0) {
    uStack_e8 = 0;
  }
  else {
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c6142c(param_7);
    uStack_e8 = param_6;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_88 = param_9;
  uStack_80 = param_10;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1105717e8;
  ppuVar3 = &puStack_a8;
  func_0x000107c60bc4();
  uVar2 = uStack_80;
  func_0x000107c6157c(param_10);
  func_0x000107c61574(uVar2);
  if (param_12 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    lStack_88 = param_12;
    uStack_80 = param_13;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110571810;
    ppuVar5 = &puStack_a8;
    func_0x000107c60bc4();
    uVar2 = uStack_80;
    func_0x000107c6157c(param_13);
    func_0x000107c61574(uVar2);
  }
  puVar4 = &stack0xffffffffffffff48;
  func_0x000107c61154(puVar4,PTR_s_initWithImage_primaryText_primar_1125e4a88,param_1,param_2,
                      param_4,param_5,uStack_e8,param_8,ppuVar3,param_11,ppuVar5);
  func_0x00010058d43c(param_12,param_13);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uStack_e8);
  return puVar4;
}



/* Entry: 102956640; end: 102956783; -[_TtC28SCPlusUpsellNotificationImpl26PlusGoldBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:] */

void FUN_102956640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    param_7 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_7);
  }
  puVar1 = &UNK_110571898;
  func_0x000107c613fc(&UNK_110571898,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  if (param_11 == 0) {
    puVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar3 = &UNK_1105718c0;
    func_0x000107c613fc(&UNK_1105718c0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_11;
    uVar2 = 0x102956c40;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_10);
  FUN_102956440(param_3,param_4,param_2,param_5,param_6,param_7,uVar4,param_8,0x102956c3c,puVar1,
                param_10,uVar2,puVar3);
  return;
}



/* Entry: 102956784; end: 102956a9f; -[_TtC28SCPlusUpsellNotificationImpl26PlusGoldBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102956784(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  plVar2 = &lStack_70;
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    param_7 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec(param_7);
  }
  *(undefined8 *)(param_1 + _DAT_112ecee48) = 0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c5fadc(param_4,param_2);
  func_0x000107c6142c(param_2);
  if (lVar3 == 0) {
    param_7 = 0;
  }
  else {
    func_0x000107c5fadc(param_7,lVar3);
    func_0x000107c6142c(lVar3);
  }
  lStack_70 = param_1;
  lStack_68 = lVar1;
  func_0x000107c61154(&lStack_70,PTR_s_initWithImage_primaryText_primar_1125e4a78,param_3,param_4,
                      param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  return (undefined1 *)plVar2;
}



/* Entry: 102956aa0; end: 102956baf; -[_TtC28SCPlusUpsellNotificationImpl26PlusGoldBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:notificationButton:buttonActionHandler:] */

void FUN_102956aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    param_7 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_7);
  }
  if (param_10 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110571870;
    func_0x000107c613fc(&UNK_110571870,0x18,7);
    *(long *)(puVar2 + 0x10) = param_10;
    pcVar1 = FUN_102956c14;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_9);
  func_0x0001029568c8(param_3,param_4,param_2,param_5,param_6,param_7,uVar3,param_8,param_9,pcVar1,
                      puVar2);
  return;
}



/* Entry: 102956bb0; end: 102956be3;  */

void FUN_102956bb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102956be4; end: 102956bf3; -[_TtC28SCPlusUpsellNotificationImpl26PlusGoldBorderNotification .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102956be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecee48));
  return;
}



/* Entry: 102956bf4; end: 102956c13;  */

void FUN_102956bf4(void)

{
  func_0x000107c61168(&PTR_PTR_1128727a0);
  return;
}



/* Entry: 102956c14; end: 102956c47;  */

void FUN_102956c14(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102956c48; end: 102956ca3;  */

/* WARNING: Possible PIC construction at 0x000102956c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102956c94) */

void FUN_102956c48(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102956ca4; end: 102956ebb;  */

/* WARNING: Possible PIC construction at 0x000102956cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102956d00) */
/* WARNING: Removing unreachable block (ram,0x000102956eb8) */
/* WARNING: Removing unreachable block (ram,0x000102956e60) */

void FUN_102956ca4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  func_0x000107c4abfc();
  func_0x000107c3ec60(param_5);
  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  }
  else {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102956ebc; end: 102956ec3;  */

/* WARNING: Possible PIC construction at 0x000102956c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102956c94) */

void FUN_102956ebc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102956ec4; end: 102956ee3;  */

void FUN_102956ec4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102956ee4; end: 102956f0f;  */

void FUN_102956ee4(long param_1,long param_2)

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



/* Entry: 102956f10; end: 102957057;  */

void FUN_102956f10(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aebd8;
  func_0x000107c61168();
  uVar2 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010f0ce870);
  uVar3 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010f0ce8d0);
  func_0x000107c5183c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puRam0000000113804e28 = puVar1;
  return;
}



/* Entry: 102957058; end: 102957133;  */

/* WARNING: Possible PIC construction at 0x0001029570d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029570fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029570dc) */
/* WARNING: Removing unreachable block (ram,0x000102957100) */

void FUN_102957058(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  if (param_3 != 0) {
    func_0x000107c61174();
    func_0x000107c5b078();
    if ((param_1 <= 0.0) || (func_0x000107c5b078(param_3), param_2 <= 0.0)) {
      func_0x000107c61174(param_3);
      func_0x000107c3fefc(param_5);
    }
    else {
      FUN_10295ced8(0);
      func_0x000107c610f8();
      func_0x000107c61174(param_3);
      lVar1 = param_3;
      FUN_10295c8d4();
      func_0x000107c51820(param_3);
      FUN_102956ca4(lVar1,0);
      param_3 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_completeWithValue__1125ae900,param_6);
  return;
}



/* Entry: 102957134; end: 1029571a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102957134(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112ecf118) & 1) == 0) {
      func_0x000107c4eac0(*(undefined8 *)(param_1 + _DAT_112ecf0b8));
    }
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 1029571a8; end: 1029572d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029571a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 == 2) && (*(char *)(param_2 + _DAT_112ecf0a8 + 0x30) == '\x01')) {
      puVar1 = PTR_PTR_1126e2840;
      func_0x000107c610f8(PTR_PTR_1126e2840);
      func_0x000107c453e4();
      func_0x000107c571f8();
      func_0x000107c5958c(puVar1);
      uVar2 = 0x5641535f54534f50;
      func_0x000107c5fadc(0x5641535f54534f50,0xef4649544f4e5f45);
      func_0x000107c59564(puVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c59560(puVar1);
      func_0x000107c541e4(puVar1);
      func_0x000107c52bd4(puVar1);
      func_0x000107c4bfb0(*(undefined8 *)(param_2 + _DAT_112ecf0e8));
      func_0x000107c61170(puVar1);
    }
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 1029572d4; end: 1029572e3; -[_TtC28SCPlusUpsellNotificationImpl25PlusNotificationPresenter containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029572d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eceed0));
  return;
}



/* Entry: 1029572e4; end: 10295793b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029572e4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  char *pcVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112eceed8);
  if (lVar12 == 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112eceed0);
    func_0x000107c3d89c(param_2,param_3,uVar13);
    uVar6 = uVar13;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c5cbe4(param_2);
    func_0x000107c61180();
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c517d4();
    uVar2 = uVar6;
    func_0x000107c40284(param_1 + 16.0);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    uVar6 = uVar13;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c5cbe4(param_2);
    func_0x000107c61180();
    uVar3 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar4 = puVar11;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 9;
    *(undefined8 *)(puVar4 + 0x10) = 4;
    uVar6 = uVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c4acb0(param_2);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    uVar6 = uVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c5ce8c(param_2);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
    *(undefined8 *)(puVar4 + 0x28) = uVar5;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar6 = uVar13;
    func_0x000107c402a0(0);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    *(undefined8 *)(puVar4 + 0x30) = uVar6;
    *(undefined8 *)(puVar4 + 0x38) = uVar3;
    uVar6 = 0;
    func_0x000100847984(0);
    func_0x000107c61174();
    puVar7 = puVar4;
    func_0x000107c5fc48(puVar4,uVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c3d048(puVar11);
    func_0x000107c61170(puVar7);
    func_0x000107c4abfc(param_2);
    func_0x000107c521e8(uVar3);
    func_0x000107c521e8(uVar2);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar11 = &UNK_110571a68;
    func_0x000107c613fc(&UNK_110571a68,0x18,7);
    *(undefined8 *)(puVar11 + 0x10) = param_2;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x102958294;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_110571a80;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar11;
    func_0x000107c60bc4(ppuVar8);
    puVar11 = puStack_88;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar11);
    puVar11 = &UNK_110571ab8;
    func_0x000107c613fc(&UNK_110571ab8,0x18,7);
    *(long *)(puVar11 + 0x10) = unaff_x20;
    uStack_90 = 0x1029582b8;
    puStack_b0 = puVar4;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100288f10;
    puStack_98 = &UNK_110571ad0;
    ppuVar9 = &puStack_b0;
    puStack_88 = puVar11;
    func_0x000107c60bc4(ppuVar9);
    puVar11 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61574(puVar11);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar7);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x0001000d224c(&puStack_b0);
    ppuVar8 = &puStack_b0;
    func_0x0001000a8868(ppuVar8,puStack_98);
    dVar15 = dRam0000000112ecef80;
    if (dRam0000000112ecef80 == 6.0) {
      puVar11 = *ppuVar8;
      uVar6 = 0xd000000000000036;
      func_0x000107c5fadc(0xd000000000000036,0x800000010f0cea60);
      if (lRam0000000112ecefc0 != -1) {
        func_0x000107c61568(0x112ecefc0,0x102958e64);
      }
      fVar14 = (float)dRam0000000112ecef38;
      func_0x000107c436e4(fVar14,puVar11);
      func_0x000107c61170(uVar6);
      dVar15 = (double)fVar14;
    }
    func_0x0001000834e4(&puStack_b0);
    pcVar10 = "presentNotificationOverView(_:completion:)";
    func_0x0001000c10c0("presentNotificationOverView(_:completion:)");
    func_0x000107c61180();
    puVar11 = &UNK_110571b08;
    func_0x000107c613fc(&UNK_110571b08,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,unaff_x20);
    puVar7 = &UNK_110571b30;
    func_0x000107c613fc(&UNK_110571b30,0x38,7);
    *(undefined **)(puVar7 + 0x10) = puVar11;
    *(undefined8 *)(puVar7 + 0x18) = uVar2;
    *(undefined8 *)(puVar7 + 0x20) = uVar3;
    *(undefined8 *)(puVar7 + 0x28) = param_3;
    *(undefined8 *)(puVar7 + 0x30) = param_4;
    uStack_90 = 0x1029582c0;
    puStack_b0 = puVar4;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_110571b48;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar11 = puStack_88;
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar11);
    func_0x000107c4e528(dVar15 + 0.3,pcVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(pcVar10);
  }
  else {
    puVar11 = &UNK_110571b08;
    func_0x000107c613fc(&UNK_110571b08,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    puVar4 = &UNK_110571b80;
    func_0x000107c613fc(&UNK_110571b80,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar11;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    uStack_90 = 0x1029582d0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000b0c7c;
    puStack_98 = &UNK_110571b98;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar8);
    puVar11 = puStack_88;
    func_0x000107c61174(lVar12);
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c61574(puVar11);
    func_0x000107c4ef88(lVar12);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar12);
  }
  return;
}



/* Entry: 10295793c; end: 102957a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295793c(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126d1a30;
    func_0x000107c610f8(PTR_PTR_1126d1a30);
    func_0x000107c453e4();
    func_0x000107c571f8();
    func_0x000107c59560(puVar1);
    func_0x000107c5958c(puVar1);
    uVar2 = 0x5641535f54534f50;
    func_0x000107c5fadc(0x5641535f54534f50,0xef4649544f4e5f45);
    func_0x000107c59564(puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c4dc2c(*(undefined8 *)(param_1 + _DAT_112eceea0));
    func_0x000107c4bfb0(*(undefined8 *)(param_1 + _DAT_112ecee90));
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102957a50; end: 102957b73;  */

/* WARNING: Possible PIC construction at 0x000102957ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102957b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102957ac8) */
/* WARNING: Removing unreachable block (ram,0x000102957b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102957a50(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112eceeb8);
  puVar3 = (undefined *)*puVar1;
  if (*(char *)(puVar1 + 2) == '\0') {
    puVar3 = PTR_PTR_1126d1a30;
    func_0x000107c610f8(PTR_PTR_1126d1a30);
    func_0x000107c453e4();
    func_0x000107c571f8();
    func_0x000107c59560(puVar3);
    func_0x000107c5958c(puVar3);
    uVar4 = *(undefined8 *)(param_2 + _DAT_112eceea0);
    func_0x000107c61174(puVar3);
    func_0x000107c4dc2c(uVar4);
    func_0x000107c4bfb0(*(undefined8 *)(param_2 + _DAT_112ecee90));
  }
  else {
    if (*(char *)(puVar1 + 2) != '\x01') {
      return;
    }
    uVar4 = puVar1[1];
    puVar2 = PTR_PTR_1126d7500;
    func_0x000107c610f8(PTR_PTR_1126d7500);
    func_0x000107c453e4();
    func_0x000107c571f8();
    func_0x000107c5fadc(puVar3,uVar4);
    func_0x000107c59564(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102957b74; end: 102957bfb;  */

void FUN_102957b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102957bfc(param_2,param_3,param_4,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102957bfc; end: 102957dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102957bfc(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eceed0);
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
  }
  else {
    func_0x000107c521e8(param_1);
    func_0x000107c521e8(param_2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_110571bd0;
    func_0x000107c613fc(&UNK_110571bd0,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10295832c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110571be8;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110571c20;
    func_0x000107c613fc(&UNK_110571c20,0x28,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(code **)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    uStack_70 = 0x1029582dc;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_110571c38;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174();
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c61574(puVar4);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102957dc0; end: 102957e6b; -[_TtC28SCPlusUpsellNotificationImpl25PlusNotificationPresenter presentNotificationOverView:completion:] */

/* WARNING: Possible PIC construction at 0x000102957e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102957e54) */

void FUN_102957dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110571a40;
    func_0x000107c613fc(&UNK_110571a40,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x10295828c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029572e4(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102957e6c; end: 102957ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102957e6c(undefined8 param_1,long param_2,code *param_3)

{
  func_0x000107c4ff34(*(undefined8 *)(param_2 + _DAT_112eceed0));
  param_2 = param_2 + _DAT_112eceea8;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + _DAT_112ecf118) & 1) == 0) {
      func_0x000107c4eac0(*(undefined8 *)(param_2 + _DAT_112ecf0b8));
    }
    func_0x000107c615e8();
  }
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Entry: 102957ef4; end: 102957eff;  */

void FUN_102957ef4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 102957f00; end: 102957f4b; -[_TtC28SCPlusUpsellNotificationImpl25PlusNotificationPresenter debugInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102957f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eceeb0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eceeb0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102957f4c; end: 102957fab; -[_TtC28SCPlusUpsellNotificationImpl25PlusNotificationPresenter init] */

void FUN_102957f4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusUpsellNotificationImpl.PlusNotificationPresenter",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102957f78);
  (*pcVar1)();
}



/* Entry: 102957fac; end: 102958083; -[_TtC28SCPlusUpsellNotificationImpl25PlusNotificationPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102957fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102957fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102957fac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecee88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecee90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecee98));
  return;
}



/* Entry: 102958084; end: 1029580a3;  */

void FUN_102958084(void)

{
  func_0x000107c61168(&PTR_PTR_112872858);
  return;
}



/* Entry: 1029580a4; end: 1029580fb;  */

void FUN_1029580a4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1029580fc; end: 102958197;  */

undefined8 * FUN_1029580fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1029580a4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 102958198; end: 1029581db;  */

undefined8 * FUN_102958198(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001029580d8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1029581dc; end: 1029582e7;  */

int FUN_1029581dc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1029582e8; end: 10295830b;  */

undefined8 FUN_1029582e8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10295830c; end: 10295835b;  */

void FUN_10295830c(long param_1,long param_2)

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



/* Entry: 10295835c; end: 10295842b;  */

void FUN_10295835c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_layoutSubviews_112600e60);
  uVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52df8(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c52e0c(0x3ff0000000000000);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 10295842c; end: 102958453; -[_TtC28SCPlusUpsellNotificationImpl28PlusPurpleBorderNotification layoutSubviews] */

void FUN_10295842c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10295835c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102958454; end: 1029585b3;  */

undefined1 *
FUN_102958454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  if (param_7 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c6142c(param_7);
  }
  uStack_70 = param_9;
  uStack_68 = param_10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110571c60;
  ppuVar2 = &puStack_90;
  func_0x000107c60bc4();
  uVar1 = uStack_68;
  func_0x000107c6157c(param_10);
  func_0x000107c61574(uVar1);
  puVar3 = &stack0xffffffffffffff60;
  func_0x000107c61154(puVar3,PTR_s_initWithImage_primaryText_primar_1125e4a80,param_1,param_2,
                      param_4,param_5,param_6,param_8,ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_10);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_6);
  return puVar3;
}



/* Entry: 1029585b4; end: 1029586a3; -[_TtC28SCPlusUpsellNotificationImpl28PlusPurpleBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:] */

void FUN_1029585b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_7);
  }
  puVar1 = &UNK_110571d88;
  func_0x000107c613fc(&UNK_110571d88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_102958454(param_3,param_4,param_2,param_5,param_6,param_7,uVar2,param_8,0x102958e60,puVar1);
  return;
}



/* Entry: 1029586a4; end: 102958897;  */

undefined1 *
FUN_1029586a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9,
             undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_e0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  func_0x000107c614f0();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  if (param_7 == 0) {
    uStack_e0 = 0;
  }
  else {
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c6142c(param_7);
    uStack_e0 = param_6;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_88 = param_9;
  uStack_80 = param_10;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110571c88;
  ppuVar3 = &puStack_a8;
  func_0x000107c60bc4();
  uVar2 = uStack_80;
  func_0x000107c6157c(param_10);
  func_0x000107c61574(uVar2);
  if (param_12 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    lStack_88 = param_12;
    uStack_80 = param_13;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110571cb0;
    ppuVar5 = &puStack_a8;
    func_0x000107c60bc4();
    uVar2 = uStack_80;
    func_0x000107c6157c(param_13);
    func_0x000107c61574(uVar2);
  }
  puVar4 = &stack0xffffffffffffff48;
  func_0x000107c61154(puVar4,PTR_s_initWithImage_primaryText_primar_1125e4a88,param_1,param_2,
                      param_4,param_5,uStack_e0,param_8,ppuVar3,param_11,ppuVar5);
  func_0x00010058d43c(param_12,param_13);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uStack_e0);
  return puVar4;
}



/* Entry: 102958898; end: 1029589db; -[_TtC28SCPlusUpsellNotificationImpl28PlusPurpleBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:] */

void FUN_102958898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    param_7 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_7);
  }
  puVar1 = &UNK_110571d38;
  func_0x000107c613fc(&UNK_110571d38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  if (param_11 == 0) {
    puVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar3 = &UNK_110571d60;
    func_0x000107c613fc(&UNK_110571d60,0x18,7);
    *(long *)(puVar3 + 0x10) = param_11;
    uVar2 = 0x102958e5c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_10);
  FUN_1029586a4(param_3,param_4,param_2,param_5,param_6,param_7,uVar4,param_8,0x102958e58,puVar1,
                param_10,uVar2,puVar3);
  return;
}



/* Entry: 1029589dc; end: 102958cc7; -[_TtC28SCPlusUpsellNotificationImpl28PlusPurpleBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:] */

undefined1 *
FUN_1029589dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = &uStack_70;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_7 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
  }
  else {
    func_0x000107c5faec(param_7);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
    func_0x000107c5fadc(param_7,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_70 = param_1;
  uStack_68 = uVar1;
  func_0x000107c61154(&uStack_70,PTR_s_initWithImage_primaryText_primar_1125e4a78,param_3,param_4,
                      param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar2;
}



/* Entry: 102958cc8; end: 102958dd7; -[_TtC28SCPlusUpsellNotificationImpl28PlusPurpleBorderNotification initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:notificationButton:buttonActionHandler:] */

void FUN_102958cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    param_7 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_7);
  }
  if (param_10 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110571d10;
    func_0x000107c613fc(&UNK_110571d10,0x18,7);
    *(long *)(puVar2 + 0x10) = param_10;
    pcVar1 = FUN_102958e2c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_9);
  func_0x000102958af4(param_3,param_4,param_2,param_5,param_6,param_7,uVar3,param_8,param_9,pcVar1,
                      puVar2);
  return;
}



/* Entry: 102958dd8; end: 102958e2b;  */

void FUN_102958dd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102958e2c; end: 102958e7b;  */

void FUN_102958e2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102958e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102958e7c; end: 102958f87;  */

double FUN_102958e7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = dRam0000000112ecef40;
  if (dRam0000000112ecef40 == 6.0) {
    uVar1 = 0xd000000000000034;
    func_0x000107c5fadc(0xd000000000000034,0x800000010f0ceaa0);
    dVar4 = dRam0000000112ecef80;
    if (dRam0000000112ecef80 == 6.0) {
      uVar2 = 0xd000000000000036;
      func_0x000107c5fadc(0xd000000000000036,0x800000010f0cea60);
      if (lRam0000000112ecefc0 != -1) {
        func_0x000107c61568(0x112ecefc0,0x102958e64);
      }
      fVar3 = (float)dRam0000000112ecef38;
      func_0x000107c436e4(fVar3,param_1);
      func_0x000107c61170(uVar2);
      dVar4 = (double)fVar3;
    }
    fVar3 = (float)dVar4;
    func_0x000107c436e4(fVar3,param_1);
    func_0x000107c61170(uVar1);
    dVar4 = (double)fVar3;
  }
  return dVar4;
}



/* Entry: 102958f88; end: 102958f97;  */

undefined1  [16] FUN_102958f88(void)

{
  return ZEXT816(0x110571db0);
}



/* Entry: 102958f98; end: 1029592d7;  */

void FUN_102958f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecf008,&UNK_10daf5300);
  puVar1 = &UNK_110571df8;
  func_0x000107c613fc(&UNK_110571df8,0x70,7);
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
  func_0x0001000823a8(FUN_1029592d8,puVar1);
  return;
}



/* Entry: 1029592d8; end: 102959313;  */

void FUN_1029592d8(void)

{
  long unaff_x20;
  
  func_0x0001029590cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102959314; end: 102959447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102959314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecf010) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf018) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf020) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf028) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf030) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf038) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf040) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf048) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf050) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf058) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf060) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf068) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf070) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}


