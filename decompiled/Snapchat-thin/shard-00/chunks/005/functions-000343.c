/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007312d4; end: 1007312e3; -[_TtC22SCContextOperaServices22SCContextOperaServices operaLayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007312d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f999c0));
  return;
}



/* Entry: 1007312e4; end: 1007312eb; -[SCCustomVolumeServices customVolumeController] */

undefined8 FUN_1007312e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007312ec; end: 10073131f; -[_TtC32WebBrowserPrivacyConsentServices32WebBrowserPrivacyConsentServices privacyConsentInfoManager] */

void FUN_1007312ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010040dfb0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100731320; end: 100731327; -[SCDiscoverVideoCatalogServices discoverVideoCatalogService] */

undefined8 FUN_100731320(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100731328; end: 10073144f;  */

/* WARNING: Possible PIC construction at 0x00010073133c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073134c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073135c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073136c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073137c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073138c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073139c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007313ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007313bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007313cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007313dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007313ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007313fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073141c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073142c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010073143c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100731430) */
/* WARNING: Removing unreachable block (ram,0x000100731420) */
/* WARNING: Removing unreachable block (ram,0x000100731410) */
/* WARNING: Removing unreachable block (ram,0x000100731400) */
/* WARNING: Removing unreachable block (ram,0x0001007313f0) */
/* WARNING: Removing unreachable block (ram,0x0001007313e0) */
/* WARNING: Removing unreachable block (ram,0x0001007313d0) */
/* WARNING: Removing unreachable block (ram,0x0001007313c0) */
/* WARNING: Removing unreachable block (ram,0x0001007313b0) */
/* WARNING: Removing unreachable block (ram,0x0001007313a0) */
/* WARNING: Removing unreachable block (ram,0x000100731390) */
/* WARNING: Removing unreachable block (ram,0x000100731380) */
/* WARNING: Removing unreachable block (ram,0x000100731370) */
/* WARNING: Removing unreachable block (ram,0x000100731360) */
/* WARNING: Removing unreachable block (ram,0x000100731350) */
/* WARNING: Removing unreachable block (ram,0x000100731340) */
/* WARNING: Removing unreachable block (ram,0x000100731440) */

void FUN_100731328(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100731450; end: 1007314c3; -[SCCameraUIScopedLensOperaServices initWithLensOperaControllerProvider:] */

undefined1 * FUN_100731450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5928;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007314c4; end: 1007315e7;  */

void FUN_1007314c4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007315e8; end: 1007315ef;  */

void FUN_1007315e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007315f0; end: 100731643;  */

void FUN_1007315f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100731644; end: 10073164f;  */

void FUN_100731644(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f98d4();
  func_0x000107c613fc();
  FUN_1007316e4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100731650; end: 1007316e3;  */

void FUN_100731650(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f98d4();
  func_0x000107c613fc();
  FUN_1007316e4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1007316e4; end: 1007318bf;  */

void FUN_1007316e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8240;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1007318c0; end: 1007319a3; -[SCLegacyLensTooltipsServiceProvider provide] */

void FUN_1007318c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbc50;
  func_0x000107c610f4(PTR_PTR_1126bbc50);
  func_0x000107c47154();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007319a4; end: 100731a17; -[SCLegacyLensTooltipsServices initWithLegacyLensTooltipsService:] */

undefined1 * FUN_1007319a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700ae8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100731a18; end: 100731a4b;  */

void FUN_100731a18(void)

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



/* Entry: 100731a4c; end: 100731a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731a4c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ef6f40;
    uVar6 = 0;
    FUN_1000285a8(0x112ef6f40);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_100731af8;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_100731af8:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ef6f40;
    FUN_1000285a8(0x112ef6f40,&UNK_10db25c10);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad188;
      func_0x000107c610f8();
      func_0x000107c473d0();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003f,0x800000010f128ea0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100731bb8);
  (*pcVar1)();
}



/* Entry: 100731a54; end: 100731bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731a54(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ef6f40;
    uVar6 = 0;
    FUN_1000285a8(0x112ef6f40);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_100731af8;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_100731af8:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ef6f40;
    FUN_1000285a8(0x112ef6f40,&UNK_10db25c10);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad188;
      func_0x000107c610f8();
      func_0x000107c473d0();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003f,0x800000010f128ea0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100731bb8);
  (*pcVar1)();
}



/* Entry: 100731bb8; end: 100731c2b; -[SCCameraUIScopedLensProcessingServices initWithLensProcessingServices:] */

undefined1 * FUN_100731bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112703878;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100731c2c; end: 100731c33;  */

void FUN_100731c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100731c34; end: 100731c87;  */

void FUN_100731c34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100731c88; end: 100731c8f;  */

void FUN_100731c88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001d1708();
  func_0x000107c613fc();
  FUN_100731d04(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100731c90; end: 100731d03;  */

void FUN_100731c90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001d1708();
  func_0x000107c613fc();
  FUN_100731d04(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100731d04; end: 100731e6b;  */

void FUN_100731d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8338;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100731e6c; end: 100731f2b; -[SCLensesUIControllerStudySettingsProviderServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731e6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127828f4;
    func_0x000107c61148();
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_1091aa17c;
  puStack_40 = &UNK_110adf7b8;
  puVar1 = PTR_PTR_1126ae720;
  lStack_38 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126dda48;
  func_0x000107c610f4(PTR_PTR_1126dda48);
  func_0x000107c471fc();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100731f2c; end: 100731f9f; -[SCLensesStudySettingsProviderServices initWithLensCarouselStudySettingsProvider:] */

undefined1 * FUN_100731f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701ee8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100731fa0; end: 100731fcb;  */

void FUN_100731fa0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100731fcc; end: 100731fd3;  */

void FUN_100731fcc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100731fd4; end: 100732027;  */

void FUN_100731fd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732028; end: 100732de3;  */

void FUN_100732028(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  func_0x0001005c7100();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  *(undefined8 *)(param_2 + 0xb0) = uStack_108;
  *(undefined8 *)(param_2 + 0xb8) = uStack_110;
  *(undefined8 *)(param_2 + 0xc0) = uStack_118;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c61174();
  uVar19 = uStack_f8;
  func_0x000107c61174();
  uVar20 = uStack_100;
  func_0x000107c61174();
  uVar21 = uStack_108;
  func_0x000107c61174(uStack_108);
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abd40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar22 = auStack_70[0];
  func_0x000107c61174();
  uVar23 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000016;
  uVar23 = uVar29;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0db850);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0db880);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  uVar23 = uVar28;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6680);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0dbd30);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc66c0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0db8e0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = uVar28;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6750);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar23);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0dbd50);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000018;
  uVar23 = uVar26;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc66a0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar28);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar23 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0dbd80);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar23 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar27);
  uVar23 = uVar29;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efb78d0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar20);
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar21);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar29);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar26);
  func_0x000107c61174(uVar25);
  func_0x000107c61174(uVar27);
  uVar23 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1f5d0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar23);
  lVar30 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar27);
  func_0x000107c61174();
  uVar23 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0dbdb0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(uVar23);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 != 0) {
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    *(long *)(param_2 + 200) = lVar30;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100732de4);
  (*pcVar1)();
}



/* Entry: 100732de4; end: 100732e2f;  */

void FUN_100732de4(void)

