/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007cb00c; end: 1007cb027;  */

void FUN_1007cb00c(long param_1,long param_2)

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



/* Entry: 1007cb028; end: 1007cb207; -[SCMainCameraPresentationNavigationFeaturePlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1007cb028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1007cb208;
  puStack_90 = &UNK_11084e830;
  lStack_88 = param_1;
  func_0x000107c61174(param_4);
  uStack_80 = param_4;
  func_0x000107c61174(param_5);
  ppuVar2 = &puStack_a8;
  uStack_78 = param_5;
  FUN_1007cb208();
  func_0x000107c61180();
  ppuVar3 = ppuVar2;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1007cb38c;
  puStack_b8 = &UNK_11084ed60;
  lStack_b0 = param_1;
  (*(code *)ppuVar3[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar2);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1007cb3d4;
  puStack_f0 = &UNK_11084e830;
  lStack_e8 = param_1;
  uStack_e0 = param_4;
  uStack_d8 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  ppuVar2 = &puStack_108;
  FUN_1007cb3d4();
  func_0x000107c61180();
  ppuVar3 = ppuVar2;
  func_0x000107c40138();
  func_0x000107c61180();
  ppuVar4 = ppuVar3;
  (*(code *)ppuVar3[2])();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x50) = ppuVar4;
  func_0x000107c61170(uVar5);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1007cb208; end: 1007cb38b;  */

void FUN_1007cb208(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1061b0e60;
  puStack_70 = &UNK_1109140f8;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cb38c; end: 1007cb3d3;  */

/* WARNING: Possible PIC construction at 0x0001007cb3c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cb3c4) */

void FUN_1007cb38c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x58);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007cb3d4; end: 1007cb557;  */

void FUN_1007cb3d4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1061b0f4c;
  puStack_70 = &UNK_110914128;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cb558; end: 1007cb59f;  */

/* WARNING: Possible PIC construction at 0x0001007cb58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cb590) */

void FUN_1007cb558(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x58);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007cb5a0; end: 1007cb623; -[_TtC16ARBarIntegration29ARBarMiniCameraFeaturesPlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

/* WARNING: Possible PIC construction at 0x0001007cb5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cb5fc) */

void FUN_1007cb5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1007cb624(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007cb624; end: 1007cb8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007cb624(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f9f938);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f9f940);
  FUN_1000d224c(&puStack_a0);
  puVar4 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    FUN_1000285a8(0x112d5ba30,&UNK_10d929a50);
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    func_0x000100854cb0();
  }
  else {
    FUN_1000285a8(0x112d53860,&UNK_10d92b600);
    puVar1 = puVar4;
    func_0x000107c615f0(puVar4);
    func_0x000107c4f060();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x0001000b637c();
    func_0x000107c61170(puVar1);
    ppuVar3 = (undefined **)&UNK_10381cf00;
    FUN_1000bfde0(&UNK_10381cf00,0,PTR___sSbN_11034dd40);
    func_0x000107c615ec(puVar4,2);
    func_0x000107c61574(puVar2);
  }
  func_0x000107c4d6fc(param_1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_11069a4a0;
  func_0x000107c613fc(&UNK_11069a4a0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined ***)(puVar4 + 0x18) = ppuVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = &UNK_10381d08c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f472b4;
  puStack_88 = &UNK_11069a4b8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(ppuVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = PTR_PTR_1126b0110;
  func_0x000107c610f8(PTR_PTR_1126b0110);
  puStack_80 = &UNK_10381cfcc;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1001de374;
  puStack_88 = &UNK_11069a4e0;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c46850(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_78);
  if (*(long *)(unaff_x20 + _DAT_112f9f948) != 0) {
    func_0x000107c4972c();
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61574(ppuVar3);
  return;
}



/* Entry: 1007cb8b4; end: 1007cb8e7;  */

void FUN_1007cb8b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007cb8e8; end: 1007cb8ef;  */

void FUN_1007cb8e8(long param_1)

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



/* Entry: 1007cb8f0; end: 1007cb927;  */

void FUN_1007cb8f0(long param_1)

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



/* Entry: 1007cb928; end: 1007cb92f;  */

void FUN_1007cb928(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1007cb930(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  FUN_1007cb98c();
  return;
}



/* Entry: 1007cb930; end: 1007cb94f;  */

void FUN_1007cb930(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd018);
  return;
}



/* Entry: 1007cb950; end: 1007cb98b;  */

void FUN_1007cb950(undefined8 param_1)

{
  FUN_1007cb930(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  FUN_1007cb98c();
  return;
}



/* Entry: 1007cb98c; end: 1007cba4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007cb98c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f471d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f471d8) = 0;
  lVar2 = _DAT_112f471e0;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112f471e8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f471f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f471f8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007cba50; end: 1007cba57;  */

void FUN_1007cba50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1007cba58; end: 1007cba7b;  */

void FUN_1007cba58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007cba7c; end: 1007cbaa3; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter presentationStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007cba7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f471e8));
  return;
}