{
  long unaff_x20;
  
  FUN_100732028(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 100732e30; end: 100732e37;  */

void FUN_100732e30(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732e38; end: 100732e8b;  */

void FUN_100732e38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732e8c; end: 100732e93;  */

void FUN_100732e8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732e94; end: 100732ee7;  */

void FUN_100732e94(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732ee8; end: 100732eef;  */

void FUN_100732ee8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732ef0; end: 100732f43;  */

void FUN_100732ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100732f44; end: 100732f4b;  */

void FUN_100732f44(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  func_0x0001005c2b8c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100732fd0(0);
  func_0x000107c613fc();
  FUN_100732ff0(lStack_38,uVar1);
  *(long *)(unaff_x20 + 0x10) = lStack_38;
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(lStack_38 + 0x10);
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100732f4c; end: 100732fcf;  */

void FUN_100732f4c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  func_0x0001005c2b8c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100732fd0(0);
  func_0x000107c613fc();
  FUN_100732ff0(lStack_38,uVar1);
  *(long *)(param_2 + 0x10) = lStack_38;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lStack_38 + 0x10);
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100732fd0; end: 100732fef;  */

void FUN_100732fd0(void)

{
  func_0x000107c61168(&PTR_PTR_112eec190);
  return;
}



/* Entry: 100732ff0; end: 10073311b;  */

void FUN_100732ff0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  FUN_1000285a8(0x112eec138,&UNK_10db19d40);
  func_0x000107c613fc();
  puVar1 = &UNK_102ae3470;
  FUN_1000bdd8c(&UNK_102ae3470,0);
  uVar2 = 0x112eec140;
  FUN_1000285a8(0x112eec140,&UNK_10db19d48);
  puVar3 = &UNK_102ae3538;
  FUN_1000cb480(&UNK_102ae3538,0,uVar2);
  puVar4 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  uVar2 = 0x112eec148;
  FUN_1000285a8(0x112eec148,&UNK_10db19d50);
  puVar3 = &UNK_102ae3534;
  FUN_1000cb480(&UNK_102ae3534,0,uVar2);
  puVar5 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  puVar3 = PTR_PTR_1126abf08;
  func_0x000107c610f8();
  func_0x000107c47348();
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 10073311c; end: 10073313b;  */

void FUN_10073311c(void)

{
  func_0x000107c61168(&PTR_PTR_112886d10);
  return;
}



/* Entry: 10073313c; end: 100733167; +[SCGrapheneFideliusMetric appOpen] */

void FUN_10073313c(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100733168; end: 10073320b; -[SCLensCarouselLensInjectionServices initWithLensInjector:lensFetchObserver:] */

undefined1 *
FUN_100733168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112703730;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10073320c; end: 100733213;  */

void FUN_10073320c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733214; end: 100733267;  */

void FUN_100733214(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733268; end: 100733ae7;  */

void FUN_100733268(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100239d74();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  puVar1 = PTR_PTR_1126a8318;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar13 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar14 = uStack_d8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc7030);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc6a60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef25be0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef132d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6750);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6a80);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  uVar16 = uVar17;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(param_2 + 0x80) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 100733ae8; end: 100733b23;  */

void FUN_100733ae8(void)

{
  long unaff_x20;
  
  FUN_100733268(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100733b24; end: 100733b2b;  */

void FUN_100733b24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733b2c; end: 100733b7f;  */

void FUN_100733b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733b80; end: 100733b87;  */

void FUN_100733b80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733b88; end: 100733bdb;  */

void FUN_100733b88(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733bdc; end: 100733f9f;  */

void FUN_100733bdc(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100233bc0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  FUN_100734968();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = uVar13;
  FUN_1007349f8();
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  uVar15 = uVar14;
  func_0x000107c6157c();
  func_0x000100734a8c();
  func_0x000107c61574(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(param_2 + 0x78) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 100733fa0; end: 100733fdb;  */

void FUN_100733fa0(void)

{
  long unaff_x20;
  
  FUN_100733bdc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100733fdc; end: 100733fe3;  */

void FUN_100733fdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100733fe4; end: 100734037;  */

void FUN_100733fe4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100734038; end: 100734047;  */

void FUN_100734038(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100211e40();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a7f00;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc2fc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100734048; end: 100734413;  */

void FUN_100734048(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100211e40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a7f00;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc2fc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100734414; end: 1007344e3;  */

void FUN_100734414(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uStack_42;
  
  iVar3 = *param_2;
  uStack_42 = 0;
  iVar2 = *param_1;
  if (param_1[1] == 3) {
    piVar1 = param_1;
    FUN_10072d5c4(param_1,(long)&uStack_42 + 1);
    iVar2 = (int)piVar1;
  }
  if (param_2[1] == 3) {
    piVar1 = param_2;
    func_0x00010072d5c8(param_2,&uStack_42);
    iVar3 = (int)piVar1;
  }
  if ((iVar3 <= iVar2) && (iVar2 <= iVar3)) {
    if ((uStack_42._1_1_ <= (byte)uStack_42) &&
       (((byte)uStack_42 <= uStack_42._1_1_ && (iVar2 != 0)))) {
      func_0x000107c610b0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),(long)iVar2);
    }
  }
  return;
}



/* Entry: 1007344e4; end: 10073459b;  */

undefined8 FUN_1007344e4(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  lVar2 = *param_2;
  if (((lVar2 != 0) && (param_1[0xb] != 0)) && (FUN_100734414(), (int)lVar2 != 0)) {
    return 0x1e;
  }
  if (param_2[2] == 0) {
LAB_100734544:
    plVar4 = (long *)param_2[1];
    if (plVar4 != (long *)0x0) {
      lVar2 = 0;
      do {
        if (*plVar4 == lVar2) goto LAB_10073458c;
        piVar5 = *(int **)(plVar4[1] + lVar2 * 8);
        lVar2 = lVar2 + 1;
      } while (*piVar5 != 4);
      lVar2 = *(long *)(piVar5 + 2);
      if ((lVar2 != 0) && (FUN_1004d23d0(lVar2,*(undefined8 *)(*param_1 + 0x18)), (int)lVar2 != 0))
      goto LAB_100734534;
    }
LAB_10073458c:
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(*param_1 + 8);
    func_0x000107c2b170();
    if (iVar1 == 0) goto LAB_100734544;
LAB_100734534:
    uVar3 = 0x1f;
  }
  return uVar3;
}



/* Entry: 10073459c; end: 1007345d7;  */

undefined8 FUN_10073459c(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    uVar3 = 0;
    do {
      if (*(long *)(param_1[1] + uVar3 * 8) == param_2) {
        if ((param_1 == (ulong *)0x0) || (uVar4 = *param_1, uVar4 <= uVar3)) {
          uVar5 = 0;
        }
        else {
          puVar1 = (undefined8 *)(param_1[1] + uVar3 * 8);
          uVar5 = *puVar1;
          uVar2 = uVar3;
          if ((uVar4 - 1 != uVar3) &&
             (uVar2 = uVar4 - 1, (uVar4 + ~uVar3 & 0x1fffffffffffffff) != 0)) {
            func_0x000107c610b8(puVar1,puVar1 + 1);
            uVar2 = *param_1 - 1;
          }
          *param_1 = uVar2;
        }
        return uVar5;
      }
      uVar3 = uVar3 + 1;
    } while (*param_1 != uVar3);
  }
  return 0;
}



/* Entry: 1007345d8; end: 100734653;  */

undefined8 FUN_1007345d8(ulong *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((param_1 == (ulong *)0x0) || (uVar3 = *param_1, uVar3 <= param_2)) {
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined8 *)(param_1[1] + param_2 * 8);
    uVar4 = *puVar1;
    uVar2 = param_2;
    if ((uVar3 - 1 != param_2) && (uVar2 = uVar3 - 1, (uVar3 + ~param_2 & 0x1fffffffffffffff) != 0))
    {
      func_0x000107c610b8(puVar1,puVar1 + 1);
      uVar2 = *param_1 - 1;
    }
    *param_1 = uVar2;
  }
  return uVar4;
}



/* Entry: 100734654; end: 100734737; -[SCAdaptiveContentFetchingServiceProvider provide] */

void FUN_100734654(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b9f50;
  func_0x000107c610f4(PTR_PTR_1126b9f50);
  func_0x000107c45620();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100734738; end: 1007347ab; -[SCAdaptiveContentFetchingServices initWithAdaptiveContentFetcherFactoryLazy:] */

undefined1 * FUN_100734738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e92f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007347ac; end: 1007347f7;  */

void FUN_1007347ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007347f8; end: 1007347ff;  */

void FUN_1007347f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 400);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100734800; end: 100734853;  */

void FUN_100734800(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 400);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100734854; end: 10073485b;  */

void FUN_100734854(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x198);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073485c; end: 1007348af;  */

void FUN_10073485c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x198);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007348b0; end: 1007348b7;  */

void FUN_1007348b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x180);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007348b8; end: 10073490b;  */

void FUN_1007348b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x180);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073490c; end: 100734913;  */

void FUN_10073490c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x188);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100734914; end: 100734967;  */

void FUN_100734914(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x188);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100734968; end: 1007349f7;  */

void FUN_100734968(undefined8 param_1)

{
  if (lRam0000000112de65f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e664374);
  return;
}



/* Entry: 1007349f8; end: 1007350cb;  */

void FUN_1007349f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x30) = param_8;
  *(undefined8 *)(unaff_x20 + 0x38) = param_9;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_12;
  *(undefined8 *)(unaff_x20 + 0x28) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  return;
}



/* Entry: 1007350cc; end: 100735107;  */

void FUN_1007350cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100735108; end: 100735217;  */

/* WARNING: Possible PIC construction at 0x00010073512c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100735130) */
/* WARNING: Removing unreachable block (ram,0x000100735138) */
/* WARNING: Removing unreachable block (ram,0x00010073514c) */
/* WARNING: Removing unreachable block (ram,0x000100735154) */

undefined4 FUN_100735108(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  undefined8 unaff_x21;
  ulong uVar7;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 == -1) {
    return 1;
  }
  if (param_2 == 0) {
    param_2 = 0x38e;
    unaff_x30 = 0x100735130;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else if (param_2 - 1U < 8) {
    lVar4 = (ulong)(param_2 - 1U) * 0x28;
    switch(param_2) {
    case 1:
      lVar4 = param_1;
      func_0x000107c2b66c();
      uVar2 = 3;
      if (((int)lVar4 != 0) && (uVar2 = 3, (*(byte *)(param_1 + 0x39) & 0x20) != 0)) {
        uVar2 = 1;
      }
      return uVar2;
    default:
      plVar6 = *(long **)(param_1 + 0xa0);
      if ((plVar6 == (long *)0x0) || ((*plVar6 == 0 && (plVar6[1] == 0)))) {
        lVar4 = param_1;
        FUN_10072cbdc();
        uVar2 = 3;
        if (((int)lVar4 != 0) && (uVar2 = 3, (*(byte *)(param_1 + 0x39) & 0x20) != 0)) {
          uVar2 = 1;
        }
        return uVar2;
      }
      param_2 = *(int *)(lVar4 + 0x1133111e0);
      break;
    case 6:
    case 7:
      if (*(long *)(param_1 + 0xa0) == 0) {
        return 3;
      }
      param_2 = *(int *)(lVar4 + 0x1133111e0);
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar6 = *(long **)(param_1 + 0xa0);
  if (plVar6 != (long *)0x0) {
    puVar5 = (ulong *)plVar6[1];
    if (puVar5 != (ulong *)0x0) {
      uVar7 = 0;
      do {
        if (*puVar5 <= uVar7) break;
        iVar3 = (int)*(undefined8 *)(puVar5[1] + uVar7 * 8);
        func_0x000107c2b550();
        if (iVar3 == param_2) {
          return 2;
        }
        uVar7 = uVar7 + 1;
        puVar5 = (ulong *)plVar6[1];
      } while (puVar5 != (ulong *)0x0);
    }
    puVar5 = (ulong *)*plVar6;
    if (puVar5 != (ulong *)0x0) {
      uVar7 = 0;
      do {
        if (*puVar5 <= uVar7) {
          return 3;
        }
        iVar3 = (int)*(undefined8 *)(puVar5[1] + uVar7 * 8);
        func_0x000107c2b550();
        if (iVar3 == param_2) {
          return 1;
        }
        uVar7 = uVar7 + 1;
        puVar5 = (ulong *)*plVar6;
      } while (puVar5 != (ulong *)0x0);
    }
  }
  return 3;
}



/* Entry: 100735218; end: 10073521f; -[SCAdaptiveContentFetchingServices adaptiveContentFetcherFactoryLazy] */

undefined8 FUN_100735218(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100735220; end: 100735457;  */

void FUN_100735220(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  ulong *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  code *pcVar13;
  int iVar14;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20);
    bVar1 = (*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x40) == 0;
  }
  else {
    bVar1 = true;
    uVar6 = 6;
  }
  if (0 < *(int *)(param_1 + 0x94)) {
    uVar9 = 0;
    iVar14 = 0;
    iVar10 = 0;
    uVar12 = 0;
    pcVar13 = *(code **)(param_1 + 0x38);
    do {
      puVar5 = *(ulong **)(param_1 + 0x98);
      if ((puVar5 == (ulong *)0x0) || (*puVar5 <= uVar9)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(puVar5[1] + uVar9 * 8);
      }
      uVar8 = (undefined4)uVar9;
      if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
         ((*(byte *)(lVar7 + 0x39) >> 1 & 1) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = uVar8;
        *(undefined4 *)(param_1 + 0xb0) = 0x22;
        *(long *)(param_1 + 0xb8) = lVar7;
        iVar2 = 0;
        (*pcVar13)(0,param_1);
        if (iVar2 == 0) {
          return;
        }
      }
      if ((bVar1) && ((*(byte *)(lVar7 + 0x39) >> 2 & 1) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = uVar8;
        *(undefined4 *)(param_1 + 0xb0) = 0x28;
        *(long *)(param_1 + 0xb8) = lVar7;
        iVar2 = 0;
        (*pcVar13)(0,param_1);
        if (iVar2 == 0) {
          return;
        }
      }
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          lVar3 = lVar7;
          FUN_10073554c();
          if ((int)lVar3 == 0) {
            uVar4 = 0x18;
LAB_100735334:
            *(undefined4 *)(param_1 + 0xac) = uVar8;
            *(undefined4 *)(param_1 + 0xb0) = uVar4;
            *(long *)(param_1 + 0xb8) = lVar7;
            iVar2 = 0;
            (*pcVar13)(0,param_1);
            if (iVar2 == 0) {
              return;
            }
          }
        }
        else {
          lVar3 = lVar7;
          FUN_10073554c();
          if ((int)lVar3 != 0) {
            uVar4 = 0x25;
            goto LAB_100735334;
          }
        }
      }
      if ((0 < *(int *)(*(long *)(param_1 + 0x20) + 0x20)) &&
         (lVar3 = lVar7, FUN_100735458(lVar7,uVar6,iVar14 == 1), (int)lVar3 != 1)) {
        *(undefined4 *)(param_1 + 0xac) = uVar8;
        *(undefined4 *)(param_1 + 0xb0) = 0x1a;
        *(long *)(param_1 + 0xb8) = lVar7;
        iVar14 = 0;
        (*pcVar13)(0,param_1);
        if (iVar14 == 0) {
          return;
        }
      }
      if ((((1 < uVar9) && ((*(byte *)(lVar7 + 0x38) >> 5 & 1) == 0)) &&
          (*(long *)(lVar7 + 0x28) != -1)) &&
         (*(long *)(lVar7 + 0x28) + (long)iVar10 + 1 < (long)uVar12)) {
        *(undefined4 *)(param_1 + 0xac) = uVar8;
        *(undefined4 *)(param_1 + 0xb0) = 0x19;
        *(long *)(param_1 + 0xb8) = lVar7;
        iVar14 = 0;
        (*pcVar13)(0,param_1);
        if (iVar14 == 0) {
          return;
        }
      }
      uVar11 = (uint)uVar12;
      if ((*(ulong *)(lVar7 + 0x38) & 0x20) == 0) {
        uVar11 = uVar11 + 1;
      }
      uVar12 = (ulong)uVar11;
      if (((uint)*(ulong *)(lVar7 + 0x38) >> 10 & 1) == 0) {
        iVar14 = 1;
      }
      else {
        if ((*(long *)(lVar7 + 0x30) != -1) && (*(long *)(lVar7 + 0x30) < (long)uVar9)) {
          *(undefined4 *)(param_1 + 0xac) = uVar8;
          *(undefined4 *)(param_1 + 0xb0) = 0x26;
          *(long *)(param_1 + 0xb8) = lVar7;
          iVar14 = 0;
          (*pcVar13)(0,param_1);
          if (iVar14 == 0) {
            return;
          }
        }
        iVar10 = iVar10 + 1;
        iVar14 = 2;
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x94));
  }
  return;
}



/* Entry: 100735458; end: 1007354d7;  */

long * FUN_100735458(long *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  
  plVar3 = param_1;
  FUN_10072cbdc();
  if ((int)plVar3 != 0) {
    if (param_2 == -1) {
      return (long *)0x1;
    }
    if (param_2 - 1U < 9) {
      plVar3 = (long *)((ulong)(param_2 - 1U) * 0x30 + 0x113311710);
      iVar4 = (int)param_3;
      switch(param_2) {
      case 1:
        uVar5 = (uint)param_1[7];
        if (((uVar5 >> 2 & 1) == 0) || ((*(byte *)(param_1 + 9) >> 1 & 1) != 0)) {
          if (iVar4 == 0) {
            if ((((uVar5 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) & 0x88) != 0)) &&
               (((uVar5 >> 3 & 1) == 0 || ((char)param_1[10] < '\0')))) {
              return (long *)0x1;
            }
          }
          else if (((uVar5 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)) {
            uVar1 = 0;
            if ((param_1[7] & 1U) != 0) {
              uVar1 = uVar5 >> 4 & 1;
            }
            uVar2 = 1;
            if ((~uVar5 & 0x2040) != 0) {
              uVar2 = uVar1;
            }
            return (long *)(ulong)uVar2;
          }
        }
        return (long *)0x0;
      case 2:
        uVar5 = (uint)param_1[7];
        if (((uVar5 >> 2 & 1) == 0) || ((*(byte *)(param_1 + 9) & 1) != 0)) {
          if (iVar4 == 0) {
            if ((((uVar5 >> 3 & 1) == 0) || ((*(byte *)(param_1 + 10) >> 6 & 1) != 0)) &&
               (((uVar5 >> 1 & 1) == 0 || ((*(byte *)(param_1 + 8) & 0xa8) != 0)))) {
              return (long *)0x1;
            }
          }
          else if (((uVar5 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)) {
            uVar1 = 0;
            if ((param_1[7] & 1U) != 0) {
              uVar1 = uVar5 >> 4 & 1;
            }
            uVar2 = 1;
            if ((~uVar5 & 0x2040) != 0) {
              uVar2 = uVar1;
            }
            return (long *)(ulong)uVar2;
          }
        }
        return (long *)0x0;
      case 3:
        func_0x000107c2b674();
        if ((iVar4 == 0) && ((int)plVar3 != 0)) {
          if (((*(byte *)(param_1 + 7) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 5 & 1) != 0))
          {
            plVar3 = (long *)0x1;
          }
          else {
            plVar3 = (long *)0x0;
          }
        }
        return plVar3;
      case 4:
        plVar3 = param_1;
        func_0x00010ae5661c(param_1,param_3);
        if ((iVar4 == 0) && ((int)plVar3 != 0)) {
          if (((*(byte *)(param_1 + 7) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) & 0xc0) != 0)) {
            plVar3 = (long *)0x1;
          }
          else {
            plVar3 = (long *)0x0;
          }
        }
        return plVar3;
      case 5:
        plVar3 = param_1;
        func_0x00010ae5661c(param_1,param_3);
        if ((iVar4 == 0) && ((int)plVar3 != 0)) {
          if (((*(byte *)(param_1 + 7) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 5 & 1) != 0))
          {
            plVar3 = (long *)0x1;
          }
          else {
            plVar3 = (long *)0x0;
          }
        }
        return plVar3;
      case 6:
        uVar5 = (uint)param_1[7];
        if (iVar4 == 0) {
          if (((uVar5 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 1 & 1) != 0)) {
            return (long *)0x1;
          }
        }
        else if (((uVar5 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)) {
          uVar1 = 0;
          if ((param_1[7] & 1U) != 0) {
            uVar1 = uVar5 >> 4 & 1;
          }
          uVar2 = 1;
          if ((~uVar5 & 0x2040) != 0) {
            uVar2 = uVar1;
          }
          return (long *)(ulong)uVar2;
        }
        return (long *)0x0;
      case 7:
        return (long *)0x1;
      case 9:
        uVar5 = (uint)param_1[7];
        if (iVar4 == 0) {
          if ((uVar5 >> 1 & 1) == 0) {
            if ((uVar5 >> 2 & 1) == 0) {
              return (long *)0x0;
            }
          }
          else {
            if ((uVar5 >> 2 & 1) == 0) {
              return (long *)0x0;
            }
            if (param_1[8] == 0) {
              return (long *)0x0;
            }
            if ((param_1[8] & 0xffffffffffffff3fU) != 0) {
              return (long *)0x0;
            }
          }
          if ((param_1[9] == 0x40) &&
             ((plVar3 = param_1, func_0x00010ae4b974(param_1,0x7e,0xffffffff), (int)plVar3 < 0 ||
              ((((puVar6 = *(ulong **)(*param_1 + 0x48), puVar6 != (ulong *)0x0 &&
                 (((ulong)plVar3 & 0xffffffff) < *puVar6)) &&
                (lVar7 = *(long *)(puVar6[1] + ((ulong)plVar3 & 0xffffffff) * 8), lVar7 != 0)) &&
               (0 < *(int *)(lVar7 + 8))))))) {
            return (long *)0x1;
          }
        }
        else if (((uVar5 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)) {
          uVar1 = 0;
          if ((param_1[7] & 1U) != 0) {
            uVar1 = uVar5 >> 4 & 1;
          }
          uVar2 = 1;
          if ((~uVar5 & 0x2040) != 0) {
            uVar2 = uVar1;
          }
          return (long *)(ulong)uVar2;
        }
        return (long *)0x0;
      }
      if (iVar4 == 0) {
        return (long *)0x1;
      }
      uVar5 = (uint)param_1[7];
      if (((uVar5 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 8) >> 2 & 1) == 0)) {
        return (long *)0x0;
      }
      uVar1 = 0;
      if ((param_1[7] & 1U) != 0) {
        uVar1 = uVar5 >> 4 & 1;
      }
      uVar2 = 1;
      if ((~uVar5 & 0x2040) != 0) {
        uVar2 = uVar1;
      }
      return (long *)(ulong)uVar2;
    }
  }
  return (long *)0xffffffff;
}



/* Entry: 1007354d8; end: 10073554b;  */

uint FUN_1007354d8(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ulong *)(param_2 + 0x38);
  if (((uVar3 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0x48) & 1) != 0)) {
    if (param_3 == 0) {
      if ((((uVar3 >> 3 & 1) == 0) || ((*(byte *)(param_2 + 0x50) >> 6 & 1) != 0)) &&
         (((uVar3 >> 1 & 1) == 0 || ((*(byte *)(param_2 + 0x40) & 0xa8) != 0)))) {
        return 1;
      }
    }
    else if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 2 & 1) != 0)) {
      uVar1 = 0;
      if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
        uVar1 = uVar3 >> 4 & 1;
      }
      uVar2 = 1;
      if ((~uVar3 & 0x2040) != 0) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 10073554c; end: 1007355a7;  */

void FUN_10073554c(void)

{
  FUN_10072cbdc();
  return;
}



/* Entry: 1007355a8; end: 10073573b;  */

void FUN_1007355a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(lVar7 + 0x70) != '\0') {
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    *(undefined8 *)(param_1 + 0xac) = 0x4100000000;
    iVar1 = 0;
    (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return;
    }
  }
  if (*(long **)(lVar7 + 0x38) != (long *)0x0) {
    lVar8 = **(long **)(lVar7 + 0x38);
    plVar5 = (long *)(lVar7 + 0x48);
    if (*plVar5 != 0) {
      FUN_1001e33e0();
      *plVar5 = 0;
    }
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x38) + 8) + lVar9 * 8);
        uVar2 = uVar6;
        func_0x000107c613d0(uVar6);
        uVar3 = uVar4;
        func_0x000107c2b67c(uVar4,uVar6,uVar2,*(undefined4 *)(lVar7 + 0x40),plVar5);
        if (0 < (int)uVar3) goto LAB_100735688;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0xac) = 0x3e00000000;
      iVar1 = 0;
      (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return;
      }
    }
  }
LAB_100735688:
  if ((*(long *)(lVar7 + 0x50) != 0) &&
     (uVar2 = uVar4,
     func_0x000107c2b680(uVar4,*(long *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),0),
     (int)uVar2 < 1)) {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0xac) = 0x3f00000000;
    iVar1 = 0;
    (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return;
    }
  }
  if ((*(long *)(lVar7 + 0x60) != 0) &&
     (func_0x000107c34fb8(uVar4,*(long *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68),0,7,0),
     (int)uVar4 < 1)) {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0xac) = 0x4000000000;
    (**(code **)(param_1 + 0x38))(0,param_1);
  }
  return;
}