/* Entry: 1007cbaa4; end: 1007cbc03; -[SCMainCameraScanFeatureProvider setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

/* WARNING: Possible PIC construction at 0x0001007cbb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cbbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cbbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cbbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cbbdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cbbd0) */
/* WARNING: Removing unreachable block (ram,0x0001007cbbc0) */
/* WARNING: Removing unreachable block (ram,0x0001007cbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001007cbb5c) */
/* WARNING: Removing unreachable block (ram,0x0001007cbbe0) */

void FUN_1007cbaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1007cbc04;
  puStack_80 = &UNK_11084e830;
  uStack_78 = param_1;
  func_0x000107c61174(param_4);
  uStack_70 = param_4;
  func_0x000107c61174(param_5);
  uStack_68 = param_5;
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_98;
  FUN_1007cbc04(ppuVar1);
  func_0x000107c61180();
  func_0x000107c58c08(param_3,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1007cbc04; end: 1007cbd87;  */

void FUN_1007cbc04(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1067384d8;
  puStack_70 = &UNK_110938030;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cbd88; end: 1007cbdb7; -[SCMutablePublicCameraFeatureCatalog setScan:] */

void FUN_1007cbd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cbdb8; end: 1007cbf3b;  */

void FUN_1007cbdb8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_106738584;
  puStack_70 = &UNK_110938060;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cbf3c; end: 1007cbf6b; -[SCMutablePublicCameraFeatureCatalog setRealTimeScan:] */

void FUN_1007cbf3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cbf6c; end: 1007cbfef; -[_TtC25GamesExplorerCameraButton38GamesExplorerCameraButtonFeaturePlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

/* WARNING: Possible PIC construction at 0x0001007cbfc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cbfc8) */

void FUN_1007cbf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1007cbff0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007cbff0; end: 1007cc24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007cbff0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  int iVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = unaff_x20 + _DAT_112ef05b0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ef05c0);
    iVar10 = (int)*(undefined8 *)(unaff_x20 + _DAT_112ef05b8);
    uVar3 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f0ef430);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar3);
    if (iVar10 == 0) {
      func_0x000107c4d6fc(param_1);
    }
    else {
      func_0x000107c40d8c();
    }
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar5 = &UNK_11059cbd0;
    func_0x000107c613fc(&UNK_11059cbd0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(long *)(puVar5 + 0x18) = lVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = &UNK_102b14174;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_100f472b4;
    puStack_78 = &UNK_11059cbe8;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(uVar9);
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar5);
    func_0x000107c3e4fc(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    puVar5 = PTR_PTR_1126b0110;
    func_0x000107c610f8(PTR_PTR_1126b0110);
    puStack_70 = &UNK_102b1416c;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1001de374;
    puStack_78 = &UNK_11059cc10;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c46850(puVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puStack_68);
    func_0x000107c61604(unaff_x20 + _DAT_112ef05a0,puVar5);
    lVar8 = unaff_x20 + _DAT_112ef05a8;
    func_0x000107c61618();
    if (lVar8 != 0) {
      func_0x000107c4972c();
      func_0x000107c615e8(lVar8);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1007cc24c; end: 1007cc277;  */

void FUN_1007cc24c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007cc278; end: 1007cc293;  */

void FUN_1007cc278(long param_1,long param_2)

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



/* Entry: 1007cc294; end: 1007cc373; -[SCSnapKitCameraFeatureProviderPlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

/* WARNING: Possible PIC construction at 0x0001007cc338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cc348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cc358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cc34c) */
/* WARNING: Removing unreachable block (ram,0x0001007cc33c) */
/* WARNING: Removing unreachable block (ram,0x0001007cc35c) */

void FUN_1007cc294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1007cc374;
  puStack_50 = &UNK_11084e830;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_68;
  FUN_1007cc374(ppuVar1);
  func_0x000107c61180();
  func_0x000107c593f4(param_3,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007cc374; end: 1007cc4f7;  */

void FUN_1007cc374(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008d1e08;
  puStack_70 = &UNK_11090ee60;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cc4f8; end: 1007cc527; -[SCMutablePublicCameraFeatureCatalog setSnapKit:] */

void FUN_1007cc4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cc528; end: 1007cce53; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1007cc528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  lVar2 = param_1;
  func_0x000107c3bc84();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c8800;
  func_0x000107c610f4();
  lVar4 = param_1 + 8;
  func_0x000107c61148();
  lVar5 = param_1 + 0x18;
  func_0x000107c61148();
  lVar6 = param_1 + 0x28;
  func_0x000107c61148();
  lVar7 = param_1 + 0x38;
  func_0x000107c61148();
  lVar8 = param_1 + 0x40;
  func_0x000107c61148();
  lVar9 = param_1 + 0x48;
  func_0x000107c61148();
  lVar10 = param_1 + 0x50;
  func_0x000107c61148();
  lVar11 = param_1 + 0xa0;
  func_0x000107c61148();
  lVar12 = param_1 + 0x70;
  func_0x000107c61148();
  lVar13 = param_1 + 0x78;
  func_0x000107c61148();
  lVar14 = param_1 + 0x80;
  func_0x000107c61148();
  lVar15 = param_1 + 0x88;
  func_0x000107c61148();
  lVar16 = param_1 + 0x90;
  func_0x000107c61148();
  lVar17 = param_1 + 0x58;
  func_0x000107c61148();
  lVar18 = param_1;
  func_0x000107c3bc8c();
  func_0x000107c61180();
  lVar19 = param_1;
  func_0x000107c3bc54();
  func_0x000107c61180();
  lVar20 = param_1;
  func_0x000107c3bc7c();
  func_0x000107c61180();
  lVar21 = param_1;
  func_0x000107c3bcf0();
  func_0x000107c61180();
  lVar22 = param_1 + 0x118;
  func_0x000107c61148();
  lVar23 = param_1 + 0x10;
  func_0x000107c61148();
  lVar24 = param_1 + 0x130;
  func_0x000107c61148();
  lVar25 = param_1 + 0x158;
  func_0x000107c61148();
  func_0x000107c45c64();
  uVar26 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined **)(param_1 + 0x1a0) = puVar3;
  func_0x000107c61170(uVar26);
  func_0x000107c61174(puVar3);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  lVar4 = param_1 + 0xf0;
  func_0x000107c61148();
  lVar5 = param_1;
  func_0x000107c3bc50();
  func_0x000107c61180();
  func_0x000107c40154(puVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1007ce834;
  puStack_90 = &UNK_11084ea10;
  lStack_88 = param_1;
  func_0x000107c61174(param_4);
  ppuVar29 = &puStack_a8;
  uStack_80 = param_4;
  FUN_1007ce834();
  func_0x000107c61180();
  ppuVar30 = ppuVar29;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1007ce9a0;
  puStack_b8 = &UNK_11084ed60;
  ppuVar27 = ppuVar30;
  lStack_b0 = param_1;
  (*(code *)ppuVar30[2])();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar30);
  func_0x000107c61170(ppuVar29);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1007ce9e8;
  puStack_f0 = &UNK_11084e830;
  lStack_e8 = param_1;
  func_0x000107c61174(param_4);
  uStack_e0 = param_4;
  func_0x000107c61174(param_5);
  ppuVar30 = &puStack_108;
  uStack_d8 = param_5;
  FUN_1007ce9e8(ppuVar30);
  func_0x000107c61180();
  func_0x000107c52fc8(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1007ceb9c;
  puStack_130 = &UNK_11090c160;
  lStack_128 = param_1;
  func_0x000107c61174(param_4);
  uStack_120 = param_4;
  func_0x000107c61174(param_5);
  uStack_118 = param_5;
  ppuStack_110 = ppuVar27;
  func_0x000107c61174(ppuVar27);
  ppuVar30 = &puStack_148;
  FUN_1007ceb9c();
  func_0x000107c61180();
  func_0x000107c5287c(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1007ced70;
  puStack_168 = &UNK_11084e830;
  lStack_160 = param_1;
  func_0x000107c61174(param_4);
  uStack_158 = param_4;
  func_0x000107c61174(param_5);
  ppuVar30 = &puStack_180;
  uStack_150 = param_5;
  FUN_1007ced70();
  func_0x000107c61180();
  func_0x000107c56aa8(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1007cef24;
  puStack_1a0 = &UNK_11084e830;
  lStack_198 = param_1;
  func_0x000107c61174(param_4);
  uStack_190 = param_4;
  func_0x000107c61174(param_5);
  ppuVar30 = &puStack_1b8;
  uStack_188 = param_5;
  FUN_1007cef24();
  func_0x000107c61180();
  func_0x000107c530d8(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_1007cf0d8;
  puStack_1d0 = &UNK_11084ea10;
  lStack_1c8 = param_1;
  func_0x000107c61174(param_4);
  ppuVar30 = &puStack_1e8;
  uStack_1c0 = param_4;
  FUN_1007cf0d8();
  func_0x000107c61180();
  ppuVar28 = ppuVar30;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_1007cf244;
  puStack_1f8 = &UNK_11084ed60;
  ppuVar29 = ppuVar28;
  lStack_1f0 = param_1;
  (*(code *)ppuVar28[2])();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x1a8,ppuVar29);
  func_0x000107c61170(ppuVar29);
  func_0x000107c61170(ppuVar28);
  func_0x000107c61170(ppuVar30);
  puStack_240 = puVar1;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_1007cf28c;
  puStack_228 = &UNK_11084ea10;
  lStack_220 = param_1;
  func_0x000107c61174(param_4);
  ppuVar30 = &puStack_240;
  uStack_218 = param_4;
  FUN_1007cf28c();
  func_0x000107c61180();
  func_0x000107c55d10(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_270 = puVar1;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_1007cf428;
  puStack_258 = &UNK_11084ea10;
  lStack_250 = param_1;
  func_0x000107c61174(param_4);
  ppuVar30 = &puStack_270;
  uStack_248 = param_4;
  FUN_1007cf428();
  func_0x000107c61180();
  ppuVar29 = ppuVar30;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_298 = puVar1;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_1007cf594;
  puStack_280 = &UNK_11084ed60;
  lStack_278 = param_1;
  (*(code *)ppuVar29[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar29);
  func_0x000107c61170(ppuVar30);
  puStack_2c8 = puVar1;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_1007cf5dc;
  puStack_2b0 = &UNK_11084ea10;
  lStack_2a8 = param_1;
  func_0x000107c61174(param_4);
  ppuVar30 = &puStack_2c8;
  uStack_2a0 = param_4;
  FUN_1007cf5dc(ppuVar30);
  func_0x000107c61180();
  func_0x000107c55e44(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_300 = puVar1;
  uStack_2f8 = 0xc2000000;
  pcStack_2f0 = FUN_1007cf778;
  puStack_2e8 = &UNK_11084e830;
  lStack_2e0 = param_1;
  func_0x000107c61174(param_4);
  uStack_2d8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar30 = &puStack_300;
  uStack_2d0 = param_5;
  FUN_1007cf778();
  func_0x000107c61180();
  func_0x000107c55d2c(param_3);
  func_0x000107c61170(ppuVar30);
  puStack_338 = puVar1;
  uStack_330 = 0xc2000000;
  pcStack_328 = FUN_1007cf92c;
  puStack_320 = &UNK_11084e830;
  lStack_318 = param_1;
  uStack_310 = param_4;
  uStack_308 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  ppuVar30 = &puStack_338;
  FUN_1007cf92c();
  func_0x000107c61180();
  func_0x000107c55d30(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(ppuVar30);
  func_0x000107c61170(uStack_308);
  func_0x000107c61170(uStack_310);
  func_0x000107c61170(uStack_2d0);
  func_0x000107c61170(uStack_2d8);
  func_0x000107c61170(uStack_2a0);
  func_0x000107c61170(uStack_248);
  func_0x000107c61170(uStack_218);
  func_0x000107c61170(uStack_1c0);
  func_0x000107c61170(uStack_188);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(uStack_150);
  func_0x000107c61170(uStack_158);
  func_0x000107c61170(ppuStack_110);
  func_0x000107c61170(uStack_118);
  func_0x000107c61170(uStack_120);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(ppuVar27);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1007cce54; end: 1007cce93; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensExplorerStudySettings] */

void FUN_1007cce54(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xe0;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4b100();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007cce94; end: 1007ccef7; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensFavoritesLayoutStrategy:] */

void FUN_1007cce94(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_1061bb7bc;
  puStack_20 = &UNK_1109142a8;
  uStack_18 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007ccef8; end: 1007ccf5b; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensCollectionsBackButtonLayoutStrategy:] */

void FUN_1007ccef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_1061bb988;
  puStack_20 = &UNK_1109142a8;
  uStack_18 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007ccf5c; end: 1007ccfbf; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensExplorerButtonStrategy:] */

void FUN_1007ccf5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_1061bbb50;
  puStack_20 = &UNK_1109142a8;
  uStack_18 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007ccfc0; end: 1007cd023; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensSendToTabBarButtonLayoutStrategy] */

void FUN_1007ccfc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_1061bbd18;
  puStack_20 = &UNK_1109142a8;
  uStack_18 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007cd024; end: 1007cd5e3; -[SCCameraCommonLensFeatureConfigurator initWithCameraUIScope:applicationLifecycleEvents:userSession:navigationServices:lensFavoritesServices:lensFavoritesNotificationService:lensContentServices:lensFavoritesLoggingServices:lensLoggerServices:currentPageTracker:grapheneRegistry:lensExplorerBadgeServices:lensPerformerServices:lensExplorerConfigurableNavigatonServices:lensExplorerNavigatonServices:lensPickerServices:lensFavoritesLayoutStrategy:lensFavoritesTabBarLayoutStrategy:lensCollectionsBackButtonLayoutStrategy:lensExplorerButtonStrategy:controlStyle:lensExplorerStudySettings:lensFeedEnabled:lensExplorerButtonEnabled:lensFavoritesButtonEnabled:lensFavoritesButtonTextEnabled:lensFavoritesTabBarButtonEnabled:cameraHardwareResource:lensSendToButtonEnabled:lensSendToTabBarButtonEnabled:lensSendToButtonLayoutStrategy:lensSendToTabBarButtonLayoutStrategy:deeplinkSendToScopeExposer:offPlatformLinkGenerationService:cameraUIServices:arBar:alwaysUsePickerModeLensExplorer:lensCarouselManager:lensInfoButtonVisibility:] */

undefined8 *
FUN_1007cd024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined1 param_26,undefined8 param_27,undefined4 param_28,
             undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined1 param_36,
             undefined4 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  puStack_70 = PTR_PTR_1126f0288;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 0x14) = (undefined1)param_25;
    *(undefined1 *)((long)puVar1 + 0xa1) = param_25._1_1_;
    *(undefined1 *)((long)puVar1 + 0xa2) = param_25._2_1_;
    *(undefined1 *)((long)puVar1 + 0xa3) = param_25._3_1_;
    *(undefined1 *)((long)puVar1 + 0xa4) = param_26;
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c611a0(puVar1 + 2,param_4);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_5);
    func_0x000107c611a0(puVar1 + 5,param_7);
    func_0x000107c611a0(puVar1 + 6,param_8);
    func_0x000107c611a0(puVar1 + 7,param_9);
    func_0x000107c611a0(puVar1 + 8,param_10);
    func_0x000107c611a0(puVar1 + 9,param_11);
    func_0x000107c611a0(puVar1 + 10,param_13);
    func_0x000107c611a0(puVar1 + 0xb,param_14);
    func_0x000107c611a0(puVar1 + 0xc,param_15);
    func_0x000107c611a0(puVar1 + 0xd,param_16);
    func_0x000107c611a0(puVar1 + 0xe,param_17);
    func_0x000107c611a0(puVar1 + 0xf,param_18);
    func_0x000107c611a0(puVar1 + 0x10,param_12);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_24;
    func_0x000107c61170(uVar2);
    puVar1[0x13] = param_23;
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_27;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0xa5) = (undefined1)param_28;
    *(undefined1 *)((long)puVar1 + 0xa6) = param_28._1_1_;
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x11,param_32);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x12,param_34);
    *(undefined1 *)((long)puVar1 + 0xa7) = param_36;
    puVar3 = puVar1;
    func_0x000107c40b58();
    func_0x000107c61180();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_39;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007cd5e4; end: 1007cd69b; -[SCCameraCommonLensFeatureConfigurator createRingFlashInfoProvider] */

void FUN_1007cd5e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007cd69c; end: 1007cd757; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensCollectionUIContenders:lensCarouselConfigProvider:] */

void FUN_1007cd69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_100c5d784;
  puStack_50 = &UNK_110914428;
  uStack_48 = param_3;
  uStack_40 = uVar2;
  lStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007cd758; end: 1007cdaf3; -[SCCameraCommonLensFeatureConfigurator configureFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:lensCollectionUIContenders:] */

/* WARNING: Possible PIC construction at 0x0001007cd818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cd870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cd8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cd91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cd968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cd9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cda08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cda50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cda60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cda70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cda80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cda90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cdaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cdab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007cdac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cdab4) */
/* WARNING: Removing unreachable block (ram,0x0001007cdaa4) */
/* WARNING: Removing unreachable block (ram,0x0001007cda94) */
/* WARNING: Removing unreachable block (ram,0x0001007cda84) */
/* WARNING: Removing unreachable block (ram,0x0001007cda74) */
/* WARNING: Removing unreachable block (ram,0x0001007cda64) */
/* WARNING: Removing unreachable block (ram,0x0001007cda54) */
/* WARNING: Removing unreachable block (ram,0x0001007cda0c) */
/* WARNING: Removing unreachable block (ram,0x0001007cd9c0) */
/* WARNING: Removing unreachable block (ram,0x0001007cd96c) */
/* WARNING: Removing unreachable block (ram,0x0001007cd920) */
/* WARNING: Removing unreachable block (ram,0x0001007cd8cc) */
/* WARNING: Removing unreachable block (ram,0x0001007cd874) */
/* WARNING: Removing unreachable block (ram,0x0001007cd81c) */
/* WARNING: Removing unreachable block (ram,0x0001007cdac4) */

void FUN_1007cd758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1007cdaf4;
  puStack_90 = &UNK_11084e830;
  uStack_88 = param_1;
  func_0x000107c61174(param_4);
  uStack_80 = param_4;
  uStack_78 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_a8;
  FUN_1007cdaf4(ppuVar1);
  func_0x000107c61180();
  func_0x000107c55cac(param_3,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1007cdaf4; end: 1007cdc77;  */

void FUN_1007cdaf4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c5d700;
  puStack_70 = &UNK_11084e9b0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cdc78; end: 1007cdca7; -[SCMutablePublicCameraFeatureCatalog setLensCollectionsUIArbitrator:] */

void FUN_1007cdc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cdca8; end: 1007cde2b;  */

void FUN_1007cdca8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1061b6c68;
  puStack_70 = &UNK_1109144b8;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cde2c; end: 1007cde5b; -[SCMutablePublicCameraFeatureCatalog setLensCollectionsBackButton:] */

void FUN_1007cde2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cde5c; end: 1007cdfdf;  */

void FUN_1007cde5c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1061b6f1c;
  puStack_70 = &UNK_1109144e8;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cdfe0; end: 1007ce00f; -[SCMutablePublicCameraFeatureCatalog setLensExplorerButton:] */

void FUN_1007cdfe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ce010; end: 1007ce17b;  */

void FUN_1007ce010(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061b71dc;
  puStack_68 = &UNK_110914518;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ce17c; end: 1007ce1ab; -[SCMutablePublicCameraFeatureCatalog setLensFavoritesButton:] */

void FUN_1007ce17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ce1ac; end: 1007ce317;  */

void FUN_1007ce1ac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061b744c;
  puStack_68 = &UNK_110914518;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ce318; end: 1007ce347; -[SCMutablePublicCameraFeatureCatalog setLensFavoritesTabBarButton:] */

void FUN_1007ce318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ce348; end: 1007ce4cb;  */

void FUN_1007ce348(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008d291c;
  puStack_70 = &UNK_110914548;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ce4cc; end: 1007ce4fb; -[SCMutablePublicCameraFeatureCatalog setLensFeed:] */

void FUN_1007ce4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ce4fc; end: 1007ce667;  */

void FUN_1007ce4fc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061b7730;
  puStack_68 = &UNK_110914578;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ce668; end: 1007ce697; -[SCMutablePublicCameraFeatureCatalog setLensSendToButton:] */

void FUN_1007ce668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ce698; end: 1007ce803;  */

void FUN_1007ce698(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061b78b8;
  puStack_68 = &UNK_110914578;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ce804; end: 1007ce833; -[SCMutablePublicCameraFeatureCatalog setLensSendToTabBarButton:] */

void FUN_1007ce804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ce834; end: 1007ce99f;  */

void FUN_1007ce834(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_100c649b0;
  puStack_68 = &UNK_1109142d8;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ce9a0; end: 1007ce9e7;  */

/* WARNING: Possible PIC construction at 0x0001007ce9d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007ce9d8) */

void FUN_1007ce9a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x30);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007ce9e8; end: 1007ceb6b;  */

void FUN_1007ce9e8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c5d098;
  puStack_70 = &UNK_11084e9b0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ceb6c; end: 1007ceb9b; -[SCMutablePublicCameraFeatureCatalog setCameraBottomUIArbitrator:] */

void FUN_1007ceb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ceb9c; end: 1007ced3f;  */

void FUN_1007ceb9c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_100c64638;
  puStack_88 = &UNK_110914698;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar5;
  func_0x000107c61174(uVar4);
  uStack_78 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a8,auStack_68);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ced40; end: 1007ced6f; -[SCMutablePublicCameraFeatureCatalog setArBarBottomUIArbitrator:] */

void FUN_1007ced40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007ced70; end: 1007ceef3;  */

void FUN_1007ced70(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c658e4;
  puStack_70 = &UNK_11084e9b0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007ceef4; end: 1007cef23; -[SCMutablePublicCameraFeatureCatalog setNgsBarArbitrator:] */

void FUN_1007ceef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cef24; end: 1007cf0a7;  */

void FUN_1007cef24(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c66714;
  puStack_70 = &UNK_11084e9b0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cf0a8; end: 1007cf0d7; -[SCMutablePublicCameraFeatureCatalog setCameraTooltipArbitrator:] */

void FUN_1007cf0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cf0d8; end: 1007cf243;  */

void FUN_1007cf0d8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_100c5ddf8;
  puStack_68 = &UNK_1109146c8;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cf244; end: 1007cf28b;  */

/* WARNING: Possible PIC construction at 0x0001007cf278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cf27c) */

void FUN_1007cf244(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x30);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007cf28c; end: 1007cf3f7;  */

void FUN_1007cf28c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061bae84;
  puStack_68 = &UNK_110914188;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cf3f8; end: 1007cf427; -[SCMutablePublicCameraFeatureCatalog setLensExplorerFromCarouselOverlay:] */

void FUN_1007cf3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cf428; end: 1007cf593;  */

void FUN_1007cf428(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061bb10c;
  puStack_68 = &UNK_1109141e8;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cf594; end: 1007cf5db;  */

/* WARNING: Possible PIC construction at 0x0001007cf5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cf5cc) */

void FUN_1007cf594(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x30);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007cf5dc; end: 1007cf747;  */

void FUN_1007cf5dc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1061bb224;
  puStack_68 = &UNK_1109146f8;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cf748; end: 1007cf777; -[SCMutablePublicCameraFeatureCatalog setLensPushNotification:] */

void FUN_1007cf748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cf778; end: 1007cf8fb;  */

void FUN_1007cf778(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10084df74;
  puStack_70 = &UNK_110914368;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cf8fc; end: 1007cf92b; -[SCMutablePublicCameraFeatureCatalog setLensExplorerSwipeUp:] */

void FUN_1007cf8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cf92c; end: 1007cfaaf;  */

void FUN_1007cf92c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1061bb4a4;
  puStack_70 = &UNK_110914728;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007cfab0; end: 1007cfadf; -[SCMutablePublicCameraFeatureCatalog setLensExplorerTabBarButton:] */

void FUN_1007cfab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007cfae0; end: 1007cfb63; -[_TtC32ExclusiveLensCaptureStyleFeature41ExclusiveLensCameraRingStyleFeaturePlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

/* WARNING: Possible PIC construction at 0x0001007cfb38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007cfb3c) */

void FUN_1007cfae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1007cfb64(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007cfb64; end: 1007cfd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007cfb64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  func_0x000107c4d6fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ee3e58);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ee3e60);
  puVar3 = &UNK_11058ae08;
  func_0x000107c613fc(&UNK_11058ae08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_102a3d2b4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_100f472b4;
  puStack_78 = &UNK_11058ae20;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar3 = PTR_PTR_1126b0110;
  func_0x000107c610f8(PTR_PTR_1126b0110);
  puStack_70 = &UNK_102a3d2ac;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1001de374;
  puStack_78 = &UNK_11058ae48;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c46850(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_68);
  lVar6 = unaff_x20 + _DAT_112ee3e50;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c4972c();
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1007cfd20; end: 1007cfd4b;  */

void FUN_1007cfd20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007cfd4c; end: 1007cfd63;  */

void FUN_1007cfd4c(long param_1,long param_2)

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



/* Entry: 1007cfd64; end: 1007cfef3; -[SCSnapPlusLensOverlayFeatureProviderPlugin setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1007cfd64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b0110;
  uVar2 = param_4;
  func_0x000107c4d6fc(param_4);
  func_0x000107c61180();
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c611a0(param_1 + 0x50,puVar3);
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  func_0x000107c4972c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1007cfef4; end: 1007d0097; -[SCCameraFeatureScopeWorkflow _scheduleFeatureCreation] */

void FUN_1007cfef4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3c46c(param_1);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3c46c(param_1);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3c46c(param_1);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3c46c(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_48,param_1);
  param_1 = param_1 + 0x10;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c5de90();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  lVar3 = lVar2;
  func_0x000107c5c320(lVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1007d0098; end: 1007d00a7; -[SCCameraFeatureScopeWorkflow _scheduleCreationForFeatureActivator:] */

void FUN_1007d0098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_scheduleFeatureCreation__112631988,&PTR___NSConcreteGlobalBlock_110915fd8
            );
  return;
}



/* Entry: 1007d00a8; end: 1007d01e3; -[SCCameraDefaultFeatureActivatorImpl scheduleFeatureCreation:] */

void FUN_1007d00a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1007d03d4;
  puStack_60 = &UNK_110849530;
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  func_0x000107c61184();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174();
  func_0x000107c4b944(uVar2);
  if (*(char *)(puStack_90 + 3) == '\x01') {
    func_0x000107c3c478(param_1);
  }
  func_0x000107c61170(ppuVar1);
  func_0x000107c60bcc(&uStack_98,8);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1007d01e4; end: 1007d023b;  */

void FUN_1007d01e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x30) & 1) != 0) {
      return;
    }
  }
  *(undefined1 *)(lVar1 + 0x30) = 1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1007d023c; end: 1007d03cb; -[SCCameraDefaultFeatureActivatorImpl _scheduleFeatureCreation:] */

void FUN_1007d023c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c5cd40;
  puStack_70 = &UNK_110848708;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_88;
  lStack_68 = param_3;
  func_0x000107c61184();
  if (*(char *)(param_1 + 0x32) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c403c8();
    func_0x000107c61180();
    ppuVar3 = ppuVar1;
    func_0x000107c61174(ppuVar1);
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c5dc64(lVar2);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(ppuVar1);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(lStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1007d03cc; end: 1007d03d3; -[SCCameraUIScopeViewContainerImpl containerViewFuture] */

undefined8 FUN_1007d03cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1007d03d4; end: 1007d0417;  */

void FUN_1007d03d4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c4e524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1007d0418; end: 1007d044f; -[SCResolvableMutablePublicCameraFeatureCatalog resolve] */

void FUN_1007d0418(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2f0;
  func_0x000107c61148(lVar1);
  func_0x000107c611a0(param_1 + 0x2f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007d0450; end: 1007d0497; -[SCCameraFeatureActivationServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001007d0468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d0480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d046c) */
/* WARNING: Removing unreachable block (ram,0x0001007d0484) */

void FUN_1007d0450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1007d0498; end: 1007d04ab; -[SCPublicCameraFeatureCatalogProviderImpl setPublicCameraFeatureCatalog:] */

void FUN_1007d0498(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1007d04ac; end: 1007d0657; -[SCCameraFeatureCapabilitiesImpl initWithConfiguration:] */

undefined8 * FUN_1007d04ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f3758;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(puVar3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61174(puVar2);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar5 = puVar1[5];
    puVar1[5] = puVar4;
    func_0x000107c61170(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c4c420();
    func_0x000107c61180();
    uVar5 = puVar1[6];
    puVar1[6] = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return puVar1;
}



/* Entry: 1007d0658; end: 1007d076f; -[SCCameraFeatureScopeWorkflow _configureCameraFeaturePluginsForCapabilities:publicCameraFeatureCatalog:] */

void FUN_1007d0658(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar2 = *plStack_110;
    do {
      lVar3 = 0;
      do {
        if (*plStack_110 != lVar2) {
          func_0x000107c61128(param_3);
        }
        func_0x000107c40140(*(undefined8 *)(lStack_118 + lVar3 * 8),param_2,
                            *(undefined8 *)(param_1 + 0x20),param_4);
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1007d0770; end: 1007d0773; -[_TtC25SCLensCarouselIntegration41LensCarouselOnCameraFeatureProviderPlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1007d0770(void)

{
  return;
}



/* Entry: 1007d0774; end: 1007d094f; -[SCCameraCaptureFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d07d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d0820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d0830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d0864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d08a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d08dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d08f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d092c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d08f8) */
/* WARNING: Removing unreachable block (ram,0x0001007d08fc) */
/* WARNING: Removing unreachable block (ram,0x0001007d08e0) */
/* WARNING: Removing unreachable block (ram,0x0001007d08a4) */
/* WARNING: Removing unreachable block (ram,0x0001007d0868) */
/* WARNING: Removing unreachable block (ram,0x0001007d0824) */
/* WARNING: Removing unreachable block (ram,0x0001007d07d4) */
/* WARNING: Removing unreachable block (ram,0x0001007d080c) */
/* WARNING: Removing unreachable block (ram,0x0001007d07fc) */
/* WARNING: Removing unreachable block (ram,0x0001007d0810) */
/* WARNING: Removing unreachable block (ram,0x0001007d0930) */
/* WARNING: Removing unreachable block (ram,0x0001007d0938) */

void FUN_1007d0774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b9b20;
  func_0x000107c4064c();
  if ((int)puVar1 == 0) {
    param_1 = param_1 + 0x1a8;
    func_0x000107c61148(param_1);
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c4fc18(param_3,param_2,param_1,7);
  }
  else {
    param_1 = *(long *)(param_1 + 0x40);
    func_0x000107c5dd3c(param_1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1007d0950; end: 1007d0957; -[SCCameraConfigurationImpl verticalToolbar] */

undefined8 FUN_1007d0950(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007d0958; end: 1007d0987;  */

void FUN_1007d0958(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9b50);
  func_0x000107c45db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007d0988; end: 1007d0ab7; -[SCCameraVerticalToolbarConfigurationImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_1007d0988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e89b0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b9ca8;
    puVar4 = (undefined1 *)((long)puVar1 + 0x10);
    func_0x000107c61148(puVar4);
    func_0x000107c44c5c();
    *(char *)((long)puVar1 + 0x20) = (char)puVar3;
    func_0x000107c61170(puVar4);
    puVar4 = (undefined1 *)((long)puVar1 + 0x10);
    func_0x000107c61148();
    puVar5 = puVar4;
    func_0x000107c4980c();
    func_0x000107c61170(puVar4);
    *(bool *)((long)puVar1 + 0x21) = (int)puVar5 == 1;
    *(bool *)((long)puVar1 + 0x22) = (int)puVar5 == 2;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}