/* Entry: 10073573c; end: 100735ab7;  */

undefined8 FUN_10073573c(ulong *param_1)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = (uint)*(undefined8 *)(param_1[4] + 0x18);
  if ((uVar2 >> 2 & 1) != 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      uVar5 = 1;
      if (param_1[0x1b] != 0) {
        return 1;
      }
    }
    else {
      if ((ulong *)param_1[0x13] == (ulong *)0x0) {
        return 1;
      }
      uVar5 = *(ulong *)param_1[0x13];
      if ((int)uVar5 + -1 < 0) {
        return 1;
      }
      uVar5 = uVar5 & 0xffffffff;
    }
    uVar9 = 0;
    do {
      *(int *)((long)param_1 + 0xac) = (int)uVar9;
      puVar3 = (ulong *)param_1[0x13];
      if ((puVar3 == (ulong *)0x0) || (*puVar3 <= uVar9)) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = *(long **)(puVar3[1] + uVar9 * 8);
      }
      param_1[0x17] = (ulong)plVar6;
      param_1[0x18] = 0;
      param_1[0x1a] = 0;
      iVar10 = 0;
      do {
        uStack_90 = 0;
        if ((code *)param_1[0xb] == (code *)0x0) {
          uStack_70 = 0;
          uStack_74 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          uVar7 = *(undefined8 *)(*plVar6 + 0x18);
          puVar3 = param_1;
          iStack_78 = iVar10;
          func_0x000107c2b61c(param_1,&uStack_80,&uStack_88,&uStack_70,&uStack_74,&iStack_78,
                              param_1[3]);
          if ((int)puVar3 == 0) {
            puVar3 = param_1;
            (*(code *)param_1[0x10])(param_1,uVar7);
            if (puVar3 != (ulong *)0x0 || uStack_80 == 0) {
              func_0x000107c2b61c(param_1,&uStack_80,&uStack_88,&uStack_70,&uStack_74,&iStack_78,
                                  puVar3);
              if (puVar3 != (ulong *)0x0) {
                uVar8 = *puVar3;
                if (uVar8 != 0) {
                  uVar11 = 0;
                  do {
                    uVar4 = *(ulong *)(puVar3[1] + uVar11 * 8);
                    if (uVar4 != 0) {
                      uStack_68 = uVar4;
                      FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
                      uVar8 = *puVar3;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar8);
                }
                FUN_1001e33e0(puVar3[1]);
                FUN_1001e33e0(puVar3);
              }
              goto LAB_100735844;
            }
          }
          else {
LAB_100735844:
            if (uStack_80 == 0) {
              iVar1 = 0;
              uVar8 = 0;
              goto LAB_10073590c;
            }
          }
          param_1[0x18] = uStack_70;
          *(undefined4 *)(param_1 + 0x1a) = uStack_74;
          *(int *)((long)param_1 + 0xd4) = iStack_78;
          uStack_90 = uStack_80;
          iVar1 = 1;
          uVar8 = uStack_88;
        }
        else {
          puVar3 = param_1;
          (*(code *)param_1[0xb])(param_1,&uStack_90,plVar6);
          iVar1 = (int)puVar3;
          uVar8 = 0;
        }
LAB_10073590c:
        if (iVar1 == 0) {
LAB_1007359f4:
          *(undefined4 *)(param_1 + 0x16) = 3;
          iVar10 = 0;
          (*(code *)param_1[7])(0,param_1);
          uStack_68 = uStack_90;
          FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
          uStack_68 = uVar8;
          FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
          param_1[0x19] = 0;
          if (iVar10 == 0) {
            return 0;
          }
          goto LAB_100735a40;
        }
        param_1[0x19] = uStack_90;
        puVar3 = param_1;
        (*(code *)param_1[0xc])();
        if ((int)puVar3 == 0) goto LAB_100735a50;
        if (uVar8 == 0) {
LAB_100735960:
          puVar3 = param_1;
          (*(code *)param_1[0xd])(param_1,uStack_90,plVar6);
          if ((int)puVar3 == 0) {
LAB_100735a50:
            uStack_68 = uStack_90;
            FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
            uStack_68 = uVar8;
            FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
            param_1[0x19] = 0;
            return 0;
          }
        }
        else {
          puVar3 = param_1;
          (*(code *)param_1[0xc])(param_1,uVar8);
          if ((int)puVar3 == 0) goto LAB_100735a50;
          puVar3 = param_1;
          (*(code *)param_1[0xd])(param_1,uVar8,plVar6);
          if ((int)puVar3 != 2) {
            if ((int)puVar3 == 0) goto LAB_100735a50;
            goto LAB_100735960;
          }
        }
        uStack_68 = uStack_90;
        FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
        uStack_68 = uVar8;
        FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
        uStack_90 = 0;
        iVar1 = *(int *)((long)param_1 + 0xd4);
        if (iVar10 == iVar1) {
          uVar8 = 0;
          goto LAB_1007359f4;
        }
        iVar10 = iVar1;
      } while (iVar1 != 0x807f);
      uStack_68 = 0;
      FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
      uStack_68 = 0;
      FUN_1004d164c(&uStack_68,&UNK_110c871b0,0);
      param_1[0x19] = 0;
LAB_100735a40:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar5);
  }
  return 1;
}



/* Entry: 100735ab8; end: 100735c8b;  */

int FUN_100735ab8(int *param_1,long *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_58;
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  bVar1 = param_2 == (long *)0x0;
  if (bVar1) {
    param_2 = *(long **)param_3[1];
  }
  uVar9 = (ulong)bVar1;
  lVar4 = *(long *)*param_2;
  if ((lVar4 == 0) || (uStack_58 = param_4, func_0x0001004d1e5c(lVar4,2), lVar4 != 2)) {
    uVar9 = 0;
    uVar8 = 0;
    iVar7 = 0x38;
  }
  else {
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*param_2 + 0x30);
      FUN_100736868();
    }
    lVar5 = lVar4;
    func_0x000107c34fa4(lVar4,0xffffffff,&uStack_58);
    iVar3 = (int)lVar5;
    if (iVar3 == 0) {
      while( true ) {
        if (param_3 == (ulong *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *param_3;
        }
        uVar6 = *(undefined8 *)param_2[1];
        FUN_10072ec28(uVar6);
        if (uVar10 <= uVar9) break;
        param_2 = *(long **)(param_3[1] + uVar9 * 8);
        lVar5 = *(long *)*param_2;
        if ((lVar5 == 0) || (func_0x0001004d1e5c(lVar5,2), lVar5 != 2)) {
          iVar3 = 0x38;
          goto LAB_100735c20;
        }
        FUN_10021f114(lVar4);
        if (*param_2 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(long *)(*param_2 + 0x30);
          FUN_100736868();
        }
        lVar5 = lVar4;
        func_0x000107c34fa4(lVar4,uVar6,&uStack_58);
        iVar3 = (int)lVar5;
        if (iVar3 != 0) goto LAB_100735c20;
        uVar9 = uVar9 + 1;
      }
      lVar5 = lVar4;
      func_0x000107c34fa4(lVar4,uVar6,&uStack_58);
      iVar3 = (int)lVar5;
    }
    else {
      uVar9 = 0;
    }
LAB_100735c20:
    if (lVar4 != 0) {
      FUN_10021f114(lVar4);
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar7 = 0x3c;
    if (uStack_58 != param_4) {
      iVar7 = 0x3d;
    }
    if (iVar3 != 0x3c) {
      iVar7 = iVar3;
    }
    uVar8 = (uint)(iVar3 - 0x3bU < 2);
  }
  if (param_1 != (int *)0x0) {
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = uVar8;
    }
    *param_1 = (int)uVar9 - uVar2;
  }
  return iVar7;
}



/* Entry: 100735c8c; end: 100735f63;  */

void FUN_100735c8c(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long *plVar3;
  ulong *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  puVar4 = *(ulong **)(param_1 + 0x98);
  if (puVar4 == (ulong *)0x0) {
    uVar9 = 0;
    plVar8 = (long *)0x0;
    uVar12 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  else {
    uVar9 = *puVar4;
    uVar10 = (int)uVar9 - 1;
    uVar12 = (ulong)uVar10;
    *(uint *)(param_1 + 0xac) = uVar10;
    if ((ulong)(long)(int)uVar10 < uVar9) {
      plVar8 = *(long **)(puVar4[1] + (long)(int)uVar10 * 8);
    }
    else {
      plVar8 = (long *)0x0;
    }
  }
  iVar11 = (int)uVar12;
  lVar6 = param_1;
  (**(code **)(param_1 + 0x48))(param_1,plVar8,plVar8);
  plVar3 = plVar8;
  if ((int)lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar7 = *(long *)(lVar6 + 0x18);
    plVar13 = plVar8;
    if (((uint)lVar7 >> 0x13 & 1) != 0) goto LAB_100735d84;
    if (1 < (int)uVar9) {
      uVar10 = (int)uVar9 - 2;
      uVar12 = (ulong)uVar10;
      *(uint *)(param_1 + 0xac) = uVar10;
      puVar4 = *(ulong **)(param_1 + 0x98);
      if (puVar4 == (ulong *)0x0) goto LAB_100735e8c;
      if ((ulong)uVar10 < *puVar4) goto LAB_100735e70;
      goto LAB_100735e8c;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x15;
    *(long **)(param_1 + 0xb8) = plVar8;
                    /* WARNING: Could not recover jumptable at 0x000100735d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0,param_1);
    return;
  }
LAB_100735e90:
  do {
    uVar10 = (uint)uVar12;
    plVar13 = plVar8;
    do {
      do {
        plVar8 = plVar3;
        if ((int)uVar10 < 0) {
          return;
        }
        iVar11 = (int)uVar12;
        *(int *)(param_1 + 0xac) = iVar11;
        if (plVar8 == plVar13) {
          lVar6 = *(long *)(param_1 + 0x20);
          lVar7 = *(long *)(lVar6 + 0x18);
          if (((uint)lVar7 >> 0xe & 1) != 0) goto LAB_100735eb0;
        }
        else {
LAB_100735eb0:
          if ((plVar13 == (long *)0x0) || (*plVar13 == 0)) {
LAB_100735f10:
            *(undefined4 *)(param_1 + 0xb0) = 6;
            *(long **)(param_1 + 0xb8) = plVar13;
            iVar1 = 0;
            (*UNRECOVERED_JUMPTABLE)(0,param_1);
            lVar6 = 0;
            if (iVar1 == 0) {
              return;
            }
          }
          else {
            lVar6 = *(long *)(*plVar13 + 0x30);
            FUN_100736868();
            if (lVar6 == 0) goto LAB_100735f10;
            plVar3 = plVar8;
            func_0x000100736a98(plVar8,lVar6);
            if ((int)plVar3 < 1) {
              *(undefined4 *)(param_1 + 0xb0) = 7;
              *(long **)(param_1 + 0xb8) = plVar8;
              iVar1 = 0;
              (*UNRECOVERED_JUMPTABLE)(0,param_1);
              if (iVar1 == 0) {
                FUN_10021f114(lVar6);
                return;
              }
            }
          }
          FUN_10021f114(lVar6);
          lVar6 = *(long *)(param_1 + 0x20);
          lVar7 = *(long *)(lVar6 + 0x18);
        }
LAB_100735d84:
        uVar12 = lVar6 + 8U & (lVar7 << 0x3e) >> 0x3f;
        uVar2 = **(undefined8 **)(*plVar8 + 0x20);
        FUN_100735f64(uVar2,uVar12);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0xd;
          *(long **)(param_1 + 0xb8) = plVar8;
          pcVar5 = *(code **)(param_1 + 0x38);
LAB_100735dd8:
          iVar1 = 0;
          (*pcVar5)();
          if (iVar1 == 0) {
            return;
          }
        }
        else if (0 < (int)uVar2) {
          *(undefined4 *)(param_1 + 0xb0) = 9;
          *(long **)(param_1 + 0xb8) = plVar8;
          pcVar5 = *(code **)(param_1 + 0x38);
          goto LAB_100735dd8;
        }
        uVar2 = *(undefined8 *)(*(long *)(*plVar8 + 0x20) + 8);
        FUN_100735f64(uVar2,uVar12);
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0xe;
          *(long **)(param_1 + 0xb8) = plVar8;
          pcVar5 = *(code **)(param_1 + 0x38);
LAB_100735e28:
          iVar1 = 0;
          (*pcVar5)();
          if (iVar1 == 0) {
            return;
          }
        }
        else if ((int)uVar2 < 0) {
          *(undefined4 *)(param_1 + 0xb0) = 10;
          *(long **)(param_1 + 0xb8) = plVar8;
          pcVar5 = *(code **)(param_1 + 0x38);
          goto LAB_100735e28;
        }
        *(long **)(param_1 + 0xb8) = plVar8;
        *(long **)(param_1 + 0xc0) = plVar13;
        iVar1 = 1;
        (*UNRECOVERED_JUMPTABLE)(1,param_1);
        if (iVar1 == 0) {
          return;
        }
        uVar10 = iVar11 - 1;
        uVar12 = (ulong)uVar10;
        plVar3 = plVar8;
      } while (iVar11 < 1);
      puVar4 = *(ulong **)(param_1 + 0x98);
      if (puVar4 == (ulong *)0x0) goto LAB_100735e8c;
      plVar13 = plVar8;
      plVar3 = (long *)0x0;
    } while (*puVar4 <= uVar12);
LAB_100735e70:
    plVar3 = *(long **)(puVar4[1] + uVar12 * 8);
  } while( true );
LAB_100735e8c:
  plVar3 = (long *)0x0;
  goto LAB_100735e90;
}



/* Entry: 100735f64; end: 10073607f;  */

undefined4 FUN_100735f64(int *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uStack_30;
  uint uStack_2c;
  long lStack_28;
  
  if (param_1[1] == 0x18) {
    if (*param_1 != 0xf) {
      return 0;
    }
    lVar2 = 0xe;
  }
  else {
    if (param_1[1] != 0x17) {
      return 0;
    }
    if (*param_1 != 0xd) {
      return 0;
    }
    lVar2 = 0xc;
  }
  lVar3 = lVar2;
  pbVar4 = *(byte **)(param_1 + 2);
  do {
    if (9 < *pbVar4 - 0x30) {
      return 0;
    }
    lVar3 = lVar3 + -1;
    pbVar4 = pbVar4 + 1;
  } while (lVar3 != 0);
  if ((*(byte **)(param_1 + 2))[lVar2] != 0x5a) {
    return 0;
  }
  lStack_28 = 0;
  if (param_2 == (long *)0x0) {
    func_0x000107c61698(&lStack_28);
  }
  else {
    lStack_28 = *param_2;
  }
  lVar2 = 0;
  FUN_100736080(0,lStack_28,0,0);
  if (lVar2 != 0) {
    puVar1 = &uStack_2c;
    FUN_100736378(puVar1,&uStack_30,param_1,lVar2);
    if ((int)puVar1 != 0) {
      uVar5 = 1;
      if (-1 < (int)(uStack_2c | uStack_30)) {
        uVar5 = 0xffffffff;
      }
      goto LAB_100736064;
    }
  }
  uVar5 = 0;
LAB_100736064:
  lStack_28 = lVar2;
  FUN_1004d164c(&lStack_28,&DAT_110c7b6c8,0);
  return uVar5;
}



/* Entry: 100736080; end: 100736137;  */

void FUN_100736080(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar1 = &uStack_38;
  uStack_38 = param_2;
  func_0x000107c6102c(puVar1,auStack_70);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0xc,0,0x71,&UNK_10f6c4b71,0x5b);
  }
  else if ((((int)param_3 == 0) && (param_4 == 0)) ||
          (puVar2 = puVar1, func_0x000107c2b1c0(puVar1,param_3,param_4), (int)puVar2 != 0)) {
    if (*(int *)((long)puVar1 + 0x14) - 0x32U < 100) {
      FUN_100736138();
    }
    else {
      func_0x000107c2b16c(param_1,uStack_38,param_3,param_4);
    }
  }
  return;
}



/* Entry: 100736138; end: 1007362c7;  */

uint * FUN_100736138(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar1 = param_1;
  uStack_48 = param_2;
  if (param_1 == (uint *)0x0) {
    puVar1 = (uint *)0x17;
    func_0x0001004ce0c4();
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  puVar3 = &uStack_48;
  func_0x000107c6102c(puVar3,auStack_80);
  if (((puVar3 == (undefined8 *)0x0) ||
      ((((int)param_3 != 0 || (param_4 != 0)) &&
       (puVar2 = puVar3, func_0x000107c2b1c0(puVar3,param_3,param_4), (int)puVar2 == 0)))) ||
     (*(int *)((long)puVar3 + 0x14) - 0x96U < 0xffffff9c)) goto LAB_100736294;
  puVar3 = *(undefined8 **)(puVar1 + 2);
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x1c;
    func_0x000107c610a0();
    if (puVar2 == (undefined8 *)0x0) {
LAB_100736278:
      FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4be5,0xdd);
LAB_100736294:
      if (param_1 == (uint *)0x0) {
        FUN_1001e33e0(*(undefined8 *)(puVar1 + 2));
        FUN_1001e33e0(puVar1);
      }
      return (uint *)0x0;
    }
    *puVar2 = 0x14;
  }
  else {
    if (0x13 < *puVar1) goto LAB_100736214;
    puVar2 = (undefined8 *)0x1c;
    func_0x000107c610a0();
    if (puVar2 == (undefined8 *)0x0) goto LAB_100736278;
    *puVar2 = 0x14;
    FUN_1001e33e0(puVar3);
  }
  puVar3 = puVar2 + 1;
  *(undefined8 **)(puVar1 + 2) = puVar3;
LAB_100736214:
  FUN_1007362c8(puVar3,0x14,&UNK_10f6c4c5a);
  func_0x000107c613d0();
  *puVar1 = (uint)puVar3;
  puVar1[1] = 0x17;
  return puVar1;
}



/* Entry: 1007362c8; end: 1007362ef;  */

void FUN_1007362c8(void)

{
  func_0x000107c616d0();
  return;
}



/* Entry: 1007362f0; end: 100736377;  */

bool FUN_1007362f0(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  long lVar19;
  undefined1 auStack_28 [8];
  
  if (param_2 == (uint *)0x0) {
    func_0x000107c61698(auStack_28);
    puVar6 = auStack_28;
    func_0x000107c6102c(puVar6,param_1);
    return puVar6 != (undefined1 *)0x0;
  }
  if (param_2[1] == 0x18) {
    if (param_2[1] != 0x18) {
      return false;
    }
    uVar1 = *param_2;
    uVar8 = (ulong)uVar1;
    if (0xc < (int)uVar1) {
      lVar16 = 0;
      uVar12 = 0;
      lVar11 = *(long *)(param_2 + 2);
      do {
        uVar10 = (uint)*(byte *)(lVar11 + uVar12);
        if ((uVar12 == 0xc) &&
           (uVar10 - 0x2b < 0x30 && (1L << ((ulong)(uVar10 - 0x2b) & 0x3f) & 0x800000000005U) != 0))
        {
          uVar12 = 0xc;
          if (param_1 != (int *)0x0) {
            *param_1 = 0;
          }
          goto code_r0x00010ae1cef4;
        }
        if (uVar8 <= uVar12) {
          return false;
        }
        if (9 < (uVar10 - 0x30 & 0xff)) {
          return false;
        }
        uVar7 = (uint)*(byte *)(lVar11 + uVar12 + 1);
        if (uVar7 - 0x3a < 0xfffffff6) {
          return false;
        }
        if ((uVar8 & 0xfffffffe) == uVar12) {
          return false;
        }
        iVar14 = uVar7 + (uVar10 * 10 + 0x20 & 0xfe);
        iVar13 = iVar14 + -0x30;
        if (iVar13 < *(int *)(&UNK_10e517b84 + lVar16 * 4)) {
          return false;
        }
        if (*(int *)(&UNK_10e517ba8 + lVar16 * 4) < iVar13) {
          return false;
        }
        if (param_1 != (int *)0x0) {
          iVar15 = (int)lVar16;
          if (iVar15 < 3) {
            if (iVar15 == 0) {
              iVar13 = iVar13 * 100 + -0x76c;
            }
            else {
              if (iVar15 != 1) {
                param_1[4] = iVar14 + -0x31;
                goto code_r0x00010ae1ced8;
              }
              iVar13 = param_1[5] + iVar13;
            }
            param_1[5] = iVar13;
          }
          else if (iVar15 < 5) {
            if (iVar15 == 3) {
              param_1[3] = iVar13;
            }
            else {
              param_1[2] = iVar13;
            }
          }
          else if (iVar15 == 5) {
            param_1[1] = iVar13;
          }
          else {
            *param_1 = iVar13;
          }
        }
code_r0x00010ae1ced8:
        uVar12 = uVar12 + 2;
        lVar16 = lVar16 + 1;
      } while (uVar12 != 0xe);
      uVar12 = 0xe;
code_r0x00010ae1cef4:
      if (*(char *)(lVar11 + uVar12) == '.') {
        if ((int)uVar1 <= (int)uVar12) {
          return false;
        }
        iVar14 = 1;
        uVar17 = uVar12;
        do {
          uVar12 = uVar17 + 1;
          iVar14 = iVar14 + -1;
          if (uVar8 <= uVar17) break;
          pbVar9 = (byte *)(lVar11 + 1 + uVar17);
          uVar17 = uVar12;
        } while (0xfffffff5 < *pbVar9 - 0x3a);
        if (iVar14 == 0) {
          return false;
        }
      }
      uVar10 = (uint)uVar12;
      bVar3 = *(byte *)(lVar11 + (int)uVar10);
      if (bVar3 < 0x2d) {
        uVar7 = uVar10;
        if (bVar3 == 0) goto code_r0x00010ae1d044;
        if (bVar3 != 0x2b) {
          return false;
        }
      }
      else if (bVar3 != 0x2d) {
        if (bVar3 != 0x5a) {
          return false;
        }
        uVar7 = uVar10 + 1;
        goto code_r0x00010ae1d044;
      }
      uVar7 = uVar10 + 5;
      if ((int)uVar7 <= (int)uVar1) {
        iVar14 = 0;
        pbVar9 = (byte *)(lVar11 + (int)(uVar10 + 1) + 1);
        bVar18 = true;
        lVar16 = 7;
        bVar5 = false;
        do {
          if ((byte)(pbVar9[-1] - 0x3a) < 0xf6) {
            return false;
          }
          if (*pbVar9 - 0x3a < 0xfffffff6) {
            return false;
          }
          iVar13 = (uint)*pbVar9 + (int)(char)(pbVar9[-1] * '\n') + -0x10;
          if (iVar13 < *(int *)(&UNK_10e517b84 + lVar16 * 4)) {
            return false;
          }
          if (*(int *)(&UNK_10e517ba8 + lVar16 * 4) < iVar13) {
            return false;
          }
          if (param_1 != (int *)0x0) {
            if (bVar18) {
              iVar14 = iVar13 * 0xe10;
            }
            else {
              iVar14 = iVar14 + iVar13 * 0x3c;
            }
          }
          bVar18 = false;
          pbVar9 = pbVar9 + 2;
          lVar16 = 8;
          bVar4 = !bVar5;
          bVar5 = true;
        } while (bVar4);
        if (iVar14 != 0) {
          iVar13 = -iVar14;
          if (bVar3 == 0x2d) {
            iVar13 = iVar14;
          }
          func_0x00010ae1e070(param_1,0,(long)iVar13);
          if ((int)param_1 == 0) {
            return false;
          }
        }
code_r0x00010ae1d044:
        return uVar7 == uVar1;
      }
    }
    return false;
  }
  if (param_2[1] != 0x17) {
    return false;
  }
  if (param_2[1] != 0x17) {
    return false;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0xb) {
LAB_100736404:
    bVar5 = false;
  }
  else {
    lVar16 = 0;
    uVar8 = 0;
    lVar11 = *(long *)(param_2 + 2);
    do {
      uVar10 = (uint)*(byte *)(lVar11 + uVar8);
      if ((uVar8 == 10) &&
         (uVar10 - 0x2b < 0x30 && (1L << ((ulong)(uVar10 - 0x2b) & 0x3f) & 0x800000000005U) != 0)) {
        lVar16 = 10;
        if (param_1 != (int *)0x0) {
          *param_1 = 0;
        }
        goto LAB_100736558;
      }
      if (uVar1 <= uVar8) {
        return false;
      }
      if (9 < (uVar10 - 0x30 & 0xff)) {
        return false;
      }
      uVar7 = (uint)*(byte *)(lVar11 + uVar8 + 1);
      if ((uVar7 - 0x3a < 0xfffffff6) || (((ulong)uVar1 & 0xfffffffe) == uVar8)) goto LAB_100736404;
      uVar7 = uVar7 + (uVar10 * 10 + 0x20 & 0xfe);
      iVar14 = uVar7 - 0x30;
      if ((iVar14 < *(int *)(&UNK_10e517f78 + lVar16 * 4)) ||
         (*(int *)(&UNK_10e517f98 + lVar16 * 4) < iVar14)) goto LAB_100736404;
      if (param_1 != (int *)0x0) {
        iVar13 = (int)lVar16;
        if (iVar13 < 3) {
          if (iVar13 == 0) {
            iVar13 = uVar7 + 0x34;
            if (0x61 < uVar7) {
              iVar13 = iVar14;
            }
            param_1[5] = iVar13;
          }
          else if (iVar13 == 1) {
            param_1[4] = uVar7 - 0x31;
          }
          else {
            param_1[3] = iVar14;
          }
        }
        else if (iVar13 == 3) {
          param_1[2] = iVar14;
        }
        else if (iVar13 == 4) {
          param_1[1] = iVar14;
        }
        else {
          *param_1 = iVar14;
        }
      }
      uVar8 = uVar8 + 2;
      lVar16 = lVar16 + 1;
    } while (uVar8 != 0xc);
    lVar16 = 0xc;
LAB_100736558:
    cVar2 = *(char *)(lVar11 + lVar16);
    uVar10 = (uint)lVar16;
    if ((cVar2 == '+') || (cVar2 == '-')) {
      uVar10 = uVar10 + 5;
      if ((int)uVar1 < (int)uVar10) goto LAB_100736404;
      iVar14 = 0;
      bVar18 = true;
      lVar19 = 6;
      bVar5 = false;
      pbVar9 = (byte *)(lVar16 + lVar11);
      do {
        if (((((byte)(pbVar9[1] - 0x3a) < 0xf6) ||
             (uVar7 = (uint)pbVar9[2], uVar7 - 0x3a < 0xfffffff6)) ||
            (iVar13 = uVar7 + (int)(char)(pbVar9[1] * '\n') + -0x10,
            iVar13 < *(int *)(&UNK_10e517f78 + lVar19 * 4))) ||
           (*(int *)(&UNK_10e517f98 + lVar19 * 4) < iVar13)) goto LAB_100736404;
        if (param_1 != (int *)0x0) {
          if (bVar18) {
            iVar14 = iVar13 * 0xe10;
          }
          else {
            iVar14 = iVar14 + iVar13 * 0x3c;
          }
        }
        bVar18 = false;
        lVar19 = 7;
        bVar4 = !bVar5;
        bVar5 = true;
        pbVar9 = pbVar9 + 2;
      } while (bVar4);
      if (iVar14 != 0) {
        iVar13 = -iVar14;
        if (cVar2 == '-') {
          iVar13 = iVar14;
        }
        func_0x000107c2b1c0(param_1,0,(long)iVar13);
        if ((int)param_1 == 0) goto LAB_100736404;
      }
    }
    else if (cVar2 == 'Z') {
      uVar10 = uVar10 | 1;
    }
    bVar5 = uVar10 == uVar1;
  }
  return bVar5;
}



/* Entry: 100736378; end: 1007363df;  */

void FUN_100736378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [56];
  
  iVar1 = (int)auStack_a0;
  puVar2 = auStack_68;
  FUN_1007362f0(puVar2,param_3);
  if (((int)puVar2 != 0) && (FUN_1007362f0(auStack_a0,param_4), iVar1 != 0)) {
    FUN_10073678c(param_1,param_2,auStack_68,auStack_a0);
  }
  return;
}



/* Entry: 1007363e0; end: 10073664b;  */

bool FUN_1007363e0(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  
  if (param_2[1] != 0x17) {
    return false;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0xb) {
LAB_100736404:
    bVar5 = false;
  }
  else {
    lVar12 = 0;
    uVar8 = 0;
    lVar9 = *(long *)(param_2 + 2);
    do {
      uVar6 = (uint)*(byte *)(lVar9 + uVar8);
      if ((uVar8 == 10) &&
         (uVar6 - 0x2b < 0x30 && (1L << ((ulong)(uVar6 - 0x2b) & 0x3f) & 0x800000000005U) != 0)) {
        lVar12 = 10;
        if (param_1 != (int *)0x0) {
          *param_1 = 0;
        }
        goto LAB_100736558;
      }
      if (uVar1 <= uVar8) {
        return false;
      }
      if (9 < (uVar6 - 0x30 & 0xff)) {
        return false;
      }
      uVar7 = (uint)*(byte *)(lVar9 + uVar8 + 1);
      if ((uVar7 - 0x3a < 0xfffffff6) || (((ulong)uVar1 & 0xfffffffe) == uVar8)) goto LAB_100736404;
      uVar7 = uVar7 + (uVar6 * 10 + 0x20 & 0xfe);
      iVar11 = uVar7 - 0x30;
      if ((iVar11 < *(int *)(&UNK_10e517f78 + lVar12 * 4)) ||
         (*(int *)(&UNK_10e517f98 + lVar12 * 4) < iVar11)) goto LAB_100736404;
      if (param_1 != (int *)0x0) {
        iVar10 = (int)lVar12;
        if (iVar10 < 3) {
          if (iVar10 == 0) {
            iVar10 = uVar7 + 0x34;
            if (0x61 < uVar7) {
              iVar10 = iVar11;
            }
            param_1[5] = iVar10;
          }
          else if (iVar10 == 1) {
            param_1[4] = uVar7 - 0x31;
          }
          else {
            param_1[3] = iVar11;
          }
        }
        else if (iVar10 == 3) {
          param_1[2] = iVar11;
        }
        else if (iVar10 == 4) {
          param_1[1] = iVar11;
        }
        else {
          *param_1 = iVar11;
        }
      }
      uVar8 = uVar8 + 2;
      lVar12 = lVar12 + 1;
    } while (uVar8 != 0xc);
    lVar12 = 0xc;
LAB_100736558:
    cVar2 = *(char *)(lVar9 + lVar12);
    uVar6 = (uint)lVar12;
    if ((cVar2 == '+') || (cVar2 == '-')) {
      uVar6 = uVar6 + 5;
      if ((int)uVar1 < (int)uVar6) goto LAB_100736404;
      iVar11 = 0;
      bVar13 = true;
      lVar14 = 6;
      bVar5 = false;
      pbVar4 = (byte *)(lVar12 + lVar9);
      do {
        if (((((byte)(pbVar4[1] - 0x3a) < 0xf6) ||
             (uVar7 = (uint)pbVar4[2], uVar7 - 0x3a < 0xfffffff6)) ||
            (iVar10 = uVar7 + (int)(char)(pbVar4[1] * '\n') + -0x10,
            iVar10 < *(int *)(&UNK_10e517f78 + lVar14 * 4))) ||
           (*(int *)(&UNK_10e517f98 + lVar14 * 4) < iVar10)) goto LAB_100736404;
        if (param_1 != (int *)0x0) {
          if (bVar13) {
            iVar11 = iVar10 * 0xe10;
          }
          else {
            iVar11 = iVar11 + iVar10 * 0x3c;
          }
        }
        bVar13 = false;
        lVar14 = 7;
        bVar3 = !bVar5;
        bVar5 = true;
        pbVar4 = pbVar4 + 2;
      } while (bVar3);
      if (iVar11 != 0) {
        iVar10 = -iVar11;
        if (cVar2 == '-') {
          iVar10 = iVar11;
        }
        func_0x000107c2b1c0(param_1,0,(long)iVar10);
        if ((int)param_1 == 0) goto LAB_100736404;
      }
    }
    else if (cVar2 == 'Z') {
      uVar6 = uVar6 | 1;
    }
    bVar5 = uVar6 == uVar1;
  }
  return bVar5;
}



/* Entry: 10073664c; end: 10073678b;  */

undefined8 FUN_10073664c(int *param_1,int param_2,long param_3,long *param_4,uint *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = (int)(SUB168(SEXT816(param_3) * SEXT816(0x1845c8a0ce512957),8) >> 0xd) -
          (SUB164(SEXT816(param_3) * SEXT816(0x1845c8a0ce512957),0xc) >> 0x1f);
  param_2 = param_2 + iVar3;
  uVar4 = (int)param_3 + iVar3 * -0x15180 + param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1;
  uVar6 = uVar4;
  iVar3 = param_2;
  if ((uVar4 & 0x80000000) != 0) {
    uVar6 = uVar4 + 0x15180;
    iVar3 = param_2 + -1;
  }
  if (0x1517f < (int)uVar4) {
    iVar3 = param_2 + 1;
    uVar6 = uVar4 - 0x15180;
  }
  iVar8 = (param_1[4] + -0xd) / 0xc;
  iVar5 = param_1[5] + iVar8;
  iVar7 = (iVar5 + 0x76c) * 0x5b5;
  iVar2 = iVar7 + 0x6b01c0;
  iVar7 = iVar7 + 0x6b01c3;
  if (-1 < iVar2) {
    iVar7 = iVar2;
  }
  iVar5 = ((iVar5 + 0x1a90) / 100) * 3;
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  lVar1 = (long)(((param_1[3] + (iVar7 >> 2) + ((param_1[4] + iVar8 * -0xc) * 0x16f + -0x16f) / 0xc)
                 - (iVar2 >> 2)) + -0x7d4b) + (long)iVar3;
  if (lVar1 < 0) {
    return 0;
  }
  *param_4 = lVar1;
  *param_5 = uVar6;
  return 1;
}



/* Entry: 10073678c; end: 100736863;  */

void FUN_10073678c(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  int iStack_38;
  int iStack_34;
  
  FUN_10073664c(param_3,0,0,&lStack_40,&iStack_34);
  if (((int)param_3 != 0) && (FUN_10073664c(param_4,0,0,&lStack_48,&iStack_38), (int)param_4 != 0))
  {
    iStack_38 = iStack_38 - iStack_34;
    uVar1 = (uint)((lStack_48 - lStack_40 != 0 && lStack_40 <= lStack_48) && iStack_38 < 0);
    iVar2 = iStack_38 + 0x15180;
    if (uVar1 == 0) {
      iVar2 = iStack_38;
    }
    lVar4 = (lStack_48 - lStack_40) - (ulong)uVar1;
    iVar3 = iVar2 + -0x15180;
    if (lVar4 >= 0 || 0 >= iVar2) {
      iVar3 = iVar2;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = (int)lVar4 + (uint)(lVar4 < 0 && 0 < iVar2);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
  }
  return;
}



/* Entry: 100736864; end: 100736867;  */

void FUN_100736864(void)

{
  return;
}



/* Entry: 100736868; end: 100736a17;  */

int * FUN_100736868(ulong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (param_1 != 0) {
    lVar5 = 0x1133114a8;
    func_0x000107c61288();
    if ((int)lVar5 != 0) {
LAB_100736a14:
      func_0x000107c60ebc();
      uVar3 = *(int *)(lVar5 + 0x14) - *(int *)((long)param_2 + 0x14);
      piVar7 = (int *)(ulong)uVar3;
      if (uVar3 == 0) {
        if (*(int *)(lVar5 + 0x14) != 0) {
          piVar7 = *(int **)(lVar5 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcmp_11034c650)(piVar7,param_2[3]);
          return piVar7;
        }
        piVar7 = (int *)0x0;
      }
      return piVar7;
    }
    lVar9 = *(long *)(param_1 + 0x10);
    lVar5 = 0x1133114a8;
    func_0x000107c6128c();
    if ((int)lVar5 != 0) goto LAB_100736a14;
    if (lVar9 != 0) {
      piVar7 = *(int **)(param_1 + 0x10);
      iVar8 = *piVar7;
      do {
        if (iVar8 == -1) break;
        iVar1 = *piVar7;
        if (iVar1 == iVar8) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar2 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar8 = iVar1;
      } while (!bVar4);
      return *(int **)(param_1 + 0x10);
    }
    param_2 = &uStack_28;
    uVar6 = param_1;
    FUN_10072d43c(param_1,param_2,&DAT_110c874c0);
    if (-1 < (int)uVar6) {
      uStack_30 = uVar6 & 0xffffffff;
      uStack_38 = uStack_28;
      piVar7 = (int *)&uStack_38;
      FUN_100201d78();
      if ((piVar7 != (int *)0x0) && (uStack_30 == 0)) {
        lVar5 = 0x1133114a8;
        func_0x000107c61290();
        if ((int)lVar5 == 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
            *(int **)(param_1 + 0x10) = piVar7;
            lVar5 = 0x1133114a8;
            func_0x000107c6128c();
            if ((int)lVar5 != 0) goto LAB_100736a14;
          }
          else {
            lVar5 = 0x1133114a8;
            func_0x000107c6128c();
            if ((int)lVar5 != 0) goto LAB_100736a14;
            FUN_10021f114(piVar7);
            piVar7 = *(int **)(param_1 + 0x10);
          }
          FUN_1001e33e0(uStack_28);
          iVar8 = *piVar7;
          do {
            if (iVar8 == -1) {
              return piVar7;
            }
            iVar1 = *piVar7;
            if (iVar1 == iVar8) {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar4) {
                *piVar7 = iVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar4 = cVar2 == '\0';
            }
            else {
              bVar4 = false;
              ClearExclusiveLocal();
            }
            iVar8 = iVar1;
          } while (!bVar4);
          return piVar7;
        }
        goto LAB_100736a14;
      }
      FUN_1004d2c58(0xb,0,0x7d,&UNK_10f6ce47e,0x9f);
      goto LAB_100736970;
    }
  }
  piVar7 = (int *)0x0;
LAB_100736970:
  FUN_1001e33e0(uStack_28);
  FUN_10021f114(piVar7);
  return (int *)0x0;
}



/* Entry: 100736a18; end: 100736a47;  */

ulong FUN_100736a18(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcmp_11034c650)(uVar2,*(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 100736a48; end: 100736b0b;  */

/* WARNING: Possible PIC construction at 0x0001007344c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007344cc) */

ulong FUN_100736a48(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 uStack_42;
  
  uVar4 = *param_1;
  FUN_100736a18(uVar4,*param_2);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  piVar5 = (int *)param_1[1];
  piVar7 = (int *)param_2[1];
  if (piVar5 == (int *)0x0 && piVar7 == (int *)0x0) {
    return 0;
  }
  if ((piVar5 == (int *)0x0) || (piVar7 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar9 = *piVar5;
  if (iVar9 != *piVar7) {
    return 0xffffffff;
  }
  if (iVar9 == 1) {
    return (ulong)(uint)(piVar5[2] - piVar7[2]);
  }
  if (iVar9 == 5) {
    return 0;
  }
  if (iVar9 == 6) {
    iVar9 = *(int *)(*(long *)(piVar5 + 2) + 0x14);
    uVar8 = iVar9 - *(int *)(*(long *)(piVar7 + 2) + 0x14);
    uVar4 = (ulong)uVar8;
    if (uVar8 == 0) {
      if (iVar9 != 0) {
        uVar6 = *(undefined8 *)(*(long *)(piVar7 + 2) + 0x18);
        uVar4 = *(ulong *)(*(long *)(piVar5 + 2) + 0x18);
code_r0x000107c610b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_11034c650)(uVar4,uVar6,(long)iVar9);
        return uVar4;
      }
      uVar4 = 0;
    }
    return uVar4;
  }
  piVar5 = *(int **)(piVar5 + 2);
  piVar7 = *(int **)(piVar7 + 2);
  iVar10 = *piVar7;
  uStack_42 = 0;
  iVar9 = *piVar5;
  iVar1 = piVar5[1];
  if (iVar1 == 3) {
    piVar3 = piVar5;
    FUN_10072d5c4(piVar5,(long)&uStack_42 + 1);
    iVar9 = (int)piVar3;
  }
  iVar2 = piVar7[1];
  if (iVar2 == 3) {
    piVar3 = piVar7;
    func_0x00010072d5c8(piVar7,&uStack_42);
    iVar10 = (int)piVar3;
  }
  if (iVar9 < iVar10) {
LAB_10073447c:
    uVar4 = 0xffffffff;
  }
  else {
    if (iVar9 <= iVar10) {
      if ((byte)uStack_42 < uStack_42._1_1_) goto LAB_10073447c;
      if ((byte)uStack_42 <= uStack_42._1_1_) {
        if (iVar9 == 0) {
          uVar8 = 0xffffffff;
          if (iVar2 <= iVar1) {
            uVar8 = (uint)(iVar2 < iVar1);
          }
          return (ulong)uVar8;
        }
        uVar6 = *(undefined8 *)(piVar7 + 2);
        uVar4 = *(ulong *)(piVar5 + 2);
        goto code_r0x000107c610b0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 100736b0c; end: 100736b7b;  */

/* WARNING: Possible PIC construction at 0x0001007344c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007344cc) */

ulong FUN_100736b0c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined2 uStack_42;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar9 = *param_1;
  if (iVar9 != *param_2) {
    return 0xffffffff;
  }
  if (iVar9 == 1) {
    return (ulong)(uint)(param_1[2] - param_2[2]);
  }
  if (iVar9 == 5) {
    return 0;
  }
  if (iVar9 == 6) {
    iVar9 = *(int *)(*(long *)(param_1 + 2) + 0x14);
    uVar7 = iVar9 - *(int *)(*(long *)(param_2 + 2) + 0x14);
    uVar8 = (ulong)uVar7;
    if (uVar7 == 0) {
      if (iVar9 != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_2 + 2) + 0x18);
        uVar8 = *(ulong *)(*(long *)(param_1 + 2) + 0x18);
code_r0x000107c610b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_11034c650)(uVar8,uVar5,(long)iVar9);
        return uVar8;
      }
      uVar8 = 0;
    }
    return uVar8;
  }
  piVar4 = *(int **)(param_1 + 2);
  piVar6 = *(int **)(param_2 + 2);
  iVar10 = *piVar6;
  uStack_42 = 0;
  iVar9 = *piVar4;
  iVar1 = piVar4[1];
  if (iVar1 == 3) {
    piVar3 = piVar4;
    FUN_10072d5c4(piVar4,(long)&uStack_42 + 1);
    iVar9 = (int)piVar3;
  }
  iVar2 = piVar6[1];
  if (iVar2 == 3) {
    piVar3 = piVar6;
    func_0x00010072d5c8(piVar6,&uStack_42);
    iVar10 = (int)piVar3;
  }
  if (iVar9 < iVar10) {
LAB_10073447c:
    uVar8 = 0xffffffff;
  }
  else {
    if (iVar9 <= iVar10) {
      if ((byte)uStack_42 < uStack_42._1_1_) goto LAB_10073447c;
      if ((byte)uStack_42 <= uStack_42._1_1_) {
        if (iVar9 == 0) {
          uVar7 = 0xffffffff;
          if (iVar2 <= iVar1) {
            uVar7 = (uint)(iVar2 < iVar1);
          }
          return (ulong)uVar7;
        }
        uVar5 = *(undefined8 *)(piVar6 + 2);
        uVar8 = *(ulong *)(piVar4 + 2);
        goto code_r0x000107c610b0;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



/* Entry: 100736b7c; end: 100736ceb;  */

undefined8
FUN_100736b7c(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  int *piVar2;
  
  if (param_5 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x4c;
LAB_100736c00:
    FUN_1004d2c58(0xb,0,uVar4,&UNK_10f6cd01e,uVar5);
    return 0;
  }
  if (param_3[1] == 3) {
    piVar2 = param_3;
    FUN_10072d5c4(param_3,&uStack_60);
    iVar1 = (int)piVar2;
    if ((char)uStack_60 != '\0') {
      uVar4 = 0x6d;
      uVar5 = 0x53;
      goto LAB_100736c00;
    }
  }
  else {
    iVar1 = *param_3;
  }
  lStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar3 = &uStack_60;
  FUN_100736cec(puVar3,param_2,param_5);
  if ((int)puVar3 != 0) {
    FUN_10072d43c(param_4,&lStack_68,param_1);
    if (lStack_68 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x66;
    }
    else {
      puVar3 = &uStack_60;
      FUN_100224e44(puVar3,*(undefined8 *)(param_3 + 2),(long)iVar1,lStack_68,(long)(int)param_4);
      if ((int)puVar3 != 0) {
        uVar4 = 1;
        goto LAB_100736cac;
      }
      uVar4 = 6;
      uVar5 = 0x6c;
    }
    FUN_1004d2c58(0xb,0,uVar4,&UNK_10f6cd01e,uVar5);
  }
  uVar4 = 0;
LAB_100736cac:
  FUN_1001e33e0(lStack_68);
  FUN_1001e33e0(uStack_58);
  if (puStack_48 != (undefined8 *)0x0) {
    (*(code *)*puStack_48)(uStack_50);
  }
  return uVar4;
}


